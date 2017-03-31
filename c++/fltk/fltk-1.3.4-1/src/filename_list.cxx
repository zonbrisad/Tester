   1              		.file	"filename_list.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely.fl_alphasort,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text.fl_alphasort,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely.fl_alphasort
  10              	.Ltext_cold0:
  11              		.section	.text.fl_alphasort
  12              		.globl	fl_alphasort
  14              	fl_alphasort:
  15              	.LFB100:
  16              		.file 1 "fltk-1.3.4-1/src/filename_list.cxx"
   1:fltk-1.3.4-1/src/filename_list.cxx **** ...
  17              		.loc 1 37 0
  18              		.cfi_startproc
  19              	.LVL0:
  20              		.loc 1 38 0
  21 0000 488B3F   		movq	(%rdi), %rdi
  22              	.LVL1:
  23 0003 488B36   		movq	(%rsi), %rsi
  24              	.LVL2:
  25 0006 4883C713 		addq	$19, %rdi
  26 000a 4883C613 		addq	$19, %rsi
  27 000e E9000000 		jmp	strcmp
  27      00
  28              	.LVL3:
  29              		.cfi_endproc
  30              	.LFE100:
  32              		.section	.text.unlikely.fl_alphasort
  33              	.LCOLDE0:
  34              		.section	.text.fl_alphasort
  35              	.LHOTE0:
  36              		.section	.text.unlikely.fl_casealphasort,"ax",@progbits
  37              	.LCOLDB1:
  38              		.section	.text.fl_casealphasort,"ax",@progbits
  39              	.LHOTB1:
  40              		.p2align 4,,15
  41              		.globl	fl_casealphasort
  43              	fl_casealphasort:
  44              	.LFB101:
  45              		.loc 1 41 0
  46              		.cfi_startproc
  47              	.LVL4:
  48              		.loc 1 42 0
  49 0000 488B36   		movq	(%rsi), %rsi
  50              	.LVL5:
  51 0003 488B3F   		movq	(%rdi), %rdi
  52              	.LVL6:
  53 0006 4883C613 		addq	$19, %rsi
  54 000a 4883C713 		addq	$19, %rdi
  55 000e E9000000 		jmp	strcasecmp
  55      00
  56              	.LVL7:
  57              		.cfi_endproc
  58              	.LFE101:
  60              		.section	.text.unlikely.fl_casealphasort
  61              	.LCOLDE1:
  62              		.section	.text.fl_casealphasort
  63              	.LHOTE1:
  64              		.section	.text.unlikely._Z16fl_filename_listPKcPPP6direntPFiS3_S3_E,"ax",@progbits
  65              	.LCOLDB2:
  66              		.section	.text._Z16fl_filename_listPKcPPP6direntPFiS3_S3_E,"ax",@progbits
  67              	.LHOTB2:
  68              		.p2align 4,,15
  69              		.globl	_Z16fl_filename_listPKcPPP6direntPFiS3_S3_E
  71              	_Z16fl_filename_listPKcPPP6direntPFiS3_S3_E:
  72              	.LFB102:
  73              		.loc 1 76 0
  74              		.cfi_startproc
  75              	.LVL8:
  76 0000 4157     		pushq	%r15
  77              		.cfi_def_cfa_offset 16
  78              		.cfi_offset 15, -16
  79 0002 4156     		pushq	%r14
  80              		.cfi_def_cfa_offset 24
  81              		.cfi_offset 14, -24
  82 0004 4989F6   		movq	%rsi, %r14
  83 0007 4155     		pushq	%r13
  84              		.cfi_def_cfa_offset 32
  85              		.cfi_offset 13, -32
  86 0009 4154     		pushq	%r12
  87              		.cfi_def_cfa_offset 40
  88              		.cfi_offset 12, -40
  89 000b 4989D5   		movq	%rdx, %r13
  90 000e 55       		pushq	%rbp
  91              		.cfi_def_cfa_offset 48
  92              		.cfi_offset 6, -48
  93 000f 53       		pushq	%rbx
  94              		.cfi_def_cfa_offset 56
  95              		.cfi_offset 3, -56
  96 0010 4889FB   		movq	%rdi, %rbx
  97 0013 4883EC38 		subq	$56, %rsp
  98              		.cfi_def_cfa_offset 112
  99              		.loc 1 89 0
 100 0017 E8000000 		call	strlen
 100      00
 101              	.LVL9:
 102              		.loc 1 93 0
 103 001c 8D4801   		leal	1(%rax), %ecx
 104              		.loc 1 89 0
 105 001f 4989C7   		movq	%rax, %r15
 106              	.LVL10:
 107              		.loc 1 93 0
 108 0022 4C63E1   		movslq	%ecx, %r12
 109 0025 894C2420 		movl	%ecx, 32(%rsp)
 110 0029 4C89E7   		movq	%r12, %rdi
 111 002c E8000000 		call	malloc
 111      00
 112              	.LVL11:
 113              		.loc 1 94 0
 114 0031 8B4C2420 		movl	32(%rsp), %ecx
 115              		.loc 1 93 0
 116 0035 4889C5   		movq	%rax, %rbp
 117              	.LVL12:
 118              		.loc 1 94 0
 119 0038 4489FE   		movl	%r15d, %esi
 120 003b 4889DF   		movq	%rbx, %rdi
 121 003e 4889C2   		movq	%rax, %rdx
 122 0041 E8000000 		call	fl_utf8to_mb
 122      00
 123              	.LVL13:
 124              		.loc 1 102 0
 125 0046 31D2     		xorl	%edx, %edx
 126 0048 4C89E9   		movq	%r13, %rcx
 127 004b 4C89F6   		movq	%r14, %rsi
 128 004e 4889EF   		movq	%rbp, %rdi
 129 0051 E8000000 		call	scandir
 129      00
 130              	.LVL14:
 131              		.loc 1 125 0
 132 0056 4889EF   		movq	%rbp, %rdi
 133              		.loc 1 102 0
 134 0059 89442424 		movl	%eax, 36(%rsp)
 135              	.LVL15:
 136              		.loc 1 125 0
 137 005d E8000000 		call	free
 137      00
 138              	.LVL16:
 139              		.loc 1 131 0
 140 0062 418DBF03 		leal	2051(%r15), %edi
 140      080000
 141              		.loc 1 135 0
 142 0069 4D63FF   		movslq	%r15d, %r15
 143              		.loc 1 131 0
 144 006c 4863FF   		movslq	%edi, %rdi
 145 006f E8000000 		call	malloc
 145      00
 146              	.LVL17:
 147              	.LBB14:
 148              	.LBB15:
 149              		.file 2 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 150              		.loc 2 53 0
 151 0074 4889DE   		movq	%rbx, %rsi
 152 0077 4889C3   		movq	%rax, %rbx
 153              	.LVL18:
 154 007a 4C89E2   		movq	%r12, %rdx
 155              	.LBE15:
 156              	.LBE14:
 157              		.loc 1 135 0
 158 007d 4901DF   		addq	%rbx, %r15
 159              	.LBB18:
 160              	.LBB16:
 161              		.loc 2 53 0
 162 0080 4889C7   		movq	%rax, %rdi
 163              	.LBE16:
 164              	.LBE18:
 165              		.loc 1 131 0
 166 0083 48894424 		movq	%rax, 24(%rsp)
 166      18
 167              	.LVL19:
 168              	.LBB19:
 169              	.LBB17:
 170              		.loc 2 53 0
 171 0088 E8000000 		call	memcpy
 171      00
 172              	.LVL20:
 173              	.LBE17:
 174              	.LBE19:
 175              		.loc 1 136 0
 176 008d 4C39FB   		cmpq	%r15, %rbx
 177              		.loc 1 135 0
 178 0090 4C897C24 		movq	%r15, 40(%rsp)
 178      28
 179              	.LVL21:
 180              		.loc 1 136 0
 181 0095 7414     		je	.L4
 182              		.loc 1 136 0 is_stmt 0 discriminator 1
 183 0097 41807FFF 		cmpb	$47, -1(%r15)
 183      2F
 184 009c 740D     		je	.L4
 185              	.LVL22:
 186              		.loc 1 137 0 is_stmt 1
 187 009e 498D4701 		leaq	1(%r15), %rax
 188              	.LVL23:
 189 00a2 41C6072F 		movb	$47, (%r15)
 190 00a6 48894424 		movq	%rax, 40(%rsp)
 190      28
 191              	.LVL24:
 192              	.L4:
 193              	.LBB20:
 194              		.loc 1 139 0
 195 00ab 8B442424 		movl	36(%rsp), %eax
 196 00af 85C0     		testl	%eax, %eax
 197 00b1 0F8E5901 		jle	.L14
 197      0000
 198 00b7 8B442424 		movl	36(%rsp), %eax
 199 00bb 31DB     		xorl	%ebx, %ebx
 200              	.LVL25:
 201 00bd 83E801   		subl	$1, %eax
 202 00c0 488D04C5 		leaq	8(,%rax,8), %rax
 202      08000000 
 203 00c8 48894424 		movq	%rax, 16(%rsp)
 203      10
 204 00cd EB1F     		jmp	.L15
 205              	.LVL26:
 206 00cf 90       		.p2align 4,,10
 207              		.p2align 3
 208              	.L8:
 209              	.LBB21:
 210              		.loc 1 170 0 discriminator 2
 211 00d0 4C89EF   		movq	%r13, %rdi
 212 00d3 E8000000 		call	free
 212      00
 213              	.LVL27:
 214              		.loc 1 171 0 discriminator 2
 215 00d8 498B06   		movq	(%r14), %rax
 216 00db 4C893C18 		movq	%r15, (%rax,%rbx)
 217 00df 4883C308 		addq	$8, %rbx
 218              	.LBE21:
 219              		.loc 1 139 0 discriminator 2
 220 00e3 48395C24 		cmpq	%rbx, 16(%rsp)
 220      10
 221 00e8 0F842201 		je	.L14
 221      0000
 222              	.LVL28:
 223              	.L15:
 224              	.LBB40:
 225              		.loc 1 141 0
 226 00ee 498B06   		movq	(%r14), %rax
 227 00f1 4C8B2C18 		movq	(%rax,%rbx), %r13
 228              	.LVL29:
 229              		.loc 1 142 0
 230 00f5 498D6D13 		leaq	19(%r13), %rbp
 231 00f9 4889EF   		movq	%rbp, %rdi
 232 00fc E8000000 		call	strlen
 232      00
 233              	.LVL30:
 234              		.loc 1 146 0
 235 0101 31F6     		xorl	%esi, %esi
 236 0103 89C1     		movl	%eax, %ecx
 237 0105 4889EA   		movq	%rbp, %rdx
 238 0108 31FF     		xorl	%edi, %edi
 239              		.loc 1 142 0
 240 010a 4989C4   		movq	%rax, %r12
 241              	.LVL31:
 242              		.loc 1 146 0
 243 010d E8000000 		call	fl_utf8from_mb
 243      00
 244              	.LVL32:
 245 0112 4898     		cltq
 246              	.LVL33:
 247              		.loc 1 148 0
 248 0114 488D7815 		leaq	21(%rax), %rdi
 249 0118 89442420 		movl	%eax, 32(%rsp)
 250 011c 48894424 		movq	%rax, 8(%rsp)
 250      08
 251 0121 E8000000 		call	malloc
 251      00
 252              	.LVL34:
 253 0126 4989C7   		movq	%rax, %r15
 254              	.LVL35:
 255              	.LBB22:
 256              	.LBB23:
 257              		.loc 2 53 0
 258 0129 498B4500 		movq	0(%r13), %rax
 259              	.LVL36:
 260              	.LBE23:
 261              	.LBE22:
 262              		.loc 1 155 0
 263 012d 8B742420 		movl	32(%rsp), %esi
 264 0131 4489E1   		movl	%r12d, %ecx
 265 0134 4889EA   		movq	%rbp, %rdx
 266              	.LBB26:
 267              	.LBB24:
 268              		.loc 2 53 0
 269 0137 498907   		movq	%rax, (%r15)
 270 013a 498B4508 		movq	8(%r13), %rax
 271              	.LBE24:
 272              	.LBE26:
 273              		.loc 1 155 0
 274 013e 83C601   		addl	$1, %esi
 275              	.LBB27:
 276              	.LBB25:
 277              		.loc 2 53 0
 278 0141 49894708 		movq	%rax, 8(%r15)
 279 0145 410FB745 		movzwl	16(%r13), %eax
 279      10
 280 014a 66418947 		movw	%ax, 16(%r15)
 280      10
 281 014f 410FB645 		movzbl	18(%r13), %eax
 281      12
 282 0154 41884712 		movb	%al, 18(%r15)
 283              	.LVL37:
 284              	.LBE25:
 285              	.LBE27:
 286              		.loc 1 155 0
 287 0158 498D4713 		leaq	19(%r15), %rax
 288 015c 4889C7   		movq	%rax, %rdi
 289 015f 48890424 		movq	%rax, (%rsp)
 290 0163 E8000000 		call	fl_utf8from_mb
 290      00
 291              	.LVL38:
 292              	.LBB28:
 293              		.loc 1 160 0
 294 0168 418D4424 		leal	-1(%r12), %eax
 294      FF
 295 016d 4898     		cltq
 296 016f 41807C05 		cmpb	$47, 19(%r13,%rax)
 296      132F
 297 0175 0F8455FF 		je	.L8
 297      FFFF
 298 017b 4181FC00 		cmpl	$2048, %r12d
 298      080000
 299 0182 0F8F48FF 		jg	.L8
 299      FFFF
 300              	.LVL39:
 301              	.LBB29:
 302              	.LBB30:
 303              	.LBB31:
 304              		.loc 2 53 0
 305 0188 458D5424 		leal	1(%r12), %r10d
 305      01
 306 018d 4D63D2   		movslq	%r10d, %r10
 307              	.LVL40:
 308 0190 4983FA08 		cmpq	$8, %r10
 309 0194 7342     		jnb	.L9
 310 0196 41F6C204 		testb	$4, %r10b
 311 019a 0F85C000 		jne	.L31
 311      0000
 312 01a0 4D85D2   		testq	%r10, %r10
 313 01a3 0F858700 		jne	.L32
 313      0000
 314              	.LVL41:
 315              	.L10:
 316              	.LBE31:
 317              	.LBE30:
 318              	.LBB34:
 319              		.loc 1 163 0
 320 01a9 488B7C24 		movq	24(%rsp), %rdi
 320      18
 321 01ae E8000000 		call	_Z17fl_filename_isdirPKc
 321      00
 322              	.LVL42:
 323 01b3 85C0     		testl	%eax, %eax
 324 01b5 0F8415FF 		je	.L8
 324      FFFF
 325              	.LBB35:
 326              		.loc 1 164 0
 327 01bb 4C8B2424 		movq	(%rsp), %r12
 328 01bf 4C036424 		addq	8(%rsp), %r12
 328      08
 329              	.LVL43:
 330              		.loc 1 165 0
 331 01c4 41C60424 		movb	$47, (%r12)
 331      2F
 332              		.loc 1 166 0
 333 01c9 41C64424 		movb	$0, 1(%r12)
 333      0100
 334              	.LBE35:
 335 01cf E9FCFEFF 		jmp	.L8
 335      FF
 336              	.LVL44:
 337              		.p2align 4,,10
 338 01d4 0F1F4000 		.p2align 3
 339              	.L9:
 340              	.LBE34:
 341              	.LBB36:
 342              	.LBB32:
 343              		.loc 2 53 0
 344 01d8 488B5424 		movq	40(%rsp), %rdx
 344      28
 345 01dd 498B4513 		movq	19(%r13), %rax
 346 01e1 4889EE   		movq	%rbp, %rsi
 347 01e4 488D7A08 		leaq	8(%rdx), %rdi
 348 01e8 488902   		movq	%rax, (%rdx)
 349              	.LVL45:
 350 01eb 4889D1   		movq	%rdx, %rcx
 351 01ee 4A8B4415 		movq	-8(%rbp,%r10), %rax
 351      F8
 352 01f3 4883E7F8 		andq	$-8, %rdi
 353 01f7 4829F9   		subq	%rdi, %rcx
 354 01fa 4829CE   		subq	%rcx, %rsi
 355 01fd 4C01D1   		addq	%r10, %rcx
 356 0200 4A894412 		movq	%rax, -8(%rdx,%r10)
 356      F8
 357 0205 48C1E903 		shrq	$3, %rcx
 358 0209 F348A5   		rep movsq
 359 020c EB9B     		jmp	.L10
 360              	.LVL46:
 361 020e 6690     		.p2align 4,,10
 362              		.p2align 3
 363              	.L14:
 364              	.LBE32:
 365              	.LBE36:
 366              	.LBE29:
 367              	.LBE28:
 368              	.LBE40:
 369              	.LBE20:
 370              		.loc 1 173 0
 371 0210 488B7C24 		movq	24(%rsp), %rdi
 371      18
 372 0215 E8000000 		call	free
 372      00
 373              	.LVL47:
 374              		.loc 1 178 0
 375 021a 8B442424 		movl	36(%rsp), %eax
 376 021e 4883C438 		addq	$56, %rsp
 377              		.cfi_remember_state
 378              		.cfi_def_cfa_offset 56
 379 0222 5B       		popq	%rbx
 380              		.cfi_def_cfa_offset 48
 381 0223 5D       		popq	%rbp
 382              		.cfi_def_cfa_offset 40
 383 0224 415C     		popq	%r12
 384              		.cfi_def_cfa_offset 32
 385 0226 415D     		popq	%r13
 386              		.cfi_def_cfa_offset 24
 387 0228 415E     		popq	%r14
 388              		.cfi_def_cfa_offset 16
 389              	.LVL48:
 390 022a 415F     		popq	%r15
 391              		.cfi_def_cfa_offset 8
 392 022c C3       		ret
 393              	.LVL49:
 394 022d 0F1F00   		.p2align 4,,10
 395              		.p2align 3
 396              	.L32:
 397              		.cfi_restore_state
 398              	.LBB42:
 399              	.LBB41:
 400              	.LBB39:
 401              	.LBB38:
 402              	.LBB37:
 403              	.LBB33:
 404              		.loc 2 53 0
 405 0230 410FB645 		movzbl	19(%r13), %eax
 405      13
 406 0235 488B4C24 		movq	40(%rsp), %rcx
 406      28
 407 023a 41F6C202 		testb	$2, %r10b
 408 023e 8801     		movb	%al, (%rcx)
 409              	.LVL50:
 410 0240 0F8463FF 		je	.L10
 410      FFFF
 411 0246 420FB744 		movzwl	-2(%rbp,%r10), %eax
 411      15FE
 412 024c 488B4C24 		movq	40(%rsp), %rcx
 412      28
 413 0251 66428944 		movw	%ax, -2(%rcx,%r10)
 413      11FE
 414 0257 E94DFFFF 		jmp	.L10
 414      FF
 415              	.LVL51:
 416 025c 0F1F4000 		.p2align 4,,10
 417              		.p2align 3
 418              	.L31:
 419 0260 418B4513 		movl	19(%r13), %eax
 420 0264 488B4C24 		movq	40(%rsp), %rcx
 420      28
 421 0269 8901     		movl	%eax, (%rcx)
 422              	.LVL52:
 423 026b 428B4415 		movl	-4(%rbp,%r10), %eax
 423      FC
 424 0270 42894411 		movl	%eax, -4(%rcx,%r10)
 424      FC
 425 0275 E92FFFFF 		jmp	.L10
 425      FF
 426              	.LBE33:
 427              	.LBE37:
 428              	.LBE38:
 429              	.LBE39:
 430              	.LBE41:
 431              	.LBE42:
 432              		.cfi_endproc
 433              	.LFE102:
 435              		.section	.text.unlikely._Z16fl_filename_listPKcPPP6direntPFiS3_S3_E
 436              	.LCOLDE2:
 437              		.section	.text._Z16fl_filename_listPKcPPP6direntPFiS3_S3_E
 438              	.LHOTE2:
 439              		.section	.text.unlikely._Z21fl_filename_free_listPPP6direnti,"ax",@progbits
 440              	.LCOLDB3:
 441              		.section	.text._Z21fl_filename_free_listPPP6direnti,"ax",@progbits
 442              	.LHOTB3:
 443              		.p2align 4,,15
 444              		.globl	_Z21fl_filename_free_listPPP6direnti
 446              	_Z21fl_filename_free_listPPP6direnti:
 447              	.LFB103:
 448              		.loc 1 190 0
 449              		.cfi_startproc
 450              	.LVL53:
 451              		.loc 1 191 0
 452 0000 85F6     		testl	%esi, %esi
 453 0002 784B     		js	.L45
 454              		.loc 1 190 0 discriminator 1
 455 0004 4154     		pushq	%r12
 456              		.cfi_def_cfa_offset 16
 457              		.cfi_offset 12, -16
 458 0006 55       		pushq	%rbp
 459              		.cfi_def_cfa_offset 24
 460              		.cfi_offset 6, -24
 461 0007 4889FD   		movq	%rdi, %rbp
 462              	.LVL54:
 463 000a 53       		pushq	%rbx
 464              		.cfi_def_cfa_offset 32
 465              		.cfi_offset 3, -32
 466 000b 488B07   		movq	(%rdi), %rax
 467              		.loc 1 194 0 discriminator 1
 468 000e 742B     		je	.L36
 469 0010 8D56FF   		leal	-1(%rsi), %edx
 470              		.loc 1 194 0 is_stmt 0
 471 0013 31DB     		xorl	%ebx, %ebx
 472 0015 4C8D24D5 		leaq	8(,%rdx,8), %r12
 472      08000000 
 473              	.LVL55:
 474 001d 0F1F00   		.p2align 4,,10
 475              		.p2align 3
 476              	.L38:
 477              		.loc 1 195 0 is_stmt 1
 478 0020 488B3C18 		movq	(%rax,%rbx), %rdi
 479 0024 4885FF   		testq	%rdi, %rdi
 480 0027 7409     		je	.L37
 481              		.loc 1 196 0
 482 0029 E8000000 		call	free
 482      00
 483              	.LVL56:
 484 002e 488B4500 		movq	0(%rbp), %rax
 485              	.L37:
 486 0032 4883C308 		addq	$8, %rbx
 487              		.loc 1 194 0 discriminator 2
 488 0036 4C39E3   		cmpq	%r12, %rbx
 489 0039 75E5     		jne	.L38
 490              	.L36:
 491              		.loc 1 198 0
 492 003b 4889C7   		movq	%rax, %rdi
 493 003e E8000000 		call	free
 493      00
 494              	.LVL57:
 495              		.loc 1 199 0
 496 0043 48C74500 		movq	$0, 0(%rbp)
 496      00000000 
 497              		.loc 1 200 0
 498 004b 5B       		popq	%rbx
 499              		.cfi_restore 3
 500              		.cfi_def_cfa_offset 24
 501 004c 5D       		popq	%rbp
 502              		.cfi_restore 6
 503              		.cfi_def_cfa_offset 16
 504              	.LVL58:
 505 004d 415C     		popq	%r12
 506              		.cfi_restore 12
 507              		.cfi_def_cfa_offset 8
 508              	.L45:
 509 004f F3C3     		rep ret
 510              		.cfi_endproc
 511              	.LFE103:
 513              		.section	.text.unlikely._Z21fl_filename_free_listPPP6direnti
 514              	.LCOLDE3:
 515              		.section	.text._Z21fl_filename_free_listPPP6direnti
 516              	.LHOTE3:
 517              		.text
 518              	.Letext0:
 519              		.section	.text.unlikely.fl_alphasort
 520              	.Letext_cold0:
 521              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
 522              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 523              		.file 5 "/usr/include/x86_64-linux-gnu/bits/dirent.h"
 524              		.file 6 "fltk-1.3.4-1/FL/filename.H"
 525              		.file 7 "/usr/include/libio.h"
 526              		.file 8 "/usr/include/stdio.h"
 527              		.file 9 "/usr/include/string.h"
 528              		.file 10 "/usr/include/stdlib.h"
 529              		.file 11 "fltk-1.3.4-1/FL/fl_utf8.h"
 530              		.file 12 "/usr/include/dirent.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 filename_list.cxx
     /tmp/cc8KlkV0.s:14     .text.fl_alphasort:0000000000000000 fl_alphasort
     /tmp/cc8KlkV0.s:43     .text.fl_casealphasort:0000000000000000 fl_casealphasort
     /tmp/cc8KlkV0.s:71     .text._Z16fl_filename_listPKcPPP6direntPFiS3_S3_E:0000000000000000 _Z16fl_filename_listPKcPPP6direntPFiS3_S3_E
     /tmp/cc8KlkV0.s:446    .text._Z21fl_filename_free_listPPP6direnti:0000000000000000 _Z21fl_filename_free_listPPP6direnti
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
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.185.629aca749f254f2bc1fdc00bb73e17c4
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.238.95ea4ce844d9fee903b0cacc7c1e4931
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.75da223233ea088d05b70fad69e90c9e
                           .group:0000000000000000 wm4.stdlib.h.54.bfbb5b0b23fee1f35dc97a46ddeb7e8b
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
strcmp
strcasecmp
strlen
malloc
fl_utf8to_mb
scandir
free
memcpy
fl_utf8from_mb
_Z17fl_filename_isdirPKc
