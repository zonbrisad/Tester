# Hey Emacs, this is a -*- makefile -*-
#----------------------------------------------------------------------------
# 
# Makeplate glib example program
#
# author: Peter Malmberg <peter.malmberg@gmail.com>
#
#  
#----------------------------------------------------------------------------
# On command line:
# >make help 
#----------------------------------------------------------------------------

# Target platform
# linux win32 avr arm osx
TARGET_PLATFORM = linux

# Project License (GPL, GPLv2, MIT, BSD, Apache, etc.) 
LICENSE = GPLv2

# Target file name (without extension).
TARGET = glibtest

# List C, C++ and assembler source files here. (C/C++ dependencies are automatically generated.)
SRC = src/main.c \
      src/gp_log.c \
			src/debugsock.c

# List C, C++ and assembler library/3rd partry source files here. (C/C++ dependencies are automatically generated.)
LSRC =	

# Include directories
INCLUDE = src 
INCLUDE += src/def 

# Libraries to link
LIB   = -lm 
#LIB  += -lpthread

# Libraries to use in pkg-config system
#PKGLIBS  = Qt5Core 
#PKGLIBS += Qt5Gui 
#PKGLIBS += Qt5Widgets
#PKGLIBS += Qt5SerialPort
#PKGLIBS += Qt5Network
PKGLIBS = glib-2.0
PKGLIBS += gthread-2.0
PKGLIBS += gio-2.0
#PKGLIBS += ncurses
#PKGLIBS += lua5.1
#PKGLIBS += sqlite3

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
OPT = 3

# Compiler flag to set the C and C++ Standard level.
# [ gnu99 gnu11 c++98 c++03 c++11 c++14 ] 
CSTANDARD   = gnu99
CPPSTANDARD = c++11

# C Macro definitions
CDEFS = DEBUG

# ASM  Macro definitions
ADEFS = 

# C++ Macro definitions
CPPDEFS = 

# Debug information --------------------------------------------------------- 
# 0 = no debug information 
# 1 = minimal debug information
# 2 = normal debug information 
# 3 = maximal debug information
DEBUG=3

#
# Compiler and Linker options
#============================================================================

##N- Build

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
#CFLAGS += -Wmissing-prototypes   # if a function is missing its prototype
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

#
# Platform specific options
#============================================================================

# Linux options -------------------------------------------------------------
ifeq ($(TARGET_PLATFORM), linux)

# Target filename
TRGFILE=$(OUTDIR)/$(TARGET)

# Toolchain base directory
TCHAIN_BASE=/usr/bin

# Toolchain prefix 
TCHAIN_PREFIX=

# Handle pkg-config libraries -----------------------------------------------
CFLAGS   += $(foreach X, $(PKGLIBS), $(shell pkg-config --cflags $(X)) )
CPPFLAGS += $(foreach X, $(PKGLIBS), $(shell pkg-config --cflags $(X)) )
LDFLAGS  += $(foreach X, $(PKGLIBS), $(shell pkg-config --libs $(X))   )

# Size flags ----------------------------------------------------------------
SIZEFLAGS = --format=berkley  # format = {sysv|berkeley}

# objdump flags -------------------------------------------------------------
ODFLAGS  = -h  # Display the contents of the section headers  
ODFLAGS += -S  # Intermix source code with disassembly
ODFLAGS += -C  #
ODFLAGS += -r  # Display the relocation entries in the file

# Output format. (can be srec, ihex, binary) --------------------------------
FORMAT = ihex

# object copy flags ---------------------------------------------------------
OCFLAGS = -O $(FORMAT) 

endif

# Windows options -----------------------------------------------------------
ifeq ($(TARGET_PLATFORM), win32)

# Target filename
TRGFILE=$(OUTDIR)/$(TARGET).exe

# Toolchain base directory
TCHAIN_BASE=/usr/bin

# Toolchain prefix 
TCHAIN_PREFIX=

endif

# 
# Qt5 Specific objects and targets
#============================================================================

# Qt objects ----------------------------------------------------------------
MOCSRC = $(patsubst %.h,%_moc.cpp,$(MOCS))         # Generate moc source files
SRC   += $(MOCSRC)
UIH    = $(patsubst src/%.ui, src/ui_%.h, $(UI) )  # Generate UI header files


# Qt Meta Object Compiler target --------------------------------------------
$(MOCSRC): %_moc.cpp : %.h 	
	@echo -en $(MSG_MOC) "\n               "
	@echo -e $@ $(F_SOURCE)
	@$(MOC) $(INCDIRS) $< -o $@

# Qt user interface header file generation target ---------------------------
$(UIH): src/ui_%.h: src/%.ui
	@echo -en $(MSG_UI) "\n               "
	@echo -e $@  $(F_SOURCE)  
	@$(UIC) $(INCDIRS) $< -o $@

#
# Tool settings
#============================================================================

# Define programs and commands ----------------------------------------------
SHELL     = bash
WINSHELL  = cmd
REMOVE    = rm -f
REMOVEDIR = rm -rf
COPY      = cp -f 
MOVE      = mv -f
MKDIR     = mkdir -p
SED       = sed              # stream editor program
MOC       = moc              # Qt meta object compiler
QMAKE     = qmake            # Qt make program
UIC       = uic              # Qt resource file compiler
CTEMPLATE = python3 tools/ctemplate.py # C/C++ template tool
BIN2ARRAY = python3 tools/bin2array.py # Binary to array tool
MPTOOL    = tools/mptools    # Makeplate tools
CPPCHECK  = cppcheck
INSTALL   = install
ASTYLE    = astyle           # Code beatyfier
DOXYGEN   = doxygen          # Code documetation program

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

# Color definitions ---------------------------------------------------------
E_BLACK        = \033[0;300m
E_RED          = \033[0;31m
E_GREEN        = \033[0;32m
E_YELLOW       = \033[0;33m
E_BLUE         = \033[0;34m
E_MAGENTA      = \033[0;35m
E_CYAN         = \033[0;36m
E_GRAY         = \033[0;37m
E_DARKGRAY     = \033[1;30m
E_BR_RED       = \033[1;31m
E_BR_GREEN     = \033[1;32m
E_BR_YELLOW    = \033[1;33m
E_BR_BLUE      = \033[1;34m
E_BR_MAGENTA   = \033[1;35m
E_BR_CYAN      = \033[1;36m
E_WHITE        = \033[1;37m
E_END          = \033[0m
E_ON_BLACK     = \033[40m
E_ON_RED       = \033[41m
E_ON_GREEN     = \033[42m
E_ON_YELLOW    = \033[43m
E_ON_BLUE      = \033[44m
E_ON_MAGENTA   = \033[45m
E_ON_CYAN      = \033[46m
E_ON_WHITE     = \033[47m

# ANSI Text attributes
E_ATTR_BOLD=\e[1m
E_ATTR_LOWI=\e[2m
E_ATTR_UNDERLINE=\e[4m
E_ATTR_BLINK=\e[5m
E_ATTR_REVERSE=\e[7m

# System color definitions
C_OK=$(E_BR_GREEN)
C_WARNING=$(E_BR_YELLOW)
C_ERROR=$(E_BR_RED)
C_FILE=$(E_BR_CYAN)
C_DIR=$(E_CYAN)
C_NOTE=$(E_BR_GREEN)
C_MSG=$(E_BR_GREEN)
C_ACTION=$(E_BR_MAGENTA)
C_VALUE=$(E_WHITE)$(E_ON_BLUE)
C_IDENTIFIER=$(E_WHITE)

# Messages ------------------------------------------------------------------
MSG_LINE             = "$(E_WHITE)------------------------------------------------------------------$(E_END)"
MSG_BEGIN            = "${E_WHITE}-------------------------------- Begin ---------------------------${E_END}"
MSG_END              = "${E_WHITE}-------------------------------- End -----------------------------${E_END}"
MSG_ERRORS_NONE      = "${C_OK}Errors: none ${E_END}"
MSG_STRIP            = "${C_ACTION}Striping:${E_END}"
MSG_LINKING          = "${C_ACTION}Linking:${E_END}"
MSG_COMPILING        = "${C_ACTION}Compiling C:  ${E_END}"
MSG_COMPILING_CPP    = "${C_ACTION}Compiling C++:${E_END}"
MSG_ASSEMBLING       = "${C_ACTION}Assembling:${E_END}"
MSG_CLEANING         = "$(C_ACTION)Cleaning project:$(E_END)"
MSG_EXTENDED_LISTING = "${C_ACTION}Creating Extended Listing/Disassembly:$(E_END)"
MSG_SYMBOL_TABLE     = "${C_ACTION}Creating Symbol Table:$(E_END)"
MSG_HEX_FILE         = "${C_ACTION}Creating Hex file:$(E_END)"
MSG_FORMATERROR      = "${C_ERROR}Can not handle output-format${E_END}"
MSG_ASMFROMC         = "${C_ACTION}Creating asm-File from C-Source:$(E_END)"
MSG_SIZE_BEFORE      = "${C_ACTION}Size before:${E_END}"
MSG_SIZE_AFTER       = "${C_ACTION}Size after build:${E_END}"
MSG_LOAD_FILE        = "${C_ACTION}Creating load file:${E_END}"
MSG_ARCHIVING        = "${C_ACTION}Creating tar archive:${E_END}"
MSG_CREATING_LIBRARY = "${C_ACTION}Creating library:${E_END}"
MSG_FLASH            = "${C_ACTION}Creating load file for Flash:${E_END}"
MSG_EEPROM           = "${C_ACTION}Creating load file for EEPROM:${E_END}"
MSG_COFF             = "${C_ACTION}Converting to AVR COFF:${E_END}"
MSG_EXTENDED_COFF    = "${C_ACTION}Converting to AVR Extended COFF:${E_END}"
MSG_MOC              = "${C_ACTION}Creating MOC file:${E_END}"
MSG_UI               = "${C_ACTION}Generating UI header:${E_END}"
MSG_BACKUP           = "${C_ACTION}Making incremental backup of project:${E_END}"
MSG_SRC              = "${C_MSG}Source files $(E_GREEN)-----------------------------------------------------${E_END}"
MSG_FLAGS            = "${C_MSG}Compiler Flags $(E_GREEN)---------------------------------------------------${E_END}"
MSG_LINKER           = "${C_MSG}Linker Flags $(E_GREEN)-----------------------------------------------------${E_END}"
MSG_PROJECT          = "${C_MSG}Project info $(E_GREEN)-----------------------------------------------------${E_END}"
MSG_INCLUDES         = "${C_MSG}Include directories $(E_GREEN)----------------------------------------------${E_END}"
MSG_OBJECTS          = "${C_MSG}Object files $(E_GREEN)-----------------------------------------------------${E_END}"	
MSG_DEFS             = "${C_MSG}Macro definitions $(E_GREEN)------------------------------------------------${E_END}"
MSG_INSTALL_INFO     = "${C_MSG}Install settings $(E_GREEN)-------------------------------------------------${E_END}"
MSG_INSTALLING       = "${C_ACTION}Installing:   ${E_END}"
MSG_BUILDING         = "$(C_ACTION)Building:     "
	
# Compiler output colorizer filter ------------------------------------------
F_SOURCE=| sed -e "s/\(.*\/\)\(.*\)/$$(printf "$(C_DIR)")\1$$(printf "$(C_FILE)")\2$$(printf "$(E_END)")/"
F_INF="s/In function/$$(printf "$(E_BR_GREEN)")&$$(printf "$(E_END)")/i"
F_NOTE="s/note:/$$(printf "$(C_NOTE)")&$$(printf "$(E_END)")/i"
F_WARNING="s/warning:/$$(printf "$(C_WARNING)")&$$(printf "$(E_END)")/i"
F_ERROR="s/error:/$$(printf "$(C_ERROR)")&$$(printf "$(E_END)")/i"
F_FATAL_ERROR="s/fatal error:/$$(printf "$(C_ERROR)")&$$(printf "$(E_END)")/i"
F_WARNING1="s/defined but not used/$$(printf "$(C_WARNING)")&$$(printf "$(E_END)")/i"
F_WARNING2="s/unused variable/$$(printf "$(C_WARNING)")&$$(printf "$(E_END)")/i"
F_WARNING3="s/may be used uninitialized in this function/$$(printf "$(C_WARNING)")&$$(printf "$(E_END)")/i"
F_WARNING4="s/implicit declaration of function/$$(printf "$(C_WARNING)")&$$(printf "$(E_END)")/i"
F_WARNING5="s/value computed is not used/$$(printf "$(C_WARNING)")&$$(printf "$(E_END)")/i"
F_BRACKET="s/\[\(.*\)\]/[$$(printf "$(E_GREEN)")\1$$(printf "$(E_END)")]/"	
F_VARIABLE="s/\‘\(.*\)[\’\‘]/'$$(printf "$(C_IDENTIFIER)")\1$$(printf "$(E_END)")'/g"
F_FILE="s/[^: ]*/$$(printf "$(C_FILE)")&$$(printf "$(E_END)")/"
F_ROWNR="s/:\([0-9]*\):\([0-9]*\):/:$$(printf "$(C_VALUE)")\1$$(printf "$(E_END)"):$$(printf "$(C_VALUE)")\2$$(printf "$(E_END)"):/"

C_FILTER   = | sed -u -e $(F_BRACKET) -e $(F_FILE) -e $(F_ROWNR)          \
                      -e $(F_INF) -e $(F_NOTE)                            \
 	                  -e $(F_WARNING) -e $(F_ERROR) -e $(F_FATAL_ERROR)   \
                      -e $(F_WARNING1) -e $(F_WARNING2) -e $(F_WARNING3)  \
                      -e $(F_WARNING4) -e $(F_WARNING5)                   \
                      -e $(F_VARIABLE)

CPP_FILTER = $(C_FILTER)

LD_ERROR1="s/undefined reference/$$(printf "$(C_ERROR)")&$$(printf "$(E_END)")/i"
LD_ERROR2="s/No such file or directory/$$(printf "$(C_ERROR)")&$$(printf "$(E_END)")/i"
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
all:	begin build finished end ## Build project (default)

nc: C_FILTER:= 
nc: all   ## Build with no color filter on compiler output


build: elf lss sym size

elf: $(TRGFILE)
lss: $(OUTDIR)/$(TARGET).lss
sym: $(OUTDIR)/$(TARGET).sym
hex: $(OUTDIR)/$(TARGET).hex
bin: $(OUTDIR)/$(TARGET).bin
eep: $(OUTDIR)/$(TARGET).eep

begin:
	@echo -e $(MSG_BEGIN)
	@echo -e ${MSG_BUILDING}" $(E_BR_GREEN)$(TARGET) $(E_END)"
 
end:
	@echo
	@echo -e $(MSG_END)
	
finished:
	@echo

# Linking targets from object files
.PRECIOUS : $(OBJS)
$(TRGFILE): $(OBJS) $(OUTDIR)
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

strip: $(TRGFILE) ## Strip target binary from symbols
	@echo -e $(MSG_STRIP)
	@$(STRIP) $(TRGFILE)

# 
# Debug rules
#============================================================================
#debug: ## Debug program
#	@$(GDB) $(TRGFILE) 

	
#
# Various utility rules	
#============================================================================


clean:  ## Remove all build files
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


# Directory where to store archives
ARCHIVEDIR = archive

archive: ## Make a tar archive of the source code
	@echo
	@echo -e $(MSG_ARCHIVING)
	@$(eval DT=$(shell date +"%Y%m%d-%H%M%S"))
	@$(MKDIR) $(ARCHIVEDIR)
	@tar -cvzf $(ARCHIVEDIR)/$(TARGET)_${DT}.tar.gz *  \
		--exclude='$(ARCHIVEDIR)' \
		--exclude='$(BACKUP_DIR)' \
		--exclude='$(OUTDIR)'     \
		--exclude='$(BUILDDIR)'   \
		--exclude='*.a'      \
		--exclude='*.o'      \
		--exclude='*.ko'     \
		--exclude='*.obj'    \
		--exclude='*.a'      \
		--exclude='*.la'     \
		--exclude='*.lo'     \
		--exclude='*.slo'    \
		--exclude='*.lib'    \
		--exclude='*.so'     \
		--exclude='*.so*'    \
		--exclude='.dep'     \
		--exclude='.svn'     \
		--exclude='.git'     \
		--exclude='*.elf'    \
		--exclude='*.hex'    \
		--exclude='*.bin'    \
		--exclude='*.exe'    \
		--exclude='*.sym'    \
		--exclude='*.lss'    \
		--exclude='*.map'    \
		--exclude='*.app'    \
		--exclude='*.i*86'   \
		--exclude='*.x86_64' \
		--exclude='*~'       \
		--exclude="*.old"    \
		--exclude="*.tmp"    \

# Backup directory
BACKUP_DIR=backup

# Max number of backups
BACKUPS=100

backup: ## Make an incremental backup
	@echo
	@echo -e $(MSG_BACKUP)
	@$(MKDIR) $(BACKUP_DIR)
  # remove oldest backup
	@$(RM) -rf $(BACKUP_DIR)/backup_$(BACKUPS) 
  # rotate backups 
	@for ((x=$(BACKUPS);x>0;x--)); do                 \
	  bdir=$(BACKUP_DIR)/backup_`expr $${x} - 1` ;    \
	  # check if directory exist before renameing  it \
	  if [ -d $${bdir} ]; then                        \
	    mv -f $${bdir}  $(BACKUP_DIR)/backup_$${x} ;  \
	  fi ;                                            \
	done 
	@rsync --archive                 \
	      --delete                  \
				--relative                \
				--exclude="$(BACKUP_DIR)" \
				--exclude="$(ARCHIVEDIR)" \
				--exclude="$(OUTDIR)"     \
				--link-dest=$(CURDIR)/$(BACKUP_DIR)/backup_1 \
				.                      \
				$(BACKUP_DIR)/backup_0 


edit:   ## Open source and makefile in editor
	@$(EDITOR) Makefile $(SRC)

run:    ## Run application
	@$(OUTDIR)/$(TARGET)

# Include the dependency files.
-include $(shell mkdir .dep 2>/dev/null) $(wildcard .dep/*)


# Project options -----------------------------------------------------------

##N- Create

newfile:  ## Create a new C file
	@${CTEMPLATE} --newc --dir src --author "$(AUTHOR)" --license "$(LICENSE)"

newclass:  ## Create a new C++ class
	@${CTEMPLATE} --newclass --dir src --author "$(AUTHOR)" --license "$(LICENSE)"	
		
#newproj:  # Create a new project
#	@${PROJECT} newproj


# Install options -----------------------------------------------------------

# Install directory
INSTALL_DIR      = ~/bin

# Owner of binary
INSTALL_OWNER    = $${USER}

# Group owner of binary
# #INSTALL_GROUP    = $${USER}
INSTALL_GROUP    = users

# Install options
INSTALL_OPTIONS =  --owner ${INSTALL_OWNER}
INSTALL_OPTIONS += --group ${INSTALL_GROUP}
INSTALL_OPTIONS += -D
INSTALL_OPTIONS += --preserve-timestamps
#INSTALL_OPTIONS += --verbose

install: $(TRGFILE) ## Install program
	@echo -e $(MSG_INSTALLING) "$(E_BR_GREEN)$(TARGET) $(E_END)"
	@${INSTALL} ${INSTALL_OPTIONS} $(TRGFILE) ${INSTALL_DIR}

#
# Help information
#============================================================================

##N- Information

help: ## This help information
	@$(MPTOOL) mpHelp Makefile

list-src: ## List all source files
	@echo -e $(MSG_SRC)
	@export IFS=" "
	@for f in $(SRC); do      \
	  echo $${f} ;            \
	done                      \
	
list-flags: ## List compiler flags
	@echo -e $(MSG_FLAGS)
	@export IFS=" "
	@for f in $(CFLAGS); do   \
	  echo $${f} ;            \
	done                      \

list-ldflags: ## List linker flags
	@echo -e $(MSG_LINKER)
	@export IFS=" "
	@for f in $(LDFLAGS); do   \
	  echo $${f} ;             \
	done                       \

list-objs: ## List objects 
	@echo -e $(MSG_OBJECTS)
	@export IFS=" "
	@for f in $(OBJS); do   \
	  echo $${f} ;          \
	done        


check: ## Check if tools and libraries are present 
	@$(MPTOOL) ce $(CC)
	@$(MPTOOL) ce $(OBJCOPY)
	@$(MPTOOL) ce $(OBJDUMP)
	@$(MPTOOL) ce $(SIZE)
	@$(MPTOOL) ce $(AR)
	@$(MPTOOL) ce $(NM)
	@$(MPTOOL) ce $(AS)
	@$(MPTOOL) ce $(QMAKE)
	@$(MPTOOL) ce $(MOC)
	@$(MPTOOL) ce $(GDB)
	@$(MPTOOL) ce python3
	@$(MPTOOL) ce $(CPPCHECK)
	@$(MPTOOL) ce $(INSTALL)
	@$(MPTOOL) ce $(ASTYLE)
	@for f in $(LIB); do               \
		${MPTOOL} cl ${CC} $${f};      \
	done                               \
	
list-info: 
	@echo -e $(MSG_PROJECT)
	@echo "Target:     $(TARGET)"
	@echo "Platform:   $(TARGET_PLATFORM)"
	@echo "License:    $(LICENSE)"
	@echo "Outdir:     $(OUTDIR)"
	@echo "C standard: $(CSTANDARD)"
	@echo "MCU:        $(MCU)"
	@echo "F_CPU:      $(F_CPU)"

	
list-includes: 
	@echo -e $(MSG_INCLUDES)
	@export IFS=" "
	@for f in $(INCLUDE); do   \
	  echo $${f} ;             \
	done        

list-defs: 
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


list-installinfo:
	@echo -e $(MSG_INSTALL_INFO)
	@echo "Install dir:   $(INSTALL_DIR)"
	@echo "Install user:  $(INSTALL_USER)"
	@echo "Install group: $(INSTALL_GROUP)"


info: list-info list-includes list-defs list-flags list-ldflags list-installinfo ## Print information about project

files: list-src ## List source files

gccversion :    ## Display compiler version
	@$(CC) --version

libs: ## List system wide libraries (pkg-config)
	@pkg-config --list-all
	
#
# Personal settings
#============================================================================

# Only for default settings. Change value in settings.mk
AUTHOR=Peter Malmberg <peter.malmberg@gmail.com>
EDITOR=jed
US:=$$USER
#PERSONAL=personal_$${USER}.mk
PERSONAL=personal.mk

# Include some external settings
# If file does not exist it will be generated.
include  ${PERSONAL}

$(PERSONAL):	# Create a settings file
	@echo "#" > ${PERSONAL}
	@echo "# This file is for personal settings only." >> ${PERSONAL}
	@echo "#" >> ${PERSONAL}
	@echo "EDITOR=${EDITOR}" >> ${PERSONAL}
	@echo "AUTHOR=${AUTHOR}" >> ${PERSONAL}



##N- Code

#
# CppCheck static code analysis
#============================================================================
.PHONY: ccheck acheck

# Filter rules to colorize output from cppcheck (eye candy)
F_CPPC_FILE="s/\[\(.*\):\(.*\)\]/[$$(printf "$(C_FILE)")\1$$(printf "$(E_END)"):\2]/i"
F_CPPC_ROWNR="s/:\([0-9]*\)\]/:$$(printf "$(C_VALUE)")\1$$(printf "$(E_END)")]/"
F_CPPC_VAR="s/'\(.*\)'/'$$(printf "$(C_IDENTIFIER)")\1$$(printf "$(E_END)")'/g"
F_CPPC_STYLE="s/style/$$(printf "$(C_WARNING)")&$$(printf "$(E_END)")/i"
F_CPPC_PORTABILITY="s/portability/$$(printf "$(C_CYAN)")&$$(printf "$(E_END)")/i"
F_CPPC_ERROR="s/error/$$(printf "$(C_ERROR)")&$$(printf "$(E_END)")/i"
F_CPPC_CHECK="s/\(Checking \)\(.*\)/$$(printf "$(C_ACTION)")\1$$(printf "$(E_END)")$$(printf "$(C_FILE)")\2$$(printf "$(E_END)")/i"	
CPPCHECK_FILTER   = 2>&1 | sed -u -e $(F_CPPC_ROWNR) -e $(F_CPPC_FILE) -e $(F_CPPC_STYLE) -e $(F_CPPC_ERROR) -e $(F_CPPC_PORTABILITY) -e $(F_CPPC_VAR)  -e $(F_CPPC_CHECK)

ccheck: ## Static code analysis using cppcheck(errors only)
	@$(CPPCHECK) --inline-suppr $(SRC)  $(CPPCHECK_FILTER)

acheck: ## Static code analysis using cppcheck(all warnings)
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

astyle: ## Format source to conform to a standard
	@$(ASTYLE) $(AST) src/*.c src/*.cpp src/*.h


#
# GProf profiling tool
#============================================================================
.PHONY: prof

PROF = -a
PROG += -b

prof:  run ## Run code profiling
	gprof $(PROF) $(TRGFILE) gmon.out 


#
# Doxygen documentation generation
#============================================================================
.PHONY: doc

doc: ## Generate doxygen documentation
	$(DOXYGEN)


	
# Listing of phony targets.
.PHONY : all clean gccversion build begin finished end elf lss sym archive edit help backup list-src list-flags newproj run install

#
# Makeplate internal targets
#============================================================================
mpType=mp-cpp

utools: # Update tools from locally installed tools
	@echo -e "${C_ACTION}Updating makeplate tools${E_END}"
	@mp utools

meld: # Meld Makefile with locally installed makefile
	@meld ~/bin/makeplate_files/${mpType}/Makefile  Makefile


##-
