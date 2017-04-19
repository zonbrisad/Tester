   1              		.file	"fl_scroll_area.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z9fl_scrolliiiiiiPFvPviiiiES_,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._Z9fl_scrolliiiiiiPFvPviiiiES_,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z9fl_scrolliiiiiiPFvPviiiiES_
  10              	.Ltext_cold0:
  11              		.section	.text._Z9fl_scrolliiiiiiPFvPviiiiES_
  12              		.globl	_Z9fl_scrolliiiiiiPFvPviiiiES_
  14              	_Z9fl_scrolliiiiiiPFvPviiiiES_:
  15              	.LFB468:
  16              		.file 1 "fltk-1.3.4-1/src/fl_scroll_area.cxx"
   1:fltk-1.3.4-1/src/fl_scroll_area.cxx **** ...
  17              		.loc 1 42 0
  18              		.cfi_startproc
  19              	.LVL0:
  20 0000 4157     		pushq	%r15
  21              		.cfi_def_cfa_offset 16
  22              		.cfi_offset 15, -16
  23 0002 4156     		pushq	%r14
  24              		.cfi_def_cfa_offset 24
  25              		.cfi_offset 14, -24
  26 0004 4155     		pushq	%r13
  27              		.cfi_def_cfa_offset 32
  28              		.cfi_offset 13, -32
  29 0006 4154     		pushq	%r12
  30              		.cfi_def_cfa_offset 40
  31              		.cfi_offset 12, -40
  32 0008 55       		pushq	%rbp
  33              		.cfi_def_cfa_offset 48
  34              		.cfi_offset 6, -48
  35 0009 53       		pushq	%rbx
  36              		.cfi_def_cfa_offset 56
  37              		.cfi_offset 3, -56
  38 000a 4881ECF8 		subq	$248, %rsp
  38      000000
  39              		.cfi_def_cfa_offset 304
  40              		.loc 1 42 0
  41 0011 64488B04 		movq	%fs:40, %rax
  41      25280000 
  41      00
  42 001a 48898424 		movq	%rax, 232(%rsp)
  42      E8000000 
  43 0022 31C0     		xorl	%eax, %eax
  44              		.loc 1 43 0
  45 0024 4489C0   		movl	%r8d, %eax
  46              		.loc 1 42 0
  47 0027 4C8BA424 		movq	304(%rsp), %r12
  47      30010000 
  48 002f 4C8BAC24 		movq	312(%rsp), %r13
  48      38010000 
  49              		.loc 1 43 0
  50 0037 4409C8   		orl	%r9d, %eax
  51 003a 0F842901 		je	.L1
  51      0000
  52              		.loc 1 44 0
  53 0040 89D0     		movl	%edx, %eax
  54 0042 4189FF   		movl	%edi, %r15d
  55 0045 4189D6   		movl	%edx, %r14d
  56 0048 F7D8     		negl	%eax
  57 004a 4489C3   		movl	%r8d, %ebx
  58 004d 4139C0   		cmpl	%eax, %r8d
  59 0050 0F8E0201 		jle	.L4
  59      0000
  60 0056 4139D0   		cmpl	%edx, %r8d
  61 0059 0F8DF900 		jge	.L4
  61      0000
  62              		.loc 1 44 0 is_stmt 0 discriminator 2
  63 005f 89C8     		movl	%ecx, %eax
  64 0061 4489CD   		movl	%r9d, %ebp
  65 0064 F7D8     		negl	%eax
  66 0066 4139C1   		cmpl	%eax, %r9d
  67 0069 0F8EE900 		jle	.L4
  67      0000
  68 006f 4139C9   		cmpl	%ecx, %r9d
  69 0072 0F8DE000 		jge	.L4
  69      0000
  70              		.loc 1 50 0 is_stmt 1
  71 0078 4585C0   		testl	%r8d, %r8d
  72 007b 0F8E5701 		jle	.L7
  72      0000
  73              	.LVL1:
  74              		.loc 1 52 0
  75 0081 418D3C38 		leal	(%r8,%rdi), %edi
  76              	.LVL2:
  77              		.loc 1 53 0
  78 0085 4429C2   		subl	%r8d, %edx
  79              	.LVL3:
  80 0088 44894424 		movl	%r8d, 28(%rsp)
  80      1C
  81              		.loc 1 54 0
  82 008d 44897C24 		movl	%r15d, 24(%rsp)
  82      18
  83              		.loc 1 51 0
  84 0092 4589F8   		movl	%r15d, %r8d
  85              	.LVL4:
  86              	.L8:
  87              		.loc 1 64 0
  88 0095 85ED     		testl	%ebp, %ebp
  89 0097 0F8E1301 		jle	.L9
  89      0000
  90              	.LVL5:
  91              		.loc 1 66 0
  92 009d 8D443500 		leal	0(%rbp,%rsi), %eax
  93              		.loc 1 67 0
  94 00a1 29E9     		subl	%ebp, %ecx
  95              	.LVL6:
  96 00a3 896C2414 		movl	%ebp, 20(%rsp)
  97 00a7 894C2408 		movl	%ecx, 8(%rsp)
  98              		.loc 1 68 0
  99 00ab 89742410 		movl	%esi, 16(%rsp)
 100              		.loc 1 66 0
 101 00af 8944240C 		movl	%eax, 12(%rsp)
 102              	.LVL7:
 103              	.L10:
 104              		.loc 1 80 0
 105 00b3 8B4C240C 		movl	12(%rsp), %ecx
 106 00b7 488B0500 		movq	fl_window(%rip), %rax
 106      000000
 107 00be 4189F1   		movl	%esi, %r9d
 108              	.LVL8:
 109 00c1 51       		pushq	%rcx
 110              		.cfi_def_cfa_offset 312
 111 00c2 57       		pushq	%rdi
 112              		.cfi_def_cfa_offset 320
 113 00c3 4889C6   		movq	%rax, %rsi
 114              	.LVL9:
 115 00c6 8B7C2418 		movl	24(%rsp), %edi
 116              	.LVL10:
 117 00ca 488B0D00 		movq	fl_gc(%rip), %rcx
 117      000000
 118 00d1 57       		pushq	%rdi
 119              		.cfi_def_cfa_offset 328
 120              	.LVL11:
 121 00d2 488B3D00 		movq	fl_display(%rip), %rdi
 121      000000
 122 00d9 52       		pushq	%rdx
 123              		.cfi_def_cfa_offset 336
 124 00da 4889C2   		movq	%rax, %rdx
 125              	.LVL12:
 126 00dd E8000000 		call	XCopyArea
 126      00
 127              	.LVL13:
 128 00e2 4883C420 		addq	$32, %rsp
 129              		.cfi_def_cfa_offset 304
 130 00e6 EB27     		jmp	.L12
 131 00e8 0F1F8400 		.p2align 4,,10
 131      00000000 
 132              		.p2align 3
 133              	.L24:
 134              	.LBB2:
 135              	.LBB3:
 136              		.loc 1 87 0
 137 00f0 448B4424 		movl	84(%rsp), %r8d
 137      54
 138 00f5 8B4C2450 		movl	80(%rsp), %ecx
 139 00f9 4C89EF   		movq	%r13, %rdi
 140 00fc 8B54244C 		movl	76(%rsp), %edx
 141 0100 8B742448 		movl	72(%rsp), %esi
 142 0104 41FFD4   		call	*%r12
 143              	.LVL14:
 144              		.loc 1 88 0
 145 0107 8B442458 		movl	88(%rsp), %eax
 146 010b 85C0     		testl	%eax, %eax
 147 010d 7424     		je	.L11
 148              	.L12:
 149              		.loc 1 83 0
 150 010f 488B3500 		movq	fl_window(%rip), %rsi
 150      000000
 151 0116 488B3D00 		movq	fl_display(%rip), %rdi
 151      000000
 152 011d 488D4C24 		leaq	32(%rsp), %rcx
 152      20
 153 0122 BA008000 		movl	$32768, %edx
 153      00
 154 0127 E8000000 		call	XWindowEvent
 154      00
 155              	.LVL15:
 156              		.loc 1 84 0
 157 012c 837C2420 		cmpl	$14, 32(%rsp)
 157      0E
 158 0131 75BD     		jne	.L24
 159              	.L11:
 160              	.LBE3:
 161              	.LBE2:
 162              		.loc 1 156 0
 163 0133 85DB     		testl	%ebx, %ebx
 164 0135 7559     		jne	.L25
 165              	.L13:
 166              		.loc 1 157 0
 167 0137 85ED     		testl	%ebp, %ebp
 168 0139 742E     		je	.L1
 169              		.loc 1 157 0 is_stmt 0 discriminator 1
 170 013b 448B4424 		movl	20(%rsp), %r8d
 170      14
 171 0140 4489F1   		movl	%r14d, %ecx
 172 0143 8B542410 		movl	16(%rsp), %edx
 173 0147 4489FE   		movl	%r15d, %esi
 174 014a 4C89EF   		movq	%r13, %rdi
 175 014d 41FFD4   		call	*%r12
 176              	.LVL16:
 177 0150 EB17     		jmp	.L1
 178              	.LVL17:
 179              		.p2align 4,,10
 180 0152 660F1F44 		.p2align 3
 180      0000
 181              	.L4:
 182              		.loc 1 46 0 is_stmt 1
 183 0158 4189C8   		movl	%ecx, %r8d
 184 015b 89F2     		movl	%esi, %edx
 185              	.LVL18:
 186 015d 4489F1   		movl	%r14d, %ecx
 187              	.LVL19:
 188 0160 4489FE   		movl	%r15d, %esi
 189              	.LVL20:
 190 0163 4C89EF   		movq	%r13, %rdi
 191              	.LVL21:
 192 0166 41FFD4   		call	*%r12
 193              	.LVL22:
 194              	.L1:
 195              		.loc 1 158 0
 196 0169 488B8424 		movq	232(%rsp), %rax
 196      E8000000 
 197 0171 64483304 		xorq	%fs:40, %rax
 197      25280000 
 197      00
 198 017a 7579     		jne	.L26
 199 017c 4881C4F8 		addq	$248, %rsp
 199      000000
 200              		.cfi_remember_state
 201              		.cfi_def_cfa_offset 56
 202 0183 5B       		popq	%rbx
 203              		.cfi_def_cfa_offset 48
 204 0184 5D       		popq	%rbp
 205              		.cfi_def_cfa_offset 40
 206 0185 415C     		popq	%r12
 207              		.cfi_def_cfa_offset 32
 208 0187 415D     		popq	%r13
 209              		.cfi_def_cfa_offset 24
 210 0189 415E     		popq	%r14
 211              		.cfi_def_cfa_offset 16
 212 018b 415F     		popq	%r15
 213              		.cfi_def_cfa_offset 8
 214 018d C3       		ret
 215              	.LVL23:
 216 018e 6690     		.p2align 4,,10
 217              		.p2align 3
 218              	.L25:
 219              		.cfi_restore_state
 220              		.loc 1 156 0 discriminator 1
 221 0190 448B4424 		movl	8(%rsp), %r8d
 221      08
 222 0195 8B4C241C 		movl	28(%rsp), %ecx
 223 0199 4C89EF   		movq	%r13, %rdi
 224 019c 8B54240C 		movl	12(%rsp), %edx
 225 01a0 8B742418 		movl	24(%rsp), %esi
 226 01a4 41FFD4   		call	*%r12
 227              	.LVL24:
 228 01a7 EB8E     		jmp	.L13
 229              	.LVL25:
 230 01a9 0F1F8000 		.p2align 4,,10
 230      000000
 231              		.p2align 3
 232              	.L9:
 233              		.loc 1 73 0
 234 01b0 8D440D00 		leal	0(%rbp,%rcx), %eax
 235              		.loc 1 72 0
 236 01b4 8974240C 		movl	%esi, 12(%rsp)
 237              		.loc 1 73 0
 238 01b8 89442408 		movl	%eax, 8(%rsp)
 239              	.LVL26:
 240              		.loc 1 74 0
 241 01bc 01F0     		addl	%esi, %eax
 242              	.LVL27:
 243              		.loc 1 71 0
 244 01be 29EE     		subl	%ebp, %esi
 245              	.LVL28:
 246              		.loc 1 74 0
 247 01c0 89442410 		movl	%eax, 16(%rsp)
 248              	.LVL29:
 249              		.loc 1 75 0
 250 01c4 89E8     		movl	%ebp, %eax
 251              	.LVL30:
 252 01c6 F7D8     		negl	%eax
 253 01c8 89442414 		movl	%eax, 20(%rsp)
 254              	.LVL31:
 255 01cc E9E2FEFF 		jmp	.L10
 255      FF
 256              	.LVL32:
 257              		.p2align 4,,10
 258 01d1 0F1F8000 		.p2align 3
 258      000000
 259              	.L7:
 260              		.loc 1 59 0
 261 01d8 8D1413   		leal	(%rbx,%rdx), %edx
 262              	.LVL33:
 263              		.loc 1 57 0
 264 01db 4189F8   		movl	%edi, %r8d
 265 01de 4129D8   		subl	%ebx, %r8d
 266              	.LVL34:
 267              		.loc 1 60 0
 268 01e1 8D0417   		leal	(%rdi,%rdx), %eax
 269 01e4 89442418 		movl	%eax, 24(%rsp)
 270              	.LVL35:
 271              		.loc 1 61 0
 272 01e8 89D8     		movl	%ebx, %eax
 273              	.LVL36:
 274 01ea F7D8     		negl	%eax
 275 01ec 8944241C 		movl	%eax, 28(%rsp)
 276              	.LVL37:
 277 01f0 E9A0FEFF 		jmp	.L8
 277      FF
 278              	.LVL38:
 279              	.L26:
 280              		.loc 1 158 0
 281 01f5 E8000000 		call	__stack_chk_fail
 281      00
 282              	.LVL39:
 283              		.cfi_endproc
 284              	.LFE468:
 286              		.section	.text.unlikely._Z9fl_scrolliiiiiiPFvPviiiiES_
 287              	.LCOLDE0:
 288              		.section	.text._Z9fl_scrolliiiiiiPFvPviiiiES_
 289              	.LHOTE0:
 290              		.text
 291              	.Letext0:
 292              		.section	.text.unlikely._Z9fl_scrolliiiiiiPFvPviiiiES_
 293              	.Letext_cold0:
 294              		.file 2 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 295              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
 296              		.file 4 "/usr/include/libio.h"
 297              		.file 5 "fltk-1.3.4-1/FL/Enumerations.H"
 298              		.file 6 "/usr/include/X11/X.h"
 299              		.file 7 "/usr/include/X11/Xlib.h"
 300              		.file 8 "fltk-1.3.4-1/FL/Fl_Device.H"
 301              		.file 9 "/usr/include/stdio.h"
 302              		.file 10 "fltk-1.3.4-1/FL/x.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_scroll_area.cxx
     /tmp/ccA86w2Z.s:14     .text._Z9fl_scrolliiiiiiPFvPviiiiES_:0000000000000000 _Z9fl_scrolliiiiiiPFvPviiiiES_
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
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b

UNDEFINED SYMBOLS
fl_window
fl_gc
fl_display
XCopyArea
XWindowEvent
__stack_chk_fail
