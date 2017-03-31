   1              		.file	"fl_arci.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN18Fl_Graphics_Driver3arcEiiiidd,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB1:
   7              		.section	.text._ZN18Fl_Graphics_Driver3arcEiiiidd,"ax",@progbits
   8              	.LHOTB1:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN18Fl_Graphics_Driver3arcEiiiidd
  12              	.Ltext_cold0:
  13              		.section	.text._ZN18Fl_Graphics_Driver3arcEiiiidd
  14              		.globl	_ZN18Fl_Graphics_Driver3arcEiiiidd
  16              	_ZN18Fl_Graphics_Driver3arcEiiiidd:
  17              	.LFB373:
  18              		.file 1 "fltk-1.3.4-1/src/fl_arci.cxx"
   1:fltk-1.3.4-1/src/fl_arci.cxx **** ...
  19              		.loc 1 41 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              		.loc 1 42 0
  23 0000 85C9     		testl	%ecx, %ecx
  24 0002 7E58     		jle	.L5
  25 0004 4585C0   		testl	%r8d, %r8d
  26 0007 7E53     		jle	.L5
  27              		.loc 1 45 0
  28 0009 F20F5CC8 		subsd	%xmm0, %xmm1
  29              	.LVL1:
  30              		.loc 1 41 0
  31 000d 4883EC10 		subq	$16, %rsp
  32              		.cfi_def_cfa_offset 24
  33 0011 4489C7   		movl	%r8d, %edi
  34              	.LVL2:
  35              		.loc 1 45 0
  36 0014 F20F1015 		movsd	.LC0(%rip), %xmm2
  36      00000000 
  37 001c 4189C9   		movl	%ecx, %r9d
  38 001f 4189D0   		movl	%edx, %r8d
  39              	.LVL3:
  40 0022 89F1     		movl	%esi, %ecx
  41              	.LVL4:
  42 0024 488B1500 		movq	fl_gc(%rip), %rdx
  42      000000
  43              	.LVL5:
  44 002b 488B3500 		movq	fl_window(%rip), %rsi
  44      000000
  45              	.LVL6:
  46 0032 4183E901 		subl	$1, %r9d
  47              	.LVL7:
  48 0036 F20F59CA 		mulsd	%xmm2, %xmm1
  49 003a F20F59D0 		mulsd	%xmm0, %xmm2
  50 003e F20F2CC1 		cvttsd2si	%xmm1, %eax
  51 0042 50       		pushq	%rax
  52              		.cfi_def_cfa_offset 32
  53 0043 F20F2CC2 		cvttsd2si	%xmm2, %eax
  54 0047 50       		pushq	%rax
  55              		.cfi_def_cfa_offset 40
  56 0048 8D47FF   		leal	-1(%rdi), %eax
  57 004b 488B3D00 		movq	fl_display(%rip), %rdi
  57      000000
  58              	.LVL8:
  59 0052 50       		pushq	%rax
  60              		.cfi_def_cfa_offset 48
  61 0053 E8000000 		call	XDrawArc
  61      00
  62              	.LVL9:
  63              		.loc 1 74 0
  64 0058 4883C428 		addq	$40, %rsp
  65              		.cfi_def_cfa_offset 8
  66              	.L5:
  67 005c F3C3     		rep ret
  68              		.cfi_endproc
  69              	.LFE373:
  71              		.section	.text.unlikely._ZN18Fl_Graphics_Driver3arcEiiiidd
  72              	.LCOLDE1:
  73              		.section	.text._ZN18Fl_Graphics_Driver3arcEiiiidd
  74              	.LHOTE1:
  75              		.section	.text.unlikely._ZN18Fl_Graphics_Driver3pieEiiiidd,"ax",@progbits
  76              		.align 2
  77              	.LCOLDB2:
  78              		.section	.text._ZN18Fl_Graphics_Driver3pieEiiiidd,"ax",@progbits
  79              	.LHOTB2:
  80              		.align 2
  81              		.p2align 4,,15
  82              		.globl	_ZN18Fl_Graphics_Driver3pieEiiiidd
  84              	_ZN18Fl_Graphics_Driver3pieEiiiidd:
  85              	.LFB374:
  86              		.loc 1 76 0
  87              		.cfi_startproc
  88              	.LVL10:
  89              		.loc 1 77 0
  90 0000 85C9     		testl	%ecx, %ecx
  91 0002 0F8EA200 		jle	.L11
  91      0000
  92 0008 4585C0   		testl	%r8d, %r8d
  93 000b 0F8E9900 		jle	.L11
  93      0000
  94              		.loc 1 76 0
  95 0011 4157     		pushq	%r15
  96              		.cfi_def_cfa_offset 16
  97              		.cfi_offset 15, -16
  98 0013 4156     		pushq	%r14
  99              		.cfi_def_cfa_offset 24
 100              		.cfi_offset 14, -24
 101              		.loc 1 80 0
 102 0015 F20F5CC8 		subsd	%xmm0, %xmm1
 103              	.LVL11:
 104              		.loc 1 76 0
 105 0019 4155     		pushq	%r13
 106              		.cfi_def_cfa_offset 32
 107              		.cfi_offset 13, -32
 108 001b 4154     		pushq	%r12
 109              		.cfi_def_cfa_offset 40
 110              		.cfi_offset 12, -40
 111              		.loc 1 80 0
 112 001d 458D60FF 		leal	-1(%r8), %r12d
 113              		.loc 1 76 0
 114 0021 55       		pushq	%rbp
 115              		.cfi_def_cfa_offset 48
 116              		.cfi_offset 6, -48
 117 0022 53       		pushq	%rbx
 118              		.cfi_def_cfa_offset 56
 119              		.cfi_offset 3, -56
 120              		.loc 1 80 0
 121 0023 8D69FF   		leal	-1(%rcx), %ebp
 122 0026 4189D6   		movl	%edx, %r14d
 123 0029 4189F7   		movl	%esi, %r15d
 124 002c 4189D0   		movl	%edx, %r8d
 125              	.LVL12:
 126              		.loc 1 76 0
 127 002f 4883EC10 		subq	$16, %rsp
 128              		.cfi_def_cfa_offset 72
 129              		.loc 1 80 0
 130 0033 89F1     		movl	%esi, %ecx
 131              	.LVL13:
 132 0035 488B1500 		movq	fl_gc(%rip), %rdx
 132      000000
 133              	.LVL14:
 134 003c F20F1015 		movsd	.LC0(%rip), %xmm2
 134      00000000 
 135 0044 488B3500 		movq	fl_window(%rip), %rsi
 135      000000
 136              	.LVL15:
 137 004b 488B3D00 		movq	fl_display(%rip), %rdi
 137      000000
 138              	.LVL16:
 139 0052 4189E9   		movl	%ebp, %r9d
 140 0055 F20F59CA 		mulsd	%xmm2, %xmm1
 141 0059 F20F59D0 		mulsd	%xmm0, %xmm2
 142 005d F20F2CD9 		cvttsd2si	%xmm1, %ebx
 143 0061 F2440F2C 		cvttsd2si	%xmm2, %r13d
 143      EA
 144 0066 53       		pushq	%rbx
 145              		.cfi_def_cfa_offset 80
 146 0067 4155     		pushq	%r13
 147              		.cfi_def_cfa_offset 88
 148 0069 4154     		pushq	%r12
 149              		.cfi_def_cfa_offset 96
 150 006b E8000000 		call	XDrawArc
 150      00
 151              	.LVL17:
 152              		.loc 1 81 0
 153 0070 4883C418 		addq	$24, %rsp
 154              		.cfi_def_cfa_offset 72
 155 0074 488B1500 		movq	fl_gc(%rip), %rdx
 155      000000
 156 007b 488B3500 		movq	fl_window(%rip), %rsi
 156      000000
 157 0082 488B3D00 		movq	fl_display(%rip), %rdi
 157      000000
 158 0089 53       		pushq	%rbx
 159              		.cfi_def_cfa_offset 80
 160 008a 4189E9   		movl	%ebp, %r9d
 161 008d 4155     		pushq	%r13
 162              		.cfi_def_cfa_offset 88
 163 008f 4154     		pushq	%r12
 164              		.cfi_def_cfa_offset 96
 165 0091 4589F0   		movl	%r14d, %r8d
 166 0094 4489F9   		movl	%r15d, %ecx
 167 0097 E8000000 		call	XFillArc
 167      00
 168              	.LVL18:
 169              		.loc 1 119 0
 170 009c 4883C428 		addq	$40, %rsp
 171              		.cfi_def_cfa_offset 56
 172 00a0 5B       		popq	%rbx
 173              		.cfi_restore 3
 174              		.cfi_def_cfa_offset 48
 175 00a1 5D       		popq	%rbp
 176              		.cfi_restore 6
 177              		.cfi_def_cfa_offset 40
 178              	.LVL19:
 179 00a2 415C     		popq	%r12
 180              		.cfi_restore 12
 181              		.cfi_def_cfa_offset 32
 182              	.LVL20:
 183 00a4 415D     		popq	%r13
 184              		.cfi_restore 13
 185              		.cfi_def_cfa_offset 24
 186 00a6 415E     		popq	%r14
 187              		.cfi_restore 14
 188              		.cfi_def_cfa_offset 16
 189              	.LVL21:
 190 00a8 415F     		popq	%r15
 191              		.cfi_restore 15
 192              		.cfi_def_cfa_offset 8
 193              	.LVL22:
 194              	.L11:
 195 00aa F3C3     		rep ret
 196              		.cfi_endproc
 197              	.LFE374:
 199              		.section	.text.unlikely._ZN18Fl_Graphics_Driver3pieEiiiidd
 200              	.LCOLDE2:
 201              		.section	.text._ZN18Fl_Graphics_Driver3pieEiiiidd
 202              	.LHOTE2:
 203              		.section	.rodata.cst8,"aM",@progbits,8
 204              		.align 8
 205              	.LC0:
 206 0000 00000000 		.long	0
 207 0004 00005040 		.long	1078984704
 208              		.text
 209              	.Letext0:
 210              		.section	.text.unlikely._ZN18Fl_Graphics_Driver3arcEiiiidd
 211              	.Letext_cold0:
 212              		.file 2 "fltk-1.3.4-1/FL/Enumerations.H"
 213              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
 214              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 215              		.file 5 "/usr/include/X11/X.h"
 216              		.file 6 "/usr/include/X11/Xlib.h"
 217              		.file 7 "/usr/include/libio.h"
 218              		.file 8 "fltk-1.3.4-1/FL/Fl_Device.H"
 219              		.file 9 "fltk-1.3.4-1/FL/x.H"
 220              		.file 10 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_arci.cxx
     /tmp/ccz5HBkB.s:16     .text._ZN18Fl_Graphics_Driver3arcEiiiidd:0000000000000000 _ZN18Fl_Graphics_Driver3arcEiiiidd
     /tmp/ccz5HBkB.s:84     .text._ZN18Fl_Graphics_Driver3pieEiiiidd:0000000000000000 _ZN18Fl_Graphics_Driver3pieEiiiidd
     /tmp/ccz5HBkB.s:205    .rodata.cst8:0000000000000000 .LC0
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
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
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.a2ca0b29d01f5da7ea7f879d801b43ca
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.75da223233ea088d05b70fad69e90c9e
                           .group:0000000000000000 wm4.stdlib.h.54.0af3535195ddeb87f5c2e8ca307f12bc
                           .group:0000000000000000 wm4.alloca.h.19.edefa922a76c1cbaaf1e416903ba2d1c
                           .group:0000000000000000 wm4.alloca.h.29.156e12058824cc23d961c4d3b13031f6
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.stdio.h.26.4719156f1aea2bb9662fd6c582dc9a4c
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
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f

UNDEFINED SYMBOLS
fl_gc
fl_window
fl_display
XDrawArc
XFillArc
