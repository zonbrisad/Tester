   1              		.file	"fl_open_uri.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.rodata.str1.1,"aMS",@progbits,1
   5              	.LC0:
   6 0000 66696C65 		.string	"file://"
   6      3A2F2F00 
   7              	.LC1:
   8 0008 2F62696E 		.string	"/bin:/usr/bin"
   8      3A2F7573 
   8      722F6269 
   8      6E00
   9              	.LC2:
  10 0016 7864672D 		.string	"xdg-email"
  10      656D6169 
  10      6C00
  11              	.LC3:
  12 0020 7864672D 		.string	"xdg-open"
  12      6F70656E 
  12      00
  13              	.LC4:
  14 0029 25323534 		.string	"%254[^:]"
  14      5B5E3A5D 
  14      00
  15              		.section	.rodata.str1.8,"aMS",@progbits,1
  16              		.align 8
  17              	.LC5:
  18 0000 55524920 		.string	"URI scheme \"%s\" not supported."
  18      73636865 
  18      6D652022 
  18      25732220 
  18      6E6F7420 
  19              		.section	.rodata.str1.1
  20              	.LC6:
  21 0032 42616420 		.string	"Bad URI \"%s\""
  21      55524920 
  21      22257322 
  21      00
  22              	.LC7:
  23 003f 6D61696C 		.string	"mailto:"
  23      746F3A00 
  24              	.LC8:
  25 0047 6E657773 		.string	"news:"
  25      3A00
  26              	.LC9:
  27 004d 50415448 		.string	"PATH"
  27      00
  28              		.section	.rodata.str1.8
  29 001f 00       		.align 8
  30              	.LC10:
  31 0020 4E6F2068 		.string	"No helper application found for \"%s\""
  31      656C7065 
  31      72206170 
  31      706C6963 
  31      6174696F 
  32              		.section	.rodata.str1.1
  33              	.LC11:
  34 0052 66697265 		.string	"firefox"
  34      666F7800 
  35              	.LC12:
  36 005a 6D6F7A69 		.string	"mozilla"
  36      6C6C6100 
  37              	.LC13:
  38 0062 6E657473 		.string	"netscape"
  38      63617065 
  38      00
  39              	.LC14:
  40 006b 7468756E 		.string	"thunderbird"
  40      64657262 
  40      69726400 
  41              	.LC15:
  42 0077 6F70656E 		.string	"openURL(%s)"
  42      55524C28 
  42      25732900 
  43              	.LC16:
  44 0083 2D72656D 		.string	"-remote"
  44      6F746500 
  45              	.LC17:
  46 008b 64746163 		.string	"dtaction"
  46      74696F6E 
  46      00
  47              	.LC18:
  48 0094 6F70656E 		.string	"open"
  48      00
  49              	.LC19:
  50 0099 2000     		.string	" "
  51              	.LC20:
  52 009b 2F646576 		.string	"/dev/null"
  52      2F6E756C 
  52      6C00
  53              	.LC21:
  54 00a5 77616974 		.string	"waitpid(%ld) failed: %s"
  54      70696428 
  54      256C6429 
  54      20666169 
  54      6C65643A 
  55              		.section	.text.unlikely._Z11fl_open_uriPKcPci,"ax",@progbits
  56              	.LCOLDB22:
  57              		.section	.text._Z11fl_open_uriPKcPci,"ax",@progbits
  58              	.LHOTB22:
  59              		.p2align 4,,15
  60              		.section	.text.unlikely._Z11fl_open_uriPKcPci
  61              	.Ltext_cold0:
  62              		.section	.text._Z11fl_open_uriPKcPci
  63              		.globl	_Z11fl_open_uriPKcPci
  65              	_Z11fl_open_uriPKcPci:
  66              	.LFB110:
  67              		.file 1 "fltk-1.3.4-1/src/fl_open_uri.cxx"
   1:fltk-1.3.4-1/src/fl_open_uri.cxx **** ...
  68              		.loc 1 98 0
  69              		.cfi_startproc
  70              	.LVL0:
  71 0000 4157     		pushq	%r15
  72              		.cfi_def_cfa_offset 16
  73              		.cfi_offset 15, -16
  74 0002 4156     		pushq	%r14
  75              		.cfi_def_cfa_offset 24
  76              		.cfi_offset 14, -24
  77 0004 4155     		pushq	%r13
  78              		.cfi_def_cfa_offset 32
  79              		.cfi_offset 13, -32
  80 0006 4154     		pushq	%r12
  81              		.cfi_def_cfa_offset 40
  82              		.cfi_offset 12, -40
  83 0008 55       		pushq	%rbp
  84              		.cfi_def_cfa_offset 48
  85              		.cfi_offset 6, -48
  86 0009 53       		pushq	%rbx
  87              		.cfi_def_cfa_offset 56
  88              		.cfi_offset 3, -56
  89 000a BD000000 		movl	$_ZZ11fl_open_uriPKcPciE7schemes+8, %ebp
  89      00
  90 000f BB000000 		movl	$.LC0, %ebx
  90      00
  91 0014 4881EC68 		subq	$3432, %rsp
  91      0D0000
  92              		.cfi_def_cfa_offset 3488
  93              		.loc 1 98 0
  94 001b 8954241C 		movl	%edx, 28(%rsp)
  95 001f 48897C24 		movq	%rdi, 8(%rsp)
  95      08
  96 0024 BA070000 		movl	$7, %edx
  96      00
  97              	.LVL1:
  98 0029 48897424 		movq	%rsi, 16(%rsp)
  98      10
  99 002e 64488B04 		movq	%fs:40, %rax
  99      25280000 
  99      00
 100 0037 48898424 		movq	%rax, 3416(%rsp)
 100      580D0000 
 101 003f 31C0     		xorl	%eax, %eax
 102              	.LVL2:
 103 0041 EB21     		jmp	.L4
 104              	.LVL3:
 105              		.p2align 4,,10
 106 0043 0F1F4400 		.p2align 3
 106      00
 107              	.L93:
 108 0048 4883C508 		addq	$8, %rbp
 109              		.loc 1 112 0 discriminator 2
 110 004c 488B5DF8 		movq	-8(%rbp), %rbx
 111 0050 4885DB   		testq	%rbx, %rbx
 112 0053 0F84A502 		je	.L3
 112      0000
 113 0059 4889DF   		movq	%rbx, %rdi
 114 005c E8000000 		call	strlen
 114      00
 115              	.LVL4:
 116 0061 4889C2   		movq	%rax, %rdx
 117              	.L4:
 118              		.loc 1 113 0
 119 0064 488B7C24 		movq	8(%rsp), %rdi
 119      08
 120 0069 4889DE   		movq	%rbx, %rsi
 121 006c E8000000 		call	strncmp
 121      00
 122              	.LVL5:
 123 0071 85C0     		testl	%eax, %eax
 124 0073 4189C5   		movl	%eax, %r13d
 125 0076 75D0     		jne	.L93
 126              		.loc 1 193 0
 127 0078 488B7424 		movq	8(%rsp), %rsi
 127      08
 128 007d B9070000 		movl	$7, %ecx
 128      00
 129 0082 BF000000 		movl	$.LC0, %edi
 129      00
 130 0087 F3A6     		repz cmpsb
 131              	.LVL6:
 132 0089 0F85FA02 		jne	.L94
 132      0000
 133 008f BD000000 		movl	$.LC3, %ebp
 133      00
 134 0094 41BC0000 		movl	$_ZZ11fl_open_uriPKcPciE8managers, %r12d
 134      0000
 135              	.L8:
 136              	.LVL7:
 137              	.LBB51:
 138              	.LBB52:
 139              		.loc 1 280 0
 140 009a 488D9C24 		leaq	1360(%rsp), %rbx
 140      50050000 
 141              		.loc 1 289 0
 142 00a2 4C8DBBFF 		leaq	2047(%rbx), %r15
 142      070000
 143              	.LVL8:
 144 00a9 0F1F8000 		.p2align 4,,10
 144      000000
 145              		.p2align 3
 146              	.L35:
 147              		.loc 1 278 0
 148 00b0 BF000000 		movl	$.LC9, %edi
 148      00
 149 00b5 E8000000 		call	getenv
 149      00
 150              	.LVL9:
 151 00ba 4885C0   		testq	%rax, %rax
 152 00bd 4989C6   		movq	%rax, %r14
 153              	.LVL10:
 154 00c0 B8000000 		movl	$.LC1, %eax
 154      00
 155              	.LVL11:
 156 00c5 4C0F44F0 		cmove	%rax, %r14
 157              	.LVL12:
 158              		.loc 1 280 0
 159 00c9 410FB606 		movzbl	(%r14), %eax
 160 00cd 84C0     		testb	%al, %al
 161 00cf 0F840B03 		je	.L10
 161      0000
 162 00d5 4889DF   		movq	%rbx, %rdi
 163 00d8 EB1D     		jmp	.L15
 164              	.LVL13:
 165 00da 660F1F44 		.p2align 4,,10
 165      0000
 166              		.p2align 3
 167              	.L11:
 168              		.loc 1 289 0
 169 00e0 4C39FF   		cmpq	%r15, %rdi
 170 00e3 7306     		jnb	.L14
 171              	.LVL14:
 172 00e5 8807     		movb	%al, (%rdi)
 173 00e7 4883C701 		addq	$1, %rdi
 174              	.LVL15:
 175              	.L14:
 176              		.loc 1 280 0
 177 00eb 4983C601 		addq	$1, %r14
 178              	.LVL16:
 179 00ef 410FB606 		movzbl	(%r14), %eax
 180 00f3 84C0     		testb	%al, %al
 181 00f5 7453     		je	.L95
 182              	.L15:
 183              		.loc 1 281 0
 184 00f7 3C3A     		cmpb	$58, %al
 185 00f9 75E5     		jne	.L11
 186              		.loc 1 282 0
 187 00fb 4839DF   		cmpq	%rbx, %rdi
 188 00fe 7618     		jbe	.L12
 189 0100 807FFF2F 		cmpb	$47, -1(%rdi)
 190 0104 7412     		je	.L12
 191 0106 4C39FF   		cmpq	%r15, %rdi
 192 0109 730D     		jnb	.L12
 193              	.LVL17:
 194 010b C6072F   		movb	$47, (%rdi)
 195 010e 4883C701 		addq	$1, %rdi
 196              	.LVL18:
 197              		.p2align 4,,10
 198 0112 660F1F44 		.p2align 3
 198      0000
 199              	.L12:
 200              		.loc 1 284 0
 201 0118 4C89FA   		movq	%r15, %rdx
 202 011b 4889EE   		movq	%rbp, %rsi
 203 011e 4829FA   		subq	%rdi, %rdx
 204 0121 4883C201 		addq	$1, %rdx
 205 0125 E8000000 		call	fl_strlcpy
 205      00
 206              	.LVL19:
 207              		.loc 1 286 0
 208 012a BE010000 		movl	$1, %esi
 208      00
 209 012f 4889DF   		movq	%rbx, %rdi
 210 0132 E8000000 		call	access
 210      00
 211              	.LVL20:
 212 0137 85C0     		testl	%eax, %eax
 213 0139 7451     		je	.L13
 214              		.loc 1 280 0
 215 013b 4983C601 		addq	$1, %r14
 216              	.LVL21:
 217 013f 410FB606 		movzbl	(%r14), %eax
 218              		.loc 1 288 0
 219 0143 4889DF   		movq	%rbx, %rdi
 220              	.LVL22:
 221              		.loc 1 280 0
 222 0146 84C0     		testb	%al, %al
 223 0148 75AD     		jne	.L15
 224              	.LVL23:
 225              	.L95:
 226              		.loc 1 292 0
 227 014a 4839DF   		cmpq	%rbx, %rdi
 228 014d 0F868D02 		jbe	.L10
 228      0000
 229              		.loc 1 293 0
 230 0153 807FFF2F 		cmpb	$47, -1(%rdi)
 231 0157 740C     		je	.L16
 232 0159 4C39FF   		cmpq	%r15, %rdi
 233 015c 7307     		jnb	.L16
 234              	.LVL24:
 235 015e C6072F   		movb	$47, (%rdi)
 236 0161 4883C701 		addq	$1, %rdi
 237              	.LVL25:
 238              	.L16:
 239              		.loc 1 295 0
 240 0165 4C89FA   		movq	%r15, %rdx
 241 0168 4889EE   		movq	%rbp, %rsi
 242 016b 4829FA   		subq	%rdi, %rdx
 243 016e 4883C201 		addq	$1, %rdx
 244 0172 E8000000 		call	fl_strlcpy
 244      00
 245              	.LVL26:
 246              		.loc 1 297 0
 247 0177 BE010000 		movl	$1, %esi
 247      00
 248 017c 4889DF   		movq	%rbx, %rdi
 249 017f E8000000 		call	access
 249      00
 250              	.LVL27:
 251 0184 85C0     		testl	%eax, %eax
 252 0186 0F855402 		jne	.L10
 252      0000
 253              	.L13:
 254              	.LVL28:
 255              	.LBE52:
 256              	.LBE51:
 257              		.loc 1 202 0
 258 018c 498B0424 		movq	(%r12), %rax
 259 0190 4885C0   		testq	%rax, %rax
 260 0193 0F845802 		je	.L34
 260      0000
 261              		.loc 1 211 0
 262 0199 48894424 		movq	%rax, 48(%rsp)
 262      30
 263              		.loc 1 213 0
 264 019e BF000000 		movl	$.LC11, %edi
 264      00
 265 01a3 B9080000 		movl	$8, %ecx
 265      00
 266 01a8 4889C6   		movq	%rax, %rsi
 267 01ab F3A6     		repz cmpsb
 268 01ad 7426     		je	.L17
 269              		.loc 1 214 0 discriminator 1
 270 01af BF000000 		movl	$.LC12, %edi
 270      00
 271 01b4 B9080000 		movl	$8, %ecx
 271      00
 272 01b9 4889C6   		movq	%rax, %rsi
 273              		.loc 1 213 0 discriminator 1
 274 01bc F3A6     		repz cmpsb
 275 01be 7415     		je	.L17
 276              		.loc 1 215 0
 277 01c0 BF000000 		movl	$.LC13, %edi
 277      00
 278 01c5 B9090000 		movl	$9, %ecx
 278      00
 279 01ca 4889C6   		movq	%rax, %rsi
 280              		.loc 1 214 0
 281 01cd F3A6     		repz cmpsb
 282 01cf 0F852903 		jne	.L96
 282      0000
 283              	.L17:
 284              	.LVL29:
 285              	.LBB53:
 286              	.LBB54:
 287              		.file 2 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 288              		.loc 2 65 0
 289 01d5 488DAC24 		leaq	336(%rsp), %rbp
 289      50010000 
 290              	.LVL30:
 291 01dd 4C8B4C24 		movq	8(%rsp), %r9
 291      08
 292 01e2 41B80000 		movl	$.LC15, %r8d
 292      0000
 293 01e8 B9000400 		movl	$1024, %ecx
 293      00
 294 01ed BA010000 		movl	$1, %edx
 294      00
 295 01f2 BE000400 		movl	$1024, %esi
 295      00
 296 01f7 4889EF   		movq	%rbp, %rdi
 297 01fa 31C0     		xorl	%eax, %eax
 298 01fc E8000000 		call	__snprintf_chk
 298      00
 299              	.LVL31:
 300              	.LBE54:
 301              	.LBE53:
 302              		.loc 1 220 0
 303 0201 48C74424 		movq	$.LC16, 56(%rsp)
 303      38000000 
 303      00
 304              		.loc 1 221 0
 305 020a 48896C24 		movq	%rbp, 64(%rsp)
 305      40
 306              		.loc 1 222 0
 307 020f 48C74424 		movq	$0, 72(%rsp)
 307      48000000 
 307      00
 308              	.L19:
 309              		.loc 1 234 0
 310 0218 48837C24 		cmpq	$0, 16(%rsp)
 310      1000
 311 021e 7453     		je	.L24
 312              		.loc 1 235 0
 313 0220 4C636424 		movslq	28(%rsp), %r12
 313      1C
 314 0225 488B7424 		movq	48(%rsp), %rsi
 314      30
 315 022a 488B7C24 		movq	16(%rsp), %rdi
 315      10
 316 022f 4C89E2   		movq	%r12, %rdx
 317 0232 E8000000 		call	fl_strlcpy
 317      00
 318              	.LVL32:
 319              		.loc 1 237 0
 320 0237 48837C24 		cmpq	$0, 56(%rsp)
 320      3800
 321 023d 7434     		je	.L24
 322 023f 488D6C24 		leaq	48(%rsp), %rbp
 322      30
 323              	.LVL33:
 324              	.L25:
 325              		.loc 1 238 0 discriminator 2
 326 0244 4C8B7C24 		movq	16(%rsp), %r15
 326      10
 327 0249 4C89E2   		movq	%r12, %rdx
 328 024c BE000000 		movl	$.LC19, %esi
 328      00
 329 0251 4883C508 		addq	$8, %rbp
 330 0255 4C89FF   		movq	%r15, %rdi
 331 0258 E8000000 		call	fl_strlcat
 331      00
 332              	.LVL34:
 333              		.loc 1 239 0 discriminator 2
 334 025d 488B7500 		movq	0(%rbp), %rsi
 335 0261 4C89E2   		movq	%r12, %rdx
 336 0264 4C89FF   		movq	%r15, %rdi
 337 0267 E8000000 		call	fl_strlcat
 337      00
 338              	.LVL35:
 339              		.loc 1 237 0 discriminator 2
 340 026c 48837D08 		cmpq	$0, 8(%rbp)
 340      00
 341 0271 75D1     		jne	.L25
 342              	.L24:
 343              	.LVL36:
 344              	.LBB55:
 345              	.LBB56:
 346              		.loc 1 322 0
 347 0273 488D7C24 		leaq	80(%rsp), %rdi
 347      50
 348 0278 E8000000 		call	sigemptyset
 348      00
 349              	.LVL37:
 350              		.loc 1 323 0
 351 027d 488D7C24 		leaq	80(%rsp), %rdi
 351      50
 352 0282 BE110000 		movl	$17, %esi
 352      00
 353 0287 E8000000 		call	sigaddset
 353      00
 354              	.LVL38:
 355              		.loc 1 324 0
 356 028c 488D9424 		leaq	208(%rsp), %rdx
 356      D0000000 
 357 0294 488D7424 		leaq	80(%rsp), %rsi
 357      50
 358 0299 31FF     		xorl	%edi, %edi
 359 029b E8000000 		call	sigprocmask
 359      00
 360              	.LVL39:
 361              		.loc 1 327 0
 362 02a0 E8000000 		call	fork
 362      00
 363              	.LVL40:
 364 02a5 85C0     		testl	%eax, %eax
 365 02a7 89C5     		movl	%eax, %ebp
 366              	.LVL41:
 367 02a9 0F84DE01 		je	.L97
 367      0000
 368              		.loc 1 350 0
 369 02af 791F     		jns	.L70
 370 02b1 E9AE0100 		jmp	.L30
 370      00
 371              	.LVL42:
 372 02b6 662E0F1F 		.p2align 4,,10
 372      84000000 
 372      0000
 373              		.p2align 3
 374              	.L99:
 375              		.loc 1 360 0
 376 02c0 E8000000 		call	__errno_location
 376      00
 377              	.LVL43:
 378 02c5 8B38     		movl	(%rax), %edi
 379 02c7 83FF04   		cmpl	$4, %edi
 380 02ca 0F855A01 		jne	.L98
 380      0000
 381              	.L70:
 382              		.loc 1 359 0
 383 02d0 488D7424 		leaq	44(%rsp), %rsi
 383      2C
 384 02d5 31D2     		xorl	%edx, %edx
 385 02d7 89EF     		movl	%ebp, %edi
 386 02d9 E8000000 		call	waitpid
 386      00
 387              	.LVL44:
 388 02de 85C0     		testl	%eax, %eax
 389 02e0 78DE     		js	.L99
 390              		.loc 1 374 0
 391 02e2 488DB424 		leaq	208(%rsp), %rsi
 391      D0000000 
 392 02ea 31D2     		xorl	%edx, %edx
 393 02ec BF020000 		movl	$2, %edi
 393      00
 394              		.loc 1 377 0
 395 02f1 41BD0100 		movl	$1, %r13d
 395      0000
 396              		.loc 1 374 0
 397 02f7 E8000000 		call	sigprocmask
 397      00
 398              	.LVL45:
 399              	.LBE56:
 400              	.LBE55:
 401              		.loc 1 243 0
 402 02fc EB5F     		jmp	.L7
 403              	.LVL46:
 404              	.L3:
 405              	.LBB68:
 406              	.LBB69:
 407              		.loc 1 117 0
 408 02fe 48837C24 		cmpq	$0, 16(%rsp)
 408      1000
 409 0304 7454     		je	.L32
 410              	.LBB70:
 411              		.loc 1 119 0
 412 0306 488B7C24 		movq	8(%rsp), %rdi
 412      08
 413 030b 488D9424 		leaq	1360(%rsp), %rdx
 413      50050000 
 414 0313 BE000000 		movl	$.LC4, %esi
 414      00
 415 0318 31C0     		xorl	%eax, %eax
 416 031a E8000000 		call	sscanf
 416      00
 417              	.LVL47:
 418 031f 83F801   		cmpl	$1, %eax
 419              	.LBB71:
 420              	.LBB72:
 421              		.loc 2 65 0
 422 0322 48637424 		movslq	28(%rsp), %rsi
 422      1C
 423 0327 4C8D8C24 		leaq	1360(%rsp), %r9
 423      50050000 
 424 032f 41B80000 		movl	$.LC5, %r8d
 424      0000
 425              	.LBE72:
 426              	.LBE71:
 427              		.loc 1 119 0
 428 0335 740B     		je	.L88
 429              	.LVL48:
 430              	.LBB73:
 431              	.LBB74:
 432              		.loc 2 65 0
 433 0337 4C8B4C24 		movq	8(%rsp), %r9
 433      08
 434 033c 41B80000 		movl	$.LC6, %r8d
 434      0000
 435              	.LVL49:
 436              	.L88:
 437 0342 488B7C24 		movq	16(%rsp), %rdi
 437      10
 438 0347 48C7C1FF 		movq	$-1, %rcx
 438      FFFFFF
 439 034e BA010000 		movl	$1, %edx
 439      00
 440 0353 31C0     		xorl	%eax, %eax
 441 0355 E8000000 		call	__snprintf_chk
 441      00
 442              	.LVL50:
 443              	.L32:
 444              	.LBE74:
 445              	.LBE73:
 446              	.LBE70:
 447              	.LBE69:
 448              	.LBE68:
 449              		.loc 1 207 0
 450 035a 4531ED   		xorl	%r13d, %r13d
 451              	.L7:
 452              		.loc 1 245 0
 453 035d 488B8C24 		movq	3416(%rsp), %rcx
 453      580D0000 
 454 0365 6448330C 		xorq	%fs:40, %rcx
 454      25280000 
 454      00
 455 036e 4489E8   		movl	%r13d, %eax
 456 0371 0F85EB01 		jne	.L100
 456      0000
 457 0377 4881C468 		addq	$3432, %rsp
 457      0D0000
 458              		.cfi_remember_state
 459              		.cfi_def_cfa_offset 56
 460 037e 5B       		popq	%rbx
 461              		.cfi_def_cfa_offset 48
 462 037f 5D       		popq	%rbp
 463              		.cfi_def_cfa_offset 40
 464 0380 415C     		popq	%r12
 465              		.cfi_def_cfa_offset 32
 466 0382 415D     		popq	%r13
 467              		.cfi_def_cfa_offset 24
 468 0384 415E     		popq	%r14
 469              		.cfi_def_cfa_offset 16
 470 0386 415F     		popq	%r15
 471              		.cfi_def_cfa_offset 8
 472 0388 C3       		ret
 473              	.L94:
 474              		.cfi_restore_state
 475              		.loc 1 194 0
 476 0389 488B7424 		movq	8(%rsp), %rsi
 476      08
 477 038e BF000000 		movl	$.LC7, %edi
 477      00
 478 0393 B9070000 		movl	$7, %ecx
 478      00
 479 0398 F3A6     		repz cmpsb
 480 039a 0F84DD00 		je	.L39
 480      0000
 481              		.loc 1 195 0 discriminator 1
 482 03a0 488B7424 		movq	8(%rsp), %rsi
 482      08
 483 03a5 BF000000 		movl	$.LC8, %edi
 483      00
 484 03aa B9050000 		movl	$5, %ecx
 484      00
 485              		.loc 1 194 0 discriminator 1
 486 03af BD000000 		movl	$.LC3, %ebp
 486      00
 487 03b4 41BC0000 		movl	$_ZZ11fl_open_uriPKcPciE7readers, %r12d
 487      0000
 488              		.loc 1 195 0 discriminator 1
 489 03ba F3A6     		repz cmpsb
 490 03bc 0F92C2   		setb	%dl
 491 03bf 0F97C0   		seta	%al
 492 03c2 29D0     		subl	%edx, %eax
 493              		.loc 1 194 0 discriminator 1
 494 03c4 BA000000 		movl	$.LC2, %edx
 494      00
 495              		.loc 1 195 0 discriminator 1
 496 03c9 0FBEC0   		movsbl	%al, %eax
 497              		.loc 1 194 0 discriminator 1
 498 03cc 85C0     		testl	%eax, %eax
 499 03ce B8000000 		movl	$_ZZ11fl_open_uriPKcPciE8browsers, %eax
 499      00
 500 03d3 480F44EA 		cmove	%rdx, %rbp
 501 03d7 4C0F45E0 		cmovne	%rax, %r12
 502 03db E9BAFCFF 		jmp	.L8
 502      FF
 503              	.LVL51:
 504              		.p2align 4,,10
 505              		.p2align 3
 506              	.L10:
 507              		.loc 1 199 0
 508 03e0 4983C408 		addq	$8, %r12
 509 03e4 498B2C24 		movq	(%r12), %rbp
 510 03e8 4885ED   		testq	%rbp, %rbp
 511 03eb 0F85BFFC 		jne	.L35
 511      FFFF
 512              	.L34:
 513              		.loc 1 203 0
 514 03f1 48837C24 		cmpq	$0, 16(%rsp)
 514      1000
 515 03f7 0F845DFF 		je	.L32
 515      FFFF
 516              	.LVL52:
 517              	.LBB75:
 518              	.LBB76:
 519              		.loc 2 65 0
 520 03fd 48637424 		movslq	28(%rsp), %rsi
 520      1C
 521              	.LVL53:
 522 0402 4C8B4C24 		movq	8(%rsp), %r9
 522      08
 523 0407 41B80000 		movl	$.LC10, %r8d
 523      0000
 524 040d 488B7C24 		movq	16(%rsp), %rdi
 524      10
 525 0412 48C7C1FF 		movq	$-1, %rcx
 525      FFFFFF
 526 0419 BA010000 		movl	$1, %edx
 526      00
 527 041e 31C0     		xorl	%eax, %eax
 528 0420 E8000000 		call	__snprintf_chk
 528      00
 529              	.LVL54:
 530 0425 E933FFFF 		jmp	.L7
 530      FF
 531              	.LVL55:
 532              	.L98:
 533              	.LBE76:
 534              	.LBE75:
 535              	.LBB77:
 536              	.LBB65:
 537              		.loc 1 362 0
 538 042a 488B5C24 		movq	16(%rsp), %rbx
 538      10
 539              	.LVL56:
 540 042f 4885DB   		testq	%rbx, %rbx
 541 0432 7430     		je	.L30
 542 0434 E8000000 		call	strerror
 542      00
 543              	.LVL57:
 544              	.LBB57:
 545              	.LBB58:
 546              		.loc 2 65 0
 547 0439 48637424 		movslq	28(%rsp), %rsi
 547      1C
 548              	.LVL58:
 549 043e 4883EC08 		subq	$8, %rsp
 550              		.cfi_def_cfa_offset 3496
 551 0442 BA010000 		movl	$1, %edx
 551      00
 552 0447 50       		pushq	%rax
 553              		.cfi_def_cfa_offset 3504
 554 0448 4C63CD   		movslq	%ebp, %r9
 555 044b 41B80000 		movl	$.LC21, %r8d
 555      0000
 556 0451 48C7C1FF 		movq	$-1, %rcx
 556      FFFFFF
 557 0458 4889DF   		movq	%rbx, %rdi
 558 045b 31C0     		xorl	%eax, %eax
 559 045d E8000000 		call	__snprintf_chk
 559      00
 560              	.LVL59:
 561 0462 58       		popq	%rax
 562              		.cfi_def_cfa_offset 3496
 563 0463 5A       		popq	%rdx
 564              		.cfi_def_cfa_offset 3488
 565              	.LVL60:
 566              	.L30:
 567              	.LBE58:
 568              	.LBE57:
 569              		.loc 1 352 0
 570 0464 488DB424 		leaq	208(%rsp), %rsi
 570      D0000000 
 571 046c 31D2     		xorl	%edx, %edx
 572 046e BF020000 		movl	$2, %edi
 572      00
 573 0473 E8000000 		call	sigprocmask
 573      00
 574              	.LVL61:
 575 0478 E9E0FEFF 		jmp	.L7
 575      FF
 576              	.LVL62:
 577              	.L39:
 578              	.LBE65:
 579              	.LBE77:
 580 047d BD000000 		movl	$.LC2, %ebp
 580      00
 581              		.loc 1 195 0
 582 0482 41BC0000 		movl	$_ZZ11fl_open_uriPKcPciE7readers, %r12d
 582      0000
 583 0488 E90DFCFF 		jmp	.L8
 583      FF
 584              	.LVL63:
 585              	.L97:
 586              	.LBB78:
 587              	.LBB66:
 588              		.loc 1 329 0
 589 048d E8000000 		call	fork
 589      00
 590              	.LVL64:
 591              		.loc 1 331 0
 592 0492 31FF     		xorl	%edi, %edi
 593              		.loc 1 329 0
 594 0494 85C0     		testl	%eax, %eax
 595 0496 0F85A900 		jne	.L26
 595      0000
 596              		.loc 1 331 0
 597 049c E8000000 		call	close
 597      00
 598              	.LVL65:
 599              	.LBB59:
 600              	.LBB60:
 601              		.file 3 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
   1:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** /* Checking macros for fcntl functions.
   2:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    Copyright (C) 2007-2016 Free Software Foundation, Inc.
   3:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    This file is part of the GNU C Library.
   4:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 
   5:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    The GNU C Library is free software; you can redistribute it and/or
   6:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    modify it under the terms of the GNU Lesser General Public
   7:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    License as published by the Free Software Foundation; either
   8:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    version 2.1 of the License, or (at your option) any later version.
   9:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 
  10:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    The GNU C Library is distributed in the hope that it will be useful,
  11:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  12:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  13:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    Lesser General Public License for more details.
  14:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 
  15:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    You should have received a copy of the GNU Lesser General Public
  16:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    License along with the GNU C Library; if not, see
  17:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    <http://www.gnu.org/licenses/>.  */
  18:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 
  19:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** #ifndef	_FCNTL_H
  20:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** # error "Never include <bits/fcntl2.h> directly; use <fcntl.h> instead."
  21:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** #endif
  22:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 
  23:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** /* Check that calls to open and openat with O_CREAT or O_TMPFILE set have an
  24:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****    appropriate third/fourth parameter.  */
  25:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** #ifndef __USE_FILE_OFFSET64
  26:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** extern int __open_2 (const char *__path, int __oflag) __nonnull ((1));
  27:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** extern int __REDIRECT (__open_alias, (const char *__path, int __oflag, ...),
  28:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 		       open) __nonnull ((1));
  29:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** #else
  30:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** extern int __REDIRECT (__open_2, (const char *__path, int __oflag),
  31:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 		       __open64_2) __nonnull ((1));
  32:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** extern int __REDIRECT (__open_alias, (const char *__path, int __oflag, ...),
  33:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 		       open64) __nonnull ((1));
  34:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** #endif
  35:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** __errordecl (__open_too_many_args,
  36:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 	     "open can be called either with 2 or 3 arguments, not more");
  37:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** __errordecl (__open_missing_mode,
  38:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 	     "open with O_CREAT or O_TMPFILE in second argument needs 3 arguments");
  39:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 
  40:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** __fortify_function int
  41:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** open (const char *__path, int __oflag, ...)
  42:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** {
  43:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****   if (__va_arg_pack_len () > 1)
  44:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****     __open_too_many_args ();
  45:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 
  46:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****   if (__builtin_constant_p (__oflag))
  47:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****     {
  48:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****       if (__OPEN_NEEDS_MODE (__oflag) && __va_arg_pack_len () < 1)
  49:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 	{
  50:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 	  __open_missing_mode ();
  51:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 	  return __open_2 (__path, __oflag);
  52:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 	}
  53:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****       return __open_alias (__path, __oflag, __va_arg_pack ());
 602              		.loc 3 53 0
 603 04a1 31F6     		xorl	%esi, %esi
 604 04a3 BF000000 		movl	$.LC20, %edi
 604      00
 605 04a8 31C0     		xorl	%eax, %eax
 606 04aa E8000000 		call	open
 606      00
 607              	.LVL66:
 608              	.LBE60:
 609              	.LBE59:
 610              		.loc 1 334 0
 611 04af BF010000 		movl	$1, %edi
 611      00
 612 04b4 E8000000 		call	close
 612      00
 613              	.LVL67:
 614              	.LBB61:
 615              	.LBB62:
 616              		.loc 3 53 0
 617 04b9 BE010000 		movl	$1, %esi
 617      00
 618 04be BF000000 		movl	$.LC20, %edi
 618      00
 619 04c3 31C0     		xorl	%eax, %eax
 620 04c5 E8000000 		call	open
 620      00
 621              	.LVL68:
 622              	.LBE62:
 623              	.LBE61:
 624              		.loc 1 337 0
 625 04ca BF020000 		movl	$2, %edi
 625      00
 626 04cf E8000000 		call	close
 626      00
 627              	.LVL69:
 628              	.LBB63:
 629              	.LBB64:
 630              		.loc 3 53 0
 631 04d4 BE010000 		movl	$1, %esi
 631      00
 632 04d9 BF000000 		movl	$.LC20, %edi
 632      00
 633 04de 31C0     		xorl	%eax, %eax
 634 04e0 E8000000 		call	open
 634      00
 635              	.LVL70:
 636              	.LBE64:
 637              	.LBE63:
 638              		.loc 1 341 0
 639 04e5 E8000000 		call	setsid
 639      00
 640              	.LVL71:
 641              		.loc 1 344 0
 642 04ea 488D7424 		leaq	48(%rsp), %rsi
 642      30
 643              	.LVL72:
 644 04ef 4889DF   		movq	%rbx, %rdi
 645 04f2 E8000000 		call	execv
 645      00
 646              	.LVL73:
 647              		.loc 1 345 0
 648 04f7 31FF     		xorl	%edi, %edi
 649 04f9 E8000000 		call	_exit
 649      00
 650              	.LVL74:
 651              	.L96:
 652              	.LBE66:
 653              	.LBE78:
 654              		.loc 1 216 0
 655 04fe BF000000 		movl	$.LC14, %edi
 655      00
 656 0503 B90C0000 		movl	$12, %ecx
 656      00
 657 0508 4889C6   		movq	%rax, %rsi
 658              		.loc 1 215 0
 659 050b F3A6     		repz cmpsb
 660 050d 0F84C2FC 		je	.L17
 660      FFFF
 661              		.loc 1 223 0
 662 0513 BF000000 		movl	$.LC17, %edi
 662      00
 663 0518 B9090000 		movl	$9, %ecx
 663      00
 664 051d 4889C6   		movq	%rax, %rsi
 665 0520 F3A6     		repz cmpsb
 666 0522 7526     		jne	.L20
 667              		.loc 1 226 0
 668 0524 488B4424 		movq	8(%rsp), %rax
 668      08
 669              		.loc 1 225 0
 670 0529 48C74424 		movq	$.LC18, 56(%rsp)
 670      38000000 
 670      00
 671              		.loc 1 227 0
 672 0532 48C74424 		movq	$0, 72(%rsp)
 672      48000000 
 672      00
 673              		.loc 1 226 0
 674 053b 48894424 		movq	%rax, 64(%rsp)
 674      40
 675 0540 E9D3FCFF 		jmp	.L19
 675      FF
 676              	.LVL75:
 677              	.L26:
 678              	.LBB79:
 679              	.LBB67:
 680              		.loc 1 348 0
 681 0545 E8000000 		call	_exit
 681      00
 682              	.LVL76:
 683              	.L20:
 684              	.LBE67:
 685              	.LBE79:
 686              		.loc 1 230 0
 687 054a 488B4424 		movq	8(%rsp), %rax
 687      08
 688              		.loc 1 231 0
 689 054f 48C74424 		movq	$0, 64(%rsp)
 689      40000000 
 689      00
 690              		.loc 1 230 0
 691 0558 48894424 		movq	%rax, 56(%rsp)
 691      38
 692 055d E9B6FCFF 		jmp	.L19
 692      FF
 693              	.L100:
 694              		.loc 1 245 0
 695 0562 E8000000 		call	__stack_chk_fail
 695      00
 696              	.LVL77:
 697              		.cfi_endproc
 698              	.LFE110:
 700              		.section	.text.unlikely._Z11fl_open_uriPKcPci
 701              	.LCOLDE22:
 702              		.section	.text._Z11fl_open_uriPKcPci
 703              	.LHOTE22:
 704              		.section	.rodata.str1.1
 705              	.LC23:
 706 00bd 25325800 		.string	"%2X"
 707              		.section	.text.unlikely._Z13fl_decode_uriPc,"ax",@progbits
 708              	.LCOLDB24:
 709              		.section	.text._Z13fl_decode_uriPc,"ax",@progbits
 710              	.LHOTB24:
 711              		.p2align 4,,15
 712              		.globl	_Z13fl_decode_uriPc
 714              	_Z13fl_decode_uriPc:
 715              	.LFB111:
 716              		.loc 1 254 0
 717              		.cfi_startproc
 718              	.LVL78:
 719 0000 4155     		pushq	%r13
 720              		.cfi_def_cfa_offset 16
 721              		.cfi_offset 13, -16
 722 0002 4154     		pushq	%r12
 723              		.cfi_def_cfa_offset 24
 724              		.cfi_offset 12, -24
 725 0004 55       		pushq	%rbp
 726              		.cfi_def_cfa_offset 32
 727              		.cfi_offset 6, -32
 728 0005 53       		pushq	%rbx
 729              		.cfi_def_cfa_offset 40
 730              		.cfi_offset 3, -40
 731 0006 4889FB   		movq	%rdi, %rbx
 732 0009 4883EC18 		subq	$24, %rsp
 733              		.cfi_def_cfa_offset 64
 734              		.loc 1 254 0
 735 000d 64488B04 		movq	%fs:40, %rax
 735      25280000 
 735      00
 736 0016 48894424 		movq	%rax, 8(%rsp)
 736      08
 737 001b 31C0     		xorl	%eax, %eax
 738              		.loc 1 255 0
 739 001d E8000000 		call	strlen
 739      00
 740              	.LVL79:
 741 0022 4C8D2C03 		leaq	(%rbx,%rax), %r13
 742              	.LVL80:
 743              		.loc 1 256 0
 744 0026 4D8D65FE 		leaq	-2(%r13), %r12
 745 002a 4C39E3   		cmpq	%r12, %rbx
 746 002d 7361     		jnb	.L101
 747 002f 488D6B01 		leaq	1(%rbx), %rbp
 748 0033 EB08     		jmp	.L110
 749              	.LVL81:
 750              		.p2align 4,,10
 751 0035 0F1F00   		.p2align 3
 752              	.L104:
 753 0038 4939DC   		cmpq	%rbx, %r12
 754 003b 7653     		jbe	.L101
 755              	.LVL82:
 756              	.L110:
 757 003d 4889EB   		movq	%rbp, %rbx
 758 0040 488D6D01 		leaq	1(%rbp), %rbp
 759              	.LVL83:
 760              	.LBB80:
 761              		.loc 1 257 0
 762 0044 807BFF25 		cmpb	$37, -1(%rbx)
 763 0048 75EE     		jne	.L104
 764              	.LBB81:
 765              		.loc 1 259 0
 766 004a 488D5424 		leaq	4(%rsp), %rdx
 766      04
 767 004f 31C0     		xorl	%eax, %eax
 768 0051 BE000000 		movl	$.LC23, %esi
 768      00
 769 0056 4889DF   		movq	%rbx, %rdi
 770 0059 E8000000 		call	sscanf
 770      00
 771              	.LVL84:
 772 005e 83F801   		cmpl	$1, %eax
 773 0061 752D     		jne	.L101
 774              		.loc 1 260 0
 775 0063 8B442404 		movl	4(%rsp), %eax
 776              	.LBB82:
 777              	.LBB83:
 778              		.file 4 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 779              		.loc 4 59 0
 780 0067 4C89EA   		movq	%r13, %rdx
 781 006a 488D7302 		leaq	2(%rbx), %rsi
 782 006e 4829EA   		subq	%rbp, %rdx
 783 0071 4889DF   		movq	%rbx, %rdi
 784              	.LBE83:
 785              	.LBE82:
 786              	.LBE81:
 787 0074 4D89E5   		movq	%r12, %r13
 788              	.LVL85:
 789 0077 4983EC02 		subq	$2, %r12
 790              	.LBB86:
 791              		.loc 1 260 0
 792 007b 8843FF   		movb	%al, -1(%rbx)
 793              	.LVL86:
 794              	.LBB85:
 795              	.LBB84:
 796              		.loc 4 59 0
 797 007e E8000000 		call	memmove
 797      00
 798              	.LVL87:
 799              	.LBE84:
 800              	.LBE85:
 801              	.LBE86:
 802              	.LBE80:
 803              		.loc 1 256 0
 804 0083 4939DC   		cmpq	%rbx, %r12
 805 0086 77B5     		ja	.L110
 806              	.LVL88:
 807 0088 0F1F8400 		.p2align 4,,10
 807      00000000 
 808              		.p2align 3
 809              	.L101:
 810              		.loc 1 266 0
 811 0090 488B4424 		movq	8(%rsp), %rax
 811      08
 812 0095 64483304 		xorq	%fs:40, %rax
 812      25280000 
 812      00
 813 009e 750B     		jne	.L112
 814 00a0 4883C418 		addq	$24, %rsp
 815              		.cfi_remember_state
 816              		.cfi_def_cfa_offset 40
 817 00a4 5B       		popq	%rbx
 818              		.cfi_def_cfa_offset 32
 819 00a5 5D       		popq	%rbp
 820              		.cfi_def_cfa_offset 24
 821 00a6 415C     		popq	%r12
 822              		.cfi_def_cfa_offset 16
 823 00a8 415D     		popq	%r13
 824              		.cfi_def_cfa_offset 8
 825              	.LVL89:
 826 00aa C3       		ret
 827              	.LVL90:
 828              	.L112:
 829              		.cfi_restore_state
 830 00ab E8000000 		call	__stack_chk_fail
 830      00
 831              	.LVL91:
 832              		.cfi_endproc
 833              	.LFE111:
 835              		.section	.text.unlikely._Z13fl_decode_uriPc
 836              	.LCOLDE24:
 837              		.section	.text._Z13fl_decode_uriPc
 838              	.LHOTE24:
 839              		.section	.rodata.str1.1
 840              	.LC25:
 841 00c1 68746D6C 		.string	"htmlview"
 841      76696577 
 841      00
 842              	.LC26:
 843 00ca 6B6F6E71 		.string	"konqueror"
 843      7565726F 
 843      7200
 844              	.LC27:
 845 00d4 6F706572 		.string	"opera"
 845      6100
 846              	.LC28:
 847 00da 686F746A 		.string	"hotjava"
 847      61766100 
 848              	.LC29:
 849 00e2 6D6F7361 		.string	"mosaic"
 849      696300
 850              		.section	.rodata._ZZ11fl_open_uriPKcPciE8browsers,"a",@progbits
 851              		.align 32
 854              	_ZZ11fl_open_uriPKcPciE8browsers:
 855 0000 00000000 		.quad	.LC3
 855      00000000 
 856 0008 00000000 		.quad	.LC25
 856      00000000 
 857 0010 00000000 		.quad	.LC11
 857      00000000 
 858 0018 00000000 		.quad	.LC12
 858      00000000 
 859 0020 00000000 		.quad	.LC13
 859      00000000 
 860 0028 00000000 		.quad	.LC26
 860      00000000 
 861 0030 00000000 		.quad	.LC27
 861      00000000 
 862 0038 00000000 		.quad	.LC28
 862      00000000 
 863 0040 00000000 		.quad	.LC29
 863      00000000 
 864 0048 00000000 		.quad	0
 864      00000000 
 865              		.section	.rodata.str1.1
 866              	.LC30:
 867 00e9 65766F6C 		.string	"evolution"
 867      7574696F 
 867      6E00
 868              	.LC31:
 869 00f3 6B6D6169 		.string	"kmailservice"
 869      6C736572 
 869      76696365 
 869      00
 870              		.section	.rodata._ZZ11fl_open_uriPKcPciE7readers,"a",@progbits
 871              		.align 32
 874              	_ZZ11fl_open_uriPKcPciE7readers:
 875 0000 00000000 		.quad	.LC2
 875      00000000 
 876 0008 00000000 		.quad	.LC14
 876      00000000 
 877 0010 00000000 		.quad	.LC12
 877      00000000 
 878 0018 00000000 		.quad	.LC13
 878      00000000 
 879 0020 00000000 		.quad	.LC30
 879      00000000 
 880 0028 00000000 		.quad	.LC31
 880      00000000 
 881 0030 00000000 		.quad	0
 881      00000000 
 882              		.section	.rodata.str1.1
 883              	.LC32:
 884 0100 666D00   		.string	"fm"
 885              	.LC33:
 886 0103 6E617574 		.string	"nautilus"
 886      696C7573 
 886      00
 887              		.section	.rodata._ZZ11fl_open_uriPKcPciE8managers,"a",@progbits
 888              		.align 32
 891              	_ZZ11fl_open_uriPKcPciE8managers:
 892 0000 00000000 		.quad	.LC3
 892      00000000 
 893 0008 00000000 		.quad	.LC32
 893      00000000 
 894 0010 00000000 		.quad	.LC17
 894      00000000 
 895 0018 00000000 		.quad	.LC33
 895      00000000 
 896 0020 00000000 		.quad	.LC26
 896      00000000 
 897 0028 00000000 		.quad	0
 897      00000000 
 898              		.section	.rodata.str1.1
 899              	.LC34:
 900 010c 6674703A 		.string	"ftp://"
 900      2F2F00
 901              	.LC35:
 902 0113 68747470 		.string	"http://"
 902      3A2F2F00 
 903              	.LC36:
 904 011b 68747470 		.string	"https://"
 904      733A2F2F 
 904      00
 905              	.LC37:
 906 0124 6E657773 		.string	"news://"
 906      3A2F2F00 
 907              		.section	.rodata._ZZ11fl_open_uriPKcPciE7schemes,"a",@progbits
 908              		.align 32
 911              	_ZZ11fl_open_uriPKcPciE7schemes:
 912 0000 00000000 		.quad	.LC0
 912      00000000 
 913 0008 00000000 		.quad	.LC34
 913      00000000 
 914 0010 00000000 		.quad	.LC35
 914      00000000 
 915 0018 00000000 		.quad	.LC36
 915      00000000 
 916 0020 00000000 		.quad	.LC7
 916      00000000 
 917 0028 00000000 		.quad	.LC37
 917      00000000 
 918 0030 00000000 		.quad	0
 918      00000000 
 919              		.text
 920              	.Letext0:
 921              		.section	.text.unlikely._Z11fl_open_uriPKcPci
 922              	.Letext_cold0:
 923              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 924              		.file 6 "/usr/include/x86_64-linux-gnu/sys/types.h"
 925              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 926              		.file 8 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
 927              		.file 9 "/usr/include/x86_64-linux-gnu/sys/select.h"
 928              		.file 10 "/usr/include/libio.h"
 929              		.file 11 "/usr/include/stdio.h"
 930              		.file 12 "/usr/include/stdlib.h"
 931              		.file 13 "fltk-1.3.4-1/src/flstring.h"
 932              		.file 14 "/usr/include/unistd.h"
 933              		.file 15 "/usr/include/signal.h"
 934              		.file 16 "/usr/include/x86_64-linux-gnu/bits/errno.h"
 935              		.file 17 "/usr/include/x86_64-linux-gnu/sys/wait.h"
 936              		.file 18 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_open_uri.cxx
     /tmp/cc5d4okQ.s:65     .text._Z11fl_open_uriPKcPci:0000000000000000 _Z11fl_open_uriPKcPci
     /tmp/cc5d4okQ.s:911    .rodata._ZZ11fl_open_uriPKcPciE7schemes:0000000000000000 _ZZ11fl_open_uriPKcPciE7schemes
     /tmp/cc5d4okQ.s:891    .rodata._ZZ11fl_open_uriPKcPciE8managers:0000000000000000 _ZZ11fl_open_uriPKcPciE8managers
     /tmp/cc5d4okQ.s:874    .rodata._ZZ11fl_open_uriPKcPciE7readers:0000000000000000 _ZZ11fl_open_uriPKcPciE7readers
     /tmp/cc5d4okQ.s:854    .rodata._ZZ11fl_open_uriPKcPciE8browsers:0000000000000000 _ZZ11fl_open_uriPKcPciE8browsers
     /tmp/cc5d4okQ.s:714    .text._Z13fl_decode_uriPc:0000000000000000 _Z13fl_decode_uriPc
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
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.238.95ea4ce844d9fee903b0cacc7c1e4931
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.75da223233ea088d05b70fad69e90c9e
                           .group:0000000000000000 wm4.stdlib.h.54.0af3535195ddeb87f5c2e8ca307f12bc
                           .group:0000000000000000 wm4.alloca.h.19.edefa922a76c1cbaaf1e416903ba2d1c
                           .group:0000000000000000 wm4.alloca.h.29.156e12058824cc23d961c4d3b13031f6
                           .group:0000000000000000 wm4.errno.h.21.234adedf0a908ba1512bb39778d0c13a
                           .group:0000000000000000 wm4.errnobase.h.2.3ec77d86fa6012e288bd2eb28191253f
                           .group:0000000000000000 wm4.errno.h.6.6707cf97e82b783d19d3d077217dd04e
                           .group:0000000000000000 wm4.errno.h.27.5f4b88dc9507696aecbaa61ffb4828e0
                           .group:0000000000000000 wm4.errno.h.36.afe6c2702b2ada9447adc06c6378ccc9
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
                           .group:0000000000000000 wm4.sigset.h.42.6db9ded582b92f4a354ef746faa6f468
                           .group:0000000000000000 wm4.signal.h.38.4a14efc2703c3c0d68cf889b778c4bb4
                           .group:0000000000000000 wm4.signum.h.22.7d7d95ca4fedc922e16b041ad3ea121f
                           .group:0000000000000000 wm4.time.h.66.fa652aa18ecf92239cee124d5533fe97
                           .group:0000000000000000 wm4.siginfo.h.29.c8cca990a4ed67e10320c5b5e325e2fe
                           .group:0000000000000000 wm4.signal.h.184.a49b773039089889dcf4436e98db5b15
                           .group:0000000000000000 wm4.sigaction.h.36.df07c9e0e47f7c4a9420057185f38c34
                           .group:0000000000000000 wm4.sigcontext.h.19.313573bb6ad2ae4efc9150f741b0d1d4
                           .group:0000000000000000 wm4.sigstack.h.36.385688ed1383a3aea429a07cd7f554d3
                           .group:0000000000000000 wm4.ucontext.h.34.123ce4b0c6375f6e51d116d02583e5a9
                           .group:0000000000000000 wm4.wait.h.91.0c1393b5bffde7324127068b2b8afda8
                           .group:0000000000000000 wm4.fcntl.h.24.62c7e777a8b210e920ccbb92cfe8b9d8
                           .group:0000000000000000 wm4.uio.h.23.aa0898d8f5bb12d9ecd480ebbdbd1a4d
                           .group:0000000000000000 wm4.fcntllinux.h.42.916a07d9174cc0724783a75699766e2c
                           .group:0000000000000000 wm4.fcntl.h.40.8ff0a2b883e8f8c14f135fe2e029942a
                           .group:0000000000000000 wm4.stat.h.23.71443f0579dab3228134d84ad7d61c3e
                           .group:0000000000000000 wm4.fcntl.h.79.1b8e643ad8ec15e80ca5a02cd230a858
                           .group:0000000000000000 wm4.unistd.h.23.a608ae63b1bee638e80d9e2a8598bd8e
                           .group:0000000000000000 wm4.posix_opt.h.20.8587404e00639bdcc5f6a74591f95259
                           .group:0000000000000000 wm4.environments.h.56.c5802092ccc191baeb41f8d355bb878f
                           .group:0000000000000000 wm4.unistd.h.213.4c582e35260d661b081322974b7c1e74
                           .group:0000000000000000 wm4.unistd.h.271.5bc8a6a5109e709e04c40b754b201552
                           .group:0000000000000000 wm4.confname.h.27.6b00117a32f457cc72e5ac810a9adade

UNDEFINED SYMBOLS
strlen
strncmp
getenv
fl_strlcpy
access
__snprintf_chk
fl_strlcat
sigemptyset
sigaddset
sigprocmask
fork
__errno_location
waitpid
sscanf
strerror
close
open
setsid
execv
_exit
__stack_chk_fail
memmove
