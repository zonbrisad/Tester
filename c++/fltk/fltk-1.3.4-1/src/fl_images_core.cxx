   1              		.file	"fl_images_core.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.rodata.str1.1,"aMS",@progbits,1
   5              	.LC0:
   6 0000 47494638 		.string	"GIF87a"
   6      376100
   7              	.LC1:
   8 0007 47494638 		.string	"GIF89a"
   8      396100
   9              	.LC2:
  10 000e 424D00   		.string	"BM"
  11              	.LC3:
  12 0011 89504E47 		.string	"\211PNG"
  12      00
  13              	.LC4:
  14 0016 FFD8FF00 		.string	"\377\330\377"
  15              		.section	.text.unlikely._ZL15fl_check_imagesPKcPhi,"ax",@progbits
  16              	.LCOLDB5:
  17              		.section	.text._ZL15fl_check_imagesPKcPhi,"ax",@progbits
  18              	.LHOTB5:
  19              		.p2align 4,,15
  20              		.section	.text.unlikely._ZL15fl_check_imagesPKcPhi
  21              	.Ltext_cold0:
  22              		.section	.text._ZL15fl_check_imagesPKcPhi
  24              	_ZL15fl_check_imagesPKcPhi:
  25              	.LFB133:
  26              		.file 1 "fltk-1.3.4-1/src/fl_images_core.cxx"
   1:fltk-1.3.4-1/src/fl_images_core.cxx **** ...
  27              		.loc 1 66 0
  28              		.cfi_startproc
  29              	.LVL0:
  30 0000 55       		pushq	%rbp
  31              		.cfi_def_cfa_offset 16
  32              		.cfi_offset 6, -16
  33 0001 53       		pushq	%rbx
  34              		.cfi_def_cfa_offset 24
  35              		.cfi_offset 3, -24
  36 0002 4889F5   		movq	%rsi, %rbp
  37 0005 4889FB   		movq	%rdi, %rbx
  38              		.loc 1 67 0
  39 0008 BA060000 		movl	$6, %edx
  39      00
  40 000d BE000000 		movl	$.LC0, %esi
  40      00
  41              	.LVL1:
  42              		.loc 1 66 0
  43 0012 4883EC08 		subq	$8, %rsp
  44              		.cfi_def_cfa_offset 32
  45              		.loc 1 67 0
  46 0016 4889EF   		movq	%rbp, %rdi
  47              	.LVL2:
  48 0019 E8000000 		call	memcmp
  48      00
  49              	.LVL3:
  50 001e 85C0     		testl	%eax, %eax
  51 0020 0F84AA00 		je	.L2
  51      0000
  52              		.loc 1 68 0 discriminator 1
  53 0026 BA060000 		movl	$6, %edx
  53      00
  54 002b BE000000 		movl	$.LC1, %esi
  54      00
  55 0030 4889EF   		movq	%rbp, %rdi
  56 0033 E8000000 		call	memcmp
  56      00
  57              	.LVL4:
  58              		.loc 1 67 0 discriminator 1
  59 0038 85C0     		testl	%eax, %eax
  60 003a 0F849000 		je	.L2
  60      0000
  61              		.loc 1 71 0
  62 0040 BA020000 		movl	$2, %edx
  62      00
  63 0045 BE000000 		movl	$.LC2, %esi
  63      00
  64 004a 4889EF   		movq	%rbp, %rdi
  65 004d E8000000 		call	memcmp
  65      00
  66              	.LVL5:
  67 0052 85C0     		testl	%eax, %eax
  68 0054 0F84CE00 		je	.L15
  68      0000
  69              	.LVL6:
  70              	.LBB4:
  71              	.LBB5:
  72              		.loc 1 74 0
  73 005a 807D0050 		cmpb	$80, 0(%rbp)
  74 005e 0F849400 		je	.L16
  74      0000
  75              	.L6:
  76              		.loc 1 79 0
  77 0064 BA040000 		movl	$4, %edx
  77      00
  78 0069 BE000000 		movl	$.LC3, %esi
  78      00
  79 006e 4889EF   		movq	%rbp, %rdi
  80 0071 E8000000 		call	memcmp
  80      00
  81              	.LVL7:
  82 0076 85C0     		testl	%eax, %eax
  83 0078 0F84D200 		je	.L17
  83      0000
  84              		.loc 1 84 0
  85 007e BA030000 		movl	$3, %edx
  85      00
  86 0083 BE000000 		movl	$.LC4, %esi
  86      00
  87 0088 4889EF   		movq	%rbp, %rdi
  88 008b E8000000 		call	memcmp
  88      00
  89              	.LVL8:
  90 0090 85C0     		testl	%eax, %eax
  91 0092 0F85D800 		jne	.L8
  91      0000
  92              		.loc 1 86 0
  93 0098 0FB65503 		movzbl	3(%rbp), %edx
  94              		.loc 1 91 0
  95 009c 31C0     		xorl	%eax, %eax
  96              		.loc 1 86 0
  97 009e 83C240   		addl	$64, %edx
  98 00a1 80FA2F   		cmpb	$47, %dl
  99 00a4 7745     		ja	.L4
 100              		.loc 1 88 0
 101 00a6 BF400000 		movl	$64, %edi
 101      00
 102 00ab E8000000 		call	_Znwm
 102      00
 103              	.LVL9:
 104 00b0 4889DE   		movq	%rbx, %rsi
 105 00b3 4889C7   		movq	%rax, %rdi
 106 00b6 4889C5   		movq	%rax, %rbp
 107              	.LVL10:
 108 00b9 E8000000 		call	_ZN13Fl_JPEG_ImageC1EPKc
 108      00
 109              	.LVL11:
 110              	.LBE5:
 111              	.LBE4:
 112              		.loc 1 92 0
 113 00be 4883C408 		addq	$8, %rsp
 114              		.cfi_remember_state
 115              		.cfi_def_cfa_offset 24
 116              	.LBB9:
 117              	.LBB6:
 118              		.loc 1 88 0
 119 00c2 4889E8   		movq	%rbp, %rax
 120              	.LBE6:
 121              	.LBE9:
 122              		.loc 1 92 0
 123 00c5 5B       		popq	%rbx
 124              		.cfi_def_cfa_offset 16
 125              	.LVL12:
 126 00c6 5D       		popq	%rbp
 127              		.cfi_def_cfa_offset 8
 128 00c7 C3       		ret
 129              	.LVL13:
 130 00c8 0F1F8400 		.p2align 4,,10
 130      00000000 
 131              		.p2align 3
 132              	.L2:
 133              		.cfi_restore_state
 134              		.loc 1 69 0
 135 00d0 BF380000 		movl	$56, %edi
 135      00
 136 00d5 E8000000 		call	_Znwm
 136      00
 137              	.LVL14:
 138 00da 4889DE   		movq	%rbx, %rsi
 139 00dd 4889C5   		movq	%rax, %rbp
 140              	.LVL15:
 141 00e0 4889C7   		movq	%rax, %rdi
 142 00e3 E8000000 		call	_ZN12Fl_GIF_ImageC1EPKc
 142      00
 143              	.LVL16:
 144 00e8 4889E8   		movq	%rbp, %rax
 145              	.L4:
 146              		.loc 1 92 0
 147 00eb 4883C408 		addq	$8, %rsp
 148              		.cfi_remember_state
 149              		.cfi_def_cfa_offset 24
 150 00ef 5B       		popq	%rbx
 151              		.cfi_def_cfa_offset 16
 152              	.LVL17:
 153 00f0 5D       		popq	%rbp
 154              		.cfi_def_cfa_offset 8
 155 00f1 C3       		ret
 156              	.LVL18:
 157              		.p2align 4,,10
 158 00f2 660F1F44 		.p2align 3
 158      0000
 159              	.L16:
 160              		.cfi_restore_state
 161              	.LBB10:
 162              	.LBB7:
 163              		.loc 1 74 0
 164 00f8 0FB64501 		movzbl	1(%rbp), %eax
 165 00fc 83E831   		subl	$49, %eax
 166 00ff 3C06     		cmpb	$6, %al
 167 0101 0F875DFF 		ja	.L6
 167      FFFF
 168              		.loc 1 76 0
 169 0107 BF400000 		movl	$64, %edi
 169      00
 170 010c E8000000 		call	_Znwm
 170      00
 171              	.LVL19:
 172 0111 4889DE   		movq	%rbx, %rsi
 173 0114 4889C5   		movq	%rax, %rbp
 174              	.LVL20:
 175 0117 4889C7   		movq	%rax, %rdi
 176 011a E8000000 		call	_ZN12Fl_PNM_ImageC1EPKc
 176      00
 177              	.LVL21:
 178 011f 4889E8   		movq	%rbp, %rax
 179 0122 EBC7     		jmp	.L4
 180              	.LVL22:
 181              		.p2align 4,,10
 182 0124 0F1F4000 		.p2align 3
 183              	.L15:
 184              	.LBE7:
 185              	.LBE10:
 186              		.loc 1 72 0
 187 0128 BF400000 		movl	$64, %edi
 187      00
 188 012d E8000000 		call	_Znwm
 188      00
 189              	.LVL23:
 190 0132 4889DE   		movq	%rbx, %rsi
 191 0135 4889C7   		movq	%rax, %rdi
 192 0138 4889C5   		movq	%rax, %rbp
 193              	.LVL24:
 194 013b E8000000 		call	_ZN12Fl_BMP_ImageC1EPKc
 194      00
 195              	.LVL25:
 196              		.loc 1 92 0
 197 0140 4883C408 		addq	$8, %rsp
 198              		.cfi_remember_state
 199              		.cfi_def_cfa_offset 24
 200              		.loc 1 72 0
 201 0144 4889E8   		movq	%rbp, %rax
 202              		.loc 1 92 0
 203 0147 5B       		popq	%rbx
 204              		.cfi_def_cfa_offset 16
 205              	.LVL26:
 206 0148 5D       		popq	%rbp
 207              		.cfi_def_cfa_offset 8
 208 0149 C3       		ret
 209              	.LVL27:
 210 014a 660F1F44 		.p2align 4,,10
 210      0000
 211              		.p2align 3
 212              	.L17:
 213              		.cfi_restore_state
 214              	.LBB11:
 215              	.LBB8:
 216              		.loc 1 80 0
 217 0150 BF400000 		movl	$64, %edi
 217      00
 218 0155 E8000000 		call	_Znwm
 218      00
 219              	.LVL28:
 220 015a 4889DE   		movq	%rbx, %rsi
 221 015d 4889C5   		movq	%rax, %rbp
 222              	.LVL29:
 223 0160 4889C7   		movq	%rax, %rdi
 224 0163 E8000000 		call	_ZN12Fl_PNG_ImageC1EPKc
 224      00
 225              	.LVL30:
 226 0168 4889E8   		movq	%rbp, %rax
 227 016b E97BFFFF 		jmp	.L4
 227      FF
 228              	.LVL31:
 229              		.p2align 4,,10
 230              		.p2align 3
 231              	.L8:
 232              		.loc 1 91 0
 233 0170 31C0     		xorl	%eax, %eax
 234 0172 E974FFFF 		jmp	.L4
 234      FF
 235              	.LBE8:
 236              	.LBE11:
 237              		.cfi_endproc
 238              	.LFE133:
 240              		.section	.text.unlikely._ZL15fl_check_imagesPKcPhi
 241              	.LCOLDE5:
 242              		.section	.text._ZL15fl_check_imagesPKcPhi
 243              	.LHOTE5:
 244              		.section	.text.unlikely._Z18fl_register_imagesv,"ax",@progbits
 245              	.LCOLDB6:
 246              		.section	.text._Z18fl_register_imagesv,"ax",@progbits
 247              	.LHOTB6:
 248              		.p2align 4,,15
 249              		.globl	_Z18fl_register_imagesv
 251              	_Z18fl_register_imagesv:
 252              	.LFB132:
 253              		.loc 1 54 0
 254              		.cfi_startproc
 255              		.loc 1 55 0
 256 0000 BF000000 		movl	$_ZL15fl_check_imagesPKcPhi, %edi
 256      00
 257 0005 E9000000 		jmp	_ZN15Fl_Shared_Image11add_handlerEPFP8Fl_ImagePKcPhiE
 257      00
 258              	.LVL32:
 259              		.cfi_endproc
 260              	.LFE132:
 262              		.section	.text.unlikely._Z18fl_register_imagesv
 263              	.LCOLDE6:
 264              		.section	.text._Z18fl_register_imagesv
 265              	.LHOTE6:
 266              		.text
 267              	.Letext0:
 268              		.section	.text.unlikely._ZL15fl_check_imagesPKcPhi
 269              	.Letext_cold0:
 270              		.file 2 "fltk-1.3.4-1/FL/fl_types.h"
 271              		.file 3 "fltk-1.3.4-1/FL/Enumerations.H"
 272              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 273              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 274              		.file 6 "fltk-1.3.4-1/FL/Fl_Image.H"
 275              		.file 7 "/usr/include/libio.h"
 276              		.file 8 "/usr/include/stdio.h"
 277              		.file 9 "fltk-1.3.4-1/FL/Fl_Shared_Image.H"
 278              		.file 10 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_images_core.cxx
     /tmp/cc2j7w1w.s:24     .text._ZL15fl_check_imagesPKcPhi:0000000000000000 _ZL15fl_check_imagesPKcPhi
     /tmp/cc2j7w1w.s:251    .text._Z18fl_register_imagesv:0000000000000000 _Z18fl_register_imagesv
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.features.h.19.ad7942cac365cc9b820965257723f4cc
                           .group:0000000000000000 wm4.cdefs.h.19.871bad770587d04922449df94ac50bdb
                           .group:0000000000000000 wm4.wordsize.h.4.256e8fdbd37801980286acdbc40d0280
                           .group:0000000000000000 wm4.cdefs.h.432.619afd0aac7c4b439843706c1b28ddea
                           .group:0000000000000000 wm4.stubs64.h.10.918ceb5fa58268542bf143e4c1efbcf3
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.187.e3ca1cb00044c044f8b956a6107cebb6
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.93f167f49d64e2b9b99f98d1162a93bf
                           .group:0000000000000000 wm4.endian.h.19.ff00c9c0f5e9f9a9719c5de76ace57b4
                           .group:0000000000000000 wm4.endian.h.41.24cced64aef71195a51d4daa8e4f4a95
                           .group:0000000000000000 wm4.types.h.89.468e2451361e3b92f048f6cad51690ff
                           .group:0000000000000000 wm4.typesizes.h.24.40eb69a6270178f15d1bf3d7b6635a8b
                           .group:0000000000000000 wm4.byteswap.h.38.11ee5fdc0f6cc53a16c505b9233cecef
                           .group:0000000000000000 wm4.endian.h.63.97272d7c64d5db8020003b32e9289502
                           .group:0000000000000000 wm4.waitstatus.h.99.408b6270fa6eb71377201a241ef15f79
                           .group:0000000000000000 wm4.stdlib.h.54.0af3535195ddeb87f5c2e8ca307f12bc
                           .group:0000000000000000 wm4.types.h.23.f6dcbaa72f8f71361acef09804d45a5e
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
                           .group:0000000000000000 wm4.stdio.h.26.4719156f1aea2bb9662fd6c582dc9a4c
                           .group:0000000000000000 wm4.stddef.h.238.05c1f32ae5cf7bdacd6b0a8ed417a07f
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
memcmp
_Znwm
_ZN13Fl_JPEG_ImageC1EPKc
_ZN12Fl_GIF_ImageC1EPKc
_ZN12Fl_PNM_ImageC1EPKc
_ZN12Fl_BMP_ImageC1EPKc
_ZN12Fl_PNG_ImageC1EPKc
_ZN15Fl_Shared_Image11add_handlerEPFP8Fl_ImagePKcPhiE
