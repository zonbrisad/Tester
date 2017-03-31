   1              		.file	"Fl_arg.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL8fl_matchPKcS0_i,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL8fl_matchPKcS0_i,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL8fl_matchPKcS0_i
  10              	.Ltext_cold0:
  11              		.section	.text._ZL8fl_matchPKcS0_i
  13              	_ZL8fl_matchPKcS0_i:
  14              	.LFB505:
  15              		.file 1 "fltk-1.3.4-1/src/Fl_arg.cxx"
   1:fltk-1.3.4-1/src/Fl_arg.cxx **** ...
  16              		.loc 1 43 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4157     		pushq	%r15
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 15, -16
  22 0002 4156     		pushq	%r14
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 14, -24
  25 0004 4155     		pushq	%r13
  26              		.cfi_def_cfa_offset 32
  27              		.cfi_offset 13, -32
  28 0006 4154     		pushq	%r12
  29              		.cfi_def_cfa_offset 40
  30              		.cfi_offset 12, -40
  31 0008 4989F5   		movq	%rsi, %r13
  32 000b 55       		pushq	%rbp
  33              		.cfi_def_cfa_offset 48
  34              		.cfi_offset 6, -48
  35 000c 53       		pushq	%rbx
  36              		.cfi_def_cfa_offset 56
  37              		.cfi_offset 3, -56
  38 000d 4C63E2   		movslq	%edx, %r12
  39 0010 4883EC08 		subq	$8, %rsp
  40              		.cfi_def_cfa_offset 64
  41              		.loc 1 45 0
  42 0014 480FBE1F 		movsbq	(%rdi), %rbx
  43 0018 84DB     		testb	%bl, %bl
  44 001a 7475     		je	.L8
  45 001c 4989FF   		movq	%rdi, %r15
  46              		.loc 1 45 0 is_stmt 0 discriminator 1
  47 001f 4989F6   		movq	%rsi, %r14
  48              	.LVL1:
  49              		.p2align 4,,10
  50 0022 660F1F44 		.p2align 3
  50      0000
  51              	.L7:
  52 0028 410FBE2E 		movsbl	(%r14), %ebp
  53 002c 4038DD   		cmpb	%bl, %bpl
  54 002f 7420     		je	.L3
  55              	.LVL2:
  56              	.LBB61:
  57              	.LBB62:
  58              		.file 2 "/usr/include/ctype.h"
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
  59              		.loc 2 217 0 is_stmt 1 discriminator 2
  60 0031 0FBEC3   		movsbl	%bl, %eax
  61              	.LVL3:
  62 0034 8D908000 		leal	128(%rax), %edx
  62      0000
  63 003a 81FA7F01 		cmpl	$383, %edx
  63      0000
  64 0040 770B     		ja	.L5
  65              		.loc 2 217 0 is_stmt 0
  66 0042 E8000000 		call	__ctype_tolower_loc
  66      00
  67              	.LVL4:
  68 0047 488B00   		movq	(%rax), %rax
  69 004a 8B0498   		movl	(%rax,%rbx,4), %eax
  70              	.L5:
  71              	.LVL5:
  72              	.LBE62:
  73              	.LBE61:
  74              		.loc 1 45 0 is_stmt 1
  75 004d 39C5     		cmpl	%eax, %ebp
  76 004f 752F     		jne	.L9
  77              	.L3:
  78              		.loc 1 45 0 is_stmt 0 discriminator 4
  79 0051 4983C701 		addq	$1, %r15
  80              	.LVL6:
  81 0055 490FBE1F 		movsbq	(%r15), %rbx
  82 0059 4983C601 		addq	$1, %r14
  83              	.LVL7:
  84 005d 84DB     		testb	%bl, %bl
  85 005f 75C7     		jne	.L7
  86              	.LVL8:
  87              	.L2:
  88 0061 4D01E5   		addq	%r12, %r13
  89              	.LVL9:
  90 0064 31C0     		xorl	%eax, %eax
  91 0066 4D39EE   		cmpq	%r13, %r14
  92 0069 0F93C0   		setnb	%al
  93              		.loc 1 47 0 is_stmt 1
  94 006c 4883C408 		addq	$8, %rsp
  95              		.cfi_remember_state
  96              		.cfi_def_cfa_offset 56
  97 0070 5B       		popq	%rbx
  98              		.cfi_def_cfa_offset 48
  99 0071 5D       		popq	%rbp
 100              		.cfi_def_cfa_offset 40
 101 0072 415C     		popq	%r12
 102              		.cfi_def_cfa_offset 32
 103              	.LVL10:
 104 0074 415D     		popq	%r13
 105              		.cfi_def_cfa_offset 24
 106 0076 415E     		popq	%r14
 107              		.cfi_def_cfa_offset 16
 108              	.LVL11:
 109 0078 415F     		popq	%r15
 110              		.cfi_def_cfa_offset 8
 111 007a C3       		ret
 112              	.LVL12:
 113 007b 0F1F4400 		.p2align 4,,10
 113      00
 114              		.p2align 3
 115              	.L9:
 116              		.cfi_restore_state
 117 0080 4883C408 		addq	$8, %rsp
 118              		.cfi_remember_state
 119              		.cfi_def_cfa_offset 56
 120 0084 31C0     		xorl	%eax, %eax
 121 0086 5B       		popq	%rbx
 122              		.cfi_def_cfa_offset 48
 123 0087 5D       		popq	%rbp
 124              		.cfi_def_cfa_offset 40
 125 0088 415C     		popq	%r12
 126              		.cfi_def_cfa_offset 32
 127 008a 415D     		popq	%r13
 128              		.cfi_def_cfa_offset 24
 129              	.LVL13:
 130 008c 415E     		popq	%r14
 131              		.cfi_def_cfa_offset 16
 132              	.LVL14:
 133 008e 415F     		popq	%r15
 134              		.cfi_def_cfa_offset 8
 135              	.LVL15:
 136 0090 C3       		ret
 137              	.LVL16:
 138              	.L8:
 139              		.cfi_restore_state
 140              		.loc 1 44 0
 141 0091 4989F6   		movq	%rsi, %r14
 142 0094 EBCB     		jmp	.L2
 143              		.cfi_endproc
 144              	.LFE505:
 146              		.section	.text.unlikely._ZL8fl_matchPKcS0_i
 147              	.LCOLDE0:
 148              		.section	.text._ZL8fl_matchPKcS0_i
 149              	.LHOTE0:
 150              		.section	.rodata.str1.1,"aMS",@progbits,1
 151              	.LC1:
 152 0000 69636F6E 		.string	"iconic"
 152      696300
 153              	.LC2:
 154 0007 6B626400 		.string	"kbd"
 155              	.LC3:
 156 000b 6E6F6B62 		.string	"nokbd"
 156      6400
 157              	.LC4:
 158 0011 646E6400 		.string	"dnd"
 159              	.LC5:
 160 0015 6E6F646E 		.string	"nodnd"
 160      6400
 161              	.LC6:
 162 001b 746F6F6C 		.string	"tooltips"
 162      74697073 
 162      00
 163              	.LC7:
 164 0024 6E6F746F 		.string	"notooltips"
 164      6F6C7469 
 164      707300
 165              	.LC8:
 166 002f 67656F6D 		.string	"geometry"
 166      65747279 
 166      00
 167              	.LC9:
 168 0038 64697370 		.string	"display"
 168      6C617900 
 169              	.LC10:
 170 0040 7469746C 		.string	"title"
 170      6500
 171              	.LC11:
 172 0046 6E616D65 		.string	"name"
 172      00
 173              	.LC12:
 174 004b 62673200 		.string	"bg2"
 175              	.LC13:
 176 004f 6261636B 		.string	"background2"
 176      67726F75 
 176      6E643200 
 177              	.LC14:
 178 005b 6261636B 		.string	"background"
 178      67726F75 
 178      6E6400
 179              	.LC15:
 180 0066 666F7265 		.string	"foreground"
 180      67726F75 
 180      6E6400
 181              	.LC16:
 182 0071 626700   		.string	"bg"
 183              	.LC17:
 184 0074 666700   		.string	"fg"
 185              	.LC18:
 186 0077 73636865 		.string	"scheme"
 186      6D6500
 187              		.section	.text.unlikely._ZN2Fl3argEiPPcRi,"ax",@progbits
 188              		.align 2
 189              	.LCOLDB19:
 190              		.section	.text._ZN2Fl3argEiPPcRi,"ax",@progbits
 191              	.LHOTB19:
 192              		.align 2
 193              		.p2align 4,,15
 194              		.globl	_ZN2Fl3argEiPPcRi
 196              	_ZN2Fl3argEiPPcRi:
 197              	.LFB506:
 198              		.loc 1 130 0
 199              		.cfi_startproc
 200              	.LVL17:
 201 0000 4157     		pushq	%r15
 202              		.cfi_def_cfa_offset 16
 203              		.cfi_offset 15, -16
 204 0002 4156     		pushq	%r14
 205              		.cfi_def_cfa_offset 24
 206              		.cfi_offset 14, -24
 207 0004 4189FF   		movl	%edi, %r15d
 208 0007 4155     		pushq	%r13
 209              		.cfi_def_cfa_offset 32
 210              		.cfi_offset 13, -32
 211 0009 4154     		pushq	%r12
 212              		.cfi_def_cfa_offset 40
 213              		.cfi_offset 12, -40
 214 000b 55       		pushq	%rbp
 215              		.cfi_def_cfa_offset 48
 216              		.cfi_offset 6, -48
 217 000c 53       		pushq	%rbx
 218              		.cfi_def_cfa_offset 56
 219              		.cfi_offset 3, -56
 220 000d 4889D5   		movq	%rdx, %rbp
 221 0010 4883EC38 		subq	$56, %rsp
 222              		.cfi_def_cfa_offset 112
 223              		.loc 1 131 0
 224 0014 C6050000 		movb	$1, _ZL10arg_called(%rip)
 224      000001
 225              		.loc 1 130 0
 226 001b 64488B04 		movq	%fs:40, %rax
 226      25280000 
 226      00
 227 0024 48894424 		movq	%rax, 40(%rsp)
 227      28
 228 0029 31C0     		xorl	%eax, %eax
 229              		.loc 1 132 0
 230 002b 486302   		movslq	(%rdx), %rax
 231 002e 488B3CC6 		movq	(%rsi,%rax,8), %rdi
 232              	.LVL18:
 233 0032 4989C4   		movq	%rax, %r12
 234              		.loc 1 134 0
 235 0035 4885FF   		testq	%rdi, %rdi
 236 0038 0F848A00 		je	.L57
 236      0000
 237              		.loc 1 141 0
 238 003e 803F2D   		cmpb	$45, (%rdi)
 239 0041 7435     		je	.L58
 240              	.L19:
 241              		.loc 1 141 0 is_stmt 0 discriminator 5
 242 0043 C6050000 		movb	$1, _ZL8return_i(%rip)
 242      000001
 243 004a 4531ED   		xorl	%r13d, %r13d
 244              	.LVL19:
 245              	.L18:
 246              		.loc 1 224 0 is_stmt 1
 247 004d 488B4C24 		movq	40(%rsp), %rcx
 247      28
 248 0052 6448330C 		xorq	%fs:40, %rcx
 248      25280000 
 248      00
 249 005b 4489E8   		movl	%r13d, %eax
 250 005e 0F856C02 		jne	.L59
 250      0000
 251 0064 4883C438 		addq	$56, %rsp
 252              		.cfi_remember_state
 253              		.cfi_def_cfa_offset 56
 254 0068 5B       		popq	%rbx
 255              		.cfi_def_cfa_offset 48
 256 0069 5D       		popq	%rbp
 257              		.cfi_def_cfa_offset 40
 258              	.LVL20:
 259 006a 415C     		popq	%r12
 260              		.cfi_def_cfa_offset 32
 261 006c 415D     		popq	%r13
 262              		.cfi_def_cfa_offset 24
 263 006e 415E     		popq	%r14
 264              		.cfi_def_cfa_offset 16
 265 0070 415F     		popq	%r15
 266              		.cfi_def_cfa_offset 8
 267 0072 C3       		ret
 268              	.LVL21:
 269              		.p2align 4,,10
 270 0073 0F1F4400 		.p2align 3
 270      00
 271              	.L58:
 272              		.cfi_restore_state
 273 0078 488D1CC5 		leaq	0(,%rax,8), %rbx
 273      00000000 
 274              		.loc 1 141 0 discriminator 2
 275 0080 0FB64701 		movzbl	1(%rdi), %eax
 276 0084 84C0     		testb	%al, %al
 277 0086 74BB     		je	.L19
 278 0088 3C2D     		cmpb	$45, %al
 279 008a 74B7     		je	.L19
 280              		.loc 1 142 0
 281 008c 488D4701 		leaq	1(%rdi), %rax
 282 0090 4989F6   		movq	%rsi, %r14
 283              		.loc 1 144 0
 284 0093 BA010000 		movl	$1, %edx
 284      00
 285              	.LVL22:
 286 0098 BE000000 		movl	$.LC1, %esi
 286      00
 287              	.LVL23:
 288 009d 4889C7   		movq	%rax, %rdi
 289              	.LVL24:
 290              		.loc 1 142 0
 291 00a0 48894424 		movq	%rax, 8(%rsp)
 291      08
 292              	.LVL25:
 293              		.loc 1 144 0
 294 00a5 E8000000 		call	_ZL8fl_matchPKcS0_i
 294      00
 295              	.LVL26:
 296 00aa 85C0     		testl	%eax, %eax
 297 00ac 7432     		je	.L22
 298              		.loc 1 145 0
 299 00ae C6050000 		movb	$1, fl_show_iconic(%rip)
 299      000001
 300              		.loc 1 147 0
 301 00b5 41BD0100 		movl	$1, %r13d
 301      0000
 302              		.loc 1 146 0
 303 00bb 83450001 		addl	$1, 0(%rbp)
 304              		.loc 1 147 0
 305 00bf EB8C     		jmp	.L18
 306              	.LVL27:
 307              		.p2align 4,,10
 308 00c1 0F1F8000 		.p2align 3
 308      000000
 309              	.L57:
 310              		.loc 1 134 0 discriminator 1
 311 00c8 4183C401 		addl	$1, %r12d
 312 00cc 41BD0100 		movl	$1, %r13d
 312      0000
 313 00d2 448922   		movl	%r12d, (%rdx)
 314 00d5 E973FFFF 		jmp	.L18
 314      FF
 315              	.LVL28:
 316 00da 660F1F44 		.p2align 4,,10
 316      0000
 317              		.p2align 3
 318              	.L22:
 319              		.loc 1 148 0
 320 00e0 488B7C24 		movq	8(%rsp), %rdi
 320      08
 321 00e5 BA010000 		movl	$1, %edx
 321      00
 322 00ea BE000000 		movl	$.LC2, %esi
 322      00
 323 00ef E8000000 		call	_ZL8fl_matchPKcS0_i
 323      00
 324              	.LVL29:
 325 00f4 85C0     		testl	%eax, %eax
 326 00f6 0F850401 		jne	.L60
 326      0000
 327              		.loc 1 152 0
 328 00fc 488B7C24 		movq	8(%rsp), %rdi
 328      08
 329 0101 BA030000 		movl	$3, %edx
 329      00
 330 0106 BE000000 		movl	$.LC3, %esi
 330      00
 331 010b E8000000 		call	_ZL8fl_matchPKcS0_i
 331      00
 332              	.LVL30:
 333 0110 85C0     		testl	%eax, %eax
 334 0112 0F850601 		jne	.L61
 334      0000
 335              		.loc 1 156 0
 336 0118 488B7C24 		movq	8(%rsp), %rdi
 336      08
 337 011d BA020000 		movl	$2, %edx
 337      00
 338 0122 BE000000 		movl	$.LC4, %esi
 338      00
 339 0127 E8000000 		call	_ZL8fl_matchPKcS0_i
 339      00
 340              	.LVL31:
 341 012c 85C0     		testl	%eax, %eax
 342 012e 0F850501 		jne	.L62
 342      0000
 343              		.loc 1 160 0
 344 0134 488B7C24 		movq	8(%rsp), %rdi
 344      08
 345 0139 BA030000 		movl	$3, %edx
 345      00
 346 013e BE000000 		movl	$.LC5, %esi
 346      00
 347 0143 E8000000 		call	_ZL8fl_matchPKcS0_i
 347      00
 348              	.LVL32:
 349 0148 85C0     		testl	%eax, %eax
 350 014a 0F850701 		jne	.L63
 350      0000
 351              		.loc 1 164 0
 352 0150 488B7C24 		movq	8(%rsp), %rdi
 352      08
 353 0155 BA020000 		movl	$2, %edx
 353      00
 354 015a BE000000 		movl	$.LC6, %esi
 354      00
 355 015f E8000000 		call	_ZL8fl_matchPKcS0_i
 355      00
 356              	.LVL33:
 357 0164 85C0     		testl	%eax, %eax
 358 0166 0F850601 		jne	.L64
 358      0000
 359              		.loc 1 168 0
 360 016c 488B7C24 		movq	8(%rsp), %rdi
 360      08
 361 0171 BA030000 		movl	$3, %edx
 361      00
 362 0176 BE000000 		movl	$.LC7, %esi
 362      00
 363 017b E8000000 		call	_ZL8fl_matchPKcS0_i
 363      00
 364              	.LVL34:
 365 0180 85C0     		testl	%eax, %eax
 366 0182 4189C5   		movl	%eax, %r13d
 367 0185 0F852A01 		jne	.L65
 367      0000
 368              		.loc 1 187 0
 369 018b 4183EF01 		subl	$1, %r15d
 370              	.LVL35:
 371              		.loc 1 186 0
 372 018f 4D8B741E 		movq	8(%r14,%rbx), %r14
 372      08
 373              	.LVL36:
 374              		.loc 1 187 0
 375 0194 4539FC   		cmpl	%r15d, %r12d
 376 0197 0F8DB0FE 		jge	.L18
 376      FFFF
 377 019d 4D85F6   		testq	%r14, %r14
 378 01a0 0F84A7FE 		je	.L18
 378      FFFF
 379              	.LBB63:
 380              		.loc 1 190 0
 381 01a6 488B7C24 		movq	8(%rsp), %rdi
 381      08
 382 01ab BA010000 		movl	$1, %edx
 382      00
 383 01b0 BE000000 		movl	$.LC8, %esi
 383      00
 384 01b5 E8000000 		call	_ZL8fl_matchPKcS0_i
 384      00
 385              	.LVL37:
 386 01ba 85C0     		testl	%eax, %eax
 387 01bc 0F84CE00 		je	.L29
 387      0000
 388              	.LBB64:
 389              		.loc 1 193 0
 390 01c2 4C8D4424 		leaq	36(%rsp), %r8
 390      24
 391 01c7 488D4C24 		leaq	32(%rsp), %rcx
 391      20
 392 01cc 488D5424 		leaq	28(%rsp), %rdx
 392      1C
 393 01d1 488D7424 		leaq	24(%rsp), %rsi
 393      18
 394 01d6 4C89F7   		movq	%r14, %rdi
 395 01d9 E8000000 		call	XParseGeometry
 395      00
 396              	.LVL38:
 397              		.loc 1 194 0
 398 01de 85C0     		testl	%eax, %eax
 399 01e0 0F8467FE 		je	.L18
 399      FFFF
 400              		.loc 1 195 0
 401 01e6 4C893500 		movq	%r14, _ZL8geometry(%rip)
 401      000000
 402              	.LVL39:
 403              	.L31:
 404              	.LBE64:
 405              	.LBE63:
 406              		.loc 1 222 0
 407 01ed 83450002 		addl	$2, 0(%rbp)
 408              		.loc 1 223 0
 409 01f1 41BD0200 		movl	$2, %r13d
 409      0000
 410 01f7 E951FEFF 		jmp	.L18
 410      FF
 411              	.LVL40:
 412 01fc 0F1F4000 		.p2align 4,,10
 413              		.p2align 3
 414              	.L60:
 415              	.LBB65:
 416              	.LBB66:
 417              		.file 3 "fltk-1.3.4-1/FL/Fl.H"
   1:fltk-1.3.4-1/FL/Fl.H **** //
   2:fltk-1.3.4-1/FL/Fl.H **** // "$Id: Fl.H 11945 2016-09-16 09:11:48Z manolo $"
   3:fltk-1.3.4-1/FL/Fl.H **** //
   4:fltk-1.3.4-1/FL/Fl.H **** // Main header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl.H **** //
   6:fltk-1.3.4-1/FL/Fl.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl.H **** //
   8:fltk-1.3.4-1/FL/Fl.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl.H **** //
  12:fltk-1.3.4-1/FL/Fl.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl.H **** //
  14:fltk-1.3.4-1/FL/Fl.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl.H **** //
  16:fltk-1.3.4-1/FL/Fl.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl.H **** //
  18:fltk-1.3.4-1/FL/Fl.H **** 
  19:fltk-1.3.4-1/FL/Fl.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl.H ****     Fl static class.
  21:fltk-1.3.4-1/FL/Fl.H ****  */
  22:fltk-1.3.4-1/FL/Fl.H **** 
  23:fltk-1.3.4-1/FL/Fl.H **** #ifndef Fl_H
  24:fltk-1.3.4-1/FL/Fl.H **** #  define Fl_H
  25:fltk-1.3.4-1/FL/Fl.H **** 
  26:fltk-1.3.4-1/FL/Fl.H **** #include <FL/Fl_Export.H>
  27:fltk-1.3.4-1/FL/Fl.H **** 
  28:fltk-1.3.4-1/FL/Fl.H **** #ifdef FLTK_HAVE_CAIRO
  29:fltk-1.3.4-1/FL/Fl.H **** # include <FL/Fl_Cairo.H>
  30:fltk-1.3.4-1/FL/Fl.H **** #endif
  31:fltk-1.3.4-1/FL/Fl.H **** 
  32:fltk-1.3.4-1/FL/Fl.H **** #  include "fl_utf8.h"
  33:fltk-1.3.4-1/FL/Fl.H **** #  include "Enumerations.H"
  34:fltk-1.3.4-1/FL/Fl.H **** #  ifndef Fl_Object
  35:fltk-1.3.4-1/FL/Fl.H **** #    define Fl_Object Fl_Widget	/**< for back compatibility - use Fl_Widget! */
  36:fltk-1.3.4-1/FL/Fl.H **** #  endif
  37:fltk-1.3.4-1/FL/Fl.H **** 
  38:fltk-1.3.4-1/FL/Fl.H **** #  ifdef check
  39:fltk-1.3.4-1/FL/Fl.H **** #    undef check
  40:fltk-1.3.4-1/FL/Fl.H **** #  endif
  41:fltk-1.3.4-1/FL/Fl.H **** 
  42:fltk-1.3.4-1/FL/Fl.H **** 
  43:fltk-1.3.4-1/FL/Fl.H **** class Fl_Widget;
  44:fltk-1.3.4-1/FL/Fl.H **** class Fl_Window;
  45:fltk-1.3.4-1/FL/Fl.H **** class Fl_Image;
  46:fltk-1.3.4-1/FL/Fl.H **** struct Fl_Label;
  47:fltk-1.3.4-1/FL/Fl.H **** 
  48:fltk-1.3.4-1/FL/Fl.H **** // Keep avoiding having the socket deps at that level but mke sure it will work in both 32 & 64 bit
  49:fltk-1.3.4-1/FL/Fl.H **** #if defined(WIN32) && !defined(__CYGWIN__)
  50:fltk-1.3.4-1/FL/Fl.H **** # if defined(_WIN64)
  51:fltk-1.3.4-1/FL/Fl.H **** #  define FL_SOCKET unsigned __int64
  52:fltk-1.3.4-1/FL/Fl.H **** # else
  53:fltk-1.3.4-1/FL/Fl.H **** #  define FL_SOCKET int
  54:fltk-1.3.4-1/FL/Fl.H **** # endif
  55:fltk-1.3.4-1/FL/Fl.H **** #else
  56:fltk-1.3.4-1/FL/Fl.H **** # define FL_SOCKET int
  57:fltk-1.3.4-1/FL/Fl.H **** #endif
  58:fltk-1.3.4-1/FL/Fl.H **** 
  59:fltk-1.3.4-1/FL/Fl.H **** 
  60:fltk-1.3.4-1/FL/Fl.H **** // Pointers you can use to change FLTK to a foreign language.
  61:fltk-1.3.4-1/FL/Fl.H **** // Note: Similar pointers are defined in FL/fl_ask.H and src/fl_ask.cxx
  62:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_ctrl;
  63:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_meta;
  64:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_alt;
  65:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_shift;
  66:fltk-1.3.4-1/FL/Fl.H **** 
  67:fltk-1.3.4-1/FL/Fl.H **** /** \defgroup  callback_functions Callback function typedefs
  68:fltk-1.3.4-1/FL/Fl.H ****  \brief Typedefs defined in <FL/Fl.H> for callback or handler functions passed as function paramete
  69:fltk-1.3.4-1/FL/Fl.H **** 
  70:fltk-1.3.4-1/FL/Fl.H ****     FLTK uses callback functions as parameters for some function calls, e.g. to
  71:fltk-1.3.4-1/FL/Fl.H ****     set up global event handlers (Fl::add_handler()), to add a timeout handler
  72:fltk-1.3.4-1/FL/Fl.H ****     (Fl::add_timeout()), and many more.
  73:fltk-1.3.4-1/FL/Fl.H **** 
  74:fltk-1.3.4-1/FL/Fl.H ****     The typedefs defined in this group describe the function parameters used to set
  75:fltk-1.3.4-1/FL/Fl.H ****     up or clear the callback functions and should also be referenced to define the
  76:fltk-1.3.4-1/FL/Fl.H ****     callback function to handle such events in the user's code.
  77:fltk-1.3.4-1/FL/Fl.H **** 
  78:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::add_handler(), Fl::add_timeout(), Fl::repeat_timeout(),
  79:fltk-1.3.4-1/FL/Fl.H **** 	 Fl::remove_timeout() and others
  80:fltk-1.3.4-1/FL/Fl.H ****   @{ */
  81:fltk-1.3.4-1/FL/Fl.H **** 
  82:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some label drawing functions passed as parameters */
  83:fltk-1.3.4-1/FL/Fl.H **** typedef void (Fl_Label_Draw_F)(const Fl_Label *label, int x, int y, int w, int h, Fl_Align align);
  84:fltk-1.3.4-1/FL/Fl.H **** 
  85:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some label measurement functions passed as parameters */
  86:fltk-1.3.4-1/FL/Fl.H **** typedef void (Fl_Label_Measure_F)(const Fl_Label *label, int &width, int &height);
  87:fltk-1.3.4-1/FL/Fl.H **** 
  88:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some box drawing functions passed as parameters */
  89:fltk-1.3.4-1/FL/Fl.H **** typedef void (Fl_Box_Draw_F)(int x, int y, int w, int h, Fl_Color color);
  90:fltk-1.3.4-1/FL/Fl.H **** 
  91:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some timeout callback functions passed as parameters */
  92:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Timeout_Handler)(void *data);
  93:fltk-1.3.4-1/FL/Fl.H **** 
  94:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some wakeup callback functions passed as parameters */
  95:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Awake_Handler)(void *data);
  96:fltk-1.3.4-1/FL/Fl.H **** 
  97:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_idle callback functions passed as parameters */
  98:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Idle_Handler)(void *data);
  99:fltk-1.3.4-1/FL/Fl.H **** 
 100:fltk-1.3.4-1/FL/Fl.H **** /** Signature of set_idle callback functions passed as parameters */
 101:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Old_Idle_Handler)();
 102:fltk-1.3.4-1/FL/Fl.H **** 
 103:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_fd functions passed as parameters */
 104:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_FD_Handler)(FL_SOCKET fd, void *data);
 105:fltk-1.3.4-1/FL/Fl.H **** 
 106:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_handler functions passed as parameters */
 107:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_Event_Handler)(int event);
 108:fltk-1.3.4-1/FL/Fl.H **** 
 109:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_system_handler functions passed as parameters */
 110:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_System_Handler)(void *event, void *data);
 111:fltk-1.3.4-1/FL/Fl.H **** 
 112:fltk-1.3.4-1/FL/Fl.H **** /** Signature of set_abort functions passed as parameters */
 113:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Abort_Handler)(const char *format,...);
 114:fltk-1.3.4-1/FL/Fl.H **** 
 115:fltk-1.3.4-1/FL/Fl.H **** /** Signature of set_atclose functions passed as parameters */
 116:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Atclose_Handler)(Fl_Window *window, void *data);
 117:fltk-1.3.4-1/FL/Fl.H **** 
 118:fltk-1.3.4-1/FL/Fl.H **** /** Signature of args functions passed as parameters */
 119:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_Args_Handler)(int argc, char **argv, int &i);
 120:fltk-1.3.4-1/FL/Fl.H **** 
 121:fltk-1.3.4-1/FL/Fl.H **** /** Signature of event_dispatch functions passed as parameters.
 122:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::event_dispatch(Fl_Event_Dispatch) */
 123:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_Event_Dispatch)(int event, Fl_Window *w);
 124:fltk-1.3.4-1/FL/Fl.H **** 
 125:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_clipboard_notify functions passed as parameters */
 126:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Clipboard_Notify_Handler)(int source, void *data);
 127:fltk-1.3.4-1/FL/Fl.H **** 
 128:fltk-1.3.4-1/FL/Fl.H **** /** @} */ /* group callback_functions */
 129:fltk-1.3.4-1/FL/Fl.H **** 
 130:fltk-1.3.4-1/FL/Fl.H **** 
 131:fltk-1.3.4-1/FL/Fl.H **** /**
 132:fltk-1.3.4-1/FL/Fl.H ****   The Fl is the FLTK global (static) class containing
 133:fltk-1.3.4-1/FL/Fl.H ****   state information and global methods for the current application.
 134:fltk-1.3.4-1/FL/Fl.H **** */
 135:fltk-1.3.4-1/FL/Fl.H **** class FL_EXPORT Fl {
 136:fltk-1.3.4-1/FL/Fl.H ****   Fl() {}; // no constructor!
 137:fltk-1.3.4-1/FL/Fl.H ****   
 138:fltk-1.3.4-1/FL/Fl.H **** private:
 139:fltk-1.3.4-1/FL/Fl.H ****   static int use_high_res_GL_;
 140:fltk-1.3.4-1/FL/Fl.H ****   
 141:fltk-1.3.4-1/FL/Fl.H **** public: // should be private!
 142:fltk-1.3.4-1/FL/Fl.H **** #ifndef FL_DOXYGEN
 143:fltk-1.3.4-1/FL/Fl.H ****   static int e_number;
 144:fltk-1.3.4-1/FL/Fl.H ****   static int e_x;
 145:fltk-1.3.4-1/FL/Fl.H ****   static int e_y;
 146:fltk-1.3.4-1/FL/Fl.H ****   static int e_x_root;
 147:fltk-1.3.4-1/FL/Fl.H ****   static int e_y_root;
 148:fltk-1.3.4-1/FL/Fl.H ****   static int e_dx;
 149:fltk-1.3.4-1/FL/Fl.H ****   static int e_dy;
 150:fltk-1.3.4-1/FL/Fl.H ****   static int e_state;
 151:fltk-1.3.4-1/FL/Fl.H ****   static int e_clicks;
 152:fltk-1.3.4-1/FL/Fl.H ****   static int e_is_click;
 153:fltk-1.3.4-1/FL/Fl.H ****   static int e_keysym;
 154:fltk-1.3.4-1/FL/Fl.H ****   static char* e_text;
 155:fltk-1.3.4-1/FL/Fl.H ****   static int e_length;
 156:fltk-1.3.4-1/FL/Fl.H ****   static void *e_clipboard_data;
 157:fltk-1.3.4-1/FL/Fl.H ****   static const char *e_clipboard_type;
 158:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Event_Dispatch e_dispatch;
 159:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* belowmouse_;
 160:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* pushed_;
 161:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* focus_;
 162:fltk-1.3.4-1/FL/Fl.H ****   static int damage_;
 163:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* selection_owner_;
 164:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* modal_;
 165:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* grab_;
 166:fltk-1.3.4-1/FL/Fl.H ****   static int compose_state; // used for dead keys (WIN32) or marked text (MacOS)
 167:fltk-1.3.4-1/FL/Fl.H ****   static void call_screen_init(); // recompute screen number and dimensions
 168:fltk-1.3.4-1/FL/Fl.H **** #ifdef __APPLE__
 169:fltk-1.3.4-1/FL/Fl.H ****   static void reset_marked_text(); // resets marked text
 170:fltk-1.3.4-1/FL/Fl.H ****   static void insertion_point_location(int x, int y, int height); // sets window coordinates & heig
 171:fltk-1.3.4-1/FL/Fl.H **** #endif
 172:fltk-1.3.4-1/FL/Fl.H **** #endif // FL_DOXYGEN
 173:fltk-1.3.4-1/FL/Fl.H ****   
 174:fltk-1.3.4-1/FL/Fl.H ****   
 175:fltk-1.3.4-1/FL/Fl.H ****   /**
 176:fltk-1.3.4-1/FL/Fl.H ****     If true then flush() will do something.
 177:fltk-1.3.4-1/FL/Fl.H ****   */
 178:fltk-1.3.4-1/FL/Fl.H ****   static void damage(int d) {damage_ = d;}
 179:fltk-1.3.4-1/FL/Fl.H ****   
 180:fltk-1.3.4-1/FL/Fl.H **** public:
 181:fltk-1.3.4-1/FL/Fl.H ****   /** Enumerator for global FLTK options.
 182:fltk-1.3.4-1/FL/Fl.H ****       These options can be set system wide, per user, or for the running
 183:fltk-1.3.4-1/FL/Fl.H ****       application only.
 184:fltk-1.3.4-1/FL/Fl.H ****       \see Fl::option(Fl_Option, bool)
 185:fltk-1.3.4-1/FL/Fl.H ****       \see Fl::option(Fl_Option)
 186:fltk-1.3.4-1/FL/Fl.H ****   */
 187:fltk-1.3.4-1/FL/Fl.H ****   typedef enum {
 188:fltk-1.3.4-1/FL/Fl.H ****       /// When switched on, moving the text cursor beyond the start or end of
 189:fltk-1.3.4-1/FL/Fl.H ****       /// a text in a text widget will change focus to the next text widget.
 190:fltk-1.3.4-1/FL/Fl.H ****       /// (This is considered 'old' behavior)
 191:fltk-1.3.4-1/FL/Fl.H ****       ///
 192:fltk-1.3.4-1/FL/Fl.H ****       /// When switched off (default), the cursor will stop at the end of the text.
 193:fltk-1.3.4-1/FL/Fl.H ****       /// Pressing Tab or Ctrl-Tab will advance the keyboard focus.
 194:fltk-1.3.4-1/FL/Fl.H ****       ///
 195:fltk-1.3.4-1/FL/Fl.H ****       /// See also: Fl_Input_::tab_nav()
 196:fltk-1.3.4-1/FL/Fl.H ****       ///
 197:fltk-1.3.4-1/FL/Fl.H ****     OPTION_ARROW_FOCUS = 0,
 198:fltk-1.3.4-1/FL/Fl.H ****       // When switched on, FLTK will use the file chooser dialog that comes 
 199:fltk-1.3.4-1/FL/Fl.H ****       // with your operating system whenever possible. When switched off, FLTK
 200:fltk-1.3.4-1/FL/Fl.H ****       // will present its own file chooser.
 201:fltk-1.3.4-1/FL/Fl.H ****       // \todo implement me
 202:fltk-1.3.4-1/FL/Fl.H ****     // OPTION_NATIVE_FILECHOOSER,
 203:fltk-1.3.4-1/FL/Fl.H ****       // When Filechooser Preview is enabled, the FLTK or native file chooser
 204:fltk-1.3.4-1/FL/Fl.H ****       // will show a preview of a selected file (if possible) before the user
 205:fltk-1.3.4-1/FL/Fl.H ****       // decides to choose the file.
 206:fltk-1.3.4-1/FL/Fl.H ****       // \todo implement me
 207:fltk-1.3.4-1/FL/Fl.H ****     //OPTION_FILECHOOSER_PREVIEW,
 208:fltk-1.3.4-1/FL/Fl.H ****       /// If visible focus is switched on (default), FLTK will draw a dotted rectangle 
 209:fltk-1.3.4-1/FL/Fl.H ****       /// inside the widget that will receive the next keystroke. If switched
 210:fltk-1.3.4-1/FL/Fl.H ****       /// off, no such indicator will be drawn and keyboard navigation
 211:fltk-1.3.4-1/FL/Fl.H ****       /// is disabled.
 212:fltk-1.3.4-1/FL/Fl.H ****     OPTION_VISIBLE_FOCUS,
 213:fltk-1.3.4-1/FL/Fl.H ****       /// If text drag-and-drop is enabled (default), the user can select and drag text
 214:fltk-1.3.4-1/FL/Fl.H ****       /// from any text widget. If disabled, no dragging is possible, however
 215:fltk-1.3.4-1/FL/Fl.H ****       /// dropping text from other applications still works.
 216:fltk-1.3.4-1/FL/Fl.H ****     OPTION_DND_TEXT,
 217:fltk-1.3.4-1/FL/Fl.H ****       /// If tooltips are enabled (default), hovering the mouse over a widget with a 
 218:fltk-1.3.4-1/FL/Fl.H ****       /// tooltip text will open a little tooltip window until the mouse leaves
 219:fltk-1.3.4-1/FL/Fl.H ****       /// the widget. If disabled, no tooltip is shown.
 220:fltk-1.3.4-1/FL/Fl.H ****     OPTION_SHOW_TOOLTIPS,
 221:fltk-1.3.4-1/FL/Fl.H ****      /// When switched on (default), Fl_Native_File_Chooser runs GTK file dialogs
 222:fltk-1.3.4-1/FL/Fl.H ****      /// if the GTK library is available on the platform (linux/unix only).
 223:fltk-1.3.4-1/FL/Fl.H ****      /// When switched off, GTK file dialogs aren't used even if the GTK library is available.
 224:fltk-1.3.4-1/FL/Fl.H ****     OPTION_FNFC_USES_GTK,
 225:fltk-1.3.4-1/FL/Fl.H ****       // don't change this, leave it always as the last element
 226:fltk-1.3.4-1/FL/Fl.H ****       /// For internal use only.
 227:fltk-1.3.4-1/FL/Fl.H ****     OPTION_LAST
 228:fltk-1.3.4-1/FL/Fl.H ****   } Fl_Option;
 229:fltk-1.3.4-1/FL/Fl.H **** 
 230:fltk-1.3.4-1/FL/Fl.H **** private:  
 231:fltk-1.3.4-1/FL/Fl.H ****   static unsigned char options_[OPTION_LAST];
 232:fltk-1.3.4-1/FL/Fl.H ****   static unsigned char options_read_;
 233:fltk-1.3.4-1/FL/Fl.H ****   
 234:fltk-1.3.4-1/FL/Fl.H **** public:  
 235:fltk-1.3.4-1/FL/Fl.H ****   /*
 236:fltk-1.3.4-1/FL/Fl.H ****    Return a global setting for all FLTK applications, possibly overridden
 237:fltk-1.3.4-1/FL/Fl.H ****    by a setting specifically for this application.
 238:fltk-1.3.4-1/FL/Fl.H ****    */
 239:fltk-1.3.4-1/FL/Fl.H ****   static bool option(Fl_Option opt);
 240:fltk-1.3.4-1/FL/Fl.H ****   
 241:fltk-1.3.4-1/FL/Fl.H ****   /*
 242:fltk-1.3.4-1/FL/Fl.H ****    Override an option while the application is running.
 243:fltk-1.3.4-1/FL/Fl.H ****    */
 244:fltk-1.3.4-1/FL/Fl.H ****   static void option(Fl_Option opt, bool val);
 245:fltk-1.3.4-1/FL/Fl.H ****   
 246:fltk-1.3.4-1/FL/Fl.H ****   /**
 247:fltk-1.3.4-1/FL/Fl.H ****     The currently executing idle callback function: DO NOT USE THIS DIRECTLY!
 248:fltk-1.3.4-1/FL/Fl.H ****     
 249:fltk-1.3.4-1/FL/Fl.H ****     This is now used as part of a higher level system allowing multiple
 250:fltk-1.3.4-1/FL/Fl.H ****     idle callback functions to be called.
 251:fltk-1.3.4-1/FL/Fl.H ****     \see add_idle(), remove_idle()
 252:fltk-1.3.4-1/FL/Fl.H ****   */
 253:fltk-1.3.4-1/FL/Fl.H ****   static void (*idle)();
 254:fltk-1.3.4-1/FL/Fl.H **** 
 255:fltk-1.3.4-1/FL/Fl.H **** #ifndef FL_DOXYGEN
 256:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Awake_Handler *awake_ring_;
 257:fltk-1.3.4-1/FL/Fl.H ****   static void **awake_data_;
 258:fltk-1.3.4-1/FL/Fl.H ****   static int awake_ring_size_;
 259:fltk-1.3.4-1/FL/Fl.H ****   static int awake_ring_head_;
 260:fltk-1.3.4-1/FL/Fl.H ****   static int awake_ring_tail_;
 261:fltk-1.3.4-1/FL/Fl.H ****   static const char* scheme_;
 262:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Image* scheme_bg_;
 263:fltk-1.3.4-1/FL/Fl.H **** 
 264:fltk-1.3.4-1/FL/Fl.H ****   static int e_original_keysym; // late addition
 265:fltk-1.3.4-1/FL/Fl.H ****   static int scrollbar_size_;
 266:fltk-1.3.4-1/FL/Fl.H **** #endif
 267:fltk-1.3.4-1/FL/Fl.H **** 
 268:fltk-1.3.4-1/FL/Fl.H **** 
 269:fltk-1.3.4-1/FL/Fl.H ****   static int add_awake_handler_(Fl_Awake_Handler, void*);
 270:fltk-1.3.4-1/FL/Fl.H ****   static int get_awake_handler_(Fl_Awake_Handler&, void*&);
 271:fltk-1.3.4-1/FL/Fl.H **** 
 272:fltk-1.3.4-1/FL/Fl.H **** public:
 273:fltk-1.3.4-1/FL/Fl.H **** 
 274:fltk-1.3.4-1/FL/Fl.H ****   // API version number
 275:fltk-1.3.4-1/FL/Fl.H ****   static double version();
 276:fltk-1.3.4-1/FL/Fl.H ****   static int api_version();
 277:fltk-1.3.4-1/FL/Fl.H **** 
 278:fltk-1.3.4-1/FL/Fl.H ****   // ABI version number
 279:fltk-1.3.4-1/FL/Fl.H ****   static int abi_version();
 280:fltk-1.3.4-1/FL/Fl.H **** 
 281:fltk-1.3.4-1/FL/Fl.H ****   /**
 282:fltk-1.3.4-1/FL/Fl.H ****     Returns whether the runtime library ABI version is correct.
 283:fltk-1.3.4-1/FL/Fl.H **** 
 284:fltk-1.3.4-1/FL/Fl.H ****     This enables you to check the ABI version of the linked FLTK
 285:fltk-1.3.4-1/FL/Fl.H ****     library at runtime.
 286:fltk-1.3.4-1/FL/Fl.H **** 
 287:fltk-1.3.4-1/FL/Fl.H ****     Returns 1 (true) if the compiled ABI version (in the header files)
 288:fltk-1.3.4-1/FL/Fl.H ****     and the linked library ABI version (used at runtime) are the same,
 289:fltk-1.3.4-1/FL/Fl.H ****     0 (false) otherwise.
 290:fltk-1.3.4-1/FL/Fl.H **** 
 291:fltk-1.3.4-1/FL/Fl.H ****     Argument \p val can be used to query a particular library ABI version.
 292:fltk-1.3.4-1/FL/Fl.H ****     Use for instance 10303 to query if the runtime library is compatible
 293:fltk-1.3.4-1/FL/Fl.H ****     with FLTK ABI version 1.3.3. This is rarely useful.
 294:fltk-1.3.4-1/FL/Fl.H **** 
 295:fltk-1.3.4-1/FL/Fl.H ****     The default \p val argument is FL_ABI_VERSION, which checks the version
 296:fltk-1.3.4-1/FL/Fl.H ****     defined at configure time (i.e. in the header files at program
 297:fltk-1.3.4-1/FL/Fl.H ****     compilation time) against the linked library version used at runtime.
 298:fltk-1.3.4-1/FL/Fl.H ****     This is particularly useful if you linked with a shared object library,
 299:fltk-1.3.4-1/FL/Fl.H ****     but it also concerns static linking.
 300:fltk-1.3.4-1/FL/Fl.H **** 
 301:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::abi_version()
 302:fltk-1.3.4-1/FL/Fl.H ****   */
 303:fltk-1.3.4-1/FL/Fl.H ****   static inline int abi_check(const int val = FL_ABI_VERSION) {
 304:fltk-1.3.4-1/FL/Fl.H ****     return val == abi_version();
 305:fltk-1.3.4-1/FL/Fl.H ****   }
 306:fltk-1.3.4-1/FL/Fl.H **** 
 307:fltk-1.3.4-1/FL/Fl.H ****   // argument parsers:
 308:fltk-1.3.4-1/FL/Fl.H ****   static int arg(int argc, char **argv, int& i);
 309:fltk-1.3.4-1/FL/Fl.H ****   static int args(int argc, char **argv, int& i, Fl_Args_Handler cb = 0);
 310:fltk-1.3.4-1/FL/Fl.H ****   static void args(int argc, char **argv);
 311:fltk-1.3.4-1/FL/Fl.H ****   /**
 312:fltk-1.3.4-1/FL/Fl.H ****     Usage string displayed if Fl::args() detects an invalid argument.
 313:fltk-1.3.4-1/FL/Fl.H ****     This may be changed to point to customized text at run-time.
 314:fltk-1.3.4-1/FL/Fl.H ****   */
 315:fltk-1.3.4-1/FL/Fl.H ****   static const char* const help;
 316:fltk-1.3.4-1/FL/Fl.H **** 
 317:fltk-1.3.4-1/FL/Fl.H ****   // things called by initialization:
 318:fltk-1.3.4-1/FL/Fl.H ****   static void display(const char*);
 319:fltk-1.3.4-1/FL/Fl.H ****   static int visual(int);
 320:fltk-1.3.4-1/FL/Fl.H ****   /**
 321:fltk-1.3.4-1/FL/Fl.H ****     This does the same thing as Fl::visual(int) but also requires OpenGL
 322:fltk-1.3.4-1/FL/Fl.H ****     drawing to work. This <I>must</I> be done if you want to draw in
 323:fltk-1.3.4-1/FL/Fl.H ****     normal windows with OpenGL with gl_start() and gl_end().
 324:fltk-1.3.4-1/FL/Fl.H ****     It may be useful to call this so your X windows use the same visual
 325:fltk-1.3.4-1/FL/Fl.H ****     as an Fl_Gl_Window, which on some servers will reduce colormap flashing.
 326:fltk-1.3.4-1/FL/Fl.H **** 
 327:fltk-1.3.4-1/FL/Fl.H ****     See Fl_Gl_Window for a list of additional values for the argument.
 328:fltk-1.3.4-1/FL/Fl.H ****   */
 329:fltk-1.3.4-1/FL/Fl.H ****   static int gl_visual(int, int *alist=0); // platform dependent
 330:fltk-1.3.4-1/FL/Fl.H ****   static void own_colormap();
 331:fltk-1.3.4-1/FL/Fl.H ****   static void get_system_colors();
 332:fltk-1.3.4-1/FL/Fl.H ****   static void foreground(uchar, uchar, uchar);
 333:fltk-1.3.4-1/FL/Fl.H ****   static void background(uchar, uchar, uchar);
 334:fltk-1.3.4-1/FL/Fl.H ****   static void background2(uchar, uchar, uchar);
 335:fltk-1.3.4-1/FL/Fl.H **** 
 336:fltk-1.3.4-1/FL/Fl.H ****   // schemes:
 337:fltk-1.3.4-1/FL/Fl.H ****   static int scheme(const char *name);
 338:fltk-1.3.4-1/FL/Fl.H ****   /** See void scheme(const char *name) */
 339:fltk-1.3.4-1/FL/Fl.H ****   static const char* scheme() {return scheme_;}
 340:fltk-1.3.4-1/FL/Fl.H **** 
 341:fltk-1.3.4-1/FL/Fl.H ****   /** Returns whether the current scheme is the given name.
 342:fltk-1.3.4-1/FL/Fl.H **** 
 343:fltk-1.3.4-1/FL/Fl.H ****     This is a fast inline convenience function to support scheme-specific
 344:fltk-1.3.4-1/FL/Fl.H ****     code in widgets, e.g. in their draw() methods, if required.
 345:fltk-1.3.4-1/FL/Fl.H **** 
 346:fltk-1.3.4-1/FL/Fl.H ****     Use a valid scheme name, not \p NULL (although \p NULL is allowed,
 347:fltk-1.3.4-1/FL/Fl.H ****     this is not a useful argument - see below).
 348:fltk-1.3.4-1/FL/Fl.H **** 
 349:fltk-1.3.4-1/FL/Fl.H ****     If Fl::scheme() has not been set or has been set to the default
 350:fltk-1.3.4-1/FL/Fl.H ****     scheme ("none" or "base"), then this will always return 0 regardless
 351:fltk-1.3.4-1/FL/Fl.H ****     of the argument, because Fl::scheme() is \p NULL in this case.
 352:fltk-1.3.4-1/FL/Fl.H **** 
 353:fltk-1.3.4-1/FL/Fl.H ****     \note The stored scheme name is always lowercase, and this method will
 354:fltk-1.3.4-1/FL/Fl.H ****     do a case-sensitive compare, so you \b must provide a lowercase string to
 355:fltk-1.3.4-1/FL/Fl.H ****     return the correct value. This is intentional for performance reasons.
 356:fltk-1.3.4-1/FL/Fl.H **** 
 357:fltk-1.3.4-1/FL/Fl.H ****     Example:
 358:fltk-1.3.4-1/FL/Fl.H ****     \code
 359:fltk-1.3.4-1/FL/Fl.H ****       if (Fl::is_scheme("gtk+")) { your_code_here(); }
 360:fltk-1.3.4-1/FL/Fl.H ****     \endcode
 361:fltk-1.3.4-1/FL/Fl.H **** 
 362:fltk-1.3.4-1/FL/Fl.H ****     \param[in] name \b lowercase string of requested scheme name.
 363:fltk-1.3.4-1/FL/Fl.H **** 
 364:fltk-1.3.4-1/FL/Fl.H ****     \return 1 if the given scheme is active, 0 otherwise.
 365:fltk-1.3.4-1/FL/Fl.H **** 
 366:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::scheme(const char *name)
 367:fltk-1.3.4-1/FL/Fl.H ****   */
 368:fltk-1.3.4-1/FL/Fl.H ****   static int is_scheme(const char *name) {
 369:fltk-1.3.4-1/FL/Fl.H ****     return (scheme_ && name && !strcmp(name,scheme_));
 370:fltk-1.3.4-1/FL/Fl.H ****   }
 371:fltk-1.3.4-1/FL/Fl.H ****   /**
 372:fltk-1.3.4-1/FL/Fl.H ****     Called by scheme according to scheme name. 
 373:fltk-1.3.4-1/FL/Fl.H ****     Loads or reloads the current scheme selection. 
 374:fltk-1.3.4-1/FL/Fl.H ****     See void scheme(const char *name) 
 375:fltk-1.3.4-1/FL/Fl.H ****   */
 376:fltk-1.3.4-1/FL/Fl.H ****   static int reload_scheme(); // platform dependent
 377:fltk-1.3.4-1/FL/Fl.H ****   static int scrollbar_size();
 378:fltk-1.3.4-1/FL/Fl.H ****   static void scrollbar_size(int W);
 379:fltk-1.3.4-1/FL/Fl.H **** 
 380:fltk-1.3.4-1/FL/Fl.H ****   // execution:
 381:fltk-1.3.4-1/FL/Fl.H ****   static int wait();
 382:fltk-1.3.4-1/FL/Fl.H ****   static double wait(double time);
 383:fltk-1.3.4-1/FL/Fl.H ****   static int check();
 384:fltk-1.3.4-1/FL/Fl.H ****   static int ready();
 385:fltk-1.3.4-1/FL/Fl.H ****   static int run();
 386:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* readqueue();
 387:fltk-1.3.4-1/FL/Fl.H ****   /**
 388:fltk-1.3.4-1/FL/Fl.H ****   Adds a one-shot timeout callback.  The function will be called by
 389:fltk-1.3.4-1/FL/Fl.H ****   Fl::wait() at <i>t</i> seconds after this function is called.
 390:fltk-1.3.4-1/FL/Fl.H ****   The optional void* argument is passed to the callback.
 391:fltk-1.3.4-1/FL/Fl.H ****   
 392:fltk-1.3.4-1/FL/Fl.H ****   You can have multiple timeout callbacks. To remove a timeout
 393:fltk-1.3.4-1/FL/Fl.H ****   callback use Fl::remove_timeout().
 394:fltk-1.3.4-1/FL/Fl.H ****   
 395:fltk-1.3.4-1/FL/Fl.H ****   If you need more accurate, repeated timeouts, use Fl::repeat_timeout() to
 396:fltk-1.3.4-1/FL/Fl.H ****   reschedule the subsequent timeouts.
 397:fltk-1.3.4-1/FL/Fl.H ****   
 398:fltk-1.3.4-1/FL/Fl.H ****   The following code will print "TICK" each second on
 399:fltk-1.3.4-1/FL/Fl.H ****   stdout with a fair degree of accuracy:
 400:fltk-1.3.4-1/FL/Fl.H ****   
 401:fltk-1.3.4-1/FL/Fl.H ****   \code
 402:fltk-1.3.4-1/FL/Fl.H **** #include <stdio.h>
 403:fltk-1.3.4-1/FL/Fl.H **** #include <FL/Fl.H>
 404:fltk-1.3.4-1/FL/Fl.H **** #include <FL/Fl_Window.H>
 405:fltk-1.3.4-1/FL/Fl.H **** void callback(void*) {
 406:fltk-1.3.4-1/FL/Fl.H ****   printf("TICK\n");
 407:fltk-1.3.4-1/FL/Fl.H ****   Fl::repeat_timeout(1.0, callback);    // retrigger timeout
 408:fltk-1.3.4-1/FL/Fl.H **** }
 409:fltk-1.3.4-1/FL/Fl.H **** int main() {
 410:fltk-1.3.4-1/FL/Fl.H ****   Fl_Window win(100,100);
 411:fltk-1.3.4-1/FL/Fl.H ****   win.show();
 412:fltk-1.3.4-1/FL/Fl.H ****   Fl::add_timeout(1.0, callback);       // set up first timeout
 413:fltk-1.3.4-1/FL/Fl.H ****   return Fl::run();
 414:fltk-1.3.4-1/FL/Fl.H **** }
 415:fltk-1.3.4-1/FL/Fl.H ****   \endcode
 416:fltk-1.3.4-1/FL/Fl.H ****   */
 417:fltk-1.3.4-1/FL/Fl.H ****   static void add_timeout(double t, Fl_Timeout_Handler,void* = 0); // platform dependent
 418:fltk-1.3.4-1/FL/Fl.H ****   /**
 419:fltk-1.3.4-1/FL/Fl.H ****   Repeats a timeout callback from the expiration of the
 420:fltk-1.3.4-1/FL/Fl.H ****   previous timeout, allowing for more accurate timing. You may only call
 421:fltk-1.3.4-1/FL/Fl.H ****   this method inside a timeout callback.
 422:fltk-1.3.4-1/FL/Fl.H ****   
 423:fltk-1.3.4-1/FL/Fl.H ****   The following code will print "TICK" each second on
 424:fltk-1.3.4-1/FL/Fl.H ****   stdout with a fair degree of accuracy:
 425:fltk-1.3.4-1/FL/Fl.H ****   
 426:fltk-1.3.4-1/FL/Fl.H ****   \code
 427:fltk-1.3.4-1/FL/Fl.H ****      void callback(void*) {
 428:fltk-1.3.4-1/FL/Fl.H ****        puts("TICK");
 429:fltk-1.3.4-1/FL/Fl.H ****        Fl::repeat_timeout(1.0, callback);
 430:fltk-1.3.4-1/FL/Fl.H ****      }
 431:fltk-1.3.4-1/FL/Fl.H ****   
 432:fltk-1.3.4-1/FL/Fl.H ****      int main() {
 433:fltk-1.3.4-1/FL/Fl.H ****        Fl::add_timeout(1.0, callback);
 434:fltk-1.3.4-1/FL/Fl.H ****        return Fl::run();
 435:fltk-1.3.4-1/FL/Fl.H ****      }
 436:fltk-1.3.4-1/FL/Fl.H ****   \endcode
 437:fltk-1.3.4-1/FL/Fl.H ****   */
 438:fltk-1.3.4-1/FL/Fl.H ****   static void repeat_timeout(double t, Fl_Timeout_Handler, void* = 0); // platform dependent
 439:fltk-1.3.4-1/FL/Fl.H ****   static int  has_timeout(Fl_Timeout_Handler, void* = 0);
 440:fltk-1.3.4-1/FL/Fl.H ****   static void remove_timeout(Fl_Timeout_Handler, void* = 0);
 441:fltk-1.3.4-1/FL/Fl.H ****   static void add_check(Fl_Timeout_Handler, void* = 0);
 442:fltk-1.3.4-1/FL/Fl.H ****   static int  has_check(Fl_Timeout_Handler, void* = 0);
 443:fltk-1.3.4-1/FL/Fl.H ****   static void remove_check(Fl_Timeout_Handler, void* = 0);
 444:fltk-1.3.4-1/FL/Fl.H ****   /**
 445:fltk-1.3.4-1/FL/Fl.H ****     Adds file descriptor fd to listen to.
 446:fltk-1.3.4-1/FL/Fl.H ****     
 447:fltk-1.3.4-1/FL/Fl.H ****     When the fd becomes ready for reading Fl::wait() will call the
 448:fltk-1.3.4-1/FL/Fl.H ****     callback and then return. The callback is passed the fd and the
 449:fltk-1.3.4-1/FL/Fl.H ****     arbitrary void* argument.
 450:fltk-1.3.4-1/FL/Fl.H ****     
 451:fltk-1.3.4-1/FL/Fl.H ****     The second version takes a when bitfield, with the bits
 452:fltk-1.3.4-1/FL/Fl.H ****     FL_READ, FL_WRITE, and FL_EXCEPT defined,
 453:fltk-1.3.4-1/FL/Fl.H ****     to indicate when the callback should be done.
 454:fltk-1.3.4-1/FL/Fl.H ****     
 455:fltk-1.3.4-1/FL/Fl.H ****     There can only be one callback of each type for a file descriptor. 
 456:fltk-1.3.4-1/FL/Fl.H ****     Fl::remove_fd() gets rid of <I>all</I> the callbacks for a given
 457:fltk-1.3.4-1/FL/Fl.H ****     file descriptor.
 458:fltk-1.3.4-1/FL/Fl.H ****     
 459:fltk-1.3.4-1/FL/Fl.H ****     Under UNIX <I>any</I> file descriptor can be monitored (files,
 460:fltk-1.3.4-1/FL/Fl.H ****     devices, pipes, sockets, etc.). Due to limitations in Microsoft Windows,
 461:fltk-1.3.4-1/FL/Fl.H ****     WIN32 applications can only monitor sockets.
 462:fltk-1.3.4-1/FL/Fl.H ****   */
 463:fltk-1.3.4-1/FL/Fl.H ****   static void add_fd(int fd, int when, Fl_FD_Handler cb, void* = 0); // platform dependent
 464:fltk-1.3.4-1/FL/Fl.H ****   /** See void add_fd(int fd, int when, Fl_FD_Handler cb, void* = 0) */
 465:fltk-1.3.4-1/FL/Fl.H ****   static void add_fd(int fd, Fl_FD_Handler cb, void* = 0); // platform dependent
 466:fltk-1.3.4-1/FL/Fl.H ****   /** Removes a file descriptor handler. */
 467:fltk-1.3.4-1/FL/Fl.H ****   static void remove_fd(int, int when); // platform dependent
 468:fltk-1.3.4-1/FL/Fl.H ****   /** Removes a file descriptor handler. */
 469:fltk-1.3.4-1/FL/Fl.H ****   static void remove_fd(int); // platform dependent
 470:fltk-1.3.4-1/FL/Fl.H **** 
 471:fltk-1.3.4-1/FL/Fl.H ****   static void add_idle(Fl_Idle_Handler cb, void* data = 0);
 472:fltk-1.3.4-1/FL/Fl.H ****   static int  has_idle(Fl_Idle_Handler cb, void* data = 0);
 473:fltk-1.3.4-1/FL/Fl.H ****   static void remove_idle(Fl_Idle_Handler cb, void* data = 0);
 474:fltk-1.3.4-1/FL/Fl.H ****   /** If true then flush() will do something. */
 475:fltk-1.3.4-1/FL/Fl.H ****   static int damage() {return damage_;}
 476:fltk-1.3.4-1/FL/Fl.H ****   static void redraw();
 477:fltk-1.3.4-1/FL/Fl.H ****   static void flush();
 478:fltk-1.3.4-1/FL/Fl.H ****   /** \addtogroup group_comdlg
 479:fltk-1.3.4-1/FL/Fl.H ****     @{ */
 480:fltk-1.3.4-1/FL/Fl.H ****   /**
 481:fltk-1.3.4-1/FL/Fl.H ****   FLTK calls Fl::warning() to output a warning message.
 482:fltk-1.3.4-1/FL/Fl.H ****   
 483:fltk-1.3.4-1/FL/Fl.H ****   The default version on Windows returns \e without printing a warning
 484:fltk-1.3.4-1/FL/Fl.H ****   message, because Windows programs normally don't have stderr (a console
 485:fltk-1.3.4-1/FL/Fl.H ****   window) enabled.
 486:fltk-1.3.4-1/FL/Fl.H **** 
 487:fltk-1.3.4-1/FL/Fl.H ****   The default version on all other platforms prints the warning message to stderr.
 488:fltk-1.3.4-1/FL/Fl.H **** 
 489:fltk-1.3.4-1/FL/Fl.H ****   You can override the behavior by setting the function pointer to your
 490:fltk-1.3.4-1/FL/Fl.H ****   own routine.
 491:fltk-1.3.4-1/FL/Fl.H **** 
 492:fltk-1.3.4-1/FL/Fl.H ****   Fl::warning() means that there was a recoverable problem, the display may
 493:fltk-1.3.4-1/FL/Fl.H ****   be messed up, but the user can probably keep working - all X protocol
 494:fltk-1.3.4-1/FL/Fl.H ****   errors call this, for example. The default implementation returns after
 495:fltk-1.3.4-1/FL/Fl.H ****   displaying the message.
 496:fltk-1.3.4-1/FL/Fl.H ****    \note \#include <FL/Fl.H>
 497:fltk-1.3.4-1/FL/Fl.H ****   */
 498:fltk-1.3.4-1/FL/Fl.H ****   static void (*warning)(const char*, ...);
 499:fltk-1.3.4-1/FL/Fl.H ****   /**
 500:fltk-1.3.4-1/FL/Fl.H ****   FLTK calls Fl::error() to output a normal error message.
 501:fltk-1.3.4-1/FL/Fl.H ****   
 502:fltk-1.3.4-1/FL/Fl.H ****   The default version on Windows displays the error message in a MessageBox window.
 503:fltk-1.3.4-1/FL/Fl.H **** 
 504:fltk-1.3.4-1/FL/Fl.H ****   The default version on all other platforms prints the error message to stderr.
 505:fltk-1.3.4-1/FL/Fl.H **** 
 506:fltk-1.3.4-1/FL/Fl.H ****   You can override the behavior by setting the function pointer to your
 507:fltk-1.3.4-1/FL/Fl.H ****   own routine.
 508:fltk-1.3.4-1/FL/Fl.H **** 
 509:fltk-1.3.4-1/FL/Fl.H ****   Fl::error() means there is a recoverable error such as the inability to read
 510:fltk-1.3.4-1/FL/Fl.H ****   an image file. The default implementation returns after displaying the message.
 511:fltk-1.3.4-1/FL/Fl.H ****    \note \#include <FL/Fl.H>
 512:fltk-1.3.4-1/FL/Fl.H ****   */
 513:fltk-1.3.4-1/FL/Fl.H ****   static void (*error)(const char*, ...);
 514:fltk-1.3.4-1/FL/Fl.H ****   /**
 515:fltk-1.3.4-1/FL/Fl.H ****   FLTK calls Fl::fatal() to output a fatal error message.
 516:fltk-1.3.4-1/FL/Fl.H ****   
 517:fltk-1.3.4-1/FL/Fl.H ****   The default version on Windows displays the error message in a MessageBox window.
 518:fltk-1.3.4-1/FL/Fl.H **** 
 519:fltk-1.3.4-1/FL/Fl.H ****   The default version on all other platforms prints the error message to stderr.
 520:fltk-1.3.4-1/FL/Fl.H ****   
 521:fltk-1.3.4-1/FL/Fl.H ****   You can override the behavior by setting the function pointer to your
 522:fltk-1.3.4-1/FL/Fl.H ****   own routine.
 523:fltk-1.3.4-1/FL/Fl.H **** 
 524:fltk-1.3.4-1/FL/Fl.H ****   Fl::fatal() must not return, as FLTK is in an unusable state, however your
 525:fltk-1.3.4-1/FL/Fl.H ****   version may be able to use longjmp or an exception to continue, as long as
 526:fltk-1.3.4-1/FL/Fl.H ****   it does not call FLTK again. The default implementation exits with status 1
 527:fltk-1.3.4-1/FL/Fl.H ****   after displaying the message.
 528:fltk-1.3.4-1/FL/Fl.H ****    \note \#include <FL/Fl.H>
 529:fltk-1.3.4-1/FL/Fl.H ****   */
 530:fltk-1.3.4-1/FL/Fl.H ****   static void (*fatal)(const char*, ...);
 531:fltk-1.3.4-1/FL/Fl.H ****   /** @} */
 532:fltk-1.3.4-1/FL/Fl.H **** 
 533:fltk-1.3.4-1/FL/Fl.H ****   /** \defgroup  fl_windows Windows handling functions
 534:fltk-1.3.4-1/FL/Fl.H ****       \brief Windows and standard dialogs handling declared in <FL/Fl.H>
 535:fltk-1.3.4-1/FL/Fl.H ****     @{ */
 536:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* first_window();
 537:fltk-1.3.4-1/FL/Fl.H ****   static void first_window(Fl_Window*);
 538:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* next_window(const Fl_Window*);
 539:fltk-1.3.4-1/FL/Fl.H **** 
 540:fltk-1.3.4-1/FL/Fl.H ****   /**
 541:fltk-1.3.4-1/FL/Fl.H ****     Returns the top-most modal() window currently shown.
 542:fltk-1.3.4-1/FL/Fl.H **** 
 543:fltk-1.3.4-1/FL/Fl.H ****     This is the most recently shown() window with modal() true, or NULL
 544:fltk-1.3.4-1/FL/Fl.H ****     if there are no modal() windows shown().
 545:fltk-1.3.4-1/FL/Fl.H ****     The modal() window has its handle() method called
 546:fltk-1.3.4-1/FL/Fl.H ****     for all events, and no other windows will have handle()
 547:fltk-1.3.4-1/FL/Fl.H ****     called (grab() overrides this).
 548:fltk-1.3.4-1/FL/Fl.H ****   */
 549:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* modal() {return modal_;}
 550:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the window that currently receives all events.
 551:fltk-1.3.4-1/FL/Fl.H ****    
 552:fltk-1.3.4-1/FL/Fl.H ****    \return The window that currently receives all events,
 553:fltk-1.3.4-1/FL/Fl.H ****    or NULL if event grabbing is currently OFF.
 554:fltk-1.3.4-1/FL/Fl.H ****   */
 555:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* grab() {return grab_;}
 556:fltk-1.3.4-1/FL/Fl.H ****   /** Selects the window to grab.  
 557:fltk-1.3.4-1/FL/Fl.H ****    This is used when pop-up menu systems are active.
 558:fltk-1.3.4-1/FL/Fl.H ****    
 559:fltk-1.3.4-1/FL/Fl.H ****    Send all events to the passed window no matter where the pointer or
 560:fltk-1.3.4-1/FL/Fl.H ****    focus is (including in other programs). The window <I>does not have
 561:fltk-1.3.4-1/FL/Fl.H ****    to be shown()</I> , this lets the handle() method of a
 562:fltk-1.3.4-1/FL/Fl.H ****    "dummy" window override all event handling and allows you to
 563:fltk-1.3.4-1/FL/Fl.H ****    map and unmap a complex set of windows (under both X and WIN32
 564:fltk-1.3.4-1/FL/Fl.H ****    <I>some</I> window must be mapped because the system interface needs a
 565:fltk-1.3.4-1/FL/Fl.H ****    window id).
 566:fltk-1.3.4-1/FL/Fl.H ****    
 567:fltk-1.3.4-1/FL/Fl.H ****    If grab() is on it will also affect show() of windows by doing
 568:fltk-1.3.4-1/FL/Fl.H ****    system-specific operations (on X it turns on override-redirect).
 569:fltk-1.3.4-1/FL/Fl.H ****    These are designed to make menus popup reliably
 570:fltk-1.3.4-1/FL/Fl.H ****    and faster on the system.
 571:fltk-1.3.4-1/FL/Fl.H ****    
 572:fltk-1.3.4-1/FL/Fl.H ****    To turn off grabbing do Fl::grab(0).
 573:fltk-1.3.4-1/FL/Fl.H ****    
 574:fltk-1.3.4-1/FL/Fl.H ****    <I>Be careful that your program does not enter an infinite loop
 575:fltk-1.3.4-1/FL/Fl.H ****    while grab() is on.  On X this will lock up your screen!</I>
 576:fltk-1.3.4-1/FL/Fl.H ****    To avoid this potential lockup, all newer operating systems seem to 
 577:fltk-1.3.4-1/FL/Fl.H ****    limit mouse pointer grabbing to the time during which a mouse button 
 578:fltk-1.3.4-1/FL/Fl.H ****    is held down. Some OS's may not support grabbing at all.
 579:fltk-1.3.4-1/FL/Fl.H ****    */
 580:fltk-1.3.4-1/FL/Fl.H ****   static void grab(Fl_Window*); // platform dependent
 581:fltk-1.3.4-1/FL/Fl.H ****   /** @} */
 582:fltk-1.3.4-1/FL/Fl.H **** 
 583:fltk-1.3.4-1/FL/Fl.H ****   /** \defgroup fl_events Events handling functions
 584:fltk-1.3.4-1/FL/Fl.H **** 	Fl class events handling API declared in <FL/Fl.H>
 585:fltk-1.3.4-1/FL/Fl.H **** 	@{
 586:fltk-1.3.4-1/FL/Fl.H ****   */
 587:fltk-1.3.4-1/FL/Fl.H ****   // event information:
 588:fltk-1.3.4-1/FL/Fl.H ****   /**
 589:fltk-1.3.4-1/FL/Fl.H ****     Returns the last event that was processed. This can be used
 590:fltk-1.3.4-1/FL/Fl.H ****     to determine if a callback is being done in response to a
 591:fltk-1.3.4-1/FL/Fl.H ****     keypress, mouse click, etc.
 592:fltk-1.3.4-1/FL/Fl.H ****   */
 593:fltk-1.3.4-1/FL/Fl.H ****   static int event()		{return e_number;}
 594:fltk-1.3.4-1/FL/Fl.H ****   /**
 595:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse position of the event relative to the Fl_Window
 596:fltk-1.3.4-1/FL/Fl.H ****     it was passed to.
 597:fltk-1.3.4-1/FL/Fl.H ****   */
 598:fltk-1.3.4-1/FL/Fl.H ****   static int event_x()	{return e_x;}
 599:fltk-1.3.4-1/FL/Fl.H ****   /**
 600:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse position of the event relative to the Fl_Window
 601:fltk-1.3.4-1/FL/Fl.H ****     it was passed to.
 602:fltk-1.3.4-1/FL/Fl.H ****   */
 603:fltk-1.3.4-1/FL/Fl.H ****   static int event_y()	{return e_y;}
 604:fltk-1.3.4-1/FL/Fl.H ****   /**
 605:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse position on the screen of the event.  To find the
 606:fltk-1.3.4-1/FL/Fl.H ****     absolute position of an Fl_Window on the screen, use the
 607:fltk-1.3.4-1/FL/Fl.H ****     difference between event_x_root(),event_y_root() and 
 608:fltk-1.3.4-1/FL/Fl.H ****     event_x(),event_y().
 609:fltk-1.3.4-1/FL/Fl.H ****   */
 610:fltk-1.3.4-1/FL/Fl.H ****   static int event_x_root()	{return e_x_root;}
 611:fltk-1.3.4-1/FL/Fl.H ****   /**
 612:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse position on the screen of the event.  To find the
 613:fltk-1.3.4-1/FL/Fl.H ****     absolute position of an Fl_Window on the screen, use the
 614:fltk-1.3.4-1/FL/Fl.H ****     difference between event_x_root(),event_y_root() and 
 615:fltk-1.3.4-1/FL/Fl.H ****     event_x(),event_y().
 616:fltk-1.3.4-1/FL/Fl.H ****   */
 617:fltk-1.3.4-1/FL/Fl.H ****   static int event_y_root()	{return e_y_root;}
 618:fltk-1.3.4-1/FL/Fl.H ****   /**
 619:fltk-1.3.4-1/FL/Fl.H ****     Returns the current horizontal mouse scrolling associated with the
 620:fltk-1.3.4-1/FL/Fl.H ****     FL_MOUSEWHEEL event. Right is positive.
 621:fltk-1.3.4-1/FL/Fl.H ****   */
 622:fltk-1.3.4-1/FL/Fl.H ****   static int event_dx()	{return e_dx;}
 623:fltk-1.3.4-1/FL/Fl.H ****   /**
 624:fltk-1.3.4-1/FL/Fl.H ****     Returns the current vertical mouse scrolling associated with the
 625:fltk-1.3.4-1/FL/Fl.H ****     FL_MOUSEWHEEL event. Down is positive.
 626:fltk-1.3.4-1/FL/Fl.H ****   */
 627:fltk-1.3.4-1/FL/Fl.H ****   static int event_dy()	{return e_dy;}
 628:fltk-1.3.4-1/FL/Fl.H ****   /**
 629:fltk-1.3.4-1/FL/Fl.H ****     Return where the mouse is on the screen by doing a round-trip query to
 630:fltk-1.3.4-1/FL/Fl.H ****     the server.  You should use Fl::event_x_root() and 
 631:fltk-1.3.4-1/FL/Fl.H ****     Fl::event_y_root() if possible, but this is necessary if you are
 632:fltk-1.3.4-1/FL/Fl.H ****     not sure if a mouse event has been processed recently (such as to
 633:fltk-1.3.4-1/FL/Fl.H ****     position your first window).  If the display is not open, this will
 634:fltk-1.3.4-1/FL/Fl.H ****     open it.
 635:fltk-1.3.4-1/FL/Fl.H ****   */
 636:fltk-1.3.4-1/FL/Fl.H ****   static void get_mouse(int &,int &); // platform dependent
 637:fltk-1.3.4-1/FL/Fl.H ****   /**
 638:fltk-1.3.4-1/FL/Fl.H ****     Returns non zero if we had a double click event.
 639:fltk-1.3.4-1/FL/Fl.H ****     \retval Non-zero if the most recent FL_PUSH or FL_KEYBOARD was a "double click".  
 640:fltk-1.3.4-1/FL/Fl.H ****     \retval  N-1 for  N clicks. 
 641:fltk-1.3.4-1/FL/Fl.H ****     A double click is counted if the same button is pressed
 642:fltk-1.3.4-1/FL/Fl.H ****     again while event_is_click() is true.
 643:fltk-1.3.4-1/FL/Fl.H ****     
 644:fltk-1.3.4-1/FL/Fl.H ****    */
 645:fltk-1.3.4-1/FL/Fl.H ****   static int event_clicks()	{return e_clicks;}
 646:fltk-1.3.4-1/FL/Fl.H ****   /**
 647:fltk-1.3.4-1/FL/Fl.H ****     Manually sets the number returned by Fl::event_clicks().  
 648:fltk-1.3.4-1/FL/Fl.H ****     This can be used to set it to zero so that
 649:fltk-1.3.4-1/FL/Fl.H ****     later code does not think an item was double-clicked.
 650:fltk-1.3.4-1/FL/Fl.H ****     \param[in] i corresponds to no double-click if 0, i+1 mouse clicks otherwise
 651:fltk-1.3.4-1/FL/Fl.H ****     \see int event_clicks()
 652:fltk-1.3.4-1/FL/Fl.H ****   */
 653:fltk-1.3.4-1/FL/Fl.H ****   static void event_clicks(int i) {e_clicks = i;}
 654:fltk-1.3.4-1/FL/Fl.H ****   /**
 655:fltk-1.3.4-1/FL/Fl.H ****   Returns non-zero if the mouse has not moved far enough
 656:fltk-1.3.4-1/FL/Fl.H ****   and not enough time has passed since the last FL_PUSH or 
 657:fltk-1.3.4-1/FL/Fl.H ****   FL_KEYBOARD event for it to be considered a "drag" rather than a
 658:fltk-1.3.4-1/FL/Fl.H ****   "click".  You can test this on FL_DRAG, FL_RELEASE,
 659:fltk-1.3.4-1/FL/Fl.H ****   and FL_MOVE events.  
 660:fltk-1.3.4-1/FL/Fl.H ****   */
 661:fltk-1.3.4-1/FL/Fl.H ****   static int event_is_click()	{return e_is_click;}
 662:fltk-1.3.4-1/FL/Fl.H ****   /**
 663:fltk-1.3.4-1/FL/Fl.H ****    Clears the value returned by Fl::event_is_click().  
 664:fltk-1.3.4-1/FL/Fl.H ****    Useful to prevent the <I>next</I>
 665:fltk-1.3.4-1/FL/Fl.H ****    click from being counted as a double-click or to make a popup menu
 666:fltk-1.3.4-1/FL/Fl.H ****    pick an item with a single click.  Don't pass non-zero to this. 
 667:fltk-1.3.4-1/FL/Fl.H ****   */
 668:fltk-1.3.4-1/FL/Fl.H ****   static void event_is_click(int i) {e_is_click = i;}
 669:fltk-1.3.4-1/FL/Fl.H ****   /**
 670:fltk-1.3.4-1/FL/Fl.H ****     Gets which particular mouse button caused the current event.
 671:fltk-1.3.4-1/FL/Fl.H **** 
 672:fltk-1.3.4-1/FL/Fl.H ****     This returns garbage if the most recent event was not a FL_PUSH or FL_RELEASE event.
 673:fltk-1.3.4-1/FL/Fl.H ****     \retval FL_LEFT_MOUSE \retval FL_MIDDLE_MOUSE \retval FL_RIGHT_MOUSE.
 674:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::event_buttons()
 675:fltk-1.3.4-1/FL/Fl.H ****   */
 676:fltk-1.3.4-1/FL/Fl.H ****   static int event_button()	{return e_keysym-FL_Button;}
 677:fltk-1.3.4-1/FL/Fl.H ****   /**
 678:fltk-1.3.4-1/FL/Fl.H ****     Returns the keyboard and mouse button states of the last event.
 679:fltk-1.3.4-1/FL/Fl.H **** 
 680:fltk-1.3.4-1/FL/Fl.H ****     This is a bitfield of what shift states were on and what mouse buttons
 681:fltk-1.3.4-1/FL/Fl.H ****     were held down during the most recent event.
 682:fltk-1.3.4-1/FL/Fl.H **** 
 683:fltk-1.3.4-1/FL/Fl.H ****     The legal event state bits are:
 684:fltk-1.3.4-1/FL/Fl.H **** 
 685:fltk-1.3.4-1/FL/Fl.H ****     - FL_SHIFT
 686:fltk-1.3.4-1/FL/Fl.H ****     - FL_CAPS_LOCK
 687:fltk-1.3.4-1/FL/Fl.H ****     - FL_CTRL
 688:fltk-1.3.4-1/FL/Fl.H ****     - FL_ALT
 689:fltk-1.3.4-1/FL/Fl.H ****     - FL_NUM_LOCK
 690:fltk-1.3.4-1/FL/Fl.H ****     - FL_META
 691:fltk-1.3.4-1/FL/Fl.H ****     - FL_SCROLL_LOCK
 692:fltk-1.3.4-1/FL/Fl.H ****     - FL_BUTTON1
 693:fltk-1.3.4-1/FL/Fl.H ****     - FL_BUTTON2
 694:fltk-1.3.4-1/FL/Fl.H ****     - FL_BUTTON3
 695:fltk-1.3.4-1/FL/Fl.H ****     
 696:fltk-1.3.4-1/FL/Fl.H ****     X servers do not agree on shift states, and FL_NUM_LOCK, FL_META, and
 697:fltk-1.3.4-1/FL/Fl.H ****     FL_SCROLL_LOCK may not work. The values were selected to match the
 698:fltk-1.3.4-1/FL/Fl.H ****     XFree86 server on Linux. In addition there is a bug in the way X works
 699:fltk-1.3.4-1/FL/Fl.H ****     so that the shift state is not correctly reported until the first event
 700:fltk-1.3.4-1/FL/Fl.H ****     <I>after</I> the shift key is pressed or released.
 701:fltk-1.3.4-1/FL/Fl.H ****   */
 702:fltk-1.3.4-1/FL/Fl.H ****   static int event_state()	{return e_state;}
 703:fltk-1.3.4-1/FL/Fl.H **** 
 704:fltk-1.3.4-1/FL/Fl.H ****   /** Returns non-zero if any of the passed event state bits are turned on.
 705:fltk-1.3.4-1/FL/Fl.H **** 
 706:fltk-1.3.4-1/FL/Fl.H ****     Use \p mask to pass the event states you're interested in.
 707:fltk-1.3.4-1/FL/Fl.H ****     The legal event state bits are defined in Fl::event_state().
 708:fltk-1.3.4-1/FL/Fl.H ****   */
 709:fltk-1.3.4-1/FL/Fl.H ****   static int event_state(int mask) {return e_state&mask;}
 710:fltk-1.3.4-1/FL/Fl.H ****   /**
 711:fltk-1.3.4-1/FL/Fl.H ****     Gets which key on the keyboard was last pushed.
 712:fltk-1.3.4-1/FL/Fl.H **** 
 713:fltk-1.3.4-1/FL/Fl.H ****     The returned integer 'key code' is not necessarily a text
 714:fltk-1.3.4-1/FL/Fl.H ****     equivalent for the keystroke. For instance: if someone presses '5' on the 
 715:fltk-1.3.4-1/FL/Fl.H ****     numeric keypad with numlock on, Fl::event_key() may return the 'key code'
 716:fltk-1.3.4-1/FL/Fl.H ****     for this key, and NOT the character '5'. To always get the '5', use Fl::event_text() instead.
 717:fltk-1.3.4-1/FL/Fl.H ****     
 718:fltk-1.3.4-1/FL/Fl.H ****     \returns an integer 'key code', or 0 if the last event was not a key press or release.
 719:fltk-1.3.4-1/FL/Fl.H ****     \see int event_key(int), event_text(), compose(int&).
 720:fltk-1.3.4-1/FL/Fl.H ****   */
 721:fltk-1.3.4-1/FL/Fl.H ****   static int event_key()	{return e_keysym;}
 722:fltk-1.3.4-1/FL/Fl.H ****   /**
 723:fltk-1.3.4-1/FL/Fl.H ****     Returns the keycode of the last key event, regardless of the NumLock state.
 724:fltk-1.3.4-1/FL/Fl.H ****       
 725:fltk-1.3.4-1/FL/Fl.H ****     If NumLock is deactivated, FLTK translates events from the 
 726:fltk-1.3.4-1/FL/Fl.H ****     numeric keypad into the corresponding arrow key events. 
 727:fltk-1.3.4-1/FL/Fl.H ****     event_key() returns the translated key code, whereas
 728:fltk-1.3.4-1/FL/Fl.H ****     event_original_key() returns the keycode before NumLock translation.
 729:fltk-1.3.4-1/FL/Fl.H ****   */
 730:fltk-1.3.4-1/FL/Fl.H ****   static int event_original_key(){return e_original_keysym;}
 731:fltk-1.3.4-1/FL/Fl.H ****   /** 
 732:fltk-1.3.4-1/FL/Fl.H ****     Returns true if the given \p key was held
 733:fltk-1.3.4-1/FL/Fl.H ****     down (or pressed) <I>during</I> the last event.  This is constant until
 734:fltk-1.3.4-1/FL/Fl.H ****     the next event is read from the server.
 735:fltk-1.3.4-1/FL/Fl.H ****     
 736:fltk-1.3.4-1/FL/Fl.H ****     Fl::get_key(int) returns true if the given key is held down <I>now</I>.
 737:fltk-1.3.4-1/FL/Fl.H ****     Under X this requires a round-trip to the server and is <I>much</I>
 738:fltk-1.3.4-1/FL/Fl.H ****     slower than Fl::event_key(int).
 739:fltk-1.3.4-1/FL/Fl.H ****     
 740:fltk-1.3.4-1/FL/Fl.H ****     Keys are identified by the <I>unshifted</I> values. FLTK defines a
 741:fltk-1.3.4-1/FL/Fl.H ****     set of symbols that should work on most modern machines for every key
 742:fltk-1.3.4-1/FL/Fl.H ****     on the keyboard:
 743:fltk-1.3.4-1/FL/Fl.H ****     
 744:fltk-1.3.4-1/FL/Fl.H ****     \li All keys on the main keyboard producing a printable ASCII
 745:fltk-1.3.4-1/FL/Fl.H **** 	character use the value of that ASCII character (as though shift,
 746:fltk-1.3.4-1/FL/Fl.H **** 	ctrl, and caps lock were not on). The space bar is 32.
 747:fltk-1.3.4-1/FL/Fl.H ****     \li All keys on the numeric keypad producing a printable ASCII
 748:fltk-1.3.4-1/FL/Fl.H **** 	character use the value of that ASCII character plus FL_KP.
 749:fltk-1.3.4-1/FL/Fl.H **** 	The highest possible value is FL_KP_Last so you can
 750:fltk-1.3.4-1/FL/Fl.H **** 	range-check to see if something is  on the keypad.
 751:fltk-1.3.4-1/FL/Fl.H ****     \li All numbered function keys use the number on the function key plus 
 752:fltk-1.3.4-1/FL/Fl.H **** 	FL_F.  The highest possible number is FL_F_Last, so you
 753:fltk-1.3.4-1/FL/Fl.H **** 	can range-check a value.
 754:fltk-1.3.4-1/FL/Fl.H ****     \li Buttons on the mouse are considered keys, and use the button
 755:fltk-1.3.4-1/FL/Fl.H **** 	number (where the left button is 1) plus FL_Button.
 756:fltk-1.3.4-1/FL/Fl.H ****     \li All other keys on the keypad have a symbol: FL_Escape,
 757:fltk-1.3.4-1/FL/Fl.H **** 	FL_BackSpace, FL_Tab, FL_Enter, FL_Print, FL_Scroll_Lock, FL_Pause,
 758:fltk-1.3.4-1/FL/Fl.H **** 	FL_Insert, FL_Home, FL_Page_Up, FL_Delete, FL_End, FL_Page_Down,
 759:fltk-1.3.4-1/FL/Fl.H **** 	FL_Left, FL_Up, FL_Right, FL_Down, FL_Iso_Key, FL_Shift_L, FL_Shift_R,
 760:fltk-1.3.4-1/FL/Fl.H **** 	FL_Control_L, FL_Control_R, FL_Caps_Lock, FL_Alt_L, FL_Alt_R,
 761:fltk-1.3.4-1/FL/Fl.H **** 	FL_Meta_L, FL_Meta_R, FL_Menu, FL_Num_Lock, FL_KP_Enter.  Be
 762:fltk-1.3.4-1/FL/Fl.H **** 	careful not to confuse these with the very similar, but all-caps,
 763:fltk-1.3.4-1/FL/Fl.H **** 	symbols used by Fl::event_state().
 764:fltk-1.3.4-1/FL/Fl.H **** 
 765:fltk-1.3.4-1/FL/Fl.H ****     On X Fl::get_key(FL_Button+n) does not work.
 766:fltk-1.3.4-1/FL/Fl.H ****     
 767:fltk-1.3.4-1/FL/Fl.H ****     On WIN32 Fl::get_key(FL_KP_Enter) and Fl::event_key(FL_KP_Enter) do not work.
 768:fltk-1.3.4-1/FL/Fl.H ****   */
 769:fltk-1.3.4-1/FL/Fl.H ****   static int event_key(int key);
 770:fltk-1.3.4-1/FL/Fl.H ****   /** 
 771:fltk-1.3.4-1/FL/Fl.H ****     Returns true if the given \p key is held down <I>now</I>.  
 772:fltk-1.3.4-1/FL/Fl.H ****     Under X this requires a round-trip to the server and is <I>much</I>
 773:fltk-1.3.4-1/FL/Fl.H ****     slower than Fl::event_key(int). \see event_key(int)
 774:fltk-1.3.4-1/FL/Fl.H ****   */
 775:fltk-1.3.4-1/FL/Fl.H ****   static int get_key(int key); // platform dependent
 776:fltk-1.3.4-1/FL/Fl.H ****   /** 
 777:fltk-1.3.4-1/FL/Fl.H ****     Returns the text associated with the current event, including FL_PASTE or FL_DND_RELEASE events
 778:fltk-1.3.4-1/FL/Fl.H ****     This can be used in response to FL_KEYUP, FL_KEYDOWN, FL_PASTE, and FL_DND_RELEASE.
 779:fltk-1.3.4-1/FL/Fl.H **** 
 780:fltk-1.3.4-1/FL/Fl.H ****     When responding to FL_KEYUP/FL_KEYDOWN, use this function instead of Fl::event_key()
 781:fltk-1.3.4-1/FL/Fl.H ****     to get the text equivalent of keystrokes suitable for inserting into strings 
 782:fltk-1.3.4-1/FL/Fl.H ****     and text widgets.
 783:fltk-1.3.4-1/FL/Fl.H **** 
 784:fltk-1.3.4-1/FL/Fl.H ****     The returned string is guaranteed to be NULL terminated.
 785:fltk-1.3.4-1/FL/Fl.H ****     However, see Fl::event_length() for the actual length of the string,
 786:fltk-1.3.4-1/FL/Fl.H ****     in case the string itself contains NULLs that are part of the text data.
 787:fltk-1.3.4-1/FL/Fl.H **** 
 788:fltk-1.3.4-1/FL/Fl.H ****     \returns A NULL terminated text string equivalent of the last keystroke.
 789:fltk-1.3.4-1/FL/Fl.H ****    */
 790:fltk-1.3.4-1/FL/Fl.H ****   static const char* event_text() {return e_text;}
 791:fltk-1.3.4-1/FL/Fl.H ****   /**
 792:fltk-1.3.4-1/FL/Fl.H ****     Returns the length of the text in Fl::event_text(). There
 793:fltk-1.3.4-1/FL/Fl.H ****     will always be a nul at this position in the text. However there may
 794:fltk-1.3.4-1/FL/Fl.H ****     be a nul before that if the keystroke translates to a nul character or
 795:fltk-1.3.4-1/FL/Fl.H ****     you paste a nul character.
 796:fltk-1.3.4-1/FL/Fl.H ****   */
 797:fltk-1.3.4-1/FL/Fl.H ****   static int event_length() {return e_length;}
 798:fltk-1.3.4-1/FL/Fl.H ****   
 799:fltk-1.3.4-1/FL/Fl.H ****   /** During an FL_PASTE event of non-textual data, returns a pointer to the pasted data.
 800:fltk-1.3.4-1/FL/Fl.H ****    The returned data is an Fl_Image * when the result of Fl::event_clipboard_type() is Fl::clipboar
 801:fltk-1.3.4-1/FL/Fl.H ****    */
 802:fltk-1.3.4-1/FL/Fl.H ****   static void *event_clipboard() { return e_clipboard_data; }
 803:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the type of the pasted data during an FL_PASTE event.
 804:fltk-1.3.4-1/FL/Fl.H ****    This type can be Fl::clipboard_plain_text or Fl::clipboard_image.
 805:fltk-1.3.4-1/FL/Fl.H ****    */
 806:fltk-1.3.4-1/FL/Fl.H ****   static const char *event_clipboard_type() {return e_clipboard_type; }
 807:fltk-1.3.4-1/FL/Fl.H **** 
 808:fltk-1.3.4-1/FL/Fl.H **** 
 809:fltk-1.3.4-1/FL/Fl.H ****   static int compose(int &del);
 810:fltk-1.3.4-1/FL/Fl.H ****   static void compose_reset();
 811:fltk-1.3.4-1/FL/Fl.H ****   static int event_inside(int,int,int,int);
 812:fltk-1.3.4-1/FL/Fl.H ****   static int event_inside(const Fl_Widget*);
 813:fltk-1.3.4-1/FL/Fl.H ****   static int test_shortcut(Fl_Shortcut);
 814:fltk-1.3.4-1/FL/Fl.H **** 
 815:fltk-1.3.4-1/FL/Fl.H ****   /**
 816:fltk-1.3.4-1/FL/Fl.H ****     Enables the system input methods facilities. This is the default.
 817:fltk-1.3.4-1/FL/Fl.H ****     \see disable_im()
 818:fltk-1.3.4-1/FL/Fl.H ****   */
 819:fltk-1.3.4-1/FL/Fl.H ****   static void enable_im();
 820:fltk-1.3.4-1/FL/Fl.H ****   /**
 821:fltk-1.3.4-1/FL/Fl.H ****     Disables the system input methods facilities.
 822:fltk-1.3.4-1/FL/Fl.H ****     \see enable_im()
 823:fltk-1.3.4-1/FL/Fl.H ****   */
 824:fltk-1.3.4-1/FL/Fl.H ****   static void disable_im();
 825:fltk-1.3.4-1/FL/Fl.H **** 
 826:fltk-1.3.4-1/FL/Fl.H ****   // event destinations:
 827:fltk-1.3.4-1/FL/Fl.H ****   static int handle(int, Fl_Window*);
 828:fltk-1.3.4-1/FL/Fl.H ****   static int handle_(int, Fl_Window*);
 829:fltk-1.3.4-1/FL/Fl.H ****   /**  Gets the widget that is below the mouse. 
 830:fltk-1.3.4-1/FL/Fl.H ****        \see  belowmouse(Fl_Widget*) */
 831:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* belowmouse() {return belowmouse_;}
 832:fltk-1.3.4-1/FL/Fl.H ****   static void belowmouse(Fl_Widget*);
 833:fltk-1.3.4-1/FL/Fl.H ****   /** Gets the widget that is being pushed.
 834:fltk-1.3.4-1/FL/Fl.H ****       \see void pushed(Fl_Widget*) */
 835:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* pushed()	{return pushed_;}
 836:fltk-1.3.4-1/FL/Fl.H ****   static void pushed(Fl_Widget*);
 837:fltk-1.3.4-1/FL/Fl.H ****   /** Gets the current Fl::focus() widget. \sa Fl::focus(Fl_Widget*) */
 838:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* focus()	{return focus_;}
 839:fltk-1.3.4-1/FL/Fl.H ****   static void focus(Fl_Widget*);
 840:fltk-1.3.4-1/FL/Fl.H ****   static void add_handler(Fl_Event_Handler h);
 841:fltk-1.3.4-1/FL/Fl.H ****   static void remove_handler(Fl_Event_Handler h);
 842:fltk-1.3.4-1/FL/Fl.H ****   static void add_system_handler(Fl_System_Handler h, void *data);
 843:fltk-1.3.4-1/FL/Fl.H ****   static void remove_system_handler(Fl_System_Handler h);
 844:fltk-1.3.4-1/FL/Fl.H ****   static void event_dispatch(Fl_Event_Dispatch d);
 845:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Event_Dispatch event_dispatch();
 846:fltk-1.3.4-1/FL/Fl.H ****   /** @} */
 847:fltk-1.3.4-1/FL/Fl.H **** 
 848:fltk-1.3.4-1/FL/Fl.H ****   /** \defgroup  fl_clipboard  Selection & Clipboard functions
 849:fltk-1.3.4-1/FL/Fl.H **** 	FLTK global copy/cut/paste functions declared in <FL/Fl.H>
 850:fltk-1.3.4-1/FL/Fl.H ****    @{ */
 851:fltk-1.3.4-1/FL/Fl.H ****   // cut/paste:
 852:fltk-1.3.4-1/FL/Fl.H ****   /**
 853:fltk-1.3.4-1/FL/Fl.H ****   Copies the data pointed to by \p stuff to the selection buffer 
 854:fltk-1.3.4-1/FL/Fl.H ****   (\p destination is 0), the clipboard (\p destination is 1), or
 855:fltk-1.3.4-1/FL/Fl.H ****   both (\p destination is 2). Copying to both is only relevant on X11,
 856:fltk-1.3.4-1/FL/Fl.H ****   on other platforms it maps to the clipboard (1).
 857:fltk-1.3.4-1/FL/Fl.H ****   \p len is the number of relevant bytes in \p stuff.
 858:fltk-1.3.4-1/FL/Fl.H ****   \p type is always Fl::clipboard_plain_text.
 859:fltk-1.3.4-1/FL/Fl.H ****   The selection buffer is used for
 860:fltk-1.3.4-1/FL/Fl.H ****   middle-mouse pastes and for drag-and-drop selections. The 
 861:fltk-1.3.4-1/FL/Fl.H ****   clipboard is used for traditional copy/cut/paste operations.
 862:fltk-1.3.4-1/FL/Fl.H ****    
 863:fltk-1.3.4-1/FL/Fl.H ****    \note This function is, at present, intended only to copy UTF-8 encoded textual data.
 864:fltk-1.3.4-1/FL/Fl.H ****    To copy graphical data, use the Fl_Copy_Surface class. The \p type argument may allow
 865:fltk-1.3.4-1/FL/Fl.H ****    in the future to copy other kinds of data.
 866:fltk-1.3.4-1/FL/Fl.H ****   */
 867:fltk-1.3.4-1/FL/Fl.H **** #if FLTK_ABI_VERSION >= 10303 || defined(FL_DOXYGEN)
 868:fltk-1.3.4-1/FL/Fl.H ****   static void copy(const char* stuff, int len, int destination = 0, const char *type = Fl::clipboar
 869:fltk-1.3.4-1/FL/Fl.H **** #else
 870:fltk-1.3.4-1/FL/Fl.H ****   static void copy(const char* stuff, int len, int destination, const char *type);
 871:fltk-1.3.4-1/FL/Fl.H ****   static void copy(const char* stuff, int len, int destination = 0);
 872:fltk-1.3.4-1/FL/Fl.H **** #endif
 873:fltk-1.3.4-1/FL/Fl.H ****   
 874:fltk-1.3.4-1/FL/Fl.H **** #if !(defined(__APPLE__) || defined(WIN32) || defined(FL_DOXYGEN))
 875:fltk-1.3.4-1/FL/Fl.H ****   static void copy_image(const unsigned char* data, int W, int H, int destination = 0); // platform
 876:fltk-1.3.4-1/FL/Fl.H **** #endif
 877:fltk-1.3.4-1/FL/Fl.H ****   /**
 878:fltk-1.3.4-1/FL/Fl.H ****   Pastes the data from the selection buffer (\p source is 0) or the clipboard 
 879:fltk-1.3.4-1/FL/Fl.H ****   (\p source is 1) into \p receiver.  
 880:fltk-1.3.4-1/FL/Fl.H **** 
 881:fltk-1.3.4-1/FL/Fl.H ****   The selection buffer (\p source is 0) is used for middle-mouse pastes and for
 882:fltk-1.3.4-1/FL/Fl.H ****   drag-and-drop selections. The clipboard (\p source is 1) is used for
 883:fltk-1.3.4-1/FL/Fl.H ****   copy/cut/paste operations.
 884:fltk-1.3.4-1/FL/Fl.H **** 
 885:fltk-1.3.4-1/FL/Fl.H ****   If \p source is 1, the optional \p type argument indicates what type of data is requested from th
 886:fltk-1.3.4-1/FL/Fl.H ****   At present, Fl::clipboard_plain_text (requesting text data) and
 887:fltk-1.3.4-1/FL/Fl.H ****   Fl::clipboard_image (requesting image data) are possible.
 888:fltk-1.3.4-1/FL/Fl.H ****   Set things up so the handle function of the \p receiver widget will be called with an FL_PASTE ev
 889:fltk-1.3.4-1/FL/Fl.H ****   time in the future if the clipboard does contain data of the requested type. 
 890:fltk-1.3.4-1/FL/Fl.H ****   While processing the FL_PASTE event:
 891:fltk-1.3.4-1/FL/Fl.H ****   \li if \p type is Fl::clipboard_plain_text, the text string from the specified \p source is in Fl
 892:fltk-1.3.4-1/FL/Fl.H ****    with UTF-8 encoding, and the number of bytes in Fl::event_length(). 
 893:fltk-1.3.4-1/FL/Fl.H ****    If Fl::paste() gets called during the drop step of a files-drag-and-drop operation,
 894:fltk-1.3.4-1/FL/Fl.H ****    Fl::event_text() contains a list of filenames (see \ref events_dnd).
 895:fltk-1.3.4-1/FL/Fl.H ****   \li if \p type is Fl::clipboard_image, the pointer returned by Fl::event_clipboard() can be safel
 896:fltk-1.3.4-1/FL/Fl.H ****    type Fl_Image * to obtain a pointer to the pasted image. Furthermore, starting with FLTK 1.3.4, 
 897:fltk-1.3.4-1/FL/Fl.H ****    of type Fl_RGB_Image across all platforms. 
 898:fltk-1.3.4-1/FL/Fl.H ****    If \p receiver accepts the clipboard image, receiver.handle() should return 1 and the
 899:fltk-1.3.4-1/FL/Fl.H ****    application should take ownership of this image (that is, delete it after use). 
 900:fltk-1.3.4-1/FL/Fl.H ****    Conversely, if receiver.handle() returns 0, the application must not use the image.
 901:fltk-1.3.4-1/FL/Fl.H **** 
 902:fltk-1.3.4-1/FL/Fl.H ****   The receiver should be prepared to be called \e directly by this, or for
 903:fltk-1.3.4-1/FL/Fl.H ****   it to happen \e later, or possibly <i>not at all</i>.  This
 904:fltk-1.3.4-1/FL/Fl.H ****   allows the window system to take as long as necessary to retrieve
 905:fltk-1.3.4-1/FL/Fl.H ****   the paste buffer (or even to screw up completely) without complex
 906:fltk-1.3.4-1/FL/Fl.H ****   and error-prone synchronization code in FLTK.
 907:fltk-1.3.4-1/FL/Fl.H **** 
 908:fltk-1.3.4-1/FL/Fl.H ****    \par Platform details for image data:
 909:fltk-1.3.4-1/FL/Fl.H ****    \li Unix/Linux platform: Clipboard images in PNG or BMP formats are recognized. Requires linking
 910:fltk-1.3.4-1/FL/Fl.H ****    \li MSWindows platform: Both bitmap and vectorial (Enhanced metafile) data from clipboard
 911:fltk-1.3.4-1/FL/Fl.H ****    can be pasted as image data.
 912:fltk-1.3.4-1/FL/Fl.H ****    \li Mac OS X platform: Both bitmap (TIFF) and vectorial (PDF) data from clipboard
 913:fltk-1.3.4-1/FL/Fl.H ****    can be pasted as image data.
 914:fltk-1.3.4-1/FL/Fl.H ****    */
 915:fltk-1.3.4-1/FL/Fl.H **** #if FLTK_ABI_VERSION >= 10303 || defined(FL_DOXYGEN)
 916:fltk-1.3.4-1/FL/Fl.H ****   static void paste(Fl_Widget &receiver, int source, const char *type = Fl::clipboard_plain_text); 
 917:fltk-1.3.4-1/FL/Fl.H **** #else
 918:fltk-1.3.4-1/FL/Fl.H ****   static void paste(Fl_Widget &receiver, int source, const char *type);
 919:fltk-1.3.4-1/FL/Fl.H ****   static void paste(Fl_Widget &receiver, int source /*=0*/);
 920:fltk-1.3.4-1/FL/Fl.H **** #endif
 921:fltk-1.3.4-1/FL/Fl.H ****   /**
 922:fltk-1.3.4-1/FL/Fl.H ****   FLTK will call the registered callback whenever there is a change to the
 923:fltk-1.3.4-1/FL/Fl.H ****   selection buffer or the clipboard. The source argument indicates which
 924:fltk-1.3.4-1/FL/Fl.H ****   of the two has changed. Only changes by other applications are reported.
 925:fltk-1.3.4-1/FL/Fl.H **** 
 926:fltk-1.3.4-1/FL/Fl.H ****   Example:
 927:fltk-1.3.4-1/FL/Fl.H ****   \code
 928:fltk-1.3.4-1/FL/Fl.H ****     void clip_callback(int source, void *data) {
 929:fltk-1.3.4-1/FL/Fl.H ****         if ( source == 0 ) printf("CLIP CALLBACK: selection buffer changed\n");
 930:fltk-1.3.4-1/FL/Fl.H **** 	if ( source == 1 ) printf("CLIP CALLBACK: clipboard changed\n");
 931:fltk-1.3.4-1/FL/Fl.H ****     }
 932:fltk-1.3.4-1/FL/Fl.H ****     [..]
 933:fltk-1.3.4-1/FL/Fl.H ****     int main() {
 934:fltk-1.3.4-1/FL/Fl.H ****         [..]
 935:fltk-1.3.4-1/FL/Fl.H **** 	Fl::add_clipboard_notify(clip_callback);
 936:fltk-1.3.4-1/FL/Fl.H **** 	[..]
 937:fltk-1.3.4-1/FL/Fl.H ****     }
 938:fltk-1.3.4-1/FL/Fl.H ****   \endcode
 939:fltk-1.3.4-1/FL/Fl.H ****   \note Some systems require polling to monitor the clipboard and may
 940:fltk-1.3.4-1/FL/Fl.H ****   therefore have some delay in detecting changes.
 941:fltk-1.3.4-1/FL/Fl.H ****   */
 942:fltk-1.3.4-1/FL/Fl.H ****   static void add_clipboard_notify(Fl_Clipboard_Notify_Handler h, void *data = 0);
 943:fltk-1.3.4-1/FL/Fl.H ****   /**
 944:fltk-1.3.4-1/FL/Fl.H ****   Stop calling the specified callback when there are changes to the selection
 945:fltk-1.3.4-1/FL/Fl.H ****   buffer or the clipboard.
 946:fltk-1.3.4-1/FL/Fl.H ****   */
 947:fltk-1.3.4-1/FL/Fl.H ****   static void remove_clipboard_notify(Fl_Clipboard_Notify_Handler h);
 948:fltk-1.3.4-1/FL/Fl.H ****   /** Returns non 0 if the clipboard contains data matching \p type.
 949:fltk-1.3.4-1/FL/Fl.H ****    \p type can be Fl::clipboard_plain_text or Fl::clipboard_image.
 950:fltk-1.3.4-1/FL/Fl.H ****    */
 951:fltk-1.3.4-1/FL/Fl.H ****   static int clipboard_contains(const char *type);
 952:fltk-1.3.4-1/FL/Fl.H ****   /**  Denotes plain textual data
 953:fltk-1.3.4-1/FL/Fl.H ****    */
 954:fltk-1.3.4-1/FL/Fl.H ****   static char const * const clipboard_plain_text;
 955:fltk-1.3.4-1/FL/Fl.H ****   /**  Denotes image data
 956:fltk-1.3.4-1/FL/Fl.H ****    */
 957:fltk-1.3.4-1/FL/Fl.H ****   static char const * const clipboard_image;
 958:fltk-1.3.4-1/FL/Fl.H **** 
 959:fltk-1.3.4-1/FL/Fl.H ****   /**
 960:fltk-1.3.4-1/FL/Fl.H ****     Initiate a Drag And Drop operation. The selection buffer should be
 961:fltk-1.3.4-1/FL/Fl.H ****     filled with relevant data before calling this method. FLTK will
 962:fltk-1.3.4-1/FL/Fl.H ****     then initiate the system wide drag and drop handling. Dropped data
 963:fltk-1.3.4-1/FL/Fl.H ****     will be marked as <i>text</i>.
 964:fltk-1.3.4-1/FL/Fl.H ****    
 965:fltk-1.3.4-1/FL/Fl.H ****     Create a selection first using:
 966:fltk-1.3.4-1/FL/Fl.H ****     Fl::copy(const char *stuff, int len, 0)
 967:fltk-1.3.4-1/FL/Fl.H ****   */
 968:fltk-1.3.4-1/FL/Fl.H ****   static int dnd(); // platform dependent
 969:fltk-1.3.4-1/FL/Fl.H **** 
 970:fltk-1.3.4-1/FL/Fl.H ****   // These are for back-compatibility only:
 971:fltk-1.3.4-1/FL/Fl.H ****   /**  back-compatibility only: Gets the widget owning the current selection  
 972:fltk-1.3.4-1/FL/Fl.H ****        \see Fl_Widget* selection_owner(Fl_Widget*) */
 973:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* selection_owner() {return selection_owner_;}
 974:fltk-1.3.4-1/FL/Fl.H ****   static void selection_owner(Fl_Widget*);
 975:fltk-1.3.4-1/FL/Fl.H ****   static void selection(Fl_Widget &owner, const char*, int len);
 976:fltk-1.3.4-1/FL/Fl.H ****   static void paste(Fl_Widget &receiver);
 977:fltk-1.3.4-1/FL/Fl.H **** /** @} */
 978:fltk-1.3.4-1/FL/Fl.H **** /** \defgroup  fl_screen  Screen functions
 979:fltk-1.3.4-1/FL/Fl.H **** 	fl global screen functions declared in <FL/Fl.H>
 980:fltk-1.3.4-1/FL/Fl.H ****      @{ */
 981:fltk-1.3.4-1/FL/Fl.H ****   // screen size:
 982:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the leftmost x coordinate of the main screen work area. */
 983:fltk-1.3.4-1/FL/Fl.H ****   static int x(); // platform dependent
 984:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the topmost y coordinate of the main screen work area. */
 985:fltk-1.3.4-1/FL/Fl.H ****   static int y(); // platform dependent
 986:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the width in pixels of the main screen work area. */
 987:fltk-1.3.4-1/FL/Fl.H ****   static int w(); // platform dependent
 988:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the height in pixels of the main screen work area. */
 989:fltk-1.3.4-1/FL/Fl.H ****   static int h(); // platform dependent
 990:fltk-1.3.4-1/FL/Fl.H **** 
 991:fltk-1.3.4-1/FL/Fl.H ****   // multi-head support:
 992:fltk-1.3.4-1/FL/Fl.H ****   static int screen_count();
 993:fltk-1.3.4-1/FL/Fl.H ****   /** 
 994:fltk-1.3.4-1/FL/Fl.H ****       Gets the bounding box of a screen that contains the mouse pointer.
 995:fltk-1.3.4-1/FL/Fl.H ****       \param[out]  X,Y,W,H the corresponding screen bounding box
 996:fltk-1.3.4-1/FL/Fl.H ****       \see void screen_xywh(int &x, int &y, int &w, int &h, int mx, int my) 
 997:fltk-1.3.4-1/FL/Fl.H ****   */
 998:fltk-1.3.4-1/FL/Fl.H ****   static void screen_xywh(int &X, int &Y, int &W, int &H) {
 999:fltk-1.3.4-1/FL/Fl.H ****     int x, y;
1000:fltk-1.3.4-1/FL/Fl.H ****     Fl::get_mouse(x, y);
1001:fltk-1.3.4-1/FL/Fl.H ****     screen_xywh(X, Y, W, H, x, y);
1002:fltk-1.3.4-1/FL/Fl.H ****   }
1003:fltk-1.3.4-1/FL/Fl.H ****   static void screen_xywh(int &X, int &Y, int &W, int &H, int mx, int my);
1004:fltk-1.3.4-1/FL/Fl.H ****   static void screen_xywh(int &X, int &Y, int &W, int &H, int n); 
1005:fltk-1.3.4-1/FL/Fl.H ****   static void screen_xywh(int &X, int &Y, int &W, int &H, int mx, int my, int mw, int mh);
1006:fltk-1.3.4-1/FL/Fl.H ****   static int screen_num(int x, int y);
1007:fltk-1.3.4-1/FL/Fl.H ****   static int screen_num(int x, int y, int w, int h);
1008:fltk-1.3.4-1/FL/Fl.H ****   static void screen_dpi(float &h, float &v, int n=0);
1009:fltk-1.3.4-1/FL/Fl.H ****   static void screen_work_area(int &X, int &Y, int &W, int &H, int mx, int my);
1010:fltk-1.3.4-1/FL/Fl.H ****   static void screen_work_area(int &X, int &Y, int &W, int &H, int n);
1011:fltk-1.3.4-1/FL/Fl.H ****   /** 
1012:fltk-1.3.4-1/FL/Fl.H ****    Gets the bounding box of the work area of the screen that contains the mouse pointer.
1013:fltk-1.3.4-1/FL/Fl.H ****    \param[out]  X,Y,W,H the work area bounding box
1014:fltk-1.3.4-1/FL/Fl.H ****    \see void screen_work_area(int &x, int &y, int &w, int &h, int mx, int my) 
1015:fltk-1.3.4-1/FL/Fl.H ****    */
1016:fltk-1.3.4-1/FL/Fl.H ****   static void screen_work_area(int &X, int &Y, int &W, int &H) {
1017:fltk-1.3.4-1/FL/Fl.H ****     int x, y;
1018:fltk-1.3.4-1/FL/Fl.H ****     Fl::get_mouse(x, y);
1019:fltk-1.3.4-1/FL/Fl.H ****     screen_work_area(X, Y, W, H, x, y);
1020:fltk-1.3.4-1/FL/Fl.H ****   }
1021:fltk-1.3.4-1/FL/Fl.H **** 
1022:fltk-1.3.4-1/FL/Fl.H ****   /**   @} */
1023:fltk-1.3.4-1/FL/Fl.H **** 
1024:fltk-1.3.4-1/FL/Fl.H ****   /** \defgroup  fl_attributes  Color & Font functions
1025:fltk-1.3.4-1/FL/Fl.H **** 	fl global color, font functions.
1026:fltk-1.3.4-1/FL/Fl.H ****    These functions are declared in <FL/Fl.H> or <FL/fl_draw.H>. 
1027:fltk-1.3.4-1/FL/Fl.H ****      @{ */
1028:fltk-1.3.4-1/FL/Fl.H ****  
1029:fltk-1.3.4-1/FL/Fl.H ****   // color map:
1030:fltk-1.3.4-1/FL/Fl.H ****   static void	set_color(Fl_Color, uchar, uchar, uchar);
1031:fltk-1.3.4-1/FL/Fl.H ****   /**
1032:fltk-1.3.4-1/FL/Fl.H ****     Sets an entry in the fl_color index table. You can set it to any
1033:fltk-1.3.4-1/FL/Fl.H ****     8-bit RGB color. The color is not allocated until fl_color(i) is used.
1034:fltk-1.3.4-1/FL/Fl.H ****   */
1035:fltk-1.3.4-1/FL/Fl.H ****   static void	set_color(Fl_Color i, unsigned c); // platform dependent
1036:fltk-1.3.4-1/FL/Fl.H ****   static unsigned get_color(Fl_Color i);
1037:fltk-1.3.4-1/FL/Fl.H ****   static void	get_color(Fl_Color i, uchar &red, uchar &green, uchar &blue);
1038:fltk-1.3.4-1/FL/Fl.H ****   /**
1039:fltk-1.3.4-1/FL/Fl.H ****     Frees the specified color from the colormap, if applicable.
1040:fltk-1.3.4-1/FL/Fl.H ****     If overlay is non-zero then the color is freed from the
1041:fltk-1.3.4-1/FL/Fl.H ****     overlay colormap.
1042:fltk-1.3.4-1/FL/Fl.H ****   */
1043:fltk-1.3.4-1/FL/Fl.H ****   static void	free_color(Fl_Color i, int overlay = 0); // platform dependent
1044:fltk-1.3.4-1/FL/Fl.H **** 
1045:fltk-1.3.4-1/FL/Fl.H ****   // fonts:
1046:fltk-1.3.4-1/FL/Fl.H ****   static const char* get_font(Fl_Font);
1047:fltk-1.3.4-1/FL/Fl.H ****   /**
1048:fltk-1.3.4-1/FL/Fl.H ****     Get a human-readable string describing the family of this face.  This
1049:fltk-1.3.4-1/FL/Fl.H ****     is useful if you are presenting a choice to the user.  There is no
1050:fltk-1.3.4-1/FL/Fl.H ****     guarantee that each face has a different name.  The return value points
1051:fltk-1.3.4-1/FL/Fl.H ****     to a static buffer that is overwritten each call.
1052:fltk-1.3.4-1/FL/Fl.H ****     
1053:fltk-1.3.4-1/FL/Fl.H ****     The integer pointed to by \p attributes (if the pointer is not
1054:fltk-1.3.4-1/FL/Fl.H ****     zero) is set to zero, FL_BOLD or FL_ITALIC or 
1055:fltk-1.3.4-1/FL/Fl.H ****     FL_BOLD | FL_ITALIC.  To locate a "family" of fonts, search
1056:fltk-1.3.4-1/FL/Fl.H ****     forward and back for a set with non-zero attributes, these faces along
1057:fltk-1.3.4-1/FL/Fl.H ****     with the face with a zero attribute before them constitute a family.
1058:fltk-1.3.4-1/FL/Fl.H ****   */
1059:fltk-1.3.4-1/FL/Fl.H ****   static const char* get_font_name(Fl_Font, int* attributes = 0);
1060:fltk-1.3.4-1/FL/Fl.H ****   /**
1061:fltk-1.3.4-1/FL/Fl.H ****     Return an array of sizes in \p sizep.  The return value is the
1062:fltk-1.3.4-1/FL/Fl.H ****     length of this array.  The sizes are sorted from smallest to largest
1063:fltk-1.3.4-1/FL/Fl.H ****     and indicate what sizes can be given to fl_font() that will
1064:fltk-1.3.4-1/FL/Fl.H ****     be matched exactly (fl_font() will pick the closest size for
1065:fltk-1.3.4-1/FL/Fl.H ****     other sizes).  A zero in the first location of the array indicates a
1066:fltk-1.3.4-1/FL/Fl.H ****     scalable font, where any size works, although the array may list sizes
1067:fltk-1.3.4-1/FL/Fl.H ****     that work "better" than others.  Warning: the returned array
1068:fltk-1.3.4-1/FL/Fl.H ****     points at a static buffer that is overwritten each call.  Under X this
1069:fltk-1.3.4-1/FL/Fl.H ****     will open the display.
1070:fltk-1.3.4-1/FL/Fl.H ****   */
1071:fltk-1.3.4-1/FL/Fl.H ****   static int get_font_sizes(Fl_Font, int*& sizep);
1072:fltk-1.3.4-1/FL/Fl.H ****   static void set_font(Fl_Font, const char*);
1073:fltk-1.3.4-1/FL/Fl.H ****   static void set_font(Fl_Font, Fl_Font);
1074:fltk-1.3.4-1/FL/Fl.H ****   /**
1075:fltk-1.3.4-1/FL/Fl.H ****     FLTK will open the display, and add every fonts on the server to the
1076:fltk-1.3.4-1/FL/Fl.H ****     face table.  It will attempt to put "families" of faces together, so
1077:fltk-1.3.4-1/FL/Fl.H ****     that the normal one is first, followed by bold, italic, and bold
1078:fltk-1.3.4-1/FL/Fl.H ****     italic.
1079:fltk-1.3.4-1/FL/Fl.H ****     
1080:fltk-1.3.4-1/FL/Fl.H ****     The optional argument is a string to describe the set of fonts to
1081:fltk-1.3.4-1/FL/Fl.H ****     add.  Passing NULL will select only fonts that have the
1082:fltk-1.3.4-1/FL/Fl.H ****     ISO8859-1 character set (and are thus usable by normal text).  Passing
1083:fltk-1.3.4-1/FL/Fl.H ****     "-*" will select all fonts with any encoding as long as they have
1084:fltk-1.3.4-1/FL/Fl.H ****     normal X font names with dashes in them.  Passing "*" will list every
1085:fltk-1.3.4-1/FL/Fl.H ****     font that exists (on X this may produce some strange output).  Other
1086:fltk-1.3.4-1/FL/Fl.H ****     values may be useful but are system dependent.  With WIN32 NULL
1087:fltk-1.3.4-1/FL/Fl.H ****     selects fonts with ISO8859-1 encoding and non-NULL selects
1088:fltk-1.3.4-1/FL/Fl.H ****     all fonts.
1089:fltk-1.3.4-1/FL/Fl.H ****     
1090:fltk-1.3.4-1/FL/Fl.H ****     The return value is how many faces are in the table after this is done.
1091:fltk-1.3.4-1/FL/Fl.H ****   */
1092:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Font set_fonts(const char* = 0); // platform dependent
1093:fltk-1.3.4-1/FL/Fl.H **** 
1094:fltk-1.3.4-1/FL/Fl.H ****   /**   @} */
1095:fltk-1.3.4-1/FL/Fl.H ****  /** \defgroup  fl_drawings  Drawing functions
1096:fltk-1.3.4-1/FL/Fl.H ****   FLTK global graphics and GUI drawing functions.
1097:fltk-1.3.4-1/FL/Fl.H ****   These functions are declared in <FL/fl_draw.H>, 
1098:fltk-1.3.4-1/FL/Fl.H ****   and in <FL/x.H> for offscreen buffer-related ones.
1099:fltk-1.3.4-1/FL/Fl.H ****      @{ */
1100:fltk-1.3.4-1/FL/Fl.H ****   // <Hack to re-order the 'Drawing functions' group>
1101:fltk-1.3.4-1/FL/Fl.H ****  /** @} */
1102:fltk-1.3.4-1/FL/Fl.H **** 
1103:fltk-1.3.4-1/FL/Fl.H ****   // labeltypes:
1104:fltk-1.3.4-1/FL/Fl.H ****   static void set_labeltype(Fl_Labeltype,Fl_Label_Draw_F*,Fl_Label_Measure_F*);
1105:fltk-1.3.4-1/FL/Fl.H ****   /** Sets the functions to call to draw and measure a specific labeltype. */
1106:fltk-1.3.4-1/FL/Fl.H ****   static void set_labeltype(Fl_Labeltype, Fl_Labeltype from); // is it defined ?
1107:fltk-1.3.4-1/FL/Fl.H **** 
1108:fltk-1.3.4-1/FL/Fl.H ****   // boxtypes:
1109:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Box_Draw_F *get_boxtype(Fl_Boxtype);
1110:fltk-1.3.4-1/FL/Fl.H ****   static void set_boxtype(Fl_Boxtype, Fl_Box_Draw_F*,uchar,uchar,uchar,uchar);
1111:fltk-1.3.4-1/FL/Fl.H ****   static void set_boxtype(Fl_Boxtype, Fl_Boxtype from);
1112:fltk-1.3.4-1/FL/Fl.H ****   static int box_dx(Fl_Boxtype);
1113:fltk-1.3.4-1/FL/Fl.H ****   static int box_dy(Fl_Boxtype);
1114:fltk-1.3.4-1/FL/Fl.H ****   static int box_dw(Fl_Boxtype);
1115:fltk-1.3.4-1/FL/Fl.H ****   static int box_dh(Fl_Boxtype);
1116:fltk-1.3.4-1/FL/Fl.H **** 
1117:fltk-1.3.4-1/FL/Fl.H ****   static int draw_box_active();
1118:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Color box_color(Fl_Color);
1119:fltk-1.3.4-1/FL/Fl.H ****   static void set_box_color(Fl_Color);
1120:fltk-1.3.4-1/FL/Fl.H **** 
1121:fltk-1.3.4-1/FL/Fl.H ****   // back compatibility:
1122:fltk-1.3.4-1/FL/Fl.H ****   /** \addtogroup fl_windows 
1123:fltk-1.3.4-1/FL/Fl.H ****     @{ */
1124:fltk-1.3.4-1/FL/Fl.H ****   /** For back compatibility, sets the void Fl::fatal handler callback */
1125:fltk-1.3.4-1/FL/Fl.H ****   static void set_abort(Fl_Abort_Handler f) {fatal = f;}
1126:fltk-1.3.4-1/FL/Fl.H ****   static void (*atclose)(Fl_Window*,void*);
1127:fltk-1.3.4-1/FL/Fl.H ****   static void default_atclose(Fl_Window*,void*);
1128:fltk-1.3.4-1/FL/Fl.H ****   /** For back compatibility, sets the Fl::atclose handler callback. You
1129:fltk-1.3.4-1/FL/Fl.H ****       can now simply change the callback for the window instead.
1130:fltk-1.3.4-1/FL/Fl.H ****       \see Fl_Window::callback(Fl_Callback*) */
1131:fltk-1.3.4-1/FL/Fl.H ****   static void set_atclose(Fl_Atclose_Handler f) {atclose = f;}
1132:fltk-1.3.4-1/FL/Fl.H ****   /**   @} */
1133:fltk-1.3.4-1/FL/Fl.H **** 
1134:fltk-1.3.4-1/FL/Fl.H ****   /** \addtogroup fl_events 
1135:fltk-1.3.4-1/FL/Fl.H ****     @{ */
1136:fltk-1.3.4-1/FL/Fl.H ****   /** Returns non-zero if the Shift key is pressed. */
1137:fltk-1.3.4-1/FL/Fl.H ****   static int event_shift() {return e_state&FL_SHIFT;}
1138:fltk-1.3.4-1/FL/Fl.H ****   /** Returns non-zero if the Control key is pressed. */
1139:fltk-1.3.4-1/FL/Fl.H ****   static int event_ctrl() {return e_state&FL_CTRL;}
1140:fltk-1.3.4-1/FL/Fl.H ****   /** Returns non-zero if the FL_COMMAND key is pressed, either FL_CTRL or on OSX FL_META. */
1141:fltk-1.3.4-1/FL/Fl.H ****   static int event_command() {return e_state&FL_COMMAND;}
1142:fltk-1.3.4-1/FL/Fl.H ****   /** Returns non-zero if the Alt key is pressed. */
1143:fltk-1.3.4-1/FL/Fl.H ****   static int event_alt() {return e_state&FL_ALT;}
1144:fltk-1.3.4-1/FL/Fl.H ****   /**
1145:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse buttons state bits; if non-zero, then at least one
1146:fltk-1.3.4-1/FL/Fl.H ****     button is pressed now.  This function returns the button state at the 
1147:fltk-1.3.4-1/FL/Fl.H ****     time of the event. During an FL_RELEASE event, the state 
1148:fltk-1.3.4-1/FL/Fl.H ****     of the released button will be 0. To find out, which button 
1149:fltk-1.3.4-1/FL/Fl.H ****     caused an FL_RELEASE event, you can use Fl::event_button() instead.
1150:fltk-1.3.4-1/FL/Fl.H ****     \return a bit mask value like { [FL_BUTTON1] | [FL_BUTTON2] | [FL_BUTTON3] }
1151:fltk-1.3.4-1/FL/Fl.H ****   */
1152:fltk-1.3.4-1/FL/Fl.H ****   static int event_buttons() {return e_state&0x7f000000;}
1153:fltk-1.3.4-1/FL/Fl.H ****   /**
1154:fltk-1.3.4-1/FL/Fl.H ****     Returns non-zero if mouse button 1 is currently held down.
1155:fltk-1.3.4-1/FL/Fl.H ****     For more details, see Fl::event_buttons().
1156:fltk-1.3.4-1/FL/Fl.H ****   */
1157:fltk-1.3.4-1/FL/Fl.H ****   static int event_button1() {return e_state&FL_BUTTON1;}
1158:fltk-1.3.4-1/FL/Fl.H ****   /**
1159:fltk-1.3.4-1/FL/Fl.H ****     Returns non-zero if button 2 is currently held down.
1160:fltk-1.3.4-1/FL/Fl.H ****     For more details, see Fl::event_buttons().
1161:fltk-1.3.4-1/FL/Fl.H ****   */
1162:fltk-1.3.4-1/FL/Fl.H ****   static int event_button2() {return e_state&FL_BUTTON2;}
1163:fltk-1.3.4-1/FL/Fl.H ****   /**
1164:fltk-1.3.4-1/FL/Fl.H ****     Returns non-zero if button 3 is currently held down.
1165:fltk-1.3.4-1/FL/Fl.H ****     For more details, see Fl::event_buttons().
1166:fltk-1.3.4-1/FL/Fl.H ****   */
1167:fltk-1.3.4-1/FL/Fl.H ****   static int event_button3() {return e_state&FL_BUTTON3;}
1168:fltk-1.3.4-1/FL/Fl.H ****   /**   @} */
1169:fltk-1.3.4-1/FL/Fl.H **** 
1170:fltk-1.3.4-1/FL/Fl.H ****   /**
1171:fltk-1.3.4-1/FL/Fl.H ****     Sets an idle callback.
1172:fltk-1.3.4-1/FL/Fl.H **** 
1173:fltk-1.3.4-1/FL/Fl.H ****     \deprecated This method is obsolete - use the add_idle() method instead.
1174:fltk-1.3.4-1/FL/Fl.H ****   */
1175:fltk-1.3.4-1/FL/Fl.H ****   static void set_idle(Fl_Old_Idle_Handler cb) {idle = cb;}
1176:fltk-1.3.4-1/FL/Fl.H ****   /** See grab(Fl_Window*) */
1177:fltk-1.3.4-1/FL/Fl.H ****   static void grab(Fl_Window& win) {grab(&win);}
1178:fltk-1.3.4-1/FL/Fl.H ****   /** Releases the current grabbed window, equals grab(0).
1179:fltk-1.3.4-1/FL/Fl.H ****   \deprecated Use Fl::grab(0) instead.
1180:fltk-1.3.4-1/FL/Fl.H ****   \see grab(Fl_Window*) */
1181:fltk-1.3.4-1/FL/Fl.H ****   static void release() {grab(0);}
1182:fltk-1.3.4-1/FL/Fl.H **** 
1183:fltk-1.3.4-1/FL/Fl.H ****   // Visible focus methods...
1184:fltk-1.3.4-1/FL/Fl.H ****   /**
1185:fltk-1.3.4-1/FL/Fl.H ****     Gets or sets the visible keyboard focus on buttons and other
1186:fltk-1.3.4-1/FL/Fl.H ****     non-text widgets. The default mode is to enable keyboard focus
1187:fltk-1.3.4-1/FL/Fl.H ****     for all widgets.
1188:fltk-1.3.4-1/FL/Fl.H ****   */
1189:fltk-1.3.4-1/FL/Fl.H ****   static void visible_focus(int v) { option(OPTION_VISIBLE_FOCUS, (v!=0)); }
 418              		.loc 3 1189 0
 419 0200 BE010000 		movl	$1, %esi
 419      00
 420 0205 BF010000 		movl	$1, %edi
 420      00
 421              	.LBE66:
 422              	.LBE65:
 423              		.loc 1 151 0
 424 020a 41BD0100 		movl	$1, %r13d
 424      0000
 425              	.LBB68:
 426              	.LBB67:
 427              		.loc 3 1189 0
 428 0210 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionEb
 428      00
 429              	.LVL41:
 430              	.LBE67:
 431              	.LBE68:
 432              		.loc 1 150 0
 433 0215 83450001 		addl	$1, 0(%rbp)
 434              		.loc 1 151 0
 435 0219 E92FFEFF 		jmp	.L18
 435      FF
 436              	.L61:
 437              	.LVL42:
 438              	.LBB69:
 439              	.LBB70:
 440              		.loc 3 1189 0
 441 021e 31F6     		xorl	%esi, %esi
 442 0220 BF010000 		movl	$1, %edi
 442      00
 443              	.LBE70:
 444              	.LBE69:
 445              		.loc 1 155 0
 446 0225 41BD0100 		movl	$1, %r13d
 446      0000
 447              	.LBB72:
 448              	.LBB71:
 449              		.loc 3 1189 0
 450 022b E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionEb
 450      00
 451              	.LVL43:
 452              	.LBE71:
 453              	.LBE72:
 454              		.loc 1 154 0
 455 0230 83450001 		addl	$1, 0(%rbp)
 456              		.loc 1 155 0
 457 0234 E914FEFF 		jmp	.L18
 457      FF
 458              	.L62:
 459              	.LVL44:
 460              	.LBB73:
 461              	.LBB74:
1190:fltk-1.3.4-1/FL/Fl.H ****   /**
1191:fltk-1.3.4-1/FL/Fl.H ****     Gets or sets the visible keyboard focus on buttons and other
1192:fltk-1.3.4-1/FL/Fl.H ****     non-text widgets. The default mode is to enable keyboard focus
1193:fltk-1.3.4-1/FL/Fl.H ****     for all widgets.
1194:fltk-1.3.4-1/FL/Fl.H ****   */
1195:fltk-1.3.4-1/FL/Fl.H ****   static int  visible_focus() { return option(OPTION_VISIBLE_FOCUS); }
1196:fltk-1.3.4-1/FL/Fl.H **** 
1197:fltk-1.3.4-1/FL/Fl.H ****   // Drag-n-drop text operation methods...
1198:fltk-1.3.4-1/FL/Fl.H ****   /**
1199:fltk-1.3.4-1/FL/Fl.H ****     Gets or sets whether drag and drop text operations are supported.
1200:fltk-1.3.4-1/FL/Fl.H ****     This specifically affects whether selected text can
1201:fltk-1.3.4-1/FL/Fl.H ****     be dragged from text fields or dragged within a text field as a
1202:fltk-1.3.4-1/FL/Fl.H ****     cut/paste shortcut.
1203:fltk-1.3.4-1/FL/Fl.H ****   */
1204:fltk-1.3.4-1/FL/Fl.H ****   static void dnd_text_ops(int v) { option(OPTION_DND_TEXT, (v!=0)); }
 462              		.loc 3 1204 0
 463 0239 BE010000 		movl	$1, %esi
 463      00
 464 023e BF020000 		movl	$2, %edi
 464      00
 465              	.LBE74:
 466              	.LBE73:
 467              		.loc 1 159 0
 468 0243 41BD0100 		movl	$1, %r13d
 468      0000
 469              	.LBB76:
 470              	.LBB75:
 471              		.loc 3 1204 0
 472 0249 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionEb
 472      00
 473              	.LVL45:
 474              	.LBE75:
 475              	.LBE76:
 476              		.loc 1 158 0
 477 024e 83450001 		addl	$1, 0(%rbp)
 478              		.loc 1 159 0
 479 0252 E9F6FDFF 		jmp	.L18
 479      FF
 480              	.L63:
 481              	.LVL46:
 482              	.LBB77:
 483              	.LBB78:
 484              		.loc 3 1204 0
 485 0257 31F6     		xorl	%esi, %esi
 486 0259 BF020000 		movl	$2, %edi
 486      00
 487              	.LBE78:
 488              	.LBE77:
 489              		.loc 1 163 0
 490 025e 41BD0100 		movl	$1, %r13d
 490      0000
 491              	.LBB80:
 492              	.LBB79:
 493              		.loc 3 1204 0
 494 0264 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionEb
 494      00
 495              	.LVL47:
 496              	.LBE79:
 497              	.LBE80:
 498              		.loc 1 162 0
 499 0269 83450001 		addl	$1, 0(%rbp)
 500              		.loc 1 163 0
 501 026d E9DBFDFF 		jmp	.L18
 501      FF
 502              	.L64:
 503              	.LVL48:
 504              	.LBB81:
 505              	.LBB82:
 506              		.file 4 "fltk-1.3.4-1/FL/Fl_Tooltip.H"
   1:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
   2:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // "$Id: Fl_Tooltip.H 9706 2012-11-06 20:46:14Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
   4:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // Tooltip header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
   6:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // Copyright 1998-2011 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
   8:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
  12:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
  14:fltk-1.3.4-1/FL/Fl_Tooltip.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
  16:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Tooltip.H **** //
  18:fltk-1.3.4-1/FL/Fl_Tooltip.H **** 
  19:fltk-1.3.4-1/FL/Fl_Tooltip.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Tooltip.H ****    Fl_Tooltip widget . */
  21:fltk-1.3.4-1/FL/Fl_Tooltip.H **** 
  22:fltk-1.3.4-1/FL/Fl_Tooltip.H **** #ifndef Fl_Tooltip_H
  23:fltk-1.3.4-1/FL/Fl_Tooltip.H **** #define Fl_Tooltip_H
  24:fltk-1.3.4-1/FL/Fl_Tooltip.H **** 
  25:fltk-1.3.4-1/FL/Fl_Tooltip.H **** #include <FL/Fl.H>
  26:fltk-1.3.4-1/FL/Fl_Tooltip.H **** #include <FL/Fl_Widget.H>
  27:fltk-1.3.4-1/FL/Fl_Tooltip.H **** 
  28:fltk-1.3.4-1/FL/Fl_Tooltip.H **** /**
  29:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   The Fl_Tooltip class provides tooltip support for
  30:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   all FLTK widgets. It contains only static methods.
  31:fltk-1.3.4-1/FL/Fl_Tooltip.H **** 
  32:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   \image html tooltip-options.png "Fl_Tooltip Options"
  33:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   \image latex src/tooltip-options.png "Fl_Tooltip Options" width=6cm
  34:fltk-1.3.4-1/FL/Fl_Tooltip.H **** 
  35:fltk-1.3.4-1/FL/Fl_Tooltip.H **** */
  36:fltk-1.3.4-1/FL/Fl_Tooltip.H **** class FL_EXPORT Fl_Tooltip {
  37:fltk-1.3.4-1/FL/Fl_Tooltip.H **** public:
  38:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /**    Gets the tooltip delay. The default delay is 1.0 seconds.  */
  39:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static float delay() { return delay_; }
  40:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /**    Sets the tooltip delay. The default delay is 1.0 seconds.  */
  41:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static void delay(float f) { delay_ = f; }
  42:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /**
  43:fltk-1.3.4-1/FL/Fl_Tooltip.H ****     Gets the tooltip hover delay, the delay between tooltips.
  44:fltk-1.3.4-1/FL/Fl_Tooltip.H ****     The default delay is 0.2 seconds.
  45:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   */
  46:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static float hoverdelay() { return hoverdelay_; }
  47:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /**
  48:fltk-1.3.4-1/FL/Fl_Tooltip.H ****     Sets the tooltip hover delay, the delay between tooltips.
  49:fltk-1.3.4-1/FL/Fl_Tooltip.H ****     The default delay is 0.2 seconds.
  50:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   */
  51:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static void hoverdelay(float f) { hoverdelay_ = f; }
  52:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /**    Returns non-zero if tooltips are enabled.  */
  53:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static int enabled() { return Fl::option(Fl::OPTION_SHOW_TOOLTIPS); }
  54:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   /**    Enables tooltips on all widgets (or disables if <i>b</i> is false).  */
  55:fltk-1.3.4-1/FL/Fl_Tooltip.H ****   static void enable(int b = 1) { Fl::option(Fl::OPTION_SHOW_TOOLTIPS, (b!=0));}
 507              		.loc 4 55 0
 508 0272 BE010000 		movl	$1, %esi
 508      00
 509 0277 BF030000 		movl	$3, %edi
 509      00
 510              	.LBE82:
 511              	.LBE81:
 512              		.loc 1 167 0
 513 027c 41BD0100 		movl	$1, %r13d
 513      0000
 514              	.LBB84:
 515              	.LBB83:
 516              		.loc 4 55 0
 517 0282 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionEb
 517      00
 518              	.LVL49:
 519              	.LBE83:
 520              	.LBE84:
 521              		.loc 1 166 0
 522 0287 83450001 		addl	$1, 0(%rbp)
 523              		.loc 1 167 0
 524 028b E9BDFDFF 		jmp	.L18
 524      FF
 525              	.LVL50:
 526              	.L29:
 527              	.LBB85:
 528              		.loc 1 198 0
 529 0290 488B7C24 		movq	8(%rsp), %rdi
 529      08
 530 0295 BA020000 		movl	$2, %edx
 530      00
 531 029a BE000000 		movl	$.LC9, %esi
 531      00
 532 029f E8000000 		call	_ZL8fl_matchPKcS0_i
 532      00
 533              	.LVL51:
 534 02a4 85C0     		testl	%eax, %eax
 535 02a6 742D     		je	.L32
 536              		.loc 1 199 0
 537 02a8 4C89F7   		movq	%r14, %rdi
 538 02ab E8000000 		call	_ZN2Fl7displayEPKc
 538      00
 539              	.LVL52:
 540 02b0 E938FFFF 		jmp	.L31
 540      FF
 541              	.LVL53:
 542              	.L65:
 543              	.LBE85:
 544              	.LBB86:
 545              	.LBB87:
 546              	.LBB88:
 547              		.loc 4 55 0
 548 02b5 31F6     		xorl	%esi, %esi
 549 02b7 BF030000 		movl	$3, %edi
 549      00
 550              	.LBE88:
 551              	.LBE87:
 552              	.LBE86:
 553              		.loc 1 171 0
 554 02bc 41BD0100 		movl	$1, %r13d
 554      0000
 555              	.LBB91:
 556              	.LBB90:
 557              	.LBB89:
 558              		.loc 4 55 0
 559 02c2 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionEb
 559      00
 560              	.LVL54:
 561              	.LBE89:
 562              	.LBE90:
 563              	.LBE91:
 564              		.loc 1 170 0
 565 02c7 83450001 		addl	$1, 0(%rbp)
 566              		.loc 1 171 0
 567 02cb E97DFDFF 		jmp	.L18
 567      FF
 568              	.LVL55:
 569              	.L59:
 570              		.loc 1 224 0
 571 02d0 E8000000 		call	__stack_chk_fail
 571      00
 572              	.LVL56:
 573              	.L32:
 574              	.LBB92:
 575              		.loc 1 202 0
 576 02d5 488B7C24 		movq	8(%rsp), %rdi
 576      08
 577 02da BA020000 		movl	$2, %edx
 577      00
 578 02df BE000000 		movl	$.LC10, %esi
 578      00
 579 02e4 E8000000 		call	_ZL8fl_matchPKcS0_i
 579      00
 580              	.LVL57:
 581 02e9 85C0     		testl	%eax, %eax
 582 02eb 740C     		je	.L33
 583              		.loc 1 203 0
 584 02ed 4C893500 		movq	%r14, _ZL5title(%rip)
 584      000000
 585 02f4 E9F4FEFF 		jmp	.L31
 585      FF
 586              	.L33:
 587              		.loc 1 205 0
 588 02f9 488B7C24 		movq	8(%rsp), %rdi
 588      08
 589 02fe BA020000 		movl	$2, %edx
 589      00
 590 0303 BE000000 		movl	$.LC11, %esi
 590      00
 591 0308 E8000000 		call	_ZL8fl_matchPKcS0_i
 591      00
 592              	.LVL58:
 593 030d 85C0     		testl	%eax, %eax
 594 030f 740C     		je	.L34
 595              		.loc 1 206 0
 596 0311 4C893500 		movq	%r14, _ZL4name(%rip)
 596      000000
 597 0318 E9D0FEFF 		jmp	.L31
 597      FF
 598              	.L34:
 599              		.loc 1 208 0
 600 031d 488B7C24 		movq	8(%rsp), %rdi
 600      08
 601 0322 BA030000 		movl	$3, %edx
 601      00
 602 0327 BE000000 		movl	$.LC12, %esi
 602      00
 603 032c E8000000 		call	_ZL8fl_matchPKcS0_i
 603      00
 604              	.LVL59:
 605 0331 85C0     		testl	%eax, %eax
 606 0333 740C     		je	.L66
 607              	.L35:
 608              		.loc 1 209 0
 609 0335 4C893500 		movq	%r14, fl_bg2(%rip)
 609      000000
 610 033c E9ACFEFF 		jmp	.L31
 610      FF
 611              	.L66:
 612              		.loc 1 208 0 discriminator 2
 613 0341 488B7C24 		movq	8(%rsp), %rdi
 613      08
 614 0346 BA0B0000 		movl	$11, %edx
 614      00
 615 034b BE000000 		movl	$.LC13, %esi
 615      00
 616 0350 E8000000 		call	_ZL8fl_matchPKcS0_i
 616      00
 617              	.LVL60:
 618 0355 85C0     		testl	%eax, %eax
 619 0357 75DC     		jne	.L35
 620              		.loc 1 211 0
 621 0359 488B7C24 		movq	8(%rsp), %rdi
 621      08
 622 035e BA020000 		movl	$2, %edx
 622      00
 623 0363 BE000000 		movl	$.LC16, %esi
 623      00
 624 0368 E8000000 		call	_ZL8fl_matchPKcS0_i
 624      00
 625              	.LVL61:
 626 036d 85C0     		testl	%eax, %eax
 627 036f 740C     		je	.L41
 628              	.L37:
 629              		.loc 1 212 0
 630 0371 4C893500 		movq	%r14, fl_bg(%rip)
 630      000000
 631 0378 E970FEFF 		jmp	.L31
 631      FF
 632              	.L41:
 633              		.loc 1 211 0 discriminator 2
 634 037d 488B7C24 		movq	8(%rsp), %rdi
 634      08
 635 0382 BA0A0000 		movl	$10, %edx
 635      00
 636 0387 BE000000 		movl	$.LC14, %esi
 636      00
 637 038c E8000000 		call	_ZL8fl_matchPKcS0_i
 637      00
 638              	.LVL62:
 639 0391 85C0     		testl	%eax, %eax
 640 0393 75DC     		jne	.L37
 641              		.loc 1 214 0
 642 0395 488B7C24 		movq	8(%rsp), %rdi
 642      08
 643 039a BA020000 		movl	$2, %edx
 643      00
 644 039f BE000000 		movl	$.LC17, %esi
 644      00
 645 03a4 E8000000 		call	_ZL8fl_matchPKcS0_i
 645      00
 646              	.LVL63:
 647 03a9 85C0     		testl	%eax, %eax
 648 03ab 740C     		je	.L67
 649              	.L39:
 650              		.loc 1 215 0
 651 03ad 4C893500 		movq	%r14, fl_fg(%rip)
 651      000000
 652 03b4 E934FEFF 		jmp	.L31
 652      FF
 653              	.L67:
 654              		.loc 1 214 0 discriminator 2
 655 03b9 488B7C24 		movq	8(%rsp), %rdi
 655      08
 656 03be BA0A0000 		movl	$10, %edx
 656      00
 657 03c3 BE000000 		movl	$.LC15, %esi
 657      00
 658 03c8 E8000000 		call	_ZL8fl_matchPKcS0_i
 658      00
 659              	.LVL64:
 660 03cd 85C0     		testl	%eax, %eax
 661 03cf 75DC     		jne	.L39
 662              		.loc 1 217 0
 663 03d1 488B7C24 		movq	8(%rsp), %rdi
 663      08
 664 03d6 BA010000 		movl	$1, %edx
 664      00
 665 03db BE000000 		movl	$.LC18, %esi
 665      00
 666 03e0 E8000000 		call	_ZL8fl_matchPKcS0_i
 666      00
 667              	.LVL65:
 668 03e5 85C0     		testl	%eax, %eax
 669 03e7 4189C5   		movl	%eax, %r13d
 670 03ea 0F845DFC 		je	.L18
 670      FFFF
 671              		.loc 1 218 0
 672 03f0 4C89F7   		movq	%r14, %rdi
 673 03f3 E8000000 		call	_ZN2Fl6schemeEPKc
 673      00
 674              	.LVL66:
 675 03f8 E9F0FDFF 		jmp	.L31
 675      FF
 676              	.LBE92:
 677              		.cfi_endproc
 678              	.LFE506:
 680              		.section	.text.unlikely._ZN2Fl3argEiPPcRi
 681              	.LCOLDE19:
 682              		.section	.text._ZN2Fl3argEiPPcRi
 683              	.LHOTE19:
 684              		.section	.text.unlikely._ZN2Fl4argsEiPPcRiPFiiS1_S2_E,"ax",@progbits
 685              		.align 2
 686              	.LCOLDB20:
 687              		.section	.text._ZN2Fl4argsEiPPcRiPFiiS1_S2_E,"ax",@progbits
 688              	.LHOTB20:
 689              		.align 2
 690              		.p2align 4,,15
 691              		.globl	_ZN2Fl4argsEiPPcRiPFiiS1_S2_E
 693              	_ZN2Fl4argsEiPPcRiPFiiS1_S2_E:
 694              	.LFB507:
 695              		.loc 1 282 0
 696              		.cfi_startproc
 697              	.LVL67:
 698 0000 4155     		pushq	%r13
 699              		.cfi_def_cfa_offset 16
 700              		.cfi_offset 13, -16
 701 0002 4154     		pushq	%r12
 702              		.cfi_def_cfa_offset 24
 703              		.cfi_offset 12, -24
 704 0004 4989F5   		movq	%rsi, %r13
 705 0007 55       		pushq	%rbp
 706              		.cfi_def_cfa_offset 32
 707              		.cfi_offset 6, -32
 708 0008 53       		pushq	%rbx
 709              		.cfi_def_cfa_offset 40
 710              		.cfi_offset 3, -40
 711 0009 4889D5   		movq	%rdx, %rbp
 712 000c 89FB     		movl	%edi, %ebx
 713 000e 4989CC   		movq	%rcx, %r12
 714              		.loc 1 284 0
 715 0011 B8010000 		movl	$1, %eax
 715      00
 716              		.loc 1 282 0
 717 0016 4883EC08 		subq	$8, %rsp
 718              		.cfi_def_cfa_offset 48
 719              		.loc 1 283 0
 720 001a C6050000 		movb	$1, _ZL10arg_called(%rip)
 720      000001
 721              		.loc 1 284 0
 722 0021 C7020100 		movl	$1, (%rdx)
 722      0000
 723 0027 EB2F     		jmp	.L71
 724              	.LVL68:
 725 0029 0F1F8000 		.p2align 4,,10
 725      000000
 726              		.p2align 3
 727              	.L83:
 728              		.loc 1 286 0
 729 0030 4D85E4   		testq	%r12, %r12
 730 0033 740F     		je	.L70
 731              		.loc 1 286 0 is_stmt 0 discriminator 1
 732 0035 4889EA   		movq	%rbp, %rdx
 733 0038 4C89EE   		movq	%r13, %rsi
 734 003b 89DF     		movl	%ebx, %edi
 735 003d 41FFD4   		call	*%r12
 736              	.LVL69:
 737 0040 85C0     		testl	%eax, %eax
 738 0042 7511     		jne	.L82
 739              	.L70:
 740              		.loc 1 287 0 is_stmt 1
 741 0044 4889EA   		movq	%rbp, %rdx
 742 0047 4C89EE   		movq	%r13, %rsi
 743 004a 89DF     		movl	%ebx, %edi
 744 004c E8000000 		call	_ZN2Fl3argEiPPcRi
 744      00
 745              	.LVL70:
 746 0051 85C0     		testl	%eax, %eax
 747 0053 741B     		je	.L72
 748              	.L82:
 749 0055 8B4500   		movl	0(%rbp), %eax
 750              	.L71:
 751              		.loc 1 285 0
 752 0058 39D8     		cmpl	%ebx, %eax
 753 005a 7CD4     		jl	.L83
 754              	.L76:
 755              		.loc 1 290 0
 756 005c 4883C408 		addq	$8, %rsp
 757              		.cfi_remember_state
 758              		.cfi_def_cfa_offset 40
 759 0060 5B       		popq	%rbx
 760              		.cfi_def_cfa_offset 32
 761              	.LVL71:
 762 0061 5D       		popq	%rbp
 763              		.cfi_def_cfa_offset 24
 764              	.LVL72:
 765 0062 415C     		popq	%r12
 766              		.cfi_def_cfa_offset 16
 767              	.LVL73:
 768 0064 415D     		popq	%r13
 769              		.cfi_def_cfa_offset 8
 770              	.LVL74:
 771 0066 C3       		ret
 772              	.LVL75:
 773 0067 660F1F84 		.p2align 4,,10
 773      00000000 
 773      00
 774              		.p2align 3
 775              	.L72:
 776              		.cfi_restore_state
 777              	.LBB95:
 778              	.LBB96:
 779              		.loc 1 287 0
 780 0070 803D0000 		cmpb	$0, _ZL8return_i(%rip)
 780      000000
 781 0077 74E3     		je	.L76
 782 0079 8B4500   		movl	0(%rbp), %eax
 783 007c EBDE     		jmp	.L76
 784              	.LBE96:
 785              	.LBE95:
 786              		.cfi_endproc
 787              	.LFE507:
 789              		.section	.text.unlikely._ZN2Fl4argsEiPPcRiPFiiS1_S2_E
 790              	.LCOLDE20:
 791              		.section	.text._ZN2Fl4argsEiPPcRiPFiiS1_S2_E
 792              	.LHOTE20:
 793              		.section	.rodata.str1.8,"aMS",@progbits,1
 794              		.align 8
 795              	.LC21:
 796 0000 6F707469 		.string	"options are:\n -bg2 color\n -bg color\n -di[splay] host:n.n\n -dn[d]\n -fg color\n -g[eom
 796      6F6E7320 
 796      6172653A 
 796      0A202D62 
 796      67322063 
 797              		.section	.text.unlikely._ZN2Fl4argsEiPPc,"ax",@progbits
 798              		.align 2
 799              	.LCOLDB22:
 800              		.section	.text._ZN2Fl4argsEiPPc,"ax",@progbits
 801              	.LHOTB22:
 802              		.align 2
 803              		.p2align 4,,15
 804              		.globl	_ZN2Fl4argsEiPPc
 806              	_ZN2Fl4argsEiPPc:
 807              	.LFB509:
 808              		.loc 1 401 0
 809              		.cfi_startproc
 810              	.LVL76:
 811 0000 53       		pushq	%rbx
 812              		.cfi_def_cfa_offset 16
 813              		.cfi_offset 3, -16
 814              		.loc 1 402 0
 815 0001 31C9     		xorl	%ecx, %ecx
 816              		.loc 1 401 0
 817 0003 89FB     		movl	%edi, %ebx
 818 0005 4883EC10 		subq	$16, %rsp
 819              		.cfi_def_cfa_offset 32
 820              		.loc 1 402 0
 821 0009 488D5424 		leaq	4(%rsp), %rdx
 821      04
 822              		.loc 1 401 0
 823 000e 64488B04 		movq	%fs:40, %rax
 823      25280000 
 823      00
 824 0017 48894424 		movq	%rax, 8(%rsp)
 824      08
 825 001c 31C0     		xorl	%eax, %eax
 826              		.loc 1 402 0
 827 001e E8000000 		call	_ZN2Fl4argsEiPPcRiPFiiS1_S2_E
 827      00
 828              	.LVL77:
 829 0023 39C3     		cmpl	%eax, %ebx
 830 0025 7E0D     		jle	.L84
 831              	.LVL78:
 832              	.LBB99:
 833              	.LBB100:
 834 0027 BF000000 		movl	$.LC21, %edi
 834      00
 835 002c 31C0     		xorl	%eax, %eax
 836 002e FF150000 		call	*_ZN2Fl5errorE(%rip)
 836      0000
 837              	.LVL79:
 838              	.L84:
 839              	.LBE100:
 840              	.LBE99:
 841              		.loc 1 403 0
 842 0034 488B4424 		movq	8(%rsp), %rax
 842      08
 843 0039 64483304 		xorq	%fs:40, %rax
 843      25280000 
 843      00
 844 0042 7506     		jne	.L88
 845 0044 4883C410 		addq	$16, %rsp
 846              		.cfi_remember_state
 847              		.cfi_def_cfa_offset 16
 848 0048 5B       		popq	%rbx
 849              		.cfi_def_cfa_offset 8
 850              	.LVL80:
 851 0049 C3       		ret
 852              	.LVL81:
 853              	.L88:
 854              		.cfi_restore_state
 855 004a E8000000 		call	__stack_chk_fail
 855      00
 856              	.LVL82:
 857              		.cfi_endproc
 858              	.LFE509:
 860              		.section	.text.unlikely._ZN2Fl4argsEiPPc
 861              	.LCOLDE22:
 862              		.section	.text._ZN2Fl4argsEiPPc
 863              	.LHOTE22:
 864              		.section	.rodata.str1.1
 865              	.LC23:
 866 007e 666C746B 		.string	"fltk"
 866      00
 867              	.LC24:
 868 0083 646E6454 		.string	"dndTextOps"
 868      6578744F 
 868      707300
 869              	.LC25:
 870 008e 74727565 		.string	"true"
 870      00
 871              	.LC26:
 872 0093 6F6E00   		.string	"on"
 873              	.LC27:
 874 0096 79657300 		.string	"yes"
 875              	.LC28:
 876 009a 76697369 		.string	"visibleFocus"
 876      626C6546 
 876      6F637573 
 876      00
 877              		.section	.text.unlikely._ZN9Fl_Window4showEiPPc,"ax",@progbits
 878              		.align 2
 879              	.LCOLDB29:
 880              		.section	.text._ZN9Fl_Window4showEiPPc,"ax",@progbits
 881              	.LHOTB29:
 882              		.align 2
 883              		.p2align 4,,15
 884              		.globl	_ZN9Fl_Window4showEiPPc
 886              	_ZN9Fl_Window4showEiPPc:
 887              	.LFB508:
 888              		.loc 1 293 0
 889              		.cfi_startproc
 890              	.LVL83:
 891 0000 4157     		pushq	%r15
 892              		.cfi_def_cfa_offset 16
 893              		.cfi_offset 15, -16
 894 0002 4156     		pushq	%r14
 895              		.cfi_def_cfa_offset 24
 896              		.cfi_offset 14, -24
 897 0004 4155     		pushq	%r13
 898              		.cfi_def_cfa_offset 32
 899              		.cfi_offset 13, -32
 900 0006 4154     		pushq	%r12
 901              		.cfi_def_cfa_offset 40
 902              		.cfi_offset 12, -40
 903 0008 4989D5   		movq	%rdx, %r13
 904 000b 55       		pushq	%rbp
 905              		.cfi_def_cfa_offset 48
 906              		.cfi_offset 6, -48
 907 000c 53       		pushq	%rbx
 908              		.cfi_def_cfa_offset 56
 909              		.cfi_offset 3, -56
 910 000d 4889FD   		movq	%rdi, %rbp
 911 0010 4189F4   		movl	%esi, %r12d
 912 0013 4883EC28 		subq	$40, %rsp
 913              		.cfi_def_cfa_offset 96
 914              		.loc 1 293 0
 915 0017 64488B04 		movq	%fs:40, %rax
 915      25280000 
 915      00
 916 0020 48894424 		movq	%rax, 24(%rsp)
 916      18
 917 0025 31C0     		xorl	%eax, %eax
 918              		.loc 1 294 0
 919 0027 85F6     		testl	%esi, %esi
 920 0029 740D     		je	.L90
 921              		.loc 1 294 0 is_stmt 0 discriminator 1
 922 002b 803D0000 		cmpb	$0, _ZL10arg_called(%rip)
 922      000000
 923 0032 0F84E303 		je	.L160
 923      0000
 924              	.LVL84:
 925              	.L90:
 926              		.loc 1 296 0 is_stmt 1
 927 0038 E8000000 		call	_ZN2Fl17get_system_colorsEv
 927      00
 928              	.LVL85:
 929              		.loc 1 302 0
 930 003d E8000000 		call	_ZN2Fl12first_windowEv
 930      00
 931              	.LVL86:
 932 0042 4885C0   		testq	%rax, %rax
 933 0045 0F846503 		je	.L93
 933      0000
 934              		.loc 1 302 0 is_stmt 0 discriminator 1
 935 004b E8000000 		call	_ZN2Fl12first_windowEv
 935      00
 936              	.LVL87:
 937 0050 4889C7   		movq	%rax, %rdi
 938 0053 E8000000 		call	_ZNK9Fl_Window6xclassEv
 938      00
 939              	.LVL88:
 940              		.loc 1 303 0 is_stmt 1 discriminator 1
 941 0058 4885C0   		testq	%rax, %rax
 942              		.loc 1 302 0 discriminator 1
 943 005b 4889C3   		movq	%rax, %rbx
 944              	.LVL89:
 945              		.loc 1 303 0 discriminator 1
 946 005e 0F844C03 		je	.L93
 946      0000
 947              	.LVL90:
 948              	.L92:
 949              		.loc 1 305 0
 950 0064 488B3D00 		movq	fl_display(%rip), %rdi
 950      000000
 951 006b BA000000 		movl	$.LC24, %edx
 951      00
 952 0070 4889DE   		movq	%rbx, %rsi
 953 0073 E8000000 		call	XGetDefault
 953      00
 954              	.LVL91:
 955              		.loc 1 306 0
 956 0078 4885C0   		testq	%rax, %rax
 957              		.loc 1 305 0
 958 007b 4989C6   		movq	%rax, %r14
 959              	.LVL92:
 960              		.loc 1 306 0
 961 007e 7428     		je	.L94
 962              		.loc 1 306 0 is_stmt 0 discriminator 1
 963 0080 BE000000 		movl	$.LC25, %esi
 963      00
 964 0085 4889C7   		movq	%rax, %rdi
 965 0088 41BF0100 		movl	$1, %r15d
 965      0000
 966 008e E8000000 		call	strcasecmp
 966      00
 967              	.LVL93:
 968              		.loc 1 307 0 is_stmt 1 discriminator 1
 969 0093 85C0     		testl	%eax, %eax
 970 0095 0F85BB02 		jne	.L161
 970      0000
 971              	.L95:
 972              	.LBB101:
 973              	.LBB102:
 974              		.loc 3 1204 0
 975 009b 4489FE   		movl	%r15d, %esi
 976 009e BF020000 		movl	$2, %edi
 976      00
 977 00a3 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionEb
 977      00
 978              	.LVL94:
 979              	.L94:
 980              	.LBE102:
 981              	.LBE101:
 982              		.loc 1 310 0
 983 00a8 488B3D00 		movq	fl_display(%rip), %rdi
 983      000000
 984 00af BA000000 		movl	$.LC6, %edx
 984      00
 985 00b4 4889DE   		movq	%rbx, %rsi
 986 00b7 E8000000 		call	XGetDefault
 986      00
 987              	.LVL95:
 988              		.loc 1 311 0
 989 00bc 4885C0   		testq	%rax, %rax
 990              		.loc 1 310 0
 991 00bf 4989C6   		movq	%rax, %r14
 992              	.LVL96:
 993              		.loc 1 311 0
 994 00c2 7428     		je	.L96
 995              		.loc 1 311 0 is_stmt 0 discriminator 1
 996 00c4 BE000000 		movl	$.LC25, %esi
 996      00
 997 00c9 4889C7   		movq	%rax, %rdi
 998 00cc 41BF0100 		movl	$1, %r15d
 998      0000
 999 00d2 E8000000 		call	strcasecmp
 999      00
 1000              	.LVL97:
 1001              		.loc 1 312 0 is_stmt 1 discriminator 1
 1002 00d7 85C0     		testl	%eax, %eax
 1003 00d9 0F854702 		jne	.L162
 1003      0000
 1004              	.L97:
 1005              	.LBB103:
 1006              	.LBB104:
 1007              		.loc 4 55 0
 1008 00df 4489FE   		movl	%r15d, %esi
 1009 00e2 BF030000 		movl	$3, %edi
 1009      00
 1010 00e7 E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionEb
 1010      00
 1011              	.LVL98:
 1012              	.L96:
 1013              	.LBE104:
 1014              	.LBE103:
 1015              		.loc 1 315 0
 1016 00ec 488B3D00 		movq	fl_display(%rip), %rdi
 1016      000000
 1017 00f3 4889DE   		movq	%rbx, %rsi
 1018 00f6 BA000000 		movl	$.LC28, %edx
 1018      00
 1019 00fb E8000000 		call	XGetDefault
 1019      00
 1020              	.LVL99:
 1021              		.loc 1 316 0
 1022 0100 4885C0   		testq	%rax, %rax
 1023              		.loc 1 315 0
 1024 0103 4889C3   		movq	%rax, %rbx
 1025              	.LVL100:
 1026              		.loc 1 316 0
 1027 0106 7428     		je	.L98
 1028              		.loc 1 316 0 is_stmt 0 discriminator 1
 1029 0108 BE000000 		movl	$.LC25, %esi
 1029      00
 1030 010d 4889C7   		movq	%rax, %rdi
 1031 0110 41BE0100 		movl	$1, %r14d
 1031      0000
 1032 0116 E8000000 		call	strcasecmp
 1032      00
 1033              	.LVL101:
 1034              		.loc 1 317 0 is_stmt 1 discriminator 1
 1035 011b 85C0     		testl	%eax, %eax
 1036 011d 0F85D301 		jne	.L163
 1036      0000
 1037              	.L99:
 1038              	.LBB105:
 1039              	.LBB106:
1189:fltk-1.3.4-1/FL/Fl.H ****   /**
 1040              		.loc 3 1189 0
 1041 0123 4489F6   		movl	%r14d, %esi
 1042 0126 BF010000 		movl	$1, %edi
 1042      00
 1043 012b E8000000 		call	_ZN2Fl6optionENS_9Fl_OptionEb
 1043      00
 1044              	.LVL102:
 1045              	.L98:
 1046              	.LBE106:
 1047              	.LBE105:
 1048              	.LBB107:
 1049              		.loc 1 323 0
 1050 0130 803D0000 		cmpb	$0, _ZZN9Fl_Window4showEiPPcE8beenhere(%rip)
 1050      000000
 1051 0137 0F859100 		jne	.L100
 1051      0000
 1052              	.LBB108:
 1053              		.loc 1 324 0
 1054 013d 488B3D00 		movq	_ZL8geometry(%rip), %rdi
 1054      000000
 1055 0144 4885FF   		testq	%rdi, %rdi
 1056 0147 0F848100 		je	.L100
 1056      0000
 1057              	.LVL103:
 1058              	.LBB109:
 1059              		.loc 1 325 0
 1060 014d 8B4520   		movl	32(%rbp), %eax
 1061              		.loc 1 326 0
 1062 0150 4C8D4424 		leaq	20(%rsp), %r8
 1062      14
 1063 0155 488D4C24 		leaq	16(%rsp), %rcx
 1063      10
 1064 015a 488D5424 		leaq	12(%rsp), %rdx
 1064      0C
 1065 015f 488D7424 		leaq	8(%rsp), %rsi
 1065      08
 1066              		.loc 1 325 0
 1067 0164 89442408 		movl	%eax, 8(%rsp)
 1068              	.LVL104:
 1069 0168 8B4524   		movl	36(%rbp), %eax
 1070 016b 8944240C 		movl	%eax, 12(%rsp)
 1071              	.LVL105:
 1072 016f 8B4528   		movl	40(%rbp), %eax
 1073 0172 89442410 		movl	%eax, 16(%rsp)
 1074              	.LVL106:
 1075 0176 8B452C   		movl	44(%rbp), %eax
 1076 0179 89442414 		movl	%eax, 20(%rsp)
 1077              		.loc 1 326 0
 1078 017d E8000000 		call	XParseGeometry
 1078      00
 1079              	.LVL107:
 1080              		.loc 1 327 0
 1081 0182 A810     		testb	$16, %al
 1082              		.loc 1 326 0
 1083 0184 89C3     		movl	%eax, %ebx
 1084              	.LVL108:
 1085              		.loc 1 327 0
 1086 0186 0F85D702 		jne	.L164
 1086      0000
 1087              	.LVL109:
 1088              	.L101:
 1089              		.loc 1 328 0
 1090 018c F6C320   		testb	$32, %bl
 1091 018f 0F85BD02 		jne	.L165
 1091      0000
 1092              	.LVL110:
 1093              	.L102:
 1094 0195 4C8BB588 		movq	136(%rbp), %r14
 1094      000000
 1095              	.LVL111:
 1096              		.loc 1 333 0
 1097 019c 4D85F6   		testq	%r14, %r14
 1098 019f 0F84CF02 		je	.L166
 1098      0000
 1099              	.L103:
 1100              		.loc 1 335 0
 1101 01a5 83E303   		andl	$3, %ebx
 1102              	.LVL112:
 1103 01a8 0F854602 		jne	.L167
 1103      0000
 1104              	.LVL113:
 1105              	.LBB110:
 1106              	.LBB111:
 1107              		.file 5 "fltk-1.3.4-1/FL/Fl_Widget.H"
   1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
   2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
   4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
   6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
   8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be documented.
  29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by far the most used) */
  49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk widgets */
  51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the widget */
  53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long data value */
  55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed graphics label.
  58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will become a widget by itself.
  60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplication by handling labels in
  61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We also provide an easy
  62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html or vector graphics.
  63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this release.
  64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
  84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
  85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
  86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
  87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
  90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
  91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is not public.
  92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
  93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent(), or argument() 
  95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are as fast and small 
  96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise noted, the property 
  97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also trivial inline 
  98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. It is up to the 
  99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all derived widgets have a 
 129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), y(), w(), h(), and 
 130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to the enclosing window
 133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L);
 137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_visible_focus()
 154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't receive focus, and is disabled but potentia
 157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not drawn, but can receive a few special event
 158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoration (Fl_Window)
 160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window manager position the window (Fl_Window)
 161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering toolbar window (Fl_Window)
 162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a shortcut we need to draw
 163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value changed
 164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top (Fl_Window)
 165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus navigation if the widget can have the
 166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is internally copied, its destruction is ha
 167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within this widget will be clipped (Fl_Group)
 168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup window, dismissed by clicking outside (Fl_
 169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, transparent to events, and dismissed easi
 170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking input to all other winows (Fl_Window)
 171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a hardware overlay plane (Fl_Menu_Window)
 172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget relative to the parent group, not to th
 173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is internally copied, its destruction is 
 174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (Fl_Window)
 175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS platform, pressing and holding a key on th
 176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party extensions
 178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party extensions
 179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party extensions
 180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Color c) const;
 184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) const;
 188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almost always want to 
 195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy all of the child widgets 
 196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the widget from its parent
 199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule redrawing whenever
 205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possible, call redraw()
 206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <I>from within your
 211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, you can do it
 212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_Scrollbar
 216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but instead let FLTK do 
 223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return 0 if the 
 226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle() method in 
 229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit events that you 
 230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the callee retval.
 231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with copy_label().
 240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widget's label
 242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL) ? 1 : 0);}
 248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this method, because it
 259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and removing methods,
 260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_Group.
 261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(Fl_Widget*) instead.
 263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, use Fl_Group::add()
 265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms compatibility
 268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to decide if a widget
 271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() really used in a way
 272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may implement its 
 304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e not
 305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the parent widget 
 306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to update the 
 307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more often 
 310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of a widget 
 311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculations.
 312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h()), 
 314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H).
 315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent window 
 317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h()).
 328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent window 
 330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 1108              		.loc 5 341 0
 1109 01ae 488B4500 		movq	0(%rbp), %rax
 1110 01b2 8B5524   		movl	36(%rbp), %edx
 1111 01b5 4889EF   		movq	%rbp, %rdi
 1112 01b8 8B7520   		movl	32(%rbp), %esi
 1113 01bb 448B4424 		movl	20(%rsp), %r8d
 1113      14
 1114 01c0 8B4C2410 		movl	16(%rsp), %ecx
 1115 01c4 FF5020   		call	*32(%rax)
 1116              	.LVL114:
 1117              	.L105:
 1118              	.LBE111:
 1119              	.LBE110:
 1120              	.LBB112:
 1121              	.LBB113:
 1122              		.file 6 "fltk-1.3.4-1/FL/Fl_Group.H"
   1:fltk-1.3.4-1/FL/Fl_Group.H **** //
   2:fltk-1.3.4-1/FL/Fl_Group.H **** // "$Id: Fl_Group.H 10446 2014-11-10 22:09:11Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Group.H **** //
   4:fltk-1.3.4-1/FL/Fl_Group.H **** // Group header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Group.H **** //
   6:fltk-1.3.4-1/FL/Fl_Group.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Group.H **** //
   8:fltk-1.3.4-1/FL/Fl_Group.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Group.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Group.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Group.H **** //
  12:fltk-1.3.4-1/FL/Fl_Group.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Group.H **** //
  14:fltk-1.3.4-1/FL/Fl_Group.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Group.H **** //
  16:fltk-1.3.4-1/FL/Fl_Group.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Group.H **** //
  18:fltk-1.3.4-1/FL/Fl_Group.H **** 
  19:fltk-1.3.4-1/FL/Fl_Group.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Group.H ****    Fl_Group, Fl_End classes . */
  21:fltk-1.3.4-1/FL/Fl_Group.H **** 
  22:fltk-1.3.4-1/FL/Fl_Group.H **** #ifndef Fl_Group_H
  23:fltk-1.3.4-1/FL/Fl_Group.H **** #define Fl_Group_H
  24:fltk-1.3.4-1/FL/Fl_Group.H **** 
  25:fltk-1.3.4-1/FL/Fl_Group.H **** #ifndef Fl_Widget_H
  26:fltk-1.3.4-1/FL/Fl_Group.H **** #include "Fl_Widget.H"
  27:fltk-1.3.4-1/FL/Fl_Group.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Group.H **** 
  29:fltk-1.3.4-1/FL/Fl_Group.H **** /**
  30:fltk-1.3.4-1/FL/Fl_Group.H ****   The Fl_Group class is the FLTK container widget. It maintains
  31:fltk-1.3.4-1/FL/Fl_Group.H ****   an array of child widgets. These children can themselves be any widget
  32:fltk-1.3.4-1/FL/Fl_Group.H ****   including Fl_Group. The most important subclass of Fl_Group
  33:fltk-1.3.4-1/FL/Fl_Group.H ****   is Fl_Window, however groups can also be used to control radio buttons
  34:fltk-1.3.4-1/FL/Fl_Group.H ****   or to enforce resize behavior.
  35:fltk-1.3.4-1/FL/Fl_Group.H **** 
  36:fltk-1.3.4-1/FL/Fl_Group.H ****   The tab and arrow keys are used to move the focus between widgets of
  37:fltk-1.3.4-1/FL/Fl_Group.H ****   this group, and to other groups. The only modifier grabbed is shift
  38:fltk-1.3.4-1/FL/Fl_Group.H ****   (for shift-tab), so that ctrl-tab, alt-up, and such are free
  39:fltk-1.3.4-1/FL/Fl_Group.H ****   for the app to use as shortcuts.
  40:fltk-1.3.4-1/FL/Fl_Group.H **** */
  41:fltk-1.3.4-1/FL/Fl_Group.H **** class FL_EXPORT Fl_Group : public Fl_Widget {
  42:fltk-1.3.4-1/FL/Fl_Group.H **** 
  43:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget** array_;
  44:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* savedfocus_;
  45:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* resizable_;
  46:fltk-1.3.4-1/FL/Fl_Group.H ****   int children_;
  47:fltk-1.3.4-1/FL/Fl_Group.H ****   int *sizes_; // remembered initial sizes of children
  48:fltk-1.3.4-1/FL/Fl_Group.H **** 
  49:fltk-1.3.4-1/FL/Fl_Group.H ****   int navigation(int);
  50:fltk-1.3.4-1/FL/Fl_Group.H ****   static Fl_Group *current_;
  51:fltk-1.3.4-1/FL/Fl_Group.H ****  
  52:fltk-1.3.4-1/FL/Fl_Group.H ****   // unimplemented copy ctor and assignment operator
  53:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Group(const Fl_Group&);
  54:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Group& operator=(const Fl_Group&);
  55:fltk-1.3.4-1/FL/Fl_Group.H **** 
  56:fltk-1.3.4-1/FL/Fl_Group.H **** protected:
  57:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw();
  58:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_child(Fl_Widget& widget) const;
  59:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_children();
  60:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_outside_label(const Fl_Widget& widget) const ;
  61:fltk-1.3.4-1/FL/Fl_Group.H ****   void update_child(Fl_Widget& widget) const;
  62:fltk-1.3.4-1/FL/Fl_Group.H ****   int  *sizes();
  63:fltk-1.3.4-1/FL/Fl_Group.H **** 
  64:fltk-1.3.4-1/FL/Fl_Group.H **** public:
  65:fltk-1.3.4-1/FL/Fl_Group.H **** 
  66:fltk-1.3.4-1/FL/Fl_Group.H ****   int handle(int);
  67:fltk-1.3.4-1/FL/Fl_Group.H ****   void begin();
  68:fltk-1.3.4-1/FL/Fl_Group.H ****   void end();
  69:fltk-1.3.4-1/FL/Fl_Group.H ****   static Fl_Group *current();
  70:fltk-1.3.4-1/FL/Fl_Group.H ****   static void current(Fl_Group *g);
  71:fltk-1.3.4-1/FL/Fl_Group.H **** 
  72:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
  73:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns how many child widgets the group has.
  74:fltk-1.3.4-1/FL/Fl_Group.H ****   */
  75:fltk-1.3.4-1/FL/Fl_Group.H ****   int children() const {return children_;}
  76:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
  77:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns array()[n].  <i>No range checking is done!</i>
  78:fltk-1.3.4-1/FL/Fl_Group.H ****   */
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* child(int n) const {return array()[n];}
  80:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
  81:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
  82:fltk-1.3.4-1/FL/Fl_Group.H ****     See int Fl_Group::find(const Fl_Widget *w) const 
  83:fltk-1.3.4-1/FL/Fl_Group.H ****   */
  84:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget& o) const {return find(&o);}
  85:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* const* array() const;
  86:fltk-1.3.4-1/FL/Fl_Group.H **** 
  87:fltk-1.3.4-1/FL/Fl_Group.H ****   void resize(int,int,int,int);
  88:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
  89:fltk-1.3.4-1/FL/Fl_Group.H ****     Creates a new Fl_Group widget using the given position, size,
  90:fltk-1.3.4-1/FL/Fl_Group.H ****     and label string. The default boxtype is FL_NO_BOX.
  91:fltk-1.3.4-1/FL/Fl_Group.H ****   */
  92:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Group(int,int,int,int, const char * = 0);
  93:fltk-1.3.4-1/FL/Fl_Group.H ****   virtual ~Fl_Group();
  94:fltk-1.3.4-1/FL/Fl_Group.H ****   void add(Fl_Widget&);
  95:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
  96:fltk-1.3.4-1/FL/Fl_Group.H ****     See void Fl_Group::add(Fl_Widget &w) 
  97:fltk-1.3.4-1/FL/Fl_Group.H ****   */
  98:fltk-1.3.4-1/FL/Fl_Group.H ****   void add(Fl_Widget* o) {add(*o);}
  99:fltk-1.3.4-1/FL/Fl_Group.H ****   void insert(Fl_Widget&, int i);
 100:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 101:fltk-1.3.4-1/FL/Fl_Group.H ****     This does insert(w, find(before)).  This will append the
 102:fltk-1.3.4-1/FL/Fl_Group.H ****     widget if \p before is not in the group.
 103:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 104:fltk-1.3.4-1/FL/Fl_Group.H ****   void insert(Fl_Widget& o, Fl_Widget* before) {insert(o,find(before));}
 105:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(int index);
 106:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(Fl_Widget&);
 107:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 108:fltk-1.3.4-1/FL/Fl_Group.H ****     Removes the widget \p o from the group.
 109:fltk-1.3.4-1/FL/Fl_Group.H ****     \sa void remove(Fl_Widget&)
 110:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 111:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(Fl_Widget* o) {remove(*o);}
 112:fltk-1.3.4-1/FL/Fl_Group.H ****   void clear();
 113:fltk-1.3.4-1/FL/Fl_Group.H **** 
 114:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 115:fltk-1.3.4-1/FL/Fl_Group.H ****     See void Fl_Group::resizable(Fl_Widget *box) 
 116:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 117:fltk-1.3.4-1/FL/Fl_Group.H ****   void resizable(Fl_Widget& o) {resizable_ = &o;}
 118:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 119:fltk-1.3.4-1/FL/Fl_Group.H ****     The resizable widget defines the resizing box for the group. When the
 120:fltk-1.3.4-1/FL/Fl_Group.H ****     group is resized it calculates a new size and position for all of its
 121:fltk-1.3.4-1/FL/Fl_Group.H ****     children. Widgets that are horizontally or vertically inside the
 122:fltk-1.3.4-1/FL/Fl_Group.H ****     dimensions of the box are scaled to the new size. Widgets outside the
 123:fltk-1.3.4-1/FL/Fl_Group.H ****     box are moved.
 124:fltk-1.3.4-1/FL/Fl_Group.H **** 
 125:fltk-1.3.4-1/FL/Fl_Group.H ****     In these examples the gray area is the resizable:
 126:fltk-1.3.4-1/FL/Fl_Group.H **** 
 127:fltk-1.3.4-1/FL/Fl_Group.H ****     \image html resizebox1.png
 128:fltk-1.3.4-1/FL/Fl_Group.H **** 
 129:fltk-1.3.4-1/FL/Fl_Group.H ****     <br>
 130:fltk-1.3.4-1/FL/Fl_Group.H ****     
 131:fltk-1.3.4-1/FL/Fl_Group.H ****     \image html resizebox2.png
 132:fltk-1.3.4-1/FL/Fl_Group.H ****     
 133:fltk-1.3.4-1/FL/Fl_Group.H ****     \image latex resizebox1.png "before resize"  width=4cm
 134:fltk-1.3.4-1/FL/Fl_Group.H ****     
 135:fltk-1.3.4-1/FL/Fl_Group.H ****     \image latex resizebox2.png "after resize"   width=4.85cm
 136:fltk-1.3.4-1/FL/Fl_Group.H **** 
 137:fltk-1.3.4-1/FL/Fl_Group.H ****     The resizable may be set to the group itself, in which case all the
 138:fltk-1.3.4-1/FL/Fl_Group.H ****     contents are resized. This is the default value for Fl_Group,
 139:fltk-1.3.4-1/FL/Fl_Group.H ****     although NULL is the default for Fl_Window and Fl_Pack.
 140:fltk-1.3.4-1/FL/Fl_Group.H **** 
 141:fltk-1.3.4-1/FL/Fl_Group.H ****     If the resizable is NULL then all widgets remain a fixed size
 142:fltk-1.3.4-1/FL/Fl_Group.H ****     and distance from the top-left corner.
 143:fltk-1.3.4-1/FL/Fl_Group.H **** 
 144:fltk-1.3.4-1/FL/Fl_Group.H ****     It is possible to achieve any type of resize behavior by using an
 145:fltk-1.3.4-1/FL/Fl_Group.H ****     invisible Fl_Box as the resizable and/or by using a hierarchy
 146:fltk-1.3.4-1/FL/Fl_Group.H ****     of child Fl_Group's.
 147:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 148:fltk-1.3.4-1/FL/Fl_Group.H ****   void resizable(Fl_Widget* o) {resizable_ = o;}
 1123              		.loc 6 148 0
 1124 01c7 4C89B588 		movq	%r14, 136(%rbp)
 1124      000000
 1125              	.LVL115:
 1126              	.L100:
 1127              	.LBE113:
 1128              	.LBE112:
 1129              	.LBE109:
 1130              	.LBE108:
 1131              	.LBE107:
 1132              		.loc 1 344 0
 1133 01ce 488B3500 		movq	_ZL4name(%rip), %rsi
 1133      000000
 1134 01d5 4889EF   		movq	%rbp, %rdi
 1135 01d8 4885F6   		testq	%rsi, %rsi
 1136 01db 0F844A02 		je	.L106
 1136      0000
 1137              	.LVL116:
 1138              		.loc 1 344 0 is_stmt 0 discriminator 1
 1139 01e1 E8000000 		call	_ZN9Fl_Window6xclassEPKc
 1139      00
 1140              	.LVL117:
 1141 01e6 48C70500 		movq	$0, _ZL4name(%rip)
 1141      00000000 
 1141      000000
 1142              	.L107:
 1143              		.loc 1 347 0 is_stmt 1
 1144 01f1 488B3500 		movq	_ZL5title(%rip), %rsi
 1144      000000
 1145 01f8 4885F6   		testq	%rsi, %rsi
 1146 01fb 0F848501 		je	.L108
 1146      0000
 1147              		.loc 1 347 0 is_stmt 0 discriminator 1
 1148 0201 4889EF   		movq	%rbp, %rdi
 1149 0204 E8000000 		call	_ZN9Fl_Window5labelEPKc
 1149      00
 1150              	.LVL118:
 1151 0209 48C70500 		movq	$0, _ZL5title(%rip)
 1151      00000000 
 1151      000000
 1152              	.L109:
 1153              		.loc 1 350 0 is_stmt 1
 1154 0214 803D0000 		cmpb	$0, _ZZN9Fl_Window4showEiPPcE8beenhere(%rip)
 1154      000000
 1155 021b 0F849901 		je	.L168
 1155      0000
 1156              		.loc 1 356 0
 1157 0221 488B4500 		movq	0(%rbp), %rax
 1158 0225 4889EF   		movq	%rbp, %rdi
 1159 0228 FF5028   		call	*40(%rax)
 1160              	.LVL119:
 1161              		.loc 1 361 0
 1162 022b 4585E4   		testl	%r12d, %r12d
 1163 022e 0F8EAC01 		jle	.L111
 1163      0000
 1164              	.L170:
 1165 0234 418D4424 		leal	-1(%r12), %eax
 1165      FF
 1166              		.loc 1 361 0 is_stmt 0 discriminator 2
 1167 0239 4531F6   		xorl	%r14d, %r14d
 1168 023c 4D89EC   		movq	%r13, %r12
 1169              	.LVL120:
 1170 023f 498D5CC5 		leaq	8(%r13,%rax,8), %rbx
 1170      08
 1171              	.LVL121:
 1172              		.p2align 4,,10
 1173 0244 0F1F4000 		.p2align 3
 1174              	.L113:
 1175 0248 498B3C24 		movq	(%r12), %rdi
 1176 024c 4983C408 		addq	$8, %r12
 1177 0250 E8000000 		call	strlen
 1177      00
 1178              	.LVL122:
 1179 0255 4939DC   		cmpq	%rbx, %r12
 1180 0258 458D7406 		leal	1(%r14,%rax), %r14d
 1180      01
 1181              	.LVL123:
 1182 025d 75E9     		jne	.L113
 1183              		.loc 1 362 0 is_stmt 1
 1184 025f 4963FE   		movslq	%r14d, %rdi
 1185 0262 E8000000 		call	_Znam
 1185      00
 1186              	.LVL124:
 1187 0267 4989C4   		movq	%rax, %r12
 1188              	.LVL125:
 1189 026a 4889C1   		movq	%rax, %rcx
 1190              	.LVL126:
 1191 026d 0F1F00   		.p2align 4,,10
 1192              		.p2align 3
 1193              	.L115:
 1194              	.LBB122:
 1195              	.LBB123:
 1196              		.loc 1 364 0 discriminator 2
 1197 0270 498B4500 		movq	0(%r13), %rax
 1198              	.LVL127:
 1199              		.p2align 4,,10
 1200 0274 0F1F4000 		.p2align 3
 1201              	.L114:
 1202              		.loc 1 364 0 is_stmt 0 discriminator 3
 1203 0278 4883C001 		addq	$1, %rax
 1204              	.LVL128:
 1205 027c 0FB670FF 		movzbl	-1(%rax), %esi
 1206 0280 4883C101 		addq	$1, %rcx
 1207              	.LVL129:
 1208 0284 4084F6   		testb	%sil, %sil
 1209 0287 408871FF 		movb	%sil, -1(%rcx)
 1210 028b 75EB     		jne	.L114
 1211 028d 4983C508 		addq	$8, %r13
 1212              	.LBE123:
 1213              		.loc 1 364 0 discriminator 4
 1214 0291 4939DD   		cmpq	%rbx, %r13
 1215 0294 75DA     		jne	.L115
 1216 0296 4C29E1   		subq	%r12, %rcx
 1217              	.LVL130:
 1218 0299 8D59FF   		leal	-1(%rcx), %ebx
 1219              	.LVL131:
 1220              	.L116:
 1221              	.LBE122:
 1222              		.loc 1 365 0 is_stmt 1
 1223 029c 4889EF   		movq	%rbp, %rdi
 1224 029f E8000000 		call	_Z7fl_xid_PK9Fl_Window
 1224      00
 1225              	.LVL132:
 1226              		.loc 1 366 0
 1227 02a4 488B3D00 		movq	fl_display(%rip), %rdi
 1227      000000
 1228 02ab 53       		pushq	%rbx
 1229              		.cfi_def_cfa_offset 104
 1230 02ac 4531C9   		xorl	%r9d, %r9d
 1231 02af 4154     		pushq	%r12
 1232              		.cfi_def_cfa_offset 112
 1233 02b1 BA220000 		movl	$34, %edx
 1233      00
 1234 02b6 41B80800 		movl	$8, %r8d
 1234      0000
 1235 02bc B91F0000 		movl	$31, %ecx
 1235      00
 1236 02c1 4889C6   		movq	%rax, %rsi
 1237 02c4 E8000000 		call	XChangeProperty
 1237      00
 1238              	.LVL133:
 1239              		.loc 1 367 0
 1240 02c9 4C89E7   		movq	%r12, %rdi
 1241 02cc E8000000 		call	_ZdaPv
 1241      00
 1242              	.LVL134:
 1243              		.loc 1 369 0
 1244 02d1 58       		popq	%rax
 1245              		.cfi_def_cfa_offset 104
 1246 02d2 5A       		popq	%rdx
 1247              		.cfi_def_cfa_offset 96
 1248 02d3 488B4424 		movq	24(%rsp), %rax
 1248      18
 1249 02d8 64483304 		xorq	%fs:40, %rax
 1249      25280000 
 1249      00
 1250 02e1 0F859901 		jne	.L169
 1250      0000
 1251 02e7 4883C428 		addq	$40, %rsp
 1252              		.cfi_remember_state
 1253              		.cfi_def_cfa_offset 56
 1254 02eb 5B       		popq	%rbx
 1255              		.cfi_def_cfa_offset 48
 1256 02ec 5D       		popq	%rbp
 1257              		.cfi_def_cfa_offset 40
 1258              	.LVL135:
 1259 02ed 415C     		popq	%r12
 1260              		.cfi_def_cfa_offset 32
 1261              	.LVL136:
 1262 02ef 415D     		popq	%r13
 1263              		.cfi_def_cfa_offset 24
 1264 02f1 415E     		popq	%r14
 1265              		.cfi_def_cfa_offset 16
 1266 02f3 415F     		popq	%r15
 1267              		.cfi_def_cfa_offset 8
 1268 02f5 C3       		ret
 1269              	.LVL137:
 1270              	.L163:
 1271              		.cfi_restore_state
 1272              		.loc 1 317 0 discriminator 2
 1273 02f6 BE000000 		movl	$.LC26, %esi
 1273      00
 1274 02fb 4889DF   		movq	%rbx, %rdi
 1275 02fe E8000000 		call	strcasecmp
 1275      00
 1276              	.LVL138:
 1277              		.loc 1 316 0 discriminator 2
 1278 0303 85C0     		testl	%eax, %eax
 1279 0305 0F8418FE 		je	.L99
 1279      FFFF
 1280              		.loc 1 318 0 discriminator 3
 1281 030b BE000000 		movl	$.LC27, %esi
 1281      00
 1282 0310 4889DF   		movq	%rbx, %rdi
 1283 0313 4531F6   		xorl	%r14d, %r14d
 1284 0316 E8000000 		call	strcasecmp
 1284      00
 1285              	.LVL139:
 1286 031b 85C0     		testl	%eax, %eax
 1287 031d 410F94C6 		sete	%r14b
 1288 0321 E9FDFDFF 		jmp	.L99
 1288      FF
 1289              	.LVL140:
 1290              	.L162:
 1291              		.loc 1 312 0 discriminator 2
 1292 0326 BE000000 		movl	$.LC26, %esi
 1292      00
 1293 032b 4C89F7   		movq	%r14, %rdi
 1294 032e E8000000 		call	strcasecmp
 1294      00
 1295              	.LVL141:
 1296              		.loc 1 311 0 discriminator 2
 1297 0333 85C0     		testl	%eax, %eax
 1298 0335 0F84A4FD 		je	.L97
 1298      FFFF
 1299              		.loc 1 313 0 discriminator 3
 1300 033b BE000000 		movl	$.LC27, %esi
 1300      00
 1301 0340 4C89F7   		movq	%r14, %rdi
 1302 0343 4531FF   		xorl	%r15d, %r15d
 1303 0346 E8000000 		call	strcasecmp
 1303      00
 1304              	.LVL142:
 1305 034b 85C0     		testl	%eax, %eax
 1306 034d 410F94C7 		sete	%r15b
 1307 0351 E989FDFF 		jmp	.L97
 1307      FF
 1308              	.L161:
 1309              		.loc 1 307 0 discriminator 2
 1310 0356 BE000000 		movl	$.LC26, %esi
 1310      00
 1311 035b 4C89F7   		movq	%r14, %rdi
 1312 035e E8000000 		call	strcasecmp
 1312      00
 1313              	.LVL143:
 1314              		.loc 1 306 0 discriminator 2
 1315 0363 85C0     		testl	%eax, %eax
 1316 0365 0F8430FD 		je	.L95
 1316      FFFF
 1317              		.loc 1 308 0 discriminator 3
 1318 036b BE000000 		movl	$.LC27, %esi
 1318      00
 1319 0370 4C89F7   		movq	%r14, %rdi
 1320 0373 4531FF   		xorl	%r15d, %r15d
 1321 0376 E8000000 		call	strcasecmp
 1321      00
 1322              	.LVL144:
 1323 037b 85C0     		testl	%eax, %eax
 1324 037d 410F94C7 		sete	%r15b
 1325 0381 E915FDFF 		jmp	.L95
 1325      FF
 1326              	.LVL145:
 1327              	.L108:
 1328              		.loc 1 348 0
 1329 0386 48837D30 		cmpq	$0, 48(%rbp)
 1329      00
 1330 038b 0F8583FE 		jne	.L109
 1330      FFFF
 1331              		.loc 1 348 0 is_stmt 0 discriminator 1
 1332 0391 4889EF   		movq	%rbp, %rdi
 1333 0394 E8000000 		call	_ZNK9Fl_Window6xclassEv
 1333      00
 1334              	.LVL146:
 1335 0399 4889EF   		movq	%rbp, %rdi
 1336 039c 4889C6   		movq	%rax, %rsi
 1337 039f E8000000 		call	_ZN9Fl_Window5labelEPKc
 1337      00
 1338              	.LVL147:
 1339 03a4 E96BFEFF 		jmp	.L109
 1339      FF
 1340              	.LVL148:
 1341 03a9 0F1F8000 		.p2align 4,,10
 1341      000000
 1342              		.p2align 3
 1343              	.L93:
 1344              		.loc 1 303 0 is_stmt 1
 1345 03b0 BB000000 		movl	$.LC23, %ebx
 1345      00
 1346 03b5 E9AAFCFF 		jmp	.L92
 1346      FF
 1347              	.L168:
 1348              		.loc 1 352 0
 1349 03ba 488B3D00 		movq	_ZN2Fl7scheme_E(%rip), %rdi
 1349      000000
 1350              		.loc 1 351 0
 1351 03c1 C6050000 		movb	$1, _ZZN9Fl_Window4showEiPPcE8beenhere(%rip)
 1351      000001
 1352              		.loc 1 352 0
 1353 03c8 E8000000 		call	_ZN2Fl6schemeEPKc
 1353      00
 1354              	.LVL149:
 1355              		.loc 1 356 0
 1356 03cd 488B4500 		movq	0(%rbp), %rax
 1357 03d1 4889EF   		movq	%rbp, %rdi
 1358 03d4 FF5028   		call	*40(%rax)
 1359              	.LVL150:
 1360              		.loc 1 361 0
 1361 03d7 4585E4   		testl	%r12d, %r12d
 1362 03da 0F8F54FE 		jg	.L170
 1362      FFFF
 1363              	.L111:
 1364              		.loc 1 362 0
 1365 03e0 31FF     		xorl	%edi, %edi
 1366 03e2 BBFFFFFF 		movl	$-1, %ebx
 1366      FF
 1367 03e7 E8000000 		call	_Znam
 1367      00
 1368              	.LVL151:
 1369 03ec 4989C4   		movq	%rax, %r12
 1370              	.LVL152:
 1371 03ef E9A8FEFF 		jmp	.L116
 1371      FF
 1372              	.LVL153:
 1373              	.L167:
 1374              	.LBB124:
 1375              	.LBB120:
 1376              	.LBB118:
 1377              		.loc 1 336 0
 1378 03f4 488B4500 		movq	0(%rbp), %rax
 1379              	.LBB114:
 1380              	.LBB115:
 139:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 1381              		.loc 5 139 0
 1382 03f8 C74520FF 		movl	$-1, 32(%rbp)
 1382      FFFFFF
 1383              	.LVL154:
 1384              	.LBE115:
 1385              	.LBE114:
 1386              		.loc 1 336 0
 1387 03ff 4889EF   		movq	%rbp, %rdi
 1388 0402 448B4424 		movl	20(%rsp), %r8d
 1388      14
 1389 0407 8B4C2410 		movl	16(%rsp), %ecx
 1390 040b 8B54240C 		movl	12(%rsp), %edx
 1391 040f 8B742408 		movl	8(%rsp), %esi
 1392 0413 FF5020   		call	*32(%rax)
 1393              	.LVL155:
 1394 0416 E9ACFDFF 		jmp	.L105
 1394      FF
 1395              	.LVL156:
 1396              	.L160:
 1397              	.LBE118:
 1398              	.LBE120:
 1399              	.LBE124:
 1400              		.loc 1 294 0 discriminator 2
 1401 041b 4889D6   		movq	%rdx, %rsi
 1402              	.LVL157:
 1403 041e 4489E7   		movl	%r12d, %edi
 1404              	.LVL158:
 1405 0421 E8000000 		call	_ZN2Fl4argsEiPPc
 1405      00
 1406              	.LVL159:
 1407 0426 E90DFCFF 		jmp	.L90
 1407      FF
 1408              	.LVL160:
 1409              	.L106:
 1410              		.loc 1 345 0
 1411 042b E8000000 		call	_ZNK9Fl_Window6xclassEv
 1411      00
 1412              	.LVL161:
 1413 0430 4885C0   		testq	%rax, %rax
 1414 0433 0F85B8FD 		jne	.L107
 1414      FFFF
 1415              		.loc 1 345 0 is_stmt 0 discriminator 1
 1416 0439 498B7D00 		movq	0(%r13), %rdi
 1417 043d E8000000 		call	_Z16fl_filename_namePKc
 1417      00
 1418              	.LVL162:
 1419 0442 4889EF   		movq	%rbp, %rdi
 1420 0445 4889C6   		movq	%rax, %rsi
 1421 0448 E8000000 		call	_ZN9Fl_Window6xclassEPKc
 1421      00
 1422              	.LVL163:
 1423 044d E99FFDFF 		jmp	.L107
 1423      FF
 1424              	.LVL164:
 1425              	.L165:
 1426              	.LBB125:
 1427              	.LBB121:
 1428              	.LBB119:
 1429              		.loc 1 328 0 is_stmt 1 discriminator 1
 1430 0452 E8000000 		call	_ZN2Fl1hEv
 1430      00
 1431              	.LVL165:
 1432 0457 2B452C   		subl	44(%rbp), %eax
 1433 045a 0144240C 		addl	%eax, 12(%rsp)
 1434 045e E932FDFF 		jmp	.L102
 1434      FF
 1435              	.LVL166:
 1436              	.L164:
 1437              		.loc 1 327 0 discriminator 1
 1438 0463 E8000000 		call	_ZN2Fl1wEv
 1438      00
 1439              	.LVL167:
 1440 0468 2B4528   		subl	40(%rbp), %eax
 1441 046b 01442408 		addl	%eax, 8(%rsp)
 1442 046f E918FDFF 		jmp	.L101
 1442      FF
 1443              	.LVL168:
 1444              	.L166:
 1445              	.LBB116:
 1446              	.LBB117:
 1447              		.loc 6 148 0 discriminator 1
 1448 0474 4889AD88 		movq	%rbp, 136(%rbp)
 1448      000000
 1449 047b E925FDFF 		jmp	.L103
 1449      FF
 1450              	.LVL169:
 1451              	.L169:
 1452              	.LBE117:
 1453              	.LBE116:
 1454              	.LBE119:
 1455              	.LBE121:
 1456              	.LBE125:
 1457              		.loc 1 369 0
 1458 0480 E8000000 		call	__stack_chk_fail
 1458      00
 1459              	.LVL170:
 1460              		.cfi_endproc
 1461              	.LFE508:
 1463              		.section	.text.unlikely._ZN9Fl_Window4showEiPPc
 1464              	.LCOLDE29:
 1465              		.section	.text._ZN9Fl_Window4showEiPPc
 1466              	.LHOTE29:
 1467              		.section	.bss._ZZN9Fl_Window4showEiPPcE8beenhere,"aw",@nobits
 1470              	_ZZN9Fl_Window4showEiPPcE8beenhere:
 1471 0000 00       		.zero	1
 1472              		.globl	_ZN2Fl4helpE
 1473              		.section	.rodata._ZN2Fl4helpE,"a",@progbits
 1474              		.align 8
 1477              	_ZN2Fl4helpE:
 1478 0000 00000000 		.quad	.LC21+13
 1478      00000000 
 1479              		.section	.bss._ZL5title,"aw",@nobits
 1480              		.align 8
 1483              	_ZL5title:
 1484 0000 00000000 		.zero	8
 1484      00000000 
 1485              		.section	.bss._ZL8geometry,"aw",@nobits
 1486              		.align 8
 1489              	_ZL8geometry:
 1490 0000 00000000 		.zero	8
 1490      00000000 
 1491              		.section	.bss._ZL4name,"aw",@nobits
 1492              		.align 8
 1495              	_ZL4name:
 1496 0000 00000000 		.zero	8
 1496      00000000 
 1497              		.section	.bss._ZL8return_i,"aw",@nobits
 1500              	_ZL8return_i:
 1501 0000 00       		.zero	1
 1502              		.section	.bss._ZL10arg_called,"aw",@nobits
 1505              	_ZL10arg_called:
 1506 0000 00       		.zero	1
 1507              		.text
 1508              	.Letext0:
 1509              		.section	.text.unlikely._ZL8fl_matchPKcS0_i
 1510              	.Letext_cold0:
 1511              		.file 7 "fltk-1.3.4-1/FL/fl_types.h"
 1512              		.file 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1513              		.file 9 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1514              		.file 10 "/usr/include/libio.h"
 1515              		.file 11 "fltk-1.3.4-1/FL/Enumerations.H"
 1516              		.file 12 "fltk-1.3.4-1/FL/Fl_Window.H"
 1517              		.file 13 "fltk-1.3.4-1/FL/Fl_Image.H"
 1518              		.file 14 "/usr/include/X11/X.h"
 1519              		.file 15 "/usr/include/X11/Xlib.h"
 1520              		.file 16 "fltk-1.3.4-1/FL/Fl_Device.H"
 1521              		.file 17 "/usr/include/stdio.h"
 1522              		.file 18 "fltk-1.3.4-1/FL/x.H"
 1523              		.file 19 "/usr/include/string.h"
 1524              		.file 20 "fltk-1.3.4-1/FL/filename.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_arg.cxx
     /tmp/cc35mMIJ.s:13     .text._ZL8fl_matchPKcS0_i:0000000000000000 _ZL8fl_matchPKcS0_i
     /tmp/cc35mMIJ.s:196    .text._ZN2Fl3argEiPPcRi:0000000000000000 _ZN2Fl3argEiPPcRi
     /tmp/cc35mMIJ.s:1505   .bss._ZL10arg_called:0000000000000000 _ZL10arg_called
     /tmp/cc35mMIJ.s:1500   .bss._ZL8return_i:0000000000000000 _ZL8return_i
     /tmp/cc35mMIJ.s:1489   .bss._ZL8geometry:0000000000000000 _ZL8geometry
     /tmp/cc35mMIJ.s:1483   .bss._ZL5title:0000000000000000 _ZL5title
     /tmp/cc35mMIJ.s:1495   .bss._ZL4name:0000000000000000 _ZL4name
     /tmp/cc35mMIJ.s:693    .text._ZN2Fl4argsEiPPcRiPFiiS1_S2_E:0000000000000000 _ZN2Fl4argsEiPPcRiPFiiS1_S2_E
     /tmp/cc35mMIJ.s:806    .text._ZN2Fl4argsEiPPc:0000000000000000 _ZN2Fl4argsEiPPc
     /tmp/cc35mMIJ.s:886    .text._ZN9Fl_Window4showEiPPc:0000000000000000 _ZN9Fl_Window4showEiPPc
     /tmp/cc35mMIJ.s:1470   .bss._ZZN9Fl_Window4showEiPPcE8beenhere:0000000000000000 _ZZN9Fl_Window4showEiPPcE8beenhere
     /tmp/cc35mMIJ.s:1477   .rodata._ZN2Fl4helpE:0000000000000000 _ZN2Fl4helpE
     /tmp/cc35mMIJ.s:795    .rodata.str1.8:0000000000000000 .LC21
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
                           .group:0000000000000000 wm4.filename.H.30.99b1a2d49dfb41118316d590634dc617
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
__ctype_tolower_loc
fl_show_iconic
XParseGeometry
_ZN2Fl6optionENS_9Fl_OptionEb
_ZN2Fl7displayEPKc
__stack_chk_fail
fl_bg2
fl_bg
fl_fg
_ZN2Fl6schemeEPKc
_ZN2Fl5errorE
_ZN2Fl17get_system_colorsEv
_ZN2Fl12first_windowEv
_ZNK9Fl_Window6xclassEv
fl_display
XGetDefault
strcasecmp
_ZN9Fl_Window6xclassEPKc
_ZN9Fl_Window5labelEPKc
strlen
_Znam
_Z7fl_xid_PK9Fl_Window
XChangeProperty
_ZdaPv
_ZN2Fl7scheme_E
_Z16fl_filename_namePKc
_ZN2Fl1hEv
_ZN2Fl1wEv
