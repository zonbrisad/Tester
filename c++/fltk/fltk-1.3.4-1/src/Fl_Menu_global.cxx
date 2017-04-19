   1              		.file	"Fl_Menu_global.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL7handleri,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL7handleri,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL7handleri
  10              	.Ltext_cold0:
  11              		.section	.text._ZL7handleri
  13              	_ZL7handleri:
  14              	.LFB326:
  15              		.file 1 "fltk-1.3.4-1/src/Fl_Menu_global.cxx"
   1:fltk-1.3.4-1/src/Fl_Menu_global.cxx **** ...
  16              		.loc 1 28 0
  17              		.cfi_startproc
  18              	.LVL0:
  19              		.loc 1 29 0
  20 0000 83FF0C   		cmpl	$12, %edi
  21 0003 740B     		je	.L8
  22              	.L5:
  23              		.loc 1 32 0
  24 0005 31C0     		xorl	%eax, %eax
  25 0007 C3       		ret
  26 0008 0F1F8400 		.p2align 4,,10
  26      00000000 
  27              		.p2align 3
  28              	.L8:
  29              		.loc 1 29 0
  30 0010 48833D00 		cmpq	$0, _ZN2Fl6modal_E(%rip)
  30      00000000 
  31 0018 75EB     		jne	.L5
  32              	.LVL1:
  33              		.loc 1 28 0
  34 001a 4883EC08 		subq	$8, %rsp
  35              		.cfi_def_cfa_offset 16
  36              	.LBB12:
  37              	.LBB13:
  38              		.loc 1 30 0
  39 001e 488B3D00 		movq	_ZL10the_widget(%rip), %rdi
  39      000000
  40              	.LVL2:
  41 0025 E8000000 		call	_ZNK9Fl_Widget6windowEv
  41      00
  42              	.LVL3:
  43 002a 4889C7   		movq	%rax, %rdi
  44 002d E8000000 		call	_ZN2Fl12first_windowEP9Fl_Window
  44      00
  45              	.LVL4:
  46              		.loc 1 31 0
  47 0032 488B3D00 		movq	_ZL10the_widget(%rip), %rdi
  47      000000
  48 0039 BE0C0000 		movl	$12, %esi
  48      00
  49 003e 488B07   		movq	(%rdi), %rax
  50 0041 488B4018 		movq	24(%rax), %rax
  51              	.LBE13:
  52              	.LBE12:
  53              		.loc 1 32 0
  54 0045 4883C408 		addq	$8, %rsp
  55              		.cfi_def_cfa_offset 8
  56              	.LBB15:
  57              	.LBB14:
  58              		.loc 1 31 0
  59 0049 FFE0     		jmp	*%rax
  60              	.LVL5:
  61              	.LBE14:
  62              	.LBE15:
  63              		.cfi_endproc
  64              	.LFE326:
  66              		.section	.text.unlikely._ZL7handleri
  67              	.LCOLDE0:
  68              		.section	.text._ZL7handleri
  69              	.LHOTE0:
  70              		.section	.text.unlikely._ZN8Fl_Menu_6globalEv,"ax",@progbits
  71              		.align 2
  72              	.LCOLDB1:
  73              		.section	.text._ZN8Fl_Menu_6globalEv,"ax",@progbits
  74              	.LHOTB1:
  75              		.align 2
  76              		.p2align 4,,15
  77              		.globl	_ZN8Fl_Menu_6globalEv
  79              	_ZN8Fl_Menu_6globalEv:
  80              	.LFB327:
  81              		.loc 1 44 0
  82              		.cfi_startproc
  83              	.LVL6:
  84              		.loc 1 45 0
  85 0000 48833D00 		cmpq	$0, _ZL10the_widget(%rip)
  85      00000000 
  86              		.loc 1 44 0
  87 0008 53       		pushq	%rbx
  88              		.cfi_def_cfa_offset 16
  89              		.cfi_offset 3, -16
  90              		.loc 1 44 0
  91 0009 4889FB   		movq	%rdi, %rbx
  92              		.loc 1 45 0
  93 000c 7412     		je	.L12
  94              		.loc 1 46 0
  95 000e 48891D00 		movq	%rbx, _ZL10the_widget(%rip)
  95      000000
  96              		.loc 1 47 0
  97 0015 5B       		popq	%rbx
  98              		.cfi_remember_state
  99              		.cfi_def_cfa_offset 8
 100 0016 C3       		ret
 101              	.LVL7:
 102 0017 660F1F84 		.p2align 4,,10
 102      00000000 
 102      00
 103              		.p2align 3
 104              	.L12:
 105              		.cfi_restore_state
 106              		.loc 1 45 0 discriminator 1
 107 0020 BF000000 		movl	$_ZL7handleri, %edi
 107      00
 108 0025 E8000000 		call	_ZN2Fl11add_handlerEPFiiE
 108      00
 109              	.LVL8:
 110              		.loc 1 46 0 discriminator 1
 111 002a 48891D00 		movq	%rbx, _ZL10the_widget(%rip)
 111      000000
 112              		.loc 1 47 0 discriminator 1
 113 0031 5B       		popq	%rbx
 114              		.cfi_def_cfa_offset 8
 115              	.LVL9:
 116 0032 C3       		ret
 117              		.cfi_endproc
 118              	.LFE327:
 120              		.section	.text.unlikely._ZN8Fl_Menu_6globalEv
 121              	.LCOLDE1:
 122              		.section	.text._ZN8Fl_Menu_6globalEv
 123              	.LHOTE1:
 124              		.section	.bss._ZL10the_widget,"aw",@nobits
 125              		.align 8
 128              	_ZL10the_widget:
 129 0000 00000000 		.zero	8
 129      00000000 
 130              		.text
 131              	.Letext0:
 132              		.section	.text.unlikely._ZL7handleri
 133              	.Letext_cold0:
 134              		.file 2 "fltk-1.3.4-1/FL/fl_types.h"
 135              		.file 3 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 136              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types.h"
 137              		.file 5 "/usr/include/libio.h"
 138              		.file 6 "fltk-1.3.4-1/FL/Enumerations.H"
 139              		.file 7 "fltk-1.3.4-1/FL/Fl.H"
 140              		.file 8 "fltk-1.3.4-1/FL/Fl_Widget.H"
 141              		.file 9 "fltk-1.3.4-1/FL/Fl_Image.H"
 142              		.file 10 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Menu_global.cxx
     /tmp/ccAmNyof.s:13     .text._ZL7handleri:0000000000000000 _ZL7handleri
     /tmp/ccAmNyof.s:128    .bss._ZL10the_widget:0000000000000000 _ZL10the_widget
     /tmp/ccAmNyof.s:79     .text._ZN8Fl_Menu_6globalEv:0000000000000000 _ZN8Fl_Menu_6globalEv
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

UNDEFINED SYMBOLS
_ZN2Fl6modal_E
_ZNK9Fl_Widget6windowEv
_ZN2Fl12first_windowEP9Fl_Window
_ZN2Fl11add_handlerEPFiiE
