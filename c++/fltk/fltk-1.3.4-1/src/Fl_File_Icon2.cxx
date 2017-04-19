   1              		.file	"Fl_File_Icon2.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL11get_kde_valPcPKc,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL11get_kde_valPcPKc,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL11get_kde_valPcPKc
  10              	.Ltext_cold0:
  11              		.section	.text._ZL11get_kde_valPcPKc
  13              	_ZL11get_kde_valPcPKc:
  14              	.LFB524:
  15              		.file 1 "fltk-1.3.4-1/src/Fl_File_Icon2.cxx"
   1:fltk-1.3.4-1/src/Fl_File_Icon2.cxx **** ...
  16              		.loc 1 1000 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 53       		pushq	%rbx
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 3, -16
  22              		.loc 1 1001 0
  23 0001 0FB616   		movzbl	(%rsi), %edx
  24              		.loc 1 1000 0
  25 0004 4889FB   		movq	%rdi, %rbx
  26              		.loc 1 1001 0
  27 0007 0FB607   		movzbl	(%rdi), %eax
  28 000a 38C2     		cmpb	%al, %dl
  29 000c 7514     		jne	.L2
  30              	.LVL1:
  31 000e 6690     		.p2align 4,,10
  32              		.p2align 3
  33              	.L3:
  34              		.loc 1 1002 0
  35 0010 4883C301 		addq	$1, %rbx
  36              	.LVL2:
  37              		.loc 1 1003 0
  38 0014 4883C601 		addq	$1, %rsi
  39              	.LVL3:
  40              		.loc 1 1001 0
  41 0018 0FB603   		movzbl	(%rbx), %eax
  42 001b 0FB616   		movzbl	(%rsi), %edx
  43 001e 38D0     		cmpb	%dl, %al
  44 0020 74EE     		je	.L3
  45              	.L2:
  46              		.loc 1 1006 0 discriminator 1
  47 0022 3C3D     		cmpb	$61, %al
  48 0024 7522     		jne	.L6
  49 0026 84D2     		testb	%dl, %dl
  50 0028 751E     		jne	.L6
  51              		.loc 1 1007 0
  52 002a 4889DF   		movq	%rbx, %rdi
  53 002d E8000000 		call	strlen
  53      00
  54              	.LVL4:
  55 0032 488D4403 		leaq	-1(%rbx,%rax), %rax
  55      FF
  56 0037 80380A   		cmpb	$10, (%rax)
  57 003a 7414     		je	.L16
  58              	.L5:
  59              		.loc 1 1009 0
  60 003c 488D4301 		leaq	1(%rbx), %rax
  61              		.loc 1 1013 0
  62 0040 5B       		popq	%rbx
  63              		.cfi_remember_state
  64              		.cfi_def_cfa_offset 8
  65              	.LVL5:
  66 0041 C3       		ret
  67              	.LVL6:
  68              		.p2align 4,,10
  69 0042 660F1F44 		.p2align 3
  69      0000
  70              	.L6:
  71              		.cfi_restore_state
  72              		.loc 1 1012 0
  73 0048 31C0     		xorl	%eax, %eax
  74              		.loc 1 1013 0
  75 004a 5B       		popq	%rbx
  76              		.cfi_remember_state
  77              		.cfi_def_cfa_offset 8
  78              	.LVL7:
  79 004b C3       		ret
  80              	.LVL8:
  81 004c 0F1F4000 		.p2align 4,,10
  82              		.p2align 3
  83              	.L16:
  84              		.cfi_restore_state
  85              		.loc 1 1007 0 discriminator 1
  86 0050 C60000   		movb	$0, (%rax)
  87 0053 EBE7     		jmp	.L5
  88              		.cfi_endproc
  89              	.LFE524:
  91              		.section	.text.unlikely._ZL11get_kde_valPcPKc
  92              	.LCOLDE0:
  93              		.section	.text._ZL11get_kde_valPcPKc
  94              	.LHOTE0:
  95              		.section	.rodata.str1.1,"aMS",@progbits,1
  96              	.LC1:
  97 0000 726200   		.string	"rb"
  98              		.section	.rodata.str1.8,"aMS",@progbits,1
  99              		.align 8
 100              	.LC2:
 101 0000 466C5F46 		.string	"Fl_File_Icon::load_fti(): Unable to open \"%s\" - %s"
 101      696C655F 
 101      49636F6E 
 101      3A3A6C6F 
 101      61645F66 
 102 0033 00000000 		.align 8
 102      00
 103              	.LC3:
 104 0038 466C5F46 		.string	"Fl_File_Icon::load_fti(): Expected a letter at file position %ld (saw '%c')"
 104      696C655F 
 104      49636F6E 
 104      3A3A6C6F 
 104      61645F66 
 105 0084 00000000 		.align 8
 106              	.LC4:
 107 0088 466C5F46 		.string	"Fl_File_Icon::load_fti(): Expected a ; at file position %ld (saw '%c')"
 107      696C655F 
 107      49636F6E 
 107      3A3A6C6F 
 107      61645F66 
 108              		.section	.rodata.str1.1
 109              	.LC5:
 110 0003 636F6C6F 		.string	"color"
 110      7200
 111              	.LC6:
 112 0009 69636F6E 		.string	"iconcolor"
 112      636F6C6F 
 112      7200
 113              	.LC7:
 114 0013 73686164 		.string	"shadowcolor"
 114      6F77636F 
 114      6C6F7200 
 115              	.LC8:
 116 001f 6F75746C 		.string	"outlinecolor"
 116      696E6563 
 116      6F6C6F72 
 116      00
 117              	.LC10:
 118 002c 62676E6C 		.string	"bgnline"
 118      696E6500 
 119              	.LC11:
 120 0034 62676E63 		.string	"bgnclosedline"
 120      6C6F7365 
 120      646C696E 
 120      6500
 121              	.LC12:
 122 0042 62676E70 		.string	"bgnpolygon"
 122      6F6C7967 
 122      6F6E00
 123              	.LC13:
 124 004d 62676E6F 		.string	"bgnoutlinepolygon"
 124      75746C69 
 124      6E65706F 
 124      6C79676F 
 124      6E00
 125              	.LC14:
 126 005f 656E646F 		.string	"endoutlinepolygon"
 126      75746C69 
 126      6E65706F 
 126      6C79676F 
 126      6E00
 127              	.LC15:
 128 0071 656E6400 		.string	"end"
 129              	.LC16:
 130 0075 76657274 		.string	"vertex"
 130      657800
 131              	.LC17:
 132 007c 25662C25 		.string	"%f,%f"
 132      6600
 133              		.section	.rodata.str1.8
 134 00cf 00       		.align 8
 135              	.LC19:
 136 00d0 466C5F46 		.string	"Fl_File_Icon::load_fti(): Unknown command \"%s\" at file position %ld."
 136      696C655F 
 136      49636F6E 
 136      3A3A6C6F 
 136      61645F66 
 137 0115 000000   		.align 8
 138              	.LC20:
 139 0118 466C5F46 		.string	"Fl_File_Icon::load_fti(): Expected a ( at file position %ld (saw '%c')"
 139      696C655F 
 139      49636F6E 
 139      3A3A6C6F 
 139      61645F66 
 140 015f 00       		.align 8
 141              	.LC21:
 142 0160 466C5F46 		.string	"Fl_File_Icon::load_fti(): Expected a ) at file position %ld (saw '%c')"
 142      696C655F 
 142      49636F6E 
 142      3A3A6C6F 
 142      61645F66 
 143              		.section	.text.unlikely._ZN12Fl_File_Icon8load_ftiEPKc,"ax",@progbits
 144              		.align 2
 145              	.LCOLDB22:
 146              		.section	.text._ZN12Fl_File_Icon8load_ftiEPKc,"ax",@progbits
 147              	.LHOTB22:
 148              		.align 2
 149              		.p2align 4,,15
 150              		.globl	_ZN12Fl_File_Icon8load_ftiEPKc
 152              	_ZN12Fl_File_Icon8load_ftiEPKc:
 153              	.LFB518:
 154              		.loc 1 125 0
 155              		.cfi_startproc
 156              	.LVL9:
 157 0000 4157     		pushq	%r15
 158              		.cfi_def_cfa_offset 16
 159              		.cfi_offset 15, -16
 160 0002 4156     		pushq	%r14
 161              		.cfi_def_cfa_offset 24
 162              		.cfi_offset 14, -24
 163 0004 4155     		pushq	%r13
 164              		.cfi_def_cfa_offset 32
 165              		.cfi_offset 13, -32
 166 0006 4154     		pushq	%r12
 167              		.cfi_def_cfa_offset 40
 168              		.cfi_offset 12, -40
 169 0008 55       		pushq	%rbp
 170              		.cfi_def_cfa_offset 48
 171              		.cfi_offset 6, -48
 172 0009 53       		pushq	%rbx
 173              		.cfi_def_cfa_offset 56
 174              		.cfi_offset 3, -56
 175 000a 4889F5   		movq	%rsi, %rbp
 176              		.loc 1 135 0
 177 000d BE000000 		movl	$.LC1, %esi
 177      00
 178              	.LVL10:
 179              		.loc 1 125 0
 180 0012 4881EC58 		subq	$600, %rsp
 180      020000
 181              		.cfi_def_cfa_offset 656
 182              		.loc 1 125 0
 183 0019 48897C24 		movq	%rdi, 8(%rsp)
 183      08
 184              		.loc 1 135 0
 185 001e 4889EF   		movq	%rbp, %rdi
 186              	.LVL11:
 187              		.loc 1 125 0
 188 0021 64488B04 		movq	%fs:40, %rax
 188      25280000 
 188      00
 189 002a 48898424 		movq	%rax, 584(%rsp)
 189      48020000 
 190 0032 31C0     		xorl	%eax, %eax
 191              		.loc 1 135 0
 192 0034 E8000000 		call	fl_fopen
 192      00
 193              	.LVL12:
 194 0039 4885C0   		testq	%rax, %rax
 195 003c 0F84A205 		je	.L18
 195      0000
 196              	.LBB231:
 197              		.loc 1 174 0
 198 0042 4C8D7424 		leaq	64(%rsp), %r14
 198      40
 199              		.loc 1 184 0
 200 0047 4C8DBC24 		leaq	320(%rsp), %r15
 200      40010000 
 201 004f 4889C3   		movq	%rax, %rbx
 202              	.LBE231:
 203 0052 C7442410 		movl	$0, 16(%rsp)
 203      00000000 
 204              	.LBB319:
 205              		.loc 1 180 0
 206 005a 4D8DA6FE 		leaq	254(%r14), %r12
 206      000000
 207              		.loc 1 201 0
 208 0061 4D8DAFFE 		leaq	254(%r15), %r13
 208      000000
 209 0068 EB1A     		jmp	.L23
 210              	.LVL13:
 211 006a 660F1F44 		.p2align 4,,10
 211      0000
 212              		.p2align 3
 213              	.L81:
 214              	.LBB232:
 215              	.LBB233:
 216              		.file 2 "/usr/include/ctype.h"
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
 183:/usr/include/ctype.h **** __isctype_f (alpha)
 184:/usr/include/ctype.h **** __isctype_f (cntrl)
 185:/usr/include/ctype.h **** __isctype_f (digit)
 186:/usr/include/ctype.h **** __isctype_f (lower)
 187:/usr/include/ctype.h **** __isctype_f (graph)
 188:/usr/include/ctype.h **** __isctype_f (print)
 189:/usr/include/ctype.h **** __isctype_f (punct)
 190:/usr/include/ctype.h **** __isctype_f (space)
 217              		.loc 2 190 0
 218 0070 E8000000 		call	__ctype_b_loc
 218      00
 219              	.LVL14:
 220 0075 488B10   		movq	(%rax), %rdx
 221 0078 4863CD   		movslq	%ebp, %rcx
 222 007b 0FB7044A 		movzwl	(%rdx,%rcx,2), %eax
 223              	.LVL15:
 224              	.LBE233:
 225              	.LBE232:
 226              		.loc 1 148 0
 227 007f F6C420   		testb	$32, %ah
 228 0082 744C     		je	.L80
 229              	.LVL16:
 230              	.L23:
 231              	.LBE319:
 232              		.loc 1 145 0
 233 0084 4889DF   		movq	%rbx, %rdi
 234 0087 E8000000 		call	_IO_getc
 234      00
 235              	.LVL17:
 236 008c 83F8FF   		cmpl	$-1, %eax
 237 008f 89C5     		movl	%eax, %ebp
 238              	.LVL18:
 239 0091 75DD     		jne	.L81
 240              	.LVL19:
 241              	.L22:
 242              		.loc 1 324 0
 243 0093 4889DF   		movq	%rbx, %rdi
 244 0096 E8000000 		call	fclose
 244      00
 245              	.LVL20:
 246              		.loc 1 332 0
 247 009b 31C0     		xorl	%eax, %eax
 248              	.LVL21:
 249              	.L20:
 250              		.loc 1 333 0
 251 009d 488BB424 		movq	584(%rsp), %rsi
 251      48020000 
 252 00a5 64483334 		xorq	%fs:40, %rsi
 252      25280000 
 252      00
 253 00ae 0F85A305 		jne	.L82
 253      0000
 254 00b4 4881C458 		addq	$600, %rsp
 254      020000
 255              		.cfi_remember_state
 256              		.cfi_def_cfa_offset 56
 257 00bb 5B       		popq	%rbx
 258              		.cfi_def_cfa_offset 48
 259 00bc 5D       		popq	%rbp
 260              		.cfi_def_cfa_offset 40
 261 00bd 415C     		popq	%r12
 262              		.cfi_def_cfa_offset 32
 263 00bf 415D     		popq	%r13
 264              		.cfi_def_cfa_offset 24
 265 00c1 415E     		popq	%r14
 266              		.cfi_def_cfa_offset 16
 267 00c3 415F     		popq	%r15
 268              		.cfi_def_cfa_offset 8
 269 00c5 C3       		ret
 270              	.LVL22:
 271 00c6 662E0F1F 		.p2align 4,,10
 271      84000000 
 271      0000
 272              		.p2align 3
 273              	.L80:
 274              		.cfi_restore_state
 275              	.LBB320:
 276              		.loc 1 152 0
 277 00d0 83FD23   		cmpl	$35, %ebp
 278 00d3 7474     		je	.L27
 279              		.loc 1 165 0
 280 00d5 F6C404   		testb	$4, %ah
 281 00d8 0F84D604 		je	.L83
 281      0000
 282              	.LVL23:
 283              		.loc 1 174 0
 284 00de 40886C24 		movb	%bpl, 64(%rsp)
 284      40
 285 00e3 498D6E01 		leaq	1(%r14), %rbp
 286              	.LVL24:
 287 00e7 EB15     		jmp	.L31
 288              	.LVL25:
 289 00e9 0F1F8000 		.p2align 4,,10
 289      000000
 290              		.p2align 3
 291              	.L85:
 292              		.loc 1 178 0
 293 00f0 83F828   		cmpl	$40, %eax
 294 00f3 746B     		je	.L30
 295              		.loc 1 180 0
 296 00f5 4C39E5   		cmpq	%r12, %rbp
 297 00f8 0F826202 		jb	.L84
 297      0000
 298              	.LVL26:
 299              	.L31:
 300              		.loc 1 176 0
 301 00fe 4889DF   		movq	%rbx, %rdi
 302 0101 E8000000 		call	_IO_getc
 302      00
 303              	.LVL27:
 304 0106 83F8FF   		cmpl	$-1, %eax
 305 0109 75E5     		jne	.L85
 306              		.loc 1 190 0
 307 010b 4889DF   		movq	%rbx, %rdi
 308              		.loc 1 184 0
 309 010e C6450000 		movb	$0, 0(%rbp)
 310 0112 89442408 		movl	%eax, 8(%rsp)
 311              	.LVL28:
 312              		.loc 1 190 0
 313 0116 488B2D00 		movq	_ZN2Fl5errorE(%rip), %rbp
 313      000000
 314              	.LVL29:
 315 011d E8000000 		call	ftell
 315      00
 316              	.LVL30:
 317 0122 8B542408 		movl	8(%rsp), %edx
 318 0126 488D70FF 		leaq	-1(%rax), %rsi
 319 012a BF000000 		movl	$.LC20, %edi
 319      00
 320 012f 31C0     		xorl	%eax, %eax
 321 0131 FFD5     		call	*%rbp
 322              	.LVL31:
 323              		.loc 1 191 0
 324 0133 E95BFFFF 		jmp	.L22
 324      FF
 325              	.LVL32:
 326 0138 0F1F8400 		.p2align 4,,10
 326      00000000 
 327              		.p2align 3
 328              	.L86:
 329              		.loc 1 155 0
 330 0140 83F80A   		cmpl	$10, %eax
 331 0143 0F843BFF 		je	.L23
 331      FFFF
 332              	.LVL33:
 333              	.L27:
 334              		.loc 1 154 0
 335 0149 4889DF   		movq	%rbx, %rdi
 336 014c E8000000 		call	_IO_getc
 336      00
 337              	.LVL34:
 338 0151 83F8FF   		cmpl	$-1, %eax
 339 0154 75EA     		jne	.L86
 340 0156 E938FFFF 		jmp	.L22
 340      FF
 341              	.LVL35:
 342 015b 0F1F4400 		.p2align 4,,10
 342      00
 343              		.p2align 3
 344              	.L30:
 345              		.loc 1 184 0
 346 0160 C6450000 		movb	$0, 0(%rbp)
 347 0164 4C89FD   		movq	%r15, %rbp
 348              	.LVL36:
 349 0167 EB15     		jmp	.L35
 350              	.LVL37:
 351 0169 0F1F8000 		.p2align 4,,10
 351      000000
 352              		.p2align 3
 353              	.L88:
 354              		.loc 1 199 0
 355 0170 83F829   		cmpl	$41, %eax
 356 0173 744B     		je	.L34
 357              		.loc 1 201 0
 358 0175 4C39ED   		cmpq	%r13, %rbp
 359 0178 0F82F201 		jb	.L87
 359      0000
 360              	.LVL38:
 361              	.L35:
 362              		.loc 1 197 0
 363 017e 4889DF   		movq	%rbx, %rdi
 364 0181 E8000000 		call	_IO_getc
 364      00
 365              	.LVL39:
 366 0186 83F8FF   		cmpl	$-1, %eax
 367 0189 75E5     		jne	.L88
 368              		.loc 1 211 0
 369 018b 4889DF   		movq	%rbx, %rdi
 370              		.loc 1 205 0
 371 018e C6450000 		movb	$0, 0(%rbp)
 372 0192 89442408 		movl	%eax, 8(%rsp)
 373              	.LVL40:
 374              		.loc 1 211 0
 375 0196 488B2D00 		movq	_ZN2Fl5errorE(%rip), %rbp
 375      000000
 376              	.LVL41:
 377 019d E8000000 		call	ftell
 377      00
 378              	.LVL42:
 379 01a2 8B542408 		movl	8(%rsp), %edx
 380 01a6 488D70FF 		leaq	-1(%rax), %rsi
 381 01aa BF000000 		movl	$.LC21, %edi
 381      00
 382 01af 31C0     		xorl	%eax, %eax
 383 01b1 FFD5     		call	*%rbp
 384              	.LVL43:
 385              		.loc 1 212 0
 386 01b3 E9DBFEFF 		jmp	.L22
 386      FF
 387              	.LVL44:
 388 01b8 0F1F8400 		.p2align 4,,10
 388      00000000 
 389              		.p2align 3
 390              	.L34:
 391              		.loc 1 205 0
 392 01c0 C6450000 		movb	$0, 0(%rbp)
 393              		.loc 1 216 0
 394 01c4 4889DF   		movq	%rbx, %rdi
 395 01c7 E8000000 		call	_IO_getc
 395      00
 396              	.LVL45:
 397 01cc 83F83B   		cmpl	$59, %eax
 398 01cf 89C5     		movl	%eax, %ebp
 399              	.LVL46:
 400 01d1 0F85B903 		jne	.L89
 400      0000
 401              	.LBB234:
 402              		.loc 1 224 0
 403 01d7 BF000000 		movl	$.LC5, %edi
 403      00
 404 01dc B9060000 		movl	$6, %ecx
 404      00
 405 01e1 4C89F6   		movq	%r14, %rsi
 406 01e4 F3A6     		repz cmpsb
 407 01e6 7570     		jne	.L37
 408              	.LBB235:
 409              		.loc 1 236 0
 410 01e8 BF000000 		movl	$.LC6, %edi
 410      00
 411 01ed B90A0000 		movl	$10, %ecx
 411      00
 412 01f2 4C89FE   		movq	%r15, %rsi
 413 01f5 F3A6     		repz cmpsb
 414 01f7 0F849C02 		je	.L90
 414      0000
 415              	.LBB236:
 416              		.loc 1 238 0
 417 01fd BF000000 		movl	$.LC7, %edi
 417      00
 418 0202 B90C0000 		movl	$12, %ecx
 418      00
 419 0207 4C89FE   		movq	%r15, %rsi
 420 020a F3A6     		repz cmpsb
 421 020c 0F846A01 		je	.L91
 421      0000
 422              	.LBB237:
 423              		.loc 1 240 0
 424 0212 BF000000 		movl	$.LC8, %edi
 424      00
 425 0217 B90D0000 		movl	$13, %ecx
 425      00
 426 021c 4C89FE   		movq	%r15, %rsi
 427 021f F3A6     		repz cmpsb
 428 0221 0F85A302 		jne	.L40
 428      0000
 429              	.LVL47:
 430              	.LBB238:
 431              	.LBB239:
 432              		.file 3 "fltk-1.3.4-1/FL/Fl_File_Icon.H"
   1:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
   2:fltk-1.3.4-1/FL/Fl_File_Icon.H **** // "$Id: Fl_File_Icon.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
   4:fltk-1.3.4-1/FL/Fl_File_Icon.H **** // Fl_File_Icon definitions.
   5:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
   6:fltk-1.3.4-1/FL/Fl_File_Icon.H **** // Copyright 1999-2010 by Michael Sweet.
   7:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
   8:fltk-1.3.4-1/FL/Fl_File_Icon.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_File_Icon.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_File_Icon.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
  12:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
  14:fltk-1.3.4-1/FL/Fl_File_Icon.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
  16:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
  18:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  19:fltk-1.3.4-1/FL/Fl_File_Icon.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_File_Icon.H ****    Fl_File_Icon widget . */
  21:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  22:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
  23:fltk-1.3.4-1/FL/Fl_File_Icon.H **** // Include necessary header files...
  24:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
  25:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  26:fltk-1.3.4-1/FL/Fl_File_Icon.H **** #ifndef _Fl_Fl_File_Icon_H_
  27:fltk-1.3.4-1/FL/Fl_File_Icon.H **** #  define _Fl_Fl_File_Icon_H_
  28:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  29:fltk-1.3.4-1/FL/Fl_File_Icon.H **** #  include "Fl.H"
  30:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  31:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  32:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
  33:fltk-1.3.4-1/FL/Fl_File_Icon.H **** // Special color value for the icon color.
  34:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
  35:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  36:fltk-1.3.4-1/FL/Fl_File_Icon.H **** #  define FL_ICON_COLOR (Fl_Color)0xffffffff	/**< icon color [background?]*/
  37:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  38:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  39:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
  40:fltk-1.3.4-1/FL/Fl_File_Icon.H **** // Fl_File_Icon class...
  41:fltk-1.3.4-1/FL/Fl_File_Icon.H **** //
  42:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  43:fltk-1.3.4-1/FL/Fl_File_Icon.H **** /** 
  44:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   The Fl_File_Icon class manages icon images that can be used 
  45:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   as labels in other widgets and as icons in the FileBrowser widget.
  46:fltk-1.3.4-1/FL/Fl_File_Icon.H **** */
  47:fltk-1.3.4-1/FL/Fl_File_Icon.H **** class FL_EXPORT Fl_File_Icon {			//// Icon data
  48:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  49:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   static Fl_File_Icon *first_;	// Pointer to first icon/filetype
  50:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   Fl_File_Icon	*next_;		// Pointer to next icon/filetype
  51:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   const char	*pattern_;	// Pattern string
  52:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   int		type_;		// Match only if directory or file?
  53:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   int		num_data_;	// Number of data elements
  54:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   int		alloc_data_;	// Number of allocated elements
  55:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   short		*data_;		// Icon data
  56:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  57:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   public:
  58:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  59:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   enum				// File types
  60:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   {
  61:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     ANY,			// Any kind of file
  62:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     PLAIN,			// Only plain files
  63:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     FIFO,			// Only named pipes
  64:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     DEVICE,			// Only character and block devices
  65:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     LINK,			// Only symbolic links
  66:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     DIRECTORY			// Only directories
  67:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   };
  68:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  69:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   enum				// Data opcodes
  70:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   {
  71:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     END,			// End of primitive/icon
  72:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     COLOR,			// Followed by color value (2 shorts)
  73:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     LINE,			// Start of line
  74:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     CLOSEDLINE,			// Start of closed line
  75:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     POLYGON,			// Start of polygon
  76:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     OUTLINEPOLYGON,		// Followed by outline color (2 shorts)
  77:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     VERTEX			// Followed by scaled X,Y
  78:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   };
  79:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  80:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   Fl_File_Icon(const char *p, int t, int nd = 0, short *d = 0);
  81:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   ~Fl_File_Icon();
  82:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  83:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   short		*add(short d);
  84:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  85:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   /**
  86:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     Adds a color value to the icon array, returning a pointer to it.
  87:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     \param[in] c color value
  88:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   */
  89:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   short		*add_color(Fl_Color c)
  90:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 		{ short *d = add((short)COLOR); add((short)(c >> 16)); add((short)c); return (d); }
 433              		.loc 3 90 0
 434 0227 488B6C24 		movq	8(%rsp), %rbp
 434      08
 435 022c BE010000 		movl	$1, %esi
 435      00
 436 0231 4889EF   		movq	%rbp, %rdi
 437 0234 E8000000 		call	_ZN12Fl_File_Icon3addEs
 437      00
 438              	.LVL48:
 439 0239 31F6     		xorl	%esi, %esi
 440 023b 4889EF   		movq	%rbp, %rdi
 441 023e E8000000 		call	_ZN12Fl_File_Icon3addEs
 441      00
 442              	.LVL49:
 443 0243 BE380000 		movl	$56, %esi
 443      00
 444 0248 4889EF   		movq	%rbp, %rdi
 445 024b E8000000 		call	_ZN12Fl_File_Icon3addEs
 445      00
 446              	.LVL50:
 447 0250 E92FFEFF 		jmp	.L23
 447      FF
 448              	.LVL51:
 449              		.p2align 4,,10
 450 0255 0F1F00   		.p2align 3
 451              	.L37:
 452              	.LBE239:
 453              	.LBE238:
 454              	.LBE237:
 455              	.LBE236:
 456              	.LBE235:
 457              	.LBB257:
 458              		.loc 1 258 0
 459 0258 BF000000 		movl	$.LC10, %edi
 459      00
 460 025d B9080000 		movl	$8, %ecx
 460      00
 461 0262 4C89F6   		movq	%r14, %rsi
 462 0265 F3A6     		repz cmpsb
 463 0267 0F841802 		je	.L92
 463      0000
 464              	.LBB258:
 465              		.loc 1 260 0
 466 026d BF000000 		movl	$.LC11, %edi
 466      00
 467 0272 B90E0000 		movl	$14, %ecx
 467      00
 468 0277 4C89F6   		movq	%r14, %rsi
 469 027a F3A6     		repz cmpsb
 470 027c 0F842801 		je	.L93
 470      0000
 471              	.LBB259:
 472              		.loc 1 262 0
 473 0282 BF000000 		movl	$.LC12, %edi
 473      00
 474 0287 B90B0000 		movl	$11, %ecx
 474      00
 475 028c 4C89F6   		movq	%r14, %rsi
 476 028f F3A6     		repz cmpsb
 477 0291 0F848E02 		je	.L94
 477      0000
 478              	.LBB260:
 479              		.loc 1 264 0
 480 0297 BF000000 		movl	$.LC13, %edi
 480      00
 481 029c B9120000 		movl	$18, %ecx
 481      00
 482 02a1 4C89F6   		movq	%r14, %rsi
 483 02a4 F3A6     		repz cmpsb
 484 02a6 0F848D02 		je	.L95
 484      0000
 485              	.LBB261:
 486              		.loc 1 270 0
 487 02ac BF000000 		movl	$.LC14, %edi
 487      00
 488 02b1 B9120000 		movl	$18, %ecx
 488      00
 489 02b6 4C89F6   		movq	%r14, %rsi
 490 02b9 F3A6     		repz cmpsb
 491 02bb 0F85FD00 		jne	.L46
 491      0000
 492 02c1 8B442410 		movl	16(%rsp), %eax
 493              	.LVL52:
 494 02c5 85C0     		testl	%eax, %eax
 495 02c7 0F84F100 		je	.L46
 495      0000
 496              	.LBB262:
 497              	.LBB263:
 498              		.loc 1 275 0
 499 02cd B90A0000 		movl	$10, %ecx
 499      00
 500 02d2 4C89FE   		movq	%r15, %rsi
 501 02d5 BF000000 		movl	$.LC6, %edi
 501      00
 502 02da F3A6     		repz cmpsb
 503 02dc BAFFFFFF 		movl	$-1, %edx
 503      FF
 504 02e1 400F97C6 		seta	%sil
 505 02e5 0F92C0   		setb	%al
 506 02e8 89D1     		movl	%edx, %ecx
 507 02ea 4038C6   		cmpb	%al, %sil
 508 02ed 743B     		je	.L47
 509              	.LBB264:
 510              		.loc 1 277 0
 511 02ef BF000000 		movl	$.LC7, %edi
 511      00
 512 02f4 B90C0000 		movl	$12, %ecx
 512      00
 513 02f9 4C89FE   		movq	%r15, %rsi
 514 02fc F3A6     		repz cmpsb
 515 02fe 0F84D402 		je	.L56
 515      0000
 516              	.LBB265:
 517              		.loc 1 279 0
 518 0304 B90D0000 		movl	$13, %ecx
 518      00
 519 0309 4C89FE   		movq	%r15, %rsi
 520 030c BF000000 		movl	$.LC8, %edi
 520      00
 521 0311 F3A6     		repz cmpsb
 522 0313 BA380000 		movl	$56, %edx
 522      00
 523 0318 400F97C6 		seta	%sil
 524 031c 0F92C0   		setb	%al
 525 031f 31C9     		xorl	%ecx, %ecx
 526 0321 4038C6   		cmpb	%al, %sil
 527 0324 0F85E602 		jne	.L96
 527      0000
 528              	.L47:
 529              	.LBE265:
 530              	.LBE264:
 531              	.LBE263:
 532              		.loc 1 297 0
 533 032a 488B7C24 		movq	8(%rsp), %rdi
 533      08
 534 032f 48634424 		movslq	16(%rsp), %rax
 534      10
 535 0334 488B7720 		movq	32(%rdi), %rsi
 536 0338 66890C46 		movw	%cx, (%rsi,%rax,2)
 537              		.loc 1 298 0
 538 033c 488B4F20 		movq	32(%rdi), %rcx
 539              		.loc 1 301 0
 540 0340 31F6     		xorl	%esi, %esi
 541              		.loc 1 298 0
 542 0342 66895441 		movw	%dx, 2(%rcx,%rax,2)
 542      02
 543              	.LVL53:
 544              		.loc 1 301 0
 545 0347 E8000000 		call	_ZN12Fl_File_Icon3addEs
 545      00
 546              	.LVL54:
 547              		.loc 1 300 0
 548 034c C7442410 		movl	$0, 16(%rsp)
 548      00000000 
 549              	.LBE262:
 550              		.loc 1 301 0
 551 0354 E92BFDFF 		jmp	.L23
 551      FF
 552              	.LVL55:
 553 0359 0F1F8000 		.p2align 4,,10
 553      000000
 554              		.p2align 3
 555              	.L84:
 556              	.LBE261:
 557              	.LBE260:
 558              	.LBE259:
 559              	.LBE258:
 560              	.LBE257:
 561              	.LBE234:
 562              		.loc 1 181 0
 563 0360 4883C501 		addq	$1, %rbp
 564              	.LVL56:
 565 0364 8845FF   		movb	%al, -1(%rbp)
 566 0367 E992FDFF 		jmp	.L31
 566      FF
 567 036c 0F1F4000 		.p2align 4,,10
 568              		.p2align 3
 569              	.L87:
 570              	.LVL57:
 571              		.loc 1 202 0
 572 0370 4883C501 		addq	$1, %rbp
 573              	.LVL58:
 574 0374 8845FF   		movb	%al, -1(%rbp)
 575 0377 E902FEFF 		jmp	.L35
 575      FF
 576              	.LVL59:
 577              	.L91:
 578              	.LBB315:
 579              	.LBB307:
 580              	.LBB252:
 581              	.LBB248:
 582              	.LBB249:
 583              		.loc 3 90 0
 584 037c 488B6C24 		movq	8(%rsp), %rbp
 584      08
 585 0381 BE010000 		movl	$1, %esi
 585      00
 586 0386 4889EF   		movq	%rbp, %rdi
 587 0389 E8000000 		call	_ZN12Fl_File_Icon3addEs
 587      00
 588              	.LVL60:
 589 038e 31F6     		xorl	%esi, %esi
 590 0390 4889EF   		movq	%rbp, %rdi
 591 0393 E8000000 		call	_ZN12Fl_File_Icon3addEs
 591      00
 592              	.LVL61:
 593 0398 BE270000 		movl	$39, %esi
 593      00
 594 039d 4889EF   		movq	%rbp, %rdi
 595 03a0 E8000000 		call	_ZN12Fl_File_Icon3addEs
 595      00
 596              	.LVL62:
 597 03a5 E9DAFCFF 		jmp	.L23
 597      FF
 598              	.LVL63:
 599              	.L93:
 600              	.LBE249:
 601              	.LBE248:
 602              	.LBE252:
 603              	.LBE307:
 604              	.LBB308:
 605              	.LBB302:
 606              		.loc 1 261 0
 607 03aa 488B7C24 		movq	8(%rsp), %rdi
 607      08
 608 03af BE030000 		movl	$3, %esi
 608      00
 609 03b4 E8000000 		call	_ZN12Fl_File_Icon3addEs
 609      00
 610              	.LVL64:
 611 03b9 E9C6FCFF 		jmp	.L23
 611      FF
 612              	.L46:
 613              	.LBB297:
 614              	.LBB291:
 615              	.LBB286:
 616              	.LBB274:
 617              		.loc 1 303 0
 618 03be BF000000 		movl	$.LC15, %edi
 618      00
 619 03c3 B9030000 		movl	$3, %ecx
 619      00
 620 03c8 4C89F6   		movq	%r14, %rsi
 621 03cb F3A6     		repz cmpsb
 622 03cd 0F844101 		je	.L97
 622      0000
 623              	.LBB275:
 624              		.loc 1 305 0
 625 03d3 BF000000 		movl	$.LC16, %edi
 625      00
 626 03d8 B9070000 		movl	$7, %ecx
 626      00
 627 03dd 4C89F6   		movq	%r14, %rsi
 628 03e0 F3A6     		repz cmpsb
 629 03e2 0F857402 		jne	.L50
 629      0000
 630              	.LBB276:
 631              		.loc 1 310 0
 632 03e8 488D4C24 		leaq	60(%rsp), %rcx
 632      3C
 633 03ed 488D5424 		leaq	56(%rsp), %rdx
 633      38
 634 03f2 31C0     		xorl	%eax, %eax
 635 03f4 BE000000 		movl	$.LC17, %esi
 635      00
 636 03f9 4C89FF   		movq	%r15, %rdi
 637 03fc E8000000 		call	sscanf
 637      00
 638              	.LVL65:
 639 0401 83F802   		cmpl	$2, %eax
 640 0404 0F8589FC 		jne	.L22
 640      FFFF
 641              		.loc 1 313 0
 642 040a 660FEFC0 		pxor	%xmm0, %xmm0
 643 040e F30F5A44 		cvtss2sd	60(%rsp), %xmm0
 643      243C
 644 0414 F20F5905 		mulsd	.LC18(%rip), %xmm0
 644      00000000 
 645 041c E8000000 		call	rint
 645      00
 646              	.LVL66:
 647 0421 F20F1144 		movsd	%xmm0, 40(%rsp)
 647      2428
 648 0427 660FEFC0 		pxor	%xmm0, %xmm0
 649 042b F30F5A44 		cvtss2sd	56(%rsp), %xmm0
 649      2438
 650 0431 F20F5905 		mulsd	.LC18(%rip), %xmm0
 650      00000000 
 651 0439 E8000000 		call	rint
 651      00
 652              	.LVL67:
 653              	.LBB277:
 654              	.LBB278:
  91:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
  92:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   /**
  93:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     Adds a vertex value to the icon array, returning a pointer to it.
  94:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     The integer version accepts coordinates from 0 to 10000.
  95:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     The origin (0.0) is in the lower-lefthand corner of the icon.
  96:fltk-1.3.4-1/FL/Fl_File_Icon.H ****     \param[in] x, y vertex coordinates
  97:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   */
  98:fltk-1.3.4-1/FL/Fl_File_Icon.H ****   short		*add_vertex(int x, int y)
  99:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 		{ short *d = add((short)VERTEX); add((short)x); add((short)y); return (d); }
 655              		.loc 3 99 0
 656 043e 488B6C24 		movq	8(%rsp), %rbp
 656      08
 657              	.LVL68:
 658 0443 BE060000 		movl	$6, %esi
 658      00
 659              	.LBE278:
 660              	.LBE277:
 661              		.loc 1 313 0
 662 0448 F20F1144 		movsd	%xmm0, 32(%rsp)
 662      2420
 663              	.LVL69:
 664              	.LBB280:
 665              	.LBB279:
 666              		.loc 3 99 0
 667 044e 4889EF   		movq	%rbp, %rdi
 668 0451 E8000000 		call	_ZN12Fl_File_Icon3addEs
 668      00
 669              	.LVL70:
 670 0456 F20F1044 		movsd	32(%rsp), %xmm0
 670      2420
 671 045c 4889EF   		movq	%rbp, %rdi
 672 045f F20F2CF0 		cvttsd2si	%xmm0, %esi
 673 0463 0FBFF6   		movswl	%si, %esi
 674 0466 E8000000 		call	_ZN12Fl_File_Icon3addEs
 674      00
 675              	.LVL71:
 676 046b F20F104C 		movsd	40(%rsp), %xmm1
 676      2428
 677 0471 4889EF   		movq	%rbp, %rdi
 678 0474 F20F2CF1 		cvttsd2si	%xmm1, %esi
 679 0478 0FBFF6   		movswl	%si, %esi
 680 047b E8000000 		call	_ZN12Fl_File_Icon3addEs
 680      00
 681              	.LVL72:
 682              	.LBE279:
 683              	.LBE280:
 684              	.LBE276:
 685 0480 E9FFFBFF 		jmp	.L23
 685      FF
 686              	.LVL73:
 687              	.L92:
 688              	.LBE275:
 689              	.LBE274:
 690              	.LBE286:
 691              	.LBE291:
 692              	.LBE297:
 693              	.LBE302:
 694              		.loc 1 259 0
 695 0485 488B7C24 		movq	8(%rsp), %rdi
 695      08
 696 048a BE020000 		movl	$2, %esi
 696      00
 697 048f E8000000 		call	_ZN12Fl_File_Icon3addEs
 697      00
 698              	.LVL74:
 699 0494 E9EBFBFF 		jmp	.L23
 699      FF
 700              	.LVL75:
 701              	.L90:
 702              	.LBE308:
 703              	.LBB309:
 704              	.LBB253:
 705              	.LBB254:
  90:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
 706              		.loc 3 90 0
 707 0499 488B6C24 		movq	8(%rsp), %rbp
 707      08
 708 049e BE010000 		movl	$1, %esi
 708      00
 709 04a3 4889EF   		movq	%rbp, %rdi
 710 04a6 E8000000 		call	_ZN12Fl_File_Icon3addEs
 710      00
 711              	.LVL76:
 712 04ab 4889EF   		movq	%rbp, %rdi
 713 04ae BEFFFFFF 		movl	$-1, %esi
 713      FF
 714 04b3 E8000000 		call	_ZN12Fl_File_Icon3addEs
 714      00
 715              	.LVL77:
 716 04b8 BEFFFFFF 		movl	$-1, %esi
 716      FF
 717 04bd 4889EF   		movq	%rbp, %rdi
 718 04c0 E8000000 		call	_ZN12Fl_File_Icon3addEs
 718      00
 719              	.LVL78:
 720 04c5 E9BAFBFF 		jmp	.L23
 720      FF
 721              	.LVL79:
 722              	.L40:
 723              	.LBE254:
 724              	.LBE253:
 725              	.LBB255:
 726              	.LBB250:
 727              	.LBB240:
 728              	.LBB241:
 729              	.LBB242:
 730              		.file 4 "/usr/include/stdlib.h"
   1:/usr/include/stdlib.h **** /* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   2:/usr/include/stdlib.h ****    This file is part of the GNU C Library.
   3:/usr/include/stdlib.h **** 
   4:/usr/include/stdlib.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/stdlib.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/stdlib.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/stdlib.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/stdlib.h **** 
   9:/usr/include/stdlib.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/stdlib.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/stdlib.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/stdlib.h ****    Lesser General Public License for more details.
  13:/usr/include/stdlib.h **** 
  14:/usr/include/stdlib.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/stdlib.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/stdlib.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/stdlib.h **** 
  18:/usr/include/stdlib.h **** /*
  19:/usr/include/stdlib.h ****  *	ISO C99 Standard: 7.20 General utilities	<stdlib.h>
  20:/usr/include/stdlib.h ****  */
  21:/usr/include/stdlib.h **** 
  22:/usr/include/stdlib.h **** #ifndef	_STDLIB_H
  23:/usr/include/stdlib.h **** 
  24:/usr/include/stdlib.h **** #include <features.h>
  25:/usr/include/stdlib.h **** 
  26:/usr/include/stdlib.h **** /* Get size_t, wchar_t and NULL from <stddef.h>.  */
  27:/usr/include/stdlib.h **** #define		__need_size_t
  28:/usr/include/stdlib.h **** #ifndef __need_malloc_and_calloc
  29:/usr/include/stdlib.h **** # define	__need_wchar_t
  30:/usr/include/stdlib.h **** # define	__need_NULL
  31:/usr/include/stdlib.h **** #endif
  32:/usr/include/stdlib.h **** #include <stddef.h>
  33:/usr/include/stdlib.h **** 
  34:/usr/include/stdlib.h **** __BEGIN_DECLS
  35:/usr/include/stdlib.h **** 
  36:/usr/include/stdlib.h **** #ifndef __need_malloc_and_calloc
  37:/usr/include/stdlib.h **** #define	_STDLIB_H	1
  38:/usr/include/stdlib.h **** 
  39:/usr/include/stdlib.h **** #if (defined __USE_XOPEN || defined __USE_XOPEN2K8) && !defined _SYS_WAIT_H
  40:/usr/include/stdlib.h **** /* XPG requires a few symbols from <sys/wait.h> being defined.  */
  41:/usr/include/stdlib.h **** # include <bits/waitflags.h>
  42:/usr/include/stdlib.h **** # include <bits/waitstatus.h>
  43:/usr/include/stdlib.h **** 
  44:/usr/include/stdlib.h **** # ifdef __USE_MISC
  45:/usr/include/stdlib.h **** 
  46:/usr/include/stdlib.h **** /* Lots of hair to allow traditional BSD use of `union wait'
  47:/usr/include/stdlib.h ****    as well as POSIX.1 use of `int' for the status word.  */
  48:/usr/include/stdlib.h **** 
  49:/usr/include/stdlib.h **** #  if defined __GNUC__ && !defined __cplusplus
  50:/usr/include/stdlib.h **** #   define __WAIT_INT(status) \
  51:/usr/include/stdlib.h ****   (__extension__ (((union { __typeof(status) __in; int __i; }) \
  52:/usr/include/stdlib.h **** 		   { .__in = (status) }).__i))
  53:/usr/include/stdlib.h **** #  else
  54:/usr/include/stdlib.h **** #   define __WAIT_INT(status)	(*(int *) &(status))
  55:/usr/include/stdlib.h **** #  endif
  56:/usr/include/stdlib.h **** 
  57:/usr/include/stdlib.h **** /* This is the type of the argument to `wait'.  The funky union
  58:/usr/include/stdlib.h ****    causes redeclarations with either `int *' or `union wait *' to be
  59:/usr/include/stdlib.h ****    allowed without complaint.  __WAIT_STATUS_DEFN is the type used in
  60:/usr/include/stdlib.h ****    the actual function definitions.  */
  61:/usr/include/stdlib.h **** 
  62:/usr/include/stdlib.h **** #  if !defined __GNUC__ || __GNUC__ < 2 || defined __cplusplus
  63:/usr/include/stdlib.h **** #   define __WAIT_STATUS	void *
  64:/usr/include/stdlib.h **** #   define __WAIT_STATUS_DEFN	void *
  65:/usr/include/stdlib.h **** #  else
  66:/usr/include/stdlib.h **** /* This works in GCC 2.6.1 and later.  */
  67:/usr/include/stdlib.h **** typedef union
  68:/usr/include/stdlib.h ****   {
  69:/usr/include/stdlib.h ****     union wait *__uptr;
  70:/usr/include/stdlib.h ****     int *__iptr;
  71:/usr/include/stdlib.h ****   } __WAIT_STATUS __attribute__ ((__transparent_union__));
  72:/usr/include/stdlib.h **** #   define __WAIT_STATUS_DEFN	int *
  73:/usr/include/stdlib.h **** #  endif
  74:/usr/include/stdlib.h **** 
  75:/usr/include/stdlib.h **** # else /* Don't use misc.  */
  76:/usr/include/stdlib.h **** 
  77:/usr/include/stdlib.h **** #  define __WAIT_INT(status)	(status)
  78:/usr/include/stdlib.h **** #  define __WAIT_STATUS		int *
  79:/usr/include/stdlib.h **** #  define __WAIT_STATUS_DEFN	int *
  80:/usr/include/stdlib.h **** 
  81:/usr/include/stdlib.h **** # endif /* Use misc.  */
  82:/usr/include/stdlib.h **** 
  83:/usr/include/stdlib.h **** /* Define the macros <sys/wait.h> also would define this way.  */
  84:/usr/include/stdlib.h **** # define WEXITSTATUS(status)	__WEXITSTATUS (__WAIT_INT (status))
  85:/usr/include/stdlib.h **** # define WTERMSIG(status)	__WTERMSIG (__WAIT_INT (status))
  86:/usr/include/stdlib.h **** # define WSTOPSIG(status)	__WSTOPSIG (__WAIT_INT (status))
  87:/usr/include/stdlib.h **** # define WIFEXITED(status)	__WIFEXITED (__WAIT_INT (status))
  88:/usr/include/stdlib.h **** # define WIFSIGNALED(status)	__WIFSIGNALED (__WAIT_INT (status))
  89:/usr/include/stdlib.h **** # define WIFSTOPPED(status)	__WIFSTOPPED (__WAIT_INT (status))
  90:/usr/include/stdlib.h **** # ifdef __WIFCONTINUED
  91:/usr/include/stdlib.h **** #  define WIFCONTINUED(status)	__WIFCONTINUED (__WAIT_INT (status))
  92:/usr/include/stdlib.h **** # endif
  93:/usr/include/stdlib.h **** #endif	/* X/Open or XPG7 and <sys/wait.h> not included.  */
  94:/usr/include/stdlib.h **** 
  95:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_STD
  96:/usr/include/stdlib.h **** /* Returned by `div'.  */
  97:/usr/include/stdlib.h **** typedef struct
  98:/usr/include/stdlib.h ****   {
  99:/usr/include/stdlib.h ****     int quot;			/* Quotient.  */
 100:/usr/include/stdlib.h ****     int rem;			/* Remainder.  */
 101:/usr/include/stdlib.h ****   } div_t;
 102:/usr/include/stdlib.h **** 
 103:/usr/include/stdlib.h **** /* Returned by `ldiv'.  */
 104:/usr/include/stdlib.h **** #ifndef __ldiv_t_defined
 105:/usr/include/stdlib.h **** typedef struct
 106:/usr/include/stdlib.h ****   {
 107:/usr/include/stdlib.h ****     long int quot;		/* Quotient.  */
 108:/usr/include/stdlib.h ****     long int rem;		/* Remainder.  */
 109:/usr/include/stdlib.h ****   } ldiv_t;
 110:/usr/include/stdlib.h **** # define __ldiv_t_defined	1
 111:/usr/include/stdlib.h **** #endif
 112:/usr/include/stdlib.h **** __END_NAMESPACE_STD
 113:/usr/include/stdlib.h **** 
 114:/usr/include/stdlib.h **** #if defined __USE_ISOC99 && !defined __lldiv_t_defined
 115:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_C99
 116:/usr/include/stdlib.h **** /* Returned by `lldiv'.  */
 117:/usr/include/stdlib.h **** __extension__ typedef struct
 118:/usr/include/stdlib.h ****   {
 119:/usr/include/stdlib.h ****     long long int quot;		/* Quotient.  */
 120:/usr/include/stdlib.h ****     long long int rem;		/* Remainder.  */
 121:/usr/include/stdlib.h ****   } lldiv_t;
 122:/usr/include/stdlib.h **** # define __lldiv_t_defined	1
 123:/usr/include/stdlib.h **** __END_NAMESPACE_C99
 124:/usr/include/stdlib.h **** #endif
 125:/usr/include/stdlib.h **** 
 126:/usr/include/stdlib.h **** 
 127:/usr/include/stdlib.h **** /* The largest number rand will return (same as INT_MAX).  */
 128:/usr/include/stdlib.h **** #define	RAND_MAX	2147483647
 129:/usr/include/stdlib.h **** 
 130:/usr/include/stdlib.h **** 
 131:/usr/include/stdlib.h **** /* We define these the same for all machines.
 132:/usr/include/stdlib.h ****    Changes from this to the outside world should be done in `_exit'.  */
 133:/usr/include/stdlib.h **** #define	EXIT_FAILURE	1	/* Failing exit status.  */
 134:/usr/include/stdlib.h **** #define	EXIT_SUCCESS	0	/* Successful exit status.  */
 135:/usr/include/stdlib.h **** 
 136:/usr/include/stdlib.h **** 
 137:/usr/include/stdlib.h **** /* Maximum length of a multibyte character in the current locale.  */
 138:/usr/include/stdlib.h **** #define	MB_CUR_MAX	(__ctype_get_mb_cur_max ())
 139:/usr/include/stdlib.h **** extern size_t __ctype_get_mb_cur_max (void) __THROW __wur;
 140:/usr/include/stdlib.h **** 
 141:/usr/include/stdlib.h **** 
 142:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_STD
 143:/usr/include/stdlib.h **** /* Convert a string to a floating-point number.  */
 144:/usr/include/stdlib.h **** extern double atof (const char *__nptr)
 145:/usr/include/stdlib.h ****      __THROW __attribute_pure__ __nonnull ((1)) __wur;
 146:/usr/include/stdlib.h **** /* Convert a string to an integer.  */
 147:/usr/include/stdlib.h **** extern int atoi (const char *__nptr)
 148:/usr/include/stdlib.h ****      __THROW __attribute_pure__ __nonnull ((1)) __wur;
 149:/usr/include/stdlib.h **** /* Convert a string to a long integer.  */
 150:/usr/include/stdlib.h **** extern long int atol (const char *__nptr)
 151:/usr/include/stdlib.h ****      __THROW __attribute_pure__ __nonnull ((1)) __wur;
 152:/usr/include/stdlib.h **** __END_NAMESPACE_STD
 153:/usr/include/stdlib.h **** 
 154:/usr/include/stdlib.h **** #ifdef __USE_ISOC99
 155:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_C99
 156:/usr/include/stdlib.h **** /* Convert a string to a long long integer.  */
 157:/usr/include/stdlib.h **** __extension__ extern long long int atoll (const char *__nptr)
 158:/usr/include/stdlib.h ****      __THROW __attribute_pure__ __nonnull ((1)) __wur;
 159:/usr/include/stdlib.h **** __END_NAMESPACE_C99
 160:/usr/include/stdlib.h **** #endif
 161:/usr/include/stdlib.h **** 
 162:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_STD
 163:/usr/include/stdlib.h **** /* Convert a string to a floating-point number.  */
 164:/usr/include/stdlib.h **** extern double strtod (const char *__restrict __nptr,
 165:/usr/include/stdlib.h **** 		      char **__restrict __endptr)
 166:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 167:/usr/include/stdlib.h **** __END_NAMESPACE_STD
 168:/usr/include/stdlib.h **** 
 169:/usr/include/stdlib.h **** #ifdef	__USE_ISOC99
 170:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_C99
 171:/usr/include/stdlib.h **** /* Likewise for `float' and `long double' sizes of floating-point numbers.  */
 172:/usr/include/stdlib.h **** extern float strtof (const char *__restrict __nptr,
 173:/usr/include/stdlib.h **** 		     char **__restrict __endptr) __THROW __nonnull ((1));
 174:/usr/include/stdlib.h **** 
 175:/usr/include/stdlib.h **** extern long double strtold (const char *__restrict __nptr,
 176:/usr/include/stdlib.h **** 			    char **__restrict __endptr)
 177:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 178:/usr/include/stdlib.h **** __END_NAMESPACE_C99
 179:/usr/include/stdlib.h **** #endif
 180:/usr/include/stdlib.h **** 
 181:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_STD
 182:/usr/include/stdlib.h **** /* Convert a string to a long integer.  */
 183:/usr/include/stdlib.h **** extern long int strtol (const char *__restrict __nptr,
 184:/usr/include/stdlib.h **** 			char **__restrict __endptr, int __base)
 185:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 186:/usr/include/stdlib.h **** /* Convert a string to an unsigned long integer.  */
 187:/usr/include/stdlib.h **** extern unsigned long int strtoul (const char *__restrict __nptr,
 188:/usr/include/stdlib.h **** 				  char **__restrict __endptr, int __base)
 189:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 190:/usr/include/stdlib.h **** __END_NAMESPACE_STD
 191:/usr/include/stdlib.h **** 
 192:/usr/include/stdlib.h **** #ifdef __USE_MISC
 193:/usr/include/stdlib.h **** /* Convert a string to a quadword integer.  */
 194:/usr/include/stdlib.h **** __extension__
 195:/usr/include/stdlib.h **** extern long long int strtoq (const char *__restrict __nptr,
 196:/usr/include/stdlib.h **** 			     char **__restrict __endptr, int __base)
 197:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 198:/usr/include/stdlib.h **** /* Convert a string to an unsigned quadword integer.  */
 199:/usr/include/stdlib.h **** __extension__
 200:/usr/include/stdlib.h **** extern unsigned long long int strtouq (const char *__restrict __nptr,
 201:/usr/include/stdlib.h **** 				       char **__restrict __endptr, int __base)
 202:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 203:/usr/include/stdlib.h **** #endif /* Use misc.  */
 204:/usr/include/stdlib.h **** 
 205:/usr/include/stdlib.h **** #ifdef __USE_ISOC99
 206:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_C99
 207:/usr/include/stdlib.h **** /* Convert a string to a quadword integer.  */
 208:/usr/include/stdlib.h **** __extension__
 209:/usr/include/stdlib.h **** extern long long int strtoll (const char *__restrict __nptr,
 210:/usr/include/stdlib.h **** 			      char **__restrict __endptr, int __base)
 211:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 212:/usr/include/stdlib.h **** /* Convert a string to an unsigned quadword integer.  */
 213:/usr/include/stdlib.h **** __extension__
 214:/usr/include/stdlib.h **** extern unsigned long long int strtoull (const char *__restrict __nptr,
 215:/usr/include/stdlib.h **** 					char **__restrict __endptr, int __base)
 216:/usr/include/stdlib.h ****      __THROW __nonnull ((1));
 217:/usr/include/stdlib.h **** __END_NAMESPACE_C99
 218:/usr/include/stdlib.h **** #endif /* ISO C99 or use MISC.  */
 219:/usr/include/stdlib.h **** 
 220:/usr/include/stdlib.h **** 
 221:/usr/include/stdlib.h **** #ifdef __USE_GNU
 222:/usr/include/stdlib.h **** /* The concept of one static locale per category is not very well
 223:/usr/include/stdlib.h ****    thought out.  Many applications will need to process its data using
 224:/usr/include/stdlib.h ****    information from several different locales.  Another problem is
 225:/usr/include/stdlib.h ****    the implementation of the internationalization handling in the
 226:/usr/include/stdlib.h ****    ISO C++ standard library.  To support this another set of
 227:/usr/include/stdlib.h ****    the functions using locale data exist which take an additional
 228:/usr/include/stdlib.h ****    argument.
 229:/usr/include/stdlib.h **** 
 230:/usr/include/stdlib.h ****    Attention: even though several *_l interfaces are part of POSIX:2008,
 231:/usr/include/stdlib.h ****    these are not.  */
 232:/usr/include/stdlib.h **** 
 233:/usr/include/stdlib.h **** /* Structure for reentrant locale using functions.  This is an
 234:/usr/include/stdlib.h ****    (almost) opaque type for the user level programs.  */
 235:/usr/include/stdlib.h **** # include <xlocale.h>
 236:/usr/include/stdlib.h **** 
 237:/usr/include/stdlib.h **** /* Special versions of the functions above which take the locale to
 238:/usr/include/stdlib.h ****    use as an additional parameter.  */
 239:/usr/include/stdlib.h **** extern long int strtol_l (const char *__restrict __nptr,
 240:/usr/include/stdlib.h **** 			  char **__restrict __endptr, int __base,
 241:/usr/include/stdlib.h **** 			  __locale_t __loc) __THROW __nonnull ((1, 4));
 242:/usr/include/stdlib.h **** 
 243:/usr/include/stdlib.h **** extern unsigned long int strtoul_l (const char *__restrict __nptr,
 244:/usr/include/stdlib.h **** 				    char **__restrict __endptr,
 245:/usr/include/stdlib.h **** 				    int __base, __locale_t __loc)
 246:/usr/include/stdlib.h ****      __THROW __nonnull ((1, 4));
 247:/usr/include/stdlib.h **** 
 248:/usr/include/stdlib.h **** __extension__
 249:/usr/include/stdlib.h **** extern long long int strtoll_l (const char *__restrict __nptr,
 250:/usr/include/stdlib.h **** 				char **__restrict __endptr, int __base,
 251:/usr/include/stdlib.h **** 				__locale_t __loc)
 252:/usr/include/stdlib.h ****      __THROW __nonnull ((1, 4));
 253:/usr/include/stdlib.h **** 
 254:/usr/include/stdlib.h **** __extension__
 255:/usr/include/stdlib.h **** extern unsigned long long int strtoull_l (const char *__restrict __nptr,
 256:/usr/include/stdlib.h **** 					  char **__restrict __endptr,
 257:/usr/include/stdlib.h **** 					  int __base, __locale_t __loc)
 258:/usr/include/stdlib.h ****      __THROW __nonnull ((1, 4));
 259:/usr/include/stdlib.h **** 
 260:/usr/include/stdlib.h **** extern double strtod_l (const char *__restrict __nptr,
 261:/usr/include/stdlib.h **** 			char **__restrict __endptr, __locale_t __loc)
 262:/usr/include/stdlib.h ****      __THROW __nonnull ((1, 3));
 263:/usr/include/stdlib.h **** 
 264:/usr/include/stdlib.h **** extern float strtof_l (const char *__restrict __nptr,
 265:/usr/include/stdlib.h **** 		       char **__restrict __endptr, __locale_t __loc)
 266:/usr/include/stdlib.h ****      __THROW __nonnull ((1, 3));
 267:/usr/include/stdlib.h **** 
 268:/usr/include/stdlib.h **** extern long double strtold_l (const char *__restrict __nptr,
 269:/usr/include/stdlib.h **** 			      char **__restrict __endptr,
 270:/usr/include/stdlib.h **** 			      __locale_t __loc)
 271:/usr/include/stdlib.h ****      __THROW __nonnull ((1, 3));
 272:/usr/include/stdlib.h **** #endif /* GNU */
 273:/usr/include/stdlib.h **** 
 274:/usr/include/stdlib.h **** 
 275:/usr/include/stdlib.h **** #ifdef __USE_EXTERN_INLINES
 276:/usr/include/stdlib.h **** __BEGIN_NAMESPACE_STD
 277:/usr/include/stdlib.h **** __extern_inline int
 278:/usr/include/stdlib.h **** __NTH (atoi (const char *__nptr))
 279:/usr/include/stdlib.h **** {
 280:/usr/include/stdlib.h ****   return (int) strtol (__nptr, (char **) NULL, 10);
 731              		.loc 4 280 0
 732 04ca 31F6     		xorl	%esi, %esi
 733 04cc BA0A0000 		movl	$10, %edx
 733      00
 734 04d1 4C89FF   		movq	%r15, %rdi
 735 04d4 E8000000 		call	strtol
 735      00
 736              	.LVL80:
 737              	.LBE242:
 738              	.LBE241:
 739              		.loc 1 247 0
 740 04d9 85C0     		testl	%eax, %eax
 741              	.LBB244:
 742              	.LBB243:
 743              		.loc 4 280 0
 744 04db 4889C5   		movq	%rax, %rbp
 745              	.LVL81:
 746              	.LBE243:
 747              	.LBE244:
 748              		.loc 1 247 0
 749 04de 0F888C00 		js	.L98
 749      0000
 750              	.L41:
 751              	.LVL82:
 752              	.LBB245:
 753              	.LBB246:
  90:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
 754              		.loc 3 90 0
 755 04e4 488B7C24 		movq	8(%rsp), %rdi
 755      08
 756 04e9 BE010000 		movl	$1, %esi
 756      00
 757 04ee E8000000 		call	_ZN12Fl_File_Icon3addEs
 757      00
 758              	.LVL83:
 759 04f3 488B7C24 		movq	8(%rsp), %rdi
 759      08
 760 04f8 89EE     		movl	%ebp, %esi
 761 04fa C1FE10   		sarl	$16, %esi
 762 04fd E8000000 		call	_ZN12Fl_File_Icon3addEs
 762      00
 763              	.LVL84:
 764 0502 488B7C24 		movq	8(%rsp), %rdi
 764      08
 765 0507 0FBFF5   		movswl	%bp, %esi
 766 050a E8000000 		call	_ZN12Fl_File_Icon3addEs
 766      00
 767              	.LVL85:
 768 050f E970FBFF 		jmp	.L23
 768      FF
 769              	.LVL86:
 770              	.L97:
 771              	.LBE246:
 772              	.LBE245:
 773              	.LBE240:
 774              	.LBE250:
 775              	.LBE255:
 776              	.LBE309:
 777              	.LBB310:
 778              	.LBB303:
 779              	.LBB298:
 780              	.LBB292:
 781              	.LBB287:
 782              	.LBB282:
 783              		.loc 1 304 0
 784 0514 488B7C24 		movq	8(%rsp), %rdi
 784      08
 785 0519 31F6     		xorl	%esi, %esi
 786 051b E8000000 		call	_ZN12Fl_File_Icon3addEs
 786      00
 787              	.LVL87:
 788 0520 E95FFBFF 		jmp	.L23
 788      FF
 789              	.LVL88:
 790              	.L94:
 791              	.LBE282:
 792              	.LBE287:
 793              	.LBE292:
 794              		.loc 1 263 0
 795 0525 488B7C24 		movq	8(%rsp), %rdi
 795      08
 796 052a BE040000 		movl	$4, %esi
 796      00
 797 052f E8000000 		call	_ZN12Fl_File_Icon3addEs
 797      00
 798              	.LVL89:
 799 0534 E94BFBFF 		jmp	.L23
 799      FF
 800              	.LVL90:
 801              	.L95:
 802              	.LBB293:
 803              		.loc 1 266 0
 804 0539 488B6C24 		movq	8(%rsp), %rbp
 804      08
 805 053e BE050000 		movl	$5, %esi
 805      00
 806 0543 4889EF   		movq	%rbp, %rdi
 807 0546 E8000000 		call	_ZN12Fl_File_Icon3addEs
 807      00
 808              	.LVL91:
 809              		.loc 1 267 0
 810 054b 31F6     		xorl	%esi, %esi
 811 054d 4889EF   		movq	%rbp, %rdi
 812 0550 E8000000 		call	_ZN12Fl_File_Icon3addEs
 812      00
 813              	.LVL92:
 814 0555 482B4520 		subq	32(%rbp), %rax
 815              		.loc 1 268 0
 816 0559 31F6     		xorl	%esi, %esi
 817 055b 4889EF   		movq	%rbp, %rdi
 818              		.loc 1 267 0
 819 055e 48D1E8   		shrq	%rax
 820 0561 48894424 		movq	%rax, 16(%rsp)
 820      10
 821              	.LVL93:
 822              		.loc 1 268 0
 823 0566 E8000000 		call	_ZN12Fl_File_Icon3addEs
 823      00
 824              	.LVL94:
 825 056b E914FBFF 		jmp	.L23
 825      FF
 826              	.LVL95:
 827              	.L98:
 828              	.LBE293:
 829              	.LBE298:
 830              	.LBE303:
 831              	.LBE310:
 832              	.LBB311:
 833              	.LBB256:
 834              	.LBB251:
 835              	.LBB247:
 836              		.loc 1 250 0
 837 0570 F7DD     		negl	%ebp
 838              	.LVL96:
 839              		.loc 1 251 0
 840 0572 F30F1005 		movss	.LC9(%rip), %xmm0
 840      00000000 
 841 057a 89EE     		movl	%ebp, %esi
 842 057c 89EF     		movl	%ebp, %edi
 843 057e 83E60F   		andl	$15, %esi
 844 0581 C1FF04   		sarl	$4, %edi
 845 0584 E8000000 		call	_Z16fl_color_averagejjf
 845      00
 846              	.LVL97:
 847 0589 89C5     		movl	%eax, %ebp
 848              	.LVL98:
 849 058b E954FFFF 		jmp	.L41
 849      FF
 850              	.LVL99:
 851              	.L89:
 852              	.LBE247:
 853              	.LBE251:
 854              	.LBE256:
 855              	.LBE311:
 856              	.LBE315:
 857              		.loc 1 219 0
 858 0590 4889DF   		movq	%rbx, %rdi
 859 0593 4C8B2500 		movq	_ZN2Fl5errorE(%rip), %r12
 859      000000
 860 059a E8000000 		call	ftell
 860      00
 861              	.LVL100:
 862 059f 89EA     		movl	%ebp, %edx
 863 05a1 488D70FF 		leaq	-1(%rax), %rsi
 864 05a5 BF000000 		movl	$.LC4, %edi
 864      00
 865 05aa 31C0     		xorl	%eax, %eax
 866 05ac 41FFD4   		call	*%r12
 867              	.LVL101:
 868              		.loc 1 220 0
 869 05af E9DFFAFF 		jmp	.L22
 869      FF
 870              	.L83:
 871              		.loc 1 168 0
 872 05b4 4889DF   		movq	%rbx, %rdi
 873 05b7 4C8B2500 		movq	_ZN2Fl5errorE(%rip), %r12
 873      000000
 874 05be E8000000 		call	ftell
 874      00
 875              	.LVL102:
 876 05c3 89EA     		movl	%ebp, %edx
 877 05c5 488D70FF 		leaq	-1(%rax), %rsi
 878 05c9 BF000000 		movl	$.LC3, %edi
 878      00
 879 05ce 31C0     		xorl	%eax, %eax
 880 05d0 41FFD4   		call	*%r12
 881              	.LVL103:
 882              		.loc 1 169 0
 883 05d3 E9BBFAFF 		jmp	.L22
 883      FF
 884              	.L56:
 885              	.LBB316:
 886              	.LBB312:
 887              	.LBB304:
 888              	.LBB299:
 889              	.LBB294:
 890              	.LBB288:
 891              	.LBB283:
 892              	.LBB272:
 893              	.LBB270:
 894 05d8 BA270000 		movl	$39, %edx
 894      00
 895 05dd 31C9     		xorl	%ecx, %ecx
 896 05df E946FDFF 		jmp	.L47
 896      FF
 897              	.LVL104:
 898              	.L18:
 899              	.LBE270:
 900              	.LBE272:
 901              	.LBE283:
 902              	.LBE288:
 903              	.LBE294:
 904              	.LBE299:
 905              	.LBE304:
 906              	.LBE312:
 907              	.LBE316:
 908              	.LBE320:
 909              		.loc 1 138 0
 910 05e4 E8000000 		call	__errno_location
 910      00
 911              	.LVL105:
 912              		.loc 1 137 0
 913 05e9 8B38     		movl	(%rax), %edi
 914              		.loc 1 138 0
 915 05eb 488B1D00 		movq	_ZN2Fl5errorE(%rip), %rbx
 915      000000
 916              		.loc 1 137 0
 917 05f2 E8000000 		call	strerror
 917      00
 918              	.LVL106:
 919              		.loc 1 138 0
 920 05f7 4889EE   		movq	%rbp, %rsi
 921 05fa 4889C2   		movq	%rax, %rdx
 922 05fd BF000000 		movl	$.LC2, %edi
 922      00
 923 0602 31C0     		xorl	%eax, %eax
 924 0604 FFD3     		call	*%rbx
 925              	.LVL107:
 926              		.loc 1 139 0
 927 0606 B8FFFFFF 		movl	$-1, %eax
 927      FF
 928 060b E98DFAFF 		jmp	.L20
 928      FF
 929              	.LVL108:
 930              	.L96:
 931              	.LBB321:
 932              	.LBB317:
 933              	.LBB313:
 934              	.LBB305:
 935              	.LBB300:
 936              	.LBB295:
 937              	.LBB289:
 938              	.LBB284:
 939              	.LBB273:
 940              	.LBB271:
 941              	.LBB269:
 942              	.LBB266:
 943              	.LBB267:
 944              	.LBB268:
 945              		.loc 4 280 0
 946 0610 31F6     		xorl	%esi, %esi
 947 0612 BA0A0000 		movl	$10, %edx
 947      00
 948 0617 4C89FF   		movq	%r15, %rdi
 949 061a E8000000 		call	strtol
 949      00
 950              	.LVL109:
 951 061f 89C6     		movl	%eax, %esi
 952 0621 89C2     		movl	%eax, %edx
 953 0623 C1EE10   		shrl	$16, %esi
 954              	.LBE268:
 955              	.LBE267:
 956              		.loc 1 286 0
 957 0626 85C0     		testl	%eax, %eax
 958 0628 89F1     		movl	%esi, %ecx
 959 062a 0F89FAFC 		jns	.L47
 959      FFFF
 960              		.loc 1 289 0
 961 0630 F7D8     		negl	%eax
 962              	.LVL110:
 963              		.loc 1 290 0
 964 0632 F30F1005 		movss	.LC9(%rip), %xmm0
 964      00000000 
 965 063a 89C6     		movl	%eax, %esi
 966 063c C1F804   		sarl	$4, %eax
 967              	.LVL111:
 968 063f 83E60F   		andl	$15, %esi
 969              	.LVL112:
 970 0642 89C7     		movl	%eax, %edi
 971 0644 E8000000 		call	_Z16fl_color_averagejjf
 971      00
 972              	.LVL113:
 973 0649 89C6     		movl	%eax, %esi
 974 064b 89C2     		movl	%eax, %edx
 975 064d C1EE10   		shrl	$16, %esi
 976 0650 89F1     		movl	%esi, %ecx
 977 0652 E9D3FCFF 		jmp	.L47
 977      FF
 978              	.LVL114:
 979              	.L82:
 980              	.LBE266:
 981              	.LBE269:
 982              	.LBE271:
 983              	.LBE273:
 984              	.LBE284:
 985              	.LBE289:
 986              	.LBE295:
 987              	.LBE300:
 988              	.LBE305:
 989              	.LBE313:
 990              	.LBE317:
 991              	.LBE321:
 992              		.loc 1 333 0
 993 0657 E8000000 		call	__stack_chk_fail
 993      00
 994              	.LVL115:
 995              	.L50:
 996              	.LBB322:
 997              	.LBB318:
 998              	.LBB314:
 999              	.LBB306:
 1000              	.LBB301:
 1001              	.LBB296:
 1002              	.LBB290:
 1003              	.LBB285:
 1004              	.LBB281:
 1005              		.loc 1 318 0
 1006 065c 4889DF   		movq	%rbx, %rdi
 1007 065f 488B2D00 		movq	_ZN2Fl5errorE(%rip), %rbp
 1007      000000
 1008              	.LVL116:
 1009 0666 E8000000 		call	ftell
 1009      00
 1010              	.LVL117:
 1011 066b 4C89F6   		movq	%r14, %rsi
 1012 066e 488D50FF 		leaq	-1(%rax), %rdx
 1013 0672 BF000000 		movl	$.LC19, %edi
 1013      00
 1014 0677 31C0     		xorl	%eax, %eax
 1015 0679 FFD5     		call	*%rbp
 1016              	.LVL118:
 1017              		.loc 1 319 0
 1018 067b E913FAFF 		jmp	.L22
 1018      FF
 1019              	.LBE281:
 1020              	.LBE285:
 1021              	.LBE290:
 1022              	.LBE296:
 1023              	.LBE301:
 1024              	.LBE306:
 1025              	.LBE314:
 1026              	.LBE318:
 1027              	.LBE322:
 1028              		.cfi_endproc
 1029              	.LFE518:
 1031              		.section	.text.unlikely._ZN12Fl_File_Icon8load_ftiEPKc
 1032              	.LCOLDE22:
 1033              		.section	.text._ZN12Fl_File_Icon8load_ftiEPKc
 1034              	.LHOTE22:
 1035              		.section	.rodata.str1.1
 1036              	.LC23:
 1037 0082 252A6425 		.string	"%*d%*d%d%d"
 1037      2A642564 
 1037      256400
 1038              	.LC24:
 1039 008d 632000   		.string	"c "
 1040              	.LC25:
 1041 0090 77686974 		.string	"white"
 1041      6500
 1042              	.LC26:
 1043 0096 626C6163 		.string	"black"
 1043      6B00
 1044              	.LC27:
 1045 009c 6E6F6E65 		.string	"none"
 1045      00
 1046              		.section	.text.unlikely._ZN12Fl_File_Icon10load_imageEPKc,"ax",@progbits
 1047              		.align 2
 1048              	.LCOLDB28:
 1049              		.section	.text._ZN12Fl_File_Icon10load_imageEPKc,"ax",@progbits
 1050              	.LHOTB28:
 1051              		.align 2
 1052              		.p2align 4,,15
 1053              		.globl	_ZN12Fl_File_Icon10load_imageEPKc
 1055              	_ZN12Fl_File_Icon10load_imageEPKc:
 1056              	.LFB519:
 1057              		.loc 1 342 0
 1058              		.cfi_startproc
 1059              	.LVL119:
 1060 0000 4157     		pushq	%r15
 1061              		.cfi_def_cfa_offset 16
 1062              		.cfi_offset 15, -16
 1063 0002 4156     		pushq	%r14
 1064              		.cfi_def_cfa_offset 24
 1065              		.cfi_offset 14, -24
 1066              		.loc 1 346 0
 1067 0004 31D2     		xorl	%edx, %edx
 1068              		.loc 1 342 0
 1069 0006 4155     		pushq	%r13
 1070              		.cfi_def_cfa_offset 32
 1071              		.cfi_offset 13, -32
 1072 0008 4154     		pushq	%r12
 1073              		.cfi_def_cfa_offset 40
 1074              		.cfi_offset 12, -40
 1075 000a 55       		pushq	%rbp
 1076              		.cfi_def_cfa_offset 48
 1077              		.cfi_offset 6, -48
 1078 000b 53       		pushq	%rbx
 1079              		.cfi_def_cfa_offset 56
 1080              		.cfi_offset 3, -56
 1081 000c 4889FB   		movq	%rdi, %rbx
 1082 000f 4889F7   		movq	%rsi, %rdi
 1083              	.LVL120:
 1084              		.loc 1 346 0
 1085 0012 31F6     		xorl	%esi, %esi
 1086              	.LVL121:
 1087              		.loc 1 342 0
 1088 0014 4883EC78 		subq	$120, %rsp
 1089              		.cfi_def_cfa_offset 176
 1090              		.loc 1 342 0
 1091 0018 64488B04 		movq	%fs:40, %rax
 1091      25280000 
 1091      00
 1092 0021 48894424 		movq	%rax, 104(%rsp)
 1092      68
 1093 0026 31C0     		xorl	%eax, %eax
 1094              		.loc 1 346 0
 1095 0028 E8000000 		call	_ZN15Fl_Shared_Image3getEPKcii
 1095      00
 1096              	.LVL122:
 1097 002d 4989C7   		movq	%rax, %r15
 1098              	.LVL123:
 1099              		.loc 1 347 0
 1100 0030 B8FFFFFF 		movl	$-1, %eax
 1100      FF
 1101              	.LVL124:
 1102 0035 4D85FF   		testq	%r15, %r15
 1103 0038 7408     		je	.L100
 1104 003a 418B4F18 		movl	24(%r15), %ecx
 1105              	.LVL125:
 1106              		.loc 1 347 0 is_stmt 0 discriminator 2
 1107 003e 85C9     		testl	%ecx, %ecx
 1108 0040 7523     		jne	.L224
 1109              	.LVL126:
 1110              	.L100:
 1111              		.loc 1 584 0 is_stmt 1
 1112 0042 488B5C24 		movq	104(%rsp), %rbx
 1112      68
 1113 0047 6448331C 		xorq	%fs:40, %rbx
 1113      25280000 
 1113      00
 1114 0050 0F85CB0C 		jne	.L225
 1114      0000
 1115 0056 4883C478 		addq	$120, %rsp
 1116              		.cfi_remember_state
 1117              		.cfi_def_cfa_offset 56
 1118 005a 5B       		popq	%rbx
 1119              		.cfi_def_cfa_offset 48
 1120 005b 5D       		popq	%rbp
 1121              		.cfi_def_cfa_offset 40
 1122 005c 415C     		popq	%r12
 1123              		.cfi_def_cfa_offset 32
 1124 005e 415D     		popq	%r13
 1125              		.cfi_def_cfa_offset 24
 1126 0060 415E     		popq	%r14
 1127              		.cfi_def_cfa_offset 16
 1128 0062 415F     		popq	%r15
 1129              		.cfi_def_cfa_offset 8
 1130 0064 C3       		ret
 1131              	.LVL127:
 1132              	.L224:
 1133              		.cfi_restore_state
 1134 0065 418B5708 		movl	8(%r15), %edx
 1135              	.LVL128:
 1136              		.loc 1 347 0 discriminator 4
 1137 0069 85D2     		testl	%edx, %edx
 1138 006b 74D5     		je	.L100
 1139 006d 418B770C 		movl	12(%r15), %esi
 1140              	.LVL129:
 1141              		.loc 1 347 0 is_stmt 0 discriminator 6
 1142 0071 85F6     		testl	%esi, %esi
 1143 0073 74CD     		je	.L100
 1144              	.LVL130:
 1145              	.LBB386:
 1146              		.loc 1 349 0 is_stmt 1
 1147 0075 83F901   		cmpl	$1, %ecx
 1148 0078 0F851706 		jne	.L210
 1148      0000
 1149 007e 418B4714 		movl	20(%r15), %eax
 1150              	.LVL131:
 1151              	.LBB387:
 1152              		.loc 1 356 0
 1153 0082 85C0     		testl	%eax, %eax
 1154 0084 7409     		je	.L102
 1155              	.LVL132:
 1156              		.loc 1 356 0 is_stmt 0 discriminator 1
 1157 0086 418B4F10 		movl	16(%r15), %ecx
 1158 008a 0FAFCA   		imull	%edx, %ecx
 1159 008d 29C8     		subl	%ecx, %eax
 1160              	.LVL133:
 1161              	.L102:
 1162              		.loc 1 359 0 is_stmt 1 discriminator 4
 1163 008f 498B4F20 		movq	32(%r15), %rcx
 1164 0093 4898     		cltq
 1165 0095 85F6     		testl	%esi, %esi
 1166 0097 48894424 		movq	%rax, 48(%rsp)
 1166      30
 1167 009c C7042400 		movl	$0, (%rsp)
 1167      000000
 1168 00a3 C7442420 		movl	$1, 32(%rsp)
 1168      01000000 
 1169 00ab 4C8B01   		movq	(%rcx), %r8
 1170              	.LVL134:
 1171 00ae 0F8ED205 		jle	.L104
 1171      0000
 1172              		.loc 1 361 0
 1173 00b4 85D2     		testl	%edx, %edx
 1174 00b6 4D89C6   		movq	%r8, %r14
 1175              	.LVL135:
 1176 00b9 0F8E0704 		jle	.L226
 1176      0000
 1177              	.LVL136:
 1178 00bf 90       		.p2align 4,,10
 1179              		.p2align 3
 1180              	.L105:
 1181 00c0 8B542420 		movl	32(%rsp), %edx
 1182 00c4 41BCFFFF 		movl	$-1, %r12d
 1182      FFFF
 1183 00ca 418B4710 		movl	16(%r15), %eax
 1184 00ce 4489E5   		movl	%r12d, %ebp
 1185 00d1 4531ED   		xorl	%r13d, %r13d
 1186 00d4 89542428 		movl	%edx, 40(%rsp)
 1187 00d8 8B1424   		movl	(%rsp), %edx
 1188 00db 8D8A2823 		leal	9000(%rdx), %ecx
 1188      0000
 1189 00e1 894C2408 		movl	%ecx, 8(%rsp)
 1190 00e5 31C9     		xorl	%ecx, %ecx
 1191 00e7 4189CC   		movl	%ecx, %r12d
 1192 00ea EB4F     		jmp	.L113
 1193              	.LVL137:
 1194 00ec 0F1F4000 		.p2align 4,,10
 1195              		.p2align 3
 1196              	.L229:
 1197              		.loc 1 365 0
 1198 00f0 83F803   		cmpl	$3, %eax
 1199 00f3 747B     		je	.L217
 1200 00f5 83F801   		cmpl	$1, %eax
 1201 00f8 7452     		je	.L218
 1202              		.loc 1 380 0
 1203 00fa 41807E03 		cmpb	$0, 3(%r14)
 1203      00
 1204              		.loc 1 374 0
 1205 00ff B9FFFFFF 		movl	$-1, %ecx
 1205      FF
 1206              		.loc 1 380 0
 1207 0104 786A     		js	.L217
 1208 0106 662E0F1F 		.p2align 4,,10
 1208      84000000 
 1208      0000
 1209              		.p2align 3
 1210              	.L111:
 1211              	.LVL138:
 1212              		.loc 1 387 0
 1213 0110 39E9     		cmpl	%ebp, %ecx
 1214 0112 7411     		je	.L112
 1215              		.loc 1 389 0
 1216 0114 4539EC   		cmpl	%r13d, %r12d
 1217 0117 7E09     		jle	.L162
 1218 0119 83FDFF   		cmpl	$-1, %ebp
 1219 011c 0F857E00 		jne	.L227
 1219      0000
 1220              	.L162:
 1221 0122 4589E5   		movl	%r12d, %r13d
 1222              	.LVL139:
 1223              	.L112:
 1224              		.loc 1 361 0 discriminator 2
 1225 0125 4863D0   		movslq	%eax, %rdx
 1226 0128 4183C401 		addl	$1, %r12d
 1227              	.LVL140:
 1228 012c 89CD     		movl	%ecx, %ebp
 1229 012e 4901D6   		addq	%rdx, %r14
 1230              	.LVL141:
 1231 0131 453B6708 		cmpl	8(%r15), %r12d
 1232 0135 0F8DE501 		jge	.L228
 1232      0000
 1233              	.LVL142:
 1234              	.L113:
 1235              		.loc 1 365 0
 1236 013b 83F802   		cmpl	$2, %eax
 1237 013e 75B0     		jne	.L229
 1238              		.loc 1 371 0
 1239 0140 41807E01 		cmpb	$0, 1(%r14)
 1239      00
 1240              		.loc 1 374 0
 1241 0145 B9FFFFFF 		movl	$-1, %ecx
 1241      FF
 1242              		.loc 1 371 0
 1243 014a 79C4     		jns	.L111
 1244              	.L218:
 1245              		.loc 1 372 0
 1246 014c 410FB616 		movzbl	(%r14), %edx
 1247              	.LVL143:
 1248              	.LBB388:
 1249              	.LBB389:
 1250              		.file 5 "fltk-1.3.4-1/FL/Enumerations.H"
   1:fltk-1.3.4-1/FL/Enumerations.H **** //
   2:fltk-1.3.4-1/FL/Enumerations.H **** // "$Id: Enumerations.H 11803 2016-07-09 18:43:31Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Enumerations.H **** //
   4:fltk-1.3.4-1/FL/Enumerations.H **** // Enumerations for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Enumerations.H **** //
   6:fltk-1.3.4-1/FL/Enumerations.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Enumerations.H **** //
   8:fltk-1.3.4-1/FL/Enumerations.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Enumerations.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Enumerations.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Enumerations.H **** //
  12:fltk-1.3.4-1/FL/Enumerations.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Enumerations.H **** //
  14:fltk-1.3.4-1/FL/Enumerations.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Enumerations.H **** //
  16:fltk-1.3.4-1/FL/Enumerations.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Enumerations.H **** //
  18:fltk-1.3.4-1/FL/Enumerations.H **** 
  19:fltk-1.3.4-1/FL/Enumerations.H **** /** \file
  20:fltk-1.3.4-1/FL/Enumerations.H ****     This file contains type definitions and general enumerations.
  21:fltk-1.3.4-1/FL/Enumerations.H ****  */
  22:fltk-1.3.4-1/FL/Enumerations.H **** 
  23:fltk-1.3.4-1/FL/Enumerations.H **** #ifndef Fl_Enumerations_H
  24:fltk-1.3.4-1/FL/Enumerations.H **** #define Fl_Enumerations_H
  25:fltk-1.3.4-1/FL/Enumerations.H **** 
  26:fltk-1.3.4-1/FL/Enumerations.H **** /*
  27:fltk-1.3.4-1/FL/Enumerations.H ****  ******************************************************************************
  28:fltk-1.3.4-1/FL/Enumerations.H ****  * Notes on FL_ABI_VERSION and deprecated (obsolete) FLTK_ABI_VERSION:
  29:fltk-1.3.4-1/FL/Enumerations.H ****  *
  30:fltk-1.3.4-1/FL/Enumerations.H ****  * (1)	FLTK_ABI_VERSION is deprecated, but still defined below.
  31:fltk-1.3.4-1/FL/Enumerations.H ****  *	Do NOT define FLTK_ABI_VERSION here - it would be overwritten later.
  32:fltk-1.3.4-1/FL/Enumerations.H ****  *
  33:fltk-1.3.4-1/FL/Enumerations.H ****  * (2)	FL_ABI_VERSION is now (as of FLTK 1.3.4) defined by configure
  34:fltk-1.3.4-1/FL/Enumerations.H ****  *	or CMake. Do NOT define it here. Its definition will be included
  35:fltk-1.3.4-1/FL/Enumerations.H ****  *	below by "#include <FL/abi-version.h>".
  36:fltk-1.3.4-1/FL/Enumerations.H ****  *
  37:fltk-1.3.4-1/FL/Enumerations.H ****  * (3)	If you use the provided IDE files (Windows VC++ or Xcode) you should
  38:fltk-1.3.4-1/FL/Enumerations.H ****  *	edit the definition in the provided file abi-version.ide. The correct
  39:fltk-1.3.4-1/FL/Enumerations.H ****  *	file is `/path/to/fltk/abi-version.ide' .
  40:fltk-1.3.4-1/FL/Enumerations.H ****  *
  41:fltk-1.3.4-1/FL/Enumerations.H ****  ******************************************************************************
  42:fltk-1.3.4-1/FL/Enumerations.H ****  * For more informations on FL_ABI_VERSION see README.abi-version.txt.
  43:fltk-1.3.4-1/FL/Enumerations.H ****  ******************************************************************************
  44:fltk-1.3.4-1/FL/Enumerations.H ****  */
  45:fltk-1.3.4-1/FL/Enumerations.H **** 
  46:fltk-1.3.4-1/FL/Enumerations.H **** #include <FL/abi-version.h>
  47:fltk-1.3.4-1/FL/Enumerations.H **** 
  48:fltk-1.3.4-1/FL/Enumerations.H **** #  include "Fl_Export.H"
  49:fltk-1.3.4-1/FL/Enumerations.H **** #  include "fl_types.h"
  50:fltk-1.3.4-1/FL/Enumerations.H **** 
  51:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Version Numbers
  52:fltk-1.3.4-1/FL/Enumerations.H **** 
  53:fltk-1.3.4-1/FL/Enumerations.H ****     FLTK defines some constants to help the programmer to
  54:fltk-1.3.4-1/FL/Enumerations.H ****     find out, for which FLTK version a program is compiled.
  55:fltk-1.3.4-1/FL/Enumerations.H ****     
  56:fltk-1.3.4-1/FL/Enumerations.H ****     The following constants are defined:
  57:fltk-1.3.4-1/FL/Enumerations.H ****  */
  58:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
  59:fltk-1.3.4-1/FL/Enumerations.H **** 
  60:fltk-1.3.4-1/FL/Enumerations.H **** /**
  61:fltk-1.3.4-1/FL/Enumerations.H ****    The major release version of this FLTK library.
  62:fltk-1.3.4-1/FL/Enumerations.H ****    \sa FL_VERSION
  63:fltk-1.3.4-1/FL/Enumerations.H ****  */
  64:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_MAJOR_VERSION	1
  65:fltk-1.3.4-1/FL/Enumerations.H **** 
  66:fltk-1.3.4-1/FL/Enumerations.H **** /**
  67:fltk-1.3.4-1/FL/Enumerations.H ****    The minor release version for this library.
  68:fltk-1.3.4-1/FL/Enumerations.H **** 
  69:fltk-1.3.4-1/FL/Enumerations.H ****    FLTK remains mostly source-code compatible between minor version changes.
  70:fltk-1.3.4-1/FL/Enumerations.H ****  */
  71:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_MINOR_VERSION	3
  72:fltk-1.3.4-1/FL/Enumerations.H **** 
  73:fltk-1.3.4-1/FL/Enumerations.H **** /**
  74:fltk-1.3.4-1/FL/Enumerations.H ****    The patch version for this library.
  75:fltk-1.3.4-1/FL/Enumerations.H **** 
  76:fltk-1.3.4-1/FL/Enumerations.H ****    FLTK remains binary compatible between patches.
  77:fltk-1.3.4-1/FL/Enumerations.H ****  */
  78:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PATCH_VERSION	4
  79:fltk-1.3.4-1/FL/Enumerations.H **** 
  80:fltk-1.3.4-1/FL/Enumerations.H **** /**
  81:fltk-1.3.4-1/FL/Enumerations.H ****     The FLTK version number as a \em double.
  82:fltk-1.3.4-1/FL/Enumerations.H **** 
  83:fltk-1.3.4-1/FL/Enumerations.H ****     FL_VERSION is a \em double that describes the major, minor, and patch
  84:fltk-1.3.4-1/FL/Enumerations.H ****     version numbers.
  85:fltk-1.3.4-1/FL/Enumerations.H **** 
  86:fltk-1.3.4-1/FL/Enumerations.H ****     Version 1.2.3 is actually stored as 1.0203 to allow for more than 9
  87:fltk-1.3.4-1/FL/Enumerations.H ****     minor and patch releases.
  88:fltk-1.3.4-1/FL/Enumerations.H **** 
  89:fltk-1.3.4-1/FL/Enumerations.H ****     \deprecated This \p double version number is retained for compatibility
  90:fltk-1.3.4-1/FL/Enumerations.H ****     with existing program code. New code should use \em int FL_API_VERSION
  91:fltk-1.3.4-1/FL/Enumerations.H ****     instead. FL_VERSION is deprecated because comparisons of floating point
  92:fltk-1.3.4-1/FL/Enumerations.H ****     values may fail due to rounding errors. However, there are currently no
  93:fltk-1.3.4-1/FL/Enumerations.H ****     plans to remove this deprecated constant.
  94:fltk-1.3.4-1/FL/Enumerations.H **** 
  95:fltk-1.3.4-1/FL/Enumerations.H ****     FL_VERSION is equivalent to <em>(double)FL_API_VERSION / 10000</em>.
  96:fltk-1.3.4-1/FL/Enumerations.H **** 
  97:fltk-1.3.4-1/FL/Enumerations.H ****     \see Fl::version() (deprecated as well)
  98:fltk-1.3.4-1/FL/Enumerations.H ****     \see FL_API_VERSION
  99:fltk-1.3.4-1/FL/Enumerations.H ****     \see Fl::api_version()
 100:fltk-1.3.4-1/FL/Enumerations.H ****  */
 101:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_VERSION	( (double)FL_MAJOR_VERSION + \
 102:fltk-1.3.4-1/FL/Enumerations.H **** 			  (double)FL_MINOR_VERSION * 0.01 + \
 103:fltk-1.3.4-1/FL/Enumerations.H **** 			  (double)FL_PATCH_VERSION * 0.0001 )
 104:fltk-1.3.4-1/FL/Enumerations.H **** 
 105:fltk-1.3.4-1/FL/Enumerations.H **** /**
 106:fltk-1.3.4-1/FL/Enumerations.H ****     The FLTK API version number as an \em int.
 107:fltk-1.3.4-1/FL/Enumerations.H **** 
 108:fltk-1.3.4-1/FL/Enumerations.H ****     FL_API_VERSION is an \em int that describes the major, minor, and patch
 109:fltk-1.3.4-1/FL/Enumerations.H ****     version numbers.
 110:fltk-1.3.4-1/FL/Enumerations.H **** 
 111:fltk-1.3.4-1/FL/Enumerations.H ****     Version 1.2.3 is actually stored as 10203 to allow for more than 9
 112:fltk-1.3.4-1/FL/Enumerations.H ****     minor and patch releases.
 113:fltk-1.3.4-1/FL/Enumerations.H **** 
 114:fltk-1.3.4-1/FL/Enumerations.H ****     The FL_MAJOR_VERSION, FL_MINOR_VERSION, and FL_PATCH_VERSION constants
 115:fltk-1.3.4-1/FL/Enumerations.H ****     give the integral values for the major, minor, and patch releases
 116:fltk-1.3.4-1/FL/Enumerations.H ****     respectively.
 117:fltk-1.3.4-1/FL/Enumerations.H **** 
 118:fltk-1.3.4-1/FL/Enumerations.H ****     \note FL_API_VERSION is intended to replace the deprecated
 119:fltk-1.3.4-1/FL/Enumerations.H ****     \em double FL_VERSION.
 120:fltk-1.3.4-1/FL/Enumerations.H **** 
 121:fltk-1.3.4-1/FL/Enumerations.H ****     \see Fl::api_version()
 122:fltk-1.3.4-1/FL/Enumerations.H ****  */
 123:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_API_VERSION (FL_MAJOR_VERSION*10000 + FL_MINOR_VERSION*100 + FL_PATCH_VERSION)
 124:fltk-1.3.4-1/FL/Enumerations.H **** 
 125:fltk-1.3.4-1/FL/Enumerations.H **** /**
 126:fltk-1.3.4-1/FL/Enumerations.H ****     The FLTK ABI (Application Binary Interface) version number as an \em int.
 127:fltk-1.3.4-1/FL/Enumerations.H **** 
 128:fltk-1.3.4-1/FL/Enumerations.H ****     FL_ABI_VERSION is an \em int that describes the major, minor, and patch
 129:fltk-1.3.4-1/FL/Enumerations.H ****     ABI version numbers in the same format as FL_API_VERSION.
 130:fltk-1.3.4-1/FL/Enumerations.H **** 
 131:fltk-1.3.4-1/FL/Enumerations.H ****     The ABI version number \p FL_ABI_VERSION is usually the same as the
 132:fltk-1.3.4-1/FL/Enumerations.H ****     API version \p FL_API_VERSION with the last two digits set to '00'.
 133:fltk-1.3.4-1/FL/Enumerations.H **** 
 134:fltk-1.3.4-1/FL/Enumerations.H ****     FLTK retains the ABI (Application Binary Interface) during patch
 135:fltk-1.3.4-1/FL/Enumerations.H ****     releases of the same major and minor versions. Examples:
 136:fltk-1.3.4-1/FL/Enumerations.H **** 
 137:fltk-1.3.4-1/FL/Enumerations.H ****     \verbatim
 138:fltk-1.3.4-1/FL/Enumerations.H ****       FLTK Version  FL_API_VERSION  FL_ABI_VERSION  FL_VERSION (deprecated)
 139:fltk-1.3.4-1/FL/Enumerations.H ****         1.3.0          10300           10300           1.0300
 140:fltk-1.3.4-1/FL/Enumerations.H **** 	1.3.4          10304           10300           1.0304
 141:fltk-1.3.4-1/FL/Enumerations.H ****     \endverbatim
 142:fltk-1.3.4-1/FL/Enumerations.H **** 
 143:fltk-1.3.4-1/FL/Enumerations.H ****     Version 1.2.3 is actually stored as 10203 to allow for more than 9
 144:fltk-1.3.4-1/FL/Enumerations.H ****     minor and patch releases.
 145:fltk-1.3.4-1/FL/Enumerations.H **** 
 146:fltk-1.3.4-1/FL/Enumerations.H ****     The FL_MAJOR_VERSION, FL_MINOR_VERSION, and FL_PATCH_VERSION constants
 147:fltk-1.3.4-1/FL/Enumerations.H ****     give the integral values for the major, minor, and patch releases
 148:fltk-1.3.4-1/FL/Enumerations.H ****     respectively.
 149:fltk-1.3.4-1/FL/Enumerations.H **** 
 150:fltk-1.3.4-1/FL/Enumerations.H ****     To enable new ABI-breaking features in patch releases you can configure
 151:fltk-1.3.4-1/FL/Enumerations.H ****     FLTK to use a higher FL_ABI_VERSION.
 152:fltk-1.3.4-1/FL/Enumerations.H **** 
 153:fltk-1.3.4-1/FL/Enumerations.H ****     \see README.abi-version.txt
 154:fltk-1.3.4-1/FL/Enumerations.H ****  */
 155:fltk-1.3.4-1/FL/Enumerations.H **** #ifndef FL_ABI_VERSION
 156:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ABI_VERSION (FL_MAJOR_VERSION*10000 + FL_MINOR_VERSION*100)
 157:fltk-1.3.4-1/FL/Enumerations.H **** #endif
 158:fltk-1.3.4-1/FL/Enumerations.H **** 
 159:fltk-1.3.4-1/FL/Enumerations.H **** /*
 160:fltk-1.3.4-1/FL/Enumerations.H ****   Check if FL_ABI_VERSION is out of allowed range; redefine if necessary.
 161:fltk-1.3.4-1/FL/Enumerations.H **** 
 162:fltk-1.3.4-1/FL/Enumerations.H ****   This is done to prevent users from defining an illegal ABI version.
 163:fltk-1.3.4-1/FL/Enumerations.H **** 
 164:fltk-1.3.4-1/FL/Enumerations.H ****   Rule: FL_MAJOR_VERSION * 10000 + FL_MINOR_VERSION * 100
 165:fltk-1.3.4-1/FL/Enumerations.H **** 	  <= FL_ABI_VERSION <= FL_API_VERSION.
 166:fltk-1.3.4-1/FL/Enumerations.H **** 
 167:fltk-1.3.4-1/FL/Enumerations.H ****   Example (FLTK 1.3.4):
 168:fltk-1.3.4-1/FL/Enumerations.H **** 
 169:fltk-1.3.4-1/FL/Enumerations.H ****     10300 <= FL_ABI_VERSION <= 10304
 170:fltk-1.3.4-1/FL/Enumerations.H **** 
 171:fltk-1.3.4-1/FL/Enumerations.H ****   Note: configure + CMake can be used to define FL_ABI_VERSION, but they
 172:fltk-1.3.4-1/FL/Enumerations.H ****   do not check validity. This is done here.
 173:fltk-1.3.4-1/FL/Enumerations.H **** */
 174:fltk-1.3.4-1/FL/Enumerations.H **** 
 175:fltk-1.3.4-1/FL/Enumerations.H **** #if FL_ABI_VERSION < FL_MAJOR_VERSION*10000 + FL_MINOR_VERSION*100
 176:fltk-1.3.4-1/FL/Enumerations.H **** 
 177:fltk-1.3.4-1/FL/Enumerations.H **** # undef FL_ABI_VERSION
 178:fltk-1.3.4-1/FL/Enumerations.H **** # define FL_ABI_VERSION (FL_MAJOR_VERSION*10000 + FL_MINOR_VERSION*100)
 179:fltk-1.3.4-1/FL/Enumerations.H **** 
 180:fltk-1.3.4-1/FL/Enumerations.H **** #elif FL_ABI_VERSION > FL_API_VERSION
 181:fltk-1.3.4-1/FL/Enumerations.H **** 
 182:fltk-1.3.4-1/FL/Enumerations.H **** # undef FL_ABI_VERSION
 183:fltk-1.3.4-1/FL/Enumerations.H **** # define FL_ABI_VERSION FL_API_VERSION
 184:fltk-1.3.4-1/FL/Enumerations.H **** 
 185:fltk-1.3.4-1/FL/Enumerations.H **** #endif
 186:fltk-1.3.4-1/FL/Enumerations.H **** 
 187:fltk-1.3.4-1/FL/Enumerations.H **** /*
 188:fltk-1.3.4-1/FL/Enumerations.H ****   FLTK_ABI_VERSION is deprecated (replaced by FL_ABI_VERSION).
 189:fltk-1.3.4-1/FL/Enumerations.H **** 
 190:fltk-1.3.4-1/FL/Enumerations.H ****   This deprecated constant will be removed in FLTK 1.4.0 and later.
 191:fltk-1.3.4-1/FL/Enumerations.H ****   Please use FL_ABI_VERSION when FLTK 1.4.0 has been released.
 192:fltk-1.3.4-1/FL/Enumerations.H **** */
 193:fltk-1.3.4-1/FL/Enumerations.H **** 
 194:fltk-1.3.4-1/FL/Enumerations.H **** #ifdef FLTK_ABI_VERSION
 195:fltk-1.3.4-1/FL/Enumerations.H **** #undef FLTK_ABI_VERSION
 196:fltk-1.3.4-1/FL/Enumerations.H **** #endif
 197:fltk-1.3.4-1/FL/Enumerations.H **** 
 198:fltk-1.3.4-1/FL/Enumerations.H **** #define FLTK_ABI_VERSION FL_ABI_VERSION
 199:fltk-1.3.4-1/FL/Enumerations.H **** 
 200:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/	// group: Version Numbers
 201:fltk-1.3.4-1/FL/Enumerations.H **** 
 202:fltk-1.3.4-1/FL/Enumerations.H **** /**
 203:fltk-1.3.4-1/FL/Enumerations.H ****     Every time a user moves the mouse pointer, clicks a button,
 204:fltk-1.3.4-1/FL/Enumerations.H ****     or presses a key, an event is generated and sent to your
 205:fltk-1.3.4-1/FL/Enumerations.H ****     application. Events can also come from other programs like the
 206:fltk-1.3.4-1/FL/Enumerations.H ****     window manager.
 207:fltk-1.3.4-1/FL/Enumerations.H ****    
 208:fltk-1.3.4-1/FL/Enumerations.H ****     Events are identified by the integer argument passed to the 
 209:fltk-1.3.4-1/FL/Enumerations.H ****     Fl_Widget::handle() virtual method. Other information about the 
 210:fltk-1.3.4-1/FL/Enumerations.H ****     most recent event is stored in static locations and acquired  by 
 211:fltk-1.3.4-1/FL/Enumerations.H ****     calling the Fl::event_*() methods. This static information remains 
 212:fltk-1.3.4-1/FL/Enumerations.H ****     valid until the next event is read from the window system, so it 
 213:fltk-1.3.4-1/FL/Enumerations.H ****     is ok to look at it outside of the handle() method.
 214:fltk-1.3.4-1/FL/Enumerations.H **** 
 215:fltk-1.3.4-1/FL/Enumerations.H ****     Event numbers can be converted to their actual names using the
 216:fltk-1.3.4-1/FL/Enumerations.H ****     \ref fl_eventnames[] array defined in \#include &lt;FL/names.h&gt;
 217:fltk-1.3.4-1/FL/Enumerations.H **** 
 218:fltk-1.3.4-1/FL/Enumerations.H ****     \sa Fl::event_text(), Fl::event_key(), class Fl::
 219:fltk-1.3.4-1/FL/Enumerations.H ****  */
 220:fltk-1.3.4-1/FL/Enumerations.H **** // DEV NOTE: Keep this list in sync with FL/names.H
 221:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_Event {	// events
 222:fltk-1.3.4-1/FL/Enumerations.H ****   /** No event. */
 223:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NO_EVENT		= 0,
 224:fltk-1.3.4-1/FL/Enumerations.H **** 
 225:fltk-1.3.4-1/FL/Enumerations.H ****   /** A mouse button has gone down with the mouse pointing at this
 226:fltk-1.3.4-1/FL/Enumerations.H ****       widget. You can find out what button by calling Fl::event_button(). 
 227:fltk-1.3.4-1/FL/Enumerations.H ****       You find out the mouse position by calling Fl::event_x() and
 228:fltk-1.3.4-1/FL/Enumerations.H ****       Fl::event_y().
 229:fltk-1.3.4-1/FL/Enumerations.H **** 
 230:fltk-1.3.4-1/FL/Enumerations.H ****       A widget indicates that it "wants" the mouse click by returning non-zero 
 231:fltk-1.3.4-1/FL/Enumerations.H ****       from its Fl_Widget::handle() method. It will then become the 
 232:fltk-1.3.4-1/FL/Enumerations.H ****       Fl::pushed() widget and will get FL_DRAG and the matching FL_RELEASE events.  
 233:fltk-1.3.4-1/FL/Enumerations.H ****       If Fl_Widget::handle() returns zero then FLTK will try sending the FL_PUSH 
 234:fltk-1.3.4-1/FL/Enumerations.H ****       to another widget. 
 235:fltk-1.3.4-1/FL/Enumerations.H ****    */
 236:fltk-1.3.4-1/FL/Enumerations.H ****   FL_PUSH		= 1,
 237:fltk-1.3.4-1/FL/Enumerations.H **** 
 238:fltk-1.3.4-1/FL/Enumerations.H ****   /** A mouse button has been released. You can find out what button by 
 239:fltk-1.3.4-1/FL/Enumerations.H ****       calling Fl::event_button().
 240:fltk-1.3.4-1/FL/Enumerations.H **** 
 241:fltk-1.3.4-1/FL/Enumerations.H ****       In order to receive the FL_RELEASE event, the widget must return 
 242:fltk-1.3.4-1/FL/Enumerations.H ****       non-zero when handling FL_PUSH.
 243:fltk-1.3.4-1/FL/Enumerations.H ****    */
 244:fltk-1.3.4-1/FL/Enumerations.H ****   FL_RELEASE		= 2,
 245:fltk-1.3.4-1/FL/Enumerations.H **** 
 246:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has been moved to point at this widget.  This can
 247:fltk-1.3.4-1/FL/Enumerations.H ****       be used for highlighting feedback.  If a widget wants to
 248:fltk-1.3.4-1/FL/Enumerations.H ****       highlight or otherwise track the mouse, it indicates this by
 249:fltk-1.3.4-1/FL/Enumerations.H ****       returning non-zero from its handle() method. It then
 250:fltk-1.3.4-1/FL/Enumerations.H ****       becomes the Fl::belowmouse() widget and will receive 
 251:fltk-1.3.4-1/FL/Enumerations.H ****       FL_MOVE and FL_LEAVE events.
 252:fltk-1.3.4-1/FL/Enumerations.H ****    */
 253:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ENTER		= 3,
 254:fltk-1.3.4-1/FL/Enumerations.H **** 
 255:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has moved out of the widget.
 256:fltk-1.3.4-1/FL/Enumerations.H ****       In order to receive the FL_LEAVE event, the widget must 
 257:fltk-1.3.4-1/FL/Enumerations.H ****       return non-zero when handling FL_ENTER.
 258:fltk-1.3.4-1/FL/Enumerations.H ****    */
 259:fltk-1.3.4-1/FL/Enumerations.H ****   FL_LEAVE		= 4,
 260:fltk-1.3.4-1/FL/Enumerations.H **** 
 261:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has moved with a button held down. The current button state 
 262:fltk-1.3.4-1/FL/Enumerations.H ****       is in Fl::event_state(). The mouse position is in Fl::event_x() and 
 263:fltk-1.3.4-1/FL/Enumerations.H ****       Fl::event_y().
 264:fltk-1.3.4-1/FL/Enumerations.H **** 
 265:fltk-1.3.4-1/FL/Enumerations.H ****       In order to receive FL_DRAG events, the widget must return non-zero 
 266:fltk-1.3.4-1/FL/Enumerations.H ****       when handling FL_PUSH.
 267:fltk-1.3.4-1/FL/Enumerations.H ****    */
 268:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DRAG		= 5,
 269:fltk-1.3.4-1/FL/Enumerations.H **** 
 270:fltk-1.3.4-1/FL/Enumerations.H ****   /** This indicates an <I>attempt</I> to give a widget the keyboard focus.
 271:fltk-1.3.4-1/FL/Enumerations.H **** 
 272:fltk-1.3.4-1/FL/Enumerations.H ****       If a widget wants the focus, it should change itself to display the 
 273:fltk-1.3.4-1/FL/Enumerations.H ****       fact that it has the focus, and return non-zero from its handle() method.
 274:fltk-1.3.4-1/FL/Enumerations.H ****       It then becomes the Fl::focus() widget and gets FL_KEYDOWN, FL_KEYUP, 
 275:fltk-1.3.4-1/FL/Enumerations.H ****       and FL_UNFOCUS events.
 276:fltk-1.3.4-1/FL/Enumerations.H **** 
 277:fltk-1.3.4-1/FL/Enumerations.H ****       The focus will change either because the window manager changed which 
 278:fltk-1.3.4-1/FL/Enumerations.H ****       window gets the focus, or because the user tried to navigate using tab, 
 279:fltk-1.3.4-1/FL/Enumerations.H ****       arrows, or other keys. You can check Fl::event_key() to figure out why 
 280:fltk-1.3.4-1/FL/Enumerations.H ****       it moved. For navigation it will be the key pressed and for interaction 
 281:fltk-1.3.4-1/FL/Enumerations.H ****       with the window manager it will be zero.
 282:fltk-1.3.4-1/FL/Enumerations.H ****    */
 283:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FOCUS		= 6,
 284:fltk-1.3.4-1/FL/Enumerations.H ****   
 285:fltk-1.3.4-1/FL/Enumerations.H ****   /** This event is sent to the previous Fl::focus() widget when another 
 286:fltk-1.3.4-1/FL/Enumerations.H ****       widget gets the focus or the window loses focus.
 287:fltk-1.3.4-1/FL/Enumerations.H ****    */
 288:fltk-1.3.4-1/FL/Enumerations.H ****   FL_UNFOCUS		= 7,
 289:fltk-1.3.4-1/FL/Enumerations.H **** 
 290:fltk-1.3.4-1/FL/Enumerations.H ****   /** A key was pressed (FL_KEYDOWN) or released (FL_KEYUP). 
 291:fltk-1.3.4-1/FL/Enumerations.H ****       Fl_KEYBOARD is a synonym for FL_KEYDOWN.
 292:fltk-1.3.4-1/FL/Enumerations.H ****       The key can be found in Fl::event_key().
 293:fltk-1.3.4-1/FL/Enumerations.H ****       The text that the key should insert can be found with Fl::event_text() 
 294:fltk-1.3.4-1/FL/Enumerations.H ****       and its length is in Fl::event_length(). If you use the key handle()
 295:fltk-1.3.4-1/FL/Enumerations.H ****       should return 1. If you return zero then FLTK assumes you ignored the 
 296:fltk-1.3.4-1/FL/Enumerations.H ****       key and will then attempt to send it to a parent widget. If none of 
 297:fltk-1.3.4-1/FL/Enumerations.H ****       them want it, it will change the event into a FL_SHORTCUT event.
 298:fltk-1.3.4-1/FL/Enumerations.H **** 
 299:fltk-1.3.4-1/FL/Enumerations.H ****       To receive FL_KEYBOARD events you must also respond to the FL_FOCUS
 300:fltk-1.3.4-1/FL/Enumerations.H ****       and FL_UNFOCUS events.
 301:fltk-1.3.4-1/FL/Enumerations.H **** 
 302:fltk-1.3.4-1/FL/Enumerations.H ****       If you are writing a text-editing widget you may also want to call 
 303:fltk-1.3.4-1/FL/Enumerations.H ****       the Fl::compose() function to translate individual keystrokes into 
 304:fltk-1.3.4-1/FL/Enumerations.H ****       non-ASCII characters.
 305:fltk-1.3.4-1/FL/Enumerations.H **** 
 306:fltk-1.3.4-1/FL/Enumerations.H ****       FL_KEYUP events are sent to the widget that currently has focus. This 
 307:fltk-1.3.4-1/FL/Enumerations.H ****       is not necessarily the same widget that received the corresponding 
 308:fltk-1.3.4-1/FL/Enumerations.H ****       FL_KEYDOWN event because focus may have changed between events.
 309:fltk-1.3.4-1/FL/Enumerations.H ****    */
 310:fltk-1.3.4-1/FL/Enumerations.H ****   FL_KEYDOWN		= 8,
 311:fltk-1.3.4-1/FL/Enumerations.H **** 
 312:fltk-1.3.4-1/FL/Enumerations.H ****   /** Equivalent to FL_KEYDOWN.
 313:fltk-1.3.4-1/FL/Enumerations.H ****       \see FL_KEYDOWN
 314:fltk-1.3.4-1/FL/Enumerations.H ****    */
 315:fltk-1.3.4-1/FL/Enumerations.H ****   FL_KEYBOARD		= 8,
 316:fltk-1.3.4-1/FL/Enumerations.H ****  
 317:fltk-1.3.4-1/FL/Enumerations.H ****   /** Key release event.
 318:fltk-1.3.4-1/FL/Enumerations.H ****       \see FL_KEYDOWN
 319:fltk-1.3.4-1/FL/Enumerations.H ****    */
 320:fltk-1.3.4-1/FL/Enumerations.H ****   FL_KEYUP		= 9,
 321:fltk-1.3.4-1/FL/Enumerations.H **** 
 322:fltk-1.3.4-1/FL/Enumerations.H ****   /** The user clicked the close button of a window.
 323:fltk-1.3.4-1/FL/Enumerations.H ****       This event is used internally only to trigger the callback of
 324:fltk-1.3.4-1/FL/Enumerations.H ****       Fl_Window derived classed. The default callback closes the 
 325:fltk-1.3.4-1/FL/Enumerations.H ****       window calling Fl_Window::hide().
 326:fltk-1.3.4-1/FL/Enumerations.H ****    */
 327:fltk-1.3.4-1/FL/Enumerations.H ****   FL_CLOSE		= 10,
 328:fltk-1.3.4-1/FL/Enumerations.H **** 
 329:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has moved without any mouse buttons held down. 
 330:fltk-1.3.4-1/FL/Enumerations.H ****       This event is sent to the Fl::belowmouse() widget.
 331:fltk-1.3.4-1/FL/Enumerations.H **** 
 332:fltk-1.3.4-1/FL/Enumerations.H ****       In order to receive FL_MOVE events, the widget must return 
 333:fltk-1.3.4-1/FL/Enumerations.H ****       non-zero when handling FL_ENTER.
 334:fltk-1.3.4-1/FL/Enumerations.H ****    */
 335:fltk-1.3.4-1/FL/Enumerations.H ****   FL_MOVE		= 11,
 336:fltk-1.3.4-1/FL/Enumerations.H **** 
 337:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the Fl::focus() widget is zero or ignores an FL_KEYBOARD
 338:fltk-1.3.4-1/FL/Enumerations.H ****       event then FLTK tries sending this event to every widget it 
 339:fltk-1.3.4-1/FL/Enumerations.H ****       can, until one of them returns non-zero. FL_SHORTCUT is first 
 340:fltk-1.3.4-1/FL/Enumerations.H ****       sent to the Fl::belowmouse() widget, then its parents and siblings, 
 341:fltk-1.3.4-1/FL/Enumerations.H ****       and eventually to every widget in the window, trying to find an 
 342:fltk-1.3.4-1/FL/Enumerations.H ****       object that returns non-zero. FLTK tries really hard to not to ignore 
 343:fltk-1.3.4-1/FL/Enumerations.H ****       any keystrokes!
 344:fltk-1.3.4-1/FL/Enumerations.H **** 
 345:fltk-1.3.4-1/FL/Enumerations.H ****       You can also make "global" shortcuts by using Fl::add_handler(). A 
 346:fltk-1.3.4-1/FL/Enumerations.H ****       global shortcut will work no matter what windows are displayed or 
 347:fltk-1.3.4-1/FL/Enumerations.H ****       which one has the focus.
 348:fltk-1.3.4-1/FL/Enumerations.H ****    */
 349:fltk-1.3.4-1/FL/Enumerations.H ****   FL_SHORTCUT		= 12,
 350:fltk-1.3.4-1/FL/Enumerations.H **** 
 351:fltk-1.3.4-1/FL/Enumerations.H ****   /** This widget is no longer active, due to Fl_Widget::deactivate() 
 352:fltk-1.3.4-1/FL/Enumerations.H ****       being called on it or one of its parents. Fl_Widget::active() may 
 353:fltk-1.3.4-1/FL/Enumerations.H ****       still be true after this, the widget is only active if Fl_Widget::active()
 354:fltk-1.3.4-1/FL/Enumerations.H ****       is true on it and all its parents (use Fl_Widget::active_r() to check this).
 355:fltk-1.3.4-1/FL/Enumerations.H ****    */
 356:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DEACTIVATE		= 13,
 357:fltk-1.3.4-1/FL/Enumerations.H **** 
 358:fltk-1.3.4-1/FL/Enumerations.H ****   /** This widget is now active, due to Fl_Widget::activate() being 
 359:fltk-1.3.4-1/FL/Enumerations.H ****       called on it or one of its parents.
 360:fltk-1.3.4-1/FL/Enumerations.H ****    */
 361:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ACTIVATE		= 14,
 362:fltk-1.3.4-1/FL/Enumerations.H **** 
 363:fltk-1.3.4-1/FL/Enumerations.H ****   /** This widget is no longer visible, due to Fl_Widget::hide() being 
 364:fltk-1.3.4-1/FL/Enumerations.H ****       called on it or one of its parents, or due to a parent window being 
 365:fltk-1.3.4-1/FL/Enumerations.H ****       minimized.  Fl_Widget::visible() may still be true after this, but the 
 366:fltk-1.3.4-1/FL/Enumerations.H ****       widget is visible only if visible() is true for it and all its 
 367:fltk-1.3.4-1/FL/Enumerations.H ****       parents (use Fl_Widget::visible_r() to check this).
 368:fltk-1.3.4-1/FL/Enumerations.H ****    */
 369:fltk-1.3.4-1/FL/Enumerations.H ****   FL_HIDE		= 15,
 370:fltk-1.3.4-1/FL/Enumerations.H **** 
 371:fltk-1.3.4-1/FL/Enumerations.H ****   /** This widget is visible again, due to Fl_Widget::show() being called on 
 372:fltk-1.3.4-1/FL/Enumerations.H ****       it or one of its parents, or due to a parent window being restored. 
 373:fltk-1.3.4-1/FL/Enumerations.H ****       Child Fl_Windows respond to this by actually creating the window if not 
 374:fltk-1.3.4-1/FL/Enumerations.H ****       done already, so if you subclass a window, be sure to pass FL_SHOW 
 375:fltk-1.3.4-1/FL/Enumerations.H ****       to the base class Fl_Widget::handle() method!
 376:fltk-1.3.4-1/FL/Enumerations.H ****    */
 377:fltk-1.3.4-1/FL/Enumerations.H ****   FL_SHOW		= 16,
 378:fltk-1.3.4-1/FL/Enumerations.H **** 
 379:fltk-1.3.4-1/FL/Enumerations.H ****   /** You should get this event some time after you call Fl::paste(). 
 380:fltk-1.3.4-1/FL/Enumerations.H ****       The contents of Fl::event_text() is the text to insert and the number 
 381:fltk-1.3.4-1/FL/Enumerations.H ****       of characters is in Fl::event_length().
 382:fltk-1.3.4-1/FL/Enumerations.H ****    */
 383:fltk-1.3.4-1/FL/Enumerations.H ****   FL_PASTE		= 17,
 384:fltk-1.3.4-1/FL/Enumerations.H **** 
 385:fltk-1.3.4-1/FL/Enumerations.H ****   /** The Fl::selection_owner() will get this event before the selection is 
 386:fltk-1.3.4-1/FL/Enumerations.H ****       moved to another widget. This indicates that some other widget or program 
 387:fltk-1.3.4-1/FL/Enumerations.H ****       has claimed the selection. Motif programs used this to clear the selection 
 388:fltk-1.3.4-1/FL/Enumerations.H ****       indication. Most modern programs ignore this.
 389:fltk-1.3.4-1/FL/Enumerations.H ****    */
 390:fltk-1.3.4-1/FL/Enumerations.H ****   FL_SELECTIONCLEAR	= 18,
 391:fltk-1.3.4-1/FL/Enumerations.H **** 
 392:fltk-1.3.4-1/FL/Enumerations.H ****   /** The user has moved the mouse wheel. The Fl::event_dx() and Fl::event_dy()
 393:fltk-1.3.4-1/FL/Enumerations.H ****       methods can be used to find the amount to scroll horizontally and vertically.
 394:fltk-1.3.4-1/FL/Enumerations.H ****    */
 395:fltk-1.3.4-1/FL/Enumerations.H ****   FL_MOUSEWHEEL		= 19,
 396:fltk-1.3.4-1/FL/Enumerations.H **** 
 397:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has been moved to point at this widget. A widget that is 
 398:fltk-1.3.4-1/FL/Enumerations.H ****       interested in receiving drag'n'drop data must return 1 to receive 
 399:fltk-1.3.4-1/FL/Enumerations.H ****       FL_DND_DRAG, FL_DND_LEAVE and FL_DND_RELEASE events.
 400:fltk-1.3.4-1/FL/Enumerations.H ****    */
 401:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DND_ENTER		= 20,
 402:fltk-1.3.4-1/FL/Enumerations.H **** 
 403:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has been moved inside a widget while dragging data.  A 
 404:fltk-1.3.4-1/FL/Enumerations.H ****       widget that is interested in receiving drag'n'drop data should 
 405:fltk-1.3.4-1/FL/Enumerations.H ****       indicate the possible drop position.
 406:fltk-1.3.4-1/FL/Enumerations.H ****    */
 407:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DND_DRAG		= 21,
 408:fltk-1.3.4-1/FL/Enumerations.H **** 
 409:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has moved out of the widget.
 410:fltk-1.3.4-1/FL/Enumerations.H ****    */
 411:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DND_LEAVE		= 22,
 412:fltk-1.3.4-1/FL/Enumerations.H **** 
 413:fltk-1.3.4-1/FL/Enumerations.H ****   /** The user has released the mouse button dropping data into the widget. 
 414:fltk-1.3.4-1/FL/Enumerations.H ****       If the widget returns 1, it will receive the data in the immediately 
 415:fltk-1.3.4-1/FL/Enumerations.H ****       following FL_PASTE event.
 416:fltk-1.3.4-1/FL/Enumerations.H ****    */
 417:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DND_RELEASE	= 23,
 418:fltk-1.3.4-1/FL/Enumerations.H ****   /** The screen configuration (number, positions) was changed.
 419:fltk-1.3.4-1/FL/Enumerations.H ****    Use Fl::add_handler() to be notified of this event.
 420:fltk-1.3.4-1/FL/Enumerations.H ****    */
 421:fltk-1.3.4-1/FL/Enumerations.H ****   FL_SCREEN_CONFIGURATION_CHANGED = 24,
 422:fltk-1.3.4-1/FL/Enumerations.H ****   /** The fullscreen state of the window has changed
 423:fltk-1.3.4-1/FL/Enumerations.H ****    */
 424:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FULLSCREEN         = 25,
 425:fltk-1.3.4-1/FL/Enumerations.H ****   /** The user has made a zoom/pinch/magnification gesture. 
 426:fltk-1.3.4-1/FL/Enumerations.H ****       The Fl::event_dy() method can be used to find magnification amount,
 427:fltk-1.3.4-1/FL/Enumerations.H ****       Fl::event_x() and Fl::event_y() are set as well.
 428:fltk-1.3.4-1/FL/Enumerations.H ****      */
 429:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ZOOM_GESTURE	= 26
 430:fltk-1.3.4-1/FL/Enumerations.H **** };
 431:fltk-1.3.4-1/FL/Enumerations.H **** 
 432:fltk-1.3.4-1/FL/Enumerations.H **** /** \name When Conditions */
 433:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 434:fltk-1.3.4-1/FL/Enumerations.H **** /** These constants determine when a callback is performed.
 435:fltk-1.3.4-1/FL/Enumerations.H **** 
 436:fltk-1.3.4-1/FL/Enumerations.H ****     \sa Fl_Widget::when();
 437:fltk-1.3.4-1/FL/Enumerations.H ****     \todo doxygen comments for values are incomplete and maybe wrong or unclear
 438:fltk-1.3.4-1/FL/Enumerations.H ****  */
 439:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_When { // Fl_Widget::when():
 440:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_NEVER		= 0,	///< Never call the callback
 441:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_CHANGED	= 1,	///< Do the callback only when the widget value changes
 442:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_NOT_CHANGED	= 2,	///< Do the callback whenever the user interacts with the widget
 443:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_RELEASE	= 4,	///< Do the callback when the button or key is released and the value change
 444:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_RELEASE_ALWAYS= 6,	///< Do the callback when the button or key is released, even if the v
 445:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_ENTER_KEY	= 8,	///< Do the callback when the user presses the ENTER key and the value cha
 446:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_ENTER_KEY_ALWAYS=10,	///< Do the callback when the user presses the ENTER key, even if th
 447:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_ENTER_KEY_CHANGED=11	///< ?
 448:fltk-1.3.4-1/FL/Enumerations.H **** };
 449:fltk-1.3.4-1/FL/Enumerations.H **** 
 450:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/		// group: When Conditions
 451:fltk-1.3.4-1/FL/Enumerations.H **** 
 452:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Mouse and Keyboard Events
 453:fltk-1.3.4-1/FL/Enumerations.H **** 
 454:fltk-1.3.4-1/FL/Enumerations.H **** 	This and the following constants define the non-ASCII keys on the
 455:fltk-1.3.4-1/FL/Enumerations.H **** 	keyboard for FL_KEYBOARD and FL_SHORTCUT events.
 456:fltk-1.3.4-1/FL/Enumerations.H **** 
 457:fltk-1.3.4-1/FL/Enumerations.H **** 	\todo	FL_Button and FL_key... constants could be structured better
 458:fltk-1.3.4-1/FL/Enumerations.H **** 		(use an enum or some doxygen grouping ?)
 459:fltk-1.3.4-1/FL/Enumerations.H ****   
 460:fltk-1.3.4-1/FL/Enumerations.H **** 	\sa	Fl::event_key() and Fl::get_key(int) (use ascii letters for all other keys):
 461:fltk-1.3.4-1/FL/Enumerations.H ****  */
 462:fltk-1.3.4-1/FL/Enumerations.H **** 
 463:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 464:fltk-1.3.4-1/FL/Enumerations.H **** 
 465:fltk-1.3.4-1/FL/Enumerations.H **** // FIXME: These codes collide with valid Unicode keys
 466:fltk-1.3.4-1/FL/Enumerations.H **** 
 467:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Button	0xfee8	///< A mouse button; use Fl_Button + n for mouse button n.
 468:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BackSpace	0xff08	///< The backspace key.
 469:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Tab		0xff09	///< The tab key.
 470:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Iso_Key	0xff0c  ///< The additional key of ISO keyboards.
 471:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Enter	0xff0d	///< The enter key. 
 472:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Pause	0xff13	///< The pause key.
 473:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Scroll_Lock	0xff14	///< The scroll lock key.
 474:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Escape	0xff1b	///< The escape key.
 475:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Kana         0xff2e  ///< The Kana key of JIS keyboards.
 476:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Eisu         0xff2f  ///< The Eisu key of JIS keyboards.
 477:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Yen          0xff30  ///< The Yen key of JIS keyboards.
 478:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_JIS_Underscore 0xff31 ///< The underscore key of JIS keyboards.
 479:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Home		0xff50	///< The home key.
 480:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Left		0xff51	///< The left arrow key.
 481:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Up		0xff52	///< The up arrow key.
 482:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Right	0xff53	///< The right arrow key.
 483:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Down		0xff54	///< The down arrow key.
 484:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Page_Up	0xff55	///< The page-up key.
 485:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Page_Down	0xff56	///< The page-down key.
 486:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_End		0xff57	///< The end key.
 487:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Print	0xff61	///< The print (or print-screen) key.
 488:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Insert	0xff63	///< The insert key. 
 489:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Menu		0xff67	///< The menu key.
 490:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Help		0xff68	///< The 'help' key on Mac keyboards
 491:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Num_Lock	0xff7f	///< The num lock key.
 492:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_KP		0xff80	///< One of the keypad numbers; use FL_KP + 'n' for digit n.
 493:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_KP_Enter	0xff8d	///< The enter key on the keypad, same as Fl_KP+'\\r'.
 494:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_KP_Last	0xffbd	///< The last keypad key; use to range-check keypad.
 495:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_F		0xffbd	///< One of the function keys; use FL_F + n for function key n.
 496:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_F_Last	0xffe0	///< The last function key; use to range-check function keys.
 497:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Shift_L	0xffe1	///< The lefthand shift key.
 498:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Shift_R	0xffe2	///< The righthand shift key.
 499:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Control_L	0xffe3	///< The lefthand control key.
 500:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Control_R	0xffe4	///< The righthand control key.
 501:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Caps_Lock	0xffe5	///< The caps lock key.
 502:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Meta_L	0xffe7	///< The left meta/Windows key.
 503:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Meta_R	0xffe8	///< The right meta/Windows key.
 504:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Alt_L	0xffe9	///< The left alt key.
 505:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Alt_R	0xffea	///< The right alt key. 
 506:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Delete	0xffff	///< The delete key.
 507:fltk-1.3.4-1/FL/Enumerations.H **** 
 508:fltk-1.3.4-1/FL/Enumerations.H **** // These use the Private Use Area (PUA) of the Basic Multilingual Plane
 509:fltk-1.3.4-1/FL/Enumerations.H **** // of Unicode. Guaranteed not to conflict with a proper Unicode character.
 510:fltk-1.3.4-1/FL/Enumerations.H **** 
 511:fltk-1.3.4-1/FL/Enumerations.H **** // These primarily map to the XFree86 keysym range
 512:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Volume_Down  0xEF11   /* Volume control down        */
 513:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Volume_Mute  0xEF12   /* Mute sound from the system */
 514:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Volume_Up    0xEF13   /* Volume control up          */
 515:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Media_Play   0xEF14   /* Start playing of audio     */
 516:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Media_Stop   0xEF15   /* Stop playing audio         */
 517:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Media_Prev   0xEF16   /* Previous track             */
 518:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Media_Next   0xEF17   /* Next track                 */
 519:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Home_Page    0xEF18   /* Display user's home page   */
 520:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Mail         0xEF19   /* Invoke user's mail program */
 521:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Search       0xEF1B   /* Search                     */
 522:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Back         0xEF26   /* Like back on a browser     */
 523:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Forward      0xEF27   /* Like forward on a browser  */
 524:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Stop         0xEF28   /* Stop current operation     */
 525:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Refresh      0xEF29   /* Refresh the page           */
 526:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Sleep        0xEF2F   /* Put system to sleep        */
 527:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Favorites    0xEF30   /* Show favorite locations    */
 528:fltk-1.3.4-1/FL/Enumerations.H **** 
 529:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/	// group: Mouse and Keyboard Events
 530:fltk-1.3.4-1/FL/Enumerations.H **** 
 531:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Mouse Buttons
 532:fltk-1.3.4-1/FL/Enumerations.H **** 
 533:fltk-1.3.4-1/FL/Enumerations.H **** 	These constants define the button numbers for FL_PUSH and FL_RELEASE events.
 534:fltk-1.3.4-1/FL/Enumerations.H **** 	
 535:fltk-1.3.4-1/FL/Enumerations.H **** 	\sa Fl::event_button()
 536:fltk-1.3.4-1/FL/Enumerations.H **** */
 537:fltk-1.3.4-1/FL/Enumerations.H **** 
 538:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 539:fltk-1.3.4-1/FL/Enumerations.H **** 
 540:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_LEFT_MOUSE	1	///< The left mouse button
 541:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_MIDDLE_MOUSE	2	///< The middle mouse button
 542:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_RIGHT_MOUSE	3	///< The right mouse button
 543:fltk-1.3.4-1/FL/Enumerations.H **** 
 544:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/		// group: Mouse Buttons
 545:fltk-1.3.4-1/FL/Enumerations.H **** 
 546:fltk-1.3.4-1/FL/Enumerations.H **** 
 547:fltk-1.3.4-1/FL/Enumerations.H **** /** \name	Event States
 548:fltk-1.3.4-1/FL/Enumerations.H **** 
 549:fltk-1.3.4-1/FL/Enumerations.H **** 	The following constants define bits in the Fl::event_state() value.
 550:fltk-1.3.4-1/FL/Enumerations.H **** */
 551:fltk-1.3.4-1/FL/Enumerations.H **** 
 552:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/		// group: Event States
 553:fltk-1.3.4-1/FL/Enumerations.H **** 
 554:fltk-1.3.4-1/FL/Enumerations.H **** // FIXME: it would be nice to have the modifiers in the upper 8 bit so that
 555:fltk-1.3.4-1/FL/Enumerations.H **** //        a unicode ke (24bit) can be sent as an unsigned with the modifiers.
 556:fltk-1.3.4-1/FL/Enumerations.H **** 
 557:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHIFT	0x00010000	///< One of the shift keys is down
 558:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_CAPS_LOCK	0x00020000	///< The caps lock is on
 559:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_CTRL		0x00040000	///< One of the ctrl keys is down
 560:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ALT		0x00080000	///< One of the alt keys is down
 561:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_LOCK	0x00100000	///< The num lock is on
 562:fltk-1.3.4-1/FL/Enumerations.H **** 					// most X servers do this?
 563:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_META		0x00400000	///< One of the meta/Windows keys is down
 564:fltk-1.3.4-1/FL/Enumerations.H **** 					// correct for XFree86
 565:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SCROLL_LOCK	0x00800000	///< The scroll lock is on
 566:fltk-1.3.4-1/FL/Enumerations.H **** 					// correct for XFree86
 567:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTON1	0x01000000	///< Mouse button 1 is pushed
 568:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTON2	0x02000000	///< Mouse button 2 is pushed
 569:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTON3	0x04000000	///< Mouse button 3 is pushed
 570:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTONS	0x7f000000	///< Any mouse button is pushed
 571:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTON(n)	(0x00800000<<(n)) ///< Mouse button n (n > 0) is pushed
 572:fltk-1.3.4-1/FL/Enumerations.H **** 
 573:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_KEY_MASK 0x0000ffff		///< All keys are 16 bit for now 
 574:fltk-1.3.4-1/FL/Enumerations.H **** 					//   FIXME: Unicode needs 24 bits!
 575:fltk-1.3.4-1/FL/Enumerations.H **** 
 576:fltk-1.3.4-1/FL/Enumerations.H **** #ifdef __APPLE__
 577:fltk-1.3.4-1/FL/Enumerations.H **** #  define FL_COMMAND	FL_META		///< An alias for FL_CTRL on WIN32 and X11, or FL_META on MacOS X
 578:fltk-1.3.4-1/FL/Enumerations.H **** #  define FL_CONTROL 	FL_CTRL		///< An alias for FL_META on WIN32 and X11, or FL_CTRL on MacOS X
 579:fltk-1.3.4-1/FL/Enumerations.H **** #else
 580:fltk-1.3.4-1/FL/Enumerations.H **** #  define FL_COMMAND	FL_CTRL		///< An alias for FL_CTRL on WIN32 and X11, or FL_META on MacOS X
 581:fltk-1.3.4-1/FL/Enumerations.H **** #  define FL_CONTROL	FL_META		///< An alias for FL_META on WIN32 and X11, or FL_CTRL on MacOS X
 582:fltk-1.3.4-1/FL/Enumerations.H **** #endif // __APPLE__
 583:fltk-1.3.4-1/FL/Enumerations.H **** 
 584:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/		// group: Event States
 585:fltk-1.3.4-1/FL/Enumerations.H **** 
 586:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Box Types
 587:fltk-1.3.4-1/FL/Enumerations.H ****     \brief FLTK standard box types
 588:fltk-1.3.4-1/FL/Enumerations.H ****     
 589:fltk-1.3.4-1/FL/Enumerations.H ****     This enum defines the standard box types included with FLTK.
 590:fltk-1.3.4-1/FL/Enumerations.H ****     
 591:fltk-1.3.4-1/FL/Enumerations.H ****     FL_NO_BOX means nothing is drawn at all, so whatever is already 
 592:fltk-1.3.4-1/FL/Enumerations.H ****     on the screen remains. The FL_..._FRAME types only draw their edges, 
 593:fltk-1.3.4-1/FL/Enumerations.H ****     leaving the interior unchanged. The blue color in Figure 1 
 594:fltk-1.3.4-1/FL/Enumerations.H ****     is the area that is not drawn by the frame types.
 595:fltk-1.3.4-1/FL/Enumerations.H ****     
 596:fltk-1.3.4-1/FL/Enumerations.H ****     \image html boxtypes.png "Figure 1: FLTK standard box types"
 597:fltk-1.3.4-1/FL/Enumerations.H ****     \image latex boxtypes.png "FLTK standard box types" width=10cm
 598:fltk-1.3.4-1/FL/Enumerations.H ****     \todo	Description of boxtypes is incomplete.
 599:fltk-1.3.4-1/FL/Enumerations.H ****     		See below for the defined enum Fl_Boxtype.
 600:fltk-1.3.4-1/FL/Enumerations.H **** 		\see src/Fl_get_system_colors.cxx
 601:fltk-1.3.4-1/FL/Enumerations.H **** */
 602:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 603:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_Boxtype { // boxtypes (if you change these you must fix fl_boxtype.cxx):
 604:fltk-1.3.4-1/FL/Enumerations.H **** 
 605:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NO_BOX = 0,		///< nothing is drawn at all, this box is invisible
 606:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FLAT_BOX,			///< a flat box
 607:fltk-1.3.4-1/FL/Enumerations.H ****   FL_UP_BOX,			///< see figure 1
 608:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DOWN_BOX,			///< see figure 1
 609:fltk-1.3.4-1/FL/Enumerations.H ****   FL_UP_FRAME,			///< see figure 1
 610:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DOWN_FRAME,		///< see figure 1
 611:fltk-1.3.4-1/FL/Enumerations.H ****   FL_THIN_UP_BOX,		///< see figure 1
 612:fltk-1.3.4-1/FL/Enumerations.H ****   FL_THIN_DOWN_BOX,		///< see figure 1
 613:fltk-1.3.4-1/FL/Enumerations.H ****   FL_THIN_UP_FRAME,		///< see figure 1
 614:fltk-1.3.4-1/FL/Enumerations.H ****   FL_THIN_DOWN_FRAME,		///< see figure 1
 615:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ENGRAVED_BOX,		///< see figure 1
 616:fltk-1.3.4-1/FL/Enumerations.H ****   FL_EMBOSSED_BOX,		///< see figure 1
 617:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ENGRAVED_FRAME,		///< see figure 1
 618:fltk-1.3.4-1/FL/Enumerations.H ****   FL_EMBOSSED_FRAME,		///< see figure 1
 619:fltk-1.3.4-1/FL/Enumerations.H ****   FL_BORDER_BOX,		///< see figure 1
 620:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_SHADOW_BOX,		///< see figure 1
 621:fltk-1.3.4-1/FL/Enumerations.H ****   FL_BORDER_FRAME,		///< see figure 1
 622:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_SHADOW_FRAME,		///< see figure 1
 623:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ROUNDED_BOX,		///< see figure 1
 624:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_RSHADOW_BOX,		///< see figure 1
 625:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ROUNDED_FRAME,		///< see figure 1
 626:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_RFLAT_BOX,		///< see figure 1
 627:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ROUND_UP_BOX,		///< see figure 1
 628:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ROUND_DOWN_BOX,		///< see figure 1
 629:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_DIAMOND_UP_BOX,		///< see figure 1
 630:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_DIAMOND_DOWN_BOX,		///< see figure 1
 631:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_OVAL_BOX,			///< see figure 1
 632:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_OSHADOW_BOX,		///< see figure 1
 633:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_OVAL_FRAME,		///< see figure 1
 634:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_OFLAT_BOX,		///< see figure 1
 635:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_UP_BOX,		///< plastic version of FL_UP_BOX
 636:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_DOWN_BOX,		///< plastic version of FL_DOWN_BOX
 637:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_UP_FRAME,		///< plastic version of FL_UP_FRAME
 638:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_DOWN_FRAME,	///< plastic version of FL_DOWN_FRAME
 639:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_THIN_UP_BOX,	///< plastic version of FL_THIN_UP_BOX
 640:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_THIN_DOWN_BOX,	///< plastic version of FL_THIN_DOWN_BOX
 641:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_ROUND_UP_BOX,	///< plastic version of FL_ROUND_UP_BOX
 642:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_ROUND_DOWN_BOX,	///< plastic version of FL_ROUND_DOWN_BOX
 643:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_UP_BOX,		///< gtk+ version of FL_UP_BOX
 644:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_DOWN_BOX,		///< gtk+ version of FL_DOWN_BOX
 645:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_UP_FRAME,		///< gtk+ version of FL_UP_FRAME
 646:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_DOWN_FRAME,		///< gtk+ version of FL_DOWN_FRAME
 647:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_THIN_UP_BOX,		///< gtk+ version of FL_THIN_UP_BOX
 648:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_THIN_DOWN_BOX,	///< gtk+ version of FL_THIN_DOWN_BOX
 649:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_THIN_UP_FRAME,	///< gtk+ version of FL_THIN_UP_FRAME
 650:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_THIN_DOWN_FRAME,	///< gtk+ version of FL_THIN_DOWN_FRAME
 651:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_ROUND_UP_BOX,		///< gtk+ version of FL_ROUND_UP_BOX
 652:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_ROUND_DOWN_BOX,	///< gtk+ version of FL_ROUND_DOWN_BOX
 653:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_UP_BOX,		///< gleam version of FL_UP_BOX
 654:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_DOWN_BOX,		///< gleam version of FL_DOWN_BOX
 655:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_UP_FRAME,		///< gleam version of FL_UP_FRAME
 656:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_DOWN_FRAME,		///< gleam version of FL_DOWN_FRAME
 657:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_THIN_UP_BOX,	///< gleam version of FL_THIN_UP_BOX
 658:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_THIN_DOWN_BOX,	///< gleam version of FL_THIN_DOWN_BOX
 659:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_ROUND_UP_BOX,	///< gleam version of FL_ROUND_UP_BOX
 660:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_ROUND_DOWN_BOX,	///< gleam version of FL_ROUND_DOWN_BOX
 661:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FREE_BOXTYPE		///< the first free box type for creation of new box types
 662:fltk-1.3.4-1/FL/Enumerations.H **** };
 663:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_ROUND_UP_BOX();
 664:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ROUND_UP_BOX fl_define_FL_ROUND_UP_BOX()
 665:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ROUND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_ROUND_UP_BOX()+1)
 666:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_SHADOW_BOX();
 667:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHADOW_BOX fl_define_FL_SHADOW_BOX()
 668:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHADOW_FRAME (Fl_Boxtype)(fl_define_FL_SHADOW_BOX()+2)
 669:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_ROUNDED_BOX();
 670:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ROUNDED_BOX fl_define_FL_ROUNDED_BOX()
 671:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ROUNDED_FRAME (Fl_Boxtype)(fl_define_FL_ROUNDED_BOX()+2)
 672:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_RFLAT_BOX();
 673:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_RFLAT_BOX fl_define_FL_RFLAT_BOX()
 674:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_RSHADOW_BOX();
 675:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_RSHADOW_BOX fl_define_FL_RSHADOW_BOX()
 676:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_DIAMOND_BOX();
 677:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_DIAMOND_UP_BOX fl_define_FL_DIAMOND_BOX()
 678:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_DIAMOND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_DIAMOND_BOX()+1)
 679:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_OVAL_BOX();
 680:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_OVAL_BOX fl_define_FL_OVAL_BOX()
 681:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_OSHADOW_BOX (Fl_Boxtype)(fl_define_FL_OVAL_BOX()+1)
 682:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_OVAL_FRAME (Fl_Boxtype)(fl_define_FL_OVAL_BOX()+2)
 683:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_OFLAT_BOX (Fl_Boxtype)(fl_define_FL_OVAL_BOX()+3)
 684:fltk-1.3.4-1/FL/Enumerations.H **** 
 685:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_PLASTIC_UP_BOX();
 686:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_UP_BOX fl_define_FL_PLASTIC_UP_BOX()
 687:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_DOWN_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+1)
 688:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_UP_FRAME (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+2)
 689:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_DOWN_FRAME (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+3)
 690:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_THIN_UP_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+4)
 691:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_THIN_DOWN_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+5)
 692:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_ROUND_UP_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+6)
 693:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_ROUND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+7)
 694:fltk-1.3.4-1/FL/Enumerations.H **** 
 695:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_GTK_UP_BOX();
 696:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_UP_BOX fl_define_FL_GTK_UP_BOX()
 697:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+1)
 698:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_UP_FRAME (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+2)
 699:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_DOWN_FRAME (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+3)
 700:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_THIN_UP_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+4)
 701:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_THIN_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+5)
 702:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_THIN_UP_FRAME (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+6)
 703:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_THIN_DOWN_FRAME (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+7)
 704:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_ROUND_UP_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+8)
 705:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_ROUND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+9)
 706:fltk-1.3.4-1/FL/Enumerations.H **** 
 707:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_GLEAM_UP_BOX();
 708:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_UP_BOX fl_define_FL_GLEAM_UP_BOX()
 709:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+1)
 710:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_UP_FRAME (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+2)
 711:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_DOWN_FRAME (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+3)
 712:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_THIN_UP_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+4)
 713:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_THIN_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+5)
 714:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_ROUND_UP_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+6)
 715:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_ROUND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+7)
 716:fltk-1.3.4-1/FL/Enumerations.H **** 
 717:fltk-1.3.4-1/FL/Enumerations.H **** // conversions of box types to other boxtypes:
 718:fltk-1.3.4-1/FL/Enumerations.H **** /**
 719:fltk-1.3.4-1/FL/Enumerations.H ****   Get the filled version of a frame.
 720:fltk-1.3.4-1/FL/Enumerations.H ****   If no filled version of a given frame exists, the behavior of this function
 721:fltk-1.3.4-1/FL/Enumerations.H ****   is undefined and some random box or frame is returned.
 722:fltk-1.3.4-1/FL/Enumerations.H ****  */
 723:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Boxtype fl_box(Fl_Boxtype b) {
 724:fltk-1.3.4-1/FL/Enumerations.H ****   return (Fl_Boxtype)((b<FL_UP_BOX||b%4>1)?b:(b-2));
 725:fltk-1.3.4-1/FL/Enumerations.H **** }
 726:fltk-1.3.4-1/FL/Enumerations.H **** /**
 727:fltk-1.3.4-1/FL/Enumerations.H ****   Get the "pressed" or "down" version of a box.
 728:fltk-1.3.4-1/FL/Enumerations.H ****   If no "down" version of a given box exists, the behavior of this function
 729:fltk-1.3.4-1/FL/Enumerations.H ****   is undefined and some random box or frame is returned.
 730:fltk-1.3.4-1/FL/Enumerations.H ****  */
 731:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Boxtype fl_down(Fl_Boxtype b) {
 732:fltk-1.3.4-1/FL/Enumerations.H ****   return (Fl_Boxtype)((b<FL_UP_BOX)?b:(b|1));
 733:fltk-1.3.4-1/FL/Enumerations.H **** }
 734:fltk-1.3.4-1/FL/Enumerations.H **** /**
 735:fltk-1.3.4-1/FL/Enumerations.H ****   Get the unfilled, frame only version of a box.
 736:fltk-1.3.4-1/FL/Enumerations.H ****   If no frame version of a given box exists, the behavior of this function
 737:fltk-1.3.4-1/FL/Enumerations.H ****   is undefined and some random box or frame is returned.
 738:fltk-1.3.4-1/FL/Enumerations.H ****  */
 739:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Boxtype fl_frame(Fl_Boxtype b) {
 740:fltk-1.3.4-1/FL/Enumerations.H ****   return (Fl_Boxtype)((b%4<2)?b:(b+2));
 741:fltk-1.3.4-1/FL/Enumerations.H **** }
 742:fltk-1.3.4-1/FL/Enumerations.H **** 
 743:fltk-1.3.4-1/FL/Enumerations.H **** // back-compatibility box types:
 744:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FRAME FL_ENGRAVED_FRAME
 745:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FRAME_BOX FL_ENGRAVED_BOX
 746:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_CIRCLE_BOX FL_ROUND_DOWN_BOX
 747:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_DIAMOND_BOX FL_DIAMOND_DOWN_BOX
 748:fltk-1.3.4-1/FL/Enumerations.H **** 
 749:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/	// group: Box Types
 750:fltk-1.3.4-1/FL/Enumerations.H **** 
 751:fltk-1.3.4-1/FL/Enumerations.H **** /**
 752:fltk-1.3.4-1/FL/Enumerations.H ****    The labeltype() method sets the type of the label.
 753:fltk-1.3.4-1/FL/Enumerations.H **** 
 754:fltk-1.3.4-1/FL/Enumerations.H ****    The following standard label types are included:
 755:fltk-1.3.4-1/FL/Enumerations.H **** 
 756:fltk-1.3.4-1/FL/Enumerations.H ****    \todo	The doxygen comments are incomplete, and some labeltypes
 757:fltk-1.3.4-1/FL/Enumerations.H ****    	start with an underscore. Also, there are three
 758:fltk-1.3.4-1/FL/Enumerations.H **** 		external functions undocumented (yet):
 759:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_SHADOW_LABEL()
 760:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_ENGRAVED_LABEL()
 761:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_EMBOSSED_LABEL()
 762:fltk-1.3.4-1/FL/Enumerations.H **** */
 763:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_Labeltype {	// labeltypes:
 764:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NORMAL_LABEL	= 0, ///< draws the text (0)
 765:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NO_LABEL,         ///< does nothing
 766:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_SHADOW_LABEL,    ///< draws a drop shadow under the text
 767:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ENGRAVED_LABEL,	 ///< draws edges as though the text is engraved
 768:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_EMBOSSED_LABEL,  ///< draws edges as though the text is raised
 769:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_MULTI_LABEL,     ///< draws a composite label \see Fl_Multi_Label
 770:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ICON_LABEL,      ///< draws the icon associated with the text
 771:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_IMAGE_LABEL,     ///< the label displays an "icon" based on a Fl_Image
 772:fltk-1.3.4-1/FL/Enumerations.H **** 
 773:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FREE_LABELTYPE    ///< first free labeltype to use for creating own labeltypes
 774:fltk-1.3.4-1/FL/Enumerations.H **** };
 775:fltk-1.3.4-1/FL/Enumerations.H **** 
 776:fltk-1.3.4-1/FL/Enumerations.H **** /** 
 777:fltk-1.3.4-1/FL/Enumerations.H ****   Sets the current label type and return its corresponding Fl_Labeltype value. 
 778:fltk-1.3.4-1/FL/Enumerations.H ****   @{
 779:fltk-1.3.4-1/FL/Enumerations.H **** */
 780:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SYMBOL_LABEL FL_NORMAL_LABEL
 781:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_SHADOW_LABEL();
 782:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHADOW_LABEL fl_define_FL_SHADOW_LABEL()
 783:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_ENGRAVED_LABEL();
 784:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ENGRAVED_LABEL fl_define_FL_ENGRAVED_LABEL()
 785:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_EMBOSSED_LABEL();
 786:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_EMBOSSED_LABEL fl_define_FL_EMBOSSED_LABEL()
 787:fltk-1.3.4-1/FL/Enumerations.H **** /** @} */
 788:fltk-1.3.4-1/FL/Enumerations.H **** 
 789:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Alignment Flags 
 790:fltk-1.3.4-1/FL/Enumerations.H ****     Flags to control the label alignment. 
 791:fltk-1.3.4-1/FL/Enumerations.H **** 
 792:fltk-1.3.4-1/FL/Enumerations.H ****     This controls how the label is displayed next to or inside the widget. 
 793:fltk-1.3.4-1/FL/Enumerations.H ****     The default value is FL_ALIGN_CENTER (0) for most widgets, which centers
 794:fltk-1.3.4-1/FL/Enumerations.H ****     the label inside the widget.
 795:fltk-1.3.4-1/FL/Enumerations.H **** 
 796:fltk-1.3.4-1/FL/Enumerations.H ****     Flags can be or'd to achieve a combination of alignments, but there
 797:fltk-1.3.4-1/FL/Enumerations.H ****     are some "magic values" (e.g. combinations of TOP and BOTTOM and of
 798:fltk-1.3.4-1/FL/Enumerations.H ****     LEFT and RIGHT) that have special meanings (see below). For instance:<BR>
 799:fltk-1.3.4-1/FL/Enumerations.H ****     FL_ALIGN_TOP_LEFT == (FL_ALIGN_TOP|FL_ALIGN_LEFT) != FL_ALIGN_LEFT_TOP.
 800:fltk-1.3.4-1/FL/Enumerations.H **** 
 801:fltk-1.3.4-1/FL/Enumerations.H ****     \code
 802:fltk-1.3.4-1/FL/Enumerations.H ****     Outside alignments (FL_ALIGN_INSIDE is not set):
 803:fltk-1.3.4-1/FL/Enumerations.H **** 
 804:fltk-1.3.4-1/FL/Enumerations.H ****                TOP_LEFT        TOP       TOP_RIGHT
 805:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 806:fltk-1.3.4-1/FL/Enumerations.H ****        LEFT_TOP|                                 |RIGHT_TOP
 807:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 808:fltk-1.3.4-1/FL/Enumerations.H ****            LEFT|             CENTER              |RIGHT
 809:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 810:fltk-1.3.4-1/FL/Enumerations.H ****     LEFT_BOTTOM|                                 |RIGHT_BOTTOM
 811:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 812:fltk-1.3.4-1/FL/Enumerations.H ****                BOTTOM_LEFT   BOTTOM   BOTTOM_RIGHT
 813:fltk-1.3.4-1/FL/Enumerations.H **** 
 814:fltk-1.3.4-1/FL/Enumerations.H ****     Inside alignments (FL_ALIGN_INSIDE is set):
 815:fltk-1.3.4-1/FL/Enumerations.H **** 
 816:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 817:fltk-1.3.4-1/FL/Enumerations.H ****                |TOP_LEFT       TOP      TOP_RIGHT|
 818:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 819:fltk-1.3.4-1/FL/Enumerations.H ****                |LEFT         CENTER         RIGHT|
 820:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 821:fltk-1.3.4-1/FL/Enumerations.H ****                |BOTTOM_LEFT  BOTTOM  BOTTOM_RIGHT|
 822:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 823:fltk-1.3.4-1/FL/Enumerations.H ****     \endcode
 824:fltk-1.3.4-1/FL/Enumerations.H ****     \see #FL_ALIGN_CENTER, etc.
 825:fltk-1.3.4-1/FL/Enumerations.H ****  */
 826:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 827:fltk-1.3.4-1/FL/Enumerations.H **** /** FLTK type for alignment control */
 828:fltk-1.3.4-1/FL/Enumerations.H **** typedef unsigned Fl_Align;
 829:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label horizontally in the middle. */
 830:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_CENTER		= (Fl_Align)0;
 831:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the top of the widget. Inside labels appear below the top,
 832:fltk-1.3.4-1/FL/Enumerations.H ****       outside labels are drawn on top of the widget. */
 833:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP		= (Fl_Align)1;
 834:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the bottom of the widget. */
 835:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM		= (Fl_Align)2;
 836:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the left of the widget. Inside labels appear left-justified
 837:fltk-1.3.4-1/FL/Enumerations.H ****       starting at the left side of the widget, outside labels are right-justified and
 838:fltk-1.3.4-1/FL/Enumerations.H ****       drawn to the left of the widget. */
 839:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT		= (Fl_Align)4;
 840:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label to the right of the widget. */
 841:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT		= (Fl_Align)8;
 842:fltk-1.3.4-1/FL/Enumerations.H ****   /** Draw the label inside of the widget. */
 843:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_INSIDE		= (Fl_Align)16;
 844:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text on top of the image. */
 845:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TEXT_OVER_IMAGE	= (Fl_Align)0x0020;
 846:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text below the image. */
 847:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_OVER_TEXT	= (Fl_Align)0x0000;
 848:fltk-1.3.4-1/FL/Enumerations.H ****   /** All parts of the label that are lager than the widget will not be drawn . */
 849:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_CLIP		= (Fl_Align)64;
 850:fltk-1.3.4-1/FL/Enumerations.H ****   /** Wrap text that does not fit the width of the widget. */
 851:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_WRAP		= (Fl_Align)128;
 852:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text to the right of the image. */
 853:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_NEXT_TO_TEXT = (Fl_Align)0x0100;
 854:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text to the left of the image. */
 855:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TEXT_NEXT_TO_IMAGE = (Fl_Align)0x0120;
 856:fltk-1.3.4-1/FL/Enumerations.H **** /** If the label contains an image, draw the image or deimage in the background. */
 857:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_BACKDROP  = (Fl_Align)0x0200;
 858:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP_LEFT	= FL_ALIGN_TOP | FL_ALIGN_LEFT;
 859:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP_RIGHT	= FL_ALIGN_TOP | FL_ALIGN_RIGHT;
 860:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM_LEFT	= FL_ALIGN_BOTTOM | FL_ALIGN_LEFT;
 861:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM_RIGHT	= FL_ALIGN_BOTTOM | FL_ALIGN_RIGHT;
 862:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT_TOP	= 0x0007; // magic value
 863:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT_TOP	= 0x000b; // magic value
 864:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT_BOTTOM	= 0x000d; // magic value
 865:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT_BOTTOM	= 0x000e; // magic value
 866:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_NOWRAP		= (Fl_Align)0; // for back compatibility
 867:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_POSITION_MASK   = 0x000f; // left, right, top, bottom
 868:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_MASK      = 0x0320; // l/r, t/b, backdrop
 869:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/
 870:fltk-1.3.4-1/FL/Enumerations.H **** 
 871:fltk-1.3.4-1/FL/Enumerations.H **** 
 872:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Font Numbers
 873:fltk-1.3.4-1/FL/Enumerations.H ****     The following constants define the standard FLTK fonts:
 874:fltk-1.3.4-1/FL/Enumerations.H ****  */
 875:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 876:fltk-1.3.4-1/FL/Enumerations.H **** /** A font number is an index into the internal font table. */
 877:fltk-1.3.4-1/FL/Enumerations.H **** typedef int Fl_Font;
 878:fltk-1.3.4-1/FL/Enumerations.H **** 
 879:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA              = 0;	///< Helvetica (or Arial) normal (0)
 880:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_BOLD         = 1;	///< Helvetica (or Arial) bold
 881:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_ITALIC       = 2;	///< Helvetica (or Arial) oblique
 882:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_BOLD_ITALIC  = 3;	///< Helvetica (or Arial) bold-oblique
 883:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER                = 4;	///< Courier normal
 884:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_BOLD           = 5;	///< Courier bold 
 885:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_ITALIC         = 6;	///< Courier italic
 886:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_BOLD_ITALIC    = 7;	///< Courier bold-italic
 887:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES                  = 8;	///< Times roman
 888:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_BOLD             = 9;	///< Times roman bold
 889:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_ITALIC           = 10;	///< Times roman italic
 890:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_BOLD_ITALIC      = 11;	///< Times roman bold-italic
 891:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SYMBOL                 = 12;	///< Standard symbol font
 892:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SCREEN                 = 13;	///< Default monospaced screen font
 893:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SCREEN_BOLD            = 14;	///< Default monospaced bold screen font
 894:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_ZAPF_DINGBATS          = 15;	///< Zapf-dingbats font
 895:fltk-1.3.4-1/FL/Enumerations.H **** 
 896:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_FREE_FONT              = 16;	///< first one to allocate
 897:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_BOLD                   = 1;	///< add this to helvetica, courier, or times
 898:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_ITALIC                 = 2;	///< add this to helvetica, courier, or times
 899:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_BOLD_ITALIC            = 3;	///< add this to helvetica, courier, or times
 900:fltk-1.3.4-1/FL/Enumerations.H **** 
 901:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/
 902:fltk-1.3.4-1/FL/Enumerations.H **** 
 903:fltk-1.3.4-1/FL/Enumerations.H **** /** Size of a font in pixels.
 904:fltk-1.3.4-1/FL/Enumerations.H ****     This is the approximate height of a font in pixels.
 905:fltk-1.3.4-1/FL/Enumerations.H ****  */
 906:fltk-1.3.4-1/FL/Enumerations.H **** typedef int Fl_Fontsize;
 907:fltk-1.3.4-1/FL/Enumerations.H **** 
 908:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Fontsize FL_NORMAL_SIZE;	///< normal font size
 909:fltk-1.3.4-1/FL/Enumerations.H **** 
 910:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Colors 
 911:fltk-1.3.4-1/FL/Enumerations.H ****     The Fl_Color type holds an FLTK color value.
 912:fltk-1.3.4-1/FL/Enumerations.H **** 
 913:fltk-1.3.4-1/FL/Enumerations.H ****     Colors are either 8-bit indexes into a <a href="fltk-colormap.png">virtual colormap</a>
 914:fltk-1.3.4-1/FL/Enumerations.H ****     or 24-bit RGB color values. (See \ref drawing_colors for the default FLTK colormap)
 915:fltk-1.3.4-1/FL/Enumerations.H **** 
 916:fltk-1.3.4-1/FL/Enumerations.H ****     Color indices occupy the lower 8 bits of the value, while
 917:fltk-1.3.4-1/FL/Enumerations.H ****     RGB colors occupy the upper 24 bits, for a byte organization of RGBI.
 918:fltk-1.3.4-1/FL/Enumerations.H **** 
 919:fltk-1.3.4-1/FL/Enumerations.H **** <pre>
 920:fltk-1.3.4-1/FL/Enumerations.H ****  Fl_Color => 0xrrggbbii
 921:fltk-1.3.4-1/FL/Enumerations.H ****                 | | | |
 922:fltk-1.3.4-1/FL/Enumerations.H ****                 | | | +--- \ref drawing_colors "index" between 0 and 255
 923:fltk-1.3.4-1/FL/Enumerations.H ****                 | | +----- blue color component (8 bit)
 924:fltk-1.3.4-1/FL/Enumerations.H ****                 | +------- green component (8 bit)
 925:fltk-1.3.4-1/FL/Enumerations.H ****                 +--------- red component (8 bit)
 926:fltk-1.3.4-1/FL/Enumerations.H ****  </pre>
 927:fltk-1.3.4-1/FL/Enumerations.H **** 
 928:fltk-1.3.4-1/FL/Enumerations.H ****     A color can have either an index or an rgb value. Colors with rgb set 
 929:fltk-1.3.4-1/FL/Enumerations.H ****     and an index >0 are reserved for special use.
 930:fltk-1.3.4-1/FL/Enumerations.H **** 
 931:fltk-1.3.4-1/FL/Enumerations.H ****  */
 932:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 933:fltk-1.3.4-1/FL/Enumerations.H **** /** An FLTK color value; see also \ref drawing_colors  */
 934:fltk-1.3.4-1/FL/Enumerations.H **** typedef unsigned int Fl_Color;
 935:fltk-1.3.4-1/FL/Enumerations.H **** 
 936:fltk-1.3.4-1/FL/Enumerations.H **** // Standard colors. These are used as default colors in widgets and altered as necessary
 937:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_FOREGROUND_COLOR  = 0;	///< the default foreground color (0) used for labels and 
 938:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BACKGROUND2_COLOR = 7;	///< the default background color for text, list, and valu
 939:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_INACTIVE_COLOR    = 8;	///< the inactive foreground color
 940:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_SELECTION_COLOR   = 15;	///< the default selection/highlight color
 941:fltk-1.3.4-1/FL/Enumerations.H **** 
 942:fltk-1.3.4-1/FL/Enumerations.H ****   // boxtypes generally limit themselves to these colors so
 943:fltk-1.3.4-1/FL/Enumerations.H ****   // the whole ramp is not allocated:
 944:fltk-1.3.4-1/FL/Enumerations.H **** 
 945:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_GRAY0   = 32;			// 'A'
 946:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK3   = 39;			// 'H'
 947:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK2   = 45;			// 'N'
 948:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK1   = 47;			// 'P'
 949:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BACKGROUND_COLOR  = 49;	// 'R' default background color
 950:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT1  = 50;			// 'S'
 951:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT2  = 52;			// 'U'
 952:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT3  = 54;			// 'W'
 953:fltk-1.3.4-1/FL/Enumerations.H **** 
 954:fltk-1.3.4-1/FL/Enumerations.H ****   // FLTK provides a 5x8x5 color cube that is used with colormap visuals
 955:fltk-1.3.4-1/FL/Enumerations.H **** 
 956:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BLACK   = 56;
 957:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_RED     = 88;
 958:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_GREEN   = 63;
 959:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_YELLOW  = 95;
 960:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BLUE    = 216;
 961:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_MAGENTA = 248;
 962:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_CYAN    = 223;
 963:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_RED = 72;
 964:fltk-1.3.4-1/FL/Enumerations.H **** 
 965:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_GREEN    = 60;
 966:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_YELLOW   = 76;
 967:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_BLUE     = 136;
 968:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_MAGENTA  = 152;
 969:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_CYAN     = 140;
 970:fltk-1.3.4-1/FL/Enumerations.H **** 
 971:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_WHITE         = 255;
 972:fltk-1.3.4-1/FL/Enumerations.H **** 
 973:fltk-1.3.4-1/FL/Enumerations.H **** 
 974:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FREE_COLOR     (Fl_Color)16
 975:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_FREE_COLOR 16
 976:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GRAY_RAMP      (Fl_Color)32
 977:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_GRAY       24
 978:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GRAY           FL_BACKGROUND_COLOR
 979:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_COLOR_CUBE     (Fl_Color)56
 980:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_RED        5
 981:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_GREEN      8
 982:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_BLUE       5
 983:fltk-1.3.4-1/FL/Enumerations.H **** 
 984:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_inactive(Fl_Color c);
 985:fltk-1.3.4-1/FL/Enumerations.H **** 
 986:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_contrast(Fl_Color fg, Fl_Color bg);
 987:fltk-1.3.4-1/FL/Enumerations.H **** 
 988:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_color_average(Fl_Color c1, Fl_Color c2, float weight);
 989:fltk-1.3.4-1/FL/Enumerations.H **** 
 990:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a lighter version of the specified color. */
 991:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_lighter(Fl_Color c) { return fl_color_average(c, FL_WHITE, .67f); }
 992:fltk-1.3.4-1/FL/Enumerations.H **** 
 993:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a darker version of the specified color. */
 994:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_darker(Fl_Color c) { return fl_color_average(c, FL_BLACK, .67f); }
 995:fltk-1.3.4-1/FL/Enumerations.H **** 
 996:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns the 24-bit color value closest to \p r, \p g, \p b. */
 997:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_rgb_color(uchar r, uchar g, uchar b) {
 998:fltk-1.3.4-1/FL/Enumerations.H ****   if (!r && !g && !b) return FL_BLACK;
 1251              		.loc 5 998 0
 1252 0150 B9380000 		movl	$56, %ecx
 1252      00
 1253              	.LBE389:
 1254              	.LBE388:
 1255              	.LBB391:
 1256              	.LBB392:
 1257 0155 84D2     		testb	%dl, %dl
 1258 0157 74B7     		je	.L111
 999:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((r << 8) | g) << 8) | b) << 8);
 1259              		.loc 5 999 0
 1260 0159 89D1     		movl	%edx, %ecx
 1261 015b C1E108   		sall	$8, %ecx
 1262 015e 09D1     		orl	%edx, %ecx
 1263 0160 C1E108   		sall	$8, %ecx
 1264 0163 09CA     		orl	%ecx, %edx
 1265              	.LVL144:
 1266 0165 C1E208   		sall	$8, %edx
 1267 0168 89D1     		movl	%edx, %ecx
 1268 016a EBA4     		jmp	.L111
 1269              	.LVL145:
 1270 016c 0F1F4000 		.p2align 4,,10
 1271              		.p2align 3
 1272              	.L217:
 1273              	.LBE392:
 1274              	.LBE391:
 1275              		.loc 1 381 0
 1276 0170 410FB656 		movzbl	2(%r14), %edx
 1276      02
 1277 0175 410FB736 		movzwl	(%r14), %esi
 1278              	.LVL146:
 1279              	.LBB393:
 1280              	.LBB390:
 998:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((r << 8) | g) << 8) | b) << 8);
 1281              		.loc 5 998 0
 1282 0179 B9380000 		movl	$56, %ecx
 1282      00
 1283              	.LBE390:
 1284              	.LBE393:
 1285              	.LBB394:
 1286              	.LBB395:
 1287 017e 89D7     		movl	%edx, %edi
 1288 0180 410A7E01 		orb	1(%r14), %dil
 1289 0184 410A3E   		orb	(%r14), %dil
 1290 0187 7487     		je	.L111
 1291              		.loc 5 999 0
 1292 0189 66C1C608 		rolw	$8, %si
 1293 018d 0FB7CE   		movzwl	%si, %ecx
 1294 0190 C1E108   		sall	$8, %ecx
 1295 0193 09D1     		orl	%edx, %ecx
 1296 0195 C1E108   		sall	$8, %ecx
 1297 0198 E973FFFF 		jmp	.L111
 1297      FF
 1298              	.LVL147:
 1299 019d 0F1F00   		.p2align 4,,10
 1300              		.p2align 3
 1301              	.L227:
 1302              	.LBE395:
 1303              	.LBE394:
 1304              	.LBB396:
 1305              	.LBB397:
  90:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
 1306              		.loc 3 90 0
 1307 01a0 BE010000 		movl	$1, %esi
 1307      00
 1308 01a5 4889DF   		movq	%rbx, %rdi
 1309 01a8 894C2418 		movl	%ecx, 24(%rsp)
 1310              	.LVL148:
 1311 01ac E8000000 		call	_ZN12Fl_File_Icon3addEs
 1311      00
 1312              	.LVL149:
 1313 01b1 89EE     		movl	%ebp, %esi
 1314 01b3 4889DF   		movq	%rbx, %rdi
 1315 01b6 C1FE10   		sarl	$16, %esi
 1316 01b9 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1316      00
 1317              	.LVL150:
 1318 01be 0FBFF5   		movswl	%bp, %esi
 1319 01c1 4889DF   		movq	%rbx, %rdi
 1320              	.LBE397:
 1321              	.LBE396:
 1322              		.loc 1 393 0
 1323 01c4 BD1C2500 		movl	$9500, %ebp
 1323      00
 1324              	.LVL151:
 1325              	.LBB399:
 1326              	.LBB398:
  90:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
 1327              		.loc 3 90 0
 1328 01c9 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1328      00
 1329              	.LVL152:
 1330              	.LBE398:
 1331              	.LBE399:
 1332              		.loc 1 392 0
 1333 01ce BE040000 		movl	$4, %esi
 1333      00
 1334 01d3 4889DF   		movq	%rbx, %rdi
 1335 01d6 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1335      00
 1336              	.LVL153:
 1337              		.loc 1 393 0
 1338 01db 8B0424   		movl	(%rsp), %eax
 1339              	.LBB400:
 1340              	.LBB401:
 1341              		.loc 3 99 0
 1342 01de BE060000 		movl	$6, %esi
 1342      00
 1343 01e3 4889DF   		movq	%rbx, %rdi
 1344              	.LBE401:
 1345              	.LBE400:
 1346              		.loc 1 393 0
 1347 01e6 4569C528 		imull	$9000, %r13d, %r8d
 1347      230000
 1348              	.LVL154:
 1349 01ed 99       		cltd
 1350 01ee 41F77F0C 		idivl	12(%r15)
 1351 01f2 44894424 		movl	%r8d, 20(%rsp)
 1351      14
 1352 01f7 29C5     		subl	%eax, %ebp
 1353 01f9 4489C0   		movl	%r8d, %eax
 1354 01fc 99       		cltd
 1355 01fd 41F77F08 		idivl	8(%r15)
 1356 0201 448DA8E8 		leal	1000(%rax), %r13d
 1356      030000
 1357              	.LVL155:
 1358              	.LBB403:
 1359              	.LBB402:
 1360              		.loc 3 99 0
 1361 0208 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1361      00
 1362              	.LVL156:
 1363 020d 410FBFF5 		movswl	%r13w, %esi
 1364 0211 4889DF   		movq	%rbx, %rdi
 1365 0214 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1365      00
 1366              	.LVL157:
 1367 0219 0FBFF5   		movswl	%bp, %esi
 1368 021c 4889DF   		movq	%rbx, %rdi
 1369 021f E8000000 		call	_ZN12Fl_File_Icon3addEs
 1369      00
 1370              	.LVL158:
 1371              	.LBE402:
 1372              	.LBE403:
 1373              		.loc 1 394 0
 1374 0224 8B0424   		movl	(%rsp), %eax
 1375              	.LBB404:
 1376              	.LBB405:
 1377              		.loc 3 99 0
 1378 0227 BE060000 		movl	$6, %esi
 1378      00
 1379 022c 4889DF   		movq	%rbx, %rdi
 1380 022f 4569EC28 		imull	$9000, %r12d, %r13d
 1380      230000
 1381              	.LVL159:
 1382              	.LBE405:
 1383              	.LBE404:
 1384              		.loc 1 394 0
 1385 0236 99       		cltd
 1386 0237 41F77F0C 		idivl	12(%r15)
 1387 023b BA1C2500 		movl	$9500, %edx
 1387      00
 1388 0240 29C2     		subl	%eax, %edx
 1389 0242 4489E8   		movl	%r13d, %eax
 1390 0245 89542410 		movl	%edx, 16(%rsp)
 1391 0249 99       		cltd
 1392 024a 41F77F08 		idivl	8(%r15)
 1393 024e 8DA8E803 		leal	1000(%rax), %ebp
 1393      0000
 1394              	.LVL160:
 1395              	.LBB408:
 1396              	.LBB406:
 1397              		.loc 3 99 0
 1398 0254 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1398      00
 1399              	.LVL161:
 1400 0259 0FBFF5   		movswl	%bp, %esi
 1401 025c 4889DF   		movq	%rbx, %rdi
 1402              	.LBE406:
 1403              	.LBE408:
 1404              		.loc 1 395 0
 1405 025f BD1C2500 		movl	$9500, %ebp
 1405      00
 1406              	.LVL162:
 1407              	.LBB409:
 1408              	.LBB407:
 1409              		.loc 3 99 0
 1410 0264 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1410      00
 1411              	.LVL163:
 1412 0269 0FBF7424 		movswl	16(%rsp), %esi
 1412      10
 1413 026e 4889DF   		movq	%rbx, %rdi
 1414 0271 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1414      00
 1415              	.LVL164:
 1416              	.LBE407:
 1417              	.LBE409:
 1418              		.loc 1 395 0
 1419 0276 8B442408 		movl	8(%rsp), %eax
 1420              	.LBB410:
 1421              	.LBB411:
 1422              		.loc 3 99 0
 1423 027a BE060000 		movl	$6, %esi
 1423      00
 1424 027f 4889DF   		movq	%rbx, %rdi
 1425              	.LBE411:
 1426              	.LBE410:
 1427              		.loc 1 395 0
 1428 0282 99       		cltd
 1429 0283 41F77F0C 		idivl	12(%r15)
 1430 0287 29C5     		subl	%eax, %ebp
 1431              	.LVL165:
 1432 0289 4489E8   		movl	%r13d, %eax
 1433 028c 99       		cltd
 1434 028d 41F77F08 		idivl	8(%r15)
 1435 0291 448DA8E8 		leal	1000(%rax), %r13d
 1435      030000
 1436              	.LVL166:
 1437              	.LBB414:
 1438              	.LBB412:
 1439              		.loc 3 99 0
 1440 0298 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1440      00
 1441              	.LVL167:
 1442 029d 410FBFF5 		movswl	%r13w, %esi
 1443 02a1 4889DF   		movq	%rbx, %rdi
 1444 02a4 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1444      00
 1445              	.LVL168:
 1446 02a9 0FBFF5   		movswl	%bp, %esi
 1447 02ac 4889DF   		movq	%rbx, %rdi
 1448              	.LBE412:
 1449              	.LBE414:
 1450              		.loc 1 396 0
 1451 02af BD1C2500 		movl	$9500, %ebp
 1451      00
 1452              	.LVL169:
 1453              	.LBB415:
 1454              	.LBB413:
 1455              		.loc 3 99 0
 1456 02b4 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1456      00
 1457              	.LVL170:
 1458              	.LBE413:
 1459              	.LBE415:
 1460              		.loc 1 396 0
 1461 02b9 8B442408 		movl	8(%rsp), %eax
 1462 02bd 448B4424 		movl	20(%rsp), %r8d
 1462      14
 1463              	.LBB416:
 1464              	.LBB417:
 1465              		.loc 3 99 0
 1466 02c2 BE060000 		movl	$6, %esi
 1466      00
 1467 02c7 4889DF   		movq	%rbx, %rdi
 1468              	.LBE417:
 1469              	.LBE416:
 1470              		.loc 1 396 0
 1471 02ca 99       		cltd
 1472 02cb 41F77F0C 		idivl	12(%r15)
 1473 02cf 29C5     		subl	%eax, %ebp
 1474              	.LVL171:
 1475 02d1 4489C0   		movl	%r8d, %eax
 1476 02d4 99       		cltd
 1477 02d5 41F77F08 		idivl	8(%r15)
 1478 02d9 448DA8E8 		leal	1000(%rax), %r13d
 1478      030000
 1479              	.LVL172:
 1480              	.LBB420:
 1481              	.LBB418:
 1482              		.loc 3 99 0
 1483 02e0 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1483      00
 1484              	.LVL173:
 1485 02e5 410FBFF5 		movswl	%r13w, %esi
 1486 02e9 4889DF   		movq	%rbx, %rdi
 1487              	.LBE418:
 1488              	.LBE420:
 1489 02ec 4589E5   		movl	%r12d, %r13d
 1490              	.LVL174:
 1491              	.LBB421:
 1492              	.LBB419:
 1493 02ef E8000000 		call	_ZN12Fl_File_Icon3addEs
 1493      00
 1494              	.LVL175:
 1495 02f4 0FBFF5   		movswl	%bp, %esi
 1496 02f7 4889DF   		movq	%rbx, %rdi
 1497 02fa E8000000 		call	_ZN12Fl_File_Icon3addEs
 1497      00
 1498              	.LVL176:
 1499              	.LBE419:
 1500              	.LBE421:
 1501              		.loc 1 397 0
 1502 02ff 31F6     		xorl	%esi, %esi
 1503 0301 4889DF   		movq	%rbx, %rdi
 1504 0304 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1504      00
 1505              	.LVL177:
 1506 0309 418B4710 		movl	16(%r15), %eax
 1507 030d 8B4C2418 		movl	24(%rsp), %ecx
 1508 0311 E90FFEFF 		jmp	.L112
 1508      FF
 1509              	.LVL178:
 1510 0316 662E0F1F 		.p2align 4,,10
 1510      84000000 
 1510      0000
 1511              		.p2align 3
 1512              	.L228:
 1513              		.loc 1 405 0
 1514 0320 4539E5   		cmpl	%r12d, %r13d
 1515 0323 44896424 		movl	%r12d, 16(%rsp)
 1515      10
 1516 0328 0F8D6D01 		jge	.L106
 1516      0000
 1517 032e 83FDFF   		cmpl	$-1, %ebp
 1518 0331 0F846401 		je	.L106
 1518      0000
 1519              	.LVL179:
 1520              	.LBB422:
 1521              	.LBB423:
  90:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
 1522              		.loc 3 90 0
 1523 0337 BE010000 		movl	$1, %esi
 1523      00
 1524 033c 4889DF   		movq	%rbx, %rdi
 1525 033f E8000000 		call	_ZN12Fl_File_Icon3addEs
 1525      00
 1526              	.LVL180:
 1527 0344 89EE     		movl	%ebp, %esi
 1528 0346 4889DF   		movq	%rbx, %rdi
 1529 0349 C1FE10   		sarl	$16, %esi
 1530 034c E8000000 		call	_ZN12Fl_File_Icon3addEs
 1530      00
 1531              	.LVL181:
 1532 0351 0FBFF5   		movswl	%bp, %esi
 1533 0354 4889DF   		movq	%rbx, %rdi
 1534 0357 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1534      00
 1535              	.LVL182:
 1536              	.LBE423:
 1537              	.LBE422:
 1538              		.loc 1 408 0
 1539 035c BE040000 		movl	$4, %esi
 1539      00
 1540 0361 4889DF   		movq	%rbx, %rdi
 1541 0364 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1541      00
 1542              	.LVL183:
 1543              		.loc 1 409 0
 1544 0369 8B0424   		movl	(%rsp), %eax
 1545 036c B91C2500 		movl	$9500, %ecx
 1545      00
 1546              	.LBB424:
 1547              	.LBB425:
 1548              		.loc 3 99 0
 1549 0371 BE060000 		movl	$6, %esi
 1549      00
 1550              	.LBE425:
 1551              	.LBE424:
 1552              		.loc 1 409 0
 1553 0376 4169ED28 		imull	$9000, %r13d, %ebp
 1553      230000
 1554              	.LVL184:
 1555              	.LBB428:
 1556              	.LBB426:
 1557              		.loc 3 99 0
 1558 037d 4889DF   		movq	%rbx, %rdi
 1559              	.LBE426:
 1560              	.LBE428:
 1561              		.loc 1 410 0
 1562 0380 41BD1C25 		movl	$9500, %r13d
 1562      0000
 1563              	.LVL185:
 1564              		.loc 1 409 0
 1565 0386 99       		cltd
 1566 0387 41F77F0C 		idivl	12(%r15)
 1567 038b 29C1     		subl	%eax, %ecx
 1568 038d 89E8     		movl	%ebp, %eax
 1569 038f 99       		cltd
 1570 0390 894C2414 		movl	%ecx, 20(%rsp)
 1571 0394 41F77F08 		idivl	8(%r15)
 1572 0398 448DA0E8 		leal	1000(%rax), %r12d
 1572      030000
 1573              	.LVL186:
 1574              	.LBB429:
 1575              	.LBB427:
 1576              		.loc 3 99 0
 1577 039f E8000000 		call	_ZN12Fl_File_Icon3addEs
 1577      00
 1578              	.LVL187:
 1579 03a4 410FBFF4 		movswl	%r12w, %esi
 1580 03a8 4889DF   		movq	%rbx, %rdi
 1581 03ab E8000000 		call	_ZN12Fl_File_Icon3addEs
 1581      00
 1582              	.LVL188:
 1583 03b0 0FBF7424 		movswl	20(%rsp), %esi
 1583      14
 1584 03b5 4889DF   		movq	%rbx, %rdi
 1585 03b8 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1585      00
 1586              	.LVL189:
 1587              	.LBE427:
 1588              	.LBE429:
 1589              		.loc 1 410 0
 1590 03bd 8B0424   		movl	(%rsp), %eax
 1591 03c0 8B4C2410 		movl	16(%rsp), %ecx
 1592              	.LBB430:
 1593              	.LBB431:
 1594              		.loc 3 99 0
 1595 03c4 BE060000 		movl	$6, %esi
 1595      00
 1596 03c9 4889DF   		movq	%rbx, %rdi
 1597              	.LBE431:
 1598              	.LBE430:
 1599              		.loc 1 410 0
 1600 03cc 99       		cltd
 1601 03cd 41F77F0C 		idivl	12(%r15)
 1602 03d1 4469E128 		imull	$9000, %ecx, %r12d
 1602      230000
 1603              	.LVL190:
 1604 03d8 4129C5   		subl	%eax, %r13d
 1605              	.LVL191:
 1606 03db 4489E0   		movl	%r12d, %eax
 1607 03de 99       		cltd
 1608 03df 41F77F08 		idivl	8(%r15)
 1609 03e3 05E80300 		addl	$1000, %eax
 1609      00
 1610 03e8 890424   		movl	%eax, (%rsp)
 1611              	.LVL192:
 1612              	.LBB434:
 1613              	.LBB432:
 1614              		.loc 3 99 0
 1615 03eb E8000000 		call	_ZN12Fl_File_Icon3addEs
 1615      00
 1616              	.LVL193:
 1617 03f0 0FBF3424 		movswl	(%rsp), %esi
 1618 03f4 4889DF   		movq	%rbx, %rdi
 1619 03f7 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1619      00
 1620              	.LVL194:
 1621 03fc 410FBFF5 		movswl	%r13w, %esi
 1622 0400 4889DF   		movq	%rbx, %rdi
 1623              	.LBE432:
 1624              	.LBE434:
 1625              		.loc 1 411 0
 1626 0403 41BD1C25 		movl	$9500, %r13d
 1626      0000
 1627              	.LVL195:
 1628              	.LBB435:
 1629              	.LBB433:
 1630              		.loc 3 99 0
 1631 0409 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1631      00
 1632              	.LVL196:
 1633              	.LBE433:
 1634              	.LBE435:
 1635              		.loc 1 411 0
 1636 040e 8B442408 		movl	8(%rsp), %eax
 1637              	.LBB436:
 1638              	.LBB437:
 1639              		.loc 3 99 0
 1640 0412 BE060000 		movl	$6, %esi
 1640      00
 1641 0417 4889DF   		movq	%rbx, %rdi
 1642              	.LBE437:
 1643              	.LBE436:
 1644              		.loc 1 411 0
 1645 041a 99       		cltd
 1646 041b 41F77F0C 		idivl	12(%r15)
 1647 041f 4129C5   		subl	%eax, %r13d
 1648              	.LVL197:
 1649 0422 4489E0   		movl	%r12d, %eax
 1650 0425 99       		cltd
 1651 0426 41F77F08 		idivl	8(%r15)
 1652 042a 448DA0E8 		leal	1000(%rax), %r12d
 1652      030000
 1653              	.LVL198:
 1654              	.LBB440:
 1655              	.LBB438:
 1656              		.loc 3 99 0
 1657 0431 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1657      00
 1658              	.LVL199:
 1659 0436 410FBFF4 		movswl	%r12w, %esi
 1660 043a 4889DF   		movq	%rbx, %rdi
 1661              	.LBE438:
 1662              	.LBE440:
 1663              		.loc 1 412 0
 1664 043d 41BC1C25 		movl	$9500, %r12d
 1664      0000
 1665              	.LVL200:
 1666              	.LBB441:
 1667              	.LBB439:
 1668              		.loc 3 99 0
 1669 0443 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1669      00
 1670              	.LVL201:
 1671 0448 410FBFF5 		movswl	%r13w, %esi
 1672 044c 4889DF   		movq	%rbx, %rdi
 1673 044f E8000000 		call	_ZN12Fl_File_Icon3addEs
 1673      00
 1674              	.LVL202:
 1675              	.LBE439:
 1676              	.LBE441:
 1677              		.loc 1 412 0
 1678 0454 8B442408 		movl	8(%rsp), %eax
 1679              	.LBB442:
 1680              	.LBB443:
 1681              		.loc 3 99 0
 1682 0458 BE060000 		movl	$6, %esi
 1682      00
 1683 045d 4889DF   		movq	%rbx, %rdi
 1684              	.LBE443:
 1685              	.LBE442:
 1686              		.loc 1 412 0
 1687 0460 99       		cltd
 1688 0461 41F77F0C 		idivl	12(%r15)
 1689 0465 4129C4   		subl	%eax, %r12d
 1690              	.LVL203:
 1691 0468 89E8     		movl	%ebp, %eax
 1692 046a 99       		cltd
 1693 046b 41F77F08 		idivl	8(%r15)
 1694 046f 8DA8E803 		leal	1000(%rax), %ebp
 1694      0000
 1695              	.LVL204:
 1696              	.LBB445:
 1697              	.LBB444:
 1698              		.loc 3 99 0
 1699 0475 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1699      00
 1700              	.LVL205:
 1701 047a 0FBFF5   		movswl	%bp, %esi
 1702 047d 4889DF   		movq	%rbx, %rdi
 1703 0480 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1703      00
 1704              	.LVL206:
 1705 0485 410FBFF4 		movswl	%r12w, %esi
 1706 0489 4889DF   		movq	%rbx, %rdi
 1707 048c E8000000 		call	_ZN12Fl_File_Icon3addEs
 1707      00
 1708              	.LVL207:
 1709              	.LBE444:
 1710              	.LBE445:
 1711              		.loc 1 413 0
 1712 0491 31F6     		xorl	%esi, %esi
 1713 0493 4889DF   		movq	%rbx, %rdi
 1714 0496 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1714      00
 1715              	.LVL208:
 1716              	.L106:
 1717 049b 8B442408 		movl	8(%rsp), %eax
 1718              		.loc 1 359 0 discriminator 2
 1719 049f 4C037424 		addq	48(%rsp), %r14
 1719      30
 1720              	.LVL209:
 1721 04a4 83442420 		addl	$1, 32(%rsp)
 1721      01
 1722 04a9 890424   		movl	%eax, (%rsp)
 1723 04ac 8B442428 		movl	40(%rsp), %eax
 1724 04b0 4139470C 		cmpl	%eax, 12(%r15)
 1725 04b4 0F8ECC01 		jle	.L104
 1725      0000
 1726 04ba 418B5708 		movl	8(%r15), %edx
 1727              	.LVL210:
 1728              		.loc 1 361 0
 1729 04be 85D2     		testl	%edx, %edx
 1730 04c0 0F8FFAFB 		jg	.L105
 1730      FFFF
 1731              	.LVL211:
 1732              	.L226:
 1733 04c6 8B442420 		movl	32(%rsp), %eax
 1734 04ca 89442428 		movl	%eax, 40(%rsp)
 1735 04ce 8B0424   		movl	(%rsp), %eax
 1736 04d1 05282300 		addl	$9000, %eax
 1736      00
 1737 04d6 89442408 		movl	%eax, 8(%rsp)
 1738 04da EBBF     		jmp	.L106
 1739              	.LVL212:
 1740 04dc 0F1F4000 		.p2align 4,,10
 1741              		.p2align 3
 1742              	.L234:
 1743              	.LBE387:
 1744              	.LBB446:
 1745              		.loc 1 555 0
 1746 04e0 3B6C2410 		cmpl	16(%rsp), %ebp
 1747 04e4 4189CE   		movl	%ecx, %r14d
 1748              	.LVL213:
 1749 04e7 0F846F01 		je	.L142
 1749      0000
 1750              		.loc 1 556 0
 1751 04ed 488B4424 		movq	40(%rsp), %rax
 1751      28
 1752 04f2 4863ED   		movslq	%ebp, %rbp
 1753              	.LBB447:
 1754              	.LBB448:
  90:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
 1755              		.loc 3 90 0
 1756 04f5 BE010000 		movl	$1, %esi
 1756      00
 1757 04fa 4889DF   		movq	%rbx, %rdi
 1758              	.LBE448:
 1759              	.LBE447:
 1760              		.loc 1 558 0
 1761 04fd 41BD1C25 		movl	$9500, %r13d
 1761      0000
 1762              		.loc 1 556 0
 1763 0503 8B2CA8   		movl	(%rax,%rbp,4), %ebp
 1764              	.LVL214:
 1765              	.LBB450:
 1766              	.LBB449:
  90:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
 1767              		.loc 3 90 0
 1768 0506 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1768      00
 1769              	.LVL215:
 1770 050b 4889DF   		movq	%rbx, %rdi
 1771 050e 89EE     		movl	%ebp, %esi
 1772 0510 C1FE10   		sarl	$16, %esi
 1773 0513 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1773      00
 1774              	.LVL216:
 1775 0518 0FBFF5   		movswl	%bp, %esi
 1776 051b 4889DF   		movq	%rbx, %rdi
 1777 051e E8000000 		call	_ZN12Fl_File_Icon3addEs
 1777      00
 1778              	.LVL217:
 1779              	.LBE449:
 1780              	.LBE450:
 1781              		.loc 1 557 0
 1782 0523 BE040000 		movl	$4, %esi
 1782      00
 1783 0528 4889DF   		movq	%rbx, %rdi
 1784 052b E8000000 		call	_ZN12Fl_File_Icon3addEs
 1784      00
 1785              	.LVL218:
 1786              		.loc 1 558 0
 1787 0530 8B0424   		movl	(%rsp), %eax
 1788              	.LBB451:
 1789              	.LBB452:
 1790              		.loc 3 99 0
 1791 0533 BE060000 		movl	$6, %esi
 1791      00
 1792 0538 4889DF   		movq	%rbx, %rdi
 1793              	.LBE452:
 1794              	.LBE451:
 1795              		.loc 1 558 0
 1796 053b 4569C428 		imull	$9000, %r12d, %r8d
 1796      230000
 1797              	.LVL219:
 1798              		.loc 1 559 0
 1799 0542 4569E628 		imull	$9000, %r14d, %r12d
 1799      230000
 1800              	.LVL220:
 1801              		.loc 1 558 0
 1802 0549 99       		cltd
 1803 054a 44894424 		movl	%r8d, 20(%rsp)
 1803      14
 1804 054f 41F77F0C 		idivl	12(%r15)
 1805 0553 4129C5   		subl	%eax, %r13d
 1806 0556 4489C0   		movl	%r8d, %eax
 1807 0559 99       		cltd
 1808 055a 41F77F08 		idivl	8(%r15)
 1809 055e 8DA8E803 		leal	1000(%rax), %ebp
 1809      0000
 1810              	.LVL221:
 1811              	.LBB455:
 1812              	.LBB453:
 1813              		.loc 3 99 0
 1814 0564 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1814      00
 1815              	.LVL222:
 1816 0569 0FBFF5   		movswl	%bp, %esi
 1817 056c 4889DF   		movq	%rbx, %rdi
 1818 056f E8000000 		call	_ZN12Fl_File_Icon3addEs
 1818      00
 1819              	.LVL223:
 1820 0574 410FBFF5 		movswl	%r13w, %esi
 1821 0578 4889DF   		movq	%rbx, %rdi
 1822              	.LBE453:
 1823              	.LBE455:
 1824              		.loc 1 559 0
 1825 057b 41BD1C25 		movl	$9500, %r13d
 1825      0000
 1826              	.LVL224:
 1827              	.LBB456:
 1828              	.LBB454:
 1829              		.loc 3 99 0
 1830 0581 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1830      00
 1831              	.LVL225:
 1832              	.LBE454:
 1833              	.LBE456:
 1834              		.loc 1 559 0
 1835 0586 8B0424   		movl	(%rsp), %eax
 1836              	.LBB457:
 1837              	.LBB458:
 1838              		.loc 3 99 0
 1839 0589 BE060000 		movl	$6, %esi
 1839      00
 1840 058e 4889DF   		movq	%rbx, %rdi
 1841              	.LBE458:
 1842              	.LBE457:
 1843              		.loc 1 559 0
 1844 0591 99       		cltd
 1845 0592 41F77F0C 		idivl	12(%r15)
 1846 0596 4129C5   		subl	%eax, %r13d
 1847 0599 4489E0   		movl	%r12d, %eax
 1848 059c 99       		cltd
 1849 059d 41F77F08 		idivl	8(%r15)
 1850 05a1 8DA8E803 		leal	1000(%rax), %ebp
 1850      0000
 1851              	.LVL226:
 1852              	.LBB461:
 1853              	.LBB459:
 1854              		.loc 3 99 0
 1855 05a7 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1855      00
 1856              	.LVL227:
 1857 05ac 0FBFF5   		movswl	%bp, %esi
 1858 05af 4889DF   		movq	%rbx, %rdi
 1859 05b2 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1859      00
 1860              	.LVL228:
 1861 05b7 410FBFF5 		movswl	%r13w, %esi
 1862 05bb 4889DF   		movq	%rbx, %rdi
 1863              	.LBE459:
 1864              	.LBE461:
 1865              		.loc 1 560 0
 1866 05be 41BD1C25 		movl	$9500, %r13d
 1866      0000
 1867              	.LVL229:
 1868              	.LBB462:
 1869              	.LBB460:
 1870              		.loc 3 99 0
 1871 05c4 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1871      00
 1872              	.LVL230:
 1873              	.LBE460:
 1874              	.LBE462:
 1875              		.loc 1 560 0
 1876 05c9 8B442408 		movl	8(%rsp), %eax
 1877              	.LBB463:
 1878              	.LBB464:
 1879              		.loc 3 99 0
 1880 05cd BE060000 		movl	$6, %esi
 1880      00
 1881 05d2 4889DF   		movq	%rbx, %rdi
 1882              	.LBE464:
 1883              	.LBE463:
 1884              		.loc 1 560 0
 1885 05d5 99       		cltd
 1886 05d6 41F77F0C 		idivl	12(%r15)
 1887 05da 4129C5   		subl	%eax, %r13d
 1888              	.LVL231:
 1889 05dd 4489E0   		movl	%r12d, %eax
 1890 05e0 99       		cltd
 1891 05e1 41F77F08 		idivl	8(%r15)
 1892 05e5 448DA0E8 		leal	1000(%rax), %r12d
 1892      030000
 1893              	.LVL232:
 1894              	.LBB467:
 1895              	.LBB465:
 1896              		.loc 3 99 0
 1897 05ec E8000000 		call	_ZN12Fl_File_Icon3addEs
 1897      00
 1898              	.LVL233:
 1899 05f1 410FBFF4 		movswl	%r12w, %esi
 1900 05f5 4889DF   		movq	%rbx, %rdi
 1901              	.LBE465:
 1902              	.LBE467:
 1903              		.loc 1 561 0
 1904 05f8 41BC1C25 		movl	$9500, %r12d
 1904      0000
 1905              	.LVL234:
 1906              	.LBB468:
 1907              	.LBB466:
 1908              		.loc 3 99 0
 1909 05fe E8000000 		call	_ZN12Fl_File_Icon3addEs
 1909      00
 1910              	.LVL235:
 1911 0603 410FBFF5 		movswl	%r13w, %esi
 1912 0607 4889DF   		movq	%rbx, %rdi
 1913 060a E8000000 		call	_ZN12Fl_File_Icon3addEs
 1913      00
 1914              	.LVL236:
 1915              	.LBE466:
 1916              	.LBE468:
 1917              		.loc 1 561 0
 1918 060f 8B442408 		movl	8(%rsp), %eax
 1919 0613 448B4424 		movl	20(%rsp), %r8d
 1919      14
 1920              	.LBB469:
 1921              	.LBB470:
 1922              		.loc 3 99 0
 1923 0618 BE060000 		movl	$6, %esi
 1923      00
 1924 061d 4889DF   		movq	%rbx, %rdi
 1925              	.LBE470:
 1926              	.LBE469:
 1927              		.loc 1 561 0
 1928 0620 99       		cltd
 1929 0621 41F77F0C 		idivl	12(%r15)
 1930 0625 4129C4   		subl	%eax, %r12d
 1931              	.LVL237:
 1932 0628 4489C0   		movl	%r8d, %eax
 1933 062b 99       		cltd
 1934 062c 41F77F08 		idivl	8(%r15)
 1935 0630 8DA8E803 		leal	1000(%rax), %ebp
 1935      0000
 1936              	.LVL238:
 1937              	.LBB472:
 1938              	.LBB471:
 1939              		.loc 3 99 0
 1940 0636 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1940      00
 1941              	.LVL239:
 1942 063b 0FBFF5   		movswl	%bp, %esi
 1943 063e 4889DF   		movq	%rbx, %rdi
 1944 0641 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1944      00
 1945              	.LVL240:
 1946 0646 410FBFF4 		movswl	%r12w, %esi
 1947 064a 4889DF   		movq	%rbx, %rdi
 1948 064d E8000000 		call	_ZN12Fl_File_Icon3addEs
 1948      00
 1949              	.LVL241:
 1950              	.LBE471:
 1951              	.LBE472:
 1952              		.loc 1 562 0
 1953 0652 31F6     		xorl	%esi, %esi
 1954 0654 4889DF   		movq	%rbx, %rdi
 1955 0657 E8000000 		call	_ZN12Fl_File_Icon3addEs
 1955      00
 1956              	.LVL242:
 1957              	.L142:
 1958 065c 8B442408 		movl	8(%rsp), %eax
 1959              		.loc 1 529 0 discriminator 2
 1960 0660 48834424 		addq	$8, 48(%rsp)
 1960      3008
 1961              	.LVL243:
 1962 0666 83442438 		addl	$1, 56(%rsp)
 1962      01
 1963              	.LVL244:
 1964 066b 890424   		movl	%eax, (%rsp)
 1965 066e 8B44243C 		movl	60(%rsp), %eax
 1966 0672 4139470C 		cmpl	%eax, 12(%r15)
 1967 0676 0F8FDC01 		jg	.L186
 1967      0000
 1968              	.LVL245:
 1969              	.L148:
 1970              		.loc 1 567 0
 1971 067c 488B7C24 		movq	40(%rsp), %rdi
 1971      28
 1972 0681 E8000000 		call	_ZdaPv
 1972      00
 1973              	.LVL246:
 1974              	.L104:
 1975              	.LBE446:
 1976              	.LBE386:
 1977              		.loc 1 570 0
 1978 0686 4C89FF   		movq	%r15, %rdi
 1979 0689 E8000000 		call	_ZN15Fl_Shared_Image7releaseEv
 1979      00
 1980              	.LVL247:
 1981              		.loc 1 583 0
 1982 068e 31C0     		xorl	%eax, %eax
 1983 0690 E9ADF9FF 		jmp	.L100
 1983      FF
 1984              	.LVL248:
 1985              	.L210:
 1986 0695 498B6F20 		movq	32(%r15), %rbp
 1987              	.LVL249:
 1988              	.LBB530:
 1989              	.LBB529:
 1990              		.loc 1 433 0
 1991 0699 488D4C24 		leaq	76(%rsp), %rcx
 1991      4C
 1992 069e 488D5424 		leaq	72(%rsp), %rdx
 1992      48
 1993 06a3 BE000000 		movl	$.LC23, %esi
 1993      00
 1994 06a8 31C0     		xorl	%eax, %eax
 1995 06aa 488B7D00 		movq	0(%rbp), %rdi
 1996 06ae E8000000 		call	sscanf
 1996      00
 1997              	.LVL250:
 1998              		.loc 1 435 0
 1999 06b3 8B44244C 		movl	76(%rsp), %eax
 2000 06b7 48C7C7FF 		movq	$-1, %rdi
 2000      FFFFFF
 2001 06be 8D0CC500 		leal	0(,%rax,8), %ecx
 2001      000000
 2002 06c5 B8010000 		movl	$1, %eax
 2002      00
 2003 06ca D3E0     		sall	%cl, %eax
 2004 06cc 48B90000 		movabsq	$2287828610704211968, %rcx
 2004      00000000 
 2004      C01F
 2005 06d6 4898     		cltq
 2006 06d8 488D1485 		leaq	0(,%rax,4), %rdx
 2006      00000000 
 2007 06e0 4839C8   		cmpq	%rcx, %rax
 2008 06e3 480F46FA 		cmovbe	%rdx, %rdi
 2009 06e7 E8000000 		call	_Znam
 2009      00
 2010              	.LVL251:
 2011              		.loc 1 438 0
 2012 06ec 448B6424 		movl	76(%rsp), %r12d
 2012      4C
 2013              	.LBB473:
 2014              	.LBB474:
 2015              		.file 6 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
  54:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  55:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  56:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  57:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (memmove (void *__dest, const void *__src, size_t __len))
  58:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  59:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___memmove_chk (__dest, __src, __len, __bos0 (__dest));
  60:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  61:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  62:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifdef __USE_GNU
  63:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  64:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (mempcpy (void *__restrict __dest, const void *__restrict __src,
  65:/usr/include/x86_64-linux-gnu/bits/string3.h **** 		size_t __len))
  66:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  67:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___mempcpy_chk (__dest, __src, __len, __bos0 (__dest));
  68:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  69:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  70:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  71:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  72:/usr/include/x86_64-linux-gnu/bits/string3.h **** /* The first two tests here help to catch a somewhat common problem
  73:/usr/include/x86_64-linux-gnu/bits/string3.h ****    where the second and third parameter are transposed.  This is
  74:/usr/include/x86_64-linux-gnu/bits/string3.h ****    especially problematic if the intended fill value is zero.  In this
  75:/usr/include/x86_64-linux-gnu/bits/string3.h ****    case no work is done at all.  We detect these problems by referring
  76:/usr/include/x86_64-linux-gnu/bits/string3.h ****    non-existing functions.  */
  77:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  78:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (memset (void *__dest, int __ch, size_t __len))
  79:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  80:/usr/include/x86_64-linux-gnu/bits/string3.h ****   /* GCC-5.0 and newer implements these checks in the compiler, so we don't
  81:/usr/include/x86_64-linux-gnu/bits/string3.h ****      need them here.  */
  82:/usr/include/x86_64-linux-gnu/bits/string3.h **** #if !__GNUC_PREREQ (5,0)
  83:/usr/include/x86_64-linux-gnu/bits/string3.h ****   if (__builtin_constant_p (__len) && __len == 0
  84:/usr/include/x86_64-linux-gnu/bits/string3.h ****       && (!__builtin_constant_p (__ch) || __ch != 0))
  85:/usr/include/x86_64-linux-gnu/bits/string3.h ****     {
  86:/usr/include/x86_64-linux-gnu/bits/string3.h ****       __warn_memset_zero_len ();
  87:/usr/include/x86_64-linux-gnu/bits/string3.h ****       return __dest;
  88:/usr/include/x86_64-linux-gnu/bits/string3.h ****     }
  89:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  90:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___memset_chk (__dest, __ch, __len, __bos0 (__dest));
 2016              		.loc 6 90 0
 2017 06f1 BA040000 		movl	$4, %edx
 2017      00
 2018 06f6 31F6     		xorl	%esi, %esi
 2019 06f8 4889C7   		movq	%rax, %rdi
 2020              	.LBE474:
 2021              	.LBE473:
 2022              		.loc 1 435 0
 2023 06fb 4989C6   		movq	%rax, %r14
 2024 06fe 48894424 		movq	%rax, 40(%rsp)
 2024      28
 2025              	.LVL252:
 2026              	.LBB476:
 2027              	.LBB475:
 2028              		.loc 6 90 0
 2029 0703 428D0CE5 		leal	0(,%r12,8), %ecx
 2029      00000000 
 2030 070b 48D3E2   		salq	%cl, %rdx
 2031 070e E8000000 		call	memset
 2031      00
 2032              	.LVL253:
 2033              	.LBE475:
 2034              	.LBE476:
 2035              	.LBB477:
 2036              		.loc 1 443 0
 2037 0713 8B442448 		movl	72(%rsp), %eax
 2038 0717 85C0     		testl	%eax, %eax
 2039 0719 0F889105 		js	.L117
 2039      0000
 2040              	.LBE477:
 2041              		.loc 1 441 0 discriminator 1
 2042 071f 488D5508 		leaq	8(%rbp), %rdx
 2043              	.LVL254:
 2044              	.LBB498:
 2045              		.loc 1 454 0 discriminator 1
 2046 0723 85C0     		testl	%eax, %eax
 2047 0725 C7442410 		movl	$32, 16(%rsp)
 2047      20000000 
 2048              	.LBE498:
 2049              		.loc 1 441 0 discriminator 1
 2050 072d 4889D1   		movq	%rdx, %rcx
 2051 0730 48895424 		movq	%rdx, 48(%rsp)
 2051      30
 2052              	.LVL255:
 2053              	.LBB499:
 2054              		.loc 1 454 0 discriminator 1
 2055 0735 0F84FD00 		je	.L118
 2055      0000
 2056 073b 4489E2   		movl	%r12d, %edx
 2057              	.LVL256:
 2058 073e 4C893C24 		movq	%r15, (%rsp)
 2059              		.loc 1 454 0 is_stmt 0
 2060 0742 4531ED   		xorl	%r13d, %r13d
 2061 0745 4D89F4   		movq	%r14, %r12
 2062 0748 4989CF   		movq	%rcx, %r15
 2063              	.LVL257:
 2064 074b 48895C24 		movq	%rbx, 8(%rsp)
 2064      08
 2065 0750 EB28     		jmp	.L119
 2066              	.LVL258:
 2067              		.p2align 4,,10
 2068 0752 660F1F44 		.p2align 3
 2068      0000
 2069              	.L231:
 2070              		.loc 1 518 0 is_stmt 1 discriminator 1
 2071 0758 4D63F6   		movslq	%r14d, %r14
 2072 075b 43C704B4 		movl	$255, (%r12,%r14,4)
 2072      FF000000 
 2073              	.LVL259:
 2074              	.L125:
 2075              		.loc 1 454 0 discriminator 2
 2076 0763 4183C501 		addl	$1, %r13d
 2077              	.LVL260:
 2078 0767 4983C708 		addq	$8, %r15
 2079              	.LVL261:
 2080 076b 44396C24 		cmpl	%r13d, 72(%rsp)
 2080      48
 2081 0770 0F8EB400 		jle	.L212
 2081      0000
 2082              	.L232:
 2083 0776 8B54244C 		movl	76(%rsp), %edx
 2084              	.LVL262:
 2085              	.L119:
 2086              		.loc 1 456 0
 2087 077a 498B07   		movq	(%r15), %rax
 2088              	.LVL263:
 2089              		.loc 1 459 0
 2090 077d 83FA01   		cmpl	$1, %edx
 2091              		.loc 1 457 0
 2092 0780 440FBE30 		movsbl	(%rax), %r14d
 2093              	.LVL264:
 2094 0784 488D7801 		leaq	1(%rax), %rdi
 2095              	.LVL265:
 2096              		.loc 1 459 0
 2097 0788 7E0F     		jle	.L123
 2098              		.loc 1 459 0 is_stmt 0 discriminator 1
 2099 078a 488D7802 		leaq	2(%rax), %rdi
 2100              	.LVL266:
 2101 078e 0FBE4001 		movsbl	1(%rax), %eax
 2102 0792 41C1E608 		sall	$8, %r14d
 2103              	.LVL267:
 2104 0796 4109C6   		orl	%eax, %r14d
 2105              	.LVL268:
 2106              	.L123:
 2107              	.LBB478:
 2108              	.LBB479:
 2109              		.file 7 "/usr/include/string.h"
   1:/usr/include/string.h **** /* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   2:/usr/include/string.h ****    This file is part of the GNU C Library.
   3:/usr/include/string.h **** 
   4:/usr/include/string.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/string.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/string.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/string.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/string.h **** 
   9:/usr/include/string.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/string.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/string.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/string.h ****    Lesser General Public License for more details.
  13:/usr/include/string.h **** 
  14:/usr/include/string.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/string.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/string.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/string.h **** 
  18:/usr/include/string.h **** /*
  19:/usr/include/string.h ****  *	ISO C99 Standard: 7.21 String handling	<string.h>
  20:/usr/include/string.h ****  */
  21:/usr/include/string.h **** 
  22:/usr/include/string.h **** #ifndef	_STRING_H
  23:/usr/include/string.h **** #define	_STRING_H	1
  24:/usr/include/string.h **** 
  25:/usr/include/string.h **** #include <features.h>
  26:/usr/include/string.h **** 
  27:/usr/include/string.h **** __BEGIN_DECLS
  28:/usr/include/string.h **** 
  29:/usr/include/string.h **** /* Get size_t and NULL from <stddef.h>.  */
  30:/usr/include/string.h **** #define	__need_size_t
  31:/usr/include/string.h **** #define	__need_NULL
  32:/usr/include/string.h **** #include <stddef.h>
  33:/usr/include/string.h **** 
  34:/usr/include/string.h **** /* Tell the caller that we provide correct C++ prototypes.  */
  35:/usr/include/string.h **** #if defined __cplusplus && __GNUC_PREREQ (4, 4)
  36:/usr/include/string.h **** # define __CORRECT_ISO_CPP_STRING_H_PROTO
  37:/usr/include/string.h **** #endif
  38:/usr/include/string.h **** 
  39:/usr/include/string.h **** 
  40:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
  41:/usr/include/string.h **** /* Copy N bytes of SRC to DEST.  */
  42:/usr/include/string.h **** extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
  43:/usr/include/string.h **** 		     size_t __n) __THROW __nonnull ((1, 2));
  44:/usr/include/string.h **** /* Copy N bytes of SRC to DEST, guaranteeing
  45:/usr/include/string.h ****    correct behavior for overlapping strings.  */
  46:/usr/include/string.h **** extern void *memmove (void *__dest, const void *__src, size_t __n)
  47:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
  48:/usr/include/string.h **** __END_NAMESPACE_STD
  49:/usr/include/string.h **** 
  50:/usr/include/string.h **** /* Copy no more than N bytes of SRC to DEST, stopping when C is found.
  51:/usr/include/string.h ****    Return the position in DEST one byte past where C was copied,
  52:/usr/include/string.h ****    or NULL if C was not found in the first N bytes of SRC.  */
  53:/usr/include/string.h **** #if defined __USE_MISC || defined __USE_XOPEN
  54:/usr/include/string.h **** extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
  55:/usr/include/string.h **** 		      int __c, size_t __n)
  56:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
  57:/usr/include/string.h **** #endif /* Misc || X/Open.  */
  58:/usr/include/string.h **** 
  59:/usr/include/string.h **** 
  60:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
  61:/usr/include/string.h **** /* Set N bytes of S to C.  */
  62:/usr/include/string.h **** extern void *memset (void *__s, int __c, size_t __n) __THROW __nonnull ((1));
  63:/usr/include/string.h **** 
  64:/usr/include/string.h **** /* Compare N bytes of S1 and S2.  */
  65:/usr/include/string.h **** extern int memcmp (const void *__s1, const void *__s2, size_t __n)
  66:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
  67:/usr/include/string.h **** 
  68:/usr/include/string.h **** /* Search N bytes of S for C.  */
  69:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
  70:/usr/include/string.h **** extern "C++"
  71:/usr/include/string.h **** {
  72:/usr/include/string.h **** extern void *memchr (void *__s, int __c, size_t __n)
  73:/usr/include/string.h ****       __THROW __asm ("memchr") __attribute_pure__ __nonnull ((1));
  74:/usr/include/string.h **** extern const void *memchr (const void *__s, int __c, size_t __n)
  75:/usr/include/string.h ****       __THROW __asm ("memchr") __attribute_pure__ __nonnull ((1));
  76:/usr/include/string.h **** 
  77:/usr/include/string.h **** # ifdef __OPTIMIZE__
  78:/usr/include/string.h **** __extern_always_inline void *
  79:/usr/include/string.h **** memchr (void *__s, int __c, size_t __n) __THROW
  80:/usr/include/string.h **** {
  81:/usr/include/string.h ****   return __builtin_memchr (__s, __c, __n);
  82:/usr/include/string.h **** }
  83:/usr/include/string.h **** 
  84:/usr/include/string.h **** __extern_always_inline const void *
  85:/usr/include/string.h **** memchr (const void *__s, int __c, size_t __n) __THROW
  86:/usr/include/string.h **** {
  87:/usr/include/string.h ****   return __builtin_memchr (__s, __c, __n);
  88:/usr/include/string.h **** }
  89:/usr/include/string.h **** # endif
  90:/usr/include/string.h **** }
  91:/usr/include/string.h **** #else
  92:/usr/include/string.h **** extern void *memchr (const void *__s, int __c, size_t __n)
  93:/usr/include/string.h ****       __THROW __attribute_pure__ __nonnull ((1));
  94:/usr/include/string.h **** #endif
  95:/usr/include/string.h **** __END_NAMESPACE_STD
  96:/usr/include/string.h **** 
  97:/usr/include/string.h **** #ifdef __USE_GNU
  98:/usr/include/string.h **** /* Search in S for C.  This is similar to `memchr' but there is no
  99:/usr/include/string.h ****    length limit.  */
 100:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 101:/usr/include/string.h **** extern "C++" void *rawmemchr (void *__s, int __c)
 102:/usr/include/string.h ****      __THROW __asm ("rawmemchr") __attribute_pure__ __nonnull ((1));
 103:/usr/include/string.h **** extern "C++" const void *rawmemchr (const void *__s, int __c)
 104:/usr/include/string.h ****      __THROW __asm ("rawmemchr") __attribute_pure__ __nonnull ((1));
 105:/usr/include/string.h **** # else
 106:/usr/include/string.h **** extern void *rawmemchr (const void *__s, int __c)
 107:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 108:/usr/include/string.h **** # endif
 109:/usr/include/string.h **** 
 110:/usr/include/string.h **** /* Search N bytes of S for the final occurrence of C.  */
 111:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 112:/usr/include/string.h **** extern "C++" void *memrchr (void *__s, int __c, size_t __n)
 113:/usr/include/string.h ****       __THROW __asm ("memrchr") __attribute_pure__ __nonnull ((1));
 114:/usr/include/string.h **** extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
 115:/usr/include/string.h ****       __THROW __asm ("memrchr") __attribute_pure__ __nonnull ((1));
 116:/usr/include/string.h **** # else
 117:/usr/include/string.h **** extern void *memrchr (const void *__s, int __c, size_t __n)
 118:/usr/include/string.h ****       __THROW __attribute_pure__ __nonnull ((1));
 119:/usr/include/string.h **** # endif
 120:/usr/include/string.h **** #endif
 121:/usr/include/string.h **** 
 122:/usr/include/string.h **** 
 123:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 124:/usr/include/string.h **** /* Copy SRC to DEST.  */
 125:/usr/include/string.h **** extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
 126:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 127:/usr/include/string.h **** /* Copy no more than N characters of SRC to DEST.  */
 128:/usr/include/string.h **** extern char *strncpy (char *__restrict __dest,
 129:/usr/include/string.h **** 		      const char *__restrict __src, size_t __n)
 130:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 131:/usr/include/string.h **** 
 132:/usr/include/string.h **** /* Append SRC onto DEST.  */
 133:/usr/include/string.h **** extern char *strcat (char *__restrict __dest, const char *__restrict __src)
 134:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 135:/usr/include/string.h **** /* Append no more than N characters from SRC onto DEST.  */
 136:/usr/include/string.h **** extern char *strncat (char *__restrict __dest, const char *__restrict __src,
 137:/usr/include/string.h **** 		      size_t __n) __THROW __nonnull ((1, 2));
 138:/usr/include/string.h **** 
 139:/usr/include/string.h **** /* Compare S1 and S2.  */
 140:/usr/include/string.h **** extern int strcmp (const char *__s1, const char *__s2)
 141:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 142:/usr/include/string.h **** /* Compare N characters of S1 and S2.  */
 143:/usr/include/string.h **** extern int strncmp (const char *__s1, const char *__s2, size_t __n)
 144:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 145:/usr/include/string.h **** 
 146:/usr/include/string.h **** /* Compare the collated forms of S1 and S2.  */
 147:/usr/include/string.h **** extern int strcoll (const char *__s1, const char *__s2)
 148:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 149:/usr/include/string.h **** /* Put a transformation of SRC into no more than N bytes of DEST.  */
 150:/usr/include/string.h **** extern size_t strxfrm (char *__restrict __dest,
 151:/usr/include/string.h **** 		       const char *__restrict __src, size_t __n)
 152:/usr/include/string.h ****      __THROW __nonnull ((2));
 153:/usr/include/string.h **** __END_NAMESPACE_STD
 154:/usr/include/string.h **** 
 155:/usr/include/string.h **** #ifdef __USE_XOPEN2K8
 156:/usr/include/string.h **** /* The following functions are equivalent to the both above but they
 157:/usr/include/string.h ****    take the locale they use for the collation as an extra argument.
 158:/usr/include/string.h ****    This is not standardsized but something like will come.  */
 159:/usr/include/string.h **** # include <xlocale.h>
 160:/usr/include/string.h **** 
 161:/usr/include/string.h **** /* Compare the collated forms of S1 and S2 using rules from L.  */
 162:/usr/include/string.h **** extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
 163:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2, 3));
 164:/usr/include/string.h **** /* Put a transformation of SRC into no more than N bytes of DEST.  */
 165:/usr/include/string.h **** extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
 166:/usr/include/string.h **** 			 __locale_t __l) __THROW __nonnull ((2, 4));
 167:/usr/include/string.h **** #endif
 168:/usr/include/string.h **** 
 169:/usr/include/string.h **** #if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
 170:/usr/include/string.h **** /* Duplicate S, returning an identical malloc'd string.  */
 171:/usr/include/string.h **** extern char *strdup (const char *__s)
 172:/usr/include/string.h ****      __THROW __attribute_malloc__ __nonnull ((1));
 173:/usr/include/string.h **** #endif
 174:/usr/include/string.h **** 
 175:/usr/include/string.h **** /* Return a malloc'd copy of at most N bytes of STRING.  The
 176:/usr/include/string.h ****    resultant string is terminated even if no null terminator
 177:/usr/include/string.h ****    appears before STRING[N].  */
 178:/usr/include/string.h **** #if defined __USE_XOPEN2K8
 179:/usr/include/string.h **** extern char *strndup (const char *__string, size_t __n)
 180:/usr/include/string.h ****      __THROW __attribute_malloc__ __nonnull ((1));
 181:/usr/include/string.h **** #endif
 182:/usr/include/string.h **** 
 183:/usr/include/string.h **** #if defined __USE_GNU && defined __GNUC__
 184:/usr/include/string.h **** /* Duplicate S, returning an identical alloca'd string.  */
 185:/usr/include/string.h **** # define strdupa(s)							      \
 186:/usr/include/string.h ****   (__extension__							      \
 187:/usr/include/string.h ****     ({									      \
 188:/usr/include/string.h ****       const char *__old = (s);						      \
 189:/usr/include/string.h ****       size_t __len = strlen (__old) + 1;				      \
 190:/usr/include/string.h ****       char *__new = (char *) __builtin_alloca (__len);			      \
 191:/usr/include/string.h ****       (char *) memcpy (__new, __old, __len);				      \
 192:/usr/include/string.h ****     }))
 193:/usr/include/string.h **** 
 194:/usr/include/string.h **** /* Return an alloca'd copy of at most N bytes of string.  */
 195:/usr/include/string.h **** # define strndupa(s, n)							      \
 196:/usr/include/string.h ****   (__extension__							      \
 197:/usr/include/string.h ****     ({									      \
 198:/usr/include/string.h ****       const char *__old = (s);						      \
 199:/usr/include/string.h ****       size_t __len = strnlen (__old, (n));				      \
 200:/usr/include/string.h ****       char *__new = (char *) __builtin_alloca (__len + 1);		      \
 201:/usr/include/string.h ****       __new[__len] = '\0';						      \
 202:/usr/include/string.h ****       (char *) memcpy (__new, __old, __len);				      \
 203:/usr/include/string.h ****     }))
 204:/usr/include/string.h **** #endif
 205:/usr/include/string.h **** 
 206:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 207:/usr/include/string.h **** /* Find the first occurrence of C in S.  */
 208:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 209:/usr/include/string.h **** extern "C++"
 210:/usr/include/string.h **** {
 211:/usr/include/string.h **** extern char *strchr (char *__s, int __c)
 212:/usr/include/string.h ****      __THROW __asm ("strchr") __attribute_pure__ __nonnull ((1));
 213:/usr/include/string.h **** extern const char *strchr (const char *__s, int __c)
 214:/usr/include/string.h ****      __THROW __asm ("strchr") __attribute_pure__ __nonnull ((1));
 215:/usr/include/string.h **** 
 216:/usr/include/string.h **** # ifdef __OPTIMIZE__
 217:/usr/include/string.h **** __extern_always_inline char *
 218:/usr/include/string.h **** strchr (char *__s, int __c) __THROW
 219:/usr/include/string.h **** {
 220:/usr/include/string.h ****   return __builtin_strchr (__s, __c);
 221:/usr/include/string.h **** }
 222:/usr/include/string.h **** 
 223:/usr/include/string.h **** __extern_always_inline const char *
 224:/usr/include/string.h **** strchr (const char *__s, int __c) __THROW
 225:/usr/include/string.h **** {
 226:/usr/include/string.h ****   return __builtin_strchr (__s, __c);
 227:/usr/include/string.h **** }
 228:/usr/include/string.h **** # endif
 229:/usr/include/string.h **** }
 230:/usr/include/string.h **** #else
 231:/usr/include/string.h **** extern char *strchr (const char *__s, int __c)
 232:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 233:/usr/include/string.h **** #endif
 234:/usr/include/string.h **** /* Find the last occurrence of C in S.  */
 235:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 236:/usr/include/string.h **** extern "C++"
 237:/usr/include/string.h **** {
 238:/usr/include/string.h **** extern char *strrchr (char *__s, int __c)
 239:/usr/include/string.h ****      __THROW __asm ("strrchr") __attribute_pure__ __nonnull ((1));
 240:/usr/include/string.h **** extern const char *strrchr (const char *__s, int __c)
 241:/usr/include/string.h ****      __THROW __asm ("strrchr") __attribute_pure__ __nonnull ((1));
 242:/usr/include/string.h **** 
 243:/usr/include/string.h **** # ifdef __OPTIMIZE__
 244:/usr/include/string.h **** __extern_always_inline char *
 245:/usr/include/string.h **** strrchr (char *__s, int __c) __THROW
 246:/usr/include/string.h **** {
 247:/usr/include/string.h ****   return __builtin_strrchr (__s, __c);
 248:/usr/include/string.h **** }
 249:/usr/include/string.h **** 
 250:/usr/include/string.h **** __extern_always_inline const char *
 251:/usr/include/string.h **** strrchr (const char *__s, int __c) __THROW
 252:/usr/include/string.h **** {
 253:/usr/include/string.h ****   return __builtin_strrchr (__s, __c);
 254:/usr/include/string.h **** }
 255:/usr/include/string.h **** # endif
 256:/usr/include/string.h **** }
 257:/usr/include/string.h **** #else
 258:/usr/include/string.h **** extern char *strrchr (const char *__s, int __c)
 259:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 260:/usr/include/string.h **** #endif
 261:/usr/include/string.h **** __END_NAMESPACE_STD
 262:/usr/include/string.h **** 
 263:/usr/include/string.h **** #ifdef __USE_GNU
 264:/usr/include/string.h **** /* This function is similar to `strchr'.  But it returns a pointer to
 265:/usr/include/string.h ****    the closing NUL byte in case C is not found in S.  */
 266:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 267:/usr/include/string.h **** extern "C++" char *strchrnul (char *__s, int __c)
 268:/usr/include/string.h ****      __THROW __asm ("strchrnul") __attribute_pure__ __nonnull ((1));
 269:/usr/include/string.h **** extern "C++" const char *strchrnul (const char *__s, int __c)
 270:/usr/include/string.h ****      __THROW __asm ("strchrnul") __attribute_pure__ __nonnull ((1));
 271:/usr/include/string.h **** # else
 272:/usr/include/string.h **** extern char *strchrnul (const char *__s, int __c)
 273:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 274:/usr/include/string.h **** # endif
 275:/usr/include/string.h **** #endif
 276:/usr/include/string.h **** 
 277:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 278:/usr/include/string.h **** /* Return the length of the initial segment of S which
 279:/usr/include/string.h ****    consists entirely of characters not in REJECT.  */
 280:/usr/include/string.h **** extern size_t strcspn (const char *__s, const char *__reject)
 281:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 282:/usr/include/string.h **** /* Return the length of the initial segment of S which
 283:/usr/include/string.h ****    consists entirely of characters in ACCEPT.  */
 284:/usr/include/string.h **** extern size_t strspn (const char *__s, const char *__accept)
 285:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 286:/usr/include/string.h **** /* Find the first occurrence in S of any character in ACCEPT.  */
 287:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 288:/usr/include/string.h **** extern "C++"
 289:/usr/include/string.h **** {
 290:/usr/include/string.h **** extern char *strpbrk (char *__s, const char *__accept)
 291:/usr/include/string.h ****      __THROW __asm ("strpbrk") __attribute_pure__ __nonnull ((1, 2));
 292:/usr/include/string.h **** extern const char *strpbrk (const char *__s, const char *__accept)
 293:/usr/include/string.h ****      __THROW __asm ("strpbrk") __attribute_pure__ __nonnull ((1, 2));
 294:/usr/include/string.h **** 
 295:/usr/include/string.h **** # ifdef __OPTIMIZE__
 296:/usr/include/string.h **** __extern_always_inline char *
 297:/usr/include/string.h **** strpbrk (char *__s, const char *__accept) __THROW
 298:/usr/include/string.h **** {
 299:/usr/include/string.h ****   return __builtin_strpbrk (__s, __accept);
 300:/usr/include/string.h **** }
 301:/usr/include/string.h **** 
 302:/usr/include/string.h **** __extern_always_inline const char *
 303:/usr/include/string.h **** strpbrk (const char *__s, const char *__accept) __THROW
 304:/usr/include/string.h **** {
 305:/usr/include/string.h ****   return __builtin_strpbrk (__s, __accept);
 306:/usr/include/string.h **** }
 307:/usr/include/string.h **** # endif
 308:/usr/include/string.h **** }
 309:/usr/include/string.h **** #else
 310:/usr/include/string.h **** extern char *strpbrk (const char *__s, const char *__accept)
 311:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 312:/usr/include/string.h **** #endif
 313:/usr/include/string.h **** /* Find the first occurrence of NEEDLE in HAYSTACK.  */
 314:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 315:/usr/include/string.h **** extern "C++"
 316:/usr/include/string.h **** {
 317:/usr/include/string.h **** extern char *strstr (char *__haystack, const char *__needle)
 318:/usr/include/string.h ****      __THROW __asm ("strstr") __attribute_pure__ __nonnull ((1, 2));
 319:/usr/include/string.h **** extern const char *strstr (const char *__haystack, const char *__needle)
 320:/usr/include/string.h ****      __THROW __asm ("strstr") __attribute_pure__ __nonnull ((1, 2));
 321:/usr/include/string.h **** 
 322:/usr/include/string.h **** # ifdef __OPTIMIZE__
 323:/usr/include/string.h **** __extern_always_inline char *
 324:/usr/include/string.h **** strstr (char *__haystack, const char *__needle) __THROW
 325:/usr/include/string.h **** {
 326:/usr/include/string.h ****   return __builtin_strstr (__haystack, __needle);
 327:/usr/include/string.h **** }
 328:/usr/include/string.h **** 
 329:/usr/include/string.h **** __extern_always_inline const char *
 330:/usr/include/string.h **** strstr (const char *__haystack, const char *__needle) __THROW
 331:/usr/include/string.h **** {
 332:/usr/include/string.h ****   return __builtin_strstr (__haystack, __needle);
 2110              		.loc 7 332 0 is_stmt 1
 2111 0799 BE000000 		movl	$.LC24, %esi
 2111      00
 2112 079e E8000000 		call	strstr
 2112      00
 2113              	.LVL269:
 2114              	.LBE479:
 2115              	.LBE478:
 2116              		.loc 1 462 0
 2117 07a3 4885C0   		testq	%rax, %rax
 2118              	.LBB481:
 2119              	.LBB480:
 2120              		.loc 7 332 0
 2121 07a6 4889C5   		movq	%rax, %rbp
 2122              	.LVL270:
 2123              	.LBE480:
 2124              	.LBE481:
 2125              		.loc 1 462 0
 2126 07a9 0F84C102 		je	.L219
 2126      0000
 2127              		.loc 1 465 0
 2128 07af 80780223 		cmpb	$35, 2(%rax)
 2129 07b3 0F84C702 		je	.L230
 2129      0000
 2130              		.loc 1 518 0
 2131 07b9 4883C502 		addq	$2, %rbp
 2132 07bd BA050000 		movl	$5, %edx
 2132      00
 2133 07c2 BE000000 		movl	$.LC25, %esi
 2133      00
 2134 07c7 4889EF   		movq	%rbp, %rdi
 2135 07ca E8000000 		call	strncasecmp
 2135      00
 2136              	.LVL271:
 2137 07cf 85C0     		testl	%eax, %eax
 2138 07d1 7485     		je	.L231
 2139              		.loc 1 519 0
 2140 07d3 BA050000 		movl	$5, %edx
 2140      00
 2141 07d8 BE000000 		movl	$.LC26, %esi
 2141      00
 2142 07dd 4889EF   		movq	%rbp, %rdi
 2143 07e0 E8000000 		call	strncasecmp
 2143      00
 2144              	.LVL272:
 2145 07e5 85C0     		testl	%eax, %eax
 2146 07e7 0F848302 		je	.L219
 2146      0000
 2147              		.loc 1 520 0
 2148 07ed BA040000 		movl	$4, %edx
 2148      00
 2149 07f2 BE000000 		movl	$.LC27, %esi
 2149      00
 2150 07f7 4889EF   		movq	%rbp, %rdi
 2151 07fa E8000000 		call	strncasecmp
 2151      00
 2152              	.LVL273:
 2153 07ff 85C0     		testl	%eax, %eax
 2154 0801 0F85DC03 		jne	.L139
 2154      0000
 2155              		.loc 1 454 0
 2156 0807 4183C501 		addl	$1, %r13d
 2157              	.LVL274:
 2158 080b 4983C708 		addq	$8, %r15
 2159              	.LVL275:
 2160 080f 44396C24 		cmpl	%r13d, 72(%rsp)
 2160      48
 2161              		.loc 1 521 0
 2162 0814 4963C6   		movslq	%r14d, %rax
 2163              		.loc 1 522 0
 2164 0817 44897424 		movl	%r14d, 16(%rsp)
 2164      10
 2165              	.LVL276:
 2166              		.loc 1 521 0
 2167 081c 41C70484 		movl	$56, (%r12,%rax,4)
 2167      38000000 
 2168              	.LVL277:
 2169              		.loc 1 454 0
 2170 0824 0F8F4CFF 		jg	.L232
 2170      FFFF
 2171              	.LVL278:
 2172              	.L212:
 2173 082a 4C897C24 		movq	%r15, 48(%rsp)
 2173      30
 2174 082f 488B5C24 		movq	8(%rsp), %rbx
 2174      08
 2175 0834 4C8B3C24 		movq	(%rsp), %r15
 2176              	.LVL279:
 2177              	.L118:
 2178              	.LBE499:
 2179              		.loc 1 529 0
 2180 0838 418B4F0C 		movl	12(%r15), %ecx
 2181 083c C7042400 		movl	$0, (%rsp)
 2181      000000
 2182 0843 C7442438 		movl	$1, 56(%rsp)
 2182      01000000 
 2183 084b 85C9     		testl	%ecx, %ecx
 2184 084d 0F8E29FE 		jle	.L148
 2184      FFFF
 2185              	.LVL280:
 2186              		.p2align 4,,10
 2187 0853 0F1F4400 		.p2align 3
 2187      00
 2188              	.L186:
 2189              		.loc 1 530 0
 2190 0858 488B4424 		movq	48(%rsp), %rax
 2190      30
 2191              		.loc 1 534 0
 2192 085d 418B5708 		movl	8(%r15), %edx
 2193              		.loc 1 530 0
 2194 0861 4C8B08   		movq	(%rax), %r9
 2195              	.LVL281:
 2196 0864 8B442438 		movl	56(%rsp), %eax
 2197              		.loc 1 534 0
 2198 0868 85D2     		testl	%edx, %edx
 2199 086a 8944243C 		movl	%eax, 60(%rsp)
 2200 086e 8B0424   		movl	(%rsp), %eax
 2201 0871 0F8E3203 		jle	.L233
 2201      0000
 2202 0877 05282300 		addl	$9000, %eax
 2202      00
 2203 087c 4531F6   		xorl	%r14d, %r14d
 2204 087f 4531E4   		xorl	%r12d, %r12d
 2205 0882 89442408 		movl	%eax, 8(%rsp)
 2206 0886 4489F1   		movl	%r14d, %ecx
 2207 0889 48634424 		movslq	16(%rsp), %rax
 2207      10
 2208 088e 4D89CE   		movq	%r9, %r14
 2209 0891 E9A40100 		jmp	.L146
 2209      00
 2210              	.LVL282:
 2211 0896 662E0F1F 		.p2align 4,,10
 2211      84000000 
 2211      0000
 2212              		.p2align 3
 2213              	.L236:
 2214 08a0 894C2418 		movl	%ecx, 24(%rsp)
 2215              		.loc 1 541 0
 2216 08a4 488B4C24 		movq	40(%rsp), %rcx
 2216      28
 2217              	.LVL283:
 2218              	.LBB500:
 2219              	.LBB501:
  90:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
 2220              		.loc 3 90 0
 2221 08a9 BE010000 		movl	$1, %esi
 2221      00
 2222 08ae 4889DF   		movq	%rbx, %rdi
 2223              	.LBE501:
 2224              	.LBE500:
 2225              		.loc 1 541 0
 2226 08b1 448B2C81 		movl	(%rcx,%rax,4), %r13d
 2227              	.LVL284:
 2228              	.LBB503:
 2229              	.LBB502:
  90:fltk-1.3.4-1/FL/Fl_File_Icon.H **** 
 2230              		.loc 3 90 0
 2231 08b5 E8000000 		call	_ZN12Fl_File_Icon3addEs
 2231      00
 2232              	.LVL285:
 2233 08ba 4889DF   		movq	%rbx, %rdi
 2234 08bd 4489EE   		movl	%r13d, %esi
 2235 08c0 C1FE10   		sarl	$16, %esi
 2236 08c3 E8000000 		call	_ZN12Fl_File_Icon3addEs
 2236      00
 2237              	.LVL286:
 2238 08c8 410FBFF5 		movswl	%r13w, %esi
 2239 08cc 4889DF   		movq	%rbx, %rdi
 2240 08cf E8000000 		call	_ZN12Fl_File_Icon3addEs
 2240      00
 2241              	.LVL287:
 2242              	.LBE502:
 2243              	.LBE503:
 2244              		.loc 1 542 0
 2245 08d4 BE040000 		movl	$4, %esi
 2245      00
 2246 08d9 4889DF   		movq	%rbx, %rdi
 2247 08dc E8000000 		call	_ZN12Fl_File_Icon3addEs
 2247      00
 2248              	.LVL288:
 2249              		.loc 1 543 0
 2250 08e1 8B0424   		movl	(%rsp), %eax
 2251 08e4 B91C2500 		movl	$9500, %ecx
 2251      00
 2252              	.LBB504:
 2253              	.LBB505:
 2254              		.loc 3 99 0
 2255 08e9 BE060000 		movl	$6, %esi
 2255      00
 2256              	.LBE505:
 2257              	.LBE504:
 2258              		.loc 1 543 0
 2259 08ee 4569C428 		imull	$9000, %r12d, %r8d
 2259      230000
 2260              	.LVL289:
 2261              	.LBB508:
 2262              	.LBB506:
 2263              		.loc 3 99 0
 2264 08f5 4889DF   		movq	%rbx, %rdi
 2265              	.LBE506:
 2266              	.LBE508:
 2267              		.loc 1 544 0
 2268 08f8 41BC1C25 		movl	$9500, %r12d
 2268      0000
 2269              	.LVL290:
 2270              		.loc 1 543 0
 2271 08fe 99       		cltd
 2272 08ff 41F77F0C 		idivl	12(%r15)
 2273 0903 44894424 		movl	%r8d, 32(%rsp)
 2273      20
 2274 0908 29C1     		subl	%eax, %ecx
 2275 090a 4489C0   		movl	%r8d, %eax
 2276 090d 99       		cltd
 2277 090e 894C2414 		movl	%ecx, 20(%rsp)
 2278 0912 41F77F08 		idivl	8(%r15)
 2279 0916 448DA8E8 		leal	1000(%rax), %r13d
 2279      030000
 2280              	.LVL291:
 2281              	.LBB509:
 2282              	.LBB507:
 2283              		.loc 3 99 0
 2284 091d E8000000 		call	_ZN12Fl_File_Icon3addEs
 2284      00
 2285              	.LVL292:
 2286 0922 410FBFF5 		movswl	%r13w, %esi
 2287 0926 4889DF   		movq	%rbx, %rdi
 2288 0929 E8000000 		call	_ZN12Fl_File_Icon3addEs
 2288      00
 2289              	.LVL293:
 2290 092e 0FBF7424 		movswl	20(%rsp), %esi
 2290      14
 2291 0933 4889DF   		movq	%rbx, %rdi
 2292 0936 E8000000 		call	_ZN12Fl_File_Icon3addEs
 2292      00
 2293              	.LVL294:
 2294              	.LBE507:
 2295              	.LBE509:
 2296              		.loc 1 544 0
 2297 093b 8B0424   		movl	(%rsp), %eax
 2298 093e 8B4C2418 		movl	24(%rsp), %ecx
 2299              	.LBB510:
 2300              	.LBB511:
 2301              		.loc 3 99 0
 2302 0942 BE060000 		movl	$6, %esi
 2302      00
 2303 0947 4889DF   		movq	%rbx, %rdi
 2304              	.LBE511:
 2305              	.LBE510:
 2306              		.loc 1 544 0
 2307 094a 99       		cltd
 2308 094b 41F77F0C 		idivl	12(%r15)
 2309 094f 4469E928 		imull	$9000, %ecx, %r13d
 2309      230000
 2310              	.LVL295:
 2311 0956 4129C4   		subl	%eax, %r12d
 2312              	.LVL296:
 2313 0959 4489E8   		movl	%r13d, %eax
 2314 095c 99       		cltd
 2315 095d 41F77F08 		idivl	8(%r15)
 2316 0961 05E80300 		addl	$1000, %eax
 2316      00
 2317 0966 89442414 		movl	%eax, 20(%rsp)
 2318              	.LVL297:
 2319              	.LBB514:
 2320              	.LBB512:
 2321              		.loc 3 99 0
 2322 096a E8000000 		call	_ZN12Fl_File_Icon3addEs
 2322      00
 2323              	.LVL298:
 2324 096f 0FBF7424 		movswl	20(%rsp), %esi
 2324      14
 2325 0974 4889DF   		movq	%rbx, %rdi
 2326 0977 E8000000 		call	_ZN12Fl_File_Icon3addEs
 2326      00
 2327              	.LVL299:
 2328 097c 410FBFF4 		movswl	%r12w, %esi
 2329 0980 4889DF   		movq	%rbx, %rdi
 2330              	.LBE512:
 2331              	.LBE514:
 2332              		.loc 1 545 0
 2333 0983 41BC1C25 		movl	$9500, %r12d
 2333      0000
 2334              	.LVL300:
 2335              	.LBB515:
 2336              	.LBB513:
 2337              		.loc 3 99 0
 2338 0989 E8000000 		call	_ZN12Fl_File_Icon3addEs
 2338      00
 2339              	.LVL301:
 2340              	.LBE513:
 2341              	.LBE515:
 2342              		.loc 1 545 0
 2343 098e 8B442408 		movl	8(%rsp), %eax
 2344              	.LBB516:
 2345              	.LBB517:
 2346              		.loc 3 99 0
 2347 0992 BE060000 		movl	$6, %esi
 2347      00
 2348 0997 4889DF   		movq	%rbx, %rdi
 2349              	.LBE517:
 2350              	.LBE516:
 2351              		.loc 1 545 0
 2352 099a 99       		cltd
 2353 099b 41F77F0C 		idivl	12(%r15)
 2354 099f 4129C4   		subl	%eax, %r12d
 2355              	.LVL302:
 2356 09a2 4489E8   		movl	%r13d, %eax
 2357 09a5 99       		cltd
 2358 09a6 41F77F08 		idivl	8(%r15)
 2359 09aa 448DA8E8 		leal	1000(%rax), %r13d
 2359      030000
 2360              	.LVL303:
 2361              	.LBB520:
 2362              	.LBB518:
 2363              		.loc 3 99 0
 2364 09b1 E8000000 		call	_ZN12Fl_File_Icon3addEs
 2364      00
 2365              	.LVL304:
 2366 09b6 410FBFF5 		movswl	%r13w, %esi
 2367 09ba 4889DF   		movq	%rbx, %rdi
 2368              	.LBE518:
 2369              	.LBE520:
 2370              		.loc 1 546 0
 2371 09bd 41BD1C25 		movl	$9500, %r13d
 2371      0000
 2372              	.LVL305:
 2373              	.LBB521:
 2374              	.LBB519:
 2375              		.loc 3 99 0
 2376 09c3 E8000000 		call	_ZN12Fl_File_Icon3addEs
 2376      00
 2377              	.LVL306:
 2378 09c8 410FBFF4 		movswl	%r12w, %esi
 2379 09cc 4889DF   		movq	%rbx, %rdi
 2380 09cf E8000000 		call	_ZN12Fl_File_Icon3addEs
 2380      00
 2381              	.LVL307:
 2382              	.LBE519:
 2383              	.LBE521:
 2384              		.loc 1 546 0
 2385 09d4 8B442408 		movl	8(%rsp), %eax
 2386 09d8 448B4424 		movl	32(%rsp), %r8d
 2386      20
 2387              	.LBB522:
 2388              	.LBB523:
 2389              		.loc 3 99 0
 2390 09dd BE060000 		movl	$6, %esi
 2390      00
 2391 09e2 4889DF   		movq	%rbx, %rdi
 2392              	.LBE523:
 2393              	.LBE522:
 2394              		.loc 1 546 0
 2395 09e5 99       		cltd
 2396 09e6 41F77F0C 		idivl	12(%r15)
 2397 09ea 4129C5   		subl	%eax, %r13d
 2398              	.LVL308:
 2399 09ed 4489C0   		movl	%r8d, %eax
 2400 09f0 99       		cltd
 2401 09f1 41F77F08 		idivl	8(%r15)
 2402 09f5 448DA0E8 		leal	1000(%rax), %r12d
 2402      030000
 2403              	.LVL309:
 2404              	.LBB525:
 2405              	.LBB524:
 2406              		.loc 3 99 0
 2407 09fc E8000000 		call	_ZN12Fl_File_Icon3addEs
 2407      00
 2408              	.LVL310:
 2409 0a01 410FBFF4 		movswl	%r12w, %esi
 2410 0a05 4889DF   		movq	%rbx, %rdi
 2411 0a08 E8000000 		call	_ZN12Fl_File_Icon3addEs
 2411      00
 2412              	.LVL311:
 2413 0a0d 410FBFF5 		movswl	%r13w, %esi
 2414 0a11 4889DF   		movq	%rbx, %rdi
 2415 0a14 E8000000 		call	_ZN12Fl_File_Icon3addEs
 2415      00
 2416              	.LVL312:
 2417              	.LBE524:
 2418              	.LBE525:
 2419              		.loc 1 547 0
 2420 0a19 31F6     		xorl	%esi, %esi
 2421 0a1b 4889DF   		movq	%rbx, %rdi
 2422 0a1e E8000000 		call	_ZN12Fl_File_Icon3addEs
 2422      00
 2423              	.LVL313:
 2424 0a23 8B4C2418 		movl	24(%rsp), %ecx
 2425 0a27 4189CC   		movl	%ecx, %r12d
 2426              	.LVL314:
 2427              	.L145:
 2428              		.loc 1 534 0 discriminator 2
 2429 0a2a 83C101   		addl	$1, %ecx
 2430              	.LVL315:
 2431 0a2d 413B4F08 		cmpl	8(%r15), %ecx
 2432 0a31 0F8DA9FA 		jge	.L234
 2432      FFFF
 2433 0a37 4863C5   		movslq	%ebp, %rax
 2434              	.LVL316:
 2435              	.L146:
 2436              		.loc 1 537 0
 2437 0a3a 837C244C 		cmpl	$1, 76(%rsp)
 2437      01
 2438              		.loc 1 535 0
 2439 0a3f 410FBE2E 		movsbl	(%r14), %ebp
 2440              	.LVL317:
 2441              		.loc 1 537 0
 2442 0a43 0F8E5701 		jle	.L235
 2442      0000
 2443              	.LVL318:
 2444              		.loc 1 537 0 is_stmt 0 discriminator 1
 2445 0a49 410FBE56 		movsbl	1(%r14), %edx
 2445      01
 2446 0a4e C1E508   		sall	$8, %ebp
 2447              	.LVL319:
 2448 0a51 4983C602 		addq	$2, %r14
 2449              	.LVL320:
 2450 0a55 09D5     		orl	%edx, %ebp
 2451              	.LVL321:
 2452              	.L144:
 2453              		.loc 1 539 0 is_stmt 1
 2454 0a57 39C5     		cmpl	%eax, %ebp
 2455 0a59 74CF     		je	.L145
 2456              		.loc 1 540 0
 2457 0a5b 39442410 		cmpl	%eax, 16(%rsp)
 2458 0a5f 0F853BFE 		jne	.L236
 2458      FFFF
 2459 0a65 4189CC   		movl	%ecx, %r12d
 2460              	.LVL322:
 2461 0a68 EBC0     		jmp	.L145
 2462              	.LVL323:
 2463 0a6a 660F1F44 		.p2align 4,,10
 2463      0000
 2464              		.p2align 3
 2465              	.L219:
 2466              	.LBB526:
 2467              		.loc 1 519 0 discriminator 1
 2468 0a70 4D63F6   		movslq	%r14d, %r14
 2469 0a73 43C704B4 		movl	$56, (%r12,%r14,4)
 2469      38000000 
 2470              	.LVL324:
 2471 0a7b E9E3FCFF 		jmp	.L125
 2471      FF
 2472              	.LVL325:
 2473              		.p2align 4,,10
 2474              		.p2align 3
 2475              	.L230:
 2476 0a80 E8000000 		call	__ctype_b_loc
 2476      00
 2477              	.LVL326:
 2478 0a85 488B08   		movq	(%rax), %rcx
 2479              		.loc 1 467 0
 2480 0a88 31C0     		xorl	%eax, %eax
 2481              	.LVL327:
 2482 0a8a 660F1F44 		.p2align 4,,10
 2482      0000
 2483              		.p2align 3
 2484              	.L129:
 2485              	.LBB482:
 2486              	.LBB483:
 191:/usr/include/ctype.h **** __isctype_f (upper)
 192:/usr/include/ctype.h **** __isctype_f (xdigit)
 2487              		.loc 2 192 0
 2488 0a90 480FBE54 		movsbq	3(%rbp,%rax), %rdx
 2488      0503
 2489 0a96 89C6     		movl	%eax, %esi
 2490              	.LVL328:
 2491              	.LBE483:
 2492              	.LBE482:
 2493              		.loc 1 469 0
 2494 0a98 F6445101 		testb	$16, 1(%rcx,%rdx,2)
 2494      10
 2495 0a9d 0F841401 		je	.L127
 2495      0000
 2496              	.LVL329:
 2497 0aa3 4883C001 		addq	$1, %rax
 2498              	.LVL330:
 2499              		.loc 1 468 0 discriminator 2
 2500 0aa7 4883F80C 		cmpq	$12, %rax
 2501 0aab 75E3     		jne	.L129
 2502 0aad 41BB0900 		movl	$9, %r11d
 2502      0000
 2503 0ab3 41B80800 		movl	$8, %r8d
 2503      0000
 2504 0ab9 BB050000 		movl	$5, %ebx
 2504      00
 2505 0abe 41B90400 		movl	$4, %r9d
 2505      0000
 2506              	.LVL331:
 2507              	.L128:
 2508              		.loc 1 498 0
 2509 0ac4 0FB64503 		movzbl	3(%rbp), %eax
 2510              		.loc 1 501 0
 2511 0ac8 488D7C24 		leaq	80(%rsp), %rdi
 2511      50
 2512 0acd BA100000 		movl	$16, %edx
 2512      00
 2513 0ad2 31F6     		xorl	%esi, %esi
 2514 0ad4 4C895C24 		movq	%r11, 48(%rsp)
 2514      30
 2515 0ad9 4C894424 		movq	%r8, 32(%rsp)
 2515      20
 2516 0ade 4C894C24 		movq	%r9, 24(%rsp)
 2516      18
 2517              		.loc 1 498 0
 2518 0ae3 88442450 		movb	%al, 80(%rsp)
 2519              		.loc 1 499 0
 2520 0ae7 0FB64504 		movzbl	4(%rbp), %eax
 2521              		.loc 1 500 0
 2522 0aeb C6442452 		movb	$0, 82(%rsp)
 2522      00
 2523              		.loc 1 499 0
 2524 0af0 88442451 		movb	%al, 81(%rsp)
 2525              		.loc 1 501 0
 2526 0af4 E8000000 		call	strtol
 2526      00
 2527              	.LVL332:
 2528              		.loc 1 503 0
 2529 0af9 4C8B4C24 		movq	24(%rsp), %r9
 2529      18
 2530              		.loc 1 501 0
 2531 0afe 89442414 		movl	%eax, 20(%rsp)
 2532              	.LVL333:
 2533              		.loc 1 506 0
 2534 0b02 488D7C24 		leaq	80(%rsp), %rdi
 2534      50
 2535 0b07 BA100000 		movl	$16, %edx
 2535      00
 2536 0b0c 31F6     		xorl	%esi, %esi
 2537              		.loc 1 503 0
 2538 0b0e 420FB644 		movzbl	3(%rbp,%r9), %eax
 2538      0D03
 2539              	.LVL334:
 2540 0b14 88442450 		movb	%al, 80(%rsp)
 2541              		.loc 1 504 0
 2542 0b18 0FB6441D 		movzbl	3(%rbp,%rbx), %eax
 2542      03
 2543              		.loc 1 505 0
 2544 0b1d C6442452 		movb	$0, 82(%rsp)
 2544      00
 2545              		.loc 1 504 0
 2546 0b22 88442451 		movb	%al, 81(%rsp)
 2547              		.loc 1 506 0
 2548 0b26 E8000000 		call	strtol
 2548      00
 2549              	.LVL335:
 2550              		.loc 1 508 0
 2551 0b2b 4C8B4424 		movq	32(%rsp), %r8
 2551      20
 2552              		.loc 1 506 0
 2553 0b30 89C3     		movl	%eax, %ebx
 2554              	.LVL336:
 2555              		.loc 1 509 0
 2556 0b32 4C8B5C24 		movq	48(%rsp), %r11
 2556      30
 2557              		.loc 1 511 0
 2558 0b37 488D7C24 		leaq	80(%rsp), %rdi
 2558      50
 2559 0b3c BA100000 		movl	$16, %edx
 2559      00
 2560 0b41 31F6     		xorl	%esi, %esi
 2561              		.loc 1 508 0
 2562 0b43 420FB644 		movzbl	3(%rbp,%r8), %eax
 2562      0503
 2563              	.LVL337:
 2564 0b49 88442450 		movb	%al, 80(%rsp)
 2565              		.loc 1 509 0
 2566 0b4d 420FB644 		movzbl	3(%rbp,%r11), %eax
 2566      1D03
 2567              		.loc 1 510 0
 2568 0b53 C6442452 		movb	$0, 82(%rsp)
 2568      00
 2569              		.loc 1 509 0
 2570 0b58 88442451 		movb	%al, 81(%rsp)
 2571              		.loc 1 511 0
 2572 0b5c E8000000 		call	strtol
 2572      00
 2573              	.LVL338:
 2574 0b61 8B4C2414 		movl	20(%rsp), %ecx
 2575              	.LVL339:
 2576              	.L135:
 2577              	.LBB484:
 2578              	.LBB485:
 998:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((r << 8) | g) << 8) | b) << 8);
 2579              		.loc 5 998 0
 2580 0b65 89CF     		movl	%ecx, %edi
 2581              	.LBE485:
 2582              	.LBE484:
 2583              		.loc 1 515 0
 2584 0b67 4D63F6   		movslq	%r14d, %r14
 2585              	.LBB489:
 2586              	.LBB486:
 998:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((r << 8) | g) << 8) | b) << 8);
 2587              		.loc 5 998 0
 2588 0b6a BA380000 		movl	$56, %edx
 2588      00
 2589 0b6f 09DF     		orl	%ebx, %edi
 2590              	.LBE486:
 2591              	.LBE489:
 2592              		.loc 1 515 0
 2593 0b71 4B8D34B4 		leaq	(%r12,%r14,4), %rsi
 2594              	.LVL340:
 2595              	.LBB490:
 2596              	.LBB487:
 998:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((r << 8) | g) << 8) | b) << 8);
 2597              		.loc 5 998 0
 2598 0b75 4008C7   		orb	%al, %dil
 2599 0b78 7418     		je	.L136
 2600              		.loc 5 999 0
 2601 0b7a 0FB6D1   		movzbl	%cl, %edx
 2602 0b7d 440FB6CB 		movzbl	%bl, %r9d
 2603 0b81 0FB6C0   		movzbl	%al, %eax
 2604              	.LVL341:
 2605 0b84 C1E208   		sall	$8, %edx
 2606 0b87 4409CA   		orl	%r9d, %edx
 2607 0b8a C1E208   		sall	$8, %edx
 2608 0b8d 09C2     		orl	%eax, %edx
 2609 0b8f C1E208   		sall	$8, %edx
 2610              	.LVL342:
 2611              	.L136:
 2612              	.LBE487:
 2613              	.LBE490:
 2614              		.loc 1 515 0
 2615 0b92 8916     		movl	%edx, (%rsi)
 2616 0b94 E9CAFBFF 		jmp	.L125
 2616      FF
 2617              	.LVL343:
 2618 0b99 0F1F8000 		.p2align 4,,10
 2618      000000
 2619              		.p2align 3
 2620              	.L235:
 2621              	.LBE526:
 2622              		.loc 1 535 0
 2623 0ba0 4983C601 		addq	$1, %r14
 2624              	.LVL344:
 2625 0ba4 E9AEFEFF 		jmp	.L144
 2625      FF
 2626              	.LVL345:
 2627              	.L233:
 2628 0ba9 05282300 		addl	$9000, %eax
 2628      00
 2629 0bae 89442408 		movl	%eax, 8(%rsp)
 2630 0bb2 E9A5FAFF 		jmp	.L142
 2630      FF
 2631              	.LVL346:
 2632              	.L127:
 2633              	.LBB527:
 2634              		.loc 1 472 0
 2635 0bb7 83F803   		cmpl	$3, %eax
 2636 0bba 7437     		je	.L131
 2637 0bbc 0F8FB100 		jg	.L132
 2637      0000
 2638              		.loc 1 474 0
 2639 0bc2 85C0     		testl	%eax, %eax
 2640 0bc4 8B442410 		movl	16(%rsp), %eax
 2641              	.LVL347:
 2642 0bc8 410F44C6 		cmove	%r14d, %eax
 2643 0bcc 89442410 		movl	%eax, 16(%rsp)
 2644              	.LVL348:
 2645              	.L133:
 2646              		.loc 1 515 0
 2647 0bd0 4D63F6   		movslq	%r14d, %r14
 2648              	.LBB491:
 2649              	.LBB488:
 998:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((r << 8) | g) << 8) | b) << 8);
 2650              		.loc 5 998 0
 2651 0bd3 BA380000 		movl	$56, %edx
 2651      00
 2652              	.LBE488:
 2653              	.LBE491:
 2654              		.loc 1 515 0
 2655 0bd8 4B8D34B4 		leaq	(%r12,%r14,4), %rsi
 2656              	.LVL349:
 2657 0bdc 8916     		movl	%edx, (%rsi)
 2658 0bde E980FBFF 		jmp	.L125
 2658      FF
 2659              	.LVL350:
 2660              	.L139:
 2661              		.loc 1 523 0
 2662 0be3 4D63F6   		movslq	%r14d, %r14
 2663 0be6 43C704B4 		movl	$49, (%r12,%r14,4)
 2663      31000000 
 2664 0bee E970FBFF 		jmp	.L125
 2664      FF
 2665              	.LVL351:
 2666              	.L131:
 2667              		.loc 1 480 0
 2668 0bf3 0FB64503 		movzbl	3(%rbp), %eax
 2669              	.LVL352:
 2670              		.loc 1 482 0
 2671 0bf7 488D7C24 		leaq	80(%rsp), %rdi
 2671      50
 2672 0bfc BA100000 		movl	$16, %edx
 2672      00
 2673 0c01 31F6     		xorl	%esi, %esi
 2674              	.LVL353:
 2675              		.loc 1 481 0
 2676 0c03 C6442451 		movb	$0, 81(%rsp)
 2676      00
 2677              		.loc 1 480 0
 2678 0c08 88442450 		movb	%al, 80(%rsp)
 2679              		.loc 1 482 0
 2680 0c0c E8000000 		call	strtol
 2680      00
 2681              	.LVL354:
 2682 0c11 89C1     		movl	%eax, %ecx
 2683              		.loc 1 486 0
 2684 0c13 488D7C24 		leaq	80(%rsp), %rdi
 2684      50
 2685 0c18 BA100000 		movl	$16, %edx
 2685      00
 2686              		.loc 1 482 0
 2687 0c1d C1E104   		sall	$4, %ecx
 2688              		.loc 1 486 0
 2689 0c20 31F6     		xorl	%esi, %esi
 2690              		.loc 1 482 0
 2691 0c22 01C1     		addl	%eax, %ecx
 2692              		.loc 1 484 0
 2693 0c24 0FB64504 		movzbl	4(%rbp), %eax
 2694              		.loc 1 485 0
 2695 0c28 C6442451 		movb	$0, 81(%rsp)
 2695      00
 2696              		.loc 1 482 0
 2697 0c2d 894C2414 		movl	%ecx, 20(%rsp)
 2698              	.LVL355:
 2699              		.loc 1 484 0
 2700 0c31 88442450 		movb	%al, 80(%rsp)
 2701              		.loc 1 486 0
 2702 0c35 E8000000 		call	strtol
 2702      00
 2703              	.LVL356:
 2704 0c3a 4189C1   		movl	%eax, %r9d
 2705              		.loc 1 490 0
 2706 0c3d 488D7C24 		leaq	80(%rsp), %rdi
 2706      50
 2707 0c42 BA100000 		movl	$16, %edx
 2707      00
 2708              		.loc 1 486 0
 2709 0c47 41C1E104 		sall	$4, %r9d
 2710              		.loc 1 490 0
 2711 0c4b 31F6     		xorl	%esi, %esi
 2712              		.loc 1 486 0
 2713 0c4d 418D1C01 		leal	(%r9,%rax), %ebx
 2714              	.LVL357:
 2715              		.loc 1 488 0
 2716 0c51 0FB64505 		movzbl	5(%rbp), %eax
 2717              		.loc 1 489 0
 2718 0c55 C6442451 		movb	$0, 81(%rsp)
 2718      00
 2719              		.loc 1 488 0
 2720 0c5a 88442450 		movb	%al, 80(%rsp)
 2721              		.loc 1 490 0
 2722 0c5e E8000000 		call	strtol
 2722      00
 2723              	.LVL358:
 2724 0c63 89C2     		movl	%eax, %edx
 2725              		.loc 1 491 0
 2726 0c65 8B4C2414 		movl	20(%rsp), %ecx
 2727              		.loc 1 490 0
 2728 0c69 C1E204   		sall	$4, %edx
 2729 0c6c 01D0     		addl	%edx, %eax
 2730              	.LVL359:
 2731              		.loc 1 491 0
 2732 0c6e E9F2FEFF 		jmp	.L135
 2732      FF
 2733              	.LVL360:
 2734              	.L132:
 2735              		.loc 1 472 0
 2736 0c73 83F806   		cmpl	$6, %eax
 2737 0c76 7409     		je	.L134
 2738 0c78 83F809   		cmpl	$9, %eax
 2739 0c7b 0F854FFF 		jne	.L133
 2739      FFFF
 2740              	.L134:
 2741 0c81 89F0     		movl	%esi, %eax
 2742              	.LVL361:
 2743 0c83 BA565555 		movl	$1431655766, %edx
 2743      55
 2744 0c88 C1FE1F   		sarl	$31, %esi
 2745              	.LVL362:
 2746 0c8b F7EA     		imull	%edx
 2747              	.LVL363:
 2748 0c8d 89D0     		movl	%edx, %eax
 2749 0c8f 29F0     		subl	%esi, %eax
 2750 0c91 4C63C8   		movslq	%eax, %r9
 2751 0c94 01C0     		addl	%eax, %eax
 2752 0c96 4C63C0   		movslq	%eax, %r8
 2753 0c99 498D5901 		leaq	1(%r9), %rbx
 2754 0c9d 4D8D5801 		leaq	1(%r8), %r11
 2755 0ca1 E91EFEFF 		jmp	.L128
 2755      FF
 2756              	.LVL364:
 2757 0ca6 662E0F1F 		.p2align 4,,10
 2757      84000000 
 2757      0000
 2758              		.p2align 3
 2759              	.L117:
 2760              	.LBB492:
 2761              		.loc 1 449 0
 2762 0cb0 488B7508 		movq	8(%rbp), %rsi
 2763              		.loc 1 447 0
 2764 0cb4 89C2     		movl	%eax, %edx
 2765 0cb6 4C8B4C24 		movq	40(%rsp), %r9
 2765      28
 2766 0cbb F7D0     		notl	%eax
 2767 0cbd F7DA     		negl	%edx
 2768 0cbf 89542448 		movl	%edx, 72(%rsp)
 2769              	.LVL365:
 2770 0cc3 4C8D4486 		leaq	4(%rsi,%rax,4), %r8
 2770      04
 2771              	.LVL366:
 2772 0cc8 0F1F8400 		.p2align 4,,10
 2772      00000000 
 2773              		.p2align 3
 2774              	.L121:
 2775              		.loc 1 450 0 discriminator 2
 2776 0cd0 0FB65603 		movzbl	3(%rsi), %edx
 2777 0cd4 0FB606   		movzbl	(%rsi), %eax
 2778 0cd7 0FB74E01 		movzwl	1(%rsi), %ecx
 2779              	.LVL367:
 2780              	.LBB493:
 2781              	.LBB494:
 998:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((r << 8) | g) << 8) | b) << 8);
 2782              		.loc 5 998 0 discriminator 2
 2783 0cdb 4189D2   		movl	%edx, %r10d
 2784 0cde 440A5602 		orb	2(%rsi), %r10b
 2785              	.LBE494:
 2786              	.LBE493:
 2787              		.loc 1 450 0 discriminator 2
 2788 0ce2 498D3C81 		leaq	(%r9,%rax,4), %rdi
 2789              	.LBB496:
 2790              	.LBB495:
 998:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((r << 8) | g) << 8) | b) << 8);
 2791              		.loc 5 998 0 discriminator 2
 2792 0ce6 440A5601 		orb	1(%rsi), %r10b
 2793 0cea B8380000 		movl	$56, %eax
 2793      00
 2794 0cef 740F     		je	.L120
 2795              		.loc 5 999 0
 2796 0cf1 66C1C108 		rolw	$8, %cx
 2797 0cf5 0FB7C1   		movzwl	%cx, %eax
 2798 0cf8 C1E008   		sall	$8, %eax
 2799 0cfb 09D0     		orl	%edx, %eax
 2800 0cfd C1E008   		sall	$8, %eax
 2801              	.L120:
 2802              	.LVL368:
 2803              	.LBE495:
 2804              	.LBE496:
 2805              		.loc 1 449 0
 2806 0d00 4883C604 		addq	$4, %rsi
 2807              	.LVL369:
 2808              		.loc 1 450 0
 2809 0d04 8907     		movl	%eax, (%rdi)
 2810              	.LVL370:
 2811              		.loc 1 449 0
 2812 0d06 4C39C6   		cmpq	%r8, %rsi
 2813 0d09 75C5     		jne	.L121
 2814              		.loc 1 452 0
 2815 0d0b 488D4510 		leaq	16(%rbp), %rax
 2816              	.LBE492:
 2817              	.LBE527:
 2818              		.loc 1 439 0
 2819 0d0f C7442410 		movl	$32, 16(%rsp)
 2819      20000000 
 2820              	.LBB528:
 2821              	.LBB497:
 2822              		.loc 1 452 0
 2823 0d17 48894424 		movq	%rax, 48(%rsp)
 2823      30
 2824              	.LVL371:
 2825              	.LBE497:
 2826 0d1c E917FBFF 		jmp	.L118
 2826      FF
 2827              	.LVL372:
 2828              	.L225:
 2829              	.LBE528:
 2830              	.LBE529:
 2831              	.LBE530:
 2832              		.loc 1 584 0
 2833 0d21 E8000000 		call	__stack_chk_fail
 2833      00
 2834              	.LVL373:
 2835              		.cfi_endproc
 2836              	.LFE519:
 2838              		.section	.text.unlikely._ZN12Fl_File_Icon10load_imageEPKc
 2839              	.LCOLDE28:
 2840              		.section	.text._ZN12Fl_File_Icon10load_imageEPKc
 2841              	.LHOTE28:
 2842              		.section	.rodata.str1.1
 2843              	.LC29:
 2844 00a1 2E667469 		.string	".fti"
 2844      00
 2845              		.section	.rodata.str1.8
 2846 01a7 00       		.align 8
 2847              	.LC30:
 2848 01a8 466C5F46 		.string	"Fl_File_Icon::load(): Unable to load icon file \"%s\"."
 2848      696C655F 
 2848      49636F6E 
 2848      3A3A6C6F 
 2848      61642829 
 2849              		.section	.text.unlikely._ZN12Fl_File_Icon4loadEPKc,"ax",@progbits
 2850              		.align 2
 2851              	.LCOLDB31:
 2852              		.section	.text._ZN12Fl_File_Icon4loadEPKc,"ax",@progbits
 2853              	.LHOTB31:
 2854              		.align 2
 2855              		.p2align 4,,15
 2856              		.globl	_ZN12Fl_File_Icon4loadEPKc
 2858              	_ZN12Fl_File_Icon4loadEPKc:
 2859              	.LFB517:
 2860              		.loc 1 98 0
 2861              		.cfi_startproc
 2862              	.LVL374:
 2863 0000 55       		pushq	%rbp
 2864              		.cfi_def_cfa_offset 16
 2865              		.cfi_offset 6, -16
 2866 0001 53       		pushq	%rbx
 2867              		.cfi_def_cfa_offset 24
 2868              		.cfi_offset 3, -24
 2869 0002 4889FD   		movq	%rdi, %rbp
 2870              		.loc 1 103 0
 2871 0005 4889F7   		movq	%rsi, %rdi
 2872              	.LVL375:
 2873              		.loc 1 98 0
 2874 0008 4889F3   		movq	%rsi, %rbx
 2875 000b 4883EC08 		subq	$8, %rsp
 2876              		.cfi_def_cfa_offset 32
 2877              		.loc 1 103 0
 2878 000f E8000000 		call	_Z15fl_filename_extPKc
 2878      00
 2879              	.LVL376:
 2880              		.loc 1 105 0
 2881 0014 4885C0   		testq	%rax, %rax
 2882 0017 7411     		je	.L238
 2883              		.loc 1 105 0 is_stmt 0 discriminator 1
 2884 0019 BF000000 		movl	$.LC29, %edi
 2884      00
 2885 001e B9050000 		movl	$5, %ecx
 2885      00
 2886 0023 4889C6   		movq	%rax, %rsi
 2887 0026 F3A6     		repz cmpsb
 2888              	.LVL377:
 2889 0028 7436     		je	.L245
 2890              	.L238:
 2891              		.loc 1 108 0 is_stmt 1
 2892 002a 4889DE   		movq	%rbx, %rsi
 2893 002d 4889EF   		movq	%rbp, %rdi
 2894 0030 E8000000 		call	_ZN12Fl_File_Icon10load_imageEPKc
 2894      00
 2895              	.LVL378:
 2896              	.L239:
 2897              		.loc 1 110 0
 2898 0035 85C0     		testl	%eax, %eax
 2899 0037 7507     		jne	.L246
 2900              		.loc 1 115 0
 2901 0039 4883C408 		addq	$8, %rsp
 2902              		.cfi_remember_state
 2903              		.cfi_def_cfa_offset 24
 2904 003d 5B       		popq	%rbx
 2905              		.cfi_def_cfa_offset 16
 2906              	.LVL379:
 2907 003e 5D       		popq	%rbp
 2908              		.cfi_def_cfa_offset 8
 2909              	.LVL380:
 2910 003f C3       		ret
 2911              	.LVL381:
 2912              		.p2align 4,,10
 2913              		.p2align 3
 2914              	.L246:
 2915              		.cfi_restore_state
 2916 0040 4883C408 		addq	$8, %rsp
 2917              		.cfi_remember_state
 2918              		.cfi_def_cfa_offset 24
 2919              	.LBB533:
 2920              	.LBB534:
 2921              		.loc 1 112 0
 2922 0044 4889DE   		movq	%rbx, %rsi
 2923 0047 BF000000 		movl	$.LC30, %edi
 2923      00
 2924              	.LBE534:
 2925              	.LBE533:
 2926              		.loc 1 115 0
 2927 004c 5B       		popq	%rbx
 2928              		.cfi_def_cfa_offset 16
 2929              	.LVL382:
 2930 004d 5D       		popq	%rbp
 2931              		.cfi_def_cfa_offset 8
 2932              	.LVL383:
 2933              	.LBB536:
 2934              	.LBB535:
 2935              		.loc 1 112 0
 2936 004e 31C0     		xorl	%eax, %eax
 2937              	.LVL384:
 2938 0050 FF250000 		jmp	*_ZN2Fl7warningE(%rip)
 2938      0000
 2939              	.LVL385:
 2940 0056 662E0F1F 		.p2align 4,,10
 2940      84000000 
 2940      0000
 2941              		.p2align 3
 2942              	.L245:
 2943              		.cfi_restore_state
 2944              	.LBE535:
 2945              	.LBE536:
 2946              		.loc 1 106 0
 2947 0060 4889DE   		movq	%rbx, %rsi
 2948 0063 4889EF   		movq	%rbp, %rdi
 2949 0066 E8000000 		call	_ZN12Fl_File_Icon8load_ftiEPKc
 2949      00
 2950              	.LVL386:
 2951 006b EBC8     		jmp	.L239
 2952              		.cfi_endproc
 2953              	.LFE517:
 2955              		.section	.text.unlikely._ZN12Fl_File_Icon4loadEPKc
 2956              	.LCOLDE31:
 2957              		.section	.text._ZN12Fl_File_Icon4loadEPKc
 2958              	.LHOTE31:
 2959              		.section	.rodata.str1.1
 2960              	.LC32:
 2961 00a6 31367831 		.string	"16x16/actions"
 2961      362F6163 
 2961      74696F6E 
 2961      7300
 2962              	.LC33:
 2963 00b4 25732F25 		.string	"%s/%s"
 2963      7300
 2964              	.LC34:
 2965 00ba 49636F6E 		.string	"Icon"
 2965      00
 2966              	.LC35:
 2967 00bf 4D696D65 		.string	"MimeType"
 2967      54797065 
 2967      00
 2968              	.LC36:
 2969 00c8 50617474 		.string	"Patterns"
 2969      65726E73 
 2969      00
 2970              	.LC37:
 2971 00d1 696E6F64 		.string	"inode/"
 2971      652F00
 2972              	.LC38:
 2973 00d8 25732F25 		.string	"%s/%s/%s.png"
 2973      732F2573 
 2973      2E706E67 
 2973      00
 2974              	.LC39:
 2975 00e5 64697265 		.string	"directory"
 2975      63746F72 
 2975      7900
 2976              	.LC40:
 2977 00ef 2A00     		.string	"*"
 2978              	.LC41:
 2979 00f1 626C6F63 		.string	"blockdevice"
 2979      6B646576 
 2979      69636500 
 2980              	.LC42:
 2981 00fd 6669666F 		.string	"fifo"
 2981      00
 2982              		.section	.text.unlikely._ZL14load_kde_iconsPKcS0_,"ax",@progbits
 2983              	.LCOLDB43:
 2984              		.section	.text._ZL14load_kde_iconsPKcS0_,"ax",@progbits
 2985              	.LHOTB43:
 2986              		.p2align 4,,15
 2988              	_ZL14load_kde_iconsPKcS0_:
 2989              	.LFB521:
 2990              		.loc 1 806 0
 2991              		.cfi_startproc
 2992              	.LVL387:
 2993 0000 4157     		pushq	%r15
 2994              		.cfi_def_cfa_offset 16
 2995              		.cfi_offset 15, -16
 2996 0002 4156     		pushq	%r14
 2997              		.cfi_def_cfa_offset 24
 2998              		.cfi_offset 14, -24
 2999              		.loc 1 814 0
 3000 0004 BA000000 		movl	$fl_numericsort, %edx
 3000      00
 3001              		.loc 1 806 0
 3002 0009 4155     		pushq	%r13
 3003              		.cfi_def_cfa_offset 32
 3004              		.cfi_offset 13, -32
 3005 000b 4154     		pushq	%r12
 3006              		.cfi_def_cfa_offset 40
 3007              		.cfi_offset 12, -40
 3008 000d 4989F5   		movq	%rsi, %r13
 3009 0010 55       		pushq	%rbp
 3010              		.cfi_def_cfa_offset 48
 3011              		.cfi_offset 6, -48
 3012 0011 53       		pushq	%rbx
 3013              		.cfi_def_cfa_offset 56
 3014              		.cfi_offset 3, -56
 3015 0012 4989FE   		movq	%rdi, %r14
 3016 0015 4881EC48 		subq	$9288, %rsp
 3016      240000
 3017              		.cfi_def_cfa_offset 9344
 3018              		.loc 1 814 0
 3019 001c 488D7424 		leaq	40(%rsp), %rsi
 3019      28
 3020              	.LVL388:
 3021              		.loc 1 813 0
 3022 0021 48C74424 		movq	$0, 40(%rsp)
 3022      28000000 
 3022      00
 3023              		.loc 1 806 0
 3024 002a 64488B04 		movq	%fs:40, %rax
 3024      25280000 
 3024      00
 3025 0033 48898424 		movq	%rax, 9272(%rsp)
 3025      38240000 
 3026 003b 31C0     		xorl	%eax, %eax
 3027              		.loc 1 814 0
 3028 003d E8000000 		call	_Z16fl_filename_listPKcPPP6direntPFiS3_S3_E
 3028      00
 3029              	.LVL389:
 3030              		.loc 1 816 0
 3031 0042 85C0     		testl	%eax, %eax
 3032 0044 0F8E2402 		jle	.L279
 3032      0000
 3033 004a 83E801   		subl	$1, %eax
 3034              	.LVL390:
 3035 004d 31DB     		xorl	%ebx, %ebx
 3036              	.LBB562:
 3037              	.LBB563:
 3038              	.LBB564:
 3039              	.LBB565:
 3040              		.loc 1 857 0
 3041 004f 4C897424 		movq	%r14, 8(%rsp)
 3041      08
 3042 0054 488D2CC5 		leaq	8(,%rax,8), %rbp
 3042      08000000 
 3043 005c EB2D     		jmp	.L280
 3044              	.LVL391:
 3045 005e 6690     		.p2align 4,,10
 3046              		.p2align 3
 3047              	.L308:
 3048              	.LBE565:
 3049              	.LBE564:
 3050              	.LBE563:
 3051              	.LBE562:
 3052              		.loc 1 820 0 discriminator 1
 3053 0060 488DBC24 		leaq	3120(%rsp), %rdi
 3053      300C0000 
 3054 0068 4C89EE   		movq	%r13, %rsi
 3055 006b E890FFFF 		call	_ZL14load_kde_iconsPKcS0_
 3055      FF
 3056              	.LVL392:
 3057 0070 488B4424 		movq	40(%rsp), %rax
 3057      28
 3058 0075 488B3C18 		movq	(%rax,%rbx), %rdi
 3059              	.L249:
 3060 0079 4883C308 		addq	$8, %rbx
 3061              		.loc 1 824 0 discriminator 2
 3062 007d E8000000 		call	free
 3062      00
 3063              	.LVL393:
 3064              		.loc 1 816 0 discriminator 2
 3065 0082 4839DD   		cmpq	%rbx, %rbp
 3066 0085 0F84E301 		je	.L279
 3066      0000
 3067              	.L280:
 3068              		.loc 1 817 0
 3069 008b 488B4424 		movq	40(%rsp), %rax
 3069      28
 3070 0090 488B3C18 		movq	(%rax,%rbx), %rdi
 3071 0094 807F132E 		cmpb	$46, 19(%rdi)
 3072 0098 74DF     		je	.L249
 3073              	.LVL394:
 3074              	.LBB603:
 3075              	.LBB604:
 3076              		.file 8 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 3077              		.loc 8 65 0
 3078 009a 4883EC08 		subq	$8, %rsp
 3079              		.cfi_def_cfa_offset 9352
 3080 009e 4883C713 		addq	$19, %rdi
 3081 00a2 41B80000 		movl	$.LC33, %r8d
 3081      0000
 3082 00a8 57       		pushq	%rdi
 3083              		.cfi_def_cfa_offset 9360
 3084 00a9 4C8B4C24 		movq	24(%rsp), %r9
 3084      18
 3085 00ae B9000800 		movl	$2048, %ecx
 3085      00
 3086 00b3 BA010000 		movl	$1, %edx
 3086      00
 3087 00b8 BE000800 		movl	$2048, %esi
 3087      00
 3088 00bd 31C0     		xorl	%eax, %eax
 3089 00bf 488DBC24 		leaq	3136(%rsp), %rdi
 3089      400C0000 
 3090              	.LVL395:
 3091 00c7 E8000000 		call	__snprintf_chk
 3091      00
 3092              	.LVL396:
 3093              	.LBE604:
 3094              	.LBE603:
 3095              		.loc 1 820 0
 3096 00cc 488DBC24 		leaq	3136(%rsp), %rdi
 3096      400C0000 
 3097 00d4 E8000000 		call	_Z17fl_filename_isdirPKc
 3097      00
 3098              	.LVL397:
 3099 00d9 85C0     		testl	%eax, %eax
 3100 00db 4159     		popq	%r9
 3101              		.cfi_def_cfa_offset 9352
 3102 00dd 415A     		popq	%r10
 3103              		.cfi_def_cfa_offset 9344
 3104 00df 0F857BFF 		jne	.L308
 3104      FFFF
 3105              	.LVL398:
 3106              	.LBB605:
 3107              	.LBB601:
 3108              	.LBB598:
 3109              		.loc 1 852 0
 3110 00e5 488DBC24 		leaq	3120(%rsp), %rdi
 3110      300C0000 
 3111              	.LVL399:
 3112 00ed BE000000 		movl	$.LC1, %esi
 3112      00
 3113              	.LBE598:
 3114              		.loc 1 848 0
 3115 00f2 C6842430 		movb	$0, 2096(%rsp)
 3115      08000000 
 3116              		.loc 1 849 0
 3117 00fa C6842430 		movb	$0, 1072(%rsp)
 3117      04000000 
 3118              		.loc 1 850 0
 3119 0102 C6842430 		movb	$0, 5168(%rsp)
 3119      14000000 
 3120              	.LBB599:
 3121              		.loc 1 852 0
 3122 010a E8000000 		call	fl_fopen
 3122      00
 3123              	.LVL400:
 3124 010f 4885C0   		testq	%rax, %rax
 3125 0112 4989C4   		movq	%rax, %r12
 3126              	.LVL401:
 3127 0115 0F843801 		je	.L258
 3127      0000
 3128              	.LVL402:
 3129 011b 0F1F4400 		.p2align 4,,10
 3129      00
 3130              		.p2align 3
 3131              	.L292:
 3132              	.LBB596:
 3133              	.LBB566:
 3134              	.LBB567:
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
 3135              		.loc 8 263 0
 3136 0120 488D7C24 		leaq	48(%rsp), %rdi
 3136      30
 3137              	.LVL403:
 3138 0125 4C89E2   		movq	%r12, %rdx
 3139 0128 BE000400 		movl	$1024, %esi
 3139      00
 3140 012d E8000000 		call	fgets
 3140      00
 3141              	.LVL404:
 3142              	.LBE567:
 3143              	.LBE566:
 3144              		.loc 1 853 0
 3145 0132 4885C0   		testq	%rax, %rax
 3146 0135 0F846D01 		je	.L253
 3146      0000
 3147              		.loc 1 854 0
 3148 013b 488D7C24 		leaq	48(%rsp), %rdi
 3148      30
 3149 0140 BE000000 		movl	$.LC34, %esi
 3149      00
 3150 0145 E8000000 		call	_ZL11get_kde_valPcPKc
 3150      00
 3151              	.LVL405:
 3152 014a 4885C0   		testq	%rax, %rax
 3153 014d 7421     		je	.L254
 3154              		.loc 1 855 0
 3155 014f 488DBC24 		leaq	5168(%rsp), %rdi
 3155      30140000 
 3156 0157 BA000800 		movl	$2048, %edx
 3156      00
 3157 015c 4889C6   		movq	%rax, %rsi
 3158 015f E8000000 		call	fl_strlcpy
 3158      00
 3159              	.LVL406:
 3160 0164 EBBA     		jmp	.L292
 3161              	.LVL407:
 3162 0166 662E0F1F 		.p2align 4,,10
 3162      84000000 
 3162      0000
 3163              		.p2align 3
 3164              	.L254:
 3165              		.loc 1 856 0
 3166 0170 488D7C24 		leaq	48(%rsp), %rdi
 3166      30
 3167 0175 BE000000 		movl	$.LC35, %esi
 3167      00
 3168 017a E8000000 		call	_ZL11get_kde_valPcPKc
 3168      00
 3169              	.LVL408:
 3170 017f 4885C0   		testq	%rax, %rax
 3171 0182 0F84F801 		je	.L256
 3171      0000
 3172              		.loc 1 857 0
 3173 0188 488DBC24 		leaq	2096(%rsp), %rdi
 3173      30080000 
 3174 0190 BA000400 		movl	$1024, %edx
 3174      00
 3175 0195 4889C6   		movq	%rax, %rsi
 3176 0198 E8000000 		call	fl_strlcpy
 3176      00
 3177              	.LVL409:
 3178 019d EB81     		jmp	.L292
 3179 019f 90       		.p2align 4,,10
 3180              		.p2align 3
 3181              	.L312:
 3182              	.LBB568:
 3183              	.LBB569:
 3184              	.LBB570:
 3185              		.loc 1 873 0
 3186 01a0 4C8DBC24 		leaq	5168(%rsp), %r15
 3186      30140000 
 3187 01a8 4C8DA424 		leaq	7216(%rsp), %r12
 3187      301C0000 
 3188              	.LVL410:
 3189 01b0 BA000800 		movl	$2048, %edx
 3189      00
 3190 01b5 4C89FE   		movq	%r15, %rsi
 3191 01b8 4C89E7   		movq	%r12, %rdi
 3192 01bb E8000000 		call	fl_strlcpy
 3192      00
 3193              	.LVL411:
 3194              	.L261:
 3195              	.LBE570:
 3196              		.loc 1 949 0
 3197 01c0 488DB424 		leaq	2096(%rsp), %rsi
 3197      30080000 
 3198 01c8 BF000000 		movl	$.LC37, %edi
 3198      00
 3199 01cd B9060000 		movl	$6, %ecx
 3199      00
 3200 01d2 F3A6     		repz cmpsb
 3201 01d4 0F853402 		jne	.L266
 3201      0000
 3202              		.loc 1 950 0
 3203 01da 488D8424 		leaq	2102(%rsp), %rax
 3203      36080000 
 3204 01e2 BF000000 		movl	$.LC39, %edi
 3204      00
 3205 01e7 B90A0000 		movl	$10, %ecx
 3205      00
 3206 01ec 4889C6   		movq	%rax, %rsi
 3207 01ef F3A6     		repz cmpsb
 3208 01f1 0F841003 		je	.L309
 3208      0000
 3209              		.loc 1 952 0
 3210 01f7 BF000000 		movl	$.LC41, %edi
 3210      00
 3211 01fc B90C0000 		movl	$12, %ecx
 3211      00
 3212 0201 4889C6   		movq	%rax, %rsi
 3213 0204 F3A6     		repz cmpsb
 3214 0206 0F842403 		je	.L310
 3214      0000
 3215              		.loc 1 954 0
 3216 020c BF000000 		movl	$.LC42, %edi
 3216      00
 3217 0211 B9050000 		movl	$5, %ecx
 3217      00
 3218 0216 4889C6   		movq	%rax, %rsi
 3219 0219 F3A6     		repz cmpsb
 3220 021b 7536     		jne	.L258
 3221              		.loc 1 955 0
 3222 021d BF280000 		movl	$40, %edi
 3222      00
 3223 0222 E8000000 		call	_Znwm
 3223      00
 3224              	.LVL412:
 3225 0227 4531C0   		xorl	%r8d, %r8d
 3226 022a 31C9     		xorl	%ecx, %ecx
 3227 022c BA020000 		movl	$2, %edx
 3227      00
 3228 0231 BE000000 		movl	$.LC40, %esi
 3228      00
 3229 0236 4889C7   		movq	%rax, %rdi
 3230 0239 4989C7   		movq	%rax, %r15
 3231 023c E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 3231      00
 3232              	.LVL413:
 3233              		.p2align 4,,10
 3234 0241 0F1F8000 		.p2align 3
 3234      000000
 3235              	.L268:
 3236              		.loc 1 962 0
 3237 0248 4C89E6   		movq	%r12, %rsi
 3238 024b 4C89FF   		movq	%r15, %rdi
 3239 024e E8000000 		call	_ZN12Fl_File_Icon4loadEPKc
 3239      00
 3240              	.LVL414:
 3241              	.L258:
 3242 0253 488B4424 		movq	40(%rsp), %rax
 3242      28
 3243 0258 488B3C18 		movq	(%rax,%rbx), %rdi
 3244              	.L314:
 3245 025c 4883C308 		addq	$8, %rbx
 3246              	.LBE569:
 3247              	.LBE568:
 3248              	.LBE596:
 3249              	.LBE599:
 3250              	.LBE601:
 3251              	.LBE605:
 3252              		.loc 1 824 0
 3253 0260 E8000000 		call	free
 3253      00
 3254              	.LVL415:
 3255              		.loc 1 816 0
 3256 0265 4839DD   		cmpq	%rbx, %rbp
 3257 0268 0F851DFE 		jne	.L280
 3257      FFFF
 3258              	.LVL416:
 3259              	.L279:
 3260              		.loc 1 827 0
 3261 026e 488B7C24 		movq	40(%rsp), %rdi
 3261      28
 3262 0273 E8000000 		call	free
 3262      00
 3263              	.LVL417:
 3264              		.loc 1 828 0
 3265 0278 488B8424 		movq	9272(%rsp), %rax
 3265      38240000 
 3266 0280 64483304 		xorq	%fs:40, %rax
 3266      25280000 
 3266      00
 3267 0289 0F850F03 		jne	.L311
 3267      0000
 3268 028f 4881C448 		addq	$9288, %rsp
 3268      240000
 3269              		.cfi_remember_state
 3270              		.cfi_def_cfa_offset 56
 3271 0296 5B       		popq	%rbx
 3272              		.cfi_def_cfa_offset 48
 3273 0297 5D       		popq	%rbp
 3274              		.cfi_def_cfa_offset 40
 3275 0298 415C     		popq	%r12
 3276              		.cfi_def_cfa_offset 32
 3277 029a 415D     		popq	%r13
 3278              		.cfi_def_cfa_offset 24
 3279              	.LVL418:
 3280 029c 415E     		popq	%r14
 3281              		.cfi_def_cfa_offset 16
 3282 029e 415F     		popq	%r15
 3283              		.cfi_def_cfa_offset 8
 3284 02a0 C3       		ret
 3285              	.LVL419:
 3286              		.p2align 4,,10
 3287 02a1 0F1F8000 		.p2align 3
 3287      000000
 3288              	.L253:
 3289              		.cfi_restore_state
 3290              	.LBB606:
 3291              	.LBB602:
 3292              	.LBB600:
 3293              	.LBB597:
 3294              		.loc 1 862 0
 3295 02a8 4C89E7   		movq	%r12, %rdi
 3296 02ab E8000000 		call	fclose
 3296      00
 3297              	.LVL420:
 3298              		.loc 1 869 0
 3299 02b0 80BC2430 		cmpb	$0, 1072(%rsp)
 3299      04000000 
 3300 02b8 7516     		jne	.L257
 3301 02ba 488DB424 		leaq	2096(%rsp), %rsi
 3301      30080000 
 3302 02c2 BF000000 		movl	$.LC37, %edi
 3302      00
 3303 02c7 B9060000 		movl	$6, %ecx
 3303      00
 3304 02cc F3A6     		repz cmpsb
 3305 02ce 7583     		jne	.L258
 3306              	.L257:
 3307              	.LBB594:
 3308              		.loc 1 871 0
 3309 02d0 0FB68424 		movzbl	5168(%rsp), %eax
 3309      30140000 
 3310 02d8 84C0     		testb	%al, %al
 3311 02da 0F8473FF 		je	.L258
 3311      FFFF
 3312              	.LBB592:
 3313              	.LBB578:
 3314              		.loc 1 872 0
 3315 02e0 3C2F     		cmpb	$47, %al
 3316 02e2 0F84B8FE 		je	.L312
 3316      FFFF
 3317              	.LBB571:
 3318              		.loc 1 874 0
 3319 02e8 31F6     		xorl	%esi, %esi
 3320 02ea 4C89EF   		movq	%r13, %rdi
 3321 02ed E8000000 		call	access
 3321      00
 3322              	.LVL421:
 3323 02f2 85C0     		testl	%eax, %eax
 3324 02f4 0F85B800 		jne	.L262
 3324      0000
 3325 02fa 41BE0000 		movl	$_ZZL16load_kde_mimelnkPKcS0_E5paths+8, %r14d
 3325      0000
 3326 0300 B8000000 		movl	$.LC32, %eax
 3326      00
 3327 0305 4C8DBC24 		leaq	5168(%rsp), %r15
 3327      30140000 
 3328 030d 4C8DA424 		leaq	7216(%rsp), %r12
 3328      301C0000 
 3329              	.LVL422:
 3330 0315 EB10     		jmp	.L264
 3331              	.LVL423:
 3332 0317 660F1F84 		.p2align 4,,10
 3332      00000000 
 3332      00
 3333              		.p2align 3
 3334              	.L313:
 3335 0320 498B06   		movq	(%r14), %rax
 3336 0323 4983C608 		addq	$8, %r14
 3337              	.L264:
 3338              	.LVL424:
 3339              	.LBB572:
 3340              	.LBB573:
 3341              	.LBB574:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3342              		.loc 8 65 0
 3343 0327 4157     		pushq	%r15
 3344              		.cfi_def_cfa_offset 9352
 3345 0329 50       		pushq	%rax
 3346              		.cfi_def_cfa_offset 9360
 3347 032a 41B80000 		movl	$.LC38, %r8d
 3347      0000
 3348 0330 4D89E9   		movq	%r13, %r9
 3349 0333 B9000800 		movl	$2048, %ecx
 3349      00
 3350 0338 BA010000 		movl	$1, %edx
 3350      00
 3351 033d BE000800 		movl	$2048, %esi
 3351      00
 3352 0342 4C89E7   		movq	%r12, %rdi
 3353 0345 31C0     		xorl	%eax, %eax
 3354 0347 E8000000 		call	__snprintf_chk
 3354      00
 3355              	.LVL425:
 3356              	.LBE574:
 3357              	.LBE573:
 3358              		.loc 1 937 0
 3359 034c 31F6     		xorl	%esi, %esi
 3360 034e 4C89E7   		movq	%r12, %rdi
 3361 0351 E8000000 		call	access
 3361      00
 3362              	.LVL426:
 3363 0356 85C0     		testl	%eax, %eax
 3364 0358 5F       		popq	%rdi
 3365              		.cfi_def_cfa_offset 9352
 3366 0359 4158     		popq	%r8
 3367              		.cfi_def_cfa_offset 9344
 3368 035b 0F845FFE 		je	.L261
 3368      FFFF
 3369              		.loc 1 933 0
 3370 0361 4981FE00 		cmpq	$_ZZL16load_kde_mimelnkPKcS0_E5paths+80, %r14
 3370      000000
 3371 0368 75B6     		jne	.L313
 3372 036a 488B4424 		movq	40(%rsp), %rax
 3372      28
 3373 036f 488B3C18 		movq	(%rax,%rbx), %rdi
 3374 0373 E9E4FEFF 		jmp	.L314
 3374      FF
 3375              	.LVL427:
 3376 0378 0F1F8400 		.p2align 4,,10
 3376      00000000 
 3377              		.p2align 3
 3378              	.L256:
 3379              	.LBE572:
 3380              	.LBE571:
 3381              	.LBE578:
 3382              	.LBE592:
 3383              	.LBE594:
 3384              		.loc 1 858 0
 3385 0380 488D7C24 		leaq	48(%rsp), %rdi
 3385      30
 3386 0385 BE000000 		movl	$.LC36, %esi
 3386      00
 3387 038a E8000000 		call	_ZL11get_kde_valPcPKc
 3387      00
 3388              	.LVL428:
 3389 038f 4885C0   		testq	%rax, %rax
 3390 0392 0F8488FD 		je	.L292
 3390      FFFF
 3391              		.loc 1 859 0
 3392 0398 488DBC24 		leaq	1072(%rsp), %rdi
 3392      30040000 
 3393 03a0 BA000400 		movl	$1024, %edx
 3393      00
 3394 03a5 4889C6   		movq	%rax, %rsi
 3395 03a8 E8000000 		call	fl_strlcpy
 3395      00
 3396              	.LVL429:
 3397 03ad E96EFDFF 		jmp	.L292
 3397      FF
 3398              	.L262:
 3399              	.LVL430:
 3400              	.LBB595:
 3401              	.LBB593:
 3402              	.LBB579:
 3403              	.LBB577:
 3404              	.LBB575:
 3405              	.LBB576:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3406              		.loc 8 65 0
 3407 03b2 4C8DA424 		leaq	7216(%rsp), %r12
 3407      301C0000 
 3408              	.LVL431:
 3409 03ba 4883EC08 		subq	$8, %rsp
 3410              		.cfi_def_cfa_offset 9352
 3411 03be B9000800 		movl	$2048, %ecx
 3411      00
 3412 03c3 4C8DBC24 		leaq	5176(%rsp), %r15
 3412      38140000 
 3413 03cb 41B80000 		movl	$.LC33, %r8d
 3413      0000
 3414 03d1 BA010000 		movl	$1, %edx
 3414      00
 3415 03d6 BE000800 		movl	$2048, %esi
 3415      00
 3416 03db 4C89E7   		movq	%r12, %rdi
 3417 03de 31C0     		xorl	%eax, %eax
 3418 03e0 4157     		pushq	%r15
 3419              		.cfi_def_cfa_offset 9360
 3420 03e2 4C8D4C24 		leaq	64(%rsp), %r9
 3420      40
 3421 03e7 E8000000 		call	__snprintf_chk
 3421      00
 3422              	.LVL432:
 3423              	.LBE576:
 3424              	.LBE575:
 3425              		.loc 1 946 0
 3426 03ec 31F6     		xorl	%esi, %esi
 3427 03ee 4C89E7   		movq	%r12, %rdi
 3428 03f1 E8000000 		call	access
 3428      00
 3429              	.LVL433:
 3430 03f6 85C0     		testl	%eax, %eax
 3431 03f8 59       		popq	%rcx
 3432              		.cfi_def_cfa_offset 9352
 3433 03f9 5E       		popq	%rsi
 3434              		.cfi_def_cfa_offset 9344
 3435 03fa 0F84C0FD 		je	.L261
 3435      FFFF
 3436 0400 488B4424 		movq	40(%rsp), %rax
 3436      28
 3437 0405 488B3C18 		movq	(%rax,%rbx), %rdi
 3438 0409 E94EFEFF 		jmp	.L314
 3438      FF
 3439              	.L266:
 3440              	.LVL434:
 3441              	.LBE577:
 3442              	.LBE579:
 3443              	.LBB580:
 3444              	.LBB581:
 3445              		.loc 1 978 0
 3446 040e 4C8DBC24 		leaq	1072(%rsp), %r15
 3446      30040000 
 3447              	.LVL435:
 3448              	.L270:
 3449 0416 418B17   		movl	(%r15), %edx
 3450 0419 4983C704 		addq	$4, %r15
 3451 041d 8D82FFFE 		leal	-16843009(%rdx), %eax
 3451      FEFE
 3452 0423 F7D2     		notl	%edx
 3453 0425 21D0     		andl	%edx, %eax
 3454 0427 25808080 		andl	$-2139062144, %eax
 3454      80
 3455 042c 74E8     		je	.L270
 3456 042e 89C2     		movl	%eax, %edx
 3457 0430 C1EA10   		shrl	$16, %edx
 3458 0433 A9808000 		testl	$32896, %eax
 3458      00
 3459 0438 0F44C2   		cmove	%edx, %eax
 3460 043b 498D5702 		leaq	2(%r15), %rdx
 3461 043f 89C1     		movl	%eax, %ecx
 3462 0441 4C0F44FA 		cmove	%rdx, %r15
 3463 0445 00C1     		addb	%al, %cl
 3464 0447 488D8424 		leaq	1072(%rsp), %rax
 3464      30040000 
 3465              	.LVL436:
 3466 044f 4983DF03 		sbbq	$3, %r15
 3467 0453 4929C7   		subq	%rax, %r15
 3468 0456 498D7F03 		leaq	3(%r15), %rdi
 3469 045a E8000000 		call	malloc
 3469      00
 3470              	.LVL437:
 3471              	.LBB582:
 3472              	.LBB583:
  91:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  92:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  93:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifdef __USE_MISC
  94:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void
  95:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (bcopy (const void *__src, void *__dest, size_t __len))
  96:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  97:/usr/include/x86_64-linux-gnu/bits/string3.h ****   (void) __builtin___memmove_chk (__dest, __src, __len, __bos0 (__dest));
  98:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  99:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 100:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void
 101:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (bzero (void *__dest, size_t __len))
 102:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 103:/usr/include/x86_64-linux-gnu/bits/string3.h ****   (void) __builtin___memset_chk (__dest, '\0', __len, __bos0 (__dest));
 104:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 105:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
 106:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 107:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 108:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (strcpy (char *__restrict __dest, const char *__restrict __src))
 109:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 110:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___strcpy_chk (__dest, __src, __bos (__dest));
 3473              		.loc 6 110 0
 3474 045f 498D4F01 		leaq	1(%r15), %rcx
 3475 0463 488D7801 		leaq	1(%rax), %rdi
 3476 0467 488DB424 		leaq	1072(%rsp), %rsi
 3476      30040000 
 3477              	.LVL438:
 3478              	.LBE583:
 3479              	.LBE582:
 3480              	.LBB585:
 3481              	.LBB586:
 3482 046f C6007B   		movb	$123, (%rax)
 3483              	.LVL439:
 3484              	.LBE586:
 3485              	.LBE585:
 3486              	.LBB587:
 3487              	.LBB584:
 3488 0472 48894424 		movq	%rax, 24(%rsp)
 3488      18
 3489 0477 4889CA   		movq	%rcx, %rdx
 3490 047a 48894C24 		movq	%rcx, 16(%rsp)
 3490      10
 3491 047f E8000000 		call	memcpy
 3491      00
 3492              	.LVL440:
 3493              	.LBE584:
 3494              	.LBE587:
 3495              		.loc 1 982 0
 3496 0484 4C8B4C24 		movq	24(%rsp), %r9
 3496      18
 3497 0489 488B4C24 		movq	16(%rsp), %rcx
 3497      10
 3498 048e 4D01CF   		addq	%r9, %r15
 3499 0491 4889C8   		movq	%rcx, %rax
 3500 0494 41803F3B 		cmpb	$59, (%r15)
 3501 0498 0F84BB00 		je	.L315
 3501      0000
 3502              	.L272:
 3503              	.LVL441:
 3504              	.LBB588:
 3505              	.LBB589:
 111:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 112:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 113:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifdef __USE_GNU
 114:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 115:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (stpcpy (char *__restrict __dest, const char *__restrict __src))
 116:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 117:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___stpcpy_chk (__dest, __src, __bos (__dest));
 118:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 119:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
 120:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 121:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 122:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 123:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (strncpy (char *__restrict __dest, const char *__restrict __src,
 124:/usr/include/x86_64-linux-gnu/bits/string3.h **** 		size_t __len))
 125:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 126:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___strncpy_chk (__dest, __src, __len, __bos (__dest));
 127:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 128:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 129:/usr/include/x86_64-linux-gnu/bits/string3.h **** // XXX We have no corresponding builtin yet.
 130:/usr/include/x86_64-linux-gnu/bits/string3.h **** extern char *__stpncpy_chk (char *__dest, const char *__src, size_t __n,
 131:/usr/include/x86_64-linux-gnu/bits/string3.h **** 			    size_t __destlen) __THROW;
 132:/usr/include/x86_64-linux-gnu/bits/string3.h **** extern char *__REDIRECT_NTH (__stpncpy_alias, (char *__dest, const char *__src,
 133:/usr/include/x86_64-linux-gnu/bits/string3.h **** 					       size_t __n), stpncpy);
 134:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 135:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 136:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (stpncpy (char *__dest, const char *__src, size_t __n))
 137:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 138:/usr/include/x86_64-linux-gnu/bits/string3.h ****   if (__bos (__dest) != (size_t) -1
 139:/usr/include/x86_64-linux-gnu/bits/string3.h ****       && (!__builtin_constant_p (__n) || __n > __bos (__dest)))
 140:/usr/include/x86_64-linux-gnu/bits/string3.h ****     return __stpncpy_chk (__dest, __src, __n, __bos (__dest));
 141:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __stpncpy_alias (__dest, __src, __n);
 142:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 143:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 144:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 145:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 146:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (strcat (char *__restrict __dest, const char *__restrict __src))
 147:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 148:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___strcat_chk (__dest, __src, __bos (__dest));
 3506              		.loc 6 148 0
 3507 049e BA7D0000 		movl	$125, %edx
 3507      00
 3508 04a3 66418914 		movw	%dx, (%r9,%rax)
 3508      01
 3509              	.LVL442:
 3510              	.LBE589:
 3511              	.LBE588:
 3512              		.loc 1 986 0
 3513 04a8 410FB611 		movzbl	(%r9), %edx
 3514 04ac 4C89C8   		movq	%r9, %rax
 3515 04af 84D2     		testb	%dl, %dl
 3516 04b1 7510     		jne	.L293
 3517              	.LVL443:
 3518 04b3 EB21     		jmp	.L277
 3519              		.p2align 4,,10
 3520 04b5 0F1F00   		.p2align 3
 3521              	.L276:
 3522 04b8 4883C001 		addq	$1, %rax
 3523              	.LVL444:
 3524 04bc 0FB610   		movzbl	(%rax), %edx
 3525 04bf 84D2     		testb	%dl, %dl
 3526 04c1 7413     		je	.L277
 3527              	.L293:
 3528              		.loc 1 987 0
 3529 04c3 80FA3B   		cmpb	$59, %dl
 3530 04c6 75F0     		jne	.L276
 3531 04c8 C6007C   		movb	$124, (%rax)
 3532              		.loc 1 986 0
 3533 04cb 4883C001 		addq	$1, %rax
 3534              	.LVL445:
 3535 04cf 0FB610   		movzbl	(%rax), %edx
 3536 04d2 84D2     		testb	%dl, %dl
 3537 04d4 75ED     		jne	.L293
 3538              	.L277:
 3539              	.LBE581:
 3540              	.LBE580:
 3541              		.loc 1 959 0
 3542 04d6 BF280000 		movl	$40, %edi
 3542      00
 3543 04db 4C894C24 		movq	%r9, 16(%rsp)
 3543      10
 3544              	.LVL446:
 3545 04e0 E8000000 		call	_Znwm
 3545      00
 3546              	.LVL447:
 3547 04e5 4C8B4C24 		movq	16(%rsp), %r9
 3547      10
 3548 04ea 4531C0   		xorl	%r8d, %r8d
 3549 04ed 31C9     		xorl	%ecx, %ecx
 3550 04ef BA010000 		movl	$1, %edx
 3550      00
 3551 04f4 4889C7   		movq	%rax, %rdi
 3552 04f7 4989C7   		movq	%rax, %r15
 3553 04fa 4C89CE   		movq	%r9, %rsi
 3554 04fd E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 3554      00
 3555              	.LVL448:
 3556 0502 E941FDFF 		jmp	.L268
 3556      FF
 3557              	.LVL449:
 3558              	.L309:
 3559              		.loc 1 951 0
 3560 0507 BF280000 		movl	$40, %edi
 3560      00
 3561 050c E8000000 		call	_Znwm
 3561      00
 3562              	.LVL450:
 3563 0511 4531C0   		xorl	%r8d, %r8d
 3564 0514 31C9     		xorl	%ecx, %ecx
 3565 0516 BA050000 		movl	$5, %edx
 3565      00
 3566 051b BE000000 		movl	$.LC40, %esi
 3566      00
 3567 0520 4889C7   		movq	%rax, %rdi
 3568 0523 4989C7   		movq	%rax, %r15
 3569 0526 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 3569      00
 3570              	.LVL451:
 3571 052b E918FDFF 		jmp	.L268
 3571      FF
 3572              	.LVL452:
 3573              	.L310:
 3574              		.loc 1 953 0
 3575 0530 BF280000 		movl	$40, %edi
 3575      00
 3576 0535 E8000000 		call	_Znwm
 3576      00
 3577              	.LVL453:
 3578 053a 4531C0   		xorl	%r8d, %r8d
 3579 053d 31C9     		xorl	%ecx, %ecx
 3580 053f BA030000 		movl	$3, %edx
 3580      00
 3581 0544 BE000000 		movl	$.LC40, %esi
 3581      00
 3582 0549 4889C7   		movq	%rax, %rdi
 3583 054c 4989C7   		movq	%rax, %r15
 3584 054f E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 3584      00
 3585              	.LVL454:
 3586 0554 E9EFFCFF 		jmp	.L268
 3586      FF
 3587              	.LVL455:
 3588              	.L315:
 3589              	.LBB591:
 3590              	.LBB590:
 3591              		.loc 1 982 0
 3592 0559 41C60700 		movb	$0, (%r15)
 3593 055d 4C89C8   		movq	%r9, %rax
 3594              	.L273:
 3595 0560 8B08     		movl	(%rax), %ecx
 3596 0562 4883C004 		addq	$4, %rax
 3597 0566 8D91FFFE 		leal	-16843009(%rcx), %edx
 3597      FEFE
 3598 056c F7D1     		notl	%ecx
 3599 056e 21CA     		andl	%ecx, %edx
 3600 0570 81E28080 		andl	$-2139062144, %edx
 3600      8080
 3601 0576 74E8     		je	.L273
 3602 0578 89D1     		movl	%edx, %ecx
 3603 057a C1E910   		shrl	$16, %ecx
 3604 057d F7C28080 		testl	$32896, %edx
 3604      0000
 3605 0583 0F44D1   		cmove	%ecx, %edx
 3606 0586 488D4802 		leaq	2(%rax), %rcx
 3607 058a 480F44C1 		cmove	%rcx, %rax
 3608 058e 89D1     		movl	%edx, %ecx
 3609 0590 00D1     		addb	%dl, %cl
 3610 0592 4883D803 		sbbq	$3, %rax
 3611 0596 4C29C8   		subq	%r9, %rax
 3612 0599 E900FFFF 		jmp	.L272
 3612      FF
 3613              	.LVL456:
 3614              	.L311:
 3615              	.LBE590:
 3616              	.LBE591:
 3617              	.LBE593:
 3618              	.LBE595:
 3619              	.LBE597:
 3620              	.LBE600:
 3621              	.LBE602:
 3622              	.LBE606:
 3623              		.loc 1 828 0
 3624 059e E8000000 		call	__stack_chk_fail
 3624      00
 3625              	.LVL457:
 3626              		.cfi_endproc
 3627              	.LFE521:
 3629              		.section	.text.unlikely._ZL14load_kde_iconsPKcS0_
 3630              	.LCOLDE43:
 3631              		.section	.text._ZL14load_kde_iconsPKcS0_
 3632              	.LHOTE43:
 3633              		.section	.rodata.str1.1
 3634              	.LC44:
 3635 0102 426C7565 		.string	"Bluecurve"
 3635      63757276 
 3635      6500
 3636              	.LC45:
 3637 010c 2F6F7074 		.string	"/opt/kde"
 3637      2F6B6465 
 3637      00
 3638              	.LC46:
 3639 0115 2F757372 		.string	"/usr"
 3639      00
 3640              	.LC47:
 3641 011a 2F757372 		.string	"/usr/local"
 3641      2F6C6F63 
 3641      616C00
 3642              	.LC48:
 3643 0125 63727973 		.string	"crystalsvg"
 3643      74616C73 
 3643      766700
 3644              	.LC49:
 3645 0130 64656661 		.string	"default.kde"
 3645      756C742E 
 3645      6B646500 
 3646              	.LC50:
 3647 013c 6869636F 		.string	"hicolor"
 3647      6C6F7200 
 3648              	.LC51:
 3649 0144 4B444544 		.string	"KDEDIR"
 3649      495200
 3650              	.LC52:
 3651 014b 2F757372 		.string	"/usr/local/share/mimelnk"
 3651      2F6C6F63 
 3651      616C2F73 
 3651      68617265 
 3651      2F6D696D 
 3652              	.LC53:
 3653 0164 25732F73 		.string	"%s/share/icons/%s"
 3653      68617265 
 3653      2F69636F 
 3653      6E732F25 
 3653      7300
 3654              	.LC54:
 3655 0176 25732F31 		.string	"%s/16x16/filesystems/link.png"
 3655      36783136 
 3655      2F66696C 
 3655      65737973 
 3655      74656D73 
 3656              	.LC55:
 3657 0194 25732F73 		.string	"%s/share/mimelnk"
 3657      68617265 
 3657      2F6D696D 
 3657      656C6E6B 
 3657      00
 3658              	.LC56:
 3659 01a5 2F757372 		.string	"/usr/share/icons/folder.xpm"
 3659      2F736861 
 3659      72652F69 
 3659      636F6E73 
 3659      2F666F6C 
 3660              	.LC57:
 3661 01c1 2F757372 		.string	"/usr/share/icons/page.xpm"
 3661      2F736861 
 3661      72652F69 
 3661      636F6E73 
 3661      2F706167 
 3662              	.LC58:
 3663 01db 2F757372 		.string	"/usr/dt/appconfig/icons"
 3663      2F64742F 
 3663      61707063 
 3663      6F6E6669 
 3663      672F6963 
 3664              		.section	.rodata.str1.8
 3665 01dd 000000   		.align 8
 3666              	.LC59:
 3667 01e0 2F757372 		.string	"/usr/dt/appconfig/icons/C/Dtdata.m.pm"
 3667      2F64742F 
 3667      61707063 
 3667      6F6E6669 
 3667      672F6963 
 3668 0206 0000     		.align 8
 3669              	.LC60:
 3670 0208 2F757372 		.string	"/usr/dt/appconfig/icons/C/DtdirB.m.pm"
 3670      2F64742F 
 3670      61707063 
 3670      6F6E6669 
 3670      672F6963 
 3671              		.section	.rodata.str1.1
 3672              	.LC61:
 3673 01f3 636F7265 		.string	"core"
 3673      00
 3674              		.section	.rodata.str1.8
 3675 022e 0000     		.align 8
 3676              	.LC62:
 3677 0230 2F757372 		.string	"/usr/dt/appconfig/icons/C/Dtcore.m.pm"
 3677      2F64742F 
 3677      61707063 
 3677      6F6E6669 
 3677      672F6963 
 3678 0256 0000     		.align 8
 3679              	.LC63:
 3680 0258 2A2E7B62 		.string	"*.{bmp|bw|gif|jpg|pbm|pcd|pgm|ppm|png|ras|rgb|tif|xbm|xpm}"
 3680      6D707C62 
 3680      777C6769 
 3680      667C6A70 
 3680      677C7062 
 3681 0293 00000000 		.align 8
 3681      00
 3682              	.LC64:
 3683 0298 2F757372 		.string	"/usr/dt/appconfig/icons/C/Dtimage.m.pm"
 3683      2F64742F 
 3683      61707063 
 3683      6F6E6669 
 3683      672F6963 
 3684              		.section	.rodata.str1.1
 3685              	.LC65:
 3686 01f8 2A2E7B65 		.string	"*.{eps|pdf|ps}"
 3686      70737C70 
 3686      64667C70 
 3686      737D00
 3687              		.section	.rodata.str1.8
 3688 02bf 00       		.align 8
 3689              	.LC66:
 3690 02c0 2F757372 		.string	"/usr/dt/appconfig/icons/C/Dtps.m.pm"
 3690      2F64742F 
 3690      61707063 
 3690      6F6E6669 
 3690      672F6963 
 3691              		.section	.rodata.str1.1
 3692              	.LC67:
 3693 0207 2A2E7070 		.string	"*.ppd"
 3693      6400
 3694              		.section	.rodata.str1.8
 3695 02e4 00000000 		.align 8
 3696              	.LC68:
 3697 02e8 2F757372 		.string	"/usr/dt/appconfig/icons/C/DtPrtpr.m.pm"
 3697      2F64742F 
 3697      61707063 
 3697      6F6E6669 
 3697      672F6963 
 3698              		.section	.rodata.str1.1
 3699              	.LC69:
 3700 020d 2F757372 		.string	"/usr/lib/filetype"
 3700      2F6C6962 
 3700      2F66696C 
 3700      65747970 
 3700      6500
 3701              		.section	.rodata.str1.8
 3702 030f 00       		.align 8
 3703              	.LC70:
 3704 0310 2F757372 		.string	"/usr/lib/filetype/iconlib/generic.doc.fti"
 3704      2F6C6962 
 3704      2F66696C 
 3704      65747970 
 3704      652F6963 
 3705 033a 00000000 		.align 8
 3705      0000
 3706              	.LC71:
 3707 0340 2F757372 		.string	"/usr/lib/filetype/iconlib/generic.folder.closed.fti"
 3707      2F6C6962 
 3707      2F66696C 
 3707      65747970 
 3707      652F6963 
 3708 0374 00000000 		.align 8
 3709              	.LC72:
 3710 0378 2F757372 		.string	"/usr/lib/filetype/default/iconlib/CoreFile.fti"
 3710      2F6C6962 
 3710      2F66696C 
 3710      65747970 
 3710      652F6465 
 3711 03a7 00       		.align 8
 3712              	.LC73:
 3713 03a8 2F757372 		.string	"/usr/lib/filetype/system/iconlib/ImageFile.fti"
 3713      2F6C6962 
 3713      2F66696C 
 3713      65747970 
 3713      652F7379 
 3714 03d7 00       		.align 8
 3715              	.LC74:
 3716 03d8 2F757372 		.string	"/usr/lib/filetype/install/iconlib/acroread.doc.fti"
 3716      2F6C6962 
 3716      2F66696C 
 3716      65747970 
 3716      652F696E 
 3717              		.section	.rodata.str1.1
 3718              	.LC75:
 3719 021f 2A2E7B65 		.string	"*.{eps|ps}"
 3719      70737C70 
 3719      737D00
 3720              		.section	.rodata.str1.8
 3721 040b 00000000 		.align 8
 3721      00
 3722              	.LC76:
 3723 0410 2F757372 		.string	"/usr/lib/filetype/system/iconlib/PostScriptFile.closed.fti"
 3723      2F6C6962 
 3723      2F66696C 
 3723      65747970 
 3723      652F7379 
 3724              		.section	.rodata.str1.1
 3725              	.LC77:
 3726 022a 2A2E7064 		.string	"*.pdf"
 3726      6600
 3727              		.section	.rodata.str1.8
 3728 044b 00000000 		.align 8
 3728      00
 3729              	.LC78:
 3730 0450 2F757372 		.string	"/usr/lib/filetype/install/iconlib/html.fti"
 3730      2F6C6962 
 3730      2F66696C 
 3730      65747970 
 3730      652F696E 
 3731              		.section	.rodata.str1.1
 3732              	.LC79:
 3733 0230 2A2E7B68 		.string	"*.{htm|html|shtml}"
 3733      746D7C68 
 3733      746D6C7C 
 3733      7368746D 
 3733      6C7D00
 3734              		.section	.rodata.str1.8
 3735 047b 00000000 		.align 8
 3735      00
 3736              	.LC80:
 3737 0480 2F757372 		.string	"/usr/lib/filetype/install/iconlib/color.ps.idle.fti"
 3737      2F6C6962 
 3737      2F66696C 
 3737      65747970 
 3737      652F696E 
 3738 04b4 00000000 		.align 8
 3739              	.LC81:
 3740 04b8 2A2E7B62 		.string	"*.{bm|bmp|bw|gif|jpg|pbm|pcd|pgm|ppm|png|ras|rgb|tif|xbm|xpm}"
 3740      6D7C626D 
 3740      707C6277 
 3740      7C676966 
 3740      7C6A7067 
 3741 04f6 0000     		.align 8
 3742              	.LC82:
 3743 04f8 25732F31 		.string	"%s/16x16/mimetypes/unknown.png"
 3743      36783136 
 3743      2F6D696D 
 3743      65747970 
 3743      65732F75 
 3744              		.section	.rodata.str1.1
 3745              	.LC83:
 3746 0243 25732F73 		.string	"%s/share/icons/unknown.xpm"
 3746      68617265 
 3746      2F69636F 
 3746      6E732F75 
 3746      6E6B6E6F 
 3747              		.section	.text.unlikely._ZN12Fl_File_Icon17load_system_iconsEv,"ax",@progbits
 3748              		.align 2
 3749              	.LCOLDB84:
 3750              		.section	.text._ZN12Fl_File_Icon17load_system_iconsEv,"ax",@progbits
 3751              	.LHOTB84:
 3752              		.align 2
 3753              		.p2align 4,,15
 3754              		.globl	_ZN12Fl_File_Icon17load_system_iconsEv
 3756              	_ZN12Fl_File_Icon17load_system_iconsEv:
 3757              	.LFB520:
 3758              		.loc 1 596 0
 3759              		.cfi_startproc
 3760 0000 55       		pushq	%rbp
 3761              		.cfi_def_cfa_offset 16
 3762              		.cfi_offset 6, -16
 3763 0001 53       		pushq	%rbx
 3764              		.cfi_def_cfa_offset 24
 3765              		.cfi_offset 3, -24
 3766 0002 4881EC48 		subq	$4168, %rsp
 3766      100000
 3767              		.cfi_def_cfa_offset 4192
 3768              		.loc 1 673 0
 3769 0009 8B350000 		movl	_ZZN12Fl_File_Icon17load_system_iconsEvE4init(%rip), %esi
 3769      0000
 3770              		.loc 1 596 0
 3771 000f 64488B04 		movq	%fs:40, %rax
 3771      25280000 
 3771      00
 3772 0018 48898424 		movq	%rax, 4152(%rsp)
 3772      38100000 
 3773 0020 31C0     		xorl	%eax, %eax
 3774              		.loc 1 608 0
 3775 0022 48C70424 		movq	$.LC44, (%rsp)
 3775      00000000 
 3776 002a 48C74424 		movq	$.LC48, 8(%rsp)
 3776      08000000 
 3776      00
 3777              		.loc 1 673 0
 3778 0033 85F6     		testl	%esi, %esi
 3779              		.loc 1 608 0
 3780 0035 48C74424 		movq	$.LC49, 16(%rsp)
 3780      10000000 
 3780      00
 3781 003e 48C74424 		movq	$.LC50, 24(%rsp)
 3781      18000000 
 3781      00
 3782 0047 48C74424 		movq	$0, 32(%rsp)
 3782      20000000 
 3782      00
 3783              		.loc 1 673 0
 3784 0050 7426     		je	.L344
 3785              	.L316:
 3786              		.loc 1 797 0
 3787 0052 488B8424 		movq	4152(%rsp), %rax
 3787      38100000 
 3788 005a 64483304 		xorq	%fs:40, %rax
 3788      25280000 
 3788      00
 3789 0063 0F85D606 		jne	.L345
 3789      0000
 3790 0069 4881C448 		addq	$4168, %rsp
 3790      100000
 3791              		.cfi_remember_state
 3792              		.cfi_def_cfa_offset 24
 3793 0070 5B       		popq	%rbx
 3794              		.cfi_def_cfa_offset 16
 3795 0071 5D       		popq	%rbp
 3796              		.cfi_def_cfa_offset 8
 3797 0072 C3       		ret
 3798              		.p2align 4,,10
 3799 0073 0F1F4400 		.p2align 3
 3799      00
 3800              	.L344:
 3801              		.cfi_restore_state
 3802              		.loc 1 675 0
 3803 0078 E8000000 		call	_Z18fl_register_imagesv
 3803      00
 3804              	.LVL458:
 3805              		.loc 1 677 0
 3806 007d 4C8B0D00 		movq	_ZL6kdedir(%rip), %r9
 3806      000000
 3807 0084 4D85C9   		testq	%r9, %r9
 3808 0087 0F845B05 		je	.L346
 3808      0000
 3809              	.L318:
 3810              	.LVL459:
 3811              	.LBB607:
 3812              	.LBB608:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3813              		.loc 8 65 0
 3814 008d 488D7C24 		leaq	48(%rsp), %rdi
 3814      30
 3815              	.LVL460:
 3816 0092 41B80000 		movl	$.LC55, %r8d
 3816      0000
 3817 0098 B9000800 		movl	$2048, %ecx
 3817      00
 3818 009d BA010000 		movl	$1, %edx
 3818      00
 3819 00a2 BE000800 		movl	$2048, %esi
 3819      00
 3820 00a7 31C0     		xorl	%eax, %eax
 3821 00a9 E8000000 		call	__snprintf_chk
 3821      00
 3822              	.LVL461:
 3823              	.LBE608:
 3824              	.LBE607:
 3825              		.loc 1 688 0
 3826 00ae 488D7C24 		leaq	48(%rsp), %rdi
 3826      30
 3827 00b3 31F6     		xorl	%esi, %esi
 3828 00b5 E8000000 		call	access
 3828      00
 3829              	.LVL462:
 3830 00ba 85C0     		testl	%eax, %eax
 3831 00bc 0F844E02 		je	.L347
 3831      0000
 3832              		.loc 1 718 0
 3833 00c2 31F6     		xorl	%esi, %esi
 3834 00c4 BF000000 		movl	$.LC56, %edi
 3834      00
 3835 00c9 E8000000 		call	access
 3835      00
 3836              	.LVL463:
 3837 00ce 85C0     		testl	%eax, %eax
 3838 00d0 7576     		jne	.L327
 3839              		.loc 1 720 0
 3840 00d2 BF280000 		movl	$40, %edi
 3840      00
 3841 00d7 E8000000 		call	_Znwm
 3841      00
 3842              	.LVL464:
 3843 00dc 4531C0   		xorl	%r8d, %r8d
 3844 00df 4889C3   		movq	%rax, %rbx
 3845 00e2 31C9     		xorl	%ecx, %ecx
 3846 00e4 BA010000 		movl	$1, %edx
 3846      00
 3847 00e9 4889C7   		movq	%rax, %rdi
 3848 00ec BE000000 		movl	$.LC40, %esi
 3848      00
 3849 00f1 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 3849      00
 3850              	.LVL465:
 3851              		.loc 1 721 0
 3852 00f6 BE000000 		movl	$.LC57, %esi
 3852      00
 3853 00fb 4889DF   		movq	%rbx, %rdi
 3854 00fe E8000000 		call	_ZN12Fl_File_Icon10load_imageEPKc
 3854      00
 3855              	.LVL466:
 3856              		.loc 1 723 0
 3857 0103 BF280000 		movl	$40, %edi
 3857      00
 3858 0108 E8000000 		call	_Znwm
 3858      00
 3859              	.LVL467:
 3860 010d BE000000 		movl	$.LC40, %esi
 3860      00
 3861 0112 4889C3   		movq	%rax, %rbx
 3862              	.LVL468:
 3863 0115 4889C7   		movq	%rax, %rdi
 3864 0118 4531C0   		xorl	%r8d, %r8d
 3865 011b 31C9     		xorl	%ecx, %ecx
 3866 011d BA050000 		movl	$5, %edx
 3866      00
 3867 0122 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 3867      00
 3868              	.LVL469:
 3869              		.loc 1 724 0
 3870 0127 BE000000 		movl	$.LC56, %esi
 3870      00
 3871 012c 4889DF   		movq	%rbx, %rdi
 3872 012f E8000000 		call	_ZN12Fl_File_Icon10load_imageEPKc
 3872      00
 3873              	.LVL470:
 3874              	.L326:
 3875              		.loc 1 788 0
 3876 0134 C7050000 		movl	$1, _ZZN12Fl_File_Icon17load_system_iconsEvE4init(%rip)
 3876      00000100 
 3876      0000
 3877              		.loc 1 797 0
 3878 013e E90FFFFF 		jmp	.L316
 3878      FF
 3879              		.p2align 4,,10
 3880 0143 0F1F4400 		.p2align 3
 3880      00
 3881              	.L327:
 3882              		.loc 1 725 0
 3883 0148 31F6     		xorl	%esi, %esi
 3884 014a BF000000 		movl	$.LC58, %edi
 3884      00
 3885 014f E8000000 		call	access
 3885      00
 3886              	.LVL471:
 3887 0154 85C0     		testl	%eax, %eax
 3888 0156 0F845C03 		je	.L348
 3888      0000
 3889              		.loc 1 744 0
 3890 015c 31F6     		xorl	%esi, %esi
 3891 015e BF000000 		movl	$.LC69, %edi
 3891      00
 3892 0163 E8000000 		call	access
 3892      00
 3893              	.LVL472:
 3894 0168 85C0     		testl	%eax, %eax
 3895              		.loc 1 746 0
 3896 016a BF280000 		movl	$40, %edi
 3896      00
 3897              		.loc 1 744 0
 3898 016f 0F85BB04 		jne	.L329
 3898      0000
 3899              		.loc 1 746 0
 3900 0175 E8000000 		call	_Znwm
 3900      00
 3901              	.LVL473:
 3902 017a 4531C0   		xorl	%r8d, %r8d
 3903 017d 31C9     		xorl	%ecx, %ecx
 3904 017f 4889C3   		movq	%rax, %rbx
 3905 0182 BA010000 		movl	$1, %edx
 3905      00
 3906 0187 4889C7   		movq	%rax, %rdi
 3907 018a BE000000 		movl	$.LC40, %esi
 3907      00
 3908 018f E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 3908      00
 3909              	.LVL474:
 3910              		.loc 1 747 0
 3911 0194 BE000000 		movl	$.LC70, %esi
 3911      00
 3912 0199 4889DF   		movq	%rbx, %rdi
 3913 019c E8000000 		call	_ZN12Fl_File_Icon8load_ftiEPKc
 3913      00
 3914              	.LVL475:
 3915              		.loc 1 749 0
 3916 01a1 BF280000 		movl	$40, %edi
 3916      00
 3917 01a6 E8000000 		call	_Znwm
 3917      00
 3918              	.LVL476:
 3919 01ab 4531C0   		xorl	%r8d, %r8d
 3920 01ae 31C9     		xorl	%ecx, %ecx
 3921 01b0 4889C3   		movq	%rax, %rbx
 3922              	.LVL477:
 3923 01b3 BA050000 		movl	$5, %edx
 3923      00
 3924 01b8 4889C7   		movq	%rax, %rdi
 3925 01bb BE000000 		movl	$.LC40, %esi
 3925      00
 3926 01c0 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 3926      00
 3927              	.LVL478:
 3928              		.loc 1 750 0
 3929 01c5 BE000000 		movl	$.LC71, %esi
 3929      00
 3930 01ca 4889DF   		movq	%rbx, %rdi
 3931 01cd E8000000 		call	_ZN12Fl_File_Icon8load_ftiEPKc
 3931      00
 3932              	.LVL479:
 3933              		.loc 1 752 0
 3934 01d2 BF280000 		movl	$40, %edi
 3934      00
 3935 01d7 E8000000 		call	_Znwm
 3935      00
 3936              	.LVL480:
 3937 01dc 4531C0   		xorl	%r8d, %r8d
 3938 01df 31C9     		xorl	%ecx, %ecx
 3939 01e1 4889C3   		movq	%rax, %rbx
 3940              	.LVL481:
 3941 01e4 BA010000 		movl	$1, %edx
 3941      00
 3942 01e9 4889C7   		movq	%rax, %rdi
 3943 01ec BE000000 		movl	$.LC61, %esi
 3943      00
 3944 01f1 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 3944      00
 3945              	.LVL482:
 3946              		.loc 1 753 0
 3947 01f6 BE000000 		movl	$.LC72, %esi
 3947      00
 3948 01fb 4889DF   		movq	%rbx, %rdi
 3949 01fe E8000000 		call	_ZN12Fl_File_Icon8load_ftiEPKc
 3949      00
 3950              	.LVL483:
 3951              		.loc 1 755 0
 3952 0203 BF280000 		movl	$40, %edi
 3952      00
 3953 0208 E8000000 		call	_Znwm
 3953      00
 3954              	.LVL484:
 3955 020d 4531C0   		xorl	%r8d, %r8d
 3956 0210 31C9     		xorl	%ecx, %ecx
 3957 0212 4889C3   		movq	%rax, %rbx
 3958              	.LVL485:
 3959 0215 BA010000 		movl	$1, %edx
 3959      00
 3960 021a 4889C7   		movq	%rax, %rdi
 3961 021d BE000000 		movl	$.LC63, %esi
 3961      00
 3962 0222 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 3962      00
 3963              	.LVL486:
 3964              		.loc 1 756 0
 3965 0227 BE000000 		movl	$.LC73, %esi
 3965      00
 3966 022c 4889DF   		movq	%rbx, %rdi
 3967 022f E8000000 		call	_ZN12Fl_File_Icon8load_ftiEPKc
 3967      00
 3968              	.LVL487:
 3969              		.loc 1 758 0
 3970 0234 31F6     		xorl	%esi, %esi
 3971 0236 BF000000 		movl	$.LC74, %edi
 3971      00
 3972 023b E8000000 		call	access
 3972      00
 3973              	.LVL488:
 3974 0240 85C0     		testl	%eax, %eax
 3975              		.loc 1 759 0
 3976 0242 BF280000 		movl	$40, %edi
 3976      00
 3977              		.loc 1 758 0
 3978 0247 0F855804 		jne	.L330
 3978      0000
 3979              		.loc 1 759 0
 3980 024d E8000000 		call	_Znwm
 3980      00
 3981              	.LVL489:
 3982 0252 4531C0   		xorl	%r8d, %r8d
 3983 0255 4889C3   		movq	%rax, %rbx
 3984              	.LVL490:
 3985 0258 31C9     		xorl	%ecx, %ecx
 3986 025a BA010000 		movl	$1, %edx
 3986      00
 3987 025f 4889C7   		movq	%rax, %rdi
 3988 0262 BE000000 		movl	$.LC75, %esi
 3988      00
 3989 0267 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 3989      00
 3990              	.LVL491:
 3991              		.loc 1 760 0
 3992 026c BE000000 		movl	$.LC76, %esi
 3992      00
 3993 0271 4889DF   		movq	%rbx, %rdi
 3994 0274 E8000000 		call	_ZN12Fl_File_Icon8load_ftiEPKc
 3994      00
 3995              	.LVL492:
 3996              		.loc 1 762 0
 3997 0279 BF280000 		movl	$40, %edi
 3997      00
 3998 027e E8000000 		call	_Znwm
 3998      00
 3999              	.LVL493:
 4000 0283 BE000000 		movl	$.LC77, %esi
 4000      00
 4001 0288 4889C3   		movq	%rax, %rbx
 4002              	.LVL494:
 4003 028b 4889C7   		movq	%rax, %rdi
 4004 028e 4531C0   		xorl	%r8d, %r8d
 4005 0291 31C9     		xorl	%ecx, %ecx
 4006 0293 BA010000 		movl	$1, %edx
 4006      00
 4007 0298 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4007      00
 4008              	.LVL495:
 4009              		.loc 1 763 0
 4010 029d BE000000 		movl	$.LC74, %esi
 4010      00
 4011 02a2 4889DF   		movq	%rbx, %rdi
 4012 02a5 E8000000 		call	_ZN12Fl_File_Icon8load_ftiEPKc
 4012      00
 4013              	.LVL496:
 4014              	.L331:
 4015              		.loc 1 769 0
 4016 02aa 31F6     		xorl	%esi, %esi
 4017 02ac BF000000 		movl	$.LC78, %edi
 4017      00
 4018 02b1 E8000000 		call	access
 4018      00
 4019              	.LVL497:
 4020 02b6 85C0     		testl	%eax, %eax
 4021 02b8 0F841804 		je	.L349
 4021      0000
 4022              	.L332:
 4023              		.loc 1 775 0
 4024 02be 31F6     		xorl	%esi, %esi
 4025 02c0 BF000000 		movl	$.LC80, %edi
 4025      00
 4026 02c5 E8000000 		call	access
 4026      00
 4027              	.LVL498:
 4028 02ca 85C0     		testl	%eax, %eax
 4029 02cc 0F8562FE 		jne	.L326
 4029      FFFF
 4030              		.loc 1 776 0
 4031 02d2 BF280000 		movl	$40, %edi
 4031      00
 4032 02d7 E8000000 		call	_Znwm
 4032      00
 4033              	.LVL499:
 4034 02dc 4531C0   		xorl	%r8d, %r8d
 4035 02df 4889C3   		movq	%rax, %rbx
 4036              	.LVL500:
 4037 02e2 31C9     		xorl	%ecx, %ecx
 4038 02e4 BA010000 		movl	$1, %edx
 4038      00
 4039 02e9 BE000000 		movl	$.LC67, %esi
 4039      00
 4040 02ee 4889C7   		movq	%rax, %rdi
 4041 02f1 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4041      00
 4042              	.LVL501:
 4043              		.loc 1 777 0
 4044 02f6 BE000000 		movl	$.LC80, %esi
 4044      00
 4045 02fb 4889DF   		movq	%rbx, %rdi
 4046 02fe E8000000 		call	_ZN12Fl_File_Icon8load_ftiEPKc
 4046      00
 4047              	.LVL502:
 4048 0303 E92CFEFF 		jmp	.L326
 4048      FF
 4049              	.LVL503:
 4050 0308 0F1F8400 		.p2align 4,,10
 4050      00000000 
 4051              		.p2align 3
 4052              	.L347:
 4053              		.loc 1 690 0
 4054 0310 BF280000 		movl	$40, %edi
 4054      00
 4055 0315 4889E3   		movq	%rsp, %rbx
 4056 0318 E8000000 		call	_Znwm
 4056      00
 4057              	.LVL504:
 4058 031d 4531C0   		xorl	%r8d, %r8d
 4059 0320 4889C7   		movq	%rax, %rdi
 4060 0323 31C9     		xorl	%ecx, %ecx
 4061 0325 BA010000 		movl	$1, %edx
 4061      00
 4062 032a BE000000 		movl	$.LC40, %esi
 4062      00
 4063 032f 4889C5   		movq	%rax, %rbp
 4064 0332 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4064      00
 4065              	.LVL505:
 4066 0337 B8000000 		movl	$.LC44, %eax
 4066      00
 4067 033c EB12     		jmp	.L323
 4068              	.LVL506:
 4069 033e 6690     		.p2align 4,,10
 4070              		.p2align 3
 4071              	.L351:
 4072 0340 4883C308 		addq	$8, %rbx
 4073              		.loc 1 692 0 discriminator 2
 4074 0344 488B03   		movq	(%rbx), %rax
 4075 0347 4885C0   		testq	%rax, %rax
 4076 034a 0F842001 		je	.L350
 4076      0000
 4077              	.L323:
 4078              	.LVL507:
 4079              	.LBB609:
 4080              	.LBB610:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 4081              		.loc 8 65 0
 4082 0350 4883EC08 		subq	$8, %rsp
 4083              		.cfi_def_cfa_offset 4200
 4084 0354 4C8B0D00 		movq	_ZL6kdedir(%rip), %r9
 4084      000000
 4085 035b B9000800 		movl	$2048, %ecx
 4085      00
 4086 0360 50       		pushq	%rax
 4087              		.cfi_def_cfa_offset 4208
 4088 0361 BA010000 		movl	$1, %edx
 4088      00
 4089 0366 41B80000 		movl	$.LC53, %r8d
 4089      0000
 4090 036c BE000800 		movl	$2048, %esi
 4090      00
 4091 0371 31C0     		xorl	%eax, %eax
 4092 0373 488DBC24 		leaq	2112(%rsp), %rdi
 4092      40080000 
 4093              	.LVL508:
 4094 037b E8000000 		call	__snprintf_chk
 4094      00
 4095              	.LVL509:
 4096              	.LBE610:
 4097              	.LBE609:
 4098              		.loc 1 696 0
 4099 0380 488DBC24 		leaq	2112(%rsp), %rdi
 4099      40080000 
 4100 0388 31F6     		xorl	%esi, %esi
 4101 038a E8000000 		call	access
 4101      00
 4102              	.LVL510:
 4103 038f 85C0     		testl	%eax, %eax
 4104 0391 5A       		popq	%rdx
 4105              		.cfi_def_cfa_offset 4200
 4106 0392 59       		popq	%rcx
 4107              		.cfi_def_cfa_offset 4192
 4108 0393 75AB     		jne	.L351
 4109              	.LVL511:
 4110              	.LBB611:
 4111              	.LBB612:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 4112              		.loc 8 65 0
 4113 0395 4C8D8C24 		leaq	2096(%rsp), %r9
 4113      30080000 
 4114 039d 41B80000 		movl	$.LC82, %r8d
 4114      0000
 4115              	.LVL512:
 4116              	.L340:
 4117              	.LBE612:
 4118              	.LBE611:
 4119              	.LBB613:
 4120              	.LBB614:
 4121 03a3 488D7C24 		leaq	48(%rsp), %rdi
 4121      30
 4122 03a8 B9000800 		movl	$2048, %ecx
 4122      00
 4123 03ad BA010000 		movl	$1, %edx
 4123      00
 4124 03b2 BE000800 		movl	$2048, %esi
 4124      00
 4125 03b7 31C0     		xorl	%eax, %eax
 4126 03b9 E8000000 		call	__snprintf_chk
 4126      00
 4127              	.LVL513:
 4128              	.LBE614:
 4129              	.LBE613:
 4130              		.loc 1 707 0
 4131 03be 488D7C24 		leaq	48(%rsp), %rdi
 4131      30
 4132 03c3 31F6     		xorl	%esi, %esi
 4133 03c5 E8000000 		call	access
 4133      00
 4134              	.LVL514:
 4135 03ca 85C0     		testl	%eax, %eax
 4136 03cc 0F84CE00 		je	.L352
 4136      0000
 4137              	.L324:
 4138              		.loc 1 709 0
 4139 03d2 BF280000 		movl	$40, %edi
 4139      00
 4140 03d7 E8000000 		call	_Znwm
 4140      00
 4141              	.LVL515:
 4142 03dc 4531C0   		xorl	%r8d, %r8d
 4143 03df 31C9     		xorl	%ecx, %ecx
 4144 03e1 4889C7   		movq	%rax, %rdi
 4145 03e4 BA040000 		movl	$4, %edx
 4145      00
 4146 03e9 BE000000 		movl	$.LC40, %esi
 4146      00
 4147 03ee 4889C3   		movq	%rax, %rbx
 4148 03f1 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4148      00
 4149              	.LVL516:
 4150              	.LBB616:
 4151              	.LBB617:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 4152              		.loc 8 65 0
 4153 03f6 4C8D8C24 		leaq	2096(%rsp), %r9
 4153      30080000 
 4154 03fe 488D7C24 		leaq	48(%rsp), %rdi
 4154      30
 4155              	.LVL517:
 4156 0403 41B80000 		movl	$.LC54, %r8d
 4156      0000
 4157 0409 B9000800 		movl	$2048, %ecx
 4157      00
 4158 040e BA010000 		movl	$1, %edx
 4158      00
 4159 0413 BE000800 		movl	$2048, %esi
 4159      00
 4160 0418 31C0     		xorl	%eax, %eax
 4161 041a E8000000 		call	__snprintf_chk
 4161      00
 4162              	.LVL518:
 4163              	.LBE617:
 4164              	.LBE616:
 4165              		.loc 1 714 0
 4166 041f 488D7C24 		leaq	48(%rsp), %rdi
 4166      30
 4167 0424 31F6     		xorl	%esi, %esi
 4168 0426 E8000000 		call	access
 4168      00
 4169              	.LVL519:
 4170 042b 85C0     		testl	%eax, %eax
 4171 042d 7459     		je	.L353
 4172              	.L325:
 4173              	.LVL520:
 4174              	.LBB618:
 4175              	.LBB619:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 4176              		.loc 8 65 0
 4177 042f 4C8B0D00 		movq	_ZL6kdedir(%rip), %r9
 4177      000000
 4178 0436 488D7C24 		leaq	48(%rsp), %rdi
 4178      30
 4179              	.LVL521:
 4180 043b 41B80000 		movl	$.LC55, %r8d
 4180      0000
 4181 0441 B9000800 		movl	$2048, %ecx
 4181      00
 4182 0446 BA010000 		movl	$1, %edx
 4182      00
 4183 044b BE000800 		movl	$2048, %esi
 4183      00
 4184 0450 31C0     		xorl	%eax, %eax
 4185 0452 E8000000 		call	__snprintf_chk
 4185      00
 4186              	.LVL522:
 4187              	.LBE619:
 4188              	.LBE618:
 4189              		.loc 1 717 0
 4190 0457 488DB424 		leaq	2096(%rsp), %rsi
 4190      30080000 
 4191 045f 488D7C24 		leaq	48(%rsp), %rdi
 4191      30
 4192 0464 E8000000 		call	_ZL14load_kde_iconsPKcS0_
 4192      00
 4193              	.LVL523:
 4194 0469 E9C6FCFF 		jmp	.L326
 4194      FF
 4195              	.LVL524:
 4196 046e 6690     		.p2align 4,,10
 4197              		.p2align 3
 4198              	.L350:
 4199              	.LBB620:
 4200              	.LBB615:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 4201              		.loc 8 65 0
 4202 0470 4C8B0D00 		movq	_ZL6kdedir(%rip), %r9
 4202      000000
 4203 0477 41B80000 		movl	$.LC83, %r8d
 4203      0000
 4204 047d E921FFFF 		jmp	.L340
 4204      FF
 4205              	.LVL525:
 4206              		.p2align 4,,10
 4207 0482 660F1F44 		.p2align 3
 4207      0000
 4208              	.L353:
 4209              	.LBE615:
 4210              	.LBE620:
 4211              		.loc 1 714 0 discriminator 1
 4212 0488 488D7424 		leaq	48(%rsp), %rsi
 4212      30
 4213 048d 4889DF   		movq	%rbx, %rdi
 4214 0490 E8000000 		call	_ZN12Fl_File_Icon10load_imageEPKc
 4214      00
 4215              	.LVL526:
 4216 0495 EB98     		jmp	.L325
 4217              	.LVL527:
 4218 0497 660F1F84 		.p2align 4,,10
 4218      00000000 
 4218      00
 4219              		.p2align 3
 4220              	.L352:
 4221              		.loc 1 707 0 discriminator 1
 4222 04a0 488D7424 		leaq	48(%rsp), %rsi
 4222      30
 4223 04a5 4889EF   		movq	%rbp, %rdi
 4224 04a8 E8000000 		call	_ZN12Fl_File_Icon10load_imageEPKc
 4224      00
 4225              	.LVL528:
 4226 04ad E920FFFF 		jmp	.L324
 4226      FF
 4227              	.LVL529:
 4228              		.p2align 4,,10
 4229 04b2 660F1F44 		.p2align 3
 4229      0000
 4230              	.L348:
 4231              		.loc 1 727 0
 4232 04b8 BF280000 		movl	$40, %edi
 4232      00
 4233 04bd E8000000 		call	_Znwm
 4233      00
 4234              	.LVL530:
 4235 04c2 4531C0   		xorl	%r8d, %r8d
 4236 04c5 31C9     		xorl	%ecx, %ecx
 4237 04c7 4889C3   		movq	%rax, %rbx
 4238 04ca BA010000 		movl	$1, %edx
 4238      00
 4239 04cf 4889C7   		movq	%rax, %rdi
 4240 04d2 BE000000 		movl	$.LC40, %esi
 4240      00
 4241 04d7 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4241      00
 4242              	.LVL531:
 4243              		.loc 1 728 0
 4244 04dc BE000000 		movl	$.LC59, %esi
 4244      00
 4245 04e1 4889DF   		movq	%rbx, %rdi
 4246 04e4 E8000000 		call	_ZN12Fl_File_Icon10load_imageEPKc
 4246      00
 4247              	.LVL532:
 4248              		.loc 1 730 0
 4249 04e9 BF280000 		movl	$40, %edi
 4249      00
 4250 04ee E8000000 		call	_Znwm
 4250      00
 4251              	.LVL533:
 4252 04f3 4531C0   		xorl	%r8d, %r8d
 4253 04f6 31C9     		xorl	%ecx, %ecx
 4254 04f8 4889C3   		movq	%rax, %rbx
 4255              	.LVL534:
 4256 04fb BA050000 		movl	$5, %edx
 4256      00
 4257 0500 4889C7   		movq	%rax, %rdi
 4258 0503 BE000000 		movl	$.LC40, %esi
 4258      00
 4259 0508 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4259      00
 4260              	.LVL535:
 4261              		.loc 1 731 0
 4262 050d BE000000 		movl	$.LC60, %esi
 4262      00
 4263 0512 4889DF   		movq	%rbx, %rdi
 4264 0515 E8000000 		call	_ZN12Fl_File_Icon10load_imageEPKc
 4264      00
 4265              	.LVL536:
 4266              		.loc 1 733 0
 4267 051a BF280000 		movl	$40, %edi
 4267      00
 4268 051f E8000000 		call	_Znwm
 4268      00
 4269              	.LVL537:
 4270 0524 4531C0   		xorl	%r8d, %r8d
 4271 0527 31C9     		xorl	%ecx, %ecx
 4272 0529 4889C3   		movq	%rax, %rbx
 4273              	.LVL538:
 4274 052c BA010000 		movl	$1, %edx
 4274      00
 4275 0531 4889C7   		movq	%rax, %rdi
 4276 0534 BE000000 		movl	$.LC61, %esi
 4276      00
 4277 0539 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4277      00
 4278              	.LVL539:
 4279              		.loc 1 734 0
 4280 053e BE000000 		movl	$.LC62, %esi
 4280      00
 4281 0543 4889DF   		movq	%rbx, %rdi
 4282 0546 E8000000 		call	_ZN12Fl_File_Icon10load_imageEPKc
 4282      00
 4283              	.LVL540:
 4284              		.loc 1 736 0
 4285 054b BF280000 		movl	$40, %edi
 4285      00
 4286 0550 E8000000 		call	_Znwm
 4286      00
 4287              	.LVL541:
 4288 0555 4531C0   		xorl	%r8d, %r8d
 4289 0558 31C9     		xorl	%ecx, %ecx
 4290 055a 4889C3   		movq	%rax, %rbx
 4291              	.LVL542:
 4292 055d BA010000 		movl	$1, %edx
 4292      00
 4293 0562 4889C7   		movq	%rax, %rdi
 4294 0565 BE000000 		movl	$.LC63, %esi
 4294      00
 4295 056a E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4295      00
 4296              	.LVL543:
 4297              		.loc 1 737 0
 4298 056f BE000000 		movl	$.LC64, %esi
 4298      00
 4299 0574 4889DF   		movq	%rbx, %rdi
 4300 0577 E8000000 		call	_ZN12Fl_File_Icon10load_imageEPKc
 4300      00
 4301              	.LVL544:
 4302              		.loc 1 739 0
 4303 057c BF280000 		movl	$40, %edi
 4303      00
 4304 0581 E8000000 		call	_Znwm
 4304      00
 4305              	.LVL545:
 4306 0586 4531C0   		xorl	%r8d, %r8d
 4307 0589 31C9     		xorl	%ecx, %ecx
 4308 058b 4889C3   		movq	%rax, %rbx
 4309              	.LVL546:
 4310 058e BA010000 		movl	$1, %edx
 4310      00
 4311 0593 4889C7   		movq	%rax, %rdi
 4312 0596 BE000000 		movl	$.LC65, %esi
 4312      00
 4313 059b E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4313      00
 4314              	.LVL547:
 4315              		.loc 1 740 0
 4316 05a0 BE000000 		movl	$.LC66, %esi
 4316      00
 4317 05a5 4889DF   		movq	%rbx, %rdi
 4318 05a8 E8000000 		call	_ZN12Fl_File_Icon10load_imageEPKc
 4318      00
 4319              	.LVL548:
 4320              		.loc 1 742 0
 4321 05ad BF280000 		movl	$40, %edi
 4321      00
 4322 05b2 E8000000 		call	_Znwm
 4322      00
 4323              	.LVL549:
 4324 05b7 4531C0   		xorl	%r8d, %r8d
 4325 05ba 4889C3   		movq	%rax, %rbx
 4326              	.LVL550:
 4327 05bd 31C9     		xorl	%ecx, %ecx
 4328 05bf BA010000 		movl	$1, %edx
 4328      00
 4329 05c4 BE000000 		movl	$.LC67, %esi
 4329      00
 4330 05c9 4889C7   		movq	%rax, %rdi
 4331 05cc E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4331      00
 4332              	.LVL551:
 4333              		.loc 1 743 0
 4334 05d1 BE000000 		movl	$.LC68, %esi
 4334      00
 4335 05d6 4889DF   		movq	%rbx, %rdi
 4336 05d9 E8000000 		call	_ZN12Fl_File_Icon10load_imageEPKc
 4336      00
 4337              	.LVL552:
 4338 05de E951FBFF 		jmp	.L326
 4338      FF
 4339              	.LVL553:
 4340              		.p2align 4,,10
 4341 05e3 0F1F4400 		.p2align 3
 4341      00
 4342              	.L346:
 4343              		.loc 1 679 0
 4344 05e8 BF000000 		movl	$.LC51, %edi
 4344      00
 4345 05ed E8000000 		call	getenv
 4345      00
 4346              	.LVL554:
 4347 05f2 4885C0   		testq	%rax, %rax
 4348 05f5 48890500 		movq	%rax, _ZL6kdedir(%rip)
 4348      000000
 4349 05fc 4989C1   		movq	%rax, %r9
 4350 05ff 0F8588FA 		jne	.L318
 4350      FFFF
 4351              		.loc 1 680 0
 4352 0605 31F6     		xorl	%esi, %esi
 4353 0607 BF000000 		movl	$.LC45, %edi
 4353      00
 4354 060c E8000000 		call	access
 4354      00
 4355              	.LVL555:
 4356 0611 85C0     		testl	%eax, %eax
 4357 0613 0F850001 		jne	.L319
 4357      0000
 4358              		.loc 1 680 0 is_stmt 0 discriminator 1
 4359 0619 48C70500 		movq	$.LC45, _ZL6kdedir(%rip)
 4359      00000000 
 4359      000000
 4360 0624 41B90000 		movl	$.LC45, %r9d
 4360      0000
 4361 062a E95EFAFF 		jmp	.L318
 4361      FF
 4362 062f 90       		.p2align 4,,10
 4363              		.p2align 3
 4364              	.L329:
 4365              		.loc 1 781 0 is_stmt 1
 4366 0630 E8000000 		call	_Znwm
 4366      00
 4367              	.LVL556:
 4368 0635 41B80000 		movl	$_ZZN12Fl_File_Icon17load_system_iconsEvE5plain, %r8d
 4368      0000
 4369 063b B9650000 		movl	$101, %ecx
 4369      00
 4370 0640 BA010000 		movl	$1, %edx
 4370      00
 4371 0645 BE000000 		movl	$.LC40, %esi
 4371      00
 4372 064a 4889C7   		movq	%rax, %rdi
 4373 064d E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4373      00
 4374              	.LVL557:
 4375              		.loc 1 783 0
 4376 0652 BF280000 		movl	$40, %edi
 4376      00
 4377 0657 E8000000 		call	_Znwm
 4377      00
 4378              	.LVL558:
 4379 065c 41B80000 		movl	$_ZZN12Fl_File_Icon17load_system_iconsEvE5image, %r8d
 4379      0000
 4380 0662 B98C0000 		movl	$140, %ecx
 4380      00
 4381 0667 BA010000 		movl	$1, %edx
 4381      00
 4382 066c BE000000 		movl	$.LC81, %esi
 4382      00
 4383 0671 4889C7   		movq	%rax, %rdi
 4384 0674 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4384      00
 4385              	.LVL559:
 4386              		.loc 1 784 0
 4387 0679 BF280000 		movl	$40, %edi
 4387      00
 4388 067e E8000000 		call	_Znwm
 4388      00
 4389              	.LVL560:
 4390 0683 41B80000 		movl	$_ZZN12Fl_File_Icon17load_system_iconsEvE3dir, %r8d
 4390      0000
 4391 0689 B9530000 		movl	$83, %ecx
 4391      00
 4392 068e BA050000 		movl	$5, %edx
 4392      00
 4393 0693 BE000000 		movl	$.LC40, %esi
 4393      00
 4394 0698 4889C7   		movq	%rax, %rdi
 4395 069b E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4395      00
 4396              	.LVL561:
 4397 06a0 E98FFAFF 		jmp	.L326
 4397      FF
 4398              	.LVL562:
 4399              	.L330:
 4400              		.loc 1 765 0
 4401 06a5 E8000000 		call	_Znwm
 4401      00
 4402              	.LVL563:
 4403 06aa 4531C0   		xorl	%r8d, %r8d
 4404 06ad 4889C3   		movq	%rax, %rbx
 4405              	.LVL564:
 4406 06b0 31C9     		xorl	%ecx, %ecx
 4407 06b2 BA010000 		movl	$1, %edx
 4407      00
 4408 06b7 BE000000 		movl	$.LC65, %esi
 4408      00
 4409 06bc 4889C7   		movq	%rax, %rdi
 4410 06bf E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4410      00
 4411              	.LVL565:
 4412              		.loc 1 766 0
 4413 06c4 BE000000 		movl	$.LC76, %esi
 4413      00
 4414 06c9 4889DF   		movq	%rbx, %rdi
 4415 06cc E8000000 		call	_ZN12Fl_File_Icon8load_ftiEPKc
 4415      00
 4416              	.LVL566:
 4417 06d1 E9D4FBFF 		jmp	.L331
 4417      FF
 4418              	.L349:
 4419              		.loc 1 770 0
 4420 06d6 BF280000 		movl	$40, %edi
 4420      00
 4421 06db E8000000 		call	_Znwm
 4421      00
 4422              	.LVL567:
 4423 06e0 4531C0   		xorl	%r8d, %r8d
 4424 06e3 4889C3   		movq	%rax, %rbx
 4425              	.LVL568:
 4426 06e6 31C9     		xorl	%ecx, %ecx
 4427 06e8 BA010000 		movl	$1, %edx
 4427      00
 4428 06ed 4889C7   		movq	%rax, %rdi
 4429 06f0 BE000000 		movl	$.LC79, %esi
 4429      00
 4430 06f5 E8000000 		call	_ZN12Fl_File_IconC1EPKciiPs
 4430      00
 4431              	.LVL569:
 4432              		.loc 1 771 0
 4433 06fa 4889DF   		movq	%rbx, %rdi
 4434 06fd BE000000 		movl	$.LC70, %esi
 4434      00
 4435 0702 E8000000 		call	_ZN12Fl_File_Icon8load_ftiEPKc
 4435      00
 4436              	.LVL570:
 4437              		.loc 1 772 0
 4438 0707 BE000000 		movl	$.LC78, %esi
 4438      00
 4439 070c 4889DF   		movq	%rbx, %rdi
 4440 070f E8000000 		call	_ZN12Fl_File_Icon8load_ftiEPKc
 4440      00
 4441              	.LVL571:
 4442 0714 E9A5FBFF 		jmp	.L332
 4442      FF
 4443              	.LVL572:
 4444              	.L319:
 4445              		.loc 1 681 0
 4446 0719 31F6     		xorl	%esi, %esi
 4447 071b BF000000 		movl	$.LC52, %edi
 4447      00
 4448 0720 E8000000 		call	access
 4448      00
 4449              	.LVL573:
 4450 0725 85C0     		testl	%eax, %eax
 4451 0727 751B     		jne	.L320
 4452              		.loc 1 681 0 is_stmt 0 discriminator 1
 4453 0729 48C70500 		movq	$.LC47, _ZL6kdedir(%rip)
 4453      00000000 
 4453      000000
 4454 0734 41B90000 		movl	$.LC47, %r9d
 4454      0000
 4455 073a E94EF9FF 		jmp	.L318
 4455      FF
 4456              	.L345:
 4457              		.loc 1 797 0 is_stmt 1
 4458 073f E8000000 		call	__stack_chk_fail
 4458      00
 4459              	.LVL574:
 4460              	.L320:
 4461              		.loc 1 682 0
 4462 0744 48C70500 		movq	$.LC46, _ZL6kdedir(%rip)
 4462      00000000 
 4462      000000
 4463 074f 41B90000 		movl	$.LC46, %r9d
 4463      0000
 4464 0755 E933F9FF 		jmp	.L318
 4464      FF
 4465              		.cfi_endproc
 4466              	.LFE520:
 4468              		.section	.text.unlikely._ZN12Fl_File_Icon17load_system_iconsEv
 4469              	.LCOLDE84:
 4470              		.section	.text._ZN12Fl_File_Icon17load_system_iconsEv
 4471              	.LHOTE84:
 4472              		.section	.rodata.str1.1
 4473              	.LC85:
 4474 025e 31367831 		.string	"16x16/apps"
 4474      362F6170 
 4474      707300
 4475              	.LC86:
 4476 0269 31367831 		.string	"16x16/devices"
 4476      362F6465 
 4476      76696365 
 4476      7300
 4477              	.LC87:
 4478 0277 31367831 		.string	"16x16/filesystems"
 4478      362F6669 
 4478      6C657379 
 4478      7374656D 
 4478      7300
 4479              	.LC88:
 4480 0289 31367831 		.string	"16x16/mimetypes"
 4480      362F6D69 
 4480      6D657479 
 4480      70657300 
 4481              	.LC89:
 4482 0299 33327833 		.string	"32x32/actions"
 4482      322F6163 
 4482      74696F6E 
 4482      7300
 4483              	.LC90:
 4484 02a7 33327833 		.string	"32x32/apps"
 4484      322F6170 
 4484      707300
 4485              	.LC91:
 4486 02b2 33327833 		.string	"32x32/devices"
 4486      322F6465 
 4486      76696365 
 4486      7300
 4487              	.LC92:
 4488 02c0 33327833 		.string	"32x32/filesystems"
 4488      322F6669 
 4488      6C657379 
 4488      7374656D 
 4488      7300
 4489              	.LC93:
 4490 02d2 33327833 		.string	"32x32/mimetypes"
 4490      322F6D69 
 4490      6D657479 
 4490      70657300 
 4491              		.section	.rodata._ZZL16load_kde_mimelnkPKcS0_E5paths,"a",@progbits
 4492              		.align 32
 4495              	_ZZL16load_kde_mimelnkPKcS0_E5paths:
 4496 0000 00000000 		.quad	.LC32
 4496      00000000 
 4497 0008 00000000 		.quad	.LC85
 4497      00000000 
 4498 0010 00000000 		.quad	.LC86
 4498      00000000 
 4499 0018 00000000 		.quad	.LC87
 4499      00000000 
 4500 0020 00000000 		.quad	.LC88
 4500      00000000 
 4501 0028 00000000 		.quad	.LC89
 4501      00000000 
 4502 0030 00000000 		.quad	.LC90
 4502      00000000 
 4503 0038 00000000 		.quad	.LC91
 4503      00000000 
 4504 0040 00000000 		.quad	.LC92
 4504      00000000 
 4505 0048 00000000 		.quad	.LC93
 4505      00000000 
 4506              		.section	.data._ZZN12Fl_File_Icon17load_system_iconsEvE3dir,"aw",@progbits
 4507              		.align 32
 4510              	_ZZN12Fl_File_Icon17load_system_iconsEvE3dir:
 4594              		.section	.data._ZZN12Fl_File_Icon17load_system_iconsEvE5image,"aw",@progbits
 4595              		.align 32
 4598              	_ZZN12Fl_File_Icon17load_system_iconsEvE5image:
 4739              		.section	.data._ZZN12Fl_File_Icon17load_system_iconsEvE5plain,"aw",@progbits
 4740              		.align 32
 4743              	_ZZN12Fl_File_Icon17load_system_iconsEvE5plain:
 4845              		.section	.bss._ZZN12Fl_File_Icon17load_system_iconsEvE4init,"aw",@nobits
 4846              		.align 4
 4849              	_ZZN12Fl_File_Icon17load_system_iconsEvE4init:
 4850 0000 00000000 		.zero	4
 4851              		.section	.bss._ZL6kdedir,"aw",@nobits
 4852              		.align 8
 4855              	_ZL6kdedir:
 4856 0000 00000000 		.zero	8
 4856      00000000 
 4857              		.section	.rodata.cst4,"aM",@progbits,4
 4858              		.align 4
 4859              	.LC9:
 4860 0000 0000003F 		.long	1056964608
 4861              		.section	.rodata.cst8,"aM",@progbits,8
 4862              		.align 8
 4863              	.LC18:
 4864 0000 00000000 		.long	0
 4865 0004 00005940 		.long	1079574528
 4866              		.text
 4867              	.Letext0:
 4868              		.section	.text.unlikely._ZL11get_kde_valPcPKc
 4869              	.Letext_cold0:
 4870              		.file 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 4871              		.file 10 "/usr/include/x86_64-linux-gnu/bits/types.h"
 4872              		.file 11 "/usr/include/stdio.h"
 4873              		.file 12 "/usr/include/libio.h"
 4874              		.file 13 "fltk-1.3.4-1/FL/fl_types.h"
 4875              		.file 14 "fltk-1.3.4-1/FL/Fl_Widget.H"
 4876              		.file 15 "fltk-1.3.4-1/FL/Fl_Image.H"
 4877              		.file 16 "fltk-1.3.4-1/FL/Fl_Device.H"
 4878              		.file 17 "/usr/include/x86_64-linux-gnu/bits/dirent.h"
 4879              		.file 18 "fltk-1.3.4-1/FL/Fl_Shared_Image.H"
 4880              		.file 19 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 4881              		.file 20 "fltk-1.3.4-1/FL/fl_utf8.h"
 4882              		.file 21 "/usr/include/x86_64-linux-gnu/bits/errno.h"
 4883              		.file 22 "fltk-1.3.4-1/FL/filename.H"
 4884              		.file 23 "/usr/include/unistd.h"
 4885              		.file 24 "fltk-1.3.4-1/src/flstring.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_File_Icon2.cxx
     /tmp/ccWJJ2Jn.s:13     .text._ZL11get_kde_valPcPKc:0000000000000000 _ZL11get_kde_valPcPKc
     /tmp/ccWJJ2Jn.s:152    .text._ZN12Fl_File_Icon8load_ftiEPKc:0000000000000000 _ZN12Fl_File_Icon8load_ftiEPKc
     /tmp/ccWJJ2Jn.s:1055   .text._ZN12Fl_File_Icon10load_imageEPKc:0000000000000000 _ZN12Fl_File_Icon10load_imageEPKc
     /tmp/ccWJJ2Jn.s:2858   .text._ZN12Fl_File_Icon4loadEPKc:0000000000000000 _ZN12Fl_File_Icon4loadEPKc
     /tmp/ccWJJ2Jn.s:2988   .text._ZL14load_kde_iconsPKcS0_:0000000000000000 _ZL14load_kde_iconsPKcS0_
     /tmp/ccWJJ2Jn.s:4495   .rodata._ZZL16load_kde_mimelnkPKcS0_E5paths:0000000000000000 _ZZL16load_kde_mimelnkPKcS0_E5paths
     /tmp/ccWJJ2Jn.s:3756   .text._ZN12Fl_File_Icon17load_system_iconsEv:0000000000000000 _ZN12Fl_File_Icon17load_system_iconsEv
     /tmp/ccWJJ2Jn.s:4849   .bss._ZZN12Fl_File_Icon17load_system_iconsEvE4init:0000000000000000 _ZZN12Fl_File_Icon17load_system_iconsEvE4init
     /tmp/ccWJJ2Jn.s:4855   .bss._ZL6kdedir:0000000000000000 _ZL6kdedir
     /tmp/ccWJJ2Jn.s:4743   .data._ZZN12Fl_File_Icon17load_system_iconsEvE5plain:0000000000000000 _ZZN12Fl_File_Icon17load_system_iconsEvE5plain
     /tmp/ccWJJ2Jn.s:4598   .data._ZZN12Fl_File_Icon17load_system_iconsEvE5image:0000000000000000 _ZZN12Fl_File_Icon17load_system_iconsEvE5image
     /tmp/ccWJJ2Jn.s:4510   .data._ZZN12Fl_File_Icon17load_system_iconsEvE3dir:0000000000000000 _ZZN12Fl_File_Icon17load_system_iconsEvE3dir
     /tmp/ccWJJ2Jn.s:4863   .rodata.cst8:0000000000000000 .LC18
     /tmp/ccWJJ2Jn.s:4859   .rodata.cst4:0000000000000000 .LC9
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
                           .group:0000000000000000 wm4.errno.h.21.234adedf0a908ba1512bb39778d0c13a
                           .group:0000000000000000 wm4.errnobase.h.2.3ec77d86fa6012e288bd2eb28191253f
                           .group:0000000000000000 wm4.errno.h.6.6707cf97e82b783d19d3d077217dd04e
                           .group:0000000000000000 wm4.errno.h.27.5f4b88dc9507696aecbaa61ffb4828e0
                           .group:0000000000000000 wm4.errno.h.36.afe6c2702b2ada9447adc06c6378ccc9
                           .group:0000000000000000 wm4.math.h.26.671af5ac9cd425a35e0730f7b6d7cde2
                           .group:0000000000000000 wm4.libmsimddeclstubs.h.34.75644856b74ba3d815155fe5fe7ecc56
                           .group:0000000000000000 wm4.mathdef.h.23.67c0aa4a204f1f427459dfc651aba565
                           .group:0000000000000000 wm4.math.h.55.cf380f99c57d42476a5252f30065036a
                           .group:0000000000000000 wm4.math.h.84.742292806c6be54f49dc607928a827f7
                           .group:0000000000000000 wm4.math.h.105.59ff0f83ebf6a04e70e145cef2d1185e
                           .group:0000000000000000 wm4.math.h.152.afae4114fe3f3987f42ac5211c91e844
                           .group:0000000000000000 wm4.unistd.h.23.a608ae63b1bee638e80d9e2a8598bd8e
                           .group:0000000000000000 wm4.posix_opt.h.20.8587404e00639bdcc5f6a74591f95259
                           .group:0000000000000000 wm4.environments.h.56.c5802092ccc191baeb41f8d355bb878f
                           .group:0000000000000000 wm4.unistd.h.213.4c582e35260d661b081322974b7c1e74
                           .group:0000000000000000 wm4.unistd.h.271.5bc8a6a5109e709e04c40b754b201552
                           .group:0000000000000000 wm4.confname.h.27.6b00117a32f457cc72e5ac810a9adade
                           .group:0000000000000000 wm4.unistd.h.1078.c7eeb0fd3115c9566fb6865aa19af17f
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.00137ad0275e3bca492dca30adbe2e71
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.filename.H.30.99b1a2d49dfb41118316d590634dc617
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94

UNDEFINED SYMBOLS
strlen
fl_fopen
__ctype_b_loc
_IO_getc
fclose
_ZN2Fl5errorE
ftell
_ZN12Fl_File_Icon3addEs
sscanf
rint
strtol
_Z16fl_color_averagejjf
__errno_location
strerror
__stack_chk_fail
_ZN15Fl_Shared_Image3getEPKcii
_ZdaPv
_ZN15Fl_Shared_Image7releaseEv
_Znam
memset
strstr
strncasecmp
_Z15fl_filename_extPKc
_ZN2Fl7warningE
fl_numericsort
_Z16fl_filename_listPKcPPP6direntPFiS3_S3_E
free
__snprintf_chk
_Z17fl_filename_isdirPKc
fgets
fl_strlcpy
_Znwm
_ZN12Fl_File_IconC1EPKciiPs
access
malloc
memcpy
_Z18fl_register_imagesv
getenv
