   1              		.file	"Fl_JPEG_Image.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely.init_source,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text.init_source,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely.init_source
  10              	.Ltext_cold0:
  11              		.section	.text.init_source
  13              	init_source:
  14              	.LFB177:
  15              		.file 1 "fltk-1.3.4-1/src/Fl_JPEG_Image.cxx"
   1:fltk-1.3.4-1/src/Fl_JPEG_Image.cxx **** ...
  16              		.loc 1 224 0
  17              		.cfi_startproc
  18              	.LVL0:
  19              		.loc 1 225 0
  20 0000 488B4728 		movq	40(%rdi), %rax
  21              	.LVL1:
  22              		.loc 1 226 0
  23 0004 488B5038 		movq	56(%rax), %rdx
  24 0008 48895040 		movq	%rdx, 64(%rax)
  25 000c C3       		ret
  26              		.cfi_endproc
  27              	.LFE177:
  29              		.section	.text.unlikely.init_source
  30              	.LCOLDE0:
  31              		.section	.text.init_source
  32              	.LHOTE0:
  33              		.section	.text.unlikely.fill_input_buffer,"ax",@progbits
  34              	.LCOLDB1:
  35              		.section	.text.fill_input_buffer,"ax",@progbits
  36              	.LHOTB1:
  37              		.p2align 4,,15
  39              	fill_input_buffer:
  40              	.LFB178:
  41              		.loc 1 229 0
  42              		.cfi_startproc
  43              	.LVL2:
  44              		.loc 1 230 0
  45 0000 488B4728 		movq	40(%rdi), %rax
  46              	.LVL3:
  47              		.loc 1 232 0
  48 0004 488B5040 		movq	64(%rax), %rdx
  49              		.loc 1 233 0
  50 0008 48C74008 		movq	$4096, 8(%rax)
  50      00100000 
  51              		.loc 1 232 0
  52 0010 488910   		movq	%rdx, (%rax)
  53              		.loc 1 234 0
  54 0013 4881C200 		addq	$4096, %rdx
  54      100000
  55 001a 48895040 		movq	%rdx, 64(%rax)
  56              		.loc 1 236 0
  57 001e B8010000 		movl	$1, %eax
  57      00
  58              	.LVL4:
  59 0023 C3       		ret
  60              		.cfi_endproc
  61              	.LFE178:
  63              		.section	.text.unlikely.fill_input_buffer
  64              	.LCOLDE1:
  65              		.section	.text.fill_input_buffer
  66              	.LHOTE1:
  67              		.section	.text.unlikely.term_source,"ax",@progbits
  68              	.LCOLDB2:
  69              		.section	.text.term_source,"ax",@progbits
  70              	.LHOTB2:
  71              		.p2align 4,,15
  73              	term_source:
  74              	.LFB179:
  75              		.loc 1 239 0
  76              		.cfi_startproc
  77              	.LVL5:
  78 0000 F3C3     		rep ret
  79              		.cfi_endproc
  80              	.LFE179:
  82              		.section	.text.unlikely.term_source
  83              	.LCOLDE2:
  84              		.section	.text.term_source
  85              	.LHOTE2:
  86              		.section	.text.unlikely.skip_input_data,"ax",@progbits
  87              	.LCOLDB3:
  88              		.section	.text.skip_input_data,"ax",@progbits
  89              	.LHOTB3:
  90              		.p2align 4,,15
  92              	skip_input_data:
  93              	.LFB180:
  94              		.loc 1 242 0
  95              		.cfi_startproc
  96              	.LVL6:
  97              		.loc 1 244 0
  98 0000 4885F6   		testq	%rsi, %rsi
  99 0003 7E4E     		jle	.L4
 100              		.loc 1 243 0
 101 0005 488B4F28 		movq	40(%rdi), %rcx
 102              		.loc 1 245 0
 103 0009 488B4108 		movq	8(%rcx), %rax
 104 000d 4839C6   		cmpq	%rax, %rsi
 105 0010 7E37     		jle	.L6
 106 0012 4889CA   		movq	%rcx, %rdx
 107 0015 EB0D     		jmp	.L7
 108              	.LVL7:
 109 0017 660F1F84 		.p2align 4,,10
 109      00000000 
 109      00
 110              		.p2align 3
 111              	.L9:
 112 0020 488B5728 		movq	40(%rdi), %rdx
 113              	.LVL8:
 114              	.L7:
 115              		.loc 1 246 0
 116 0024 4829C6   		subq	%rax, %rsi
 117              	.LVL9:
 118              	.LBB73:
 119              	.LBB74:
 120              		.loc 1 232 0
 121 0027 488B4240 		movq	64(%rdx), %rax
 122              		.loc 1 233 0
 123 002b 48C74208 		movq	$4096, 8(%rdx)
 123      00100000 
 124              	.LVL10:
 125              		.loc 1 232 0
 126 0033 488902   		movq	%rax, (%rdx)
 127              		.loc 1 234 0
 128 0036 48050010 		addq	$4096, %rax
 128      0000
 129 003c 48894240 		movq	%rax, 64(%rdx)
 130              	.LBE74:
 131              	.LBE73:
 132              		.loc 1 245 0
 133 0040 488B4108 		movq	8(%rcx), %rax
 134 0044 4839F0   		cmpq	%rsi, %rax
 135 0047 7CD7     		jl	.L9
 136              	.LVL11:
 137              	.L6:
 138              		.loc 1 249 0
 139 0049 480131   		addq	%rsi, (%rcx)
 140              		.loc 1 250 0
 141 004c 4829F0   		subq	%rsi, %rax
 142 004f 48894108 		movq	%rax, 8(%rcx)
 143              	.LVL12:
 144              	.L4:
 145 0053 F3C3     		rep ret
 146              		.cfi_endproc
 147              	.LFE180:
 149              		.section	.text.unlikely.skip_input_data
 150              	.LCOLDE3:
 151              		.section	.text.skip_input_data
 152              	.LHOTE3:
 153              		.section	.text.unlikely.fl_jpeg_error_handler,"ax",@progbits
 154              	.LCOLDB4:
 155              		.section	.text.fl_jpeg_error_handler,"ax",@progbits
 156              	.LHOTB4:
 157              		.p2align 4,,15
 159              	fl_jpeg_error_handler:
 160              	.LFB172:
 161              		.loc 1 74 0
 162              		.cfi_startproc
 163              	.LVL13:
 164 0000 4883EC08 		subq	$8, %rsp
 165              		.cfi_def_cfa_offset 16
 166              		.loc 1 75 0
 167 0004 488B3F   		movq	(%rdi), %rdi
 168              	.LVL14:
 169 0007 BE010000 		movl	$1, %esi
 169      00
 170 000c 4881C7A8 		addq	$168, %rdi
 170      000000
 171 0013 E8000000 		call	__longjmp_chk
 171      00
 172              	.LVL15:
 173              		.cfi_endproc
 174              	.LFE172:
 176              		.section	.text.unlikely.fl_jpeg_error_handler
 177              	.LCOLDE4:
 178              		.section	.text.fl_jpeg_error_handler
 179              	.LHOTE4:
 180              		.section	.text.unlikely._ZN13Fl_JPEG_ImageD2Ev,"axG",@progbits,_ZN13Fl_JPEG_ImageD5Ev,comdat
 181              		.align 2
 182              	.LCOLDB5:
 183              		.section	.text._ZN13Fl_JPEG_ImageD2Ev,"axG",@progbits,_ZN13Fl_JPEG_ImageD5Ev,comdat
 184              	.LHOTB5:
 185              		.align 2
 186              		.p2align 4,,15
 187              		.weak	_ZN13Fl_JPEG_ImageD2Ev
 189              	_ZN13Fl_JPEG_ImageD2Ev:
 190              	.LFB186:
 191              		.file 2 "fltk-1.3.4-1/FL/Fl_JPEG_Image.H"
   1:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** //
   2:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** // "$Id: Fl_JPEG_Image.H 10732 2015-05-23 23:42:26Z matt $"
   3:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** //
   4:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** // JPEG image header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** //
   6:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** //
   8:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** //
  12:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** //
  14:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** //
  16:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** //
  18:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** 
  19:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_JPEG_Image.H ****    Fl_JPEG_Image class . */
  21:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** 
  22:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** #ifndef Fl_JPEG_Image_H
  23:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** #define Fl_JPEG_Image_H
  24:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** #  include "Fl_Image.H"
  25:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** 
  26:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** /**
  27:fltk-1.3.4-1/FL/Fl_JPEG_Image.H ****  The Fl_JPEG_Image class supports loading, caching,
  28:fltk-1.3.4-1/FL/Fl_JPEG_Image.H ****  and drawing of Joint Photographic Experts Group (JPEG) File
  29:fltk-1.3.4-1/FL/Fl_JPEG_Image.H ****  Interchange Format (JFIF) images. The class supports grayscale
  30:fltk-1.3.4-1/FL/Fl_JPEG_Image.H ****  and color (RGB) JPEG image files.
  31:fltk-1.3.4-1/FL/Fl_JPEG_Image.H ****  */
  32:fltk-1.3.4-1/FL/Fl_JPEG_Image.H **** class FL_EXPORT Fl_JPEG_Image : public Fl_RGB_Image {
 192              		.loc 2 32 0
 193              		.cfi_startproc
 194              	.LVL16:
 195              	.LBB75:
 196              		.loc 2 32 0
 197 0000 48C70700 		movq	$_ZTV13Fl_JPEG_Image+16, (%rdi)
 197      000000
 198 0007 E9000000 		jmp	_ZN12Fl_RGB_ImageD2Ev
 198      00
 199              	.LVL17:
 200              	.LBE75:
 201              		.cfi_endproc
 202              	.LFE186:
 204              		.section	.text.unlikely._ZN13Fl_JPEG_ImageD2Ev,"axG",@progbits,_ZN13Fl_JPEG_ImageD5Ev,comdat
 205              	.LCOLDE5:
 206              		.section	.text._ZN13Fl_JPEG_ImageD2Ev,"axG",@progbits,_ZN13Fl_JPEG_ImageD5Ev,comdat
 207              	.LHOTE5:
 208              		.weak	_ZN13Fl_JPEG_ImageD1Ev
 209              		.set	_ZN13Fl_JPEG_ImageD1Ev,_ZN13Fl_JPEG_ImageD2Ev
 210              		.section	.text.unlikely._ZN13Fl_JPEG_ImageD0Ev,"axG",@progbits,_ZN13Fl_JPEG_ImageD5Ev,comdat
 211              		.align 2
 212              	.LCOLDB6:
 213              		.section	.text._ZN13Fl_JPEG_ImageD0Ev,"axG",@progbits,_ZN13Fl_JPEG_ImageD5Ev,comdat
 214              	.LHOTB6:
 215              		.align 2
 216              		.p2align 4,,15
 217              		.weak	_ZN13Fl_JPEG_ImageD0Ev
 219              	_ZN13Fl_JPEG_ImageD0Ev:
 220              	.LFB188:
 221              		.loc 2 32 0
 222              		.cfi_startproc
 223              	.LVL18:
 224 0000 53       		pushq	%rbx
 225              		.cfi_def_cfa_offset 16
 226              		.cfi_offset 3, -16
 227              		.loc 2 32 0
 228 0001 4889FB   		movq	%rdi, %rbx
 229              	.LBB76:
 230              	.LBB77:
 231 0004 48C70700 		movq	$_ZTV13Fl_JPEG_Image+16, (%rdi)
 231      000000
 232 000b E8000000 		call	_ZN12Fl_RGB_ImageD2Ev
 232      00
 233              	.LVL19:
 234              	.LBE77:
 235              	.LBE76:
 236 0010 4889DF   		movq	%rbx, %rdi
 237 0013 5B       		popq	%rbx
 238              		.cfi_def_cfa_offset 8
 239              	.LVL20:
 240 0014 E9000000 		jmp	_ZdlPv
 240      00
 241              	.LVL21:
 242              		.cfi_endproc
 243              	.LFE188:
 245              		.section	.text.unlikely._ZN13Fl_JPEG_ImageD0Ev,"axG",@progbits,_ZN13Fl_JPEG_ImageD5Ev,comdat
 246              	.LCOLDE6:
 247              		.section	.text._ZN13Fl_JPEG_ImageD0Ev,"axG",@progbits,_ZN13Fl_JPEG_ImageD5Ev,comdat
 248              	.LHOTE6:
 249              		.section	.text.unlikely.fl_jpeg_output_handler,"ax",@progbits
 250              	.LCOLDB7:
 251              		.section	.text.fl_jpeg_output_handler,"ax",@progbits
 252              	.LHOTB7:
 253              		.p2align 4,,15
 255              	fl_jpeg_output_handler:
 256              	.LFB198:
 257              		.cfi_startproc
 258 0000 F3C3     		rep ret
 259              		.cfi_endproc
 260              	.LFE198:
 262              		.section	.text.unlikely.fl_jpeg_output_handler
 263              	.LCOLDE7:
 264              		.section	.text.fl_jpeg_output_handler
 265              	.LHOTE7:
 266              		.section	.rodata.str1.1,"aMS",@progbits,1
 267              	.LC8:
 268 0000 726200   		.string	"rb"
 269              		.section	.rodata.str1.8,"aMS",@progbits,1
 270              		.align 8
 271              	.LC9:
 272 0000 4A504547 		.string	"JPEG file \"%s\" is too large or contains errors!\n"
 272      2066696C 
 272      65202225 
 272      73222069 
 272      7320746F 
 273              		.section	.text.unlikely._ZN13Fl_JPEG_ImageC2EPKc,"ax",@progbits
 274              		.align 2
 275              	.LCOLDB10:
 276              		.section	.text._ZN13Fl_JPEG_ImageC2EPKc,"ax",@progbits
 277              	.LHOTB10:
 278              		.align 2
 279              		.p2align 4,,15
 280              		.globl	_ZN13Fl_JPEG_ImageC2EPKc
 282              	_ZN13Fl_JPEG_ImageC2EPKc:
 283              	.LFB175:
 284              		.loc 1 99 0
 285              		.cfi_startproc
 286              	.LVL22:
 287              		.loc 1 99 0
 288 0000 4156     		pushq	%r14
 289              		.cfi_def_cfa_offset 16
 290              		.cfi_offset 14, -16
 291 0002 53       		pushq	%rbx
 292              		.cfi_def_cfa_offset 24
 293              		.cfi_offset 3, -24
 294              	.LBB78:
 295              		.loc 1 100 0
 296 0003 4531C9   		xorl	%r9d, %r9d
 297              	.LBE78:
 298              		.loc 1 99 0
 299 0006 4889FB   		movq	%rdi, %rbx
 300              	.LBB102:
 301              		.loc 1 100 0
 302 0009 31C9     		xorl	%ecx, %ecx
 303              	.LBE102:
 304              		.loc 1 99 0
 305 000b 4989F6   		movq	%rsi, %r14
 306 000e 4881EC58 		subq	$1112, %rsp
 306      040000
 307              		.cfi_def_cfa_offset 1136
 308              	.LBB103:
 309              		.loc 1 100 0
 310 0015 41B80300 		movl	$3, %r8d
 310      0000
 311              	.LBE103:
 312              		.loc 1 99 0
 313 001b 64488B14 		movq	%fs:40, %rdx
 313      25280000 
 313      00
 314 0024 48899424 		movq	%rdx, 1096(%rsp)
 314      48040000 
 315 002c 31D2     		xorl	%edx, %edx
 316 002e 48897424 		movq	%rsi, 24(%rsp)
 316      18
 317              	.LBB104:
 318              		.loc 1 100 0
 319 0033 31F6     		xorl	%esi, %esi
 320              	.LVL23:
 321              	.LBE104:
 322              		.loc 1 99 0
 323 0035 48897C24 		movq	%rdi, 8(%rsp)
 323      08
 324              	.LBB105:
 325              		.loc 1 100 0
 326 003a E8000000 		call	_ZN12Fl_RGB_ImageC2EPKhiiii
 326      00
 327              	.LVL24:
 328 003f 48C70300 		movq	$_ZTV13Fl_JPEG_Image+16, (%rbx)
 328      000000
 329              	.LBB79:
 330              		.loc 1 113 0
 331 0046 C7433000 		movl	$0, 48(%rbx)
 331      000000
 332              		.loc 1 117 0
 333 004d BE000000 		movl	$.LC8, %esi
 333      00
 334              		.loc 1 114 0
 335 0052 48C74328 		movq	$0, 40(%rbx)
 335      00000000 
 336              		.loc 1 117 0
 337 005a 4C89F7   		movq	%r14, %rdi
 338 005d E8000000 		call	fl_fopen
 338      00
 339              	.LVL25:
 340 0062 4885C0   		testq	%rax, %rax
 341 0065 48894424 		movq	%rax, 16(%rsp)
 341      10
 342              	.LVL26:
 343 006a 752C     		jne	.L17
 344              	.LVL27:
 345              	.LBB80:
 346              	.LBB81:
 347              		.file 3 "fltk-1.3.4-1/FL/Fl_Image.H"
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
 348              		.loc 3 96 0
 349 006c C74314FE 		movl	$-2, 20(%rbx)
 349      FFFFFF
 350              	.LVL28:
 351              	.L16:
 352              	.LBE81:
 353              	.LBE80:
 354              	.LBE79:
 355              	.LBE105:
 356              		.loc 1 199 0
 357 0073 488B8424 		movq	1096(%rsp), %rax
 357      48040000 
 358 007b 64483304 		xorq	%fs:40, %rax
 358      25280000 
 358      00
 359 0084 0F858B02 		jne	.L36
 359      0000
 360 008a 4881C458 		addq	$1112, %rsp
 360      040000
 361              		.cfi_remember_state
 362              		.cfi_def_cfa_offset 24
 363 0091 5B       		popq	%rbx
 364              		.cfi_def_cfa_offset 16
 365 0092 415E     		popq	%r14
 366              		.cfi_def_cfa_offset 8
 367              	.LVL29:
 368 0094 C3       		ret
 369              	.LVL30:
 370              		.p2align 4,,10
 371 0095 0F1F00   		.p2align 3
 372              	.L17:
 373              		.cfi_restore_state
 374              	.LBB106:
 375              	.LBB100:
 376              		.loc 1 123 0
 377 0098 488D7C24 		leaq	64(%rsp), %rdi
 377      40
 378 009d E8000000 		call	jpeg_std_error
 378      00
 379              	.LVL31:
 380              		.loc 1 128 0
 381 00a2 BF010000 		movl	$1, %edi
 381      00
 382              		.loc 1 123 0
 383 00a7 48898424 		movq	%rax, 432(%rsp)
 383      B0010000 
 384              		.loc 1 124 0
 385 00af 48C74424 		movq	$fl_jpeg_error_handler, 64(%rsp)
 385      40000000 
 385      00
 386              		.loc 1 125 0
 387 00b8 48C74424 		movq	$fl_jpeg_output_handler, 80(%rsp)
 387      50000000 
 387      00
 388              		.loc 1 128 0
 389 00c1 E8000000 		call	malloc
 389      00
 390              	.LVL32:
 391              		.loc 1 129 0
 392 00c6 BF010000 		movl	$1, %edi
 392      00
 393              		.loc 1 128 0
 394 00cb 4889C3   		movq	%rax, %rbx
 395              	.LVL33:
 396              		.loc 1 129 0
 397 00ce E8000000 		call	malloc
 397      00
 398              	.LVL34:
 399              		.loc 1 133 0
 400 00d3 488DBC24 		leaq	232(%rsp), %rdi
 400      E8000000 
 401              		.loc 1 130 0
 402 00db C6030A   		movb	$10, (%rbx)
 403              		.loc 1 131 0
 404 00de C6000A   		movb	$10, (%rax)
 405              		.loc 1 129 0
 406 00e1 48894424 		movq	%rax, 40(%rsp)
 406      28
 407              	.LVL35:
 408              		.loc 1 130 0
 409 00e6 48895C24 		movq	%rbx, 32(%rsp)
 409      20
 410              	.LVL36:
 411              		.loc 1 133 0
 412 00eb E8000000 		call	_setjmp
 412      00
 413              	.LVL37:
 414 00f0 85C0     		testl	%eax, %eax
 415 00f2 0F84C800 		je	.L33
 415      0000
 416              		.loc 1 136 0
 417 00f8 31C0     		xorl	%eax, %eax
 418 00fa 488B7424 		movq	24(%rsp), %rsi
 418      18
 419 00ff BF000000 		movl	$.LC9, %edi
 419      00
 420 0104 FF150000 		call	*_ZN2Fl7warningE(%rip)
 420      0000
 421              	.LVL38:
 422              		.loc 1 139 0
 423 010a 488B4C24 		movq	32(%rsp), %rcx
 423      20
 424 010f 0FB601   		movzbl	(%rcx), %eax
 425 0112 8D50FF   		leal	-1(%rax), %edx
 426 0115 84C0     		testb	%al, %al
 427 0117 8811     		movb	%dl, (%rcx)
 428 0119 7E19     		jle	.L25
 429              		.loc 1 139 0 is_stmt 0 discriminator 1
 430 011b 488B4424 		movq	8(%rsp), %rax
 430      08
 431 0120 48837828 		cmpq	$0, 40(%rax)
 431      00
 432 0125 740D     		je	.L25
 433              		.loc 1 140 0 is_stmt 1
 434 0127 488DBC24 		leaq	432(%rsp), %rdi
 434      B0010000 
 435 012f E8000000 		call	jpeg_finish_decompress
 435      00
 436              	.LVL39:
 437              	.L25:
 438              		.loc 1 141 0
 439 0134 488B4C24 		movq	40(%rsp), %rcx
 439      28
 440 0139 0FB601   		movzbl	(%rcx), %eax
 441 013c 8D50FF   		leal	-1(%rax), %edx
 442 013f 84C0     		testb	%al, %al
 443 0141 8811     		movb	%dl, (%rcx)
 444 0143 7E0D     		jle	.L23
 445              		.loc 1 142 0
 446 0145 488DBC24 		leaq	432(%rsp), %rdi
 446      B0010000 
 447 014d E8000000 		call	jpeg_destroy_decompress
 447      00
 448              	.LVL40:
 449              	.L23:
 450              		.loc 1 144 0
 451 0152 488B7C24 		movq	16(%rsp), %rdi
 451      10
 452 0157 E8000000 		call	fclose
 452      00
 453              	.LVL41:
 454              	.LBB82:
 455              	.LBB83:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 456              		.loc 3 76 0
 457 015c 488B4424 		movq	8(%rsp), %rax
 457      08
 458              	.LBE83:
 459              	.LBE82:
 460              		.loc 1 150 0
 461 0161 488B7828 		movq	40(%rax), %rdi
 462              	.LBB85:
 463              	.LBB84:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 464              		.loc 3 76 0
 465 0165 C7400800 		movl	$0, 8(%rax)
 465      000000
 466              	.LVL42:
 467              	.LBE84:
 468              	.LBE85:
 469              	.LBB86:
 470              	.LBB87:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 471              		.loc 3 80 0
 472 016c C7400C00 		movl	$0, 12(%rax)
 472      000000
 473              	.LVL43:
 474              	.LBE87:
 475              	.LBE86:
 476              	.LBB88:
 477              	.LBB89:
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 478              		.loc 3 84 0
 479 0173 C7401000 		movl	$0, 16(%rax)
 479      000000
 480              	.LVL44:
 481              	.LBE89:
 482              	.LBE88:
 483              		.loc 1 150 0
 484 017a 4885FF   		testq	%rdi, %rdi
 485 017d 7419     		je	.L27
 486              		.loc 1 151 0 discriminator 1
 487 017f E8000000 		call	_ZdaPv
 487      00
 488              	.LVL45:
 489              		.loc 1 152 0 discriminator 1
 490 0184 488B4424 		movq	8(%rsp), %rax
 490      08
 491 0189 48C74028 		movq	$0, 40(%rax)
 491      00000000 
 492              		.loc 1 153 0 discriminator 1
 493 0191 C7403000 		movl	$0, 48(%rax)
 493      000000
 494              	.L27:
 495              		.loc 1 156 0
 496 0198 488B7C24 		movq	40(%rsp), %rdi
 496      28
 497 019d E8000000 		call	free
 497      00
 498              	.LVL46:
 499              		.loc 1 157 0
 500 01a2 488B7C24 		movq	32(%rsp), %rdi
 500      20
 501 01a7 E8000000 		call	free
 501      00
 502              	.LVL47:
 503              	.LBB90:
 504              	.LBB91:
 505              		.loc 3 96 0
 506 01ac 488B4424 		movq	8(%rsp), %rax
 506      08
 507 01b1 C74014FD 		movl	$-3, 20(%rax)
 507      FFFFFF
 508 01b8 E9B6FEFF 		jmp	.L16
 508      FF
 509              	.LVL48:
 510 01bd 0F1F00   		.p2align 4,,10
 511              		.p2align 3
 512              	.L33:
 513              	.LBE91:
 514              	.LBE90:
 515              		.loc 1 163 0
 516 01c0 488D9C24 		leaq	432(%rsp), %rbx
 516      B0010000 
 517 01c8 BA980200 		movl	$664, %edx
 517      00
 518 01cd BE5A0000 		movl	$90, %esi
 518      00
 519 01d2 4889DF   		movq	%rbx, %rdi
 520 01d5 E8000000 		call	jpeg_CreateDecompress
 520      00
 521              	.LVL49:
 522              		.loc 1 164 0
 523 01da 488B7424 		movq	16(%rsp), %rsi
 523      10
 524 01df 4889DF   		movq	%rbx, %rdi
 525 01e2 E8000000 		call	jpeg_stdio_src
 525      00
 526              	.LVL50:
 527              		.loc 1 165 0
 528 01e7 BE010000 		movl	$1, %esi
 528      00
 529 01ec 4889DF   		movq	%rbx, %rdi
 530 01ef E8000000 		call	jpeg_read_header
 530      00
 531              	.LVL51:
 532              		.loc 1 172 0
 533 01f4 4889DF   		movq	%rbx, %rdi
 534              		.loc 1 167 0
 535 01f7 C784241C 		movl	$0, 540(%rsp)
 535      02000000 
 535      000000
 536              		.loc 1 168 0
 537 0202 C78424F0 		movl	$2, 496(%rsp)
 537      01000002 
 537      000000
 538              		.loc 1 169 0
 539 020d C7842440 		movl	$3, 576(%rsp)
 539      02000003 
 539      000000
 540              		.loc 1 170 0
 541 0218 C7842444 		movl	$3, 580(%rsp)
 541      02000003 
 541      000000
 542              		.loc 1 172 0
 543 0223 E8000000 		call	jpeg_calc_output_dimensions
 543      00
 544              	.LVL52:
 545              		.loc 1 174 0
 546 0228 4863B424 		movslq	568(%rsp), %rsi
 546      38020000 
 547              	.LBB92:
 548              	.LBB93:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 549              		.loc 3 76 0
 550 0230 488B4C24 		movq	8(%rsp), %rcx
 550      08
 551              	.LBE93:
 552              	.LBE92:
 553              		.loc 1 175 0
 554 0235 8B94243C 		movl	572(%rsp), %edx
 554      020000
 555              	.LBB95:
 556              	.LBB94:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 557              		.loc 3 76 0
 558 023c 4889C8   		movq	%rcx, %rax
 559 023f 897008   		movl	%esi, 8(%rax)
 560              	.LBE94:
 561              	.LBE95:
 562              		.loc 1 176 0
 563 0242 8B842444 		movl	580(%rsp), %eax
 563      020000
 564              		.loc 1 174 0
 565 0249 4889F7   		movq	%rsi, %rdi
 566              	.LVL53:
 567              	.LBB96:
 568              	.LBB97:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 569              		.loc 3 80 0
 570 024c 89510C   		movl	%edx, 12(%rcx)
 571              	.LVL54:
 572              	.LBE97:
 573              	.LBE96:
 574              	.LBB98:
 575              	.LBB99:
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 576              		.loc 3 84 0
 577 024f 894110   		movl	%eax, 16(%rcx)
 578              	.LVL55:
 579              	.LBE99:
 580              	.LBE98:
 581              		.loc 1 178 0
 582 0252 4863CA   		movslq	%edx, %rcx
 583              	.LVL56:
 584 0255 480FAFCE 		imulq	%rsi, %rcx
 585 0259 4863F0   		movslq	%eax, %rsi
 586 025c 480FAFCE 		imulq	%rsi, %rcx
 587 0260 48390D00 		cmpq	%rcx, _ZN12Fl_RGB_Image9max_size_E(%rip)
 587      000000
 588 0267 0F82AD00 		jb	.L37
 588      0000
 589              	.LVL57:
 590              		.loc 1 179 0
 591 026d 0FAFFA   		imull	%edx, %edi
 592 0270 0FAFC7   		imull	%edi, %eax
 593 0273 4863F8   		movslq	%eax, %rdi
 594 0276 E8000000 		call	_Znam
 594      00
 595              	.LVL58:
 596 027b 488B5424 		movq	8(%rsp), %rdx
 596      08
 597              		.loc 1 182 0
 598 0280 4889DF   		movq	%rbx, %rdi
 599              		.loc 1 179 0
 600 0283 48894228 		movq	%rax, 40(%rdx)
 601              		.loc 1 180 0
 602 0287 C7423001 		movl	$1, 48(%rdx)
 602      000000
 603              		.loc 1 182 0
 604 028e E8000000 		call	jpeg_start_decompress
 604      00
 605              	.LVL59:
 606 0293 EB33     		jmp	.L30
 607              		.p2align 4,,10
 608 0295 0F1F00   		.p2align 3
 609              	.L38:
 610              		.loc 1 187 0
 611 0298 0FAF8424 		imull	568(%rsp), %eax
 611      38020000 
 612 02a0 488B4C24 		movq	8(%rsp), %rcx
 612      08
 613              		.loc 1 188 0
 614 02a5 488D7424 		leaq	56(%rsp), %rsi
 614      38
 615 02aa BA010000 		movl	$1, %edx
 615      00
 616 02af 4889DF   		movq	%rbx, %rdi
 617              		.loc 1 187 0
 618 02b2 0FAF8424 		imull	580(%rsp), %eax
 618      44020000 
 619 02ba 48034128 		addq	40(%rcx), %rax
 620 02be 48894424 		movq	%rax, 56(%rsp)
 620      38
 621              		.loc 1 188 0
 622 02c3 E8000000 		call	jpeg_read_scanlines
 622      00
 623              	.LVL60:
 624              	.L30:
 625              		.loc 1 184 0
 626 02c8 8B842458 		movl	600(%rsp), %eax
 626      020000
 627 02cf 3B84243C 		cmpl	572(%rsp), %eax
 627      020000
 628 02d6 72C0     		jb	.L38
 629              		.loc 1 191 0
 630 02d8 488DBC24 		leaq	432(%rsp), %rdi
 630      B0010000 
 631 02e0 E8000000 		call	jpeg_finish_decompress
 631      00
 632              	.LVL61:
 633              		.loc 1 192 0
 634 02e5 488DBC24 		leaq	432(%rsp), %rdi
 634      B0010000 
 635 02ed E8000000 		call	jpeg_destroy_decompress
 635      00
 636              	.LVL62:
 637              		.loc 1 194 0
 638 02f2 488B7C24 		movq	40(%rsp), %rdi
 638      28
 639 02f7 E8000000 		call	free
 639      00
 640              	.LVL63:
 641              		.loc 1 195 0
 642 02fc 488B7C24 		movq	32(%rsp), %rdi
 642      20
 643 0301 E8000000 		call	free
 643      00
 644              	.LVL64:
 645              		.loc 1 197 0
 646 0306 488B7C24 		movq	16(%rsp), %rdi
 646      10
 647 030b E8000000 		call	fclose
 647      00
 648              	.LVL65:
 649 0310 E95EFDFF 		jmp	.L16
 649      FF
 650              	.LVL66:
 651              	.L36:
 652              	.LBE100:
 653              	.LBE106:
 654              		.loc 1 199 0
 655 0315 E8000000 		call	__stack_chk_fail
 655      00
 656              	.LVL67:
 657              	.L37:
 658              	.LBB107:
 659              	.LBB101:
 660              		.loc 1 178 0 discriminator 5
 661 031a 488DBC24 		leaq	232(%rsp), %rdi
 661      E8000000 
 662 0322 BE010000 		movl	$1, %esi
 662      00
 663 0327 E8000000 		call	__longjmp_chk
 663      00
 664              	.LVL68:
 665              	.LBE101:
 666              	.LBE107:
 667              		.cfi_endproc
 668              	.LFE175:
 670              		.section	.text.unlikely._ZN13Fl_JPEG_ImageC2EPKc
 671              	.LCOLDE10:
 672              		.section	.text._ZN13Fl_JPEG_ImageC2EPKc
 673              	.LHOTE10:
 674              		.globl	_ZN13Fl_JPEG_ImageC1EPKc
 675              		.set	_ZN13Fl_JPEG_ImageC1EPKc,_ZN13Fl_JPEG_ImageC2EPKc
 676              		.section	.rodata.str1.8
 677 0031 00000000 		.align 8
 677      000000
 678              	.LC11:
 679 0038 4A504547 		.string	"JPEG data is too large or contains errors!\n"
 679      20646174 
 679      61206973 
 679      20746F6F 
 679      206C6172 
 680              		.section	.text.unlikely._ZN13Fl_JPEG_ImageC2EPKcPKh,"ax",@progbits
 681              		.align 2
 682              	.LCOLDB12:
 683              		.section	.text._ZN13Fl_JPEG_ImageC2EPKcPKh,"ax",@progbits
 684              	.LHOTB12:
 685              		.align 2
 686              		.p2align 4,,15
 687              		.globl	_ZN13Fl_JPEG_ImageC2EPKcPKh
 689              	_ZN13Fl_JPEG_ImageC2EPKcPKh:
 690              	.LFB183:
 691              		.loc 1 294 0
 692              		.cfi_startproc
 693              	.LVL69:
 694 0000 53       		pushq	%rbx
 695              		.cfi_def_cfa_offset 16
 696              		.cfi_offset 3, -16
 697              	.LBB128:
 698              		.loc 1 295 0
 699 0001 4531C9   		xorl	%r9d, %r9d
 700 0004 41B80300 		movl	$3, %r8d
 700      0000
 701 000a 31C9     		xorl	%ecx, %ecx
 702              	.LBE128:
 703              		.loc 1 294 0
 704 000c 4881EC50 		subq	$1104, %rsp
 704      040000
 705              		.cfi_def_cfa_offset 1120
 706              		.loc 1 294 0
 707 0013 48897424 		movq	%rsi, 40(%rsp)
 707      28
 708 0018 48895424 		movq	%rdx, 32(%rsp)
 708      20
 709              	.LBB154:
 710              		.loc 1 295 0
 711 001d 31F6     		xorl	%esi, %esi
 712              	.LVL70:
 713 001f 31D2     		xorl	%edx, %edx
 714              	.LVL71:
 715              	.LBE154:
 716              		.loc 1 294 0
 717 0021 48897C24 		movq	%rdi, 8(%rsp)
 717      08
 718 0026 64488B1C 		movq	%fs:40, %rbx
 718      25280000 
 718      00
 719 002f 48899C24 		movq	%rbx, 1096(%rsp)
 719      48040000 
 720 0037 31DB     		xorl	%ebx, %ebx
 721              	.LBB155:
 722              		.loc 1 295 0
 723 0039 4889FB   		movq	%rdi, %rbx
 724 003c E8000000 		call	_ZN12Fl_RGB_ImageC2EPKhiiii
 724      00
 725              	.LVL72:
 726              	.LBB129:
 727              		.loc 1 311 0
 728 0041 488D7C24 		leaq	64(%rsp), %rdi
 728      40
 729              	.LBE129:
 730              		.loc 1 295 0
 731 0046 48C70300 		movq	$_ZTV13Fl_JPEG_Image+16, (%rbx)
 731      000000
 732              	.LBB152:
 733              		.loc 1 307 0
 734 004d C7433000 		movl	$0, 48(%rbx)
 734      000000
 735              		.loc 1 308 0
 736 0054 48C74328 		movq	$0, 40(%rbx)
 736      00000000 
 737              		.loc 1 311 0
 738 005c E8000000 		call	jpeg_std_error
 738      00
 739              	.LVL73:
 740              		.loc 1 316 0
 741 0061 BF010000 		movl	$1, %edi
 741      00
 742              		.loc 1 311 0
 743 0066 48898424 		movq	%rax, 432(%rsp)
 743      B0010000 
 744              		.loc 1 312 0
 745 006e 48C74424 		movq	$fl_jpeg_error_handler, 64(%rsp)
 745      40000000 
 745      00
 746              		.loc 1 313 0
 747 0077 48C74424 		movq	$fl_jpeg_output_handler, 80(%rsp)
 747      50000000 
 747      00
 748              		.loc 1 316 0
 749 0080 E8000000 		call	malloc
 749      00
 750              	.LVL74:
 751              		.loc 1 317 0
 752 0085 BF010000 		movl	$1, %edi
 752      00
 753              		.loc 1 316 0
 754 008a 4889C3   		movq	%rax, %rbx
 755              	.LVL75:
 756              		.loc 1 317 0
 757 008d E8000000 		call	malloc
 757      00
 758              	.LVL76:
 759              		.loc 1 321 0
 760 0092 488DBC24 		leaq	232(%rsp), %rdi
 760      E8000000 
 761              		.loc 1 318 0
 762 009a C6030A   		movb	$10, (%rbx)
 763              		.loc 1 319 0
 764 009d C6000A   		movb	$10, (%rax)
 765              		.loc 1 317 0
 766 00a0 48894424 		movq	%rax, 24(%rsp)
 766      18
 767              	.LVL77:
 768              		.loc 1 318 0
 769 00a5 48895C24 		movq	%rbx, 16(%rsp)
 769      10
 770              	.LVL78:
 771              		.loc 1 321 0
 772 00aa E8000000 		call	_setjmp
 772      00
 773              	.LVL79:
 774 00af 85C0     		testl	%eax, %eax
 775 00b1 0F84B100 		je	.L59
 775      0000
 776              		.loc 1 324 0
 777 00b7 31C0     		xorl	%eax, %eax
 778 00b9 BF000000 		movl	$.LC11, %edi
 778      00
 779 00be FF150000 		call	*_ZN2Fl7warningE(%rip)
 779      0000
 780              	.LVL80:
 781              		.loc 1 327 0
 782 00c4 488B5C24 		movq	16(%rsp), %rbx
 782      10
 783 00c9 0FB603   		movzbl	(%rbx), %eax
 784 00cc 8D50FF   		leal	-1(%rax), %edx
 785 00cf 84C0     		testb	%al, %al
 786 00d1 8813     		movb	%dl, (%rbx)
 787 00d3 7E19     		jle	.L46
 788              		.loc 1 327 0 is_stmt 0 discriminator 1
 789 00d5 488B4424 		movq	8(%rsp), %rax
 789      08
 790 00da 48837828 		cmpq	$0, 40(%rax)
 790      00
 791 00df 740D     		je	.L46
 792              		.loc 1 328 0 is_stmt 1
 793 00e1 488DBC24 		leaq	432(%rsp), %rdi
 793      B0010000 
 794 00e9 E8000000 		call	jpeg_finish_decompress
 794      00
 795              	.LVL81:
 796              	.L46:
 797              		.loc 1 329 0
 798 00ee 488B5C24 		movq	24(%rsp), %rbx
 798      18
 799 00f3 0FB603   		movzbl	(%rbx), %eax
 800 00f6 8D50FF   		leal	-1(%rax), %edx
 801 00f9 84C0     		testb	%al, %al
 802 00fb 8813     		movb	%dl, (%rbx)
 803 00fd 7E0D     		jle	.L44
 804              		.loc 1 330 0
 805 00ff 488DBC24 		leaq	432(%rsp), %rdi
 805      B0010000 
 806 0107 E8000000 		call	jpeg_destroy_decompress
 806      00
 807              	.LVL82:
 808              	.L44:
 809              	.LBB130:
 810              	.LBB131:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 811              		.loc 3 76 0
 812 010c 488B4424 		movq	8(%rsp), %rax
 812      08
 813              	.LBE131:
 814              	.LBE130:
 815              		.loc 1 336 0
 816 0111 488B7828 		movq	40(%rax), %rdi
 817              	.LBB133:
 818              	.LBB132:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 819              		.loc 3 76 0
 820 0115 C7400800 		movl	$0, 8(%rax)
 820      000000
 821              	.LVL83:
 822              	.LBE132:
 823              	.LBE133:
 824              	.LBB134:
 825              	.LBB135:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 826              		.loc 3 80 0
 827 011c C7400C00 		movl	$0, 12(%rax)
 827      000000
 828              	.LVL84:
 829              	.LBE135:
 830              	.LBE134:
 831              	.LBB136:
 832              	.LBB137:
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 833              		.loc 3 84 0
 834 0123 C7401000 		movl	$0, 16(%rax)
 834      000000
 835              	.LVL85:
 836              	.LBE137:
 837              	.LBE136:
 838              		.loc 1 336 0
 839 012a 4885FF   		testq	%rdi, %rdi
 840 012d 7419     		je	.L56
 841              		.loc 1 337 0 discriminator 1
 842 012f E8000000 		call	_ZdaPv
 842      00
 843              	.LVL86:
 844              		.loc 1 338 0 discriminator 1
 845 0134 488B4424 		movq	8(%rsp), %rax
 845      08
 846 0139 48C74028 		movq	$0, 40(%rax)
 846      00000000 
 847              		.loc 1 339 0 discriminator 1
 848 0141 C7403000 		movl	$0, 48(%rax)
 848      000000
 849              	.L56:
 850              		.loc 1 342 0
 851 0148 488B7C24 		movq	24(%rsp), %rdi
 851      18
 852 014d E8000000 		call	free
 852      00
 853              	.LVL87:
 854              		.loc 1 343 0
 855 0152 488B7C24 		movq	16(%rsp), %rdi
 855      10
 856 0157 E8000000 		call	free
 856      00
 857              	.LVL88:
 858 015c E9DF0100 		jmp	.L39
 858      00
 859              	.LVL89:
 860              		.p2align 4,,10
 861 0161 0F1F8000 		.p2align 3
 861      000000
 862              	.L59:
 863              		.loc 1 348 0
 864 0168 488D9C24 		leaq	432(%rsp), %rbx
 864      B0010000 
 865 0170 BA980200 		movl	$664, %edx
 865      00
 866 0175 BE5A0000 		movl	$90, %esi
 866      00
 867 017a 4889DF   		movq	%rbx, %rdi
 868 017d E8000000 		call	jpeg_CreateDecompress
 868      00
 869              	.LVL90:
 870              	.LBB138:
 871              	.LBB139:
 872              		.loc 1 259 0
 873 0182 BF480000 		movl	$72, %edi
 873      00
 874 0187 E8000000 		call	malloc
 874      00
 875              	.LVL91:
 876              		.loc 1 268 0
 877 018c 488B5424 		movq	32(%rsp), %rdx
 877      20
 878              	.LBE139:
 879              	.LBE138:
 880              		.loc 1 350 0
 881 0191 BE010000 		movl	$1, %esi
 881      00
 882 0196 4889DF   		movq	%rbx, %rdi
 883              	.LBB141:
 884              	.LBB140:
 885              		.loc 1 261 0
 886 0199 48C74010 		movq	$init_source, 16(%rax)
 886      00000000 
 887              		.loc 1 262 0
 888 01a1 48C74018 		movq	$fill_input_buffer, 24(%rax)
 888      00000000 
 889              		.loc 1 263 0
 890 01a9 48C74020 		movq	$skip_input_data, 32(%rax)
 890      00000000 
 891              		.loc 1 264 0
 892 01b1 48C74028 		movq	$jpeg_resync_to_restart, 40(%rax)
 892      00000000 
 893              		.loc 1 268 0
 894 01b9 48895038 		movq	%rdx, 56(%rax)
 895              		.loc 1 269 0
 896 01bd 48895040 		movq	%rdx, 64(%rax)
 897              		.loc 1 265 0
 898 01c1 48C74030 		movq	$term_source, 48(%rax)
 898      00000000 
 899              		.loc 1 266 0
 900 01c9 48C74008 		movq	$0, 8(%rax)
 900      00000000 
 901              		.loc 1 267 0
 902 01d1 48C70000 		movq	$0, (%rax)
 902      000000
 903              		.loc 1 259 0
 904 01d8 48898424 		movq	%rax, 472(%rsp)
 904      D8010000 
 905              	.LVL92:
 906              	.LBE140:
 907              	.LBE141:
 908              		.loc 1 350 0
 909 01e0 E8000000 		call	jpeg_read_header
 909      00
 910              	.LVL93:
 911              		.loc 1 357 0
 912 01e5 4889DF   		movq	%rbx, %rdi
 913              		.loc 1 352 0
 914 01e8 C784241C 		movl	$0, 540(%rsp)
 914      02000000 
 914      000000
 915              		.loc 1 353 0
 916 01f3 C78424F0 		movl	$2, 496(%rsp)
 916      01000002 
 916      000000
 917              		.loc 1 354 0
 918 01fe C7842440 		movl	$3, 576(%rsp)
 918      02000003 
 918      000000
 919              		.loc 1 355 0
 920 0209 C7842444 		movl	$3, 580(%rsp)
 920      02000003 
 920      000000
 921              		.loc 1 357 0
 922 0214 E8000000 		call	jpeg_calc_output_dimensions
 922      00
 923              	.LVL94:
 924              		.loc 1 359 0
 925 0219 4863B424 		movslq	568(%rsp), %rsi
 925      38020000 
 926              	.LBB142:
 927              	.LBB143:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 928              		.loc 3 76 0
 929 0221 488B4C24 		movq	8(%rsp), %rcx
 929      08
 930              	.LBE143:
 931              	.LBE142:
 932              		.loc 1 360 0
 933 0226 8B94243C 		movl	572(%rsp), %edx
 933      020000
 934              	.LBB145:
 935              	.LBB144:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 936              		.loc 3 76 0
 937 022d 4889C8   		movq	%rcx, %rax
 938 0230 897008   		movl	%esi, 8(%rax)
 939              	.LBE144:
 940              	.LBE145:
 941              		.loc 1 361 0
 942 0233 8B842444 		movl	580(%rsp), %eax
 942      020000
 943              		.loc 1 359 0
 944 023a 4889F7   		movq	%rsi, %rdi
 945              	.LVL95:
 946              	.LBB146:
 947              	.LBB147:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 948              		.loc 3 80 0
 949 023d 89510C   		movl	%edx, 12(%rcx)
 950              	.LVL96:
 951              	.LBE147:
 952              	.LBE146:
 953              	.LBB148:
 954              	.LBB149:
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 955              		.loc 3 84 0
 956 0240 894110   		movl	%eax, 16(%rcx)
 957              	.LVL97:
 958              	.LBE149:
 959              	.LBE148:
 960              		.loc 1 363 0
 961 0243 4863CA   		movslq	%edx, %rcx
 962              	.LVL98:
 963 0246 480FAFCE 		imulq	%rsi, %rcx
 964 024a 4863F0   		movslq	%eax, %rsi
 965 024d 480FAFCE 		imulq	%rsi, %rcx
 966 0251 48390D00 		cmpq	%rcx, _ZN12Fl_RGB_Image9max_size_E(%rip)
 966      000000
 967 0258 0F820301 		jb	.L61
 967      0000
 968              	.LVL99:
 969              		.loc 1 364 0
 970 025e 0FAFFA   		imull	%edx, %edi
 971 0261 0FAFC7   		imull	%edi, %eax
 972 0264 4863F8   		movslq	%eax, %rdi
 973 0267 E8000000 		call	_Znam
 973      00
 974              	.LVL100:
 975 026c 488B5424 		movq	8(%rsp), %rdx
 975      08
 976              		.loc 1 367 0
 977 0271 4889DF   		movq	%rbx, %rdi
 978              		.loc 1 364 0
 979 0274 48894228 		movq	%rax, 40(%rdx)
 980              		.loc 1 365 0
 981 0278 C7423001 		movl	$1, 48(%rdx)
 981      000000
 982              		.loc 1 367 0
 983 027f E8000000 		call	jpeg_start_decompress
 983      00
 984              	.LVL101:
 985 0284 EB3A     		jmp	.L50
 986 0286 662E0F1F 		.p2align 4,,10
 986      84000000 
 986      0000
 987              		.p2align 3
 988              	.L62:
 989              		.loc 1 372 0
 990 0290 0FAF8424 		imull	568(%rsp), %eax
 990      38020000 
 991 0298 488B4C24 		movq	8(%rsp), %rcx
 991      08
 992              		.loc 1 373 0
 993 029d 488D7424 		leaq	56(%rsp), %rsi
 993      38
 994 02a2 BA010000 		movl	$1, %edx
 994      00
 995 02a7 4889DF   		movq	%rbx, %rdi
 996              		.loc 1 372 0
 997 02aa 0FAF8424 		imull	580(%rsp), %eax
 997      44020000 
 998 02b2 48034128 		addq	40(%rcx), %rax
 999 02b6 48894424 		movq	%rax, 56(%rsp)
 999      38
 1000              		.loc 1 373 0
 1001 02bb E8000000 		call	jpeg_read_scanlines
 1001      00
 1002              	.LVL102:
 1003              	.L50:
 1004              		.loc 1 369 0
 1005 02c0 8B842458 		movl	600(%rsp), %eax
 1005      020000
 1006 02c7 3B84243C 		cmpl	572(%rsp), %eax
 1006      020000
 1007 02ce 72C0     		jb	.L62
 1008              		.loc 1 376 0
 1009 02d0 488DBC24 		leaq	432(%rsp), %rdi
 1009      B0010000 
 1010 02d8 E8000000 		call	jpeg_finish_decompress
 1010      00
 1011              	.LVL103:
 1012              		.loc 1 377 0
 1013 02dd 488DBC24 		leaq	432(%rsp), %rdi
 1013      B0010000 
 1014 02e5 E8000000 		call	jpeg_destroy_decompress
 1014      00
 1015              	.LVL104:
 1016              		.loc 1 379 0
 1017 02ea 488B7C24 		movq	24(%rsp), %rdi
 1017      18
 1018 02ef E8000000 		call	free
 1018      00
 1019              	.LVL105:
 1020              		.loc 1 380 0
 1021 02f4 488B7C24 		movq	16(%rsp), %rdi
 1021      10
 1022 02f9 E8000000 		call	free
 1022      00
 1023              	.LVL106:
 1024              	.LBB150:
 1025              		.loc 1 382 0
 1026 02fe 488B4424 		movq	8(%rsp), %rax
 1026      08
 1027 0303 8B5008   		movl	8(%rax), %edx
 1028 0306 85D2     		testl	%edx, %edx
 1029 0308 7436     		je	.L39
 1030              	.LVL107:
 1031              		.loc 1 382 0 is_stmt 0 discriminator 2
 1032 030a 8B400C   		movl	12(%rax), %eax
 1033 030d 85C0     		testl	%eax, %eax
 1034 030f 742F     		je	.L39
 1035 0311 48837C24 		cmpq	$0, 40(%rsp)
 1035      2800
 1036 0317 7427     		je	.L39
 1037              	.LBB151:
 1038              		.loc 1 383 0 is_stmt 1
 1039 0319 BF480000 		movl	$72, %edi
 1039      00
 1040 031e E8000000 		call	_Znwm
 1040      00
 1041              	.LVL108:
 1042 0323 488B5424 		movq	8(%rsp), %rdx
 1042      08
 1043 0328 488B7424 		movq	40(%rsp), %rsi
 1043      28
 1044 032d 4889C3   		movq	%rax, %rbx
 1045              	.LVL109:
 1046 0330 4889C7   		movq	%rax, %rdi
 1047 0333 E8000000 		call	_ZN15Fl_Shared_ImageC1EPKcP8Fl_Image
 1047      00
 1048              	.LVL110:
 1049              		.loc 1 384 0
 1050 0338 4889DF   		movq	%rbx, %rdi
 1051 033b E8000000 		call	_ZN15Fl_Shared_Image3addEv
 1051      00
 1052              	.LVL111:
 1053              		.p2align 4,,10
 1054              		.p2align 3
 1055              	.L39:
 1056              	.LBE151:
 1057              	.LBE150:
 1058              	.LBE152:
 1059              	.LBE155:
 1060              		.loc 1 387 0
 1061 0340 488B8424 		movq	1096(%rsp), %rax
 1061      48040000 
 1062 0348 64483304 		xorq	%fs:40, %rax
 1062      25280000 
 1062      00
 1063 0351 7509     		jne	.L63
 1064 0353 4881C450 		addq	$1104, %rsp
 1064      040000
 1065              		.cfi_remember_state
 1066              		.cfi_def_cfa_offset 16
 1067 035a 5B       		popq	%rbx
 1068              		.cfi_def_cfa_offset 8
 1069 035b C3       		ret
 1070              	.L63:
 1071              		.cfi_restore_state
 1072 035c E8000000 		call	__stack_chk_fail
 1072      00
 1073              	.LVL112:
 1074              	.L61:
 1075              	.LBB156:
 1076              	.LBB153:
 1077              		.loc 1 363 0 discriminator 5
 1078 0361 488DBC24 		leaq	232(%rsp), %rdi
 1078      E8000000 
 1079 0369 BE010000 		movl	$1, %esi
 1079      00
 1080 036e E8000000 		call	__longjmp_chk
 1080      00
 1081              	.LVL113:
 1082              	.LBE153:
 1083              	.LBE156:
 1084              		.cfi_endproc
 1085              	.LFE183:
 1087              		.section	.text.unlikely._ZN13Fl_JPEG_ImageC2EPKcPKh
 1088              	.LCOLDE12:
 1089              		.section	.text._ZN13Fl_JPEG_ImageC2EPKcPKh
 1090              	.LHOTE12:
 1091              		.globl	_ZN13Fl_JPEG_ImageC1EPKcPKh
 1092              		.set	_ZN13Fl_JPEG_ImageC1EPKcPKh,_ZN13Fl_JPEG_ImageC2EPKcPKh
 1093              		.weak	_ZTS13Fl_JPEG_Image
 1094              		.section	.rodata._ZTS13Fl_JPEG_Image,"aG",@progbits,_ZTS13Fl_JPEG_Image,comdat
 1095              		.align 16
 1098              	_ZTS13Fl_JPEG_Image:
 1099 0000 3133466C 		.string	"13Fl_JPEG_Image"
 1099      5F4A5045 
 1099      475F496D 
 1099      61676500 
 1100              		.weak	_ZTI13Fl_JPEG_Image
 1101              		.section	.rodata._ZTI13Fl_JPEG_Image,"aG",@progbits,_ZTI13Fl_JPEG_Image,comdat
 1102              		.align 8
 1105              	_ZTI13Fl_JPEG_Image:
 1106 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1106      00000000 
 1107 0008 00000000 		.quad	_ZTS13Fl_JPEG_Image
 1107      00000000 
 1108 0010 00000000 		.quad	_ZTI12Fl_RGB_Image
 1108      00000000 
 1109              		.weak	_ZTV13Fl_JPEG_Image
 1110              		.section	.rodata._ZTV13Fl_JPEG_Image,"aG",@progbits,_ZTV13Fl_JPEG_Image,comdat
 1111              		.align 8
 1114              	_ZTV13Fl_JPEG_Image:
 1115 0000 00000000 		.quad	0
 1115      00000000 
 1116 0008 00000000 		.quad	_ZTI13Fl_JPEG_Image
 1116      00000000 
 1117 0010 00000000 		.quad	_ZN13Fl_JPEG_ImageD1Ev
 1117      00000000 
 1118 0018 00000000 		.quad	_ZN13Fl_JPEG_ImageD0Ev
 1118      00000000 
 1119 0020 00000000 		.quad	_ZN12Fl_RGB_Image4copyEii
 1119      00000000 
 1120 0028 00000000 		.quad	_ZN12Fl_RGB_Image13color_averageEjf
 1120      00000000 
 1121 0030 00000000 		.quad	_ZN12Fl_RGB_Image10desaturateEv
 1121      00000000 
 1122 0038 00000000 		.quad	_ZN12Fl_RGB_Image5labelEP9Fl_Widget
 1122      00000000 
 1123 0040 00000000 		.quad	_ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item
 1123      00000000 
 1124 0048 00000000 		.quad	_ZN12Fl_RGB_Image4drawEiiiiii
 1124      00000000 
 1125 0050 00000000 		.quad	_ZN12Fl_RGB_Image7uncacheEv
 1125      00000000 
 1126              		.text
 1127              	.Letext0:
 1128              		.section	.text.unlikely.init_source
 1129              	.Letext_cold0:
 1130              		.file 4 "fltk-1.3.4-1/FL/fl_types.h"
 1131              		.file 5 "fltk-1.3.4-1/FL/Enumerations.H"
 1132              		.file 6 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1133              		.file 7 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1134              		.file 8 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
 1135              		.file 9 "/usr/include/stdio.h"
 1136              		.file 10 "/usr/include/libio.h"
 1137              		.file 11 "/usr/include/x86_64-linux-gnu/bits/setjmp.h"
 1138              		.file 12 "/usr/include/setjmp.h"
 1139              		.file 13 "fltk-1.3.4-1/jpeg/jmorecfg.h"
 1140              		.file 14 "fltk-1.3.4-1/jpeg/jpeglib.h"
 1141              		.file 15 "fltk-1.3.4-1/FL/Fl_Shared_Image.H"
 1142              		.file 16 "fltk-1.3.4-1/FL/fl_utf8.h"
 1143              		.file 17 "/usr/include/stdlib.h"
 1144              		.file 18 "/usr/include/x86_64-linux-gnu/bits/setjmp2.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_JPEG_Image.cxx
     /tmp/cczwKEwD.s:13     .text.init_source:0000000000000000 init_source
     /tmp/cczwKEwD.s:39     .text.fill_input_buffer:0000000000000000 fill_input_buffer
     /tmp/cczwKEwD.s:73     .text.term_source:0000000000000000 term_source
     /tmp/cczwKEwD.s:92     .text.skip_input_data:0000000000000000 skip_input_data
     /tmp/cczwKEwD.s:159    .text.fl_jpeg_error_handler:0000000000000000 fl_jpeg_error_handler
     /tmp/cczwKEwD.s:189    .text._ZN13Fl_JPEG_ImageD2Ev:0000000000000000 _ZN13Fl_JPEG_ImageD2Ev
     /tmp/cczwKEwD.s:1114   .rodata._ZTV13Fl_JPEG_Image:0000000000000000 _ZTV13Fl_JPEG_Image
     /tmp/cczwKEwD.s:189    .text._ZN13Fl_JPEG_ImageD2Ev:0000000000000000 _ZN13Fl_JPEG_ImageD1Ev
     /tmp/cczwKEwD.s:219    .text._ZN13Fl_JPEG_ImageD0Ev:0000000000000000 _ZN13Fl_JPEG_ImageD0Ev
     /tmp/cczwKEwD.s:255    .text.fl_jpeg_output_handler:0000000000000000 fl_jpeg_output_handler
     /tmp/cczwKEwD.s:282    .text._ZN13Fl_JPEG_ImageC2EPKc:0000000000000000 _ZN13Fl_JPEG_ImageC2EPKc
     /tmp/cczwKEwD.s:282    .text._ZN13Fl_JPEG_ImageC2EPKc:0000000000000000 _ZN13Fl_JPEG_ImageC1EPKc
     /tmp/cczwKEwD.s:689    .text._ZN13Fl_JPEG_ImageC2EPKcPKh:0000000000000000 _ZN13Fl_JPEG_ImageC2EPKcPKh
     /tmp/cczwKEwD.s:689    .text._ZN13Fl_JPEG_ImageC2EPKcPKh:0000000000000000 _ZN13Fl_JPEG_ImageC1EPKcPKh
     /tmp/cczwKEwD.s:1098   .rodata._ZTS13Fl_JPEG_Image:0000000000000000 _ZTS13Fl_JPEG_Image
     /tmp/cczwKEwD.s:1105   .rodata._ZTI13Fl_JPEG_Image:0000000000000000 _ZTI13Fl_JPEG_Image
                           .group:0000000000000000 _ZN13Fl_JPEG_ImageD5Ev
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.features.h.19.ad7942cac365cc9b820965257723f4cc
                           .group:0000000000000000 wm4.cdefs.h.19.871bad770587d04922449df94ac50bdb
                           .group:0000000000000000 wm4.wordsize.h.4.256e8fdbd37801980286acdbc40d0280
                           .group:0000000000000000 wm4.cdefs.h.432.619afd0aac7c4b439843706c1b28ddea
                           .group:0000000000000000 wm4.stubs64.h.10.918ceb5fa58268542bf143e4c1efbcf3
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.187.e3ca1cb00044c044f8b956a6107cebb6
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.93f167f49d64e2b9b99f98d1162a93bf
                           .group:0000000000000000 wm4.endian.h.19.ff00c9c0f5e9f9a9719c5de76ace57b4
                           .group:0000000000000000 wm4.endian.h.41.24cced64aef71195a51d4daa8e4f4a95
                           .group:0000000000000000 wm4.types.h.89.468e2451361e3b92f048f6cad51690ff
                           .group:0000000000000000 wm4.typesizes.h.24.40eb69a6270178f15d1bf3d7b6635a8b
                           .group:0000000000000000 wm4.byteswap.h.38.11ee5fdc0f6cc53a16c505b9233cecef
                           .group:0000000000000000 wm4.endian.h.63.97272d7c64d5db8020003b32e9289502
                           .group:0000000000000000 wm4.waitstatus.h.99.408b6270fa6eb71377201a241ef15f79
                           .group:0000000000000000 wm4.stdlib.h.54.0af3535195ddeb87f5c2e8ca307f12bc
                           .group:0000000000000000 wm4.types.h.23.f6dcbaa72f8f71361acef09804d45a5e
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
                           .group:0000000000000000 wm4.stdio.h.26.4719156f1aea2bb9662fd6c582dc9a4c
                           .group:0000000000000000 wm4.stddef.h.238.05c1f32ae5cf7bdacd6b0a8ed417a07f
                           .group:0000000000000000 wm4.stdio.h.36.2dd12c1fd035242ad5cfd0152a01be5a
                           .group:0000000000000000 wm4._G_config.h.5.b0f37d9e474454cf6e459063458db32f
                           .group:0000000000000000 wm4.wchar.h.80.eea3eba2d2a17aace9470a8e0d8218dc
                           .group:0000000000000000 wm4._G_config.h.46.5187c97b14fd664662cb32e6b94fc49e
                           .group:0000000000000000 wm4.libio.h.33.a775b9ecae273f33bc59931e9891e4ca
                           .group:0000000000000000 wm4.stdarg.h.34.3a23a216c0c293b3d2ea2e89281481e6
                           .group:0000000000000000 wm4.libio.h.51.dab170798ec1df48c625aea7c30e1b63
                           .group:0000000000000000 wm4.stdio.h.80.7c3a1fd1f0babda3c692439566e04dd1
                           .group:0000000000000000 wm4.stdio_lim.h.23.f8541119d1bcf759d7de9531671fd758
                           .group:0000000000000000 wm4.stdio.h.172.df21df34a7396d7da2e08f9b617d582f
                           .group:0000000000000000 wm4.stdio.h.26.e50fc3808d57d965ceefc6f6dd102eb7
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
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.setjmp.h.67.51aa194c3c89a841663c00cb93fd90ff
                           .group:0000000000000000 wm4.jconfig.h.10.247fc3ff67998f3074970b1373c70333
                           .group:0000000000000000 wm4.jmorecfg.h.33.892d1896c42f78d6ec3a036162b3403e
                           .group:0000000000000000 wm4.jpeglib.h.40.4f111c27252a38df39328d65454e82f4

UNDEFINED SYMBOLS
__longjmp_chk
_ZN12Fl_RGB_ImageD2Ev
_ZdlPv
_ZN12Fl_RGB_ImageC2EPKhiiii
fl_fopen
jpeg_std_error
malloc
_setjmp
_ZN2Fl7warningE
jpeg_finish_decompress
jpeg_destroy_decompress
fclose
_ZdaPv
free
jpeg_CreateDecompress
jpeg_stdio_src
jpeg_read_header
jpeg_calc_output_dimensions
_ZN12Fl_RGB_Image9max_size_E
_Znam
jpeg_start_decompress
jpeg_read_scanlines
__stack_chk_fail
jpeg_resync_to_restart
_Znwm
_ZN15Fl_Shared_ImageC1EPKcP8Fl_Image
_ZN15Fl_Shared_Image3addEv
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI12Fl_RGB_Image
_ZN12Fl_RGB_Image4copyEii
_ZN12Fl_RGB_Image13color_averageEjf
_ZN12Fl_RGB_Image10desaturateEv
_ZN12Fl_RGB_Image5labelEP9Fl_Widget
_ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item
_ZN12Fl_RGB_Image4drawEiiiiii
_ZN12Fl_RGB_Image7uncacheEv
