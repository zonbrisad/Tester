   1              		.file	"Fl_Preferences.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL10decodeTextPKc,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL10decodeTextPKc,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL10decodeTextPKc
  10              	.Ltext_cold0:
  11              		.section	.text._ZL10decodeTextPKc
  13              	_ZL10decodeTextPKc:
  14              	.LFB243:
  15              		.file 1 "fltk-1.3.4-1/src/Fl_Preferences.cxx"
   1:fltk-1.3.4-1/src/Fl_Preferences.cxx **** ...
  16              		.loc 1 630 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 55       		pushq	%rbp
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 6, -16
  22 0001 53       		pushq	%rbx
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 3, -24
  25 0002 4883EC08 		subq	$8, %rsp
  26              		.cfi_def_cfa_offset 32
  27              		.loc 1 633 0
  28 0006 0FB61F   		movzbl	(%rdi), %ebx
  29 0009 84DB     		testb	%bl, %bl
  30 000b 0F840F01 		je	.L2
  30      0000
  31 0011 4889FD   		movq	%rdi, %rbp
  32 0014 4889F9   		movq	%rdi, %rcx
  33 0017 89DA     		movl	%ebx, %edx
  34 0019 31FF     		xorl	%edi, %edi
  35              	.LVL1:
  36 001b EB14     		jmp	.L6
  37              	.LVL2:
  38 001d 0F1F00   		.p2align 4,,10
  39              		.p2align 3
  40              	.L3:
  41 0020 0FB65001 		movzbl	1(%rax), %edx
  42 0024 488D4801 		leaq	1(%rax), %rcx
  43              	.LVL3:
  44 0028 8D7701   		leal	1(%rdi), %esi
  45              	.LVL4:
  46 002b 84D2     		testb	%dl, %dl
  47 002d 742F     		je	.L5
  48              	.L20:
  49 002f 89F7     		movl	%esi, %edi
  50              	.LVL5:
  51              	.L6:
  52              		.loc 1 634 0
  53 0031 80FA5C   		cmpb	$92, %dl
  54 0034 4889C8   		movq	%rcx, %rax
  55 0037 75E7     		jne	.L3
  56              		.loc 1 635 0
  57 0039 0FBE5101 		movsbl	1(%rcx), %edx
  58              		.loc 1 636 0
  59 003d 488D4903 		leaq	3(%rcx), %rcx
  60              	.LVL6:
  61 0041 4883C001 		addq	$1, %rax
  62              	.LVL7:
  63              		.loc 1 633 0
  64 0045 8D7701   		leal	1(%rdi), %esi
  65              		.loc 1 635 0
  66 0048 83EA30   		subl	$48, %edx
  67              		.loc 1 636 0
  68 004b 83FA09   		cmpl	$9, %edx
  69 004e 480F46C1 		cmovbe	%rcx, %rax
  70              	.LVL8:
  71              		.loc 1 633 0
  72 0052 0FB65001 		movzbl	1(%rax), %edx
  73 0056 488D4801 		leaq	1(%rax), %rcx
  74              	.LVL9:
  75 005a 84D2     		testb	%dl, %dl
  76 005c 75D1     		jne	.L20
  77              	.L5:
  78              		.loc 1 642 0
  79 005e 83C702   		addl	$2, %edi
  80 0061 4863FF   		movslq	%edi, %rdi
  81 0064 E8000000 		call	malloc
  81      00
  82              	.LVL10:
  83 0069 4889C1   		movq	%rax, %rcx
  84 006c EB17     		jmp	.L13
  85              	.LVL11:
  86 006e 6690     		.p2align 4,,10
  87              		.p2align 3
  88              	.L7:
  89              	.LBB375:
  90              	.LBB376:
  91              		.loc 1 653 0
  92 0070 8819     		movb	%bl, (%rcx)
  93 0072 4889EA   		movq	%rbp, %rdx
  94 0075 4883C101 		addq	$1, %rcx
  95              	.LVL12:
  96              	.L9:
  97              	.LBE376:
  98              		.loc 1 643 0 discriminator 2
  99 0079 0FB65A01 		movzbl	1(%rdx), %ebx
 100              	.LVL13:
 101 007d 488D6A01 		leaq	1(%rdx), %rbp
 102              	.LVL14:
 103 0081 84DB     		testb	%bl, %bl
 104 0083 7456     		je	.L14
 105              	.L13:
 106              	.LVL15:
 107              	.LBB377:
 108              		.loc 1 645 0
 109 0085 80FB5C   		cmpb	$92, %bl
 110 0088 75E6     		jne	.L7
 111              		.loc 1 646 0
 112 008a 0FB67501 		movzbl	1(%rbp), %esi
 113 008e 4080FE5C 		cmpb	$92, %sil
 114 0092 7454     		je	.L21
 115              		.loc 1 647 0
 116 0094 4080FE6E 		cmpb	$110, %sil
 117 0098 745E     		je	.L22
 118              		.loc 1 648 0
 119 009a 4080FE72 		cmpb	$114, %sil
 120 009e 7470     		je	.L23
 121              		.loc 1 649 0
 122 00a0 400FBEFE 		movsbl	%sil, %edi
 123              		.loc 1 650 0
 124 00a4 488D5501 		leaq	1(%rbp), %rdx
 125              		.loc 1 649 0
 126 00a8 83EF30   		subl	$48, %edi
 127 00ab 83FF09   		cmpl	$9, %edi
 128 00ae 77C9     		ja	.L9
 129              	.LVL16:
 130              		.loc 1 649 0 is_stmt 0 discriminator 1
 131 00b0 0FB65503 		movzbl	3(%rbp), %edx
 132 00b4 C1E606   		sall	$6, %esi
 133 00b7 4883C101 		addq	$1, %rcx
 134              	.LVL17:
 135 00bb 8D7416D0 		leal	-48(%rsi,%rdx), %esi
 136 00bf 0FB65502 		movzbl	2(%rbp), %edx
 137 00c3 8D74D680 		leal	-128(%rsi,%rdx,8), %esi
 138 00c7 488D5503 		leaq	3(%rbp), %rdx
 139              	.LVL18:
 140              	.LBE377:
 141              		.loc 1 643 0 is_stmt 1 discriminator 1
 142 00cb 0FB65A01 		movzbl	1(%rdx), %ebx
 143              	.LVL19:
 144              	.LBB378:
 145              		.loc 1 649 0 discriminator 1
 146 00cf 408871FF 		movb	%sil, -1(%rcx)
 147              	.LBE378:
 148              		.loc 1 643 0 discriminator 1
 149 00d3 488D6A01 		leaq	1(%rdx), %rbp
 150              	.LVL20:
 151 00d7 84DB     		testb	%bl, %bl
 152 00d9 75AA     		jne	.L13
 153              	.LVL21:
 154              	.L14:
 155              	.LBE375:
 156              		.loc 1 655 0
 157 00db C60100   		movb	$0, (%rcx)
 158              		.loc 1 657 0
 159 00de 4883C408 		addq	$8, %rsp
 160              		.cfi_remember_state
 161              		.cfi_def_cfa_offset 24
 162 00e2 5B       		popq	%rbx
 163              		.cfi_def_cfa_offset 16
 164 00e3 5D       		popq	%rbp
 165              		.cfi_def_cfa_offset 8
 166 00e4 C3       		ret
 167              	.LVL22:
 168              		.p2align 4,,10
 169 00e5 0F1F00   		.p2align 3
 170              	.L21:
 171              		.cfi_restore_state
 172              	.LBB380:
 173              	.LBB379:
 174              		.loc 1 646 0 discriminator 1
 175 00e8 C6015C   		movb	$92, (%rcx)
 176 00eb 488D5501 		leaq	1(%rbp), %rdx
 177              	.LVL23:
 178 00ef 4883C101 		addq	$1, %rcx
 179              	.LVL24:
 180 00f3 EB84     		jmp	.L9
 181              	.LVL25:
 182              		.p2align 4,,10
 183 00f5 0F1F00   		.p2align 3
 184              	.L22:
 185              		.loc 1 647 0 discriminator 1
 186 00f8 C6010A   		movb	$10, (%rcx)
 187 00fb 488D5501 		leaq	1(%rbp), %rdx
 188              	.LVL26:
 189 00ff 4883C101 		addq	$1, %rcx
 190              	.LVL27:
 191 0103 E971FFFF 		jmp	.L9
 191      FF
 192              	.LVL28:
 193 0108 0F1F8400 		.p2align 4,,10
 193      00000000 
 194              		.p2align 3
 195              	.L23:
 196              		.loc 1 648 0 discriminator 1
 197 0110 C6010D   		movb	$13, (%rcx)
 198 0113 488D5501 		leaq	1(%rbp), %rdx
 199              	.LVL29:
 200 0117 4883C101 		addq	$1, %rcx
 201              	.LVL30:
 202 011b E959FFFF 		jmp	.L9
 202      FF
 203              	.LVL31:
 204              	.L2:
 205              	.LBE379:
 206              	.LBE380:
 207              		.loc 1 642 0
 208 0120 BF010000 		movl	$1, %edi
 208      00
 209              	.LVL32:
 210 0125 E8000000 		call	malloc
 210      00
 211              	.LVL33:
 212 012a 4889C1   		movq	%rax, %rcx
 213 012d EBAC     		jmp	.L14
 214              		.cfi_endproc
 215              	.LFE243:
 217              		.section	.text.unlikely._ZL10decodeTextPKc
 218              	.LCOLDE0:
 219              		.section	.text._ZL10decodeTextPKc
 220              	.LHOTE0:
 221              		.section	.text.unlikely._ZL9decodeHexPKcRi,"ax",@progbits
 222              	.LCOLDB1:
 223              		.section	.text._ZL9decodeHexPKcRi,"ax",@progbits
 224              	.LHOTB1:
 225              		.p2align 4,,15
 227              	_ZL9decodeHexPKcRi:
 228              	.LFB247:
 229              		.loc 1 747 0
 230              		.cfi_startproc
 231              	.LVL34:
 232 0000 4154     		pushq	%r12
 233              		.cfi_def_cfa_offset 16
 234              		.cfi_offset 12, -16
 235 0002 55       		pushq	%rbp
 236              		.cfi_def_cfa_offset 24
 237              		.cfi_offset 6, -24
 238 0003 4989F4   		movq	%rsi, %r12
 239 0006 53       		pushq	%rbx
 240              		.cfi_def_cfa_offset 32
 241              		.cfi_offset 3, -32
 242              		.loc 1 747 0
 243 0007 4889FB   		movq	%rdi, %rbx
 244              		.loc 1 748 0
 245 000a E8000000 		call	strlen
 245      00
 246              	.LVL35:
 247 000f 89C7     		movl	%eax, %edi
 248 0011 C1EF1F   		shrl	$31, %edi
 249 0014 01F8     		addl	%edi, %eax
 250 0016 D1F8     		sarl	%eax
 251 0018 41890424 		movl	%eax, (%r12)
 252              		.loc 1 749 0
 253 001c 4863F8   		movslq	%eax, %rdi
 254 001f E8000000 		call	malloc
 254      00
 255              	.LVL36:
 256              	.LBB381:
 257              		.loc 1 751 0
 258 0024 458B2424 		movl	(%r12), %r12d
 259              	.LVL37:
 260              	.LBE381:
 261              		.loc 1 749 0
 262 0028 4889C5   		movq	%rax, %rbp
 263              	.LVL38:
 264              	.LBB390:
 265              		.loc 1 751 0
 266 002b 4585E4   		testl	%r12d, %r12d
 267 002e 7E70     		jle	.L32
 268 0030 E8000000 		call	__ctype_tolower_loc
 268      00
 269              	.LVL39:
 270 0035 488B30   		movq	(%rax), %rsi
 271 0038 418D4424 		leal	-1(%r12), %eax
 271      FF
 272 003d 4889E9   		movq	%rbp, %rcx
 273 0040 488D7C05 		leaq	1(%rbp,%rax), %rdi
 273      01
 274 0045 EB33     		jmp	.L31
 275              	.LVL40:
 276 0047 660F1F84 		.p2align 4,,10
 276      00000000 
 276      00
 277              		.p2align 3
 278              	.L34:
 279              	.LBB382:
 280              		.loc 1 754 0 discriminator 1
 281 0050 83E857   		subl	$87, %eax
 282              	.LVL41:
 283              	.L27:
 284 0053 4883C302 		addq	$2, %rbx
 285              	.LVL42:
 286              	.LBB383:
 287              	.LBB384:
 288              		.file 2 "/usr/include/ctype.h"
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
 191:/usr/include/ctype.h **** __isctype_f (upper)
 192:/usr/include/ctype.h **** __isctype_f (xdigit)
 193:/usr/include/ctype.h **** #  ifdef __USE_ISOC99
 194:/usr/include/ctype.h **** __isctype_f (blank)
 195:/usr/include/ctype.h **** #  endif
 196:/usr/include/ctype.h **** # elif defined __isctype
 197:/usr/include/ctype.h **** # define isalnum(c)	__isctype((c), _ISalnum)
 198:/usr/include/ctype.h **** # define isalpha(c)	__isctype((c), _ISalpha)
 199:/usr/include/ctype.h **** # define iscntrl(c)	__isctype((c), _IScntrl)
 200:/usr/include/ctype.h **** # define isdigit(c)	__isctype((c), _ISdigit)
 201:/usr/include/ctype.h **** # define islower(c)	__isctype((c), _ISlower)
 202:/usr/include/ctype.h **** # define isgraph(c)	__isctype((c), _ISgraph)
 203:/usr/include/ctype.h **** # define isprint(c)	__isctype((c), _ISprint)
 204:/usr/include/ctype.h **** # define ispunct(c)	__isctype((c), _ISpunct)
 205:/usr/include/ctype.h **** # define isspace(c)	__isctype((c), _ISspace)
 206:/usr/include/ctype.h **** # define isupper(c)	__isctype((c), _ISupper)
 207:/usr/include/ctype.h **** # define isxdigit(c)	__isctype((c), _ISxdigit)
 208:/usr/include/ctype.h **** #  ifdef __USE_ISOC99
 209:/usr/include/ctype.h **** #   define isblank(c)	__isctype((c), _ISblank)
 210:/usr/include/ctype.h **** #  endif
 211:/usr/include/ctype.h **** # endif
 212:/usr/include/ctype.h **** 
 213:/usr/include/ctype.h **** # ifdef __USE_EXTERN_INLINES
 214:/usr/include/ctype.h **** __extern_inline int
 215:/usr/include/ctype.h **** __NTH (tolower (int __c))
 216:/usr/include/ctype.h **** {
 217:/usr/include/ctype.h ****   return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
 289              		.loc 2 217 0
 290 0057 480FBE53 		movsbq	-1(%rbx), %rdx
 290      FF
 291              	.LBE384:
 292              	.LBE383:
 293              		.loc 1 755 0
 294 005c C1E004   		sall	$4, %eax
 295              	.LVL43:
 296              		.loc 1 756 0
 297 005f 8B1496   		movl	(%rsi,%rdx,4), %edx
 298              	.LVL44:
 299              		.loc 1 757 0
 300 0062 80FA60   		cmpb	$96, %dl
 301 0065 0FBED2   		movsbl	%dl, %edx
 302 0068 7E26     		jle	.L28
 303              		.loc 1 758 0 discriminator 1
 304 006a 4883C101 		addq	$1, %rcx
 305              	.LVL45:
 306              		.loc 1 757 0 discriminator 1
 307 006e 8D4410A9 		leal	-87(%rax,%rdx), %eax
 308              	.LVL46:
 309              	.LBE382:
 310              		.loc 1 751 0 discriminator 1
 311 0072 4839F9   		cmpq	%rdi, %rcx
 312              	.LBB387:
 313              		.loc 1 758 0 discriminator 1
 314 0075 8841FF   		movb	%al, -1(%rcx)
 315              	.LBE387:
 316              		.loc 1 751 0 discriminator 1
 317 0078 7426     		je	.L32
 318              	.LVL47:
 319              	.L31:
 320              	.LBB388:
 321              	.LBB385:
 322              	.LBB386:
 323              		.loc 2 217 0
 324 007a 480FBE03 		movsbq	(%rbx), %rax
 325              	.LBE386:
 326              	.LBE385:
 327              		.loc 1 753 0
 328 007e 8B0486   		movl	(%rsi,%rax,4), %eax
 329              	.LVL48:
 330              		.loc 1 754 0
 331 0081 3C60     		cmpb	$96, %al
 332 0083 0FBEC0   		movsbl	%al, %eax
 333 0086 7FC8     		jg	.L34
 334              		.loc 1 754 0 is_stmt 0 discriminator 2
 335 0088 83E830   		subl	$48, %eax
 336              	.LVL49:
 337 008b EBC6     		jmp	.L27
 338              	.LVL50:
 339 008d 0F1F00   		.p2align 4,,10
 340              		.p2align 3
 341              	.L28:
 342              		.loc 1 758 0 is_stmt 1 discriminator 2
 343 0090 4883C101 		addq	$1, %rcx
 344              	.LVL51:
 345              		.loc 1 757 0 discriminator 2
 346 0094 8D4410D0 		leal	-48(%rax,%rdx), %eax
 347              	.LVL52:
 348              	.LBE388:
 349              		.loc 1 751 0 discriminator 2
 350 0098 4839F9   		cmpq	%rdi, %rcx
 351              	.LBB389:
 352              		.loc 1 758 0 discriminator 2
 353 009b 8841FF   		movb	%al, -1(%rcx)
 354              	.LBE389:
 355              		.loc 1 751 0 discriminator 2
 356 009e 75DA     		jne	.L31
 357              	.LVL53:
 358              	.L32:
 359              	.LBE390:
 360              		.loc 1 761 0
 361 00a0 4889E8   		movq	%rbp, %rax
 362 00a3 5B       		popq	%rbx
 363              		.cfi_def_cfa_offset 24
 364              	.LVL54:
 365 00a4 5D       		popq	%rbp
 366              		.cfi_def_cfa_offset 16
 367              	.LVL55:
 368 00a5 415C     		popq	%r12
 369              		.cfi_def_cfa_offset 8
 370 00a7 C3       		ret
 371              		.cfi_endproc
 372              	.LFE247:
 374              		.section	.text.unlikely._ZL9decodeHexPKcRi
 375              	.LCOLDE1:
 376              		.section	.text._ZL9decodeHexPKcRi
 377              	.LHOTE1:
 378              		.section	.text.unlikely._ZN14Fl_Preferences4Node9nChildrenEv.part.5,"ax",@progbits
 379              		.align 2
 380              	.LCOLDB2:
 381              		.section	.text._ZN14Fl_Preferences4Node9nChildrenEv.part.5,"ax",@progbits
 382              	.LHOTB2:
 383              		.align 2
 384              		.p2align 4,,15
 386              	_ZN14Fl_Preferences4Node9nChildrenEv.part.5:
 387              	.LFB336:
 388              		.loc 1 1487 0
 389              		.cfi_startproc
 390              	.LVL56:
 391              	.LBB391:
 392              	.LBB392:
 393              		.loc 1 1492 0
 394 0000 488B17   		movq	(%rdi), %rdx
 395              	.LVL57:
 396              	.LBE392:
 397              		.loc 1 1491 0
 398 0003 31C0     		xorl	%eax, %eax
 399              	.LBB393:
 400              		.loc 1 1492 0
 401 0005 4885D2   		testq	%rdx, %rdx
 402 0008 7414     		je	.L38
 403              	.LVL58:
 404 000a 660F1F44 		.p2align 4,,10
 404      0000
 405              		.p2align 3
 406              	.L37:
 407 0010 488B5208 		movq	8(%rdx), %rdx
 408              	.LVL59:
 409              		.loc 1 1493 0
 410 0014 83C001   		addl	$1, %eax
 411              	.LVL60:
 412              		.loc 1 1492 0
 413 0017 4885D2   		testq	%rdx, %rdx
 414 001a 75F4     		jne	.L37
 415 001c F3C3     		rep ret
 416              	.LVL61:
 417              	.L38:
 418              	.LBE393:
 419              	.LBE391:
 420              		.loc 1 1496 0
 421 001e F3C3     		rep ret
 422              		.cfi_endproc
 423              	.LFE336:
 425              		.section	.text.unlikely._ZN14Fl_Preferences4Node9nChildrenEv.part.5
 426              	.LCOLDE2:
 427              		.section	.text._ZN14Fl_Preferences4Node9nChildrenEv.part.5
 428              	.LHOTE2:
 429              		.section	.rodata.str1.8,"aMS",@progbits,1
 430              		.align 8
 431              	.LC3:
 432 0000 25303258 		.string	"%02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X"
 432      25303258 
 432      25303258 
 432      25303258 
 432      2D253032 
 433              		.section	.text.unlikely._ZN14Fl_Preferences7newUUIDEv,"ax",@progbits
 434              		.align 2
 435              	.LCOLDB4:
 436              		.section	.text._ZN14Fl_Preferences7newUUIDEv,"ax",@progbits
 437              	.LHOTB4:
 438              		.align 2
 439              		.p2align 4,,15
 440              		.globl	_ZN14Fl_Preferences7newUUIDEv
 442              	_ZN14Fl_Preferences7newUUIDEv:
 443              	.LFB194:
 444              		.loc 1 82 0
 445              		.cfi_startproc
 446 0000 4157     		pushq	%r15
 447              		.cfi_def_cfa_offset 16
 448              		.cfi_offset 15, -16
 449 0002 4156     		pushq	%r14
 450              		.cfi_def_cfa_offset 24
 451              		.cfi_offset 14, -24
 452              		.loc 1 162 0
 453 0004 31FF     		xorl	%edi, %edi
 454              		.loc 1 82 0
 455 0006 4155     		pushq	%r13
 456              		.cfi_def_cfa_offset 32
 457              		.cfi_offset 13, -32
 458 0008 4154     		pushq	%r12
 459              		.cfi_def_cfa_offset 40
 460              		.cfi_offset 12, -40
 461 000a 55       		pushq	%rbp
 462              		.cfi_def_cfa_offset 48
 463              		.cfi_offset 6, -48
 464 000b 53       		pushq	%rbx
 465              		.cfi_def_cfa_offset 56
 466              		.cfi_offset 3, -56
 467 000c 4883EC78 		subq	$120, %rsp
 468              		.cfi_def_cfa_offset 176
 469              		.loc 1 182 0
 470 0010 4C8D7424 		leaq	8(%rsp), %r14
 470      08
 471              		.loc 1 82 0
 472 0015 64488B04 		movq	%fs:40, %rax
 472      25280000 
 472      00
 473 001e 48894424 		movq	%rax, 104(%rsp)
 473      68
 474 0023 31C0     		xorl	%eax, %eax
 475              		.loc 1 162 0
 476 0025 E8000000 		call	time
 476      00
 477              	.LVL62:
 478 002a 48894424 		movq	%rax, 8(%rsp)
 478      08
 479 002f 4989C7   		movq	%rax, %r15
 480              		.loc 1 192 0
 481 0032 4C89F5   		movq	%r14, %rbp
 482              		.loc 1 167 0
 483 0035 E8000000 		call	rand
 483      00
 484              	.LVL63:
 485              	.LBB394:
 486              	.LBB395:
 487              		.file 3 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
   1:/usr/include/x86_64-linux-gnu/bits/unistd.h **** /* Checking macros for unistd functions.
   2:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    Copyright (C) 2005-2016 Free Software Foundation, Inc.
   3:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    This file is part of the GNU C Library.
   4:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
   5:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    The GNU C Library is free software; you can redistribute it and/or
   6:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    modify it under the terms of the GNU Lesser General Public
   7:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    License as published by the Free Software Foundation; either
   8:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    version 2.1 of the License, or (at your option) any later version.
   9:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  10:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    The GNU C Library is distributed in the hope that it will be useful,
  11:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  12:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  13:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    Lesser General Public License for more details.
  14:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  15:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    You should have received a copy of the GNU Lesser General Public
  16:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    License along with the GNU C Library; if not, see
  17:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    <http://www.gnu.org/licenses/>.  */
  18:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  19:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #ifndef _UNISTD_H
  20:/usr/include/x86_64-linux-gnu/bits/unistd.h **** # error "Never include <bits/unistd.h> directly; use <unistd.h> instead."
  21:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #endif
  22:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  23:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __read_chk (int __fd, void *__buf, size_t __nbytes,
  24:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   size_t __buflen) __wur;
  25:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT (__read_alias, (int __fd, void *__buf,
  26:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 					  size_t __nbytes), read) __wur;
  27:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT (__read_chk_warn,
  28:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   (int __fd, void *__buf, size_t __nbytes,
  29:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    size_t __buflen), __read_chk)
  30:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __wur __warnattr ("read called with bigger length than size of "
  31:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		       "the destination buffer");
  32:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  33:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __wur ssize_t
  34:/usr/include/x86_64-linux-gnu/bits/unistd.h **** read (int __fd, void *__buf, size_t __nbytes)
  35:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
  36:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos0 (__buf) != (size_t) -1)
  37:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
  38:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__nbytes))
  39:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __read_chk (__fd, __buf, __nbytes, __bos0 (__buf));
  40:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  41:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (__nbytes > __bos0 (__buf))
  42:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __read_chk_warn (__fd, __buf, __nbytes, __bos0 (__buf));
  43:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
  44:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __read_alias (__fd, __buf, __nbytes);
  45:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
  46:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  47:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #ifdef __USE_UNIX98
  48:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __pread_chk (int __fd, void *__buf, size_t __nbytes,
  49:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    __off_t __offset, size_t __bufsize) __wur;
  50:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __pread64_chk (int __fd, void *__buf, size_t __nbytes,
  51:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			      __off64_t __offset, size_t __bufsize) __wur;
  52:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT (__pread_alias,
  53:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   (int __fd, void *__buf, size_t __nbytes,
  54:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    __off_t __offset), pread) __wur;
  55:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT (__pread64_alias,
  56:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   (int __fd, void *__buf, size_t __nbytes,
  57:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    __off64_t __offset), pread64) __wur;
  58:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT (__pread_chk_warn,
  59:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   (int __fd, void *__buf, size_t __nbytes,
  60:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    __off_t __offset, size_t __bufsize), __pread_chk)
  61:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __wur __warnattr ("pread called with bigger length than size of "
  62:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		       "the destination buffer");
  63:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT (__pread64_chk_warn,
  64:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   (int __fd, void *__buf, size_t __nbytes,
  65:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    __off64_t __offset, size_t __bufsize),
  66:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    __pread64_chk)
  67:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __wur __warnattr ("pread64 called with bigger length than size of "
  68:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		       "the destination buffer");
  69:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  70:/usr/include/x86_64-linux-gnu/bits/unistd.h **** # ifndef __USE_FILE_OFFSET64
  71:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __wur ssize_t
  72:/usr/include/x86_64-linux-gnu/bits/unistd.h **** pread (int __fd, void *__buf, size_t __nbytes, __off_t __offset)
  73:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
  74:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos0 (__buf) != (size_t) -1)
  75:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
  76:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__nbytes))
  77:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __pread_chk (__fd, __buf, __nbytes, __offset, __bos0 (__buf));
  78:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  79:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if ( __nbytes > __bos0 (__buf))
  80:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __pread_chk_warn (__fd, __buf, __nbytes, __offset,
  81:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				 __bos0 (__buf));
  82:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
  83:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __pread_alias (__fd, __buf, __nbytes, __offset);
  84:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
  85:/usr/include/x86_64-linux-gnu/bits/unistd.h **** # else
  86:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __wur ssize_t
  87:/usr/include/x86_64-linux-gnu/bits/unistd.h **** pread (int __fd, void *__buf, size_t __nbytes, __off64_t __offset)
  88:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
  89:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos0 (__buf) != (size_t) -1)
  90:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
  91:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__nbytes))
  92:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __pread64_chk (__fd, __buf, __nbytes, __offset, __bos0 (__buf));
  93:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  94:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if ( __nbytes > __bos0 (__buf))
  95:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __pread64_chk_warn (__fd, __buf, __nbytes, __offset,
  96:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				   __bos0 (__buf));
  97:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
  98:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  99:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __pread64_alias (__fd, __buf, __nbytes, __offset);
 100:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 101:/usr/include/x86_64-linux-gnu/bits/unistd.h **** # endif
 102:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 103:/usr/include/x86_64-linux-gnu/bits/unistd.h **** # ifdef __USE_LARGEFILE64
 104:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __wur ssize_t
 105:/usr/include/x86_64-linux-gnu/bits/unistd.h **** pread64 (int __fd, void *__buf, size_t __nbytes, __off64_t __offset)
 106:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 107:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos0 (__buf) != (size_t) -1)
 108:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
 109:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__nbytes))
 110:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __pread64_chk (__fd, __buf, __nbytes, __offset, __bos0 (__buf));
 111:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 112:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if ( __nbytes > __bos0 (__buf))
 113:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __pread64_chk_warn (__fd, __buf, __nbytes, __offset,
 114:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				   __bos0 (__buf));
 115:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
 116:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 117:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __pread64_alias (__fd, __buf, __nbytes, __offset);
 118:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 119:/usr/include/x86_64-linux-gnu/bits/unistd.h **** # endif
 120:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #endif
 121:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 122:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K
 123:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __readlink_chk (const char *__restrict __path,
 124:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       char *__restrict __buf, size_t __len,
 125:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       size_t __buflen)
 126:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __THROW __nonnull ((1, 2)) __wur;
 127:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT_NTH (__readlink_alias,
 128:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       (const char *__restrict __path,
 129:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				char *__restrict __buf, size_t __len), readlink)
 130:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((1, 2)) __wur;
 131:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT_NTH (__readlink_chk_warn,
 132:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       (const char *__restrict __path,
 133:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				char *__restrict __buf, size_t __len,
 134:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				size_t __buflen), __readlink_chk)
 135:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((1, 2)) __wur __warnattr ("readlink called with bigger length "
 136:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 					  "than size of destination buffer");
 137:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 138:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __nonnull ((1, 2)) __wur ssize_t
 139:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __NTH (readlink (const char *__restrict __path, char *__restrict __buf,
 140:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		 size_t __len))
 141:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 142:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos (__buf) != (size_t) -1)
 143:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
 144:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__len))
 145:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __readlink_chk (__path, __buf, __len, __bos (__buf));
 146:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 147:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if ( __len > __bos (__buf))
 148:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __readlink_chk_warn (__path, __buf, __len, __bos (__buf));
 149:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
 150:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __readlink_alias (__path, __buf, __len);
 151:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 152:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #endif
 153:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 154:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #ifdef __USE_ATFILE
 155:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __readlinkat_chk (int __fd, const char *__restrict __path,
 156:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				 char *__restrict __buf, size_t __len,
 157:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				 size_t __buflen)
 158:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __THROW __nonnull ((2, 3)) __wur;
 159:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT_NTH (__readlinkat_alias,
 160:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       (int __fd, const char *__restrict __path,
 161:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				char *__restrict __buf, size_t __len),
 162:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       readlinkat)
 163:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((2, 3)) __wur;
 164:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT_NTH (__readlinkat_chk_warn,
 165:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       (int __fd, const char *__restrict __path,
 166:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				char *__restrict __buf, size_t __len,
 167:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				size_t __buflen), __readlinkat_chk)
 168:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((2, 3)) __wur __warnattr ("readlinkat called with bigger "
 169:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 					  "length than size of destination "
 170:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 					  "buffer");
 171:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 172:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __nonnull ((2, 3)) __wur ssize_t
 173:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __NTH (readlinkat (int __fd, const char *__restrict __path,
 174:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		   char *__restrict __buf, size_t __len))
 175:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 176:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos (__buf) != (size_t) -1)
 177:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
 178:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__len))
 179:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __readlinkat_chk (__fd, __path, __buf, __len, __bos (__buf));
 180:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 181:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (__len > __bos (__buf))
 182:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __readlinkat_chk_warn (__fd, __path, __buf, __len,
 183:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				      __bos (__buf));
 184:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
 185:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __readlinkat_alias (__fd, __path, __buf, __len);
 186:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 187:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #endif
 188:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 189:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern char *__getcwd_chk (char *__buf, size_t __size, size_t __buflen)
 190:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __THROW __wur;
 191:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern char *__REDIRECT_NTH (__getcwd_alias,
 192:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			     (char *__buf, size_t __size), getcwd) __wur;
 193:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern char *__REDIRECT_NTH (__getcwd_chk_warn,
 194:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			     (char *__buf, size_t __size, size_t __buflen),
 195:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			     __getcwd_chk)
 196:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __wur __warnattr ("getcwd caller with bigger length than size of "
 197:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		       "destination buffer");
 198:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 199:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __wur char *
 200:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __NTH (getcwd (char *__buf, size_t __size))
 201:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 202:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos (__buf) != (size_t) -1)
 203:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
 204:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__size))
 205:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __getcwd_chk (__buf, __size, __bos (__buf));
 206:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 207:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (__size > __bos (__buf))
 208:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __getcwd_chk_warn (__buf, __size, __bos (__buf));
 209:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
 210:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __getcwd_alias (__buf, __size);
 211:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 212:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 213:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
 214:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern char *__getwd_chk (char *__buf, size_t buflen)
 215:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __THROW __nonnull ((1)) __wur;
 216:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern char *__REDIRECT_NTH (__getwd_warn, (char *__buf), getwd)
 217:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((1)) __wur __warnattr ("please use getcwd instead, as getwd "
 218:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				       "doesn't specify buffer size");
 219:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 220:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __nonnull ((1)) __attribute_deprecated__ __wur char *
 221:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __NTH (getwd (char *__buf))
 222:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 223:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos (__buf) != (size_t) -1)
 224:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     return __getwd_chk (__buf, __bos (__buf));
 225:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __getwd_warn (__buf);
 226:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 227:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #endif
 228:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 229:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern size_t __confstr_chk (int __name, char *__buf, size_t __len,
 230:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			     size_t __buflen) __THROW;
 231:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern size_t __REDIRECT_NTH (__confstr_alias, (int __name, char *__buf,
 232:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 						size_t __len), confstr);
 233:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern size_t __REDIRECT_NTH (__confstr_chk_warn,
 234:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			      (int __name, char *__buf, size_t __len,
 235:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       size_t __buflen), __confstr_chk)
 236:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __warnattr ("confstr called with bigger length than size of destination "
 237:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		 "buffer");
 238:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 239:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function size_t
 240:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __NTH (confstr (int __name, char *__buf, size_t __len))
 241:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 242:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos (__buf) != (size_t) -1)
 243:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
 244:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__len))
 245:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __confstr_chk (__name, __buf, __len, __bos (__buf));
 246:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 247:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (__bos (__buf) < __len)
 248:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __confstr_chk_warn (__name, __buf, __len, __bos (__buf));
 249:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
 250:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __confstr_alias (__name, __buf, __len);
 251:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 252:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 253:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 254:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern int __getgroups_chk (int __size, __gid_t __list[], size_t __listlen)
 255:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __THROW __wur;
 256:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern int __REDIRECT_NTH (__getgroups_alias, (int __size, __gid_t __list[]),
 257:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   getgroups) __wur;
 258:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern int __REDIRECT_NTH (__getgroups_chk_warn,
 259:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   (int __size, __gid_t __list[], size_t __listlen),
 260:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   __getgroups_chk)
 261:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __wur __warnattr ("getgroups called with bigger group count than what "
 262:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		       "can fit into destination buffer");
 263:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 264:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function int
 265:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __NTH (getgroups (int __size, __gid_t __list[]))
 266:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 267:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos (__list) != (size_t) -1)
 268:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
 269:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__size) || __size < 0)
 270:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __getgroups_chk (__size, __list, __bos (__list));
 271:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 272:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (__size * sizeof (__gid_t) > __bos (__list))
 273:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __getgroups_chk_warn (__size, __list, __bos (__list));
 274:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
 275:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __getgroups_alias (__size, __list);
 276:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 277:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 278:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 279:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern int __ttyname_r_chk (int __fd, char *__buf, size_t __buflen,
 280:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    size_t __nreal) __THROW __nonnull ((2));
 281:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern int __REDIRECT_NTH (__ttyname_r_alias, (int __fd, char *__buf,
 282:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 					       size_t __buflen), ttyname_r)
 283:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((2));
 284:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern int __REDIRECT_NTH (__ttyname_r_chk_warn,
 285:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   (int __fd, char *__buf, size_t __buflen,
 286:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    size_t __nreal), __ttyname_r_chk)
 287:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((2)) __warnattr ("ttyname_r called with bigger buflen than "
 288:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				 "size of destination buffer");
 289:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 290:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function int
 291:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __NTH (ttyname_r (int __fd, char *__buf, size_t __buflen))
 292:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 293:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos (__buf) != (size_t) -1)
 294:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
 295:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__buflen))
 296:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __ttyname_r_chk (__fd, __buf, __buflen, __bos (__buf));
 297:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 298:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (__buflen > __bos (__buf))
 299:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __ttyname_r_chk_warn (__fd, __buf, __buflen, __bos (__buf));
 300:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
 301:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __ttyname_r_alias (__fd, __buf, __buflen);
 302:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 303:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 304:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 305:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #if defined __USE_REENTRANT || defined __USE_POSIX199506
 306:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern int __getlogin_r_chk (char *__buf, size_t __buflen, size_t __nreal)
 307:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((1));
 308:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern int __REDIRECT (__getlogin_r_alias, (char *__buf, size_t __buflen),
 309:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		       getlogin_r) __nonnull ((1));
 310:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern int __REDIRECT (__getlogin_r_chk_warn,
 311:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		       (char *__buf, size_t __buflen, size_t __nreal),
 312:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		       __getlogin_r_chk)
 313:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((1)) __warnattr ("getlogin_r called with bigger buflen than "
 314:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				 "size of destination buffer");
 315:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 316:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function int
 317:/usr/include/x86_64-linux-gnu/bits/unistd.h **** getlogin_r (char *__buf, size_t __buflen)
 318:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 319:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos (__buf) != (size_t) -1)
 320:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
 321:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__buflen))
 322:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __getlogin_r_chk (__buf, __buflen, __bos (__buf));
 323:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 324:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (__buflen > __bos (__buf))
 325:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __getlogin_r_chk_warn (__buf, __buflen, __bos (__buf));
 326:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
 327:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __getlogin_r_alias (__buf, __buflen);
 328:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 329:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #endif
 330:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 331:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 332:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #if defined __USE_MISC || defined __USE_UNIX98
 333:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern int __gethostname_chk (char *__buf, size_t __buflen, size_t __nreal)
 334:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __THROW __nonnull ((1));
 335:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern int __REDIRECT_NTH (__gethostname_alias, (char *__buf, size_t __buflen),
 336:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   gethostname) __nonnull ((1));
 337:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern int __REDIRECT_NTH (__gethostname_chk_warn,
 338:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   (char *__buf, size_t __buflen, size_t __nreal),
 339:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   __gethostname_chk)
 340:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((1)) __warnattr ("gethostname called with bigger buflen than "
 341:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				 "size of destination buffer");
 342:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 343:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function int
 344:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __NTH (gethostname (char *__buf, size_t __buflen))
 345:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 346:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos (__buf) != (size_t) -1)
 347:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
 348:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__buflen))
 349:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __gethostname_chk (__buf, __buflen, __bos (__buf));
 350:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 351:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (__buflen > __bos (__buf))
 352:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __gethostname_chk_warn (__buf, __buflen, __bos (__buf));
 353:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
 354:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __gethostname_alias (__buf, __buflen);
 488              		.loc 3 354 0
 489 003a 488D7C24 		leaq	16(%rsp), %rdi
 489      10
 490              	.LBE395:
 491              	.LBE394:
 492              		.loc 1 167 0
 493 003f 4189C5   		movl	%eax, %r13d
 494              	.LVL64:
 495              	.LBB398:
 496              	.LBB396:
 497              		.loc 3 354 0
 498 0042 BE4F0000 		movl	$79, %esi
 498      00
 499              	.LBE396:
 500              	.LBE398:
 501              		.loc 1 191 0
 502 0047 4489F0   		movl	%r14d, %eax
 503              	.LVL65:
 504              		.loc 1 193 0
 505 004a 4D89F4   		movq	%r14, %r12
 506              		.loc 1 192 0
 507 004d 48C1ED10 		shrq	$16, %rbp
 508              	.LVL66:
 509              		.loc 1 191 0
 510 0051 0FB6DC   		movzbl	%ah, %ebx
 511              		.loc 1 193 0
 512 0054 49C1EC18 		shrq	$24, %r12
 513              	.LVL67:
 514              	.LBB399:
 515              	.LBB400:
 516              		.file 4 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 517              		.loc 4 34 0
 518 0058 400FB6ED 		movzbl	%bpl, %ebp
 519              	.LBE400:
 520              	.LBE399:
 521              	.LBB405:
 522              	.LBB397:
 523              		.loc 3 354 0
 524 005c E8000000 		call	gethostname
 524      00
 525              	.LVL68:
 526 0061 8B442410 		movl	16(%rsp), %eax
 527              	.LBE397:
 528              	.LBE405:
 529              	.LBB406:
 530              	.LBB401:
 531              		.loc 4 34 0
 532 0065 4C89F9   		movq	%r15, %rcx
 533 0068 450FB6E4 		movzbl	%r12b, %r12d
 534 006c 0FB6F5   		movzbl	%ch, %esi
 535 006f 0FB6DB   		movzbl	%bl, %ebx
 536 0072 450FB6F6 		movzbl	%r14b, %r14d
 537              	.LVL69:
 538 0076 4989F1   		movq	%rsi, %r9
 539 0079 450FB6C7 		movzbl	%r15b, %r8d
 540 007d BE010000 		movl	$1, %esi
 540      00
 541 0082 BF000000 		movl	$_ZN14Fl_Preferences10uuidBufferE, %edi
 541      00
 542 0087 48C1E020 		salq	$32, %rax
 543              	.LVL70:
 544              	.LBE401:
 545              	.LBE406:
 546              		.loc 1 200 0
 547 008b 4889C2   		movq	%rax, %rdx
 548              	.LBB407:
 549              	.LBB402:
 550              		.loc 4 34 0
 551 008e 4889C1   		movq	%rax, %rcx
 552              	.LBE402:
 553              	.LBE407:
 554              		.loc 1 200 0
 555 0091 48C1EA30 		shrq	$48, %rdx
 556              	.LBB408:
 557              	.LBB403:
 558              		.loc 4 34 0
 559 0095 48C1E938 		shrq	$56, %rcx
 560 0099 0FB6D2   		movzbl	%dl, %edx
 561 009c 51       		pushq	%rcx
 562              		.cfi_def_cfa_offset 184
 563 009d B9000000 		movl	$.LC3, %ecx
 563      00
 564 00a2 52       		pushq	%rdx
 565              		.cfi_def_cfa_offset 192
 566              	.LBE403:
 567              	.LBE408:
 568              		.loc 1 200 0
 569 00a3 4889C2   		movq	%rax, %rdx
 570 00a6 48C1E820 		shrq	$32, %rax
 571 00aa 48C1EA28 		shrq	$40, %rdx
 572              	.LBB409:
 573              	.LBB404:
 574              		.loc 4 34 0
 575 00ae 0FB6C0   		movzbl	%al, %eax
 576 00b1 0FB6D2   		movzbl	%dl, %edx
 577 00b4 52       		pushq	%rdx
 578              		.cfi_def_cfa_offset 200
 579 00b5 50       		pushq	%rax
 580              		.cfi_def_cfa_offset 208
 581 00b6 4489E8   		movl	%r13d, %eax
 582 00b9 C1E818   		shrl	$24, %eax
 583 00bc 4154     		pushq	%r12
 584              		.cfi_def_cfa_offset 216
 585 00be 55       		pushq	%rbp
 586              		.cfi_def_cfa_offset 224
 587 00bf 53       		pushq	%rbx
 588              		.cfi_def_cfa_offset 232
 589 00c0 4156     		pushq	%r14
 590              		.cfi_def_cfa_offset 240
 591 00c2 BA280000 		movl	$40, %edx
 591      00
 592 00c7 50       		pushq	%rax
 593              		.cfi_def_cfa_offset 248
 594 00c8 4489E8   		movl	%r13d, %eax
 595 00cb C1F810   		sarl	$16, %eax
 596 00ce 0FB6C0   		movzbl	%al, %eax
 597 00d1 50       		pushq	%rax
 598              		.cfi_def_cfa_offset 256
 599 00d2 4C89E8   		movq	%r13, %rax
 600 00d5 450FB6ED 		movzbl	%r13b, %r13d
 601              	.LVL71:
 602 00d9 0FB6C4   		movzbl	%ah, %eax
 603 00dc 50       		pushq	%rax
 604              		.cfi_def_cfa_offset 264
 605 00dd 4C89F8   		movq	%r15, %rax
 606 00e0 4155     		pushq	%r13
 607              		.cfi_def_cfa_offset 272
 608 00e2 48C1F818 		sarq	$24, %rax
 609 00e6 0FB6C0   		movzbl	%al, %eax
 610 00e9 50       		pushq	%rax
 611              		.cfi_def_cfa_offset 280
 612 00ea 4C89F8   		movq	%r15, %rax
 613 00ed 48C1F810 		sarq	$16, %rax
 614 00f1 0FB6C0   		movzbl	%al, %eax
 615 00f4 50       		pushq	%rax
 616              		.cfi_def_cfa_offset 288
 617 00f5 31C0     		xorl	%eax, %eax
 618 00f7 E8000000 		call	__sprintf_chk
 618      00
 619              	.LVL72:
 620              	.LBE404:
 621              	.LBE409:
 622              		.loc 1 203 0
 623 00fc 4883C470 		addq	$112, %rsp
 624              		.cfi_def_cfa_offset 176
 625              		.loc 1 204 0
 626 0100 488B7424 		movq	104(%rsp), %rsi
 626      68
 627 0105 64483334 		xorq	%fs:40, %rsi
 627      25280000 
 627      00
 628 010e 7514     		jne	.L43
 629 0110 4883C478 		addq	$120, %rsp
 630              		.cfi_remember_state
 631              		.cfi_def_cfa_offset 56
 632 0114 B8000000 		movl	$_ZN14Fl_Preferences10uuidBufferE, %eax
 632      00
 633 0119 5B       		popq	%rbx
 634              		.cfi_def_cfa_offset 48
 635 011a 5D       		popq	%rbp
 636              		.cfi_def_cfa_offset 40
 637 011b 415C     		popq	%r12
 638              		.cfi_def_cfa_offset 32
 639 011d 415D     		popq	%r13
 640              		.cfi_def_cfa_offset 24
 641 011f 415E     		popq	%r14
 642              		.cfi_def_cfa_offset 16
 643 0121 415F     		popq	%r15
 644              		.cfi_def_cfa_offset 8
 645 0123 C3       		ret
 646              	.L43:
 647              		.cfi_restore_state
 648 0124 E8000000 		call	__stack_chk_fail
 648      00
 649              	.LVL73:
 650              		.cfi_endproc
 651              	.LFE194:
 653              		.section	.text.unlikely._ZN14Fl_Preferences7newUUIDEv
 654              	.LCOLDE4:
 655              		.section	.text._ZN14Fl_Preferences7newUUIDEv
 656              	.LHOTE4:
 657              		.section	.text.unlikely._ZN14Fl_PreferencesC2EPv,"ax",@progbits
 658              		.align 2
 659              	.LCOLDB5:
 660              		.section	.text._ZN14Fl_PreferencesC2EPv,"ax",@progbits
 661              	.LHOTB5:
 662              		.align 2
 663              		.p2align 4,,15
 664              		.globl	_ZN14Fl_PreferencesC2EPv
 666              	_ZN14Fl_PreferencesC2EPv:
 667              	.LFB214:
 668              		.loc 1 340 0
 669              		.cfi_startproc
 670              	.LVL74:
 671              	.LBB410:
 672              		.loc 1 340 0
 673 0000 48C70700 		movq	$_ZTV14Fl_Preferences+16, (%rdi)
 673      000000
 674              		.loc 1 341 0
 675 0007 48897708 		movq	%rsi, 8(%rdi)
 676              	.LVL75:
 677 000b EB0C     		jmp	.L47
 678              	.LVL76:
 679 000d 0F1F00   		.p2align 4,,10
 680              		.p2align 3
 681              	.L45:
 682              	.LBB411:
 683              	.LBB412:
 684              	.LBB413:
 685              	.LBB414:
 686              		.file 5 "fltk-1.3.4-1/FL/Fl_Preferences.H"
   1:fltk-1.3.4-1/FL/Fl_Preferences.H **** //
   2:fltk-1.3.4-1/FL/Fl_Preferences.H **** // "$Id: Fl_Preferences.H 9978 2013-09-16 20:25:14Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Preferences.H **** //
   4:fltk-1.3.4-1/FL/Fl_Preferences.H **** // Preferences .
   5:fltk-1.3.4-1/FL/Fl_Preferences.H **** //
   6:fltk-1.3.4-1/FL/Fl_Preferences.H **** // Copyright 2002-2010 by Matthias Melcher.
   7:fltk-1.3.4-1/FL/Fl_Preferences.H **** //
   8:fltk-1.3.4-1/FL/Fl_Preferences.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Preferences.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Preferences.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Preferences.H **** //
  12:fltk-1.3.4-1/FL/Fl_Preferences.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Preferences.H **** //
  14:fltk-1.3.4-1/FL/Fl_Preferences.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Preferences.H **** //
  16:fltk-1.3.4-1/FL/Fl_Preferences.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Preferences.H **** //
  18:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
  19:fltk-1.3.4-1/FL/Fl_Preferences.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Preferences.H ****    Fl_Preferences class . */
  21:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
  22:fltk-1.3.4-1/FL/Fl_Preferences.H **** #ifndef Fl_Preferences_H
  23:fltk-1.3.4-1/FL/Fl_Preferences.H **** #  define Fl_Preferences_H
  24:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
  25:fltk-1.3.4-1/FL/Fl_Preferences.H **** #  include <stdio.h>
  26:fltk-1.3.4-1/FL/Fl_Preferences.H **** #  include "Fl_Export.H" 
  27:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
  28:fltk-1.3.4-1/FL/Fl_Preferences.H **** /**
  29:fltk-1.3.4-1/FL/Fl_Preferences.H ****    \brief Fl_Preferences provides methods to store user
  30:fltk-1.3.4-1/FL/Fl_Preferences.H ****    settings between application starts.
  31:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
  32:fltk-1.3.4-1/FL/Fl_Preferences.H ****    It is similar to the
  33:fltk-1.3.4-1/FL/Fl_Preferences.H ****    Registry on WIN32 and Preferences on MacOS, and provides a
  34:fltk-1.3.4-1/FL/Fl_Preferences.H ****    simple configuration mechanism for UNIX.
  35:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
  36:fltk-1.3.4-1/FL/Fl_Preferences.H ****    Fl_Preferences uses a hierarchy to store data. It
  37:fltk-1.3.4-1/FL/Fl_Preferences.H ****    bundles similar data into groups and manages entries into those
  38:fltk-1.3.4-1/FL/Fl_Preferences.H ****    groups as name/value pairs.
  39:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
  40:fltk-1.3.4-1/FL/Fl_Preferences.H ****    Preferences are stored in text files that can be edited
  41:fltk-1.3.4-1/FL/Fl_Preferences.H ****    manually. The file format is easy to read and relatively
  42:fltk-1.3.4-1/FL/Fl_Preferences.H ****    forgiving. Preferences files are the same on all platforms. User
  43:fltk-1.3.4-1/FL/Fl_Preferences.H ****    comments in preference files are preserved. Filenames are unique
  44:fltk-1.3.4-1/FL/Fl_Preferences.H ****    for each application by using a vendor/application naming
  45:fltk-1.3.4-1/FL/Fl_Preferences.H ****    scheme. The user must provide default values for all entries to
  46:fltk-1.3.4-1/FL/Fl_Preferences.H ****    ensure proper operation should preferences be corrupted or not
  47:fltk-1.3.4-1/FL/Fl_Preferences.H ****    yet exist.
  48:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
  49:fltk-1.3.4-1/FL/Fl_Preferences.H ****    Entries can be of any length. However, the size of each
  50:fltk-1.3.4-1/FL/Fl_Preferences.H ****    preferences file should be kept small for performance
  51:fltk-1.3.4-1/FL/Fl_Preferences.H ****    reasons. One application can have multiple preferences files.
  52:fltk-1.3.4-1/FL/Fl_Preferences.H ****    Extensive binary data however should be stored in separate
  53:fltk-1.3.4-1/FL/Fl_Preferences.H ****    files: see getUserdataPath().
  54:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
  55:fltk-1.3.4-1/FL/Fl_Preferences.H ****    \note Starting with FLTK 1.3, preference databases are expected to
  56:fltk-1.3.4-1/FL/Fl_Preferences.H ****    be in UTF-8 encoding. Previous databases were stored in the
  57:fltk-1.3.4-1/FL/Fl_Preferences.H ****    current character set or code page which renders them incompatible
  58:fltk-1.3.4-1/FL/Fl_Preferences.H ****    for text entries using international characters.
  59:fltk-1.3.4-1/FL/Fl_Preferences.H ****  */
  60:fltk-1.3.4-1/FL/Fl_Preferences.H **** class FL_EXPORT Fl_Preferences {
  61:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
  62:fltk-1.3.4-1/FL/Fl_Preferences.H **** public: 
  63:fltk-1.3.4-1/FL/Fl_Preferences.H ****   /**
  64:fltk-1.3.4-1/FL/Fl_Preferences.H ****      Define the scope of the preferences.
  65:fltk-1.3.4-1/FL/Fl_Preferences.H ****    */
  66:fltk-1.3.4-1/FL/Fl_Preferences.H ****   enum Root { 
  67:fltk-1.3.4-1/FL/Fl_Preferences.H ****     SYSTEM=0,   ///< Preferences are used system-wide
  68:fltk-1.3.4-1/FL/Fl_Preferences.H ****     USER        ///< Preferences apply only to the current user
  69:fltk-1.3.4-1/FL/Fl_Preferences.H ****   };
  70:fltk-1.3.4-1/FL/Fl_Preferences.H ****   
  71:fltk-1.3.4-1/FL/Fl_Preferences.H ****   /**
  72:fltk-1.3.4-1/FL/Fl_Preferences.H ****    Every Fl_Preferences-Group has a uniqe ID.
  73:fltk-1.3.4-1/FL/Fl_Preferences.H ****    
  74:fltk-1.3.4-1/FL/Fl_Preferences.H ****    ID's can be retrieved from an Fl_Preferences-Group and can then be used
  75:fltk-1.3.4-1/FL/Fl_Preferences.H ****    to create more Fl_Preference references to the same data set, as long as the 
  76:fltk-1.3.4-1/FL/Fl_Preferences.H ****    database remains open.
  77:fltk-1.3.4-1/FL/Fl_Preferences.H ****    */
  78:fltk-1.3.4-1/FL/Fl_Preferences.H ****   typedef void *ID;
  79:fltk-1.3.4-1/FL/Fl_Preferences.H ****   
  80:fltk-1.3.4-1/FL/Fl_Preferences.H ****   static const char *newUUID();
  81:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
  82:fltk-1.3.4-1/FL/Fl_Preferences.H ****   Fl_Preferences( Root root, const char *vendor, const char *application );
  83:fltk-1.3.4-1/FL/Fl_Preferences.H ****   Fl_Preferences( const char *path, const char *vendor, const char *application );
  84:fltk-1.3.4-1/FL/Fl_Preferences.H ****   Fl_Preferences( Fl_Preferences &parent, const char *group );
  85:fltk-1.3.4-1/FL/Fl_Preferences.H ****   Fl_Preferences( Fl_Preferences *parent, const char *group );
  86:fltk-1.3.4-1/FL/Fl_Preferences.H ****   Fl_Preferences( Fl_Preferences &parent, int groupIndex );
  87:fltk-1.3.4-1/FL/Fl_Preferences.H ****   Fl_Preferences( Fl_Preferences *parent, int groupIndex );
  88:fltk-1.3.4-1/FL/Fl_Preferences.H ****   Fl_Preferences(const Fl_Preferences&);
  89:fltk-1.3.4-1/FL/Fl_Preferences.H ****   Fl_Preferences( ID id );
  90:fltk-1.3.4-1/FL/Fl_Preferences.H ****   virtual ~Fl_Preferences();
  91:fltk-1.3.4-1/FL/Fl_Preferences.H ****   
  92:fltk-1.3.4-1/FL/Fl_Preferences.H ****   /** Return an ID that can later be reused to open more references to this dataset.
  93:fltk-1.3.4-1/FL/Fl_Preferences.H ****    */
  94:fltk-1.3.4-1/FL/Fl_Preferences.H ****   ID id() { return (ID)node; }
  95:fltk-1.3.4-1/FL/Fl_Preferences.H ****   
  96:fltk-1.3.4-1/FL/Fl_Preferences.H ****   /** Remove the group with this ID from a database.
  97:fltk-1.3.4-1/FL/Fl_Preferences.H ****    */
  98:fltk-1.3.4-1/FL/Fl_Preferences.H ****   static char remove(ID id_) { return ((Node*)id_)->remove(); }
  99:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 100:fltk-1.3.4-1/FL/Fl_Preferences.H ****   /** Return the name of this entry.
 101:fltk-1.3.4-1/FL/Fl_Preferences.H ****    */
 102:fltk-1.3.4-1/FL/Fl_Preferences.H ****   const char *name() { return node->name(); }
 103:fltk-1.3.4-1/FL/Fl_Preferences.H ****   
 104:fltk-1.3.4-1/FL/Fl_Preferences.H ****   /** Return the full path to this entry.
 105:fltk-1.3.4-1/FL/Fl_Preferences.H ****    */
 106:fltk-1.3.4-1/FL/Fl_Preferences.H ****   const char *path() { return node->path(); }
 107:fltk-1.3.4-1/FL/Fl_Preferences.H ****   
 108:fltk-1.3.4-1/FL/Fl_Preferences.H ****   int groups();
 109:fltk-1.3.4-1/FL/Fl_Preferences.H ****   const char *group( int num_group );
 110:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char groupExists( const char *key );
 111:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char deleteGroup( const char *group );
 112:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char deleteAllGroups();
 113:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 114:fltk-1.3.4-1/FL/Fl_Preferences.H ****   int entries();
 115:fltk-1.3.4-1/FL/Fl_Preferences.H ****   const char *entry( int index );
 116:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char entryExists( const char *key );
 117:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char deleteEntry( const char *entry );
 118:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char deleteAllEntries();
 119:fltk-1.3.4-1/FL/Fl_Preferences.H ****   
 120:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char clear();
 121:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 122:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char set( const char *entry, int value );
 123:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char set( const char *entry, float value );
 124:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char set( const char *entry, float value, int precision );
 125:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char set( const char *entry, double value );
 126:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char set( const char *entry, double value, int precision );
 127:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char set( const char *entry, const char *value );
 128:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char set( const char *entry, const void *value, int size ); 
 129:fltk-1.3.4-1/FL/Fl_Preferences.H ****   
 130:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char get( const char *entry, int &value, int defaultValue );
 131:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char get( const char *entry, float &value,  float defaultValue );
 132:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char get( const char *entry, double &value, double defaultValue );
 133:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char get( const char *entry, char *&value,  const char *defaultValue );
 134:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char get( const char *entry, char *value,   const char *defaultValue, int maxSize );
 135:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char get( const char *entry, void *&value,  const void *defaultValue, int defaultSize );
 136:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char get( const char *entry, void *value,   const void *defaultValue, int defaultSize, int maxSiz
 137:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 138:fltk-1.3.4-1/FL/Fl_Preferences.H ****   int size( const char *entry );
 139:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 140:fltk-1.3.4-1/FL/Fl_Preferences.H ****   char getUserdataPath( char *path, int pathlen );
 141:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 142:fltk-1.3.4-1/FL/Fl_Preferences.H ****   void flush();
 143:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 144:fltk-1.3.4-1/FL/Fl_Preferences.H ****   // char export( const char *filename, Type fileFormat );
 145:fltk-1.3.4-1/FL/Fl_Preferences.H ****   // char import( const char *filename );
 146:fltk-1.3.4-1/FL/Fl_Preferences.H ****   
 147:fltk-1.3.4-1/FL/Fl_Preferences.H ****   /**
 148:fltk-1.3.4-1/FL/Fl_Preferences.H ****      'Name' provides a simple method to create numerical or more complex
 149:fltk-1.3.4-1/FL/Fl_Preferences.H ****      procedural names for entries and groups on the fly.
 150:fltk-1.3.4-1/FL/Fl_Preferences.H ****      
 151:fltk-1.3.4-1/FL/Fl_Preferences.H ****      Example: prefs.set(Fl_Preferences::Name("File%d",i),file[i]);.
 152:fltk-1.3.4-1/FL/Fl_Preferences.H ****     
 153:fltk-1.3.4-1/FL/Fl_Preferences.H ****      See test/preferences.cxx as a sample for writing arrays into preferences.
 154:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 155:fltk-1.3.4-1/FL/Fl_Preferences.H ****      'Name' is actually implemented as a class inside Fl_Preferences. It casts
 156:fltk-1.3.4-1/FL/Fl_Preferences.H ****      into const char* and gets automatically destroyed after the enclosing call
 157:fltk-1.3.4-1/FL/Fl_Preferences.H ****      ends.
 158:fltk-1.3.4-1/FL/Fl_Preferences.H ****    */
 159:fltk-1.3.4-1/FL/Fl_Preferences.H ****   class FL_EXPORT Name {
 160:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 161:fltk-1.3.4-1/FL/Fl_Preferences.H ****     char *data_;
 162:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 163:fltk-1.3.4-1/FL/Fl_Preferences.H ****   public: 
 164:fltk-1.3.4-1/FL/Fl_Preferences.H ****     Name( unsigned int n );
 165:fltk-1.3.4-1/FL/Fl_Preferences.H ****     Name( const char *format, ... );
 166:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 167:fltk-1.3.4-1/FL/Fl_Preferences.H ****     /**
 168:fltk-1.3.4-1/FL/Fl_Preferences.H ****        Return the Name as a "C" string.
 169:fltk-1.3.4-1/FL/Fl_Preferences.H ****        \internal
 170:fltk-1.3.4-1/FL/Fl_Preferences.H ****      */
 171:fltk-1.3.4-1/FL/Fl_Preferences.H ****     operator const char *() { return data_; }
 172:fltk-1.3.4-1/FL/Fl_Preferences.H ****     ~Name();
 173:fltk-1.3.4-1/FL/Fl_Preferences.H ****   };
 174:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 175:fltk-1.3.4-1/FL/Fl_Preferences.H ****   /** \internal An entry associates a preference name to its corresponding value */
 176:fltk-1.3.4-1/FL/Fl_Preferences.H ****   struct Entry {
 177:fltk-1.3.4-1/FL/Fl_Preferences.H ****     char *name, *value;
 178:fltk-1.3.4-1/FL/Fl_Preferences.H ****   };
 179:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 180:fltk-1.3.4-1/FL/Fl_Preferences.H **** private: 
 181:fltk-1.3.4-1/FL/Fl_Preferences.H ****   Fl_Preferences() : node(0), rootNode(0) { }
 182:fltk-1.3.4-1/FL/Fl_Preferences.H ****   Fl_Preferences &operator=(const Fl_Preferences&);
 183:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 184:fltk-1.3.4-1/FL/Fl_Preferences.H ****   static char nameBuffer[128];
 185:fltk-1.3.4-1/FL/Fl_Preferences.H ****   static char uuidBuffer[40];
 186:fltk-1.3.4-1/FL/Fl_Preferences.H ****   static Fl_Preferences *runtimePrefs;
 187:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 188:fltk-1.3.4-1/FL/Fl_Preferences.H **** public:  // older Sun compilers need this (public definition of the following classes)
 189:fltk-1.3.4-1/FL/Fl_Preferences.H ****   class RootNode;
 190:fltk-1.3.4-1/FL/Fl_Preferences.H ****   
 191:fltk-1.3.4-1/FL/Fl_Preferences.H ****   class FL_EXPORT Node {	// a node contains a list to all its entries 
 192:fltk-1.3.4-1/FL/Fl_Preferences.H ****             			// and all means to manage the tree structure
 193:fltk-1.3.4-1/FL/Fl_Preferences.H ****     Node *child_, *next_;
 194:fltk-1.3.4-1/FL/Fl_Preferences.H ****     union { 			// these two are mutually exclusive
 195:fltk-1.3.4-1/FL/Fl_Preferences.H ****       Node *parent_;   		// top_ bit clear
 196:fltk-1.3.4-1/FL/Fl_Preferences.H ****       RootNode *root_; 		// top_ bit set
 197:fltk-1.3.4-1/FL/Fl_Preferences.H ****     };
 198:fltk-1.3.4-1/FL/Fl_Preferences.H ****     char *path_;
 199:fltk-1.3.4-1/FL/Fl_Preferences.H ****     Entry *entry_;
 200:fltk-1.3.4-1/FL/Fl_Preferences.H ****     int nEntry_, NEntry_;
 201:fltk-1.3.4-1/FL/Fl_Preferences.H ****     unsigned char dirty_:1;
 202:fltk-1.3.4-1/FL/Fl_Preferences.H ****     unsigned char top_:1;
 203:fltk-1.3.4-1/FL/Fl_Preferences.H ****     unsigned char indexed_:1;
 204:fltk-1.3.4-1/FL/Fl_Preferences.H ****     // indexing routines
 205:fltk-1.3.4-1/FL/Fl_Preferences.H ****     Node **index_;
 206:fltk-1.3.4-1/FL/Fl_Preferences.H ****     int nIndex_, NIndex_;
 207:fltk-1.3.4-1/FL/Fl_Preferences.H ****     void createIndex();
 208:fltk-1.3.4-1/FL/Fl_Preferences.H ****     void updateIndex();
 209:fltk-1.3.4-1/FL/Fl_Preferences.H ****     void deleteIndex();
 210:fltk-1.3.4-1/FL/Fl_Preferences.H ****   public:
 211:fltk-1.3.4-1/FL/Fl_Preferences.H ****     static int lastEntrySet;
 212:fltk-1.3.4-1/FL/Fl_Preferences.H ****   public:
 213:fltk-1.3.4-1/FL/Fl_Preferences.H ****     Node( const char *path );
 214:fltk-1.3.4-1/FL/Fl_Preferences.H ****     ~Node();
 215:fltk-1.3.4-1/FL/Fl_Preferences.H ****     // node methods
 216:fltk-1.3.4-1/FL/Fl_Preferences.H ****     int write( FILE *f );
 217:fltk-1.3.4-1/FL/Fl_Preferences.H ****     const char *name();
 218:fltk-1.3.4-1/FL/Fl_Preferences.H ****     const char *path() { return path_; }
 219:fltk-1.3.4-1/FL/Fl_Preferences.H ****     Node *find( const char *path );
 220:fltk-1.3.4-1/FL/Fl_Preferences.H ****     Node *search( const char *path, int offset=0 );
 221:fltk-1.3.4-1/FL/Fl_Preferences.H ****     Node *childNode( int ix );
 222:fltk-1.3.4-1/FL/Fl_Preferences.H ****     Node *addChild( const char *path );
 223:fltk-1.3.4-1/FL/Fl_Preferences.H ****     void setParent( Node *parent );
 224:fltk-1.3.4-1/FL/Fl_Preferences.H ****     Node *parent() { return top_?0L:parent_; }
 687              		.loc 5 224 0
 688 0010 488B7610 		movq	16(%rsi), %rsi
 689              	.LVL77:
 690              	.LBE414:
 691              	.LBE413:
 692              		.loc 1 1316 0
 693 0014 4885F6   		testq	%rsi, %rsi
 694 0017 740F     		je	.L49
 695              	.L47:
 696              	.LVL78:
 697              		.loc 1 1317 0
 698 0019 F6463002 		testb	$2, 48(%rsi)
 699 001d 74F1     		je	.L45
 700              		.loc 1 1318 0
 701 001f 488B4610 		movq	16(%rsi), %rax
 702              	.LVL79:
 703              	.L46:
 704              	.LBE412:
 705              	.LBE411:
 706              		.loc 1 342 0
 707 0023 48894710 		movq	%rax, 16(%rdi)
 708 0027 C3       		ret
 709              	.LVL80:
 710              	.L49:
 711              	.LBB416:
 712              	.LBB415:
 713              		.loc 1 1321 0
 714 0028 31C0     		xorl	%eax, %eax
 715 002a EBF7     		jmp	.L46
 716              	.LBE415:
 717              	.LBE416:
 718              	.LBE410:
 719              		.cfi_endproc
 720              	.LFE214:
 722              		.section	.text.unlikely._ZN14Fl_PreferencesC2EPv
 723              	.LCOLDE5:
 724              		.section	.text._ZN14Fl_PreferencesC2EPv
 725              	.LHOTE5:
 726              		.globl	_ZN14Fl_PreferencesC1EPv
 727              		.set	_ZN14Fl_PreferencesC1EPv,_ZN14Fl_PreferencesC2EPv
 728              		.section	.text.unlikely._ZN14Fl_PreferencesC2ERKS_,"ax",@progbits
 729              		.align 2
 730              	.LCOLDB6:
 731              		.section	.text._ZN14Fl_PreferencesC2ERKS_,"ax",@progbits
 732              	.LHOTB6:
 733              		.align 2
 734              		.p2align 4,,15
 735              		.globl	_ZN14Fl_PreferencesC2ERKS_
 737              	_ZN14Fl_PreferencesC2ERKS_:
 738              	.LFB217:
 739              		.loc 1 348 0
 740              		.cfi_startproc
 741              	.LVL81:
 742              	.LBB417:
 743              		.loc 1 350 0
 744 0000 48C70700 		movq	$_ZTV14Fl_Preferences+16, (%rdi)
 744      000000
 745              		.loc 1 349 0
 746 0007 488B4608 		movq	8(%rsi), %rax
 747              		.loc 1 350 0
 748 000b 48894708 		movq	%rax, 8(%rdi)
 749 000f 488B4610 		movq	16(%rsi), %rax
 750 0013 48894710 		movq	%rax, 16(%rdi)
 751 0017 C3       		ret
 752              	.LBE417:
 753              		.cfi_endproc
 754              	.LFE217:
 756              		.section	.text.unlikely._ZN14Fl_PreferencesC2ERKS_
 757              	.LCOLDE6:
 758              		.section	.text._ZN14Fl_PreferencesC2ERKS_
 759              	.LHOTE6:
 760              		.globl	_ZN14Fl_PreferencesC1ERKS_
 761              		.set	_ZN14Fl_PreferencesC1ERKS_,_ZN14Fl_PreferencesC2ERKS_
 762              		.section	.text.unlikely._ZN14Fl_PreferencesaSERKS_,"ax",@progbits
 763              		.align 2
 764              	.LCOLDB7:
 765              		.section	.text._ZN14Fl_PreferencesaSERKS_,"ax",@progbits
 766              	.LHOTB7:
 767              		.align 2
 768              		.p2align 4,,15
 769              		.globl	_ZN14Fl_PreferencesaSERKS_
 771              	_ZN14Fl_PreferencesaSERKS_:
 772              	.LFB219:
 773              		.loc 1 356 0
 774              		.cfi_startproc
 775              	.LVL82:
 776              		.loc 1 357 0
 777 0000 4839FE   		cmpq	%rdi, %rsi
 778              		.loc 1 356 0
 779 0003 4889F8   		movq	%rdi, %rax
 780              		.loc 1 357 0
 781 0006 7410     		je	.L52
 782              		.loc 1 358 0
 783 0008 488B5608 		movq	8(%rsi), %rdx
 784 000c 48895708 		movq	%rdx, 8(%rdi)
 785              		.loc 1 359 0
 786 0010 488B5610 		movq	16(%rsi), %rdx
 787 0014 48895710 		movq	%rdx, 16(%rdi)
 788              	.L52:
 789              		.loc 1 362 0
 790 0018 F3C3     		rep ret
 791              		.cfi_endproc
 792              	.LFE219:
 794              		.section	.text.unlikely._ZN14Fl_PreferencesaSERKS_
 795              	.LCOLDE7:
 796              		.section	.text._ZN14Fl_PreferencesaSERKS_
 797              	.LHOTE7:
 798              		.section	.text.unlikely._ZN14Fl_Preferences6groupsEv,"ax",@progbits
 799              		.align 2
 800              	.LCOLDB8:
 801              		.section	.text._ZN14Fl_Preferences6groupsEv,"ax",@progbits
 802              	.LHOTB8:
 803              		.align 2
 804              		.p2align 4,,15
 805              		.globl	_ZN14Fl_Preferences6groupsEv
 807              	_ZN14Fl_Preferences6groupsEv:
 808              	.LFB224:
 809              		.loc 1 387 0
 810              		.cfi_startproc
 811              	.LVL83:
 812              		.loc 1 388 0
 813 0000 488B7F08 		movq	8(%rdi), %rdi
 814              	.LVL84:
 815              	.LBB418:
 816              	.LBB419:
 817              	.LBB420:
 818              		.loc 1 1488 0
 819 0004 F6473004 		testb	$4, 48(%rdi)
 820 0008 7506     		jne	.L57
 821              	.LBE420:
 822 000a E9000000 		jmp	_ZN14Fl_Preferences4Node9nChildrenEv.part.5
 822      00
 823              	.LVL85:
 824 000f 90       		.p2align 4,,10
 825              		.p2align 3
 826              	.L57:
 827              	.LBB421:
 828              		.loc 1 1489 0
 829 0010 8B4740   		movl	64(%rdi), %eax
 830              	.LVL86:
 831              	.LBE421:
 832              	.LBE419:
 833              	.LBE418:
 834              		.loc 1 389 0
 835 0013 C3       		ret
 836              		.cfi_endproc
 837              	.LFE224:
 839              		.section	.text.unlikely._ZN14Fl_Preferences6groupsEv
 840              	.LCOLDE8:
 841              		.section	.text._ZN14Fl_Preferences6groupsEv
 842              	.LHOTE8:
 843              		.section	.text.unlikely._ZN14Fl_Preferences7entriesEv,"ax",@progbits
 844              		.align 2
 845              	.LCOLDB9:
 846              		.section	.text._ZN14Fl_Preferences7entriesEv,"ax",@progbits
 847              	.LHOTB9:
 848              		.align 2
 849              		.p2align 4,,15
 850              		.globl	_ZN14Fl_Preferences7entriesEv
 852              	_ZN14Fl_Preferences7entriesEv:
 853              	.LFB229:
 854              		.loc 1 444 0
 855              		.cfi_startproc
 856              	.LVL87:
 857 0000 488B4708 		movq	8(%rdi), %rax
 858              		.loc 1 445 0
 859 0004 8B4028   		movl	40(%rax), %eax
 860              		.loc 1 446 0
 861 0007 C3       		ret
 862              		.cfi_endproc
 863              	.LFE229:
 865              		.section	.text.unlikely._ZN14Fl_Preferences7entriesEv
 866              	.LCOLDE9:
 867              		.section	.text._ZN14Fl_Preferences7entriesEv
 868              	.LHOTE9:
 869              		.section	.text.unlikely._ZN14Fl_Preferences5entryEi,"ax",@progbits
 870              		.align 2
 871              	.LCOLDB10:
 872              		.section	.text._ZN14Fl_Preferences5entryEi,"ax",@progbits
 873              	.LHOTB10:
 874              		.align 2
 875              		.p2align 4,,15
 876              		.globl	_ZN14Fl_Preferences5entryEi
 878              	_ZN14Fl_Preferences5entryEi:
 879              	.LFB230:
 880              		.loc 1 456 0
 881              		.cfi_startproc
 882              	.LVL88:
 883 0000 488B4708 		movq	8(%rdi), %rax
 884              		.loc 1 457 0
 885 0004 4863F6   		movslq	%esi, %rsi
 886 0007 48C1E604 		salq	$4, %rsi
 887              	.LVL89:
 888 000b 48037020 		addq	32(%rax), %rsi
 889 000f 488B06   		movq	(%rsi), %rax
 890              		.loc 1 458 0
 891 0012 C3       		ret
 892              		.cfi_endproc
 893              	.LFE230:
 895              		.section	.text.unlikely._ZN14Fl_Preferences5entryEi
 896              	.LCOLDE10:
 897              		.section	.text._ZN14Fl_Preferences5entryEi
 898              	.LHOTE10:
 899              		.section	.rodata.str1.1,"aMS",@progbits,1
 900              	.LC11:
 901 0000 257500   		.string	"%u"
 902              		.section	.text.unlikely._ZN14Fl_Preferences4NameC2Ej,"ax",@progbits
 903              		.align 2
 904              	.LCOLDB12:
 905              		.section	.text._ZN14Fl_Preferences4NameC2Ej,"ax",@progbits
 906              	.LHOTB12:
 907              		.align 2
 908              		.p2align 4,,15
 909              		.globl	_ZN14Fl_Preferences4NameC2Ej
 911              	_ZN14Fl_Preferences4NameC2Ej:
 912              	.LFB255:
 913              		.loc 1 918 0
 914              		.cfi_startproc
 915              	.LVL90:
 916 0000 55       		pushq	%rbp
 917              		.cfi_def_cfa_offset 16
 918              		.cfi_offset 6, -16
 919 0001 53       		pushq	%rbx
 920              		.cfi_def_cfa_offset 24
 921              		.cfi_offset 3, -24
 922 0002 4889FD   		movq	%rdi, %rbp
 923              	.LBB422:
 924              		.loc 1 919 0
 925 0005 BF140000 		movl	$20, %edi
 925      00
 926              	.LVL91:
 927              	.LBE422:
 928              		.loc 1 918 0
 929 000a 89F3     		movl	%esi, %ebx
 930 000c 4883EC08 		subq	$8, %rsp
 931              		.cfi_def_cfa_offset 32
 932              	.LBB427:
 933              		.loc 1 919 0
 934 0010 E8000000 		call	malloc
 934      00
 935              	.LVL92:
 936 0015 48894500 		movq	%rax, 0(%rbp)
 937              	.LVL93:
 938              	.LBE427:
 939              		.loc 1 921 0
 940 0019 4883C408 		addq	$8, %rsp
 941              		.cfi_def_cfa_offset 24
 942              	.LBB428:
 943              	.LBB423:
 944              	.LBB424:
 945              		.loc 4 34 0
 946 001d 4189D8   		movl	%ebx, %r8d
 947              	.LBE424:
 948              	.LBE423:
 949              	.LBE428:
 950              		.loc 1 921 0
 951 0020 5B       		popq	%rbx
 952              		.cfi_def_cfa_offset 16
 953              	.LVL94:
 954 0021 5D       		popq	%rbp
 955              		.cfi_def_cfa_offset 8
 956              	.LVL95:
 957              	.LBB429:
 958              	.LBB426:
 959              	.LBB425:
 960              		.loc 4 34 0
 961 0022 4889C7   		movq	%rax, %rdi
 962 0025 B9000000 		movl	$.LC11, %ecx
 962      00
 963 002a BA140000 		movl	$20, %edx
 963      00
 964 002f BE010000 		movl	$1, %esi
 964      00
 965 0034 31C0     		xorl	%eax, %eax
 966              	.LVL96:
 967 0036 E9000000 		jmp	__sprintf_chk
 967      00
 968              	.LVL97:
 969              	.LBE425:
 970              	.LBE426:
 971              	.LBE429:
 972              		.cfi_endproc
 973              	.LFE255:
 975              		.section	.text.unlikely._ZN14Fl_Preferences4NameC2Ej
 976              	.LCOLDE12:
 977              		.section	.text._ZN14Fl_Preferences4NameC2Ej
 978              	.LHOTE12:
 979              		.globl	_ZN14Fl_Preferences4NameC1Ej
 980              		.set	_ZN14Fl_Preferences4NameC1Ej,_ZN14Fl_Preferences4NameC2Ej
 981              		.section	.text.unlikely._ZN14Fl_Preferences4NameC2EPKcz,"ax",@progbits
 982              		.align 2
 983              	.LCOLDB13:
 984              		.section	.text._ZN14Fl_Preferences4NameC2EPKcz,"ax",@progbits
 985              	.LHOTB13:
 986              		.align 2
 987              		.p2align 4,,15
 988              		.globl	_ZN14Fl_Preferences4NameC2EPKcz
 990              	_ZN14Fl_Preferences4NameC2EPKcz:
 991              	.LFB258:
 992              		.loc 1 936 0
 993              		.cfi_startproc
 994              	.LVL98:
 995 0000 55       		pushq	%rbp
 996              		.cfi_def_cfa_offset 16
 997              		.cfi_offset 6, -16
 998 0001 53       		pushq	%rbx
 999              		.cfi_def_cfa_offset 24
 1000              		.cfi_offset 3, -24
 1001 0002 4889FD   		movq	%rdi, %rbp
 1002 0005 4889F3   		movq	%rsi, %rbx
 1003 0008 4881ECD8 		subq	$216, %rsp
 1003      000000
 1004              		.cfi_def_cfa_offset 240
 1005 000f 84C0     		testb	%al, %al
 1006 0011 48895424 		movq	%rdx, 48(%rsp)
 1006      30
 1007 0016 48894C24 		movq	%rcx, 56(%rsp)
 1007      38
 1008 001b 4C894424 		movq	%r8, 64(%rsp)
 1008      40
 1009 0020 4C894C24 		movq	%r9, 72(%rsp)
 1009      48
 1010 0025 7437     		je	.L63
 1011 0027 0F294424 		movaps	%xmm0, 80(%rsp)
 1011      50
 1012 002c 0F294C24 		movaps	%xmm1, 96(%rsp)
 1012      60
 1013 0031 0F295424 		movaps	%xmm2, 112(%rsp)
 1013      70
 1014 0036 0F299C24 		movaps	%xmm3, 128(%rsp)
 1014      80000000 
 1015 003e 0F29A424 		movaps	%xmm4, 144(%rsp)
 1015      90000000 
 1016 0046 0F29AC24 		movaps	%xmm5, 160(%rsp)
 1016      A0000000 
 1017 004e 0F29B424 		movaps	%xmm6, 176(%rsp)
 1017      B0000000 
 1018 0056 0F29BC24 		movaps	%xmm7, 192(%rsp)
 1018      C0000000 
 1019              	.L63:
 1020              	.LBB430:
 1021              		.loc 1 937 0
 1022 005e BF000400 		movl	$1024, %edi
 1022      00
 1023              	.LVL99:
 1024              	.LBE430:
 1025              		.loc 1 936 0
 1026 0063 64488B04 		movq	%fs:40, %rax
 1026      25280000 
 1026      00
 1027 006c 48894424 		movq	%rax, 24(%rsp)
 1027      18
 1028 0071 31C0     		xorl	%eax, %eax
 1029              	.LBB437:
 1030              		.loc 1 937 0
 1031 0073 E8000000 		call	malloc
 1031      00
 1032              	.LVL100:
 1033              		.loc 1 939 0
 1034 0078 488D9424 		leaq	240(%rsp), %rdx
 1034      F0000000 
 1035 0080 488D4C24 		leaq	32(%rsp), %rcx
 1035      20
 1036              		.loc 1 937 0
 1037 0085 48894500 		movq	%rax, 0(%rbp)
 1038              	.LBB431:
 1039              	.LBB432:
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
 1040              		.loc 4 78 0
 1041 0089 4989E1   		movq	%rsp, %r9
 1042 008c 4989D8   		movq	%rbx, %r8
 1043 008f BE000400 		movl	$1024, %esi
 1043      00
 1044              	.LBE432:
 1045              	.LBE431:
 1046              		.loc 1 939 0
 1047 0094 48895424 		movq	%rdx, 8(%rsp)
 1047      08
 1048 0099 48894C24 		movq	%rcx, 16(%rsp)
 1048      10
 1049              	.LVL101:
 1050              	.LBB435:
 1051              	.LBB433:
 1052              		.loc 4 78 0
 1053 009e BA010000 		movl	$1, %edx
 1053      00
 1054 00a3 48C7C1FF 		movq	$-1, %rcx
 1054      FFFFFF
 1055 00aa 4889C7   		movq	%rax, %rdi
 1056              	.LBE433:
 1057              	.LBE435:
 1058              		.loc 1 939 0
 1059 00ad C7042410 		movl	$16, (%rsp)
 1059      000000
 1060 00b4 C7442404 		movl	$48, 4(%rsp)
 1060      30000000 
 1061              	.LBB436:
 1062              	.LBB434:
 1063              		.loc 4 78 0
 1064 00bc E8000000 		call	__vsnprintf_chk
 1064      00
 1065              	.LVL102:
 1066              	.LBE434:
 1067              	.LBE436:
 1068              	.LBE437:
 1069              		.loc 1 942 0
 1070 00c1 488B4424 		movq	24(%rsp), %rax
 1070      18
 1071 00c6 64483304 		xorq	%fs:40, %rax
 1071      25280000 
 1071      00
 1072 00cf 750A     		jne	.L66
 1073 00d1 4881C4D8 		addq	$216, %rsp
 1073      000000
 1074              		.cfi_remember_state
 1075              		.cfi_def_cfa_offset 24
 1076 00d8 5B       		popq	%rbx
 1077              		.cfi_def_cfa_offset 16
 1078              	.LVL103:
 1079 00d9 5D       		popq	%rbp
 1080              		.cfi_def_cfa_offset 8
 1081              	.LVL104:
 1082 00da C3       		ret
 1083              	.LVL105:
 1084              	.L66:
 1085              		.cfi_restore_state
 1086 00db E8000000 		call	__stack_chk_fail
 1086      00
 1087              	.LVL106:
 1088              		.cfi_endproc
 1089              	.LFE258:
 1091              		.section	.text.unlikely._ZN14Fl_Preferences4NameC2EPKcz
 1092              	.LCOLDE13:
 1093              		.section	.text._ZN14Fl_Preferences4NameC2EPKcz
 1094              	.LHOTE13:
 1095              		.globl	_ZN14Fl_Preferences4NameC1EPKcz
 1096              		.set	_ZN14Fl_Preferences4NameC1EPKcz,_ZN14Fl_Preferences4NameC2EPKcz
 1097              		.section	.text.unlikely._ZN14Fl_Preferences4NameD2Ev,"ax",@progbits
 1098              		.align 2
 1099              	.LCOLDB14:
 1100              		.section	.text._ZN14Fl_Preferences4NameD2Ev,"ax",@progbits
 1101              	.LHOTB14:
 1102              		.align 2
 1103              		.p2align 4,,15
 1104              		.globl	_ZN14Fl_Preferences4NameD2Ev
 1106              	_ZN14Fl_Preferences4NameD2Ev:
 1107              	.LFB261:
 1108              		.loc 1 945 0
 1109              		.cfi_startproc
 1110              	.LVL107:
 1111              	.LBB438:
 1112              		.loc 1 946 0
 1113 0000 488B3F   		movq	(%rdi), %rdi
 1114              	.LVL108:
 1115 0003 4885FF   		testq	%rdi, %rdi
 1116 0006 7408     		je	.L67
 1117              		.loc 1 947 0
 1118 0008 E9000000 		jmp	free
 1118      00
 1119              	.LVL109:
 1120 000d 0F1F00   		.p2align 4,,10
 1121              		.p2align 3
 1122              	.L67:
 1123 0010 F3C3     		rep ret
 1124              	.LBE438:
 1125              		.cfi_endproc
 1126              	.LFE261:
 1128              		.section	.text.unlikely._ZN14Fl_Preferences4NameD2Ev
 1129              	.LCOLDE14:
 1130              		.section	.text._ZN14Fl_Preferences4NameD2Ev
 1131              	.LHOTE14:
 1132              		.globl	_ZN14Fl_Preferences4NameD1Ev
 1133              		.set	_ZN14Fl_Preferences4NameD1Ev,_ZN14Fl_Preferences4NameD2Ev
 1134              		.section	.text.unlikely._ZN14Fl_Preferences8RootNodeC2EPS_,"ax",@progbits
 1135              		.align 2
 1136              	.LCOLDB15:
 1137              		.section	.text._ZN14Fl_Preferences8RootNodeC2EPS_,"ax",@progbits
 1138              	.LHOTB15:
 1139              		.align 2
 1140              		.p2align 4,,15
 1141              		.globl	_ZN14Fl_Preferences8RootNodeC2EPS_
 1143              	_ZN14Fl_Preferences8RootNodeC2EPS_:
 1144              	.LFB270:
 1145              		.loc 1 1089 0
 1146              		.cfi_startproc
 1147              	.LVL110:
 1148              	.LBB439:
 1149              		.loc 1 1093 0
 1150 0000 488937   		movq	%rsi, (%rdi)
 1151 0003 48C74708 		movq	$0, 8(%rdi)
 1151      00000000 
 1152 000b 48C74710 		movq	$0, 16(%rdi)
 1152      00000000 
 1153 0013 48C74718 		movq	$0, 24(%rdi)
 1153      00000000 
 1154 001b C3       		ret
 1155              	.LBE439:
 1156              		.cfi_endproc
 1157              	.LFE270:
 1159              		.section	.text.unlikely._ZN14Fl_Preferences8RootNodeC2EPS_
 1160              	.LCOLDE15:
 1161              		.section	.text._ZN14Fl_Preferences8RootNodeC2EPS_
 1162              	.LHOTE15:
 1163              		.globl	_ZN14Fl_Preferences8RootNodeC1EPS_
 1164              		.set	_ZN14Fl_Preferences8RootNodeC1EPS_,_ZN14Fl_Preferences8RootNodeC2EPS_
 1165              		.section	.rodata.str1.1
 1166              	.LC16:
 1167 0003 2F657463 		.string	"/etc/fltk/"
 1167      2F666C74 
 1167      6B2F00
 1168              		.section	.text.unlikely._ZN14Fl_Preferences8RootNode7getPathEPci,"ax",@progbits
 1169              		.align 2
 1170              	.LCOLDB17:
 1171              		.section	.text._ZN14Fl_Preferences8RootNode7getPathEPci,"ax",@progbits
 1172              	.LHOTB17:
 1173              		.align 2
 1174              		.p2align 4,,15
 1175              		.globl	_ZN14Fl_Preferences8RootNode7getPathEPci
 1177              	_ZN14Fl_Preferences8RootNode7getPathEPci:
 1178              	.LFB277:
 1179              		.loc 1 1183 0
 1180              		.cfi_startproc
 1181              	.LVL111:
 1182              		.loc 1 1184 0
 1183 0000 488B4F08 		movq	8(%rdi), %rcx
 1184              		.loc 1 1185 0
 1185 0004 B8010000 		movl	$1, %eax
 1185      00
 1186              		.loc 1 1184 0
 1187 0009 4885C9   		testq	%rcx, %rcx
 1188 000c 0F848B00 		je	.L89
 1188      0000
 1189              		.loc 1 1183 0
 1190 0012 4154     		pushq	%r12
 1191              		.cfi_def_cfa_offset 16
 1192              		.cfi_offset 12, -16
 1193 0014 55       		pushq	%rbp
 1194              		.cfi_def_cfa_offset 24
 1195              		.cfi_offset 6, -24
 1196              		.loc 1 1186 0
 1197 0015 4863D2   		movslq	%edx, %rdx
 1198              		.loc 1 1183 0
 1199 0018 53       		pushq	%rbx
 1200              		.cfi_def_cfa_offset 32
 1201              		.cfi_offset 3, -32
 1202 0019 4889F3   		movq	%rsi, %rbx
 1203              		.loc 1 1186 0
 1204 001c 4889CE   		movq	%rcx, %rsi
 1205              	.LVL112:
 1206 001f 4889DF   		movq	%rbx, %rdi
 1207              	.LVL113:
 1208 0022 E8000000 		call	fl_strlcpy
 1208      00
 1209              	.LVL114:
 1210              	.LBB446:
 1211              	.LBB447:
 1212              		.loc 1 1189 0
 1213 0027 0FB613   		movzbl	(%rbx), %edx
 1214 002a 4889D8   		movq	%rbx, %rax
 1215 002d 84D2     		testb	%dl, %dl
 1216 002f 7512     		jne	.L82
 1217 0031 EB23     		jmp	.L75
 1218              	.LVL115:
 1219              		.p2align 4,,10
 1220 0033 0F1F4400 		.p2align 3
 1220      00
 1221              	.L74:
 1222 0038 4883C001 		addq	$1, %rax
 1223              	.LVL116:
 1224 003c 0FB610   		movzbl	(%rax), %edx
 1225 003f 84D2     		testb	%dl, %dl
 1226 0041 7413     		je	.L75
 1227              	.L82:
 1228 0043 80FA5C   		cmpb	$92, %dl
 1229 0046 75F0     		jne	.L74
 1230 0048 C6002F   		movb	$47, (%rax)
 1231 004b 4883C001 		addq	$1, %rax
 1232              	.LVL117:
 1233 004f 0FB610   		movzbl	(%rax), %edx
 1234 0052 84D2     		testb	%dl, %dl
 1235 0054 75ED     		jne	.L82
 1236              	.L75:
 1237              	.LVL118:
 1238              	.LBB448:
 1239              	.LBB449:
 1240              		.file 6 "/usr/include/string.h"
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
 1241              		.loc 6 247 0
 1242 0056 BE2E0000 		movl	$46, %esi
 1242      00
 1243 005b 4889DF   		movq	%rbx, %rdi
 1244 005e E8000000 		call	strrchr
 1244      00
 1245              	.LVL119:
 1246 0063 4989C4   		movq	%rax, %r12
 1247              	.LVL120:
 1248              	.LBE449:
 1249              	.LBE448:
 1250              		.loc 1 1191 0
 1251 0066 31C0     		xorl	%eax, %eax
 1252 0068 4D85E4   		testq	%r12, %r12
 1253 006b 742C     		je	.L71
 1254              		.loc 1 1193 0
 1255 006d 4889DF   		movq	%rbx, %rdi
 1256              		.loc 1 1192 0
 1257 0070 41C60424 		movb	$0, (%r12)
 1257      00
 1258              		.loc 1 1193 0
 1259 0075 E8000000 		call	fl_make_path
 1259      00
 1260              	.LVL121:
 1261              		.loc 1 1196 0
 1262 007a BF000000 		movl	$.LC16, %edi
 1262      00
 1263 007f B90A0000 		movl	$10, %ecx
 1263      00
 1264 0084 4889DE   		movq	%rbx, %rsi
 1265 0087 F3A6     		repz cmpsb
 1266              	.LVL122:
 1267              		.loc 1 1193 0
 1268 0089 89C5     		movl	%eax, %ebp
 1269              	.LVL123:
 1270              		.loc 1 1196 0
 1271 008b 7413     		je	.L90
 1272              	.LVL124:
 1273              	.L77:
 1274              	.LBB450:
 1275              	.LBB451:
 1276              		.file 7 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 1277              		.loc 7 110 0
 1278 008d B82F0000 		movl	$47, %eax
 1278      00
 1279 0092 66418904 		movw	%ax, (%r12)
 1279      24
 1280              	.LVL125:
 1281              	.LBE451:
 1282              	.LBE450:
 1283              		.loc 1 1201 0
 1284 0097 89E8     		movl	%ebp, %eax
 1285              	.LVL126:
 1286              	.L71:
 1287              	.LBE447:
 1288              	.LBE446:
 1289              		.loc 1 1202 0
 1290 0099 5B       		popq	%rbx
 1291              		.cfi_restore 3
 1292              		.cfi_def_cfa_offset 24
 1293              	.LVL127:
 1294 009a 5D       		popq	%rbp
 1295              		.cfi_restore 6
 1296              		.cfi_def_cfa_offset 16
 1297 009b 415C     		popq	%r12
 1298              		.cfi_restore 12
 1299              		.cfi_def_cfa_offset 8
 1300              	.LVL128:
 1301              	.L89:
 1302 009d F3C3     		rep ret
 1303              	.LVL129:
 1304 009f 90       		.p2align 4,,10
 1305              		.p2align 3
 1306              	.L90:
 1307              		.cfi_def_cfa_offset 32
 1308              		.cfi_offset 3, -32
 1309              		.cfi_offset 6, -24
 1310              		.cfi_offset 12, -16
 1311              	.LBB453:
 1312              	.LBB452:
 1313              		.loc 1 1197 0
 1314 00a0 BEED0100 		movl	$493, %esi
 1314      00
 1315 00a5 4889DF   		movq	%rbx, %rdi
 1316 00a8 E8000000 		call	fl_chmod
 1316      00
 1317              	.LVL130:
 1318 00ad EBDE     		jmp	.L77
 1319              	.LBE452:
 1320              	.LBE453:
 1321              		.cfi_endproc
 1322              	.LFE277:
 1324              		.section	.text.unlikely._ZN14Fl_Preferences8RootNode7getPathEPci
 1325              	.LCOLDE17:
 1326              		.section	.text._ZN14Fl_Preferences8RootNode7getPathEPci
 1327              	.LHOTE17:
 1328              		.section	.text.unlikely._ZN14Fl_Preferences15getUserdataPathEPci,"ax",@progbits
 1329              		.align 2
 1330              	.LCOLDB18:
 1331              		.section	.text._ZN14Fl_Preferences15getUserdataPathEPci,"ax",@progbits
 1332              	.LHOTB18:
 1333              		.align 2
 1334              		.p2align 4,,15
 1335              		.globl	_ZN14Fl_Preferences15getUserdataPathEPci
 1337              	_ZN14Fl_Preferences15getUserdataPathEPci:
 1338              	.LFB252:
 1339              		.loc 1 885 0
 1340              		.cfi_startproc
 1341              	.LVL131:
 1342              		.loc 1 886 0
 1343 0000 488B7F10 		movq	16(%rdi), %rdi
 1344              	.LVL132:
 1345 0004 4885FF   		testq	%rdi, %rdi
 1346 0007 7407     		je	.L92
 1347              		.loc 1 887 0
 1348 0009 E9000000 		jmp	_ZN14Fl_Preferences8RootNode7getPathEPci
 1348      00
 1349              	.LVL133:
 1350 000e 6690     		.p2align 4,,10
 1351              		.p2align 3
 1352              	.L92:
 1353              		.loc 1 889 0
 1354 0010 31C0     		xorl	%eax, %eax
 1355 0012 C3       		ret
 1356              		.cfi_endproc
 1357              	.LFE252:
 1359              		.section	.text.unlikely._ZN14Fl_Preferences15getUserdataPathEPci
 1360              	.LCOLDE18:
 1361              		.section	.text._ZN14Fl_Preferences15getUserdataPathEPci
 1362              	.LHOTE18:
 1363              		.section	.text.unlikely._ZN14Fl_Preferences4NodeC2EPKc,"ax",@progbits
 1364              		.align 2
 1365              	.LCOLDB19:
 1366              		.section	.text._ZN14Fl_Preferences4NodeC2EPKc,"ax",@progbits
 1367              	.LHOTB19:
 1368              		.align 2
 1369              		.p2align 4,,15
 1370              		.globl	_ZN14Fl_Preferences4NodeC2EPKc
 1372              	_ZN14Fl_Preferences4NodeC2EPKc:
 1373              	.LFB279:
 1374              		.loc 1 1206 0
 1375              		.cfi_startproc
 1376              	.LVL134:
 1377              	.LBB454:
 1378              		.loc 1 1207 0
 1379 0000 4885F6   		testq	%rsi, %rsi
 1380              	.LBE454:
 1381              		.loc 1 1206 0
 1382 0003 53       		pushq	%rbx
 1383              		.cfi_def_cfa_offset 16
 1384              		.cfi_offset 3, -16
 1385              		.loc 1 1206 0
 1386 0004 4889FB   		movq	%rdi, %rbx
 1387              	.LBB455:
 1388              		.loc 1 1207 0
 1389 0007 7457     		je	.L94
 1390              		.loc 1 1207 0 is_stmt 0 discriminator 1
 1391 0009 4889F7   		movq	%rsi, %rdi
 1392              	.LVL135:
 1393 000c E8000000 		call	strdup
 1393      00
 1394              	.LVL136:
 1395 0011 48894318 		movq	%rax, 24(%rbx)
 1396              	.L95:
 1397              		.loc 1 1208 0 is_stmt 1
 1398 0015 48C70300 		movq	$0, (%rbx)
 1398      000000
 1399 001c 48C74308 		movq	$0, 8(%rbx)
 1399      00000000 
 1400 0024 48C74310 		movq	$0, 16(%rbx)
 1400      00000000 
 1401              		.loc 1 1209 0
 1402 002c 48C74320 		movq	$0, 32(%rbx)
 1402      00000000 
 1403              		.loc 1 1210 0
 1404 0034 C7432C00 		movl	$0, 44(%rbx)
 1404      000000
 1405 003b C7432800 		movl	$0, 40(%rbx)
 1405      000000
 1406              		.loc 1 1213 0
 1407 0042 806330F8 		andb	$-8, 48(%rbx)
 1408              		.loc 1 1214 0
 1409 0046 48C74338 		movq	$0, 56(%rbx)
 1409      00000000 
 1410              		.loc 1 1215 0
 1411 004e C7434400 		movl	$0, 68(%rbx)
 1411      000000
 1412 0055 C7434000 		movl	$0, 64(%rbx)
 1412      000000
 1413              	.LBE455:
 1414              		.loc 1 1216 0
 1415 005c 5B       		popq	%rbx
 1416              		.cfi_remember_state
 1417              		.cfi_def_cfa_offset 8
 1418              	.LVL137:
 1419 005d C3       		ret
 1420              	.LVL138:
 1421 005e 6690     		.p2align 4,,10
 1422              		.p2align 3
 1423              	.L94:
 1424              		.cfi_restore_state
 1425              	.LBB456:
 1426              		.loc 1 1207 0 discriminator 2
 1427 0060 48C74718 		movq	$0, 24(%rdi)
 1427      00000000 
 1428 0068 EBAB     		jmp	.L95
 1429              	.LBE456:
 1430              		.cfi_endproc
 1431              	.LFE279:
 1433              		.section	.text.unlikely._ZN14Fl_Preferences4NodeC2EPKc
 1434              	.LCOLDE19:
 1435              		.section	.text._ZN14Fl_Preferences4NodeC2EPKc
 1436              	.LHOTE19:
 1437              		.globl	_ZN14Fl_Preferences4NodeC1EPKc
 1438              		.set	_ZN14Fl_Preferences4NodeC1EPKc,_ZN14Fl_Preferences4NodeC2EPKc
 1439              		.section	.text.unlikely._ZN14Fl_Preferences4Node16deleteAllEntriesEv,"ax",@progbits
 1440              		.align 2
 1441              	.LCOLDB20:
 1442              		.section	.text._ZN14Fl_Preferences4Node16deleteAllEntriesEv,"ax",@progbits
 1443              	.LHOTB20:
 1444              		.align 2
 1445              		.p2align 4,,15
 1446              		.globl	_ZN14Fl_Preferences4Node16deleteAllEntriesEv
 1448              	_ZN14Fl_Preferences4Node16deleteAllEntriesEv:
 1449              	.LFB282:
 1450              		.loc 1 1229 0
 1451              		.cfi_startproc
 1452              	.LVL139:
 1453 0000 4154     		pushq	%r12
 1454              		.cfi_def_cfa_offset 16
 1455              		.cfi_offset 12, -16
 1456 0002 55       		pushq	%rbp
 1457              		.cfi_def_cfa_offset 24
 1458              		.cfi_offset 6, -24
 1459 0003 4889FD   		movq	%rdi, %rbp
 1460 0006 53       		pushq	%rbx
 1461              		.cfi_def_cfa_offset 32
 1462              		.cfi_offset 3, -32
 1463              	.LBB457:
 1464              		.loc 1 1230 0
 1465 0007 488B5720 		movq	32(%rdi), %rdx
 1466 000b 4885D2   		testq	%rdx, %rdx
 1467 000e 0F847C00 		je	.L98
 1467      0000
 1468              	.LVL140:
 1469              	.LBB458:
 1470              	.LBB459:
 1471              		.loc 1 1231 0 discriminator 1
 1472 0014 8B4728   		movl	40(%rdi), %eax
 1473 0017 85C0     		testl	%eax, %eax
 1474 0019 7E57     		jle	.L99
 1475              		.loc 1 1231 0 is_stmt 0
 1476 001b 31DB     		xorl	%ebx, %ebx
 1477 001d 4531E4   		xorl	%r12d, %r12d
 1478              	.LVL141:
 1479              		.p2align 4,,10
 1480              		.p2align 3
 1481              	.L102:
 1482              		.loc 1 1232 0 is_stmt 1
 1483 0020 488D041A 		leaq	(%rdx,%rbx), %rax
 1484 0024 488B38   		movq	(%rax), %rdi
 1485 0027 4885FF   		testq	%rdi, %rdi
 1486 002a 7419     		je	.L100
 1487              		.loc 1 1233 0
 1488 002c E8000000 		call	free
 1488      00
 1489              	.LVL142:
 1490              		.loc 1 1234 0
 1491 0031 488B4520 		movq	32(%rbp), %rax
 1492 0035 48C70418 		movq	$0, (%rax,%rbx)
 1492      00000000 
 1493 003d 488B5520 		movq	32(%rbp), %rdx
 1494 0041 488D041A 		leaq	(%rdx,%rbx), %rax
 1495              	.L100:
 1496              		.loc 1 1236 0
 1497 0045 488B7808 		movq	8(%rax), %rdi
 1498 0049 4885FF   		testq	%rdi, %rdi
 1499 004c 7416     		je	.L101
 1500              		.loc 1 1237 0
 1501 004e E8000000 		call	free
 1501      00
 1502              	.LVL143:
 1503              		.loc 1 1238 0
 1504 0053 488B4520 		movq	32(%rbp), %rax
 1505 0057 48C74418 		movq	$0, 8(%rax,%rbx)
 1505      08000000 
 1505      00
 1506 0060 488B5520 		movq	32(%rbp), %rdx
 1507              	.L101:
 1508              		.loc 1 1231 0 discriminator 2
 1509 0064 4183C401 		addl	$1, %r12d
 1510              	.LVL144:
 1511 0068 4883C310 		addq	$16, %rbx
 1512 006c 44396528 		cmpl	%r12d, 40(%rbp)
 1513 0070 7FAE     		jg	.L102
 1514              	.LVL145:
 1515              	.L99:
 1516              	.LBE459:
 1517              		.loc 1 1241 0
 1518 0072 4889D7   		movq	%rdx, %rdi
 1519 0075 E8000000 		call	free
 1519      00
 1520              	.LVL146:
 1521              		.loc 1 1242 0
 1522 007a 48C74520 		movq	$0, 32(%rbp)
 1522      00000000 
 1523              		.loc 1 1243 0
 1524 0082 C7452800 		movl	$0, 40(%rbp)
 1524      000000
 1525              		.loc 1 1244 0
 1526 0089 C7452C00 		movl	$0, 44(%rbp)
 1526      000000
 1527              	.L98:
 1528              	.LBE458:
 1529              	.LBE457:
 1530              		.loc 1 1246 0
 1531 0090 804D3001 		orb	$1, 48(%rbp)
 1532              		.loc 1 1247 0
 1533 0094 5B       		popq	%rbx
 1534              		.cfi_def_cfa_offset 24
 1535 0095 5D       		popq	%rbp
 1536              		.cfi_def_cfa_offset 16
 1537              	.LVL147:
 1538 0096 415C     		popq	%r12
 1539              		.cfi_def_cfa_offset 8
 1540 0098 C3       		ret
 1541              		.cfi_endproc
 1542              	.LFE282:
 1544              		.section	.text.unlikely._ZN14Fl_Preferences4Node16deleteAllEntriesEv
 1545              	.LCOLDE20:
 1546              		.section	.text._ZN14Fl_Preferences4Node16deleteAllEntriesEv
 1547              	.LHOTE20:
 1548              		.section	.text.unlikely._ZN14Fl_Preferences16deleteAllEntriesEv,"ax",@progbits
 1549              		.align 2
 1550              	.LCOLDB21:
 1551              		.section	.text._ZN14Fl_Preferences16deleteAllEntriesEv,"ax",@progbits
 1552              	.LHOTB21:
 1553              		.align 2
 1554              		.p2align 4,,15
 1555              		.globl	_ZN14Fl_Preferences16deleteAllEntriesEv
 1557              	_ZN14Fl_Preferences16deleteAllEntriesEv:
 1558              	.LFB233:
 1559              		.loc 1 485 0
 1560              		.cfi_startproc
 1561              	.LVL148:
 1562 0000 4883EC08 		subq	$8, %rsp
 1563              		.cfi_def_cfa_offset 16
 1564              		.loc 1 486 0
 1565 0004 488B7F08 		movq	8(%rdi), %rdi
 1566              	.LVL149:
 1567 0008 E8000000 		call	_ZN14Fl_Preferences4Node16deleteAllEntriesEv
 1567      00
 1568              	.LVL150:
 1569              		.loc 1 488 0
 1570 000d B8010000 		movl	$1, %eax
 1570      00
 1571 0012 4883C408 		addq	$8, %rsp
 1572              		.cfi_def_cfa_offset 8
 1573 0016 C3       		ret
 1574              		.cfi_endproc
 1575              	.LFE233:
 1577              		.section	.text.unlikely._ZN14Fl_Preferences16deleteAllEntriesEv
 1578              	.LCOLDE21:
 1579              		.section	.text._ZN14Fl_Preferences16deleteAllEntriesEv
 1580              	.LHOTE21:
 1581              		.section	.text.unlikely._ZN14Fl_Preferences4NodeD2Ev,"ax",@progbits
 1582              		.align 2
 1583              	.LCOLDB22:
 1584              		.section	.text._ZN14Fl_Preferences4NodeD2Ev,"ax",@progbits
 1585              	.LHOTB22:
 1586              		.align 2
 1587              		.p2align 4,,15
 1588              		.globl	_ZN14Fl_Preferences4NodeD2Ev
 1590              	_ZN14Fl_Preferences4NodeD2Ev:
 1591              	.LFB284:
 1592              		.loc 1 1250 0
 1593              		.cfi_startproc
 1594              	.LVL151:
 1595 0000 53       		pushq	%rbx
 1596              		.cfi_def_cfa_offset 16
 1597              		.cfi_offset 3, -16
 1598              		.loc 1 1250 0
 1599 0001 4889FB   		movq	%rdi, %rbx
 1600              	.LBB460:
 1601              		.loc 1 1251 0
 1602 0004 E8000000 		call	_ZN14Fl_Preferences4Node17deleteAllChildrenEv
 1602      00
 1603              	.LVL152:
 1604              		.loc 1 1252 0
 1605 0009 4889DF   		movq	%rbx, %rdi
 1606 000c E8000000 		call	_ZN14Fl_Preferences4Node16deleteAllEntriesEv
 1606      00
 1607              	.LVL153:
 1608              	.LBB461:
 1609              	.LBB462:
 1610              		.loc 1 1578 0
 1611 0011 488B7B38 		movq	56(%rbx), %rdi
 1612 0015 4885FF   		testq	%rdi, %rdi
 1613 0018 7405     		je	.L117
 1614 001a E8000000 		call	free
 1614      00
 1615              	.LVL154:
 1616              	.L117:
 1617              	.LBE462:
 1618              	.LBE461:
 1619              		.loc 1 1254 0
 1620 001f 488B7B18 		movq	24(%rbx), %rdi
 1621              	.LBB464:
 1622              	.LBB463:
 1623              		.loc 1 1581 0
 1624 0023 806330FB 		andb	$-5, 48(%rbx)
 1625              	.LVL155:
 1626              		.loc 1 1579 0
 1627 0027 C7434000 		movl	$0, 64(%rbx)
 1627      000000
 1628 002e C7434400 		movl	$0, 68(%rbx)
 1628      000000
 1629              		.loc 1 1580 0
 1630 0035 48C74338 		movq	$0, 56(%rbx)
 1630      00000000 
 1631              	.LBE463:
 1632              	.LBE464:
 1633              		.loc 1 1254 0
 1634 003d 4885FF   		testq	%rdi, %rdi
 1635 0040 740E     		je	.L116
 1636              	.LBE460:
 1637              		.loc 1 1260 0
 1638 0042 5B       		popq	%rbx
 1639              		.cfi_remember_state
 1640              		.cfi_def_cfa_offset 8
 1641              	.LVL156:
 1642              	.LBB465:
 1643              		.loc 1 1255 0
 1644 0043 E9000000 		jmp	free
 1644      00
 1645              	.LVL157:
 1646 0048 0F1F8400 		.p2align 4,,10
 1646      00000000 
 1647              		.p2align 3
 1648              	.L116:
 1649              		.cfi_restore_state
 1650              	.LBE465:
 1651              		.loc 1 1260 0
 1652 0050 5B       		popq	%rbx
 1653              		.cfi_def_cfa_offset 8
 1654              	.LVL158:
 1655 0051 C3       		ret
 1656              		.cfi_endproc
 1657              	.LFE284:
 1659              		.section	.text.unlikely._ZN14Fl_Preferences4NodeD2Ev
 1660              	.LCOLDE22:
 1661              		.section	.text._ZN14Fl_Preferences4NodeD2Ev
 1662              	.LHOTE22:
 1663              		.globl	_ZN14Fl_Preferences4NodeD1Ev
 1664              		.set	_ZN14Fl_Preferences4NodeD1Ev,_ZN14Fl_Preferences4NodeD2Ev
 1665              		.section	.text.unlikely._ZN14Fl_Preferences4Node17deleteAllChildrenEv,"ax",@progbits
 1666              		.align 2
 1667              	.LCOLDB23:
 1668              		.section	.text._ZN14Fl_Preferences4Node17deleteAllChildrenEv,"ax",@progbits
 1669              	.LHOTB23:
 1670              		.align 2
 1671              		.p2align 4,,15
 1672              		.globl	_ZN14Fl_Preferences4Node17deleteAllChildrenEv
 1674              	_ZN14Fl_Preferences4Node17deleteAllChildrenEv:
 1675              	.LFB281:
 1676              		.loc 1 1218 0
 1677              		.cfi_startproc
 1678              	.LVL159:
 1679 0000 4154     		pushq	%r12
 1680              		.cfi_def_cfa_offset 16
 1681              		.cfi_offset 12, -16
 1682 0002 55       		pushq	%rbp
 1683              		.cfi_def_cfa_offset 24
 1684              		.cfi_offset 6, -24
 1685 0003 4989FC   		movq	%rdi, %r12
 1686 0006 53       		pushq	%rbx
 1687              		.cfi_def_cfa_offset 32
 1688              		.cfi_offset 3, -32
 1689              	.LBB466:
 1690              		.loc 1 1220 0
 1691 0007 488B1F   		movq	(%rdi), %rbx
 1692              	.LVL160:
 1693 000a 4885DB   		testq	%rbx, %rbx
 1694 000d 741D     		je	.L125
 1695              	.LVL161:
 1696 000f 90       		.p2align 4,,10
 1697              		.p2align 3
 1698              	.L129:
 1699              		.loc 1 1221 0
 1700 0010 488B6B08 		movq	8(%rbx), %rbp
 1701              	.LVL162:
 1702              		.loc 1 1222 0
 1703 0014 4889DF   		movq	%rbx, %rdi
 1704 0017 E8000000 		call	_ZN14Fl_Preferences4NodeD1Ev
 1704      00
 1705              	.LVL163:
 1706 001c 4889DF   		movq	%rbx, %rdi
 1707 001f E8000000 		call	_ZdlPv
 1707      00
 1708              	.LVL164:
 1709              		.loc 1 1220 0
 1710 0024 4885ED   		testq	%rbp, %rbp
 1711 0027 4889EB   		movq	%rbp, %rbx
 1712 002a 75E4     		jne	.L129
 1713              	.LVL165:
 1714              	.L125:
 1715              	.LBE466:
 1716              		.loc 1 1225 0
 1717 002c 410FB644 		movzbl	48(%r12), %eax
 1717      2430
 1718              		.loc 1 1224 0
 1719 0032 49C70424 		movq	$0, (%r12)
 1719      00000000 
 1720              		.loc 1 1227 0
 1721 003a 5B       		popq	%rbx
 1722              		.cfi_def_cfa_offset 24
 1723              	.LVL166:
 1724 003b 5D       		popq	%rbp
 1725              		.cfi_def_cfa_offset 16
 1726              		.loc 1 1225 0
 1727 003c 83C801   		orl	$1, %eax
 1728              	.LVL167:
 1729              	.LBB467:
 1730              	.LBB468:
 1731              		.loc 1 1574 0
 1732 003f 83E0FB   		andl	$-5, %eax
 1733 0042 41884424 		movb	%al, 48(%r12)
 1733      30
 1734              	.LVL168:
 1735              	.LBE468:
 1736              	.LBE467:
 1737              		.loc 1 1227 0
 1738 0047 415C     		popq	%r12
 1739              		.cfi_def_cfa_offset 8
 1740              	.LVL169:
 1741 0049 C3       		ret
 1742              		.cfi_endproc
 1743              	.LFE281:
 1745              		.section	.text.unlikely._ZN14Fl_Preferences4Node17deleteAllChildrenEv
 1746              	.LCOLDE23:
 1747              		.section	.text._ZN14Fl_Preferences4Node17deleteAllChildrenEv
 1748              	.LHOTE23:
 1749              		.section	.text.unlikely._ZN14Fl_Preferences15deleteAllGroupsEv,"ax",@progbits
 1750              		.align 2
 1751              	.LCOLDB24:
 1752              		.section	.text._ZN14Fl_Preferences15deleteAllGroupsEv,"ax",@progbits
 1753              	.LHOTB24:
 1754              		.align 2
 1755              		.p2align 4,,15
 1756              		.globl	_ZN14Fl_Preferences15deleteAllGroupsEv
 1758              	_ZN14Fl_Preferences15deleteAllGroupsEv:
 1759              	.LFB228:
 1760              		.loc 1 434 0
 1761              		.cfi_startproc
 1762              	.LVL170:
 1763 0000 4883EC08 		subq	$8, %rsp
 1764              		.cfi_def_cfa_offset 16
 1765              		.loc 1 435 0
 1766 0004 488B7F08 		movq	8(%rdi), %rdi
 1767              	.LVL171:
 1768 0008 E8000000 		call	_ZN14Fl_Preferences4Node17deleteAllChildrenEv
 1768      00
 1769              	.LVL172:
 1770              		.loc 1 437 0
 1771 000d B8010000 		movl	$1, %eax
 1771      00
 1772 0012 4883C408 		addq	$8, %rsp
 1773              		.cfi_def_cfa_offset 8
 1774 0016 C3       		ret
 1775              		.cfi_endproc
 1776              	.LFE228:
 1778              		.section	.text.unlikely._ZN14Fl_Preferences15deleteAllGroupsEv
 1779              	.LCOLDE24:
 1780              		.section	.text._ZN14Fl_Preferences15deleteAllGroupsEv
 1781              	.LHOTE24:
 1782              		.section	.text.unlikely._ZN14Fl_Preferences5clearEv,"ax",@progbits
 1783              		.align 2
 1784              	.LCOLDB25:
 1785              		.section	.text._ZN14Fl_Preferences5clearEv,"ax",@progbits
 1786              	.LHOTB25:
 1787              		.align 2
 1788              		.p2align 4,,15
 1789              		.globl	_ZN14Fl_Preferences5clearEv
 1791              	_ZN14Fl_Preferences5clearEv:
 1792              	.LFB234:
 1793              		.loc 1 493 0
 1794              		.cfi_startproc
 1795              	.LVL173:
 1796 0000 53       		pushq	%rbx
 1797              		.cfi_def_cfa_offset 16
 1798              		.cfi_offset 3, -16
 1799              		.loc 1 493 0
 1800 0001 4889FB   		movq	%rdi, %rbx
 1801              	.LBB469:
 1802              	.LBB470:
 1803              		.loc 1 435 0
 1804 0004 488B7F08 		movq	8(%rdi), %rdi
 1805              	.LVL174:
 1806 0008 E8000000 		call	_ZN14Fl_Preferences4Node17deleteAllChildrenEv
 1806      00
 1807              	.LVL175:
 1808              	.LBE470:
 1809              	.LBE469:
 1810              	.LBB471:
 1811              	.LBB472:
 1812              		.loc 1 486 0
 1813 000d 488B7B08 		movq	8(%rbx), %rdi
 1814 0011 E8000000 		call	_ZN14Fl_Preferences4Node16deleteAllEntriesEv
 1814      00
 1815              	.LVL176:
 1816              	.LBE472:
 1817              	.LBE471:
 1818              		.loc 1 497 0
 1819 0016 B8010000 		movl	$1, %eax
 1819      00
 1820 001b 5B       		popq	%rbx
 1821              		.cfi_def_cfa_offset 8
 1822              	.LVL177:
 1823 001c C3       		ret
 1824              		.cfi_endproc
 1825              	.LFE234:
 1827              		.section	.text.unlikely._ZN14Fl_Preferences5clearEv
 1828              	.LCOLDE25:
 1829              		.section	.text._ZN14Fl_Preferences5clearEv
 1830              	.LHOTE25:
 1831              		.section	.text.unlikely._ZN14Fl_Preferences4Node5dirtyEv,"ax",@progbits
 1832              		.align 2
 1833              	.LCOLDB26:
 1834              		.section	.text._ZN14Fl_Preferences4Node5dirtyEv,"ax",@progbits
 1835              	.LHOTB26:
 1836              		.align 2
 1837              		.p2align 4,,15
 1838              		.globl	_ZN14Fl_Preferences4Node5dirtyEv
 1840              	_ZN14Fl_Preferences4Node5dirtyEv:
 1841              	.LFB286:
 1842              		.loc 1 1263 0
 1843              		.cfi_startproc
 1844              	.LVL178:
 1845 0000 55       		pushq	%rbp
 1846              		.cfi_def_cfa_offset 16
 1847              		.cfi_offset 6, -16
 1848 0001 53       		pushq	%rbx
 1849              		.cfi_def_cfa_offset 24
 1850              		.cfi_offset 3, -24
 1851              		.loc 1 1264 0
 1852 0002 BD010000 		movl	$1, %ebp
 1852      00
 1853              		.loc 1 1263 0
 1854 0007 4883EC08 		subq	$8, %rsp
 1855              		.cfi_def_cfa_offset 32
 1856              		.loc 1 1264 0
 1857 000b F6473001 		testb	$1, 48(%rdi)
 1858 000f 7528     		jne	.L145
 1859 0011 4889FB   		movq	%rdi, %rbx
 1860              		.loc 1 1265 0
 1861 0014 488B7F08 		movq	8(%rdi), %rdi
 1862              	.LVL179:
 1863 0018 4885FF   		testq	%rdi, %rdi
 1864 001b 7409     		je	.L139
 1865              		.loc 1 1265 0 is_stmt 0 discriminator 1
 1866 001d E8000000 		call	_ZN14Fl_Preferences4Node5dirtyEv
 1866      00
 1867              	.LVL180:
 1868 0022 84C0     		testb	%al, %al
 1869 0024 7513     		jne	.L145
 1870              	.L139:
 1871              	.LVL181:
 1872              	.LBB475:
 1873              	.LBB476:
 1874              		.loc 1 1266 0 is_stmt 1
 1875 0026 488B3B   		movq	(%rbx), %rdi
 1876 0029 4885FF   		testq	%rdi, %rdi
 1877 002c 741A     		je	.L148
 1878 002e E8000000 		call	_ZN14Fl_Preferences4Node5dirtyEv
 1878      00
 1879              	.LVL182:
 1880              	.LBE476:
 1881              	.LBE475:
 1882              		.loc 1 1264 0
 1883 0033 84C0     		testb	%al, %al
 1884 0035 400F95C5 		setne	%bpl
 1885              	.LVL183:
 1886              	.L145:
 1887              		.loc 1 1268 0
 1888 0039 4883C408 		addq	$8, %rsp
 1889              		.cfi_remember_state
 1890              		.cfi_def_cfa_offset 24
 1891 003d 89E8     		movl	%ebp, %eax
 1892 003f 5B       		popq	%rbx
 1893              		.cfi_def_cfa_offset 16
 1894 0040 5D       		popq	%rbp
 1895              		.cfi_def_cfa_offset 8
 1896 0041 C3       		ret
 1897              	.LVL184:
 1898              		.p2align 4,,10
 1899 0042 660F1F44 		.p2align 3
 1899      0000
 1900              	.L148:
 1901              		.cfi_restore_state
 1902              	.LBB478:
 1903              	.LBB477:
 1904              		.loc 1 1267 0
 1905 0048 31ED     		xorl	%ebp, %ebp
 1906              	.LBE477:
 1907              	.LBE478:
 1908              		.loc 1 1268 0
 1909 004a 4883C408 		addq	$8, %rsp
 1910              		.cfi_def_cfa_offset 24
 1911 004e 89E8     		movl	%ebp, %eax
 1912 0050 5B       		popq	%rbx
 1913              		.cfi_def_cfa_offset 16
 1914              	.LVL185:
 1915 0051 5D       		popq	%rbp
 1916              		.cfi_def_cfa_offset 8
 1917 0052 C3       		ret
 1918              		.cfi_endproc
 1919              	.LFE286:
 1921              		.section	.text.unlikely._ZN14Fl_Preferences4Node5dirtyEv
 1922              	.LCOLDE26:
 1923              		.section	.text._ZN14Fl_Preferences4Node5dirtyEv
 1924              	.LHOTE26:
 1925              		.section	.rodata.str1.1
 1926              	.LC27:
 1927 000e 0A5B2573 		.string	"\n[%s]\n\n"
 1927      5D0A0A00 
 1928              	.LC28:
 1929 0016 25733A00 		.string	"%s:"
 1930              	.LC29:
 1931 001a 0A00     		.string	"\n"
 1932              	.LC30:
 1933 001c 25730A00 		.string	"%s\n"
 1934              		.section	.text.unlikely._ZN14Fl_Preferences4Node5writeEP8_IO_FILE,"ax",@progbits
 1935              		.align 2
 1936              	.LCOLDB31:
 1937              		.section	.text._ZN14Fl_Preferences4Node5writeEP8_IO_FILE,"ax",@progbits
 1938              	.LHOTB31:
 1939              		.align 2
 1940              		.p2align 4,,15
 1941              		.globl	_ZN14Fl_Preferences4Node5writeEP8_IO_FILE
 1943              	_ZN14Fl_Preferences4Node5writeEP8_IO_FILE:
 1944              	.LFB287:
 1945              		.loc 1 1273 0
 1946              		.cfi_startproc
 1947              	.LVL186:
 1948 0000 4157     		pushq	%r15
 1949              		.cfi_def_cfa_offset 16
 1950              		.cfi_offset 15, -16
 1951 0002 4156     		pushq	%r14
 1952              		.cfi_def_cfa_offset 24
 1953              		.cfi_offset 14, -24
 1954 0004 4155     		pushq	%r13
 1955              		.cfi_def_cfa_offset 32
 1956              		.cfi_offset 13, -32
 1957 0006 4154     		pushq	%r12
 1958              		.cfi_def_cfa_offset 40
 1959              		.cfi_offset 12, -40
 1960 0008 4989FC   		movq	%rdi, %r12
 1961 000b 55       		pushq	%rbp
 1962              		.cfi_def_cfa_offset 48
 1963              		.cfi_offset 6, -48
 1964 000c 53       		pushq	%rbx
 1965              		.cfi_def_cfa_offset 56
 1966              		.cfi_offset 3, -56
 1967 000d 4889F5   		movq	%rsi, %rbp
 1968 0010 4883EC18 		subq	$24, %rsp
 1969              		.cfi_def_cfa_offset 80
 1970              		.loc 1 1274 0
 1971 0014 488B7F08 		movq	8(%rdi), %rdi
 1972              	.LVL187:
 1973 0018 4885FF   		testq	%rdi, %rdi
 1974 001b 7405     		je	.L150
 1975              		.loc 1 1274 0 is_stmt 0 discriminator 1
 1976 001d E8000000 		call	_ZN14Fl_Preferences4Node5writeEP8_IO_FILE
 1976      00
 1977              	.LVL188:
 1978              	.L150:
 1979              	.LBB479:
 1980              	.LBB480:
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
 1981              		.loc 4 98 0 is_stmt 1
 1982 0022 498B4C24 		movq	24(%r12), %rcx
 1982      18
 1983 0027 31C0     		xorl	%eax, %eax
 1984 0029 BA000000 		movl	$.LC27, %edx
 1984      00
 1985 002e BE010000 		movl	$1, %esi
 1985      00
 1986 0033 4889EF   		movq	%rbp, %rdi
 1987              	.LBE480:
 1988              	.LBE479:
 1989              	.LBB482:
 1990              		.loc 1 1276 0
 1991 0036 4531F6   		xorl	%r14d, %r14d
 1992              	.LBE482:
 1993              	.LBB498:
 1994              	.LBB481:
 1995              		.loc 4 98 0
 1996 0039 E8000000 		call	__fprintf_chk
 1996      00
 1997              	.LVL189:
 1998              	.LBE481:
 1999              	.LBE498:
 2000              	.LBB499:
 2001              		.loc 1 1276 0
 2002 003e 418B4424 		movl	40(%r12), %eax
 2002      28
 2003 0043 C744240C 		movl	$0, 12(%rsp)
 2003      00000000 
 2004 004b 85C0     		testl	%eax, %eax
 2005 004d 0F8E0F01 		jle	.L163
 2005      0000
 2006              	.LVL190:
 2007              	.L171:
 2008              	.LBB483:
 2009              		.loc 1 1277 0
 2010 0053 4C89F0   		movq	%r14, %rax
 2011 0056 49034424 		addq	32(%r12), %rax
 2011      20
 2012 005b 488B5808 		movq	8(%rax), %rbx
 2013              	.LVL191:
 2014              	.LBB484:
 2015              	.LBB485:
 2016              	.LBB486:
 2017              	.LBB487:
 2018              		.loc 4 98 0
 2019 005f 488B08   		movq	(%rax), %rcx
 2020              	.LBE487:
 2021              	.LBE486:
 2022              	.LBE485:
 2023              		.loc 1 1278 0
 2024 0062 4885DB   		testq	%rbx, %rbx
 2025 0065 0F84CB00 		je	.L154
 2025      0000
 2026              	.LVL192:
 2027              	.LBB492:
 2028              	.LBB489:
 2029              	.LBB488:
 2030              		.loc 4 98 0
 2031 006b BE010000 		movl	$1, %esi
 2031      00
 2032 0070 4889EF   		movq	%rbp, %rdi
 2033 0073 BA000000 		movl	$.LC28, %edx
 2033      00
 2034 0078 31C0     		xorl	%eax, %eax
 2035 007a E8000000 		call	__fprintf_chk
 2035      00
 2036              	.LVL193:
 2037 007f 4889DF   		movq	%rbx, %rdi
 2038              	.LBE488:
 2039              	.LBE489:
 2040              		.loc 1 1281 0
 2041 0082 31F6     		xorl	%esi, %esi
 2042 0084 EB1C     		jmp	.L156
 2043              	.LVL194:
 2044 0086 662E0F1F 		.p2align 4,,10
 2044      84000000 
 2044      0000
 2045              		.p2align 3
 2046              	.L176:
 2047              		.loc 1 1281 0 is_stmt 0 discriminator 2
 2048 0090 4883C601 		addq	$1, %rsi
 2049              	.LVL195:
 2050 0094 4883C701 		addq	$1, %rdi
 2051 0098 4883FE3C 		cmpq	$60, %rsi
 2052 009c 0F84E800 		je	.L175
 2052      0000
 2053              	.LVL196:
 2054              	.L156:
 2055              		.loc 1 1282 0 is_stmt 1
 2056 00a2 803F00   		cmpb	$0, (%rdi)
 2057 00a5 75E9     		jne	.L176
 2058 00a7 4989FD   		movq	%rdi, %r13
 2059              	.L155:
 2060              		.loc 1 1283 0
 2061 00aa 4889E9   		movq	%rbp, %rcx
 2062 00ad BA010000 		movl	$1, %edx
 2062      00
 2063 00b2 4889DF   		movq	%rbx, %rdi
 2064 00b5 E8000000 		call	fwrite
 2064      00
 2065              	.LVL197:
 2066              	.LBB490:
 2067              	.LBB491:
 2068              		.loc 4 98 0
 2069 00ba 31C0     		xorl	%eax, %eax
 2070 00bc BA000000 		movl	$.LC29, %edx
 2070      00
 2071 00c1 BE010000 		movl	$1, %esi
 2071      00
 2072 00c6 4889EF   		movq	%rbp, %rdi
 2073 00c9 E8000000 		call	__fprintf_chk
 2073      00
 2074              	.LVL198:
 2075              	.LBE491:
 2076              	.LBE490:
 2077              		.loc 1 1286 0
 2078 00ce 41807D00 		cmpb	$0, 0(%r13)
 2078      00
 2079 00d3 7475     		je	.L158
 2080              		.p2align 4,,10
 2081 00d5 0F1F00   		.p2align 3
 2082              	.L172:
 2083              	.LVL199:
 2084 00d8 4C89E8   		movq	%r13, %rax
 2085 00db 4531FF   		xorl	%r15d, %r15d
 2086 00de EB0E     		jmp	.L160
 2087              		.p2align 4,,10
 2088              		.p2align 3
 2089              	.L178:
 2090              	.LVL200:
 2091              		.loc 1 1287 0 discriminator 2
 2092 00e0 4983C701 		addq	$1, %r15
 2093              	.LVL201:
 2094 00e4 4883C001 		addq	$1, %rax
 2095 00e8 4983FF50 		cmpq	$80, %r15
 2096 00ec 7442     		je	.L177
 2097              	.LVL202:
 2098              	.L160:
 2099              		.loc 1 1288 0
 2100 00ee 803800   		cmpb	$0, (%rax)
 2101 00f1 75ED     		jne	.L178
 2102 00f3 4889C3   		movq	%rax, %rbx
 2103              	.L159:
 2104              		.loc 1 1289 0
 2105 00f6 4889EE   		movq	%rbp, %rsi
 2106 00f9 BF2B0000 		movl	$43, %edi
 2106      00
 2107 00fe E8000000 		call	fputc
 2107      00
 2108              	.LVL203:
 2109              		.loc 1 1290 0
 2110 0103 4889E9   		movq	%rbp, %rcx
 2111 0106 BA010000 		movl	$1, %edx
 2111      00
 2112 010b 4C89FE   		movq	%r15, %rsi
 2113 010e 4C89EF   		movq	%r13, %rdi
 2114 0111 E8000000 		call	fwrite
 2114      00
 2115              	.LVL204:
 2116              		.loc 1 1291 0
 2117 0116 4889EE   		movq	%rbp, %rsi
 2118 0119 BF0A0000 		movl	$10, %edi
 2118      00
 2119 011e E8000000 		call	fputc
 2119      00
 2120              	.LVL205:
 2121              		.loc 1 1286 0
 2122 0123 803B00   		cmpb	$0, (%rbx)
 2123 0126 7422     		je	.L158
 2124 0128 4989DD   		movq	%rbx, %r13
 2125 012b EBAB     		jmp	.L172
 2126              	.LVL206:
 2127 012d 0F1F00   		.p2align 4,,10
 2128              		.p2align 3
 2129              	.L177:
 2130              		.loc 1 1287 0
 2131 0130 498D5D50 		leaq	80(%r13), %rbx
 2132 0134 EBC0     		jmp	.L159
 2133              	.LVL207:
 2134              	.L154:
 2135              	.LBE492:
 2136              	.LBB493:
 2137              	.LBB494:
 2138              		.loc 4 98 0
 2139 0136 BA000000 		movl	$.LC30, %edx
 2139      00
 2140 013b BE010000 		movl	$1, %esi
 2140      00
 2141 0140 4889EF   		movq	%rbp, %rdi
 2142 0143 31C0     		xorl	%eax, %eax
 2143 0145 E8000000 		call	__fprintf_chk
 2143      00
 2144              	.LVL208:
 2145              	.L158:
 2146              	.LBE494:
 2147              	.LBE493:
 2148              	.LBE484:
 2149              	.LBE483:
 2150              		.loc 1 1276 0 discriminator 2
 2151 014a 8344240C 		addl	$1, 12(%rsp)
 2151      01
 2152              	.LVL209:
 2153 014f 4983C610 		addq	$16, %r14
 2154 0153 8B44240C 		movl	12(%rsp), %eax
 2155              	.LVL210:
 2156 0157 41394424 		cmpl	%eax, 40(%r12)
 2156      28
 2157 015c 0F8FF1FE 		jg	.L171
 2157      FFFF
 2158              	.LVL211:
 2159              	.L163:
 2160              	.LBE499:
 2161              		.loc 1 1298 0
 2162 0162 498B3C24 		movq	(%r12), %rdi
 2163 0166 4885FF   		testq	%rdi, %rdi
 2164 0169 7408     		je	.L153
 2165              		.loc 1 1298 0 is_stmt 0 discriminator 1
 2166 016b 4889EE   		movq	%rbp, %rsi
 2167 016e E8000000 		call	_ZN14Fl_Preferences4Node5writeEP8_IO_FILE
 2167      00
 2168              	.LVL212:
 2169              	.L153:
 2170              		.loc 1 1299 0 is_stmt 1
 2171 0173 41806424 		andb	$-2, 48(%r12)
 2171      30FE
 2172              		.loc 1 1301 0
 2173 0179 4883C418 		addq	$24, %rsp
 2174              		.cfi_remember_state
 2175              		.cfi_def_cfa_offset 56
 2176 017d 31C0     		xorl	%eax, %eax
 2177 017f 5B       		popq	%rbx
 2178              		.cfi_def_cfa_offset 48
 2179 0180 5D       		popq	%rbp
 2180              		.cfi_def_cfa_offset 40
 2181              	.LVL213:
 2182 0181 415C     		popq	%r12
 2183              		.cfi_def_cfa_offset 32
 2184              	.LVL214:
 2185 0183 415D     		popq	%r13
 2186              		.cfi_def_cfa_offset 24
 2187 0185 415E     		popq	%r14
 2188              		.cfi_def_cfa_offset 16
 2189 0187 415F     		popq	%r15
 2190              		.cfi_def_cfa_offset 8
 2191 0189 C3       		ret
 2192              	.LVL215:
 2193              	.L175:
 2194              		.cfi_restore_state
 2195              	.LBB500:
 2196              	.LBB497:
 2197              	.LBB496:
 2198              	.LBB495:
 2199              		.loc 1 1281 0
 2200 018a 4C8D6B3C 		leaq	60(%rbx), %r13
 2201 018e E917FFFF 		jmp	.L155
 2201      FF
 2202              	.LBE495:
 2203              	.LBE496:
 2204              	.LBE497:
 2205              	.LBE500:
 2206              		.cfi_endproc
 2207              	.LFE287:
 2209              		.section	.text.unlikely._ZN14Fl_Preferences4Node5writeEP8_IO_FILE
 2210              	.LCOLDE31:
 2211              		.section	.text._ZN14Fl_Preferences4Node5writeEP8_IO_FILE
 2212              	.LHOTE31:
 2213              		.section	.rodata.str1.1
 2214              	.LC32:
 2215 0020 776200   		.string	"wb"
 2216              		.section	.rodata.str1.8
 2217 0045 000000   		.align 8
 2218              	.LC33:
 2219 0048 3B20464C 		.string	"; FLTK preferences file format 1.0\n"
 2219      544B2070 
 2219      72656665 
 2219      72656E63 
 2219      65732066 
 2220              		.section	.rodata.str1.1
 2221              	.LC34:
 2222 0023 3B207665 		.string	"; vendor: %s\n"
 2222      6E646F72 
 2222      3A202573 
 2222      0A00
 2223              	.LC35:
 2224 0031 3B206170 		.string	"; application: %s\n"
 2224      706C6963 
 2224      6174696F 
 2224      6E3A2025 
 2224      730A00
 2225              		.section	.text.unlikely._ZN14Fl_Preferences8RootNode5writeEv,"ax",@progbits
 2226              		.align 2
 2227              	.LCOLDB36:
 2228              		.section	.text._ZN14Fl_Preferences8RootNode5writeEv,"ax",@progbits
 2229              	.LHOTB36:
 2230              		.align 2
 2231              		.p2align 4,,15
 2232              		.globl	_ZN14Fl_Preferences8RootNode5writeEv
 2234              	_ZN14Fl_Preferences8RootNode5writeEv:
 2235              	.LFB276:
 2236              		.loc 1 1153 0
 2237              		.cfi_startproc
 2238              	.LVL216:
 2239 0000 4154     		pushq	%r12
 2240              		.cfi_def_cfa_offset 16
 2241              		.cfi_offset 12, -16
 2242 0002 55       		pushq	%rbp
 2243              		.cfi_def_cfa_offset 24
 2244              		.cfi_offset 6, -24
 2245 0003 53       		pushq	%rbx
 2246              		.cfi_def_cfa_offset 32
 2247              		.cfi_offset 3, -32
 2248              		.loc 1 1154 0
 2249 0004 488B4708 		movq	8(%rdi), %rax
 2250 0008 4885C0   		testq	%rax, %rax
 2251 000b 0F84FA00 		je	.L182
 2251      0000
 2252 0011 4889FD   		movq	%rdi, %rbp
 2253              		.loc 1 1156 0
 2254 0014 4889C7   		movq	%rax, %rdi
 2255              	.LVL217:
 2256 0017 E8000000 		call	fl_make_path_for_file
 2256      00
 2257              	.LVL218:
 2258              		.loc 1 1157 0
 2259 001c 488B7D08 		movq	8(%rbp), %rdi
 2260 0020 BE000000 		movl	$.LC32, %esi
 2260      00
 2261 0025 E8000000 		call	fl_fopen
 2261      00
 2262              	.LVL219:
 2263              		.loc 1 1158 0
 2264 002a 4885C0   		testq	%rax, %rax
 2265              		.loc 1 1157 0
 2266 002d 4889C3   		movq	%rax, %rbx
 2267              	.LVL220:
 2268              		.loc 1 1158 0
 2269 0030 0F84D500 		je	.L182
 2269      0000
 2270              	.LVL221:
 2271              	.LBB501:
 2272              	.LBB502:
 2273              		.loc 4 98 0
 2274 0036 4889C7   		movq	%rax, %rdi
 2275 0039 BA000000 		movl	$.LC33, %edx
 2275      00
 2276 003e BE010000 		movl	$1, %esi
 2276      00
 2277 0043 31C0     		xorl	%eax, %eax
 2278              	.LVL222:
 2279 0045 E8000000 		call	__fprintf_chk
 2279      00
 2280              	.LVL223:
 2281              	.LBE502:
 2282              	.LBE501:
 2283              	.LBB503:
 2284              	.LBB504:
 2285 004a 488B4D10 		movq	16(%rbp), %rcx
 2286 004e 4889DF   		movq	%rbx, %rdi
 2287 0051 BA000000 		movl	$.LC34, %edx
 2287      00
 2288 0056 BE010000 		movl	$1, %esi
 2288      00
 2289 005b 31C0     		xorl	%eax, %eax
 2290 005d E8000000 		call	__fprintf_chk
 2290      00
 2291              	.LVL224:
 2292              	.LBE504:
 2293              	.LBE503:
 2294              	.LBB505:
 2295              	.LBB506:
 2296 0062 488B4D18 		movq	24(%rbp), %rcx
 2297 0066 BA000000 		movl	$.LC35, %edx
 2297      00
 2298 006b 4889DF   		movq	%rbx, %rdi
 2299 006e BE010000 		movl	$1, %esi
 2299      00
 2300 0073 31C0     		xorl	%eax, %eax
 2301 0075 E8000000 		call	__fprintf_chk
 2301      00
 2302              	.LVL225:
 2303              	.LBE506:
 2304              	.LBE505:
 2305              		.loc 1 1163 0
 2306 007a 488B4500 		movq	0(%rbp), %rax
 2307 007e 4889DE   		movq	%rbx, %rsi
 2308 0081 488B7808 		movq	8(%rax), %rdi
 2309 0085 E8000000 		call	_ZN14Fl_Preferences4Node5writeEP8_IO_FILE
 2309      00
 2310              	.LVL226:
 2311              		.loc 1 1164 0
 2312 008a 4889DF   		movq	%rbx, %rdi
 2313 008d E8000000 		call	fclose
 2313      00
 2314              	.LVL227:
 2315              	.LBB507:
 2316              		.loc 1 1167 0
 2317 0092 488B5D08 		movq	8(%rbp), %rbx
 2318              	.LVL228:
 2319 0096 BF000000 		movl	$.LC16, %edi
 2319      00
 2320 009b B90A0000 		movl	$10, %ecx
 2320      00
 2321 00a0 4889DE   		movq	%rbx, %rsi
 2322 00a3 F3A6     		repz cmpsb
 2323 00a5 410F97C4 		seta	%r12b
 2324 00a9 0F92C0   		setb	%al
 2325 00ac 4129C4   		subl	%eax, %r12d
 2326 00af 450FBEE4 		movsbl	%r12b, %r12d
 2327 00b3 4585E4   		testl	%r12d, %r12d
 2328 00b6 7548     		jne	.L184
 2329              	.LBB508:
 2330              		.loc 1 1169 0
 2331 00b8 4883C309 		addq	$9, %rbx
 2332              	.LVL229:
 2333 00bc 0F1F4000 		.p2align 4,,10
 2334              		.p2align 3
 2335              	.L183:
 2336              		.loc 1 1171 0
 2337 00c0 C60300   		movb	$0, (%rbx)
 2338              		.loc 1 1172 0
 2339 00c3 488B7D08 		movq	8(%rbp), %rdi
 2340 00c7 BEED0100 		movl	$493, %esi
 2340      00
 2341 00cc E8000000 		call	fl_chmod
 2341      00
 2342              	.LVL230:
 2343              		.loc 1 1174 0
 2344 00d1 488D7B01 		leaq	1(%rbx), %rdi
 2345              	.LVL231:
 2346              		.loc 1 1173 0
 2347 00d5 C6032F   		movb	$47, (%rbx)
 2348              	.LBB509:
 2349              	.LBB510:
 220:/usr/include/string.h **** }
 2350              		.loc 6 220 0
 2351 00d8 BE2F0000 		movl	$47, %esi
 2351      00
 2352 00dd E8000000 		call	strchr
 2352      00
 2353              	.LVL232:
 2354              	.LBE510:
 2355              	.LBE509:
 2356              		.loc 1 1170 0
 2357 00e2 4885C0   		testq	%rax, %rax
 2358              	.LBB512:
 2359              	.LBB511:
 220:/usr/include/string.h **** }
 2360              		.loc 6 220 0
 2361 00e5 4889C3   		movq	%rax, %rbx
 2362              	.LVL233:
 2363              	.LBE511:
 2364              	.LBE512:
 2365              		.loc 1 1170 0
 2366 00e8 75D6     		jne	.L183
 2367              		.loc 1 1176 0
 2368 00ea 488B7D08 		movq	8(%rbp), %rdi
 2369 00ee BEA40100 		movl	$420, %esi
 2369      00
 2370 00f3 E8000000 		call	fl_chmod
 2370      00
 2371              	.LVL234:
 2372              	.L181:
 2373              	.LBE508:
 2374              	.LBE507:
 2375              		.loc 1 1180 0
 2376 00f8 4489E0   		movl	%r12d, %eax
 2377 00fb 5B       		popq	%rbx
 2378              		.cfi_remember_state
 2379              		.cfi_def_cfa_offset 24
 2380 00fc 5D       		popq	%rbp
 2381              		.cfi_def_cfa_offset 16
 2382 00fd 415C     		popq	%r12
 2383              		.cfi_def_cfa_offset 8
 2384 00ff C3       		ret
 2385              	.LVL235:
 2386              		.p2align 4,,10
 2387              		.p2align 3
 2388              	.L184:
 2389              		.cfi_restore_state
 2390              		.loc 1 1179 0
 2391 0100 4531E4   		xorl	%r12d, %r12d
 2392              		.loc 1 1180 0
 2393 0103 4489E0   		movl	%r12d, %eax
 2394 0106 5B       		popq	%rbx
 2395              		.cfi_remember_state
 2396              		.cfi_def_cfa_offset 24
 2397 0107 5D       		popq	%rbp
 2398              		.cfi_def_cfa_offset 16
 2399              	.LVL236:
 2400 0108 415C     		popq	%r12
 2401              		.cfi_def_cfa_offset 8
 2402 010a C3       		ret
 2403              	.L182:
 2404              		.cfi_restore_state
 2405              		.loc 1 1155 0
 2406 010b 41BCFFFF 		movl	$-1, %r12d
 2406      FFFF
 2407 0111 EBE5     		jmp	.L181
 2408              		.cfi_endproc
 2409              	.LFE276:
 2411              		.section	.text.unlikely._ZN14Fl_Preferences8RootNode5writeEv
 2412              	.LCOLDE36:
 2413              		.section	.text._ZN14Fl_Preferences8RootNode5writeEv
 2414              	.LHOTE36:
 2415              		.section	.text.unlikely._ZN14Fl_Preferences5flushEv,"ax",@progbits
 2416              		.align 2
 2417              	.LCOLDB37:
 2418              		.section	.text._ZN14Fl_Preferences5flushEv,"ax",@progbits
 2419              	.LHOTB37:
 2420              		.align 2
 2421              		.p2align 4,,15
 2422              		.globl	_ZN14Fl_Preferences5flushEv
 2424              	_ZN14Fl_Preferences5flushEv:
 2425              	.LFB253:
 2426              		.loc 1 896 0
 2427              		.cfi_startproc
 2428              	.LVL237:
 2429              		.loc 1 897 0
 2430 0000 488B5710 		movq	16(%rdi), %rdx
 2431 0004 4885D2   		testq	%rdx, %rdx
 2432 0007 742B     		je	.L198
 2433              		.loc 1 896 0 discriminator 1
 2434 0009 4883EC08 		subq	$8, %rsp
 2435              		.cfi_def_cfa_offset 16
 2436              		.loc 1 897 0 discriminator 1
 2437 000d 488B7F08 		movq	8(%rdi), %rdi
 2438              	.LVL238:
 2439 0011 E8000000 		call	_ZN14Fl_Preferences4Node5dirtyEv
 2439      00
 2440              	.LVL239:
 2441 0016 84C0     		testb	%al, %al
 2442 0018 7416     		je	.L190
 2443              		.loc 1 898 0
 2444 001a 4889D7   		movq	%rdx, %rdi
 2445              		.loc 1 899 0
 2446 001d 4883C408 		addq	$8, %rsp
 2447              		.cfi_remember_state
 2448              		.cfi_def_cfa_offset 8
 2449              		.loc 1 898 0
 2450 0021 E9000000 		jmp	_ZN14Fl_Preferences8RootNode5writeEv
 2450      00
 2451              	.LVL240:
 2452 0026 662E0F1F 		.p2align 4,,10
 2452      84000000 
 2452      0000
 2453              		.p2align 3
 2454              	.L190:
 2455              		.cfi_restore_state
 2456              		.loc 1 899 0
 2457 0030 4883C408 		addq	$8, %rsp
 2458              		.cfi_def_cfa_offset 8
 2459              	.L198:
 2460 0034 F3C3     		rep ret
 2461              		.cfi_endproc
 2462              	.LFE253:
 2464              		.section	.text.unlikely._ZN14Fl_Preferences5flushEv
 2465              	.LCOLDE37:
 2466              		.section	.text._ZN14Fl_Preferences5flushEv
 2467              	.LHOTE37:
 2468              		.section	.text.unlikely._ZN14Fl_Preferences8RootNodeD2Ev,"ax",@progbits
 2469              		.align 2
 2470              	.LCOLDB38:
 2471              		.section	.text._ZN14Fl_Preferences8RootNodeD2Ev,"ax",@progbits
 2472              	.LHOTB38:
 2473              		.align 2
 2474              		.p2align 4,,15
 2475              		.globl	_ZN14Fl_Preferences8RootNodeD2Ev
 2477              	_ZN14Fl_Preferences8RootNodeD2Ev:
 2478              	.LFB273:
 2479              		.loc 1 1097 0
 2480              		.cfi_startproc
 2481              	.LVL241:
 2482 0000 55       		pushq	%rbp
 2483              		.cfi_def_cfa_offset 16
 2484              		.cfi_offset 6, -16
 2485 0001 53       		pushq	%rbx
 2486              		.cfi_def_cfa_offset 24
 2487              		.cfi_offset 3, -24
 2488 0002 4889FB   		movq	%rdi, %rbx
 2489 0005 4883EC08 		subq	$8, %rsp
 2490              		.cfi_def_cfa_offset 32
 2491              	.LBB513:
 2492              		.loc 1 1098 0
 2493 0009 488B07   		movq	(%rdi), %rax
 2494 000c 488B7808 		movq	8(%rax), %rdi
 2495              	.LVL242:
 2496 0010 E8000000 		call	_ZN14Fl_Preferences4Node5dirtyEv
 2496      00
 2497              	.LVL243:
 2498 0015 84C0     		testb	%al, %al
 2499 0017 7577     		jne	.L221
 2500              	.L200:
 2501              		.loc 1 1100 0
 2502 0019 488B7B08 		movq	8(%rbx), %rdi
 2503 001d 4885FF   		testq	%rdi, %rdi
 2504 0020 740D     		je	.L201
 2505              		.loc 1 1101 0
 2506 0022 E8000000 		call	free
 2506      00
 2507              	.LVL244:
 2508              		.loc 1 1102 0
 2509 0027 48C74308 		movq	$0, 8(%rbx)
 2509      00000000 
 2510              	.L201:
 2511              		.loc 1 1104 0
 2512 002f 488B7B10 		movq	16(%rbx), %rdi
 2513 0033 4885FF   		testq	%rdi, %rdi
 2514 0036 740D     		je	.L202
 2515              		.loc 1 1105 0
 2516 0038 E8000000 		call	free
 2516      00
 2517              	.LVL245:
 2518              		.loc 1 1106 0
 2519 003d 48C74310 		movq	$0, 16(%rbx)
 2519      00000000 
 2520              	.L202:
 2521              		.loc 1 1108 0
 2522 0045 488B7B18 		movq	24(%rbx), %rdi
 2523 0049 4885FF   		testq	%rdi, %rdi
 2524 004c 740D     		je	.L203
 2525              		.loc 1 1109 0
 2526 004e E8000000 		call	free
 2526      00
 2527              	.LVL246:
 2528              		.loc 1 1110 0
 2529 0053 48C74318 		movq	$0, 24(%rbx)
 2529      00000000 
 2530              	.L203:
 2531              		.loc 1 1112 0
 2532 005b 488B03   		movq	(%rbx), %rax
 2533 005e 488B6808 		movq	8(%rax), %rbp
 2534 0062 4885ED   		testq	%rbp, %rbp
 2535 0065 7413     		je	.L204
 2536              		.loc 1 1112 0 is_stmt 0 discriminator 1
 2537 0067 4889EF   		movq	%rbp, %rdi
 2538 006a E8000000 		call	_ZN14Fl_Preferences4NodeD1Ev
 2538      00
 2539              	.LVL247:
 2540 006f 4889EF   		movq	%rbp, %rdi
 2541 0072 E8000000 		call	_ZdlPv
 2541      00
 2542              	.LVL248:
 2543 0077 488B03   		movq	(%rbx), %rax
 2544              	.L204:
 2545              		.loc 1 1113 0 is_stmt 1
 2546 007a 48C74008 		movq	$0, 8(%rax)
 2546      00000000 
 2547              	.LBE513:
 2548              		.loc 1 1114 0
 2549 0082 4883C408 		addq	$8, %rsp
 2550              		.cfi_remember_state
 2551              		.cfi_def_cfa_offset 24
 2552 0086 5B       		popq	%rbx
 2553              		.cfi_def_cfa_offset 16
 2554              	.LVL249:
 2555 0087 5D       		popq	%rbp
 2556              		.cfi_def_cfa_offset 8
 2557 0088 C3       		ret
 2558              	.LVL250:
 2559 0089 0F1F8000 		.p2align 4,,10
 2559      000000
 2560              		.p2align 3
 2561              	.L221:
 2562              		.cfi_restore_state
 2563              	.LBB514:
 2564              		.loc 1 1099 0
 2565 0090 4889DF   		movq	%rbx, %rdi
 2566 0093 E8000000 		call	_ZN14Fl_Preferences8RootNode5writeEv
 2566      00
 2567              	.LVL251:
 2568 0098 E97CFFFF 		jmp	.L200
 2568      FF
 2569              	.LBE514:
 2570              		.cfi_endproc
 2571              	.LFE273:
 2573              		.section	.text.unlikely._ZN14Fl_Preferences8RootNodeD2Ev
 2574              	.LCOLDE38:
 2575              		.section	.text._ZN14Fl_Preferences8RootNodeD2Ev
 2576              	.LHOTE38:
 2577              		.globl	_ZN14Fl_Preferences8RootNodeD1Ev
 2578              		.set	_ZN14Fl_Preferences8RootNodeD1Ev,_ZN14Fl_Preferences8RootNodeD2Ev
 2579              		.section	.text.unlikely._ZN14Fl_PreferencesD2Ev,"ax",@progbits
 2580              		.align 2
 2581              	.LCOLDB39:
 2582              		.section	.text._ZN14Fl_PreferencesD2Ev,"ax",@progbits
 2583              	.LHOTB39:
 2584              		.align 2
 2585              		.p2align 4,,15
 2586              		.globl	_ZN14Fl_PreferencesD2Ev
 2588              	_ZN14Fl_PreferencesD2Ev:
 2589              	.LFB221:
 2590              		.loc 1 373 0
 2591              		.cfi_startproc
 2592              	.LVL252:
 2593 0000 53       		pushq	%rbx
 2594              		.cfi_def_cfa_offset 16
 2595              		.cfi_offset 3, -16
 2596              	.LBB515:
 2597              		.loc 1 374 0
 2598 0001 488B4708 		movq	8(%rdi), %rax
 2599              		.loc 1 373 0
 2600 0005 48C70700 		movq	$_ZTV14Fl_Preferences+16, (%rdi)
 2600      000000
 2601              		.loc 1 374 0
 2602 000c 4885C0   		testq	%rax, %rax
 2603 000f 740D     		je	.L222
 2604              	.LVL253:
 2605              	.LBB516:
 2606              	.LBB517:
 2607              		.loc 5 224 0 discriminator 1
 2608 0011 F6403002 		testb	$2, 48(%rax)
 2609 0015 7509     		jne	.L224
 2610              	.LVL254:
 2611              	.LBE517:
 2612              	.LBE516:
 2613              		.loc 1 374 0
 2614 0017 48837810 		cmpq	$0, 16(%rax)
 2614      00
 2615 001c 7402     		je	.L224
 2616              	.L222:
 2617              	.LBE515:
 2618              		.loc 1 380 0
 2619 001e 5B       		popq	%rbx
 2620              		.cfi_remember_state
 2621              		.cfi_def_cfa_offset 8
 2622 001f C3       		ret
 2623              		.p2align 4,,10
 2624              		.p2align 3
 2625              	.L224:
 2626              		.cfi_restore_state
 2627              	.LBB518:
 2628              		.loc 1 374 0 discriminator 7
 2629 0020 488B5F10 		movq	16(%rdi), %rbx
 2630 0024 4885DB   		testq	%rbx, %rbx
 2631 0027 74F5     		je	.L222
 2632              		.loc 1 374 0 is_stmt 0 discriminator 8
 2633 0029 4889DF   		movq	%rbx, %rdi
 2634              	.LVL255:
 2635 002c E8000000 		call	_ZN14Fl_Preferences8RootNodeD1Ev
 2635      00
 2636              	.LVL256:
 2637 0031 4889DF   		movq	%rbx, %rdi
 2638              	.LBE518:
 2639              		.loc 1 380 0 is_stmt 1 discriminator 8
 2640 0034 5B       		popq	%rbx
 2641              		.cfi_def_cfa_offset 8
 2642              	.LBB519:
 2643              		.loc 1 374 0 discriminator 8
 2644 0035 E9000000 		jmp	_ZdlPv
 2644      00
 2645              	.LVL257:
 2646              	.LBE519:
 2647              		.cfi_endproc
 2648              	.LFE221:
 2650              		.section	.text.unlikely._ZN14Fl_PreferencesD2Ev
 2651              	.LCOLDE39:
 2652              		.section	.text._ZN14Fl_PreferencesD2Ev
 2653              	.LHOTE39:
 2654              		.globl	_ZN14Fl_PreferencesD1Ev
 2655              		.set	_ZN14Fl_PreferencesD1Ev,_ZN14Fl_PreferencesD2Ev
 2656              		.section	.text.unlikely._ZN14Fl_PreferencesD0Ev,"ax",@progbits
 2657              		.align 2
 2658              	.LCOLDB40:
 2659              		.section	.text._ZN14Fl_PreferencesD0Ev,"ax",@progbits
 2660              	.LHOTB40:
 2661              		.align 2
 2662              		.p2align 4,,15
 2663              		.globl	_ZN14Fl_PreferencesD0Ev
 2665              	_ZN14Fl_PreferencesD0Ev:
 2666              	.LFB223:
 2667              		.loc 1 373 0
 2668              		.cfi_startproc
 2669              	.LVL258:
 2670 0000 53       		pushq	%rbx
 2671              		.cfi_def_cfa_offset 16
 2672              		.cfi_offset 3, -16
 2673              		.loc 1 373 0
 2674 0001 4889FB   		movq	%rdi, %rbx
 2675              		.loc 1 380 0
 2676 0004 E8000000 		call	_ZN14Fl_PreferencesD1Ev
 2676      00
 2677              	.LVL259:
 2678 0009 4889DF   		movq	%rbx, %rdi
 2679 000c 5B       		popq	%rbx
 2680              		.cfi_def_cfa_offset 8
 2681              	.LVL260:
 2682 000d E9000000 		jmp	_ZdlPv
 2682      00
 2683              	.LVL261:
 2684              		.cfi_endproc
 2685              	.LFE223:
 2687              		.section	.text.unlikely._ZN14Fl_PreferencesD0Ev
 2688              	.LCOLDE40:
 2689              		.section	.text._ZN14Fl_PreferencesD0Ev
 2690              	.LHOTE40:
 2691              		.section	.text.unlikely._ZN17Fl_Plugin_ManagerD2Ev,"ax",@progbits
 2692              		.align 2
 2693              	.LCOLDB41:
 2694              		.section	.text._ZN17Fl_Plugin_ManagerD2Ev,"ax",@progbits
 2695              	.LHOTB41:
 2696              		.align 2
 2697              		.p2align 4,,15
 2698              		.globl	_ZN17Fl_Plugin_ManagerD2Ev
 2700              	_ZN17Fl_Plugin_ManagerD2Ev:
 2701              	.LFB318:
 2702              		.loc 1 1627 0
 2703              		.cfi_startproc
 2704              	.LVL262:
 2705              	.LBB520:
 2706              		.loc 1 1627 0
 2707 0000 48C70700 		movq	$_ZTV17Fl_Plugin_Manager+16, (%rdi)
 2707      000000
 2708 0007 E9000000 		jmp	_ZN14Fl_PreferencesD2Ev
 2708      00
 2709              	.LVL263:
 2710              	.LBE520:
 2711              		.cfi_endproc
 2712              	.LFE318:
 2714              		.section	.text.unlikely._ZN17Fl_Plugin_ManagerD2Ev
 2715              	.LCOLDE41:
 2716              		.section	.text._ZN17Fl_Plugin_ManagerD2Ev
 2717              	.LHOTE41:
 2718              		.globl	_ZN17Fl_Plugin_ManagerD1Ev
 2719              		.set	_ZN17Fl_Plugin_ManagerD1Ev,_ZN17Fl_Plugin_ManagerD2Ev
 2720              		.section	.text.unlikely._ZN17Fl_Plugin_ManagerD0Ev,"ax",@progbits
 2721              		.align 2
 2722              	.LCOLDB42:
 2723              		.section	.text._ZN17Fl_Plugin_ManagerD0Ev,"ax",@progbits
 2724              	.LHOTB42:
 2725              		.align 2
 2726              		.p2align 4,,15
 2727              		.globl	_ZN17Fl_Plugin_ManagerD0Ev
 2729              	_ZN17Fl_Plugin_ManagerD0Ev:
 2730              	.LFB320:
 2731              		.loc 1 1627 0
 2732              		.cfi_startproc
 2733              	.LVL264:
 2734 0000 53       		pushq	%rbx
 2735              		.cfi_def_cfa_offset 16
 2736              		.cfi_offset 3, -16
 2737              		.loc 1 1627 0
 2738 0001 4889FB   		movq	%rdi, %rbx
 2739              	.LBB521:
 2740              	.LBB522:
 2741 0004 48C70700 		movq	$_ZTV17Fl_Plugin_Manager+16, (%rdi)
 2741      000000
 2742 000b E8000000 		call	_ZN14Fl_PreferencesD2Ev
 2742      00
 2743              	.LVL265:
 2744              	.LBE522:
 2745              	.LBE521:
 2746              		.loc 1 1631 0
 2747 0010 4889DF   		movq	%rbx, %rdi
 2748 0013 5B       		popq	%rbx
 2749              		.cfi_def_cfa_offset 8
 2750              	.LVL266:
 2751 0014 E9000000 		jmp	_ZdlPv
 2751      00
 2752              	.LVL267:
 2753              		.cfi_endproc
 2754              	.LFE320:
 2756              		.section	.text.unlikely._ZN17Fl_Plugin_ManagerD0Ev
 2757              	.LCOLDE42:
 2758              		.section	.text._ZN17Fl_Plugin_ManagerD0Ev
 2759              	.LHOTE42:
 2760              		.section	.rodata.str1.1
 2761              	.LC43:
 2762 0044 25732F25 		.string	"%s/%s"
 2762      7300
 2763              		.section	.text.unlikely._ZN14Fl_Preferences4Node9setParentEPS0_,"ax",@progbits
 2764              		.align 2
 2765              	.LCOLDB44:
 2766              		.section	.text._ZN14Fl_Preferences4Node9setParentEPS0_,"ax",@progbits
 2767              	.LHOTB44:
 2768              		.align 2
 2769              		.p2align 4,,15
 2770              		.globl	_ZN14Fl_Preferences4Node9setParentEPS0_
 2772              	_ZN14Fl_Preferences4Node9setParentEPS0_:
 2773              	.LFB288:
 2774              		.loc 1 1304 0
 2775              		.cfi_startproc
 2776              	.LVL268:
 2777 0000 53       		pushq	%rbx
 2778              		.cfi_def_cfa_offset 16
 2779              		.cfi_offset 3, -16
 2780              		.loc 1 1305 0
 2781 0001 48897710 		movq	%rsi, 16(%rdi)
 2782              		.loc 1 1304 0
 2783 0005 4889FB   		movq	%rdi, %rbx
 2784              		.loc 1 1306 0
 2785 0008 488B06   		movq	(%rsi), %rax
 2786              	.LBB523:
 2787              	.LBB524:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 2788              		.loc 4 34 0
 2789 000b B9000000 		movl	$.LC43, %ecx
 2789      00
 2790 0010 BA800000 		movl	$128, %edx
 2790      00
 2791              	.LBE524:
 2792              	.LBE523:
 2793              		.loc 1 1306 0
 2794 0015 48894708 		movq	%rax, 8(%rdi)
 2795              		.loc 1 1307 0
 2796 0019 48893E   		movq	%rdi, (%rsi)
 2797              	.LVL269:
 2798              	.LBB526:
 2799              	.LBB525:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 2800              		.loc 4 34 0
 2801 001c 31C0     		xorl	%eax, %eax
 2802 001e 4C8B4F18 		movq	24(%rdi), %r9
 2803 0022 4C8B4618 		movq	24(%rsi), %r8
 2804 0026 BF000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edi
 2804      00
 2805              	.LVL270:
 2806 002b BE010000 		movl	$1, %esi
 2806      00
 2807              	.LVL271:
 2808 0030 E8000000 		call	__sprintf_chk
 2808      00
 2809              	.LVL272:
 2810              	.LBE525:
 2811              	.LBE526:
 2812              		.loc 1 1309 0
 2813 0035 488B7B18 		movq	24(%rbx), %rdi
 2814 0039 E8000000 		call	free
 2814      00
 2815              	.LVL273:
 2816              		.loc 1 1310 0
 2817 003e BF000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edi
 2817      00
 2818 0043 E8000000 		call	strdup
 2818      00
 2819              	.LVL274:
 2820 0048 48894318 		movq	%rax, 24(%rbx)
 2821              		.loc 1 1311 0
 2822 004c 5B       		popq	%rbx
 2823              		.cfi_def_cfa_offset 8
 2824              	.LVL275:
 2825 004d C3       		ret
 2826              		.cfi_endproc
 2827              	.LFE288:
 2829              		.section	.text.unlikely._ZN14Fl_Preferences4Node9setParentEPS0_
 2830              	.LCOLDE44:
 2831              		.section	.text._ZN14Fl_Preferences4Node9setParentEPS0_
 2832              	.LHOTE44:
 2833              		.section	.text.unlikely._ZN14Fl_Preferences4Node8findRootEv,"ax",@progbits
 2834              		.align 2
 2835              	.LCOLDB45:
 2836              		.section	.text._ZN14Fl_Preferences4Node8findRootEv,"ax",@progbits
 2837              	.LHOTB45:
 2838              		.align 2
 2839              		.p2align 4,,15
 2840              		.globl	_ZN14Fl_Preferences4Node8findRootEv
 2842              	_ZN14Fl_Preferences4Node8findRootEv:
 2843              	.LFB289:
 2844              		.loc 1 1314 0
 2845              		.cfi_startproc
 2846              	.LVL276:
 2847              		.p2align 4,,10
 2848              		.p2align 3
 2849              	.L242:
 2850              		.loc 1 1317 0
 2851 0000 F6473002 		testb	$2, 48(%rdi)
 2852 0004 7512     		jne	.L244
 2853              	.LVL277:
 2854              	.LBB527:
 2855              	.LBB528:
 2856              		.loc 5 224 0
 2857 0006 488B7F10 		movq	16(%rdi), %rdi
 2858              	.LVL278:
 2859              	.LBE528:
 2860              	.LBE527:
 2861              		.loc 1 1316 0
 2862 000a 4885FF   		testq	%rdi, %rdi
 2863 000d 75F1     		jne	.L242
 2864              		.loc 1 1321 0
 2865 000f 31C0     		xorl	%eax, %eax
 2866              		.loc 1 1322 0
 2867 0011 C3       		ret
 2868              	.LVL279:
 2869              		.p2align 4,,10
 2870 0012 660F1F44 		.p2align 3
 2870      0000
 2871              	.L244:
 2872              		.loc 1 1318 0
 2873 0018 488B4710 		movq	16(%rdi), %rax
 2874 001c C3       		ret
 2875              		.cfi_endproc
 2876              	.LFE289:
 2878              		.section	.text.unlikely._ZN14Fl_Preferences4Node8findRootEv
 2879              	.LCOLDE45:
 2880              		.section	.text._ZN14Fl_Preferences4Node8findRootEv
 2881              	.LHOTE45:
 2882              		.section	.text.unlikely._ZN14Fl_Preferences4Node3setEPKcS2_,"ax",@progbits
 2883              		.align 2
 2884              	.LCOLDB46:
 2885              		.section	.text._ZN14Fl_Preferences4Node3setEPKcS2_,"ax",@progbits
 2886              	.LHOTB46:
 2887              		.align 2
 2888              		.p2align 4,,15
 2889              		.globl	_ZN14Fl_Preferences4Node3setEPKcS2_
 2891              	_ZN14Fl_Preferences4Node3setEPKcS2_:
 2892              	.LFB291:
 2893              		.loc 1 1337 0
 2894              		.cfi_startproc
 2895              	.LVL280:
 2896 0000 4157     		pushq	%r15
 2897              		.cfi_def_cfa_offset 16
 2898              		.cfi_offset 15, -16
 2899 0002 4156     		pushq	%r14
 2900              		.cfi_def_cfa_offset 24
 2901              		.cfi_offset 14, -24
 2902 0004 4155     		pushq	%r13
 2903              		.cfi_def_cfa_offset 32
 2904              		.cfi_offset 13, -32
 2905 0006 4154     		pushq	%r12
 2906              		.cfi_def_cfa_offset 40
 2907              		.cfi_offset 12, -40
 2908 0008 4989F4   		movq	%rsi, %r12
 2909 000b 55       		pushq	%rbp
 2910              		.cfi_def_cfa_offset 48
 2911              		.cfi_offset 6, -48
 2912 000c 53       		pushq	%rbx
 2913              		.cfi_def_cfa_offset 56
 2914              		.cfi_offset 3, -56
 2915 000d 4883EC18 		subq	$24, %rsp
 2916              		.cfi_def_cfa_offset 80
 2917              	.LBB529:
 2918              		.loc 1 1338 0
 2919 0011 48635F28 		movslq	40(%rdi), %rbx
 2920              	.LBE529:
 2921              		.loc 1 1337 0
 2922 0015 48893C24 		movq	%rdi, (%rsp)
 2923 0019 48895424 		movq	%rdx, 8(%rsp)
 2923      08
 2924              	.LBB530:
 2925              		.loc 1 1338 0
 2926 001e 85DB     		testl	%ebx, %ebx
 2927 0020 0F8E9600 		jle	.L266
 2927      0000
 2928 0026 488B0424 		movq	(%rsp), %rax
 2929 002a 4531FF   		xorl	%r15d, %r15d
 2930 002d 488B6820 		movq	32(%rax), %rbp
 2931 0031 4989EE   		movq	%rbp, %r14
 2932 0034 EB17     		jmp	.L251
 2933              	.LVL281:
 2934 0036 662E0F1F 		.p2align 4,,10
 2934      84000000 
 2934      0000
 2935              		.p2align 3
 2936              	.L248:
 2937              		.loc 1 1338 0 is_stmt 0 discriminator 2
 2938 0040 4183C701 		addl	$1, %r15d
 2939              	.LVL282:
 2940 0044 4983C610 		addq	$16, %r14
 2941 0048 4139DF   		cmpl	%ebx, %r15d
 2942 004b 7473     		je	.L247
 2943              	.LVL283:
 2944              	.L251:
 2945              		.loc 1 1339 0 is_stmt 1
 2946 004d 498B36   		movq	(%r14), %rsi
 2947 0050 4D89F5   		movq	%r14, %r13
 2948 0053 4C89E7   		movq	%r12, %rdi
 2949 0056 4929ED   		subq	%rbp, %r13
 2950 0059 E8000000 		call	strcmp
 2950      00
 2951              	.LVL284:
 2952 005e 85C0     		testl	%eax, %eax
 2953 0060 75DE     		jne	.L248
 2954              		.loc 1 1340 0
 2955 0062 488B4424 		movq	8(%rsp), %rax
 2955      08
 2956 0067 4885C0   		testq	%rax, %rax
 2957 006a 0F84AB00 		je	.L245
 2957      0000
 2958              		.loc 1 1341 0
 2959 0070 498B5E08 		movq	8(%r14), %rbx
 2960 0074 4889C7   		movq	%rax, %rdi
 2961 0077 4989C6   		movq	%rax, %r14
 2962 007a 4889DE   		movq	%rbx, %rsi
 2963 007d E8000000 		call	strcmp
 2963      00
 2964              	.LVL285:
 2965 0082 85C0     		testl	%eax, %eax
 2966 0084 7420     		je	.L250
 2967              		.loc 1 1343 0
 2968 0086 4889DF   		movq	%rbx, %rdi
 2969 0089 E8000000 		call	free
 2969      00
 2970              	.LVL286:
 2971              		.loc 1 1344 0
 2972 008e 488B1C24 		movq	(%rsp), %rbx
 2973 0092 4C89F7   		movq	%r14, %rdi
 2974 0095 4C036B20 		addq	32(%rbx), %r13
 2975 0099 E8000000 		call	strdup
 2975      00
 2976              	.LVL287:
 2977 009e 49894508 		movq	%rax, 8(%r13)
 2978              		.loc 1 1345 0
 2979 00a2 804B3001 		orb	$1, 48(%rbx)
 2980              	.L250:
 2981              		.loc 1 1347 0
 2982 00a6 44893D00 		movl	%r15d, _ZN14Fl_Preferences4Node12lastEntrySetE(%rip)
 2982      000000
 2983              	.LBE530:
 2984              		.loc 1 1360 0
 2985 00ad 4883C418 		addq	$24, %rsp
 2986              		.cfi_remember_state
 2987              		.cfi_def_cfa_offset 56
 2988              	.LVL288:
 2989 00b1 5B       		popq	%rbx
 2990              		.cfi_def_cfa_offset 48
 2991 00b2 5D       		popq	%rbp
 2992              		.cfi_def_cfa_offset 40
 2993 00b3 415C     		popq	%r12
 2994              		.cfi_def_cfa_offset 32
 2995              	.LVL289:
 2996 00b5 415D     		popq	%r13
 2997              		.cfi_def_cfa_offset 24
 2998 00b7 415E     		popq	%r14
 2999              		.cfi_def_cfa_offset 16
 3000 00b9 415F     		popq	%r15
 3001              		.cfi_def_cfa_offset 8
 3002              	.LVL290:
 3003 00bb C3       		ret
 3004              	.LVL291:
 3005              	.L266:
 3006              		.cfi_restore_state
 3007 00bc 488B6F20 		movq	32(%rdi), %rbp
 3008              	.LVL292:
 3009              		.p2align 4,,10
 3010              		.p2align 3
 3011              	.L247:
 3012              		.loc 1 1351 0
 3013 00c0 488B0424 		movq	(%rsp), %rax
 3014 00c4 39582C   		cmpl	%ebx, 44(%rax)
 3015 00c7 7467     		je	.L267
 3016              	.L252:
 3017              		.loc 1 1355 0
 3018 00c9 48C1E304 		salq	$4, %rbx
 3019 00cd 4C89E7   		movq	%r12, %rdi
 3020 00d0 4801DD   		addq	%rbx, %rbp
 3021 00d3 E8000000 		call	strdup
 3021      00
 3022              	.LVL293:
 3023 00d8 48894500 		movq	%rax, 0(%rbp)
 3024              		.loc 1 1356 0
 3025 00dc 488B0424 		movq	(%rsp), %rax
 3026 00e0 488B5424 		movq	8(%rsp), %rdx
 3026      08
 3027 00e5 48635828 		movslq	40(%rax), %rbx
 3028 00e9 48C1E304 		salq	$4, %rbx
 3029 00ed 48035820 		addq	32(%rax), %rbx
 3030 00f1 31C0     		xorl	%eax, %eax
 3031 00f3 4885D2   		testq	%rdx, %rdx
 3032 00f6 7408     		je	.L254
 3033              		.loc 1 1356 0 is_stmt 0 discriminator 1
 3034 00f8 4889D7   		movq	%rdx, %rdi
 3035 00fb E8000000 		call	strdup
 3035      00
 3036              	.LVL294:
 3037              	.L254:
 3038              		.loc 1 1357 0 is_stmt 1 discriminator 4
 3039 0100 488B0C24 		movq	(%rsp), %rcx
 3040              		.loc 1 1356 0 discriminator 4
 3041 0104 48894308 		movq	%rax, 8(%rbx)
 3042              		.loc 1 1357 0 discriminator 4
 3043 0108 8B4128   		movl	40(%rcx), %eax
 3044              		.loc 1 1359 0 discriminator 4
 3045 010b 80493001 		orb	$1, 48(%rcx)
 3046              		.loc 1 1357 0 discriminator 4
 3047 010f 89050000 		movl	%eax, _ZN14Fl_Preferences4Node12lastEntrySetE(%rip)
 3047      0000
 3048              		.loc 1 1358 0 discriminator 4
 3049 0115 83C001   		addl	$1, %eax
 3050 0118 894128   		movl	%eax, 40(%rcx)
 3051              	.L245:
 3052              		.loc 1 1360 0
 3053 011b 4883C418 		addq	$24, %rsp
 3054              		.cfi_remember_state
 3055              		.cfi_def_cfa_offset 56
 3056              	.LVL295:
 3057 011f 5B       		popq	%rbx
 3058              		.cfi_def_cfa_offset 48
 3059 0120 5D       		popq	%rbp
 3060              		.cfi_def_cfa_offset 40
 3061 0121 415C     		popq	%r12
 3062              		.cfi_def_cfa_offset 32
 3063              	.LVL296:
 3064 0123 415D     		popq	%r13
 3065              		.cfi_def_cfa_offset 24
 3066 0125 415E     		popq	%r14
 3067              		.cfi_def_cfa_offset 16
 3068 0127 415F     		popq	%r15
 3069              		.cfi_def_cfa_offset 8
 3070 0129 C3       		ret
 3071              	.LVL297:
 3072 012a 660F1F44 		.p2align 4,,10
 3072      0000
 3073              		.p2align 3
 3074              	.L267:
 3075              		.cfi_restore_state
 3076              		.loc 1 1352 0
 3077 0130 85DB     		testl	%ebx, %ebx
 3078 0132 7429     		je	.L255
 3079              		.loc 1 1352 0 is_stmt 0 discriminator 1
 3080 0134 01DB     		addl	%ebx, %ebx
 3081 0136 4863F3   		movslq	%ebx, %rsi
 3082 0139 48C1E604 		salq	$4, %rsi
 3083              	.L253:
 3084              		.loc 1 1352 0 discriminator 4
 3085 013d 4C8B3C24 		movq	(%rsp), %r15
 3086              		.loc 1 1353 0 is_stmt 1 discriminator 4
 3087 0141 4889EF   		movq	%rbp, %rdi
 3088              		.loc 1 1352 0 discriminator 4
 3089 0144 41895F2C 		movl	%ebx, 44(%r15)
 3090              		.loc 1 1353 0 discriminator 4
 3091 0148 E8000000 		call	realloc
 3091      00
 3092              	.LVL298:
 3093 014d 49635F28 		movslq	40(%r15), %rbx
 3094 0151 49894720 		movq	%rax, 32(%r15)
 3095 0155 4889C5   		movq	%rax, %rbp
 3096 0158 E96CFFFF 		jmp	.L252
 3096      FF
 3097              	.L255:
 3098 015d BEA00000 		movl	$160, %esi
 3098      00
 3099              		.loc 1 1352 0
 3100 0162 BB0A0000 		movl	$10, %ebx
 3100      00
 3101 0167 EBD4     		jmp	.L253
 3102              		.cfi_endproc
 3103              	.LFE291:
 3105              		.section	.text.unlikely._ZN14Fl_Preferences4Node3setEPKcS2_
 3106              	.LCOLDE46:
 3107              		.section	.text._ZN14Fl_Preferences4Node3setEPKcS2_
 3108              	.LHOTE46:
 3109              		.section	.rodata.str1.1
 3110              	.LC47:
 3111 004a 256400   		.string	"%d"
 3112              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKci,"ax",@progbits
 3113              		.align 2
 3114              	.LCOLDB48:
 3115              		.section	.text._ZN14Fl_Preferences3setEPKci,"ax",@progbits
 3116              	.LHOTB48:
 3117              		.align 2
 3118              		.p2align 4,,15
 3119              		.globl	_ZN14Fl_Preferences3setEPKci
 3121              	_ZN14Fl_Preferences3setEPKci:
 3122              	.LFB236:
 3123              		.loc 1 525 0
 3124              		.cfi_startproc
 3125              	.LVL299:
 3126 0000 55       		pushq	%rbp
 3127              		.cfi_def_cfa_offset 16
 3128              		.cfi_offset 6, -16
 3129 0001 53       		pushq	%rbx
 3130              		.cfi_def_cfa_offset 24
 3131              		.cfi_offset 3, -24
 3132 0002 4889FD   		movq	%rdi, %rbp
 3133 0005 4889F3   		movq	%rsi, %rbx
 3134 0008 4189D0   		movl	%edx, %r8d
 3135              	.LBB531:
 3136              	.LBB532:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3137              		.loc 4 34 0
 3138 000b B9000000 		movl	$.LC47, %ecx
 3138      00
 3139              	.LBE532:
 3140              	.LBE531:
 3141              		.loc 1 525 0
 3142 0010 4883EC08 		subq	$8, %rsp
 3143              		.cfi_def_cfa_offset 32
 3144              	.LBB534:
 3145              	.LBB533:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3146              		.loc 4 34 0
 3147 0014 BA800000 		movl	$128, %edx
 3147      00
 3148              	.LVL300:
 3149 0019 BE010000 		movl	$1, %esi
 3149      00
 3150              	.LVL301:
 3151 001e BF000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edi
 3151      00
 3152              	.LVL302:
 3153 0023 31C0     		xorl	%eax, %eax
 3154 0025 E8000000 		call	__sprintf_chk
 3154      00
 3155              	.LVL303:
 3156              	.LBE533:
 3157              	.LBE534:
 3158              		.loc 1 527 0
 3159 002a 488B7D08 		movq	8(%rbp), %rdi
 3160 002e 4889DE   		movq	%rbx, %rsi
 3161 0031 BA000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edx
 3161      00
 3162 0036 E8000000 		call	_ZN14Fl_Preferences4Node3setEPKcS2_
 3162      00
 3163              	.LVL304:
 3164              		.loc 1 529 0
 3165 003b 4883C408 		addq	$8, %rsp
 3166              		.cfi_def_cfa_offset 24
 3167 003f B8010000 		movl	$1, %eax
 3167      00
 3168 0044 5B       		popq	%rbx
 3169              		.cfi_def_cfa_offset 16
 3170              	.LVL305:
 3171 0045 5D       		popq	%rbp
 3172              		.cfi_def_cfa_offset 8
 3173              	.LVL306:
 3174 0046 C3       		ret
 3175              		.cfi_endproc
 3176              	.LFE236:
 3178              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKci
 3179              	.LCOLDE48:
 3180              		.section	.text._ZN14Fl_Preferences3setEPKci
 3181              	.LHOTE48:
 3182              		.section	.rodata.str1.1
 3183              	.LC49:
 3184 004d 256700   		.string	"%g"
 3185              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKcf,"ax",@progbits
 3186              		.align 2
 3187              	.LCOLDB50:
 3188              		.section	.text._ZN14Fl_Preferences3setEPKcf,"ax",@progbits
 3189              	.LHOTB50:
 3190              		.align 2
 3191              		.p2align 4,,15
 3192              		.globl	_ZN14Fl_Preferences3setEPKcf
 3194              	_ZN14Fl_Preferences3setEPKcf:
 3195              	.LFB238:
 3196              		.loc 1 557 0
 3197              		.cfi_startproc
 3198              	.LVL307:
 3199 0000 55       		pushq	%rbp
 3200              		.cfi_def_cfa_offset 16
 3201              		.cfi_offset 6, -16
 3202 0001 53       		pushq	%rbx
 3203              		.cfi_def_cfa_offset 24
 3204              		.cfi_offset 3, -24
 3205              	.LBB535:
 3206              	.LBB536:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3207              		.loc 4 34 0
 3208 0002 F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 3209              	.LVL308:
 3210              	.LBE536:
 3211              	.LBE535:
 3212              		.loc 1 557 0
 3213 0006 4889FD   		movq	%rdi, %rbp
 3214 0009 4889F3   		movq	%rsi, %rbx
 3215              	.LBB539:
 3216              	.LBB537:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3217              		.loc 4 34 0
 3218 000c B9000000 		movl	$.LC49, %ecx
 3218      00
 3219              	.LBE537:
 3220              	.LBE539:
 3221              		.loc 1 557 0
 3222 0011 4883EC08 		subq	$8, %rsp
 3223              		.cfi_def_cfa_offset 32
 3224              	.LBB540:
 3225              	.LBB538:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3226              		.loc 4 34 0
 3227 0015 BA800000 		movl	$128, %edx
 3227      00
 3228 001a BE010000 		movl	$1, %esi
 3228      00
 3229              	.LVL309:
 3230 001f BF000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edi
 3230      00
 3231              	.LVL310:
 3232 0024 B8010000 		movl	$1, %eax
 3232      00
 3233 0029 E8000000 		call	__sprintf_chk
 3233      00
 3234              	.LVL311:
 3235              	.LBE538:
 3236              	.LBE540:
 3237              		.loc 1 559 0
 3238 002e 488B7D08 		movq	8(%rbp), %rdi
 3239 0032 4889DE   		movq	%rbx, %rsi
 3240 0035 BA000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edx
 3240      00
 3241 003a E8000000 		call	_ZN14Fl_Preferences4Node3setEPKcS2_
 3241      00
 3242              	.LVL312:
 3243              		.loc 1 561 0
 3244 003f 4883C408 		addq	$8, %rsp
 3245              		.cfi_def_cfa_offset 24
 3246 0043 B8010000 		movl	$1, %eax
 3246      00
 3247 0048 5B       		popq	%rbx
 3248              		.cfi_def_cfa_offset 16
 3249              	.LVL313:
 3250 0049 5D       		popq	%rbp
 3251              		.cfi_def_cfa_offset 8
 3252              	.LVL314:
 3253 004a C3       		ret
 3254              		.cfi_endproc
 3255              	.LFE238:
 3257              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKcf
 3258              	.LCOLDE50:
 3259              		.section	.text._ZN14Fl_Preferences3setEPKcf
 3260              	.LHOTE50:
 3261              		.section	.rodata.str1.1
 3262              	.LC51:
 3263 0050 252E2A67 		.string	"%.*g"
 3263      00
 3264              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKcfi,"ax",@progbits
 3265              		.align 2
 3266              	.LCOLDB52:
 3267              		.section	.text._ZN14Fl_Preferences3setEPKcfi,"ax",@progbits
 3268              	.LHOTB52:
 3269              		.align 2
 3270              		.p2align 4,,15
 3271              		.globl	_ZN14Fl_Preferences3setEPKcfi
 3273              	_ZN14Fl_Preferences3setEPKcfi:
 3274              	.LFB239:
 3275              		.loc 1 574 0
 3276              		.cfi_startproc
 3277              	.LVL315:
 3278 0000 55       		pushq	%rbp
 3279              		.cfi_def_cfa_offset 16
 3280              		.cfi_offset 6, -16
 3281 0001 53       		pushq	%rbx
 3282              		.cfi_def_cfa_offset 24
 3283              		.cfi_offset 3, -24
 3284              	.LBB541:
 3285              	.LBB542:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3286              		.loc 4 34 0
 3287 0002 F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 3288              	.LVL316:
 3289              	.LBE542:
 3290              	.LBE541:
 3291              		.loc 1 574 0
 3292 0006 4889FD   		movq	%rdi, %rbp
 3293 0009 4889F3   		movq	%rsi, %rbx
 3294 000c 4189D0   		movl	%edx, %r8d
 3295 000f 4883EC08 		subq	$8, %rsp
 3296              		.cfi_def_cfa_offset 32
 3297              	.LBB544:
 3298              	.LBB543:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3299              		.loc 4 34 0
 3300 0013 B9000000 		movl	$.LC51, %ecx
 3300      00
 3301 0018 BA800000 		movl	$128, %edx
 3301      00
 3302              	.LVL317:
 3303 001d BE010000 		movl	$1, %esi
 3303      00
 3304              	.LVL318:
 3305 0022 BF000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edi
 3305      00
 3306              	.LVL319:
 3307 0027 B8010000 		movl	$1, %eax
 3307      00
 3308 002c E8000000 		call	__sprintf_chk
 3308      00
 3309              	.LVL320:
 3310              	.LBE543:
 3311              	.LBE544:
 3312              		.loc 1 576 0
 3313 0031 488B7D08 		movq	8(%rbp), %rdi
 3314 0035 4889DE   		movq	%rbx, %rsi
 3315 0038 BA000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edx
 3315      00
 3316 003d E8000000 		call	_ZN14Fl_Preferences4Node3setEPKcS2_
 3316      00
 3317              	.LVL321:
 3318              		.loc 1 578 0
 3319 0042 4883C408 		addq	$8, %rsp
 3320              		.cfi_def_cfa_offset 24
 3321 0046 B8010000 		movl	$1, %eax
 3321      00
 3322 004b 5B       		popq	%rbx
 3323              		.cfi_def_cfa_offset 16
 3324              	.LVL322:
 3325 004c 5D       		popq	%rbp
 3326              		.cfi_def_cfa_offset 8
 3327              	.LVL323:
 3328 004d C3       		ret
 3329              		.cfi_endproc
 3330              	.LFE239:
 3332              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKcfi
 3333              	.LCOLDE52:
 3334              		.section	.text._ZN14Fl_Preferences3setEPKcfi
 3335              	.LHOTE52:
 3336              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKcd,"ax",@progbits
 3337              		.align 2
 3338              	.LCOLDB53:
 3339              		.section	.text._ZN14Fl_Preferences3setEPKcd,"ax",@progbits
 3340              	.LHOTB53:
 3341              		.align 2
 3342              		.p2align 4,,15
 3343              		.globl	_ZN14Fl_Preferences3setEPKcd
 3345              	_ZN14Fl_Preferences3setEPKcd:
 3346              	.LFB241:
 3347              		.loc 1 606 0
 3348              		.cfi_startproc
 3349              	.LVL324:
 3350 0000 55       		pushq	%rbp
 3351              		.cfi_def_cfa_offset 16
 3352              		.cfi_offset 6, -16
 3353 0001 53       		pushq	%rbx
 3354              		.cfi_def_cfa_offset 24
 3355              		.cfi_offset 3, -24
 3356 0002 4889FD   		movq	%rdi, %rbp
 3357 0005 4889F3   		movq	%rsi, %rbx
 3358              	.LBB545:
 3359              	.LBB546:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3360              		.loc 4 34 0
 3361 0008 B9000000 		movl	$.LC49, %ecx
 3361      00
 3362 000d BA800000 		movl	$128, %edx
 3362      00
 3363              	.LBE546:
 3364              	.LBE545:
 3365              		.loc 1 606 0
 3366 0012 4883EC08 		subq	$8, %rsp
 3367              		.cfi_def_cfa_offset 32
 3368              	.LBB548:
 3369              	.LBB547:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3370              		.loc 4 34 0
 3371 0016 BE010000 		movl	$1, %esi
 3371      00
 3372              	.LVL325:
 3373 001b BF000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edi
 3373      00
 3374              	.LVL326:
 3375 0020 B8010000 		movl	$1, %eax
 3375      00
 3376 0025 E8000000 		call	__sprintf_chk
 3376      00
 3377              	.LVL327:
 3378              	.LBE547:
 3379              	.LBE548:
 3380              		.loc 1 608 0
 3381 002a 488B7D08 		movq	8(%rbp), %rdi
 3382 002e 4889DE   		movq	%rbx, %rsi
 3383 0031 BA000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edx
 3383      00
 3384 0036 E8000000 		call	_ZN14Fl_Preferences4Node3setEPKcS2_
 3384      00
 3385              	.LVL328:
 3386              		.loc 1 610 0
 3387 003b 4883C408 		addq	$8, %rsp
 3388              		.cfi_def_cfa_offset 24
 3389 003f B8010000 		movl	$1, %eax
 3389      00
 3390 0044 5B       		popq	%rbx
 3391              		.cfi_def_cfa_offset 16
 3392              	.LVL329:
 3393 0045 5D       		popq	%rbp
 3394              		.cfi_def_cfa_offset 8
 3395              	.LVL330:
 3396 0046 C3       		ret
 3397              		.cfi_endproc
 3398              	.LFE241:
 3400              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKcd
 3401              	.LCOLDE53:
 3402              		.section	.text._ZN14Fl_Preferences3setEPKcd
 3403              	.LHOTE53:
 3404              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKcdi,"ax",@progbits
 3405              		.align 2
 3406              	.LCOLDB54:
 3407              		.section	.text._ZN14Fl_Preferences3setEPKcdi,"ax",@progbits
 3408              	.LHOTB54:
 3409              		.align 2
 3410              		.p2align 4,,15
 3411              		.globl	_ZN14Fl_Preferences3setEPKcdi
 3413              	_ZN14Fl_Preferences3setEPKcdi:
 3414              	.LFB242:
 3415              		.loc 1 623 0
 3416              		.cfi_startproc
 3417              	.LVL331:
 3418 0000 55       		pushq	%rbp
 3419              		.cfi_def_cfa_offset 16
 3420              		.cfi_offset 6, -16
 3421 0001 53       		pushq	%rbx
 3422              		.cfi_def_cfa_offset 24
 3423              		.cfi_offset 3, -24
 3424 0002 4889FD   		movq	%rdi, %rbp
 3425 0005 4889F3   		movq	%rsi, %rbx
 3426 0008 4189D0   		movl	%edx, %r8d
 3427              	.LBB549:
 3428              	.LBB550:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3429              		.loc 4 34 0
 3430 000b B9000000 		movl	$.LC51, %ecx
 3430      00
 3431              	.LBE550:
 3432              	.LBE549:
 3433              		.loc 1 623 0
 3434 0010 4883EC08 		subq	$8, %rsp
 3435              		.cfi_def_cfa_offset 32
 3436              	.LBB552:
 3437              	.LBB551:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3438              		.loc 4 34 0
 3439 0014 BA800000 		movl	$128, %edx
 3439      00
 3440              	.LVL332:
 3441 0019 BE010000 		movl	$1, %esi
 3441      00
 3442              	.LVL333:
 3443 001e BF000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edi
 3443      00
 3444              	.LVL334:
 3445 0023 B8010000 		movl	$1, %eax
 3445      00
 3446 0028 E8000000 		call	__sprintf_chk
 3446      00
 3447              	.LVL335:
 3448              	.LBE551:
 3449              	.LBE552:
 3450              		.loc 1 625 0
 3451 002d 488B7D08 		movq	8(%rbp), %rdi
 3452 0031 4889DE   		movq	%rbx, %rsi
 3453 0034 BA000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edx
 3453      00
 3454 0039 E8000000 		call	_ZN14Fl_Preferences4Node3setEPKcS2_
 3454      00
 3455              	.LVL336:
 3456              		.loc 1 627 0
 3457 003e 4883C408 		addq	$8, %rsp
 3458              		.cfi_def_cfa_offset 24
 3459 0042 B8010000 		movl	$1, %eax
 3459      00
 3460 0047 5B       		popq	%rbx
 3461              		.cfi_def_cfa_offset 16
 3462              	.LVL337:
 3463 0048 5D       		popq	%rbp
 3464              		.cfi_def_cfa_offset 8
 3465              	.LVL338:
 3466 0049 C3       		ret
 3467              		.cfi_endproc
 3468              	.LFE242:
 3470              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKcdi
 3471              	.LCOLDE54:
 3472              		.section	.text._ZN14Fl_Preferences3setEPKcdi
 3473              	.LHOTE54:
 3474              		.section	.rodata.str1.1
 3475              	.LC55:
 3476 0055 00       		.string	""
 3477              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKcS1_,"ax",@progbits
 3478              		.align 2
 3479              	.LCOLDB56:
 3480              		.section	.text._ZN14Fl_Preferences3setEPKcS1_,"ax",@progbits
 3481              	.LHOTB56:
 3482              		.align 2
 3483              		.p2align 4,,15
 3484              		.globl	_ZN14Fl_Preferences3setEPKcS1_
 3486              	_ZN14Fl_Preferences3setEPKcS1_:
 3487              	.LFB246:
 3488              		.loc 1 722 0
 3489              		.cfi_startproc
 3490              	.LVL339:
 3491 0000 55       		pushq	%rbp
 3492              		.cfi_def_cfa_offset 16
 3493              		.cfi_offset 6, -16
 3494 0001 53       		pushq	%rbx
 3495              		.cfi_def_cfa_offset 24
 3496              		.cfi_offset 3, -24
 3497              		.loc 1 723 0
 3498 0002 B9000000 		movl	$.LC55, %ecx
 3498      00
 3499              		.loc 1 722 0
 3500 0007 4889FB   		movq	%rdi, %rbx
 3501 000a 4883EC18 		subq	$24, %rsp
 3502              		.cfi_def_cfa_offset 48
 3503              		.loc 1 723 0
 3504 000e 4885D2   		testq	%rdx, %rdx
 3505 0011 480F45CA 		cmovne	%rdx, %rcx
 3506              	.LVL340:
 3507              		.loc 1 725 0
 3508 0015 0FB601   		movzbl	(%rcx), %eax
 3509 0018 84C0     		testb	%al, %al
 3510 001a 0F842001 		je	.L280
 3510      0000
 3511              		.loc 1 725 0 is_stmt 0 discriminator 1
 3512 0020 4531D2   		xorl	%r10d, %r10d
 3513 0023 31FF     		xorl	%edi, %edi
 3514              	.LVL341:
 3515 0025 EB18     		jmp	.L283
 3516              	.LVL342:
 3517 0027 660F1F84 		.p2align 4,,10
 3517      00000000 
 3517      00
 3518              		.p2align 3
 3519              	.L306:
 3520 0030 3C7F     		cmpb	$127, %al
 3521 0032 741F     		je	.L293
 3522              		.loc 1 725 0 discriminator 6
 3523 0034 4883C101 		addq	$1, %rcx
 3524              	.LVL343:
 3525 0038 0FB601   		movzbl	(%rcx), %eax
 3526 003b 84C0     		testb	%al, %al
 3527 003d 7423     		je	.L305
 3528              	.LVL344:
 3529              	.L283:
 3530              		.loc 1 725 0 discriminator 1
 3531 003f 83C701   		addl	$1, %edi
 3532              	.LVL345:
 3533 0042 3C1F     		cmpb	$31, %al
 3534 0044 410F9EC1 		setle	%r9b
 3535 0048 3C5C     		cmpb	$92, %al
 3536 004a 410F94C0 		sete	%r8b
 3537 004e 4508C1   		orb	%r8b, %r9b
 3538 0051 74DD     		je	.L306
 3539              	.L293:
 3540              		.loc 1 725 0 discriminator 4
 3541 0053 4883C101 		addq	$1, %rcx
 3542              	.LVL346:
 3543 0057 0FB601   		movzbl	(%rcx), %eax
 3544 005a 4183C204 		addl	$4, %r10d
 3545              	.LVL347:
 3546 005e 84C0     		testb	%al, %al
 3547 0060 75DD     		jne	.L283
 3548              	.L305:
 3549              	.LBB553:
 3550              		.loc 1 726 0 is_stmt 1
 3551 0062 4585D2   		testl	%r10d, %r10d
 3552 0065 0F84D500 		je	.L280
 3552      0000
 3553              	.LBB554:
 3554              		.loc 1 727 0
 3555 006b 418D7C3A 		leal	1(%r10,%rdi), %edi
 3555      01
 3556              	.LVL348:
 3557 0070 48895424 		movq	%rdx, 8(%rsp)
 3557      08
 3558 0075 48893424 		movq	%rsi, (%rsp)
 3559 0079 4863FF   		movslq	%edi, %rdi
 3560 007c E8000000 		call	malloc
 3560      00
 3561              	.LVL349:
 3562 0081 488B5424 		movq	8(%rsp), %rdx
 3562      08
 3563 0086 4889C5   		movq	%rax, %rbp
 3564              	.LVL350:
 3565 0089 4889C7   		movq	%rax, %rdi
 3566 008c 488B3424 		movq	(%rsp), %rsi
 3567 0090 4883C201 		addq	$1, %rdx
 3568              	.LVL351:
 3569 0094 EB5E     		jmp	.L284
 3570              	.LVL352:
 3571 0096 662E0F1F 		.p2align 4,,10
 3571      84000000 
 3571      0000
 3572              		.p2align 3
 3573              	.L286:
 3574              	.LBB555:
 3575              	.LBB556:
 3576              		.loc 1 731 0
 3577 00a0 80F90A   		cmpb	$10, %cl
 3578 00a3 746B     		je	.L307
 3579              		.loc 1 732 0
 3580 00a5 80F90D   		cmpb	$13, %cl
 3581 00a8 0F848200 		je	.L308
 3581      0000
 3582              		.loc 1 733 0
 3583 00ae 8D41E0   		leal	-32(%rcx), %eax
 3584 00b1 3C5E     		cmpb	$94, %al
 3585 00b3 766B     		jbe	.L290
 3586              	.LVL353:
 3587              		.loc 1 734 0
 3588 00b5 440FBEC1 		movsbl	%cl, %r8d
 3589 00b9 83E107   		andl	$7, %ecx
 3590              	.LVL354:
 3591 00bc C6075C   		movb	$92, (%rdi)
 3592              	.LVL355:
 3593 00bf 4489C0   		movl	%r8d, %eax
 3594 00c2 41C1F803 		sarl	$3, %r8d
 3595 00c6 83C130   		addl	$48, %ecx
 3596 00c9 C1F806   		sarl	$6, %eax
 3597 00cc 4183E007 		andl	$7, %r8d
 3598 00d0 884F03   		movb	%cl, 3(%rdi)
 3599 00d3 83E003   		andl	$3, %eax
 3600 00d6 4183C030 		addl	$48, %r8d
 3601 00da 4883C704 		addq	$4, %rdi
 3602              	.LVL356:
 3603 00de 83C030   		addl	$48, %eax
 3604 00e1 448847FE 		movb	%r8b, -2(%rdi)
 3605 00e5 8847FD   		movb	%al, -3(%rdi)
 3606              	.LVL357:
 3607 00e8 0F1F8400 		.p2align 4,,10
 3607      00000000 
 3608              		.p2align 3
 3609              	.L287:
 3610 00f0 4883C201 		addq	$1, %rdx
 3611              	.LVL358:
 3612              	.L284:
 3613              	.LBE556:
 3614              		.loc 1 728 0 discriminator 1
 3615 00f4 0FB64AFF 		movzbl	-1(%rdx), %ecx
 3616 00f8 84C9     		testb	%cl, %cl
 3617 00fa 745C     		je	.L285
 3618              	.LVL359:
 3619              	.LBB557:
 3620              		.loc 1 730 0
 3621 00fc 80F95C   		cmpb	$92, %cl
 3622 00ff 759F     		jne	.L286
 3623              	.LVL360:
 3624              		.loc 1 730 0 is_stmt 0 discriminator 1
 3625 0101 C6075C   		movb	$92, (%rdi)
 3626 0104 C647015C 		movb	$92, 1(%rdi)
 3627              	.LVL361:
 3628 0108 4883C702 		addq	$2, %rdi
 3629              	.LVL362:
 3630 010c EBE2     		jmp	.L287
 3631              	.LVL363:
 3632 010e 6690     		.p2align 4,,10
 3633              		.p2align 3
 3634              	.L307:
 3635              		.loc 1 731 0 is_stmt 1 discriminator 1
 3636 0110 C6075C   		movb	$92, (%rdi)
 3637 0113 C647016E 		movb	$110, 1(%rdi)
 3638              	.LVL364:
 3639 0117 4883C702 		addq	$2, %rdi
 3640              	.LVL365:
 3641 011b EBD3     		jmp	.L287
 3642              	.LVL366:
 3643 011d 0F1F00   		.p2align 4,,10
 3644              		.p2align 3
 3645              	.L290:
 3646              		.loc 1 735 0
 3647 0120 880F     		movb	%cl, (%rdi)
 3648 0122 4883C701 		addq	$1, %rdi
 3649              	.LVL367:
 3650 0126 EBC8     		jmp	.L287
 3651              	.LVL368:
 3652 0128 0F1F8400 		.p2align 4,,10
 3652      00000000 
 3653              		.p2align 3
 3654              	.L308:
 3655              		.loc 1 732 0 discriminator 1
 3656 0130 C6075C   		movb	$92, (%rdi)
 3657 0133 C6470172 		movb	$114, 1(%rdi)
 3658              	.LVL369:
 3659 0137 4883C702 		addq	$2, %rdi
 3660              	.LVL370:
 3661 013b EBB3     		jmp	.L287
 3662              	.LVL371:
 3663 013d 0F1F00   		.p2align 4,,10
 3664              		.p2align 3
 3665              	.L280:
 3666              	.LBE557:
 3667              	.LBE555:
 3668              	.LBE554:
 3669              		.loc 1 742 0
 3670 0140 488B7B08 		movq	8(%rbx), %rdi
 3671 0144 E8000000 		call	_ZN14Fl_Preferences4Node3setEPKcS2_
 3671      00
 3672              	.LVL372:
 3673              	.LBE553:
 3674              		.loc 1 744 0
 3675 0149 4883C418 		addq	$24, %rsp
 3676              		.cfi_remember_state
 3677              		.cfi_def_cfa_offset 24
 3678 014d B8010000 		movl	$1, %eax
 3678      00
 3679 0152 5B       		popq	%rbx
 3680              		.cfi_def_cfa_offset 16
 3681              	.LVL373:
 3682 0153 5D       		popq	%rbp
 3683              		.cfi_def_cfa_offset 8
 3684 0154 C3       		ret
 3685              	.LVL374:
 3686              		.p2align 4,,10
 3687 0155 0F1F00   		.p2align 3
 3688              	.L285:
 3689              		.cfi_restore_state
 3690              	.LBB559:
 3691              	.LBB558:
 3692              		.loc 1 737 0
 3693 0158 C60700   		movb	$0, (%rdi)
 3694              		.loc 1 738 0
 3695 015b 488B7B08 		movq	8(%rbx), %rdi
 3696              	.LVL375:
 3697 015f 4889EA   		movq	%rbp, %rdx
 3698              	.LVL376:
 3699 0162 E8000000 		call	_ZN14Fl_Preferences4Node3setEPKcS2_
 3699      00
 3700              	.LVL377:
 3701              		.loc 1 739 0
 3702 0167 4889EF   		movq	%rbp, %rdi
 3703 016a E8000000 		call	free
 3703      00
 3704              	.LVL378:
 3705              	.LBE558:
 3706              	.LBE559:
 3707              		.loc 1 744 0
 3708 016f 4883C418 		addq	$24, %rsp
 3709              		.cfi_def_cfa_offset 24
 3710              	.LVL379:
 3711 0173 B8010000 		movl	$1, %eax
 3711      00
 3712 0178 5B       		popq	%rbx
 3713              		.cfi_def_cfa_offset 16
 3714              	.LVL380:
 3715 0179 5D       		popq	%rbp
 3716              		.cfi_def_cfa_offset 8
 3717              	.LVL381:
 3718 017a C3       		ret
 3719              		.cfi_endproc
 3720              	.LFE246:
 3722              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKcS1_
 3723              	.LCOLDE56:
 3724              		.section	.text._ZN14Fl_Preferences3setEPKcS1_
 3725              	.LHOTE56:
 3726              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKcPKvi,"ax",@progbits
 3727              		.align 2
 3728              	.LCOLDB57:
 3729              		.section	.text._ZN14Fl_Preferences3setEPKcPKvi,"ax",@progbits
 3730              	.LHOTB57:
 3731              		.align 2
 3732              		.p2align 4,,15
 3733              		.globl	_ZN14Fl_Preferences3setEPKcPKvi
 3735              	_ZN14Fl_Preferences3setEPKcPKvi:
 3736              	.LFB250:
 3737              		.loc 1 832 0
 3738              		.cfi_startproc
 3739              	.LVL382:
 3740 0000 4156     		pushq	%r14
 3741              		.cfi_def_cfa_offset 16
 3742              		.cfi_offset 14, -16
 3743 0002 4155     		pushq	%r13
 3744              		.cfi_def_cfa_offset 24
 3745              		.cfi_offset 13, -24
 3746 0004 4189CE   		movl	%ecx, %r14d
 3747 0007 4154     		pushq	%r12
 3748              		.cfi_def_cfa_offset 32
 3749              		.cfi_offset 12, -32
 3750 0009 4989FC   		movq	%rdi, %r12
 3751              		.loc 1 833 0
 3752 000c 8D7C0901 		leal	1(%rcx,%rcx), %edi
 3753              	.LVL383:
 3754              		.loc 1 832 0
 3755 0010 55       		pushq	%rbp
 3756              		.cfi_def_cfa_offset 40
 3757              		.cfi_offset 6, -40
 3758 0011 53       		pushq	%rbx
 3759              		.cfi_def_cfa_offset 48
 3760              		.cfi_offset 3, -48
 3761              		.loc 1 832 0
 3762 0012 4889F5   		movq	%rsi, %rbp
 3763              		.loc 1 833 0
 3764 0015 4863FF   		movslq	%edi, %rdi
 3765              		.loc 1 832 0
 3766 0018 4889D3   		movq	%rdx, %rbx
 3767              		.loc 1 833 0
 3768 001b E8000000 		call	malloc
 3768      00
 3769              	.LVL384:
 3770              	.LBB560:
 3771              		.loc 1 835 0
 3772 0020 4585F6   		testl	%r14d, %r14d
 3773              	.LBE560:
 3774              		.loc 1 833 0
 3775 0023 4989C5   		movq	%rax, %r13
 3776              	.LVL385:
 3777              	.LBB563:
 3778              		.loc 1 835 0
 3779 0026 7E57     		jle	.L310
 3780 0028 418D46FF 		leal	-1(%r14), %eax
 3781              	.LVL386:
 3782 002c 4C89EF   		movq	%r13, %rdi
 3783 002f 498D7445 		leaq	2(%r13,%rax,2), %rsi
 3783      02
 3784 0034 4989C6   		movq	%rax, %r14
 3785              	.LVL387:
 3786 0037 660F1F84 		.p2align 4,,10
 3786      00000000 
 3786      00
 3787              		.p2align 3
 3788              	.L311:
 3789              	.LBB561:
 3790              		.loc 1 837 0 discriminator 1
 3791 0040 4883C301 		addq	$1, %rbx
 3792              	.LVL388:
 3793 0044 440FB643 		movzbl	-1(%rbx), %r8d
 3793      FF
 3794              	.LVL389:
 3795 0049 4883C702 		addq	$2, %rdi
 3796              	.LVL390:
 3797              		.loc 1 838 0 discriminator 1
 3798 004d 4D89C1   		movq	%r8, %r9
 3799              		.loc 1 839 0 discriminator 1
 3800 0050 4183E00F 		andl	$15, %r8d
 3801              	.LVL391:
 3802              		.loc 1 838 0 discriminator 1
 3803 0054 49C1E904 		shrq	$4, %r9
 3804 0058 4183E10F 		andl	$15, %r9d
 3805 005c 410FB691 		movzbl	_ZZN14Fl_Preferences3setEPKcPKviE2lu(%r9), %edx
 3805      00000000 
 3806 0064 8857FE   		movb	%dl, -2(%rdi)
 3807              	.LVL392:
 3808              		.loc 1 839 0 discriminator 1
 3809 0067 410FB690 		movzbl	_ZZN14Fl_Preferences3setEPKcPKviE2lu(%r8), %edx
 3809      00000000 
 3810              	.LBE561:
 3811              		.loc 1 835 0 discriminator 1
 3812 006f 4839FE   		cmpq	%rdi, %rsi
 3813              	.LBB562:
 3814              		.loc 1 839 0 discriminator 1
 3815 0072 8857FF   		movb	%dl, -1(%rdi)
 3816              	.LBE562:
 3817              		.loc 1 835 0 discriminator 1
 3818 0075 75C9     		jne	.L311
 3819 0077 4D63F6   		movslq	%r14d, %r14
 3820 007a 4B8D4475 		leaq	2(%r13,%r14,2), %rax
 3820      02
 3821              	.LVL393:
 3822              	.L310:
 3823              	.LBE563:
 3824              		.loc 1 842 0
 3825 007f 498B7C24 		movq	8(%r12), %rdi
 3825      08
 3826              		.loc 1 841 0
 3827 0084 C60000   		movb	$0, (%rax)
 3828              		.loc 1 842 0
 3829 0087 4C89EA   		movq	%r13, %rdx
 3830 008a 4889EE   		movq	%rbp, %rsi
 3831 008d E8000000 		call	_ZN14Fl_Preferences4Node3setEPKcS2_
 3831      00
 3832              	.LVL394:
 3833              		.loc 1 843 0
 3834 0092 4C89EF   		movq	%r13, %rdi
 3835 0095 E8000000 		call	free
 3835      00
 3836              	.LVL395:
 3837              		.loc 1 845 0
 3838 009a 5B       		popq	%rbx
 3839              		.cfi_def_cfa_offset 40
 3840              	.LVL396:
 3841 009b B8010000 		movl	$1, %eax
 3841      00
 3842 00a0 5D       		popq	%rbp
 3843              		.cfi_def_cfa_offset 32
 3844              	.LVL397:
 3845 00a1 415C     		popq	%r12
 3846              		.cfi_def_cfa_offset 24
 3847              	.LVL398:
 3848 00a3 415D     		popq	%r13
 3849              		.cfi_def_cfa_offset 16
 3850              	.LVL399:
 3851 00a5 415E     		popq	%r14
 3852              		.cfi_def_cfa_offset 8
 3853 00a7 C3       		ret
 3854              		.cfi_endproc
 3855              	.LFE250:
 3857              		.section	.text.unlikely._ZN14Fl_Preferences3setEPKcPKvi
 3858              	.LCOLDE57:
 3859              		.section	.text._ZN14Fl_Preferences3setEPKcPKvi
 3860              	.LHOTE57:
 3861              		.section	.text.unlikely._ZN14Fl_Preferences4Node3setEPKc,"ax",@progbits
 3862              		.align 2
 3863              	.LCOLDB58:
 3864              		.section	.text._ZN14Fl_Preferences4Node3setEPKc,"ax",@progbits
 3865              	.LHOTB58:
 3866              		.align 2
 3867              		.p2align 4,,15
 3868              		.globl	_ZN14Fl_Preferences4Node3setEPKc
 3870              	_ZN14Fl_Preferences4Node3setEPKc:
 3871              	.LFB292:
 3872              		.loc 1 1363 0
 3873              		.cfi_startproc
 3874              	.LVL400:
 3875 0000 4155     		pushq	%r13
 3876              		.cfi_def_cfa_offset 16
 3877              		.cfi_offset 13, -16
 3878 0002 4154     		pushq	%r12
 3879              		.cfi_def_cfa_offset 24
 3880              		.cfi_offset 12, -24
 3881 0004 4989F4   		movq	%rsi, %r12
 3882 0007 55       		pushq	%rbp
 3883              		.cfi_def_cfa_offset 32
 3884              		.cfi_offset 6, -32
 3885 0008 53       		pushq	%rbx
 3886              		.cfi_def_cfa_offset 40
 3887              		.cfi_offset 3, -40
 3888 0009 4889FD   		movq	%rdi, %rbp
 3889 000c 4883EC08 		subq	$8, %rsp
 3890              		.cfi_def_cfa_offset 48
 3891              		.loc 1 1366 0
 3892 0010 0FB65F30 		movzbl	48(%rdi), %ebx
 3893              	.LBB564:
 3894              		.loc 1 1367 0
 3895 0014 0FB606   		movzbl	(%rsi), %eax
 3896              	.LBE564:
 3897              		.loc 1 1366 0
 3898 0017 83E301   		andl	$1, %ebx
 3899              	.LVL401:
 3900              	.LBB575:
 3901              		.loc 1 1367 0
 3902 001a 3C3B     		cmpb	$59, %al
 3903 001c 766A     		jbe	.L322
 3904              	.L316:
 3905              	.LVL402:
 3906              	.LBB565:
 3907              	.LBB566:
 3908              	.LBB567:
 226:/usr/include/string.h **** }
 3909              		.loc 6 226 0
 3910 001e BE3A0000 		movl	$58, %esi
 3910      00
 3911              	.LVL403:
 3912 0023 4C89E7   		movq	%r12, %rdi
 3913              	.LVL404:
 3914 0026 E8000000 		call	strchr
 3914      00
 3915              	.LVL405:
 3916              	.LBE567:
 3917              	.LBE566:
 3918              	.LBB569:
 3919              		.loc 1 1371 0
 3920 002b 4885C0   		testq	%rax, %rax
 3921              	.LBE569:
 3922              	.LBB571:
 3923              	.LBB568:
 226:/usr/include/string.h **** }
 3924              		.loc 6 226 0
 3925 002e 4989C5   		movq	%rax, %r13
 3926              	.LVL406:
 3927              	.LBE568:
 3928              	.LBE571:
 3929              	.LBB572:
 3930              		.loc 1 1371 0
 3931 0031 7475     		je	.L318
 3932              	.LBB570:
 3933              		.loc 1 1372 0
 3934 0033 4889C2   		movq	%rax, %rdx
 3935              		.loc 1 1374 0
 3936 0036 B8800000 		movl	$128, %eax
 3936      00
 3937              		.loc 1 1375 0
 3938 003b 4C89E6   		movq	%r12, %rsi
 3939              		.loc 1 1372 0
 3940 003e 4C29E2   		subq	%r12, %rdx
 3941              		.loc 1 1375 0
 3942 0041 BF000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edi
 3942      00
 3943              		.loc 1 1372 0
 3944 0046 4883C201 		addq	$1, %rdx
 3945              	.LVL407:
 3946              		.loc 1 1374 0
 3947 004a 4881FA80 		cmpq	$128, %rdx
 3947      000000
 3948 0051 480F43D0 		cmovnb	%rax, %rdx
 3949              	.LVL408:
 3950              		.loc 1 1375 0
 3951 0055 E8000000 		call	fl_strlcpy
 3951      00
 3952              	.LVL409:
 3953              		.loc 1 1376 0
 3954 005a 498D5501 		leaq	1(%r13), %rdx
 3955 005e BE000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %esi
 3955      00
 3956 0063 4889EF   		movq	%rbp, %rdi
 3957 0066 E8000000 		call	_ZN14Fl_Preferences4Node3setEPKcS2_
 3957      00
 3958              	.LVL410:
 3959              	.L317:
 3960              	.LBE570:
 3961              	.LBE572:
 3962              	.LBE565:
 3963              	.LBE575:
 3964              		.loc 1 1381 0
 3965 006b 0FB64530 		movzbl	48(%rbp), %eax
 3966 006f 83E0FE   		andl	$-2, %eax
 3967 0072 09C3     		orl	%eax, %ebx
 3968              	.LVL411:
 3969 0074 885D30   		movb	%bl, 48(%rbp)
 3970              		.loc 1 1382 0
 3971 0077 4883C408 		addq	$8, %rsp
 3972              		.cfi_remember_state
 3973              		.cfi_def_cfa_offset 40
 3974 007b 5B       		popq	%rbx
 3975              		.cfi_def_cfa_offset 32
 3976 007c 5D       		popq	%rbp
 3977              		.cfi_def_cfa_offset 24
 3978              	.LVL412:
 3979 007d 415C     		popq	%r12
 3980              		.cfi_def_cfa_offset 16
 3981              	.LVL413:
 3982 007f 415D     		popq	%r13
 3983              		.cfi_def_cfa_offset 8
 3984 0081 C3       		ret
 3985              	.LVL414:
 3986              		.p2align 4,,10
 3987 0082 660F1F44 		.p2align 3
 3987      0000
 3988              	.L322:
 3989              		.cfi_restore_state
 3990              	.LBB576:
 3991              		.loc 1 1367 0
 3992 0088 48BA0100 		movabsq	$576460786663161857, %rdx
 3992      00000800 
 3992      0008
 3993 0092 480FA3C2 		btq	%rax, %rdx
 3994 0096 7386     		jnc	.L316
 3995              		.loc 1 1368 0
 3996 0098 31D2     		xorl	%edx, %edx
 3997 009a E8000000 		call	_ZN14Fl_Preferences4Node3setEPKcS2_
 3997      00
 3998              	.LVL415:
 3999 009f EBCA     		jmp	.L317
 4000              		.p2align 4,,10
 4001 00a1 0F1F8000 		.p2align 3
 4001      000000
 4002              	.L318:
 4003              	.LBB574:
 4004              	.LBB573:
 4005              		.loc 1 1378 0
 4006 00a8 BA000000 		movl	$.LC55, %edx
 4006      00
 4007 00ad 4C89E6   		movq	%r12, %rsi
 4008 00b0 4889EF   		movq	%rbp, %rdi
 4009 00b3 E8000000 		call	_ZN14Fl_Preferences4Node3setEPKcS2_
 4009      00
 4010              	.LVL416:
 4011 00b8 EBB1     		jmp	.L317
 4012              	.LBE573:
 4013              	.LBE574:
 4014              	.LBE576:
 4015              		.cfi_endproc
 4016              	.LFE292:
 4018              		.section	.text.unlikely._ZN14Fl_Preferences4Node3setEPKc
 4019              	.LCOLDE58:
 4020              		.section	.text._ZN14Fl_Preferences4Node3setEPKc
 4021              	.LHOTE58:
 4022              		.section	.text.unlikely._ZN14Fl_Preferences4Node3addEPKc,"ax",@progbits
 4023              		.align 2
 4024              	.LCOLDB59:
 4025              		.section	.text._ZN14Fl_Preferences4Node3addEPKc,"ax",@progbits
 4026              	.LHOTB59:
 4027              		.align 2
 4028              		.p2align 4,,15
 4029              		.globl	_ZN14Fl_Preferences4Node3addEPKc
 4031              	_ZN14Fl_Preferences4Node3addEPKc:
 4032              	.LFB293:
 4033              		.loc 1 1385 0
 4034              		.cfi_startproc
 4035              	.LVL417:
 4036              		.loc 1 1386 0
 4037 0000 48630500 		movslq	_ZN14Fl_Preferences4Node12lastEntrySetE(%rip), %rax
 4037      000000
 4038 0007 85C0     		testl	%eax, %eax
 4039 0009 7805     		js	.L327
 4040              		.loc 1 1386 0 is_stmt 0 discriminator 1
 4041 000b 3B4728   		cmpl	40(%rdi), %eax
 4042 000e 7C08     		jl	.L328
 4043              	.L327:
 4044              		.loc 1 1393 0 is_stmt 1
 4045 0010 C3       		ret
 4046              		.p2align 4,,10
 4047 0011 0F1F8000 		.p2align 3
 4047      000000
 4048              	.L328:
 4049              		.loc 1 1385 0
 4050 0018 4157     		pushq	%r15
 4051              		.cfi_def_cfa_offset 16
 4052              		.cfi_offset 15, -16
 4053 001a 4156     		pushq	%r14
 4054              		.cfi_def_cfa_offset 24
 4055              		.cfi_offset 14, -24
 4056              		.loc 1 1387 0
 4057 001c 48C1E004 		salq	$4, %rax
 4058              		.loc 1 1385 0
 4059 0020 4155     		pushq	%r13
 4060              		.cfi_def_cfa_offset 32
 4061              		.cfi_offset 13, -32
 4062 0022 4154     		pushq	%r12
 4063              		.cfi_def_cfa_offset 40
 4064              		.cfi_offset 12, -40
 4065 0024 4989FC   		movq	%rdi, %r12
 4066 0027 55       		pushq	%rbp
 4067              		.cfi_def_cfa_offset 48
 4068              		.cfi_offset 6, -48
 4069 0028 53       		pushq	%rbx
 4070              		.cfi_def_cfa_offset 56
 4071              		.cfi_offset 3, -56
 4072 0029 4889F5   		movq	%rsi, %rbp
 4073 002c 4883EC08 		subq	$8, %rsp
 4074              		.cfi_def_cfa_offset 64
 4075              		.loc 1 1387 0
 4076 0030 48034720 		addq	32(%rdi), %rax
 4077              		.loc 1 1388 0
 4078 0034 4C8B7808 		movq	8(%rax), %r15
 4079              		.loc 1 1387 0
 4080 0038 4889C3   		movq	%rax, %rbx
 4081              	.LVL418:
 4082              		.loc 1 1388 0
 4083 003b 4C89FF   		movq	%r15, %rdi
 4084              	.LVL419:
 4085 003e E8000000 		call	strlen
 4085      00
 4086              	.LVL420:
 4087              		.loc 1 1389 0
 4088 0043 4889EF   		movq	%rbp, %rdi
 4089              		.loc 1 1388 0
 4090 0046 4989C5   		movq	%rax, %r13
 4091              	.LVL421:
 4092              		.loc 1 1389 0
 4093 0049 E8000000 		call	strlen
 4093      00
 4094              	.LVL422:
 4095              		.loc 1 1390 0
 4096 004e 498D7405 		leaq	1(%r13,%rax), %rsi
 4096      01
 4097              		.loc 1 1389 0
 4098 0053 4989C6   		movq	%rax, %r14
 4099              	.LVL423:
 4100              		.loc 1 1390 0
 4101 0056 4C89FF   		movq	%r15, %rdi
 4102 0059 E8000000 		call	realloc
 4102      00
 4103              	.LVL424:
 4104              	.LBB577:
 4105              	.LBB578:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 4106              		.loc 7 53 0
 4107 005e 498D5601 		leaq	1(%r14), %rdx
 4108 0062 4A8D3C28 		leaq	(%rax,%r13), %rdi
 4109              	.LBE578:
 4110              	.LBE577:
 4111              		.loc 1 1390 0
 4112 0066 48894308 		movq	%rax, 8(%rbx)
 4113              	.LVL425:
 4114              	.LBB580:
 4115              	.LBB579:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 4116              		.loc 7 53 0
 4117 006a 4889EE   		movq	%rbp, %rsi
 4118 006d E8000000 		call	memcpy
 4118      00
 4119              	.LVL426:
 4120              	.LBE579:
 4121              	.LBE580:
 4122              		.loc 1 1392 0
 4123 0072 41804C24 		orb	$1, 48(%r12)
 4123      3001
 4124              		.loc 1 1393 0
 4125 0078 4883C408 		addq	$8, %rsp
 4126              		.cfi_def_cfa_offset 56
 4127 007c 5B       		popq	%rbx
 4128              		.cfi_restore 3
 4129              		.cfi_def_cfa_offset 48
 4130              	.LVL427:
 4131 007d 5D       		popq	%rbp
 4132              		.cfi_restore 6
 4133              		.cfi_def_cfa_offset 40
 4134              	.LVL428:
 4135 007e 415C     		popq	%r12
 4136              		.cfi_restore 12
 4137              		.cfi_def_cfa_offset 32
 4138              	.LVL429:
 4139 0080 415D     		popq	%r13
 4140              		.cfi_restore 13
 4141              		.cfi_def_cfa_offset 24
 4142              	.LVL430:
 4143 0082 415E     		popq	%r14
 4144              		.cfi_restore 14
 4145              		.cfi_def_cfa_offset 16
 4146              	.LVL431:
 4147 0084 415F     		popq	%r15
 4148              		.cfi_restore 15
 4149              		.cfi_def_cfa_offset 8
 4150 0086 C3       		ret
 4151              		.cfi_endproc
 4152              	.LFE293:
 4154              		.section	.text.unlikely._ZN14Fl_Preferences4Node3addEPKc
 4155              	.LCOLDE59:
 4156              		.section	.text._ZN14Fl_Preferences4Node3addEPKc
 4157              	.LHOTE59:
 4158              		.section	.text.unlikely._ZN14Fl_Preferences4Node8getEntryEPKc,"ax",@progbits
 4159              		.align 2
 4160              	.LCOLDB60:
 4161              		.section	.text._ZN14Fl_Preferences4Node8getEntryEPKc,"ax",@progbits
 4162              	.LHOTB60:
 4163              		.align 2
 4164              		.p2align 4,,15
 4165              		.globl	_ZN14Fl_Preferences4Node8getEntryEPKc
 4167              	_ZN14Fl_Preferences4Node8getEntryEPKc:
 4168              	.LFB295:
 4169              		.loc 1 1402 0
 4170              		.cfi_startproc
 4171              	.LVL432:
 4172 0000 4155     		pushq	%r13
 4173              		.cfi_def_cfa_offset 16
 4174              		.cfi_offset 13, -16
 4175 0002 4154     		pushq	%r12
 4176              		.cfi_def_cfa_offset 24
 4177              		.cfi_offset 12, -24
 4178              		.loc 1 1408 0
 4179 0004 B8FFFFFF 		movl	$-1, %eax
 4179      FF
 4180              		.loc 1 1402 0
 4181 0009 55       		pushq	%rbp
 4182              		.cfi_def_cfa_offset 32
 4183              		.cfi_offset 6, -32
 4184 000a 53       		pushq	%rbx
 4185              		.cfi_def_cfa_offset 40
 4186              		.cfi_offset 3, -40
 4187 000b 4883EC08 		subq	$8, %rsp
 4188              		.cfi_def_cfa_offset 48
 4189              	.LBB581:
 4190              		.loc 1 1403 0
 4191 000f 448B6F28 		movl	40(%rdi), %r13d
 4192 0013 4585ED   		testl	%r13d, %r13d
 4193 0016 7E2E     		jle	.L330
 4194 0018 4989F4   		movq	%rsi, %r12
 4195 001b 488B6F20 		movq	32(%rdi), %rbp
 4196 001f 31DB     		xorl	%ebx, %ebx
 4197 0021 EB11     		jmp	.L331
 4198              	.LVL433:
 4199              		.p2align 4,,10
 4200 0023 0F1F4400 		.p2align 3
 4200      00
 4201              	.L337:
 4202              		.loc 1 1403 0 is_stmt 0 discriminator 2
 4203 0028 83C301   		addl	$1, %ebx
 4204              	.LVL434:
 4205 002b 4883C510 		addq	$16, %rbp
 4206 002f 4439EB   		cmpl	%r13d, %ebx
 4207 0032 7424     		je	.L336
 4208              	.LVL435:
 4209              	.L331:
 4210              		.loc 1 1404 0 is_stmt 1
 4211 0034 488B7500 		movq	0(%rbp), %rsi
 4212 0038 4C89E7   		movq	%r12, %rdi
 4213 003b E8000000 		call	strcmp
 4213      00
 4214              	.LVL436:
 4215 0040 85C0     		testl	%eax, %eax
 4216 0042 75E4     		jne	.L337
 4217 0044 89D8     		movl	%ebx, %eax
 4218              	.LVL437:
 4219              	.L330:
 4220              	.LBE581:
 4221              		.loc 1 1409 0
 4222 0046 4883C408 		addq	$8, %rsp
 4223              		.cfi_remember_state
 4224              		.cfi_def_cfa_offset 40
 4225 004a 5B       		popq	%rbx
 4226              		.cfi_def_cfa_offset 32
 4227 004b 5D       		popq	%rbp
 4228              		.cfi_def_cfa_offset 24
 4229 004c 415C     		popq	%r12
 4230              		.cfi_def_cfa_offset 16
 4231 004e 415D     		popq	%r13
 4232              		.cfi_def_cfa_offset 8
 4233 0050 C3       		ret
 4234              	.LVL438:
 4235              		.p2align 4,,10
 4236 0051 0F1F8000 		.p2align 3
 4236      000000
 4237              	.L336:
 4238              		.cfi_restore_state
 4239 0058 4883C408 		addq	$8, %rsp
 4240              		.cfi_def_cfa_offset 40
 4241              		.loc 1 1408 0
 4242 005c B8FFFFFF 		movl	$-1, %eax
 4242      FF
 4243              		.loc 1 1409 0
 4244 0061 5B       		popq	%rbx
 4245              		.cfi_def_cfa_offset 32
 4246              	.LVL439:
 4247 0062 5D       		popq	%rbp
 4248              		.cfi_def_cfa_offset 24
 4249 0063 415C     		popq	%r12
 4250              		.cfi_def_cfa_offset 16
 4251              	.LVL440:
 4252 0065 415D     		popq	%r13
 4253              		.cfi_def_cfa_offset 8
 4254 0067 C3       		ret
 4255              		.cfi_endproc
 4256              	.LFE295:
 4258              		.section	.text.unlikely._ZN14Fl_Preferences4Node8getEntryEPKc
 4259              	.LCOLDE60:
 4260              		.section	.text._ZN14Fl_Preferences4Node8getEntryEPKc
 4261              	.LHOTE60:
 4262              		.section	.text.unlikely._ZN14Fl_Preferences11entryExistsEPKc,"ax",@progbits
 4263              		.align 2
 4264              	.LCOLDB61:
 4265              		.section	.text._ZN14Fl_Preferences11entryExistsEPKc,"ax",@progbits
 4266              	.LHOTB61:
 4267              		.align 2
 4268              		.p2align 4,,15
 4269              		.globl	_ZN14Fl_Preferences11entryExistsEPKc
 4271              	_ZN14Fl_Preferences11entryExistsEPKc:
 4272              	.LFB231:
 4273              		.loc 1 466 0
 4274              		.cfi_startproc
 4275              	.LVL441:
 4276 0000 4883EC08 		subq	$8, %rsp
 4277              		.cfi_def_cfa_offset 16
 4278              		.loc 1 467 0
 4279 0004 488B7F08 		movq	8(%rdi), %rdi
 4280              	.LVL442:
 4281 0008 E8000000 		call	_ZN14Fl_Preferences4Node8getEntryEPKc
 4281      00
 4282              	.LVL443:
 4283 000d F7D0     		notl	%eax
 4284              		.loc 1 468 0
 4285 000f 4883C408 		addq	$8, %rsp
 4286              		.cfi_def_cfa_offset 8
 4287              		.loc 1 467 0
 4288 0013 C1E81F   		shrl	$31, %eax
 4289              		.loc 1 468 0
 4290 0016 C3       		ret
 4291              		.cfi_endproc
 4292              	.LFE231:
 4294              		.section	.text.unlikely._ZN14Fl_Preferences11entryExistsEPKc
 4295              	.LCOLDE61:
 4296              		.section	.text._ZN14Fl_Preferences11entryExistsEPKc
 4297              	.LHOTE61:
 4298              		.section	.text.unlikely._ZN14Fl_Preferences4Node3getEPKc,"ax",@progbits
 4299              		.align 2
 4300              	.LCOLDB62:
 4301              		.section	.text._ZN14Fl_Preferences4Node3getEPKc,"ax",@progbits
 4302              	.LHOTB62:
 4303              		.align 2
 4304              		.p2align 4,,15
 4305              		.globl	_ZN14Fl_Preferences4Node3getEPKc
 4307              	_ZN14Fl_Preferences4Node3getEPKc:
 4308              	.LFB294:
 4309              		.loc 1 1396 0
 4310              		.cfi_startproc
 4311              	.LVL444:
 4312 0000 53       		pushq	%rbx
 4313              		.cfi_def_cfa_offset 16
 4314              		.cfi_offset 3, -16
 4315              		.loc 1 1396 0
 4316 0001 4889FB   		movq	%rdi, %rbx
 4317              		.loc 1 1397 0
 4318 0004 E8000000 		call	_ZN14Fl_Preferences4Node8getEntryEPKc
 4318      00
 4319              	.LVL445:
 4320              		.loc 1 1398 0
 4321 0009 85C0     		testl	%eax, %eax
 4322 000b 7813     		js	.L342
 4323              		.loc 1 1398 0 is_stmt 0 discriminator 1
 4324 000d 4898     		cltq
 4325 000f 48C1E004 		salq	$4, %rax
 4326              	.LVL446:
 4327 0013 48034320 		addq	32(%rbx), %rax
 4328              		.loc 1 1399 0 is_stmt 1 discriminator 1
 4329 0017 5B       		popq	%rbx
 4330              		.cfi_remember_state
 4331              		.cfi_def_cfa_offset 8
 4332              	.LVL447:
 4333              		.loc 1 1398 0 discriminator 1
 4334 0018 488B4008 		movq	8(%rax), %rax
 4335              		.loc 1 1399 0 discriminator 1
 4336 001c C3       		ret
 4337              	.LVL448:
 4338 001d 0F1F00   		.p2align 4,,10
 4339              		.p2align 3
 4340              	.L342:
 4341              		.cfi_restore_state
 4342              		.loc 1 1398 0
 4343 0020 31C0     		xorl	%eax, %eax
 4344              	.LVL449:
 4345              		.loc 1 1399 0
 4346 0022 5B       		popq	%rbx
 4347              		.cfi_def_cfa_offset 8
 4348              	.LVL450:
 4349 0023 C3       		ret
 4350              		.cfi_endproc
 4351              	.LFE294:
 4353              		.section	.text.unlikely._ZN14Fl_Preferences4Node3getEPKc
 4354              	.LCOLDE62:
 4355              		.section	.text._ZN14Fl_Preferences4Node3getEPKc
 4356              	.LHOTE62:
 4357              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcRii,"ax",@progbits
 4358              		.align 2
 4359              	.LCOLDB63:
 4360              		.section	.text._ZN14Fl_Preferences3getEPKcRii,"ax",@progbits
 4361              	.LHOTB63:
 4362              		.align 2
 4363              		.p2align 4,,15
 4364              		.globl	_ZN14Fl_Preferences3getEPKcRii
 4366              	_ZN14Fl_Preferences3getEPKcRii:
 4367              	.LFB235:
 4368              		.loc 1 509 0
 4369              		.cfi_startproc
 4370              	.LVL451:
 4371 0000 4154     		pushq	%r12
 4372              		.cfi_def_cfa_offset 16
 4373              		.cfi_offset 12, -16
 4374 0002 55       		pushq	%rbp
 4375              		.cfi_def_cfa_offset 24
 4376              		.cfi_offset 6, -24
 4377 0003 89CD     		movl	%ecx, %ebp
 4378 0005 53       		pushq	%rbx
 4379              		.cfi_def_cfa_offset 32
 4380              		.cfi_offset 3, -32
 4381              		.loc 1 510 0
 4382 0006 4C8B6708 		movq	8(%rdi), %r12
 4383              	.LVL452:
 4384              		.loc 1 509 0
 4385 000a 4889D3   		movq	%rdx, %rbx
 4386              	.LBB582:
 4387              	.LBB583:
 4388              		.loc 1 1397 0
 4389 000d 4C89E7   		movq	%r12, %rdi
 4390              	.LVL453:
 4391 0010 E8000000 		call	_ZN14Fl_Preferences4Node8getEntryEPKc
 4391      00
 4392              	.LVL454:
 4393              		.loc 1 1398 0
 4394 0015 85C0     		testl	%eax, %eax
 4395 0017 7837     		js	.L347
 4396 0019 4898     		cltq
 4397 001b 48C1E004 		salq	$4, %rax
 4398              	.LVL455:
 4399 001f 49034424 		addq	32(%r12), %rax
 4399      20
 4400 0024 488B7808 		movq	8(%rax), %rdi
 4401              	.LVL456:
 4402              	.LBE583:
 4403              	.LBE582:
 4404              		.loc 1 511 0
 4405 0028 4885FF   		testq	%rdi, %rdi
 4406 002b 7423     		je	.L347
 4407              	.LBB584:
 4408              	.LBB585:
 4409              		.file 8 "/usr/include/stdlib.h"
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
 4410              		.loc 8 280 0
 4411 002d BA0A0000 		movl	$10, %edx
 4411      00
 4412 0032 31F6     		xorl	%esi, %esi
 4413 0034 E8000000 		call	strtol
 4413      00
 4414              	.LVL457:
 4415 0039 89C1     		movl	%eax, %ecx
 4416              	.LBE585:
 4417              	.LBE584:
 4418 003b B8010000 		movl	$1, %eax
 4418      00
 4419              		.loc 1 511 0
 4420 0040 890B     		movl	%ecx, (%rbx)
 4421              		.loc 1 513 0
 4422 0042 5B       		popq	%rbx
 4423              		.cfi_remember_state
 4424              		.cfi_def_cfa_offset 24
 4425              	.LVL458:
 4426 0043 5D       		popq	%rbp
 4427              		.cfi_def_cfa_offset 16
 4428              	.LVL459:
 4429 0044 415C     		popq	%r12
 4430              		.cfi_def_cfa_offset 8
 4431 0046 C3       		ret
 4432              	.LVL460:
 4433 0047 660F1F84 		.p2align 4,,10
 4433      00000000 
 4433      00
 4434              		.p2align 3
 4435              	.L347:
 4436              		.cfi_restore_state
 4437              		.loc 1 511 0
 4438 0050 89E9     		movl	%ebp, %ecx
 4439 0052 31C0     		xorl	%eax, %eax
 4440 0054 890B     		movl	%ecx, (%rbx)
 4441              		.loc 1 513 0
 4442 0056 5B       		popq	%rbx
 4443              		.cfi_def_cfa_offset 24
 4444              	.LVL461:
 4445 0057 5D       		popq	%rbp
 4446              		.cfi_def_cfa_offset 16
 4447              	.LVL462:
 4448 0058 415C     		popq	%r12
 4449              		.cfi_def_cfa_offset 8
 4450 005a C3       		ret
 4451              		.cfi_endproc
 4452              	.LFE235:
 4454              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcRii
 4455              	.LCOLDE63:
 4456              		.section	.text._ZN14Fl_Preferences3getEPKcRii
 4457              	.LHOTE63:
 4458              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcRff,"ax",@progbits
 4459              		.align 2
 4460              	.LCOLDB64:
 4461              		.section	.text._ZN14Fl_Preferences3getEPKcRff,"ax",@progbits
 4462              	.LHOTB64:
 4463              		.align 2
 4464              		.p2align 4,,15
 4465              		.globl	_ZN14Fl_Preferences3getEPKcRff
 4467              	_ZN14Fl_Preferences3getEPKcRff:
 4468              	.LFB237:
 4469              		.loc 1 541 0
 4470              		.cfi_startproc
 4471              	.LVL463:
 4472 0000 55       		pushq	%rbp
 4473              		.cfi_def_cfa_offset 16
 4474              		.cfi_offset 6, -16
 4475 0001 53       		pushq	%rbx
 4476              		.cfi_def_cfa_offset 24
 4477              		.cfi_offset 3, -24
 4478 0002 4889D5   		movq	%rdx, %rbp
 4479 0005 4883EC18 		subq	$24, %rsp
 4480              		.cfi_def_cfa_offset 48
 4481              		.loc 1 542 0
 4482 0009 488B5F08 		movq	8(%rdi), %rbx
 4483              	.LVL464:
 4484              		.loc 1 541 0
 4485 000d F30F1144 		movss	%xmm0, 12(%rsp)
 4485      240C
 4486              	.LBB586:
 4487              	.LBB587:
 4488              		.loc 1 1397 0
 4489 0013 4889DF   		movq	%rbx, %rdi
 4490              	.LVL465:
 4491 0016 E8000000 		call	_ZN14Fl_Preferences4Node8getEntryEPKc
 4491      00
 4492              	.LVL466:
 4493              		.loc 1 1398 0
 4494 001b 85C0     		testl	%eax, %eax
 4495 001d 7831     		js	.L352
 4496 001f 4898     		cltq
 4497 0021 48C1E004 		salq	$4, %rax
 4498              	.LVL467:
 4499 0025 48034320 		addq	32(%rbx), %rax
 4500 0029 488B7808 		movq	8(%rax), %rdi
 4501              	.LVL468:
 4502              	.LBE587:
 4503              	.LBE586:
 4504              		.loc 1 543 0
 4505 002d 4885FF   		testq	%rdi, %rdi
 4506 0030 741E     		je	.L352
 4507              	.LBB588:
 4508              	.LBB589:
 4509              		.file 9 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h"
   1:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** /* Floating-point inline functions for stdlib.h.
   2:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    Copyright (C) 2012-2016 Free Software Foundation, Inc.
   3:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    This file is part of the GNU C Library.
   4:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** 
   5:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    The GNU C Library is free software; you can redistribute it and/or
   6:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    modify it under the terms of the GNU Lesser General Public
   7:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    License as published by the Free Software Foundation; either
   8:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    version 2.1 of the License, or (at your option) any later version.
   9:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** 
  10:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    The GNU C Library is distributed in the hope that it will be useful,
  11:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  12:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  13:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    Lesser General Public License for more details.
  14:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** 
  15:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    You should have received a copy of the GNU Lesser General Public
  16:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    License along with the GNU C Library; if not, see
  17:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****    <http://www.gnu.org/licenses/>.  */
  18:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** 
  19:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** #ifndef _STDLIB_H
  20:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** # error "Never use <bits/stdlib-float.h> directly; include <stdlib.h> instead."
  21:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** #endif
  22:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** 
  23:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** #ifdef __USE_EXTERN_INLINES
  24:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** __BEGIN_NAMESPACE_STD
  25:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** __extern_inline double
  26:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** __NTH (atof (const char *__nptr))
  27:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h **** {
  28:/usr/include/x86_64-linux-gnu/bits/stdlib-float.h ****   return strtod (__nptr, (char **) NULL);
 4510              		.loc 9 28 0
 4511 0032 31F6     		xorl	%esi, %esi
 4512 0034 E8000000 		call	strtod
 4512      00
 4513              	.LVL469:
 4514              	.LBE589:
 4515              	.LBE588:
 4516              		.loc 1 543 0
 4517 0039 F20F5AC0 		cvtsd2ss	%xmm0, %xmm0
 4518 003d F30F1145 		movss	%xmm0, 0(%rbp)
 4518      00
 4519              		.loc 1 545 0
 4520 0042 4883C418 		addq	$24, %rsp
 4521              		.cfi_remember_state
 4522              		.cfi_def_cfa_offset 24
 4523 0046 B8010000 		movl	$1, %eax
 4523      00
 4524 004b 5B       		popq	%rbx
 4525              		.cfi_def_cfa_offset 16
 4526 004c 5D       		popq	%rbp
 4527              		.cfi_def_cfa_offset 8
 4528              	.LVL470:
 4529 004d C3       		ret
 4530              	.LVL471:
 4531 004e 6690     		.p2align 4,,10
 4532              		.p2align 3
 4533              	.L352:
 4534              		.cfi_restore_state
 4535              		.loc 1 543 0
 4536 0050 F30F1044 		movss	12(%rsp), %xmm0
 4536      240C
 4537 0056 31C0     		xorl	%eax, %eax
 4538 0058 F30F1145 		movss	%xmm0, 0(%rbp)
 4538      00
 4539              		.loc 1 545 0
 4540 005d 4883C418 		addq	$24, %rsp
 4541              		.cfi_def_cfa_offset 24
 4542 0061 5B       		popq	%rbx
 4543              		.cfi_def_cfa_offset 16
 4544 0062 5D       		popq	%rbp
 4545              		.cfi_def_cfa_offset 8
 4546              	.LVL472:
 4547 0063 C3       		ret
 4548              		.cfi_endproc
 4549              	.LFE237:
 4551              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcRff
 4552              	.LCOLDE64:
 4553              		.section	.text._ZN14Fl_Preferences3getEPKcRff
 4554              	.LHOTE64:
 4555              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcRdd,"ax",@progbits
 4556              		.align 2
 4557              	.LCOLDB65:
 4558              		.section	.text._ZN14Fl_Preferences3getEPKcRdd,"ax",@progbits
 4559              	.LHOTB65:
 4560              		.align 2
 4561              		.p2align 4,,15
 4562              		.globl	_ZN14Fl_Preferences3getEPKcRdd
 4564              	_ZN14Fl_Preferences3getEPKcRdd:
 4565              	.LFB240:
 4566              		.loc 1 590 0
 4567              		.cfi_startproc
 4568              	.LVL473:
 4569 0000 55       		pushq	%rbp
 4570              		.cfi_def_cfa_offset 16
 4571              		.cfi_offset 6, -16
 4572 0001 53       		pushq	%rbx
 4573              		.cfi_def_cfa_offset 24
 4574              		.cfi_offset 3, -24
 4575 0002 4889D5   		movq	%rdx, %rbp
 4576 0005 4883EC18 		subq	$24, %rsp
 4577              		.cfi_def_cfa_offset 48
 4578              		.loc 1 591 0
 4579 0009 488B5F08 		movq	8(%rdi), %rbx
 4580              	.LVL474:
 4581              		.loc 1 590 0
 4582 000d F20F1144 		movsd	%xmm0, 8(%rsp)
 4582      2408
 4583              	.LBB590:
 4584              	.LBB591:
 4585              		.loc 1 1397 0
 4586 0013 4889DF   		movq	%rbx, %rdi
 4587              	.LVL475:
 4588 0016 E8000000 		call	_ZN14Fl_Preferences4Node8getEntryEPKc
 4588      00
 4589              	.LVL476:
 4590              		.loc 1 1398 0
 4591 001b 85C0     		testl	%eax, %eax
 4592 001d 7831     		js	.L357
 4593 001f 4898     		cltq
 4594 0021 48C1E004 		salq	$4, %rax
 4595              	.LVL477:
 4596 0025 48034320 		addq	32(%rbx), %rax
 4597 0029 488B7808 		movq	8(%rax), %rdi
 4598              	.LVL478:
 4599              	.LBE591:
 4600              	.LBE590:
 4601              		.loc 1 592 0
 4602 002d 4885FF   		testq	%rdi, %rdi
 4603 0030 741E     		je	.L357
 4604              	.LBB592:
 4605              	.LBB593:
 4606              		.loc 9 28 0
 4607 0032 31F6     		xorl	%esi, %esi
 4608 0034 E8000000 		call	strtod
 4608      00
 4609              	.LVL479:
 4610              	.LBE593:
 4611              	.LBE592:
 4612              		.loc 1 592 0
 4613 0039 F20F1145 		movsd	%xmm0, 0(%rbp)
 4613      00
 4614              		.loc 1 594 0
 4615 003e 4883C418 		addq	$24, %rsp
 4616              		.cfi_remember_state
 4617              		.cfi_def_cfa_offset 24
 4618 0042 B8010000 		movl	$1, %eax
 4618      00
 4619 0047 5B       		popq	%rbx
 4620              		.cfi_def_cfa_offset 16
 4621 0048 5D       		popq	%rbp
 4622              		.cfi_def_cfa_offset 8
 4623              	.LVL480:
 4624 0049 C3       		ret
 4625              	.LVL481:
 4626 004a 660F1F44 		.p2align 4,,10
 4626      0000
 4627              		.p2align 3
 4628              	.L357:
 4629              		.cfi_restore_state
 4630              		.loc 1 592 0
 4631 0050 F20F1044 		movsd	8(%rsp), %xmm0
 4631      2408
 4632 0056 31C0     		xorl	%eax, %eax
 4633 0058 F20F1145 		movsd	%xmm0, 0(%rbp)
 4633      00
 4634              		.loc 1 594 0
 4635 005d 4883C418 		addq	$24, %rsp
 4636              		.cfi_def_cfa_offset 24
 4637 0061 5B       		popq	%rbx
 4638              		.cfi_def_cfa_offset 16
 4639 0062 5D       		popq	%rbp
 4640              		.cfi_def_cfa_offset 8
 4641              	.LVL482:
 4642 0063 C3       		ret
 4643              		.cfi_endproc
 4644              	.LFE240:
 4646              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcRdd
 4647              	.LCOLDE65:
 4648              		.section	.text._ZN14Fl_Preferences3getEPKcRdd
 4649              	.LHOTE65:
 4650              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcPcS1_i,"ax",@progbits
 4651              		.align 2
 4652              	.LCOLDB66:
 4653              		.section	.text._ZN14Fl_Preferences3getEPKcPcS1_i,"ax",@progbits
 4654              	.LHOTB66:
 4655              		.align 2
 4656              		.p2align 4,,15
 4657              		.globl	_ZN14Fl_Preferences3getEPKcPcS1_i
 4659              	_ZN14Fl_Preferences3getEPKcPcS1_i:
 4660              	.LFB244:
 4661              		.loc 1 672 0
 4662              		.cfi_startproc
 4663              	.LVL483:
 4664 0000 4155     		pushq	%r13
 4665              		.cfi_def_cfa_offset 16
 4666              		.cfi_offset 13, -16
 4667 0002 4154     		pushq	%r12
 4668              		.cfi_def_cfa_offset 24
 4669              		.cfi_offset 12, -24
 4670 0004 4989CC   		movq	%rcx, %r12
 4671 0007 55       		pushq	%rbp
 4672              		.cfi_def_cfa_offset 32
 4673              		.cfi_offset 6, -32
 4674 0008 53       		pushq	%rbx
 4675              		.cfi_def_cfa_offset 40
 4676              		.cfi_offset 3, -40
 4677 0009 4889D5   		movq	%rdx, %rbp
 4678 000c 4489C3   		movl	%r8d, %ebx
 4679 000f 4883EC08 		subq	$8, %rsp
 4680              		.cfi_def_cfa_offset 48
 4681              		.loc 1 673 0
 4682 0013 4C8B6F08 		movq	8(%rdi), %r13
 4683              	.LVL484:
 4684              	.LBB594:
 4685              	.LBB595:
 4686              		.loc 1 1397 0
 4687 0017 4C89EF   		movq	%r13, %rdi
 4688              	.LVL485:
 4689 001a E8000000 		call	_ZN14Fl_Preferences4Node8getEntryEPKc
 4689      00
 4690              	.LVL486:
 4691              		.loc 1 1398 0
 4692 001f 85C0     		testl	%eax, %eax
 4693 0021 787D     		js	.L360
 4694 0023 4898     		cltq
 4695 0025 48C1E004 		salq	$4, %rax
 4696              	.LVL487:
 4697 0029 49034520 		addq	32(%r13), %rax
 4698 002d 4C8B6808 		movq	8(%rax), %r13
 4699              	.LVL488:
 4700              	.LBE595:
 4701              	.LBE594:
 4702              	.LBB596:
 4703              		.loc 1 674 0
 4704 0031 4D85ED   		testq	%r13, %r13
 4705 0034 746A     		je	.L360
 4706              	.LVL489:
 4707              	.LBB597:
 4708              	.LBB598:
 226:/usr/include/string.h **** }
 4709              		.loc 6 226 0
 4710 0036 BE5C0000 		movl	$92, %esi
 4710      00
 4711 003b 4C89EF   		movq	%r13, %rdi
 4712 003e E8000000 		call	strchr
 4712      00
 4713              	.LVL490:
 4714              	.LBE598:
 4715              	.LBE597:
 4716              		.loc 1 674 0
 4717 0043 4885C0   		testq	%rax, %rax
 4718 0046 7438     		je	.L361
 4719              	.LBB599:
 4720              		.loc 1 675 0
 4721 0048 4C89EF   		movq	%r13, %rdi
 4722 004b E8000000 		call	_ZL10decodeTextPKc
 4722      00
 4723              	.LVL491:
 4724              		.loc 1 676 0
 4725 0050 4863D3   		movslq	%ebx, %rdx
 4726              		.loc 1 675 0
 4727 0053 4989C4   		movq	%rax, %r12
 4728              	.LVL492:
 4729              		.loc 1 676 0
 4730 0056 4889EF   		movq	%rbp, %rdi
 4731 0059 4889C6   		movq	%rax, %rsi
 4732 005c E8000000 		call	fl_strlcpy
 4732      00
 4733              	.LVL493:
 4734              		.loc 1 677 0
 4735 0061 4C89E7   		movq	%r12, %rdi
 4736 0064 E8000000 		call	free
 4736      00
 4737              	.LVL494:
 4738              	.LBE599:
 4739              	.LBE596:
 4740              		.loc 1 684 0
 4741 0069 4883C408 		addq	$8, %rsp
 4742              		.cfi_remember_state
 4743              		.cfi_def_cfa_offset 40
 4744              	.LBB601:
 4745              	.LBB600:
 4746              		.loc 1 678 0
 4747 006d B8010000 		movl	$1, %eax
 4747      00
 4748              	.LBE600:
 4749              	.LBE601:
 4750              		.loc 1 684 0
 4751 0072 5B       		popq	%rbx
 4752              		.cfi_def_cfa_offset 32
 4753              	.LVL495:
 4754 0073 5D       		popq	%rbp
 4755              		.cfi_def_cfa_offset 24
 4756              	.LVL496:
 4757 0074 415C     		popq	%r12
 4758              		.cfi_def_cfa_offset 16
 4759              	.LVL497:
 4760 0076 415D     		popq	%r13
 4761              		.cfi_def_cfa_offset 8
 4762 0078 C3       		ret
 4763              	.LVL498:
 4764              	.L372:
 4765              		.cfi_restore_state
 4766 0079 4D89E5   		movq	%r12, %r13
 4767              	.LVL499:
 4768 007c 0F1F4000 		.p2align 4,,10
 4769              		.p2align 3
 4770              	.L361:
 4771              		.loc 1 681 0 discriminator 1
 4772 0080 4863D3   		movslq	%ebx, %rdx
 4773 0083 4C89EE   		movq	%r13, %rsi
 4774 0086 4889EF   		movq	%rbp, %rdi
 4775 0089 E8000000 		call	fl_strlcpy
 4775      00
 4776              	.LVL500:
 4777              	.L364:
 4778              		.loc 1 683 0
 4779 008e 4D39EC   		cmpq	%r13, %r12
 4780 0091 0F95C0   		setne	%al
 4781              		.loc 1 684 0
 4782 0094 4883C408 		addq	$8, %rsp
 4783              		.cfi_remember_state
 4784              		.cfi_def_cfa_offset 40
 4785 0098 5B       		popq	%rbx
 4786              		.cfi_def_cfa_offset 32
 4787              	.LVL501:
 4788 0099 5D       		popq	%rbp
 4789              		.cfi_def_cfa_offset 24
 4790              	.LVL502:
 4791 009a 415C     		popq	%r12
 4792              		.cfi_def_cfa_offset 16
 4793              	.LVL503:
 4794 009c 415D     		popq	%r13
 4795              		.cfi_def_cfa_offset 8
 4796 009e C3       		ret
 4797              	.LVL504:
 4798 009f 90       		.p2align 4,,10
 4799              		.p2align 3
 4800              	.L360:
 4801              		.cfi_restore_state
 4802              		.loc 1 681 0
 4803 00a0 4D85E4   		testq	%r12, %r12
 4804 00a3 75D4     		jne	.L372
 4805              		.loc 1 682 0
 4806 00a5 C6450000 		movb	$0, 0(%rbp)
 4807 00a9 4531ED   		xorl	%r13d, %r13d
 4808 00ac EBE0     		jmp	.L364
 4809              		.cfi_endproc
 4810              	.LFE244:
 4812              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcPcS1_i
 4813              	.LCOLDE66:
 4814              		.section	.text._ZN14Fl_Preferences3getEPKcPcS1_i
 4815              	.LHOTE66:
 4816              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcRPcS1_,"ax",@progbits
 4817              		.align 2
 4818              	.LCOLDB67:
 4819              		.section	.text._ZN14Fl_Preferences3getEPKcRPcS1_,"ax",@progbits
 4820              	.LHOTB67:
 4821              		.align 2
 4822              		.p2align 4,,15
 4823              		.globl	_ZN14Fl_Preferences3getEPKcRPcS1_
 4825              	_ZN14Fl_Preferences3getEPKcRPcS1_:
 4826              	.LFB245:
 4827              		.loc 1 698 0
 4828              		.cfi_startproc
 4829              	.LVL505:
 4830 0000 4154     		pushq	%r12
 4831              		.cfi_def_cfa_offset 16
 4832              		.cfi_offset 12, -16
 4833 0002 55       		pushq	%rbp
 4834              		.cfi_def_cfa_offset 24
 4835              		.cfi_offset 6, -24
 4836 0003 4889CD   		movq	%rcx, %rbp
 4837 0006 53       		pushq	%rbx
 4838              		.cfi_def_cfa_offset 32
 4839              		.cfi_offset 3, -32
 4840              		.loc 1 699 0
 4841 0007 4C8B6708 		movq	8(%rdi), %r12
 4842              	.LVL506:
 4843              		.loc 1 698 0
 4844 000b 4889D3   		movq	%rdx, %rbx
 4845              	.LBB602:
 4846              	.LBB603:
 4847              		.loc 1 1397 0
 4848 000e 4C89E7   		movq	%r12, %rdi
 4849              	.LVL507:
 4850 0011 E8000000 		call	_ZN14Fl_Preferences4Node8getEntryEPKc
 4850      00
 4851              	.LVL508:
 4852              		.loc 1 1398 0
 4853 0016 85C0     		testl	%eax, %eax
 4854 0018 7866     		js	.L374
 4855 001a 4898     		cltq
 4856 001c 48C1E004 		salq	$4, %rax
 4857              	.LVL509:
 4858 0020 49034424 		addq	32(%r12), %rax
 4858      20
 4859 0025 4C8B6008 		movq	8(%rax), %r12
 4860              	.LVL510:
 4861              	.LBE603:
 4862              	.LBE602:
 4863              		.loc 1 700 0
 4864 0029 4D85E4   		testq	%r12, %r12
 4865 002c 7452     		je	.L374
 4866              	.LVL511:
 4867              	.LBB604:
 4868              	.LBB605:
 226:/usr/include/string.h **** }
 4869              		.loc 6 226 0
 4870 002e BE5C0000 		movl	$92, %esi
 4870      00
 4871 0033 4C89E7   		movq	%r12, %rdi
 4872 0036 E8000000 		call	strchr
 4872      00
 4873              	.LVL512:
 4874              	.LBE605:
 4875              	.LBE604:
 4876              		.loc 1 700 0
 4877 003b 4885C0   		testq	%rax, %rax
 4878 003e 7420     		je	.L375
 4879              		.loc 1 701 0
 4880 0040 4C89E7   		movq	%r12, %rdi
 4881 0043 E8000000 		call	_ZL10decodeTextPKc
 4881      00
 4882              	.LVL513:
 4883 0048 488903   		movq	%rax, (%rbx)
 4884              		.loc 1 702 0
 4885 004b B8010000 		movl	$1, %eax
 4885      00
 4886              		.loc 1 710 0
 4887 0050 5B       		popq	%rbx
 4888              		.cfi_remember_state
 4889              		.cfi_def_cfa_offset 24
 4890              	.LVL514:
 4891 0051 5D       		popq	%rbp
 4892              		.cfi_def_cfa_offset 16
 4893              	.LVL515:
 4894 0052 415C     		popq	%r12
 4895              		.cfi_def_cfa_offset 8
 4896 0054 C3       		ret
 4897              	.LVL516:
 4898              	.L386:
 4899              		.cfi_restore_state
 4900 0055 4989EC   		movq	%rbp, %r12
 4901              	.LVL517:
 4902 0058 0F1F8400 		.p2align 4,,10
 4902      00000000 
 4903              		.p2align 3
 4904              	.L375:
 4905              		.loc 1 706 0
 4906 0060 4C89E7   		movq	%r12, %rdi
 4907 0063 E8000000 		call	strdup
 4907      00
 4908              	.LVL518:
 4909 0068 488903   		movq	%rax, (%rbx)
 4910              	.LVL519:
 4911              	.L378:
 4912              		.loc 1 709 0
 4913 006b 4C39E5   		cmpq	%r12, %rbp
 4914              		.loc 1 710 0
 4915 006e 5B       		popq	%rbx
 4916              		.cfi_remember_state
 4917              		.cfi_def_cfa_offset 24
 4918              	.LVL520:
 4919              		.loc 1 709 0
 4920 006f 0F95C0   		setne	%al
 4921              		.loc 1 710 0
 4922 0072 5D       		popq	%rbp
 4923              		.cfi_def_cfa_offset 16
 4924              	.LVL521:
 4925 0073 415C     		popq	%r12
 4926              		.cfi_def_cfa_offset 8
 4927 0075 C3       		ret
 4928              	.LVL522:
 4929 0076 662E0F1F 		.p2align 4,,10
 4929      84000000 
 4929      0000
 4930              		.p2align 3
 4931              	.L374:
 4932              		.cfi_restore_state
 4933              		.loc 1 705 0
 4934 0080 4885ED   		testq	%rbp, %rbp
 4935 0083 75D0     		jne	.L386
 4936              		.loc 1 708 0
 4937 0085 48C70300 		movq	$0, (%rbx)
 4937      000000
 4938 008c 4531E4   		xorl	%r12d, %r12d
 4939 008f EBDA     		jmp	.L378
 4940              		.cfi_endproc
 4941              	.LFE245:
 4943              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcRPcS1_
 4944              	.LCOLDE67:
 4945              		.section	.text._ZN14Fl_Preferences3getEPKcRPcS1_
 4946              	.LHOTE67:
 4947              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcPvPKvii,"ax",@progbits
 4948              		.align 2
 4949              	.LCOLDB68:
 4950              		.section	.text._ZN14Fl_Preferences3getEPKcPvPKvii,"ax",@progbits
 4951              	.LHOTB68:
 4952              		.align 2
 4953              		.p2align 4,,15
 4954              		.globl	_ZN14Fl_Preferences3getEPKcPvPKvii
 4956              	_ZN14Fl_Preferences3getEPKcPvPKvii:
 4957              	.LFB248:
 4958              		.loc 1 778 0
 4959              		.cfi_startproc
 4960              	.LVL523:
 4961 0000 4156     		pushq	%r14
 4962              		.cfi_def_cfa_offset 16
 4963              		.cfi_offset 14, -16
 4964 0002 4155     		pushq	%r13
 4965              		.cfi_def_cfa_offset 24
 4966              		.cfi_offset 13, -24
 4967 0004 4589C5   		movl	%r8d, %r13d
 4968 0007 4154     		pushq	%r12
 4969              		.cfi_def_cfa_offset 32
 4970              		.cfi_offset 12, -32
 4971 0009 55       		pushq	%rbp
 4972              		.cfi_def_cfa_offset 40
 4973              		.cfi_offset 6, -40
 4974 000a 4989CC   		movq	%rcx, %r12
 4975 000d 53       		pushq	%rbx
 4976              		.cfi_def_cfa_offset 48
 4977              		.cfi_offset 3, -48
 4978 000e 4889D5   		movq	%rdx, %rbp
 4979 0011 4489CB   		movl	%r9d, %ebx
 4980 0014 4883EC10 		subq	$16, %rsp
 4981              		.cfi_def_cfa_offset 64
 4982              		.loc 1 779 0
 4983 0018 4C8B7708 		movq	8(%rdi), %r14
 4984              	.LVL524:
 4985              		.loc 1 778 0
 4986 001c 64488B04 		movq	%fs:40, %rax
 4986      25280000 
 4986      00
 4987 0025 48894424 		movq	%rax, 8(%rsp)
 4987      08
 4988 002a 31C0     		xorl	%eax, %eax
 4989              	.LBB606:
 4990              	.LBB607:
 4991              		.loc 1 1397 0
 4992 002c 4C89F7   		movq	%r14, %rdi
 4993              	.LVL525:
 4994 002f E8000000 		call	_ZN14Fl_Preferences4Node8getEntryEPKc
 4994      00
 4995              	.LVL526:
 4996              		.loc 1 1398 0
 4997 0034 85C0     		testl	%eax, %eax
 4998 0036 7868     		js	.L388
 4999 0038 4898     		cltq
 5000 003a 48C1E004 		salq	$4, %rax
 5001              	.LVL527:
 5002 003e 49034620 		addq	32(%r14), %rax
 5003 0042 488B7808 		movq	8(%rax), %rdi
 5004              	.LVL528:
 5005              	.LBE607:
 5006              	.LBE606:
 5007              	.LBB608:
 5008              		.loc 1 780 0
 5009 0046 4885FF   		testq	%rdi, %rdi
 5010 0049 7455     		je	.L388
 5011              	.LBB609:
 5012              		.loc 1 782 0
 5013 004b 488D7424 		leaq	4(%rsp), %rsi
 5013      04
 5014              		.loc 1 785 0
 5015 0050 41BE0100 		movl	$1, %r14d
 5015      0000
 5016              		.loc 1 782 0
 5017 0056 E8000000 		call	_ZL9decodeHexPKcRi
 5017      00
 5018              	.LVL529:
 5019              	.LBB610:
 5020              	.LBB611:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 5021              		.loc 7 59 0
 5022 005b 395C2404 		cmpl	%ebx, 4(%rsp)
 5023              	.LBE611:
 5024              	.LBE610:
 5025              		.loc 1 782 0
 5026 005f 4989C4   		movq	%rax, %r12
 5027              	.LVL530:
 5028              	.LBB613:
 5029              	.LBB612:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 5030              		.loc 7 59 0
 5031 0062 4889C6   		movq	%rax, %rsi
 5032 0065 0F4E5C24 		cmovle	4(%rsp), %ebx
 5032      04
 5033              	.LVL531:
 5034 006a 4889EF   		movq	%rbp, %rdi
 5035 006d 4863D3   		movslq	%ebx, %rdx
 5036 0070 E8000000 		call	memmove
 5036      00
 5037              	.LVL532:
 5038              	.LBE612:
 5039              	.LBE613:
 5040              		.loc 1 784 0
 5041 0075 4C89E7   		movq	%r12, %rdi
 5042 0078 E8000000 		call	free
 5042      00
 5043              	.LVL533:
 5044              	.L389:
 5045              	.LBE609:
 5046              	.LBE608:
 5047              		.loc 1 790 0 discriminator 1
 5048 007d 488B4C24 		movq	8(%rsp), %rcx
 5048      08
 5049 0082 6448330C 		xorq	%fs:40, %rcx
 5049      25280000 
 5049      00
 5050 008b 4489F0   		movl	%r14d, %eax
 5051 008e 752F     		jne	.L397
 5052              		.loc 1 790 0 is_stmt 0
 5053 0090 4883C410 		addq	$16, %rsp
 5054              		.cfi_remember_state
 5055              		.cfi_def_cfa_offset 48
 5056 0094 5B       		popq	%rbx
 5057              		.cfi_def_cfa_offset 40
 5058 0095 5D       		popq	%rbp
 5059              		.cfi_def_cfa_offset 32
 5060              	.LVL534:
 5061 0096 415C     		popq	%r12
 5062              		.cfi_def_cfa_offset 24
 5063 0098 415D     		popq	%r13
 5064              		.cfi_def_cfa_offset 16
 5065              	.LVL535:
 5066 009a 415E     		popq	%r14
 5067              		.cfi_def_cfa_offset 8
 5068 009c C3       		ret
 5069              	.LVL536:
 5070 009d 0F1F00   		.p2align 4,,10
 5071              		.p2align 3
 5072              	.L388:
 5073              		.cfi_restore_state
 5074              		.loc 1 789 0 is_stmt 1
 5075 00a0 4531F6   		xorl	%r14d, %r14d
 5076              		.loc 1 787 0
 5077 00a3 4D85E4   		testq	%r12, %r12
 5078 00a6 74D5     		je	.L389
 5079              	.LVL537:
 5080              	.LBB614:
 5081              	.LBB615:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 5082              		.loc 7 59 0
 5083 00a8 4439EB   		cmpl	%r13d, %ebx
 5084 00ab 4C89E6   		movq	%r12, %rsi
 5085 00ae 4889EF   		movq	%rbp, %rdi
 5086 00b1 410F4FDD 		cmovg	%r13d, %ebx
 5087              	.LVL538:
 5088 00b5 4863D3   		movslq	%ebx, %rdx
 5089 00b8 E8000000 		call	memmove
 5089      00
 5090              	.LVL539:
 5091 00bd EBBE     		jmp	.L389
 5092              	.LVL540:
 5093              	.L397:
 5094              	.LBE615:
 5095              	.LBE614:
 5096              		.loc 1 790 0
 5097 00bf E8000000 		call	__stack_chk_fail
 5097      00
 5098              	.LVL541:
 5099              		.cfi_endproc
 5100              	.LFE248:
 5102              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcPvPKvii
 5103              	.LCOLDE68:
 5104              		.section	.text._ZN14Fl_Preferences3getEPKcPvPKvii
 5105              	.LHOTE68:
 5106              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcRPvPKvi,"ax",@progbits
 5107              		.align 2
 5108              	.LCOLDB69:
 5109              		.section	.text._ZN14Fl_Preferences3getEPKcRPvPKvi,"ax",@progbits
 5110              	.LHOTB69:
 5111              		.align 2
 5112              		.p2align 4,,15
 5113              		.globl	_ZN14Fl_Preferences3getEPKcRPvPKvi
 5115              	_ZN14Fl_Preferences3getEPKcRPvPKvi:
 5116              	.LFB249:
 5117              		.loc 1 805 0
 5118              		.cfi_startproc
 5119              	.LVL542:
 5120 0000 4155     		pushq	%r13
 5121              		.cfi_def_cfa_offset 16
 5122              		.cfi_offset 13, -16
 5123 0002 4154     		pushq	%r12
 5124              		.cfi_def_cfa_offset 24
 5125              		.cfi_offset 12, -24
 5126 0004 4D63E0   		movslq	%r8d, %r12
 5127 0007 55       		pushq	%rbp
 5128              		.cfi_def_cfa_offset 32
 5129              		.cfi_offset 6, -32
 5130 0008 53       		pushq	%rbx
 5131              		.cfi_def_cfa_offset 40
 5132              		.cfi_offset 3, -40
 5133 0009 4889CD   		movq	%rcx, %rbp
 5134 000c 4889D3   		movq	%rdx, %rbx
 5135 000f 4883EC18 		subq	$24, %rsp
 5136              		.cfi_def_cfa_offset 64
 5137              		.loc 1 806 0
 5138 0013 4C8B6F08 		movq	8(%rdi), %r13
 5139              	.LVL543:
 5140              		.loc 1 805 0
 5141 0017 64488B04 		movq	%fs:40, %rax
 5141      25280000 
 5141      00
 5142 0020 48894424 		movq	%rax, 8(%rsp)
 5142      08
 5143 0025 31C0     		xorl	%eax, %eax
 5144              	.LBB616:
 5145              	.LBB617:
 5146              		.loc 1 1397 0
 5147 0027 4C89EF   		movq	%r13, %rdi
 5148              	.LVL544:
 5149 002a E8000000 		call	_ZN14Fl_Preferences4Node8getEntryEPKc
 5149      00
 5150              	.LVL545:
 5151              		.loc 1 1398 0
 5152 002f 85C0     		testl	%eax, %eax
 5153 0031 7845     		js	.L399
 5154 0033 4898     		cltq
 5155 0035 48C1E004 		salq	$4, %rax
 5156              	.LVL546:
 5157 0039 49034520 		addq	32(%r13), %rax
 5158 003d 488B7808 		movq	8(%rax), %rdi
 5159              	.LVL547:
 5160              	.LBE617:
 5161              	.LBE616:
 5162              	.LBB618:
 5163              		.loc 1 807 0
 5164 0041 4885FF   		testq	%rdi, %rdi
 5165 0044 7432     		je	.L399
 5166              	.LBB619:
 5167              		.loc 1 809 0
 5168 0046 488D7424 		leaq	4(%rsp), %rsi
 5168      04
 5169 004b E8000000 		call	_ZL9decodeHexPKcRi
 5169      00
 5170              	.LVL548:
 5171 0050 488903   		movq	%rax, (%rbx)
 5172              		.loc 1 810 0
 5173 0053 B8010000 		movl	$1, %eax
 5173      00
 5174              	.L400:
 5175              	.LBE619:
 5176              	.LBE618:
 5177              		.loc 1 819 0 discriminator 1
 5178 0058 488B4C24 		movq	8(%rsp), %rcx
 5178      08
 5179 005d 6448330C 		xorq	%fs:40, %rcx
 5179      25280000 
 5179      00
 5180 0066 7543     		jne	.L407
 5181              		.loc 1 819 0 is_stmt 0
 5182 0068 4883C418 		addq	$24, %rsp
 5183              		.cfi_remember_state
 5184              		.cfi_def_cfa_offset 40
 5185 006c 5B       		popq	%rbx
 5186              		.cfi_def_cfa_offset 32
 5187              	.LVL549:
 5188 006d 5D       		popq	%rbp
 5189              		.cfi_def_cfa_offset 24
 5190              	.LVL550:
 5191 006e 415C     		popq	%r12
 5192              		.cfi_def_cfa_offset 16
 5193              	.LVL551:
 5194 0070 415D     		popq	%r13
 5195              		.cfi_def_cfa_offset 8
 5196 0072 C3       		ret
 5197              	.LVL552:
 5198              		.p2align 4,,10
 5199 0073 0F1F4400 		.p2align 3
 5199      00
 5200              	.L399:
 5201              		.cfi_restore_state
 5202              		.loc 1 812 0 is_stmt 1
 5203 0078 4885ED   		testq	%rbp, %rbp
 5204 007b 7423     		je	.L401
 5205              		.loc 1 813 0
 5206 007d 4C89E7   		movq	%r12, %rdi
 5207 0080 E8000000 		call	malloc
 5207      00
 5208              	.LVL553:
 5209              	.LBB620:
 5210              	.LBB621:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 5211              		.loc 7 59 0
 5212 0085 4C89E2   		movq	%r12, %rdx
 5213              	.LBE621:
 5214              	.LBE620:
 5215              		.loc 1 813 0
 5216 0088 488903   		movq	%rax, (%rbx)
 5217              	.LVL554:
 5218              	.LBB623:
 5219              	.LBB622:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 5220              		.loc 7 59 0
 5221 008b 4889EE   		movq	%rbp, %rsi
 5222 008e 4889C7   		movq	%rax, %rdi
 5223 0091 E8000000 		call	memcpy
 5223      00
 5224              	.LVL555:
 5225              	.LBE622:
 5226              	.LBE623:
 5227              		.loc 1 818 0
 5228 0096 31C0     		xorl	%eax, %eax
 5229 0098 EBBE     		jmp	.L400
 5230              	.LVL556:
 5231 009a 660F1F44 		.p2align 4,,10
 5231      0000
 5232              		.p2align 3
 5233              	.L401:
 5234              		.loc 1 817 0
 5235 00a0 48C70300 		movq	$0, (%rbx)
 5235      000000
 5236              		.loc 1 818 0
 5237 00a7 31C0     		xorl	%eax, %eax
 5238 00a9 EBAD     		jmp	.L400
 5239              	.L407:
 5240              		.loc 1 819 0
 5241 00ab E8000000 		call	__stack_chk_fail
 5241      00
 5242              	.LVL557:
 5243              		.cfi_endproc
 5244              	.LFE249:
 5246              		.section	.text.unlikely._ZN14Fl_Preferences3getEPKcRPvPKvi
 5247              	.LCOLDE69:
 5248              		.section	.text._ZN14Fl_Preferences3getEPKcRPvPKvi
 5249              	.LHOTE69:
 5250              		.section	.text.unlikely._ZN14Fl_Preferences4sizeEPKc,"ax",@progbits
 5251              		.align 2
 5252              	.LCOLDB70:
 5253              		.section	.text._ZN14Fl_Preferences4sizeEPKc,"ax",@progbits
 5254              	.LHOTB70:
 5255              		.align 2
 5256              		.p2align 4,,15
 5257              		.globl	_ZN14Fl_Preferences4sizeEPKc
 5259              	_ZN14Fl_Preferences4sizeEPKc:
 5260              	.LFB251:
 5261              		.loc 1 853 0
 5262              		.cfi_startproc
 5263              	.LVL558:
 5264 0000 53       		pushq	%rbx
 5265              		.cfi_def_cfa_offset 16
 5266              		.cfi_offset 3, -16
 5267              		.loc 1 854 0
 5268 0001 488B5F08 		movq	8(%rdi), %rbx
 5269              	.LVL559:
 5270              	.LBB624:
 5271              	.LBB625:
 5272              		.loc 1 1397 0
 5273 0005 4889DF   		movq	%rbx, %rdi
 5274              	.LVL560:
 5275 0008 E8000000 		call	_ZN14Fl_Preferences4Node8getEntryEPKc
 5275      00
 5276              	.LVL561:
 5277 000d 4863D0   		movslq	%eax, %rdx
 5278              	.LVL562:
 5279              	.LBE625:
 5280              	.LBE624:
 5281              		.loc 1 855 0
 5282 0010 31C0     		xorl	%eax, %eax
 5283              	.LBB627:
 5284              	.LBB626:
 5285              		.loc 1 1398 0
 5286 0012 85D2     		testl	%edx, %edx
 5287 0014 7816     		js	.L409
 5288 0016 48C1E204 		salq	$4, %rdx
 5289              	.LVL563:
 5290 001a 48035320 		addq	32(%rbx), %rdx
 5291 001e 488B7A08 		movq	8(%rdx), %rdi
 5292              	.LVL564:
 5293              	.LBE626:
 5294              	.LBE627:
 5295              		.loc 1 855 0
 5296 0022 4885FF   		testq	%rdi, %rdi
 5297 0025 7405     		je	.L409
 5298              		.loc 1 855 0 is_stmt 0 discriminator 1
 5299 0027 E8000000 		call	strlen
 5299      00
 5300              	.LVL565:
 5301              	.L409:
 5302              		.loc 1 856 0 is_stmt 1 discriminator 4
 5303 002c 5B       		popq	%rbx
 5304              		.cfi_def_cfa_offset 8
 5305 002d C3       		ret
 5306              		.cfi_endproc
 5307              	.LFE251:
 5309              		.section	.text.unlikely._ZN14Fl_Preferences4sizeEPKc
 5310              	.LCOLDE70:
 5311              		.section	.text._ZN14Fl_Preferences4sizeEPKc
 5312              	.LHOTE70:
 5313              		.section	.text.unlikely._ZN14Fl_Preferences4Node11deleteEntryEPKc,"ax",@progbits
 5314              		.align 2
 5315              	.LCOLDB71:
 5316              		.section	.text._ZN14Fl_Preferences4Node11deleteEntryEPKc,"ax",@progbits
 5317              	.LHOTB71:
 5318              		.align 2
 5319              		.p2align 4,,15
 5320              		.globl	_ZN14Fl_Preferences4Node11deleteEntryEPKc
 5322              	_ZN14Fl_Preferences4Node11deleteEntryEPKc:
 5323              	.LFB296:
 5324              		.loc 1 1412 0
 5325              		.cfi_startproc
 5326              	.LVL566:
 5327 0000 53       		pushq	%rbx
 5328              		.cfi_def_cfa_offset 16
 5329              		.cfi_offset 3, -16
 5330              		.loc 1 1412 0
 5331 0001 4889FB   		movq	%rdi, %rbx
 5332              		.loc 1 1413 0
 5333 0004 E8000000 		call	_ZN14Fl_Preferences4Node8getEntryEPKc
 5333      00
 5334              	.LVL567:
 5335 0009 89C2     		movl	%eax, %edx
 5336              	.LVL568:
 5337 000b 31C0     		xorl	%eax, %eax
 5338              	.LVL569:
 5339              		.loc 1 1414 0
 5340 000d 83FAFF   		cmpl	$-1, %edx
 5341 0010 7436     		je	.L414
 5342              		.loc 1 1415 0
 5343 0012 4863C2   		movslq	%edx, %rax
 5344              	.LBB628:
 5345              	.LBB629:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 5346              		.loc 7 59 0
 5347 0015 F7D2     		notl	%edx
 5348              	.LVL570:
 5349 0017 035328   		addl	40(%rbx), %edx
 5350              	.LVL571:
 5351              	.LBE629:
 5352              	.LBE628:
 5353              		.loc 1 1415 0
 5354 001a 488B4B20 		movq	32(%rbx), %rcx
 5355 001e 4883C001 		addq	$1, %rax
 5356              	.LVL572:
 5357 0022 48C1E004 		salq	$4, %rax
 5358              	.LVL573:
 5359              	.LBB631:
 5360              	.LBB630:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 5361              		.loc 7 59 0
 5362 0026 4863D2   		movslq	%edx, %rdx
 5363 0029 488D3401 		leaq	(%rcx,%rax), %rsi
 5364              	.LVL574:
 5365 002d 488D7C01 		leaq	-16(%rcx,%rax), %rdi
 5365      F0
 5366              	.LVL575:
 5367 0032 48C1E204 		salq	$4, %rdx
 5368 0036 E8000000 		call	memmove
 5368      00
 5369              	.LVL576:
 5370              	.LBE630:
 5371              	.LBE631:
 5372              		.loc 1 1416 0
 5373 003b 836B2801 		subl	$1, 40(%rbx)
 5374              		.loc 1 1417 0
 5375 003f 804B3001 		orb	$1, 48(%rbx)
 5376              		.loc 1 1418 0
 5377 0043 B8010000 		movl	$1, %eax
 5377      00
 5378              	.L414:
 5379              		.loc 1 1419 0
 5380 0048 5B       		popq	%rbx
 5381              		.cfi_def_cfa_offset 8
 5382              	.LVL577:
 5383 0049 C3       		ret
 5384              		.cfi_endproc
 5385              	.LFE296:
 5387              		.section	.text.unlikely._ZN14Fl_Preferences4Node11deleteEntryEPKc
 5388              	.LCOLDE71:
 5389              		.section	.text._ZN14Fl_Preferences4Node11deleteEntryEPKc
 5390              	.LHOTE71:
 5391              		.section	.text.unlikely._ZN14Fl_Preferences11deleteEntryEPKc,"ax",@progbits
 5392              		.align 2
 5393              	.LCOLDB72:
 5394              		.section	.text._ZN14Fl_Preferences11deleteEntryEPKc,"ax",@progbits
 5395              	.LHOTB72:
 5396              		.align 2
 5397              		.p2align 4,,15
 5398              		.globl	_ZN14Fl_Preferences11deleteEntryEPKc
 5400              	_ZN14Fl_Preferences11deleteEntryEPKc:
 5401              	.LFB232:
 5402              		.loc 1 478 0
 5403              		.cfi_startproc
 5404              	.LVL578:
 5405              		.loc 1 479 0
 5406 0000 488B7F08 		movq	8(%rdi), %rdi
 5407              	.LVL579:
 5408 0004 E9000000 		jmp	_ZN14Fl_Preferences4Node11deleteEntryEPKc
 5408      00
 5409              	.LVL580:
 5410              		.cfi_endproc
 5411              	.LFE232:
 5413              		.section	.text.unlikely._ZN14Fl_Preferences11deleteEntryEPKc
 5414              	.LCOLDE72:
 5415              		.section	.text._ZN14Fl_Preferences11deleteEntryEPKc
 5416              	.LHOTE72:
 5417              		.section	.text.unlikely._ZN14Fl_Preferences4Node4findEPKc,"ax",@progbits
 5418              		.align 2
 5419              	.LCOLDB73:
 5420              		.section	.text._ZN14Fl_Preferences4Node4findEPKc,"ax",@progbits
 5421              	.LHOTB73:
 5422              		.align 2
 5423              		.p2align 4,,15
 5424              		.globl	_ZN14Fl_Preferences4Node4findEPKc
 5426              	_ZN14Fl_Preferences4Node4findEPKc:
 5427              	.LFB297:
 5428              		.loc 1 1424 0
 5429              		.cfi_startproc
 5430              	.LVL581:
 5431 0000 4155     		pushq	%r13
 5432              		.cfi_def_cfa_offset 16
 5433              		.cfi_offset 13, -16
 5434 0002 4154     		pushq	%r12
 5435              		.cfi_def_cfa_offset 24
 5436              		.cfi_offset 12, -24
 5437 0004 4989FD   		movq	%rdi, %r13
 5438 0007 55       		pushq	%rbp
 5439              		.cfi_def_cfa_offset 32
 5440              		.cfi_offset 6, -32
 5441 0008 53       		pushq	%rbx
 5442              		.cfi_def_cfa_offset 40
 5443              		.cfi_offset 3, -40
 5444 0009 4889F5   		movq	%rsi, %rbp
 5445 000c 4883EC08 		subq	$8, %rsp
 5446              		.cfi_def_cfa_offset 48
 5447              	.LVL582:
 5448              	.L428:
 5449              		.loc 1 1425 0
 5450 0010 498B5D18 		movq	24(%r13), %rbx
 5451 0014 4889DF   		movq	%rbx, %rdi
 5452 0017 E8000000 		call	strlen
 5452      00
 5453              	.LVL583:
 5454              	.LBB632:
 5455              		.loc 1 1426 0
 5456 001c 4C63E0   		movslq	%eax, %r12
 5457 001f 4889DE   		movq	%rbx, %rsi
 5458 0022 4889EF   		movq	%rbp, %rdi
 5459 0025 4C89E2   		movq	%r12, %rdx
 5460 0028 E8000000 		call	strncmp
 5460      00
 5461              	.LVL584:
 5462 002d 85C0     		testl	%eax, %eax
 5463 002f 0F850E01 		jne	.L431
 5463      0000
 5464              	.LBB633:
 5465              		.loc 1 1427 0
 5466 0035 420FB644 		movzbl	0(%rbp,%r12), %eax
 5466      2500
 5467 003b 84C0     		testb	%al, %al
 5468 003d 0F840701 		je	.L430
 5468      0000
 5469              	.LBB634:
 5470              		.loc 1 1429 0
 5471 0043 3C2F     		cmpb	$47, %al
 5472 0045 0F85F800 		jne	.L431
 5472      0000
 5473              	.LBB635:
 5474              	.LBB636:
 5475              		.loc 1 1431 0
 5476 004b 498B5D00 		movq	0(%r13), %rbx
 5477              	.LVL585:
 5478 004f 4885DB   		testq	%rbx, %rbx
 5479 0052 7515     		jne	.L435
 5480 0054 EB32     		jmp	.L425
 5481              	.LVL586:
 5482 0056 662E0F1F 		.p2align 4,,10
 5482      84000000 
 5482      0000
 5483              		.p2align 3
 5484              	.L440:
 5485              		.loc 1 1431 0 is_stmt 0 discriminator 2
 5486 0060 488B5B08 		movq	8(%rbx), %rbx
 5487              	.LVL587:
 5488 0064 4885DB   		testq	%rbx, %rbx
 5489 0067 741F     		je	.L425
 5490              	.LVL588:
 5491              	.L435:
 5492              	.LBB637:
 5493              		.loc 1 1432 0 is_stmt 1
 5494 0069 4889EE   		movq	%rbp, %rsi
 5495 006c 4889DF   		movq	%rbx, %rdi
 5496 006f E8000000 		call	_ZN14Fl_Preferences4Node4findEPKc
 5496      00
 5497              	.LVL589:
 5498              		.loc 1 1433 0
 5499 0074 4885C0   		testq	%rax, %rax
 5500 0077 74E7     		je	.L440
 5501              	.LVL590:
 5502              	.L421:
 5503              	.LBE637:
 5504              	.LBE636:
 5505              	.LBE635:
 5506              	.LBE634:
 5507              	.LBE633:
 5508              	.LBE632:
 5509              		.loc 1 1445 0
 5510 0079 4883C408 		addq	$8, %rsp
 5511              		.cfi_remember_state
 5512              		.cfi_def_cfa_offset 40
 5513 007d 5B       		popq	%rbx
 5514              		.cfi_def_cfa_offset 32
 5515 007e 5D       		popq	%rbp
 5516              		.cfi_def_cfa_offset 24
 5517              	.LVL591:
 5518 007f 415C     		popq	%r12
 5519              		.cfi_def_cfa_offset 16
 5520              	.LVL592:
 5521 0081 415D     		popq	%r13
 5522              		.cfi_def_cfa_offset 8
 5523 0083 C3       		ret
 5524              	.LVL593:
 5525              		.p2align 4,,10
 5526 0084 0F1F4000 		.p2align 3
 5527              	.L425:
 5528              		.cfi_restore_state
 5529              	.LBB652:
 5530              	.LBB650:
 5531              	.LBB649:
 5532              	.LBB648:
 5533              		.loc 1 1435 0
 5534 0088 4A8D5C25 		leaq	1(%rbp,%r12), %rbx
 5534      01
 5535              	.LVL594:
 5536              	.LBB638:
 5537              	.LBB639:
 226:/usr/include/string.h **** }
 5538              		.loc 6 226 0
 5539 008d BE2F0000 		movl	$47, %esi
 5539      00
 5540 0092 4889DF   		movq	%rbx, %rdi
 5541 0095 E8000000 		call	strchr
 5541      00
 5542              	.LVL595:
 5543              	.LBE639:
 5544              	.LBE638:
 5545              		.loc 1 1437 0
 5546 009a 4885C0   		testq	%rax, %rax
 5547 009d 0F848900 		je	.L441
 5547      0000
 5548              		.loc 1 1437 0 is_stmt 0 discriminator 1
 5549 00a3 4829D8   		subq	%rbx, %rax
 5550 00a6 4889DE   		movq	%rbx, %rsi
 5551 00a9 BF000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edi
 5551      00
 5552 00ae 488D5001 		leaq	1(%rax), %rdx
 5553 00b2 E8000000 		call	fl_strlcpy
 5553      00
 5554              	.LVL596:
 5555              	.L427:
 5556              		.loc 1 1439 0 is_stmt 1
 5557 00b7 BF480000 		movl	$72, %edi
 5557      00
 5558 00bc E8000000 		call	_Znwm
 5558      00
 5559              	.LVL597:
 5560              	.LBB640:
 5561              	.LBB641:
 5562              		.loc 1 1207 0
 5563 00c1 BF000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edi
 5563      00
 5564              	.LBE641:
 5565              	.LBE640:
 5566              		.loc 1 1439 0
 5567 00c6 4889C3   		movq	%rax, %rbx
 5568              	.LVL598:
 5569              	.LBB645:
 5570              	.LBB642:
 5571              		.loc 1 1207 0
 5572 00c9 E8000000 		call	strdup
 5572      00
 5573              	.LVL599:
 5574              		.loc 1 1213 0
 5575 00ce 806330F8 		andb	$-8, 48(%rbx)
 5576              	.LBE642:
 5577              	.LBE645:
 5578              		.loc 1 1440 0
 5579 00d2 4C89EE   		movq	%r13, %rsi
 5580              	.LBB646:
 5581              	.LBB643:
 5582              		.loc 1 1207 0
 5583 00d5 48894318 		movq	%rax, 24(%rbx)
 5584              		.loc 1 1208 0
 5585 00d9 48C70300 		movq	$0, (%rbx)
 5585      000000
 5586 00e0 48C74308 		movq	$0, 8(%rbx)
 5586      00000000 
 5587              	.LBE643:
 5588              	.LBE646:
 5589              		.loc 1 1440 0
 5590 00e8 4889DF   		movq	%rbx, %rdi
 5591              	.LBB647:
 5592              	.LBB644:
 5593              		.loc 1 1208 0
 5594 00eb 48C74310 		movq	$0, 16(%rbx)
 5594      00000000 
 5595              		.loc 1 1209 0
 5596 00f3 48C74320 		movq	$0, 32(%rbx)
 5596      00000000 
 5597 00fb 4989DD   		movq	%rbx, %r13
 5598              		.loc 1 1210 0
 5599 00fe C7432C00 		movl	$0, 44(%rbx)
 5599      000000
 5600 0105 C7432800 		movl	$0, 40(%rbx)
 5600      000000
 5601              		.loc 1 1214 0
 5602 010c 48C74338 		movq	$0, 56(%rbx)
 5602      00000000 
 5603              		.loc 1 1215 0
 5604 0114 C7434400 		movl	$0, 68(%rbx)
 5604      000000
 5605 011b C7434000 		movl	$0, 64(%rbx)
 5605      000000
 5606              	.LVL600:
 5607              	.LBE644:
 5608              	.LBE647:
 5609              		.loc 1 1440 0
 5610 0122 E8000000 		call	_ZN14Fl_Preferences4Node9setParentEPS0_
 5610      00
 5611              	.LVL601:
 5612              		.loc 1 1441 0
 5613 0127 E9E4FEFF 		jmp	.L428
 5613      FF
 5614              	.LVL602:
 5615              	.L441:
 5616              		.loc 1 1438 0
 5617 012c BA800000 		movl	$128, %edx
 5617      00
 5618 0131 4889DE   		movq	%rbx, %rsi
 5619 0134 BF000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edi
 5619      00
 5620 0139 E8000000 		call	fl_strlcpy
 5620      00
 5621              	.LVL603:
 5622 013e E974FFFF 		jmp	.L427
 5622      FF
 5623              	.LVL604:
 5624              	.L431:
 5625              	.LBE648:
 5626              	.LBE649:
 5627              	.LBE650:
 5628              	.LBE652:
 5629              		.loc 1 1444 0
 5630 0143 31C0     		xorl	%eax, %eax
 5631 0145 E92FFFFF 		jmp	.L421
 5631      FF
 5632              	.L430:
 5633              	.LBB653:
 5634              	.LBB651:
 5635 014a 4C89E8   		movq	%r13, %rax
 5636 014d E927FFFF 		jmp	.L421
 5636      FF
 5637              	.LBE651:
 5638              	.LBE653:
 5639              		.cfi_endproc
 5640              	.LFE297:
 5642              		.section	.text.unlikely._ZN14Fl_Preferences4Node4findEPKc
 5643              	.LCOLDE73:
 5644              		.section	.text._ZN14Fl_Preferences4Node4findEPKc
 5645              	.LHOTE73:
 5646              		.section	.rodata.str1.1
 5647              	.LC74:
 5648 0056 726200   		.string	"rb"
 5649              	.LC75:
 5650 0059 5D0A0D00 		.string	"]\n\r"
 5651              	.LC76:
 5652 005d 0A0D00   		.string	"\n\r"
 5653              		.section	.text.unlikely._ZN14Fl_Preferences8RootNode4readEv,"ax",@progbits
 5654              		.align 2
 5655              	.LCOLDB77:
 5656              		.section	.text._ZN14Fl_Preferences8RootNode4readEv,"ax",@progbits
 5657              	.LHOTB77:
 5658              		.align 2
 5659              		.p2align 4,,15
 5660              		.globl	_ZN14Fl_Preferences8RootNode4readEv
 5662              	_ZN14Fl_Preferences8RootNode4readEv:
 5663              	.LFB275:
 5664              		.loc 1 1117 0
 5665              		.cfi_startproc
 5666              	.LVL605:
 5667 0000 4155     		pushq	%r13
 5668              		.cfi_def_cfa_offset 16
 5669              		.cfi_offset 13, -16
 5670 0002 4154     		pushq	%r12
 5671              		.cfi_def_cfa_offset 24
 5672              		.cfi_offset 12, -24
 5673 0004 4989FD   		movq	%rdi, %r13
 5674 0007 55       		pushq	%rbp
 5675              		.cfi_def_cfa_offset 32
 5676              		.cfi_offset 6, -32
 5677 0008 53       		pushq	%rbx
 5678              		.cfi_def_cfa_offset 40
 5679              		.cfi_offset 3, -40
 5680 0009 4881EC18 		subq	$1048, %rsp
 5680      040000
 5681              		.cfi_def_cfa_offset 1088
 5682              		.loc 1 1118 0
 5683 0010 488B7F08 		movq	8(%rdi), %rdi
 5684              	.LVL606:
 5685              		.loc 1 1117 0
 5686 0014 64488B04 		movq	%fs:40, %rax
 5686      25280000 
 5686      00
 5687 001d 48898424 		movq	%rax, 1032(%rsp)
 5687      08040000 
 5688 0025 31C0     		xorl	%eax, %eax
 5689              		.loc 1 1118 0
 5690 0027 4885FF   		testq	%rdi, %rdi
 5691 002a 0F841B01 		je	.L445
 5691      0000
 5692              		.loc 1 1121 0
 5693 0030 BE000000 		movl	$.LC74, %esi
 5693      00
 5694 0035 E8000000 		call	fl_fopen
 5694      00
 5695              	.LVL607:
 5696              		.loc 1 1122 0
 5697 003a 4885C0   		testq	%rax, %rax
 5698              		.loc 1 1121 0
 5699 003d 4889C3   		movq	%rax, %rbx
 5700              	.LVL608:
 5701              		.loc 1 1122 0
 5702 0040 0F840501 		je	.L445
 5702      0000
 5703              	.LVL609:
 5704              	.LBB654:
 5705              	.LBB655:
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
 5706              		.loc 4 263 0
 5707 0046 4889C2   		movq	%rax, %rdx
 5708 0049 BE000400 		movl	$1024, %esi
 5708      00
 5709 004e 4889E7   		movq	%rsp, %rdi
 5710 0051 E8000000 		call	fgets
 5710      00
 5711              	.LVL610:
 5712              	.LBE655:
 5713              	.LBE654:
 5714              	.LBB656:
 5715              	.LBB657:
 5716 0056 4889DA   		movq	%rbx, %rdx
 5717 0059 BE000400 		movl	$1024, %esi
 5717      00
 5718 005e 4889E7   		movq	%rsp, %rdi
 5719 0061 E8000000 		call	fgets
 5719      00
 5720              	.LVL611:
 5721              	.LBE657:
 5722              	.LBE656:
 5723              	.LBB658:
 5724              	.LBB659:
 5725 0066 4889DA   		movq	%rbx, %rdx
 5726 0069 BE000400 		movl	$1024, %esi
 5726      00
 5727 006e 4889E7   		movq	%rsp, %rdi
 5728 0071 E8000000 		call	fgets
 5728      00
 5729              	.LVL612:
 5730              	.LBE659:
 5731              	.LBE658:
 5732              		.loc 1 1127 0
 5733 0076 498B4500 		movq	0(%r13), %rax
 5734              	.LBB660:
 5735              	.LBB661:
 5736              	.LBB662:
 5737              	.LBB663:
 5738              	.LBB664:
 5739              		.loc 1 1135 0
 5740 007a 488D6C24 		leaq	1(%rsp), %rbp
 5740      01
 5741              	.LBE664:
 5742              	.LBE663:
 5743              	.LBE662:
 5744              	.LBE661:
 5745              	.LBE660:
 5746              		.loc 1 1127 0
 5747 007f 4C8B6008 		movq	8(%rax), %r12
 5748              	.LVL613:
 5749              		.p2align 4,,10
 5750 0083 0F1F4400 		.p2align 3
 5750      00
 5751              	.L446:
 5752              	.LBB674:
 5753              	.LBB673:
 5754              	.LBB670:
 5755              	.LBB671:
 5756              		.loc 4 263 0
 5757 0088 4889DA   		movq	%rbx, %rdx
 5758 008b BE000400 		movl	$1024, %esi
 5758      00
 5759 0090 4889E7   		movq	%rsp, %rdi
 5760 0093 E8000000 		call	fgets
 5760      00
 5761              	.LVL614:
 5762              	.LBE671:
 5763              	.LBE670:
 5764              		.loc 1 1129 0
 5765 0098 4885C0   		testq	%rax, %rax
 5766 009b 0F847F00 		je	.L447
 5766      0000
 5767              	.LBB672:
 5768              		.loc 1 1130 0
 5769 00a1 0FB60424 		movzbl	(%rsp), %eax
 5770 00a5 3C5B     		cmpb	$91, %al
 5771 00a7 7447     		je	.L462
 5772              	.LBB668:
 5773              		.loc 1 1134 0
 5774 00a9 3C2B     		cmpb	$43, %al
 5775              	.LBB665:
 5776              		.loc 1 1135 0
 5777 00ab BE000000 		movl	$.LC76, %esi
 5777      00
 5778              	.LBE665:
 5779              		.loc 1 1134 0
 5780 00b0 741E     		je	.L463
 5781              	.LBB666:
 5782              		.loc 1 1141 0
 5783 00b2 4889E7   		movq	%rsp, %rdi
 5784 00b5 E8000000 		call	strcspn
 5784      00
 5785              	.LVL615:
 5786              		.loc 1 1142 0
 5787 00ba 4885C0   		testq	%rax, %rax
 5788 00bd 74C9     		je	.L446
 5789              		.loc 1 1144 0
 5790 00bf 4889E6   		movq	%rsp, %rsi
 5791 00c2 4C89E7   		movq	%r12, %rdi
 5792              		.loc 1 1143 0
 5793 00c5 C6040400 		movb	$0, (%rsp,%rax)
 5794              		.loc 1 1144 0
 5795 00c9 E8000000 		call	_ZN14Fl_Preferences4Node3setEPKc
 5795      00
 5796              	.LVL616:
 5797 00ce EBB8     		jmp	.L446
 5798              		.p2align 4,,10
 5799              		.p2align 3
 5800              	.L463:
 5801              	.LBE666:
 5802              	.LBB667:
 5803              		.loc 1 1135 0
 5804 00d0 4889EF   		movq	%rbp, %rdi
 5805 00d3 E8000000 		call	strcspn
 5805      00
 5806              	.LVL617:
 5807              		.loc 1 1136 0
 5808 00d8 4885C0   		testq	%rax, %rax
 5809 00db 74AB     		je	.L446
 5810              		.loc 1 1138 0
 5811 00dd 4889EE   		movq	%rbp, %rsi
 5812 00e0 4C89E7   		movq	%r12, %rdi
 5813              		.loc 1 1137 0
 5814 00e3 C6440401 		movb	$0, 1(%rsp,%rax)
 5814      00
 5815              		.loc 1 1138 0
 5816 00e8 E8000000 		call	_ZN14Fl_Preferences4Node3addEPKc
 5816      00
 5817              	.LVL618:
 5818 00ed EB99     		jmp	.L446
 5819 00ef 90       		.p2align 4,,10
 5820              		.p2align 3
 5821              	.L462:
 5822              	.LBE667:
 5823              	.LBE668:
 5824              	.LBB669:
 5825              		.loc 1 1131 0
 5826 00f0 BE000000 		movl	$.LC75, %esi
 5826      00
 5827 00f5 4889EF   		movq	%rbp, %rdi
 5828 00f8 E8000000 		call	strcspn
 5828      00
 5829              	.LVL619:
 5830              		.loc 1 1132 0
 5831 00fd C6440401 		movb	$0, 1(%rsp,%rax)
 5831      00
 5832              		.loc 1 1133 0
 5833 0102 498B4500 		movq	0(%r13), %rax
 5834              	.LVL620:
 5835 0106 4889EE   		movq	%rbp, %rsi
 5836 0109 488B7808 		movq	8(%rax), %rdi
 5837 010d E8000000 		call	_ZN14Fl_Preferences4Node4findEPKc
 5837      00
 5838              	.LVL621:
 5839 0112 4989C4   		movq	%rax, %r12
 5840              	.LVL622:
 5841              	.LBE669:
 5842 0115 E96EFFFF 		jmp	.L446
 5842      FF
 5843              	.LVL623:
 5844 011a 660F1F44 		.p2align 4,,10
 5844      0000
 5845              		.p2align 3
 5846              	.L447:
 5847              	.LBE672:
 5848              	.LBE673:
 5849              	.LBE674:
 5850              		.loc 1 1148 0
 5851 0120 4889DF   		movq	%rbx, %rdi
 5852 0123 E8000000 		call	fclose
 5852      00
 5853              	.LVL624:
 5854              		.loc 1 1149 0
 5855 0128 31C0     		xorl	%eax, %eax
 5856              	.LVL625:
 5857              	.L444:
 5858              		.loc 1 1150 0
 5859 012a 488B8C24 		movq	1032(%rsp), %rcx
 5859      08040000 
 5860 0132 6448330C 		xorq	%fs:40, %rcx
 5860      25280000 
 5860      00
 5861 013b 7515     		jne	.L464
 5862 013d 4881C418 		addq	$1048, %rsp
 5862      040000
 5863              		.cfi_remember_state
 5864              		.cfi_def_cfa_offset 40
 5865 0144 5B       		popq	%rbx
 5866              		.cfi_def_cfa_offset 32
 5867 0145 5D       		popq	%rbp
 5868              		.cfi_def_cfa_offset 24
 5869 0146 415C     		popq	%r12
 5870              		.cfi_def_cfa_offset 16
 5871 0148 415D     		popq	%r13
 5872              		.cfi_def_cfa_offset 8
 5873              	.LVL626:
 5874 014a C3       		ret
 5875              	.LVL627:
 5876              	.L445:
 5877              		.cfi_restore_state
 5878              		.loc 1 1119 0
 5879 014b B8FFFFFF 		movl	$-1, %eax
 5879      FF
 5880 0150 EBD8     		jmp	.L444
 5881              	.L464:
 5882              		.loc 1 1150 0
 5883 0152 E8000000 		call	__stack_chk_fail
 5883      00
 5884              	.LVL628:
 5885              		.cfi_endproc
 5886              	.LFE275:
 5888              		.section	.text.unlikely._ZN14Fl_Preferences8RootNode4readEv
 5889              	.LCOLDE77:
 5890              		.section	.text._ZN14Fl_Preferences8RootNode4readEv
 5891              	.LHOTE77:
 5892              		.section	.rodata.str1.1
 5893              	.LC78:
 5894 0060 484F4D45 		.string	"HOME"
 5894      00
 5895              	.LC79:
 5896 0065 2F2E666C 		.string	"/.fltk/"
 5896      746B2F00 
 5897              	.LC80:
 5898 006d 2E666C74 		.string	".fltk/"
 5898      6B2F00
 5899              	.LC81:
 5900 0074 25732F25 		.string	"%s/%s.prefs"
 5900      732E7072 
 5900      65667300 
 5901              		.section	.text.unlikely._ZN14Fl_Preferences8RootNodeC2EPS_NS_4RootEPKcS4_,"ax",@progbits
 5902              		.align 2
 5903              	.LCOLDB82:
 5904              		.section	.text._ZN14Fl_Preferences8RootNodeC2EPS_NS_4RootEPKcS4_,"ax",@progbits
 5905              	.LHOTB82:
 5906              		.align 2
 5907              		.p2align 4,,15
 5908              		.globl	_ZN14Fl_Preferences8RootNodeC2EPS_NS_4RootEPKcS4_
 5910              	_ZN14Fl_Preferences8RootNodeC2EPS_NS_4RootEPKcS4_:
 5911              	.LFB264:
 5912              		.loc 1 960 0
 5913              		.cfi_startproc
 5914              	.LVL629:
 5915 0000 4155     		pushq	%r13
 5916              		.cfi_def_cfa_offset 16
 5917              		.cfi_offset 13, -16
 5918 0002 4154     		pushq	%r12
 5919              		.cfi_def_cfa_offset 24
 5920              		.cfi_offset 12, -24
 5921 0004 4989CC   		movq	%rcx, %r12
 5922 0007 55       		pushq	%rbp
 5923              		.cfi_def_cfa_offset 32
 5924              		.cfi_offset 6, -32
 5925 0008 53       		pushq	%rbx
 5926              		.cfi_def_cfa_offset 40
 5927              		.cfi_offset 3, -40
 5928 0009 4C89C5   		movq	%r8, %rbp
 5929 000c 4889FB   		movq	%rdi, %rbx
 5930 000f 4881EC18 		subq	$2072, %rsp
 5930      080000
 5931              		.cfi_def_cfa_offset 2112
 5932              	.LBB675:
 5933              		.loc 1 964 0
 5934 0016 488937   		movq	%rsi, (%rdi)
 5935 0019 48C74708 		movq	$0, 8(%rdi)
 5935      00000000 
 5936              	.LBE675:
 5937              		.loc 1 960 0
 5938 0021 64488B04 		movq	%fs:40, %rax
 5938      25280000 
 5938      00
 5939 002a 48898424 		movq	%rax, 2056(%rsp)
 5939      08080000 
 5940 0032 31C0     		xorl	%eax, %eax
 5941              	.LBB691:
 5942              	.LBB676:
 5943              		.loc 1 1039 0
 5944 0034 85D2     		testl	%edx, %edx
 5945              	.LBE676:
 5946              		.loc 1 964 0
 5947 0036 48C74710 		movq	$0, 16(%rdi)
 5947      00000000 
 5948 003e 48C74718 		movq	$0, 24(%rdi)
 5948      00000000 
 5949              	.LBB689:
 5950              		.loc 1 966 0
 5951 0046 C6042400 		movb	$0, (%rsp)
 5952              		.loc 1 1039 0
 5953 004a 0F844801 		je	.L467
 5953      0000
 5954 0050 83FA01   		cmpl	$1, %edx
 5955 0053 0F84BF00 		je	.L487
 5955      0000
 5956              	.LVL630:
 5957              	.L486:
 5958 0059 4989E5   		movq	%rsp, %r13
 5959              	.L466:
 5960              		.loc 1 1055 0
 5961 005c 4C89EF   		movq	%r13, %rdi
 5962              	.L472:
 5963 005f 8B17     		movl	(%rdi), %edx
 5964 0061 4883C704 		addq	$4, %rdi
 5965 0065 8D82FFFE 		leal	-16843009(%rdx), %eax
 5965      FEFE
 5966 006b F7D2     		notl	%edx
 5967 006d 21D0     		andl	%edx, %eax
 5968 006f 25808080 		andl	$-2139062144, %eax
 5968      80
 5969 0074 74E9     		je	.L472
 5970 0076 89C2     		movl	%eax, %edx
 5971              	.LBB677:
 5972              	.LBB678:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 5973              		.loc 4 65 0
 5974 0078 BE000800 		movl	$2048, %esi
 5974      00
 5975 007d 4D89E1   		movq	%r12, %r9
 5976              	.LBE678:
 5977              	.LBE677:
 5978              		.loc 1 1055 0
 5979 0080 C1EA10   		shrl	$16, %edx
 5980 0083 A9808000 		testl	$32896, %eax
 5980      00
 5981              	.LBB683:
 5982              	.LBB679:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 5983              		.loc 4 65 0
 5984 0088 41B80000 		movl	$.LC81, %r8d
 5984      0000
 5985              	.LBE679:
 5986              	.LBE683:
 5987              		.loc 1 1055 0
 5988 008e 0F44C2   		cmove	%edx, %eax
 5989 0091 488D5702 		leaq	2(%rdi), %rdx
 5990 0095 89C1     		movl	%eax, %ecx
 5991 0097 480F44FA 		cmove	%rdx, %rdi
 5992 009b 00C1     		addb	%al, %cl
 5993              	.LBB684:
 5994              	.LBB680:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 5995              		.loc 4 65 0
 5996 009d BA010000 		movl	$1, %edx
 5996      00
 5997              	.LBE680:
 5998              	.LBE684:
 5999              		.loc 1 1055 0
 6000 00a2 4883DF03 		sbbq	$3, %rdi
 6001              	.LBB685:
 6002              	.LBB681:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 6003              		.loc 4 65 0
 6004 00a6 4883EC08 		subq	$8, %rsp
 6005              		.cfi_def_cfa_offset 2120
 6006 00aa 48C7C1FF 		movq	$-1, %rcx
 6006      FFFFFF
 6007 00b1 55       		pushq	%rbp
 6008              		.cfi_def_cfa_offset 2128
 6009              	.LBE681:
 6010              	.LBE685:
 6011              		.loc 1 1055 0
 6012 00b2 4C29EF   		subq	%r13, %rdi
 6013              	.LVL631:
 6014              	.LBB686:
 6015              	.LBB682:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 6016              		.loc 4 65 0
 6017 00b5 31C0     		xorl	%eax, %eax
 6018 00b7 4829FE   		subq	%rdi, %rsi
 6019              	.LVL632:
 6020 00ba 4C01EF   		addq	%r13, %rdi
 6021 00bd E8000000 		call	__snprintf_chk
 6021      00
 6022              	.LVL633:
 6023              	.LBE682:
 6024              	.LBE686:
 6025              		.loc 1 1058 0
 6026 00c2 4C89EF   		movq	%r13, %rdi
 6027 00c5 E8000000 		call	strdup
 6027      00
 6028              	.LVL634:
 6029              		.loc 1 1059 0
 6030 00ca 4C89E7   		movq	%r12, %rdi
 6031              		.loc 1 1058 0
 6032 00cd 48894308 		movq	%rax, 8(%rbx)
 6033              		.loc 1 1059 0
 6034 00d1 E8000000 		call	strdup
 6034      00
 6035              	.LVL635:
 6036              		.loc 1 1060 0
 6037 00d6 4889EF   		movq	%rbp, %rdi
 6038              		.loc 1 1059 0
 6039 00d9 48894310 		movq	%rax, 16(%rbx)
 6040              		.loc 1 1060 0
 6041 00dd E8000000 		call	strdup
 6041      00
 6042              	.LVL636:
 6043              		.loc 1 1061 0
 6044 00e2 4889DF   		movq	%rbx, %rdi
 6045              		.loc 1 1060 0
 6046 00e5 48894318 		movq	%rax, 24(%rbx)
 6047              		.loc 1 1061 0
 6048 00e9 E8000000 		call	_ZN14Fl_Preferences8RootNode4readEv
 6048      00
 6049              	.LVL637:
 6050              	.LBE689:
 6051              	.LBE691:
 6052              		.loc 1 1062 0
 6053 00ee 58       		popq	%rax
 6054              		.cfi_def_cfa_offset 2120
 6055 00ef 5A       		popq	%rdx
 6056              		.cfi_def_cfa_offset 2112
 6057 00f0 488B8424 		movq	2056(%rsp), %rax
 6057      08080000 
 6058 00f8 64483304 		xorq	%fs:40, %rax
 6058      25280000 
 6058      00
 6059 0101 0F85CB00 		jne	.L488
 6059      0000
 6060 0107 4881C418 		addq	$2072, %rsp
 6060      080000
 6061              		.cfi_remember_state
 6062              		.cfi_def_cfa_offset 40
 6063 010e 5B       		popq	%rbx
 6064              		.cfi_def_cfa_offset 32
 6065              	.LVL638:
 6066 010f 5D       		popq	%rbp
 6067              		.cfi_def_cfa_offset 24
 6068              	.LVL639:
 6069 0110 415C     		popq	%r12
 6070              		.cfi_def_cfa_offset 16
 6071              	.LVL640:
 6072 0112 415D     		popq	%r13
 6073              		.cfi_def_cfa_offset 8
 6074 0114 C3       		ret
 6075              	.LVL641:
 6076              		.p2align 4,,10
 6077 0115 0F1F00   		.p2align 3
 6078              	.L487:
 6079              		.cfi_restore_state
 6080              	.LBB692:
 6081              	.LBB690:
 6082              		.loc 1 1041 0
 6083 0118 BF000000 		movl	$.LC78, %edi
 6083      00
 6084 011d E8000000 		call	fl_getenv
 6084      00
 6085              	.LVL642:
 6086 0122 4885C0   		testq	%rax, %rax
 6087 0125 7471     		je	.L467
 6088              		.loc 1 1042 0
 6089 0127 BA000800 		movl	$2048, %edx
 6089      00
 6090 012c 4889C6   		movq	%rax, %rsi
 6091 012f 4889E7   		movq	%rsp, %rdi
 6092 0132 E8000000 		call	fl_strlcpy
 6092      00
 6093              	.LVL643:
 6094 0137 4989E5   		movq	%rsp, %r13
 6095              		.loc 1 1044 0
 6096 013a 4889E2   		movq	%rsp, %rdx
 6097              	.L469:
 6098 013d 8B0A     		movl	(%rdx), %ecx
 6099 013f 4883C204 		addq	$4, %rdx
 6100 0143 8D81FFFE 		leal	-16843009(%rcx), %eax
 6100      FEFE
 6101 0149 F7D1     		notl	%ecx
 6102 014b 21C8     		andl	%ecx, %eax
 6103 014d 25808080 		andl	$-2139062144, %eax
 6103      80
 6104 0152 74E9     		je	.L469
 6105 0154 89C1     		movl	%eax, %ecx
 6106 0156 C1E910   		shrl	$16, %ecx
 6107 0159 A9808000 		testl	$32896, %eax
 6107      00
 6108 015e 0F44C1   		cmove	%ecx, %eax
 6109 0161 488D4A02 		leaq	2(%rdx), %rcx
 6110 0165 480F44D1 		cmove	%rcx, %rdx
 6111 0169 89C1     		movl	%eax, %ecx
 6112 016b 00C1     		addb	%al, %cl
 6113 016d 4883DA03 		sbbq	$3, %rdx
 6114 0171 4C29EA   		subq	%r13, %rdx
 6115 0174 807C14FF 		cmpb	$47, -1(%rsp,%rdx)
 6115      2F
 6116              		.loc 1 1045 0
 6117 0179 BA000800 		movl	$2048, %edx
 6117      00
 6118              		.loc 1 1044 0
 6119 017e 7440     		je	.L471
 6120              		.loc 1 1045 0
 6121 0180 BE000000 		movl	$.LC79, %esi
 6121      00
 6122 0185 4C89EF   		movq	%r13, %rdi
 6123 0188 E8000000 		call	fl_strlcat
 6123      00
 6124              	.LVL644:
 6125 018d E9CAFEFF 		jmp	.L466
 6125      FF
 6126              		.p2align 4,,10
 6127 0192 660F1F44 		.p2align 3
 6127      0000
 6128              	.L467:
 6129              	.LVL645:
 6130              	.LBB687:
 6131              	.LBB688:
 6132              		.loc 7 110 0
 6133 0198 48B82F65 		movabsq	$8389192559602459951, %rax
 6133      74632F66 
 6133      6C74
 6134 01a2 B96B2F00 		movl	$12139, %ecx
 6134      00
 6135 01a7 C644240A 		movb	$0, 10(%rsp)
 6135      00
 6136 01ac 48890424 		movq	%rax, (%rsp)
 6137 01b0 66894C24 		movw	%cx, 8(%rsp)
 6137      08
 6138 01b5 E99FFEFF 		jmp	.L486
 6138      FF
 6139              	.LVL646:
 6140 01ba 660F1F44 		.p2align 4,,10
 6140      0000
 6141              		.p2align 3
 6142              	.L471:
 6143              	.LBE688:
 6144              	.LBE687:
 6145              		.loc 1 1047 0
 6146 01c0 BE000000 		movl	$.LC80, %esi
 6146      00
 6147 01c5 4C89EF   		movq	%r13, %rdi
 6148 01c8 E8000000 		call	fl_strlcat
 6148      00
 6149              	.LVL647:
 6150 01cd E98AFEFF 		jmp	.L466
 6150      FF
 6151              	.L488:
 6152              	.LBE690:
 6153              	.LBE692:
 6154              		.loc 1 1062 0
 6155 01d2 E8000000 		call	__stack_chk_fail
 6155      00
 6156              	.LVL648:
 6157              		.cfi_endproc
 6158              	.LFE264:
 6160              		.section	.text.unlikely._ZN14Fl_Preferences8RootNodeC2EPS_NS_4RootEPKcS4_
 6161              	.LCOLDE82:
 6162              		.section	.text._ZN14Fl_Preferences8RootNodeC2EPS_NS_4RootEPKcS4_
 6163              	.LHOTE82:
 6164              		.globl	_ZN14Fl_Preferences8RootNodeC1EPS_NS_4RootEPKcS4_
 6165              		.set	_ZN14Fl_Preferences8RootNodeC1EPS_NS_4RootEPKcS4_,_ZN14Fl_Preferences8RootNodeC2EPS_NS_4RootE
 6166              		.section	.rodata.str1.1
 6167              	.LC83:
 6168 0080 2E00     		.string	"."
 6169              		.section	.text.unlikely._ZN14Fl_PreferencesC2ENS_4RootEPKcS2_,"ax",@progbits
 6170              		.align 2
 6171              	.LCOLDB84:
 6172              		.section	.text._ZN14Fl_PreferencesC2ENS_4RootEPKcS2_,"ax",@progbits
 6173              	.LHOTB84:
 6174              		.align 2
 6175              		.p2align 4,,15
 6176              		.globl	_ZN14Fl_PreferencesC2ENS_4RootEPKcS2_
 6178              	_ZN14Fl_PreferencesC2ENS_4RootEPKcS2_:
 6179              	.LFB196:
 6180              		.loc 1 232 0
 6181              		.cfi_startproc
 6182              	.LVL649:
 6183 0000 4156     		pushq	%r14
 6184              		.cfi_def_cfa_offset 16
 6185              		.cfi_offset 14, -16
 6186 0002 4155     		pushq	%r13
 6187              		.cfi_def_cfa_offset 24
 6188              		.cfi_offset 13, -24
 6189 0004 4989CE   		movq	%rcx, %r14
 6190 0007 4154     		pushq	%r12
 6191              		.cfi_def_cfa_offset 32
 6192              		.cfi_offset 12, -32
 6193 0009 55       		pushq	%rbp
 6194              		.cfi_def_cfa_offset 40
 6195              		.cfi_offset 6, -40
 6196 000a 4889FD   		movq	%rdi, %rbp
 6197 000d 53       		pushq	%rbx
 6198              		.cfi_def_cfa_offset 48
 6199              		.cfi_offset 3, -48
 6200              	.LBB693:
 6201              		.loc 1 232 0
 6202 000e 48C70700 		movq	$_ZTV14Fl_Preferences+16, (%rdi)
 6202      000000
 6203              		.loc 1 233 0
 6204 0015 BF480000 		movl	$72, %edi
 6204      00
 6205              	.LVL650:
 6206              	.LBE693:
 6207              		.loc 1 232 0
 6208 001a 4189F4   		movl	%esi, %r12d
 6209 001d 4989D5   		movq	%rdx, %r13
 6210              	.LBB702:
 6211              		.loc 1 233 0
 6212 0020 E8000000 		call	_Znwm
 6212      00
 6213              	.LVL651:
 6214              	.LBB694:
 6215              	.LBB695:
 6216              		.loc 1 1207 0
 6217 0025 BF000000 		movl	$.LC83, %edi
 6217      00
 6218              	.LBE695:
 6219              	.LBE694:
 6220              		.loc 1 233 0
 6221 002a 4889C3   		movq	%rax, %rbx
 6222              	.LVL652:
 6223              	.LBB698:
 6224              	.LBB696:
 6225              		.loc 1 1207 0
 6226 002d E8000000 		call	strdup
 6226      00
 6227              	.LVL653:
 6228              		.loc 1 1213 0
 6229 0032 806330F8 		andb	$-8, 48(%rbx)
 6230              	.LBE696:
 6231              	.LBE698:
 6232              		.loc 1 233 0
 6233 0036 48895D08 		movq	%rbx, 8(%rbp)
 6234              		.loc 1 234 0
 6235 003a BF200000 		movl	$32, %edi
 6235      00
 6236              	.LBB699:
 6237              	.LBB697:
 6238              		.loc 1 1207 0
 6239 003f 48894318 		movq	%rax, 24(%rbx)
 6240              		.loc 1 1208 0
 6241 0043 48C70300 		movq	$0, (%rbx)
 6241      000000
 6242 004a 48C74308 		movq	$0, 8(%rbx)
 6242      00000000 
 6243 0052 48C74310 		movq	$0, 16(%rbx)
 6243      00000000 
 6244              		.loc 1 1209 0
 6245 005a 48C74320 		movq	$0, 32(%rbx)
 6245      00000000 
 6246              		.loc 1 1210 0
 6247 0062 C7432C00 		movl	$0, 44(%rbx)
 6247      000000
 6248 0069 C7432800 		movl	$0, 40(%rbx)
 6248      000000
 6249              		.loc 1 1214 0
 6250 0070 48C74338 		movq	$0, 56(%rbx)
 6250      00000000 
 6251              		.loc 1 1215 0
 6252 0078 C7434400 		movl	$0, 68(%rbx)
 6252      000000
 6253 007f C7434000 		movl	$0, 64(%rbx)
 6253      000000
 6254              	.LVL654:
 6255              	.LBE697:
 6256              	.LBE699:
 6257              		.loc 1 234 0
 6258 0086 E8000000 		call	_Znwm
 6258      00
 6259              	.LVL655:
 6260 008b 4489E2   		movl	%r12d, %edx
 6261 008e 4D89F0   		movq	%r14, %r8
 6262 0091 4C89E9   		movq	%r13, %rcx
 6263 0094 4889EE   		movq	%rbp, %rsi
 6264 0097 4889C7   		movq	%rax, %rdi
 6265 009a 4889C3   		movq	%rax, %rbx
 6266 009d E8000000 		call	_ZN14Fl_Preferences8RootNodeC1EPS_NS_4RootEPKcS4_
 6266      00
 6267              	.LVL656:
 6268              		.loc 1 235 0
 6269 00a2 488B5508 		movq	8(%rbp), %rdx
 6270              	.LVL657:
 6271              		.loc 1 234 0
 6272 00a6 48895D10 		movq	%rbx, 16(%rbp)
 6273              	.LBB700:
 6274              	.LBB701:
 225:fltk-1.3.4-1/FL/Fl_Preferences.H ****     void setRoot(RootNode *r) { root_ = r; top_ = 1; }
 6275              		.loc 5 225 0
 6276 00aa 804A3002 		orb	$2, 48(%rdx)
 6277              	.LVL658:
 6278 00ae 48895A10 		movq	%rbx, 16(%rdx)
 6279              	.LBE701:
 6280              	.LBE700:
 6281              	.LBE702:
 6282              		.loc 1 236 0
 6283 00b2 5B       		popq	%rbx
 6284              		.cfi_def_cfa_offset 40
 6285 00b3 5D       		popq	%rbp
 6286              		.cfi_def_cfa_offset 32
 6287              	.LVL659:
 6288 00b4 415C     		popq	%r12
 6289              		.cfi_def_cfa_offset 24
 6290              	.LVL660:
 6291 00b6 415D     		popq	%r13
 6292              		.cfi_def_cfa_offset 16
 6293              	.LVL661:
 6294 00b8 415E     		popq	%r14
 6295              		.cfi_def_cfa_offset 8
 6296              	.LVL662:
 6297 00ba C3       		ret
 6298              		.cfi_endproc
 6299              	.LFE196:
 6301              		.section	.text.unlikely._ZN14Fl_PreferencesC2ENS_4RootEPKcS2_
 6302              	.LCOLDE84:
 6303              		.section	.text._ZN14Fl_PreferencesC2ENS_4RootEPKcS2_
 6304              	.LHOTE84:
 6305              		.globl	_ZN14Fl_PreferencesC1ENS_4RootEPKcS2_
 6306              		.set	_ZN14Fl_PreferencesC1ENS_4RootEPKcS2_,_ZN14Fl_PreferencesC2ENS_4RootEPKcS2_
 6307              		.section	.rodata.str1.1
 6308              	.LC85:
 6309 0082 756E6B6E 		.string	"unknown"
 6309      6F776E00 
 6310              		.section	.text.unlikely._ZN14Fl_Preferences8RootNodeC2EPS_PKcS3_S3_,"ax",@progbits
 6311              		.align 2
 6312              	.LCOLDB86:
 6313              		.section	.text._ZN14Fl_Preferences8RootNodeC2EPS_PKcS3_S3_,"ax",@progbits
 6314              	.LHOTB86:
 6315              		.align 2
 6316              		.p2align 4,,15
 6317              		.globl	_ZN14Fl_Preferences8RootNodeC2EPS_PKcS3_S3_
 6319              	_ZN14Fl_Preferences8RootNodeC2EPS_PKcS3_S3_:
 6320              	.LFB267:
 6321              		.loc 1 1066 0
 6322              		.cfi_startproc
 6323              	.LVL663:
 6324 0000 4154     		pushq	%r12
 6325              		.cfi_def_cfa_offset 16
 6326              		.cfi_offset 12, -16
 6327 0002 55       		pushq	%rbp
 6328              		.cfi_def_cfa_offset 24
 6329              		.cfi_offset 6, -24
 6330 0003 4889CD   		movq	%rcx, %rbp
 6331 0006 53       		pushq	%rbx
 6332              		.cfi_def_cfa_offset 32
 6333              		.cfi_offset 3, -32
 6334 0007 4989D1   		movq	%rdx, %r9
 6335 000a 4889FB   		movq	%rdi, %rbx
 6336 000d 4881EC10 		subq	$2064, %rsp
 6336      080000
 6337              		.cfi_def_cfa_offset 2096
 6338              	.LBB703:
 6339              		.loc 1 1070 0
 6340 0014 488937   		movq	%rsi, (%rdi)
 6341 0017 48C74708 		movq	$0, 8(%rdi)
 6341      00000000 
 6342              	.LBE703:
 6343              		.loc 1 1066 0
 6344 001f 64488B04 		movq	%fs:40, %rax
 6344      25280000 
 6344      00
 6345 0028 48898424 		movq	%rax, 2056(%rsp)
 6345      08080000 
 6346 0030 31C0     		xorl	%eax, %eax
 6347              	.LBB714:
 6348              	.LBB704:
 6349              		.loc 1 1073 0
 6350 0032 4885C9   		testq	%rcx, %rcx
 6351 0035 B8000000 		movl	$.LC85, %eax
 6351      00
 6352              	.LBE704:
 6353              		.loc 1 1070 0
 6354 003a 48C74710 		movq	$0, 16(%rdi)
 6354      00000000 
 6355              	.LBB711:
 6356              		.loc 1 1073 0
 6357 0042 480F44E8 		cmove	%rax, %rbp
 6358              	.LVL664:
 6359              	.LBB705:
 6360              		.loc 1 1074 0
 6361 0046 4D85C0   		testq	%r8, %r8
 6362              	.LBE705:
 6363              	.LBE711:
 6364              		.loc 1 1070 0
 6365 0049 48C74718 		movq	$0, 24(%rdi)
 6365      00000000 
 6366              	.LBB712:
 6367              	.LBB709:
 6368              		.loc 1 1074 0
 6369 0051 747D     		je	.L497
 6370              	.LBB706:
 6371              		.loc 1 1078 0
 6372 0053 C6042400 		movb	$0, (%rsp)
 6373              	.LVL665:
 6374              	.LBB707:
 6375              	.LBB708:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 6376              		.loc 4 65 0
 6377 0057 4883EC08 		subq	$8, %rsp
 6378              		.cfi_def_cfa_offset 2104
 6379              	.LVL666:
 6380 005b BA010000 		movl	$1, %edx
 6380      00
 6381              	.LVL667:
 6382 0060 4150     		pushq	%r8
 6383              		.cfi_def_cfa_offset 2112
 6384 0062 B9000800 		movl	$2048, %ecx
 6384      00
 6385 0067 BE000800 		movl	$2048, %esi
 6385      00
 6386              	.LVL668:
 6387 006c 4D89C4   		movq	%r8, %r12
 6388 006f 31C0     		xorl	%eax, %eax
 6389 0071 41B80000 		movl	$.LC81, %r8d
 6389      0000
 6390              	.LVL669:
 6391 0077 488D7C24 		leaq	16(%rsp), %rdi
 6391      10
 6392              	.LVL670:
 6393 007c E8000000 		call	__snprintf_chk
 6393      00
 6394              	.LVL671:
 6395              	.LBE708:
 6396              	.LBE707:
 6397              		.loc 1 1080 0
 6398 0081 488D7C24 		leaq	16(%rsp), %rdi
 6398      10
 6399 0086 E8000000 		call	strdup
 6399      00
 6400              	.LVL672:
 6401 008b 48894308 		movq	%rax, 8(%rbx)
 6402 008f 58       		popq	%rax
 6403              		.cfi_def_cfa_offset 2104
 6404 0090 5A       		popq	%rdx
 6405              		.cfi_def_cfa_offset 2096
 6406              	.LVL673:
 6407              	.L494:
 6408              	.LBE706:
 6409              	.LBE709:
 6410              		.loc 1 1082 0
 6411 0091 4889EF   		movq	%rbp, %rdi
 6412 0094 E8000000 		call	strdup
 6412      00
 6413              	.LVL674:
 6414              		.loc 1 1083 0
 6415 0099 4C89E7   		movq	%r12, %rdi
 6416              		.loc 1 1082 0
 6417 009c 48894310 		movq	%rax, 16(%rbx)
 6418              		.loc 1 1083 0
 6419 00a0 E8000000 		call	strdup
 6419      00
 6420              	.LVL675:
 6421              		.loc 1 1084 0
 6422 00a5 4889DF   		movq	%rbx, %rdi
 6423              		.loc 1 1083 0
 6424 00a8 48894318 		movq	%rax, 24(%rbx)
 6425              		.loc 1 1084 0
 6426 00ac E8000000 		call	_ZN14Fl_Preferences8RootNode4readEv
 6426      00
 6427              	.LVL676:
 6428              	.LBE712:
 6429              	.LBE714:
 6430              		.loc 1 1085 0
 6431 00b1 488B8424 		movq	2056(%rsp), %rax
 6431      08080000 
 6432 00b9 64483304 		xorq	%fs:40, %rax
 6432      25280000 
 6432      00
 6433 00c2 7520     		jne	.L498
 6434 00c4 4881C410 		addq	$2064, %rsp
 6434      080000
 6435              		.cfi_remember_state
 6436              		.cfi_def_cfa_offset 32
 6437 00cb 5B       		popq	%rbx
 6438              		.cfi_def_cfa_offset 24
 6439              	.LVL677:
 6440 00cc 5D       		popq	%rbp
 6441              		.cfi_def_cfa_offset 16
 6442              	.LVL678:
 6443 00cd 415C     		popq	%r12
 6444              		.cfi_def_cfa_offset 8
 6445              	.LVL679:
 6446 00cf C3       		ret
 6447              	.LVL680:
 6448              		.p2align 4,,10
 6449              		.p2align 3
 6450              	.L497:
 6451              		.cfi_restore_state
 6452              	.LBB715:
 6453              	.LBB713:
 6454              	.LBB710:
 6455              		.loc 1 1076 0
 6456 00d0 4889D7   		movq	%rdx, %rdi
 6457              		.loc 1 1075 0
 6458 00d3 41BC0000 		movl	$.LC85, %r12d
 6458      0000
 6459              		.loc 1 1076 0
 6460 00d9 E8000000 		call	strdup
 6460      00
 6461              	.LVL681:
 6462 00de 48894308 		movq	%rax, 8(%rbx)
 6463 00e2 EBAD     		jmp	.L494
 6464              	.LVL682:
 6465              	.L498:
 6466              	.LBE710:
 6467              	.LBE713:
 6468              	.LBE715:
 6469              		.loc 1 1085 0
 6470 00e4 E8000000 		call	__stack_chk_fail
 6470      00
 6471              	.LVL683:
 6472              		.cfi_endproc
 6473              	.LFE267:
 6475              		.section	.text.unlikely._ZN14Fl_Preferences8RootNodeC2EPS_PKcS3_S3_
 6476              	.LCOLDE86:
 6477              		.section	.text._ZN14Fl_Preferences8RootNodeC2EPS_PKcS3_S3_
 6478              	.LHOTE86:
 6479              		.globl	_ZN14Fl_Preferences8RootNodeC1EPS_PKcS3_S3_
 6480              		.set	_ZN14Fl_Preferences8RootNodeC1EPS_PKcS3_S3_,_ZN14Fl_Preferences8RootNodeC2EPS_PKcS3_S3_
 6481              		.section	.text.unlikely._ZN14Fl_PreferencesC2EPKcS1_S1_,"ax",@progbits
 6482              		.align 2
 6483              	.LCOLDB87:
 6484              		.section	.text._ZN14Fl_PreferencesC2EPKcS1_S1_,"ax",@progbits
 6485              	.LHOTB87:
 6486              		.align 2
 6487              		.p2align 4,,15
 6488              		.globl	_ZN14Fl_PreferencesC2EPKcS1_S1_
 6490              	_ZN14Fl_PreferencesC2EPKcS1_S1_:
 6491              	.LFB199:
 6492              		.loc 1 250 0
 6493              		.cfi_startproc
 6494              	.LVL684:
 6495 0000 4156     		pushq	%r14
 6496              		.cfi_def_cfa_offset 16
 6497              		.cfi_offset 14, -16
 6498 0002 4155     		pushq	%r13
 6499              		.cfi_def_cfa_offset 24
 6500              		.cfi_offset 13, -24
 6501 0004 4989CE   		movq	%rcx, %r14
 6502 0007 4154     		pushq	%r12
 6503              		.cfi_def_cfa_offset 32
 6504              		.cfi_offset 12, -32
 6505 0009 55       		pushq	%rbp
 6506              		.cfi_def_cfa_offset 40
 6507              		.cfi_offset 6, -40
 6508 000a 4889FD   		movq	%rdi, %rbp
 6509 000d 53       		pushq	%rbx
 6510              		.cfi_def_cfa_offset 48
 6511              		.cfi_offset 3, -48
 6512              	.LBB716:
 6513              		.loc 1 250 0
 6514 000e 48C70700 		movq	$_ZTV14Fl_Preferences+16, (%rdi)
 6514      000000
 6515              		.loc 1 251 0
 6516 0015 BF480000 		movl	$72, %edi
 6516      00
 6517              	.LVL685:
 6518              	.LBE716:
 6519              		.loc 1 250 0
 6520 001a 4989F4   		movq	%rsi, %r12
 6521 001d 4989D5   		movq	%rdx, %r13
 6522              	.LBB725:
 6523              		.loc 1 251 0
 6524 0020 E8000000 		call	_Znwm
 6524      00
 6525              	.LVL686:
 6526              	.LBB717:
 6527              	.LBB718:
 6528              		.loc 1 1207 0
 6529 0025 BF000000 		movl	$.LC83, %edi
 6529      00
 6530              	.LBE718:
 6531              	.LBE717:
 6532              		.loc 1 251 0
 6533 002a 4889C3   		movq	%rax, %rbx
 6534              	.LVL687:
 6535              	.LBB721:
 6536              	.LBB719:
 6537              		.loc 1 1207 0
 6538 002d E8000000 		call	strdup
 6538      00
 6539              	.LVL688:
 6540              		.loc 1 1213 0
 6541 0032 806330F8 		andb	$-8, 48(%rbx)
 6542              	.LBE719:
 6543              	.LBE721:
 6544              		.loc 1 251 0
 6545 0036 48895D08 		movq	%rbx, 8(%rbp)
 6546              		.loc 1 252 0
 6547 003a BF200000 		movl	$32, %edi
 6547      00
 6548              	.LBB722:
 6549              	.LBB720:
 6550              		.loc 1 1207 0
 6551 003f 48894318 		movq	%rax, 24(%rbx)
 6552              		.loc 1 1208 0
 6553 0043 48C70300 		movq	$0, (%rbx)
 6553      000000
 6554 004a 48C74308 		movq	$0, 8(%rbx)
 6554      00000000 
 6555 0052 48C74310 		movq	$0, 16(%rbx)
 6555      00000000 
 6556              		.loc 1 1209 0
 6557 005a 48C74320 		movq	$0, 32(%rbx)
 6557      00000000 
 6558              		.loc 1 1210 0
 6559 0062 C7432C00 		movl	$0, 44(%rbx)
 6559      000000
 6560 0069 C7432800 		movl	$0, 40(%rbx)
 6560      000000
 6561              		.loc 1 1214 0
 6562 0070 48C74338 		movq	$0, 56(%rbx)
 6562      00000000 
 6563              		.loc 1 1215 0
 6564 0078 C7434400 		movl	$0, 68(%rbx)
 6564      000000
 6565 007f C7434000 		movl	$0, 64(%rbx)
 6565      000000
 6566              	.LVL689:
 6567              	.LBE720:
 6568              	.LBE722:
 6569              		.loc 1 252 0
 6570 0086 E8000000 		call	_Znwm
 6570      00
 6571              	.LVL690:
 6572 008b 4C89E2   		movq	%r12, %rdx
 6573 008e 4D89F0   		movq	%r14, %r8
 6574 0091 4C89E9   		movq	%r13, %rcx
 6575 0094 4889EE   		movq	%rbp, %rsi
 6576 0097 4889C7   		movq	%rax, %rdi
 6577 009a 4889C3   		movq	%rax, %rbx
 6578 009d E8000000 		call	_ZN14Fl_Preferences8RootNodeC1EPS_PKcS3_S3_
 6578      00
 6579              	.LVL691:
 6580              		.loc 1 253 0
 6581 00a2 488B5508 		movq	8(%rbp), %rdx
 6582              	.LVL692:
 6583              		.loc 1 252 0
 6584 00a6 48895D10 		movq	%rbx, 16(%rbp)
 6585              	.LBB723:
 6586              	.LBB724:
 6587              		.loc 5 225 0
 6588 00aa 804A3002 		orb	$2, 48(%rdx)
 6589              	.LVL693:
 6590 00ae 48895A10 		movq	%rbx, 16(%rdx)
 6591              	.LBE724:
 6592              	.LBE723:
 6593              	.LBE725:
 6594              		.loc 1 254 0
 6595 00b2 5B       		popq	%rbx
 6596              		.cfi_def_cfa_offset 40
 6597 00b3 5D       		popq	%rbp
 6598              		.cfi_def_cfa_offset 32
 6599              	.LVL694:
 6600 00b4 415C     		popq	%r12
 6601              		.cfi_def_cfa_offset 24
 6602              	.LVL695:
 6603 00b6 415D     		popq	%r13
 6604              		.cfi_def_cfa_offset 16
 6605              	.LVL696:
 6606 00b8 415E     		popq	%r14
 6607              		.cfi_def_cfa_offset 8
 6608              	.LVL697:
 6609 00ba C3       		ret
 6610              		.cfi_endproc
 6611              	.LFE199:
 6613              		.section	.text.unlikely._ZN14Fl_PreferencesC2EPKcS1_S1_
 6614              	.LCOLDE87:
 6615              		.section	.text._ZN14Fl_PreferencesC2EPKcS1_S1_
 6616              	.LHOTE87:
 6617              		.globl	_ZN14Fl_PreferencesC1EPKcS1_S1_
 6618              		.set	_ZN14Fl_PreferencesC1EPKcS1_S1_,_ZN14Fl_PreferencesC2EPKcS1_S1_
 6619              		.section	.text.unlikely._ZN14Fl_Preferences4Node8addChildEPKc,"ax",@progbits
 6620              		.align 2
 6621              	.LCOLDB88:
 6622              		.section	.text._ZN14Fl_Preferences4Node8addChildEPKc,"ax",@progbits
 6623              	.LHOTB88:
 6624              		.align 2
 6625              		.p2align 4,,15
 6626              		.globl	_ZN14Fl_Preferences4Node8addChildEPKc
 6628              	_ZN14Fl_Preferences4Node8addChildEPKc:
 6629              	.LFB290:
 6630              		.loc 1 1325 0
 6631              		.cfi_startproc
 6632              	.LVL698:
 6633 0000 4154     		pushq	%r12
 6634              		.cfi_def_cfa_offset 16
 6635              		.cfi_offset 12, -16
 6636 0002 55       		pushq	%rbp
 6637              		.cfi_def_cfa_offset 24
 6638              		.cfi_offset 6, -24
 6639 0003 4989F1   		movq	%rsi, %r9
 6640 0006 53       		pushq	%rbx
 6641              		.cfi_def_cfa_offset 32
 6642              		.cfi_offset 3, -32
 6643              	.LBB726:
 6644              	.LBB727:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 6645              		.loc 4 34 0
 6646 0007 4C8B4718 		movq	24(%rdi), %r8
 6647              	.LBE727:
 6648              	.LBE726:
 6649              		.loc 1 1325 0
 6650 000b 4889FB   		movq	%rdi, %rbx
 6651              	.LBB729:
 6652              	.LBB728:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 6653              		.loc 4 34 0
 6654 000e BA800000 		movl	$128, %edx
 6654      00
 6655 0013 B9000000 		movl	$.LC43, %ecx
 6655      00
 6656 0018 BE010000 		movl	$1, %esi
 6656      00
 6657              	.LVL699:
 6658 001d BF000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edi
 6658      00
 6659              	.LVL700:
 6660 0022 31C0     		xorl	%eax, %eax
 6661 0024 E8000000 		call	__sprintf_chk
 6661      00
 6662              	.LVL701:
 6663              	.LBE728:
 6664              	.LBE729:
 6665              		.loc 1 1327 0
 6666 0029 BF000000 		movl	$_ZN14Fl_Preferences10nameBufferE, %edi
 6666      00
 6667 002e E8000000 		call	strdup
 6667      00
 6668              	.LVL702:
 6669              		.loc 1 1328 0
 6670 0033 4889DF   		movq	%rbx, %rdi
 6671              		.loc 1 1327 0
 6672 0036 4889C5   		movq	%rax, %rbp
 6673              	.LVL703:
 6674              		.loc 1 1328 0
 6675 0039 4889C6   		movq	%rax, %rsi
 6676 003c E8000000 		call	_ZN14Fl_Preferences4Node4findEPKc
 6676      00
 6677              	.LVL704:
 6678              		.loc 1 1329 0
 6679 0041 4889EF   		movq	%rbp, %rdi
 6680              		.loc 1 1328 0
 6681 0044 4989C4   		movq	%rax, %r12
 6682              	.LVL705:
 6683              		.loc 1 1329 0
 6684 0047 E8000000 		call	free
 6684      00
 6685              	.LVL706:
 6686              		.loc 1 1330 0
 6687 004c 0FB65330 		movzbl	48(%rbx), %edx
 6688              		.loc 1 1333 0
 6689 0050 4C89E0   		movq	%r12, %rax
 6690              		.loc 1 1330 0
 6691 0053 83CA01   		orl	$1, %edx
 6692              	.LVL707:
 6693              	.LBB730:
 6694              	.LBB731:
 6695              		.loc 1 1574 0
 6696 0056 83E2FB   		andl	$-5, %edx
 6697 0059 885330   		movb	%dl, 48(%rbx)
 6698              	.LVL708:
 6699              	.LBE731:
 6700              	.LBE730:
 6701              		.loc 1 1333 0
 6702 005c 5B       		popq	%rbx
 6703              		.cfi_def_cfa_offset 24
 6704              	.LVL709:
 6705 005d 5D       		popq	%rbp
 6706              		.cfi_def_cfa_offset 16
 6707              	.LVL710:
 6708 005e 415C     		popq	%r12
 6709              		.cfi_def_cfa_offset 8
 6710              	.LVL711:
 6711 0060 C3       		ret
 6712              		.cfi_endproc
 6713              	.LFE290:
 6715              		.section	.text.unlikely._ZN14Fl_Preferences4Node8addChildEPKc
 6716              	.LCOLDE88:
 6717              		.section	.text._ZN14Fl_Preferences4Node8addChildEPKc
 6718              	.LHOTE88:
 6719              		.section	.text.unlikely._ZN14Fl_PreferencesC2ERS_PKc,"ax",@progbits
 6720              		.align 2
 6721              	.LCOLDB89:
 6722              		.section	.text._ZN14Fl_PreferencesC2ERS_PKc,"ax",@progbits
 6723              	.LHOTB89:
 6724              		.align 2
 6725              		.p2align 4,,15
 6726              		.globl	_ZN14Fl_PreferencesC2ERS_PKc
 6728              	_ZN14Fl_PreferencesC2ERS_PKc:
 6729              	.LFB202:
 6730              		.loc 1 266 0
 6731              		.cfi_startproc
 6732              	.LVL712:
 6733 0000 53       		pushq	%rbx
 6734              		.cfi_def_cfa_offset 16
 6735              		.cfi_offset 3, -16
 6736              	.LBB732:
 6737              		.loc 1 266 0
 6738 0001 48C70700 		movq	$_ZTV14Fl_Preferences+16, (%rdi)
 6738      000000
 6739              	.LBE732:
 6740 0008 4889FB   		movq	%rdi, %rbx
 6741              	.LBB733:
 6742              		.loc 1 267 0
 6743 000b 488B4610 		movq	16(%rsi), %rax
 6744 000f 48894710 		movq	%rax, 16(%rdi)
 6745              		.loc 1 268 0
 6746 0013 488B7E08 		movq	8(%rsi), %rdi
 6747              	.LVL713:
 6748 0017 4889D6   		movq	%rdx, %rsi
 6749              	.LVL714:
 6750 001a E8000000 		call	_ZN14Fl_Preferences4Node8addChildEPKc
 6750      00
 6751              	.LVL715:
 6752 001f 48894308 		movq	%rax, 8(%rbx)
 6753              	.LBE733:
 6754              		.loc 1 269 0
 6755 0023 5B       		popq	%rbx
 6756              		.cfi_def_cfa_offset 8
 6757              	.LVL716:
 6758 0024 C3       		ret
 6759              		.cfi_endproc
 6760              	.LFE202:
 6762              		.section	.text.unlikely._ZN14Fl_PreferencesC2ERS_PKc
 6763              	.LCOLDE89:
 6764              		.section	.text._ZN14Fl_PreferencesC2ERS_PKc
 6765              	.LHOTE89:
 6766              		.globl	_ZN14Fl_PreferencesC1ERS_PKc
 6767              		.set	_ZN14Fl_PreferencesC1ERS_PKc,_ZN14Fl_PreferencesC2ERS_PKc
 6768              		.section	.text.unlikely._ZN14Fl_PreferencesC2EPS_PKc,"ax",@progbits
 6769              		.align 2
 6770              	.LCOLDB90:
 6771              		.section	.text._ZN14Fl_PreferencesC2EPS_PKc,"ax",@progbits
 6772              	.LHOTB90:
 6773              		.align 2
 6774              		.p2align 4,,15
 6775              		.globl	_ZN14Fl_PreferencesC2EPS_PKc
 6777              	_ZN14Fl_PreferencesC2EPS_PKc:
 6778              	.LFB205:
 6779              		.loc 1 281 0
 6780              		.cfi_startproc
 6781              	.LVL717:
 6782 0000 55       		pushq	%rbp
 6783              		.cfi_def_cfa_offset 16
 6784              		.cfi_offset 6, -16
 6785 0001 53       		pushq	%rbx
 6786              		.cfi_def_cfa_offset 24
 6787              		.cfi_offset 3, -24
 6788 0002 4889FB   		movq	%rdi, %rbx
 6789 0005 4883EC18 		subq	$24, %rsp
 6790              		.cfi_def_cfa_offset 48
 6791              	.LBB734:
 6792              		.loc 1 282 0
 6793 0009 4885F6   		testq	%rsi, %rsi
 6794              		.loc 1 281 0
 6795 000c 48C70700 		movq	$_ZTV14Fl_Preferences+16, (%rdi)
 6795      000000
 6796              		.loc 1 282 0
 6797 0013 7423     		je	.L510
 6798              	.LVL718:
 6799              	.L506:
 6800              		.loc 1 291 0
 6801 0015 488B4610 		movq	16(%rsi), %rax
 6802 0019 48894310 		movq	%rax, 16(%rbx)
 6803              		.loc 1 292 0
 6804 001d 488B7E08 		movq	8(%rsi), %rdi
 6805 0021 4889D6   		movq	%rdx, %rsi
 6806              	.LVL719:
 6807 0024 E8000000 		call	_ZN14Fl_Preferences4Node8addChildEPKc
 6807      00
 6808              	.LVL720:
 6809 0029 48894308 		movq	%rax, 8(%rbx)
 6810              	.LBE734:
 6811              		.loc 1 293 0
 6812 002d 4883C418 		addq	$24, %rsp
 6813              		.cfi_remember_state
 6814              		.cfi_def_cfa_offset 24
 6815 0031 5B       		popq	%rbx
 6816              		.cfi_def_cfa_offset 16
 6817              	.LVL721:
 6818 0032 5D       		popq	%rbp
 6819              		.cfi_def_cfa_offset 8
 6820 0033 C3       		ret
 6821              	.LVL722:
 6822              		.p2align 4,,10
 6823 0034 0F1F4000 		.p2align 3
 6824              	.L510:
 6825              		.cfi_restore_state
 6826              	.LBB751:
 6827              		.loc 1 283 0
 6828 0038 488B3500 		movq	_ZN14Fl_Preferences12runtimePrefsE(%rip), %rsi
 6828      000000
 6829              	.LVL723:
 6830 003f 4885F6   		testq	%rsi, %rsi
 6831 0042 75D1     		jne	.L506
 6832              		.loc 1 284 0
 6833 0044 BF180000 		movl	$24, %edi
 6833      00
 6834 0049 48895424 		movq	%rdx, 8(%rsp)
 6834      08
 6835 004e E8000000 		call	_Znwm
 6835      00
 6836              	.LVL724:
 6837              		.loc 1 285 0
 6838 0053 BF480000 		movl	$72, %edi
 6838      00
 6839              	.LBB735:
 6840              	.LBB736:
 181:fltk-1.3.4-1/FL/Fl_Preferences.H ****   Fl_Preferences &operator=(const Fl_Preferences&);
 6841              		.loc 5 181 0
 6842 0058 48C70000 		movq	$_ZTV14Fl_Preferences+16, (%rax)
 6842      000000
 6843 005f 48C74008 		movq	$0, 8(%rax)
 6843      00000000 
 6844 0067 48C74010 		movq	$0, 16(%rax)
 6844      00000000 
 6845              	.LVL725:
 6846              	.LBE736:
 6847              	.LBE735:
 6848              		.loc 1 284 0
 6849 006f 48890500 		movq	%rax, _ZN14Fl_Preferences12runtimePrefsE(%rip)
 6849      000000
 6850              		.loc 1 285 0
 6851 0076 E8000000 		call	_Znwm
 6851      00
 6852              	.LVL726:
 6853              	.LBB737:
 6854              	.LBB738:
 6855              		.loc 1 1207 0
 6856 007b BF000000 		movl	$.LC83, %edi
 6856      00
 6857              	.LBE738:
 6858              	.LBE737:
 6859              		.loc 1 285 0
 6860 0080 4889C5   		movq	%rax, %rbp
 6861              	.LVL727:
 6862              	.LBB741:
 6863              	.LBB739:
 6864              		.loc 1 1207 0
 6865 0083 E8000000 		call	strdup
 6865      00
 6866              	.LVL728:
 6867              		.loc 1 1213 0
 6868 0088 806530F8 		andb	$-8, 48(%rbp)
 6869              		.loc 1 1207 0
 6870 008c 48894518 		movq	%rax, 24(%rbp)
 6871              	.LBE739:
 6872              	.LBE741:
 6873              		.loc 1 286 0
 6874 0090 BF200000 		movl	$32, %edi
 6874      00
 6875              		.loc 1 285 0
 6876 0095 488B0500 		movq	_ZN14Fl_Preferences12runtimePrefsE(%rip), %rax
 6876      000000
 6877              	.LBB742:
 6878              	.LBB740:
 6879              		.loc 1 1208 0
 6880 009c 48C74500 		movq	$0, 0(%rbp)
 6880      00000000 
 6881 00a4 48C74508 		movq	$0, 8(%rbp)
 6881      00000000 
 6882 00ac 48C74510 		movq	$0, 16(%rbp)
 6882      00000000 
 6883              		.loc 1 1209 0
 6884 00b4 48C74520 		movq	$0, 32(%rbp)
 6884      00000000 
 6885              		.loc 1 1210 0
 6886 00bc C7452C00 		movl	$0, 44(%rbp)
 6886      000000
 6887 00c3 C7452800 		movl	$0, 40(%rbp)
 6887      000000
 6888              		.loc 1 1214 0
 6889 00ca 48C74538 		movq	$0, 56(%rbp)
 6889      00000000 
 6890              		.loc 1 1215 0
 6891 00d2 C7454400 		movl	$0, 68(%rbp)
 6891      000000
 6892 00d9 C7454000 		movl	$0, 64(%rbp)
 6892      000000
 6893              	.LVL729:
 6894              	.LBE740:
 6895              	.LBE742:
 6896              		.loc 1 285 0
 6897 00e0 48896808 		movq	%rbp, 8(%rax)
 6898              		.loc 1 286 0
 6899 00e4 E8000000 		call	_Znwm
 6899      00
 6900              	.LVL730:
 6901 00e9 488B0D00 		movq	_ZN14Fl_Preferences12runtimePrefsE(%rip), %rcx
 6901      000000
 6902              	.LVL731:
 6903              	.LBB743:
 6904              	.LBB744:
 6905              		.loc 1 1093 0
 6906 00f0 48C74010 		movq	$0, 16(%rax)
 6906      00000000 
 6907 00f8 48C74008 		movq	$0, 8(%rax)
 6907      00000000 
 6908 0100 48C74018 		movq	$0, 24(%rax)
 6908      00000000 
 6909              	.LVL732:
 6910              	.LBE744:
 6911              	.LBE743:
 6912              	.LBB746:
 6913              	.LBB747:
 6914              		.loc 5 225 0
 6915 0108 488B5424 		movq	8(%rsp), %rdx
 6915      08
 6916              	.LBE747:
 6917              	.LBE746:
 6918              	.LBB749:
 6919              	.LBB745:
 6920              		.loc 1 1093 0
 6921 010d 488908   		movq	%rcx, (%rax)
 6922              	.LBE745:
 6923              	.LBE749:
 6924              		.loc 1 286 0
 6925 0110 48894110 		movq	%rax, 16(%rcx)
 6926              		.loc 1 287 0
 6927 0114 488B4108 		movq	8(%rcx), %rax
 6928              	.LVL733:
 6929 0118 488B7310 		movq	16(%rbx), %rsi
 6930              	.LVL734:
 6931              	.LBB750:
 6932              	.LBB748:
 6933              		.loc 5 225 0
 6934 011c 80483002 		orb	$2, 48(%rax)
 6935 0120 48897010 		movq	%rsi, 16(%rax)
 6936 0124 4889CE   		movq	%rcx, %rsi
 6937              	.LVL735:
 6938 0127 E9E9FEFF 		jmp	.L506
 6938      FF
 6939              	.LBE748:
 6940              	.LBE750:
 6941              	.LBE751:
 6942              		.cfi_endproc
 6943              	.LFE205:
 6945              		.section	.text.unlikely._ZN14Fl_PreferencesC2EPS_PKc
 6946              	.LCOLDE90:
 6947              		.section	.text._ZN14Fl_PreferencesC2EPS_PKc
 6948              	.LHOTE90:
 6949              		.globl	_ZN14Fl_PreferencesC1EPS_PKc
 6950              		.set	_ZN14Fl_PreferencesC1EPS_PKc,_ZN14Fl_PreferencesC2EPS_PKc
 6951              		.section	.text.unlikely._ZN14Fl_Preferences4Node6searchEPKci,"ax",@progbits
 6952              		.align 2
 6953              	.LCOLDB91:
 6954              		.section	.text._ZN14Fl_Preferences4Node6searchEPKci,"ax",@progbits
 6955              	.LHOTB91:
 6956              		.align 2
 6957              		.p2align 4,,15
 6958              		.globl	_ZN14Fl_Preferences4Node6searchEPKci
 6960              	_ZN14Fl_Preferences4Node6searchEPKci:
 6961              	.LFB298:
 6962              		.loc 1 1453 0
 6963              		.cfi_startproc
 6964              	.LVL736:
 6965              	.LBB752:
 6966              		.loc 1 1454 0
 6967 0000 85D2     		testl	%edx, %edx
 6968              	.LBE752:
 6969              		.loc 1 1453 0
 6970 0002 4156     		pushq	%r14
 6971              		.cfi_def_cfa_offset 16
 6972              		.cfi_offset 14, -16
 6973 0004 4155     		pushq	%r13
 6974              		.cfi_def_cfa_offset 24
 6975              		.cfi_offset 13, -24
 6976 0006 4154     		pushq	%r12
 6977              		.cfi_def_cfa_offset 32
 6978              		.cfi_offset 12, -32
 6979 0008 55       		pushq	%rbp
 6980              		.cfi_def_cfa_offset 40
 6981              		.cfi_offset 6, -40
 6982 0009 4889F5   		movq	%rsi, %rbp
 6983 000c 53       		pushq	%rbx
 6984              		.cfi_def_cfa_offset 48
 6985              		.cfi_offset 3, -48
 6986              		.loc 1 1453 0
 6987 000d 4889FB   		movq	%rdi, %rbx
 6988              	.LBB768:
 6989              		.loc 1 1454 0
 6990 0010 0F85F500 		jne	.L532
 6990      0000
 6991              	.LBB753:
 6992              	.LBB754:
 6993              		.loc 1 1455 0
 6994 0016 803E2E   		cmpb	$46, (%rsi)
 6995 0019 0F85BE00 		jne	.L514
 6995      0000
 6996              	.LBB755:
 6997              		.loc 1 1456 0
 6998 001f 0FB64601 		movzbl	1(%rsi), %eax
 6999 0023 84C0     		testb	%al, %al
 7000 0025 0F84C900 		je	.L522
 7000      0000
 7001              	.LBB756:
 7002              		.loc 1 1458 0
 7003 002b 3C2F     		cmpb	$47, %al
 7004 002d 7415     		je	.L517
 7005 002f E9A90000 		jmp	.L514
 7005      00
 7006              	.LVL737:
 7007              		.p2align 4,,10
 7008 0034 0F1F4000 		.p2align 3
 7009              	.L533:
 7010              	.LBB757:
 7011              	.LBB758:
 7012              	.LBB759:
 224:fltk-1.3.4-1/FL/Fl_Preferences.H ****     void setRoot(RootNode *r) { root_ = r; top_ = 1; }
 7013              		.loc 5 224 0
 7014 0038 488B4310 		movq	16(%rbx), %rax
 7015              	.LVL738:
 7016              	.LBE759:
 7017              	.LBE758:
 7018              		.loc 1 1460 0
 7019 003c 4885C0   		testq	%rax, %rax
 7020 003f 7409     		je	.L516
 7021 0041 4889C3   		movq	%rax, %rbx
 7022              	.LVL739:
 7023              	.L517:
 7024              	.LBB761:
 7025              	.LBB760:
 224:fltk-1.3.4-1/FL/Fl_Preferences.H ****     void setRoot(RootNode *r) { root_ = r; top_ = 1; }
 7026              		.loc 5 224 0 discriminator 2
 7027 0044 F6433002 		testb	$2, 48(%rbx)
 7028 0048 74EE     		je	.L533
 7029              	.LVL740:
 7030              	.L516:
 7031              	.LBE760:
 7032              	.LBE761:
 7033              		.loc 1 1461 0
 7034 004a 807D0200 		cmpb	$0, 2(%rbp)
 7035 004e 0F84A000 		je	.L522
 7035      0000
 7036 0054 4C8B6318 		movq	24(%rbx), %r12
 7037              		.loc 1 1464 0
 7038 0058 4883C502 		addq	$2, %rbp
 7039 005c 41BE0200 		movl	$2, %r14d
 7039      0000
 7040 0062 4C89E7   		movq	%r12, %rdi
 7041              	.LVL741:
 7042 0065 E8000000 		call	strlen
 7042      00
 7043              	.LVL742:
 7044              	.LBE757:
 7045              	.LBE756:
 7046              	.LBE755:
 7047              	.LBE754:
 7048              	.LBE753:
 7049 006a BA010000 		movl	$1, %edx
 7049      00
 7050              	.LVL743:
 7051              	.L513:
 7052              	.LBE768:
 7053              		.loc 1 1470 0
 7054 006f 39C2     		cmpl	%eax, %edx
 7055 0071 0F8F8900 		jg	.L527
 7055      0000
 7056              		.loc 1 1471 0
 7057 0077 4429F0   		subl	%r14d, %eax
 7058              	.LVL744:
 7059              	.LBB769:
 7060              		.loc 1 1472 0
 7061 007a 85C0     		testl	%eax, %eax
 7062 007c 7E2C     		jle	.L518
 7063              		.loc 1 1472 0 is_stmt 0 discriminator 1
 7064 007e 4C63E8   		movslq	%eax, %r13
 7065 0081 4963F6   		movslq	%r14d, %rsi
 7066 0084 4889EF   		movq	%rbp, %rdi
 7067 0087 4C01E6   		addq	%r12, %rsi
 7068 008a 4C89EA   		movq	%r13, %rdx
 7069 008d E8000000 		call	strncmp
 7069      00
 7070              	.LVL745:
 7071 0092 85C0     		testl	%eax, %eax
 7072 0094 756A     		jne	.L527
 7073              	.LBB770:
 7074              		.loc 1 1473 0 is_stmt 1 discriminator 1
 7075 0096 420FB654 		movzbl	0(%rbp,%r13), %edx
 7075      2D00
 7076 009c 4889D8   		movq	%rbx, %rax
 7077 009f 84D2     		testb	%dl, %dl
 7078 00a1 7431     		je	.L515
 7079              	.LBE770:
 7080              	.LBE769:
 7081              		.loc 1 1470 0 discriminator 1
 7082 00a3 31C0     		xorl	%eax, %eax
 7083              	.LBB775:
 7084              	.LBB774:
 7085              	.LBB771:
 7086              		.loc 1 1475 0 discriminator 1
 7087 00a5 80FA2F   		cmpb	$47, %dl
 7088 00a8 752A     		jne	.L515
 7089              	.LVL746:
 7090              	.L518:
 7091              	.LBB772:
 7092              		.loc 1 1476 0
 7093 00aa 488B1B   		movq	(%rbx), %rbx
 7094              	.LVL747:
 7095 00ad 4885DB   		testq	%rbx, %rbx
 7096 00b0 750F     		jne	.L519
 7097 00b2 EB4C     		jmp	.L527
 7098              	.LVL748:
 7099              		.p2align 4,,10
 7100 00b4 0F1F4000 		.p2align 3
 7101              	.L534:
 7102              		.loc 1 1476 0 is_stmt 0 discriminator 2
 7103 00b8 488B5B08 		movq	8(%rbx), %rbx
 7104              	.LVL749:
 7105 00bc 4885DB   		testq	%rbx, %rbx
 7106 00bf 7413     		je	.L515
 7107              	.LVL750:
 7108              	.L519:
 7109              	.LBB773:
 7110              		.loc 1 1477 0 is_stmt 1
 7111 00c1 4489F2   		movl	%r14d, %edx
 7112 00c4 4889EE   		movq	%rbp, %rsi
 7113 00c7 4889DF   		movq	%rbx, %rdi
 7114 00ca E8000000 		call	_ZN14Fl_Preferences4Node6searchEPKci
 7114      00
 7115              	.LVL751:
 7116              		.loc 1 1478 0
 7117 00cf 4885C0   		testq	%rax, %rax
 7118 00d2 74E4     		je	.L534
 7119              	.LVL752:
 7120              	.L515:
 7121              	.LBE773:
 7122              	.LBE772:
 7123              	.LBE771:
 7124              	.LBE774:
 7125              	.LBE775:
 7126              		.loc 1 1484 0
 7127 00d4 5B       		popq	%rbx
 7128              		.cfi_remember_state
 7129              		.cfi_def_cfa_offset 40
 7130 00d5 5D       		popq	%rbp
 7131              		.cfi_def_cfa_offset 32
 7132 00d6 415C     		popq	%r12
 7133              		.cfi_def_cfa_offset 24
 7134 00d8 415D     		popq	%r13
 7135              		.cfi_def_cfa_offset 16
 7136 00da 415E     		popq	%r14
 7137              		.cfi_def_cfa_offset 8
 7138              	.LVL753:
 7139 00dc C3       		ret
 7140              	.LVL754:
 7141              	.L514:
 7142              		.cfi_restore_state
 7143              	.LBB776:
 7144              	.LBB766:
 7145              		.loc 1 1467 0
 7146 00dd 4C8B6318 		movq	24(%rbx), %r12
 7147 00e1 4C89E7   		movq	%r12, %rdi
 7148 00e4 E8000000 		call	strlen
 7148      00
 7149              	.LVL755:
 7150 00e9 89C2     		movl	%eax, %edx
 7151 00eb 448D7001 		leal	1(%rax), %r14d
 7152              	.LVL756:
 7153              	.LBE766:
 7154 00ef E97BFFFF 		jmp	.L513
 7154      FF
 7155              	.LVL757:
 7156              	.L522:
 7157              	.LBB767:
 7158              	.LBB765:
 7159              	.LBB764:
 7160              	.LBB763:
 7161              	.LBB762:
 7162 00f4 4889D8   		movq	%rbx, %rax
 7163              	.LBE762:
 7164              	.LBE763:
 7165              	.LBE764:
 7166              	.LBE765:
 7167              	.LBE767:
 7168              	.LBE776:
 7169              		.loc 1 1484 0
 7170 00f7 5B       		popq	%rbx
 7171              		.cfi_remember_state
 7172              		.cfi_def_cfa_offset 40
 7173 00f8 5D       		popq	%rbp
 7174              		.cfi_def_cfa_offset 32
 7175 00f9 415C     		popq	%r12
 7176              		.cfi_def_cfa_offset 24
 7177 00fb 415D     		popq	%r13
 7178              		.cfi_def_cfa_offset 16
 7179 00fd 415E     		popq	%r14
 7180              		.cfi_def_cfa_offset 8
 7181 00ff C3       		ret
 7182              	.LVL758:
 7183              	.L527:
 7184              		.cfi_restore_state
 7185 0100 5B       		popq	%rbx
 7186              		.cfi_remember_state
 7187              		.cfi_def_cfa_offset 40
 7188              		.loc 1 1470 0
 7189 0101 31C0     		xorl	%eax, %eax
 7190              		.loc 1 1484 0
 7191 0103 5D       		popq	%rbp
 7192              		.cfi_def_cfa_offset 32
 7193 0104 415C     		popq	%r12
 7194              		.cfi_def_cfa_offset 24
 7195 0106 415D     		popq	%r13
 7196              		.cfi_def_cfa_offset 16
 7197 0108 415E     		popq	%r14
 7198              		.cfi_def_cfa_offset 8
 7199              	.LVL759:
 7200 010a C3       		ret
 7201              	.LVL760:
 7202              	.L532:
 7203              		.cfi_restore_state
 7204 010b 4C8B6718 		movq	24(%rdi), %r12
 7205 010f 4189D6   		movl	%edx, %r14d
 7206 0112 4C89E7   		movq	%r12, %rdi
 7207 0115 E8000000 		call	strlen
 7207      00
 7208              	.LVL761:
 7209 011a 418D56FF 		leal	-1(%r14), %edx
 7210 011e E94CFFFF 		jmp	.L513
 7210      FF
 7211              		.cfi_endproc
 7212              	.LFE298:
 7214              		.section	.text.unlikely._ZN14Fl_Preferences4Node6searchEPKci
 7215              	.LCOLDE91:
 7216              		.section	.text._ZN14Fl_Preferences4Node6searchEPKci
 7217              	.LHOTE91:
 7218              		.section	.text.unlikely._ZN14Fl_Preferences11groupExistsEPKc,"ax",@progbits
 7219              		.align 2
 7220              	.LCOLDB92:
 7221              		.section	.text._ZN14Fl_Preferences11groupExistsEPKc,"ax",@progbits
 7222              	.LHOTB92:
 7223              		.align 2
 7224              		.p2align 4,,15
 7225              		.globl	_ZN14Fl_Preferences11groupExistsEPKc
 7227              	_ZN14Fl_Preferences11groupExistsEPKc:
 7228              	.LFB226:
 7229              		.loc 1 412 0
 7230              		.cfi_startproc
 7231              	.LVL762:
 7232 0000 4883EC08 		subq	$8, %rsp
 7233              		.cfi_def_cfa_offset 16
 7234              		.loc 1 413 0
 7235 0004 488B7F08 		movq	8(%rdi), %rdi
 7236              	.LVL763:
 7237 0008 31D2     		xorl	%edx, %edx
 7238 000a E8000000 		call	_ZN14Fl_Preferences4Node6searchEPKci
 7238      00
 7239              	.LVL764:
 7240 000f 4885C0   		testq	%rax, %rax
 7241 0012 0F95C0   		setne	%al
 7242              		.loc 1 414 0
 7243 0015 4883C408 		addq	$8, %rsp
 7244              		.cfi_def_cfa_offset 8
 7245 0019 C3       		ret
 7246              		.cfi_endproc
 7247              	.LFE226:
 7249              		.section	.text.unlikely._ZN14Fl_Preferences11groupExistsEPKc
 7250              	.LCOLDE92:
 7251              		.section	.text._ZN14Fl_Preferences11groupExistsEPKc
 7252              	.LHOTE92:
 7253              		.section	.text.unlikely._ZN14Fl_Preferences4Node9nChildrenEv,"ax",@progbits
 7254              		.align 2
 7255              	.LCOLDB93:
 7256              		.section	.text._ZN14Fl_Preferences4Node9nChildrenEv,"ax",@progbits
 7257              	.LHOTB93:
 7258              		.align 2
 7259              		.p2align 4,,15
 7260              		.globl	_ZN14Fl_Preferences4Node9nChildrenEv
 7262              	_ZN14Fl_Preferences4Node9nChildrenEv:
 7263              	.LFB299:
 7264              		.loc 1 1487 0
 7265              		.cfi_startproc
 7266              	.LVL765:
 7267              	.LBB777:
 7268              		.loc 1 1488 0
 7269 0000 F6473004 		testb	$4, 48(%rdi)
 7270 0004 750A     		jne	.L541
 7271              	.LBE777:
 7272 0006 E9000000 		jmp	_ZN14Fl_Preferences4Node9nChildrenEv.part.5
 7272      00
 7273              	.LVL766:
 7274 000b 0F1F4400 		.p2align 4,,10
 7274      00
 7275              		.p2align 3
 7276              	.L541:
 7277              	.LBB778:
 7278              		.loc 1 1489 0
 7279 0010 8B4740   		movl	64(%rdi), %eax
 7280              	.LBE778:
 7281              		.loc 1 1496 0
 7282 0013 C3       		ret
 7283              		.cfi_endproc
 7284              	.LFE299:
 7286              		.section	.text.unlikely._ZN14Fl_Preferences4Node9nChildrenEv
 7287              	.LCOLDE93:
 7288              		.section	.text._ZN14Fl_Preferences4Node9nChildrenEv
 7289              	.LHOTE93:
 7290              		.section	.text.unlikely._ZN14Fl_Preferences4Node4nameEv,"ax",@progbits
 7291              		.align 2
 7292              	.LCOLDB94:
 7293              		.section	.text._ZN14Fl_Preferences4Node4nameEv,"ax",@progbits
 7294              	.LHOTB94:
 7295              		.align 2
 7296              		.p2align 4,,15
 7297              		.globl	_ZN14Fl_Preferences4Node4nameEv
 7299              	_ZN14Fl_Preferences4Node4nameEv:
 7300              	.LFB300:
 7301              		.loc 1 1499 0
 7302              		.cfi_startproc
 7303              	.LVL767:
 7304 0000 53       		pushq	%rbx
 7305              		.cfi_def_cfa_offset 16
 7306              		.cfi_offset 3, -16
 7307              	.LBB779:
 7308              		.loc 1 1500 0
 7309 0001 488B5F18 		movq	24(%rdi), %rbx
 7310 0005 4885DB   		testq	%rbx, %rbx
 7311 0008 7426     		je	.L544
 7312              	.LVL768:
 7313              	.LBB780:
 7314              	.LBB781:
 7315              	.LBB782:
 7316              		.loc 6 247 0
 7317 000a 4889DF   		movq	%rbx, %rdi
 7318              	.LVL769:
 7319 000d BE2F0000 		movl	$47, %esi
 7319      00
 7320 0012 E8000000 		call	strrchr
 7320      00
 7321              	.LVL770:
 7322              	.LBE782:
 7323              	.LBE781:
 7324              		.loc 1 1502 0
 7325 0017 488D5001 		leaq	1(%rax), %rdx
 7326 001b 4885C0   		testq	%rax, %rax
 7327 001e 4889D0   		movq	%rdx, %rax
 7328 0021 480F44C3 		cmove	%rbx, %rax
 7329              	.LBE780:
 7330              	.LBE779:
 7331              		.loc 1 1506 0
 7332 0025 5B       		popq	%rbx
 7333              		.cfi_remember_state
 7334              		.cfi_def_cfa_offset 8
 7335 0026 C3       		ret
 7336              	.LVL771:
 7337 0027 660F1F84 		.p2align 4,,10
 7337      00000000 
 7337      00
 7338              		.p2align 3
 7339              	.L544:
 7340              		.cfi_restore_state
 7341              	.LBB783:
 7342              		.loc 1 1504 0
 7343 0030 31C0     		xorl	%eax, %eax
 7344              	.LBE783:
 7345              		.loc 1 1506 0
 7346 0032 5B       		popq	%rbx
 7347              		.cfi_def_cfa_offset 8
 7348 0033 C3       		ret
 7349              		.cfi_endproc
 7350              	.LFE300:
 7352              		.section	.text.unlikely._ZN14Fl_Preferences4Node4nameEv
 7353              	.LCOLDE94:
 7354              		.section	.text._ZN14Fl_Preferences4Node4nameEv
 7355              	.LHOTE94:
 7356              		.section	.text.unlikely._ZN14Fl_Preferences4Node6removeEv,"ax",@progbits
 7357              		.align 2
 7358              	.LCOLDB95:
 7359              		.section	.text._ZN14Fl_Preferences4Node6removeEv,"ax",@progbits
 7360              	.LHOTB95:
 7361              		.align 2
 7362              		.p2align 4,,15
 7363              		.globl	_ZN14Fl_Preferences4Node6removeEv
 7365              	_ZN14Fl_Preferences4Node6removeEv:
 7366              	.LFB303:
 7367              		.loc 1 1537 0
 7368              		.cfi_startproc
 7369              	.LVL772:
 7370 0000 55       		pushq	%rbp
 7371              		.cfi_def_cfa_offset 16
 7372              		.cfi_offset 6, -16
 7373 0001 53       		pushq	%rbx
 7374              		.cfi_def_cfa_offset 24
 7375              		.cfi_offset 3, -24
 7376 0002 4883EC08 		subq	$8, %rsp
 7377              		.cfi_def_cfa_offset 32
 7378              	.LBB784:
 7379              	.LBB785:
 224:fltk-1.3.4-1/FL/Fl_Preferences.H ****     void setRoot(RootNode *r) { root_ = r; top_ = 1; }
 7380              		.loc 5 224 0
 7381 0006 F6473002 		testb	$2, 48(%rdi)
 7382 000a 0F858000 		jne	.L560
 7382      0000
 7383 0010 488B4F10 		movq	16(%rdi), %rcx
 7384              	.LVL773:
 7385              	.LBE785:
 7386              	.LBE784:
 7387              		.loc 1 1539 0
 7388 0014 4885C9   		testq	%rcx, %rcx
 7389 0017 7477     		je	.L560
 7390              		.loc 1 1540 0
 7391 0019 488B11   		movq	(%rcx), %rdx
 7392              	.LVL774:
 7393              		.loc 1 1541 0
 7394 001c 4885D2   		testq	%rdx, %rdx
 7395 001f 0F84A100 		je	.L561
 7395      0000
 7396              		.loc 1 1542 0
 7397 0025 4839D7   		cmpq	%rdx, %rdi
 7398 0028 750E     		jne	.L554
 7399 002a E98B0000 		jmp	.L569
 7399      00
 7400              	.LVL775:
 7401 002f 90       		.p2align 4,,10
 7402              		.p2align 3
 7403              	.L565:
 7404 0030 4839C7   		cmpq	%rax, %rdi
 7405 0033 7463     		je	.L553
 7406 0035 4889C2   		movq	%rax, %rdx
 7407              	.LVL776:
 7408              	.L554:
 7409              		.loc 1 1541 0
 7410 0038 488B4208 		movq	8(%rdx), %rax
 7411              	.LVL777:
 7412 003c 4885C0   		testq	%rax, %rax
 7413 003f 75EF     		jne	.L565
 7414              	.LVL778:
 7415              	.L550:
 7416              		.loc 1 1550 0
 7417 0041 80493001 		orb	$1, 48(%rcx)
 7418              	.LVL779:
 7419              	.LBB786:
 7420              	.LBB787:
 224:fltk-1.3.4-1/FL/Fl_Preferences.H ****     void setRoot(RootNode *r) { root_ = r; top_ = 1; }
 7421              		.loc 5 224 0
 7422 0045 F6473002 		testb	$2, 48(%rdi)
 7423 0049 752D     		jne	.L558
 7424 004b 488B5710 		movq	16(%rdi), %rdx
 7425              	.LVL780:
 7426              	.LBE787:
 7427              	.LBE786:
 7428              	.LBB788:
 7429              	.LBB789:
 7430              		.loc 1 1574 0
 7431 004f 806230FB 		andb	$-5, 48(%rdx)
 7432 0053 4885C0   		testq	%rax, %rax
 7433 0056 400F95C5 		setne	%bpl
 7434              	.L549:
 7435 005a 4889FB   		movq	%rdi, %rbx
 7436              	.LBE789:
 7437              	.LBE788:
 7438              		.loc 1 1553 0 discriminator 1
 7439 005d E8000000 		call	_ZN14Fl_Preferences4NodeD1Ev
 7439      00
 7440              	.LVL781:
 7441 0062 4889DF   		movq	%rbx, %rdi
 7442 0065 E8000000 		call	_ZdlPv
 7442      00
 7443              	.LVL782:
 7444              		.loc 1 1555 0 discriminator 1
 7445 006a 4883C408 		addq	$8, %rsp
 7446              		.cfi_remember_state
 7447              		.cfi_def_cfa_offset 24
 7448 006e 89E8     		movl	%ebp, %eax
 7449 0070 5B       		popq	%rbx
 7450              		.cfi_def_cfa_offset 16
 7451              	.LVL783:
 7452 0071 5D       		popq	%rbp
 7453              		.cfi_def_cfa_offset 8
 7454 0072 C3       		ret
 7455              	.LVL784:
 7456              		.p2align 4,,10
 7457 0073 0F1F4400 		.p2align 3
 7457      00
 7458              	.L558:
 7459              		.cfi_restore_state
 7460              	.LBB791:
 7461              	.LBB790:
 7462              		.loc 1 1574 0
 7463 0078 0FB60425 		movzbl	48, %eax
 7463      30000000 
 7464 0080 83E0FB   		andl	$-5, %eax
 7465 0083 88042530 		movb	%al, 48
 7465      000000
 7466 008a 0F0B     		ud2
 7467              	.LVL785:
 7468 008c 0F1F4000 		.p2align 4,,10
 7469              		.p2align 3
 7470              	.L560:
 7471              	.LBE790:
 7472              	.LBE791:
 7473              		.loc 1 1539 0
 7474 0090 31ED     		xorl	%ebp, %ebp
 7475 0092 EBC6     		jmp	.L549
 7476              	.LVL786:
 7477              		.p2align 4,,10
 7478 0094 0F1F4000 		.p2align 3
 7479              	.L553:
 7480              		.loc 1 1544 0
 7481 0098 488B4F08 		movq	8(%rdi), %rcx
 7482 009c 48894A08 		movq	%rcx, 8(%rdx)
 7483              	.LVL787:
 7484              	.L555:
 7485              	.LBB792:
 7486              	.LBB793:
 224:fltk-1.3.4-1/FL/Fl_Preferences.H ****     void setRoot(RootNode *r) { root_ = r; top_ = 1; }
 7487              		.loc 5 224 0
 7488 00a0 F6473002 		testb	$2, 48(%rdi)
 7489 00a4 7427     		je	.L570
 7490              	.LVL788:
 7491              	.LBE793:
 7492              	.LBE792:
 7493              		.loc 1 1550 0
 7494 00a6 0FB60425 		movzbl	48, %eax
 7494      30000000 
 7495 00ae 83E0FE   		andl	$-2, %eax
 7496 00b1 88042530 		movb	%al, 48
 7496      000000
 7497 00b8 0F0B     		ud2
 7498              	.LVL789:
 7499              	.L569:
 7500              		.loc 1 1546 0
 7501 00ba 488B4708 		movq	8(%rdi), %rax
 7502 00be 488901   		movq	%rax, (%rcx)
 7503 00c1 4889F8   		movq	%rdi, %rax
 7504 00c4 EBDA     		jmp	.L555
 7505              	.L561:
 7506              		.loc 1 1541 0
 7507 00c6 31C0     		xorl	%eax, %eax
 7508 00c8 E974FFFF 		jmp	.L550
 7508      FF
 7509              	.LVL790:
 7510              	.L570:
 7511 00cd 488B4F10 		movq	16(%rdi), %rcx
 7512 00d1 E96BFFFF 		jmp	.L550
 7512      FF
 7513              		.cfi_endproc
 7514              	.LFE303:
 7516              		.section	.text.unlikely._ZN14Fl_Preferences4Node6removeEv
 7517              	.LCOLDE95:
 7518              		.section	.text._ZN14Fl_Preferences4Node6removeEv
 7519              	.LHOTE95:
 7520              		.section	.text.unlikely._ZN14Fl_Preferences11deleteGroupEPKc,"ax",@progbits
 7521              		.align 2
 7522              	.LCOLDB96:
 7523              		.section	.text._ZN14Fl_Preferences11deleteGroupEPKc,"ax",@progbits
 7524              	.LHOTB96:
 7525              		.align 2
 7526              		.p2align 4,,15
 7527              		.globl	_ZN14Fl_Preferences11deleteGroupEPKc
 7529              	_ZN14Fl_Preferences11deleteGroupEPKc:
 7530              	.LFB227:
 7531              		.loc 1 425 0
 7532              		.cfi_startproc
 7533              	.LVL791:
 7534 0000 4883EC08 		subq	$8, %rsp
 7535              		.cfi_def_cfa_offset 16
 7536              		.loc 1 426 0
 7537 0004 488B7F08 		movq	8(%rdi), %rdi
 7538              	.LVL792:
 7539 0008 31D2     		xorl	%edx, %edx
 7540 000a E8000000 		call	_ZN14Fl_Preferences4Node6searchEPKci
 7540      00
 7541              	.LVL793:
 7542              		.loc 1 427 0
 7543 000f 4885C0   		testq	%rax, %rax
 7544 0012 740C     		je	.L572
 7545              		.loc 1 427 0 is_stmt 0 discriminator 1
 7546 0014 4889C7   		movq	%rax, %rdi
 7547              		.loc 1 429 0 is_stmt 1 discriminator 1
 7548 0017 4883C408 		addq	$8, %rsp
 7549              		.cfi_remember_state
 7550              		.cfi_def_cfa_offset 8
 7551              		.loc 1 427 0 discriminator 1
 7552 001b E9000000 		jmp	_ZN14Fl_Preferences4Node6removeEv
 7552      00
 7553              	.LVL794:
 7554              		.p2align 4,,10
 7555              		.p2align 3
 7556              	.L572:
 7557              		.cfi_restore_state
 7558              		.loc 1 429 0
 7559 0020 31C0     		xorl	%eax, %eax
 7560              	.LVL795:
 7561 0022 4883C408 		addq	$8, %rsp
 7562              		.cfi_def_cfa_offset 8
 7563 0026 C3       		ret
 7564              		.cfi_endproc
 7565              	.LFE227:
 7567              		.section	.text.unlikely._ZN14Fl_Preferences11deleteGroupEPKc
 7568              	.LCOLDE96:
 7569              		.section	.text._ZN14Fl_Preferences11deleteGroupEPKc
 7570              	.LHOTE96:
 7571              		.section	.text.unlikely._ZN9Fl_PluginD2Ev,"ax",@progbits
 7572              		.align 2
 7573              	.LCOLDB97:
 7574              		.section	.text._ZN9Fl_PluginD2Ev,"ax",@progbits
 7575              	.LHOTB97:
 7576              		.align 2
 7577              		.p2align 4,,15
 7578              		.globl	_ZN9Fl_PluginD2Ev
 7580              	_ZN9Fl_PluginD2Ev:
 7581              	.LFB311:
 7582              		.loc 1 1603 0
 7583              		.cfi_startproc
 7584              	.LVL796:
 7585              	.LBB794:
 7586              		.loc 1 1603 0
 7587 0000 48C70700 		movq	$_ZTV9Fl_Plugin+16, (%rdi)
 7587      000000
 7588              		.loc 1 1607 0
 7589 0007 488B7F08 		movq	8(%rdi), %rdi
 7590              	.LVL797:
 7591 000b 4885FF   		testq	%rdi, %rdi
 7592 000e 7408     		je	.L574
 7593              	.LVL798:
 7594              	.LBB795:
 7595              	.LBB796:
  98:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 7596              		.loc 5 98 0
 7597 0010 E9000000 		jmp	_ZN14Fl_Preferences4Node6removeEv
 7597      00
 7598              	.LVL799:
 7599              		.p2align 4,,10
 7600 0015 0F1F00   		.p2align 3
 7601              	.L574:
 7602 0018 F3C3     		rep ret
 7603              	.LBE796:
 7604              	.LBE795:
 7605              	.LBE794:
 7606              		.cfi_endproc
 7607              	.LFE311:
 7609              		.section	.text.unlikely._ZN9Fl_PluginD2Ev
 7610              	.LCOLDE97:
 7611              		.section	.text._ZN9Fl_PluginD2Ev
 7612              	.LHOTE97:
 7613              		.globl	_ZN9Fl_PluginD1Ev
 7614              		.set	_ZN9Fl_PluginD1Ev,_ZN9Fl_PluginD2Ev
 7615              		.section	.text.unlikely._ZN9Fl_PluginD0Ev,"ax",@progbits
 7616              		.align 2
 7617              	.LCOLDB98:
 7618              		.section	.text._ZN9Fl_PluginD0Ev,"ax",@progbits
 7619              	.LHOTB98:
 7620              		.align 2
 7621              		.p2align 4,,15
 7622              		.globl	_ZN9Fl_PluginD0Ev
 7624              	_ZN9Fl_PluginD0Ev:
 7625              	.LFB313:
 7626              		.loc 1 1603 0
 7627              		.cfi_startproc
 7628              	.LVL800:
 7629 0000 53       		pushq	%rbx
 7630              		.cfi_def_cfa_offset 16
 7631              		.cfi_offset 3, -16
 7632              		.loc 1 1603 0
 7633 0001 4889FB   		movq	%rdi, %rbx
 7634              	.LBB797:
 7635              	.LBB798:
 7636 0004 48C70700 		movq	$_ZTV9Fl_Plugin+16, (%rdi)
 7636      000000
 7637              		.loc 1 1607 0
 7638 000b 488B7F08 		movq	8(%rdi), %rdi
 7639              	.LVL801:
 7640 000f 4885FF   		testq	%rdi, %rdi
 7641 0012 7405     		je	.L577
 7642              	.LVL802:
 7643              	.LBB799:
 7644              	.LBB800:
  98:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 7645              		.loc 5 98 0
 7646 0014 E8000000 		call	_ZN14Fl_Preferences4Node6removeEv
 7646      00
 7647              	.LVL803:
 7648              	.L577:
 7649              	.LBE800:
 7650              	.LBE799:
 7651              	.LBE798:
 7652              	.LBE797:
 7653              		.loc 1 1609 0
 7654 0019 4889DF   		movq	%rbx, %rdi
 7655 001c 5B       		popq	%rbx
 7656              		.cfi_def_cfa_offset 8
 7657              	.LVL804:
 7658 001d E9000000 		jmp	_ZdlPv
 7658      00
 7659              	.LVL805:
 7660              		.cfi_endproc
 7661              	.LFE313:
 7663              		.section	.text.unlikely._ZN9Fl_PluginD0Ev
 7664              	.LCOLDE98:
 7665              		.section	.text._ZN9Fl_PluginD0Ev
 7666              	.LHOTE98:
 7667              		.section	.text.unlikely._ZN14Fl_Preferences4Node11createIndexEv,"ax",@progbits
 7668              		.align 2
 7669              	.LCOLDB99:
 7670              		.section	.text._ZN14Fl_Preferences4Node11createIndexEv,"ax",@progbits
 7671              	.LHOTB99:
 7672              		.align 2
 7673              		.p2align 4,,15
 7674              		.globl	_ZN14Fl_Preferences4Node11createIndexEv
 7676              	_ZN14Fl_Preferences4Node11createIndexEv:
 7677              	.LFB304:
 7678              		.loc 1 1557 0
 7679              		.cfi_startproc
 7680              	.LVL806:
 7681              		.loc 1 1558 0
 7682 0000 F6473004 		testb	$4, 48(%rdi)
 7683 0004 754C     		jne	.L593
 7684              		.loc 1 1557 0
 7685 0006 55       		pushq	%rbp
 7686              		.cfi_def_cfa_offset 16
 7687              		.cfi_offset 6, -16
 7688 0007 53       		pushq	%rbx
 7689              		.cfi_def_cfa_offset 24
 7690              		.cfi_offset 3, -24
 7691 0008 4889FB   		movq	%rdi, %rbx
 7692              	.LVL807:
 7693 000b 4883EC08 		subq	$8, %rsp
 7694              		.cfi_def_cfa_offset 32
 7695              	.LBB801:
 7696              	.LBB802:
 7697 000f E8000000 		call	_ZN14Fl_Preferences4Node9nChildrenEv.part.5
 7697      00
 7698              	.LVL808:
 7699              	.LBE802:
 7700              	.LBE801:
 7701              		.loc 1 1560 0
 7702 0014 394744   		cmpl	%eax, 68(%rdi)
 7703              	.LBB804:
 7704              	.LBB803:
 7705 0017 89C5     		movl	%eax, %ebp
 7706              	.LVL809:
 7707              	.LBE803:
 7708              	.LBE804:
 7709 0019 7C3D     		jl	.L594
 7710              	.L584:
 7711              	.LVL810:
 7712              		.loc 1 1566 0
 7713 001b 488B03   		movq	(%rbx), %rax
 7714              	.LVL811:
 7715 001e 4863D5   		movslq	%ebp, %rdx
 7716 0021 488D14D5 		leaq	-8(,%rdx,8), %rdx
 7716      F8FFFFFF 
 7717 0029 4885C0   		testq	%rax, %rax
 7718 002c 7417     		je	.L586
 7719              	.LVL812:
 7720 002e 6690     		.p2align 4,,10
 7721              		.p2align 3
 7722              	.L587:
 7723              		.loc 1 1567 0 discriminator 2
 7724 0030 488B4B38 		movq	56(%rbx), %rcx
 7725 0034 48890411 		movq	%rax, (%rcx,%rdx)
 7726              		.loc 1 1566 0 discriminator 2
 7727 0038 488B4008 		movq	8(%rax), %rax
 7728              	.LVL813:
 7729 003c 4883EA08 		subq	$8, %rdx
 7730 0040 4885C0   		testq	%rax, %rax
 7731 0043 75EB     		jne	.L587
 7732              	.L586:
 7733              		.loc 1 1569 0
 7734 0045 896B40   		movl	%ebp, 64(%rbx)
 7735              		.loc 1 1570 0
 7736 0048 804B3004 		orb	$4, 48(%rbx)
 7737              		.loc 1 1571 0
 7738 004c 4883C408 		addq	$8, %rsp
 7739              		.cfi_def_cfa_offset 24
 7740 0050 5B       		popq	%rbx
 7741              		.cfi_restore 3
 7742              		.cfi_def_cfa_offset 16
 7743              	.LVL814:
 7744 0051 5D       		popq	%rbp
 7745              		.cfi_restore 6
 7746              		.cfi_def_cfa_offset 8
 7747              	.LVL815:
 7748              	.L593:
 7749 0052 F3C3     		rep ret
 7750              	.LVL816:
 7751              		.p2align 4,,10
 7752 0054 0F1F4000 		.p2align 3
 7753              	.L594:
 7754              		.cfi_def_cfa_offset 32
 7755              		.cfi_offset 3, -24
 7756              		.cfi_offset 6, -16
 7757              		.loc 1 1561 0
 7758 0058 8D4010   		leal	16(%rax), %eax
 7759 005b 894744   		movl	%eax, 68(%rdi)
 7760              		.loc 1 1562 0
 7761 005e 4898     		cltq
 7762 0060 488B7F38 		movq	56(%rdi), %rdi
 7763 0064 488D34C5 		leaq	0(,%rax,8), %rsi
 7763      00000000 
 7764 006c E8000000 		call	realloc
 7764      00
 7765              	.LVL817:
 7766 0071 48894338 		movq	%rax, 56(%rbx)
 7767 0075 EBA4     		jmp	.L584
 7768              		.cfi_endproc
 7769              	.LFE304:
 7771              		.section	.text.unlikely._ZN14Fl_Preferences4Node11createIndexEv
 7772              	.LCOLDE99:
 7773              		.section	.text._ZN14Fl_Preferences4Node11createIndexEv
 7774              	.LHOTE99:
 7775              		.section	.text.unlikely._ZN14Fl_Preferences4Node9childNodeEi,"ax",@progbits
 7776              		.align 2
 7777              	.LCOLDB100:
 7778              		.section	.text._ZN14Fl_Preferences4Node9childNodeEi,"ax",@progbits
 7779              	.LHOTB100:
 7780              		.align 2
 7781              		.p2align 4,,15
 7782              		.globl	_ZN14Fl_Preferences4Node9childNodeEi
 7784              	_ZN14Fl_Preferences4Node9childNodeEi:
 7785              	.LFB302:
 7786              		.loc 1 1518 0
 7787              		.cfi_startproc
 7788              	.LVL818:
 7789 0000 55       		pushq	%rbp
 7790              		.cfi_def_cfa_offset 16
 7791              		.cfi_offset 6, -16
 7792 0001 53       		pushq	%rbx
 7793              		.cfi_def_cfa_offset 24
 7794              		.cfi_offset 3, -24
 7795 0002 4889FB   		movq	%rdi, %rbx
 7796 0005 4863EE   		movslq	%esi, %rbp
 7797 0008 4883EC08 		subq	$8, %rsp
 7798              		.cfi_def_cfa_offset 32
 7799              		.loc 1 1519 0
 7800 000c E8000000 		call	_ZN14Fl_Preferences4Node11createIndexEv
 7800      00
 7801              	.LVL819:
 7802              	.LBB805:
 7803              		.loc 1 1520 0
 7804 0011 F6433004 		testb	$4, 48(%rbx)
 7805 0015 7549     		jne	.L604
 7806              	.LVL820:
 7807              	.LBB806:
 7808              	.LBB807:
 7809              	.LBB808:
 7810 0017 4889DF   		movq	%rbx, %rdi
 7811 001a E8000000 		call	_ZN14Fl_Preferences4Node9nChildrenEv.part.5
 7811      00
 7812              	.LVL821:
 7813              	.LBE808:
 7814              	.LBE807:
 7815              		.loc 1 1528 0
 7816 001f 488B13   		movq	(%rbx), %rdx
 7817              		.loc 1 1526 0
 7818 0022 29E8     		subl	%ebp, %eax
 7819              	.LVL822:
 7820              		.loc 1 1528 0
 7821 0024 4885D2   		testq	%rdx, %rdx
 7822 0027 7429     		je	.L600
 7823              	.LVL823:
 7824              		.loc 1 1529 0
 7825 0029 83F801   		cmpl	$1, %eax
 7826 002c 7442     		je	.L602
 7827 002e 8D48FE   		leal	-2(%rax), %ecx
 7828 0031 31C0     		xorl	%eax, %eax
 7829              	.LVL824:
 7830 0033 4883C101 		addq	$1, %rcx
 7831 0037 EB10     		jmp	.L598
 7832 0039 0F1F8000 		.p2align 4,,10
 7832      000000
 7833              		.p2align 3
 7834              	.L599:
 7835 0040 4883C001 		addq	$1, %rax
 7836 0044 4839C8   		cmpq	%rcx, %rax
 7837 0047 7427     		je	.L602
 7838              	.L598:
 7839              		.loc 1 1528 0 discriminator 2
 7840 0049 488B5208 		movq	8(%rdx), %rdx
 7841              	.LVL825:
 7842 004d 4885D2   		testq	%rdx, %rdx
 7843 0050 75EE     		jne	.L599
 7844              	.L600:
 7845              	.LBE806:
 7846              	.LBE805:
 7847              		.loc 1 1534 0
 7848 0052 4883C408 		addq	$8, %rsp
 7849              		.cfi_remember_state
 7850              		.cfi_def_cfa_offset 24
 7851              	.LBB811:
 7852              	.LBB809:
 7853              		.loc 1 1528 0
 7854 0056 31C0     		xorl	%eax, %eax
 7855              	.LBE809:
 7856              	.LBE811:
 7857              		.loc 1 1534 0
 7858 0058 5B       		popq	%rbx
 7859              		.cfi_def_cfa_offset 16
 7860              	.LVL826:
 7861 0059 5D       		popq	%rbp
 7862              		.cfi_def_cfa_offset 8
 7863 005a C3       		ret
 7864              	.LVL827:
 7865 005b 0F1F4400 		.p2align 4,,10
 7865      00
 7866              		.p2align 3
 7867              	.L604:
 7868              		.cfi_restore_state
 7869              	.LBB812:
 7870              		.loc 1 1522 0
 7871 0060 488B4338 		movq	56(%rbx), %rax
 7872 0064 488B04E8 		movq	(%rax,%rbp,8), %rax
 7873              	.LBE812:
 7874              		.loc 1 1534 0
 7875 0068 4883C408 		addq	$8, %rsp
 7876              		.cfi_remember_state
 7877              		.cfi_def_cfa_offset 24
 7878 006c 5B       		popq	%rbx
 7879              		.cfi_def_cfa_offset 16
 7880              	.LVL828:
 7881 006d 5D       		popq	%rbp
 7882              		.cfi_def_cfa_offset 8
 7883              	.LVL829:
 7884 006e C3       		ret
 7885              	.LVL830:
 7886 006f 90       		.p2align 4,,10
 7887              		.p2align 3
 7888              	.L602:
 7889              		.cfi_restore_state
 7890 0070 4883C408 		addq	$8, %rsp
 7891              		.cfi_def_cfa_offset 24
 7892              	.LBB813:
 7893              	.LBB810:
 7894              		.loc 1 1528 0
 7895 0074 4889D0   		movq	%rdx, %rax
 7896              	.LBE810:
 7897              	.LBE813:
 7898              		.loc 1 1534 0
 7899 0077 5B       		popq	%rbx
 7900              		.cfi_def_cfa_offset 16
 7901              	.LVL831:
 7902 0078 5D       		popq	%rbp
 7903              		.cfi_def_cfa_offset 8
 7904 0079 C3       		ret
 7905              		.cfi_endproc
 7906              	.LFE302:
 7908              		.section	.text.unlikely._ZN14Fl_Preferences4Node9childNodeEi
 7909              	.LCOLDE100:
 7910              		.section	.text._ZN14Fl_Preferences4Node9childNodeEi
 7911              	.LHOTE100:
 7912              		.section	.text.unlikely._ZN14Fl_Preferences4Node5childEi,"ax",@progbits
 7913              		.align 2
 7914              	.LCOLDB101:
 7915              		.section	.text._ZN14Fl_Preferences4Node5childEi,"ax",@progbits
 7916              	.LHOTB101:
 7917              		.align 2
 7918              		.p2align 4,,15
 7919              		.globl	_ZN14Fl_Preferences4Node5childEi
 7921              	_ZN14Fl_Preferences4Node5childEi:
 7922              	.LFB301:
 7923              		.loc 1 1509 0
 7924              		.cfi_startproc
 7925              	.LVL832:
 7926 0000 53       		pushq	%rbx
 7927              		.cfi_def_cfa_offset 16
 7928              		.cfi_offset 3, -16
 7929              		.loc 1 1510 0
 7930 0001 E8000000 		call	_ZN14Fl_Preferences4Node9childNodeEi
 7930      00
 7931              	.LVL833:
 7932              		.loc 1 1511 0
 7933 0006 4885C0   		testq	%rax, %rax
 7934 0009 742D     		je	.L608
 7935              	.LVL834:
 7936              	.LBB814:
 7937              	.LBB815:
 7938              		.loc 1 1500 0
 7939 000b 488B5818 		movq	24(%rax), %rbx
 7940 000f 4885DB   		testq	%rbx, %rbx
 7941 0012 7424     		je	.L608
 7942              	.LVL835:
 7943              	.LBB816:
 7944              	.LBB817:
 7945              	.LBB818:
 7946              		.loc 6 247 0
 7947 0014 4889DF   		movq	%rbx, %rdi
 7948 0017 BE2F0000 		movl	$47, %esi
 7948      00
 7949 001c E8000000 		call	strrchr
 7949      00
 7950              	.LVL836:
 7951              	.LBE818:
 7952              	.LBE817:
 7953              		.loc 1 1502 0
 7954 0021 488D5001 		leaq	1(%rax), %rdx
 7955 0025 4885C0   		testq	%rax, %rax
 7956 0028 4889D0   		movq	%rdx, %rax
 7957 002b 480F44C3 		cmove	%rbx, %rax
 7958              	.LBE816:
 7959              	.LBE815:
 7960              	.LBE814:
 7961              		.loc 1 1515 0
 7962 002f 5B       		popq	%rbx
 7963              		.cfi_remember_state
 7964              		.cfi_def_cfa_offset 8
 7965 0030 C3       		ret
 7966              	.LVL837:
 7967              		.p2align 4,,10
 7968 0031 0F1F8000 		.p2align 3
 7968      000000
 7969              	.L608:
 7970              		.cfi_restore_state
 7971              		.loc 1 1514 0
 7972 0038 31C0     		xorl	%eax, %eax
 7973              	.LVL838:
 7974              		.loc 1 1515 0
 7975 003a 5B       		popq	%rbx
 7976              		.cfi_def_cfa_offset 8
 7977 003b C3       		ret
 7978              		.cfi_endproc
 7979              	.LFE301:
 7981              		.section	.text.unlikely._ZN14Fl_Preferences4Node5childEi
 7982              	.LCOLDE101:
 7983              		.section	.text._ZN14Fl_Preferences4Node5childEi
 7984              	.LHOTE101:
 7985              		.section	.text.unlikely._ZN14Fl_Preferences5groupEi,"ax",@progbits
 7986              		.align 2
 7987              	.LCOLDB102:
 7988              		.section	.text._ZN14Fl_Preferences5groupEi,"ax",@progbits
 7989              	.LHOTB102:
 7990              		.align 2
 7991              		.p2align 4,,15
 7992              		.globl	_ZN14Fl_Preferences5groupEi
 7994              	_ZN14Fl_Preferences5groupEi:
 7995              	.LFB225:
 7996              		.loc 1 399 0
 7997              		.cfi_startproc
 7998              	.LVL839:
 7999              		.loc 1 400 0
 8000 0000 488B7F08 		movq	8(%rdi), %rdi
 8001              	.LVL840:
 8002 0004 E9000000 		jmp	_ZN14Fl_Preferences4Node5childEi
 8002      00
 8003              	.LVL841:
 8004              		.cfi_endproc
 8005              	.LFE225:
 8007              		.section	.text.unlikely._ZN14Fl_Preferences5groupEi
 8008              	.LCOLDE102:
 8009              		.section	.text._ZN14Fl_Preferences5groupEi
 8010              	.LHOTE102:
 8011              		.section	.text.unlikely._ZN14Fl_PreferencesC2ERS_i,"ax",@progbits
 8012              		.align 2
 8013              	.LCOLDB103:
 8014              		.section	.text._ZN14Fl_PreferencesC2ERS_i,"ax",@progbits
 8015              	.LHOTB103:
 8016              		.align 2
 8017              		.p2align 4,,15
 8018              		.globl	_ZN14Fl_PreferencesC2ERS_i
 8020              	_ZN14Fl_PreferencesC2ERS_i:
 8021              	.LFB208:
 8022              		.loc 1 308 0
 8023              		.cfi_startproc
 8024              	.LVL842:
 8025 0000 55       		pushq	%rbp
 8026              		.cfi_def_cfa_offset 16
 8027              		.cfi_offset 6, -16
 8028 0001 53       		pushq	%rbx
 8029              		.cfi_def_cfa_offset 24
 8030              		.cfi_offset 3, -24
 8031 0002 4889F5   		movq	%rsi, %rbp
 8032 0005 4889FB   		movq	%rdi, %rbx
 8033 0008 4883EC08 		subq	$8, %rsp
 8034              		.cfi_def_cfa_offset 32
 8035              	.LBB833:
 8036              		.loc 1 308 0
 8037 000c 48C70700 		movq	$_ZTV14Fl_Preferences+16, (%rdi)
 8037      000000
 8038              		.loc 1 309 0
 8039 0013 488B4610 		movq	16(%rsi), %rax
 8040              		.loc 1 310 0
 8041 0017 85D2     		testl	%edx, %edx
 8042              		.loc 1 309 0
 8043 0019 48894710 		movq	%rax, 16(%rdi)
 8044              		.loc 1 310 0
 8045 001d 7831     		js	.L613
 8046              	.LBB834:
 8047              	.LBB835:
 8048              		.loc 1 388 0
 8049 001f 488B4D08 		movq	8(%rbp), %rcx
 8050 0023 89D6     		movl	%edx, %esi
 8051              	.LVL843:
 8052              	.LBB836:
 8053              	.LBB837:
 8054              	.LBB838:
 8055              		.loc 1 1488 0
 8056 0025 F6413004 		testb	$4, 48(%rcx)
 8057 0029 7545     		jne	.L620
 8058              	.LBE838:
 8059 002b 4889CF   		movq	%rcx, %rdi
 8060              	.LVL844:
 8061 002e E8000000 		call	_ZN14Fl_Preferences4Node9nChildrenEv.part.5
 8061      00
 8062              	.LVL845:
 8063              	.L615:
 8064              	.LBE837:
 8065              	.LBE836:
 8066              	.LBE835:
 8067              	.LBE834:
 8068              		.loc 1 310 0
 8069 0033 39C6     		cmpl	%eax, %esi
 8070 0035 7D19     		jge	.L613
 8071              		.loc 1 313 0
 8072 0037 4889CF   		movq	%rcx, %rdi
 8073 003a E8000000 		call	_ZN14Fl_Preferences4Node9childNodeEi
 8073      00
 8074              	.LVL846:
 8075 003f 48894308 		movq	%rax, 8(%rbx)
 8076              	.LBE833:
 8077              		.loc 1 315 0
 8078 0043 4883C408 		addq	$8, %rsp
 8079              		.cfi_remember_state
 8080              		.cfi_def_cfa_offset 24
 8081 0047 5B       		popq	%rbx
 8082              		.cfi_def_cfa_offset 16
 8083              	.LVL847:
 8084 0048 5D       		popq	%rbp
 8085              		.cfi_def_cfa_offset 8
 8086              	.LVL848:
 8087 0049 C3       		ret
 8088              	.LVL849:
 8089 004a 660F1F44 		.p2align 4,,10
 8089      0000
 8090              		.p2align 3
 8091              	.L613:
 8092              		.cfi_restore_state
 8093              	.LBB844:
 8094              	.LBB845:
 8095              		.loc 1 311 0
 8096 0050 E8000000 		call	_ZN14Fl_Preferences7newUUIDEv
 8096      00
 8097              	.LVL850:
 8098 0055 488B7D08 		movq	8(%rbp), %rdi
 8099 0059 4889C6   		movq	%rax, %rsi
 8100 005c E8000000 		call	_ZN14Fl_Preferences4Node8addChildEPKc
 8100      00
 8101              	.LVL851:
 8102 0061 48894308 		movq	%rax, 8(%rbx)
 8103              	.LBE845:
 8104              	.LBE844:
 8105              		.loc 1 315 0
 8106 0065 4883C408 		addq	$8, %rsp
 8107              		.cfi_remember_state
 8108              		.cfi_def_cfa_offset 24
 8109 0069 5B       		popq	%rbx
 8110              		.cfi_def_cfa_offset 16
 8111              	.LVL852:
 8112 006a 5D       		popq	%rbp
 8113              		.cfi_def_cfa_offset 8
 8114              	.LVL853:
 8115 006b C3       		ret
 8116              	.LVL854:
 8117 006c 0F1F4000 		.p2align 4,,10
 8118              		.p2align 3
 8119              	.L620:
 8120              		.cfi_restore_state
 8121              	.LBB846:
 8122              	.LBB843:
 8123              	.LBB842:
 8124              	.LBB841:
 8125              	.LBB840:
 8126              	.LBB839:
 8127              		.loc 1 1489 0
 8128 0070 8B4140   		movl	64(%rcx), %eax
 8129 0073 EBBE     		jmp	.L615
 8130              	.LBE839:
 8131              	.LBE840:
 8132              	.LBE841:
 8133              	.LBE842:
 8134              	.LBE843:
 8135              	.LBE846:
 8136              		.cfi_endproc
 8137              	.LFE208:
 8139              		.section	.text.unlikely._ZN14Fl_PreferencesC2ERS_i
 8140              	.LCOLDE103:
 8141              		.section	.text._ZN14Fl_PreferencesC2ERS_i
 8142              	.LHOTE103:
 8143              		.globl	_ZN14Fl_PreferencesC1ERS_i
 8144              		.set	_ZN14Fl_PreferencesC1ERS_i,_ZN14Fl_PreferencesC2ERS_i
 8145              		.section	.text.unlikely._ZN14Fl_PreferencesC2EPS_i,"ax",@progbits
 8146              		.align 2
 8147              	.LCOLDB104:
 8148              		.section	.text._ZN14Fl_PreferencesC2EPS_i,"ax",@progbits
 8149              	.LHOTB104:
 8150              		.align 2
 8151              		.p2align 4,,15
 8152              		.globl	_ZN14Fl_PreferencesC2EPS_i
 8154              	_ZN14Fl_PreferencesC2EPS_i:
 8155              	.LFB211:
 8156              		.loc 1 320 0
 8157              		.cfi_startproc
 8158              	.LVL855:
 8159 0000 55       		pushq	%rbp
 8160              		.cfi_def_cfa_offset 16
 8161              		.cfi_offset 6, -16
 8162 0001 53       		pushq	%rbx
 8163              		.cfi_def_cfa_offset 24
 8164              		.cfi_offset 3, -24
 8165 0002 4889F5   		movq	%rsi, %rbp
 8166 0005 4889FB   		movq	%rdi, %rbx
 8167 0008 4883EC08 		subq	$8, %rsp
 8168              		.cfi_def_cfa_offset 32
 8169              	.LBB861:
 8170              		.loc 1 320 0
 8171 000c 48C70700 		movq	$_ZTV14Fl_Preferences+16, (%rdi)
 8171      000000
 8172              		.loc 1 321 0
 8173 0013 488B4610 		movq	16(%rsi), %rax
 8174              		.loc 1 322 0
 8175 0017 85D2     		testl	%edx, %edx
 8176              		.loc 1 321 0
 8177 0019 48894710 		movq	%rax, 16(%rdi)
 8178              		.loc 1 322 0
 8179 001d 7831     		js	.L622
 8180              	.LBB862:
 8181              	.LBB863:
 8182              		.loc 1 388 0
 8183 001f 488B4D08 		movq	8(%rbp), %rcx
 8184 0023 89D6     		movl	%edx, %esi
 8185              	.LVL856:
 8186              	.LBB864:
 8187              	.LBB865:
 8188              	.LBB866:
 8189              		.loc 1 1488 0
 8190 0025 F6413004 		testb	$4, 48(%rcx)
 8191 0029 7545     		jne	.L629
 8192              	.LBE866:
 8193 002b 4889CF   		movq	%rcx, %rdi
 8194              	.LVL857:
 8195 002e E8000000 		call	_ZN14Fl_Preferences4Node9nChildrenEv.part.5
 8195      00
 8196              	.LVL858:
 8197              	.L624:
 8198              	.LBE865:
 8199              	.LBE864:
 8200              	.LBE863:
 8201              	.LBE862:
 8202              		.loc 1 322 0
 8203 0033 39C6     		cmpl	%eax, %esi
 8204 0035 7D19     		jge	.L622
 8205              		.loc 1 325 0
 8206 0037 4889CF   		movq	%rcx, %rdi
 8207 003a E8000000 		call	_ZN14Fl_Preferences4Node9childNodeEi
 8207      00
 8208              	.LVL859:
 8209 003f 48894308 		movq	%rax, 8(%rbx)
 8210              	.LBE861:
 8211              		.loc 1 327 0
 8212 0043 4883C408 		addq	$8, %rsp
 8213              		.cfi_remember_state
 8214              		.cfi_def_cfa_offset 24
 8215 0047 5B       		popq	%rbx
 8216              		.cfi_def_cfa_offset 16
 8217              	.LVL860:
 8218 0048 5D       		popq	%rbp
 8219              		.cfi_def_cfa_offset 8
 8220              	.LVL861:
 8221 0049 C3       		ret
 8222              	.LVL862:
 8223 004a 660F1F44 		.p2align 4,,10
 8223      0000
 8224              		.p2align 3
 8225              	.L622:
 8226              		.cfi_restore_state
 8227              	.LBB872:
 8228              	.LBB873:
 8229              		.loc 1 323 0
 8230 0050 E8000000 		call	_ZN14Fl_Preferences7newUUIDEv
 8230      00
 8231              	.LVL863:
 8232 0055 488B7D08 		movq	8(%rbp), %rdi
 8233 0059 4889C6   		movq	%rax, %rsi
 8234 005c E8000000 		call	_ZN14Fl_Preferences4Node8addChildEPKc
 8234      00
 8235              	.LVL864:
 8236 0061 48894308 		movq	%rax, 8(%rbx)
 8237              	.LBE873:
 8238              	.LBE872:
 8239              		.loc 1 327 0
 8240 0065 4883C408 		addq	$8, %rsp
 8241              		.cfi_remember_state
 8242              		.cfi_def_cfa_offset 24
 8243 0069 5B       		popq	%rbx
 8244              		.cfi_def_cfa_offset 16
 8245              	.LVL865:
 8246 006a 5D       		popq	%rbp
 8247              		.cfi_def_cfa_offset 8
 8248              	.LVL866:
 8249 006b C3       		ret
 8250              	.LVL867:
 8251 006c 0F1F4000 		.p2align 4,,10
 8252              		.p2align 3
 8253              	.L629:
 8254              		.cfi_restore_state
 8255              	.LBB874:
 8256              	.LBB871:
 8257              	.LBB870:
 8258              	.LBB869:
 8259              	.LBB868:
 8260              	.LBB867:
 8261              		.loc 1 1489 0
 8262 0070 8B4140   		movl	64(%rcx), %eax
 8263 0073 EBBE     		jmp	.L624
 8264              	.LBE867:
 8265              	.LBE868:
 8266              	.LBE869:
 8267              	.LBE870:
 8268              	.LBE871:
 8269              	.LBE874:
 8270              		.cfi_endproc
 8271              	.LFE211:
 8273              		.section	.text.unlikely._ZN14Fl_PreferencesC2EPS_i
 8274              	.LCOLDE104:
 8275              		.section	.text._ZN14Fl_PreferencesC2EPS_i
 8276              	.LHOTE104:
 8277              		.globl	_ZN14Fl_PreferencesC1EPS_i
 8278              		.set	_ZN14Fl_PreferencesC1EPS_i,_ZN14Fl_PreferencesC2EPS_i
 8279              		.section	.text.unlikely._ZN14Fl_Preferences4Node11updateIndexEv,"ax",@progbits
 8280              		.align 2
 8281              	.LCOLDB105:
 8282              		.section	.text._ZN14Fl_Preferences4Node11updateIndexEv,"ax",@progbits
 8283              	.LHOTB105:
 8284              		.align 2
 8285              		.p2align 4,,15
 8286              		.globl	_ZN14Fl_Preferences4Node11updateIndexEv
 8288              	_ZN14Fl_Preferences4Node11updateIndexEv:
 8289              	.LFB305:
 8290              		.loc 1 1573 0
 8291              		.cfi_startproc
 8292              	.LVL868:
 8293              		.loc 1 1574 0
 8294 0000 806730FB 		andb	$-5, 48(%rdi)
 8295 0004 C3       		ret
 8296              		.cfi_endproc
 8297              	.LFE305:
 8299              		.section	.text.unlikely._ZN14Fl_Preferences4Node11updateIndexEv
 8300              	.LCOLDE105:
 8301              		.section	.text._ZN14Fl_Preferences4Node11updateIndexEv
 8302              	.LHOTE105:
 8303              		.section	.text.unlikely._ZN14Fl_Preferences4Node11deleteIndexEv,"ax",@progbits
 8304              		.align 2
 8305              	.LCOLDB106:
 8306              		.section	.text._ZN14Fl_Preferences4Node11deleteIndexEv,"ax",@progbits
 8307              	.LHOTB106:
 8308              		.align 2
 8309              		.p2align 4,,15
 8310              		.globl	_ZN14Fl_Preferences4Node11deleteIndexEv
 8312              	_ZN14Fl_Preferences4Node11deleteIndexEv:
 8313              	.LFB306:
 8314              		.loc 1 1577 0
 8315              		.cfi_startproc
 8316              	.LVL869:
 8317 0000 53       		pushq	%rbx
 8318              		.cfi_def_cfa_offset 16
 8319              		.cfi_offset 3, -16
 8320              		.loc 1 1577 0
 8321 0001 4889FB   		movq	%rdi, %rbx
 8322              		.loc 1 1578 0
 8323 0004 488B7F38 		movq	56(%rdi), %rdi
 8324              	.LVL870:
 8325 0008 4885FF   		testq	%rdi, %rdi
 8326 000b 7405     		je	.L632
 8327              		.loc 1 1578 0 is_stmt 0 discriminator 1
 8328 000d E8000000 		call	free
 8328      00
 8329              	.LVL871:
 8330              	.L632:
 8331              		.loc 1 1579 0 is_stmt 1
 8332 0012 C7434000 		movl	$0, 64(%rbx)
 8332      000000
 8333 0019 C7434400 		movl	$0, 68(%rbx)
 8333      000000
 8334              		.loc 1 1580 0
 8335 0020 48C74338 		movq	$0, 56(%rbx)
 8335      00000000 
 8336              		.loc 1 1581 0
 8337 0028 806330FB 		andb	$-5, 48(%rbx)
 8338              		.loc 1 1582 0
 8339 002c 5B       		popq	%rbx
 8340              		.cfi_def_cfa_offset 8
 8341              	.LVL872:
 8342 002d C3       		ret
 8343              		.cfi_endproc
 8344              	.LFE306:
 8346              		.section	.text.unlikely._ZN14Fl_Preferences4Node11deleteIndexEv
 8347              	.LCOLDE106:
 8348              		.section	.text._ZN14Fl_Preferences4Node11deleteIndexEv
 8349              	.LHOTE106:
 8350              		.section	.rodata.str1.1
 8351              	.LC107:
 8352 008a 706C7567 		.string	"plugins"
 8352      696E7300 
 8353              		.section	.text.unlikely._ZN17Fl_Plugin_ManagerC2EPKc,"ax",@progbits
 8354              		.align 2
 8355              	.LCOLDB108:
 8356              		.section	.text._ZN17Fl_Plugin_ManagerC2EPKc,"ax",@progbits
 8357              	.LHOTB108:
 8358              		.align 2
 8359              		.p2align 4,,15
 8360              		.globl	_ZN17Fl_Plugin_ManagerC2EPKc
 8362              	_ZN17Fl_Plugin_ManagerC2EPKc:
 8363              	.LFB315:
 8364              		.loc 1 1614 0
 8365              		.cfi_startproc
 8366              	.LVL873:
 8367 0000 53       		pushq	%rbx
 8368              		.cfi_def_cfa_offset 16
 8369              		.cfi_offset 3, -16
 8370 0001 4889F1   		movq	%rsi, %rcx
 8371 0004 4889FB   		movq	%rdi, %rbx
 8372              	.LBB875:
 8373              		.loc 1 1615 0
 8374 0007 BA000000 		movl	$.LC107, %edx
 8374      00
 8375 000c BE000000 		movl	$.LC43, %esi
 8375      00
 8376              	.LVL874:
 8377              	.LBE875:
 8378              		.loc 1 1614 0
 8379 0011 4883EC10 		subq	$16, %rsp
 8380              		.cfi_def_cfa_offset 32
 8381              		.loc 1 1614 0
 8382 0015 64488B04 		movq	%fs:40, %rax
 8382      25280000 
 8382      00
 8383 001e 48894424 		movq	%rax, 8(%rsp)
 8383      08
 8384 0023 31C0     		xorl	%eax, %eax
 8385              	.LBB878:
 8386              		.loc 1 1615 0
 8387 0025 4889E7   		movq	%rsp, %rdi
 8388              	.LVL875:
 8389 0028 E8000000 		call	_ZN14Fl_Preferences4NameC1EPKcz
 8389      00
 8390              	.LVL876:
 8391 002d 488B1424 		movq	(%rsp), %rdx
 8392 0031 31F6     		xorl	%esi, %esi
 8393 0033 4889DF   		movq	%rbx, %rdi
 8394 0036 E8000000 		call	_ZN14Fl_PreferencesC2EPS_PKc
 8394      00
 8395              	.LVL877:
 8396              	.LBB876:
 8397              	.LBB877:
 8398              		.loc 1 946 0
 8399 003b 488B3C24 		movq	(%rsp), %rdi
 8400 003f 4885FF   		testq	%rdi, %rdi
 8401 0042 7405     		je	.L638
 8402              		.loc 1 947 0
 8403 0044 E8000000 		call	free
 8403      00
 8404              	.LVL878:
 8405              	.L638:
 8406              	.LBE877:
 8407              	.LBE876:
 8408              	.LBE878:
 8409              		.loc 1 1619 0
 8410 0049 488B4424 		movq	8(%rsp), %rax
 8410      08
 8411 004e 64483304 		xorq	%fs:40, %rax
 8411      25280000 
 8411      00
 8412              	.LBB879:
 8413              		.loc 1 1615 0
 8414 0057 48C70300 		movq	$_ZTV17Fl_Plugin_Manager+16, (%rbx)
 8414      000000
 8415              	.LBE879:
 8416              		.loc 1 1619 0
 8417 005e 7506     		jne	.L644
 8418 0060 4883C410 		addq	$16, %rsp
 8419              		.cfi_remember_state
 8420              		.cfi_def_cfa_offset 16
 8421 0064 5B       		popq	%rbx
 8422              		.cfi_def_cfa_offset 8
 8423              	.LVL879:
 8424 0065 C3       		ret
 8425              	.LVL880:
 8426              	.L644:
 8427              		.cfi_restore_state
 8428 0066 E8000000 		call	__stack_chk_fail
 8428      00
 8429              	.LVL881:
 8430              		.cfi_endproc
 8431              	.LFE315:
 8433              		.section	.text.unlikely._ZN17Fl_Plugin_ManagerC2EPKc
 8434              	.LCOLDE108:
 8435              		.section	.text._ZN17Fl_Plugin_ManagerC2EPKc
 8436              	.LHOTE108:
 8437              		.globl	_ZN17Fl_Plugin_ManagerC1EPKc
 8438              		.set	_ZN17Fl_Plugin_ManagerC1EPKc,_ZN17Fl_Plugin_ManagerC2EPKc
 8439              		.section	.rodata.str1.1
 8440              	.LC109:
 8441 0092 61646472 		.string	"address"
 8441      65737300 
 8442              		.section	.text.unlikely._ZN17Fl_Plugin_Manager6pluginEi,"ax",@progbits
 8443              		.align 2
 8444              	.LCOLDB110:
 8445              		.section	.text._ZN17Fl_Plugin_Manager6pluginEi,"ax",@progbits
 8446              	.LHOTB110:
 8447              		.align 2
 8448              		.p2align 4,,15
 8449              		.globl	_ZN17Fl_Plugin_Manager6pluginEi
 8451              	_ZN17Fl_Plugin_Manager6pluginEi:
 8452              	.LFB325:
 8453              		.loc 1 1664 0
 8454              		.cfi_startproc
 8455              	.LVL882:
 8456 0000 53       		pushq	%rbx
 8457              		.cfi_def_cfa_offset 16
 8458              		.cfi_offset 3, -16
 8459 0001 89F2     		movl	%esi, %edx
 8460              		.loc 1 1667 0
 8461 0003 4889FE   		movq	%rdi, %rsi
 8462              	.LVL883:
 8463 0006 31DB     		xorl	%ebx, %ebx
 8464              		.loc 1 1664 0
 8465 0008 4883EC70 		subq	$112, %rsp
 8466              		.cfi_def_cfa_offset 128
 8467              		.loc 1 1667 0
 8468 000c 488D7C24 		leaq	16(%rsp), %rdi
 8468      10
 8469              	.LVL884:
 8470              		.loc 1 1664 0
 8471 0011 64488B04 		movq	%fs:40, %rax
 8471      25280000 
 8471      00
 8472 001a 48894424 		movq	%rax, 104(%rsp)
 8472      68
 8473 001f 31C0     		xorl	%eax, %eax
 8474              	.LVL885:
 8475              		.loc 1 1667 0
 8476 0021 E8000000 		call	_ZN14Fl_PreferencesC1EPS_i
 8476      00
 8477              	.LVL886:
 8478              		.loc 1 1668 0
 8479 0026 488D5424 		leaq	64(%rsp), %rdx
 8479      40
 8480 002b 488D7C24 		leaq	16(%rsp), %rdi
 8480      10
 8481 0030 41B82200 		movl	$34, %r8d
 8481      0000
 8482 0036 B9000000 		movl	$.LC55, %ecx
 8482      00
 8483 003b BE000000 		movl	$.LC109, %esi
 8483      00
 8484 0040 E8000000 		call	_ZN14Fl_Preferences3getEPKcPcS1_i
 8484      00
 8485              	.LVL887:
 8486              		.loc 1 1669 0
 8487 0045 807C2440 		cmpb	$64, 64(%rsp)
 8487      40
 8488 004a 7542     		jne	.L646
 8489              	.LVL888:
 8490              	.LBB880:
 8491              	.LBB881:
 8492              		.loc 1 1643 0 discriminator 1
 8493 004c 48C74424 		movq	$0, 48(%rsp)
 8493      30000000 
 8493      00
 8494              	.LVL889:
 8495 0055 31D2     		xorl	%edx, %edx
 8496              	.LVL890:
 8497 0057 660F1F84 		.p2align 4,,10
 8497      00000000 
 8497      00
 8498              		.p2align 3
 8499              	.L647:
 8500              		.loc 1 1646 0
 8501 0060 0FB65C54 		movzbl	66(%rsp,%rdx,2), %ebx
 8501      42
 8502 0065 0FBE4454 		movsbl	65(%rsp,%rdx,2), %eax
 8502      41
 8503 006a 89DE     		movl	%ebx, %esi
 8504 006c 83E841   		subl	$65, %eax
 8505 006f 885C240F 		movb	%bl, 15(%rsp)
 8506 0073 8D4EBF   		leal	-65(%rsi), %ecx
 8507 0076 C1E004   		sall	$4, %eax
 8508 0079 09C8     		orl	%ecx, %eax
 8509 007b 88441430 		movb	%al, 48(%rsp,%rdx)
 8510              	.LVL891:
 8511 007f 4883C201 		addq	$1, %rdx
 8512              	.LVL892:
 8513              		.loc 1 1645 0
 8514 0083 4883FA08 		cmpq	$8, %rdx
 8515 0087 75D7     		jne	.L647
 8516              		.loc 1 1648 0
 8517 0089 488B5C24 		movq	48(%rsp), %rbx
 8517      30
 8518              	.LVL893:
 8519              	.L646:
 8520              	.LBE881:
 8521              	.LBE880:
 8522              		.loc 1 1667 0
 8523 008e 488D7C24 		leaq	16(%rsp), %rdi
 8523      10
 8524 0093 E8000000 		call	_ZN14Fl_PreferencesD1Ev
 8524      00
 8525              	.LVL894:
 8526              		.loc 1 1674 0
 8527 0098 488B7C24 		movq	104(%rsp), %rdi
 8527      68
 8528 009d 6448333C 		xorq	%fs:40, %rdi
 8528      25280000 
 8528      00
 8529 00a6 4889D8   		movq	%rbx, %rax
 8530 00a9 7506     		jne	.L653
 8531 00ab 4883C470 		addq	$112, %rsp
 8532              		.cfi_remember_state
 8533              		.cfi_def_cfa_offset 16
 8534 00af 5B       		popq	%rbx
 8535              		.cfi_def_cfa_offset 8
 8536              	.LVL895:
 8537 00b0 C3       		ret
 8538              	.L653:
 8539              		.cfi_restore_state
 8540 00b1 E8000000 		call	__stack_chk_fail
 8540      00
 8541              	.LVL896:
 8542              		.cfi_endproc
 8543              	.LFE325:
 8545              		.section	.text.unlikely._ZN17Fl_Plugin_Manager6pluginEi
 8546              	.LCOLDE110:
 8547              		.section	.text._ZN17Fl_Plugin_Manager6pluginEi
 8548              	.LHOTE110:
 8549              		.section	.text.unlikely._ZN17Fl_Plugin_Manager6pluginEPKc,"ax",@progbits
 8550              		.align 2
 8551              	.LCOLDB111:
 8552              		.section	.text._ZN17Fl_Plugin_Manager6pluginEPKc,"ax",@progbits
 8553              	.LHOTB111:
 8554              		.align 2
 8555              		.p2align 4,,15
 8556              		.globl	_ZN17Fl_Plugin_Manager6pluginEPKc
 8558              	_ZN17Fl_Plugin_Manager6pluginEPKc:
 8559              	.LFB326:
 8560              		.loc 1 1679 0
 8561              		.cfi_startproc
 8562              	.LVL897:
 8563 0000 55       		pushq	%rbp
 8564              		.cfi_def_cfa_offset 16
 8565              		.cfi_offset 6, -16
 8566 0001 53       		pushq	%rbx
 8567              		.cfi_def_cfa_offset 24
 8568              		.cfi_offset 3, -24
 8569 0002 4889FB   		movq	%rdi, %rbx
 8570              	.LBB882:
 8571              	.LBB883:
 8572              	.LBB884:
 8573              		.loc 1 413 0
 8574 0005 31D2     		xorl	%edx, %edx
 8575              	.LBE884:
 8576              	.LBE883:
 8577              	.LBE882:
 8578              		.loc 1 1679 0
 8579 0007 4889F5   		movq	%rsi, %rbp
 8580 000a 4883EC78 		subq	$120, %rsp
 8581              		.cfi_def_cfa_offset 144
 8582              	.LBB894:
 8583              	.LBB887:
 8584              	.LBB885:
 8585              		.loc 1 413 0
 8586 000e 488B7F08 		movq	8(%rdi), %rdi
 8587              	.LVL898:
 8588              	.LBE885:
 8589              	.LBE887:
 8590              	.LBE894:
 8591              		.loc 1 1679 0
 8592 0012 64488B04 		movq	%fs:40, %rax
 8592      25280000 
 8592      00
 8593 001b 48894424 		movq	%rax, 104(%rsp)
 8593      68
 8594 0020 31C0     		xorl	%eax, %eax
 8595              	.LVL899:
 8596              	.LBB895:
 8597              	.LBB888:
 8598              	.LBB886:
 8599              		.loc 1 413 0
 8600 0022 E8000000 		call	_ZN14Fl_Preferences4Node6searchEPKci
 8600      00
 8601              	.LVL900:
 8602 0027 4885C0   		testq	%rax, %rax
 8603 002a 7445     		je	.L656
 8604              	.LVL901:
 8605              	.LBE886:
 8606              	.LBE888:
 8607              	.LBB889:
 8608              		.loc 1 1683 0
 8609 002c 488D7C24 		leaq	16(%rsp), %rdi
 8609      10
 8610 0031 4889DE   		movq	%rbx, %rsi
 8611 0034 4889EA   		movq	%rbp, %rdx
 8612              	.LBE889:
 8613              	.LBE895:
 8614              		.loc 1 1681 0
 8615 0037 31DB     		xorl	%ebx, %ebx
 8616              	.LVL902:
 8617              	.LBB896:
 8618              	.LBB892:
 8619              		.loc 1 1683 0
 8620 0039 E8000000 		call	_ZN14Fl_PreferencesC1EPS_PKc
 8620      00
 8621              	.LVL903:
 8622              		.loc 1 1684 0
 8623 003e 488D5424 		leaq	64(%rsp), %rdx
 8623      40
 8624 0043 488D7C24 		leaq	16(%rsp), %rdi
 8624      10
 8625 0048 41B82200 		movl	$34, %r8d
 8625      0000
 8626 004e B9000000 		movl	$.LC55, %ecx
 8626      00
 8627 0053 BE000000 		movl	$.LC109, %esi
 8627      00
 8628 0058 E8000000 		call	_ZN14Fl_Preferences3getEPKcPcS1_i
 8628      00
 8629              	.LVL904:
 8630              		.loc 1 1685 0
 8631 005d 807C2440 		cmpb	$64, 64(%rsp)
 8631      40
 8632 0062 742C     		je	.L665
 8633              	.LVL905:
 8634              	.L659:
 8635              		.loc 1 1683 0
 8636 0064 488D7C24 		leaq	16(%rsp), %rdi
 8636      10
 8637 0069 E8000000 		call	_ZN14Fl_PreferencesD1Ev
 8637      00
 8638              	.LVL906:
 8639              		.loc 1 1689 0
 8640 006e 4889D8   		movq	%rbx, %rax
 8641              	.LVL907:
 8642              	.L656:
 8643              	.LBE892:
 8644              	.LBE896:
 8645              		.loc 1 1696 0 discriminator 1
 8646 0071 488B5C24 		movq	104(%rsp), %rbx
 8646      68
 8647 0076 6448331C 		xorq	%fs:40, %rbx
 8647      25280000 
 8647      00
 8648 007f 7550     		jne	.L666
 8649              		.loc 1 1696 0 is_stmt 0
 8650 0081 4883C478 		addq	$120, %rsp
 8651              		.cfi_remember_state
 8652              		.cfi_def_cfa_offset 24
 8653 0085 5B       		popq	%rbx
 8654              		.cfi_def_cfa_offset 16
 8655 0086 5D       		popq	%rbp
 8656              		.cfi_def_cfa_offset 8
 8657              	.LVL908:
 8658 0087 C3       		ret
 8659              	.LVL909:
 8660 0088 0F1F8400 		.p2align 4,,10
 8660      00000000 
 8661              		.p2align 3
 8662              	.L665:
 8663              		.cfi_restore_state
 8664              	.LBB897:
 8665              	.LBB893:
 8666              	.LBB890:
 8667              	.LBB891:
 8668              		.loc 1 1643 0 is_stmt 1 discriminator 1
 8669 0090 48C74424 		movq	$0, 48(%rsp)
 8669      30000000 
 8669      00
 8670              	.LVL910:
 8671 0099 31D2     		xorl	%edx, %edx
 8672              	.LVL911:
 8673 009b 0F1F4400 		.p2align 4,,10
 8673      00
 8674              		.p2align 3
 8675              	.L657:
 8676              		.loc 1 1646 0
 8677 00a0 0FB67454 		movzbl	66(%rsp,%rdx,2), %esi
 8677      42
 8678 00a5 0FBE4454 		movsbl	65(%rsp,%rdx,2), %eax
 8678      41
 8679 00aa 89F1     		movl	%esi, %ecx
 8680 00ac 83E841   		subl	$65, %eax
 8681 00af 40887424 		movb	%sil, 15(%rsp)
 8681      0F
 8682 00b4 C1E004   		sall	$4, %eax
 8683 00b7 83E941   		subl	$65, %ecx
 8684 00ba 09C8     		orl	%ecx, %eax
 8685 00bc 88441430 		movb	%al, 48(%rsp,%rdx)
 8686              	.LVL912:
 8687 00c0 4883C201 		addq	$1, %rdx
 8688              	.LVL913:
 8689              		.loc 1 1645 0
 8690 00c4 4883FA08 		cmpq	$8, %rdx
 8691 00c8 75D6     		jne	.L657
 8692              		.loc 1 1648 0
 8693 00ca 488B5C24 		movq	48(%rsp), %rbx
 8693      30
 8694              	.LVL914:
 8695              	.LBE891:
 8696              	.LBE890:
 8697 00cf EB93     		jmp	.L659
 8698              	.LVL915:
 8699              	.L666:
 8700              	.LBE893:
 8701              	.LBE897:
 8702              		.loc 1 1696 0
 8703 00d1 E8000000 		call	__stack_chk_fail
 8703      00
 8704              	.LVL916:
 8705              		.cfi_endproc
 8706              	.LFE326:
 8708              		.section	.text.unlikely._ZN17Fl_Plugin_Manager6pluginEPKc
 8709              	.LCOLDE111:
 8710              		.section	.text._ZN17Fl_Plugin_Manager6pluginEPKc
 8711              	.LHOTE111:
 8712              		.section	.text.unlikely._ZN17Fl_Plugin_Manager9addPluginEPKcP9Fl_Plugin,"ax",@progbits
 8713              		.align 2
 8714              	.LCOLDB112:
 8715              		.section	.text._ZN17Fl_Plugin_Manager9addPluginEPKcP9Fl_Plugin,"ax",@progbits
 8716              	.LHOTB112:
 8717              		.align 2
 8718              		.p2align 4,,15
 8719              		.globl	_ZN17Fl_Plugin_Manager9addPluginEPKcP9Fl_Plugin
 8721              	_ZN17Fl_Plugin_Manager9addPluginEPKcP9Fl_Plugin:
 8722              	.LFB327:
 8723              		.loc 1 1704 0
 8724              		.cfi_startproc
 8725              	.LVL917:
 8726 0000 53       		pushq	%rbx
 8727              		.cfi_def_cfa_offset 16
 8728              		.cfi_offset 3, -16
 8729 0001 4889D3   		movq	%rdx, %rbx
 8730              		.loc 1 1709 0
 8731 0004 4889F2   		movq	%rsi, %rdx
 8732              	.LVL918:
 8733 0007 4889FE   		movq	%rdi, %rsi
 8734              	.LVL919:
 8735              		.loc 1 1704 0
 8736 000a 4883EC60 		subq	$96, %rsp
 8737              		.cfi_def_cfa_offset 112
 8738              		.loc 1 1709 0
 8739 000e 4889E7   		movq	%rsp, %rdi
 8740              	.LVL920:
 8741              		.loc 1 1704 0
 8742 0011 64488B04 		movq	%fs:40, %rax
 8742      25280000 
 8742      00
 8743 001a 48894424 		movq	%rax, 88(%rsp)
 8743      58
 8744 001f 31C0     		xorl	%eax, %eax
 8745              		.loc 1 1709 0
 8746 0021 E8000000 		call	_ZN14Fl_PreferencesC1EPS_PKc
 8746      00
 8747              	.LVL921:
 8748              		.loc 1 1710 0
 8749 0026 C6442430 		movb	$64, 48(%rsp)
 8749      40
 8750              	.LVL922:
 8751              	.LBB898:
 8752              	.LBB899:
 8753              		.loc 1 1653 0
 8754 002b 48895C24 		movq	%rbx, 32(%rsp)
 8754      20
 8755              	.LVL923:
 8756 0030 31D2     		xorl	%edx, %edx
 8757              	.LVL924:
 8758              		.p2align 4,,10
 8759 0032 660F1F44 		.p2align 3
 8759      0000
 8760              	.L668:
 8761              		.loc 1 1656 0
 8762 0038 0FB64414 		movzbl	32(%rsp,%rdx), %eax
 8762      20
 8763              	.LVL925:
 8764              	.LBB900:
 8765              	.LBB901:
 8766              		.loc 1 1638 0
 8767 003d 89C1     		movl	%eax, %ecx
 8768 003f 83E00F   		andl	$15, %eax
 8769              	.LVL926:
 8770 0042 C0E904   		shrb	$4, %cl
 8771              	.LVL927:
 8772 0045 83C041   		addl	$65, %eax
 8773 0048 83C141   		addl	$65, %ecx
 8774 004b 88445432 		movb	%al, 50(%rsp,%rdx,2)
 8775              	.LVL928:
 8776 004f 884C5431 		movb	%cl, 49(%rsp,%rdx,2)
 8777 0053 4883C201 		addq	$1, %rdx
 8778              	.LVL929:
 8779              	.LBE901:
 8780              	.LBE900:
 8781              		.loc 1 1655 0
 8782 0057 4883FA08 		cmpq	$8, %rdx
 8783 005b 75DB     		jne	.L668
 8784              	.LBE899:
 8785              	.LBE898:
 8786              		.loc 1 1711 0
 8787 005d 488D5424 		leaq	48(%rsp), %rdx
 8787      30
 8788 0062 BE000000 		movl	$.LC109, %esi
 8788      00
 8789 0067 4889E7   		movq	%rsp, %rdi
 8790              	.LBB903:
 8791              	.LBB902:
 8792              		.loc 1 1658 0
 8793 006a C6442441 		movb	$0, 65(%rsp)
 8793      00
 8794              	.LVL930:
 8795              	.LBE902:
 8796              	.LBE903:
 8797              		.loc 1 1711 0
 8798 006f E8000000 		call	_ZN14Fl_Preferences3setEPKcS1_
 8798      00
 8799              	.LVL931:
 8800 0074 488B5C24 		movq	8(%rsp), %rbx
 8800      08
 8801              	.LVL932:
 8802              		.loc 1 1709 0
 8803 0079 4889E7   		movq	%rsp, %rdi
 8804 007c E8000000 		call	_ZN14Fl_PreferencesD1Ev
 8804      00
 8805              	.LVL933:
 8806              		.loc 1 1713 0
 8807 0081 4889D8   		movq	%rbx, %rax
 8808 0084 488B5C24 		movq	88(%rsp), %rbx
 8808      58
 8809 0089 6448331C 		xorq	%fs:40, %rbx
 8809      25280000 
 8809      00
 8810 0092 7506     		jne	.L672
 8811 0094 4883C460 		addq	$96, %rsp
 8812              		.cfi_remember_state
 8813              		.cfi_def_cfa_offset 16
 8814              	.LVL934:
 8815 0098 5B       		popq	%rbx
 8816              		.cfi_def_cfa_offset 8
 8817 0099 C3       		ret
 8818              	.LVL935:
 8819              	.L672:
 8820              		.cfi_restore_state
 8821 009a E8000000 		call	__stack_chk_fail
 8821      00
 8822              	.LVL936:
 8823              		.cfi_endproc
 8824              	.LFE327:
 8826              		.section	.text.unlikely._ZN17Fl_Plugin_Manager9addPluginEPKcP9Fl_Plugin
 8827              	.LCOLDE112:
 8828              		.section	.text._ZN17Fl_Plugin_Manager9addPluginEPKcP9Fl_Plugin
 8829              	.LHOTE112:
 8830              		.section	.text.unlikely._ZN9Fl_PluginC2EPKcS1_,"ax",@progbits
 8831              		.align 2
 8832              	.LCOLDB113:
 8833              		.section	.text._ZN9Fl_PluginC2EPKcS1_,"ax",@progbits
 8834              	.LHOTB113:
 8835              		.align 2
 8836              		.p2align 4,,15
 8837              		.globl	_ZN9Fl_PluginC2EPKcS1_
 8839              	_ZN9Fl_PluginC2EPKcS1_:
 8840              	.LFB308:
 8841              		.loc 1 1590 0
 8842              		.cfi_startproc
 8843              	.LVL937:
 8844 0000 55       		pushq	%rbp
 8845              		.cfi_def_cfa_offset 16
 8846              		.cfi_offset 6, -16
 8847 0001 53       		pushq	%rbx
 8848              		.cfi_def_cfa_offset 24
 8849              		.cfi_offset 3, -24
 8850 0002 4889D5   		movq	%rdx, %rbp
 8851 0005 4889FB   		movq	%rdi, %rbx
 8852 0008 4883EC28 		subq	$40, %rsp
 8853              		.cfi_def_cfa_offset 64
 8854              	.LBB904:
 8855              		.loc 1 1591 0
 8856 000c 48C70700 		movq	$_ZTV9Fl_Plugin+16, (%rdi)
 8856      000000
 8857 0013 48C74708 		movq	$0, 8(%rdi)
 8857      00000000 
 8858              	.LBB905:
 8859              		.loc 1 1596 0
 8860 001b 4889E7   		movq	%rsp, %rdi
 8861              	.LVL938:
 8862              	.LBE905:
 8863              	.LBE904:
 8864              		.loc 1 1590 0
 8865 001e 64488B04 		movq	%fs:40, %rax
 8865      25280000 
 8865      00
 8866 0027 48894424 		movq	%rax, 24(%rsp)
 8866      18
 8867 002c 31C0     		xorl	%eax, %eax
 8868              	.LBB911:
 8869              	.LBB910:
 8870              		.loc 1 1596 0
 8871 002e E8000000 		call	_ZN17Fl_Plugin_ManagerC1EPKc
 8871      00
 8872              	.LVL939:
 8873              		.loc 1 1597 0
 8874 0033 4889DA   		movq	%rbx, %rdx
 8875 0036 4889EE   		movq	%rbp, %rsi
 8876 0039 4889E7   		movq	%rsp, %rdi
 8877 003c E8000000 		call	_ZN17Fl_Plugin_Manager9addPluginEPKcP9Fl_Plugin
 8877      00
 8878              	.LVL940:
 8879              	.LBB906:
 8880              	.LBB907:
 8881              		.loc 1 1627 0
 8882 0041 4889E7   		movq	%rsp, %rdi
 8883              	.LBE907:
 8884              	.LBE906:
 8885              		.loc 1 1597 0
 8886 0044 48894308 		movq	%rax, 8(%rbx)
 8887              	.LVL941:
 8888              	.LBB909:
 8889              	.LBB908:
 8890              		.loc 1 1627 0
 8891 0048 48C70424 		movq	$_ZTV17Fl_Plugin_Manager+16, (%rsp)
 8891      00000000 
 8892 0050 E8000000 		call	_ZN14Fl_PreferencesD2Ev
 8892      00
 8893              	.LVL942:
 8894              	.LBE908:
 8895              	.LBE909:
 8896              	.LBE910:
 8897              	.LBE911:
 8898              		.loc 1 1598 0
 8899 0055 488B4424 		movq	24(%rsp), %rax
 8899      18
 8900 005a 64483304 		xorq	%fs:40, %rax
 8900      25280000 
 8900      00
 8901 0063 7507     		jne	.L676
 8902 0065 4883C428 		addq	$40, %rsp
 8903              		.cfi_remember_state
 8904              		.cfi_def_cfa_offset 24
 8905 0069 5B       		popq	%rbx
 8906              		.cfi_def_cfa_offset 16
 8907              	.LVL943:
 8908 006a 5D       		popq	%rbp
 8909              		.cfi_def_cfa_offset 8
 8910              	.LVL944:
 8911 006b C3       		ret
 8912              	.LVL945:
 8913              	.L676:
 8914              		.cfi_restore_state
 8915 006c E8000000 		call	__stack_chk_fail
 8915      00
 8916              	.LVL946:
 8917              		.cfi_endproc
 8918              	.LFE308:
 8920              		.section	.text.unlikely._ZN9Fl_PluginC2EPKcS1_
 8921              	.LCOLDE113:
 8922              		.section	.text._ZN9Fl_PluginC2EPKcS1_
 8923              	.LHOTE113:
 8924              		.globl	_ZN9Fl_PluginC1EPKcS1_
 8925              		.set	_ZN9Fl_PluginC1EPKcS1_,_ZN9Fl_PluginC2EPKcS1_
 8926              		.section	.text.unlikely._ZN17Fl_Plugin_Manager12removePluginEPv,"ax",@progbits
 8927              		.align 2
 8928              	.LCOLDB114:
 8929              		.section	.text._ZN17Fl_Plugin_Manager12removePluginEPv,"ax",@progbits
 8930              	.LHOTB114:
 8931              		.align 2
 8932              		.p2align 4,,15
 8933              		.globl	_ZN17Fl_Plugin_Manager12removePluginEPv
 8935              	_ZN17Fl_Plugin_Manager12removePluginEPv:
 8936              	.LFB328:
 8937              		.loc 1 1721 0
 8938              		.cfi_startproc
 8939              	.LVL947:
 8940              	.LBB912:
 8941              	.LBB913:
  98:fltk-1.3.4-1/FL/Fl_Preferences.H **** 
 8942              		.loc 5 98 0
 8943 0000 E9000000 		jmp	_ZN14Fl_Preferences4Node6removeEv
 8943      00
 8944              	.LVL948:
 8945              	.LBE913:
 8946              	.LBE912:
 8947              		.cfi_endproc
 8948              	.LFE328:
 8950              		.section	.text.unlikely._ZN17Fl_Plugin_Manager12removePluginEPv
 8951              	.LCOLDE114:
 8952              		.section	.text._ZN17Fl_Plugin_Manager12removePluginEPv
 8953              	.LHOTE114:
 8954              		.section	.text.unlikely._ZN17Fl_Plugin_Manager4loadEPKc,"ax",@progbits
 8955              		.align 2
 8956              	.LCOLDB115:
 8957              		.section	.text._ZN17Fl_Plugin_Manager4loadEPKc,"ax",@progbits
 8958              	.LHOTB115:
 8959              		.align 2
 8960              		.p2align 4,,15
 8961              		.globl	_ZN17Fl_Plugin_Manager4loadEPKc
 8963              	_ZN17Fl_Plugin_Manager4loadEPKc:
 8964              	.LFB329:
 8965              		.loc 1 1733 0
 8966              		.cfi_startproc
 8967              	.LVL949:
 8968 0000 4883EC08 		subq	$8, %rsp
 8969              		.cfi_def_cfa_offset 16
 8970              		.loc 1 1741 0
 8971 0004 BE010000 		movl	$1, %esi
 8971      00
 8972 0009 E8000000 		call	dlopen
 8972      00
 8973              	.LVL950:
 8974              		.loc 1 1745 0
 8975 000e 4885C0   		testq	%rax, %rax
 8976 0011 0F94C0   		sete	%al
 8977              	.LVL951:
 8978              		.loc 1 1746 0
 8979 0014 4883C408 		addq	$8, %rsp
 8980              		.cfi_def_cfa_offset 8
 8981              		.loc 1 1745 0
 8982 0018 0FB6C0   		movzbl	%al, %eax
 8983 001b F7D8     		negl	%eax
 8984              		.loc 1 1746 0
 8985 001d C3       		ret
 8986              		.cfi_endproc
 8987              	.LFE329:
 8989              		.section	.text.unlikely._ZN17Fl_Plugin_Manager4loadEPKc
 8990              	.LCOLDE115:
 8991              		.section	.text._ZN17Fl_Plugin_Manager4loadEPKc
 8992              	.LHOTE115:
 8993              		.section	.rodata.str1.1
 8994              	.LC116:
 8995 009a 25732573 		.string	"%s%s"
 8995      00
 8996              		.section	.text.unlikely._ZN17Fl_Plugin_Manager7loadAllEPKcS1_,"ax",@progbits
 8997              		.align 2
 8998              	.LCOLDB117:
 8999              		.section	.text._ZN17Fl_Plugin_Manager7loadAllEPKcS1_,"ax",@progbits
 9000              	.LHOTB117:
 9001              		.align 2
 9002              		.p2align 4,,15
 9003              		.globl	_ZN17Fl_Plugin_Manager7loadAllEPKcS1_
 9005              	_ZN17Fl_Plugin_Manager7loadAllEPKcS1_:
 9006              	.LFB330:
 9007              		.loc 1 1751 0
 9008              		.cfi_startproc
 9009              	.LVL952:
 9010 0000 4157     		pushq	%r15
 9011              		.cfi_def_cfa_offset 16
 9012              		.cfi_offset 15, -16
 9013 0002 4156     		pushq	%r14
 9014              		.cfi_def_cfa_offset 24
 9015              		.cfi_offset 14, -24
 9016              		.loc 1 1753 0
 9017 0004 BA000000 		movl	$fl_numericsort, %edx
 9017      00
 9018              		.loc 1 1751 0
 9019 0009 4155     		pushq	%r13
 9020              		.cfi_def_cfa_offset 32
 9021              		.cfi_offset 13, -32
 9022 000b 4154     		pushq	%r12
 9023              		.cfi_def_cfa_offset 40
 9024              		.cfi_offset 12, -40
 9025 000d 4989F5   		movq	%rsi, %r13
 9026 0010 55       		pushq	%rbp
 9027              		.cfi_def_cfa_offset 48
 9028              		.cfi_offset 6, -48
 9029 0011 53       		pushq	%rbx
 9030              		.cfi_def_cfa_offset 56
 9031              		.cfi_offset 3, -56
 9032 0012 4989FF   		movq	%rdi, %r15
 9033 0015 4883EC28 		subq	$40, %rsp
 9034              		.cfi_def_cfa_offset 96
 9035              		.loc 1 1753 0
 9036 0019 488D7424 		leaq	16(%rsp), %rsi
 9036      10
 9037              	.LVL953:
 9038              		.loc 1 1751 0
 9039 001e 64488B04 		movq	%fs:40, %rax
 9039      25280000 
 9039      00
 9040 0027 48894424 		movq	%rax, 24(%rsp)
 9040      18
 9041 002c 31C0     		xorl	%eax, %eax
 9042              		.loc 1 1753 0
 9043 002e E8000000 		call	_Z16fl_filename_listPKcPPP6direntPFiS3_S3_E
 9043      00
 9044              	.LVL954:
 9045              	.LBB914:
 9046              		.loc 1 1754 0
 9047 0033 85C0     		testl	%eax, %eax
 9048 0035 7E74     		jle	.L685
 9049 0037 83E801   		subl	$1, %eax
 9050              	.LVL955:
 9051 003a 31DB     		xorl	%ebx, %ebx
 9052 003c 4C8D34C5 		leaq	8(,%rax,8), %r14
 9052      08000000 
 9053              	.LVL956:
 9054              		.p2align 4,,10
 9055 0044 0F1F4000 		.p2align 3
 9056              	.L686:
 9057              	.LBB915:
 9058              		.loc 1 1755 0
 9059 0048 488B4424 		movq	16(%rsp), %rax
 9059      10
 9060              		.loc 1 1756 0
 9061 004d 4D85ED   		testq	%r13, %r13
 9062              		.loc 1 1755 0
 9063 0050 488B2C18 		movq	(%rax,%rbx), %rbp
 9064              	.LVL957:
 9065 0054 4C8D6513 		leaq	19(%rbp), %r12
 9066              		.loc 1 1756 0
 9067 0058 740F     		je	.L683
 9068              		.loc 1 1756 0 is_stmt 0 discriminator 2
 9069 005a 4C89EE   		movq	%r13, %rsi
 9070 005d 4C89E7   		movq	%r12, %rdi
 9071 0060 E8000000 		call	_Z17fl_filename_matchPKcS0_
 9071      00
 9072              	.LVL958:
 9073 0065 85C0     		testl	%eax, %eax
 9074 0067 7431     		je	.L684
 9075              	.L683:
 9076              		.loc 1 1757 0 is_stmt 1
 9077 0069 31C0     		xorl	%eax, %eax
 9078 006b 4C89E1   		movq	%r12, %rcx
 9079 006e 4C89FA   		movq	%r15, %rdx
 9080 0071 BE000000 		movl	$.LC116, %esi
 9080      00
 9081 0076 4889E7   		movq	%rsp, %rdi
 9082 0079 E8000000 		call	_ZN14Fl_Preferences4NameC1EPKcz
 9082      00
 9083              	.LVL959:
 9084              	.LBB916:
 9085              	.LBB917:
 9086              		.loc 1 1741 0
 9087 007e 488B3C24 		movq	(%rsp), %rdi
 9088 0082 BE010000 		movl	$1, %esi
 9088      00
 9089 0087 E8000000 		call	dlopen
 9089      00
 9090              	.LVL960:
 9091              	.LBE917:
 9092              	.LBE916:
 9093              	.LBB918:
 9094              	.LBB919:
 9095              		.loc 1 946 0
 9096 008c 488B3C24 		movq	(%rsp), %rdi
 9097 0090 4885FF   		testq	%rdi, %rdi
 9098 0093 7405     		je	.L684
 9099              		.loc 1 947 0
 9100 0095 E8000000 		call	free
 9100      00
 9101              	.LVL961:
 9102              	.L684:
 9103              	.LBE919:
 9104              	.LBE918:
 9105              		.loc 1 1759 0 discriminator 2
 9106 009a 4889EF   		movq	%rbp, %rdi
 9107 009d 4883C308 		addq	$8, %rbx
 9108 00a1 E8000000 		call	free
 9108      00
 9109              	.LVL962:
 9110              	.LBE915:
 9111              		.loc 1 1754 0 discriminator 2
 9112 00a6 4939DE   		cmpq	%rbx, %r14
 9113 00a9 759D     		jne	.L686
 9114              	.LVL963:
 9115              	.L685:
 9116              	.LBE914:
 9117              		.loc 1 1761 0
 9118 00ab 488B7C24 		movq	16(%rsp), %rdi
 9118      10
 9119 00b0 E8000000 		call	free
 9119      00
 9120              	.LVL964:
 9121              		.loc 1 1763 0
 9122 00b5 31C0     		xorl	%eax, %eax
 9123 00b7 488B4C24 		movq	24(%rsp), %rcx
 9123      18
 9124 00bc 6448330C 		xorq	%fs:40, %rcx
 9124      25280000 
 9124      00
 9125 00c5 750F     		jne	.L693
 9126 00c7 4883C428 		addq	$40, %rsp
 9127              		.cfi_remember_state
 9128              		.cfi_def_cfa_offset 56
 9129 00cb 5B       		popq	%rbx
 9130              		.cfi_def_cfa_offset 48
 9131 00cc 5D       		popq	%rbp
 9132              		.cfi_def_cfa_offset 40
 9133 00cd 415C     		popq	%r12
 9134              		.cfi_def_cfa_offset 32
 9135 00cf 415D     		popq	%r13
 9136              		.cfi_def_cfa_offset 24
 9137              	.LVL965:
 9138 00d1 415E     		popq	%r14
 9139              		.cfi_def_cfa_offset 16
 9140 00d3 415F     		popq	%r15
 9141              		.cfi_def_cfa_offset 8
 9142              	.LVL966:
 9143 00d5 C3       		ret
 9144              	.LVL967:
 9145              	.L693:
 9146              		.cfi_restore_state
 9147 00d6 E8000000 		call	__stack_chk_fail
 9147      00
 9148              	.LVL968:
 9149              		.cfi_endproc
 9150              	.LFE330:
 9152              		.section	.text.unlikely._ZN17Fl_Plugin_Manager7loadAllEPKcS1_
 9153              	.LCOLDE117:
 9154              		.section	.text._ZN17Fl_Plugin_Manager7loadAllEPKcS1_
 9155              	.LHOTE117:
 9156              		.section	.rodata._ZZN14Fl_Preferences3setEPKcPKviE2lu,"a",@progbits
 9157              		.align 16
 9160              	_ZZN14Fl_Preferences3setEPKcPKviE2lu:
 9161 0000 30313233 		.string	"0123456789abcdef"
 9161      34353637 
 9161      38396162 
 9161      63646566 
 9161      00
 9162              		.weak	_ZTS14Fl_Preferences
 9163              		.section	.rodata._ZTS14Fl_Preferences,"aG",@progbits,_ZTS14Fl_Preferences,comdat
 9164              		.align 16
 9167              	_ZTS14Fl_Preferences:
 9168 0000 3134466C 		.string	"14Fl_Preferences"
 9168      5F507265 
 9168      66657265 
 9168      6E636573 
 9168      00
 9169              		.weak	_ZTI14Fl_Preferences
 9170              		.section	.rodata._ZTI14Fl_Preferences,"aG",@progbits,_ZTI14Fl_Preferences,comdat
 9171              		.align 8
 9174              	_ZTI14Fl_Preferences:
 9175 0000 00000000 		.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
 9175      00000000 
 9176 0008 00000000 		.quad	_ZTS14Fl_Preferences
 9176      00000000 
 9177              		.weak	_ZTS9Fl_Plugin
 9178              		.section	.rodata._ZTS9Fl_Plugin,"aG",@progbits,_ZTS9Fl_Plugin,comdat
 9179              		.align 8
 9182              	_ZTS9Fl_Plugin:
 9183 0000 39466C5F 		.string	"9Fl_Plugin"
 9183      506C7567 
 9183      696E00
 9184              		.weak	_ZTI9Fl_Plugin
 9185              		.section	.rodata._ZTI9Fl_Plugin,"aG",@progbits,_ZTI9Fl_Plugin,comdat
 9186              		.align 8
 9189              	_ZTI9Fl_Plugin:
 9190 0000 00000000 		.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
 9190      00000000 
 9191 0008 00000000 		.quad	_ZTS9Fl_Plugin
 9191      00000000 
 9192              		.weak	_ZTS17Fl_Plugin_Manager
 9193              		.section	.rodata._ZTS17Fl_Plugin_Manager,"aG",@progbits,_ZTS17Fl_Plugin_Manager,comdat
 9194              		.align 16
 9197              	_ZTS17Fl_Plugin_Manager:
 9198 0000 3137466C 		.string	"17Fl_Plugin_Manager"
 9198      5F506C75 
 9198      67696E5F 
 9198      4D616E61 
 9198      67657200 
 9199              		.weak	_ZTI17Fl_Plugin_Manager
 9200              		.section	.rodata._ZTI17Fl_Plugin_Manager,"aG",@progbits,_ZTI17Fl_Plugin_Manager,comdat
 9201              		.align 8
 9204              	_ZTI17Fl_Plugin_Manager:
 9205 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 9205      00000000 
 9206 0008 00000000 		.quad	_ZTS17Fl_Plugin_Manager
 9206      00000000 
 9207 0010 00000000 		.quad	_ZTI14Fl_Preferences
 9207      00000000 
 9208              		.weak	_ZTV14Fl_Preferences
 9209              		.section	.rodata._ZTV14Fl_Preferences,"aG",@progbits,_ZTV14Fl_Preferences,comdat
 9210              		.align 8
 9213              	_ZTV14Fl_Preferences:
 9214 0000 00000000 		.quad	0
 9214      00000000 
 9215 0008 00000000 		.quad	_ZTI14Fl_Preferences
 9215      00000000 
 9216 0010 00000000 		.quad	_ZN14Fl_PreferencesD1Ev
 9216      00000000 
 9217 0018 00000000 		.quad	_ZN14Fl_PreferencesD0Ev
 9217      00000000 
 9218              		.weak	_ZTV9Fl_Plugin
 9219              		.section	.rodata._ZTV9Fl_Plugin,"aG",@progbits,_ZTV9Fl_Plugin,comdat
 9220              		.align 8
 9223              	_ZTV9Fl_Plugin:
 9224 0000 00000000 		.quad	0
 9224      00000000 
 9225 0008 00000000 		.quad	_ZTI9Fl_Plugin
 9225      00000000 
 9226 0010 00000000 		.quad	_ZN9Fl_PluginD1Ev
 9226      00000000 
 9227 0018 00000000 		.quad	_ZN9Fl_PluginD0Ev
 9227      00000000 
 9228              		.weak	_ZTV17Fl_Plugin_Manager
 9229              		.section	.rodata._ZTV17Fl_Plugin_Manager,"aG",@progbits,_ZTV17Fl_Plugin_Manager,comdat
 9230              		.align 8
 9233              	_ZTV17Fl_Plugin_Manager:
 9234 0000 00000000 		.quad	0
 9234      00000000 
 9235 0008 00000000 		.quad	_ZTI17Fl_Plugin_Manager
 9235      00000000 
 9236 0010 00000000 		.quad	_ZN17Fl_Plugin_ManagerD1Ev
 9236      00000000 
 9237 0018 00000000 		.quad	_ZN17Fl_Plugin_ManagerD0Ev
 9237      00000000 
 9238              		.globl	_ZN14Fl_Preferences4Node12lastEntrySetE
 9239              		.section	.data._ZN14Fl_Preferences4Node12lastEntrySetE,"aw",@progbits
 9240              		.align 4
 9243              	_ZN14Fl_Preferences4Node12lastEntrySetE:
 9244 0000 FFFFFFFF 		.long	-1
 9245              		.globl	_ZN14Fl_Preferences12runtimePrefsE
 9246              		.section	.bss._ZN14Fl_Preferences12runtimePrefsE,"aw",@nobits
 9247              		.align 8
 9250              	_ZN14Fl_Preferences12runtimePrefsE:
 9251 0000 00000000 		.zero	8
 9251      00000000 
 9252              		.globl	_ZN14Fl_Preferences10uuidBufferE
 9253              		.section	.bss._ZN14Fl_Preferences10uuidBufferE,"aw",@nobits
 9254              		.align 32
 9257              	_ZN14Fl_Preferences10uuidBufferE:
 9258 0000 00000000 		.zero	40
 9258      00000000 
 9258      00000000 
 9258      00000000 
 9258      00000000 
 9259              		.globl	_ZN14Fl_Preferences10nameBufferE
 9260              		.section	.bss._ZN14Fl_Preferences10nameBufferE,"aw",@nobits
 9261              		.align 32
 9264              	_ZN14Fl_Preferences10nameBufferE:
 9265 0000 00000000 		.zero	128
 9265      00000000 
 9265      00000000 
 9265      00000000 
 9265      00000000 
 9266              		.text
 9267              	.Letext0:
 9268              		.section	.text.unlikely._ZL10decodeTextPKc
 9269              	.Letext_cold0:
 9270              		.file 10 "fltk-1.3.4-1/FL/fl_types.h"
 9271              		.file 11 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 9272              		.file 12 "/usr/include/x86_64-linux-gnu/bits/types.h"
 9273              		.file 13 "/usr/include/stdio.h"
 9274              		.file 14 "/usr/include/libio.h"
 9275              		.file 15 "<built-in>"
 9276              		.file 16 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h"
 9277              		.file 17 "/usr/include/time.h"
 9278              		.file 18 "fltk-1.3.4-1/FL/Enumerations.H"
 9279              		.file 19 "/usr/include/x86_64-linux-gnu/bits/dirent.h"
 9280              		.file 20 "/usr/include/x86_64-linux-gnu/sys/time.h"
 9281              		.file 21 "fltk-1.3.4-1/FL/Fl_Plugin.H"
 9282              		.file 22 "fltk-1.3.4-1/FL/fl_utf8.h"
 9283              		.file 23 "fltk-1.3.4-1/src/flstring.h"
 9284              		.file 24 "/usr/include/dlfcn.h"
 9285              		.file 25 "fltk-1.3.4-1/FL/filename.H"
 9286              		.file 26 "/usr/include/x86_64-linux-gnu/bits/confname.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Preferences.cxx
     /tmp/ccK84KdQ.s:13     .text._ZL10decodeTextPKc:0000000000000000 _ZL10decodeTextPKc
     /tmp/ccK84KdQ.s:227    .text._ZL9decodeHexPKcRi:0000000000000000 _ZL9decodeHexPKcRi
     /tmp/ccK84KdQ.s:386    .text._ZN14Fl_Preferences4Node9nChildrenEv.part.5:0000000000000000 _ZN14Fl_Preferences4Node9nChildrenEv.part.5
     /tmp/ccK84KdQ.s:442    .text._ZN14Fl_Preferences7newUUIDEv:0000000000000000 _ZN14Fl_Preferences7newUUIDEv
     /tmp/ccK84KdQ.s:9257   .bss._ZN14Fl_Preferences10uuidBufferE:0000000000000000 _ZN14Fl_Preferences10uuidBufferE
     /tmp/ccK84KdQ.s:666    .text._ZN14Fl_PreferencesC2EPv:0000000000000000 _ZN14Fl_PreferencesC2EPv
     /tmp/ccK84KdQ.s:9213   .rodata._ZTV14Fl_Preferences:0000000000000000 _ZTV14Fl_Preferences
     /tmp/ccK84KdQ.s:666    .text._ZN14Fl_PreferencesC2EPv:0000000000000000 _ZN14Fl_PreferencesC1EPv
     /tmp/ccK84KdQ.s:737    .text._ZN14Fl_PreferencesC2ERKS_:0000000000000000 _ZN14Fl_PreferencesC2ERKS_
     /tmp/ccK84KdQ.s:737    .text._ZN14Fl_PreferencesC2ERKS_:0000000000000000 _ZN14Fl_PreferencesC1ERKS_
     /tmp/ccK84KdQ.s:771    .text._ZN14Fl_PreferencesaSERKS_:0000000000000000 _ZN14Fl_PreferencesaSERKS_
     /tmp/ccK84KdQ.s:807    .text._ZN14Fl_Preferences6groupsEv:0000000000000000 _ZN14Fl_Preferences6groupsEv
     /tmp/ccK84KdQ.s:852    .text._ZN14Fl_Preferences7entriesEv:0000000000000000 _ZN14Fl_Preferences7entriesEv
     /tmp/ccK84KdQ.s:878    .text._ZN14Fl_Preferences5entryEi:0000000000000000 _ZN14Fl_Preferences5entryEi
     /tmp/ccK84KdQ.s:911    .text._ZN14Fl_Preferences4NameC2Ej:0000000000000000 _ZN14Fl_Preferences4NameC2Ej
     /tmp/ccK84KdQ.s:911    .text._ZN14Fl_Preferences4NameC2Ej:0000000000000000 _ZN14Fl_Preferences4NameC1Ej
     /tmp/ccK84KdQ.s:990    .text._ZN14Fl_Preferences4NameC2EPKcz:0000000000000000 _ZN14Fl_Preferences4NameC2EPKcz
     /tmp/ccK84KdQ.s:990    .text._ZN14Fl_Preferences4NameC2EPKcz:0000000000000000 _ZN14Fl_Preferences4NameC1EPKcz
     /tmp/ccK84KdQ.s:1106   .text._ZN14Fl_Preferences4NameD2Ev:0000000000000000 _ZN14Fl_Preferences4NameD2Ev
     /tmp/ccK84KdQ.s:1106   .text._ZN14Fl_Preferences4NameD2Ev:0000000000000000 _ZN14Fl_Preferences4NameD1Ev
     /tmp/ccK84KdQ.s:1143   .text._ZN14Fl_Preferences8RootNodeC2EPS_:0000000000000000 _ZN14Fl_Preferences8RootNodeC2EPS_
     /tmp/ccK84KdQ.s:1143   .text._ZN14Fl_Preferences8RootNodeC2EPS_:0000000000000000 _ZN14Fl_Preferences8RootNodeC1EPS_
     /tmp/ccK84KdQ.s:1177   .text._ZN14Fl_Preferences8RootNode7getPathEPci:0000000000000000 _ZN14Fl_Preferences8RootNode7getPathEPci
     /tmp/ccK84KdQ.s:1337   .text._ZN14Fl_Preferences15getUserdataPathEPci:0000000000000000 _ZN14Fl_Preferences15getUserdataPathEPci
     /tmp/ccK84KdQ.s:1372   .text._ZN14Fl_Preferences4NodeC2EPKc:0000000000000000 _ZN14Fl_Preferences4NodeC2EPKc
     /tmp/ccK84KdQ.s:1372   .text._ZN14Fl_Preferences4NodeC2EPKc:0000000000000000 _ZN14Fl_Preferences4NodeC1EPKc
     /tmp/ccK84KdQ.s:1448   .text._ZN14Fl_Preferences4Node16deleteAllEntriesEv:0000000000000000 _ZN14Fl_Preferences4Node16deleteAllEntriesEv
     /tmp/ccK84KdQ.s:1557   .text._ZN14Fl_Preferences16deleteAllEntriesEv:0000000000000000 _ZN14Fl_Preferences16deleteAllEntriesEv
     /tmp/ccK84KdQ.s:1590   .text._ZN14Fl_Preferences4NodeD2Ev:0000000000000000 _ZN14Fl_Preferences4NodeD2Ev
     /tmp/ccK84KdQ.s:1674   .text._ZN14Fl_Preferences4Node17deleteAllChildrenEv:0000000000000000 _ZN14Fl_Preferences4Node17deleteAllChildrenEv
     /tmp/ccK84KdQ.s:1590   .text._ZN14Fl_Preferences4NodeD2Ev:0000000000000000 _ZN14Fl_Preferences4NodeD1Ev
     /tmp/ccK84KdQ.s:1758   .text._ZN14Fl_Preferences15deleteAllGroupsEv:0000000000000000 _ZN14Fl_Preferences15deleteAllGroupsEv
     /tmp/ccK84KdQ.s:1791   .text._ZN14Fl_Preferences5clearEv:0000000000000000 _ZN14Fl_Preferences5clearEv
     /tmp/ccK84KdQ.s:1840   .text._ZN14Fl_Preferences4Node5dirtyEv:0000000000000000 _ZN14Fl_Preferences4Node5dirtyEv
     /tmp/ccK84KdQ.s:1943   .text._ZN14Fl_Preferences4Node5writeEP8_IO_FILE:0000000000000000 _ZN14Fl_Preferences4Node5writeEP8_IO_FILE
     /tmp/ccK84KdQ.s:2234   .text._ZN14Fl_Preferences8RootNode5writeEv:0000000000000000 _ZN14Fl_Preferences8RootNode5writeEv
     /tmp/ccK84KdQ.s:2424   .text._ZN14Fl_Preferences5flushEv:0000000000000000 _ZN14Fl_Preferences5flushEv
     /tmp/ccK84KdQ.s:2477   .text._ZN14Fl_Preferences8RootNodeD2Ev:0000000000000000 _ZN14Fl_Preferences8RootNodeD2Ev
     /tmp/ccK84KdQ.s:2477   .text._ZN14Fl_Preferences8RootNodeD2Ev:0000000000000000 _ZN14Fl_Preferences8RootNodeD1Ev
     /tmp/ccK84KdQ.s:2588   .text._ZN14Fl_PreferencesD2Ev:0000000000000000 _ZN14Fl_PreferencesD2Ev
     /tmp/ccK84KdQ.s:2588   .text._ZN14Fl_PreferencesD2Ev:0000000000000000 _ZN14Fl_PreferencesD1Ev
     /tmp/ccK84KdQ.s:2665   .text._ZN14Fl_PreferencesD0Ev:0000000000000000 _ZN14Fl_PreferencesD0Ev
     /tmp/ccK84KdQ.s:2700   .text._ZN17Fl_Plugin_ManagerD2Ev:0000000000000000 _ZN17Fl_Plugin_ManagerD2Ev
     /tmp/ccK84KdQ.s:9233   .rodata._ZTV17Fl_Plugin_Manager:0000000000000000 _ZTV17Fl_Plugin_Manager
     /tmp/ccK84KdQ.s:2700   .text._ZN17Fl_Plugin_ManagerD2Ev:0000000000000000 _ZN17Fl_Plugin_ManagerD1Ev
     /tmp/ccK84KdQ.s:2729   .text._ZN17Fl_Plugin_ManagerD0Ev:0000000000000000 _ZN17Fl_Plugin_ManagerD0Ev
     /tmp/ccK84KdQ.s:2772   .text._ZN14Fl_Preferences4Node9setParentEPS0_:0000000000000000 _ZN14Fl_Preferences4Node9setParentEPS0_
     /tmp/ccK84KdQ.s:9264   .bss._ZN14Fl_Preferences10nameBufferE:0000000000000000 _ZN14Fl_Preferences10nameBufferE
     /tmp/ccK84KdQ.s:2842   .text._ZN14Fl_Preferences4Node8findRootEv:0000000000000000 _ZN14Fl_Preferences4Node8findRootEv
     /tmp/ccK84KdQ.s:2891   .text._ZN14Fl_Preferences4Node3setEPKcS2_:0000000000000000 _ZN14Fl_Preferences4Node3setEPKcS2_
     /tmp/ccK84KdQ.s:9243   .data._ZN14Fl_Preferences4Node12lastEntrySetE:0000000000000000 _ZN14Fl_Preferences4Node12lastEntrySetE
     /tmp/ccK84KdQ.s:3121   .text._ZN14Fl_Preferences3setEPKci:0000000000000000 _ZN14Fl_Preferences3setEPKci
     /tmp/ccK84KdQ.s:3194   .text._ZN14Fl_Preferences3setEPKcf:0000000000000000 _ZN14Fl_Preferences3setEPKcf
     /tmp/ccK84KdQ.s:3273   .text._ZN14Fl_Preferences3setEPKcfi:0000000000000000 _ZN14Fl_Preferences3setEPKcfi
     /tmp/ccK84KdQ.s:3345   .text._ZN14Fl_Preferences3setEPKcd:0000000000000000 _ZN14Fl_Preferences3setEPKcd
     /tmp/ccK84KdQ.s:3413   .text._ZN14Fl_Preferences3setEPKcdi:0000000000000000 _ZN14Fl_Preferences3setEPKcdi
     /tmp/ccK84KdQ.s:3486   .text._ZN14Fl_Preferences3setEPKcS1_:0000000000000000 _ZN14Fl_Preferences3setEPKcS1_
     /tmp/ccK84KdQ.s:3735   .text._ZN14Fl_Preferences3setEPKcPKvi:0000000000000000 _ZN14Fl_Preferences3setEPKcPKvi
     /tmp/ccK84KdQ.s:9160   .rodata._ZZN14Fl_Preferences3setEPKcPKviE2lu:0000000000000000 _ZZN14Fl_Preferences3setEPKcPKviE2lu
     /tmp/ccK84KdQ.s:3870   .text._ZN14Fl_Preferences4Node3setEPKc:0000000000000000 _ZN14Fl_Preferences4Node3setEPKc
     /tmp/ccK84KdQ.s:4031   .text._ZN14Fl_Preferences4Node3addEPKc:0000000000000000 _ZN14Fl_Preferences4Node3addEPKc
     /tmp/ccK84KdQ.s:4167   .text._ZN14Fl_Preferences4Node8getEntryEPKc:0000000000000000 _ZN14Fl_Preferences4Node8getEntryEPKc
     /tmp/ccK84KdQ.s:4271   .text._ZN14Fl_Preferences11entryExistsEPKc:0000000000000000 _ZN14Fl_Preferences11entryExistsEPKc
     /tmp/ccK84KdQ.s:4307   .text._ZN14Fl_Preferences4Node3getEPKc:0000000000000000 _ZN14Fl_Preferences4Node3getEPKc
     /tmp/ccK84KdQ.s:4366   .text._ZN14Fl_Preferences3getEPKcRii:0000000000000000 _ZN14Fl_Preferences3getEPKcRii
     /tmp/ccK84KdQ.s:4467   .text._ZN14Fl_Preferences3getEPKcRff:0000000000000000 _ZN14Fl_Preferences3getEPKcRff
     /tmp/ccK84KdQ.s:4564   .text._ZN14Fl_Preferences3getEPKcRdd:0000000000000000 _ZN14Fl_Preferences3getEPKcRdd
     /tmp/ccK84KdQ.s:4659   .text._ZN14Fl_Preferences3getEPKcPcS1_i:0000000000000000 _ZN14Fl_Preferences3getEPKcPcS1_i
     /tmp/ccK84KdQ.s:4825   .text._ZN14Fl_Preferences3getEPKcRPcS1_:0000000000000000 _ZN14Fl_Preferences3getEPKcRPcS1_
     /tmp/ccK84KdQ.s:4956   .text._ZN14Fl_Preferences3getEPKcPvPKvii:0000000000000000 _ZN14Fl_Preferences3getEPKcPvPKvii
     /tmp/ccK84KdQ.s:5115   .text._ZN14Fl_Preferences3getEPKcRPvPKvi:0000000000000000 _ZN14Fl_Preferences3getEPKcRPvPKvi
     /tmp/ccK84KdQ.s:5259   .text._ZN14Fl_Preferences4sizeEPKc:0000000000000000 _ZN14Fl_Preferences4sizeEPKc
     /tmp/ccK84KdQ.s:5322   .text._ZN14Fl_Preferences4Node11deleteEntryEPKc:0000000000000000 _ZN14Fl_Preferences4Node11deleteEntryEPKc
     /tmp/ccK84KdQ.s:5400   .text._ZN14Fl_Preferences11deleteEntryEPKc:0000000000000000 _ZN14Fl_Preferences11deleteEntryEPKc
     /tmp/ccK84KdQ.s:5426   .text._ZN14Fl_Preferences4Node4findEPKc:0000000000000000 _ZN14Fl_Preferences4Node4findEPKc
     /tmp/ccK84KdQ.s:5662   .text._ZN14Fl_Preferences8RootNode4readEv:0000000000000000 _ZN14Fl_Preferences8RootNode4readEv
     /tmp/ccK84KdQ.s:5910   .text._ZN14Fl_Preferences8RootNodeC2EPS_NS_4RootEPKcS4_:0000000000000000 _ZN14Fl_Preferences8RootNodeC2EPS_NS_4RootEPKcS4_
     /tmp/ccK84KdQ.s:5910   .text._ZN14Fl_Preferences8RootNodeC2EPS_NS_4RootEPKcS4_:0000000000000000 _ZN14Fl_Preferences8RootNodeC1EPS_NS_4RootEPKcS4_
     /tmp/ccK84KdQ.s:6178   .text._ZN14Fl_PreferencesC2ENS_4RootEPKcS2_:0000000000000000 _ZN14Fl_PreferencesC2ENS_4RootEPKcS2_
     /tmp/ccK84KdQ.s:6178   .text._ZN14Fl_PreferencesC2ENS_4RootEPKcS2_:0000000000000000 _ZN14Fl_PreferencesC1ENS_4RootEPKcS2_
     /tmp/ccK84KdQ.s:6319   .text._ZN14Fl_Preferences8RootNodeC2EPS_PKcS3_S3_:0000000000000000 _ZN14Fl_Preferences8RootNodeC2EPS_PKcS3_S3_
     /tmp/ccK84KdQ.s:6319   .text._ZN14Fl_Preferences8RootNodeC2EPS_PKcS3_S3_:0000000000000000 _ZN14Fl_Preferences8RootNodeC1EPS_PKcS3_S3_
     /tmp/ccK84KdQ.s:6490   .text._ZN14Fl_PreferencesC2EPKcS1_S1_:0000000000000000 _ZN14Fl_PreferencesC2EPKcS1_S1_
     /tmp/ccK84KdQ.s:6490   .text._ZN14Fl_PreferencesC2EPKcS1_S1_:0000000000000000 _ZN14Fl_PreferencesC1EPKcS1_S1_
     /tmp/ccK84KdQ.s:6628   .text._ZN14Fl_Preferences4Node8addChildEPKc:0000000000000000 _ZN14Fl_Preferences4Node8addChildEPKc
     /tmp/ccK84KdQ.s:6728   .text._ZN14Fl_PreferencesC2ERS_PKc:0000000000000000 _ZN14Fl_PreferencesC2ERS_PKc
     /tmp/ccK84KdQ.s:6728   .text._ZN14Fl_PreferencesC2ERS_PKc:0000000000000000 _ZN14Fl_PreferencesC1ERS_PKc
     /tmp/ccK84KdQ.s:6777   .text._ZN14Fl_PreferencesC2EPS_PKc:0000000000000000 _ZN14Fl_PreferencesC2EPS_PKc
     /tmp/ccK84KdQ.s:9250   .bss._ZN14Fl_Preferences12runtimePrefsE:0000000000000000 _ZN14Fl_Preferences12runtimePrefsE
     /tmp/ccK84KdQ.s:6777   .text._ZN14Fl_PreferencesC2EPS_PKc:0000000000000000 _ZN14Fl_PreferencesC1EPS_PKc
     /tmp/ccK84KdQ.s:6960   .text._ZN14Fl_Preferences4Node6searchEPKci:0000000000000000 _ZN14Fl_Preferences4Node6searchEPKci
     /tmp/ccK84KdQ.s:7227   .text._ZN14Fl_Preferences11groupExistsEPKc:0000000000000000 _ZN14Fl_Preferences11groupExistsEPKc
     /tmp/ccK84KdQ.s:7262   .text._ZN14Fl_Preferences4Node9nChildrenEv:0000000000000000 _ZN14Fl_Preferences4Node9nChildrenEv
     /tmp/ccK84KdQ.s:7299   .text._ZN14Fl_Preferences4Node4nameEv:0000000000000000 _ZN14Fl_Preferences4Node4nameEv
     /tmp/ccK84KdQ.s:7365   .text._ZN14Fl_Preferences4Node6removeEv:0000000000000000 _ZN14Fl_Preferences4Node6removeEv
     /tmp/ccK84KdQ.s:7529   .text._ZN14Fl_Preferences11deleteGroupEPKc:0000000000000000 _ZN14Fl_Preferences11deleteGroupEPKc
     /tmp/ccK84KdQ.s:7580   .text._ZN9Fl_PluginD2Ev:0000000000000000 _ZN9Fl_PluginD2Ev
     /tmp/ccK84KdQ.s:9223   .rodata._ZTV9Fl_Plugin:0000000000000000 _ZTV9Fl_Plugin
     /tmp/ccK84KdQ.s:7580   .text._ZN9Fl_PluginD2Ev:0000000000000000 _ZN9Fl_PluginD1Ev
     /tmp/ccK84KdQ.s:7624   .text._ZN9Fl_PluginD0Ev:0000000000000000 _ZN9Fl_PluginD0Ev
     /tmp/ccK84KdQ.s:7676   .text._ZN14Fl_Preferences4Node11createIndexEv:0000000000000000 _ZN14Fl_Preferences4Node11createIndexEv
     /tmp/ccK84KdQ.s:7784   .text._ZN14Fl_Preferences4Node9childNodeEi:0000000000000000 _ZN14Fl_Preferences4Node9childNodeEi
     /tmp/ccK84KdQ.s:7921   .text._ZN14Fl_Preferences4Node5childEi:0000000000000000 _ZN14Fl_Preferences4Node5childEi
     /tmp/ccK84KdQ.s:7994   .text._ZN14Fl_Preferences5groupEi:0000000000000000 _ZN14Fl_Preferences5groupEi
     /tmp/ccK84KdQ.s:8020   .text._ZN14Fl_PreferencesC2ERS_i:0000000000000000 _ZN14Fl_PreferencesC2ERS_i
     /tmp/ccK84KdQ.s:8020   .text._ZN14Fl_PreferencesC2ERS_i:0000000000000000 _ZN14Fl_PreferencesC1ERS_i
     /tmp/ccK84KdQ.s:8154   .text._ZN14Fl_PreferencesC2EPS_i:0000000000000000 _ZN14Fl_PreferencesC2EPS_i
     /tmp/ccK84KdQ.s:8154   .text._ZN14Fl_PreferencesC2EPS_i:0000000000000000 _ZN14Fl_PreferencesC1EPS_i
     /tmp/ccK84KdQ.s:8288   .text._ZN14Fl_Preferences4Node11updateIndexEv:0000000000000000 _ZN14Fl_Preferences4Node11updateIndexEv
     /tmp/ccK84KdQ.s:8312   .text._ZN14Fl_Preferences4Node11deleteIndexEv:0000000000000000 _ZN14Fl_Preferences4Node11deleteIndexEv
     /tmp/ccK84KdQ.s:8362   .text._ZN17Fl_Plugin_ManagerC2EPKc:0000000000000000 _ZN17Fl_Plugin_ManagerC2EPKc
     /tmp/ccK84KdQ.s:8362   .text._ZN17Fl_Plugin_ManagerC2EPKc:0000000000000000 _ZN17Fl_Plugin_ManagerC1EPKc
     /tmp/ccK84KdQ.s:8451   .text._ZN17Fl_Plugin_Manager6pluginEi:0000000000000000 _ZN17Fl_Plugin_Manager6pluginEi
     /tmp/ccK84KdQ.s:8558   .text._ZN17Fl_Plugin_Manager6pluginEPKc:0000000000000000 _ZN17Fl_Plugin_Manager6pluginEPKc
     /tmp/ccK84KdQ.s:8721   .text._ZN17Fl_Plugin_Manager9addPluginEPKcP9Fl_Plugin:0000000000000000 _ZN17Fl_Plugin_Manager9addPluginEPKcP9Fl_Plugin
     /tmp/ccK84KdQ.s:8839   .text._ZN9Fl_PluginC2EPKcS1_:0000000000000000 _ZN9Fl_PluginC2EPKcS1_
     /tmp/ccK84KdQ.s:8839   .text._ZN9Fl_PluginC2EPKcS1_:0000000000000000 _ZN9Fl_PluginC1EPKcS1_
     /tmp/ccK84KdQ.s:8935   .text._ZN17Fl_Plugin_Manager12removePluginEPv:0000000000000000 _ZN17Fl_Plugin_Manager12removePluginEPv
     /tmp/ccK84KdQ.s:8963   .text._ZN17Fl_Plugin_Manager4loadEPKc:0000000000000000 _ZN17Fl_Plugin_Manager4loadEPKc
     /tmp/ccK84KdQ.s:9005   .text._ZN17Fl_Plugin_Manager7loadAllEPKcS1_:0000000000000000 _ZN17Fl_Plugin_Manager7loadAllEPKcS1_
     /tmp/ccK84KdQ.s:9167   .rodata._ZTS14Fl_Preferences:0000000000000000 _ZTS14Fl_Preferences
     /tmp/ccK84KdQ.s:9174   .rodata._ZTI14Fl_Preferences:0000000000000000 _ZTI14Fl_Preferences
     /tmp/ccK84KdQ.s:9182   .rodata._ZTS9Fl_Plugin:0000000000000000 _ZTS9Fl_Plugin
     /tmp/ccK84KdQ.s:9189   .rodata._ZTI9Fl_Plugin:0000000000000000 _ZTI9Fl_Plugin
     /tmp/ccK84KdQ.s:9197   .rodata._ZTS17Fl_Plugin_Manager:0000000000000000 _ZTS17Fl_Plugin_Manager
     /tmp/ccK84KdQ.s:9204   .rodata._ZTI17Fl_Plugin_Manager:0000000000000000 _ZTI17Fl_Plugin_Manager
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
                           .group:0000000000000000 wm4.filename.H.30.99b1a2d49dfb41118316d590634dc617
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
                           .group:0000000000000000 wm4.time.h.26.6a3cabd4f228e226db6723a3b0c81ba6
                           .group:0000000000000000 wm4.time.h.40.feab7216a531c47d425d6de002dd2384
                           .group:0000000000000000 wm4.timex.h.19.f552c10b6e10e54ec2c0920b0cef94ab
                           .group:0000000000000000 wm4.time.h.66.3030613ea56472141d4f6280f80765e8
                           .group:0000000000000000 wm4.unistd.h.23.a608ae63b1bee638e80d9e2a8598bd8e
                           .group:0000000000000000 wm4.posix_opt.h.20.8587404e00639bdcc5f6a74591f95259
                           .group:0000000000000000 wm4.environments.h.56.c5802092ccc191baeb41f8d355bb878f
                           .group:0000000000000000 wm4.unistd.h.213.4c582e35260d661b081322974b7c1e74
                           .group:0000000000000000 wm4.unistd.h.271.5bc8a6a5109e709e04c40b754b201552
                           .group:0000000000000000 wm4.confname.h.27.6b00117a32f457cc72e5ac810a9adade
                           .group:0000000000000000 wm4.unistd.h.1078.c7eeb0fd3115c9566fb6865aa19af17f
                           .group:0000000000000000 wm4.dlfcn.h.20.70e9223255b7b53a5ba856b40ed79b32
                           .group:0000000000000000 wm4.dlfcn.h.24.984956b0eb0dd4fdbcd569f884773ee1
                           .group:0000000000000000 wm4.dlfcn.h.35.17a2f29a976970d03ce2b8cd0ee5815b
                           .group:0000000000000000 wm4.time.h.19.a0b53efe7c8e6bd8aa0b2fb0266c6caf
                           .group:0000000000000000 wm4.time.h.41.5a35bb669dafc1d1b5aef98ad89e8a02

UNDEFINED SYMBOLS
malloc
strlen
__ctype_tolower_loc
time
rand
gethostname
__sprintf_chk
__stack_chk_fail
__vsnprintf_chk
free
fl_strlcpy
strrchr
fl_make_path
fl_chmod
strdup
_ZdlPv
__fprintf_chk
fwrite
fputc
fl_make_path_for_file
fl_fopen
fclose
strchr
strcmp
realloc
memcpy
strtol
strtod
memmove
strncmp
_Znwm
fgets
strcspn
__snprintf_chk
fl_getenv
fl_strlcat
dlopen
fl_numericsort
_Z16fl_filename_listPKcPPP6direntPFiS3_S3_E
_Z17fl_filename_matchPKcS0_
_ZTVN10__cxxabiv117__class_type_infoE
_ZTVN10__cxxabiv120__si_class_type_infoE
