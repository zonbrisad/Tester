   1              		.file	"filename_setext.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z18fl_filename_setextPciPKc,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._Z18fl_filename_setextPciPKc,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z18fl_filename_setextPciPKc
  10              	.Ltext_cold0:
  11              		.section	.text._Z18fl_filename_setextPciPKc
  12              		.globl	_Z18fl_filename_setextPciPKc
  14              	_Z18fl_filename_setextPciPKc:
  15              	.LFB80:
  16              		.file 1 "fltk-1.3.4-1/src/filename_setext.cxx"
   1:fltk-1.3.4-1/src/filename_setext.cxx **** ...
  17              		.loc 1 40 0
  18              		.cfi_startproc
  19              	.LVL0:
  20 0000 4154     		pushq	%r12
  21              		.cfi_def_cfa_offset 16
  22              		.cfi_offset 12, -16
  23 0002 55       		pushq	%rbp
  24              		.cfi_def_cfa_offset 24
  25              		.cfi_offset 6, -24
  26 0003 4989D4   		movq	%rdx, %r12
  27 0006 53       		pushq	%rbx
  28              		.cfi_def_cfa_offset 32
  29              		.cfi_offset 3, -32
  30              		.loc 1 40 0
  31 0007 4889FD   		movq	%rdi, %rbp
  32 000a 89F3     		movl	%esi, %ebx
  33              		.loc 1 41 0
  34 000c E8000000 		call	_Z15fl_filename_extPKc
  34      00
  35              	.LVL1:
  36              		.loc 1 42 0
  37 0011 4D85E4   		testq	%r12, %r12
  38 0014 7422     		je	.L2
  39              		.loc 1 43 0
  40 0016 4889C1   		movq	%rax, %rcx
  41 0019 4863D3   		movslq	%ebx, %rdx
  42 001c 4C89E6   		movq	%r12, %rsi
  43 001f 4829E9   		subq	%rbp, %rcx
  44 0022 4889C7   		movq	%rax, %rdi
  45 0025 4829CA   		subq	%rcx, %rdx
  46 0028 E8000000 		call	fl_strlcpy
  46      00
  47              	.LVL2:
  48              		.loc 1 46 0
  49 002d 4889E8   		movq	%rbp, %rax
  50 0030 5B       		popq	%rbx
  51              		.cfi_remember_state
  52              		.cfi_def_cfa_offset 24
  53              	.LVL3:
  54 0031 5D       		popq	%rbp
  55              		.cfi_def_cfa_offset 16
  56              	.LVL4:
  57 0032 415C     		popq	%r12
  58              		.cfi_def_cfa_offset 8
  59              	.LVL5:
  60 0034 C3       		ret
  61              	.LVL6:
  62              		.p2align 4,,10
  63 0035 0F1F00   		.p2align 3
  64              	.L2:
  65              		.cfi_restore_state
  66              		.loc 1 44 0
  67 0038 C60000   		movb	$0, (%rax)
  68              		.loc 1 46 0
  69 003b 4889E8   		movq	%rbp, %rax
  70              	.LVL7:
  71 003e 5B       		popq	%rbx
  72              		.cfi_def_cfa_offset 24
  73              	.LVL8:
  74 003f 5D       		popq	%rbp
  75              		.cfi_def_cfa_offset 16
  76              	.LVL9:
  77 0040 415C     		popq	%r12
  78              		.cfi_def_cfa_offset 8
  79              	.LVL10:
  80 0042 C3       		ret
  81              		.cfi_endproc
  82              	.LFE80:
  84              		.section	.text.unlikely._Z18fl_filename_setextPciPKc
  85              	.LCOLDE0:
  86              		.section	.text._Z18fl_filename_setextPciPKc
  87              	.LHOTE0:
  88              		.text
  89              	.Letext0:
  90              		.section	.text.unlikely._Z18fl_filename_setextPciPKc
  91              	.Letext_cold0:
  92              		.file 2 "/usr/include/x86_64-linux-gnu/bits/types.h"
  93              		.file 3 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
  94              		.file 4 "/usr/include/libio.h"
  95              		.file 5 "/usr/include/stdio.h"
  96              		.file 6 "fltk-1.3.4-1/FL/filename.H"
  97              		.file 7 "fltk-1.3.4-1/src/flstring.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 filename_setext.cxx
     /tmp/ccXCHfK6.s:14     .text._Z18fl_filename_setextPciPKc:0000000000000000 _Z18fl_filename_setextPciPKc
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.features.h.19.ad7942cac365cc9b820965257723f4cc
                           .group:0000000000000000 wm4.cdefs.h.19.871bad770587d04922449df94ac50bdb
                           .group:0000000000000000 wm4.wordsize.h.4.256e8fdbd37801980286acdbc40d0280
                           .group:0000000000000000 wm4.cdefs.h.432.619afd0aac7c4b439843706c1b28ddea
                           .group:0000000000000000 wm4.stubs64.h.10.918ceb5fa58268542bf143e4c1efbcf3
                           .group:0000000000000000 wm4.types.h.89.468e2451361e3b92f048f6cad51690ff
                           .group:0000000000000000 wm4.typesizes.h.24.40eb69a6270178f15d1bf3d7b6635a8b
                           .group:0000000000000000 wm4.types.h.40.2a7c526b979ef3aceacac975f5edcefb
                           .group:0000000000000000 wm4.time.h.53.beb46e650cd406cb917b6b96b45e640a
                           .group:0000000000000000 wm4.types.h.137.b47ba4422427ad6e74c43b7db72dcd74
                           .group:0000000000000000 wm4.stddef.h.187.16ef0524e1724b0cb2c6fb742929660a
                           .group:0000000000000000 wm4.types.h.187.bd5a05039b505b3620e6973f1b2ffeb1
                           .group:0000000000000000 wm4.endian.h.19.ff00c9c0f5e9f9a9719c5de76ace57b4
                           .group:0000000000000000 wm4.endian.h.41.24cced64aef71195a51d4daa8e4f4a95
                           .group:0000000000000000 wm4.byteswap.h.38.11ee5fdc0f6cc53a16c505b9233cecef
                           .group:0000000000000000 wm4.endian.h.63.97272d7c64d5db8020003b32e9289502
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
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
                           .group:0000000000000000 wm4.stddef.h.238.847b6907dabda77be90a9ab7ad789e2e
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
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
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.185.629aca749f254f2bc1fdc00bb73e17c4
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
_Z15fl_filename_extPKc
fl_strlcpy
