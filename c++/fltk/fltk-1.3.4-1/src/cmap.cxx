   1              		.file	"cmap.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z10backgroundhhh,"ax",@progbits
   5              	.LCOLDB6:
   6              		.section	.text._Z10backgroundhhh,"ax",@progbits
   7              	.LHOTB6:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z10backgroundhhh
  10              	.Ltext_cold0:
  11              		.section	.text._Z10backgroundhhh
  12              		.globl	_Z10backgroundhhh
  14              	_Z10backgroundhhh:
  15              	.LFB33:
  16              		.file 1 "fltk-1.3.4-1/src/cmap.cxx"
   1:fltk-1.3.4-1/src/cmap.cxx **** ...
  17              		.loc 1 113 0
  18              		.cfi_startproc
  19              	.LVL0:
  20 0000 55       		pushq	%rbp
  21              		.cfi_def_cfa_offset 16
  22              		.cfi_offset 6, -16
  23 0001 53       		pushq	%rbx
  24              		.cfi_def_cfa_offset 24
  25              		.cfi_offset 3, -24
  26 0002 89F5     		movl	%esi, %ebp
  27 0004 89D3     		movl	%edx, %ebx
  28 0006 4883EC38 		subq	$56, %rsp
  29              		.cfi_def_cfa_offset 80
  30              		.loc 1 115 0
  31 000a 4084FF   		testb	%dil, %dil
  32 000d 7431     		je	.L6
  33              		.loc 1 115 0 is_stmt 0 discriminator 2
  34 000f 4080FFFF 		cmpb	$-1, %dil
  35 0013 0F848801 		je	.L7
  35      0000
  36 0019 660FEFC0 		pxor	%xmm0, %xmm0
  37 001d 400FB6FF 		movzbl	%dil, %edi
  38 0021 F20F1025 		movsd	.LC2(%rip), %xmm4
  38      00000000 
  39 0029 F20F2AC7 		cvtsi2sd	%edi, %xmm0
  40 002d F20F1164 		movsd	%xmm4, 8(%rsp)
  40      2408
  41 0033 F20F5EC4 		divsd	%xmm4, %xmm0
  42 0037 EB1D     		jmp	.L2
  43 0039 0F1F8000 		.p2align 4,,10
  43      000000
  44              		.p2align 3
  45              	.L6:
  46 0040 F20F102D 		movsd	.LC2(%rip), %xmm5
  46      00000000 
  47 0048 F20F1005 		movsd	.LC0(%rip), %xmm0
  47      00000000 
  48 0050 F20F116C 		movsd	%xmm5, 8(%rsp)
  48      2408
  49              	.LVL1:
  50              	.L2:
  51              		.loc 1 116 0 is_stmt 1
  52 0056 E8000000 		call	log
  52      00
  53              	.LVL2:
  54 005b F20F5E05 		divsd	.LC3(%rip), %xmm0
  54      00000000 
  55              		.loc 1 117 0
  56 0063 4084ED   		testb	%bpl, %bpl
  57              		.loc 1 116 0
  58 0066 F20F1144 		movsd	%xmm0, 24(%rsp)
  58      2418
  59              	.LVL3:
  60 006c F20F1005 		movsd	.LC0(%rip), %xmm0
  60      00000000 
  61              	.LVL4:
  62              		.loc 1 117 0
  63 0074 7420     		je	.L3
  64              		.loc 1 117 0 is_stmt 0 discriminator 2
  65 0076 4080FDFF 		cmpb	$-1, %bpl
  66 007a F20F1005 		movsd	.LC1(%rip), %xmm0
  66      00000000 
  67 0082 7412     		je	.L3
  68 0084 660FEFC0 		pxor	%xmm0, %xmm0
  69 0088 400FB6ED 		movzbl	%bpl, %ebp
  70 008c F20F2AC5 		cvtsi2sd	%ebp, %xmm0
  71 0090 F20F5E44 		divsd	8(%rsp), %xmm0
  71      2408
  72              	.L3:
  73              	.LVL5:
  74              		.loc 1 118 0 is_stmt 1
  75 0096 E8000000 		call	log
  75      00
  76              	.LVL6:
  77              		.loc 1 119 0
  78 009b 84DB     		testb	%bl, %bl
  79              		.loc 1 118 0
  80 009d F20F5E05 		divsd	.LC3(%rip), %xmm0
  80      00000000 
  81 00a5 F20F1144 		movsd	%xmm0, 32(%rsp)
  81      2420
  82              	.LVL7:
  83 00ab F20F1005 		movsd	.LC0(%rip), %xmm0
  83      00000000 
  84              	.LVL8:
  85              		.loc 1 119 0
  86 00b3 741E     		je	.L4
  87              		.loc 1 119 0 is_stmt 0 discriminator 2
  88 00b5 80FBFF   		cmpb	$-1, %bl
  89 00b8 F20F1005 		movsd	.LC1(%rip), %xmm0
  89      00000000 
  90 00c0 7411     		je	.L4
  91 00c2 660FEFC0 		pxor	%xmm0, %xmm0
  92 00c6 0FB6DB   		movzbl	%bl, %ebx
  93 00c9 F20F2AC3 		cvtsi2sd	%ebx, %xmm0
  94 00cd F20F5E44 		divsd	8(%rsp), %xmm0
  94      2408
  95              	.L4:
  96              	.LVL9:
  97              		.loc 1 120 0 is_stmt 1
  98 00d3 E8000000 		call	log
  98      00
  99              	.LVL10:
 100 00d8 BB000000 		movl	$_ZL4cmap+192, %ebx
 100      00
 101              	.LBB8:
 102              		.loc 1 121 0
 103 00dd 31ED     		xorl	%ebp, %ebp
 104              	.LBE8:
 105              		.loc 1 120 0
 106 00df F20F5E05 		divsd	.LC3(%rip), %xmm0
 106      00000000 
 107 00e7 F20F1144 		movsd	%xmm0, 40(%rsp)
 107      2428
 108              	.LVL11:
 109 00ed 0F1F00   		.p2align 4,,10
 110              		.p2align 3
 111              	.L5:
 112              	.LBB11:
 113              	.LBB9:
 114              		.loc 1 122 0 discriminator 2
 115 00f0 660FEFD2 		pxor	%xmm2, %xmm2
 116 00f4 4883C306 		addq	$6, %rbx
 117              		.loc 1 123 0 discriminator 2
 118 00f8 F20F104C 		movsd	24(%rsp), %xmm1
 118      2418
 119              		.loc 1 122 0 discriminator 2
 120 00fe F20F2AD5 		cvtsi2sd	%ebp, %xmm2
 121              	.LBE9:
 122              		.loc 1 121 0 discriminator 2
 123 0102 83C501   		addl	$1, %ebp
 124              	.LVL12:
 125              	.LBB10:
 126              		.loc 1 122 0 discriminator 2
 127 0105 F20F5E15 		divsd	.LC4(%rip), %xmm2
 127      00000000 
 128              	.LVL13:
 129              		.loc 1 123 0 discriminator 2
 130 010d 660F28C2 		movapd	%xmm2, %xmm0
 131 0111 F20F1154 		movsd	%xmm2, 16(%rsp)
 131      2410
 132 0117 E8000000 		call	pow
 132      00
 133              	.LVL14:
 134 011c F20F5944 		mulsd	8(%rsp), %xmm0
 134      2408
 135              		.loc 1 124 0 discriminator 2
 136 0122 F20F1054 		movsd	16(%rsp), %xmm2
 136      2410
 137 0128 F20F104C 		movsd	32(%rsp), %xmm1
 137      2420
 138              		.loc 1 123 0 discriminator 2
 139 012e F20F5805 		addsd	.LC5(%rip), %xmm0
 139      00000000 
 140 0136 F20F2CC0 		cvttsd2si	%xmm0, %eax
 141              		.loc 1 124 0 discriminator 2
 142 013a 660F28C2 		movapd	%xmm2, %xmm0
 143              		.loc 1 123 0 discriminator 2
 144 013e 0FB6C0   		movzbl	%al, %eax
 145 0141 668943FA 		movw	%ax, -6(%rbx)
 146              		.loc 1 124 0 discriminator 2
 147 0145 E8000000 		call	pow
 147      00
 148              	.LVL15:
 149 014a F20F5944 		mulsd	8(%rsp), %xmm0
 149      2408
 150              		.loc 1 125 0 discriminator 2
 151 0150 F20F1054 		movsd	16(%rsp), %xmm2
 151      2410
 152 0156 F20F104C 		movsd	40(%rsp), %xmm1
 152      2428
 153              		.loc 1 124 0 discriminator 2
 154 015c F20F5805 		addsd	.LC5(%rip), %xmm0
 154      00000000 
 155 0164 F20F2CC0 		cvttsd2si	%xmm0, %eax
 156              		.loc 1 125 0 discriminator 2
 157 0168 660F28C2 		movapd	%xmm2, %xmm0
 158              		.loc 1 124 0 discriminator 2
 159 016c 0FB6C0   		movzbl	%al, %eax
 160 016f 668943FC 		movw	%ax, -4(%rbx)
 161              		.loc 1 125 0 discriminator 2
 162 0173 E8000000 		call	pow
 162      00
 163              	.LVL16:
 164 0178 F20F5944 		mulsd	8(%rsp), %xmm0
 164      2408
 165 017e F20F5805 		addsd	.LC5(%rip), %xmm0
 165      00000000 
 166 0186 F20F2CC0 		cvttsd2si	%xmm0, %eax
 167 018a 0FB6C0   		movzbl	%al, %eax
 168 018d 668943FE 		movw	%ax, -2(%rbx)
 169              	.LBE10:
 170              		.loc 1 121 0 discriminator 2
 171 0191 83FD18   		cmpl	$24, %ebp
 172 0194 0F8556FF 		jne	.L5
 172      FFFF
 173              	.LBE11:
 174              		.loc 1 127 0
 175 019a 4883C438 		addq	$56, %rsp
 176              		.cfi_remember_state
 177              		.cfi_def_cfa_offset 24
 178 019e 5B       		popq	%rbx
 179              		.cfi_def_cfa_offset 16
 180 019f 5D       		popq	%rbp
 181              		.cfi_def_cfa_offset 8
 182              	.LVL17:
 183 01a0 C3       		ret
 184              	.LVL18:
 185              	.L7:
 186              		.cfi_restore_state
 187 01a1 F20F1035 		movsd	.LC2(%rip), %xmm6
 187      00000000 
 188 01a9 F20F1005 		movsd	.LC1(%rip), %xmm0
 188      00000000 
 189 01b1 F20F1174 		movsd	%xmm6, 8(%rsp)
 189      2408
 190 01b7 E99AFEFF 		jmp	.L2
 190      FF
 191              		.cfi_endproc
 192              	.LFE33:
 194              		.section	.text.unlikely._Z10backgroundhhh
 195              	.LCOLDE6:
 196              		.section	.text._Z10backgroundhhh
 197              	.LHOTE6:
 198              		.section	.rodata.str1.1,"aMS",@progbits,1
 199              	.LC7:
 200 0000 0A00     		.string	"\n"
 201              	.LC8:
 202 0002 2C0A00   		.string	",\n"
 203              	.LC9:
 204 0005 09307825 		.string	"\t0x%02x%02x%02x00"
 204      30327825 
 204      30327825 
 204      30327830 
 204      3000
 205              		.section	.text.unlikely.main,"ax",@progbits
 206              	.LCOLDB10:
 207              		.section	.text.startup.main,"ax",@progbits
 208              	.LHOTB10:
 209              		.p2align 4,,15
 210              		.globl	main
 212              	main:
 213              	.LFB34:
 214              		.loc 1 129 0
 215              		.cfi_startproc
 216 0000 4154     		pushq	%r12
 217              		.cfi_def_cfa_offset 16
 218              		.cfi_offset 12, -16
 219 0002 55       		pushq	%rbp
 220              		.cfi_def_cfa_offset 24
 221              		.cfi_offset 6, -24
 222              		.loc 1 145 0
 223 0003 BAC00000 		movl	$192, %edx
 223      00
 224              		.loc 1 129 0
 225 0008 53       		pushq	%rbx
 226              		.cfi_def_cfa_offset 32
 227              		.cfi_offset 3, -32
 228              		.loc 1 145 0
 229 0009 BEC00000 		movl	$192, %esi
 229      00
 230 000e BFC00000 		movl	$192, %edi
 230      00
 231              		.loc 1 149 0
 232 0013 31ED     		xorl	%ebp, %ebp
 233              		.loc 1 152 0
 234 0015 41BC3800 		movl	$56, %r12d
 234      0000
 235              		.loc 1 145 0
 236 001b E8000000 		call	_Z10backgroundhhh
 236      00
 237              	.LVL19:
 238              		.loc 1 148 0
 239 0020 B8550000 		movl	$85, %eax
 239      00
 240 0025 BA550000 		movl	$85, %edx
 240      00
 241 002a B9550000 		movl	$85, %ecx
 241      00
 242              		.loc 1 149 0
 243 002f BEAA0000 		movl	$170, %esi
 243      00
 244 0034 BFAA0000 		movl	$170, %edi
 244      00
 245 0039 41B8AA00 		movl	$170, %r8d
 245      0000
 246              		.loc 1 148 0
 247 003f 66890500 		movw	%ax, _ZL4cmap+238(%rip)
 247      000000
 248 0046 66891500 		movw	%dx, _ZL4cmap+236(%rip)
 248      000000
 249              		.loc 1 157 0
 250 004d 41BA9324 		movl	$-1840700269, %r10d
 250      4992
 251              		.loc 1 148 0
 252 0053 66890D00 		movw	%cx, _ZL4cmap+234(%rip)
 252      000000
 253              		.loc 1 149 0
 254 005a 66893500 		movw	%si, _ZL4cmap+286(%rip)
 254      000000
 255 0061 66893D00 		movw	%di, _ZL4cmap+284(%rip)
 255      000000
 256 0068 66448905 		movw	%r8w, _ZL4cmap+282(%rip)
 256      00000000 
 257              	.LVL20:
 258              		.p2align 4,,10
 259              		.p2align 3
 260              	.L19:
 261 0070 89E8     		movl	%ebp, %eax
 262              		.loc 1 152 0
 263 0072 4489E3   		movl	%r12d, %ebx
 264 0075 4531DB   		xorl	%r11d, %r11d
 265 0078 C1E802   		shrl	$2, %eax
 266 007b 4189C1   		movl	%eax, %r9d
 267              	.LVL21:
 268 007e 6690     		.p2align 4,,10
 269              		.p2align 3
 270              	.L17:
 271 0080 4489D8   		movl	%r11d, %eax
 272 0083 89DE     		movl	%ebx, %esi
 273 0085 31C9     		xorl	%ecx, %ecx
 274 0087 C1E802   		shrl	$2, %eax
 275 008a 4189C0   		movl	%eax, %r8d
 276              	.LVL22:
 277 008d 0F1F00   		.p2align 4,,10
 278              		.p2align 3
 279              	.L16:
 280              		.loc 1 156 0 discriminator 2
 281 0090 4863C6   		movslq	%esi, %rax
 282              		.loc 1 159 0 discriminator 2
 283 0093 83C601   		addl	$1, %esi
 284              	.LVL23:
 285              		.loc 1 156 0 discriminator 2
 286 0096 488D0440 		leaq	(%rax,%rax,2), %rax
 287 009a 4801C0   		addq	%rax, %rax
 288 009d 488DB800 		leaq	_ZL4cmap(%rax), %rdi
 288      000000
 289 00a4 66448980 		movw	%r8w, _ZL4cmap(%rax)
 289      00000000 
 290              		.loc 1 157 0 discriminator 2
 291 00ac 89C8     		movl	%ecx, %eax
 292 00ae 41F7EA   		imull	%r10d
 293 00b1 89C8     		movl	%ecx, %eax
 294 00b3 C1F81F   		sarl	$31, %eax
 295              		.loc 1 158 0 discriminator 2
 296 00b6 6644894F 		movw	%r9w, 4(%rdi)
 296      04
 297              		.loc 1 157 0 discriminator 2
 298 00bb 01CA     		addl	%ecx, %edx
 299 00bd 81C1FF00 		addl	$255, %ecx
 299      0000
 300 00c3 C1FA02   		sarl	$2, %edx
 301 00c6 29C2     		subl	%eax, %edx
 302              		.loc 1 155 0 discriminator 2
 303 00c8 81F9F807 		cmpl	$2040, %ecx
 303      0000
 304              		.loc 1 157 0 discriminator 2
 305 00ce 66895702 		movw	%dx, 2(%rdi)
 306              		.loc 1 155 0 discriminator 2
 307 00d2 75BC     		jne	.L16
 308 00d4 4181C3FF 		addl	$255, %r11d
 308      000000
 309 00db 83C308   		addl	$8, %ebx
 310              	.LVL24:
 311              		.loc 1 154 0 discriminator 2
 312 00de 4181FBFB 		cmpl	$1275, %r11d
 312      040000
 313 00e5 7599     		jne	.L17
 314 00e7 81C5FF00 		addl	$255, %ebp
 314      0000
 315 00ed 4183C428 		addl	$40, %r12d
 316              	.LVL25:
 317              		.loc 1 153 0 discriminator 2
 318 00f1 81FDFB04 		cmpl	$1275, %ebp
 318      0000
 319 00f7 0F8573FF 		jne	.L19
 319      FFFF
 320              	.LVL26:
 321              	.LBB12:
 322              	.LBB13:
 323              		.file 2 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
  99:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 100:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 101:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 102:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** printf (const char *__restrict __fmt, ...)
 103:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 104:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __printf_chk (__USE_FORTIFY_LEVEL - 1, __fmt, __va_arg_pack ());
 324              		.loc 2 104 0
 325 00fd 0FBF0D00 		movswl	_ZL4cmap+2(%rip), %ecx
 325      000000
 326 0104 0FBF1500 		movswl	_ZL4cmap(%rip), %edx
 326      000000
 327 010b BE000000 		movl	$.LC9, %esi
 327      00
 328              	.LVL27:
 329 0110 440FBF05 		movswl	_ZL4cmap+4(%rip), %r8d
 329      00000000 
 330 0118 BF010000 		movl	$1, %edi
 330      00
 331 011d 31C0     		xorl	%eax, %eax
 332 011f BB000000 		movl	$_ZL4cmap+10, %ebx
 332      00
 333 0124 BD000000 		movl	$_ZL4cmap+1540, %ebp
 333      00
 334 0129 E8000000 		call	__printf_chk
 334      00
 335              	.LVL28:
 336 012e 6690     		.p2align 4,,10
 337              		.p2align 3
 338              	.L20:
 339              	.LBE13:
 340              	.LBE12:
 341              	.LBB15:
 342              	.LBB16:
 343 0130 BE000000 		movl	$.LC8, %esi
 343      00
 344 0135 BF010000 		movl	$1, %edi
 344      00
 345 013a 31C0     		xorl	%eax, %eax
 346 013c E8000000 		call	__printf_chk
 346      00
 347              	.LVL29:
 348              	.LBE16:
 349              	.LBE15:
 350              	.LBB17:
 351              	.LBB14:
 352 0141 0FBF4BFE 		movswl	-2(%rbx), %ecx
 353 0145 0FBF53FC 		movswl	-4(%rbx), %edx
 354 0149 31C0     		xorl	%eax, %eax
 355 014b 440FBF03 		movswl	(%rbx), %r8d
 356 014f BE000000 		movl	$.LC9, %esi
 356      00
 357 0154 BF010000 		movl	$1, %edi
 357      00
 358 0159 4883C306 		addq	$6, %rbx
 359 015d E8000000 		call	__printf_chk
 359      00
 360              	.LVL30:
 361              	.LBE14:
 362              	.LBE17:
 363              		.loc 1 164 0
 364 0162 4839DD   		cmpq	%rbx, %rbp
 365 0165 75C9     		jne	.L20
 366              	.LVL31:
 367              	.LBB18:
 368              	.LBB19:
 369              		.loc 2 104 0
 370 0167 BE000000 		movl	$.LC7, %esi
 370      00
 371 016c BF010000 		movl	$1, %edi
 371      00
 372 0171 31C0     		xorl	%eax, %eax
 373 0173 E8000000 		call	__printf_chk
 373      00
 374              	.LVL32:
 375              	.LBE19:
 376              	.LBE18:
 377              		.loc 1 168 0
 378 0178 5B       		popq	%rbx
 379              		.cfi_def_cfa_offset 24
 380 0179 31C0     		xorl	%eax, %eax
 381 017b 5D       		popq	%rbp
 382              		.cfi_def_cfa_offset 16
 383 017c 415C     		popq	%r12
 384              		.cfi_def_cfa_offset 8
 385 017e C3       		ret
 386              		.cfi_endproc
 387              	.LFE34:
 389              		.section	.text.unlikely.main
 390              	.LCOLDE10:
 391              		.section	.text.startup.main
 392              	.LHOTE10:
 393              		.section	.data._ZL4cmap,"aw",@progbits
 394              		.align 32
 397              	_ZL4cmap:
 494 00c0 00000000 		.zero	1344
 494      00000000 
 494      00000000 
 494      00000000 
 494      00000000 
 495              		.section	.rodata.cst8,"aM",@progbits,8
 496              		.align 8
 497              	.LC0:
 498 0000 10101010 		.long	269488144
 499 0004 1010703F 		.long	1064308752
 500              		.align 8
 501              	.LC1:
 502 0008 E0DFDFDF 		.long	3755991008
 503 000c DFDFEF3F 		.long	1072685023
 504              		.align 8
 505              	.LC2:
 506 0010 00000000 		.long	0
 507 0014 00E06F40 		.long	1081073664
 508              		.align 8
 509              	.LC3:
 510 0018 B3A3B9DE 		.long	3736708019
 511 001c 9158D3BF 		.long	-1076668271
 512              		.align 8
 513              	.LC4:
 514 0020 00000000 		.long	0
 515 0024 00003740 		.long	1077346304
 516              		.align 8
 517              	.LC5:
 518 0028 00000000 		.long	0
 519 002c 0000E03F 		.long	1071644672
 520              		.text
 521              	.Letext0:
 522              		.section	.text.unlikely._Z10backgroundhhh
 523              	.Letext_cold0:
 524              		.file 3 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 525              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types.h"
 526              		.file 5 "/usr/include/libio.h"
 527              		.file 6 "/usr/include/stdio.h"
 528              		.file 7 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 cmap.cxx
     /tmp/cc5NleyD.s:14     .text._Z10backgroundhhh:0000000000000000 _Z10backgroundhhh
     /tmp/cc5NleyD.s:397    .data._ZL4cmap:0000000000000000 _ZL4cmap
     /tmp/cc5NleyD.s:212    .text.startup.main:0000000000000000 main
     /tmp/cc5NleyD.s:505    .rodata.cst8:0000000000000010 .LC2
     /tmp/cc5NleyD.s:497    .rodata.cst8:0000000000000000 .LC0
     /tmp/cc5NleyD.s:509    .rodata.cst8:0000000000000018 .LC3
     /tmp/cc5NleyD.s:501    .rodata.cst8:0000000000000008 .LC1
     /tmp/cc5NleyD.s:513    .rodata.cst8:0000000000000020 .LC4
     /tmp/cc5NleyD.s:517    .rodata.cst8:0000000000000028 .LC5
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

UNDEFINED SYMBOLS
log
pow
__printf_chk
