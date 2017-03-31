   1              		.file	"Fl_Tree_Prefs.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN9Fl_PixmapC2EPKPKc,"axG",@progbits,_ZN9Fl_PixmapC5EPKPKc,comdat
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN9Fl_PixmapC2EPKPKc,"axG",@progbits,_ZN9Fl_PixmapC5EPKPKc,comdat
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN9Fl_PixmapC2EPKPKc,"axG",@progbits,_ZN9Fl_PixmapC5EPKPKc,comdat
  12              	.Ltext_cold0:
  13              		.section	.text._ZN9Fl_PixmapC2EPKPKc,"axG",@progbits,_ZN9Fl_PixmapC5EPKPKc,comdat
  14              		.weak	_ZN9Fl_PixmapC2EPKPKc
  16              	_ZN9Fl_PixmapC2EPKPKc:
  17              	.LFB174:
  18              		.file 1 "fltk-1.3.4-1/FL/Fl_Pixmap.H"
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
  80:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   /**    The constructors create a new pixmap from the specified XPM data.  */
  81:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   explicit Fl_Pixmap(uchar* const * D) : Fl_Image(-1,0,1), alloc_data(0), id_(0), mask_(0) {set_dat
  82:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   /**    The constructors create a new pixmap from the specified XPM data.  */
  83:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   explicit Fl_Pixmap(const char * const * D) : Fl_Image(-1,0,1), alloc_data(0), id_(0), mask_(0) {s
  19              		.loc 1 83 0
  20              		.cfi_startproc
  21              	.LVL0:
  22 0000 55       		pushq	%rbp
  23              		.cfi_def_cfa_offset 16
  24              		.cfi_offset 6, -16
  25 0001 53       		pushq	%rbx
  26              		.cfi_def_cfa_offset 24
  27              		.cfi_offset 3, -24
  28 0002 4889F5   		movq	%rsi, %rbp
  29 0005 4889FB   		movq	%rdi, %rbx
  30              	.LBB7:
  31 0008 B9010000 		movl	$1, %ecx
  31      00
  32 000d 31D2     		xorl	%edx, %edx
  33              	.LBE7:
  34 000f 4883EC08 		subq	$8, %rsp
  35              		.cfi_def_cfa_offset 32
  36              	.LBB8:
  37              		.loc 1 83 0
  38 0013 BEFFFFFF 		movl	$-1, %esi
  38      FF
  39              	.LVL1:
  40 0018 E8000000 		call	_ZN8Fl_ImageC2Eiii
  40      00
  41              	.LVL2:
  42 001d 4889DF   		movq	%rbx, %rdi
  43 0020 48C70300 		movq	$_ZTV9Fl_Pixmap+16, (%rbx)
  43      000000
  44 0027 C7432800 		movl	$0, 40(%rbx)
  44      000000
  45 002e C7432C00 		movl	$0, 44(%rbx)
  45      000000
  46 0035 C7433000 		movl	$0, 48(%rbx)
  46      000000
  47 003c 4889EE   		movq	%rbp, %rsi
  48 003f E8000000 		call	_ZN9Fl_Pixmap8set_dataEPKPKc
  48      00
  49              	.LVL3:
  50              	.LBE8:
  51 0044 4883C408 		addq	$8, %rsp
  52              		.cfi_def_cfa_offset 24
  53              	.LBB9:
  54 0048 4889DF   		movq	%rbx, %rdi
  55              	.LBE9:
  56 004b 5B       		popq	%rbx
  57              		.cfi_def_cfa_offset 16
  58              	.LVL4:
  59 004c 5D       		popq	%rbp
  60              		.cfi_def_cfa_offset 8
  61              	.LVL5:
  62              	.LBB10:
  63 004d E9000000 		jmp	_ZN9Fl_Pixmap7measureEv
  63      00
  64              	.LVL6:
  65              	.LBE10:
  66              		.cfi_endproc
  67              	.LFE174:
  69              		.section	.text.unlikely._ZN9Fl_PixmapC2EPKPKc,"axG",@progbits,_ZN9Fl_PixmapC5EPKPKc,comdat
  70              	.LCOLDE0:
  71              		.section	.text._ZN9Fl_PixmapC2EPKPKc,"axG",@progbits,_ZN9Fl_PixmapC5EPKPKc,comdat
  72              	.LHOTE0:
  73              		.weak	_ZN9Fl_PixmapC1EPKPKc
  74              		.set	_ZN9Fl_PixmapC1EPKPKc,_ZN9Fl_PixmapC2EPKPKc
  75              		.section	.text.unlikely._ZN13Fl_Tree_Prefs8openiconEP8Fl_Image,"ax",@progbits
  76              		.align 2
  77              	.LCOLDB1:
  78              		.section	.text._ZN13Fl_Tree_Prefs8openiconEP8Fl_Image,"ax",@progbits
  79              	.LHOTB1:
  80              		.align 2
  81              		.p2align 4,,15
  82              		.globl	_ZN13Fl_Tree_Prefs8openiconEP8Fl_Image
  84              	_ZN13Fl_Tree_Prefs8openiconEP8Fl_Image:
  85              	.LFB230:
  86              		.file 2 "fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx"
   1:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    1              		.file	"Fl_Tree_Prefs.cxx"
   2:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    4              		.section	.text.unlikely._ZN9Fl_PixmapC2EPKPKc,"axG",@progbits,_ZN9Fl_PixmapC5EP
   5:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    7              		.section	.text._ZN9Fl_PixmapC2EPKPKc,"axG",@progbits,_ZN9Fl_PixmapC5EPKPKc,comd
   8:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   11              		.section	.text.unlikely._ZN9Fl_PixmapC2EPKPKc,"axG",@progbits,_ZN9Fl_PixmapC5EP
  12:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   13              		.section	.text._ZN9Fl_PixmapC2EPKPKc,"axG",@progbits,_ZN9Fl_PixmapC5EPKPKc,comd
  14:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   14              		.weak	_ZN9Fl_PixmapC2EPKPKc
  15:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   16              	_ZN9Fl_PixmapC2EPKPKc:
  16:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   17              	.LFB174:
  17:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Pixmap.H"
  18:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    1:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  19:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    2:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // "$Id: Fl_Pixmap.H 9706 2012-11-06 20:46:14Z matt $"
  20:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    3:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  21:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    4:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Pixmap header file for the Fast Light Tool Kit (FLTK).
  22:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    5:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  23:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    6:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Copyright 1998-2012 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    7:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  25:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    8:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // This library is free software. Distribution and use rights
  26:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    9:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // the file "COPYING" which should have been included with th
  27:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   10:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   11:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  29:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   12:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   13:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  31:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   14:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Please report all bugs and problems on the following page:
  32:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   15:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  33:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   16:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   17:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  35:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   18:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  36:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   19:fltk-1.3.4-1/FL/Fl_Pixmap.H **** /* \file
  37:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   20:fltk-1.3.4-1/FL/Fl_Pixmap.H ****    Fl_Pixmap widget . */
  38:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   21:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  39:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   22:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #ifndef Fl_Pixmap_H
  40:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   23:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #define Fl_Pixmap_H
  41:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   24:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  include "Fl_Image.H"
  42:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   25:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if defined(WIN32)
  43:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   26:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  include "x.H"
  44:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   27:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif
  45:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   28:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  46:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   29:fltk-1.3.4-1/FL/Fl_Pixmap.H **** class Fl_Widget;
  47:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   30:fltk-1.3.4-1/FL/Fl_Pixmap.H **** struct Fl_Menu_Item;
  48:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   31:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  49:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   32:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Older C++ compilers don't support the explicit keyword... 
  50:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   33:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  if defined(__sgi) && !defined(_COMPILER_VERSION)
  51:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   34:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #    define explicit
  52:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   35:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  endif // __sgi && !_COMPILER_VERSION
  53:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   36:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  54:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   37:fltk-1.3.4-1/FL/Fl_Pixmap.H **** /**
  55:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   38:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   The Fl_Pixmap class supports caching and drawing of colorma
  56:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   39:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   (pixmap) images, including transparency.
  57:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   40:fltk-1.3.4-1/FL/Fl_Pixmap.H **** */
  58:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   41:fltk-1.3.4-1/FL/Fl_Pixmap.H **** class FL_EXPORT Fl_Pixmap : public Fl_Image {
  59:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   42:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_Quartz_Graphics_Driver;
  60:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   43:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_GDI_Graphics_Driver;
  61:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   44:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_GDI_Printer_Graphics_Driver;
  62:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   45:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_Xlib_Graphics_Driver;
  63:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   46:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void copy_data();
  64:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   47:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void delete_data();
  65:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   48:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void set_data(const char * const *p);
  66:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   49:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   int prepare(int XP, int YP, int WP, int HP, int &cx, int &c
  67:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   50:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 			 int &X, int &Y, int &W, int &H);
  68:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   51:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  69:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   52:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   protected:
  70:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   53:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  71:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   54:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void measure();
  72:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   55:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  73:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   56:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   public:
  74:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   57:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  75:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   58:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   int alloc_data; // Non-zero if data was allocated
  76:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   59:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   
  77:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   60:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   private:
  78:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   61:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  79:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   62:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if defined(WIN32)
  80:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   63:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if FLTK_ABI_VERSION < 10301
  81:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   64:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   static // a static member is needed for ABI compatibility
  82:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   65:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif
  83:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   66:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   UINT pixmap_bg_color; // RGB color used for pixmap backgrou
  84:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   67:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif // WIN32
  85:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   68:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if defined(__APPLE__) || defined(WIN32)
  86:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   69:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void *id_; // for internal use
  87:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   70:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void *mask_; // for internal use (mask bitmap)
  88:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   71:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #else
  89:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   72:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   unsigned id_; // for internal use
  90:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   73:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   unsigned mask_; // for internal use (mask bitmap)
  91:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   74:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif // __APPLE__ || WIN32
  92:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   75:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   
  93:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   76:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   public:
  94:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   77:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  95:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   78:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   /**    The constructors create a new pixmap from the specif
  96:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   79:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   explicit Fl_Pixmap(char * const * D) : Fl_Image(-1,0,1), al
  97:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   80:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   /**    The constructors create a new pixmap from the specif
  98:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   81:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   explicit Fl_Pixmap(uchar* const * D) : Fl_Image(-1,0,1), al
  99:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   82:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   /**    The constructors create a new pixmap from the specif
 100:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   83:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   explicit Fl_Pixmap(const char * const * D) : Fl_Image(-1,0,
 101:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   19              		.loc 1 83 0
 102:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   20              		.cfi_startproc
 103:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   21              	.LVL0:
 104:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   22 0000 55       		pushq	%rbp
 105:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   23              		.cfi_def_cfa_offset 16
 106:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   24              		.cfi_offset 6, -16
 107:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   25 0001 53       		pushq	%rbx
 108:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   26              		.cfi_def_cfa_offset 24
  87              		.loc 2 108 0
  88              		.cfi_startproc
  89              	.LVL7:
 109:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   27              		.cfi_offset 3, -24
  90              		.loc 2 109 0
  91 0000 4885F6   		testq	%rsi, %rsi
  92 0003 B8000000 		movl	$_ZL12L_openpixmap, %eax
  92      00
  93 0008 480F44F0 		cmove	%rax, %rsi
  94              	.LVL8:
  95 000c 48897738 		movq	%rsi, 56(%rdi)
  96 0010 C3       		ret
  97              		.cfi_endproc
  98              	.LFE230:
 100              		.section	.text.unlikely._ZN13Fl_Tree_Prefs8openiconEP8Fl_Image
 101              	.LCOLDE1:
 102              		.section	.text._ZN13Fl_Tree_Prefs8openiconEP8Fl_Image
 103              	.LHOTE1:
 104              		.section	.text.unlikely._ZN13Fl_Tree_Prefs9closeiconEP8Fl_Image,"ax",@progbits
 105              		.align 2
 106              	.LCOLDB2:
 107              		.section	.text._ZN13Fl_Tree_Prefs9closeiconEP8Fl_Image,"ax",@progbits
 108              	.LHOTB2:
 109              		.align 2
 110              		.p2align 4,,15
 111              		.globl	_ZN13Fl_Tree_Prefs9closeiconEP8Fl_Image
 113              	_ZN13Fl_Tree_Prefs9closeiconEP8Fl_Image:
 114              	.LFB231:
 110:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   28 0002 4889F5   		movq	%rsi, %rbp
 111:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   29 0005 4889FB   		movq	%rdi, %rbx
 112:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   30              	.LBB7:
 113:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   31 0008 B9010000 		movl	$1, %ecx
 114:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   31      00
 115:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   32 000d 31D2     		xorl	%edx, %edx
 116:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   33              	.LBE7:
 117:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   34 000f 4883EC08 		subq	$8, %rsp
 118:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   35              		.cfi_def_cfa_offset 32
 119:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   36              	.LBB8:
 120:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   37              		.loc 1 83 0
 121:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   38 0013 BEFFFFFF 		movl	$-1, %esi
 122:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   38      FF
 123:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   39              	.LVL1:
 124:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   40 0018 E8000000 		call	_ZN8Fl_ImageC2Eiii
 125:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   40      00
 126:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   41              	.LVL2:
 127:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   42 001d 4889DF   		movq	%rbx, %rdi
 115              		.loc 2 127 0
 116              		.cfi_startproc
 117              	.LVL9:
 128:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   43 0020 48C70300 		movq	$_ZTV9Fl_Pixmap+16, (%rbx)
 118              		.loc 2 128 0
 119 0000 4885F6   		testq	%rsi, %rsi
 120 0003 B8000000 		movl	$_ZL13L_closepixmap, %eax
 120      00
 121 0008 480F44F0 		cmove	%rax, %rsi
 122              	.LVL10:
 123 000c 48897740 		movq	%rsi, 64(%rdi)
 124 0010 C3       		ret
 125              		.cfi_endproc
 126              	.LFE231:
 128              		.section	.text.unlikely._ZN13Fl_Tree_Prefs9closeiconEP8Fl_Image
 129              	.LCOLDE2:
 130              		.section	.text._ZN13Fl_Tree_Prefs9closeiconEP8Fl_Image
 131              	.LHOTE2:
 132              		.section	.rodata.str1.1,"aMS",@progbits,1
 133              	.LC3:
 134 0000 67746B2B 		.string	"gtk+"
 134      00
 135              	.LC4:
 136 0005 706C6173 		.string	"plastic"
 136      74696300 
 137              		.section	.text.unlikely._ZN13Fl_Tree_PrefsC2Ev,"ax",@progbits
 138              		.align 2
 139              	.LCOLDB5:
 140              		.section	.text._ZN13Fl_Tree_PrefsC2Ev,"ax",@progbits
 141              	.LHOTB5:
 142              		.align 2
 143              		.p2align 4,,15
 144              		.globl	_ZN13Fl_Tree_PrefsC2Ev
 146              	_ZN13Fl_Tree_PrefsC2Ev:
 147              	.LFB233:
 129:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   43      000000
 130:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   44 0027 C7432800 		movl	$0, 40(%rbx)
 131:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   44      000000
 132:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   45 002e C7432C00 		movl	$0, 44(%rbx)
 133:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   45      000000
 134:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   46 0035 C7433000 		movl	$0, 48(%rbx)
 135:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   46      000000
 136:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   47 003c 4889EE   		movq	%rbp, %rsi
 137:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   48 003f E8000000 		call	_ZN9Fl_Pixmap8set_dataEPKPKc
 138:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   48      00
 139:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   49              	.LVL3:
 140:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   50              	.LBE8:
 141:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   51 0044 4883C408 		addq	$8, %rsp
 142:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   52              		.cfi_def_cfa_offset 24
 148              		.loc 2 142 0
 149              		.cfi_startproc
 150              	.LVL11:
 151              	.LBB11:
 143:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   53              	.LBB9:
 152              		.loc 2 143 0
 153 0000 C7070000 		movl	$0, (%rdi)
 153      0000
 144:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   54 0048 4889DF   		movq	%rbx, %rdi
 154              		.loc 2 144 0
 155 0006 8B150000 		movl	FL_NORMAL_SIZE(%rip), %edx
 155      0000
 156              	.LBE11:
 142:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   53              	.LBB9:
 157              		.loc 2 142 0
 158 000c 4889F8   		movq	%rdi, %rax
 159              	.LBB20:
 145:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   55              	.LBE9:
 160              		.loc 2 145 0
 161 000f C7470C06 		movl	$6, 12(%rdi)
 161      000000
 146:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   56 004b 5B       		popq	%rbx
 162              		.loc 2 146 0
 163 0016 C7470803 		movl	$3, 8(%rdi)
 163      000000
 147:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   57              		.cfi_def_cfa_offset 16
 148:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   58              	.LVL4:
 149:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   59 004c 5D       		popq	%rbp
 150:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   60              		.cfi_def_cfa_offset 8
 164              		.loc 2 150 0
 165 001d C7471000 		movl	$0, 16(%rdi)
 165      000000
 151:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   61              	.LVL5:
 166              		.loc 2 151 0
 167 0024 C7471403 		movl	$3, 20(%rdi)
 167      000000
 144:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   55              	.LBE9:
 168              		.loc 2 144 0
 169 002b 895704   		movl	%edx, 4(%rdi)
 170              	.LBB12:
 171              	.LBB13:
 172              		.file 3 "fltk-1.3.4-1/FL/Fl.H"
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
 173              		.loc 3 369 0
 174 002e 488B1500 		movq	_ZN2Fl7scheme_E(%rip), %rdx
 174      000000
 175              	.LBE13:
 176              	.LBE12:
 152:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   62              	.LBB10:
 177              		.loc 2 152 0
 178 0035 C7471803 		movl	$3, 24(%rdi)
 178      000000
 153:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   63 004d E9000000 		jmp	_ZN9Fl_Pixmap7measureEv
 154:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   63      00
 155:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   64              	.LVL6:
 156:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   65              	.LBE10:
 179              		.loc 2 156 0
 180 003c C7472000 		movl	$0, 32(%rdi)
 180      000000
 157:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   66              		.cfi_endproc
 181              		.loc 2 157 0
 182 0043 C7472438 		movl	$56, 36(%rdi)
 182      000000
 158:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   67              	.LFE174:
 183              		.loc 2 158 0
 184 004a C74728FF 		movl	$-1, 40(%rdi)
 184      FFFFFF
 185              	.LBB16:
 186              	.LBB14:
 187              		.loc 3 369 0
 188 0051 4885D2   		testq	%rdx, %rdx
 189              	.LBE14:
 190              	.LBE16:
 159:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   69              		.section	.text.unlikely._ZN9Fl_PixmapC2EPKPKc,"axG",@progbits,_ZN9Fl_PixmapC5EP
 191              		.loc 2 159 0
 192 0054 C7472C2B 		movl	$43, 44(%rdi)
 192      000000
 160:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   70              	.LCOLDE0:
 161:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   71              		.section	.text._ZN9Fl_PixmapC2EPKPKc,"axG",@progbits,_ZN9Fl_PixmapC5EPKPKc,comd
 162:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   72              	.LHOTE0:
 163:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   73              		.weak	_ZN9Fl_PixmapC1EPKPKc
 193              		.loc 2 163 0
 194 005b C7473001 		movl	$1, 48(%rdi)
 194      000000
 164:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   74              		.set	_ZN9Fl_PixmapC1EPKPKc,_ZN9Fl_PixmapC2EPKPKc
 165:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   75              		.section	.text.unlikely._ZN13Fl_Tree_Prefs8openiconEP8Fl_Image,"ax",@progbits
 195              		.loc 2 165 0
 196 0062 48C74738 		movq	$_ZL12L_openpixmap, 56(%rdi)
 196      00000000 
 166:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   76              		.align 2
 197              		.loc 2 166 0
 198 006a 48C74740 		movq	$_ZL13L_closepixmap, 64(%rdi)
 198      00000000 
 167:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   77              	.LCOLDB1:
 199              		.loc 2 167 0
 200 0072 48C74748 		movq	$0, 72(%rdi)
 200      00000000 
 168:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   78              		.section	.text._ZN13Fl_Tree_Prefs8openiconEP8Fl_Image,"ax",@progbits
 169:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   79              	.LHOTB1:
 170:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   80              		.align 2
 171:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   81              		.p2align 4,,15
 172:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   82              		.globl	_ZN13Fl_Tree_Prefs8openiconEP8Fl_Image
 173:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   84              	_ZN13Fl_Tree_Prefs8openiconEP8Fl_Image:
 174:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   85              	.LFB230:
 175:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   86              		.file 2 "fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx"
 201              		.loc 2 175 0
 202 007a C6475001 		movb	$1, 80(%rdi)
 176:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    1:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    1              		.file	"Fl_Tree_Prefs.cxx"
 203              		.loc 2 176 0
 204 007e C6475101 		movb	$1, 81(%rdi)
 177:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    2:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    2              		.text
 205              		.loc 2 177 0
 206 0082 C7471C11 		movl	$17, 28(%rdi)
 206      000000
 178:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    3:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    3              	.Ltext0:
 207              		.loc 2 178 0
 208 0089 C7475400 		movl	$0, 84(%rdi)
 208      000000
 179:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    4:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    4              		.section	.text.unlikely._ZN9Fl_Pix
 209              		.loc 2 179 0
 210 0090 C7475801 		movl	$1, 88(%rdi)
 210      000000
 180:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    5:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    5              		.align 2
 211              		.loc 2 180 0
 212 0097 C7475C01 		movl	$1, 92(%rdi)
 212      000000
 213              	.LVL12:
 214              	.LBB17:
 215              	.LBB15:
 216              		.loc 3 369 0
 217 009e 7438     		je	.L9
 218 00a0 BE000000 		movl	$.LC3, %esi
 218      00
 219 00a5 B9050000 		movl	$5, %ecx
 219      00
 220 00aa 4889D7   		movq	%rdx, %rdi
 221              	.LVL13:
 222 00ad F3A6     		repz cmpsb
 223 00af 750F     		jne	.L17
 224              	.LVL14:
 225              	.LBE15:
 226              	.LBE17:
 181:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    6:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    6              	.LCOLDB0:
 182:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    7:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    7              		.section	.text._ZN9Fl_PixmapC2EPKP
 183:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    8:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    8              	.LHOTB0:
 184:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    9:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    9              		.align 2
 185:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   10:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   10              		.p2align 4,,15
 186:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   11:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   11              		.section	.text.unlikely._ZN9Fl_Pix
 187:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   12:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   12              	.Ltext_cold0:
 188:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   13:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   13              		.section	.text._ZN9Fl_PixmapC2EPKP
 189:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   14:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   14              		.weak	_ZN9Fl_PixmapC2EPKPKc
 190:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   15:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   16              	_ZN9Fl_PixmapC2EPKPKc:
 191:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   16:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   17              	.LFB174:
 227              		.loc 2 191 0
 228 00b1 C740582A 		movl	$42, 88(%rax)
 228      000000
 229 00b8 C3       		ret
 230              	.LVL15:
 231 00b9 0F1F8000 		.p2align 4,,10
 231      000000
 232              		.p2align 3
 233              	.L17:
 234              	.LBB18:
 235              	.LBB19:
 236              		.loc 3 369 0
 237 00c0 BE000000 		movl	$.LC4, %esi
 237      00
 238 00c5 B9080000 		movl	$8, %ecx
 238      00
 239 00ca 4889D7   		movq	%rdx, %rdi
 240 00cd F3A6     		repz cmpsb
 241 00cf 750F     		jne	.L18
 242              	.LVL16:
 243              	.LBE19:
 244              	.LBE18:
 192:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   17:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_Pixmap
 193:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   18:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    1:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 245              		.loc 2 193 0
 246 00d1 C7405822 		movl	$34, 88(%rax)
 246      000000
 247              	.L9:
 248 00d8 F3C3     		rep ret
 249              	.LVL17:
 250 00da 660F1F44 		.p2align 4,,10
 250      0000
 251              		.p2align 3
 252              	.L18:
 253 00e0 F3C3     		rep ret
 254              	.LBE20:
 255              		.cfi_endproc
 256              	.LFE233:
 258              		.section	.text.unlikely._ZN13Fl_Tree_PrefsC2Ev
 259              	.LCOLDE5:
 260              		.section	.text._ZN13Fl_Tree_PrefsC2Ev
 261              	.LHOTE5:
 262              		.globl	_ZN13Fl_Tree_PrefsC1Ev
 263              		.set	_ZN13Fl_Tree_PrefsC1Ev,_ZN13Fl_Tree_PrefsC2Ev
 264              		.section	.text.unlikely._GLOBAL__sub_I__ZN13Fl_Tree_Prefs8openiconEP8Fl_Image,"ax",@progbits
 265              	.LCOLDB6:
 266              		.section	.text.startup._GLOBAL__sub_I__ZN13Fl_Tree_Prefs8openiconEP8Fl_Image,"ax",@progbits
 267              	.LHOTB6:
 268              		.p2align 4,,15
 270              	_GLOBAL__sub_I__ZN13Fl_Tree_Prefs8openiconEP8Fl_Image:
 271              	.LFB236:
 194:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   19:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    2:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // "$Id: Fl_Pixm
 195:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   20:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****    3:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
 272              		.loc 2 195 0
 273              		.cfi_startproc
 274              	.LVL18:
 275 0000 4883EC08 		subq	$8, %rsp
 276              		.cfi_def_cfa_offset 16
 277              	.LBB23:
 278              	.LBB24:
  64:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   48:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void set_data(const char * const *p);
 279              		.loc 2 64 0
 280 0004 BE000000 		movl	$_ZL10L_open_xpm, %esi
 280      00
 281 0009 BF000000 		movl	$_ZL12L_openpixmap, %edi
 281      00
 282 000e E8000000 		call	_ZN9Fl_PixmapC1EPKPKc
 282      00
 283              	.LVL19:
 284 0013 BA000000 		movl	$__dso_handle, %edx
 284      00
 285 0018 BE000000 		movl	$_ZL12L_openpixmap, %esi
 285      00
 286 001d BF000000 		movl	$_ZN9Fl_PixmapD1Ev, %edi
 286      00
 287 0022 E8000000 		call	__cxa_atexit
 287      00
 288              	.LVL20:
 100:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   19              		.loc 1 83 0
 289              		.loc 2 100 0
 290 0027 BE000000 		movl	$_ZL11L_close_xpm, %esi
 290      00
 291 002c BF000000 		movl	$_ZL13L_closepixmap, %edi
 291      00
 292 0031 E8000000 		call	_ZN9Fl_PixmapC1EPKPKc
 292      00
 293              	.LVL21:
 294 0036 BA000000 		movl	$__dso_handle, %edx
 294      00
 295 003b BE000000 		movl	$_ZL13L_closepixmap, %esi
 295      00
 296 0040 BF000000 		movl	$_ZN9Fl_PixmapD1Ev, %edi
 296      00
 297              	.LBE24:
 298              	.LBE23:
 299              		.loc 2 195 0
 300 0045 4883C408 		addq	$8, %rsp
 301              		.cfi_def_cfa_offset 8
 302              	.LBB26:
 303              	.LBB25:
 100:fltk-1.3.4-1/src/Fl_Tree_Prefs.cxx ****   19              		.loc 1 83 0
 304              		.loc 2 100 0
 305 0049 E9000000 		jmp	__cxa_atexit
 305      00
 306              	.LVL22:
 307              	.LBE25:
 308              	.LBE26:
 309              		.cfi_endproc
 310              	.LFE236:
 312              		.section	.text.unlikely._GLOBAL__sub_I__ZN13Fl_Tree_Prefs8openiconEP8Fl_Image
 313              	.LCOLDE6:
 314              		.section	.text.startup._GLOBAL__sub_I__ZN13Fl_Tree_Prefs8openiconEP8Fl_Image
 315              	.LHOTE6:
 316              		.section	.init_array,"aw"
 317              		.align 8
 318 0000 00000000 		.quad	_GLOBAL__sub_I__ZN13Fl_Tree_Prefs8openiconEP8Fl_Image
 318      00000000 
 319              		.section	.bss._ZL13L_closepixmap,"aw",@nobits
 320              		.align 32
 323              	_ZL13L_closepixmap:
 324 0000 00000000 		.zero	56
 324      00000000 
 324      00000000 
 324      00000000 
 324      00000000 
 325              		.section	.rodata.str1.1
 326              	.LC7:
 327 000d 31312031 		.string	"11 11 3 1"
 327      31203320 
 327      3100
 328              	.LC8:
 329 0017 2E096320 		.string	".\tc #fefefe"
 329      23666566 
 329      65666500 
 330              	.LC9:
 331 0023 23096320 		.string	"#\tc #444444"
 331      23343434 
 331      34343400 
 332              	.LC10:
 333 002f 40096320 		.string	"@\tc #000000"
 333      23303030 
 333      30303000 
 334              	.LC11:
 335 003b 23232323 		.string	"###########"
 335      23232323 
 335      23232300 
 336              	.LC12:
 337 0047 232E2E2E 		.string	"#.........#"
 337      2E2E2E2E 
 337      2E2E2300 
 338              	.LC13:
 339 0053 232E2E40 		.string	"#..@@@@@..#"
 339      40404040 
 339      2E2E2300 
 340              		.section	.rodata._ZL11L_close_xpm,"a",@progbits
 341              		.align 32
 344              	_ZL11L_close_xpm:
 345 0000 00000000 		.quad	.LC7
 345      00000000 
 346 0008 00000000 		.quad	.LC8
 346      00000000 
 347 0010 00000000 		.quad	.LC9
 347      00000000 
 348 0018 00000000 		.quad	.LC10
 348      00000000 
 349 0020 00000000 		.quad	.LC11
 349      00000000 
 350 0028 00000000 		.quad	.LC12
 350      00000000 
 351 0030 00000000 		.quad	.LC12
 351      00000000 
 352 0038 00000000 		.quad	.LC12
 352      00000000 
 353 0040 00000000 		.quad	.LC12
 353      00000000 
 354 0048 00000000 		.quad	.LC13
 354      00000000 
 355 0050 00000000 		.quad	.LC12
 355      00000000 
 356 0058 00000000 		.quad	.LC12
 356      00000000 
 357 0060 00000000 		.quad	.LC12
 357      00000000 
 358 0068 00000000 		.quad	.LC12
 358      00000000 
 359 0070 00000000 		.quad	.LC11
 359      00000000 
 360              		.section	.bss._ZL12L_openpixmap,"aw",@nobits
 361              		.align 32
 364              	_ZL12L_openpixmap:
 365 0000 00000000 		.zero	56
 365      00000000 
 365      00000000 
 365      00000000 
 365      00000000 
 366              		.section	.rodata.str1.1
 367              	.LC14:
 368 005f 232E2E2E 		.string	"#....@....#"
 368      2E402E2E 
 368      2E2E2300 
 369              		.section	.rodata._ZL10L_open_xpm,"a",@progbits
 370              		.align 32
 373              	_ZL10L_open_xpm:
 374 0000 00000000 		.quad	.LC7
 374      00000000 
 375 0008 00000000 		.quad	.LC8
 375      00000000 
 376 0010 00000000 		.quad	.LC9
 376      00000000 
 377 0018 00000000 		.quad	.LC10
 377      00000000 
 378 0020 00000000 		.quad	.LC11
 378      00000000 
 379 0028 00000000 		.quad	.LC12
 379      00000000 
 380 0030 00000000 		.quad	.LC12
 380      00000000 
 381 0038 00000000 		.quad	.LC14
 381      00000000 
 382 0040 00000000 		.quad	.LC14
 382      00000000 
 383 0048 00000000 		.quad	.LC13
 383      00000000 
 384 0050 00000000 		.quad	.LC14
 384      00000000 
 385 0058 00000000 		.quad	.LC14
 385      00000000 
 386 0060 00000000 		.quad	.LC12
 386      00000000 
 387 0068 00000000 		.quad	.LC12
 387      00000000 
 388 0070 00000000 		.quad	.LC11
 388      00000000 
 389              		.text
 390              	.Letext0:
 391              		.section	.text.unlikely._ZN9Fl_PixmapC2EPKPKc,"axG",@progbits,_ZN9Fl_PixmapC5EPKPKc,comdat
 392              	.Letext_cold0:
 393              		.file 4 "fltk-1.3.4-1/FL/fl_types.h"
 394              		.file 5 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 395              		.file 6 "/usr/include/x86_64-linux-gnu/bits/types.h"
 396              		.file 7 "/usr/include/libio.h"
 397              		.file 8 "fltk-1.3.4-1/FL/Enumerations.H"
 398              		.file 9 "fltk-1.3.4-1/FL/Fl_Image.H"
 399              		.file 10 "fltk-1.3.4-1/FL/Fl_Tree_Prefs.H"
 400              		.file 11 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Tree_Prefs.cxx
     /tmp/ccYoj2PH.s:16     .text._ZN9Fl_PixmapC2EPKPKc:0000000000000000 _ZN9Fl_PixmapC2EPKPKc
     /tmp/ccYoj2PH.s:16     .text._ZN9Fl_PixmapC2EPKPKc:0000000000000000 _ZN9Fl_PixmapC1EPKPKc
     /tmp/ccYoj2PH.s:84     .text._ZN13Fl_Tree_Prefs8openiconEP8Fl_Image:0000000000000000 _ZN13Fl_Tree_Prefs8openiconEP8Fl_Image
     /tmp/ccYoj2PH.s:364    .bss._ZL12L_openpixmap:0000000000000000 _ZL12L_openpixmap
     /tmp/ccYoj2PH.s:113    .text._ZN13Fl_Tree_Prefs9closeiconEP8Fl_Image:0000000000000000 _ZN13Fl_Tree_Prefs9closeiconEP8Fl_Image
     /tmp/ccYoj2PH.s:323    .bss._ZL13L_closepixmap:0000000000000000 _ZL13L_closepixmap
     /tmp/ccYoj2PH.s:146    .text._ZN13Fl_Tree_PrefsC2Ev:0000000000000000 _ZN13Fl_Tree_PrefsC2Ev
     /tmp/ccYoj2PH.s:146    .text._ZN13Fl_Tree_PrefsC2Ev:0000000000000000 _ZN13Fl_Tree_PrefsC1Ev
     /tmp/ccYoj2PH.s:270    .text.startup._GLOBAL__sub_I__ZN13Fl_Tree_Prefs8openiconEP8Fl_Image:0000000000000000 _GLOBAL__sub_I__ZN13Fl_Tree_Prefs8openiconEP8Fl_Image
     /tmp/ccYoj2PH.s:373    .rodata._ZL10L_open_xpm:0000000000000000 _ZL10L_open_xpm
     /tmp/ccYoj2PH.s:344    .rodata._ZL11L_close_xpm:0000000000000000 _ZL11L_close_xpm
                           .group:0000000000000000 _ZN9Fl_PixmapC5EPKPKc
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

UNDEFINED SYMBOLS
_ZN8Fl_ImageC2Eiii
_ZTV9Fl_Pixmap
_ZN9Fl_Pixmap8set_dataEPKPKc
_ZN9Fl_Pixmap7measureEv
FL_NORMAL_SIZE
_ZN2Fl7scheme_E
__dso_handle
_ZN9Fl_PixmapD1Ev
__cxa_atexit
