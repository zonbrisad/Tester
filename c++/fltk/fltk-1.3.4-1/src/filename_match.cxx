   1              		.file	"filename_match.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z17fl_filename_matchPKcS0_,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._Z17fl_filename_matchPKcS0_,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z17fl_filename_matchPKcS0_
  10              	.Ltext_cold0:
  11              		.section	.text._Z17fl_filename_matchPKcS0_
  12              		.globl	_Z17fl_filename_matchPKcS0_
  14              	_Z17fl_filename_matchPKcS0_:
  15              	.LFB23:
  16              		.file 1 "fltk-1.3.4-1/src/filename_match.cxx"
   1:fltk-1.3.4-1/src/filename_match.cxx **** ...
  17              		.loc 1 44 0
  18              		.cfi_startproc
  19              	.LVL0:
  20 0000 4155     		pushq	%r13
  21              		.cfi_def_cfa_offset 16
  22              		.cfi_offset 13, -16
  23 0002 4154     		pushq	%r12
  24              		.cfi_def_cfa_offset 24
  25              		.cfi_offset 12, -24
  26              	.LBB9:
  27              	.LBB10:
  28              	.LBB11:
  29              		.loc 1 69 0
  30 0004 41BD0100 		movl	$1, %r13d
  30      0000
  31              	.LBE11:
  32              	.LBE10:
  33              	.LBE9:
  34              		.loc 1 44 0
  35 000a 55       		pushq	%rbp
  36              		.cfi_def_cfa_offset 32
  37              		.cfi_offset 6, -32
  38 000b 53       		pushq	%rbx
  39              		.cfi_def_cfa_offset 40
  40              		.cfi_offset 3, -40
  41 000c 4989FC   		movq	%rdi, %r12
  42 000f 4883EC08 		subq	$8, %rsp
  43              		.cfi_def_cfa_offset 48
  44 0013 480FBE1E 		movsbq	(%rsi), %rbx
  45              	.LVL1:
  46              	.L2:
  47              	.LBB27:
  48              		.loc 1 48 0
  49 0017 80FB5B   		cmpb	$91, %bl
  50 001a 488D6E01 		leaq	1(%rsi), %rbp
  51              	.LVL2:
  52 001e 7450     		je	.L5
  53              	.L97:
  54 0020 0F8FF200 		jg	.L6
  54      0000
  55 0026 80FB2A   		cmpb	$42, %bl
  56 0029 0F849102 		je	.L7
  56      0000
  57 002f 0F8E8301 		jle	.L96
  57      0000
  58 0035 80FB2C   		cmpb	$44, %bl
  59 0038 0F84B201 		je	.L10
  59      0000
  60 003e 80FB3F   		cmpb	$63, %bl
  61 0041 0F853E02 		jne	.L4
  61      0000
  62              	.LBB17:
  63              		.loc 1 51 0
  64 0047 41803C24 		cmpb	$0, (%r12)
  64      00
  65 004c 498D4424 		leaq	1(%r12), %rax
  65      01
  66              	.LVL3:
  67 0051 0F84E102 		je	.L50
  67      0000
  68 0057 480FBE5E 		movsbq	1(%rsi), %rbx
  68      01
  69              	.LBE17:
  70              		.loc 1 48 0
  71 005c 4889EE   		movq	%rbp, %rsi
  72              	.LBB18:
  73              		.loc 1 51 0
  74 005f 4989C4   		movq	%rax, %r12
  75              	.LVL4:
  76              	.LBE18:
  77              		.loc 1 48 0
  78 0062 488D6E01 		leaq	1(%rsi), %rbp
  79              	.LVL5:
  80 0066 80FB5B   		cmpb	$91, %bl
  81 0069 75B5     		jne	.L97
  82              	.LVL6:
  83 006b 0F1F4400 		.p2align 4,,10
  83      00
  84              		.p2align 3
  85              	.L5:
  86              	.LBB19:
  87              	.LBB12:
  88              		.loc 1 60 0
  89 0070 410FB63C 		movzbl	(%r12), %edi
  89      24
  90 0075 4084FF   		testb	%dil, %dil
  91 0078 0F84BA02 		je	.L50
  91      0000
  92              		.loc 1 61 0
  93 007e 0FB64601 		movzbl	1(%rsi), %eax
  94 0082 3C5E     		cmpb	$94, %al
  95 0084 0F94C1   		sete	%cl
  96 0087 3C21     		cmpb	$33, %al
  97 0089 0F94C2   		sete	%dl
  98 008c 09CA     		orl	%ecx, %edx
  99 008e 84D2     		testb	%dl, %dl
 100 0090 440FB6C2 		movzbl	%dl, %r8d
 101              	.LVL7:
 102 0094 0F858602 		jne	.L98
 102      0000
 103              	.L19:
 104              	.LBE12:
 105              		.loc 1 112 0
 106 009a 31D2     		xorl	%edx, %edx
 107 009c 31C9     		xorl	%ecx, %ecx
 108 009e EB38     		jmp	.L24
 109              	.LVL8:
 110              		.p2align 4,,10
 111              		.p2align 3
 112              	.L99:
 113              	.LBB13:
 114              		.loc 1 65 0 discriminator 1
 115 00a0 3C2D     		cmpb	$45, %al
 116 00a2 753C     		jne	.L21
 117              		.loc 1 66 0
 118 00a4 0FB67501 		movzbl	1(%rbp), %esi
 119 00a8 488D4501 		leaq	1(%rbp), %rax
 120              	.LVL9:
 121 00ac 4038F7   		cmpb	%sil, %dil
 122 00af 0F8F5B02 		jg	.L51
 122      0000
 123 00b5 4038FA   		cmpb	%dil, %dl
 124 00b8 0F8F5202 		jg	.L51
 124      0000
 125 00be 89F2     		movl	%esi, %edx
 126              	.LVL10:
 127 00c0 B9010000 		movl	$1, %ecx
 127      00
 128              	.LVL11:
 129              	.L22:
 130              		.loc 1 71 0
 131 00c5 488D6801 		leaq	1(%rax), %rbp
 132              	.LVL12:
 133              		.loc 1 72 0
 134 00c9 0FB64001 		movzbl	1(%rax), %eax
 135              	.LVL13:
 136 00cd 3C5D     		cmpb	$93, %al
 137 00cf 7427     		je	.L20
 138              	.LVL14:
 139              		.p2align 4,,10
 140 00d1 0F1F8000 		.p2align 3
 140      000000
 141              	.L24:
 142              		.loc 1 64 0
 143 00d8 84C0     		testb	%al, %al
 144 00da 741C     		je	.L20
 145              		.loc 1 65 0 discriminator 1
 146 00dc 84D2     		testb	%dl, %dl
 147 00de 75C0     		jne	.L99
 148              	.L21:
 149              		.loc 1 69 0
 150 00e0 89C2     		movl	%eax, %edx
 151              	.LVL15:
 152 00e2 4889E8   		movq	%rbp, %rax
 153              		.loc 1 71 0
 154 00e5 488D6801 		leaq	1(%rax), %rbp
 155              	.LVL16:
 156              		.loc 1 72 0
 157 00e9 0FB64001 		movzbl	1(%rax), %eax
 158              	.LVL17:
 159              		.loc 1 69 0
 160 00ed 4038D7   		cmpb	%dl, %dil
 161 00f0 410F44CD 		cmove	%r13d, %ecx
 162              	.LVL18:
 163              		.loc 1 72 0
 164 00f4 3C5D     		cmpb	$93, %al
 165 00f6 75E0     		jne	.L24
 166              	.L20:
 167              		.loc 1 74 0
 168 00f8 4439C1   		cmpl	%r8d, %ecx
 169 00fb 0F843702 		je	.L50
 169      0000
 170              		.loc 1 75 0
 171 0101 4983C401 		addq	$1, %r12
 172              	.LVL19:
 173 0105 488D7501 		leaq	1(%rbp), %rsi
 174              	.LVL20:
 175 0109 480FBE5D 		movsbq	1(%rbp), %rbx
 175      01
 176              	.LBE13:
 177              		.loc 1 76 0
 178 010e E904FFFF 		jmp	.L2
 178      FF
 179              	.LVL21:
 180              		.p2align 4,,10
 181 0113 0F1F4400 		.p2align 3
 181      00
 182              	.L6:
 183              	.LBE19:
 184              		.loc 1 48 0
 185 0118 80FB7B   		cmpb	$123, %bl
 186 011b 743B     		je	.L33
 187 011d 0F8E4D01 		jle	.L100
 187      0000
 188 0123 80FB7C   		cmpb	$124, %bl
 189 0126 0F84C400 		je	.L10
 189      0000
 190 012c 80FB7D   		cmpb	$125, %bl
 191 012f 0F855001 		jne	.L4
 191      0000
 192 0135 480FBE5E 		movsbq	1(%rsi), %rbx
 192      01
 193 013a 4889EE   		movq	%rbp, %rsi
 194 013d E9D5FEFF 		jmp	.L2
 194      FF
 195              	.LVL22:
 196              		.p2align 4,,10
 197 0142 660F1F44 		.p2align 3
 197      0000
 198              	.L101:
 199              	.LBB20:
 200              		.loc 1 82 0
 201 0148 84D2     		testb	%dl, %dl
 202 014a 747E     		je	.L16
 203 014c 80FA2C   		cmpb	$44, %dl
 204 014f 753D     		jne	.L92
 205              	.L29:
 206              		.loc 1 86 0
 207 0151 85F6     		testl	%esi, %esi
 208 0153 7575     		jne	.L16
 209              		.loc 1 82 0
 210 0155 4889CD   		movq	%rcx, %rbp
 211              	.LVL23:
 212              	.L33:
 213              		.loc 1 80 0
 214 0158 4889EE   		movq	%rbp, %rsi
 215 015b 4C89E7   		movq	%r12, %rdi
 216 015e E8000000 		call	_Z17fl_filename_matchPKcS0_
 216      00
 217              	.LVL24:
 218 0163 85C0     		testl	%eax, %eax
 219 0165 0F859401 		jne	.L46
 219      0000
 220 016b 0FB65500 		movzbl	0(%rbp), %edx
 221 016f 31F6     		xorl	%esi, %esi
 222              	.L25:
 223              	.LVL25:
 224              		.loc 1 82 0
 225 0171 80FA5C   		cmpb	$92, %dl
 226 0174 488D4D01 		leaq	1(%rbp), %rcx
 227              	.LVL26:
 228 0178 7424     		je	.L27
 229              	.L102:
 230 017a 7ECC     		jle	.L101
 231 017c 80FA7C   		cmpb	$124, %dl
 232 017f 74D0     		je	.L29
 233 0181 80FA7D   		cmpb	$125, %dl
 234 0184 7452     		je	.L30
 235 0186 80FA7B   		cmpb	$123, %dl
 236 0189 7503     		jne	.L92
 237              		.loc 1 84 0
 238 018b 83C601   		addl	$1, %esi
 239              	.LVL27:
 240              	.L92:
 241 018e 0FB65501 		movzbl	1(%rbp), %edx
 242              		.loc 1 82 0
 243 0192 4889CD   		movq	%rcx, %rbp
 244              	.LVL28:
 245 0195 488D4D01 		leaq	1(%rbp), %rcx
 246              	.LVL29:
 247 0199 80FA5C   		cmpb	$92, %dl
 248 019c 75DC     		jne	.L102
 249              	.L27:
 250              		.loc 1 83 0
 251 019e 0FB65501 		movzbl	1(%rbp), %edx
 252 01a2 84D2     		testb	%dl, %dl
 253 01a4 0F848601 		je	.L47
 253      0000
 254              	.LVL30:
 255 01aa 0FB65502 		movzbl	2(%rbp), %edx
 256              		.loc 1 83 0 is_stmt 0 discriminator 1
 257 01ae 4883C502 		addq	$2, %rbp
 258              	.LVL31:
 259 01b2 EBBD     		jmp	.L25
 260              	.LVL32:
 261              		.p2align 4,,10
 262 01b4 0F1F4000 		.p2align 3
 263              	.L96:
 264              	.LBE20:
 265              		.loc 1 48 0 is_stmt 1
 266 01b8 84DB     		testb	%bl, %bl
 267 01ba 0F85C500 		jne	.L4
 267      0000
 268              	.LBB21:
 269              		.loc 1 104 0
 270 01c0 31C0     		xorl	%eax, %eax
 271 01c2 41803C24 		cmpb	$0, (%r12)
 271      00
 272 01c7 0F94C0   		sete	%al
 273              	.LVL33:
 274              	.L16:
 275              	.LBE21:
 276              	.LBE27:
 277              		.loc 1 115 0
 278 01ca 4883C408 		addq	$8, %rsp
 279              		.cfi_remember_state
 280              		.cfi_def_cfa_offset 40
 281 01ce 5B       		popq	%rbx
 282              		.cfi_def_cfa_offset 32
 283 01cf 5D       		popq	%rbp
 284              		.cfi_def_cfa_offset 24
 285 01d0 415C     		popq	%r12
 286              		.cfi_def_cfa_offset 16
 287 01d2 415D     		popq	%r13
 288              		.cfi_def_cfa_offset 8
 289 01d4 C3       		ret
 290              	.LVL34:
 291              		.p2align 4,,10
 292 01d5 0F1F00   		.p2align 3
 293              	.L30:
 294              		.cfi_restore_state
 295              	.LBB28:
 296              	.LBB22:
 297              		.loc 1 85 0
 298 01d8 85F6     		testl	%esi, %esi
 299 01da 8D7EFF   		leal	-1(%rsi), %edi
 300              	.LVL35:
 301 01dd 74EB     		je	.L16
 302 01df 0FB65501 		movzbl	1(%rbp), %edx
 303 01e3 89FE     		movl	%edi, %esi
 304              		.loc 1 82 0
 305 01e5 4889CD   		movq	%rcx, %rbp
 306 01e8 EB87     		jmp	.L25
 307              	.LVL36:
 308 01ea 660F1F44 		.p2align 4,,10
 308      0000
 309              		.p2align 3
 310              	.L10:
 311 01f0 480FBE5E 		movsbq	1(%rsi), %rbx
 311      01
 312              	.LBE22:
 313              		.loc 1 48 0
 314 01f5 31C0     		xorl	%eax, %eax
 315 01f7 4889EE   		movq	%rbp, %rsi
 316              	.LVL37:
 317 01fa 660F1F44 		.p2align 4,,10
 317      0000
 318              		.p2align 3
 319              	.L15:
 320              	.LBB23:
 321              		.loc 1 92 0 discriminator 1
 322 0200 84DB     		testb	%bl, %bl
 323 0202 0F840FFE 		je	.L2
 323      FFFF
 324              	.L104:
 325 0208 89C2     		movl	%eax, %edx
 326 020a C1EA1F   		shrl	$31, %edx
 327 020d 84D2     		testb	%dl, %dl
 328 020f 0F8502FE 		jne	.L2
 328      FFFF
 329              		.loc 1 93 0
 330 0215 80FB7B   		cmpb	$123, %bl
 331 0218 488D5601 		leaq	1(%rsi), %rdx
 332              	.LVL38:
 333 021c 744A     		je	.L35
 334 021e 80FB7D   		cmpb	$125, %bl
 335 0221 7435     		je	.L36
 336 0223 80FB5C   		cmpb	$92, %bl
 337 0226 7418     		je	.L103
 338              	.LVL39:
 339              	.L93:
 340 0228 480FBE5E 		movsbq	1(%rsi), %rbx
 340      01
 341 022d 4889D6   		movq	%rdx, %rsi
 342              	.LVL40:
 343              		.loc 1 92 0
 344 0230 84DB     		testb	%bl, %bl
 345 0232 75D4     		jne	.L104
 346              	.LVL41:
 347 0234 E9DEFDFF 		jmp	.L2
 347      FF
 348 0239 0F1F8000 		.p2align 4,,10
 348      000000
 349              		.p2align 3
 350              	.L103:
 351              		.loc 1 94 0
 352 0240 480FBE5E 		movsbq	1(%rsi), %rbx
 352      01
 353 0245 84DB     		testb	%bl, %bl
 354 0247 7467     		je	.L49
 355              	.LVL42:
 356 0249 480FBE5E 		movsbq	2(%rsi), %rbx
 356      02
 357              		.loc 1 94 0 is_stmt 0 discriminator 1
 358 024e 4883C602 		addq	$2, %rsi
 359              	.LVL43:
 360 0252 EBAC     		jmp	.L15
 361              	.LVL44:
 362              		.p2align 4,,10
 363 0254 0F1F4000 		.p2align 3
 364              	.L36:
 365 0258 480FBE5E 		movsbq	1(%rsi), %rbx
 365      01
 366              		.loc 1 96 0 is_stmt 1
 367 025d 83E801   		subl	$1, %eax
 368              	.LVL45:
 369              		.loc 1 93 0
 370 0260 4889D6   		movq	%rdx, %rsi
 371              		.loc 1 96 0
 372 0263 EB9B     		jmp	.L15
 373              		.p2align 4,,10
 374 0265 0F1F00   		.p2align 3
 375              	.L35:
 376              		.loc 1 95 0
 377 0268 83C001   		addl	$1, %eax
 378              	.LVL46:
 379 026b EBBB     		jmp	.L93
 380              	.LVL47:
 381 026d 0F1F00   		.p2align 4,,10
 382              		.p2align 3
 383              	.L100:
 384              	.LBE23:
 385              		.loc 1 48 0
 386 0270 80FB5C   		cmpb	$92, %bl
 387 0273 7510     		jne	.L4
 388              	.LBB24:
 389              		.loc 1 107 0
 390 0275 0FB64601 		movzbl	1(%rsi), %eax
 391 0279 84C0     		testb	%al, %al
 392 027b 7408     		je	.L4
 393              		.loc 1 107 0 is_stmt 0 discriminator 1
 394 027d 488D6E02 		leaq	2(%rsi), %rbp
 395              	.LVL48:
 396 0281 480FBED8 		movsbq	%al, %rbx
 397              	.L4:
 398              	.LVL49:
 399              	.LBB14:
 400              	.LBB15:
 401              		.file 2 "/usr/include/ctype.h"
   1:/usr/include/ctype.h **** /* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   2:/usr/include/ctype.h ****    This file is part of the GNU C Library.
   3:/usr/include/ctype.h **** 
   4:/usr/include/ctype.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/ctype.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/ctype.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/ctype.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/ctype.h **** 
   9:/usr/include/ctype.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/ctype.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/ctype.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/ctype.h ****    Lesser General Public License for more details.
  13:/usr/include/ctype.h **** 
  14:/usr/include/ctype.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/ctype.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/ctype.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/ctype.h **** 
  18:/usr/include/ctype.h **** /*
  19:/usr/include/ctype.h ****  *	ISO C99 Standard 7.4: Character handling	<ctype.h>
  20:/usr/include/ctype.h ****  */
  21:/usr/include/ctype.h **** 
  22:/usr/include/ctype.h **** #ifndef	_CTYPE_H
  23:/usr/include/ctype.h **** #define	_CTYPE_H	1
  24:/usr/include/ctype.h **** 
  25:/usr/include/ctype.h **** #include <features.h>
  26:/usr/include/ctype.h **** #include <bits/types.h>
  27:/usr/include/ctype.h **** 
  28:/usr/include/ctype.h **** __BEGIN_DECLS
  29:/usr/include/ctype.h **** 
  30:/usr/include/ctype.h **** #ifndef _ISbit
  31:/usr/include/ctype.h **** /* These are all the characteristics of characters.
  32:/usr/include/ctype.h ****    If there get to be more than 16 distinct characteristics,
  33:/usr/include/ctype.h ****    many things must be changed that use `unsigned short int's.
  34:/usr/include/ctype.h **** 
  35:/usr/include/ctype.h ****    The characteristics are stored always in network byte order (big
  36:/usr/include/ctype.h ****    endian).  We define the bit value interpretations here dependent on the
  37:/usr/include/ctype.h ****    machine's byte order.  */
  38:/usr/include/ctype.h **** 
  39:/usr/include/ctype.h **** # include <endian.h>
  40:/usr/include/ctype.h **** # if __BYTE_ORDER == __BIG_ENDIAN
  41:/usr/include/ctype.h **** #  define _ISbit(bit)	(1 << (bit))
  42:/usr/include/ctype.h **** # else /* __BYTE_ORDER == __LITTLE_ENDIAN */
  43:/usr/include/ctype.h **** #  define _ISbit(bit)	((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
  44:/usr/include/ctype.h **** # endif
  45:/usr/include/ctype.h **** 
  46:/usr/include/ctype.h **** enum
  47:/usr/include/ctype.h **** {
  48:/usr/include/ctype.h ****   _ISupper = _ISbit (0),	/* UPPERCASE.  */
  49:/usr/include/ctype.h ****   _ISlower = _ISbit (1),	/* lowercase.  */
  50:/usr/include/ctype.h ****   _ISalpha = _ISbit (2),	/* Alphabetic.  */
  51:/usr/include/ctype.h ****   _ISdigit = _ISbit (3),	/* Numeric.  */
  52:/usr/include/ctype.h ****   _ISxdigit = _ISbit (4),	/* Hexadecimal numeric.  */
  53:/usr/include/ctype.h ****   _ISspace = _ISbit (5),	/* Whitespace.  */
  54:/usr/include/ctype.h ****   _ISprint = _ISbit (6),	/* Printing.  */
  55:/usr/include/ctype.h ****   _ISgraph = _ISbit (7),	/* Graphical.  */
  56:/usr/include/ctype.h ****   _ISblank = _ISbit (8),	/* Blank (usually SPC and TAB).  */
  57:/usr/include/ctype.h ****   _IScntrl = _ISbit (9),	/* Control character.  */
  58:/usr/include/ctype.h ****   _ISpunct = _ISbit (10),	/* Punctuation.  */
  59:/usr/include/ctype.h ****   _ISalnum = _ISbit (11)	/* Alphanumeric.  */
  60:/usr/include/ctype.h **** };
  61:/usr/include/ctype.h **** #endif /* ! _ISbit  */
  62:/usr/include/ctype.h **** 
  63:/usr/include/ctype.h **** /* These are defined in ctype-info.c.
  64:/usr/include/ctype.h ****    The declarations here must match those in localeinfo.h.
  65:/usr/include/ctype.h **** 
  66:/usr/include/ctype.h ****    In the thread-specific locale model (see `uselocale' in <locale.h>)
  67:/usr/include/ctype.h ****    we cannot use global variables for these as was done in the past.
  68:/usr/include/ctype.h ****    Instead, the following accessor functions return the address of
  69:/usr/include/ctype.h ****    each variable, which is local to the current thread if multithreaded.
  70:/usr/include/ctype.h **** 
  71:/usr/include/ctype.h ****    These point into arrays of 384, so they can be indexed by any `unsigned
  72:/usr/include/ctype.h ****    char' value [0,255]; by EOF (-1); or by any `signed char' value
  73:/usr/include/ctype.h ****    [-128,-1).  ISO C requires that the ctype functions work for `unsigned
  74:/usr/include/ctype.h ****    char' values and for EOF; we also support negative `signed char' values
  75:/usr/include/ctype.h ****    for broken old programs.  The case conversion arrays are of `int's
  76:/usr/include/ctype.h ****    rather than `unsigned char's because tolower (EOF) must be EOF, which
  77:/usr/include/ctype.h ****    doesn't fit into an `unsigned char'.  But today more important is that
  78:/usr/include/ctype.h ****    the arrays are also used for multi-byte character sets.  */
  79:/usr/include/ctype.h **** extern const unsigned short int **__ctype_b_loc (void)
  80:/usr/include/ctype.h ****      __THROW __attribute__ ((__const__));
  81:/usr/include/ctype.h **** extern const __int32_t **__ctype_tolower_loc (void)
  82:/usr/include/ctype.h ****      __THROW __attribute__ ((__const__));
  83:/usr/include/ctype.h **** extern const __int32_t **__ctype_toupper_loc (void)
  84:/usr/include/ctype.h ****      __THROW __attribute__ ((__const__));
  85:/usr/include/ctype.h **** 
  86:/usr/include/ctype.h **** 
  87:/usr/include/ctype.h **** #ifndef __cplusplus
  88:/usr/include/ctype.h **** # define __isctype(c, type) \
  89:/usr/include/ctype.h ****   ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
  90:/usr/include/ctype.h **** #elif defined __USE_EXTERN_INLINES
  91:/usr/include/ctype.h **** # define __isctype_f(type) \
  92:/usr/include/ctype.h ****   __extern_inline int							      \
  93:/usr/include/ctype.h ****   is##type (int __c) __THROW						      \
  94:/usr/include/ctype.h ****   {									      \
  95:/usr/include/ctype.h ****     return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _IS##type; \
  96:/usr/include/ctype.h ****   }
  97:/usr/include/ctype.h **** #endif
  98:/usr/include/ctype.h **** 
  99:/usr/include/ctype.h **** #define	__isascii(c)	(((c) & ~0x7f) == 0)	/* If C is a 7 bit value.  */
 100:/usr/include/ctype.h **** #define	__toascii(c)	((c) & 0x7f)		/* Mask off high bits.  */
 101:/usr/include/ctype.h **** 
 102:/usr/include/ctype.h **** #define	__exctype(name)	extern int name (int) __THROW
 103:/usr/include/ctype.h **** 
 104:/usr/include/ctype.h **** __BEGIN_NAMESPACE_STD
 105:/usr/include/ctype.h **** 
 106:/usr/include/ctype.h **** /* The following names are all functions:
 107:/usr/include/ctype.h ****      int isCHARACTERISTIC(int c);
 108:/usr/include/ctype.h ****    which return nonzero iff C has CHARACTERISTIC.
 109:/usr/include/ctype.h ****    For the meaning of the characteristic names, see the `enum' above.  */
 110:/usr/include/ctype.h **** __exctype (isalnum);
 111:/usr/include/ctype.h **** __exctype (isalpha);
 112:/usr/include/ctype.h **** __exctype (iscntrl);
 113:/usr/include/ctype.h **** __exctype (isdigit);
 114:/usr/include/ctype.h **** __exctype (islower);
 115:/usr/include/ctype.h **** __exctype (isgraph);
 116:/usr/include/ctype.h **** __exctype (isprint);
 117:/usr/include/ctype.h **** __exctype (ispunct);
 118:/usr/include/ctype.h **** __exctype (isspace);
 119:/usr/include/ctype.h **** __exctype (isupper);
 120:/usr/include/ctype.h **** __exctype (isxdigit);
 121:/usr/include/ctype.h **** 
 122:/usr/include/ctype.h **** 
 123:/usr/include/ctype.h **** /* Return the lowercase version of C.  */
 124:/usr/include/ctype.h **** extern int tolower (int __c) __THROW;
 125:/usr/include/ctype.h **** 
 126:/usr/include/ctype.h **** /* Return the uppercase version of C.  */
 127:/usr/include/ctype.h **** extern int toupper (int __c) __THROW;
 128:/usr/include/ctype.h **** 
 129:/usr/include/ctype.h **** __END_NAMESPACE_STD
 130:/usr/include/ctype.h **** 
 131:/usr/include/ctype.h **** 
 132:/usr/include/ctype.h **** /* ISO C99 introduced one new function.  */
 133:/usr/include/ctype.h **** #ifdef	__USE_ISOC99
 134:/usr/include/ctype.h **** __BEGIN_NAMESPACE_C99
 135:/usr/include/ctype.h **** 
 136:/usr/include/ctype.h **** __exctype (isblank);
 137:/usr/include/ctype.h **** 
 138:/usr/include/ctype.h **** __END_NAMESPACE_C99
 139:/usr/include/ctype.h **** #endif
 140:/usr/include/ctype.h **** 
 141:/usr/include/ctype.h **** #ifdef __USE_GNU
 142:/usr/include/ctype.h **** /* Test C for a set of character classes according to MASK.  */
 143:/usr/include/ctype.h **** extern int isctype (int __c, int __mask) __THROW;
 144:/usr/include/ctype.h **** #endif
 145:/usr/include/ctype.h **** 
 146:/usr/include/ctype.h **** #if defined __USE_MISC || defined __USE_XOPEN
 147:/usr/include/ctype.h **** 
 148:/usr/include/ctype.h **** /* Return nonzero iff C is in the ASCII set
 149:/usr/include/ctype.h ****    (i.e., is no more than 7 bits wide).  */
 150:/usr/include/ctype.h **** extern int isascii (int __c) __THROW;
 151:/usr/include/ctype.h **** 
 152:/usr/include/ctype.h **** /* Return the part of C that is in the ASCII set
 153:/usr/include/ctype.h ****    (i.e., the low-order 7 bits of C).  */
 154:/usr/include/ctype.h **** extern int toascii (int __c) __THROW;
 155:/usr/include/ctype.h **** 
 156:/usr/include/ctype.h **** /* These are the same as `toupper' and `tolower' except that they do not
 157:/usr/include/ctype.h ****    check the argument for being in the range of a `char'.  */
 158:/usr/include/ctype.h **** __exctype (_toupper);
 159:/usr/include/ctype.h **** __exctype (_tolower);
 160:/usr/include/ctype.h **** #endif /* Use X/Open or use misc.  */
 161:/usr/include/ctype.h **** 
 162:/usr/include/ctype.h **** /* This code is needed for the optimized mapping functions.  */
 163:/usr/include/ctype.h **** #define __tobody(c, f, a, args) \
 164:/usr/include/ctype.h ****   (__extension__							      \
 165:/usr/include/ctype.h ****    ({ int __res;							      \
 166:/usr/include/ctype.h ****       if (sizeof (c) > 1)						      \
 167:/usr/include/ctype.h **** 	{								      \
 168:/usr/include/ctype.h **** 	  if (__builtin_constant_p (c))					      \
 169:/usr/include/ctype.h **** 	    {								      \
 170:/usr/include/ctype.h **** 	      int __c = (c);						      \
 171:/usr/include/ctype.h **** 	      __res = __c < -128 || __c > 255 ? __c : (a)[__c];		      \
 172:/usr/include/ctype.h **** 	    }								      \
 173:/usr/include/ctype.h **** 	  else								      \
 174:/usr/include/ctype.h **** 	    __res = f args;						      \
 175:/usr/include/ctype.h **** 	}								      \
 176:/usr/include/ctype.h ****       else								      \
 177:/usr/include/ctype.h **** 	__res = (a)[(int) (c)];						      \
 178:/usr/include/ctype.h ****       __res; }))
 179:/usr/include/ctype.h **** 
 180:/usr/include/ctype.h **** #if !defined __NO_CTYPE
 181:/usr/include/ctype.h **** # ifdef __isctype_f
 182:/usr/include/ctype.h **** __isctype_f (alnum)
 183:/usr/include/ctype.h **** __isctype_f (alpha)
 184:/usr/include/ctype.h **** __isctype_f (cntrl)
 185:/usr/include/ctype.h **** __isctype_f (digit)
 186:/usr/include/ctype.h **** __isctype_f (lower)
 187:/usr/include/ctype.h **** __isctype_f (graph)
 188:/usr/include/ctype.h **** __isctype_f (print)
 189:/usr/include/ctype.h **** __isctype_f (punct)
 190:/usr/include/ctype.h **** __isctype_f (space)
 191:/usr/include/ctype.h **** __isctype_f (upper)
 192:/usr/include/ctype.h **** __isctype_f (xdigit)
 193:/usr/include/ctype.h **** #  ifdef __USE_ISOC99
 194:/usr/include/ctype.h **** __isctype_f (blank)
 195:/usr/include/ctype.h **** #  endif
 196:/usr/include/ctype.h **** # elif defined __isctype
 197:/usr/include/ctype.h **** # define isalnum(c)	__isctype((c), _ISalnum)
 198:/usr/include/ctype.h **** # define isalpha(c)	__isctype((c), _ISalpha)
 199:/usr/include/ctype.h **** # define iscntrl(c)	__isctype((c), _IScntrl)
 200:/usr/include/ctype.h **** # define isdigit(c)	__isctype((c), _ISdigit)
 201:/usr/include/ctype.h **** # define islower(c)	__isctype((c), _ISlower)
 202:/usr/include/ctype.h **** # define isgraph(c)	__isctype((c), _ISgraph)
 203:/usr/include/ctype.h **** # define isprint(c)	__isctype((c), _ISprint)
 204:/usr/include/ctype.h **** # define ispunct(c)	__isctype((c), _ISpunct)
 205:/usr/include/ctype.h **** # define isspace(c)	__isctype((c), _ISspace)
 206:/usr/include/ctype.h **** # define isupper(c)	__isctype((c), _ISupper)
 207:/usr/include/ctype.h **** # define isxdigit(c)	__isctype((c), _ISxdigit)
 208:/usr/include/ctype.h **** #  ifdef __USE_ISOC99
 209:/usr/include/ctype.h **** #   define isblank(c)	__isctype((c), _ISblank)
 210:/usr/include/ctype.h **** #  endif
 211:/usr/include/ctype.h **** # endif
 212:/usr/include/ctype.h **** 
 213:/usr/include/ctype.h **** # ifdef __USE_EXTERN_INLINES
 214:/usr/include/ctype.h **** __extern_inline int
 215:/usr/include/ctype.h **** __NTH (tolower (int __c))
 216:/usr/include/ctype.h **** {
 217:/usr/include/ctype.h ****   return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
 402              		.loc 2 217 0 is_stmt 1
 403 0285 E8000000 		call	__ctype_tolower_loc
 403      00
 404              	.LVL50:
 405 028a 490FBE14 		movsbq	(%r12), %rdx
 405      24
 406              	.LVL51:
 407 028f 488B00   		movq	(%rax), %rax
 408              	.LVL52:
 409              	.LBE15:
 410              	.LBE14:
 411              		.loc 1 110 0
 412 0292 8B0C90   		movl	(%rax,%rdx,4), %ecx
 413 0295 390C98   		cmpl	%ecx, (%rax,%rbx,4)
 414 0298 0F859A00 		jne	.L50
 414      0000
 415              		.loc 1 111 0
 416 029e 4983C401 		addq	$1, %r12
 417              	.LVL53:
 418 02a2 480FBE5D 		movsbq	0(%rbp), %rbx
 418      00
 419              		.loc 1 112 0
 420 02a7 4889EE   		movq	%rbp, %rsi
 421 02aa E968FDFF 		jmp	.L2
 421      FF
 422              	.LVL54:
 423 02af 90       		.p2align 4,,10
 424              		.p2align 3
 425              	.L49:
 426              		.loc 1 93 0
 427 02b0 4889D6   		movq	%rdx, %rsi
 428 02b3 E948FFFF 		jmp	.L15
 428      FF
 429              	.LVL55:
 430 02b8 0F1F8400 		.p2align 4,,10
 430      00000000 
 431              		.p2align 3
 432              	.L7:
 433              		.loc 1 55 0
 434 02c0 807E0100 		cmpb	$0, 1(%rsi)
 435 02c4 B8010000 		movl	$1, %eax
 435      00
 436 02c9 0F84FBFE 		je	.L16
 436      FFFF
 437              		.loc 1 56 0
 438 02cf 4889EE   		movq	%rbp, %rsi
 439 02d2 4C89E7   		movq	%r12, %rdi
 440 02d5 E8000000 		call	_Z17fl_filename_matchPKcS0_
 440      00
 441              	.LVL56:
 442 02da 85C0     		testl	%eax, %eax
 443 02dc 7521     		jne	.L46
 444 02de 6690     		.p2align 4,,10
 445              		.p2align 3
 446              	.L105:
 447              		.loc 1 56 0 is_stmt 0 discriminator 1
 448 02e0 4983C401 		addq	$1, %r12
 449              	.LVL57:
 450 02e4 41807C24 		cmpb	$0, -1(%r12)
 450      FF00
 451 02ea 0F84DAFE 		je	.L16
 451      FFFF
 452              		.loc 1 56 0
 453 02f0 4889EE   		movq	%rbp, %rsi
 454 02f3 4C89E7   		movq	%r12, %rdi
 455 02f6 E8000000 		call	_Z17fl_filename_matchPKcS0_
 455      00
 456              	.LVL58:
 457 02fb 85C0     		testl	%eax, %eax
 458 02fd 74E1     		je	.L105
 459              	.L46:
 460              	.LBE24:
 461              	.LBE28:
 462              		.loc 1 115 0 is_stmt 1
 463 02ff 4883C408 		addq	$8, %rsp
 464              		.cfi_remember_state
 465              		.cfi_def_cfa_offset 40
 466              	.LBB29:
 467              	.LBB25:
 468              		.loc 1 55 0
 469 0303 B8010000 		movl	$1, %eax
 469      00
 470              	.LBE25:
 471              	.LBE29:
 472              		.loc 1 115 0
 473 0308 5B       		popq	%rbx
 474              		.cfi_def_cfa_offset 32
 475 0309 5D       		popq	%rbp
 476              		.cfi_def_cfa_offset 24
 477              	.LVL59:
 478 030a 415C     		popq	%r12
 479              		.cfi_def_cfa_offset 16
 480              	.LVL60:
 481 030c 415D     		popq	%r13
 482              		.cfi_def_cfa_offset 8
 483 030e C3       		ret
 484              	.LVL61:
 485 030f 90       		.p2align 4,,10
 486              		.p2align 3
 487              	.L51:
 488              		.cfi_restore_state
 489              	.LBB30:
 490              	.LBB26:
 491              	.LBB16:
 492              		.loc 1 66 0
 493 0310 89F2     		movl	%esi, %edx
 494              	.LVL62:
 495 0312 E9AEFDFF 		jmp	.L22
 495      FF
 496              	.LVL63:
 497 0317 660F1F84 		.p2align 4,,10
 497      00000000 
 497      00
 498              		.p2align 3
 499              	.L98:
 500              		.loc 1 61 0 discriminator 1
 501 0320 488D6E02 		leaq	2(%rsi), %rbp
 502              	.LVL64:
 503 0324 0FB64602 		movzbl	2(%rsi), %eax
 504 0328 E96DFDFF 		jmp	.L19
 504      FF
 505              	.LVL65:
 506 032d 0F1F00   		.p2align 4,,10
 507              		.p2align 3
 508              	.L47:
 509              	.LBE16:
 510              		.loc 1 82 0
 511 0330 4889CD   		movq	%rcx, %rbp
 512 0333 E939FEFF 		jmp	.L25
 512      FF
 513              	.LVL66:
 514              	.L50:
 515              		.loc 1 51 0
 516 0338 31C0     		xorl	%eax, %eax
 517 033a E98BFEFF 		jmp	.L16
 517      FF
 518              	.LBE26:
 519              	.LBE30:
 520              		.cfi_endproc
 521              	.LFE23:
 523              		.section	.text.unlikely._Z17fl_filename_matchPKcS0_
 524              	.LCOLDE0:
 525              		.section	.text._Z17fl_filename_matchPKcS0_
 526              	.LHOTE0:
 527              		.text
 528              	.Letext0:
 529              		.section	.text.unlikely._Z17fl_filename_matchPKcS0_
 530              	.Letext_cold0:
DEFINED SYMBOLS
                            *ABS*:0000000000000000 filename_match.cxx
     /tmp/cclDmTi6.s:14     .text._Z17fl_filename_matchPKcS0_:0000000000000000 _Z17fl_filename_matchPKcS0_
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
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
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
                           .group:0000000000000000 wm4.stddef.h.238.847b6907dabda77be90a9ab7ad789e2e
                           .group:0000000000000000 wm4.ctype.h.23.6cde68a57d02340e508bc0b21e49d4af
                           .group:0000000000000000 wm4.ctype.h.261.dddd5f8bb802291f4aa1d617d74aee81

UNDEFINED SYMBOLS
__ctype_tolower_loc
