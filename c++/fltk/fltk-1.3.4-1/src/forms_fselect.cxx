   1              		.file	"forms_fselect.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z21fl_show_file_selectorPKcS0_S0_S0_,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._Z21fl_show_file_selectorPKcS0_S0_S0_,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z21fl_show_file_selectorPKcS0_S0_S0_
  10              	.Ltext_cold0:
  11              		.section	.text._Z21fl_show_file_selectorPKcS0_S0_S0_
  12              		.globl	_Z21fl_show_file_selectorPKcS0_S0_S0_
  14              	_Z21fl_show_file_selectorPKcS0_S0_S0_:
  15              	.LFB983:
  16              		.file 1 "fltk-1.3.4-1/src/forms_fselect.cxx"
   1:fltk-1.3.4-1/src/forms_fselect.cxx **** ...
  17              		.loc 1 29 0
  18              		.cfi_startproc
  19              	.LVL0:
  20 0000 55       		pushq	%rbp
  21              		.cfi_def_cfa_offset 16
  22              		.cfi_offset 6, -16
  23 0001 53       		pushq	%rbx
  24              		.cfi_def_cfa_offset 24
  25              		.cfi_offset 3, -24
  26 0002 4889D5   		movq	%rdx, %rbp
  27 0005 4889FB   		movq	%rdi, %rbx
  28 0008 4883EC18 		subq	$24, %rsp
  29              		.cfi_def_cfa_offset 48
  30              		.loc 1 30 0
  31 000c 4885F6   		testq	%rsi, %rsi
  32 000f 7409     		je	.L2
  33              		.loc 1 30 0 is_stmt 0 discriminator 1
  34 0011 803E00   		cmpb	$0, (%rsi)
  35 0014 0F852601 		jne	.L24
  35      0000
  36              	.LVL1:
  37              	.L2:
  38              		.loc 1 31 0 is_stmt 1
  39 001a 4885ED   		testq	%rbp, %rbp
  40 001d 740A     		je	.L3
  41              		.loc 1 31 0 is_stmt 0 discriminator 1
  42 001f 807D0000 		cmpb	$0, 0(%rbp)
  43 0023 0F850701 		jne	.L25
  43      0000
  44              	.L3:
  45              		.loc 1 32 0 is_stmt 1
  46 0029 4885C9   		testq	%rcx, %rcx
  47 002c 7409     		je	.L4
  48              		.loc 1 32 0 is_stmt 0 discriminator 1
  49 002e 803900   		cmpb	$0, (%rcx)
  50 0031 0F852901 		jne	.L26
  50      0000
  51              	.L4:
  52              		.loc 1 33 0 is_stmt 1
  53 0037 BF000000 		movl	$_ZL12fl_directory, %edi
  53      00
  54              	.L5:
  55 003c 8B17     		movl	(%rdi), %edx
  56 003e 4883C704 		addq	$4, %rdi
  57 0042 8D82FFFE 		leal	-16843009(%rdx), %eax
  57      FEFE
  58 0048 F7D2     		notl	%edx
  59 004a 21D0     		andl	%edx, %eax
  60 004c 25808080 		andl	$-2139062144, %eax
  60      80
  61 0051 74E9     		je	.L5
  62 0053 89C2     		movl	%eax, %edx
  63 0055 C1EA10   		shrl	$16, %edx
  64 0058 A9808000 		testl	$32896, %eax
  64      00
  65 005d 0F44C2   		cmove	%edx, %eax
  66 0060 488D5702 		leaq	2(%rdi), %rdx
  67 0064 89C1     		movl	%eax, %ecx
  68 0066 480F44FA 		cmove	%rdx, %rdi
  69 006a 00C1     		addb	%al, %cl
  70 006c 4881DF00 		sbbq	$_ZL12fl_directory+3, %rdi
  70      000000
  71 0073 4881C700 		addq	$_ZL12fl_directory, %rdi
  71      000000
  72              	.LVL2:
  73              		.loc 1 34 0
  74 007a 4881FF00 		cmpq	$_ZL12fl_directory, %rdi
  74      000000
  75 0081 0F878900 		ja	.L27
  75      0000
  76              	.L7:
  77              		.loc 1 39 0
  78 0087 BA000000 		movl	$_ZL12fl_directory+2048, %edx
  78      00
  79 008c BE000000 		movl	$_ZL11fl_filename, %esi
  79      00
  80 0091 4829FA   		subq	%rdi, %rdx
  81 0094 E8000000 		call	fl_strlcpy
  81      00
  82              	.LVL3:
  83              		.loc 1 40 0
  84 0099 488B3500 		movq	_ZL10fl_pattern(%rip), %rsi
  84      000000
  85 00a0 31C9     		xorl	%ecx, %ecx
  86 00a2 4889DF   		movq	%rbx, %rdi
  87 00a5 BA000000 		movl	$_ZL12fl_directory, %edx
  87      00
  88 00aa E8000000 		call	_Z15fl_file_chooserPKcS0_S0_i
  88      00
  89              	.LVL4:
  90              		.loc 1 41 0
  91 00af 4885C0   		testq	%rax, %rax
  92              		.loc 1 40 0
  93 00b2 4889C3   		movq	%rax, %rbx
  94              	.LVL5:
  95              		.loc 1 41 0
  96 00b5 0F84C500 		je	.L10
  96      0000
  97              		.loc 1 42 0
  98 00bb BA000800 		movl	$2048, %edx
  98      00
  99 00c0 4889C6   		movq	%rax, %rsi
 100 00c3 BF000000 		movl	$_ZL12fl_directory, %edi
 100      00
 101 00c8 E8000000 		call	fl_strlcpy
 101      00
 102              	.LVL6:
 103              		.loc 1 43 0
 104 00cd BF000000 		movl	$_ZL12fl_directory, %edi
 104      00
 105 00d2 E8000000 		call	_Z16fl_filename_namePKc
 105      00
 106              	.LVL7:
 107              		.loc 1 44 0
 108 00d7 BA000800 		movl	$2048, %edx
 108      00
 109 00dc 4889C6   		movq	%rax, %rsi
 110 00df BF000000 		movl	$_ZL11fl_filename, %edi
 110      00
 111              		.loc 1 43 0
 112 00e4 4889C5   		movq	%rax, %rbp
 113              	.LVL8:
 114              		.loc 1 44 0
 115 00e7 E8000000 		call	fl_strlcpy
 115      00
 116              	.LVL9:
 117              		.loc 1 45 0
 118 00ec B8000000 		movl	$_ZL12fl_directory+1, %eax
 118      00
 119 00f1 4839E8   		cmpq	%rbp, %rax
 120              		.loc 1 47 0
 121 00f4 4889D8   		movq	%rbx, %rax
 122              		.loc 1 45 0
 123 00f7 4883DD00 		sbbq	$0, %rbp
 124              	.LVL10:
 125              		.loc 1 46 0
 126 00fb C6450000 		movb	$0, 0(%rbp)
 127              	.LVL11:
 128              	.L8:
 129              		.loc 1 48 0
 130 00ff 4883C418 		addq	$24, %rsp
 131              		.cfi_remember_state
 132              		.cfi_def_cfa_offset 24
 133 0103 5B       		popq	%rbx
 134              		.cfi_def_cfa_offset 16
 135              	.LVL12:
 136 0104 5D       		popq	%rbp
 137              		.cfi_def_cfa_offset 8
 138 0105 C3       		ret
 139              	.LVL13:
 140 0106 662E0F1F 		.p2align 4,,10
 140      84000000 
 140      0000
 141              		.p2align 3
 142              	.L27:
 143              		.cfi_restore_state
 144              		.loc 1 34 0 discriminator 1
 145 0110 807FFF2F 		cmpb	$47, -1(%rdi)
 146 0114 0F846DFF 		je	.L7
 146      FFFF
 147              	.LVL14:
 148              		.loc 1 38 0
 149 011a C6072F   		movb	$47, (%rdi)
 150 011d 4883C701 		addq	$1, %rdi
 151              	.LVL15:
 152 0121 E961FFFF 		jmp	.L7
 152      FF
 153              	.LVL16:
 154 0126 662E0F1F 		.p2align 4,,10
 154      84000000 
 154      0000
 155              		.p2align 3
 156              	.L25:
 157              		.loc 1 31 0 discriminator 2
 158 0130 48892D00 		movq	%rbp, _ZL10fl_pattern(%rip)
 158      000000
 159 0137 E9EDFEFF 		jmp	.L3
 159      FF
 160              	.LVL17:
 161 013c 0F1F4000 		.p2align 4,,10
 162              		.p2align 3
 163              	.L24:
 164              		.loc 1 30 0 discriminator 2
 165 0140 BA000800 		movl	$2048, %edx
 165      00
 166              	.LVL18:
 167 0145 BF000000 		movl	$_ZL12fl_directory, %edi
 167      00
 168 014a 48894C24 		movq	%rcx, 8(%rsp)
 168      08
 169 014f E8000000 		call	fl_strlcpy
 169      00
 170              	.LVL19:
 171 0154 488B4C24 		movq	8(%rsp), %rcx
 171      08
 172 0159 E9BCFEFF 		jmp	.L2
 172      FF
 173              	.LVL20:
 174 015e 6690     		.p2align 4,,10
 175              		.p2align 3
 176              	.L26:
 177              		.loc 1 32 0 discriminator 2
 178 0160 BA000800 		movl	$2048, %edx
 178      00
 179 0165 4889CE   		movq	%rcx, %rsi
 180 0168 BF000000 		movl	$_ZL11fl_filename, %edi
 180      00
 181 016d E8000000 		call	fl_strlcpy
 181      00
 182              	.LVL21:
 183 0172 E9C0FEFF 		jmp	.L4
 183      FF
 184              	.LVL22:
 185 0177 660F1F84 		.p2align 4,,10
 185      00000000 
 185      00
 186              		.p2align 3
 187              	.L10:
 188              		.loc 1 41 0
 189 0180 31C0     		xorl	%eax, %eax
 190              	.LVL23:
 191 0182 E978FFFF 		jmp	.L8
 191      FF
 192              		.cfi_endproc
 193              	.LFE983:
 195              		.section	.text.unlikely._Z21fl_show_file_selectorPKcS0_S0_S0_
 196              	.LCOLDE0:
 197              		.section	.text._Z21fl_show_file_selectorPKcS0_S0_S0_
 198              	.LHOTE0:
 199              		.section	.text.unlikely._Z16fl_get_directoryv,"ax",@progbits
 200              	.LCOLDB1:
 201              		.section	.text._Z16fl_get_directoryv,"ax",@progbits
 202              	.LHOTB1:
 203              		.p2align 4,,15
 204              		.globl	_Z16fl_get_directoryv
 206              	_Z16fl_get_directoryv:
 207              	.LFB984:
 208              		.loc 1 50 0
 209              		.cfi_startproc
 210              		.loc 1 50 0
 211 0000 B8000000 		movl	$_ZL12fl_directory, %eax
 211      00
 212 0005 C3       		ret
 213              		.cfi_endproc
 214              	.LFE984:
 216              		.section	.text.unlikely._Z16fl_get_directoryv
 217              	.LCOLDE1:
 218              		.section	.text._Z16fl_get_directoryv
 219              	.LHOTE1:
 220              		.section	.text.unlikely._Z14fl_get_patternv,"ax",@progbits
 221              	.LCOLDB2:
 222              		.section	.text._Z14fl_get_patternv,"ax",@progbits
 223              	.LHOTB2:
 224              		.p2align 4,,15
 225              		.globl	_Z14fl_get_patternv
 227              	_Z14fl_get_patternv:
 228              	.LFB985:
 229              		.loc 1 52 0
 230              		.cfi_startproc
 231              		.loc 1 52 0
 232 0000 488B0500 		movq	_ZL10fl_pattern(%rip), %rax
 232      000000
 233 0007 C3       		ret
 234              		.cfi_endproc
 235              	.LFE985:
 237              		.section	.text.unlikely._Z14fl_get_patternv
 238              	.LCOLDE2:
 239              		.section	.text._Z14fl_get_patternv
 240              	.LHOTE2:
 241              		.section	.text.unlikely._Z15fl_get_filenamev,"ax",@progbits
 242              	.LCOLDB3:
 243              		.section	.text._Z15fl_get_filenamev,"ax",@progbits
 244              	.LHOTB3:
 245              		.p2align 4,,15
 246              		.globl	_Z15fl_get_filenamev
 248              	_Z15fl_get_filenamev:
 249              	.LFB986:
 250              		.loc 1 54 0
 251              		.cfi_startproc
 252              		.loc 1 54 0
 253 0000 B8000000 		movl	$_ZL11fl_filename, %eax
 253      00
 254 0005 C3       		ret
 255              		.cfi_endproc
 256              	.LFE986:
 258              		.section	.text.unlikely._Z15fl_get_filenamev
 259              	.LCOLDE3:
 260              		.section	.text._Z15fl_get_filenamev
 261              	.LHOTE3:
 262              		.section	.bss._ZL11fl_filename,"aw",@nobits
 263              		.align 32
 266              	_ZL11fl_filename:
 267 0000 00000000 		.zero	2048
 267      00000000 
 267      00000000 
 267      00000000 
 267      00000000 
 268              		.section	.bss._ZL10fl_pattern,"aw",@nobits
 269              		.align 8
 272              	_ZL10fl_pattern:
 273 0000 00000000 		.zero	8
 273      00000000 
 274              		.section	.bss._ZL12fl_directory,"aw",@nobits
 275              		.align 32
 278              	_ZL12fl_directory:
 279 0000 00000000 		.zero	2048
 279      00000000 
 279      00000000 
 279      00000000 
 279      00000000 
 280              		.text
 281              	.Letext0:
 282              		.section	.text.unlikely._Z21fl_show_file_selectorPKcS0_S0_S0_
 283              	.Letext_cold0:
 284              		.file 2 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 285              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
 286              		.file 4 "/usr/include/libio.h"
 287              		.file 5 "fltk-1.3.4-1/FL/Enumerations.H"
 288              		.file 6 "fltk-1.3.4-1/FL/Fl_Device.H"
 289              		.file 7 "/usr/include/stdio.h"
 290              		.file 8 "fltk-1.3.4-1/FL/forms.H"
 291              		.file 9 "fltk-1.3.4-1/FL/fl_ask.H"
 292              		.file 10 "fltk-1.3.4-1/FL/Fl_File_Chooser.H"
 293              		.file 11 "fltk-1.3.4-1/FL/filename.H"
 294              		.file 12 "fltk-1.3.4-1/src/flstring.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 forms_fselect.cxx
     /tmp/ccbU3JbP.s:14     .text._Z21fl_show_file_selectorPKcS0_S0_S0_:0000000000000000 _Z21fl_show_file_selectorPKcS0_S0_S0_
     /tmp/ccbU3JbP.s:278    .bss._ZL12fl_directory:0000000000000000 _ZL12fl_directory
     /tmp/ccbU3JbP.s:266    .bss._ZL11fl_filename:0000000000000000 _ZL11fl_filename
     /tmp/ccbU3JbP.s:272    .bss._ZL10fl_pattern:0000000000000000 _ZL10fl_pattern
     /tmp/ccbU3JbP.s:206    .text._Z16fl_get_directoryv:0000000000000000 _Z16fl_get_directoryv
     /tmp/ccbU3JbP.s:227    .text._Z14fl_get_patternv:0000000000000000 _Z14fl_get_patternv
     /tmp/ccbU3JbP.s:248    .text._Z15fl_get_filenamev:0000000000000000 _Z15fl_get_filenamev
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
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.00137ad0275e3bca492dca30adbe2e71
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.forms.H.37.0a5619bad1e20004715f0c979570dbcd
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
                           .group:0000000000000000 wm4.Fl_Slider.H.30.63744dea3b9f91e5e3b5b1297ae0bb9d
                           .group:0000000000000000 wm4.Fl_Browser_.H.33.3c969d598ffa0d0ae61e0a4412aa05a2
                           .group:0000000000000000 wm4.Fl_Button.H.23.dd2f7f39568a498db4235a51d94ff020
                           .group:0000000000000000 wm4.forms.H.468.7a3dd830d9cb260ea061bc3ecec7e7da
                           .group:0000000000000000 wm4.Fl_Chart.H.23.9948d0d826d8cb847bf9457a36afa706
                           .group:0000000000000000 wm4.forms.H.531.b06f2fb641ccb4cd22ee7a225d76d6e9
                           .group:0000000000000000 wm4.Fl_Clock.H.23.e3ae7949425565459dc3d3eb183e7ab0
                           .group:0000000000000000 wm4.Fl_Counter.H.25.d4b70c719890b359e5ab06759378848b
                           .group:0000000000000000 wm4.forms.H.590.9d97420594b13e6f9287bf768894adf1
                           .group:0000000000000000 wm4.Fl_Dial.H.23.d297b2159ab1037c95f5df5cb75a8b9d
                           .group:0000000000000000 wm4.forms.H.595.e84e14fd439187ef3af07d5b70a030cb
                           .group:0000000000000000 wm4.Fl_Free.H.23.194542b225ee5c22170aa38665aa0e7d
                           .group:0000000000000000 wm4.fl_ask.H.24.be48b4476a0524cdb7b19216c6f73157
                           .group:0000000000000000 wm4.filename.H.30.99b1a2d49dfb41118316d590634dc617
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.Fl_File_Icon.H.27.747e79318ac133fc614d668b272e17dc
                           .group:0000000000000000 wm4.Fl_Input_.H.23.0358bf58b9391621e5f90e01bc1d1bea
                           .group:0000000000000000 wm4.forms.H.708.3f68e9fcfd40bf4feb08de24771fcf67
                           .group:0000000000000000 wm4.forms.H.742.39179266b19fd15149051ae8b3d5b94f
                           .group:0000000000000000 wm4.Fl_Timer.H.23.55722937de57a09650f9498be1cefd2c
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
fl_strlcpy
_Z15fl_file_chooserPKcS0_S0_i
_Z16fl_filename_namePKc
