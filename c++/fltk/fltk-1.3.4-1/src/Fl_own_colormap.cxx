   1              		.file	"Fl_own_colormap.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN2Fl12own_colormapEv,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN2Fl12own_colormapEv,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN2Fl12own_colormapEv
  12              	.Ltext_cold0:
  13              		.section	.text._ZN2Fl12own_colormapEv
  14              		.globl	_ZN2Fl12own_colormapEv
  16              	_ZN2Fl12own_colormapEv:
  17              	.LFB307:
  18              		.file 1 "fltk-1.3.4-1/src/Fl_own_colormap.cxx"
   1:fltk-1.3.4-1/src/Fl_own_colormap.cxx **** ...
  19              		.loc 1 51 0
  20              		.cfi_startproc
  21 0000 55       		pushq	%rbp
  22              		.cfi_def_cfa_offset 16
  23              		.cfi_offset 6, -16
  24 0001 53       		pushq	%rbx
  25              		.cfi_def_cfa_offset 24
  26              		.cfi_offset 3, -24
  27 0002 4881EC18 		subq	$280, %rsp
  27      010000
  28              		.cfi_def_cfa_offset 304
  29              		.loc 1 51 0
  30 0009 64488B04 		movq	%fs:40, %rax
  30      25280000 
  30      00
  31 0012 48898424 		movq	%rax, 264(%rsp)
  31      08010000 
  32 001a 31C0     		xorl	%eax, %eax
  33              		.loc 1 52 0
  34 001c E8000000 		call	_Z15fl_open_displayv
  34      00
  35              	.LVL0:
  36              		.loc 1 54 0
  37 0021 488B0500 		movq	fl_visual(%rip), %rax
  37      000000
  38 0028 8B4818   		movl	24(%rax), %ecx
  39 002b 83F905   		cmpl	$5, %ecx
  40 002e 770C     		ja	.L1
  41 0030 B8010000 		movl	$1, %eax
  41      00
  42 0035 48D3E0   		salq	%cl, %rax
  43 0038 A82A     		testb	$42, %al
  44 003a 7524     		jne	.L14
  45              	.L1:
  46              		.loc 1 75 0
  47 003c 488B8424 		movq	264(%rsp), %rax
  47      08010000 
  48 0044 64483304 		xorq	%fs:40, %rax
  48      25280000 
  48      00
  49 004d 0F85B100 		jne	.L15
  49      0000
  50 0053 4881C418 		addq	$280, %rsp
  50      010000
  51              		.cfi_remember_state
  52              		.cfi_def_cfa_offset 24
  53 005a 5B       		popq	%rbx
  54              		.cfi_def_cfa_offset 16
  55 005b 5D       		popq	%rbp
  56              		.cfi_def_cfa_offset 8
  57 005c C3       		ret
  58 005d 0F1F00   		.p2align 4,,10
  59              		.p2align 3
  60              	.L14:
  61              		.cfi_restore_state
  62              		.loc 1 54 0 discriminator 2
  63 0060 31C0     		xorl	%eax, %eax
  64              		.p2align 4,,10
  65 0062 660F1F44 		.p2align 3
  65      0000
  66              	.L3:
  67              	.LVL1:
  68              		.loc 1 65 0 discriminator 2
  69 0068 4889C2   		movq	%rax, %rdx
  70 006b 48C1E204 		salq	$4, %rdx
  71 006f 48890414 		movq	%rax, (%rsp,%rdx)
  72              	.LVL2:
  73 0073 4883C001 		addq	$1, %rax
  74              	.LVL3:
  75 0077 4883F810 		cmpq	$16, %rax
  76 007b 75EB     		jne	.L3
  77              		.loc 1 66 0
  78 007d 488B3500 		movq	fl_colormap(%rip), %rsi
  78      000000
  79 0084 488B3D00 		movq	fl_display(%rip), %rdi
  79      000000
  80 008b B9100000 		movl	$16, %ecx
  80      00
  81 0090 4889E2   		movq	%rsp, %rdx
  82 0093 4889E3   		movq	%rsp, %rbx
  83 0096 488DAC24 		leaq	256(%rsp), %rbp
  83      00010000 
  84 009e E8000000 		call	XQueryColors
  84      00
  85              	.LVL4:
  86              		.loc 1 68 0
  87 00a3 48630500 		movslq	fl_screen(%rip), %rax
  87      000000
  88              		.loc 1 69 0
  89 00aa 488B3D00 		movq	fl_display(%rip), %rdi
  89      000000
  90              		.loc 1 68 0
  91 00b1 31C9     		xorl	%ecx, %ecx
  92 00b3 48C1E007 		salq	$7, %rax
  93 00b7 480387E8 		addq	232(%rdi), %rax
  93      000000
  94 00be 488B7010 		movq	16(%rax), %rsi
  95 00c2 488B0500 		movq	fl_visual(%rip), %rax
  95      000000
  96 00c9 488B10   		movq	(%rax), %rdx
  97 00cc E8000000 		call	XCreateColormap
  97      00
  98              	.LVL5:
  99 00d1 4889C6   		movq	%rax, %rsi
 100              		.loc 1 70 0
 101 00d4 48890500 		movq	%rax, fl_colormap(%rip)
 101      000000
 102              	.LVL6:
 103 00db EB0A     		jmp	.L5
 104              	.LVL7:
 105 00dd 0F1F00   		.p2align 4,,10
 106              		.p2align 3
 107              	.L16:
 108 00e0 488B3500 		movq	fl_colormap(%rip), %rsi
 108      000000
 109              	.L5:
 110              		.loc 1 73 0 discriminator 2
 111 00e7 488B3D00 		movq	fl_display(%rip), %rdi
 111      000000
 112 00ee 4889DA   		movq	%rbx, %rdx
 113 00f1 4883C310 		addq	$16, %rbx
 114 00f5 E8000000 		call	XAllocColor
 114      00
 115              	.LVL8:
 116              		.loc 1 72 0 discriminator 2
 117 00fa 4839EB   		cmpq	%rbp, %rbx
 118 00fd 75E1     		jne	.L16
 119 00ff E938FFFF 		jmp	.L1
 119      FF
 120              	.L15:
 121              		.loc 1 75 0
 122 0104 E8000000 		call	__stack_chk_fail
 122      00
 123              	.LVL9:
 124              		.cfi_endproc
 125              	.LFE307:
 127              		.section	.text.unlikely._ZN2Fl12own_colormapEv
 128              	.LCOLDE0:
 129              		.section	.text._ZN2Fl12own_colormapEv
 130              	.LHOTE0:
 131              		.text
 132              	.Letext0:
 133              		.section	.text.unlikely._ZN2Fl12own_colormapEv
 134              	.Letext_cold0:
 135              		.file 2 "fltk-1.3.4-1/FL/fl_types.h"
 136              		.file 3 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 137              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types.h"
 138              		.file 5 "/usr/include/libio.h"
 139              		.file 6 "fltk-1.3.4-1/FL/Enumerations.H"
 140              		.file 7 "fltk-1.3.4-1/FL/Fl.H"
 141              		.file 8 "fltk-1.3.4-1/FL/Fl_Widget.H"
 142              		.file 9 "fltk-1.3.4-1/FL/Fl_Image.H"
 143              		.file 10 "/usr/include/X11/X.h"
 144              		.file 11 "/usr/include/X11/Xlib.h"
 145              		.file 12 "/usr/include/X11/Xutil.h"
 146              		.file 13 "/usr/include/stdio.h"
 147              		.file 14 "fltk-1.3.4-1/FL/x.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_own_colormap.cxx
     /tmp/ccDaTFqb.s:16     .text._ZN2Fl12own_colormapEv:0000000000000000 _ZN2Fl12own_colormapEv
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
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
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.00137ad0275e3bca492dca30adbe2e71
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d

UNDEFINED SYMBOLS
_Z15fl_open_displayv
fl_visual
fl_colormap
fl_display
XQueryColors
fl_screen
XCreateColormap
XAllocColor
__stack_chk_fail
