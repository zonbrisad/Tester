   1              		.file	"Fl_XPM_Image.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN12Fl_XPM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comdat
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN12Fl_XPM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comdat
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN12Fl_XPM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comdat
  12              	.Ltext_cold0:
  13              		.section	.text._ZN12Fl_XPM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comdat
  14              		.weak	_ZN12Fl_XPM_ImageD2Ev
  16              	_ZN12Fl_XPM_ImageD2Ev:
  17              	.LFB200:
  18              		.file 1 "fltk-1.3.4-1/FL/Fl_XPM_Image.H"
   1:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
   2:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // "$Id: Fl_XPM_Image.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
   4:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // XPM image header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
   6:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
   8:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
  12:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
  14:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
  16:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
  18:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** 
  19:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_XPM_Image.H ****   
  21:fltk-1.3.4-1/FL/Fl_XPM_Image.H ****    Fl_XPM_Image class . */
  22:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** 
  23:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** #ifndef Fl_XPM_Image_H
  24:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** #define Fl_XPM_Image_H
  25:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** #  include "Fl_Pixmap.H"
  26:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** 
  27:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** /**
  28:fltk-1.3.4-1/FL/Fl_XPM_Image.H ****   The Fl_XPM_Image class supports loading, caching,
  29:fltk-1.3.4-1/FL/Fl_XPM_Image.H ****   and drawing of X Pixmap (XPM) images, including transparency.
  30:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** */
  31:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** class FL_EXPORT Fl_XPM_Image : public Fl_Pixmap {
  19              		.loc 1 31 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              	.LBB63:
  23              		.loc 1 31 0
  24 0000 48C70700 		movq	$_ZTV12Fl_XPM_Image+16, (%rdi)
  24      000000
  25 0007 E9000000 		jmp	_ZN9Fl_PixmapD2Ev
  25      00
  26              	.LVL1:
  27              	.LBE63:
  28              		.cfi_endproc
  29              	.LFE200:
  31              		.section	.text.unlikely._ZN12Fl_XPM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comdat
  32              	.LCOLDE0:
  33              		.section	.text._ZN12Fl_XPM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comdat
  34              	.LHOTE0:
  35              		.weak	_ZN12Fl_XPM_ImageD1Ev
  36              		.set	_ZN12Fl_XPM_ImageD1Ev,_ZN12Fl_XPM_ImageD2Ev
  37              		.section	.text.unlikely._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comdat
  38              		.align 2
  39              	.LCOLDB1:
  40              		.section	.text._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comdat
  41              	.LHOTB1:
  42              		.align 2
  43              		.p2align 4,,15
  44              		.weak	_ZN12Fl_XPM_ImageD0Ev
  46              	_ZN12Fl_XPM_ImageD0Ev:
  47              	.LFB202:
  48              		.loc 1 31 0
  49              		.cfi_startproc
  50              	.LVL2:
  51 0000 53       		pushq	%rbx
  52              		.cfi_def_cfa_offset 16
  53              		.cfi_offset 3, -16
  54              		.loc 1 31 0
  55 0001 4889FB   		movq	%rdi, %rbx
  56              	.LBB64:
  57              	.LBB65:
  58 0004 48C70700 		movq	$_ZTV12Fl_XPM_Image+16, (%rdi)
  58      000000
  59 000b E8000000 		call	_ZN9Fl_PixmapD2Ev
  59      00
  60              	.LVL3:
  61              	.LBE65:
  62              	.LBE64:
  63 0010 4889DF   		movq	%rbx, %rdi
  64 0013 5B       		popq	%rbx
  65              		.cfi_def_cfa_offset 8
  66              	.LVL4:
  67 0014 E9000000 		jmp	_ZdlPv
  67      00
  68              	.LVL5:
  69              		.cfi_endproc
  70              	.LFE202:
  72              		.section	.text.unlikely._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comdat
  73              	.LCOLDE1:
  74              		.section	.text._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comdat
  75              	.LHOTE1:
  76              		.section	.text.unlikely._ZL8hexdigiti.part.0,"ax",@progbits
  77              	.LCOLDB2:
  78              		.section	.text._ZL8hexdigiti.part.0,"ax",@progbits
  79              	.LHOTB2:
  80              		.p2align 4,,15
  82              	_ZL8hexdigiti.part.0:
  83              	.LFB203:
  84              		.file 2 "fltk-1.3.4-1/src/Fl_XPM_Image.cxx"
   1:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    1              		.file	"Fl_XPM_Image.cxx"
   2:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_XPM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XPM_Image
   5:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    7              		.section	.text._ZN12Fl_XPM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comd
   8:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   11              		.section	.text.unlikely._ZN12Fl_XPM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XPM_Image
  12:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   13              		.section	.text._ZN12Fl_XPM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comd
  14:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   14              		.weak	_ZN12Fl_XPM_ImageD2Ev
  15:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   16              	_ZN12Fl_XPM_ImageD2Ev:
  16:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   17              	.LFB200:
  17:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_XPM_Image.H"
  18:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    1:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
  19:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // "$Id: Fl_XPM_Image.H 8864 2011-07-19 04:49:30Z greg.erc
  20:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
  21:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    4:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // XPM image header file for the Fast Light Tool Kit (FLTK
  22:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    5:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
  23:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // Copyright 1998-2010 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    7:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
  25:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // This library is free software. Distribution and use rig
  26:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    9:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // the file "COPYING" which should have been included with
  27:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
  29:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   12:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
  31:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   14:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // Please report all bugs and problems on the following pa
  32:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   15:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
  33:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   16:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   17:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
  35:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   18:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** 
  36:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   19:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** /* \file
  37:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   20:fltk-1.3.4-1/FL/Fl_XPM_Image.H ****   
  38:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   21:fltk-1.3.4-1/FL/Fl_XPM_Image.H ****    Fl_XPM_Image class . */
  85              		.loc 2 38 0
  86              		.cfi_startproc
  87              	.LVL6:
  88 0000 53       		pushq	%rbx
  89              		.cfi_def_cfa_offset 16
  90              		.cfi_offset 3, -16
  91              		.loc 2 38 0
  92 0001 89FB     		movl	%edi, %ebx
  93              	.LVL7:
  94              	.LBB66:
  95              	.LBB67:
  96              		.file 3 "/usr/include/ctype.h"
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
  97              		.loc 3 191 0
  98 0003 E8000000 		call	__ctype_b_loc
  98      00
  99              	.LVL8:
 100 0008 488B00   		movq	(%rax), %rax
 101 000b 4863D3   		movslq	%ebx, %rdx
 102 000e 0FB70450 		movzwl	(%rax,%rdx,2), %eax
 103              	.LVL9:
 104              	.LBE67:
 105              	.LBE66:
  39:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   22:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** 
  40:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   23:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** #ifndef Fl_XPM_Image_H
 106              		.loc 2 40 0
 107 0012 F6C401   		testb	$1, %ah
 108 0015 7519     		jne	.L10
  41:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   24:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** #define Fl_XPM_Image_H
 109              		.loc 2 41 0
 110 0017 83EB57   		subl	$87, %ebx
 111              	.LVL10:
 112 001a F6C402   		testb	$2, %ah
 113 001d B8140000 		movl	$20, %eax
 113      00
 114 0022 0F45C3   		cmovne	%ebx, %eax
  42:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   25:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** #  include "Fl_Pixmap.H"
  43:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** 
 115              		.loc 2 43 0
 116 0025 5B       		popq	%rbx
 117              		.cfi_remember_state
 118              		.cfi_def_cfa_offset 8
 119              	.LVL11:
 120 0026 C3       		ret
 121              	.LVL12:
 122 0027 660F1F84 		.p2align 4,,10
 122      00000000 
 122      00
 123              		.p2align 3
 124              	.L10:
 125              		.cfi_restore_state
  40:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   24:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** #define Fl_XPM_Image_H
 126              		.loc 2 40 0
 127 0030 8D43C9   		leal	-55(%rbx), %eax
 128              		.loc 2 43 0
 129 0033 5B       		popq	%rbx
 130              		.cfi_def_cfa_offset 8
 131              	.LVL13:
 132 0034 C3       		ret
 133              		.cfi_endproc
 134              	.LFE203:
 136              		.section	.text.unlikely._ZL8hexdigiti.part.0
 137              	.LCOLDE2:
 138              		.section	.text._ZL8hexdigiti.part.0
 139              	.LHOTE2:
 140              		.section	.rodata.str1.1,"aMS",@progbits,1
 141              	.LC3:
 142 0000 726200   		.string	"rb"
 143              	.LC4:
 144 0003 25642564 		.string	"%d%d%d%d"
 144      25642564 
 144      00
 145              		.section	.text.unlikely._ZN12Fl_XPM_ImageC2EPKc,"ax",@progbits
 146              		.align 2
 147              	.LCOLDB5:
 148              		.section	.text._ZN12Fl_XPM_ImageC2EPKc,"ax",@progbits
 149              	.LHOTB5:
 150              		.align 2
 151              		.p2align 4,,15
 152              		.globl	_ZN12Fl_XPM_ImageC2EPKc
 154              	_ZN12Fl_XPM_ImageC2EPKc:
 155              	.LFB197:
  44:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** /**
  45:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_XPM_Image.H ****   The Fl_XPM_Image class supports loading, caching,
  46:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_XPM_Image.H ****   and drawing of X Pixmap (XPM) images, including transpar
  47:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   30:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** */
  48:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   31:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** class FL_EXPORT Fl_XPM_Image : public Fl_Pixmap {
  49:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   19              		.loc 1 31 0
  50:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   20              		.cfi_startproc
  51:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   21              	.LVL0:
  52:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   22              	.LBB63:
  53:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   23              		.loc 1 31 0
 156              		.loc 2 53 0
 157              		.cfi_startproc
 158              	.LVL14:
 159 0000 4157     		pushq	%r15
 160              		.cfi_def_cfa_offset 16
 161              		.cfi_offset 15, -16
 162 0002 4156     		pushq	%r14
 163              		.cfi_def_cfa_offset 24
 164              		.cfi_offset 14, -24
 165              	.LBB99:
 166              	.LBB100:
 167              	.LBB101:
 168              		.file 4 "fltk-1.3.4-1/FL/Fl_Pixmap.H"
   1:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
   2:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // "$Id: Fl_Pixmap.H 9706 2012-11-06 20:46:14Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
   4:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Pixmap header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
   6:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Copyright 1998-2012 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
   8:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  12:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  14:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  16:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  18:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  19:fltk-1.3.4-1/FL/Fl_Pixmap.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Pixmap.H ****    Fl_Pixmap widget . */
  21:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  22:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #ifndef Fl_Pixmap_H
  23:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #define Fl_Pixmap_H
  24:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  include "Fl_Image.H"
  25:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if defined(WIN32)
  26:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  include "x.H"
  27:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  29:fltk-1.3.4-1/FL/Fl_Pixmap.H **** class Fl_Widget;
  30:fltk-1.3.4-1/FL/Fl_Pixmap.H **** struct Fl_Menu_Item;
  31:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  32:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Older C++ compilers don't support the explicit keyword... :(
  33:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  if defined(__sgi) && !defined(_COMPILER_VERSION)
  34:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #    define explicit
  35:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  endif // __sgi && !_COMPILER_VERSION
  36:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  37:fltk-1.3.4-1/FL/Fl_Pixmap.H **** /**
  38:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   The Fl_Pixmap class supports caching and drawing of colormap
  39:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   (pixmap) images, including transparency.
  40:fltk-1.3.4-1/FL/Fl_Pixmap.H **** */
  41:fltk-1.3.4-1/FL/Fl_Pixmap.H **** class FL_EXPORT Fl_Pixmap : public Fl_Image {
  42:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_Quartz_Graphics_Driver;
  43:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_GDI_Graphics_Driver;
  44:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_GDI_Printer_Graphics_Driver;
  45:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_Xlib_Graphics_Driver;
  46:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void copy_data();
  47:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void delete_data();
  48:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void set_data(const char * const *p);
  49:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   int prepare(int XP, int YP, int WP, int HP, int &cx, int &cy,
  50:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 			 int &X, int &Y, int &W, int &H);
  51:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  52:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   protected:
  53:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  54:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void measure();
  55:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  56:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   public:
  57:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  58:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   int alloc_data; // Non-zero if data was allocated
  59:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   
  60:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   private:
  61:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  62:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if defined(WIN32)
  63:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if FLTK_ABI_VERSION < 10301
  64:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   static // a static member is needed for ABI compatibility
  65:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif
  66:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   UINT pixmap_bg_color; // RGB color used for pixmap background
  67:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif // WIN32
  68:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if defined(__APPLE__) || defined(WIN32)
  69:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void *id_; // for internal use
  70:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void *mask_; // for internal use (mask bitmap)
  71:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #else
  72:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   unsigned id_; // for internal use
  73:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   unsigned mask_; // for internal use (mask bitmap)
  74:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif // __APPLE__ || WIN32
  75:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   
  76:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   public:
  77:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  78:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   /**    The constructors create a new pixmap from the specified XPM data.  */
  79:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   explicit Fl_Pixmap(char * const * D) : Fl_Image(-1,0,1), alloc_data(0), id_(0), mask_(0) {set_dat
 169              		.loc 4 79 0
 170 0004 31D2     		xorl	%edx, %edx
 171              	.LBE101:
 172              	.LBE100:
 173              	.LBE99:
 174              		.loc 2 53 0
 175 0006 4155     		pushq	%r13
 176              		.cfi_def_cfa_offset 32
 177              		.cfi_offset 13, -32
 178 0008 4154     		pushq	%r12
 179              		.cfi_def_cfa_offset 40
 180              		.cfi_offset 12, -40
 181 000a 4989FD   		movq	%rdi, %r13
 182 000d 55       		pushq	%rbp
 183              		.cfi_def_cfa_offset 48
 184              		.cfi_offset 6, -48
 185 000e 53       		pushq	%rbx
 186              		.cfi_def_cfa_offset 56
 187              		.cfi_offset 3, -56
 188              	.LBB162:
 189              	.LBB105:
 190              	.LBB102:
 191              		.loc 4 79 0
 192 000f B9010000 		movl	$1, %ecx
 192      00
 193              	.LBE102:
 194              	.LBE105:
 195              	.LBE162:
 196              		.loc 2 53 0
 197 0014 4889F3   		movq	%rsi, %rbx
 198              	.LBB163:
 199              	.LBB106:
 200              	.LBB103:
 201              		.loc 4 79 0
 202 0017 BEFFFFFF 		movl	$-1, %esi
 202      FF
 203              	.LVL15:
 204              	.LBE103:
 205              	.LBE106:
 206              	.LBE163:
 207              		.loc 2 53 0
 208 001c 4881EC78 		subq	$2168, %rsp
 208      080000
 209              		.cfi_def_cfa_offset 2224
 210              		.loc 2 53 0
 211 0023 64488B04 		movq	%fs:40, %rax
 211      25280000 
 211      00
 212 002c 48898424 		movq	%rax, 2152(%rsp)
 212      68080000 
 213 0034 31C0     		xorl	%eax, %eax
 214              	.LVL16:
 215              	.LBB164:
 216              	.LBB107:
 217              	.LBB104:
 218              		.loc 4 79 0
 219 0036 E8000000 		call	_ZN8Fl_ImageC2Eiii
 219      00
 220              	.LVL17:
 221 003b 31F6     		xorl	%esi, %esi
 222 003d 4C89EF   		movq	%r13, %rdi
 223 0040 49C74500 		movq	$_ZTV9Fl_Pixmap+16, 0(%r13)
 223      00000000 
 224 0048 41C74528 		movl	$0, 40(%r13)
 224      00000000 
 225 0050 41C7452C 		movl	$0, 44(%r13)
 225      00000000 
 226 0058 41C74530 		movl	$0, 48(%r13)
 226      00000000 
 227 0060 E8000000 		call	_ZN9Fl_Pixmap8set_dataEPKPKc
 227      00
 228              	.LVL18:
 229 0065 4C89EF   		movq	%r13, %rdi
 230 0068 E8000000 		call	_ZN9Fl_Pixmap7measureEv
 230      00
 231              	.LVL19:
 232              	.LBE104:
 233              	.LBE107:
 234              		.loc 2 53 0
 235 006d 49C74500 		movq	$_ZTV12Fl_XPM_Image+16, 0(%r13)
 235      00000000 
 236              	.LBB108:
  54:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   24 0000 48C70700 		movq	$_ZTV12Fl_XPM_Image+16, (%rdi)
  55:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   24      000000
  56:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   25 0007 E9000000 		jmp	_ZN9Fl_PixmapD2Ev
 237              		.loc 2 56 0
 238 0075 BE000000 		movl	$.LC3, %esi
 238      00
 239 007a 4889DF   		movq	%rbx, %rdi
 240 007d E8000000 		call	fl_fopen
 240      00
 241              	.LVL20:
 242 0082 4885C0   		testq	%rax, %rax
 243 0085 0F84BB00 		je	.L11
 243      0000
  57:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   25      00
  58:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   26              	.LVL1:
  59:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   27              	.LBE63:
 244              		.loc 2 59 0
 245 008b BF000800 		movl	$2048, %edi
 245      00
 246 0090 488D6C24 		leaq	80(%rsp), %rbp
 246      50
 247 0095 4989C4   		movq	%rax, %r12
 248 0098 4531F6   		xorl	%r14d, %r14d
 249 009b E8000000 		call	_Znam
 249      00
 250              	.LVL21:
  60:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   28              		.cfi_endproc
  61:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   29              	.LFE200:
 251              		.loc 2 61 0
 252 00a0 C744240C 		movl	$256, 12(%rsp)
 252      00010000 
  59:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   28              		.cfi_endproc
 253              		.loc 2 59 0
 254 00a8 4989C7   		movq	%rax, %r15
 255              	.LVL22:
 256              	.LBB109:
  62:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   31              		.section	.text.unlikely._ZN12Fl_XPM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XPM_Image
  63:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   32              	.LCOLDE0:
  64:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   33              		.section	.text._ZN12Fl_XPM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comd
  65:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   34              	.LHOTE0:
  66:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   35              		.weak	_ZN12Fl_XPM_ImageD1Ev
  67:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   36              		.set	_ZN12Fl_XPM_ImageD1Ev,_ZN12Fl_XPM_ImageD2Ev
  68:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   37              		.section	.text.unlikely._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_Image
  69:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   38              		.align 2
  70:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   39              	.LCOLDB1:
  71:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   40              		.section	.text._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comd
  72:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   41              	.LHOTB1:
  73:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   42              		.align 2
  74:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   43              		.p2align 4,,15
  75:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   44              		.weak	_ZN12Fl_XPM_ImageD0Ev
  76:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   46              	_ZN12Fl_XPM_ImageD0Ev:
  77:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   47              	.LFB202:
  78:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   48              		.loc 1 31 0
  79:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   49              		.cfi_startproc
  80:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   50              	.LVL2:
  81:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   51 0000 53       		pushq	%rbx
  82:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   52              		.cfi_def_cfa_offset 16
  83:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   53              		.cfi_offset 3, -16
  84:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   54              		.loc 1 31 0
  85:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   55 0001 4889FB   		movq	%rdi, %rbx
  86:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   56              	.LBB64:
  87:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   57              	.LBB65:
  88:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   58 0004 48C70700 		movq	$_ZTV12Fl_XPM_Image+16, (%rdi)
  89:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   58      000000
  90:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   59 000b E8000000 		call	_ZN9Fl_PixmapD2Ev
  91:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   59      00
  92:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   60              	.LVL3:
  93:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   61              	.LBE65:
  94:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   62              	.LBE64:
  95:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   63 0010 4889DF   		movq	%rbx, %rdi
  96:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   64 0013 5B       		popq	%rbx
  97:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   65              		.cfi_def_cfa_offset 8
  98:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   66              	.LVL4:
  99:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   67 0014 E9000000 		jmp	_ZdlPv
 100:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   67      00
 101:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   68              	.LVL5:
 102:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   69              		.cfi_endproc
 103:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   70              	.LFE202:
 104:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   72              		.section	.text.unlikely._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_Image
 105:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   73              	.LCOLDE1:
 106:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   74              		.section	.text._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comd
 107:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   75              	.LHOTE1:
 108:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   76              		.section	.text.unlikely._ZL8hexdigiti.part.0,"ax",@progbits
 109:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   77              	.LCOLDB2:
 110:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   78              		.section	.text._ZL8hexdigiti.part.0,"ax",@progbits
 111:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   79              	.LHOTB2:
 112:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   80              		.p2align 4,,15
 113:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   82              	_ZL8hexdigiti.part.0:
 114:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   83              	.LFB203:
 115:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   84              		.file 2 "fltk-1.3.4-1/src/Fl_XPM_Image.cxx"
 116:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    1:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    1              		.file	"Fl_XPM_Image.cxx"
 117:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    2:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    2              		.text
 118:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    3:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    3              	.Ltext0:
 257              		.loc 2 118 0
 258 00ab 4C896C24 		movq	%r13, 16(%rsp)
 258      10
 259              	.LVL23:
 260              	.L37:
 261 00b0 4489F3   		movl	%r14d, %ebx
 262 00b3 EB0E     		jmp	.L14
 263              	.LVL24:
 264              		.p2align 4,,10
 265 00b5 0F1F00   		.p2align 3
 266              	.L94:
  66:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   36              		.set	_ZN12Fl_XPM_ImageD1Ev,_ZN12Fl_XPM_ImageD2Ev
 267              		.loc 2 66 0
 268 00b8 807C2450 		cmpb	$34, 80(%rsp)
 268      22
 269 00bd 0F84AD00 		je	.L93
 269      0000
 270              	.LVL25:
 271              	.L14:
 272              	.LBE109:
 273              	.LBB155:
 274              	.LBB156:
 275              		.file 5 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 276              		.loc 5 263 0
 277 00c3 4C89E2   		movq	%r12, %rdx
 278 00c6 BE140800 		movl	$2068, %esi
 278      00
 279 00cb 4889EF   		movq	%rbp, %rdi
 280 00ce E8000000 		call	fgets
 280      00
 281              	.LVL26:
 282              	.LBE156:
 283              	.LBE155:
  65:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   35              		.weak	_ZN12Fl_XPM_ImageD1Ev
 284              		.loc 2 65 0
 285 00d3 4885C0   		testq	%rax, %rax
 286 00d6 75E0     		jne	.L94
 119:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_XPM
 120:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    5:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    5              		.align 2
 121:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6              	.LCOLDB0:
 122:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    7:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    7              		.section	.text._ZN12Fl_XPM_ImageD2E
 123:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    8:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    8              	.LHOTB0:
 124:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    9:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    9              		.align 2
 125:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   10:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   10              		.p2align 4,,15
 126:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   11:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   11              		.section	.text.unlikely._ZN12Fl_XPM
 127:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   12:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   12              	.Ltext_cold0:
 287              		.loc 2 127 0
 288 00d8 4C89E7   		movq	%r12, %rdi
 289 00db 4C8B6C24 		movq	16(%rsp), %r13
 289      10
 290 00e0 E8000000 		call	fclose
 290      00
 291              	.LVL27:
 128:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   13:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   13              		.section	.text._ZN12Fl_XPM_ImageD2E
 129:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   14:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   14              		.weak	_ZN12Fl_XPM_ImageD2Ev
 292              		.loc 2 129 0
 293 00e5 85DB     		testl	%ebx, %ebx
 294 00e7 0F843302 		je	.L38
 294      0000
 295              		.loc 2 129 0 is_stmt 0 discriminator 1
 296 00ed 8B542448 		movl	72(%rsp), %edx
 297 00f1 8D4201   		leal	1(%rdx), %eax
 298 00f4 85D2     		testl	%edx, %edx
 299 00f6 BA020000 		movl	$2, %edx
 299      00
 300 00fb 0F48C2   		cmovs	%edx, %eax
 301 00fe 03442444 		addl	68(%rsp), %eax
 128:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   13:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   13              		.section	.text._ZN12Fl_XPM_ImageD2E
 302              		.loc 2 128 0 is_stmt 1 discriminator 1
 303 0102 4531E4   		xorl	%r12d, %r12d
 304              		.loc 2 129 0 discriminator 1
 305 0105 39C3     		cmpl	%eax, %ebx
 306 0107 0F8D9B03 		jge	.L95
 306      0000
 307              	.LVL28:
 308              	.L54:
 309 010d 4863C3   		movslq	%ebx, %rax
 310 0110 498D2CC7 		leaq	(%r15,%rax,8), %rbp
 311              		.p2align 4,,10
 312 0114 0F1F4000 		.p2align 3
 313              	.L41:
 314              	.LVL29:
 130:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   15:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   16              	_ZN12Fl_XPM_ImageD2Ev:
 131:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   16:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   17              	.LFB200:
 132:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   17:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_XPM_Ima
 133:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   18:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    1:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
 134:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   19:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // "$Id: Fl_XP
 135:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   20:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
 136:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   21:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    4:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // XPM image h
 137:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   22:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    5:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
 315              		.loc 2 137 0 discriminator 1
 316 0118 488B7DF8 		movq	-8(%rbp), %rdi
 317 011c 83EB01   		subl	$1, %ebx
 318              	.LVL30:
 319 011f 4885FF   		testq	%rdi, %rdi
 320 0122 7405     		je	.L42
 321              		.loc 2 137 0 is_stmt 0 discriminator 2
 322 0124 E8000000 		call	_ZdaPv
 322      00
 323              	.LVL31:
 324              	.L42:
 325 0129 4883ED08 		subq	$8, %rbp
 326              		.loc 2 137 0
 327 012d 85DB     		testl	%ebx, %ebx
 328 012f 75E7     		jne	.L41
 329              	.LVL32:
 138:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   23:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // Copyright 1
 330              		.loc 2 138 0 is_stmt 1
 331 0131 4C89FF   		movq	%r15, %rdi
 332 0134 E8000000 		call	_ZdaPv
 332      00
 333              	.LVL33:
 139:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   24:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    7:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
 334              		.loc 2 139 0
 335 0139 4D85E4   		testq	%r12, %r12
 336 013c 7408     		je	.L11
 337              	.L53:
 338              	.LVL34:
 339              		.loc 2 139 0 is_stmt 0 discriminator 1
 340 013e 4C89E7   		movq	%r12, %rdi
 341 0141 E8000000 		call	fclose
 341      00
 342              	.LVL35:
 343              	.L11:
 344              	.LBE108:
 345              	.LBE164:
 140:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   25:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // This librar
 346              		.loc 2 140 0 is_stmt 1
 347 0146 488B8424 		movq	2152(%rsp), %rax
 347      68080000 
 348 014e 64483304 		xorq	%fs:40, %rax
 348      25280000 
 348      00
 349 0157 0F857D03 		jne	.L96
 349      0000
 350 015d 4881C478 		addq	$2168, %rsp
 350      080000
 351              		.cfi_remember_state
 352              		.cfi_def_cfa_offset 56
 353 0164 5B       		popq	%rbx
 354              		.cfi_def_cfa_offset 48
 355 0165 5D       		popq	%rbp
 356              		.cfi_def_cfa_offset 40
 357 0166 415C     		popq	%r12
 358              		.cfi_def_cfa_offset 32
 359 0168 415D     		popq	%r13
 360              		.cfi_def_cfa_offset 24
 361 016a 415E     		popq	%r14
 362              		.cfi_def_cfa_offset 16
 363 016c 415F     		popq	%r15
 364              		.cfi_def_cfa_offset 8
 365 016e C3       		ret
 366              	.LVL36:
 367 016f 90       		.p2align 4,,10
 368              		.p2align 3
 369              	.L93:
 370              		.cfi_restore_state
 371 0170 0FB64424 		movzbl	81(%rsp), %eax
 371      51
 372              	.LBB165:
 373              	.LBB161:
 374              	.LBB157:
 375              	.LBB110:
 376              	.LBB111:
 377              	.LBB112:
 378              	.LBB113:
 379              	.LBB114:
 258:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 380              		.loc 5 258 0
 381 0175 488D8D14 		leaq	2068(%rbp), %rcx
 381      080000
 382              	.LBE114:
 383              	.LBE113:
 384              	.LBE112:
 385              	.LBE111:
 386              	.LBE110:
  66:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   36              		.set	_ZN12Fl_XPM_ImageD1Ev,_ZN12Fl_XPM_ImageD2Ev
 387              		.loc 2 66 0
 388 017c 4C8D4D01 		leaq	1(%rbp), %r9
  69:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   39              	.LCOLDB1:
 389              		.loc 2 69 0
 390 0180 4C8D9500 		leaq	2048(%rbp), %r10
 390      080000
  66:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   36              		.set	_ZN12Fl_XPM_ImageD1Ev,_ZN12Fl_XPM_ImageD2Ev
 391              		.loc 2 66 0
 392 0187 4989ED   		movq	%rbp, %r13
 393              	.LBB143:
 394              	.LBB140:
 395              	.LBB136:
 396              	.LBB117:
 397              	.LBB115:
 258:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 398              		.loc 5 258 0
 399 018a 48894C24 		movq	%rcx, 24(%rsp)
 399      18
 400              	.L15:
 401              	.LVL37:
 402              	.LBE115:
 403              	.LBE117:
 404              	.LBE136:
 405              	.LBE140:
 406              	.LBE143:
  69:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   39              	.LCOLDB1:
 407              		.loc 2 69 0
 408 018f 3C22     		cmpb	$34, %al
 409 0191 7422     		je	.L17
 410              	.L98:
 411 0193 4D39D5   		cmpq	%r10, %r13
 412 0196 731D     		jnb	.L17
 413              	.LBB144:
  70:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   40              		.section	.text._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comd
 414              		.loc 2 70 0
 415 0198 3C5C     		cmpb	$92, %al
 416 019a 0F84D000 		je	.L97
 416      0000
 417              	.LVL38:
 101:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   69              		.cfi_endproc
 418              		.loc 2 101 0
 419 01a0 41884500 		movb	%al, 0(%r13)
 420 01a4 410FB641 		movzbl	1(%r9), %eax
 420      01
 421 01a9 4983C501 		addq	$1, %r13
 422              	.LVL39:
 423 01ad 4983C101 		addq	$1, %r9
 424              	.LVL40:
 425              	.LBE144:
  69:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   39              	.LCOLDB1:
 426              		.loc 2 69 0
 427 01b1 3C22     		cmpb	$34, %al
 428 01b3 75DE     		jne	.L98
 429              	.L17:
 105:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   74              		.section	.text._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comd
 430              		.loc 2 105 0
 431 01b5 8B44240C 		movl	12(%rsp), %eax
 104:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   73              	.LCOLDE1:
 432              		.loc 2 104 0
 433 01b9 4D8D5501 		leaq	1(%r13), %r10
 434              	.LVL41:
 435 01bd 41C64500 		movb	$0, 0(%r13)
 435      00
 105:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   74              		.section	.text._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comd
 436              		.loc 2 105 0
 437 01c2 39D8     		cmpl	%ebx, %eax
 438 01c4 0F8F6601 		jg	.L31
 438      0000
 106:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   75              	.LHOTE1:
 439              		.loc 2 106 0
 440 01ca 05000100 		addl	$256, %eax
 440      00
 441 01cf 4C895424 		movq	%r10, 32(%rsp)
 441      20
 442 01d4 4863D0   		movslq	%eax, %rdx
 443 01d7 8944240C 		movl	%eax, 12(%rsp)
 444              	.LVL42:
 445 01db 48C1E203 		salq	$3, %rdx
 446 01df 4889D7   		movq	%rdx, %rdi
 447 01e2 48895424 		movq	%rdx, 24(%rsp)
 447      18
 448 01e7 E8000000 		call	_Znam
 448      00
 449              	.LVL43:
 450              	.LBB145:
 451              	.LBB146:
 452              		.file 6 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 453              		.loc 6 53 0
 454 01ec 488B5424 		movq	24(%rsp), %rdx
 454      18
 455 01f1 4C89FE   		movq	%r15, %rsi
 456 01f4 4889C7   		movq	%rax, %rdi
 457              	.LBE146:
 458              	.LBE145:
 106:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   75              	.LHOTE1:
 459              		.loc 2 106 0
 460 01f7 4989C5   		movq	%rax, %r13
 461              	.LVL44:
 462              	.LBB148:
 463              	.LBB147:
 464              		.loc 6 53 0
 465 01fa 4881EA00 		subq	$2048, %rdx
 465      080000
 466              	.LVL45:
 467 0201 E8000000 		call	memcpy
 467      00
 468              	.LVL46:
 469              	.LBE147:
 470              	.LBE148:
 108:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   77              	.LCOLDB2:
 471              		.loc 2 108 0
 472 0206 4C89FF   		movq	%r15, %rdi
 473 0209 4D89EF   		movq	%r13, %r15
 474              	.LVL47:
 475 020c E8000000 		call	_ZdaPv
 475      00
 476              	.LVL48:
 477 0211 4C8B5424 		movq	32(%rsp), %r10
 477      20
 478              	.LVL49:
 479              	.L32:
 119:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    5:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    5              		.align 2
 480              		.loc 2 119 0
 481 0216 8B442448 		movl	72(%rsp), %eax
 482 021a 85C0     		testl	%eax, %eax
 483 021c 0F882E02 		js	.L99
 483      0000
 484              	.L45:
 485 0222 39C3     		cmpl	%eax, %ebx
 486 0224 0F8F5702 		jg	.L100
 486      0000
 487 022a 48634424 		movslq	76(%rsp), %rax
 487      4C
 120:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6              	.LCOLDB0:
 488              		.loc 2 120 0
 489 022f 4929EA   		subq	%rbp, %r10
 490 0232 4D89D5   		movq	%r10, %r13
 491              	.L35:
 120:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6              	.LCOLDB0:
 492              		.loc 2 120 0 is_stmt 0 discriminator 4
 493 0235 4C39E8   		cmpq	%r13, %rax
 494 0238 0F8D8702 		jge	.L36
 494      0000
 121:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    7:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    7              		.section	.text._ZN12Fl_XPM_ImageD2E
 495              		.loc 2 121 0 is_stmt 1
 496 023e 4B8D1CF7 		leaq	(%r15,%r14,8), %rbx
 497              	.LVL50:
 498 0242 498D7D01 		leaq	1(%r13), %rdi
 499 0246 4983C601 		addq	$1, %r14
 500              	.LVL51:
 501 024a E8000000 		call	_Znam
 501      00
 502              	.LVL52:
 503              	.LBB149:
 504              	.LBB150:
 505              		.loc 6 53 0
 506 024f 4C89EA   		movq	%r13, %rdx
 507              	.LBE150:
 508              	.LBE149:
 121:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    7:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    7              		.section	.text._ZN12Fl_XPM_ImageD2E
 509              		.loc 2 121 0
 510 0252 488903   		movq	%rax, (%rbx)
 511              	.LVL53:
 512              	.LBB152:
 513              	.LBB151:
 514              		.loc 6 53 0
 515 0255 4889EE   		movq	%rbp, %rsi
 516 0258 4889C7   		movq	%rax, %rdi
 517 025b E8000000 		call	memcpy
 517      00
 518              	.LVL54:
 519              	.LBE151:
 520              	.LBE152:
 123:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    9:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    9              		.align 2
 521              		.loc 2 123 0
 522 0260 42C60428 		movb	$0, (%rax,%r13)
 522      00
 523 0265 E946FEFF 		jmp	.L37
 523      FF
 524              	.LVL55:
 525 026a 660F1F44 		.p2align 4,,10
 525      0000
 526              		.p2align 3
 527              	.L97:
 528              	.LBB153:
 529              	.LBB141:
  70:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   40              		.section	.text._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comd
 530              		.loc 2 70 0 discriminator 1
 531 0270 410FB641 		movzbl	1(%r9), %eax
 531      01
 532 0275 4D8D4101 		leaq	1(%r9), %r8
 533              	.LVL56:
 534 0279 3C0A     		cmpb	$10, %al
 535 027b 0F846F01 		je	.L20
 535      0000
 536 0281 0F8E8900 		jle	.L101
 536      0000
 537 0287 3C0D     		cmpb	$13, %al
 538 0289 0F846101 		je	.L20
 538      0000
 539 028f 3C78     		cmpb	$120, %al
 540 0291 0F85F100 		jne	.L19
 540      0000
 541              	.LBB137:
 542              	.LBB118:
  77:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   48              		.loc 1 31 0
 543              		.loc 2 77 0
 544 0297 498D4902 		leaq	2(%r9), %rcx
 545              	.LVL57:
  78:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   49              		.cfi_startproc
 546              		.loc 2 78 0
 547 029b 4C896424 		movq	%r12, 32(%rsp)
 547      20
 548 02a0 4983C104 		addq	$4, %r9
 549 02a4 4189DC   		movl	%ebx, %r12d
 550 02a7 31D2     		xorl	%edx, %edx
 551 02a9 4889CB   		movq	%rcx, %rbx
 552              	.LVL58:
 553              	.L26:
 554              	.LBB119:
 555              	.LBB120:
  80:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   51 0000 53       		pushq	%rbx
 556              		.loc 2 80 0
 557 02ac 0FBE3B   		movsbl	(%rbx), %edi
 558              	.LVL59:
 559              	.LBB121:
 560              	.LBB122:
  39:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   23:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** #ifndef Fl_XPM_Image_H
 561              		.loc 2 39 0
 562 02af 8D47D0   		leal	-48(%rdi), %eax
 563 02b2 83F809   		cmpl	$9, %eax
 564 02b5 7621     		jbe	.L24
 565 02b7 4C895424 		movq	%r10, 56(%rsp)
 565      38
 566 02bc 89542430 		movl	%edx, 48(%rsp)
 567 02c0 4C894C24 		movq	%r9, 40(%rsp)
 567      28
 568 02c5 E8000000 		call	_ZL8hexdigiti.part.0
 568      00
 569              	.LVL60:
 570 02ca 4C8B5424 		movq	56(%rsp), %r10
 570      38
 571 02cf 8B542430 		movl	48(%rsp), %edx
 572 02d3 4C8B4C24 		movq	40(%rsp), %r9
 572      28
 573              	.LVL61:
 574              	.L24:
 575              	.LBE122:
 576              	.LBE121:
  81:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   52              		.cfi_def_cfa_offset 16
 577              		.loc 2 81 0
 578 02d8 83F80F   		cmpl	$15, %eax
 579 02db 0F8F5201 		jg	.L62
 579      0000
  82:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   53              		.cfi_offset 3, -16
 580              		.loc 2 82 0 discriminator 2
 581 02e1 C1E204   		sall	$4, %edx
 582              	.LVL62:
  83:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   54              		.loc 1 31 0
 583              		.loc 2 83 0 discriminator 2
 584 02e4 4883C301 		addq	$1, %rbx
 585              	.LVL63:
  82:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   53              		.cfi_offset 3, -16
 586              		.loc 2 82 0 discriminator 2
 587 02e8 01C2     		addl	%eax, %edx
 588              	.LVL64:
 589              	.LBE120:
  79:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   50              	.LVL2:
 590              		.loc 2 79 0 discriminator 2
 591 02ea 4C39CB   		cmpq	%r9, %rbx
 592 02ed 75BD     		jne	.L26
 593              	.LVL65:
 594              	.L87:
 595 02ef 4489E3   		movl	%r12d, %ebx
 596              	.LVL66:
 597 02f2 4C8B6424 		movq	32(%rsp), %r12
 597      20
 598              	.LVL67:
 599              	.L27:
 600              	.LBE119:
 601              	.LBE118:
 602              	.LBB123:
  98:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   67 0014 E9000000 		jmp	_ZdlPv
 603              		.loc 2 98 0
 604 02f7 41885500 		movb	%dl, 0(%r13)
 605 02fb 4983C501 		addq	$1, %r13
 606              	.LVL68:
 607 02ff 410FB601 		movzbl	(%r9), %eax
 608              	.LBE123:
  99:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   67      00
 609              		.loc 2 99 0
 610 0303 E987FEFF 		jmp	.L15
 610      FF
 611              	.LVL69:
 612 0308 0F1F8400 		.p2align 4,,10
 612      00000000 
 613              		.p2align 3
 614              	.L101:
 615              	.LBE137:
  70:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   40              		.section	.text._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comd
 616              		.loc 2 70 0 discriminator 1
 617 0310 84C0     		testb	%al, %al
 618 0312 7574     		jne	.L19
  70:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   40              		.section	.text._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comd
 619              		.loc 2 70 0 is_stmt 0
 620 0314 4D89C1   		movq	%r8, %r9
 621 0317 E973FEFF 		jmp	.L15
 621      FF
 622              	.LVL70:
 623 031c 0F1F4000 		.p2align 4,,10
 624              		.p2align 3
 625              	.L38:
 626              	.LBE141:
 627              	.LBE153:
 628              	.LBE157:
 138:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   24:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    7:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
 629              		.loc 2 138 0 is_stmt 1
 630 0320 4C89FF   		movq	%r15, %rdi
 631 0323 E8000000 		call	_ZdaPv
 631      00
 632              	.LVL71:
 633 0328 E919FEFF 		jmp	.L11
 633      FF
 634              	.LVL72:
 635 032d 0F1F00   		.p2align 4,,10
 636              		.p2align 3
 637              	.L31:
 638              	.LBB158:
 118:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_XPM
 639              		.loc 2 118 0
 640 0330 85DB     		testl	%ebx, %ebx
 641 0332 0F85DEFE 		jne	.L32
 641      FFFF
 118:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_XPM
 642              		.loc 2 118 0 is_stmt 0 discriminator 1
 643 0338 4C8D4C24 		leaq	76(%rsp), %r9
 643      4C
 644              	.LVL73:
 645 033d 4C8D4424 		leaq	72(%rsp), %r8
 645      48
 646 0342 488D4C24 		leaq	68(%rsp), %rcx
 646      44
 647 0347 488D5424 		leaq	64(%rsp), %rdx
 647      40
 648 034c 31C0     		xorl	%eax, %eax
 649 034e BE000000 		movl	$.LC4, %esi
 649      00
 650 0353 4889EF   		movq	%rbp, %rdi
 651 0356 4C895424 		movq	%r10, 24(%rsp)
 651      18
 652 035b E8000000 		call	sscanf
 652      00
 653              	.LVL74:
 654 0360 83F803   		cmpl	$3, %eax
 655 0363 4C8B5424 		movq	24(%rsp), %r10
 655      18
 656 0368 0F8E5F01 		jle	.L55
 656      0000
 119:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    5:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    5              		.align 2
 657              		.loc 2 119 0 is_stmt 1
 658 036e 8B442448 		movl	72(%rsp), %eax
 659 0372 85C0     		testl	%eax, %eax
 660 0374 0F89A8FE 		jns	.L45
 660      FFFF
 661              	.LVL75:
 662              	.L49:
 120:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6              	.LCOLDB0:
 663              		.loc 2 120 0
 664 037a 4929EA   		subq	%rbp, %r10
 665 037d 4D89D5   		movq	%r10, %r13
 666 0380 E9F00000 		jmp	.L47
 666      00
 667              	.LVL76:
 668              		.p2align 4,,10
 669 0385 0F1F00   		.p2align 3
 670              	.L19:
 671              	.LBB154:
 672              	.LBB142:
 673              	.LBB138:
 674              	.LBB133:
  88:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   58      000000
 675              		.loc 2 88 0
 676 0388 0FBED0   		movsbl	%al, %edx
 677 038b 498D4902 		leaq	2(%r9), %rcx
 678              	.LVL77:
 679              	.LBB124:
  89:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   59 000b E8000000 		call	_ZN9Fl_PixmapD2Ev
 680              		.loc 2 89 0
 681 038f 8D42D0   		leal	-48(%rdx), %eax
 682 0392 83F807   		cmpl	$7, %eax
 683 0395 0F87A300 		ja	.L89
 683      0000
 684 039b 4C896424 		movq	%r12, 32(%rsp)
 684      20
 685              	.LBB125:
  90:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   59      00
 686              		.loc 2 90 0
 687 03a0 89C2     		movl	%eax, %edx
 688              	.LVL78:
 689 03a2 4189DC   		movl	%ebx, %r12d
 690 03a5 4983C104 		addq	$4, %r9
 691 03a9 4889CB   		movq	%rcx, %rbx
 692              	.LVL79:
 693              	.L30:
 694              	.LBB126:
 695              	.LBB127:
  92:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   61              	.LBE65:
 696              		.loc 2 92 0
 697 03ac 0FBE3B   		movsbl	(%rbx), %edi
 698              	.LVL80:
 699              	.LBB128:
 700              	.LBB129:
  39:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   23:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** #ifndef Fl_XPM_Image_H
 701              		.loc 2 39 0
 702 03af 8D47D0   		leal	-48(%rdi), %eax
 703 03b2 83F809   		cmpl	$9, %eax
 704 03b5 7621     		jbe	.L29
 705 03b7 4C895424 		movq	%r10, 56(%rsp)
 705      38
 706 03bc 89542430 		movl	%edx, 48(%rsp)
 707 03c0 4C894C24 		movq	%r9, 40(%rsp)
 707      28
 708 03c5 E8000000 		call	_ZL8hexdigiti.part.0
 708      00
 709              	.LVL81:
 710 03ca 4C8B5424 		movq	56(%rsp), %r10
 710      38
 711 03cf 8B542430 		movl	48(%rsp), %edx
 712 03d3 4C8B4C24 		movq	40(%rsp), %r9
 712      28
 713              	.LVL82:
 714              	.L29:
 715              	.LBE129:
 716              	.LBE128:
  93:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   62              	.LBE64:
 717              		.loc 2 93 0
 718 03d8 83F807   		cmpl	$7, %eax
 719 03db 7F56     		jg	.L62
  95:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   64 0013 5B       		popq	%rbx
 720              		.loc 2 95 0 discriminator 2
 721 03dd 4883C301 		addq	$1, %rbx
 722              	.LVL83:
  94:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   63 0010 4889DF   		movq	%rbx, %rdi
 723              		.loc 2 94 0 discriminator 2
 724 03e1 8D14D0   		leal	(%rax,%rdx,8), %edx
 725              	.LVL84:
 726              	.LBE127:
  91:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   60              	.LVL3:
 727              		.loc 2 91 0 discriminator 2
 728 03e4 4C39CB   		cmpq	%r9, %rbx
 729 03e7 0F8402FF 		je	.L87
 729      FFFF
 730 03ed EBBD     		jmp	.L30
 731              	.LVL85:
 732 03ef 90       		.p2align 4,,10
 733              		.p2align 3
 734              	.L20:
 735              	.LBE126:
 736              	.LBE125:
 737              	.LBE124:
 738              	.LBE133:
 739              	.LBB134:
 740              	.LBB116:
 258:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 741              		.loc 5 258 0
 742 03f0 488B5424 		movq	24(%rsp), %rdx
 742      18
 743 03f5 4C89C7   		movq	%r8, %rdi
 744 03f8 4C89E1   		movq	%r12, %rcx
 745 03fb BE120800 		movl	$2066, %esi
 745      00
 746 0400 4C895424 		movq	%r10, 48(%rsp)
 746      30
 747 0405 4C894C24 		movq	%r9, 40(%rsp)
 747      28
 748              	.LVL86:
 749 040a 4C894424 		movq	%r8, 32(%rsp)
 749      20
 750 040f 4C29C2   		subq	%r8, %rdx
 751 0412 E8000000 		call	__fgets_chk
 751      00
 752              	.LVL87:
 753 0417 4C8B4C24 		movq	40(%rsp), %r9
 753      28
 754              	.LBE116:
 755              	.LBE134:
 756              	.LBE138:
  70:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   40              		.section	.text._ZN12Fl_XPM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comd
 757              		.loc 2 70 0
 758 041c 4C8B4424 		movq	32(%rsp), %r8
 758      20
 759 0421 4C8B5424 		movq	48(%rsp), %r10
 759      30
 760 0426 410FB641 		movzbl	1(%r9), %eax
 760      01
 761 042b 4D89C1   		movq	%r8, %r9
 762 042e E95CFDFF 		jmp	.L15
 762      FF
 763              	.LVL88:
 764              	.L62:
 765 0433 4889D9   		movq	%rbx, %rcx
 766 0436 4489E3   		movl	%r12d, %ebx
 767              	.LVL89:
 768 0439 4C8B6424 		movq	32(%rsp), %r12
 768      20
 769              	.LVL90:
 770              	.L89:
 771              	.LBB139:
 772              	.LBB135:
 773              	.LBB132:
 774              	.LBB131:
 775              	.LBB130:
 776 043e 4989C9   		movq	%rcx, %r9
 777 0441 E9B1FEFF 		jmp	.L27
 777      FF
 778              	.LVL91:
 779 0446 662E0F1F 		.p2align 4,,10
 779      84000000 
 779      0000
 780              		.p2align 3
 781              	.L99:
 782              	.LBE130:
 783              	.LBE131:
 784              	.LBE132:
 785              	.LBE135:
 786              	.LBE139:
 787              	.LBE142:
 788              	.LBE154:
 119:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    5:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    5              		.align 2
 789              		.loc 2 119 0
 790 0450 4983FE01 		cmpq	$1, %r14
 791 0454 0F8620FF 		jbe	.L49
 791      FFFF
 792 045a 8B542440 		movl	64(%rsp), %edx
 793 045e 4929EA   		subq	%rbp, %r10
 794 0461 0FAF5424 		imull	76(%rsp), %edx
 794      4C
 795 0466 4D89D5   		movq	%r10, %r13
 796 0469 4863D2   		movslq	%edx, %rdx
 797 046c 4C39D2   		cmpq	%r10, %rdx
 798 046f 0F8D98FC 		jge	.L54
 798      FFFF
 799              	.L47:
 120:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6              	.LCOLDB0:
 800              		.loc 2 120 0 discriminator 1
 801 0475 F7D8     		negl	%eax
 802 0477 C1E002   		sall	$2, %eax
 803 047a 4898     		cltq
 804 047c E9B4FDFF 		jmp	.L35
 804      FF
 805              	.L100:
 119:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    5:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    5              		.align 2
 806              		.loc 2 119 0
 807 0481 48634424 		movslq	76(%rsp), %rax
 807      4C
 808 0486 8B542440 		movl	64(%rsp), %edx
 809 048a 4929EA   		subq	%rbp, %r10
 810 048d 4D89D5   		movq	%r10, %r13
 811 0490 0FAFD0   		imull	%eax, %edx
 812 0493 4863D2   		movslq	%edx, %rdx
 813 0496 4939D2   		cmpq	%rdx, %r10
 814 0499 0F8F96FD 		jg	.L35
 814      FFFF
 815 049f E969FCFF 		jmp	.L54
 815      FF
 816              	.LVL92:
 817              		.p2align 4,,10
 818 04a4 0F1F4000 		.p2align 3
 819              	.L95:
 820              	.LBE158:
 821              	.LBB159:
 822              	.LBB160:
 823              		.file 7 "fltk-1.3.4-1/FL/Fl_Image.H"
   1:fltk-1.3.4-1/FL/Fl_Image.H **** //
   2:fltk-1.3.4-1/FL/Fl_Image.H **** // "$Id: Fl_Image.H 12028 2016-10-14 16:35:44Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Image.H **** //
   4:fltk-1.3.4-1/FL/Fl_Image.H **** // Image header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Image.H **** //
   6:fltk-1.3.4-1/FL/Fl_Image.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Image.H **** //
   8:fltk-1.3.4-1/FL/Fl_Image.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Image.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Image.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Image.H **** //
  12:fltk-1.3.4-1/FL/Fl_Image.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Image.H **** //
  14:fltk-1.3.4-1/FL/Fl_Image.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Image.H **** //
  16:fltk-1.3.4-1/FL/Fl_Image.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Image.H **** //
  18:fltk-1.3.4-1/FL/Fl_Image.H **** 
  19:fltk-1.3.4-1/FL/Fl_Image.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl_Image.H ****    Fl_Image, Fl_RGB_Image classes. */
  21:fltk-1.3.4-1/FL/Fl_Image.H **** 
  22:fltk-1.3.4-1/FL/Fl_Image.H **** #ifndef Fl_Image_H
  23:fltk-1.3.4-1/FL/Fl_Image.H **** #  define Fl_Image_H
  24:fltk-1.3.4-1/FL/Fl_Image.H **** 
  25:fltk-1.3.4-1/FL/Fl_Image.H **** #  include "Enumerations.H"
  26:fltk-1.3.4-1/FL/Fl_Image.H **** #include <stdlib.h>
  27:fltk-1.3.4-1/FL/Fl_Image.H **** 
  28:fltk-1.3.4-1/FL/Fl_Image.H **** class Fl_Widget;
  29:fltk-1.3.4-1/FL/Fl_Image.H **** class Fl_Pixmap;
  30:fltk-1.3.4-1/FL/Fl_Image.H **** struct Fl_Menu_Item;
  31:fltk-1.3.4-1/FL/Fl_Image.H **** struct Fl_Label;
  32:fltk-1.3.4-1/FL/Fl_Image.H **** 
  33:fltk-1.3.4-1/FL/Fl_Image.H **** 
  34:fltk-1.3.4-1/FL/Fl_Image.H **** /** \enum Fl_RGB_Scaling
  35:fltk-1.3.4-1/FL/Fl_Image.H ****  The scaling algorithm to use for RGB images.
  36:fltk-1.3.4-1/FL/Fl_Image.H **** */
  37:fltk-1.3.4-1/FL/Fl_Image.H **** enum Fl_RGB_Scaling {
  38:fltk-1.3.4-1/FL/Fl_Image.H ****   FL_RGB_SCALING_NEAREST = 0, ///< default RGB image scaling algorithm
  39:fltk-1.3.4-1/FL/Fl_Image.H ****   FL_RGB_SCALING_BILINEAR     ///< more accurate, but slower RGB image scaling algorithm
  40:fltk-1.3.4-1/FL/Fl_Image.H **** };
  41:fltk-1.3.4-1/FL/Fl_Image.H **** 
  42:fltk-1.3.4-1/FL/Fl_Image.H **** 
  43:fltk-1.3.4-1/FL/Fl_Image.H **** /**
  44:fltk-1.3.4-1/FL/Fl_Image.H ****  \brief Base class for image caching and drawing.
  45:fltk-1.3.4-1/FL/Fl_Image.H ****  
  46:fltk-1.3.4-1/FL/Fl_Image.H ****  Fl_Image is the base class used for caching and drawing all kinds of images 
  47:fltk-1.3.4-1/FL/Fl_Image.H ****  in FLTK. This class keeps track of common image data such as the pixels, 
  48:fltk-1.3.4-1/FL/Fl_Image.H ****  colormap, width, height, and depth. Virtual methods are used to provide 
  49:fltk-1.3.4-1/FL/Fl_Image.H ****  type-specific image handling.
  50:fltk-1.3.4-1/FL/Fl_Image.H ****   
  51:fltk-1.3.4-1/FL/Fl_Image.H ****  Since the Fl_Image class does not support image
  52:fltk-1.3.4-1/FL/Fl_Image.H ****  drawing by itself, calling the draw() method results in
  53:fltk-1.3.4-1/FL/Fl_Image.H ****  a box with an X in it being drawn instead.
  54:fltk-1.3.4-1/FL/Fl_Image.H **** */
  55:fltk-1.3.4-1/FL/Fl_Image.H **** class FL_EXPORT Fl_Image {
  56:fltk-1.3.4-1/FL/Fl_Image.H ****     
  57:fltk-1.3.4-1/FL/Fl_Image.H **** public:
  58:fltk-1.3.4-1/FL/Fl_Image.H ****   static const int ERR_NO_IMAGE    = -1;
  59:fltk-1.3.4-1/FL/Fl_Image.H ****   static const int ERR_FILE_ACCESS = -2;
  60:fltk-1.3.4-1/FL/Fl_Image.H ****   static const int ERR_FORMAT      = -3;
  61:fltk-1.3.4-1/FL/Fl_Image.H ****     
  62:fltk-1.3.4-1/FL/Fl_Image.H **** private:
  63:fltk-1.3.4-1/FL/Fl_Image.H ****   int w_, h_, d_, ld_, count_;
  64:fltk-1.3.4-1/FL/Fl_Image.H ****   const char * const *data_;
  65:fltk-1.3.4-1/FL/Fl_Image.H ****   static Fl_RGB_Scaling RGB_scaling_;
  66:fltk-1.3.4-1/FL/Fl_Image.H **** 
  67:fltk-1.3.4-1/FL/Fl_Image.H ****   // Forbid use of copy constructor and assign operator
  68:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image & operator=(const Fl_Image &);
  69:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image(const Fl_Image &);
  70:fltk-1.3.4-1/FL/Fl_Image.H **** 
  71:fltk-1.3.4-1/FL/Fl_Image.H **** protected:
  72:fltk-1.3.4-1/FL/Fl_Image.H **** 
  73:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  74:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image width in pixels.
  75:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   void w(int W) {w_ = W;}
  77:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  78:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image height in pixels.
  79:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   void h(int H) {h_ = H;}
  81:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  82:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image depth.
  83:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   void d(int D) {d_ = D;}
  85:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  86:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current line data size in bytes.
  87:fltk-1.3.4-1/FL/Fl_Image.H **** 
  88:fltk-1.3.4-1/FL/Fl_Image.H ****    Color images may contain extra data that is included after every
  89:fltk-1.3.4-1/FL/Fl_Image.H ****    line of color image data and is normally not present.
  90:fltk-1.3.4-1/FL/Fl_Image.H **** 
  91:fltk-1.3.4-1/FL/Fl_Image.H ****    If \p LD is zero, then line data size is assumed to be w() * d() bytes.
  92:fltk-1.3.4-1/FL/Fl_Image.H **** 
  93:fltk-1.3.4-1/FL/Fl_Image.H ****    If \p LD is non-zero, then it must be positive and larger than w() * d()
  94:fltk-1.3.4-1/FL/Fl_Image.H ****    to account for the extra data per line.
  95:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  96:fltk-1.3.4-1/FL/Fl_Image.H ****   void ld(int LD) {ld_ = LD;}
  97:fltk-1.3.4-1/FL/Fl_Image.H ****   /** 
  98:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current array pointer and count of pointers in the array.
  99:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 100:fltk-1.3.4-1/FL/Fl_Image.H ****   void data(const char * const *p, int c) {data_ = p; count_ = c;}
 824              		.loc 7 100 0
 825 04a8 4D897D20 		movq	%r15, 32(%r13)
 826 04ac 41895D18 		movl	%ebx, 24(%r13)
 827              	.LVL93:
 828              	.LBE160:
 829              	.LBE159:
 133:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   19:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // "$Id: Fl_XP
 830              		.loc 2 133 0
 831 04b0 4C89EF   		movq	%r13, %rdi
 131:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   17:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_XPM_Ima
 832              		.loc 2 131 0
 833 04b3 41C74528 		movl	$1, 40(%r13)
 833      01000000 
 133:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   19:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // "$Id: Fl_XP
 834              		.loc 2 133 0
 835 04bb E8000000 		call	_ZN9Fl_Pixmap7measureEv
 835      00
 836              	.LVL94:
 134:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   20:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
 837              		.loc 2 134 0
 838 04c0 E981FCFF 		jmp	.L11
 838      FF
 839              	.LVL95:
 840              	.L36:
 137:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   23:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    6:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** // Copyright 1
 841              		.loc 2 137 0
 842 04c5 85DB     		testl	%ebx, %ebx
 843 04c7 0F8540FC 		jne	.L54
 843      FFFF
 844              	.LVL96:
 845              	.L55:
 138:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****   24:fltk-1.3.4-1/src/Fl_XPM_Image.cxx ****    7:fltk-1.3.4-1/FL/Fl_XPM_Image.H **** //
 846              		.loc 2 138 0
 847 04cd 4C89FF   		movq	%r15, %rdi
 848 04d0 E8000000 		call	_ZdaPv
 848      00
 849              	.LVL97:
 850 04d5 E964FCFF 		jmp	.L53
 850      FF
 851              	.LVL98:
 852              	.L96:
 853              	.LBE161:
 854              	.LBE165:
 855              		.loc 2 140 0
 856 04da E8000000 		call	__stack_chk_fail
 856      00
 857              	.LVL99:
 858              		.cfi_endproc
 859              	.LFE197:
 861              		.section	.text.unlikely._ZN12Fl_XPM_ImageC2EPKc
 862              	.LCOLDE5:
 863              		.section	.text._ZN12Fl_XPM_ImageC2EPKc
 864              	.LHOTE5:
 865              		.globl	_ZN12Fl_XPM_ImageC1EPKc
 866              		.set	_ZN12Fl_XPM_ImageC1EPKc,_ZN12Fl_XPM_ImageC2EPKc
 867              		.weak	_ZTS12Fl_XPM_Image
 868              		.section	.rodata._ZTS12Fl_XPM_Image,"aG",@progbits,_ZTS12Fl_XPM_Image,comdat
 869              		.align 8
 872              	_ZTS12Fl_XPM_Image:
 873 0000 3132466C 		.string	"12Fl_XPM_Image"
 873      5F58504D 
 873      5F496D61 
 873      676500
 874              		.weak	_ZTI12Fl_XPM_Image
 875              		.section	.rodata._ZTI12Fl_XPM_Image,"aG",@progbits,_ZTI12Fl_XPM_Image,comdat
 876              		.align 8
 879              	_ZTI12Fl_XPM_Image:
 880 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 880      00000000 
 881 0008 00000000 		.quad	_ZTS12Fl_XPM_Image
 881      00000000 
 882 0010 00000000 		.quad	_ZTI9Fl_Pixmap
 882      00000000 
 883              		.weak	_ZTV12Fl_XPM_Image
 884              		.section	.rodata._ZTV12Fl_XPM_Image,"aG",@progbits,_ZTV12Fl_XPM_Image,comdat
 885              		.align 8
 888              	_ZTV12Fl_XPM_Image:
 889 0000 00000000 		.quad	0
 889      00000000 
 890 0008 00000000 		.quad	_ZTI12Fl_XPM_Image
 890      00000000 
 891 0010 00000000 		.quad	_ZN12Fl_XPM_ImageD1Ev
 891      00000000 
 892 0018 00000000 		.quad	_ZN12Fl_XPM_ImageD0Ev
 892      00000000 
 893 0020 00000000 		.quad	_ZN9Fl_Pixmap4copyEii
 893      00000000 
 894 0028 00000000 		.quad	_ZN9Fl_Pixmap13color_averageEjf
 894      00000000 
 895 0030 00000000 		.quad	_ZN9Fl_Pixmap10desaturateEv
 895      00000000 
 896 0038 00000000 		.quad	_ZN9Fl_Pixmap5labelEP9Fl_Widget
 896      00000000 
 897 0040 00000000 		.quad	_ZN9Fl_Pixmap5labelEP12Fl_Menu_Item
 897      00000000 
 898 0048 00000000 		.quad	_ZN9Fl_Pixmap4drawEiiiiii
 898      00000000 
 899 0050 00000000 		.quad	_ZN9Fl_Pixmap7uncacheEv
 899      00000000 
 900              		.text
 901              	.Letext0:
 902              		.section	.text.unlikely._ZN12Fl_XPM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XPM_ImageD5Ev,comdat
 903              	.Letext_cold0:
 904              		.file 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 905              		.file 9 "/usr/include/x86_64-linux-gnu/bits/types.h"
 906              		.file 10 "/usr/include/stdio.h"
 907              		.file 11 "/usr/include/libio.h"
 908              		.file 12 "fltk-1.3.4-1/FL/Enumerations.H"
 909              		.file 13 "fltk-1.3.4-1/FL/fl_utf8.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_XPM_Image.cxx
     /tmp/cco5l6or.s:16     .text._ZN12Fl_XPM_ImageD2Ev:0000000000000000 _ZN12Fl_XPM_ImageD2Ev
     /tmp/cco5l6or.s:888    .rodata._ZTV12Fl_XPM_Image:0000000000000000 _ZTV12Fl_XPM_Image
     /tmp/cco5l6or.s:16     .text._ZN12Fl_XPM_ImageD2Ev:0000000000000000 _ZN12Fl_XPM_ImageD1Ev
     /tmp/cco5l6or.s:46     .text._ZN12Fl_XPM_ImageD0Ev:0000000000000000 _ZN12Fl_XPM_ImageD0Ev
     /tmp/cco5l6or.s:82     .text._ZL8hexdigiti.part.0:0000000000000000 _ZL8hexdigiti.part.0
     /tmp/cco5l6or.s:154    .text._ZN12Fl_XPM_ImageC2EPKc:0000000000000000 _ZN12Fl_XPM_ImageC2EPKc
     /tmp/cco5l6or.s:154    .text._ZN12Fl_XPM_ImageC2EPKc:0000000000000000 _ZN12Fl_XPM_ImageC1EPKc
     /tmp/cco5l6or.s:872    .rodata._ZTS12Fl_XPM_Image:0000000000000000 _ZTS12Fl_XPM_Image
     /tmp/cco5l6or.s:879    .rodata._ZTI12Fl_XPM_Image:0000000000000000 _ZTI12Fl_XPM_Image
                           .group:0000000000000000 _ZN12Fl_XPM_ImageD5Ev
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
_ZN9Fl_PixmapD2Ev
_ZdlPv
__ctype_b_loc
_ZN8Fl_ImageC2Eiii
_ZTV9Fl_Pixmap
_ZN9Fl_Pixmap8set_dataEPKPKc
_ZN9Fl_Pixmap7measureEv
fl_fopen
_Znam
fgets
fclose
_ZdaPv
memcpy
sscanf
__fgets_chk
__stack_chk_fail
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI9Fl_Pixmap
_ZN9Fl_Pixmap4copyEii
_ZN9Fl_Pixmap13color_averageEjf
_ZN9Fl_Pixmap10desaturateEv
_ZN9Fl_Pixmap5labelEP9Fl_Widget
_ZN9Fl_Pixmap5labelEP12Fl_Menu_Item
_ZN9Fl_Pixmap4drawEiiiiii
_ZN9Fl_Pixmap7uncacheEv
