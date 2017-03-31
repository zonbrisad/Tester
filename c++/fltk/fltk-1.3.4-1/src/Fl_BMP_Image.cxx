   1              		.file	"Fl_BMP_Image.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL9read_wordP8_IO_FILE,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL9read_wordP8_IO_FILE,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL9read_wordP8_IO_FILE
  10              	.Ltext_cold0:
  11              		.section	.text._ZL9read_wordP8_IO_FILE
  13              	_ZL9read_wordP8_IO_FILE:
  14              	.LFB170:
  15              		.file 1 "fltk-1.3.4-1/src/Fl_BMP_Image.cxx"
   1:fltk-1.3.4-1/src/Fl_BMP_Image.cxx **** ...
  16              		.loc 1 458 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 55       		pushq	%rbp
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 6, -16
  22 0001 53       		pushq	%rbx
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 3, -24
  25 0002 4889FD   		movq	%rdi, %rbp
  26 0005 4883EC08 		subq	$8, %rsp
  27              		.cfi_def_cfa_offset 32
  28              		.loc 1 461 0
  29 0009 E8000000 		call	_IO_getc
  29      00
  30              	.LVL1:
  31              		.loc 1 462 0
  32 000e 4889EF   		movq	%rbp, %rdi
  33              		.loc 1 461 0
  34 0011 89C3     		movl	%eax, %ebx
  35              	.LVL2:
  36              		.loc 1 464 0
  37 0013 0FB6DB   		movzbl	%bl, %ebx
  38              		.loc 1 462 0
  39 0016 E8000000 		call	_IO_getc
  39      00
  40              	.LVL3:
  41              		.loc 1 465 0
  42 001b 4883C408 		addq	$8, %rsp
  43              		.cfi_def_cfa_offset 24
  44              		.loc 1 464 0
  45 001f C1E008   		sall	$8, %eax
  46              	.LVL4:
  47 0022 09D8     		orl	%ebx, %eax
  48              		.loc 1 465 0
  49 0024 5B       		popq	%rbx
  50              		.cfi_def_cfa_offset 16
  51              	.LVL5:
  52 0025 5D       		popq	%rbp
  53              		.cfi_def_cfa_offset 8
  54              	.LVL6:
  55 0026 C3       		ret
  56              		.cfi_endproc
  57              	.LFE170:
  59              		.section	.text.unlikely._ZL9read_wordP8_IO_FILE
  60              	.LCOLDE0:
  61              		.section	.text._ZL9read_wordP8_IO_FILE
  62              	.LHOTE0:
  63              		.section	.text.unlikely._ZL9read_longP8_IO_FILE,"ax",@progbits
  64              	.LCOLDB1:
  65              		.section	.text._ZL9read_longP8_IO_FILE,"ax",@progbits
  66              	.LHOTB1:
  67              		.p2align 4,,15
  69              	_ZL9read_longP8_IO_FILE:
  70              	.LFB172:
  71              		.loc 1 490 0
  72              		.cfi_startproc
  73              	.LVL7:
  74 0000 4155     		pushq	%r13
  75              		.cfi_def_cfa_offset 16
  76              		.cfi_offset 13, -16
  77 0002 4154     		pushq	%r12
  78              		.cfi_def_cfa_offset 24
  79              		.cfi_offset 12, -24
  80 0004 4989FD   		movq	%rdi, %r13
  81 0007 55       		pushq	%rbp
  82              		.cfi_def_cfa_offset 32
  83              		.cfi_offset 6, -32
  84 0008 53       		pushq	%rbx
  85              		.cfi_def_cfa_offset 40
  86              		.cfi_offset 3, -40
  87 0009 4883EC08 		subq	$8, %rsp
  88              		.cfi_def_cfa_offset 48
  89              		.loc 1 493 0
  90 000d E8000000 		call	_IO_getc
  90      00
  91              	.LVL8:
  92              		.loc 1 494 0
  93 0012 4C89EF   		movq	%r13, %rdi
  94              		.loc 1 493 0
  95 0015 4189C4   		movl	%eax, %r12d
  96              	.LVL9:
  97              		.loc 1 494 0
  98 0018 E8000000 		call	_IO_getc
  98      00
  99              	.LVL10:
 100              		.loc 1 495 0
 101 001d 4C89EF   		movq	%r13, %rdi
 102              		.loc 1 494 0
 103 0020 89C3     		movl	%eax, %ebx
 104              	.LVL11:
 105              		.loc 1 495 0
 106 0022 E8000000 		call	_IO_getc
 106      00
 107              	.LVL12:
 108              		.loc 1 496 0
 109 0027 4C89EF   		movq	%r13, %rdi
 110              		.loc 1 495 0
 111 002a 89C5     		movl	%eax, %ebp
 112              	.LVL13:
 113              		.loc 1 496 0
 114 002c E8000000 		call	_IO_getc
 114      00
 115              	.LVL14:
 116              		.loc 1 498 0
 117 0031 0FB6C0   		movzbl	%al, %eax
 118 0034 400FB6D5 		movzbl	%bpl, %edx
 119              		.loc 1 499 0
 120 0038 4883C408 		addq	$8, %rsp
 121              		.cfi_def_cfa_offset 40
 122              		.loc 1 498 0
 123 003c C1E008   		sall	$8, %eax
 124              	.LVL15:
 125 003f 09D0     		orl	%edx, %eax
 126 0041 0FB6D3   		movzbl	%bl, %edx
 127 0044 89C5     		movl	%eax, %ebp
 128              	.LVL16:
 129 0046 410FB6C4 		movzbl	%r12b, %eax
 130 004a C1E508   		sall	$8, %ebp
 131 004d 89EB     		movl	%ebp, %ebx
 132              	.LVL17:
 133 004f 09D3     		orl	%edx, %ebx
 134 0051 C1E308   		sall	$8, %ebx
 135 0054 09D8     		orl	%ebx, %eax
 136              		.loc 1 499 0
 137 0056 5B       		popq	%rbx
 138              		.cfi_def_cfa_offset 32
 139 0057 5D       		popq	%rbp
 140              		.cfi_def_cfa_offset 24
 141 0058 415C     		popq	%r12
 142              		.cfi_def_cfa_offset 16
 143              	.LVL18:
 144 005a 415D     		popq	%r13
 145              		.cfi_def_cfa_offset 8
 146              	.LVL19:
 147 005c C3       		ret
 148              		.cfi_endproc
 149              	.LFE172:
 151              		.section	.text.unlikely._ZL9read_longP8_IO_FILE
 152              	.LCOLDE1:
 153              		.section	.text._ZL9read_longP8_IO_FILE
 154              	.LHOTE1:
 155              		.section	.text.unlikely._ZL10read_dwordP8_IO_FILE,"ax",@progbits
 156              	.LCOLDB2:
 157              		.section	.text._ZL10read_dwordP8_IO_FILE,"ax",@progbits
 158              	.LHOTB2:
 159              		.p2align 4,,15
 161              	_ZL10read_dwordP8_IO_FILE:
 162              	.LFB171:
 163              		.loc 1 473 0
 164              		.cfi_startproc
 165              	.LVL20:
 166 0000 4155     		pushq	%r13
 167              		.cfi_def_cfa_offset 16
 168              		.cfi_offset 13, -16
 169 0002 4154     		pushq	%r12
 170              		.cfi_def_cfa_offset 24
 171              		.cfi_offset 12, -24
 172 0004 4989FD   		movq	%rdi, %r13
 173 0007 55       		pushq	%rbp
 174              		.cfi_def_cfa_offset 32
 175              		.cfi_offset 6, -32
 176 0008 53       		pushq	%rbx
 177              		.cfi_def_cfa_offset 40
 178              		.cfi_offset 3, -40
 179 0009 4883EC08 		subq	$8, %rsp
 180              		.cfi_def_cfa_offset 48
 181              		.loc 1 476 0
 182 000d E8000000 		call	_IO_getc
 182      00
 183              	.LVL21:
 184              		.loc 1 477 0
 185 0012 4C89EF   		movq	%r13, %rdi
 186              		.loc 1 476 0
 187 0015 4189C4   		movl	%eax, %r12d
 188              	.LVL22:
 189              		.loc 1 477 0
 190 0018 E8000000 		call	_IO_getc
 190      00
 191              	.LVL23:
 192              		.loc 1 478 0
 193 001d 4C89EF   		movq	%r13, %rdi
 194              		.loc 1 477 0
 195 0020 89C3     		movl	%eax, %ebx
 196              	.LVL24:
 197              		.loc 1 478 0
 198 0022 E8000000 		call	_IO_getc
 198      00
 199              	.LVL25:
 200              		.loc 1 479 0
 201 0027 4C89EF   		movq	%r13, %rdi
 202              		.loc 1 478 0
 203 002a 89C5     		movl	%eax, %ebp
 204              	.LVL26:
 205              		.loc 1 479 0
 206 002c E8000000 		call	_IO_getc
 206      00
 207              	.LVL27:
 208              		.loc 1 481 0
 209 0031 0FB6C0   		movzbl	%al, %eax
 210 0034 400FB6D5 		movzbl	%bpl, %edx
 211              		.loc 1 482 0
 212 0038 4883C408 		addq	$8, %rsp
 213              		.cfi_def_cfa_offset 40
 214              		.loc 1 481 0
 215 003c C1E008   		sall	$8, %eax
 216              	.LVL28:
 217 003f 09D0     		orl	%edx, %eax
 218 0041 0FB6D3   		movzbl	%bl, %edx
 219 0044 89C5     		movl	%eax, %ebp
 220              	.LVL29:
 221 0046 410FB6C4 		movzbl	%r12b, %eax
 222 004a C1E508   		sall	$8, %ebp
 223 004d 89EB     		movl	%ebp, %ebx
 224              	.LVL30:
 225 004f 09D3     		orl	%edx, %ebx
 226 0051 C1E308   		sall	$8, %ebx
 227 0054 09D8     		orl	%ebx, %eax
 228              		.loc 1 482 0
 229 0056 5B       		popq	%rbx
 230              		.cfi_def_cfa_offset 32
 231 0057 5D       		popq	%rbp
 232              		.cfi_def_cfa_offset 24
 233 0058 415C     		popq	%r12
 234              		.cfi_def_cfa_offset 16
 235              	.LVL31:
 236 005a 415D     		popq	%r13
 237              		.cfi_def_cfa_offset 8
 238              	.LVL32:
 239 005c C3       		ret
 240              		.cfi_endproc
 241              	.LFE171:
 243              		.section	.text.unlikely._ZL10read_dwordP8_IO_FILE
 244              	.LCOLDE2:
 245              		.section	.text._ZL10read_dwordP8_IO_FILE
 246              	.LHOTE2:
 247              		.section	.text.unlikely._ZN12Fl_BMP_ImageD2Ev,"axG",@progbits,_ZN12Fl_BMP_ImageD5Ev,comdat
 248              		.align 2
 249              	.LCOLDB3:
 250              		.section	.text._ZN12Fl_BMP_ImageD2Ev,"axG",@progbits,_ZN12Fl_BMP_ImageD5Ev,comdat
 251              	.LHOTB3:
 252              		.align 2
 253              		.p2align 4,,15
 254              		.weak	_ZN12Fl_BMP_ImageD2Ev
 256              	_ZN12Fl_BMP_ImageD2Ev:
 257              	.LFB174:
 258              		.file 2 "fltk-1.3.4-1/FL/Fl_BMP_Image.H"
   1:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** //
   2:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** // "$Id: Fl_BMP_Image.H 10732 2015-05-23 23:42:26Z matt $"
   3:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** //
   4:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** // BMP image header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** //
   6:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** //
   8:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** //
  12:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** //
  14:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** //
  16:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** //
  18:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** 
  19:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_BMP_Image.H ****    Fl_BMP_Image widget . */
  21:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** 
  22:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** #ifndef Fl_BMP_Image_H
  23:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** #define Fl_BMP_Image_H
  24:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** #  include "Fl_Image.H"
  25:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** 
  26:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** /**
  27:fltk-1.3.4-1/FL/Fl_BMP_Image.H ****  The Fl_BMP_Image class supports loading, caching,
  28:fltk-1.3.4-1/FL/Fl_BMP_Image.H ****  and drawing of Windows Bitmap (BMP) image files. 
  29:fltk-1.3.4-1/FL/Fl_BMP_Image.H ****  */
  30:fltk-1.3.4-1/FL/Fl_BMP_Image.H **** class FL_EXPORT Fl_BMP_Image : public Fl_RGB_Image {
 259              		.loc 2 30 0
 260              		.cfi_startproc
 261              	.LVL33:
 262              	.LBB139:
 263              		.loc 2 30 0
 264 0000 48C70700 		movq	$_ZTV12Fl_BMP_Image+16, (%rdi)
 264      000000
 265 0007 E9000000 		jmp	_ZN12Fl_RGB_ImageD2Ev
 265      00
 266              	.LVL34:
 267              	.LBE139:
 268              		.cfi_endproc
 269              	.LFE174:
 271              		.section	.text.unlikely._ZN12Fl_BMP_ImageD2Ev,"axG",@progbits,_ZN12Fl_BMP_ImageD5Ev,comdat
 272              	.LCOLDE3:
 273              		.section	.text._ZN12Fl_BMP_ImageD2Ev,"axG",@progbits,_ZN12Fl_BMP_ImageD5Ev,comdat
 274              	.LHOTE3:
 275              		.weak	_ZN12Fl_BMP_ImageD1Ev
 276              		.set	_ZN12Fl_BMP_ImageD1Ev,_ZN12Fl_BMP_ImageD2Ev
 277              		.section	.text.unlikely._ZN12Fl_BMP_ImageD0Ev,"axG",@progbits,_ZN12Fl_BMP_ImageD5Ev,comdat
 278              		.align 2
 279              	.LCOLDB4:
 280              		.section	.text._ZN12Fl_BMP_ImageD0Ev,"axG",@progbits,_ZN12Fl_BMP_ImageD5Ev,comdat
 281              	.LHOTB4:
 282              		.align 2
 283              		.p2align 4,,15
 284              		.weak	_ZN12Fl_BMP_ImageD0Ev
 286              	_ZN12Fl_BMP_ImageD0Ev:
 287              	.LFB176:
 288              		.loc 2 30 0
 289              		.cfi_startproc
 290              	.LVL35:
 291 0000 53       		pushq	%rbx
 292              		.cfi_def_cfa_offset 16
 293              		.cfi_offset 3, -16
 294              		.loc 2 30 0
 295 0001 4889FB   		movq	%rdi, %rbx
 296              	.LBB140:
 297              	.LBB141:
 298 0004 48C70700 		movq	$_ZTV12Fl_BMP_Image+16, (%rdi)
 298      000000
 299 000b E8000000 		call	_ZN12Fl_RGB_ImageD2Ev
 299      00
 300              	.LVL36:
 301              	.LBE141:
 302              	.LBE140:
 303 0010 4889DF   		movq	%rbx, %rdi
 304 0013 5B       		popq	%rbx
 305              		.cfi_def_cfa_offset 8
 306              	.LVL37:
 307 0014 E9000000 		jmp	_ZdlPv
 307      00
 308              	.LVL38:
 309              		.cfi_endproc
 310              	.LFE176:
 312              		.section	.text.unlikely._ZN12Fl_BMP_ImageD0Ev,"axG",@progbits,_ZN12Fl_BMP_ImageD5Ev,comdat
 313              	.LCOLDE4:
 314              		.section	.text._ZN12Fl_BMP_ImageD0Ev,"axG",@progbits,_ZN12Fl_BMP_ImageD5Ev,comdat
 315              	.LHOTE4:
 316              		.section	.rodata.str1.1,"aMS",@progbits,1
 317              	.LC5:
 318 0000 726200   		.string	"rb"
 319              	.LC6:
 320 0003 424D5020 		.string	"BMP file \"%s\" is too large!\n"
 320      66696C65 
 320      20222573 
 320      22206973 
 320      20746F6F 
 321              		.section	.text.unlikely._ZN12Fl_BMP_ImageC2EPKc,"ax",@progbits
 322              		.align 2
 323              	.LCOLDB7:
 324              		.section	.text._ZN12Fl_BMP_ImageC2EPKc,"ax",@progbits
 325              	.LHOTB7:
 326              		.align 2
 327              		.p2align 4,,15
 328              		.globl	_ZN12Fl_BMP_ImageC2EPKc
 330              	_ZN12Fl_BMP_ImageC2EPKc:
 331              	.LFB168:
 332              		.loc 1 68 0
 333              		.cfi_startproc
 334              	.LVL39:
 335 0000 4157     		pushq	%r15
 336              		.cfi_def_cfa_offset 16
 337              		.cfi_offset 15, -16
 338 0002 4156     		pushq	%r14
 339              		.cfi_def_cfa_offset 24
 340              		.cfi_offset 14, -24
 341              	.LBB142:
 342              		.loc 1 69 0
 343 0004 4531C9   		xorl	%r9d, %r9d
 344              	.LBE142:
 345              		.loc 1 68 0
 346 0007 4155     		pushq	%r13
 347              		.cfi_def_cfa_offset 32
 348              		.cfi_offset 13, -32
 349 0009 4154     		pushq	%r12
 350              		.cfi_def_cfa_offset 40
 351              		.cfi_offset 12, -40
 352              	.LBB236:
 353              		.loc 1 69 0
 354 000b 31C9     		xorl	%ecx, %ecx
 355              	.LBE236:
 356              		.loc 1 68 0
 357 000d 55       		pushq	%rbp
 358              		.cfi_def_cfa_offset 48
 359              		.cfi_offset 6, -48
 360 000e 53       		pushq	%rbx
 361              		.cfi_def_cfa_offset 56
 362              		.cfi_offset 3, -56
 363              	.LBB237:
 364              		.loc 1 69 0
 365 000f 31D2     		xorl	%edx, %edx
 366              	.LBE237:
 367              		.loc 1 68 0
 368 0011 4889FB   		movq	%rdi, %rbx
 369 0014 4989F4   		movq	%rsi, %r12
 370              	.LBB238:
 371              		.loc 1 69 0
 372 0017 41B80300 		movl	$3, %r8d
 372      0000
 373              	.LBE238:
 374              		.loc 1 68 0
 375 001d 4881EC58 		subq	$856, %rsp
 375      030000
 376              		.cfi_def_cfa_offset 912
 377              	.LBB239:
 378              		.loc 1 69 0
 379 0024 31F6     		xorl	%esi, %esi
 380              	.LVL40:
 381              	.LBE239:
 382              		.loc 1 68 0
 383 0026 64488B04 		movq	%fs:40, %rax
 383      25280000 
 383      00
 384 002f 48898424 		movq	%rax, 840(%rsp)
 384      48030000 
 385 0037 31C0     		xorl	%eax, %eax
 386 0039 48893C24 		movq	%rdi, (%rsp)
 387              	.LBB240:
 388              		.loc 1 69 0
 389 003d E8000000 		call	_ZN12Fl_RGB_ImageC2EPKhiiii
 389      00
 390              	.LVL41:
 391 0042 48C70300 		movq	$_ZTV12Fl_BMP_Image+16, (%rbx)
 391      000000
 392              	.LVL42:
 393              	.LBB143:
 394              		.loc 1 95 0
 395 0049 BE000000 		movl	$.LC5, %esi
 395      00
 396 004e 4C89E7   		movq	%r12, %rdi
 397 0051 E8000000 		call	fl_fopen
 397      00
 398              	.LVL43:
 399 0056 4885C0   		testq	%rax, %rax
 400 0059 0F844902 		je	.L223
 400      0000
 401 005f 4989C6   		movq	%rax, %r14
 402              		.loc 1 101 0
 403 0062 4889C7   		movq	%rax, %rdi
 404 0065 E8000000 		call	_IO_getc
 404      00
 405              	.LVL44:
 406              		.loc 1 102 0
 407 006a 4C89F7   		movq	%r14, %rdi
 408              		.loc 1 101 0
 409 006d 89C3     		movl	%eax, %ebx
 410              	.LVL45:
 411              		.loc 1 102 0
 412 006f E8000000 		call	_IO_getc
 412      00
 413              	.LVL46:
 414              		.loc 1 103 0
 415 0074 80FB42   		cmpb	$66, %bl
 416              		.loc 1 109 0
 417 0077 4C89F7   		movq	%r14, %rdi
 418              		.loc 1 103 0
 419 007a 0F85E801 		jne	.L136
 419      0000
 420 0080 3C4D     		cmpb	$77, %al
 421 0082 0F85E001 		jne	.L136
 421      0000
 422              		.loc 1 109 0
 423 0088 E8000000 		call	_ZL10read_dwordP8_IO_FILE
 423      00
 424              	.LVL47:
 425              		.loc 1 110 0
 426 008d 4C89F7   		movq	%r14, %rdi
 427 0090 E8000000 		call	_ZL9read_wordP8_IO_FILE
 427      00
 428              	.LVL48:
 429              		.loc 1 111 0
 430 0095 4C89F7   		movq	%r14, %rdi
 431 0098 E8000000 		call	_ZL9read_wordP8_IO_FILE
 431      00
 432              	.LVL49:
 433              		.loc 1 112 0
 434 009d 4C89F7   		movq	%r14, %rdi
 435 00a0 E8000000 		call	_ZL10read_dwordP8_IO_FILE
 435      00
 436              	.LVL50:
 437              		.loc 1 115 0
 438 00a5 4C89F7   		movq	%r14, %rdi
 439              		.loc 1 112 0
 440 00a8 89442410 		movl	%eax, 16(%rsp)
 441              	.LVL51:
 442              		.loc 1 115 0
 443 00ac E8000000 		call	_ZL10read_dwordP8_IO_FILE
 443      00
 444              	.LVL52:
 445              	.LBB144:
 446              		.loc 1 123 0
 447 00b1 83F827   		cmpl	$39, %eax
 448              	.LBE144:
 449              		.loc 1 115 0
 450 00b4 89C5     		movl	%eax, %ebp
 451              	.LVL53:
 452              	.LBB178:
 453              		.loc 1 125 0
 454 00b6 4C89F7   		movq	%r14, %rdi
 455              		.loc 1 123 0
 456 00b9 0F8FF601 		jg	.L15
 456      0000
 457              		.loc 1 125 0
 458 00bf E8000000 		call	_ZL9read_wordP8_IO_FILE
 458      00
 459              	.LVL54:
 460              	.LBB145:
 461              	.LBB146:
 462              		.file 3 "fltk-1.3.4-1/FL/Fl_Image.H"
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
 463              		.loc 3 76 0
 464 00c4 488B1C24 		movq	(%rsp), %rbx
 465              	.LVL55:
 466 00c8 0FB7C0   		movzwl	%ax, %eax
 467              	.LVL56:
 468              	.LBE146:
 469              	.LBE145:
 470              		.loc 1 126 0
 471 00cb 4C89F7   		movq	%r14, %rdi
 472              		.loc 1 130 0
 473 00ce 4531ED   		xorl	%r13d, %r13d
 474              	.LBB148:
 475              	.LBB147:
 476              		.loc 3 76 0
 477 00d1 894308   		movl	%eax, 8(%rbx)
 478              	.LVL57:
 479              	.LBE147:
 480              	.LBE148:
 481              		.loc 1 126 0
 482 00d4 E8000000 		call	_ZL9read_wordP8_IO_FILE
 482      00
 483              	.LVL58:
 484              	.LBB149:
 485              	.LBB150:
  77:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  78:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image height in pixels.
  79:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   void h(int H) {h_ = H;}
 486              		.loc 3 80 0
 487 00d9 0FB7C0   		movzwl	%ax, %eax
 488              	.LVL59:
 489              	.LBE150:
 490              	.LBE149:
 491              		.loc 1 127 0
 492 00dc 4C89F7   		movq	%r14, %rdi
 493              	.LBB152:
 494              	.LBB151:
 495              		.loc 3 80 0
 496 00df 89430C   		movl	%eax, 12(%rbx)
 497              	.LVL60:
 498              	.LBE151:
 499              	.LBE152:
 500              		.loc 1 132 0
 501 00e2 8D5DF4   		leal	-12(%rbp), %ebx
 502              		.loc 1 127 0
 503 00e5 E8000000 		call	_ZL9read_wordP8_IO_FILE
 503      00
 504              	.LVL61:
 505              		.loc 1 128 0
 506 00ea 4C89F7   		movq	%r14, %rdi
 507 00ed E8000000 		call	_ZL9read_wordP8_IO_FILE
 507      00
 508              	.LVL62:
 509 00f2 0FB7C0   		movzwl	%ax, %eax
 510              	.LBE178:
 511              		.loc 1 119 0
 512 00f5 C6442436 		movb	$0, 54(%rsp)
 512      00
 513              		.loc 1 120 0
 514 00fa C744241C 		movl	$-1, 28(%rsp)
 514      FFFFFFFF 
 515              	.LBB179:
 516              		.loc 1 128 0
 517 0102 89442418 		movl	%eax, 24(%rsp)
 518              	.LVL63:
 519              		.loc 1 129 0
 520 0106 C7442408 		movl	$0, 8(%rsp)
 520      00000000 
 521              	.LBE179:
 522              		.loc 1 73 0
 523 010e C7442424 		movl	$3, 36(%rsp)
 523      03000000 
 524              	.LVL64:
 525              	.L16:
 526              		.loc 1 166 0
 527 0116 85DB     		testl	%ebx, %ebx
 528 0118 7E13     		jle	.L22
 529 011a 660F1F44 		.p2align 4,,10
 529      0000
 530              		.p2align 3
 531              	.L180:
 532              		.loc 1 167 0
 533 0120 4C89F7   		movq	%r14, %rdi
 534 0123 E8000000 		call	_IO_getc
 534      00
 535              	.LVL65:
 536              		.loc 1 166 0
 537 0128 83EB01   		subl	$1, %ebx
 538              	.LVL66:
 539 012b 75F3     		jne	.L180
 540              	.L22:
 541              	.LVL67:
 542              		.loc 1 172 0
 543 012d 488B0424 		movq	(%rsp), %rax
 544 0131 8B7808   		movl	8(%rax), %edi
 545 0134 85FF     		testl	%edi, %edi
 546 0136 0F847C02 		je	.L20
 546      0000
 547              	.LVL68:
 548              		.loc 1 172 0 is_stmt 0 discriminator 2
 549 013c 488B0424 		movq	(%rsp), %rax
 550 0140 8B700C   		movl	12(%rax), %esi
 551 0143 85F6     		testl	%esi, %esi
 552 0145 0F846D02 		je	.L20
 552      0000
 553 014b 8B4C2418 		movl	24(%rsp), %ecx
 554 014f 85C9     		testl	%ecx, %ecx
 555 0151 0F846102 		je	.L20
 555      0000
 556              		.loc 1 179 0 is_stmt 1
 557 0157 4585ED   		testl	%r13d, %r13d
 558 015a 0F85C809 		jne	.L116
 558      0000
 559 0160 837C2418 		cmpl	$8, 24(%rsp)
 559      08
 560 0165 0F8FBD09 		jg	.L116
 560      0000
 561              		.loc 1 180 0
 562 016b 0FB64C24 		movzbl	24(%rsp), %ecx
 562      18
 563 0170 41BD0100 		movl	$1, %r13d
 563      0000
 564              	.LVL69:
 565 0176 41D3E5   		sall	%cl, %r13d
 566              	.LVL70:
 567              	.L25:
 568 0179 418D45FF 		leal	-1(%r13), %eax
 569 017d 4C8D7C24 		leaq	64(%rsp), %r15
 569      40
 570 0182 488D5C40 		leaq	3(%rax,%rax,2), %rbx
 570      03
 571 0187 4C01FB   		addq	%r15, %rbx
 572 018a EB0D     		jmp	.L30
 573              	.LVL71:
 574 018c 0F1F4000 		.p2align 4,,10
 575              		.p2align 3
 576              	.L28:
 577 0190 4983C703 		addq	$3, %r15
 578              		.loc 1 182 0 discriminator 2
 579 0194 4939DF   		cmpq	%rbx, %r15
 580 0197 742B     		je	.L29
 581              	.L30:
 582              	.LVL72:
 583              	.LBB180:
 584              	.LBB181:
 585              		.file 4 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 586              		.loc 4 295 0
 587 0199 4C89F1   		movq	%r14, %rcx
 588 019c BA030000 		movl	$3, %edx
 588      00
 589 01a1 BE010000 		movl	$1, %esi
 589      00
 590 01a6 4C89FF   		movq	%r15, %rdi
 591 01a9 E8000000 		call	fread
 591      00
 592              	.LVL73:
 593              	.LBE181:
 594              	.LBE180:
 595              		.loc 1 187 0
 596 01ae 83FD0C   		cmpl	$12, %ebp
 597 01b1 7EDD     		jle	.L28
 598              		.loc 1 187 0 is_stmt 0 discriminator 1
 599 01b3 4C89F7   		movq	%r14, %rdi
 600 01b6 4983C703 		addq	$3, %r15
 601 01ba E8000000 		call	_IO_getc
 601      00
 602              	.LVL74:
 603              		.loc 1 182 0 is_stmt 1 discriminator 1
 604 01bf 4939DF   		cmpq	%rbx, %r15
 605 01c2 75D5     		jne	.L30
 606              	.L29:
 607              		.loc 1 191 0
 608 01c4 837C2418 		cmpl	$16, 24(%rsp)
 608      10
 609 01c9 0F840B0A 		je	.L224
 609      0000
 610              		.loc 1 121 0
 611 01cf 837C2418 		cmpl	$32, 24(%rsp)
 611      20
 612 01d4 B8040000 		movl	$4, %eax
 612      00
 613 01d9 C7442438 		movl	$0, 56(%rsp)
 613      00000000 
 614 01e1 0F454424 		cmovne	36(%rsp), %eax
 614      24
 615 01e6 89442424 		movl	%eax, 36(%rsp)
 616              	.L32:
 617              		.loc 1 112 0
 618 01ea 8B742410 		movl	16(%rsp), %esi
 619              	.LVL75:
 620              	.LBB182:
 621              	.LBB183:
  81:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  82:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image depth.
  83:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   void d(int D) {d_ = D;}
 622              		.loc 3 84 0
 623 01ee 488B1424 		movq	(%rsp), %rdx
 624 01f2 8B442424 		movl	36(%rsp), %eax
 625              	.LBE183:
 626              	.LBE182:
 627              		.loc 1 200 0
 628 01f6 4885F6   		testq	%rsi, %rsi
 629              	.LBB185:
 630              	.LBB184:
 631              		.loc 3 84 0
 632 01f9 894210   		movl	%eax, 16(%rdx)
 633              	.LVL76:
 634              	.LBE184:
 635              	.LBE185:
 636              		.loc 1 200 0
 637 01fc 0F854609 		jne	.L225
 637      0000
 638              	.L33:
 639 0202 488B1C24 		movq	(%rsp), %rbx
 640 0206 4863530C 		movslq	12(%rbx), %rdx
 641 020a 48634B08 		movslq	8(%rbx), %rcx
 642 020e 4889CF   		movq	%rcx, %rdi
 643              	.LVL77:
 644 0211 4889D6   		movq	%rdx, %rsi
 645              	.LVL78:
 646              		.loc 1 202 0
 647 0214 480FAFCA 		imulq	%rdx, %rcx
 648 0218 4863D0   		movslq	%eax, %rdx
 649 021b 480FAFD1 		imulq	%rcx, %rdx
 650 021f 48391500 		cmpq	%rdx, _ZN12Fl_RGB_Image9max_size_E(%rip)
 650      000000
 651 0226 0F83B901 		jnb	.L34
 651      0000
 652              		.loc 1 203 0
 653 022c 4C89E6   		movq	%r12, %rsi
 654 022f BF000000 		movl	$.LC6, %edi
 654      00
 655 0234 31C0     		xorl	%eax, %eax
 656 0236 FF150000 		call	*_ZN2Fl7warningE(%rip)
 656      0000
 657              	.LVL79:
 658              		.loc 1 204 0
 659 023c 4C89F7   		movq	%r14, %rdi
 660 023f E8000000 		call	fclose
 660      00
 661              	.LVL80:
 662              	.LBB186:
 663              	.LBB187:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 664              		.loc 3 76 0
 665 0244 C7430800 		movl	$0, 8(%rbx)
 665      000000
 666              	.LVL81:
 667              	.LBE187:
 668              	.LBE186:
 669              	.LBB188:
 670              	.LBB189:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 671              		.loc 3 80 0
 672 024b C7430C00 		movl	$0, 12(%rbx)
 672      000000
 673              	.LVL82:
 674              	.LBE189:
 675              	.LBE188:
 676              	.LBB190:
 677              	.LBB191:
 678              		.loc 3 84 0
 679 0252 C7431000 		movl	$0, 16(%rbx)
 679      000000
 680              	.LVL83:
 681              	.LBE191:
 682              	.LBE190:
 683              	.LBB192:
 684              	.LBB193:
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
 685              		.loc 3 96 0
 686 0259 C74314FD 		movl	$-3, 20(%rbx)
 686      FFFFFF
 687 0260 EB16     		jmp	.L10
 688              	.LVL84:
 689              		.p2align 4,,10
 690 0262 660F1F44 		.p2align 3
 690      0000
 691              	.L136:
 692              	.LBE193:
 693              	.LBE192:
 694              		.loc 1 104 0
 695 0268 E8000000 		call	fclose
 695      00
 696              	.LVL85:
 697              	.LBB194:
 698              	.LBB195:
 699              		.loc 3 96 0
 700 026d 488B0424 		movq	(%rsp), %rax
 701 0271 C74014FD 		movl	$-3, 20(%rax)
 701      FFFFFF
 702              	.LVL86:
 703              	.L10:
 704              	.LBE195:
 705              	.LBE194:
 706              	.LBE143:
 707              	.LBE240:
 708              		.loc 1 450 0
 709 0278 488B8424 		movq	840(%rsp), %rax
 709      48030000 
 710 0280 64483304 		xorq	%fs:40, %rax
 710      25280000 
 710      00
 711 0289 0F85C809 		jne	.L226
 711      0000
 712 028f 4881C458 		addq	$856, %rsp
 712      030000
 713              		.cfi_remember_state
 714              		.cfi_def_cfa_offset 56
 715 0296 5B       		popq	%rbx
 716              		.cfi_def_cfa_offset 48
 717 0297 5D       		popq	%rbp
 718              		.cfi_def_cfa_offset 40
 719 0298 415C     		popq	%r12
 720              		.cfi_def_cfa_offset 32
 721 029a 415D     		popq	%r13
 722              		.cfi_def_cfa_offset 24
 723 029c 415E     		popq	%r14
 724              		.cfi_def_cfa_offset 16
 725 029e 415F     		popq	%r15
 726              		.cfi_def_cfa_offset 8
 727 02a0 C3       		ret
 728              	.LVL87:
 729              		.p2align 4,,10
 730 02a1 0F1F8000 		.p2align 3
 730      000000
 731              	.L223:
 732              		.cfi_restore_state
 733              	.LBB241:
 734              	.LBB234:
 735              	.LBB196:
 736              	.LBB197:
 737              		.loc 3 96 0
 738 02a8 488B0424 		movq	(%rsp), %rax
 739              	.LVL88:
 740 02ac C74014FE 		movl	$-2, 20(%rax)
 740      FFFFFF
 741 02b3 EBC3     		jmp	.L10
 742              	.LVL89:
 743              	.L15:
 744              	.LBE197:
 745              	.LBE196:
 746              	.LBB198:
 747              	.LBB153:
 748              		.loc 1 135 0
 749 02b5 E8000000 		call	_ZL9read_longP8_IO_FILE
 749      00
 750              	.LVL90:
 751              	.LBB154:
 752              	.LBB155:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 753              		.loc 3 76 0
 754 02ba 488B1C24 		movq	(%rsp), %rbx
 755              	.LVL91:
 756              	.LBE155:
 757              	.LBE154:
 758              		.loc 1 137 0
 759 02be 4C89F7   		movq	%r14, %rdi
 760              	.LBB157:
 761              	.LBB156:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 762              		.loc 3 76 0
 763 02c1 894308   		movl	%eax, 8(%rbx)
 764              	.LVL92:
 765              	.LBE156:
 766              	.LBE157:
 767              		.loc 1 137 0
 768 02c4 E8000000 		call	_ZL9read_longP8_IO_FILE
 768      00
 769              	.LVL93:
 770              	.LBE153:
 771              	.LBE198:
 772              		.loc 1 120 0
 773 02c9 99       		cltd
 774              	.LBB199:
 775              	.LBB174:
 776              		.loc 1 140 0
 777 02ca 4C89F7   		movq	%r14, %rdi
 778              	.LBB158:
 779              	.LBB159:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 780              		.loc 3 80 0
 781 02cd 48891C24 		movq	%rbx, (%rsp)
 782              	.LVL94:
 783              	.LBE159:
 784              	.LBE158:
 785              	.LBE174:
 786              	.LBE199:
 787              		.loc 1 120 0
 788 02d1 83E202   		andl	$2, %edx
 789 02d4 83EA01   		subl	$1, %edx
 790 02d7 8954241C 		movl	%edx, 28(%rsp)
 791              	.LVL95:
 792              	.LBB200:
 793              	.LBB175:
 794              	.LBB161:
 795              	.LBB160:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 796              		.loc 3 80 0
 797 02db 99       		cltd
 798              	.LVL96:
 799 02dc 31D0     		xorl	%edx, %eax
 800              	.LVL97:
 801 02de 89430C   		movl	%eax, 12(%rbx)
 802 02e1 29530C   		subl	%edx, 12(%rbx)
 803              	.LBE160:
 804              	.LBE161:
 805              		.loc 1 149 0
 806 02e4 8D5DD8   		leal	-40(%rbp), %ebx
 807              	.LVL98:
 808              		.loc 1 140 0
 809 02e7 E8000000 		call	_ZL9read_wordP8_IO_FILE
 809      00
 810              	.LVL99:
 811              		.loc 1 141 0
 812 02ec 4C89F7   		movq	%r14, %rdi
 813 02ef E8000000 		call	_ZL9read_wordP8_IO_FILE
 813      00
 814              	.LVL100:
 815              		.loc 1 142 0
 816 02f4 4C89F7   		movq	%r14, %rdi
 817              		.loc 1 141 0
 818 02f7 0FB7C0   		movzwl	%ax, %eax
 819 02fa 89442418 		movl	%eax, 24(%rsp)
 820              	.LVL101:
 821              		.loc 1 142 0
 822 02fe E8000000 		call	_ZL10read_dwordP8_IO_FILE
 822      00
 823              	.LVL102:
 824              		.loc 1 143 0
 825 0303 4C89F7   		movq	%r14, %rdi
 826              		.loc 1 142 0
 827 0306 89442408 		movl	%eax, 8(%rsp)
 828              	.LVL103:
 829              		.loc 1 143 0
 830 030a E8000000 		call	_ZL10read_dwordP8_IO_FILE
 830      00
 831              	.LVL104:
 832              		.loc 1 144 0
 833 030f 4C89F7   		movq	%r14, %rdi
 834              		.loc 1 143 0
 835 0312 4189C7   		movl	%eax, %r15d
 836              	.LVL105:
 837              		.loc 1 144 0
 838 0315 E8000000 		call	_ZL9read_longP8_IO_FILE
 838      00
 839              	.LVL106:
 840              		.loc 1 145 0
 841 031a 4C89F7   		movq	%r14, %rdi
 842 031d E8000000 		call	_ZL9read_longP8_IO_FILE
 842      00
 843              	.LVL107:
 844              		.loc 1 146 0
 845 0322 4C89F7   		movq	%r14, %rdi
 846 0325 E8000000 		call	_ZL10read_dwordP8_IO_FILE
 846      00
 847              	.LVL108:
 848              		.loc 1 147 0
 849 032a 4C89F7   		movq	%r14, %rdi
 850              		.loc 1 146 0
 851 032d 4189C5   		movl	%eax, %r13d
 852              	.LVL109:
 853              		.loc 1 147 0
 854 0330 E8000000 		call	_ZL10read_dwordP8_IO_FILE
 854      00
 855              	.LVL110:
 856              	.LBB162:
 857              		.loc 1 151 0
 858 0335 448B4424 		movl	8(%rsp), %r8d
 858      08
 859 033a 4585C0   		testl	%r8d, %r8d
 860 033d 0F85F307 		jne	.L119
 860      0000
 861 0343 8B7C2418 		movl	24(%rsp), %edi
 862 0347 83FF07   		cmpl	$7, %edi
 863 034a 0F8EE607 		jle	.L119
 863      0000
 864              		.loc 1 151 0 is_stmt 0 discriminator 1
 865 0350 B8200000 		movl	$32, %eax
 865      00
 866 0355 488B3424 		movq	(%rsp), %rsi
 867 0359 99       		cltd
 868 035a F7FF     		idivl	%edi
 869 035c 8B4E08   		movl	8(%rsi), %ecx
 870              	.LVL111:
 871 035f 39C8     		cmpl	%ecx, %eax
 872 0361 7D34     		jge	.L217
 873              	.LVL112:
 874              	.LBB163:
 875              		.loc 1 154 0 is_stmt 1
 876 0363 8B542418 		movl	24(%rsp), %edx
 877 0367 488B0424 		movq	(%rsp), %rax
 878 036b 4501FF   		addl	%r15d, %r15d
 879              	.LVL113:
 880 036e C1FA03   		sarl	$3, %edx
 881              	.LVL114:
 882 0371 8B700C   		movl	12(%rax), %esi
 883              	.LVL115:
 884 0374 8D4107   		leal	7(%rcx), %eax
 885              	.LVL116:
 886 0377 0FAFD1   		imull	%ecx, %edx
 887              	.LVL117:
 888 037a C1F803   		sarl	$3, %eax
 889              	.LVL118:
 890 037d 83C003   		addl	$3, %eax
 891              	.LVL119:
 892 0380 83C203   		addl	$3, %edx
 893              	.LVL120:
 894 0383 83E0FC   		andl	$-4, %eax
 895              	.LVL121:
 896 0386 83E2FC   		andl	$-4, %edx
 897              	.LVL122:
 898 0389 01D0     		addl	%edx, %eax
 899 038b 0FAFC6   		imull	%esi, %eax
 900 038e 4439F8   		cmpl	%r15d, %eax
 901 0391 0F84FE07 		je	.L113
 901      0000
 902              	.LVL123:
 903              	.L217:
 904              	.LBE163:
 905              	.LBE162:
 906              	.LBE175:
 907              	.LBE200:
 908              		.loc 1 119 0
 909 0397 C6442436 		movb	$0, 54(%rsp)
 909      00
 910              	.LBB201:
 911              	.LBB176:
 912              	.LBB172:
 913              	.LBB170:
 914 039c C7442408 		movl	$0, 8(%rsp)
 914      00000000 
 915              	.LBE170:
 916              	.LBE172:
 917              	.LBE176:
 918              	.LBE201:
 919              		.loc 1 73 0
 920 03a4 C7442424 		movl	$3, 36(%rsp)
 920      03000000 
 921 03ac E965FDFF 		jmp	.L16
 921      FF
 922              	.LVL124:
 923              		.p2align 4,,10
 924 03b1 0F1F8000 		.p2align 3
 924      000000
 925              	.L20:
 926              		.loc 1 173 0
 927 03b8 4C89F7   		movq	%r14, %rdi
 928 03bb E8000000 		call	fclose
 928      00
 929              	.LVL125:
 930              	.LBB202:
 931              	.LBB203:
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 932              		.loc 3 76 0
 933 03c0 488B0424 		movq	(%rsp), %rax
 934 03c4 C7400800 		movl	$0, 8(%rax)
 934      000000
 935              	.LVL126:
 936              	.LBE203:
 937              	.LBE202:
 938              	.LBB204:
 939              	.LBB205:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 940              		.loc 3 80 0
 941 03cb C7400C00 		movl	$0, 12(%rax)
 941      000000
 942              	.LVL127:
 943              	.LBE205:
 944              	.LBE204:
 945              	.LBB206:
 946              	.LBB207:
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 947              		.loc 3 84 0
 948 03d2 C7401000 		movl	$0, 16(%rax)
 948      000000
 949              	.LVL128:
 950              	.LBE207:
 951              	.LBE206:
 952              	.LBB208:
 953              	.LBB209:
 954              		.loc 3 96 0
 955 03d9 C74014FD 		movl	$-3, 20(%rax)
 955      FFFFFF
 956 03e0 E993FEFF 		jmp	.L10
 956      FF
 957              	.LVL129:
 958              	.L34:
 959              	.LBE209:
 960              	.LBE208:
 961              		.loc 1 208 0
 962 03e5 0FAFFE   		imull	%esi, %edi
 963 03e8 0FAFC7   		imull	%edi, %eax
 964 03eb 4863F8   		movslq	%eax, %rdi
 965 03ee E8000000 		call	_Znam
 965      00
 966              	.LVL130:
 967              		.loc 1 218 0
 968 03f3 837C241C 		cmpl	$-1, 28(%rsp)
 968      FF
 969              		.loc 1 208 0
 970 03f8 488B1424 		movq	(%rsp), %rdx
 971 03fc 48894228 		movq	%rax, 40(%rdx)
 972              		.loc 1 209 0
 973 0400 C7423001 		movl	$1, 48(%rdx)
 973      000000
 974              	.LVL131:
 975              		.loc 1 218 0
 976 0407 0F84B207 		je	.L227
 976      0000
 977              	.LVL132:
 978 040d 488B3424 		movq	(%rsp), %rsi
 979              		.loc 1 222 0
 980 0411 C7442414 		movl	$0, 20(%rsp)
 980      00000000 
 981 0419 8B760C   		movl	12(%rsi), %esi
 982 041c 89742420 		movl	%esi, 32(%rsp)
 983              	.LVL133:
 984              	.L36:
 985              	.LBB210:
 986              		.loc 1 226 0
 987 0420 8B742420 		movl	32(%rsp), %esi
 988 0424 39742414 		cmpl	%esi, 20(%rsp)
 989              	.LBE210:
 990              		.loc 1 215 0
 991 0428 C6442437 		movb	$0, 55(%rsp)
 991      00
 992              	.LBB229:
 993              		.loc 1 226 0
 994 042d 0F840306 		je	.L37
 994      0000
 995 0433 48635424 		movslq	36(%rsp), %rdx
 995      24
 996 0438 31ED     		xorl	%ebp, %ebp
 997              	.LVL134:
 998 043a 4531FF   		xorl	%r15d, %r15d
 999 043d C7442430 		movl	$0, 48(%rsp)
 999      00000000 
 1000 0445 C7442410 		movl	$0, 16(%rsp)
 1000      00000000 
 1001 044d 48895424 		movq	%rdx, 40(%rsp)
 1001      28
 1002              	.LVL135:
 1003              		.p2align 4,,10
 1004 0452 660F1F44 		.p2align 3
 1004      0000
 1005              	.L99:
 1006 0458 488B3424 		movq	(%rsp), %rsi
 1007              	.LBB211:
 1008              		.loc 1 227 0
 1009 045c 8B5C2414 		movl	20(%rsp), %ebx
 1010 0460 448B6608 		movl	8(%rsi), %r12d
 1011              	.LVL136:
 1012 0464 410FAFDC 		imull	%r12d, %ebx
 1013 0468 0FAF5E10 		imull	16(%rsi), %ebx
 1014 046c 4863DB   		movslq	%ebx, %rbx
 1015 046f 4801C3   		addq	%rax, %rbx
 1016              	.LVL137:
 1017              	.LBB212:
 1018              		.loc 1 229 0
 1019 0472 8B442418 		movl	24(%rsp), %eax
 1020 0476 83F820   		cmpl	$32, %eax
 1021 0479 0F872101 		ja	.L38
 1021      0000
 1022 047f FF24C500 		jmp	*.L40(,%rax,8)
 1022      000000
 1023              		.section	.rodata._ZN12Fl_BMP_ImageC2EPKc,"a",@progbits
 1024              		.align 8
 1025              		.align 4
 1026              	.L40:
 1027 0000 00000000 		.quad	.L38
 1027      00000000 
 1028 0008 00000000 		.quad	.L39
 1028      00000000 
 1029 0010 00000000 		.quad	.L38
 1029      00000000 
 1030 0018 00000000 		.quad	.L38
 1030      00000000 
 1031 0020 00000000 		.quad	.L41
 1031      00000000 
 1032 0028 00000000 		.quad	.L38
 1032      00000000 
 1033 0030 00000000 		.quad	.L38
 1033      00000000 
 1034 0038 00000000 		.quad	.L38
 1034      00000000 
 1035 0040 00000000 		.quad	.L42
 1035      00000000 
 1036 0048 00000000 		.quad	.L38
 1036      00000000 
 1037 0050 00000000 		.quad	.L38
 1037      00000000 
 1038 0058 00000000 		.quad	.L38
 1038      00000000 
 1039 0060 00000000 		.quad	.L38
 1039      00000000 
 1040 0068 00000000 		.quad	.L38
 1040      00000000 
 1041 0070 00000000 		.quad	.L38
 1041      00000000 
 1042 0078 00000000 		.quad	.L38
 1042      00000000 
 1043 0080 00000000 		.quad	.L43
 1043      00000000 
 1044 0088 00000000 		.quad	.L38
 1044      00000000 
 1045 0090 00000000 		.quad	.L38
 1045      00000000 
 1046 0098 00000000 		.quad	.L38
 1046      00000000 
 1047 00a0 00000000 		.quad	.L38
 1047      00000000 
 1048 00a8 00000000 		.quad	.L38
 1048      00000000 
 1049 00b0 00000000 		.quad	.L38
 1049      00000000 
 1050 00b8 00000000 		.quad	.L38
 1050      00000000 
 1051 00c0 00000000 		.quad	.L44
 1051      00000000 
 1052 00c8 00000000 		.quad	.L38
 1052      00000000 
 1053 00d0 00000000 		.quad	.L38
 1053      00000000 
 1054 00d8 00000000 		.quad	.L38
 1054      00000000 
 1055 00e0 00000000 		.quad	.L38
 1055      00000000 
 1056 00e8 00000000 		.quad	.L38
 1056      00000000 
 1057 00f0 00000000 		.quad	.L38
 1057      00000000 
 1058 00f8 00000000 		.quad	.L38
 1058      00000000 
 1059 0100 00000000 		.quad	.L45
 1059      00000000 
 1060              		.section	.text._ZN12Fl_BMP_ImageC2EPKc
 1061              	.L41:
 1062              	.LVL138:
 1063              	.LBB213:
 1064              		.loc 1 258 0 discriminator 1
 1065 0486 4585E4   		testl	%r12d, %r12d
 1066 0489 0F8EC900 		jle	.L53
 1066      0000
 1067 048f 89E8     		movl	%ebp, %eax
 1068              		.loc 1 258 0 is_stmt 0
 1069 0491 41BDF0FF 		movl	$-16, %r13d
 1069      FFFF
 1070 0497 4889DD   		movq	%rbx, %rbp
 1071              	.LVL139:
 1072 049a 8B742430 		movl	48(%rsp), %esi
 1073              	.LVL140:
 1074 049e 89C3     		movl	%eax, %ebx
 1075              	.LVL141:
 1076 04a0 EB5C     		jmp	.L75
 1077              	.LVL142:
 1078              		.p2align 4,,10
 1079 04a2 660F1F44 		.p2align 3
 1079      0000
 1080              	.L230:
 1081              		.loc 1 261 0 is_stmt 1
 1082 04a8 837C2408 		cmpl	$2, 8(%rsp)
 1082      02
 1083 04ad BE010000 		movl	$1, %esi
 1083      00
 1084              	.LVL143:
 1085 04b2 0F849804 		je	.L228
 1085      0000
 1086              	.LVL144:
 1087              	.L63:
 1088              		.loc 1 297 0
 1089 04b8 4180FDF0 		cmpb	$-16, %r13b
 1090 04bc C7442410 		movl	$-1, 16(%rsp)
 1090      FFFFFFFF 
 1091 04c4 0F842305 		je	.L74
 1091      0000
 1092              	.LVL145:
 1093              	.L73:
 1094              		.loc 1 312 0
 1095 04ca 4489F8   		movl	%r15d, %eax
 1096              		.loc 1 314 0
 1097 04cd 4883C503 		addq	$3, %rbp
 1098              	.LVL146:
 1099              		.loc 1 309 0
 1100 04d1 41BDF0FF 		movl	$-16, %r13d
 1100      FFFF
 1101              		.loc 1 312 0
 1102 04d7 83E00F   		andl	$15, %eax
 1103 04da 488D0440 		leaq	(%rax,%rax,2), %rax
 1104 04de 0FB67C04 		movzbl	66(%rsp,%rax), %edi
 1104      42
 1105 04e3 40887DFD 		movb	%dil, -3(%rbp)
 1106              	.LVL147:
 1107              		.loc 1 313 0
 1108 04e7 0FB67C04 		movzbl	65(%rsp,%rax), %edi
 1108      41
 1109 04ec 40887DFE 		movb	%dil, -2(%rbp)
 1110              		.loc 1 314 0
 1111 04f0 0FB64404 		movzbl	64(%rsp,%rax), %eax
 1111      40
 1112 04f5 8845FF   		movb	%al, -1(%rbp)
 1113              	.LVL148:
 1114              	.L70:
 1115              		.loc 1 258 0 discriminator 2
 1116 04f8 4183EC01 		subl	$1, %r12d
 1117              	.LVL149:
 1118 04fc 7454     		je	.L229
 1119              	.LVL150:
 1120              	.L75:
 1121              		.loc 1 260 0
 1122 04fe 85F6     		testl	%esi, %esi
 1123 0500 74A6     		je	.L230
 1124              	.LVL151:
 1125              	.L62:
 1126              		.loc 1 294 0
 1127 0502 83EE01   		subl	$1, %esi
 1128              	.LVL152:
 1129              		.loc 1 297 0
 1130 0505 4180FDF0 		cmpb	$-16, %r13b
 1131 0509 75BF     		jne	.L73
 1132              		.loc 1 299 0
 1133 050b 448B7C24 		movl	16(%rsp), %r15d
 1133      10
 1134              	.LVL153:
 1135 0510 4585FF   		testl	%r15d, %r15d
 1136 0513 4489F8   		movl	%r15d, %eax
 1137 0516 0F88D104 		js	.L74
 1137      0000
 1138 051c C1F804   		sarl	$4, %eax
 1139 051f 83E00F   		andl	$15, %eax
 1140              	.LVL154:
 1141              	.L72:
 1142              		.loc 1 303 0
 1143 0522 4898     		cltq
 1144              		.loc 1 305 0
 1145 0524 4883C503 		addq	$3, %rbp
 1146              	.LVL155:
 1147              		.loc 1 307 0
 1148 0528 41BD0F00 		movl	$15, %r13d
 1148      0000
 1149              	.LVL156:
 1150              		.loc 1 303 0
 1151 052e 488D0440 		leaq	(%rax,%rax,2), %rax
 1152 0532 0FB67C04 		movzbl	66(%rsp,%rax), %edi
 1152      42
 1153 0537 40887DFD 		movb	%dil, -3(%rbp)
 1154              	.LVL157:
 1155              		.loc 1 304 0
 1156 053b 0FB67C04 		movzbl	65(%rsp,%rax), %edi
 1156      41
 1157 0540 40887DFE 		movb	%dil, -2(%rbp)
 1158              		.loc 1 305 0
 1159 0544 0FB64404 		movzbl	64(%rsp,%rax), %eax
 1159      40
 1160 0549 8845FF   		movb	%al, -1(%rbp)
 1161              	.LVL158:
 1162              		.loc 1 258 0
 1163 054c 4183EC01 		subl	$1, %r12d
 1164              	.LVL159:
 1165 0550 75AC     		jne	.L75
 1166              	.L229:
 1167 0552 89742430 		movl	%esi, 48(%rsp)
 1168 0556 89DD     		movl	%ebx, %ebp
 1169              	.LVL160:
 1170              	.L53:
 1171              		.loc 1 319 0
 1172 0558 8B542408 		movl	8(%rsp), %edx
 1173 055c 85D2     		testl	%edx, %edx
 1174 055e 7540     		jne	.L38
 1175              	.LVL161:
 1176              		.loc 1 321 0
 1177 0560 488B0424 		movq	(%rsp), %rax
 1178 0564 8B4008   		movl	8(%rax), %eax
 1179 0567 8944243C 		movl	%eax, 60(%rsp)
 1180 056b 83C001   		addl	$1, %eax
 1181 056e 4189C7   		movl	%eax, %r15d
 1182              	.LVL162:
 1183 0571 41C1EF1F 		shrl	$31, %r15d
 1184 0575 4101C7   		addl	%eax, %r15d
 1185 0578 41D1FF   		sarl	%r15d
 1186              	.LVL163:
 1187 057b 41F6C703 		testb	$3, %r15b
 1188 057f 741F     		je	.L38
 1189              		.p2align 4,,10
 1190 0581 0F1F8000 		.p2align 3
 1190      000000
 1191              	.L76:
 1192              		.loc 1 322 0 discriminator 2
 1193 0588 4C89F7   		movq	%r14, %rdi
 1194              		.loc 1 321 0 discriminator 2
 1195 058b 4183C701 		addl	$1, %r15d
 1196              	.LVL164:
 1197              		.loc 1 322 0 discriminator 2
 1198 058f E8000000 		call	_IO_getc
 1198      00
 1199              	.LVL165:
 1200              		.loc 1 321 0 discriminator 2
 1201 0594 41F6C703 		testb	$3, %r15b
 1202 0598 75EE     		jne	.L76
 1203              	.LVL166:
 1204 059a 660F1F44 		.p2align 4,,10
 1204      0000
 1205              		.p2align 3
 1206              	.L38:
 1207              	.LBE213:
 1208              	.LBE212:
 1209              	.LBE211:
 1210              		.loc 1 226 0 discriminator 2
 1211 05a0 8B54241C 		movl	28(%rsp), %edx
 1212 05a4 01542414 		addl	%edx, 20(%rsp)
 1213 05a8 8B442414 		movl	20(%rsp), %eax
 1214              	.LVL167:
 1215 05ac 39442420 		cmpl	%eax, 32(%rsp)
 1216 05b0 0F848004 		je	.L37
 1216      0000
 1217 05b6 488B0424 		movq	(%rsp), %rax
 1218              	.LVL168:
 1219 05ba 488B4028 		movq	40(%rax), %rax
 1220 05be E995FEFF 		jmp	.L99
 1220      FF
 1221              	.LVL169:
 1222              	.L39:
 1223              	.LBB225:
 1224              	.LBB221:
 1225              	.LBB217:
 1226              		.loc 1 232 0 discriminator 1
 1227 05c3 4585E4   		testl	%r12d, %r12d
 1228 05c6 0F8E8C00 		jle	.L55
 1228      0000
 1229 05cc 4883C303 		addq	$3, %rbx
 1230              	.LVL170:
 1231              		.loc 1 232 0 is_stmt 0
 1232 05d0 41BD80FF 		movl	$-128, %r13d
 1232      FFFF
 1233 05d6 0FB64424 		movzbl	55(%rsp), %eax
 1233      37
 1234 05db EB32     		jmp	.L60
 1235              	.LVL171:
 1236 05dd 0F1F00   		.p2align 4,,10
 1237              		.p2align 3
 1238              	.L233:
 1239              		.loc 1 236 0 is_stmt 1
 1240 05e0 0FB65424 		movzbl	69(%rsp), %edx
 1240      45
 1241              		.loc 1 245 0
 1242 05e5 4180FD01 		cmpb	$1, %r13b
 1243              		.loc 1 236 0
 1244 05e9 8853FD   		movb	%dl, -3(%rbx)
 1245              		.loc 1 237 0
 1246 05ec 0FB65424 		movzbl	68(%rsp), %edx
 1246      44
 1247 05f1 8853FE   		movb	%dl, -2(%rbx)
 1248              	.LVL172:
 1249              		.loc 1 238 0
 1250 05f4 0FB65424 		movzbl	67(%rsp), %edx
 1250      43
 1251 05f9 8853FF   		movb	%dl, -1(%rbx)
 1252              	.LVL173:
 1253              		.loc 1 245 0
 1254 05fc 743E     		je	.L126
 1255              	.L234:
 1256              		.loc 1 246 0
 1257 05fe 450FB6ED 		movzbl	%r13b, %r13d
 1258 0602 4883C303 		addq	$3, %rbx
 1259 0606 41D1ED   		shrl	%r13d
 1260              	.LVL174:
 1261              		.loc 1 232 0
 1262 0609 4183EC01 		subl	$1, %r12d
 1263              	.LVL175:
 1264 060d 743D     		je	.L231
 1265              	.LVL176:
 1266              	.L60:
 1267              		.loc 1 233 0
 1268 060f 4180FD80 		cmpb	$-128, %r13b
 1269 0613 0F84C703 		je	.L232
 1269      0000
 1270              	.LVL177:
 1271              	.L56:
 1272              		.loc 1 235 0
 1273 0619 4484E8   		testb	%r13b, %al
 1274 061c 75C2     		jne	.L233
 1275              		.loc 1 240 0
 1276 061e 0FB65424 		movzbl	66(%rsp), %edx
 1276      42
 1277              		.loc 1 245 0
 1278 0623 4180FD01 		cmpb	$1, %r13b
 1279              		.loc 1 240 0
 1280 0627 8853FD   		movb	%dl, -3(%rbx)
 1281              		.loc 1 241 0
 1282 062a 0FB65424 		movzbl	65(%rsp), %edx
 1282      41
 1283 062f 8853FE   		movb	%dl, -2(%rbx)
 1284              	.LVL178:
 1285              		.loc 1 242 0
 1286 0632 0FB65424 		movzbl	64(%rsp), %edx
 1286      40
 1287 0637 8853FF   		movb	%dl, -1(%rbx)
 1288              	.LVL179:
 1289              		.loc 1 245 0
 1290 063a 75C2     		jne	.L234
 1291              	.L126:
 1292 063c 4883C303 		addq	$3, %rbx
 1293              		.loc 1 232 0
 1294 0640 4183EC01 		subl	$1, %r12d
 1295              	.LVL180:
 1296              		.loc 1 248 0
 1297 0644 41BD80FF 		movl	$-128, %r13d
 1297      FFFF
 1298              	.LVL181:
 1299              		.loc 1 232 0
 1300 064a 75C3     		jne	.L60
 1301              	.L231:
 1302 064c 88442437 		movb	%al, 55(%rsp)
 1303 0650 488B0424 		movq	(%rsp), %rax
 1304 0654 448B6008 		movl	8(%rax), %r12d
 1305              	.LVL182:
 1306              	.L55:
 1307              		.loc 1 252 0
 1308 0658 458D7C24 		leal	14(%r12), %r15d
 1308      0E
 1309              	.LVL183:
 1310 065d 4183C407 		addl	$7, %r12d
 1311 0661 450F49FC 		cmovns	%r12d, %r15d
 1312 0665 41C1FF03 		sarl	$3, %r15d
 1313              	.LVL184:
 1314 0669 41F6C703 		testb	$3, %r15b
 1315 066d 0F842DFF 		je	.L38
 1315      FFFF
 1316              		.p2align 4,,10
 1317 0673 0F1F4400 		.p2align 3
 1317      00
 1318              	.L61:
 1319              		.loc 1 253 0 discriminator 2
 1320 0678 4C89F7   		movq	%r14, %rdi
 1321              		.loc 1 252 0 discriminator 2
 1322 067b 4183C701 		addl	$1, %r15d
 1323              	.LVL185:
 1324              		.loc 1 253 0 discriminator 2
 1325 067f E8000000 		call	_IO_getc
 1325      00
 1326              	.LVL186:
 1327              		.loc 1 252 0 discriminator 2
 1328 0684 41F6C703 		testb	$3, %r15b
 1329 0688 75EE     		jne	.L61
 1330 068a E911FFFF 		jmp	.L38
 1330      FF
 1331              	.LVL187:
 1332              	.L45:
 1333              		.loc 1 418 0 discriminator 3
 1334 068f 4585E4   		testl	%r12d, %r12d
 1335 0692 4C8B6C24 		movq	40(%rsp), %r13
 1335      28
 1336 0697 0F8E03FF 		jle	.L38
 1336      FFFF
 1337              	.LVL188:
 1338 069d 0F1F00   		.p2align 4,,10
 1339              		.p2align 3
 1340              	.L98:
 1341              		.loc 1 419 0 discriminator 2
 1342 06a0 4C89F7   		movq	%r14, %rdi
 1343 06a3 E8000000 		call	_IO_getc
 1343      00
 1344              	.LVL189:
 1345              		.loc 1 420 0 discriminator 2
 1346 06a8 4C89F7   		movq	%r14, %rdi
 1347              		.loc 1 419 0 discriminator 2
 1348 06ab 884302   		movb	%al, 2(%rbx)
 1349              		.loc 1 420 0 discriminator 2
 1350 06ae E8000000 		call	_IO_getc
 1350      00
 1351              	.LVL190:
 1352              		.loc 1 421 0 discriminator 2
 1353 06b3 4C89F7   		movq	%r14, %rdi
 1354              		.loc 1 420 0 discriminator 2
 1355 06b6 884301   		movb	%al, 1(%rbx)
 1356              		.loc 1 421 0 discriminator 2
 1357 06b9 E8000000 		call	_IO_getc
 1357      00
 1358              	.LVL191:
 1359              		.loc 1 422 0 discriminator 2
 1360 06be 4C89F7   		movq	%r14, %rdi
 1361              		.loc 1 421 0 discriminator 2
 1362 06c1 8803     		movb	%al, (%rbx)
 1363              		.loc 1 422 0 discriminator 2
 1364 06c3 E8000000 		call	_IO_getc
 1364      00
 1365              	.LVL192:
 1366 06c8 884303   		movb	%al, 3(%rbx)
 1367              		.loc 1 418 0 discriminator 2
 1368 06cb 4C01EB   		addq	%r13, %rbx
 1369              	.LVL193:
 1370 06ce 4183EC01 		subl	$1, %r12d
 1371              	.LVL194:
 1372 06d2 75CC     		jne	.L98
 1373 06d4 E9C7FEFF 		jmp	.L38
 1373      FF
 1374              	.LVL195:
 1375              	.L44:
 1376              		.loc 1 405 0 discriminator 3
 1377 06d9 4585E4   		testl	%r12d, %r12d
 1378 06dc 4C8B6C24 		movq	40(%rsp), %r13
 1378      28
 1379 06e1 7E36     		jle	.L47
 1380              	.LVL196:
 1381              		.p2align 4,,10
 1382 06e3 0F1F4400 		.p2align 3
 1382      00
 1383              	.L96:
 1384              		.loc 1 406 0 discriminator 2
 1385 06e8 4C89F7   		movq	%r14, %rdi
 1386 06eb E8000000 		call	_IO_getc
 1386      00
 1387              	.LVL197:
 1388              		.loc 1 407 0 discriminator 2
 1389 06f0 4C89F7   		movq	%r14, %rdi
 1390              		.loc 1 406 0 discriminator 2
 1391 06f3 884302   		movb	%al, 2(%rbx)
 1392              		.loc 1 407 0 discriminator 2
 1393 06f6 E8000000 		call	_IO_getc
 1393      00
 1394              	.LVL198:
 1395              		.loc 1 408 0 discriminator 2
 1396 06fb 4C89F7   		movq	%r14, %rdi
 1397              		.loc 1 407 0 discriminator 2
 1398 06fe 884301   		movb	%al, 1(%rbx)
 1399              		.loc 1 408 0 discriminator 2
 1400 0701 E8000000 		call	_IO_getc
 1400      00
 1401              	.LVL199:
 1402 0706 8803     		movb	%al, (%rbx)
 1403              		.loc 1 405 0 discriminator 2
 1404 0708 4C01EB   		addq	%r13, %rbx
 1405              	.LVL200:
 1406 070b 4183EC01 		subl	$1, %r12d
 1407              	.LVL201:
 1408 070f 75D7     		jne	.L96
 1409 0711 488B0424 		movq	(%rsp), %rax
 1410 0715 448B6008 		movl	8(%rax), %r12d
 1411              	.LVL202:
 1412              	.L47:
 1413              		.loc 1 412 0
 1414 0719 478D3C64 		leal	(%r12,%r12,2), %r15d
 1415              	.LVL203:
 1416 071d 41F6C703 		testb	$3, %r15b
 1417 0721 0F8479FE 		je	.L38
 1417      FFFF
 1418 0727 660F1F84 		.p2align 4,,10
 1418      00000000 
 1418      00
 1419              		.p2align 3
 1420              	.L97:
 1421              		.loc 1 413 0 discriminator 2
 1422 0730 4C89F7   		movq	%r14, %rdi
 1423              		.loc 1 412 0 discriminator 2
 1424 0733 4183C701 		addl	$1, %r15d
 1425              	.LVL204:
 1426              		.loc 1 413 0 discriminator 2
 1427 0737 E8000000 		call	_IO_getc
 1427      00
 1428              	.LVL205:
 1429              		.loc 1 412 0 discriminator 2
 1430 073c 41F6C703 		testb	$3, %r15b
 1431 0740 75EE     		jne	.L97
 1432 0742 E959FEFF 		jmp	.L38
 1432      FF
 1433              	.LVL206:
 1434              	.L43:
 1435              	.LBB214:
 1436              		.loc 1 385 0 discriminator 1
 1437 0747 4585E4   		testl	%r12d, %r12d
 1438 074a 0F8E9600 		jle	.L49
 1438      0000
 1439 0750 896C243C 		movl	%ebp, 60(%rsp)
 1440 0754 448B7C24 		movl	56(%rsp), %r15d
 1440      38
 1441              	.LVL207:
 1442 0759 4889DD   		movq	%rbx, %rbp
 1443              	.LVL208:
 1444 075c 488B5C24 		movq	40(%rsp), %rbx
 1444      28
 1445              	.LVL209:
 1446 0761 EB28     		jmp	.L94
 1447              	.LVL210:
 1448              		.p2align 4,,10
 1449 0763 0F1F4400 		.p2align 3
 1449      00
 1450              	.L236:
 1451              	.LBB215:
 1452              		.loc 1 389 0
 1453 0768 89C1     		movl	%eax, %ecx
 1454 076a 41C1FD03 		sarl	$3, %r13d
 1455              	.LVL211:
 1456              		.loc 1 390 0
 1457 076e 83E0F8   		andl	$-8, %eax
 1458              	.LVL212:
 1459              		.loc 1 389 0
 1460 0771 C1E105   		sall	$5, %ecx
 1461              	.LVL213:
 1462 0774 4183E51C 		andl	$28, %r13d
 1463              		.loc 1 390 0
 1464 0778 884500   		movb	%al, 0(%rbp)
 1465              		.loc 1 389 0
 1466 077b 4109CD   		orl	%ecx, %r13d
 1467 077e 44886D01 		movb	%r13b, 1(%rbp)
 1468              	.LBE215:
 1469              		.loc 1 385 0
 1470 0782 4801DD   		addq	%rbx, %rbp
 1471              	.LVL214:
 1472 0785 4183EC01 		subl	$1, %r12d
 1473              	.LVL215:
 1474 0789 744F     		je	.L235
 1475              	.L94:
 1476              	.LBB216:
 1477              		.loc 1 386 0
 1478 078b 4C89F7   		movq	%r14, %rdi
 1479 078e E8000000 		call	_IO_getc
 1479      00
 1480              	.LVL216:
 1481 0793 4189C5   		movl	%eax, %r13d
 1482              	.LVL217:
 1483 0796 4C89F7   		movq	%r14, %rdi
 1484 0799 450FB6ED 		movzbl	%r13b, %r13d
 1485 079d E8000000 		call	_IO_getc
 1485      00
 1486              	.LVL218:
 1487              		.loc 1 388 0
 1488 07a2 428D0CED 		leal	0(,%r13,8), %ecx
 1488      00000000 
 1489              		.loc 1 387 0
 1490 07aa 4585FF   		testl	%r15d, %r15d
 1491              		.loc 1 388 0
 1492 07ad 884D02   		movb	%cl, 2(%rbp)
 1493              		.loc 1 387 0
 1494 07b0 75B6     		jne	.L236
 1495 07b2 0FB6C0   		movzbl	%al, %eax
 1496              		.loc 1 393 0
 1497 07b5 41C1FD02 		sarl	$2, %r13d
 1498              	.LVL219:
 1499 07b9 89C1     		movl	%eax, %ecx
 1500 07bb 4183E538 		andl	$56, %r13d
 1501              		.loc 1 394 0
 1502 07bf 01C0     		addl	%eax, %eax
 1503              	.LVL220:
 1504              		.loc 1 393 0
 1505 07c1 C1E106   		sall	$6, %ecx
 1506              	.LVL221:
 1507              		.loc 1 394 0
 1508 07c4 83E0F8   		andl	$-8, %eax
 1509              		.loc 1 393 0
 1510 07c7 4109CD   		orl	%ecx, %r13d
 1511              		.loc 1 394 0
 1512 07ca 884500   		movb	%al, 0(%rbp)
 1513              	.LVL222:
 1514              		.loc 1 393 0
 1515 07cd 44886D01 		movb	%r13b, 1(%rbp)
 1516              	.LBE216:
 1517              		.loc 1 385 0
 1518 07d1 4801DD   		addq	%rbx, %rbp
 1519              	.LVL223:
 1520 07d4 4183EC01 		subl	$1, %r12d
 1521              	.LVL224:
 1522 07d8 75B1     		jne	.L94
 1523              	.L235:
 1524 07da 488B0424 		movq	(%rsp), %rax
 1525 07de 8B6C243C 		movl	60(%rsp), %ebp
 1526              	.LVL225:
 1527 07e2 448B6008 		movl	8(%rax), %r12d
 1528              	.LVL226:
 1529              	.L49:
 1530              	.LBE214:
 1531              		.loc 1 399 0
 1532 07e6 478D3C24 		leal	(%r12,%r12), %r15d
 1533              	.LVL227:
 1534 07ea 41F6C702 		testb	$2, %r15b
 1535 07ee 0F84ACFD 		je	.L38
 1535      FFFF
 1536              		.p2align 4,,10
 1537 07f4 0F1F4000 		.p2align 3
 1538              	.L95:
 1539              		.loc 1 400 0 discriminator 2
 1540 07f8 4C89F7   		movq	%r14, %rdi
 1541              		.loc 1 399 0 discriminator 2
 1542 07fb 4183C701 		addl	$1, %r15d
 1543              	.LVL228:
 1544              		.loc 1 400 0 discriminator 2
 1545 07ff E8000000 		call	_IO_getc
 1545      00
 1546              	.LVL229:
 1547              		.loc 1 399 0 discriminator 2
 1548 0804 41F6C703 		testb	$3, %r15b
 1549 0808 75EE     		jne	.L95
 1550 080a E991FDFF 		jmp	.L38
 1550      FF
 1551              	.LVL230:
 1552              	.L42:
 1553              		.loc 1 328 0 discriminator 1
 1554 080f 4585E4   		testl	%r12d, %r12d
 1555 0812 0F8ECB00 		jle	.L51
 1555      0000
 1556 0818 4189ED   		movl	%ebp, %r13d
 1557 081b 8B4C2430 		movl	48(%rsp), %ecx
 1558 081f 0FB66C24 		movzbl	54(%rsp), %ebp
 1558      36
 1559              	.LVL231:
 1560 0824 EB5C     		jmp	.L90
 1561              	.LVL232:
 1562 0826 662E0F1F 		.p2align 4,,10
 1562      84000000 
 1562      0000
 1563              		.p2align 3
 1564              	.L130:
 1565 0830 31C9     		xorl	%ecx, %ecx
 1566              	.LVL233:
 1567              		.loc 1 332 0
 1568 0832 C7442410 		movl	$-1, 16(%rsp)
 1568      FFFFFFFF 
 1569              	.LVL234:
 1570              	.L77:
 1571              		.loc 1 364 0 discriminator 1
 1572 083a 4C89F7   		movq	%r14, %rdi
 1573 083d 894C2430 		movl	%ecx, 48(%rsp)
 1574              	.LVL235:
 1575 0841 E8000000 		call	_IO_getc
 1575      00
 1576              	.LVL236:
 1577 0846 8B4C2430 		movl	48(%rsp), %ecx
 1578 084a 4189C7   		movl	%eax, %r15d
 1579              	.LVL237:
 1580              	.L87:
 1581              		.loc 1 370 0
 1582 084d 4963C7   		movslq	%r15d, %rax
 1583 0850 488D0440 		leaq	(%rax,%rax,2), %rax
 1584 0854 0FB67404 		movzbl	66(%rsp,%rax), %esi
 1584      42
 1585 0859 408833   		movb	%sil, (%rbx)
 1586              	.LVL238:
 1587              		.loc 1 371 0
 1588 085c 0FB67404 		movzbl	65(%rsp,%rax), %esi
 1588      41
 1589 0861 40887301 		movb	%sil, 1(%rbx)
 1590              	.LVL239:
 1591              		.loc 1 372 0
 1592 0865 0FB64404 		movzbl	64(%rsp,%rax), %eax
 1592      40
 1593 086a 884302   		movb	%al, 2(%rbx)
 1594 086d 488D4303 		leaq	3(%rbx), %rax
 1595              	.LVL240:
 1596 0871 4883C304 		addq	$4, %rbx
 1597 0875 4084ED   		testb	%bpl, %bpl
 1598 0878 480F44D8 		cmove	%rax, %rbx
 1599              	.LVL241:
 1600              		.loc 1 328 0
 1601 087c 4183EC01 		subl	$1, %r12d
 1602              	.LVL242:
 1603 0880 745A     		je	.L237
 1604              	.L90:
 1605              		.loc 1 330 0
 1606 0882 837C2408 		cmpl	$1, 8(%rsp)
 1606      01
 1607 0887 75A7     		jne	.L130
 1608              		.loc 1 335 0
 1609 0889 85C9     		testl	%ecx, %ecx
 1610 088b 0F85CB03 		jne	.L131
 1610      0000
 1611              		.loc 1 336 0
 1612 0891 4585ED   		testl	%r13d, %r13d
 1613 0894 741B     		je	.L82
 1614              	.LVL243:
 1615 0896 662E0F1F 		.p2align 4,,10
 1615      84000000 
 1615      0000
 1616              		.p2align 3
 1617              	.L182:
 1618              		.loc 1 337 0
 1619 08a0 4183ED01 		subl	$1, %r13d
 1620              	.LVL244:
 1621              		.loc 1 338 0
 1622 08a4 4C89F7   		movq	%r14, %rdi
 1623 08a7 E8000000 		call	_IO_getc
 1623      00
 1624              	.LVL245:
 1625              		.loc 1 336 0
 1626 08ac 4585ED   		testl	%r13d, %r13d
 1627 08af 75EF     		jne	.L182
 1628              	.L82:
 1629              		.loc 1 341 0
 1630 08b1 4C89F7   		movq	%r14, %rdi
 1631 08b4 E8000000 		call	_IO_getc
 1631      00
 1632              	.LVL246:
 1633 08b9 85C0     		testl	%eax, %eax
 1634 08bb 7563     		jne	.L238
 1635              		.loc 1 342 0
 1636 08bd 4C89F7   		movq	%r14, %rdi
 1637 08c0 E8000000 		call	_IO_getc
 1637      00
 1638              	.LVL247:
 1639 08c5 85C0     		testl	%eax, %eax
 1640 08c7 89C1     		movl	%eax, %ecx
 1641              	.LVL248:
 1642 08c9 0F85C100 		jne	.L84
 1642      0000
 1643              		.loc 1 344 0
 1644 08cf 4183C401 		addl	$1, %r12d
 1645              	.LVL249:
 1646              		.loc 1 345 0
 1647 08d3 4531ED   		xorl	%r13d, %r13d
 1648              	.LVL250:
 1649              		.loc 1 328 0
 1650 08d6 4183EC01 		subl	$1, %r12d
 1651              	.LVL251:
 1652 08da 75A6     		jne	.L90
 1653              	.LVL252:
 1654              	.L237:
 1655 08dc 894C2430 		movl	%ecx, 48(%rsp)
 1656 08e0 4489ED   		movl	%r13d, %ebp
 1657              	.LVL253:
 1658              	.L51:
 1659              		.loc 1 376 0
 1660 08e3 8B442408 		movl	8(%rsp), %eax
 1661 08e7 85C0     		testl	%eax, %eax
 1662 08e9 0F85B1FC 		jne	.L38
 1662      FFFF
 1663 08ef 488B0424 		movq	(%rsp), %rax
 1664 08f3 448B7808 		movl	8(%rax), %r15d
 1665              	.LVL254:
 1666              		.loc 1 378 0
 1667 08f7 41F6C703 		testb	$3, %r15b
 1668 08fb 0F849FFC 		je	.L38
 1668      FFFF
 1669              	.LVL255:
 1670              		.p2align 4,,10
 1671 0901 0F1F8000 		.p2align 3
 1671      000000
 1672              	.L91:
 1673              		.loc 1 379 0 discriminator 2
 1674 0908 4C89F7   		movq	%r14, %rdi
 1675              		.loc 1 378 0 discriminator 2
 1676 090b 4183C701 		addl	$1, %r15d
 1677              	.LVL256:
 1678              		.loc 1 379 0 discriminator 2
 1679 090f E8000000 		call	_IO_getc
 1679      00
 1680              	.LVL257:
 1681              		.loc 1 378 0 discriminator 2
 1682 0914 41F6C703 		testb	$3, %r15b
 1683 0918 75EE     		jne	.L91
 1684 091a E981FCFF 		jmp	.L38
 1684      FF
 1685              	.LVL258:
 1686 091f 90       		.p2align 4,,10
 1687              		.p2align 3
 1688              	.L238:
 1689              		.loc 1 359 0
 1690 0920 4C89F7   		movq	%r14, %rdi
 1691 0923 89442410 		movl	%eax, 16(%rsp)
 1692              	.LVL259:
 1693 0927 4531ED   		xorl	%r13d, %r13d
 1694              	.LVL260:
 1695 092a E8000000 		call	_IO_getc
 1695      00
 1696              	.LVL261:
 1697 092f 8B4C2410 		movl	16(%rsp), %ecx
 1698 0933 4189C7   		movl	%eax, %r15d
 1699              	.LVL262:
 1700              	.L78:
 1701 0936 83E901   		subl	$1, %ecx
 1702              	.LVL263:
 1703              		.loc 1 364 0
 1704 0939 4585FF   		testl	%r15d, %r15d
 1705 093c 44897C24 		movl	%r15d, 16(%rsp)
 1705      10
 1706 0941 0F8906FF 		jns	.L87
 1706      FFFF
 1707 0947 E9EEFEFF 		jmp	.L77
 1707      FF
 1708              	.LVL264:
 1709 094c 0F1F4000 		.p2align 4,,10
 1710              		.p2align 3
 1711              	.L228:
 1712              		.loc 1 265 0
 1713 0950 85DB     		testl	%ebx, %ebx
 1714 0952 7413     		je	.L67
 1715              		.p2align 4,,10
 1716 0954 0F1F4000 		.p2align 3
 1717              	.L181:
 1718              		.loc 1 266 0
 1719 0958 83EB01   		subl	$1, %ebx
 1720              	.LVL265:
 1721              		.loc 1 267 0
 1722 095b 4C89F7   		movq	%r14, %rdi
 1723 095e E8000000 		call	_IO_getc
 1723      00
 1724              	.LVL266:
 1725              		.loc 1 265 0
 1726 0963 85DB     		testl	%ebx, %ebx
 1727 0965 75F1     		jne	.L181
 1728              	.L67:
 1729              		.loc 1 270 0
 1730 0967 4C89F7   		movq	%r14, %rdi
 1731 096a E8000000 		call	_IO_getc
 1731      00
 1732              	.LVL267:
 1733 096f 85C0     		testl	%eax, %eax
 1734 0971 754D     		jne	.L239
 1735              		.loc 1 271 0
 1736 0973 4C89F7   		movq	%r14, %rdi
 1737 0976 E8000000 		call	_IO_getc
 1737      00
 1738              	.LVL268:
 1739 097b 85C0     		testl	%eax, %eax
 1740 097d 89C6     		movl	%eax, %esi
 1741              	.LVL269:
 1742 097f 0F858600 		jne	.L69
 1742      0000
 1743              		.loc 1 273 0
 1744 0985 4183C401 		addl	$1, %r12d
 1745              	.LVL270:
 1746              		.loc 1 274 0
 1747 0989 31DB     		xorl	%ebx, %ebx
 1748              	.LVL271:
 1749 098b E968FBFF 		jmp	.L70
 1749      FF
 1750              	.LVL272:
 1751              		.p2align 4,,10
 1752              		.p2align 3
 1753              	.L84:
 1754              		.loc 1 346 0
 1755 0990 83F801   		cmpl	$1, %eax
 1756 0993 0F845D02 		je	.L132
 1756      0000
 1757              		.loc 1 349 0
 1758 0999 83F802   		cmpl	$2, %eax
 1759 099c 0F84BC01 		je	.L240
 1759      0000
 1760              	.LVL273:
 1761              		.loc 1 356 0
 1762 09a2 4189C5   		movl	%eax, %r13d
 1763              	.LVL274:
 1764 09a5 83E901   		subl	$1, %ecx
 1765              		.loc 1 355 0
 1766 09a8 C7442410 		movl	$-1, 16(%rsp)
 1766      FFFFFFFF 
 1767              		.loc 1 356 0
 1768 09b0 4183E501 		andl	$1, %r13d
 1769              	.LVL275:
 1770 09b4 E981FEFF 		jmp	.L77
 1770      FF
 1771              	.LVL276:
 1772 09b9 0F1F8000 		.p2align 4,,10
 1772      000000
 1773              		.p2align 3
 1774              	.L239:
 1775              		.loc 1 288 0
 1776 09c0 4C89F7   		movq	%r14, %rdi
 1777 09c3 89442430 		movl	%eax, 48(%rsp)
 1778 09c7 31DB     		xorl	%ebx, %ebx
 1779              	.LVL277:
 1780 09c9 E8000000 		call	_IO_getc
 1780      00
 1781              	.LVL278:
 1782 09ce 8B742430 		movl	48(%rsp), %esi
 1783 09d2 89442410 		movl	%eax, 16(%rsp)
 1784              	.LVL279:
 1785 09d6 E927FBFF 		jmp	.L62
 1785      FF
 1786              	.LVL280:
 1787 09db 0F1F4400 		.p2align 4,,10
 1787      00
 1788              		.p2align 3
 1789              	.L232:
 1790              		.loc 1 233 0 discriminator 1
 1791 09e0 4C89F7   		movq	%r14, %rdi
 1792 09e3 E8000000 		call	_IO_getc
 1792      00
 1793              	.LVL281:
 1794 09e8 E92CFCFF 		jmp	.L56
 1794      FF
 1795              	.LVL282:
 1796              	.L74:
 1797              		.loc 1 299 0 discriminator 1
 1798 09ed 4C89F7   		movq	%r14, %rdi
 1799 09f0 89742430 		movl	%esi, 48(%rsp)
 1800 09f4 E8000000 		call	_IO_getc
 1800      00
 1801              	.LVL283:
 1802 09f9 4189C7   		movl	%eax, %r15d
 1803              	.LVL284:
 1804 09fc C1F804   		sarl	$4, %eax
 1805              	.LVL285:
 1806 09ff 8B742430 		movl	48(%rsp), %esi
 1807 0a03 83E00F   		andl	$15, %eax
 1808 0a06 E917FBFF 		jmp	.L72
 1808      FF
 1809              	.LVL286:
 1810              	.L69:
 1811              		.loc 1 275 0
 1812 0a0b 83F801   		cmpl	$1, %eax
 1813 0a0e 0F842402 		je	.L128
 1813      0000
 1814              		.loc 1 278 0
 1815 0a14 83F802   		cmpl	$2, %eax
 1816 0a17 0F84E401 		je	.L241
 1816      0000
 1817              	.LVL287:
 1818              		.loc 1 285 0
 1819 0a1d 83E003   		andl	$3, %eax
 1820              	.LVL288:
 1821 0a20 B9040000 		movl	$4, %ecx
 1821      00
 1822 0a25 83EE01   		subl	$1, %esi
 1823              	.LVL289:
 1824 0a28 29C1     		subl	%eax, %ecx
 1825 0a2a D1F9     		sarl	%ecx
 1826 0a2c 83E101   		andl	$1, %ecx
 1827 0a2f 89CB     		movl	%ecx, %ebx
 1828              	.LVL290:
 1829 0a31 E982FAFF 		jmp	.L63
 1829      FF
 1830              	.LVL291:
 1831              	.L37:
 1832              	.LBE217:
 1833              	.LBE221:
 1834              	.LBE225:
 1835              	.LBE229:
 1836              		.loc 1 428 0
 1837 0a36 807C2436 		cmpb	$0, 54(%rsp)
 1837      00
 1838 0a3b 0F84B300 		je	.L102
 1838      0000
 1839              	.LVL292:
 1840              		.loc 1 429 0
 1841 0a41 488B0424 		movq	(%rsp), %rax
 1842 0a45 8B700C   		movl	12(%rax), %esi
 1843 0a48 89F5     		movl	%esi, %ebp
 1844 0a4a 893424   		movl	%esi, (%rsp)
 1845              	.LVL293:
 1846 0a4d 83ED01   		subl	$1, %ebp
 1847 0a50 0F889E00 		js	.L102
 1847      0000
 1848 0a56 4C636424 		movslq	36(%rsp), %r12
 1848      24
 1849 0a5b 440FB66C 		movzbl	55(%rsp), %r13d
 1849      2437
 1850 0a61 4989C7   		movq	%rax, %r15
 1851              	.LVL294:
 1852              		.p2align 4,,10
 1853 0a64 0F1F4000 		.p2align 3
 1854              	.L110:
 1855 0a68 418B5708 		movl	8(%r15), %edx
 1856              	.LVL295:
 1857              		.loc 1 430 0
 1858 0a6c 498B4F28 		movq	40(%r15), %rcx
 1859 0a70 89D0     		movl	%edx, %eax
 1860 0a72 0FAFC5   		imull	%ebp, %eax
 1861 0a75 410FAF47 		imull	16(%r15), %eax
 1861      10
 1862              		.loc 1 431 0
 1863 0a7a 85D2     		testl	%edx, %edx
 1864              		.loc 1 430 0
 1865 0a7c 4898     		cltq
 1866 0a7e 488D4C01 		leaq	3(%rcx,%rax), %rcx
 1866      03
 1867              	.LVL296:
 1868              		.loc 1 431 0
 1869 0a83 7E3E     		jle	.L103
 1870 0a85 BB80FFFF 		movl	$-128, %ebx
 1870      FF
 1871 0a8a EB11     		jmp	.L108
 1872              	.LVL297:
 1873 0a8c 0F1F4000 		.p2align 4,,10
 1874              		.p2align 3
 1875              	.L244:
 1876              		.loc 1 438 0
 1877 0a90 0FB6DB   		movzbl	%bl, %ebx
 1878              		.loc 1 431 0
 1879 0a93 4C01E1   		addq	%r12, %rcx
 1880              		.loc 1 438 0
 1881 0a96 D1EB     		shrl	%ebx
 1882              	.LVL298:
 1883              		.loc 1 431 0
 1884 0a98 83EA01   		subl	$1, %edx
 1885              	.LVL299:
 1886 0a9b 7422     		je	.L242
 1887              	.LVL300:
 1888              	.L108:
 1889              		.loc 1 432 0
 1890 0a9d 80FB80   		cmpb	$-128, %bl
 1891 0aa0 7466     		je	.L243
 1892              	.LVL301:
 1893              	.L104:
 1894              		.loc 1 433 0
 1895 0aa2 4489E8   		movl	%r13d, %eax
 1896 0aa5 21D8     		andl	%ebx, %eax
 1897              		.loc 1 434 0
 1898 0aa7 3C01     		cmpb	$1, %al
 1899 0aa9 19C0     		sbbl	%eax, %eax
 1900              		.loc 1 437 0
 1901 0aab 80FB01   		cmpb	$1, %bl
 1902              		.loc 1 434 0
 1903 0aae 8801     		movb	%al, (%rcx)
 1904              		.loc 1 437 0
 1905 0ab0 75DE     		jne	.L244
 1906              		.loc 1 431 0
 1907 0ab2 4C01E1   		addq	%r12, %rcx
 1908 0ab5 83EA01   		subl	$1, %edx
 1909              		.loc 1 440 0
 1910 0ab8 BB80FFFF 		movl	$-128, %ebx
 1910      FF
 1911              	.LVL302:
 1912              		.loc 1 431 0
 1913 0abd 75DE     		jne	.L108
 1914              	.L242:
 1915 0abf 418B5708 		movl	8(%r15), %edx
 1916              	.LVL303:
 1917              	.L103:
 1918              		.loc 1 443 0
 1919 0ac3 8D5A0E   		leal	14(%rdx), %ebx
 1920 0ac6 83C207   		addl	$7, %edx
 1921 0ac9 0F49DA   		cmovns	%edx, %ebx
 1922 0acc C1FB03   		sarl	$3, %ebx
 1923              	.LVL304:
 1924 0acf F6C303   		testb	$3, %bl
 1925 0ad2 7414     		je	.L111
 1926              	.LVL305:
 1927              		.p2align 4,,10
 1928 0ad4 0F1F4000 		.p2align 3
 1929              	.L183:
 1930              		.loc 1 444 0 discriminator 2
 1931 0ad8 4C89F7   		movq	%r14, %rdi
 1932              		.loc 1 443 0 discriminator 2
 1933 0adb 83C301   		addl	$1, %ebx
 1934              	.LVL306:
 1935              		.loc 1 444 0 discriminator 2
 1936 0ade E8000000 		call	_IO_getc
 1936      00
 1937              	.LVL307:
 1938              		.loc 1 443 0 discriminator 2
 1939 0ae3 F6C303   		testb	$3, %bl
 1940 0ae6 75F0     		jne	.L183
 1941              	.L111:
 1942              		.loc 1 429 0
 1943 0ae8 83ED01   		subl	$1, %ebp
 1944              	.LVL308:
 1945 0aeb 83FDFF   		cmpl	$-1, %ebp
 1946 0aee 0F8574FF 		jne	.L110
 1946      FFFF
 1947              	.LVL309:
 1948              	.L102:
 1949              		.loc 1 449 0
 1950 0af4 4C89F7   		movq	%r14, %rdi
 1951 0af7 E8000000 		call	fclose
 1951      00
 1952              	.LVL310:
 1953 0afc E977F7FF 		jmp	.L10
 1953      FF
 1954              	.LVL311:
 1955              		.p2align 4,,10
 1956 0b01 0F1F8000 		.p2align 3
 1956      000000
 1957              	.L243:
 1958              		.loc 1 432 0 discriminator 1
 1959 0b08 4C89F7   		movq	%r14, %rdi
 1960 0b0b 48894C24 		movq	%rcx, 8(%rsp)
 1960      08
 1961 0b10 891424   		movl	%edx, (%rsp)
 1962              	.LVL312:
 1963 0b13 E8000000 		call	_IO_getc
 1963      00
 1964              	.LVL313:
 1965 0b18 488B4C24 		movq	8(%rsp), %rcx
 1965      08
 1966 0b1d 4189C5   		movl	%eax, %r13d
 1967 0b20 8B1424   		movl	(%rsp), %edx
 1968 0b23 E97AFFFF 		jmp	.L104
 1968      FF
 1969              	.LVL314:
 1970              	.L116:
 1971              		.loc 1 182 0
 1972 0b28 4585ED   		testl	%r13d, %r13d
 1973 0b2b 0F8F48F6 		jg	.L25
 1973      FFFF
 1974 0b31 E98EF6FF 		jmp	.L29
 1974      FF
 1975              	.LVL315:
 1976              	.L119:
 1977              		.loc 1 119 0
 1978 0b36 C6442436 		movb	$0, 54(%rsp)
 1978      00
 1979              		.loc 1 73 0
 1980 0b3b C7442424 		movl	$3, 36(%rsp)
 1980      03000000 
 1981 0b43 E9CEF5FF 		jmp	.L16
 1981      FF
 1982              	.LVL316:
 1983              	.L225:
 1984              		.loc 1 200 0 discriminator 1
 1985 0b48 31D2     		xorl	%edx, %edx
 1986              	.LVL317:
 1987 0b4a 4C89F7   		movq	%r14, %rdi
 1988 0b4d E8000000 		call	fseek
 1988      00
 1989              	.LVL318:
 1990 0b52 488B0424 		movq	(%rsp), %rax
 1991 0b56 8B4010   		movl	16(%rax), %eax
 1992 0b59 E9A4F6FF 		jmp	.L33
 1992      FF
 1993              	.LVL319:
 1994              	.L240:
 1995              	.LBB230:
 1996              	.LBB226:
 1997              	.LBB222:
 1998              	.LBB218:
 1999              		.loc 1 351 0
 2000 0b5e 4C89F7   		movq	%r14, %rdi
 2001              		.loc 1 352 0
 2002 0b61 4531FF   		xorl	%r15d, %r15d
 2003              	.LVL320:
 2004              		.loc 1 351 0
 2005 0b64 E8000000 		call	_IO_getc
 2005      00
 2006              	.LVL321:
 2007 0b69 4C89F7   		movq	%r14, %rdi
 2008 0b6c 4189C5   		movl	%eax, %r13d
 2009              	.LVL322:
 2010 0b6f E8000000 		call	_IO_getc
 2010      00
 2011              	.LVL323:
 2012 0b74 4489E9   		movl	%r13d, %ecx
 2013              		.loc 1 352 0
 2014 0b77 C7442410 		movl	$0, 16(%rsp)
 2014      00000000 
 2015              		.loc 1 351 0
 2016 0b7f 4531ED   		xorl	%r13d, %r13d
 2017              	.LVL324:
 2018 0b82 0FAFC8   		imull	%eax, %ecx
 2019              	.LVL325:
 2020 0b85 488B0424 		movq	(%rsp), %rax
 2021 0b89 0FAF4808 		imull	8(%rax), %ecx
 2022              	.LVL326:
 2023 0b8d 83E901   		subl	$1, %ecx
 2024              	.LVL327:
 2025 0b90 E9B8FCFF 		jmp	.L87
 2025      FF
 2026              	.LVL328:
 2027              	.L113:
 2028              	.LBE218:
 2029              	.LBE222:
 2030              	.LBE226:
 2031              	.LBE230:
 2032              	.LBB231:
 2033              	.LBB177:
 2034              	.LBB173:
 2035              	.LBB171:
 2036              	.LBB164:
 2037              	.LBB165:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 2038              		.loc 3 80 0
 2039 0b95 89F0     		movl	%esi, %eax
 2040 0b97 488B1424 		movq	(%rsp), %rdx
 2041              	.LBE165:
 2042              	.LBE164:
 2043              		.loc 1 155 0
 2044 0b9b C6442436 		movb	$1, 54(%rsp)
 2044      01
 2045              	.LBB168:
 2046              	.LBB166:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 2047              		.loc 3 80 0
 2048 0ba0 C1E81F   		shrl	$31, %eax
 2049              	.LBE166:
 2050              	.LBE168:
 2051 0ba3 C7442408 		movl	$0, 8(%rsp)
 2051      00000000 
 2052              		.loc 1 157 0
 2053 0bab C7442424 		movl	$4, 36(%rsp)
 2053      04000000 
 2054              	.LBB169:
 2055              	.LBB167:
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 2056              		.loc 3 80 0
 2057 0bb3 01F0     		addl	%esi, %eax
 2058 0bb5 D1F8     		sarl	%eax
 2059 0bb7 89420C   		movl	%eax, 12(%rdx)
 2060              	.LVL329:
 2061              	.LBE167:
 2062              	.LBE169:
 2063 0bba E957F5FF 		jmp	.L16
 2063      FF
 2064              	.LVL330:
 2065              	.L227:
 2066              	.LBE171:
 2067              	.LBE173:
 2068              	.LBE177:
 2069              	.LBE231:
 2070              		.loc 1 219 0
 2071 0bbf 8B720C   		movl	12(%rdx), %esi
 2072 0bc2 8D56FF   		leal	-1(%rsi), %edx
 2073 0bc5 89742410 		movl	%esi, 16(%rsp)
 2074              	.LVL331:
 2075 0bc9 89542414 		movl	%edx, 20(%rsp)
 2076              	.LVL332:
 2077              		.loc 1 220 0
 2078 0bcd 8B54241C 		movl	28(%rsp), %edx
 2079              	.LVL333:
 2080 0bd1 89542420 		movl	%edx, 32(%rsp)
 2081 0bd5 E946F8FF 		jmp	.L36
 2081      FF
 2082              	.LVL334:
 2083              	.L224:
 2084              		.loc 1 192 0
 2085 0bda 4C89F7   		movq	%r14, %rdi
 2086 0bdd E8000000 		call	_ZL10read_dwordP8_IO_FILE
 2086      00
 2087              	.LVL335:
 2088 0be2 3D00F800 		cmpl	$63488, %eax
 2088      00
 2089 0be7 0F94C0   		sete	%al
 2090 0bea 0FB6C0   		movzbl	%al, %eax
 2091 0bed 89442438 		movl	%eax, 56(%rsp)
 2092 0bf1 E9F4F5FF 		jmp	.L32
 2092      FF
 2093              	.LVL336:
 2094              	.L132:
 2095 0bf6 89442430 		movl	%eax, 48(%rsp)
 2096              	.LBB232:
 2097              	.LBB227:
 2098              	.LBB223:
 2099              	.LBB219:
 2100 0bfa 31ED     		xorl	%ebp, %ebp
 2101 0bfc E99FF9FF 		jmp	.L38
 2101      FF
 2102              	.LVL337:
 2103              	.L241:
 2104              		.loc 1 280 0
 2105 0c01 4C89F7   		movq	%r14, %rdi
 2106 0c04 E8000000 		call	_IO_getc
 2106      00
 2107              	.LVL338:
 2108 0c09 4C89F7   		movq	%r14, %rdi
 2109 0c0c 89C3     		movl	%eax, %ebx
 2110              	.LVL339:
 2111 0c0e E8000000 		call	_IO_getc
 2111      00
 2112              	.LVL340:
 2113 0c13 89DE     		movl	%ebx, %esi
 2114 0c15 0FAFF0   		imull	%eax, %esi
 2115 0c18 488B0424 		movq	(%rsp), %rax
 2116 0c1c 0FAF7008 		imull	8(%rax), %esi
 2117              	.LVL341:
 2118              		.loc 1 294 0
 2119 0c20 83EE01   		subl	$1, %esi
 2120              	.LVL342:
 2121              		.loc 1 297 0
 2122 0c23 4180FDF0 		cmpb	$-16, %r13b
 2123 0c27 741A     		je	.L129
 2124 0c29 31DB     		xorl	%ebx, %ebx
 2125              		.loc 1 281 0
 2126 0c2b C7442410 		movl	$0, 16(%rsp)
 2126      00000000 
 2127 0c33 E992F8FF 		jmp	.L73
 2127      FF
 2128              	.LVL343:
 2129              	.L128:
 2130 0c38 89442430 		movl	%eax, 48(%rsp)
 2131 0c3c 31ED     		xorl	%ebp, %ebp
 2132              	.LVL344:
 2133 0c3e E95DF9FF 		jmp	.L38
 2133      FF
 2134              	.LVL345:
 2135              	.L129:
 2136              		.loc 1 297 0
 2137 0c43 31C0     		xorl	%eax, %eax
 2138              	.LVL346:
 2139 0c45 31DB     		xorl	%ebx, %ebx
 2140              		.loc 1 281 0
 2141 0c47 C7442410 		movl	$0, 16(%rsp)
 2141      00000000 
 2142 0c4f 4531FF   		xorl	%r15d, %r15d
 2143              	.LVL347:
 2144 0c52 E9CBF8FF 		jmp	.L72
 2144      FF
 2145              	.LVL348:
 2146              	.L226:
 2147              	.LBE219:
 2148              	.LBE223:
 2149              	.LBE227:
 2150              	.LBE232:
 2151              	.LBE234:
 2152              	.LBE241:
 2153              		.loc 1 450 0
 2154 0c57 E8000000 		call	__stack_chk_fail
 2154      00
 2155              	.LVL349:
 2156              	.L131:
 2157              	.LBB242:
 2158              	.LBB235:
 2159              	.LBB233:
 2160              	.LBB228:
 2161              	.LBB224:
 2162              	.LBB220:
 2163 0c5c 448B7C24 		movl	16(%rsp), %r15d
 2163      10
 2164              	.LVL350:
 2165 0c61 E9D0FCFF 		jmp	.L78
 2165      FF
 2166              	.LBE220:
 2167              	.LBE224:
 2168              	.LBE228:
 2169              	.LBE233:
 2170              	.LBE235:
 2171              	.LBE242:
 2172              		.cfi_endproc
 2173              	.LFE168:
 2175              		.section	.text.unlikely._ZN12Fl_BMP_ImageC2EPKc
 2176              	.LCOLDE7:
 2177              		.section	.text._ZN12Fl_BMP_ImageC2EPKc
 2178              	.LHOTE7:
 2179              		.globl	_ZN12Fl_BMP_ImageC1EPKc
 2180              		.set	_ZN12Fl_BMP_ImageC1EPKc,_ZN12Fl_BMP_ImageC2EPKc
 2181              		.weak	_ZTS12Fl_BMP_Image
 2182              		.section	.rodata._ZTS12Fl_BMP_Image,"aG",@progbits,_ZTS12Fl_BMP_Image,comdat
 2183              		.align 8
 2186              	_ZTS12Fl_BMP_Image:
 2187 0000 3132466C 		.string	"12Fl_BMP_Image"
 2187      5F424D50 
 2187      5F496D61 
 2187      676500
 2188              		.weak	_ZTI12Fl_BMP_Image
 2189              		.section	.rodata._ZTI12Fl_BMP_Image,"aG",@progbits,_ZTI12Fl_BMP_Image,comdat
 2190              		.align 8
 2193              	_ZTI12Fl_BMP_Image:
 2194 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 2194      00000000 
 2195 0008 00000000 		.quad	_ZTS12Fl_BMP_Image
 2195      00000000 
 2196 0010 00000000 		.quad	_ZTI12Fl_RGB_Image
 2196      00000000 
 2197              		.weak	_ZTV12Fl_BMP_Image
 2198              		.section	.rodata._ZTV12Fl_BMP_Image,"aG",@progbits,_ZTV12Fl_BMP_Image,comdat
 2199              		.align 8
 2202              	_ZTV12Fl_BMP_Image:
 2203 0000 00000000 		.quad	0
 2203      00000000 
 2204 0008 00000000 		.quad	_ZTI12Fl_BMP_Image
 2204      00000000 
 2205 0010 00000000 		.quad	_ZN12Fl_BMP_ImageD1Ev
 2205      00000000 
 2206 0018 00000000 		.quad	_ZN12Fl_BMP_ImageD0Ev
 2206      00000000 
 2207 0020 00000000 		.quad	_ZN12Fl_RGB_Image4copyEii
 2207      00000000 
 2208 0028 00000000 		.quad	_ZN12Fl_RGB_Image13color_averageEjf
 2208      00000000 
 2209 0030 00000000 		.quad	_ZN12Fl_RGB_Image10desaturateEv
 2209      00000000 
 2210 0038 00000000 		.quad	_ZN12Fl_RGB_Image5labelEP9Fl_Widget
 2210      00000000 
 2211 0040 00000000 		.quad	_ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item
 2211      00000000 
 2212 0048 00000000 		.quad	_ZN12Fl_RGB_Image4drawEiiiiii
 2212      00000000 
 2213 0050 00000000 		.quad	_ZN12Fl_RGB_Image7uncacheEv
 2213      00000000 
 2214              		.text
 2215              	.Letext0:
 2216              		.section	.text.unlikely._ZL9read_wordP8_IO_FILE
 2217              	.Letext_cold0:
 2218              		.file 5 "fltk-1.3.4-1/FL/fl_types.h"
 2219              		.file 6 "fltk-1.3.4-1/FL/Enumerations.H"
 2220              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 2221              		.file 8 "/usr/include/x86_64-linux-gnu/bits/types.h"
 2222              		.file 9 "/usr/include/stdio.h"
 2223              		.file 10 "/usr/include/libio.h"
 2224              		.file 11 "fltk-1.3.4-1/FL/fl_utf8.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_BMP_Image.cxx
     /tmp/ccgqJnxc.s:13     .text._ZL9read_wordP8_IO_FILE:0000000000000000 _ZL9read_wordP8_IO_FILE
     /tmp/ccgqJnxc.s:69     .text._ZL9read_longP8_IO_FILE:0000000000000000 _ZL9read_longP8_IO_FILE
     /tmp/ccgqJnxc.s:161    .text._ZL10read_dwordP8_IO_FILE:0000000000000000 _ZL10read_dwordP8_IO_FILE
     /tmp/ccgqJnxc.s:256    .text._ZN12Fl_BMP_ImageD2Ev:0000000000000000 _ZN12Fl_BMP_ImageD2Ev
     /tmp/ccgqJnxc.s:2202   .rodata._ZTV12Fl_BMP_Image:0000000000000000 _ZTV12Fl_BMP_Image
     /tmp/ccgqJnxc.s:256    .text._ZN12Fl_BMP_ImageD2Ev:0000000000000000 _ZN12Fl_BMP_ImageD1Ev
     /tmp/ccgqJnxc.s:286    .text._ZN12Fl_BMP_ImageD0Ev:0000000000000000 _ZN12Fl_BMP_ImageD0Ev
     /tmp/ccgqJnxc.s:330    .text._ZN12Fl_BMP_ImageC2EPKc:0000000000000000 _ZN12Fl_BMP_ImageC2EPKc
     /tmp/ccgqJnxc.s:330    .text._ZN12Fl_BMP_ImageC2EPKc:0000000000000000 _ZN12Fl_BMP_ImageC1EPKc
     /tmp/ccgqJnxc.s:2186   .rodata._ZTS12Fl_BMP_Image:0000000000000000 _ZTS12Fl_BMP_Image
     /tmp/ccgqJnxc.s:2193   .rodata._ZTI12Fl_BMP_Image:0000000000000000 _ZTI12Fl_BMP_Image
                           .group:0000000000000000 _ZN12Fl_BMP_ImageD5Ev
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

UNDEFINED SYMBOLS
_IO_getc
_ZN12Fl_RGB_ImageD2Ev
_ZdlPv
_ZN12Fl_RGB_ImageC2EPKhiiii
fl_fopen
fread
_ZN12Fl_RGB_Image9max_size_E
_ZN2Fl7warningE
fclose
_Znam
fseek
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
