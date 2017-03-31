   1              		.file	"Fl_Browser_load.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.rodata.str1.1,"aMS",@progbits,1
   5              	.LC0:
   6 0000 7200     		.string	"r"
   7              		.section	.text.unlikely._ZN10Fl_Browser4loadEPKc,"ax",@progbits
   8              		.align 2
   9              	.LCOLDB1:
  10              		.section	.text._ZN10Fl_Browser4loadEPKc,"ax",@progbits
  11              	.LHOTB1:
  12              		.align 2
  13              		.p2align 4,,15
  14              		.section	.text.unlikely._ZN10Fl_Browser4loadEPKc
  15              	.Ltext_cold0:
  16              		.section	.text._ZN10Fl_Browser4loadEPKc
  17              		.globl	_ZN10Fl_Browser4loadEPKc
  19              	_ZN10Fl_Browser4loadEPKc:
  20              	.LFB347:
  21              		.file 1 "fltk-1.3.4-1/src/Fl_Browser_load.cxx"
   1:fltk-1.3.4-1/src/Fl_Browser_load.cxx **** ...
  22              		.loc 1 35 0
  23              		.cfi_startproc
  24              	.LVL0:
  25 0000 4155     		pushq	%r13
  26              		.cfi_def_cfa_offset 16
  27              		.cfi_offset 13, -16
  28 0002 4154     		pushq	%r12
  29              		.cfi_def_cfa_offset 24
  30              		.cfi_offset 12, -24
  31 0004 4989FD   		movq	%rdi, %r13
  32 0007 55       		pushq	%rbp
  33              		.cfi_def_cfa_offset 32
  34              		.cfi_offset 6, -32
  35 0008 53       		pushq	%rbx
  36              		.cfi_def_cfa_offset 40
  37              		.cfi_offset 3, -40
  38 0009 4889F3   		movq	%rsi, %rbx
  39 000c 4881EC18 		subq	$1048, %rsp
  39      040000
  40              		.cfi_def_cfa_offset 1088
  41              		.loc 1 35 0
  42 0013 64488B04 		movq	%fs:40, %rax
  42      25280000 
  42      00
  43 001c 48898424 		movq	%rax, 1032(%rsp)
  43      08040000 
  44 0024 31C0     		xorl	%eax, %eax
  45              		.loc 1 40 0
  46 0026 E8000000 		call	_ZN10Fl_Browser5clearEv
  46      00
  47              	.LVL1:
  48              		.loc 1 41 0
  49 002b 4885DB   		testq	%rbx, %rbx
  50 002e B8010000 		movl	$1, %eax
  50      00
  51 0033 7405     		je	.L2
  52              		.loc 1 41 0 is_stmt 0 discriminator 2
  53 0035 803B00   		cmpb	$0, (%rbx)
  54 0038 7526     		jne	.L16
  55              	.LVL2:
  56              	.L2:
  57              		.loc 1 57 0 is_stmt 1
  58 003a 488B8C24 		movq	1032(%rsp), %rcx
  58      08040000 
  59 0042 6448330C 		xorq	%fs:40, %rcx
  59      25280000 
  59      00
  60 004b 0F859600 		jne	.L17
  60      0000
  61 0051 4881C418 		addq	$1048, %rsp
  61      040000
  62              		.cfi_remember_state
  63              		.cfi_def_cfa_offset 40
  64 0058 5B       		popq	%rbx
  65              		.cfi_def_cfa_offset 32
  66 0059 5D       		popq	%rbp
  67              		.cfi_def_cfa_offset 24
  68 005a 415C     		popq	%r12
  69              		.cfi_def_cfa_offset 16
  70 005c 415D     		popq	%r13
  71              		.cfi_def_cfa_offset 8
  72              	.LVL3:
  73 005e C3       		ret
  74              	.LVL4:
  75 005f 90       		.p2align 4,,10
  76              		.p2align 3
  77              	.L16:
  78              		.cfi_restore_state
  79              		.loc 1 42 0
  80 0060 BE000000 		movl	$.LC0, %esi
  80      00
  81 0065 4889DF   		movq	%rbx, %rdi
  82 0068 E8000000 		call	fl_fopen
  82      00
  83              	.LVL5:
  84              		.loc 1 43 0
  85 006d 4885C0   		testq	%rax, %rax
  86              		.loc 1 42 0
  87 0070 4989C4   		movq	%rax, %r12
  88              	.LVL6:
  89              		.loc 1 43 0
  90 0073 746B     		je	.L11
  91              	.LVL7:
  92              		.p2align 4,,10
  93 0075 0F1F00   		.p2align 3
  94              	.L14:
  95 0078 31DB     		xorl	%ebx, %ebx
  96              	.L3:
  97              	.LVL8:
  98              		.loc 1 46 0
  99 007a 4C89E7   		movq	%r12, %rdi
 100 007d E8000000 		call	_IO_getc
 100      00
 101              	.LVL9:
 102              		.loc 1 47 0
 103 0082 83F80A   		cmpl	$10, %eax
 104              		.loc 1 46 0
 105 0085 89C5     		movl	%eax, %ebp
 106              	.LVL10:
 107              		.loc 1 47 0
 108 0087 0F94C2   		sete	%dl
 109 008a 85C0     		testl	%eax, %eax
 110 008c 0F9EC0   		setle	%al
 111              	.LVL11:
 112 008f 08C2     		orb	%al, %dl
 113 0091 751D     		jne	.L12
 114 0093 81FBFE03 		cmpl	$1022, %ebx
 114      0000
 115 0099 7F15     		jg	.L12
 116              	.LVL12:
 117              		.loc 1 52 0
 118 009b 4863C3   		movslq	%ebx, %rax
 119 009e 83C301   		addl	$1, %ebx
 120              	.LVL13:
 121 00a1 40882C04 		movb	%bpl, (%rsp,%rax)
 122              	.LVL14:
 123 00a5 EBD3     		jmp	.L3
 124              	.LVL15:
 125 00a7 660F1F84 		.p2align 4,,10
 125      00000000 
 125      00
 126              		.p2align 3
 127              	.L12:
 128              		.loc 1 49 0
 129 00b0 31D2     		xorl	%edx, %edx
 130              		.loc 1 48 0
 131 00b2 4863DB   		movslq	%ebx, %rbx
 132              		.loc 1 49 0
 133 00b5 4889E6   		movq	%rsp, %rsi
 134 00b8 4C89EF   		movq	%r13, %rdi
 135              		.loc 1 48 0
 136 00bb C6041C00 		movb	$0, (%rsp,%rbx)
 137              		.loc 1 49 0
 138 00bf E8000000 		call	_ZN10Fl_Browser3addEPKcPv
 138      00
 139              	.LVL16:
 140              		.loc 1 54 0
 141 00c4 85ED     		testl	%ebp, %ebp
 142 00c6 79B0     		jns	.L14
 143              		.loc 1 55 0
 144 00c8 4C89E7   		movq	%r12, %rdi
 145 00cb E8000000 		call	fclose
 145      00
 146              	.LVL17:
 147              		.loc 1 56 0
 148 00d0 B8010000 		movl	$1, %eax
 148      00
 149 00d5 E960FFFF 		jmp	.L2
 149      FF
 150              	.LVL18:
 151 00da 660F1F44 		.p2align 4,,10
 151      0000
 152              		.p2align 3
 153              	.L11:
 154              		.loc 1 43 0
 155 00e0 31C0     		xorl	%eax, %eax
 156              	.LVL19:
 157 00e2 E953FFFF 		jmp	.L2
 157      FF
 158              	.LVL20:
 159              	.L17:
 160              		.loc 1 57 0
 161 00e7 E8000000 		call	__stack_chk_fail
 161      00
 162              	.LVL21:
 163              		.cfi_endproc
 164              	.LFE347:
 166              		.section	.text.unlikely._ZN10Fl_Browser4loadEPKc
 167              	.LCOLDE1:
 168              		.section	.text._ZN10Fl_Browser4loadEPKc
 169              	.LHOTE1:
 170              		.text
 171              	.Letext0:
 172              		.section	.text.unlikely._ZN10Fl_Browser4loadEPKc
 173              	.Letext_cold0:
 174              		.file 2 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 175              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
 176              		.file 4 "/usr/include/stdio.h"
 177              		.file 5 "/usr/include/libio.h"
 178              		.file 6 "fltk-1.3.4-1/FL/Enumerations.H"
 179              		.file 7 "fltk-1.3.4-1/FL/fl_utf8.h"
 180              		.file 8 "fltk-1.3.4-1/FL/Fl_Browser.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Browser_load.cxx
     /tmp/ccuQmIZl.s:19     .text._ZN10Fl_Browser4loadEPKc:0000000000000000 _ZN10Fl_Browser4loadEPKc
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
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
                           .group:0000000000000000 wm4.Fl_Slider.H.30.63744dea3b9f91e5e3b5b1297ae0bb9d
                           .group:0000000000000000 wm4.Fl_Browser_.H.33.3c969d598ffa0d0ae61e0a4412aa05a2

UNDEFINED SYMBOLS
_ZN10Fl_Browser5clearEv
fl_fopen
_IO_getc
_ZN10Fl_Browser3addEPKcPv
fclose
__stack_chk_fail
