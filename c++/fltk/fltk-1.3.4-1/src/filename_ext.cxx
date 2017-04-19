   1              		.file	"filename_ext.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z15fl_filename_extPKc,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._Z15fl_filename_extPKc,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z15fl_filename_extPKc
  10              	.Ltext_cold0:
  11              		.section	.text._Z15fl_filename_extPKc
  12              		.globl	_Z15fl_filename_extPKc
  14              	_Z15fl_filename_extPKc:
  15              	.LFB9:
  16              		.file 1 "fltk-1.3.4-1/src/filename_ext.cxx"
   1:fltk-1.3.4-1/src/filename_ext.cxx **** ...
  17              		.loc 1 34 0
  18              		.cfi_startproc
  19              	.LVL0:
  20              		.loc 1 37 0
  21 0000 0FB617   		movzbl	(%rdi), %edx
  22 0003 84D2     		testb	%dl, %dl
  23 0005 7435     		je	.L5
  24 0007 31C0     		xorl	%eax, %eax
  25 0009 EB17     		jmp	.L4
  26              	.LVL1:
  27 000b 0F1F4400 		.p2align 4,,10
  27      00
  28              		.p2align 3
  29              	.L10:
  30              		.loc 1 42 0
  31 0010 80FA2E   		cmpb	$46, %dl
  32 0013 480F44C7 		cmove	%rdi, %rax
  33              	.LVL2:
  34              		.loc 1 37 0
  35 0017 4883C701 		addq	$1, %rdi
  36              	.LVL3:
  37 001b 0FB617   		movzbl	(%rdi), %edx
  38 001e 84D2     		testb	%dl, %dl
  39 0020 7412     		je	.L9
  40              	.LVL4:
  41              	.L4:
  42              		.loc 1 38 0
  43 0022 80FA2F   		cmpb	$47, %dl
  44 0025 75E9     		jne	.L10
  45              		.loc 1 37 0
  46 0027 4883C701 		addq	$1, %rdi
  47              	.LVL5:
  48 002b 0FB617   		movzbl	(%rdi), %edx
  49              		.loc 1 38 0
  50 002e 31C0     		xorl	%eax, %eax
  51              	.LVL6:
  52              		.loc 1 37 0
  53 0030 84D2     		testb	%dl, %dl
  54 0032 75EE     		jne	.L4
  55              	.L9:
  56 0034 4885C0   		testq	%rax, %rax
  57 0037 480F44C7 		cmove	%rdi, %rax
  58              	.LVL7:
  59 003b C3       		ret
  60              	.LVL8:
  61              	.L5:
  62 003c 4889F8   		movq	%rdi, %rax
  63              		.loc 1 45 0
  64 003f C3       		ret
  65              		.cfi_endproc
  66              	.LFE9:
  68              		.section	.text.unlikely._Z15fl_filename_extPKc
  69              	.LCOLDE0:
  70              		.section	.text._Z15fl_filename_extPKc
  71              	.LHOTE0:
  72              		.text
  73              	.Letext0:
  74              		.section	.text.unlikely._Z15fl_filename_extPKc
  75              	.Letext_cold0:
DEFINED SYMBOLS
                            *ABS*:0000000000000000 filename_ext.cxx
     /tmp/ccxtfTNV.s:14     .text._Z15fl_filename_extPKc:0000000000000000 _Z15fl_filename_extPKc
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

NO UNDEFINED SYMBOLS
