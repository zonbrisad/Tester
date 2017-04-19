   1              		.file	"ps_image.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL9convert85PKhPh,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL9convert85PKhPh,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL9convert85PKhPh
  10              	.Ltext_cold0:
  11              		.section	.text._ZL9convert85PKhPh
  13              	_ZL9convert85PKhPh:
  14              	.LFB491:
  15              		.file 1 "fltk-1.3.4-1/src/ps_image.cxx"
   1:fltk-1.3.4-1/src/ps_image.cxx **** ...
  16              		.loc 1 54 0
  17              		.cfi_startproc
  18              	.LVL0:
  19              		.loc 1 55 0
  20 0000 440FB607 		movzbl	(%rdi), %r8d
  21 0004 0FB65701 		movzbl	1(%rdi), %edx
  22 0008 0FB64F02 		movzbl	2(%rdi), %ecx
  23 000c 4584C0   		testb	%r8b, %r8b
  24 000f 0F849300 		je	.L10
  24      0000
  25              	.L8:
  26 0015 0FB64703 		movzbl	3(%rdi), %eax
  27              	.L4:
  28              		.loc 1 59 0
  29 0019 41C1E008 		sall	$8, %r8d
  30 001d 4401C2   		addl	%r8d, %edx
  31 0020 C1E208   		sall	$8, %edx
  32 0023 01CA     		addl	%ecx, %edx
  33 0025 C1E208   		sall	$8, %edx
  34 0028 8D0C02   		leal	(%rdx,%rax), %ecx
  35              	.LVL1:
  36              		.loc 1 60 0
  37 002b BA7DC11C 		movl	$1226621309, %edx
  37      49
  38 0030 89C8     		movl	%ecx, %eax
  39 0032 F7E2     		mull	%edx
  40 0034 89C8     		movl	%ecx, %eax
  41 0036 29D0     		subl	%edx, %eax
  42 0038 D1E8     		shrl	%eax
  43 003a 01C2     		addl	%eax, %edx
  44 003c C1EA19   		shrl	$25, %edx
  45 003f 8D4221   		leal	33(%rdx), %eax
  46              		.loc 1 61 0
  47 0042 69D2B184 		imull	$52200625, %edx, %edx
  47      1C03
  48              		.loc 1 60 0
  49 0048 8806     		movb	%al, (%rsi)
  50              		.loc 1 61 0
  51 004a 29D1     		subl	%edx, %ecx
  52              	.LVL2:
  53              		.loc 1 62 0
  54 004c BA7D188D 		movl	$-628287363, %edx
  54      DA
  55 0051 89C8     		movl	%ecx, %eax
  56 0053 F7E2     		mull	%edx
  57 0055 C1EA13   		shrl	$19, %edx
  58 0058 8D4221   		leal	33(%rdx), %eax
  59              		.loc 1 63 0
  60 005b 69D2ED5E 		imull	$614125, %edx, %edx
  60      0900
  61              		.loc 1 62 0
  62 0061 884601   		movb	%al, 1(%rsi)
  63              		.loc 1 63 0
  64 0064 29D1     		subl	%edx, %ecx
  65              	.LVL3:
  66              		.loc 1 64 0
  67 0066 BA43B221 		movl	$-1860062653, %edx
  67      91
  68 006b 89C8     		movl	%ecx, %eax
  69 006d F7E2     		mull	%edx
  70 006f C1EA0C   		shrl	$12, %edx
  71 0072 8D4221   		leal	33(%rdx), %eax
  72              		.loc 1 65 0
  73 0075 69D2391C 		imull	$7225, %edx, %edx
  73      0000
  74              		.loc 1 64 0
  75 007b 884602   		movb	%al, 2(%rsi)
  76              		.loc 1 65 0
  77 007e 29D1     		subl	%edx, %ecx
  78              	.LVL4:
  79              		.loc 1 66 0
  80 0080 BAC1C0C0 		movl	$-1061109567, %edx
  80      C0
  81 0085 89C8     		movl	%ecx, %eax
  82 0087 F7E2     		mull	%edx
  83 0089 C1EA06   		shrl	$6, %edx
  84 008c 8D4221   		leal	33(%rdx), %eax
  85              		.loc 1 67 0
  86 008f 6BD255   		imull	$85, %edx, %edx
  87              		.loc 1 66 0
  88 0092 884603   		movb	%al, 3(%rsi)
  89              		.loc 1 68 0
  90 0095 B8050000 		movl	$5, %eax
  90      00
  91              		.loc 1 67 0
  92 009a 29D1     		subl	%edx, %ecx
  93              	.LVL5:
  94 009c 83C121   		addl	$33, %ecx
  95 009f 884E04   		movb	%cl, 4(%rsi)
  96              		.loc 1 69 0
  97 00a2 C3       		ret
  98              		.p2align 4,,10
  99 00a3 0F1F4400 		.p2align 3
  99      00
 100              	.L10:
 101              		.loc 1 55 0 discriminator 1
 102 00a8 84D2     		testb	%dl, %dl
 103 00aa 0F8565FF 		jne	.L8
 103      FFFF
 104              		.loc 1 55 0 is_stmt 0 discriminator 2
 105 00b0 84C9     		testb	%cl, %cl
 106 00b2 0FB64703 		movzbl	3(%rdi), %eax
 107 00b6 0F855DFF 		jne	.L4
 107      FFFF
 108              		.loc 1 55 0 discriminator 3
 109 00bc 84C0     		testb	%al, %al
 110 00be 0FB6D1   		movzbl	%cl, %edx
 111 00c1 0F8552FF 		jne	.L4
 111      FFFF
 112              		.loc 1 56 0 is_stmt 1
 113 00c7 C6067A   		movb	$122, (%rsi)
 114              		.loc 1 57 0
 115 00ca B8010000 		movl	$1, %eax
 115      00
 116 00cf C3       		ret
 117              		.cfi_endproc
 118              	.LFE491:
 120              		.section	.text.unlikely._ZL9convert85PKhPh
 121              	.LCOLDE0:
 122              		.section	.text._ZL9convert85PKhPh
 123              	.LHOTE0:
 124              		.section	.text.unlikely._ZL13draw_image_cbPviiiPh,"ax",@progbits
 125              	.LCOLDB1:
 126              		.section	.text._ZL13draw_image_cbPviiiPh,"ax",@progbits
 127              	.LHOTB1:
 128              		.p2align 4,,15
 130              	_ZL13draw_image_cbPviiiPh:
 131              	.LFB499:
 132              		.loc 1 358 0
 133              		.cfi_startproc
 134              	.LVL6:
 135              		.loc 1 363 0
 136 0000 8B4708   		movl	8(%rdi), %eax
 137              	.LVL7:
 138              	.LBB179:
 139              	.LBB180:
 140              		.file 2 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 141              		.loc 2 53 0
 142 0003 0FAF570C 		imull	12(%rdi), %edx
 143              	.LVL8:
 144 0007 0FAFF0   		imull	%eax, %esi
 145              	.LVL9:
 146 000a 0FAFC8   		imull	%eax, %ecx
 147              	.LVL10:
 148 000d 4863F6   		movslq	%esi, %rsi
 149 0010 4863D2   		movslq	%edx, %rdx
 150 0013 4801D6   		addq	%rdx, %rsi
 151 0016 480337   		addq	(%rdi), %rsi
 152 0019 4C89C7   		movq	%r8, %rdi
 153              	.LVL11:
 154 001c 4863C9   		movslq	%ecx, %rcx
 155              	.LVL12:
 156 001f 4889CA   		movq	%rcx, %rdx
 157 0022 E9000000 		jmp	memcpy
 157      00
 158              	.LVL13:
 159              	.LBE180:
 160              	.LBE179:
 161              		.cfi_endproc
 162              	.LFE499:
 164              		.section	.text.unlikely._ZL13draw_image_cbPviiiPh
 165              	.LCOLDE1:
 166              		.section	.text._ZL13draw_image_cbPviiiPh
 167              	.LHOTE1:
 168              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii.part.5.constprop.6,
 169              		.align 2
 170              	.LCOLDB2:
 171              		.section	.text._ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii.part.5.constprop.6,"ax",@pro
 172              	.LHOTB2:
 173              		.align 2
 174              		.p2align 4,,15
 176              	_ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii.part.5.constprop.6:
 177              	.LFB514:
 178              		.loc 1 194 0
 179              		.cfi_startproc
 180              	.LVL14:
 181              		.loc 1 202 0
 182 0000 4489C0   		movl	%r8d, %eax
 183              		.loc 1 194 0
 184 0003 4157     		pushq	%r15
 185              		.cfi_def_cfa_offset 16
 186              		.cfi_offset 15, -16
 187 0005 4156     		pushq	%r14
 188              		.cfi_def_cfa_offset 24
 189              		.cfi_offset 14, -24
 190              		.loc 1 202 0
 191 0007 0FAFC2   		imull	%edx, %eax
 192              		.loc 1 194 0
 193 000a 4155     		pushq	%r13
 194              		.cfi_def_cfa_offset 32
 195              		.cfi_offset 13, -32
 196 000c 4154     		pushq	%r12
 197              		.cfi_def_cfa_offset 40
 198              		.cfi_offset 12, -40
 199 000e 55       		pushq	%rbp
 200              		.cfi_def_cfa_offset 48
 201              		.cfi_offset 6, -48
 202 000f 53       		pushq	%rbx
 203              		.cfi_def_cfa_offset 56
 204              		.cfi_offset 3, -56
 205              		.loc 1 202 0
 206 0010 4401C8   		addl	%r9d, %eax
 207              		.loc 1 194 0
 208 0013 4881EC98 		subq	$152, %rsp
 208      000000
 209              		.cfi_def_cfa_offset 208
 210              		.loc 1 206 0
 211 001a 85C9     		testl	%ecx, %ecx
 212              		.loc 1 202 0
 213 001c 89442478 		movl	%eax, 120(%rsp)
 214              	.LVL15:
 215              		.loc 1 206 0
 216 0020 0F8ECC04 		jle	.L70
 216      0000
 217 0026 4189C4   		movl	%eax, %r12d
 218 0029 4963C0   		movslq	%r8d, %rax
 219              	.LVL16:
 220 002c 89D5     		movl	%edx, %ebp
 221 002e 488D50FF 		leaq	-1(%rax), %rdx
 222              	.LVL17:
 223 0032 4989FD   		movq	%rdi, %r13
 224 0035 4989F7   		movq	%rsi, %r15
 225 0038 48897424 		movq	%rsi, 40(%rsp)
 225      28
 226 003d 4C896C24 		movq	%r13, 16(%rsp)
 226      10
 227 0042 4889C3   		movq	%rax, %rbx
 228 0045 894C247C 		movl	%ecx, 124(%rsp)
 229 0049 4531D2   		xorl	%r10d, %r10d
 230 004c 4531C9   		xorl	%r9d, %r9d
 231 004f 31FF     		xorl	%edi, %edi
 232              	.LVL18:
 233 0051 4531C0   		xorl	%r8d, %r8d
 234              	.LVL19:
 235 0054 48894424 		movq	%rax, 8(%rsp)
 235      08
 236 0059 48899424 		movq	%rdx, 128(%rsp)
 236      80000000 
 237 0061 4889C6   		movq	%rax, %rsi
 238              	.LVL20:
 239 0064 4989D6   		movq	%rdx, %r14
 240 0067 4189CD   		movl	%ecx, %r13d
 241              	.LVL21:
 242 006a 660F1F44 		.p2align 4,,10
 242      0000
 243              		.p2align 3
 244              	.L22:
 245              		.loc 1 207 0
 246 0070 85ED     		testl	%ebp, %ebp
 247 0072 7E5A     		jle	.L14
 248 0074 4963C2   		movslq	%r10d, %rax
 249 0077 BA010000 		movl	$1, %edx
 249      00
 250 007c 4531DB   		xorl	%r11d, %r11d
 251 007f 4C01F0   		addq	%r14, %rax
 252 0082 4C01F8   		addq	%r15, %rax
 253 0085 EB19     		jmp	.L15
 254              	.LVL22:
 255 0087 660F1F84 		.p2align 4,,10
 255      00000000 
 255      00
 256              		.p2align 3
 257              	.L74:
 258 0090 39D5     		cmpl	%edx, %ebp
 259              		.loc 1 209 0
 260 0092 41B80100 		movl	$1, %r8d
 260      0000
 261              	.LVL23:
 262              		.loc 1 207 0
 263 0098 7E2F     		jle	.L73
 264              	.LVL24:
 265              	.L19:
 266 009a 4801F0   		addq	%rsi, %rax
 267 009d 83C201   		addl	$1, %edx
 268              	.LVL25:
 269              	.L15:
 270              		.loc 1 208 0
 271 00a0 0FB608   		movzbl	(%rax), %ecx
 272 00a3 84C9     		testb	%cl, %cl
 273 00a5 7419     		je	.L53
 274 00a7 80F9FF   		cmpb	$-1, %cl
 275 00aa 74E4     		je	.L74
 276              	.LVL26:
 277              		.loc 1 207 0
 278 00ac 39D5     		cmpl	%edx, %ebp
 279 00ae 7E57     		jle	.L67
 280              		.loc 1 211 0
 281 00b0 41BB0100 		movl	$1, %r11d
 281      0000
 282 00b6 EBE2     		jmp	.L19
 283              	.LVL27:
 284 00b8 0F1F8400 		.p2align 4,,10
 284      00000000 
 285              		.p2align 3
 286              	.L53:
 287              		.loc 1 207 0
 288 00c0 39D5     		cmpl	%edx, %ebp
 289              		.loc 1 210 0
 290 00c2 BF010000 		movl	$1, %edi
 290      00
 291              	.LVL28:
 292              		.loc 1 207 0
 293 00c7 7FD1     		jg	.L19
 294              	.L73:
 295              		.loc 1 213 0
 296 00c9 4585DB   		testl	%r11d, %r11d
 297 00cc 7539     		jne	.L67
 298              	.LVL29:
 299              	.L14:
 300              		.loc 1 206 0
 301 00ce 4183C101 		addl	$1, %r9d
 302              	.LVL30:
 303 00d2 4501E2   		addl	%r12d, %r10d
 304 00d5 4539CD   		cmpl	%r9d, %r13d
 305 00d8 7596     		jne	.L22
 306              		.loc 1 216 0
 307 00da 85FF     		testl	%edi, %edi
 308 00dc 4C8B6C24 		movq	16(%rsp), %r13
 308      10
 309              	.LVL31:
 310 00e1 0F840B04 		je	.L70
 310      0000
 311              		.loc 1 217 0
 312 00e7 4585C0   		testl	%r8d, %r8d
 313              		.loc 1 230 0
 314 00ea B8010000 		movl	$1, %eax
 314      00
 315              		.loc 1 217 0
 316 00ef 0F850404 		jne	.L75
 316      0000
 317              	.LVL32:
 318              	.L55:
 319              		.loc 1 339 0
 320 00f5 4881C498 		addq	$152, %rsp
 320      000000
 321              		.cfi_remember_state
 322              		.cfi_def_cfa_offset 56
 323 00fc 5B       		popq	%rbx
 324              		.cfi_def_cfa_offset 48
 325 00fd 5D       		popq	%rbp
 326              		.cfi_def_cfa_offset 40
 327 00fe 415C     		popq	%r12
 328              		.cfi_def_cfa_offset 32
 329 0100 415D     		popq	%r13
 330              		.cfi_def_cfa_offset 24
 331 0102 415E     		popq	%r14
 332              		.cfi_def_cfa_offset 16
 333 0104 415F     		popq	%r15
 334              		.cfi_def_cfa_offset 8
 335 0106 C3       		ret
 336              	.LVL33:
 337              	.L67:
 338              		.cfi_restore_state
 339              		.loc 1 241 0
 340 0107 448B6424 		movl	124(%rsp), %r12d
 340      7C
 341              	.LVL34:
 342 010c 8D4501   		leal	1(%rbp), %eax
 343 010f 4C8B6C24 		movq	16(%rsp), %r13
 343      10
 344              	.LVL35:
 345 0114 D1F8     		sarl	%eax
 346 0116 440FAFE0 		imull	%eax, %r12d
 347 011a 89442454 		movl	%eax, 84(%rsp)
 348 011e 41C1E402 		sall	$2, %r12d
 349 0122 4963FC   		movslq	%r12d, %rdi
 350 0125 E8000000 		call	_Znam
 350      00
 351              	.LVL36:
 352              		.loc 1 243 0
 353 012a 4585E4   		testl	%r12d, %r12d
 354              		.loc 1 241 0
 355 012d 49898510 		movq	%rax, 2064(%r13)
 355      080000
 356              	.LVL37:
 357              		.loc 1 243 0
 358 0134 7E1E     		jle	.L48
 359 0136 4889C2   		movq	%rax, %rdx
 360 0139 31C0     		xorl	%eax, %eax
 361 013b EB0A     		jmp	.L49
 362              	.LVL38:
 363 013d 0F1F00   		.p2align 4,,10
 364              		.p2align 3
 365              	.L30:
 366 0140 498B9510 		movq	2064(%r13), %rdx
 366      080000
 367              	.L49:
 368              	.LVL39:
 369 0147 C6040200 		movb	$0, (%rdx,%rax)
 370              	.LVL40:
 371 014b 4883C001 		addq	$1, %rax
 372              	.LVL41:
 373 014f 4139C4   		cmpl	%eax, %r12d
 374 0152 7FEC     		jg	.L30
 375              	.L48:
 376              		.loc 1 248 0
 377 0154 8B44247C 		movl	124(%rsp), %eax
 378              		.loc 1 247 0
 379 0158 448D24AD 		leal	0(,%rbp,4), %r12d
 379      00000000 
 380 0160 4589A518 		movl	%r12d, 2072(%r13)
 380      080000
 381              		.loc 1 248 0
 382 0167 C1E002   		sall	$2, %eax
 383 016a 4189851C 		movl	%eax, 2076(%r13)
 383      080000
 384              	.LVL42:
 385              		.loc 1 252 0
 386 0171 418D4424 		leal	2(%r12), %eax
 386      02
 387 0176 4863D0   		movslq	%eax, %rdx
 388 0179 48B80000 		movabsq	$4575657221408423936, %rax
 388      00000000 
 388      803F
 389 0183 4839C2   		cmpq	%rax, %rdx
 390 0186 0F865104 		jbe	.L76
 390      0000
 391 018c 48C7C7FF 		movq	$-1, %rdi
 391      FFFFFF
 392              		.loc 1 253 0
 393 0193 49C7C6FF 		movq	$-1, %r14
 393      FFFFFF
 394              		.loc 1 252 0
 395 019a E8000000 		call	_Znam
 395      00
 396              	.LVL43:
 397 019f 48894424 		movq	%rax, 72(%rsp)
 397      48
 398              	.LVL44:
 399              	.L51:
 400              		.loc 1 253 0
 401 01a4 4C89F7   		movq	%r14, %rdi
 402 01a7 E8000000 		call	_Znam
 402      00
 403              	.LVL45:
 404 01ac 418D5424 		leal	1(%r12), %edx
 404      01
 405 01b1 48894424 		movq	%rax, 32(%rsp)
 405      20
 406              	.LVL46:
 407 01b6 488D5412 		leaq	2(%rdx,%rdx), %rdx
 407      02
 408 01bb 488D0C10 		leaq	(%rax,%rdx), %rcx
 409              	.LVL47:
 410 01bf 90       		.p2align 4,,10
 411              		.p2align 3
 412              	.L32:
 413              		.loc 1 255 0
 414 01c0 31FF     		xorl	%edi, %edi
 415 01c2 4883C002 		addq	$2, %rax
 416 01c6 668978FE 		movw	%di, -2(%rax)
 417 01ca 4839C8   		cmpq	%rcx, %rax
 418 01cd 75F1     		jne	.L32
 419 01cf 488B7424 		movq	72(%rsp), %rsi
 419      48
 420 01d4 4889F0   		movq	%rsi, %rax
 421 01d7 4801F2   		addq	%rsi, %rdx
 422 01da 660F1F44 		.p2align 4,,10
 422      0000
 423              		.p2align 3
 424              	.L33:
 425              		.loc 1 256 0
 426 01e0 31F6     		xorl	%esi, %esi
 427 01e2 4883C002 		addq	$2, %rax
 428 01e6 668970FE 		movw	%si, -2(%rax)
 429 01ea 4839C2   		cmpq	%rax, %rdx
 430 01ed 75F1     		jne	.L33
 431              	.LVL48:
 432 01ef 8B442454 		movl	84(%rsp), %eax
 433 01f3 488B7C24 		movq	72(%rsp), %rdi
 433      48
 434 01f8 C7442474 		movl	$0, 116(%rsp)
 434      00000000 
 435 0200 C7442450 		movl	$0, 80(%rsp)
 435      00000000 
 436 0208 8D348500 		leal	0(,%rax,4), %esi
 436      000000
 437 020f 89B4248C 		movl	%esi, 140(%rsp)
 437      000000
 438 0216 89C6     		movl	%eax, %esi
 439 0218 01C0     		addl	%eax, %eax
 440 021a 8944246C 		movl	%eax, 108(%rsp)
 441 021e 8D04AD00 		leal	0(,%rbp,4), %eax
 441      000000
 442 0225 83ED01   		subl	$1, %ebp
 443              	.LVL49:
 444 0228 8D14AD00 		leal	0(,%rbp,4), %edx
 444      000000
 445 022f 89742470 		movl	%esi, 112(%rsp)
 446 0233 89442410 		movl	%eax, 16(%rsp)
 447              	.LVL50:
 448 0237 4863C2   		movslq	%edx, %rax
 449 023a 4801C0   		addq	%rax, %rax
 450 023d 4801C7   		addq	%rax, %rdi
 451 0240 48034424 		addq	32(%rsp), %rax
 451      20
 452 0245 0FAFEB   		imull	%ebx, %ebp
 453              	.LVL51:
 454 0248 F7DB     		negl	%ebx
 455 024a 48897C24 		movq	%rdi, 96(%rsp)
 455      60
 456 024f 48894424 		movq	%rax, 88(%rsp)
 456      58
 457 0254 8D4203   		leal	3(%rdx), %eax
 458 0257 89AC2488 		movl	%ebp, 136(%rsp)
 458      000000
 459              	.LBB181:
 460              	.LBB182:
 461              	.LBB183:
 462              	.LBB184:
 463              	.LBB185:
 464              	.LBB186:
 465              		.loc 1 277 0
 466 025e BD010000 		movl	$1, %ebp
 466      00
 467 0263 89442468 		movl	%eax, 104(%rsp)
 468 0267 4863C3   		movslq	%ebx, %rax
 469 026a 48894424 		movq	%rax, 24(%rsp)
 469      18
 470              	.LVL52:
 471 026f 90       		.p2align 4,,10
 472              		.p2align 3
 473              	.L47:
 474 0270 8B5C2474 		movl	116(%rsp), %ebx
 475 0274 8B842488 		movl	136(%rsp), %eax
 475      000000
 476 027b 488BB424 		movq	128(%rsp), %rsi
 476      80000000 
 477              	.LBE186:
 478              	.LBE185:
 479              	.LBE184:
 480              	.LBE183:
 481              	.LBE182:
 482              	.LBE181:
 483              		.loc 1 256 0
 484 0283 C7442434 		movl	$2, 52(%rsp)
 484      02000000 
 485 028b 01D8     		addl	%ebx, %eax
 486 028d 4898     		cltq
 487 028f 4801F0   		addq	%rsi, %rax
 488 0292 48034424 		addq	40(%rsp), %rax
 488      28
 489 0297 48894424 		movq	%rax, 56(%rsp)
 489      38
 490 029c 8B442470 		movl	112(%rsp), %eax
 491 02a0 89442430 		movl	%eax, 48(%rsp)
 492 02a4 4863C3   		movslq	%ebx, %rax
 493 02a7 4801F0   		addq	%rsi, %rax
 494 02aa 48894424 		movq	%rax, 64(%rsp)
 494      40
 495              	.LVL53:
 496              	.L41:
 497              	.LBB203:
 498              	.LBB201:
 499              	.LBB199:
 500              		.loc 1 270 0
 501 02af 488B4424 		movq	72(%rsp), %rax
 501      48
 502 02b4 448B6424 		movl	48(%rsp), %r12d
 502      30
 503 02b9 31C9     		xorl	%ecx, %ecx
 504 02bb 4C8B4C24 		movq	40(%rsp), %r9
 504      28
 505 02c0 442B6424 		subl	84(%rsp), %r12d
 505      54
 506 02c5 31FF     		xorl	%edi, %edi
 507 02c7 4C034C24 		addq	64(%rsp), %r9
 507      40
 508 02cc 488B5C24 		movq	32(%rsp), %rbx
 508      20
 509 02d1 66894802 		movw	%cx, 2(%rax)
 510              	.LVL54:
 511 02d5 4989C3   		movq	%rax, %r11
 512              	.LVL55:
 513 02d8 0F1F8400 		.p2align 4,,10
 513      00000000 
 514              		.p2align 3
 515              	.L38:
 516 02e0 448D5704 		leal	4(%rdi), %r10d
 517 02e4 4C89DE   		movq	%r11, %rsi
 518 02e7 4989D8   		movq	%rbx, %r8
 519              	.L37:
 520              	.LVL56:
 521              	.LBB191:
 522              	.LBB189:
 523              	.LBB187:
 524              		.loc 1 275 0
 525 02ea 410FB601 		movzbl	(%r9), %eax
 526 02ee 66410340 		addw	2(%r8), %ax
 526      02
 527              	.LVL57:
 528              		.loc 1 276 0
 529 02f3 6683F87F 		cmpw	$127, %ax
 530 02f7 7E3A     		jle	.L34
 531              		.loc 1 277 0
 532 02f9 8D5707   		leal	7(%rdi), %edx
 533 02fc 85FF     		testl	%edi, %edi
 534 02fe 4189FE   		movl	%edi, %r14d
 535 0301 4189EF   		movl	%ebp, %r15d
 536 0304 0F49D7   		cmovns	%edi, %edx
 537 0307 41C1FE1F 		sarl	$31, %r14d
 538              		.loc 1 278 0
 539 030b 662DFF00 		subw	$255, %ax
 540              	.LVL58:
 541              		.loc 1 277 0
 542 030f C1FA03   		sarl	$3, %edx
 543 0312 41C1EE1D 		shrl	$29, %r14d
 544 0316 4401E2   		addl	%r12d, %edx
 545 0319 428D0C37 		leal	(%rdi,%r14), %ecx
 546 031d 4863D2   		movslq	%edx, %rdx
 547 0320 49039510 		addq	2064(%r13), %rdx
 547      080000
 548 0327 83E107   		andl	$7, %ecx
 549 032a 4429F1   		subl	%r14d, %ecx
 550 032d 41D3E7   		sall	%cl, %r15d
 551 0330 44083A   		orb	%r15b, (%rdx)
 552              	.LVL59:
 553              	.L34:
 554              		.loc 1 283 0
 555 0333 6685C0   		testw	%ax, %ax
 556              		.loc 1 284 0
 557 0336 0FBFD0   		movswl	%ax, %edx
 558              		.loc 1 283 0
 559 0339 0F8E1103 		jle	.L35
 559      0000
 560              		.loc 1 284 0
 561 033f 8D4C5208 		leal	8(%rdx,%rdx,2), %ecx
 562 0343 C1F904   		sarl	$4, %ecx
 563 0346 66010E   		addw	%cx, (%rsi)
 564 0349 4189CF   		movl	%ecx, %r15d
 565              	.LVL60:
 566              		.loc 1 285 0
 567 034c 8D0CD500 		leal	0(,%rdx,8), %ecx
 567      000000
 568              	.LVL61:
 569 0353 29D1     		subl	%edx, %ecx
 570              		.loc 1 286 0
 571 0355 83C208   		addl	$8, %edx
 572              		.loc 1 285 0
 573 0358 83C108   		addl	$8, %ecx
 574              		.loc 1 286 0
 575 035b C1FA04   		sarl	$4, %edx
 576              		.loc 1 285 0
 577 035e C1F904   		sarl	$4, %ecx
 578 0361 66410148 		addw	%cx, 4(%r8)
 578      04
 579              		.loc 1 286 0
 580 0366 66895604 		movw	%dx, 4(%rsi)
 581              		.loc 1 285 0
 582 036a 4189CE   		movl	%ecx, %r14d
 583              	.LVL62:
 584              		.loc 1 286 0
 585 036d 89D1     		movl	%edx, %ecx
 586              	.LVL63:
 587              	.L36:
 588              		.loc 1 292 0
 589 036f 4429F8   		subl	%r15d, %eax
 590              	.LVL64:
 591 0372 83C701   		addl	$1, %edi
 592              	.LVL65:
 593 0375 4983C002 		addq	$2, %r8
 594 0379 4429F0   		subl	%r14d, %eax
 595 037c 66034602 		addw	2(%rsi), %ax
 596 0380 4883C602 		addq	$2, %rsi
 597 0384 29C8     		subl	%ecx, %eax
 598 0386 668906   		movw	%ax, (%rsi)
 599              	.LVL66:
 600              	.LBE187:
 601              		.loc 1 272 0
 602 0389 4139FA   		cmpl	%edi, %r10d
 603 038c 0F8558FF 		jne	.L37
 603      FFFF
 604 0392 4883C308 		addq	$8, %rbx
 605 0396 4983C308 		addq	$8, %r11
 606 039a 4C034C24 		addq	8(%rsp), %r9
 606      08
 607              	.LBE189:
 608              		.loc 1 271 0
 609 039f 44395424 		cmpl	%r10d, 16(%rsp)
 609      10
 610 03a4 4489D7   		movl	%r10d, %edi
 611              	.LVL67:
 612 03a7 0F8533FF 		jne	.L38
 612      FFFF
 613              	.LVL68:
 614              	.LBE191:
 615              		.loc 1 303 0
 616 03ad 488B4424 		movq	32(%rsp), %rax
 616      20
 617 03b2 4C8B4C24 		movq	56(%rsp), %r9
 617      38
 618 03b7 31D2     		xorl	%edx, %edx
 619              	.LVL69:
 620 03b9 8B7C2468 		movl	104(%rsp), %edi
 621 03bd 488B5C24 		movq	88(%rsp), %rbx
 621      58
 622 03c2 4C8B5C24 		movq	96(%rsp), %r11
 622      60
 623 03c7 448B6424 		movl	48(%rsp), %r12d
 623      30
 624 03cc 66895002 		movw	%dx, 2(%rax)
 625              	.LVL70:
 626              		.p2align 4,,10
 627              		.p2align 3
 628              	.L39:
 629 03d0 448D57FC 		leal	-4(%rdi), %r10d
 630 03d4 4889DE   		movq	%rbx, %rsi
 631 03d7 4D89D8   		movq	%r11, %r8
 632              	.L45:
 633              	.LVL71:
 634              	.LBB192:
 635              	.LBB193:
 636              	.LBB194:
 637              		.loc 1 311 0
 638 03da 410FB601 		movzbl	(%r9), %eax
 639 03de 66410340 		addw	8(%r8), %ax
 639      08
 640              	.LVL72:
 641              		.loc 1 312 0
 642 03e3 6683F87F 		cmpw	$127, %ax
 643 03e7 7E3A     		jle	.L42
 644              		.loc 1 314 0
 645 03e9 8D5707   		leal	7(%rdi), %edx
 646 03ec 85FF     		testl	%edi, %edi
 647 03ee 4189FE   		movl	%edi, %r14d
 648 03f1 4189EF   		movl	%ebp, %r15d
 649 03f4 0F49D7   		cmovns	%edi, %edx
 650 03f7 41C1FE1F 		sarl	$31, %r14d
 651              		.loc 1 315 0
 652 03fb 662DFF00 		subw	$255, %ax
 653              	.LVL73:
 654              		.loc 1 314 0
 655 03ff C1FA03   		sarl	$3, %edx
 656 0402 41C1EE1D 		shrl	$29, %r14d
 657 0406 4401E2   		addl	%r12d, %edx
 658 0409 428D0C37 		leal	(%rdi,%r14), %ecx
 659 040d 4863D2   		movslq	%edx, %rdx
 660 0410 49039510 		addq	2064(%r13), %rdx
 660      080000
 661 0417 83E107   		andl	$7, %ecx
 662 041a 4429F1   		subl	%r14d, %ecx
 663 041d 41D3E7   		sall	%cl, %r15d
 664 0420 44083A   		orb	%r15b, (%rdx)
 665              	.LVL74:
 666              	.L42:
 667              		.loc 1 320 0
 668 0423 6685C0   		testw	%ax, %ax
 669              		.loc 1 321 0
 670 0426 0FBFD0   		movswl	%ax, %edx
 671              		.loc 1 320 0
 672 0429 0F8EC901 		jle	.L43
 672      0000
 673              		.loc 1 321 0
 674 042f 8D4C5208 		leal	8(%rdx,%rdx,2), %ecx
 675 0433 C1F904   		sarl	$4, %ecx
 676 0436 66014E0A 		addw	%cx, 10(%rsi)
 677 043a 4189CF   		movl	%ecx, %r15d
 678              	.LVL75:
 679              		.loc 1 322 0
 680 043d 8D0CD500 		leal	0(,%rdx,8), %ecx
 680      000000
 681              	.LVL76:
 682 0444 29D1     		subl	%edx, %ecx
 683              		.loc 1 323 0
 684 0446 83C208   		addl	$8, %edx
 685              		.loc 1 322 0
 686 0449 83C108   		addl	$8, %ecx
 687              		.loc 1 323 0
 688 044c C1FA04   		sarl	$4, %edx
 689              		.loc 1 322 0
 690 044f C1F904   		sarl	$4, %ecx
 691 0452 66410148 		addw	%cx, 6(%r8)
 691      06
 692              		.loc 1 323 0
 693 0457 66895606 		movw	%dx, 6(%rsi)
 694              		.loc 1 322 0
 695 045b 4189CE   		movl	%ecx, %r14d
 696              	.LVL77:
 697              		.loc 1 323 0
 698 045e 89D1     		movl	%edx, %ecx
 699              	.LVL78:
 700              	.L44:
 701              		.loc 1 330 0
 702 0460 4429F8   		subl	%r15d, %eax
 703              	.LVL79:
 704 0463 83EF01   		subl	$1, %edi
 705              	.LVL80:
 706 0466 4983E802 		subq	$2, %r8
 707 046a 4429F0   		subl	%r14d, %eax
 708 046d 66034608 		addw	8(%rsi), %ax
 709 0471 4883EE02 		subq	$2, %rsi
 710 0475 29C8     		subl	%ecx, %eax
 711 0477 6689460A 		movw	%ax, 10(%rsi)
 712              	.LVL81:
 713              	.LBE194:
 714              		.loc 1 307 0
 715 047b 4139FA   		cmpl	%edi, %r10d
 716 047e 0F8556FF 		jne	.L45
 716      FFFF
 717 0484 4983EB08 		subq	$8, %r11
 718 0488 4883EB08 		subq	$8, %rbx
 719 048c 4C034C24 		addq	24(%rsp), %r9
 719      18
 720              	.LBE193:
 721              		.loc 1 305 0
 722 0491 4183FAFF 		cmpl	$-1, %r10d
 723 0495 4489D7   		movl	%r10d, %edi
 724              	.LVL82:
 725 0498 0F8532FF 		jne	.L39
 725      FFFF
 726              	.LVL83:
 727 049e 8B5C246C 		movl	108(%rsp), %ebx
 728 04a2 015C2430 		addl	%ebx, 48(%rsp)
 729              	.LBE192:
 730              	.LBE199:
 731              		.loc 1 263 0
 732 04a6 836C2434 		subl	$1, 52(%rsp)
 732      01
 733              	.LVL84:
 734 04ab 0F85FEFD 		jne	.L41
 734      FFFF
 735              	.LBE201:
 736              		.loc 1 262 0
 737 04b1 83442450 		addl	$1, 80(%rsp)
 737      01
 738 04b6 8B742478 		movl	120(%rsp), %esi
 739 04ba 8B442450 		movl	80(%rsp), %eax
 740              	.LVL85:
 741 04be 01742474 		addl	%esi, 116(%rsp)
 742 04c2 8BB4248C 		movl	140(%rsp), %esi
 742      000000
 743 04c9 01742470 		addl	%esi, 112(%rsp)
 744 04cd 3944247C 		cmpl	%eax, 124(%rsp)
 745 04d1 0F8599FD 		jne	.L47
 745      FFFF
 746              	.LBE203:
 747              		.loc 1 336 0
 748 04d7 488B7C24 		movq	72(%rsp), %rdi
 748      48
 749 04dc E8000000 		call	_ZdaPv
 749      00
 750              	.LVL86:
 751              		.loc 1 337 0
 752 04e1 488B7C24 		movq	32(%rsp), %rdi
 752      20
 753 04e6 E8000000 		call	_ZdaPv
 753      00
 754              	.LVL87:
 755              		.loc 1 338 0
 756 04eb 31C0     		xorl	%eax, %eax
 757 04ed E903FCFF 		jmp	.L55
 757      FF
 758              	.LVL88:
 759              	.L70:
 760              		.loc 1 233 0
 761 04f2 31C0     		xorl	%eax, %eax
 762 04f4 E9FCFBFF 		jmp	.L55
 762      FF
 763              	.LVL89:
 764              	.L75:
 765              		.loc 1 218 0
 766 04f9 8D450E   		leal	14(%rbp), %eax
 767 04fc 4189EC   		movl	%ebp, %r12d
 768              	.LVL90:
 769              		.loc 1 219 0
 770 04ff 448B7424 		movl	124(%rsp), %r14d
 770      7C
 771              		.loc 1 218 0
 772 0504 4183C407 		addl	$7, %r12d
 773 0508 440F48E0 		cmovs	%eax, %r12d
 774 050c 41C1FC03 		sarl	$3, %r12d
 775              	.LVL91:
 776              		.loc 1 219 0
 777 0510 450FAFF4 		imull	%r12d, %r14d
 778 0514 4963FE   		movslq	%r14d, %rdi
 779              	.LVL92:
 780 0517 E8000000 		call	_Znam
 780      00
 781              	.LVL93:
 782              		.loc 1 220 0
 783 051c 4585F6   		testl	%r14d, %r14d
 784              		.loc 1 219 0
 785 051f 49898510 		movq	%rax, 2064(%r13)
 785      080000
 786              	.LVL94:
 787              		.loc 1 220 0
 788 0526 7E1C     		jle	.L23
 789 0528 4889C2   		movq	%rax, %rdx
 790 052b 31C0     		xorl	%eax, %eax
 791 052d EB08     		jmp	.L24
 792              	.LVL95:
 793 052f 90       		.p2align 4,,10
 794              		.p2align 3
 795              	.L77:
 796 0530 498B9510 		movq	2064(%r13), %rdx
 796      080000
 797              	.L24:
 798              	.LVL96:
 799 0537 C6040200 		movb	$0, (%rdx,%rax)
 800              	.LVL97:
 801 053b 4883C001 		addq	$1, %rax
 802              	.LVL98:
 803 053f 4139C6   		cmpl	%eax, %r14d
 804 0542 7FEC     		jg	.L77
 805              	.L23:
 806              	.LVL99:
 807 0544 448B7424 		movl	124(%rsp), %r14d
 807      7C
 808 0549 4C8D5BFF 		leaq	-1(%rbx), %r11
 809 054d 4531D2   		xorl	%r10d, %r10d
 810 0550 31FF     		xorl	%edi, %edi
 811 0552 4531C9   		xorl	%r9d, %r9d
 812              		.loc 1 224 0
 813 0555 41B80100 		movl	$1, %r8d
 813      0000
 814              	.LVL100:
 815              	.L26:
 816              		.loc 1 222 0
 817 055b 85ED     		testl	%ebp, %ebp
 818 055d 7E54     		jle	.L28
 819 055f 4963F2   		movslq	%r10d, %rsi
 820 0562 31D2     		xorl	%edx, %edx
 821 0564 4C01DE   		addq	%r11, %rsi
 822 0567 48037424 		addq	40(%rsp), %rsi
 822      28
 823              	.LVL101:
 824 056c 0F1F4000 		.p2align 4,,10
 825              		.p2align 3
 826              	.L29:
 827              		.loc 1 223 0
 828 0570 803E00   		cmpb	$0, (%rsi)
 829 0573 7434     		je	.L27
 830              		.loc 1 224 0
 831 0575 8D4207   		leal	7(%rdx), %eax
 832 0578 85D2     		testl	%edx, %edx
 833 057a 4189D7   		movl	%edx, %r15d
 834 057d 0F49C2   		cmovns	%edx, %eax
 835 0580 41C1FF1F 		sarl	$31, %r15d
 836 0584 C1F803   		sarl	$3, %eax
 837 0587 41C1EF1D 		shrl	$29, %r15d
 838 058b 01F8     		addl	%edi, %eax
 839 058d 428D0C3A 		leal	(%rdx,%r15), %ecx
 840 0591 4898     		cltq
 841 0593 49038510 		addq	2064(%r13), %rax
 841      080000
 842 059a 83E107   		andl	$7, %ecx
 843 059d 4429F9   		subl	%r15d, %ecx
 844 05a0 4589C7   		movl	%r8d, %r15d
 845 05a3 41D3E7   		sall	%cl, %r15d
 846 05a6 440838   		orb	%r15b, (%rax)
 847              	.L27:
 848              		.loc 1 222 0
 849 05a9 83C201   		addl	$1, %edx
 850              	.LVL102:
 851 05ac 4801DE   		addq	%rbx, %rsi
 852 05af 39D5     		cmpl	%edx, %ebp
 853 05b1 75BD     		jne	.L29
 854              	.LVL103:
 855              	.L28:
 856              		.loc 1 221 0
 857 05b3 4183C101 		addl	$1, %r9d
 858              	.LVL104:
 859 05b7 4401E7   		addl	%r12d, %edi
 860 05ba 44035424 		addl	120(%rsp), %r10d
 860      78
 861 05bf 4539CE   		cmpl	%r9d, %r14d
 862 05c2 7597     		jne	.L26
 863              		.loc 1 226 0
 864 05c4 8B44247C 		movl	124(%rsp), %eax
 865              		.loc 1 225 0
 866 05c8 4189AD18 		movl	%ebp, 2072(%r13)
 866      080000
 867              		.loc 1 226 0
 868 05cf 4189851C 		movl	%eax, 2076(%r13)
 868      080000
 869              		.loc 1 227 0
 870 05d6 31C0     		xorl	%eax, %eax
 871 05d8 E918FBFF 		jmp	.L55
 871      FF
 872              	.LVL105:
 873              	.L76:
 874              		.loc 1 252 0
 875 05dd 4C8D3412 		leaq	(%rdx,%rdx), %r14
 876 05e1 4C89F7   		movq	%r14, %rdi
 877 05e4 E8000000 		call	_Znam
 877      00
 878              	.LVL106:
 879 05e9 48894424 		movq	%rax, 72(%rsp)
 879      48
 880              	.LVL107:
 881 05ee E9B1FBFF 		jmp	.L51
 881      FF
 882              	.LVL108:
 883              		.p2align 4,,10
 884 05f3 0F1F4400 		.p2align 3
 884      00
 885              	.L43:
 886              	.LBB204:
 887              	.LBB202:
 888              	.LBB200:
 889              	.LBB197:
 890              	.LBB196:
 891              	.LBB195:
 892              		.loc 1 325 0
 893 05f8 8D0C52   		leal	(%rdx,%rdx,2), %ecx
 894 05fb 448D7107 		leal	7(%rcx), %r14d
 895 05ff 83E908   		subl	$8, %ecx
 896 0602 410F48CE 		cmovs	%r14d, %ecx
 897 0606 C1F904   		sarl	$4, %ecx
 898 0609 66014E0A 		addw	%cx, 10(%rsi)
 899 060d 4189CF   		movl	%ecx, %r15d
 900              	.LVL109:
 901              		.loc 1 327 0
 902 0610 8D0CD500 		leal	0(,%rdx,8), %ecx
 902      000000
 903              	.LVL110:
 904 0617 29D1     		subl	%edx, %ecx
 905 0619 448D7107 		leal	7(%rcx), %r14d
 906 061d 83E908   		subl	$8, %ecx
 907 0620 410F48CE 		cmovs	%r14d, %ecx
 908 0624 C1F904   		sarl	$4, %ecx
 909 0627 66410148 		addw	%cx, 6(%r8)
 909      06
 910 062c 4189CE   		movl	%ecx, %r14d
 911              	.LVL111:
 912              		.loc 1 328 0
 913 062f 8D4A07   		leal	7(%rdx), %ecx
 914              	.LVL112:
 915 0632 83EA08   		subl	$8, %edx
 916 0635 0F48D1   		cmovs	%ecx, %edx
 917 0638 C1FA04   		sarl	$4, %edx
 918 063b 89D1     		movl	%edx, %ecx
 919              	.LVL113:
 920 063d 66895606 		movw	%dx, 6(%rsi)
 921 0641 E91AFEFF 		jmp	.L44
 921      FF
 922              	.LVL114:
 923 0646 662E0F1F 		.p2align 4,,10
 923      84000000 
 923      0000
 924              		.p2align 3
 925              	.L35:
 926              	.LBE195:
 927              	.LBE196:
 928              	.LBE197:
 929              	.LBB198:
 930              	.LBB190:
 931              	.LBB188:
 932              		.loc 1 288 0
 933 0650 8D0C52   		leal	(%rdx,%rdx,2), %ecx
 934 0653 448D7107 		leal	7(%rcx), %r14d
 935 0657 83E908   		subl	$8, %ecx
 936 065a 410F48CE 		cmovs	%r14d, %ecx
 937 065e C1F904   		sarl	$4, %ecx
 938 0661 66010E   		addw	%cx, (%rsi)
 939 0664 4189CF   		movl	%ecx, %r15d
 940              	.LVL115:
 941              		.loc 1 289 0
 942 0667 8D0CD500 		leal	0(,%rdx,8), %ecx
 942      000000
 943              	.LVL116:
 944 066e 29D1     		subl	%edx, %ecx
 945 0670 448D7107 		leal	7(%rcx), %r14d
 946 0674 83E908   		subl	$8, %ecx
 947 0677 410F48CE 		cmovs	%r14d, %ecx
 948 067b C1F904   		sarl	$4, %ecx
 949 067e 66410148 		addw	%cx, 4(%r8)
 949      04
 950 0683 4189CE   		movl	%ecx, %r14d
 951              	.LVL117:
 952              		.loc 1 290 0
 953 0686 8D4A07   		leal	7(%rdx), %ecx
 954              	.LVL118:
 955 0689 83EA08   		subl	$8, %edx
 956 068c 0F48D1   		cmovs	%ecx, %edx
 957 068f C1FA04   		sarl	$4, %edx
 958 0692 89D1     		movl	%edx, %ecx
 959              	.LVL119:
 960 0694 66895604 		movw	%dx, 4(%rsi)
 961 0698 E9D2FCFF 		jmp	.L36
 961      FF
 962              	.LBE188:
 963              	.LBE190:
 964              	.LBE198:
 965              	.LBE200:
 966              	.LBE202:
 967              	.LBE204:
 968              		.cfi_endproc
 969              	.LFE514:
 971              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii.part.5.constprop.6
 972              	.LCOLDE2:
 973              		.section	.text._ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii.part.5.constprop.6
 974              	.LHOTE2:
 975              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver9prepare85Ev,"ax",@progbits
 976              		.align 2
 977              	.LCOLDB3:
 978              		.section	.text._ZN29Fl_PostScript_Graphics_Driver9prepare85Ev,"ax",@progbits
 979              	.LHOTB3:
 980              		.align 2
 981              		.p2align 4,,15
 982              		.globl	_ZN29Fl_PostScript_Graphics_Driver9prepare85Ev
 984              	_ZN29Fl_PostScript_Graphics_Driver9prepare85Ev:
 985              	.LFB490:
 986              		.loc 1 44 0
 987              		.cfi_startproc
 988              	.LVL120:
 989 0000 4883EC08 		subq	$8, %rsp
 990              		.cfi_def_cfa_offset 16
 991              		.loc 1 45 0
 992 0004 BF140000 		movl	$20, %edi
 992      00
 993              	.LVL121:
 994 0009 E8000000 		call	_Znwm
 994      00
 995              	.LVL122:
 996              		.loc 1 46 0
 997 000e C7400400 		movl	$0, 4(%rax)
 997      000000
 998              		.loc 1 47 0
 999 0015 C7400800 		movl	$0, 8(%rax)
 999      000000
 1000              		.loc 1 49 0
 1001 001c 4883C408 		addq	$8, %rsp
 1002              		.cfi_def_cfa_offset 8
 1003 0020 C3       		ret
 1004              		.cfi_endproc
 1005              	.LFE490:
 1007              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver9prepare85Ev
 1008              	.LCOLDE3:
 1009              		.section	.text._ZN29Fl_PostScript_Graphics_Driver9prepare85Ev
 1010              	.LHOTE3:
 1011              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi,"ax",@progbits
 1012              		.align 2
 1013              	.LCOLDB4:
 1014              		.section	.text._ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi,"ax",@progbits
 1015              	.LHOTB4:
 1016              		.align 2
 1017              		.p2align 4,,15
 1018              		.globl	_ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1020              	_ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi:
 1021              	.LFB492:
 1022              		.loc 1 73 0
 1023              		.cfi_startproc
 1024              	.LVL123:
 1025 0000 4157     		pushq	%r15
 1026              		.cfi_def_cfa_offset 16
 1027              		.cfi_offset 15, -16
 1028 0002 4156     		pushq	%r14
 1029              		.cfi_def_cfa_offset 24
 1030              		.cfi_offset 14, -24
 1031 0004 4155     		pushq	%r13
 1032              		.cfi_def_cfa_offset 32
 1033              		.cfi_offset 13, -32
 1034 0006 4154     		pushq	%r12
 1035              		.cfi_def_cfa_offset 40
 1036              		.cfi_offset 12, -40
 1037 0008 55       		pushq	%rbp
 1038              		.cfi_def_cfa_offset 48
 1039              		.cfi_offset 6, -48
 1040              		.loc 1 75 0
 1041 0009 4863E9   		movslq	%ecx, %rbp
 1042              		.loc 1 73 0
 1043 000c 53       		pushq	%rbx
 1044              		.cfi_def_cfa_offset 56
 1045              		.cfi_offset 3, -56
 1046              		.loc 1 75 0
 1047 000d 4801D5   		addq	%rdx, %rbp
 1048              	.LVL124:
 1049              		.loc 1 73 0
 1050 0010 4883EC18 		subq	$24, %rsp
 1051              		.cfi_def_cfa_offset 80
 1052              		.loc 1 76 0
 1053 0014 4839EA   		cmpq	%rbp, %rdx
 1054 0017 0F83C600 		jnb	.L80
 1054      0000
 1055              	.LBB205:
 1056              		.loc 1 83 0
 1057 001d 488D460C 		leaq	12(%rsi), %rax
 1058 0021 4989FD   		movq	%rdi, %r13
 1059 0024 4989F7   		movq	%rsi, %r15
 1060 0027 4989D6   		movq	%rdx, %r14
 1061 002a 48894424 		movq	%rax, 8(%rsp)
 1061      08
 1062 002f EB10     		jmp	.L82
 1063              	.LVL125:
 1064              		.p2align 4,,10
 1065 0031 0F1F8000 		.p2align 3
 1065      000000
 1066              	.L85:
 1067              	.LBE205:
 1068              		.loc 1 76 0
 1069 0038 4C39F5   		cmpq	%r14, %rbp
 1070 003b 0F86A200 		jbe	.L80
 1070      0000
 1071              	.LVL126:
 1072              	.L82:
 1073              	.LBB208:
 1074              		.loc 1 77 0
 1075 0041 49637F04 		movslq	4(%r15), %rdi
 1076 0045 BB040000 		movl	$4, %ebx
 1076      00
 1077              		.loc 1 78 0
 1078 004a 4889E8   		movq	%rbp, %rax
 1079 004d 4C29F0   		subq	%r14, %rax
 1080              		.loc 1 77 0
 1081 0050 29FB     		subl	%edi, %ebx
 1082              	.LVL127:
 1083              		.loc 1 78 0
 1084 0052 4C63E3   		movslq	%ebx, %r12
 1085 0055 4C39E0   		cmpq	%r12, %rax
 1086 0058 7D06     		jge	.L83
 1087              		.loc 1 78 0 is_stmt 0 discriminator 1
 1088 005a 4C63E0   		movslq	%eax, %r12
 1089 005d 4C89E3   		movq	%r12, %rbx
 1090              	.LVL128:
 1091              	.L83:
 1092              	.LBB206:
 1093              	.LBB207:
 1094              		.loc 2 53 0 is_stmt 1
 1095 0060 4C01FF   		addq	%r15, %rdi
 1096              	.LVL129:
 1097 0063 4C89F6   		movq	%r14, %rsi
 1098 0066 4C89E2   		movq	%r12, %rdx
 1099 0069 E8000000 		call	memcpy
 1099      00
 1100              	.LVL130:
 1101              	.LBE207:
 1102              	.LBE206:
 1103              		.loc 1 81 0
 1104 006e 41035F04 		addl	4(%r15), %ebx
 1105              	.LVL131:
 1106              		.loc 1 80 0
 1107 0072 4D01E6   		addq	%r12, %r14
 1108              	.LVL132:
 1109              		.loc 1 82 0
 1110 0075 83FB04   		cmpl	$4, %ebx
 1111              		.loc 1 81 0
 1112 0078 41895F04 		movl	%ebx, 4(%r15)
 1113              		.loc 1 82 0
 1114 007c 75BA     		jne	.L85
 1115              		.loc 1 83 0
 1116 007e 488B5C24 		movq	8(%rsp), %rbx
 1116      08
 1117 0083 4C89FF   		movq	%r15, %rdi
 1118 0086 4889DE   		movq	%rbx, %rsi
 1119 0089 E8000000 		call	_ZL9convert85PKhPh
 1119      00
 1120              	.LVL133:
 1121              		.loc 1 84 0
 1122 008e 498B8D48 		movq	2120(%r13), %rcx
 1122      080000
 1123 0095 4863F0   		movslq	%eax, %rsi
 1124 0098 BA010000 		movl	$1, %edx
 1124      00
 1125 009d 4889DF   		movq	%rbx, %rdi
 1126 00a0 E8000000 		call	fwrite
 1126      00
 1127              	.LVL134:
 1128              		.loc 1 86 0
 1129 00a5 418B4708 		movl	8(%r15), %eax
 1130              		.loc 1 85 0
 1131 00a9 41C74704 		movl	$0, 4(%r15)
 1131      00000000 
 1132              		.loc 1 86 0
 1133 00b1 83C001   		addl	$1, %eax
 1134 00b4 83F80F   		cmpl	$15, %eax
 1135 00b7 41894708 		movl	%eax, 8(%r15)
 1136 00bb 0F8E77FF 		jle	.L85
 1136      FFFF
 1137              		.loc 1 86 0 is_stmt 0 discriminator 1
 1138 00c1 498BB548 		movq	2120(%r13), %rsi
 1138      080000
 1139 00c8 BF0A0000 		movl	$10, %edi
 1139      00
 1140 00cd E8000000 		call	fputc
 1140      00
 1141              	.LVL135:
 1142              	.LBE208:
 1143              		.loc 1 76 0 is_stmt 1 discriminator 1
 1144 00d2 4C39F5   		cmpq	%r14, %rbp
 1145              	.LBB209:
 1146              		.loc 1 86 0 discriminator 1
 1147 00d5 41C74708 		movl	$0, 8(%r15)
 1147      00000000 
 1148              	.LBE209:
 1149              		.loc 1 76 0 discriminator 1
 1150 00dd 0F875EFF 		ja	.L82
 1150      FFFF
 1151              	.LVL136:
 1152              	.L80:
 1153              		.loc 1 89 0
 1154 00e3 4883C418 		addq	$24, %rsp
 1155              		.cfi_def_cfa_offset 56
 1156 00e7 5B       		popq	%rbx
 1157              		.cfi_def_cfa_offset 48
 1158 00e8 5D       		popq	%rbp
 1159              		.cfi_def_cfa_offset 40
 1160              	.LVL137:
 1161 00e9 415C     		popq	%r12
 1162              		.cfi_def_cfa_offset 32
 1163 00eb 415D     		popq	%r13
 1164              		.cfi_def_cfa_offset 24
 1165 00ed 415E     		popq	%r14
 1166              		.cfi_def_cfa_offset 16
 1167 00ef 415F     		popq	%r15
 1168              		.cfi_def_cfa_offset 8
 1169 00f1 C3       		ret
 1170              		.cfi_endproc
 1171              	.LFE492:
 1173              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1174              	.LCOLDE4:
 1175              		.section	.text._ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1176              	.LHOTE4:
 1177              		.section	.rodata.str1.1,"aMS",@progbits,1
 1178              	.LC5:
 1179 0000 7E3E00   		.string	"~>"
 1180              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver7close85EPv,"ax",@progbits
 1181              		.align 2
 1182              	.LCOLDB6:
 1183              		.section	.text._ZN29Fl_PostScript_Graphics_Driver7close85EPv,"ax",@progbits
 1184              	.LHOTB6:
 1185              		.align 2
 1186              		.p2align 4,,15
 1187              		.globl	_ZN29Fl_PostScript_Graphics_Driver7close85EPv
 1189              	_ZN29Fl_PostScript_Graphics_Driver7close85EPv:
 1190              	.LFB493:
 1191              		.loc 1 93 0
 1192              		.cfi_startproc
 1193              	.LVL138:
 1194 0000 4156     		pushq	%r14
 1195              		.cfi_def_cfa_offset 16
 1196              		.cfi_offset 14, -16
 1197 0002 55       		pushq	%rbp
 1198              		.cfi_def_cfa_offset 24
 1199              		.cfi_offset 6, -24
 1200 0003 4889FD   		movq	%rdi, %rbp
 1201 0006 53       		pushq	%rbx
 1202              		.cfi_def_cfa_offset 32
 1203              		.cfi_offset 3, -32
 1204              		.loc 1 96 0
 1205 0007 8B4604   		movl	4(%rsi), %eax
 1206              		.loc 1 93 0
 1207 000a 4889F3   		movq	%rsi, %rbx
 1208              		.loc 1 96 0
 1209 000d 85C0     		testl	%eax, %eax
 1210 000f 7445     		je	.L88
 1211              	.LVL139:
 1212              		.loc 1 98 0 discriminator 2
 1213 0011 83F803   		cmpl	$3, %eax
 1214 0014 7F0F     		jg	.L92
 1215              	.LVL140:
 1216              	.L98:
 1217              		.loc 1 98 0 is_stmt 0 discriminator 1
 1218 0016 4863D0   		movslq	%eax, %rdx
 1219 0019 83C001   		addl	$1, %eax
 1220              	.LVL141:
 1221 001c 83F804   		cmpl	$4, %eax
 1222 001f C6041300 		movb	$0, (%rbx,%rdx)
 1223              	.LVL142:
 1224 0023 75F1     		jne	.L98
 1225              	.LVL143:
 1226              	.L92:
 1227              		.loc 1 99 0 is_stmt 1
 1228 0025 4C8D730C 		leaq	12(%rbx), %r14
 1229 0029 4889DF   		movq	%rbx, %rdi
 1230              	.LVL144:
 1231 002c 4C89F6   		movq	%r14, %rsi
 1232 002f E8000000 		call	_ZL9convert85PKhPh
 1232      00
 1233              	.LVL145:
 1234              		.loc 1 100 0
 1235 0034 83F801   		cmpl	$1, %eax
 1236 0037 7447     		je	.L103
 1237              	.L91:
 1238              		.loc 1 101 0
 1239 0039 8B4304   		movl	4(%rbx), %eax
 1240              	.LVL146:
 1241 003c 488B8D48 		movq	2120(%rbp), %rcx
 1241      080000
 1242 0043 BA010000 		movl	$1, %edx
 1242      00
 1243 0048 4C89F7   		movq	%r14, %rdi
 1244 004b 8D7001   		leal	1(%rax), %esi
 1245 004e 4863F6   		movslq	%esi, %rsi
 1246 0051 E8000000 		call	fwrite
 1246      00
 1247              	.LVL147:
 1248              	.L88:
 1249              		.loc 1 103 0
 1250 0056 488B8D48 		movq	2120(%rbp), %rcx
 1250      080000
 1251 005d BF000000 		movl	$.LC5, %edi
 1251      00
 1252 0062 BA020000 		movl	$2, %edx
 1252      00
 1253 0067 BE010000 		movl	$1, %esi
 1253      00
 1254 006c E8000000 		call	fwrite
 1254      00
 1255              	.LVL148:
 1256              		.loc 1 104 0
 1257 0071 4889DF   		movq	%rbx, %rdi
 1258              		.loc 1 105 0
 1259 0074 5B       		popq	%rbx
 1260              		.cfi_remember_state
 1261              		.cfi_def_cfa_offset 24
 1262              	.LVL149:
 1263 0075 5D       		popq	%rbp
 1264              		.cfi_def_cfa_offset 16
 1265              	.LVL150:
 1266 0076 415E     		popq	%r14
 1267              		.cfi_def_cfa_offset 8
 1268              		.loc 1 104 0
 1269 0078 E9000000 		jmp	_ZdlPv
 1269      00
 1270              	.LVL151:
 1271 007d 0F1F00   		.p2align 4,,10
 1272              		.p2align 3
 1273              	.L103:
 1274              		.cfi_restore_state
 1275              	.LBB210:
 1276              	.LBB211:
  54:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  55:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  56:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  57:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (memmove (void *__dest, const void *__src, size_t __len))
  58:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  59:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___memmove_chk (__dest, __src, __len, __bos0 (__dest));
  60:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  61:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  62:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifdef __USE_GNU
  63:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  64:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (mempcpy (void *__restrict __dest, const void *__restrict __src,
  65:/usr/include/x86_64-linux-gnu/bits/string3.h **** 		size_t __len))
  66:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  67:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___mempcpy_chk (__dest, __src, __len, __bos0 (__dest));
  68:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  69:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  70:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  71:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  72:/usr/include/x86_64-linux-gnu/bits/string3.h **** /* The first two tests here help to catch a somewhat common problem
  73:/usr/include/x86_64-linux-gnu/bits/string3.h ****    where the second and third parameter are transposed.  This is
  74:/usr/include/x86_64-linux-gnu/bits/string3.h ****    especially problematic if the intended fill value is zero.  In this
  75:/usr/include/x86_64-linux-gnu/bits/string3.h ****    case no work is done at all.  We detect these problems by referring
  76:/usr/include/x86_64-linux-gnu/bits/string3.h ****    non-existing functions.  */
  77:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  78:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (memset (void *__dest, int __ch, size_t __len))
  79:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  80:/usr/include/x86_64-linux-gnu/bits/string3.h ****   /* GCC-5.0 and newer implements these checks in the compiler, so we don't
  81:/usr/include/x86_64-linux-gnu/bits/string3.h ****      need them here.  */
  82:/usr/include/x86_64-linux-gnu/bits/string3.h **** #if !__GNUC_PREREQ (5,0)
  83:/usr/include/x86_64-linux-gnu/bits/string3.h ****   if (__builtin_constant_p (__len) && __len == 0
  84:/usr/include/x86_64-linux-gnu/bits/string3.h ****       && (!__builtin_constant_p (__ch) || __ch != 0))
  85:/usr/include/x86_64-linux-gnu/bits/string3.h ****     {
  86:/usr/include/x86_64-linux-gnu/bits/string3.h ****       __warn_memset_zero_len ();
  87:/usr/include/x86_64-linux-gnu/bits/string3.h ****       return __dest;
  88:/usr/include/x86_64-linux-gnu/bits/string3.h ****     }
  89:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
  90:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___memset_chk (__dest, __ch, __len, __bos0 (__dest));
 1277              		.loc 2 90 0 discriminator 1
 1278 0080 C7430C21 		movl	$555819297, 12(%rbx)
 1278      212121
 1279 0087 41C64604 		movb	$33, 4(%r14)
 1279      21
 1280 008c EBAB     		jmp	.L91
 1281              	.LBE211:
 1282              	.LBE210:
 1283              		.cfi_endproc
 1284              	.LFE493:
 1286              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver7close85EPv
 1287              	.LCOLDE6:
 1288              		.section	.text._ZN29Fl_PostScript_Graphics_Driver7close85EPv
 1289              	.LHOTE6:
 1290              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev,"ax",@progbits
 1291              		.align 2
 1292              	.LCOLDB7:
 1293              		.section	.text._ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev,"ax",@progbits
 1294              	.LHOTB7:
 1295              		.align 2
 1296              		.p2align 4,,15
 1297              		.globl	_ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev
 1299              	_ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev:
 1300              	.LFB494:
 1301              		.loc 1 124 0
 1302              		.cfi_startproc
 1303              	.LVL152:
 1304 0000 53       		pushq	%rbx
 1305              		.cfi_def_cfa_offset 16
 1306              		.cfi_offset 3, -16
 1307              		.loc 1 125 0
 1308 0001 BF900000 		movl	$144, %edi
 1308      00
 1309              	.LVL153:
 1310 0006 E8000000 		call	_Znwm
 1310      00
 1311              	.LVL154:
 1312              	.LBB212:
 1313              	.LBB213:
 1314              		.loc 1 45 0
 1315 000b BF140000 		movl	$20, %edi
 1315      00
 1316              	.LBE213:
 1317              	.LBE212:
 1318              		.loc 1 125 0
 1319 0010 4889C3   		movq	%rax, %rbx
 1320              	.LVL155:
 1321              		.loc 1 126 0
 1322 0013 C7808800 		movl	$0, 136(%rax)
 1322      00000000 
 1322      0000
 1323              		.loc 1 127 0
 1324 001d C7808C00 		movl	$0, 140(%rax)
 1324      00000000 
 1324      0000
 1325              	.LVL156:
 1326              	.LBB215:
 1327              	.LBB214:
 1328              		.loc 1 45 0
 1329 0027 E8000000 		call	_Znwm
 1329      00
 1330              	.LVL157:
 1331              		.loc 1 46 0
 1332 002c C7400400 		movl	$0, 4(%rax)
 1332      000000
 1333              		.loc 1 47 0
 1334 0033 C7400800 		movl	$0, 8(%rax)
 1334      000000
 1335              	.LVL158:
 1336              	.LBE214:
 1337              	.LBE215:
 1338              		.loc 1 128 0
 1339 003a 488903   		movq	%rax, (%rbx)
 1340              		.loc 1 130 0
 1341 003d 4889D8   		movq	%rbx, %rax
 1342 0040 5B       		popq	%rbx
 1343              		.cfi_def_cfa_offset 8
 1344              	.LVL159:
 1345 0041 C3       		ret
 1346              		.cfi_endproc
 1347              	.LFE494:
 1349              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev
 1350              	.LCOLDE7:
 1351              		.section	.text._ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev
 1352              	.LHOTE7:
 1353              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv,"ax",@progbits
 1354              		.align 2
 1355              	.LCOLDB8:
 1356              		.section	.text._ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv,"ax",@progbits
 1357              	.LHOTB8:
 1358              		.align 2
 1359              		.p2align 4,,15
 1360              		.globl	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 1362              	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv:
 1363              	.LFB495:
 1364              		.loc 1 134 0
 1365              		.cfi_startproc
 1366              	.LVL160:
 1367 0000 4154     		pushq	%r12
 1368              		.cfi_def_cfa_offset 16
 1369              		.cfi_offset 12, -16
 1370 0002 55       		pushq	%rbp
 1371              		.cfi_def_cfa_offset 24
 1372              		.cfi_offset 6, -24
 1373 0003 4189F4   		movl	%esi, %r12d
 1374 0006 53       		pushq	%rbx
 1375              		.cfi_def_cfa_offset 32
 1376              		.cfi_offset 3, -32
 1377 0007 4889FD   		movq	%rdi, %rbp
 1378 000a 4889D3   		movq	%rdx, %rbx
 1379 000d 4883EC10 		subq	$16, %rsp
 1380              		.cfi_def_cfa_offset 48
 1381              		.loc 1 134 0
 1382 0011 64488B04 		movq	%fs:40, %rax
 1382      25280000 
 1382      00
 1383 001a 48894424 		movq	%rax, 8(%rsp)
 1383      08
 1384 001f 31C0     		xorl	%eax, %eax
 1385              	.LVL161:
 1386              		.loc 1 137 0
 1387 0021 8B828C00 		movl	140(%rdx), %eax
 1387      0000
 1388 0027 85C0     		testl	%eax, %eax
 1389 0029 7E5B     		jle	.L107
 1390              		.loc 1 138 0
 1391 002b 40387208 		cmpb	%sil, 8(%rdx)
 1392 002f 7517     		jne	.L108
 1393 0031 83F87F   		cmpl	$127, %eax
 1394 0034 7F12     		jg	.L108
 1395              		.loc 1 139 0
 1396 0036 83C001   		addl	$1, %eax
 1397 0039 89828C00 		movl	%eax, 140(%rdx)
 1397      0000
 1398              		.loc 1 140 0
 1399 003f E9A30000 		jmp	.L106
 1399      00
 1400              		.p2align 4,,10
 1401 0044 0F1F4000 		.p2align 3
 1402              	.L108:
 1403              		.loc 1 142 0
 1404 0048 BA010000 		movl	$1, %edx
 1404      00
 1405              	.LVL162:
 1406              		.loc 1 143 0
 1407 004d 488B33   		movq	(%rbx), %rsi
 1408              	.LVL163:
 1409 0050 B9010000 		movl	$1, %ecx
 1409      00
 1410              		.loc 1 142 0
 1411 0055 29C2     		subl	%eax, %edx
 1412              		.loc 1 143 0
 1413 0057 4889EF   		movq	%rbp, %rdi
 1414              	.LVL164:
 1415              		.loc 1 142 0
 1416 005a 88542407 		movb	%dl, 7(%rsp)
 1417              		.loc 1 143 0
 1418 005e 488D5424 		leaq	7(%rsp), %rdx
 1418      07
 1419 0063 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1419      00
 1420              	.LVL165:
 1421              		.loc 1 144 0
 1422 0068 488B33   		movq	(%rbx), %rsi
 1423 006b 488D5308 		leaq	8(%rbx), %rdx
 1424 006f B9010000 		movl	$1, %ecx
 1424      00
 1425 0074 4889EF   		movq	%rbp, %rdi
 1426 0077 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1426      00
 1427              	.LVL166:
 1428              		.loc 1 145 0
 1429 007c C7838C00 		movl	$0, 140(%rbx)
 1429      00000000 
 1429      0000
 1430              	.L107:
 1431              		.loc 1 148 0
 1432 0086 48638388 		movslq	136(%rbx), %rax
 1432      000000
 1433 008d 83F801   		cmpl	$1, %eax
 1434 0090 7E6E     		jle	.L127
 1435              		.loc 1 148 0 is_stmt 0 discriminator 1
 1436 0092 8D50FF   		leal	-1(%rax), %edx
 1437 0095 4863D2   		movslq	%edx, %rdx
 1438 0098 443A6413 		cmpb	8(%rbx,%rdx), %r12b
 1438      08
 1439 009d 7469     		je	.L128
 1440              	.L112:
 1441              		.loc 1 160 0 is_stmt 1
 1442 009f 83F87F   		cmpl	$127, %eax
 1443 00a2 7E5C     		jle	.L127
 1444              		.loc 1 162 0
 1445 00a4 488B33   		movq	(%rbx), %rsi
 1446 00a7 488D5424 		leaq	7(%rsp), %rdx
 1446      07
 1447              		.loc 1 161 0
 1448 00ac 83E801   		subl	$1, %eax
 1449              		.loc 1 162 0
 1450 00af B9010000 		movl	$1, %ecx
 1450      00
 1451 00b4 4889EF   		movq	%rbp, %rdi
 1452              		.loc 1 161 0
 1453 00b7 88442407 		movb	%al, 7(%rsp)
 1454              		.loc 1 162 0
 1455 00bb E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1455      00
 1456              	.LVL167:
 1457              		.loc 1 163 0
 1458 00c0 8B8B8800 		movl	136(%rbx), %ecx
 1458      0000
 1459 00c6 488B33   		movq	(%rbx), %rsi
 1460 00c9 488D5308 		leaq	8(%rbx), %rdx
 1461 00cd 4889EF   		movq	%rbp, %rdi
 1462 00d0 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1462      00
 1463              	.LVL168:
 1464 00d5 BA010000 		movl	$1, %edx
 1464      00
 1465 00da 31C0     		xorl	%eax, %eax
 1466              	.L111:
 1467              		.loc 1 166 0
 1468 00dc 89938800 		movl	%edx, 136(%rbx)
 1468      0000
 1469 00e2 44886403 		movb	%r12b, 8(%rbx,%rax)
 1469      08
 1470              	.L106:
 1471              		.loc 1 167 0
 1472 00e7 488B4424 		movq	8(%rsp), %rax
 1472      08
 1473 00ec 64483304 		xorq	%fs:40, %rax
 1473      25280000 
 1473      00
 1474 00f5 7577     		jne	.L129
 1475 00f7 4883C410 		addq	$16, %rsp
 1476              		.cfi_remember_state
 1477              		.cfi_def_cfa_offset 32
 1478 00fb 5B       		popq	%rbx
 1479              		.cfi_def_cfa_offset 24
 1480              	.LVL169:
 1481 00fc 5D       		popq	%rbp
 1482              		.cfi_def_cfa_offset 16
 1483              	.LVL170:
 1484 00fd 415C     		popq	%r12
 1485              		.cfi_def_cfa_offset 8
 1486 00ff C3       		ret
 1487              	.LVL171:
 1488              		.p2align 4,,10
 1489              		.p2align 3
 1490              	.L127:
 1491              		.cfi_restore_state
 1492 0100 8D5001   		leal	1(%rax), %edx
 1493 0103 EBD7     		jmp	.L111
 1494              		.p2align 4,,10
 1495 0105 0F1F00   		.p2align 3
 1496              	.L128:
 1497              		.loc 1 148 0 discriminator 2
 1498 0108 8D50FE   		leal	-2(%rax), %edx
 1499 010b 4863D2   		movslq	%edx, %rdx
 1500 010e 443A6413 		cmpb	8(%rbx,%rdx), %r12b
 1500      08
 1501 0113 758A     		jne	.L112
 1502              		.loc 1 150 0
 1503 0115 83F802   		cmpl	$2, %eax
 1504 0118 751E     		jne	.L130
 1505              	.L113:
 1506              		.loc 1 155 0
 1507 011a C7838C00 		movl	$3, 140(%rbx)
 1507      00000300 
 1507      0000
 1508              		.loc 1 156 0
 1509 0124 44886308 		movb	%r12b, 8(%rbx)
 1510              		.loc 1 157 0
 1511 0128 C7838800 		movl	$0, 136(%rbx)
 1511      00000000 
 1511      0000
 1512              		.loc 1 158 0
 1513 0132 EBB3     		jmp	.L106
 1514              		.p2align 4,,10
 1515 0134 0F1F4000 		.p2align 3
 1516              	.L130:
 1517              		.loc 1 152 0
 1518 0138 488B33   		movq	(%rbx), %rsi
 1519 013b 488D5424 		leaq	7(%rsp), %rdx
 1519      07
 1520              		.loc 1 151 0
 1521 0140 83E803   		subl	$3, %eax
 1522              		.loc 1 152 0
 1523 0143 4889EF   		movq	%rbp, %rdi
 1524 0146 B9010000 		movl	$1, %ecx
 1524      00
 1525              		.loc 1 151 0
 1526 014b 88442407 		movb	%al, 7(%rsp)
 1527              		.loc 1 152 0
 1528 014f E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1528      00
 1529              	.LVL172:
 1530              		.loc 1 153 0
 1531 0154 8B838800 		movl	136(%rbx), %eax
 1531      0000
 1532 015a 488B33   		movq	(%rbx), %rsi
 1533 015d 488D5308 		leaq	8(%rbx), %rdx
 1534 0161 4889EF   		movq	%rbp, %rdi
 1535 0164 8D48FE   		leal	-2(%rax), %ecx
 1536 0167 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1536      00
 1537              	.LVL173:
 1538 016c EBAC     		jmp	.L113
 1539              	.L129:
 1540              		.loc 1 167 0
 1541 016e E8000000 		call	__stack_chk_fail
 1541      00
 1542              	.LVL174:
 1543              		.cfi_endproc
 1544              	.LFE495:
 1546              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 1547              	.LCOLDE8:
 1548              		.section	.text._ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 1549              	.LHOTE8:
 1550              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv,"ax",@progbits
 1551              		.align 2
 1552              	.LCOLDB9:
 1553              		.section	.text._ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv,"ax",@progbits
 1554              	.LHOTB9:
 1555              		.align 2
 1556              		.p2align 4,,15
 1557              		.globl	_ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv
 1559              	_ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv:
 1560              	.LFB496:
 1561              		.loc 1 171 0
 1562              		.cfi_startproc
 1563              	.LVL175:
 1564 0000 4154     		pushq	%r12
 1565              		.cfi_def_cfa_offset 16
 1566              		.cfi_offset 12, -16
 1567 0002 55       		pushq	%rbp
 1568              		.cfi_def_cfa_offset 24
 1569              		.cfi_offset 6, -24
 1570 0003 4889FD   		movq	%rdi, %rbp
 1571 0006 53       		pushq	%rbx
 1572              		.cfi_def_cfa_offset 32
 1573              		.cfi_offset 3, -32
 1574 0007 4889F3   		movq	%rsi, %rbx
 1575 000a 4883EC10 		subq	$16, %rsp
 1576              		.cfi_def_cfa_offset 48
 1577              		.loc 1 171 0
 1578 000e 64488B04 		movq	%fs:40, %rax
 1578      25280000 
 1578      00
 1579 0017 48894424 		movq	%rax, 8(%rsp)
 1579      08
 1580 001c 31C0     		xorl	%eax, %eax
 1581              	.LVL176:
 1582              		.loc 1 174 0
 1583 001e 8B868C00 		movl	140(%rsi), %eax
 1583      0000
 1584 0024 85C0     		testl	%eax, %eax
 1585 0026 0F8F8400 		jg	.L139
 1585      0000
 1586              		.loc 1 178 0
 1587 002c 8B868800 		movl	136(%rsi), %eax
 1587      0000
 1588 0032 4C8D6424 		leaq	7(%rsp), %r12
 1588      07
 1589 0037 85C0     		testl	%eax, %eax
 1590 0039 7545     		jne	.L140
 1591              	.LVL177:
 1592              	.L133:
 1593              		.loc 1 184 0
 1594 003b 488B33   		movq	(%rbx), %rsi
 1595 003e B9010000 		movl	$1, %ecx
 1595      00
 1596 0043 4C89E2   		movq	%r12, %rdx
 1597 0046 4889EF   		movq	%rbp, %rdi
 1598              		.loc 1 183 0
 1599 0049 C6442407 		movb	$-128, 7(%rsp)
 1599      80
 1600              		.loc 1 184 0
 1601 004e E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1601      00
 1602              	.LVL178:
 1603              		.loc 1 185 0
 1604 0053 488B33   		movq	(%rbx), %rsi
 1605 0056 4889EF   		movq	%rbp, %rdi
 1606 0059 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver7close85EPv
 1606      00
 1607              	.LVL179:
 1608              		.loc 1 186 0
 1609 005e 4889DF   		movq	%rbx, %rdi
 1610 0061 E8000000 		call	_ZdlPv
 1610      00
 1611              	.LVL180:
 1612              		.loc 1 187 0
 1613 0066 488B4424 		movq	8(%rsp), %rax
 1613      08
 1614 006b 64483304 		xorq	%fs:40, %rax
 1614      25280000 
 1614      00
 1615 0074 7573     		jne	.L141
 1616 0076 4883C410 		addq	$16, %rsp
 1617              		.cfi_remember_state
 1618              		.cfi_def_cfa_offset 32
 1619 007a 5B       		popq	%rbx
 1620              		.cfi_def_cfa_offset 24
 1621              	.LVL181:
 1622 007b 5D       		popq	%rbp
 1623              		.cfi_def_cfa_offset 16
 1624              	.LVL182:
 1625 007c 415C     		popq	%r12
 1626              		.cfi_def_cfa_offset 8
 1627 007e C3       		ret
 1628              	.LVL183:
 1629 007f 90       		.p2align 4,,10
 1630              		.p2align 3
 1631              	.L140:
 1632              		.cfi_restore_state
 1633              		.loc 1 180 0
 1634 0080 488B36   		movq	(%rsi), %rsi
 1635              		.loc 1 179 0
 1636 0083 83E801   		subl	$1, %eax
 1637              		.loc 1 180 0
 1638 0086 4C89E2   		movq	%r12, %rdx
 1639 0089 B9010000 		movl	$1, %ecx
 1639      00
 1640              		.loc 1 179 0
 1641 008e 88442407 		movb	%al, 7(%rsp)
 1642              		.loc 1 180 0
 1643 0092 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1643      00
 1644              	.LVL184:
 1645              		.loc 1 181 0
 1646 0097 8B8B8800 		movl	136(%rbx), %ecx
 1646      0000
 1647 009d 488B33   		movq	(%rbx), %rsi
 1648 00a0 488D5308 		leaq	8(%rbx), %rdx
 1649 00a4 4889EF   		movq	%rbp, %rdi
 1650 00a7 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1650      00
 1651              	.LVL185:
 1652 00ac EB8D     		jmp	.L133
 1653              	.LVL186:
 1654 00ae 6690     		.p2align 4,,10
 1655              		.p2align 3
 1656              	.L139:
 1657              		.loc 1 176 0
 1658 00b0 4C8D6424 		leaq	7(%rsp), %r12
 1658      07
 1659 00b5 488B36   		movq	(%rsi), %rsi
 1660              		.loc 1 175 0
 1661 00b8 BA010000 		movl	$1, %edx
 1661      00
 1662 00bd 29C2     		subl	%eax, %edx
 1663              		.loc 1 176 0
 1664 00bf B9010000 		movl	$1, %ecx
 1664      00
 1665              		.loc 1 175 0
 1666 00c4 88542407 		movb	%dl, 7(%rsp)
 1667              		.loc 1 176 0
 1668 00c8 4C89E2   		movq	%r12, %rdx
 1669 00cb E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1669      00
 1670              	.LVL187:
 1671              		.loc 1 177 0
 1672 00d0 488B33   		movq	(%rbx), %rsi
 1673 00d3 488D5308 		leaq	8(%rbx), %rdx
 1674 00d7 B9010000 		movl	$1, %ecx
 1674      00
 1675 00dc 4889EF   		movq	%rbp, %rdi
 1676 00df E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
 1676      00
 1677              	.LVL188:
 1678 00e4 E952FFFF 		jmp	.L133
 1678      FF
 1679              	.L141:
 1680              		.loc 1 187 0
 1681 00e9 E8000000 		call	__stack_chk_fail
 1681      00
 1682              	.LVL189:
 1683              		.cfi_endproc
 1684              	.LFE496:
 1686              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv
 1687              	.LCOLDE9:
 1688              		.section	.text._ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv
 1689              	.LHOTE9:
 1690              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii,"ax",@progbits
 1691              		.align 2
 1692              	.LCOLDB10:
 1693              		.section	.text._ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii,"ax",@progbits
 1694              	.LHOTB10:
 1695              		.align 2
 1696              		.p2align 4,,15
 1697              		.globl	_ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii
 1699              	_ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii:
 1700              	.LFB497:
 1701              		.loc 1 194 0
 1702              		.cfi_startproc
 1703              	.LVL190:
 1704              		.loc 1 197 0
 1705 0000 4489C0   		movl	%r8d, %eax
 1706              		.loc 1 196 0
 1707 0003 48C78710 		movq	$0, 2064(%rdi)
 1707      08000000 
 1707      000000
 1708              		.loc 1 197 0
 1709 000e C1E81F   		shrl	$31, %eax
 1710 0011 4401C0   		addl	%r8d, %eax
 1711 0014 83E0FE   		andl	$-2, %eax
 1712 0017 4139C0   		cmpl	%eax, %r8d
 1713 001a 7404     		je	.L144
 1714              		.loc 1 339 0
 1715 001c 31C0     		xorl	%eax, %eax
 1716 001e C3       		ret
 1717 001f 90       		.p2align 4,,10
 1718              		.p2align 3
 1719              	.L144:
 1720 0020 E9000000 		jmp	_ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii.part.5.constprop.6
 1720      00
 1721              	.LVL191:
 1722              		.cfi_endproc
 1723              	.LFE497:
 1725              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii
 1726              	.LCOLDE10:
 1727              		.section	.text._ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii
 1728              	.LHOTE10:
 1729              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver10draw_imageEPKhiiiiii,"ax",@progbits
 1730              		.align 2
 1731              	.LCOLDB11:
 1732              		.section	.text._ZN29Fl_PostScript_Graphics_Driver10draw_imageEPKhiiiiii,"ax",@progbits
 1733              	.LHOTB11:
 1734              		.align 2
 1735              		.p2align 4,,15
 1736              		.globl	_ZN29Fl_PostScript_Graphics_Driver10draw_imageEPKhiiiiii
 1738              	_ZN29Fl_PostScript_Graphics_Driver10draw_imageEPKhiiiiii:
 1739              	.LFB500:
 1740              		.loc 1 369 0
 1741              		.cfi_startproc
 1742              	.LVL192:
 1743 0000 4883EC28 		subq	$40, %rsp
 1744              		.cfi_def_cfa_offset 48
 1745              		.loc 1 369 0
 1746 0004 8B442430 		movl	48(%rsp), %eax
 1747 0008 448B5424 		movl	56(%rsp), %r10d
 1747      38
 1748 000d 644C8B1C 		movq	%fs:40, %r11
 1748      25280000 
 1748      00
 1749 0016 4C895C24 		movq	%r11, 24(%rsp)
 1749      18
 1750 001b 4531DB   		xorl	%r11d, %r11d
 1751              		.loc 1 370 0
 1752 001e 83F802   		cmpl	$2, %eax
 1753 0021 7E55     		jle	.L151
 1754              		.loc 1 377 0
 1755 0023 4189C3   		movl	%eax, %r11d
 1756              		.loc 1 379 0
 1757 0026 48893424 		movq	%rsi, (%rsp)
 1758              		.loc 1 380 0
 1759 002a 89442408 		movl	%eax, 8(%rsp)
 1760              		.loc 1 377 0
 1761 002e 450FAFD8 		imull	%r8d, %r11d
 1762 0032 4585D2   		testl	%r10d, %r10d
 1763              		.loc 1 383 0
 1764 0035 BE000000 		movl	$_ZL13draw_image_cbPviiiPh, %esi
 1764      00
 1765              	.LVL193:
 1766              		.loc 1 377 0
 1767 003a 450F44D3 		cmove	%r11d, %r10d
 1768              	.LVL194:
 1769              		.loc 1 381 0
 1770 003e 44895424 		movl	%r10d, 12(%rsp)
 1770      0C
 1771              		.loc 1 383 0
 1772 0043 4C8B17   		movq	(%rdi), %r10
 1773              	.LVL195:
 1774 0046 50       		pushq	%rax
 1775              		.cfi_def_cfa_offset 56
 1776              	.LVL196:
 1777 0047 4151     		pushq	%r9
 1778              		.cfi_def_cfa_offset 64
 1779 0049 4589C1   		movl	%r8d, %r9d
 1780              	.LVL197:
 1781 004c 4189C8   		movl	%ecx, %r8d
 1782              	.LVL198:
 1783 004f 89D1     		movl	%edx, %ecx
 1784              	.LVL199:
 1785 0051 488D5424 		leaq	16(%rsp), %rdx
 1785      10
 1786              	.LVL200:
 1787 0056 41FF9288 		call	*392(%r10)
 1787      010000
 1788              	.LVL201:
 1789 005d 58       		popq	%rax
 1790              		.cfi_def_cfa_offset 56
 1791 005e 5A       		popq	%rdx
 1792              		.cfi_def_cfa_offset 48
 1793              	.LVL202:
 1794              	.L145:
 1795              		.loc 1 384 0
 1796 005f 488B4424 		movq	24(%rsp), %rax
 1796      18
 1797 0064 64483304 		xorq	%fs:40, %rax
 1797      25280000 
 1797      00
 1798 006d 751A     		jne	.L152
 1799 006f 4883C428 		addq	$40, %rsp
 1800              		.cfi_remember_state
 1801              		.cfi_def_cfa_offset 8
 1802 0073 C3       		ret
 1803              	.LVL203:
 1804              		.p2align 4,,10
 1805 0074 0F1F4000 		.p2align 3
 1806              	.L151:
 1807              		.cfi_restore_state
 1808              		.loc 1 371 0
 1809 0078 4C8B1F   		movq	(%rdi), %r11
 1810 007b 4152     		pushq	%r10
 1811              		.cfi_def_cfa_offset 56
 1812 007d 50       		pushq	%rax
 1813              		.cfi_def_cfa_offset 64
 1814 007e 41FF9380 		call	*384(%r11)
 1814      010000
 1815              	.LVL204:
 1816              		.loc 1 372 0
 1817 0085 59       		popq	%rcx
 1818              		.cfi_def_cfa_offset 56
 1819 0086 5E       		popq	%rsi
 1820              		.cfi_def_cfa_offset 48
 1821 0087 EBD6     		jmp	.L145
 1822              	.LVL205:
 1823              	.L152:
 1824              		.loc 1 384 0
 1825 0089 E8000000 		call	__stack_chk_fail
 1825      00
 1826              	.LVL206:
 1827              		.cfi_endproc
 1828              	.LFE500:
 1830              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver10draw_imageEPKhiiiiii
 1831              	.LCOLDE11:
 1832              		.section	.text._ZN29Fl_PostScript_Graphics_Driver10draw_imageEPKhiiiiii
 1833              	.LHOTE11:
 1834              		.section	.rodata.str1.1
 1835              	.LC12:
 1836 0003 74727565 		.string	"true"
 1836      00
 1837              	.LC13:
 1838 0008 66616C73 		.string	"false"
 1838      6500
 1839              	.LC14:
 1840 000e 73617665 		.string	"save\n"
 1840      0A00
 1841              		.section	.rodata.str1.8,"aMS",@progbits,1
 1842              		.align 8
 1843              	.LC16:
 1844 0000 25672025 		.string	"%g %g %g %g %i %i %i %i %s CIM\n"
 1844      67202567 
 1844      20256720 
 1844      25692025 
 1844      69202569 
 1845              		.align 8
 1846              	.LC17:
 1847 0020 20256720 		.string	" %g %g %g %g %d %d pixmap_plot\n"
 1847      25672025 
 1847      67202567 
 1847      20256420 
 1847      25642070 
 1848              		.section	.rodata.str1.1
 1849              	.LC18:
 1850 0014 25672025 		.string	"%g %g %g %g %i %i %s CII\n"
 1850      67202567 
 1850      20256720 
 1850      25692025 
 1850      69202573 
 1851              	.LC19:
 1852 002e 25672025 		.string	"%g %g %g %g %i %i CI"
 1852      67202567 
 1852      20256720 
 1852      25692025 
 1852      69204349 
 1853              	.LC20:
 1854 0043 0A726573 		.string	"\nrestore\n"
 1854      746F7265 
 1854      0A00
 1855              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii,"ax",@p
 1856              		.align 2
 1857              	.LCOLDB21:
 1858              		.section	.text._ZN29Fl_PostScript_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii,"ax",@progbits
 1859              	.LHOTB21:
 1860              		.align 2
 1861              		.p2align 4,,15
 1862              		.globl	_ZN29Fl_PostScript_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 1864              	_ZN29Fl_PostScript_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii:
 1865              	.LFB501:
 1866              		.loc 1 386 0
 1867              		.cfi_startproc
 1868              	.LVL207:
 1869 0000 4157     		pushq	%r15
 1870              		.cfi_def_cfa_offset 16
 1871              		.cfi_offset 15, -16
 1872 0002 4156     		pushq	%r14
 1873              		.cfi_def_cfa_offset 24
 1874              		.cfi_offset 14, -24
 1875 0004 4155     		pushq	%r13
 1876              		.cfi_def_cfa_offset 32
 1877              		.cfi_offset 13, -32
 1878 0006 4154     		pushq	%r12
 1879              		.cfi_def_cfa_offset 40
 1880              		.cfi_offset 12, -40
 1881 0008 55       		pushq	%rbp
 1882              		.cfi_def_cfa_offset 48
 1883              		.cfi_offset 6, -48
 1884 0009 53       		pushq	%rbx
 1885              		.cfi_def_cfa_offset 56
 1886              		.cfi_offset 3, -56
 1887 000a 4889FB   		movq	%rdi, %rbx
 1888              		.loc 1 387 0
 1889 000d 660FEFC0 		pxor	%xmm0, %xmm0
 1890              		.loc 1 386 0
 1891 0011 4883EC58 		subq	$88, %rsp
 1892              		.cfi_def_cfa_offset 144
 1893              		.loc 1 387 0
 1894 0015 660FEFC9 		pxor	%xmm1, %xmm1
 1895              		.loc 1 386 0
 1896 0019 448BB424 		movl	144(%rsp), %r14d
 1896      90000000 
 1897              		.loc 1 387 0
 1898 0021 660FEFD2 		pxor	%xmm2, %xmm2
 1899 0025 660FEFE4 		pxor	%xmm4, %xmm4
 1900              		.loc 1 386 0
 1901 0029 8B842498 		movl	152(%rsp), %eax
 1901      000000
 1902              		.loc 1 387 0
 1903 0030 F20F2AC1 		cvtsi2sd	%ecx, %xmm0
 1904              	.LBB216:
 1905              	.LBB217:
 1906              		.file 3 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
   1:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** /* Checking macros for stdio functions.
   2:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    Copyright (C) 2004-2016 Free Software Foundation, Inc.
   3:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    This file is part of the GNU C Library.
   4:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
   5:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    The GNU C Library is free software; you can redistribute it and/or
   6:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    modify it under the terms of the GNU Lesser General Public
   7:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    License as published by the Free Software Foundation; either
   8:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    version 2.1 of the License, or (at your option) any later version.
   9:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  10:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    The GNU C Library is distributed in the hope that it will be useful,
  11:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  12:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  13:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    Lesser General Public License for more details.
  14:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  15:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    You should have received a copy of the GNU Lesser General Public
  16:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    License along with the GNU C Library; if not, see
  17:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****    <http://www.gnu.org/licenses/>.  */
  18:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  19:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #ifndef _STDIO_H
  20:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # error "Never include <bits/stdio2.h> directly; use <stdio.h> instead."
  21:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  22:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  23:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
  24:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  const char *__restrict __format, ...) __THROW;
  25:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
  26:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __format,
  27:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   _G_va_list __ap) __THROW;
  28:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  29:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #ifdef __va_arg_pack
  30:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  31:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (sprintf (char *__restrict __s, const char *__restrict __fmt, ...))
  32:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  33:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___sprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  __bos (__s), __fmt, __va_arg_pack ());
  35:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  36:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #elif !defined __cplusplus
  37:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # define sprintf(str, ...) \
  38:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __builtin___sprintf_chk (str, __USE_FORTIFY_LEVEL - 1, __bos (str), \
  39:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   __VA_ARGS__)
  40:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  41:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  42:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  43:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vsprintf (char *__restrict __s, const char *__restrict __fmt,
  44:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		 _G_va_list __ap))
  45:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  46:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___vsprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
  47:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				   __bos (__s), __fmt, __ap);
  48:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  49:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  50:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if defined __USE_ISOC99 || defined __USE_UNIX98
  51:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  52:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
  53:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __slen, const char *__restrict __format,
  54:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   ...) __THROW;
  55:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
  56:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    size_t __slen, const char *__restrict __format,
  57:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    _G_va_list __ap) __THROW;
  58:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  59:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __va_arg_pack
  60:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  61:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (snprintf (char *__restrict __s, size_t __n,
  62:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		 const char *__restrict __fmt, ...))
  63:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  64:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___snprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				   __bos (__s), __fmt, __va_arg_pack ());
  66:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  67:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # elif !defined __cplusplus
  68:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define snprintf(str, len, ...) \
  69:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __builtin___snprintf_chk (str, len, __USE_FORTIFY_LEVEL - 1, __bos (str), \
  70:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    __VA_ARGS__)
  71:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
  72:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  73:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  74:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vsnprintf (char *__restrict __s, size_t __n,
  75:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		  const char *__restrict __fmt, _G_va_list __ap))
  76:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  77:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___vsnprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
  78:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				    __bos (__s), __fmt, __ap);
  79:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  80:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  81:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  82:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  83:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if __USE_FORTIFY_LEVEL > 1
  84:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  85:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
  86:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  const char *__restrict __format, ...);
  87:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __printf_chk (int __flag, const char *__restrict __format, ...);
  88:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
  89:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __format, _G_va_list __ap);
  90:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vprintf_chk (int __flag, const char *__restrict __format,
  91:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  _G_va_list __ap);
  92:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  93:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __va_arg_pack
  94:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  95:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
  96:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  97:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __fprintf_chk (__stream, __USE_FORTIFY_LEVEL - 1, __fmt,
  98:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			__va_arg_pack ());
 1907              		.loc 3 98 0
 1908 0034 488BBF48 		movq	2120(%rdi), %rdi
 1908      080000
 1909              	.LVL208:
 1910              	.LBE217:
 1911              	.LBE216:
 1912              		.loc 1 387 0
 1913 003b F2410F2A 		cvtsi2sd	%r8d, %xmm1
 1913      C8
 1914              		.loc 1 386 0
 1915 0040 48897424 		movq	%rsi, 48(%rsp)
 1915      30
 1916              		.loc 1 387 0
 1917 0045 F2410F2A 		cvtsi2sd	%r9d, %xmm2
 1917      D1
 1918              		.loc 1 386 0
 1919 004a 48895424 		movq	%rdx, 56(%rsp)
 1919      38
 1920              		.loc 1 387 0
 1921 004f F2410F2A 		cvtsi2sd	%r14d, %xmm4
 1921      E6
 1922              		.loc 1 386 0
 1923 0054 89442444 		movl	%eax, 68(%rsp)
 1924              	.LBB220:
 1925              	.LBB218:
 1926              		.loc 3 98 0
 1927 0058 BA000000 		movl	$.LC14, %edx
 1927      00
 1928              	.LVL209:
 1929 005d 31C0     		xorl	%eax, %eax
 1930 005f BE010000 		movl	$1, %esi
 1930      00
 1931              	.LVL210:
 1932              	.LBE218:
 1933              	.LBE220:
 1934              		.loc 1 386 0
 1935 0064 44894C24 		movl	%r9d, 12(%rsp)
 1935      0C
 1936              		.loc 1 387 0
 1937 0069 F20F1144 		movsd	%xmm0, 40(%rsp)
 1937      2428
 1938              	.LVL211:
 1939 006f F20F114C 		movsd	%xmm1, 32(%rsp)
 1939      2420
 1940              	.LVL212:
 1941 0075 F20F1154 		movsd	%xmm2, 24(%rsp)
 1941      2418
 1942              	.LVL213:
 1943 007b F20F1164 		movsd	%xmm4, 16(%rsp)
 1943      2410
 1944              	.LVL214:
 1945              	.LBB221:
 1946              	.LBB219:
 1947              		.loc 3 98 0
 1948 0081 E8000000 		call	__fprintf_chk
 1948      00
 1949              	.LVL215:
 1950              	.LBE219:
 1951              	.LBE221:
 1952              		.loc 1 393 0
 1953 0086 8B93D806 		movl	1752(%rbx), %edx
 1953      0000
 1954 008c F20F1064 		movsd	16(%rsp), %xmm4
 1954      2410
 1955 0092 F20F1054 		movsd	24(%rsp), %xmm2
 1955      2418
 1956 0098 83FA01   		cmpl	$1, %edx
 1957 009b F20F104C 		movsd	32(%rsp), %xmm1
 1957      2420
 1958 00a1 F20F1044 		movsd	40(%rsp), %xmm0
 1958      2428
 1959 00a7 0F8E4405 		jle	.L154
 1959      0000
 1960              		.loc 1 394 0
 1961 00ad 8BB30407 		movl	1796(%rbx), %esi
 1961      0000
 1962 00b3 41B90000 		movl	$.LC12, %r9d
 1962      0000
 1963 00b9 B8000000 		movl	$.LC13, %eax
 1963      00
 1964 00be 85F6     		testl	%esi, %esi
 1965 00c0 4C0F44C8 		cmove	%rax, %r9
 1966              	.LVL216:
 1967              		.loc 1 396 0
 1968 00c4 4883BB10 		cmpq	$0, 2064(%rbx)
 1968      08000000 
 1969 00cc 0F84E201 		je	.L156
 1969      0000
 1970              		.loc 1 396 0 is_stmt 0 discriminator 1
 1971 00d2 83FA02   		cmpl	$2, %edx
 1972 00d5 0F85A104 		jne	.L198
 1972      0000
 1973              	.LVL217:
 1974              	.LBB222:
 1975              	.LBB223:
 1976              		.loc 3 98 0 is_stmt 1
 1977 00db 448B7C24 		movl	12(%rsp), %r15d
 1977      0C
 1978 00e0 488BBB48 		movq	2120(%rbx), %rdi
 1978      080000
 1979 00e7 4589F0   		movl	%r14d, %r8d
 1980 00ea 660F28DC 		movapd	%xmm4, %xmm3
 1981 00ee BA000000 		movl	$.LC17, %edx
 1981      00
 1982 00f3 BE010000 		movl	$1, %esi
 1982      00
 1983 00f8 B8040000 		movl	$4, %eax
 1983      00
 1984 00fd 4489F9   		movl	%r15d, %ecx
 1985 0100 E8000000 		call	__fprintf_chk
 1985      00
 1986              	.LVL218:
 1987              	.LBE223:
 1988              	.LBE222:
 1989              		.loc 1 411 0
 1990 0105 8B6C2444 		movl	68(%rsp), %ebp
 1991 0109 4489FF   		movl	%r15d, %edi
 1992 010c 0FAFFD   		imull	%ebp, %edi
 1993              	.LVL219:
 1994 010f 4863FF   		movslq	%edi, %rdi
 1995 0112 E8000000 		call	_Znam
 1995      00
 1996              	.LVL220:
 1997              		.loc 1 413 0
 1998 0117 4889DF   		movq	%rbx, %rdi
 1999              		.loc 1 411 0
 2000 011a 48894424 		movq	%rax, 40(%rsp)
 2000      28
 2001              	.LVL221:
 2002              		.loc 1 413 0
 2003 011f E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev
 2003      00
 2004              	.LVL222:
 2005 0124 4989C4   		movq	%rax, %r12
 2006              	.LVL223:
 2007              	.LBB224:
 2008              	.LBB225:
 2009              		.loc 1 416 0
 2010 0127 4489F0   		movl	%r14d, %eax
 2011              	.LVL224:
 2012 012a 83E801   		subl	$1, %eax
 2013              	.LVL225:
 2014 012d 89442410 		movl	%eax, 16(%rsp)
 2015              	.LVL226:
 2016 0131 0F888E04 		js	.L159
 2016      0000
 2017 0137 44897424 		movl	%r14d, 24(%rsp)
 2017      18
 2018              	.LVL227:
 2019 013c 8944240C 		movl	%eax, 12(%rsp)
 2020              	.LVL228:
 2021 0140 4C63ED   		movslq	%ebp, %r13
 2022 0143 4589FE   		movl	%r15d, %r14d
 2023              	.LVL229:
 2024              	.L163:
 2025              	.LBB226:
 2026              		.loc 1 417 0
 2027 0146 488B6C24 		movq	40(%rsp), %rbp
 2027      28
 2028 014b 31F6     		xorl	%esi, %esi
 2029 014d 4489F1   		movl	%r14d, %ecx
 2030 0150 8B54240C 		movl	12(%rsp), %edx
 2031 0154 488B7C24 		movq	56(%rsp), %rdi
 2031      38
 2032              		.loc 1 419 0
 2033 0159 4531FF   		xorl	%r15d, %r15d
 2034              		.loc 1 417 0
 2035 015c 488B4424 		movq	48(%rsp), %rax
 2035      30
 2036 0161 4989E8   		movq	%rbp, %r8
 2037 0164 FFD0     		call	*%rax
 2038              	.LVL230:
 2039              		.loc 1 419 0
 2040 0166 4585F6   		testl	%r14d, %r14d
 2041 0169 7E3E     		jle	.L164
 2042              	.LVL231:
 2043 016b 0F1F4400 		.p2align 4,,10
 2043      00
 2044              		.p2align 3
 2045              	.L193:
 2046              		.loc 1 420 0 discriminator 2
 2047 0170 0FB67500 		movzbl	0(%rbp), %esi
 2048 0174 4C89E2   		movq	%r12, %rdx
 2049 0177 4889DF   		movq	%rbx, %rdi
 2050              		.loc 1 419 0 discriminator 2
 2051 017a 4183C701 		addl	$1, %r15d
 2052              	.LVL232:
 2053              		.loc 1 420 0 discriminator 2
 2054 017e E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 2054      00
 2055              	.LVL233:
 2056 0183 0FB67501 		movzbl	1(%rbp), %esi
 2057 0187 4C89E2   		movq	%r12, %rdx
 2058 018a 4889DF   		movq	%rbx, %rdi
 2059 018d E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 2059      00
 2060              	.LVL234:
 2061 0192 0FB67502 		movzbl	2(%rbp), %esi
 2062 0196 4C89E2   		movq	%r12, %rdx
 2063 0199 4889DF   		movq	%rbx, %rdi
 2064              		.loc 1 421 0 discriminator 2
 2065 019c 4C01ED   		addq	%r13, %rbp
 2066              	.LVL235:
 2067              		.loc 1 420 0 discriminator 2
 2068 019f E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 2068      00
 2069              	.LVL236:
 2070              		.loc 1 419 0 discriminator 2
 2071 01a4 4539FE   		cmpl	%r15d, %r14d
 2072 01a7 75C7     		jne	.L193
 2073              	.LVL237:
 2074              	.L164:
 2075              	.LBE226:
 2076              		.loc 1 416 0
 2077 01a9 836C240C 		subl	$1, 12(%rsp)
 2077      01
 2078              	.LVL238:
 2079 01ae 8B44240C 		movl	12(%rsp), %eax
 2080              	.LVL239:
 2081 01b2 83F8FF   		cmpl	$-1, %eax
 2082 01b5 758F     		jne	.L163
 2083              	.LBE225:
 2084              		.loc 1 424 0
 2085 01b7 4C89E6   		movq	%r12, %rsi
 2086 01ba 4889DF   		movq	%rbx, %rdi
 2087 01bd 448B7424 		movl	24(%rsp), %r14d
 2087      18
 2088              	.LVL240:
 2089 01c2 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv
 2089      00
 2090              	.LVL241:
 2091 01c7 488BB348 		movq	2120(%rbx), %rsi
 2091      080000
 2092 01ce BF0A0000 		movl	$10, %edi
 2092      00
 2093 01d3 E8000000 		call	fputc
 2093      00
 2094              	.LVL242:
 2095              		.loc 1 425 0
 2096 01d8 4889DF   		movq	%rbx, %rdi
 2097 01db E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev
 2097      00
 2098              	.LVL243:
 2099 01e0 8B8B1808 		movl	2072(%rbx), %ecx
 2099      0000
 2100 01e6 8BB31C08 		movl	2076(%rbx), %esi
 2100      0000
 2101 01ec 4889C5   		movq	%rax, %rbp
 2102              	.LVL244:
 2103              	.L169:
 2104              		.loc 1 427 0
 2105 01ef 89F0     		movl	%esi, %eax
 2106 01f1 4189CC   		movl	%ecx, %r12d
 2107 01f4 99       		cltd
 2108 01f5 41F7FE   		idivl	%r14d
 2109 01f8 8D510E   		leal	14(%rcx), %edx
 2110 01fb 4183C407 		addl	$7, %r12d
 2111 01ff 440F48E2 		cmovs	%edx, %r12d
 2112 0203 8B542410 		movl	16(%rsp), %edx
 2113 0207 41C1FC03 		sarl	$3, %r12d
 2114 020b 0FAFD0   		imull	%eax, %edx
 2115 020e 440FAFE2 		imull	%edx, %r12d
 2116 0212 4D63E4   		movslq	%r12d, %r12
 2117 0215 4C03A310 		addq	2064(%rbx), %r12
 2117      080000
 2118              	.LVL245:
 2119              		.loc 1 428 0
 2120 021c 85C0     		testl	%eax, %eax
 2121 021e 0F8E4403 		jle	.L166
 2121      0000
 2122              		.loc 1 428 0 is_stmt 0 discriminator 3
 2123 0224 4531ED   		xorl	%r13d, %r13d
 2124              	.LVL246:
 2125 0227 660F1F84 		.p2align 4,,10
 2125      00000000 
 2125      00
 2126              		.p2align 3
 2127              	.L167:
 2128              		.loc 1 429 0 is_stmt 1 discriminator 3
 2129 0230 85C9     		testl	%ecx, %ecx
 2130 0232 4D89E7   		movq	%r12, %r15
 2131 0235 7E62     		jle	.L170
 2132              	.LVL247:
 2133 0237 660F1F84 		.p2align 4,,10
 2133      00000000 
 2133      00
 2134              		.p2align 3
 2135              	.L171:
 2136              		.loc 1 430 0 discriminator 2
 2137 0240 410FB607 		movzbl	(%r15), %eax
 2138 0244 4889DF   		movq	%rbx, %rdi
 2139              		.loc 1 431 0 discriminator 2
 2140 0247 4983C701 		addq	$1, %r15
 2141              	.LVL248:
 2142              	.LBB227:
 2143              	.LBB228:
 2144              		.loc 1 346 0 discriminator 2
 2145 024b 4889C2   		movq	%rax, %rdx
 2146 024e 48C1E804 		shrq	$4, %rax
 2147 0252 83E20F   		andl	$15, %edx
 2148 0255 83E00F   		andl	$15, %eax
 2149              	.LBE228:
 2150              	.LBE227:
 2151              		.loc 1 430 0 discriminator 2
 2152 0258 0FB6B200 		movzbl	_ZL7swapped(%rdx), %esi
 2152      000000
 2153 025f 4889EA   		movq	%rbp, %rdx
 2154 0262 C1E604   		sall	$4, %esi
 2155 0265 400AB000 		orb	_ZL7swapped(%rax), %sil
 2155      000000
 2156 026c 400FB6F6 		movzbl	%sil, %esi
 2157 0270 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 2157      00
 2158              	.LVL249:
 2159              		.loc 1 429 0 discriminator 2
 2160 0275 8B8B1808 		movl	2072(%rbx), %ecx
 2160      0000
 2161 027b 8D410E   		leal	14(%rcx), %eax
 2162 027e 89CA     		movl	%ecx, %edx
 2163 0280 83C207   		addl	$7, %edx
 2164 0283 0F49C2   		cmovns	%edx, %eax
 2165 0286 4489FA   		movl	%r15d, %edx
 2166 0289 C1F803   		sarl	$3, %eax
 2167 028c 4429E2   		subl	%r12d, %edx
 2168              	.LVL250:
 2169 028f 39D0     		cmpl	%edx, %eax
 2170 0291 7FAD     		jg	.L171
 2171 0293 8BB31C08 		movl	2076(%rbx), %esi
 2171      0000
 2172              	.LVL251:
 2173              	.L170:
 2174              		.loc 1 428 0 discriminator 2
 2175 0299 89F0     		movl	%esi, %eax
 2176 029b 4183C501 		addl	$1, %r13d
 2177              	.LVL252:
 2178 029f 99       		cltd
 2179 02a0 41F7FE   		idivl	%r14d
 2180 02a3 4439E8   		cmpl	%r13d, %eax
 2181 02a6 0F8EBC02 		jle	.L166
 2181      0000
 2182              		.loc 1 428 0 is_stmt 0
 2183 02ac 4D89FC   		movq	%r15, %r12
 2184 02af E97CFFFF 		jmp	.L167
 2184      FF
 2185              	.LVL253:
 2186              	.L156:
 2187              	.LBE224:
 2188              	.LBB229:
 2189              	.LBB230:
 2190              		.loc 3 98 0 is_stmt 1
 2191 02b4 F20F101D 		movsd	.LC15(%rip), %xmm3
 2191      00000000 
 2192 02bc F20F58CC 		addsd	%xmm4, %xmm1
 2193 02c0 488BBB48 		movq	2120(%rbx), %rdi
 2193      080000
 2194 02c7 8B4C240C 		movl	12(%rsp), %ecx
 2195 02cb 4589F0   		movl	%r14d, %r8d
 2196 02ce 660F57DC 		xorpd	%xmm4, %xmm3
 2197 02d2 BA000000 		movl	$.LC18, %edx
 2197      00
 2198 02d7 BE010000 		movl	$1, %esi
 2198      00
 2199 02dc B8040000 		movl	$4, %eax
 2199      00
 2200 02e1 E8000000 		call	__fprintf_chk
 2200      00
 2201              	.LVL254:
 2202              	.L158:
 2203              	.LBE230:
 2204              	.LBE229:
 2205              		.loc 1 411 0
 2206 02e6 8B7C240C 		movl	12(%rsp), %edi
 2207 02ea 448B7C24 		movl	68(%rsp), %r15d
 2207      44
 2208 02ef 410FAFFF 		imull	%r15d, %edi
 2209              	.LVL255:
 2210 02f3 4863FF   		movslq	%edi, %rdi
 2211 02f6 E8000000 		call	_Znam
 2211      00
 2212              	.LVL256:
 2213              		.loc 1 413 0
 2214 02fb 4889DF   		movq	%rbx, %rdi
 2215              		.loc 1 411 0
 2216 02fe 48894424 		movq	%rax, 40(%rsp)
 2216      28
 2217              	.LVL257:
 2218              		.loc 1 412 0
 2219 0303 4C8BA310 		movq	2064(%rbx), %r12
 2219      080000
 2220              	.LVL258:
 2221              		.loc 1 413 0
 2222 030a E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev
 2222      00
 2223              	.LVL259:
 2224              	.LBB231:
 2225              		.loc 1 437 0
 2226 030f 4585F6   		testl	%r14d, %r14d
 2227              	.LBE231:
 2228              		.loc 1 413 0
 2229 0312 4889C5   		movq	%rax, %rbp
 2230              	.LVL260:
 2231              	.LBB241:
 2232              		.loc 1 437 0
 2233 0315 0F8E1202 		jle	.L168
 2233      0000
 2234 031b 4963C7   		movslq	%r15d, %rax
 2235              	.LVL261:
 2236 031e 44897424 		movl	%r14d, 64(%rsp)
 2236      40
 2237 0323 C7442420 		movl	$0, 32(%rsp)
 2237      00000000 
 2238              	.LVL262:
 2239 032b 48894424 		movq	%rax, 16(%rsp)
 2239      10
 2240              	.LVL263:
 2241 0330 4C896424 		movq	%r12, 72(%rsp)
 2241      48
 2242 0335 4989DE   		movq	%rbx, %r14
 2243              	.LVL264:
 2244 0338 0F1F8400 		.p2align 4,,10
 2244      00000000 
 2245              		.p2align 3
 2246              	.L177:
 2247              	.LBB232:
 2248              		.loc 1 438 0
 2249 0340 4983BE10 		cmpq	$0, 2064(%r14)
 2249      08000000 
 2250 0348 0F84B100 		je	.L172
 2250      0000
 2251              		.loc 1 438 0 is_stmt 0 discriminator 1
 2252 034e 4183BED8 		cmpl	$2, 1752(%r14)
 2252      06000002 
 2253 0356 0F8EA300 		jle	.L172
 2253      0000
 2254              	.LVL265:
 2255              		.loc 1 439 0 is_stmt 1 discriminator 1
 2256 035c 418B8E1C 		movl	2076(%r14), %ecx
 2256      080000
 2257 0363 8B7C2440 		movl	64(%rsp), %edi
 2258 0367 89C8     		movl	%ecx, %eax
 2259 0369 99       		cltd
 2260 036a F7FF     		idivl	%edi
 2261 036c 85C0     		testl	%eax, %eax
 2262 036e 0F8E8B00 		jle	.L172
 2262      0000
 2263              		.loc 1 439 0 is_stmt 0 discriminator 3
 2264 0374 4C8B6424 		movq	72(%rsp), %r12
 2264      48
 2265 0379 4531ED   		xorl	%r13d, %r13d
 2266 037c 89FB     		movl	%edi, %ebx
 2267              	.LVL266:
 2268 037e 6690     		.p2align 4,,10
 2269              		.p2align 3
 2270              	.L175:
 2271              		.loc 1 440 0 is_stmt 1 discriminator 3
 2272 0380 418B8618 		movl	2072(%r14), %eax
 2272      080000
 2273 0387 85C0     		testl	%eax, %eax
 2274 0389 7E61     		jle	.L173
 2275              		.loc 1 440 0 is_stmt 0 discriminator 2
 2276 038b 4D89E7   		movq	%r12, %r15
 2277              	.LVL267:
 2278 038e 6690     		.p2align 4,,10
 2279              		.p2align 3
 2280              	.L174:
 2281              		.loc 1 441 0 is_stmt 1 discriminator 2
 2282 0390 410FB607 		movzbl	(%r15), %eax
 2283 0394 4C89F7   		movq	%r14, %rdi
 2284              		.loc 1 442 0 discriminator 2
 2285 0397 4983C701 		addq	$1, %r15
 2286              	.LVL268:
 2287              	.LBB233:
 2288              	.LBB234:
 2289              		.loc 1 346 0 discriminator 2
 2290 039b 4889C2   		movq	%rax, %rdx
 2291 039e 48C1E804 		shrq	$4, %rax
 2292 03a2 83E20F   		andl	$15, %edx
 2293 03a5 83E00F   		andl	$15, %eax
 2294              	.LBE234:
 2295              	.LBE233:
 2296              		.loc 1 441 0 discriminator 2
 2297 03a8 0FB6B200 		movzbl	_ZL7swapped(%rdx), %esi
 2297      000000
 2298 03af 4889EA   		movq	%rbp, %rdx
 2299 03b2 C1E604   		sall	$4, %esi
 2300 03b5 400AB000 		orb	_ZL7swapped(%rax), %sil
 2300      000000
 2301 03bc 400FB6F6 		movzbl	%sil, %esi
 2302 03c0 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 2302      00
 2303              	.LVL269:
 2304              		.loc 1 440 0 discriminator 2
 2305 03c5 418B8618 		movl	2072(%r14), %eax
 2305      080000
 2306 03cc 8D500E   		leal	14(%rax), %edx
 2307 03cf 83C007   		addl	$7, %eax
 2308 03d2 0F48C2   		cmovs	%edx, %eax
 2309 03d5 4489FA   		movl	%r15d, %edx
 2310 03d8 C1F803   		sarl	$3, %eax
 2311 03db 4429E2   		subl	%r12d, %edx
 2312              	.LVL270:
 2313 03de 39D0     		cmpl	%edx, %eax
 2314 03e0 7FAE     		jg	.L174
 2315 03e2 418B8E1C 		movl	2076(%r14), %ecx
 2315      080000
 2316              		.loc 1 442 0
 2317 03e9 4D89FC   		movq	%r15, %r12
 2318              	.LVL271:
 2319              	.L173:
 2320              		.loc 1 439 0 discriminator 2
 2321 03ec 89C8     		movl	%ecx, %eax
 2322 03ee 4183C501 		addl	$1, %r13d
 2323              	.LVL272:
 2324 03f2 99       		cltd
 2325 03f3 F7FB     		idivl	%ebx
 2326 03f5 4439E8   		cmpl	%r13d, %eax
 2327 03f8 7F86     		jg	.L175
 2328 03fa 4C896424 		movq	%r12, 72(%rsp)
 2328      48
 2329              	.LVL273:
 2330              	.L172:
 2331              		.loc 1 446 0
 2332 03ff 8B5C240C 		movl	12(%rsp), %ebx
 2333 0403 31F6     		xorl	%esi, %esi
 2334 0405 4C8B4424 		movq	40(%rsp), %r8
 2334      28
 2335 040a 8B542420 		movl	32(%rsp), %edx
 2336 040e 488B7C24 		movq	56(%rsp), %rdi
 2336      38
 2337 0413 488B4424 		movq	48(%rsp), %rax
 2337      30
 2338 0418 89D9     		movl	%ebx, %ecx
 2339 041a FFD0     		call	*%rax
 2340              	.LVL274:
 2341              	.LBB235:
 2342              		.loc 1 448 0
 2343 041c 85DB     		testl	%ebx, %ebx
 2344 041e 0F8EF300 		jle	.L179
 2344      0000
 2345 0424 837C2444 		cmpl	$3, 68(%rsp)
 2345      03
 2346 0429 4C8B6C24 		movq	40(%rsp), %r13
 2346      28
 2347 042e 4D89EC   		movq	%r13, %r12
 2348 0431 0F9F4424 		setg	24(%rsp)
 2348      18
 2349 0436 31DB     		xorl	%ebx, %ebx
 2350              	.LVL275:
 2351 0438 0F1F8400 		.p2align 4,,10
 2351      00000000 
 2352              		.p2align 3
 2353              	.L180:
 2354              	.LBB236:
 2355              	.LBB237:
 2356              		.loc 1 453 0
 2357 0440 4183BED8 		cmpl	$2, 1752(%r14)
 2357      06000002 
 2358              	.LBE237:
 2359              		.loc 1 449 0
 2360 0448 410FB614 		movzbl	(%r12), %edx
 2360      24
 2361              	.LVL276:
 2362              		.loc 1 450 0
 2363 044d 450FB66C 		movzbl	1(%r12), %r13d
 2363      2401
 2364              	.LVL277:
 2365              		.loc 1 451 0
 2366 0453 450FB67C 		movzbl	2(%r12), %r15d
 2366      2402
 2367              	.LVL278:
 2368              	.LBB239:
 2369              		.loc 1 453 0
 2370 0459 7F7E     		jg	.L178
 2371 045b 807C2418 		cmpb	$0, 24(%rsp)
 2371      00
 2372 0460 7477     		je	.L178
 2373              	.LBB238:
 2374              		.loc 1 454 0
 2375 0462 410FB67C 		movzbl	3(%r12), %edi
 2375      2403
 2376              	.LVL279:
 2377              		.loc 1 456 0
 2378 0468 450FB69E 		movzbl	2144(%r14), %r11d
 2378      60080000 
 2379              		.loc 1 455 0
 2380 0470 41BAFF00 		movl	$255, %r10d
 2380      0000
 2381              		.loc 1 458 0
 2382 0476 410FB6B6 		movzbl	2146(%r14), %esi
 2382      62080000 
 2383              		.loc 1 456 0
 2384 047e B8818080 		movl	$2155905153, %eax
 2384      80
 2385              		.loc 1 458 0
 2386 0483 450FB6CF 		movzbl	%r15b, %r9d
 2387              		.loc 1 457 0
 2388 0487 B9818080 		movl	$2155905153, %ecx
 2388      80
 2389              		.loc 1 455 0
 2390 048c 4129FA   		subl	%edi, %r10d
 2391              	.LVL280:
 2392              		.loc 1 456 0
 2393 048f 450FAFDA 		imull	%r10d, %r11d
 2394 0493 0FAFD7   		imull	%edi, %edx
 2395              	.LVL281:
 2396 0496 4401DA   		addl	%r11d, %edx
 2397              		.loc 1 457 0
 2398 0499 450FB69E 		movzbl	2145(%r14), %r11d
 2398      61080000 
 2399              		.loc 1 456 0
 2400 04a1 480FAFD0 		imulq	%rax, %rdx
 2401              		.loc 1 457 0
 2402 04a5 410FB6C5 		movzbl	%r13b, %eax
 2403 04a9 0FAFC7   		imull	%edi, %eax
 2404              		.loc 1 456 0
 2405 04ac 48C1EA27 		shrq	$39, %rdx
 2406              	.LVL282:
 2407              		.loc 1 457 0
 2408 04b0 450FAFDA 		imull	%r10d, %r11d
 2409              		.loc 1 458 0
 2410 04b4 410FAFF9 		imull	%r9d, %edi
 2411              	.LVL283:
 2412              		.loc 1 457 0
 2413 04b8 4401D8   		addl	%r11d, %eax
 2414              		.loc 1 458 0
 2415 04bb 440FAFD6 		imull	%esi, %r10d
 2416              	.LVL284:
 2417              		.loc 1 457 0
 2418 04bf 480FAFC1 		imulq	%rcx, %rax
 2419              		.loc 1 458 0
 2420 04c3 418D343A 		leal	(%r10,%rdi), %esi
 2421 04c7 480FAFF1 		imulq	%rcx, %rsi
 2422              		.loc 1 457 0
 2423 04cb 48C1E827 		shrq	$39, %rax
 2424 04cf 4989C5   		movq	%rax, %r13
 2425              	.LVL285:
 2426              		.loc 1 458 0
 2427 04d2 48C1EE27 		shrq	$39, %rsi
 2428 04d6 4989F7   		movq	%rsi, %r15
 2429              	.LVL286:
 2430              	.L178:
 2431              	.LBE238:
 2432              	.LBE239:
 2433              		.loc 1 461 0 discriminator 2
 2434 04d9 0FB6F2   		movzbl	%dl, %esi
 2435 04dc 4C89F7   		movq	%r14, %rdi
 2436 04df 4889EA   		movq	%rbp, %rdx
 2437              	.LVL287:
 2438 04e2 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 2438      00
 2439              	.LVL288:
 2440 04e7 410FB6F5 		movzbl	%r13b, %esi
 2441 04eb 4889EA   		movq	%rbp, %rdx
 2442 04ee 4C89F7   		movq	%r14, %rdi
 2443 04f1 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 2443      00
 2444              	.LVL289:
 2445 04f6 410FB6F7 		movzbl	%r15b, %esi
 2446 04fa 4889EA   		movq	%rbp, %rdx
 2447 04fd 4C89F7   		movq	%r14, %rdi
 2448 0500 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 2448      00
 2449              	.LVL290:
 2450              	.LBE236:
 2451              		.loc 1 448 0 discriminator 2
 2452 0505 83C301   		addl	$1, %ebx
 2453              	.LVL291:
 2454              	.LBB240:
 2455              		.loc 1 462 0 discriminator 2
 2456 0508 4C036424 		addq	16(%rsp), %r12
 2456      10
 2457              	.LVL292:
 2458              	.LBE240:
 2459              		.loc 1 448 0 discriminator 2
 2460 050d 395C240C 		cmpl	%ebx, 12(%rsp)
 2461 0511 0F8529FF 		jne	.L180
 2461      FFFF
 2462              	.LVL293:
 2463              	.L179:
 2464              	.LBE235:
 2465              	.LBE232:
 2466              		.loc 1 437 0
 2467 0517 83442420 		addl	$1, 32(%rsp)
 2467      01
 2468              	.LVL294:
 2469 051c 8B442420 		movl	32(%rsp), %eax
 2470              	.LVL295:
 2471 0520 39442440 		cmpl	%eax, 64(%rsp)
 2472 0524 0F8516FE 		jne	.L177
 2472      FFFF
 2473 052a 4C89F3   		movq	%r14, %rbx
 2474              	.LVL296:
 2475              	.L168:
 2476              	.LBE241:
 2477              		.loc 1 467 0
 2478 052d 4889EE   		movq	%rbp, %rsi
 2479 0530 4889DF   		movq	%rbx, %rdi
 2480 0533 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv
 2480      00
 2481              	.LVL297:
 2482              	.LBB242:
 2483              	.LBB243:
 2484              		.loc 3 98 0
 2485 0538 488BBB48 		movq	2120(%rbx), %rdi
 2485      080000
 2486 053f BA000000 		movl	$.LC20, %edx
 2486      00
 2487 0544 BE010000 		movl	$1, %esi
 2487      00
 2488 0549 31C0     		xorl	%eax, %eax
 2489 054b E8000000 		call	__fprintf_chk
 2489      00
 2490              	.LVL298:
 2491              	.LBE243:
 2492              	.LBE242:
 2493              		.loc 1 469 0
 2494 0550 488B7C24 		movq	40(%rsp), %rdi
 2494      28
 2495              		.loc 1 470 0
 2496 0555 4883C458 		addq	$88, %rsp
 2497              		.cfi_remember_state
 2498              		.cfi_def_cfa_offset 56
 2499 0559 5B       		popq	%rbx
 2500              		.cfi_def_cfa_offset 48
 2501              	.LVL299:
 2502 055a 5D       		popq	%rbp
 2503              		.cfi_def_cfa_offset 40
 2504              	.LVL300:
 2505 055b 415C     		popq	%r12
 2506              		.cfi_def_cfa_offset 32
 2507 055d 415D     		popq	%r13
 2508              		.cfi_def_cfa_offset 24
 2509 055f 415E     		popq	%r14
 2510              		.cfi_def_cfa_offset 16
 2511 0561 415F     		popq	%r15
 2512              		.cfi_def_cfa_offset 8
 2513              		.loc 1 469 0
 2514 0563 E9000000 		jmp	_ZdaPv
 2514      00
 2515              	.LVL301:
 2516              	.L166:
 2517              		.cfi_restore_state
 2518              	.LBB244:
 2519              		.loc 1 426 0
 2520 0568 836C2410 		subl	$1, 16(%rsp)
 2520      01
 2521              	.LVL302:
 2522 056d 8B442410 		movl	16(%rsp), %eax
 2523 0571 83F8FF   		cmpl	$-1, %eax
 2524 0574 0F8575FC 		jne	.L169
 2524      FFFF
 2525 057a EBB1     		jmp	.L168
 2526              	.LVL303:
 2527              	.L198:
 2528              	.LBE244:
 2529              	.LBB245:
 2530              	.LBB246:
 2531              		.loc 3 98 0
 2532 057c 488BBB48 		movq	2120(%rbx), %rdi
 2532      080000
 2533 0583 4151     		pushq	%r9
 2534              		.cfi_def_cfa_offset 152
 2535              	.LVL304:
 2536 0585 F20F58CC 		addsd	%xmm4, %xmm1
 2537 0589 8B831C08 		movl	2076(%rbx), %eax
 2537      0000
 2538 058f F20F101D 		movsd	.LC15(%rip), %xmm3
 2538      00000000 
 2539 0597 BA000000 		movl	$.LC16, %edx
 2539      00
 2540 059c 4589F0   		movl	%r14d, %r8d
 2541 059f BE010000 		movl	$1, %esi
 2541      00
 2542 05a4 660F57DC 		xorpd	%xmm4, %xmm3
 2543 05a8 50       		pushq	%rax
 2544              		.cfi_def_cfa_offset 160
 2545 05a9 8B4C241C 		movl	28(%rsp), %ecx
 2546 05ad B8040000 		movl	$4, %eax
 2546      00
 2547 05b2 448B8B18 		movl	2072(%rbx), %r9d
 2547      080000
 2548              	.LVL305:
 2549 05b9 E8000000 		call	__fprintf_chk
 2549      00
 2550              	.LVL306:
 2551 05be 5A       		popq	%rdx
 2552              		.cfi_def_cfa_offset 152
 2553 05bf 59       		popq	%rcx
 2554              		.cfi_def_cfa_offset 144
 2555 05c0 E921FDFF 		jmp	.L158
 2555      FF
 2556              	.LVL307:
 2557              	.L159:
 2558              	.LBE246:
 2559              	.LBE245:
 2560              	.LBB247:
 2561              		.loc 1 424 0
 2562 05c5 4C89E6   		movq	%r12, %rsi
 2563 05c8 4889DF   		movq	%rbx, %rdi
 2564 05cb E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv
 2564      00
 2565              	.LVL308:
 2566 05d0 488BB348 		movq	2120(%rbx), %rsi
 2566      080000
 2567 05d7 BF0A0000 		movl	$10, %edi
 2567      00
 2568 05dc E8000000 		call	fputc
 2568      00
 2569              	.LVL309:
 2570              		.loc 1 425 0
 2571 05e1 4889DF   		movq	%rbx, %rdi
 2572 05e4 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev
 2572      00
 2573              	.LVL310:
 2574 05e9 4889C5   		movq	%rax, %rbp
 2575              	.LVL311:
 2576 05ec E93CFFFF 		jmp	.L168
 2576      FF
 2577              	.LVL312:
 2578              	.L154:
 2579              	.LBE247:
 2580              	.LBB248:
 2581              	.LBB249:
 2582              		.loc 3 98 0
 2583 05f1 F20F101D 		movsd	.LC15(%rip), %xmm3
 2583      00000000 
 2584 05f9 F20F58CC 		addsd	%xmm4, %xmm1
 2585 05fd 488BBB48 		movq	2120(%rbx), %rdi
 2585      080000
 2586 0604 8B4C240C 		movl	12(%rsp), %ecx
 2587 0608 4589F0   		movl	%r14d, %r8d
 2588 060b 660F57DC 		xorpd	%xmm4, %xmm3
 2589 060f BA000000 		movl	$.LC19, %edx
 2589      00
 2590 0614 BE010000 		movl	$1, %esi
 2590      00
 2591 0619 B8040000 		movl	$4, %eax
 2591      00
 2592 061e E8000000 		call	__fprintf_chk
 2592      00
 2593              	.LVL313:
 2594 0623 E9BEFCFF 		jmp	.L158
 2594      FF
 2595              	.LBE249:
 2596              	.LBE248:
 2597              		.cfi_endproc
 2598              	.LFE501:
 2600              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 2601              	.LCOLDE21:
 2602              		.section	.text._ZN29Fl_PostScript_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 2603              	.LHOTE21:
 2604              		.section	.rodata.str1.8
 2605              		.align 8
 2606              	.LC22:
 2607 0040 25672025 		.string	"%g %g %g %g %i %i %i %i %s GIM\n"
 2607      67202567 
 2607      20256720 
 2607      25692025 
 2607      69202569 
 2608              		.section	.rodata.str1.1
 2609              	.LC23:
 2610 004d 25672025 		.string	"%g %g %g %g %i %i %s GII\n"
 2610      67202567 
 2610      20256720 
 2610      25692025 
 2610      69202573 
 2611              	.LC24:
 2612 0067 25672025 		.string	"%g %g %g %g %i %i GI"
 2612      67202567 
 2612      20256720 
 2612      25692025 
 2612      69204749 
 2613              	.LC25:
 2614 007c 72657374 		.string	"restore\n"
 2614      6F72650A 
 2614      00
 2615              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPKhiiiiii,"ax",@progbi
 2616              		.align 2
 2617              	.LCOLDB26:
 2618              		.section	.text._ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPKhiiiiii,"ax",@progbits
 2619              	.LHOTB26:
 2620              		.align 2
 2621              		.p2align 4,,15
 2622              		.globl	_ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPKhiiiiii
 2624              	_ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPKhiiiiii:
 2625              	.LFB502:
 2626              		.loc 1 472 0
 2627              		.cfi_startproc
 2628              	.LVL314:
 2629              		.loc 1 473 0
 2630 0000 660FEFC0 		pxor	%xmm0, %xmm0
 2631              		.loc 1 472 0
 2632 0004 4157     		pushq	%r15
 2633              		.cfi_def_cfa_offset 16
 2634              		.cfi_offset 15, -16
 2635              		.loc 1 473 0
 2636 0006 660FEFE4 		pxor	%xmm4, %xmm4
 2637              		.loc 1 472 0
 2638 000a 4156     		pushq	%r14
 2639              		.cfi_def_cfa_offset 24
 2640              		.cfi_offset 14, -24
 2641              		.loc 1 473 0
 2642 000c 660FEFD2 		pxor	%xmm2, %xmm2
 2643              		.loc 1 472 0
 2644 0010 4155     		pushq	%r13
 2645              		.cfi_def_cfa_offset 32
 2646              		.cfi_offset 13, -32
 2647              		.loc 1 473 0
 2648 0012 660FEFC9 		pxor	%xmm1, %xmm1
 2649              		.loc 1 472 0
 2650 0016 4154     		pushq	%r12
 2651              		.cfi_def_cfa_offset 40
 2652              		.cfi_offset 12, -40
 2653              		.loc 1 473 0
 2654 0018 F20F2AC2 		cvtsi2sd	%edx, %xmm0
 2655              		.loc 1 472 0
 2656 001c 55       		pushq	%rbp
 2657              		.cfi_def_cfa_offset 48
 2658              		.cfi_offset 6, -48
 2659              		.loc 1 473 0
 2660 001d F20F2AE1 		cvtsi2sd	%ecx, %xmm4
 2661              		.loc 1 472 0
 2662 0021 53       		pushq	%rbx
 2663              		.cfi_def_cfa_offset 56
 2664              		.cfi_offset 3, -56
 2665              		.loc 1 473 0
 2666 0022 F2410F2A 		cvtsi2sd	%r8d, %xmm2
 2666      D0
 2667              		.loc 1 472 0
 2668 0027 4989FF   		movq	%rdi, %r15
 2669              		.loc 1 473 0
 2670 002a F2410F2A 		cvtsi2sd	%r9d, %xmm1
 2670      C9
 2671              		.loc 1 472 0
 2672 002f 4883EC48 		subq	$72, %rsp
 2673              		.cfi_def_cfa_offset 128
 2674              		.loc 1 472 0
 2675 0033 8B842480 		movl	128(%rsp), %eax
 2675      000000
 2676              	.LBB250:
 2677              	.LBB251:
 2678              		.loc 3 98 0
 2679 003a 488BBF48 		movq	2120(%rdi), %rdi
 2679      080000
 2680              	.LVL315:
 2681 0041 BA000000 		movl	$.LC14, %edx
 2681      00
 2682              	.LVL316:
 2683              	.LBE251:
 2684              	.LBE250:
 2685              		.loc 1 472 0
 2686 0046 4989F6   		movq	%rsi, %r14
 2687              	.LBB255:
 2688              	.LBB252:
 2689              		.loc 3 98 0
 2690 0049 BE010000 		movl	$1, %esi
 2690      00
 2691              	.LVL317:
 2692              	.LBE252:
 2693              	.LBE255:
 2694              		.loc 1 472 0
 2695 004e 4489C3   		movl	%r8d, %ebx
 2696 0051 44894424 		movl	%r8d, 40(%rsp)
 2696      28
 2697 0056 4589CD   		movl	%r9d, %r13d
 2698 0059 448BA424 		movl	136(%rsp), %r12d
 2698      88000000 
 2699 0061 8944242C 		movl	%eax, 44(%rsp)
 2700              	.LBB256:
 2701              	.LBB253:
 2702              		.loc 3 98 0
 2703 0065 31C0     		xorl	%eax, %eax
 2704              	.LBE253:
 2705              	.LBE256:
 2706              		.loc 1 473 0
 2707 0067 F20F1144 		movsd	%xmm0, 24(%rsp)
 2707      2418
 2708              	.LVL318:
 2709 006d F20F1164 		movsd	%xmm4, 16(%rsp)
 2709      2410
 2710              	.LVL319:
 2711 0073 F20F1154 		movsd	%xmm2, 8(%rsp)
 2711      2408
 2712              	.LVL320:
 2713 0079 F20F110C 		movsd	%xmm1, (%rsp)
 2713      24
 2714              	.LVL321:
 2715              	.LBB257:
 2716              	.LBB254:
 2717              		.loc 3 98 0
 2718 007e E8000000 		call	__fprintf_chk
 2718      00
 2719              	.LVL322:
 2720              	.LBE254:
 2721              	.LBE257:
 2722              		.loc 1 480 0
 2723 0083 418B97D8 		movl	1752(%r15), %edx
 2723      060000
 2724 008a F20F100C 		movsd	(%rsp), %xmm1
 2724      24
 2725 008f F20F1054 		movsd	8(%rsp), %xmm2
 2725      2408
 2726 0095 83FA01   		cmpl	$1, %edx
 2727 0098 F20F1064 		movsd	16(%rsp), %xmm4
 2727      2410
 2728 009e F20F1044 		movsd	24(%rsp), %xmm0
 2728      2418
 2729 00a4 0F8EA102 		jle	.L200
 2729      0000
 2730              		.loc 1 482 0
 2731 00aa 418BBF04 		movl	1796(%r15), %edi
 2731      070000
 2732 00b1 41B90000 		movl	$.LC12, %r9d
 2732      0000
 2733 00b7 B8000000 		movl	$.LC13, %eax
 2733      00
 2734 00bc 85FF     		testl	%edi, %edi
 2735 00be 4C0F44C8 		cmove	%rax, %r9
 2736              	.LVL323:
 2737              		.loc 1 485 0
 2738 00c2 4983BF10 		cmpq	$0, 2064(%r15)
 2738      08000000 
 2739 00ca 7409     		je	.L202
 2740 00cc 83FA02   		cmpl	$2, %edx
 2741 00cf 0F852E02 		jne	.L235
 2741      0000
 2742              	.L202:
 2743              	.LVL324:
 2744              	.LBB258:
 2745              	.LBB259:
 2746              		.loc 3 98 0
 2747 00d5 F20F101D 		movsd	.LC15(%rip), %xmm3
 2747      00000000 
 2748 00dd 498BBF48 		movq	2120(%r15), %rdi
 2748      080000
 2749 00e4 4589E8   		movl	%r13d, %r8d
 2750 00e7 8B4C2428 		movl	40(%rsp), %ecx
 2751 00eb BA000000 		movl	$.LC23, %edx
 2751      00
 2752 00f0 BE010000 		movl	$1, %esi
 2752      00
 2753 00f5 660F57D9 		xorpd	%xmm1, %xmm3
 2754 00f9 F20F58CC 		addsd	%xmm4, %xmm1
 2755 00fd B8040000 		movl	$4, %eax
 2755      00
 2756 0102 E8000000 		call	__fprintf_chk
 2756      00
 2757              	.LVL325:
 2758              	.L203:
 2759              	.LBE259:
 2760              	.LBE258:
 2761              		.loc 1 493 0
 2762 0107 8B442428 		movl	40(%rsp), %eax
 2763              		.loc 1 496 0
 2764 010b 410FB697 		movzbl	2144(%r15), %edx
 2764      60080000 
 2765              		.loc 1 499 0
 2766 0113 4C89FF   		movq	%r15, %rdi
 2767              		.loc 1 493 0
 2768 0116 0FAF4424 		imull	44(%rsp), %eax
 2768      2C
 2769 011b 4585E4   		testl	%r12d, %r12d
 2770              		.loc 1 498 0
 2771 011e 498B9F10 		movq	2064(%r15), %rbx
 2771      080000
 2772              	.LVL326:
 2773              		.loc 1 493 0
 2774 0125 440F44E0 		cmove	%eax, %r12d
 2775              	.LVL327:
 2776              		.loc 1 496 0
 2777 0129 410FB687 		movzbl	2145(%r15), %eax
 2777      61080000 
 2778 0131 01C2     		addl	%eax, %edx
 2779 0133 410FB687 		movzbl	2146(%r15), %eax
 2779      62080000 
 2780 013b 01D0     		addl	%edx, %eax
 2781 013d BA565555 		movl	$1431655766, %edx
 2781      55
 2782 0142 F7EA     		imull	%edx
 2783 0144 891424   		movl	%edx, (%rsp)
 2784              	.LVL328:
 2785              		.loc 1 499 0
 2786 0147 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev
 2786      00
 2787              	.LVL329:
 2788 014c 4889C5   		movq	%rax, %rbp
 2789              	.LVL330:
 2790 014f 4963C4   		movslq	%r12d, %rax
 2791              	.LVL331:
 2792              	.LBB260:
 2793              		.loc 1 500 0
 2794 0152 4585ED   		testl	%r13d, %r13d
 2795 0155 48894424 		movq	%rax, 48(%rsp)
 2795      30
 2796 015a 48634424 		movslq	44(%rsp), %rax
 2796      2C
 2797 015f 4C897424 		movq	%r14, 16(%rsp)
 2797      10
 2798              	.LVL332:
 2799 0164 C7442408 		movl	$0, 8(%rsp)
 2799      00000000 
 2800              	.LVL333:
 2801 016c 48894424 		movq	%rax, 56(%rsp)
 2801      38
 2802 0171 0F8E5B01 		jle	.L211
 2802      0000
 2803 0177 44896C24 		movl	%r13d, 24(%rsp)
 2803      18
 2804              	.LVL334:
 2805 017c 0F1F4000 		.p2align 4,,10
 2806              		.p2align 3
 2807              	.L231:
 2808              	.LBB261:
 2809              		.loc 1 501 0
 2810 0180 4983BF10 		cmpq	$0, 2064(%r15)
 2810      08000000 
 2811 0188 0F849C00 		je	.L206
 2811      0000
 2812              	.LVL335:
 2813              		.loc 1 502 0 discriminator 1
 2814 018e 418BB71C 		movl	2076(%r15), %esi
 2814      080000
 2815 0195 8B4C2418 		movl	24(%rsp), %ecx
 2816 0199 89F0     		movl	%esi, %eax
 2817 019b 99       		cltd
 2818 019c F7F9     		idivl	%ecx
 2819 019e 85C0     		testl	%eax, %eax
 2820 01a0 0F8E8400 		jle	.L206
 2820      0000
 2821              		.loc 1 502 0 is_stmt 0 discriminator 3
 2822 01a6 4531E4   		xorl	%r12d, %r12d
 2823 01a9 4189CD   		movl	%ecx, %r13d
 2824              	.LVL336:
 2825 01ac 0F1F4000 		.p2align 4,,10
 2826              		.p2align 3
 2827              	.L209:
 2828              		.loc 1 503 0 is_stmt 1 discriminator 3
 2829 01b0 418B9718 		movl	2072(%r15), %edx
 2829      080000
 2830 01b7 85D2     		testl	%edx, %edx
 2831 01b9 7E60     		jle	.L207
 2832              		.loc 1 503 0 is_stmt 0 discriminator 2
 2833 01bb 4989DE   		movq	%rbx, %r14
 2834              	.LVL337:
 2835 01be 6690     		.p2align 4,,10
 2836              		.p2align 3
 2837              	.L208:
 2838              		.loc 1 504 0 is_stmt 1 discriminator 2
 2839 01c0 410FB606 		movzbl	(%r14), %eax
 2840 01c4 4C89FF   		movq	%r15, %rdi
 2841              		.loc 1 505 0 discriminator 2
 2842 01c7 4983C601 		addq	$1, %r14
 2843              	.LVL338:
 2844              	.LBB262:
 2845              	.LBB263:
 2846              		.loc 1 346 0 discriminator 2
 2847 01cb 4889C2   		movq	%rax, %rdx
 2848 01ce 48C1E804 		shrq	$4, %rax
 2849 01d2 83E20F   		andl	$15, %edx
 2850 01d5 83E00F   		andl	$15, %eax
 2851              	.LBE263:
 2852              	.LBE262:
 2853              		.loc 1 504 0 discriminator 2
 2854 01d8 0FB6B200 		movzbl	_ZL7swapped(%rdx), %esi
 2854      000000
 2855 01df 4889EA   		movq	%rbp, %rdx
 2856 01e2 C1E604   		sall	$4, %esi
 2857 01e5 400AB000 		orb	_ZL7swapped(%rax), %sil
 2857      000000
 2858 01ec 400FB6F6 		movzbl	%sil, %esi
 2859 01f0 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 2859      00
 2860              	.LVL339:
 2861              		.loc 1 503 0 discriminator 2
 2862 01f5 418B8718 		movl	2072(%r15), %eax
 2862      080000
 2863 01fc 8D500E   		leal	14(%rax), %edx
 2864 01ff 83C007   		addl	$7, %eax
 2865 0202 0F48C2   		cmovs	%edx, %eax
 2866 0205 4489F2   		movl	%r14d, %edx
 2867 0208 C1F803   		sarl	$3, %eax
 2868 020b 29DA     		subl	%ebx, %edx
 2869              	.LVL340:
 2870 020d 39D0     		cmpl	%edx, %eax
 2871 020f 7FAF     		jg	.L208
 2872 0211 418BB71C 		movl	2076(%r15), %esi
 2872      080000
 2873              		.loc 1 505 0
 2874 0218 4C89F3   		movq	%r14, %rbx
 2875              	.LVL341:
 2876              	.L207:
 2877              		.loc 1 502 0 discriminator 2
 2878 021b 89F0     		movl	%esi, %eax
 2879 021d 4183C401 		addl	$1, %r12d
 2880              	.LVL342:
 2881 0221 99       		cltd
 2882 0222 41F7FD   		idivl	%r13d
 2883 0225 4439E0   		cmpl	%r12d, %eax
 2884 0228 7F86     		jg	.L209
 2885              	.LVL343:
 2886              	.L206:
 2887 022a 837C242C 		cmpl	$1, 44(%rsp)
 2887      01
 2888              	.LBB264:
 2889              		.loc 1 510 0
 2890 022f 8B442428 		movl	40(%rsp), %eax
 2891              	.LBE264:
 2892              		.loc 1 509 0
 2893 0233 4C8B7424 		movq	16(%rsp), %r14
 2893      10
 2894              	.LVL344:
 2895 0238 410F9FC4 		setg	%r12b
 2896              	.LBB269:
 2897              		.loc 1 510 0
 2898 023c 4531ED   		xorl	%r13d, %r13d
 2899 023f 85C0     		testl	%eax, %eax
 2900 0241 7E72     		jle	.L214
 2901 0243 48895C24 		movq	%rbx, 32(%rsp)
 2901      20
 2902 0248 4C89F3   		movq	%r14, %rbx
 2903              	.LVL345:
 2904 024b 4589E6   		movl	%r12d, %r14d
 2905              	.LVL346:
 2906 024e 4589EC   		movl	%r13d, %r12d
 2907 0251 4C8B6C24 		movq	56(%rsp), %r13
 2907      38
 2908              	.LVL347:
 2909 0256 662E0F1F 		.p2align 4,,10
 2909      84000000 
 2909      0000
 2910              		.p2align 3
 2911              	.L215:
 2912              	.LBB265:
 2913              	.LBB266:
 2914              		.loc 1 512 0
 2915 0260 4183BFD8 		cmpl	$2, 1752(%r15)
 2915      06000002 
 2916              	.LBE266:
 2917              		.loc 1 511 0
 2918 0268 0FB633   		movzbl	(%rbx), %esi
 2919              	.LVL348:
 2920              	.LBB268:
 2921              		.loc 1 512 0
 2922 026b 7F26     		jg	.L213
 2923 026d 4584F6   		testb	%r14b, %r14b
 2924 0270 7421     		je	.L213
 2925              	.LBB267:
 2926              		.loc 1 514 0
 2927 0272 0FB65301 		movzbl	1(%rbx), %edx
 2928              	.LVL349:
 2929              		.loc 1 516 0
 2930 0276 BFFF0000 		movl	$255, %edi
 2930      00
 2931 027b B8818080 		movl	$2155905153, %eax
 2931      80
 2932 0280 29D7     		subl	%edx, %edi
 2933              	.LVL350:
 2934 0282 0FAF3C24 		imull	(%rsp), %edi
 2935              	.LVL351:
 2936 0286 0FAFF2   		imull	%edx, %esi
 2937              	.LVL352:
 2938 0289 01FE     		addl	%edi, %esi
 2939 028b 480FAFF0 		imulq	%rax, %rsi
 2940 028f 48C1EE27 		shrq	$39, %rsi
 2941              	.LVL353:
 2942              	.L213:
 2943              	.LBE267:
 2944              	.LBE268:
 2945              		.loc 1 518 0 discriminator 2
 2946 0293 400FB6F6 		movzbl	%sil, %esi
 2947 0297 4889EA   		movq	%rbp, %rdx
 2948 029a 4C89FF   		movq	%r15, %rdi
 2949 029d E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 2949      00
 2950              	.LVL354:
 2951              		.loc 1 519 0 discriminator 2
 2952 02a2 4C01EB   		addq	%r13, %rbx
 2953              	.LVL355:
 2954              	.LBE265:
 2955              		.loc 1 510 0 discriminator 2
 2956 02a5 4183C401 		addl	$1, %r12d
 2957              	.LVL356:
 2958 02a9 44396424 		cmpl	%r12d, 40(%rsp)
 2958      28
 2959 02ae 75B0     		jne	.L215
 2960 02b0 488B5C24 		movq	32(%rsp), %rbx
 2960      20
 2961              	.LVL357:
 2962              	.L214:
 2963              	.LBE269:
 2964              	.LBE261:
 2965              		.loc 1 500 0
 2966 02b5 83442408 		addl	$1, 8(%rsp)
 2966      01
 2967              	.LVL358:
 2968 02ba 488B7C24 		movq	48(%rsp), %rdi
 2968      30
 2969 02bf 8B442408 		movl	8(%rsp), %eax
 2970              	.LVL359:
 2971 02c3 48017C24 		addq	%rdi, 16(%rsp)
 2971      10
 2972 02c8 39442418 		cmpl	%eax, 24(%rsp)
 2973 02cc 0F85AEFE 		jne	.L231
 2973      FFFF
 2974              	.LVL360:
 2975              	.L211:
 2976              	.LBE260:
 2977              		.loc 1 523 0
 2978 02d2 4889EE   		movq	%rbp, %rsi
 2979 02d5 4C89FF   		movq	%r15, %rdi
 2980 02d8 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv
 2980      00
 2981              	.LVL361:
 2982              	.LBB270:
 2983              	.LBB271:
 2984              		.loc 3 98 0
 2985 02dd 498BBF48 		movq	2120(%r15), %rdi
 2985      080000
 2986              	.LBE271:
 2987              	.LBE270:
 2988              		.loc 1 525 0
 2989 02e4 4883C448 		addq	$72, %rsp
 2990              		.cfi_remember_state
 2991              		.cfi_def_cfa_offset 56
 2992              	.LVL362:
 2993              	.LBB274:
 2994              	.LBB272:
 2995              		.loc 3 98 0
 2996 02e8 BA000000 		movl	$.LC25, %edx
 2996      00
 2997              	.LBE272:
 2998              	.LBE274:
 2999              		.loc 1 525 0
 3000 02ed 5B       		popq	%rbx
 3001              		.cfi_def_cfa_offset 48
 3002              	.LVL363:
 3003 02ee 5D       		popq	%rbp
 3004              		.cfi_def_cfa_offset 40
 3005              	.LVL364:
 3006 02ef 415C     		popq	%r12
 3007              		.cfi_def_cfa_offset 32
 3008 02f1 415D     		popq	%r13
 3009              		.cfi_def_cfa_offset 24
 3010 02f3 415E     		popq	%r14
 3011              		.cfi_def_cfa_offset 16
 3012 02f5 415F     		popq	%r15
 3013              		.cfi_def_cfa_offset 8
 3014              	.LVL365:
 3015              	.LBB275:
 3016              	.LBB273:
 3017              		.loc 3 98 0
 3018 02f7 BE010000 		movl	$1, %esi
 3018      00
 3019 02fc 31C0     		xorl	%eax, %eax
 3020 02fe E9000000 		jmp	__fprintf_chk
 3020      00
 3021              	.LVL366:
 3022              	.L235:
 3023              		.cfi_restore_state
 3024              	.LBE273:
 3025              	.LBE275:
 3026              	.LBB276:
 3027              	.LBB277:
 3028 0303 F20F101D 		movsd	.LC15(%rip), %xmm3
 3028      00000000 
 3029 030b 418B871C 		movl	2076(%r15), %eax
 3029      080000
 3030 0312 4151     		pushq	%r9
 3031              		.cfi_def_cfa_offset 136
 3032              	.LVL367:
 3033 0314 498BBF48 		movq	2120(%r15), %rdi
 3033      080000
 3034 031b 89D9     		movl	%ebx, %ecx
 3035 031d 660F57D9 		xorpd	%xmm1, %xmm3
 3036 0321 F20F58CC 		addsd	%xmm4, %xmm1
 3037 0325 458B8F18 		movl	2072(%r15), %r9d
 3037      080000
 3038              	.LVL368:
 3039 032c 50       		pushq	%rax
 3040              		.cfi_def_cfa_offset 144
 3041              	.LVL369:
 3042 032d BE010000 		movl	$1, %esi
 3042      00
 3043 0332 4589E8   		movl	%r13d, %r8d
 3044 0335 BA000000 		movl	$.LC22, %edx
 3044      00
 3045 033a B8040000 		movl	$4, %eax
 3045      00
 3046 033f E8000000 		call	__fprintf_chk
 3046      00
 3047              	.LVL370:
 3048 0344 59       		popq	%rcx
 3049              		.cfi_def_cfa_offset 136
 3050 0345 5E       		popq	%rsi
 3051              		.cfi_def_cfa_offset 128
 3052              	.LVL371:
 3053 0346 E9BCFDFF 		jmp	.L203
 3053      FF
 3054              	.LVL372:
 3055              	.L200:
 3056              	.LBE277:
 3057              	.LBE276:
 3058              	.LBB278:
 3059              	.LBB279:
 3060 034b F20F101D 		movsd	.LC15(%rip), %xmm3
 3060      00000000 
 3061 0353 498BBF48 		movq	2120(%r15), %rdi
 3061      080000
 3062 035a 8B4C2428 		movl	40(%rsp), %ecx
 3063 035e 4589E8   		movl	%r13d, %r8d
 3064 0361 BA000000 		movl	$.LC24, %edx
 3064      00
 3065 0366 660F57D9 		xorpd	%xmm1, %xmm3
 3066 036a F20F58CC 		addsd	%xmm4, %xmm1
 3067 036e BE010000 		movl	$1, %esi
 3067      00
 3068 0373 B8040000 		movl	$4, %eax
 3068      00
 3069 0378 E8000000 		call	__fprintf_chk
 3069      00
 3070              	.LVL373:
 3071 037d E985FDFF 		jmp	.L203
 3071      FF
 3072              	.LBE279:
 3073              	.LBE278:
 3074              		.cfi_endproc
 3075              	.LFE502:
 3077              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPKhiiiiii
 3078              	.LCOLDE26:
 3079              		.section	.text._ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPKhiiiiii
 3080              	.LHOTE26:
 3081              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii,"a
 3082              		.align 2
 3083              	.LCOLDB27:
 3084              		.section	.text._ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii,"ax",@progb
 3085              	.LHOTB27:
 3086              		.align 2
 3087              		.p2align 4,,15
 3088              		.globl	_ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
 3090              	_ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii:
 3091              	.LFB503:
 3092              		.loc 1 529 0
 3093              		.cfi_startproc
 3094              	.LVL374:
 3095 0000 4157     		pushq	%r15
 3096              		.cfi_def_cfa_offset 16
 3097              		.cfi_offset 15, -16
 3098 0002 4156     		pushq	%r14
 3099              		.cfi_def_cfa_offset 24
 3100              		.cfi_offset 14, -24
 3101 0004 4989FE   		movq	%rdi, %r14
 3102 0007 4155     		pushq	%r13
 3103              		.cfi_def_cfa_offset 32
 3104              		.cfi_offset 13, -32
 3105 0009 4154     		pushq	%r12
 3106              		.cfi_def_cfa_offset 40
 3107              		.cfi_offset 12, -40
 3108 000b 4589CD   		movl	%r9d, %r13d
 3109 000e 55       		pushq	%rbp
 3110              		.cfi_def_cfa_offset 48
 3111              		.cfi_offset 6, -48
 3112 000f 53       		pushq	%rbx
 3113              		.cfi_def_cfa_offset 56
 3114              		.cfi_offset 3, -56
 3115              		.loc 1 530 0
 3116 0010 660FEFC0 		pxor	%xmm0, %xmm0
 3117              		.loc 1 529 0
 3118 0014 4883EC48 		subq	$72, %rsp
 3119              		.cfi_def_cfa_offset 128
 3120              		.loc 1 530 0
 3121 0018 660FEFE4 		pxor	%xmm4, %xmm4
 3122              		.loc 1 529 0
 3123 001c 8B842480 		movl	128(%rsp), %eax
 3123      000000
 3124              		.loc 1 530 0
 3125 0023 660FEFD2 		pxor	%xmm2, %xmm2
 3126 0027 660FEFC9 		pxor	%xmm1, %xmm1
 3127              	.LBB280:
 3128              	.LBB281:
 3129              		.loc 3 98 0
 3130 002b 488BBF48 		movq	2120(%rdi), %rdi
 3130      080000
 3131              	.LVL375:
 3132              	.LBE281:
 3133              	.LBE280:
 3134              		.loc 1 530 0
 3135 0032 F20F2AC1 		cvtsi2sd	%ecx, %xmm0
 3136              		.loc 1 529 0
 3137 0036 48897424 		movq	%rsi, 40(%rsp)
 3137      28
 3138              		.loc 1 530 0
 3139 003b F2410F2A 		cvtsi2sd	%r8d, %xmm4
 3139      E0
 3140              		.loc 1 529 0
 3141 0040 48895424 		movq	%rdx, 48(%rsp)
 3141      30
 3142              		.loc 1 530 0
 3143 0045 F20F2AC8 		cvtsi2sd	%eax, %xmm1
 3144              		.loc 1 529 0
 3145 0049 89442414 		movl	%eax, 20(%rsp)
 3146              		.loc 1 530 0
 3147 004d F2410F2A 		cvtsi2sd	%r9d, %xmm2
 3147      D1
 3148              	.LBB285:
 3149              	.LBB282:
 3150              		.loc 3 98 0
 3151 0052 BA000000 		movl	$.LC14, %edx
 3151      00
 3152              	.LVL376:
 3153              	.LBE282:
 3154              	.LBE285:
 3155              		.loc 1 529 0
 3156 0057 89C3     		movl	%eax, %ebx
 3157              	.LBB286:
 3158              	.LBB283:
 3159              		.loc 3 98 0
 3160 0059 BE010000 		movl	$1, %esi
 3160      00
 3161              	.LVL377:
 3162 005e 31C0     		xorl	%eax, %eax
 3163              	.LBE283:
 3164              	.LBE286:
 3165              		.loc 1 529 0
 3166 0060 448BBC24 		movl	136(%rsp), %r15d
 3166      88000000 
 3167              		.loc 1 530 0
 3168 0068 F20F1144 		movsd	%xmm0, 56(%rsp)
 3168      2438
 3169              	.LVL378:
 3170 006e F20F1164 		movsd	%xmm4, 32(%rsp)
 3170      2420
 3171              	.LVL379:
 3172 0074 F20F114C 		movsd	%xmm1, 8(%rsp)
 3172      2408
 3173 007a F20F1154 		movsd	%xmm2, 24(%rsp)
 3173      2418
 3174              	.LVL380:
 3175              	.LBB287:
 3176              	.LBB284:
 3177              		.loc 3 98 0
 3178 0080 E8000000 		call	__fprintf_chk
 3178      00
 3179              	.LVL381:
 3180              	.LBE284:
 3181              	.LBE287:
 3182              		.loc 1 535 0
 3183 0085 418B96D8 		movl	1752(%r14), %edx
 3183      060000
 3184 008c F20F104C 		movsd	8(%rsp), %xmm1
 3184      2408
 3185 0092 F20F1054 		movsd	24(%rsp), %xmm2
 3185      2418
 3186 0098 83FA01   		cmpl	$1, %edx
 3187 009b F20F1064 		movsd	32(%rsp), %xmm4
 3187      2420
 3188 00a1 F20F1044 		movsd	56(%rsp), %xmm0
 3188      2438
 3189 00a7 0F8E3F02 		jle	.L237
 3189      0000
 3190              		.loc 1 536 0
 3191 00ad 418BBE04 		movl	1796(%r14), %edi
 3191      070000
 3192 00b4 41B90000 		movl	$.LC12, %r9d
 3192      0000
 3193 00ba B8000000 		movl	$.LC13, %eax
 3193      00
 3194 00bf 85FF     		testl	%edi, %edi
 3195 00c1 4C0F44C8 		cmove	%rax, %r9
 3196              	.LVL382:
 3197              		.loc 1 538 0
 3198 00c5 4983BE10 		cmpq	$0, 2064(%r14)
 3198      08000000 
 3199 00cd 7409     		je	.L239
 3200 00cf 83FA02   		cmpl	$2, %edx
 3201 00d2 0F85CB01 		jne	.L263
 3201      0000
 3202              	.L239:
 3203              	.LVL383:
 3204              	.LBB288:
 3205              	.LBB289:
 3206              		.loc 3 98 0
 3207 00d8 F20F101D 		movsd	.LC15(%rip), %xmm3
 3207      00000000 
 3208 00e0 498BBE48 		movq	2120(%r14), %rdi
 3208      080000
 3209 00e7 4489E9   		movl	%r13d, %ecx
 3210 00ea 448B4424 		movl	20(%rsp), %r8d
 3210      14
 3211 00ef BA000000 		movl	$.LC23, %edx
 3211      00
 3212 00f4 BE010000 		movl	$1, %esi
 3212      00
 3213 00f9 660F57D9 		xorpd	%xmm1, %xmm3
 3214 00fd F20F58CC 		addsd	%xmm4, %xmm1
 3215 0101 B8040000 		movl	$4, %eax
 3215      00
 3216 0106 E8000000 		call	__fprintf_chk
 3216      00
 3217              	.LVL384:
 3218              	.L240:
 3219              	.LBE289:
 3220              	.LBE288:
 3221              		.loc 1 546 0
 3222 010b 4489EF   		movl	%r13d, %edi
 3223 010e 410FAFFF 		imull	%r15d, %edi
 3224              	.LVL385:
 3225 0112 4863FF   		movslq	%edi, %rdi
 3226 0115 E8000000 		call	_Znam
 3226      00
 3227              	.LVL386:
 3228              		.loc 1 548 0
 3229 011a 4C89F7   		movq	%r14, %rdi
 3230              		.loc 1 546 0
 3231 011d 48894424 		movq	%rax, 32(%rsp)
 3231      20
 3232              	.LVL387:
 3233              		.loc 1 547 0
 3234 0122 498BAE10 		movq	2064(%r14), %rbp
 3234      080000
 3235              	.LVL388:
 3236              		.loc 1 548 0
 3237 0129 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev
 3237      00
 3238              	.LVL389:
 3239              	.LBB290:
 3240              		.loc 1 549 0
 3241 012e 8B542414 		movl	20(%rsp), %edx
 3242              	.LBE290:
 3243              		.loc 1 548 0
 3244 0132 4889C3   		movq	%rax, %rbx
 3245              	.LVL390:
 3246 0135 4963C7   		movslq	%r15d, %rax
 3247              	.LVL391:
 3248              	.LBB294:
 3249              		.loc 1 549 0
 3250 0138 C7442418 		movl	$0, 24(%rsp)
 3250      00000000 
 3251              	.LVL392:
 3252 0140 48894424 		movq	%rax, 8(%rsp)
 3252      08
 3253              	.LVL393:
 3254 0145 85D2     		testl	%edx, %edx
 3255 0147 0F8E1B01 		jle	.L247
 3255      0000
 3256              	.LVL394:
 3257 014d 0F1F00   		.p2align 4,,10
 3258              		.p2align 3
 3259              	.L261:
 3260              	.LBB291:
 3261              		.loc 1 551 0
 3262 0150 4983BE10 		cmpq	$0, 2064(%r14)
 3262      08000000 
 3263 0158 0F84B100 		je	.L242
 3263      0000
 3264              		.loc 1 551 0 is_stmt 0 discriminator 1
 3265 015e 4183BED8 		cmpl	$2, 1752(%r14)
 3265      06000002 
 3266 0166 0F8EA300 		jle	.L242
 3266      0000
 3267              	.LVL395:
 3268              		.loc 1 552 0 is_stmt 1 discriminator 1
 3269 016c 418B8E1C 		movl	2076(%r14), %ecx
 3269      080000
 3270 0173 89C8     		movl	%ecx, %eax
 3271 0175 99       		cltd
 3272 0176 F77C2414 		idivl	20(%rsp)
 3273 017a 85C0     		testl	%eax, %eax
 3274 017c 0F8E8D00 		jle	.L242
 3274      0000
 3275              		.loc 1 552 0 is_stmt 0 discriminator 3
 3276 0182 4531E4   		xorl	%r12d, %r12d
 3277              	.LVL396:
 3278              		.p2align 4,,10
 3279 0185 0F1F00   		.p2align 3
 3280              	.L245:
 3281              		.loc 1 553 0 is_stmt 1 discriminator 3
 3282 0188 418B8618 		movl	2072(%r14), %eax
 3282      080000
 3283 018f 85C0     		testl	%eax, %eax
 3284 0191 7E68     		jle	.L243
 3285              		.loc 1 553 0 is_stmt 0 discriminator 2
 3286 0193 4989EF   		movq	%rbp, %r15
 3287              	.LVL397:
 3288 0196 662E0F1F 		.p2align 4,,10
 3288      84000000 
 3288      0000
 3289              		.p2align 3
 3290              	.L244:
 3291              		.loc 1 554 0 is_stmt 1 discriminator 2
 3292 01a0 410FB617 		movzbl	(%r15), %edx
 3293 01a4 4C89F7   		movq	%r14, %rdi
 3294              		.loc 1 555 0 discriminator 2
 3295 01a7 4983C701 		addq	$1, %r15
 3296              	.LVL398:
 3297              	.LBB292:
 3298              	.LBB293:
 3299              		.loc 1 346 0 discriminator 2
 3300 01ab 4889D1   		movq	%rdx, %rcx
 3301 01ae 48C1EA04 		shrq	$4, %rdx
 3302 01b2 83E10F   		andl	$15, %ecx
 3303 01b5 83E20F   		andl	$15, %edx
 3304              	.LBE293:
 3305              	.LBE292:
 3306              		.loc 1 554 0 discriminator 2
 3307 01b8 0FB6B100 		movzbl	_ZL7swapped(%rcx), %esi
 3307      000000
 3308 01bf C1E604   		sall	$4, %esi
 3309 01c2 400AB200 		orb	_ZL7swapped(%rdx), %sil
 3309      000000
 3310 01c9 4889DA   		movq	%rbx, %rdx
 3311 01cc 400FB6F6 		movzbl	%sil, %esi
 3312 01d0 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 3312      00
 3313              	.LVL399:
 3314              		.loc 1 553 0 discriminator 2
 3315 01d5 418B9618 		movl	2072(%r14), %edx
 3315      080000
 3316 01dc 8D4A0E   		leal	14(%rdx), %ecx
 3317 01df 83C207   		addl	$7, %edx
 3318 01e2 0F48D1   		cmovs	%ecx, %edx
 3319 01e5 4489F9   		movl	%r15d, %ecx
 3320 01e8 C1FA03   		sarl	$3, %edx
 3321 01eb 29E9     		subl	%ebp, %ecx
 3322              	.LVL400:
 3323 01ed 39CA     		cmpl	%ecx, %edx
 3324 01ef 7FAF     		jg	.L244
 3325 01f1 418B8E1C 		movl	2076(%r14), %ecx
 3325      080000
 3326              	.LVL401:
 3327              		.loc 1 555 0
 3328 01f8 4C89FD   		movq	%r15, %rbp
 3329              	.LVL402:
 3330              	.L243:
 3331              		.loc 1 552 0 discriminator 2
 3332 01fb 89C8     		movl	%ecx, %eax
 3333 01fd 4183C401 		addl	$1, %r12d
 3334              	.LVL403:
 3335 0201 99       		cltd
 3336 0202 F77C2414 		idivl	20(%rsp)
 3337 0206 4439E0   		cmpl	%r12d, %eax
 3338 0209 0F8F79FF 		jg	.L245
 3338      FFFF
 3339              	.LVL404:
 3340              	.L242:
 3341              		.loc 1 559 0
 3342 020f 4C8B7C24 		movq	32(%rsp), %r15
 3342      20
 3343 0214 31F6     		xorl	%esi, %esi
 3344 0216 4489E9   		movl	%r13d, %ecx
 3345 0219 8B542418 		movl	24(%rsp), %edx
 3346 021d 488B7C24 		movq	48(%rsp), %rdi
 3346      30
 3347              		.loc 1 561 0
 3348 0222 4531E4   		xorl	%r12d, %r12d
 3349              		.loc 1 559 0
 3350 0225 488B4424 		movq	40(%rsp), %rax
 3350      28
 3351 022a 4D89F8   		movq	%r15, %r8
 3352 022d FFD0     		call	*%rax
 3353              	.LVL405:
 3354              		.loc 1 561 0
 3355 022f 4585ED   		testl	%r13d, %r13d
 3356 0232 7E21     		jle	.L249
 3357              	.LVL406:
 3358              		.p2align 4,,10
 3359 0234 0F1F4000 		.p2align 3
 3360              	.L258:
 3361              		.loc 1 562 0 discriminator 2
 3362 0238 410FB637 		movzbl	(%r15), %esi
 3363 023c 4889DA   		movq	%rbx, %rdx
 3364 023f 4C89F7   		movq	%r14, %rdi
 3365              		.loc 1 561 0 discriminator 2
 3366 0242 4183C401 		addl	$1, %r12d
 3367              	.LVL407:
 3368              		.loc 1 562 0 discriminator 2
 3369 0246 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 3369      00
 3370              	.LVL408:
 3371              		.loc 1 563 0 discriminator 2
 3372 024b 4C037C24 		addq	8(%rsp), %r15
 3372      08
 3373              	.LVL409:
 3374              		.loc 1 561 0 discriminator 2
 3375 0250 4539E5   		cmpl	%r12d, %r13d
 3376 0253 75E3     		jne	.L258
 3377              	.LVL410:
 3378              	.L249:
 3379              	.LBE291:
 3380              		.loc 1 549 0
 3381 0255 83442418 		addl	$1, 24(%rsp)
 3381      01
 3382              	.LVL411:
 3383 025a 8B442418 		movl	24(%rsp), %eax
 3384              	.LVL412:
 3385 025e 39442414 		cmpl	%eax, 20(%rsp)
 3386 0262 0F85E8FE 		jne	.L261
 3386      FFFF
 3387              	.LVL413:
 3388              	.L247:
 3389              	.LBE294:
 3390              		.loc 1 566 0
 3391 0268 4889DE   		movq	%rbx, %rsi
 3392 026b 4C89F7   		movq	%r14, %rdi
 3393 026e E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv
 3393      00
 3394              	.LVL414:
 3395              	.LBB295:
 3396              	.LBB296:
 3397              		.loc 3 98 0
 3398 0273 498BBE48 		movq	2120(%r14), %rdi
 3398      080000
 3399 027a BA000000 		movl	$.LC25, %edx
 3399      00
 3400 027f BE010000 		movl	$1, %esi
 3400      00
 3401 0284 31C0     		xorl	%eax, %eax
 3402 0286 E8000000 		call	__fprintf_chk
 3402      00
 3403              	.LVL415:
 3404              	.LBE296:
 3405              	.LBE295:
 3406              		.loc 1 568 0
 3407 028b 488B7C24 		movq	32(%rsp), %rdi
 3407      20
 3408              		.loc 1 569 0
 3409 0290 4883C448 		addq	$72, %rsp
 3410              		.cfi_remember_state
 3411              		.cfi_def_cfa_offset 56
 3412 0294 5B       		popq	%rbx
 3413              		.cfi_def_cfa_offset 48
 3414              	.LVL416:
 3415 0295 5D       		popq	%rbp
 3416              		.cfi_def_cfa_offset 40
 3417              	.LVL417:
 3418 0296 415C     		popq	%r12
 3419              		.cfi_def_cfa_offset 32
 3420 0298 415D     		popq	%r13
 3421              		.cfi_def_cfa_offset 24
 3422              	.LVL418:
 3423 029a 415E     		popq	%r14
 3424              		.cfi_def_cfa_offset 16
 3425              	.LVL419:
 3426 029c 415F     		popq	%r15
 3427              		.cfi_def_cfa_offset 8
 3428              		.loc 1 568 0
 3429 029e E9000000 		jmp	_ZdaPv
 3429      00
 3430              	.LVL420:
 3431              	.L263:
 3432              		.cfi_restore_state
 3433              	.LBB297:
 3434              	.LBB298:
 3435              		.loc 3 98 0
 3436 02a3 F20F101D 		movsd	.LC15(%rip), %xmm3
 3436      00000000 
 3437 02ab 418B861C 		movl	2076(%r14), %eax
 3437      080000
 3438 02b2 4151     		pushq	%r9
 3439              		.cfi_def_cfa_offset 136
 3440              	.LVL421:
 3441 02b4 498BBE48 		movq	2120(%r14), %rdi
 3441      080000
 3442 02bb 4489E9   		movl	%r13d, %ecx
 3443 02be 660F57D9 		xorpd	%xmm1, %xmm3
 3444 02c2 F20F58CC 		addsd	%xmm4, %xmm1
 3445 02c6 458B8E18 		movl	2072(%r14), %r9d
 3445      080000
 3446              	.LVL422:
 3447 02cd 50       		pushq	%rax
 3448              		.cfi_def_cfa_offset 144
 3449              	.LVL423:
 3450 02ce BE010000 		movl	$1, %esi
 3450      00
 3451 02d3 4189D8   		movl	%ebx, %r8d
 3452 02d6 BA000000 		movl	$.LC22, %edx
 3452      00
 3453 02db B8040000 		movl	$4, %eax
 3453      00
 3454 02e0 E8000000 		call	__fprintf_chk
 3454      00
 3455              	.LVL424:
 3456 02e5 59       		popq	%rcx
 3457              		.cfi_def_cfa_offset 136
 3458 02e6 5E       		popq	%rsi
 3459              		.cfi_def_cfa_offset 128
 3460 02e7 E91FFEFF 		jmp	.L240
 3460      FF
 3461              	.LVL425:
 3462              	.L237:
 3463              	.LBE298:
 3464              	.LBE297:
 3465              	.LBB299:
 3466              	.LBB300:
 3467 02ec F20F101D 		movsd	.LC15(%rip), %xmm3
 3467      00000000 
 3468 02f4 498BBE48 		movq	2120(%r14), %rdi
 3468      080000
 3469 02fb 448B4424 		movl	20(%rsp), %r8d
 3469      14
 3470 0300 4489E9   		movl	%r13d, %ecx
 3471 0303 BA000000 		movl	$.LC24, %edx
 3471      00
 3472 0308 660F57D9 		xorpd	%xmm1, %xmm3
 3473 030c F20F58CC 		addsd	%xmm4, %xmm1
 3474 0310 BE010000 		movl	$1, %esi
 3474      00
 3475 0315 B8040000 		movl	$4, %eax
 3475      00
 3476 031a E8000000 		call	__fprintf_chk
 3476      00
 3477              	.LVL426:
 3478 031f E9E7FDFF 		jmp	.L240
 3478      FF
 3479              	.LBE300:
 3480              	.LBE299:
 3481              		.cfi_endproc
 3482              	.LFE503:
 3484              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
 3485              	.LCOLDE27:
 3486              		.section	.text._ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
 3487              	.LHOTE27:
 3488              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Pixmapiiiiii,"ax",@progbits
 3489              		.align 2
 3490              	.LCOLDB28:
 3491              		.section	.text._ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Pixmapiiiiii,"ax",@progbits
 3492              	.LHOTB28:
 3493              		.align 2
 3494              		.p2align 4,,15
 3495              		.globl	_ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Pixmapiiiiii
 3497              	_ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Pixmapiiiiii:
 3498              	.LFB504:
 3499              		.loc 1 575 0
 3500              		.cfi_startproc
 3501              	.LVL427:
 3502 0000 4157     		pushq	%r15
 3503              		.cfi_def_cfa_offset 16
 3504              		.cfi_offset 15, -16
 3505 0002 4156     		pushq	%r14
 3506              		.cfi_def_cfa_offset 24
 3507              		.cfi_offset 14, -24
 3508 0004 4589CF   		movl	%r9d, %r15d
 3509 0007 4155     		pushq	%r13
 3510              		.cfi_def_cfa_offset 32
 3511              		.cfi_offset 13, -32
 3512 0009 4154     		pushq	%r12
 3513              		.cfi_def_cfa_offset 40
 3514              		.cfi_offset 12, -40
 3515 000b 4189D4   		movl	%edx, %r12d
 3516 000e 55       		pushq	%rbp
 3517              		.cfi_def_cfa_offset 48
 3518              		.cfi_offset 6, -48
 3519 000f 53       		pushq	%rbx
 3520              		.cfi_def_cfa_offset 56
 3521              		.cfi_offset 3, -56
 3522 0010 4889FB   		movq	%rdi, %rbx
 3523 0013 4189CD   		movl	%ecx, %r13d
 3524 0016 4589C6   		movl	%r8d, %r14d
 3525 0019 4883EC18 		subq	$24, %rsp
 3526              		.cfi_def_cfa_offset 80
 3527 001d 488B6E20 		movq	32(%rsi), %rbp
 3528              		.loc 1 578 0
 3529 0021 488D5424 		leaq	4(%rsp), %rdx
 3529      04
 3530              	.LVL428:
 3531 0026 4889E6   		movq	%rsp, %rsi
 3532              	.LVL429:
 3533              		.loc 1 575 0
 3534 0029 64488B04 		movq	%fs:40, %rax
 3534      25280000 
 3534      00
 3535 0032 48894424 		movq	%rax, 8(%rsp)
 3535      08
 3536 0037 31C0     		xorl	%eax, %eax
 3537              	.LVL430:
 3538              		.loc 1 578 0
 3539 0039 4889EF   		movq	%rbp, %rdi
 3540              	.LVL431:
 3541 003c E8000000 		call	_Z17fl_measure_pixmapPKPKcRiS3_
 3541      00
 3542              	.LVL432:
 3543 0041 85C0     		testl	%eax, %eax
 3544 0043 752B     		jne	.L276
 3545              	.L264:
 3546              		.loc 1 589 0
 3547 0045 488B4424 		movq	8(%rsp), %rax
 3547      08
 3548 004a 64483304 		xorq	%fs:40, %rax
 3548      25280000 
 3548      00
 3549 0053 0F85A900 		jne	.L277
 3549      0000
 3550 0059 4883C418 		addq	$24, %rsp
 3551              		.cfi_remember_state
 3552              		.cfi_def_cfa_offset 56
 3553 005d 5B       		popq	%rbx
 3554              		.cfi_def_cfa_offset 48
 3555              	.LVL433:
 3556 005e 5D       		popq	%rbp
 3557              		.cfi_def_cfa_offset 40
 3558 005f 415C     		popq	%r12
 3559              		.cfi_def_cfa_offset 32
 3560              	.LVL434:
 3561 0061 415D     		popq	%r13
 3562              		.cfi_def_cfa_offset 24
 3563              	.LVL435:
 3564 0063 415E     		popq	%r14
 3565              		.cfi_def_cfa_offset 16
 3566              	.LVL436:
 3567 0065 415F     		popq	%r15
 3568              		.cfi_def_cfa_offset 8
 3569              	.LVL437:
 3570 0067 C3       		ret
 3571              	.LVL438:
 3572 0068 0F1F8400 		.p2align 4,,10
 3572      00000000 
 3573              		.p2align 3
 3574              	.L276:
 3575              		.cfi_restore_state
 3576              		.loc 1 580 0
 3577 0070 488D8310 		leaq	2064(%rbx), %rax
 3577      080000
 3578              		.loc 1 583 0
 3579 0077 4589F8   		movl	%r15d, %r8d
 3580 007a 4489F1   		movl	%r14d, %ecx
 3581 007d 4489EA   		movl	%r13d, %edx
 3582 0080 4489E6   		movl	%r12d, %esi
 3583 0083 4889DF   		movq	%rbx, %rdi
 3584              		.loc 1 580 0
 3585 0086 48890500 		movq	%rax, fl_mask_bitmap(%rip)
 3585      000000
 3586              		.loc 1 583 0
 3587 008d 488B03   		movq	(%rbx), %rax
 3588              		.loc 1 579 0
 3589 0090 48C78310 		movq	$0, 2064(%rbx)
 3589      08000000 
 3589      000000
 3590              		.loc 1 581 0
 3591 009b 4489B318 		movl	%r14d, 2072(%rbx)
 3591      080000
 3592              		.loc 1 582 0
 3593 00a2 4489BB1C 		movl	%r15d, 2076(%rbx)
 3593      080000
 3594              		.loc 1 583 0
 3595 00a9 FF905001 		call	*336(%rax)
 3595      0000
 3596              	.LVL439:
 3597              		.loc 1 584 0
 3598 00af 4489EA   		movl	%r13d, %edx
 3599 00b2 4489E6   		movl	%r12d, %esi
 3600 00b5 2B542458 		subl	88(%rsp), %edx
 3601 00b9 2B742450 		subl	80(%rsp), %esi
 3602 00bd B9380000 		movl	$56, %ecx
 3602      00
 3603 00c2 4889EF   		movq	%rbp, %rdi
 3604 00c5 E8000000 		call	_Z14fl_draw_pixmapPKPKciij
 3604      00
 3605              	.LVL440:
 3606              		.loc 1 585 0
 3607 00ca 488B03   		movq	(%rbx), %rax
 3608 00cd 4889DF   		movq	%rbx, %rdi
 3609 00d0 FF907001 		call	*368(%rax)
 3609      0000
 3610              	.LVL441:
 3611              		.loc 1 586 0
 3612 00d6 488BBB10 		movq	2064(%rbx), %rdi
 3612      080000
 3613 00dd 4885FF   		testq	%rdi, %rdi
 3614 00e0 7405     		je	.L266
 3615              		.loc 1 586 0 is_stmt 0 discriminator 1
 3616 00e2 E8000000 		call	_ZdaPv
 3616      00
 3617              	.LVL442:
 3618              	.L266:
 3619              		.loc 1 587 0 is_stmt 1
 3620 00e7 48C78310 		movq	$0, 2064(%rbx)
 3620      08000000 
 3620      000000
 3621              		.loc 1 588 0
 3622 00f2 48C70500 		movq	$0, fl_mask_bitmap(%rip)
 3622      00000000 
 3622      000000
 3623 00fd E943FFFF 		jmp	.L264
 3623      FF
 3624              	.L277:
 3625              		.loc 1 589 0
 3626 0102 E8000000 		call	__stack_chk_fail
 3626      00
 3627              	.LVL443:
 3628              		.cfi_endproc
 3629              	.LFE504:
 3631              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Pixmapiiiiii
 3632              	.LCOLDE28:
 3633              		.section	.text._ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Pixmapiiiiii
 3634              	.LHOTE28:
 3635              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"ax",@progbi
 3636              		.align 2
 3637              	.LCOLDB29:
 3638              		.section	.text._ZN29Fl_PostScript_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"ax",@progbits
 3639              	.LHOTB29:
 3640              		.align 2
 3641              		.p2align 4,,15
 3642              		.globl	_ZN29Fl_PostScript_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
 3644              	_ZN29Fl_PostScript_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii:
 3645              	.LFB505:
 3646              		.loc 1 591 0
 3647              		.cfi_startproc
 3648              	.LVL444:
 3649 0000 4157     		pushq	%r15
 3650              		.cfi_def_cfa_offset 16
 3651              		.cfi_offset 15, -16
 3652 0002 4156     		pushq	%r14
 3653              		.cfi_def_cfa_offset 24
 3654              		.cfi_offset 14, -24
 3655 0004 4589C2   		movl	%r8d, %r10d
 3656 0007 4155     		pushq	%r13
 3657              		.cfi_def_cfa_offset 32
 3658              		.cfi_offset 13, -32
 3659 0009 4154     		pushq	%r12
 3660              		.cfi_def_cfa_offset 40
 3661              		.cfi_offset 12, -40
 3662 000b 4189CD   		movl	%ecx, %r13d
 3663 000e 55       		pushq	%rbp
 3664              		.cfi_def_cfa_offset 48
 3665              		.cfi_offset 6, -48
 3666 000f 53       		pushq	%rbx
 3667              		.cfi_def_cfa_offset 56
 3668              		.cfi_offset 3, -56
 3669 0010 4889F5   		movq	%rsi, %rbp
 3670 0013 4889FB   		movq	%rdi, %rbx
 3671 0016 4189D4   		movl	%edx, %r12d
 3672 0019 4589CB   		movl	%r9d, %r11d
 3673 001c 4883EC18 		subq	$24, %rsp
 3674              		.cfi_def_cfa_offset 80
 3675              		.loc 1 596 0
 3676 0020 83BFD806 		cmpl	$2, 1752(%rdi)
 3676      000002
 3677              		.loc 1 592 0
 3678 0027 488B4628 		movq	40(%rsi), %rax
 3679 002b 448B7608 		movl	8(%rsi), %r14d
 3680 002f 448B7E0C 		movl	12(%rsi), %r15d
 3681              		.loc 1 595 0
 3682 0033 48C78710 		movq	$0, 2064(%rdi)
 3682      08000000 
 3682      000000
 3683              		.loc 1 592 0
 3684 003e 48890424 		movq	%rax, (%rsp)
 3685              	.LVL445:
 3686              		.loc 1 596 0
 3687 0042 7E1A     		jle	.L282
 3688              	.LVL446:
 3689 0044 8B4610   		movl	16(%rsi), %eax
 3690              	.LVL447:
 3691              	.LBB301:
 3692              	.LBB302:
 3693              		.loc 1 197 0
 3694 0047 4189C0   		movl	%eax, %r8d
 3695              	.LVL448:
 3696 004a 41C1E81F 		shrl	$31, %r8d
 3697 004e 4101C0   		addl	%eax, %r8d
 3698 0051 4183E0FE 		andl	$-2, %r8d
 3699 0055 4139C0   		cmpl	%eax, %r8d
 3700 0058 0F848200 		je	.L285
 3700      0000
 3701              	.LVL449:
 3702              	.L282:
 3703              	.LBE302:
 3704              	.LBE301:
 3705              		.loc 1 598 0
 3706 005e 488B03   		movq	(%rbx), %rax
 3707 0061 4589D8   		movl	%r11d, %r8d
 3708 0064 4489D1   		movl	%r10d, %ecx
 3709 0067 4489EA   		movl	%r13d, %edx
 3710 006a 4489E6   		movl	%r12d, %esi
 3711 006d 4889DF   		movq	%rbx, %rdi
 3712 0070 FF905001 		call	*336(%rax)
 3712      0000
 3713              	.LVL450:
 3714              		.loc 1 599 0
 3715 0076 8B7514   		movl	20(%rbp), %esi
 3716 0079 8B4C2458 		movl	88(%rsp), %ecx
 3717 007d 4589F9   		movl	%r15d, %r9d
 3718 0080 8B542450 		movl	80(%rsp), %edx
 3719 0084 488B03   		movq	(%rbx), %rax
 3720 0087 4589F0   		movl	%r14d, %r8d
 3721 008a 4889DF   		movq	%rbx, %rdi
 3722 008d 56       		pushq	%rsi
 3723              		.cfi_def_cfa_offset 88
 3724              	.LVL451:
 3725 008e 8B7510   		movl	16(%rbp), %esi
 3726 0091 4401E9   		addl	%r13d, %ecx
 3727 0094 4401E2   		addl	%r12d, %edx
 3728 0097 56       		pushq	%rsi
 3729              		.cfi_def_cfa_offset 96
 3730 0098 488B7424 		movq	16(%rsp), %rsi
 3730      10
 3731 009d FF907801 		call	*376(%rax)
 3731      0000
 3732              	.LVL452:
 3733              		.loc 1 600 0
 3734 00a3 488B03   		movq	(%rbx), %rax
 3735 00a6 4889DF   		movq	%rbx, %rdi
 3736 00a9 FF907001 		call	*368(%rax)
 3736      0000
 3737              	.LVL453:
 3738              		.loc 1 601 0
 3739 00af 488BBB10 		movq	2064(%rbx), %rdi
 3739      080000
 3740 00b6 58       		popq	%rax
 3741              		.cfi_def_cfa_offset 88
 3742 00b7 5A       		popq	%rdx
 3743              		.cfi_def_cfa_offset 80
 3744              	.LVL454:
 3745 00b8 4885FF   		testq	%rdi, %rdi
 3746 00bb 7405     		je	.L281
 3747              		.loc 1 601 0 is_stmt 0 discriminator 1
 3748 00bd E8000000 		call	_ZdaPv
 3748      00
 3749              	.LVL455:
 3750              	.L281:
 3751              		.loc 1 602 0 is_stmt 1
 3752 00c2 48C78310 		movq	$0, 2064(%rbx)
 3752      08000000 
 3752      000000
 3753              	.LVL456:
 3754              	.L278:
 3755              		.loc 1 603 0
 3756 00cd 4883C418 		addq	$24, %rsp
 3757              		.cfi_remember_state
 3758              		.cfi_def_cfa_offset 56
 3759              	.LVL457:
 3760 00d1 5B       		popq	%rbx
 3761              		.cfi_def_cfa_offset 48
 3762              	.LVL458:
 3763 00d2 5D       		popq	%rbp
 3764              		.cfi_def_cfa_offset 40
 3765              	.LVL459:
 3766 00d3 415C     		popq	%r12
 3767              		.cfi_def_cfa_offset 32
 3768              	.LVL460:
 3769 00d5 415D     		popq	%r13
 3770              		.cfi_def_cfa_offset 24
 3771              	.LVL461:
 3772 00d7 415E     		popq	%r14
 3773              		.cfi_def_cfa_offset 16
 3774 00d9 415F     		popq	%r15
 3775              		.cfi_def_cfa_offset 8
 3776 00db C3       		ret
 3777              	.LVL462:
 3778 00dc 0F1F4000 		.p2align 4,,10
 3779              		.p2align 3
 3780              	.L285:
 3781              		.cfi_restore_state
 3782 00e0 44894C24 		movl	%r9d, 12(%rsp)
 3782      0C
 3783              	.LBB304:
 3784              	.LBB303:
 3785 00e5 448B4E14 		movl	20(%rsi), %r9d
 3786              	.LVL463:
 3787 00e9 4489F9   		movl	%r15d, %ecx
 3788              	.LVL464:
 3789 00ec 488B3424 		movq	(%rsp), %rsi
 3790              	.LVL465:
 3791 00f0 4489F2   		movl	%r14d, %edx
 3792              	.LVL466:
 3793 00f3 44895424 		movl	%r10d, 8(%rsp)
 3793      08
 3794 00f8 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii.part.5.constprop.6
 3794      00
 3795              	.LVL467:
 3796              	.LBE303:
 3797              	.LBE304:
 3798              		.loc 1 597 0
 3799 00fd 85C0     		testl	%eax, %eax
 3800 00ff 448B5424 		movl	8(%rsp), %r10d
 3800      08
 3801 0104 448B5C24 		movl	12(%rsp), %r11d
 3801      0C
 3802 0109 75C2     		jne	.L278
 3803 010b E94EFFFF 		jmp	.L282
 3803      FF
 3804              		.cfi_endproc
 3805              	.LFE505:
 3807              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
 3808              	.LCOLDE29:
 3809              		.section	.text._ZN29Fl_PostScript_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
 3810              	.LHOTE29:
 3811              		.section	.rodata.str1.1
 3812              	.LC30:
 3813 0085 25642025 		.string	"%d %d %i %i CL\n"
 3813      64202569 
 3813      20256920 
 3813      434C0A00 
 3814              	.LC31:
 3815 0095 47532025 		.string	"GS %d %d TR  %f %f SC GS\n"
 3815      64202564 
 3815      20545220 
 3815      20256620 
 3815      25662053 
 3816              	.LC32:
 3817 00af 47522047 		.string	"GR GR\n"
 3817      520A00
 3818              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver11draw_scaledEP8Fl_Imageiiii,"ax",@progb
 3819              		.align 2
 3820              	.LCOLDB33:
 3821              		.section	.text._ZN29Fl_PostScript_Graphics_Driver11draw_scaledEP8Fl_Imageiiii,"ax",@progbits
 3822              	.LHOTB33:
 3823              		.align 2
 3824              		.p2align 4,,15
 3825              		.globl	_ZN29Fl_PostScript_Graphics_Driver11draw_scaledEP8Fl_Imageiiii
 3827              	_ZN29Fl_PostScript_Graphics_Driver11draw_scaledEP8Fl_Imageiiii:
 3828              	.LFB506:
 3829              		.loc 1 605 0
 3830              		.cfi_startproc
 3831              	.LVL468:
 3832 0000 4157     		pushq	%r15
 3833              		.cfi_def_cfa_offset 16
 3834              		.cfi_offset 15, -16
 3835 0002 4156     		pushq	%r14
 3836              		.cfi_def_cfa_offset 24
 3837              		.cfi_offset 14, -24
 3838 0004 4189D6   		movl	%edx, %r14d
 3839 0007 4155     		pushq	%r13
 3840              		.cfi_def_cfa_offset 32
 3841              		.cfi_offset 13, -32
 3842 0009 4154     		pushq	%r12
 3843              		.cfi_def_cfa_offset 40
 3844              		.cfi_offset 12, -40
 3845 000b 4189CF   		movl	%ecx, %r15d
 3846 000e 55       		pushq	%rbp
 3847              		.cfi_def_cfa_offset 48
 3848              		.cfi_offset 6, -48
 3849 000f 53       		pushq	%rbx
 3850              		.cfi_def_cfa_offset 56
 3851              		.cfi_offset 3, -56
 3852 0010 4489C5   		movl	%r8d, %ebp
 3853 0013 4589CC   		movl	%r9d, %r12d
 3854 0016 4889FB   		movq	%rdi, %rbx
 3855 0019 4989F5   		movq	%rsi, %r13
 3856 001c 4883EC30 		subq	$48, %rsp
 3857              		.cfi_def_cfa_offset 104
 3858              		.loc 1 607 0
 3859 0020 4489F6   		movl	%r14d, %esi
 3860              	.LVL469:
 3861 0023 4589E0   		movl	%r12d, %r8d
 3862              	.LVL470:
 3863 0026 488D5424 		leaq	28(%rsp), %rdx
 3863      1C
 3864              	.LVL471:
 3865 002b 89E9     		movl	%ebp, %ecx
 3866              	.LVL472:
 3867              		.loc 1 605 0
 3868 002d 64488B04 		movq	%fs:40, %rax
 3868      25280000 
 3868      00
 3869 0036 48894424 		movq	%rax, 32(%rsp)
 3869      20
 3870 003b 31C0     		xorl	%eax, %eax
 3871              		.loc 1 607 0
 3872 003d 488B07   		movq	(%rdi), %rax
 3873 0040 52       		pushq	%rdx
 3874              		.cfi_def_cfa_offset 112
 3875 0041 488D5424 		leaq	32(%rsp), %rdx
 3875      20
 3876 0046 52       		pushq	%rdx
 3877              		.cfi_def_cfa_offset 120
 3878 0047 488D5424 		leaq	36(%rsp), %rdx
 3878      24
 3879 004c 52       		pushq	%rdx
 3880              		.cfi_def_cfa_offset 128
 3881 004d 4489FA   		movl	%r15d, %edx
 3882 0050 4C8D4C24 		leaq	40(%rsp), %r9
 3882      28
 3883              	.LVL473:
 3884 0055 FF905801 		call	*344(%rax)
 3884      0000
 3885              	.LVL474:
 3886              		.loc 1 608 0
 3887 005b 4883C420 		addq	$32, %rsp
 3888              		.cfi_def_cfa_offset 96
 3889 005f 8B742410 		movl	16(%rsp), %esi
 3890 0063 85F6     		testl	%esi, %esi
 3891 0065 7408     		je	.L287
 3892              		.loc 1 608 0 is_stmt 0 discriminator 2
 3893 0067 8B4C2414 		movl	20(%rsp), %ecx
 3894 006b 85C9     		testl	%ecx, %ecx
 3895 006d 7531     		jne	.L290
 3896              	.L287:
 3897              		.loc 1 616 0 is_stmt 1
 3898 006f 488B7424 		movq	24(%rsp), %rsi
 3898      18
 3899 0074 64483334 		xorq	%fs:40, %rsi
 3899      25280000 
 3899      00
 3900 007d B8010000 		movl	$1, %eax
 3900      00
 3901 0082 0F85D300 		jne	.L291
 3901      0000
 3902 0088 4883C428 		addq	$40, %rsp
 3903              		.cfi_remember_state
 3904              		.cfi_def_cfa_offset 56
 3905 008c 5B       		popq	%rbx
 3906              		.cfi_def_cfa_offset 48
 3907              	.LVL475:
 3908 008d 5D       		popq	%rbp
 3909              		.cfi_def_cfa_offset 40
 3910              	.LVL476:
 3911 008e 415C     		popq	%r12
 3912              		.cfi_def_cfa_offset 32
 3913              	.LVL477:
 3914 0090 415D     		popq	%r13
 3915              		.cfi_def_cfa_offset 24
 3916              	.LVL478:
 3917 0092 415E     		popq	%r14
 3918              		.cfi_def_cfa_offset 16
 3919              	.LVL479:
 3920 0094 415F     		popq	%r15
 3921              		.cfi_def_cfa_offset 8
 3922              	.LVL480:
 3923 0096 C3       		ret
 3924              	.LVL481:
 3925 0097 660F1F84 		.p2align 4,,10
 3925      00000000 
 3925      00
 3926              		.p2align 3
 3927              	.L290:
 3928              		.cfi_restore_state
 3929              		.loc 1 609 0
 3930 00a0 488B03   		movq	(%rbx), %rax
 3931 00a3 4889DF   		movq	%rbx, %rdi
 3932 00a6 FF906801 		call	*360(%rax)
 3932      0000
 3933              	.LVL482:
 3934              		.loc 1 610 0
 3935 00ac 448B4C24 		movl	20(%rsp), %r9d
 3935      14
 3936 00b1 448B4424 		movl	16(%rsp), %r8d
 3936      10
 3937 00b6 BE000000 		movl	$.LC30, %esi
 3937      00
 3938 00bb 8B4C240C 		movl	12(%rsp), %ecx
 3939 00bf 8B542408 		movl	8(%rsp), %edx
 3940 00c3 4889DF   		movq	%rbx, %rdi
 3941 00c6 31C0     		xorl	%eax, %eax
 3942 00c8 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver14clocale_printfEPKcz
 3942      00
 3943              	.LVL483:
 3944              		.loc 1 611 0
 3945 00cd 660FEFC9 		pxor	%xmm1, %xmm1
 3946 00d1 4489F9   		movl	%r15d, %ecx
 3947 00d4 660FEFC0 		pxor	%xmm0, %xmm0
 3948 00d8 4489F2   		movl	%r14d, %edx
 3949 00db 660FEFD2 		pxor	%xmm2, %xmm2
 3950 00df BE000000 		movl	$.LC31, %esi
 3950      00
 3951 00e4 F3410F2A 		cvtsi2ss	%r12d, %xmm1
 3951      CC
 3952 00e9 4889DF   		movq	%rbx, %rdi
 3953 00ec B8020000 		movl	$2, %eax
 3953      00
 3954 00f1 F3410F2A 		cvtsi2ss	12(%r13), %xmm0
 3954      450C
 3955 00f7 F3410F2A 		cvtsi2ss	8(%r13), %xmm2
 3955      5508
 3956 00fd F30F5EC8 		divss	%xmm0, %xmm1
 3957 0101 660FEFC0 		pxor	%xmm0, %xmm0
 3958 0105 F30F2AC5 		cvtsi2ss	%ebp, %xmm0
 3959 0109 F30F5AC9 		cvtss2sd	%xmm1, %xmm1
 3960 010d F30F5EC2 		divss	%xmm2, %xmm0
 3961 0111 F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 3962 0115 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver14clocale_printfEPKcz
 3962      00
 3963              	.LVL484:
 3964              		.loc 1 612 0
 3965 011a 498B4500 		movq	0(%r13), %rax
 3966 011e 4883EC08 		subq	$8, %rsp
 3967              		.cfi_def_cfa_offset 104
 3968 0122 31D2     		xorl	%edx, %edx
 3969 0124 6A00     		pushq	$0
 3970              		.cfi_def_cfa_offset 112
 3971 0126 418B4D08 		movl	8(%r13), %ecx
 3972 012a 4531C9   		xorl	%r9d, %r9d
 3973 012d 458B450C 		movl	12(%r13), %r8d
 3974 0131 31F6     		xorl	%esi, %esi
 3975 0133 4C89EF   		movq	%r13, %rdi
 3976 0136 FF5038   		call	*56(%rax)
 3977              	.LVL485:
 3978              		.loc 1 613 0
 3979 0139 BE000000 		movl	$.LC32, %esi
 3979      00
 3980 013e 4889DF   		movq	%rbx, %rdi
 3981 0141 31C0     		xorl	%eax, %eax
 3982 0143 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver14clocale_printfEPKcz
 3982      00
 3983              	.LVL486:
 3984              		.loc 1 614 0
 3985 0148 488B03   		movq	(%rbx), %rax
 3986 014b 4889DF   		movq	%rbx, %rdi
 3987 014e FF907001 		call	*368(%rax)
 3987      0000
 3988              	.LVL487:
 3989              		.loc 1 615 0
 3990 0154 58       		popq	%rax
 3991              		.cfi_def_cfa_offset 104
 3992 0155 5A       		popq	%rdx
 3993              		.cfi_def_cfa_offset 96
 3994 0156 E914FFFF 		jmp	.L287
 3994      FF
 3995              	.LVL488:
 3996              	.L291:
 3997              		.loc 1 616 0
 3998 015b E8000000 		call	__stack_chk_fail
 3998      00
 3999              	.LVL489:
 4000              		.cfi_endproc
 4001              	.LFE506:
 4003              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver11draw_scaledEP8Fl_Imageiiii
 4004              	.LCOLDE33:
 4005              		.section	.text._ZN29Fl_PostScript_Graphics_Driver11draw_scaledEP8Fl_Imageiiii
 4006              	.LHOTE33:
 4007              		.section	.rodata.str1.1
 4008              	.LC34:
 4009 00b6 25692025 		.string	"%i %i %i %i %i %i MI\n"
 4009      69202569 
 4009      20256920 
 4009      25692025 
 4009      69204D49 
 4010              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"ax",@progbits
 4011              		.align 2
 4012              	.LCOLDB35:
 4013              		.section	.text._ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"ax",@progbits
 4014              	.LHOTB35:
 4015              		.align 2
 4016              		.p2align 4,,15
 4017              		.globl	_ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
 4019              	_ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Bitmapiiiiii:
 4020              	.LFB507:
 4021              		.loc 1 618 0
 4022              		.cfi_startproc
 4023              	.LVL490:
 4024 0000 4157     		pushq	%r15
 4025              		.cfi_def_cfa_offset 16
 4026              		.cfi_offset 15, -16
 4027 0002 4156     		pushq	%r14
 4028              		.cfi_def_cfa_offset 24
 4029              		.cfi_offset 14, -24
 4030 0004 4189D7   		movl	%edx, %r15d
 4031 0007 4155     		pushq	%r13
 4032              		.cfi_def_cfa_offset 32
 4033              		.cfi_offset 13, -32
 4034 0009 4154     		pushq	%r12
 4035              		.cfi_def_cfa_offset 40
 4036              		.cfi_offset 12, -40
 4037 000b 89C8     		movl	%ecx, %eax
 4038 000d 55       		pushq	%rbp
 4039              		.cfi_def_cfa_offset 48
 4040              		.cfi_offset 6, -48
 4041 000e 53       		pushq	%rbx
 4042              		.cfi_def_cfa_offset 56
 4043              		.cfi_offset 3, -56
 4044 000f 4889FD   		movq	%rdi, %rbp
 4045 0012 4589C5   		movl	%r8d, %r13d
 4046 0015 4883EC18 		subq	$24, %rsp
 4047              		.cfi_def_cfa_offset 80
 4048 0019 448B6608 		movl	8(%rsi), %r12d
 4049              		.loc 1 619 0
 4050 001d 4C8B5628 		movq	40(%rsi), %r10
 4051              	.LVL491:
 4052              		.loc 1 618 0
 4053 0021 8B5C2450 		movl	80(%rsp), %ebx
 4054 0025 44890C24 		movl	%r9d, (%rsp)
 4055 0029 8B7C2458 		movl	88(%rsp), %edi
 4056              	.LVL492:
 4057              		.loc 1 621 0
 4058 002d 418D5424 		leal	14(%r12), %edx
 4058      0E
 4059              	.LVL493:
 4060 0032 4489E1   		movl	%r12d, %ecx
 4061              	.LVL494:
 4062 0035 83C107   		addl	$7, %ecx
 4063 0038 0F48CA   		cmovs	%edx, %ecx
 4064              		.loc 1 624 0
 4065 003b 4129DC   		subl	%ebx, %r12d
 4066              		.loc 1 621 0
 4067 003e C1F903   		sarl	$3, %ecx
 4068              	.LVL495:
 4069              		.loc 1 624 0
 4070 0041 4539C4   		cmpl	%r8d, %r12d
 4071 0044 0F8D6401 		jge	.L293
 4071      0000
 4072              	.LVL496:
 4073              		.loc 1 626 0
 4074 004a 8D5307   		leal	7(%rbx), %edx
 4075 004d 85DB     		testl	%ebx, %ebx
 4076 004f 4189D8   		movl	%ebx, %r8d
 4077              	.LVL497:
 4078 0052 4189C9   		movl	%ecx, %r9d
 4079              	.LVL498:
 4080 0055 440F48C2 		cmovs	%edx, %r8d
 4081 0059 41C1F803 		sarl	$3, %r8d
 4082 005d 4529C1   		subl	%r8d, %r9d
 4083 0060 44894C24 		movl	%r9d, 4(%rsp)
 4083      04
 4084              	.LVL499:
 4085              	.L294:
 4086              		.loc 1 631 0
 4087 0065 448B5E0C 		movl	12(%rsi), %r11d
 4088 0069 8B3424   		movl	(%rsp), %esi
 4089              	.LVL500:
 4090              		.loc 1 640 0
 4091 006c 4C8B4D00 		movq	0(%rbp), %r9
 4092 0070 89442408 		movl	%eax, 8(%rsp)
 4093              		.loc 1 631 0
 4094 0074 4129FB   		subl	%edi, %r11d
 4095              		.loc 1 640 0
 4096 0077 4189F0   		movl	%esi, %r8d
 4097 007a 4139F3   		cmpl	%esi, %r11d
 4098 007d 440F4FDE 		cmovg	%esi, %r11d
 4099 0081 4489FE   		movl	%r15d, %esi
 4100              		.loc 1 636 0
 4101 0084 0FAFCF   		imull	%edi, %ecx
 4102              	.LVL501:
 4103 0087 85DB     		testl	%ebx, %ebx
 4104 0089 44895C24 		movl	%r11d, 12(%rsp)
 4104      0C
 4105              	.LVL502:
 4106 008e 0F49D3   		cmovns	%ebx, %edx
 4107              		.loc 1 640 0
 4108 0091 4889EF   		movq	%rbp, %rdi
 4109              		.loc 1 636 0
 4110 0094 C1FA03   		sarl	$3, %edx
 4111 0097 01CA     		addl	%ecx, %edx
 4112              		.loc 1 640 0
 4113 0099 4489E9   		movl	%r13d, %ecx
 4114              		.loc 1 636 0
 4115 009c 4863D2   		movslq	%edx, %rdx
 4116 009f 4D8D3412 		leaq	(%r10,%rdx), %r14
 4117              	.LVL503:
 4118              		.loc 1 640 0
 4119 00a3 89C2     		movl	%eax, %edx
 4120 00a5 41FF9150 		call	*336(%r9)
 4120      010000
 4121              	.LVL504:
 4122              	.LBB305:
 4123              	.LBB306:
 4124              		.loc 3 98 0
 4125 00ac 89D8     		movl	%ebx, %eax
 4126 00ae 4883EC08 		subq	$8, %rsp
 4127              		.cfi_def_cfa_offset 88
 4128              	.LVL505:
 4129 00b2 4489F9   		movl	%r15d, %ecx
 4130 00b5 C1F81F   		sarl	$31, %eax
 4131 00b8 448B5C24 		movl	20(%rsp), %r11d
 4131      14
 4132 00bd 488BBD48 		movq	2120(%rbp), %rdi
 4132      080000
 4133 00c4 89C2     		movl	%eax, %edx
 4134 00c6 4589E9   		movl	%r13d, %r9d
 4135 00c9 BE010000 		movl	$1, %esi
 4135      00
 4136 00ce C1EA1D   		shrl	$29, %edx
 4137              	.LBE306:
 4138              	.LBE305:
 4139              		.loc 1 644 0
 4140 00d1 4531ED   		xorl	%r13d, %r13d
 4141              	.LVL506:
 4142              	.LBB308:
 4143              	.LBB307:
 4144              		.loc 3 98 0
 4145 00d4 01D3     		addl	%edx, %ebx
 4146              	.LVL507:
 4147 00d6 4153     		pushq	%r11
 4148              		.cfi_def_cfa_offset 96
 4149              	.LVL508:
 4150 00d8 4154     		pushq	%r12
 4151              		.cfi_def_cfa_offset 104
 4152 00da 83E307   		andl	$7, %ebx
 4153 00dd 29D3     		subl	%edx, %ebx
 4154 00df 29D9     		subl	%ebx, %ecx
 4155 00e1 8B5C2418 		movl	24(%rsp), %ebx
 4156 00e5 89DA     		movl	%ebx, %edx
 4157 00e7 F7DA     		negl	%edx
 4158 00e9 52       		pushq	%rdx
 4159              		.cfi_def_cfa_offset 112
 4160 00ea 8B442428 		movl	40(%rsp), %eax
 4161 00ee BA000000 		movl	$.LC34, %edx
 4161      00
 4162 00f3 448D0403 		leal	(%rbx,%rax), %r8d
 4163 00f7 31C0     		xorl	%eax, %eax
 4164 00f9 E8000000 		call	__fprintf_chk
 4164      00
 4165              	.LVL509:
 4166              	.LBE307:
 4167              	.LBE308:
 4168              		.loc 1 643 0
 4169 00fe 4883C420 		addq	$32, %rsp
 4170              		.cfi_def_cfa_offset 80
 4171              	.LVL510:
 4172 0102 4889EF   		movq	%rbp, %rdi
 4173 0105 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev
 4173      00
 4174              	.LVL511:
 4175 010a 4989C4   		movq	%rax, %r12
 4176              	.LVL512:
 4177 010d 8B442404 		movl	4(%rsp), %eax
 4178              	.LVL513:
 4179 0111 448D78FF 		leal	-1(%rax), %r15d
 4180              	.LVL514:
 4181 0115 4983C701 		addq	$1, %r15
 4182              		.loc 1 644 0
 4183 0119 85DB     		testl	%ebx, %ebx
 4184 011b 7E57     		jle	.L298
 4185              	.LVL515:
 4186 011d 0F1F00   		.p2align 4,,10
 4187              		.p2align 3
 4188              	.L301:
 4189              		.loc 1 645 0 discriminator 3
 4190 0120 8B442404 		movl	4(%rsp), %eax
 4191 0124 85C0     		testl	%eax, %eax
 4192 0126 7E42     		jle	.L296
 4193 0128 4B8D1C3E 		leaq	(%r14,%r15), %rbx
 4194              	.LVL516:
 4195 012c 0F1F4000 		.p2align 4,,10
 4196              		.p2align 3
 4197              	.L297:
 4198              		.loc 1 646 0 discriminator 2
 4199 0130 410FB606 		movzbl	(%r14), %eax
 4200 0134 4889EF   		movq	%rbp, %rdi
 4201              		.loc 1 647 0 discriminator 2
 4202 0137 4983C601 		addq	$1, %r14
 4203              	.LVL517:
 4204              	.LBB309:
 4205              	.LBB310:
 4206              		.loc 1 346 0 discriminator 2
 4207 013b 4889C2   		movq	%rax, %rdx
 4208 013e 48C1E804 		shrq	$4, %rax
 4209 0142 83E20F   		andl	$15, %edx
 4210 0145 83E00F   		andl	$15, %eax
 4211              	.LBE310:
 4212              	.LBE309:
 4213              		.loc 1 646 0 discriminator 2
 4214 0148 0FB6B200 		movzbl	_ZL7swapped(%rdx), %esi
 4214      000000
 4215 014f 4C89E2   		movq	%r12, %rdx
 4216 0152 C1E604   		sall	$4, %esi
 4217 0155 400AB000 		orb	_ZL7swapped(%rax), %sil
 4217      000000
 4218 015c 400FB6F6 		movzbl	%sil, %esi
 4219 0160 E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
 4219      00
 4220              	.LVL518:
 4221              		.loc 1 645 0 discriminator 2
 4222 0165 4939DE   		cmpq	%rbx, %r14
 4223 0168 75C6     		jne	.L297
 4224              	.LVL519:
 4225              	.L296:
 4226              		.loc 1 644 0 discriminator 2
 4227 016a 4183C501 		addl	$1, %r13d
 4228              	.LVL520:
 4229 016e 44392C24 		cmpl	%r13d, (%rsp)
 4230 0172 75AC     		jne	.L301
 4231              	.LVL521:
 4232              	.L298:
 4233              		.loc 1 650 0
 4234 0174 4C89E6   		movq	%r12, %rsi
 4235 0177 4889EF   		movq	%rbp, %rdi
 4236 017a E8000000 		call	_ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv
 4236      00
 4237              	.LVL522:
 4238 017f 488BB548 		movq	2120(%rbp), %rsi
 4238      080000
 4239 0186 BF0A0000 		movl	$10, %edi
 4239      00
 4240 018b E8000000 		call	fputc
 4240      00
 4241              	.LVL523:
 4242              		.loc 1 651 0
 4243 0190 488B4500 		movq	0(%rbp), %rax
 4244 0194 4889EF   		movq	%rbp, %rdi
 4245 0197 488B8070 		movq	368(%rax), %rax
 4245      010000
 4246              		.loc 1 652 0
 4247 019e 4883C418 		addq	$24, %rsp
 4248              		.cfi_remember_state
 4249              		.cfi_def_cfa_offset 56
 4250              	.LVL524:
 4251 01a2 5B       		popq	%rbx
 4252              		.cfi_def_cfa_offset 48
 4253 01a3 5D       		popq	%rbp
 4254              		.cfi_def_cfa_offset 40
 4255              	.LVL525:
 4256 01a4 415C     		popq	%r12
 4257              		.cfi_def_cfa_offset 32
 4258              	.LVL526:
 4259 01a6 415D     		popq	%r13
 4260              		.cfi_def_cfa_offset 24
 4261 01a8 415E     		popq	%r14
 4262              		.cfi_def_cfa_offset 16
 4263              	.LVL527:
 4264 01aa 415F     		popq	%r15
 4265              		.cfi_def_cfa_offset 8
 4266              		.loc 1 651 0
 4267 01ac FFE0     		jmp	*%rax
 4268              	.LVL528:
 4269              	.L293:
 4270              		.cfi_restore_state
 4271              		.loc 1 629 0
 4272 01ae 418D500E 		leal	14(%r8), %edx
 4273 01b2 4183C007 		addl	$7, %r8d
 4274              	.LVL529:
 4275 01b6 4189D9   		movl	%ebx, %r9d
 4276              	.LVL530:
 4277 01b9 4589EC   		movl	%r13d, %r12d
 4278 01bc 440F48C2 		cmovs	%edx, %r8d
 4279 01c0 8D5307   		leal	7(%rbx), %edx
 4280 01c3 41C1F803 		sarl	$3, %r8d
 4281 01c7 85DB     		testl	%ebx, %ebx
 4282 01c9 440F48CA 		cmovs	%edx, %r9d
 4283 01cd 41C1F903 		sarl	$3, %r9d
 4284 01d1 4529C8   		subl	%r9d, %r8d
 4285 01d4 44894424 		movl	%r8d, 4(%rsp)
 4285      04
 4286              	.LVL531:
 4287 01d9 E987FEFF 		jmp	.L294
 4287      FF
 4288              		.cfi_endproc
 4289              	.LFE507:
 4291              		.section	.text.unlikely._ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
 4292              	.LCOLDE35:
 4293              		.section	.text._ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
 4294              	.LHOTE35:
 4295              		.section	.rodata._ZL7swapped,"a",@progbits
 4296              		.align 16
 4299              	_ZL7swapped:
 4300 0000 00       		.byte	0
 4301 0001 08       		.byte	8
 4302 0002 04       		.byte	4
 4303 0003 0C       		.byte	12
 4304 0004 02       		.byte	2
 4305 0005 0A       		.byte	10
 4306 0006 06       		.byte	6
 4307 0007 0E       		.byte	14
 4308 0008 01       		.byte	1
 4309 0009 09       		.byte	9
 4310 000a 05       		.byte	5
 4311 000b 0D       		.byte	13
 4312 000c 03       		.byte	3
 4313 000d 0B       		.byte	11
 4314 000e 07       		.byte	7
 4315 000f 0F       		.byte	15
 4316              		.section	.rodata.cst16,"aM",@progbits,16
 4317              		.align 16
 4318              	.LC15:
 4319 0000 00000000 		.long	0
 4320 0004 00000080 		.long	-2147483648
 4321 0008 00000000 		.long	0
 4322 000c 00000000 		.long	0
 4323              		.text
 4324              	.Letext0:
 4325              		.section	.text.unlikely._ZL9convert85PKhPh
 4326              	.Letext_cold0:
 4327              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 4328              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 4329              		.file 6 "/usr/include/stdio.h"
 4330              		.file 7 "/usr/include/libio.h"
 4331              		.file 8 "fltk-1.3.4-1/FL/fl_types.h"
 4332              		.file 9 "fltk-1.3.4-1/FL/Enumerations.H"
 4333              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
 4334              		.file 11 "fltk-1.3.4-1/FL/Fl_Device.H"
 4335              		.file 12 "fltk-1.3.4-1/FL/Fl_PostScript.H"
 4336              		.file 13 "fltk-1.3.4-1/FL/fl_draw.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 ps_image.cxx
     /tmp/ccYTcKvd.s:13     .text._ZL9convert85PKhPh:0000000000000000 _ZL9convert85PKhPh
     /tmp/ccYTcKvd.s:130    .text._ZL13draw_image_cbPviiiPh:0000000000000000 _ZL13draw_image_cbPviiiPh
     /tmp/ccYTcKvd.s:176    .text._ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii.part.5.constprop.6:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii.part.5.constprop.6
     /tmp/ccYTcKvd.s:984    .text._ZN29Fl_PostScript_Graphics_Driver9prepare85Ev:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver9prepare85Ev
     /tmp/ccYTcKvd.s:1020   .text._ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver7write85EPvPKhi
     /tmp/ccYTcKvd.s:1189   .text._ZN29Fl_PostScript_Graphics_Driver7close85EPv:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver7close85EPv
     /tmp/ccYTcKvd.s:1299   .text._ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver13prepare_rle85Ev
     /tmp/ccYTcKvd.s:1362   .text._ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver11write_rle85EhPv
     /tmp/ccYTcKvd.s:1559   .text._ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver11close_rle85EPv
     /tmp/ccYTcKvd.s:1699   .text._ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver10alpha_maskEPKhiiii
     /tmp/ccYTcKvd.s:1738   .text._ZN29Fl_PostScript_Graphics_Driver10draw_imageEPKhiiiiii:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver10draw_imageEPKhiiiiii
     /tmp/ccYTcKvd.s:1864   .text._ZN29Fl_PostScript_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
     /tmp/ccYTcKvd.s:4299   .rodata._ZL7swapped:0000000000000000 _ZL7swapped
     /tmp/ccYTcKvd.s:2624   .text._ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPKhiiiiii:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPKhiiiiii
     /tmp/ccYTcKvd.s:3090   .text._ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
     /tmp/ccYTcKvd.s:3497   .text._ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Pixmapiiiiii:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Pixmapiiiiii
     /tmp/ccYTcKvd.s:3644   .text._ZN29Fl_PostScript_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
     /tmp/ccYTcKvd.s:3827   .text._ZN29Fl_PostScript_Graphics_Driver11draw_scaledEP8Fl_Imageiiii:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver11draw_scaledEP8Fl_Imageiiii
     /tmp/ccYTcKvd.s:4019   .text._ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Bitmapiiiiii:0000000000000000 _ZN29Fl_PostScript_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
     /tmp/ccYTcKvd.s:4318   .rodata.cst16:0000000000000000 .LC15
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
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
                           .group:0000000000000000 wm4.math.h.26.671af5ac9cd425a35e0730f7b6d7cde2
                           .group:0000000000000000 wm4.libmsimddeclstubs.h.34.75644856b74ba3d815155fe5fe7ecc56
                           .group:0000000000000000 wm4.mathdef.h.23.67c0aa4a204f1f427459dfc651aba565
                           .group:0000000000000000 wm4.math.h.55.cf380f99c57d42476a5252f30065036a
                           .group:0000000000000000 wm4.math.h.84.742292806c6be54f49dc607928a827f7
                           .group:0000000000000000 wm4.math.h.105.59ff0f83ebf6a04e70e145cef2d1185e
                           .group:0000000000000000 wm4.math.h.152.afae4114fe3f3987f42ac5211c91e844
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.185.629aca749f254f2bc1fdc00bb73e17c4
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.types.h.23.6b551a14160ee6e670a07567790a4689
                           .group:0000000000000000 wm4.time.h.53.beb46e650cd406cb917b6b96b45e640a
                           .group:0000000000000000 wm4.types.h.137.b47ba4422427ad6e74c43b7db72dcd74
                           .group:0000000000000000 wm4.stddef.h.238.847b6907dabda77be90a9ab7ad789e2e
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
                           .group:0000000000000000 wm4.stdlib.h.54.bfbb5b0b23fee1f35dc97a46ddeb7e8b
                           .group:0000000000000000 wm4.alloca.h.19.edefa922a76c1cbaaf1e416903ba2d1c
                           .group:0000000000000000 wm4.alloca.h.29.156e12058824cc23d961c4d3b13031f6
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.stat.h.23.034923aa253537bdc4e59720e9e8ed3d
                           .group:0000000000000000 wm4.time.h.66.fa652aa18ecf92239cee124d5533fe97
                           .group:0000000000000000 wm4.stat.h.23.71443f0579dab3228134d84ad7d61c3e
                           .group:0000000000000000 wm4.stat.h.107.43f8ebdec21eca5e13896fd19df564c8
                           .group:0000000000000000 wm4.locale.h.23.9b5006b0bf779abe978bf85cb308a947
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.94a07dff536351e64a45c44b55b1ccfb
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915

UNDEFINED SYMBOLS
memcpy
_Znam
_ZdaPv
_Znwm
fwrite
fputc
_ZdlPv
__stack_chk_fail
__fprintf_chk
_Z17fl_measure_pixmapPKPKcRiS3_
fl_mask_bitmap
_Z14fl_draw_pixmapPKPKciij
_ZN29Fl_PostScript_Graphics_Driver14clocale_printfEPKcz
