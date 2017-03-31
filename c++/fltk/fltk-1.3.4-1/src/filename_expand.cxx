   1              		.file	"filename_expand.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.rodata.str1.1,"aMS",@progbits,1
   5              	.LC0:
   6 0000 484F4D45 		.string	"HOME"
   6      00
   7              		.section	.text.unlikely._Z18fl_filename_expandPciPKc,"ax",@progbits
   8              	.LCOLDB1:
   9              		.section	.text._Z18fl_filename_expandPciPKc,"ax",@progbits
  10              	.LHOTB1:
  11              		.p2align 4,,15
  12              		.section	.text.unlikely._Z18fl_filename_expandPciPKc
  13              	.Ltext_cold0:
  14              		.section	.text._Z18fl_filename_expandPciPKc
  15              		.globl	_Z18fl_filename_expandPciPKc
  17              	_Z18fl_filename_expandPciPKc:
  18              	.LFB113:
  19              		.file 1 "fltk-1.3.4-1/src/filename_expand.cxx"
   1:fltk-1.3.4-1/src/filename_expand.cxx **** ...
  20              		.loc 1 63 0
  21              		.cfi_startproc
  22              	.LVL0:
  23 0000 4157     		pushq	%r15
  24              		.cfi_def_cfa_offset 16
  25              		.cfi_offset 15, -16
  26 0002 4156     		pushq	%r14
  27              		.cfi_def_cfa_offset 24
  28              		.cfi_offset 14, -24
  29              		.loc 1 65 0
  30 0004 4863C6   		movslq	%esi, %rax
  31              		.loc 1 63 0
  32 0007 4155     		pushq	%r13
  33              		.cfi_def_cfa_offset 32
  34              		.cfi_offset 13, -32
  35 0009 4154     		pushq	%r12
  36              		.cfi_def_cfa_offset 40
  37              		.cfi_offset 12, -40
  38              		.loc 1 65 0
  39 000b 4989C7   		movq	%rax, %r15
  40              		.loc 1 63 0
  41 000e 55       		pushq	%rbp
  42              		.cfi_def_cfa_offset 48
  43              		.cfi_offset 6, -48
  44 000f 53       		pushq	%rbx
  45              		.cfi_def_cfa_offset 56
  46              		.cfi_offset 3, -56
  47 0010 4889D3   		movq	%rdx, %rbx
  48 0013 4883EC28 		subq	$40, %rsp
  49              		.cfi_def_cfa_offset 96
  50              		.loc 1 63 0
  51 0017 48897C24 		movq	%rdi, 24(%rsp)
  51      18
  52              		.loc 1 65 0
  53 001c 4889C7   		movq	%rax, %rdi
  54              	.LVL1:
  55 001f 48894424 		movq	%rax, 8(%rsp)
  55      08
  56 0024 E8000000 		call	_Znam
  56      00
  57              	.LVL2:
  58              		.loc 1 66 0
  59 0029 4C89FA   		movq	%r15, %rdx
  60 002c 4889DE   		movq	%rbx, %rsi
  61 002f 4989C7   		movq	%rax, %r15
  62              	.LVL3:
  63 0032 4889C7   		movq	%rax, %rdi
  64              		.loc 1 65 0
  65 0035 48894424 		movq	%rax, 16(%rsp)
  65      10
  66              	.LVL4:
  67              		.loc 1 66 0
  68 003a E8000000 		call	fl_strlcpy
  68      00
  69              	.LVL5:
  70              		.loc 1 68 0
  71 003f 4C89FF   		movq	%r15, %rdi
  72 0042 E8000000 		call	strlen
  72      00
  73              	.LVL6:
  74 0047 4D8D3407 		leaq	(%r15,%rax), %r14
  75              	.LVL7:
  76              	.LBB15:
  77              		.loc 1 72 0
  78 004b 4D39F7   		cmpq	%r14, %r15
  79 004e 0F837501 		jnb	.L20
  79      0000
  80 0054 4D89FC   		movq	%r15, %r12
  81 0057 C7442404 		movl	$0, 4(%rsp)
  81      00000000 
  82              	.LVL8:
  83 005f 90       		.p2align 4,,10
  84              		.p2align 3
  85              	.L4:
  86              	.LBB16:
  87              		.loc 1 73 0 discriminator 4
  88 0060 4D39F7   		cmpq	%r14, %r15
  89 0063 410FB607 		movzbl	(%r15), %eax
  90 0067 4C89FB   		movq	%r15, %rbx
  91 006a 731A     		jnb	.L6
  92              		.loc 1 73 0 is_stmt 0
  93 006c 3C2F     		cmpb	$47, %al
  94 006e 750D     		jne	.L9
  95 0070 E94B0100 		jmp	.L15
  95      00
  96              	.LVL9:
  97              		.p2align 4,,10
  98 0075 0F1F00   		.p2align 3
  99              	.L10:
 100              		.loc 1 73 0 discriminator 2
 101 0078 803B2F   		cmpb	$47, (%rbx)
 102 007b 7409     		je	.L6
 103              	.L9:
 104              		.loc 1 73 0 discriminator 3
 105 007d 4883C301 		addq	$1, %rbx
 106              	.LVL10:
 107 0081 4C39F3   		cmpq	%r14, %rbx
 108 0084 75F2     		jne	.L10
 109              	.L6:
 110              	.LVL11:
 111              	.LBB17:
 112              		.loc 1 75 0 is_stmt 1
 113 0086 3C24     		cmpb	$36, %al
 114 0088 0F84DA00 		je	.L11
 114      0000
 115 008e 3C7E     		cmpb	$126, %al
 116 0090 0F852A01 		jne	.L15
 116      0000
 117              	.LBB18:
 118              	.LBB19:
 119              		.loc 1 77 0
 120 0096 498D7F01 		leaq	1(%r15), %rdi
 121 009a 4839DF   		cmpq	%rbx, %rdi
 122 009d 0F82FD00 		jb	.L13
 122      0000
 123              		.loc 1 78 0
 124 00a3 BF000000 		movl	$.LC0, %edi
 124      00
 125 00a8 E8000000 		call	fl_getenv
 125      00
 126              	.LVL12:
 127 00ad 4889C5   		movq	%rax, %rbp
 128              	.LVL13:
 129              	.L14:
 130              	.LBE19:
 131              	.LBE18:
 132              	.LBE17:
 133              	.LBB25:
 134              		.loc 1 93 0
 135 00b0 4885ED   		testq	%rbp, %rbp
 136 00b3 0F840701 		je	.L15
 136      0000
 137              	.LBB26:
 138 00b9 807D002F 		cmpb	$47, 0(%rbp)
 139              		.loc 1 100 0
 140 00bd 4889EF   		movq	%rbp, %rdi
 141 00c0 4D0F44E7 		cmove	%r15, %r12
 142              	.LVL14:
 143 00c4 E8000000 		call	strlen
 143      00
 144              	.LVL15:
 145 00c9 4C63E8   		movslq	%eax, %r13
 146 00cc 42807C2D 		cmpb	$47, -1(%rbp,%r13)
 146      FF2F
 147 00d2 4C89EE   		movq	%r13, %rsi
 148 00d5 0F84AD00 		je	.L33
 148      0000
 149              	.L17:
 150              		.loc 1 101 0
 151 00db 498D5601 		leaq	1(%r14), %rdx
 152 00df 488B4424 		movq	8(%rsp), %rax
 152      08
 153              	.LVL16:
 154 00e4 4829DA   		subq	%rbx, %rdx
 155 00e7 4801D6   		addq	%rdx, %rsi
 156 00ea 4839C6   		cmpq	%rax, %rsi
 157 00ed 7C0D     		jl	.L18
 158              		.loc 1 101 0 is_stmt 0 discriminator 1
 159 00ef 4829F0   		subq	%rsi, %rax
 160 00f2 4901C6   		addq	%rax, %r14
 161              	.LVL17:
 162 00f5 498D5601 		leaq	1(%r14), %rdx
 163 00f9 4829DA   		subq	%rbx, %rdx
 164              	.L18:
 165              	.LVL18:
 166              	.LBB27:
 167              	.LBB28:
 168              		.file 2 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 169              		.loc 2 59 0 is_stmt 1
 170 00fc 4B8D3C2F 		leaq	(%r15,%r13), %rdi
 171              	.LVL19:
 172 0100 4889DE   		movq	%rbx, %rsi
 173 0103 E8000000 		call	memmove
 173      00
 174              	.LVL20:
 175              	.LBE28:
 176              	.LBE27:
 177              		.loc 1 103 0
 178 0108 4C89F1   		movq	%r14, %rcx
 179              	.LBB29:
 180              	.LBB30:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 181              		.loc 2 53 0
 182 010b 4C89EA   		movq	%r13, %rdx
 183 010e 4889EE   		movq	%rbp, %rsi
 184              	.LBE30:
 185              	.LBE29:
 186              		.loc 1 103 0
 187 0111 4829D9   		subq	%rbx, %rcx
 188              	.LBB33:
 189              	.LBB31:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 190              		.loc 2 53 0
 191 0114 4C89FF   		movq	%r15, %rdi
 192              	.LBE31:
 193              	.LBE33:
 194              		.loc 1 103 0
 195 0117 4C01E9   		addq	%r13, %rcx
 196 011a 4D8D340F 		leaq	(%r15,%rcx), %r14
 197              	.LVL21:
 198              		.loc 1 104 0
 199 011e 41C60600 		movb	$0, (%r14)
 200              	.LVL22:
 201              	.LBB34:
 202              	.LBB32:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 203              		.loc 2 53 0
 204 0122 E8000000 		call	memcpy
 204      00
 205              	.LVL23:
 206              	.LBE32:
 207              	.LBE34:
 208              		.loc 1 106 0
 209 0127 83442404 		addl	$1, 4(%rsp)
 209      01
 210              	.LVL24:
 211              	.L19:
 212              	.LBE26:
 213              	.LBE25:
 214              	.LBE16:
 215              		.loc 1 72 0 discriminator 1
 216 012c 4D39F7   		cmpq	%r14, %r15
 217 012f 0F822BFF 		jb	.L4
 217      FFFF
 218              	.LVL25:
 219              	.L2:
 220              	.LBE15:
 221              		.loc 1 115 0
 222 0135 488B5424 		movq	8(%rsp), %rdx
 222      08
 223 013a 488B7C24 		movq	24(%rsp), %rdi
 223      18
 224 013f 4C89E6   		movq	%r12, %rsi
 225 0142 E8000000 		call	fl_strlcpy
 225      00
 226              	.LVL26:
 227              		.loc 1 117 0
 228 0147 488B7C24 		movq	16(%rsp), %rdi
 228      10
 229 014c E8000000 		call	_ZdaPv
 229      00
 230              	.LVL27:
 231              		.loc 1 120 0
 232 0151 8B442404 		movl	4(%rsp), %eax
 233 0155 4883C428 		addq	$40, %rsp
 234              		.cfi_remember_state
 235              		.cfi_def_cfa_offset 56
 236 0159 5B       		popq	%rbx
 237              		.cfi_def_cfa_offset 48
 238 015a 5D       		popq	%rbp
 239              		.cfi_def_cfa_offset 40
 240 015b 415C     		popq	%r12
 241              		.cfi_def_cfa_offset 32
 242 015d 415D     		popq	%r13
 243              		.cfi_def_cfa_offset 24
 244 015f 415E     		popq	%r14
 245              		.cfi_def_cfa_offset 16
 246              	.LVL28:
 247 0161 415F     		popq	%r15
 248              		.cfi_def_cfa_offset 8
 249 0163 C3       		ret
 250              	.LVL29:
 251              		.p2align 4,,10
 252 0164 0F1F4000 		.p2align 3
 253              	.L11:
 254              		.cfi_restore_state
 255              	.LBB41:
 256              	.LBB40:
 257              	.LBB36:
 258              	.LBB23:
 259              	.LBB21:
 260              		.loc 1 90 0
 261 0168 440FB62B 		movzbl	(%rbx), %r13d
 262              	.LVL30:
 263 016c 498D7F01 		leaq	1(%r15), %rdi
 264 0170 C60300   		movb	$0, (%rbx)
 265 0173 E8000000 		call	fl_getenv
 265      00
 266              	.LVL31:
 267 0178 4889C5   		movq	%rax, %rbp
 268              	.LVL32:
 269 017b 44882B   		movb	%r13b, (%rbx)
 270              	.LBE21:
 271              		.loc 1 91 0
 272 017e E92DFFFF 		jmp	.L14
 272      FF
 273              	.LVL33:
 274              		.p2align 4,,10
 275 0183 0F1F4400 		.p2align 3
 275      00
 276              	.L33:
 277              	.LBE23:
 278              	.LBE36:
 279              	.LBB37:
 280              	.LBB35:
 281              		.loc 1 100 0 discriminator 1
 282 0188 83E801   		subl	$1, %eax
 283              	.LVL34:
 284 018b 4863F0   		movslq	%eax, %rsi
 285 018e 4989F5   		movq	%rsi, %r13
 286 0191 E945FFFF 		jmp	.L17
 286      FF
 287              	.LVL35:
 288 0196 662E0F1F 		.p2align 4,,10
 288      84000000 
 288      0000
 289              		.p2align 3
 290              	.L13:
 291              	.LBE35:
 292              	.LBE37:
 293              	.LBB38:
 294              	.LBB24:
 295              	.LBB22:
 296              	.LBB20:
 297              		.loc 1 82 0
 298 01a0 0FB62B   		movzbl	(%rbx), %ebp
 299              	.LVL36:
 300 01a3 C60300   		movb	$0, (%rbx)
 301              		.loc 1 83 0
 302 01a6 E8000000 		call	getpwnam
 302      00
 303              	.LVL37:
 304              		.loc 1 85 0
 305 01ab 4885C0   		testq	%rax, %rax
 306              		.loc 1 84 0
 307 01ae 40882B   		movb	%bpl, (%rbx)
 308              		.loc 1 85 0
 309 01b1 740D     		je	.L15
 310              		.loc 1 85 0 is_stmt 0 discriminator 1
 311 01b3 488B6820 		movq	32(%rax), %rbp
 312              	.LVL38:
 313 01b7 E9F4FEFF 		jmp	.L14
 313      FF
 314              	.LVL39:
 315 01bc 0F1F4000 		.p2align 4,,10
 316              		.p2align 3
 317              	.L15:
 318              	.LBE20:
 319              	.LBE22:
 320              	.LBE24:
 321              	.LBE38:
 322              	.LBB39:
 323              		.loc 1 108 0 is_stmt 1
 324 01c0 4C8D7B01 		leaq	1(%rbx), %r15
 325              	.LVL40:
 326 01c4 E963FFFF 		jmp	.L19
 326      FF
 327              	.LVL41:
 328              	.L20:
 329              	.LBE39:
 330              	.LBE40:
 331              		.loc 1 72 0
 332 01c9 4C8B6424 		movq	16(%rsp), %r12
 332      10
 333              	.LBE41:
 334              		.loc 1 70 0
 335 01ce C7442404 		movl	$0, 4(%rsp)
 335      00000000 
 336 01d6 E95AFFFF 		jmp	.L2
 336      FF
 337              		.cfi_endproc
 338              	.LFE113:
 340              		.section	.text.unlikely._Z18fl_filename_expandPciPKc
 341              	.LCOLDE1:
 342              		.section	.text._Z18fl_filename_expandPciPKc
 343              	.LHOTE1:
 344              		.text
 345              	.Letext0:
 346              		.section	.text.unlikely._Z18fl_filename_expandPciPKc
 347              	.Letext_cold0:
 348              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
 349              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 350              		.file 5 "/usr/include/libio.h"
 351              		.file 6 "/usr/include/pwd.h"
 352              		.file 7 "/usr/include/stdio.h"
 353              		.file 8 "fltk-1.3.4-1/FL/fl_utf8.h"
 354              		.file 9 "/usr/include/string.h"
 355              		.file 10 "fltk-1.3.4-1/src/flstring.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 filename_expand.cxx
     /tmp/ccRsN8QQ.s:17     .text._Z18fl_filename_expandPciPKc:0000000000000000 _Z18fl_filename_expandPciPKc
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
                           .group:0000000000000000 wm4.unistd.h.23.a608ae63b1bee638e80d9e2a8598bd8e
                           .group:0000000000000000 wm4.posix_opt.h.20.8587404e00639bdcc5f6a74591f95259
                           .group:0000000000000000 wm4.environments.h.56.c5802092ccc191baeb41f8d355bb878f
                           .group:0000000000000000 wm4.unistd.h.213.4c582e35260d661b081322974b7c1e74
                           .group:0000000000000000 wm4.unistd.h.271.5bc8a6a5109e709e04c40b754b201552
                           .group:0000000000000000 wm4.confname.h.27.6b00117a32f457cc72e5ac810a9adade
                           .group:0000000000000000 wm4.unistd.h.1078.c7eeb0fd3115c9566fb6865aa19af17f
                           .group:0000000000000000 wm4.pwd.h.23.1002ff527d624da43129af4283a8ca6d
                           .group:0000000000000000 wm4.pwd.h.62.15b4690345af76aa1e5e248acb2bab73

UNDEFINED SYMBOLS
_Znam
fl_strlcpy
strlen
fl_getenv
memmove
memcpy
_ZdaPv
getpwnam
