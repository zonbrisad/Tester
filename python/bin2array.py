#/usr/bin/python3
# -----------------------------------------------------------------------
# 
# Convert binary file to a hex encoded array for inclusion in C projects
#
# File:    bin2array.py
# Author:  Peter Malmberg <peter.malmberg@gmail.com>
# Date:    2016-02-19
# Version: 1.3
# Python:  >=3
# Licence: MIT
# Credits: Based on code written by ???
# -----------------------------------------------------------------------
# 
# History
#   1.3 Changed to Python 3
#       Added header to C and H files
# Todo 
#   Fix 2 and 4 byte integer size

import os
import struct
import logging
import argparse
from datetime import datetime, date, time

CHUNK_SIZE=12

def addHeader(file, fileName, brief, date, author, licence):
    file.write( 
    "/**\n"
    " *---------------------------------------------------------------------------\n"
    " * @file    "+fileName+"\n"
    " * @brief   "+brief+"\n"
    " *\n"
    " * @author  "+author+"\n"
    " * @date    "+date+"\n"
    " * @licence "+licence+"\n"
    " *\n"
    " *---------------------------------------------------------------------------\n"
    " */\n\n")

def readChunk(fd, size, nullTerminate):
    buf = fd.read(size)   
    if len(buf)<size and nullTerminate:
        buf = buf + "0x00"
    return buf

class BinToArray:
    def __init__(self):
        pass
    
    def ConvertFileToArray(self, strInFile, strOutFile, integerSize, ignoreBytes, endianNess, arrayName, nullTerminate, append, licence, author):
        """ Reads binary file at location strInFile and writes out a C array of hex values
        Parameters -
        strInFile - Path and filename of binary file to convert
        strOutFile - Path and filename of output. Suggested extension is .c or .cpp
        integerSize - Size in bytes of output array elements. Array generated is always
        of type uint8, uint16, uint32. These types would need to be defined using
        typedef if they don't exist, or the user can replace the type name with the
        appropriate keyword valid for the compiler size conventions
        ignoreBytes - Number of bytes to ignore at the beginning of binary file. Helps
        strip out file headers and only encode the payload/data.
        endianNess - Only used for integerSize of 2 or 4. 'l' for Little Endian, 'b' for
        Big Endian
        append - append to existing file
        """
        # Check integerSize value
        if integerSize not in (1, 2, 4):
            logging.debug("Integer Size parameter must be 1, 2 or 4")
            return
        # endif
        
        # Open input file
        try:
            fileIn = open(strInFile, 'rb')
        except IOError:
            logging.debug("Could not open input file %s" % (strInFile))
            return
        # end try
        
        # Open output file
        try:
            if (append>0):
                fileOut = open(strOutFile+'.c','a')     # append to file
            else:
                fileOut = open(strOutFile+'.c','w')      # overwrite file
                
        except IOError:
            logging.debug("Could not open output file %s" % (strOutFile))
            return
        # end try
            
        # Open include file
        try:
            if (append>0):
                fileInclude = open(strOutFile+'.h','a')     # append to file
            else:
                fileInclude = open(strOutFile+'.h','w')      # overwrite file
                
                #            fileInclude = open(strOutFile+'.h','w')
        except IOError:
            logging.debug("Could not open output file %s" % (strOutFile))
            return
        # end try
        
        if not append:
            date = datetime.now().strftime("%Y-%m-%d")
            addHeader(fileOut,     strOutFile+'.c', 'Binary resources', date, author, licence)
            addHeader(fileInclude, strOutFile+'.h', 'Binary resources', date, author, licence)
            fileOut.write("#include <stdint.h>\n\n")
        
        # Start array definition preamble
        inFileName = os.path.basename(strInFile)
        
        strVarType = "uint%d_t" % (integerSize * 8)
        
        # if no arrayname is given use filename
        if arrayName=='':
            spl = strInFile.split('.')
            arrayName = spl[0] + '_' + spl[1]
            
        fileOut.write("%s %s[] = {\n" % (strVarType,arrayName))
        fileInclude.write("extern %s %s[];\n\n" % (strVarType,arrayName))
                    
        # Convert and write array into C file
        fileIn.seek(ignoreBytes)
        if integerSize == 1:
            #bufChunk = fileIn.read(CHUNK_SIZE)
            bufChunk = readChunk(fileIn, CHUNK_SIZE, nullTerminate)
#            print(bufChunk)
            #print "Length ", len(bufChunk)
            #if len(bufChunk) < 20 and nullTerminate:
            #    bufChunk = bufChunk + "0x00"
                
                
            while bufChunk:
                fileOut.write("    ")
                for byteVal in bufChunk:
#                    print(byteVal)
                    #fileOut.write("0x%02x, " % ord(byteVal))
                    fileOut.write("0x%02x, " % byteVal)
                # end for
                    
                fileOut.write("\n")
                bufChunk = fileIn.read(CHUNK_SIZE)
            # end while
        else:
            if   endianNess == 'l' and integerSize == 2:
                endianFormatter = '<H'
                maxWordsPerLine = 8
            elif endianNess == 'l' and integerSize == 4:
                endianFormatter = '<L'
                maxWordsPerLine = 6
            elif endianNess == 'b' and integerSize == 2:
                endianFormatter = '>H'
                maxWordsPerLine = 8
            elif endianNess == 'b' and integerSize == 4:
                endianFormatter = '>L'
                maxWordsPerLine = 6
            # endif
            bufChunk = fileIn.read(integerSize)
            i = 0
            fileOut.write("    ")
            while bufChunk != '':
                wordVal = struct.unpack(endianFormatter, bufChunk)
                if integerSize == 2:
                    fileOut.write("0x%04x, " % wordVal)
                else:
                    fileOut.write("0x%08x, " % wordVal)
                # endif
                i += 1
                if i == maxWordsPerLine:
                    fileOut.write("\n    ")
                    i = 0
                # endif
#                bufChunk = fileIn.read(integerSize)
                bufChunk = readChunk(fileIn,integerSize, nullTerminate)
            # end while
        # end if
        
        # nullterminate if wanted
        if (nullTerminate):
            fileOut.write("0x0");
            
        # Close array definition
        fileOut.write("};\n")
        fileIn.close()
        fileOut.close()
        fileInclude.close()
        
if __name__ == "__main__":
    logging.basicConfig(level=logging.DEBUG)
 
    # options parsing
    parser = argparse.ArgumentParser(description="File to C array converter")
    parser.add_argument("infile",               type=str, help="Input file")
    parser.add_argument("outfile",              type=str, help="Output file")
    parser.add_argument("--licence",            type=str, help="Licence of new file", default="")
    parser.add_argument("--author",             type=str, help="Author of file",      default="")
#    parser.add_argument("--dir",                type=str, help="Directory where to store file",       default=".")
    parser.add_argument("-s","--intsize",       type=int, help="Integer size 1,2 or 4 bytes",       default=1)
    parser.add_argument("-i","--ignore",        type=int, help="Nr of bytes to ignore in begining", default=0)
    parser.add_argument("-e","--endian",        type=str, help="Endian [l, b]",                     default='l')
    parser.add_argument("-r","--arrayname",     type=str, help="Name of array",                     default='')
    parser.add_argument("-n","--nullterminate", action="store_true",   help="nullterminate",        default=False)
    parser.add_argument("-a", "--append",       action="store_true", help="append to existing file",     default=False)
    
    # parse arguments
    args = parser.parse_args()

    # create conversion object
    converter = BinToArray()                            
    
    # do the conversion
    converter.ConvertFileToArray( args.infile, args.outfile, args.intsize, 
    args.ignore, args.endian, args.arrayname, 
    args.nullterminate, args.append, args.licence, args.author)




