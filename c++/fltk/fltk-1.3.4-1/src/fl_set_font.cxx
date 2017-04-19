   1              		.file	"fl_set_font.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN2Fl8set_fontEiPKc,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN2Fl8set_fontEiPKc,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN2Fl8set_fontEiPKc
  12              	.Ltext_cold0:
  13              		.section	.text._ZN2Fl8set_fontEiPKc
  14              		.globl	_ZN2Fl8set_fontEiPKc
  16              	_ZN2Fl8set_fontEiPKc:
  17              	.LFB482:
  18              		.file 1 "fltk-1.3.4-1/src/fl_set_font.cxx"
   1:fltk-1.3.4-1/src/fl_set_font.cxx **** ...
  19              		.loc 1 34 0
  20              		.cfi_startproc
  21              	.LVL0:
  22 0000 4156     		pushq	%r14
  23              		.cfi_def_cfa_offset 16
  24              		.cfi_offset 14, -16
  25 0002 4155     		pushq	%r13
  26              		.cfi_def_cfa_offset 24
  27              		.cfi_offset 13, -24
  28 0004 4989F5   		movq	%rsi, %r13
  29 0007 4154     		pushq	%r12
  30              		.cfi_def_cfa_offset 32
  31              		.cfi_offset 12, -32
  32 0009 55       		pushq	%rbp
  33              		.cfi_def_cfa_offset 40
  34              		.cfi_offset 6, -40
  35 000a 4C63E7   		movslq	%edi, %r12
  36 000d 8B2D0000 		movl	_ZL10table_size(%rip), %ebp
  36      0000
  37 0013 53       		pushq	%rbx
  38              		.cfi_def_cfa_offset 48
  39              		.cfi_offset 3, -48
  40 0014 488B1D00 		movq	fl_fonts(%rip), %rbx
  40      000000
  41              		.loc 1 38 0
  42 001b 4139EC   		cmpl	%ebp, %r12d
  43 001e 0F8C9D00 		jl	.L2
  43      0000
  44              	.LVL1:
  45              		.p2align 4,,10
  46 0024 0F1F4000 		.p2align 3
  47              	.L29:
  48              	.LBB24:
  49              	.LBB25:
  50              		.loc 1 40 0
  51 0028 85ED     		testl	%ebp, %ebp
  52 002a 0F854001 		jne	.L3
  52      0000
  53              	.LBB26:
  54              		.loc 1 43 0
  55 0030 BF001400 		movl	$5120, %edi
  55      00
  56              		.loc 1 41 0
  57 0035 C7050000 		movl	$32, _ZL10table_size(%rip)
  57      00002000 
  57      0000
  58              	.LVL2:
  59              	.LBE26:
  60              	.LBE25:
  61              		.loc 1 50 0
  62 003f 41BE2000 		movl	$32, %r14d
  62      0000
  63              	.LBB32:
  64              	.LBB31:
  65              		.loc 1 43 0
  66 0045 E8000000 		call	malloc
  66      00
  67              	.LVL3:
  68              		.loc 1 42 0
  69 004a BD100000 		movl	$16, %ebp
  69      00
  70              	.LBB27:
  71              	.LBB28:
  72              		.file 2 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
  73              		.loc 2 53 0
  74 004f 4889DE   		movq	%rbx, %rsi
  75 0052 B9400100 		movl	$320, %ecx
  75      00
  76 0057 4889C7   		movq	%rax, %rdi
  77              	.LBE28:
  78              	.LBE27:
  79              		.loc 1 45 0
  80 005a 4889C3   		movq	%rax, %rbx
  81              	.LBB30:
  82              	.LBB29:
  83              		.loc 2 53 0
  84 005d F348A5   		rep movsq
  85              	.LVL4:
  86              	.LBE29:
  87              	.LBE30:
  88              		.loc 1 45 0
  89 0060 48890500 		movq	%rax, fl_fonts(%rip)
  89      000000
  90              	.LVL5:
  91              	.L4:
  92 0067 4863C5   		movslq	%ebp, %rax
  93 006a 488D1480 		leaq	(%rax,%rax,4), %rdx
  94 006e 48C1E205 		salq	$5, %rdx
  95              		.p2align 4,,10
  96 0072 660F1F44 		.p2align 3
  96      0000
  97              	.L7:
  98              	.LBE31:
  99              	.LBE32:
 100              		.loc 1 51 0 discriminator 1
 101 0078 4801D3   		addq	%rdx, %rbx
 102              		.loc 1 50 0 discriminator 1
 103 007b 83C501   		addl	$1, %ebp
 104              	.LVL6:
 105              		.loc 1 51 0 discriminator 1
 106 007e C6430800 		movb	$0, 8(%rbx)
 107              		.loc 1 52 0 discriminator 1
 108 0082 48C70300 		movq	$0, (%rbx)
 108      000000
 109              		.loc 1 54 0 discriminator 1
 110 0089 488B1D00 		movq	fl_fonts(%rip), %rbx
 110      000000
 111 0090 488D0413 		leaq	(%rbx,%rdx), %rax
 112 0094 4881C2A0 		addq	$160, %rdx
 112      000000
 113              		.loc 1 50 0 discriminator 1
 114 009b 4439F5   		cmpl	%r14d, %ebp
 115              		.loc 1 54 0 discriminator 1
 116 009e 48C78090 		movq	$0, 144(%rax)
 116      00000000 
 116      000000
 117              		.loc 1 55 0 discriminator 1
 118 00a9 C7809800 		movl	$0, 152(%rax)
 118      00000000 
 118      0000
 119              		.loc 1 50 0 discriminator 1
 120 00b3 7CC3     		jl	.L7
 121 00b5 4489F5   		movl	%r14d, %ebp
 122              	.LVL7:
 123              	.L31:
 124              	.LBE24:
 125              		.loc 1 38 0
 126 00b8 4139EC   		cmpl	%ebp, %r12d
 127 00bb 0F8D67FF 		jge	.L29
 127      FFFF
 128              	.L2:
 129              		.loc 1 59 0
 130 00c1 4B8D04A4 		leaq	(%r12,%r12,4), %rax
 131 00c5 48C1E005 		salq	$5, %rax
 132 00c9 4801C3   		addq	%rax, %rbx
 133              	.LVL8:
 134              	.LBB35:
 135              		.loc 1 60 0
 136 00cc 488B3B   		movq	(%rbx), %rdi
 137 00cf 4885FF   		testq	%rdi, %rdi
 138 00d2 7458     		je	.L8
 139              	.LBB36:
 140              		.loc 1 61 0
 141 00d4 4C89EE   		movq	%r13, %rsi
 142 00d7 E8000000 		call	strcmp
 142      00
 143              	.LVL9:
 144 00dc 85C0     		testl	%eax, %eax
 145 00de 0F84C600 		je	.L30
 145      0000
 146              		.loc 1 63 0
 147 00e4 488BBB90 		movq	144(%rbx), %rdi
 147      000000
 148 00eb 4885FF   		testq	%rdi, %rdi
 149 00ee 740F     		je	.L11
 150              		.loc 1 63 0 is_stmt 0 discriminator 1
 151 00f0 8B839800 		movl	152(%rbx), %eax
 151      0000
 152 00f6 85C0     		testl	%eax, %eax
 153 00f8 7805     		js	.L11
 154              		.loc 1 63 0 discriminator 2
 155 00fa E8000000 		call	XFreeFontNames
 155      00
 156              	.LVL10:
 157              	.L11:
 158              	.LBB37:
 159              		.loc 1 65 0 is_stmt 1
 160 00ff 488BAB88 		movq	136(%rbx), %rbp
 160      000000
 161              	.LVL11:
 162 0106 4885ED   		testq	%rbp, %rbp
 163 0109 7421     		je	.L8
 164              	.LVL12:
 165 010b 0F1F4400 		.p2align 4,,10
 165      00
 166              		.p2align 3
 167              	.L22:
 168              	.LBB38:
 169              		.loc 1 66 0
 170 0110 4C8B6500 		movq	0(%rbp), %r12
 171              	.LVL13:
 172 0114 4889EF   		movq	%rbp, %rdi
 173 0117 E8000000 		call	_ZN18Fl_Font_DescriptorD1Ev
 173      00
 174              	.LVL14:
 175 011c 4889EF   		movq	%rbp, %rdi
 176 011f E8000000 		call	_ZdlPv
 176      00
 177              	.LVL15:
 178              	.LBE38:
 179              		.loc 1 65 0
 180 0124 4D85E4   		testq	%r12, %r12
 181 0127 4C89E5   		movq	%r12, %rbp
 182 012a 75E4     		jne	.L22
 183              	.LVL16:
 184              	.L8:
 185              	.LBE37:
 186              	.LBE36:
 187              	.LBE35:
 188              		.loc 1 70 0
 189 012c 4C892B   		movq	%r13, (%rbx)
 190              		.loc 1 71 0
 191 012f C6430800 		movb	$0, 8(%rbx)
 192              		.loc 1 73 0
 193 0133 48C78390 		movq	$0, 144(%rbx)
 193      00000000 
 193      000000
 194              		.loc 1 75 0
 195 013e 48C78388 		movq	$0, 136(%rbx)
 195      00000000 
 195      000000
 196              		.loc 1 76 0
 197 0149 E8000000 		call	_ZN17Fl_Display_Device14display_deviceEv
 197      00
 198              	.LVL17:
 199 014e 488B7808 		movq	8(%rax), %rdi
 200              	.LVL18:
 201 0152 31D2     		xorl	%edx, %edx
 202 0154 BEFFFFFF 		movl	$-1, %esi
 202      FF
 203              		.loc 1 77 0
 204 0159 5B       		popq	%rbx
 205              		.cfi_remember_state
 206              		.cfi_def_cfa_offset 40
 207              	.LVL19:
 208 015a 5D       		popq	%rbp
 209              		.cfi_def_cfa_offset 32
 210              		.loc 1 76 0
 211 015b 488B07   		movq	(%rdi), %rax
 212              	.LVL20:
 213              		.loc 1 77 0
 214 015e 415C     		popq	%r12
 215              		.cfi_def_cfa_offset 24
 216 0160 415D     		popq	%r13
 217              		.cfi_def_cfa_offset 16
 218              	.LVL21:
 219 0162 415E     		popq	%r14
 220              		.cfi_def_cfa_offset 8
 221              		.loc 1 76 0
 222 0164 488B80B0 		movq	432(%rax), %rax
 222      010000
 223 016b FFE0     		jmp	*%rax
 224              	.LVL22:
 225 016d 0F1F00   		.p2align 4,,10
 226              		.p2align 3
 227              	.L3:
 228              		.cfi_restore_state
 229              	.LBB40:
 230              	.LBB33:
 231              		.loc 1 47 0
 232 0170 448D742D 		leal	(%rbp,%rbp), %r14d
 232      00
 233              		.loc 1 48 0
 234 0175 4889DF   		movq	%rbx, %rdi
 235 0178 4963C6   		movslq	%r14d, %rax
 236              		.loc 1 47 0
 237 017b 44893500 		movl	%r14d, _ZL10table_size(%rip)
 237      000000
 238              		.loc 1 48 0
 239 0182 488D3480 		leaq	(%rax,%rax,4), %rsi
 240 0186 48C1E605 		salq	$5, %rsi
 241 018a E8000000 		call	realloc
 241      00
 242              	.LVL23:
 243              	.LBE33:
 244              		.loc 1 50 0
 245 018f 4139EE   		cmpl	%ebp, %r14d
 246              	.LBB34:
 247              		.loc 1 48 0
 248 0192 48890500 		movq	%rax, fl_fonts(%rip)
 248      000000
 249              	.LBE34:
 250              		.loc 1 50 0
 251 0199 4889C3   		movq	%rax, %rbx
 252 019c 0F8FC5FE 		jg	.L4
 252      FFFF
 253 01a2 4489F5   		movl	%r14d, %ebp
 254 01a5 E90EFFFF 		jmp	.L31
 254      FF
 255              	.LVL24:
 256              	.L30:
 257              	.LBE40:
 258              	.LBB41:
 259              	.LBB39:
 260              		.loc 1 61 0 discriminator 1
 261 01aa 4C892B   		movq	%r13, (%rbx)
 262              	.LBE39:
 263              	.LBE41:
 264              		.loc 1 77 0 discriminator 1
 265 01ad 5B       		popq	%rbx
 266              		.cfi_def_cfa_offset 40
 267              	.LVL25:
 268 01ae 5D       		popq	%rbp
 269              		.cfi_def_cfa_offset 32
 270 01af 415C     		popq	%r12
 271              		.cfi_def_cfa_offset 24
 272 01b1 415D     		popq	%r13
 273              		.cfi_def_cfa_offset 16
 274              	.LVL26:
 275 01b3 415E     		popq	%r14
 276              		.cfi_def_cfa_offset 8
 277 01b5 C3       		ret
 278              		.cfi_endproc
 279              	.LFE482:
 281              		.section	.text.unlikely._ZN2Fl8set_fontEiPKc
 282              	.LCOLDE0:
 283              		.section	.text._ZN2Fl8set_fontEiPKc
 284              	.LHOTE0:
 285              		.section	.text.unlikely._ZN2Fl8set_fontEii,"ax",@progbits
 286              		.align 2
 287              	.LCOLDB1:
 288              		.section	.text._ZN2Fl8set_fontEii,"ax",@progbits
 289              	.LHOTB1:
 290              		.align 2
 291              		.p2align 4,,15
 292              		.globl	_ZN2Fl8set_fontEii
 294              	_ZN2Fl8set_fontEii:
 295              	.LFB483:
 296              		.loc 1 79 0
 297              		.cfi_startproc
 298              	.LVL27:
 299              	.LBB42:
 300              	.LBB43:
 301              		.loc 1 91 0
 302 0000 4863F6   		movslq	%esi, %rsi
 303 0003 488D04B6 		leaq	(%rsi,%rsi,4), %rax
 304 0007 48C1E005 		salq	$5, %rax
 305 000b 48030500 		addq	fl_fonts(%rip), %rax
 305      000000
 306              	.LBE43:
 307              	.LBE42:
 308              		.loc 1 80 0
 309 0012 488B30   		movq	(%rax), %rsi
 310              	.LVL28:
 311 0015 E9000000 		jmp	_ZN2Fl8set_fontEiPKc
 311      00
 312              	.LVL29:
 313              		.cfi_endproc
 314              	.LFE483:
 316              		.section	.text.unlikely._ZN2Fl8set_fontEii
 317              	.LCOLDE1:
 318              		.section	.text._ZN2Fl8set_fontEii
 319              	.LHOTE1:
 320              		.section	.text.unlikely._ZN2Fl8get_fontEi,"ax",@progbits
 321              		.align 2
 322              	.LCOLDB2:
 323              		.section	.text._ZN2Fl8get_fontEi,"ax",@progbits
 324              	.LHOTB2:
 325              		.align 2
 326              		.p2align 4,,15
 327              		.globl	_ZN2Fl8get_fontEi
 329              	_ZN2Fl8get_fontEi:
 330              	.LFB484:
 331              		.loc 1 87 0
 332              		.cfi_startproc
 333              	.LVL30:
 334              		.loc 1 91 0
 335 0000 4863FF   		movslq	%edi, %rdi
 336 0003 488D04BF 		leaq	(%rdi,%rdi,4), %rax
 337 0007 48C1E005 		salq	$5, %rax
 338 000b 48030500 		addq	fl_fonts(%rip), %rax
 338      000000
 339 0012 488B00   		movq	(%rax), %rax
 340              		.loc 1 92 0
 341 0015 C3       		ret
 342              		.cfi_endproc
 343              	.LFE484:
 345              		.section	.text.unlikely._ZN2Fl8get_fontEi
 346              	.LCOLDE2:
 347              		.section	.text._ZN2Fl8get_fontEi
 348              	.LHOTE2:
 349              		.section	.bss._ZL10table_size,"aw",@nobits
 350              		.align 4
 353              	_ZL10table_size:
 354 0000 00000000 		.zero	4
 355              		.text
 356              	.Letext0:
 357              		.section	.text.unlikely._ZN2Fl8set_fontEiPKc
 358              	.Letext_cold0:
 359              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 360              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 361              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 362              		.file 6 "/usr/include/libio.h"
 363              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 364              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
 365              		.file 9 "fltk-1.3.4-1/FL/Fl_Widget.H"
 366              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
 367              		.file 11 "/usr/include/X11/X.h"
 368              		.file 12 "/usr/include/X11/Xlib.h"
 369              		.file 13 "fltk-1.3.4-1/FL/Fl_Device.H"
 370              		.file 14 "fltk-1.3.4-1/src/Xutf8.h"
 371              		.file 15 "fltk-1.3.4-1/src/Fl_Font.H"
 372              		.file 16 "/usr/include/stdio.h"
 373              		.file 17 "/usr/include/stdlib.h"
 374              		.file 18 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_set_font.cxx
     /tmp/ccs5Soqp.s:16     .text._ZN2Fl8set_fontEiPKc:0000000000000000 _ZN2Fl8set_fontEiPKc
     /tmp/ccs5Soqp.s:353    .bss._ZL10table_size:0000000000000000 _ZL10table_size
     /tmp/ccs5Soqp.s:294    .text._ZN2Fl8set_fontEii:0000000000000000 _ZN2Fl8set_fontEii
     /tmp/ccs5Soqp.s:329    .text._ZN2Fl8get_fontEi:0000000000000000 _ZN2Fl8get_fontEi
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
fl_fonts
malloc
strcmp
XFreeFontNames
_ZN18Fl_Font_DescriptorD1Ev
_ZdlPv
_ZN17Fl_Display_Device14display_deviceEv
realloc
