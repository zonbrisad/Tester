   1              		.file	"Fl_Text_Buffer.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.rodata.str1.1,"aMS",@progbits,1
   5              	.LC0:
   6 0000 257300   		.string	"%s"
   7              		.section	.text.unlikely._ZL30def_transcoding_warning_actionP14Fl_Text_Buffer,"ax",@progbits
   8              	.LCOLDB1:
   9              		.section	.text._ZL30def_transcoding_warning_actionP14Fl_Text_Buffer,"ax",@progbits
  10              	.LHOTB1:
  11              		.p2align 4,,15
  12              		.section	.text.unlikely._ZL30def_transcoding_warning_actionP14Fl_Text_Buffer
  13              	.Ltext_cold0:
  14              		.section	.text._ZL30def_transcoding_warning_actionP14Fl_Text_Buffer
  16              	_ZL30def_transcoding_warning_actionP14Fl_Text_Buffer:
  17              	.LFB188:
  18              		.file 1 "fltk-1.3.4-1/src/Fl_Text_Buffer.cxx"
   1:fltk-1.3.4-1/src/Fl_Text_Buffer.cxx **** ...
  19              		.loc 1 98 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              		.loc 1 99 0
  23 0000 488B3500 		movq	_ZN14Fl_Text_Buffer29file_encoding_warning_messageE(%rip), %rsi
  23      000000
  24 0007 BF000000 		movl	$.LC0, %edi
  24      00
  25              	.LVL1:
  26 000c 31C0     		xorl	%eax, %eax
  27 000e E9000000 		jmp	_Z8fl_alertPKcz
  27      00
  28              	.LVL2:
  29              		.cfi_endproc
  30              	.LFE188:
  32              		.section	.text.unlikely._ZL30def_transcoding_warning_actionP14Fl_Text_Buffer
  33              	.LCOLDE1:
  34              		.section	.text._ZL30def_transcoding_warning_actionP14Fl_Text_Buffer
  35              	.LHOTE1:
  36              		.section	.text.unlikely._ZL14undobuffersizei,"ax",@progbits
  37              	.LCOLDB2:
  38              		.section	.text._ZL14undobuffersizei,"ax",@progbits
  39              	.LHOTB2:
  40              		.p2align 4,,15
  42              	_ZL14undobuffersizei:
  43              	.LFB187:
  44              		.loc 1 83 0
  45              		.cfi_startproc
  46              	.LVL3:
  47 0000 4883EC08 		subq	$8, %rsp
  48              		.cfi_def_cfa_offset 16
  49              		.loc 1 84 0
  50 0004 8B350000 		movl	_ZL16undobufferlength(%rip), %esi
  50      0000
  51 000a 39FE     		cmpl	%edi, %esi
  52 000c 7D2D     		jge	.L2
  53 000e 89F8     		movl	%edi, %eax
  54              		.loc 1 85 0
  55 0010 488B3D00 		movq	_ZL10undobuffer(%rip), %rdi
  55      000000
  56              	.LVL4:
  57 0017 4885FF   		testq	%rdi, %rdi
  58 001a 7424     		je	.L4
  59 001c 0F1F4000 		.p2align 4,,10
  60              		.p2align 3
  61              	.L5:
  62              		.loc 1 87 0
  63 0020 01F6     		addl	%esi, %esi
  64              		.loc 1 88 0
  65 0022 39F0     		cmpl	%esi, %eax
  66 0024 7FFA     		jg	.L5
  67 0026 89350000 		movl	%esi, _ZL16undobufferlength(%rip)
  67      0000
  68              		.loc 1 89 0
  69 002c 4863F6   		movslq	%esi, %rsi
  70 002f E8000000 		call	realloc
  70      00
  71              	.LVL5:
  72 0034 48890500 		movq	%rax, _ZL10undobuffer(%rip)
  72      000000
  73              	.L2:
  74              		.loc 1 95 0
  75 003b 4883C408 		addq	$8, %rsp
  76              		.cfi_remember_state
  77              		.cfi_def_cfa_offset 8
  78 003f C3       		ret
  79              	.LVL6:
  80              	.L4:
  81              		.cfi_restore_state
  82              	.LBB329:
  83              	.LBB330:
  84              		.loc 1 91 0
  85 0040 83C009   		addl	$9, %eax
  86              	.LVL7:
  87              		.loc 1 92 0
  88 0043 4863F8   		movslq	%eax, %rdi
  89              		.loc 1 91 0
  90 0046 89050000 		movl	%eax, _ZL16undobufferlength(%rip)
  90      0000
  91              		.loc 1 92 0
  92 004c E8000000 		call	malloc
  92      00
  93              	.LVL8:
  94 0051 48890500 		movq	%rax, _ZL10undobuffer(%rip)
  94      000000
  95              	.LBE330:
  96              	.LBE329:
  97              		.loc 1 95 0
  98 0058 EBE1     		jmp	.L2
  99              		.cfi_endproc
 100              	.LFE187:
 102              		.section	.text.unlikely._ZL14undobuffersizei
 103              	.LCOLDE2:
 104              		.section	.text._ZL14undobuffersizei
 105              	.LHOTE2:
 106              		.section	.text.unlikely._ZNK14Fl_Text_Buffer7char_atEi.part.5,"ax",@progbits
 107              		.align 2
 108              	.LCOLDB3:
 109              		.section	.text._ZNK14Fl_Text_Buffer7char_atEi.part.5,"ax",@progbits
 110              	.LHOTB3:
 111              		.align 2
 112              		.p2align 4,,15
 114              	_ZNK14Fl_Text_Buffer7char_atEi.part.5:
 115              	.LFB269:
 116              		.loc 1 242 0
 117              		.cfi_startproc
 118              	.LVL9:
 119              	.LBB331:
 120              	.LBB332:
 121              		.file 2 "fltk-1.3.4-1/FL/Fl_Text_Buffer.H"
   1:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** //
   2:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** // "$Id: Fl_Text_Buffer.H 11799 2016-06-25 00:54:24Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** //
   4:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** // Header file for Fl_Text_Buffer class.
   5:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** //
   6:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** // Copyright 2001-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** // Original code Copyright Mark Edel.  Permission to distribute under
   8:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** // the LGPL for the FLTK library granted by Mark Edel.
   9:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** //
  10:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** // Please report all bugs and problems on the following page:
  11:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** //
  12:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** //     http://www.fltk.org/str.php
  13:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** //
  14:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** //
  16:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** //
  18:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  19:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  Fl_Text_Buffer, Fl_Text_Selection widget . */
  21:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  22:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** #ifndef FL_TEXT_BUFFER_H
  23:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** #define FL_TEXT_BUFFER_H
  24:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  25:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  26:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** #undef ASSERT_UTF8
  27:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  28:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** #ifdef ASSERT_UTF8
  29:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** # include <assert.h>
  30:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** # define IS_UTF8_ALIGNED(a) if (a && *a) assert(fl_utf8len(*(a))>0);
  31:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** # define IS_UTF8_ALIGNED2(a, b) if (b>=0 && b<a->length()) assert(fl_utf8len(a->byte_at(b))>0);
  32:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** #else
  33:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** # define IS_UTF8_ALIGNED(a)
  34:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** # define IS_UTF8_ALIGNED2(a, b)
  35:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** #endif
  36:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  37:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  38:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** /*
  39:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  "character size" is the size of a UTF-8 character in bytes
  40:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  "character width" is the width of a Unicode character in pixels
  41:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  "column" was orginally defined as a character offset from the left margin.
  42:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  It was identical to the byte offset. In UTF-8, we have neither a byte offset
  43:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  nor truly fixed width fonts (*). Column could be a pixel value multiplied with
  44:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  an average character width (which is a bearable approximation).
  45:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  46:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  * in Unicode, there are no fixed width fonts! Even if the ASCII characters may
  47:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    happen to be all the same width in pixels, Chinese characters surely are not.
  48:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    There are plenty of exceptions, like ligatures, that make special handling of
  49:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    "fixed" character widths a nightmare. I decided to remove all references to
  50:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    fixed fonts and see "columns" as a multiple of the average width of a
  51:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    character in the main font.
  52:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****      - Matthias
  53:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  */
  54:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  55:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  56:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** /* Maximum length in characters of a tab or control character expansion
  57:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    of a single buffer character */
  58:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** #define FL_TEXT_MAX_EXP_CHAR_LEN 20
  59:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  60:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** #include "Fl_Export.H"
  61:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  62:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  63:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** /**
  64:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  \class Fl_Text_Selection
  65:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  \brief This is an internal class for Fl_Text_Buffer to manage text selections.
  66:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  This class works correctly with UTF-8 strings assuming that the parameters
  67:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  for all calls are on character boundaries.
  68:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  */
  69:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** class FL_EXPORT Fl_Text_Selection {
  70:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   friend class Fl_Text_Buffer;
  71:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  72:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** public:
  73:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  74:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
  75:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \brief Set the selection range.
  76:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param start byte offset to first selected character
  77:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param end byte offset pointing after last selected character
  78:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
  79:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   void set(int start, int end);
  80:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  81:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
  82:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \brief Updates a selection after text was modified.
  83:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  84:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    Updates an individual selection for changes in the corresponding text
  85:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param pos byte offset into text buffer at which the change occurred
  86:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param nDeleted number of bytes deleted from the buffer
  87:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param nInserted number of bytes inserted into the buffer
  88:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
  89:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   void update(int pos, int nDeleted, int nInserted);
  90:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  91:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
  92:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \brief Return the byte offset to the first selected character.
  93:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \return byte offset
  94:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
  95:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   int start() const { return mStart; }
  96:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
  97:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
  98:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \brief Return the byte offset to the character after the last selected character.
  99:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \return byte offset
 100:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 101:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   int end() const { return mEnd; }
 102:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 103:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
 104:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \brief Returns true if any text is selected.
 105:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \return a non-zero number if any text has been selected, or 0
 106:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    if no text is selected.
 107:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 108:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   bool selected() const { return mSelected; }
 109:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 110:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
 111:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \brief Modify the 'selected' flag.
 112:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param b new flag
 113:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 114:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   void selected(bool b) { mSelected = b; }
 115:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 116:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
 117:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    Return true if position \p pos with indentation \p dispIndex is in
 118:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    the Fl_Text_Selection.
 119:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 120:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   int includes(int pos) const;
 121:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 122:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
 123:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \brief Return the positions of this selection.
 124:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param start return byte offset to first selected character
 125:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param end return byte offset pointing after last selected character
 126:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \return true if selected
 127:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 128:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   int position(int* start, int* end) const;
 129:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 130:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** protected:
 131:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 132:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   int mStart;         ///< byte offset to the first selected character
 133:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   int mEnd;           ///< byte offset to the character after the last selected character
 134:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   bool mSelected;     ///< this flag is set if any text is selected
 135:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** };
 136:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 137:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 138:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** typedef void (*Fl_Text_Modify_Cb)(int pos, int nInserted, int nDeleted,
 139:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****                                   int nRestyled, const char* deletedText,
 140:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****                                   void* cbArg);
 141:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 142:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 143:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** typedef void (*Fl_Text_Predelete_Cb)(int pos, int nDeleted, void* cbArg);
 144:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 145:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 146:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** /**
 147:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  \brief This class manages Unicode text displayed in one or more Fl_Text_Display widgets.
 148:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 149:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  All text in Fl_Text_Buffer must be encoded in UTF-8. All indices used in the
 150:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  function calls must be aligned to the start of a UTF-8 sequence. All indices
 151:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  and pointers returned will be aligned. All functions that return a single
 152:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  character will return that in an unsiged int in UCS-4 encoding.
 153:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 154:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  The Fl_Text_Buffer class is used by the Fl_Text_Display
 155:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  and Fl_Text_Editor to manage complex text data and is based upon the
 156:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  excellent NEdit text editor engine - see http://www.nedit.org/.
 157:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****  */
 158:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** class FL_EXPORT Fl_Text_Buffer {
 159:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** public:
 160:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 161:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
 162:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    Create an empty text buffer of a pre-determined size.
 163:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param requestedSize use this to avoid unnecessary re-allocation
 164:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****     if you know exactly how much the buffer will need to hold
 165:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param preferredGapSize Initial size for the buffer gap (empty space
 166:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****     in the buffer where text might be inserted
 167:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****     if the user is typing sequential characters)
 168:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 169:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   Fl_Text_Buffer(int requestedSize = 0, int preferredGapSize = 1024);
 170:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 171:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
 172:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    Frees a text buffer
 173:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 174:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   ~Fl_Text_Buffer();
 175:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 176:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
 177:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \brief Returns the number of bytes in the buffer.
 178:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \return size of text in bytes
 179:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 180:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   int length() const { return mLength; }
 181:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 182:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
 183:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \brief Get a copy of the entire contents of the text buffer.
 184:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    Memory is allocated to contain the returned string, which the caller
 185:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    must free.
 186:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \return newly allocated text buffer - must be free'd, text is UTF-8
 187:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 188:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   char* text() const;
 189:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 190:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
 191:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    Replaces the entire contents of the text buffer.
 192:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param text Text must be valid UTF-8. If null, an empty string is substituted.
 193:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 194:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   void text(const char* text);
 195:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 196:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
 197:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \brief Get a copy of a part of the text buffer.
 198:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    Return a copy of the text between \p start and \p end character positions
 199:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    from text buffer \p buf. Positions start at 0, and the range does not
 200:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    include the character pointed to by \p end.
 201:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    When you are done with the text, free it using the free() function.
 202:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param start byte offset to first character
 203:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param end byte offset after last character in range
 204:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \return newly allocated text buffer - must be free'd, text is UTF-8
 205:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 206:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   char* text_range(int start, int end) const;
 207:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 208:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
 209:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    Returns the character at the specified position \p pos in the buffer.
 210:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    Positions start at 0.
 211:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param pos byte offset into buffer, \p pos must be at a UTF-8 character boundary
 212:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \return Unicode UCS-4 encoded character
 213:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 214:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   unsigned int char_at(int pos) const;
 215:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 216:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
 217:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    Returns the raw byte at the specified position pos in the buffer.
 218:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    Positions start at 0.
 219:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param pos byte offset into buffer
 220:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \return unencoded raw byte
 221:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 222:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   char byte_at(int pos) const;
 223:fltk-1.3.4-1/FL/Fl_Text_Buffer.H **** 
 224:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   /**
 225:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    Convert a byte offset in buffer into a memory address.
 226:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \param pos byte offset into buffer
 227:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    \return byte offset converted to a memory address
 228:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****    */
 229:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   const char *address(int pos) const
 230:fltk-1.3.4-1/FL/Fl_Text_Buffer.H ****   { return (pos < mGapStart) ? mBuf+pos : mBuf+pos+mGapEnd-mGapStart; }
 122              		.loc 2 230 0
 123 0000 48634740 		movslq	64(%rdi), %rax
 124 0004 39F0     		cmpl	%esi, %eax
 125 0006 7E18     		jle	.L10
 126 0008 4863F6   		movslq	%esi, %rsi
 127 000b 48037738 		addq	56(%rdi), %rsi
 128              	.LVL10:
 129              	.LBE332:
 130              	.LBE331:
 131              		.loc 1 249 0
 132 000f 31D2     		xorl	%edx, %edx
 133              	.LBB336:
 134              	.LBB333:
 135              		.loc 2 230 0
 136 0011 4889F7   		movq	%rsi, %rdi
 137              	.LVL11:
 138              	.LBE333:
 139              	.LBE336:
 140              		.loc 1 249 0
 141 0014 31F6     		xorl	%esi, %esi
 142 0016 E9000000 		jmp	fl_utf8decode
 142      00
 143              	.LVL12:
 144 001b 0F1F4400 		.p2align 4,,10
 144      00
 145              		.p2align 3
 146              	.L10:
 147              	.LBB337:
 148              	.LBB334:
 149              		.loc 2 230 0
 150 0020 48635744 		movslq	68(%rdi), %rdx
 151 0024 4863F6   		movslq	%esi, %rsi
 152 0027 4829C2   		subq	%rax, %rdx
 153 002a 4801D6   		addq	%rdx, %rsi
 154              	.LVL13:
 155 002d 48037738 		addq	56(%rdi), %rsi
 156              	.LBE334:
 157              	.LBE337:
 158              		.loc 1 249 0
 159 0031 31D2     		xorl	%edx, %edx
 160              	.LBB338:
 161              	.LBB335:
 162              		.loc 2 230 0
 163 0033 4889F7   		movq	%rsi, %rdi
 164              	.LVL14:
 165              	.LBE335:
 166              	.LBE338:
 167              		.loc 1 249 0
 168 0036 31F6     		xorl	%esi, %esi
 169 0038 E9000000 		jmp	fl_utf8decode
 169      00
 170              	.LVL15:
 171              		.cfi_endproc
 172              	.LFE269:
 174              		.section	.text.unlikely._ZNK14Fl_Text_Buffer7char_atEi.part.5
 175              	.LCOLDE3:
 176              		.section	.text._ZNK14Fl_Text_Buffer7char_atEi.part.5
 177              	.LHOTE3:
 178              		.section	.text.unlikely._ZNK14Fl_Text_Buffer7byte_atEi.part.6,"ax",@progbits
 179              		.align 2
 180              	.LCOLDB4:
 181              		.section	.text._ZNK14Fl_Text_Buffer7byte_atEi.part.6,"ax",@progbits
 182              	.LHOTB4:
 183              		.align 2
 184              		.p2align 4,,15
 186              	_ZNK14Fl_Text_Buffer7byte_atEi.part.6:
 187              	.LFB270:
 188              		.loc 1 257 0
 189              		.cfi_startproc
 190              	.LVL16:
 191              	.LBB339:
 192              	.LBB340:
 193              		.loc 2 230 0
 194 0000 48634740 		movslq	64(%rdi), %rax
 195 0004 39F0     		cmpl	%esi, %eax
 196 0006 7E10     		jle	.L13
 197 0008 4863F6   		movslq	%esi, %rsi
 198 000b 48037738 		addq	56(%rdi), %rsi
 199              	.LVL17:
 200 000f 0FB606   		movzbl	(%rsi), %eax
 201              	.LBE340:
 202              	.LBE339:
 203              		.loc 1 262 0
 204 0012 C3       		ret
 205              	.LVL18:
 206              		.p2align 4,,10
 207 0013 0F1F4400 		.p2align 3
 207      00
 208              	.L13:
 209              	.LBB342:
 210              	.LBB341:
 211              		.loc 2 230 0
 212 0018 48635744 		movslq	68(%rdi), %rdx
 213 001c 4863F6   		movslq	%esi, %rsi
 214 001f 4829C2   		subq	%rax, %rdx
 215 0022 4801D6   		addq	%rdx, %rsi
 216              	.LVL19:
 217 0025 48037738 		addq	56(%rdi), %rsi
 218              	.LVL20:
 219 0029 0FB606   		movzbl	(%rsi), %eax
 220              	.LBE341:
 221              	.LBE342:
 222              		.loc 1 262 0
 223 002c C3       		ret
 224              		.cfi_endproc
 225              	.LFE270:
 227              		.section	.text.unlikely._ZNK14Fl_Text_Buffer7byte_atEi.part.6
 228              	.LCOLDE4:
 229              		.section	.text._ZNK14Fl_Text_Buffer7byte_atEi.part.6
 230              	.LHOTE4:
 231              		.section	.text.unlikely._ZN17Fl_Text_Selection6updateEiii.part.8,"ax",@progbits
 232              		.align 2
 233              	.LCOLDB5:
 234              		.section	.text._ZN17Fl_Text_Selection6updateEiii.part.8,"ax",@progbits
 235              	.LHOTB5:
 236              		.align 2
 237              		.p2align 4,,15
 239              	_ZN17Fl_Text_Selection6updateEiii.part.8:
 240              	.LFB272:
 241              		.loc 1 1441 0
 242              		.cfi_startproc
 243              	.LVL21:
 244              		.loc 1 1443 0
 245 0000 8B4704   		movl	4(%rdi), %eax
 246 0003 39F0     		cmpl	%esi, %eax
 247 0005 7C3D     		jl	.L15
 248              		.loc 1 1445 0
 249 0007 448B07   		movl	(%rdi), %r8d
 250 000a 448D0C16 		leal	(%rsi,%rdx), %r9d
 251 000e 4539C1   		cmpl	%r8d, %r9d
 252 0011 7E3D     		jle	.L22
 253              		.loc 1 1448 0
 254 0013 4439C6   		cmpl	%r8d, %esi
 255 0016 7F18     		jg	.L19
 256 0018 4439C8   		cmpl	%r9d, %eax
 257              		.loc 1 1449 0
 258 001b 8937     		movl	%esi, (%rdi)
 259              		.loc 1 1448 0
 260 001d 7E41     		jle	.L23
 261              		.loc 1 1454 0
 262 001f 01C8     		addl	%ecx, %eax
 263 0021 29D0     		subl	%edx, %eax
 264 0023 894704   		movl	%eax, 4(%rdi)
 265 0026 C3       		ret
 266 0027 660F1F84 		.p2align 4,,10
 266      00000000 
 266      00
 267              		.p2align 3
 268              	.L19:
 269              		.loc 1 1455 0
 270 0030 39F0     		cmpl	%esi, %eax
 271 0032 7E10     		jle	.L15
 272              		.loc 1 1456 0
 273 0034 29D1     		subl	%edx, %ecx
 274              	.LVL22:
 275 0036 01C8     		addl	%ecx, %eax
 276              		.loc 1 1457 0
 277 0038 4139C0   		cmpl	%eax, %r8d
 278              		.loc 1 1456 0
 279 003b 894704   		movl	%eax, 4(%rdi)
 280              		.loc 1 1457 0
 281 003e 7C04     		jl	.L15
 282              		.loc 1 1458 0
 283 0040 C6470800 		movb	$0, 8(%rdi)
 284              	.L15:
 285 0044 F3C3     		rep ret
 286              	.LVL23:
 287 0046 662E0F1F 		.p2align 4,,10
 287      84000000 
 287      0000
 288              		.p2align 3
 289              	.L22:
 290              		.loc 1 1446 0
 291 0050 29D1     		subl	%edx, %ecx
 292              	.LVL24:
 293 0052 4101C8   		addl	%ecx, %r8d
 294              		.loc 1 1447 0
 295 0055 01C1     		addl	%eax, %ecx
 296              		.loc 1 1446 0
 297 0057 448907   		movl	%r8d, (%rdi)
 298              		.loc 1 1447 0
 299 005a 894F04   		movl	%ecx, 4(%rdi)
 300 005d C3       		ret
 301              	.LVL25:
 302 005e 6690     		.p2align 4,,10
 303              		.p2align 3
 304              	.L23:
 305              		.loc 1 1450 0
 306 0060 897704   		movl	%esi, 4(%rdi)
 307              		.loc 1 1451 0
 308 0063 C6470800 		movb	$0, 8(%rdi)
 309 0067 C3       		ret
 310              		.cfi_endproc
 311              	.LFE272:
 313              		.section	.text.unlikely._ZN17Fl_Text_Selection6updateEiii.part.8
 314              	.LCOLDE5:
 315              		.section	.text._ZN17Fl_Text_Selection6updateEiii.part.8
 316              	.LHOTE5:
 317              		.section	.text.unlikely._ZN14Fl_Text_BufferC2Eii,"ax",@progbits
 318              		.align 2
 319              	.LCOLDB6:
 320              		.section	.text._ZN14Fl_Text_BufferC2Eii,"ax",@progbits
 321              	.LHOTB6:
 322              		.align 2
 323              		.p2align 4,,15
 324              		.globl	_ZN14Fl_Text_BufferC2Eii
 326              	_ZN14Fl_Text_BufferC2Eii:
 327              	.LFB190:
 328              		.loc 1 105 0
 329              		.cfi_startproc
 330              	.LVL26:
 331 0000 55       		pushq	%rbp
 332              		.cfi_def_cfa_offset 16
 333              		.cfi_offset 6, -16
 334 0001 53       		pushq	%rbx
 335              		.cfi_def_cfa_offset 24
 336              		.cfi_offset 3, -24
 337              	.LBB343:
 338              		.loc 1 109 0
 339 0002 01D6     		addl	%edx, %esi
 340              	.LVL27:
 341              	.LBE343:
 342              		.loc 1 105 0
 343 0004 4889FB   		movq	%rdi, %rbx
 344 0007 89D5     		movl	%edx, %ebp
 345 0009 4883EC08 		subq	$8, %rsp
 346              		.cfi_def_cfa_offset 32
 347              	.LBB344:
 348              		.loc 1 107 0
 349 000d C7473400 		movl	$0, 52(%rdi)
 349      000000
 350              		.loc 1 108 0
 351 0014 89938000 		movl	%edx, 128(%rbx)
 351      0000
 352              		.loc 1 109 0
 353 001a 4863FE   		movslq	%esi, %rdi
 354              	.LVL28:
 355 001d E8000000 		call	malloc
 355      00
 356              	.LVL29:
 357              		.loc 1 111 0
 358 0022 896B44   		movl	%ebp, 68(%rbx)
 359              		.loc 1 109 0
 360 0025 48894338 		movq	%rax, 56(%rbx)
 361              		.loc 1 110 0
 362 0029 C7434000 		movl	$0, 64(%rbx)
 362      000000
 363              		.loc 1 112 0
 364 0030 C7434808 		movl	$8, 72(%rbx)
 364      000000
 365              		.loc 1 113 0
 366 0037 C6431800 		movb	$0, 24(%rbx)
 367              		.loc 1 114 0
 368 003b C7431400 		movl	$0, 20(%rbx)
 368      000000
 369 0042 C7431000 		movl	$0, 16(%rbx)
 369      000000
 370              		.loc 1 115 0
 371 0049 C6432400 		movb	$0, 36(%rbx)
 372              		.loc 1 116 0
 373 004d C7432000 		movl	$0, 32(%rbx)
 373      000000
 374 0054 C7431C00 		movl	$0, 28(%rbx)
 374      000000
 375              		.loc 1 117 0
 376 005b C6433000 		movb	$0, 48(%rbx)
 377              		.loc 1 118 0
 378 005f C7432C00 		movl	$0, 44(%rbx)
 378      000000
 379 0066 C7432800 		movl	$0, 40(%rbx)
 379      000000
 380              		.loc 1 119 0
 381 006d 48C74350 		movq	$0, 80(%rbx)
 381      00000000 
 382              		.loc 1 120 0
 383 0075 48C74358 		movq	$0, 88(%rbx)
 383      00000000 
 384              		.loc 1 121 0
 385 007d C7434C00 		movl	$0, 76(%rbx)
 385      000000
 386              		.loc 1 122 0
 387 0084 C7436000 		movl	$0, 96(%rbx)
 387      000000
 388              		.loc 1 123 0
 389 008b 48C74368 		movq	$0, 104(%rbx)
 389      00000000 
 390              		.loc 1 124 0
 391 0093 48C74370 		movq	$0, 112(%rbx)
 391      00000000 
 392              		.loc 1 125 0
 393 009b C7437800 		movl	$0, 120(%rbx)
 393      000000
 394              		.loc 1 126 0
 395 00a2 C6437C01 		movb	$1, 124(%rbx)
 396              		.loc 1 127 0
 397 00a6 C7030000 		movl	$0, (%rbx)
 397      0000
 398              		.loc 1 128 0
 399 00ac 48C74308 		movq	$_ZL30def_transcoding_warning_actionP14Fl_Text_Buffer, 8(%rbx)
 399      00000000 
 400              	.LBE344:
 401              		.loc 1 129 0
 402 00b4 4883C408 		addq	$8, %rsp
 403              		.cfi_def_cfa_offset 24
 404 00b8 5B       		popq	%rbx
 405              		.cfi_def_cfa_offset 16
 406              	.LVL30:
 407 00b9 5D       		popq	%rbp
 408              		.cfi_def_cfa_offset 8
 409              	.LVL31:
 410 00ba C3       		ret
 411              		.cfi_endproc
 412              	.LFE190:
 414              		.section	.text.unlikely._ZN14Fl_Text_BufferC2Eii
 415              	.LCOLDE6:
 416              		.section	.text._ZN14Fl_Text_BufferC2Eii
 417              	.LHOTE6:
 418              		.globl	_ZN14Fl_Text_BufferC1Eii
 419              		.set	_ZN14Fl_Text_BufferC1Eii,_ZN14Fl_Text_BufferC2Eii
 420              		.section	.text.unlikely._ZN14Fl_Text_BufferD2Ev,"ax",@progbits
 421              		.align 2
 422              	.LCOLDB7:
 423              		.section	.text._ZN14Fl_Text_BufferD2Ev,"ax",@progbits
 424              	.LHOTB7:
 425              		.align 2
 426              		.p2align 4,,15
 427              		.globl	_ZN14Fl_Text_BufferD2Ev
 429              	_ZN14Fl_Text_BufferD2Ev:
 430              	.LFB193:
 431              		.loc 1 135 0
 432              		.cfi_startproc
 433              	.LVL32:
 434 0000 53       		pushq	%rbx
 435              		.cfi_def_cfa_offset 16
 436              		.cfi_offset 3, -16
 437              		.loc 1 135 0
 438 0001 4889FB   		movq	%rdi, %rbx
 439              	.LBB345:
 440              		.loc 1 137 0
 441 0004 488B7F38 		movq	56(%rdi), %rdi
 442              	.LVL33:
 443 0008 E8000000 		call	free
 443      00
 444              	.LVL34:
 445              		.loc 1 138 0
 446 000d 8B534C   		movl	76(%rbx), %edx
 447 0010 85D2     		testl	%edx, %edx
 448 0012 741C     		je	.L28
 449              		.loc 1 139 0
 450 0014 488B7B50 		movq	80(%rbx), %rdi
 451 0018 4885FF   		testq	%rdi, %rdi
 452 001b 7405     		je	.L29
 453              		.loc 1 139 0 is_stmt 0 discriminator 1
 454 001d E8000000 		call	_ZdaPv
 454      00
 455              	.LVL35:
 456              	.L29:
 457              		.loc 1 140 0 is_stmt 1
 458 0022 488B7B58 		movq	88(%rbx), %rdi
 459 0026 4885FF   		testq	%rdi, %rdi
 460 0029 7405     		je	.L28
 461              		.loc 1 140 0 is_stmt 0 discriminator 1
 462 002b E8000000 		call	_ZdaPv
 462      00
 463              	.LVL36:
 464              	.L28:
 465              		.loc 1 142 0 is_stmt 1
 466 0030 8B4360   		movl	96(%rbx), %eax
 467 0033 85C0     		testl	%eax, %eax
 468 0035 7E21     		jle	.L26
 469              		.loc 1 143 0
 470 0037 488B7B68 		movq	104(%rbx), %rdi
 471 003b 4885FF   		testq	%rdi, %rdi
 472 003e 7405     		je	.L33
 473              		.loc 1 143 0 is_stmt 0 discriminator 1
 474 0040 E8000000 		call	_ZdaPv
 474      00
 475              	.LVL37:
 476              	.L33:
 477              		.loc 1 144 0 is_stmt 1
 478 0045 488B7B70 		movq	112(%rbx), %rdi
 479 0049 4885FF   		testq	%rdi, %rdi
 480 004c 740A     		je	.L26
 481              	.LBE345:
 482              		.loc 1 146 0 discriminator 1
 483 004e 5B       		popq	%rbx
 484              		.cfi_remember_state
 485              		.cfi_def_cfa_offset 8
 486              	.LVL38:
 487              	.LBB346:
 488              		.loc 1 144 0 discriminator 1
 489 004f E9000000 		jmp	_ZdaPv
 489      00
 490              	.LVL39:
 491              		.p2align 4,,10
 492 0054 0F1F4000 		.p2align 3
 493              	.L26:
 494              		.cfi_restore_state
 495              	.LBE346:
 496              		.loc 1 146 0
 497 0058 5B       		popq	%rbx
 498              		.cfi_def_cfa_offset 8
 499              	.LVL40:
 500 0059 C3       		ret
 501              		.cfi_endproc
 502              	.LFE193:
 504              		.section	.text.unlikely._ZN14Fl_Text_BufferD2Ev
 505              	.LCOLDE7:
 506              		.section	.text._ZN14Fl_Text_BufferD2Ev
 507              	.LHOTE7:
 508              		.globl	_ZN14Fl_Text_BufferD1Ev
 509              		.set	_ZN14Fl_Text_BufferD1Ev,_ZN14Fl_Text_BufferD2Ev
 510              		.section	.text.unlikely._ZNK14Fl_Text_Buffer4textEv,"ax",@progbits
 511              		.align 2
 512              	.LCOLDB8:
 513              		.section	.text._ZNK14Fl_Text_Buffer4textEv,"ax",@progbits
 514              	.LHOTB8:
 515              		.align 2
 516              		.p2align 4,,15
 517              		.globl	_ZNK14Fl_Text_Buffer4textEv
 519              	_ZNK14Fl_Text_Buffer4textEv:
 520              	.LFB195:
 521              		.loc 1 153 0
 522              		.cfi_startproc
 523              	.LVL41:
 524 0000 4157     		pushq	%r15
 525              		.cfi_def_cfa_offset 16
 526              		.cfi_offset 15, -16
 527 0002 4156     		pushq	%r14
 528              		.cfi_def_cfa_offset 24
 529              		.cfi_offset 14, -24
 530 0004 4155     		pushq	%r13
 531              		.cfi_def_cfa_offset 32
 532              		.cfi_offset 13, -32
 533 0006 4154     		pushq	%r12
 534              		.cfi_def_cfa_offset 40
 535              		.cfi_offset 12, -40
 536 0008 4989FD   		movq	%rdi, %r13
 537 000b 55       		pushq	%rbp
 538              		.cfi_def_cfa_offset 48
 539              		.cfi_offset 6, -48
 540 000c 53       		pushq	%rbx
 541              		.cfi_def_cfa_offset 56
 542              		.cfi_offset 3, -56
 543 000d 4883EC08 		subq	$8, %rsp
 544              		.cfi_def_cfa_offset 64
 545              		.loc 1 154 0
 546 0011 48635F34 		movslq	52(%rdi), %rbx
 547 0015 8D7B01   		leal	1(%rbx), %edi
 548              	.LVL42:
 549 0018 4863FF   		movslq	%edi, %rdi
 550 001b E8000000 		call	malloc
 550      00
 551              	.LVL43:
 552              		.loc 1 155 0
 553 0020 4D636540 		movslq	64(%r13), %r12
 554 0024 4D8B7538 		movq	56(%r13), %r14
 555              	.LBB347:
 556              	.LBB348:
 557              		.file 3 "/usr/include/x86_64-linux-gnu/bits/string3.h"
   1:/usr/include/x86_64-linux-gnu/bits/string3.h **** /* Copyright (C) 2004-2016 Free Software Foundation, Inc.
   2:/usr/include/x86_64-linux-gnu/bits/string3.h ****    This file is part of the GNU C Library.
   3:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
   4:/usr/include/x86_64-linux-gnu/bits/string3.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/x86_64-linux-gnu/bits/string3.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/x86_64-linux-gnu/bits/string3.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/x86_64-linux-gnu/bits/string3.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
   9:/usr/include/x86_64-linux-gnu/bits/string3.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/x86_64-linux-gnu/bits/string3.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/x86_64-linux-gnu/bits/string3.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/x86_64-linux-gnu/bits/string3.h ****    Lesser General Public License for more details.
  13:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  14:/usr/include/x86_64-linux-gnu/bits/string3.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/x86_64-linux-gnu/bits/string3.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/x86_64-linux-gnu/bits/string3.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  18:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifndef _STRING_H
  19:/usr/include/x86_64-linux-gnu/bits/string3.h **** # error "Never use <bits/string3.h> directly; include <string.h> instead."
  20:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  21:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  22:/usr/include/x86_64-linux-gnu/bits/string3.h **** #if !__GNUC_PREREQ (5,0)
  23:/usr/include/x86_64-linux-gnu/bits/string3.h **** __warndecl (__warn_memset_zero_len,
  24:/usr/include/x86_64-linux-gnu/bits/string3.h **** 	    "memset used with constant zero length parameter; this could be due to transposed parameters")
  25:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  26:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  27:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifndef __cplusplus
  28:/usr/include/x86_64-linux-gnu/bits/string3.h **** /* XXX This is temporarily.  We should not redefine any of the symbols
  29:/usr/include/x86_64-linux-gnu/bits/string3.h ****    and instead integrate the error checking into the original
  30:/usr/include/x86_64-linux-gnu/bits/string3.h ****    definitions.  */
  31:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef memcpy
  32:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef memmove
  33:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef memset
  34:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef strcat
  35:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef strcpy
  36:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef strncat
  37:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef strncpy
  38:/usr/include/x86_64-linux-gnu/bits/string3.h **** # ifdef __USE_GNU
  39:/usr/include/x86_64-linux-gnu/bits/string3.h **** #  undef mempcpy
  40:/usr/include/x86_64-linux-gnu/bits/string3.h **** #  undef stpcpy
  41:/usr/include/x86_64-linux-gnu/bits/string3.h **** # endif
  42:/usr/include/x86_64-linux-gnu/bits/string3.h **** # ifdef __USE_MISC
  43:/usr/include/x86_64-linux-gnu/bits/string3.h **** #  undef bcopy
  44:/usr/include/x86_64-linux-gnu/bits/string3.h **** #  undef bzero
  45:/usr/include/x86_64-linux-gnu/bits/string3.h **** # endif
  46:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  47:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  48:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  49:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  50:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (memcpy (void *__restrict __dest, const void *__restrict __src,
  51:/usr/include/x86_64-linux-gnu/bits/string3.h **** 	       size_t __len))
  52:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  53:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___memcpy_chk (__dest, __src, __len, __bos0 (__dest));
 558              		.loc 3 53 0
 559 0028 4889C7   		movq	%rax, %rdi
 560              	.LBE348:
 561              	.LBE347:
 562              		.loc 1 154 0
 563 002b 4889C5   		movq	%rax, %rbp
 564              	.LVL44:
 565              	.LBB350:
 566              	.LBB349:
 567              		.loc 3 53 0
 568 002e 4C89F6   		movq	%r14, %rsi
 569 0031 4C89E2   		movq	%r12, %rdx
 570 0034 E8000000 		call	memcpy
 570      00
 571              	.LVL45:
 572              	.LBE349:
 573              	.LBE350:
 574              	.LBB351:
 575              	.LBB352:
 576 0039 49637544 		movslq	68(%r13), %rsi
 577 003d 89DA     		movl	%ebx, %edx
 578 003f 4A8D7C25 		leaq	0(%rbp,%r12), %rdi
 578      00
 579              	.LVL46:
 580 0044 4429E2   		subl	%r12d, %edx
 581 0047 4863D2   		movslq	%edx, %rdx
 582              	.LVL47:
 583 004a 4C01F6   		addq	%r14, %rsi
 584              	.LVL48:
 585 004d E8000000 		call	memcpy
 585      00
 586              	.LVL49:
 587              	.LBE352:
 588              	.LBE351:
 589              		.loc 1 157 0
 590 0052 C6441D00 		movb	$0, 0(%rbp,%rbx)
 590      00
 591              		.loc 1 159 0
 592 0057 4883C408 		addq	$8, %rsp
 593              		.cfi_def_cfa_offset 56
 594 005b 4889E8   		movq	%rbp, %rax
 595 005e 5B       		popq	%rbx
 596              		.cfi_def_cfa_offset 48
 597 005f 5D       		popq	%rbp
 598              		.cfi_def_cfa_offset 40
 599              	.LVL50:
 600 0060 415C     		popq	%r12
 601              		.cfi_def_cfa_offset 32
 602 0062 415D     		popq	%r13
 603              		.cfi_def_cfa_offset 24
 604              	.LVL51:
 605 0064 415E     		popq	%r14
 606              		.cfi_def_cfa_offset 16
 607 0066 415F     		popq	%r15
 608              		.cfi_def_cfa_offset 8
 609 0068 C3       		ret
 610              		.cfi_endproc
 611              	.LFE195:
 613              		.section	.text.unlikely._ZNK14Fl_Text_Buffer4textEv
 614              	.LCOLDE8:
 615              		.section	.text._ZNK14Fl_Text_Buffer4textEv
 616              	.LHOTE8:
 617              		.section	.text.unlikely._ZNK14Fl_Text_Buffer10text_rangeEii,"ax",@progbits
 618              		.align 2
 619              	.LCOLDB9:
 620              		.section	.text._ZNK14Fl_Text_Buffer10text_rangeEii,"ax",@progbits
 621              	.LHOTB9:
 622              		.align 2
 623              		.p2align 4,,15
 624              		.globl	_ZNK14Fl_Text_Buffer10text_rangeEii
 626              	_ZNK14Fl_Text_Buffer10text_rangeEii:
 627              	.LFB197:
 628              		.loc 1 200 0
 629              		.cfi_startproc
 630              	.LVL52:
 631 0000 4157     		pushq	%r15
 632              		.cfi_def_cfa_offset 16
 633              		.cfi_offset 15, -16
 634 0002 4156     		pushq	%r14
 635              		.cfi_def_cfa_offset 24
 636              		.cfi_offset 14, -24
 637 0004 4155     		pushq	%r13
 638              		.cfi_def_cfa_offset 32
 639              		.cfi_offset 13, -32
 640 0006 4154     		pushq	%r12
 641              		.cfi_def_cfa_offset 40
 642              		.cfi_offset 12, -40
 643 0008 55       		pushq	%rbp
 644              		.cfi_def_cfa_offset 48
 645              		.cfi_offset 6, -48
 646 0009 53       		pushq	%rbx
 647              		.cfi_def_cfa_offset 56
 648              		.cfi_offset 3, -56
 649 000a 4863DE   		movslq	%esi, %rbx
 650              	.LVL53:
 651 000d 4883EC18 		subq	$24, %rsp
 652              		.cfi_def_cfa_offset 80
 653              		.loc 1 208 0
 654 0011 85DB     		testl	%ebx, %ebx
 655 0013 0F88B700 		js	.L51
 655      0000
 656              		.loc 1 208 0 is_stmt 0 discriminator 1
 657 0019 8B6F34   		movl	52(%rdi), %ebp
 658 001c 4989FC   		movq	%rdi, %r12
 659 001f 39EB     		cmpl	%ebp, %ebx
 660 0021 0F8FA900 		jg	.L51
 660      0000
 661              	.LBB353:
 662              		.loc 1 214 0 is_stmt 1
 663 0027 39D3     		cmpl	%edx, %ebx
 664 0029 0F8F9100 		jg	.L59
 664      0000
 665              	.LVL54:
 666              	.LBE353:
 667 002f 39D5     		cmpl	%edx, %ebp
 668 0031 0F4DEA   		cmovge	%edx, %ebp
 669              	.LVL55:
 670              	.L55:
 671              		.loc 1 221 0
 672 0034 4189ED   		movl	%ebp, %r13d
 673 0037 4129DD   		subl	%ebx, %r13d
 674              	.LVL56:
 675              		.loc 1 222 0
 676 003a 418D7D01 		leal	1(%r13), %edi
 677              	.LVL57:
 678 003e 4863FF   		movslq	%edi, %rdi
 679 0041 E8000000 		call	malloc
 679      00
 680              	.LVL58:
 681 0046 4989C6   		movq	%rax, %r14
 682              	.LVL59:
 683              	.LBB354:
 684              		.loc 1 225 0
 685 0049 418B4424 		movl	64(%r12), %eax
 685      40
 686              	.LVL60:
 687 004e 39C5     		cmpl	%eax, %ebp
 688 0050 0F8EC200 		jle	.L61
 688      0000
 689              	.LBB355:
 690              		.loc 1 227 0
 691 0056 39D8     		cmpl	%ebx, %eax
 692 0058 0F8E9200 		jle	.L62
 692      0000
 693              	.LBB356:
 694              		.loc 1 231 0
 695 005e 498B4C24 		movq	56(%r12), %rcx
 695      38
 696              		.loc 1 230 0
 697 0063 29D8     		subl	%ebx, %eax
 698              	.LBB357:
 699              	.LBB358:
 700              		.loc 3 53 0
 701 0065 4863F3   		movslq	%ebx, %rsi
 702              	.LBE358:
 703              	.LBE357:
 704              		.loc 1 230 0
 705 0068 4C63F8   		movslq	%eax, %r15
 706              	.LVL61:
 707              	.LBB360:
 708              	.LBB359:
 709              		.loc 3 53 0
 710 006b 4C89F7   		movq	%r14, %rdi
 711 006e 4C89FA   		movq	%r15, %rdx
 712 0071 4801CE   		addq	%rcx, %rsi
 713              	.LVL62:
 714 0074 48894C24 		movq	%rcx, 8(%rsp)
 714      08
 715 0079 E8000000 		call	memcpy
 715      00
 716              	.LVL63:
 717              	.LBE359:
 718              	.LBE360:
 719              	.LBB361:
 720              	.LBB362:
 721 007e 49637424 		movslq	68(%r12), %rsi
 721      44
 722 0083 488B4C24 		movq	8(%rsp), %rcx
 722      08
 723 0088 4489EA   		movl	%r13d, %edx
 724 008b 4B8D3C3E 		leaq	(%r14,%r15), %rdi
 725              	.LVL64:
 726 008f 4429FA   		subl	%r15d, %edx
 727 0092 4D63ED   		movslq	%r13d, %r13
 728 0095 4863D2   		movslq	%edx, %rdx
 729              	.LVL65:
 730 0098 4801CE   		addq	%rcx, %rsi
 731              	.LVL66:
 732 009b E8000000 		call	memcpy
 732      00
 733              	.LVL67:
 734              	.L57:
 735              	.LBE362:
 736              	.LBE361:
 737              	.LBE356:
 738              	.LBE355:
 739              	.LBE354:
 740              		.loc 1 234 0
 741 00a0 43C6042E 		movb	$0, (%r14,%r13)
 741      00
 742              		.loc 1 236 0
 743 00a5 4883C418 		addq	$24, %rsp
 744              		.cfi_remember_state
 745              		.cfi_def_cfa_offset 56
 746              		.loc 1 222 0
 747 00a9 4C89F0   		movq	%r14, %rax
 748              		.loc 1 236 0
 749 00ac 5B       		popq	%rbx
 750              		.cfi_def_cfa_offset 48
 751              	.LVL68:
 752 00ad 5D       		popq	%rbp
 753              		.cfi_def_cfa_offset 40
 754              	.LVL69:
 755 00ae 415C     		popq	%r12
 756              		.cfi_def_cfa_offset 32
 757              	.LVL70:
 758 00b0 415D     		popq	%r13
 759              		.cfi_def_cfa_offset 24
 760 00b2 415E     		popq	%r14
 761              		.cfi_def_cfa_offset 16
 762              	.LVL71:
 763 00b4 415F     		popq	%r15
 764              		.cfi_def_cfa_offset 8
 765 00b6 C3       		ret
 766              	.LVL72:
 767 00b7 660F1F84 		.p2align 4,,10
 767      00000000 
 767      00
 768              		.p2align 3
 769              	.L59:
 770              		.cfi_restore_state
 771              	.LBB372:
 772 00c0 89DD     		movl	%ebx, %ebp
 773 00c2 4863DA   		movslq	%edx, %rbx
 774              	.LVL73:
 775 00c5 E96AFFFF 		jmp	.L55
 775      FF
 776              	.LVL74:
 777 00ca 660F1F44 		.p2align 4,,10
 777      0000
 778              		.p2align 3
 779              	.L51:
 780              	.LBE372:
 781              		.loc 1 210 0
 782 00d0 BF010000 		movl	$1, %edi
 782      00
 783              	.LVL75:
 784 00d5 E8000000 		call	malloc
 784      00
 785              	.LVL76:
 786              		.loc 1 211 0
 787 00da C60000   		movb	$0, (%rax)
 788              		.loc 1 236 0
 789 00dd 4883C418 		addq	$24, %rsp
 790              		.cfi_remember_state
 791              		.cfi_def_cfa_offset 56
 792 00e1 5B       		popq	%rbx
 793              		.cfi_def_cfa_offset 48
 794              	.LVL77:
 795 00e2 5D       		popq	%rbp
 796              		.cfi_def_cfa_offset 40
 797 00e3 415C     		popq	%r12
 798              		.cfi_def_cfa_offset 32
 799 00e5 415D     		popq	%r13
 800              		.cfi_def_cfa_offset 24
 801 00e7 415E     		popq	%r14
 802              		.cfi_def_cfa_offset 16
 803 00e9 415F     		popq	%r15
 804              		.cfi_def_cfa_offset 8
 805 00eb C3       		ret
 806              	.LVL78:
 807 00ec 0F1F4000 		.p2align 4,,10
 808              		.p2align 3
 809              	.L62:
 810              		.cfi_restore_state
 811              	.LBB373:
 812              	.LBB367:
 813              	.LBB363:
 814              	.LBB364:
 815              		.loc 3 53 0
 816 00f0 418B7424 		movl	68(%r12), %esi
 816      44
 817              	.LBE364:
 818              	.LBE363:
 819              		.loc 1 228 0
 820 00f5 4D63ED   		movslq	%r13d, %r13
 821              	.LVL79:
 822              	.LBB366:
 823              	.LBB365:
 824              		.loc 3 53 0
 825 00f8 4C89F7   		movq	%r14, %rdi
 826 00fb 4C89EA   		movq	%r13, %rdx
 827 00fe 29C6     		subl	%eax, %esi
 828              	.LVL80:
 829 0100 4863F6   		movslq	%esi, %rsi
 830 0103 4801DE   		addq	%rbx, %rsi
 831 0106 49037424 		addq	56(%r12), %rsi
 831      38
 832 010b E8000000 		call	memcpy
 832      00
 833              	.LVL81:
 834 0110 EB8E     		jmp	.L57
 835              	.LVL82:
 836              		.p2align 4,,10
 837 0112 660F1F44 		.p2align 3
 837      0000
 838              	.L61:
 839              	.LBE365:
 840              	.LBE366:
 841              	.LBE367:
 842              	.LBB368:
 843              	.LBB369:
 844 0118 4863F3   		movslq	%ebx, %rsi
 845 011b 49037424 		addq	56(%r12), %rsi
 845      38
 846              	.LBE369:
 847              	.LBE368:
 848              		.loc 1 226 0
 849 0120 4D63ED   		movslq	%r13d, %r13
 850              	.LVL83:
 851              	.LBB371:
 852              	.LBB370:
 853              		.loc 3 53 0
 854 0123 4C89EA   		movq	%r13, %rdx
 855 0126 4C89F7   		movq	%r14, %rdi
 856 0129 E8000000 		call	memcpy
 856      00
 857              	.LVL84:
 858 012e E96DFFFF 		jmp	.L57
 858      FF
 859              	.LBE370:
 860              	.LBE371:
 861              	.LBE373:
 862              		.cfi_endproc
 863              	.LFE197:
 865              		.section	.text.unlikely._ZNK14Fl_Text_Buffer10text_rangeEii
 866              	.LCOLDE9:
 867              		.section	.text._ZNK14Fl_Text_Buffer10text_rangeEii
 868              	.LHOTE9:
 869              		.section	.text.unlikely._ZNK14Fl_Text_Buffer7char_atEi,"ax",@progbits
 870              		.align 2
 871              	.LCOLDB10:
 872              		.section	.text._ZNK14Fl_Text_Buffer7char_atEi,"ax",@progbits
 873              	.LHOTB10:
 874              		.align 2
 875              		.p2align 4,,15
 876              		.globl	_ZNK14Fl_Text_Buffer7char_atEi
 878              	_ZNK14Fl_Text_Buffer7char_atEi:
 879              	.LFB198:
 880              		.loc 1 242 0
 881              		.cfi_startproc
 882              	.LVL85:
 883              		.loc 1 243 0
 884 0000 85F6     		testl	%esi, %esi
 885 0002 780C     		js	.L64
 886              		.loc 1 243 0 is_stmt 0 discriminator 1
 887 0004 3B7734   		cmpl	52(%rdi), %esi
 888 0007 7D07     		jge	.L64
 889 0009 E9000000 		jmp	_ZNK14Fl_Text_Buffer7char_atEi.part.5
 889      00
 890              	.LVL86:
 891 000e 6690     		.p2align 4,,10
 892              		.p2align 3
 893              	.L64:
 894              		.loc 1 250 0 is_stmt 1
 895 0010 31C0     		xorl	%eax, %eax
 896 0012 C3       		ret
 897              		.cfi_endproc
 898              	.LFE198:
 900              		.section	.text.unlikely._ZNK14Fl_Text_Buffer7char_atEi
 901              	.LCOLDE10:
 902              		.section	.text._ZNK14Fl_Text_Buffer7char_atEi
 903              	.LHOTE10:
 904              		.section	.text.unlikely._ZNK14Fl_Text_Buffer7byte_atEi,"ax",@progbits
 905              		.align 2
 906              	.LCOLDB11:
 907              		.section	.text._ZNK14Fl_Text_Buffer7byte_atEi,"ax",@progbits
 908              	.LHOTB11:
 909              		.align 2
 910              		.p2align 4,,15
 911              		.globl	_ZNK14Fl_Text_Buffer7byte_atEi
 913              	_ZNK14Fl_Text_Buffer7byte_atEi:
 914              	.LFB199:
 915              		.loc 1 257 0
 916              		.cfi_startproc
 917              	.LVL87:
 918              		.loc 1 258 0
 919 0000 85F6     		testl	%esi, %esi
 920 0002 780C     		js	.L68
 921              		.loc 1 258 0 is_stmt 0 discriminator 1
 922 0004 3B7734   		cmpl	52(%rdi), %esi
 923 0007 7D07     		jge	.L68
 924 0009 E9000000 		jmp	_ZNK14Fl_Text_Buffer7byte_atEi.part.6
 924      00
 925              	.LVL88:
 926 000e 6690     		.p2align 4,,10
 927              		.p2align 3
 928              	.L68:
 929              		.loc 1 262 0 is_stmt 1
 930 0010 31C0     		xorl	%eax, %eax
 931 0012 C3       		ret
 932              		.cfi_endproc
 933              	.LFE199:
 935              		.section	.text.unlikely._ZNK14Fl_Text_Buffer7byte_atEi
 936              	.LCOLDE11:
 937              		.section	.text._ZNK14Fl_Text_Buffer7byte_atEi
 938              	.LHOTE11:
 939              		.section	.text.unlikely._ZN14Fl_Text_Buffer7canUndoEc,"ax",@progbits
 940              		.align 2
 941              	.LCOLDB12:
 942              		.section	.text._ZN14Fl_Text_Buffer7canUndoEc,"ax",@progbits
 943              	.LHOTB12:
 944              		.align 2
 945              		.p2align 4,,15
 946              		.globl	_ZN14Fl_Text_Buffer7canUndoEc
 948              	_ZN14Fl_Text_Buffer7canUndoEc:
 949              	.LFB205:
 950              		.loc 1 449 0
 951              		.cfi_startproc
 952              	.LVL89:
 953              		.loc 1 452 0
 954 0000 4084F6   		testb	%sil, %sil
 955              		.loc 1 450 0
 956 0003 4088777C 		movb	%sil, 124(%rdi)
 957              		.loc 1 452 0
 958 0007 7509     		jne	.L71
 959              		.loc 1 452 0 is_stmt 0 discriminator 1
 960 0009 483B3D00 		cmpq	_ZL10undowidget(%rip), %rdi
 960      000000
 961 0010 7406     		je	.L73
 962              	.L71:
 963 0012 F3C3     		rep ret
 964              		.p2align 4,,10
 965 0014 0F1F4000 		.p2align 3
 966              	.L73:
 967              		.loc 1 453 0 is_stmt 1
 968 0018 48C70500 		movq	$0, _ZL10undowidget(%rip)
 968      00000000 
 968      000000
 969 0023 C3       		ret
 970              		.cfi_endproc
 971              	.LFE205:
 973              		.section	.text.unlikely._ZN14Fl_Text_Buffer7canUndoEc
 974              	.LCOLDE12:
 975              		.section	.text._ZN14Fl_Text_Buffer7canUndoEc
 976              	.LHOTE12:
 977              		.section	.text.unlikely._ZN14Fl_Text_Buffer12tab_distanceEi,"ax",@progbits
 978              		.align 2
 979              	.LCOLDB13:
 980              		.section	.text._ZN14Fl_Text_Buffer12tab_distanceEi,"ax",@progbits
 981              	.LHOTB13:
 982              		.align 2
 983              		.p2align 4,,15
 984              		.globl	_ZN14Fl_Text_Buffer12tab_distanceEi
 986              	_ZN14Fl_Text_Buffer12tab_distanceEi:
 987              	.LFB206:
 988              		.loc 1 465 0
 989              		.cfi_startproc
 990              	.LVL90:
 991 0000 4156     		pushq	%r14
 992              		.cfi_def_cfa_offset 16
 993              		.cfi_offset 14, -16
 994 0002 4155     		pushq	%r13
 995              		.cfi_def_cfa_offset 24
 996              		.cfi_offset 13, -24
 997 0004 4189F6   		movl	%esi, %r14d
 998 0007 4154     		pushq	%r12
 999              		.cfi_def_cfa_offset 32
 1000              		.cfi_offset 12, -32
 1001 0009 55       		pushq	%rbp
 1002              		.cfi_def_cfa_offset 40
 1003              		.cfi_offset 6, -40
 1004 000a 4531E4   		xorl	%r12d, %r12d
 1005 000d 53       		pushq	%rbx
 1006              		.cfi_def_cfa_offset 48
 1007              		.cfi_offset 3, -48
 1008              	.LBB374:
 1009              	.LBB375:
 1010              		.loc 1 1320 0
 1011 000e 8B5760   		movl	96(%rdi), %edx
 1012 0011 31ED     		xorl	%ebp, %ebp
 1013              	.LBE375:
 1014              	.LBE374:
 1015              		.loc 1 465 0
 1016 0013 4889FB   		movq	%rdi, %rbx
 1017              		.loc 1 468 0
 1018 0016 448B6F34 		movl	52(%rdi), %r13d
 1019              	.LVL91:
 1020              	.LBB377:
 1021              	.LBB376:
 1022              		.loc 1 1320 0
 1023 001a 85D2     		testl	%edx, %edx
 1024 001c 7E24     		jle	.L78
 1025              	.LVL92:
 1026 001e 6690     		.p2align 4,,10
 1027              		.p2align 3
 1028              	.L81:
 1029              		.loc 1 1321 0
 1030 0020 488B4370 		movq	112(%rbx), %rax
 1031 0024 31FF     		xorl	%edi, %edi
 1032 0026 4489EE   		movl	%r13d, %esi
 1033              		.loc 1 1320 0
 1034 0029 4183C401 		addl	$1, %r12d
 1035              	.LVL93:
 1036              		.loc 1 1321 0
 1037 002d 488B1428 		movq	(%rax,%rbp), %rdx
 1038 0031 488B4368 		movq	104(%rbx), %rax
 1039 0035 FF1428   		call	*(%rax,%rbp)
 1040              	.LVL94:
 1041 0038 4883C508 		addq	$8, %rbp
 1042              		.loc 1 1320 0
 1043 003c 44396360 		cmpl	%r12d, 96(%rbx)
 1044 0040 7FDE     		jg	.L81
 1045              	.LVL95:
 1046              	.L78:
 1047              	.LBE376:
 1048              	.LBE377:
 1049              		.loc 1 471 0
 1050 0042 44897348 		movl	%r14d, 72(%rbx)
 1051              		.loc 1 475 0
 1052 0046 4889DF   		movq	%rbx, %rdi
 1053 0049 E8000000 		call	_ZNK14Fl_Text_Buffer4textEv
 1053      00
 1054              	.LVL96:
 1055 004e 4989C6   		movq	%rax, %r14
 1056              	.LVL97:
 1057              	.LBB378:
 1058              	.LBB379:
 1059              		.loc 1 1309 0
 1060 0051 8B434C   		movl	76(%rbx), %eax
 1061              	.LVL98:
 1062              	.LBE379:
 1063              	.LBE378:
 1064              		.loc 1 476 0
 1065 0054 448B6B34 		movl	52(%rbx), %r13d
 1066              	.LVL99:
 1067              	.LBB381:
 1068              	.LBB380:
 1069              		.loc 1 1309 0
 1070 0058 85C0     		testl	%eax, %eax
 1071 005a 7E36     		jle	.L76
 1072 005c 31ED     		xorl	%ebp, %ebp
 1073 005e 4531E4   		xorl	%r12d, %r12d
 1074              	.LVL100:
 1075              		.p2align 4,,10
 1076 0061 0F1F8000 		.p2align 3
 1076      000000
 1077              	.L80:
 1078              		.loc 1 1310 0
 1079 0068 488B5358 		movq	88(%rbx), %rdx
 1080              		.loc 1 1311 0
 1081 006c 488B4350 		movq	80(%rbx), %rax
 1082 0070 31C9     		xorl	%ecx, %ecx
 1083 0072 31FF     		xorl	%edi, %edi
 1084 0074 4D89F0   		movq	%r14, %r8
 1085 0077 4489EE   		movl	%r13d, %esi
 1086              		.loc 1 1309 0
 1087 007a 4183C401 		addl	$1, %r12d
 1088              	.LVL101:
 1089              		.loc 1 1311 0
 1090 007e 4C8B0C2A 		movq	(%rdx,%rbp), %r9
 1091 0082 4489EA   		movl	%r13d, %edx
 1092 0085 FF1428   		call	*(%rax,%rbp)
 1093              	.LVL102:
 1094 0088 4883C508 		addq	$8, %rbp
 1095              		.loc 1 1309 0
 1096 008c 4439634C 		cmpl	%r12d, 76(%rbx)
 1097 0090 7FD6     		jg	.L80
 1098              	.LVL103:
 1099              	.L76:
 1100              	.LBE380:
 1101              	.LBE381:
 1102              		.loc 1 478 0
 1103 0092 5B       		popq	%rbx
 1104              		.cfi_def_cfa_offset 40
 1105              	.LVL104:
 1106              		.loc 1 477 0
 1107 0093 4C89F7   		movq	%r14, %rdi
 1108              		.loc 1 478 0
 1109 0096 5D       		popq	%rbp
 1110              		.cfi_def_cfa_offset 32
 1111 0097 415C     		popq	%r12
 1112              		.cfi_def_cfa_offset 24
 1113 0099 415D     		popq	%r13
 1114              		.cfi_def_cfa_offset 16
 1115 009b 415E     		popq	%r14
 1116              		.cfi_def_cfa_offset 8
 1117              	.LVL105:
 1118              		.loc 1 477 0
 1119 009d E9000000 		jmp	free
 1119      00
 1120              	.LVL106:
 1121              		.cfi_endproc
 1122              	.LFE206:
 1124              		.section	.text.unlikely._ZN14Fl_Text_Buffer12tab_distanceEi
 1125              	.LCOLDE13:
 1126              		.section	.text._ZN14Fl_Text_Buffer12tab_distanceEi
 1127              	.LHOTE13:
 1128              		.section	.text.unlikely._ZN14Fl_Text_Buffer18selection_positionEPiS0_,"ax",@progbits
 1129              		.align 2
 1130              	.LCOLDB14:
 1131              		.section	.text._ZN14Fl_Text_Buffer18selection_positionEPiS0_,"ax",@progbits
 1132              	.LHOTB14:
 1133              		.align 2
 1134              		.p2align 4,,15
 1135              		.globl	_ZN14Fl_Text_Buffer18selection_positionEPiS0_
 1137              	_ZN14Fl_Text_Buffer18selection_positionEPiS0_:
 1138              	.LFB209:
 1139              		.loc 1 513 0
 1140              		.cfi_startproc
 1141              	.LVL107:
 1142              	.LBB382:
 1143              	.LBB383:
 1144              		.loc 1 1225 0
 1145 0000 31C0     		xorl	%eax, %eax
 1146              		.loc 1 1224 0
 1147 0002 807F1800 		cmpb	$0, 24(%rdi)
 1148 0006 740F     		je	.L85
 1149              		.loc 1 1226 0
 1150 0008 8B4710   		movl	16(%rdi), %eax
 1151 000b 8906     		movl	%eax, (%rsi)
 1152              		.loc 1 1227 0
 1153 000d 8B4714   		movl	20(%rdi), %eax
 1154 0010 8902     		movl	%eax, (%rdx)
 1155              		.loc 1 1229 0
 1156 0012 B8010000 		movl	$1, %eax
 1156      00
 1157              	.L85:
 1158              	.LVL108:
 1159              	.LBE383:
 1160              	.LBE382:
 1161              		.loc 1 515 0
 1162 0017 F3C3     		rep ret
 1163              		.cfi_endproc
 1164              	.LFE209:
 1166              		.section	.text.unlikely._ZN14Fl_Text_Buffer18selection_positionEPiS0_
 1167              	.LCOLDE14:
 1168              		.section	.text._ZN14Fl_Text_Buffer18selection_positionEPiS0_
 1169              	.LHOTE14:
 1170              		.section	.text.unlikely._ZN14Fl_Text_Buffer28secondary_selection_positionEPiS0_,"ax",@progbits
 1171              		.align 2
 1172              	.LCOLDB15:
 1173              		.section	.text._ZN14Fl_Text_Buffer28secondary_selection_positionEPiS0_,"ax",@progbits
 1174              	.LHOTB15:
 1175              		.align 2
 1176              		.p2align 4,,15
 1177              		.globl	_ZN14Fl_Text_Buffer28secondary_selection_positionEPiS0_
 1179              	_ZN14Fl_Text_Buffer28secondary_selection_positionEPiS0_:
 1180              	.LFB215:
 1181              		.loc 1 574 0
 1182              		.cfi_startproc
 1183              	.LVL109:
 1184              	.LBB384:
 1185              	.LBB385:
 1186              		.loc 1 1225 0
 1187 0000 31C0     		xorl	%eax, %eax
 1188              		.loc 1 1224 0
 1189 0002 807F2400 		cmpb	$0, 36(%rdi)
 1190 0006 740F     		je	.L88
 1191              		.loc 1 1226 0
 1192 0008 8B471C   		movl	28(%rdi), %eax
 1193 000b 8906     		movl	%eax, (%rsi)
 1194              		.loc 1 1227 0
 1195 000d 8B4720   		movl	32(%rdi), %eax
 1196 0010 8902     		movl	%eax, (%rdx)
 1197              		.loc 1 1229 0
 1198 0012 B8010000 		movl	$1, %eax
 1198      00
 1199              	.L88:
 1200              	.LVL110:
 1201              	.LBE385:
 1202              	.LBE384:
 1203              		.loc 1 576 0
 1204 0017 F3C3     		rep ret
 1205              		.cfi_endproc
 1206              	.LFE215:
 1208              		.section	.text.unlikely._ZN14Fl_Text_Buffer28secondary_selection_positionEPiS0_
 1209              	.LCOLDE15:
 1210              		.section	.text._ZN14Fl_Text_Buffer28secondary_selection_positionEPiS0_
 1211              	.LHOTE15:
 1212              		.section	.text.unlikely._ZN14Fl_Text_Buffer18highlight_positionEPiS0_,"ax",@progbits
 1213              		.align 2
 1214              	.LCOLDB16:
 1215              		.section	.text._ZN14Fl_Text_Buffer18highlight_positionEPiS0_,"ax",@progbits
 1216              	.LHOTB16:
 1217              		.align 2
 1218              		.p2align 4,,15
 1219              		.globl	_ZN14Fl_Text_Buffer18highlight_positionEPiS0_
 1221              	_ZN14Fl_Text_Buffer18highlight_positionEPiS0_:
 1222              	.LFB221:
 1223              		.loc 1 635 0
 1224              		.cfi_startproc
 1225              	.LVL111:
 1226              	.LBB386:
 1227              	.LBB387:
 1228              		.loc 1 1225 0
 1229 0000 31C0     		xorl	%eax, %eax
 1230              		.loc 1 1224 0
 1231 0002 807F3000 		cmpb	$0, 48(%rdi)
 1232 0006 740F     		je	.L91
 1233              		.loc 1 1226 0
 1234 0008 8B4728   		movl	40(%rdi), %eax
 1235 000b 8906     		movl	%eax, (%rsi)
 1236              		.loc 1 1227 0
 1237 000d 8B472C   		movl	44(%rdi), %eax
 1238 0010 8902     		movl	%eax, (%rdx)
 1239              		.loc 1 1229 0
 1240 0012 B8010000 		movl	$1, %eax
 1240      00
 1241              	.L91:
 1242              	.LVL112:
 1243              	.LBE387:
 1244              	.LBE386:
 1245              		.loc 1 637 0
 1246 0017 F3C3     		rep ret
 1247              		.cfi_endproc
 1248              	.LFE221:
 1250              		.section	.text.unlikely._ZN14Fl_Text_Buffer18highlight_positionEPiS0_
 1251              	.LCOLDE16:
 1252              		.section	.text._ZN14Fl_Text_Buffer18highlight_positionEPiS0_
 1253              	.LHOTE16:
 1254              		.section	.text.unlikely._ZN14Fl_Text_Buffer19add_modify_callbackEPFviiiiPKcPvES2_,"ax",@progbits
 1255              		.align 2
 1256              	.LCOLDB17:
 1257              		.section	.text._ZN14Fl_Text_Buffer19add_modify_callbackEPFviiiiPKcPvES2_,"ax",@progbits
 1258              	.LHOTB17:
 1259              		.align 2
 1260              		.p2align 4,,15
 1261              		.globl	_ZN14Fl_Text_Buffer19add_modify_callbackEPFviiiiPKcPvES2_
 1263              	_ZN14Fl_Text_Buffer19add_modify_callbackEPFviiiiPKcPvES2_:
 1264              	.LFB223:
 1265              		.loc 1 654 0
 1266              		.cfi_startproc
 1267              	.LVL113:
 1268 0000 4157     		pushq	%r15
 1269              		.cfi_def_cfa_offset 16
 1270              		.cfi_offset 15, -16
 1271 0002 4156     		pushq	%r14
 1272              		.cfi_def_cfa_offset 24
 1273              		.cfi_offset 14, -24
 1274              		.loc 1 656 0
 1275 0004 49BF0000 		movabsq	$1143914305352105984, %r15
 1275      00000000 
 1275      E00F
 1276              		.loc 1 654 0
 1277 000e 4155     		pushq	%r13
 1278              		.cfi_def_cfa_offset 32
 1279              		.cfi_offset 13, -32
 1280 0010 4154     		pushq	%r12
 1281              		.cfi_def_cfa_offset 40
 1282              		.cfi_offset 12, -40
 1283 0012 4989FE   		movq	%rdi, %r14
 1284 0015 55       		pushq	%rbp
 1285              		.cfi_def_cfa_offset 48
 1286              		.cfi_offset 6, -48
 1287 0016 53       		pushq	%rbx
 1288              		.cfi_def_cfa_offset 56
 1289              		.cfi_offset 3, -56
 1290              		.loc 1 656 0
 1291 0017 49C7C4FF 		movq	$-1, %r12
 1291      FFFFFF
 1292              		.loc 1 654 0
 1293 001e 4889F5   		movq	%rsi, %rbp
 1294 0021 4889D3   		movq	%rdx, %rbx
 1295 0024 4883EC08 		subq	$8, %rsp
 1296              		.cfi_def_cfa_offset 64
 1297              		.loc 1 656 0
 1298 0028 8B474C   		movl	76(%rdi), %eax
 1299 002b 83C001   		addl	$1, %eax
 1300 002e 4898     		cltq
 1301 0030 488D3CC5 		leaq	0(,%rax,8), %rdi
 1301      00000000 
 1302              	.LVL114:
 1303 0038 4C39F8   		cmpq	%r15, %rax
 1304 003b 490F47FC 		cmova	%r12, %rdi
 1305 003f E8000000 		call	_Znam
 1305      00
 1306              	.LVL115:
 1307 0044 4989C5   		movq	%rax, %r13
 1308              	.LVL116:
 1309              		.loc 1 657 0
 1310 0047 418B464C 		movl	76(%r14), %eax
 1311              	.LVL117:
 1312 004b 83C001   		addl	$1, %eax
 1313 004e 4898     		cltq
 1314 0050 488D3CC5 		leaq	0(,%rax,8), %rdi
 1314      00000000 
 1315 0058 4C39F8   		cmpq	%r15, %rax
 1316 005b 490F47FC 		cmova	%r12, %rdi
 1317 005f E8000000 		call	_Znam
 1317      00
 1318              	.LVL118:
 1319              	.LBB388:
 1320              		.loc 1 658 0
 1321 0064 418B764C 		movl	76(%r14), %esi
 1322              	.LBE388:
 1323              		.loc 1 657 0
 1324 0068 4989C4   		movq	%rax, %r12
 1325              	.LVL119:
 1326              	.LBB389:
 1327              		.loc 1 658 0
 1328 006b 83FE00   		cmpl	$0, %esi
 1329 006e 7E67     		jle	.L96
 1330 0070 498B7E50 		movq	80(%r14), %rdi
 1331 0074 498B4658 		movq	88(%r14), %rax
 1332              	.LVL120:
 1333 0078 31D2     		xorl	%edx, %edx
 1334              	.LVL121:
 1335 007a 660F1F44 		.p2align 4,,10
 1335      0000
 1336              		.p2align 3
 1337              	.L98:
 1338              		.loc 1 659 0 discriminator 2
 1339 0080 488B0CD7 		movq	(%rdi,%rdx,8), %rcx
 1340 0084 49894CD5 		movq	%rcx, 8(%r13,%rdx,8)
 1340      08
 1341              		.loc 1 660 0 discriminator 2
 1342 0089 488B0CD0 		movq	(%rax,%rdx,8), %rcx
 1343 008d 49894CD4 		movq	%rcx, 8(%r12,%rdx,8)
 1343      08
 1344              	.LVL122:
 1345 0092 4883C201 		addq	$1, %rdx
 1346              	.LVL123:
 1347              		.loc 1 658 0 discriminator 2
 1348 0096 39D6     		cmpl	%edx, %esi
 1349 0098 7FE6     		jg	.L98
 1350              	.L97:
 1351              	.LBE389:
 1352              		.loc 1 663 0 discriminator 1
 1353 009a E8000000 		call	_ZdaPv
 1353      00
 1354              	.LVL124:
 1355              	.L100:
 1356              		.loc 1 664 0
 1357 009f 498B7E58 		movq	88(%r14), %rdi
 1358 00a3 4885FF   		testq	%rdi, %rdi
 1359 00a6 7405     		je	.L111
 1360              		.loc 1 664 0 is_stmt 0 discriminator 1
 1361 00a8 E8000000 		call	_ZdaPv
 1361      00
 1362              	.LVL125:
 1363              	.L111:
 1364 00ad 418B764C 		movl	76(%r14), %esi
 1365              	.L99:
 1366              		.loc 1 668 0 is_stmt 1
 1367 00b1 83C601   		addl	$1, %esi
 1368              		.loc 1 667 0
 1369 00b4 49891C24 		movq	%rbx, (%r12)
 1370              		.loc 1 666 0
 1371 00b8 49896D00 		movq	%rbp, 0(%r13)
 1372              		.loc 1 669 0
 1373 00bc 4D896E50 		movq	%r13, 80(%r14)
 1374              		.loc 1 670 0
 1375 00c0 4D896658 		movq	%r12, 88(%r14)
 1376              		.loc 1 668 0
 1377 00c4 4189764C 		movl	%esi, 76(%r14)
 1378              		.loc 1 671 0
 1379 00c8 4883C408 		addq	$8, %rsp
 1380              		.cfi_remember_state
 1381              		.cfi_def_cfa_offset 56
 1382 00cc 5B       		popq	%rbx
 1383              		.cfi_def_cfa_offset 48
 1384              	.LVL126:
 1385 00cd 5D       		popq	%rbp
 1386              		.cfi_def_cfa_offset 40
 1387              	.LVL127:
 1388 00ce 415C     		popq	%r12
 1389              		.cfi_def_cfa_offset 32
 1390              	.LVL128:
 1391 00d0 415D     		popq	%r13
 1392              		.cfi_def_cfa_offset 24
 1393              	.LVL129:
 1394 00d2 415E     		popq	%r14
 1395              		.cfi_def_cfa_offset 16
 1396              	.LVL130:
 1397 00d4 415F     		popq	%r15
 1398              		.cfi_def_cfa_offset 8
 1399 00d6 C3       		ret
 1400              	.LVL131:
 1401              	.L96:
 1402              		.cfi_restore_state
 1403              		.loc 1 662 0
 1404 00d7 74D8     		je	.L99
 1405 00d9 498B7E50 		movq	80(%r14), %rdi
 1406              		.loc 1 663 0
 1407 00dd 4885FF   		testq	%rdi, %rdi
 1408 00e0 74BD     		je	.L100
 1409 00e2 EBB6     		jmp	.L97
 1410              		.cfi_endproc
 1411              	.LFE223:
 1413              		.section	.text.unlikely._ZN14Fl_Text_Buffer19add_modify_callbackEPFviiiiPKcPvES2_
 1414              	.LCOLDE17:
 1415              		.section	.text._ZN14Fl_Text_Buffer19add_modify_callbackEPFviiiiPKcPvES2_
 1416              	.LHOTE17:
 1417              		.section	.rodata.str1.8,"aMS",@progbits,1
 1418              		.align 8
 1419              	.LC18:
 1420 0000 466C5F54 		.string	"Fl_Text_Buffer::remove_modify_callback(): Can't find modify CB to remove"
 1420      6578745F 
 1420      42756666 
 1420      65723A3A 
 1420      72656D6F 
 1421              		.section	.text.unlikely._ZN14Fl_Text_Buffer22remove_modify_callbackEPFviiiiPKcPvES2_,"ax",@progbit
 1422              		.align 2
 1423              	.LCOLDB19:
 1424              		.section	.text._ZN14Fl_Text_Buffer22remove_modify_callbackEPFviiiiPKcPvES2_,"ax",@progbits
 1425              	.LHOTB19:
 1426              		.align 2
 1427              		.p2align 4,,15
 1428              		.globl	_ZN14Fl_Text_Buffer22remove_modify_callbackEPFviiiiPKcPvES2_
 1430              	_ZN14Fl_Text_Buffer22remove_modify_callbackEPFviiiiPKcPvES2_:
 1431              	.LFB224:
 1432              		.loc 1 679 0
 1433              		.cfi_startproc
 1434              	.LVL132:
 1435 0000 4155     		pushq	%r13
 1436              		.cfi_def_cfa_offset 16
 1437              		.cfi_offset 13, -16
 1438 0002 4154     		pushq	%r12
 1439              		.cfi_def_cfa_offset 24
 1440              		.cfi_offset 12, -24
 1441 0004 55       		pushq	%rbp
 1442              		.cfi_def_cfa_offset 32
 1443              		.cfi_offset 6, -32
 1444 0005 53       		pushq	%rbx
 1445              		.cfi_def_cfa_offset 40
 1446              		.cfi_offset 3, -40
 1447 0006 4883EC08 		subq	$8, %rsp
 1448              		.cfi_def_cfa_offset 48
 1449              		.loc 1 683 0
 1450 000a 8B4F4C   		movl	76(%rdi), %ecx
 1451 000d 85C9     		testl	%ecx, %ecx
 1452 000f 0F8E5B01 		jle	.L113
 1452      0000
 1453 0015 4C8B4750 		movq	80(%rdi), %r8
 1454 0019 31C0     		xorl	%eax, %eax
 1455 001b EB0F     		jmp	.L116
 1456              	.LVL133:
 1457 001d 0F1F00   		.p2align 4,,10
 1458              		.p2align 3
 1459              	.L114:
 1460 0020 4883C001 		addq	$1, %rax
 1461              	.LVL134:
 1462              		.loc 1 683 0 is_stmt 0 discriminator 2
 1463 0024 39C1     		cmpl	%eax, %ecx
 1464 0026 0F8E4401 		jle	.L113
 1464      0000
 1465              	.LVL135:
 1466              	.L116:
 1467              		.loc 1 684 0 is_stmt 1
 1468 002c 493934C0 		cmpq	%rsi, (%r8,%rax,8)
 1469 0030 89C3     		movl	%eax, %ebx
 1470              	.LVL136:
 1471 0032 75EC     		jne	.L114
 1472              		.loc 1 684 0 is_stmt 0 discriminator 1
 1473 0034 4C8B4F58 		movq	88(%rdi), %r9
 1474 0038 493914C1 		cmpq	%rdx, (%r9,%rax,8)
 1475 003c 75E2     		jne	.L114
 1476              		.loc 1 697 0 is_stmt 1
 1477 003e 83E901   		subl	$1, %ecx
 1478 0041 4889FD   		movq	%rdi, %rbp
 1479              	.LVL137:
 1480              		.loc 1 698 0
 1481 0044 85C9     		testl	%ecx, %ecx
 1482              		.loc 1 697 0
 1483 0046 894F4C   		movl	%ecx, 76(%rdi)
 1484              		.loc 1 698 0
 1485 0049 7535     		jne	.L143
 1486              		.loc 1 700 0 discriminator 1
 1487 004b 4C89C7   		movq	%r8, %rdi
 1488              	.LVL138:
 1489 004e E8000000 		call	_ZdaPv
 1489      00
 1490              	.LVL139:
 1491 0053 488B7D58 		movq	88(%rbp), %rdi
 1492              		.loc 1 701 0 discriminator 1
 1493 0057 48C74550 		movq	$0, 80(%rbp)
 1493      00000000 
 1494              		.loc 1 702 0 discriminator 1
 1495 005f 4885FF   		testq	%rdi, %rdi
 1496 0062 7405     		je	.L119
 1497 0064 E8000000 		call	_ZdaPv
 1497      00
 1498              	.LVL140:
 1499              	.L119:
 1500              		.loc 1 703 0
 1501 0069 48C74558 		movq	$0, 88(%rbp)
 1501      00000000 
 1502              		.loc 1 722 0
 1503 0071 4883C408 		addq	$8, %rsp
 1504              		.cfi_remember_state
 1505              		.cfi_def_cfa_offset 40
 1506 0075 5B       		popq	%rbx
 1507              		.cfi_def_cfa_offset 32
 1508              	.LVL141:
 1509 0076 5D       		popq	%rbp
 1510              		.cfi_def_cfa_offset 24
 1511              	.LVL142:
 1512 0077 415C     		popq	%r12
 1513              		.cfi_def_cfa_offset 16
 1514 0079 415D     		popq	%r13
 1515              		.cfi_def_cfa_offset 8
 1516 007b C3       		ret
 1517              	.LVL143:
 1518 007c 0F1F4000 		.p2align 4,,10
 1519              		.p2align 3
 1520              	.L143:
 1521              		.cfi_restore_state
 1522              		.loc 1 706 0
 1523 0080 4863C9   		movslq	%ecx, %rcx
 1524 0083 488D3CCD 		leaq	0(,%rcx,8), %rdi
 1524      00000000 
 1525              	.LVL144:
 1526 008b E8000000 		call	_Znam
 1526      00
 1527              	.LVL145:
 1528              		.loc 1 707 0
 1529 0090 4863554C 		movslq	76(%rbp), %rdx
 1530 0094 48B90000 		movabsq	$1143914305352105984, %rcx
 1530      00000000 
 1530      E00F
 1531              		.loc 1 706 0
 1532 009e 4989C4   		movq	%rax, %r12
 1533              	.LVL146:
 1534              		.loc 1 707 0
 1535 00a1 48C7C7FF 		movq	$-1, %rdi
 1535      FFFFFF
 1536 00a8 488D04D5 		leaq	0(,%rdx,8), %rax
 1536      00000000 
 1537              	.LVL147:
 1538 00b0 4839CA   		cmpq	%rcx, %rdx
 1539 00b3 480F46F8 		cmovbe	%rax, %rdi
 1540 00b7 E8000000 		call	_Znam
 1540      00
 1541              	.LVL148:
 1542              		.loc 1 710 0
 1543 00bc 85DB     		testl	%ebx, %ebx
 1544              		.loc 1 707 0
 1545 00be 4989C5   		movq	%rax, %r13
 1546              	.LVL149:
 1547 00c1 488B7D50 		movq	80(%rbp), %rdi
 1548              		.loc 1 710 0
 1549 00c5 0F84BC00 		je	.L144
 1549      0000
 1550 00cb 488B4D58 		movq	88(%rbp), %rcx
 1551 00cf 31D2     		xorl	%edx, %edx
 1552              	.LVL150:
 1553              		.p2align 4,,10
 1554 00d1 0F1F8000 		.p2align 3
 1554      000000
 1555              	.L127:
 1556              		.loc 1 711 0 discriminator 2
 1557 00d8 488B34D7 		movq	(%rdi,%rdx,8), %rsi
 1558 00dc 498934D4 		movq	%rsi, (%r12,%rdx,8)
 1559              		.loc 1 712 0 discriminator 2
 1560 00e0 488B34D1 		movq	(%rcx,%rdx,8), %rsi
 1561 00e4 498974D5 		movq	%rsi, 0(%r13,%rdx,8)
 1561      00
 1562              	.LVL151:
 1563 00e9 4883C201 		addq	$1, %rdx
 1564              	.LVL152:
 1565              		.loc 1 710 0 discriminator 2
 1566 00ed 39D3     		cmpl	%edx, %ebx
 1567 00ef 7FE7     		jg	.L127
 1568              	.LVL153:
 1569              		.loc 1 714 0
 1570 00f1 8B454C   		movl	76(%rbp), %eax
 1571              	.LVL154:
 1572 00f4 39D8     		cmpl	%ebx, %eax
 1573 00f6 7E48     		jle	.L124
 1574              	.LVL155:
 1575              	.L123:
 1576 00f8 83E801   		subl	$1, %eax
 1577 00fb 4C63C3   		movslq	%ebx, %r8
 1578              		.loc 1 710 0
 1579 00fe 31D2     		xorl	%edx, %edx
 1580 0100 49C1E003 		salq	$3, %r8
 1581 0104 29D8     		subl	%ebx, %eax
 1582 0106 4E8D1407 		leaq	(%rdi,%r8), %r10
 1583 010a 4F8D0C04 		leaq	(%r12,%r8), %r9
 1584 010e 4C01C1   		addq	%r8, %rcx
 1585 0111 4883C001 		addq	$1, %rax
 1586 0115 4D01E8   		addq	%r13, %r8
 1587 0118 0F1F8400 		.p2align 4,,10
 1587      00000000 
 1588              		.p2align 3
 1589              	.L129:
 1590              	.LVL156:
 1591              		.loc 1 715 0 discriminator 1
 1592 0120 498B74D2 		movq	8(%r10,%rdx,8), %rsi
 1592      08
 1593 0125 498934D1 		movq	%rsi, (%r9,%rdx,8)
 1594              		.loc 1 716 0 discriminator 1
 1595 0129 488B74D1 		movq	8(%rcx,%rdx,8), %rsi
 1595      08
 1596 012e 498934D0 		movq	%rsi, (%r8,%rdx,8)
 1597              	.LVL157:
 1598 0132 4883C201 		addq	$1, %rdx
 1599              	.LVL158:
 1600              		.loc 1 714 0 discriminator 1
 1601 0136 4839C2   		cmpq	%rax, %rdx
 1602 0139 75E5     		jne	.L129
 1603              	.L128:
 1604              		.loc 1 718 0
 1605 013b 4885FF   		testq	%rdi, %rdi
 1606 013e 7405     		je	.L125
 1607              	.L124:
 1608              		.loc 1 718 0 is_stmt 0 discriminator 1
 1609 0140 E8000000 		call	_ZdaPv
 1609      00
 1610              	.LVL159:
 1611              	.L125:
 1612              		.loc 1 719 0 is_stmt 1
 1613 0145 488B7D58 		movq	88(%rbp), %rdi
 1614 0149 4885FF   		testq	%rdi, %rdi
 1615 014c 7405     		je	.L130
 1616              		.loc 1 719 0 is_stmt 0 discriminator 1
 1617 014e E8000000 		call	_ZdaPv
 1617      00
 1618              	.LVL160:
 1619              	.L130:
 1620              		.loc 1 720 0 is_stmt 1
 1621 0153 4C896550 		movq	%r12, 80(%rbp)
 1622              		.loc 1 721 0
 1623 0157 4C896D58 		movq	%r13, 88(%rbp)
 1624              		.loc 1 722 0
 1625 015b 4883C408 		addq	$8, %rsp
 1626              		.cfi_remember_state
 1627              		.cfi_def_cfa_offset 40
 1628 015f 5B       		popq	%rbx
 1629              		.cfi_def_cfa_offset 32
 1630              	.LVL161:
 1631 0160 5D       		popq	%rbp
 1632              		.cfi_def_cfa_offset 24
 1633              	.LVL162:
 1634 0161 415C     		popq	%r12
 1635              		.cfi_def_cfa_offset 16
 1636              	.LVL163:
 1637 0163 415D     		popq	%r13
 1638              		.cfi_def_cfa_offset 8
 1639              	.LVL164:
 1640 0165 C3       		ret
 1641              	.LVL165:
 1642 0166 662E0F1F 		.p2align 4,,10
 1642      84000000 
 1642      0000
 1643              		.p2align 3
 1644              	.L113:
 1645              		.cfi_restore_state
 1646 0170 4883C408 		addq	$8, %rsp
 1647              		.cfi_remember_state
 1648              		.cfi_def_cfa_offset 40
 1649              		.loc 1 691 0
 1650 0174 BF000000 		movl	$.LC18, %edi
 1650      00
 1651              	.LVL166:
 1652 0179 31C0     		xorl	%eax, %eax
 1653              		.loc 1 722 0
 1654 017b 5B       		popq	%rbx
 1655              		.cfi_def_cfa_offset 32
 1656 017c 5D       		popq	%rbp
 1657              		.cfi_def_cfa_offset 24
 1658 017d 415C     		popq	%r12
 1659              		.cfi_def_cfa_offset 16
 1660 017f 415D     		popq	%r13
 1661              		.cfi_def_cfa_offset 8
 1662              		.loc 1 691 0
 1663 0181 FF250000 		jmp	*_ZN2Fl5errorE(%rip)
 1663      0000
 1664              	.LVL167:
 1665              	.L144:
 1666              		.cfi_restore_state
 1667              		.loc 1 714 0
 1668 0187 8B454C   		movl	76(%rbp), %eax
 1669              	.LVL168:
 1670 018a 85C0     		testl	%eax, %eax
 1671 018c 7EAD     		jle	.L128
 1672 018e 488B4D58 		movq	88(%rbp), %rcx
 1673 0192 E961FFFF 		jmp	.L123
 1673      FF
 1674              		.cfi_endproc
 1675              	.LFE224:
 1677              		.section	.text.unlikely._ZN14Fl_Text_Buffer22remove_modify_callbackEPFviiiiPKcPvES2_
 1678              	.LCOLDE19:
 1679              		.section	.text._ZN14Fl_Text_Buffer22remove_modify_callbackEPFviiiiPKcPvES2_
 1680              	.LHOTE19:
 1681              		.section	.text.unlikely._ZN14Fl_Text_Buffer22add_predelete_callbackEPFviiPvES0_,"ax",@progbits
 1682              		.align 2
 1683              	.LCOLDB20:
 1684              		.section	.text._ZN14Fl_Text_Buffer22add_predelete_callbackEPFviiPvES0_,"ax",@progbits
 1685              	.LHOTB20:
 1686              		.align 2
 1687              		.p2align 4,,15
 1688              		.globl	_ZN14Fl_Text_Buffer22add_predelete_callbackEPFviiPvES0_
 1690              	_ZN14Fl_Text_Buffer22add_predelete_callbackEPFviiPvES0_:
 1691              	.LFB225:
 1692              		.loc 1 730 0
 1693              		.cfi_startproc
 1694              	.LVL169:
 1695 0000 4157     		pushq	%r15
 1696              		.cfi_def_cfa_offset 16
 1697              		.cfi_offset 15, -16
 1698 0002 4156     		pushq	%r14
 1699              		.cfi_def_cfa_offset 24
 1700              		.cfi_offset 14, -24
 1701              		.loc 1 732 0
 1702 0004 49BF0000 		movabsq	$1143914305352105984, %r15
 1702      00000000 
 1702      E00F
 1703              		.loc 1 730 0
 1704 000e 4155     		pushq	%r13
 1705              		.cfi_def_cfa_offset 32
 1706              		.cfi_offset 13, -32
 1707 0010 4154     		pushq	%r12
 1708              		.cfi_def_cfa_offset 40
 1709              		.cfi_offset 12, -40
 1710 0012 4989FE   		movq	%rdi, %r14
 1711 0015 55       		pushq	%rbp
 1712              		.cfi_def_cfa_offset 48
 1713              		.cfi_offset 6, -48
 1714 0016 53       		pushq	%rbx
 1715              		.cfi_def_cfa_offset 56
 1716              		.cfi_offset 3, -56
 1717              		.loc 1 732 0
 1718 0017 49C7C4FF 		movq	$-1, %r12
 1718      FFFFFF
 1719              		.loc 1 730 0
 1720 001e 4889F5   		movq	%rsi, %rbp
 1721 0021 4889D3   		movq	%rdx, %rbx
 1722 0024 4883EC08 		subq	$8, %rsp
 1723              		.cfi_def_cfa_offset 64
 1724              		.loc 1 732 0
 1725 0028 8B4760   		movl	96(%rdi), %eax
 1726 002b 83C001   		addl	$1, %eax
 1727 002e 4898     		cltq
 1728 0030 488D3CC5 		leaq	0(,%rax,8), %rdi
 1728      00000000 
 1729              	.LVL170:
 1730 0038 4C39F8   		cmpq	%r15, %rax
 1731 003b 490F47FC 		cmova	%r12, %rdi
 1732 003f E8000000 		call	_Znam
 1732      00
 1733              	.LVL171:
 1734 0044 4989C5   		movq	%rax, %r13
 1735              	.LVL172:
 1736              		.loc 1 733 0
 1737 0047 418B4660 		movl	96(%r14), %eax
 1738              	.LVL173:
 1739 004b 83C001   		addl	$1, %eax
 1740 004e 4898     		cltq
 1741 0050 488D3CC5 		leaq	0(,%rax,8), %rdi
 1741      00000000 
 1742 0058 4C39F8   		cmpq	%r15, %rax
 1743 005b 490F47FC 		cmova	%r12, %rdi
 1744 005f E8000000 		call	_Znam
 1744      00
 1745              	.LVL174:
 1746              	.LBB390:
 1747              		.loc 1 734 0
 1748 0064 418B7660 		movl	96(%r14), %esi
 1749              	.LBE390:
 1750              		.loc 1 733 0
 1751 0068 4989C4   		movq	%rax, %r12
 1752              	.LVL175:
 1753              	.LBB391:
 1754              		.loc 1 734 0
 1755 006b 85F6     		testl	%esi, %esi
 1756 006d 7E42     		jle	.L148
 1757 006f 498B7E68 		movq	104(%r14), %rdi
 1758 0073 498B4670 		movq	112(%r14), %rax
 1759              	.LVL176:
 1760 0077 31D2     		xorl	%edx, %edx
 1761              	.LVL177:
 1762 0079 0F1F8000 		.p2align 4,,10
 1762      000000
 1763              		.p2align 3
 1764              	.L149:
 1765              		.loc 1 735 0 discriminator 2
 1766 0080 488B0CD7 		movq	(%rdi,%rdx,8), %rcx
 1767 0084 49894CD5 		movq	%rcx, 8(%r13,%rdx,8)
 1767      08
 1768              		.loc 1 736 0 discriminator 2
 1769 0089 488B0CD0 		movq	(%rax,%rdx,8), %rcx
 1770 008d 49894CD4 		movq	%rcx, 8(%r12,%rdx,8)
 1770      08
 1771              	.LVL178:
 1772 0092 4883C201 		addq	$1, %rdx
 1773              	.LVL179:
 1774              		.loc 1 734 0 discriminator 2
 1775 0096 39D6     		cmpl	%edx, %esi
 1776 0098 7FE6     		jg	.L149
 1777              	.LBE391:
 1778              		.loc 1 739 0 discriminator 1
 1779 009a E8000000 		call	_ZdaPv
 1779      00
 1780              	.LVL180:
 1781 009f 498B7E70 		movq	112(%r14), %rdi
 1782              		.loc 1 740 0 discriminator 1
 1783 00a3 4885FF   		testq	%rdi, %rdi
 1784 00a6 7405     		je	.L155
 1785 00a8 E8000000 		call	_ZdaPv
 1785      00
 1786              	.LVL181:
 1787              	.L155:
 1788 00ad 418B7660 		movl	96(%r14), %esi
 1789              	.L148:
 1790              		.loc 1 744 0
 1791 00b1 83C601   		addl	$1, %esi
 1792              		.loc 1 743 0
 1793 00b4 49891C24 		movq	%rbx, (%r12)
 1794              		.loc 1 742 0
 1795 00b8 49896D00 		movq	%rbp, 0(%r13)
 1796              		.loc 1 745 0
 1797 00bc 4D896E68 		movq	%r13, 104(%r14)
 1798              		.loc 1 746 0
 1799 00c0 4D896670 		movq	%r12, 112(%r14)
 1800              		.loc 1 744 0
 1801 00c4 41897660 		movl	%esi, 96(%r14)
 1802              		.loc 1 747 0
 1803 00c8 4883C408 		addq	$8, %rsp
 1804              		.cfi_def_cfa_offset 56
 1805 00cc 5B       		popq	%rbx
 1806              		.cfi_def_cfa_offset 48
 1807              	.LVL182:
 1808 00cd 5D       		popq	%rbp
 1809              		.cfi_def_cfa_offset 40
 1810              	.LVL183:
 1811 00ce 415C     		popq	%r12
 1812              		.cfi_def_cfa_offset 32
 1813              	.LVL184:
 1814 00d0 415D     		popq	%r13
 1815              		.cfi_def_cfa_offset 24
 1816              	.LVL185:
 1817 00d2 415E     		popq	%r14
 1818              		.cfi_def_cfa_offset 16
 1819              	.LVL186:
 1820 00d4 415F     		popq	%r15
 1821              		.cfi_def_cfa_offset 8
 1822 00d6 C3       		ret
 1823              		.cfi_endproc
 1824              	.LFE225:
 1826              		.section	.text.unlikely._ZN14Fl_Text_Buffer22add_predelete_callbackEPFviiPvES0_
 1827              	.LCOLDE20:
 1828              		.section	.text._ZN14Fl_Text_Buffer22add_predelete_callbackEPFviiPvES0_
 1829              	.LHOTE20:
 1830              		.section	.rodata.str1.8
 1831 0049 00000000 		.align 8
 1831      000000
 1832              	.LC21:
 1833 0050 466C5F54 		.string	"Fl_Text_Buffer::remove_predelete_callback(): Can't find pre-delete CB to remove"
 1833      6578745F 
 1833      42756666 
 1833      65723A3A 
 1833      72656D6F 
 1834              		.section	.text.unlikely._ZN14Fl_Text_Buffer25remove_predelete_callbackEPFviiPvES0_,"ax",@progbits
 1835              		.align 2
 1836              	.LCOLDB22:
 1837              		.section	.text._ZN14Fl_Text_Buffer25remove_predelete_callbackEPFviiPvES0_,"ax",@progbits
 1838              	.LHOTB22:
 1839              		.align 2
 1840              		.p2align 4,,15
 1841              		.globl	_ZN14Fl_Text_Buffer25remove_predelete_callbackEPFviiPvES0_
 1843              	_ZN14Fl_Text_Buffer25remove_predelete_callbackEPFviiPvES0_:
 1844              	.LFB226:
 1845              		.loc 1 754 0
 1846              		.cfi_startproc
 1847              	.LVL187:
 1848 0000 4155     		pushq	%r13
 1849              		.cfi_def_cfa_offset 16
 1850              		.cfi_offset 13, -16
 1851 0002 4154     		pushq	%r12
 1852              		.cfi_def_cfa_offset 24
 1853              		.cfi_offset 12, -24
 1854 0004 55       		pushq	%rbp
 1855              		.cfi_def_cfa_offset 32
 1856              		.cfi_offset 6, -32
 1857 0005 53       		pushq	%rbx
 1858              		.cfi_def_cfa_offset 40
 1859              		.cfi_offset 3, -40
 1860 0006 4883EC08 		subq	$8, %rsp
 1861              		.cfi_def_cfa_offset 48
 1862              		.loc 1 757 0
 1863 000a 8B4F60   		movl	96(%rdi), %ecx
 1864 000d 85C9     		testl	%ecx, %ecx
 1865 000f 0F8E5B01 		jle	.L157
 1865      0000
 1866 0015 4C8B4768 		movq	104(%rdi), %r8
 1867 0019 31C0     		xorl	%eax, %eax
 1868 001b EB0F     		jmp	.L160
 1869              	.LVL188:
 1870 001d 0F1F00   		.p2align 4,,10
 1871              		.p2align 3
 1872              	.L158:
 1873 0020 4883C001 		addq	$1, %rax
 1874              	.LVL189:
 1875              		.loc 1 757 0 is_stmt 0 discriminator 2
 1876 0024 39C1     		cmpl	%eax, %ecx
 1877 0026 0F8E4401 		jle	.L157
 1877      0000
 1878              	.LVL190:
 1879              	.L160:
 1880              		.loc 1 758 0 is_stmt 1
 1881 002c 493934C0 		cmpq	%rsi, (%r8,%rax,8)
 1882 0030 89C3     		movl	%eax, %ebx
 1883              	.LVL191:
 1884 0032 75EC     		jne	.L158
 1885              		.loc 1 759 0 discriminator 1
 1886 0034 4C8B4F70 		movq	112(%rdi), %r9
 1887              		.loc 1 758 0 discriminator 1
 1888 0038 493914C1 		cmpq	%rdx, (%r9,%rax,8)
 1889 003c 75E2     		jne	.L158
 1890              		.loc 1 771 0
 1891 003e 83E901   		subl	$1, %ecx
 1892 0041 4889FD   		movq	%rdi, %rbp
 1893              	.LVL192:
 1894              		.loc 1 772 0
 1895 0044 85C9     		testl	%ecx, %ecx
 1896              		.loc 1 771 0
 1897 0046 894F60   		movl	%ecx, 96(%rdi)
 1898              		.loc 1 772 0
 1899 0049 7535     		jne	.L187
 1900              		.loc 1 773 0 discriminator 1
 1901 004b 4C89C7   		movq	%r8, %rdi
 1902              	.LVL193:
 1903 004e E8000000 		call	_ZdaPv
 1903      00
 1904              	.LVL194:
 1905 0053 488B7D70 		movq	112(%rbp), %rdi
 1906              		.loc 1 774 0 discriminator 1
 1907 0057 48C74568 		movq	$0, 104(%rbp)
 1907      00000000 
 1908              		.loc 1 775 0 discriminator 1
 1909 005f 4885FF   		testq	%rdi, %rdi
 1910 0062 7405     		je	.L163
 1911 0064 E8000000 		call	_ZdaPv
 1911      00
 1912              	.LVL195:
 1913              	.L163:
 1914              		.loc 1 776 0
 1915 0069 48C74570 		movq	$0, 112(%rbp)
 1915      00000000 
 1916              		.loc 1 795 0
 1917 0071 4883C408 		addq	$8, %rsp
 1918              		.cfi_remember_state
 1919              		.cfi_def_cfa_offset 40
 1920 0075 5B       		popq	%rbx
 1921              		.cfi_def_cfa_offset 32
 1922              	.LVL196:
 1923 0076 5D       		popq	%rbp
 1924              		.cfi_def_cfa_offset 24
 1925              	.LVL197:
 1926 0077 415C     		popq	%r12
 1927              		.cfi_def_cfa_offset 16
 1928 0079 415D     		popq	%r13
 1929              		.cfi_def_cfa_offset 8
 1930 007b C3       		ret
 1931              	.LVL198:
 1932 007c 0F1F4000 		.p2align 4,,10
 1933              		.p2align 3
 1934              	.L187:
 1935              		.cfi_restore_state
 1936              		.loc 1 779 0
 1937 0080 4863C9   		movslq	%ecx, %rcx
 1938 0083 488D3CCD 		leaq	0(,%rcx,8), %rdi
 1938      00000000 
 1939              	.LVL199:
 1940 008b E8000000 		call	_Znam
 1940      00
 1941              	.LVL200:
 1942              		.loc 1 780 0
 1943 0090 48635560 		movslq	96(%rbp), %rdx
 1944 0094 48B90000 		movabsq	$1143914305352105984, %rcx
 1944      00000000 
 1944      E00F
 1945              		.loc 1 779 0
 1946 009e 4989C4   		movq	%rax, %r12
 1947              	.LVL201:
 1948              		.loc 1 780 0
 1949 00a1 48C7C7FF 		movq	$-1, %rdi
 1949      FFFFFF
 1950 00a8 488D04D5 		leaq	0(,%rdx,8), %rax
 1950      00000000 
 1951              	.LVL202:
 1952 00b0 4839CA   		cmpq	%rcx, %rdx
 1953 00b3 480F46F8 		cmovbe	%rax, %rdi
 1954 00b7 E8000000 		call	_Znam
 1954      00
 1955              	.LVL203:
 1956              		.loc 1 783 0
 1957 00bc 85DB     		testl	%ebx, %ebx
 1958              		.loc 1 780 0
 1959 00be 4989C5   		movq	%rax, %r13
 1960              	.LVL204:
 1961 00c1 488B7D68 		movq	104(%rbp), %rdi
 1962              		.loc 1 783 0
 1963 00c5 0F84BC00 		je	.L188
 1963      0000
 1964 00cb 488B4D70 		movq	112(%rbp), %rcx
 1965 00cf 31D2     		xorl	%edx, %edx
 1966              	.LVL205:
 1967              		.p2align 4,,10
 1968 00d1 0F1F8000 		.p2align 3
 1968      000000
 1969              	.L171:
 1970              		.loc 1 784 0 discriminator 2
 1971 00d8 488B34D7 		movq	(%rdi,%rdx,8), %rsi
 1972 00dc 498934D4 		movq	%rsi, (%r12,%rdx,8)
 1973              		.loc 1 785 0 discriminator 2
 1974 00e0 488B34D1 		movq	(%rcx,%rdx,8), %rsi
 1975 00e4 498974D5 		movq	%rsi, 0(%r13,%rdx,8)
 1975      00
 1976              	.LVL206:
 1977 00e9 4883C201 		addq	$1, %rdx
 1978              	.LVL207:
 1979              		.loc 1 783 0 discriminator 2
 1980 00ed 39D3     		cmpl	%edx, %ebx
 1981 00ef 7FE7     		jg	.L171
 1982              	.LVL208:
 1983              		.loc 1 787 0
 1984 00f1 8B4560   		movl	96(%rbp), %eax
 1985              	.LVL209:
 1986 00f4 39D8     		cmpl	%ebx, %eax
 1987 00f6 7E48     		jle	.L168
 1988              	.LVL210:
 1989              	.L167:
 1990 00f8 83E801   		subl	$1, %eax
 1991 00fb 4C63C3   		movslq	%ebx, %r8
 1992              		.loc 1 783 0
 1993 00fe 31D2     		xorl	%edx, %edx
 1994 0100 49C1E003 		salq	$3, %r8
 1995 0104 29D8     		subl	%ebx, %eax
 1996 0106 4E8D1407 		leaq	(%rdi,%r8), %r10
 1997 010a 4F8D0C04 		leaq	(%r12,%r8), %r9
 1998 010e 4C01C1   		addq	%r8, %rcx
 1999 0111 4883C001 		addq	$1, %rax
 2000 0115 4D01E8   		addq	%r13, %r8
 2001 0118 0F1F8400 		.p2align 4,,10
 2001      00000000 
 2002              		.p2align 3
 2003              	.L173:
 2004              	.LVL211:
 2005              		.loc 1 788 0 discriminator 1
 2006 0120 498B74D2 		movq	8(%r10,%rdx,8), %rsi
 2006      08
 2007 0125 498934D1 		movq	%rsi, (%r9,%rdx,8)
 2008              		.loc 1 789 0 discriminator 1
 2009 0129 488B74D1 		movq	8(%rcx,%rdx,8), %rsi
 2009      08
 2010 012e 498934D0 		movq	%rsi, (%r8,%rdx,8)
 2011              	.LVL212:
 2012 0132 4883C201 		addq	$1, %rdx
 2013              	.LVL213:
 2014              		.loc 1 787 0 discriminator 1
 2015 0136 4839C2   		cmpq	%rax, %rdx
 2016 0139 75E5     		jne	.L173
 2017              	.L172:
 2018              		.loc 1 791 0
 2019 013b 4885FF   		testq	%rdi, %rdi
 2020 013e 7405     		je	.L169
 2021              	.L168:
 2022              		.loc 1 791 0 is_stmt 0 discriminator 1
 2023 0140 E8000000 		call	_ZdaPv
 2023      00
 2024              	.LVL214:
 2025              	.L169:
 2026              		.loc 1 792 0 is_stmt 1
 2027 0145 488B7D70 		movq	112(%rbp), %rdi
 2028 0149 4885FF   		testq	%rdi, %rdi
 2029 014c 7405     		je	.L174
 2030              		.loc 1 792 0 is_stmt 0 discriminator 1
 2031 014e E8000000 		call	_ZdaPv
 2031      00
 2032              	.LVL215:
 2033              	.L174:
 2034              		.loc 1 793 0 is_stmt 1
 2035 0153 4C896568 		movq	%r12, 104(%rbp)
 2036              		.loc 1 794 0
 2037 0157 4C896D70 		movq	%r13, 112(%rbp)
 2038              		.loc 1 795 0
 2039 015b 4883C408 		addq	$8, %rsp
 2040              		.cfi_remember_state
 2041              		.cfi_def_cfa_offset 40
 2042 015f 5B       		popq	%rbx
 2043              		.cfi_def_cfa_offset 32
 2044              	.LVL216:
 2045 0160 5D       		popq	%rbp
 2046              		.cfi_def_cfa_offset 24
 2047              	.LVL217:
 2048 0161 415C     		popq	%r12
 2049              		.cfi_def_cfa_offset 16
 2050              	.LVL218:
 2051 0163 415D     		popq	%r13
 2052              		.cfi_def_cfa_offset 8
 2053              	.LVL219:
 2054 0165 C3       		ret
 2055              	.LVL220:
 2056 0166 662E0F1F 		.p2align 4,,10
 2056      84000000 
 2056      0000
 2057              		.p2align 3
 2058              	.L157:
 2059              		.cfi_restore_state
 2060 0170 4883C408 		addq	$8, %rsp
 2061              		.cfi_remember_state
 2062              		.cfi_def_cfa_offset 40
 2063              		.loc 1 766 0
 2064 0174 BF000000 		movl	$.LC21, %edi
 2064      00
 2065              	.LVL221:
 2066 0179 31C0     		xorl	%eax, %eax
 2067              		.loc 1 795 0
 2068 017b 5B       		popq	%rbx
 2069              		.cfi_def_cfa_offset 32
 2070 017c 5D       		popq	%rbp
 2071              		.cfi_def_cfa_offset 24
 2072 017d 415C     		popq	%r12
 2073              		.cfi_def_cfa_offset 16
 2074 017f 415D     		popq	%r13
 2075              		.cfi_def_cfa_offset 8
 2076              		.loc 1 766 0
 2077 0181 FF250000 		jmp	*_ZN2Fl5errorE(%rip)
 2077      0000
 2078              	.LVL222:
 2079              	.L188:
 2080              		.cfi_restore_state
 2081              		.loc 1 787 0
 2082 0187 8B4560   		movl	96(%rbp), %eax
 2083              	.LVL223:
 2084 018a 85C0     		testl	%eax, %eax
 2085 018c 7EAD     		jle	.L172
 2086 018e 488B4D70 		movq	112(%rbp), %rcx
 2087 0192 E961FFFF 		jmp	.L167
 2087      FF
 2088              		.cfi_endproc
 2089              	.LFE226:
 2091              		.section	.text.unlikely._ZN14Fl_Text_Buffer25remove_predelete_callbackEPFviiPvES0_
 2092              	.LCOLDE22:
 2093              		.section	.text._ZN14Fl_Text_Buffer25remove_predelete_callbackEPFviiPvES0_
 2094              	.LHOTE22:
 2095              		.section	.text.unlikely._ZNK14Fl_Text_Buffer11count_linesEii,"ax",@progbits
 2096              		.align 2
 2097              	.LCOLDB23:
 2098              		.section	.text._ZNK14Fl_Text_Buffer11count_linesEii,"ax",@progbits
 2099              	.LHOTB23:
 2100              		.align 2
 2101              		.p2align 4,,15
 2102              		.globl	_ZNK14Fl_Text_Buffer11count_linesEii
 2104              	_ZNK14Fl_Text_Buffer11count_linesEii:
 2105              	.LFB234:
 2106              		.loc 1 903 0
 2107              		.cfi_startproc
 2108              	.LVL224:
 2109              		.loc 1 907 0
 2110 0000 448B4F40 		movl	64(%rdi), %r9d
 2111              	.LVL225:
 2112              		.loc 1 911 0
 2113 0004 4139F1   		cmpl	%esi, %r9d
 2114 0007 7E75     		jle	.L197
 2115              		.loc 1 913 0
 2116 0009 39D6     		cmpl	%edx, %esi
 2117 000b 7475     		je	.L198
 2118 000d 4863CE   		movslq	%esi, %rcx
 2119 0010 31C0     		xorl	%eax, %eax
 2120 0012 48034F38 		addq	56(%rdi), %rcx
 2121 0016 EB10     		jmp	.L192
 2122              	.LVL226:
 2123 0018 0F1F8400 		.p2align 4,,10
 2123      00000000 
 2124              		.p2align 3
 2125              	.L193:
 2126 0020 4883C101 		addq	$1, %rcx
 2127 0024 39F2     		cmpl	%esi, %edx
 2128 0026 7454     		je	.L191
 2129              	.LVL227:
 2130              	.L192:
 2131              		.loc 1 915 0
 2132 0028 83C601   		addl	$1, %esi
 2133              	.LVL228:
 2134              		.loc 1 916 0
 2135 002b 4531C0   		xorl	%r8d, %r8d
 2136 002e 80390A   		cmpb	$10, (%rcx)
 2137 0031 410F94C0 		sete	%r8b
 2138 0035 4401C0   		addl	%r8d, %eax
 2139              	.LVL229:
 2140              		.loc 1 911 0
 2141 0038 4139F1   		cmpl	%esi, %r9d
 2142 003b 75E3     		jne	.L193
 2143 003d 4489CE   		movl	%r9d, %esi
 2144              	.LVL230:
 2145              	.L190:
 2146 0040 8B4F44   		movl	68(%rdi), %ecx
 2147 0043 448B5734 		movl	52(%rdi), %r10d
 2148 0047 4429C9   		subl	%r9d, %ecx
 2149 004a 4C63C1   		movslq	%ecx, %r8
 2150 004d 4863CE   		movslq	%esi, %rcx
 2151 0050 4C01C1   		addq	%r8, %rcx
 2152 0053 EB23     		jmp	.L194
 2153              	.LVL231:
 2154              		.p2align 4,,10
 2155 0055 0F1F00   		.p2align 3
 2156              	.L201:
 2157              		.loc 1 919 0
 2158 0058 4439D6   		cmpl	%r10d, %esi
 2159 005b 7D1F     		jge	.L191
 2160              		.loc 1 921 0
 2161 005d 4C8B4738 		movq	56(%rdi), %r8
 2162 0061 83C601   		addl	$1, %esi
 2163              	.LVL232:
 2164              		.loc 1 922 0
 2165 0064 41803C08 		cmpb	$10, (%r8,%rcx)
 2165      0A
 2166 0069 410F94C0 		sete	%r8b
 2167 006d 4883C101 		addq	$1, %rcx
 2168 0071 450FB6C0 		movzbl	%r8b, %r8d
 2169 0075 4401C0   		addl	%r8d, %eax
 2170              	.LVL233:
 2171              	.L194:
 2172              		.loc 1 919 0
 2173 0078 39D6     		cmpl	%edx, %esi
 2174 007a 75DC     		jne	.L201
 2175              	.L191:
 2176              		.loc 1 925 0
 2177 007c F3C3     		rep ret
 2178              	.LVL234:
 2179              	.L197:
 2180              		.loc 1 908 0
 2181 007e 31C0     		xorl	%eax, %eax
 2182 0080 EBBE     		jmp	.L190
 2183              	.L198:
 2184 0082 31C0     		xorl	%eax, %eax
 2185              		.loc 1 925 0
 2186 0084 C3       		ret
 2187              		.cfi_endproc
 2188              	.LFE234:
 2190              		.section	.text.unlikely._ZNK14Fl_Text_Buffer11count_linesEii
 2191              	.LCOLDE23:
 2192              		.section	.text._ZNK14Fl_Text_Buffer11count_linesEii
 2193              	.LHOTE23:
 2194              		.section	.text.unlikely._ZN14Fl_Text_Buffer10skip_linesEii,"ax",@progbits
 2195              		.align 2
 2196              	.LCOLDB24:
 2197              		.section	.text._ZN14Fl_Text_Buffer10skip_linesEii,"ax",@progbits
 2198              	.LHOTB24:
 2199              		.align 2
 2200              		.p2align 4,,15
 2201              		.globl	_ZN14Fl_Text_Buffer10skip_linesEii
 2203              	_ZN14Fl_Text_Buffer10skip_linesEii:
 2204              	.LFB235:
 2205              		.loc 1 934 0
 2206              		.cfi_startproc
 2207              	.LVL235:
 2208              		.loc 1 937 0
 2209 0000 85D2     		testl	%edx, %edx
 2210              		.loc 1 934 0
 2211 0002 89F0     		movl	%esi, %eax
 2212              		.loc 1 937 0
 2213 0004 0F847D00 		je	.L203
 2213      0000
 2214              		.loc 1 940 0
 2215 000a 448B4F40 		movl	64(%rdi), %r9d
 2216 000e 8B7744   		movl	68(%rdi), %esi
 2217              	.LVL236:
 2218 0011 4429CE   		subl	%r9d, %esi
 2219              	.LVL237:
 2220              		.loc 1 943 0
 2221 0014 4439C8   		cmpl	%r9d, %eax
 2222 0017 7D2B     		jge	.L217
 2223 0019 4863C8   		movslq	%eax, %rcx
 2224 001c 4531C0   		xorl	%r8d, %r8d
 2225 001f 48034F38 		addq	56(%rdi), %rcx
 2226 0023 EB0C     		jmp	.L206
 2227              	.LVL238:
 2228              		.p2align 4,,10
 2229 0025 0F1F00   		.p2align 3
 2230              	.L208:
 2231 0028 4883C101 		addq	$1, %rcx
 2232 002c 4139C1   		cmpl	%eax, %r9d
 2233 002f 741F     		je	.L204
 2234              	.LVL239:
 2235              	.L206:
 2236              		.loc 1 944 0
 2237 0031 83C001   		addl	$1, %eax
 2238              	.LVL240:
 2239 0034 80390A   		cmpb	$10, (%rcx)
 2240 0037 75EF     		jne	.L208
 2241              		.loc 1 945 0
 2242 0039 4183C001 		addl	$1, %r8d
 2243              	.LVL241:
 2244              		.loc 1 946 0
 2245 003d 4439C2   		cmpl	%r8d, %edx
 2246 0040 75E6     		jne	.L208
 2247 0042 F3C3     		rep ret
 2248              	.LVL242:
 2249              	.L217:
 2250              		.loc 1 943 0
 2251 0044 4189C1   		movl	%eax, %r9d
 2252              		.loc 1 942 0
 2253 0047 4531C0   		xorl	%r8d, %r8d
 2254              	.LVL243:
 2255 004a 660F1F44 		.p2align 4,,10
 2255      0000
 2256              		.p2align 3
 2257              	.L204:
 2258 0050 4963C9   		movslq	%r9d, %rcx
 2259 0053 4863F6   		movslq	%esi, %rsi
 2260 0056 448B5734 		movl	52(%rdi), %r10d
 2261 005a 4801F1   		addq	%rsi, %rcx
 2262              		.loc 1 943 0
 2263 005d 4489C8   		movl	%r9d, %eax
 2264              	.LVL244:
 2265 0060 EB0A     		jmp	.L207
 2266              	.LVL245:
 2267              		.p2align 4,,10
 2268 0062 660F1F44 		.p2align 3
 2268      0000
 2269              	.L209:
 2270 0068 4883C101 		addq	$1, %rcx
 2271              	.LVL246:
 2272              	.L207:
 2273              		.loc 1 952 0
 2274 006c 4439D0   		cmpl	%r10d, %eax
 2275 006f 7D16     		jge	.L203
 2276              		.loc 1 953 0
 2277 0071 488B7738 		movq	56(%rdi), %rsi
 2278 0075 83C001   		addl	$1, %eax
 2279              	.LVL247:
 2280 0078 803C0E0A 		cmpb	$10, (%rsi,%rcx)
 2281 007c 75EA     		jne	.L209
 2282              		.loc 1 954 0
 2283 007e 4183C001 		addl	$1, %r8d
 2284              	.LVL248:
 2285              		.loc 1 955 0
 2286 0082 4439C2   		cmpl	%r8d, %edx
 2287 0085 7FE1     		jg	.L209
 2288              	.LVL249:
 2289              	.L203:
 2290              		.loc 1 963 0
 2291 0087 F3C3     		rep ret
 2292              		.cfi_endproc
 2293              	.LFE235:
 2295              		.section	.text.unlikely._ZN14Fl_Text_Buffer10skip_linesEii
 2296              	.LCOLDE24:
 2297              		.section	.text._ZN14Fl_Text_Buffer10skip_linesEii
 2298              	.LHOTE24:
 2299              		.section	.text.unlikely._ZN14Fl_Text_Buffer12rewind_linesEii,"ax",@progbits
 2300              		.align 2
 2301              	.LCOLDB25:
 2302              		.section	.text._ZN14Fl_Text_Buffer12rewind_linesEii,"ax",@progbits
 2303              	.LHOTB25:
 2304              		.align 2
 2305              		.p2align 4,,15
 2306              		.globl	_ZN14Fl_Text_Buffer12rewind_linesEii
 2308              	_ZN14Fl_Text_Buffer12rewind_linesEii:
 2309              	.LFB236:
 2310              		.loc 1 972 0
 2311              		.cfi_startproc
 2312              	.LVL250:
 2313              		.loc 1 975 0
 2314 0000 83EE01   		subl	$1, %esi
 2315              	.LVL251:
 2316              		.loc 1 976 0
 2317 0003 85F6     		testl	%esi, %esi
 2318 0005 7E49     		jle	.L229
 2319              		.loc 1 979 0
 2320 0007 448B4740 		movl	64(%rdi), %r8d
 2321 000b 8B4744   		movl	68(%rdi), %eax
 2322 000e 4429C0   		subl	%r8d, %eax
 2323              	.LVL252:
 2324              		.loc 1 981 0
 2325 0011 4439C6   		cmpl	%r8d, %esi
 2326 0014 7C6E     		jl	.L235
 2327 0016 488B7F38 		movq	56(%rdi), %rdi
 2328              	.LVL253:
 2329 001a 4863C8   		movslq	%eax, %rcx
 2330 001d 4863C6   		movslq	%esi, %rax
 2331              	.LVL254:
 2332 0020 4801C8   		addq	%rcx, %rax
 2333 0023 B9FFFFFF 		movl	$-1, %ecx
 2333      FF
 2334              	.LVL255:
 2335 0028 4801F8   		addq	%rdi, %rax
 2336 002b EB0F     		jmp	.L224
 2337              	.LVL256:
 2338 002d 0F1F00   		.p2align 4,,10
 2339              		.p2align 3
 2340              	.L222:
 2341              		.loc 1 988 0
 2342 0030 83EE01   		subl	$1, %esi
 2343              	.LVL257:
 2344 0033 4883E801 		subq	$1, %rax
 2345              		.loc 1 981 0
 2346 0037 4139F0   		cmpl	%esi, %r8d
 2347 003a 7F1C     		jg	.L236
 2348              	.LVL258:
 2349              	.L224:
 2350              		.loc 1 982 0
 2351 003c 80380A   		cmpb	$10, (%rax)
 2352 003f 75EF     		jne	.L222
 2353              		.loc 1 983 0
 2354 0041 83C101   		addl	$1, %ecx
 2355              	.LVL259:
 2356 0044 39D1     		cmpl	%edx, %ecx
 2357 0046 7CE8     		jl	.L222
 2358              		.loc 1 994 0
 2359 0048 8D4601   		leal	1(%rsi), %eax
 2360 004b C3       		ret
 2361              	.LVL260:
 2362 004c 0F1F4000 		.p2align 4,,10
 2363              		.p2align 3
 2364              	.L229:
 2365              		.loc 1 977 0
 2366 0050 31C0     		xorl	%eax, %eax
 2367              		.loc 1 1000 0
 2368 0052 C3       		ret
 2369              	.LVL261:
 2370              		.p2align 4,,10
 2371 0053 0F1F4400 		.p2align 3
 2371      00
 2372              	.L236:
 2373              		.loc 1 990 0
 2374 0058 85F6     		testl	%esi, %esi
 2375 005a 78F4     		js	.L229
 2376              	.LVL262:
 2377              	.L220:
 2378 005c 4863C6   		movslq	%esi, %rax
 2379 005f 4801F8   		addq	%rdi, %rax
 2380 0062 EB10     		jmp	.L226
 2381              		.p2align 4,,10
 2382 0064 0F1F4000 		.p2align 3
 2383              	.L225:
 2384              		.loc 1 997 0
 2385 0068 83EE01   		subl	$1, %esi
 2386              	.LVL263:
 2387 006b 4883E801 		subq	$1, %rax
 2388              		.loc 1 990 0
 2389 006f 83FEFF   		cmpl	$-1, %esi
 2390 0072 74DC     		je	.L229
 2391              	.L226:
 2392              		.loc 1 991 0
 2393 0074 80380A   		cmpb	$10, (%rax)
 2394 0077 75EF     		jne	.L225
 2395              		.loc 1 992 0
 2396 0079 83C101   		addl	$1, %ecx
 2397              	.LVL264:
 2398 007c 39CA     		cmpl	%ecx, %edx
 2399 007e 7FE8     		jg	.L225
 2400              		.loc 1 994 0
 2401 0080 8D4601   		leal	1(%rsi), %eax
 2402 0083 C3       		ret
 2403              	.LVL265:
 2404              	.L235:
 2405              		.loc 1 980 0
 2406 0084 B9FFFFFF 		movl	$-1, %ecx
 2406      FF
 2407 0089 488B7F38 		movq	56(%rdi), %rdi
 2408              	.LVL266:
 2409 008d EBCD     		jmp	.L220
 2410              		.cfi_endproc
 2411              	.LFE236:
 2413              		.section	.text.unlikely._ZN14Fl_Text_Buffer12rewind_linesEii
 2414              	.LCOLDE25:
 2415              		.section	.text._ZN14Fl_Text_Buffer12rewind_linesEii
 2416              	.LHOTE25:
 2417              		.section	.text.unlikely._ZN17Fl_Text_Selection3setEii,"ax",@progbits
 2418              		.align 2
 2419              	.LCOLDB26:
 2420              		.section	.text._ZN17Fl_Text_Selection3setEii,"ax",@progbits
 2421              	.LHOTB26:
 2422              		.align 2
 2423              		.p2align 4,,15
 2424              		.globl	_ZN17Fl_Text_Selection3setEii
 2426              	_ZN17Fl_Text_Selection3setEii:
 2427              	.LFB241:
 2428              		.loc 1 1212 0
 2429              		.cfi_startproc
 2430              	.LVL267:
 2431              		.loc 1 1213 0
 2432 0000 39D6     		cmpl	%edx, %esi
 2433 0002 0F954708 		setne	8(%rdi)
 2434              	.LVL268:
 2435              	.LBB392:
 2436              	.LBB393:
 2437              		.loc 1 65 0
 2438 0006 39D6     		cmpl	%edx, %esi
 2439 0008 7F0E     		jg	.L238
 2440              	.LVL269:
 2441              	.LBE393:
 2442              	.LBE392:
 2443              		.loc 1 1214 0
 2444 000a 8937     		movl	%esi, (%rdi)
 2445              	.LVL270:
 2446              	.LBB394:
 2447              	.LBB395:
 2448              		.loc 1 60 0
 2449 000c 7D0C     		jge	.L240
 2450              	.LVL271:
 2451              	.LBE395:
 2452              	.LBE394:
 2453              		.loc 1 1215 0
 2454 000e 895704   		movl	%edx, 4(%rdi)
 2455              		.loc 1 1216 0
 2456 0011 C3       		ret
 2457              	.LVL272:
 2458              		.p2align 4,,10
 2459 0012 660F1F44 		.p2align 3
 2459      0000
 2460              	.L238:
 2461              		.loc 1 1214 0
 2462 0018 8917     		movl	%edx, (%rdi)
 2463              	.LVL273:
 2464              	.L240:
 2465              		.loc 1 1212 0
 2466 001a 89F2     		movl	%esi, %edx
 2467              	.LVL274:
 2468              		.loc 1 1215 0
 2469 001c 895704   		movl	%edx, 4(%rdi)
 2470              		.loc 1 1216 0
 2471 001f C3       		ret
 2472              		.cfi_endproc
 2473              	.LFE241:
 2475              		.section	.text.unlikely._ZN17Fl_Text_Selection3setEii
 2476              	.LCOLDE26:
 2477              		.section	.text._ZN17Fl_Text_Selection3setEii
 2478              	.LHOTE26:
 2479              		.section	.text.unlikely._ZNK17Fl_Text_Selection8positionEPiS0_,"ax",@progbits
 2480              		.align 2
 2481              	.LCOLDB27:
 2482              		.section	.text._ZNK17Fl_Text_Selection8positionEPiS0_,"ax",@progbits
 2483              	.LHOTB27:
 2484              		.align 2
 2485              		.p2align 4,,15
 2486              		.globl	_ZNK17Fl_Text_Selection8positionEPiS0_
 2488              	_ZNK17Fl_Text_Selection8positionEPiS0_:
 2489              	.LFB242:
 2490              		.loc 1 1223 0
 2491              		.cfi_startproc
 2492              	.LVL275:
 2493              		.loc 1 1225 0
 2494 0000 31C0     		xorl	%eax, %eax
 2495              		.loc 1 1224 0
 2496 0002 807F0800 		cmpb	$0, 8(%rdi)
 2497 0006 740E     		je	.L244
 2498              		.loc 1 1226 0
 2499 0008 8B07     		movl	(%rdi), %eax
 2500 000a 8906     		movl	%eax, (%rsi)
 2501              		.loc 1 1227 0
 2502 000c 8B4704   		movl	4(%rdi), %eax
 2503 000f 8902     		movl	%eax, (%rdx)
 2504              		.loc 1 1229 0
 2505 0011 B8010000 		movl	$1, %eax
 2505      00
 2506              	.L244:
 2507              		.loc 1 1230 0
 2508 0016 F3C3     		rep ret
 2509              		.cfi_endproc
 2510              	.LFE242:
 2512              		.section	.text.unlikely._ZNK17Fl_Text_Selection8positionEPiS0_
 2513              	.LCOLDE27:
 2514              		.section	.text._ZNK17Fl_Text_Selection8positionEPiS0_
 2515              	.LHOTE27:
 2516              		.section	.text.unlikely._ZNK17Fl_Text_Selection8includesEi,"ax",@progbits
 2517              		.align 2
 2518              	.LCOLDB28:
 2519              		.section	.text._ZNK17Fl_Text_Selection8includesEi,"ax",@progbits
 2520              	.LHOTB28:
 2521              		.align 2
 2522              		.p2align 4,,15
 2523              		.globl	_ZNK17Fl_Text_Selection8includesEi
 2525              	_ZNK17Fl_Text_Selection8includesEi:
 2526              	.LFB243:
 2527              		.loc 1 1237 0
 2528              		.cfi_startproc
 2529              	.LVL276:
 2530 0000 31C0     		xorl	%eax, %eax
 2531              		.loc 1 1238 0
 2532 0002 807F0800 		cmpb	$0, 8(%rdi)
 2533 0006 740C     		je	.L247
 2534              	.LVL277:
 2535              		.loc 1 1238 0 is_stmt 0 discriminator 1
 2536 0008 3B37     		cmpl	(%rdi), %esi
 2537 000a 7C08     		jl	.L247
 2538              	.LVL278:
 2539 000c 31C0     		xorl	%eax, %eax
 2540 000e 3B7704   		cmpl	4(%rdi), %esi
 2541 0011 0F9CC0   		setl	%al
 2542              	.LVL279:
 2543              	.L247:
 2544              		.loc 1 1239 0 is_stmt 1 discriminator 8
 2545 0014 F3C3     		rep ret
 2546              		.cfi_endproc
 2547              	.LFE243:
 2549              		.section	.text.unlikely._ZNK17Fl_Text_Selection8includesEi
 2550              	.LCOLDE28:
 2551              		.section	.text._ZNK17Fl_Text_Selection8includesEi
 2552              	.LHOTE28:
 2553              		.section	.text.unlikely._ZNK14Fl_Text_Buffer15selection_text_EP17Fl_Text_Selection,"ax",@progbits
 2554              		.align 2
 2555              	.LCOLDB29:
 2556              		.section	.text._ZNK14Fl_Text_Buffer15selection_text_EP17Fl_Text_Selection,"ax",@progbits
 2557              	.LHOTB29:
 2558              		.align 2
 2559              		.p2align 4,,15
 2560              		.globl	_ZNK14Fl_Text_Buffer15selection_text_EP17Fl_Text_Selection
 2562              	_ZNK14Fl_Text_Buffer15selection_text_EP17Fl_Text_Selection:
 2563              	.LFB244:
 2564              		.loc 1 1246 0
 2565              		.cfi_startproc
 2566              	.LVL280:
 2567              	.LBB405:
 2568              	.LBB406:
 2569              		.loc 1 1224 0
 2570 0000 807E0800 		cmpb	$0, 8(%rsi)
 2571 0004 751A     		jne	.L254
 2572              	.LVL281:
 2573              	.LBE406:
 2574              	.LBE405:
 2575              		.loc 1 1246 0
 2576 0006 4883EC08 		subq	$8, %rsp
 2577              		.cfi_def_cfa_offset 16
 2578              	.LBB407:
 2579              	.LBB408:
 2580              	.LBB409:
 2581              		.loc 1 1252 0
 2582 000a BF010000 		movl	$1, %edi
 2582      00
 2583              	.LVL282:
 2584 000f E8000000 		call	malloc
 2584      00
 2585              	.LVL283:
 2586              		.loc 1 1253 0
 2587 0014 C60000   		movb	$0, (%rax)
 2588              	.LVL284:
 2589              	.LBE409:
 2590              	.LBE408:
 2591              	.LBE407:
 2592              		.loc 1 1259 0
 2593 0017 4883C408 		addq	$8, %rsp
 2594              		.cfi_def_cfa_offset 8
 2595 001b C3       		ret
 2596              	.LVL285:
 2597 001c 0F1F4000 		.p2align 4,,10
 2598              		.p2align 3
 2599              	.L254:
 2600              		.loc 1 1258 0
 2601 0020 8B5604   		movl	4(%rsi), %edx
 2602 0023 8B36     		movl	(%rsi), %esi
 2603              	.LVL286:
 2604 0025 E9000000 		jmp	_ZNK14Fl_Text_Buffer10text_rangeEii
 2604      00
 2605              	.LVL287:
 2606              		.cfi_endproc
 2607              	.LFE244:
 2609              		.section	.text.unlikely._ZNK14Fl_Text_Buffer15selection_text_EP17Fl_Text_Selection
 2610              	.LCOLDE29:
 2611              		.section	.text._ZNK14Fl_Text_Buffer15selection_text_EP17Fl_Text_Selection
 2612              	.LHOTE29:
 2613              		.section	.text.unlikely._ZN14Fl_Text_Buffer14selection_textEv,"ax",@progbits
 2614              		.align 2
 2615              	.LCOLDB30:
 2616              		.section	.text._ZN14Fl_Text_Buffer14selection_textEv,"ax",@progbits
 2617              	.LHOTB30:
 2618              		.align 2
 2619              		.p2align 4,,15
 2620              		.globl	_ZN14Fl_Text_Buffer14selection_textEv
 2622              	_ZN14Fl_Text_Buffer14selection_textEv:
 2623              	.LFB210:
 2624              		.loc 1 522 0
 2625              		.cfi_startproc
 2626              	.LVL288:
 2627              		.loc 1 523 0
 2628 0000 488D7710 		leaq	16(%rdi), %rsi
 2629 0004 E9000000 		jmp	_ZNK14Fl_Text_Buffer15selection_text_EP17Fl_Text_Selection
 2629      00
 2630              	.LVL289:
 2631              		.cfi_endproc
 2632              	.LFE210:
 2634              		.section	.text.unlikely._ZN14Fl_Text_Buffer14selection_textEv
 2635              	.LCOLDE30:
 2636              		.section	.text._ZN14Fl_Text_Buffer14selection_textEv
 2637              	.LHOTE30:
 2638              		.section	.text.unlikely._ZN14Fl_Text_Buffer24secondary_selection_textEv,"ax",@progbits
 2639              		.align 2
 2640              	.LCOLDB31:
 2641              		.section	.text._ZN14Fl_Text_Buffer24secondary_selection_textEv,"ax",@progbits
 2642              	.LHOTB31:
 2643              		.align 2
 2644              		.p2align 4,,15
 2645              		.globl	_ZN14Fl_Text_Buffer24secondary_selection_textEv
 2647              	_ZN14Fl_Text_Buffer24secondary_selection_textEv:
 2648              	.LFB216:
 2649              		.loc 1 583 0
 2650              		.cfi_startproc
 2651              	.LVL290:
 2652              		.loc 1 584 0
 2653 0000 488D771C 		leaq	28(%rdi), %rsi
 2654 0004 E9000000 		jmp	_ZNK14Fl_Text_Buffer15selection_text_EP17Fl_Text_Selection
 2654      00
 2655              	.LVL291:
 2656              		.cfi_endproc
 2657              	.LFE216:
 2659              		.section	.text.unlikely._ZN14Fl_Text_Buffer24secondary_selection_textEv
 2660              	.LCOLDE31:
 2661              		.section	.text._ZN14Fl_Text_Buffer24secondary_selection_textEv
 2662              	.LHOTE31:
 2663              		.section	.text.unlikely._ZN14Fl_Text_Buffer14highlight_textEv,"ax",@progbits
 2664              		.align 2
 2665              	.LCOLDB32:
 2666              		.section	.text._ZN14Fl_Text_Buffer14highlight_textEv,"ax",@progbits
 2667              	.LHOTB32:
 2668              		.align 2
 2669              		.p2align 4,,15
 2670              		.globl	_ZN14Fl_Text_Buffer14highlight_textEv
 2672              	_ZN14Fl_Text_Buffer14highlight_textEv:
 2673              	.LFB222:
 2674              		.loc 1 644 0
 2675              		.cfi_startproc
 2676              	.LVL292:
 2677              		.loc 1 645 0
 2678 0000 488D7728 		leaq	40(%rdi), %rsi
 2679 0004 E9000000 		jmp	_ZNK14Fl_Text_Buffer15selection_text_EP17Fl_Text_Selection
 2679      00
 2680              	.LVL293:
 2681              		.cfi_endproc
 2682              	.LFE222:
 2684              		.section	.text.unlikely._ZN14Fl_Text_Buffer14highlight_textEv
 2685              	.LCOLDE32:
 2686              		.section	.text._ZN14Fl_Text_Buffer14highlight_textEv
 2687              	.LHOTE32:
 2688              		.section	.text.unlikely._ZNK14Fl_Text_Buffer21call_modify_callbacksEiiiiPKc,"ax",@progbits
 2689              		.align 2
 2690              	.LCOLDB33:
 2691              		.section	.text._ZNK14Fl_Text_Buffer21call_modify_callbacksEiiiiPKc,"ax",@progbits
 2692              	.LHOTB33:
 2693              		.align 2
 2694              		.p2align 4,,15
 2695              		.globl	_ZNK14Fl_Text_Buffer21call_modify_callbacksEiiiiPKc
 2697              	_ZNK14Fl_Text_Buffer21call_modify_callbacksEiiiiPKc:
 2698              	.LFB247:
 2699              		.loc 1 1307 0
 2700              		.cfi_startproc
 2701              	.LVL294:
 2702 0000 4157     		pushq	%r15
 2703              		.cfi_def_cfa_offset 16
 2704              		.cfi_offset 15, -16
 2705 0002 4156     		pushq	%r14
 2706              		.cfi_def_cfa_offset 24
 2707              		.cfi_offset 14, -24
 2708 0004 4155     		pushq	%r13
 2709              		.cfi_def_cfa_offset 32
 2710              		.cfi_offset 13, -32
 2711 0006 4154     		pushq	%r12
 2712              		.cfi_def_cfa_offset 40
 2713              		.cfi_offset 12, -40
 2714 0008 55       		pushq	%rbp
 2715              		.cfi_def_cfa_offset 48
 2716              		.cfi_offset 6, -48
 2717 0009 53       		pushq	%rbx
 2718              		.cfi_def_cfa_offset 56
 2719              		.cfi_offset 3, -56
 2720 000a 4883EC18 		subq	$24, %rsp
 2721              		.cfi_def_cfa_offset 80
 2722              	.LBB410:
 2723              		.loc 1 1309 0
 2724 000e 8B474C   		movl	76(%rdi), %eax
 2725              	.LBE410:
 2726              		.loc 1 1307 0
 2727 0011 4C894C24 		movq	%r9, 8(%rsp)
 2727      08
 2728              	.LBB411:
 2729              		.loc 1 1309 0
 2730 0016 85C0     		testl	%eax, %eax
 2731 0018 7E43     		jle	.L258
 2732 001a 4889FD   		movq	%rdi, %rbp
 2733 001d 4189F7   		movl	%esi, %r15d
 2734 0020 4189D6   		movl	%edx, %r14d
 2735 0023 4189CD   		movl	%ecx, %r13d
 2736 0026 4589C4   		movl	%r8d, %r12d
 2737 0029 31DB     		xorl	%ebx, %ebx
 2738              	.LVL295:
 2739 002b 0F1F4400 		.p2align 4,,10
 2739      00
 2740              		.p2align 3
 2741              	.L262:
 2742              		.loc 1 1310 0 discriminator 2
 2743 0030 488B5558 		movq	88(%rbp), %rdx
 2744              		.loc 1 1311 0 discriminator 2
 2745 0034 4C8B5550 		movq	80(%rbp), %r10
 2746 0038 4489E1   		movl	%r12d, %ecx
 2747 003b 4C8B4424 		movq	8(%rsp), %r8
 2747      08
 2748 0040 4489EE   		movl	%r13d, %esi
 2749 0043 4489FF   		movl	%r15d, %edi
 2750 0046 4C8B0CDA 		movq	(%rdx,%rbx,8), %r9
 2751 004a 4489F2   		movl	%r14d, %edx
 2752 004d 41FF14DA 		call	*(%r10,%rbx,8)
 2753              	.LVL296:
 2754 0051 8D5301   		leal	1(%rbx), %edx
 2755              	.LVL297:
 2756 0054 4883C301 		addq	$1, %rbx
 2757              		.loc 1 1309 0 discriminator 2
 2758 0058 39554C   		cmpl	%edx, 76(%rbp)
 2759 005b 7FD3     		jg	.L262
 2760              	.LVL298:
 2761              	.L258:
 2762              	.LBE411:
 2763              		.loc 1 1312 0
 2764 005d 4883C418 		addq	$24, %rsp
 2765              		.cfi_def_cfa_offset 56
 2766 0061 5B       		popq	%rbx
 2767              		.cfi_def_cfa_offset 48
 2768 0062 5D       		popq	%rbp
 2769              		.cfi_def_cfa_offset 40
 2770 0063 415C     		popq	%r12
 2771              		.cfi_def_cfa_offset 32
 2772 0065 415D     		popq	%r13
 2773              		.cfi_def_cfa_offset 24
 2774 0067 415E     		popq	%r14
 2775              		.cfi_def_cfa_offset 16
 2776 0069 415F     		popq	%r15
 2777              		.cfi_def_cfa_offset 8
 2778 006b C3       		ret
 2779              		.cfi_endproc
 2780              	.LFE247:
 2782              		.section	.text.unlikely._ZNK14Fl_Text_Buffer21call_modify_callbacksEiiiiPKc
 2783              	.LCOLDE33:
 2784              		.section	.text._ZNK14Fl_Text_Buffer21call_modify_callbacksEiiiiPKc
 2785              	.LHOTE33:
 2786              		.section	.text.unlikely._ZNK14Fl_Text_Buffer24call_predelete_callbacksEii,"ax",@progbits
 2787              		.align 2
 2788              	.LCOLDB34:
 2789              		.section	.text._ZNK14Fl_Text_Buffer24call_predelete_callbacksEii,"ax",@progbits
 2790              	.LHOTB34:
 2791              		.align 2
 2792              		.p2align 4,,15
 2793              		.globl	_ZNK14Fl_Text_Buffer24call_predelete_callbacksEii
 2795              	_ZNK14Fl_Text_Buffer24call_predelete_callbacksEii:
 2796              	.LFB248:
 2797              		.loc 1 1319 0
 2798              		.cfi_startproc
 2799              	.LVL299:
 2800              	.LBB412:
 2801              		.loc 1 1320 0
 2802 0000 8B4760   		movl	96(%rdi), %eax
 2803 0003 85C0     		testl	%eax, %eax
 2804 0005 7E44     		jle	.L271
 2805              	.LBE412:
 2806              		.loc 1 1319 0
 2807 0007 4156     		pushq	%r14
 2808              		.cfi_def_cfa_offset 16
 2809              		.cfi_offset 14, -16
 2810 0009 4189F6   		movl	%esi, %r14d
 2811 000c 4155     		pushq	%r13
 2812              		.cfi_def_cfa_offset 24
 2813              		.cfi_offset 13, -24
 2814 000e 4189D5   		movl	%edx, %r13d
 2815 0011 4154     		pushq	%r12
 2816              		.cfi_def_cfa_offset 32
 2817              		.cfi_offset 12, -32
 2818 0013 4531E4   		xorl	%r12d, %r12d
 2819 0016 55       		pushq	%rbp
 2820              		.cfi_def_cfa_offset 40
 2821              		.cfi_offset 6, -40
 2822 0017 4889FD   		movq	%rdi, %rbp
 2823 001a 53       		pushq	%rbx
 2824              		.cfi_def_cfa_offset 48
 2825              		.cfi_offset 3, -48
 2826 001b 31DB     		xorl	%ebx, %ebx
 2827              	.LVL300:
 2828 001d 0F1F00   		.p2align 4,,10
 2829              		.p2align 3
 2830              	.L268:
 2831              	.LBB413:
 2832              		.loc 1 1321 0 discriminator 2
 2833 0020 488B4570 		movq	112(%rbp), %rax
 2834 0024 4489EE   		movl	%r13d, %esi
 2835 0027 4489F7   		movl	%r14d, %edi
 2836              		.loc 1 1320 0 discriminator 2
 2837 002a 4183C401 		addl	$1, %r12d
 2838              	.LVL301:
 2839              		.loc 1 1321 0 discriminator 2
 2840 002e 488B1418 		movq	(%rax,%rbx), %rdx
 2841 0032 488B4568 		movq	104(%rbp), %rax
 2842 0036 FF1418   		call	*(%rax,%rbx)
 2843              	.LVL302:
 2844 0039 4883C308 		addq	$8, %rbx
 2845              		.loc 1 1320 0 discriminator 2
 2846 003d 44396560 		cmpl	%r12d, 96(%rbp)
 2847 0041 7FDD     		jg	.L268
 2848              	.LBE413:
 2849              		.loc 1 1322 0
 2850 0043 5B       		popq	%rbx
 2851              		.cfi_restore 3
 2852              		.cfi_def_cfa_offset 40
 2853 0044 5D       		popq	%rbp
 2854              		.cfi_restore 6
 2855              		.cfi_def_cfa_offset 32
 2856              	.LVL303:
 2857 0045 415C     		popq	%r12
 2858              		.cfi_restore 12
 2859              		.cfi_def_cfa_offset 24
 2860              	.LVL304:
 2861 0047 415D     		popq	%r13
 2862              		.cfi_restore 13
 2863              		.cfi_def_cfa_offset 16
 2864              	.LVL305:
 2865 0049 415E     		popq	%r14
 2866              		.cfi_restore 14
 2867              		.cfi_def_cfa_offset 8
 2868              	.LVL306:
 2869              	.L271:
 2870 004b F3C3     		rep ret
 2871              		.cfi_endproc
 2872              	.LFE248:
 2874              		.section	.text.unlikely._ZNK14Fl_Text_Buffer24call_predelete_callbacksEii
 2875              	.LCOLDE34:
 2876              		.section	.text._ZNK14Fl_Text_Buffer24call_predelete_callbacksEii
 2877              	.LHOTE34:
 2878              		.section	.text.unlikely._ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_,"ax",@pr
 2879              		.align 2
 2880              	.LCOLDB35:
 2881              		.section	.text._ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_,"ax",@progbits
 2882              	.LHOTB35:
 2883              		.align 2
 2884              		.p2align 4,,15
 2885              		.globl	_ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_
 2887              	_ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_:
 2888              	.LFB249:
 2889              		.loc 1 1333 0
 2890              		.cfi_startproc
 2891              	.LVL307:
 2892 0000 4157     		pushq	%r15
 2893              		.cfi_def_cfa_offset 16
 2894              		.cfi_offset 15, -16
 2895              	.LVL308:
 2896 0002 4156     		pushq	%r14
 2897              		.cfi_def_cfa_offset 24
 2898              		.cfi_offset 14, -24
 2899 0004 4155     		pushq	%r13
 2900              		.cfi_def_cfa_offset 32
 2901              		.cfi_offset 13, -32
 2902 0006 4154     		pushq	%r12
 2903              		.cfi_def_cfa_offset 40
 2904              		.cfi_offset 12, -40
 2905 0008 55       		pushq	%rbp
 2906              		.cfi_def_cfa_offset 48
 2907              		.cfi_offset 6, -48
 2908 0009 53       		pushq	%rbx
 2909              		.cfi_def_cfa_offset 56
 2910              		.cfi_offset 3, -56
 2911 000a 4889FB   		movq	%rdi, %rbx
 2912 000d 4883EC18 		subq	$24, %rsp
 2913              		.cfi_def_cfa_offset 80
 2914              		.loc 1 1347 0
 2915 0011 807E0800 		cmpb	$0, 8(%rsi)
 2916              		.loc 1 1341 0
 2917 0015 448B32   		movl	(%rdx), %r14d
 2918              	.LVL309:
 2919              		.loc 1 1343 0
 2920 0018 448B6A04 		movl	4(%rdx), %r13d
 2921              	.LVL310:
 2922              		.loc 1 1347 0
 2923 001c 7462     		je	.L291
 2924              		.loc 1 1354 0
 2925 001e 807A0800 		cmpb	$0, 8(%rdx)
 2926              		.loc 1 1340 0
 2927 0022 448B3E   		movl	(%rsi), %r15d
 2928              		.loc 1 1342 0
 2929 0025 8B4E04   		movl	4(%rsi), %ecx
 2930              		.loc 1 1354 0
 2931 0028 0F85AA00 		jne	.L277
 2931      0000
 2932              	.LBB414:
 2933              	.LBB415:
 2934              		.loc 1 1309 0
 2935 002e 8B774C   		movl	76(%rdi), %esi
 2936              	.LVL311:
 2937              	.LBE415:
 2938              	.LBE414:
 2939              		.loc 1 1355 0
 2940 0031 4429F9   		subl	%r15d, %ecx
 2941              	.LVL312:
 2942 0034 4189CD   		movl	%ecx, %r13d
 2943              	.LVL313:
 2944              	.LBB417:
 2945              	.LBB416:
 2946              		.loc 1 1309 0
 2947 0037 85F6     		testl	%esi, %esi
 2948 0039 7E2F     		jle	.L272
 2949 003b 31ED     		xorl	%ebp, %ebp
 2950 003d 4531E4   		xorl	%r12d, %r12d
 2951              	.LVL314:
 2952              		.p2align 4,,10
 2953              		.p2align 3
 2954              	.L278:
 2955              		.loc 1 1310 0
 2956 0040 488B5358 		movq	88(%rbx), %rdx
 2957              		.loc 1 1311 0
 2958 0044 488B4350 		movq	80(%rbx), %rax
 2959 0048 4531C0   		xorl	%r8d, %r8d
 2960 004b 31F6     		xorl	%esi, %esi
 2961 004d 4489E9   		movl	%r13d, %ecx
 2962 0050 4489FF   		movl	%r15d, %edi
 2963              		.loc 1 1309 0
 2964 0053 4183C401 		addl	$1, %r12d
 2965              	.LVL315:
 2966              		.loc 1 1311 0
 2967 0057 4C8B0C2A 		movq	(%rdx,%rbp), %r9
 2968 005b 31D2     		xorl	%edx, %edx
 2969 005d FF1428   		call	*(%rax,%rbp)
 2970              	.LVL316:
 2971 0060 4883C508 		addq	$8, %rbp
 2972              		.loc 1 1309 0
 2973 0064 4439634C 		cmpl	%r12d, 76(%rbx)
 2974 0068 7FD6     		jg	.L278
 2975              	.LVL317:
 2976              	.L272:
 2977              	.LBE416:
 2978              	.LBE417:
 2979              		.loc 1 1378 0
 2980 006a 4883C418 		addq	$24, %rsp
 2981              		.cfi_remember_state
 2982              		.cfi_def_cfa_offset 56
 2983 006e 5B       		popq	%rbx
 2984              		.cfi_def_cfa_offset 48
 2985              	.LVL318:
 2986 006f 5D       		popq	%rbp
 2987              		.cfi_def_cfa_offset 40
 2988 0070 415C     		popq	%r12
 2989              		.cfi_def_cfa_offset 32
 2990 0072 415D     		popq	%r13
 2991              		.cfi_def_cfa_offset 24
 2992 0074 415E     		popq	%r14
 2993              		.cfi_def_cfa_offset 16
 2994 0076 415F     		popq	%r15
 2995              		.cfi_def_cfa_offset 8
 2996 0078 C3       		ret
 2997              	.LVL319:
 2998 0079 0F1F8000 		.p2align 4,,10
 2998      000000
 2999              		.p2align 3
 3000              	.L291:
 3001              		.cfi_restore_state
 3002              		.loc 1 1347 0 discriminator 1
 3003 0080 807A0800 		cmpb	$0, 8(%rdx)
 3004 0084 74E4     		je	.L272
 3005              	.LBB418:
 3006              	.LBB419:
 3007              		.loc 1 1309 0
 3008 0086 8B7F4C   		movl	76(%rdi), %edi
 3009              	.LBE419:
 3010              	.LBE418:
 3011              		.loc 1 1351 0
 3012 0089 4529F5   		subl	%r14d, %r13d
 3013              	.LVL320:
 3014              	.LBB421:
 3015              	.LBB420:
 3016              		.loc 1 1309 0
 3017 008c 85FF     		testl	%edi, %edi
 3018 008e 7EDA     		jle	.L272
 3019 0090 31ED     		xorl	%ebp, %ebp
 3020 0092 4531E4   		xorl	%r12d, %r12d
 3021              	.LVL321:
 3022              		.p2align 4,,10
 3023 0095 0F1F00   		.p2align 3
 3024              	.L276:
 3025              		.loc 1 1310 0
 3026 0098 488B5358 		movq	88(%rbx), %rdx
 3027              		.loc 1 1311 0
 3028 009c 488B4350 		movq	80(%rbx), %rax
 3029 00a0 4531C0   		xorl	%r8d, %r8d
 3030 00a3 31F6     		xorl	%esi, %esi
 3031 00a5 4489E9   		movl	%r13d, %ecx
 3032 00a8 4489F7   		movl	%r14d, %edi
 3033              		.loc 1 1309 0
 3034 00ab 4183C401 		addl	$1, %r12d
 3035              	.LVL322:
 3036              		.loc 1 1311 0
 3037 00af 4C8B0C2A 		movq	(%rdx,%rbp), %r9
 3038 00b3 31D2     		xorl	%edx, %edx
 3039 00b5 FF1428   		call	*(%rax,%rbp)
 3040              	.LVL323:
 3041 00b8 4883C508 		addq	$8, %rbp
 3042              		.loc 1 1309 0
 3043 00bc 4439634C 		cmpl	%r12d, 76(%rbx)
 3044 00c0 7FD6     		jg	.L276
 3045              	.LBE420:
 3046              	.LBE421:
 3047              		.loc 1 1378 0
 3048 00c2 4883C418 		addq	$24, %rsp
 3049              		.cfi_remember_state
 3050              		.cfi_def_cfa_offset 56
 3051 00c6 5B       		popq	%rbx
 3052              		.cfi_def_cfa_offset 48
 3053              	.LVL324:
 3054 00c7 5D       		popq	%rbp
 3055              		.cfi_def_cfa_offset 40
 3056 00c8 415C     		popq	%r12
 3057              		.cfi_def_cfa_offset 32
 3058              	.LVL325:
 3059 00ca 415D     		popq	%r13
 3060              		.cfi_def_cfa_offset 24
 3061              	.LVL326:
 3062 00cc 415E     		popq	%r14
 3063              		.cfi_def_cfa_offset 16
 3064              	.LVL327:
 3065 00ce 415F     		popq	%r15
 3066              		.cfi_def_cfa_offset 8
 3067 00d0 C3       		ret
 3068              	.LVL328:
 3069              		.p2align 4,,10
 3070 00d1 0F1F8000 		.p2align 3
 3070      000000
 3071              	.L277:
 3072              		.cfi_restore_state
 3073              		.loc 1 1361 0
 3074 00d8 4139CE   		cmpl	%ecx, %r14d
 3075 00db 0F8FCF00 		jg	.L288
 3075      0000
 3076 00e1 4539EF   		cmpl	%r13d, %r15d
 3077 00e4 0F8FC600 		jg	.L288
 3077      0000
 3078              	.LVL329:
 3079 00ea 4539F7   		cmpl	%r14d, %r15d
 3080 00ed 4589F4   		movl	%r14d, %r12d
 3081 00f0 4489E8   		movl	%r13d, %eax
 3082 00f3 450F4EE7 		cmovle	%r15d, %r12d
 3083              	.LVL330:
 3084 00f7 4439E9   		cmpl	%r13d, %ecx
 3085 00fa 0F4DC1   		cmovge	%ecx, %eax
 3086              	.LVL331:
 3087 00fd 4539F7   		cmpl	%r14d, %r15d
 3088 0100 450F4DF7 		cmovge	%r15d, %r14d
 3089              	.LVL332:
 3090 0104 4439E9   		cmpl	%r13d, %ecx
 3091 0107 8944240C 		movl	%eax, 12(%rsp)
 3092              	.LVL333:
 3093 010b 440F4EE9 		cmovle	%ecx, %r13d
 3094              	.LVL334:
 3095              		.loc 1 1374 0
 3096 010f 4539E6   		cmpl	%r12d, %r14d
 3097 0112 7445     		je	.L285
 3098              	.LBB422:
 3099              	.LBB423:
 3100              		.loc 1 1309 0
 3101 0114 8B574C   		movl	76(%rdi), %edx
 3102              	.LVL335:
 3103              	.LBE423:
 3104              	.LBE422:
 3105              		.loc 1 1375 0
 3106 0117 4529E6   		subl	%r12d, %r14d
 3107              	.LVL336:
 3108              	.LBB425:
 3109              	.LBB424:
 3110              		.loc 1 1309 0
 3111 011a 85D2     		testl	%edx, %edx
 3112 011c 0F8E48FF 		jle	.L272
 3112      FFFF
 3113 0122 4531FF   		xorl	%r15d, %r15d
 3114 0125 31ED     		xorl	%ebp, %ebp
 3115              	.LVL337:
 3116 0127 660F1F84 		.p2align 4,,10
 3116      00000000 
 3116      00
 3117              		.p2align 3
 3118              	.L286:
 3119              		.loc 1 1310 0
 3120 0130 488B5358 		movq	88(%rbx), %rdx
 3121              		.loc 1 1311 0
 3122 0134 4C8B5350 		movq	80(%rbx), %r10
 3123 0138 4531C0   		xorl	%r8d, %r8d
 3124 013b 31F6     		xorl	%esi, %esi
 3125 013d 4489F1   		movl	%r14d, %ecx
 3126 0140 4489E7   		movl	%r12d, %edi
 3127              		.loc 1 1309 0
 3128 0143 83C501   		addl	$1, %ebp
 3129              	.LVL338:
 3130              		.loc 1 1311 0
 3131 0146 4E8B0C3A 		movq	(%rdx,%r15), %r9
 3132 014a 31D2     		xorl	%edx, %edx
 3133 014c 43FF143A 		call	*(%r10,%r15)
 3134              	.LVL339:
 3135 0150 4983C708 		addq	$8, %r15
 3136              		.loc 1 1309 0
 3137 0154 396B4C   		cmpl	%ebp, 76(%rbx)
 3138 0157 7FD7     		jg	.L286
 3139              	.LVL340:
 3140              	.L285:
 3141              	.LBE424:
 3142              	.LBE425:
 3143              		.loc 1 1376 0
 3144 0159 44396C24 		cmpl	%r13d, 12(%rsp)
 3144      0C
 3145 015e 0F8406FF 		je	.L272
 3145      FFFF
 3146              		.loc 1 1377 0
 3147 0164 8B6C240C 		movl	12(%rsp), %ebp
 3148              	.LBB426:
 3149              	.LBB427:
 3150              		.loc 1 1309 0
 3151 0168 8B434C   		movl	76(%rbx), %eax
 3152              	.LBE427:
 3153              	.LBE426:
 3154              		.loc 1 1377 0
 3155 016b 4429ED   		subl	%r13d, %ebp
 3156              	.LVL341:
 3157              	.LBB429:
 3158              	.LBB428:
 3159              		.loc 1 1309 0
 3160 016e 85C0     		testl	%eax, %eax
 3161 0170 0F8EF4FE 		jle	.L272
 3161      FFFF
 3162 0176 4531E4   		xorl	%r12d, %r12d
 3163 0179 4531F6   		xorl	%r14d, %r14d
 3164              	.LVL342:
 3165 017c 0F1F4000 		.p2align 4,,10
 3166              		.p2align 3
 3167              	.L287:
 3168              		.loc 1 1310 0
 3169 0180 488B5358 		movq	88(%rbx), %rdx
 3170              		.loc 1 1311 0
 3171 0184 488B4350 		movq	80(%rbx), %rax
 3172 0188 4531C0   		xorl	%r8d, %r8d
 3173 018b 31F6     		xorl	%esi, %esi
 3174 018d 89E9     		movl	%ebp, %ecx
 3175 018f 4489EF   		movl	%r13d, %edi
 3176              		.loc 1 1309 0
 3177 0192 4183C601 		addl	$1, %r14d
 3178              	.LVL343:
 3179              		.loc 1 1311 0
 3180 0196 4E8B0C22 		movq	(%rdx,%r12), %r9
 3181 019a 31D2     		xorl	%edx, %edx
 3182 019c 42FF1420 		call	*(%rax,%r12)
 3183              	.LVL344:
 3184 01a0 4983C408 		addq	$8, %r12
 3185              		.loc 1 1309 0
 3186 01a4 4439734C 		cmpl	%r14d, 76(%rbx)
 3187 01a8 7FD6     		jg	.L287
 3188 01aa E9BBFEFF 		jmp	.L272
 3188      FF
 3189              	.LVL345:
 3190 01af 90       		.p2align 4,,10
 3191              		.p2align 3
 3192              	.L288:
 3193              	.LBE428:
 3194              	.LBE429:
 3195              		.loc 1 1362 0
 3196 01b0 4429F9   		subl	%r15d, %ecx
 3197              	.LVL346:
 3198 01b3 894C240C 		movl	%ecx, 12(%rsp)
 3199              	.LVL347:
 3200              	.LBB430:
 3201              	.LBB431:
 3202              		.loc 1 1309 0
 3203 01b7 8B4B4C   		movl	76(%rbx), %ecx
 3204              	.LVL348:
 3205 01ba 85C9     		testl	%ecx, %ecx
 3206 01bc 0F8EA8FE 		jle	.L272
 3206      FFFF
 3207 01c2 4531E4   		xorl	%r12d, %r12d
 3208 01c5 31ED     		xorl	%ebp, %ebp
 3209              	.LVL349:
 3210 01c7 660F1F84 		.p2align 4,,10
 3210      00000000 
 3210      00
 3211              		.p2align 3
 3212              	.L281:
 3213              		.loc 1 1310 0
 3214 01d0 488B5358 		movq	88(%rbx), %rdx
 3215              		.loc 1 1311 0
 3216 01d4 4C8B5350 		movq	80(%rbx), %r10
 3217 01d8 4531C0   		xorl	%r8d, %r8d
 3218 01db 31F6     		xorl	%esi, %esi
 3219 01dd 8B4C240C 		movl	12(%rsp), %ecx
 3220 01e1 4489FF   		movl	%r15d, %edi
 3221              		.loc 1 1309 0
 3222 01e4 83C501   		addl	$1, %ebp
 3223              	.LVL350:
 3224              		.loc 1 1311 0
 3225 01e7 4E8B0C22 		movq	(%rdx,%r12), %r9
 3226 01eb 31D2     		xorl	%edx, %edx
 3227 01ed 43FF1422 		call	*(%r10,%r12)
 3228              	.LVL351:
 3229              		.loc 1 1309 0
 3230 01f1 8B534C   		movl	76(%rbx), %edx
 3231 01f4 4983C408 		addq	$8, %r12
 3232 01f8 39EA     		cmpl	%ebp, %edx
 3233 01fa 7FD4     		jg	.L281
 3234              	.LVL352:
 3235              	.LBE431:
 3236              	.LBE430:
 3237              		.loc 1 1363 0
 3238 01fc 4529F5   		subl	%r14d, %r13d
 3239              	.LVL353:
 3240              	.LBB432:
 3241              	.LBB433:
 3242              		.loc 1 1309 0
 3243 01ff 85D2     		testl	%edx, %edx
 3244 0201 0F8E63FE 		jle	.L272
 3244      FFFF
 3245 0207 31ED     		xorl	%ebp, %ebp
 3246 0209 4531E4   		xorl	%r12d, %r12d
 3247              	.LVL354:
 3248 020c 0F1F4000 		.p2align 4,,10
 3249              		.p2align 3
 3250              	.L282:
 3251              		.loc 1 1310 0
 3252 0210 488B5358 		movq	88(%rbx), %rdx
 3253              		.loc 1 1311 0
 3254 0214 488B4350 		movq	80(%rbx), %rax
 3255 0218 4531C0   		xorl	%r8d, %r8d
 3256 021b 31F6     		xorl	%esi, %esi
 3257 021d 4489E9   		movl	%r13d, %ecx
 3258 0220 4489F7   		movl	%r14d, %edi
 3259              		.loc 1 1309 0
 3260 0223 4183C401 		addl	$1, %r12d
 3261              	.LVL355:
 3262              		.loc 1 1311 0
 3263 0227 4C8B0C2A 		movq	(%rdx,%rbp), %r9
 3264 022b 31D2     		xorl	%edx, %edx
 3265 022d FF1428   		call	*(%rax,%rbp)
 3266              	.LVL356:
 3267 0230 4883C508 		addq	$8, %rbp
 3268              		.loc 1 1309 0
 3269 0234 4439634C 		cmpl	%r12d, 76(%rbx)
 3270 0238 7FD6     		jg	.L282
 3271 023a E92BFEFF 		jmp	.L272
 3271      FF
 3272              	.LBE433:
 3273              	.LBE432:
 3274              		.cfi_endproc
 3275              	.LFE249:
 3277              		.section	.text.unlikely._ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_
 3278              	.LCOLDE35:
 3279              		.section	.text._ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_
 3280              	.LHOTE35:
 3281              		.section	.text.unlikely._ZN14Fl_Text_Buffer6selectEii,"ax",@progbits
 3282              		.align 2
 3283              	.LCOLDB36:
 3284              		.section	.text._ZN14Fl_Text_Buffer6selectEii,"ax",@progbits
 3285              	.LHOTB36:
 3286              		.align 2
 3287              		.p2align 4,,15
 3288              		.globl	_ZN14Fl_Text_Buffer6selectEii
 3290              	_ZN14Fl_Text_Buffer6selectEii:
 3291              	.LFB207:
 3292              		.loc 1 486 0
 3293              		.cfi_startproc
 3294              	.LVL357:
 3295 0000 4883EC28 		subq	$40, %rsp
 3296              		.cfi_def_cfa_offset 48
 3297              		.loc 1 486 0
 3298 0004 64488B04 		movq	%fs:40, %rax
 3298      25280000 
 3298      00
 3299 000d 48894424 		movq	%rax, 24(%rsp)
 3299      18
 3300 0012 31C0     		xorl	%eax, %eax
 3301              		.loc 1 490 0
 3302 0014 488B4710 		movq	16(%rdi), %rax
 3303              	.LBB434:
 3304              	.LBB435:
 3305              		.loc 1 1213 0
 3306 0018 39D6     		cmpl	%edx, %esi
 3307              	.LBE435:
 3308              	.LBE434:
 3309              		.loc 1 490 0
 3310 001a 48890424 		movq	%rax, (%rsp)
 3311 001e 8B4718   		movl	24(%rdi), %eax
 3312              	.LBB445:
 3313              	.LBB442:
 3314              		.loc 1 1213 0
 3315 0021 0F954718 		setne	24(%rdi)
 3316              	.LBB436:
 3317              	.LBB437:
 3318              		.loc 1 65 0
 3319 0025 39D6     		cmpl	%edx, %esi
 3320              	.LBE437:
 3321              	.LBE436:
 3322              	.LBE442:
 3323              	.LBE445:
 3324              		.loc 1 490 0
 3325 0027 89442408 		movl	%eax, 8(%rsp)
 3326              	.LVL358:
 3327              	.LBB446:
 3328              	.LBB443:
 3329              	.LBB439:
 3330              	.LBB438:
 3331              		.loc 1 65 0
 3332 002b 7F33     		jg	.L293
 3333              	.LVL359:
 3334              	.LBE438:
 3335              	.LBE439:
 3336              		.loc 1 1214 0
 3337 002d 897710   		movl	%esi, 16(%rdi)
 3338              	.LVL360:
 3339              	.LBB440:
 3340              	.LBB441:
 3341              		.loc 1 60 0
 3342 0030 7D31     		jge	.L295
 3343              	.LVL361:
 3344              	.L294:
 3345              	.LBE441:
 3346              	.LBE440:
 3347              		.loc 1 1215 0
 3348 0032 895714   		movl	%edx, 20(%rdi)
 3349              	.LVL362:
 3350              	.LBE443:
 3351              	.LBE446:
 3352              		.loc 1 493 0
 3353 0035 488D5710 		leaq	16(%rdi), %rdx
 3354 0039 4889E6   		movq	%rsp, %rsi
 3355              	.LVL363:
 3356 003c E8000000 		call	_ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_
 3356      00
 3357              	.LVL364:
 3358              		.loc 1 494 0
 3359 0041 488B4424 		movq	24(%rsp), %rax
 3359      18
 3360 0046 64483304 		xorq	%fs:40, %rax
 3360      25280000 
 3360      00
 3361 004f 7516     		jne	.L301
 3362 0051 4883C428 		addq	$40, %rsp
 3363              		.cfi_remember_state
 3364              		.cfi_def_cfa_offset 8
 3365 0055 C3       		ret
 3366              	.LVL365:
 3367 0056 662E0F1F 		.p2align 4,,10
 3367      84000000 
 3367      0000
 3368              		.p2align 3
 3369              	.L293:
 3370              		.cfi_restore_state
 3371              	.LBB447:
 3372              	.LBB444:
 3373              		.loc 1 1214 0
 3374 0060 895710   		movl	%edx, 16(%rdi)
 3375              	.LVL366:
 3376              	.L295:
 3377              	.LBE444:
 3378              	.LBE447:
 3379              		.loc 1 486 0
 3380 0063 89F2     		movl	%esi, %edx
 3381              	.LVL367:
 3382 0065 EBCB     		jmp	.L294
 3383              	.LVL368:
 3384              	.L301:
 3385              		.loc 1 494 0
 3386 0067 E8000000 		call	__stack_chk_fail
 3386      00
 3387              	.LVL369:
 3388              		.cfi_endproc
 3389              	.LFE207:
 3391              		.section	.text.unlikely._ZN14Fl_Text_Buffer6selectEii
 3392              	.LCOLDE36:
 3393              		.section	.text._ZN14Fl_Text_Buffer6selectEii
 3394              	.LHOTE36:
 3395              		.section	.text.unlikely._ZN14Fl_Text_Buffer8unselectEv,"ax",@progbits
 3396              		.align 2
 3397              	.LCOLDB37:
 3398              		.section	.text._ZN14Fl_Text_Buffer8unselectEv,"ax",@progbits
 3399              	.LHOTB37:
 3400              		.align 2
 3401              		.p2align 4,,15
 3402              		.globl	_ZN14Fl_Text_Buffer8unselectEv
 3404              	_ZN14Fl_Text_Buffer8unselectEv:
 3405              	.LFB208:
 3406              		.loc 1 501 0
 3407              		.cfi_startproc
 3408              	.LVL370:
 3409 0000 4883EC28 		subq	$40, %rsp
 3410              		.cfi_def_cfa_offset 48
 3411              		.loc 1 505 0
 3412 0004 488D5710 		leaq	16(%rdi), %rdx
 3413              		.loc 1 501 0
 3414 0008 64488B04 		movq	%fs:40, %rax
 3414      25280000 
 3414      00
 3415 0011 48894424 		movq	%rax, 24(%rsp)
 3415      18
 3416 0016 31C0     		xorl	%eax, %eax
 3417              		.loc 1 502 0
 3418 0018 488B4710 		movq	16(%rdi), %rax
 3419              		.loc 1 505 0
 3420 001c 4889E6   		movq	%rsp, %rsi
 3421              		.loc 1 502 0
 3422 001f 48890424 		movq	%rax, (%rsp)
 3423 0023 8B4718   		movl	24(%rdi), %eax
 3424              		.loc 1 504 0
 3425 0026 C6471800 		movb	$0, 24(%rdi)
 3426              		.loc 1 502 0
 3427 002a 89442408 		movl	%eax, 8(%rsp)
 3428              		.loc 1 505 0
 3429 002e E8000000 		call	_ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_
 3429      00
 3430              	.LVL371:
 3431              		.loc 1 506 0
 3432 0033 488B4424 		movq	24(%rsp), %rax
 3432      18
 3433 0038 64483304 		xorq	%fs:40, %rax
 3433      25280000 
 3433      00
 3434 0041 7505     		jne	.L305
 3435 0043 4883C428 		addq	$40, %rsp
 3436              		.cfi_remember_state
 3437              		.cfi_def_cfa_offset 8
 3438 0047 C3       		ret
 3439              	.L305:
 3440              		.cfi_restore_state
 3441 0048 E8000000 		call	__stack_chk_fail
 3441      00
 3442              	.LVL372:
 3443              		.cfi_endproc
 3444              	.LFE208:
 3446              		.section	.text.unlikely._ZN14Fl_Text_Buffer8unselectEv
 3447              	.LCOLDE37:
 3448              		.section	.text._ZN14Fl_Text_Buffer8unselectEv
 3449              	.LHOTE37:
 3450              		.section	.text.unlikely._ZN14Fl_Text_Buffer16secondary_selectEii,"ax",@progbits
 3451              		.align 2
 3452              	.LCOLDB38:
 3453              		.section	.text._ZN14Fl_Text_Buffer16secondary_selectEii,"ax",@progbits
 3454              	.LHOTB38:
 3455              		.align 2
 3456              		.p2align 4,,15
 3457              		.globl	_ZN14Fl_Text_Buffer16secondary_selectEii
 3459              	_ZN14Fl_Text_Buffer16secondary_selectEii:
 3460              	.LFB213:
 3461              		.loc 1 550 0
 3462              		.cfi_startproc
 3463              	.LVL373:
 3464 0000 4883EC28 		subq	$40, %rsp
 3465              		.cfi_def_cfa_offset 48
 3466              		.loc 1 550 0
 3467 0004 64488B04 		movq	%fs:40, %rax
 3467      25280000 
 3467      00
 3468 000d 48894424 		movq	%rax, 24(%rsp)
 3468      18
 3469 0012 31C0     		xorl	%eax, %eax
 3470              		.loc 1 551 0
 3471 0014 488B471C 		movq	28(%rdi), %rax
 3472              	.LBB448:
 3473              	.LBB449:
 3474              		.loc 1 1213 0
 3475 0018 39D6     		cmpl	%edx, %esi
 3476              	.LBE449:
 3477              	.LBE448:
 3478              		.loc 1 551 0
 3479 001a 48890424 		movq	%rax, (%rsp)
 3480 001e 8B4724   		movl	36(%rdi), %eax
 3481              	.LBB459:
 3482              	.LBB456:
 3483              		.loc 1 1213 0
 3484 0021 0F954724 		setne	36(%rdi)
 3485              	.LBB450:
 3486              	.LBB451:
 3487              		.loc 1 65 0
 3488 0025 39D6     		cmpl	%edx, %esi
 3489              	.LBE451:
 3490              	.LBE450:
 3491              	.LBE456:
 3492              	.LBE459:
 3493              		.loc 1 551 0
 3494 0027 89442408 		movl	%eax, 8(%rsp)
 3495              	.LVL374:
 3496              	.LBB460:
 3497              	.LBB457:
 3498              	.LBB453:
 3499              	.LBB452:
 3500              		.loc 1 65 0
 3501 002b 7F33     		jg	.L307
 3502              	.LVL375:
 3503              	.LBE452:
 3504              	.LBE453:
 3505              		.loc 1 1214 0
 3506 002d 89771C   		movl	%esi, 28(%rdi)
 3507              	.LVL376:
 3508              	.LBB454:
 3509              	.LBB455:
 3510              		.loc 1 60 0
 3511 0030 7D31     		jge	.L309
 3512              	.LVL377:
 3513              	.L308:
 3514              	.LBE455:
 3515              	.LBE454:
 3516              		.loc 1 1215 0
 3517 0032 895720   		movl	%edx, 32(%rdi)
 3518              	.LVL378:
 3519              	.LBE457:
 3520              	.LBE460:
 3521              		.loc 1 554 0
 3522 0035 488D571C 		leaq	28(%rdi), %rdx
 3523 0039 4889E6   		movq	%rsp, %rsi
 3524              	.LVL379:
 3525 003c E8000000 		call	_ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_
 3525      00
 3526              	.LVL380:
 3527              		.loc 1 555 0
 3528 0041 488B4424 		movq	24(%rsp), %rax
 3528      18
 3529 0046 64483304 		xorq	%fs:40, %rax
 3529      25280000 
 3529      00
 3530 004f 7516     		jne	.L315
 3531 0051 4883C428 		addq	$40, %rsp
 3532              		.cfi_remember_state
 3533              		.cfi_def_cfa_offset 8
 3534 0055 C3       		ret
 3535              	.LVL381:
 3536 0056 662E0F1F 		.p2align 4,,10
 3536      84000000 
 3536      0000
 3537              		.p2align 3
 3538              	.L307:
 3539              		.cfi_restore_state
 3540              	.LBB461:
 3541              	.LBB458:
 3542              		.loc 1 1214 0
 3543 0060 89571C   		movl	%edx, 28(%rdi)
 3544              	.LVL382:
 3545              	.L309:
 3546              	.LBE458:
 3547              	.LBE461:
 3548              		.loc 1 550 0
 3549 0063 89F2     		movl	%esi, %edx
 3550              	.LVL383:
 3551 0065 EBCB     		jmp	.L308
 3552              	.LVL384:
 3553              	.L315:
 3554              		.loc 1 555 0
 3555 0067 E8000000 		call	__stack_chk_fail
 3555      00
 3556              	.LVL385:
 3557              		.cfi_endproc
 3558              	.LFE213:
 3560              		.section	.text.unlikely._ZN14Fl_Text_Buffer16secondary_selectEii
 3561              	.LCOLDE38:
 3562              		.section	.text._ZN14Fl_Text_Buffer16secondary_selectEii
 3563              	.LHOTE38:
 3564              		.section	.text.unlikely._ZN14Fl_Text_Buffer18secondary_unselectEv,"ax",@progbits
 3565              		.align 2
 3566              	.LCOLDB39:
 3567              		.section	.text._ZN14Fl_Text_Buffer18secondary_unselectEv,"ax",@progbits
 3568              	.LHOTB39:
 3569              		.align 2
 3570              		.p2align 4,,15
 3571              		.globl	_ZN14Fl_Text_Buffer18secondary_unselectEv
 3573              	_ZN14Fl_Text_Buffer18secondary_unselectEv:
 3574              	.LFB214:
 3575              		.loc 1 562 0
 3576              		.cfi_startproc
 3577              	.LVL386:
 3578 0000 4883EC28 		subq	$40, %rsp
 3579              		.cfi_def_cfa_offset 48
 3580              		.loc 1 566 0
 3581 0004 488D571C 		leaq	28(%rdi), %rdx
 3582              		.loc 1 562 0
 3583 0008 64488B04 		movq	%fs:40, %rax
 3583      25280000 
 3583      00
 3584 0011 48894424 		movq	%rax, 24(%rsp)
 3584      18
 3585 0016 31C0     		xorl	%eax, %eax
 3586              		.loc 1 563 0
 3587 0018 488B471C 		movq	28(%rdi), %rax
 3588              		.loc 1 566 0
 3589 001c 4889E6   		movq	%rsp, %rsi
 3590              		.loc 1 563 0
 3591 001f 48890424 		movq	%rax, (%rsp)
 3592 0023 8B4724   		movl	36(%rdi), %eax
 3593              		.loc 1 565 0
 3594 0026 C6472400 		movb	$0, 36(%rdi)
 3595              		.loc 1 563 0
 3596 002a 89442408 		movl	%eax, 8(%rsp)
 3597              		.loc 1 566 0
 3598 002e E8000000 		call	_ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_
 3598      00
 3599              	.LVL387:
 3600              		.loc 1 567 0
 3601 0033 488B4424 		movq	24(%rsp), %rax
 3601      18
 3602 0038 64483304 		xorq	%fs:40, %rax
 3602      25280000 
 3602      00
 3603 0041 7505     		jne	.L319
 3604 0043 4883C428 		addq	$40, %rsp
 3605              		.cfi_remember_state
 3606              		.cfi_def_cfa_offset 8
 3607 0047 C3       		ret
 3608              	.L319:
 3609              		.cfi_restore_state
 3610 0048 E8000000 		call	__stack_chk_fail
 3610      00
 3611              	.LVL388:
 3612              		.cfi_endproc
 3613              	.LFE214:
 3615              		.section	.text.unlikely._ZN14Fl_Text_Buffer18secondary_unselectEv
 3616              	.LCOLDE39:
 3617              		.section	.text._ZN14Fl_Text_Buffer18secondary_unselectEv
 3618              	.LHOTE39:
 3619              		.section	.text.unlikely._ZN14Fl_Text_Buffer9highlightEii,"ax",@progbits
 3620              		.align 2
 3621              	.LCOLDB40:
 3622              		.section	.text._ZN14Fl_Text_Buffer9highlightEii,"ax",@progbits
 3623              	.LHOTB40:
 3624              		.align 2
 3625              		.p2align 4,,15
 3626              		.globl	_ZN14Fl_Text_Buffer9highlightEii
 3628              	_ZN14Fl_Text_Buffer9highlightEii:
 3629              	.LFB219:
 3630              		.loc 1 611 0
 3631              		.cfi_startproc
 3632              	.LVL389:
 3633 0000 4883EC28 		subq	$40, %rsp
 3634              		.cfi_def_cfa_offset 48
 3635              		.loc 1 611 0
 3636 0004 64488B04 		movq	%fs:40, %rax
 3636      25280000 
 3636      00
 3637 000d 48894424 		movq	%rax, 24(%rsp)
 3637      18
 3638 0012 31C0     		xorl	%eax, %eax
 3639              		.loc 1 612 0
 3640 0014 488B4728 		movq	40(%rdi), %rax
 3641              	.LBB462:
 3642              	.LBB463:
 3643              		.loc 1 1213 0
 3644 0018 39D6     		cmpl	%edx, %esi
 3645              	.LBE463:
 3646              	.LBE462:
 3647              		.loc 1 612 0
 3648 001a 48890424 		movq	%rax, (%rsp)
 3649 001e 8B4730   		movl	48(%rdi), %eax
 3650              	.LBB473:
 3651              	.LBB470:
 3652              		.loc 1 1213 0
 3653 0021 0F954730 		setne	48(%rdi)
 3654              	.LBB464:
 3655              	.LBB465:
 3656              		.loc 1 65 0
 3657 0025 39D6     		cmpl	%edx, %esi
 3658              	.LBE465:
 3659              	.LBE464:
 3660              	.LBE470:
 3661              	.LBE473:
 3662              		.loc 1 612 0
 3663 0027 89442408 		movl	%eax, 8(%rsp)
 3664              	.LVL390:
 3665              	.LBB474:
 3666              	.LBB471:
 3667              	.LBB467:
 3668              	.LBB466:
 3669              		.loc 1 65 0
 3670 002b 7F33     		jg	.L321
 3671              	.LVL391:
 3672              	.LBE466:
 3673              	.LBE467:
 3674              		.loc 1 1214 0
 3675 002d 897728   		movl	%esi, 40(%rdi)
 3676              	.LVL392:
 3677              	.LBB468:
 3678              	.LBB469:
 3679              		.loc 1 60 0
 3680 0030 7D31     		jge	.L323
 3681              	.LVL393:
 3682              	.L322:
 3683              	.LBE469:
 3684              	.LBE468:
 3685              		.loc 1 1215 0
 3686 0032 89572C   		movl	%edx, 44(%rdi)
 3687              	.LVL394:
 3688              	.LBE471:
 3689              	.LBE474:
 3690              		.loc 1 615 0
 3691 0035 488D5728 		leaq	40(%rdi), %rdx
 3692 0039 4889E6   		movq	%rsp, %rsi
 3693              	.LVL395:
 3694 003c E8000000 		call	_ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_
 3694      00
 3695              	.LVL396:
 3696              		.loc 1 616 0
 3697 0041 488B4424 		movq	24(%rsp), %rax
 3697      18
 3698 0046 64483304 		xorq	%fs:40, %rax
 3698      25280000 
 3698      00
 3699 004f 7516     		jne	.L329
 3700 0051 4883C428 		addq	$40, %rsp
 3701              		.cfi_remember_state
 3702              		.cfi_def_cfa_offset 8
 3703 0055 C3       		ret
 3704              	.LVL397:
 3705 0056 662E0F1F 		.p2align 4,,10
 3705      84000000 
 3705      0000
 3706              		.p2align 3
 3707              	.L321:
 3708              		.cfi_restore_state
 3709              	.LBB475:
 3710              	.LBB472:
 3711              		.loc 1 1214 0
 3712 0060 895728   		movl	%edx, 40(%rdi)
 3713              	.LVL398:
 3714              	.L323:
 3715              	.LBE472:
 3716              	.LBE475:
 3717              		.loc 1 611 0
 3718 0063 89F2     		movl	%esi, %edx
 3719              	.LVL399:
 3720 0065 EBCB     		jmp	.L322
 3721              	.LVL400:
 3722              	.L329:
 3723              		.loc 1 616 0
 3724 0067 E8000000 		call	__stack_chk_fail
 3724      00
 3725              	.LVL401:
 3726              		.cfi_endproc
 3727              	.LFE219:
 3729              		.section	.text.unlikely._ZN14Fl_Text_Buffer9highlightEii
 3730              	.LCOLDE40:
 3731              		.section	.text._ZN14Fl_Text_Buffer9highlightEii
 3732              	.LHOTE40:
 3733              		.section	.text.unlikely._ZN14Fl_Text_Buffer11unhighlightEv,"ax",@progbits
 3734              		.align 2
 3735              	.LCOLDB41:
 3736              		.section	.text._ZN14Fl_Text_Buffer11unhighlightEv,"ax",@progbits
 3737              	.LHOTB41:
 3738              		.align 2
 3739              		.p2align 4,,15
 3740              		.globl	_ZN14Fl_Text_Buffer11unhighlightEv
 3742              	_ZN14Fl_Text_Buffer11unhighlightEv:
 3743              	.LFB220:
 3744              		.loc 1 623 0
 3745              		.cfi_startproc
 3746              	.LVL402:
 3747 0000 4883EC28 		subq	$40, %rsp
 3748              		.cfi_def_cfa_offset 48
 3749              		.loc 1 627 0
 3750 0004 488D5728 		leaq	40(%rdi), %rdx
 3751              		.loc 1 623 0
 3752 0008 64488B04 		movq	%fs:40, %rax
 3752      25280000 
 3752      00
 3753 0011 48894424 		movq	%rax, 24(%rsp)
 3753      18
 3754 0016 31C0     		xorl	%eax, %eax
 3755              		.loc 1 624 0
 3756 0018 488B4728 		movq	40(%rdi), %rax
 3757              		.loc 1 627 0
 3758 001c 4889E6   		movq	%rsp, %rsi
 3759              		.loc 1 624 0
 3760 001f 48890424 		movq	%rax, (%rsp)
 3761 0023 8B4730   		movl	48(%rdi), %eax
 3762              		.loc 1 626 0
 3763 0026 C6473000 		movb	$0, 48(%rdi)
 3764              		.loc 1 624 0
 3765 002a 89442408 		movl	%eax, 8(%rsp)
 3766              		.loc 1 627 0
 3767 002e E8000000 		call	_ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_
 3767      00
 3768              	.LVL403:
 3769              		.loc 1 628 0
 3770 0033 488B4424 		movq	24(%rsp), %rax
 3770      18
 3771 0038 64483304 		xorq	%fs:40, %rax
 3771      25280000 
 3771      00
 3772 0041 7505     		jne	.L333
 3773 0043 4883C428 		addq	$40, %rsp
 3774              		.cfi_remember_state
 3775              		.cfi_def_cfa_offset 8
 3776 0047 C3       		ret
 3777              	.L333:
 3778              		.cfi_restore_state
 3779 0048 E8000000 		call	__stack_chk_fail
 3779      00
 3780              	.LVL404:
 3781              		.cfi_endproc
 3782              	.LFE220:
 3784              		.section	.text.unlikely._ZN14Fl_Text_Buffer11unhighlightEv
 3785              	.LCOLDE41:
 3786              		.section	.text._ZN14Fl_Text_Buffer11unhighlightEv
 3787              	.LHOTE41:
 3788              		.section	.text.unlikely._ZN14Fl_Text_Buffer8move_gapEi,"ax",@progbits
 3789              		.align 2
 3790              	.LCOLDB42:
 3791              		.section	.text._ZN14Fl_Text_Buffer8move_gapEi,"ax",@progbits
 3792              	.LHOTB42:
 3793              		.align 2
 3794              		.p2align 4,,15
 3795              		.globl	_ZN14Fl_Text_Buffer8move_gapEi
 3797              	_ZN14Fl_Text_Buffer8move_gapEi:
 3798              	.LFB250:
 3799              		.loc 1 1386 0
 3800              		.cfi_startproc
 3801              	.LVL405:
 3802 0000 55       		pushq	%rbp
 3803              		.cfi_def_cfa_offset 16
 3804              		.cfi_offset 6, -16
 3805 0001 53       		pushq	%rbx
 3806              		.cfi_def_cfa_offset 24
 3807              		.cfi_offset 3, -24
 3808 0002 89F5     		movl	%esi, %ebp
 3809 0004 4889FB   		movq	%rdi, %rbx
 3810 0007 4883EC08 		subq	$8, %rsp
 3811              		.cfi_def_cfa_offset 32
 3812              		.loc 1 1387 0
 3813 000b 48634F40 		movslq	64(%rdi), %rcx
 3814 000f 8B4744   		movl	68(%rdi), %eax
 3815              	.LVL406:
 3816              		.loc 1 1390 0
 3817 0012 488B7F38 		movq	56(%rdi), %rdi
 3818              	.LVL407:
 3819              		.loc 1 1389 0
 3820 0016 39F1     		cmpl	%esi, %ecx
 3821 0018 7C36     		jl	.L338
 3822              	.LVL408:
 3823              	.LBB476:
 3824              	.LBB477:
  54:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  55:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  56:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  57:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (memmove (void *__dest, const void *__src, size_t __len))
  58:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  59:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___memmove_chk (__dest, __src, __len, __bos0 (__dest));
 3825              		.loc 3 59 0
 3826 001a 29C8     		subl	%ecx, %eax
 3827              	.LVL409:
 3828 001c 89CA     		movl	%ecx, %edx
 3829 001e 01E8     		addl	%ebp, %eax
 3830              	.LVL410:
 3831 0020 29F2     		subl	%esi, %edx
 3832 0022 4863F6   		movslq	%esi, %rsi
 3833              	.LVL411:
 3834 0025 4898     		cltq
 3835 0027 4801FE   		addq	%rdi, %rsi
 3836              	.LVL412:
 3837 002a 4863D2   		movslq	%edx, %rdx
 3838              	.LVL413:
 3839 002d 4801C7   		addq	%rax, %rdi
 3840              	.LVL414:
 3841 0030 E8000000 		call	memmove
 3841      00
 3842              	.LVL415:
 3843              	.L336:
 3844              	.LBE477:
 3845              	.LBE476:
 3846              		.loc 1 1393 0
 3847 0035 89E8     		movl	%ebp, %eax
 3848 0037 2B4340   		subl	64(%rbx), %eax
 3849              		.loc 1 1394 0
 3850 003a 896B40   		movl	%ebp, 64(%rbx)
 3851              		.loc 1 1393 0
 3852 003d 014344   		addl	%eax, 68(%rbx)
 3853              		.loc 1 1395 0
 3854 0040 4883C408 		addq	$8, %rsp
 3855              		.cfi_remember_state
 3856              		.cfi_def_cfa_offset 24
 3857 0044 5B       		popq	%rbx
 3858              		.cfi_def_cfa_offset 16
 3859              	.LVL416:
 3860 0045 5D       		popq	%rbp
 3861              		.cfi_def_cfa_offset 8
 3862              	.LVL417:
 3863 0046 C3       		ret
 3864              	.LVL418:
 3865 0047 660F1F84 		.p2align 4,,10
 3865      00000000 
 3865      00
 3866              		.p2align 3
 3867              	.L338:
 3868              		.cfi_restore_state
 3869              	.LBB478:
 3870              	.LBB479:
 3871              		.loc 3 59 0
 3872 0050 89F2     		movl	%esi, %edx
 3873 0052 4863F0   		movslq	%eax, %rsi
 3874              	.LVL419:
 3875 0055 29CA     		subl	%ecx, %edx
 3876              	.LVL420:
 3877 0057 4801FE   		addq	%rdi, %rsi
 3878              	.LVL421:
 3879 005a 4801CF   		addq	%rcx, %rdi
 3880              	.LVL422:
 3881 005d 4863D2   		movslq	%edx, %rdx
 3882              	.LVL423:
 3883 0060 E8000000 		call	memmove
 3883      00
 3884              	.LVL424:
 3885 0065 EBCE     		jmp	.L336
 3886              	.LBE479:
 3887              	.LBE478:
 3888              		.cfi_endproc
 3889              	.LFE250:
 3891              		.section	.text.unlikely._ZN14Fl_Text_Buffer8move_gapEi
 3892              	.LCOLDE42:
 3893              		.section	.text._ZN14Fl_Text_Buffer8move_gapEi
 3894              	.LHOTE42:
 3895              		.section	.text.unlikely._ZN14Fl_Text_Buffer19reallocate_with_gapEii,"ax",@progbits
 3896              		.align 2
 3897              	.LCOLDB43:
 3898              		.section	.text._ZN14Fl_Text_Buffer19reallocate_with_gapEii,"ax",@progbits
 3899              	.LHOTB43:
 3900              		.align 2
 3901              		.p2align 4,,15
 3902              		.globl	_ZN14Fl_Text_Buffer19reallocate_with_gapEii
 3904              	_ZN14Fl_Text_Buffer19reallocate_with_gapEii:
 3905              	.LFB251:
 3906              		.loc 1 1403 0
 3907              		.cfi_startproc
 3908              	.LVL425:
 3909 0000 4157     		pushq	%r15
 3910              		.cfi_def_cfa_offset 16
 3911              		.cfi_offset 15, -16
 3912 0002 4156     		pushq	%r14
 3913              		.cfi_def_cfa_offset 24
 3914              		.cfi_offset 14, -24
 3915 0004 4155     		pushq	%r13
 3916              		.cfi_def_cfa_offset 32
 3917              		.cfi_offset 13, -32
 3918 0006 4154     		pushq	%r12
 3919              		.cfi_def_cfa_offset 40
 3920              		.cfi_offset 12, -40
 3921 0008 4189D5   		movl	%edx, %r13d
 3922 000b 55       		pushq	%rbp
 3923              		.cfi_def_cfa_offset 48
 3924              		.cfi_offset 6, -48
 3925 000c 53       		pushq	%rbx
 3926              		.cfi_def_cfa_offset 56
 3927              		.cfi_offset 3, -56
 3928 000d 4889FB   		movq	%rdi, %rbx
 3929 0010 89F5     		movl	%esi, %ebp
 3930 0012 4883EC18 		subq	$24, %rsp
 3931              		.cfi_def_cfa_offset 80
 3932              		.loc 1 1404 0
 3933 0016 448B6734 		movl	52(%rdi), %r12d
 3934 001a 418D3C14 		leal	(%r12,%rdx), %edi
 3935              	.LVL426:
 3936 001e 4863FF   		movslq	%edi, %rdi
 3937 0021 E8000000 		call	malloc
 3937      00
 3938              	.LVL427:
 3939 0026 4989C6   		movq	%rax, %r14
 3940              	.LVL428:
 3941              		.loc 1 1405 0
 3942 0029 418D442D 		leal	0(%r13,%rbp), %eax
 3942      00
 3943              	.LVL429:
 3944              		.loc 1 1407 0
 3945 002e 448B6B40 		movl	64(%rbx), %r13d
 3946              	.LVL430:
 3947              		.loc 1 1405 0
 3948 0032 89442404 		movl	%eax, 4(%rsp)
 3949              	.LVL431:
 3950              		.loc 1 1407 0
 3951 0036 4439ED   		cmpl	%r13d, %ebp
 3952 0039 0F8E8900 		jle	.L343
 3952      0000
 3953              		.loc 1 1414 0
 3954 003f 4C8B7B38 		movq	56(%rbx), %r15
 3955              	.LVL432:
 3956 0043 4D63CD   		movslq	%r13d, %r9
 3957              	.LVL433:
 3958              	.LBB480:
 3959              	.LBB481:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 3960              		.loc 3 53 0
 3961 0046 4C89F7   		movq	%r14, %rdi
 3962 0049 4C89CA   		movq	%r9, %rdx
 3963 004c 4C894C24 		movq	%r9, 8(%rsp)
 3963      08
 3964              	.LBE481:
 3965              	.LBE480:
 3966              	.LBB483:
 3967              	.LBB484:
 3968 0051 4129EC   		subl	%ebp, %r12d
 3969              	.LBE484:
 3970              	.LBE483:
 3971              	.LBB486:
 3972              	.LBB482:
 3973 0054 4C89FE   		movq	%r15, %rsi
 3974 0057 E8000000 		call	memcpy
 3974      00
 3975              	.LVL434:
 3976              	.LBE482:
 3977              	.LBE486:
 3978              		.loc 1 1415 0
 3979 005c 48637344 		movslq	68(%rbx), %rsi
 3980              	.LVL435:
 3981              	.LBB487:
 3982              	.LBB488:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 3983              		.loc 3 53 0
 3984 0060 4C8B4C24 		movq	8(%rsp), %r9
 3984      08
 3985 0065 89EA     		movl	%ebp, %edx
 3986 0067 4429EA   		subl	%r13d, %edx
 3987 006a 4863D2   		movslq	%edx, %rdx
 3988              	.LVL436:
 3989 006d 4B8D3C0E 		leaq	(%r14,%r9), %rdi
 3990              	.LVL437:
 3991 0071 89742408 		movl	%esi, 8(%rsp)
 3992 0075 4C01FE   		addq	%r15, %rsi
 3993              	.LVL438:
 3994 0078 E8000000 		call	memcpy
 3994      00
 3995              	.LVL439:
 3996              	.LBE488:
 3997              	.LBE487:
 3998              	.LBB489:
 3999              	.LBB485:
 4000 007d 8B4C2408 		movl	8(%rsp), %ecx
 4001 0081 48637C24 		movslq	4(%rsp), %rdi
 4001      04
 4002 0086 4963D4   		movslq	%r12d, %rdx
 4003 0089 8D740D00 		leal	0(%rbp,%rcx), %esi
 4004 008d 4C01F7   		addq	%r14, %rdi
 4005              	.LVL440:
 4006 0090 4429EE   		subl	%r13d, %esi
 4007 0093 4863F6   		movslq	%esi, %rsi
 4008 0096 4C01FE   		addq	%r15, %rsi
 4009              	.LVL441:
 4010 0099 E8000000 		call	memcpy
 4010      00
 4011              	.LVL442:
 4012              	.L341:
 4013              	.LBE485:
 4014              	.LBE489:
 4015              		.loc 1 1420 0
 4016 009e 4C89FF   		movq	%r15, %rdi
 4017 00a1 E8000000 		call	free
 4017      00
 4018              	.LVL443:
 4019              		.loc 1 1423 0
 4020 00a6 8B442404 		movl	4(%rsp), %eax
 4021              		.loc 1 1421 0
 4022 00aa 4C897338 		movq	%r14, 56(%rbx)
 4023              		.loc 1 1422 0
 4024 00ae 896B40   		movl	%ebp, 64(%rbx)
 4025              		.loc 1 1423 0
 4026 00b1 894344   		movl	%eax, 68(%rbx)
 4027              		.loc 1 1424 0
 4028 00b4 4883C418 		addq	$24, %rsp
 4029              		.cfi_remember_state
 4030              		.cfi_def_cfa_offset 56
 4031 00b8 5B       		popq	%rbx
 4032              		.cfi_def_cfa_offset 48
 4033              	.LVL444:
 4034 00b9 5D       		popq	%rbp
 4035              		.cfi_def_cfa_offset 40
 4036              	.LVL445:
 4037 00ba 415C     		popq	%r12
 4038              		.cfi_def_cfa_offset 32
 4039 00bc 415D     		popq	%r13
 4040              		.cfi_def_cfa_offset 24
 4041 00be 415E     		popq	%r14
 4042              		.cfi_def_cfa_offset 16
 4043              	.LVL446:
 4044 00c0 415F     		popq	%r15
 4045              		.cfi_def_cfa_offset 8
 4046 00c2 C3       		ret
 4047              	.LVL447:
 4048              		.p2align 4,,10
 4049 00c3 0F1F4400 		.p2align 3
 4049      00
 4050              	.L343:
 4051              		.cfi_restore_state
 4052              		.loc 1 1408 0
 4053 00c8 4C8B7B38 		movq	56(%rbx), %r15
 4054              	.LVL448:
 4055 00cc 4863CD   		movslq	%ebp, %rcx
 4056              	.LBB490:
 4057              	.LBB491:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 4058              		.loc 3 53 0
 4059 00cf 4C89F7   		movq	%r14, %rdi
 4060 00d2 4889CA   		movq	%rcx, %rdx
 4061 00d5 48894C24 		movq	%rcx, 8(%rsp)
 4061      08
 4062              	.LBE491:
 4063              	.LBE490:
 4064              	.LBB493:
 4065              	.LBB494:
 4066 00da 4529EC   		subl	%r13d, %r12d
 4067              	.LBE494:
 4068              	.LBE493:
 4069              	.LBB496:
 4070              	.LBB492:
 4071 00dd 4C89FE   		movq	%r15, %rsi
 4072 00e0 E8000000 		call	memcpy
 4072      00
 4073              	.LVL449:
 4074              	.LBE492:
 4075              	.LBE496:
 4076              	.LBB497:
 4077              	.LBB498:
 4078 00e5 48637C24 		movslq	4(%rsp), %rdi
 4078      04
 4079 00ea 488B4C24 		movq	8(%rsp), %rcx
 4079      08
 4080 00ef 4489EA   		movl	%r13d, %edx
 4081 00f2 29EA     		subl	%ebp, %edx
 4082 00f4 4863D2   		movslq	%edx, %rdx
 4083              	.LVL450:
 4084 00f7 498D340F 		leaq	(%r15,%rcx), %rsi
 4085              	.LVL451:
 4086 00fb 4C01F7   		addq	%r14, %rdi
 4087              	.LVL452:
 4088 00fe E8000000 		call	memcpy
 4088      00
 4089              	.LVL453:
 4090              	.LBE498:
 4091              	.LBE497:
 4092              	.LBB499:
 4093              	.LBB495:
 4094 0103 8B442404 		movl	4(%rsp), %eax
 4095 0107 48637344 		movslq	68(%rbx), %rsi
 4096 010b 4963D4   		movslq	%r12d, %rdx
 4097 010e 428D3C28 		leal	(%rax,%r13), %edi
 4098 0112 4C01FE   		addq	%r15, %rsi
 4099              	.LVL454:
 4100 0115 29EF     		subl	%ebp, %edi
 4101 0117 4863FF   		movslq	%edi, %rdi
 4102 011a 4C01F7   		addq	%r14, %rdi
 4103 011d E8000000 		call	memcpy
 4103      00
 4104              	.LVL455:
 4105 0122 E977FFFF 		jmp	.L341
 4105      FF
 4106              	.LBE495:
 4107              	.LBE499:
 4108              		.cfi_endproc
 4109              	.LFE251:
 4111              		.section	.text.unlikely._ZN14Fl_Text_Buffer19reallocate_with_gapEii
 4112              	.LCOLDE43:
 4113              		.section	.text._ZN14Fl_Text_Buffer19reallocate_with_gapEii
 4114              	.LHOTE43:
 4115              		.section	.text.unlikely._ZN14Fl_Text_Buffer17update_selectionsEiii,"ax",@progbits
 4116              		.align 2
 4117              	.LCOLDB44:
 4118              		.section	.text._ZN14Fl_Text_Buffer17update_selectionsEiii,"ax",@progbits
 4119              	.LHOTB44:
 4120              		.align 2
 4121              		.p2align 4,,15
 4122              		.globl	_ZN14Fl_Text_Buffer17update_selectionsEiii
 4124              	_ZN14Fl_Text_Buffer17update_selectionsEiii:
 4125              	.LFB252:
 4126              		.loc 1 1433 0
 4127              		.cfi_startproc
 4128              	.LVL456:
 4129 0000 55       		pushq	%rbp
 4130              		.cfi_def_cfa_offset 16
 4131              		.cfi_offset 6, -16
 4132 0001 53       		pushq	%rbx
 4133              		.cfi_def_cfa_offset 24
 4134              		.cfi_offset 3, -24
 4135              		.loc 1 1433 0
 4136 0002 4989FA   		movq	%rdi, %r10
 4137              	.LBB500:
 4138              	.LBB501:
 4139              		.loc 1 1443 0
 4140 0005 807F1800 		cmpb	$0, 24(%rdi)
 4141              	.LBE501:
 4142              	.LBE500:
 4143              		.loc 1 1433 0
 4144 0009 4189F3   		movl	%esi, %r11d
 4145 000c 89D3     		movl	%edx, %ebx
 4146 000e 89CD     		movl	%ecx, %ebp
 4147              	.LBB504:
 4148              	.LBB502:
 4149              		.loc 1 1443 0
 4150 0010 7546     		jne	.L349
 4151              	.LVL457:
 4152              	.L345:
 4153              	.LBE502:
 4154              	.LBE504:
 4155              	.LBB505:
 4156              	.LBB506:
 4157 0012 41807A24 		cmpb	$0, 36(%r10)
 4157      00
 4158 0017 7527     		jne	.L350
 4159              	.LVL458:
 4160              	.L346:
 4161              	.LBE506:
 4162              	.LBE505:
 4163              	.LBB508:
 4164              	.LBB509:
 4165 0019 41807A30 		cmpb	$0, 48(%r10)
 4165      00
 4166 001e 7508     		jne	.L351
 4167              	.LBE509:
 4168              	.LBE508:
 4169              		.loc 1 1437 0
 4170 0020 5B       		popq	%rbx
 4171              		.cfi_remember_state
 4172              		.cfi_def_cfa_offset 16
 4173              	.LVL459:
 4174 0021 5D       		popq	%rbp
 4175              		.cfi_def_cfa_offset 8
 4176              	.LVL460:
 4177 0022 C3       		ret
 4178              	.LVL461:
 4179              		.p2align 4,,10
 4180 0023 0F1F4400 		.p2align 3
 4180      00
 4181              	.L351:
 4182              		.cfi_restore_state
 4183              	.LBB512:
 4184              	.LBB510:
 4185 0028 89E9     		movl	%ebp, %ecx
 4186 002a 89DA     		movl	%ebx, %edx
 4187              	.LBE510:
 4188              	.LBE512:
 4189              		.loc 1 1436 0
 4190 002c 498D7A28 		leaq	40(%r10), %rdi
 4191              		.loc 1 1437 0
 4192 0030 5B       		popq	%rbx
 4193              		.cfi_remember_state
 4194              		.cfi_def_cfa_offset 16
 4195              	.LVL462:
 4196 0031 5D       		popq	%rbp
 4197              		.cfi_def_cfa_offset 8
 4198              	.LVL463:
 4199              	.LBB513:
 4200              	.LBB511:
 4201 0032 4489DE   		movl	%r11d, %esi
 4202 0035 E9000000 		jmp	_ZN17Fl_Text_Selection6updateEiii.part.8
 4202      00
 4203              	.LVL464:
 4204 003a 660F1F44 		.p2align 4,,10
 4204      0000
 4205              		.p2align 3
 4206              	.L350:
 4207              		.cfi_restore_state
 4208              	.LBE511:
 4209              	.LBE513:
 4210              		.loc 1 1435 0
 4211 0040 498D7A1C 		leaq	28(%r10), %rdi
 4212              	.LBB514:
 4213              	.LBB507:
 4214 0044 89E9     		movl	%ebp, %ecx
 4215 0046 89DA     		movl	%ebx, %edx
 4216 0048 4489DE   		movl	%r11d, %esi
 4217 004b E8000000 		call	_ZN17Fl_Text_Selection6updateEiii.part.8
 4217      00
 4218              	.LVL465:
 4219 0050 EBC7     		jmp	.L346
 4220              	.LVL466:
 4221              		.p2align 4,,10
 4222 0052 660F1F44 		.p2align 3
 4222      0000
 4223              	.L349:
 4224              	.LBE507:
 4225              	.LBE514:
 4226              		.loc 1 1434 0
 4227 0058 488D7F10 		leaq	16(%rdi), %rdi
 4228              	.LVL467:
 4229              	.LBB515:
 4230              	.LBB503:
 4231 005c E8000000 		call	_ZN17Fl_Text_Selection6updateEiii.part.8
 4231      00
 4232              	.LVL468:
 4233 0061 EBAF     		jmp	.L345
 4234              	.LBE503:
 4235              	.LBE515:
 4236              		.cfi_endproc
 4237              	.LFE252:
 4239              		.section	.text.unlikely._ZN14Fl_Text_Buffer17update_selectionsEiii
 4240              	.LCOLDE44:
 4241              		.section	.text._ZN14Fl_Text_Buffer17update_selectionsEiii
 4242              	.LHOTE44:
 4243              		.section	.rodata.str1.1
 4244              	.LC45:
 4245 0003 00       		.string	""
 4246              		.section	.text.unlikely._ZN14Fl_Text_Buffer4textEPKc,"ax",@progbits
 4247              		.align 2
 4248              	.LCOLDB46:
 4249              		.section	.text._ZN14Fl_Text_Buffer4textEPKc,"ax",@progbits
 4250              	.LHOTB46:
 4251              		.align 2
 4252              		.p2align 4,,15
 4253              		.globl	_ZN14Fl_Text_Buffer4textEPKc
 4255              	_ZN14Fl_Text_Buffer4textEPKc:
 4256              	.LFB196:
 4257              		.loc 1 166 0
 4258              		.cfi_startproc
 4259              	.LVL469:
 4260 0000 4157     		pushq	%r15
 4261              		.cfi_def_cfa_offset 16
 4262              		.cfi_offset 15, -16
 4263 0002 4156     		pushq	%r14
 4264              		.cfi_def_cfa_offset 24
 4265              		.cfi_offset 14, -24
 4266              		.loc 1 171 0
 4267 0004 B8000000 		movl	$.LC45, %eax
 4267      00
 4268              		.loc 1 166 0
 4269 0009 4155     		pushq	%r13
 4270              		.cfi_def_cfa_offset 32
 4271              		.cfi_offset 13, -32
 4272 000b 4154     		pushq	%r12
 4273              		.cfi_def_cfa_offset 40
 4274              		.cfi_offset 12, -40
 4275 000d 4989F6   		movq	%rsi, %r14
 4276 0010 55       		pushq	%rbp
 4277              		.cfi_def_cfa_offset 48
 4278              		.cfi_offset 6, -48
 4279 0011 53       		pushq	%rbx
 4280              		.cfi_def_cfa_offset 56
 4281              		.cfi_offset 3, -56
 4282 0012 4889FB   		movq	%rdi, %rbx
 4283 0015 4883EC18 		subq	$24, %rsp
 4284              		.cfi_def_cfa_offset 80
 4285              	.LBB516:
 4286              	.LBB517:
 4287              		.loc 1 1320 0
 4288 0019 8B5760   		movl	96(%rdi), %edx
 4289              	.LBE517:
 4290              	.LBE516:
 4291              		.loc 1 171 0
 4292 001c 4885F6   		testq	%rsi, %rsi
 4293 001f 4C0F44F0 		cmove	%rax, %r14
 4294              	.LVL470:
 4295 0023 31ED     		xorl	%ebp, %ebp
 4296 0025 4531E4   		xorl	%r12d, %r12d
 4297 0028 448B6F34 		movl	52(%rdi), %r13d
 4298              	.LVL471:
 4299              	.LBB519:
 4300              	.LBB518:
 4301              		.loc 1 1320 0
 4302 002c 85D2     		testl	%edx, %edx
 4303 002e 7E22     		jle	.L357
 4304              	.LVL472:
 4305              		.p2align 4,,10
 4306              		.p2align 3
 4307              	.L360:
 4308              		.loc 1 1321 0
 4309 0030 488B4370 		movq	112(%rbx), %rax
 4310 0034 31FF     		xorl	%edi, %edi
 4311 0036 4489EE   		movl	%r13d, %esi
 4312              		.loc 1 1320 0
 4313 0039 4183C401 		addl	$1, %r12d
 4314              	.LVL473:
 4315              		.loc 1 1321 0
 4316 003d 488B1428 		movq	(%rax,%rbp), %rdx
 4317 0041 488B4368 		movq	104(%rbx), %rax
 4318 0045 FF1428   		call	*(%rax,%rbp)
 4319              	.LVL474:
 4320 0048 4883C508 		addq	$8, %rbp
 4321              		.loc 1 1320 0
 4322 004c 44396360 		cmpl	%r12d, 96(%rbx)
 4323 0050 7FDE     		jg	.L360
 4324              	.LVL475:
 4325              	.L357:
 4326              	.LBE518:
 4327              	.LBE519:
 4328              		.loc 1 176 0
 4329 0052 4889DF   		movq	%rbx, %rdi
 4330 0055 E8000000 		call	_ZNK14Fl_Text_Buffer4textEv
 4330      00
 4331              	.LVL476:
 4332              		.loc 1 178 0
 4333 005a 488B7B38 		movq	56(%rbx), %rdi
 4334              		.loc 1 176 0
 4335 005e 4989C4   		movq	%rax, %r12
 4336              	.LVL477:
 4337              		.loc 1 177 0
 4338 0061 448B6B34 		movl	52(%rbx), %r13d
 4339              	.LVL478:
 4340              		.loc 1 178 0
 4341 0065 E8000000 		call	free
 4341      00
 4342              	.LVL479:
 4343              		.loc 1 181 0
 4344 006a 4C89F7   		movq	%r14, %rdi
 4345 006d E8000000 		call	strlen
 4345      00
 4346              	.LVL480:
 4347              		.loc 1 182 0
 4348 0072 8B938000 		movl	128(%rbx), %edx
 4348      0000
 4349              		.loc 1 181 0
 4350 0078 4889C5   		movq	%rax, %rbp
 4351 007b 4189C7   		movl	%eax, %r15d
 4352              	.LVL481:
 4353              		.loc 1 182 0
 4354 007e 01C2     		addl	%eax, %edx
 4355 0080 4863FA   		movslq	%edx, %rdi
 4356 0083 8954240C 		movl	%edx, 12(%rsp)
 4357 0087 E8000000 		call	malloc
 4357      00
 4358              	.LVL482:
 4359              		.loc 1 185 0
 4360 008c 8B54240C 		movl	12(%rsp), %edx
 4361              	.LBB520:
 4362              	.LBB521:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 4363              		.loc 3 53 0
 4364 0090 4C89F6   		movq	%r14, %rsi
 4365 0093 4889C7   		movq	%rax, %rdi
 4366              	.LBE521:
 4367              	.LBE520:
 4368              		.loc 1 182 0
 4369 0096 48894338 		movq	%rax, 56(%rbx)
 4370              		.loc 1 183 0
 4371 009a 896B34   		movl	%ebp, 52(%rbx)
 4372              		.loc 1 184 0
 4373 009d 896B40   		movl	%ebp, 64(%rbx)
 4374              		.loc 1 185 0
 4375 00a0 895344   		movl	%edx, 68(%rbx)
 4376              	.LVL483:
 4377              	.LBB523:
 4378              	.LBB522:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 4379              		.loc 3 53 0
 4380 00a3 4863D5   		movslq	%ebp, %rdx
 4381              	.LVL484:
 4382 00a6 E8000000 		call	memcpy
 4382      00
 4383              	.LVL485:
 4384              	.LBE522:
 4385              	.LBE523:
 4386              		.loc 1 189 0
 4387 00ab 31C9     		xorl	%ecx, %ecx
 4388 00ad 31F6     		xorl	%esi, %esi
 4389 00af 4489EA   		movl	%r13d, %edx
 4390 00b2 4889DF   		movq	%rbx, %rdi
 4391 00b5 E8000000 		call	_ZN14Fl_Text_Buffer17update_selectionsEiii
 4391      00
 4392              	.LVL486:
 4393              	.LBB524:
 4394              	.LBB525:
 4395              		.loc 1 1309 0
 4396 00ba 8B434C   		movl	76(%rbx), %eax
 4397 00bd 85C0     		testl	%eax, %eax
 4398 00bf 7E39     		jle	.L355
 4399 00c1 31ED     		xorl	%ebp, %ebp
 4400              	.LVL487:
 4401 00c3 4531F6   		xorl	%r14d, %r14d
 4402              	.LVL488:
 4403 00c6 662E0F1F 		.p2align 4,,10
 4403      84000000 
 4403      0000
 4404              		.p2align 3
 4405              	.L359:
 4406              		.loc 1 1310 0
 4407 00d0 488B5358 		movq	88(%rbx), %rdx
 4408              		.loc 1 1311 0
 4409 00d4 488B4350 		movq	80(%rbx), %rax
 4410 00d8 31C9     		xorl	%ecx, %ecx
 4411 00da 31FF     		xorl	%edi, %edi
 4412 00dc 4D89E0   		movq	%r12, %r8
 4413 00df 4489FE   		movl	%r15d, %esi
 4414              		.loc 1 1309 0
 4415 00e2 4183C601 		addl	$1, %r14d
 4416              	.LVL489:
 4417              		.loc 1 1311 0
 4418 00e6 4C8B0C2A 		movq	(%rdx,%rbp), %r9
 4419 00ea 4489EA   		movl	%r13d, %edx
 4420 00ed FF1428   		call	*(%rax,%rbp)
 4421              	.LVL490:
 4422 00f0 4883C508 		addq	$8, %rbp
 4423              		.loc 1 1309 0
 4424 00f4 4439734C 		cmpl	%r14d, 76(%rbx)
 4425 00f8 7FD6     		jg	.L359
 4426              	.LVL491:
 4427              	.L355:
 4428              	.LBE525:
 4429              	.LBE524:
 4430              		.loc 1 194 0
 4431 00fa 4883C418 		addq	$24, %rsp
 4432              		.cfi_def_cfa_offset 56
 4433              		.loc 1 193 0
 4434 00fe 4C89E7   		movq	%r12, %rdi
 4435              		.loc 1 194 0
 4436 0101 5B       		popq	%rbx
 4437              		.cfi_def_cfa_offset 48
 4438              	.LVL492:
 4439 0102 5D       		popq	%rbp
 4440              		.cfi_def_cfa_offset 40
 4441 0103 415C     		popq	%r12
 4442              		.cfi_def_cfa_offset 32
 4443              	.LVL493:
 4444 0105 415D     		popq	%r13
 4445              		.cfi_def_cfa_offset 24
 4446              	.LVL494:
 4447 0107 415E     		popq	%r14
 4448              		.cfi_def_cfa_offset 16
 4449 0109 415F     		popq	%r15
 4450              		.cfi_def_cfa_offset 8
 4451              	.LVL495:
 4452              		.loc 1 193 0
 4453 010b E9000000 		jmp	free
 4453      00
 4454              	.LVL496:
 4455              		.cfi_endproc
 4456              	.LFE196:
 4458              		.section	.text.unlikely._ZN14Fl_Text_Buffer4textEPKc
 4459              	.LCOLDE46:
 4460              		.section	.text._ZN14Fl_Text_Buffer4textEPKc
 4461              	.LHOTE46:
 4462              		.section	.text.unlikely._ZN14Fl_Text_Buffer4copyEPS_iii,"ax",@progbits
 4463              		.align 2
 4464              	.LCOLDB47:
 4465              		.section	.text._ZN14Fl_Text_Buffer4copyEPS_iii,"ax",@progbits
 4466              	.LHOTB47:
 4467              		.align 2
 4468              		.p2align 4,,15
 4469              		.globl	_ZN14Fl_Text_Buffer4copyEPS_iii
 4471              	_ZN14Fl_Text_Buffer4copyEPS_iii:
 4472              	.LFB203:
 4473              		.loc 1 366 0
 4474              		.cfi_startproc
 4475              	.LVL497:
 4476 0000 4157     		pushq	%r15
 4477              		.cfi_def_cfa_offset 16
 4478              		.cfi_offset 15, -16
 4479 0002 4156     		pushq	%r14
 4480              		.cfi_def_cfa_offset 24
 4481              		.cfi_offset 14, -24
 4482 0004 4189CF   		movl	%ecx, %r15d
 4483 0007 4155     		pushq	%r13
 4484              		.cfi_def_cfa_offset 32
 4485              		.cfi_offset 13, -32
 4486 0009 4154     		pushq	%r12
 4487              		.cfi_def_cfa_offset 40
 4488              		.cfi_offset 12, -40
 4489              		.loc 1 371 0
 4490 000b 4189CC   		movl	%ecx, %r12d
 4491              		.loc 1 366 0
 4492 000e 55       		pushq	%rbp
 4493              		.cfi_def_cfa_offset 48
 4494              		.cfi_offset 6, -48
 4495 000f 53       		pushq	%rbx
 4496              		.cfi_def_cfa_offset 56
 4497              		.cfi_offset 3, -56
 4498              		.loc 1 371 0
 4499 0010 4129D4   		subl	%edx, %r12d
 4500              	.LVL498:
 4501              		.loc 1 366 0
 4502 0013 89D5     		movl	%edx, %ebp
 4503 0015 4889FB   		movq	%rdi, %rbx
 4504 0018 4989F6   		movq	%rsi, %r14
 4505 001b 4883EC08 		subq	$8, %rsp
 4506              		.cfi_def_cfa_offset 64
 4507              		.loc 1 378 0
 4508 001f 8B5740   		movl	64(%rdi), %edx
 4509              	.LVL499:
 4510 0022 8B4744   		movl	68(%rdi), %eax
 4511              		.loc 1 366 0
 4512 0025 4589C5   		movl	%r8d, %r13d
 4513              		.loc 1 378 0
 4514 0028 29D0     		subl	%edx, %eax
 4515 002a 4139C4   		cmpl	%eax, %r12d
 4516 002d 0F8FAD00 		jg	.L370
 4516      0000
 4517              		.loc 1 380 0
 4518 0033 4439C2   		cmpl	%r8d, %edx
 4519 0036 7408     		je	.L365
 4520              		.loc 1 381 0
 4521 0038 4489C6   		movl	%r8d, %esi
 4522              	.LVL500:
 4523 003b E8000000 		call	_ZN14Fl_Text_Buffer8move_gapEi
 4523      00
 4524              	.LVL501:
 4525              	.L365:
 4526              	.LBB526:
 4527              		.loc 1 384 0
 4528 0040 418B4640 		movl	64(%r14), %eax
 4529 0044 4139C7   		cmpl	%eax, %r15d
 4530 0047 0F8EB100 		jle	.L371
 4530      0000
 4531              	.L366:
 4532              	.LBB527:
 4533              		.loc 1 386 0
 4534 004d 39C5     		cmpl	%eax, %ebp
 4535 004f 7D67     		jge	.L372
 4536              	.LBB528:
 4537              	.LBB529:
 4538              	.LBB530:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 4539              		.loc 3 53 0
 4540 0051 4963FD   		movslq	%r13d, %rdi
 4541 0054 4863F5   		movslq	%ebp, %rsi
 4542 0057 48037B38 		addq	56(%rbx), %rdi
 4543 005b 49037638 		addq	56(%r14), %rsi
 4544              	.LBE530:
 4545              	.LBE529:
 4546              		.loc 1 391 0
 4547 005f 29E8     		subl	%ebp, %eax
 4548 0061 4863D0   		movslq	%eax, %rdx
 4549 0064 4989D7   		movq	%rdx, %r15
 4550              	.LVL502:
 4551              	.LBB532:
 4552              	.LBB531:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 4553              		.loc 3 53 0
 4554 0067 E8000000 		call	memcpy
 4554      00
 4555              	.LVL503:
 4556              	.LBE531:
 4557              	.LBE532:
 4558              	.LBB533:
 4559              	.LBB534:
 4560 006c 438D7C3D 		leal	0(%r13,%r15), %edi
 4560      00
 4561 0071 49637644 		movslq	68(%r14), %rsi
 4562 0075 4489E2   		movl	%r12d, %edx
 4563 0078 49037638 		addq	56(%r14), %rsi
 4564              	.LVL504:
 4565 007c 4429FA   		subl	%r15d, %edx
 4566 007f 4863FF   		movslq	%edi, %rdi
 4567 0082 48037B38 		addq	56(%rbx), %rdi
 4568              	.LVL505:
 4569 0086 4863D2   		movslq	%edx, %rdx
 4570              	.LVL506:
 4571 0089 E8000000 		call	memcpy
 4571      00
 4572              	.LVL507:
 4573              	.L367:
 4574              	.LBE534:
 4575              	.LBE533:
 4576              	.LBE528:
 4577              	.LBE527:
 4578              	.LBE526:
 4579              		.loc 1 396 0
 4580 008e 44016340 		addl	%r12d, 64(%rbx)
 4581              		.loc 1 397 0
 4582 0092 44016334 		addl	%r12d, 52(%rbx)
 4583              		.loc 1 399 0
 4584 0096 4883C408 		addq	$8, %rsp
 4585              		.cfi_remember_state
 4586              		.cfi_def_cfa_offset 56
 4587              		.loc 1 398 0
 4588 009a 4489E1   		movl	%r12d, %ecx
 4589 009d 4489EE   		movl	%r13d, %esi
 4590 00a0 4889DF   		movq	%rbx, %rdi
 4591              		.loc 1 399 0
 4592 00a3 5B       		popq	%rbx
 4593              		.cfi_def_cfa_offset 48
 4594              	.LVL508:
 4595              		.loc 1 398 0
 4596 00a4 31D2     		xorl	%edx, %edx
 4597              		.loc 1 399 0
 4598 00a6 5D       		popq	%rbp
 4599              		.cfi_def_cfa_offset 40
 4600 00a7 415C     		popq	%r12
 4601              		.cfi_def_cfa_offset 32
 4602              	.LVL509:
 4603 00a9 415D     		popq	%r13
 4604              		.cfi_def_cfa_offset 24
 4605              	.LVL510:
 4606 00ab 415E     		popq	%r14
 4607              		.cfi_def_cfa_offset 16
 4608              	.LVL511:
 4609 00ad 415F     		popq	%r15
 4610              		.cfi_def_cfa_offset 8
 4611              		.loc 1 398 0
 4612 00af E9000000 		jmp	_ZN14Fl_Text_Buffer17update_selectionsEiii
 4612      00
 4613              	.LVL512:
 4614              		.p2align 4,,10
 4615 00b4 0F1F4000 		.p2align 3
 4616              	.L372:
 4617              		.cfi_restore_state
 4618              	.LBB540:
 4619              	.LBB537:
 4620              	.LBB535:
 4621              	.LBB536:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 4622              		.loc 3 53 0
 4623 00b8 418B7644 		movl	68(%r14), %esi
 4624 00bc 29C5     		subl	%eax, %ebp
 4625              	.LVL513:
 4626 00be 4963FD   		movslq	%r13d, %rdi
 4627 00c1 48037B38 		addq	56(%rbx), %rdi
 4628              	.LVL514:
 4629 00c5 4963D4   		movslq	%r12d, %rdx
 4630              	.LVL515:
 4631 00c8 01EE     		addl	%ebp, %esi
 4632 00ca 4863F6   		movslq	%esi, %rsi
 4633 00cd 49037638 		addq	56(%r14), %rsi
 4634 00d1 E8000000 		call	memcpy
 4634      00
 4635              	.LVL516:
 4636 00d6 EBB6     		jmp	.L367
 4637              	.LVL517:
 4638 00d8 0F1F8400 		.p2align 4,,10
 4638      00000000 
 4639              		.p2align 3
 4640              	.L370:
 4641              	.LBE536:
 4642              	.LBE535:
 4643              	.LBE537:
 4644              	.LBE540:
 4645              		.loc 1 379 0
 4646 00e0 8B978000 		movl	128(%rdi), %edx
 4646      0000
 4647 00e6 4489C6   		movl	%r8d, %esi
 4648              	.LVL518:
 4649 00e9 4401E2   		addl	%r12d, %edx
 4650 00ec E8000000 		call	_ZN14Fl_Text_Buffer19reallocate_with_gapEii
 4650      00
 4651              	.LVL519:
 4652              	.LBB541:
 4653              		.loc 1 384 0
 4654 00f1 418B4640 		movl	64(%r14), %eax
 4655 00f5 4139C7   		cmpl	%eax, %r15d
 4656 00f8 0F8F4FFF 		jg	.L366
 4656      FFFF
 4657              	.L371:
 4658              	.LVL520:
 4659              	.LBB538:
 4660              	.LBB539:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 4661              		.loc 3 53 0
 4662 00fe 4963FD   		movslq	%r13d, %rdi
 4663 0101 4863F5   		movslq	%ebp, %rsi
 4664 0104 48037B38 		addq	56(%rbx), %rdi
 4665              	.LVL521:
 4666 0108 49037638 		addq	56(%r14), %rsi
 4667              	.LVL522:
 4668 010c 4963D4   		movslq	%r12d, %rdx
 4669              	.LVL523:
 4670 010f E8000000 		call	memcpy
 4670      00
 4671              	.LVL524:
 4672 0114 E975FFFF 		jmp	.L367
 4672      FF
 4673              	.LBE539:
 4674              	.LBE538:
 4675              	.LBE541:
 4676              		.cfi_endproc
 4677              	.LFE203:
 4679              		.section	.text.unlikely._ZN14Fl_Text_Buffer4copyEPS_iii
 4680              	.LCOLDE47:
 4681              		.section	.text._ZN14Fl_Text_Buffer4copyEPS_iii
 4682              	.LHOTE47:
 4683              		.section	.text.unlikely._ZN14Fl_Text_Buffer7insert_EiPKc.part.9,"ax",@progbits
 4684              		.align 2
 4685              	.LCOLDB48:
 4686              		.section	.text._ZN14Fl_Text_Buffer7insert_EiPKc.part.9,"ax",@progbits
 4687              	.LHOTB48:
 4688              		.align 2
 4689              		.p2align 4,,15
 4691              	_ZN14Fl_Text_Buffer7insert_EiPKc.part.9:
 4692              	.LFB273:
 4693              		.loc 1 1116 0
 4694              		.cfi_startproc
 4695              	.LVL525:
 4696 0000 4155     		pushq	%r13
 4697              		.cfi_def_cfa_offset 16
 4698              		.cfi_offset 13, -16
 4699 0002 4154     		pushq	%r12
 4700              		.cfi_def_cfa_offset 24
 4701              		.cfi_offset 12, -24
 4702 0004 4989D5   		movq	%rdx, %r13
 4703 0007 55       		pushq	%rbp
 4704              		.cfi_def_cfa_offset 32
 4705              		.cfi_offset 6, -32
 4706 0008 53       		pushq	%rbx
 4707              		.cfi_def_cfa_offset 40
 4708              		.cfi_offset 3, -40
 4709 0009 4889FB   		movq	%rdi, %rbx
 4710              		.loc 1 1121 0
 4711 000c 4889D7   		movq	%rdx, %rdi
 4712              	.LVL526:
 4713              		.loc 1 1116 0
 4714 000f 4189F4   		movl	%esi, %r12d
 4715 0012 4883EC08 		subq	$8, %rsp
 4716              		.cfi_def_cfa_offset 48
 4717              		.loc 1 1121 0
 4718 0016 E8000000 		call	strlen
 4718      00
 4719              	.LVL527:
 4720              		.loc 1 1128 0
 4721 001b 8B5340   		movl	64(%rbx), %edx
 4722              		.loc 1 1121 0
 4723 001e 4889C5   		movq	%rax, %rbp
 4724              	.LVL528:
 4725              		.loc 1 1128 0
 4726 0021 8B4344   		movl	68(%rbx), %eax
 4727 0024 29D0     		subl	%edx, %eax
 4728 0026 39C5     		cmpl	%eax, %ebp
 4729 0028 0F8F8A00 		jg	.L386
 4729      0000
 4730              		.loc 1 1130 0
 4731 002e 4439E2   		cmpl	%r12d, %edx
 4732 0031 740B     		je	.L375
 4733              		.loc 1 1131 0
 4734 0033 4489E6   		movl	%r12d, %esi
 4735 0036 4889DF   		movq	%rbx, %rdi
 4736 0039 E8000000 		call	_ZN14Fl_Text_Buffer8move_gapEi
 4736      00
 4737              	.LVL529:
 4738              	.L375:
 4739              	.LBB542:
 4740              	.LBB543:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 4741              		.loc 3 53 0
 4742 003e 4963FC   		movslq	%r12d, %rdi
 4743 0041 48037B38 		addq	56(%rbx), %rdi
 4744              	.LVL530:
 4745 0045 4863D5   		movslq	%ebp, %rdx
 4746              	.LVL531:
 4747 0048 4C89EE   		movq	%r13, %rsi
 4748 004b E8000000 		call	memcpy
 4748      00
 4749              	.LVL532:
 4750              	.LBE543:
 4751              	.LBE542:
 4752              		.loc 1 1135 0
 4753 0050 016B40   		addl	%ebp, 64(%rbx)
 4754              		.loc 1 1136 0
 4755 0053 016B34   		addl	%ebp, 52(%rbx)
 4756              		.loc 1 1137 0
 4757 0056 31D2     		xorl	%edx, %edx
 4758 0058 89E9     		movl	%ebp, %ecx
 4759 005a 4489E6   		movl	%r12d, %esi
 4760 005d 4889DF   		movq	%rbx, %rdi
 4761 0060 E8000000 		call	_ZN14Fl_Text_Buffer17update_selectionsEiii
 4761      00
 4762              	.LVL533:
 4763              		.loc 1 1139 0
 4764 0065 807B7C00 		cmpb	$0, 124(%rbx)
 4765 0069 743B     		je	.L384
 4766              		.loc 1 1140 0
 4767 006b 483B1D00 		cmpq	_ZL10undowidget(%rip), %rbx
 4767      000000
 4768 0072 747C     		je	.L387
 4769              		.loc 1 1144 0
 4770 0074 31C0     		xorl	%eax, %eax
 4771 0076 443B2500 		cmpl	_ZL6undoat(%rip), %r12d
 4771      000000
 4772              		.loc 1 1143 0
 4773 007d 892D0000 		movl	%ebp, _ZL10undoinsert(%rip)
 4773      0000
 4774              		.loc 1 1144 0
 4775 0083 745B     		je	.L382
 4776              	.L381:
 4777 0085 89050000 		movl	%eax, _ZL11undoyankcut(%rip)
 4777      0000
 4778              	.L380:
 4779              		.loc 1 1146 0
 4780 008b 4101EC   		addl	%ebp, %r12d
 4781              	.LVL534:
 4782              		.loc 1 1147 0
 4783 008e C7050000 		movl	$0, _ZL7undocut(%rip)
 4783      00000000 
 4783      0000
 4784              		.loc 1 1148 0
 4785 0098 48891D00 		movq	%rbx, _ZL10undowidget(%rip)
 4785      000000
 4786              		.loc 1 1146 0
 4787 009f 44892500 		movl	%r12d, _ZL6undoat(%rip)
 4787      000000
 4788              	.L384:
 4789              		.loc 1 1152 0
 4790 00a6 4883C408 		addq	$8, %rsp
 4791              		.cfi_remember_state
 4792              		.cfi_def_cfa_offset 40
 4793 00aa 89E8     		movl	%ebp, %eax
 4794 00ac 5B       		popq	%rbx
 4795              		.cfi_def_cfa_offset 32
 4796              	.LVL535:
 4797 00ad 5D       		popq	%rbp
 4798              		.cfi_def_cfa_offset 24
 4799              	.LVL536:
 4800 00ae 415C     		popq	%r12
 4801              		.cfi_def_cfa_offset 16
 4802 00b0 415D     		popq	%r13
 4803              		.cfi_def_cfa_offset 8
 4804              	.LVL537:
 4805 00b2 C3       		ret
 4806              	.LVL538:
 4807              		.p2align 4,,10
 4808 00b3 0F1F4400 		.p2align 3
 4808      00
 4809              	.L386:
 4810              		.cfi_restore_state
 4811              		.loc 1 1129 0
 4812 00b8 8B938000 		movl	128(%rbx), %edx
 4812      0000
 4813 00be 4489E6   		movl	%r12d, %esi
 4814 00c1 4889DF   		movq	%rbx, %rdi
 4815 00c4 01EA     		addl	%ebp, %edx
 4816 00c6 E8000000 		call	_ZN14Fl_Text_Buffer19reallocate_with_gapEii
 4816      00
 4817              	.LVL539:
 4818 00cb E96EFFFF 		jmp	.L375
 4818      FF
 4819              		.p2align 4,,10
 4820              		.p2align 3
 4821              	.L379:
 4822              		.loc 1 1143 0
 4823 00d0 892D0000 		movl	%ebp, _ZL10undoinsert(%rip)
 4823      0000
 4824 00d6 662E0F1F 		.p2align 4,,10
 4824      84000000 
 4824      0000
 4825              		.p2align 3
 4826              	.L382:
 4827              		.loc 1 1144 0
 4828 00e0 8B050000 		movl	_ZL7undocut(%rip), %eax
 4828      0000
 4829 00e6 EB9D     		jmp	.L381
 4830 00e8 0F1F8400 		.p2align 4,,10
 4830      00000000 
 4831              		.p2align 3
 4832              	.L387:
 4833              		.loc 1 1140 0
 4834 00f0 443B2500 		cmpl	_ZL6undoat(%rip), %r12d
 4834      000000
 4835 00f7 740F     		je	.L388
 4836              		.loc 1 1143 0
 4837 00f9 892D0000 		movl	%ebp, _ZL10undoinsert(%rip)
 4837      0000
 4838              		.loc 1 1144 0
 4839 00ff 31C0     		xorl	%eax, %eax
 4840 0101 EB82     		jmp	.L381
 4841              		.p2align 4,,10
 4842 0103 0F1F4400 		.p2align 3
 4842      00
 4843              	.L388:
 4844              		.loc 1 1140 0
 4845 0108 8B050000 		movl	_ZL10undoinsert(%rip), %eax
 4845      0000
 4846 010e 85C0     		testl	%eax, %eax
 4847 0110 74BE     		je	.L379
 4848              		.loc 1 1141 0
 4849 0112 01E8     		addl	%ebp, %eax
 4850 0114 89050000 		movl	%eax, _ZL10undoinsert(%rip)
 4850      0000
 4851 011a E96CFFFF 		jmp	.L380
 4851      FF
 4852              		.cfi_endproc
 4853              	.LFE273:
 4855              		.section	.text.unlikely._ZN14Fl_Text_Buffer7insert_EiPKc.part.9
 4856              	.LCOLDE48:
 4857              		.section	.text._ZN14Fl_Text_Buffer7insert_EiPKc.part.9
 4858              	.LHOTE48:
 4859              		.section	.text.unlikely._ZN14Fl_Text_Buffer7insert_EiPKc,"ax",@progbits
 4860              		.align 2
 4861              	.LCOLDB49:
 4862              		.section	.text._ZN14Fl_Text_Buffer7insert_EiPKc,"ax",@progbits
 4863              	.LHOTB49:
 4864              		.align 2
 4865              		.p2align 4,,15
 4866              		.globl	_ZN14Fl_Text_Buffer7insert_EiPKc
 4868              	_ZN14Fl_Text_Buffer7insert_EiPKc:
 4869              	.LFB239:
 4870              		.loc 1 1117 0
 4871              		.cfi_startproc
 4872              	.LVL540:
 4873              		.loc 1 1118 0
 4874 0000 4885D2   		testq	%rdx, %rdx
 4875 0003 740B     		je	.L390
 4876              		.loc 1 1118 0 is_stmt 0 discriminator 1
 4877 0005 803A00   		cmpb	$0, (%rdx)
 4878 0008 7406     		je	.L390
 4879 000a E9000000 		jmp	_ZN14Fl_Text_Buffer7insert_EiPKc.part.9
 4879      00
 4880              	.LVL541:
 4881 000f 90       		.p2align 4,,10
 4882              		.p2align 3
 4883              	.L390:
 4884              		.loc 1 1152 0 is_stmt 1
 4885 0010 31C0     		xorl	%eax, %eax
 4886 0012 C3       		ret
 4887              		.cfi_endproc
 4888              	.LFE239:
 4890              		.section	.text.unlikely._ZN14Fl_Text_Buffer7insert_EiPKc
 4891              	.LCOLDE49:
 4892              		.section	.text._ZN14Fl_Text_Buffer7insert_EiPKc
 4893              	.LHOTE49:
 4894              		.section	.text.unlikely._ZN14Fl_Text_Buffer6insertEiPKc.part.10,"ax",@progbits
 4895              		.align 2
 4896              	.LCOLDB50:
 4897              		.section	.text._ZN14Fl_Text_Buffer6insertEiPKc.part.10,"ax",@progbits
 4898              	.LHOTB50:
 4899              		.align 2
 4900              		.p2align 4,,15
 4902              	_ZN14Fl_Text_Buffer6insertEiPKc.part.10:
 4903              	.LFB274:
 4904              		.loc 1 269 0
 4905              		.cfi_startproc
 4906              	.LVL542:
 4907 0000 4157     		pushq	%r15
 4908              		.cfi_def_cfa_offset 16
 4909              		.cfi_offset 15, -16
 4910 0002 4156     		pushq	%r14
 4911              		.cfi_def_cfa_offset 24
 4912              		.cfi_offset 14, -24
 4913 0004 4989D7   		movq	%rdx, %r15
 4914 0007 4155     		pushq	%r13
 4915              		.cfi_def_cfa_offset 32
 4916              		.cfi_offset 13, -32
 4917 0009 4154     		pushq	%r12
 4918              		.cfi_def_cfa_offset 40
 4919              		.cfi_offset 12, -40
 4920 000b 41BD0000 		movl	$0, %r13d
 4920      0000
 4921 0011 55       		pushq	%rbp
 4922              		.cfi_def_cfa_offset 48
 4923              		.cfi_offset 6, -48
 4924 0012 53       		pushq	%rbx
 4925              		.cfi_def_cfa_offset 56
 4926              		.cfi_offset 3, -56
 4927 0013 4889FB   		movq	%rdi, %rbx
 4928 0016 4883EC08 		subq	$8, %rsp
 4929              		.cfi_def_cfa_offset 64
 4930              		.loc 1 279 0
 4931 001a 8B4734   		movl	52(%rdi), %eax
 4932              	.LBB544:
 4933              	.LBB545:
 4934              		.loc 1 1320 0
 4935 001d 8B5760   		movl	96(%rdi), %edx
 4936              	.LVL543:
 4937 0020 39F0     		cmpl	%esi, %eax
 4938 0022 0F4EF0   		cmovle	%eax, %esi
 4939              	.LVL544:
 4940 0025 85F6     		testl	%esi, %esi
 4941 0027 440F49EE 		cmovns	%esi, %r13d
 4942              	.LVL545:
 4943 002b 31ED     		xorl	%ebp, %ebp
 4944 002d 4531E4   		xorl	%r12d, %r12d
 4945 0030 85D2     		testl	%edx, %edx
 4946 0032 7E26     		jle	.L398
 4947              	.LVL546:
 4948              		.p2align 4,,10
 4949 0034 0F1F4000 		.p2align 3
 4950              	.L405:
 4951              		.loc 1 1321 0
 4952 0038 488B4370 		movq	112(%rbx), %rax
 4953 003c 31F6     		xorl	%esi, %esi
 4954 003e 4489EF   		movl	%r13d, %edi
 4955              		.loc 1 1320 0
 4956 0041 4183C401 		addl	$1, %r12d
 4957              	.LVL547:
 4958              		.loc 1 1321 0
 4959 0045 488B1428 		movq	(%rax,%rbp), %rdx
 4960 0049 488B4368 		movq	104(%rbx), %rax
 4961 004d FF1428   		call	*(%rax,%rbp)
 4962              	.LVL548:
 4963 0050 4883C508 		addq	$8, %rbp
 4964              		.loc 1 1320 0
 4965 0054 44396360 		cmpl	%r12d, 96(%rbx)
 4966 0058 7FDE     		jg	.L405
 4967              	.LVL549:
 4968              	.L398:
 4969              	.LBE545:
 4970              	.LBE544:
 4971              	.LBB546:
 4972              	.LBB547:
 4973              		.loc 1 1118 0
 4974 005a 4D85FF   		testq	%r15, %r15
 4975 005d 7479     		je	.L411
 4976              		.loc 1 1119 0
 4977 005f 4531F6   		xorl	%r14d, %r14d
 4978              		.loc 1 1118 0
 4979 0062 41803F00 		cmpb	$0, (%r15)
 4980 0066 7558     		jne	.L412
 4981              	.L396:
 4982              	.LVL550:
 4983              	.LBE547:
 4984              	.LBE546:
 4985              		.loc 1 289 0
 4986 0068 438D042E 		leal	(%r14,%r13), %eax
 4987              	.LBB549:
 4988              	.LBB550:
 4989              		.loc 1 1309 0
 4990 006c 31ED     		xorl	%ebp, %ebp
 4991 006e 4531E4   		xorl	%r12d, %r12d
 4992              	.LBE550:
 4993              	.LBE549:
 4994              		.loc 1 289 0
 4995 0071 894378   		movl	%eax, 120(%rbx)
 4996              	.LVL551:
 4997              	.LBB552:
 4998              	.LBB551:
 4999              		.loc 1 1309 0
 5000 0074 8B434C   		movl	76(%rbx), %eax
 5001 0077 85C0     		testl	%eax, %eax
 5002 0079 7E2F     		jle	.L394
 5003              	.LVL552:
 5004 007b 0F1F4400 		.p2align 4,,10
 5004      00
 5005              		.p2align 3
 5006              	.L406:
 5007              		.loc 1 1310 0
 5008 0080 488B5358 		movq	88(%rbx), %rdx
 5009              		.loc 1 1311 0
 5010 0084 488B4350 		movq	80(%rbx), %rax
 5011 0088 4531C0   		xorl	%r8d, %r8d
 5012 008b 31C9     		xorl	%ecx, %ecx
 5013 008d 4489F6   		movl	%r14d, %esi
 5014 0090 4489EF   		movl	%r13d, %edi
 5015              		.loc 1 1309 0
 5016 0093 4183C401 		addl	$1, %r12d
 5017              	.LVL553:
 5018              		.loc 1 1311 0
 5019 0097 4C8B0C2A 		movq	(%rdx,%rbp), %r9
 5020 009b 31D2     		xorl	%edx, %edx
 5021 009d FF1428   		call	*(%rax,%rbp)
 5022              	.LVL554:
 5023 00a0 4883C508 		addq	$8, %rbp
 5024              		.loc 1 1309 0
 5025 00a4 4439634C 		cmpl	%r12d, 76(%rbx)
 5026 00a8 7FD6     		jg	.L406
 5027              	.LVL555:
 5028              	.L394:
 5029              	.LBE551:
 5030              	.LBE552:
 5031              		.loc 1 292 0
 5032 00aa 4883C408 		addq	$8, %rsp
 5033              		.cfi_remember_state
 5034              		.cfi_def_cfa_offset 56
 5035 00ae 5B       		popq	%rbx
 5036              		.cfi_def_cfa_offset 48
 5037              	.LVL556:
 5038 00af 5D       		popq	%rbp
 5039              		.cfi_def_cfa_offset 40
 5040 00b0 415C     		popq	%r12
 5041              		.cfi_def_cfa_offset 32
 5042 00b2 415D     		popq	%r13
 5043              		.cfi_def_cfa_offset 24
 5044              	.LVL557:
 5045 00b4 415E     		popq	%r14
 5046              		.cfi_def_cfa_offset 16
 5047 00b6 415F     		popq	%r15
 5048              		.cfi_def_cfa_offset 8
 5049              	.LVL558:
 5050 00b8 C3       		ret
 5051              	.LVL559:
 5052 00b9 0F1F8000 		.p2align 4,,10
 5052      000000
 5053              		.p2align 3
 5054              	.L412:
 5055              		.cfi_restore_state
 5056              	.LBB553:
 5057              	.LBB548:
 5058 00c0 4C89FA   		movq	%r15, %rdx
 5059 00c3 4489EE   		movl	%r13d, %esi
 5060 00c6 4889DF   		movq	%rbx, %rdi
 5061 00c9 E8000000 		call	_ZN14Fl_Text_Buffer7insert_EiPKc.part.9
 5061      00
 5062              	.LVL560:
 5063 00ce 4189C6   		movl	%eax, %r14d
 5064 00d1 EB95     		jmp	.L396
 5065              		.p2align 4,,10
 5066 00d3 0F1F4400 		.p2align 3
 5066      00
 5067              	.L411:
 5068              		.loc 1 1119 0
 5069 00d8 4531F6   		xorl	%r14d, %r14d
 5070 00db EB8B     		jmp	.L396
 5071              	.LBE548:
 5072              	.LBE553:
 5073              		.cfi_endproc
 5074              	.LFE274:
 5076              		.section	.text.unlikely._ZN14Fl_Text_Buffer6insertEiPKc.part.10
 5077              	.LCOLDE50:
 5078              		.section	.text._ZN14Fl_Text_Buffer6insertEiPKc.part.10
 5079              	.LHOTE50:
 5080              		.section	.text.unlikely._ZN14Fl_Text_Buffer6insertEiPKc,"ax",@progbits
 5081              		.align 2
 5082              	.LCOLDB51:
 5083              		.section	.text._ZN14Fl_Text_Buffer6insertEiPKc,"ax",@progbits
 5084              	.LHOTB51:
 5085              		.align 2
 5086              		.p2align 4,,15
 5087              		.globl	_ZN14Fl_Text_Buffer6insertEiPKc
 5089              	_ZN14Fl_Text_Buffer6insertEiPKc:
 5090              	.LFB200:
 5091              		.loc 1 270 0
 5092              		.cfi_startproc
 5093              	.LVL561:
 5094              		.loc 1 275 0
 5095 0000 4885D2   		testq	%rdx, %rdx
 5096 0003 740B     		je	.L413
 5097              		.loc 1 275 0 is_stmt 0 discriminator 1
 5098 0005 803A00   		cmpb	$0, (%rdx)
 5099 0008 7406     		je	.L413
 5100 000a E9000000 		jmp	_ZN14Fl_Text_Buffer6insertEiPKc.part.10
 5100      00
 5101              	.LVL562:
 5102 000f 90       		.p2align 4,,10
 5103              		.p2align 3
 5104              	.L413:
 5105 0010 F3C3     		rep ret
 5106              		.cfi_endproc
 5107              	.LFE200:
 5109              		.section	.text.unlikely._ZN14Fl_Text_Buffer6insertEiPKc
 5110              	.LCOLDE51:
 5111              		.section	.text._ZN14Fl_Text_Buffer6insertEiPKc
 5112              	.LHOTE51:
 5113              		.section	.text.unlikely._ZN14Fl_Text_Buffer7remove_Eii,"ax",@progbits
 5114              		.align 2
 5115              	.LCOLDB52:
 5116              		.section	.text._ZN14Fl_Text_Buffer7remove_Eii,"ax",@progbits
 5117              	.LHOTB52:
 5118              		.align 2
 5119              		.p2align 4,,15
 5120              		.globl	_ZN14Fl_Text_Buffer7remove_Eii
 5122              	_ZN14Fl_Text_Buffer7remove_Eii:
 5123              	.LFB240:
 5124              		.loc 1 1160 0 is_stmt 1
 5125              		.cfi_startproc
 5126              	.LVL563:
 5127 0000 4157     		pushq	%r15
 5128              		.cfi_def_cfa_offset 16
 5129              		.cfi_offset 15, -16
 5130 0002 4156     		pushq	%r14
 5131              		.cfi_def_cfa_offset 24
 5132              		.cfi_offset 14, -24
 5133 0004 4155     		pushq	%r13
 5134              		.cfi_def_cfa_offset 32
 5135              		.cfi_offset 13, -32
 5136 0006 4154     		pushq	%r12
 5137              		.cfi_def_cfa_offset 40
 5138              		.cfi_offset 12, -40
 5139 0008 4189D4   		movl	%edx, %r12d
 5140 000b 55       		pushq	%rbp
 5141              		.cfi_def_cfa_offset 48
 5142              		.cfi_offset 6, -48
 5143 000c 53       		pushq	%rbx
 5144              		.cfi_def_cfa_offset 56
 5145              		.cfi_offset 3, -56
 5146 000d 89F5     		movl	%esi, %ebp
 5147 000f 4889FB   		movq	%rdi, %rbx
 5148 0012 4883EC08 		subq	$8, %rsp
 5149              		.cfi_def_cfa_offset 64
 5150              		.loc 1 1163 0
 5151 0016 807F7C00 		cmpb	$0, 124(%rdi)
 5152 001a 0F84B000 		je	.L419
 5152      0000
 5153              		.loc 1 1164 0
 5154 0020 483B3D00 		cmpq	_ZL10undowidget(%rip), %rdi
 5154      000000
 5155 0027 0F84EB00 		je	.L438
 5155      0000
 5156              	.L420:
 5157              		.loc 1 1169 0
 5158 002d 4589E5   		movl	%r12d, %r13d
 5159 0030 4129ED   		subl	%ebp, %r13d
 5160              		.loc 1 1170 0
 5161 0033 4489EF   		movl	%r13d, %edi
 5162              	.LVL564:
 5163              		.loc 1 1169 0
 5164 0036 44892D00 		movl	%r13d, _ZL7undocut(%rip)
 5164      000000
 5165              		.loc 1 1170 0
 5166 003d E8000000 		call	_ZL14undobuffersizei
 5166      00
 5167              	.LVL565:
 5168              	.L421:
 5169              	.LBB554:
 5170              		.loc 1 1178 0
 5171 0042 8B4340   		movl	64(%rbx), %eax
 5172              	.LBE554:
 5173              		.loc 1 1172 0
 5174 0045 892D0000 		movl	%ebp, _ZL6undoat(%rip)
 5174      0000
 5175              		.loc 1 1173 0
 5176 004b C7050000 		movl	$0, _ZL10undoinsert(%rip)
 5176      00000000 
 5176      0000
 5177              		.loc 1 1174 0
 5178 0055 C7050000 		movl	$0, _ZL11undoyankcut(%rip)
 5178      00000000 
 5178      0000
 5179              		.loc 1 1175 0
 5180 005f 48891D00 		movq	%rbx, _ZL10undowidget(%rip)
 5180      000000
 5181              	.LBB568:
 5182              		.loc 1 1178 0
 5183 0066 39C5     		cmpl	%eax, %ebp
 5184 0068 0F8E8200 		jle	.L422
 5184      0000
 5185              		.loc 1 1179 0
 5186 006e 807B7C00 		cmpb	$0, 124(%rbx)
 5187 0072 7421     		je	.L423
 5188              	.LVL566:
 5189              	.LBB555:
 5190              	.LBB556:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 5191              		.loc 3 53 0
 5192 0074 8B7344   		movl	68(%rbx), %esi
 5193 0077 488B3D00 		movq	_ZL10undobuffer(%rip), %rdi
 5193      000000
 5194 007e 4963D5   		movslq	%r13d, %rdx
 5195              	.LVL567:
 5196 0081 29C6     		subl	%eax, %esi
 5197 0083 4863C5   		movslq	%ebp, %rax
 5198              	.LVL568:
 5199 0086 4863F6   		movslq	%esi, %rsi
 5200 0089 4801C6   		addq	%rax, %rsi
 5201 008c 48037338 		addq	56(%rbx), %rsi
 5202 0090 E8000000 		call	memcpy
 5202      00
 5203              	.LVL569:
 5204              	.L423:
 5205              	.LBE556:
 5206              	.LBE555:
 5207              		.loc 1 1182 0
 5208 0095 89EE     		movl	%ebp, %esi
 5209 0097 4889DF   		movq	%rbx, %rdi
 5210 009a E8000000 		call	_ZN14Fl_Text_Buffer8move_gapEi
 5210      00
 5211              	.LVL570:
 5212              	.L424:
 5213              	.LBE568:
 5214              		.loc 1 1196 0
 5215 009f 442B6340 		subl	64(%rbx), %r12d
 5216              	.LVL571:
 5217              		.loc 1 1200 0
 5218 00a3 44296B34 		subl	%r13d, 52(%rbx)
 5219              		.loc 1 1203 0
 5220 00a7 4489EA   		movl	%r13d, %edx
 5221              		.loc 1 1196 0
 5222 00aa 44016344 		addl	%r12d, 68(%rbx)
 5223              		.loc 1 1197 0
 5224 00ae 896B40   		movl	%ebp, 64(%rbx)
 5225              		.loc 1 1204 0
 5226 00b1 4883C408 		addq	$8, %rsp
 5227              		.cfi_remember_state
 5228              		.cfi_def_cfa_offset 56
 5229              		.loc 1 1203 0
 5230 00b5 89EE     		movl	%ebp, %esi
 5231 00b7 4889DF   		movq	%rbx, %rdi
 5232 00ba 31C9     		xorl	%ecx, %ecx
 5233              		.loc 1 1204 0
 5234 00bc 5B       		popq	%rbx
 5235              		.cfi_def_cfa_offset 48
 5236              	.LVL572:
 5237 00bd 5D       		popq	%rbp
 5238              		.cfi_def_cfa_offset 40
 5239              	.LVL573:
 5240 00be 415C     		popq	%r12
 5241              		.cfi_def_cfa_offset 32
 5242 00c0 415D     		popq	%r13
 5243              		.cfi_def_cfa_offset 24
 5244 00c2 415E     		popq	%r14
 5245              		.cfi_def_cfa_offset 16
 5246 00c4 415F     		popq	%r15
 5247              		.cfi_def_cfa_offset 8
 5248              		.loc 1 1203 0
 5249 00c6 E9000000 		jmp	_ZN14Fl_Text_Buffer17update_selectionsEiii
 5249      00
 5250              	.LVL574:
 5251 00cb 0F1F4400 		.p2align 4,,10
 5251      00
 5252              		.p2align 3
 5253              	.L419:
 5254              		.cfi_restore_state
 5255              	.LBB569:
 5256              		.loc 1 1178 0
 5257 00d0 8B4740   		movl	64(%rdi), %eax
 5258 00d3 4189D5   		movl	%edx, %r13d
 5259 00d6 4129F5   		subl	%esi, %r13d
 5260 00d9 39C6     		cmpl	%eax, %esi
 5261 00db 7FB8     		jg	.L423
 5262              	.LBB557:
 5263              		.loc 1 1183 0
 5264 00dd 39C2     		cmpl	%eax, %edx
 5265 00df 7DBE     		jge	.L424
 5266              	.LVL575:
 5267              	.L426:
 5268              		.loc 1 1186 0
 5269 00e1 4489E6   		movl	%r12d, %esi
 5270 00e4 4889DF   		movq	%rbx, %rdi
 5271 00e7 E8000000 		call	_ZN14Fl_Text_Buffer8move_gapEi
 5271      00
 5272              	.LVL576:
 5273 00ec EBB1     		jmp	.L424
 5274 00ee 6690     		.p2align 4,,10
 5275              		.p2align 3
 5276              	.L422:
 5277              		.loc 1 1183 0
 5278 00f0 4139C4   		cmpl	%eax, %r12d
 5279 00f3 0FB6537C 		movzbl	124(%rbx), %edx
 5280 00f7 7D7F     		jge	.L425
 5281              		.loc 1 1184 0
 5282 00f9 84D2     		testb	%dl, %dl
 5283 00fb 74E4     		je	.L426
 5284              	.LVL577:
 5285              	.LBB558:
 5286              	.LBB559:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 5287              		.loc 3 53 0
 5288 00fd 4863F5   		movslq	%ebp, %rsi
 5289 0100 48037338 		addq	56(%rbx), %rsi
 5290              	.LVL578:
 5291 0104 488B3D00 		movq	_ZL10undobuffer(%rip), %rdi
 5291      000000
 5292 010b 4963D5   		movslq	%r13d, %rdx
 5293              	.LVL579:
 5294 010e E8000000 		call	memcpy
 5294      00
 5295              	.LVL580:
 5296 0113 EBCC     		jmp	.L426
 5297              	.LVL581:
 5298              		.p2align 4,,10
 5299 0115 0F1F00   		.p2align 3
 5300              	.L438:
 5301              	.LBE559:
 5302              	.LBE558:
 5303              	.LBE557:
 5304              	.LBE569:
 5305              		.loc 1 1164 0 discriminator 1
 5306 0118 39150000 		cmpl	%edx, _ZL6undoat(%rip)
 5306      0000
 5307 011e 0F8509FF 		jne	.L420
 5307      FFFF
 5308              		.loc 1 1164 0 is_stmt 0 discriminator 2
 5309 0124 448B3500 		movl	_ZL7undocut(%rip), %r14d
 5309      000000
 5310 012b 4585F6   		testl	%r14d, %r14d
 5311 012e 0F84F9FE 		je	.L420
 5311      FFFF
 5312              		.loc 1 1165 0 is_stmt 1
 5313 0134 4489F0   		movl	%r14d, %eax
 5314              		.loc 1 1167 0
 5315 0137 4589E5   		movl	%r12d, %r13d
 5316              		.loc 1 1165 0
 5317 013a 29F0     		subl	%esi, %eax
 5318              		.loc 1 1167 0
 5319 013c 4129ED   		subl	%ebp, %r13d
 5320              		.loc 1 1165 0
 5321 013f 8D7C1001 		leal	1(%rax,%rdx), %edi
 5322 0143 E8000000 		call	_ZL14undobuffersizei
 5322      00
 5323              	.LVL582:
 5324              		.loc 1 1166 0
 5325 0148 488B3500 		movq	_ZL10undobuffer(%rip), %rsi
 5325      000000
 5326              	.LVL583:
 5327              	.LBB570:
 5328              	.LBB571:
 5329              		.loc 3 59 0
 5330 014f 4863C5   		movslq	%ebp, %rax
 5331 0152 4963FC   		movslq	%r12d, %rdi
 5332 0155 4829C7   		subq	%rax, %rdi
 5333 0158 4963D6   		movslq	%r14d, %rdx
 5334              	.LVL584:
 5335              	.LBE571:
 5336              	.LBE570:
 5337              		.loc 1 1167 0
 5338 015b 4501EE   		addl	%r13d, %r14d
 5339              	.LBB573:
 5340              	.LBB572:
 5341              		.loc 3 59 0
 5342 015e 4801F7   		addq	%rsi, %rdi
 5343              	.LVL585:
 5344 0161 E8000000 		call	memmove
 5344      00
 5345              	.LVL586:
 5346              	.LBE572:
 5347              	.LBE573:
 5348              		.loc 1 1167 0
 5349 0166 44893500 		movl	%r14d, _ZL7undocut(%rip)
 5349      000000
 5350 016d E9D0FEFF 		jmp	.L421
 5350      FF
 5351              		.p2align 4,,10
 5352 0172 660F1F44 		.p2align 3
 5352      0000
 5353              	.L425:
 5354              	.LVL587:
 5355              	.LBB574:
 5356              	.LBB567:
 5357              	.LBB560:
 5358              		.loc 1 1189 0
 5359 0178 84D2     		testb	%dl, %dl
 5360 017a 0F841FFF 		je	.L424
 5360      FFFF
 5361              		.loc 1 1190 0
 5362 0180 488B0D00 		movq	_ZL10undobuffer(%rip), %rcx
 5362      000000
 5363              	.LVL588:
 5364              	.LBB561:
 5365              	.LBB562:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 5366              		.loc 3 53 0
 5367 0187 4863F5   		movslq	%ebp, %rsi
 5368 018a 48037338 		addq	56(%rbx), %rsi
 5369              	.LVL589:
 5370              	.LBE562:
 5371              	.LBE561:
 5372              		.loc 1 1188 0
 5373 018e 29E8     		subl	%ebp, %eax
 5374              	.LVL590:
 5375 0190 4C63F8   		movslq	%eax, %r15
 5376              	.LVL591:
 5377              	.LBB564:
 5378              	.LBB563:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 5379              		.loc 3 53 0
 5380 0193 4C89FA   		movq	%r15, %rdx
 5381 0196 4889CF   		movq	%rcx, %rdi
 5382 0199 E8000000 		call	memcpy
 5382      00
 5383              	.LVL592:
 5384              	.LBE563:
 5385              	.LBE564:
 5386              	.LBB565:
 5387              	.LBB566:
 5388 019e 48637344 		movslq	68(%rbx), %rsi
 5389 01a2 4489EA   		movl	%r13d, %edx
 5390 01a5 4A8D3C38 		leaq	(%rax,%r15), %rdi
 5391              	.LVL593:
 5392 01a9 48037338 		addq	56(%rbx), %rsi
 5393              	.LVL594:
 5394 01ad 4429FA   		subl	%r15d, %edx
 5395 01b0 4863D2   		movslq	%edx, %rdx
 5396              	.LVL595:
 5397 01b3 E8000000 		call	memcpy
 5397      00
 5398              	.LVL596:
 5399 01b8 E9E2FEFF 		jmp	.L424
 5399      FF
 5400              	.LBE566:
 5401              	.LBE565:
 5402              	.LBE560:
 5403              	.LBE567:
 5404              	.LBE574:
 5405              		.cfi_endproc
 5406              	.LFE240:
 5408              		.section	.text.unlikely._ZN14Fl_Text_Buffer7remove_Eii
 5409              	.LCOLDE52:
 5410              		.section	.text._ZN14Fl_Text_Buffer7remove_Eii
 5411              	.LHOTE52:
 5412              		.section	.text.unlikely._ZN14Fl_Text_Buffer7replaceEiiPKc,"ax",@progbits
 5413              		.align 2
 5414              	.LCOLDB53:
 5415              		.section	.text._ZN14Fl_Text_Buffer7replaceEiiPKc,"ax",@progbits
 5416              	.LHOTB53:
 5417              		.align 2
 5418              		.p2align 4,,15
 5419              		.globl	_ZN14Fl_Text_Buffer7replaceEiiPKc
 5421              	_ZN14Fl_Text_Buffer7replaceEiiPKc:
 5422              	.LFB201:
 5423              		.loc 1 300 0
 5424              		.cfi_startproc
 5425              	.LVL597:
 5426              		.loc 1 302 0
 5427 0000 4885C9   		testq	%rcx, %rcx
 5428 0003 0F84FF00 		je	.L454
 5428      0000
 5429              		.loc 1 300 0
 5430 0009 4157     		pushq	%r15
 5431              		.cfi_def_cfa_offset 16
 5432              		.cfi_offset 15, -16
 5433 000b 4156     		pushq	%r14
 5434              		.cfi_def_cfa_offset 24
 5435              		.cfi_offset 14, -24
 5436 000d 4155     		pushq	%r13
 5437              		.cfi_def_cfa_offset 32
 5438              		.cfi_offset 13, -32
 5439 000f 4154     		pushq	%r12
 5440              		.cfi_def_cfa_offset 40
 5441              		.cfi_offset 12, -40
 5442 0011 41BC0000 		movl	$0, %r12d
 5442      0000
 5443 0017 55       		pushq	%rbp
 5444              		.cfi_def_cfa_offset 48
 5445              		.cfi_offset 6, -48
 5446 0018 53       		pushq	%rbx
 5447              		.cfi_def_cfa_offset 56
 5448              		.cfi_offset 3, -56
 5449 0019 4889FB   		movq	%rdi, %rbx
 5450 001c 4883EC18 		subq	$24, %rsp
 5451              		.cfi_def_cfa_offset 80
 5452              		.loc 1 306 0
 5453 0020 448B7734 		movl	52(%rdi), %r14d
 5454 0024 85F6     		testl	%esi, %esi
 5455 0026 440F49E6 		cmovns	%esi, %r12d
 5456              	.LVL598:
 5457 002a 48894C24 		movq	%rcx, 8(%rsp)
 5457      08
 5458 002f 4139D6   		cmpl	%edx, %r14d
 5459 0032 440F4FF2 		cmovg	%edx, %r14d
 5460              	.LVL599:
 5461              	.LBB575:
 5462              	.LBB576:
 5463              		.loc 1 1320 0
 5464 0036 8B5760   		movl	96(%rdi), %edx
 5465 0039 4531FF   		xorl	%r15d, %r15d
 5466              	.LBE576:
 5467              	.LBE575:
 5468              		.loc 1 313 0
 5469 003c 4589F5   		movl	%r14d, %r13d
 5470              	.LBB579:
 5471              	.LBB577:
 5472              		.loc 1 1320 0
 5473 003f 31ED     		xorl	%ebp, %ebp
 5474              	.LBE577:
 5475              	.LBE579:
 5476              		.loc 1 313 0
 5477 0041 4529E5   		subl	%r12d, %r13d
 5478              	.LVL600:
 5479              	.LBB580:
 5480              	.LBB578:
 5481              		.loc 1 1320 0
 5482 0044 85D2     		testl	%edx, %edx
 5483 0046 7E2A     		jle	.L444
 5484              	.LVL601:
 5485 0048 0F1F8400 		.p2align 4,,10
 5485      00000000 
 5486              		.p2align 3
 5487              	.L450:
 5488              		.loc 1 1321 0
 5489 0050 488B5370 		movq	112(%rbx), %rdx
 5490 0054 488B4B68 		movq	104(%rbx), %rcx
 5491 0058 4489EE   		movl	%r13d, %esi
 5492 005b 4489E7   		movl	%r12d, %edi
 5493              		.loc 1 1320 0
 5494 005e 83C501   		addl	$1, %ebp
 5495              	.LVL602:
 5496              		.loc 1 1321 0
 5497 0061 4A8B143A 		movq	(%rdx,%r15), %rdx
 5498 0065 42FF1439 		call	*(%rcx,%r15)
 5499              	.LVL603:
 5500 0069 4983C708 		addq	$8, %r15
 5501              		.loc 1 1320 0
 5502 006d 396B60   		cmpl	%ebp, 96(%rbx)
 5503 0070 7FDE     		jg	.L450
 5504              	.LVL604:
 5505              	.L444:
 5506              	.LBE578:
 5507              	.LBE580:
 5508              		.loc 1 314 0
 5509 0072 4489F2   		movl	%r14d, %edx
 5510 0075 4489E6   		movl	%r12d, %esi
 5511 0078 4889DF   		movq	%rbx, %rdi
 5512 007b E8000000 		call	_ZNK14Fl_Text_Buffer10text_rangeEii
 5512      00
 5513              	.LVL605:
 5514              		.loc 1 315 0
 5515 0080 4489F2   		movl	%r14d, %edx
 5516 0083 4489E6   		movl	%r12d, %esi
 5517 0086 4889DF   		movq	%rbx, %rdi
 5518              		.loc 1 314 0
 5519 0089 4989C7   		movq	%rax, %r15
 5520              	.LVL606:
 5521              	.LBB581:
 5522              	.LBB582:
 5523              		.loc 1 1119 0
 5524 008c 4531F6   		xorl	%r14d, %r14d
 5525              	.LVL607:
 5526              	.LBE582:
 5527              	.LBE581:
 5528              		.loc 1 315 0
 5529 008f E8000000 		call	_ZN14Fl_Text_Buffer7remove_Eii
 5529      00
 5530              	.LVL608:
 5531              	.LBB585:
 5532              	.LBB583:
 5533              		.loc 1 1118 0
 5534 0094 488B4424 		movq	8(%rsp), %rax
 5534      08
 5535 0099 803800   		cmpb	$0, (%rax)
 5536 009c 7552     		jne	.L456
 5537              	.L442:
 5538              	.LVL609:
 5539              	.LBE583:
 5540              	.LBE585:
 5541              		.loc 1 317 0
 5542 009e 438D0426 		leal	(%r14,%r12), %eax
 5543              	.LBB586:
 5544              	.LBB587:
 5545              		.loc 1 1309 0
 5546 00a2 31ED     		xorl	%ebp, %ebp
 5547              	.LBE587:
 5548              	.LBE586:
 5549              		.loc 1 317 0
 5550 00a4 894378   		movl	%eax, 120(%rbx)
 5551              	.LVL610:
 5552              	.LBB589:
 5553              	.LBB588:
 5554              		.loc 1 1309 0
 5555 00a7 8B434C   		movl	76(%rbx), %eax
 5556 00aa 85C0     		testl	%eax, %eax
 5557 00ac 7E2B     		jle	.L447
 5558              	.LVL611:
 5559 00ae 6690     		.p2align 4,,10
 5560              		.p2align 3
 5561              	.L451:
 5562              		.loc 1 1310 0
 5563 00b0 488B5358 		movq	88(%rbx), %rdx
 5564              		.loc 1 1311 0
 5565 00b4 488B4350 		movq	80(%rbx), %rax
 5566 00b8 31C9     		xorl	%ecx, %ecx
 5567 00ba 4D89F8   		movq	%r15, %r8
 5568 00bd 4489F6   		movl	%r14d, %esi
 5569 00c0 4489E7   		movl	%r12d, %edi
 5570 00c3 4C8B0CEA 		movq	(%rdx,%rbp,8), %r9
 5571 00c7 4489EA   		movl	%r13d, %edx
 5572 00ca FF14E8   		call	*(%rax,%rbp,8)
 5573              	.LVL612:
 5574 00cd 8D4501   		leal	1(%rbp), %eax
 5575              	.LVL613:
 5576 00d0 4883C501 		addq	$1, %rbp
 5577              		.loc 1 1309 0
 5578 00d4 39434C   		cmpl	%eax, 76(%rbx)
 5579 00d7 7FD7     		jg	.L451
 5580              	.LVL614:
 5581              	.L447:
 5582              	.LBE588:
 5583              	.LBE589:
 5584              		.loc 1 320 0
 5585 00d9 4883C418 		addq	$24, %rsp
 5586              		.cfi_remember_state
 5587              		.cfi_def_cfa_offset 56
 5588              		.loc 1 319 0
 5589 00dd 4C89FF   		movq	%r15, %rdi
 5590              		.loc 1 320 0
 5591 00e0 5B       		popq	%rbx
 5592              		.cfi_restore 3
 5593              		.cfi_def_cfa_offset 48
 5594              	.LVL615:
 5595 00e1 5D       		popq	%rbp
 5596              		.cfi_restore 6
 5597              		.cfi_def_cfa_offset 40
 5598 00e2 415C     		popq	%r12
 5599              		.cfi_restore 12
 5600              		.cfi_def_cfa_offset 32
 5601              	.LVL616:
 5602 00e4 415D     		popq	%r13
 5603              		.cfi_restore 13
 5604              		.cfi_def_cfa_offset 24
 5605 00e6 415E     		popq	%r14
 5606              		.cfi_restore 14
 5607              		.cfi_def_cfa_offset 16
 5608 00e8 415F     		popq	%r15
 5609              		.cfi_restore 15
 5610              		.cfi_def_cfa_offset 8
 5611              	.LVL617:
 5612              		.loc 1 319 0
 5613 00ea E9000000 		jmp	free
 5613      00
 5614              	.LVL618:
 5615 00ef 90       		.p2align 4,,10
 5616              		.p2align 3
 5617              	.L456:
 5618              		.cfi_restore_state
 5619              	.LBB590:
 5620              	.LBB584:
 5621 00f0 488B5424 		movq	8(%rsp), %rdx
 5621      08
 5622 00f5 4489E6   		movl	%r12d, %esi
 5623 00f8 4889DF   		movq	%rbx, %rdi
 5624 00fb E8000000 		call	_ZN14Fl_Text_Buffer7insert_EiPKc.part.9
 5624      00
 5625              	.LVL619:
 5626 0100 4189C6   		movl	%eax, %r14d
 5627 0103 EB99     		jmp	.L442
 5628              	.LVL620:
 5629              		.p2align 4,,10
 5630 0105 0F1F00   		.p2align 3
 5631              	.L454:
 5632              		.cfi_def_cfa_offset 8
 5633              		.cfi_restore 3
 5634              		.cfi_restore 6
 5635              		.cfi_restore 12
 5636              		.cfi_restore 13
 5637              		.cfi_restore 14
 5638              		.cfi_restore 15
 5639 0108 F3C3     		rep ret
 5640              	.LBE584:
 5641              	.LBE590:
 5642              		.cfi_endproc
 5643              	.LFE201:
 5645              		.section	.text.unlikely._ZN14Fl_Text_Buffer7replaceEiiPKc
 5646              	.LCOLDE53:
 5647              		.section	.text._ZN14Fl_Text_Buffer7replaceEiiPKc
 5648              	.LHOTE53:
 5649              		.section	.text.unlikely._ZN14Fl_Text_Buffer18replace_selection_EP17Fl_Text_SelectionPKc,"ax",@prog
 5650              		.align 2
 5651              	.LCOLDB54:
 5652              		.section	.text._ZN14Fl_Text_Buffer18replace_selection_EP17Fl_Text_SelectionPKc,"ax",@progbits
 5653              	.LHOTB54:
 5654              		.align 2
 5655              		.p2align 4,,15
 5656              		.globl	_ZN14Fl_Text_Buffer18replace_selection_EP17Fl_Text_SelectionPKc
 5658              	_ZN14Fl_Text_Buffer18replace_selection_EP17Fl_Text_SelectionPKc:
 5659              	.LFB246:
 5660              		.loc 1 1283 0
 5661              		.cfi_startproc
 5662              	.LVL621:
 5663 0000 55       		pushq	%rbp
 5664              		.cfi_def_cfa_offset 16
 5665              		.cfi_offset 6, -16
 5666 0001 53       		pushq	%rbx
 5667              		.cfi_def_cfa_offset 24
 5668              		.cfi_offset 3, -24
 5669 0002 4883EC28 		subq	$40, %rsp
 5670              		.cfi_def_cfa_offset 64
 5671              		.loc 1 1283 0
 5672 0006 64488B04 		movq	%fs:40, %rax
 5672      25280000 
 5672      00
 5673 000f 48894424 		movq	%rax, 24(%rsp)
 5673      18
 5674 0014 31C0     		xorl	%eax, %eax
 5675              		.loc 1 1284 0
 5676 0016 488B06   		movq	(%rsi), %rax
 5677              	.LBB591:
 5678              	.LBB592:
 5679              		.loc 1 1224 0
 5680 0019 807E0800 		cmpb	$0, 8(%rsi)
 5681              	.LBE592:
 5682              	.LBE591:
 5683              		.loc 1 1284 0
 5684 001d 48890424 		movq	%rax, (%rsp)
 5685 0021 8B4608   		movl	8(%rsi), %eax
 5686 0024 89442408 		movl	%eax, 8(%rsp)
 5687              	.LVL622:
 5688              	.LBB594:
 5689              	.LBB593:
 5690              		.loc 1 1224 0
 5691 0028 7425     		je	.L457
 5692 002a 4889F3   		movq	%rsi, %rbx
 5693              	.LVL623:
 5694              	.LBE593:
 5695              	.LBE594:
 5696              		.loc 1 1292 0
 5697 002d 4889D1   		movq	%rdx, %rcx
 5698 0030 8B5604   		movl	4(%rsi), %edx
 5699              	.LVL624:
 5700 0033 8B36     		movl	(%rsi), %esi
 5701              	.LVL625:
 5702 0035 4889FD   		movq	%rdi, %rbp
 5703 0038 E8000000 		call	_ZN14Fl_Text_Buffer7replaceEiiPKc
 5703      00
 5704              	.LVL626:
 5705              		.loc 1 1296 0
 5706 003d C6430800 		movb	$0, 8(%rbx)
 5707              		.loc 1 1297 0
 5708 0041 4889DA   		movq	%rbx, %rdx
 5709 0044 4889E6   		movq	%rsp, %rsi
 5710 0047 4889EF   		movq	%rbp, %rdi
 5711 004a E8000000 		call	_ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_
 5711      00
 5712              	.LVL627:
 5713              	.L457:
 5714              		.loc 1 1298 0
 5715 004f 488B4424 		movq	24(%rsp), %rax
 5715      18
 5716 0054 64483304 		xorq	%fs:40, %rax
 5716      25280000 
 5716      00
 5717 005d 7507     		jne	.L462
 5718 005f 4883C428 		addq	$40, %rsp
 5719              		.cfi_remember_state
 5720              		.cfi_def_cfa_offset 24
 5721 0063 5B       		popq	%rbx
 5722              		.cfi_def_cfa_offset 16
 5723 0064 5D       		popq	%rbp
 5724              		.cfi_def_cfa_offset 8
 5725 0065 C3       		ret
 5726              	.L462:
 5727              		.cfi_restore_state
 5728 0066 E8000000 		call	__stack_chk_fail
 5728      00
 5729              	.LVL628:
 5730              		.cfi_endproc
 5731              	.LFE246:
 5733              		.section	.text.unlikely._ZN14Fl_Text_Buffer18replace_selection_EP17Fl_Text_SelectionPKc
 5734              	.LCOLDE54:
 5735              		.section	.text._ZN14Fl_Text_Buffer18replace_selection_EP17Fl_Text_SelectionPKc
 5736              	.LHOTE54:
 5737              		.section	.text.unlikely._ZN14Fl_Text_Buffer17replace_selectionEPKc,"ax",@progbits
 5738              		.align 2
 5739              	.LCOLDB55:
 5740              		.section	.text._ZN14Fl_Text_Buffer17replace_selectionEPKc,"ax",@progbits
 5741              	.LHOTB55:
 5742              		.align 2
 5743              		.p2align 4,,15
 5744              		.globl	_ZN14Fl_Text_Buffer17replace_selectionEPKc
 5746              	_ZN14Fl_Text_Buffer17replace_selectionEPKc:
 5747              	.LFB212:
 5748              		.loc 1 540 0
 5749              		.cfi_startproc
 5750              	.LVL629:
 5751              		.loc 1 540 0
 5752 0000 4889F2   		movq	%rsi, %rdx
 5753              		.loc 1 541 0
 5754 0003 488D7710 		leaq	16(%rdi), %rsi
 5755              	.LVL630:
 5756 0007 E9000000 		jmp	_ZN14Fl_Text_Buffer18replace_selection_EP17Fl_Text_SelectionPKc
 5756      00
 5757              	.LVL631:
 5758              		.cfi_endproc
 5759              	.LFE212:
 5761              		.section	.text.unlikely._ZN14Fl_Text_Buffer17replace_selectionEPKc
 5762              	.LCOLDE55:
 5763              		.section	.text._ZN14Fl_Text_Buffer17replace_selectionEPKc
 5764              	.LHOTE55:
 5765              		.section	.text.unlikely._ZN14Fl_Text_Buffer27replace_secondary_selectionEPKc,"ax",@progbits
 5766              		.align 2
 5767              	.LCOLDB56:
 5768              		.section	.text._ZN14Fl_Text_Buffer27replace_secondary_selectionEPKc,"ax",@progbits
 5769              	.LHOTB56:
 5770              		.align 2
 5771              		.p2align 4,,15
 5772              		.globl	_ZN14Fl_Text_Buffer27replace_secondary_selectionEPKc
 5774              	_ZN14Fl_Text_Buffer27replace_secondary_selectionEPKc:
 5775              	.LFB218:
 5776              		.loc 1 601 0
 5777              		.cfi_startproc
 5778              	.LVL632:
 5779              		.loc 1 601 0
 5780 0000 4889F2   		movq	%rsi, %rdx
 5781              		.loc 1 602 0
 5782 0003 488D771C 		leaq	28(%rdi), %rsi
 5783              	.LVL633:
 5784 0007 E9000000 		jmp	_ZN14Fl_Text_Buffer18replace_selection_EP17Fl_Text_SelectionPKc
 5784      00
 5785              	.LVL634:
 5786              		.cfi_endproc
 5787              	.LFE218:
 5789              		.section	.text.unlikely._ZN14Fl_Text_Buffer27replace_secondary_selectionEPKc
 5790              	.LCOLDE56:
 5791              		.section	.text._ZN14Fl_Text_Buffer27replace_secondary_selectionEPKc
 5792              	.LHOTE56:
 5793              		.section	.text.unlikely._ZN14Fl_Text_Buffer6removeEii,"ax",@progbits
 5794              		.align 2
 5795              	.LCOLDB57:
 5796              		.section	.text._ZN14Fl_Text_Buffer6removeEii,"ax",@progbits
 5797              	.LHOTB57:
 5798              		.align 2
 5799              		.p2align 4,,15
 5800              		.globl	_ZN14Fl_Text_Buffer6removeEii
 5802              	_ZN14Fl_Text_Buffer6removeEii:
 5803              	.LFB202:
 5804              		.loc 1 328 0
 5805              		.cfi_startproc
 5806              	.LVL635:
 5807 0000 4157     		pushq	%r15
 5808              		.cfi_def_cfa_offset 16
 5809              		.cfi_offset 15, -16
 5810 0002 4156     		pushq	%r14
 5811              		.cfi_def_cfa_offset 24
 5812              		.cfi_offset 14, -24
 5813 0004 4155     		pushq	%r13
 5814              		.cfi_def_cfa_offset 32
 5815              		.cfi_offset 13, -32
 5816 0006 4154     		pushq	%r12
 5817              		.cfi_def_cfa_offset 40
 5818              		.cfi_offset 12, -40
 5819 0008 55       		pushq	%rbp
 5820              		.cfi_def_cfa_offset 48
 5821              		.cfi_offset 6, -48
 5822 0009 53       		pushq	%rbx
 5823              		.cfi_def_cfa_offset 56
 5824              		.cfi_offset 3, -56
 5825 000a 4889FB   		movq	%rdi, %rbx
 5826 000d 4883EC08 		subq	$8, %rsp
 5827              		.cfi_def_cfa_offset 64
 5828              	.LBB595:
 5829              		.loc 1 330 0
 5830 0011 39D6     		cmpl	%edx, %esi
 5831 0013 7E06     		jle	.L466
 5832 0015 89F0     		movl	%esi, %eax
 5833 0017 89D6     		movl	%edx, %esi
 5834              	.LVL636:
 5835 0019 89C2     		movl	%eax, %edx
 5836              	.LVL637:
 5837              	.L466:
 5838              	.LBE595:
 5839              		.loc 1 335 0
 5840 001b 448B7B34 		movl	52(%rbx), %r15d
 5841 001f 4439FE   		cmpl	%r15d, %esi
 5842 0022 410F4FF7 		cmovg	%r15d, %esi
 5843              	.LVL638:
 5844 0026 31C0     		xorl	%eax, %eax
 5845 0028 85F6     		testl	%esi, %esi
 5846 002a 0F48F0   		cmovs	%eax, %esi
 5847              	.LVL639:
 5848 002d 4439FA   		cmpl	%r15d, %edx
 5849 0030 410F4FD7 		cmovg	%r15d, %edx
 5850              	.LVL640:
 5851 0034 4189F4   		movl	%esi, %r12d
 5852              	.LVL641:
 5853 0037 85D2     		testl	%edx, %edx
 5854 0039 0F49C2   		cmovns	%edx, %eax
 5855              		.loc 1 347 0
 5856 003c 39F0     		cmpl	%esi, %eax
 5857 003e 4189C7   		movl	%eax, %r15d
 5858              	.LVL642:
 5859 0041 0F84B900 		je	.L465
 5859      0000
 5860              	.LBB596:
 5861              	.LBB597:
 5862              		.loc 1 1320 0
 5863 0047 8B5360   		movl	96(%rbx), %edx
 5864              	.LBE597:
 5865              	.LBE596:
 5866              		.loc 1 350 0
 5867 004a 4189C6   		movl	%eax, %r14d
 5868              	.LBB600:
 5869              	.LBB598:
 5870              		.loc 1 1320 0
 5871 004d 31ED     		xorl	%ebp, %ebp
 5872              	.LBE598:
 5873              	.LBE600:
 5874              		.loc 1 350 0
 5875 004f 4129F6   		subl	%esi, %r14d
 5876              	.LVL643:
 5877              	.LBB601:
 5878              	.LBB599:
 5879              		.loc 1 1320 0
 5880 0052 4531ED   		xorl	%r13d, %r13d
 5881 0055 85D2     		testl	%edx, %edx
 5882 0057 7E2A     		jle	.L471
 5883              	.LVL644:
 5884 0059 0F1F8000 		.p2align 4,,10
 5884      000000
 5885              		.p2align 3
 5886              	.L474:
 5887              		.loc 1 1321 0
 5888 0060 488B4370 		movq	112(%rbx), %rax
 5889 0064 4489F6   		movl	%r14d, %esi
 5890 0067 4489E7   		movl	%r12d, %edi
 5891              		.loc 1 1320 0
 5892 006a 4183C501 		addl	$1, %r13d
 5893              	.LVL645:
 5894              		.loc 1 1321 0
 5895 006e 488B1428 		movq	(%rax,%rbp), %rdx
 5896 0072 488B4368 		movq	104(%rbx), %rax
 5897 0076 FF1428   		call	*(%rax,%rbp)
 5898              	.LVL646:
 5899 0079 4883C508 		addq	$8, %rbp
 5900              		.loc 1 1320 0
 5901 007d 44396B60 		cmpl	%r13d, 96(%rbx)
 5902 0081 7FDD     		jg	.L474
 5903              	.LVL647:
 5904              	.L471:
 5905              	.LBE599:
 5906              	.LBE601:
 5907              		.loc 1 352 0
 5908 0083 4489FA   		movl	%r15d, %edx
 5909 0086 4489E6   		movl	%r12d, %esi
 5910 0089 4889DF   		movq	%rbx, %rdi
 5911 008c E8000000 		call	_ZNK14Fl_Text_Buffer10text_rangeEii
 5911      00
 5912              	.LVL648:
 5913              		.loc 1 353 0
 5914 0091 4489FA   		movl	%r15d, %edx
 5915 0094 4489E6   		movl	%r12d, %esi
 5916 0097 4889DF   		movq	%rbx, %rdi
 5917              		.loc 1 352 0
 5918 009a 4989C5   		movq	%rax, %r13
 5919              	.LVL649:
 5920              		.loc 1 353 0
 5921 009d E8000000 		call	_ZN14Fl_Text_Buffer7remove_Eii
 5921      00
 5922              	.LVL650:
 5923              	.LBB602:
 5924              	.LBB603:
 5925              		.loc 1 1309 0
 5926 00a2 8B434C   		movl	76(%rbx), %eax
 5927              	.LBE603:
 5928              	.LBE602:
 5929              		.loc 1 354 0
 5930 00a5 44896378 		movl	%r12d, 120(%rbx)
 5931              	.LVL651:
 5932              	.LBB605:
 5933              	.LBB604:
 5934              		.loc 1 1309 0
 5935 00a9 85C0     		testl	%eax, %eax
 5936 00ab 7E35     		jle	.L469
 5937 00ad 31ED     		xorl	%ebp, %ebp
 5938 00af 4531FF   		xorl	%r15d, %r15d
 5939              	.LVL652:
 5940              		.p2align 4,,10
 5941 00b2 660F1F44 		.p2align 3
 5941      0000
 5942              	.L473:
 5943              		.loc 1 1310 0
 5944 00b8 488B5358 		movq	88(%rbx), %rdx
 5945              		.loc 1 1311 0
 5946 00bc 488B4350 		movq	80(%rbx), %rax
 5947 00c0 31C9     		xorl	%ecx, %ecx
 5948 00c2 31F6     		xorl	%esi, %esi
 5949 00c4 4D89E8   		movq	%r13, %r8
 5950 00c7 4489E7   		movl	%r12d, %edi
 5951              		.loc 1 1309 0
 5952 00ca 4183C701 		addl	$1, %r15d
 5953              	.LVL653:
 5954              		.loc 1 1311 0
 5955 00ce 4C8B0C2A 		movq	(%rdx,%rbp), %r9
 5956 00d2 4489F2   		movl	%r14d, %edx
 5957 00d5 FF1428   		call	*(%rax,%rbp)
 5958              	.LVL654:
 5959 00d8 4883C508 		addq	$8, %rbp
 5960              		.loc 1 1309 0
 5961 00dc 44397B4C 		cmpl	%r15d, 76(%rbx)
 5962 00e0 7FD6     		jg	.L473
 5963              	.LVL655:
 5964              	.L469:
 5965              	.LBE604:
 5966              	.LBE605:
 5967              		.loc 1 357 0
 5968 00e2 4883C408 		addq	$8, %rsp
 5969              		.cfi_remember_state
 5970              		.cfi_def_cfa_offset 56
 5971              		.loc 1 356 0
 5972 00e6 4C89EF   		movq	%r13, %rdi
 5973              		.loc 1 357 0
 5974 00e9 5B       		popq	%rbx
 5975              		.cfi_def_cfa_offset 48
 5976              	.LVL656:
 5977 00ea 5D       		popq	%rbp
 5978              		.cfi_def_cfa_offset 40
 5979 00eb 415C     		popq	%r12
 5980              		.cfi_def_cfa_offset 32
 5981              	.LVL657:
 5982 00ed 415D     		popq	%r13
 5983              		.cfi_def_cfa_offset 24
 5984              	.LVL658:
 5985 00ef 415E     		popq	%r14
 5986              		.cfi_def_cfa_offset 16
 5987 00f1 415F     		popq	%r15
 5988              		.cfi_def_cfa_offset 8
 5989              		.loc 1 356 0
 5990 00f3 E9000000 		jmp	free
 5990      00
 5991              	.LVL659:
 5992 00f8 0F1F8400 		.p2align 4,,10
 5992      00000000 
 5993              		.p2align 3
 5994              	.L465:
 5995              		.cfi_restore_state
 5996              		.loc 1 357 0
 5997 0100 4883C408 		addq	$8, %rsp
 5998              		.cfi_def_cfa_offset 56
 5999 0104 5B       		popq	%rbx
 6000              		.cfi_def_cfa_offset 48
 6001              	.LVL660:
 6002 0105 5D       		popq	%rbp
 6003              		.cfi_def_cfa_offset 40
 6004 0106 415C     		popq	%r12
 6005              		.cfi_def_cfa_offset 32
 6006 0108 415D     		popq	%r13
 6007              		.cfi_def_cfa_offset 24
 6008 010a 415E     		popq	%r14
 6009              		.cfi_def_cfa_offset 16
 6010 010c 415F     		popq	%r15
 6011              		.cfi_def_cfa_offset 8
 6012 010e C3       		ret
 6013              		.cfi_endproc
 6014              	.LFE202:
 6016              		.section	.text.unlikely._ZN14Fl_Text_Buffer6removeEii
 6017              	.LCOLDE57:
 6018              		.section	.text._ZN14Fl_Text_Buffer6removeEii
 6019              	.LHOTE57:
 6020              		.section	.text.unlikely._ZN14Fl_Text_Buffer4undoEPi,"ax",@progbits
 6021              		.align 2
 6022              	.LCOLDB58:
 6023              		.section	.text._ZN14Fl_Text_Buffer4undoEPi,"ax",@progbits
 6024              	.LHOTB58:
 6025              		.align 2
 6026              		.p2align 4,,15
 6027              		.globl	_ZN14Fl_Text_Buffer4undoEPi
 6029              	_ZN14Fl_Text_Buffer4undoEPi:
 6030              	.LFB204:
 6031              		.loc 1 408 0
 6032              		.cfi_startproc
 6033              	.LVL661:
 6034 0000 4156     		pushq	%r14
 6035              		.cfi_def_cfa_offset 16
 6036              		.cfi_offset 14, -16
 6037 0002 4155     		pushq	%r13
 6038              		.cfi_def_cfa_offset 24
 6039              		.cfi_offset 13, -24
 6040              		.loc 1 410 0
 6041 0004 31C0     		xorl	%eax, %eax
 6042              		.loc 1 408 0
 6043 0006 4154     		pushq	%r12
 6044              		.cfi_def_cfa_offset 32
 6045              		.cfi_offset 12, -32
 6046 0008 55       		pushq	%rbp
 6047              		.cfi_def_cfa_offset 40
 6048              		.cfi_offset 6, -40
 6049 0009 53       		pushq	%rbx
 6050              		.cfi_def_cfa_offset 48
 6051              		.cfi_offset 3, -48
 6052              		.loc 1 409 0
 6053 000a 488B1D00 		movq	_ZL10undowidget(%rip), %rbx
 6053      000000
 6054 0011 4839FB   		cmpq	%rdi, %rbx
 6055 0014 740A     		je	.L508
 6056              	.LVL662:
 6057              	.L494:
 6058              		.loc 1 442 0
 6059 0016 5B       		popq	%rbx
 6060              		.cfi_remember_state
 6061              		.cfi_def_cfa_offset 40
 6062 0017 5D       		popq	%rbp
 6063              		.cfi_def_cfa_offset 32
 6064 0018 415C     		popq	%r12
 6065              		.cfi_def_cfa_offset 24
 6066 001a 415D     		popq	%r13
 6067              		.cfi_def_cfa_offset 16
 6068 001c 415E     		popq	%r14
 6069              		.cfi_def_cfa_offset 8
 6070 001e C3       		ret
 6071              	.LVL663:
 6072 001f 90       		.p2align 4,,10
 6073              		.p2align 3
 6074              	.L508:
 6075              		.cfi_restore_state
 6076              		.loc 1 409 0 discriminator 1
 6077 0020 4C632500 		movslq	_ZL7undocut(%rip), %r12
 6077      000000
 6078 0027 4889F5   		movq	%rsi, %rbp
 6079 002a 8B050000 		movl	_ZL10undoinsert(%rip), %eax
 6079      0000
 6080 0030 4585E4   		testl	%r12d, %r12d
 6081 0033 7453     		je	.L509
 6082              	.LVL664:
 6083              		.loc 1 416 0
 6084 0035 85C0     		testl	%eax, %eax
 6085              		.loc 1 414 0
 6086 0037 448B2D00 		movl	_ZL6undoat(%rip), %r13d
 6086      000000
 6087              	.LVL665:
 6088              		.loc 1 416 0
 6089 003e 0F85FC00 		jne	.L510
 6089      0000
 6090              	.LBB606:
 6091              		.loc 1 433 0
 6092 0044 418D7C24 		leal	1(%r12), %edi
 6092      01
 6093              	.LVL666:
 6094 0049 E8000000 		call	_ZL14undobuffersizei
 6094      00
 6095              	.LVL667:
 6096              		.loc 1 434 0
 6097 004e 488B1500 		movq	_ZL10undobuffer(%rip), %rdx
 6097      000000
 6098              	.LBB607:
 6099              	.LBB608:
 6100              		.loc 1 275 0
 6101 0055 4885D2   		testq	%rdx, %rdx
 6102              	.LBE608:
 6103              	.LBE607:
 6104              		.loc 1 434 0
 6105 0058 42C60422 		movb	$0, (%rdx,%r12)
 6105      00
 6106              	.LVL668:
 6107              	.LBB611:
 6108              	.LBB609:
 6109              		.loc 1 275 0
 6110 005d 7409     		je	.L485
 6111 005f 803A00   		cmpb	$0, (%rdx)
 6112 0062 0F85A000 		jne	.L511
 6112      0000
 6113              	.LVL669:
 6114              	.L485:
 6115              	.LBE609:
 6116              	.LBE611:
 6117              		.loc 1 436 0
 6118 0068 4885ED   		testq	%rbp, %rbp
 6119 006b 7406     		je	.L486
 6120              		.loc 1 437 0
 6121 006d 8B4378   		movl	120(%rbx), %eax
 6122 0070 894500   		movl	%eax, 0(%rbp)
 6123              	.L486:
 6124              		.loc 1 438 0
 6125 0073 C7050000 		movl	$0, _ZL11undoyankcut(%rip)
 6125      00000000 
 6125      0000
 6126              	.LBE606:
 6127              		.loc 1 441 0
 6128 007d B8010000 		movl	$1, %eax
 6128      00
 6129              	.LBB614:
 6130 0082 EB92     		jmp	.L494
 6131              	.LVL670:
 6132              		.p2align 4,,10
 6133 0084 0F1F4000 		.p2align 3
 6134              	.L509:
 6135              	.LBE614:
 6136              		.loc 1 409 0 discriminator 2
 6137 0088 85C0     		testl	%eax, %eax
 6138 008a 7514     		jne	.L479
 6139              		.loc 1 409 0 is_stmt 0 discriminator 3
 6140 008c 807B7C00 		cmpb	$0, 124(%rbx)
 6141 0090 7484     		je	.L494
 6142              	.LVL671:
 6143              	.L506:
 6144              		.loc 1 442 0 is_stmt 1
 6145 0092 5B       		popq	%rbx
 6146              		.cfi_remember_state
 6147              		.cfi_def_cfa_offset 40
 6148              		.loc 1 441 0
 6149 0093 B8010000 		movl	$1, %eax
 6149      00
 6150              		.loc 1 442 0
 6151 0098 5D       		popq	%rbp
 6152              		.cfi_def_cfa_offset 32
 6153              	.LVL672:
 6154 0099 415C     		popq	%r12
 6155              		.cfi_def_cfa_offset 24
 6156 009b 415D     		popq	%r13
 6157              		.cfi_def_cfa_offset 16
 6158 009d 415E     		popq	%r14
 6159              		.cfi_def_cfa_offset 8
 6160 009f C3       		ret
 6161              	.LVL673:
 6162              		.p2align 4,,10
 6163              		.p2align 3
 6164              	.L479:
 6165              		.cfi_restore_state
 6166              		.loc 1 414 0
 6167 00a0 448B2D00 		movl	_ZL6undoat(%rip), %r13d
 6167      000000
 6168              		.loc 1 416 0
 6169 00a7 4C632500 		movslq	_ZL11undoyankcut(%rip), %r12
 6169      000000
 6170              		.loc 1 414 0
 6171 00ae 4589EE   		movl	%r13d, %r14d
 6172 00b1 4129C6   		subl	%eax, %r14d
 6173              	.LVL674:
 6174              		.loc 1 416 0
 6175 00b4 4585E4   		testl	%r12d, %r12d
 6176 00b7 745F     		je	.L512
 6177              	.LVL675:
 6178              	.L487:
 6179              	.LBB615:
 6180              	.LBB612:
 6181              		.loc 1 421 0
 6182 00b9 418D7C24 		leal	1(%r12), %edi
 6182      01
 6183              	.LVL676:
 6184 00be E8000000 		call	_ZL14undobuffersizei
 6184      00
 6185              	.LVL677:
 6186              		.loc 1 422 0
 6187 00c3 488B3D00 		movq	_ZL10undobuffer(%rip), %rdi
 6187      000000
 6188 00ca 42C60427 		movb	$0, (%rdi,%r12)
 6188      00
 6189              		.loc 1 423 0
 6190 00cf E8000000 		call	strdup
 6190      00
 6191              	.LVL678:
 6192              		.loc 1 424 0
 6193 00d4 8B150000 		movl	_ZL6undoat(%rip), %edx
 6193      0000
 6194 00da 4889C1   		movq	%rax, %rcx
 6195 00dd 4489F6   		movl	%r14d, %esi
 6196 00e0 4889DF   		movq	%rbx, %rdi
 6197              		.loc 1 423 0
 6198 00e3 4989C4   		movq	%rax, %r12
 6199              	.LVL679:
 6200              		.loc 1 424 0
 6201 00e6 E8000000 		call	_ZN14Fl_Text_Buffer7replaceEiiPKc
 6201      00
 6202              	.LVL680:
 6203              		.loc 1 425 0
 6204 00eb 4885ED   		testq	%rbp, %rbp
 6205 00ee 7406     		je	.L483
 6206              		.loc 1 426 0
 6207 00f0 8B4378   		movl	120(%rbx), %eax
 6208 00f3 894500   		movl	%eax, 0(%rbp)
 6209              	.L483:
 6210              		.loc 1 427 0
 6211 00f6 4C89E7   		movq	%r12, %rdi
 6212 00f9 E8000000 		call	free
 6212      00
 6213              	.LVL681:
 6214              	.LBE612:
 6215              	.LBE615:
 6216              		.loc 1 441 0
 6217 00fe B8010000 		movl	$1, %eax
 6217      00
 6218              	.LBB616:
 6219 0103 E90EFFFF 		jmp	.L494
 6219      FF
 6220              	.LVL682:
 6221              	.L511:
 6222              	.LBB613:
 6223              	.LBB610:
 6224 0108 4489EE   		movl	%r13d, %esi
 6225 010b 4889DF   		movq	%rbx, %rdi
 6226 010e E8000000 		call	_ZN14Fl_Text_Buffer6insertEiPKc.part.10
 6226      00
 6227              	.LVL683:
 6228 0113 E950FFFF 		jmp	.L485
 6228      FF
 6229              	.LVL684:
 6230              	.L512:
 6231              	.LBE610:
 6232              	.LBE613:
 6233              		.loc 1 429 0
 6234 0118 4489EA   		movl	%r13d, %edx
 6235 011b 4489F6   		movl	%r14d, %esi
 6236              	.LVL685:
 6237 011e 4889DF   		movq	%rbx, %rdi
 6238              	.LVL686:
 6239 0121 E8000000 		call	_ZN14Fl_Text_Buffer6removeEii
 6239      00
 6240              	.LVL687:
 6241              		.loc 1 430 0
 6242 0126 4885ED   		testq	%rbp, %rbp
 6243 0129 0F8463FF 		je	.L506
 6243      FFFF
 6244              		.loc 1 431 0
 6245 012f 8B4378   		movl	120(%rbx), %eax
 6246 0132 894500   		movl	%eax, 0(%rbp)
 6247 0135 E958FFFF 		jmp	.L506
 6247      FF
 6248              	.LVL688:
 6249 013a 660F1F44 		.p2align 4,,10
 6249      0000
 6250              		.p2align 3
 6251              	.L510:
 6252              	.LBE616:
 6253              		.loc 1 414 0
 6254 0140 4589EE   		movl	%r13d, %r14d
 6255 0143 4129C6   		subl	%eax, %r14d
 6256              	.LVL689:
 6257 0146 E96EFFFF 		jmp	.L487
 6257      FF
 6258              		.cfi_endproc
 6259              	.LFE204:
 6261              		.section	.text.unlikely._ZN14Fl_Text_Buffer4undoEPi
 6262              	.LCOLDE58:
 6263              		.section	.text._ZN14Fl_Text_Buffer4undoEPi
 6264              	.LHOTE58:
 6265              		.section	.text.unlikely._ZN14Fl_Text_Buffer17remove_selection_EP17Fl_Text_Selection,"ax",@progbits
 6266              		.align 2
 6267              	.LCOLDB59:
 6268              		.section	.text._ZN14Fl_Text_Buffer17remove_selection_EP17Fl_Text_Selection,"ax",@progbits
 6269              	.LHOTB59:
 6270              		.align 2
 6271              		.p2align 4,,15
 6272              		.globl	_ZN14Fl_Text_Buffer17remove_selection_EP17Fl_Text_Selection
 6274              	_ZN14Fl_Text_Buffer17remove_selection_EP17Fl_Text_Selection:
 6275              	.LFB245:
 6276              		.loc 1 1267 0
 6277              		.cfi_startproc
 6278              	.LVL690:
 6279              	.LBB617:
 6280              	.LBB618:
 6281              		.loc 1 1224 0
 6282 0000 807E0800 		cmpb	$0, 8(%rsi)
 6283 0004 740A     		je	.L513
 6284              	.LVL691:
 6285              	.LBE618:
 6286              	.LBE617:
 6287              		.loc 1 1272 0
 6288 0006 8B5604   		movl	4(%rsi), %edx
 6289 0009 8B36     		movl	(%rsi), %esi
 6290              	.LVL692:
 6291 000b E9000000 		jmp	_ZN14Fl_Text_Buffer6removeEii
 6291      00
 6292              	.LVL693:
 6293              		.p2align 4,,10
 6294              		.p2align 3
 6295              	.L513:
 6296 0010 F3C3     		rep ret
 6297              		.cfi_endproc
 6298              	.LFE245:
 6300              		.section	.text.unlikely._ZN14Fl_Text_Buffer17remove_selection_EP17Fl_Text_Selection
 6301              	.LCOLDE59:
 6302              		.section	.text._ZN14Fl_Text_Buffer17remove_selection_EP17Fl_Text_Selection
 6303              	.LHOTE59:
 6304              		.section	.text.unlikely._ZN14Fl_Text_Buffer16remove_selectionEv,"ax",@progbits
 6305              		.align 2
 6306              	.LCOLDB60:
 6307              		.section	.text._ZN14Fl_Text_Buffer16remove_selectionEv,"ax",@progbits
 6308              	.LHOTB60:
 6309              		.align 2
 6310              		.p2align 4,,15
 6311              		.globl	_ZN14Fl_Text_Buffer16remove_selectionEv
 6313              	_ZN14Fl_Text_Buffer16remove_selectionEv:
 6314              	.LFB211:
 6315              		.loc 1 531 0
 6316              		.cfi_startproc
 6317              	.LVL694:
 6318              	.LBB619:
 6319              	.LBB620:
 6320              	.LBB621:
 6321              	.LBB622:
 6322              		.loc 1 1224 0
 6323 0000 807F1800 		cmpb	$0, 24(%rdi)
 6324 0004 7412     		je	.L515
 6325              	.LVL695:
 6326              	.LBE622:
 6327              	.LBE621:
 6328              		.loc 1 1272 0
 6329 0006 8B5714   		movl	20(%rdi), %edx
 6330 0009 8B7710   		movl	16(%rdi), %esi
 6331 000c E9000000 		jmp	_ZN14Fl_Text_Buffer6removeEii
 6331      00
 6332              	.LVL696:
 6333              		.p2align 4,,10
 6334 0011 0F1F8000 		.p2align 3
 6334      000000
 6335              	.L515:
 6336 0018 F3C3     		rep ret
 6337              	.LBE620:
 6338              	.LBE619:
 6339              		.cfi_endproc
 6340              	.LFE211:
 6342              		.section	.text.unlikely._ZN14Fl_Text_Buffer16remove_selectionEv
 6343              	.LCOLDE60:
 6344              		.section	.text._ZN14Fl_Text_Buffer16remove_selectionEv
 6345              	.LHOTE60:
 6346              		.section	.text.unlikely._ZN14Fl_Text_Buffer26remove_secondary_selectionEv,"ax",@progbits
 6347              		.align 2
 6348              	.LCOLDB61:
 6349              		.section	.text._ZN14Fl_Text_Buffer26remove_secondary_selectionEv,"ax",@progbits
 6350              	.LHOTB61:
 6351              		.align 2
 6352              		.p2align 4,,15
 6353              		.globl	_ZN14Fl_Text_Buffer26remove_secondary_selectionEv
 6355              	_ZN14Fl_Text_Buffer26remove_secondary_selectionEv:
 6356              	.LFB217:
 6357              		.loc 1 592 0
 6358              		.cfi_startproc
 6359              	.LVL697:
 6360              	.LBB623:
 6361              	.LBB624:
 6362              	.LBB625:
 6363              	.LBB626:
 6364              		.loc 1 1224 0
 6365 0000 807F2400 		cmpb	$0, 36(%rdi)
 6366 0004 7412     		je	.L517
 6367              	.LVL698:
 6368              	.LBE626:
 6369              	.LBE625:
 6370              		.loc 1 1272 0
 6371 0006 8B5720   		movl	32(%rdi), %edx
 6372 0009 8B771C   		movl	28(%rdi), %esi
 6373 000c E9000000 		jmp	_ZN14Fl_Text_Buffer6removeEii
 6373      00
 6374              	.LVL699:
 6375              		.p2align 4,,10
 6376 0011 0F1F8000 		.p2align 3
 6376      000000
 6377              	.L517:
 6378 0018 F3C3     		rep ret
 6379              	.LBE624:
 6380              	.LBE623:
 6381              		.cfi_endproc
 6382              	.LFE217:
 6384              		.section	.text.unlikely._ZN14Fl_Text_Buffer26remove_secondary_selectionEv
 6385              	.LCOLDE61:
 6386              		.section	.text._ZN14Fl_Text_Buffer26remove_secondary_selectionEv
 6387              	.LHOTE61:
 6388              		.section	.text.unlikely._ZN17Fl_Text_Selection6updateEiii,"ax",@progbits
 6389              		.align 2
 6390              	.LCOLDB62:
 6391              		.section	.text._ZN17Fl_Text_Selection6updateEiii,"ax",@progbits
 6392              	.LHOTB62:
 6393              		.align 2
 6394              		.p2align 4,,15
 6395              		.globl	_ZN17Fl_Text_Selection6updateEiii
 6397              	_ZN17Fl_Text_Selection6updateEiii:
 6398              	.LFB253:
 6399              		.loc 1 1442 0
 6400              		.cfi_startproc
 6401              	.LVL700:
 6402              		.loc 1 1443 0
 6403 0000 807F0800 		cmpb	$0, 8(%rdi)
 6404 0004 740A     		je	.L519
 6405 0006 E9000000 		jmp	_ZN17Fl_Text_Selection6updateEiii.part.8
 6405      00
 6406              	.LVL701:
 6407 000b 0F1F4400 		.p2align 4,,10
 6407      00
 6408              		.p2align 3
 6409              	.L519:
 6410 0010 F3C3     		rep ret
 6411              		.cfi_endproc
 6412              	.LFE253:
 6414              		.section	.text.unlikely._ZN17Fl_Text_Selection6updateEiii
 6415              	.LCOLDE62:
 6416              		.section	.text._ZN17Fl_Text_Selection6updateEiii
 6417              	.LHOTE62:
 6418              		.section	.rodata.str1.1
 6419              	.LC63:
 6420 0004 7200     		.string	"r"
 6421              		.section	.text.unlikely._ZN14Fl_Text_Buffer10insertfileEPKcii,"ax",@progbits
 6422              		.align 2
 6423              	.LCOLDB64:
 6424              		.section	.text._ZN14Fl_Text_Buffer10insertfileEPKcii,"ax",@progbits
 6425              	.LHOTB64:
 6426              		.align 2
 6427              		.p2align 4,,15
 6428              		.globl	_ZN14Fl_Text_Buffer10insertfileEPKcii
 6430              	_ZN14Fl_Text_Buffer10insertfileEPKcii:
 6431              	.LFB257:
 6432              		.loc 1 1671 0
 6433              		.cfi_startproc
 6434              	.LVL702:
 6435 0000 4157     		pushq	%r15
 6436              		.cfi_def_cfa_offset 16
 6437              		.cfi_offset 15, -16
 6438 0002 4156     		pushq	%r14
 6439              		.cfi_def_cfa_offset 24
 6440              		.cfi_offset 14, -24
 6441 0004 4155     		pushq	%r13
 6442              		.cfi_def_cfa_offset 32
 6443              		.cfi_offset 13, -32
 6444 0006 4154     		pushq	%r12
 6445              		.cfi_def_cfa_offset 40
 6446              		.cfi_offset 12, -40
 6447 0008 4989FC   		movq	%rdi, %r12
 6448 000b 55       		pushq	%rbp
 6449              		.cfi_def_cfa_offset 48
 6450              		.cfi_offset 6, -48
 6451 000c 53       		pushq	%rbx
 6452              		.cfi_def_cfa_offset 56
 6453              		.cfi_offset 3, -56
 6454 000d 4889F7   		movq	%rsi, %rdi
 6455              	.LVL703:
 6456              		.loc 1 1673 0
 6457 0010 BE000000 		movl	$.LC63, %esi
 6457      00
 6458              	.LVL704:
 6459              		.loc 1 1671 0
 6460 0015 4863D9   		movslq	%ecx, %rbx
 6461 0018 4881ECC8 		subq	$200, %rsp
 6461      000000
 6462              		.cfi_def_cfa_offset 256
 6463              		.loc 1 1671 0
 6464 001f 64488B04 		movq	%fs:40, %rax
 6464      25280000 
 6464      00
 6465 0028 48898424 		movq	%rax, 184(%rsp)
 6465      B8000000 
 6466 0030 31C0     		xorl	%eax, %eax
 6467 0032 89542424 		movl	%edx, 36(%rsp)
 6468              		.loc 1 1673 0
 6469 0036 E8000000 		call	fl_fopen
 6469      00
 6470              	.LVL705:
 6471 003b 4889C1   		movq	%rax, %rcx
 6472 003e 48894424 		movq	%rax, 24(%rsp)
 6472      18
 6473              	.LVL706:
 6474              		.loc 1 1674 0
 6475 0043 B8010000 		movl	$1, %eax
 6475      00
 6476              	.LVL707:
 6477              		.loc 1 1673 0
 6478 0048 4885C9   		testq	%rcx, %rcx
 6479 004b 0F840C02 		je	.L522
 6479      0000
 6480              		.loc 1 1675 0
 6481 0051 8D7B01   		leal	1(%rbx), %edi
 6482 0054 4863FF   		movslq	%edi, %rdi
 6483 0057 E8000000 		call	_Znam
 6483      00
 6484              	.LVL708:
 6485 005c 4801C3   		addq	%rax, %rbx
 6486              	.LVL709:
 6487 005f 48894424 		movq	%rax, 16(%rsp)
 6487      10
 6488              	.LVL710:
 6489              		.loc 1 1679 0
 6490 0064 488D4424 		leaq	80(%rsp), %rax
 6490      50
 6491              	.LVL711:
 6492              		.loc 1 1678 0
 6493 0069 41C70424 		movl	$0, (%r12)
 6493      00000000 
 6494              	.LVL712:
 6495 0071 48891C24 		movq	%rbx, (%rsp)
 6496              		.loc 1 1679 0
 6497 0075 48894424 		movq	%rax, 8(%rsp)
 6497      08
 6498              	.LVL713:
 6499 007a 660F1F44 		.p2align 4,,10
 6499      0000
 6500              		.p2align 3
 6501              	.L536:
 6502              		.loc 1 1675 0
 6503 0080 4C8B7C24 		movq	16(%rsp), %r15
 6503      10
 6504              	.LBB643:
 6505              	.LBB644:
 6506              		.loc 1 1618 0
 6507 0085 4C3B3C24 		cmpq	(%rsp), %r15
 6508              		.loc 1 1616 0
 6509 0089 488D5C24 		leaq	80(%rsp), %rbx
 6509      50
 6510              	.LVL714:
 6511              		.loc 1 1618 0
 6512 008e 0F834101 		jnb	.L523
 6512      0000
 6513              	.LVL715:
 6514              	.L570:
 6515              		.loc 1 1619 0
 6516 0094 483B5C24 		cmpq	8(%rsp), %rbx
 6516      08
 6517 0099 7236     		jb	.L524
 6518              	.LVL716:
 6519              	.LBB645:
 6520              	.LBB646:
 6521              		.file 4 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
   1:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** /* Checking macros for stdio functions.
   2:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    Copyright (C) 2004-2016 Free Software Foundation, Inc.
   3:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    This file is part of the GNU C Library.
   4:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
   5:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    The GNU C Library is free software; you can redistribute it and/or
   6:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    modify it under the terms of the GNU Lesser General Public
   7:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    License as published by the Free Software Foundation; either
   8:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    version 2.1 of the License, or (at your option) any later version.
   9:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  10:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    The GNU C Library is distributed in the hope that it will be useful,
  11:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  12:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  13:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    Lesser General Public License for more details.
  14:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  15:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    You should have received a copy of the GNU Lesser General Public
  16:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    License along with the GNU C Library; if not, see
  17:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    <http://www.gnu.org/licenses/>.  */
  18:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  19:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #ifndef _STDIO_H
  20:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # error "Never include <bits/stdio2.h> directly; use <stdio.h> instead."
  21:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  22:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  23:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
  24:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  const char *__restrict __format, ...) __THROW;
  25:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
  26:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __format,
  27:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   _G_va_list __ap) __THROW;
  28:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  29:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #ifdef __va_arg_pack
  30:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  31:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (sprintf (char *__restrict __s, const char *__restrict __fmt, ...))
  32:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  33:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___sprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  __bos (__s), __fmt, __va_arg_pack ());
  35:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  36:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #elif !defined __cplusplus
  37:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # define sprintf(str, ...) \
  38:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __builtin___sprintf_chk (str, __USE_FORTIFY_LEVEL - 1, __bos (str), \
  39:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   __VA_ARGS__)
  40:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  41:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  42:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  43:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vsprintf (char *__restrict __s, const char *__restrict __fmt,
  44:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		 _G_va_list __ap))
  45:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  46:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___vsprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
  47:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				   __bos (__s), __fmt, __ap);
  48:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  49:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  50:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if defined __USE_ISOC99 || defined __USE_UNIX98
  51:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  52:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
  53:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __slen, const char *__restrict __format,
  54:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   ...) __THROW;
  55:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
  56:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    size_t __slen, const char *__restrict __format,
  57:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    _G_va_list __ap) __THROW;
  58:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  59:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __va_arg_pack
  60:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  61:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (snprintf (char *__restrict __s, size_t __n,
  62:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		 const char *__restrict __fmt, ...))
  63:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  64:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___snprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				   __bos (__s), __fmt, __va_arg_pack ());
  66:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  67:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # elif !defined __cplusplus
  68:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define snprintf(str, len, ...) \
  69:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __builtin___snprintf_chk (str, len, __USE_FORTIFY_LEVEL - 1, __bos (str), \
  70:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    __VA_ARGS__)
  71:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
  72:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  73:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  74:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vsnprintf (char *__restrict __s, size_t __n,
  75:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		  const char *__restrict __fmt, _G_va_list __ap))
  76:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  77:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___vsnprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
  78:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				    __bos (__s), __fmt, __ap);
  79:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  80:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  81:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  82:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  83:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if __USE_FORTIFY_LEVEL > 1
  84:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  85:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
  86:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  const char *__restrict __format, ...);
  87:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __printf_chk (int __flag, const char *__restrict __format, ...);
  88:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
  89:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __format, _G_va_list __ap);
  90:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vprintf_chk (int __flag, const char *__restrict __format,
  91:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  _G_va_list __ap);
  92:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  93:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __va_arg_pack
  94:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  95:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
  96:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  97:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __fprintf_chk (__stream, __USE_FORTIFY_LEVEL - 1, __fmt,
  98:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			__va_arg_pack ());
  99:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 100:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 101:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 102:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** printf (const char *__restrict __fmt, ...)
 103:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 104:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __printf_chk (__USE_FORTIFY_LEVEL - 1, __fmt, __va_arg_pack ());
 105:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 106:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # elif !defined __cplusplus
 107:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define printf(...) \
 108:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __printf_chk (__USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 109:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define fprintf(stream, ...) \
 110:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __fprintf_chk (stream, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 111:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
 112:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 113:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 114:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** vprintf (const char *__restrict __fmt, _G_va_list __ap)
 115:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 116:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #ifdef __USE_EXTERN_INLINES
 117:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vfprintf_chk (stdout, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 118:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #else
 119:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vprintf_chk (__USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 120:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
 121:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 122:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 123:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 124:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** vfprintf (FILE *__restrict __stream,
 125:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	  const char *__restrict __fmt, _G_va_list __ap)
 126:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 127:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vfprintf_chk (__stream, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 128:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 129:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 130:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __USE_XOPEN2K8
 131:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
 132:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  ...) __attribute__ ((__format__ (__printf__, 3, 4)));
 133:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vdprintf_chk (int __fd, int __flag,
 134:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __fmt, _G_va_list __arg)
 135:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __attribute__ ((__format__ (__printf__, 3, 0)));
 136:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 137:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  ifdef __va_arg_pack
 138:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 139:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** dprintf (int __fd, const char *__restrict __fmt, ...)
 140:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 141:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __dprintf_chk (__fd, __USE_FORTIFY_LEVEL - 1, __fmt,
 142:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			__va_arg_pack ());
 143:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 144:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  elif !defined __cplusplus
 145:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define dprintf(fd, ...) \
 146:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __dprintf_chk (fd, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 147:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  endif
 148:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 149:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 150:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** vdprintf (int __fd, const char *__restrict __fmt, _G_va_list __ap)
 151:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 152:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vdprintf_chk (__fd, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 153:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 154:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
 155:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 156:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __USE_GNU
 157:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 158:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __asprintf_chk (char **__restrict __ptr, int __flag,
 159:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __fmt, ...)
 160:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 4))) __wur;
 161:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vasprintf_chk (char **__restrict __ptr, int __flag,
 162:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    const char *__restrict __fmt, _G_va_list __arg)
 163:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 0))) __wur;
 164:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __obstack_printf_chk (struct obstack *__restrict __obstack,
 165:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				 int __flag, const char *__restrict __format,
 166:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				 ...)
 167:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 4)));
 168:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __obstack_vprintf_chk (struct obstack *__restrict __obstack,
 169:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  int __flag,
 170:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  const char *__restrict __format,
 171:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  _G_va_list __args)
 172:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 0)));
 173:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 174:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  ifdef __va_arg_pack
 175:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 176:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...))
 177:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 178:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __asprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt,
 179:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 __va_arg_pack ());
 180:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 181:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 182:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 183:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (__asprintf (char **__restrict __ptr, const char *__restrict __fmt,
 184:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		   ...))
 185:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 186:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __asprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt,
 187:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 __va_arg_pack ());
 188:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 189:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 190:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 191:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (obstack_printf (struct obstack *__restrict __obstack,
 192:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       const char *__restrict __fmt, ...))
 193:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 194:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __obstack_printf_chk (__obstack, __USE_FORTIFY_LEVEL - 1, __fmt,
 195:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			       __va_arg_pack ());
 196:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 197:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  elif !defined __cplusplus
 198:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define asprintf(ptr, ...) \
 199:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __asprintf_chk (ptr, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 200:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define __asprintf(ptr, ...) \
 201:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __asprintf_chk (ptr, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 202:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define obstack_printf(obstack, ...) \
 203:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __obstack_printf_chk (obstack, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 204:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  endif
 205:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 206:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 207:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vasprintf (char **__restrict __ptr, const char *__restrict __fmt,
 208:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		  _G_va_list __ap))
 209:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 210:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vasprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 211:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 212:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 213:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 214:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (obstack_vprintf (struct obstack *__restrict __obstack,
 215:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			const char *__restrict __fmt, _G_va_list __ap))
 216:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 217:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __obstack_vprintf_chk (__obstack, __USE_FORTIFY_LEVEL - 1, __fmt,
 218:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				__ap);
 219:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 220:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 221:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
 222:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 223:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
 224:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 225:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if !defined __USE_ISOC11 \
 226:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     || (defined __cplusplus && __cplusplus <= 201103L && !defined __USE_GNU)
 227:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__gets_chk (char *__str, size_t) __wur;
 228:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__REDIRECT (__gets_warn, (char *__str), gets)
 229:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __wur __warnattr ("please use fgets or getline instead, gets can't "
 230:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       "specify buffer size");
 231:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 232:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function __wur char *
 233:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** gets (char *__str)
 234:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 235:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   if (__bos (__str) != (size_t) -1)
 236:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     return __gets_chk (__str, __bos (__str));
 237:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __gets_warn (__str);
 238:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 239:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
 240:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 241:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
 242:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  FILE *__restrict __stream) __wur;
 243:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__REDIRECT (__fgets_alias,
 244:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 (char *__restrict __s, int __n,
 245:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  FILE *__restrict __stream), fgets) __wur;
 246:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__REDIRECT (__fgets_chk_warn,
 247:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 (char *__restrict __s, size_t __size, int __n,
 248:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  FILE *__restrict __stream), __fgets_chk)
 249:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __wur __warnattr ("fgets called with bigger size than length "
 250:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       "of destination buffer");
 251:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 252:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function __wur char *
 253:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
 254:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 255:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   if (__bos (__s) != (size_t) -1)
 256:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     {
 257:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if (!__builtin_constant_p (__n) || __n <= 0)
 258:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fgets_chk (__s, __bos (__s), __n, __stream);
 259:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 260:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if ((size_t) __n > __bos (__s))
 261:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fgets_chk_warn (__s, __bos (__s), __n, __stream);
 262:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     }
 263:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __fgets_alias (__s, __n, __stream);
 264:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 265:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 266:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
 267:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __size, size_t __n,
 268:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   FILE *__restrict __stream) __wur;
 269:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern size_t __REDIRECT (__fread_alias,
 270:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  (void *__restrict __ptr, size_t __size,
 271:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __n, FILE *__restrict __stream),
 272:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  fread) __wur;
 273:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern size_t __REDIRECT (__fread_chk_warn,
 274:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  (void *__restrict __ptr, size_t __ptrlen,
 275:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __size, size_t __n,
 276:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   FILE *__restrict __stream),
 277:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  __fread_chk)
 278:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __wur __warnattr ("fread called with bigger size * nmemb than length "
 279:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       "of destination buffer");
 280:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 281:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function __wur size_t
 282:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** fread (void *__restrict __ptr, size_t __size, size_t __n,
 283:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****        FILE *__restrict __stream)
 284:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 285:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   if (__bos0 (__ptr) != (size_t) -1)
 286:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     {
 287:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if (!__builtin_constant_p (__size)
 288:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	  || !__builtin_constant_p (__n)
 289:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	  || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 290:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fread_chk (__ptr, __bos0 (__ptr), __size, __n, __stream);
 291:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 292:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if (__size * __n > __bos0 (__ptr))
 293:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fread_chk_warn (__ptr, __bos0 (__ptr), __size, __n, __stream);
 294:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     }
 295:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __fread_alias (__ptr, __size, __n, __stream);
 6522              		.loc 4 295 0
 6523 009b 488B4C24 		movq	24(%rsp), %rcx
 6523      18
 6524 00a0 488D7C24 		leaq	80(%rsp), %rdi
 6524      50
 6525              	.LVL717:
 6526 00a5 BA640000 		movl	$100, %edx
 6526      00
 6527 00aa BE010000 		movl	$1, %esi
 6527      00
 6528 00af E8000000 		call	fread
 6528      00
 6529              	.LVL718:
 6530              	.LBE646:
 6531              	.LBE645:
 6532              		.loc 1 1621 0
 6533 00b4 488D4C24 		leaq	80(%rsp), %rcx
 6533      50
 6534              	.LVL719:
 6535 00b9 4C63E8   		movslq	%eax, %r13
 6536 00bc 4C01E9   		addq	%r13, %rcx
 6537              	.LVL720:
 6538              		.loc 1 1622 0
 6539 00bf 85C0     		testl	%eax, %eax
 6540              		.loc 1 1621 0
 6541 00c1 48894C24 		movq	%rcx, 8(%rsp)
 6541      08
 6542              	.LVL721:
 6543              		.loc 1 1622 0
 6544 00c6 0F84C900 		je	.L561
 6544      0000
 6545              		.loc 1 1623 0
 6546 00cc 488D5C24 		leaq	80(%rsp), %rbx
 6546      50
 6547              	.LVL722:
 6548              	.L524:
 6549              		.loc 1 1629 0
 6550 00d1 0FBE3B   		movsbl	(%rbx), %edi
 6551 00d4 E8000000 		call	fl_utf8len1
 6551      00
 6552              	.LVL723:
 6553 00d9 4C63F0   		movslq	%eax, %r14
 6554              		.loc 1 1630 0
 6555 00dc 4A8D0433 		leaq	(%rbx,%r14), %rax
 6556 00e0 48394424 		cmpq	%rax, 8(%rsp)
 6556      08
 6557              		.loc 1 1629 0
 6558 00e5 4D89F5   		movq	%r14, %r13
 6559              	.LVL724:
 6560              		.loc 1 1630 0
 6561 00e8 0F82A201 		jb	.L526
 6561      0000
 6562              	.L530:
 6563              	.LVL725:
 6564              		.loc 1 1638 0
 6565 00ee 4585ED   		testl	%r13d, %r13d
 6566 00f1 7F32     		jg	.L535
 6567 00f3 E9C60000 		jmp	.L567
 6567      00
 6568              	.LVL726:
 6569 00f8 0F1F8400 		.p2align 4,,10
 6569      00000000 
 6570              		.p2align 3
 6571              	.L534:
 6572              	.LBB647:
 6573              	.LBB648:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 6574              		.loc 3 53 0
 6575 0100 488D7424 		leaq	64(%rsp), %rsi
 6575      40
 6576              	.LVL727:
 6577 0105 4C89FF   		movq	%r15, %rdi
 6578              	.LBE648:
 6579              	.LBE647:
 6580              		.loc 1 1651 0
 6581 0108 4129ED   		subl	%ebp, %r13d
 6582              	.LVL728:
 6583              	.LBB650:
 6584              	.LBB649:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 6585              		.loc 3 53 0
 6586 010b E8000000 		call	memcpy
 6586      00
 6587              	.LVL729:
 6588              	.LBE649:
 6589              	.LBE650:
 6590              		.loc 1 1650 0
 6591 0110 4863C5   		movslq	%ebp, %rax
 6592 0113 4801C3   		addq	%rax, %rbx
 6593              	.LVL730:
 6594              		.loc 1 1638 0
 6595 0116 4585ED   		testl	%r13d, %r13d
 6596 0119 0F8EA900 		jle	.L527
 6596      0000
 6597 011f 4D89F7   		movq	%r14, %r15
 6598 0122 4D63F5   		movslq	%r13d, %r14
 6599              	.LVL731:
 6600              	.L535:
 6601              		.loc 1 1639 0
 6602 0125 4A8D3433 		leaq	(%rbx,%r14), %rsi
 6603 0129 488D5424 		leaq	60(%rsp), %rdx
 6603      3C
 6604 012e 4889DF   		movq	%rbx, %rdi
 6605 0131 E8000000 		call	fl_utf8decode
 6605      00
 6606              	.LVL732:
 6607              		.loc 1 1640 0
 6608 0136 488D7424 		leaq	64(%rsp), %rsi
 6608      40
 6609 013b 89C7     		movl	%eax, %edi
 6610 013d E8000000 		call	fl_utf8encode
 6610      00
 6611              	.LVL733:
 6612              		.loc 1 1641 0
 6613 0142 4139C5   		cmpl	%eax, %r13d
 6614 0145 8B6C243C 		movl	60(%rsp), %ebp
 6615 0149 7505     		jne	.L550
 6616 014b 4139ED   		cmpl	%ebp, %r13d
 6617 014e 7408     		je	.L532
 6618              	.L550:
 6619 0150 41C70424 		movl	$1, (%r12)
 6619      01000000 
 6620              	.L532:
 6621              		.loc 1 1643 0
 6622 0158 4863D0   		movslq	%eax, %rdx
 6623 015b 4D8D3417 		leaq	(%r15,%rdx), %r14
 6624 015f 4C3B3424 		cmpq	(%rsp), %r14
 6625 0163 769B     		jbe	.L534
 6626              	.LVL734:
 6627              	.LBB651:
 6628              	.LBB652:
 6629              		.loc 3 59 0
 6630 0165 4C8B7424 		movq	8(%rsp), %r14
 6630      08
 6631 016a 488D7C24 		leaq	80(%rsp), %rdi
 6631      50
 6632              	.LVL735:
 6633 016f 4889DE   		movq	%rbx, %rsi
 6634 0172 B9640000 		movl	$100, %ecx
 6634      00
 6635 0177 4C89F2   		movq	%r14, %rdx
 6636 017a 4829DA   		subq	%rbx, %rdx
 6637              	.LVL736:
 6638 017d E8000000 		call	__memmove_chk
 6638      00
 6639              	.LVL737:
 6640              	.LBE652:
 6641              	.LBE651:
 6642              		.loc 1 1645 0
 6643 0182 488D4424 		leaq	80(%rsp), %rax
 6643      50
 6644              	.LVL738:
 6645 0187 4C89F2   		movq	%r14, %rdx
 6646 018a 4829C3   		subq	%rax, %rbx
 6647              	.LVL739:
 6648 018d 4829DA   		subq	%rbx, %rdx
 6649 0190 48895424 		movq	%rdx, 8(%rsp)
 6649      08
 6650              	.LVL740:
 6651              	.L561:
 6652              		.loc 1 1646 0
 6653 0195 4489FB   		movl	%r15d, %ebx
 6654 0198 2B5C2410 		subl	16(%rsp), %ebx
 6655              	.LVL741:
 6656              	.LBE644:
 6657              	.LBE643:
 6658              		.loc 1 1692 0
 6659 019c 85DB     		testl	%ebx, %ebx
 6660 019e 7478     		je	.L568
 6661              	.LVL742:
 6662              	.L559:
 6663              		.loc 1 1693 0
 6664 01a0 488B4C24 		movq	16(%rsp), %rcx
 6664      10
 6665 01a5 4863C3   		movslq	%ebx, %rax
 6666 01a8 C6040100 		movb	$0, (%rcx,%rax)
 6667              	.LVL743:
 6668              	.LBB668:
 6669              	.LBB669:
 6670              		.loc 1 275 0
 6671 01ac 803900   		cmpb	$0, (%rcx)
 6672 01af 0F854B01 		jne	.L569
 6672      0000
 6673              	.LVL744:
 6674              	.L539:
 6675              	.LBE669:
 6676              	.LBE668:
 6677              		.loc 1 1695 0
 6678 01b5 015C2424 		addl	%ebx, 36(%rsp)
 6679              	.LVL745:
 6680              		.loc 1 1680 0
 6681 01b9 E9C2FEFF 		jmp	.L536
 6681      FF
 6682              	.LVL746:
 6683              	.L567:
 6684              	.LBB671:
 6685              	.LBB665:
 6686              		.loc 1 1638 0
 6687 01be 4D89FE   		movq	%r15, %r14
 6688              	.LVL747:
 6689              		.p2align 4,,10
 6690 01c1 0F1F8000 		.p2align 3
 6690      000000
 6691              	.L527:
 6692              		.loc 1 1616 0
 6693 01c8 4D89F7   		movq	%r14, %r15
 6694              	.LVL748:
 6695              		.loc 1 1618 0
 6696 01cb 4C3B3C24 		cmpq	(%rsp), %r15
 6697 01cf 0F82BFFE 		jb	.L570
 6697      FFFF
 6698              	.LVL749:
 6699              	.L523:
 6700 01d5 488B5424 		movq	8(%rsp), %rdx
 6700      08
 6701 01da 4C8D4424 		leaq	80(%rsp), %r8
 6701      50
 6702              	.LVL750:
 6703 01df 4929D8   		subq	%rbx, %r8
 6704              	.LVL751:
 6705 01e2 4829DA   		subq	%rbx, %rdx
 6706              	.L529:
 6707              	.LBB653:
 6708              	.LBB654:
 6709              		.loc 3 59 0
 6710 01e5 488D7C24 		leaq	80(%rsp), %rdi
 6710      50
 6711              	.LVL752:
 6712 01ea 4889DE   		movq	%rbx, %rsi
 6713 01ed B9640000 		movl	$100, %ecx
 6713      00
 6714 01f2 4C894424 		movq	%r8, 40(%rsp)
 6714      28
 6715              	.LVL753:
 6716              	.LBE654:
 6717              	.LBE653:
 6718              		.loc 1 1656 0
 6719 01f7 4489FB   		movl	%r15d, %ebx
 6720              	.LBB656:
 6721              	.LBB655:
 6722              		.loc 3 59 0
 6723 01fa E8000000 		call	__memmove_chk
 6723      00
 6724              	.LVL754:
 6725              	.LBE655:
 6726              	.LBE656:
 6727              		.loc 1 1656 0
 6728 01ff 2B5C2410 		subl	16(%rsp), %ebx
 6729              	.LVL755:
 6730              		.loc 1 1655 0
 6731 0203 4C8B4424 		movq	40(%rsp), %r8
 6731      28
 6732 0208 4C014424 		addq	%r8, 8(%rsp)
 6732      08
 6733              	.LVL756:
 6734              	.LBE665:
 6735              	.LBE671:
 6736              		.loc 1 1692 0
 6737 020d 85DB     		testl	%ebx, %ebx
 6738 020f 758F     		jne	.L559
 6739              		.p2align 4,,10
 6740 0211 0F1F8000 		.p2align 3
 6740      000000
 6741              	.L568:
 6742              		.loc 1 1697 0
 6743 0218 488B7C24 		movq	24(%rsp), %rdi
 6743      18
 6744 021d E8000000 		call	ferror
 6744      00
 6745              	.LVL757:
 6746 0222 85C0     		testl	%eax, %eax
 6747 0224 0F85EC00 		jne	.L537
 6747      0000
 6748              	.LVL758:
 6749              		.loc 1 1698 0
 6750 022a 488B7C24 		movq	24(%rsp), %rdi
 6750      18
 6751 022f E8000000 		call	fclose
 6751      00
 6752              	.LVL759:
 6753              		.loc 1 1699 0
 6754 0234 488B7C24 		movq	16(%rsp), %rdi
 6754      10
 6755 0239 E8000000 		call	_ZdaPv
 6755      00
 6756              	.LVL760:
 6757              		.loc 1 1700 0
 6758 023e 418B0424 		movl	(%r12), %eax
 6759 0242 85C0     		testl	%eax, %eax
 6760 0244 7417     		je	.L522
 6761              		.loc 1 1700 0 is_stmt 0 discriminator 2
 6762 0246 498B5424 		movq	8(%r12), %rdx
 6762      08
 6763 024b 31C0     		xorl	%eax, %eax
 6764 024d 4885D2   		testq	%rdx, %rdx
 6765 0250 740B     		je	.L522
 6766 0252 890424   		movl	%eax, (%rsp)
 6767              		.loc 1 1701 0 is_stmt 1
 6768 0255 4C89E7   		movq	%r12, %rdi
 6769 0258 FFD2     		call	*%rdx
 6770              	.LVL761:
 6771 025a 8B0424   		movl	(%rsp), %eax
 6772              	.LVL762:
 6773              	.L522:
 6774              		.loc 1 1704 0
 6775 025d 488B8C24 		movq	184(%rsp), %rcx
 6775      B8000000 
 6776 0265 6448330C 		xorq	%fs:40, %rcx
 6776      25280000 
 6776      00
 6777 026e 0F85CD00 		jne	.L571
 6777      0000
 6778 0274 4881C4C8 		addq	$200, %rsp
 6778      000000
 6779              		.cfi_remember_state
 6780              		.cfi_def_cfa_offset 56
 6781 027b 5B       		popq	%rbx
 6782              		.cfi_def_cfa_offset 48
 6783 027c 5D       		popq	%rbp
 6784              		.cfi_def_cfa_offset 40
 6785 027d 415C     		popq	%r12
 6786              		.cfi_def_cfa_offset 32
 6787              	.LVL763:
 6788 027f 415D     		popq	%r13
 6789              		.cfi_def_cfa_offset 24
 6790 0281 415E     		popq	%r14
 6791              		.cfi_def_cfa_offset 16
 6792 0283 415F     		popq	%r15
 6793              		.cfi_def_cfa_offset 8
 6794 0285 C3       		ret
 6795              	.LVL764:
 6796 0286 662E0F1F 		.p2align 4,,10
 6796      84000000 
 6796      0000
 6797              		.p2align 3
 6798              	.L526:
 6799              		.cfi_restore_state
 6800              	.LBB672:
 6801              	.LBB666:
 6802              	.LBB657:
 6803              	.LBB658:
 6804              		.loc 3 59 0
 6805 0290 488B6C24 		movq	8(%rsp), %rbp
 6805      08
 6806 0295 488D7C24 		leaq	80(%rsp), %rdi
 6806      50
 6807              	.LVL765:
 6808 029a 4889DE   		movq	%rbx, %rsi
 6809 029d B9640000 		movl	$100, %ecx
 6809      00
 6810 02a2 4889EA   		movq	%rbp, %rdx
 6811 02a5 4829DA   		subq	%rbx, %rdx
 6812              	.LVL766:
 6813 02a8 E8000000 		call	__memmove_chk
 6813      00
 6814              	.LVL767:
 6815              	.LBE658:
 6816              	.LBE657:
 6817              		.loc 1 1632 0
 6818 02ad 488D4424 		leaq	80(%rsp), %rax
 6818      50
 6819              	.LVL768:
 6820 02b2 4889EA   		movq	%rbp, %rdx
 6821              	.LBB659:
 6822              	.LBB660:
 6823              		.loc 4 295 0
 6824 02b5 488B4C24 		movq	24(%rsp), %rcx
 6824      18
 6825 02ba BE010000 		movl	$1, %esi
 6825      00
 6826              	.LBE660:
 6827              	.LBE659:
 6828              		.loc 1 1632 0
 6829 02bf 4829C3   		subq	%rax, %rbx
 6830              	.LVL769:
 6831 02c2 4829DA   		subq	%rbx, %rdx
 6832              	.LBB663:
 6833              	.LBB661:
 6834              		.loc 4 295 0
 6835 02c5 4829D0   		subq	%rdx, %rax
 6836              	.LVL770:
 6837              	.LBE661:
 6838              	.LBE663:
 6839              		.loc 1 1632 0
 6840 02c8 4889D3   		movq	%rdx, %rbx
 6841              	.LVL771:
 6842              	.LBB664:
 6843              	.LBB662:
 6844              		.loc 4 295 0
 6845 02cb 488D5064 		leaq	100(%rax), %rdx
 6846              	.LVL772:
 6847 02cf 4889DF   		movq	%rbx, %rdi
 6848 02d2 E8000000 		call	fread
 6848      00
 6849              	.LVL773:
 6850              	.LBE662:
 6851              	.LBE664:
 6852              		.loc 1 1634 0
 6853 02d7 4898     		cltq
 6854 02d9 4801D8   		addq	%rbx, %rax
 6855              	.LVL774:
 6856              		.loc 1 1636 0
 6857 02dc 4889C2   		movq	%rax, %rdx
 6858              		.loc 1 1634 0
 6859 02df 48894424 		movq	%rax, 8(%rsp)
 6859      08
 6860              	.LVL775:
 6861              		.loc 1 1636 0
 6862 02e4 488D4424 		leaq	80(%rsp), %rax
 6862      50
 6863              	.LVL776:
 6864 02e9 4829C2   		subq	%rax, %rdx
 6865              	.LVL777:
 6866 02ec 4C39F2   		cmpq	%r14, %rdx
 6867 02ef 7C43     		jl	.L548
 6868              		.loc 1 1635 0
 6869 02f1 4889C3   		movq	%rax, %rbx
 6870 02f4 E9F5FDFF 		jmp	.L530
 6870      FF
 6871              	.LVL778:
 6872 02f9 0F1F8000 		.p2align 4,,10
 6872      000000
 6873              		.p2align 3
 6874              	.L569:
 6875              	.LBE666:
 6876              	.LBE672:
 6877              	.LBB673:
 6878              	.LBB670:
 6879 0300 488B5424 		movq	16(%rsp), %rdx
 6879      10
 6880 0305 8B742424 		movl	36(%rsp), %esi
 6881 0309 4C89E7   		movq	%r12, %rdi
 6882 030c E8000000 		call	_ZN14Fl_Text_Buffer6insertEiPKc.part.10
 6882      00
 6883              	.LVL779:
 6884 0311 E99FFEFF 		jmp	.L539
 6884      FF
 6885              	.LVL780:
 6886              	.L537:
 6887              	.LBE670:
 6888              	.LBE673:
 6889              		.loc 1 1698 0
 6890 0316 488B7C24 		movq	24(%rsp), %rdi
 6890      18
 6891 031b E8000000 		call	fclose
 6891      00
 6892              	.LVL781:
 6893              		.loc 1 1699 0
 6894 0320 488B7C24 		movq	16(%rsp), %rdi
 6894      10
 6895 0325 E8000000 		call	_ZdaPv
 6895      00
 6896              	.LVL782:
 6897              		.loc 1 1697 0
 6898 032a B8020000 		movl	$2, %eax
 6898      00
 6899 032f E929FFFF 		jmp	.L522
 6899      FF
 6900              	.LVL783:
 6901              	.L548:
 6902              	.LBB674:
 6903              	.LBB667:
 6904              		.loc 1 1636 0
 6905 0334 4531C0   		xorl	%r8d, %r8d
 6906              		.loc 1 1635 0
 6907 0337 488D5C24 		leaq	80(%rsp), %rbx
 6907      50
 6908 033c E9A4FEFF 		jmp	.L529
 6908      FF
 6909              	.LVL784:
 6910              	.L571:
 6911              	.LBE667:
 6912              	.LBE674:
 6913              		.loc 1 1704 0
 6914 0341 E8000000 		call	__stack_chk_fail
 6914      00
 6915              	.LVL785:
 6916              		.cfi_endproc
 6917              	.LFE257:
 6919              		.section	.text.unlikely._ZN14Fl_Text_Buffer10insertfileEPKcii
 6920              	.LCOLDE64:
 6921              		.section	.text._ZN14Fl_Text_Buffer10insertfileEPKcii
 6922              	.LHOTE64:
 6923              		.section	.rodata.str1.1
 6924              	.LC65:
 6925 0006 7700     		.string	"w"
 6926              		.section	.text.unlikely._ZN14Fl_Text_Buffer10outputfileEPKciii,"ax",@progbits
 6927              		.align 2
 6928              	.LCOLDB66:
 6929              		.section	.text._ZN14Fl_Text_Buffer10outputfileEPKciii,"ax",@progbits
 6930              	.LHOTB66:
 6931              		.align 2
 6932              		.p2align 4,,15
 6933              		.globl	_ZN14Fl_Text_Buffer10outputfileEPKciii
 6935              	_ZN14Fl_Text_Buffer10outputfileEPKciii:
 6936              	.LFB258:
 6937              		.loc 1 1713 0
 6938              		.cfi_startproc
 6939              	.LVL786:
 6940 0000 4157     		pushq	%r15
 6941              		.cfi_def_cfa_offset 16
 6942              		.cfi_offset 15, -16
 6943 0002 4156     		pushq	%r14
 6944              		.cfi_def_cfa_offset 24
 6945              		.cfi_offset 14, -24
 6946 0004 4189D7   		movl	%edx, %r15d
 6947 0007 4155     		pushq	%r13
 6948              		.cfi_def_cfa_offset 32
 6949              		.cfi_offset 13, -32
 6950 0009 4154     		pushq	%r12
 6951              		.cfi_def_cfa_offset 40
 6952              		.cfi_offset 12, -40
 6953 000b 4189CD   		movl	%ecx, %r13d
 6954 000e 55       		pushq	%rbp
 6955              		.cfi_def_cfa_offset 48
 6956              		.cfi_offset 6, -48
 6957 000f 53       		pushq	%rbx
 6958              		.cfi_def_cfa_offset 56
 6959              		.cfi_offset 3, -56
 6960 0010 4489C5   		movl	%r8d, %ebp
 6961 0013 4883EC18 		subq	$24, %rsp
 6962              		.cfi_def_cfa_offset 80
 6963              		.loc 1 1713 0
 6964 0017 48897C24 		movq	%rdi, 8(%rsp)
 6964      08
 6965 001c 4889F7   		movq	%rsi, %rdi
 6966              	.LVL787:
 6967              		.loc 1 1715 0
 6968 001f BE000000 		movl	$.LC65, %esi
 6968      00
 6969              	.LVL788:
 6970 0024 E8000000 		call	fl_fopen
 6970      00
 6971              	.LVL789:
 6972 0029 4885C0   		testq	%rax, %rax
 6973 002c 48890424 		movq	%rax, (%rsp)
 6974              	.LVL790:
 6975 0030 754C     		jne	.L577
 6976 0032 E9850000 		jmp	.L578
 6976      00
 6977              	.LVL791:
 6978 0037 660F1F84 		.p2align 4,,10
 6978      00000000 
 6978      00
 6979              		.p2align 3
 6980              	.L574:
 6981              	.LBB675:
 6982              	.LBB676:
 6983              		.loc 1 1718 0
 6984 0040 458D341F 		leal	(%r15,%rbx), %r14d
 6985 0044 488B7C24 		movq	8(%rsp), %rdi
 6985      08
 6986 0049 4489FE   		movl	%r15d, %esi
 6987 004c 4489F2   		movl	%r14d, %edx
 6988 004f E8000000 		call	_ZNK14Fl_Text_Buffer10text_rangeEii
 6988      00
 6989              	.LVL792:
 6990              		.loc 1 1719 0
 6991 0054 488B0C24 		movq	(%rsp), %rcx
 6992              		.loc 1 1718 0
 6993 0058 4989C7   		movq	%rax, %r15
 6994              	.LVL793:
 6995              		.loc 1 1719 0
 6996 005b 4863D3   		movslq	%ebx, %rdx
 6997 005e BE010000 		movl	$1, %esi
 6997      00
 6998 0063 4889C7   		movq	%rax, %rdi
 6999 0066 E8000000 		call	fwrite
 6999      00
 7000              	.LVL794:
 7001              		.loc 1 1720 0
 7002 006b 4C89FF   		movq	%r15, %rdi
 7003              		.loc 1 1719 0
 7004 006e 4989C4   		movq	%rax, %r12
 7005              	.LVL795:
 7006              		.loc 1 1720 0
 7007 0071 E8000000 		call	free
 7007      00
 7008              	.LVL796:
 7009              		.loc 1 1721 0
 7010 0076 4439E3   		cmpl	%r12d, %ebx
 7011 0079 7512     		jne	.L576
 7012              	.LBE676:
 7013              		.loc 1 1717 0
 7014 007b 4589F7   		movl	%r14d, %r15d
 7015              	.LVL797:
 7016              	.L577:
 7017 007e 4489EB   		movl	%r13d, %ebx
 7018 0081 4429FB   		subl	%r15d, %ebx
 7019              	.LVL798:
 7020 0084 39EB     		cmpl	%ebp, %ebx
 7021 0086 0F4FDD   		cmovg	%ebp, %ebx
 7022              	.LVL799:
 7023              		.loc 1 1717 0 is_stmt 0 discriminator 1
 7024 0089 85DB     		testl	%ebx, %ebx
 7025 008b 75B3     		jne	.L574
 7026              	.LVL800:
 7027              	.L576:
 7028              	.LBE675:
 7029              		.loc 1 1725 0 is_stmt 1
 7030 008d 4C8B3424 		movq	(%rsp), %r14
 7031 0091 4C89F7   		movq	%r14, %rdi
 7032 0094 E8000000 		call	ferror
 7032      00
 7033              	.LVL801:
 7034 0099 83F801   		cmpl	$1, %eax
 7035              		.loc 1 1726 0
 7036 009c 4C89F7   		movq	%r14, %rdi
 7037              		.loc 1 1725 0
 7038 009f 19DB     		sbbl	%ebx, %ebx
 7039 00a1 F7D3     		notl	%ebx
 7040              		.loc 1 1726 0
 7041 00a3 E8000000 		call	fclose
 7041      00
 7042              	.LVL802:
 7043              		.loc 1 1725 0
 7044 00a8 83E302   		andl	$2, %ebx
 7045              	.LVL803:
 7046              		.loc 1 1728 0
 7047 00ab 4883C418 		addq	$24, %rsp
 7048              		.cfi_remember_state
 7049              		.cfi_def_cfa_offset 56
 7050              	.LVL804:
 7051              		.loc 1 1727 0
 7052 00af 89D8     		movl	%ebx, %eax
 7053              		.loc 1 1728 0
 7054 00b1 5B       		popq	%rbx
 7055              		.cfi_def_cfa_offset 48
 7056              	.LVL805:
 7057 00b2 5D       		popq	%rbp
 7058              		.cfi_def_cfa_offset 40
 7059              	.LVL806:
 7060 00b3 415C     		popq	%r12
 7061              		.cfi_def_cfa_offset 32
 7062 00b5 415D     		popq	%r13
 7063              		.cfi_def_cfa_offset 24
 7064              	.LVL807:
 7065 00b7 415E     		popq	%r14
 7066              		.cfi_def_cfa_offset 16
 7067 00b9 415F     		popq	%r15
 7068              		.cfi_def_cfa_offset 8
 7069 00bb C3       		ret
 7070              	.LVL808:
 7071              	.L578:
 7072              		.cfi_restore_state
 7073 00bc 4883C418 		addq	$24, %rsp
 7074              		.cfi_def_cfa_offset 56
 7075              		.loc 1 1716 0
 7076 00c0 B8010000 		movl	$1, %eax
 7076      00
 7077              	.LVL809:
 7078              		.loc 1 1728 0
 7079 00c5 5B       		popq	%rbx
 7080              		.cfi_def_cfa_offset 48
 7081 00c6 5D       		popq	%rbp
 7082              		.cfi_def_cfa_offset 40
 7083              	.LVL810:
 7084 00c7 415C     		popq	%r12
 7085              		.cfi_def_cfa_offset 32
 7086 00c9 415D     		popq	%r13
 7087              		.cfi_def_cfa_offset 24
 7088              	.LVL811:
 7089 00cb 415E     		popq	%r14
 7090              		.cfi_def_cfa_offset 16
 7091 00cd 415F     		popq	%r15
 7092              		.cfi_def_cfa_offset 8
 7093              	.LVL812:
 7094 00cf C3       		ret
 7095              		.cfi_endproc
 7096              	.LFE258:
 7098              		.section	.text.unlikely._ZN14Fl_Text_Buffer10outputfileEPKciii
 7099              	.LCOLDE66:
 7100              		.section	.text._ZN14Fl_Text_Buffer10outputfileEPKciii
 7101              	.LHOTE66:
 7102              		.section	.text.unlikely._ZNK14Fl_Text_Buffer17prev_char_clippedEi,"ax",@progbits
 7103              		.align 2
 7104              	.LCOLDB67:
 7105              		.section	.text._ZNK14Fl_Text_Buffer17prev_char_clippedEi,"ax",@progbits
 7106              	.LHOTB67:
 7107              		.align 2
 7108              		.p2align 4,,15
 7109              		.globl	_ZNK14Fl_Text_Buffer17prev_char_clippedEi
 7111              	_ZNK14Fl_Text_Buffer17prev_char_clippedEi:
 7112              	.LFB259:
 7113              		.loc 1 1736 0
 7114              		.cfi_startproc
 7115              	.LVL813:
 7116              		.loc 1 1737 0
 7117 0000 85F6     		testl	%esi, %esi
 7118              		.loc 1 1736 0
 7119 0002 4989F8   		movq	%rdi, %r8
 7120 0005 89F1     		movl	%esi, %ecx
 7121              		.loc 1 1737 0
 7122 0007 7E2F     		jle	.L585
 7123              	.LVL814:
 7124 0009 0F1F8000 		.p2align 4,,10
 7124      000000
 7125              		.p2align 3
 7126              	.L583:
 7127              		.loc 1 1745 0
 7128 0010 83E901   		subl	$1, %ecx
 7129              	.LVL815:
 7130 0013 7423     		je	.L585
 7131              	.LVL816:
 7132              	.LBB677:
 7133              	.LBB678:
 7134              		.loc 1 258 0
 7135 0015 413B4834 		cmpl	52(%r8), %ecx
 7136 0019 7D14     		jge	.L586
 7137 001b 89CE     		movl	%ecx, %esi
 7138 001d 4C89C7   		movq	%r8, %rdi
 7139 0020 E8000000 		call	_ZNK14Fl_Text_Buffer7byte_atEi.part.6
 7139      00
 7140              	.LVL817:
 7141              	.LBE678:
 7142              	.LBE677:
 7143              		.loc 1 1748 0
 7144 0025 25C00000 		andl	$192, %eax
 7144      00
 7145 002a 83C080   		addl	$-128, %eax
 7146 002d 74E1     		je	.L583
 7147              	.L586:
 7148              		.loc 1 1744 0
 7149 002f 89C8     		movl	%ecx, %eax
 7150              		.loc 1 1752 0
 7151 0031 C3       		ret
 7152              	.LVL818:
 7153              		.p2align 4,,10
 7154 0032 660F1F44 		.p2align 3
 7154      0000
 7155              	.L585:
 7156              		.loc 1 1738 0
 7157 0038 31C0     		xorl	%eax, %eax
 7158 003a C3       		ret
 7159              		.cfi_endproc
 7160              	.LFE259:
 7162              		.section	.text.unlikely._ZNK14Fl_Text_Buffer17prev_char_clippedEi
 7163              	.LCOLDE67:
 7164              		.section	.text._ZNK14Fl_Text_Buffer17prev_char_clippedEi
 7165              	.LHOTE67:
 7166              		.section	.text.unlikely._ZNK14Fl_Text_Buffer17findchar_backwardEijPi,"ax",@progbits
 7167              		.align 2
 7168              	.LCOLDB68:
 7169              		.section	.text._ZNK14Fl_Text_Buffer17findchar_backwardEijPi,"ax",@progbits
 7170              	.LHOTB68:
 7171              		.align 2
 7172              		.p2align 4,,15
 7173              		.globl	_ZNK14Fl_Text_Buffer17findchar_backwardEijPi
 7175              	_ZNK14Fl_Text_Buffer17findchar_backwardEijPi:
 7176              	.LFB255:
 7177              		.loc 1 1495 0
 7178              		.cfi_startproc
 7179              	.LVL819:
 7180 0000 4155     		pushq	%r13
 7181              		.cfi_def_cfa_offset 16
 7182              		.cfi_offset 13, -16
 7183 0002 4154     		pushq	%r12
 7184              		.cfi_def_cfa_offset 24
 7185              		.cfi_offset 12, -24
 7186 0004 4989CD   		movq	%rcx, %r13
 7187 0007 55       		pushq	%rbp
 7188              		.cfi_def_cfa_offset 32
 7189              		.cfi_offset 6, -32
 7190 0008 53       		pushq	%rbx
 7191              		.cfi_def_cfa_offset 40
 7192              		.cfi_offset 3, -40
 7193 0009 4883EC08 		subq	$8, %rsp
 7194              		.cfi_def_cfa_offset 48
 7195              		.loc 1 1496 0
 7196 000d 85F6     		testl	%esi, %esi
 7197 000f 7E7C     		jle	.L593
 7198              		.loc 1 1501 0
 7199 0011 448B4F34 		movl	52(%rdi), %r9d
 7200 0015 4889FD   		movq	%rdi, %rbp
 7201 0018 4189D4   		movl	%edx, %r12d
 7202 001b 4439CE   		cmpl	%r9d, %esi
 7203 001e 7F68     		jg	.L604
 7204              	.L592:
 7205              	.LVL820:
 7206              	.LBB679:
 7207              	.LBB680:
 7208              		.loc 1 1762 0
 7209 0020 4889EF   		movq	%rbp, %rdi
 7210              	.LVL821:
 7211 0023 E8000000 		call	_ZNK14Fl_Text_Buffer17prev_char_clippedEi
 7211      00
 7212              	.LVL822:
 7213              	.LBE680:
 7214              	.LBE679:
 7215              		.loc 1 1504 0
 7216 0028 85C0     		testl	%eax, %eax
 7217              	.LBB684:
 7218              	.LBB681:
 7219              		.loc 1 1762 0
 7220 002a 89C3     		movl	%eax, %ebx
 7221              	.LVL823:
 7222              	.LBE681:
 7223              	.LBE684:
 7224              		.loc 1 1504 0
 7225 002c 785F     		js	.L593
 7226 002e 4489CA   		movl	%r9d, %edx
 7227              	.LVL824:
 7228              	.LBB685:
 7229              	.LBB686:
 7230              		.loc 1 244 0
 7231 0031 31C0     		xorl	%eax, %eax
 7232              	.LVL825:
 7233              		.loc 1 243 0
 7234 0033 39DA     		cmpl	%ebx, %edx
 7235 0035 7F2B     		jg	.L605
 7236 0037 660F1F84 		.p2align 4,,10
 7236      00000000 
 7236      00
 7237              		.p2align 3
 7238              	.L595:
 7239              	.LVL826:
 7240              	.LBE686:
 7241              	.LBE685:
 7242              		.loc 1 1505 0
 7243 0040 4139C4   		cmpl	%eax, %r12d
 7244 0043 742C     		je	.L606
 7245              	.L596:
 7246              	.LVL827:
 7247              	.LBB688:
 7248              	.LBB689:
 7249              		.loc 1 1761 0
 7250 0045 85DB     		testl	%ebx, %ebx
 7251 0047 7444     		je	.L593
 7252              		.loc 1 1762 0
 7253 0049 89DE     		movl	%ebx, %esi
 7254 004b 4889EF   		movq	%rbp, %rdi
 7255 004e E8000000 		call	_ZNK14Fl_Text_Buffer17prev_char_clippedEi
 7255      00
 7256              	.LVL828:
 7257              	.LBE689:
 7258              	.LBE688:
 7259              		.loc 1 1504 0
 7260 0053 85C0     		testl	%eax, %eax
 7261              	.LBB691:
 7262              	.LBB690:
 7263              		.loc 1 1762 0
 7264 0055 89C3     		movl	%eax, %ebx
 7265              	.LVL829:
 7266              	.LBE690:
 7267              	.LBE691:
 7268              		.loc 1 1504 0
 7269 0057 7834     		js	.L593
 7270 0059 8B5534   		movl	52(%rbp), %edx
 7271              	.LVL830:
 7272              	.LBB692:
 7273              	.LBB687:
 7274              		.loc 1 244 0
 7275 005c 31C0     		xorl	%eax, %eax
 7276              	.LVL831:
 7277              		.loc 1 243 0
 7278 005e 39DA     		cmpl	%ebx, %edx
 7279 0060 7EDE     		jle	.L595
 7280              	.LVL832:
 7281              	.L605:
 7282 0062 89DE     		movl	%ebx, %esi
 7283 0064 4889EF   		movq	%rbp, %rdi
 7284 0067 E8000000 		call	_ZNK14Fl_Text_Buffer7char_atEi.part.5
 7284      00
 7285              	.LVL833:
 7286              	.LBE687:
 7287              	.LBE692:
 7288              		.loc 1 1505 0
 7289 006c 4139C4   		cmpl	%eax, %r12d
 7290 006f 75D4     		jne	.L596
 7291              	.L606:
 7292              		.loc 1 1506 0
 7293 0071 41895D00 		movl	%ebx, 0(%r13)
 7294              		.loc 1 1513 0
 7295 0075 4883C408 		addq	$8, %rsp
 7296              		.cfi_remember_state
 7297              		.cfi_def_cfa_offset 40
 7298              		.loc 1 1507 0
 7299 0079 B8010000 		movl	$1, %eax
 7299      00
 7300              		.loc 1 1513 0
 7301 007e 5B       		popq	%rbx
 7302              		.cfi_def_cfa_offset 32
 7303              	.LVL834:
 7304 007f 5D       		popq	%rbp
 7305              		.cfi_def_cfa_offset 24
 7306              	.LVL835:
 7307 0080 415C     		popq	%r12
 7308              		.cfi_def_cfa_offset 16
 7309              	.LVL836:
 7310 0082 415D     		popq	%r13
 7311              		.cfi_def_cfa_offset 8
 7312              	.LVL837:
 7313 0084 C3       		ret
 7314              	.LVL838:
 7315              		.p2align 4,,10
 7316 0085 0F1F00   		.p2align 3
 7317              	.L604:
 7318              		.cfi_restore_state
 7319              	.LBB693:
 7320              	.LBB682:
 7321              		.loc 1 1761 0
 7322 0088 4585C9   		testl	%r9d, %r9d
 7323 008b 7515     		jne	.L607
 7324              	.LVL839:
 7325              	.L593:
 7326              	.LBE682:
 7327              	.LBE693:
 7328              		.loc 1 1497 0
 7329 008d 41C74500 		movl	$0, 0(%r13)
 7329      00000000 
 7330              		.loc 1 1513 0
 7331 0095 4883C408 		addq	$8, %rsp
 7332              		.cfi_remember_state
 7333              		.cfi_def_cfa_offset 40
 7334              		.loc 1 1498 0
 7335 0099 31C0     		xorl	%eax, %eax
 7336              		.loc 1 1513 0
 7337 009b 5B       		popq	%rbx
 7338              		.cfi_def_cfa_offset 32
 7339 009c 5D       		popq	%rbp
 7340              		.cfi_def_cfa_offset 24
 7341 009d 415C     		popq	%r12
 7342              		.cfi_def_cfa_offset 16
 7343 009f 415D     		popq	%r13
 7344              		.cfi_def_cfa_offset 8
 7345              	.LVL840:
 7346 00a1 C3       		ret
 7347              	.LVL841:
 7348              	.L607:
 7349              		.cfi_restore_state
 7350              	.LBB694:
 7351              	.LBB683:
 7352              		.loc 1 1761 0
 7353 00a2 4489CE   		movl	%r9d, %esi
 7354 00a5 E976FFFF 		jmp	.L592
 7354      FF
 7355              	.LBE683:
 7356              	.LBE694:
 7357              		.cfi_endproc
 7358              	.LFE255:
 7360              		.section	.text.unlikely._ZNK14Fl_Text_Buffer17findchar_backwardEijPi
 7361              	.LCOLDE68:
 7362              		.section	.text._ZNK14Fl_Text_Buffer17findchar_backwardEijPi
 7363              	.LHOTE68:
 7364              		.section	.text.unlikely._ZNK14Fl_Text_Buffer10line_startEi,"ax",@progbits
 7365              		.align 2
 7366              	.LCOLDB69:
 7367              		.section	.text._ZNK14Fl_Text_Buffer10line_startEi,"ax",@progbits
 7368              	.LHOTB69:
 7369              		.align 2
 7370              		.p2align 4,,15
 7371              		.globl	_ZNK14Fl_Text_Buffer10line_startEi
 7373              	_ZNK14Fl_Text_Buffer10line_startEi:
 7374              	.LFB228:
 7375              		.loc 1 811 0
 7376              		.cfi_startproc
 7377              	.LVL842:
 7378 0000 4883EC18 		subq	$24, %rsp
 7379              		.cfi_def_cfa_offset 32
 7380              		.loc 1 812 0
 7381 0004 BA0A0000 		movl	$10, %edx
 7381      00
 7382 0009 488D4C24 		leaq	12(%rsp), %rcx
 7382      0C
 7383              		.loc 1 811 0
 7384 000e 8974240C 		movl	%esi, 12(%rsp)
 7385              		.loc 1 812 0
 7386 0012 E8000000 		call	_ZNK14Fl_Text_Buffer17findchar_backwardEijPi
 7386      00
 7387              	.LVL843:
 7388 0017 85C0     		testl	%eax, %eax
 7389 0019 7407     		je	.L609
 7390              		.loc 1 814 0
 7391 001b 8B44240C 		movl	12(%rsp), %eax
 7392 001f 83C001   		addl	$1, %eax
 7393              	.L609:
 7394              		.loc 1 815 0
 7395 0022 4883C418 		addq	$24, %rsp
 7396              		.cfi_def_cfa_offset 8
 7397 0026 C3       		ret
 7398              		.cfi_endproc
 7399              	.LFE228:
 7401              		.section	.text.unlikely._ZNK14Fl_Text_Buffer10line_startEi
 7402              	.LCOLDE69:
 7403              		.section	.text._ZNK14Fl_Text_Buffer10line_startEi
 7404              	.LHOTE69:
 7405              		.section	.text.unlikely._ZNK14Fl_Text_Buffer9prev_charEi,"ax",@progbits
 7406              		.align 2
 7407              	.LCOLDB70:
 7408              		.section	.text._ZNK14Fl_Text_Buffer9prev_charEi,"ax",@progbits
 7409              	.LHOTB70:
 7410              		.align 2
 7411              		.p2align 4,,15
 7412              		.globl	_ZNK14Fl_Text_Buffer9prev_charEi
 7414              	_ZNK14Fl_Text_Buffer9prev_charEi:
 7415              	.LFB260:
 7416              		.loc 1 1760 0
 7417              		.cfi_startproc
 7418              	.LVL844:
 7419              		.loc 1 1761 0
 7420 0000 85F6     		testl	%esi, %esi
 7421 0002 740C     		je	.L615
 7422              		.loc 1 1762 0
 7423 0004 E9000000 		jmp	_ZNK14Fl_Text_Buffer17prev_char_clippedEi
 7423      00
 7424              	.LVL845:
 7425 0009 0F1F8000 		.p2align 4,,10
 7425      000000
 7426              		.p2align 3
 7427              	.L615:
 7428              		.loc 1 1763 0
 7429 0010 B8FFFFFF 		movl	$-1, %eax
 7429      FF
 7430 0015 C3       		ret
 7431              		.cfi_endproc
 7432              	.LFE260:
 7434              		.section	.text.unlikely._ZNK14Fl_Text_Buffer9prev_charEi
 7435              	.LCOLDE70:
 7436              		.section	.text._ZNK14Fl_Text_Buffer9prev_charEi
 7437              	.LHOTE70:
 7438              		.section	.text.unlikely._ZNK14Fl_Text_Buffer9next_charEi,"ax",@progbits
 7439              		.align 2
 7440              	.LCOLDB71:
 7441              		.section	.text._ZNK14Fl_Text_Buffer9next_charEi,"ax",@progbits
 7442              	.LHOTB71:
 7443              		.align 2
 7444              		.p2align 4,,15
 7445              		.globl	_ZNK14Fl_Text_Buffer9next_charEi
 7447              	_ZNK14Fl_Text_Buffer9next_charEi:
 7448              	.LFB261:
 7449              		.loc 1 1771 0
 7450              		.cfi_startproc
 7451              	.LVL846:
 7452 0000 55       		pushq	%rbp
 7453              		.cfi_def_cfa_offset 16
 7454              		.cfi_offset 6, -16
 7455 0001 53       		pushq	%rbx
 7456              		.cfi_def_cfa_offset 24
 7457              		.cfi_offset 3, -24
 7458 0002 4889FD   		movq	%rdi, %rbp
 7459              	.LVL847:
 7460              	.LBB695:
 7461              	.LBB696:
 7462              		.loc 1 258 0
 7463 0005 31FF     		xorl	%edi, %edi
 7464              	.LVL848:
 7465              	.LBE696:
 7466              	.LBE695:
 7467              		.loc 1 1771 0
 7468 0007 89F3     		movl	%esi, %ebx
 7469 0009 4883EC08 		subq	$8, %rsp
 7470              		.cfi_def_cfa_offset 32
 7471              	.LBB699:
 7472              	.LBB697:
 7473              		.loc 1 258 0
 7474 000d 85F6     		testl	%esi, %esi
 7475 000f 7805     		js	.L617
 7476 0011 3B7534   		cmpl	52(%rbp), %esi
 7477 0014 7C1A     		jl	.L621
 7478              	.LVL849:
 7479              	.L617:
 7480              	.LBE697:
 7481              	.LBE699:
 7482              		.loc 1 1773 0
 7483 0016 E8000000 		call	fl_utf8len1
 7483      00
 7484              	.LVL850:
 7485 001b 8B5534   		movl	52(%rbp), %edx
 7486 001e 01D8     		addl	%ebx, %eax
 7487              	.LVL851:
 7488 0020 39D0     		cmpl	%edx, %eax
 7489 0022 0F4FC2   		cmovg	%edx, %eax
 7490              	.LVL852:
 7491              		.loc 1 1779 0
 7492 0025 4883C408 		addq	$8, %rsp
 7493              		.cfi_remember_state
 7494              		.cfi_def_cfa_offset 24
 7495 0029 5B       		popq	%rbx
 7496              		.cfi_def_cfa_offset 16
 7497 002a 5D       		popq	%rbp
 7498              		.cfi_def_cfa_offset 8
 7499              	.LVL853:
 7500 002b C3       		ret
 7501              	.LVL854:
 7502 002c 0F1F4000 		.p2align 4,,10
 7503              		.p2align 3
 7504              	.L621:
 7505              		.cfi_restore_state
 7506              	.LBB700:
 7507              	.LBB698:
 7508 0030 4889EF   		movq	%rbp, %rdi
 7509 0033 E8000000 		call	_ZNK14Fl_Text_Buffer7byte_atEi.part.6
 7509      00
 7510              	.LVL855:
 7511 0038 0FBEF8   		movsbl	%al, %edi
 7512 003b EBD9     		jmp	.L617
 7513              	.LBE698:
 7514              	.LBE700:
 7515              		.cfi_endproc
 7516              	.LFE261:
 7518              		.section	.text.unlikely._ZNK14Fl_Text_Buffer9next_charEi
 7519              	.LCOLDE71:
 7520              		.section	.text._ZNK14Fl_Text_Buffer9next_charEi
 7521              	.LHOTE71:
 7522              		.section	.text.unlikely._ZNK14Fl_Text_Buffer10word_startEi,"ax",@progbits
 7523              		.align 2
 7524              	.LCOLDB72:
 7525              		.section	.text._ZNK14Fl_Text_Buffer10word_startEi,"ax",@progbits
 7526              	.LHOTB72:
 7527              		.align 2
 7528              		.p2align 4,,15
 7529              		.globl	_ZNK14Fl_Text_Buffer10word_startEi
 7531              	_ZNK14Fl_Text_Buffer10word_startEi:
 7532              	.LFB230:
 7533              		.loc 1 832 0
 7534              		.cfi_startproc
 7535              	.LVL856:
 7536              		.loc 1 834 0
 7537 0000 85F6     		testl	%esi, %esi
 7538              		.loc 1 832 0
 7539 0002 4154     		pushq	%r12
 7540              		.cfi_def_cfa_offset 16
 7541              		.cfi_offset 12, -16
 7542 0004 55       		pushq	%rbp
 7543              		.cfi_def_cfa_offset 24
 7544              		.cfi_offset 6, -24
 7545 0005 4889FD   		movq	%rdi, %rbp
 7546 0008 53       		pushq	%rbx
 7547              		.cfi_def_cfa_offset 32
 7548              		.cfi_offset 3, -32
 7549              		.loc 1 832 0
 7550 0009 89F3     		movl	%esi, %ebx
 7551              		.loc 1 834 0
 7552 000b 0F8EB700 		jle	.L648
 7552      0000
 7553 0011 E8000000 		call	__ctype_b_loc
 7553      00
 7554              	.LVL857:
 7555 0016 4989C4   		movq	%rax, %r12
 7556 0019 0F1F8000 		.p2align 4,,10
 7556      000000
 7557              		.p2align 3
 7558              	.L632:
 7559              	.LVL858:
 7560              	.LBB701:
 7561              	.LBB702:
 7562              		.loc 1 243 0
 7563 0020 3B5D34   		cmpl	52(%rbp), %ebx
 7564 0023 7C23     		jl	.L649
 7565              	.LVL859:
 7566              	.LBE702:
 7567              	.LBE701:
 7568              	.LBB704:
 7569              	.LBB705:
 7570              		.file 5 "/usr/include/ctype.h"
   1:/usr/include/ctype.h **** /* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   2:/usr/include/ctype.h ****    This file is part of the GNU C Library.
   3:/usr/include/ctype.h **** 
   4:/usr/include/ctype.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/ctype.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/ctype.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/ctype.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/ctype.h **** 
   9:/usr/include/ctype.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/ctype.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/ctype.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/ctype.h ****    Lesser General Public License for more details.
  13:/usr/include/ctype.h **** 
  14:/usr/include/ctype.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/ctype.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/ctype.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/ctype.h **** 
  18:/usr/include/ctype.h **** /*
  19:/usr/include/ctype.h ****  *	ISO C99 Standard 7.4: Character handling	<ctype.h>
  20:/usr/include/ctype.h ****  */
  21:/usr/include/ctype.h **** 
  22:/usr/include/ctype.h **** #ifndef	_CTYPE_H
  23:/usr/include/ctype.h **** #define	_CTYPE_H	1
  24:/usr/include/ctype.h **** 
  25:/usr/include/ctype.h **** #include <features.h>
  26:/usr/include/ctype.h **** #include <bits/types.h>
  27:/usr/include/ctype.h **** 
  28:/usr/include/ctype.h **** __BEGIN_DECLS
  29:/usr/include/ctype.h **** 
  30:/usr/include/ctype.h **** #ifndef _ISbit
  31:/usr/include/ctype.h **** /* These are all the characteristics of characters.
  32:/usr/include/ctype.h ****    If there get to be more than 16 distinct characteristics,
  33:/usr/include/ctype.h ****    many things must be changed that use `unsigned short int's.
  34:/usr/include/ctype.h **** 
  35:/usr/include/ctype.h ****    The characteristics are stored always in network byte order (big
  36:/usr/include/ctype.h ****    endian).  We define the bit value interpretations here dependent on the
  37:/usr/include/ctype.h ****    machine's byte order.  */
  38:/usr/include/ctype.h **** 
  39:/usr/include/ctype.h **** # include <endian.h>
  40:/usr/include/ctype.h **** # if __BYTE_ORDER == __BIG_ENDIAN
  41:/usr/include/ctype.h **** #  define _ISbit(bit)	(1 << (bit))
  42:/usr/include/ctype.h **** # else /* __BYTE_ORDER == __LITTLE_ENDIAN */
  43:/usr/include/ctype.h **** #  define _ISbit(bit)	((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
  44:/usr/include/ctype.h **** # endif
  45:/usr/include/ctype.h **** 
  46:/usr/include/ctype.h **** enum
  47:/usr/include/ctype.h **** {
  48:/usr/include/ctype.h ****   _ISupper = _ISbit (0),	/* UPPERCASE.  */
  49:/usr/include/ctype.h ****   _ISlower = _ISbit (1),	/* lowercase.  */
  50:/usr/include/ctype.h ****   _ISalpha = _ISbit (2),	/* Alphabetic.  */
  51:/usr/include/ctype.h ****   _ISdigit = _ISbit (3),	/* Numeric.  */
  52:/usr/include/ctype.h ****   _ISxdigit = _ISbit (4),	/* Hexadecimal numeric.  */
  53:/usr/include/ctype.h ****   _ISspace = _ISbit (5),	/* Whitespace.  */
  54:/usr/include/ctype.h ****   _ISprint = _ISbit (6),	/* Printing.  */
  55:/usr/include/ctype.h ****   _ISgraph = _ISbit (7),	/* Graphical.  */
  56:/usr/include/ctype.h ****   _ISblank = _ISbit (8),	/* Blank (usually SPC and TAB).  */
  57:/usr/include/ctype.h ****   _IScntrl = _ISbit (9),	/* Control character.  */
  58:/usr/include/ctype.h ****   _ISpunct = _ISbit (10),	/* Punctuation.  */
  59:/usr/include/ctype.h ****   _ISalnum = _ISbit (11)	/* Alphanumeric.  */
  60:/usr/include/ctype.h **** };
  61:/usr/include/ctype.h **** #endif /* ! _ISbit  */
  62:/usr/include/ctype.h **** 
  63:/usr/include/ctype.h **** /* These are defined in ctype-info.c.
  64:/usr/include/ctype.h ****    The declarations here must match those in localeinfo.h.
  65:/usr/include/ctype.h **** 
  66:/usr/include/ctype.h ****    In the thread-specific locale model (see `uselocale' in <locale.h>)
  67:/usr/include/ctype.h ****    we cannot use global variables for these as was done in the past.
  68:/usr/include/ctype.h ****    Instead, the following accessor functions return the address of
  69:/usr/include/ctype.h ****    each variable, which is local to the current thread if multithreaded.
  70:/usr/include/ctype.h **** 
  71:/usr/include/ctype.h ****    These point into arrays of 384, so they can be indexed by any `unsigned
  72:/usr/include/ctype.h ****    char' value [0,255]; by EOF (-1); or by any `signed char' value
  73:/usr/include/ctype.h ****    [-128,-1).  ISO C requires that the ctype functions work for `unsigned
  74:/usr/include/ctype.h ****    char' values and for EOF; we also support negative `signed char' values
  75:/usr/include/ctype.h ****    for broken old programs.  The case conversion arrays are of `int's
  76:/usr/include/ctype.h ****    rather than `unsigned char's because tolower (EOF) must be EOF, which
  77:/usr/include/ctype.h ****    doesn't fit into an `unsigned char'.  But today more important is that
  78:/usr/include/ctype.h ****    the arrays are also used for multi-byte character sets.  */
  79:/usr/include/ctype.h **** extern const unsigned short int **__ctype_b_loc (void)
  80:/usr/include/ctype.h ****      __THROW __attribute__ ((__const__));
  81:/usr/include/ctype.h **** extern const __int32_t **__ctype_tolower_loc (void)
  82:/usr/include/ctype.h ****      __THROW __attribute__ ((__const__));
  83:/usr/include/ctype.h **** extern const __int32_t **__ctype_toupper_loc (void)
  84:/usr/include/ctype.h ****      __THROW __attribute__ ((__const__));
  85:/usr/include/ctype.h **** 
  86:/usr/include/ctype.h **** 
  87:/usr/include/ctype.h **** #ifndef __cplusplus
  88:/usr/include/ctype.h **** # define __isctype(c, type) \
  89:/usr/include/ctype.h ****   ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
  90:/usr/include/ctype.h **** #elif defined __USE_EXTERN_INLINES
  91:/usr/include/ctype.h **** # define __isctype_f(type) \
  92:/usr/include/ctype.h ****   __extern_inline int							      \
  93:/usr/include/ctype.h ****   is##type (int __c) __THROW						      \
  94:/usr/include/ctype.h ****   {									      \
  95:/usr/include/ctype.h ****     return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _IS##type; \
  96:/usr/include/ctype.h ****   }
  97:/usr/include/ctype.h **** #endif
  98:/usr/include/ctype.h **** 
  99:/usr/include/ctype.h **** #define	__isascii(c)	(((c) & ~0x7f) == 0)	/* If C is a 7 bit value.  */
 100:/usr/include/ctype.h **** #define	__toascii(c)	((c) & 0x7f)		/* Mask off high bits.  */
 101:/usr/include/ctype.h **** 
 102:/usr/include/ctype.h **** #define	__exctype(name)	extern int name (int) __THROW
 103:/usr/include/ctype.h **** 
 104:/usr/include/ctype.h **** __BEGIN_NAMESPACE_STD
 105:/usr/include/ctype.h **** 
 106:/usr/include/ctype.h **** /* The following names are all functions:
 107:/usr/include/ctype.h ****      int isCHARACTERISTIC(int c);
 108:/usr/include/ctype.h ****    which return nonzero iff C has CHARACTERISTIC.
 109:/usr/include/ctype.h ****    For the meaning of the characteristic names, see the `enum' above.  */
 110:/usr/include/ctype.h **** __exctype (isalnum);
 111:/usr/include/ctype.h **** __exctype (isalpha);
 112:/usr/include/ctype.h **** __exctype (iscntrl);
 113:/usr/include/ctype.h **** __exctype (isdigit);
 114:/usr/include/ctype.h **** __exctype (islower);
 115:/usr/include/ctype.h **** __exctype (isgraph);
 116:/usr/include/ctype.h **** __exctype (isprint);
 117:/usr/include/ctype.h **** __exctype (ispunct);
 118:/usr/include/ctype.h **** __exctype (isspace);
 119:/usr/include/ctype.h **** __exctype (isupper);
 120:/usr/include/ctype.h **** __exctype (isxdigit);
 121:/usr/include/ctype.h **** 
 122:/usr/include/ctype.h **** 
 123:/usr/include/ctype.h **** /* Return the lowercase version of C.  */
 124:/usr/include/ctype.h **** extern int tolower (int __c) __THROW;
 125:/usr/include/ctype.h **** 
 126:/usr/include/ctype.h **** /* Return the uppercase version of C.  */
 127:/usr/include/ctype.h **** extern int toupper (int __c) __THROW;
 128:/usr/include/ctype.h **** 
 129:/usr/include/ctype.h **** __END_NAMESPACE_STD
 130:/usr/include/ctype.h **** 
 131:/usr/include/ctype.h **** 
 132:/usr/include/ctype.h **** /* ISO C99 introduced one new function.  */
 133:/usr/include/ctype.h **** #ifdef	__USE_ISOC99
 134:/usr/include/ctype.h **** __BEGIN_NAMESPACE_C99
 135:/usr/include/ctype.h **** 
 136:/usr/include/ctype.h **** __exctype (isblank);
 137:/usr/include/ctype.h **** 
 138:/usr/include/ctype.h **** __END_NAMESPACE_C99
 139:/usr/include/ctype.h **** #endif
 140:/usr/include/ctype.h **** 
 141:/usr/include/ctype.h **** #ifdef __USE_GNU
 142:/usr/include/ctype.h **** /* Test C for a set of character classes according to MASK.  */
 143:/usr/include/ctype.h **** extern int isctype (int __c, int __mask) __THROW;
 144:/usr/include/ctype.h **** #endif
 145:/usr/include/ctype.h **** 
 146:/usr/include/ctype.h **** #if defined __USE_MISC || defined __USE_XOPEN
 147:/usr/include/ctype.h **** 
 148:/usr/include/ctype.h **** /* Return nonzero iff C is in the ASCII set
 149:/usr/include/ctype.h ****    (i.e., is no more than 7 bits wide).  */
 150:/usr/include/ctype.h **** extern int isascii (int __c) __THROW;
 151:/usr/include/ctype.h **** 
 152:/usr/include/ctype.h **** /* Return the part of C that is in the ASCII set
 153:/usr/include/ctype.h ****    (i.e., the low-order 7 bits of C).  */
 154:/usr/include/ctype.h **** extern int toascii (int __c) __THROW;
 155:/usr/include/ctype.h **** 
 156:/usr/include/ctype.h **** /* These are the same as `toupper' and `tolower' except that they do not
 157:/usr/include/ctype.h ****    check the argument for being in the range of a `char'.  */
 158:/usr/include/ctype.h **** __exctype (_toupper);
 159:/usr/include/ctype.h **** __exctype (_tolower);
 160:/usr/include/ctype.h **** #endif /* Use X/Open or use misc.  */
 161:/usr/include/ctype.h **** 
 162:/usr/include/ctype.h **** /* This code is needed for the optimized mapping functions.  */
 163:/usr/include/ctype.h **** #define __tobody(c, f, a, args) \
 164:/usr/include/ctype.h ****   (__extension__							      \
 165:/usr/include/ctype.h ****    ({ int __res;							      \
 166:/usr/include/ctype.h ****       if (sizeof (c) > 1)						      \
 167:/usr/include/ctype.h **** 	{								      \
 168:/usr/include/ctype.h **** 	  if (__builtin_constant_p (c))					      \
 169:/usr/include/ctype.h **** 	    {								      \
 170:/usr/include/ctype.h **** 	      int __c = (c);						      \
 171:/usr/include/ctype.h **** 	      __res = __c < -128 || __c > 255 ? __c : (a)[__c];		      \
 172:/usr/include/ctype.h **** 	    }								      \
 173:/usr/include/ctype.h **** 	  else								      \
 174:/usr/include/ctype.h **** 	    __res = f args;						      \
 175:/usr/include/ctype.h **** 	}								      \
 176:/usr/include/ctype.h ****       else								      \
 177:/usr/include/ctype.h **** 	__res = (a)[(int) (c)];						      \
 178:/usr/include/ctype.h ****       __res; }))
 179:/usr/include/ctype.h **** 
 180:/usr/include/ctype.h **** #if !defined __NO_CTYPE
 181:/usr/include/ctype.h **** # ifdef __isctype_f
 182:/usr/include/ctype.h **** __isctype_f (alnum)
 7571              		.loc 5 182 0
 7572 0025 498B0424 		movq	(%r12), %rax
 7573              	.LBE705:
 7574              	.LBE704:
 7575              		.loc 1 834 0
 7576 0029 F60008   		testb	$8, (%rax)
 7577 002c 754A     		jne	.L626
 7578              	.L627:
 7579              	.LBB707:
 7580              	.LBB708:
 7581              		.loc 1 243 0
 7582 002e 395D34   		cmpl	%ebx, 52(%rbp)
 7583 0031 7F5D     		jg	.L650
 7584              	.L628:
 7585              	.LBE708:
 7586              	.LBE707:
 7587              	.LBB711:
 7588              	.LBB712:
 7589              		.loc 5 182 0
 7590 0033 498B0424 		movq	(%r12), %rax
 7591              	.LBE712:
 7592              	.LBE711:
 7593              		.loc 1 838 0
 7594 0037 F60008   		testb	$8, (%rax)
 7595 003a 747E     		je	.L631
 7596              	.L638:
 7597              		.loc 1 841 0
 7598 003c 89D8     		movl	%ebx, %eax
 7599 003e 5B       		popq	%rbx
 7600              		.cfi_remember_state
 7601              		.cfi_def_cfa_offset 24
 7602              	.LVL860:
 7603 003f 5D       		popq	%rbp
 7604              		.cfi_def_cfa_offset 16
 7605              	.LVL861:
 7606 0040 415C     		popq	%r12
 7607              		.cfi_def_cfa_offset 8
 7608 0042 C3       		ret
 7609              	.LVL862:
 7610              		.p2align 4,,10
 7611 0043 0F1F4400 		.p2align 3
 7611      00
 7612              	.L649:
 7613              		.cfi_restore_state
 7614              	.LBB714:
 7615              	.LBB703:
 7616 0048 89DE     		movl	%ebx, %esi
 7617 004a 4889EF   		movq	%rbp, %rdi
 7618 004d E8000000 		call	_ZNK14Fl_Text_Buffer7char_atEi.part.5
 7618      00
 7619              	.LVL863:
 7620              	.LBE703:
 7621              	.LBE714:
 7622              	.LBB715:
 7623              	.LBB706:
 7624              		.loc 5 182 0
 7625 0052 498B1424 		movq	(%r12), %rdx
 7626 0056 4898     		cltq
 7627              	.LBE706:
 7628              	.LBE715:
 7629              		.loc 1 834 0
 7630 0058 F6044208 		testb	$8, (%rdx,%rax,2)
 7631 005c 751A     		jne	.L626
 7632              	.LVL864:
 7633              	.LBB716:
 7634              	.LBB717:
 7635              		.loc 1 243 0
 7636 005e 395D34   		cmpl	%ebx, 52(%rbp)
 7637 0061 7ECB     		jle	.L627
 7638 0063 89DE     		movl	%ebx, %esi
 7639 0065 4889EF   		movq	%rbp, %rdi
 7640 0068 E8000000 		call	_ZNK14Fl_Text_Buffer7char_atEi.part.5
 7640      00
 7641              	.LVL865:
 7642              	.LBE717:
 7643              	.LBE716:
 7644              		.loc 1 834 0
 7645 006d 83F85F   		cmpl	$95, %eax
 7646 0070 75BC     		jne	.L627
 7647              		.p2align 4,,10
 7648 0072 660F1F44 		.p2align 3
 7648      0000
 7649              	.L626:
 7650              	.LVL866:
 7651              	.LBB718:
 7652              	.LBB719:
 7653              		.loc 1 1762 0
 7654 0078 89DE     		movl	%ebx, %esi
 7655 007a 4889EF   		movq	%rbp, %rdi
 7656 007d E8000000 		call	_ZNK14Fl_Text_Buffer17prev_char_clippedEi
 7656      00
 7657              	.LVL867:
 7658              	.LBE719:
 7659              	.LBE718:
 7660              		.loc 1 834 0
 7661 0082 85C0     		testl	%eax, %eax
 7662              	.LBB721:
 7663              	.LBB720:
 7664              		.loc 1 1762 0
 7665 0084 89C3     		movl	%eax, %ebx
 7666              	.LVL868:
 7667              	.LBE720:
 7668              	.LBE721:
 7669              		.loc 1 834 0
 7670 0086 7F98     		jg	.L632
 7671 0088 EB46     		jmp	.L624
 7672              	.LVL869:
 7673 008a 660F1F44 		.p2align 4,,10
 7673      0000
 7674              		.p2align 3
 7675              	.L650:
 7676              	.LBB722:
 7677              	.LBB709:
 7678 0090 89DE     		movl	%ebx, %esi
 7679 0092 4889EF   		movq	%rbp, %rdi
 7680 0095 E8000000 		call	_ZNK14Fl_Text_Buffer7char_atEi.part.5
 7680      00
 7681              	.LVL870:
 7682              	.LBE709:
 7683              	.LBE722:
 7684              	.LBB723:
 7685              	.LBB713:
 7686              		.loc 5 182 0
 7687 009a 498B1424 		movq	(%r12), %rdx
 7688 009e 4898     		cltq
 7689              	.LBE713:
 7690              	.LBE723:
 7691              		.loc 1 838 0
 7692 00a0 F6044208 		testb	$8, (%rdx,%rax,2)
 7693 00a4 7596     		jne	.L638
 7694              	.LVL871:
 7695              	.LBB724:
 7696              	.LBB725:
 7697              		.loc 1 243 0
 7698 00a6 395D34   		cmpl	%ebx, 52(%rbp)
 7699 00a9 7E0F     		jle	.L631
 7700 00ab 89DE     		movl	%ebx, %esi
 7701 00ad 4889EF   		movq	%rbp, %rdi
 7702 00b0 E8000000 		call	_ZNK14Fl_Text_Buffer7char_atEi.part.5
 7702      00
 7703              	.LVL872:
 7704              	.LBE725:
 7705              	.LBE724:
 7706              		.loc 1 838 0
 7707 00b5 83F85F   		cmpl	$95, %eax
 7708 00b8 7482     		je	.L638
 7709              	.L631:
 7710              		.loc 1 839 0
 7711 00ba 89DE     		movl	%ebx, %esi
 7712 00bc 4889EF   		movq	%rbp, %rdi
 7713              		.loc 1 841 0
 7714 00bf 5B       		popq	%rbx
 7715              		.cfi_remember_state
 7716              		.cfi_def_cfa_offset 24
 7717              	.LVL873:
 7718 00c0 5D       		popq	%rbp
 7719              		.cfi_def_cfa_offset 16
 7720              	.LVL874:
 7721 00c1 415C     		popq	%r12
 7722              		.cfi_def_cfa_offset 8
 7723              		.loc 1 839 0
 7724 00c3 E9000000 		jmp	_ZNK14Fl_Text_Buffer9next_charEi
 7724      00
 7725              	.LVL875:
 7726              	.L648:
 7727              		.cfi_restore_state
 7728 00c8 E8000000 		call	__ctype_b_loc
 7728      00
 7729              	.LVL876:
 7730 00cd 4989C4   		movq	%rax, %r12
 7731              	.L624:
 7732              	.LVL877:
 7733              	.LBB726:
 7734              	.LBB710:
 7735              		.loc 1 243 0
 7736 00d0 85DB     		testl	%ebx, %ebx
 7737 00d2 0F8956FF 		jns	.L627
 7737      FFFF
 7738 00d8 E956FFFF 		jmp	.L628
 7738      FF
 7739              	.LBE710:
 7740              	.LBE726:
 7741              		.cfi_endproc
 7742              	.LFE230:
 7744              		.section	.text.unlikely._ZNK14Fl_Text_Buffer10word_startEi
 7745              	.LCOLDE72:
 7746              		.section	.text._ZNK14Fl_Text_Buffer10word_startEi
 7747              	.LHOTE72:
 7748              		.section	.text.unlikely._ZNK14Fl_Text_Buffer8word_endEi,"ax",@progbits
 7749              		.align 2
 7750              	.LCOLDB73:
 7751              		.section	.text._ZNK14Fl_Text_Buffer8word_endEi,"ax",@progbits
 7752              	.LHOTB73:
 7753              		.align 2
 7754              		.p2align 4,,15
 7755              		.globl	_ZNK14Fl_Text_Buffer8word_endEi
 7757              	_ZNK14Fl_Text_Buffer8word_endEi:
 7758              	.LFB231:
 7759              		.loc 1 848 0
 7760              		.cfi_startproc
 7761              	.LVL878:
 7762 0000 4154     		pushq	%r12
 7763              		.cfi_def_cfa_offset 16
 7764              		.cfi_offset 12, -16
 7765 0002 55       		pushq	%rbp
 7766              		.cfi_def_cfa_offset 24
 7767              		.cfi_offset 6, -24
 7768 0003 53       		pushq	%rbx
 7769              		.cfi_def_cfa_offset 32
 7770              		.cfi_offset 3, -32
 7771              		.loc 1 850 0
 7772 0004 3B7734   		cmpl	52(%rdi), %esi
 7773              		.loc 1 848 0
 7774 0007 89F3     		movl	%esi, %ebx
 7775              		.loc 1 850 0
 7776 0009 7D2E     		jge	.L658
 7777              	.LBB727:
 7778              	.LBB728:
 7779              		.loc 1 243 0
 7780 000b 85DB     		testl	%ebx, %ebx
 7781 000d 4889FD   		movq	%rdi, %rbp
 7782              	.LVL879:
 7783 0010 7852     		js	.L653
 7784              	.LVL880:
 7785              		.p2align 4,,10
 7786 0012 660F1F44 		.p2align 3
 7786      0000
 7787              	.L665:
 7788 0018 89DE     		movl	%ebx, %esi
 7789 001a 4889EF   		movq	%rbp, %rdi
 7790 001d E8000000 		call	_ZNK14Fl_Text_Buffer7char_atEi.part.5
 7790      00
 7791              	.LVL881:
 7792 0022 4C63E0   		movslq	%eax, %r12
 7793              	.LVL882:
 7794              	.LBE728:
 7795              	.LBE727:
 7796              	.LBB730:
 7797              	.LBB731:
 7798              		.loc 5 182 0
 7799 0025 E8000000 		call	__ctype_b_loc
 7799      00
 7800              	.LVL883:
 7801 002a 488B00   		movq	(%rax), %rax
 7802              	.LBE731:
 7803              	.LBE730:
 7804              		.loc 1 850 0
 7805 002d 42F60460 		testb	$8, (%rax,%r12,2)
 7805      08
 7806 0032 751B     		jne	.L654
 7807              	.LVL884:
 7808              	.LBB733:
 7809              	.LBB734:
 7810              		.loc 1 243 0
 7811 0034 395D34   		cmpl	%ebx, 52(%rbp)
 7812 0037 7F07     		jg	.L664
 7813              	.LVL885:
 7814              	.L658:
 7815              	.LBE734:
 7816              	.LBE733:
 7817              		.loc 1 855 0
 7818 0039 89D8     		movl	%ebx, %eax
 7819 003b 5B       		popq	%rbx
 7820              		.cfi_remember_state
 7821              		.cfi_def_cfa_offset 24
 7822              	.LVL886:
 7823 003c 5D       		popq	%rbp
 7824              		.cfi_def_cfa_offset 16
 7825 003d 415C     		popq	%r12
 7826              		.cfi_def_cfa_offset 8
 7827 003f C3       		ret
 7828              	.LVL887:
 7829              		.p2align 4,,10
 7830              		.p2align 3
 7831              	.L664:
 7832              		.cfi_restore_state
 7833              	.LBB736:
 7834              	.LBB735:
 7835 0040 89DE     		movl	%ebx, %esi
 7836 0042 4889EF   		movq	%rbp, %rdi
 7837 0045 E8000000 		call	_ZNK14Fl_Text_Buffer7char_atEi.part.5
 7837      00
 7838              	.LVL888:
 7839              	.LBE735:
 7840              	.LBE736:
 7841              		.loc 1 850 0
 7842 004a 83F85F   		cmpl	$95, %eax
 7843 004d 75EA     		jne	.L658
 7844              	.L654:
 7845              		.loc 1 852 0
 7846 004f 89DE     		movl	%ebx, %esi
 7847 0051 4889EF   		movq	%rbp, %rdi
 7848 0054 E8000000 		call	_ZNK14Fl_Text_Buffer9next_charEi
 7848      00
 7849              	.LVL889:
 7850              		.loc 1 850 0
 7851 0059 3B4534   		cmpl	52(%rbp), %eax
 7852              		.loc 1 852 0
 7853 005c 89C3     		movl	%eax, %ebx
 7854              	.LVL890:
 7855              		.loc 1 850 0
 7856 005e 7DD9     		jge	.L658
 7857              	.LVL891:
 7858              	.LBB737:
 7859              	.LBB729:
 7860              		.loc 1 243 0
 7861 0060 85DB     		testl	%ebx, %ebx
 7862 0062 79B4     		jns	.L665
 7863              	.LVL892:
 7864              	.L653:
 7865              	.LBE729:
 7866              	.LBE737:
 7867              	.LBB738:
 7868              	.LBB732:
 7869              		.loc 5 182 0
 7870 0064 E8000000 		call	__ctype_b_loc
 7870      00
 7871              	.LVL893:
 7872 0069 488B00   		movq	(%rax), %rax
 7873              	.LBE732:
 7874              	.LBE738:
 7875              		.loc 1 850 0
 7876 006c F60008   		testb	$8, (%rax)
 7877 006f 75DE     		jne	.L654
 7878 0071 EBC6     		jmp	.L658
 7879              		.cfi_endproc
 7880              	.LFE231:
 7882              		.section	.text.unlikely._ZNK14Fl_Text_Buffer8word_endEi
 7883              	.LCOLDE73:
 7884              		.section	.text._ZNK14Fl_Text_Buffer8word_endEi
 7885              	.LHOTE73:
 7886              		.section	.text.unlikely._ZNK14Fl_Text_Buffer26count_displayed_charactersEii,"ax",@progbits
 7887              		.align 2
 7888              	.LCOLDB74:
 7889              		.section	.text._ZNK14Fl_Text_Buffer26count_displayed_charactersEii,"ax",@progbits
 7890              	.LHOTB74:
 7891              		.align 2
 7892              		.p2align 4,,15
 7893              		.globl	_ZNK14Fl_Text_Buffer26count_displayed_charactersEii
 7895              	_ZNK14Fl_Text_Buffer26count_displayed_charactersEii:
 7896              	.LFB232:
 7897              		.loc 1 863 0
 7898              		.cfi_startproc
 7899              	.LVL894:
 7900              		.loc 1 870 0
 7901 0000 39D6     		cmpl	%edx, %esi
 7902              		.loc 1 863 0
 7903 0002 4154     		pushq	%r12
 7904              		.cfi_def_cfa_offset 16
 7905              		.cfi_offset 12, -16
 7906 0004 55       		pushq	%rbp
 7907              		.cfi_def_cfa_offset 24
 7908              		.cfi_offset 6, -24
 7909 0005 53       		pushq	%rbx
 7910              		.cfi_def_cfa_offset 32
 7911              		.cfi_offset 3, -32
 7912              		.loc 1 870 0
 7913 0006 7D20     		jge	.L669
 7914 0008 4989FC   		movq	%rdi, %r12
 7915 000b 89D5     		movl	%edx, %ebp
 7916 000d 31DB     		xorl	%ebx, %ebx
 7917              	.LVL895:
 7918 000f 90       		.p2align 4,,10
 7919              		.p2align 3
 7920              	.L668:
 7921              		.loc 1 871 0
 7922 0010 4C89E7   		movq	%r12, %rdi
 7923              		.loc 1 872 0
 7924 0013 83C301   		addl	$1, %ebx
 7925              	.LVL896:
 7926              		.loc 1 871 0
 7927 0016 E8000000 		call	_ZNK14Fl_Text_Buffer9next_charEi
 7927      00
 7928              	.LVL897:
 7929              		.loc 1 870 0
 7930 001b 39C5     		cmpl	%eax, %ebp
 7931              		.loc 1 871 0
 7932 001d 89C6     		movl	%eax, %esi
 7933              	.LVL898:
 7934              		.loc 1 870 0
 7935 001f 7FEF     		jg	.L668
 7936              	.LVL899:
 7937              	.L667:
 7938              		.loc 1 875 0
 7939 0021 89D8     		movl	%ebx, %eax
 7940 0023 5B       		popq	%rbx
 7941              		.cfi_remember_state
 7942              		.cfi_def_cfa_offset 24
 7943 0024 5D       		popq	%rbp
 7944              		.cfi_def_cfa_offset 16
 7945 0025 415C     		popq	%r12
 7946              		.cfi_def_cfa_offset 8
 7947 0027 C3       		ret
 7948              	.LVL900:
 7949              	.L669:
 7950              		.cfi_restore_state
 7951              		.loc 1 867 0
 7952 0028 31DB     		xorl	%ebx, %ebx
 7953 002a EBF5     		jmp	.L667
 7954              		.cfi_endproc
 7955              	.LFE232:
 7957              		.section	.text.unlikely._ZNK14Fl_Text_Buffer26count_displayed_charactersEii
 7958              	.LCOLDE74:
 7959              		.section	.text._ZNK14Fl_Text_Buffer26count_displayed_charactersEii
 7960              	.LHOTE74:
 7961              		.section	.text.unlikely._ZN14Fl_Text_Buffer25skip_displayed_charactersEii,"ax",@progbits
 7962              		.align 2
 7963              	.LCOLDB75:
 7964              		.section	.text._ZN14Fl_Text_Buffer25skip_displayed_charactersEii,"ax",@progbits
 7965              	.LHOTB75:
 7966              		.align 2
 7967              		.p2align 4,,15
 7968              		.globl	_ZN14Fl_Text_Buffer25skip_displayed_charactersEii
 7970              	_ZN14Fl_Text_Buffer25skip_displayed_charactersEii:
 7971              	.LFB233:
 7972              		.loc 1 883 0
 7973              		.cfi_startproc
 7974              	.LVL901:
 7975 0000 4155     		pushq	%r13
 7976              		.cfi_def_cfa_offset 16
 7977              		.cfi_offset 13, -16
 7978 0002 4154     		pushq	%r12
 7979              		.cfi_def_cfa_offset 24
 7980              		.cfi_offset 12, -24
 7981 0004 55       		pushq	%rbp
 7982              		.cfi_def_cfa_offset 32
 7983              		.cfi_offset 6, -32
 7984 0005 53       		pushq	%rbx
 7985              		.cfi_def_cfa_offset 40
 7986              		.cfi_offset 3, -40
 7987 0006 89F3     		movl	%esi, %ebx
 7988 0008 4883EC08 		subq	$8, %rsp
 7989              		.cfi_def_cfa_offset 48
 7990              	.LBB739:
 7991              		.loc 1 888 0
 7992 000c 85D2     		testl	%edx, %edx
 7993 000e 7E3E     		jle	.L673
 7994 0010 3B7734   		cmpl	52(%rdi), %esi
 7995 0013 4989FC   		movq	%rdi, %r12
 7996 0016 7D36     		jge	.L673
 7997 0018 4189D5   		movl	%edx, %r13d
 7998 001b 31ED     		xorl	%ebp, %ebp
 7999 001d EB1C     		jmp	.L675
 8000              	.LVL902:
 8001 001f 90       		.p2align 4,,10
 8002              		.p2align 3
 8003              	.L678:
 8004              	.LBB740:
 8005              		.loc 1 892 0
 8006 0020 89DE     		movl	%ebx, %esi
 8007 0022 4C89E7   		movq	%r12, %rdi
 8008              	.LBE740:
 8009              		.loc 1 888 0
 8010 0025 83C501   		addl	$1, %ebp
 8011              	.LVL903:
 8012              	.LBB743:
 8013              		.loc 1 892 0
 8014 0028 E8000000 		call	_ZNK14Fl_Text_Buffer9next_charEi
 8014      00
 8015              	.LVL904:
 8016              	.LBE743:
 8017              		.loc 1 888 0
 8018 002d 4139ED   		cmpl	%ebp, %r13d
 8019              	.LBB744:
 8020              		.loc 1 892 0
 8021 0030 89C3     		movl	%eax, %ebx
 8022              	.LVL905:
 8023              	.LBE744:
 8024              		.loc 1 888 0
 8025 0032 741A     		je	.L673
 8026              		.loc 1 888 0 is_stmt 0 discriminator 2
 8027 0034 41395C24 		cmpl	%ebx, 52(%r12)
 8027      34
 8028 0039 7E13     		jle	.L673
 8029              	.LVL906:
 8030              	.L675:
 8031              	.LBB745:
 8032              	.LBB741:
 8033              	.LBB742:
 8034              		.loc 1 243 0 is_stmt 1
 8035 003b 85DB     		testl	%ebx, %ebx
 8036 003d 78E1     		js	.L678
 8037 003f 89DE     		movl	%ebx, %esi
 8038 0041 4C89E7   		movq	%r12, %rdi
 8039 0044 E8000000 		call	_ZNK14Fl_Text_Buffer7char_atEi.part.5
 8039      00
 8040              	.LVL907:
 8041              	.LBE742:
 8042              	.LBE741:
 8043              		.loc 1 890 0
 8044 0049 83F80A   		cmpl	$10, %eax
 8045 004c 75D2     		jne	.L678
 8046              	.LVL908:
 8047              	.L673:
 8048              	.LBE745:
 8049              	.LBE739:
 8050              		.loc 1 895 0
 8051 004e 4883C408 		addq	$8, %rsp
 8052              		.cfi_def_cfa_offset 40
 8053 0052 89D8     		movl	%ebx, %eax
 8054 0054 5B       		popq	%rbx
 8055              		.cfi_def_cfa_offset 32
 8056              	.LVL909:
 8057 0055 5D       		popq	%rbp
 8058              		.cfi_def_cfa_offset 24
 8059 0056 415C     		popq	%r12
 8060              		.cfi_def_cfa_offset 16
 8061 0058 415D     		popq	%r13
 8062              		.cfi_def_cfa_offset 8
 8063 005a C3       		ret
 8064              		.cfi_endproc
 8065              	.LFE233:
 8067              		.section	.text.unlikely._ZN14Fl_Text_Buffer25skip_displayed_charactersEii
 8068              	.LCOLDE75:
 8069              		.section	.text._ZN14Fl_Text_Buffer25skip_displayed_charactersEii
 8070              	.LHOTE75:
 8071              		.section	.text.unlikely._ZNK14Fl_Text_Buffer14search_forwardEiPKcPii,"ax",@progbits
 8072              		.align 2
 8073              	.LCOLDB76:
 8074              		.section	.text._ZNK14Fl_Text_Buffer14search_forwardEiPKcPii,"ax",@progbits
 8075              	.LHOTB76:
 8076              		.align 2
 8077              		.p2align 4,,15
 8078              		.globl	_ZNK14Fl_Text_Buffer14search_forwardEiPKcPii
 8080              	_ZNK14Fl_Text_Buffer14search_forwardEiPKcPii:
 8081              	.LFB237:
 8082              		.loc 1 1008 0
 8083              		.cfi_startproc
 8084              	.LVL910:
 8085 0000 4157     		pushq	%r15
 8086              		.cfi_def_cfa_offset 16
 8087              		.cfi_offset 15, -16
 8088 0002 4156     		pushq	%r14
 8089              		.cfi_def_cfa_offset 24
 8090              		.cfi_offset 14, -24
 8091 0004 4155     		pushq	%r13
 8092              		.cfi_def_cfa_offset 32
 8093              		.cfi_offset 13, -32
 8094 0006 4154     		pushq	%r12
 8095              		.cfi_def_cfa_offset 40
 8096              		.cfi_offset 12, -40
 8097 0008 55       		pushq	%rbp
 8098              		.cfi_def_cfa_offset 48
 8099              		.cfi_offset 6, -48
 8100 0009 53       		pushq	%rbx
 8101              		.cfi_def_cfa_offset 56
 8102              		.cfi_offset 3, -56
 8103 000a 4883EC28 		subq	$40, %rsp
 8104              		.cfi_def_cfa_offset 96
 8105              		.loc 1 1008 0
 8106 000e 48894C24 		movq	%rcx, 8(%rsp)
 8106      08
 8107 0013 48891424 		movq	%rdx, (%rsp)
 8108 0017 64488B0C 		movq	%fs:40, %rcx
 8108      25280000 
 8108      00
 8109 0020 48894C24 		movq	%rcx, 24(%rsp)
 8109      18
 8110 0025 31C9     		xorl	%ecx, %ecx
 8111              	.LVL911:
 8112              		.loc 1 1012 0
 8113 0027 4885D2   		testq	%rdx, %rdx
 8114 002a 0F84B000 		je	.L686
 8114      0000
 8115              	.LBB746:
 8116              		.loc 1 1016 0
 8117 0030 4585C0   		testl	%r8d, %r8d
 8118 0033 4889FB   		movq	%rdi, %rbx
 8119 0036 4189F6   		movl	%esi, %r14d
 8120 0039 0F84BF00 		je	.L711
 8120      0000
 8121              	.LVL912:
 8122              	.LBB747:
 8123              		.loc 1 1017 0
 8124 003f 3B7734   		cmpl	52(%rdi), %esi
 8125 0042 0F8D9800 		jge	.L686
 8125      0000
 8126              	.LVL913:
 8127              	.L693:
 8128              	.LBB748:
 8129              	.LBB749:
 8130              	.LBB750:
 8131              		.loc 1 1021 0
 8132 0048 488B0424 		movq	(%rsp), %rax
 8133 004c 0FBE38   		movsbl	(%rax), %edi
 8134              	.LVL914:
 8135              		.loc 1 1023 0
 8136 004f 4084FF   		testb	%dil, %dil
 8137 0052 0F843001 		je	.L697
 8137      0000
 8138 0058 4C8B2424 		movq	(%rsp), %r12
 8139 005c 4489F5   		movl	%r14d, %ebp
 8140 005f EB31     		jmp	.L692
 8141              	.LVL915:
 8142              		.p2align 4,,10
 8143 0061 0F1F8000 		.p2align 3
 8143      000000
 8144              	.L712:
 8145              	.LBB751:
 8146              	.LBB752:
 8147              		.loc 2 230 0
 8148 0068 4863F5   		movslq	%ebp, %rsi
 8149 006b 48037338 		addq	56(%rbx), %rsi
 8150              	.LVL916:
 8151              	.LBE752:
 8152              	.LBE751:
 8153              		.loc 1 1028 0
 8154 006f 4C89FA   		movq	%r15, %rdx
 8155 0072 4C89E7   		movq	%r12, %rdi
 8156 0075 E8000000 		call	memcmp
 8156      00
 8157              	.LVL917:
 8158 007a 85C0     		testl	%eax, %eax
 8159 007c 7547     		jne	.L690
 8160              	.L713:
 8161              		.loc 1 1030 0
 8162 007e 4D01FC   		addq	%r15, %r12
 8163              	.LVL918:
 8164 0081 4401ED   		addl	%r13d, %ebp
 8165              	.LVL919:
 8166              		.loc 1 1021 0
 8167 0084 410FBE3C 		movsbl	(%r12), %edi
 8167      24
 8168              	.LVL920:
 8169              		.loc 1 1023 0
 8170 0089 4084FF   		testb	%dil, %dil
 8171 008c 0F84F600 		je	.L697
 8171      0000
 8172              	.LVL921:
 8173              	.L692:
 8174              		.loc 1 1027 0
 8175 0092 E8000000 		call	fl_utf8len1
 8175      00
 8176              	.LVL922:
 8177 0097 4C63F8   		movslq	%eax, %r15
 8178              	.LBB756:
 8179              	.LBB753:
 8180              		.loc 2 230 0
 8181 009a 48634340 		movslq	64(%rbx), %rax
 8182              	.LBE753:
 8183              	.LBE756:
 8184              		.loc 1 1027 0
 8185 009e 4D89FD   		movq	%r15, %r13
 8186              	.LVL923:
 8187              	.LBB757:
 8188              	.LBB754:
 8189              		.loc 2 230 0
 8190 00a1 39E8     		cmpl	%ebp, %eax
 8191 00a3 7FC3     		jg	.L712
 8192 00a5 48637344 		movslq	68(%rbx), %rsi
 8193              	.LBE754:
 8194              	.LBE757:
 8195              		.loc 1 1028 0
 8196 00a9 4C89FA   		movq	%r15, %rdx
 8197 00ac 4C89E7   		movq	%r12, %rdi
 8198              	.LBB758:
 8199              	.LBB755:
 8200              		.loc 2 230 0
 8201 00af 4829C6   		subq	%rax, %rsi
 8202 00b2 4863C5   		movslq	%ebp, %rax
 8203 00b5 4801C6   		addq	%rax, %rsi
 8204 00b8 48037338 		addq	56(%rbx), %rsi
 8205              	.LVL924:
 8206              	.LBE755:
 8207              	.LBE758:
 8208              		.loc 1 1028 0
 8209 00bc E8000000 		call	memcmp
 8209      00
 8210              	.LVL925:
 8211 00c1 85C0     		testl	%eax, %eax
 8212 00c3 74B9     		je	.L713
 8213              	.L690:
 8214              	.LBE750:
 8215              	.LBE749:
 8216              		.loc 1 1032 0
 8217 00c5 4489F6   		movl	%r14d, %esi
 8218 00c8 4889DF   		movq	%rbx, %rdi
 8219 00cb E8000000 		call	_ZNK14Fl_Text_Buffer9next_charEi
 8219      00
 8220              	.LVL926:
 8221              	.LBE748:
 8222              		.loc 1 1017 0
 8223 00d0 3B4334   		cmpl	52(%rbx), %eax
 8224              	.LBB759:
 8225              		.loc 1 1032 0
 8226 00d3 4189C6   		movl	%eax, %r14d
 8227              	.LVL927:
 8228              	.LBE759:
 8229              		.loc 1 1017 0
 8230 00d6 0F8C6CFF 		jl	.L693
 8230      FFFF
 8231              	.LVL928:
 8232 00dc 0F1F4000 		.p2align 4,,10
 8233              		.p2align 3
 8234              	.L686:
 8235              	.LBE747:
 8236              	.LBE746:
 8237              		.loc 1 1013 0
 8238 00e0 31C0     		xorl	%eax, %eax
 8239 00e2 E9AE0000 		jmp	.L683
 8239      00
 8240              	.LVL929:
 8241 00e7 660F1F84 		.p2align 4,,10
 8241      00000000 
 8241      00
 8242              		.p2align 3
 8243              	.L696:
 8244              	.LBB766:
 8245              	.LBB760:
 8246              	.LBB761:
 8247              		.loc 1 1052 0
 8248 00f0 4489F6   		movl	%r14d, %esi
 8249 00f3 4889DF   		movq	%rbx, %rdi
 8250 00f6 E8000000 		call	_ZNK14Fl_Text_Buffer9next_charEi
 8250      00
 8251              	.LVL930:
 8252 00fb 4189C6   		movl	%eax, %r14d
 8253              	.LVL931:
 8254              	.L711:
 8255              	.LBE761:
 8256              		.loc 1 1035 0
 8257 00fe 443B7334 		cmpl	52(%rbx), %r14d
 8258 0102 7DDC     		jge	.L686
 8259              	.LVL932:
 8260              	.LBB765:
 8261              	.LBB762:
 8262              		.loc 1 1040 0
 8263 0104 488B0424 		movq	(%rsp), %rax
 8264 0108 803800   		cmpb	$0, (%rax)
 8265 010b 747B     		je	.L697
 8266 010d 488B2C24 		movq	(%rsp), %rbp
 8267 0111 4589F7   		movl	%r14d, %r15d
 8268 0114 EB50     		jmp	.L698
 8269              	.LVL933:
 8270 0116 662E0F1F 		.p2align 4,,10
 8270      84000000 
 8270      0000
 8271              		.p2align 3
 8272              	.L695:
 8273              		.loc 1 1046 0
 8274 0120 488D5424 		leaq	20(%rsp), %rdx
 8274      14
 8275 0125 31F6     		xorl	%esi, %esi
 8276 0127 4889EF   		movq	%rbp, %rdi
 8277 012a E8000000 		call	fl_utf8decode
 8277      00
 8278              	.LVL934:
 8279              		.loc 1 1047 0
 8280 012f 4489E7   		movl	%r12d, %edi
 8281              		.loc 1 1046 0
 8282 0132 4189C5   		movl	%eax, %r13d
 8283              	.LVL935:
 8284              		.loc 1 1047 0
 8285 0135 E8000000 		call	fl_tolower
 8285      00
 8286              	.LVL936:
 8287 013a 4489EF   		movl	%r13d, %edi
 8288 013d 4189C4   		movl	%eax, %r12d
 8289 0140 E8000000 		call	fl_tolower
 8289      00
 8290              	.LVL937:
 8291 0145 4139C4   		cmpl	%eax, %r12d
 8292 0148 75A6     		jne	.L696
 8293              		.loc 1 1049 0
 8294 014a 48634424 		movslq	20(%rsp), %rax
 8294      14
 8295              		.loc 1 1050 0
 8296 014f 4489FE   		movl	%r15d, %esi
 8297 0152 4889DF   		movq	%rbx, %rdi
 8298              		.loc 1 1049 0
 8299 0155 4801C5   		addq	%rax, %rbp
 8300              	.LVL938:
 8301              		.loc 1 1050 0
 8302 0158 E8000000 		call	_ZNK14Fl_Text_Buffer9next_charEi
 8302      00
 8303              	.LVL939:
 8304              		.loc 1 1040 0
 8305 015d 807D0000 		cmpb	$0, 0(%rbp)
 8306              		.loc 1 1050 0
 8307 0161 4189C7   		movl	%eax, %r15d
 8308              	.LVL940:
 8309              		.loc 1 1040 0
 8310 0164 7422     		je	.L697
 8311              	.LVL941:
 8312              	.L698:
 8313              	.LBB763:
 8314              	.LBB764:
 8315              		.loc 1 244 0
 8316 0166 4531E4   		xorl	%r12d, %r12d
 8317              		.loc 1 243 0
 8318 0169 4585FF   		testl	%r15d, %r15d
 8319 016c 78B2     		js	.L695
 8320 016e 44397B34 		cmpl	%r15d, 52(%rbx)
 8321 0172 7EAC     		jle	.L695
 8322 0174 4489FE   		movl	%r15d, %esi
 8323 0177 4889DF   		movq	%rbx, %rdi
 8324 017a E8000000 		call	_ZNK14Fl_Text_Buffer7char_atEi.part.5
 8324      00
 8325              	.LVL942:
 8326 017f 4189C4   		movl	%eax, %r12d
 8327 0182 EB9C     		jmp	.L695
 8328              	.LVL943:
 8329              		.p2align 4,,10
 8330 0184 0F1F4000 		.p2align 3
 8331              	.L697:
 8332              	.LBE764:
 8333              	.LBE763:
 8334              		.loc 1 1041 0
 8335 0188 488B4424 		movq	8(%rsp), %rax
 8335      08
 8336 018d 448930   		movl	%r14d, (%rax)
 8337              		.loc 1 1042 0
 8338 0190 B8010000 		movl	$1, %eax
 8338      00
 8339              	.LVL944:
 8340              	.L683:
 8341              	.LBE762:
 8342              	.LBE765:
 8343              	.LBE760:
 8344              	.LBE766:
 8345              		.loc 1 1056 0
 8346 0195 488B4C24 		movq	24(%rsp), %rcx
 8346      18
 8347 019a 6448330C 		xorq	%fs:40, %rcx
 8347      25280000 
 8347      00
 8348 01a3 750F     		jne	.L714
 8349 01a5 4883C428 		addq	$40, %rsp
 8350              		.cfi_remember_state
 8351              		.cfi_def_cfa_offset 56
 8352              	.LVL945:
 8353 01a9 5B       		popq	%rbx
 8354              		.cfi_def_cfa_offset 48
 8355 01aa 5D       		popq	%rbp
 8356              		.cfi_def_cfa_offset 40
 8357 01ab 415C     		popq	%r12
 8358              		.cfi_def_cfa_offset 32
 8359 01ad 415D     		popq	%r13
 8360              		.cfi_def_cfa_offset 24
 8361 01af 415E     		popq	%r14
 8362              		.cfi_def_cfa_offset 16
 8363 01b1 415F     		popq	%r15
 8364              		.cfi_def_cfa_offset 8
 8365 01b3 C3       		ret
 8366              	.LVL946:
 8367              	.L714:
 8368              		.cfi_restore_state
 8369 01b4 E8000000 		call	__stack_chk_fail
 8369      00
 8370              	.LVL947:
 8371              		.cfi_endproc
 8372              	.LFE237:
 8374              		.section	.text.unlikely._ZNK14Fl_Text_Buffer14search_forwardEiPKcPii
 8375              	.LCOLDE76:
 8376              		.section	.text._ZNK14Fl_Text_Buffer14search_forwardEiPKcPii
 8377              	.LHOTE76:
 8378              		.section	.text.unlikely._ZNK14Fl_Text_Buffer15search_backwardEiPKcPii,"ax",@progbits
 8379              		.align 2
 8380              	.LCOLDB77:
 8381              		.section	.text._ZNK14Fl_Text_Buffer15search_backwardEiPKcPii,"ax",@progbits
 8382              	.LHOTB77:
 8383              		.align 2
 8384              		.p2align 4,,15
 8385              		.globl	_ZNK14Fl_Text_Buffer15search_backwardEiPKcPii
 8387              	_ZNK14Fl_Text_Buffer15search_backwardEiPKcPii:
 8388              	.LFB238:
 8389              		.loc 1 1060 0
 8390              		.cfi_startproc
 8391              	.LVL948:
 8392 0000 4157     		pushq	%r15
 8393              		.cfi_def_cfa_offset 16
 8394              		.cfi_offset 15, -16
 8395 0002 4156     		pushq	%r14
 8396              		.cfi_def_cfa_offset 24
 8397              		.cfi_offset 14, -24
 8398 0004 4155     		pushq	%r13
 8399              		.cfi_def_cfa_offset 32
 8400              		.cfi_offset 13, -32
 8401 0006 4154     		pushq	%r12
 8402              		.cfi_def_cfa_offset 40
 8403              		.cfi_offset 12, -40
 8404 0008 55       		pushq	%rbp
 8405              		.cfi_def_cfa_offset 48
 8406              		.cfi_offset 6, -48
 8407 0009 53       		pushq	%rbx
 8408              		.cfi_def_cfa_offset 56
 8409              		.cfi_offset 3, -56
 8410 000a 4883EC28 		subq	$40, %rsp
 8411              		.cfi_def_cfa_offset 96
 8412              		.loc 1 1060 0
 8413 000e 48894C24 		movq	%rcx, 8(%rsp)
 8413      08
 8414 0013 48891424 		movq	%rdx, (%rsp)
 8415 0017 64488B0C 		movq	%fs:40, %rcx
 8415      25280000 
 8415      00
 8416 0020 48894C24 		movq	%rcx, 24(%rsp)
 8416      18
 8417 0025 31C9     		xorl	%ecx, %ecx
 8418              	.LVL949:
 8419              		.loc 1 1064 0
 8420 0027 4885D2   		testq	%rdx, %rdx
 8421 002a 0F849E00 		je	.L719
 8421      0000
 8422              	.LBB767:
 8423              		.loc 1 1068 0
 8424 0030 4585C0   		testl	%r8d, %r8d
 8425 0033 4889FB   		movq	%rdi, %rbx
 8426 0036 4189F6   		movl	%esi, %r14d
 8427 0039 0F84AC00 		je	.L750
 8427      0000
 8428              	.LVL950:
 8429              	.L748:
 8430              	.LBB768:
 8431              		.loc 1 1069 0
 8432 003f 4585F6   		testl	%r14d, %r14d
 8433 0042 0F888600 		js	.L719
 8433      0000
 8434              	.LVL951:
 8435              	.LBB769:
 8436              	.LBB770:
 8437              		.loc 1 1073 0
 8438 0048 488B0424 		movq	(%rsp), %rax
 8439 004c 0FBE38   		movsbl	(%rax), %edi
 8440              	.LVL952:
 8441              		.loc 1 1075 0
 8442 004f 4084FF   		testb	%dil, %dil
 8443 0052 0F841801 		je	.L731
 8443      0000
 8444 0058 4C8B2424 		movq	(%rsp), %r12
 8445 005c 4489F5   		movl	%r14d, %ebp
 8446 005f EB31     		jmp	.L726
 8447              	.LVL953:
 8448              		.p2align 4,,10
 8449 0061 0F1F8000 		.p2align 3
 8449      000000
 8450              	.L751:
 8451              	.LBB771:
 8452              	.LBB772:
 8453              		.loc 2 230 0
 8454 0068 4863F5   		movslq	%ebp, %rsi
 8455 006b 48037338 		addq	56(%rbx), %rsi
 8456              	.LVL954:
 8457              	.LBE772:
 8458              	.LBE771:
 8459              		.loc 1 1080 0
 8460 006f 4C89FA   		movq	%r15, %rdx
 8461 0072 4C89E7   		movq	%r12, %rdi
 8462 0075 E8000000 		call	memcmp
 8462      00
 8463              	.LVL955:
 8464 007a 85C0     		testl	%eax, %eax
 8465 007c 7547     		jne	.L724
 8466              	.L752:
 8467              		.loc 1 1082 0
 8468 007e 4D01FC   		addq	%r15, %r12
 8469              	.LVL956:
 8470 0081 4401ED   		addl	%r13d, %ebp
 8471              	.LVL957:
 8472              		.loc 1 1073 0
 8473 0084 410FBE3C 		movsbl	(%r12), %edi
 8473      24
 8474              	.LVL958:
 8475              		.loc 1 1075 0
 8476 0089 4084FF   		testb	%dil, %dil
 8477 008c 0F84DE00 		je	.L731
 8477      0000
 8478              	.LVL959:
 8479              	.L726:
 8480              		.loc 1 1079 0
 8481 0092 E8000000 		call	fl_utf8len1
 8481      00
 8482              	.LVL960:
 8483 0097 4C63F8   		movslq	%eax, %r15
 8484              	.LBB776:
 8485              	.LBB773:
 8486              		.loc 2 230 0
 8487 009a 48634340 		movslq	64(%rbx), %rax
 8488              	.LBE773:
 8489              	.LBE776:
 8490              		.loc 1 1079 0
 8491 009e 4D89FD   		movq	%r15, %r13
 8492              	.LVL961:
 8493              	.LBB777:
 8494              	.LBB774:
 8495              		.loc 2 230 0
 8496 00a1 39E8     		cmpl	%ebp, %eax
 8497 00a3 7FC3     		jg	.L751
 8498 00a5 48637344 		movslq	68(%rbx), %rsi
 8499              	.LBE774:
 8500              	.LBE777:
 8501              		.loc 1 1080 0
 8502 00a9 4C89FA   		movq	%r15, %rdx
 8503 00ac 4C89E7   		movq	%r12, %rdi
 8504              	.LBB778:
 8505              	.LBB775:
 8506              		.loc 2 230 0
 8507 00af 4829C6   		subq	%rax, %rsi
 8508 00b2 4863C5   		movslq	%ebp, %rax
 8509 00b5 4801C6   		addq	%rax, %rsi
 8510 00b8 48037338 		addq	56(%rbx), %rsi
 8511              	.LVL962:
 8512              	.LBE775:
 8513              	.LBE778:
 8514              		.loc 1 1080 0
 8515 00bc E8000000 		call	memcmp
 8515      00
 8516              	.LVL963:
 8517 00c1 85C0     		testl	%eax, %eax
 8518 00c3 74B9     		je	.L752
 8519              	.L724:
 8520              	.LVL964:
 8521              	.LBE770:
 8522              	.LBE769:
 8523              	.LBB779:
 8524              	.LBB780:
 8525              		.loc 1 1761 0
 8526 00c5 4585F6   		testl	%r14d, %r14d
 8527 00c8 0F85D200 		jne	.L753
 8527      0000
 8528              	.LVL965:
 8529              	.L719:
 8530              	.LBE780:
 8531              	.LBE779:
 8532              	.LBE768:
 8533              	.LBE767:
 8534              		.loc 1 1065 0
 8535 00ce 31C0     		xorl	%eax, %eax
 8536 00d0 E9A80000 		jmp	.L717
 8536      00
 8537              	.LVL966:
 8538              		.p2align 4,,10
 8539 00d5 0F1F00   		.p2align 3
 8540              	.L730:
 8541              	.LBB790:
 8542              	.LBB783:
 8543              	.LBB784:
 8544              	.LBB785:
 8545              		.loc 1 1761 0
 8546 00d8 4585F6   		testl	%r14d, %r14d
 8547 00db 74F1     		je	.L719
 8548              		.loc 1 1762 0
 8549 00dd 4489F6   		movl	%r14d, %esi
 8550 00e0 4889DF   		movq	%rbx, %rdi
 8551 00e3 E8000000 		call	_ZNK14Fl_Text_Buffer17prev_char_clippedEi
 8551      00
 8552              	.LVL967:
 8553 00e8 4189C6   		movl	%eax, %r14d
 8554              	.LVL968:
 8555              	.L750:
 8556              	.LBE785:
 8557              	.LBE784:
 8558              		.loc 1 1087 0
 8559 00eb 4585F6   		testl	%r14d, %r14d
 8560 00ee 78DE     		js	.L719
 8561              	.LVL969:
 8562              	.LBB786:
 8563              		.loc 1 1092 0
 8564 00f0 488B0424 		movq	(%rsp), %rax
 8565 00f4 803800   		cmpb	$0, (%rax)
 8566 00f7 7477     		je	.L731
 8567 00f9 488B2C24 		movq	(%rsp), %rbp
 8568 00fd 4589F7   		movl	%r14d, %r15d
 8569 0100 EB4C     		jmp	.L732
 8570              	.LVL970:
 8571              		.p2align 4,,10
 8572 0102 660F1F44 		.p2align 3
 8572      0000
 8573              	.L729:
 8574              		.loc 1 1098 0
 8575 0108 488D5424 		leaq	20(%rsp), %rdx
 8575      14
 8576 010d 31F6     		xorl	%esi, %esi
 8577 010f 4889EF   		movq	%rbp, %rdi
 8578 0112 E8000000 		call	fl_utf8decode
 8578      00
 8579              	.LVL971:
 8580              		.loc 1 1099 0
 8581 0117 4489E7   		movl	%r12d, %edi
 8582              		.loc 1 1098 0
 8583 011a 4189C5   		movl	%eax, %r13d
 8584              	.LVL972:
 8585              		.loc 1 1099 0
 8586 011d E8000000 		call	fl_tolower
 8586      00
 8587              	.LVL973:
 8588 0122 4489EF   		movl	%r13d, %edi
 8589 0125 4189C4   		movl	%eax, %r12d
 8590 0128 E8000000 		call	fl_tolower
 8590      00
 8591              	.LVL974:
 8592 012d 4139C4   		cmpl	%eax, %r12d
 8593 0130 75A6     		jne	.L730
 8594              		.loc 1 1101 0
 8595 0132 48634424 		movslq	20(%rsp), %rax
 8595      14
 8596              		.loc 1 1102 0
 8597 0137 4489FE   		movl	%r15d, %esi
 8598 013a 4889DF   		movq	%rbx, %rdi
 8599              		.loc 1 1101 0
 8600 013d 4801C5   		addq	%rax, %rbp
 8601              	.LVL975:
 8602              		.loc 1 1102 0
 8603 0140 E8000000 		call	_ZNK14Fl_Text_Buffer9next_charEi
 8603      00
 8604              	.LVL976:
 8605              		.loc 1 1092 0
 8606 0145 807D0000 		cmpb	$0, 0(%rbp)
 8607              		.loc 1 1102 0
 8608 0149 4189C7   		movl	%eax, %r15d
 8609              	.LVL977:
 8610              		.loc 1 1092 0
 8611 014c 7422     		je	.L731
 8612              	.LVL978:
 8613              	.L732:
 8614              	.LBB787:
 8615              	.LBB788:
 8616              		.loc 1 244 0
 8617 014e 4531E4   		xorl	%r12d, %r12d
 8618              		.loc 1 243 0
 8619 0151 4585FF   		testl	%r15d, %r15d
 8620 0154 78B2     		js	.L729
 8621 0156 44397B34 		cmpl	%r15d, 52(%rbx)
 8622 015a 7EAC     		jle	.L729
 8623 015c 4489FE   		movl	%r15d, %esi
 8624 015f 4889DF   		movq	%rbx, %rdi
 8625 0162 E8000000 		call	_ZNK14Fl_Text_Buffer7char_atEi.part.5
 8625      00
 8626              	.LVL979:
 8627 0167 4189C4   		movl	%eax, %r12d
 8628 016a EB9C     		jmp	.L729
 8629              	.LVL980:
 8630 016c 0F1F4000 		.p2align 4,,10
 8631              		.p2align 3
 8632              	.L731:
 8633              	.LBE788:
 8634              	.LBE787:
 8635              		.loc 1 1093 0
 8636 0170 488B4424 		movq	8(%rsp), %rax
 8636      08
 8637 0175 448930   		movl	%r14d, (%rax)
 8638              		.loc 1 1094 0
 8639 0178 B8010000 		movl	$1, %eax
 8639      00
 8640              	.LVL981:
 8641              	.L717:
 8642              	.LBE786:
 8643              	.LBE783:
 8644              	.LBE790:
 8645              		.loc 1 1108 0
 8646 017d 488B4C24 		movq	24(%rsp), %rcx
 8646      18
 8647 0182 6448330C 		xorq	%fs:40, %rcx
 8647      25280000 
 8647      00
 8648 018b 7526     		jne	.L754
 8649 018d 4883C428 		addq	$40, %rsp
 8650              		.cfi_remember_state
 8651              		.cfi_def_cfa_offset 56
 8652              	.LVL982:
 8653 0191 5B       		popq	%rbx
 8654              		.cfi_def_cfa_offset 48
 8655 0192 5D       		popq	%rbp
 8656              		.cfi_def_cfa_offset 40
 8657 0193 415C     		popq	%r12
 8658              		.cfi_def_cfa_offset 32
 8659 0195 415D     		popq	%r13
 8660              		.cfi_def_cfa_offset 24
 8661 0197 415E     		popq	%r14
 8662              		.cfi_def_cfa_offset 16
 8663 0199 415F     		popq	%r15
 8664              		.cfi_def_cfa_offset 8
 8665 019b C3       		ret
 8666              	.LVL983:
 8667 019c 0F1F4000 		.p2align 4,,10
 8668              		.p2align 3
 8669              	.L753:
 8670              		.cfi_restore_state
 8671              	.LBB791:
 8672              	.LBB789:
 8673              	.LBB782:
 8674              	.LBB781:
 8675              		.loc 1 1762 0
 8676 01a0 4489F6   		movl	%r14d, %esi
 8677 01a3 4889DF   		movq	%rbx, %rdi
 8678 01a6 E8000000 		call	_ZNK14Fl_Text_Buffer17prev_char_clippedEi
 8678      00
 8679              	.LVL984:
 8680 01ab 4189C6   		movl	%eax, %r14d
 8681              	.LVL985:
 8682 01ae E98CFEFF 		jmp	.L748
 8682      FF
 8683              	.LVL986:
 8684              	.L754:
 8685              	.LBE781:
 8686              	.LBE782:
 8687              	.LBE789:
 8688              	.LBE791:
 8689              		.loc 1 1108 0
 8690 01b3 E8000000 		call	__stack_chk_fail
 8690      00
 8691              	.LVL987:
 8692              		.cfi_endproc
 8693              	.LFE238:
 8695              		.section	.text.unlikely._ZNK14Fl_Text_Buffer15search_backwardEiPKcPii
 8696              	.LCOLDE77:
 8697              		.section	.text._ZNK14Fl_Text_Buffer15search_backwardEiPKcPii
 8698              	.LHOTE77:
 8699              		.section	.text.unlikely._ZNK14Fl_Text_Buffer16findchar_forwardEijPi.part.11,"ax",@progbits
 8700              		.align 2
 8701              	.LCOLDB78:
 8702              		.section	.text._ZNK14Fl_Text_Buffer16findchar_forwardEijPi.part.11,"ax",@progbits
 8703              	.LHOTB78:
 8704              		.align 2
 8705              		.p2align 4,,15
 8707              	_ZNK14Fl_Text_Buffer16findchar_forwardEijPi.part.11:
 8708              	.LFB275:
 8709              		.loc 1 1467 0
 8710              		.cfi_startproc
 8711              	.LVL988:
 8712 0000 4155     		pushq	%r13
 8713              		.cfi_def_cfa_offset 16
 8714              		.cfi_offset 13, -16
 8715 0002 4154     		pushq	%r12
 8716              		.cfi_def_cfa_offset 24
 8717              		.cfi_offset 12, -24
 8718 0004 4989CD   		movq	%rcx, %r13
 8719 0007 55       		pushq	%rbp
 8720              		.cfi_def_cfa_offset 32
 8721              		.cfi_offset 6, -32
 8722 0008 53       		pushq	%rbx
 8723              		.cfi_def_cfa_offset 40
 8724              		.cfi_offset 3, -40
 8725 0009 BB000000 		movl	$0, %ebx
 8725      00
 8726 000e 4883EC08 		subq	$8, %rsp
 8727              		.cfi_def_cfa_offset 48
 8728              		.loc 1 1478 0
 8729 0012 8B4734   		movl	52(%rdi), %eax
 8730 0015 85F6     		testl	%esi, %esi
 8731 0017 0F49DE   		cmovns	%esi, %ebx
 8732              	.LVL989:
 8733 001a 39D8     		cmpl	%ebx, %eax
 8734 001c 7E52     		jle	.L756
 8735 001e 4889FD   		movq	%rdi, %rbp
 8736 0021 4189D4   		movl	%edx, %r12d
 8737 0024 EB1D     		jmp	.L760
 8738              	.LVL990:
 8739 0026 662E0F1F 		.p2align 4,,10
 8739      84000000 
 8739      0000
 8740              		.p2align 3
 8741              	.L758:
 8742 0030 89DE     		movl	%ebx, %esi
 8743 0032 4889EF   		movq	%rbp, %rdi
 8744 0035 E8000000 		call	_ZNK14Fl_Text_Buffer9next_charEi
 8744      00
 8745              	.LVL991:
 8746 003a 89C3     		movl	%eax, %ebx
 8747              	.LVL992:
 8748 003c 8B4534   		movl	52(%rbp), %eax
 8749              	.LVL993:
 8750 003f 39D8     		cmpl	%ebx, %eax
 8751 0041 7E2D     		jle	.L756
 8752              	.L760:
 8753              	.LVL994:
 8754              	.LBB792:
 8755              	.LBB793:
 8756              		.loc 1 244 0
 8757 0043 31C0     		xorl	%eax, %eax
 8758              		.loc 1 243 0
 8759 0045 85DB     		testl	%ebx, %ebx
 8760 0047 780A     		js	.L757
 8761 0049 89DE     		movl	%ebx, %esi
 8762 004b 4889EF   		movq	%rbp, %rdi
 8763 004e E8000000 		call	_ZNK14Fl_Text_Buffer7char_atEi.part.5
 8763      00
 8764              	.LVL995:
 8765              	.L757:
 8766              	.LBE793:
 8767              	.LBE792:
 8768              		.loc 1 1479 0
 8769 0053 4139C4   		cmpl	%eax, %r12d
 8770 0056 75D8     		jne	.L758
 8771              		.loc 1 1480 0
 8772 0058 41895D00 		movl	%ebx, 0(%r13)
 8773              		.loc 1 1487 0
 8774 005c 4883C408 		addq	$8, %rsp
 8775              		.cfi_remember_state
 8776              		.cfi_def_cfa_offset 40
 8777              		.loc 1 1481 0
 8778 0060 B8010000 		movl	$1, %eax
 8778      00
 8779              		.loc 1 1487 0
 8780 0065 5B       		popq	%rbx
 8781              		.cfi_def_cfa_offset 32
 8782              	.LVL996:
 8783 0066 5D       		popq	%rbp
 8784              		.cfi_def_cfa_offset 24
 8785              	.LVL997:
 8786 0067 415C     		popq	%r12
 8787              		.cfi_def_cfa_offset 16
 8788              	.LVL998:
 8789 0069 415D     		popq	%r13
 8790              		.cfi_def_cfa_offset 8
 8791              	.LVL999:
 8792 006b C3       		ret
 8793              	.LVL1000:
 8794 006c 0F1F4000 		.p2align 4,,10
 8795              		.p2align 3
 8796              	.L756:
 8797              		.cfi_restore_state
 8798              		.loc 1 1485 0
 8799 0070 41894500 		movl	%eax, 0(%r13)
 8800              		.loc 1 1487 0
 8801 0074 4883C408 		addq	$8, %rsp
 8802              		.cfi_def_cfa_offset 40
 8803              		.loc 1 1486 0
 8804 0078 31C0     		xorl	%eax, %eax
 8805              		.loc 1 1487 0
 8806 007a 5B       		popq	%rbx
 8807              		.cfi_def_cfa_offset 32
 8808              	.LVL1001:
 8809 007b 5D       		popq	%rbp
 8810              		.cfi_def_cfa_offset 24
 8811 007c 415C     		popq	%r12
 8812              		.cfi_def_cfa_offset 16
 8813 007e 415D     		popq	%r13
 8814              		.cfi_def_cfa_offset 8
 8815              	.LVL1002:
 8816 0080 C3       		ret
 8817              		.cfi_endproc
 8818              	.LFE275:
 8820              		.section	.text.unlikely._ZNK14Fl_Text_Buffer16findchar_forwardEijPi.part.11
 8821              	.LCOLDE78:
 8822              		.section	.text._ZNK14Fl_Text_Buffer16findchar_forwardEijPi.part.11
 8823              	.LHOTE78:
 8824              		.section	.text.unlikely._ZNK14Fl_Text_Buffer16findchar_forwardEijPi,"ax",@progbits
 8825              		.align 2
 8826              	.LCOLDB79:
 8827              		.section	.text._ZNK14Fl_Text_Buffer16findchar_forwardEijPi,"ax",@progbits
 8828              	.LHOTB79:
 8829              		.align 2
 8830              		.p2align 4,,15
 8831              		.globl	_ZNK14Fl_Text_Buffer16findchar_forwardEijPi
 8833              	_ZNK14Fl_Text_Buffer16findchar_forwardEijPi:
 8834              	.LFB254:
 8835              		.loc 1 1469 0
 8836              		.cfi_startproc
 8837              	.LVL1003:
 8838              		.loc 1 1470 0
 8839 0000 8B4734   		movl	52(%rdi), %eax
 8840 0003 39F0     		cmpl	%esi, %eax
 8841 0005 7E09     		jle	.L768
 8842 0007 E9000000 		jmp	_ZNK14Fl_Text_Buffer16findchar_forwardEijPi.part.11
 8842      00
 8843              	.LVL1004:
 8844 000c 0F1F4000 		.p2align 4,,10
 8845              		.p2align 3
 8846              	.L768:
 8847              		.loc 1 1471 0
 8848 0010 8901     		movl	%eax, (%rcx)
 8849              		.loc 1 1487 0
 8850 0012 31C0     		xorl	%eax, %eax
 8851 0014 C3       		ret
 8852              		.cfi_endproc
 8853              	.LFE254:
 8855              		.section	.text.unlikely._ZNK14Fl_Text_Buffer16findchar_forwardEijPi
 8856              	.LCOLDE79:
 8857              		.section	.text._ZNK14Fl_Text_Buffer16findchar_forwardEijPi
 8858              	.LHOTE79:
 8859              		.section	.text.unlikely._ZNK14Fl_Text_Buffer8line_endEi,"ax",@progbits
 8860              		.align 2
 8861              	.LCOLDB80:
 8862              		.section	.text._ZNK14Fl_Text_Buffer8line_endEi,"ax",@progbits
 8863              	.LHOTB80:
 8864              		.align 2
 8865              		.p2align 4,,15
 8866              		.globl	_ZNK14Fl_Text_Buffer8line_endEi
 8868              	_ZNK14Fl_Text_Buffer8line_endEi:
 8869              	.LFB229:
 8870              		.loc 1 821 0
 8871              		.cfi_startproc
 8872              	.LVL1005:
 8873 0000 53       		pushq	%rbx
 8874              		.cfi_def_cfa_offset 16
 8875              		.cfi_offset 3, -16
 8876 0001 4883EC10 		subq	$16, %rsp
 8877              		.cfi_def_cfa_offset 32
 8878              	.LVL1006:
 8879              	.LBB794:
 8880              	.LBB795:
 8881              		.loc 1 1470 0
 8882 0005 8B4734   		movl	52(%rdi), %eax
 8883              	.LBE795:
 8884              	.LBE794:
 8885              		.loc 1 821 0
 8886 0008 8974240C 		movl	%esi, 12(%rsp)
 8887              	.LBB798:
 8888              	.LBB796:
 8889              		.loc 1 1470 0
 8890 000c 39C6     		cmpl	%eax, %esi
 8891 000e 7C10     		jl	.L774
 8892              	.LVL1007:
 8893              	.L772:
 8894              	.LBE796:
 8895              	.LBE798:
 8896              		.loc 1 825 0
 8897 0010 4883C410 		addq	$16, %rsp
 8898              		.cfi_remember_state
 8899              		.cfi_def_cfa_offset 16
 8900 0014 5B       		popq	%rbx
 8901              		.cfi_def_cfa_offset 8
 8902 0015 C3       		ret
 8903              	.LVL1008:
 8904 0016 662E0F1F 		.p2align 4,,10
 8904      84000000 
 8904      0000
 8905              		.p2align 3
 8906              	.L774:
 8907              		.cfi_restore_state
 8908              	.LBB799:
 8909              	.LBB797:
 8910 0020 488D4C24 		leaq	12(%rsp), %rcx
 8910      0C
 8911              	.LVL1009:
 8912 0025 BA0A0000 		movl	$10, %edx
 8912      00
 8913 002a 4889FB   		movq	%rdi, %rbx
 8914 002d E8000000 		call	_ZNK14Fl_Text_Buffer16findchar_forwardEijPi.part.11
 8914      00
 8915              	.LVL1010:
 8916              	.LBE797:
 8917              	.LBE799:
 8918              		.loc 1 822 0
 8919 0032 85C0     		testl	%eax, %eax
 8920 0034 740A     		je	.L771
 8921 0036 8B44240C 		movl	12(%rsp), %eax
 8922              		.loc 1 825 0
 8923 003a 4883C410 		addq	$16, %rsp
 8924              		.cfi_remember_state
 8925              		.cfi_def_cfa_offset 16
 8926 003e 5B       		popq	%rbx
 8927              		.cfi_def_cfa_offset 8
 8928              	.LVL1011:
 8929 003f C3       		ret
 8930              	.LVL1012:
 8931              	.L771:
 8932              		.cfi_restore_state
 8933 0040 8B4334   		movl	52(%rbx), %eax
 8934              	.LVL1013:
 8935 0043 EBCB     		jmp	.L772
 8936              		.cfi_endproc
 8937              	.LFE229:
 8939              		.section	.text.unlikely._ZNK14Fl_Text_Buffer8line_endEi
 8940              	.LCOLDE80:
 8941              		.section	.text._ZNK14Fl_Text_Buffer8line_endEi
 8942              	.LHOTE80:
 8943              		.section	.text.unlikely._ZNK14Fl_Text_Buffer9line_textEi,"ax",@progbits
 8944              		.align 2
 8945              	.LCOLDB81:
 8946              		.section	.text._ZNK14Fl_Text_Buffer9line_textEi,"ax",@progbits
 8947              	.LHOTB81:
 8948              		.align 2
 8949              		.p2align 4,,15
 8950              		.globl	_ZNK14Fl_Text_Buffer9line_textEi
 8952              	_ZNK14Fl_Text_Buffer9line_textEi:
 8953              	.LFB227:
 8954              		.loc 1 802 0
 8955              		.cfi_startproc
 8956              	.LVL1014:
 8957 0000 4154     		pushq	%r12
 8958              		.cfi_def_cfa_offset 16
 8959              		.cfi_offset 12, -16
 8960 0002 55       		pushq	%rbp
 8961              		.cfi_def_cfa_offset 24
 8962              		.cfi_offset 6, -24
 8963 0003 89F5     		movl	%esi, %ebp
 8964 0005 53       		pushq	%rbx
 8965              		.cfi_def_cfa_offset 32
 8966              		.cfi_offset 3, -32
 8967 0006 4889FB   		movq	%rdi, %rbx
 8968 0009 4883EC10 		subq	$16, %rsp
 8969              		.cfi_def_cfa_offset 48
 8970              		.loc 1 802 0
 8971 000d 64488B04 		movq	%fs:40, %rax
 8971      25280000 
 8971      00
 8972 0016 48894424 		movq	%rax, 8(%rsp)
 8972      08
 8973 001b 31C0     		xorl	%eax, %eax
 8974              		.loc 1 803 0
 8975 001d E8000000 		call	_ZNK14Fl_Text_Buffer8line_endEi
 8975      00
 8976              	.LVL1015:
 8977              	.LBB800:
 8978              	.LBB801:
 8979              		.loc 1 812 0
 8980 0022 488D4C24 		leaq	4(%rsp), %rcx
 8980      04
 8981 0027 BA0A0000 		movl	$10, %edx
 8981      00
 8982 002c 89EE     		movl	%ebp, %esi
 8983 002e 4889DF   		movq	%rbx, %rdi
 8984              	.LBE801:
 8985              	.LBE800:
 8986              		.loc 1 803 0
 8987 0031 4189C4   		movl	%eax, %r12d
 8988              	.LVL1016:
 8989 0034 896C2404 		movl	%ebp, 4(%rsp)
 8990              	.LVL1017:
 8991              	.LBB803:
 8992              	.LBB802:
 8993              		.loc 1 812 0
 8994 0038 E8000000 		call	_ZNK14Fl_Text_Buffer17findchar_backwardEijPi
 8994      00
 8995              	.LVL1018:
 8996 003d 85C0     		testl	%eax, %eax
 8997 003f 7407     		je	.L776
 8998              		.loc 1 814 0
 8999 0041 8B442404 		movl	4(%rsp), %eax
 9000 0045 83C001   		addl	$1, %eax
 9001              	.L776:
 9002              	.LVL1019:
 9003              	.LBE802:
 9004              	.LBE803:
 9005              		.loc 1 803 0
 9006 0048 4489E2   		movl	%r12d, %edx
 9007 004b 89C6     		movl	%eax, %esi
 9008 004d 4889DF   		movq	%rbx, %rdi
 9009 0050 E8000000 		call	_ZNK14Fl_Text_Buffer10text_rangeEii
 9009      00
 9010              	.LVL1020:
 9011              		.loc 1 804 0
 9012 0055 488B5424 		movq	8(%rsp), %rdx
 9012      08
 9013 005a 64483314 		xorq	%fs:40, %rdx
 9013      25280000 
 9013      00
 9014 0063 7509     		jne	.L782
 9015 0065 4883C410 		addq	$16, %rsp
 9016              		.cfi_remember_state
 9017              		.cfi_def_cfa_offset 32
 9018 0069 5B       		popq	%rbx
 9019              		.cfi_def_cfa_offset 24
 9020              	.LVL1021:
 9021 006a 5D       		popq	%rbp
 9022              		.cfi_def_cfa_offset 16
 9023              	.LVL1022:
 9024 006b 415C     		popq	%r12
 9025              		.cfi_def_cfa_offset 8
 9026 006d C3       		ret
 9027              	.LVL1023:
 9028              	.L782:
 9029              		.cfi_restore_state
 9030 006e E8000000 		call	__stack_chk_fail
 9030      00
 9031              	.LVL1024:
 9032              		.cfi_endproc
 9033              	.LFE227:
 9035              		.section	.text.unlikely._ZNK14Fl_Text_Buffer9line_textEi
 9036              	.LCOLDE81:
 9037              		.section	.text._ZNK14Fl_Text_Buffer9line_textEi
 9038              	.LHOTE81:
 9039              		.section	.text.unlikely._ZNK14Fl_Text_Buffer17next_char_clippedEi,"ax",@progbits
 9040              		.align 2
 9041              	.LCOLDB82:
 9042              		.section	.text._ZNK14Fl_Text_Buffer17next_char_clippedEi,"ax",@progbits
 9043              	.LHOTB82:
 9044              		.align 2
 9045              		.p2align 4,,15
 9046              		.globl	_ZNK14Fl_Text_Buffer17next_char_clippedEi
 9048              	_ZNK14Fl_Text_Buffer17next_char_clippedEi:
 9049              	.LFB262:
 9050              		.loc 1 1787 0
 9051              		.cfi_startproc
 9052              	.LVL1025:
 9053              		.loc 1 1788 0
 9054 0000 E9000000 		jmp	_ZNK14Fl_Text_Buffer9next_charEi
 9054      00
 9055              	.LVL1026:
 9056              		.cfi_endproc
 9057              	.LFE262:
 9059              		.section	.text.unlikely._ZNK14Fl_Text_Buffer17next_char_clippedEi
 9060              	.LCOLDE82:
 9061              		.section	.text._ZNK14Fl_Text_Buffer17next_char_clippedEi
 9062              	.LHOTE82:
 9063              		.section	.text.unlikely._ZNK14Fl_Text_Buffer10utf8_alignEi,"ax",@progbits
 9064              		.align 2
 9065              	.LCOLDB83:
 9066              		.section	.text._ZNK14Fl_Text_Buffer10utf8_alignEi,"ax",@progbits
 9067              	.LHOTB83:
 9068              		.align 2
 9069              		.p2align 4,,15
 9070              		.globl	_ZNK14Fl_Text_Buffer10utf8_alignEi
 9072              	_ZNK14Fl_Text_Buffer10utf8_alignEi:
 9073              	.LFB263:
 9074              		.loc 1 1795 0
 9075              		.cfi_startproc
 9076              	.LVL1027:
 9077              	.LBB804:
 9078              	.LBB805:
 9079              		.loc 1 258 0
 9080 0000 85F6     		testl	%esi, %esi
 9081              	.LBE805:
 9082              	.LBE804:
 9083              		.loc 1 1795 0
 9084 0002 4989F9   		movq	%rdi, %r9
 9085 0005 89F1     		movl	%esi, %ecx
 9086              	.LBB808:
 9087              	.LBB806:
 9088              		.loc 1 258 0
 9089 0007 7809     		js	.L785
 9090 0009 448B4734 		movl	52(%rdi), %r8d
 9091 000d 4439C6   		cmpl	%r8d, %esi
 9092 0010 7C12     		jl	.L790
 9093              	.L785:
 9094              	.LVL1028:
 9095              	.LBE806:
 9096              	.LBE808:
 9097              		.loc 1 1802 0
 9098 0012 89C8     		movl	%ecx, %eax
 9099 0014 C3       		ret
 9100              	.LVL1029:
 9101              		.p2align 4,,10
 9102 0015 0F1F00   		.p2align 3
 9103              	.L792:
 9104              	.LBB809:
 9105              	.LBB810:
 9106              		.loc 1 259 0
 9107 0018 31C0     		xorl	%eax, %eax
 9108              		.loc 1 258 0
 9109 001a 83E901   		subl	$1, %ecx
 9110              	.LVL1030:
 9111 001d 780F     		js	.L786
 9112 001f 4439C1   		cmpl	%r8d, %ecx
 9113 0022 7D0A     		jge	.L786
 9114              	.LVL1031:
 9115              	.L790:
 9116              	.LBE810:
 9117              	.LBE809:
 9118              	.LBB811:
 9119              	.LBB807:
 9120 0024 89CE     		movl	%ecx, %esi
 9121 0026 4C89CF   		movq	%r9, %rdi
 9122 0029 E8000000 		call	_ZNK14Fl_Text_Buffer7byte_atEi.part.6
 9122      00
 9123              	.LVL1032:
 9124              	.L786:
 9125              	.LBE807:
 9126              	.LBE811:
 9127              		.loc 1 1797 0
 9128 002e 25C00000 		andl	$192, %eax
 9128      00
 9129              	.LVL1033:
 9130 0033 83C080   		addl	$-128, %eax
 9131 0036 74E0     		je	.L792
 9132              	.LVL1034:
 9133              		.loc 1 1802 0
 9134 0038 89C8     		movl	%ecx, %eax
 9135 003a C3       		ret
 9136              		.cfi_endproc
 9137              	.LFE263:
 9139              		.section	.text.unlikely._ZNK14Fl_Text_Buffer10utf8_alignEi
 9140              	.LCOLDE83:
 9141              		.section	.text._ZNK14Fl_Text_Buffer10utf8_alignEi
 9142              	.LHOTE83:
 9143              		.globl	_ZN14Fl_Text_Buffer29file_encoding_warning_messageE
 9144              		.section	.rodata.str1.8
 9145              		.align 8
 9146              	.LC84:
 9147 00a0 44697370 		.string	"Displayed text contains the UTF-8 transcoding\nof the input file which was not UTF-8 enco
 9147      6C617965 
 9147      64207465 
 9147      78742063 
 9147      6F6E7461 
 9148              		.section	.data._ZN14Fl_Text_Buffer29file_encoding_warning_messageE,"aw",@progbits
 9149              		.align 8
 9152              	_ZN14Fl_Text_Buffer29file_encoding_warning_messageE:
 9153 0000 00000000 		.quad	.LC84
 9153      00000000 
 9154              		.section	.bss._ZL11undoyankcut,"aw",@nobits
 9155              		.align 4
 9158              	_ZL11undoyankcut:
 9159 0000 00000000 		.zero	4
 9160              		.section	.bss._ZL10undoinsert,"aw",@nobits
 9161              		.align 4
 9164              	_ZL10undoinsert:
 9165 0000 00000000 		.zero	4
 9166              		.section	.bss._ZL7undocut,"aw",@nobits
 9167              		.align 4
 9170              	_ZL7undocut:
 9171 0000 00000000 		.zero	4
 9172              		.section	.bss._ZL6undoat,"aw",@nobits
 9173              		.align 4
 9176              	_ZL6undoat:
 9177 0000 00000000 		.zero	4
 9178              		.section	.bss._ZL10undowidget,"aw",@nobits
 9179              		.align 8
 9182              	_ZL10undowidget:
 9183 0000 00000000 		.zero	8
 9183      00000000 
 9184              		.section	.bss._ZL16undobufferlength,"aw",@nobits
 9185              		.align 4
 9188              	_ZL16undobufferlength:
 9189 0000 00000000 		.zero	4
 9190              		.section	.bss._ZL10undobuffer,"aw",@nobits
 9191              		.align 8
 9194              	_ZL10undobuffer:
 9195 0000 00000000 		.zero	8
 9195      00000000 
 9196              		.text
 9197              	.Letext0:
 9198              		.section	.text.unlikely._ZL30def_transcoding_warning_actionP14Fl_Text_Buffer
 9199              	.Letext_cold0:
 9200              		.file 6 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 9201              		.file 7 "/usr/include/x86_64-linux-gnu/bits/types.h"
 9202              		.file 8 "/usr/include/stdio.h"
 9203              		.file 9 "/usr/include/libio.h"
 9204              		.file 10 "fltk-1.3.4-1/FL/Enumerations.H"
 9205              		.file 11 "fltk-1.3.4-1/FL/fl_ask.H"
 9206              		.file 12 "/usr/include/stdlib.h"
 9207              		.file 13 "fltk-1.3.4-1/FL/fl_utf8.h"
 9208              		.file 14 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Text_Buffer.cxx
     /tmp/ccT1ZZF2.s:16     .text._ZL30def_transcoding_warning_actionP14Fl_Text_Buffer:0000000000000000 _ZL30def_transcoding_warning_actionP14Fl_Text_Buffer
     /tmp/ccT1ZZF2.s:9152   .data._ZN14Fl_Text_Buffer29file_encoding_warning_messageE:0000000000000000 _ZN14Fl_Text_Buffer29file_encoding_warning_messageE
     /tmp/ccT1ZZF2.s:42     .text._ZL14undobuffersizei:0000000000000000 _ZL14undobuffersizei
     /tmp/ccT1ZZF2.s:9188   .bss._ZL16undobufferlength:0000000000000000 _ZL16undobufferlength
     /tmp/ccT1ZZF2.s:9194   .bss._ZL10undobuffer:0000000000000000 _ZL10undobuffer
     /tmp/ccT1ZZF2.s:114    .text._ZNK14Fl_Text_Buffer7char_atEi.part.5:0000000000000000 _ZNK14Fl_Text_Buffer7char_atEi.part.5
     /tmp/ccT1ZZF2.s:186    .text._ZNK14Fl_Text_Buffer7byte_atEi.part.6:0000000000000000 _ZNK14Fl_Text_Buffer7byte_atEi.part.6
     /tmp/ccT1ZZF2.s:239    .text._ZN17Fl_Text_Selection6updateEiii.part.8:0000000000000000 _ZN17Fl_Text_Selection6updateEiii.part.8
     /tmp/ccT1ZZF2.s:326    .text._ZN14Fl_Text_BufferC2Eii:0000000000000000 _ZN14Fl_Text_BufferC2Eii
     /tmp/ccT1ZZF2.s:326    .text._ZN14Fl_Text_BufferC2Eii:0000000000000000 _ZN14Fl_Text_BufferC1Eii
     /tmp/ccT1ZZF2.s:429    .text._ZN14Fl_Text_BufferD2Ev:0000000000000000 _ZN14Fl_Text_BufferD2Ev
     /tmp/ccT1ZZF2.s:429    .text._ZN14Fl_Text_BufferD2Ev:0000000000000000 _ZN14Fl_Text_BufferD1Ev
     /tmp/ccT1ZZF2.s:519    .text._ZNK14Fl_Text_Buffer4textEv:0000000000000000 _ZNK14Fl_Text_Buffer4textEv
     /tmp/ccT1ZZF2.s:626    .text._ZNK14Fl_Text_Buffer10text_rangeEii:0000000000000000 _ZNK14Fl_Text_Buffer10text_rangeEii
     /tmp/ccT1ZZF2.s:878    .text._ZNK14Fl_Text_Buffer7char_atEi:0000000000000000 _ZNK14Fl_Text_Buffer7char_atEi
     /tmp/ccT1ZZF2.s:913    .text._ZNK14Fl_Text_Buffer7byte_atEi:0000000000000000 _ZNK14Fl_Text_Buffer7byte_atEi
     /tmp/ccT1ZZF2.s:948    .text._ZN14Fl_Text_Buffer7canUndoEc:0000000000000000 _ZN14Fl_Text_Buffer7canUndoEc
     /tmp/ccT1ZZF2.s:9182   .bss._ZL10undowidget:0000000000000000 _ZL10undowidget
     /tmp/ccT1ZZF2.s:986    .text._ZN14Fl_Text_Buffer12tab_distanceEi:0000000000000000 _ZN14Fl_Text_Buffer12tab_distanceEi
     /tmp/ccT1ZZF2.s:1137   .text._ZN14Fl_Text_Buffer18selection_positionEPiS0_:0000000000000000 _ZN14Fl_Text_Buffer18selection_positionEPiS0_
     /tmp/ccT1ZZF2.s:1179   .text._ZN14Fl_Text_Buffer28secondary_selection_positionEPiS0_:0000000000000000 _ZN14Fl_Text_Buffer28secondary_selection_positionEPiS0_
     /tmp/ccT1ZZF2.s:1221   .text._ZN14Fl_Text_Buffer18highlight_positionEPiS0_:0000000000000000 _ZN14Fl_Text_Buffer18highlight_positionEPiS0_
     /tmp/ccT1ZZF2.s:1263   .text._ZN14Fl_Text_Buffer19add_modify_callbackEPFviiiiPKcPvES2_:0000000000000000 _ZN14Fl_Text_Buffer19add_modify_callbackEPFviiiiPKcPvES2_
     /tmp/ccT1ZZF2.s:1430   .text._ZN14Fl_Text_Buffer22remove_modify_callbackEPFviiiiPKcPvES2_:0000000000000000 _ZN14Fl_Text_Buffer22remove_modify_callbackEPFviiiiPKcPvES2_
     /tmp/ccT1ZZF2.s:1690   .text._ZN14Fl_Text_Buffer22add_predelete_callbackEPFviiPvES0_:0000000000000000 _ZN14Fl_Text_Buffer22add_predelete_callbackEPFviiPvES0_
     /tmp/ccT1ZZF2.s:1843   .text._ZN14Fl_Text_Buffer25remove_predelete_callbackEPFviiPvES0_:0000000000000000 _ZN14Fl_Text_Buffer25remove_predelete_callbackEPFviiPvES0_
     /tmp/ccT1ZZF2.s:2104   .text._ZNK14Fl_Text_Buffer11count_linesEii:0000000000000000 _ZNK14Fl_Text_Buffer11count_linesEii
     /tmp/ccT1ZZF2.s:2203   .text._ZN14Fl_Text_Buffer10skip_linesEii:0000000000000000 _ZN14Fl_Text_Buffer10skip_linesEii
     /tmp/ccT1ZZF2.s:2308   .text._ZN14Fl_Text_Buffer12rewind_linesEii:0000000000000000 _ZN14Fl_Text_Buffer12rewind_linesEii
     /tmp/ccT1ZZF2.s:2426   .text._ZN17Fl_Text_Selection3setEii:0000000000000000 _ZN17Fl_Text_Selection3setEii
     /tmp/ccT1ZZF2.s:2488   .text._ZNK17Fl_Text_Selection8positionEPiS0_:0000000000000000 _ZNK17Fl_Text_Selection8positionEPiS0_
     /tmp/ccT1ZZF2.s:2525   .text._ZNK17Fl_Text_Selection8includesEi:0000000000000000 _ZNK17Fl_Text_Selection8includesEi
     /tmp/ccT1ZZF2.s:2562   .text._ZNK14Fl_Text_Buffer15selection_text_EP17Fl_Text_Selection:0000000000000000 _ZNK14Fl_Text_Buffer15selection_text_EP17Fl_Text_Selection
     /tmp/ccT1ZZF2.s:2622   .text._ZN14Fl_Text_Buffer14selection_textEv:0000000000000000 _ZN14Fl_Text_Buffer14selection_textEv
     /tmp/ccT1ZZF2.s:2647   .text._ZN14Fl_Text_Buffer24secondary_selection_textEv:0000000000000000 _ZN14Fl_Text_Buffer24secondary_selection_textEv
     /tmp/ccT1ZZF2.s:2672   .text._ZN14Fl_Text_Buffer14highlight_textEv:0000000000000000 _ZN14Fl_Text_Buffer14highlight_textEv
     /tmp/ccT1ZZF2.s:2697   .text._ZNK14Fl_Text_Buffer21call_modify_callbacksEiiiiPKc:0000000000000000 _ZNK14Fl_Text_Buffer21call_modify_callbacksEiiiiPKc
     /tmp/ccT1ZZF2.s:2795   .text._ZNK14Fl_Text_Buffer24call_predelete_callbacksEii:0000000000000000 _ZNK14Fl_Text_Buffer24call_predelete_callbacksEii
     /tmp/ccT1ZZF2.s:2887   .text._ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_:0000000000000000 _ZNK14Fl_Text_Buffer19redisplay_selectionEP17Fl_Text_SelectionS1_
     /tmp/ccT1ZZF2.s:3290   .text._ZN14Fl_Text_Buffer6selectEii:0000000000000000 _ZN14Fl_Text_Buffer6selectEii
     /tmp/ccT1ZZF2.s:3404   .text._ZN14Fl_Text_Buffer8unselectEv:0000000000000000 _ZN14Fl_Text_Buffer8unselectEv
     /tmp/ccT1ZZF2.s:3459   .text._ZN14Fl_Text_Buffer16secondary_selectEii:0000000000000000 _ZN14Fl_Text_Buffer16secondary_selectEii
     /tmp/ccT1ZZF2.s:3573   .text._ZN14Fl_Text_Buffer18secondary_unselectEv:0000000000000000 _ZN14Fl_Text_Buffer18secondary_unselectEv
     /tmp/ccT1ZZF2.s:3628   .text._ZN14Fl_Text_Buffer9highlightEii:0000000000000000 _ZN14Fl_Text_Buffer9highlightEii
     /tmp/ccT1ZZF2.s:3742   .text._ZN14Fl_Text_Buffer11unhighlightEv:0000000000000000 _ZN14Fl_Text_Buffer11unhighlightEv
     /tmp/ccT1ZZF2.s:3797   .text._ZN14Fl_Text_Buffer8move_gapEi:0000000000000000 _ZN14Fl_Text_Buffer8move_gapEi
     /tmp/ccT1ZZF2.s:3904   .text._ZN14Fl_Text_Buffer19reallocate_with_gapEii:0000000000000000 _ZN14Fl_Text_Buffer19reallocate_with_gapEii
     /tmp/ccT1ZZF2.s:4124   .text._ZN14Fl_Text_Buffer17update_selectionsEiii:0000000000000000 _ZN14Fl_Text_Buffer17update_selectionsEiii
     /tmp/ccT1ZZF2.s:4255   .text._ZN14Fl_Text_Buffer4textEPKc:0000000000000000 _ZN14Fl_Text_Buffer4textEPKc
     /tmp/ccT1ZZF2.s:4471   .text._ZN14Fl_Text_Buffer4copyEPS_iii:0000000000000000 _ZN14Fl_Text_Buffer4copyEPS_iii
     /tmp/ccT1ZZF2.s:4691   .text._ZN14Fl_Text_Buffer7insert_EiPKc.part.9:0000000000000000 _ZN14Fl_Text_Buffer7insert_EiPKc.part.9
     /tmp/ccT1ZZF2.s:9176   .bss._ZL6undoat:0000000000000000 _ZL6undoat
     /tmp/ccT1ZZF2.s:9164   .bss._ZL10undoinsert:0000000000000000 _ZL10undoinsert
     /tmp/ccT1ZZF2.s:9158   .bss._ZL11undoyankcut:0000000000000000 _ZL11undoyankcut
     /tmp/ccT1ZZF2.s:9170   .bss._ZL7undocut:0000000000000000 _ZL7undocut
     /tmp/ccT1ZZF2.s:4868   .text._ZN14Fl_Text_Buffer7insert_EiPKc:0000000000000000 _ZN14Fl_Text_Buffer7insert_EiPKc
     /tmp/ccT1ZZF2.s:4902   .text._ZN14Fl_Text_Buffer6insertEiPKc.part.10:0000000000000000 _ZN14Fl_Text_Buffer6insertEiPKc.part.10
     /tmp/ccT1ZZF2.s:5089   .text._ZN14Fl_Text_Buffer6insertEiPKc:0000000000000000 _ZN14Fl_Text_Buffer6insertEiPKc
     /tmp/ccT1ZZF2.s:5122   .text._ZN14Fl_Text_Buffer7remove_Eii:0000000000000000 _ZN14Fl_Text_Buffer7remove_Eii
     /tmp/ccT1ZZF2.s:5421   .text._ZN14Fl_Text_Buffer7replaceEiiPKc:0000000000000000 _ZN14Fl_Text_Buffer7replaceEiiPKc
     /tmp/ccT1ZZF2.s:5658   .text._ZN14Fl_Text_Buffer18replace_selection_EP17Fl_Text_SelectionPKc:0000000000000000 _ZN14Fl_Text_Buffer18replace_selection_EP17Fl_Text_SelectionPKc
     /tmp/ccT1ZZF2.s:5746   .text._ZN14Fl_Text_Buffer17replace_selectionEPKc:0000000000000000 _ZN14Fl_Text_Buffer17replace_selectionEPKc
     /tmp/ccT1ZZF2.s:5774   .text._ZN14Fl_Text_Buffer27replace_secondary_selectionEPKc:0000000000000000 _ZN14Fl_Text_Buffer27replace_secondary_selectionEPKc
     /tmp/ccT1ZZF2.s:5802   .text._ZN14Fl_Text_Buffer6removeEii:0000000000000000 _ZN14Fl_Text_Buffer6removeEii
     /tmp/ccT1ZZF2.s:6029   .text._ZN14Fl_Text_Buffer4undoEPi:0000000000000000 _ZN14Fl_Text_Buffer4undoEPi
     /tmp/ccT1ZZF2.s:6274   .text._ZN14Fl_Text_Buffer17remove_selection_EP17Fl_Text_Selection:0000000000000000 _ZN14Fl_Text_Buffer17remove_selection_EP17Fl_Text_Selection
     /tmp/ccT1ZZF2.s:6313   .text._ZN14Fl_Text_Buffer16remove_selectionEv:0000000000000000 _ZN14Fl_Text_Buffer16remove_selectionEv
     /tmp/ccT1ZZF2.s:6355   .text._ZN14Fl_Text_Buffer26remove_secondary_selectionEv:0000000000000000 _ZN14Fl_Text_Buffer26remove_secondary_selectionEv
     /tmp/ccT1ZZF2.s:6397   .text._ZN17Fl_Text_Selection6updateEiii:0000000000000000 _ZN17Fl_Text_Selection6updateEiii
     /tmp/ccT1ZZF2.s:6430   .text._ZN14Fl_Text_Buffer10insertfileEPKcii:0000000000000000 _ZN14Fl_Text_Buffer10insertfileEPKcii
     /tmp/ccT1ZZF2.s:6935   .text._ZN14Fl_Text_Buffer10outputfileEPKciii:0000000000000000 _ZN14Fl_Text_Buffer10outputfileEPKciii
     /tmp/ccT1ZZF2.s:7111   .text._ZNK14Fl_Text_Buffer17prev_char_clippedEi:0000000000000000 _ZNK14Fl_Text_Buffer17prev_char_clippedEi
     /tmp/ccT1ZZF2.s:7175   .text._ZNK14Fl_Text_Buffer17findchar_backwardEijPi:0000000000000000 _ZNK14Fl_Text_Buffer17findchar_backwardEijPi
     /tmp/ccT1ZZF2.s:7373   .text._ZNK14Fl_Text_Buffer10line_startEi:0000000000000000 _ZNK14Fl_Text_Buffer10line_startEi
     /tmp/ccT1ZZF2.s:7414   .text._ZNK14Fl_Text_Buffer9prev_charEi:0000000000000000 _ZNK14Fl_Text_Buffer9prev_charEi
     /tmp/ccT1ZZF2.s:7447   .text._ZNK14Fl_Text_Buffer9next_charEi:0000000000000000 _ZNK14Fl_Text_Buffer9next_charEi
     /tmp/ccT1ZZF2.s:7531   .text._ZNK14Fl_Text_Buffer10word_startEi:0000000000000000 _ZNK14Fl_Text_Buffer10word_startEi
     /tmp/ccT1ZZF2.s:7757   .text._ZNK14Fl_Text_Buffer8word_endEi:0000000000000000 _ZNK14Fl_Text_Buffer8word_endEi
     /tmp/ccT1ZZF2.s:7895   .text._ZNK14Fl_Text_Buffer26count_displayed_charactersEii:0000000000000000 _ZNK14Fl_Text_Buffer26count_displayed_charactersEii
     /tmp/ccT1ZZF2.s:7970   .text._ZN14Fl_Text_Buffer25skip_displayed_charactersEii:0000000000000000 _ZN14Fl_Text_Buffer25skip_displayed_charactersEii
     /tmp/ccT1ZZF2.s:8080   .text._ZNK14Fl_Text_Buffer14search_forwardEiPKcPii:0000000000000000 _ZNK14Fl_Text_Buffer14search_forwardEiPKcPii
     /tmp/ccT1ZZF2.s:8387   .text._ZNK14Fl_Text_Buffer15search_backwardEiPKcPii:0000000000000000 _ZNK14Fl_Text_Buffer15search_backwardEiPKcPii
     /tmp/ccT1ZZF2.s:8707   .text._ZNK14Fl_Text_Buffer16findchar_forwardEijPi.part.11:0000000000000000 _ZNK14Fl_Text_Buffer16findchar_forwardEijPi.part.11
     /tmp/ccT1ZZF2.s:8833   .text._ZNK14Fl_Text_Buffer16findchar_forwardEijPi:0000000000000000 _ZNK14Fl_Text_Buffer16findchar_forwardEijPi
     /tmp/ccT1ZZF2.s:8868   .text._ZNK14Fl_Text_Buffer8line_endEi:0000000000000000 _ZNK14Fl_Text_Buffer8line_endEi
     /tmp/ccT1ZZF2.s:8952   .text._ZNK14Fl_Text_Buffer9line_textEi:0000000000000000 _ZNK14Fl_Text_Buffer9line_textEi
     /tmp/ccT1ZZF2.s:9048   .text._ZNK14Fl_Text_Buffer17next_char_clippedEi:0000000000000000 _ZNK14Fl_Text_Buffer17next_char_clippedEi
     /tmp/ccT1ZZF2.s:9072   .text._ZNK14Fl_Text_Buffer10utf8_alignEi:0000000000000000 _ZNK14Fl_Text_Buffer10utf8_alignEi
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.features.h.19.ad7942cac365cc9b820965257723f4cc
                           .group:0000000000000000 wm4.cdefs.h.19.871bad770587d04922449df94ac50bdb
                           .group:0000000000000000 wm4.wordsize.h.4.256e8fdbd37801980286acdbc40d0280
                           .group:0000000000000000 wm4.cdefs.h.432.619afd0aac7c4b439843706c1b28ddea
                           .group:0000000000000000 wm4.stubs64.h.10.918ceb5fa58268542bf143e4c1efbcf3
                           .group:0000000000000000 wm4.stdio.h.31.e39a94e203ad4e1d978c0fc68ce016ee
                           .group:0000000000000000 wm4.stddef.h.187.422da5f95ac1285e95faf42258f23242
                           .group:0000000000000000 wm4.types.h.89.468e2451361e3b92f048f6cad51690ff
                           .group:0000000000000000 wm4.typesizes.h.24.40eb69a6270178f15d1bf3d7b6635a8b
                           .group:0000000000000000 wm4.stdio.h.36.2dd12c1fd035242ad5cfd0152a01be5a
                           .group:0000000000000000 wm4._G_config.h.5.b0f37d9e474454cf6e459063458db32f
                           .group:0000000000000000 wm4.stddef.h.238.05c1f32ae5cf7bdacd6b0a8ed417a07f
                           .group:0000000000000000 wm4.wchar.h.80.eea3eba2d2a17aace9470a8e0d8218dc
                           .group:0000000000000000 wm4._G_config.h.46.5187c97b14fd664662cb32e6b94fc49e
                           .group:0000000000000000 wm4.libio.h.33.a775b9ecae273f33bc59931e9891e4ca
                           .group:0000000000000000 wm4.stdarg.h.34.3a23a216c0c293b3d2ea2e89281481e6
                           .group:0000000000000000 wm4.libio.h.51.dab170798ec1df48c625aea7c30e1b63
                           .group:0000000000000000 wm4.stdio.h.80.0219e72fbbeb18f41175513875002822
                           .group:0000000000000000 wm4.stdio_lim.h.23.f8541119d1bcf759d7de9531671fd758
                           .group:0000000000000000 wm4.stdio.h.172.df21df34a7396d7da2e08f9b617d582f
                           .group:0000000000000000 wm4.stdio.h.26.e50fc3808d57d965ceefc6f6dd102eb7
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.238.95ea4ce844d9fee903b0cacc7c1e4931
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.93f167f49d64e2b9b99f98d1162a93bf
                           .group:0000000000000000 wm4.endian.h.19.ff00c9c0f5e9f9a9719c5de76ace57b4
                           .group:0000000000000000 wm4.endian.h.41.24cced64aef71195a51d4daa8e4f4a95
                           .group:0000000000000000 wm4.byteswap.h.38.11ee5fdc0f6cc53a16c505b9233cecef
                           .group:0000000000000000 wm4.endian.h.63.97272d7c64d5db8020003b32e9289502
                           .group:0000000000000000 wm4.waitstatus.h.99.408b6270fa6eb71377201a241ef15f79
                           .group:0000000000000000 wm4.stdlib.h.54.0af3535195ddeb87f5c2e8ca307f12bc
                           .group:0000000000000000 wm4.types.h.23.6b551a14160ee6e670a07567790a4689
                           .group:0000000000000000 wm4.time.h.53.beb46e650cd406cb917b6b96b45e640a
                           .group:0000000000000000 wm4.types.h.137.b47ba4422427ad6e74c43b7db72dcd74
                           .group:0000000000000000 wm4.stddef.h.238.847b6907dabda77be90a9ab7ad789e2e
                           .group:0000000000000000 wm4.types.h.187.bd5a05039b505b3620e6973f1b2ffeb1
                           .group:0000000000000000 wm4.select.h.28.eb2f3debdbcffd1442ebddaebc4fb6ff
                           .group:0000000000000000 wm4.sigset.h.20.f36413b6d2364ad847d3db53fb03e683
                           .group:0000000000000000 wm4.select.h.36.f76c3b9e55c871743863013cc4cc14c9
                           .group:0000000000000000 wm4.time.h.66.e70ce69790c975f0efb369340c432e0b
                           .group:0000000000000000 wm4.time.h.25.ae5284cdff565e87a9198d819340325d
                           .group:0000000000000000 wm4.select.h.57.37281136b86c815f48528dd956d4eedc
                           .group:0000000000000000 wm4.select2.h.27.f95f2ab0ffee66dc1b6575014894b21a
                           .group:0000000000000000 wm4.sysmacros.h.20.8a0c33ff175cd9b434a86c0aaa36f0a2
                           .group:0000000000000000 wm4.types.h.229.67b3f66bd74b06b451caec392a72a945
                           .group:0000000000000000 wm4.pthreadtypes.h.25.6892b1493314fcf446bbc76e7362acba
                           .group:0000000000000000 wm4.alloca.h.19.edefa922a76c1cbaaf1e416903ba2d1c
                           .group:0000000000000000 wm4.alloca.h.29.156e12058824cc23d961c4d3b13031f6
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.stat.h.23.034923aa253537bdc4e59720e9e8ed3d
                           .group:0000000000000000 wm4.time.h.66.fa652aa18ecf92239cee124d5533fe97
                           .group:0000000000000000 wm4.stat.h.23.71443f0579dab3228134d84ad7d61c3e
                           .group:0000000000000000 wm4.stat.h.107.43f8ebdec21eca5e13896fd19df564c8
                           .group:0000000000000000 wm4.locale.h.23.9b5006b0bf779abe978bf85cb308a947
                           .group:0000000000000000 wm4.stddef.h.401.7dfff676fcc31e4ba811117c262087d2
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.94a07dff536351e64a45c44b55b1ccfb
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915
                           .group:0000000000000000 wm4.Fl_Text_Buffer.H.23.23ca40b81d0e4426426f8da147d89937
                           .group:0000000000000000 wm4.fl_ask.H.24.be48b4476a0524cdb7b19216c6f73157

UNDEFINED SYMBOLS
_Z8fl_alertPKcz
realloc
malloc
fl_utf8decode
free
_ZdaPv
memcpy
_Znam
_ZN2Fl5errorE
__stack_chk_fail
memmove
strlen
strdup
fl_fopen
fread
fl_utf8len1
fl_utf8encode
__memmove_chk
ferror
fclose
fwrite
__ctype_b_loc
memcmp
fl_tolower
