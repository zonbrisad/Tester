   1              		.file	"Fl_Menu_add.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL12array_insertP12Fl_Menu_ItemiiPKci,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL12array_insertP12Fl_Menu_ItemiiPKci,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL12array_insertP12Fl_Menu_ItemiiPKci
  10              	.Ltext_cold0:
  11              		.section	.text._ZL12array_insertP12Fl_Menu_ItemiiPKci
  13              	_ZL12array_insertP12Fl_Menu_ItemiiPKci:
  14              	.LFB272:
  15              		.file 1 "fltk-1.3.4-1/src/Fl_Menu_add.cxx"
   1:fltk-1.3.4-1/src/Fl_Menu_add.cxx **** ...
  16              		.loc 1 56 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4157     		pushq	%r15
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 15, -16
  22 0002 4156     		pushq	%r14
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 14, -24
  25 0004 4189D7   		movl	%edx, %r15d
  26 0007 4155     		pushq	%r13
  27              		.cfi_def_cfa_offset 32
  28              		.cfi_offset 13, -32
  29 0009 4154     		pushq	%r12
  30              		.cfi_def_cfa_offset 40
  31              		.cfi_offset 12, -40
  32 000b 4989FD   		movq	%rdi, %r13
  33 000e 55       		pushq	%rbp
  34              		.cfi_def_cfa_offset 48
  35              		.cfi_offset 6, -48
  36 000f 53       		pushq	%rbx
  37              		.cfi_def_cfa_offset 56
  38              		.cfi_offset 3, -56
  39 0010 4989CE   		movq	%rcx, %r14
  40 0013 89F3     		movl	%esi, %ebx
  41 0015 4489C5   		movl	%r8d, %ebp
  42 0018 4883EC08 		subq	$8, %rsp
  43              		.cfi_def_cfa_offset 64
  44              	.LBB47:
  45              		.loc 1 57 0
  46 001c 4C8B2500 		movq	_ZL11local_array(%rip), %r12
  46      000000
  47 0023 4939FC   		cmpq	%rdi, %r12
  48 0026 0F84A400 		je	.L15
  48      0000
  49              	.LVL1:
  50              	.L2:
  51              	.LBE47:
  52              		.loc 1 65 0
  53 002c 4963C7   		movslq	%r15d, %rax
  54              	.LBB54:
  55              	.LBB55:
  56              		.file 2 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
  54:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  55:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  56:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void *
  57:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (memmove (void *__dest, const void *__src, size_t __len))
  58:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  59:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___memmove_chk (__dest, __src, __len, __bos0 (__dest));
  57              		.loc 2 59 0
  58 002f 4429FB   		subl	%r15d, %ebx
  59              	.LVL2:
  60              	.LBE55:
  61              	.LBE54:
  62              		.loc 1 65 0
  63 0032 488D14C5 		leaq	0(,%rax,8), %rdx
  63      00000000 
  64 003a 48C1E006 		salq	$6, %rax
  65 003e 4829D0   		subq	%rdx, %rax
  66              	.LBB58:
  67              	.LBB56:
  68              		.loc 2 59 0
  69 0041 4863D3   		movslq	%ebx, %rdx
  70 0044 488D0CD5 		leaq	0(,%rdx,8), %rcx
  70      00000000 
  71              	.LBE56:
  72              	.LBE58:
  73              		.loc 1 65 0
  74 004c 4D8D6405 		leaq	0(%r13,%rax), %r12
  74      00
  75              	.LVL3:
  76              	.LBB59:
  77              	.LBB57:
  78              		.loc 2 59 0
  79 0051 48C1E206 		salq	$6, %rdx
  80 0055 498D7C05 		leaq	56(%r13,%rax), %rdi
  80      38
  81              	.LVL4:
  82 005a 4829CA   		subq	%rcx, %rdx
  83 005d 4C89E6   		movq	%r12, %rsi
  84 0060 E8000000 		call	memmove
  84      00
  85              	.LVL5:
  86              	.LBE57:
  87              	.LBE59:
  88              		.loc 1 68 0
  89 0065 31C0     		xorl	%eax, %eax
  90 0067 4D85F6   		testq	%r14, %r14
  91 006a 7408     		je	.L5
  92              		.loc 1 68 0 is_stmt 0 discriminator 1
  93 006c 4C89F7   		movq	%r14, %rdi
  94 006f E8000000 		call	strdup
  94      00
  95              	.LVL6:
  96              	.L5:
  97              		.loc 1 68 0 discriminator 4
  98 0074 49890424 		movq	%rax, (%r12)
  99              		.loc 1 69 0 is_stmt 1 discriminator 4
 100 0078 41C74424 		movl	$0, 8(%r12)
 100      08000000 
 100      00
 101              		.loc 1 76 0 discriminator 4
 102 0081 4C89E8   		movq	%r13, %rax
 103              		.loc 1 70 0 discriminator 4
 104 0084 49C74424 		movq	$0, 16(%r12)
 104      10000000 
 104      00
 105              		.loc 1 71 0 discriminator 4
 106 008d 49C74424 		movq	$0, 24(%r12)
 106      18000000 
 106      00
 107              		.loc 1 72 0 discriminator 4
 108 0096 41896C24 		movl	%ebp, 32(%r12)
 108      20
 109              		.loc 1 73 0 discriminator 4
 110 009b 41C74424 		movl	$0, 48(%r12)
 110      30000000 
 110      00
 111 00a4 41C74424 		movl	$0, 44(%r12)
 111      2C000000 
 111      00
 112 00ad 41C64424 		movb	$0, 36(%r12)
 112      2400
 113              		.loc 1 74 0 discriminator 4
 114 00b3 41C74424 		movl	$0, 40(%r12)
 114      28000000 
 114      00
 115              		.loc 1 76 0 discriminator 4
 116 00bc 4883C408 		addq	$8, %rsp
 117              		.cfi_remember_state
 118              		.cfi_def_cfa_offset 56
 119 00c0 5B       		popq	%rbx
 120              		.cfi_def_cfa_offset 48
 121 00c1 5D       		popq	%rbp
 122              		.cfi_def_cfa_offset 40
 123              	.LVL7:
 124 00c2 415C     		popq	%r12
 125              		.cfi_def_cfa_offset 32
 126              	.LVL8:
 127 00c4 415D     		popq	%r13
 128              		.cfi_def_cfa_offset 24
 129              	.LVL9:
 130 00c6 415E     		popq	%r14
 131              		.cfi_def_cfa_offset 16
 132              	.LVL10:
 133 00c8 415F     		popq	%r15
 134              		.cfi_def_cfa_offset 8
 135              	.LVL11:
 136 00ca C3       		ret
 137              	.LVL12:
 138 00cb 0F1F4400 		.p2align 4,,10
 138      00
 139              		.p2align 3
 140              	.L15:
 141              		.cfi_restore_state
 142              	.LBB60:
 143              		.loc 1 57 0 discriminator 1
 144 00d0 39350000 		cmpl	%esi, _ZL17local_array_alloc(%rip)
 144      0000
 145 00d6 0F8F50FF 		jg	.L2
 145      FFFF
 146              	.LBB48:
 147              		.loc 1 58 0
 148 00dc 8D0436   		leal	(%rsi,%rsi), %eax
 149              		.loc 1 59 0
 150 00df 48BA0000 		movabsq	$164381386399023104, %rdx
 150      00000000 
 150      4802
 151              	.LVL13:
 152 00e9 48C7C7FF 		movq	$-1, %rdi
 152      FFFFFF
 153              	.LVL14:
 154              		.loc 1 58 0
 155 00f0 89050000 		movl	%eax, _ZL17local_array_alloc(%rip)
 155      0000
 156              		.loc 1 59 0
 157 00f6 4898     		cltq
 158 00f8 4839D0   		cmpq	%rdx, %rax
 159 00fb 7643     		jbe	.L16
 160              	.L3:
 161              		.loc 1 59 0 is_stmt 0 discriminator 4
 162 00fd E8000000 		call	_Znam
 162      00
 163              	.LVL15:
 164              	.LBB49:
 165              	.LBB50:
 166              		.loc 2 59 0 is_stmt 1 discriminator 4
 167 0102 4863D3   		movslq	%ebx, %rdx
 168              	.LBE50:
 169              	.LBE49:
 170              		.loc 1 59 0 discriminator 4
 171 0105 4989C5   		movq	%rax, %r13
 172              	.LVL16:
 173              	.LBB52:
 174              	.LBB51:
 175              		.loc 2 59 0 discriminator 4
 176 0108 4C89E6   		movq	%r12, %rsi
 177 010b 488D04D5 		leaq	0(,%rdx,8), %rax
 177      00000000 
 178              	.LVL17:
 179 0113 48C1E206 		salq	$6, %rdx
 180 0117 4C89EF   		movq	%r13, %rdi
 181 011a 4829C2   		subq	%rax, %rdx
 182 011d E8000000 		call	memcpy
 182      00
 183              	.LVL18:
 184              	.LBE51:
 185              	.LBE52:
 186              		.loc 1 61 0 discriminator 4
 187 0122 488B3D00 		movq	_ZL11local_array(%rip), %rdi
 187      000000
 188 0129 4885FF   		testq	%rdi, %rdi
 189 012c 7405     		je	.L4
 190              		.loc 1 61 0 is_stmt 0 discriminator 1
 191 012e E8000000 		call	_ZdaPv
 191      00
 192              	.LVL19:
 193              	.L4:
 194              		.loc 1 62 0 is_stmt 1
 195 0133 4C892D00 		movq	%r13, _ZL11local_array(%rip)
 195      000000
 196              	.LBE48:
 197 013a E9EDFEFF 		jmp	.L2
 197      FF
 198              	.LVL20:
 199 013f 90       		.p2align 4,,10
 200              		.p2align 3
 201              	.L16:
 202              	.LBB53:
 203              		.loc 1 59 0 discriminator 1
 204 0140 488D14C5 		leaq	0(,%rax,8), %rdx
 204      00000000 
 205 0148 48C1E006 		salq	$6, %rax
 206 014c 4829D0   		subq	%rdx, %rax
 207 014f 4889C7   		movq	%rax, %rdi
 208 0152 EBA9     		jmp	.L3
 209              	.LBE53:
 210              	.LBE60:
 211              		.cfi_endproc
 212              	.LFE272:
 214              		.section	.text.unlikely._ZL12array_insertP12Fl_Menu_ItemiiPKci
 215              	.LCOLDE0:
 216              		.section	.text._ZL12array_insertP12Fl_Menu_ItemiiPKci
 217              	.LHOTE0:
 218              		.section	.text.unlikely._ZN12Fl_Menu_Item6insertEiPKciPFvP9Fl_WidgetPvES4_i,"ax",@progbits
 219              		.align 2
 220              	.LCOLDB1:
 221              		.section	.text._ZN12Fl_Menu_Item6insertEiPKciPFvP9Fl_WidgetPvES4_i,"ax",@progbits
 222              	.LHOTB1:
 223              		.align 2
 224              		.p2align 4,,15
 225              		.globl	_ZN12Fl_Menu_Item6insertEiPKciPFvP9Fl_WidgetPvES4_i
 227              	_ZN12Fl_Menu_Item6insertEiPKciPFvP9Fl_WidgetPvES4_i:
 228              	.LFB275:
 229              		.loc 1 144 0
 230              		.cfi_startproc
 231              	.LVL21:
 232 0000 4157     		pushq	%r15
 233              		.cfi_def_cfa_offset 16
 234              		.cfi_offset 15, -16
 235 0002 4156     		pushq	%r14
 236              		.cfi_def_cfa_offset 24
 237              		.cfi_offset 14, -24
 238 0004 4989D7   		movq	%rdx, %r15
 239 0007 4155     		pushq	%r13
 240              		.cfi_def_cfa_offset 32
 241              		.cfi_offset 13, -32
 242 0009 4154     		pushq	%r12
 243              		.cfi_def_cfa_offset 40
 244              		.cfi_offset 12, -40
 245 000b 55       		pushq	%rbp
 246              		.cfi_def_cfa_offset 48
 247              		.cfi_offset 6, -48
 248 000c 53       		pushq	%rbx
 249              		.cfi_def_cfa_offset 56
 250              		.cfi_offset 3, -56
 251 000d 4889FD   		movq	%rdi, %rbp
 252 0010 89F3     		movl	%esi, %ebx
 253 0012 4881EC38 		subq	$1080, %rsp
 253      040000
 254              		.cfi_def_cfa_offset 1136
 255              		.loc 1 151 0
 256 0019 448B2D00 		movl	_ZL16local_array_size(%rip), %r13d
 256      000000
 257              		.loc 1 144 0
 258 0020 64488B04 		movq	%fs:40, %rax
 258      25280000 
 258      00
 259 0029 48898424 		movq	%rax, 1064(%rsp)
 259      28040000 
 260 0031 31C0     		xorl	%eax, %eax
 261              	.LVL22:
 262              		.loc 1 151 0
 263 0033 483B3D00 		cmpq	_ZL11local_array(%rip), %rdi
 263      000000
 264              		.loc 1 144 0
 265 003a 894C240C 		movl	%ecx, 12(%rsp)
 266 003e 4C894424 		movq	%r8, 16(%rsp)
 266      10
 267 0043 4C894C24 		movq	%r9, 24(%rsp)
 267      18
 268              		.loc 1 151 0
 269 0048 7408     		je	.L19
 270              		.loc 1 151 0 is_stmt 0 discriminator 1
 271 004a E8000000 		call	_ZNK12Fl_Menu_Item4sizeEv
 271      00
 272              	.LVL23:
 273 004f 4189C5   		movl	%eax, %r13d
 274              	.L19:
 275              	.LVL24:
 276              	.LBB61:
 277              	.LBB62:
 278              		.loc 1 159 0 is_stmt 1
 279 0052 410FB617 		movzbl	(%r15), %edx
 280 0056 4889E8   		movq	%rbp, %rax
 281 0059 4989EC   		movq	%rbp, %r12
 282 005c 31ED     		xorl	%ebp, %ebp
 283              	.LVL25:
 284 005e 80FA2F   		cmpb	$47, %dl
 285 0061 7471     		je	.L80
 286              	.LVL26:
 287              		.p2align 4,,10
 288 0063 0F1F4400 		.p2align 3
 288      00
 289              	.L42:
 290 0068 31ED     		xorl	%ebp, %ebp
 291              		.loc 1 162 0
 292 006a 80FA5F   		cmpb	$95, %dl
 293 006d 0F84DE01 		je	.L83
 293      0000
 294              	.LVL27:
 295              		.loc 1 166 0
 296 0073 410FB617 		movzbl	(%r15), %edx
 297 0077 84D2     		testb	%dl, %dl
 298 0079 0F84E701 		je	.L57
 298      0000
 299              	.L93:
 300 007f 80FA2F   		cmpb	$47, %dl
 301 0082 0F84DE01 		je	.L57
 301      0000
 302              		.loc 1 166 0 is_stmt 0 discriminator 2
 303 0088 488D4C24 		leaq	32(%rsp), %rcx
 303      20
 304              	.LVL28:
 305 008d EB27     		jmp	.L29
 306              	.LVL29:
 307 008f 90       		.p2align 4,,10
 308              		.p2align 3
 309              	.L84:
 310 0090 410FB657 		movzbl	1(%r15), %edx
 310      01
 311 0095 410FB637 		movzbl	(%r15), %esi
 312              		.loc 1 166 0
 313 0099 4883C101 		addq	$1, %rcx
 314              	.LVL30:
 315 009d 4983C701 		addq	$1, %r15
 316              	.LVL31:
 317 00a1 84D2     		testb	%dl, %dl
 318 00a3 408871FF 		movb	%sil, -1(%rcx)
 319 00a7 0F84B000 		je	.L60
 319      0000
 320              	.L89:
 321              		.loc 1 166 0 discriminator 7
 322 00ad 80FA2F   		cmpb	$47, %dl
 323 00b0 0F84A700 		je	.L60
 323      0000
 324              	.L29:
 325              		.loc 1 166 0 discriminator 2
 326 00b6 80FA5C   		cmpb	$92, %dl
 327 00b9 75D5     		jne	.L84
 328              		.loc 1 166 0 discriminator 3
 329 00bb 410FB677 		movzbl	1(%r15), %esi
 329      01
 330 00c0 4084F6   		testb	%sil, %sil
 331 00c3 757B     		jne	.L27
 332              	.LVL32:
 333              		.loc 1 166 0
 334 00c5 410FB617 		movzbl	(%r15), %edx
 335              		.loc 1 167 0 is_stmt 1
 336 00c9 C6410100 		movb	$0, 1(%rcx)
 337              		.loc 1 166 0
 338 00cd 8811     		movb	%dl, (%rcx)
 339              	.LVL33:
 340              	.L28:
 341              		.loc 1 169 0
 342 00cf 4C8D7C24 		leaq	32(%rsp), %r15
 342      20
 343              	.LVL34:
 344              	.L80:
 345              	.LBE62:
 346              	.LBE61:
 347              		.loc 1 191 0
 348 00d4 488B38   		movq	(%rax), %rdi
 349 00d7 4885FF   		testq	%rdi, %rdi
 350 00da 0F84A100 		je	.L85
 350      0000
 351              	.LVL35:
 352              		.p2align 4,,10
 353              		.p2align 3
 354              	.L50:
 355              		.loc 1 192 0
 356 00e0 F6402040 		testb	$64, 32(%rax)
 357 00e4 0F857E00 		jne	.L43
 357      0000
 358 00ea 0FB617   		movzbl	(%rdi), %edx
 359 00ed 410FB637 		movzbl	(%r15), %esi
 360 00f1 4C89F9   		movq	%r15, %rcx
 361              		.p2align 4,,10
 362 00f4 0F1F4000 		.p2align 3
 363              	.L44:
 364              	.LVL36:
 365              	.LBB73:
 366              	.LBB74:
 367              		.loc 1 84 0
 368 00f8 4038F2   		cmpb	%sil, %dl
 369 00fb 7418     		je	.L45
 370              	.LVL37:
 371              	.L87:
 372              		.loc 1 85 0
 373 00fd 80FA26   		cmpb	$38, %dl
 374 0100 742E     		je	.L86
 375              		.loc 1 86 0
 376 0102 4080FE26 		cmpb	$38, %sil
 377 0106 7560     		jne	.L43
 378              	.LVL38:
 379 0108 0FB67101 		movzbl	1(%rcx), %esi
 380 010c 4883C101 		addq	$1, %rcx
 381              	.LVL39:
 382              		.loc 1 84 0
 383 0110 4038F2   		cmpb	%sil, %dl
 384 0113 75E8     		jne	.L87
 385              	.LVL40:
 386              	.L45:
 387              		.loc 1 88 0
 388 0115 84D2     		testb	%dl, %dl
 389 0117 0F84C300 		je	.L88
 389      0000
 390              	.LVL41:
 391 011d 0FB65701 		movzbl	1(%rdi), %edx
 392 0121 0FB67101 		movzbl	1(%rcx), %esi
 393              		.loc 1 89 0
 394 0125 4883C701 		addq	$1, %rdi
 395              	.LVL42:
 396 0129 4883C101 		addq	$1, %rcx
 397              	.LVL43:
 398 012d EBC9     		jmp	.L44
 399 012f 90       		.p2align 4,,10
 400              		.p2align 3
 401              	.L86:
 402              	.LVL44:
 403 0130 0FB65701 		movzbl	1(%rdi), %edx
 404              		.loc 1 85 0
 405 0134 4883C701 		addq	$1, %rdi
 406              	.LVL45:
 407 0138 EBBE     		jmp	.L44
 408              	.LVL46:
 409 013a 660F1F44 		.p2align 4,,10
 409      0000
 410              		.p2align 3
 411              	.L27:
 412 0140 410FB657 		movzbl	2(%r15), %edx
 412      02
 413              	.LBE74:
 414              	.LBE73:
 415              	.LBB75:
 416              	.LBB71:
 417              		.loc 1 166 0 discriminator 5
 418 0145 4983C701 		addq	$1, %r15
 419              	.LVL47:
 420 0149 4883C101 		addq	$1, %rcx
 421              	.LVL48:
 422 014d 4983C701 		addq	$1, %r15
 423              	.LVL49:
 424 0151 408871FF 		movb	%sil, -1(%rcx)
 425 0155 84D2     		testb	%dl, %dl
 426 0157 0F8550FF 		jne	.L89
 426      FFFF
 427              	.L60:
 428              		.loc 1 166 0 is_stmt 0
 429 015d 4D89FE   		movq	%r15, %r14
 430 0160 E9090100 		jmp	.L24
 430      00
 431              	.LVL50:
 432              		.p2align 4,,10
 433 0165 0F1F00   		.p2align 3
 434              	.L43:
 435              	.LBE71:
 436              	.LBE75:
 437              	.LBB76:
 438              	.LBB77:
 439              		.file 3 "fltk-1.3.4-1/FL/Fl_Menu_Item.H"
   1:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
   2:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // "$Id: Fl_Menu_Item.H 11786 2016-06-18 00:32:18Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
   4:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // Menu item header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
   6:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
   8:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
  12:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
  14:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
  16:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
  18:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  19:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #ifndef Fl_Menu_Item_H
  20:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #define Fl_Menu_Item_H
  21:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  22:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #  include "Fl_Widget.H"
  23:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #  include "Fl_Image.H"
  24:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  25:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #  if defined(__APPLE__) && defined(check)
  26:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #    undef check
  27:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #  endif
  28:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  29:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // doxygen needs the following line to enable e.g. ::FL_MENU_TOGGLE to link to the enums
  30:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** /// @file
  31:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  32:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** enum { // values for flags:
  33:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_INACTIVE = 1,		///< Deactivate menu item (gray out)
  34:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_TOGGLE= 2,		///< Item is a checkbox toggle (shows checkbox for on/off state)
  35:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_VALUE = 4,		///< The on/off state for checkbox/radio buttons (if set, state is 'on')
  36:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_RADIO = 8,		///< Item is a radio button (one checkbox of many can be on)
  37:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_INVISIBLE = 0x10,	///< Item will not show up (shortcut will work)
  38:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_SUBMENU_POINTER = 0x20,	///< Indicates user_data() is a pointer to another menu array
  39:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_SUBMENU = 0x40,		///< This item is a submenu to other items
  40:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_DIVIDER = 0x80,	///< Creates divider line below this item. Also ends a group of radio but
  41:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_HORIZONTAL = 0x100	///< ??? -- reserved
  42:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** };
  43:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  44:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** extern FL_EXPORT Fl_Shortcut fl_old_shortcut(const char*);
  45:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  46:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** class Fl_Menu_;
  47:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  48:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** /**
  49:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   The Fl_Menu_Item structure defines a single menu item that
  50:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   is used by the Fl_Menu_ class.  
  51:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \code
  52:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   struct Fl_Menu_Item {
  53:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    const char*   text;     // label()
  54:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    ulong         shortcut_;
  55:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    Fl_Callback*  callback_;
  56:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    void*         user_data_;
  57:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    int           flags;
  58:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    uchar         labeltype_;
  59:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    uchar         labelfont_;
  60:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    uchar         labelsize_;
  61:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    uchar         labelcolor_;
  62:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   };
  63:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   
  64:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   enum { // values for flags:
  65:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_INACTIVE   = 1,      // Deactivate menu item (gray out)
  66:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_TOGGLE     = 2,      // Item is a checkbox toggle (shows checkbox for on/off state)
  67:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_VALUE      = 4,      // The on/off state for checkbox/radio buttons (if set, state is 'o
  68:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_RADIO      = 8,      // Item is a radio button (one checkbox of many can be on)
  69:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_INVISIBLE  = 0x10,   // Item will not show up (shortcut will work)
  70:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_SUBMENU_POINTER = 0x20,   // Indicates user_data() is a pointer to another menu array
  71:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_SUBMENU         = 0x40,   // This item is a submenu to other items
  72:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_DIVIDER    = 0x80,   // Creates divider line below this item. Also ends a group of radio
  73:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_HORIZONTAL = 0x100   // ??? -- reserved
  74:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   };
  75:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \endcode
  76:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Typically menu items are statically defined; for example:
  77:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \code
  78:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Menu_Item popup[] = {
  79:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&alpha",    FL_ALT+'a', the_cb, (void*)1},
  80:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&beta",     FL_ALT+'b', the_cb, (void*)2},
  81:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"gamma",     FL_ALT+'c', the_cb, (void*)3, FL_MENU_DIVIDER},
  82:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&strange",  0,          strange_cb},
  83:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&charm",    0,          charm_cb},
  84:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&truth",    0,          truth_cb},
  85:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"b&eauty",   0,          beauty_cb},
  86:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"sub&menu",  0,          0, 0, FL_SUBMENU},
  87:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"one"},
  88:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"two"},
  89:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"three"},
  90:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {0},
  91:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"inactive", FL_ALT+'i', 0, 0, FL_MENU_INACTIVE|FL_MENU_DIVIDER},
  92:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"invisible",FL_ALT+'i', 0, 0, FL_MENU_INVISIBLE},
  93:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"check",    FL_ALT+'i', 0, 0, FL_MENU_TOGGLE|FL_MENU_VALUE},
  94:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"box",      FL_ALT+'i', 0, 0, FL_MENU_TOGGLE},
  95:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {0}};
  96:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \endcode
  97:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   produces:
  98:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  99:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \image html   menu.png
 100:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \image latex  menu.png "menu" width=10cm
 101:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 102:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   A submenu title is identified by the bit FL_SUBMENU in the 
 103:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   flags field, and ends with a label() that is NULL.
 104:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   You can nest menus to any depth.  A pointer to the first item in the
 105:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   submenu can be treated as an Fl_Menu array itself.  It is also
 106:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   possible to make separate submenu arrays with FL_SUBMENU_POINTER flags.
 107:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 108:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   You should use the method functions to access structure members and
 109:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   not access them directly to avoid compatibility problems with future
 110:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   releases of FLTK.
 111:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** */
 112:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** struct FL_EXPORT Fl_Menu_Item {
 113:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const char *text;	    ///< menu item text, returned by label()
 114:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int shortcut_;	    ///< menu item shortcut
 115:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Callback *callback_;   ///< menu item callback
 116:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void *user_data_;	    ///< menu item user_data for the menu's callback
 117:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int flags;		    ///< menu item flags like FL_MENU_TOGGLE, FL_MENU_RADIO
 118:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   uchar labeltype_;	    ///< how the menu item text looks like
 119:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Font labelfont_;	    ///< which font for this menu item text
 120:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Fontsize labelsize_;   ///< size of menu item text
 121:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Color labelcolor_;	    ///< menu item text color
 122:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 123:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   // advance N items, skipping submenus:
 124:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const Fl_Menu_Item *next(int=1) const;
 125:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 126:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 127:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Advances a pointer by n items through a menu array, skipping
 128:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     the contents of submenus and invisible items. There are two calls so
 129:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     that you can advance through const and non-const data.
 130:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 131:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Menu_Item *next(int i=1) {
 132:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     return (Fl_Menu_Item*)(((const Fl_Menu_Item*)this)->next(i));}
 440              		.loc 3 132 0 is_stmt 1
 441 0168 4889C7   		movq	%rax, %rdi
 442 016b BE010000 		movl	$1, %esi
 442      00
 443 0170 E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 443      00
 444              	.LVL51:
 445              	.LBE77:
 446              	.LBE76:
 447              		.loc 1 191 0
 448 0175 488B38   		movq	(%rax), %rdi
 449 0178 4885FF   		testq	%rdi, %rdi
 450 017b 0F855FFF 		jne	.L50
 450      FFFF
 451              	.L85:
 452              	.LBB78:
 453              	.LBB79:
 454              		.loc 1 195 0
 455 0181 83FBFF   		cmpl	$-1, %ebx
 456 0184 0F840C02 		je	.L54
 456      0000
 457              	.LVL52:
 458              	.L51:
 459              		.loc 1 196 0 discriminator 4
 460 018a 0BAC2470 		orl	1136(%rsp), %ebp
 460      040000
 461 0191 4489EE   		movl	%r13d, %esi
 462 0194 4C89E7   		movq	%r12, %rdi
 463 0197 4C89F9   		movq	%r15, %rcx
 464 019a 89DA     		movl	%ebx, %edx
 465 019c 4189E8   		movl	%ebp, %r8d
 466 019f E8000000 		call	_ZL12array_insertP12Fl_Menu_ItemiiPKci
 466      00
 467              	.LVL53:
 468              		.loc 1 198 0 discriminator 4
 469 01a4 F6842470 		testb	$64, 1136(%rsp)
 469      04000040 
 470              		.loc 1 196 0 discriminator 4
 471 01ac 4989C4   		movq	%rax, %r12
 472              	.LVL54:
 473              		.loc 1 197 0 discriminator 4
 474 01af 418D7501 		leal	1(%r13), %esi
 475              	.LVL55:
 476              		.loc 1 198 0 discriminator 4
 477 01b3 0F850302 		jne	.L90
 477      0000
 478              	.L52:
 479              		.loc 1 202 0
 480 01b9 4863DB   		movslq	%ebx, %rbx
 481              	.LBE79:
 482 01bc 4189F5   		movl	%esi, %r13d
 483              	.LBB80:
 484 01bf 488D14DD 		leaq	0(,%rbx,8), %rdx
 484      00000000 
 485 01c7 4889D8   		movq	%rbx, %rax
 486              	.LVL56:
 487 01ca 48C1E006 		salq	$6, %rax
 488 01ce 4829D0   		subq	%rdx, %rax
 489 01d1 4C01E0   		addq	%r12, %rax
 490              	.LVL57:
 491              	.LBE80:
 492 01d4 EB11     		jmp	.L49
 493              	.LVL58:
 494 01d6 662E0F1F 		.p2align 4,,10
 494      84000000 
 494      0000
 495              		.p2align 3
 496              	.L88:
 497 01e0 0BAC2470 		orl	1136(%rsp), %ebp
 497      040000
 498              	.LVL59:
 499              	.L49:
 500              	.LBE78:
 501              		.loc 1 206 0
 502 01e7 8B5C240C 		movl	12(%rsp), %ebx
 503              		.loc 1 211 0
 504 01eb 4C3B2500 		cmpq	_ZL11local_array(%rip), %r12
 504      000000
 505              		.loc 1 209 0
 506 01f2 896820   		movl	%ebp, 32(%rax)
 507              		.loc 1 206 0
 508 01f5 895808   		movl	%ebx, 8(%rax)
 509              		.loc 1 207 0
 510 01f8 488B5C24 		movq	16(%rsp), %rbx
 510      10
 511 01fd 48895810 		movq	%rbx, 16(%rax)
 512              		.loc 1 208 0
 513 0201 488B5C24 		movq	24(%rsp), %rbx
 513      18
 514 0206 48895818 		movq	%rbx, 24(%rax)
 515              		.loc 1 211 0
 516 020a 0F84A001 		je	.L91
 516      0000
 517              	.L53:
 518              		.loc 1 212 0
 519 0210 4C29E0   		subq	%r12, %rax
 520              	.LVL60:
 521 0213 48C1F803 		sarq	$3, %rax
 522 0217 4889C2   		movq	%rax, %rdx
 523 021a 48B8B76D 		movabsq	$7905747460161236407, %rax
 523      DBB66DDB 
 523      B66D
 524 0224 480FAFC2 		imulq	%rdx, %rax
 525              		.loc 1 213 0
 526 0228 488B9C24 		movq	1064(%rsp), %rbx
 526      28040000 
 527 0230 6448331C 		xorq	%fs:40, %rbx
 527      25280000 
 527      00
 528 0239 0F859901 		jne	.L92
 528      0000
 529 023f 4881C438 		addq	$1080, %rsp
 529      040000
 530              		.cfi_remember_state
 531              		.cfi_def_cfa_offset 56
 532 0246 5B       		popq	%rbx
 533              		.cfi_def_cfa_offset 48
 534 0247 5D       		popq	%rbp
 535              		.cfi_def_cfa_offset 40
 536 0248 415C     		popq	%r12
 537              		.cfi_def_cfa_offset 32
 538              	.LVL61:
 539 024a 415D     		popq	%r13
 540              		.cfi_def_cfa_offset 24
 541              	.LVL62:
 542 024c 415E     		popq	%r14
 543              		.cfi_def_cfa_offset 16
 544 024e 415F     		popq	%r15
 545              		.cfi_def_cfa_offset 8
 546              	.LVL63:
 547 0250 C3       		ret
 548              	.LVL64:
 549              	.L83:
 550              		.cfi_restore_state
 551              	.LBB83:
 552              	.LBB72:
 553              		.loc 1 162 0 discriminator 1
 554 0251 4983C701 		addq	$1, %r15
 555              	.LVL65:
 556              		.loc 1 166 0 discriminator 1
 557 0255 410FB617 		movzbl	(%r15), %edx
 558              		.loc 1 162 0 discriminator 1
 559 0259 BD800000 		movl	$128, %ebp
 559      00
 560              	.LVL66:
 561              		.loc 1 166 0 discriminator 1
 562 025e 84D2     		testb	%dl, %dl
 563 0260 0F8519FE 		jne	.L93
 563      FFFF
 564              	.L57:
 565              		.loc 1 165 0
 566 0266 488D4C24 		leaq	32(%rsp), %rcx
 566      20
 567              	.LVL67:
 568              		.loc 1 166 0
 569 026b 4D89FE   		movq	%r15, %r14
 570              	.LVL68:
 571              	.L24:
 572              		.loc 1 170 0
 573 026e 80FA2F   		cmpb	$47, %dl
 574              		.loc 1 167 0
 575 0271 C60100   		movb	$0, (%rcx)
 576              	.LVL69:
 577              		.loc 1 170 0
 578 0274 0F8555FE 		jne	.L28
 578      FFFF
 579              	.LVL70:
 580              		.loc 1 175 0
 581 027a 488B10   		movq	(%rax), %rdx
 582              		.loc 1 172 0
 583 027d 4983C701 		addq	$1, %r15
 584              	.LVL71:
 585              		.loc 1 175 0
 586 0281 4889C7   		movq	%rax, %rdi
 587 0284 4885D2   		testq	%rdx, %rdx
 588 0287 747C     		je	.L33
 589              	.LVL72:
 590 0289 0F1F8000 		.p2align 4,,10
 590      000000
 591              		.p2align 3
 592              	.L40:
 593              		.loc 1 176 0
 594 0290 F6472040 		testb	$64, 32(%rdi)
 595 0294 745A     		je	.L34
 596 0296 0FB64C24 		movzbl	32(%rsp), %ecx
 596      20
 597 029b 0FB632   		movzbl	(%rdx), %esi
 598 029e 4C8D4424 		leaq	32(%rsp), %r8
 598      20
 599              	.LVL73:
 600              		.p2align 4,,10
 601 02a3 0F1F4400 		.p2align 3
 601      00
 602              	.L35:
 603              	.LBB63:
 604              	.LBB64:
 605              		.loc 1 84 0
 606 02a8 4038F1   		cmpb	%sil, %cl
 607 02ab 7418     		je	.L36
 608              	.LVL74:
 609              	.L95:
 610              		.loc 1 85 0
 611 02ad 80F926   		cmpb	$38, %cl
 612 02b0 742E     		je	.L94
 613              		.loc 1 86 0
 614 02b2 4080FE26 		cmpb	$38, %sil
 615 02b6 7538     		jne	.L34
 616              	.LVL75:
 617 02b8 0FB67201 		movzbl	1(%rdx), %esi
 618 02bc 4883C201 		addq	$1, %rdx
 619              	.LVL76:
 620              		.loc 1 84 0
 621 02c0 4038F1   		cmpb	%sil, %cl
 622 02c3 75E8     		jne	.L95
 623              	.LVL77:
 624              	.L36:
 625              		.loc 1 88 0
 626 02c5 84C9     		testb	%cl, %cl
 627 02c7 0F84A300 		je	.L39
 627      0000
 628              	.LVL78:
 629 02cd 410FB648 		movzbl	1(%r8), %ecx
 629      01
 630 02d2 0FB67201 		movzbl	1(%rdx), %esi
 631              		.loc 1 89 0
 632 02d6 4983C001 		addq	$1, %r8
 633              	.LVL79:
 634 02da 4883C201 		addq	$1, %rdx
 635              	.LVL80:
 636 02de EBC8     		jmp	.L35
 637              		.p2align 4,,10
 638              		.p2align 3
 639              	.L94:
 640              	.LVL81:
 641 02e0 410FB648 		movzbl	1(%r8), %ecx
 641      01
 642              		.loc 1 85 0
 643 02e5 4983C001 		addq	$1, %r8
 644              	.LVL82:
 645 02e9 EBBD     		jmp	.L35
 646              	.LVL83:
 647 02eb 0F1F4400 		.p2align 4,,10
 647      00
 648              		.p2align 3
 649              	.L34:
 650              	.LBE64:
 651              	.LBE63:
 652              	.LBB65:
 653              	.LBB66:
 654              		.loc 3 132 0
 655 02f0 BE010000 		movl	$1, %esi
 655      00
 656 02f5 E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 656      00
 657              	.LVL84:
 658              	.LBE66:
 659              	.LBE65:
 660              		.loc 1 175 0
 661 02fa 488B10   		movq	(%rax), %rdx
 662              	.LBB68:
 663              	.LBB67:
 664              		.loc 3 132 0
 665 02fd 4889C7   		movq	%rax, %rdi
 666              	.LVL85:
 667              	.LBE67:
 668              	.LBE68:
 669              		.loc 1 175 0
 670 0300 4885D2   		testq	%rdx, %rdx
 671 0303 758B     		jne	.L40
 672              	.L33:
 673              	.LBB69:
 674              	.LBB70:
 675              		.loc 1 179 0 discriminator 1
 676 0305 4889FB   		movq	%rdi, %rbx
 677 0308 48B8B76D 		movabsq	$7905747460161236407, %rax
 677      DBB66DDB 
 677      B66D
 678              	.LVL86:
 679              		.loc 1 180 0 discriminator 1
 680 0312 488D4C24 		leaq	32(%rsp), %rcx
 680      20
 681              	.LVL87:
 682              		.loc 1 179 0 discriminator 1
 683 0317 4C29E3   		subq	%r12, %rbx
 684              		.loc 1 180 0 discriminator 1
 685 031a 4189E8   		movl	%ebp, %r8d
 686 031d 4489EE   		movl	%r13d, %esi
 687              		.loc 1 179 0 discriminator 1
 688 0320 48C1FB03 		sarq	$3, %rbx
 689              		.loc 1 180 0 discriminator 1
 690 0324 4C89E7   		movq	%r12, %rdi
 691              	.LVL88:
 692 0327 4183C840 		orl	$64, %r8d
 693              		.loc 1 179 0 discriminator 1
 694 032b 480FAFD8 		imulq	%rax, %rbx
 695              	.LVL89:
 696              		.loc 1 180 0 discriminator 1
 697 032f 89DA     		movl	%ebx, %edx
 698 0331 E8000000 		call	_ZL12array_insertP12Fl_Menu_ItemiiPKci
 698      00
 699              	.LVL90:
 700              		.loc 1 182 0 discriminator 1
 701 0336 8D5301   		leal	1(%rbx), %edx
 702 0339 418D7501 		leal	1(%r13), %esi
 703              	.LVL91:
 704 033d 4889C7   		movq	%rax, %rdi
 705              		.loc 1 184 0 discriminator 1
 706 0340 4863DB   		movslq	%ebx, %rbx
 707              		.loc 1 182 0 discriminator 1
 708 0343 4531C0   		xorl	%r8d, %r8d
 709 0346 31C9     		xorl	%ecx, %ecx
 710 0348 E8000000 		call	_ZL12array_insertP12Fl_Menu_ItemiiPKci
 710      00
 711              	.LVL92:
 712 034d 4989C4   		movq	%rax, %r12
 713              	.LVL93:
 714              		.loc 1 184 0 discriminator 1
 715 0350 488D04DD 		leaq	0(,%rbx,8), %rax
 715      00000000 
 716              	.LVL94:
 717 0358 48C1E306 		salq	$6, %rbx
 718              	.LVL95:
 719 035c 4889DF   		movq	%rbx, %rdi
 720              		.loc 1 183 0 discriminator 1
 721 035f 4183C502 		addl	$2, %r13d
 722              	.LVL96:
 723              		.loc 1 184 0 discriminator 1
 724 0363 4829C7   		subq	%rax, %rdi
 725 0366 4C01E7   		addq	%r12, %rdi
 726              	.LVL97:
 727 0369 0F1F8000 		.p2align 4,,10
 727      000000
 728              		.p2align 3
 729              	.L39:
 730              	.LBE70:
 731              	.LBE69:
 732              		.loc 1 159 0
 733 0370 410FB656 		movzbl	1(%r14), %edx
 733      01
 734              		.loc 1 186 0
 735 0375 488D4738 		leaq	56(%rdi), %rax
 736              	.LVL98:
 737              		.loc 1 171 0
 738 0379 BBFFFFFF 		movl	$-1, %ebx
 738      FF
 739              		.loc 1 159 0
 740 037e 80FA2F   		cmpb	$47, %dl
 741 0381 0F85E1FC 		jne	.L42
 741      FFFF
 742              	.LVL99:
 743              	.LBE72:
 744              	.LBE83:
 745              		.loc 1 191 0
 746 0387 488B7F38 		movq	56(%rdi), %rdi
 747 038b 31ED     		xorl	%ebp, %ebp
 748 038d 4885FF   		testq	%rdi, %rdi
 749 0390 0F854AFD 		jne	.L50
 749      FFFF
 750              	.LVL100:
 751              	.L54:
 752              	.LBB84:
 753              	.LBB81:
 754              		.loc 1 195 0 discriminator 1
 755 0396 4C29E0   		subq	%r12, %rax
 756              	.LVL101:
 757 0399 4889C3   		movq	%rax, %rbx
 758 039c 48C1FB03 		sarq	$3, %rbx
 759 03a0 69DBB76D 		imull	$-1227133513, %ebx, %ebx
 759      DBB6
 760 03a6 E9DFFDFF 		jmp	.L51
 760      FF
 761              	.LVL102:
 762 03ab 0F1F4400 		.p2align 4,,10
 762      00
 763              		.p2align 3
 764              	.L91:
 765              	.LBE81:
 766              	.LBE84:
 767              		.loc 1 211 0 discriminator 1
 768 03b0 44892D00 		movl	%r13d, _ZL16local_array_size(%rip)
 768      000000
 769 03b7 E954FEFF 		jmp	.L53
 769      FF
 770              	.LVL103:
 771              	.L90:
 772              	.LBB85:
 773              	.LBB82:
 774              		.loc 1 199 0
 775 03bc 8D5301   		leal	1(%rbx), %edx
 776 03bf 4531C0   		xorl	%r8d, %r8d
 777 03c2 31C9     		xorl	%ecx, %ecx
 778 03c4 4889C7   		movq	%rax, %rdi
 779 03c7 E8000000 		call	_ZL12array_insertP12Fl_Menu_ItemiiPKci
 779      00
 780              	.LVL104:
 781              		.loc 1 200 0
 782 03cc 418D7502 		leal	2(%r13), %esi
 783              		.loc 1 199 0
 784 03d0 4989C4   		movq	%rax, %r12
 785              	.LVL105:
 786 03d3 E9E1FDFF 		jmp	.L52
 786      FF
 787              	.LVL106:
 788              	.L92:
 789              	.LBE82:
 790              	.LBE85:
 791              		.loc 1 213 0
 792 03d8 E8000000 		call	__stack_chk_fail
 792      00
 793              	.LVL107:
 794              		.cfi_endproc
 795              	.LFE275:
 797              		.section	.text.unlikely._ZN12Fl_Menu_Item6insertEiPKciPFvP9Fl_WidgetPvES4_i
 798              	.LCOLDE1:
 799              		.section	.text._ZN12Fl_Menu_Item6insertEiPKciPFvP9Fl_WidgetPvES4_i
 800              	.LHOTE1:
 801              		.section	.text.unlikely._ZN12Fl_Menu_Item3addEPKciPFvP9Fl_WidgetPvES4_i,"ax",@progbits
 802              		.align 2
 803              	.LCOLDB2:
 804              		.section	.text._ZN12Fl_Menu_Item3addEPKciPFvP9Fl_WidgetPvES4_i,"ax",@progbits
 805              	.LHOTB2:
 806              		.align 2
 807              		.p2align 4,,15
 808              		.globl	_ZN12Fl_Menu_Item3addEPKciPFvP9Fl_WidgetPvES4_i
 810              	_ZN12Fl_Menu_Item3addEPKciPFvP9Fl_WidgetPvES4_i:
 811              	.LFB274:
 812              		.loc 1 112 0
 813              		.cfi_startproc
 814              	.LVL108:
 815 0000 4883EC10 		subq	$16, %rsp
 816              		.cfi_def_cfa_offset 24
 817              		.loc 1 113 0
 818 0004 4151     		pushq	%r9
 819              		.cfi_def_cfa_offset 32
 820 0006 4D89C1   		movq	%r8, %r9
 821              	.LVL109:
 822 0009 4989C8   		movq	%rcx, %r8
 823              	.LVL110:
 824 000c 89D1     		movl	%edx, %ecx
 825              	.LVL111:
 826 000e 4889F2   		movq	%rsi, %rdx
 827              	.LVL112:
 828 0011 BEFFFFFF 		movl	$-1, %esi
 828      FF
 829              	.LVL113:
 830 0016 E8000000 		call	_ZN12Fl_Menu_Item6insertEiPKciPFvP9Fl_WidgetPvES4_i
 830      00
 831              	.LVL114:
 832              		.loc 1 114 0
 833 001b 4883C418 		addq	$24, %rsp
 834              		.cfi_def_cfa_offset 8
 835 001f C3       		ret
 836              		.cfi_endproc
 837              	.LFE274:
 839              		.section	.text.unlikely._ZN12Fl_Menu_Item3addEPKciPFvP9Fl_WidgetPvES4_i
 840              	.LCOLDE2:
 841              		.section	.text._ZN12Fl_Menu_Item3addEPKciPFvP9Fl_WidgetPvES4_i
 842              	.LHOTE2:
 843              		.section	.text.unlikely._ZN8Fl_Menu_6insertEiPKciPFvP9Fl_WidgetPvES4_i,"ax",@progbits
 844              		.align 2
 845              	.LCOLDB3:
 846              		.section	.text._ZN8Fl_Menu_6insertEiPKciPFvP9Fl_WidgetPvES4_i,"ax",@progbits
 847              	.LHOTB3:
 848              		.align 2
 849              		.p2align 4,,15
 850              		.globl	_ZN8Fl_Menu_6insertEiPKciPFvP9Fl_WidgetPvES4_i
 852              	_ZN8Fl_Menu_6insertEiPKciPFvP9Fl_WidgetPvES4_i:
 853              	.LFB277:
 854              		.loc 1 375 0
 855              		.cfi_startproc
 856              	.LVL115:
 857 0000 4157     		pushq	%r15
 858              		.cfi_def_cfa_offset 16
 859              		.cfi_offset 15, -16
 860 0002 4156     		pushq	%r14
 861              		.cfi_def_cfa_offset 24
 862              		.cfi_offset 14, -24
 863 0004 4D89CF   		movq	%r9, %r15
 864 0007 4155     		pushq	%r13
 865              		.cfi_def_cfa_offset 32
 866              		.cfi_offset 13, -32
 867 0009 4154     		pushq	%r12
 868              		.cfi_def_cfa_offset 40
 869              		.cfi_offset 12, -40
 870 000b 4189CD   		movl	%ecx, %r13d
 871 000e 55       		pushq	%rbp
 872              		.cfi_def_cfa_offset 48
 873              		.cfi_offset 6, -48
 874 000f 53       		pushq	%rbx
 875              		.cfi_def_cfa_offset 56
 876              		.cfi_offset 3, -56
 877 0010 4889FD   		movq	%rdi, %rbp
 878 0013 4D89C6   		movq	%r8, %r14
 879 0016 4883EC28 		subq	$40, %rsp
 880              		.cfi_def_cfa_offset 96
 881              	.LBB86:
 882              		.loc 1 377 0
 883 001a 4C8B2500 		movq	fl_menu_array_owner(%rip), %r12
 883      000000
 884              	.LBE86:
 885              		.loc 1 375 0
 886 0021 8974240C 		movl	%esi, 12(%rsp)
 887 0025 48895424 		movq	%rdx, 16(%rsp)
 887      10
 888              	.LBB105:
 889              		.loc 1 377 0
 890 002a 4939FC   		cmpq	%rdi, %r12
 891 002d 0F84AD01 		je	.L122
 891      0000
 892              	.LBB87:
 893              	.LBB88:
 894              		.loc 1 378 0
 895 0033 4D85E4   		testq	%r12, %r12
 896 0036 0F84B401 		je	.L123
 896      0000
 897              	.LVL116:
 898              	.LBB89:
 899              		.loc 1 381 0
 900 003c 498B9C24 		movq	128(%r12), %rbx
 900      80000000 
 901 0044 482B1D00 		subq	_ZL11local_array(%rip), %rbx
 901      000000
 902 004b 48B8B76D 		movabsq	$7905747460161236407, %rax
 902      DBB66DDB 
 902      B66D
 903              		.loc 1 383 0
 904 0055 48631500 		movslq	_ZL16local_array_size(%rip), %rdx
 904      000000
 905              	.LVL117:
 906              		.loc 1 381 0
 907 005c 48C1FB03 		sarq	$3, %rbx
 908 0060 480FAFD8 		imulq	%rax, %rbx
 909              	.LVL118:
 910              		.loc 1 383 0
 911 0064 48B80000 		movabsq	$164381386399023104, %rax
 911      00000000 
 911      4802
 912 006e 4839C2   		cmpq	%rax, %rdx
 913 0071 488D04D5 		leaq	0(,%rdx,8), %rax
 913      00000000 
 914 0079 0F863101 		jbe	.L104
 914      0000
 915 007f 48C1E206 		salq	$6, %rdx
 916 0083 48C7C7FF 		movq	$-1, %rdi
 916      FFFFFF
 917              	.LVL119:
 918 008a 4829C2   		subq	%rax, %rdx
 919              	.L105:
 920 008d 48895424 		movq	%rdx, 24(%rsp)
 920      18
 921              		.loc 1 383 0 is_stmt 0 discriminator 4
 922 0092 E8000000 		call	_Znam
 922      00
 923              	.LVL120:
 924              		.loc 1 384 0 is_stmt 1 discriminator 4
 925 0097 4C8B0500 		movq	_ZL11local_array(%rip), %r8
 925      000000
 926              	.LBB90:
 927              	.LBB91:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 928              		.loc 2 53 0 discriminator 4
 929 009e 488B5424 		movq	24(%rsp), %rdx
 929      18
 930 00a3 4889C7   		movq	%rax, %rdi
 931              	.LBE91:
 932              	.LBE90:
 933              		.loc 1 383 0 discriminator 4
 934 00a6 49894424 		movq	%rax, 120(%r12)
 934      78
 935              	.LVL121:
 936              	.LBB94:
 937              	.LBB92:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 938              		.loc 2 53 0 discriminator 4
 939 00ab 4C89C6   		movq	%r8, %rsi
 940 00ae 4C894424 		movq	%r8, 24(%rsp)
 940      18
 941 00b3 E8000000 		call	memcpy
 941      00
 942              	.LVL122:
 943              	.LBE92:
 944              	.LBE94:
 945              		.loc 1 385 0 discriminator 4
 946 00b8 4983BC24 		cmpq	$0, 128(%r12)
 946      80000000 
 946      00
 947              	.LBB95:
 948              	.LBB93:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 949              		.loc 2 53 0 discriminator 4
 950 00c1 4989C1   		movq	%rax, %r9
 951              	.LVL123:
 952              	.LBE93:
 953              	.LBE95:
 954              		.loc 1 385 0 discriminator 4
 955 00c4 4C8B4424 		movq	24(%rsp), %r8
 955      18
 956 00c9 741D     		je	.L106
 957              		.loc 1 385 0 is_stmt 0 discriminator 1
 958 00cb 4863DB   		movslq	%ebx, %rbx
 959 00ce 488D04DD 		leaq	0(,%rbx,8), %rax
 959      00000000 
 960 00d6 48C1E306 		salq	$6, %rbx
 961              	.LVL124:
 962 00da 4829C3   		subq	%rax, %rbx
 963 00dd 4C01CB   		addq	%r9, %rbx
 964 00e0 49899C24 		movq	%rbx, 128(%r12)
 964      80000000 
 965              	.L106:
 966              	.LBE89:
 967              	.LBE88:
 968              		.loc 1 387 0 is_stmt 1
 969 00e8 48837D78 		cmpq	$0, 120(%rbp)
 969      00
 970 00ed 0F841D01 		je	.L103
 970      0000
 971              	.LVL125:
 972              	.L113:
 973              		.loc 1 389 0 discriminator 1
 974 00f3 4C89C7   		movq	%r8, %rdi
 975 00f6 E8000000 		call	_ZdaPv
 975      00
 976              	.LVL126:
 977              	.L107:
 978              		.loc 1 390 0
 979 00fb 80BD8800 		cmpb	$0, 136(%rbp)
 979      000000
 980 0102 0F84C000 		je	.L124
 980      0000
 981              	.L108:
 982              		.loc 1 392 0
 983 0108 4889EF   		movq	%rbp, %rdi
 984 010b E8000000 		call	_ZNK8Fl_Menu_4sizeEv
 984      00
 985              	.LVL127:
 986              		.loc 1 393 0
 987 0110 488B7D78 		movq	120(%rbp), %rdi
 988              		.loc 1 392 0
 989 0114 89050000 		movl	%eax, _ZL16local_array_size(%rip)
 989      0000
 990 011a 89050000 		movl	%eax, _ZL17local_array_alloc(%rip)
 990      0000
 991              		.loc 1 393 0
 992 0120 48893D00 		movq	%rdi, _ZL11local_array(%rip)
 992      000000
 993              	.LVL128:
 994              	.L109:
 995              		.loc 1 407 0
 996 0127 48892D00 		movq	%rbp, fl_menu_array_owner(%rip)
 996      000000
 997              	.L100:
 998              	.LBE87:
 999              	.LBE105:
 1000              		.loc 1 409 0
 1001 012e 4883EC08 		subq	$8, %rsp
 1002              		.cfi_def_cfa_offset 104
 1003 0132 4D89F0   		movq	%r14, %r8
 1004 0135 4489E9   		movl	%r13d, %ecx
 1005 0138 8B442468 		movl	104(%rsp), %eax
 1006 013c 4D89F9   		movq	%r15, %r9
 1007 013f 50       		pushq	%rax
 1008              		.cfi_def_cfa_offset 112
 1009 0140 488B5424 		movq	32(%rsp), %rdx
 1009      20
 1010 0145 8B74241C 		movl	28(%rsp), %esi
 1011 0149 E8000000 		call	_ZN12Fl_Menu_Item6insertEiPKciPFvP9Fl_WidgetPvES4_i
 1011      00
 1012              	.LVL129:
 1013              		.loc 1 411 0
 1014 014e 488BB580 		movq	128(%rbp), %rsi
 1014      000000
 1015              		.loc 1 412 0
 1016 0155 488B3D00 		movq	_ZL11local_array(%rip), %rdi
 1016      000000
 1017              		.loc 1 411 0
 1018 015c 4889F1   		movq	%rsi, %rcx
 1019 015f 482B4D78 		subq	120(%rbp), %rcx
 1020              		.loc 1 412 0
 1021 0163 48897D78 		movq	%rdi, 120(%rbp)
 1022              		.loc 1 411 0
 1023 0167 48C1F903 		sarq	$3, %rcx
 1024 016b 4889CA   		movq	%rcx, %rdx
 1025 016e 48B9B76D 		movabsq	$7905747460161236407, %rcx
 1025      DBB66DDB 
 1025      B66D
 1026 0178 480FAFCA 		imulq	%rdx, %rcx
 1027              	.LVL130:
 1028              		.loc 1 413 0
 1029 017c 4885F6   		testq	%rsi, %rsi
 1030 017f 5A       		popq	%rdx
 1031              		.cfi_def_cfa_offset 104
 1032 0180 4158     		popq	%r8
 1033              		.cfi_def_cfa_offset 96
 1034 0182 741C     		je	.L116
 1035              		.loc 1 413 0 is_stmt 0 discriminator 1
 1036 0184 4863D1   		movslq	%ecx, %rdx
 1037 0187 488D0CD5 		leaq	0(,%rdx,8), %rcx
 1037      00000000 
 1038              	.LVL131:
 1039 018f 48C1E206 		salq	$6, %rdx
 1040              	.LVL132:
 1041 0193 4829CA   		subq	%rcx, %rdx
 1042 0196 4801FA   		addq	%rdi, %rdx
 1043 0199 48899580 		movq	%rdx, 128(%rbp)
 1043      000000
 1044              	.L116:
 1045              		.loc 1 415 0 is_stmt 1
 1046 01a0 4883C428 		addq	$40, %rsp
 1047              		.cfi_remember_state
 1048              		.cfi_def_cfa_offset 56
 1049 01a4 5B       		popq	%rbx
 1050              		.cfi_def_cfa_offset 48
 1051 01a5 5D       		popq	%rbp
 1052              		.cfi_def_cfa_offset 40
 1053              	.LVL133:
 1054 01a6 415C     		popq	%r12
 1055              		.cfi_def_cfa_offset 32
 1056 01a8 415D     		popq	%r13
 1057              		.cfi_def_cfa_offset 24
 1058              	.LVL134:
 1059 01aa 415E     		popq	%r14
 1060              		.cfi_def_cfa_offset 16
 1061              	.LVL135:
 1062 01ac 415F     		popq	%r15
 1063              		.cfi_def_cfa_offset 8
 1064              	.LVL136:
 1065 01ae C3       		ret
 1066              	.LVL137:
 1067 01af 90       		.p2align 4,,10
 1068              		.p2align 3
 1069              	.L104:
 1070              		.cfi_restore_state
 1071              	.LBB106:
 1072              	.LBB104:
 1073              	.LBB97:
 1074              	.LBB96:
 1075              		.loc 1 383 0 discriminator 1
 1076 01b0 48C1E206 		salq	$6, %rdx
 1077 01b4 4889D7   		movq	%rdx, %rdi
 1078              	.LVL138:
 1079 01b7 4829C7   		subq	%rax, %rdi
 1080 01ba 4889FA   		movq	%rdi, %rdx
 1081 01bd E9CBFEFF 		jmp	.L105
 1081      FF
 1082              	.LVL139:
 1083              		.p2align 4,,10
 1084 01c2 660F1F44 		.p2align 3
 1084      0000
 1085              	.L124:
 1086              	.LBE96:
 1087              	.LBE97:
 1088              		.loc 1 390 0 discriminator 1
 1089 01c8 488B7578 		movq	120(%rbp), %rsi
 1090 01cc 31D2     		xorl	%edx, %edx
 1091 01ce 4889EF   		movq	%rbp, %rdi
 1092 01d1 E8000000 		call	_ZN8Fl_Menu_4copyEPK12Fl_Menu_ItemPv
 1092      00
 1093              	.LVL140:
 1094 01d6 E92DFFFF 		jmp	.L108
 1094      FF
 1095              	.LVL141:
 1096 01db 0F1F4400 		.p2align 4,,10
 1096      00
 1097              		.p2align 3
 1098              	.L122:
 1099 01e0 488B7F78 		movq	120(%rdi), %rdi
 1100              	.LVL142:
 1101 01e4 E945FFFF 		jmp	.L100
 1101      FF
 1102              	.LVL143:
 1103 01e9 0F1F8000 		.p2align 4,,10
 1103      000000
 1104              		.p2align 3
 1105              	.L123:
 1106              		.loc 1 387 0
 1107 01f0 48837F78 		cmpq	$0, 120(%rdi)
 1107      00
 1108 01f5 4C8B0500 		movq	_ZL11local_array(%rip), %r8
 1108      000000
 1109              	.LVL144:
 1110 01fc 7412     		je	.L103
 1111              		.loc 1 389 0
 1112 01fe 4D85C0   		testq	%r8, %r8
 1113 0201 0F84F4FE 		je	.L107
 1113      FFFF
 1114 0207 E9E7FEFF 		jmp	.L113
 1114      FF
 1115              	.LVL145:
 1116 020c 0F1F4000 		.p2align 4,,10
 1117              		.p2align 3
 1118              	.L103:
 1119              		.loc 1 397 0
 1120 0210 4D85C0   		testq	%r8, %r8
 1121              		.loc 1 396 0
 1122 0213 C6858800 		movb	$2, 136(%rbp)
 1122      000002
 1123              		.loc 1 397 0
 1124 021a 743D     		je	.L110
 1125              		.loc 1 398 0
 1126 021c 4C894578 		movq	%r8, 120(%rbp)
 1127              	.L111:
 1128              	.LVL146:
 1129              	.LBB98:
 1130              	.LBB99:
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
 1131              		.loc 2 90 0
 1132 0220 498D7808 		leaq	8(%r8), %rdi
 1133 0224 49C70000 		movq	$0, (%r8)
 1133      000000
 1134              	.LVL147:
 1135 022b 49C74030 		movq	$0, 48(%r8)
 1135      00000000 
 1136 0233 31C0     		xorl	%eax, %eax
 1137 0235 4883E7F8 		andq	$-8, %rdi
 1138 0239 4929F8   		subq	%rdi, %r8
 1139 023c 418D4838 		leal	56(%r8), %ecx
 1140 0240 C1E903   		shrl	$3, %ecx
 1141 0243 F348AB   		rep stosq
 1142              	.LVL148:
 1143              	.LBE99:
 1144              	.LBE98:
 1145              		.loc 1 405 0
 1146 0246 C7050000 		movl	$1, _ZL16local_array_size(%rip)
 1146      00000100 
 1146      0000
 1147 0250 488B7D78 		movq	120(%rbp), %rdi
 1148 0254 E9CEFEFF 		jmp	.L109
 1148      FF
 1149              	.LVL149:
 1150              	.L110:
 1151              		.loc 1 401 0
 1152 0259 BF480300 		movl	$840, %edi
 1152      00
 1153              		.loc 1 400 0
 1154 025e C7050000 		movl	$15, _ZL17local_array_alloc(%rip)
 1154      00000F00 
 1154      0000
 1155              		.loc 1 401 0
 1156 0268 E8000000 		call	_Znam
 1156      00
 1157              	.LVL150:
 1158              	.LBB100:
 1159              	.LBB101:
 1160              		.loc 2 90 0
 1161 026d 48631500 		movslq	_ZL17local_array_alloc(%rip), %rdx
 1161      000000
 1162              	.LBE101:
 1163              	.LBE100:
 1164              		.loc 1 401 0
 1165 0274 4889C3   		movq	%rax, %rbx
 1166 0277 48894578 		movq	%rax, 120(%rbp)
 1167 027b 48890500 		movq	%rax, _ZL11local_array(%rip)
 1167      000000
 1168              	.LVL151:
 1169              	.LBB103:
 1170              	.LBB102:
 1171              		.loc 2 90 0
 1172 0282 B9480300 		movl	$840, %ecx
 1172      00
 1173 0287 31F6     		xorl	%esi, %esi
 1174 0289 4889DF   		movq	%rbx, %rdi
 1175 028c 488D04D5 		leaq	0(,%rdx,8), %rax
 1175      00000000 
 1176              	.LVL152:
 1177 0294 48C1E206 		salq	$6, %rdx
 1178 0298 4829C2   		subq	%rax, %rdx
 1179 029b E8000000 		call	__memset_chk
 1179      00
 1180              	.LVL153:
 1181 02a0 4989D8   		movq	%rbx, %r8
 1182 02a3 E978FFFF 		jmp	.L111
 1182      FF
 1183              	.LBE102:
 1184              	.LBE103:
 1185              	.LBE104:
 1186              	.LBE106:
 1187              		.cfi_endproc
 1188              	.LFE277:
 1190              		.section	.text.unlikely._ZN8Fl_Menu_6insertEiPKciPFvP9Fl_WidgetPvES4_i
 1191              	.LCOLDE3:
 1192              		.section	.text._ZN8Fl_Menu_6insertEiPKciPFvP9Fl_WidgetPvES4_i
 1193              	.LHOTE3:
 1194              		.section	.text.unlikely._ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i,"ax",@progbits
 1195              		.align 2
 1196              	.LCOLDB4:
 1197              		.section	.text._ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i,"ax",@progbits
 1198              	.LHOTB4:
 1199              		.align 2
 1200              		.p2align 4,,15
 1201              		.globl	_ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i
 1203              	_ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i:
 1204              	.LFB276:
 1205              		.loc 1 332 0
 1206              		.cfi_startproc
 1207              	.LVL154:
 1208 0000 4883EC10 		subq	$16, %rsp
 1209              		.cfi_def_cfa_offset 24
 1210              		.loc 1 333 0
 1211 0004 4151     		pushq	%r9
 1212              		.cfi_def_cfa_offset 32
 1213 0006 4D89C1   		movq	%r8, %r9
 1214              	.LVL155:
 1215 0009 4989C8   		movq	%rcx, %r8
 1216              	.LVL156:
 1217 000c 89D1     		movl	%edx, %ecx
 1218              	.LVL157:
 1219 000e 4889F2   		movq	%rsi, %rdx
 1220              	.LVL158:
 1221 0011 BEFFFFFF 		movl	$-1, %esi
 1221      FF
 1222              	.LVL159:
 1223 0016 E8000000 		call	_ZN8Fl_Menu_6insertEiPKciPFvP9Fl_WidgetPvES4_i
 1223      00
 1224              	.LVL160:
 1225              		.loc 1 334 0
 1226 001b 4883C418 		addq	$24, %rsp
 1227              		.cfi_def_cfa_offset 8
 1228 001f C3       		ret
 1229              		.cfi_endproc
 1230              	.LFE276:
 1232              		.section	.text.unlikely._ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i
 1233              	.LCOLDE4:
 1234              		.section	.text._ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i
 1235              	.LHOTE4:
 1236              		.section	.text.unlikely._ZN8Fl_Menu_3addEPKc,"ax",@progbits
 1237              		.align 2
 1238              	.LCOLDB5:
 1239              		.section	.text._ZN8Fl_Menu_3addEPKc,"ax",@progbits
 1240              	.LHOTB5:
 1241              		.align 2
 1242              		.p2align 4,,15
 1243              		.globl	_ZN8Fl_Menu_3addEPKc
 1245              	_ZN8Fl_Menu_3addEPKc:
 1246              	.LFB278:
 1247              		.loc 1 435 0
 1248              		.cfi_startproc
 1249              	.LVL161:
 1250 0000 4156     		pushq	%r14
 1251              		.cfi_def_cfa_offset 16
 1252              		.cfi_offset 14, -16
 1253 0002 4155     		pushq	%r13
 1254              		.cfi_def_cfa_offset 24
 1255              		.cfi_offset 13, -24
 1256 0004 4989FE   		movq	%rdi, %r14
 1257 0007 4154     		pushq	%r12
 1258              		.cfi_def_cfa_offset 32
 1259              		.cfi_offset 12, -32
 1260 0009 55       		pushq	%rbp
 1261              		.cfi_def_cfa_offset 40
 1262              		.cfi_offset 6, -40
 1263 000a 4889F5   		movq	%rsi, %rbp
 1264 000d 53       		pushq	%rbx
 1265              		.cfi_def_cfa_offset 48
 1266              		.cfi_offset 3, -48
 1267 000e 4881EC10 		subq	$1040, %rsp
 1267      040000
 1268              		.cfi_def_cfa_offset 1088
 1269 0015 0FB616   		movzbl	(%rsi), %edx
 1270              		.loc 1 435 0
 1271 0018 64488B04 		movq	%fs:40, %rax
 1271      25280000 
 1271      00
 1272 0021 48898424 		movq	%rax, 1032(%rsp)
 1272      08040000 
 1273 0029 31C0     		xorl	%eax, %eax
 1274              	.LVL162:
 1275 002b 4C8DAC24 		leaq	1022(%rsp), %r13
 1275      FE030000 
 1276              	.LVL163:
 1277              		.p2align 4,,10
 1278 0033 0F1F4400 		.p2align 3
 1278      00
 1279              	.L128:
 1280              		.loc 1 438 0
 1281 0038 84D2     		testb	%dl, %dl
 1282 003a 0F848500 		je	.L129
 1282      0000
 1283              	.LVL164:
 1284              	.LBB107:
 1285              		.loc 1 441 0 discriminator 1
 1286 0040 31C0     		xorl	%eax, %eax
 1287              	.LVL165:
 1288 0042 80FA7C   		cmpb	$124, %dl
 1289 0045 488D5C24 		leaq	1(%rsp), %rbx
 1289      01
 1290 004a 7529     		jne	.L132
 1291 004c E9AC0000 		jmp	.L145
 1291      00
 1292              	.LVL166:
 1293              		.p2align 4,,10
 1294 0051 0F1F8000 		.p2align 3
 1294      000000
 1295              	.L133:
 1296              		.loc 1 441 0 is_stmt 0
 1297 0058 4883C501 		addq	$1, %rbp
 1298 005c 4C39EB   		cmpq	%r13, %rbx
 1299              		.loc 1 443 0 is_stmt 1
 1300 005f 8853FF   		movb	%dl, -1(%rbx)
 1301              		.loc 1 441 0
 1302 0062 7434     		je	.L130
 1303              	.L135:
 1304              		.loc 1 441 0 is_stmt 0 discriminator 2
 1305 0064 0FB65500 		movzbl	0(%rbp), %edx
 1306 0068 4883C301 		addq	$1, %rbx
 1307              	.LVL167:
 1308 006c 80FA7C   		cmpb	$124, %dl
 1309 006f 7427     		je	.L130
 1310 0071 84D2     		testb	%dl, %dl
 1311 0073 7423     		je	.L130
 1312              	.LVL168:
 1313              	.L132:
 1314              		.loc 1 442 0 is_stmt 1
 1315 0075 80FA09   		cmpb	$9, %dl
 1316 0078 4989DC   		movq	%rbx, %r12
 1317 007b 75DB     		jne	.L133
 1318              	.LVL169:
 1319              		.loc 1 442 0 is_stmt 0 discriminator 1
 1320 007d 4889EF   		movq	%rbp, %rdi
 1321 0080 C643FF00 		movb	$0, -1(%rbx)
 1322              		.loc 1 441 0 is_stmt 1 discriminator 1
 1323 0084 4883C501 		addq	$1, %rbp
 1324              		.loc 1 442 0 discriminator 1
 1325 0088 E8000000 		call	_Z15fl_old_shortcutPKc
 1325      00
 1326              	.LVL170:
 1327              		.loc 1 441 0 discriminator 1
 1328 008d 4C39EB   		cmpq	%r13, %rbx
 1329 0090 75D2     		jne	.L135
 1330              	.LVL171:
 1331              		.p2align 4,,10
 1332 0092 660F1F44 		.p2align 3
 1332      0000
 1333              	.L130:
 1334              	.LBB108:
 1335              	.LBB109:
 1336              		.loc 1 333 0
 1337 0098 4883EC08 		subq	$8, %rsp
 1338              		.cfi_def_cfa_offset 1096
 1339              	.LBE109:
 1340              	.LBE108:
 1341              		.loc 1 445 0
 1342 009c 41C60424 		movb	$0, (%r12)
 1342      00
 1343              	.LVL172:
 1344              	.LBB111:
 1345              	.LBB110:
 1346              		.loc 1 333 0
 1347 00a1 4531C9   		xorl	%r9d, %r9d
 1348 00a4 6A00     		pushq	$0
 1349              		.cfi_def_cfa_offset 1104
 1350 00a6 4531C0   		xorl	%r8d, %r8d
 1351 00a9 89C1     		movl	%eax, %ecx
 1352 00ab BEFFFFFF 		movl	$-1, %esi
 1352      FF
 1353 00b0 4C89F7   		movq	%r14, %rdi
 1354 00b3 488D5424 		leaq	16(%rsp), %rdx
 1354      10
 1355 00b8 E8000000 		call	_ZN8Fl_Menu_6insertEiPKciPFvP9Fl_WidgetPvES4_i
 1355      00
 1356              	.LVL173:
 1357              	.LBE110:
 1358              	.LBE111:
 1359              		.loc 1 447 0
 1360 00bd 807D0000 		cmpb	$0, 0(%rbp)
 1361 00c1 5A       		popq	%rdx
 1362              		.cfi_def_cfa_offset 1096
 1363 00c2 59       		popq	%rcx
 1364              		.cfi_def_cfa_offset 1088
 1365 00c3 752B     		jne	.L146
 1366              	.LVL174:
 1367              	.L129:
 1368              	.LBE107:
 1369              		.loc 1 450 0
 1370 00c5 488B8C24 		movq	1032(%rsp), %rcx
 1370      08040000 
 1371 00cd 6448330C 		xorq	%fs:40, %rcx
 1371      25280000 
 1371      00
 1372 00d6 752C     		jne	.L147
 1373 00d8 4881C410 		addq	$1040, %rsp
 1373      040000
 1374              		.cfi_remember_state
 1375              		.cfi_def_cfa_offset 48
 1376 00df 5B       		popq	%rbx
 1377              		.cfi_def_cfa_offset 40
 1378 00e0 5D       		popq	%rbp
 1379              		.cfi_def_cfa_offset 32
 1380 00e1 415C     		popq	%r12
 1381              		.cfi_def_cfa_offset 24
 1382 00e3 415D     		popq	%r13
 1383              		.cfi_def_cfa_offset 16
 1384 00e5 415E     		popq	%r14
 1385              		.cfi_def_cfa_offset 8
 1386              	.LVL175:
 1387 00e7 C3       		ret
 1388              	.LVL176:
 1389 00e8 0F1F8400 		.p2align 4,,10
 1389      00000000 
 1390              		.p2align 3
 1391              	.L146:
 1392              		.cfi_restore_state
 1393 00f0 0FB65501 		movzbl	1(%rbp), %edx
 1394              	.LBB112:
 1395              		.loc 1 447 0 discriminator 1
 1396 00f4 4883C501 		addq	$1, %rbp
 1397              	.LVL177:
 1398 00f8 E93BFFFF 		jmp	.L128
 1398      FF
 1399              	.LVL178:
 1400              	.L145:
 1401              		.loc 1 441 0
 1402 00fd 4989E4   		movq	%rsp, %r12
 1403 0100 31C0     		xorl	%eax, %eax
 1404 0102 EB94     		jmp	.L130
 1405              	.LVL179:
 1406              	.L147:
 1407              	.LBE112:
 1408              		.loc 1 450 0
 1409 0104 E8000000 		call	__stack_chk_fail
 1409      00
 1410              	.LVL180:
 1411              		.cfi_endproc
 1412              	.LFE278:
 1414              		.section	.text.unlikely._ZN8Fl_Menu_3addEPKc
 1415              	.LCOLDE5:
 1416              		.section	.text._ZN8Fl_Menu_3addEPKc
 1417              	.LHOTE5:
 1418              		.section	.text.unlikely._ZN8Fl_Menu_7replaceEiPKc,"ax",@progbits
 1419              		.align 2
 1420              	.LCOLDB6:
 1421              		.section	.text._ZN8Fl_Menu_7replaceEiPKc,"ax",@progbits
 1422              	.LHOTB6:
 1423              		.align 2
 1424              		.p2align 4,,15
 1425              		.globl	_ZN8Fl_Menu_7replaceEiPKc
 1427              	_ZN8Fl_Menu_7replaceEiPKc:
 1428              	.LFB279:
 1429              		.loc 1 462 0
 1430              		.cfi_startproc
 1431              	.LVL181:
 1432 0000 4154     		pushq	%r12
 1433              		.cfi_def_cfa_offset 16
 1434              		.cfi_offset 12, -16
 1435 0002 55       		pushq	%rbp
 1436              		.cfi_def_cfa_offset 24
 1437              		.cfi_offset 6, -24
 1438 0003 53       		pushq	%rbx
 1439              		.cfi_def_cfa_offset 32
 1440              		.cfi_offset 3, -32
 1441              		.loc 1 462 0
 1442 0004 4863DE   		movslq	%esi, %rbx
 1443              		.loc 1 463 0
 1444 0007 85DB     		testl	%ebx, %ebx
 1445 0009 780F     		js	.L148
 1446 000b 4889FD   		movq	%rdi, %rbp
 1447 000e 4989D4   		movq	%rdx, %r12
 1448              		.loc 1 463 0 is_stmt 0 discriminator 2
 1449 0011 E8000000 		call	_ZNK8Fl_Menu_4sizeEv
 1449      00
 1450              	.LVL182:
 1451 0016 39C3     		cmpl	%eax, %ebx
 1452 0018 7C06     		jl	.L160
 1453              	.LVL183:
 1454              	.L148:
 1455              		.loc 1 470 0 is_stmt 1
 1456 001a 5B       		popq	%rbx
 1457              		.cfi_remember_state
 1458              		.cfi_def_cfa_offset 24
 1459              	.LVL184:
 1460 001b 5D       		popq	%rbp
 1461              		.cfi_def_cfa_offset 16
 1462 001c 415C     		popq	%r12
 1463              		.cfi_def_cfa_offset 8
 1464 001e C3       		ret
 1465              	.LVL185:
 1466 001f 90       		.p2align 4,,10
 1467              		.p2align 3
 1468              	.L160:
 1469              		.cfi_restore_state
 1470              		.loc 1 464 0
 1471 0020 0FB68588 		movzbl	136(%rbp), %eax
 1471      000000
 1472 0027 84C0     		testb	%al, %al
 1473 0029 744D     		je	.L161
 1474              		.loc 1 465 0
 1475 002b 3C01     		cmpb	$1, %al
 1476              		.loc 1 466 0
 1477 002d 488D04DD 		leaq	0(,%rbx,8), %rax
 1477      00000000 
 1478              		.loc 1 465 0
 1479 0035 7631     		jbe	.L162
 1480              	.L151:
 1481              		.loc 1 466 0
 1482 0037 48C1E306 		salq	$6, %rbx
 1483 003b 4829C3   		subq	%rax, %rbx
 1484 003e 488B4578 		movq	120(%rbp), %rax
 1485 0042 488B3C18 		movq	(%rax,%rbx), %rdi
 1486 0046 E8000000 		call	free
 1486      00
 1487              	.LVL186:
 1488              		.loc 1 467 0
 1489 004b 4C89E7   		movq	%r12, %rdi
 1490 004e E8000000 		call	strdup
 1490      00
 1491              	.LVL187:
 1492 0053 4989C4   		movq	%rax, %r12
 1493              	.LVL188:
 1494              	.L152:
 1495              		.loc 1 469 0
 1496 0056 488B4578 		movq	120(%rbp), %rax
 1497 005a 4C892418 		movq	%r12, (%rax,%rbx)
 1498              		.loc 1 470 0
 1499 005e 5B       		popq	%rbx
 1500              		.cfi_remember_state
 1501              		.cfi_def_cfa_offset 24
 1502 005f 5D       		popq	%rbp
 1503              		.cfi_def_cfa_offset 16
 1504              	.LVL189:
 1505 0060 415C     		popq	%r12
 1506              		.cfi_def_cfa_offset 8
 1507              	.LVL190:
 1508 0062 C3       		ret
 1509              	.LVL191:
 1510              		.p2align 4,,10
 1511 0063 0F1F4400 		.p2align 3
 1511      00
 1512              	.L162:
 1513              		.cfi_restore_state
 1514 0068 48C1E306 		salq	$6, %rbx
 1515 006c 4829C3   		subq	%rax, %rbx
 1516 006f EBE5     		jmp	.L152
 1517              		.p2align 4,,10
 1518 0071 0F1F8000 		.p2align 3
 1518      000000
 1519              	.L161:
 1520              		.loc 1 464 0 discriminator 1
 1521 0078 488B7578 		movq	120(%rbp), %rsi
 1522 007c 31D2     		xorl	%edx, %edx
 1523 007e 4889EF   		movq	%rbp, %rdi
 1524 0081 E8000000 		call	_ZN8Fl_Menu_4copyEPK12Fl_Menu_ItemPv
 1524      00
 1525              	.LVL192:
 1526 0086 0FB68588 		movzbl	136(%rbp), %eax
 1526      000000
 1527              		.loc 1 465 0 discriminator 1
 1528 008d 3C01     		cmpb	$1, %al
 1529              		.loc 1 466 0 discriminator 1
 1530 008f 488D04DD 		leaq	0(,%rbx,8), %rax
 1530      00000000 
 1531              		.loc 1 465 0 discriminator 1
 1532 0097 779E     		ja	.L151
 1533 0099 EBCD     		jmp	.L162
 1534              		.cfi_endproc
 1535              	.LFE279:
 1537              		.section	.text.unlikely._ZN8Fl_Menu_7replaceEiPKc
 1538              	.LCOLDE6:
 1539              		.section	.text._ZN8Fl_Menu_7replaceEiPKc
 1540              	.LHOTE6:
 1541              		.section	.text.unlikely._ZN8Fl_Menu_6removeEi,"ax",@progbits
 1542              		.align 2
 1543              	.LCOLDB7:
 1544              		.section	.text._ZN8Fl_Menu_6removeEi,"ax",@progbits
 1545              	.LHOTB7:
 1546              		.align 2
 1547              		.p2align 4,,15
 1548              		.globl	_ZN8Fl_Menu_6removeEi
 1550              	_ZN8Fl_Menu_6removeEi:
 1551              	.LFB280:
 1552              		.loc 1 482 0
 1553              		.cfi_startproc
 1554              	.LVL193:
 1555 0000 4156     		pushq	%r14
 1556              		.cfi_def_cfa_offset 16
 1557              		.cfi_offset 14, -16
 1558 0002 4155     		pushq	%r13
 1559              		.cfi_def_cfa_offset 24
 1560              		.cfi_offset 13, -24
 1561 0004 4989FD   		movq	%rdi, %r13
 1562 0007 4154     		pushq	%r12
 1563              		.cfi_def_cfa_offset 32
 1564              		.cfi_offset 12, -32
 1565 0009 55       		pushq	%rbp
 1566              		.cfi_def_cfa_offset 40
 1567              		.cfi_offset 6, -40
 1568 000a 53       		pushq	%rbx
 1569              		.cfi_def_cfa_offset 48
 1570              		.cfi_offset 3, -48
 1571              		.loc 1 482 0
 1572 000b 4863DE   		movslq	%esi, %rbx
 1573              		.loc 1 483 0
 1574 000e E8000000 		call	_ZNK8Fl_Menu_4sizeEv
 1574      00
 1575              	.LVL194:
 1576 0013 4C63E0   		movslq	%eax, %r12
 1577              	.LVL195:
 1578              		.loc 1 484 0
 1579 0016 89D8     		movl	%ebx, %eax
 1580 0018 C1E81F   		shrl	$31, %eax
 1581 001b 84C0     		testb	%al, %al
 1582 001d 0F859500 		jne	.L163
 1582      0000
 1583 0023 4139DC   		cmpl	%ebx, %r12d
 1584 0026 0F8E8C00 		jle	.L163
 1584      0000
 1585              		.loc 1 485 0
 1586 002c 4180BD88 		cmpb	$0, 136(%r13)
 1586      00000000 
 1587 0034 0F848E00 		je	.L174
 1587      0000
 1588              	.L165:
 1589              		.loc 1 487 0
 1590 003a 488D04DD 		leaq	0(,%rbx,8), %rax
 1590      00000000 
 1591 0042 48C1E306 		salq	$6, %rbx
 1592              	.LVL196:
 1593              	.LBB113:
 1594              	.LBB114:
 1595              		.loc 3 132 0
 1596 0046 BE010000 		movl	$1, %esi
 1596      00
 1597              	.LBE114:
 1598              	.LBE113:
 1599              		.loc 1 487 0
 1600 004b 4829C3   		subq	%rax, %rbx
 1601 004e 49035D78 		addq	120(%r13), %rbx
 1602              	.LBB118:
 1603              	.LBB115:
 1604              		.loc 3 132 0
 1605 0052 4889DF   		movq	%rbx, %rdi
 1606              	.LBE115:
 1607              	.LBE118:
 1608              		.loc 1 487 0
 1609 0055 4889DD   		movq	%rbx, %rbp
 1610              	.LVL197:
 1611              	.LBB119:
 1612              	.LBB116:
 1613              		.loc 3 132 0
 1614 0058 E8000000 		call	_ZNK12Fl_Menu_Item4nextEi
 1614      00
 1615              	.LVL198:
 1616              	.LBE116:
 1617              	.LBE119:
 1618              	.LBB120:
 1619              		.loc 1 490 0
 1620 005d 4180BD88 		cmpb	$1, 136(%r13)
 1620      00000001 
 1621              	.LBE120:
 1622              	.LBB122:
 1623              	.LBB117:
 1624              		.loc 3 132 0
 1625 0065 4989C6   		movq	%rax, %r14
 1626              	.LVL199:
 1627              	.LBE117:
 1628              	.LBE122:
 1629              	.LBB123:
 1630              		.loc 1 490 0
 1631 0068 761C     		jbe	.L167
 1632              	.LVL200:
 1633              	.LBB121:
 1634              		.loc 1 491 0 discriminator 1
 1635 006a 4839C3   		cmpq	%rax, %rbx
 1636 006d 7317     		jnb	.L167
 1637              	.LVL201:
 1638 006f 90       		.p2align 4,,10
 1639              		.p2align 3
 1640              	.L169:
 1641              		.loc 1 492 0
 1642 0070 488B3B   		movq	(%rbx), %rdi
 1643 0073 4885FF   		testq	%rdi, %rdi
 1644 0076 7405     		je	.L168
 1645              		.loc 1 492 0 is_stmt 0 discriminator 1
 1646 0078 E8000000 		call	free
 1646      00
 1647              	.LVL202:
 1648              	.L168:
 1649              		.loc 1 491 0 is_stmt 1 discriminator 2
 1650 007d 4883C338 		addq	$56, %rbx
 1651              	.LVL203:
 1652 0081 4C39F3   		cmpq	%r14, %rbx
 1653 0084 72EA     		jb	.L169
 1654              	.LVL204:
 1655              	.L167:
 1656              	.LBE121:
 1657              	.LBE123:
 1658              	.LBB124:
 1659              	.LBB125:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 1660              		.loc 2 59 0
 1661 0086 4A8D04E5 		leaq	0(,%r12,8), %rax
 1661      00000000 
 1662 008e 49C1E406 		salq	$6, %r12
 1663              	.LVL205:
 1664 0092 4C89F6   		movq	%r14, %rsi
 1665              	.LBE125:
 1666              	.LBE124:
 1667              		.loc 1 496 0
 1668 0095 5B       		popq	%rbx
 1669              		.cfi_remember_state
 1670              		.cfi_def_cfa_offset 40
 1671              	.LBB129:
 1672              	.LBB126:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 1673              		.loc 2 59 0
 1674 0096 4929C4   		subq	%rax, %r12
 1675 0099 4889EF   		movq	%rbp, %rdi
 1676 009c 4C89E2   		movq	%r12, %rdx
 1677 009f 49035578 		addq	120(%r13), %rdx
 1678              	.LBE126:
 1679              	.LBE129:
 1680              		.loc 1 496 0
 1681 00a3 5D       		popq	%rbp
 1682              		.cfi_def_cfa_offset 32
 1683              	.LVL206:
 1684 00a4 415C     		popq	%r12
 1685              		.cfi_def_cfa_offset 24
 1686 00a6 415D     		popq	%r13
 1687              		.cfi_def_cfa_offset 16
 1688              	.LVL207:
 1689              	.LBB130:
 1690              	.LBB127:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 1691              		.loc 2 59 0
 1692 00a8 4C29F2   		subq	%r14, %rdx
 1693              	.LBE127:
 1694              	.LBE130:
 1695              		.loc 1 496 0
 1696 00ab 415E     		popq	%r14
 1697              		.cfi_def_cfa_offset 8
 1698              	.LBB131:
 1699              	.LBB128:
  59:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 1700              		.loc 2 59 0
 1701 00ad E9000000 		jmp	memmove
 1701      00
 1702              	.LVL208:
 1703              		.p2align 4,,10
 1704 00b2 660F1F44 		.p2align 3
 1704      0000
 1705              	.L163:
 1706              		.cfi_restore_state
 1707              	.LBE128:
 1708              	.LBE131:
 1709              		.loc 1 496 0
 1710 00b8 5B       		popq	%rbx
 1711              		.cfi_remember_state
 1712              		.cfi_def_cfa_offset 40
 1713 00b9 5D       		popq	%rbp
 1714              		.cfi_def_cfa_offset 32
 1715 00ba 415C     		popq	%r12
 1716              		.cfi_def_cfa_offset 24
 1717              	.LVL209:
 1718 00bc 415D     		popq	%r13
 1719              		.cfi_def_cfa_offset 16
 1720              	.LVL210:
 1721 00be 415E     		popq	%r14
 1722              		.cfi_def_cfa_offset 8
 1723 00c0 C3       		ret
 1724              	.LVL211:
 1725              		.p2align 4,,10
 1726 00c1 0F1F8000 		.p2align 3
 1726      000000
 1727              	.L174:
 1728              		.cfi_restore_state
 1729              		.loc 1 485 0 discriminator 1
 1730 00c8 498B7578 		movq	120(%r13), %rsi
 1731 00cc 31D2     		xorl	%edx, %edx
 1732 00ce 4C89EF   		movq	%r13, %rdi
 1733 00d1 E8000000 		call	_ZN8Fl_Menu_4copyEPK12Fl_Menu_ItemPv
 1733      00
 1734              	.LVL212:
 1735 00d6 E95FFFFF 		jmp	.L165
 1735      FF
 1736              		.cfi_endproc
 1737              	.LFE280:
 1739              		.section	.text.unlikely._ZN8Fl_Menu_6removeEi
 1740              	.LCOLDE7:
 1741              		.section	.text._ZN8Fl_Menu_6removeEi
 1742              	.LHOTE7:
 1743              		.section	.bss._ZL16local_array_size,"aw",@nobits
 1744              		.align 4
 1747              	_ZL16local_array_size:
 1748 0000 00000000 		.zero	4
 1749              		.section	.bss._ZL17local_array_alloc,"aw",@nobits
 1750              		.align 4
 1753              	_ZL17local_array_alloc:
 1754 0000 00000000 		.zero	4
 1755              		.section	.bss._ZL11local_array,"aw",@nobits
 1756              		.align 8
 1759              	_ZL11local_array:
 1760 0000 00000000 		.zero	8
 1760      00000000 
 1761              		.text
 1762              	.Letext0:
 1763              		.section	.text.unlikely._ZL12array_insertP12Fl_Menu_ItemiiPKci
 1764              	.Letext_cold0:
 1765              		.file 4 "fltk-1.3.4-1/FL/fl_types.h"
 1766              		.file 5 "fltk-1.3.4-1/FL/Enumerations.H"
 1767              		.file 6 "fltk-1.3.4-1/FL/Fl_Widget.H"
 1768              		.file 7 "fltk-1.3.4-1/FL/Fl_Image.H"
 1769              		.file 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1770              		.file 9 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1771              		.file 10 "fltk-1.3.4-1/FL/Fl_Menu_.H"
 1772              		.file 11 "/usr/include/libio.h"
 1773              		.file 12 "/usr/include/stdio.h"
 1774              		.file 13 "/usr/include/string.h"
 1775              		.file 14 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Menu_add.cxx
     /tmp/cc3by1Bb.s:13     .text._ZL12array_insertP12Fl_Menu_ItemiiPKci:0000000000000000 _ZL12array_insertP12Fl_Menu_ItemiiPKci
     /tmp/cc3by1Bb.s:1759   .bss._ZL11local_array:0000000000000000 _ZL11local_array
     /tmp/cc3by1Bb.s:1753   .bss._ZL17local_array_alloc:0000000000000000 _ZL17local_array_alloc
     /tmp/cc3by1Bb.s:227    .text._ZN12Fl_Menu_Item6insertEiPKciPFvP9Fl_WidgetPvES4_i:0000000000000000 _ZN12Fl_Menu_Item6insertEiPKciPFvP9Fl_WidgetPvES4_i
     /tmp/cc3by1Bb.s:1747   .bss._ZL16local_array_size:0000000000000000 _ZL16local_array_size
     /tmp/cc3by1Bb.s:810    .text._ZN12Fl_Menu_Item3addEPKciPFvP9Fl_WidgetPvES4_i:0000000000000000 _ZN12Fl_Menu_Item3addEPKciPFvP9Fl_WidgetPvES4_i
     /tmp/cc3by1Bb.s:852    .text._ZN8Fl_Menu_6insertEiPKciPFvP9Fl_WidgetPvES4_i:0000000000000000 _ZN8Fl_Menu_6insertEiPKciPFvP9Fl_WidgetPvES4_i
     /tmp/cc3by1Bb.s:1203   .text._ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i:0000000000000000 _ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i
     /tmp/cc3by1Bb.s:1245   .text._ZN8Fl_Menu_3addEPKc:0000000000000000 _ZN8Fl_Menu_3addEPKc
     /tmp/cc3by1Bb.s:1427   .text._ZN8Fl_Menu_7replaceEiPKc:0000000000000000 _ZN8Fl_Menu_7replaceEiPKc
     /tmp/cc3by1Bb.s:1550   .text._ZN8Fl_Menu_6removeEi:0000000000000000 _ZN8Fl_Menu_6removeEi
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
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
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
memmove
strdup
_Znam
memcpy
_ZdaPv
_ZNK12Fl_Menu_Item4sizeEv
_ZNK12Fl_Menu_Item4nextEi
__stack_chk_fail
fl_menu_array_owner
_ZNK8Fl_Menu_4sizeEv
_ZN8Fl_Menu_4copyEPK12Fl_Menu_ItemPv
__memset_chk
_Z15fl_old_shortcutPKc
free
