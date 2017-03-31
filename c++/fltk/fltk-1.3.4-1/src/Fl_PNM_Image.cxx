   1              		.file	"Fl_PNM_Image.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN12Fl_PNM_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comdat
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN12Fl_PNM_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comdat
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN12Fl_PNM_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comdat
  12              	.Ltext_cold0:
  13              		.section	.text._ZN12Fl_PNM_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comdat
  14              		.weak	_ZN12Fl_PNM_ImageD2Ev
  16              	_ZN12Fl_PNM_ImageD2Ev:
  17              	.LFB185:
  18              		.file 1 "fltk-1.3.4-1/FL/Fl_PNM_Image.H"
   1:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
   2:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // "$Id: Fl_PNM_Image.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
   4:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // PNM image header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
   6:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
   8:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
  12:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
  14:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
  16:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
  18:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** 
  19:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****    Fl_PNM_Image class . */
  21:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** 
  22:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** #ifndef Fl_PNM_Image_H
  23:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** #define Fl_PNM_Image_H
  24:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** #  include "Fl_Image.H"
  25:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** 
  26:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** /**
  27:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   The Fl_PNM_Image class supports loading, caching,
  28:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   and drawing of Portable Anymap (PNM, PBM, PGM, PPM) image files. The class
  29:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   loads bitmap, grayscale, and full-color images in both ASCII and
  30:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   binary formats.
  31:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** */
  32:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** class FL_EXPORT Fl_PNM_Image : public Fl_RGB_Image {
  19              		.loc 1 32 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              	.LBB95:
  23              		.loc 1 32 0
  24 0000 48C70700 		movq	$_ZTV12Fl_PNM_Image+16, (%rdi)
  24      000000
  25 0007 E9000000 		jmp	_ZN12Fl_RGB_ImageD2Ev
  25      00
  26              	.LVL1:
  27              	.LBE95:
  28              		.cfi_endproc
  29              	.LFE185:
  31              		.section	.text.unlikely._ZN12Fl_PNM_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comdat
  32              	.LCOLDE0:
  33              		.section	.text._ZN12Fl_PNM_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comdat
  34              	.LHOTE0:
  35              		.weak	_ZN12Fl_PNM_ImageD1Ev
  36              		.set	_ZN12Fl_PNM_ImageD1Ev,_ZN12Fl_PNM_ImageD2Ev
  37              		.section	.text.unlikely._ZN12Fl_PNM_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comdat
  38              		.align 2
  39              	.LCOLDB1:
  40              		.section	.text._ZN12Fl_PNM_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comdat
  41              	.LHOTB1:
  42              		.align 2
  43              		.p2align 4,,15
  44              		.weak	_ZN12Fl_PNM_ImageD0Ev
  46              	_ZN12Fl_PNM_ImageD0Ev:
  47              	.LFB187:
  48              		.loc 1 32 0
  49              		.cfi_startproc
  50              	.LVL2:
  51 0000 53       		pushq	%rbx
  52              		.cfi_def_cfa_offset 16
  53              		.cfi_offset 3, -16
  54              		.loc 1 32 0
  55 0001 4889FB   		movq	%rdi, %rbx
  56              	.LBB96:
  57              	.LBB97:
  58 0004 48C70700 		movq	$_ZTV12Fl_PNM_Image+16, (%rdi)
  58      000000
  59 000b E8000000 		call	_ZN12Fl_RGB_ImageD2Ev
  59      00
  60              	.LVL3:
  61              	.LBE97:
  62              	.LBE96:
  63 0010 4889DF   		movq	%rbx, %rdi
  64 0013 5B       		popq	%rbx
  65              		.cfi_def_cfa_offset 8
  66              	.LVL4:
  67 0014 E9000000 		jmp	_ZdlPv
  67      00
  68              	.LVL5:
  69              		.cfi_endproc
  70              	.LFE187:
  72              		.section	.text.unlikely._ZN12Fl_PNM_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comdat
  73              	.LCOLDE1:
  74              		.section	.text._ZN12Fl_PNM_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comdat
  75              	.LHOTE1:
  76              		.section	.rodata.str1.1,"aMS",@progbits,1
  77              	.LC2:
  78 0000 00       		.string	""
  79              	.LC3:
  80 0001 726200   		.string	"rb"
  81              		.section	.rodata.str1.8,"aMS",@progbits,1
  82              		.align 8
  83              	.LC4:
  84 0000 4561726C 		.string	"Early end-of-file in PNM file \"%s\"!"
  84      7920656E 
  84      642D6F66 
  84      2D66696C 
  84      6520696E 
  85              		.section	.rodata.str1.1
  86              	.LC5:
  87 0004 504E4D20 		.string	"PNM file \"%s\" is too large!\n"
  87      66696C65 
  87      20222573 
  87      22206973 
  87      20746F6F 
  88              	.LC6:
  89 0021 256400   		.string	"%d"
  90              		.section	.text.unlikely._ZN12Fl_PNM_ImageC2EPKc,"ax",@progbits
  91              		.align 2
  92              	.LCOLDB7:
  93              		.section	.text._ZN12Fl_PNM_ImageC2EPKc,"ax",@progbits
  94              	.LHOTB7:
  95              		.align 2
  96              		.p2align 4,,15
  97              		.globl	_ZN12Fl_PNM_ImageC2EPKc
  99              	_ZN12Fl_PNM_ImageC2EPKc:
 100              	.LFB182:
 101              		.file 2 "fltk-1.3.4-1/src/Fl_PNM_Image.cxx"
   1:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    1              		.file	"Fl_PNM_Image.cxx"
   2:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    2              		.text
   3:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3              	.Ltext0:
   4:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_PNM_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNM_Image
   5:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    5              		.align 2
   6:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    6              	.LCOLDB0:
   7:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    7              		.section	.text._ZN12Fl_PNM_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comd
   8:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    8              	.LHOTB0:
   9:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    9              		.align 2
  10:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   10              		.p2align 4,,15
  11:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   11              		.section	.text.unlikely._ZN12Fl_PNM_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNM_Image
  12:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   12              	.Ltext_cold0:
  13:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   13              		.section	.text._ZN12Fl_PNM_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comd
  14:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   14              		.weak	_ZN12Fl_PNM_ImageD2Ev
  15:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   16              	_ZN12Fl_PNM_ImageD2Ev:
  16:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   17              	.LFB185:
  17:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_PNM_Image.H"
  18:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    1:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
  19:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // "$Id: Fl_PNM_Image.H 8864 2011-07-19 04:49:30Z greg.erc
  20:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
  21:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // PNM image header file for the Fast Light Tool Kit (FLTK
  22:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    5:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
  23:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    6:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // Copyright 1998-2010 by Bill Spitzak and others.
  24:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    7:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
  25:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // This library is free software. Distribution and use rig
  26:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    9:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // the file "COPYING" which should have been included with
  27:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // file is missing or damaged, see the license at:
  28:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
  29:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   12:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //     http://www.fltk.org/COPYING.php
  30:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
  31:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   14:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // Please report all bugs and problems on the following pa
  32:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   15:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
  33:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   16:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //     http://www.fltk.org/str.php
  34:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   17:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
  35:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   18:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** 
  36:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   19:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** /* \file
  37:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   20:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****    Fl_PNM_Image class . */
  38:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   21:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** 
  39:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   22:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** #ifndef Fl_PNM_Image_H
  40:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   23:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** #define Fl_PNM_Image_H
  41:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   24:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** #  include "Fl_Image.H"
  42:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   25:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** 
  43:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** /**
  44:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   The Fl_PNM_Image class supports loading, caching,
  45:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   and drawing of Portable Anymap (PNM, PBM, PGM, PPM) imag
  46:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   loads bitmap, grayscale, and full-color images in both A
  47:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   30:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   binary formats.
  48:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   31:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** */
  49:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   32:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** class FL_EXPORT Fl_PNM_Image : public Fl_RGB_Image {
  50:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   19              		.loc 1 32 0
  51:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   20              		.cfi_startproc
  52:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   21              	.LVL0:
 102              		.loc 2 52 0
 103              		.cfi_startproc
 104              	.LVL6:
 105 0000 4157     		pushq	%r15
 106              		.cfi_def_cfa_offset 16
 107              		.cfi_offset 15, -16
 108 0002 4156     		pushq	%r14
 109              		.cfi_def_cfa_offset 24
 110              		.cfi_offset 14, -24
 111              	.LBB98:
  53:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   22              	.LBB95:
 112              		.loc 2 53 0
 113 0004 4531C9   		xorl	%r9d, %r9d
 114              	.LBE98:
  52:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   22              	.LBB95:
 115              		.loc 2 52 0
 116 0007 4155     		pushq	%r13
 117              		.cfi_def_cfa_offset 32
 118              		.cfi_offset 13, -32
 119 0009 4154     		pushq	%r12
 120              		.cfi_def_cfa_offset 40
 121              		.cfi_offset 12, -40
 122 000b 4989FD   		movq	%rdi, %r13
 123 000e 55       		pushq	%rbp
 124              		.cfi_def_cfa_offset 48
 125              		.cfi_offset 6, -48
 126 000f 53       		pushq	%rbx
 127              		.cfi_def_cfa_offset 56
 128              		.cfi_offset 3, -56
 129              	.LBB135:
 130              		.loc 2 53 0
 131 0010 31C9     		xorl	%ecx, %ecx
 132 0012 31D2     		xorl	%edx, %edx
 133              	.LBE135:
  52:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   22              	.LBB95:
 134              		.loc 2 52 0
 135 0014 4889F5   		movq	%rsi, %rbp
 136              	.LBB136:
 137              		.loc 2 53 0
 138 0017 41B80300 		movl	$3, %r8d
 138      0000
 139              	.LBE136:
  52:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   22              	.LBB95:
 140              		.loc 2 52 0
 141 001d 4881EC38 		subq	$1080, %rsp
 141      040000
 142              		.cfi_def_cfa_offset 1136
 143              	.LBB137:
 144              		.loc 2 53 0
 145 0024 31F6     		xorl	%esi, %esi
 146              	.LVL7:
 147              	.LBE137:
  52:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   22              	.LBB95:
 148              		.loc 2 52 0
 149 0026 64488B04 		movq	%fs:40, %rax
 149      25280000 
 149      00
 150 002f 48898424 		movq	%rax, 1064(%rsp)
 150      28040000 
 151 0037 31C0     		xorl	%eax, %eax
 152              	.LBB138:
 153              		.loc 2 53 0
 154 0039 E8000000 		call	_ZN12Fl_RGB_ImageC2EPKhiiii
 154      00
 155              	.LVL8:
 156 003e 49C74500 		movq	$_ZTV12Fl_PNM_Image+16, 0(%r13)
 156      00000000 
 157              	.LBB99:
  54:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   23              		.loc 1 32 0
  55:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   24 0000 48C70700 		movq	$_ZTV12Fl_PNM_Image+16, (%rdi)
  56:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   24      000000
  57:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   25 0007 E9000000 		jmp	_ZN12Fl_RGB_ImageD2Ev
  58:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   25      00
  59:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   26              	.LVL1:
  60:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   27              	.LBE95:
  61:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   28              		.cfi_endproc
  62:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   29              	.LFE185:
  63:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   31              		.section	.text.unlikely._ZN12Fl_PNM_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNM_Image
  64:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   32              	.LCOLDE0:
  65:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   33              		.section	.text._ZN12Fl_PNM_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comd
  66:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   34              	.LHOTE0:
 158              		.loc 2 66 0
 159 0046 BE000000 		movl	$.LC3, %esi
 159      00
 160 004b 4889EF   		movq	%rbp, %rdi
 161 004e E8000000 		call	fl_fopen
 161      00
 162              	.LVL9:
 163 0053 4885C0   		testq	%rax, %rax
 164 0056 0F841C03 		je	.L108
 164      0000
 165              	.LBB100:
 166              	.LBB101:
 167              		.file 3 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 168              		.loc 3 263 0
 169 005c 488D7C24 		leaq	32(%rsp), %rdi
 169      20
 170 0061 4889C2   		movq	%rax, %rdx
 171 0064 BE000400 		movl	$1024, %esi
 171      00
 172 0069 4989C4   		movq	%rax, %r12
 173              	.LVL10:
 174 006c E8000000 		call	fgets
 174      00
 175              	.LVL11:
 176              	.LBE101:
 177              	.LBE100:
  67:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   35              		.weak	_ZN12Fl_PNM_ImageD1Ev
  68:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   36              		.set	_ZN12Fl_PNM_ImageD1Ev,_ZN12Fl_PNM_ImageD2Ev
  69:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   37              		.section	.text.unlikely._ZN12Fl_PNM_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNM_Image
  70:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   38              		.align 2
  71:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   39              	.LCOLDB1:
  72:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   40              		.section	.text._ZN12Fl_PNM_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comd
  73:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   41              	.LHOTB1:
  74:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   42              		.align 2
  75:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   43              		.p2align 4,,15
  76:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   44              		.weak	_ZN12Fl_PNM_ImageD0Ev
  77:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   46              	_ZN12Fl_PNM_ImageD0Ev:
  78:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   47              	.LFB187:
  79:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   48              		.loc 1 32 0
  80:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   49              		.cfi_startproc
  81:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   50              	.LVL2:
  82:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   51 0000 53       		pushq	%rbx
  83:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   52              		.cfi_def_cfa_offset 16
  84:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   53              		.cfi_offset 3, -16
  85:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   54              		.loc 1 32 0
 178              		.loc 2 85 0
 179 0071 4885C0   		testq	%rax, %rax
  84:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   54              		.loc 1 32 0
 180              		.loc 2 84 0
 181 0074 48894424 		movq	%rax, 24(%rsp)
 181      18
 182              		.loc 2 85 0
 183 0079 0F84E102 		je	.L117
 183      0000
  86:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   55 0001 4889FB   		movq	%rdi, %rbx
  87:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   56              	.LBB96:
  88:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   57              	.LBB97:
  89:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   58 0004 48C70700 		movq	$_ZTV12Fl_PNM_Image+16, (%rdi)
  90:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   58      000000
  91:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   59 000b E8000000 		call	_ZN12Fl_RGB_ImageD2Ev
  92:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   59      00
 184              		.loc 2 92 0
 185 007f 488D7801 		leaq	1(%rax), %rdi
 186              	.LBB102:
 187              	.LBB103:
 188              		.file 4 "/usr/include/stdlib.h"
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
 189              		.loc 4 280 0
 190 0083 BA0A0000 		movl	$10, %edx
 190      00
 191 0088 31F6     		xorl	%esi, %esi
 192              	.LBE103:
 193              	.LBE102:
 194              		.loc 2 92 0
 195 008a 48897C24 		movq	%rdi, 24(%rsp)
 195      18
 196              	.LVL12:
 197              	.LBB105:
 198              	.LBB104:
 199              		.loc 4 280 0
 200 008f E8000000 		call	strtol
 200      00
 201              	.LVL13:
 202 0094 4889C3   		movq	%rax, %rbx
 203 0097 8944240C 		movl	%eax, 12(%rsp)
 204              	.LBE104:
 205              	.LBE105:
  93:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   60              	.LVL3:
  94:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   61              	.LBE97:
  95:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   62              	.LBE96:
 206              		.loc 2 95 0
 207 009b 488B4424 		movq	24(%rsp), %rax
 207      18
 208 00a0 0FBE10   		movsbl	(%rax), %edx
 209 00a3 4883C001 		addq	$1, %rax
 210 00a7 83EA30   		subl	$48, %edx
 211 00aa 83FA09   		cmpl	$9, %edx
 212 00ad 7718     		ja	.L11
 213 00af 90       		.p2align 4,,10
 214              		.p2align 3
 215              	.L96:
 216              		.loc 2 95 0 is_stmt 0 discriminator 1
 217 00b0 4889C2   		movq	%rax, %rdx
 218 00b3 48894424 		movq	%rax, 24(%rsp)
 218      18
 219 00b8 4883C001 		addq	$1, %rax
 220 00bc 0FBE12   		movsbl	(%rdx), %edx
 221 00bf 83EA30   		subl	$48, %edx
 222 00c2 83FA09   		cmpl	$9, %edx
 223 00c5 76E9     		jbe	.L96
 224              	.L11:
  96:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   63 0010 4889DF   		movq	%rbx, %rdi
  97:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   64 0013 5B       		popq	%rbx
 225              		.loc 2 97 0 is_stmt 1
 226 00c7 83FB07   		cmpl	$7, %ebx
 227 00ca 0F84A806 		je	.L118
 227      0000
 228              	.L107:
 229 00d0 488B4424 		movq	24(%rsp), %rax
 229      18
 230              	.L14:
  98:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   65              		.cfi_def_cfa_offset 8
  99:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   66              	.LVL4:
 231              		.loc 2 99 0
 232 00d5 4885C0   		testq	%rax, %rax
 233 00d8 7452     		je	.L15
 234              	.LVL14:
 235              		.loc 2 99 0 is_stmt 0 discriminator 1
 236 00da 418B7508 		movl	8(%r13), %esi
 237 00de 85F6     		testl	%esi, %esi
 238 00e0 753E     		jne	.L20
 239              	.L16:
 100:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   67 0014 E9000000 		jmp	_ZdlPv
 240              		.loc 2 100 0 is_stmt 1
 241 00e2 0FBE10   		movsbl	(%rax), %edx
 242 00e5 84D2     		testb	%dl, %dl
 243 00e7 0F84B301 		je	.L73
 243      0000
 244 00ed 80FA23   		cmpb	$35, %dl
 245 00f0 0F84AA01 		je	.L73
 245      0000
 101:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   67      00
 102:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   68              	.LVL5:
 246              		.loc 2 102 0
 247 00f6 83EA30   		subl	$48, %edx
 248 00f9 83FA09   		cmpl	$9, %edx
 249 00fc 0F86DE01 		jbe	.L119
 249      0000
 103:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   69              		.cfi_endproc
 104:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   70              	.LFE187:
 250              		.loc 2 104 0
 251 0102 4883C001 		addq	$1, %rax
  99:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   67 0014 E9000000 		jmp	_ZdlPv
 252              		.loc 2 99 0
 253 0106 4885C0   		testq	%rax, %rax
 254              		.loc 2 104 0
 255 0109 48894424 		movq	%rax, 24(%rsp)
 255      18
  99:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   67 0014 E9000000 		jmp	_ZdlPv
 256              		.loc 2 99 0
 257 010e 741C     		je	.L15
 258 0110 418B7508 		movl	8(%r13), %esi
 259 0114 85F6     		testl	%esi, %esi
 260 0116 74CA     		je	.L16
 261 0118 0F1F8400 		.p2align 4,,10
 261      00000000 
 262              		.p2align 3
 263              	.L20:
 264              	.LVL15:
 105:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   72              		.section	.text.unlikely._ZN12Fl_PNM_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNM_Image
 106:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   73              	.LCOLDE1:
 107:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   74              		.section	.text._ZN12Fl_PNM_ImageD0Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comd
 265              		.loc 2 107 0 discriminator 1
 266 0120 418B4D0C 		movl	12(%r13), %ecx
 267 0124 85C9     		testl	%ecx, %ecx
 268 0126 0F841401 		je	.L21
 268      0000
 269              	.LVL16:
 270              	.L15:
 108:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   75              	.LHOTE1:
 109:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   76              		.section	.rodata.str1.1,"aMS",@progbits,1
 110:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   77              	.LC2:
 111:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   78 0000 00       		.string	""
 112:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   79              	.LC3:
 113:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   80 0001 726200   		.string	"rb"
 114:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   81              		.section	.rodata.str1.8,"aMS",@progbits,1
 115:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   82              		.align 8
 271              		.loc 2 115 0
 272 012c 83FB01   		cmpl	$1, %ebx
 273 012f 0F843B01 		je	.L84
 273      0000
 274 0135 83FB04   		cmpl	$4, %ebx
 275 0138 0F843201 		je	.L84
 275      0000
 276 013e 488B4424 		movq	24(%rsp), %rax
 276      18
 277 0143 4531F6   		xorl	%r14d, %r14d
 278              	.L77:
 279              	.LVL17:
 116:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   83              	.LC4:
 117:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   84 0000 4561726C 		.string	"Early end-of-file in PNM file \"%s\"!"
 118:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   84      7920656E 
 280              		.loc 2 118 0
 281 0146 4885C0   		testq	%rax, %rax
 282 0149 743D     		je	.L24
 283              	.L121:
 284 014b 4585F6   		testl	%r14d, %r14d
 285 014e 7538     		jne	.L24
 119:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   84      642D6F66 
 286              		.loc 2 119 0
 287 0150 0FBE10   		movsbl	(%rax), %edx
 288 0153 84D2     		testb	%dl, %dl
 289 0155 0F84A501 		je	.L85
 289      0000
 290 015b 80FA23   		cmpb	$35, %dl
 291 015e 0F849C01 		je	.L85
 291      0000
 120:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   84      2D66696C 
 121:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   84      6520696E 
 292              		.loc 2 121 0
 293 0164 83EA30   		subl	$48, %edx
 294 0167 83FA09   		cmpl	$9, %edx
 295 016a 0F86B001 		jbe	.L120
 295      0000
 122:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   85              		.section	.rodata.str1.1
 123:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   86              	.LC5:
 296              		.loc 2 123 0
 297 0170 4883C001 		addq	$1, %rax
 298 0174 4531F6   		xorl	%r14d, %r14d
 299              	.LVL18:
 118:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   84      642D6F66 
 300              		.loc 2 118 0
 301 0177 4885C0   		testq	%rax, %rax
 302              		.loc 2 123 0
 303 017a 48894424 		movq	%rax, 24(%rsp)
 303      18
 118:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   84      642D6F66 
 304              		.loc 2 118 0
 305 017f 75CA     		jne	.L121
 306              	.LVL19:
 307              		.p2align 4,,10
 308 0181 0F1F8000 		.p2align 3
 308      000000
 309              	.L24:
 124:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   87 0004 504E4D20 		.string	"PNM file \"%s\" is too large!\n"
 125:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   87      66696C65 
 126:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   87      20222573 
 127:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   87      22206973 
 128:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   87      20746F6F 
 310              		.loc 2 128 0
 311 0188 8D43FC   		leal	-4(%rbx), %eax
 312 018b 83F801   		cmpl	$1, %eax
 313 018e 0F86AC01 		jbe	.L86
 313      0000
 314 0194 83EB01   		subl	$1, %ebx
 315 0197 83FB01   		cmpl	$1, %ebx
 316 019a 0F86A001 		jbe	.L86
 316      0000
 317              	.LVL20:
 318              	.LBB106:
 319              	.LBB107:
 320              		.file 5 "fltk-1.3.4-1/FL/Fl_Image.H"
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
 321              		.loc 5 84 0
 322 01a0 41C74510 		movl	$3, 16(%r13)
 322      03000000 
 323 01a8 41B80300 		movl	$3, %r8d
 323      0000
 324 01ae B9030000 		movl	$3, %ecx
 324      00
 325              	.LVL21:
 326              	.L31:
 327 01b3 49634508 		movslq	8(%r13), %rax
 328 01b7 4963550C 		movslq	12(%r13), %rdx
 329 01bb 4889C7   		movq	%rax, %rdi
 330              	.LVL22:
 331 01be 4889D6   		movq	%rdx, %rsi
 332              	.LVL23:
 333              	.LBE107:
 334              	.LBE106:
 129:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   88              	.LC6:
 130:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   89 0021 256400   		.string	"%d"
 131:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   90              		.section	.text.unlikely._ZN12Fl_PNM_ImageC2EPKc,"ax",@progbits
 132:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   91              		.align 2
 133:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   92              	.LCOLDB7:
 335              		.loc 2 133 0
 336 01c1 480FAFC2 		imulq	%rdx, %rax
 337 01c5 480FAFC1 		imulq	%rcx, %rax
 338 01c9 48390500 		cmpq	%rax, _ZN12Fl_RGB_Image9max_size_E(%rip)
 338      000000
 339 01d0 0F83B201 		jnb	.L32
 339      0000
 134:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   93              		.section	.text._ZN12Fl_PNM_ImageC2EPKc,"ax",@progbits
 340              		.loc 2 134 0
 341 01d6 4889EE   		movq	%rbp, %rsi
 342 01d9 BF000000 		movl	$.LC5, %edi
 342      00
 343 01de 31C0     		xorl	%eax, %eax
 344 01e0 FF150000 		call	*_ZN2Fl7warningE(%rip)
 344      0000
 345              	.LVL24:
 135:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   94              	.LHOTB7:
 346              		.loc 2 135 0
 347 01e6 4C89E7   		movq	%r12, %rdi
 348 01e9 E8000000 		call	fclose
 348      00
 349              	.LVL25:
 350              	.LBB108:
 351              	.LBB109:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 352              		.loc 5 76 0
 353 01ee 41C74508 		movl	$0, 8(%r13)
 353      00000000 
 354              	.LVL26:
 355              	.LBE109:
 356              	.LBE108:
 357              	.LBB110:
 358              	.LBB111:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 359              		.loc 5 80 0
 360 01f6 41C7450C 		movl	$0, 12(%r13)
 360      00000000 
 361              	.LVL27:
 362              	.LBE111:
 363              	.LBE110:
 364              	.LBB112:
 365              	.LBB113:
 366              		.loc 5 84 0
 367 01fe 41C74510 		movl	$0, 16(%r13)
 367      00000000 
 368              	.LVL28:
 369              	.LBE113:
 370              	.LBE112:
 371              	.LBB114:
 372              	.LBB115:
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
 373              		.loc 5 96 0
 374 0206 41C74514 		movl	$-3, 20(%r13)
 374      FDFFFFFF 
 375              	.LVL29:
 376              	.L4:
 377              	.LBE115:
 378              	.LBE114:
 379              	.LBE99:
 380              	.LBE138:
 136:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   95              		.align 2
 137:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   96              		.p2align 4,,15
 138:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   97              		.globl	_ZN12Fl_PNM_ImageC2EPKc
 139:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   99              	_ZN12Fl_PNM_ImageC2EPKc:
 140:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  100              	.LFB182:
 141:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  101              		.file 2 "fltk-1.3.4-1/src/Fl_PNM_Image.cxx"
 142:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    1:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    1              		.file	"Fl_PNM_Image.cxx"
 143:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    2:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    2              		.text
 144:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3              	.Ltext0:
 145:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_PNM
 146:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    5:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    5              		.align 2
 147:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    6:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    6              	.LCOLDB0:
 148:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    7:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    7              		.section	.text._ZN12Fl_PNM_ImageD2E
 149:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    8:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    8              	.LHOTB0:
 150:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    9:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    9              		.align 2
 151:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   10:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   10              		.p2align 4,,15
 152:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   11:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   11              		.section	.text.unlikely._ZN12Fl_PNM
 153:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   12:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   12              	.Ltext_cold0:
 154:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   13:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   13              		.section	.text._ZN12Fl_PNM_ImageD2E
 155:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   14:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   14              		.weak	_ZN12Fl_PNM_ImageD2Ev
 156:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   15:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   16              	_ZN12Fl_PNM_ImageD2Ev:
 157:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   16:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   17              	.LFB185:
 158:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   17:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   18              		.file 1 "fltk-1.3.4-1/FL/Fl_PNM_Ima
 159:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   18:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    1:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 160:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   19:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // "$Id: Fl_PN
 161:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   20:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 162:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   21:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // PNM image h
 163:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   22:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    5:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 164:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   23:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    6:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // Copyright 1
 165:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   24:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    7:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 166:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   25:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    8:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // This librar
 167:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   26:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    9:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // the file "C
 168:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   27:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // file is mis
 169:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   28:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 170:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   29:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   12:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //     http://
 171:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   30:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 172:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   31:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   14:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // Please repo
 173:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   32:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   15:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 174:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   33:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   16:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //     http://
 175:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   34:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   17:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 176:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   35:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   18:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** 
 177:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   36:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   19:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** /* \file
 178:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   37:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   20:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****    Fl_PNM_Imag
 179:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   38:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   21:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** 
 180:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   39:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   22:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** #ifndef Fl_PNM
 181:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   40:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   23:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** #define Fl_PNM
 182:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   41:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   24:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** #  include "Fl
 183:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   42:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   25:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** 
 184:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   43:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** /**
 185:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   44:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   The Fl_PNM_I
 186:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   45:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   and drawing 
 187:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   46:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   loads bitmap
 188:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   47:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   30:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   binary forma
 189:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   48:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   31:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** */
 190:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   49:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   32:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** class FL_EXPOR
 191:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   50:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   19              		.loc 1 32 0
 192:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   51:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   20              		.cfi_startproc
 193:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   52:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   21              	.LVL0:
 194:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  102              		.loc 2 52 0
 195:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  103              		.cfi_startproc
 196:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  104              	.LVL6:
 197:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  105 0000 4157     		pushq	%r15
 198:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  106              		.cfi_def_cfa_offset 16
 199:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  107              		.cfi_offset 15, -16
 200:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  108 0002 4156     		pushq	%r14
 201:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  109              		.cfi_def_cfa_offset 24
 202:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  110              		.cfi_offset 14, -24
 203:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  111              	.LBB98:
 204:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   53:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   22              	.LBB95:
 381              		.loc 2 204 0
 382 020e 488B8424 		movq	1064(%rsp), %rax
 382      28040000 
 383 0216 64483304 		xorq	%fs:40, %rax
 383      25280000 
 383      00
 384 021f 0F856605 		jne	.L122
 384      0000
 385 0225 4881C438 		addq	$1080, %rsp
 385      040000
 386              		.cfi_remember_state
 387              		.cfi_def_cfa_offset 56
 388 022c 5B       		popq	%rbx
 389              		.cfi_def_cfa_offset 48
 390 022d 5D       		popq	%rbp
 391              		.cfi_def_cfa_offset 40
 392 022e 415C     		popq	%r12
 393              		.cfi_def_cfa_offset 32
 394 0230 415D     		popq	%r13
 395              		.cfi_def_cfa_offset 24
 396              	.LVL30:
 397 0232 415E     		popq	%r14
 398              		.cfi_def_cfa_offset 16
 399 0234 415F     		popq	%r15
 400              		.cfi_def_cfa_offset 8
 401 0236 C3       		ret
 402              	.LVL31:
 403 0237 660F1F84 		.p2align 4,,10
 403      00000000 
 403      00
 404              		.p2align 3
 405              	.L21:
 406              		.cfi_restore_state
 407              	.LBB139:
 408              	.LBB134:
 108:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   76              		.section	.rodata.str1.1,"aMS",@progbits,1
 409              		.loc 2 108 0
 410 0240 0FBE10   		movsbl	(%rax), %edx
 411 0243 84D2     		testb	%dl, %dl
 412 0245 7439     		je	.L75
 413 0247 80FA23   		cmpb	$35, %dl
 414 024a 7434     		je	.L75
 110:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   78 0000 00       		.string	""
 415              		.loc 2 110 0
 416 024c 83EA30   		subl	$48, %edx
 417 024f 83FA09   		cmpl	$9, %edx
 418 0252 766C     		jbe	.L123
 112:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   80 0001 726200   		.string	"rb"
 419              		.loc 2 112 0
 420 0254 4883C001 		addq	$1, %rax
 421 0258 48894424 		movq	%rax, 24(%rsp)
 421      18
 422              	.L22:
 107:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   75              	.LHOTE1:
 423              		.loc 2 107 0
 424 025d 4885C0   		testq	%rax, %rax
 425 0260 0F85BAFE 		jne	.L20
 425      FFFF
 426 0266 E9C1FEFF 		jmp	.L15
 426      FF
 427              	.LVL32:
 428 026b 0F1F4400 		.p2align 4,,10
 428      00
 429              		.p2align 3
 430              	.L84:
 125:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   87      20222573 
 431              		.loc 2 125 0
 432 0270 41BE0100 		movl	$1, %r14d
 432      0000
 433 0276 E90DFFFF 		jmp	.L24
 433      FF
 434              	.LVL33:
 435 027b 0F1F4400 		.p2align 4,,10
 435      00
 436              		.p2align 3
 437              	.L75:
 438              	.LBB116:
 439              	.LBB117:
 440              		.loc 3 263 0
 441 0280 488D7C24 		leaq	32(%rsp), %rdi
 441      20
 442              	.LVL34:
 443 0285 4C89E2   		movq	%r12, %rdx
 444 0288 BE000400 		movl	$1024, %esi
 444      00
 445 028d E8000000 		call	fgets
 445      00
 446              	.LVL35:
 447              	.LBE117:
 448              	.LBE116:
 109:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   77              	.LC2:
 449              		.loc 2 109 0
 450 0292 48894424 		movq	%rax, 24(%rsp)
 450      18
 451 0297 EBC4     		jmp	.L22
 452              	.LVL36:
 453 0299 0F1F8000 		.p2align 4,,10
 453      000000
 454              		.p2align 3
 455              	.L73:
 456              	.LBB118:
 457              	.LBB119:
 458              		.loc 3 263 0
 459 02a0 488D7C24 		leaq	32(%rsp), %rdi
 459      20
 460              	.LVL37:
 461 02a5 4C89E2   		movq	%r12, %rdx
 462 02a8 BE000400 		movl	$1024, %esi
 462      00
 463 02ad E8000000 		call	fgets
 463      00
 464              	.LVL38:
 465              	.LBE119:
 466              	.LBE118:
 101:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   68              	.LVL5:
 467              		.loc 2 101 0
 468 02b2 48894424 		movq	%rax, 24(%rsp)
 468      18
 469 02b7 E919FEFF 		jmp	.L14
 469      FF
 470              	.LVL39:
 471 02bc 0F1F4000 		.p2align 4,,10
 472              		.p2align 3
 473              	.L123:
 111:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   79              	.LC3:
 474              		.loc 2 111 0
 475 02c0 488D7424 		leaq	24(%rsp), %rsi
 475      18
 476 02c5 BA0A0000 		movl	$10, %edx
 476      00
 477 02ca 4889C7   		movq	%rax, %rdi
 478 02cd E8000000 		call	strtol
 478      00
 479              	.LVL40:
 480              	.LBB120:
 481              	.LBB121:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 482              		.loc 5 80 0
 483 02d2 4189450C 		movl	%eax, 12(%r13)
 484 02d6 488B4424 		movq	24(%rsp), %rax
 484      18
 485              	.LVL41:
 486 02db EB80     		jmp	.L22
 487              	.LVL42:
 488 02dd 0F1F00   		.p2align 4,,10
 489              		.p2align 3
 490              	.L119:
 491              	.LBE121:
 492              	.LBE120:
 103:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   70              	.LFE187:
 493              		.loc 2 103 0
 494 02e0 488D7424 		leaq	24(%rsp), %rsi
 494      18
 495 02e5 BA0A0000 		movl	$10, %edx
 495      00
 496 02ea 4889C7   		movq	%rax, %rdi
 497 02ed E8000000 		call	strtol
 497      00
 498              	.LVL43:
 499              	.LBB122:
 500              	.LBB123:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 501              		.loc 5 76 0
 502 02f2 41894508 		movl	%eax, 8(%r13)
 503 02f6 E9D5FDFF 		jmp	.L107
 503      FF
 504              	.LVL44:
 505 02fb 0F1F4400 		.p2align 4,,10
 505      00
 506              		.p2align 3
 507              	.L85:
 508              	.LBE123:
 509              	.LBE122:
 510              	.LBB124:
 511              	.LBB125:
 512              		.loc 3 263 0
 513 0300 488D7C24 		leaq	32(%rsp), %rdi
 513      20
 514              	.LVL45:
 515 0305 4C89E2   		movq	%r12, %rdx
 516 0308 BE000400 		movl	$1024, %esi
 516      00
 517              	.LBE125:
 518              	.LBE124:
 519 030d 4531F6   		xorl	%r14d, %r14d
 520              	.LVL46:
 521              	.LBB127:
 522              	.LBB126:
 523 0310 E8000000 		call	fgets
 523      00
 524              	.LVL47:
 525              	.LBE126:
 526              	.LBE127:
 120:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   84      6520696E 
 527              		.loc 2 120 0
 528 0315 48894424 		movq	%rax, 24(%rsp)
 528      18
 529 031a E927FEFF 		jmp	.L77
 529      FF
 530              	.LVL48:
 531 031f 90       		.p2align 4,,10
 532              		.p2align 3
 533              	.L120:
 122:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   86              	.LC5:
 534              		.loc 2 122 0
 535 0320 488D7424 		leaq	24(%rsp), %rsi
 535      18
 536 0325 BA0A0000 		movl	$10, %edx
 536      00
 537 032a 4889C7   		movq	%rax, %rdi
 538 032d E8000000 		call	strtol
 538      00
 539              	.LVL49:
 540 0332 4189C6   		movl	%eax, %r14d
 541              	.LVL50:
 542 0335 488B4424 		movq	24(%rsp), %rax
 542      18
 543              	.LVL51:
 544 033a E907FEFF 		jmp	.L77
 544      FF
 545              	.LVL52:
 546 033f 90       		.p2align 4,,10
 547              		.p2align 3
 548              	.L86:
 549              	.LBB128:
 550              	.LBB129:
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 551              		.loc 5 84 0 discriminator 3
 552 0340 41C74510 		movl	$1, 16(%r13)
 552      01000000 
 553 0348 41B80100 		movl	$1, %r8d
 553      0000
 554 034e B9010000 		movl	$1, %ecx
 554      00
 555 0353 E95BFEFF 		jmp	.L31
 555      FF
 556              	.LVL53:
 557 0358 0F1F8400 		.p2align 4,,10
 557      00000000 
 558              		.p2align 3
 559              	.L117:
 560              	.LBE129:
 561              	.LBE128:
  86:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   56              	.LBB96:
 562              		.loc 2 86 0
 563 0360 4C89E7   		movq	%r12, %rdi
 564 0363 E8000000 		call	fclose
 564      00
 565              	.LVL54:
  87:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   57              	.LBB97:
 566              		.loc 2 87 0
 567 0368 4889EE   		movq	%rbp, %rsi
 568 036b BF000000 		movl	$.LC4, %edi
 568      00
 569 0370 31C0     		xorl	%eax, %eax
 570 0372 FF150000 		call	*_ZN2Fl5errorE(%rip)
 570      0000
 571              	.LVL55:
 572              	.L108:
 573              	.LBB130:
 574              	.LBB131:
 575              		.loc 5 96 0
 576 0378 41C74514 		movl	$-2, 20(%r13)
 576      FEFFFFFF 
 577 0380 E989FEFF 		jmp	.L4
 577      FF
 578              	.LVL56:
 579              		.p2align 4,,10
 580 0385 0F1F00   		.p2align 3
 581              	.L32:
 582              	.LBE131:
 583              	.LBE130:
 139:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  100              	.LFB182:
 584              		.loc 2 139 0
 585 0388 0FAFF7   		imull	%edi, %esi
 586 038b 410FAFF0 		imull	%r8d, %esi
 587 038f 4863FE   		movslq	%esi, %rdi
 588 0392 E8000000 		call	_Znam
 588      00
 589              	.LVL57:
 143:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3              	.Ltext0:
 590              		.loc 2 143 0
 591 0397 418B550C 		movl	12(%r13), %edx
 139:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  100              	.LFB182:
 592              		.loc 2 139 0
 593 039b 49894528 		movq	%rax, 40(%r13)
 140:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  101              		.file 2 "fltk-1.3.4-1/src/Fl_PNM_Image.cxx"
 594              		.loc 2 140 0
 595 039f 41C74530 		movl	$1, 48(%r13)
 595      01000000 
 596              	.LVL58:
 143:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3              	.Ltext0:
 597              		.loc 2 143 0
 598 03a7 85D2     		testl	%edx, %edx
 599 03a9 0F8E5103 		jle	.L33
 599      0000
 600 03af 4531FF   		xorl	%r15d, %r15d
 601              	.LVL59:
 602              		.p2align 4,,10
 603 03b2 660F1F44 		.p2align 3
 603      0000
 604              	.L34:
 605 03b8 418B6D08 		movl	8(%r13), %ebp
 606              	.LVL60:
 607 03bc 49635510 		movslq	16(%r13), %rdx
 608              	.LVL61:
 144:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_PNM
 609              		.loc 2 144 0
 610 03c0 89EB     		movl	%ebp, %ebx
 611 03c2 410FAFDF 		imull	%r15d, %ebx
 612 03c6 0FAFDA   		imull	%edx, %ebx
 613 03c9 4863DB   		movslq	%ebx, %rbx
 614 03cc 4801C3   		addq	%rax, %rbx
 615              	.LVL62:
 146:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    6:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    6              	.LCOLDB0:
 616              		.loc 2 146 0
 617 03cf 8B44240C 		movl	12(%rsp), %eax
 618 03d3 83F807   		cmpl	$7, %eax
 619 03d6 7728     		ja	.L36
 620 03d8 FF24C500 		jmp	*.L38(,%rax,8)
 620      000000
 621              		.section	.rodata._ZN12Fl_PNM_ImageC2EPKc,"a",@progbits
 622              		.align 8
 623              		.align 4
 624              	.L38:
 625 0000 00000000 		.quad	.L36
 625      00000000 
 626 0008 00000000 		.quad	.L48
 626      00000000 
 627 0010 00000000 		.quad	.L47
 627      00000000 
 628 0018 00000000 		.quad	.L46
 628      00000000 
 629 0020 00000000 		.quad	.L45
 629      00000000 
 630 0028 00000000 		.quad	.L42
 630      00000000 
 631 0030 00000000 		.quad	.L42
 631      00000000 
 632 0038 00000000 		.quad	.L44
 632      00000000 
 633              		.section	.text._ZN12Fl_PNM_ImageC2EPKc
 634 03df 90       		.p2align 4,,10
 635              		.p2align 3
 636              	.L42:
 180:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   40:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   23:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** #define Fl_PNM
 637              		.loc 2 180 0
 638 03e0 4181FEFF 		cmpl	$255, %r14d
 638      000000
 639 03e7 0F8F2303 		jg	.L69
 639      0000
 640              	.LVL63:
 641              	.LBB132:
 642              	.LBB133:
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
 643              		.loc 3 295 0
 644 03ed 4863F5   		movslq	%ebp, %rsi
 645              	.LVL64:
 646 03f0 4C89E1   		movq	%r12, %rcx
 647 03f3 4889DF   		movq	%rbx, %rdi
 648 03f6 E8000000 		call	fread
 648      00
 649              	.LVL65:
 650 03fb 0F1F4400 		.p2align 4,,10
 650      00
 651              		.p2align 3
 652              	.L36:
 653              	.LBE133:
 654              	.LBE132:
 143:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3              	.Ltext0:
 655              		.loc 2 143 0 discriminator 2
 656 0400 4183C701 		addl	$1, %r15d
 657              	.LVL66:
 658 0404 453B7D0C 		cmpl	12(%r13), %r15d
 659 0408 0F8DF202 		jge	.L33
 659      0000
 660 040e 498B4528 		movq	40(%r13), %rax
 661 0412 EBA4     		jmp	.L34
 662              	.LVL67:
 663              	.L124:
 143:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3              	.Ltext0:
 664              		.loc 2 143 0 is_stmt 0
 665 0414 4183C701 		addl	$1, %r15d
 666              	.LVL68:
 667 0418 453B7D0C 		cmpl	12(%r13), %r15d
 668 041c 0F8DDE02 		jge	.L33
 668      0000
 669 0422 418B6D08 		movl	8(%r13), %ebp
 670              	.LVL69:
 144:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_PNM
 671              		.loc 2 144 0 is_stmt 1
 672 0426 89EB     		movl	%ebp, %ebx
 673 0428 410FAFDF 		imull	%r15d, %ebx
 674 042c 410FAF5D 		imull	16(%r13), %ebx
 674      10
 675 0431 4863DB   		movslq	%ebx, %rbx
 676 0434 49035D28 		addq	40(%r13), %rbx
 677              	.LVL70:
 678 0438 0F1F8400 		.p2align 4,,10
 678      00000000 
 679              		.p2align 3
 680              	.L45:
 166:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   26:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    9:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // the file "C
 681              		.loc 2 166 0
 682 0440 4C89E7   		movq	%r12, %rdi
 683 0443 E8000000 		call	_IO_getc
 683      00
 684              	.LVL71:
 685 0448 85ED     		testl	%ebp, %ebp
 686 044a 7EB4     		jle	.L36
 687 044c BA80FFFF 		movl	$-128, %edx
 687      FF
 688              	.LVL72:
 689 0451 4883C301 		addq	$1, %rbx
 690              	.LVL73:
 167:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   27:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // file is mis
 691              		.loc 2 167 0
 692 0455 84D0     		testb	%dl, %al
 693 0457 7522     		jne	.L63
 694              	.LVL74:
 695 0459 0F1F8000 		.p2align 4,,10
 695      000000
 696              		.p2align 3
 697              	.L125:
 170:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   30:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 698              		.loc 2 170 0 discriminator 1
 699 0460 80FA01   		cmpb	$1, %dl
 167:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   27:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // file is mis
 700              		.loc 2 167 0 discriminator 1
 701 0463 C643FFFF 		movb	$-1, -1(%rbx)
 702              	.LVL75:
 170:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   30:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 703              		.loc 2 170 0 discriminator 1
 704 0467 741B     		je	.L65
 705              	.L126:
 706 0469 0FB6D2   		movzbl	%dl, %edx
 707 046c D1EA     		shrl	%edx
 708              	.LVL76:
 709              	.L66:
 710 046e 4883C301 		addq	$1, %rbx
 166:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   26:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    9:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // the file "C
 711              		.loc 2 166 0 discriminator 2
 712 0472 83ED01   		subl	$1, %ebp
 713              	.LVL77:
 714 0475 749D     		je	.L124
 715              	.LVL78:
 167:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   27:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   10:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // file is mis
 716              		.loc 2 167 0
 717 0477 84D0     		testb	%dl, %al
 718 0479 74E5     		je	.L125
 719              	.LVL79:
 720              	.L63:
 170:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   30:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 721              		.loc 2 170 0
 722 047b 80FA01   		cmpb	$1, %dl
 168:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   28:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   11:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 723              		.loc 2 168 0
 724 047e C643FF00 		movb	$0, -1(%rbx)
 725              	.LVL80:
 170:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   30:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   13:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 726              		.loc 2 170 0
 727 0482 75E5     		jne	.L126
 728              	.L65:
 729              	.LVL81:
 173:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   33:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   16:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //     http://
 730              		.loc 2 173 0
 731 0484 83FD01   		cmpl	$1, %ebp
 732 0487 0F8473FF 		je	.L36
 732      FFFF
 173:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   33:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   16:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //     http://
 733              		.loc 2 173 0 is_stmt 0 discriminator 1
 734 048d 4C89E7   		movq	%r12, %rdi
 735 0490 E8000000 		call	_IO_getc
 735      00
 736              	.LVL82:
 172:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   32:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   15:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 737              		.loc 2 172 0 is_stmt 1 discriminator 1
 738 0495 BA80FFFF 		movl	$-128, %edx
 738      FF
 739 049a EBD2     		jmp	.L66
 740              	.LVL83:
 741 049c 0F1F4000 		.p2align 4,,10
 742              		.p2align 3
 743              	.L129:
 143:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3              	.Ltext0:
 744              		.loc 2 143 0
 745 04a0 4183C701 		addl	$1, %r15d
 746              	.LVL84:
 747 04a4 453B7D0C 		cmpl	12(%r13), %r15d
 748 04a8 0F8D5202 		jge	.L33
 748      0000
 749 04ae 418B6D08 		movl	8(%r13), %ebp
 750              	.LVL85:
 144:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_PNM
 751              		.loc 2 144 0
 752 04b2 89EB     		movl	%ebp, %ebx
 753              	.LVL86:
 754 04b4 410FAFDF 		imull	%r15d, %ebx
 755 04b8 410FAF5D 		imull	16(%r13), %ebx
 755      10
 756 04bd 4863DB   		movslq	%ebx, %rbx
 757 04c0 49035D28 		addq	40(%r13), %rbx
 758              	.LVL87:
 759              	.L46:
 158:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   18:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    1:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 760              		.loc 2 158 0 discriminator 1
 761 04c4 85ED     		testl	%ebp, %ebp
 762 04c6 7F47     		jg	.L62
 763 04c8 E933FFFF 		jmp	.L36
 763      FF
 764 04cd 0F1F00   		.p2align 4,,10
 765              		.p2align 3
 766              	.L58:
 160:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   20:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 767              		.loc 2 160 0
 768 04d0 488D5424 		leaq	20(%rsp), %rdx
 768      14
 769 04d5 31C0     		xorl	%eax, %eax
 770 04d7 BE000000 		movl	$.LC6, %esi
 770      00
 771 04dc 4C89E7   		movq	%r12, %rdi
 772 04df E8000000 		call	fscanf
 772      00
 773              	.LVL88:
 774 04e4 83F801   		cmpl	$1, %eax
 775 04e7 0F84F301 		je	.L127
 775      0000
 776              	.L59:
 161:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   21:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // PNM image h
 777              		.loc 2 161 0
 778 04ed 488D5424 		leaq	20(%rsp), %rdx
 778      14
 779 04f2 31C0     		xorl	%eax, %eax
 780 04f4 BE000000 		movl	$.LC6, %esi
 780      00
 781 04f9 4C89E7   		movq	%r12, %rdi
 782 04fc E8000000 		call	fscanf
 782      00
 783              	.LVL89:
 784 0501 83F801   		cmpl	$1, %eax
 785 0504 0F84B601 		je	.L128
 785      0000
 786              	.L60:
 787              	.LVL90:
 158:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   18:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    1:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 788              		.loc 2 158 0 discriminator 2
 789 050a 83ED01   		subl	$1, %ebp
 790              	.LVL91:
 791 050d 7491     		je	.L129
 792              	.L62:
 159:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   19:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // "$Id: Fl_PN
 793              		.loc 2 159 0
 794 050f 488D5424 		leaq	20(%rsp), %rdx
 794      14
 795 0514 31C0     		xorl	%eax, %eax
 796 0516 BE000000 		movl	$.LC6, %esi
 796      00
 797 051b 4C89E7   		movq	%r12, %rdi
 798 051e E8000000 		call	fscanf
 798      00
 799              	.LVL92:
 800 0523 83F801   		cmpl	$1, %eax
 801 0526 75A8     		jne	.L58
 802              	.LVL93:
 159:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   19:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    2:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // "$Id: Fl_PN
 803              		.loc 2 159 0 is_stmt 0 discriminator 1
 804 0528 8B542414 		movl	20(%rsp), %edx
 805 052c 4883C301 		addq	$1, %rbx
 806              	.LVL94:
 807 0530 89D0     		movl	%edx, %eax
 808 0532 C1E008   		sall	$8, %eax
 809 0535 29D0     		subl	%edx, %eax
 810 0537 99       		cltd
 811 0538 41F7FE   		idivl	%r14d
 812 053b 8843FF   		movb	%al, -1(%rbx)
 813 053e EB90     		jmp	.L58
 814              	.LVL95:
 815              		.p2align 4,,10
 816              		.p2align 3
 817              	.L130:
 143:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3              	.Ltext0:
 818              		.loc 2 143 0 is_stmt 1
 819 0540 4183C701 		addl	$1, %r15d
 820              	.LVL96:
 821 0544 453B7D0C 		cmpl	12(%r13), %r15d
 822 0548 0F8DB201 		jge	.L33
 822      0000
 823 054e 418B6D08 		movl	8(%r13), %ebp
 144:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_PNM
 824              		.loc 2 144 0
 825 0552 89EB     		movl	%ebp, %ebx
 826              	.LVL97:
 827 0554 410FAFDF 		imull	%r15d, %ebx
 828 0558 410FAF5D 		imull	16(%r13), %ebx
 828      10
 829 055d 4863DB   		movslq	%ebx, %rbx
 830 0560 49035D28 		addq	40(%r13), %rbx
 831              	.LVL98:
 832              	.L44:
 192:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   52:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   21              	.LVL0:
 833              		.loc 2 192 0 discriminator 3
 834 0564 85ED     		testl	%ebp, %ebp
 835 0566 0F8E94FE 		jle	.L36
 835      FFFF
 836 056c 8D45FF   		leal	-1(%rbp), %eax
 837 056f 488D6C40 		leaq	3(%rax,%rax,2), %rbp
 837      03
 838              	.LVL99:
 839 0574 4801DD   		addq	%rbx, %rbp
 840 0577 660F1F84 		.p2align 4,,10
 840      00000000 
 840      00
 841              		.p2align 3
 842              	.L72:
 193:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  102              		.loc 2 52 0
 843              		.loc 2 193 0 discriminator 2
 844 0580 4C89E7   		movq	%r12, %rdi
 845 0583 4883C303 		addq	$3, %rbx
 846              	.LVL100:
 847 0587 E8000000 		call	_IO_getc
 847      00
 848              	.LVL101:
 849 058c 89C1     		movl	%eax, %ecx
 850              	.LVL102:
 195:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  104              	.LVL6:
 851              		.loc 2 195 0 discriminator 2
 852 058e C0E805   		shrb	$5, %al
 853              	.LVL103:
 854 0591 0FB6C0   		movzbl	%al, %eax
 855 0594 89C6     		movl	%eax, %esi
 856 0596 C1E608   		sall	$8, %esi
 857 0599 29C6     		subl	%eax, %esi
 858 059b B8932449 		movl	$-1840700269, %eax
 858      92
 859 05a0 F7EE     		imull	%esi
 196:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  105 0000 4157     		pushq	%r15
 860              		.loc 2 196 0 discriminator 2
 861 05a2 89C8     		movl	%ecx, %eax
 862 05a4 C1E802   		shrl	$2, %eax
 863 05a7 83E007   		andl	$7, %eax
 195:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  104              	.LVL6:
 864              		.loc 2 195 0 discriminator 2
 865 05aa 01F2     		addl	%esi, %edx
 866 05ac C1FE1F   		sarl	$31, %esi
 867 05af C1FA02   		sarl	$2, %edx
 868 05b2 29F2     		subl	%esi, %edx
 196:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  105 0000 4157     		pushq	%r15
 869              		.loc 2 196 0 discriminator 2
 870 05b4 89C6     		movl	%eax, %esi
 871 05b6 C1E608   		sall	$8, %esi
 195:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  104              	.LVL6:
 872              		.loc 2 195 0 discriminator 2
 873 05b9 8853FD   		movb	%dl, -3(%rbx)
 196:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  105 0000 4157     		pushq	%r15
 874              		.loc 2 196 0 discriminator 2
 875 05bc 29C6     		subl	%eax, %esi
 876 05be B8932449 		movl	$-1840700269, %eax
 876      92
 877 05c3 F7EE     		imull	%esi
 197:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  106              		.cfi_def_cfa_offset 16
 878              		.loc 2 197 0 discriminator 2
 879 05c5 89C8     		movl	%ecx, %eax
 880 05c7 B9550000 		movl	$85, %ecx
 880      00
 881 05cc 83E003   		andl	$3, %eax
 196:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  105 0000 4157     		pushq	%r15
 882              		.loc 2 196 0 discriminator 2
 883 05cf 01F2     		addl	%esi, %edx
 884 05d1 C1FE1F   		sarl	$31, %esi
 885 05d4 C1FA02   		sarl	$2, %edx
 886 05d7 29F2     		subl	%esi, %edx
 197:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  106              		.cfi_def_cfa_offset 16
 887              		.loc 2 197 0 discriminator 2
 888 05d9 0FAFC1   		imull	%ecx, %eax
 196:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  105 0000 4157     		pushq	%r15
 889              		.loc 2 196 0 discriminator 2
 890 05dc 8853FE   		movb	%dl, -2(%rbx)
 891              	.LVL104:
 192:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   52:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   21              	.LVL0:
 892              		.loc 2 192 0 discriminator 2
 893 05df 4839EB   		cmpq	%rbp, %rbx
 197:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****  106              		.cfi_def_cfa_offset 16
 894              		.loc 2 197 0 discriminator 2
 895 05e2 8843FF   		movb	%al, -1(%rbx)
 192:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   52:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   21              	.LVL0:
 896              		.loc 2 192 0 discriminator 2
 897 05e5 7599     		jne	.L72
 898 05e7 E954FFFF 		jmp	.L130
 898      FF
 899              	.LVL105:
 900 05ec 0F1F4000 		.p2align 4,,10
 901              		.p2align 3
 902              	.L131:
 143:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3              	.Ltext0:
 903              		.loc 2 143 0
 904 05f0 4183C701 		addl	$1, %r15d
 905              	.LVL106:
 906 05f4 45397D0C 		cmpl	%r15d, 12(%r13)
 907 05f8 0F8E0201 		jle	.L33
 907      0000
 908 05fe 418B6D08 		movl	8(%r13), %ebp
 909              	.LVL107:
 144:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_PNM
 910              		.loc 2 144 0
 911 0602 4489FB   		movl	%r15d, %ebx
 912              	.LVL108:
 913 0605 0FAFDD   		imull	%ebp, %ebx
 914 0608 410FAF5D 		imull	16(%r13), %ebx
 914      10
 915 060d 4863DB   		movslq	%ebx, %rbx
 916 0610 49035D28 		addq	40(%r13), %rbx
 917              	.LVL109:
 918              	.L47:
 153:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   13:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   13              		.section	.text._ZN12Fl_PNM_ImageD2E
 919              		.loc 2 153 0 discriminator 1
 920 0614 85ED     		testl	%ebp, %ebp
 921 0616 7F0D     		jg	.L57
 922 0618 E9E3FDFF 		jmp	.L36
 922      FF
 923 061d 0F1F00   		.p2align 4,,10
 924              		.p2align 3
 925              	.L55:
 926              	.LVL110:
 153:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   13:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   13              		.section	.text._ZN12Fl_PNM_ImageD2E
 927              		.loc 2 153 0 is_stmt 0 discriminator 2
 928 0620 83ED01   		subl	$1, %ebp
 929              	.LVL111:
 930 0623 74CB     		je	.L131
 931              	.L57:
 154:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   14:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   14              		.weak	_ZN12Fl_PNM_ImageD2Ev
 932              		.loc 2 154 0 is_stmt 1
 933 0625 488D5424 		leaq	20(%rsp), %rdx
 933      14
 934 062a 31C0     		xorl	%eax, %eax
 935 062c BE000000 		movl	$.LC6, %esi
 935      00
 936 0631 4C89E7   		movq	%r12, %rdi
 937 0634 E8000000 		call	fscanf
 937      00
 938              	.LVL112:
 939 0639 83F801   		cmpl	$1, %eax
 940 063c 75E2     		jne	.L55
 941              	.LVL113:
 154:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   14:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   14              		.weak	_ZN12Fl_PNM_ImageD2Ev
 942              		.loc 2 154 0 is_stmt 0 discriminator 1
 943 063e 8B542414 		movl	20(%rsp), %edx
 944 0642 4883C301 		addq	$1, %rbx
 945              	.LVL114:
 946 0646 89D0     		movl	%edx, %eax
 947 0648 C1E008   		sall	$8, %eax
 948 064b 29D0     		subl	%edx, %eax
 949 064d 99       		cltd
 950 064e 41F7FE   		idivl	%r14d
 951 0651 8843FF   		movb	%al, -1(%rbx)
 952 0654 EBCA     		jmp	.L55
 953 0656 662E0F1F 		.p2align 4,,10
 953      84000000 
 953      0000
 954              		.p2align 3
 955              	.L132:
 143:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3              	.Ltext0:
 956              		.loc 2 143 0 is_stmt 1
 957 0660 4183C701 		addl	$1, %r15d
 958              	.LVL115:
 959 0664 453B7D0C 		cmpl	12(%r13), %r15d
 960 0668 0F8D9200 		jge	.L33
 960      0000
 961 066e 418B6D08 		movl	8(%r13), %ebp
 962              	.LVL116:
 144:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4              		.section	.text.unlikely._ZN12Fl_PNM
 963              		.loc 2 144 0
 964 0672 89EB     		movl	%ebp, %ebx
 965              	.LVL117:
 966 0674 410FAFDF 		imull	%r15d, %ebx
 967 0678 410FAF5D 		imull	16(%r13), %ebx
 967      10
 968 067d 4863DB   		movslq	%ebx, %rbx
 969 0680 49035D28 		addq	40(%r13), %rbx
 970              	.LVL118:
 971              	.L48:
 148:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    8:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    8              	.LHOTB0:
 972              		.loc 2 148 0 discriminator 1
 973 0684 85ED     		testl	%ebp, %ebp
 974 0686 7F0D     		jg	.L54
 975 0688 E973FDFF 		jmp	.L36
 975      FF
 976 068d 0F1F00   		.p2align 4,,10
 977              		.p2align 3
 978              	.L52:
 979              	.LVL119:
 148:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    8:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    8              	.LHOTB0:
 980              		.loc 2 148 0 is_stmt 0 discriminator 2
 981 0690 83ED01   		subl	$1, %ebp
 982              	.LVL120:
 983 0693 74CB     		je	.L132
 984              	.L54:
 149:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    9:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    9              		.align 2
 985              		.loc 2 149 0 is_stmt 1
 986 0695 488D5424 		leaq	20(%rsp), %rdx
 986      14
 987 069a 31C0     		xorl	%eax, %eax
 988 069c BE000000 		movl	$.LC6, %esi
 988      00
 989 06a1 4C89E7   		movq	%r12, %rdi
 990 06a4 E8000000 		call	fscanf
 990      00
 991              	.LVL121:
 992 06a9 83F801   		cmpl	$1, %eax
 993 06ac 75E2     		jne	.L52
 994              	.LVL122:
 149:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    9:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    9              		.align 2
 995              		.loc 2 149 0 is_stmt 0 discriminator 1
 996 06ae 2B442414 		subl	20(%rsp), %eax
 997 06b2 4883C301 		addq	$1, %rbx
 998              	.LVL123:
 999 06b6 F7D8     		negl	%eax
 1000 06b8 8843FF   		movb	%al, -1(%rbx)
 1001 06bb EBD3     		jmp	.L52
 1002 06bd 0F1F00   		.p2align 4,,10
 1003              		.p2align 3
 1004              	.L128:
 1005              	.LVL124:
 161:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   21:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    4:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** // PNM image h
 1006              		.loc 2 161 0 is_stmt 1 discriminator 1
 1007 06c0 8B542414 		movl	20(%rsp), %edx
 1008 06c4 4883C301 		addq	$1, %rbx
 1009              	.LVL125:
 1010 06c8 89D0     		movl	%edx, %eax
 1011 06ca C1E008   		sall	$8, %eax
 1012 06cd 29D0     		subl	%edx, %eax
 1013 06cf 99       		cltd
 1014 06d0 41F7FE   		idivl	%r14d
 1015 06d3 8843FF   		movb	%al, -1(%rbx)
 1016 06d6 E92FFEFF 		jmp	.L60
 1016      FF
 1017 06db 0F1F4400 		.p2align 4,,10
 1017      00
 1018              		.p2align 3
 1019              	.L127:
 1020              	.LVL126:
 160:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   20:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****    3:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** //
 1021              		.loc 2 160 0 discriminator 1
 1022 06e0 8B542414 		movl	20(%rsp), %edx
 1023 06e4 4883C301 		addq	$1, %rbx
 1024              	.LVL127:
 1025 06e8 89D0     		movl	%edx, %eax
 1026 06ea C1E008   		sall	$8, %eax
 1027 06ed 29D0     		subl	%edx, %eax
 1028 06ef 99       		cltd
 1029 06f0 41F7FE   		idivl	%r14d
 1030 06f3 8843FF   		movb	%al, -1(%rbx)
 1031 06f6 E9F2FDFF 		jmp	.L59
 1031      FF
 1032              	.LVL128:
 1033 06fb 0F1F4400 		.p2align 4,,10
 1033      00
 1034              		.p2align 3
 1035              	.L33:
 203:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   53:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   22              	.LBB95:
 1036              		.loc 2 203 0
 1037 0700 4C89E7   		movq	%r12, %rdi
 1038 0703 E8000000 		call	fclose
 1038      00
 1039              	.LVL129:
 1040 0708 E901FBFF 		jmp	.L4
 1040      FF
 1041              	.LVL130:
 1042 070d 0F1F00   		.p2align 4,,10
 1043              		.p2align 3
 1044              	.L69:
 183:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   43:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** /**
 1045              		.loc 2 183 0
 1046 0710 0FAFD5   		imull	%ebp, %edx
 1047              	.LVL131:
 1048 0713 85D2     		testl	%edx, %edx
 1049 0715 0F8EE5FC 		jle	.L36
 1049      FFFF
 1050 071b 8D42FF   		leal	-1(%rdx), %eax
 1051 071e 488D4403 		leaq	1(%rbx,%rax), %rax
 1051      01
 1052 0723 48890424 		movq	%rax, (%rsp)
 1053              	.LVL132:
 1054 0727 660F1F84 		.p2align 4,,10
 1054      00000000 
 1054      00
 1055              		.p2align 3
 1056              	.L70:
 184:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   44:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   The Fl_PNM_I
 1057              		.loc 2 184 0 discriminator 2
 1058 0730 4C89E7   		movq	%r12, %rdi
 186:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   46:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   loads bitmap
 1059              		.loc 2 186 0 discriminator 2
 1060 0733 4883C301 		addq	$1, %rbx
 1061              	.LVL133:
 184:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   44:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   The Fl_PNM_I
 1062              		.loc 2 184 0 discriminator 2
 1063 0737 E8000000 		call	_IO_getc
 1063      00
 1064              	.LVL134:
 185:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   45:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   and drawing 
 1065              		.loc 2 185 0 discriminator 2
 1066 073c 4C89E7   		movq	%r12, %rdi
 184:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   44:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   27:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   The Fl_PNM_I
 1067              		.loc 2 184 0 discriminator 2
 1068 073f 0FB6E8   		movzbl	%al, %ebp
 1069 0742 896C2414 		movl	%ebp, 20(%rsp)
 185:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   45:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   and drawing 
 1070              		.loc 2 185 0 discriminator 2
 1071 0746 E8000000 		call	_IO_getc
 1071      00
 1072              	.LVL135:
 1073 074b 89E9     		movl	%ebp, %ecx
 1074 074d 0FB6D0   		movzbl	%al, %edx
 1075 0750 C1E108   		sall	$8, %ecx
 1076 0753 09D1     		orl	%edx, %ecx
 186:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   46:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   loads bitmap
 1077              		.loc 2 186 0 discriminator 2
 1078 0755 89C8     		movl	%ecx, %eax
 185:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   45:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   28:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   and drawing 
 1079              		.loc 2 185 0 discriminator 2
 1080 0757 894C2414 		movl	%ecx, 20(%rsp)
 186:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   46:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   loads bitmap
 1081              		.loc 2 186 0 discriminator 2
 1082 075b C1E008   		sall	$8, %eax
 1083 075e 29C8     		subl	%ecx, %eax
 1084 0760 99       		cltd
 1085 0761 41F7FE   		idivl	%r14d
 183:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   43:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** /**
 1086              		.loc 2 183 0 discriminator 2
 1087 0764 483B1C24 		cmpq	(%rsp), %rbx
 186:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   46:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   29:fltk-1.3.4-1/FL/Fl_PNM_Image.H ****   loads bitmap
 1088              		.loc 2 186 0 discriminator 2
 1089 0768 8843FF   		movb	%al, -1(%rbx)
 183:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   43:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   26:fltk-1.3.4-1/FL/Fl_PNM_Image.H **** /**
 1090              		.loc 2 183 0 discriminator 2
 1091 076b 75C3     		jne	.L70
 1092 076d E98EFCFF 		jmp	.L36
 1092      FF
 1093              	.LVL136:
 1094              		.p2align 4,,10
 1095 0772 660F1F44 		.p2align 3
 1095      0000
 1096              	.L118:
  97:fltk-1.3.4-1/src/Fl_PNM_Image.cxx ****   65              		.cfi_def_cfa_offset 8
 1097              		.loc 2 97 0 discriminator 1
 1098 0778 48C74424 		movq	$.LC2, 24(%rsp)
 1098      18000000 
 1098      00
 1099 0781 B8000000 		movl	$.LC2, %eax
 1099      00
 1100 0786 E94AF9FF 		jmp	.L14
 1100      FF
 1101              	.LVL137:
 1102              	.L122:
 1103              	.LBE134:
 1104              	.LBE139:
 1105              		.loc 2 204 0
 1106 078b E8000000 		call	__stack_chk_fail
 1106      00
 1107              	.LVL138:
 1108              		.cfi_endproc
 1109              	.LFE182:
 1111              		.section	.text.unlikely._ZN12Fl_PNM_ImageC2EPKc
 1112              	.LCOLDE7:
 1113              		.section	.text._ZN12Fl_PNM_ImageC2EPKc
 1114              	.LHOTE7:
 1115              		.globl	_ZN12Fl_PNM_ImageC1EPKc
 1116              		.set	_ZN12Fl_PNM_ImageC1EPKc,_ZN12Fl_PNM_ImageC2EPKc
 1117              		.weak	_ZTS12Fl_PNM_Image
 1118              		.section	.rodata._ZTS12Fl_PNM_Image,"aG",@progbits,_ZTS12Fl_PNM_Image,comdat
 1119              		.align 8
 1122              	_ZTS12Fl_PNM_Image:
 1123 0000 3132466C 		.string	"12Fl_PNM_Image"
 1123      5F504E4D 
 1123      5F496D61 
 1123      676500
 1124              		.weak	_ZTI12Fl_PNM_Image
 1125              		.section	.rodata._ZTI12Fl_PNM_Image,"aG",@progbits,_ZTI12Fl_PNM_Image,comdat
 1126              		.align 8
 1129              	_ZTI12Fl_PNM_Image:
 1130 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1130      00000000 
 1131 0008 00000000 		.quad	_ZTS12Fl_PNM_Image
 1131      00000000 
 1132 0010 00000000 		.quad	_ZTI12Fl_RGB_Image
 1132      00000000 
 1133              		.weak	_ZTV12Fl_PNM_Image
 1134              		.section	.rodata._ZTV12Fl_PNM_Image,"aG",@progbits,_ZTV12Fl_PNM_Image,comdat
 1135              		.align 8
 1138              	_ZTV12Fl_PNM_Image:
 1139 0000 00000000 		.quad	0
 1139      00000000 
 1140 0008 00000000 		.quad	_ZTI12Fl_PNM_Image
 1140      00000000 
 1141 0010 00000000 		.quad	_ZN12Fl_PNM_ImageD1Ev
 1141      00000000 
 1142 0018 00000000 		.quad	_ZN12Fl_PNM_ImageD0Ev
 1142      00000000 
 1143 0020 00000000 		.quad	_ZN12Fl_RGB_Image4copyEii
 1143      00000000 
 1144 0028 00000000 		.quad	_ZN12Fl_RGB_Image13color_averageEjf
 1144      00000000 
 1145 0030 00000000 		.quad	_ZN12Fl_RGB_Image10desaturateEv
 1145      00000000 
 1146 0038 00000000 		.quad	_ZN12Fl_RGB_Image5labelEP9Fl_Widget
 1146      00000000 
 1147 0040 00000000 		.quad	_ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item
 1147      00000000 
 1148 0048 00000000 		.quad	_ZN12Fl_RGB_Image4drawEiiiiii
 1148      00000000 
 1149 0050 00000000 		.quad	_ZN12Fl_RGB_Image7uncacheEv
 1149      00000000 
 1150              		.text
 1151              	.Letext0:
 1152              		.section	.text.unlikely._ZN12Fl_PNM_ImageD2Ev,"axG",@progbits,_ZN12Fl_PNM_ImageD5Ev,comdat
 1153              	.Letext_cold0:
 1154              		.file 6 "fltk-1.3.4-1/FL/fl_types.h"
 1155              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1156              		.file 8 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1157              		.file 9 "/usr/include/stdio.h"
 1158              		.file 10 "/usr/include/libio.h"
 1159              		.file 11 "fltk-1.3.4-1/FL/Enumerations.H"
 1160              		.file 12 "fltk-1.3.4-1/FL/fl_utf8.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_PNM_Image.cxx
     /tmp/ccWtidQV.s:16     .text._ZN12Fl_PNM_ImageD2Ev:0000000000000000 _ZN12Fl_PNM_ImageD2Ev
     /tmp/ccWtidQV.s:1138   .rodata._ZTV12Fl_PNM_Image:0000000000000000 _ZTV12Fl_PNM_Image
     /tmp/ccWtidQV.s:16     .text._ZN12Fl_PNM_ImageD2Ev:0000000000000000 _ZN12Fl_PNM_ImageD1Ev
     /tmp/ccWtidQV.s:46     .text._ZN12Fl_PNM_ImageD0Ev:0000000000000000 _ZN12Fl_PNM_ImageD0Ev
     /tmp/ccWtidQV.s:99     .text._ZN12Fl_PNM_ImageC2EPKc:0000000000000000 _ZN12Fl_PNM_ImageC2EPKc
     /tmp/ccWtidQV.s:99     .text._ZN12Fl_PNM_ImageC2EPKc:0000000000000000 _ZN12Fl_PNM_ImageC1EPKc
     /tmp/ccWtidQV.s:1122   .rodata._ZTS12Fl_PNM_Image:0000000000000000 _ZTS12Fl_PNM_Image
     /tmp/ccWtidQV.s:1129   .rodata._ZTI12Fl_PNM_Image:0000000000000000 _ZTI12Fl_PNM_Image
                           .group:0000000000000000 _ZN12Fl_PNM_ImageD5Ev
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
_ZN12Fl_RGB_ImageD2Ev
_ZdlPv
_ZN12Fl_RGB_ImageC2EPKhiiii
fl_fopen
fgets
strtol
_ZN12Fl_RGB_Image9max_size_E
_ZN2Fl7warningE
fclose
_ZN2Fl5errorE
_Znam
fread
_IO_getc
fscanf
__stack_chk_fail
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI12Fl_RGB_Image
_ZN12Fl_RGB_Image4copyEii
_ZN12Fl_RGB_Image13color_averageEjf
_ZN12Fl_RGB_Image10desaturateEv
_ZN12Fl_RGB_Image5labelEP9Fl_Widget
_ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item
_ZN12Fl_RGB_Image4drawEiiiiii
_ZN12Fl_RGB_Image7uncacheEv
