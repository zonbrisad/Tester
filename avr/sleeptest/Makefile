# Hey Emacs, this is a -*- makefile -*-
#----------------------------------------------------------------------------
#
# Brief:   Test of AVR sleep function
# 
# Name:    sleeptest
# Author:  Peter Malmberg <peter.malmberg@gmail.com>
# Date:    
# Org:     PMG
# 
# License: MIT
# 
#----------------------------------------------------------------------------
# Makeplates is available at: https://github.com/zonbrisad/makeplates
#----------------------------------------------------------------------------

# Target platform (linux, win32, avr, arm, osx)
TARGET_PLATFORM = linux

# Project License (GPL, GPLv2, MIT, BSD, Apache, etc.) 
LICENSE = MIT

# Target file name (without extension).
TARGET = sleeptest

# List C, C++ and assembler source files here. (C/C++ dependencies are automatically generated.)
SRC = src/main.c \
      src/uart.c

# List C, C++ and assembler library/3rd party source files here. (C/C++ dependencies are automatically generated.)
LSRC =	

# Include directories
INCLUDE = src 

# Libraries to link
LIB   = -lm 
#LIB  += -lpthread

# Libraries to use in pkg-config system
PKGLIBS =


# Object files directory
#     To put object files in current directory, use a dot (.), do NOT make
#     this an empty or blank macro!
OBJDIR = .

# Build directory
BUILDDIR=build

# Output directory
OUTDIR = output

# Optimization level, can be [0, 1, 2, 3, s]. 
#     0 = turn off optimization. s = optimize for size.
OPT = 2

# Compiler flag to set the C and C++ Standard level.
# [ gnu99 gnu11 c++98 c++03 c++11 c++14 ] 
CSTANDARD   = gnu99
CPPSTANDARD = c++11

# C Macro definitions
CDEFS = 

# C++ Macro definitions
CPPDEFS = 

# Debug information --------------------------------------------------------- 
# 0 = no debug information 
# 1 = minimal debug information
# 2 = normal debug information 
# 3 = maximal debug information
DEBUG=0

# MCU name
MCU = atmega328p

# MCU frequency. (1000000  1843200  2000000 3686400 4000000 7372800 8000000 11059200 14745600)
F_CPU = 16000000

#
# Compiler and Linker options
#============================================================================

##- Build

# Compiler Options C --------------------------------------------------------
CFLAGS = -g$(DEBUG)                            # Debugging information
CFLAGS += -O$(OPT)                             # Optimisation level
CFLAGS += -std=$(CSTANDARD)                    # C standard
CFLAGS += $(patsubst %,-I%,$(INCLUDE))         # Include directories 
CFLAGS += $(patsubst %,-D%,$(CDEFS))           # Macro definitions
CFLAGS += -Wa,-adhlns=$(<:%.c=$(BUILDDIR)/%.lst) # Generate assembler listing

# Compiler Tuning C ---------------------------------------------------------
CFLAGS += -funsigned-char
#CFLAGS += -funsigned-bitfields
#CFLAGS += -fpack-struct
#CFLAGS += -fshort-enums
#CFLAGS += -fno-unit-at-a-time
#CFLAGS += -mshort-calls
#CFLAGS += -fPIC                  # Position independet code

# Compiler Warnings C -------------------------------------------------------
CFLAGS += -Wall                  # Standard warnings
CFLAGS += -Wextra                # Some extra warnings
CFLAGS += -Wmissing-braces 
CFLAGS += -Wmissing-declarations # Warn if global function is not declared
CFLAGS += -Wmissing-prototypes   # if a function is missing its prototype
#CFLAGS += -Wstrict-prototypes    # non correct prototypes i.e. void fun() => void fun(void) 
CFLAGS += -Wredundant-decls      # Warn if something is declared more than ones
CFLAGS += -Wunreachable-code     # if code is not used
CFLAGS += -Wshadow               # if local variable has same name as global
CFLAGS += -Wformat=2             # check printf and scanf for problems
#CFLAGS += -Wno-format-nonliteral # 
CFLAGS += -Wpointer-arith        # warn if trying to do aritmethics on a void pointer
#CFLAGS += -Wsign-compare
#CFLAGS += -Wundef
#CFLAGS += -Werror               # All warnings will be treated as errors


# Compiler Options C++ ------------------------------------------------------
CPPFLAGS = -g$(DEBUG)                              # Debugging information
CPPFLAGS += -O$(OPT)                               # Optimisation level
CPPFLAGS += -std=$(CPPSTANDARD)                    # C++ standard
CPPFLAGS += $(patsubst %,-I%,$(INCLUDE))           # Include directories 
CPPFLAGS += $(patsubst %,-D%,$(CPPDEFS))           # Macro definitions
CPPFLAGS += -Wa,-adhlns=$(<:%.cpp=$(BUILDDIR)/%.lst) # Generate assembler listing

# Compiler Tuning C++ -------------------------------------------------------
CPPFLAGS += -funsigned-char
CPPFLAGS += -funsigned-bitfields
#CPPFLAGS += -fpack-struct
CPPFLAGS += -fshort-enums
CPPFLAGS += -fno-exceptions
#CPPFLAGS += -mshort-calls
#CPPFLAGS += -fno-unit-at-a-time
#CPPFLAGS += -fPIC                  # Position independet code

# Compiler Warnings C++ -----------------------------------------------------
CPPFLAGS += -Wall                  # Standard warnings
CPPFLAGS += -Wextra                # Some extra warnings
CPPFLAGS += -Wmissing-braces 
CPPFLAGS += -Wmissing-declarations # Warn if global function is not declared
CPPFLAGS += -Wredundant-decls      # Warn if something is declared more than ones
CPPFLAGS += -Wunreachable-code     # if code is not used
#CPPFLAGS += -Wshadow               # if local variable has same name as global (problematic?)
CPPFLAGS += -Wformat=2             # check printf and scanf for problems
#CPPFLAGS += -Wno-format-nonliteral # 
CPPFLAGS += -Wpointer-arith        # warn if trying to do aritmethics on a void pointer
#CPPFLAGS += -Wsign-compare
#CPPFLAGS += -Wundef
#CPPFLAGS += -Werror              # All warnings will be treated as errors


# Linker Options ------------------------------------------------------------
#  -Wl,...:     tell GCC to pass this to linker.
#    -Map:      create map file
#    --cref:    add cross reference to  map file
LDFLAGS = -Wl,-Map=$(OUTDIR)/$(TARGET).map,--cref
LDFLAGS += $(EXTMEMOPTS)
LDFLAGS += $(patsubst %,-L%,$(INCLUDE))
LDFLAGS += -g

# Misc settings -------------------------------------------------------------
MPFLAGS  = -DLICENSE=$(LICENSE)
MPFLAGS += -DTARGET=$(TARGET)
MPFLAGS += -DVERSION=$(VERSION)
 
CFLAGS   += $(MPFLAGS)
CPPFLAGS += $(MPFLAGS)
ASFLAGS  += $(MPFLAGS)

#
# Platform specific options
#============================================================================

# Atmel AVR options ---------------------------------------------------------
CFLAGS   += -mmcu=$(MCU)
CPPFLAGS += -mmcu=$(MCU)
ASFLAGS  += -mmcu=$(MCU)

# Output format. (can be srec, ihex, binary) --------------------------------
FORMAT = ihex

# Debugging format.
#     Native formats for AVR-GCC's -g are dwarf-2 [default] or stabs.
#     AVR Studio 4.10 requires dwarf-2.
#     AVR [Extended] COFF format requires stabs, plus an avr-objcopy run.
DEBUG = dwarf-2

CDEFS   += F_CPU=$(F_CPU)UL
ADEFS   += F_CPU=$(F_CPU)UL
CPPDEFS += F_CPU=$(F_CPU)UL

# Toolchain base directory
TCHAIN_BASE=/usr/bin
# Toolchain prefix 
TCHAIN_PREFIX=avr-

TRGFILE=$(OUTDIR)/$(TARGET).elf

# Size flags ----------------------------------------------------------------
SIZEFLAGS = --mcu=$(MCU) --format=avr  # format = {sysv|berkeley}

# objdump flags -------------------------------------------------------------
ODFLAGS  = -h  # Display the contents of the section headers  
ODFLAGS += -S  # Intermix source code with disassembly
ODFLAGS += -z  #
#ODFLAGS += -r  # Display the relocation entries in the file

# object copy flags ---------------------------------------------------------
OCFLAGS = -O $(FORMAT) -R .eeprom -R .fuse -R .lock -R .signature

# Library Options -----------------------------------------------------------
# Minimalistic printf version
PRINTF_LIB_MIN = -Wl,-u,vfprintf -lprintf_min

# Floating point printf version (requires MATH_LIB = -lm below)
PRINTF_LIB_FLOAT = -Wl,-u,vfprintf -lprintf_flt

# If this is left blank, then it will use the Standard printf version.
PRINTF_LIB = 
#PRINTF_LIB = $(PRINTF_LIB_MIN)
#PRINTF_LIB = $(PRINTF_LIB_FLOAT)

# Minimalistic scanf version
SCANF_LIB_MIN = -Wl,-u,vfscanf -lscanf_min

# Floating point + %[ scanf version (requires MATH_LIB = -lm below)
SCANF_LIB_FLOAT = -Wl,-u,vfscanf -lscanf_flt

# If this is left blank, then it will use the Standard scanf version.
SCANF_LIB = 
#SCANF_LIB = $(SCANF_LIB_MIN)
#SCANF_LIB = $(SCANF_LIB_FLOAT)

MATH_LIB = -lm

# List any extra directories to look for libraries here.
#     Each directory must be seperated by a space.
#     Use forward slashes for directory separators.
#     For a directory that has spaces, enclose it in quotes.
EXTRALIBDIRS = 

LDFLAGS += $(PRINTF_LIB) $(SCANF_LIB) $(MATH_LIB)

#
# Tool settings
#============================================================================

# Define programs and commands ----------------------------------------------
SHELL      = bash
WINSHELL   = cmd
REMOVE     = rm -f
REMOVEDIR  = rm -rf
COPY       = cp -f 
MOVE       = mv -f
MKDIR      = mkdir -p
SED        = sed               # stream editor program
CPPCHECK   = cppcheck
INSTALL    = install
ASTYLE     = astyle            # Code beatyfier
DOXYGEN    = doxygen           # Code documetation program
MPTEMPLATE = tools/mptemplate  # C/C++ template tool
BIN2ARRAY  = tools/mpbin2array # Binary to array tool
MPUTILS    = tools/mputils     # Makeplate utilities


TCHAIN = $(TCHAIN_BASE)/$(TCHAIN_PREFIX)

CC        = ${TCHAIN}gcc
CPP       = ${TCHAIN}g++
OBJCOPY   = ${TCHAIN}objcopy
OBJDUMP   = ${TCHAIN}objdump
SIZE      = ${TCHAIN}size
AR        = ${TCHAIN}ar rcs
NM        = ${TCHAIN}nm
AS        = ${TCHAIN}as
GDB       = ${TCHAIN}gdb
STRIP     = ${TCHAIN}strip

#
# Message/Filter settings
#============================================================================

# Color attributes 
E_FG_BLACK        = \e[0;300m
E_FG_RED          = \e[0;31m
E_FG_GREEN        = \e[0;32m
E_FG_YELLOW       = \e[0;33m
E_FG_BLUE         = \e[0;34m
E_FG_MAGENTA      = \e[0;35m
E_FG_CYAN         = \e[0;36m
E_FG_GRAY         = \e[0;37m
E_FG_DARKGRAY     = \e[1;30m
E_FG_BR_RED       = \e[1;31m
E_FG_BR_GREEN     = \e[1;32m
E_FG_BR_YELLOW    = \e[1;33m
E_FG_BR_BLUE      = \e[1;34m
E_FG_BR_MAGENTA   = \e[1;35m
E_FG_BR_CYAN      = \e[1;36m
E_FG_WHITE        = \e[1;37m
E_BG_BLACK        = \e[40m
E_BG_RED          = \e[41m
E_BG_GREEN        = \e[42m
E_BG_YELLOW       = \e[43m
E_BG_BLUE         = \e[44m
E_BG_MAGENTA      = \e[45m
E_BG_CYAN         = \e[46m
E_BG_WHITE        = \e[47m

# Style attributes
E_BOLD=\e[1m
E_DIM=\e[2m
E_UNDERLINE=\e[4m
E_BLINK=\e[5m
E_REVERSE=\e[7m

E_RESET           = \e[0m

# System color definitions
C_OK=$(E_FG_BR_GREEN)
C_WARNING=$(E_FG_BR_YELLOW)
C_ERROR=$(E_FG_BR_RED)
C_FILE=$(E_FG_BR_CYAN)
C_DIR=$(E_FG_CYAN)
C_NOTE=$(E_FG_BR_GREEN)
C_MSG=$(E_FG_BR_GREEN)
C_ACTION=$(E_FG_BR_MAGENTA)
C_VALUE=$(E_FG_WHITE)$(E_BG_BLUE)
C_IDENTIFIER=$(E_FG_WHITE)

# Messages ------------------------------------------------------------------
MSG_LINE             = "$(E_FG_WHITE)------------------------------------------------------------------$(E_RESET)"
MSG_BEGIN            = "${E_FG_WHITE}-------------------------------- Begin ---------------------------${E_RESET}"
MSG_END              = "${E_FG_WHITE}-------------------------------- End -----------------------------${E_RESET}"
MSG_ERRORS_NONE      = "${C_OK}Errors: none ${E_RESET}"
MSG_STRIP            = "${C_ACTION}Striping:${E_RESET}"
MSG_LINKING          = "${C_ACTION}Linking:${E_RESET}"
MSG_COMPILING        = "${C_ACTION}Compiling C:  ${E_RESET}"
MSG_COMPILING_CPP    = "${C_ACTION}Compiling C++:${E_RESET}"
MSG_ASSEMBLING       = "${C_ACTION}Assembling:${E_RESET}"
MSG_CLEANING         = "$(C_ACTION)Cleaning project:$(E_RESET)"
MSG_EXTENDED_LISTING = "${C_ACTION}Creating Extended Listing/Disassembly:$(E_RESET)"
MSG_SYMBOL_TABLE     = "${C_ACTION}Creating Symbol Table:$(E_RESET)"
MSG_HEX_FILE         = "${C_ACTION}Creating Hex file:$(E_RESET)"
MSG_FORMATERROR      = "${C_ERROR}Can not handle output-format${E_RESET}"
MSG_ASMFROMC         = "${C_ACTION}Creating asm-File from C-Source:$(E_RESET)"
MSG_SIZE_BEFORE      = "${C_ACTION}Size before:${E_RESET}"
MSG_SIZE_AFTER       = "${C_ACTION}Size after build:${E_RESET}"
MSG_LOAD_FILE        = "${C_ACTION}Creating load file:${E_RESET}"
MSG_ARCHIVING        = "${C_ACTION}Creating tar archive:${E_RESET}"
MSG_CREATING_LIBRARY = "${C_ACTION}Creating library:${E_RESET}"
MSG_FLASH            = "${C_ACTION}Creating load file for Flash:${E_RESET}"
MSG_EEPROM           = "${C_ACTION}Creating load file for EEPROM:${E_RESET}"
MSG_COFF             = "${C_ACTION}Converting to AVR COFF:${E_RESET}"
MSG_EXTENDED_COFF    = "${C_ACTION}Converting to AVR Extended COFF:${E_RESET}"
MSG_MOC              = "${C_ACTION}Creating MOC file:${E_RESET}"
MSG_UI               = "${C_ACTION}Generating UI header:${E_RESET}"
MSG_BACKUP           = "${C_ACTION}Making incremental backup of project:${E_RESET}"
MSG_SRC              = "${C_MSG}Source files $(E_FG_GREEN)-----------------------------------------------------${E_RESET}"
MSG_FLAGS            = "${C_MSG}Compiler Flags $(E_FG_GREEN)---------------------------------------------------${E_RESET}"
MSG_LINKER           = "${C_MSG}Linker Flags $(E_FG_GREEN)-----------------------------------------------------${E_RESET}"
MSG_PROJECT          = "${C_MSG}Project info $(E_FG_GREEN)-----------------------------------------------------${E_RESET}"
MSG_INCLUDES         = "${C_MSG}Include directories $(E_FG_GREEN)----------------------------------------------${E_RESET}"
MSG_OBJECTS          = "${C_MSG}Object files $(E_FG_GREEN)-----------------------------------------------------${E_RESET}"	
MSG_DEFS             = "${C_MSG}Macro definitions $(E_FG_GREEN)------------------------------------------------${E_RESET}"
MSG_INSTALL_INFO     = "${C_MSG}Install settings $(E_FG_GREEN)-------------------------------------------------${E_RESET}"
MSG_INSTALLING       = "${C_ACTION}Installing:   ${E_RESET}"
MSG_BUILDING         = "$(C_ACTION)Building:     "
	
# Compiler output colorizer filter ------------------------------------------
F_SOURCE=| sed -e "s/\(.*\/\)\(.*\)/$$(printf "$(C_DIR)")\1$$(printf "$(C_FILE)")\2$$(printf "$(E_RESET)")/"
F_INF="s/In function/$$(printf "$(E_FG_BR_GREEN)")&$$(printf "$(E_RESET)")/i"
F_NOTE="s/note:/$$(printf "$(C_NOTE)")&$$(printf "$(E_RESET)")/i"
F_WARNING="s/warning:/$$(printf "$(C_WARNING)")&$$(printf "$(E_RESET)")/i"
F_ERROR="s/error:/$$(printf "$(C_ERROR)")&$$(printf "$(E_RESET)")/i"
F_FATAL_ERROR="s/fatal error:/$$(printf "$(C_ERROR)")&$$(printf "$(E_RESET)")/i"
F_WARNING1="s/defined but not used/$$(printf "$(C_WARNING)")&$$(printf "$(E_RESET)")/i"
F_WARNING2="s/unused variable/$$(printf "$(C_WARNING)")&$$(printf "$(E_RESET)")/i"
F_WARNING3="s/may be used uninitialized in this function/$$(printf "$(C_WARNING)")&$$(printf "$(E_RESET)")/i"
F_WARNING4="s/implicit declaration of function/$$(printf "$(C_WARNING)")&$$(printf "$(E_RESET)")/i"
F_WARNING5="s/value computed is not used/$$(printf "$(C_WARNING)")&$$(printf "$(E_RESET)")/i"
F_BRACKET="s/\[\(.*\)\]/[$$(printf "$(E_FG_GREEN)")\1$$(printf "$(E_RESET)")]/"	
F_VARIABLE="s/\‘\(.*\)[\’\‘]/'$$(printf "$(C_IDENTIFIER)")\1$$(printf "$(E_RESET)")'/g"
F_FILE="s/[^: ]*/$$(printf "$(C_FILE)")&$$(printf "$(E_RESET)")/"
F_ROWNR="s/:\([0-9]*\):\([0-9]*\):/:$$(printf "$(C_VALUE)")\1$$(printf "$(E_RESET)"):$$(printf "$(C_VALUE)")\2$$(printf "$(E_RESET)"):/"

C_FILTER   = | sed -u -e $(F_BRACKET) -e $(F_FILE) -e $(F_ROWNR)          \
                      -e $(F_INF) -e $(F_NOTE)                            \
 	                  -e $(F_WARNING) -e $(F_ERROR) -e $(F_FATAL_ERROR)   \
                      -e $(F_WARNING1) -e $(F_WARNING2) -e $(F_WARNING3)  \
                      -e $(F_WARNING4) -e $(F_WARNING5)                   \
                      -e $(F_VARIABLE)

CPP_FILTER = $(C_FILTER)

LD_ERROR1="s/undefined reference/$$(printf "$(C_ERROR)")&$$(printf "$(E_RESET)")/i"
LD_ERROR2="s/No such file or directory/$$(printf "$(C_ERROR)")&$$(printf "$(E_RESET)")/i"
LD_FILTER = | sed -ru -e $(LD_ERROR1) -e $(LD_ERROR2)
	
#
# Build rules	
#============================================================================

# Compiler flags to generate dependency files.
GENDEPFLAGS = -MMD -MP -MF .dep/$(@F).d

# Combine all necessary flags and optional flags.
# Add target processor to flags.
ALL_CFLAGS   =  -I. $(CFLAGS) $(GENDEPFLAGS)
ALL_CPPFLAGS =  -I. -x c++ $(CPPFLAGS) $(GENDEPFLAGS)
ALL_ASFLAGS  =  -I. -x assembler-with-cpp $(ASFLAGS)

# Filter out C sources
CSRC_1 = $(patsubst %.cpp,  , $(SRC) $(LSRC))
CSRC   = $(patsubst %.S,    , $(CSRC_1))

# Filter out C++ sources
CPPSRC_1 = $(patsubst %.c,  , $(SRC) $(LSRC))
CPPSRC   = $(patsubst %.S,  , $(CPPSRC_1))

# Filter out Assembler sources
ASRC_1 = $(patsubst %.c,    , $(SRC) $(LSRC))
ASRC   = $(patsubst %.cpp,  , $(ASRC_1))

# Define all object files.
COBJS    = $(patsubst %.c,   $(BUILDDIR)/%.o, $(CSRC))
CPPOBJS  = $(patsubst %.cpp, $(BUILDDIR)/%.o, $(CPPSRC))
AOBJS    = $(patsubst %.S,   $(BUILDDIR)/%.o, $(ASRC))

OBJS    = $(COBJS) $(CPPOBJS) $(AOBJS)

# Define all listing files.
LST = $(patsubst %.c, $(OBJDIR)/%.lst, $(CSRC)) $(patsubst %.cpp, $(OBJDIR)/%.lst, $(CPPSRC)) $(patsubst %.S, $(OBJDIR)/%.lst, $(ASRC))

# Default target.
all: begin build finished end ##D Build project (default)

nc: C_FILTER:= 
nc: all   ##D Build with no color filter on compiler output

build: elf hex lss sym size

elf: $(TRGFILE)
lss: $(OUTDIR)/$(TARGET).lss
sym: $(OUTDIR)/$(TARGET).sym
hex: $(OUTDIR)/$(TARGET).hex
eep: $(OUTDIR)/$(TARGET).eep

begin:
	@echo -e $(MSG_BEGIN)
	@echo -e ${MSG_BUILDING}" $(E_BR_GREEN)$(TARGET) $(E_RESET)"
 
end:
	@echo
	@echo -e $(MSG_END)
	
finished:
	@echo

# Linking targets from object files
.PRECIOUS : $(OBJS)
$(TRGFILE): $(UIH) $(OBJS) $(OUTDIR)
	@echo -en "\n"$(MSG_LINKING)"       "
	@echo -e $@ $(F_SOURCE) 
	@$(CPP) $(ALL_CFLAGS) $(OBJS) --output $@ $(LDFLAGS) $(LIB) 2>&1 $(LD_FILTER)
	
# Create extended listing file/disassambly from ELF output file.
# using objdump testing: option -C
%.lss:	$(TRGFILE)
	@echo -en "\n"$(MSG_EXTENDED_LISTING) "\n               "
	@echo -e $@ $(F_SOURCE)
	@$(OBJDUMP) $(ODFLAGS) $< > $@
	
# Create a symbol table from ELF output file.
%.sym: $(TRGFILE)
	@echo -en "\n"${MSG_SYMBOL_TABLE}"\n               "
	@echo -e $@ $(F_SOURCE)
	@$(NM) -n $< > $@

# Create hex file from ELF output file.
%.hex: $(TRGFILE)
	@echo
	@echo -en $(MSG_HEX_FILE) "\n               "
	@echo -e $@ $(F_SOURCE)
	@$(OBJCOPY) $(OCFLAGS) $< $@

# Compile: create object files from C source files.
$(COBJS): $(BUILDDIR)/%.o : %.c
	@$(MKDIR) $(@D)                                       # Create directory for object file
	@echo -en $(MSG_COMPILING)" "
	@echo -e $< $(F_SOURCE)
	@$(CC) -c $(ALL_CFLAGS) $< -o $@ 2>&1  $(C_FILTER)

# Compile: create object files from C++ source files.
$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	@$(MKDIR) $(@D)                                       # Create directory for object file
	@echo -en $(MSG_COMPILING_CPP)" " 
	@echo -e $< $(F_SOURCE)
	@$(CPP) -c $(ALL_CPPFLAGS) $< -o $@ 2>&1  $(CPP_FILTER)
	
# Assemble: create object files from assembler source files.
$(AOBJS): $(BUILDDIR)/%.o : %.S
	@$(MKDIR) $(@D)                                       # Create directory for object file
	@echo -en $(MSG_ASSEMBLING) "  "
	@echo -e $< $(F_SOURCE)
	@$(CC) -c $(ALL_ASFLAGS) $< -o $@ 2>&1

# Compile: create assembler files from C source files.
$(OBJDIR)/%.s : %.c
	@$(CC) -S $(ALL_CFLAGS) $< -o $@

# Compile: create assembler files from C++ source files.
$(OBJDIR)/%.s : %.cpp
	@$(CC) -S $(ALL_CPPFLAGS) $< -o $@

# Create output dir
$(OUTDIR):
	@$(MKDIR) $@

# Create build dir
$(BUILDDIR):
	@$(MKDIR) $@

# Print information about target binary 
size: $(TRGFILE)
	@echo
	@echo -e $(MSG_SIZE_AFTER)
	@$(SIZE) $(SIZEFLAGS) $(TRGFILE)

strip: $(TRGFILE) ##D Strip target binary from symbols
	@echo -e $(MSG_STRIP)
	@$(STRIP) $(TRGFILE)

#
# AVR specific targets
#============================================================================

coff: $(TRGFILE)
	@echo
	@echo -e $(MSG_COFF)"\n             $(E_FG_BR_CYAN)" $(TARGET).cof "$(E_RESET)"
	$(COFFCONVERT) -O coff-avr $< $(TARGET).cof

extcoff: $(TRGFILE)
	@echo
	@echo -e $(MSG_EXTENDED_COFF)"\n             $(E_FG_BR_CYAN)" $(TARGET).cof "$(E_RESET)"
	@$(COFFCONVERT) -O coff-ext-avr $< $(TARGET).cof

%.eep: $(TRGFILE)
	@echo
	@echo -en $(MSG_EEPROM)"\n               "
	@echo -e $@ $(F_SOURCE)
	@$(OBJCOPY) -j .eeprom --set-section-flags=.eeprom="alloc,load" \
	--change-section-lma .eeprom=0 --no-change-warnings -O $(FORMAT) $< $@ || exit 0


# Include the dependency files.
-include $(shell mkdir .dep 2>/dev/null) $(wildcard .dep/*)


##- Run/debug

#
# AVR simulator
#============================================================================
.PHONY: sim term

# QEMU machine type		
QMACHINE = arduino-uno

# tcp port for QEMU virtual serial port
QPORT = 5678

sim: ##D Run program in qemu AVR simulator
	@echo 
	@echo Starting QEMU avr simulator. Connect to tcp port $(QPORT). 
	@echo
	@qemu-system-avr -machine $(QMACHINE) -bios $(TRGFILE) -serial tcp::$(QPORT),server=on,wait=off -nographic
	
term: ##D Connect to QEMU virtual serial port via telnet terminal 
	@$(MPUTILS) sermon $(QPORT)

##- Install

#
# Avrdude
#============================================================================
AVRDUDE_PORT = /dev/ttyUSB1

flash: $(TARGET).hex # $(TARGET).eep  ##D Write program to MCU flash with avrdude
	@mpterm.py --suspend
	@$(MPUTILS) avrdude-arduino $(TARGET).hex $(MCU) $(AVRDUDE_PORT) 

##- Utils

#
# Various utility rules	
#============================================================================

clean:  ##D Remove all build files
	@echo
	@echo -e $(MSG_CLEANING)
	@$(REMOVE) $(OUTDIR)/$(TARGET)
	@$(REMOVE) $(OUTDIR)/$(TARGET).elf
	@$(REMOVE) $(OUTDIR)/$(TARGET).hex
	@$(REMOVE) $(OUTDIR)/$(TARGET).lss
	@$(REMOVE) $(OUTDIR)/$(TARGET).map
	@$(REMOVE) $(OUTDIR)/$(TARGET).sym
	@$(REMOVE) $(OUTDIR)/$(TARGET).bin
	@$(REMOVE) $(OUTDIR)/$(TARGET).eep
	@$(REMOVE) $(OUTDIR)/$(TARGET).cof
	@$(REMOVE) $(OBJS)
	@$(REMOVE) $(LST)
	@$(REMOVE) $(MOCSRC)
	@$(REMOVE) $(UIH)
	@$(REMOVEDIR) .dep
	@$(REMOVEDIR) $(BUILDDIR)	
	@find . -name "*~" -delete
	@find . -name "*.orig" -delete


check: ##D Check if tools and libraries are present 
	@$(MPUTILS) ce $(CC)
	@$(MPUTILS) ce $(OBJCOPY)
	@$(MPUTILS) ce $(OBJDUMP)
	@$(MPUTILS) ce $(SIZE)
	@$(MPUTILS) ce $(AR)
	@$(MPUTILS) ce $(NM)
	@$(MPUTILS) ce $(AS)
	@$(MPUTILS) ce $(QMAKE)
	@$(MPUTILS) ce $(MOC)
	@$(MPUTILS) ce $(GDB)
	@$(MPUTILS) ce python3
	@$(MPUTILS) ce $(CPPCHECK)
	@$(MPUTILS) ce $(INSTALL)
	@$(MPUTILS) ce $(ASTYLE)
	@for f in $(LIB); do               \
		${MPUTILS} cl ${CC} $${f};      \
	done                               \

archive: ##D Make a tar archive of the source code
	@echo
	@echo -e $(MSG_ARCHIVING)
	@$(MPUTILS) archive $(TARGET)

backup: ##D Make an incremental backup
	@echo
	@echo -e $(MSG_BACKUP)
	@$(MPUTILS) backup

# Project options -----------------------------------------------------------
.PHONY: newc newcpp newclass 

##- Create

newc:  ##D Create a new C module
	@${MPTEMPLATE} newc --outdir src 

#newcpp:  ## Create a new C++ module
#	@${CTEMPLATE} newcpp --outdir src --author "$(AUTHOR)" --license "$(LICENSE)"

#newclass:  ## Create a new C++ class
#	@${MPTEMPLATE} newclass --outdir src --author "$(AUTHOR)" --license "$(LICENSE)"	
		
#
# Help information
#============================================================================

##- Information

help: ##D This help information
	@$(MPUTILS) mpHelp Makefile

info-project: # Print project information
	@echo -e $(MSG_PROJECT)
	@echo "Target:     $(TARGET)"
	@echo "Platform:   $(TARGET_PLATFORM)"
	@echo "License:    $(LICENSE)"
	@echo "Outdir:     $(OUTDIR)"
	@echo "C standard: $(CSTANDARD)"
	@echo "MCU:        $(MCU)"
	@echo "F_CPU:      $(F_CPU)"
	
info-includes: # Print includefiles
	@echo -e $(MSG_INCLUDES)
	@export IFS=" "
	@for f in $(INCLUDE); do   \
	  echo $${f} ;             \
	done        

info-defs: # Print macro definitions
	@echo -e $(MSG_DEFS)
	@export IFS=" "
	@for f in $(CDEFS); do     \
	  echo $${f} ;             \
	done        

	@for f in $(CPPDEFS); do   \
	  echo $${f} ;             \
	done        

	@for f in $(ASDEFS); do    \
	  echo $${f} ;             \
	done        

info-cflags:  # Print compiler flags
	@echo -e $(MSG_FLAGS)
	@export IFS=" "
	@for f in $(CFLAGS); do   \
	  echo $${f} ;            \
	done                      \

info-lflags: # Print linker flags
	@echo -e $(MSG_LINKER)
	@export IFS=" "
	@for f in $(LDFLAGS); do   \
	  echo $${f} ;             \
	done                       \

info-src:  # Print source files
	@echo -e $(MSG_SRC)
	@export IFS=" "
	@for f in $(SRC); do      \
	  echo $${f} ;            \
	done                      \

info-objs: ##D List objects 
	@echo -e $(MSG_OBJECTS)
	@export IFS=" "
	@for f in $(OBJS); do   \
	  echo $${f} ;          \
	done   

info-install:
	@echo -e $(MSG_INSTALL_INFO)
	@echo "Install dir:   $(INSTALL_DIR)"
	@echo "Install user:  $(INSTALL_USER)"
	@echo "Install group: $(INSTALL_GROUP)"


info: info-project info-includes info-defs info-cflags info-lflags info-src info-install ##D Print information about project

files: info-src ##D List source files

gccversion :    ##D Display compiler version
	@$(CC) --version

libs: ##D List system wide libraries (pkg-config)
	@pkg-config --list-all
	
##- Code

#
# CppCheck static code analysis
#============================================================================
.PHONY: ccheck acheck

# Filter rules to colorize output from cppcheck (eye candy)
F_CPPC_FILE="s/\[\(.*\):\(.*\)\]/[$$(printf "$(C_FILE)")\1$$(printf "$(E_RESET)"):\2]/i"
F_CPPC_ROWNR="s/:\([0-9]*\)\]/:$$(printf "$(C_VALUE)")\1$$(printf "$(E_RESET)")]/"
F_CPPC_VAR="s/'\(.*\)'/'$$(printf "$(C_IDENTIFIER)")\1$$(printf "$(E_RESET)")'/g"
F_CPPC_STYLE="s/style/$$(printf "$(C_WARNING)")&$$(printf "$(E_RESET)")/i"
F_CPPC_PORTABILITY="s/portability/$$(printf "$(C_CYAN)")&$$(printf "$(E_RESET)")/i"
F_CPPC_ERROR="s/error/$$(printf "$(C_ERROR)")&$$(printf "$(E_RESET)")/i"
F_CPPC_CHECK="s/\(Checking \)\(.*\)/$$(printf "$(C_ACTION)")\1$$(printf "$(E_RESET)")$$(printf "$(C_FILE)")\2$$(printf "$(E_RESET)")/i"	
CPPCHECK_FILTER   = 2>&1 | sed -u -e $(F_CPPC_ROWNR) -e $(F_CPPC_FILE) -e $(F_CPPC_STYLE) -e $(F_CPPC_ERROR) -e $(F_CPPC_PORTABILITY) -e $(F_CPPC_VAR)  -e $(F_CPPC_CHECK)

ccheck: ##D Static code analysis using cppcheck(errors only)
	@$(CPPCHECK) --inline-suppr $(SRC)  $(CPPCHECK_FILTER)

acheck: ##D Static code analysis using cppcheck(all warnings)
	@$(CPPCHECK) --inline-suppr --enable=all $(SRC) $(CPPCHECK_FILTER)

#
# Artistic Style (astyle) Format source code to a standard
#============================================================================
.PHONY: astyle

TABSIZE=4

# Bracket style options
AST  = --style=java

# Tab options
AST += --indent=spaces=$(TABSIZE)

# Indentation options
AST += --indent-switches
AST += --indent-cases
#AST += --indent-preproc-cond
AST += --indent-col1-comments
AST += --max-instatement-indent=40
 
# C++ specific indentation
AST += --indent-modifiers

# Padding options
AST += --break-blocks
AST += --pad-oper
#AST += --pad-comma
AST += --pad-header
AST += --align-pointer=name
AST += --align-reference=name 

# Formatting options
AST += --add-brackets 
AST += --convert-tabs

# Other options
AST += --lineend=linux
#AST += --recursive
#AST += --exclude=
AST +=--preserve-date

PSRCH = $(PSRC:%.c=%.h) 

astyle: ##D Format source to conform to a standard
	@$(ASTYLE) $(AST) src/*.c src/*.cpp src/*.h

	
# Listing of phony targets.
.PHONY : all clean gccversion build begin finished end elf lss sym archive edit help backup list-src list-flags run


#
# Makeplate internal targets (do not use)
#============================================================================


mp-add-source: # Add source file (FILE=filename)
	@$(eval F=$(shell echo "${FILE}" | sed 's/\//\\\//g' ))
	@sed -i  '0,/SRC/s/SRC.*/&\nSRC += ${F}/1' Makefile

mp-add-include: # Add include path (FILE=include path)
	@$(eval F=$(shell echo "${FILE}" | sed 's/\//\\\//g' ))
	@sed -i  '0,/INCLUDE/s/INCLUDE.*/&\nINCLUDE += ${F}/1' Makefile

mp-add-pkglib: # Add library (pkg-conf) (LIB=lib)
	@$(eval F=$(shell echo "${LIB}" | sed 's/\//\\\//g' ))
	@sed -i  '0,/PKGLIBS/s/PKGLIBS.*/&\nPKGLIBS += ${F}/1' Makefile

##-
