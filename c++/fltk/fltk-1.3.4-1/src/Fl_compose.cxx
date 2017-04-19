   1              		.file	"Fl_compose.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN2Fl7composeERi,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN2Fl7composeERi,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN2Fl7composeERi
  12              	.Ltext_cold0:
  13              		.section	.text._ZN2Fl7composeERi
  14              		.globl	_ZN2Fl7composeERi
  16              	_ZN2Fl7composeERi:
  17              	.LFB307:
  18              		.file 1 "fltk-1.3.4-1/src/Fl_compose.cxx"
   1:fltk-1.3.4-1/src/Fl_compose.cxx **** ...
  19              		.loc 1 79 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              		.loc 1 92 0
  23 0000 F7050000 		testl	$4980736, _ZN2Fl7e_stateE(%rip)
  23      00000000 
  23      4C00
  24              		.loc 1 88 0
  25 000a 488B0500 		movq	_ZN2Fl6e_textE(%rip), %rax
  25      000000
  26 0011 0FB610   		movzbl	(%rax), %edx
  27              	.LVL1:
  28              		.loc 1 92 0
  29 0014 7412     		je	.L4
  30 0016 84D2     		testb	%dl, %dl
  31 0018 780E     		js	.L4
  32              	.LVL2:
  33              		.loc 1 95 0
  34 001a C7070000 		movl	$0, (%rdi)
  34      0000
  35 0020 31C0     		xorl	%eax, %eax
  36              		.loc 1 105 0
  37 0022 C3       		ret
  38              	.LVL3:
  39              		.p2align 4,,10
  40 0023 0F1F4400 		.p2align 3
  40      00
  41              	.L4:
  42              		.loc 1 96 0
  43 0028 8B050000 		movl	_ZN2Fl13compose_stateE(%rip), %eax
  43      0000
  44              		.loc 1 95 0
  45 002e F6C2E0   		testb	$-32, %dl
  46 0031 0F94C1   		sete	%cl
  47 0034 80FA7F   		cmpb	$127, %dl
  48              		.loc 1 96 0
  49 0037 8907     		movl	%eax, (%rdi)
  50              		.loc 1 95 0
  51 0039 0F94C0   		sete	%al
  52              		.loc 1 100 0
  53 003c C7050000 		movl	$0, _ZN2Fl13compose_stateE(%rip)
  53      00000000 
  53      0000
  54              		.loc 1 95 0
  55 0046 09C8     		orl	%ecx, %eax
  56 0048 83F001   		xorl	$1, %eax
  57 004b 0FB6C0   		movzbl	%al, %eax
  58 004e C3       		ret
  59              		.cfi_endproc
  60              	.LFE307:
  62              		.section	.text.unlikely._ZN2Fl7composeERi
  63              	.LCOLDE0:
  64              		.section	.text._ZN2Fl7composeERi
  65              	.LHOTE0:
  66              		.section	.text.unlikely._ZN2Fl13compose_resetEv,"ax",@progbits
  67              		.align 2
  68              	.LCOLDB1:
  69              		.section	.text._ZN2Fl13compose_resetEv,"ax",@progbits
  70              	.LHOTB1:
  71              		.align 2
  72              		.p2align 4,,15
  73              		.globl	_ZN2Fl13compose_resetEv
  75              	_ZN2Fl13compose_resetEv:
  76              	.LFB308:
  77              		.loc 1 142 0
  78              		.cfi_startproc
  79              		.loc 1 145 0
  80 0000 488B3D00 		movq	fl_xim_ic(%rip), %rdi
  80      000000
  81              		.loc 1 143 0
  82 0007 C7050000 		movl	$0, _ZN2Fl13compose_stateE(%rip)
  82      00000000 
  82      0000
  83              		.loc 1 145 0
  84 0011 4885FF   		testq	%rdi, %rdi
  85 0014 740A     		je	.L11
  86              		.loc 1 145 0 is_stmt 0 discriminator 1
  87 0016 E9000000 		jmp	XmbResetIC
  87      00
  88              	.LVL4:
  89 001b 0F1F4400 		.p2align 4,,10
  89      00
  90              		.p2align 3
  91              	.L11:
  92 0020 F3C3     		rep ret
  93              		.cfi_endproc
  94              	.LFE308:
  96              		.section	.text.unlikely._ZN2Fl13compose_resetEv
  97              	.LCOLDE1:
  98              		.section	.text._ZN2Fl13compose_resetEv
  99              	.LHOTE1:
 100              		.globl	_ZN2Fl13compose_stateE
 101              		.section	.bss._ZN2Fl13compose_stateE,"aw",@nobits
 102              		.align 4
 105              	_ZN2Fl13compose_stateE:
 106 0000 00000000 		.zero	4
 107              		.text
 108              	.Letext0:
 109              		.section	.text.unlikely._ZN2Fl7composeERi
 110              	.Letext_cold0:
 111              		.file 2 "fltk-1.3.4-1/FL/fl_types.h"
 112              		.file 3 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 113              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types.h"
 114              		.file 5 "/usr/include/libio.h"
 115              		.file 6 "fltk-1.3.4-1/FL/Enumerations.H"
 116              		.file 7 "fltk-1.3.4-1/FL/Fl.H"
 117              		.file 8 "fltk-1.3.4-1/FL/Fl_Widget.H"
 118              		.file 9 "fltk-1.3.4-1/FL/Fl_Image.H"
 119              		.file 10 "/usr/include/stdio.h"
 120              		.file 11 "/usr/include/X11/Xlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_compose.cxx
     /tmp/ccwiJ06X.s:16     .text._ZN2Fl7composeERi:0000000000000000 _ZN2Fl7composeERi
     /tmp/ccwiJ06X.s:105    .bss._ZN2Fl13compose_stateE:0000000000000000 _ZN2Fl13compose_stateE
     /tmp/ccwiJ06X.s:75     .text._ZN2Fl13compose_resetEv:0000000000000000 _ZN2Fl13compose_resetEv
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
_ZN2Fl7e_stateE
_ZN2Fl6e_textE
fl_xim_ic
XmbResetIC
