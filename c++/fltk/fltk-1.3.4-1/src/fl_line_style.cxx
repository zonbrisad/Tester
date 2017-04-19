   1              		.file	"fl_line_style.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10line_styleEiiPc,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN18Fl_Graphics_Driver10line_styleEiiPc,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10line_styleEiiPc
  12              	.Ltext_cold0:
  13              		.section	.text._ZN18Fl_Graphics_Driver10line_styleEiiPc
  14              		.globl	_ZN18Fl_Graphics_Driver10line_styleEiiPc
  16              	_ZN18Fl_Graphics_Driver10line_styleEiiPc:
  17              	.LFB506:
  18              		.file 1 "fltk-1.3.4-1/src/fl_line_style.cxx"
   1:fltk-1.3.4-1/src/fl_line_style.cxx **** ...
  19              		.loc 1 50 0
  20              		.cfi_startproc
  21              	.LVL0:
  22 0000 4155     		pushq	%r13
  23              		.cfi_def_cfa_offset 16
  24              		.cfi_offset 13, -16
  25 0002 4154     		pushq	%r12
  26              		.cfi_def_cfa_offset 24
  27              		.cfi_offset 12, -24
  28 0004 4989CC   		movq	%rcx, %r12
  29 0007 55       		pushq	%rbp
  30              		.cfi_def_cfa_offset 32
  31              		.cfi_offset 6, -32
  32 0008 53       		pushq	%rbx
  33              		.cfi_def_cfa_offset 40
  34              		.cfi_offset 3, -40
  35 0009 89D5     		movl	%edx, %ebp
  36 000b 89F3     		movl	%esi, %ebx
  37 000d 4883EC18 		subq	$24, %rsp
  38              		.cfi_def_cfa_offset 64
  39              		.loc 1 50 0
  40 0011 64488B04 		movq	%fs:40, %rax
  40      25280000 
  40      00
  41 001a 48894424 		movq	%rax, 8(%rsp)
  41      08
  42 001f 31C0     		xorl	%eax, %eax
  43              		.loc 1 53 0
  44 0021 85D2     		testl	%edx, %edx
  45 0023 0F859F00 		jne	.L2
  45      0000
  46              		.loc 1 57 0 discriminator 1
  47 0029 4D85E4   		testq	%r12, %r12
  48              		.loc 1 53 0 discriminator 1
  49 002c C7050000 		movl	$1, fl_line_width_(%rip)
  49      00000100 
  49      0000
  50              		.loc 1 57 0 discriminator 1
  51 0036 0F84B400 		je	.L4
  51      0000
  52              	.LVL1:
  53              	.L30:
  54 003c 4C89E7   		movq	%r12, %rdi
  55              	.LVL2:
  56 003f E8000000 		call	strlen
  56      00
  57              	.LVL3:
  58              	.LBB2:
  59              		.loc 1 60 0 discriminator 1
  60 0044 85C0     		testl	%eax, %eax
  61              	.LBE2:
  62              		.loc 1 57 0 discriminator 1
  63 0046 4189C5   		movl	%eax, %r13d
  64              	.LVL4:
  65              	.LBB5:
  66              		.loc 1 60 0 discriminator 1
  67 0049 0F84A100 		je	.L4
  67      0000
  68              	.LBE5:
  69              		.loc 1 83 0
  70 004f 89D8     		movl	%ebx, %eax
  71              	.LVL5:
  72 0051 C1FB08   		sarl	$8, %ebx
  73              	.LVL6:
  74 0054 C1F80C   		sarl	$12, %eax
  75              	.LVL7:
  76 0057 83E303   		andl	$3, %ebx
  77 005a 83E003   		andl	$3, %eax
  78 005d 448B049D 		movl	_ZZN18Fl_Graphics_Driver10line_styleEiiPcE3Cap(,%rbx,4), %r8d
  78      00000000 
  79 0065 448B0C85 		movl	_ZZN18Fl_Graphics_Driver10line_styleEiiPcE4Join(,%rax,4), %r9d
  79      00000000 
  80              	.LVL8:
  81              	.L18:
  82              		.loc 1 85 0
  83 006d 488B3500 		movq	fl_gc(%rip), %rsi
  83      000000
  84 0074 488B3D00 		movq	fl_display(%rip), %rdi
  84      000000
  85 007b B9010000 		movl	$1, %ecx
  85      00
  86 0080 89EA     		movl	%ebp, %edx
  87 0082 E8000000 		call	XSetLineAttributes
  87      00
  88              	.LVL9:
  89              		.loc 1 86 0
  90 0087 488B3500 		movq	fl_gc(%rip), %rsi
  90      000000
  91 008e 488B3D00 		movq	fl_display(%rip), %rdi
  91      000000
  92 0095 4589E8   		movl	%r13d, %r8d
  93 0098 4C89E1   		movq	%r12, %rcx
  94 009b 31D2     		xorl	%edx, %edx
  95 009d E8000000 		call	XSetDashes
  95      00
  96              	.LVL10:
  97              	.L1:
  98              		.loc 1 160 0
  99 00a2 488B4424 		movq	8(%rsp), %rax
  99      08
 100 00a7 64483304 		xorq	%fs:40, %rax
 100      25280000 
 100      00
 101 00b0 0F856501 		jne	.L29
 101      0000
 102 00b6 4883C418 		addq	$24, %rsp
 103              		.cfi_remember_state
 104              		.cfi_def_cfa_offset 40
 105 00ba 5B       		popq	%rbx
 106              		.cfi_def_cfa_offset 32
 107 00bb 5D       		popq	%rbp
 108              		.cfi_def_cfa_offset 24
 109              	.LVL11:
 110 00bc 415C     		popq	%r12
 111              		.cfi_def_cfa_offset 16
 112 00be 415D     		popq	%r13
 113              		.cfi_def_cfa_offset 8
 114 00c0 C3       		ret
 115              	.LVL12:
 116              		.p2align 4,,10
 117 00c1 0F1F8000 		.p2align 3
 117      000000
 118              	.L2:
 119              		.cfi_restore_state
 120              		.loc 1 54 0
 121 00c8 89D0     		movl	%edx, %eax
 122 00ca C1F81F   		sarl	$31, %eax
 123 00cd 89C2     		movl	%eax, %edx
 124              	.LVL13:
 125 00cf 31EA     		xorl	%ebp, %edx
 126 00d1 89150000 		movl	%edx, fl_line_width_(%rip)
 126      0000
 127 00d7 29050000 		subl	%eax, fl_line_width_(%rip)
 127      0000
 128              		.loc 1 57 0
 129 00dd 4D85E4   		testq	%r12, %r12
 130 00e0 0F8556FF 		jne	.L30
 130      FFFF
 131              	.LVL14:
 132 00e6 662E0F1F 		.p2align 4,,10
 132      84000000 
 132      0000
 133              		.p2align 3
 134              	.L4:
 135              	.LBB6:
 136              		.loc 1 60 0 discriminator 1
 137 00f0 0FB6CB   		movzbl	%bl, %ecx
 138 00f3 85C9     		testl	%ecx, %ecx
 139 00f5 7541     		jne	.L31
 140              	.LVL15:
 141              	.L6:
 142              	.LBE6:
 143              		.loc 1 83 0
 144 00f7 89D8     		movl	%ebx, %eax
 145 00f9 C1FB08   		sarl	$8, %ebx
 146              	.LVL16:
 147 00fc C1F80C   		sarl	$12, %eax
 148              	.LVL17:
 149 00ff 83E303   		andl	$3, %ebx
 150 0102 83E003   		andl	$3, %eax
 151 0105 448B049D 		movl	_ZZN18Fl_Graphics_Driver10line_styleEiiPcE3Cap(,%rbx,4), %r8d
 151      00000000 
 152 010d 448B0C85 		movl	_ZZN18Fl_Graphics_Driver10line_styleEiiPcE4Join(,%rax,4), %r9d
 152      00000000 
 153              	.LVL18:
 154              	.L16:
 155              		.loc 1 85 0
 156 0115 488B3500 		movq	fl_gc(%rip), %rsi
 156      000000
 157 011c 488B3D00 		movq	fl_display(%rip), %rdi
 157      000000
 158 0123 31C9     		xorl	%ecx, %ecx
 159 0125 89EA     		movl	%ebp, %edx
 160 0127 E8000000 		call	XSetLineAttributes
 160      00
 161              	.LVL19:
 162 012c E971FFFF 		jmp	.L1
 162      FF
 163              	.LVL20:
 164              		.p2align 4,,10
 165 0131 0F1F8000 		.p2align 3
 165      000000
 166              	.L31:
 167 0138 85ED     		testl	%ebp, %ebp
 168 013a B8010000 		movl	$1, %eax
 168      00
 169 013f BA010000 		movl	$1, %edx
 169      00
 170 0144 0F45C5   		cmovne	%ebp, %eax
 171 0147 0F45D5   		cmovne	%ebp, %edx
 172              	.LVL21:
 173              	.LBB7:
 174              	.LBB3:
 175              		.loc 1 64 0
 176 014a F6C702   		testb	$2, %bh
 177 014d 7571     		jne	.L32
 178              		.loc 1 69 0
 179 014f 8D0440   		leal	(%rax,%rax,2), %eax
 180              	.LVL22:
 181              		.loc 1 70 0
 182 0152 89D6     		movl	%edx, %esi
 183              	.LVL23:
 184              	.L9:
 185              		.loc 1 73 0
 186 0154 83F902   		cmpl	$2, %ecx
 187 0157 0F849300 		je	.L11
 187      0000
 188 015d 7E71     		jle	.L33
 189 015f 83F903   		cmpl	$3, %ecx
 190 0162 0F849800 		je	.L14
 190      0000
 191 0168 83F904   		cmpl	$4, %ecx
 192 016b 758A     		jne	.L6
 193              	.LVL24:
 194              		.loc 1 77 0
 195 016d 880424   		movb	%al, (%rsp)
 196              	.LVL25:
 197 0170 88542401 		movb	%dl, 1(%rsp)
 198              	.LVL26:
 199 0174 41BD0600 		movl	$6, %r13d
 199      0000
 200 017a 40887424 		movb	%sil, 2(%rsp)
 200      02
 201              	.LVL27:
 202 017f 88542403 		movb	%dl, 3(%rsp)
 203              	.LVL28:
 204 0183 40887424 		movb	%sil, 4(%rsp)
 204      04
 205              	.LVL29:
 206 0188 88542405 		movb	%dl, 5(%rsp)
 207              	.LVL30:
 208              	.L17:
 209              	.LBE3:
 210              	.LBE7:
 211              		.loc 1 83 0
 212 018c 89D8     		movl	%ebx, %eax
 213              	.LVL31:
 214 018e C1FB08   		sarl	$8, %ebx
 215              	.LVL32:
 216 0191 C1F80C   		sarl	$12, %eax
 217              	.LVL33:
 218 0194 83E303   		andl	$3, %ebx
 219 0197 83E003   		andl	$3, %eax
 220 019a 4585ED   		testl	%r13d, %r13d
 221 019d 448B049D 		movl	_ZZN18Fl_Graphics_Driver10line_styleEiiPcE3Cap(,%rbx,4), %r8d
 221      00000000 
 222 01a5 448B0C85 		movl	_ZZN18Fl_Graphics_Driver10line_styleEiiPcE4Join(,%rax,4), %r9d
 222      00000000 
 223 01ad 0F8462FF 		je	.L16
 223      FFFF
 224              	.LBB8:
 225              	.LBB4:
 226              		.loc 1 72 0
 227 01b3 4989E4   		movq	%rsp, %r12
 228 01b6 E9B2FEFF 		jmp	.L18
 228      FF
 229              	.LVL34:
 230 01bb 0F1F4400 		.p2align 4,,10
 230      00
 231              		.p2align 3
 232              	.L32:
 233              		.loc 1 65 0
 234 01c0 01C0     		addl	%eax, %eax
 235              	.LVL35:
 236              		.loc 1 66 0
 237 01c2 BE010000 		movl	$1, %esi
 237      00
 238              		.loc 1 67 0
 239 01c7 8D50FF   		leal	-1(%rax), %edx
 240              	.LVL36:
 241 01ca EB88     		jmp	.L9
 242              	.LVL37:
 243 01cc 0F1F4000 		.p2align 4,,10
 244              		.p2align 3
 245              	.L33:
 246              		.loc 1 73 0
 247 01d0 83F901   		cmpl	$1, %ecx
 248 01d3 0F851EFF 		jne	.L6
 248      FFFF
 249              	.LVL38:
 250              		.loc 1 74 0
 251 01d9 880424   		movb	%al, (%rsp)
 252              	.LVL39:
 253 01dc 88542401 		movb	%dl, 1(%rsp)
 254 01e0 41BD0200 		movl	$2, %r13d
 254      0000
 255 01e6 EBA4     		jmp	.L17
 256              	.LVL40:
 257 01e8 0F1F8400 		.p2align 4,,10
 257      00000000 
 258              		.p2align 3
 259              	.L11:
 260              		.loc 1 75 0
 261 01f0 40883424 		movb	%sil, (%rsp)
 262              	.LVL41:
 263 01f4 88542401 		movb	%dl, 1(%rsp)
 264 01f8 41BD0200 		movl	$2, %r13d
 264      0000
 265 01fe EB8C     		jmp	.L17
 266              	.LVL42:
 267              		.p2align 4,,10
 268              		.p2align 3
 269              	.L14:
 270              		.loc 1 76 0
 271 0200 880424   		movb	%al, (%rsp)
 272              	.LVL43:
 273 0203 88542401 		movb	%dl, 1(%rsp)
 274              	.LVL44:
 275 0207 41BD0400 		movl	$4, %r13d
 275      0000
 276 020d 40887424 		movb	%sil, 2(%rsp)
 276      02
 277              	.LVL45:
 278 0212 88542403 		movb	%dl, 3(%rsp)
 279 0216 E971FFFF 		jmp	.L17
 279      FF
 280              	.LVL46:
 281              	.L29:
 282              	.LBE4:
 283              	.LBE8:
 284              		.loc 1 160 0
 285 021b E8000000 		call	__stack_chk_fail
 285      00
 286              	.LVL47:
 287              		.cfi_endproc
 288              	.LFE506:
 290              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10line_styleEiiPc
 291              	.LCOLDE0:
 292              		.section	.text._ZN18Fl_Graphics_Driver10line_styleEiiPc
 293              	.LHOTE0:
 294              		.section	.rodata._ZZN18Fl_Graphics_Driver10line_styleEiiPcE3Cap,"a",@progbits
 295              		.align 16
 298              	_ZZN18Fl_Graphics_Driver10line_styleEiiPcE3Cap:
 299 0000 01000000 		.long	1
 300 0004 01000000 		.long	1
 301 0008 02000000 		.long	2
 302 000c 03000000 		.long	3
 303              		.section	.rodata._ZZN18Fl_Graphics_Driver10line_styleEiiPcE4Join,"a",@progbits
 304              		.align 16
 307              	_ZZN18Fl_Graphics_Driver10line_styleEiiPcE4Join:
 308 0000 00000000 		.long	0
 309 0004 00000000 		.long	0
 310 0008 01000000 		.long	1
 311 000c 02000000 		.long	2
 312              		.globl	fl_line_width_
 313              		.section	.bss.fl_line_width_,"aw",@nobits
 314              		.align 4
 317              	fl_line_width_:
 318 0000 00000000 		.zero	4
 319              		.text
 320              	.Letext0:
 321              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10line_styleEiiPc
 322              	.Letext_cold0:
 323              		.file 2 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 324              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
 325              		.file 4 "/usr/include/libio.h"
 326              		.file 5 "fltk-1.3.4-1/FL/Enumerations.H"
 327              		.file 6 "/usr/include/X11/Xlib.h"
 328              		.file 7 "fltk-1.3.4-1/FL/Fl_Device.H"
 329              		.file 8 "/usr/include/stdio.h"
 330              		.file 9 "fltk-1.3.4-1/FL/x.H"
 331              		.file 10 "/usr/include/string.h"
 332              		.file 11 "fltk-1.3.4-1/FL/fl_draw.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_line_style.cxx
     /tmp/ccpBdWqX.s:16     .text._ZN18Fl_Graphics_Driver10line_styleEiiPc:0000000000000000 _ZN18Fl_Graphics_Driver10line_styleEiiPc
     /tmp/ccpBdWqX.s:317    .bss.fl_line_width_:0000000000000000 fl_line_width_
     /tmp/ccpBdWqX.s:298    .rodata._ZZN18Fl_Graphics_Driver10line_styleEiiPcE3Cap:0000000000000000 _ZZN18Fl_Graphics_Driver10line_styleEiiPcE3Cap
     /tmp/ccpBdWqX.s:307    .rodata._ZZN18Fl_Graphics_Driver10line_styleEiiPcE4Join:0000000000000000 _ZZN18Fl_Graphics_Driver10line_styleEiiPcE4Join
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
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.Fl_Paged_Device.H.24.17d293ffe430c1a32b384d9c155f7090
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
strlen
fl_gc
fl_display
XSetLineAttributes
XSetDashes
__stack_chk_fail
