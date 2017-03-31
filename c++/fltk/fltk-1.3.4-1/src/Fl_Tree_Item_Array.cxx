   1              		.file	"Fl_Tree_Item_Array.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN18Fl_Tree_Item_ArrayC2Ei,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN18Fl_Tree_Item_ArrayC2Ei,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN18Fl_Tree_Item_ArrayC2Ei
  12              	.Ltext_cold0:
  13              		.section	.text._ZN18Fl_Tree_Item_ArrayC2Ei
  14              		.globl	_ZN18Fl_Tree_Item_ArrayC2Ei
  16              	_ZN18Fl_Tree_Item_ArrayC2Ei:
  17              	.LFB570:
  18              		.file 1 "fltk-1.3.4-1/src/Fl_Tree_Item_Array.cxx"
   1:fltk-1.3.4-1/src/Fl_Tree_Item_Array.cxx **** ...
  19              		.loc 1 35 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              	.LBB13:
  23              		.loc 1 36 0
  24 0000 48C70700 		movq	$0, (%rdi)
  24      000000
  25              		.loc 1 37 0
  26 0007 C7470800 		movl	$0, 8(%rdi)
  26      000000
  27              		.loc 1 38 0
  28 000e C7470C00 		movl	$0, 12(%rdi)
  28      000000
  29              		.loc 1 42 0
  30 0015 897710   		movl	%esi, 16(%rdi)
  31 0018 C3       		ret
  32              	.LBE13:
  33              		.cfi_endproc
  34              	.LFE570:
  36              		.section	.text.unlikely._ZN18Fl_Tree_Item_ArrayC2Ei
  37              	.LCOLDE0:
  38              		.section	.text._ZN18Fl_Tree_Item_ArrayC2Ei
  39              	.LHOTE0:
  40              		.globl	_ZN18Fl_Tree_Item_ArrayC1Ei
  41              		.set	_ZN18Fl_Tree_Item_ArrayC1Ei,_ZN18Fl_Tree_Item_ArrayC2Ei
  42              		.section	.text.unlikely._ZN18Fl_Tree_Item_ArrayC2EPKS_,"ax",@progbits
  43              		.align 2
  44              	.LCOLDB1:
  45              		.section	.text._ZN18Fl_Tree_Item_ArrayC2EPKS_,"ax",@progbits
  46              	.LHOTB1:
  47              		.align 2
  48              		.p2align 4,,15
  49              		.globl	_ZN18Fl_Tree_Item_ArrayC2EPKS_
  51              	_ZN18Fl_Tree_Item_ArrayC2EPKS_:
  52              	.LFB576:
  53              		.loc 1 51 0
  54              		.cfi_startproc
  55              	.LVL1:
  56 0000 4156     		pushq	%r14
  57              		.cfi_def_cfa_offset 16
  58              		.cfi_offset 14, -16
  59 0002 4155     		pushq	%r13
  60              		.cfi_def_cfa_offset 24
  61              		.cfi_offset 13, -24
  62 0004 4989F6   		movq	%rsi, %r14
  63 0007 4154     		pushq	%r12
  64              		.cfi_def_cfa_offset 32
  65              		.cfi_offset 12, -32
  66 0009 55       		pushq	%rbp
  67              		.cfi_def_cfa_offset 40
  68              		.cfi_offset 6, -40
  69 000a 4889FD   		movq	%rdi, %rbp
  70 000d 53       		pushq	%rbx
  71              		.cfi_def_cfa_offset 48
  72              		.cfi_offset 3, -48
  73              	.LBB14:
  74              		.loc 1 52 0
  75 000e 48637E0C 		movslq	12(%rsi), %rdi
  76              	.LVL2:
  77 0012 48C1E703 		salq	$3, %rdi
  78 0016 E8000000 		call	malloc
  78      00
  79              	.LVL3:
  80              		.loc 1 53 0
  81 001b C7450800 		movl	$0, 8(%rbp)
  81      000000
  82              		.loc 1 52 0
  83 0022 48894500 		movq	%rax, 0(%rbp)
  84              		.loc 1 54 0
  85 0026 418B460C 		movl	12(%r14), %eax
  86 002a 89450C   		movl	%eax, 12(%rbp)
  87              		.loc 1 55 0
  88 002d 418B4610 		movl	16(%r14), %eax
  89 0031 894510   		movl	%eax, 16(%rbp)
  90              	.LVL4:
  91              	.LBB15:
  92              		.loc 1 59 0
  93 0034 418B4608 		movl	8(%r14), %eax
  94 0038 85C0     		testl	%eax, %eax
  95 003a 7E52     		jle	.L2
  96 003c 31DB     		xorl	%ebx, %ebx
  97 003e 4531E4   		xorl	%r12d, %r12d
  98              	.LVL5:
  99              		.p2align 4,,10
 100 0041 0F1F8000 		.p2align 3
 100      000000
 101              	.L6:
 102              		.loc 1 70 0 discriminator 2
 103 0048 BF880000 		movl	$136, %edi
 103      00
 104 004d E8000000 		call	_Znwm
 104      00
 105              	.LVL6:
 106 0052 4989C5   		movq	%rax, %r13
 107 0055 498B06   		movq	(%r14), %rax
 108 0058 4C89EF   		movq	%r13, %rdi
 109 005b 488B3418 		movq	(%rax,%rbx), %rsi
 110 005f E8000000 		call	_ZN12Fl_Tree_ItemC1EPKS_
 110      00
 111              	.LVL7:
 112 0064 488B4500 		movq	0(%rbp), %rax
 113              		.loc 1 72 0 discriminator 2
 114 0068 4489E6   		movl	%r12d, %esi
 115              		.loc 1 59 0 discriminator 2
 116 006b 4183C401 		addl	$1, %r12d
 117              	.LVL8:
 118              		.loc 1 70 0 discriminator 2
 119 006f 4C892C18 		movq	%r13, (%rax,%rbx)
 120              		.loc 1 72 0 discriminator 2
 121 0073 488B4500 		movq	0(%rbp), %rax
 122              		.loc 1 71 0 discriminator 2
 123 0077 83450801 		addl	$1, 8(%rbp)
 124              		.loc 1 72 0 discriminator 2
 125 007b 488B3C18 		movq	(%rax,%rbx), %rdi
 126 007f 4883C308 		addq	$8, %rbx
 127 0083 E8000000 		call	_ZN12Fl_Tree_Item16update_prev_nextEi
 127      00
 128              	.LVL9:
 129              		.loc 1 59 0 discriminator 2
 130 0088 45396608 		cmpl	%r12d, 8(%r14)
 131 008c 7FBA     		jg	.L6
 132              	.LVL10:
 133              	.L2:
 134              	.LBE15:
 135              	.LBE14:
 136              		.loc 1 75 0
 137 008e 5B       		popq	%rbx
 138              		.cfi_def_cfa_offset 40
 139 008f 5D       		popq	%rbp
 140              		.cfi_def_cfa_offset 32
 141              	.LVL11:
 142 0090 415C     		popq	%r12
 143              		.cfi_def_cfa_offset 24
 144 0092 415D     		popq	%r13
 145              		.cfi_def_cfa_offset 16
 146 0094 415E     		popq	%r14
 147              		.cfi_def_cfa_offset 8
 148              	.LVL12:
 149 0096 C3       		ret
 150              		.cfi_endproc
 151              	.LFE576:
 153              		.section	.text.unlikely._ZN18Fl_Tree_Item_ArrayC2EPKS_
 154              	.LCOLDE1:
 155              		.section	.text._ZN18Fl_Tree_Item_ArrayC2EPKS_
 156              	.LHOTE1:
 157              		.globl	_ZN18Fl_Tree_Item_ArrayC1EPKS_
 158              		.set	_ZN18Fl_Tree_Item_ArrayC1EPKS_,_ZN18Fl_Tree_Item_ArrayC2EPKS_
 159              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array5clearEv,"ax",@progbits
 160              		.align 2
 161              	.LCOLDB2:
 162              		.section	.text._ZN18Fl_Tree_Item_Array5clearEv,"ax",@progbits
 163              	.LHOTB2:
 164              		.align 2
 165              		.p2align 4,,15
 166              		.globl	_ZN18Fl_Tree_Item_Array5clearEv
 168              	_ZN18Fl_Tree_Item_Array5clearEv:
 169              	.LFB578:
 170              		.loc 1 82 0
 171              		.cfi_startproc
 172              	.LVL13:
 173 0000 4155     		pushq	%r13
 174              		.cfi_def_cfa_offset 16
 175              		.cfi_offset 13, -16
 176 0002 4154     		pushq	%r12
 177              		.cfi_def_cfa_offset 24
 178              		.cfi_offset 12, -24
 179 0004 4989FC   		movq	%rdi, %r12
 180 0007 55       		pushq	%rbp
 181              		.cfi_def_cfa_offset 32
 182              		.cfi_offset 6, -32
 183 0008 53       		pushq	%rbx
 184              		.cfi_def_cfa_offset 40
 185              		.cfi_offset 3, -40
 186 0009 4883EC08 		subq	$8, %rsp
 187              		.cfi_def_cfa_offset 48
 188              	.LBB16:
 189              		.loc 1 83 0
 190 000d 488B3F   		movq	(%rdi), %rdi
 191              	.LVL14:
 192 0010 4885FF   		testq	%rdi, %rdi
 193 0013 745C     		je	.L10
 194              	.LVL15:
 195              	.LBB17:
 196              	.LBB18:
 197              		.loc 1 84 0 discriminator 1
 198 0015 418B4424 		movl	8(%r12), %eax
 198      08
 199 001a 85C0     		testl	%eax, %eax
 200 001c 7E46     		jle	.L11
 201              		.loc 1 84 0 is_stmt 0
 202 001e 31DB     		xorl	%ebx, %ebx
 203 0020 4531ED   		xorl	%r13d, %r13d
 204              	.LVL16:
 205              		.p2align 4,,10
 206 0023 0F1F4400 		.p2align 3
 206      00
 207              	.L14:
 208              		.loc 1 89 0 is_stmt 1
 209 0028 4801DF   		addq	%rbx, %rdi
 210 002b 488B2F   		movq	(%rdi), %rbp
 211 002e 4885ED   		testq	%rbp, %rbp
 212 0031 7417     		je	.L12
 213              		.loc 1 89 0 is_stmt 0 discriminator 1
 214 0033 4889EF   		movq	%rbp, %rdi
 215 0036 E8000000 		call	_ZN12Fl_Tree_ItemD1Ev
 215      00
 216              	.LVL17:
 217 003b 4889EF   		movq	%rbp, %rdi
 218 003e E8000000 		call	_ZdlPv
 218      00
 219              	.LVL18:
 220 0043 4889DF   		movq	%rbx, %rdi
 221 0046 49033C24 		addq	(%r12), %rdi
 222              	.L12:
 223              		.loc 1 90 0 is_stmt 1 discriminator 2
 224 004a 48C70700 		movq	$0, (%rdi)
 224      000000
 225              		.loc 1 84 0 discriminator 2
 226 0051 4183C501 		addl	$1, %r13d
 227              	.LVL19:
 228 0055 4883C308 		addq	$8, %rbx
 229 0059 45396C24 		cmpl	%r13d, 8(%r12)
 229      08
 230 005e 498B3C24 		movq	(%r12), %rdi
 231 0062 7FC4     		jg	.L14
 232              	.LVL20:
 233              	.L11:
 234              	.LBE18:
 235              		.loc 1 93 0
 236 0064 E8000000 		call	free
 236      00
 237              	.LVL21:
 238 0069 49C70424 		movq	$0, (%r12)
 238      00000000 
 239              	.L10:
 240              	.LBE17:
 241              	.LBE16:
 242              		.loc 1 95 0
 243 0071 41C74424 		movl	$0, 12(%r12)
 243      0C000000 
 243      00
 244 007a 41C74424 		movl	$0, 8(%r12)
 244      08000000 
 244      00
 245              		.loc 1 96 0
 246 0083 4883C408 		addq	$8, %rsp
 247              		.cfi_def_cfa_offset 40
 248 0087 5B       		popq	%rbx
 249              		.cfi_def_cfa_offset 32
 250 0088 5D       		popq	%rbp
 251              		.cfi_def_cfa_offset 24
 252 0089 415C     		popq	%r12
 253              		.cfi_def_cfa_offset 16
 254              	.LVL22:
 255 008b 415D     		popq	%r13
 256              		.cfi_def_cfa_offset 8
 257 008d C3       		ret
 258              		.cfi_endproc
 259              	.LFE578:
 261              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array5clearEv
 262              	.LCOLDE2:
 263              		.section	.text._ZN18Fl_Tree_Item_Array5clearEv
 264              	.LHOTE2:
 265              		.section	.text.unlikely._ZN18Fl_Tree_Item_ArrayD2Ev,"ax",@progbits
 266              		.align 2
 267              	.LCOLDB3:
 268              		.section	.text._ZN18Fl_Tree_Item_ArrayD2Ev,"ax",@progbits
 269              	.LHOTB3:
 270              		.align 2
 271              		.p2align 4,,15
 272              		.globl	_ZN18Fl_Tree_Item_ArrayD2Ev
 274              	_ZN18Fl_Tree_Item_ArrayD2Ev:
 275              	.LFB573:
 276              		.loc 1 46 0
 277              		.cfi_startproc
 278              	.LVL23:
 279              	.LBB19:
 280              		.loc 1 47 0
 281 0000 E9000000 		jmp	_ZN18Fl_Tree_Item_Array5clearEv
 281      00
 282              	.LVL24:
 283              	.LBE19:
 284              		.cfi_endproc
 285              	.LFE573:
 287              		.section	.text.unlikely._ZN18Fl_Tree_Item_ArrayD2Ev
 288              	.LCOLDE3:
 289              		.section	.text._ZN18Fl_Tree_Item_ArrayD2Ev
 290              	.LHOTE3:
 291              		.globl	_ZN18Fl_Tree_Item_ArrayD1Ev
 292              		.set	_ZN18Fl_Tree_Item_ArrayD1Ev,_ZN18Fl_Tree_Item_ArrayD2Ev
 293              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array7enlargeEi,"ax",@progbits
 294              		.align 2
 295              	.LCOLDB4:
 296              		.section	.text._ZN18Fl_Tree_Item_Array7enlargeEi,"ax",@progbits
 297              	.LHOTB4:
 298              		.align 2
 299              		.p2align 4,,15
 300              		.globl	_ZN18Fl_Tree_Item_Array7enlargeEi
 302              	_ZN18Fl_Tree_Item_Array7enlargeEi:
 303              	.LFB579:
 304              		.loc 1 103 0
 305              		.cfi_startproc
 306              	.LVL25:
 307 0000 4156     		pushq	%r14
 308              		.cfi_def_cfa_offset 16
 309              		.cfi_offset 14, -16
 310 0002 4155     		pushq	%r13
 311              		.cfi_def_cfa_offset 24
 312              		.cfi_offset 13, -24
 313 0004 4154     		pushq	%r12
 314              		.cfi_def_cfa_offset 32
 315              		.cfi_offset 12, -32
 316 0006 55       		pushq	%rbp
 317              		.cfi_def_cfa_offset 40
 318              		.cfi_offset 6, -40
 319 0007 53       		pushq	%rbx
 320              		.cfi_def_cfa_offset 48
 321              		.cfi_offset 3, -48
 322              		.loc 1 104 0
 323 0008 037708   		addl	8(%rdi), %esi
 324              	.LVL26:
 325              	.LBB20:
 326              		.loc 1 105 0
 327 000b 448B670C 		movl	12(%rdi), %r12d
 328 000f 4439E6   		cmpl	%r12d, %esi
 329 0012 7C5E     		jl	.L23
 330              	.LBB21:
 331              		.loc 1 106 0
 332 0014 89F0     		movl	%esi, %eax
 333 0016 BAB5814E 		movl	$458129845, %edx
 333      1B
 334 001b 8B4F10   		movl	16(%rdi), %ecx
 335 001e F7EA     		imull	%edx
 336 0020 C1FE1F   		sarl	$31, %esi
 337              	.LVL27:
 338 0023 C1FA04   		sarl	$4, %edx
 339 0026 29F2     		subl	%esi, %edx
 340 0028 39CA     		cmpl	%ecx, %edx
 341 002a 7E08     		jle	.L25
 342              		.loc 1 106 0 is_stmt 0 discriminator 1
 343 002c 8D0C89   		leal	(%rcx,%rcx,4), %ecx
 344 002f 01C9     		addl	%ecx, %ecx
 345 0031 894F10   		movl	%ecx, 16(%rdi)
 346              	.L25:
 347              		.loc 1 108 0 is_stmt 1
 348 0034 418D2C0C 		leal	(%r12,%rcx), %ebp
 349              	.LVL28:
 350 0038 4889FB   		movq	%rdi, %rbx
 351              		.loc 1 109 0
 352 003b 4863FD   		movslq	%ebp, %rdi
 353              	.LVL29:
 354 003e 48C1E703 		salq	$3, %rdi
 355 0042 E8000000 		call	malloc
 355      00
 356              	.LVL30:
 357              		.loc 1 110 0
 358 0047 4C8B2B   		movq	(%rbx), %r13
 359              		.loc 1 109 0
 360 004a 4989C6   		movq	%rax, %r14
 361              	.LVL31:
 362              		.loc 1 110 0
 363 004d 4D85ED   		testq	%r13, %r13
 364 0050 741A     		je	.L26
 365              	.LVL32:
 366              	.LBB22:
 367              	.LBB23:
 368              		.file 2 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 369              		.loc 2 59 0
 370 0052 4963D4   		movslq	%r12d, %rdx
 371 0055 4889C7   		movq	%rax, %rdi
 372 0058 4C89EE   		movq	%r13, %rsi
 373 005b 48C1E203 		salq	$3, %rdx
 374              	.LVL33:
 375 005f E8000000 		call	memmove
 375      00
 376              	.LVL34:
 377              	.LBE23:
 378              	.LBE22:
 379              		.loc 1 113 0
 380 0064 4C89EF   		movq	%r13, %rdi
 381 0067 E8000000 		call	free
 381      00
 382              	.LVL35:
 383              	.L26:
 384              		.loc 1 116 0
 385 006c 4C8933   		movq	%r14, (%rbx)
 386              		.loc 1 117 0
 387 006f 896B0C   		movl	%ebp, 12(%rbx)
 388              	.LVL36:
 389              	.L23:
 390              	.LBE21:
 391              	.LBE20:
 392              		.loc 1 119 0
 393 0072 5B       		popq	%rbx
 394              		.cfi_def_cfa_offset 40
 395 0073 5D       		popq	%rbp
 396              		.cfi_def_cfa_offset 32
 397 0074 415C     		popq	%r12
 398              		.cfi_def_cfa_offset 24
 399 0076 415D     		popq	%r13
 400              		.cfi_def_cfa_offset 16
 401 0078 415E     		popq	%r14
 402              		.cfi_def_cfa_offset 8
 403 007a C3       		ret
 404              		.cfi_endproc
 405              	.LFE579:
 407              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array7enlargeEi
 408              	.LCOLDE4:
 409              		.section	.text._ZN18Fl_Tree_Item_Array7enlargeEi
 410              	.LHOTE4:
 411              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array6insertEiP12Fl_Tree_Item,"ax",@progbits
 412              		.align 2
 413              	.LCOLDB5:
 414              		.section	.text._ZN18Fl_Tree_Item_Array6insertEiP12Fl_Tree_Item,"ax",@progbits
 415              	.LHOTB5:
 416              		.align 2
 417              		.p2align 4,,15
 418              		.globl	_ZN18Fl_Tree_Item_Array6insertEiP12Fl_Tree_Item
 420              	_ZN18Fl_Tree_Item_Array6insertEiP12Fl_Tree_Item:
 421              	.LFB580:
 422              		.loc 1 126 0
 423              		.cfi_startproc
 424              	.LVL37:
 425 0000 4155     		pushq	%r13
 426              		.cfi_def_cfa_offset 16
 427              		.cfi_offset 13, -16
 428 0002 4154     		pushq	%r12
 429              		.cfi_def_cfa_offset 24
 430              		.cfi_offset 12, -24
 431 0004 4189F5   		movl	%esi, %r13d
 432 0007 55       		pushq	%rbp
 433              		.cfi_def_cfa_offset 32
 434              		.cfi_offset 6, -32
 435 0008 53       		pushq	%rbx
 436              		.cfi_def_cfa_offset 40
 437              		.cfi_offset 3, -40
 438              		.loc 1 127 0
 439 0009 BE010000 		movl	$1, %esi
 439      00
 440              	.LVL38:
 441              		.loc 1 126 0
 442 000e 4889FB   		movq	%rdi, %rbx
 443 0011 4989D4   		movq	%rdx, %r12
 444 0014 4883EC08 		subq	$8, %rsp
 445              		.cfi_def_cfa_offset 48
 446              		.loc 1 127 0
 447 0018 E8000000 		call	_ZN18Fl_Tree_Item_Array7enlargeEi
 447      00
 448              	.LVL39:
 449              	.LBB24:
 450              		.loc 1 129 0
 451 001d 8B5308   		movl	8(%rbx), %edx
 452 0020 4439EA   		cmpl	%r13d, %edx
 453 0023 7F2B     		jg	.L32
 454 0025 4963ED   		movslq	%r13d, %rbp
 455 0028 48C1E503 		salq	$3, %rbp
 456              	.L33:
 457              	.LBE24:
 458              		.loc 1 133 0
 459 002c 488B03   		movq	(%rbx), %rax
 460              		.loc 1 139 0
 461 002f 4489EE   		movl	%r13d, %esi
 462              		.loc 1 133 0
 463 0032 4C892428 		movq	%r12, (%rax,%rbp)
 464              		.loc 1 139 0
 465 0036 488B03   		movq	(%rbx), %rax
 466              		.loc 1 134 0
 467 0039 83430801 		addl	$1, 8(%rbx)
 468              		.loc 1 139 0
 469 003d 488B3C28 		movq	(%rax,%rbp), %rdi
 470              		.loc 1 141 0
 471 0041 4883C408 		addq	$8, %rsp
 472              		.cfi_remember_state
 473              		.cfi_def_cfa_offset 40
 474 0045 5B       		popq	%rbx
 475              		.cfi_def_cfa_offset 32
 476              	.LVL40:
 477 0046 5D       		popq	%rbp
 478              		.cfi_def_cfa_offset 24
 479 0047 415C     		popq	%r12
 480              		.cfi_def_cfa_offset 16
 481              	.LVL41:
 482 0049 415D     		popq	%r13
 483              		.cfi_def_cfa_offset 8
 484              	.LVL42:
 485              		.loc 1 139 0
 486 004b E9000000 		jmp	_ZN12Fl_Tree_Item16update_prev_nextEi
 486      00
 487              	.LVL43:
 488              		.p2align 4,,10
 489              		.p2align 3
 490              	.L32:
 491              		.cfi_restore_state
 492              	.LBB30:
 493              	.LBB25:
 494              		.loc 1 131 0
 495 0050 488B03   		movq	(%rbx), %rax
 496 0053 4963ED   		movslq	%r13d, %rbp
 497              	.LBB26:
 498              	.LBB27:
 499              		.loc 2 59 0
 500 0056 4429EA   		subl	%r13d, %edx
 501              	.LVL44:
 502              	.LBE27:
 503              	.LBE26:
 504              		.loc 1 131 0
 505 0059 48C1E503 		salq	$3, %rbp
 506              	.LVL45:
 507              	.LBB29:
 508              	.LBB28:
 509              		.loc 2 59 0
 510 005d 4863D2   		movslq	%edx, %rdx
 511 0060 48C1E203 		salq	$3, %rdx
 512              	.LVL46:
 513 0064 488D3428 		leaq	(%rax,%rbp), %rsi
 514              	.LVL47:
 515 0068 488D7C28 		leaq	8(%rax,%rbp), %rdi
 515      08
 516              	.LVL48:
 517 006d E8000000 		call	memmove
 517      00
 518              	.LVL49:
 519 0072 EBB8     		jmp	.L33
 520              	.LBE28:
 521              	.LBE29:
 522              	.LBE25:
 523              	.LBE30:
 524              		.cfi_endproc
 525              	.LFE580:
 527              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array6insertEiP12Fl_Tree_Item
 528              	.LCOLDE5:
 529              		.section	.text._ZN18Fl_Tree_Item_Array6insertEiP12Fl_Tree_Item
 530              	.LHOTE5:
 531              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array3addEP12Fl_Tree_Item,"ax",@progbits
 532              		.align 2
 533              	.LCOLDB6:
 534              		.section	.text._ZN18Fl_Tree_Item_Array3addEP12Fl_Tree_Item,"ax",@progbits
 535              	.LHOTB6:
 536              		.align 2
 537              		.p2align 4,,15
 538              		.globl	_ZN18Fl_Tree_Item_Array3addEP12Fl_Tree_Item
 540              	_ZN18Fl_Tree_Item_Array3addEP12Fl_Tree_Item:
 541              	.LFB581:
 542              		.loc 1 149 0
 543              		.cfi_startproc
 544              	.LVL50:
 545              		.loc 1 149 0
 546 0000 4889F2   		movq	%rsi, %rdx
 547              		.loc 1 150 0
 548 0003 8B7708   		movl	8(%rdi), %esi
 549              	.LVL51:
 550 0006 E9000000 		jmp	_ZN18Fl_Tree_Item_Array6insertEiP12Fl_Tree_Item
 550      00
 551              	.LVL52:
 552              		.cfi_endproc
 553              	.LFE581:
 555              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array3addEP12Fl_Tree_Item
 556              	.LCOLDE6:
 557              		.section	.text._ZN18Fl_Tree_Item_Array3addEP12Fl_Tree_Item
 558              	.LHOTE6:
 559              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array7replaceEiP12Fl_Tree_Item,"ax",@progbits
 560              		.align 2
 561              	.LCOLDB7:
 562              		.section	.text._ZN18Fl_Tree_Item_Array7replaceEiP12Fl_Tree_Item,"ax",@progbits
 563              	.LHOTB7:
 564              		.align 2
 565              		.p2align 4,,15
 566              		.globl	_ZN18Fl_Tree_Item_Array7replaceEiP12Fl_Tree_Item
 568              	_ZN18Fl_Tree_Item_Array7replaceEiP12Fl_Tree_Item:
 569              	.LFB582:
 570              		.loc 1 158 0
 571              		.cfi_startproc
 572              	.LVL53:
 573 0000 4156     		pushq	%r14
 574              		.cfi_def_cfa_offset 16
 575              		.cfi_offset 14, -16
 576 0002 4155     		pushq	%r13
 577              		.cfi_def_cfa_offset 24
 578              		.cfi_offset 13, -24
 579 0004 4989D6   		movq	%rdx, %r14
 580 0007 4154     		pushq	%r12
 581              		.cfi_def_cfa_offset 32
 582              		.cfi_offset 12, -32
 583              		.loc 1 159 0
 584 0009 4C63E6   		movslq	%esi, %r12
 585              		.loc 1 158 0
 586 000c 55       		pushq	%rbp
 587              		.cfi_def_cfa_offset 40
 588              		.cfi_offset 6, -40
 589              		.loc 1 159 0
 590 000d 4E8D2CE5 		leaq	0(,%r12,8), %r13
 590      00000000 
 591              		.loc 1 158 0
 592 0015 53       		pushq	%rbx
 593              		.cfi_def_cfa_offset 48
 594              		.cfi_offset 3, -48
 595 0016 4889FB   		movq	%rdi, %rbx
 596 0019 4883EC10 		subq	$16, %rsp
 597              		.cfi_def_cfa_offset 64
 598              		.loc 1 159 0
 599 001d 4C89E8   		movq	%r13, %rax
 600 0020 480307   		addq	(%rdi), %rax
 601 0023 488B28   		movq	(%rax), %rbp
 602 0026 4885ED   		testq	%rbp, %rbp
 603 0029 741E     		je	.L37
 604              		.loc 1 164 0 discriminator 1
 605 002b 4889EF   		movq	%rbp, %rdi
 606              	.LVL54:
 607 002e 8974240C 		movl	%esi, 12(%rsp)
 608 0032 E8000000 		call	_ZN12Fl_Tree_ItemD1Ev
 608      00
 609              	.LVL55:
 610 0037 4889EF   		movq	%rbp, %rdi
 611 003a E8000000 		call	_ZdlPv
 611      00
 612              	.LVL56:
 613 003f 4C89E8   		movq	%r13, %rax
 614 0042 480303   		addq	(%rbx), %rax
 615 0045 8B74240C 		movl	12(%rsp), %esi
 616              	.LVL57:
 617              	.L37:
 618              		.loc 1 166 0
 619 0049 4C8930   		movq	%r14, (%rax)
 620              		.loc 1 172 0
 621 004c 488B03   		movq	(%rbx), %rax
 622 004f 4A8B3CE0 		movq	(%rax,%r12,8), %rdi
 623              		.loc 1 174 0
 624 0053 4883C410 		addq	$16, %rsp
 625              		.cfi_def_cfa_offset 48
 626 0057 5B       		popq	%rbx
 627              		.cfi_def_cfa_offset 40
 628              	.LVL58:
 629 0058 5D       		popq	%rbp
 630              		.cfi_def_cfa_offset 32
 631 0059 415C     		popq	%r12
 632              		.cfi_def_cfa_offset 24
 633              	.LVL59:
 634 005b 415D     		popq	%r13
 635              		.cfi_def_cfa_offset 16
 636 005d 415E     		popq	%r14
 637              		.cfi_def_cfa_offset 8
 638              	.LVL60:
 639              		.loc 1 172 0
 640 005f E9000000 		jmp	_ZN12Fl_Tree_Item16update_prev_nextEi
 640      00
 641              	.LVL61:
 642              		.cfi_endproc
 643              	.LFE582:
 645              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array7replaceEiP12Fl_Tree_Item
 646              	.LCOLDE7:
 647              		.section	.text._ZN18Fl_Tree_Item_Array7replaceEiP12Fl_Tree_Item
 648              	.LHOTE7:
 649              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array6removeEi,"ax",@progbits
 650              		.align 2
 651              	.LCOLDB8:
 652              		.section	.text._ZN18Fl_Tree_Item_Array6removeEi,"ax",@progbits
 653              	.LHOTB8:
 654              		.align 2
 655              		.p2align 4,,15
 656              		.globl	_ZN18Fl_Tree_Item_Array6removeEi
 658              	_ZN18Fl_Tree_Item_Array6removeEi:
 659              	.LFB583:
 660              		.loc 1 180 0
 661              		.cfi_startproc
 662              	.LVL62:
 663 0000 4156     		pushq	%r14
 664              		.cfi_def_cfa_offset 16
 665              		.cfi_offset 14, -16
 666 0002 4C63F6   		movslq	%esi, %r14
 667 0005 4155     		pushq	%r13
 668              		.cfi_def_cfa_offset 24
 669              		.cfi_offset 13, -24
 670 0007 4154     		pushq	%r12
 671              		.cfi_def_cfa_offset 32
 672              		.cfi_offset 12, -32
 673              		.loc 1 181 0
 674 0009 4E8D24F5 		leaq	0(,%r14,8), %r12
 674      00000000 
 675              		.loc 1 180 0
 676 0011 55       		pushq	%rbp
 677              		.cfi_def_cfa_offset 40
 678              		.cfi_offset 6, -40
 679 0012 53       		pushq	%rbx
 680              		.cfi_def_cfa_offset 48
 681              		.cfi_offset 3, -48
 682              		.loc 1 180 0
 683 0013 4C89F5   		movq	%r14, %rbp
 684 0016 4889FB   		movq	%rdi, %rbx
 685              		.loc 1 181 0
 686 0019 4C89E0   		movq	%r12, %rax
 687 001c 480307   		addq	(%rdi), %rax
 688 001f 4C8B28   		movq	(%rax), %r13
 689 0022 4D85ED   		testq	%r13, %r13
 690 0025 7416     		je	.L43
 691              		.loc 1 185 0 discriminator 1
 692 0027 4C89EF   		movq	%r13, %rdi
 693              	.LVL63:
 694 002a E8000000 		call	_ZN12Fl_Tree_ItemD1Ev
 694      00
 695              	.LVL64:
 696 002f 4C89EF   		movq	%r13, %rdi
 697 0032 E8000000 		call	_ZdlPv
 697      00
 698              	.LVL65:
 699 0037 4C89E0   		movq	%r12, %rax
 700 003a 480303   		addq	(%rbx), %rax
 701              	.L43:
 702              		.loc 1 187 0
 703 003d 48C70000 		movq	$0, (%rax)
 703      000000
 704              		.loc 1 188 0
 705 0044 8B4308   		movl	8(%rbx), %eax
 706 0047 8D48FF   		leal	-1(%rax), %ecx
 707              	.LBB31:
 708              		.loc 1 189 0
 709 004a 39CD     		cmpl	%ecx, %ebp
 710              	.LBE31:
 711              		.loc 1 188 0
 712 004c 894B08   		movl	%ecx, 8(%rbx)
 713              	.LVL66:
 714              	.LBB32:
 715              		.loc 1 189 0
 716 004f 7D2D     		jge	.L44
 717 0051 4C89E0   		movq	%r12, %rax
 718 0054 89EA     		movl	%ebp, %edx
 719              	.LVL67:
 720 0056 662E0F1F 		.p2align 4,,10
 720      84000000 
 720      0000
 721              		.p2align 3
 722              	.L45:
 723              		.loc 1 190 0 discriminator 2
 724 0060 488B0B   		movq	(%rbx), %rcx
 725              		.loc 1 189 0 discriminator 2
 726 0063 83C201   		addl	$1, %edx
 727              	.LVL68:
 728              		.loc 1 190 0 discriminator 2
 729 0066 488B7C01 		movq	8(%rcx,%rax), %rdi
 729      08
 730 006b 48893C01 		movq	%rdi, (%rcx,%rax)
 731              		.loc 1 189 0 discriminator 2
 732 006f 8B4B08   		movl	8(%rbx), %ecx
 733 0072 4883C008 		addq	$8, %rax
 734 0076 39D1     		cmpl	%edx, %ecx
 735 0078 7FE6     		jg	.L45
 736              	.LBE32:
 737              		.loc 1 196 0
 738 007a 39CD     		cmpl	%ecx, %ebp
 739 007c 7C32     		jl	.L59
 740              	.LVL69:
 741              	.L44:
 742              		.loc 1 198 0 discriminator 1
 743 007e 39CD     		cmpl	%ecx, %ebp
 744 0080 7F1E     		jg	.L42
 745 0082 85ED     		testl	%ebp, %ebp
 746 0084 7E1A     		jle	.L42
 747              		.loc 1 200 0
 748 0086 488B03   		movq	(%rbx), %rax
 749 0089 8D75FF   		leal	-1(%rbp), %esi
 750              		.loc 1 203 0
 751 008c 5B       		popq	%rbx
 752              		.cfi_remember_state
 753              		.cfi_def_cfa_offset 40
 754              	.LVL70:
 755 008d 5D       		popq	%rbp
 756              		.cfi_def_cfa_offset 32
 757              	.LVL71:
 758              		.loc 1 200 0
 759 008e 4A8B7C20 		movq	-8(%rax,%r12), %rdi
 759      F8
 760              		.loc 1 203 0
 761 0093 415C     		popq	%r12
 762              		.cfi_def_cfa_offset 24
 763 0095 415D     		popq	%r13
 764              		.cfi_def_cfa_offset 16
 765 0097 415E     		popq	%r14
 766              		.cfi_def_cfa_offset 8
 767              	.LVL72:
 768              		.loc 1 200 0
 769 0099 E9000000 		jmp	_ZN12Fl_Tree_Item16update_prev_nextEi
 769      00
 770              	.LVL73:
 771 009e 6690     		.p2align 4,,10
 772              		.p2align 3
 773              	.L42:
 774              		.cfi_restore_state
 775              		.loc 1 203 0
 776 00a0 5B       		popq	%rbx
 777              		.cfi_remember_state
 778              		.cfi_def_cfa_offset 40
 779              	.LVL74:
 780 00a1 5D       		popq	%rbp
 781              		.cfi_def_cfa_offset 32
 782 00a2 415C     		popq	%r12
 783              		.cfi_def_cfa_offset 24
 784 00a4 415D     		popq	%r13
 785              		.cfi_def_cfa_offset 16
 786 00a6 415E     		popq	%r14
 787              		.cfi_def_cfa_offset 8
 788 00a8 C3       		ret
 789              	.LVL75:
 790 00a9 0F1F8000 		.p2align 4,,10
 790      000000
 791              		.p2align 3
 792              	.L59:
 793              		.cfi_restore_state
 794              		.loc 1 197 0
 795 00b0 488B03   		movq	(%rbx), %rax
 796 00b3 89EE     		movl	%ebp, %esi
 797              		.loc 1 203 0
 798 00b5 5B       		popq	%rbx
 799              		.cfi_def_cfa_offset 40
 800              	.LVL76:
 801 00b6 5D       		popq	%rbp
 802              		.cfi_def_cfa_offset 32
 803              		.loc 1 197 0
 804 00b7 4A8B3CF0 		movq	(%rax,%r14,8), %rdi
 805              		.loc 1 203 0
 806 00bb 415C     		popq	%r12
 807              		.cfi_def_cfa_offset 24
 808 00bd 415D     		popq	%r13
 809              		.cfi_def_cfa_offset 16
 810 00bf 415E     		popq	%r14
 811              		.cfi_def_cfa_offset 8
 812              		.loc 1 200 0
 813 00c1 E9000000 		jmp	_ZN12Fl_Tree_Item16update_prev_nextEi
 813      00
 814              	.LVL77:
 815              		.cfi_endproc
 816              	.LFE583:
 818              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array6removeEi
 819              	.LCOLDE8:
 820              		.section	.text._ZN18Fl_Tree_Item_Array6removeEi
 821              	.LHOTE8:
 822              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array6removeEP12Fl_Tree_Item,"ax",@progbits
 823              		.align 2
 824              	.LCOLDB9:
 825              		.section	.text._ZN18Fl_Tree_Item_Array6removeEP12Fl_Tree_Item,"ax",@progbits
 826              	.LHOTB9:
 827              		.align 2
 828              		.p2align 4,,15
 829              		.globl	_ZN18Fl_Tree_Item_Array6removeEP12Fl_Tree_Item
 831              	_ZN18Fl_Tree_Item_Array6removeEP12Fl_Tree_Item:
 832              	.LFB584:
 833              		.loc 1 209 0
 834              		.cfi_startproc
 835              	.LVL78:
 836 0000 4883EC08 		subq	$8, %rsp
 837              		.cfi_def_cfa_offset 16
 838              	.LBB33:
 839              		.loc 1 210 0
 840 0004 8B4F08   		movl	8(%rdi), %ecx
 841              	.LBE33:
 842              		.loc 1 216 0
 843 0007 B8FFFFFF 		movl	$-1, %eax
 843      FF
 844              	.LBB34:
 845              		.loc 1 210 0
 846 000c 85C9     		testl	%ecx, %ecx
 847 000e 7E26     		jle	.L61
 848              		.loc 1 211 0
 849 0010 488B07   		movq	(%rdi), %rax
 850 0013 483B30   		cmpq	(%rax), %rsi
 851 0016 7423     		je	.L72
 852 0018 4883C008 		addq	$8, %rax
 853 001c 31D2     		xorl	%edx, %edx
 854 001e EB0A     		jmp	.L64
 855              	.LVL79:
 856              		.p2align 4,,10
 857              		.p2align 3
 858              	.L65:
 859 0020 4883C008 		addq	$8, %rax
 860 0024 483970F8 		cmpq	%rsi, -8(%rax)
 861 0028 7413     		je	.L62
 862              	.LVL80:
 863              	.L64:
 864              		.loc 1 210 0 discriminator 2
 865 002a 83C201   		addl	$1, %edx
 866              	.LVL81:
 867 002d 39CA     		cmpl	%ecx, %edx
 868 002f 75EF     		jne	.L65
 869              	.LBE34:
 870              		.loc 1 216 0
 871 0031 B8FFFFFF 		movl	$-1, %eax
 871      FF
 872              	.LVL82:
 873              	.L61:
 874              		.loc 1 217 0
 875 0036 4883C408 		addq	$8, %rsp
 876              		.cfi_remember_state
 877              		.cfi_def_cfa_offset 8
 878 003a C3       		ret
 879              	.LVL83:
 880              	.L72:
 881              		.cfi_restore_state
 882              	.LBB35:
 883              		.loc 1 210 0
 884 003b 31D2     		xorl	%edx, %edx
 885              	.LVL84:
 886              	.L62:
 887              		.loc 1 212 0
 888 003d 89D6     		movl	%edx, %esi
 889              	.LVL85:
 890 003f E8000000 		call	_ZN18Fl_Tree_Item_Array6removeEi
 890      00
 891              	.LVL86:
 892              		.loc 1 213 0
 893 0044 31C0     		xorl	%eax, %eax
 894              	.LBE35:
 895              		.loc 1 217 0
 896 0046 4883C408 		addq	$8, %rsp
 897              		.cfi_def_cfa_offset 8
 898 004a C3       		ret
 899              		.cfi_endproc
 900              	.LFE584:
 902              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array6removeEP12Fl_Tree_Item
 903              	.LCOLDE9:
 904              		.section	.text._ZN18Fl_Tree_Item_Array6removeEP12Fl_Tree_Item
 905              	.LHOTE9:
 906              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array4moveEii,"ax",@progbits
 907              		.align 2
 908              	.LCOLDB10:
 909              		.section	.text._ZN18Fl_Tree_Item_Array4moveEii,"ax",@progbits
 910              	.LHOTB10:
 911              		.align 2
 912              		.p2align 4,,15
 913              		.globl	_ZN18Fl_Tree_Item_Array4moveEii
 915              	_ZN18Fl_Tree_Item_Array4moveEii:
 916              	.LFB585:
 917              		.loc 1 244 0
 918              		.cfi_startproc
 919              	.LVL87:
 920              		.loc 1 245 0
 921 0000 39F2     		cmpl	%esi, %edx
 922 0002 0F84D800 		je	.L96
 922      0000
 923              		.loc 1 246 0
 924 0008 85F6     		testl	%esi, %esi
 925 000a 0F88DA00 		js	.L85
 925      0000
 926              		.loc 1 244 0 discriminator 2
 927 0010 4154     		pushq	%r12
 928              		.cfi_def_cfa_offset 16
 929              		.cfi_offset 12, -16
 930 0012 55       		pushq	%rbp
 931              		.cfi_def_cfa_offset 24
 932              		.cfi_offset 6, -24
 933              		.loc 1 246 0 discriminator 2
 934 0013 89D1     		movl	%edx, %ecx
 935              		.loc 1 244 0 discriminator 2
 936 0015 53       		pushq	%rbx
 937              		.cfi_def_cfa_offset 32
 938              		.cfi_offset 3, -32
 939              		.loc 1 246 0 discriminator 2
 940 0016 8B4708   		movl	8(%rdi), %eax
 941 0019 4889FD   		movq	%rdi, %rbp
 942 001c 39C2     		cmpl	%eax, %edx
 943 001e 400F9DC7 		setge	%dil
 944              	.LVL88:
 945 0022 C1E91F   		shrl	$31, %ecx
 946 0025 4008CF   		orb	%cl, %dil
 947 0028 0F85B500 		jne	.L86
 947      0000
 948 002e 39C6     		cmpl	%eax, %esi
 949 0030 0F8DAD00 		jge	.L86
 949      0000
 950              		.loc 1 247 0
 951 0036 488B4D00 		movq	0(%rbp), %rcx
 952 003a 4863FA   		movslq	%edx, %rdi
 953              	.LBB36:
 954              		.loc 1 249 0
 955 003d 39F2     		cmpl	%esi, %edx
 956              	.LBE36:
 957              		.loc 1 247 0
 958 003f 488D04FD 		leaq	0(,%rdi,8), %rax
 958      00000000 
 959 0047 4C8B0CF9 		movq	(%rcx,%rdi,8), %r9
 960              	.LVL89:
 961              	.LBB39:
 962              		.loc 1 249 0
 963 004b 7C77     		jl	.L87
 964              	.LVL90:
 965              	.LBB37:
 966              		.loc 1 253 0 discriminator 3
 967 004d 7F21     		jg	.L93
 968 004f EB23     		jmp	.L77
 969              	.LVL91:
 970              		.p2align 4,,10
 971 0051 0F1F8000 		.p2align 3
 971      000000
 972              	.L95:
 973              		.loc 1 254 0 discriminator 2
 974 0058 488B7C01 		movq	-8(%rcx,%rax), %rdi
 974      F8
 975              		.loc 1 253 0 discriminator 2
 976 005d 83EA01   		subl	$1, %edx
 977              	.LVL92:
 978              		.loc 1 254 0 discriminator 2
 979 0060 48893C01 		movq	%rdi, (%rcx,%rax)
 980 0064 4883E808 		subq	$8, %rax
 981              		.loc 1 253 0 discriminator 2
 982 0068 39D6     		cmpl	%edx, %esi
 983 006a 488B4D00 		movq	0(%rbp), %rcx
 984 006e 7D04     		jge	.L77
 985              	.L93:
 986 0070 85D2     		testl	%edx, %edx
 987 0072 7FE4     		jg	.L95
 988              	.LVL93:
 989              	.L77:
 990              	.LBE37:
 991              	.LBE39:
 992              		.loc 1 256 0
 993 0074 4863F6   		movslq	%esi, %rsi
 994 0077 4C890CF1 		movq	%r9, (%rcx,%rsi,8)
 995              	.LVL94:
 996              	.LBB40:
 997              		.loc 1 258 0
 998 007b 8B4508   		movl	8(%rbp), %eax
 999 007e 85C0     		testl	%eax, %eax
 1000 0080 7E29     		jle	.L83
 1001              		.loc 1 258 0 is_stmt 0 discriminator 2
 1002 0082 4531E4   		xorl	%r12d, %r12d
 1003 0085 31DB     		xorl	%ebx, %ebx
 1004              	.LVL95:
 1005 0087 660F1F84 		.p2align 4,,10
 1005      00000000 
 1005      00
 1006              		.p2align 3
 1007              	.L84:
 1008              		.loc 1 259 0 is_stmt 1 discriminator 2
 1009 0090 488B4500 		movq	0(%rbp), %rax
 1010 0094 89DE     		movl	%ebx, %esi
 1011              		.loc 1 258 0 discriminator 2
 1012 0096 83C301   		addl	$1, %ebx
 1013              	.LVL96:
 1014              		.loc 1 259 0 discriminator 2
 1015 0099 4A8B3C20 		movq	(%rax,%r12), %rdi
 1016 009d 4983C408 		addq	$8, %r12
 1017 00a1 E8000000 		call	_ZN12Fl_Tree_Item16update_prev_nextEi
 1017      00
 1018              	.LVL97:
 1019              		.loc 1 258 0 discriminator 2
 1020 00a6 395D08   		cmpl	%ebx, 8(%rbp)
 1021 00a9 7FE5     		jg	.L84
 1022              	.LVL98:
 1023              	.L83:
 1024              	.LBE40:
 1025              		.loc 1 245 0
 1026 00ab 31C0     		xorl	%eax, %eax
 1027              	.L75:
 1028              		.loc 1 261 0
 1029 00ad 5B       		popq	%rbx
 1030              		.cfi_remember_state
 1031              		.cfi_restore 3
 1032              		.cfi_def_cfa_offset 24
 1033 00ae 5D       		popq	%rbp
 1034              		.cfi_restore 6
 1035              		.cfi_def_cfa_offset 16
 1036              	.LVL99:
 1037 00af 415C     		popq	%r12
 1038              		.cfi_restore 12
 1039              		.cfi_def_cfa_offset 8
 1040 00b1 C3       		ret
 1041              	.LVL100:
 1042              		.p2align 4,,10
 1043 00b2 660F1F44 		.p2align 3
 1043      0000
 1044              	.L88:
 1045              		.cfi_restore_state
 1046              	.LBB41:
 1047              	.LBB38:
 1048              		.loc 1 250 0 discriminator 2
 1049 00b8 395508   		cmpl	%edx, 8(%rbp)
 1050 00bb 7C1B     		jl	.L80
 1051 00bd 488B4D00 		movq	0(%rbp), %rcx
 1052 00c1 4C89C0   		movq	%r8, %rax
 1053              	.LVL101:
 1054              	.L87:
 1055              		.loc 1 251 0 discriminator 3
 1056 00c4 488B7C01 		movq	8(%rcx,%rax), %rdi
 1056      08
 1057              		.loc 1 250 0 discriminator 3
 1058 00c9 83C201   		addl	$1, %edx
 1059              	.LVL102:
 1060 00cc 4C8D4008 		leaq	8(%rax), %r8
 1061 00d0 39D6     		cmpl	%edx, %esi
 1062              		.loc 1 251 0 discriminator 3
 1063 00d2 48893C01 		movq	%rdi, (%rcx,%rax)
 1064              		.loc 1 250 0 discriminator 3
 1065 00d6 75E0     		jne	.L88
 1066              	.L80:
 1067 00d8 488B4D00 		movq	0(%rbp), %rcx
 1068 00dc EB96     		jmp	.L77
 1069              	.LVL103:
 1070 00de 6690     		.p2align 4,,10
 1071              		.p2align 3
 1072              	.L96:
 1073              		.cfi_def_cfa_offset 8
 1074              		.cfi_restore 3
 1075              		.cfi_restore 6
 1076              		.cfi_restore 12
 1077              	.LBE38:
 1078              	.LBE41:
 1079              		.loc 1 245 0
 1080 00e0 31C0     		xorl	%eax, %eax
 1081              		.loc 1 261 0
 1082 00e2 C3       		ret
 1083              	.LVL104:
 1084              	.L86:
 1085              		.cfi_def_cfa_offset 32
 1086              		.cfi_offset 3, -32
 1087              		.cfi_offset 6, -24
 1088              		.cfi_offset 12, -16
 1089              		.loc 1 246 0
 1090 00e3 B8FFFFFF 		movl	$-1, %eax
 1090      FF
 1091 00e8 EBC3     		jmp	.L75
 1092              	.LVL105:
 1093              	.L85:
 1094              		.cfi_def_cfa_offset 8
 1095              		.cfi_restore 3
 1096              		.cfi_restore 6
 1097              		.cfi_restore 12
 1098 00ea B8FFFFFF 		movl	$-1, %eax
 1098      FF
 1099 00ef C3       		ret
 1100              		.cfi_endproc
 1101              	.LFE585:
 1103              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array4moveEii
 1104              	.LCOLDE10:
 1105              		.section	.text._ZN18Fl_Tree_Item_Array4moveEii
 1106              	.LHOTE10:
 1107              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array8deparentEi,"ax",@progbits
 1108              		.align 2
 1109              	.LCOLDB11:
 1110              		.section	.text._ZN18Fl_Tree_Item_Array8deparentEi,"ax",@progbits
 1111              	.LHOTB11:
 1112              		.align 2
 1113              		.p2align 4,,15
 1114              		.globl	_ZN18Fl_Tree_Item_Array8deparentEi
 1116              	_ZN18Fl_Tree_Item_Array8deparentEi:
 1117              	.LFB586:
 1118              		.loc 1 270 0
 1119              		.cfi_startproc
 1120              	.LVL106:
 1121 0000 4157     		pushq	%r15
 1122              		.cfi_def_cfa_offset 16
 1123              		.cfi_offset 15, -16
 1124 0002 4156     		pushq	%r14
 1125              		.cfi_def_cfa_offset 24
 1126              		.cfi_offset 14, -24
 1127 0004 4155     		pushq	%r13
 1128              		.cfi_def_cfa_offset 32
 1129              		.cfi_offset 13, -32
 1130 0006 4154     		pushq	%r12
 1131              		.cfi_def_cfa_offset 40
 1132              		.cfi_offset 12, -40
 1133 0008 55       		pushq	%rbp
 1134              		.cfi_def_cfa_offset 48
 1135              		.cfi_offset 6, -48
 1136 0009 53       		pushq	%rbx
 1137              		.cfi_def_cfa_offset 56
 1138              		.cfi_offset 3, -56
 1139 000a 4883EC08 		subq	$8, %rsp
 1140              		.cfi_def_cfa_offset 64
 1141              		.loc 1 271 0
 1142 000e 397708   		cmpl	%esi, 8(%rdi)
 1143 0011 0F8EA900 		jle	.L103
 1143      0000
 1144 0017 89F0     		movl	%esi, %eax
 1145 0019 C1E81F   		shrl	$31, %eax
 1146 001c 84C0     		testb	%al, %al
 1147 001e 0F859C00 		jne	.L103
 1147      0000
 1148              		.loc 1 273 0
 1149 0024 488B17   		movq	(%rdi), %rdx
 1150 0027 4863C6   		movslq	%esi, %rax
 1151 002a 4989FF   		movq	%rdi, %r15
 1152 002d 4889C5   		movq	%rax, %rbp
 1153 0030 488D1CC5 		leaq	0(,%rax,8), %rbx
 1153      00000000 
 1154 0038 4C8B24C2 		movq	(%rdx,%rax,8), %r12
 1155              	.LVL107:
 1156              		.loc 1 274 0
 1157 003c 4C89E7   		movq	%r12, %rdi
 1158              	.LVL108:
 1159 003f E8000000 		call	_ZN12Fl_Tree_Item12prev_siblingEv
 1159      00
 1160              	.LVL109:
 1161              		.loc 1 275 0
 1162 0044 4C89E7   		movq	%r12, %rdi
 1163              		.loc 1 274 0
 1164 0047 4989C6   		movq	%rax, %r14
 1165              	.LVL110:
 1166              		.loc 1 275 0
 1167 004a E8000000 		call	_ZN12Fl_Tree_Item12next_siblingEv
 1167      00
 1168              	.LVL111:
 1169 004f 4989C5   		movq	%rax, %r13
 1170              	.LVL112:
 1171              		.loc 1 277 0
 1172 0052 418B4708 		movl	8(%r15), %eax
 1173              	.LVL113:
 1174 0056 8D50FF   		leal	-1(%rax), %edx
 1175              	.LBB42:
 1176              		.loc 1 278 0
 1177 0059 89E8     		movl	%ebp, %eax
 1178 005b 39D5     		cmpl	%edx, %ebp
 1179              	.LBE42:
 1180              		.loc 1 277 0
 1181 005d 41895708 		movl	%edx, 8(%r15)
 1182              	.LVL114:
 1183              	.LBB43:
 1184              		.loc 1 278 0
 1185 0061 7D1E     		jge	.L102
 1186              		.p2align 4,,10
 1187 0063 0F1F4400 		.p2align 3
 1187      00
 1188              	.L106:
 1189              		.loc 1 279 0 discriminator 2
 1190 0068 498B17   		movq	(%r15), %rdx
 1191              		.loc 1 278 0 discriminator 2
 1192 006b 83C001   		addl	$1, %eax
 1193              	.LVL115:
 1194              		.loc 1 279 0 discriminator 2
 1195 006e 488B4C1A 		movq	8(%rdx,%rbx), %rcx
 1195      08
 1196 0073 48890C1A 		movq	%rcx, (%rdx,%rbx)
 1197 0077 4883C308 		addq	$8, %rbx
 1198              		.loc 1 278 0 discriminator 2
 1199 007b 41394708 		cmpl	%eax, 8(%r15)
 1200 007f 7FE7     		jg	.L106
 1201              	.L102:
 1202              	.LBE43:
 1203              		.loc 1 281 0
 1204 0081 BEFFFFFF 		movl	$-1, %esi
 1204      FF
 1205 0086 4C89E7   		movq	%r12, %rdi
 1206 0089 E8000000 		call	_ZN12Fl_Tree_Item16update_prev_nextEi
 1206      00
 1207              	.LVL116:
 1208              		.loc 1 283 0
 1209 008e 4D85F6   		testq	%r14, %r14
 1210 0091 740B     		je	.L101
 1211              		.loc 1 283 0 is_stmt 0 discriminator 1
 1212 0093 8D75FF   		leal	-1(%rbp), %esi
 1213 0096 4C89F7   		movq	%r14, %rdi
 1214 0099 E8000000 		call	_ZN12Fl_Tree_Item16update_prev_nextEi
 1214      00
 1215              	.LVL117:
 1216              	.L101:
 1217              		.loc 1 285 0 is_stmt 1
 1218 009e 31DB     		xorl	%ebx, %ebx
 1219              		.loc 1 284 0
 1220 00a0 4D85ED   		testq	%r13, %r13
 1221 00a3 740A     		je	.L98
 1222              		.loc 1 284 0 is_stmt 0 discriminator 1
 1223 00a5 89EE     		movl	%ebp, %esi
 1224 00a7 4C89EF   		movq	%r13, %rdi
 1225 00aa E8000000 		call	_ZN12Fl_Tree_Item16update_prev_nextEi
 1225      00
 1226              	.LVL118:
 1227              	.L98:
 1228              		.loc 1 286 0 is_stmt 1
 1229 00af 4883C408 		addq	$8, %rsp
 1230              		.cfi_remember_state
 1231              		.cfi_def_cfa_offset 56
 1232 00b3 89D8     		movl	%ebx, %eax
 1233 00b5 5B       		popq	%rbx
 1234              		.cfi_def_cfa_offset 48
 1235 00b6 5D       		popq	%rbp
 1236              		.cfi_def_cfa_offset 40
 1237 00b7 415C     		popq	%r12
 1238              		.cfi_def_cfa_offset 32
 1239 00b9 415D     		popq	%r13
 1240              		.cfi_def_cfa_offset 24
 1241 00bb 415E     		popq	%r14
 1242              		.cfi_def_cfa_offset 16
 1243 00bd 415F     		popq	%r15
 1244              		.cfi_def_cfa_offset 8
 1245 00bf C3       		ret
 1246              	.LVL119:
 1247              	.L103:
 1248              		.cfi_restore_state
 1249              		.loc 1 271 0
 1250 00c0 BBFFFFFF 		movl	$-1, %ebx
 1250      FF
 1251 00c5 EBE8     		jmp	.L98
 1252              		.cfi_endproc
 1253              	.LFE586:
 1255              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array8deparentEi
 1256              	.LCOLDE11:
 1257              		.section	.text._ZN18Fl_Tree_Item_Array8deparentEi
 1258              	.LHOTE11:
 1259              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array8reparentEP12Fl_Tree_ItemS1_i,"ax",@progbits
 1260              		.align 2
 1261              	.LCOLDB12:
 1262              		.section	.text._ZN18Fl_Tree_Item_Array8reparentEP12Fl_Tree_ItemS1_i,"ax",@progbits
 1263              	.LHOTB12:
 1264              		.align 2
 1265              		.p2align 4,,15
 1266              		.globl	_ZN18Fl_Tree_Item_Array8reparentEP12Fl_Tree_ItemS1_i
 1268              	_ZN18Fl_Tree_Item_Array8reparentEP12Fl_Tree_ItemS1_i:
 1269              	.LFB587:
 1270              		.loc 1 293 0
 1271              		.cfi_startproc
 1272              	.LVL120:
 1273              		.loc 1 294 0
 1274 0000 85C9     		testl	%ecx, %ecx
 1275 0002 B8FFFFFF 		movl	$-1, %eax
 1275      FF
 1276 0007 0F889900 		js	.L114
 1276      0000
 1277              		.loc 1 294 0 is_stmt 0 discriminator 2
 1278 000d 3B4F08   		cmpl	8(%rdi), %ecx
 1279 0010 0F8F8E00 		jg	.L118
 1279      0000
 1280              		.loc 1 293 0 is_stmt 1
 1281 0016 4155     		pushq	%r13
 1282              		.cfi_def_cfa_offset 16
 1283              		.cfi_offset 13, -16
 1284 0018 4154     		pushq	%r12
 1285              		.cfi_def_cfa_offset 24
 1286              		.cfi_offset 12, -24
 1287 001a 4989F4   		movq	%rsi, %r12
 1288 001d 55       		pushq	%rbp
 1289              		.cfi_def_cfa_offset 32
 1290              		.cfi_offset 6, -32
 1291 001e 53       		pushq	%rbx
 1292              		.cfi_def_cfa_offset 40
 1293              		.cfi_offset 3, -40
 1294              		.loc 1 296 0
 1295 001f BE010000 		movl	$1, %esi
 1295      00
 1296              	.LVL121:
 1297 0024 4889FB   		movq	%rdi, %rbx
 1298 0027 89CD     		movl	%ecx, %ebp
 1299 0029 4989D5   		movq	%rdx, %r13
 1300              		.loc 1 293 0
 1301 002c 4883EC08 		subq	$8, %rsp
 1302              		.cfi_def_cfa_offset 48
 1303              		.loc 1 296 0
 1304 0030 E8000000 		call	_ZN18Fl_Tree_Item_Array7enlargeEi
 1304      00
 1305              	.LVL122:
 1306              		.loc 1 297 0
 1307 0035 8B4B08   		movl	8(%rbx), %ecx
 1308 0038 8D4101   		leal	1(%rcx), %eax
 1309              	.LBB44:
 1310              		.loc 1 298 0
 1311 003b 39CD     		cmpl	%ecx, %ebp
 1312              	.LBE44:
 1313              		.loc 1 297 0
 1314 003d 894308   		movl	%eax, 8(%rbx)
 1315              	.LVL123:
 1316              	.LBB45:
 1317              		.loc 1 298 0
 1318 0040 7D33     		jge	.L112
 1319 0042 4863F9   		movslq	%ecx, %rdi
 1320 0045 83E901   		subl	$1, %ecx
 1321              	.LVL124:
 1322 0048 29E9     		subl	%ebp, %ecx
 1323              	.LVL125:
 1324 004a 488D04FD 		leaq	0(,%rdi,8), %rax
 1324      00000000 
 1325 0052 4829CF   		subq	%rcx, %rdi
 1326              	.LVL126:
 1327 0055 4C8D0CFD 		leaq	-8(,%rdi,8), %r9
 1327      F8FFFFFF 
 1328              	.LVL127:
 1329 005d 0F1F00   		.p2align 4,,10
 1330              		.p2align 3
 1331              	.L113:
 1332              		.loc 1 299 0 discriminator 2
 1333 0060 4C8B03   		movq	(%rbx), %r8
 1334 0063 498B7C00 		movq	-8(%r8,%rax), %rdi
 1334      F8
 1335 0068 49893C00 		movq	%rdi, (%r8,%rax)
 1336 006c 4883E808 		subq	$8, %rax
 1337              		.loc 1 298 0 discriminator 2
 1338 0070 4C39C8   		cmpq	%r9, %rax
 1339 0073 75EB     		jne	.L113
 1340              	.L112:
 1341              	.LBE45:
 1342              		.loc 1 300 0
 1343 0075 488B13   		movq	(%rbx), %rdx
 1344 0078 4863C5   		movslq	%ebp, %rax
 1345              		.loc 1 303 0
 1346 007b 89EE     		movl	%ebp, %esi
 1347              		.loc 1 300 0
 1348 007d 4C8924C2 		movq	%r12, (%rdx,%rax,8)
 1349              		.loc 1 302 0
 1350 0081 488B13   		movq	(%rbx), %rdx
 1351 0084 488B14C2 		movq	(%rdx,%rax,8), %rdx
 1352              	.LVL128:
 1353              	.LBB46:
 1354              	.LBB47:
 1355              		.file 3 "fltk-1.3.4-1/FL/Fl_Tree_Item.H"
   1:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
   2:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // "$Id: Fl_Tree_Item.H 12034 2016-10-17 12:45:55Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
   4:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
   5:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #ifndef FL_TREE_ITEM_H
   6:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #define FL_TREE_ITEM_H
   7:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
   8:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #include <FL/Fl.H>
   9:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #include <FL/Fl_Widget.H>
  10:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #include <FL/Fl_Image.H>
  11:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #include <FL/fl_draw.H>
  12:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
  13:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #include <FL/Fl_Tree_Item_Array.H>
  14:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #include <FL/Fl_Tree_Prefs.H>
  15:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
  16:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //////////////////////
  17:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // FL/Fl_Tree_Item.H
  18:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //////////////////////
  19:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
  20:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // Fl_Tree -- This file is part of the Fl_Tree widget for FLTK
  21:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // Copyright (C) 2009-2010 by Greg Ercolano.
  22:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
  23:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // This library is free software. Distribution and use rights are outlined in
  24:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // the file "COPYING" which should have been included with this file.  If this
  25:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // file is missing or damaged, see the license at:
  26:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
  27:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //     http://www.fltk.org/COPYING.php
  28:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
  29:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** // Please report all bugs and problems on the following page:
  30:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
  31:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //     http://www.fltk.org/str.php
  32:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** //
  33:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
  34:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  35:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// \file
  36:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// \brief This file contains the definitions for Fl_Tree_Item
  37:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  38:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
  39:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// \class Fl_Tree_Item
  40:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// \brief Tree widget item.
  41:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  42:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// This class is a single tree item, and manages all of the item's attributes.
  43:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// Fl_Tree_Item is used by Fl_Tree, which is comprised of many instances of Fl_Tree_Item.
  44:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  45:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// Fl_Tree_Item is hierarchical; it dynamically manages an Fl_Tree_Item_Array of children
  46:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// that are themselves instances of Fl_Tree_Item. Each item can have zero or more children.
  47:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// When an item has children, close() and open() can be used to hide or show them.
  48:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  49:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// Items have their own attributes; font size, face, color.
  50:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// Items maintain their own hierarchy of children.
  51:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  52:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// When you make changes to items, you'll need to tell the tree to redraw()
  53:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// for the changes to show up.
  54:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  55:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// New 1.3.3 ABI feature:
  56:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// You can define custom items by either adding a custom widget to the item
  57:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// with Fl_Tree_Item::widget(), or override the draw_item_content() method
  58:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// if you want to just redefine how the label is drawn.
  59:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  60:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// The following shows the Fl_Tree_Item's dimensions, useful when overriding
  61:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** /// the draw_item_content() method:
  62:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  63:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///   \image html  Fl_Tree_Item-dimensions.png "Fl_Tree_Item's internal dimensions." width=6cm
  64:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///   \image latex Fl_Tree_Item-dimensions.png "Fl_Tree_Item's internal dimensions." width=6cm
  65:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** ///
  66:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** class Fl_Tree;
  67:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** class FL_EXPORT Fl_Tree_Item {
  68:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
  69:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree                *_tree;		// parent tree
  70:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
  71:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const char             *_label;		// label (memory managed)
  72:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Font                 _labelfont;		// label's font face
  73:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Fontsize             _labelsize;		// label's font size
  74:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color                _labelfgcolor;	// label's fg color
  75:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color                _labelbgcolor;	// label's bg color (0xffffffff is 'transparent')
  76:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
  77:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \enum Fl_Tree_Item_Flags
  78:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   enum Fl_Tree_Item_Flags {
  79:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #else
  80:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \enum
  81:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   enum {
  82:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
  83:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     OPEN                = 1<<0,		///> item is open
  84:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     VISIBLE             = 1<<1,		///> item is visible
  85:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     ACTIVE              = 1<<2,		///> item is active
  86:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     SELECTED            = 1<<3		///> item is selected
  87:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   };
  88:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10301
  89:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   // NEW
  90:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   unsigned short _flags;		// misc flags
  91:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #else /*FLTK_ABI_VERSION*/
  92:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   // OLD: this will go away after 1.3.x
  93:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   char                    _open;		// item is open?
  94:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   char                    _visible;		// item is visible?
  95:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   char                    _active;		// item activated?
  96:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   char                    _selected;		// item selected?
  97:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif /*FLTK_ABI_VERSION*/
  98:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int                     _xywh[4];		// xywh of this widget (if visible)
  99:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int                     _collapse_xywh[4];	// xywh of collapse icon (if visible)
 100:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int                     _label_xywh[4];	// xywh of label
 101:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Widget              *_widget;		// item's label widget (optional)
 102:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Image               *_usericon;		// item's user-specific icon (optional)
 103:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10304
 104:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Image               *_userdeicon;		// deactivated usericon
 105:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 106:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item_Array      _children;		// array of child items
 107:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item           *_parent;		// parent item (=0 if root)
 108:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void                   *_userdata;    	// user data that can be associated with an item
 109:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10301
 110:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item           *_prev_sibling;	// previous sibling (same level)
 111:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item           *_next_sibling;	// next sibling (same level)
 112:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif /*FLTK_ABI_VERSION*/
 113:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   // Protected methods
 114:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** protected:
 115:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void _Init(const Fl_Tree_Prefs &prefs, Fl_Tree *tree);
 116:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void show_widgets();
 117:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void hide_widgets();
 118:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void draw_vertical_connector(int x, int y1, int y2, const Fl_Tree_Prefs &prefs);
 119:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void draw_horizontal_connector(int x1, int x2, int y, const Fl_Tree_Prefs &prefs);
 120:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void recalc_tree();
 121:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int calc_item_height(const Fl_Tree_Prefs &prefs) const;
 122:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
 123:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color drawfgcolor() const;
 124:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color drawbgcolor() const;
 125:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 126:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
 127:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** public:
 128:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item(const Fl_Tree_Prefs &prefs);	// CTOR -- backwards compatible
 129:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
 130:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item(Fl_Tree *tree);			// CTOR -- ABI 1.3.3+
 131:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   virtual ~Fl_Tree_Item();			// DTOR -- ABI 1.3.3+
 132:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #else
 133:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ~Fl_Tree_Item();				// DTOR -- backwards compatible
 134:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 135:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item(const Fl_Tree_Item *o);		// COPY CTOR
 136:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's x position relative to the window
 137:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int x() const { return(_xywh[0]); }
 138:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's y position relative to the window
 139:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int y() const { return(_xywh[1]); }
 140:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The entire item's width to right edge of Fl_Tree's inner width
 141:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// within scrollbars.
 142:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int w() const { return(_xywh[2]); }
 143:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's height
 144:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int h() const { return(_xywh[3]); }
 145:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's label x position relative to the window
 146:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \version 1.3.3
 147:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int label_x() const { return(_label_xywh[0]); }
 148:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's label y position relative to the window
 149:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \version 1.3.3
 150:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int label_y() const { return(_label_xywh[1]); }
 151:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's maximum label width to right edge of Fl_Tree's inner width
 152:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// within scrollbars.
 153:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \version 1.3.3
 154:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int label_w() const { return(_label_xywh[2]); }
 155:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// The item's label height
 156:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// \version 1.3.3
 157:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int label_h() const { return(_label_xywh[3]); }
 158:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
 159:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   virtual int draw_item_content(int render);
 160:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void draw(int X, int &Y, int W, Fl_Tree_Item *itemfocus, 
 161:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 	    int &tree_item_xmax, int lastchild=1, int render=1);
 162:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #else
 163:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void draw(int X, int &Y, int W, Fl_Widget *tree, 
 164:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****             Fl_Tree_Item *itemfocus, const Fl_Tree_Prefs &prefs, int lastchild=1);
 165:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 166:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void show_self(const char *indent = "") const;
 167:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void label(const char *val);
 168:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const char *label() const;
 169:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
 170:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set a user-data value for the item.
 171:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   inline void user_data( void* data ) { _userdata = data; }
 172:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 
 173:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Retrieve the user-data value that has been assigned to the item.
 174:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   inline void* user_data() const { return _userdata; }
 175:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   
 176:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set item's label font face.
 177:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void labelfont(Fl_Font val) {
 178:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _labelfont = val; 
 179:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     recalc_tree();		// may change tree geometry
 180:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 181:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Get item's label font face.
 182:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Font labelfont() const {
 183:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_labelfont);
 184:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 185:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set item's label font size.
 186:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void labelsize(Fl_Fontsize val) {
 187:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _labelsize = val; 
 188:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     recalc_tree();		// may change tree geometry
 189:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 190:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Get item's label font size.
 191:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Fontsize labelsize() const {
 192:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_labelsize);
 193:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 194:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set item's label foreground text color.
 195:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void labelfgcolor(Fl_Color val) {
 196:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _labelfgcolor = val; 
 197:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 198:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return item's label foreground text color.
 199:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color labelfgcolor() const {
 200:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_labelfgcolor); 
 201:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 202:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set item's label text color. Alias for labelfgcolor(Fl_Color)).
 203:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void labelcolor(Fl_Color val) {
 204:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****      labelfgcolor(val);
 205:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 206:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return item's label text color. Alias for labelfgcolor() const).
 207:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color labelcolor() const {
 208:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return labelfgcolor(); 
 209:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 210:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set item's label background color.
 211:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// A special case is made for color 0xffffffff which uses the parent tree's bg color.
 212:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void labelbgcolor(Fl_Color val) {
 213:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _labelbgcolor = val; 
 214:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 215:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return item's label background text color.
 216:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// If the color is 0xffffffff, the default behavior is the parent tree's
 217:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// bg color will be used. (An overloaded draw_item_content() can override
 218:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// this behavior.)
 219:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Color labelbgcolor() const {
 220:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_labelbgcolor); 
 221:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 222:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Assign an FLTK widget to this item.
 223:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void widget(Fl_Widget *val) {
 224:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _widget = val; 
 225:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     recalc_tree();		// may change tree geometry
 226:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 227:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return FLTK widget assigned to this item.
 228:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Widget *widget() const {
 229:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_widget); 
 230:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 231:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return the number of children this item has.
 232:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int children() const {
 233:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_children.total()); 
 234:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 235:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return the child item for the given 'index'.
 236:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *child(int index) {
 237:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_children[index]); 
 238:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 239:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return the const child item for the given 'index'.
 240:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree_Item *child(int t) const;
 241:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// See if this item has children.
 242:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int has_children() const {
 243:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(children()); 
 244:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 245:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int find_child(const char *name);
 246:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int find_child(Fl_Tree_Item *item);
 247:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int remove_child(Fl_Tree_Item *item);
 248:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int remove_child(const char *new_label);
 249:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void clear_children();
 250:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void swap_children(int ax, int bx);
 251:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int swap_children(Fl_Tree_Item *a, Fl_Tree_Item *b);
 252:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree_Item *find_child_item(const char *name) const;
 253:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****         Fl_Tree_Item *find_child_item(const char *name);
 254:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree_Item *find_child_item(char **arr) const;
 255:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****         Fl_Tree_Item *find_child_item(char **arr);
 256:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree_Item *find_item(char **arr) const;
 257:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****         Fl_Tree_Item *find_item(char **arr);
 258:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   //////////////////
 259:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   // Adding items
 260:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   //////////////////
 261:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *add(const Fl_Tree_Prefs &prefs,
 262:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   		    const char *new_label,
 263:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   		    Fl_Tree_Item *newitem);
 264:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *add(const Fl_Tree_Prefs &prefs,
 265:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   		    const char *new_label);
 266:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *add(const Fl_Tree_Prefs &prefs,
 267:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   		    char **arr,
 268:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** 		    Fl_Tree_Item *newitem);
 269:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *add(const Fl_Tree_Prefs &prefs,
 270:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   		    char **arr);
 271:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #if FLTK_ABI_VERSION >= 10303
 272:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *replace(Fl_Tree_Item *new_item);
 273:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *replace_child(Fl_Tree_Item *olditem, Fl_Tree_Item *newitem);
 274:fltk-1.3.4-1/FL/Fl_Tree_Item.H **** #endif
 275:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *insert(const Fl_Tree_Prefs &prefs, const char *new_label, int pos=0);
 276:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *insert_above(const Fl_Tree_Prefs &prefs, const char *new_label);
 277:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item* deparent(int index);
 278:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int reparent(Fl_Tree_Item *newchild, int index);
 279:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int move(int to, int from);
 280:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int move(Fl_Tree_Item *item, int op=0, int pos=0);
 281:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int move_above(Fl_Tree_Item *item);
 282:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int move_below(Fl_Tree_Item *item);
 283:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int move_into(Fl_Tree_Item *item, int pos=0);
 284:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   int depth() const;
 285:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *prev();
 286:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *next();
 287:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *next_sibling();
 288:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *prev_sibling();
 289:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void update_prev_next(int index);
 290:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *next_displayed(Fl_Tree_Prefs &prefs);	// deprecated
 291:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *prev_displayed(Fl_Tree_Prefs &prefs);	// deprecated
 292:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *next_visible(Fl_Tree_Prefs &prefs);
 293:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *prev_visible(Fl_Tree_Prefs &prefs);
 294:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   
 295:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return the parent for this item. Returns NULL if we are the root.
 296:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   Fl_Tree_Item *parent() {
 297:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_parent);
 298:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 299:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Return the const parent for this item. Returns NULL if we are the root.
 300:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   const Fl_Tree_Item *parent() const {
 301:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     return(_parent);
 302:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   }
 303:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Set the parent for this item.
 304:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   /// Should only be used by Fl_Tree's internals.
 305:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   ///
 306:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****   void parent(Fl_Tree_Item *val) {
 307:fltk-1.3.4-1/FL/Fl_Tree_Item.H ****     _parent = val;
 1356              		.loc 3 307 0
 1357 0088 4C896A78 		movq	%r13, 120(%rdx)
 1358              	.LVL129:
 1359              	.LBE47:
 1360              	.LBE46:
 1361              		.loc 1 303 0
 1362 008c 488B13   		movq	(%rbx), %rdx
 1363              	.LVL130:
 1364 008f 488B3CC2 		movq	(%rdx,%rax,8), %rdi
 1365 0093 E8000000 		call	_ZN12Fl_Tree_Item16update_prev_nextEi
 1365      00
 1366              	.LVL131:
 1367              		.loc 1 305 0
 1368 0098 4883C408 		addq	$8, %rsp
 1369              		.cfi_def_cfa_offset 40
 1370              		.loc 1 304 0
 1371 009c 31C0     		xorl	%eax, %eax
 1372              		.loc 1 305 0
 1373 009e 5B       		popq	%rbx
 1374              		.cfi_restore 3
 1375              		.cfi_def_cfa_offset 32
 1376              	.LVL132:
 1377 009f 5D       		popq	%rbp
 1378              		.cfi_restore 6
 1379              		.cfi_def_cfa_offset 24
 1380              	.LVL133:
 1381 00a0 415C     		popq	%r12
 1382              		.cfi_restore 12
 1383              		.cfi_def_cfa_offset 16
 1384              	.LVL134:
 1385 00a2 415D     		popq	%r13
 1386              		.cfi_restore 13
 1387              		.cfi_def_cfa_offset 8
 1388              	.LVL135:
 1389              	.L118:
 1390 00a4 F3C3     		rep ret
 1391              	.LVL136:
 1392              	.L114:
 1393 00a6 F3C3     		rep ret
 1394              		.cfi_endproc
 1395              	.LFE587:
 1397              		.section	.text.unlikely._ZN18Fl_Tree_Item_Array8reparentEP12Fl_Tree_ItemS1_i
 1398              	.LCOLDE12:
 1399              		.section	.text._ZN18Fl_Tree_Item_Array8reparentEP12Fl_Tree_ItemS1_i
 1400              	.LHOTE12:
 1401              		.text
 1402              	.Letext0:
 1403              		.section	.text.unlikely._ZN18Fl_Tree_Item_ArrayC2Ei
 1404              	.Letext_cold0:
 1405              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1406              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1407              		.file 6 "/usr/include/libio.h"
 1408              		.file 7 "fltk-1.3.4-1/FL/Enumerations.H"
 1409              		.file 8 "fltk-1.3.4-1/FL/Fl_Image.H"
 1410              		.file 9 "fltk-1.3.4-1/FL/Fl_Tree_Item_Array.H"
 1411              		.file 10 "fltk-1.3.4-1/FL/Fl_Device.H"
 1412              		.file 11 "fltk-1.3.4-1/FL/Fl_Tree_Prefs.H"
 1413              		.file 12 "/usr/include/stdio.h"
 1414              		.file 13 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Tree_Item_Array.cxx
     /tmp/ccJZ5t69.s:16     .text._ZN18Fl_Tree_Item_ArrayC2Ei:0000000000000000 _ZN18Fl_Tree_Item_ArrayC2Ei
     /tmp/ccJZ5t69.s:16     .text._ZN18Fl_Tree_Item_ArrayC2Ei:0000000000000000 _ZN18Fl_Tree_Item_ArrayC1Ei
     /tmp/ccJZ5t69.s:51     .text._ZN18Fl_Tree_Item_ArrayC2EPKS_:0000000000000000 _ZN18Fl_Tree_Item_ArrayC2EPKS_
     /tmp/ccJZ5t69.s:51     .text._ZN18Fl_Tree_Item_ArrayC2EPKS_:0000000000000000 _ZN18Fl_Tree_Item_ArrayC1EPKS_
     /tmp/ccJZ5t69.s:168    .text._ZN18Fl_Tree_Item_Array5clearEv:0000000000000000 _ZN18Fl_Tree_Item_Array5clearEv
     /tmp/ccJZ5t69.s:274    .text._ZN18Fl_Tree_Item_ArrayD2Ev:0000000000000000 _ZN18Fl_Tree_Item_ArrayD2Ev
     /tmp/ccJZ5t69.s:274    .text._ZN18Fl_Tree_Item_ArrayD2Ev:0000000000000000 _ZN18Fl_Tree_Item_ArrayD1Ev
     /tmp/ccJZ5t69.s:302    .text._ZN18Fl_Tree_Item_Array7enlargeEi:0000000000000000 _ZN18Fl_Tree_Item_Array7enlargeEi
     /tmp/ccJZ5t69.s:420    .text._ZN18Fl_Tree_Item_Array6insertEiP12Fl_Tree_Item:0000000000000000 _ZN18Fl_Tree_Item_Array6insertEiP12Fl_Tree_Item
     /tmp/ccJZ5t69.s:540    .text._ZN18Fl_Tree_Item_Array3addEP12Fl_Tree_Item:0000000000000000 _ZN18Fl_Tree_Item_Array3addEP12Fl_Tree_Item
     /tmp/ccJZ5t69.s:568    .text._ZN18Fl_Tree_Item_Array7replaceEiP12Fl_Tree_Item:0000000000000000 _ZN18Fl_Tree_Item_Array7replaceEiP12Fl_Tree_Item
     /tmp/ccJZ5t69.s:658    .text._ZN18Fl_Tree_Item_Array6removeEi:0000000000000000 _ZN18Fl_Tree_Item_Array6removeEi
     /tmp/ccJZ5t69.s:831    .text._ZN18Fl_Tree_Item_Array6removeEP12Fl_Tree_Item:0000000000000000 _ZN18Fl_Tree_Item_Array6removeEP12Fl_Tree_Item
     /tmp/ccJZ5t69.s:915    .text._ZN18Fl_Tree_Item_Array4moveEii:0000000000000000 _ZN18Fl_Tree_Item_Array4moveEii
     /tmp/ccJZ5t69.s:1116   .text._ZN18Fl_Tree_Item_Array8deparentEi:0000000000000000 _ZN18Fl_Tree_Item_Array8deparentEi
     /tmp/ccJZ5t69.s:1268   .text._ZN18Fl_Tree_Item_Array8reparentEP12Fl_Tree_ItemS1_i:0000000000000000 _ZN18Fl_Tree_Item_Array8reparentEP12Fl_Tree_ItemS1_i
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
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
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
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.00137ad0275e3bca492dca30adbe2e71
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b

UNDEFINED SYMBOLS
malloc
_Znwm
_ZN12Fl_Tree_ItemC1EPKS_
_ZN12Fl_Tree_Item16update_prev_nextEi
_ZN12Fl_Tree_ItemD1Ev
_ZdlPv
free
memmove
_ZN12Fl_Tree_Item12prev_siblingEv
_ZN12Fl_Tree_Item12next_siblingEv
