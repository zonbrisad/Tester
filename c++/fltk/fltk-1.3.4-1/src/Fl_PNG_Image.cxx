   1              		.file	"Fl_PNG_Image.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN12Fl_PNG_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comdat
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN12Fl_PNG_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comdat
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN12Fl_PNG_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comdat
  12              	.Ltext_cold0:
  13              		.section	.text._ZN12Fl_PNG_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comdat
  14              		.weak	_ZN12Fl_PNG_ImageD2Ev
  16              	_ZN12Fl_PNG_ImageD2Ev:
  17              	.LFB194:
  18              		.file 1 "fltk-1.3.4-1/FL/Fl_PNG_Image.H"
   1:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
   2:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // "$Id: Fl_PNG_Image.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
   4:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // PNG image header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
   6:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
   8:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
  12:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
  14:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
  16:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
  18:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** 
  19:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****    Fl_PNG_Image class . */
  21:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** 
  22:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** #ifndef Fl_PNG_Image_H
  23:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** #define Fl_PNG_Image_H
  24:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** #  include "Fl_Image.H"
  25:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** 
  26:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** /**
  27:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   The Fl_PNG_Image class supports loading, caching,
  28:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   and drawing of Portable Network Graphics (PNG) image files. The
  29:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   class loads colormapped and full-color images and handles color-
  30:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   and alpha-based transparency.
  31:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** */
  32:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** class FL_EXPORT Fl_PNG_Image : public Fl_RGB_Image {
  19              		.loc 1 32 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              	.LBB62:
  23              		.loc 1 32 0
  24 0000 48C70700 		movq	$_ZTV12Fl_PNG_Image+16, (%rdi)
  24      000000
  25 0007 E9000000 		jmp	_ZN12Fl_RGB_ImageD2Ev
  25      00
  26              	.LVL1:
  27              	.LBE62:
  28              		.cfi_endproc
  29              	.LFE194:
  31              		.section	.text.unlikely._ZN12Fl_PNG_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comdat
  32              	.LCOLDE0:
  33              		.section	.text._ZN12Fl_PNG_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comdat
  34              	.LHOTE0:
  35              		.weak	_ZN12Fl_PNG_ImageD1Ev
  36              		.set	_ZN12Fl_PNG_ImageD1Ev,_ZN12Fl_PNG_ImageD2Ev
  37              		.section	.text.unlikely._ZN12Fl_PNG_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comdat
  38              		.align 2
  39              	.LCOLDB1:
  40              		.section	.text._ZN12Fl_PNG_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comdat
  41              	.LHOTB1:
  42              		.align 2
  43              		.p2align 4,,15
  44              		.weak	_ZN12Fl_PNG_ImageD0Ev
  46              	_ZN12Fl_PNG_ImageD0Ev:
  47              	.LFB196:
  48              		.loc 1 32 0
  49              		.cfi_startproc
  50              	.LVL2:
  51 0000 53       		pushq	%rbx
  52              		.cfi_def_cfa_offset 16
  53              		.cfi_offset 3, -16
  54              		.loc 1 32 0
  55 0001 4889FB   		movq	%rdi, %rbx
  56              	.LBB63:
  57              	.LBB64:
  58 0004 48C70700 		movq	$_ZTV12Fl_PNG_Image+16, (%rdi)
  58      000000
  59 000b E8000000 		call	_ZN12Fl_RGB_ImageD2Ev
  59      00
  60              	.LVL3:
  61              	.LBE64:
  62              	.LBE63:
  63 0010 4889DF   		movq	%rbx, %rdi
  64 0013 5B       		popq	%rbx
  65              		.cfi_def_cfa_offset 8
  66              	.LVL4:
  67 0014 E9000000 		jmp	_ZdlPv
  67      00
  68              	.LVL5:
  69              		.cfi_endproc
  70              	.LFE196:
  72              		.section	.text.unlikely._ZN12Fl_PNG_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comdat
  73              	.LCOLDE1:
  74              		.section	.text._ZN12Fl_PNG_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comdat
  75              	.LHOTE1:
  76              		.section	.rodata.str1.8,"aMS",@progbits,1
  77              		.align 8
  78              	.LC2:
  79 0000 496E7661 		.string	"Invalid attempt to read row data"
  79      6C696420 
  79      61747465 
  79      6D707420 
  79      746F2072 
  80              		.section	.text.unlikely.png_read_data_from_mem,"ax",@progbits
  81              	.LCOLDB3:
  82              		.section	.text.png_read_data_from_mem,"ax",@progbits
  83              	.LHOTB3:
  84              		.p2align 4,,15
  86              	png_read_data_from_mem:
  87              	.LFB185:
  88              		.file 2 "fltk-1.3.4-1/src/Fl_PNG_Image.cxx"
   1:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    1              		.file	"Fl_PNG_Image.cxx"
   2:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_PNG_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNG_Image
   5:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    7              		.section	.text._ZN12Fl_PNG_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comd
   8:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   11              		.section	.text.unlikely._ZN12Fl_PNG_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNG_Image
  12:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   13              		.section	.text._ZN12Fl_PNG_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comd
  14:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   14              		.weak	_ZN12Fl_PNG_ImageD2Ev
  15:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   16              	_ZN12Fl_PNG_ImageD2Ev:
  16:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   17              	.LFB194:
  17:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_PNG_Image.H"
  18:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    1:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
  19:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // "$Id: Fl_PNG_Image.H 8864 2011-07-19 04:49:30Z greg.erc
  20:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
  21:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    4:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // PNG image header file for the Fast Light Tool Kit (FLTK
  22:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    5:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
  23:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    6:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // Copyright 1998-2010 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    7:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
  25:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // This library is free software. Distribution and use rig
  26:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    9:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // the file "COPYING" which should have been included with
  27:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
  29:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   12:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
  31:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   14:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // Please report all bugs and problems on the following pa
  32:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   15:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
  33:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   16:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   17:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
  35:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   18:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** 
  36:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   19:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** /* \file
  37:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   20:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****    Fl_PNG_Image class . */
  38:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   21:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** 
  39:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   22:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** #ifndef Fl_PNG_Image_H
  40:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   23:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** #define Fl_PNG_Image_H
  41:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   24:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** #  include "Fl_Image.H"
  42:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   25:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** 
  43:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** /**
  44:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   The Fl_PNG_Image class supports loading, caching,
  45:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   and drawing of Portable Network Graphics (PNG) image fil
  46:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   class loads colormapped and full-color images and handle
  47:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   30:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   and alpha-based transparency.
  48:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   31:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** */
  49:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   32:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** class FL_EXPORT Fl_PNG_Image : public Fl_RGB_Image {
  50:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   19              		.loc 1 32 0
  51:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   20              		.cfi_startproc
  52:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   21              	.LVL0:
  53:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   22              	.LBB62:
  54:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   23              		.loc 1 32 0
  55:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   24 0000 48C70700 		movq	$_ZTV12Fl_PNG_Image+16, (%rdi)
  56:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   24      000000
  57:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   25 0007 E9000000 		jmp	_ZN12Fl_RGB_ImageD2Ev
  58:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   25      00
  89              		.loc 2 58 0
  90              		.cfi_startproc
  91              	.LVL6:
  92 0000 4154     		pushq	%r12
  93              		.cfi_def_cfa_offset 16
  94              		.cfi_offset 12, -16
  95 0002 55       		pushq	%rbp
  96              		.cfi_def_cfa_offset 24
  97              		.cfi_offset 6, -24
  98 0003 4989F4   		movq	%rsi, %r12
  99 0006 53       		pushq	%rbx
 100              		.cfi_def_cfa_offset 32
 101              		.cfi_offset 3, -32
 102              		.loc 2 58 0
 103 0007 4889D5   		movq	%rdx, %rbp
  59:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   26              	.LVL1:
 104              		.loc 2 59 0
 105 000a E8000000 		call	png_get_io_ptr
 105      00
 106              	.LVL7:
  60:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   27              	.LBE62:
 107              		.loc 2 60 0
 108 000f 488B7008 		movq	8(%rax), %rsi
  59:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   26              	.LVL1:
 109              		.loc 2 59 0
 110 0013 4889C3   		movq	%rax, %rbx
 111              	.LVL8:
 112              		.loc 2 60 0
 113 0016 488D042E 		leaq	(%rsi,%rbp), %rax
 114              	.LVL9:
 115 001a 48394310 		cmpq	%rax, 16(%rbx)
 116 001e 7214     		jb	.L8
 117              	.LVL10:
 118              	.LBB65:
 119              	.LBB66:
 120              		.file 3 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 121              		.loc 3 53 0
 122 0020 4889EA   		movq	%rbp, %rdx
 123 0023 4C89E7   		movq	%r12, %rdi
 124 0026 E8000000 		call	memcpy
 124      00
 125              	.LVL11:
 126              	.LBE66:
 127              	.LBE65:
  61:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   28              		.cfi_endproc
  62:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   29              	.LFE194:
  63:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   31              		.section	.text.unlikely._ZN12Fl_PNG_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNG_Image
  64:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   32              	.LCOLDE0:
  65:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   33              		.section	.text._ZN12Fl_PNG_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comd
  66:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   34              	.LHOTE0:
  67:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   35              		.weak	_ZN12Fl_PNG_ImageD1Ev
 128              		.loc 2 67 0
 129 002b 48016B08 		addq	%rbp, 8(%rbx)
  68:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   36              		.set	_ZN12Fl_PNG_ImageD1Ev,_ZN12Fl_PNG_ImageD2Ev
 130              		.loc 2 68 0
 131 002f 5B       		popq	%rbx
 132              		.cfi_remember_state
 133              		.cfi_def_cfa_offset 24
 134              	.LVL12:
 135 0030 5D       		popq	%rbp
 136              		.cfi_def_cfa_offset 16
 137              	.LVL13:
 138 0031 415C     		popq	%r12
 139              		.cfi_def_cfa_offset 8
 140              	.LVL14:
 141 0033 C3       		ret
 142              	.LVL15:
 143              	.L8:
 144              		.cfi_restore_state
  61:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   28              		.cfi_endproc
 145              		.loc 2 61 0
 146 0034 488B3B   		movq	(%rbx), %rdi
 147 0037 BE000000 		movl	$.LC2, %esi
 147      00
 148 003c E8000000 		call	png_error
 148      00
 149              	.LVL16:
 150              		.cfi_endproc
 151              	.LFE185:
 153              		.section	.text.unlikely.png_read_data_from_mem
 154              	.LCOLDE3:
 155              		.section	.text.png_read_data_from_mem
 156              	.LHOTE3:
 157              		.section	.rodata.str1.1,"aMS",@progbits,1
 158              	.LC4:
 159 0000 496E2D6D 		.string	"In-memory PNG data"
 159      656D6F72 
 159      7920504E 
 159      47206461 
 159      746100
 160              	.LC5:
 161 0013 726200   		.string	"rb"
 162              	.LC6:
 163 0016 312E362E 		.string	"1.6.16"
 163      313600
 164              		.section	.rodata.str1.8
 165 0021 00000000 		.align 8
 165      000000
 166              	.LC7:
 167 0028 43616E6E 		.string	"Cannot allocate memory to read PNG file or data \"%s\".\n"
 167      6F742061 
 167      6C6C6F63 
 167      61746520 
 167      6D656D6F 
 168 005f 00       		.align 8
 169              	.LC8:
 170 0060 504E4720 		.string	"PNG file or data \"%s\" is too large or contains errors!\n"
 170      66696C65 
 170      206F7220 
 170      64617461 
 170      20222573 
 171              		.section	.text.unlikely._ZN12Fl_PNG_Image9load_png_EPKcPKhi,"ax",@progbits
 172              		.align 2
 173              	.LCOLDB9:
 174              		.section	.text._ZN12Fl_PNG_Image9load_png_EPKcPKhi,"ax",@progbits
 175              	.LHOTB9:
 176              		.align 2
 177              		.p2align 4,,15
 178              		.globl	_ZN12Fl_PNG_Image9load_png_EPKcPKhi
 180              	_ZN12Fl_PNG_Image9load_png_EPKcPKhi:
 181              	.LFB192:
  69:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   37              		.section	.text.unlikely._ZN12Fl_PNG_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNG_Image
  70:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   38              		.align 2
  71:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   39              	.LCOLDB1:
  72:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   40              		.section	.text._ZN12Fl_PNG_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comd
  73:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   41              	.LHOTB1:
  74:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   42              		.align 2
  75:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   43              		.p2align 4,,15
  76:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   44              		.weak	_ZN12Fl_PNG_ImageD0Ev
  77:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   46              	_ZN12Fl_PNG_ImageD0Ev:
  78:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   47              	.LFB196:
  79:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   48              		.loc 1 32 0
  80:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   49              		.cfi_startproc
  81:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   50              	.LVL2:
  82:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   51 0000 53       		pushq	%rbx
  83:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   52              		.cfi_def_cfa_offset 16
  84:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   53              		.cfi_offset 3, -16
  85:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   54              		.loc 1 32 0
  86:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   55 0001 4889FB   		movq	%rdi, %rbx
  87:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   56              	.LBB63:
  88:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   57              	.LBB64:
  89:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   58 0004 48C70700 		movq	$_ZTV12Fl_PNG_Image+16, (%rdi)
  90:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   58      000000
  91:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   59 000b E8000000 		call	_ZN12Fl_RGB_ImageD2Ev
  92:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   59      00
  93:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   60              	.LVL3:
  94:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   61              	.LBE64:
  95:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   62              	.LBE63:
  96:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   63 0010 4889DF   		movq	%rbx, %rdi
  97:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   64 0013 5B       		popq	%rbx
  98:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   65              		.cfi_def_cfa_offset 8
  99:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   66              	.LVL4:
 100:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   67 0014 E9000000 		jmp	_ZdlPv
 101:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   67      00
 102:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   68              	.LVL5:
 103:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   69              		.cfi_endproc
 104:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   70              	.LFE196:
 105:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   72              		.section	.text.unlikely._ZN12Fl_PNG_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNG_Image
 106:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   73              	.LCOLDE1:
 107:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   74              		.section	.text._ZN12Fl_PNG_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comd
 108:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   75              	.LHOTE1:
 109:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   76              		.section	.rodata.str1.8,"aMS",@progbits,1
 110:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   77              		.align 8
 111:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   78              	.LC2:
 112:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   79 0000 496E7661 		.string	"Invalid attempt to read row data"
 182              		.loc 2 112 0
 183              		.cfi_startproc
 184              	.LVL17:
 185 0000 55       		pushq	%rbp
 186              		.cfi_def_cfa_offset 16
 187              		.cfi_offset 6, -16
 188 0001 53       		pushq	%rbx
 189              		.cfi_def_cfa_offset 24
 190              		.cfi_offset 3, -24
 191 0002 4883EC78 		subq	$120, %rsp
 192              		.cfi_def_cfa_offset 144
 193              		.loc 2 112 0
 194 0006 64488B1C 		movq	%fs:40, %rbx
 194      25280000 
 194      00
 195 000f 48895C24 		movq	%rbx, 104(%rsp)
 195      68
 196 0014 31DB     		xorl	%ebx, %ebx
 113:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   79      6C696420 
 114:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   79      61747465 
 115:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   79      6D707420 
 116:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   79      746F2072 
 117:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   80              		.section	.text.unlikely.png_read_data_from_mem,"ax",@progbits
 118:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   81              	.LCOLDB3:
 119:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   82              		.section	.text.png_read_data_from_mem,"ax",@progbits
 120:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   83              	.LHOTB3:
 121:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   84              		.p2align 4,,15
 122:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   86              	png_read_data_from_mem:
 123:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   87              	.LFB185:
 197              		.loc 2 123 0
 198 0016 4885D2   		testq	%rdx, %rdx
 112:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   79      6C696420 
 199              		.loc 2 112 0
 200 0019 48893C24 		movq	%rdi, (%rsp)
 201 001d 48897424 		movq	%rsi, 16(%rsp)
 201      10
 202 0022 48895424 		movq	%rdx, 8(%rsp)
 202      08
 203 0027 894C242C 		movl	%ecx, 44(%rsp)
 115:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   79      746F2072 
 204              		.loc 2 115 0
 205 002b 48C74424 		movq	$0, 32(%rsp)
 205      20000000 
 205      00
 206              	.LVL18:
 118:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   82              		.section	.text.png_read_data_from_mem,"ax",@progbits
 207              		.loc 2 118 0
 208 0034 48C74424 		movq	$0, 72(%rsp)
 208      48000000 
 208      00
 209              	.LVL19:
 210              		.loc 2 123 0
 211 003d 0F84ED03 		je	.L74
 211      0000
 212              	.LVL20:
 213              	.L10:
 124:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   88              		.file 2 "fltk-1.3.4-1/src/Fl_PNG_Image.cxx"
 125:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    1:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    1              		.file	"Fl_PNG_Image.cxx"
 126:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    2:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    2              		.text
 127:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    3:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    3              	.Ltext0:
 128:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_PNG
 129:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    5:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    5              		.align 2
 214              		.loc 2 129 0
 215 0043 488B5C24 		movq	16(%rsp), %rbx
 215      10
 216 0048 B8000000 		movl	$.LC4, %eax
 216      00
 130:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    6:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    6              	.LCOLDB0:
 131:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    7:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    7              		.section	.text._ZN12Fl_PNG_ImageD2E
 132:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    8:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    8              	.LHOTB0:
 217              		.loc 2 132 0
 218 004d BF000000 		movl	$.LC6, %edi
 218      00
 129:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    6:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    6              	.LCOLDB0:
 219              		.loc 2 129 0
 220 0052 4885DB   		testq	%rbx, %rbx
 221 0055 480F45C3 		cmovne	%rbx, %rax
 222              		.loc 2 132 0
 223 0059 31C9     		xorl	%ecx, %ecx
 224 005b 31D2     		xorl	%edx, %edx
 225 005d 31F6     		xorl	%esi, %esi
 129:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    6:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    6              	.LCOLDB0:
 226              		.loc 2 129 0
 227 005f 48894424 		movq	%rax, 24(%rsp)
 227      18
 228              	.LVL21:
 229              		.loc 2 132 0
 230 0064 E8000000 		call	png_create_read_struct
 230      00
 231              	.LVL22:
 133:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    9:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    9              		.align 2
 232              		.loc 2 133 0
 233 0069 4885C0   		testq	%rax, %rax
 132:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    9:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    9              		.align 2
 234              		.loc 2 132 0
 235 006c 48894424 		movq	%rax, 64(%rsp)
 235      40
 236              		.loc 2 133 0
 237 0071 0F84DC02 		je	.L18
 237      0000
 238              		.loc 2 133 0 is_stmt 0 discriminator 1
 239 0077 4889C7   		movq	%rax, %rdi
 240 007a E8000000 		call	png_create_info_struct
 240      00
 241              	.LVL23:
 134:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   10:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   10              		.p2align 4,,15
 242              		.loc 2 134 0 is_stmt 1 discriminator 1
 243 007f 488B7C24 		movq	64(%rsp), %rdi
 243      40
 133:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    9:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    9              		.align 2
 244              		.loc 2 133 0 discriminator 1
 245 0084 48894424 		movq	%rax, 72(%rsp)
 245      48
 246              		.loc 2 134 0 discriminator 1
 247 0089 4885FF   		testq	%rdi, %rdi
 248 008c 0F84AE02 		je	.L60
 248      0000
 249              		.loc 2 134 0 is_stmt 0 discriminator 2
 250 0092 4885C0   		testq	%rax, %rax
 251 0095 0F84A502 		je	.L60
 251      0000
 135:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   11:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   11              		.section	.text.unlikely._ZN12Fl_PNG
 136:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   12:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   12              	.Ltext_cold0:
 137:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   13:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   13              		.section	.text._ZN12Fl_PNG_ImageD2E
 138:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   14:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   14              		.weak	_ZN12Fl_PNG_ImageD2Ev
 139:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   15:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   16              	_ZN12Fl_PNG_ImageD2Ev:
 140:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   16:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   17              	.LFB194:
 141:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   17:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_PNG_Ima
 142:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   18:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    1:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
 252              		.loc 2 142 0 is_stmt 1
 253 009b BAC80000 		movl	$200, %edx
 253      00
 254 00a0 BE000000 		movl	$__longjmp_chk, %esi
 254      00
 255 00a5 E8000000 		call	png_set_longjmp_fn
 255      00
 256              	.LVL24:
 257 00aa 4889C7   		movq	%rax, %rdi
 258 00ad E8000000 		call	_setjmp
 258      00
 259              	.LVL25:
 260 00b2 85C0     		testl	%eax, %eax
 261 00b4 0F85F602 		jne	.L75
 261      0000
 143:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   19:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // "$Id: Fl_PN
 144:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   20:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
 145:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   21:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    4:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // PNG image h
 146:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   22:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    5:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
 147:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   23:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    6:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // Copyright 1
 148:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   24:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    7:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
 149:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   25:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // This librar
 150:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   26:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    9:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // the file "C
 151:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   27:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // file is mis
 262              		.loc 2 151 0
 263 00ba 488B7424 		movq	8(%rsp), %rsi
 263      08
 264 00bf 4885F6   		testq	%rsi, %rsi
 265 00c2 0F84B703 		je	.L24
 265      0000
 152:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   28:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
 153:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   29:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   12:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //     http://
 266              		.loc 2 153 0
 267 00c8 48634424 		movslq	44(%rsp), %rax
 267      2C
 154:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   30:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
 268              		.loc 2 154 0
 269 00cd 488B7C24 		movq	64(%rsp), %rdi
 269      40
 155:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   31:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   14:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // Please repo
 156:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   32:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   15:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
 270              		.loc 2 156 0
 271 00d2 BA000000 		movl	$png_read_data_from_mem, %edx
 271      00
 152:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   29:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   12:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //     http://
 272              		.loc 2 152 0
 273 00d7 48897424 		movq	%rsi, 88(%rsp)
 273      58
 154:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   30:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
 274              		.loc 2 154 0
 275 00dc 48897C24 		movq	%rdi, 80(%rsp)
 275      50
 153:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   30:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
 276              		.loc 2 153 0
 277 00e1 4801F0   		addq	%rsi, %rax
 278              		.loc 2 156 0
 279 00e4 488D7424 		leaq	80(%rsp), %rsi
 279      50
 153:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   30:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
 280              		.loc 2 153 0
 281 00e9 48894424 		movq	%rax, 96(%rsp)
 281      60
 282              		.loc 2 156 0
 283 00ee E8000000 		call	png_set_read_fn
 283      00
 284              	.LVL26:
 285              	.L26:
 157:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   33:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   16:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //     http://
 158:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   34:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   17:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
 159:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   35:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   18:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** 
 160:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   36:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   19:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** /* \file
 161:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   37:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   20:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****    Fl_PNG_Imag
 162:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   38:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   21:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** 
 286              		.loc 2 162 0
 287 00f3 488B7424 		movq	72(%rsp), %rsi
 287      48
 288 00f8 488B7C24 		movq	64(%rsp), %rdi
 288      40
 289 00fd E8000000 		call	png_read_info
 289      00
 290              	.LVL27:
 163:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   39:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   22:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** #ifndef Fl_PNG
 164:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   40:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   23:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** #define Fl_PNG
 291              		.loc 2 164 0
 292 0102 488B7424 		movq	72(%rsp), %rsi
 292      48
 293 0107 488B7C24 		movq	64(%rsp), %rdi
 293      40
 294 010c E8000000 		call	png_get_color_type
 294      00
 295              	.LVL28:
 296 0111 3C03     		cmpb	$3, %al
 297 0113 0F845703 		je	.L76
 297      0000
 298              	.L29:
 165:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   41:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   24:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** #  include "Fl
 166:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   42:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   25:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** 
 167:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   43:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** /**
 299              		.loc 2 167 0
 300 0119 488B7424 		movq	72(%rsp), %rsi
 300      48
 301 011e 488B7C24 		movq	64(%rsp), %rdi
 301      40
 302 0123 E8000000 		call	png_get_color_type
 302      00
 303              	.LVL29:
 168:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   44:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   The Fl_PNG_I
 169:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   45:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   and drawing 
 170:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   46:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   class loads 
 171:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   47:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   30:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   and alpha-ba
 172:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   48:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   31:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** */
 173:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   49:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   32:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** class FL_EXPOR
 304              		.loc 2 173 0
 305 0128 488B7424 		movq	72(%rsp), %rsi
 305      48
 167:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   44:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   The Fl_PNG_I
 306              		.loc 2 167 0
 307 012d 83E002   		andl	$2, %eax
 308              		.loc 2 173 0
 309 0130 488B7C24 		movq	64(%rsp), %rdi
 309      40
 168:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   44:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   The Fl_PNG_I
 310              		.loc 2 168 0
 311 0135 3C01     		cmpb	$1, %al
 312              		.loc 2 173 0
 313 0137 488D4C24 		leaq	60(%rsp), %rcx
 313      3C
 172:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   49:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   32:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** class FL_EXPOR
 314              		.loc 2 172 0
 315 013c C744243C 		movl	$0, 60(%rsp)
 315      00000000 
 168:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   44:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   The Fl_PNG_I
 316              		.loc 2 168 0
 317 0144 19DB     		sbbl	%ebx, %ebx
 318              		.loc 2 173 0
 319 0146 4531C0   		xorl	%r8d, %r8d
 320 0149 31D2     		xorl	%edx, %edx
 321 014b E8000000 		call	png_get_tRNS
 321      00
 322              	.LVL30:
 174:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   50:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   19              		.loc 1 32 0
 323              		.loc 2 174 0
 324 0150 488B7424 		movq	72(%rsp), %rsi
 324      48
 325 0155 488B7C24 		movq	64(%rsp), %rdi
 325      40
 168:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   45:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_PNG_Image.H ****   and drawing 
 326              		.loc 2 168 0
 327 015a 83E3FE   		andl	$-2, %ebx
 328 015d 83C303   		addl	$3, %ebx
 329              	.LVL31:
 330              		.loc 2 174 0
 331 0160 E8000000 		call	png_get_color_type
 331      00
 332              	.LVL32:
 333 0165 A804     		testb	$4, %al
 334 0167 7508     		jne	.L31
 335              		.loc 2 174 0 is_stmt 0 discriminator 3
 336 0169 8B4C243C 		movl	60(%rsp), %ecx
 337 016d 85C9     		testl	%ecx, %ecx
 338 016f 7403     		je	.L54
 339              	.L31:
 175:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   51:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   20              		.cfi_startproc
 340              		.loc 2 175 0 is_stmt 1
 341 0171 83C301   		addl	$1, %ebx
 342              	.LVL33:
 343              	.L54:
 176:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   52:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   21              	.LVL0:
 177:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   53:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   22              	.LBB62:
 344              		.loc 2 177 0
 345 0174 488B7424 		movq	72(%rsp), %rsi
 345      48
 346 0179 488B7C24 		movq	64(%rsp), %rdi
 346      40
 347 017e E8000000 		call	png_get_image_width
 347      00
 348              	.LVL34:
 349              	.LBB67:
 350              	.LBB68:
 351              		.file 4 "fltk-1.3.4-1/FL/Fl_Image.H"
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
 352              		.loc 4 76 0
 353 0183 488B2C24 		movq	(%rsp), %rbp
 354              	.LBE68:
 355              	.LBE67:
 178:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   54:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   23              		.loc 1 32 0
 356              		.loc 2 178 0
 357 0187 488B7424 		movq	72(%rsp), %rsi
 357      48
 358 018c 488B7C24 		movq	64(%rsp), %rdi
 358      40
 359              	.LBB70:
 360              	.LBB69:
 361              		.loc 4 76 0
 362 0191 894508   		movl	%eax, 8(%rbp)
 363              	.LVL35:
 364              	.LBE69:
 365              	.LBE70:
 366              		.loc 2 178 0
 367 0194 E8000000 		call	png_get_image_height
 367      00
 368              	.LVL36:
 179:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   55:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   24 0000 48C70700 		movq	$_ZTV12Fl_PNG_Image+16, (%rdi
 180:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   56:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   24      000000
 181:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   57:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   25 0007 E9000000 		jmp	_ZN12Fl_RGB_ImageD2Ev
 369              		.loc 2 181 0
 370 0199 488B7424 		movq	72(%rsp), %rsi
 370      48
 371 019e 488B7C24 		movq	64(%rsp), %rdi
 371      40
 372              	.LBB71:
 373              	.LBB72:
  77:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  78:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image height in pixels.
  79:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   void h(int H) {h_ = H;}
 374              		.loc 4 80 0
 375 01a3 89450C   		movl	%eax, 12(%rbp)
 376              	.LVL37:
 377              	.LBE72:
 378              	.LBE71:
 379              	.LBB73:
 380              	.LBB74:
  81:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  82:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image depth.
  83:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   void d(int D) {d_ = D;}
 381              		.loc 4 84 0
 382 01a6 895D10   		movl	%ebx, 16(%rbp)
 383              	.LVL38:
 384              	.LBE74:
 385              	.LBE73:
 386              		.loc 2 181 0
 387 01a9 E8000000 		call	png_get_bit_depth
 387      00
 388              	.LVL39:
 389 01ae 3C07     		cmpb	$7, %al
 390 01b0 0F874A02 		ja	.L32
 390      0000
 182:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   58:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   25      00
 183:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   89              		.loc 2 58 0
 391              		.loc 2 183 0
 392 01b6 488B7C24 		movq	64(%rsp), %rdi
 392      40
 393 01bb E8000000 		call	png_set_packing
 393      00
 394              	.LVL40:
 184:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   90              		.cfi_startproc
 395              		.loc 2 184 0
 396 01c0 488B7C24 		movq	64(%rsp), %rdi
 396      40
 397 01c5 E8000000 		call	png_set_expand
 397      00
 398              	.LVL41:
 399              	.L34:
 185:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   91              	.LVL6:
 186:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   92 0000 4154     		pushq	%r12
 187:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   93              		.cfi_def_cfa_offset 16
 188:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   94              		.cfi_offset 12, -16
 189:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   95 0002 55       		pushq	%rbp
 190:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   96              		.cfi_def_cfa_offset 24
 191:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   97              		.cfi_offset 6, -24
 400              		.loc 2 191 0
 401 01ca 488B7424 		movq	72(%rsp), %rsi
 401      48
 402 01cf 488B7C24 		movq	64(%rsp), %rdi
 402      40
 403 01d4 BA100000 		movl	$16, %edx
 403      00
 404 01d9 E8000000 		call	png_get_valid
 404      00
 405              	.LVL42:
 406 01de 85C0     		testl	%eax, %eax
 407 01e0 0F857A02 		jne	.L77
 407      0000
 408              	.L38:
 409 01e6 488B0424 		movq	(%rsp), %rax
 410 01ea 48637008 		movslq	8(%rax), %rsi
 411 01ee 4863480C 		movslq	12(%rax), %rcx
 412 01f2 8B4010   		movl	16(%rax), %eax
 413 01f5 4889CA   		movq	%rcx, %rdx
 414 01f8 4889F7   		movq	%rsi, %rdi
 415              	.LVL43:
 192:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   98 0003 4989F4   		movq	%rsi, %r12
 193:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   99 0006 53       		pushq	%rbx
 194:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  100              		.cfi_def_cfa_offset 32
 195:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  101              		.cfi_offset 3, -32
 416              		.loc 2 195 0
 417 01fb 480FAFCE 		imulq	%rsi, %rcx
 418 01ff 4863F0   		movslq	%eax, %rsi
 419 0202 480FAFCE 		imulq	%rsi, %rcx
 420 0206 48390D00 		cmpq	%rcx, _ZN12Fl_RGB_Image9max_size_E(%rip)
 420      000000
 421 020d 0F82A302 		jb	.L78
 421      0000
 422              	.LVL44:
 196:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  102              		.loc 2 58 0
 423              		.loc 2 196 0
 424 0213 0FAFFA   		imull	%edx, %edi
 425 0216 0FAFC7   		imull	%edi, %eax
 426 0219 4863F8   		movslq	%eax, %rdi
 427 021c E8000000 		call	_Znam
 427      00
 428              	.LVL45:
 429 0221 488B1C24 		movq	(%rsp), %rbx
 430              	.LVL46:
 197:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  103 0007 4889D5   		movq	%rdx, %rbp
 198:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   59:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   26              	.LVL1:
 199:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  104              		.loc 2 59 0
 200:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  105 000a E8000000 		call	png_get_io_ptr
 431              		.loc 2 200 0
 432 0225 48B90000 		movabsq	$1143914305352105984, %rcx
 432      00000000 
 432      E00F
 433 022f 48C7C7FF 		movq	$-1, %rdi
 433      FFFFFF
 434 0236 4863530C 		movslq	12(%rbx), %rdx
 196:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  102              		.loc 2 58 0
 435              		.loc 2 196 0
 436 023a 48894328 		movq	%rax, 40(%rbx)
 197:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  103 0007 4889D5   		movq	%rdx, %rbp
 437              		.loc 2 197 0
 438 023e C7433001 		movl	$1, 48(%rbx)
 438      000000
 439              	.LVL47:
 440              		.loc 2 200 0
 441 0245 488D04D5 		leaq	0(,%rdx,8), %rax
 441      00000000 
 442 024d 4839CA   		cmpq	%rcx, %rdx
 443 0250 480F46F8 		cmovbe	%rax, %rdi
 444 0254 E8000000 		call	_Znam
 444      00
 445              	.LVL48:
 446 0259 8B730C   		movl	12(%rbx), %esi
 447 025c 4889C5   		movq	%rax, %rbp
 448              	.LVL49:
 201:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  105      00
 202:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  106              	.LVL7:
 449              		.loc 2 202 0
 450 025f 85F6     		testl	%esi, %esi
 451 0261 7E2C     		jle	.L43
 452 0263 488B0424 		movq	(%rsp), %rax
 453 0267 83EE01   		subl	$1, %esi
 454 026a 488D74F5 		leaq	8(%rbp,%rsi,8), %rsi
 454      08
 455 026f 8B4808   		movl	8(%rax), %ecx
 456 0272 488B5028 		movq	40(%rax), %rdx
 457 0276 0FAF4810 		imull	16(%rax), %ecx
 458 027a 4889E8   		movq	%rbp, %rax
 459 027d 4863C9   		movslq	%ecx, %rcx
 460              	.LVL50:
 461              		.p2align 4,,10
 462              		.p2align 3
 463              	.L42:
 203:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   60:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   27              	.LBE62:
 464              		.loc 2 203 0
 465 0280 488910   		movq	%rdx, (%rax)
 466 0283 4883C008 		addq	$8, %rax
 467 0287 4801CA   		addq	%rcx, %rdx
 202:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   60:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   27              	.LBE62:
 468              		.loc 2 202 0
 469 028a 4839F0   		cmpq	%rsi, %rax
 470 028d 75F1     		jne	.L42
 471              	.LVL51:
 472              	.L43:
 204:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  107              		.loc 2 60 0
 205:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  108 000f 488B7008 		movq	8(%rax), %rsi
 206:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   59:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   26              	.LVL1:
 473              		.loc 2 206 0
 474 028f 488B7C24 		movq	64(%rsp), %rdi
 474      40
 475 0294 E8000000 		call	png_set_interlace_handling
 475      00
 476              	.LVL52:
 477 0299 85C0     		testl	%eax, %eax
 478 029b 89C3     		movl	%eax, %ebx
 479              	.LVL53:
 480 029d 7E1C     		jle	.L46
 481              	.LVL54:
 482 029f 90       		.p2align 4,,10
 483              		.p2align 3
 484              	.L62:
 207:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  109              		.loc 2 59 0
 485              		.loc 2 207 0
 486 02a0 488B0424 		movq	(%rsp), %rax
 487 02a4 488B7C24 		movq	64(%rsp), %rdi
 487      40
 488 02a9 31D2     		xorl	%edx, %edx
 489 02ab 4889EE   		movq	%rbp, %rsi
 490 02ae 8B480C   		movl	12(%rax), %ecx
 491 02b1 E8000000 		call	png_read_rows
 491      00
 492              	.LVL55:
 206:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  109              		.loc 2 59 0
 493              		.loc 2 206 0
 494 02b6 83EB01   		subl	$1, %ebx
 495              	.LVL56:
 496 02b9 75E5     		jne	.L62
 497              	.LVL57:
 498              	.L46:
 208:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  110 0013 4889C3   		movq	%rax, %rbx
 209:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  111              	.LVL8:
 210:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  112              		.loc 2 60 0
 211:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  113 0016 488D042E 		leaq	(%rsi,%rbp), %rax
 212:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  114              	.LVL9:
 213:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  115 001a 48394310 		cmpq	%rax, 16(%rbx)
 214:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  116 001e 7214     		jb	.L8
 215:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  117              	.LVL10:
 216:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  118              	.LBB65:
 217:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  119              	.LBB66:
 218:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  120              		.file 3 "/usr/include/x86_64-linux-gnu/bits/string3.h"
 219:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    1:/usr/include/x86_64-linux-gnu/bits/string3.h **** /* Copyright (C) 2004-2016 Free Software Fou
 220:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    2:/usr/include/x86_64-linux-gnu/bits/string3.h ****    This file is part of the GNU C Library.
 499              		.loc 2 220 0
 500 02bb 4889EF   		movq	%rbp, %rdi
 501 02be E8000000 		call	_ZdaPv
 501      00
 502              	.LVL58:
 221:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    3:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 222:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    4:/usr/include/x86_64-linux-gnu/bits/string3.h ****    The GNU C Library is free software; you c
 503              		.loc 2 222 0
 504 02c3 488B7424 		movq	72(%rsp), %rsi
 504      48
 505 02c8 488B7C24 		movq	64(%rsp), %rdi
 505      40
 506 02cd E8000000 		call	png_read_end
 506      00
 507              	.LVL59:
 223:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    5:/usr/include/x86_64-linux-gnu/bits/string3.h ****    modify it under the terms of the GNU Less
 508              		.loc 2 223 0
 509 02d2 488D7424 		leaq	72(%rsp), %rsi
 509      48
 510 02d7 488D7C24 		leaq	64(%rsp), %rdi
 510      40
 511 02dc 31D2     		xorl	%edx, %edx
 512 02de E8000000 		call	png_destroy_read_struct
 512      00
 513              	.LVL60:
 514              	.LBB75:
 224:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    6:/usr/include/x86_64-linux-gnu/bits/string3.h ****    License as published by the Free Software
 225:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    7:/usr/include/x86_64-linux-gnu/bits/string3.h ****    version 2.1 of the License, or (at your o
 515              		.loc 2 225 0
 516 02e3 48837C24 		cmpq	$0, 8(%rsp)
 516      0800
 517 02e9 0F84A401 		je	.L79
 517      0000
 518              	.LVL61:
 519              	.LBB76:
 226:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    8:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 520              		.loc 2 226 0
 521 02ef 488B0424 		movq	(%rsp), %rax
 522 02f3 8B5008   		movl	8(%rax), %edx
 523 02f6 85D2     		testl	%edx, %edx
 524 02f8 0F849300 		je	.L9
 524      0000
 525              	.LVL62:
 526              		.loc 2 226 0 is_stmt 0 discriminator 2
 527 02fe 8B400C   		movl	12(%rax), %eax
 528 0301 85C0     		testl	%eax, %eax
 529 0303 0F848800 		je	.L9
 529      0000
 530 0309 48837C24 		cmpq	$0, 16(%rsp)
 530      1000
 531 030f 0F847C00 		je	.L9
 531      0000
 532              	.LBB77:
 227:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    9:/usr/include/x86_64-linux-gnu/bits/string3.h ****    The GNU C Library is distributed in the h
 533              		.loc 2 227 0 is_stmt 1
 534 0315 BF480000 		movl	$72, %edi
 534      00
 535 031a E8000000 		call	_Znwm
 535      00
 536              	.LVL63:
 537 031f 488B1424 		movq	(%rsp), %rdx
 538 0323 488B7424 		movq	16(%rsp), %rsi
 538      10
 539 0328 4889C3   		movq	%rax, %rbx
 540              	.LVL64:
 541 032b 4889C7   		movq	%rax, %rdi
 542 032e E8000000 		call	_ZN15Fl_Shared_ImageC1EPKcP8Fl_Image
 542      00
 543              	.LVL65:
 228:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   10:/usr/include/x86_64-linux-gnu/bits/string3.h ****    but WITHOUT ANY WARRANTY; without even th
 544              		.loc 2 228 0
 545 0333 4889DF   		movq	%rbx, %rdi
 546 0336 E8000000 		call	_ZN15Fl_Shared_Image3addEv
 546      00
 547              	.LVL66:
 548 033b EB54     		jmp	.L9
 549              	.LVL67:
 550 033d 0F1F00   		.p2align 4,,10
 551              		.p2align 3
 552              	.L60:
 553              	.LBE77:
 554              	.LBE76:
 555              	.LBE75:
 135:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   12:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   12              	.Ltext_cold0:
 556              		.loc 2 135 0
 557 0340 4885FF   		testq	%rdi, %rdi
 558 0343 740E     		je	.L18
 135:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   12:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   12              	.Ltext_cold0:
 559              		.loc 2 135 0 is_stmt 0 discriminator 1
 560 0345 488D7C24 		leaq	64(%rsp), %rdi
 560      40
 561 034a 31D2     		xorl	%edx, %edx
 562 034c 31F6     		xorl	%esi, %esi
 563 034e E8000000 		call	png_destroy_read_struct
 563      00
 564              	.LVL68:
 565              	.L18:
 136:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   13:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   13              		.section	.text._ZN12Fl_PNG_ImageD2E
 566              		.loc 2 136 0 is_stmt 1
 567 0353 48837C24 		cmpq	$0, 8(%rsp)
 567      0800
 568 0359 0F848900 		je	.L80
 568      0000
 569              	.L15:
 137:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   14:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   14              		.weak	_ZN12Fl_PNG_ImageD2Ev
 570              		.loc 2 137 0
 571 035f 488B7424 		movq	24(%rsp), %rsi
 571      18
 572 0364 BF000000 		movl	$.LC7, %edi
 572      00
 573 0369 31C0     		xorl	%eax, %eax
 574 036b FF150000 		call	*_ZN2Fl7warningE(%rip)
 574      0000
 575              	.LVL69:
 576              	.L19:
 577              	.LBB78:
 578              	.LBB79:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 579              		.loc 4 76 0
 580 0371 488B0424 		movq	(%rsp), %rax
 581 0375 C7400800 		movl	$0, 8(%rax)
 581      000000
 582              	.LVL70:
 583              	.LBE79:
 584              	.LBE78:
 585              	.LBB80:
 586              	.LBB81:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 587              		.loc 4 80 0
 588 037c C7400C00 		movl	$0, 12(%rax)
 588      000000
 589              	.LVL71:
 590              	.LBE81:
 591              	.LBE80:
 592              	.LBB82:
 593              	.LBB83:
 594              		.loc 4 84 0
 595 0383 C7401000 		movl	$0, 16(%rax)
 595      000000
 596              	.LVL72:
 597              	.LBE83:
 598              	.LBE82:
 599              	.LBB84:
 600              	.LBB85:
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
 601              		.loc 4 96 0
 602 038a C74014FD 		movl	$-3, 20(%rax)
 602      FFFFFF
 603              	.LVL73:
 604              	.L9:
 605              	.LBE85:
 606              	.LBE84:
 229:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   11:/usr/include/x86_64-linux-gnu/bits/string3.h ****    MERCHANTABILITY or FITNESS FOR A PARTICUL
 230:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   12:/usr/include/x86_64-linux-gnu/bits/string3.h ****    Lesser General Public License for more de
 231:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   13:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 232:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   14:/usr/include/x86_64-linux-gnu/bits/string3.h ****    You should have received a copy of the GN
 233:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   15:/usr/include/x86_64-linux-gnu/bits/string3.h ****    License along with the GNU C Library; if 
 234:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   16:/usr/include/x86_64-linux-gnu/bits/string3.h ****    <http://www.gnu.org/licenses/>.  */
 607              		.loc 2 234 0
 608 0391 488B4424 		movq	104(%rsp), %rax
 608      68
 609 0396 64483304 		xorq	%fs:40, %rax
 609      25280000 
 609      00
 610 039f 0F850C01 		jne	.L81
 610      0000
 611 03a5 4883C478 		addq	$120, %rsp
 612              		.cfi_remember_state
 613              		.cfi_def_cfa_offset 24
 614              	.LVL74:
 615 03a9 5B       		popq	%rbx
 616              		.cfi_def_cfa_offset 16
 617 03aa 5D       		popq	%rbp
 618              		.cfi_def_cfa_offset 8
 619 03ab C3       		ret
 620              	.LVL75:
 621 03ac 0F1F4000 		.p2align 4,,10
 622              		.p2align 3
 623              	.L75:
 624              		.cfi_restore_state
 144:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   21:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    4:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // PNG image h
 625              		.loc 2 144 0
 626 03b0 488D7424 		leaq	72(%rsp), %rsi
 626      48
 627 03b5 488D7C24 		leaq	64(%rsp), %rdi
 627      40
 628 03ba 31D2     		xorl	%edx, %edx
 629 03bc E8000000 		call	png_destroy_read_struct
 629      00
 630              	.LVL76:
 145:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   22:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    5:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
 631              		.loc 2 145 0
 632 03c1 48837C24 		cmpq	$0, 8(%rsp)
 632      0800
 633 03c7 0F84D500 		je	.L22
 633      0000
 634              	.L23:
 146:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   23:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    6:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** // Copyright 1
 635              		.loc 2 146 0
 636 03cd 488B7424 		movq	24(%rsp), %rsi
 636      18
 637 03d2 BF000000 		movl	$.LC8, %edi
 637      00
 638 03d7 31C0     		xorl	%eax, %eax
 639 03d9 FF150000 		call	*_ZN2Fl7warningE(%rip)
 639      0000
 640              	.LVL77:
 641 03df EB90     		jmp	.L19
 642              	.LVL78:
 643              		.p2align 4,,10
 644 03e1 0F1F8000 		.p2align 3
 644      000000
 645              	.L80:
 136:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   13:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   13              		.section	.text._ZN12Fl_PNG_ImageD2E
 646              		.loc 2 136 0 discriminator 1
 647 03e8 488B7C24 		movq	32(%rsp), %rdi
 647      20
 648 03ed E8000000 		call	fclose
 648      00
 649              	.LVL79:
 650 03f2 E968FFFF 		jmp	.L15
 650      FF
 651              	.LVL80:
 652 03f7 660F1F84 		.p2align 4,,10
 652      00000000 
 652      00
 653              		.p2align 3
 654              	.L32:
 186:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   93              		.cfi_def_cfa_offset 16
 655              		.loc 2 186 0
 656 0400 488B7424 		movq	72(%rsp), %rsi
 656      48
 657 0405 488B7C24 		movq	64(%rsp), %rdi
 657      40
 658 040a E8000000 		call	png_get_bit_depth
 658      00
 659              	.LVL81:
 660 040f 3C10     		cmpb	$16, %al
 661 0411 0F85B3FD 		jne	.L34
 661      FFFF
 187:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   94              		.cfi_offset 12, -16
 662              		.loc 2 187 0
 663 0417 488B7C24 		movq	64(%rsp), %rdi
 663      40
 664 041c E8000000 		call	png_set_strip_16
 664      00
 665              	.LVL82:
 666 0421 E9A4FDFF 		jmp	.L34
 666      FF
 667              	.LVL83:
 668 0426 662E0F1F 		.p2align 4,,10
 668      84000000 
 668      0000
 669              		.p2align 3
 670              	.L74:
 124:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    1:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    1              		.file	"Fl_PNG_Image.cxx"
 671              		.loc 2 124 0
 672 0430 488B7C24 		movq	16(%rsp), %rdi
 672      10
 673              	.LVL84:
 674 0435 BE000000 		movl	$.LC5, %esi
 674      00
 675              	.LVL85:
 676 043a E8000000 		call	fl_fopen
 676      00
 677              	.LVL86:
 678 043f 4885C0   		testq	%rax, %rax
 679 0442 48894424 		movq	%rax, 32(%rsp)
 679      20
 680              	.LVL87:
 681 0447 0F85F6FB 		jne	.L10
 681      FFFF
 682              	.LVL88:
 683              	.LBB86:
 684              	.LBB87:
 685              		.loc 4 96 0
 686 044d 488B0424 		movq	(%rsp), %rax
 687              	.LVL89:
 688 0451 C74014FE 		movl	$-2, 20(%rax)
 688      FFFFFF
 689 0458 E934FFFF 		jmp	.L9
 689      FF
 690              	.LVL90:
 691 045d 0F1F00   		.p2align 4,,10
 692              		.p2align 3
 693              	.L77:
 694              	.LBE87:
 695              	.LBE86:
 192:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   99 0006 53       		pushq	%rbx
 696              		.loc 2 192 0
 697 0460 488B7C24 		movq	64(%rsp), %rdi
 697      40
 698 0465 E8000000 		call	png_set_tRNS_to_alpha
 698      00
 699              	.LVL91:
 700 046a E977FDFF 		jmp	.L38
 700      FF
 701              	.LVL92:
 702 046f 90       		.p2align 4,,10
 703              		.p2align 3
 704              	.L76:
 165:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   42:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   25:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** 
 705              		.loc 2 165 0
 706 0470 488B7C24 		movq	64(%rsp), %rdi
 706      40
 707 0475 E8000000 		call	png_set_expand
 707      00
 708              	.LVL93:
 709 047a E99AFCFF 		jmp	.L29
 709      FF
 710              	.L24:
 158:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   35:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   18:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** 
 711              		.loc 2 158 0
 712 047f 488B7424 		movq	32(%rsp), %rsi
 712      20
 713 0484 488B7C24 		movq	64(%rsp), %rdi
 713      40
 714 0489 E8000000 		call	png_init_io
 714      00
 715              	.LVL94:
 716 048e E960FCFF 		jmp	.L26
 716      FF
 717              	.LVL95:
 718              	.L79:
 719              	.LBB88:
 231:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   14:/usr/include/x86_64-linux-gnu/bits/string3.h ****    You should have received a copy of the GN
 720              		.loc 2 231 0
 721 0493 488B7C24 		movq	32(%rsp), %rdi
 721      20
 722 0498 E8000000 		call	fclose
 722      00
 723              	.LVL96:
 724 049d E9EFFEFF 		jmp	.L9
 724      FF
 725              	.LVL97:
 726              	.L22:
 727              	.LBE88:
 145:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   22:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****    5:fltk-1.3.4-1/FL/Fl_PNG_Image.H **** //
 728              		.loc 2 145 0 discriminator 1
 729 04a2 488B7C24 		movq	32(%rsp), %rdi
 729      20
 730 04a7 E8000000 		call	fclose
 730      00
 731              	.LVL98:
 732 04ac E91CFFFF 		jmp	.L23
 732      FF
 733              	.L81:
 734              		.loc 2 234 0
 735 04b1 E8000000 		call	__stack_chk_fail
 735      00
 736              	.LVL99:
 737              	.L78:
 195:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****  102              		.loc 2 58 0
 738              		.loc 2 195 0 discriminator 5
 739 04b6 488B7C24 		movq	64(%rsp), %rdi
 739      40
 740 04bb BE000000 		movl	$__longjmp_chk, %esi
 740      00
 741 04c0 BAC80000 		movl	$200, %edx
 741      00
 742 04c5 E8000000 		call	png_set_longjmp_fn
 742      00
 743              	.LVL100:
 744 04ca BE010000 		movl	$1, %esi
 744      00
 745 04cf 4889C7   		movq	%rax, %rdi
 746 04d2 E8000000 		call	__longjmp_chk
 746      00
 747              	.LVL101:
 748              		.cfi_endproc
 749              	.LFE192:
 751              		.section	.text.unlikely._ZN12Fl_PNG_Image9load_png_EPKcPKhi
 752              	.LCOLDE9:
 753              		.section	.text._ZN12Fl_PNG_Image9load_png_EPKcPKhi
 754              	.LHOTE9:
 755              		.section	.text.unlikely._ZN12Fl_PNG_ImageC2EPKc,"ax",@progbits
 756              		.align 2
 757              	.LCOLDB10:
 758              		.section	.text._ZN12Fl_PNG_ImageC2EPKc,"ax",@progbits
 759              	.LHOTB10:
 760              		.align 2
 761              		.p2align 4,,15
 762              		.globl	_ZN12Fl_PNG_ImageC2EPKc
 764              	_ZN12Fl_PNG_ImageC2EPKc:
 765              	.LFB187:
  86:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   56              	.LBB63:
 766              		.loc 2 86 0
 767              		.cfi_startproc
 768              	.LVL102:
 769 0000 55       		pushq	%rbp
 770              		.cfi_def_cfa_offset 16
 771              		.cfi_offset 6, -16
 772 0001 53       		pushq	%rbx
 773              		.cfi_def_cfa_offset 24
 774              		.cfi_offset 3, -24
 775 0002 4889F5   		movq	%rsi, %rbp
 776 0005 4889FB   		movq	%rdi, %rbx
 777              	.LBB89:
 778 0008 31C9     		xorl	%ecx, %ecx
 779 000a 31D2     		xorl	%edx, %edx
 780              	.LBE89:
 781 000c 4883EC08 		subq	$8, %rsp
 782              		.cfi_def_cfa_offset 32
 783              	.LBB90:
  86:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   56              	.LBB63:
 784              		.loc 2 86 0
 785 0010 31F6     		xorl	%esi, %esi
 786              	.LVL103:
 787 0012 4531C9   		xorl	%r9d, %r9d
 788 0015 41B80300 		movl	$3, %r8d
 788      0000
 789 001b E8000000 		call	_ZN12Fl_RGB_ImageC2EPKhiiii
 789      00
 790              	.LVL104:
 791 0020 48C70300 		movq	$_ZTV12Fl_PNG_Image+16, (%rbx)
 791      000000
 792              	.LBE90:
  89:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   58      000000
 793              		.loc 2 89 0
 794 0027 4883C408 		addq	$8, %rsp
 795              		.cfi_def_cfa_offset 24
 796              	.LBB91:
  88:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   58 0004 48C70700 		movq	$_ZTV12Fl_PNG_Image+16, (%rdi)
 797              		.loc 2 88 0
 798 002b 4889EE   		movq	%rbp, %rsi
 799 002e 4889DF   		movq	%rbx, %rdi
 800 0031 31C9     		xorl	%ecx, %ecx
 801 0033 31D2     		xorl	%edx, %edx
 802              	.LBE91:
  89:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   58      000000
 803              		.loc 2 89 0
 804 0035 5B       		popq	%rbx
 805              		.cfi_def_cfa_offset 16
 806              	.LVL105:
 807 0036 5D       		popq	%rbp
 808              		.cfi_def_cfa_offset 8
 809              	.LVL106:
 810              	.LBB92:
  88:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   58 0004 48C70700 		movq	$_ZTV12Fl_PNG_Image+16, (%rdi)
 811              		.loc 2 88 0
 812 0037 E9000000 		jmp	_ZN12Fl_PNG_Image9load_png_EPKcPKhi
 812      00
 813              	.LVL107:
 814              	.LBE92:
 815              		.cfi_endproc
 816              	.LFE187:
 818              		.section	.text.unlikely._ZN12Fl_PNG_ImageC2EPKc
 819              	.LCOLDE10:
 820              		.section	.text._ZN12Fl_PNG_ImageC2EPKc
 821              	.LHOTE10:
 822              		.globl	_ZN12Fl_PNG_ImageC1EPKc
 823              		.set	_ZN12Fl_PNG_ImageC1EPKc,_ZN12Fl_PNG_ImageC2EPKc
 824              		.section	.text.unlikely._ZN12Fl_PNG_ImageC2EPKcPKhi,"ax",@progbits
 825              		.align 2
 826              	.LCOLDB11:
 827              		.section	.text._ZN12Fl_PNG_ImageC2EPKcPKhi,"ax",@progbits
 828              	.LHOTB11:
 829              		.align 2
 830              		.p2align 4,,15
 831              		.globl	_ZN12Fl_PNG_ImageC2EPKcPKhi
 833              	_ZN12Fl_PNG_ImageC2EPKcPKhi:
 834              	.LFB190:
 104:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   72              		.section	.text.unlikely._ZN12Fl_PNG_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNG_Image
 835              		.loc 2 104 0
 836              		.cfi_startproc
 837              	.LVL108:
 838 0000 4155     		pushq	%r13
 839              		.cfi_def_cfa_offset 16
 840              		.cfi_offset 13, -16
 841 0002 4154     		pushq	%r12
 842              		.cfi_def_cfa_offset 24
 843              		.cfi_offset 12, -24
 844 0004 4189CD   		movl	%ecx, %r13d
 845 0007 55       		pushq	%rbp
 846              		.cfi_def_cfa_offset 32
 847              		.cfi_offset 6, -32
 848 0008 53       		pushq	%rbx
 849              		.cfi_def_cfa_offset 40
 850              		.cfi_offset 3, -40
 851 0009 4889F5   		movq	%rsi, %rbp
 852 000c 4889FB   		movq	%rdi, %rbx
 853 000f 4989D4   		movq	%rdx, %r12
 854              	.LBB93:
 105:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   73              	.LCOLDE1:
 855              		.loc 2 105 0
 856 0012 31C9     		xorl	%ecx, %ecx
 857              	.LVL109:
 858              	.LBE93:
 104:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   72              		.section	.text.unlikely._ZN12Fl_PNG_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNG_Image
 859              		.loc 2 104 0
 860 0014 4883EC08 		subq	$8, %rsp
 861              		.cfi_def_cfa_offset 48
 862              	.LBB94:
 105:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   73              	.LCOLDE1:
 863              		.loc 2 105 0
 864 0018 31D2     		xorl	%edx, %edx
 865              	.LVL110:
 866 001a 31F6     		xorl	%esi, %esi
 867              	.LVL111:
 868 001c 4531C9   		xorl	%r9d, %r9d
 869 001f 41B80300 		movl	$3, %r8d
 869      0000
 870 0025 E8000000 		call	_ZN12Fl_RGB_ImageC2EPKhiiii
 870      00
 871              	.LVL112:
 872 002a 48C70300 		movq	$_ZTV12Fl_PNG_Image+16, (%rbx)
 872      000000
 873              	.LBE94:
 108:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   76              		.section	.rodata.str1.8,"aMS",@progbits,1
 874              		.loc 2 108 0
 875 0031 4883C408 		addq	$8, %rsp
 876              		.cfi_def_cfa_offset 40
 877              	.LBB95:
 107:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   75              	.LHOTE1:
 878              		.loc 2 107 0
 879 0035 4489E9   		movl	%r13d, %ecx
 880 0038 4C89E2   		movq	%r12, %rdx
 881 003b 4889EE   		movq	%rbp, %rsi
 882 003e 4889DF   		movq	%rbx, %rdi
 883              	.LBE95:
 108:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   76              		.section	.rodata.str1.8,"aMS",@progbits,1
 884              		.loc 2 108 0
 885 0041 5B       		popq	%rbx
 886              		.cfi_def_cfa_offset 32
 887              	.LVL113:
 888 0042 5D       		popq	%rbp
 889              		.cfi_def_cfa_offset 24
 890              	.LVL114:
 891 0043 415C     		popq	%r12
 892              		.cfi_def_cfa_offset 16
 893              	.LVL115:
 894 0045 415D     		popq	%r13
 895              		.cfi_def_cfa_offset 8
 896              	.LVL116:
 897              	.LBB96:
 107:fltk-1.3.4-1/src/Fl_PNG_Image.cxx ****   75              	.LHOTE1:
 898              		.loc 2 107 0
 899 0047 E9000000 		jmp	_ZN12Fl_PNG_Image9load_png_EPKcPKhi
 899      00
 900              	.LVL117:
 901              	.LBE96:
 902              		.cfi_endproc
 903              	.LFE190:
 905              		.section	.text.unlikely._ZN12Fl_PNG_ImageC2EPKcPKhi
 906              	.LCOLDE11:
 907              		.section	.text._ZN12Fl_PNG_ImageC2EPKcPKhi
 908              	.LHOTE11:
 909              		.globl	_ZN12Fl_PNG_ImageC1EPKcPKhi
 910              		.set	_ZN12Fl_PNG_ImageC1EPKcPKhi,_ZN12Fl_PNG_ImageC2EPKcPKhi
 911              		.weak	_ZTS12Fl_PNG_Image
 912              		.section	.rodata._ZTS12Fl_PNG_Image,"aG",@progbits,_ZTS12Fl_PNG_Image,comdat
 913              		.align 8
 916              	_ZTS12Fl_PNG_Image:
 917 0000 3132466C 		.string	"12Fl_PNG_Image"
 917      5F504E47 
 917      5F496D61 
 917      676500
 918              		.weak	_ZTI12Fl_PNG_Image
 919              		.section	.rodata._ZTI12Fl_PNG_Image,"aG",@progbits,_ZTI12Fl_PNG_Image,comdat
 920              		.align 8
 923              	_ZTI12Fl_PNG_Image:
 924 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 924      00000000 
 925 0008 00000000 		.quad	_ZTS12Fl_PNG_Image
 925      00000000 
 926 0010 00000000 		.quad	_ZTI12Fl_RGB_Image
 926      00000000 
 927              		.weak	_ZTV12Fl_PNG_Image
 928              		.section	.rodata._ZTV12Fl_PNG_Image,"aG",@progbits,_ZTV12Fl_PNG_Image,comdat
 929              		.align 8
 932              	_ZTV12Fl_PNG_Image:
 933 0000 00000000 		.quad	0
 933      00000000 
 934 0008 00000000 		.quad	_ZTI12Fl_PNG_Image
 934      00000000 
 935 0010 00000000 		.quad	_ZN12Fl_PNG_ImageD1Ev
 935      00000000 
 936 0018 00000000 		.quad	_ZN12Fl_PNG_ImageD0Ev
 936      00000000 
 937 0020 00000000 		.quad	_ZN12Fl_RGB_Image4copyEii
 937      00000000 
 938 0028 00000000 		.quad	_ZN12Fl_RGB_Image13color_averageEjf
 938      00000000 
 939 0030 00000000 		.quad	_ZN12Fl_RGB_Image10desaturateEv
 939      00000000 
 940 0038 00000000 		.quad	_ZN12Fl_RGB_Image5labelEP9Fl_Widget
 940      00000000 
 941 0040 00000000 		.quad	_ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item
 941      00000000 
 942 0048 00000000 		.quad	_ZN12Fl_RGB_Image4drawEiiiiii
 942      00000000 
 943 0050 00000000 		.quad	_ZN12Fl_RGB_Image7uncacheEv
 943      00000000 
 944              		.text
 945              	.Letext0:
 946              		.section	.text.unlikely._ZN12Fl_PNG_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNG_ImageD5Ev,comdat
 947              	.Letext_cold0:
 948              		.file 5 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 949              		.file 6 "/usr/include/x86_64-linux-gnu/bits/types.h"
 950              		.file 7 "/usr/include/stdio.h"
 951              		.file 8 "/usr/include/libio.h"
 952              		.file 9 "fltk-1.3.4-1/FL/Enumerations.H"
 953              		.file 10 "fltk-1.3.4-1/png/pngconf.h"
 954              		.file 11 "fltk-1.3.4-1/png/png.h"
 955              		.file 12 "fltk-1.3.4-1/FL/Fl_Shared_Image.H"
 956              		.file 13 "/usr/include/setjmp.h"
 957              		.file 14 "fltk-1.3.4-1/FL/fl_utf8.h"
 958              		.file 15 "/usr/include/x86_64-linux-gnu/bits/confname.h"
 959              		.file 16 "/usr/include/x86_64-linux-gnu/bits/setjmp2.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_PNG_Image.cxx
     /tmp/ccy1rPAN.s:16     .text._ZN12Fl_PNG_ImageD2Ev:0000000000000000 _ZN12Fl_PNG_ImageD2Ev
     /tmp/ccy1rPAN.s:932    .rodata._ZTV12Fl_PNG_Image:0000000000000000 _ZTV12Fl_PNG_Image
     /tmp/ccy1rPAN.s:16     .text._ZN12Fl_PNG_ImageD2Ev:0000000000000000 _ZN12Fl_PNG_ImageD1Ev
     /tmp/ccy1rPAN.s:46     .text._ZN12Fl_PNG_ImageD0Ev:0000000000000000 _ZN12Fl_PNG_ImageD0Ev
     /tmp/ccy1rPAN.s:86     .text.png_read_data_from_mem:0000000000000000 png_read_data_from_mem
     /tmp/ccy1rPAN.s:180    .text._ZN12Fl_PNG_Image9load_png_EPKcPKhi:0000000000000000 _ZN12Fl_PNG_Image9load_png_EPKcPKhi
     /tmp/ccy1rPAN.s:764    .text._ZN12Fl_PNG_ImageC2EPKc:0000000000000000 _ZN12Fl_PNG_ImageC2EPKc
     /tmp/ccy1rPAN.s:764    .text._ZN12Fl_PNG_ImageC2EPKc:0000000000000000 _ZN12Fl_PNG_ImageC1EPKc
     /tmp/ccy1rPAN.s:833    .text._ZN12Fl_PNG_ImageC2EPKcPKhi:0000000000000000 _ZN12Fl_PNG_ImageC2EPKcPKhi
     /tmp/ccy1rPAN.s:833    .text._ZN12Fl_PNG_ImageC2EPKcPKhi:0000000000000000 _ZN12Fl_PNG_ImageC1EPKcPKhi
     /tmp/ccy1rPAN.s:916    .rodata._ZTS12Fl_PNG_Image:0000000000000000 _ZTS12Fl_PNG_Image
     /tmp/ccy1rPAN.s:923    .rodata._ZTI12Fl_PNG_Image:0000000000000000 _ZTI12Fl_PNG_Image
                           .group:0000000000000000 _ZN12Fl_PNG_ImageD5Ev
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
                           .group:0000000000000000 wm4.zconf.h.9.cf83f515515bae1163d7839912c16942
                           .group:0000000000000000 wm4.limits.h.23.f0fd92c175c1576df467c4d5fe2b091a
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.posix2_lim.h.23.56b9c4f885cbac0b652f53ee56b244b1
                           .group:0000000000000000 wm4.xopen_lim.h.30.e4438a30e862abd8e15b1a84a41829d9
                           .group:0000000000000000 wm4.stdio_lim.h.23.4a19d8b889c8d5286f38313bcb755fa0
                           .group:0000000000000000 wm4.xopen_lim.h.65.2659fc9d3caa21655466273b7af47dc6
                           .group:0000000000000000 wm4.limits.h.60.9fd8ee323a8301603c51702c2480a0ff
                           .group:0000000000000000 wm4.zconf.h.397.69c03305677a9a6792fe2a94f7c9f69b
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.unistd.h.23.a608ae63b1bee638e80d9e2a8598bd8e
                           .group:0000000000000000 wm4.posix_opt.h.20.8587404e00639bdcc5f6a74591f95259
                           .group:0000000000000000 wm4.environments.h.56.c5802092ccc191baeb41f8d355bb878f
                           .group:0000000000000000 wm4.unistd.h.213.4c582e35260d661b081322974b7c1e74
                           .group:0000000000000000 wm4.unistd.h.271.5bc8a6a5109e709e04c40b754b201552
                           .group:0000000000000000 wm4.confname.h.27.6b00117a32f457cc72e5ac810a9adade
                           .group:0000000000000000 wm4.unistd.h.1078.c7eeb0fd3115c9566fb6865aa19af17f
                           .group:0000000000000000 wm4.zconf.h.457.505c3613686dd75e492569d7a56a6eb0
                           .group:0000000000000000 wm4.zlib.h.40.5a15529ab8e285cee4b0ddab32502c27
                           .group:0000000000000000 wm4.png.h.412.12a95b2193a7d0bc2282b72c70a28ce1
                           .group:0000000000000000 wm4.pnglibconf.h.15.30e2eea90e566ac06da4f4de487193d7
                           .group:0000000000000000 wm4.stddef.h.39.00137ad0275e3bca492dca30adbe2e71
                           .group:0000000000000000 wm4.setjmp.h.67.51aa194c3c89a841663c00cb93fd90ff
                           .group:0000000000000000 wm4.time.h.26.6a3cabd4f228e226db6723a3b0c81ba6
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.time.h.40.feab7216a531c47d425d6de002dd2384
                           .group:0000000000000000 wm4.timex.h.19.f552c10b6e10e54ec2c0920b0cef94ab
                           .group:0000000000000000 wm4.time.h.66.3030613ea56472141d4f6280f80765e8
                           .group:0000000000000000 wm4.pngconf.h.86.0c1572bd35c652b230581a06cb12098c
                           .group:0000000000000000 wm4.png.h.506.fa53b6434c0b20c8e63094b04d7940c5

UNDEFINED SYMBOLS
_ZN12Fl_RGB_ImageD2Ev
_ZdlPv
png_get_io_ptr
memcpy
png_error
png_create_read_struct
png_create_info_struct
__longjmp_chk
png_set_longjmp_fn
_setjmp
png_set_read_fn
png_read_info
png_get_color_type
png_get_tRNS
png_get_image_width
png_get_image_height
png_get_bit_depth
png_set_packing
png_set_expand
png_get_valid
_ZN12Fl_RGB_Image9max_size_E
_Znam
png_set_interlace_handling
png_read_rows
_ZdaPv
png_read_end
png_destroy_read_struct
_Znwm
_ZN15Fl_Shared_ImageC1EPKcP8Fl_Image
_ZN15Fl_Shared_Image3addEv
_ZN2Fl7warningE
fclose
png_set_strip_16
fl_fopen
png_set_tRNS_to_alpha
png_init_io
__stack_chk_fail
_ZN12Fl_RGB_ImageC2EPKhiiii
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI12Fl_RGB_Image
_ZN12Fl_RGB_Image4copyEii
_ZN12Fl_RGB_Image13color_averageEjf
_ZN12Fl_RGB_Image10desaturateEv
_ZN12Fl_RGB_Image5labelEP9Fl_Widget
_ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item
_ZN12Fl_RGB_Image4drawEiiiiii
_ZN12Fl_RGB_Image7uncacheEv
