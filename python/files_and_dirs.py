


import os
import re
#import win32api
import string
from ctypes import windll


#
# List all files of  certain type in a directory
#
def listDir(dir):
  files = os.listdir(dir)
  jpegs = []
  for file in files:
    if file.endswith(".sys"):
      print(file)
  print(files)


def get_drives():
    drives = []
    bitmask = windll.kernel32.GetLogicalDrives()
    for letter in string.uppercase:
        if bitmask & 1:
            drives.append(letter)
        bitmask >>= 1
    print(drives)
    return drives


#
# Find all active driveletters on system
#
# return: list of all driveletters
#
def findDriveLetters():
  drives=[]
  for c in string.ascii_lowercase:
    if os.path.isdir(c+':'):
      drives.append(c+':')
  return drives


listDir('c:/')

d = re.findall(r"[A-Z]+:.*$",os.popen("mountvol /").read(),re.MULTILINE)
print (d)


drives = findDriveLetters()
print (drives)

files = []
for dirpath, dirnames, filenames in os.walk("c:\storage\Download"):
  #print (dirpath)
  #print (dirnames)
  #print(filenames)
  for file in filenames:
    files.append(dirpath+"\\"+file)

for f in files:
  print (f)

print("Enter input:")
r = os.read(0,100)

#print(r)

