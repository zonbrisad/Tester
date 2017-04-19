   1              		.file	"Fl_XBM_Image.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN12Fl_XBM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comdat
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN12Fl_XBM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comdat
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN12Fl_XBM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comdat
  12              	.Ltext_cold0:
  13              		.section	.text._ZN12Fl_XBM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comdat
  14              		.weak	_ZN12Fl_XBM_ImageD2Ev
  16              	_ZN12Fl_XBM_ImageD2Ev:
  17              	.LFB193:
  18              		.file 1 "fltk-1.3.4-1/FL/Fl_XBM_Image.H"
   1:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
   2:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // "$Id: Fl_XBM_Image.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
   4:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // XBM image header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
   6:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
   8:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
  12:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
  14:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
  16:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
  18:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** 
  19:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_XBM_Image.H ****    Fl_XBM_Image class . */
  21:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** 
  22:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** #ifndef Fl_XBM_Image_H
  23:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** #define Fl_XBM_Image_H
  24:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** #  include "Fl_Bitmap.H"
  25:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** 
  26:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** /**
  27:fltk-1.3.4-1/FL/Fl_XBM_Image.H ****   The Fl_XBM_Image class supports loading, caching,
  28:fltk-1.3.4-1/FL/Fl_XBM_Image.H ****   and drawing of X Bitmap (XBM) bitmap files.
  29:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** */
  30:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** class FL_EXPORT Fl_XBM_Image : public Fl_Bitmap {
  19              		.loc 1 30 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              	.LBB45:
  23              		.loc 1 30 0
  24 0000 48C70700 		movq	$_ZTV12Fl_XBM_Image+16, (%rdi)
  24      000000
  25 0007 E9000000 		jmp	_ZN9Fl_BitmapD2Ev
  25      00
  26              	.LVL1:
  27              	.LBE45:
  28              		.cfi_endproc
  29              	.LFE193:
  31              		.section	.text.unlikely._ZN12Fl_XBM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comdat
  32              	.LCOLDE0:
  33              		.section	.text._ZN12Fl_XBM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comdat
  34              	.LHOTE0:
  35              		.weak	_ZN12Fl_XBM_ImageD1Ev
  36              		.set	_ZN12Fl_XBM_ImageD1Ev,_ZN12Fl_XBM_ImageD2Ev
  37              		.section	.text.unlikely._ZN12Fl_XBM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comdat
  38              		.align 2
  39              	.LCOLDB1:
  40              		.section	.text._ZN12Fl_XBM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comdat
  41              	.LHOTB1:
  42              		.align 2
  43              		.p2align 4,,15
  44              		.weak	_ZN12Fl_XBM_ImageD0Ev
  46              	_ZN12Fl_XBM_ImageD0Ev:
  47              	.LFB195:
  48              		.loc 1 30 0
  49              		.cfi_startproc
  50              	.LVL2:
  51 0000 53       		pushq	%rbx
  52              		.cfi_def_cfa_offset 16
  53              		.cfi_offset 3, -16
  54              		.loc 1 30 0
  55 0001 4889FB   		movq	%rdi, %rbx
  56              	.LBB46:
  57              	.LBB47:
  58 0004 48C70700 		movq	$_ZTV12Fl_XBM_Image+16, (%rdi)
  58      000000
  59 000b E8000000 		call	_ZN9Fl_BitmapD2Ev
  59      00
  60              	.LVL3:
  61              	.LBE47:
  62              	.LBE46:
  63 0010 4889DF   		movq	%rbx, %rdi
  64 0013 5B       		popq	%rbx
  65              		.cfi_def_cfa_offset 8
  66              	.LVL4:
  67 0014 E9000000 		jmp	_ZdlPv
  67      00
  68              	.LVL5:
  69              		.cfi_endproc
  70              	.LFE195:
  72              		.section	.text.unlikely._ZN12Fl_XBM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comdat
  73              	.LCOLDE1:
  74              		.section	.text._ZN12Fl_XBM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comdat
  75              	.LHOTE1:
  76              		.section	.rodata.str1.1,"aMS",@progbits,1
  77              	.LC2:
  78 0000 726200   		.string	"rb"
  79              	.LC3:
  80 0003 23646566 		.string	"#define %s %d"
  80      696E6520 
  80      25732025 
  80      6400
  81              	.LC4:
  82 0011 73746174 		.string	"static "
  82      69632000 
  83              	.LC5:
  84 0019 20307825 		.string	" 0x%x"
  84      7800
  85              		.section	.text.unlikely._ZN12Fl_XBM_ImageC2EPKc,"ax",@progbits
  86              		.align 2
  87              	.LCOLDB6:
  88              		.section	.text._ZN12Fl_XBM_ImageC2EPKc,"ax",@progbits
  89              	.LHOTB6:
  90              		.align 2
  91              		.p2align 4,,15
  92              		.globl	_ZN12Fl_XBM_ImageC2EPKc
  94              	_ZN12Fl_XBM_ImageC2EPKc:
  95              	.LFB190:
  96              		.file 2 "fltk-1.3.4-1/src/Fl_XBM_Image.cxx"
   1:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    1              		.file	"Fl_XBM_Image.cxx"
   2:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_XBM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XBM_Image
   5:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    7              		.section	.text._ZN12Fl_XBM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comd
   8:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   11              		.section	.text.unlikely._ZN12Fl_XBM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XBM_Image
  12:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   13              		.section	.text._ZN12Fl_XBM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comd
  14:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   14              		.weak	_ZN12Fl_XBM_ImageD2Ev
  15:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   16              	_ZN12Fl_XBM_ImageD2Ev:
  16:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   17              	.LFB193:
  17:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_XBM_Image.H"
  18:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    1:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
  19:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // "$Id: Fl_XBM_Image.H 8864 2011-07-19 04:49:30Z greg.erc
  20:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
  21:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    4:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // XBM image header file for the Fast Light Tool Kit (FLTK
  22:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    5:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
  23:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    6:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // Copyright 1998-2010 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    7:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
  25:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // This library is free software. Distribution and use rig
  26:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****    9:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // the file "COPYING" which should have been included with
  27:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
  29:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   12:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
  31:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   14:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** // Please report all bugs and problems on the following pa
  32:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   15:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
  33:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   16:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   17:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** //
  35:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   18:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** 
  36:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   19:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** /* \file
  37:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   20:fltk-1.3.4-1/FL/Fl_XBM_Image.H ****    Fl_XBM_Image class . */
  38:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   21:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** 
  39:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   22:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** #ifndef Fl_XBM_Image_H
  40:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   23:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** #define Fl_XBM_Image_H
  41:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   24:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** #  include "Fl_Bitmap.H"
  42:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   25:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** 
  43:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** /**
  44:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_XBM_Image.H ****   The Fl_XBM_Image class supports loading, caching,
  97              		.loc 2 44 0
  98              		.cfi_startproc
  99              	.LVL6:
 100 0000 4157     		pushq	%r15
 101              		.cfi_def_cfa_offset 16
 102              		.cfi_offset 15, -16
 103 0002 4156     		pushq	%r14
 104              		.cfi_def_cfa_offset 24
 105              		.cfi_offset 14, -24
 106              	.LBB48:
 107              	.LBB49:
 108              	.LBB50:
 109              		.file 3 "fltk-1.3.4-1/FL/Fl_Bitmap.H"
   1:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
   2:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // "$Id: Fl_Bitmap.H 10110 2014-02-22 14:51:50Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
   4:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // Bitmap header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
   6:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
   8:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
  12:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
  14:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
  16:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
  18:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  19:fltk-1.3.4-1/FL/Fl_Bitmap.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Bitmap.H ****    Fl_Bitmap widget . */
  21:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  22:fltk-1.3.4-1/FL/Fl_Bitmap.H **** #ifndef Fl_Bitmap_H
  23:fltk-1.3.4-1/FL/Fl_Bitmap.H **** #define Fl_Bitmap_H
  24:fltk-1.3.4-1/FL/Fl_Bitmap.H **** #  include "Fl_Image.H"
  25:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  26:fltk-1.3.4-1/FL/Fl_Bitmap.H **** class Fl_Widget;
  27:fltk-1.3.4-1/FL/Fl_Bitmap.H **** struct Fl_Menu_Item;
  28:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  29:fltk-1.3.4-1/FL/Fl_Bitmap.H **** /**
  30:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   The Fl_Bitmap class supports caching and drawing of mono-color
  31:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   (bitmap) images. Images are drawn using the current color.
  32:fltk-1.3.4-1/FL/Fl_Bitmap.H **** */
  33:fltk-1.3.4-1/FL/Fl_Bitmap.H **** class FL_EXPORT Fl_Bitmap : public Fl_Image {
  34:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   friend class Fl_Quartz_Graphics_Driver;
  35:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   friend class Fl_GDI_Graphics_Driver;
  36:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   friend class Fl_GDI_Printer_Graphics_Driver;
  37:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   friend class Fl_Xlib_Graphics_Driver;
  38:fltk-1.3.4-1/FL/Fl_Bitmap.H **** public:
  39:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  40:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   /** pointer to raw bitmap data */
  41:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   const uchar *array;
  42:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   /** Non-zero if array points to bitmap data allocated internally */
  43:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   int alloc_array;
  44:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   
  45:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   private:
  46:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   int start(int XP, int YP, int WP, int HP, int &cx, int &cy, 
  47:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 	    int &X, int &Y, int &W, int &H);
  48:fltk-1.3.4-1/FL/Fl_Bitmap.H **** #if defined(__APPLE__) || defined(WIN32)
  49:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   /** for internal use */
  50:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   void *id_;
  51:fltk-1.3.4-1/FL/Fl_Bitmap.H **** #else
  52:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   /** for internal use */
  53:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   unsigned id_;
  54:fltk-1.3.4-1/FL/Fl_Bitmap.H **** #endif // __APPLE__ || WIN32
  55:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  56:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   public:
  57:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  58:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   /** The constructors create a new bitmap from the specified bitmap data */
  59:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   Fl_Bitmap(const uchar *bits, int W, int H) :
  60:fltk-1.3.4-1/FL/Fl_Bitmap.H ****     Fl_Image(W,H,0), array(bits), alloc_array(0), id_(0) {data((const char **)&array, 1);}
  61:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   /** The constructors create a new bitmap from the specified bitmap data */
  62:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   Fl_Bitmap(const char *bits, int W, int H) :
  63:fltk-1.3.4-1/FL/Fl_Bitmap.H ****     Fl_Image(W,H,0), array((const uchar *)bits), alloc_array(0), id_(0) {data((const char **)&array
 110              		.loc 3 63 0
 111 0004 31C9     		xorl	%ecx, %ecx
 112              	.LBE50:
 113              	.LBE49:
 114              	.LBE48:
 115              		.loc 2 44 0
 116 0006 4155     		pushq	%r13
 117              		.cfi_def_cfa_offset 32
 118              		.cfi_offset 13, -32
 119 0008 4154     		pushq	%r12
 120              		.cfi_def_cfa_offset 40
 121              		.cfi_offset 12, -40
 122              	.LBB82:
 123              	.LBB57:
 124              	.LBB53:
 125              		.loc 3 63 0
 126 000a 31D2     		xorl	%edx, %edx
 127              	.LBE53:
 128              	.LBE57:
 129              	.LBE82:
 130              		.loc 2 44 0
 131 000c 55       		pushq	%rbp
 132              		.cfi_def_cfa_offset 48
 133              		.cfi_offset 6, -48
 134 000d 53       		pushq	%rbx
 135              		.cfi_def_cfa_offset 56
 136              		.cfi_offset 3, -56
 137 000e 4889F5   		movq	%rsi, %rbp
 138 0011 4889FB   		movq	%rdi, %rbx
 139              	.LBB83:
 140              	.LBB58:
 141              	.LBB54:
 142              		.loc 3 63 0
 143 0014 31F6     		xorl	%esi, %esi
 144              	.LVL7:
 145              	.LBE54:
 146              	.LBE58:
 147              	.LBE83:
 148              		.loc 2 44 0
 149 0016 4881EC38 		subq	$2104, %rsp
 149      080000
 150              		.cfi_def_cfa_offset 2160
 151              		.loc 2 44 0
 152 001d 64488B04 		movq	%fs:40, %rax
 152      25280000 
 152      00
 153 0026 48898424 		movq	%rax, 2088(%rsp)
 153      28080000 
 154 002e 31C0     		xorl	%eax, %eax
 155              	.LVL8:
 156              	.LBB84:
 157              	.LBB59:
 158              	.LBB55:
 159              		.loc 3 63 0
 160 0030 E8000000 		call	_ZN8Fl_ImageC2Eiii
 160      00
 161              	.LVL9:
 162 0035 488D4328 		leaq	40(%rbx), %rax
 163 0039 48C74328 		movq	$0, 40(%rbx)
 163      00000000 
 164 0041 C7433000 		movl	$0, 48(%rbx)
 164      000000
 165 0048 C7433400 		movl	$0, 52(%rbx)
 165      000000
 166              	.LVL10:
 167              	.LBB51:
 168              	.LBB52:
 169              		.file 4 "fltk-1.3.4-1/FL/Fl_Image.H"
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
 170              		.loc 4 100 0
 171 004f C7431801 		movl	$1, 24(%rbx)
 171      000000
 172              	.LVL11:
 173              	.LBE52:
 174              	.LBE51:
 175              	.LBE55:
 176              	.LBE59:
 177              	.LBB60:
  45:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_XBM_Image.H ****   and drawing of X Bitmap (XBM) bitmap files.
  46:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** */
  47:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   30:fltk-1.3.4-1/FL/Fl_XBM_Image.H **** class FL_EXPORT Fl_XBM_Image : public Fl_Bitmap {
  48:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   19              		.loc 1 30 0
 178              		.loc 2 48 0
 179 0056 BE000000 		movl	$.LC2, %esi
 179      00
 180              	.LBE60:
 181              	.LBB79:
 182              	.LBB56:
 183              		.loc 3 63 0
 184 005b 48894320 		movq	%rax, 32(%rbx)
 185              	.LBE56:
 186              	.LBE79:
  44:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_XBM_Image.H ****   and drawing of X Bitmap (XBM) bitmap files.
 187              		.loc 2 44 0
 188 005f 48C70300 		movq	$_ZTV12Fl_XBM_Image+16, (%rbx)
 188      000000
 189              	.LBB80:
 190              		.loc 2 48 0
 191 0066 4889EF   		movq	%rbp, %rdi
 192 0069 E8000000 		call	fl_fopen
 192      00
 193              	.LVL12:
 194 006e 4885C0   		testq	%rax, %rax
 195 0071 7459     		je	.L4
 196 0073 488D6C24 		leaq	16(%rsp), %rbp
 196      10
 197              	.LVL13:
 198 0078 4989C6   		movq	%rax, %r14
 199 007b 4C8D6C24 		leaq	32(%rsp), %r13
 199      20
 200 0080 4C8D6508 		leaq	8(%rbp), %r12
 201 0084 EB29     		jmp	.L7
 202              	.LVL14:
 203 0086 662E0F1F 		.p2align 4,,10
 203      84000000 
 203      0000
 204              		.p2align 3
 205              	.L39:
 206              	.LBB61:
 207              	.LBB62:
 208              	.LBB63:
  49:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   20              		.cfi_startproc
  50:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   21              	.LVL0:
  51:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   22              	.LBB45:
  52:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   23              		.loc 1 30 0
  53:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   24 0000 48C70700 		movq	$_ZTV12Fl_XBM_Image+16, (%rdi)
  54:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   24      000000
  55:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   25 0007 E9000000 		jmp	_ZN9Fl_BitmapD2Ev
  56:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   25      00
  57:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   26              	.LVL1:
  58:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   27              	.LBE45:
  59:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   28              		.cfi_endproc
  60:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   29              	.LFE193:
 209              		.loc 2 60 0
 210 0090 488D9424 		leaq	1056(%rsp), %rdx
 210      20040000 
 211 0098 31C0     		xorl	%eax, %eax
 212 009a 4889E9   		movq	%rbp, %rcx
 213 009d BE000000 		movl	$.LC3, %esi
 213      00
 214 00a2 4C89EF   		movq	%r13, %rdi
 215 00a5 E8000000 		call	sscanf
 215      00
 216              	.LVL15:
  61:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   31              		.section	.text.unlikely._ZN12Fl_XBM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XBM_Image
 217              		.loc 2 61 0
 218 00aa 83F801   		cmpl	$1, %eax
 219 00ad 7F46     		jg	.L38
 220              	.LVL16:
 221              	.L7:
 222              	.LBB64:
 223              	.LBB65:
 224              		.file 5 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 225              		.loc 5 263 0
 226 00af 4C89F2   		movq	%r14, %rdx
 227 00b2 BE000400 		movl	$1024, %esi
 227      00
 228 00b7 4C89EF   		movq	%r13, %rdi
 229 00ba E8000000 		call	fgets
 229      00
 230              	.LVL17:
 231              	.LBE65:
 232              	.LBE64:
  56:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   26              	.LVL1:
 233              		.loc 2 56 0
 234 00bf 4885C0   		testq	%rax, %rax
 235 00c2 75CC     		jne	.L39
 236              	.LVL18:
 237              	.L11:
 238              	.LBE63:
 239              	.LBE62:
 240              	.LBE61:
  62:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   32              	.LCOLDE0:
  63:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   33              		.section	.text._ZN12Fl_XBM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comd
  64:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   34              	.LHOTE0:
  65:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   35              		.weak	_ZN12Fl_XBM_ImageD1Ev
  66:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   36              		.set	_ZN12Fl_XBM_ImageD1Ev,_ZN12Fl_XBM_ImageD2Ev
  67:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   37              		.section	.text.unlikely._ZN12Fl_XBM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XBM_Image
  68:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   38              		.align 2
  69:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   39              	.LCOLDB1:
  70:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   40              		.section	.text._ZN12Fl_XBM_ImageD0Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comd
  71:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   41              	.LHOTB1:
  72:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   42              		.align 2
  73:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   43              		.p2align 4,,15
  74:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   44              		.weak	_ZN12Fl_XBM_ImageD0Ev
  75:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   46              	_ZN12Fl_XBM_ImageD0Ev:
  76:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   47              	.LFB195:
  77:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   48              		.loc 1 30 0
  78:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   49              		.cfi_startproc
  79:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   50              	.LVL2:
  80:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   51 0000 53       		pushq	%rbx
  81:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   52              		.cfi_def_cfa_offset 16
  82:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   53              		.cfi_offset 3, -16
  83:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   54              		.loc 1 30 0
  84:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   55 0001 4889FB   		movq	%rdi, %rbx
  85:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   56              	.LBB46:
  86:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   57              	.LBB47:
  87:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   58 0004 48C70700 		movq	$_ZTV12Fl_XBM_Image+16, (%rdi)
  88:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   58      000000
  89:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   59 000b E8000000 		call	_ZN9Fl_BitmapD2Ev
  90:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   59      00
  91:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   60              	.LVL3:
  92:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   61              	.LBE47:
  93:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   62              	.LBE46:
  94:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   63 0010 4889DF   		movq	%rbx, %rdi
  95:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   64 0013 5B       		popq	%rbx
  96:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   65              		.cfi_def_cfa_offset 8
  97:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   66              	.LVL4:
  98:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   67 0014 E9000000 		jmp	_ZdlPv
 241              		.loc 2 98 0
 242 00c4 4C89F7   		movq	%r14, %rdi
 243 00c7 E8000000 		call	fclose
 243      00
 244              	.LVL19:
 245              	.L4:
 246              	.LBE80:
 247              	.LBE84:
  99:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   67      00
 248              		.loc 2 99 0
 249 00cc 488B8424 		movq	2088(%rsp), %rax
 249      28080000 
 250 00d4 64483304 		xorq	%fs:40, %rax
 250      25280000 
 250      00
 251 00dd 0F850B01 		jne	.L40
 251      0000
 252 00e3 4881C438 		addq	$2104, %rsp
 252      080000
 253              		.cfi_remember_state
 254              		.cfi_def_cfa_offset 56
 255 00ea 5B       		popq	%rbx
 256              		.cfi_def_cfa_offset 48
 257 00eb 5D       		popq	%rbp
 258              		.cfi_def_cfa_offset 40
 259 00ec 415C     		popq	%r12
 260              		.cfi_def_cfa_offset 32
 261 00ee 415D     		popq	%r13
 262              		.cfi_def_cfa_offset 24
 263 00f0 415E     		popq	%r14
 264              		.cfi_def_cfa_offset 16
 265 00f2 415F     		popq	%r15
 266              		.cfi_def_cfa_offset 8
 267 00f4 C3       		ret
 268              	.LVL20:
 269              	.L38:
 270              		.cfi_restore_state
 271 00f5 4883C504 		addq	$4, %rbp
 272              	.LBB85:
 273              	.LBB81:
 274              	.LBB66:
  54:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   25 0007 E9000000 		jmp	_ZN9Fl_BitmapD2Ev
 275              		.loc 2 54 0 discriminator 2
 276 00f9 4C39E5   		cmpq	%r12, %rbp
 277 00fc 7413     		je	.L27
 278 00fe EBAF     		jmp	.L7
 279              	.LVL21:
 280              		.p2align 4,,10
 281              		.p2align 3
 282              	.L42:
 283              	.LBE66:
  71:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   42              		.align 2
 284              		.loc 2 71 0
 285 0100 BF000000 		movl	$.LC4, %edi
 285      00
 286 0105 B9070000 		movl	$7, %ecx
 286      00
 287 010a 4C89EE   		movq	%r13, %rsi
 288 010d F3A6     		repz cmpsb
 289 010f 7417     		je	.L41
 290              	.L27:
 291              	.LVL22:
 292              	.LBB67:
 293              	.LBB68:
 294              		.loc 5 263 0
 295 0111 4C89F2   		movq	%r14, %rdx
 296 0114 BE000400 		movl	$1024, %esi
 296      00
 297 0119 4C89EF   		movq	%r13, %rdi
 298 011c E8000000 		call	fgets
 298      00
 299              	.LVL23:
 300              	.LBE68:
 301              	.LBE67:
  67:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   38              		.align 2
 302              		.loc 2 67 0
 303 0121 4885C0   		testq	%rax, %rax
 304 0124 75DA     		jne	.L42
 305 0126 EB9C     		jmp	.L11
 306              	.L41:
  75:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   47              	.LFB195:
 307              		.loc 2 75 0
 308 0128 8B442410 		movl	16(%rsp), %eax
 309              	.LVL24:
  76:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   48              		.loc 1 30 0
 310              		.loc 2 76 0
 311 012c 448B6424 		movl	20(%rsp), %r12d
 311      14
  78:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   50              	.LVL2:
 312              		.loc 2 78 0
 313 0131 8D500E   		leal	14(%rax), %edx
 314              	.LBB69:
 315              	.LBB70:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 316              		.loc 4 76 0
 317 0134 894308   		movl	%eax, 8(%rbx)
 318              	.LVL25:
 319              	.LBE70:
 320              	.LBE69:
  78:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   50              	.LVL2:
 321              		.loc 2 78 0
 322 0137 83C007   		addl	$7, %eax
 323              	.LBB71:
 324              	.LBB72:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 325              		.loc 4 80 0
 326 013a 4489630C 		movl	%r12d, 12(%rbx)
 327              	.LVL26:
 328              	.LBE72:
 329              	.LBE71:
  78:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   50              	.LVL2:
 330              		.loc 2 78 0
 331 013e 0F48C2   		cmovs	%edx, %eax
 332 0141 C1F803   		sarl	$3, %eax
 333 0144 440FAFE0 		imull	%eax, %r12d
 334              	.LVL27:
  79:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   51 0000 53       		pushq	%rbx
 335              		.loc 2 79 0
 336 0148 4963FC   		movslq	%r12d, %rdi
 337 014b E8000000 		call	_Znam
 337      00
 338              	.LVL28:
 339              	.LBB73:
  82:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   54              		.loc 1 30 0
 340              		.loc 2 82 0
 341 0150 4585E4   		testl	%r12d, %r12d
 342              	.LBE73:
  79:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   51 0000 53       		pushq	%rbx
 343              		.loc 2 79 0
 344 0153 4889C5   		movq	%rax, %rbp
 345 0156 48894328 		movq	%rax, 40(%rbx)
 346              	.LVL29:
 347              	.LBB78:
  82:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   54              		.loc 1 30 0
 348              		.loc 2 82 0
 349 015a 0F8E64FF 		jle	.L11
 349      FFFF
 350 0160 4531FF   		xorl	%r15d, %r15d
 351 0163 EB0C     		jmp	.L15
 352              	.LVL30:
 353              		.p2align 4,,10
 354 0165 0F1F00   		.p2align 3
 355              	.L13:
 356 0168 4539FC   		cmpl	%r15d, %r12d
 357 016b 0F8E53FF 		jle	.L11
 357      FFFF
 358              	.LVL31:
 359              	.L15:
 360              	.LBB74:
 361              	.LBB75:
 362              	.LBB76:
 363              		.loc 5 263 0
 364 0171 4C89F2   		movq	%r14, %rdx
 365 0174 BE000400 		movl	$1024, %esi
 365      00
 366 0179 4C89EF   		movq	%r13, %rdi
 367 017c E8000000 		call	fgets
 367      00
 368              	.LVL32:
 369              	.LBE76:
 370              	.LBE75:
  83:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   55 0001 4889FB   		movq	%rdi, %rbx
 371              		.loc 2 83 0
 372 0181 4885C0   		testq	%rax, %rax
 373 0184 0F843AFF 		je	.L11
 373      FFFF
 374              	.LVL33:
  88:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   59 000b E8000000 		call	_ZN9Fl_BitmapD2Ev
 375              		.loc 2 88 0
 376 018a 807C2420 		cmpb	$0, 32(%rsp)
 376      00
 377 018f 74D7     		je	.L13
 378 0191 4539FC   		cmpl	%r15d, %r12d
 379 0194 7ED2     		jle	.L13
 380 0196 4C89EB   		movq	%r13, %rbx
 381              	.LVL34:
 382 0199 0F1F8000 		.p2align 4,,10
 382      000000
 383              		.p2align 3
 384              	.L21:
 385              	.LBB77:
  90:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   60              	.LVL3:
 386              		.loc 2 90 0
 387 01a0 488D5424 		leaq	12(%rsp), %rdx
 387      0C
 388 01a5 31C0     		xorl	%eax, %eax
 389 01a7 BE000000 		movl	$.LC5, %esi
 389      00
 390 01ac 4889DF   		movq	%rbx, %rdi
 391 01af E8000000 		call	sscanf
 391      00
 392              	.LVL35:
 393 01b4 85C0     		testl	%eax, %eax
 394 01b6 7E18     		jle	.L18
 395              	.LVL36:
  91:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   61              	.LBE47:
 396              		.loc 2 91 0
 397 01b8 8B44240C 		movl	12(%rsp), %eax
  92:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   62              	.LBE46:
 398              		.loc 2 92 0
 399 01bc 4183C701 		addl	$1, %r15d
 400              	.LVL37:
  91:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   61              	.LBE47:
 401              		.loc 2 91 0
 402 01c0 4883C501 		addq	$1, %rbp
 403              	.LVL38:
 404 01c4 8845FF   		movb	%al, -1(%rbp)
 405 01c7 660F1F84 		.p2align 4,,10
 405      00000000 
 405      00
 406              		.p2align 3
 407              	.L18:
  94:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   64 0013 5B       		popq	%rbx
 408              		.loc 2 94 0
 409 01d0 0FB603   		movzbl	(%rbx), %eax
 410 01d3 84C0     		testb	%al, %al
 411 01d5 7491     		je	.L13
  94:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   64 0013 5B       		popq	%rbx
 412              		.loc 2 94 0 is_stmt 0 discriminator 1
 413 01d7 4883C301 		addq	$1, %rbx
 414              	.LVL39:
 415 01db 3C2C     		cmpb	$44, %al
 416 01dd 75F1     		jne	.L18
 417              	.LBE77:
  88:fltk-1.3.4-1/src/Fl_XBM_Image.cxx ****   59 000b E8000000 		call	_ZN9Fl_BitmapD2Ev
 418              		.loc 2 88 0 is_stmt 1
 419 01df 803B00   		cmpb	$0, (%rbx)
 420 01e2 7484     		je	.L13
 421 01e4 4539FC   		cmpl	%r15d, %r12d
 422 01e7 7FB7     		jg	.L21
 423 01e9 E97AFFFF 		jmp	.L13
 423      FF
 424              	.LVL40:
 425              	.L40:
 426              	.LBE74:
 427              	.LBE78:
 428              	.LBE81:
 429              	.LBE85:
 430              		.loc 2 99 0
 431 01ee E8000000 		call	__stack_chk_fail
 431      00
 432              	.LVL41:
 433              		.cfi_endproc
 434              	.LFE190:
 436              		.section	.text.unlikely._ZN12Fl_XBM_ImageC2EPKc
 437              	.LCOLDE6:
 438              		.section	.text._ZN12Fl_XBM_ImageC2EPKc
 439              	.LHOTE6:
 440              		.globl	_ZN12Fl_XBM_ImageC1EPKc
 441              		.set	_ZN12Fl_XBM_ImageC1EPKc,_ZN12Fl_XBM_ImageC2EPKc
 442              		.weak	_ZTS12Fl_XBM_Image
 443              		.section	.rodata._ZTS12Fl_XBM_Image,"aG",@progbits,_ZTS12Fl_XBM_Image,comdat
 444              		.align 8
 447              	_ZTS12Fl_XBM_Image:
 448 0000 3132466C 		.string	"12Fl_XBM_Image"
 448      5F58424D 
 448      5F496D61 
 448      676500
 449              		.weak	_ZTI12Fl_XBM_Image
 450              		.section	.rodata._ZTI12Fl_XBM_Image,"aG",@progbits,_ZTI12Fl_XBM_Image,comdat
 451              		.align 8
 454              	_ZTI12Fl_XBM_Image:
 455 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 455      00000000 
 456 0008 00000000 		.quad	_ZTS12Fl_XBM_Image
 456      00000000 
 457 0010 00000000 		.quad	_ZTI9Fl_Bitmap
 457      00000000 
 458              		.weak	_ZTV12Fl_XBM_Image
 459              		.section	.rodata._ZTV12Fl_XBM_Image,"aG",@progbits,_ZTV12Fl_XBM_Image,comdat
 460              		.align 8
 463              	_ZTV12Fl_XBM_Image:
 464 0000 00000000 		.quad	0
 464      00000000 
 465 0008 00000000 		.quad	_ZTI12Fl_XBM_Image
 465      00000000 
 466 0010 00000000 		.quad	_ZN12Fl_XBM_ImageD1Ev
 466      00000000 
 467 0018 00000000 		.quad	_ZN12Fl_XBM_ImageD0Ev
 467      00000000 
 468 0020 00000000 		.quad	_ZN9Fl_Bitmap4copyEii
 468      00000000 
 469 0028 00000000 		.quad	_ZN8Fl_Image13color_averageEjf
 469      00000000 
 470 0030 00000000 		.quad	_ZN8Fl_Image10desaturateEv
 470      00000000 
 471 0038 00000000 		.quad	_ZN9Fl_Bitmap5labelEP9Fl_Widget
 471      00000000 
 472 0040 00000000 		.quad	_ZN9Fl_Bitmap5labelEP12Fl_Menu_Item
 472      00000000 
 473 0048 00000000 		.quad	_ZN9Fl_Bitmap4drawEiiiiii
 473      00000000 
 474 0050 00000000 		.quad	_ZN9Fl_Bitmap7uncacheEv
 474      00000000 
 475              		.text
 476              	.Letext0:
 477              		.section	.text.unlikely._ZN12Fl_XBM_ImageD2Ev,"axG",@progbits,_ZN12Fl_XBM_ImageD5Ev,comdat
 478              	.Letext_cold0:
 479              		.file 6 "fltk-1.3.4-1/FL/fl_types.h"
 480              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 481              		.file 8 "/usr/include/x86_64-linux-gnu/bits/types.h"
 482              		.file 9 "/usr/include/stdio.h"
 483              		.file 10 "/usr/include/libio.h"
 484              		.file 11 "fltk-1.3.4-1/FL/Enumerations.H"
 485              		.file 12 "fltk-1.3.4-1/FL/fl_utf8.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_XBM_Image.cxx
     /tmp/ccgdq4Ke.s:16     .text._ZN12Fl_XBM_ImageD2Ev:0000000000000000 _ZN12Fl_XBM_ImageD2Ev
     /tmp/ccgdq4Ke.s:463    .rodata._ZTV12Fl_XBM_Image:0000000000000000 _ZTV12Fl_XBM_Image
     /tmp/ccgdq4Ke.s:16     .text._ZN12Fl_XBM_ImageD2Ev:0000000000000000 _ZN12Fl_XBM_ImageD1Ev
     /tmp/ccgdq4Ke.s:46     .text._ZN12Fl_XBM_ImageD0Ev:0000000000000000 _ZN12Fl_XBM_ImageD0Ev
     /tmp/ccgdq4Ke.s:94     .text._ZN12Fl_XBM_ImageC2EPKc:0000000000000000 _ZN12Fl_XBM_ImageC2EPKc
     /tmp/ccgdq4Ke.s:94     .text._ZN12Fl_XBM_ImageC2EPKc:0000000000000000 _ZN12Fl_XBM_ImageC1EPKc
     /tmp/ccgdq4Ke.s:447    .rodata._ZTS12Fl_XBM_Image:0000000000000000 _ZTS12Fl_XBM_Image
     /tmp/ccgdq4Ke.s:454    .rodata._ZTI12Fl_XBM_Image:0000000000000000 _ZTI12Fl_XBM_Image
                           .group:0000000000000000 _ZN12Fl_XBM_ImageD5Ev
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
_ZN9Fl_BitmapD2Ev
_ZdlPv
_ZN8Fl_ImageC2Eiii
fl_fopen
sscanf
fgets
fclose
_Znam
__stack_chk_fail
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI9Fl_Bitmap
_ZN9Fl_Bitmap4copyEii
_ZN8Fl_Image13color_averageEjf
_ZN8Fl_Image10desaturateEv
_ZN9Fl_Bitmap5labelEP9Fl_Widget
_ZN9Fl_Bitmap5labelEP12Fl_Menu_Item
_ZN9Fl_Bitmap4drawEiiiiii
_ZN9Fl_Bitmap7uncacheEv
