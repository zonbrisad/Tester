   1              		.file	"fl_draw_pixmap.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.rodata.str1.1,"aMS",@progbits,1
   5              	.LC0:
   6 0000 25642564 		.string	"%d%d%d%d"
   6      25642564 
   6      00
   7              		.section	.text.unlikely._Z17fl_measure_pixmapPKPKcRiS3_,"ax",@progbits
   8              	.LCOLDB1:
   9              		.section	.text._Z17fl_measure_pixmapPKPKcRiS3_,"ax",@progbits
  10              	.LHOTB1:
  11              		.p2align 4,,15
  12              		.section	.text.unlikely._Z17fl_measure_pixmapPKPKcRiS3_
  13              	.Ltext_cold0:
  14              		.section	.text._Z17fl_measure_pixmapPKPKcRiS3_
  15              		.globl	_Z17fl_measure_pixmapPKPKcRiS3_
  17              	_Z17fl_measure_pixmapPKPKcRiS3_:
  18              	.LFB483:
  19              		.file 1 "fltk-1.3.4-1/src/fl_draw_pixmap.cxx"
   1:fltk-1.3.4-1/src/fl_draw_pixmap.cxx **** ...
  20              		.loc 1 60 0
  21              		.cfi_startproc
  22              	.LVL0:
  23 0000 55       		pushq	%rbp
  24              		.cfi_def_cfa_offset 16
  25              		.cfi_offset 6, -16
  26 0001 53       		pushq	%rbx
  27              		.cfi_def_cfa_offset 24
  28              		.cfi_offset 3, -24
  29              		.loc 1 61 0
  30 0002 4889D1   		movq	%rdx, %rcx
  31 0005 31C0     		xorl	%eax, %eax
  32              		.loc 1 60 0
  33 0007 4889F3   		movq	%rsi, %rbx
  34 000a 4889D5   		movq	%rdx, %rbp
  35 000d 4883EC08 		subq	$8, %rsp
  36              		.cfi_def_cfa_offset 32
  37              		.loc 1 61 0
  38 0011 488B3F   		movq	(%rdi), %rdi
  39              	.LVL1:
  40 0014 4889F2   		movq	%rsi, %rdx
  41              	.LVL2:
  42 0017 41B90000 		movl	$_ZL15chars_per_pixel, %r9d
  42      0000
  43 001d 41B80000 		movl	$_ZL7ncolors, %r8d
  43      0000
  44 0023 BE000000 		movl	$.LC0, %esi
  44      00
  45              	.LVL3:
  46 0028 E8000000 		call	sscanf
  46      00
  47              	.LVL4:
  48              		.loc 1 62 0
  49 002d 83F803   		cmpl	$3, %eax
  50 0030 7E1B     		jle	.L2
  51              		.loc 1 62 0 is_stmt 0 discriminator 1
  52 0032 8B13     		movl	(%rbx), %edx
  53 0034 85D2     		testl	%edx, %edx
  54 0036 7E15     		jle	.L2
  55              		.loc 1 62 0 discriminator 2
  56 0038 8B4500   		movl	0(%rbp), %eax
  57              	.LVL5:
  58 003b 85C0     		testl	%eax, %eax
  59 003d 7E0E     		jle	.L2
  60              		.loc 1 62 0 discriminator 3
  61 003f 8B050000 		movl	_ZL15chars_per_pixel(%rip), %eax
  61      0000
  62 0045 83E801   		subl	$1, %eax
  63 0048 83F801   		cmpl	$1, %eax
  64 004b 7613     		jbe	.L4
  65              	.L2:
  66              		.loc 1 63 0 is_stmt 1
  67 004d C7030000 		movl	$0, (%rbx)
  67      0000
  68 0053 31C0     		xorl	%eax, %eax
  69              	.L3:
  70              		.loc 1 65 0
  71 0055 4883C408 		addq	$8, %rsp
  72              		.cfi_remember_state
  73              		.cfi_def_cfa_offset 24
  74 0059 5B       		popq	%rbx
  75              		.cfi_def_cfa_offset 16
  76              	.LVL6:
  77 005a 5D       		popq	%rbp
  78              		.cfi_def_cfa_offset 8
  79              	.LVL7:
  80 005b C3       		ret
  81              	.LVL8:
  82 005c 0F1F4000 		.p2align 4,,10
  83              		.p2align 3
  84              	.L4:
  85              		.cfi_restore_state
  86              		.loc 1 64 0
  87 0060 B8010000 		movl	$1, %eax
  87      00
  88 0065 EBEE     		jmp	.L3
  89              		.cfi_endproc
  90              	.LFE483:
  92              		.section	.text.unlikely._Z17fl_measure_pixmapPKPKcRiS3_
  93              	.LCOLDE1:
  94              		.section	.text._Z17fl_measure_pixmapPKPKcRiS3_
  95              	.LHOTE1:
  96              		.section	.text.unlikely._Z17fl_measure_pixmapPKPcRiS2_,"ax",@progbits
  97              	.LCOLDB2:
  98              		.section	.text._Z17fl_measure_pixmapPKPcRiS2_,"ax",@progbits
  99              	.LHOTB2:
 100              		.p2align 4,,15
 101              		.globl	_Z17fl_measure_pixmapPKPcRiS2_
 103              	_Z17fl_measure_pixmapPKPcRiS2_:
 104              	.LFB482:
 105              		.loc 1 52 0
 106              		.cfi_startproc
 107              	.LVL9:
 108              		.loc 1 53 0
 109 0000 E9000000 		jmp	_Z17fl_measure_pixmapPKPKcRiS3_
 109      00
 110              	.LVL10:
 111              		.cfi_endproc
 112              	.LFE482:
 114              		.section	.text.unlikely._Z17fl_measure_pixmapPKPcRiS2_
 115              	.LCOLDE2:
 116              		.section	.text._Z17fl_measure_pixmapPKPcRiS2_
 117              	.LHOTE2:
 118              		.section	.text.unlikely._Z17fl_convert_pixmapPKPKcPhj,"ax",@progbits
 119              	.LCOLDB3:
 120              		.section	.text._Z17fl_convert_pixmapPKPKcPhj,"ax",@progbits
 121              	.LHOTB3:
 122              		.p2align 4,,15
 123              		.globl	_Z17fl_convert_pixmapPKPKcPhj
 125              	_Z17fl_convert_pixmapPKPKcPhj:
 126              	.LFB485:
 127              		.loc 1 120 0
 128              		.cfi_startproc
 129              	.LVL11:
 130 0000 4157     		pushq	%r15
 131              		.cfi_def_cfa_offset 16
 132              		.cfi_offset 15, -16
 133 0002 4156     		pushq	%r14
 134              		.cfi_def_cfa_offset 24
 135              		.cfi_offset 14, -24
 136 0004 4155     		pushq	%r13
 137              		.cfi_def_cfa_offset 32
 138              		.cfi_offset 13, -32
 139 0006 4154     		pushq	%r12
 140              		.cfi_def_cfa_offset 40
 141              		.cfi_offset 12, -40
 142 0008 4989FC   		movq	%rdi, %r12
 143 000b 55       		pushq	%rbp
 144              		.cfi_def_cfa_offset 48
 145              		.cfi_offset 6, -48
 146 000c 53       		pushq	%rbx
 147              		.cfi_def_cfa_offset 56
 148              		.cfi_offset 3, -56
 149 000d 4889F3   		movq	%rsi, %rbx
 150 0010 4883EC38 		subq	$56, %rsp
 151              		.cfi_def_cfa_offset 112
 152              		.loc 1 120 0
 153 0014 8954241C 		movl	%edx, 28(%rsp)
 154              		.loc 1 124 0
 155 0018 488D7424 		leaq	32(%rsp), %rsi
 155      20
 156              	.LVL12:
 157 001d 488D5424 		leaq	36(%rsp), %rdx
 157      24
 158              	.LVL13:
 159              		.loc 1 120 0
 160 0022 64488B04 		movq	%fs:40, %rax
 160      25280000 
 160      00
 161 002b 48894424 		movq	%rax, 40(%rsp)
 161      28
 162 0030 31C0     		xorl	%eax, %eax
 163              	.LVL14:
 164              		.loc 1 124 0
 165 0032 E8000000 		call	_Z17fl_measure_pixmapPKPKcRiS3_
 165      00
 166              	.LVL15:
 167 0037 85C0     		testl	%eax, %eax
 168 0039 7410     		je	.L9
 169              		.loc 1 127 0
 170 003b 8B150000 		movl	_ZL15chars_per_pixel(%rip), %edx
 170      0000
 171              		.loc 1 125 0
 172 0041 31C0     		xorl	%eax, %eax
 173              		.loc 1 127 0
 174 0043 8D4AFF   		leal	-1(%rdx), %ecx
 175 0046 83F901   		cmpl	$1, %ecx
 176 0049 7623     		jbe	.L78
 177              	.LVL16:
 178              	.L9:
 179              		.loc 1 233 0
 180 004b 488B5C24 		movq	40(%rsp), %rbx
 180      28
 181 0050 6448331C 		xorq	%fs:40, %rbx
 181      25280000 
 181      00
 182 0059 0F853C03 		jne	.L79
 182      0000
 183 005f 4883C438 		addq	$56, %rsp
 184              		.cfi_remember_state
 185              		.cfi_def_cfa_offset 56
 186 0063 5B       		popq	%rbx
 187              		.cfi_def_cfa_offset 48
 188 0064 5D       		popq	%rbp
 189              		.cfi_def_cfa_offset 40
 190 0065 415C     		popq	%r12
 191              		.cfi_def_cfa_offset 32
 192 0067 415D     		popq	%r13
 193              		.cfi_def_cfa_offset 24
 194 0069 415E     		popq	%r14
 195              		.cfi_def_cfa_offset 16
 196 006b 415F     		popq	%r15
 197              		.cfi_def_cfa_offset 8
 198 006d C3       		ret
 199              	.LVL17:
 200              	.L78:
 201              		.cfi_restore_state
 202              		.loc 1 131 0
 203 006e 8D0CD500 		leal	0(,%rdx,8), %ecx
 203      000000
 204 0075 B8010000 		movl	$1, %eax
 204      00
 205 007a D3E0     		sall	%cl, %eax
 206 007c 4863F8   		movslq	%eax, %rdi
 207 007f 48C1E702 		salq	$2, %rdi
 208 0083 E8000000 		call	_Znam
 208      00
 209              	.LVL18:
 210 0088 4889C5   		movq	%rax, %rbp
 211              	.LVL19:
 212              	.LBB37:
 213              		.loc 1 139 0
 214 008b 8B050000 		movl	_ZL7ncolors(%rip), %eax
 214      0000
 215              	.LVL20:
 216 0091 85C0     		testl	%eax, %eax
 217 0093 0F882901 		js	.L10
 217      0000
 218              	.LBE37:
 219              		.loc 1 122 0 discriminator 1
 220 0099 498D5424 		leaq	8(%r12), %rdx
 220      08
 221              	.LBB70:
 222              	.LBB38:
 223              		.loc 1 168 0 discriminator 1
 224 009e 85C0     		testl	%eax, %eax
 225              	.LBE38:
 226              	.LBE70:
 227              		.loc 1 122 0 discriminator 1
 228 00a0 48895424 		movq	%rdx, 8(%rsp)
 228      08
 229              	.LVL21:
 230              	.LBB71:
 231              	.LBB55:
 232              		.loc 1 168 0 discriminator 1
 233 00a5 0F847201 		je	.L11
 233      0000
 234              		.loc 1 168 0 is_stmt 0
 235 00ab C7442418 		movl	$0, 24(%rsp)
 235      00000000 
 236              	.LVL22:
 237              	.L29:
 238              	.LBB39:
 239              		.loc 1 169 0 is_stmt 1
 240 00b3 48834424 		addq	$8, 8(%rsp)
 240      0808
 241              	.LVL23:
 242              		.loc 1 173 0
 243 00b9 833D0000 		cmpl	$1, _ZL15chars_per_pixel(%rip)
 243      000001
 244              		.loc 1 169 0
 245 00c0 488B4424 		movq	8(%rsp), %rax
 245      08
 246              	.LVL24:
 247 00c5 488B48F8 		movq	-8(%rax), %rcx
 248              	.LVL25:
 249              		.loc 1 171 0
 250 00c9 0FB601   		movzbl	(%rcx), %eax
 251              	.LVL26:
 252 00cc 4C8D6901 		leaq	1(%rcx), %r13
 253              		.loc 1 173 0
 254 00d0 7E0E     		jle	.L16
 255 00d2 0FB701   		movzwl	(%rcx), %eax
 256              	.LVL27:
 257              		.loc 1 174 0
 258 00d5 4C8D6902 		leaq	2(%rcx), %r13
 259 00d9 66C1C008 		rolw	$8, %ax
 260 00dd 0FB7C0   		movzwl	%ax, %eax
 261              	.LVL28:
 262              	.L16:
 263 00e0 450FB675 		movzbl	0(%r13), %r14d
 263      00
 264              		.loc 1 175 0
 265 00e5 488D4485 		leaq	0(%rbp,%rax,4), %rax
 265      00
 266              	.LVL29:
 267 00ea 4D89EC   		movq	%r13, %r12
 268 00ed 48894424 		movq	%rax, 16(%rsp)
 268      10
 269              	.LVL30:
 270              		.p2align 4,,10
 271 00f2 660F1F44 		.p2align 3
 271      0000
 272              	.L17:
 273              	.LBB40:
 274              	.LBB41:
 275              		.loc 1 179 0 discriminator 3
 276 00f8 4584F6   		testb	%r14b, %r14b
 277 00fb 7423     		je	.L18
 278              	.L80:
 279              	.LVL31:
 280              	.LBB42:
 281              	.LBB43:
 282              		.file 2 "/usr/include/ctype.h"
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
 283              		.loc 2 190 0 discriminator 1
 284 00fd E8000000 		call	__ctype_b_loc
 284      00
 285              	.LVL32:
 286 0102 488B38   		movq	(%rax), %rdi
 287 0105 410FB6D6 		movzbl	%r14b, %edx
 288              	.LBE43:
 289              	.LBE42:
 290              		.loc 1 179 0 discriminator 1
 291 0109 F6445701 		testb	$32, 1(%rdi,%rdx,2)
 291      20
 292 010e 7410     		je	.L18
 293              	.LVL33:
 294 0110 450FB675 		movzbl	1(%r13), %r14d
 294      01
 295              		.loc 1 179 0 is_stmt 0 discriminator 2
 296 0115 4983C501 		addq	$1, %r13
 297              	.LVL34:
 298 0119 4584F6   		testb	%r14b, %r14b
 299 011c 75DF     		jne	.L80
 300              	.LVL35:
 301 011e 6690     		.p2align 4,,10
 302              		.p2align 3
 303              	.L18:
 304              		.loc 1 180 0 is_stmt 1
 305 0120 4D8D7D01 		leaq	1(%r13), %r15
 306              	.LVL36:
 307              		.loc 1 181 0
 308 0124 450FB66D 		movzbl	1(%r13), %r13d
 308      01
 309 0129 4584ED   		testb	%r13b, %r13b
 310 012c 0F848601 		je	.L20
 310      0000
 311              	.L86:
 312 0132 E8000000 		call	__ctype_b_loc
 312      00
 313              	.LVL37:
 314 0137 488B38   		movq	(%rax), %rdi
 315 013a EB15     		jmp	.L23
 316 013c 0F1F4000 		.p2align 4,,10
 317              		.p2align 3
 318              	.L81:
 319              		.loc 1 181 0 is_stmt 0 discriminator 2
 320 0140 4983C701 		addq	$1, %r15
 321              	.LVL38:
 322 0144 450FB62F 		movzbl	(%r15), %r13d
 323 0148 4584ED   		testb	%r13b, %r13b
 324 014b 0F846701 		je	.L20
 324      0000
 325              	.L23:
 326              	.LBB44:
 327              	.LBB45:
 328              		.loc 2 190 0 is_stmt 1 discriminator 1
 329 0151 410FB6CD 		movzbl	%r13b, %ecx
 330              	.LBE45:
 331              	.LBE44:
 332              		.loc 1 181 0 discriminator 1
 333 0155 F6444F01 		testb	$32, 1(%rdi,%rcx,2)
 333      20
 334 015a 74E4     		je	.L81
 335 015c EB06     		jmp	.L74
 336 015e 6690     		.p2align 4,,10
 337              		.p2align 3
 338              	.L82:
 339              		.loc 1 182 0 discriminator 2
 340 0160 4983C701 		addq	$1, %r15
 341              	.LVL39:
 342              	.L74:
 343 0164 410FB607 		movzbl	(%r15), %eax
 344 0168 84C0     		testb	%al, %al
 345 016a 0F844801 		je	.L20
 345      0000
 346              		.loc 1 182 0 is_stmt 0 discriminator 1
 347 0170 F6444701 		testb	$32, 1(%rdi,%rax,2)
 347      20
 348 0175 75E9     		jne	.L82
 349              		.loc 1 184 0 is_stmt 1
 350 0177 4180FE63 		cmpb	$99, %r14b
 351 017b 0F847B01 		je	.L42
 351      0000
 352              		.loc 1 186 0 discriminator 3
 353 0181 450FB637 		movzbl	(%r15), %r14d
 354 0185 4584F6   		testb	%r14b, %r14b
 355 0188 0F847301 		je	.L43
 355      0000
 356              		.loc 1 186 0 is_stmt 0
 357 018e 4D89FD   		movq	%r15, %r13
 358 0191 EB17     		jmp	.L27
 359              	.LVL40:
 360              		.p2align 4,,10
 361 0193 0F1F4400 		.p2align 3
 361      00
 362              	.L84:
 363              		.loc 1 186 0 discriminator 2
 364 0198 4983C501 		addq	$1, %r13
 365              	.LVL41:
 366 019c 450FB675 		movzbl	0(%r13), %r14d
 366      00
 367 01a1 4584F6   		testb	%r14b, %r14b
 368 01a4 0F84F600 		je	.L83
 368      0000
 369              	.L27:
 370              	.LBB46:
 371              	.LBB47:
 372              		.loc 2 190 0 is_stmt 1 discriminator 1
 373 01aa 410FB6F6 		movzbl	%r14b, %esi
 374              	.LBE47:
 375              	.LBE46:
 376              		.loc 1 186 0 discriminator 1
 377 01ae F6447701 		testb	$32, 1(%rdi,%rsi,2)
 377      20
 378 01b3 74E3     		je	.L84
 379 01b5 450FB675 		movzbl	0(%r13), %r14d
 379      00
 380              		.loc 1 186 0 is_stmt 0
 381 01ba 4D89FC   		movq	%r15, %r12
 382 01bd E936FFFF 		jmp	.L17
 382      FF
 383              	.LVL42:
 384              	.L10:
 385              	.LBE41:
 386              	.LBE40:
 387              	.LBE39:
 388              	.LBE55:
 389              	.LBB56:
 390              		.loc 1 141 0 is_stmt 1
 391 01c2 498D5424 		leaq	16(%r12), %rdx
 391      10
 392 01c7 4D8B6424 		movq	8(%r12), %r12
 392      08
 393              	.LVL43:
 394              		.loc 1 140 0
 395 01cc F7D8     		negl	%eax
 396 01ce 89050000 		movl	%eax, _ZL7ncolors(%rip)
 396      0000
 397              		.loc 1 141 0
 398 01d4 48895424 		movq	%rdx, 8(%rsp)
 398      08
 399              	.LVL44:
 400              	.LBB57:
 401              		.loc 1 144 0
 402 01d9 41803C24 		cmpb	$32, (%r12)
 402      20
 403 01de 0F847201 		je	.L85
 403      0000
 404              	.LVL45:
 405              	.L13:
 406 01e4 83E801   		subl	$1, %eax
 407 01e7 498D4C84 		leaq	4(%r12,%rax,4), %rcx
 407      04
 408              	.LVL46:
 409              	.L14:
 410              	.LBE57:
 411              	.LBB60:
 412              	.LBB61:
 413              		.loc 1 155 0 discriminator 2
 414 01ec 410FB604 		movzbl	(%r12), %eax
 414      24
 415              		.loc 1 162 0 discriminator 2
 416 01f1 410FB654 		movzbl	1(%r12), %edx
 416      2401
 417 01f7 4983C404 		addq	$4, %r12
 418              	.LVL47:
 419              		.loc 1 155 0 discriminator 2
 420 01fb 488D4485 		leaq	0(%rbp,%rax,4), %rax
 420      00
 421              	.LVL48:
 422              		.loc 1 162 0 discriminator 2
 423 0200 8810     		movb	%dl, (%rax)
 424              	.LVL49:
 425              		.loc 1 163 0 discriminator 2
 426 0202 410FB654 		movzbl	-2(%r12), %edx
 426      24FE
 427              	.LBE61:
 428              		.loc 1 154 0 discriminator 2
 429 0208 4939CC   		cmpq	%rcx, %r12
 430              	.LBB62:
 431              		.loc 1 163 0 discriminator 2
 432 020b 885001   		movb	%dl, 1(%rax)
 433              	.LVL50:
 434              		.loc 1 164 0 discriminator 2
 435 020e 410FB654 		movzbl	-1(%r12), %edx
 435      24FF
 436              		.loc 1 165 0 discriminator 2
 437 0214 C64003FF 		movb	$-1, 3(%rax)
 438              		.loc 1 164 0 discriminator 2
 439 0218 885002   		movb	%dl, 2(%rax)
 440              	.LBE62:
 441              		.loc 1 154 0 discriminator 2
 442 021b 75CF     		jne	.L14
 443              	.LVL51:
 444              	.L11:
 445              	.LBE60:
 446              	.LBE56:
 447              	.LBE71:
 448              	.LBB72:
 449              		.loc 1 218 0
 450 021d 8B442424 		movl	36(%rsp), %eax
 451 0221 85C0     		testl	%eax, %eax
 452 0223 7E61     		jle	.L36
 453              	.LBB73:
 454              	.LBB74:
 455              	.LBB75:
 456              		.loc 1 221 0
 457 0225 8B4C2420 		movl	32(%rsp), %ecx
 458 0229 4C8B6C24 		movq	8(%rsp), %r13
 458      08
 459 022e 83E801   		subl	$1, %eax
 460 0231 498D7CC5 		leaq	8(%r13,%rax,8), %rdi
 460      08
 461 0236 8D41FF   		leal	-1(%rcx), %eax
 462 0239 4C8D0485 		leaq	4(,%rax,4), %r8
 462      04000000 
 463              	.LVL52:
 464              		.p2align 4,,10
 465 0241 0F1F8000 		.p2align 3
 465      000000
 466              	.L37:
 467              	.LBE75:
 468              		.loc 1 220 0
 469 0248 833D0000 		cmpl	$1, _ZL15chars_per_pixel(%rip)
 469      000001
 470              	.LBE74:
 471              		.loc 1 219 0
 472 024f 498B7500 		movq	0(%r13), %rsi
 473              	.LVL53:
 474              	.LBB83:
 475              		.loc 1 220 0
 476 0253 0F8EB300 		jle	.L31
 476      0000
 477              	.LVL54:
 478              	.LBB78:
 479              		.loc 1 224 0 discriminator 3
 480 0259 85C9     		testl	%ecx, %ecx
 481 025b 7E20     		jle	.L32
 482              		.loc 1 224 0 is_stmt 0
 483 025d 31D2     		xorl	%edx, %edx
 484              	.LVL55:
 485 025f 90       		.p2align 4,,10
 486              		.p2align 3
 487              	.L35:
 488 0260 0FB70456 		movzwl	(%rsi,%rdx,2), %eax
 489 0264 66C1C008 		rolw	$8, %ax
 490 0268 0FB7C0   		movzwl	%ax, %eax
 491              	.LBB79:
 492              	.LBB80:
 493              	.LBB81:
 494              		.file 3 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 495              		.loc 3 53 0 is_stmt 1 discriminator 2
 496 026b 8B448500 		movl	0(%rbp,%rax,4), %eax
 497 026f 890493   		movl	%eax, (%rbx,%rdx,4)
 498              	.LVL56:
 499 0272 4883C201 		addq	$1, %rdx
 500              	.LVL57:
 501              	.LBE81:
 502              	.LBE80:
 503              	.LBE79:
 504              		.loc 1 224 0 discriminator 2
 505 0276 39D1     		cmpl	%edx, %ecx
 506 0278 7FE6     		jg	.L35
 507              	.LVL58:
 508              	.L75:
 509 027a 4C01C3   		addq	%r8, %rbx
 510              	.L32:
 511              	.LVL59:
 512 027d 4983C508 		addq	$8, %r13
 513              	.LBE78:
 514              	.LBE83:
 515              	.LBE73:
 516              		.loc 1 218 0 discriminator 2
 517 0281 4C39EF   		cmpq	%r13, %rdi
 518 0284 75C2     		jne	.L37
 519              	.L36:
 520              	.LBE72:
 521              		.loc 1 231 0
 522 0286 4889EF   		movq	%rbp, %rdi
 523 0289 E8000000 		call	_ZdaPv
 523      00
 524              	.LVL60:
 525              		.loc 1 232 0
 526 028e B8010000 		movl	$1, %eax
 526      00
 527 0293 E9B3FDFF 		jmp	.L9
 527      FF
 528              	.LVL61:
 529 0298 0F1F8400 		.p2align 4,,10
 529      00000000 
 530              		.p2align 3
 531              	.L83:
 532              	.LBB86:
 533              	.LBB67:
 534              	.LBB52:
 535              	.LBB50:
 536              	.LBB48:
 537 02a0 4D89FC   		movq	%r15, %r12
 538              		.loc 1 180 0
 539 02a3 4D8D7D01 		leaq	1(%r13), %r15
 540              	.LVL62:
 541              		.loc 1 181 0
 542 02a7 450FB66D 		movzbl	1(%r13), %r13d
 542      01
 543 02ac 4584ED   		testb	%r13b, %r13b
 544 02af 0F857DFE 		jne	.L86
 544      FFFF
 545              		.p2align 4,,10
 546 02b5 0F1F00   		.p2align 3
 547              	.L20:
 548              	.LVL63:
 549              	.LBE48:
 550              	.LBE50:
 551              		.loc 1 188 0
 552 02b8 4C8B7424 		movq	16(%rsp), %r14
 552      10
 553 02bd 4C89E7   		movq	%r12, %rdi
 554 02c0 498D5602 		leaq	2(%r14), %rdx
 555 02c4 4C89F6   		movq	%r14, %rsi
 556 02c7 4889D1   		movq	%rdx, %rcx
 557 02ca 4989D7   		movq	%rdx, %r15
 558 02cd 498D5601 		leaq	1(%r14), %rdx
 559 02d1 4989D5   		movq	%rdx, %r13
 560 02d4 E8000000 		call	_Z14fl_parse_colorPKcRhS1_S1_
 560      00
 561              	.LVL64:
 562              		.loc 1 190 0
 563 02d9 85C0     		testl	%eax, %eax
 564              		.loc 1 189 0
 565 02db 41C64603 		movb	$-1, 3(%r14)
 565      FF
 566              		.loc 1 190 0
 567 02e0 7456     		je	.L87
 568              	.LVL65:
 569              	.L28:
 570              	.LBE52:
 571              		.loc 1 168 0 discriminator 2
 572 02e2 83442418 		addl	$1, 24(%rsp)
 572      01
 573              	.LVL66:
 574 02e7 8B442418 		movl	24(%rsp), %eax
 575              	.LVL67:
 576 02eb 39050000 		cmpl	%eax, _ZL7ncolors(%rip)
 576      0000
 577 02f1 0F8FBCFD 		jg	.L29
 577      FFFF
 578 02f7 E921FFFF 		jmp	.L11
 578      FF
 579              	.LVL68:
 580              	.L42:
 581              	.LBB53:
 582              	.LBB51:
 583 02fc 4D89FC   		movq	%r15, %r12
 584 02ff EBB7     		jmp	.L20
 585              	.L43:
 586              	.LBB49:
 587              		.loc 1 186 0
 588 0301 4D89FC   		movq	%r15, %r12
 589 0304 4D89FD   		movq	%r15, %r13
 590 0307 E914FEFF 		jmp	.L18
 590      FF
 591              	.LVL69:
 592              	.L31:
 593              	.LBE49:
 594              	.LBE51:
 595              	.LBE53:
 596              	.LBE67:
 597              	.LBE86:
 598              	.LBB87:
 599              	.LBB85:
 600              	.LBB84:
 601              	.LBB82:
 602              		.loc 1 221 0 discriminator 3
 603 030c 85C9     		testl	%ecx, %ecx
 604 030e 0F8E69FF 		jle	.L32
 604      FFFF
 605              		.loc 1 221 0 is_stmt 0 discriminator 2
 606 0314 31C0     		xorl	%eax, %eax
 607              	.LVL70:
 608 0316 662E0F1F 		.p2align 4,,10
 608      84000000 
 608      0000
 609              		.p2align 3
 610              	.L34:
 611 0320 0FB61406 		movzbl	(%rsi,%rax), %edx
 612              	.LBB76:
 613              	.LBB77:
 614              		.loc 3 53 0 is_stmt 1 discriminator 2
 615 0324 8B549500 		movl	0(%rbp,%rdx,4), %edx
 616 0328 891483   		movl	%edx, (%rbx,%rax,4)
 617              	.LVL71:
 618 032b 4883C001 		addq	$1, %rax
 619              	.LVL72:
 620              	.LBE77:
 621              	.LBE76:
 622              		.loc 1 221 0 discriminator 2
 623 032f 39C1     		cmpl	%eax, %ecx
 624 0331 7FED     		jg	.L34
 625 0333 E942FFFF 		jmp	.L75
 625      FF
 626              	.LVL73:
 627              	.L87:
 628              	.LBE82:
 629              	.LBE84:
 630              	.LBE85:
 631              	.LBE87:
 632              	.LBB88:
 633              	.LBB68:
 634              	.LBB54:
 635              		.loc 1 200 0
 636 0338 4C8B7424 		movq	16(%rsp), %r14
 636      10
 637 033d 8B7C241C 		movl	28(%rsp), %edi
 638 0341 4C89F9   		movq	%r15, %rcx
 639 0344 4C89EA   		movq	%r13, %rdx
 640 0347 4C89F6   		movq	%r14, %rsi
 641 034a E8000000 		call	_ZN2Fl9get_colorEjRhS0_S0_
 641      00
 642              	.LVL74:
 643              		.loc 1 201 0
 644 034f 41C64603 		movb	$0, 3(%r14)
 644      00
 645 0354 EB8C     		jmp	.L28
 646              	.LVL75:
 647              	.L85:
 648              	.LBE54:
 649              	.LBE68:
 650              	.LBB69:
 651              	.LBB63:
 652              	.LBB58:
 653              		.loc 1 146 0
 654 0356 8B7C241C 		movl	28(%rsp), %edi
 655 035a 488D8D82 		leaq	130(%rbp), %rcx
 655      000000
 656 0361 488D9581 		leaq	129(%rbp), %rdx
 656      000000
 657              	.LVL76:
 658 0368 488DB580 		leaq	128(%rbp), %rsi
 658      000000
 659              	.LVL77:
 660              		.loc 1 150 0
 661 036f 4983C404 		addq	$4, %r12
 662              	.LVL78:
 663              		.loc 1 146 0
 664 0373 E8000000 		call	_ZN2Fl9get_colorEjRhS0_S0_
 664      00
 665              	.LVL79:
 666              		.loc 1 151 0
 667 0378 8B050000 		movl	_ZL7ncolors(%rip), %eax
 667      0000
 668              		.loc 1 146 0
 669 037e C6858300 		movb	$0, 131(%rbp)
 669      000000
 670              		.loc 1 151 0
 671 0385 83E801   		subl	$1, %eax
 672              	.LBE58:
 673              	.LBE63:
 674              	.LBB64:
 675              		.loc 1 154 0
 676 0388 85C0     		testl	%eax, %eax
 677              	.LBE64:
 678              	.LBB65:
 679              	.LBB59:
 680              		.loc 1 151 0
 681 038a 89050000 		movl	%eax, _ZL7ncolors(%rip)
 681      0000
 682              	.LVL80:
 683              	.LBE59:
 684              	.LBE65:
 685              	.LBB66:
 686              		.loc 1 154 0
 687 0390 0F8E87FE 		jle	.L11
 687      FFFF
 688 0396 E949FEFF 		jmp	.L13
 688      FF
 689              	.LVL81:
 690              	.L79:
 691              	.LBE66:
 692              	.LBE69:
 693              	.LBE88:
 694              		.loc 1 233 0
 695 039b E8000000 		call	__stack_chk_fail
 695      00
 696              	.LVL82:
 697              		.cfi_endproc
 698              	.LFE485:
 700              		.section	.text.unlikely._Z17fl_convert_pixmapPKPKcPhj
 701              	.LCOLDE3:
 702              		.section	.text._Z17fl_convert_pixmapPKPKcPhj
 703              	.LHOTE3:
 704              		.section	.text.unlikely._Z14fl_draw_pixmapPKPKciij,"ax",@progbits
 705              	.LCOLDB4:
 706              		.section	.text._Z14fl_draw_pixmapPKPKciij,"ax",@progbits
 707              	.LHOTB4:
 708              		.p2align 4,,15
 709              		.globl	_Z14fl_draw_pixmapPKPKciij
 711              	_Z14fl_draw_pixmapPKPKciij:
 712              	.LFB486:
 713              		.loc 1 239 0
 714              		.cfi_startproc
 715              	.LVL83:
 716 0000 4156     		pushq	%r14
 717              		.cfi_def_cfa_offset 16
 718              		.cfi_offset 14, -16
 719 0002 4155     		pushq	%r13
 720              		.cfi_def_cfa_offset 24
 721              		.cfi_offset 13, -24
 722 0004 4189CE   		movl	%ecx, %r14d
 723 0007 4154     		pushq	%r12
 724              		.cfi_def_cfa_offset 32
 725              		.cfi_offset 12, -32
 726 0009 55       		pushq	%rbp
 727              		.cfi_def_cfa_offset 40
 728              		.cfi_offset 6, -40
 729 000a 4189D4   		movl	%edx, %r12d
 730 000d 53       		pushq	%rbx
 731              		.cfi_def_cfa_offset 48
 732              		.cfi_offset 3, -48
 733 000e 89F5     		movl	%esi, %ebp
 734 0010 4989FD   		movq	%rdi, %r13
 735 0013 4883EC20 		subq	$32, %rsp
 736              		.cfi_def_cfa_offset 80
 737              		.loc 1 242 0
 738 0017 488D5424 		leaq	20(%rsp), %rdx
 738      14
 739              	.LVL84:
 740 001c 488D7424 		leaq	16(%rsp), %rsi
 740      10
 741              	.LVL85:
 742              		.loc 1 239 0
 743 0021 64488B04 		movq	%fs:40, %rax
 743      25280000 
 743      00
 744 002a 48894424 		movq	%rax, 24(%rsp)
 744      18
 745 002f 31C0     		xorl	%eax, %eax
 746              		.loc 1 242 0
 747 0031 E8000000 		call	_Z17fl_measure_pixmapPKPKcRiS3_
 747      00
 748              	.LVL86:
 749 0036 85C0     		testl	%eax, %eax
 750 0038 7526     		jne	.L107
 751              	.LVL87:
 752              	.L89:
 753              		.loc 1 291 0
 754 003a 488B5C24 		movq	24(%rsp), %rbx
 754      18
 755 003f 6448331C 		xorq	%fs:40, %rbx
 755      25280000 
 755      00
 756 0048 0F854F01 		jne	.L108
 756      0000
 757 004e 4883C420 		addq	$32, %rsp
 758              		.cfi_remember_state
 759              		.cfi_def_cfa_offset 48
 760 0052 5B       		popq	%rbx
 761              		.cfi_def_cfa_offset 40
 762 0053 5D       		popq	%rbp
 763              		.cfi_def_cfa_offset 32
 764              	.LVL88:
 765 0054 415C     		popq	%r12
 766              		.cfi_def_cfa_offset 24
 767              	.LVL89:
 768 0056 415D     		popq	%r13
 769              		.cfi_def_cfa_offset 16
 770 0058 415E     		popq	%r14
 771              		.cfi_def_cfa_offset 8
 772 005a C3       		ret
 773              	.LVL90:
 774 005b 0F1F4400 		.p2align 4,,10
 774      00
 775              		.p2align 3
 776              	.L107:
 777              		.cfi_restore_state
 778              		.loc 1 245 0
 779 0060 8B7C2410 		movl	16(%rsp), %edi
 780 0064 0FAF7C24 		imull	20(%rsp), %edi
 780      14
 781 0069 C1E702   		sall	$2, %edi
 782 006c 4863FF   		movslq	%edi, %rdi
 783 006f E8000000 		call	_Znam
 783      00
 784              	.LVL91:
 785              		.loc 1 247 0
 786 0074 4489F2   		movl	%r14d, %edx
 787 0077 4889C6   		movq	%rax, %rsi
 788 007a 4C89EF   		movq	%r13, %rdi
 789              		.loc 1 245 0
 790 007d 4889C3   		movq	%rax, %rbx
 791              	.LVL92:
 792              		.loc 1 247 0
 793 0080 E8000000 		call	_Z17fl_convert_pixmapPKPKcPhj
 793      00
 794              	.LVL93:
 795 0085 85C0     		testl	%eax, %eax
 796 0087 8944240C 		movl	%eax, 12(%rsp)
 797 008b 0F84EF00 		je	.L109
 797      0000
 798              	.LBB89:
 799              		.loc 1 263 0
 800 0091 48833D00 		cmpq	$0, fl_mask_bitmap(%rip)
 800      00000000 
 801 0099 0F84F200 		je	.L110
 801      0000
 802              	.LVL94:
 803              	.LBB90:
 804              		.loc 1 265 0
 805 009f 8B542410 		movl	16(%rsp), %edx
 806 00a3 8D420E   		leal	14(%rdx), %eax
 807 00a6 89D7     		movl	%edx, %edi
 808 00a8 83C707   		addl	$7, %edi
 809 00ab 0F48F8   		cmovs	%eax, %edi
 810 00ae C1FF03   		sarl	$3, %edi
 811 00b1 0FAF7C24 		imull	20(%rsp), %edi
 811      14
 812 00b6 4863FF   		movslq	%edi, %rdi
 813 00b9 E8000000 		call	_Znam
 813      00
 814              	.LVL95:
 815              		.loc 1 266 0
 816 00be 488B1500 		movq	fl_mask_bitmap(%rip), %rdx
 816      000000
 817              		.loc 1 267 0
 818 00c5 488D7B03 		leaq	3(%rbx), %rdi
 819              	.LVL96:
 820              		.loc 1 266 0
 821 00c9 488902   		movq	%rax, (%rdx)
 822              	.LBB91:
 823              		.loc 1 269 0
 824 00cc 448B4C24 		movl	20(%rsp), %r9d
 824      14
 825 00d1 448B4424 		movl	16(%rsp), %r8d
 825      10
 826 00d6 4585C9   		testl	%r9d, %r9d
 827 00d9 7E6E     		jle	.L92
 828 00db 418D50FF 		leal	-1(%r8), %edx
 829 00df 4531ED   		xorl	%r13d, %r13d
 830              	.LVL97:
 831 00e2 4C8D3495 		leaq	4(,%rdx,4), %r14
 831      04000000 
 832              	.LVL98:
 833 00ea 4989D3   		movq	%rdx, %r11
 834              	.LVL99:
 835 00ed 0F1F00   		.p2align 4,,10
 836              		.p2align 3
 837              	.L99:
 838              	.LBB92:
 839              		.loc 1 271 0 discriminator 1
 840 00f0 4585C0   		testl	%r8d, %r8d
 841 00f3 7E4B     		jle	.L94
 842              		.loc 1 271 0 is_stmt 0
 843 00f5 31D2     		xorl	%edx, %edx
 844 00f7 B9010000 		movl	$1, %ecx
 844      00
 845 00fc 31F6     		xorl	%esi, %esi
 846 00fe EB0E     		jmp	.L98
 847              	.LVL100:
 848              		.p2align 4,,10
 849              		.p2align 3
 850              	.L112:
 851              		.loc 1 275 0 is_stmt 1 discriminator 1
 852 0100 4139D3   		cmpl	%edx, %r11d
 853 0103 7421     		je	.L96
 854              	.LVL101:
 855 0105 4883C201 		addq	$1, %rdx
 856              	.LVL102:
 857              		.loc 1 271 0 discriminator 2
 858 0109 4139D0   		cmpl	%edx, %r8d
 859 010c 7E2F     		jle	.L111
 860              	.LVL103:
 861              	.L98:
 862              		.loc 1 273 0
 863 010e 4189F2   		movl	%esi, %r10d
 864 0111 4109CA   		orl	%ecx, %r10d
 865 0114 803C9700 		cmpb	$0, (%rdi,%rdx,4)
 866 0118 410F48F2 		cmovs	%r10d, %esi
 867              	.LVL104:
 868              		.loc 1 274 0
 869 011c 01C9     		addl	%ecx, %ecx
 870              	.LVL105:
 871              		.loc 1 275 0
 872 011e 81F98000 		cmpl	$128, %ecx
 872      0000
 873 0124 7EDA     		jle	.L112
 874              	.L96:
 875              	.LVL106:
 876 0126 4883C201 		addq	$1, %rdx
 877              	.LVL107:
 878              		.loc 1 276 0
 879 012a 408830   		movb	%sil, (%rax)
 880              	.LVL108:
 881 012d 4883C001 		addq	$1, %rax
 882              	.LVL109:
 883              		.loc 1 278 0
 884 0131 31F6     		xorl	%esi, %esi
 885              		.loc 1 271 0
 886 0133 4139D0   		cmpl	%edx, %r8d
 887              		.loc 1 277 0
 888 0136 B9010000 		movl	$1, %ecx
 888      00
 889              	.LVL110:
 890              		.loc 1 271 0
 891 013b 7FD1     		jg	.L98
 892              	.L111:
 893 013d 4C01F7   		addq	%r14, %rdi
 894              	.LVL111:
 895              	.L94:
 896              	.LBE92:
 897              		.loc 1 269 0 discriminator 2
 898 0140 4183C501 		addl	$1, %r13d
 899              	.LVL112:
 900 0144 4539CD   		cmpl	%r9d, %r13d
 901 0147 75A7     		jne	.L99
 902              	.LVL113:
 903              	.L92:
 904              	.LBE91:
 905              	.LBE90:
 906              	.LBE89:
 907              	.LBB93:
 908              	.LBB94:
 909              		.file 4 "fltk-1.3.4-1/FL/fl_draw.H"
   1:fltk-1.3.4-1/FL/fl_draw.H **** //
   2:fltk-1.3.4-1/FL/fl_draw.H **** // "$Id: fl_draw.H 11977 2016-09-25 11:07:06Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/fl_draw.H **** //
   4:fltk-1.3.4-1/FL/fl_draw.H **** // Portable drawing function header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/fl_draw.H **** //
   6:fltk-1.3.4-1/FL/fl_draw.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/fl_draw.H **** //
   8:fltk-1.3.4-1/FL/fl_draw.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/fl_draw.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/fl_draw.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/fl_draw.H **** //
  12:fltk-1.3.4-1/FL/fl_draw.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/fl_draw.H **** //
  14:fltk-1.3.4-1/FL/fl_draw.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/fl_draw.H **** //
  16:fltk-1.3.4-1/FL/fl_draw.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/fl_draw.H **** //
  18:fltk-1.3.4-1/FL/fl_draw.H **** 
  19:fltk-1.3.4-1/FL/fl_draw.H **** /**
  20:fltk-1.3.4-1/FL/fl_draw.H ****   \file fl_draw.H
  21:fltk-1.3.4-1/FL/fl_draw.H ****   \brief utility header to pull drawing functions together
  22:fltk-1.3.4-1/FL/fl_draw.H **** */
  23:fltk-1.3.4-1/FL/fl_draw.H **** 
  24:fltk-1.3.4-1/FL/fl_draw.H **** #ifndef fl_draw_H
  25:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_draw_H
  26:fltk-1.3.4-1/FL/fl_draw.H **** 
  27:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/x.H>	      // for Fl_Region
  28:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Enumerations.H>  // for the color names
  29:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Window.H>     // for fl_set_spot()
  30:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Device.H>     // for fl_graphics_driver
  31:fltk-1.3.4-1/FL/fl_draw.H **** 
  32:fltk-1.3.4-1/FL/fl_draw.H **** // Image class...
  33:fltk-1.3.4-1/FL/fl_draw.H **** class Fl_Image;
  34:fltk-1.3.4-1/FL/fl_draw.H **** 
  35:fltk-1.3.4-1/FL/fl_draw.H **** // Label flags...
  36:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT extern char fl_draw_shortcut;
  37:fltk-1.3.4-1/FL/fl_draw.H **** 
  38:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_attributes
  39:fltk-1.3.4-1/FL/fl_draw.H ****     @{
  40:fltk-1.3.4-1/FL/fl_draw.H **** */
  41:fltk-1.3.4-1/FL/fl_draw.H **** 
  42:fltk-1.3.4-1/FL/fl_draw.H **** // Colors:
  43:fltk-1.3.4-1/FL/fl_draw.H **** /**
  44:fltk-1.3.4-1/FL/fl_draw.H ****  Sets the color for all subsequent drawing operations.
  45:fltk-1.3.4-1/FL/fl_draw.H ****  For colormapped displays, a color cell will be allocated out of
  46:fltk-1.3.4-1/FL/fl_draw.H ****  \p fl_colormap the first time you use a color. If the colormap fills up
  47:fltk-1.3.4-1/FL/fl_draw.H ****  then a least-squares algorithm is used to find the closest color.
  48:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
  49:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
  50:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] c color 
  51:fltk-1.3.4-1/FL/fl_draw.H ****  */
  52:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(Fl_Color c) {fl_graphics_driver->color(c); } // select indexed color
  53:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
  54:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_color(int c) {fl_color((Fl_Color)c);}
  55:fltk-1.3.4-1/FL/fl_draw.H **** /**
  56:fltk-1.3.4-1/FL/fl_draw.H ****  Sets the color for all subsequent drawing operations.
  57:fltk-1.3.4-1/FL/fl_draw.H ****  The closest possible match to the RGB color is used.
  58:fltk-1.3.4-1/FL/fl_draw.H ****  The RGB color is used directly on TrueColor displays.
  59:fltk-1.3.4-1/FL/fl_draw.H ****  For colormap visuals the nearest index in the gray
  60:fltk-1.3.4-1/FL/fl_draw.H ****  ramp or color cube is used.
  61:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
  62:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
  63:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r,g,b color components
  64:fltk-1.3.4-1/FL/fl_draw.H ****  */
  65:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(uchar r, uchar g, uchar b) {fl_graphics_driver->color(r,g,b); } // select actu
  66:fltk-1.3.4-1/FL/fl_draw.H **** /**
  67:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the last fl_color() that was set.
  68:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used for state save/restore.
  69:fltk-1.3.4-1/FL/fl_draw.H **** */
  70:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Color fl_color() {return fl_graphics_driver->color();}
  71:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
  72:fltk-1.3.4-1/FL/fl_draw.H **** 
  73:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_drawings
  74:fltk-1.3.4-1/FL/fl_draw.H ****     @{
  75:fltk-1.3.4-1/FL/fl_draw.H **** */
  76:fltk-1.3.4-1/FL/fl_draw.H **** // clip:
  77:fltk-1.3.4-1/FL/fl_draw.H **** /**
  78:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes this
  79:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack.
  80:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size
  81:fltk-1.3.4-1/FL/fl_draw.H ****  */
  82:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_clip(int x, int y, int w, int h) {fl_graphics_driver->push_clip(x,y,w,h); }
  83:fltk-1.3.4-1/FL/fl_draw.H **** /**
  84:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes this
  85:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack (deprecated).
  86:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size
  87:fltk-1.3.4-1/FL/fl_draw.H ****  \deprecated
  88:fltk-1.3.4-1/FL/fl_draw.H ****    fl_clip(int, int, int, int) is deprecated and will be removed from future releases.
  89:fltk-1.3.4-1/FL/fl_draw.H ****    Please use fl_push_clip(int x, int y, int w, int h) instead.
  90:fltk-1.3.4-1/FL/fl_draw.H ****  */
  91:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_clip fl_push_clip
  92:fltk-1.3.4-1/FL/fl_draw.H **** /**
  93:fltk-1.3.4-1/FL/fl_draw.H ****  Pushes an empty clip region onto the stack so nothing will be clipped.
  94:fltk-1.3.4-1/FL/fl_draw.H ****  */
  95:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_no_clip() {fl_graphics_driver->push_no_clip(); }
  96:fltk-1.3.4-1/FL/fl_draw.H **** /**
  97:fltk-1.3.4-1/FL/fl_draw.H ****  Restores the previous clip region.
  98:fltk-1.3.4-1/FL/fl_draw.H ****  
  99:fltk-1.3.4-1/FL/fl_draw.H ****  You must call fl_pop_clip() once for every time you call fl_push_clip().
 100:fltk-1.3.4-1/FL/fl_draw.H ****  Unpredictable results may occur if the clip stack is not empty when
 101:fltk-1.3.4-1/FL/fl_draw.H ****  you return to FLTK.
 102:fltk-1.3.4-1/FL/fl_draw.H ****  */
 103:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pop_clip() {fl_graphics_driver->pop_clip(); }
 104:fltk-1.3.4-1/FL/fl_draw.H **** /**
 105:fltk-1.3.4-1/FL/fl_draw.H ****  Does the rectangle intersect the current clip region?
 106:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size of rectangle
 107:fltk-1.3.4-1/FL/fl_draw.H ****  \returns non-zero if any of the rectangle intersects the current clip
 108:fltk-1.3.4-1/FL/fl_draw.H ****  region. If this returns 0 you don't have to draw the object.
 109:fltk-1.3.4-1/FL/fl_draw.H ****  
 110:fltk-1.3.4-1/FL/fl_draw.H ****  \note
 111:fltk-1.3.4-1/FL/fl_draw.H ****  Under X this returns 2 if the rectangle is partially clipped, 
 112:fltk-1.3.4-1/FL/fl_draw.H ****  and 1 if it is entirely inside the clip region.
 113:fltk-1.3.4-1/FL/fl_draw.H ****  */
 114:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_not_clipped(int x, int y, int w, int h) {return fl_graphics_driver->not_clipped(x,y,w
 115:fltk-1.3.4-1/FL/fl_draw.H **** /**
 116:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the rectangle with the current clip region and returns the
 117:fltk-1.3.4-1/FL/fl_draw.H ****  bounding box of the result.
 118:fltk-1.3.4-1/FL/fl_draw.H ****  
 119:fltk-1.3.4-1/FL/fl_draw.H ****  Returns non-zero if the resulting rectangle is different to the original.
 120:fltk-1.3.4-1/FL/fl_draw.H ****  This can be used to limit the necessary drawing to a rectangle.
 121:fltk-1.3.4-1/FL/fl_draw.H ****  \p W and \p H are set to zero if the rectangle is completely outside the region.
 122:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size of rectangle
 123:fltk-1.3.4-1/FL/fl_draw.H ****  \param[out] X,Y,W,H position and size of resulting bounding box.
 124:fltk-1.3.4-1/FL/fl_draw.H ****  \returns Non-zero if the resulting rectangle is different to the original.
 125:fltk-1.3.4-1/FL/fl_draw.H ****  */
 126:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_clip_box(int x , int y, int w, int h, int& X, int& Y, int& W, int& H) 
 127:fltk-1.3.4-1/FL/fl_draw.H ****   {return fl_graphics_driver->clip_box(x,y,w,h,X,Y,W,H); }
 128:fltk-1.3.4-1/FL/fl_draw.H **** /** Undoes any clobbering of clip done by your program */
 129:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_restore_clip() { fl_graphics_driver->restore_clip(); }
 130:fltk-1.3.4-1/FL/fl_draw.H **** /**
 131:fltk-1.3.4-1/FL/fl_draw.H ****  Replaces the top of the clipping stack with a clipping region of any shape.
 132:fltk-1.3.4-1/FL/fl_draw.H ****  
 133:fltk-1.3.4-1/FL/fl_draw.H ****  Fl_Region is an operating system specific type.
 134:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r clipping region
 135:fltk-1.3.4-1/FL/fl_draw.H ****  */
 136:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_clip_region(Fl_Region r) { fl_graphics_driver->clip_region(r); }
 137:fltk-1.3.4-1/FL/fl_draw.H **** /**
 138:fltk-1.3.4-1/FL/fl_draw.H ****  Returns the current clipping region.
 139:fltk-1.3.4-1/FL/fl_draw.H ****  */
 140:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Region fl_clip_region() { return fl_graphics_driver->clip_region(); }
 141:fltk-1.3.4-1/FL/fl_draw.H **** 
 142:fltk-1.3.4-1/FL/fl_draw.H **** 
 143:fltk-1.3.4-1/FL/fl_draw.H **** // points:
 144:fltk-1.3.4-1/FL/fl_draw.H **** /**
 145:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a single pixel at the given coordinates
 146:fltk-1.3.4-1/FL/fl_draw.H ****  */
 147:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_point(int x, int y) { fl_graphics_driver->point(x,y); }
 148:fltk-1.3.4-1/FL/fl_draw.H **** 
 149:fltk-1.3.4-1/FL/fl_draw.H **** // line type:
 150:fltk-1.3.4-1/FL/fl_draw.H **** /**
 151:fltk-1.3.4-1/FL/fl_draw.H ****  Sets how to draw lines (the "pen").
 152:fltk-1.3.4-1/FL/fl_draw.H ****  If you change this it is your responsibility to set it back to the default
 153:fltk-1.3.4-1/FL/fl_draw.H ****  using \c fl_line_style(0).
 154:fltk-1.3.4-1/FL/fl_draw.H ****  
 155:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] style A bitmask which is a bitwise-OR of a line style, a cap
 156:fltk-1.3.4-1/FL/fl_draw.H ****  style, and a join style. If you don't specify a dash type you
 157:fltk-1.3.4-1/FL/fl_draw.H ****  will get a solid line. If you don't specify a cap or join type
 158:fltk-1.3.4-1/FL/fl_draw.H ****  you will get a system-defined default of whatever value is
 159:fltk-1.3.4-1/FL/fl_draw.H ****  fastest.
 160:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] width The thickness of the lines in pixels. Zero results in the
 161:fltk-1.3.4-1/FL/fl_draw.H ****  system defined default, which on both X and Windows is somewhat
 162:fltk-1.3.4-1/FL/fl_draw.H ****  different and nicer than 1.
 163:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] dashes A pointer to an array of dash lengths, measured in pixels.
 164:fltk-1.3.4-1/FL/fl_draw.H ****  The first location is how long to draw a solid portion, the next
 165:fltk-1.3.4-1/FL/fl_draw.H ****  is how long to draw the gap, then the solid, etc. It is terminated
 166:fltk-1.3.4-1/FL/fl_draw.H ****  with a zero-length entry. A \c NULL pointer or a zero-length
 167:fltk-1.3.4-1/FL/fl_draw.H ****  array results in a solid line. Odd array sizes are not supported
 168:fltk-1.3.4-1/FL/fl_draw.H ****  and result in undefined behavior.
 169:fltk-1.3.4-1/FL/fl_draw.H ****  
 170:fltk-1.3.4-1/FL/fl_draw.H ****  \note      Because of how line styles are implemented on Win32 systems,
 171:fltk-1.3.4-1/FL/fl_draw.H ****  you \e must set the line style \e after setting the drawing
 172:fltk-1.3.4-1/FL/fl_draw.H ****  color. If you set the color after the line style you will lose
 173:fltk-1.3.4-1/FL/fl_draw.H ****  the line style settings.
 174:fltk-1.3.4-1/FL/fl_draw.H ****  \note      The \p dashes array does not work under Windows 95, 98 or Me,
 175:fltk-1.3.4-1/FL/fl_draw.H ****  since those operating systems do not support complex line styles.
 176:fltk-1.3.4-1/FL/fl_draw.H ****  */
 177:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line_style(int style, int width=0, char* dashes=0) {fl_graphics_driver->line_style(s
 178:fltk-1.3.4-1/FL/fl_draw.H **** enum {
 179:fltk-1.3.4-1/FL/fl_draw.H ****   FL_SOLID	= 0,		///< line style: <tt>___________</tt>
 180:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASH	= 1,		///< line style: <tt>_ _ _ _ _ _</tt>
 181:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DOT	= 2,		///< line style: <tt>. . . . . .</tt>
 182:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASHDOT	= 3,		///< line style: <tt>_ . _ . _ .</tt>
 183:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASHDOTDOT	= 4,		///< line style: <tt>_ . . _ . .</tt>
 184:fltk-1.3.4-1/FL/fl_draw.H **** 
 185:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_FLAT	= 0x100,	///< cap style: end is flat
 186:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_ROUND	= 0x200,	///< cap style: end is round
 187:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_SQUARE	= 0x300,	///< cap style: end wraps end point
 188:fltk-1.3.4-1/FL/fl_draw.H **** 
 189:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_MITER	= 0x1000,	///< join style: line join extends to a point
 190:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_ROUND	= 0x2000,	///< join style: line join is rounded
 191:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_BEVEL	= 0x3000	///< join style: line join is tidied
 192:fltk-1.3.4-1/FL/fl_draw.H **** };
 193:fltk-1.3.4-1/FL/fl_draw.H **** 
 194:fltk-1.3.4-1/FL/fl_draw.H **** // rectangles tweaked to exactly fill the pixel rectangle:
 195:fltk-1.3.4-1/FL/fl_draw.H **** 
 196:fltk-1.3.4-1/FL/fl_draw.H **** /** 
 197:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a 1-pixel border \e inside the given bounding box.
 198:fltk-1.3.4-1/FL/fl_draw.H ****  This function is meant for quick drawing of simple boxes. The behavior is 
 199:fltk-1.3.4-1/FL/fl_draw.H ****  undefined for line widths that are not 1.
 200:fltk-1.3.4-1/FL/fl_draw.H ****  */
 201:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rect(int x, int y, int w, int h) { fl_graphics_driver->rect(x,y,w,h); }
 202:fltk-1.3.4-1/FL/fl_draw.H **** 
 203:fltk-1.3.4-1/FL/fl_draw.H **** /** Draws with passed color a 1-pixel border \e inside the given bounding box */
 204:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rect(int x, int y, int w, int h, Fl_Color c) {fl_color(c); fl_rect(x,y,w,h);}
 205:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with current color a rectangle that exactly fills the given bounding box */
 206:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h) { fl_graphics_driver->rectf(x,y,w,h); }
 207:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 208:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h, Fl_Color c) {fl_color(c); fl_rectf(x,y,w,h);}
 209:fltk-1.3.4-1/FL/fl_draw.H **** 
 210:fltk-1.3.4-1/FL/fl_draw.H **** /**
 211:fltk-1.3.4-1/FL/fl_draw.H ****   Colors a rectangle with "exactly" the passed <tt>r,g,b</tt> color.
 212:fltk-1.3.4-1/FL/fl_draw.H ****   On screens with less than 24 bits of color this is done by drawing a
 213:fltk-1.3.4-1/FL/fl_draw.H ****   solid-colored block using fl_draw_image() so that the correct color
 214:fltk-1.3.4-1/FL/fl_draw.H ****   shade is produced.
 215:fltk-1.3.4-1/FL/fl_draw.H ****   */
 216:fltk-1.3.4-1/FL/fl_draw.H **** /* note: doxygen comment here to avoid triplication in os-speciic files */
 217:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_rectf(int x, int y, int w, int h, uchar r, uchar g, uchar b);
 218:fltk-1.3.4-1/FL/fl_draw.H **** 
 219:fltk-1.3.4-1/FL/fl_draw.H **** // line segments:
 220:fltk-1.3.4-1/FL/fl_draw.H **** /**
 221:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a line from (x,y) to (x1,y1)
 222:fltk-1.3.4-1/FL/fl_draw.H ****  */
 223:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1) {fl_graphics_driver->line(x,y,x1,y1); }
 224:fltk-1.3.4-1/FL/fl_draw.H **** /**
 225:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a line from (x,y) to (x1,y1) and another from (x1,y1) to (x2,y2)
 226:fltk-1.3.4-1/FL/fl_draw.H ****  */
 227:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1, int x2, int y2) {fl_graphics_driver->line(x,y,x1,
 228:fltk-1.3.4-1/FL/fl_draw.H **** 
 229:fltk-1.3.4-1/FL/fl_draw.H **** // closed line segments:
 230:fltk-1.3.4-1/FL/fl_draw.H **** /**
 231:fltk-1.3.4-1/FL/fl_draw.H ****  Outlines a 3-sided polygon with lines
 232:fltk-1.3.4-1/FL/fl_draw.H ****  */
 233:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_loop(int x, int y, int x1, int y1, int x2, int y2) {fl_graphics_driver->loop(x,y,x1,
 234:fltk-1.3.4-1/FL/fl_draw.H **** /**
 235:fltk-1.3.4-1/FL/fl_draw.H ****  Outlines a 4-sided polygon with lines
 236:fltk-1.3.4-1/FL/fl_draw.H ****  */
 237:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_loop(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3) 
 238:fltk-1.3.4-1/FL/fl_draw.H ****   {fl_graphics_driver->loop(x,y,x1,y1,x2,y2,x3,y3); }
 239:fltk-1.3.4-1/FL/fl_draw.H **** 
 240:fltk-1.3.4-1/FL/fl_draw.H **** // filled polygons
 241:fltk-1.3.4-1/FL/fl_draw.H **** /**
 242:fltk-1.3.4-1/FL/fl_draw.H ****  Fills a 3-sided polygon. The polygon must be convex.
 243:fltk-1.3.4-1/FL/fl_draw.H ****  */
 244:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_polygon(int x, int y, int x1, int y1, int x2, int y2) {fl_graphics_driver->polygon(x
 245:fltk-1.3.4-1/FL/fl_draw.H **** /**
 246:fltk-1.3.4-1/FL/fl_draw.H ****  Fills a 4-sided polygon. The polygon must be convex.
 247:fltk-1.3.4-1/FL/fl_draw.H ****  */
 248:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_polygon(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3) 
 249:fltk-1.3.4-1/FL/fl_draw.H ****   { fl_graphics_driver->polygon(x,y,x1,y1,x2,y2,x3,y3); }
 250:fltk-1.3.4-1/FL/fl_draw.H **** 
 251:fltk-1.3.4-1/FL/fl_draw.H **** // draw rectilinear lines, horizontal segment first:
 252:fltk-1.3.4-1/FL/fl_draw.H **** /**
 253:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y)
 254:fltk-1.3.4-1/FL/fl_draw.H ****  */
 255:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_xyline(int x, int y, int x1) {fl_graphics_driver->xyline(x,y,x1);}
 256:fltk-1.3.4-1/FL/fl_draw.H **** /**
 257:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y), then vertical from (x1,y) to (x1,y2)
 258:fltk-1.3.4-1/FL/fl_draw.H ****  */
 259:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_xyline(int x, int y, int x1, int y2) {fl_graphics_driver->xyline(x,y,x1,y2);}
 260:fltk-1.3.4-1/FL/fl_draw.H **** /**
 261:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y), then a vertical from (x1,y) to (x1,y2)
 262:fltk-1.3.4-1/FL/fl_draw.H ****  and then another horizontal from (x1,y2) to (x3,y2)
 263:fltk-1.3.4-1/FL/fl_draw.H ****  */
 264:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_xyline(int x, int y, int x1, int y2, int x3) {fl_graphics_driver->xyline(x,y,x1,y2,x
 265:fltk-1.3.4-1/FL/fl_draw.H **** 
 266:fltk-1.3.4-1/FL/fl_draw.H **** // draw rectilinear lines, vertical segment first:
 267:fltk-1.3.4-1/FL/fl_draw.H **** /**
 268:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a vertical line from (x,y) to (x,y1)
 269:fltk-1.3.4-1/FL/fl_draw.H ****  */
 270:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_yxline(int x, int y, int y1) {fl_graphics_driver->yxline(x,y,y1);}
 271:fltk-1.3.4-1/FL/fl_draw.H **** /**
 272:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a vertical line from (x,y) to (x,y1), then a horizontal from (x,y1) to (x2,y1)
 273:fltk-1.3.4-1/FL/fl_draw.H ****  */
 274:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_yxline(int x, int y, int y1, int x2) {fl_graphics_driver->yxline(x,y,y1,x2);}
 275:fltk-1.3.4-1/FL/fl_draw.H **** /**
 276:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a vertical line from (x,y) to (x,y1) then a horizontal from (x,y1)
 277:fltk-1.3.4-1/FL/fl_draw.H ****  to (x2,y1), then another vertical from (x2,y1) to (x2,y3)
 278:fltk-1.3.4-1/FL/fl_draw.H ****  */
 279:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_yxline(int x, int y, int y1, int x2, int y3) {fl_graphics_driver->yxline(x,y,y1,x2,y
 280:fltk-1.3.4-1/FL/fl_draw.H **** 
 281:fltk-1.3.4-1/FL/fl_draw.H **** // circular lines and pie slices (code in fl_arci.C):
 282:fltk-1.3.4-1/FL/fl_draw.H **** /**
 283:fltk-1.3.4-1/FL/fl_draw.H ****  Draw ellipse sections using integer coordinates.
 284:fltk-1.3.4-1/FL/fl_draw.H ****  
 285:fltk-1.3.4-1/FL/fl_draw.H ****  These functions match the rather limited circle drawing code provided by X
 286:fltk-1.3.4-1/FL/fl_draw.H ****  and WIN32. The advantage over using fl_arc with floating point coordinates
 287:fltk-1.3.4-1/FL/fl_draw.H ****  is that they are faster because they often use the hardware, and they draw
 288:fltk-1.3.4-1/FL/fl_draw.H ****  much nicer small circles, since the small sizes are often hard-coded bitmaps.
 289:fltk-1.3.4-1/FL/fl_draw.H ****  
 290:fltk-1.3.4-1/FL/fl_draw.H ****  If a complete circle is drawn it will fit inside the passed bounding box.
 291:fltk-1.3.4-1/FL/fl_draw.H ****  The two angles are measured in degrees counter-clockwise from 3 o'clock and
 292:fltk-1.3.4-1/FL/fl_draw.H ****  are the starting and ending angle of the arc, \p a2 must be greater or equal
 293:fltk-1.3.4-1/FL/fl_draw.H ****  to \p a1.
 294:fltk-1.3.4-1/FL/fl_draw.H ****  
 295:fltk-1.3.4-1/FL/fl_draw.H ****  fl_arc() draws a series of lines to approximate the arc. Notice that the
 296:fltk-1.3.4-1/FL/fl_draw.H ****  integer version of fl_arc() has a different number of arguments than the
 297:fltk-1.3.4-1/FL/fl_draw.H ****  double version fl_arc(double x, double y, double r, double start, double end)
 298:fltk-1.3.4-1/FL/fl_draw.H ****  
 299:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h bounding box of complete circle
 300:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] a1,a2 start and end angles of arc measured in degrees
 301:fltk-1.3.4-1/FL/fl_draw.H ****  counter-clockwise from 3 o'clock. \p a2 must be greater
 302:fltk-1.3.4-1/FL/fl_draw.H ****  than or equal to \p a1.
 303:fltk-1.3.4-1/FL/fl_draw.H ****  */
 304:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_arc(int x, int y, int w, int h, double a1, double a2) {fl_graphics_driver->arc(x,y,w
 305:fltk-1.3.4-1/FL/fl_draw.H **** /**
 306:fltk-1.3.4-1/FL/fl_draw.H ****  Draw filled ellipse sections using integer coordinates.
 307:fltk-1.3.4-1/FL/fl_draw.H ****  
 308:fltk-1.3.4-1/FL/fl_draw.H ****  Like fl_arc(), but fl_pie() draws a filled-in pie slice.
 309:fltk-1.3.4-1/FL/fl_draw.H ****  This slice may extend outside the line drawn by fl_arc();
 310:fltk-1.3.4-1/FL/fl_draw.H ****  to avoid this use w - 1 and h - 1.
 311:fltk-1.3.4-1/FL/fl_draw.H ****  
 312:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h bounding box of complete circle
 313:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] a1,a2 start and end angles of arc measured in degrees
 314:fltk-1.3.4-1/FL/fl_draw.H ****  counter-clockwise from 3 o'clock. \p a2 must be greater
 315:fltk-1.3.4-1/FL/fl_draw.H ****  than or equal to \p a1.
 316:fltk-1.3.4-1/FL/fl_draw.H ****  */
 317:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pie(int x, int y, int w, int h, double a1, double a2) {fl_graphics_driver->pie(x,y,w
 318:fltk-1.3.4-1/FL/fl_draw.H **** /** fl_chord declaration is a place holder - the function does not yet exist */
 319:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_chord(int x, int y, int w, int h, double a1, double a2); // nyi
 320:fltk-1.3.4-1/FL/fl_draw.H **** 
 321:fltk-1.3.4-1/FL/fl_draw.H **** // scalable drawing code (code in fl_vertex.C and fl_arc.C):
 322:fltk-1.3.4-1/FL/fl_draw.H **** /**
 323:fltk-1.3.4-1/FL/fl_draw.H ****  Saves the current transformation matrix on the stack. 
 324:fltk-1.3.4-1/FL/fl_draw.H ****  The maximum depth of the stack is 32.
 325:fltk-1.3.4-1/FL/fl_draw.H ****  */
 326:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_matrix() { fl_graphics_driver->push_matrix(); }
 327:fltk-1.3.4-1/FL/fl_draw.H **** /**
 328:fltk-1.3.4-1/FL/fl_draw.H ****  Restores the current transformation matrix from the stack.
 329:fltk-1.3.4-1/FL/fl_draw.H ****  */
 330:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pop_matrix() { fl_graphics_driver->pop_matrix(); }
 331:fltk-1.3.4-1/FL/fl_draw.H **** /**
 332:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates scaling transformation onto the current one.
 333:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y scale factors in x-direction and y-direction
 334:fltk-1.3.4-1/FL/fl_draw.H ****  */
 335:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_scale(double x, double y) { fl_graphics_driver->scale(x, y); }
 336:fltk-1.3.4-1/FL/fl_draw.H **** /**
 337:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates scaling transformation onto the current one.
 338:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x scale factor in both x-direction and y-direction
 339:fltk-1.3.4-1/FL/fl_draw.H ****  */
 340:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_scale(double x) { fl_graphics_driver->scale(x, x); }
 341:fltk-1.3.4-1/FL/fl_draw.H **** /**
 342:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates translation transformation onto the current one.
 343:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y translation factor in x-direction and y-direction
 344:fltk-1.3.4-1/FL/fl_draw.H ****  */
 345:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_translate(double x, double y) { fl_graphics_driver->translate(x, y); }
 346:fltk-1.3.4-1/FL/fl_draw.H **** /**
 347:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates rotation transformation onto the current one.
 348:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] d - rotation angle, counter-clockwise in degrees (not radians)
 349:fltk-1.3.4-1/FL/fl_draw.H ****  */
 350:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rotate(double d) { fl_graphics_driver->rotate(d); }
 351:fltk-1.3.4-1/FL/fl_draw.H **** /**
 352:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates another transformation onto the current one.
 353:fltk-1.3.4-1/FL/fl_draw.H ****  
 354:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] a,b,c,d,x,y transformation matrix elements such that
 355:fltk-1.3.4-1/FL/fl_draw.H ****  <tt> X' = aX + cY + x </tt> and <tt> Y' = bX +dY + y </tt>
 356:fltk-1.3.4-1/FL/fl_draw.H ****  */
 357:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_mult_matrix(double a, double b, double c, double d, double x,double y) 
 358:fltk-1.3.4-1/FL/fl_draw.H **** 	{ fl_graphics_driver->mult_matrix(a, b, c, d, x, y); }
 359:fltk-1.3.4-1/FL/fl_draw.H **** /**
 360:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a list of points. Points are added to the list with fl_vertex()
 361:fltk-1.3.4-1/FL/fl_draw.H ****  */
 362:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_points() {fl_graphics_driver->begin_points(); }
 363:fltk-1.3.4-1/FL/fl_draw.H **** /**
 364:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a list of lines.
 365:fltk-1.3.4-1/FL/fl_draw.H ****  */
 366:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_line() {fl_graphics_driver->begin_line(); }
 367:fltk-1.3.4-1/FL/fl_draw.H **** /**
 368:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a closed sequence of lines.
 369:fltk-1.3.4-1/FL/fl_draw.H ****  */
 370:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_loop() {fl_graphics_driver->begin_loop(); }
 371:fltk-1.3.4-1/FL/fl_draw.H **** /**
 372:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a convex filled polygon.
 373:fltk-1.3.4-1/FL/fl_draw.H ****  */
 374:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_polygon() {fl_graphics_driver->begin_polygon(); }
 375:fltk-1.3.4-1/FL/fl_draw.H **** /**
 376:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a single vertex to the current path.
 377:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 378:fltk-1.3.4-1/FL/fl_draw.H ****  */
 379:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_vertex(double x, double y) {fl_graphics_driver->vertex(x,y); }
 380:fltk-1.3.4-1/FL/fl_draw.H **** /**
 381:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points on a Bezier curve to the path.
 382:fltk-1.3.4-1/FL/fl_draw.H ****  The curve ends (and two of the points) are at X0,Y0 and X3,Y3.
 383:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X0,Y0 curve start point
 384:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X1,Y1 curve control point
 385:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X2,Y2 curve control point
 386:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X3,Y3 curve end point
 387:fltk-1.3.4-1/FL/fl_draw.H ****  */
 388:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double X3, d
 389:fltk-1.3.4-1/FL/fl_draw.H ****   {fl_graphics_driver->curve(X0,Y0,X1,Y1,X2,Y2,X3,Y3); }
 390:fltk-1.3.4-1/FL/fl_draw.H **** /**
 391:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points to the current path on the arc of a circle.
 392:fltk-1.3.4-1/FL/fl_draw.H ****  You can get elliptical paths by using scale and rotate before calling fl_arc().
 393:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,r center and radius of circular arc
 394:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] start,end angles of start and end of arc measured in degrees
 395:fltk-1.3.4-1/FL/fl_draw.H ****  counter-clockwise from 3 o'clock. If \p end is less than \p start
 396:fltk-1.3.4-1/FL/fl_draw.H ****  then it draws the arc in a clockwise direction.
 397:fltk-1.3.4-1/FL/fl_draw.H **** 
 398:fltk-1.3.4-1/FL/fl_draw.H ****  Examples:
 399:fltk-1.3.4-1/FL/fl_draw.H ****  \code
 400:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw an arc of points
 401:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_points();
 402:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(100.0, 100.0, 50.0, 0.0, 180.0);
 403:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_points();
 404:fltk-1.3.4-1/FL/fl_draw.H **** 
 405:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw arc with a line
 406:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_line();
 407:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(200.0, 100.0, 50.0, 0.0, 180.0);
 408:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_line();
 409:fltk-1.3.4-1/FL/fl_draw.H **** 
 410:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw filled arc
 411:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_polygon();
 412:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(300.0, 100.0, 50.0, 0.0, 180.0);
 413:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_polygon();
 414:fltk-1.3.4-1/FL/fl_draw.H ****  \endcode
 415:fltk-1.3.4-1/FL/fl_draw.H ****  */
 416:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_arc(double x, double y, double r, double start, double end) {fl_graphics_driver->arc
 417:fltk-1.3.4-1/FL/fl_draw.H **** /**
 418:fltk-1.3.4-1/FL/fl_draw.H ****  fl_circle() is equivalent to fl_arc(x,y,r,0,360), but may be faster.
 419:fltk-1.3.4-1/FL/fl_draw.H ****  
 420:fltk-1.3.4-1/FL/fl_draw.H ****  It must be the \e only thing in the path: if you want a circle as part of
 421:fltk-1.3.4-1/FL/fl_draw.H ****  a complex polygon you must use fl_arc()
 422:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,r center and radius of circle
 423:fltk-1.3.4-1/FL/fl_draw.H ****  */
 424:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_circle(double x, double y, double r) {fl_graphics_driver->circle(x,y,r); }
 425:fltk-1.3.4-1/FL/fl_draw.H **** /**
 426:fltk-1.3.4-1/FL/fl_draw.H ****  Ends list of points, and draws.
 427:fltk-1.3.4-1/FL/fl_draw.H ****  */
 428:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_points() {fl_graphics_driver->end_points(); }
 429:fltk-1.3.4-1/FL/fl_draw.H **** /**
 430:fltk-1.3.4-1/FL/fl_draw.H ****  Ends list of lines, and draws.
 431:fltk-1.3.4-1/FL/fl_draw.H ****  */
 432:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_line() {fl_graphics_driver->end_line(); }
 433:fltk-1.3.4-1/FL/fl_draw.H **** /**
 434:fltk-1.3.4-1/FL/fl_draw.H ****  Ends closed sequence of lines, and draws.
 435:fltk-1.3.4-1/FL/fl_draw.H ****  */
 436:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_loop() {fl_graphics_driver->end_loop(); }
 437:fltk-1.3.4-1/FL/fl_draw.H **** /**
 438:fltk-1.3.4-1/FL/fl_draw.H ****  Ends convex filled polygon, and draws.
 439:fltk-1.3.4-1/FL/fl_draw.H ****  */
 440:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_polygon() {fl_graphics_driver->end_polygon(); }
 441:fltk-1.3.4-1/FL/fl_draw.H **** /**
 442:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a complex filled polygon.
 443:fltk-1.3.4-1/FL/fl_draw.H ****  
 444:fltk-1.3.4-1/FL/fl_draw.H ****  The polygon may be concave, may have holes in it, or may be several
 445:fltk-1.3.4-1/FL/fl_draw.H ****  disconnected pieces. Call fl_gap() to separate loops of the path.
 446:fltk-1.3.4-1/FL/fl_draw.H ****  
 447:fltk-1.3.4-1/FL/fl_draw.H ****  To outline the polygon, use fl_begin_loop() and replace each fl_gap()
 448:fltk-1.3.4-1/FL/fl_draw.H ****  with fl_end_loop();fl_begin_loop() pairs.
 449:fltk-1.3.4-1/FL/fl_draw.H ****  
 450:fltk-1.3.4-1/FL/fl_draw.H ****  \note
 451:fltk-1.3.4-1/FL/fl_draw.H ****  For portability, you should only draw polygons that appear the same
 452:fltk-1.3.4-1/FL/fl_draw.H ****  whether "even/odd" or "non-zero" winding rules are used to fill them.
 453:fltk-1.3.4-1/FL/fl_draw.H ****  Holes should be drawn in the opposite direction to the outside loop.
 454:fltk-1.3.4-1/FL/fl_draw.H ****  */
 455:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_complex_polygon() {fl_graphics_driver->begin_complex_polygon(); }
 456:fltk-1.3.4-1/FL/fl_draw.H **** /**
 457:fltk-1.3.4-1/FL/fl_draw.H ****  Call fl_gap() to separate loops of the path.
 458:fltk-1.3.4-1/FL/fl_draw.H ****  
 459:fltk-1.3.4-1/FL/fl_draw.H ****  It is unnecessary but harmless to call fl_gap() before the first vertex,
 460:fltk-1.3.4-1/FL/fl_draw.H ****  after the last vertex, or several times in a row.
 461:fltk-1.3.4-1/FL/fl_draw.H ****  */
 462:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_gap() {fl_graphics_driver->gap(); }
 463:fltk-1.3.4-1/FL/fl_draw.H **** /**
 464:fltk-1.3.4-1/FL/fl_draw.H ****  Ends complex filled polygon, and draws.
 465:fltk-1.3.4-1/FL/fl_draw.H ****  */
 466:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_complex_polygon() {fl_graphics_driver->end_complex_polygon(); }
 467:fltk-1.3.4-1/FL/fl_draw.H **** // get and use transformed positions:
 468:fltk-1.3.4-1/FL/fl_draw.H **** /**
 469:fltk-1.3.4-1/FL/fl_draw.H ****  Transforms coordinate using the current transformation matrix.
 470:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 471:fltk-1.3.4-1/FL/fl_draw.H ****  */
 472:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_transform_x(double x, double y) {return fl_graphics_driver->transform_x(x, y); }
 473:fltk-1.3.4-1/FL/fl_draw.H **** /**
 474:fltk-1.3.4-1/FL/fl_draw.H ****  Transforms coordinate using the current transformation matrix.
 475:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 476:fltk-1.3.4-1/FL/fl_draw.H ****  */
 477:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_transform_y(double x, double y) {return fl_graphics_driver->transform_y(x, y); }
 478:fltk-1.3.4-1/FL/fl_draw.H **** /**
 479:fltk-1.3.4-1/FL/fl_draw.H ****  Transforms distance using current transformation matrix.
 480:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 481:fltk-1.3.4-1/FL/fl_draw.H ****  */
 482:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_transform_dx(double x, double y) {return fl_graphics_driver->transform_dx(x, y); }
 483:fltk-1.3.4-1/FL/fl_draw.H **** /**
 484:fltk-1.3.4-1/FL/fl_draw.H ****  Transforms distance using current transformation matrix.
 485:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 486:fltk-1.3.4-1/FL/fl_draw.H ****  */
 487:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_transform_dy(double x, double y) {return fl_graphics_driver->transform_dy(x, y); }
 488:fltk-1.3.4-1/FL/fl_draw.H **** /**
 489:fltk-1.3.4-1/FL/fl_draw.H ****  Adds coordinate pair to the vertex list without further transformations.
 490:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] xf,yf transformed coordinate
 491:fltk-1.3.4-1/FL/fl_draw.H ****  */
 492:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_transformed_vertex(double xf, double yf) {fl_graphics_driver->transformed_vertex(xf,
 493:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
 494:fltk-1.3.4-1/FL/fl_draw.H **** 
 495:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup  fl_attributes
 496:fltk-1.3.4-1/FL/fl_draw.H ****     @{ */
 497:fltk-1.3.4-1/FL/fl_draw.H **** /* NOTE: doxygen comments here to avoid triplication in os-specific sources */
 498:fltk-1.3.4-1/FL/fl_draw.H **** 
 499:fltk-1.3.4-1/FL/fl_draw.H **** // Fonts:
 500:fltk-1.3.4-1/FL/fl_draw.H **** /**
 501:fltk-1.3.4-1/FL/fl_draw.H ****   Sets the current font, which is then used in various drawing routines.
 502:fltk-1.3.4-1/FL/fl_draw.H ****   You may call this outside a draw context if necessary to call fl_width(),
 503:fltk-1.3.4-1/FL/fl_draw.H ****   but on X this will open the display.
 504:fltk-1.3.4-1/FL/fl_draw.H **** 
 505:fltk-1.3.4-1/FL/fl_draw.H ****   The font is identified by a \p face and a \p size.
 506:fltk-1.3.4-1/FL/fl_draw.H ****   The size of the font is measured in pixels and not "points".
 507:fltk-1.3.4-1/FL/fl_draw.H ****   Lines should be spaced \p size pixels apart or more.
 508:fltk-1.3.4-1/FL/fl_draw.H **** */
 509:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_font(Fl_Font face, Fl_Fontsize fsize) { fl_graphics_driver->font(face,fsize); }
 510:fltk-1.3.4-1/FL/fl_draw.H **** 
 511:fltk-1.3.4-1/FL/fl_draw.H **** /**
 512:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the \p face set by the most recent call to fl_font().
 513:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used to save/restore the font.
 514:fltk-1.3.4-1/FL/fl_draw.H **** */
 515:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Font fl_font() {return fl_graphics_driver->font();}
 516:fltk-1.3.4-1/FL/fl_draw.H **** /**
 517:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the \p size set by the most recent call to fl_font().
 518:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used to save/restore the font.
 519:fltk-1.3.4-1/FL/fl_draw.H **** */
 520:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Fontsize fl_size() {return fl_graphics_driver->size();}
 521:fltk-1.3.4-1/FL/fl_draw.H **** 
 522:fltk-1.3.4-1/FL/fl_draw.H **** // information you can get about the current font:
 523:fltk-1.3.4-1/FL/fl_draw.H **** /**
 524:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the recommended minimum line spacing for the current font.
 525:fltk-1.3.4-1/FL/fl_draw.H ****   You can also use the value of \p size passed to fl_font()
 526:fltk-1.3.4-1/FL/fl_draw.H **** */
 527:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_height() {return fl_graphics_driver->height();}
 528:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 529:fltk-1.3.4-1/FL/fl_draw.H **** /**
 530:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the recommended distance above the bottom of a fl_height() tall box to
 531:fltk-1.3.4-1/FL/fl_draw.H ****   draw the text at so it looks centered vertically in that box.
 532:fltk-1.3.4-1/FL/fl_draw.H **** */
 533:fltk-1.3.4-1/FL/fl_draw.H **** inline int  fl_descent() {return fl_graphics_driver->descent();}
 534:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a nul-terminated string
 535:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size. */
 536:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT double fl_width(const char* txt);
 537:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a sequence of \p n characters
 538:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size. */
 539:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_width(const char* txt, int n) {return fl_graphics_driver->width(txt, n);}
 540:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a single character
 541:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size.
 542:fltk-1.3.4-1/FL/fl_draw.H ****     \note if a valid fl_gc is NOT found then it uses the first window gc,
 543:fltk-1.3.4-1/FL/fl_draw.H ****     or the screen gc if no fltk window is available when called. */
 544:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_width(unsigned int c)  {return fl_graphics_driver->width(c);}
 545:fltk-1.3.4-1/FL/fl_draw.H **** /** Determines the minimum pixel dimensions of a nul-terminated string.
 546:fltk-1.3.4-1/FL/fl_draw.H **** 
 547:fltk-1.3.4-1/FL/fl_draw.H ****   Usage: given a string "txt" drawn using fl_draw(txt, x, y) you would determine
 548:fltk-1.3.4-1/FL/fl_draw.H ****   its pixel extents on the display using fl_text_extents(txt, dx, dy, wo, ho)
 549:fltk-1.3.4-1/FL/fl_draw.H ****   such that a bounding box that exactly fits around the text could be drawn with
 550:fltk-1.3.4-1/FL/fl_draw.H ****   fl_rect(x+dx, y+dy, wo, ho). Note the dx, dy values hold the offset of the first
 551:fltk-1.3.4-1/FL/fl_draw.H ****   "colored in" pixel of the string, from the draw origin.
 552:fltk-1.3.4-1/FL/fl_draw.H **** 
 553:fltk-1.3.4-1/FL/fl_draw.H ****   No FLTK symbol expansion will be performed.
 554:fltk-1.3.4-1/FL/fl_draw.H **** */
 555:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_text_extents(const char*, int& dx, int& dy, int& w, int& h); // NO fltk symbol ex
 556:fltk-1.3.4-1/FL/fl_draw.H **** /** Determines the minimum pixel dimensions of a sequence of \p n characters.
 557:fltk-1.3.4-1/FL/fl_draw.H **** \see fl_text_extents(const char*, int& dx, int& dy, int& w, int& h)
 558:fltk-1.3.4-1/FL/fl_draw.H **** */
 559:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_text_extents(const char *t, int n, int& dx, int& dy, int& w, int& h)
 560:fltk-1.3.4-1/FL/fl_draw.H ****   {fl_graphics_driver->text_extents(t, n, dx, dy, w, h);}
 561:fltk-1.3.4-1/FL/fl_draw.H **** 
 562:fltk-1.3.4-1/FL/fl_draw.H **** // font encoding:
 563:fltk-1.3.4-1/FL/fl_draw.H **** // Note: doxygen comments here to avoid duplication for os-sepecific cases
 564:fltk-1.3.4-1/FL/fl_draw.H **** /**
 565:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from Windows/X11 latin1 character set to local encoding.
 566:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (latin1 encoding)
 567:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 568:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 569:fltk-1.3.4-1/FL/fl_draw.H ****   */
 570:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_latin1_to_local(const char *t, int n=-1);
 571:fltk-1.3.4-1/FL/fl_draw.H **** /**
 572:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from local encoding to Windowx/X11 latin1 character set.
 573:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (local encoding)
 574:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 575:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 576:fltk-1.3.4-1/FL/fl_draw.H ****   */
 577:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_local_to_latin1(const char *t, int n=-1);
 578:fltk-1.3.4-1/FL/fl_draw.H **** /**
 579:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from Mac Roman character set to local encoding.
 580:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (Mac Roman encoding)
 581:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 582:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 583:fltk-1.3.4-1/FL/fl_draw.H ****   */
 584:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_mac_roman_to_local(const char *t, int n=-1);
 585:fltk-1.3.4-1/FL/fl_draw.H **** /**
 586:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from local encoding to Mac Roman character set.
 587:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (local encoding)
 588:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 589:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 590:fltk-1.3.4-1/FL/fl_draw.H ****   */
 591:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_local_to_mac_roman(const char *t, int n=-1);
 592:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
 593:fltk-1.3.4-1/FL/fl_draw.H **** 
 594:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup  fl_drawings
 595:fltk-1.3.4-1/FL/fl_draw.H ****     @{ */
 596:fltk-1.3.4-1/FL/fl_draw.H **** /**
 597:fltk-1.3.4-1/FL/fl_draw.H ****   Draws a nul-terminated UTF-8 string starting at the given \p x, \p y location.
 598:fltk-1.3.4-1/FL/fl_draw.H **** 
 599:fltk-1.3.4-1/FL/fl_draw.H ****   Text is aligned to the left and to the baseline of the font.
 600:fltk-1.3.4-1/FL/fl_draw.H ****   To align to the bottom, subtract fl_descent() from \p y.
 601:fltk-1.3.4-1/FL/fl_draw.H ****   To align to the top, subtract fl_descent() and add fl_height().
 602:fltk-1.3.4-1/FL/fl_draw.H ****   This version of fl_draw provides direct access to the text drawing
 603:fltk-1.3.4-1/FL/fl_draw.H ****   function of the underlying OS. It does not apply any special handling
 604:fltk-1.3.4-1/FL/fl_draw.H ****   to control characters.
 605:fltk-1.3.4-1/FL/fl_draw.H **** */
 606:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(const char* str, int x, int y);
 607:fltk-1.3.4-1/FL/fl_draw.H **** /**
 608:fltk-1.3.4-1/FL/fl_draw.H ****   Draws a nul-terminated UTF-8 string starting at the given \p x, \p y
 609:fltk-1.3.4-1/FL/fl_draw.H ****   location and rotating \p angle degrees counter-clockwise.
 610:fltk-1.3.4-1/FL/fl_draw.H ****   This version of fl_draw provides direct access to the text drawing
 611:fltk-1.3.4-1/FL/fl_draw.H ****   function of the underlying OS and is supported by Xft, Win32 and MacOS
 612:fltk-1.3.4-1/FL/fl_draw.H ****   fltk subsets.
 613:fltk-1.3.4-1/FL/fl_draw.H **** */
 614:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(int angle, const char* str, int x, int y);
 615:fltk-1.3.4-1/FL/fl_draw.H **** /**
 616:fltk-1.3.4-1/FL/fl_draw.H ****  Draws starting at the given \p x, \p y location a UTF-8 string of length \p n bytes.
 617:fltk-1.3.4-1/FL/fl_draw.H **** */
 618:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw(const char* str, int n, int x, int y) {fl_graphics_driver->draw(str,n,x,y); }
 619:fltk-1.3.4-1/FL/fl_draw.H **** /**
 620:fltk-1.3.4-1/FL/fl_draw.H ****   Draws at the given \p x, \p y location a UTF-8 string of length \p n bytes
 621:fltk-1.3.4-1/FL/fl_draw.H ****   rotating \p angle degrees counter-clockwise.
 622:fltk-1.3.4-1/FL/fl_draw.H **** 
 623:fltk-1.3.4-1/FL/fl_draw.H ****   \note When using X11 (Unix, Linux, Cygwin et al.) this needs Xft to work.
 624:fltk-1.3.4-1/FL/fl_draw.H **** 	Under plain X11 (w/o Xft) rotated text is not supported by FLTK.
 625:fltk-1.3.4-1/FL/fl_draw.H **** 	A warning will be issued to stderr at runtime (only once) if you
 626:fltk-1.3.4-1/FL/fl_draw.H **** 	use this method with an angle other than 0.
 627:fltk-1.3.4-1/FL/fl_draw.H **** */
 628:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw(int angle, const char* str, int n, int x, int y) {fl_graphics_driver->draw(angl
 629:fltk-1.3.4-1/FL/fl_draw.H **** /**
 630:fltk-1.3.4-1/FL/fl_draw.H ****   Draws a UTF-8 string of length \p n bytes right to left starting at the given \p x, \p y location
 631:fltk-1.3.4-1/FL/fl_draw.H **** */
 632:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rtl_draw(const char* str, int n, int x, int y) {fl_graphics_driver->rtl_draw(str,n,x
 633:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_measure(const char* str, int& x, int& y,
 634:fltk-1.3.4-1/FL/fl_draw.H ****                           int draw_symbols = 1);
 635:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(const char* str, int x, int y, int w, int h,
 636:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Align align,
 637:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Image* img=0, int draw_symbols = 1);
 638:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(const char* str, int x, int y, int w, int h,
 639:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Align align,
 640:fltk-1.3.4-1/FL/fl_draw.H ****                        void (*callthis)(const char *,int,int,int),
 641:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Image* img=0, int draw_symbols = 1);
 642:fltk-1.3.4-1/FL/fl_draw.H **** 
 643:fltk-1.3.4-1/FL/fl_draw.H **** // boxtypes:
 644:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_frame(const char* s, int x, int y, int w, int h);
 645:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_frame2(const char* s, int x, int y, int w, int h);
 646:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw_box(Fl_Boxtype, int x, int y, int w, int h, Fl_Color);
 647:fltk-1.3.4-1/FL/fl_draw.H **** 
 648:fltk-1.3.4-1/FL/fl_draw.H **** // images:
 649:fltk-1.3.4-1/FL/fl_draw.H **** 
 650:fltk-1.3.4-1/FL/fl_draw.H **** /**
 651:fltk-1.3.4-1/FL/fl_draw.H ****   Draws an 8-bit per color RGB or luminance image.
 652:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] buf points at the "r" data of the top-left pixel.
 653:fltk-1.3.4-1/FL/fl_draw.H ****                  Color data must be in <tt>r,g,b</tt> order.
 654:fltk-1.3.4-1/FL/fl_draw.H **** 		 Luminance data is only one <tt>gray</tt> byte.
 655:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] X,Y position where to put top-left corner of image
 656:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] W,H size of the image
 657:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] D   delta to add to the pointer between pixels. It may be
 658:fltk-1.3.4-1/FL/fl_draw.H ****                  any value greater than or equal to 1, or it can be
 659:fltk-1.3.4-1/FL/fl_draw.H **** 		 negative to flip the image horizontally
 660:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] L   delta to add to the pointer between lines (if 0 is
 661:fltk-1.3.4-1/FL/fl_draw.H ****                  passed it uses \p W * \p D), and may be larger than
 662:fltk-1.3.4-1/FL/fl_draw.H **** 		 \p W * \p D to crop data, or negative to flip the
 663:fltk-1.3.4-1/FL/fl_draw.H **** 		 image vertically
 664:fltk-1.3.4-1/FL/fl_draw.H **** 
 665:fltk-1.3.4-1/FL/fl_draw.H ****   It is highly recommended that you put the following code before the
 666:fltk-1.3.4-1/FL/fl_draw.H ****   first <tt>show()</tt> of \e any window in your program to get rid of
 667:fltk-1.3.4-1/FL/fl_draw.H ****   the dithering if possible:
 668:fltk-1.3.4-1/FL/fl_draw.H ****   \code
 669:fltk-1.3.4-1/FL/fl_draw.H ****   Fl::visual(FL_RGB);
 670:fltk-1.3.4-1/FL/fl_draw.H ****   \endcode
 671:fltk-1.3.4-1/FL/fl_draw.H **** 
 672:fltk-1.3.4-1/FL/fl_draw.H ****   Gray scale (1-channel) images may be drawn. This is done if
 673:fltk-1.3.4-1/FL/fl_draw.H ****   <tt>abs(D)</tt> is less than 3, or by calling fl_draw_image_mono().
 674:fltk-1.3.4-1/FL/fl_draw.H ****   Only one 8-bit sample is used for each pixel, and on screens with
 675:fltk-1.3.4-1/FL/fl_draw.H ****   different numbers of bits for red, green, and blue only gray colors
 676:fltk-1.3.4-1/FL/fl_draw.H ****   are used. Setting \p D greater than 1 will let you display one channel
 677:fltk-1.3.4-1/FL/fl_draw.H ****   of a color image.
 678:fltk-1.3.4-1/FL/fl_draw.H **** 
 679:fltk-1.3.4-1/FL/fl_draw.H ****   \par Note:
 680:fltk-1.3.4-1/FL/fl_draw.H ****   The X version does not support all possible visuals. If FLTK cannot
 681:fltk-1.3.4-1/FL/fl_draw.H ****   draw the image in the current visual it will abort. FLTK supports
 682:fltk-1.3.4-1/FL/fl_draw.H ****   any visual of 8 bits or less, and all common TrueColor visuals up
 683:fltk-1.3.4-1/FL/fl_draw.H ****   to 32 bits.
 684:fltk-1.3.4-1/FL/fl_draw.H ****   */
 685:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0)
 686:fltk-1.3.4-1/FL/fl_draw.H ****   { fl_graphics_driver->draw_image(buf, X, Y, W, H, D, L); }
 910              		.loc 4 686 0
 911 0149 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 911      000000
 912 0150 89EA     		movl	%ebp, %edx
 913 0152 4489E1   		movl	%r12d, %ecx
 914 0155 4889DE   		movq	%rbx, %rsi
 915 0158 488B07   		movq	(%rdi), %rax
 916 015b 6A00     		pushq	$0
 917              		.cfi_def_cfa_offset 88
 918 015d 6A04     		pushq	$4
 919              		.cfi_def_cfa_offset 96
 920 015f FF907801 		call	*376(%rax)
 920      0000
 921              	.LVL114:
 922              	.LBE94:
 923              	.LBE93:
 924              		.loc 1 289 0
 925 0165 4889DF   		movq	%rbx, %rdi
 926 0168 E8000000 		call	_ZdaPv
 926      00
 927              	.LVL115:
 928 016d 58       		popq	%rax
 929              		.cfi_def_cfa_offset 88
 930              		.loc 1 290 0
 931 016e B8010000 		movl	$1, %eax
 931      00
 932 0173 5A       		popq	%rdx
 933              		.cfi_def_cfa_offset 80
 934 0174 E9C1FEFF 		jmp	.L89
 934      FF
 935              	.LVL116:
 936 0179 0F1F8000 		.p2align 4,,10
 936      000000
 937              		.p2align 3
 938              	.L109:
 939              		.loc 1 248 0 discriminator 1
 940 0180 4889DF   		movq	%rbx, %rdi
 941 0183 E8000000 		call	_ZdaPv
 941      00
 942              	.LVL117:
 943 0188 8B44240C 		movl	12(%rsp), %eax
 944 018c E9A9FEFF 		jmp	.L89
 944      FF
 945              	.L110:
 946 0191 448B4C24 		movl	20(%rsp), %r9d
 946      14
 947 0196 448B4424 		movl	16(%rsp), %r8d
 947      10
 948 019b EBAC     		jmp	.L92
 949              	.LVL118:
 950              	.L108:
 951              		.loc 1 291 0
 952 019d E8000000 		call	__stack_chk_fail
 952      00
 953              	.LVL119:
 954              		.cfi_endproc
 955              	.LFE486:
 957              		.section	.text.unlikely._Z14fl_draw_pixmapPKPKciij
 958              	.LCOLDE4:
 959              		.section	.text._Z14fl_draw_pixmapPKPKciij
 960              	.LHOTE4:
 961              		.section	.text.unlikely._Z14fl_draw_pixmapPKPciij,"ax",@progbits
 962              	.LCOLDB5:
 963              		.section	.text._Z14fl_draw_pixmapPKPciij,"ax",@progbits
 964              	.LHOTB5:
 965              		.p2align 4,,15
 966              		.globl	_Z14fl_draw_pixmapPKPciij
 968              	_Z14fl_draw_pixmapPKPciij:
 969              	.LFB484:
 970              		.loc 1 78 0
 971              		.cfi_startproc
 972              	.LVL120:
 973              		.loc 1 79 0
 974 0000 E9000000 		jmp	_Z14fl_draw_pixmapPKPKciij
 974      00
 975              	.LVL121:
 976              		.cfi_endproc
 977              	.LFE484:
 979              		.section	.text.unlikely._Z14fl_draw_pixmapPKPciij
 980              	.LCOLDE5:
 981              		.section	.text._Z14fl_draw_pixmapPKPciij
 982              	.LHOTE5:
 983              		.globl	fl_mask_bitmap
 984              		.section	.bss.fl_mask_bitmap,"aw",@nobits
 985              		.align 8
 988              	fl_mask_bitmap:
 989 0000 00000000 		.zero	8
 989      00000000 
 990              		.section	.bss._ZL15chars_per_pixel,"aw",@nobits
 991              		.align 4
 994              	_ZL15chars_per_pixel:
 995 0000 00000000 		.zero	4
 996              		.section	.bss._ZL7ncolors,"aw",@nobits
 997              		.align 4
 1000              	_ZL7ncolors:
 1001 0000 00000000 		.zero	4
 1002              		.text
 1003              	.Letext0:
 1004              		.section	.text.unlikely._Z17fl_measure_pixmapPKPKcRiS3_
 1005              	.Letext_cold0:
 1006              		.file 5 "fltk-1.3.4-1/FL/fl_types.h"
 1007              		.file 6 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1008              		.file 7 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1009              		.file 8 "/usr/include/libio.h"
 1010              		.file 9 "fltk-1.3.4-1/FL/Enumerations.H"
 1011              		.file 10 "fltk-1.3.4-1/FL/Fl.H"
 1012              		.file 11 "fltk-1.3.4-1/FL/Fl_Widget.H"
 1013              		.file 12 "fltk-1.3.4-1/FL/Fl_Image.H"
 1014              		.file 13 "fltk-1.3.4-1/FL/Fl_Device.H"
 1015              		.file 14 "/usr/include/stdio.h"
 1016              		.file 15 "fltk-1.3.4-1/FL/x.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_draw_pixmap.cxx
     /tmp/ccjePpW4.s:17     .text._Z17fl_measure_pixmapPKPKcRiS3_:0000000000000000 _Z17fl_measure_pixmapPKPKcRiS3_
     /tmp/ccjePpW4.s:994    .bss._ZL15chars_per_pixel:0000000000000000 _ZL15chars_per_pixel
     /tmp/ccjePpW4.s:1000   .bss._ZL7ncolors:0000000000000000 _ZL7ncolors
     /tmp/ccjePpW4.s:103    .text._Z17fl_measure_pixmapPKPcRiS2_:0000000000000000 _Z17fl_measure_pixmapPKPcRiS2_
     /tmp/ccjePpW4.s:125    .text._Z17fl_convert_pixmapPKPKcPhj:0000000000000000 _Z17fl_convert_pixmapPKPKcPhj
     /tmp/ccjePpW4.s:711    .text._Z14fl_draw_pixmapPKPKciij:0000000000000000 _Z14fl_draw_pixmapPKPKciij
     /tmp/ccjePpW4.s:988    .bss.fl_mask_bitmap:0000000000000000 fl_mask_bitmap
     /tmp/ccjePpW4.s:968    .text._Z14fl_draw_pixmapPKPciij:0000000000000000 _Z14fl_draw_pixmapPKPciij
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
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
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.185.629aca749f254f2bc1fdc00bb73e17c4
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
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
                           .group:0000000000000000 wm4.stat.h.23.034923aa253537bdc4e59720e9e8ed3d
                           .group:0000000000000000 wm4.time.h.66.fa652aa18ecf92239cee124d5533fe97
                           .group:0000000000000000 wm4.stat.h.23.71443f0579dab3228134d84ad7d61c3e
                           .group:0000000000000000 wm4.stat.h.107.43f8ebdec21eca5e13896fd19df564c8
                           .group:0000000000000000 wm4.locale.h.23.9b5006b0bf779abe978bf85cb308a947
                           .group:0000000000000000 wm4.stddef.h.401.7dfff676fcc31e4ba811117c262087d2
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.94a07dff536351e64a45c44b55b1ccfb
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.00137ad0275e3bca492dca30adbe2e71
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
sscanf
_Znam
__ctype_b_loc
_ZdaPv
_Z14fl_parse_colorPKcRhS1_S1_
_ZN2Fl9get_colorEjRhS0_S0_
__stack_chk_fail
fl_graphics_driver
