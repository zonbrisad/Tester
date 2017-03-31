   1              		.file	"Fl_Gl_Overlay.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN12Fl_Gl_Window14can_do_overlayEv,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN12Fl_Gl_Window14can_do_overlayEv,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN12Fl_Gl_Window14can_do_overlayEv
  12              	.Ltext_cold0:
  13              		.section	.text._ZN12Fl_Gl_Window14can_do_overlayEv
  14              		.globl	_ZN12Fl_Gl_Window14can_do_overlayEv
  16              	_ZN12Fl_Gl_Window14can_do_overlayEv:
  17              	.LFB334:
  18              		.file 1 "fltk-1.3.4-1/src/Fl_Gl_Overlay.cxx"
   1:fltk-1.3.4-1/src/Fl_Gl_Overlay.cxx **** ...
  19              		.loc 1 30 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              		.loc 1 30 0
  23 0000 31C0     		xorl	%eax, %eax
  24 0002 C3       		ret
  25              		.cfi_endproc
  26              	.LFE334:
  28              		.section	.text.unlikely._ZN12Fl_Gl_Window14can_do_overlayEv
  29              	.LCOLDE0:
  30              		.section	.text._ZN12Fl_Gl_Window14can_do_overlayEv
  31              	.LHOTE0:
  32              		.section	.text.unlikely._ZN12Fl_Gl_Window12make_overlayEv,"ax",@progbits
  33              		.align 2
  34              	.LCOLDB1:
  35              		.section	.text._ZN12Fl_Gl_Window12make_overlayEv,"ax",@progbits
  36              	.LHOTB1:
  37              		.align 2
  38              		.p2align 4,,15
  39              		.globl	_ZN12Fl_Gl_Window12make_overlayEv
  41              	_ZN12Fl_Gl_Window12make_overlayEv:
  42              	.LFB335:
  43              		.loc 1 32 0
  44              		.cfi_startproc
  45              	.LVL1:
  46              		.loc 1 32 0
  47 0000 4889BF10 		movq	%rdi, 272(%rdi)
  47      010000
  48 0007 C3       		ret
  49              		.cfi_endproc
  50              	.LFE335:
  52              		.section	.text.unlikely._ZN12Fl_Gl_Window12make_overlayEv
  53              	.LCOLDE1:
  54              		.section	.text._ZN12Fl_Gl_Window12make_overlayEv
  55              	.LHOTE1:
  56              		.section	.text.unlikely._ZN12Fl_Gl_Window14redraw_overlayEv,"ax",@progbits
  57              		.align 2
  58              	.LCOLDB2:
  59              		.section	.text._ZN12Fl_Gl_Window14redraw_overlayEv,"ax",@progbits
  60              	.LHOTB2:
  61              		.align 2
  62              		.p2align 4,,15
  63              		.globl	_ZN12Fl_Gl_Window14redraw_overlayEv
  65              	_ZN12Fl_Gl_Window14redraw_overlayEv:
  66              	.LFB336:
  67              		.loc 1 187 0
  68              		.cfi_startproc
  69              	.LVL2:
  70              		.loc 1 188 0
  71 0000 4883BFA0 		cmpq	$0, 160(%rdi)
  71      00000000 
  72 0008 7416     		je	.L3
  73              	.LVL3:
  74              	.LBB8:
  75              	.LBB9:
  76              		.loc 1 32 0
  77 000a 4889BF10 		movq	%rdi, 272(%rdi)
  77      010000
  78              	.LVL4:
  79              	.LBE9:
  80              	.LBE8:
  81              		.loc 1 198 0
  82 0011 BE080000 		movl	$8, %esi
  82      00
  83 0016 E9000000 		jmp	_ZN9Fl_Widget6damageEh
  83      00
  84              	.LVL5:
  85 001b 0F1F4400 		.p2align 4,,10
  85      00
  86              		.p2align 3
  87              	.L3:
  88 0020 F3C3     		rep ret
  89              		.cfi_endproc
  90              	.LFE336:
  92              		.section	.text.unlikely._ZN12Fl_Gl_Window14redraw_overlayEv
  93              	.LCOLDE2:
  94              		.section	.text._ZN12Fl_Gl_Window14redraw_overlayEv
  95              	.LHOTE2:
  96              		.section	.text.unlikely._ZN12Fl_Gl_Window20make_overlay_currentEv,"ax",@progbits
  97              		.align 2
  98              	.LCOLDB3:
  99              		.section	.text._ZN12Fl_Gl_Window20make_overlay_currentEv,"ax",@progbits
 100              	.LHOTB3:
 101              		.align 2
 102              		.p2align 4,,15
 103              		.globl	_ZN12Fl_Gl_Window20make_overlay_currentEv
 105              	_ZN12Fl_Gl_Window20make_overlay_currentEv:
 106              	.LFB337:
 107              		.loc 1 202 0
 108              		.cfi_startproc
 109              	.LVL6:
 110              	.LBB10:
 111              	.LBB11:
 112              		.loc 1 32 0
 113 0000 4889BF10 		movq	%rdi, 272(%rdi)
 113      010000
 114              	.LVL7:
 115              	.LBE11:
 116              	.LBE10:
 117              		.loc 1 221 0
 118 0007 BF040400 		movl	$1028, %edi
 118      00
 119              	.LVL8:
 120 000c E9000000 		jmp	glDrawBuffer
 120      00
 121              	.LVL9:
 122              		.cfi_endproc
 123              	.LFE337:
 125              		.section	.text.unlikely._ZN12Fl_Gl_Window20make_overlay_currentEv
 126              	.LCOLDE3:
 127              		.section	.text._ZN12Fl_Gl_Window20make_overlay_currentEv
 128              	.LHOTE3:
 129              		.section	.text.unlikely._ZN12Fl_Gl_Window12hide_overlayEv,"ax",@progbits
 130              		.align 2
 131              	.LCOLDB4:
 132              		.section	.text._ZN12Fl_Gl_Window12hide_overlayEv,"ax",@progbits
 133              	.LHOTB4:
 134              		.align 2
 135              		.p2align 4,,15
 136              		.globl	_ZN12Fl_Gl_Window12hide_overlayEv
 138              	_ZN12Fl_Gl_Window12hide_overlayEv:
 139              	.LFB338:
 140              		.loc 1 225 0
 141              		.cfi_startproc
 142              	.LVL10:
 143 0000 F3C3     		rep ret
 144              		.cfi_endproc
 145              	.LFE338:
 147              		.section	.text.unlikely._ZN12Fl_Gl_Window12hide_overlayEv
 148              	.LCOLDE4:
 149              		.section	.text._ZN12Fl_Gl_Window12hide_overlayEv
 150              	.LHOTE4:
 151              		.text
 152              	.Letext0:
 153              		.section	.text.unlikely._ZN12Fl_Gl_Window14can_do_overlayEv
 154              	.Letext_cold0:
 155              		.file 2 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 156              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
 157              		.file 4 "/usr/include/libio.h"
 158              		.file 5 "fltk-1.3.4-1/FL/Enumerations.H"
 159              		.file 6 "fltk-1.3.4-1/FL/Fl_Window.H"
 160              		.file 7 "/usr/include/stdio.h"
 161              		.file 8 "fltk-1.3.4-1/FL/Fl_Widget.H"
 162              		.file 9 "/usr/include/GL/gl.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Gl_Overlay.cxx
     /tmp/ccb4Xrdl.s:16     .text._ZN12Fl_Gl_Window14can_do_overlayEv:0000000000000000 _ZN12Fl_Gl_Window14can_do_overlayEv
     /tmp/ccb4Xrdl.s:41     .text._ZN12Fl_Gl_Window12make_overlayEv:0000000000000000 _ZN12Fl_Gl_Window12make_overlayEv
     /tmp/ccb4Xrdl.s:65     .text._ZN12Fl_Gl_Window14redraw_overlayEv:0000000000000000 _ZN12Fl_Gl_Window14redraw_overlayEv
     /tmp/ccb4Xrdl.s:105    .text._ZN12Fl_Gl_Window20make_overlay_currentEv:0000000000000000 _ZN12Fl_Gl_Window20make_overlay_currentEv
     /tmp/ccb4Xrdl.s:138    .text._ZN12Fl_Gl_Window12hide_overlayEv:0000000000000000 _ZN12Fl_Gl_Window12hide_overlayEv
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
                           .group:0000000000000000 wm4.gl.h.28.27e118789b77bf53572e8b8b827388be
                           .group:0000000000000000 wm4.glext.h.2.33ebf91cb2ac393e00fbf001cfd5adf6
                           .group:0000000000000000 wm4.glext.h.470.f1f9a32ea973d58e9e9d60b0d331a28b
                           .group:0000000000000000 wm4.wchar.h.20.510818a05484290d697a517509bf4b2d
                           .group:0000000000000000 wm4.stdint.h.52.8bda5d4f6e37fcdcd6c952c7de376f68
                           .group:0000000000000000 wm4.inttypes.h.32.c4dc77c414e5a88041490e6d2aa1116a
                           .group:0000000000000000 wm4.glext.h.1425.4660c46bd83bf818a1c8102c2fa59820
                           .group:0000000000000000 wm4.gl.h.2066.d218939585eb4fd8b54422df1c78229d
                           .group:0000000000000000 wm4.glx.h.45.4b7e546d91728004cab1371c348ddb63
                           .group:0000000000000000 wm4.glxext.h.2.b4e8a31b7f042be05811d22657d85b23
                           .group:0000000000000000 wm4.glx.h.347.6b73155b2e226683d914b22e4387b260

UNDEFINED SYMBOLS
_ZN9Fl_Widget6damageEh
glDrawBuffer
