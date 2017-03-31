   1              		.file	"Fl_GIF_Image.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN12Fl_GIF_ImageD2Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comdat
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN12Fl_GIF_ImageD2Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comdat
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN12Fl_GIF_ImageD2Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comdat
  12              	.Ltext_cold0:
  13              		.section	.text._ZN12Fl_GIF_ImageD2Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comdat
  14              		.weak	_ZN12Fl_GIF_ImageD2Ev
  16              	_ZN12Fl_GIF_ImageD2Ev:
  17              	.LFB199:
  18              		.file 1 "fltk-1.3.4-1/FL/Fl_GIF_Image.H"
   1:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
   2:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // "$Id: Fl_GIF_Image.H 10732 2015-05-23 23:42:26Z matt $"
   3:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
   4:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // GIF image header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
   6:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
   8:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
  12:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
  14:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
  16:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
  18:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** 
  19:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****    Fl_GIF_Image widget . */
  21:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** 
  22:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** #ifndef Fl_GIF_Image_H
  23:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** #define Fl_GIF_Image_H
  24:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** #  include "Fl_Pixmap.H"
  25:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** 
  26:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** /**
  27:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  The Fl_GIF_Image class supports loading, caching,
  28:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  and drawing of Compuserve GIF<SUP>SM</SUP> images. The class
  29:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  loads the first image and supports transparency.
  30:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  */
  31:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** class FL_EXPORT Fl_GIF_Image : public Fl_Pixmap {
  19              		.loc 1 31 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              	.LBB81:
  23              		.loc 1 31 0
  24 0000 48C70700 		movq	$_ZTV12Fl_GIF_Image+16, (%rdi)
  24      000000
  25 0007 E9000000 		jmp	_ZN9Fl_PixmapD2Ev
  25      00
  26              	.LVL1:
  27              	.LBE81:
  28              		.cfi_endproc
  29              	.LFE199:
  31              		.section	.text.unlikely._ZN12Fl_GIF_ImageD2Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comdat
  32              	.LCOLDE0:
  33              		.section	.text._ZN12Fl_GIF_ImageD2Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comdat
  34              	.LHOTE0:
  35              		.weak	_ZN12Fl_GIF_ImageD1Ev
  36              		.set	_ZN12Fl_GIF_ImageD1Ev,_ZN12Fl_GIF_ImageD2Ev
  37              		.section	.text.unlikely._ZN12Fl_GIF_ImageD0Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comdat
  38              		.align 2
  39              	.LCOLDB1:
  40              		.section	.text._ZN12Fl_GIF_ImageD0Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comdat
  41              	.LHOTB1:
  42              		.align 2
  43              		.p2align 4,,15
  44              		.weak	_ZN12Fl_GIF_ImageD0Ev
  46              	_ZN12Fl_GIF_ImageD0Ev:
  47              	.LFB201:
  48              		.loc 1 31 0
  49              		.cfi_startproc
  50              	.LVL2:
  51 0000 53       		pushq	%rbx
  52              		.cfi_def_cfa_offset 16
  53              		.cfi_offset 3, -16
  54              		.loc 1 31 0
  55 0001 4889FB   		movq	%rdi, %rbx
  56              	.LBB82:
  57              	.LBB83:
  58 0004 48C70700 		movq	$_ZTV12Fl_GIF_Image+16, (%rdi)
  58      000000
  59 000b E8000000 		call	_ZN9Fl_PixmapD2Ev
  59      00
  60              	.LVL3:
  61              	.LBE83:
  62              	.LBE82:
  63 0010 4889DF   		movq	%rbx, %rdi
  64 0013 5B       		popq	%rbx
  65              		.cfi_def_cfa_offset 8
  66              	.LVL4:
  67 0014 E9000000 		jmp	_ZdlPv
  67      00
  68              	.LVL5:
  69              		.cfi_endproc
  70              	.LFE201:
  72              		.section	.text.unlikely._ZN12Fl_GIF_ImageD0Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comdat
  73              	.LCOLDE1:
  74              		.section	.text._ZN12Fl_GIF_ImageD0Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comdat
  75              	.LHOTE1:
  76              		.section	.rodata.str1.1,"aMS",@progbits,1
  77              	.LC2:
  78 0000 726200   		.string	"rb"
  79              		.section	.rodata.str1.8,"aMS",@progbits,1
  80              		.align 8
  81              	.LC3:
  82 0000 466C5F47 		.string	"Fl_GIF_Image: Unable to open %s!"
  82      49465F49 
  82      6D616765 
  82      3A20556E 
  82      61626C65 
  83 0021 00000000 		.align 8
  83      000000
  84              	.LC4:
  85 0028 466C5F47 		.string	"Fl_GIF_Image: %s is not a GIF file.\n"
  85      49465F49 
  85      6D616765 
  85      3A202573 
  85      20697320 
  86              		.section	.rodata.str1.1
  87              	.LC5:
  88 0003 25732069 		.string	"%s is version %c%c%c."
  88      73207665 
  88      7273696F 
  88      6E202563 
  88      25632563 
  89              	.LC6:
  90 0019 25732064 		.string	"%s does not have a colormap."
  90      6F657320 
  90      6E6F7420 
  90      68617665 
  90      20612063 
  91              		.section	.rodata.str1.8
  92 004d 000000   		.align 8
  93              	.LC7:
  94 0050 25733A20 		.string	"%s: unknown gif extension 0x%02x."
  94      756E6B6E 
  94      6F776E20 
  94      67696620 
  94      65787465 
  95              		.section	.rodata.str1.1
  96              	.LC8:
  97 0036 25733A20 		.string	"%s: unknown gif code 0x%02x"
  97      756E6B6E 
  97      6F776E20 
  97      67696620 
  97      636F6465 
  98              	.LC9:
  99 0052 466C5F47 		.string	"Fl_GIF_Image: %s - LZW Barf!"
  99      49465F49 
  99      6D616765 
  99      3A202573 
  99      202D204C 
 100              	.LC10:
 101 006f 25642025 		.string	"%d %d %d %d"
 101      64202564 
 101      20256400 
 102              		.section	.text.unlikely._ZN12Fl_GIF_ImageC2EPKc,"ax",@progbits
 103              		.align 2
 104              	.LCOLDB11:
 105              		.section	.text._ZN12Fl_GIF_ImageC2EPKc,"ax",@progbits
 106              	.LHOTB11:
 107              		.align 2
 108              		.p2align 4,,15
 109              		.globl	_ZN12Fl_GIF_ImageC2EPKc
 111              	_ZN12Fl_GIF_ImageC2EPKc:
 112              	.LFB196:
 113              		.file 2 "fltk-1.3.4-1/src/Fl_GIF_Image.cxx"
   1:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    1              		.file	"Fl_GIF_Image.cxx"
   2:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_GIF_ImageD2Ev,"axG",@progbits,_ZN12Fl_GIF_Image
   5:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    7              		.section	.text._ZN12Fl_GIF_ImageD2Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comd
   8:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   11              		.section	.text.unlikely._ZN12Fl_GIF_ImageD2Ev,"axG",@progbits,_ZN12Fl_GIF_Image
  12:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   13              		.section	.text._ZN12Fl_GIF_ImageD2Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comd
  14:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   14              		.weak	_ZN12Fl_GIF_ImageD2Ev
  15:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   16              	_ZN12Fl_GIF_ImageD2Ev:
  16:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   17              	.LFB199:
  17:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_GIF_Image.H"
  18:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    1:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
  19:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // "$Id: Fl_GIF_Image.H 10732 2015-05-23 23:42:26Z matt $"
  20:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
  21:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    4:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // GIF image header file for the Fast Light Tool Kit (FLTK
  22:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    5:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
  23:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    6:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // Copyright 1998-2010 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    7:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
  25:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // This library is free software. Distribution and use rig
  26:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    9:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // the file "COPYING" which should have been included with
  27:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
  29:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   12:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
  31:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   14:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // Please report all bugs and problems on the following pa
  32:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   15:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
  33:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   16:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   17:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
  35:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** 
  36:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   19:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** /* \file
  37:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   20:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****    Fl_GIF_Image widget . */
  38:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   21:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** 
  39:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   22:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** #ifndef Fl_GIF_Image_H
  40:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   23:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** #define Fl_GIF_Image_H
  41:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** #  include "Fl_Pixmap.H"
  42:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   25:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** 
  43:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** /**
  44:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  The Fl_GIF_Image class supports loading, caching,
  45:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  and drawing of Compuserve GIF<SUP>SM</SUP> images. The cl
  46:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  loads the first image and supports transparency.
  47:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   30:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  */
  48:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   31:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** class FL_EXPORT Fl_GIF_Image : public Fl_Pixmap {
  49:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   19              		.loc 1 31 0
  50:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   20              		.cfi_startproc
  51:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   21              	.LVL0:
  52:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   22              	.LBB81:
  53:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   23              		.loc 1 31 0
  54:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24 0000 48C70700 		movq	$_ZTV12Fl_GIF_Image+16, (%rdi)
  55:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24      000000
  56:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   25 0007 E9000000 		jmp	_ZN9Fl_PixmapD2Ev
  57:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   25      00
  58:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   26              	.LVL1:
  59:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   27              	.LBE81:
  60:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   28              		.cfi_endproc
  61:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   29              	.LFE199:
  62:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   31              		.section	.text.unlikely._ZN12Fl_GIF_ImageD2Ev,"axG",@progbits,_ZN12Fl_GIF_Image
  63:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   32              	.LCOLDE0:
  64:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   33              		.section	.text._ZN12Fl_GIF_ImageD2Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comd
  65:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   34              	.LHOTE0:
  66:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   35              		.weak	_ZN12Fl_GIF_ImageD1Ev
  67:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   36              		.set	_ZN12Fl_GIF_ImageD1Ev,_ZN12Fl_GIF_ImageD2Ev
  68:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   37              		.section	.text.unlikely._ZN12Fl_GIF_ImageD0Ev,"axG",@progbits,_ZN12Fl_GIF_Image
  69:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   38              		.align 2
  70:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   39              	.LCOLDB1:
  71:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   40              		.section	.text._ZN12Fl_GIF_ImageD0Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comd
  72:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   41              	.LHOTB1:
  73:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   42              		.align 2
  74:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   43              		.p2align 4,,15
  75:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   44              		.weak	_ZN12Fl_GIF_ImageD0Ev
  76:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   46              	_ZN12Fl_GIF_ImageD0Ev:
  77:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   47              	.LFB201:
  78:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   48              		.loc 1 31 0
  79:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   49              		.cfi_startproc
  80:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   50              	.LVL2:
  81:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   51 0000 53       		pushq	%rbx
  82:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   52              		.cfi_def_cfa_offset 16
  83:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   53              		.cfi_offset 3, -16
  84:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   54              		.loc 1 31 0
 114              		.loc 2 84 0
 115              		.cfi_startproc
 116              	.LVL6:
 117 0000 4157     		pushq	%r15
 118              		.cfi_def_cfa_offset 16
 119              		.cfi_offset 15, -16
 120 0002 4156     		pushq	%r14
 121              		.cfi_def_cfa_offset 24
 122              		.cfi_offset 14, -24
 123              	.LBB128:
 124              	.LBB129:
 125              	.LBB130:
 126              		.file 3 "fltk-1.3.4-1/FL/Fl_Pixmap.H"
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
 127              		.loc 3 79 0
 128 0004 31D2     		xorl	%edx, %edx
 129              	.LBE130:
 130              	.LBE129:
 131              	.LBE128:
 132              		.loc 2 84 0
 133 0006 4155     		pushq	%r13
 134              		.cfi_def_cfa_offset 32
 135              		.cfi_offset 13, -32
 136 0008 4154     		pushq	%r12
 137              		.cfi_def_cfa_offset 40
 138              		.cfi_offset 12, -40
 139              	.LBB242:
 140              	.LBB134:
 141              	.LBB131:
 142              		.loc 3 79 0
 143 000a B9010000 		movl	$1, %ecx
 143      00
 144              	.LBE131:
 145              	.LBE134:
 146              	.LBE242:
 147              		.loc 2 84 0
 148 000f 55       		pushq	%rbp
 149              		.cfi_def_cfa_offset 48
 150              		.cfi_offset 6, -48
 151 0010 53       		pushq	%rbx
 152              		.cfi_def_cfa_offset 56
 153              		.cfi_offset 3, -56
 154 0011 4989FC   		movq	%rdi, %r12
 155 0014 4889F3   		movq	%rsi, %rbx
 156 0017 4881ECD8 		subq	$14552, %rsp
 156      380000
 157              		.cfi_def_cfa_offset 14608
 158              		.loc 2 84 0
 159 001e 48897424 		movq	%rsi, 24(%rsp)
 159      18
 160              	.LBB243:
 161              	.LBB135:
 162              	.LBB132:
 163              		.loc 3 79 0
 164 0023 BEFFFFFF 		movl	$-1, %esi
 164      FF
 165              	.LVL7:
 166              	.LBE132:
 167              	.LBE135:
 168              	.LBE243:
 169              		.loc 2 84 0
 170 0028 64488B04 		movq	%fs:40, %rax
 170      25280000 
 170      00
 171 0031 48898424 		movq	%rax, 14536(%rsp)
 171      C8380000 
 172 0039 31C0     		xorl	%eax, %eax
 173              	.LVL8:
 174              	.LBB244:
 175              	.LBB136:
 176              	.LBB133:
 177              		.loc 3 79 0
 178 003b E8000000 		call	_ZN8Fl_ImageC2Eiii
 178      00
 179              	.LVL9:
 180 0040 31F6     		xorl	%esi, %esi
 181 0042 4C89E7   		movq	%r12, %rdi
 182 0045 49C70424 		movq	$_ZTV9Fl_Pixmap+16, (%r12)
 182      00000000 
 183 004d 41C74424 		movl	$0, 40(%r12)
 183      28000000 
 183      00
 184 0056 41C74424 		movl	$0, 44(%r12)
 184      2C000000 
 184      00
 185 005f 41C74424 		movl	$0, 48(%r12)
 185      30000000 
 185      00
 186 0068 E8000000 		call	_ZN9Fl_Pixmap8set_dataEPKPKc
 186      00
 187              	.LVL10:
 188 006d 4C89E7   		movq	%r12, %rdi
 189 0070 E8000000 		call	_ZN9Fl_Pixmap7measureEv
 189      00
 190              	.LVL11:
 191              	.LBE133:
 192              	.LBE136:
 193              		.loc 2 84 0
 194 0075 49C70424 		movq	$_ZTV12Fl_GIF_Image+16, (%r12)
 194      00000000 
 195              	.LBB137:
  85:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   55 0001 4889FB   		movq	%rdi, %rbx
  86:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   56              	.LBB82:
  87:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   57              	.LBB83:
  88:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   58 0004 48C70700 		movq	$_ZTV12Fl_GIF_Image+16, (%rdi)
 196              		.loc 2 88 0
 197 007d BE000000 		movl	$.LC2, %esi
 197      00
 198 0082 4889DF   		movq	%rbx, %rdi
 199 0085 E8000000 		call	fl_fopen
 199      00
 200              	.LVL12:
 201 008a 4885C0   		testq	%rax, %rax
 202 008d 0F846D02 		je	.L156
 202      0000
 203              	.LBB138:
 204              	.LBB139:
 205              	.LBB140:
 206              		.file 4 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 207              		.loc 4 295 0
 208 0093 488DBC24 		leaq	10432(%rsp), %rdi
 208      C0280000 
 209 009b 4889C1   		movq	%rax, %rcx
 210 009e BA060000 		movl	$6, %edx
 210      00
 211 00a3 BE010000 		movl	$1, %esi
 211      00
 212 00a8 4889C5   		movq	%rax, %rbp
 213              	.LVL13:
 214 00ab E8000000 		call	fread
 214      00
 215              	.LVL14:
 216              	.LBE140:
 217              	.LBE139:
  89:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   58      000000
  90:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   59 000b E8000000 		call	_ZN9Fl_PixmapD2Ev
  91:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   59      00
  92:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   60              	.LVL3:
  93:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   61              	.LBE83:
  94:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   62              	.LBE82:
  95:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   63 0010 4889DF   		movq	%rbx, %rdi
 218              		.loc 2 95 0
 219 00b0 4883F805 		cmpq	$5, %rax
 220 00b4 0F863002 		jbe	.L157
 220      0000
  96:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   64 0013 5B       		popq	%rbx
  97:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   65              		.cfi_def_cfa_offset 8
  98:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   66              	.LVL4:
  99:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   67 0014 E9000000 		jmp	_ZdlPv
 100:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   67      00
 221              		.loc 2 100 0
 222 00ba 80BC24C0 		cmpb	$71, 10432(%rsp)
 222      28000047 
 223 00c2 744C     		je	.L158
 224              	.L9:
 101:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   68              	.LVL5:
 225              		.loc 2 101 0
 226 00c4 4889EF   		movq	%rbp, %rdi
 227 00c7 E8000000 		call	fclose
 227      00
 228              	.LVL15:
 102:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   69              		.cfi_endproc
 229              		.loc 2 102 0
 230 00cc 488B7424 		movq	24(%rsp), %rsi
 230      18
 231 00d1 BF000000 		movl	$.LC4, %edi
 231      00
 232 00d6 31C0     		xorl	%eax, %eax
 233 00d8 FF150000 		call	*_ZN2Fl5errorE(%rip)
 233      0000
 234              	.LVL16:
 235              	.LBB141:
 236              	.LBB142:
 237              		.file 5 "fltk-1.3.4-1/FL/Fl_Image.H"
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
 238              		.loc 5 96 0
 239 00de 41C74424 		movl	$-3, 20(%r12)
 239      14FDFFFF 
 239      FF
 240              	.LVL17:
 241              	.L4:
 242              	.LBE142:
 243              	.LBE141:
 244              	.LBE138:
 245              	.LBE137:
 246              	.LBE244:
 103:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   70              	.LFE201:
 104:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   72              		.section	.text.unlikely._ZN12Fl_GIF_ImageD0Ev,"axG",@progbits,_ZN12Fl_GIF_Image
 105:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   73              	.LCOLDE1:
 106:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   74              		.section	.text._ZN12Fl_GIF_ImageD0Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comd
 107:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   75              	.LHOTE1:
 108:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   76              		.section	.rodata.str1.1,"aMS",@progbits,1
 109:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   77              	.LC2:
 110:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   78 0000 726200   		.string	"rb"
 111:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   79              		.section	.rodata.str1.8,"aMS",@progbits,1
 112:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   80              		.align 8
 113:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   81              	.LC3:
 114:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   82 0000 466C5F47 		.string	"Fl_GIF_Image: Unable to open %s!"
 115:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   82      49465F49 
 116:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   82      6D616765 
 117:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   82      3A20556E 
 118:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   82      61626C65 
 119:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   83 0021 00000000 		.align 8
 120:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   83      000000
 121:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   84              	.LC4:
 122:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   85 0028 466C5F47 		.string	"Fl_GIF_Image: %s is not a GIF file.\n"
 123:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   85      49465F49 
 124:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   85      6D616765 
 125:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   85      3A202573 
 126:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   85      20697320 
 127:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   86              		.section	.rodata.str1.1
 128:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   87              	.LC5:
 129:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   88 0003 25732069 		.string	"%s is version %c%c%c."
 130:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   88      73207665 
 131:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   88      7273696F 
 132:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   88      6E202563 
 133:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   88      25632563 
 134:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   89              	.LC6:
 135:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   90 0019 25732064 		.string	"%s does not have a colormap."
 136:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   90      6F657320 
 137:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   90      6E6F7420 
 138:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   90      68617665 
 139:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   90      20612063 
 140:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   91              		.section	.rodata.str1.8
 141:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   92 004d 000000   		.align 8
 142:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   93              	.LC7:
 143:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   94 0050 25733A20 		.string	"%s: unknown gif extension 0x%02x."
 144:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   94      756E6B6E 
 145:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   94      6F776E20 
 146:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   94      67696620 
 147:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   94      65787465 
 148:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   95              		.section	.rodata.str1.1
 149:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   96              	.LC8:
 150:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   97 0036 25733A20 		.string	"%s: unknown gif code 0x%02x"
 151:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   97      756E6B6E 
 152:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   97      6F776E20 
 153:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   97      67696620 
 154:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   97      636F6465 
 155:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   98              	.LC9:
 156:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   99 0052 466C5F47 		.string	"Fl_GIF_Image: %s - LZW Barf!"
 157:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   99      49465F49 
 158:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   99      6D616765 
 159:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   99      3A202573 
 160:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   99      202D204C 
 161:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  100              	.LC10:
 162:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  101 006f 25642025 		.string	"%d %d %d %d"
 163:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  101      64202564 
 164:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  101      20256400 
 165:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  102              		.section	.text.unlikely._ZN12Fl_GIF_ImageC2EPKc,"ax",@progbits
 166:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  103              		.align 2
 167:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  104              	.LCOLDB11:
 168:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  105              		.section	.text._ZN12Fl_GIF_ImageC2EPKc,"ax",@progbits
 169:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  106              	.LHOTB11:
 170:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  107              		.align 2
 171:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  108              		.p2align 4,,15
 172:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  109              		.globl	_ZN12Fl_GIF_ImageC2EPKc
 173:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  111              	_ZN12Fl_GIF_ImageC2EPKc:
 174:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  112              	.LFB196:
 175:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  113              		.file 2 "fltk-1.3.4-1/src/Fl_GIF_Image.cxx"
 176:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    1:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    1              		.file	"Fl_GIF_Image.cxx"
 177:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    2:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    2              		.text
 178:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    3:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    3              	.Ltext0:
 179:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_GIF
 180:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    5:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    5              		.align 2
 181:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    6:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    6              	.LCOLDB0:
 182:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    7:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    7              		.section	.text._ZN12Fl_GIF_ImageD2E
 183:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8              	.LHOTB0:
 184:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    9:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    9              		.align 2
 185:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   10:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   10              		.p2align 4,,15
 186:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   11:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   11              		.section	.text.unlikely._ZN12Fl_GIF
 187:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   12:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   12              	.Ltext_cold0:
 188:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   13:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   13              		.section	.text._ZN12Fl_GIF_ImageD2E
 189:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   14:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   14              		.weak	_ZN12Fl_GIF_ImageD2Ev
 190:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   15:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   16              	_ZN12Fl_GIF_ImageD2Ev:
 191:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   16:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   17              	.LFB199:
 192:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   17:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_GIF_Ima
 193:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    1:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
 194:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   19:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // "$Id: Fl_GI
 195:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   20:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
 196:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   21:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    4:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // GIF image h
 197:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   22:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    5:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
 198:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   23:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    6:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // Copyright 1
 199:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    7:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
 200:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   25:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // This librar
 201:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   26:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    9:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // the file "C
 202:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   27:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // file is mis
 203:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   28:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
 204:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   29:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   12:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //     http://
 205:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   30:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
 206:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   31:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   14:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // Please repo
 207:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   32:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   15:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
 208:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   33:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   16:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //     http://
 209:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   34:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   17:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
 210:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   35:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** 
 211:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   36:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   19:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** /* \file
 212:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   37:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   20:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****    Fl_GIF_Imag
 213:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   38:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   21:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** 
 214:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   39:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   22:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** #ifndef Fl_GIF
 215:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   40:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   23:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** #define Fl_GIF
 216:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   41:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** #  include "Fl
 217:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   42:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   25:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** 
 218:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   43:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** /**
 219:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   44:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  The Fl_GIF_Im
 220:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   45:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  and drawing o
 221:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   46:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  loads the fir
 222:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   47:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   30:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  */
 223:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   48:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   31:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** class FL_EXPOR
 224:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   49:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   19              		.loc 1 31 0
 225:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   50:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   20              		.cfi_startproc
 226:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   51:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   21              	.LVL0:
 227:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   52:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   22              	.LBB81:
 228:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   53:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   23              		.loc 1 31 0
 229:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   54:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24 0000 48C70700 		movq	$_ZTV12Fl_GIF_Image+16, (%rdi
 230:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   55:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24      000000
 231:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   56:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   25 0007 E9000000 		jmp	_ZN9Fl_PixmapD2Ev
 232:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   57:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   25      00
 233:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   58:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   26              	.LVL1:
 234:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   59:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   27              	.LBE81:
 235:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   60:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   28              		.cfi_endproc
 236:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   61:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   29              	.LFE199:
 237:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   62:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   31              		.section	.text.unlikely._ZN12Fl_GIF
 238:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   63:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   32              	.LCOLDE0:
 239:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   64:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   33              		.section	.text._ZN12Fl_GIF_ImageD2E
 240:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   65:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   34              	.LHOTE0:
 241:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   66:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   35              		.weak	_ZN12Fl_GIF_ImageD1Ev
 242:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   67:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   36              		.set	_ZN12Fl_GIF_ImageD1Ev,_ZN12Fl_
 243:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   68:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   37              		.section	.text.unlikely._ZN12Fl_GIF
 244:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   69:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   38              		.align 2
 245:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   70:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   39              	.LCOLDB1:
 246:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   71:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   40              		.section	.text._ZN12Fl_GIF_ImageD0E
 247:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   72:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   41              	.LHOTB1:
 248:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   73:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   42              		.align 2
 249:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   74:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   43              		.p2align 4,,15
 250:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   75:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   44              		.weak	_ZN12Fl_GIF_ImageD0Ev
 251:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   76:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   46              	_ZN12Fl_GIF_ImageD0Ev:
 252:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   77:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   47              	.LFB201:
 253:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   78:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   48              		.loc 1 31 0
 254:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   79:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   49              		.cfi_startproc
 255:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   80:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   50              	.LVL2:
 256:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   81:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   51 0000 53       		pushq	%rbx
 257:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   82:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   52              		.cfi_def_cfa_offset 16
 258:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   83:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   53              		.cfi_offset 3, -16
 259:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   84:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   54              		.loc 1 31 0
 260:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  114              		.loc 2 84 0
 261:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  115              		.cfi_startproc
 262:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  116              	.LVL6:
 263:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  117 0000 4157     		pushq	%r15
 264:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  118              		.cfi_def_cfa_offset 16
 265:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  119              		.cfi_offset 15, -16
 266:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  120 0002 4156     		pushq	%r14
 267:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  121              		.cfi_def_cfa_offset 24
 268:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  122              		.cfi_offset 14, -24
 269:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  123              	.LBB128:
 270:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  124              	.LBB129:
 271:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  125              	.LBB130:
 272:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  126              		.file 3 "fltk-1.3.4-1/FL/Fl_Pixmap.H"
 273:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    1:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 274:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // "$Id: Fl_Pixmap.H 9706 2012-11-06 20:46:14Z matt $"
 275:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 276:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    4:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Pixmap header file for the Fast Light Tool Kit (FLTK).
 277:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    5:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 278:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    6:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Copyright 1998-2012 by Bill Spitzak and others.
 279:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    7:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 280:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // This library is free software. Distribution and use rights
 281:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    9:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // the file "COPYING" which should have been included with th
 282:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // file is missing or damaged, see the license at:
 283:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 284:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   12:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //     http://www.fltk.org/COPYING.php
 285:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 286:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   14:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Please report all bugs and problems on the following page:
 287:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   15:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 288:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   16:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //     http://www.fltk.org/str.php
 289:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   17:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 290:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 291:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   19:fltk-1.3.4-1/FL/Fl_Pixmap.H **** /* \file
 292:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   20:fltk-1.3.4-1/FL/Fl_Pixmap.H ****    Fl_Pixmap widget . */
 293:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   21:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 294:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   22:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #ifndef Fl_Pixmap_H
 295:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   23:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #define Fl_Pixmap_H
 296:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  include "Fl_Image.H"
 297:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   25:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if defined(WIN32)
 298:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  include "x.H"
 299:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif
 300:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 301:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_Pixmap.H **** class Fl_Widget;
 302:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   30:fltk-1.3.4-1/FL/Fl_Pixmap.H **** struct Fl_Menu_Item;
 303:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   31:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 304:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   32:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Older C++ compilers don't support the explicit keyword... 
 305:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   33:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  if defined(__sgi) && !defined(_COMPILER_VERSION)
 306:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   34:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #    define explicit
 307:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   35:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  endif // __sgi && !_COMPILER_VERSION
 308:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   36:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 309:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   37:fltk-1.3.4-1/FL/Fl_Pixmap.H **** /**
 310:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   38:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   The Fl_Pixmap class supports caching and drawing of colorma
 311:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   39:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   (pixmap) images, including transparency.
 312:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   40:fltk-1.3.4-1/FL/Fl_Pixmap.H **** */
 313:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   41:fltk-1.3.4-1/FL/Fl_Pixmap.H **** class FL_EXPORT Fl_Pixmap : public Fl_Image {
 314:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   42:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_Quartz_Graphics_Driver;
 315:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   43:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_GDI_Graphics_Driver;
 316:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   44:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_GDI_Printer_Graphics_Driver;
 317:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   45:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_Xlib_Graphics_Driver;
 318:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   46:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void copy_data();
 319:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   47:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void delete_data();
 320:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   48:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void set_data(const char * const *p);
 321:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   49:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   int prepare(int XP, int YP, int WP, int HP, int &cx, int &c
 322:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   50:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 			 int &X, int &Y, int &W, int &H);
 323:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   51:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 324:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   52:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   protected:
 325:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   53:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 326:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   54:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void measure();
 327:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   55:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 328:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   56:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   public:
 329:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   57:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 330:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   58:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   int alloc_data; // Non-zero if data was allocated
 331:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   59:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   
 332:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   60:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   private:
 333:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   61:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 334:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   62:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if defined(WIN32)
 335:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   63:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if FLTK_ABI_VERSION < 10301
 336:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   64:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   static // a static member is needed for ABI compatibility
 337:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   65:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif
 338:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   66:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   UINT pixmap_bg_color; // RGB color used for pixmap backgrou
 339:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   67:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif // WIN32
 340:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   68:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if defined(__APPLE__) || defined(WIN32)
 341:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   69:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void *id_; // for internal use
 342:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   70:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void *mask_; // for internal use (mask bitmap)
 343:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   71:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #else
 344:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   72:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   unsigned id_; // for internal use
 345:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   73:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   unsigned mask_; // for internal use (mask bitmap)
 346:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   74:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif // __APPLE__ || WIN32
 347:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   75:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   
 348:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   76:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   public:
 349:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   77:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 350:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   78:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   /**    The constructors create a new pixmap from the specif
 351:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   79:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   explicit Fl_Pixmap(char * const * D) : Fl_Image(-1,0,1), al
 352:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  127              		.loc 3 79 0
 353:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  128 0004 31D2     		xorl	%edx, %edx
 354:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  129              	.LBE130:
 355:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  130              	.LBE129:
 356:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  131              	.LBE128:
 357:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  132              		.loc 2 84 0
 358:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  133 0006 4155     		pushq	%r13
 359:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  134              		.cfi_def_cfa_offset 32
 360:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  135              		.cfi_offset 13, -32
 361:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  136 0008 4154     		pushq	%r12
 362:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  137              		.cfi_def_cfa_offset 40
 363:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  138              		.cfi_offset 12, -40
 364:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  139              	.LBB242:
 365:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  140              	.LBB134:
 366:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  141              	.LBB131:
 367:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  142              		.loc 3 79 0
 368:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  143 000a B9010000 		movl	$1, %ecx
 369:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  143      00
 370:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  144              	.LBE131:
 371:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  145              	.LBE134:
 372:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  146              	.LBE242:
 373:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  147              		.loc 2 84 0
 374:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  148 000f 55       		pushq	%rbp
 375:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  149              		.cfi_def_cfa_offset 48
 376:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  150              		.cfi_offset 6, -48
 377:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  151 0010 53       		pushq	%rbx
 378:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  152              		.cfi_def_cfa_offset 56
 379:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  153              		.cfi_offset 3, -56
 380:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  154 0011 4989FC   		movq	%rdi, %r12
 381:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  155 0014 4889F3   		movq	%rsi, %rbx
 382:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  156 0017 4881ECD8 		subq	$14552, %rsp
 383:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  156      380000
 384:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  157              		.cfi_def_cfa_offset 14608
 385:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  158              		.loc 2 84 0
 386:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  159 001e 48897424 		movq	%rsi, 24(%rsp)
 247              		.loc 2 386 0
 248 00e7 488B8424 		movq	14536(%rsp), %rax
 248      C8380000 
 249 00ef 64483304 		xorq	%fs:40, %rax
 249      25280000 
 249      00
 250 00f8 0F859A0B 		jne	.L159
 250      0000
 251 00fe 4881C4D8 		addq	$14552, %rsp
 251      380000
 252              		.cfi_remember_state
 253              		.cfi_def_cfa_offset 56
 254 0105 5B       		popq	%rbx
 255              		.cfi_def_cfa_offset 48
 256 0106 5D       		popq	%rbp
 257              		.cfi_def_cfa_offset 40
 258 0107 415C     		popq	%r12
 259              		.cfi_def_cfa_offset 32
 260 0109 415D     		popq	%r13
 261              		.cfi_def_cfa_offset 24
 262 010b 415E     		popq	%r14
 263              		.cfi_def_cfa_offset 16
 264 010d 415F     		popq	%r15
 265              		.cfi_def_cfa_offset 8
 266 010f C3       		ret
 267              	.LVL18:
 268              		.p2align 4,,10
 269              		.p2align 3
 270              	.L158:
 271              		.cfi_restore_state
 272              	.LBB245:
 273              	.LBB240:
 274              	.LBB145:
 100:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   68              	.LVL5:
 275              		.loc 2 100 0 discriminator 1
 276 0110 80BC24C1 		cmpb	$73, 10433(%rsp)
 276      28000049 
 277 0118 75AA     		jne	.L9
 100:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   68              	.LVL5:
 278              		.loc 2 100 0 is_stmt 0 discriminator 2
 279 011a 80BC24C2 		cmpb	$70, 10434(%rsp)
 279      28000046 
 280 0122 75A0     		jne	.L9
 106:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   75              	.LHOTE1:
 281              		.loc 2 106 0 is_stmt 1
 282 0124 0FBE9424 		movsbl	10435(%rsp), %edx
 282      C3280000 
 283 012c 0FB68424 		movzbl	10436(%rsp), %eax
 283      C4280000 
 284 0134 440FBE84 		movsbl	10437(%rsp), %r8d
 284      24C52800 
 284      00
 285 013d 80FA38   		cmpb	$56, %dl
 286 0140 750A     		jne	.L12
 106:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   75              	.LHOTE1:
 287              		.loc 2 106 0 is_stmt 0 discriminator 1
 288 0142 3C39     		cmpb	$57, %al
 289 0144 7F06     		jg	.L12
 106:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   75              	.LHOTE1:
 290              		.loc 2 106 0 discriminator 2
 291 0146 4180F861 		cmpb	$97, %r8b
 292 014a 7415     		je	.L14
 293              	.L12:
 107:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   76              		.section	.rodata.str1.1,"aMS",@progbits,1
 294              		.loc 2 107 0 is_stmt 1
 295 014c 0FBEC8   		movsbl	%al, %ecx
 296 014f 488B7424 		movq	24(%rsp), %rsi
 296      18
 297 0154 BF000000 		movl	$.LC5, %edi
 297      00
 298 0159 31C0     		xorl	%eax, %eax
 299 015b FF150000 		call	*_ZN2Fl7warningE(%rip)
 299      0000
 300              	.LVL19:
 301              	.L14:
 302              	.LBE145:
 110:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   79              		.section	.rodata.str1.8,"aMS",@progbits,1
 303              		.loc 2 110 0
 304 0161 4889EF   		movq	%rbp, %rdi
 305 0164 E8000000 		call	_IO_getc
 305      00
 306              	.LVL20:
 307 0169 4889EF   		movq	%rbp, %rdi
 308 016c E8000000 		call	_IO_getc
 308      00
 309              	.LVL21:
 111:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   80              		.align 8
 310              		.loc 2 111 0
 311 0171 4889EF   		movq	%rbp, %rdi
 312 0174 E8000000 		call	_IO_getc
 312      00
 313              	.LVL22:
 314 0179 4889EF   		movq	%rbp, %rdi
 315 017c E8000000 		call	_IO_getc
 315      00
 316              	.LVL23:
 113:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   82 0000 466C5F47 		.string	"Fl_GIF_Image: Unable to open %s!"
 317              		.loc 2 113 0
 318 0181 4889EF   		movq	%rbp, %rdi
 319 0184 E8000000 		call	_IO_getc
 319      00
 320              	.LVL24:
 321 0189 89C3     		movl	%eax, %ebx
 322              	.LVL25:
 115:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   82      6D616765 
 323              		.loc 2 115 0
 324 018b 83E007   		andl	$7, %eax
 325              	.LVL26:
 119:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   83      000000
 326              		.loc 2 119 0
 327 018e 4889EF   		movq	%rbp, %rdi
 115:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   82      6D616765 
 328              		.loc 2 115 0
 329 0191 83C001   		addl	$1, %eax
 330 0194 89C6     		movl	%eax, %esi
 331 0196 89442408 		movl	%eax, 8(%rsp)
 332              	.LVL27:
 116:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   82      3A20556E 
 333              		.loc 2 116 0
 334 019a B8010000 		movl	$1, %eax
 334      00
 335              	.LVL28:
 336 019f 89F1     		movl	%esi, %ecx
 337 01a1 D3E0     		sall	%cl, %eax
 338 01a3 4189C6   		movl	%eax, %r14d
 339 01a6 89842480 		movl	%eax, 128(%rsp)
 339      000000
 340              	.LVL29:
 119:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   83      000000
 341              		.loc 2 119 0
 342 01ad E8000000 		call	_IO_getc
 342      00
 343              	.LVL30:
 120:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   84              	.LC4:
 344              		.loc 2 120 0
 345 01b2 4889EF   		movq	%rbp, %rdi
 346 01b5 E8000000 		call	_IO_getc
 346      00
 347              	.LVL31:
 348              	.LBB146:
 126:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   86              		.section	.rodata.str1.1
 349              		.loc 2 126 0
 350 01ba 84DB     		testb	%bl, %bl
 351 01bc 0F88D409 		js	.L160
 351      0000
 352              	.LBB147:
 133:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   89              	.LC6:
 353              		.loc 2 133 0
 354 01c2 488B7424 		movq	24(%rsp), %rsi
 354      18
 355 01c7 BF000000 		movl	$.LC6, %edi
 355      00
 356 01cc 31C0     		xorl	%eax, %eax
 357 01ce FF150000 		call	*_ZN2Fl7warningE(%rip)
 357      0000
 358              	.LVL32:
 359 01d4 8B842480 		movl	128(%rsp), %eax
 359      000000
 360 01db 4C8DB424 		leaq	8368(%rsp), %r14
 360      B0200000 
 361              	.LVL33:
 362 01e3 4C8DAC24 		leaq	8624(%rsp), %r13
 362      B0210000 
 363 01eb 31F6     		xorl	%esi, %esi
 364 01ed 31C9     		xorl	%ecx, %ecx
 365 01ef 448D40FF 		leal	-1(%rax), %r8d
 366 01f3 488D8424 		leaq	8880(%rsp), %rax
 366      B0220000 
 367 01fb 4C89C7   		movq	%r8, %rdi
 368 01fe 48898424 		movq	%rax, 160(%rsp)
 368      A0000000 
 369 0206 4983C001 		addq	$1, %r8
 370 020a 4989C1   		movq	%rax, %r9
 371              	.LVL34:
 372 020d 0F1F00   		.p2align 4,,10
 373              		.p2align 3
 374              	.L20:
 375              	.LBB148:
 135:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   90      6F657320 
 376              		.loc 2 135 0 discriminator 2
 377 0210 89F0     		movl	%esi, %eax
 378 0212 81C6FF00 		addl	$255, %esi
 378      0000
 379 0218 99       		cltd
 380 0219 F7FF     		idivl	%edi
 381 021b 41880409 		movb	%al, (%r9,%rcx)
 382 021f 4188440D 		movb	%al, 0(%r13,%rcx)
 382      00
 383 0224 4188040E 		movb	%al, (%r14,%rcx)
 384              	.LVL35:
 385 0228 4883C101 		addq	$1, %rcx
 386              	.LVL36:
 134:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   90 0019 25732064 		.string	"%s does not have a colormap."
 387              		.loc 2 134 0 discriminator 2
 388 022c 4C39C1   		cmpq	%r8, %rcx
 389 022f 75DF     		jne	.L20
 390              	.LVL37:
 391              	.L19:
 392              	.LBE148:
 133:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   89              	.LC6:
 393              		.loc 2 133 0
 394 0231 C6842487 		movb	$0, 135(%rsp)
 394      00000000 
 395 0239 C6842486 		movb	$0, 134(%rsp)
 395      00000000 
 396              	.LBE147:
 397              	.LBE146:
 398              	.LBB150:
 399              	.LBB151:
 400              	.LBB152:
 401              	.LBB153:
 402              	.LBB154:
 165:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  103              		.align 2
 403              		.loc 2 165 0
 404 0241 41BF0100 		movl	$1, %r15d
 404      0000
 405              	.LVL38:
 406              	.L18:
 407              	.LBE154:
 408              	.LBE153:
 409              	.LBE152:
 410              	.LBE151:
 143:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   94      756E6B6E 
 411              		.loc 2 143 0
 412 0247 4889EF   		movq	%rbp, %rdi
 413 024a E8000000 		call	_IO_getc
 413      00
 414              	.LVL39:
 415 024f 0FB6D0   		movzbl	%al, %edx
 416              	.LVL40:
 417              	.LBB178:
 154:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   98              	.LC9:
 418              		.loc 2 154 0
 419 0252 83FA21   		cmpl	$33, %edx
 420 0255 742B     		je	.L161
 421              	.L21:
 422              	.LBB159:
 174:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  113              		.file 2 "fltk-1.3.4-1/src/Fl_GIF_Image.cxx"
 423              		.loc 2 174 0
 424 0257 83FA2C   		cmpl	$44, %edx
 425 025a 0F84C000 		je	.L162
 425      0000
 194:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   20:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
 426              		.loc 2 194 0
 427 0260 31C0     		xorl	%eax, %eax
 428 0262 488B7424 		movq	24(%rsp), %rsi
 428      18
 429 0267 BF000000 		movl	$.LC8, %edi
 429      00
 430 026c FF150000 		call	*_ZN2Fl7warningE(%rip)
 430      0000
 431              	.LVL41:
 432              	.LBE159:
 433              	.LBE178:
 143:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   94      756E6B6E 
 434              		.loc 2 143 0
 435 0272 4889EF   		movq	%rbp, %rdi
 436 0275 E8000000 		call	_IO_getc
 436      00
 437              	.LVL42:
 438 027a 0FB6D0   		movzbl	%al, %edx
 439              	.LVL43:
 440              	.LBB179:
 154:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   98              	.LC9:
 441              		.loc 2 154 0
 442 027d 83FA21   		cmpl	$33, %edx
 443 0280 75D5     		jne	.L21
 444              	.LVL44:
 445              	.L161:
 446              	.LBB170:
 156:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   99      49465F49 
 447              		.loc 2 156 0
 448 0282 4889EF   		movq	%rbp, %rdi
 449 0285 E8000000 		call	_IO_getc
 449      00
 450              	.LVL45:
 157:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   99      6D616765 
 451              		.loc 2 157 0
 452 028a 4889EF   		movq	%rbp, %rdi
 156:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   99      49465F49 
 453              		.loc 2 156 0
 454 028d 890424   		movl	%eax, (%rsp)
 455              	.LVL46:
 157:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   99      6D616765 
 456              		.loc 2 157 0
 457 0290 E8000000 		call	_IO_getc
 457      00
 458              	.LVL47:
 459              	.LBB156:
 159:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   99      202D204C 
 460              		.loc 2 159 0
 461 0295 8B1424   		movl	(%rsp), %edx
 462              	.LBE156:
 157:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   99      6D616765 
 463              		.loc 2 157 0
 464 0298 0FB6D8   		movzbl	%al, %ebx
 465              	.LVL48:
 466              	.LBB157:
 159:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   99      202D204C 
 467              		.loc 2 159 0
 468 029b 80FAF9   		cmpb	$-7, %dl
 469 029e 7509     		jne	.L22
 470 02a0 83FB04   		cmpl	$4, %ebx
 471 02a3 0F848E08 		je	.L163
 471      0000
 472              	.L22:
 171:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  109              		.globl	_ZN12Fl_GIF_ImageC2EPKc
 473              		.loc 2 171 0
 474 02a9 8D4202   		leal	2(%rdx), %eax
 475 02ac 3C01     		cmpb	$1, %al
 476 02ae 7618     		jbe	.L149
 172:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  111              	_ZN12Fl_GIF_ImageC2EPKc:
 477              		.loc 2 172 0
 478 02b0 0FB6D2   		movzbl	%dl, %edx
 479 02b3 488B7424 		movq	24(%rsp), %rsi
 479      18
 480 02b8 BF000000 		movl	$.LC7, %edi
 480      00
 481 02bd 31C0     		xorl	%eax, %eax
 482 02bf FF150000 		call	*_ZN2Fl7warningE(%rip)
 482      0000
 483              	.LVL49:
 484              		.p2align 4,,10
 485 02c5 0F1F00   		.p2align 3
 486              	.L149:
 487              	.LBE157:
 488              	.LBE170:
 489              	.LBE179:
 199:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   25:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // This librar
 490              		.loc 2 199 0
 491 02c8 85DB     		testl	%ebx, %ebx
 492 02ca 0F8477FF 		je	.L18
 492      FFFF
 493              	.LVL50:
 494              		.p2align 4,,10
 495              		.p2align 3
 496              	.L34:
 199:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   25:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // This librar
 497              		.loc 2 199 0 is_stmt 0 discriminator 2
 498 02d0 4889EF   		movq	%rbp, %rdi
 499 02d3 E8000000 		call	_IO_getc
 499      00
 500              	.LVL51:
 501 02d8 83EB01   		subl	$1, %ebx
 502              	.LVL52:
 503 02db 75F3     		jne	.L34
 199:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   25:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** // This librar
 504              		.loc 2 199 0
 505 02dd 4889EF   		movq	%rbp, %rdi
 506 02e0 E8000000 		call	_IO_getc
 506      00
 507              	.LVL53:
 508 02e5 0FB6D8   		movzbl	%al, %ebx
 509              	.LVL54:
 510 02e8 EBDE     		jmp	.L149
 511              	.LVL55:
 512              	.L157:
 513              	.LBE150:
 514              	.LBB187:
  96:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   65              		.cfi_def_cfa_offset 8
 515              		.loc 2 96 0 is_stmt 1
 516 02ea 4889EF   		movq	%rbp, %rdi
 517 02ed E8000000 		call	fclose
 517      00
 518              	.LVL56:
 519              	.LBB143:
 520              	.LBB144:
 521              		.loc 5 96 0
 522 02f2 41C74424 		movl	$-2, 20(%r12)
 522      14FEFFFF 
 522      FF
 523 02fb E9E7FDFF 		jmp	.L4
 523      FF
 524              	.LVL57:
 525              	.L156:
 526              	.LBE144:
 527              	.LBE143:
 528              	.LBE187:
  89:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   59 000b E8000000 		call	_ZN9Fl_PixmapD2Ev
 529              		.loc 2 89 0
 530 0300 488B7424 		movq	24(%rsp), %rsi
 530      18
 531 0305 BF000000 		movl	$.LC3, %edi
 531      00
 532 030a 31C0     		xorl	%eax, %eax
 533              	.LVL58:
 534 030c FF150000 		call	*_ZN2Fl5errorE(%rip)
 534      0000
 535              	.LVL59:
 536              	.LBB188:
 537              	.LBB189:
 538              		.loc 5 96 0
 539 0312 41C74424 		movl	$-2, 20(%r12)
 539      14FEFFFF 
 539      FF
 540 031b E9C7FDFF 		jmp	.L4
 540      FF
 541              	.LVL60:
 542              	.L162:
 543              	.LBE189:
 544              	.LBE188:
 545              	.LBB190:
 546              	.LBB180:
 547              	.LBB171:
 548              	.LBB160:
 176:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    2:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    2              		.text
 549              		.loc 2 176 0
 550 0320 4889EF   		movq	%rbp, %rdi
 551 0323 E8000000 		call	_IO_getc
 551      00
 552              	.LVL61:
 553 0328 4889EF   		movq	%rbp, %rdi
 554 032b E8000000 		call	_IO_getc
 554      00
 555              	.LVL62:
 177:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    3:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    3              	.Ltext0:
 556              		.loc 2 177 0
 557 0330 4889EF   		movq	%rbp, %rdi
 558 0333 E8000000 		call	_IO_getc
 558      00
 559              	.LVL63:
 560 0338 4889EF   		movq	%rbp, %rdi
 561 033b E8000000 		call	_IO_getc
 561      00
 562              	.LVL64:
 178:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_GIF
 563              		.loc 2 178 0
 564 0340 4889EF   		movq	%rbp, %rdi
 565 0343 E8000000 		call	_IO_getc
 565      00
 566              	.LVL65:
 567 0348 4889EF   		movq	%rbp, %rdi
 568 034b 0FB6D8   		movzbl	%al, %ebx
 569              	.LVL66:
 570 034e E8000000 		call	_IO_getc
 570      00
 571              	.LVL67:
 572 0353 C1E008   		sall	$8, %eax
 179:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    5:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    5              		.align 2
 573              		.loc 2 179 0
 574 0356 4889EF   		movq	%rbp, %rdi
 178:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_GIF
 575              		.loc 2 178 0
 576 0359 0FB7C0   		movzwl	%ax, %eax
 577 035c 01D8     		addl	%ebx, %eax
 578 035e 8944242C 		movl	%eax, 44(%rsp)
 579              	.LVL68:
 179:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    5:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    5              		.align 2
 580              		.loc 2 179 0
 581 0362 E8000000 		call	_IO_getc
 581      00
 582              	.LVL69:
 583 0367 4889EF   		movq	%rbp, %rdi
 584 036a 0FB6D8   		movzbl	%al, %ebx
 585              	.LVL70:
 586 036d E8000000 		call	_IO_getc
 586      00
 587              	.LVL71:
 588 0372 C1E008   		sall	$8, %eax
 180:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    6:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    6              	.LCOLDB0:
 589              		.loc 2 180 0
 590 0375 4889EF   		movq	%rbp, %rdi
 179:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    5:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    5              		.align 2
 591              		.loc 2 179 0
 592 0378 0FB7C0   		movzwl	%ax, %eax
 593 037b 01D8     		addl	%ebx, %eax
 594 037d 890424   		movl	%eax, (%rsp)
 595              	.LVL72:
 180:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    6:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    6              	.LCOLDB0:
 596              		.loc 2 180 0
 597 0380 E8000000 		call	_IO_getc
 597      00
 598              	.LVL73:
 181:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    7:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    7              		.section	.text._ZN12Fl_GIF_ImageD2E
 599              		.loc 2 181 0
 600 0385 89C6     		movl	%eax, %esi
 601 0387 83E640   		andl	$64, %esi
 602              	.LBB161:
 182:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8              	.LHOTB0:
 603              		.loc 2 182 0
 604 038a 84C0     		testb	%al, %al
 605              	.LBE161:
 181:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    7:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    7              		.section	.text._ZN12Fl_GIF_ImageD2E
 606              		.loc 2 181 0
 607 038c 8974246C 		movl	%esi, 108(%rsp)
 608              	.LVL74:
 609              	.LBB163:
 182:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8              	.LHOTB0:
 610              		.loc 2 182 0
 611 0390 0F88A508 		js	.L28
 611      0000
 612              	.LVL75:
 613              	.L31:
 614              	.LBE163:
 191:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   17:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_GIF_Ima
 615              		.loc 2 191 0
 616 0396 4889EF   		movq	%rbp, %rdi
 617 0399 E8000000 		call	_IO_getc
 617      00
 618              	.LVL76:
 619 039e 0FB6C8   		movzbl	%al, %ecx
 620 03a1 8D4101   		leal	1(%rcx), %eax
 621              	.LBE160:
 622              	.LBE171:
 623              	.LBE180:
 624              	.LBE190:
 202:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   28:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
 625              		.loc 2 202 0
 626 03a4 39442408 		cmpl	%eax, 8(%rsp)
 627              	.LBB191:
 628              	.LBB181:
 629              	.LBB172:
 630              	.LBB165:
 191:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   17:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_GIF_Ima
 631              		.loc 2 191 0
 632 03a8 89442474 		movl	%eax, 116(%rsp)
 633              	.LVL77:
 634              	.LBE165:
 635              	.LBE172:
 636              	.LBE181:
 637              	.LBE191:
 202:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   28:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
 638              		.loc 2 202 0
 639 03ac 0F8CD407 		jl	.L164
 639      0000
 640              	.LVL78:
 206:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   32:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   15:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
 641              		.loc 2 206 0
 642 03b2 B8010000 		movl	$1, %eax
 642      00
 643              	.LVL79:
 644 03b7 D3E0     		sall	%cl, %eax
 645 03b9 89842480 		movl	%eax, 128(%rsp)
 645      000000
 646              	.LVL80:
 647 03c0 89442430 		movl	%eax, 48(%rsp)
 648              	.LVL81:
 649              	.L33:
 209:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   35:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** 
 650              		.loc 2 209 0
 651 03c4 8B5C242C 		movl	44(%rsp), %ebx
 652 03c8 448B1C24 		movl	(%rsp), %r11d
 653 03cc 440FAFDB 		imull	%ebx, %r11d
 654 03d0 4963C3   		movslq	%r11d, %rax
 655 03d3 4889C7   		movq	%rax, %rdi
 656 03d6 48898424 		movq	%rax, 168(%rsp)
 656      A8000000 
 657 03de E8000000 		call	_Znam
 657      00
 658              	.LVL82:
 659 03e3 48894424 		movq	%rax, 8(%rsp)
 659      08
 660              	.LVL83:
 213:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   39:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   22:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** #ifndef Fl_GIF
 661              		.loc 2 213 0
 662 03e8 4989C0   		movq	%rax, %r8
 209:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   35:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** 
 663              		.loc 2 209 0
 664 03eb 4989C7   		movq	%rax, %r15
 217:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   43:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** /**
 665              		.loc 2 217 0
 666 03ee 8B442430 		movl	48(%rsp), %eax
 667              	.LVL84:
 213:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   39:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   22:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** #ifndef Fl_GIF
 668              		.loc 2 213 0
 669 03f2 4863F3   		movslq	%ebx, %rsi
 220:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   46:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  loads the fir
 670              		.loc 2 220 0
 671 03f5 0FB64C24 		movzbl	116(%rsp), %ecx
 671      74
 213:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   39:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   22:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** #ifndef Fl_GIF
 672              		.loc 2 213 0
 673 03fa 4901F0   		addq	%rsi, %r8
 674              	.LVL85:
 675 03fd 48897424 		movq	%rsi, 96(%rsp)
 675      60
 228:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   54:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24 0000 48C70700 		movq	$_ZTV12Fl_GIF_Image+16, (%rdi
 676              		.loc 2 228 0
 677 0402 4889EF   		movq	%rbp, %rdi
 213:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   39:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   22:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** #ifndef Fl_GIF
 678              		.loc 2 213 0
 679 0405 4C894424 		movq	%r8, 80(%rsp)
 679      50
 680              	.LVL86:
 217:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   43:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** /**
 681              		.loc 2 217 0
 682 040a 8D7001   		leal	1(%rax), %esi
 683 040d 89742470 		movl	%esi, 112(%rsp)
 684              	.LVL87:
 218:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   44:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  The Fl_GIF_Im
 685              		.loc 2 218 0
 686 0411 8D7002   		leal	2(%rax), %esi
 687              	.LVL88:
 220:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   46:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  loads the fir
 688              		.loc 2 220 0
 689 0414 B8010000 		movl	$1, %eax
 689      00
 690 0419 D3E0     		sall	%cl, %eax
 691 041b 8D50FF   		leal	-1(%rax), %edx
 218:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   44:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  The Fl_GIF_Im
 692              		.loc 2 218 0
 693 041e 89742478 		movl	%esi, 120(%rsp)
 694              	.LVL89:
 220:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   46:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  loads the fir
 695              		.loc 2 220 0
 696 0422 8954247C 		movl	%edx, 124(%rsp)
 697              	.LVL90:
 228:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   54:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24 0000 48C70700 		movq	$_ZTV12Fl_GIF_Image+16, (%rdi
 698              		.loc 2 228 0
 699 0426 E8000000 		call	_IO_getc
 699      00
 700              	.LVL91:
 229:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   55:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24      000000
 701              		.loc 2 229 0
 702 042b 4889EF   		movq	%rbp, %rdi
 228:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   54:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24 0000 48C70700 		movq	$_ZTV12Fl_GIF_Image+16, (%rdi
 703              		.loc 2 228 0
 704 042e 0FB6D8   		movzbl	%al, %ebx
 705              	.LVL92:
 229:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   55:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24      000000
 706              		.loc 2 229 0
 707 0431 E8000000 		call	_IO_getc
 707      00
 708              	.LVL93:
 709 0436 4189C3   		movl	%eax, %r11d
 710              	.LVL94:
 711 0439 8B442430 		movl	48(%rsp), %eax
 712              	.LVL95:
 221:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   47:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   30:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  */
 713              		.loc 2 221 0
 714 043d 8B742478 		movl	120(%rsp), %esi
 220:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   46:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  loads the fir
 715              		.loc 2 220 0
 716 0441 8B54247C 		movl	124(%rsp), %edx
 717              	.LBB192:
 270:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  125              	.LBB130:
 718              		.loc 2 270 0
 719 0445 4C8B4424 		movq	80(%rsp), %r8
 719      50
 720              	.LBE192:
 229:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   55:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24      000000
 721              		.loc 2 229 0
 722 044a 8D4BFF   		leal	-1(%rbx), %ecx
 723              	.LBB193:
 270:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  125              	.LBB130:
 724              		.loc 2 270 0
 725 044d 4C89A424 		movq	%r12, 136(%rsp)
 725      88000000 
 726 0455 448BA424 		movl	128(%rsp), %r12d
 726      80000000 
 727 045d 4C8D8C24 		leaq	9392(%rsp), %r9
 727      B0240000 
 728              	.LBE193:
 229:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   55:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24      000000
 729              		.loc 2 229 0
 730 0465 89442438 		movl	%eax, 56(%rsp)
 731              	.LBB194:
 732              	.LBB182:
 733              	.LBB173:
 734              	.LBB166:
 191:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   17:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_GIF_Ima
 735              		.loc 2 191 0
 736 0469 8B442474 		movl	116(%rsp), %eax
 737              	.LBE166:
 738              	.LBE173:
 739              	.LBE182:
 740              	.LBE194:
 219:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   45:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  and drawing o
 741              		.loc 2 219 0
 742 046d 31DB     		xorl	%ebx, %ebx
 743              	.LVL96:
 221:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   47:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   30:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  */
 744              		.loc 2 221 0
 745 046f 89742440 		movl	%esi, 64(%rsp)
 211:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   37:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   20:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****    Fl_GIF_Imag
 746              		.loc 2 211 0
 747 0473 31F6     		xorl	%esi, %esi
 748              	.LBB195:
 270:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  125              	.LBB130:
 749              		.loc 2 270 0
 750 0475 48896C24 		movq	%rbp, 72(%rsp)
 750      48
 751 047a 4C89AC24 		movq	%r13, 144(%rsp)
 751      90000000 
 752 0482 4C89B424 		movq	%r14, 152(%rsp)
 752      98000000 
 753 048a 4C89C5   		movq	%r8, %rbp
 754              	.LVL97:
 755              	.LBE195:
 756              	.LBB196:
 757              	.LBB183:
 758              	.LBB174:
 759              	.LBB167:
 191:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   17:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_GIF_Ima
 760              		.loc 2 191 0
 761 048d 89442444 		movl	%eax, 68(%rsp)
 762              	.LBE167:
 763              	.LBE174:
 764              	.LBE183:
 765              	.LBE196:
 211:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   37:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   20:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****    Fl_GIF_Imag
 766              		.loc 2 211 0
 767 0491 31C0     		xorl	%eax, %eax
 229:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   55:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24      000000
 768              		.loc 2 229 0
 769 0493 894C2420 		movl	%ecx, 32(%rsp)
 770              	.LVL98:
 220:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   46:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_GIF_Image.H ****  loads the fir
 771              		.loc 2 220 0
 772 0497 8954243C 		movl	%edx, 60(%rsp)
 230:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   56:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   25 0007 E9000000 		jmp	_ZN9Fl_PixmapD2Ev
 773              		.loc 2 230 0
 774 049b C7442410 		movl	$0, 16(%rsp)
 774      00000000 
 775              	.LBB197:
 270:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  125              	.LBB130:
 776              		.loc 2 270 0
 777 04a3 4189F5   		movl	%esi, %r13d
 778 04a6 4189C6   		movl	%eax, %r14d
 779              	.LVL99:
 780 04a9 0F1F8000 		.p2align 4,,10
 780      000000
 781              		.p2align 3
 782              	.L36:
 240:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   66:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   35              		.weak	_ZN12Fl_GIF_ImageD1Ev
 783              		.loc 2 240 0
 784 04b0 448B5424 		movl	68(%rsp), %r10d
 784      44
 785 04b5 44035424 		addl	16(%rsp), %r10d
 785      10
 239:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   65:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   34              	.LHOTE0:
 786              		.loc 2 239 0
 787 04ba 410FB6D3 		movzbl	%r11b, %edx
 788              	.LVL100:
 240:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   66:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   35              		.weak	_ZN12Fl_GIF_ImageD1Ev
 789              		.loc 2 240 0
 790 04be 4183FA07 		cmpl	$7, %r10d
 791 04c2 0F8E8D00 		jle	.L37
 791      0000
 241:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   67:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   36              		.set	_ZN12Fl_GIF_ImageD1Ev,_ZN12Fl_
 792              		.loc 2 241 0
 793 04c8 8B442420 		movl	32(%rsp), %eax
 794 04cc 85C0     		testl	%eax, %eax
 795 04ce 0F8E7103 		jle	.L165
 795      0000
 796              	.LVL101:
 797              	.L38:
 245:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   71:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   40              		.section	.text._ZN12Fl_GIF_ImageD0E
 798              		.loc 2 245 0
 799 04d4 488B7C24 		movq	72(%rsp), %rdi
 799      48
 800 04d9 4C894C24 		movq	%r9, 88(%rsp)
 800      58
 801 04de 44895424 		movl	%r10d, 104(%rsp)
 801      68
 802 04e3 89542450 		movl	%edx, 80(%rsp)
 803              	.LVL102:
 804 04e7 E8000000 		call	_IO_getc
 804      00
 805              	.LVL103:
 246:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   72:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   41              	.LHOTB1:
 806              		.loc 2 246 0
 807 04ec 8B542450 		movl	80(%rsp), %edx
 248:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   74:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   43              		.p2align 4,,15
 808              		.loc 2 248 0
 809 04f0 448B5424 		movl	104(%rsp), %r10d
 809      68
 246:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   72:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   41              	.LHOTB1:
 810              		.loc 2 246 0
 811 04f5 0FB6C8   		movzbl	%al, %ecx
 812 04f8 C1E108   		sall	$8, %ecx
 245:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   71:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   40              		.section	.text._ZN12Fl_GIF_ImageD0E
 813              		.loc 2 245 0
 814 04fb 836C2420 		subl	$1, 32(%rsp)
 814      01
 815              	.LVL104:
 248:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   74:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   43              		.p2align 4,,15
 816              		.loc 2 248 0
 817 0500 4C8B4C24 		movq	88(%rsp), %r9
 817      58
 246:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   72:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   41              	.LHOTB1:
 818              		.loc 2 246 0
 819 0505 09CA     		orl	%ecx, %edx
 820              	.LVL105:
 248:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   74:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   43              		.p2align 4,,15
 821              		.loc 2 248 0
 822 0507 4183FA0F 		cmpl	$15, %r10d
 823 050b 0F8EF707 		jle	.L166
 823      0000
 249:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   75:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   44              		.weak	_ZN12Fl_GIF_ImageD0Ev
 824              		.loc 2 249 0
 825 0511 448B5C24 		movl	32(%rsp), %r11d
 825      20
 826 0516 4585DB   		testl	%r11d, %r11d
 827 0519 0F844902 		je	.L167
 827      0000
 828              	.LVL106:
 829              	.L41:
 253:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   79:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   49              		.cfi_startproc
 830              		.loc 2 253 0
 831 051f 488B7C24 		movq	72(%rsp), %rdi
 831      48
 832 0524 4C894C24 		movq	%r9, 88(%rsp)
 832      58
 833 0529 44895424 		movl	%r10d, 104(%rsp)
 833      68
 834 052e 89542450 		movl	%edx, 80(%rsp)
 835 0532 E8000000 		call	_IO_getc
 835      00
 836              	.LVL107:
 254:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   80:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   50              	.LVL2:
 837              		.loc 2 254 0
 838 0537 8B542450 		movl	80(%rsp), %edx
 253:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   79:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   49              		.cfi_startproc
 839              		.loc 2 253 0
 840 053b 836C2420 		subl	$1, 32(%rsp)
 840      01
 841              	.LVL108:
 842 0540 4189C3   		movl	%eax, %r11d
 843              	.LVL109:
 254:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   80:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   50              	.LVL2:
 844              		.loc 2 254 0
 845 0543 4C8B4C24 		movq	88(%rsp), %r9
 845      58
 846 0548 0FB6C0   		movzbl	%al, %eax
 847              	.LVL110:
 848 054b 448B5424 		movl	104(%rsp), %r10d
 848      68
 849 0550 C1E010   		sall	$16, %eax
 850 0553 09C2     		orl	%eax, %edx
 851              	.LVL111:
 852              	.L37:
 256:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   82:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   52              		.cfi_def_cfa_offset 16
 853              		.loc 2 256 0
 854 0555 0FB64C24 		movzbl	16(%rsp), %ecx
 854      10
 257:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   83:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   53              		.cfi_offset 3, -16
 855              		.loc 2 257 0
 856 055a 4183E207 		andl	$7, %r10d
 857 055e 44895424 		movl	%r10d, 16(%rsp)
 857      10
 858              	.LVL112:
 256:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   82:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   52              		.cfi_def_cfa_offset 16
 859              		.loc 2 256 0
 860 0563 D3FA     		sarl	%cl, %edx
 861              	.LVL113:
 862 0565 2354243C 		andl	60(%rsp), %edx
 863              	.LVL114:
 259:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  114              		.loc 2 84 0
 864              		.loc 2 259 0
 865 0569 39542430 		cmpl	%edx, 48(%rsp)
 866 056d 0F84C701 		je	.L168
 866      0000
 267:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  122              		.cfi_offset 14, -24
 867              		.loc 2 267 0
 868 0573 39542470 		cmpl	%edx, 112(%rsp)
 869 0577 0F842002 		je	.L142
 869      0000
 870              	.LVL115:
 272:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    1:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 871              		.loc 2 272 0
 872 057d 39542440 		cmpl	%edx, 64(%rsp)
 873 0581 0F8FA801 		jg	.L96
 873      0000
 273:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // "$Id: Fl_Pixmap.H 9706 2012-11-06 20:46:14Z matt $"
 874              		.loc 2 273 0
 875 0587 0F857A06 		jne	.L45
 875      0000
 876              	.LVL116:
 273:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // "$Id: Fl_Pixmap.H 9706 2012-11-06 20:46:14Z matt $"
 877              		.loc 2 273 0 is_stmt 0 discriminator 1
 878 058d 889C24B0 		movb	%bl, 9392(%rsp)
 878      240000
 879              	.LVL117:
 880 0594 498D4101 		leaq	1(%r9), %rax
 881 0598 48635C24 		movslq	56(%rsp), %rbx
 881      38
 882              	.LVL118:
 883 059d EB19     		jmp	.L151
 884              	.LVL119:
 885 059f 90       		.p2align 4,,10
 886              		.p2align 3
 887              	.L49:
 276:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    5:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 888              		.loc 2 276 0 is_stmt 1 discriminator 1
 889 05a0 0FB68C1C 		movzbl	10432(%rsp,%rbx), %ecx
 889      C0280000 
 890 05a8 480FBF9C 		movswq	176(%rsp,%rbx,2), %rbx
 890      5CB00000 
 890      00
 891              	.LVL120:
 892 05b1 4883C001 		addq	$1, %rax
 893              	.LVL121:
 894 05b5 8848FF   		movb	%cl, -1(%rax)
 895              	.LVL122:
 896              	.L151:
 897 05b8 4139DC   		cmpl	%ebx, %r12d
 898 05bb 7EE3     		jle	.L49
 277:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    6:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Copyright 1998-2012 by Bill Spitzak and others.
 899              		.loc 2 277 0
 900 05bd 488D4801 		leaq	1(%rax), %rcx
 901              	.LVL123:
 902 05c1 4189DA   		movl	%ebx, %r10d
 903              	.LVL124:
 904 05c4 8818     		movb	%bl, (%rax)
 905 05c6 89DF     		movl	%ebx, %edi
 906 05c8 8B74246C 		movl	108(%rsp), %esi
 907 05cc 4C8B4424 		movq	96(%rsp), %r8
 907      60
 908 05d1 EB29     		jmp	.L61
 909              	.LVL125:
 910              		.p2align 4,,10
 911 05d3 0F1F4400 		.p2align 3
 911      00
 912              	.L169:
 281:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // file is missing or damaged, see the license at:
 913              		.loc 2 281 0 discriminator 1
 914 05d8 4183C501 		addl	$1, %r13d
 915              	.LVL126:
 916              	.L52:
 288:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   17:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 917              		.loc 2 288 0
 918 05dc 443B2C24 		cmpl	(%rsp), %r13d
 919 05e0 7C5E     		jl	.L58
 920              	.LVL127:
 921              	.L171:
 922 05e2 31C0     		xorl	%eax, %eax
 923 05e4 4531ED   		xorl	%r13d, %r13d
 924              	.LVL128:
 925              	.L59:
 289:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 926              		.loc 2 289 0
 927 05e7 48034424 		addq	8(%rsp), %rax
 927      08
 928              	.LVL129:
 290:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   19:fltk-1.3.4-1/FL/Fl_Pixmap.H **** /* \file
 929              		.loc 2 290 0
 930 05ec 4A8D2C00 		leaq	(%rax,%r8), %rbp
 931              	.LVL130:
 932              	.L50:
 292:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   21:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 933              		.loc 2 292 0
 934 05f0 4C39C9   		cmpq	%r9, %rcx
 935 05f3 765B     		jbe	.L60
 936 05f5 0FB679FF 		movzbl	-1(%rcx), %edi
 937 05f9 4989C7   		movq	%rax, %r15
 938              	.LVL131:
 939              	.L61:
 279:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // This library is free software. Distribution and use rights
 940              		.loc 2 279 0
 941 05fc 498D4701 		leaq	1(%r15), %rax
 942              	.LVL132:
 943 0600 4883E901 		subq	$1, %rcx
 944              	.LVL133:
 945 0604 41883F   		movb	%dil, (%r15)
 280:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    9:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // the file "COPYING" which should have been included with th
 946              		.loc 2 280 0
 947 0607 4839C5   		cmpq	%rax, %rbp
 948 060a 77E4     		ja	.L50
 281:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // file is missing or damaged, see the license at:
 949              		.loc 2 281 0
 950 060c 85F6     		testl	%esi, %esi
 951 060e 74C8     		je	.L169
 282:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 952              		.loc 2 282 0
 953 0610 4183FE01 		cmpl	$1, %r14d
 954 0614 0F84D600 		je	.L53
 954      0000
 955 061a 0F8EA000 		jle	.L170
 955      0000
 956 0620 4183FE02 		cmpl	$2, %r14d
 957 0624 0F84E600 		je	.L56
 957      0000
 286:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   15:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 958              		.loc 2 286 0
 959 062a 418D4502 		leal	2(%r13), %eax
 960              	.LVL134:
 961 062e 4183FE03 		cmpl	$3, %r14d
 962 0632 440F44E8 		cmove	%eax, %r13d
 963              	.LVL135:
 288:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   17:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 964              		.loc 2 288 0
 965 0636 443B2C24 		cmpl	(%rsp), %r13d
 966 063a 7DA6     		jge	.L171
 967 063c 0F1F4000 		.p2align 4,,10
 968              		.p2align 3
 969              	.L58:
 970 0640 8B44242C 		movl	44(%rsp), %eax
 971 0644 410FAFC5 		imull	%r13d, %eax
 972 0648 4898     		cltq
 973 064a EB9B     		jmp	.L59
 974              	.LVL136:
 975 064c 0F1F4000 		.p2align 4,,10
 976              		.p2align 3
 977              	.L60:
 294:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   23:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #define Fl_Pixmap_H
 978              		.loc 2 294 0
 979 0650 8B742438 		movl	56(%rsp), %esi
 980 0654 8B4C2430 		movl	48(%rsp), %ecx
 981              	.LVL137:
 982 0658 39CE     		cmpl	%ecx, %esi
 983 065a 7454     		je	.L62
 295:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  include "Fl_Image.H"
 984              		.loc 2 295 0
 985 065c 8B7C2440 		movl	64(%rsp), %edi
 986 0660 4863CF   		movslq	%edi, %rcx
 297:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  include "x.H"
 987              		.loc 2 297 0
 988 0663 8D7F01   		leal	1(%rdi), %edi
 989              	.LVL138:
 298:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif
 990              		.loc 2 298 0
 991 0666 397C243C 		cmpl	%edi, 60(%rsp)
 295:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   24:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  include "Fl_Image.H"
 992              		.loc 2 295 0
 993 066a 6689B44C 		movw	%si, 176(%rsp,%rcx,2)
 993      B0000000 
 296:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   25:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if defined(WIN32)
 994              		.loc 2 296 0
 995 0672 4488940C 		movb	%r10b, 10432(%rsp,%rcx)
 995      C0280000 
 298:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif
 996              		.loc 2 298 0
 997 067a 0F8DDF00 		jge	.L101
 997      0000
 299:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 998              		.loc 2 299 0
 999 0680 8B742444 		movl	68(%rsp), %esi
 1000 0684 83FE0B   		cmpl	$11, %esi
 1001 0687 7F27     		jg	.L62
 300:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_Pixmap.H **** class Fl_Widget;
 1002              		.loc 2 300 0
 1003 0689 83C601   		addl	$1, %esi
 301:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   30:fltk-1.3.4-1/FL/Fl_Pixmap.H **** struct Fl_Menu_Item;
 1004              		.loc 2 301 0
 1005 068c 41BF0100 		movl	$1, %r15d
 1005      0000
 1006 0692 897C2440 		movl	%edi, 64(%rsp)
 1007 0696 89F1     		movl	%esi, %ecx
 300:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_Pixmap.H **** class Fl_Widget;
 1008              		.loc 2 300 0
 1009 0698 89742444 		movl	%esi, 68(%rsp)
 1010              	.LVL139:
 301:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   30:fltk-1.3.4-1/FL/Fl_Pixmap.H **** struct Fl_Menu_Item;
 1011              		.loc 2 301 0
 1012 069c 41D3E7   		sall	%cl, %r15d
 1013 069f 418D77FF 		leal	-1(%r15), %esi
 1014              	.LVL140:
 1015 06a3 8974243C 		movl	%esi, 60(%rsp)
 1016              	.LVL141:
 1017 06a7 660F1F84 		.p2align 4,,10
 1017      00000000 
 1017      00
 1018              		.p2align 3
 1019              	.L62:
 1020 06b0 89542438 		movl	%edx, 56(%rsp)
 1021 06b4 4989C7   		movq	%rax, %r15
 1022 06b7 E9F4FDFF 		jmp	.L36
 1022      FF
 1023              	.LVL142:
 1024 06bc 0F1F4000 		.p2align 4,,10
 1025              		.p2align 3
 1026              	.L170:
 282:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 1027              		.loc 2 282 0
 1028 06c0 4585F6   		testl	%r14d, %r14d
 1029 06c3 0F8513FF 		jne	.L52
 1029      FFFF
 283:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   12:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //     http://www.fltk.org/COPYING.php
 1030              		.loc 2 283 0
 1031 06c9 4183C508 		addl	$8, %r13d
 1032              	.LVL143:
 1033 06cd 44392C24 		cmpl	%r13d, (%rsp)
 1034 06d1 0F8F69FF 		jg	.L58
 1034      FFFF
 1035 06d7 41BE0100 		movl	$1, %r14d
 1035      0000
 1036              	.LVL144:
 1037 06dd 41BD0400 		movl	$4, %r13d
 1037      0000
 1038              	.LVL145:
 1039 06e3 E9F4FEFF 		jmp	.L52
 1039      FF
 1040              	.LVL146:
 1041 06e8 0F1F8400 		.p2align 4,,10
 1041      00000000 
 1042              		.p2align 3
 1043              	.L53:
 284:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 1044              		.loc 2 284 0
 1045 06f0 4183C508 		addl	$8, %r13d
 1046              	.LVL147:
 1047 06f4 44392C24 		cmpl	%r13d, (%rsp)
 1048 06f8 0F8F42FF 		jg	.L58
 1048      FFFF
 1049 06fe 41BE0200 		movl	$2, %r14d
 1049      0000
 1050              	.LVL148:
 1051 0704 41BD0200 		movl	$2, %r13d
 1051      0000
 1052              	.LVL149:
 1053 070a E9CDFEFF 		jmp	.L52
 1053      FF
 1054              	.LVL150:
 1055 070f 90       		.p2align 4,,10
 1056              		.p2align 3
 1057              	.L56:
 285:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   14:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Please report all bugs and problems on the following page:
 1058              		.loc 2 285 0
 1059 0710 4183C504 		addl	$4, %r13d
 1060              	.LVL151:
 1061 0714 44392C24 		cmpl	%r13d, (%rsp)
 1062 0718 0F8F22FF 		jg	.L58
 1062      FFFF
 1063 071e 41BE0300 		movl	$3, %r14d
 1063      0000
 1064              	.LVL152:
 1065 0724 41BD0100 		movl	$1, %r13d
 1065      0000
 1066              	.LVL153:
 1067 072a E9ADFEFF 		jmp	.L52
 1067      FF
 1068              	.LVL154:
 1069              	.L96:
 1070 072f 4863DA   		movslq	%edx, %rbx
 1071              	.LVL155:
 270:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  125              	.LBB130:
 1072              		.loc 2 270 0
 1073 0732 4C89C8   		movq	%r9, %rax
 1074              	.LVL156:
 1075 0735 E97EFEFF 		jmp	.L151
 1075      FF
 1076              	.LVL157:
 1077              	.L168:
 264:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  119              		.cfi_offset 15, -16
 1078              		.loc 2 264 0
 1079 073a 8B442430 		movl	48(%rsp), %eax
 1080 073e 89442438 		movl	%eax, 56(%rsp)
 262:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  117 0000 4157     		pushq	%r15
 1081              		.loc 2 262 0
 1082 0742 8B442478 		movl	120(%rsp), %eax
 1083 0746 89442440 		movl	%eax, 64(%rsp)
 261:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  116              	.LVL6:
 1084              		.loc 2 261 0
 1085 074a 8B44247C 		movl	124(%rsp), %eax
 1086 074e 8944243C 		movl	%eax, 60(%rsp)
 1087              	.LBE197:
 1088              	.LBB198:
 1089              	.LBB184:
 1090              	.LBB175:
 1091              	.LBB168:
 191:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   17:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_GIF_Ima
 1092              		.loc 2 191 0
 1093 0752 8B442474 		movl	116(%rsp), %eax
 1094 0756 89442444 		movl	%eax, 68(%rsp)
 1095 075a E951FDFF 		jmp	.L36
 1095      FF
 1096              	.LVL158:
 1097              	.L101:
 1098              	.LBE168:
 1099              	.LBE175:
 1100              	.LBE184:
 1101              	.LBE198:
 1102              	.LBB199:
 1103 075f 897C2440 		movl	%edi, 64(%rsp)
 1104 0763 E948FFFF 		jmp	.L62
 1104      FF
 1105              	.LVL159:
 1106              	.L167:
 250:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   76:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   46              	_ZN12Fl_GIF_ImageD0Ev:
 1107              		.loc 2 250 0
 1108 0768 488B7C24 		movq	72(%rsp), %rdi
 1108      48
 1109 076d 4C894C24 		movq	%r9, 88(%rsp)
 1109      58
 1110 0772 44895424 		movl	%r10d, 104(%rsp)
 1110      68
 1111 0777 89542450 		movl	%edx, 80(%rsp)
 1112 077b E8000000 		call	_IO_getc
 1112      00
 1113              	.LVL160:
 1114 0780 0FB6C0   		movzbl	%al, %eax
 251:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   77:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   47              	.LFB201:
 1115              		.loc 2 251 0
 1116 0783 8B542450 		movl	80(%rsp), %edx
 1117 0787 448B5424 		movl	104(%rsp), %r10d
 1117      68
 1118 078c 85C0     		testl	%eax, %eax
 250:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   76:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   46              	_ZN12Fl_GIF_ImageD0Ev:
 1119              		.loc 2 250 0
 1120 078e 89442420 		movl	%eax, 32(%rsp)
 1121              	.LVL161:
 251:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   77:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   47              	.LFB201:
 1122              		.loc 2 251 0
 1123 0792 4C8B4C24 		movq	88(%rsp), %r9
 1123      58
 1124 0797 0F8582FD 		jne	.L41
 1124      FFFF
 1125              	.LVL162:
 1126              	.L142:
 1127 079d 488B6C24 		movq	72(%rsp), %rbp
 1127      48
 1128              	.LVL163:
 1129 07a2 4C8BA424 		movq	136(%rsp), %r12
 1129      88000000 
 1130 07aa 4C8BAC24 		movq	144(%rsp), %r13
 1130      90000000 
 1131              	.LVL164:
 1132 07b2 4C8BB424 		movq	152(%rsp), %r14
 1132      98000000 
 1133              	.LVL165:
 1134              	.L48:
 1135              	.LBE199:
 1136              	.LBB200:
 1137              	.LBB201:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 1138              		.loc 5 76 0
 1139 07ba 8B44242C 		movl	44(%rsp), %eax
 1140              	.LBE201:
 1141              	.LBE200:
 1142              	.LBB203:
 1143              	.LBB204:
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 1144              		.loc 5 84 0
 1145 07be 41C74424 		movl	$1, 16(%r12)
 1145      10010000 
 1145      00
 1146              	.LBE204:
 1147              	.LBE203:
 1148              	.LBB205:
 1149              	.LBB202:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 1150              		.loc 5 76 0
 1151 07c7 41894424 		movl	%eax, 8(%r12)
 1151      08
 1152              	.LVL166:
 1153              	.LBE202:
 1154              	.LBE205:
 1155              	.LBB206:
 1156              	.LBB207:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 1157              		.loc 5 80 0
 1158 07cc 8B0424   		movl	(%rsp), %eax
 1159 07cf 41894424 		movl	%eax, 12(%r12)
 1159      0C
 1160              	.LVL167:
 1161              	.LBE207:
 1162              	.LBE206:
 315:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   44:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_GDI_Printer_Graphics_Driver;
 1163              		.loc 2 315 0
 1164 07d4 83C002   		addl	$2, %eax
 1165 07d7 4863F8   		movslq	%eax, %rdi
 1166 07da 89442418 		movl	%eax, 24(%rsp)
 1167              	.LVL168:
 1168 07de 48C1E703 		salq	$3, %rdi
 1169 07e2 E8000000 		call	_Znam
 1169      00
 1170              	.LVL169:
 1171              	.LBB208:
 318:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   47:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void delete_data();
 1172              		.loc 2 318 0
 1173 07e7 80BC2486 		cmpb	$0, 134(%rsp)
 1173      00000000 
 1174              	.LBE208:
 315:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   44:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_GDI_Printer_Graphics_Driver;
 1175              		.loc 2 315 0
 1176 07ef 48894424 		movq	%rax, 16(%rsp)
 1176      10
 1177              	.LVL170:
 1178              	.LBB212:
 318:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   47:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void delete_data();
 1179              		.loc 2 318 0
 1180 07f4 0F842B03 		je	.L103
 1180      0000
 1181              	.LBB209:
 320:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   49:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   int prepare(int XP, int YP, int WP, int HP, int &cx, int &c
 1182              		.loc 2 320 0
 1183 07fa 4C8B5C24 		movq	8(%rsp), %r11
 1183      08
 1184 07ff 4C039C24 		addq	168(%rsp), %r11
 1184      A8000000 
 1185              	.LVL171:
 1186              	.LBE209:
 318:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   47:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void delete_data();
 1187              		.loc 2 318 0
 1188 0807 F6842487 		testb	$1, 135(%rsp)
 1188      00000001 
 1189 080f 4C89D8   		movq	%r11, %rax
 1190              	.LVL172:
 1191 0812 0F840D03 		je	.L103
 1191      0000
 1192 0818 0FB68C24 		movzbl	134(%rsp), %ecx
 1192      86000000 
 1193 0820 488B7424 		movq	8(%rsp), %rsi
 1193      08
 1194 0825 EB0B     		jmp	.L127
 1195              	.LVL173:
 1196              	.L68:
 1197              	.LBB210:
 323:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   52:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   protected:
 1198              		.loc 2 323 0
 1199 0827 84D2     		testb	%dl, %dl
 1200 0829 7503     		jne	.L69
 323:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   52:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   protected:
 1201              		.loc 2 323 0 is_stmt 0 discriminator 1
 1202 082b 8848FF   		movb	%cl, -1(%rax)
 1203              	.L69:
 1204 082e 4883E801 		subq	$1, %rax
 1205              	.LVL174:
 1206              	.L127:
 321:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   50:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 			 int &X, int &Y, int &W, int &H);
 1207              		.loc 2 321 0 is_stmt 1
 1208 0832 4839C6   		cmpq	%rax, %rsi
 1209 0835 7348     		jnb	.L67
 322:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   51:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 1210              		.loc 2 322 0
 1211 0837 0FB650FF 		movzbl	-1(%rax), %edx
 1212 083b 38D1     		cmpb	%dl, %cl
 1213 083d 75E8     		jne	.L68
 322:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   51:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 1214              		.loc 2 322 0 is_stmt 0 discriminator 1
 1215 083f C640FF00 		movb	$0, -1(%rax)
 1216 0843 EBE9     		jmp	.L69
 1217              	.LVL175:
 1218              	.L165:
 1219              	.LBE210:
 1220              	.LBE212:
 1221              	.LBB213:
 242:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   68:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   37              		.section	.text.unlikely._ZN12Fl_GIF
 1222              		.loc 2 242 0 is_stmt 1
 1223 0845 488B7C24 		movq	72(%rsp), %rdi
 1223      48
 1224 084a 4C894C24 		movq	%r9, 88(%rsp)
 1224      58
 1225 084f 44895424 		movl	%r10d, 104(%rsp)
 1225      68
 1226 0854 89542450 		movl	%edx, 80(%rsp)
 1227 0858 E8000000 		call	_IO_getc
 1227      00
 1228              	.LVL176:
 1229 085d 0FB6C0   		movzbl	%al, %eax
 243:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   69:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   38              		.align 2
 1230              		.loc 2 243 0
 1231 0860 8B542450 		movl	80(%rsp), %edx
 1232 0864 448B5424 		movl	104(%rsp), %r10d
 1232      68
 1233 0869 85C0     		testl	%eax, %eax
 242:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   68:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   37              		.section	.text.unlikely._ZN12Fl_GIF
 1234              		.loc 2 242 0
 1235 086b 89442420 		movl	%eax, 32(%rsp)
 1236              	.LVL177:
 243:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   69:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   38              		.align 2
 1237              		.loc 2 243 0
 1238 086f 4C8B4C24 		movq	88(%rsp), %r9
 1238      58
 1239 0874 0F855AFC 		jne	.L38
 1239      FFFF
 1240 087a E91EFFFF 		jmp	.L142
 1240      FF
 1241              	.LVL178:
 1242              	.L67:
 1243              	.LBE213:
 1244              	.LBB214:
 1245              	.LBB211:
 327:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   56:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   public:
 1246              		.loc 2 327 0
 1247 087f 0FB68424 		movzbl	134(%rsp), %eax
 1247      86000000 
 1248              	.LVL179:
 326:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   55:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 1249              		.loc 2 326 0
 1250 0887 0FB69424 		movzbl	8368(%rsp), %edx
 1250      B0200000 
 1251              	.LVL180:
 327:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   56:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   public:
 1252              		.loc 2 327 0
 1253 088f 0FB68C04 		movzbl	8368(%rsp,%rax), %ecx
 1253      B0200000 
 1254 0897 888C24B0 		movb	%cl, 8368(%rsp)
 1254      200000
 331:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   60:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   private:
 1255              		.loc 2 331 0
 1256 089e 0FB68C04 		movzbl	8624(%rsp,%rax), %ecx
 1256      B0210000 
 328:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   57:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 1257              		.loc 2 328 0
 1258 08a6 889404B0 		movb	%dl, 8368(%rsp,%rax)
 1258      200000
 330:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   59:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   
 1259              		.loc 2 330 0
 1260 08ad 0FB69424 		movzbl	8624(%rsp), %edx
 1260      B0210000 
 1261              	.LVL181:
 331:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   60:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   private:
 1262              		.loc 2 331 0
 1263 08b5 888C24B0 		movb	%cl, 8624(%rsp)
 1263      210000
 335:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   64:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   static // a static member is needed for ABI compatibility
 1264              		.loc 2 335 0
 1265 08bc 0FB68C04 		movzbl	8880(%rsp,%rax), %ecx
 1265      B0220000 
 332:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   61:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
 1266              		.loc 2 332 0
 1267 08c4 889404B0 		movb	%dl, 8624(%rsp,%rax)
 1267      210000
 334:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   63:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if FLTK_ABI_VERSION < 10301
 1268              		.loc 2 334 0
 1269 08cb 0FB69424 		movzbl	8880(%rsp), %edx
 1269      B0220000 
 1270              	.LVL182:
 335:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   64:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   static // a static member is needed for ABI compatibility
 1271              		.loc 2 335 0
 1272 08d3 888C24B0 		movb	%cl, 8880(%rsp)
 1272      220000
 336:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   65:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif
 1273              		.loc 2 336 0
 1274 08da 889404B0 		movb	%dl, 8880(%rsp,%rax)
 1274      220000
 1275              	.LVL183:
 1276              	.L65:
 1277              	.LBE211:
 1278              	.LBE214:
 342:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   71:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #else
 1279              		.loc 2 342 0 discriminator 3
 1280 08e1 448B8424 		movl	128(%rsp), %r8d
 1280      80000000 
 1281 08e9 4585C0   		testl	%r8d, %r8d
 1282 08ec 7E26     		jle	.L73
 1283 08ee 8BB42480 		movl	128(%rsp), %esi
 1283      000000
 1284 08f5 488D8424 		leaq	9136(%rsp), %rax
 1284      B0230000 
 1285 08fd 8D56FF   		leal	-1(%rsi), %edx
 1286 0900 488D5410 		leaq	1(%rax,%rdx), %rdx
 1286      01
 1287              	.LVL184:
 1288              		.p2align 4,,10
 1289 0905 0F1F00   		.p2align 3
 1290              	.L74:
 342:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   71:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #else
 1291              		.loc 2 342 0 is_stmt 0 discriminator 2
 1292 0908 C60000   		movb	$0, (%rax)
 1293              	.LVL185:
 1294 090b 4883C001 		addq	$1, %rax
 1295              	.LVL186:
 1296 090f 4839C2   		cmpq	%rax, %rdx
 1297 0912 75F4     		jne	.L74
 1298              	.L73:
 1299              	.LVL187:
 1300 0914 488B7424 		movq	8(%rsp), %rsi
 1300      08
 344:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   73:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   unsigned mask_; // for internal use (mask bitmap)
 1301              		.loc 2 344 0 is_stmt 1
 1302 0919 4D8D7BFF 		leaq	-1(%r11), %r15
 1303              	.LVL188:
 1304 091d 4C89F8   		movq	%r15, %rax
 1305 0920 4C39DE   		cmpq	%r11, %rsi
 1306 0923 488D4EFF 		leaq	-1(%rsi), %rcx
 1307 0927 7314     		jnb	.L72
 1308              	.LVL189:
 1309              	.L121:
 344:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   73:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   unsigned mask_; // for internal use (mask bitmap)
 1310              		.loc 2 344 0 is_stmt 0 discriminator 1
 1311 0929 0FB610   		movzbl	(%rax), %edx
 1312 092c 4883E801 		subq	$1, %rax
 1313              	.LVL190:
 1314 0930 4839C1   		cmpq	%rax, %rcx
 1315 0933 C68414B0 		movb	$1, 9136(%rsp,%rdx)
 1315      23000001 
 1316              	.LVL191:
 1317 093b 75EC     		jne	.L121
 1318              	.L72:
 347:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   76:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   public:
 1319              		.loc 2 347 0 is_stmt 1
 1320 093d 80BC2487 		cmpb	$0, 135(%rsp)
 1320      00000000 
 1321 0945 BA210000 		movl	$33, %edx
 1321      00
 1322 094a 740F     		je	.L76
 347:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   76:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   public:
 1323              		.loc 2 347 0 is_stmt 0 discriminator 1
 1324 094c 80BC24B0 		cmpb	$1, 9136(%rsp)
 1324      23000001 
 1325 0954 19D2     		sbbl	%edx, %edx
 1326 0956 F7D2     		notl	%edx
 1327 0958 83C221   		addl	$33, %edx
 1328              	.L76:
 1329              	.LVL192:
 349:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   78:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   /**    The constructors create a new pixmap from the specif
 1330              		.loc 2 349 0 is_stmt 1 discriminator 4
 1331 095b 8B842480 		movl	128(%rsp), %eax
 1331      000000
 1332              	.LVL193:
 1333 0962 85C0     		testl	%eax, %eax
 1334 0964 0F8E3303 		jle	.L78
 1334      0000
 1335 096a 8D58FF   		leal	-1(%rax), %ebx
 1336              	.LVL194:
 349:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   78:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   /**    The constructors create a new pixmap from the specif
 1337              		.loc 2 349 0 is_stmt 0 discriminator 2
 1338 096d 4531D2   		xorl	%r10d, %r10d
 1339 0970 31C0     		xorl	%eax, %eax
 1340 0972 4883C301 		addq	$1, %rbx
 1341              	.LVL195:
 1342 0976 662E0F1F 		.p2align 4,,10
 1342      84000000 
 1342      0000
 1343              		.p2align 3
 1344              	.L81:
 1345 0980 80BC04B0 		cmpb	$0, 9136(%rsp,%rax)
 1345      23000000 
 1346 0988 740E     		je	.L79
 1347              	.LVL196:
 350:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   79:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   explicit Fl_Pixmap(char * const * D) : Fl_Image(-1,0,1), al
 1348              		.loc 2 350 0 is_stmt 1
 1349 098a 889404B0 		movb	%dl, 9392(%rsp,%rax)
 1349      240000
 351:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  127              		.loc 3 79 0
 1350              		.loc 2 351 0
 1351 0991 4183C201 		addl	$1, %r10d
 1352              	.LVL197:
 350:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   79:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   explicit Fl_Pixmap(char * const * D) : Fl_Image(-1,0,1), al
 1353              		.loc 2 350 0
 1354 0995 83C201   		addl	$1, %edx
 1355              	.LVL198:
 1356              	.L79:
 1357 0998 4883C001 		addq	$1, %rax
 1358              	.LVL199:
 349:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   78:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   /**    The constructors create a new pixmap from the specif
 1359              		.loc 2 349 0 discriminator 3
 1360 099c 4839C3   		cmpq	%rax, %rbx
 1361 099f 75DF     		jne	.L81
 1362 09a1 4C895C24 		movq	%r11, 48(%rsp)
 1362      30
 1363              	.LVL200:
 1364              	.LBB215:
 1365              	.LBB216:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 1366              		.loc 4 34 0
 1367 09a6 4489D0   		movl	%r10d, %eax
 1368 09a9 6A01     		pushq	$1
 1369              		.cfi_def_cfa_offset 14616
 1370              	.LVL201:
 1371 09ab F7D8     		negl	%eax
 1372 09ad B9000000 		movl	$.LC10, %ecx
 1372      00
 1373 09b2 BA001000 		movl	$4096, %edx
 1373      00
 1374              	.LVL202:
 1375 09b7 44895424 		movl	%r10d, 40(%rsp)
 1375      28
 1376 09bc 50       		pushq	%rax
 1377              		.cfi_def_cfa_offset 14624
 1378 09bd BE010000 		movl	$1, %esi
 1378      00
 1379 09c2 448B4C24 		movl	16(%rsp), %r9d
 1379      10
 1380 09c7 448B4424 		movl	60(%rsp), %r8d
 1380      3C
 1381 09cc 31C0     		xorl	%eax, %eax
 1382 09ce 488DBC24 		leaq	10448(%rsp), %rdi
 1382      D0280000 
 1383              	.LVL203:
 1384 09d6 E8000000 		call	__sprintf_chk
 1384      00
 1385              	.LVL204:
 1386              	.LBE216:
 1387              	.LBE215:
 357:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  133 0006 4155     		pushq	%r13
 1388              		.loc 2 357 0
 1389 09db 8D7801   		leal	1(%rax), %edi
 1390 09de 4863FF   		movslq	%edi, %rdi
 1391 09e1 E8000000 		call	_Znam
 1391      00
 1392              	.LVL205:
 1393 09e6 488B7424 		movq	32(%rsp), %rsi
 1393      20
 1394              	.LBB218:
 1395              	.LBB219:
 1396              		.file 6 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 1397              		.loc 6 110 0
 1398 09eb 488D9424 		leaq	10448(%rsp), %rdx
 1398      D0280000 
 1399 09f3 4889C7   		movq	%rax, %rdi
 1400              	.LBE219:
 1401              	.LBE218:
 357:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  133 0006 4155     		pushq	%r13
 1402              		.loc 2 357 0
 1403 09f6 488906   		movq	%rax, (%rsi)
 1404              	.LVL206:
 1405              	.LBB223:
 1406              	.LBB220:
 1407              		.loc 6 110 0
 1408 09f9 4889D6   		movq	%rdx, %rsi
 1409 09fc E8000000 		call	strcpy
 1409      00
 1410              	.LVL207:
 1411              	.LBE220:
 1412              	.LBE223:
 361:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  137              		.cfi_def_cfa_offset 40
 1413              		.loc 2 361 0
 1414 0a01 448B5424 		movl	48(%rsp), %r10d
 1414      30
 1415 0a06 428D3C95 		leal	0(,%r10,4), %edi
 1415      00000000 
 1416 0a0e 4863FF   		movslq	%edi, %rdi
 1417 0a11 E8000000 		call	_Znam
 1417      00
 1418              	.LVL208:
 1419 0a16 488B7424 		movq	32(%rsp), %rsi
 1419      20
 1420 0a1b 48894608 		movq	%rax, 8(%rsi)
 1421              	.LVL209:
 1422 0a1f 5A       		popq	%rdx
 1423              		.cfi_def_cfa_offset 14616
 1424 0a20 59       		popq	%rcx
 1425              		.cfi_def_cfa_offset 14608
 1426              	.LVL210:
 1427 0a21 4C8B5C24 		movq	48(%rsp), %r11
 1427      30
 1428 0a26 488BB424 		movq	160(%rsp), %rsi
 1428      A0000000 
 1429 0a2e 31D2     		xorl	%edx, %edx
 1430              	.LVL211:
 1431              		.p2align 4,,10
 1432              		.p2align 3
 1433              	.L86:
 362:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  138              		.cfi_offset 12, -40
 1434              		.loc 2 362 0 discriminator 2
 1435 0a30 80BC14B0 		cmpb	$0, 9136(%rsp,%rdx)
 1435      23000000 
 1436 0a38 7427     		je	.L84
 1437              	.LVL212:
 363:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  139              	.LBB242:
 1438              		.loc 2 363 0
 1439 0a3a 0FB68C14 		movzbl	9392(%rsp,%rdx), %ecx
 1439      B0240000 
 366:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  142              		.loc 3 79 0
 1440              		.loc 2 366 0
 1441 0a42 4883C004 		addq	$4, %rax
 1442              	.LVL213:
 363:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  139              	.LBB242:
 1443              		.loc 2 363 0
 1444 0a46 8848FC   		movb	%cl, -4(%rax)
 1445              	.LVL214:
 364:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  140              	.LBB134:
 1446              		.loc 2 364 0
 1447 0a49 410FB60C 		movzbl	(%r14,%rdx), %ecx
 1447      16
 1448 0a4e 8848FD   		movb	%cl, -3(%rax)
 365:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  141              	.LBB131:
 1449              		.loc 2 365 0
 1450 0a51 410FB64C 		movzbl	0(%r13,%rdx), %ecx
 1450      1500
 1451 0a57 8848FE   		movb	%cl, -2(%rax)
 366:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  142              		.loc 3 79 0
 1452              		.loc 2 366 0
 1453 0a5a 0FB60C16 		movzbl	(%rsi,%rdx), %ecx
 1454 0a5e 8848FF   		movb	%cl, -1(%rax)
 1455              	.L84:
 1456              	.LVL215:
 1457 0a61 4883C201 		addq	$1, %rdx
 1458              	.LVL216:
 362:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  138              		.cfi_offset 12, -40
 1459              		.loc 2 362 0 discriminator 3
 1460 0a65 4839D3   		cmpq	%rdx, %rbx
 1461 0a68 75C6     		jne	.L86
 1462              	.LVL217:
 1463              	.L85:
 1464 0a6a 488B4424 		movq	8(%rsp), %rax
 1464      08
 371:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  146              	.LBE242:
 1465              		.loc 2 371 0 discriminator 2
 1466 0a6f 4C39D8   		cmpq	%r11, %rax
 1467 0a72 488D50FF 		leaq	-1(%rax), %rdx
 1468 0a76 7319     		jnb	.L83
 1469              	.L120:
 371:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  146              	.LBE242:
 1470              		.loc 2 371 0 is_stmt 0 discriminator 1
 1471 0a78 410FB607 		movzbl	(%r15), %eax
 1472 0a7c 4983EF01 		subq	$1, %r15
 1473              	.LVL218:
 1474 0a80 0FB68404 		movzbl	9392(%rsp,%rax), %eax
 1474      B0240000 
 1475 0a88 41884701 		movb	%al, 1(%r15)
 1476              	.LVL219:
 1477 0a8c 4C39FA   		cmpq	%r15, %rdx
 1478 0a8f 75E7     		jne	.L120
 1479              	.L83:
 1480              	.LVL220:
 374:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  149              		.cfi_def_cfa_offset 48
 1481              		.loc 2 374 0 is_stmt 1
 1482 0a91 8B0424   		movl	(%rsp), %eax
 1483 0a94 85C0     		testl	%eax, %eax
 1484 0a96 745A     		je	.L152
 1485 0a98 8B0424   		movl	(%rsp), %eax
 1486 0a9b 8B5C242C 		movl	44(%rsp), %ebx
 1487 0a9f 488B7424 		movq	16(%rsp), %rsi
 1487      10
 1488 0aa4 48892C24 		movq	%rbp, (%rsp)
 1489              	.LVL221:
 1490 0aa8 4C8B6C24 		movq	8(%rsp), %r13
 1490      08
 1491 0aad 488B6C24 		movq	96(%rsp), %rbp
 1491      60
 1492 0ab2 83C301   		addl	$1, %ebx
 1493 0ab5 83E801   		subl	$1, %eax
 1494 0ab8 4C63F3   		movslq	%ebx, %r14
 1495 0abb 4C8D7CC6 		leaq	24(%rsi,%rax,8), %r15
 1495      18
 1496              	.LVL222:
 1497 0ac0 488D5E10 		leaq	16(%rsi), %rbx
 1498              	.LVL223:
 1499              	.L89:
 375:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  150              		.cfi_offset 6, -48
 1500              		.loc 2 375 0 discriminator 2
 1501 0ac4 4C89F7   		movq	%r14, %rdi
 1502 0ac7 4883C308 		addq	$8, %rbx
 1503 0acb E8000000 		call	_Znam
 1503      00
 1504              	.LVL224:
 1505              	.LBB224:
 1506              	.LBB225:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 1507              		.loc 6 53 0 discriminator 2
 1508 0ad0 4C89EE   		movq	%r13, %rsi
 1509              	.LBE225:
 1510              	.LBE224:
 375:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  150              		.cfi_offset 6, -48
 1511              		.loc 2 375 0 discriminator 2
 1512 0ad3 488943F8 		movq	%rax, -8(%rbx)
 1513              	.LVL225:
 1514              	.LBB227:
 1515              	.LBB226:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 1516              		.loc 6 53 0 discriminator 2
 1517 0ad7 4889EA   		movq	%rbp, %rdx
 1518 0ada 4889C7   		movq	%rax, %rdi
 1519 0add 4901ED   		addq	%rbp, %r13
 1520 0ae0 E8000000 		call	memcpy
 1520      00
 1521              	.LVL226:
 1522              	.LBE226:
 1523              	.LBE227:
 374:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  149              		.cfi_def_cfa_offset 48
 1524              		.loc 2 374 0 discriminator 2
 1525 0ae5 4939DF   		cmpq	%rbx, %r15
 377:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  152              		.cfi_def_cfa_offset 56
 1526              		.loc 2 377 0 discriminator 2
 1527 0ae8 C6042800 		movb	$0, (%rax,%rbp)
 374:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  149              		.cfi_def_cfa_offset 48
 1528              		.loc 2 374 0 discriminator 2
 1529 0aec 75D6     		jne	.L89
 1530 0aee 488B2C24 		movq	(%rsp), %rbp
 1531              	.L152:
 1532              	.LVL227:
 1533              	.LBB228:
 1534              	.LBB229:
  97:fltk-1.3.4-1/FL/Fl_Image.H ****   /** 
  98:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current array pointer and count of pointers in the array.
  99:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 100:fltk-1.3.4-1/FL/Fl_Image.H ****   void data(const char * const *p, int c) {data_ = p; count_ = c;}
 1535              		.loc 5 100 0
 1536 0af2 488B4424 		movq	16(%rsp), %rax
 1536      10
 1537              	.LBE229:
 1538              	.LBE228:
 383:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  157              		.cfi_def_cfa_offset 14608
 1539              		.loc 2 383 0
 1540 0af7 488B7C24 		movq	8(%rsp), %rdi
 1540      08
 381:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  156 0017 4881ECD8 		subq	$14552, %rsp
 1541              		.loc 2 381 0
 1542 0afc 41C74424 		movl	$1, 40(%r12)
 1542      28010000 
 1542      00
 1543              	.LBB231:
 1544              	.LBB230:
 1545              		.loc 5 100 0
 1546 0b05 49894424 		movq	%rax, 32(%r12)
 1546      20
 1547 0b0a 8B442418 		movl	24(%rsp), %eax
 1548 0b0e 41894424 		movl	%eax, 24(%r12)
 1548      18
 1549              	.LVL228:
 1550              	.LBE230:
 1551              	.LBE231:
 383:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  157              		.cfi_def_cfa_offset 14608
 1552              		.loc 2 383 0
 1553 0b13 E8000000 		call	_ZdaPv
 1553      00
 1554              	.LVL229:
 385:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  159 001e 48897424 		movq	%rsi, 24(%rsp)
 1555              		.loc 2 385 0
 1556 0b18 4889EF   		movq	%rbp, %rdi
 1557 0b1b E8000000 		call	fclose
 1557      00
 1558              	.LVL230:
 1559 0b20 E9C2F5FF 		jmp	.L4
 1559      FF
 1560              	.LVL231:
 1561              	.L103:
 1562 0b25 4C8B9C24 		movq	168(%rsp), %r11
 1562      A8000000 
 1563 0b2d 4C035C24 		addq	8(%rsp), %r11
 1563      08
 1564 0b32 E9AAFDFF 		jmp	.L65
 1564      FF
 1565              	.LVL232:
 1566              	.L163:
 1567              	.LBB232:
 1568              	.LBB185:
 1569              	.LBB176:
 1570              	.LBB158:
 1571              	.LBB155:
 162:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  101      64202564 
 1572              		.loc 2 162 0
 1573 0b37 4889EF   		movq	%rbp, %rdi
 1574 0b3a E8000000 		call	_IO_getc
 1574      00
 1575              	.LVL233:
 163:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  101      20256400 
 1576              		.loc 2 163 0
 1577 0b3f 4889EF   		movq	%rbp, %rdi
 162:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  101      64202564 
 1578              		.loc 2 162 0
 1579 0b42 89C3     		movl	%eax, %ebx
 1580              	.LVL234:
 163:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  101      20256400 
 1581              		.loc 2 163 0
 1582 0b44 E8000000 		call	_IO_getc
 1582      00
 1583              	.LVL235:
 1584 0b49 4889EF   		movq	%rbp, %rdi
 1585 0b4c E8000000 		call	_IO_getc
 1585      00
 1586              	.LVL236:
 164:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  102              		.section	.text.unlikely._ZN12Fl_GIF_ImageC2EPKc,"ax",@progbits
 1587              		.loc 2 164 0
 1588 0b51 4889EF   		movq	%rbp, %rdi
 1589 0b54 E8000000 		call	_IO_getc
 1589      00
 1590              	.LVL237:
 1591 0b59 88842486 		movb	%al, 134(%rsp)
 1591      000000
 1592              	.LVL238:
 165:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  103              		.align 2
 1593              		.loc 2 165 0
 1594 0b60 0FB68424 		movzbl	135(%rsp), %eax
 1594      87000000 
 1595              	.LVL239:
 1596 0b68 83E301   		andl	$1, %ebx
 1597              	.LVL240:
 166:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  104              	.LCOLDB11:
 1598              		.loc 2 166 0
 1599 0b6b 4889EF   		movq	%rbp, %rdi
 165:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  103              		.align 2
 1600              		.loc 2 165 0
 1601 0b6e 410F45C7 		cmovne	%r15d, %eax
 1602 0b72 88842487 		movb	%al, 135(%rsp)
 1602      000000
 1603              	.LVL241:
 166:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  104              	.LCOLDB11:
 1604              		.loc 2 166 0
 1605 0b79 E8000000 		call	_IO_getc
 1605      00
 1606              	.LVL242:
 1607 0b7e 0FB6D8   		movzbl	%al, %ebx
 1608              	.LVL243:
 1609              	.LBE155:
 1610 0b81 E942F7FF 		jmp	.L149
 1610      FF
 1611              	.LVL244:
 1612              	.L164:
 1613              	.LBE158:
 1614              	.LBE176:
 1615              	.LBE185:
 1616              	.LBE232:
 202:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   28:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_GIF_Image.H **** //
 1617              		.loc 2 202 0
 1618 0b86 B8010000 		movl	$1, %eax
 1618      00
 1619              	.LVL245:
 1620 0b8b D3E0     		sall	%cl, %eax
 1621 0b8d 89442430 		movl	%eax, 48(%rsp)
 1622 0b91 E92EF8FF 		jmp	.L33
 1622      FF
 1623              	.LVL246:
 1624              	.L160:
 1625 0b96 458D7EFF 		leal	-1(%r14), %r15d
 1626 0b9a 488D8424 		leaq	8880(%rsp), %rax
 1626      B0220000 
 1627 0ba2 4C8DB424 		leaq	8368(%rsp), %r14
 1627      B0200000 
 1628              	.LVL247:
 1629 0baa 4C8DAC24 		leaq	8624(%rsp), %r13
 1629      B0210000 
 1630 0bb2 4C892424 		movq	%r12, (%rsp)
 1631              	.LBB233:
 126:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   86              		.section	.rodata.str1.1
 1632              		.loc 2 126 0 discriminator 2
 1633 0bb6 31DB     		xorl	%ebx, %ebx
 1634 0bb8 4983C701 		addq	$1, %r15
 1635 0bbc 48898424 		movq	%rax, 160(%rsp)
 1635      A0000000 
 1636 0bc4 4989C4   		movq	%rax, %r12
 1637              	.LVL248:
 1638 0bc7 660F1F84 		.p2align 4,,10
 1638      00000000 
 1638      00
 1639              		.p2align 3
 1640              	.L17:
 1641              	.LBB149:
 128:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   88 0003 25732069 		.string	"%s is version %c%c%c."
 1642              		.loc 2 128 0 discriminator 2
 1643 0bd0 4889EF   		movq	%rbp, %rdi
 1644 0bd3 E8000000 		call	_IO_getc
 1644      00
 1645              	.LVL249:
 129:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   88      73207665 
 1646              		.loc 2 129 0 discriminator 2
 1647 0bd8 4889EF   		movq	%rbp, %rdi
 128:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   88 0003 25732069 		.string	"%s is version %c%c%c."
 1648              		.loc 2 128 0 discriminator 2
 1649 0bdb 4188041E 		movb	%al, (%r14,%rbx)
 129:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   88      73207665 
 1650              		.loc 2 129 0 discriminator 2
 1651 0bdf E8000000 		call	_IO_getc
 1651      00
 1652              	.LVL250:
 130:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   88      7273696F 
 1653              		.loc 2 130 0 discriminator 2
 1654 0be4 4889EF   		movq	%rbp, %rdi
 129:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   88      73207665 
 1655              		.loc 2 129 0 discriminator 2
 1656 0be7 4188441D 		movb	%al, 0(%r13,%rbx)
 1656      00
 130:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   88      7273696F 
 1657              		.loc 2 130 0 discriminator 2
 1658 0bec E8000000 		call	_IO_getc
 1658      00
 1659              	.LVL251:
 1660 0bf1 4188041C 		movb	%al, (%r12,%rbx)
 1661              	.LVL252:
 1662 0bf5 4883C301 		addq	$1, %rbx
 1663              	.LVL253:
 127:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   87              	.LC5:
 1664              		.loc 2 127 0 discriminator 2
 1665 0bf9 4C39FB   		cmpq	%r15, %rbx
 1666 0bfc 75D2     		jne	.L17
 1667 0bfe 4C8B2424 		movq	(%rsp), %r12
 1668 0c02 E92AF6FF 		jmp	.L19
 1668      FF
 1669              	.LVL254:
 1670              	.L45:
 1671 0c07 488B6C24 		movq	72(%rsp), %rbp
 1671      48
 1672              	.LVL255:
 1673 0c0c 4C8BA424 		movq	136(%rsp), %r12
 1673      88000000 
 1674              	.LBE149:
 1675              	.LBE233:
 1676              	.LBB234:
 274:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 1677              		.loc 2 274 0
 1678 0c14 BF000000 		movl	$.LC9, %edi
 1678      00
 1679 0c19 4C8BAC24 		movq	144(%rsp), %r13
 1679      90000000 
 1680              	.LVL256:
 1681 0c21 4C8BB424 		movq	152(%rsp), %r14
 1681      98000000 
 1682              	.LVL257:
 1683 0c29 31C0     		xorl	%eax, %eax
 1684 0c2b 488B7424 		movq	24(%rsp), %rsi
 1684      18
 1685 0c30 FF150000 		call	*_ZN2Fl5errorE(%rip)
 1685      0000
 1686              	.LVL258:
 1687 0c36 E97FFBFF 		jmp	.L48
 1687      FF
 1688              	.LVL259:
 1689              	.L28:
 1690 0c3b 83E007   		andl	$7, %eax
 1691              	.LVL260:
 1692 0c3e BA020000 		movl	$2, %edx
 1692      00
 1693              	.LBE234:
 1694              	.LBB235:
 1695              	.LBB186:
 1696              	.LBB177:
 1697              	.LBB169:
 1698              	.LBB164:
 1699              	.LBB162:
 184:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   10:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   10              		.p2align 4,,15
 1700              		.loc 2 184 0
 1701 0c43 4C896424 		movq	%r12, 16(%rsp)
 1701      10
 1702 0c48 89C1     		movl	%eax, %ecx
 1703 0c4a 4C8BA424 		movq	160(%rsp), %r12
 1703      A0000000 
 1704 0c52 31DB     		xorl	%ebx, %ebx
 1705 0c54 D3E2     		sall	%cl, %edx
 1706 0c56 448D7AFF 		leal	-1(%rdx), %r15d
 1707 0c5a 4983C701 		addq	$1, %r15
 1708              	.LVL261:
 1709 0c5e 6690     		.p2align 4,,10
 1710              		.p2align 3
 1711              	.L32:
 186:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   12:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   12              	.Ltext_cold0:
 1712              		.loc 2 186 0 discriminator 2
 1713 0c60 4889EF   		movq	%rbp, %rdi
 1714 0c63 E8000000 		call	_IO_getc
 1714      00
 1715              	.LVL262:
 187:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   13:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   13              		.section	.text._ZN12Fl_GIF_ImageD2E
 1716              		.loc 2 187 0 discriminator 2
 1717 0c68 4889EF   		movq	%rbp, %rdi
 186:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   12:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   12              	.Ltext_cold0:
 1718              		.loc 2 186 0 discriminator 2
 1719 0c6b 4188041E 		movb	%al, (%r14,%rbx)
 187:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   13:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   13              		.section	.text._ZN12Fl_GIF_ImageD2E
 1720              		.loc 2 187 0 discriminator 2
 1721 0c6f E8000000 		call	_IO_getc
 1721      00
 1722              	.LVL263:
 188:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   14:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   14              		.weak	_ZN12Fl_GIF_ImageD2Ev
 1723              		.loc 2 188 0 discriminator 2
 1724 0c74 4889EF   		movq	%rbp, %rdi
 187:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   13:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   13              		.section	.text._ZN12Fl_GIF_ImageD2E
 1725              		.loc 2 187 0 discriminator 2
 1726 0c77 4188441D 		movb	%al, 0(%r13,%rbx)
 1726      00
 188:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   14:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   14              		.weak	_ZN12Fl_GIF_ImageD2Ev
 1727              		.loc 2 188 0 discriminator 2
 1728 0c7c E8000000 		call	_IO_getc
 1728      00
 1729              	.LVL264:
 1730 0c81 4188041C 		movb	%al, (%r12,%rbx)
 1731              	.LVL265:
 1732 0c85 4883C301 		addq	$1, %rbx
 1733              	.LVL266:
 185:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   11:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   11              		.section	.text.unlikely._ZN12Fl_GIF
 1734              		.loc 2 185 0 discriminator 2
 1735 0c89 4C39FB   		cmpq	%r15, %rbx
 1736 0c8c 75D2     		jne	.L32
 1737 0c8e 4C8B6424 		movq	16(%rsp), %r12
 1737      10
 1738 0c93 E9FEF6FF 		jmp	.L31
 1738      FF
 1739              	.LVL267:
 1740              	.L159:
 1741              	.LBE162:
 1742              	.LBE164:
 1743              	.LBE169:
 1744              	.LBE177:
 1745              	.LBE186:
 1746              	.LBE235:
 1747              	.LBE240:
 1748              	.LBE245:
 1749              		.loc 2 386 0
 1750 0c98 E8000000 		call	__stack_chk_fail
 1750      00
 1751              	.LVL268:
 1752              	.L78:
 1753 0c9d 4C895C24 		movq	%r11, 32(%rsp)
 1753      20
 1754              	.LVL269:
 1755              	.LBB246:
 1756              	.LBB241:
 1757              	.LBB236:
 1758              	.LBB217:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 1759              		.loc 4 34 0
 1760 0ca2 6A01     		pushq	$1
 1761              		.cfi_def_cfa_offset 14616
 1762              	.LVL270:
 1763 0ca4 B9000000 		movl	$.LC10, %ecx
 1763      00
 1764 0ca9 6A00     		pushq	$0
 1765              		.cfi_def_cfa_offset 14624
 1766 0cab 448B4C24 		movl	16(%rsp), %r9d
 1766      10
 1767 0cb0 BA001000 		movl	$4096, %edx
 1767      00
 1768              	.LVL271:
 1769 0cb5 448B4424 		movl	60(%rsp), %r8d
 1769      3C
 1770 0cba BE010000 		movl	$1, %esi
 1770      00
 1771 0cbf 31C0     		xorl	%eax, %eax
 1772 0cc1 488DBC24 		leaq	10448(%rsp), %rdi
 1772      D0280000 
 1773              	.LVL272:
 1774 0cc9 E8000000 		call	__sprintf_chk
 1774      00
 1775              	.LVL273:
 1776              	.LBE217:
 1777              	.LBE236:
 357:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  133 0006 4155     		pushq	%r13
 1778              		.loc 2 357 0
 1779 0cce 8D7801   		leal	1(%rax), %edi
 1780 0cd1 4863FF   		movslq	%edi, %rdi
 1781 0cd4 E8000000 		call	_Znam
 1781      00
 1782              	.LVL274:
 1783 0cd9 488B5C24 		movq	32(%rsp), %rbx
 1783      20
 1784              	.LVL275:
 1785              	.LBB237:
 1786              	.LBB221:
 1787              		.loc 6 110 0
 1788 0cde 488DB424 		leaq	10448(%rsp), %rsi
 1788      D0280000 
 1789 0ce6 4889C7   		movq	%rax, %rdi
 1790              	.LBE221:
 1791              	.LBE237:
 357:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  133 0006 4155     		pushq	%r13
 1792              		.loc 2 357 0
 1793 0ce9 488903   		movq	%rax, (%rbx)
 1794              	.LVL276:
 1795              	.LBB238:
 1796              	.LBB222:
 1797              		.loc 6 110 0
 1798 0cec E8000000 		call	strcpy
 1798      00
 1799              	.LVL277:
 1800              	.LBE222:
 1801              	.LBE238:
 361:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****  137              		.cfi_def_cfa_offset 40
 1802              		.loc 2 361 0
 1803 0cf1 31FF     		xorl	%edi, %edi
 1804 0cf3 E8000000 		call	_Znam
 1804      00
 1805              	.LVL278:
 1806 0cf8 48894308 		movq	%rax, 8(%rbx)
 1807 0cfc 5E       		popq	%rsi
 1808              		.cfi_def_cfa_offset 14616
 1809 0cfd 5F       		popq	%rdi
 1810              		.cfi_def_cfa_offset 14608
 1811              	.LVL279:
 1812 0cfe 4C8B5C24 		movq	32(%rsp), %r11
 1812      20
 1813 0d03 E962FDFF 		jmp	.L85
 1813      FF
 1814              	.LVL280:
 1815              	.L166:
 1816              	.LBB239:
 245:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   71:fltk-1.3.4-1/src/Fl_GIF_Image.cxx ****   40              		.section	.text._ZN12Fl_GIF_ImageD0E
 1817              		.loc 2 245 0
 1818 0d08 4189C3   		movl	%eax, %r11d
 1819 0d0b E945F8FF 		jmp	.L37
 1819      FF
 1820              	.LBE239:
 1821              	.LBE241:
 1822              	.LBE246:
 1823              		.cfi_endproc
 1824              	.LFE196:
 1826              		.section	.text.unlikely._ZN12Fl_GIF_ImageC2EPKc
 1827              	.LCOLDE11:
 1828              		.section	.text._ZN12Fl_GIF_ImageC2EPKc
 1829              	.LHOTE11:
 1830              		.globl	_ZN12Fl_GIF_ImageC1EPKc
 1831              		.set	_ZN12Fl_GIF_ImageC1EPKc,_ZN12Fl_GIF_ImageC2EPKc
 1832              		.weak	_ZTS12Fl_GIF_Image
 1833              		.section	.rodata._ZTS12Fl_GIF_Image,"aG",@progbits,_ZTS12Fl_GIF_Image,comdat
 1834              		.align 8
 1837              	_ZTS12Fl_GIF_Image:
 1838 0000 3132466C 		.string	"12Fl_GIF_Image"
 1838      5F474946 
 1838      5F496D61 
 1838      676500
 1839              		.weak	_ZTI12Fl_GIF_Image
 1840              		.section	.rodata._ZTI12Fl_GIF_Image,"aG",@progbits,_ZTI12Fl_GIF_Image,comdat
 1841              		.align 8
 1844              	_ZTI12Fl_GIF_Image:
 1845 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1845      00000000 
 1846 0008 00000000 		.quad	_ZTS12Fl_GIF_Image
 1846      00000000 
 1847 0010 00000000 		.quad	_ZTI9Fl_Pixmap
 1847      00000000 
 1848              		.weak	_ZTV12Fl_GIF_Image
 1849              		.section	.rodata._ZTV12Fl_GIF_Image,"aG",@progbits,_ZTV12Fl_GIF_Image,comdat
 1850              		.align 8
 1853              	_ZTV12Fl_GIF_Image:
 1854 0000 00000000 		.quad	0
 1854      00000000 
 1855 0008 00000000 		.quad	_ZTI12Fl_GIF_Image
 1855      00000000 
 1856 0010 00000000 		.quad	_ZN12Fl_GIF_ImageD1Ev
 1856      00000000 
 1857 0018 00000000 		.quad	_ZN12Fl_GIF_ImageD0Ev
 1857      00000000 
 1858 0020 00000000 		.quad	_ZN9Fl_Pixmap4copyEii
 1858      00000000 
 1859 0028 00000000 		.quad	_ZN9Fl_Pixmap13color_averageEjf
 1859      00000000 
 1860 0030 00000000 		.quad	_ZN9Fl_Pixmap10desaturateEv
 1860      00000000 
 1861 0038 00000000 		.quad	_ZN9Fl_Pixmap5labelEP9Fl_Widget
 1861      00000000 
 1862 0040 00000000 		.quad	_ZN9Fl_Pixmap5labelEP12Fl_Menu_Item
 1862      00000000 
 1863 0048 00000000 		.quad	_ZN9Fl_Pixmap4drawEiiiiii
 1863      00000000 
 1864 0050 00000000 		.quad	_ZN9Fl_Pixmap7uncacheEv
 1864      00000000 
 1865              		.text
 1866              	.Letext0:
 1867              		.section	.text.unlikely._ZN12Fl_GIF_ImageD2Ev,"axG",@progbits,_ZN12Fl_GIF_ImageD5Ev,comdat
 1868              	.Letext_cold0:
 1869              		.file 7 "fltk-1.3.4-1/FL/fl_types.h"
 1870              		.file 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1871              		.file 9 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1872              		.file 10 "/usr/include/stdio.h"
 1873              		.file 11 "/usr/include/libio.h"
 1874              		.file 12 "fltk-1.3.4-1/FL/Enumerations.H"
 1875              		.file 13 "fltk-1.3.4-1/FL/fl_utf8.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_GIF_Image.cxx
     /tmp/ccXpDejx.s:16     .text._ZN12Fl_GIF_ImageD2Ev:0000000000000000 _ZN12Fl_GIF_ImageD2Ev
     /tmp/ccXpDejx.s:1853   .rodata._ZTV12Fl_GIF_Image:0000000000000000 _ZTV12Fl_GIF_Image
     /tmp/ccXpDejx.s:16     .text._ZN12Fl_GIF_ImageD2Ev:0000000000000000 _ZN12Fl_GIF_ImageD1Ev
     /tmp/ccXpDejx.s:46     .text._ZN12Fl_GIF_ImageD0Ev:0000000000000000 _ZN12Fl_GIF_ImageD0Ev
     /tmp/ccXpDejx.s:111    .text._ZN12Fl_GIF_ImageC2EPKc:0000000000000000 _ZN12Fl_GIF_ImageC2EPKc
     /tmp/ccXpDejx.s:111    .text._ZN12Fl_GIF_ImageC2EPKc:0000000000000000 _ZN12Fl_GIF_ImageC1EPKc
     /tmp/ccXpDejx.s:1837   .rodata._ZTS12Fl_GIF_Image:0000000000000000 _ZTS12Fl_GIF_Image
     /tmp/ccXpDejx.s:1844   .rodata._ZTI12Fl_GIF_Image:0000000000000000 _ZTI12Fl_GIF_Image
                           .group:0000000000000000 _ZN12Fl_GIF_ImageD5Ev
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
_ZN8Fl_ImageC2Eiii
_ZTV9Fl_Pixmap
_ZN9Fl_Pixmap8set_dataEPKPKc
_ZN9Fl_Pixmap7measureEv
fl_fopen
fread
fclose
_ZN2Fl5errorE
_ZN2Fl7warningE
_IO_getc
_Znam
__sprintf_chk
strcpy
memcpy
_ZdaPv
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
