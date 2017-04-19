   1              		.file	"filename_isdir.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z17fl_filename_isdirPKc,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._Z17fl_filename_isdirPKc,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z17fl_filename_isdirPKc
  10              	.Ltext_cold0:
  11              		.section	.text._Z17fl_filename_isdirPKc
  12              		.globl	_Z17fl_filename_isdirPKc
  14              	_Z17fl_filename_isdirPKc:
  15              	.LFB101:
  16              		.file 1 "fltk-1.3.4-1/src/filename_isdir.cxx"
   1:fltk-1.3.4-1/src/filename_isdir.cxx **** ...
  17              		.loc 1 52 0
  18              		.cfi_startproc
  19              	.LVL0:
  20 0000 55       		pushq	%rbp
  21              		.cfi_def_cfa_offset 16
  22              		.cfi_offset 6, -16
  23 0001 53       		pushq	%rbx
  24              		.cfi_def_cfa_offset 24
  25              		.cfi_offset 3, -24
  26 0002 4889FB   		movq	%rdi, %rbx
  27 0005 4881ECA8 		subq	$2216, %rsp
  27      080000
  28              		.cfi_def_cfa_offset 2240
  29              		.loc 1 52 0
  30 000c 64488B04 		movq	%fs:40, %rax
  30      25280000 
  30      00
  31 0015 48898424 		movq	%rax, 2200(%rsp)
  31      98080000 
  32 001d 31C0     		xorl	%eax, %eax
  33              		.loc 1 57 0
  34 001f E8000000 		call	strlen
  34      00
  35              	.LVL1:
  36              		.loc 1 81 0
  37 0024 83F801   		cmpl	$1, %eax
  38 0027 7E0A     		jle	.L2
  39              		.loc 1 81 0 is_stmt 0 discriminator 1
  40 0029 4863D0   		movslq	%eax, %rdx
  41 002c 807C13FF 		cmpb	$47, -1(%rbx,%rdx)
  41      2F
  42 0031 744D     		je	.L8
  43              	.LVL2:
  44              	.L2:
  45              		.loc 1 89 0 is_stmt 1
  46 0033 4889E6   		movq	%rsp, %rsi
  47 0036 4889DF   		movq	%rbx, %rdi
  48 0039 E8000000 		call	fl_stat
  48      00
  49              	.LVL3:
  50 003e 31D2     		xorl	%edx, %edx
  51 0040 85C0     		testl	%eax, %eax
  52 0042 7513     		jne	.L3
  53 0044 8B442418 		movl	24(%rsp), %eax
  54 0048 31D2     		xorl	%edx, %edx
  55 004a 2500F000 		andl	$61440, %eax
  55      00
  56 004f 3D004000 		cmpl	$16384, %eax
  56      00
  57 0054 0F94C2   		sete	%dl
  58              	.L3:
  59              		.loc 1 90 0 discriminator 6
  60 0057 488B8C24 		movq	2200(%rsp), %rcx
  60      98080000 
  61 005f 6448330C 		xorq	%fs:40, %rcx
  61      25280000 
  61      00
  62 0068 89D0     		movl	%edx, %eax
  63 006a 7544     		jne	.L9
  64              		.loc 1 90 0 is_stmt 0
  65 006c 4881C4A8 		addq	$2216, %rsp
  65      080000
  66              		.cfi_remember_state
  67              		.cfi_def_cfa_offset 24
  68 0073 5B       		popq	%rbx
  69              		.cfi_def_cfa_offset 16
  70              	.LVL4:
  71 0074 5D       		popq	%rbp
  72              		.cfi_def_cfa_offset 8
  73 0075 C3       		ret
  74              	.LVL5:
  75 0076 662E0F1F 		.p2align 4,,10
  75      84000000 
  75      0000
  76              		.p2align 3
  77              	.L8:
  78              		.cfi_restore_state
  79              		.loc 1 82 0 is_stmt 1
  80 0080 83E801   		subl	$1, %eax
  81              	.LVL6:
  82              	.LBB4:
  83              	.LBB5:
  84              		.file 2 "/usr/include/x86_64-linux-gnu/bits/string3.h"
   1:/usr/include/x86_64-linux-gnu/bits/string3.h **** /* Copyright (C) 2004-2016 Free Software Foundation, Inc.
   2:/usr/include/x86_64-linux-gnu/bits/string3.h ****    This file is part of the GNU C Library.
   3:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
   4:/usr/include/x86_64-linux-gnu/bits/string3.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/x86_64-linux-gnu/bits/string3.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/x86_64-linux-gnu/bits/string3.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/x86_64-linux-gnu/bits/string3.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
   9:/usr/include/x86_64-linux-gnu/bits/string3.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/x86_64-linux-gnu/bits/string3.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/x86_64-linux-gnu/bits/string3.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/x86_64-linux-gnu/bits/string3.h ****    Lesser General Public License for more details.
  13:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  14:/usr/include/x86_64-linux-gnu/bits/string3.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/x86_64-linux-gnu/bits/string3.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/x86_64-linux-gnu/bits/string3.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  18:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifndef _STRING_H
  19:/usr/include/x86_64-linux-gnu/bits/string3.h **** # error "Never use <bits/string3.h> directly; include <string.h> instead."
  20:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  21:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  22:/usr/include/x86_64-linux-gnu/bits/string3.h **** #if !__GNUC_PREREQ (5,0)
  23:/usr/include/x86_64-linux-gnu/bits/string3.h **** __warndecl (__warn_memset_zero_len,
  24:/usr/include/x86_64-linux-gnu/bits/string3.h **** 	    "memset used with constant zero length parameter; this could be due to transposed parameters")
  25:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  26:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  27:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifndef __cplusplus
  28:/usr/include/x86_64-linux-gnu/bits/string3.h **** /* XXX This is temporarily.  We should not redefine any of the symbols
  29:/usr/include/x86_64-linux-gnu/bits/string3.h ****    and instead integrate the error checking into the original
  30:/usr/include/x86_64-linux-gnu/bits/string3.h ****    definitions.  */
  31:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef memcpy
  32:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef memmove
  33:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef memset
  34:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef strcat
  35:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef strcpy
  36:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef strncat
  37:/usr/include/x86_64-linux-gnu/bits/string3.h **** # undef strncpy
  38:/usr/include/x86_64-linux-gnu/bits/string3.h **** # ifdef __USE_GNU
  39:/usr/include/x86_64-linux-gnu/bits/string3.h **** #  undef mempcpy
  40:/usr/include/x86_64-linux-gnu/bits/string3.h **** #  undef stpcpy
  41:/usr/include/x86_64-linux-gnu/bits/string3.h **** # endif
  42:/usr/include/x86_64-linux-gnu/bits/string3.h **** # ifdef __USE_MISC
  43:/usr/include/x86_64-linux-gnu/bits/string3.h **** #  undef bcopy
  44:/usr/include/x86_64-linux-gnu/bits/string3.h **** #  undef bzero
  45:/usr/include/x86_64-linux-gnu/bits/string3.h **** # endif
  46:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  47:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  48:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  49:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  50:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (memcpy (void *__restrict __dest, const void *__restrict __src,
  51:/usr/include/x86_64-linux-gnu/bits/string3.h **** 	       size_t __len))
  52:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  53:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___memcpy_chk (__dest, __src, __len, __bos0 (__dest));
  85              		.loc 2 53 0
  86 0083 488DBC24 		leaq	144(%rsp), %rdi
  86      90000000 
  87              	.LVL7:
  88 008b 4889DE   		movq	%rbx, %rsi
  89 008e 4863E8   		movslq	%eax, %rbp
  90              	.LVL8:
  91 0091 B9000800 		movl	$2048, %ecx
  91      00
  92              	.LBE5:
  93              	.LBE4:
  94              		.loc 1 85 0
  95 0096 488D9C24 		leaq	144(%rsp), %rbx
  95      90000000 
  96              	.LVL9:
  97              	.LBB7:
  98              	.LBB6:
  99              		.loc 2 53 0
 100 009e 4889EA   		movq	%rbp, %rdx
 101 00a1 E8000000 		call	__memcpy_chk
 101      00
 102              	.LVL10:
 103              	.LBE6:
 104              	.LBE7:
 105              		.loc 1 84 0
 106 00a6 C6842C90 		movb	$0, 144(%rsp,%rbp)
 106      00000000 
 107              	.LVL11:
 108 00ae EB83     		jmp	.L2
 109              	.LVL12:
 110              	.L9:
 111              		.loc 1 90 0
 112 00b0 E8000000 		call	__stack_chk_fail
 112      00
 113              	.LVL13:
 114              		.cfi_endproc
 115              	.LFE101:
 117              		.section	.text.unlikely._Z17fl_filename_isdirPKc
 118              	.LCOLDE0:
 119              		.section	.text._Z17fl_filename_isdirPKc
 120              	.LHOTE0:
 121              		.section	.text.unlikely._Z24_fl_filename_isdir_quickPKc,"ax",@progbits
 122              	.LCOLDB1:
 123              		.section	.text._Z24_fl_filename_isdir_quickPKc,"ax",@progbits
 124              	.LHOTB1:
 125              		.p2align 4,,15
 126              		.globl	_Z24_fl_filename_isdir_quickPKc
 128              	_Z24_fl_filename_isdir_quickPKc:
 129              	.LFB100:
 130              		.loc 1 35 0
 131              		.cfi_startproc
 132              	.LVL14:
 133 0000 53       		pushq	%rbx
 134              		.cfi_def_cfa_offset 16
 135              		.cfi_offset 3, -16
 136              		.loc 1 37 0
 137 0001 803F00   		cmpb	$0, (%rdi)
 138              		.loc 1 35 0
 139 0004 4889FB   		movq	%rdi, %rbx
 140              		.loc 1 37 0
 141 0007 740C     		je	.L11
 142              		.loc 1 37 0 is_stmt 0 discriminator 1
 143 0009 E8000000 		call	strlen
 143      00
 144              	.LVL15:
 145 000e 807C03FF 		cmpb	$47, -1(%rbx,%rax)
 145      2F
 146 0013 740B     		je	.L12
 147              	.L11:
 148              		.loc 1 38 0 is_stmt 1
 149 0015 4889DF   		movq	%rbx, %rdi
 150              		.loc 1 39 0
 151 0018 5B       		popq	%rbx
 152              		.cfi_remember_state
 153              		.cfi_def_cfa_offset 8
 154              	.LVL16:
 155              		.loc 1 38 0
 156 0019 E9000000 		jmp	_Z17fl_filename_isdirPKc
 156      00
 157              	.LVL17:
 158 001e 6690     		.p2align 4,,10
 159              		.p2align 3
 160              	.L12:
 161              		.cfi_restore_state
 162              		.loc 1 39 0
 163 0020 B8010000 		movl	$1, %eax
 163      00
 164 0025 5B       		popq	%rbx
 165              		.cfi_def_cfa_offset 8
 166              	.LVL18:
 167 0026 C3       		ret
 168              		.cfi_endproc
 169              	.LFE100:
 171              		.section	.text.unlikely._Z24_fl_filename_isdir_quickPKc
 172              	.LCOLDE1:
 173              		.section	.text._Z24_fl_filename_isdir_quickPKc
 174              	.LHOTE1:
 175              		.text
 176              	.Letext0:
 177              		.section	.text.unlikely._Z17fl_filename_isdirPKc
 178              	.Letext_cold0:
 179              		.file 3 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 180              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types.h"
 181              		.file 5 "/usr/include/libio.h"
 182              		.file 6 "/usr/include/time.h"
 183              		.file 7 "/usr/include/x86_64-linux-gnu/bits/stat.h"
 184              		.file 8 "/usr/include/stdio.h"
 185              		.file 9 "/usr/include/string.h"
 186              		.file 10 "fltk-1.3.4-1/FL/fl_utf8.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 filename_isdir.cxx
     /tmp/ccYOmq5U.s:14     .text._Z17fl_filename_isdirPKc:0000000000000000 _Z17fl_filename_isdirPKc
     /tmp/ccYOmq5U.s:128    .text._Z24_fl_filename_isdir_quickPKc:0000000000000000 _Z24_fl_filename_isdir_quickPKc
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
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
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.185.629aca749f254f2bc1fdc00bb73e17c4
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.endian.h.19.ff00c9c0f5e9f9a9719c5de76ace57b4
                           .group:0000000000000000 wm4.endian.h.41.24cced64aef71195a51d4daa8e4f4a95
                           .group:0000000000000000 wm4.byteswap.h.38.11ee5fdc0f6cc53a16c505b9233cecef
                           .group:0000000000000000 wm4.endian.h.63.97272d7c64d5db8020003b32e9289502
                           .group:0000000000000000 wm4.ctype.h.43.d895d3ca09b51f800847b104b2ad2e41
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
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
                           .group:0000000000000000 wm4.stat.h.23.034923aa253537bdc4e59720e9e8ed3d
                           .group:0000000000000000 wm4.time.h.66.fa652aa18ecf92239cee124d5533fe97
                           .group:0000000000000000 wm4.stat.h.23.71443f0579dab3228134d84ad7d61c3e
                           .group:0000000000000000 wm4.stat.h.107.43f8ebdec21eca5e13896fd19df564c8
                           .group:0000000000000000 wm4.filename.H.38.f134d9e991e871e31f751ecce3eeda5e
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.238.95ea4ce844d9fee903b0cacc7c1e4931
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.75da223233ea088d05b70fad69e90c9e
                           .group:0000000000000000 wm4.stdlib.h.54.bfbb5b0b23fee1f35dc97a46ddeb7e8b
                           .group:0000000000000000 wm4.alloca.h.19.edefa922a76c1cbaaf1e416903ba2d1c
                           .group:0000000000000000 wm4.alloca.h.29.156e12058824cc23d961c4d3b13031f6
                           .group:0000000000000000 wm4.locale.h.23.9b5006b0bf779abe978bf85cb308a947
                           .group:0000000000000000 wm4.stddef.h.401.7dfff676fcc31e4ba811117c262087d2
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.94a07dff536351e64a45c44b55b1ccfb

UNDEFINED SYMBOLS
strlen
fl_stat
__memcpy_chk
__stack_chk_fail
