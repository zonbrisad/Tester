   1              		.file	"Fl_abort.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL7warningPKcz,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL7warningPKcz,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL7warningPKcz
  10              	.Ltext_cold0:
  11              		.section	.text._ZL7warningPKcz
  13              	_ZL7warningPKcz:
  14              	.LFB163:
  15              		.file 1 "fltk-1.3.4-1/src/Fl_abort.cxx"
   1:fltk-1.3.4-1/src/Fl_abort.cxx **** ...
  16              		.loc 1 57 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4881ECD8 		subq	$216, %rsp
  19      000000
  20              		.cfi_def_cfa_offset 224
  21 0007 84C0     		testb	%al, %al
  22 0009 48897424 		movq	%rsi, 40(%rsp)
  22      28
  23 000e 48895424 		movq	%rdx, 48(%rsp)
  23      30
  24 0013 48894C24 		movq	%rcx, 56(%rsp)
  24      38
  25 0018 4C894424 		movq	%r8, 64(%rsp)
  25      40
  26 001d 4C894C24 		movq	%r9, 72(%rsp)
  26      48
  27 0022 7437     		je	.L2
  28 0024 0F294424 		movaps	%xmm0, 80(%rsp)
  28      50
  29 0029 0F294C24 		movaps	%xmm1, 96(%rsp)
  29      60
  30 002e 0F295424 		movaps	%xmm2, 112(%rsp)
  30      70
  31 0033 0F299C24 		movaps	%xmm3, 128(%rsp)
  31      80000000 
  32 003b 0F29A424 		movaps	%xmm4, 144(%rsp)
  32      90000000 
  33 0043 0F29AC24 		movaps	%xmm5, 160(%rsp)
  33      A0000000 
  34 004b 0F29B424 		movaps	%xmm6, 176(%rsp)
  34      B0000000 
  35 0053 0F29BC24 		movaps	%xmm7, 192(%rsp)
  35      C0000000 
  36              	.L2:
  37              		.loc 1 57 0
  38 005b 64488B04 		movq	%fs:40, %rax
  38      25280000 
  38      00
  39 0064 48894424 		movq	%rax, 24(%rsp)
  39      18
  40 0069 31C0     		xorl	%eax, %eax
  41              		.loc 1 59 0
  42 006b 488D8424 		leaq	224(%rsp), %rax
  42      E0000000 
  43              	.LBB8:
  44              	.LBB9:
  45              		.file 2 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 105:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 106:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # elif !defined __cplusplus
 107:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define printf(...) \
 108:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __printf_chk (__USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 109:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define fprintf(stream, ...) \
 110:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __fprintf_chk (stream, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 111:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
 112:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 113:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 114:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** vprintf (const char *__restrict __fmt, _G_va_list __ap)
 115:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 116:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #ifdef __USE_EXTERN_INLINES
 117:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vfprintf_chk (stdout, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 118:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #else
 119:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vprintf_chk (__USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 120:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
 121:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 122:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 123:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 124:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** vfprintf (FILE *__restrict __stream,
 125:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	  const char *__restrict __fmt, _G_va_list __ap)
 126:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 127:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vfprintf_chk (__stream, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
  46              		.loc 2 127 0
  47 0073 4889FA   		movq	%rdi, %rdx
  48 0076 4889E1   		movq	%rsp, %rcx
  49 0079 BE010000 		movl	$1, %esi
  49      00
  50 007e 488B3D00 		movq	stderr(%rip), %rdi
  50      000000
  51              	.LVL1:
  52              	.LBE9:
  53              	.LBE8:
  54              		.loc 1 59 0
  55 0085 48894424 		movq	%rax, 8(%rsp)
  55      08
  56 008a 488D4424 		leaq	32(%rsp), %rax
  56      20
  57 008f C7042408 		movl	$8, (%rsp)
  57      000000
  58 0096 C7442404 		movl	$48, 4(%rsp)
  58      30000000 
  59 009e 48894424 		movq	%rax, 16(%rsp)
  59      10
  60              	.LVL2:
  61              	.LBB11:
  62              	.LBB10:
  63              		.loc 2 127 0
  64 00a3 E8000000 		call	__vfprintf_chk
  64      00
  65              	.LVL3:
  66              	.LBE10:
  67              	.LBE11:
  68              		.loc 1 62 0
  69 00a8 488B3500 		movq	stderr(%rip), %rsi
  69      000000
  70 00af BF0A0000 		movl	$10, %edi
  70      00
  71 00b4 E8000000 		call	fputc
  71      00
  72              	.LVL4:
  73              		.loc 1 63 0
  74 00b9 488B3D00 		movq	stderr(%rip), %rdi
  74      000000
  75 00c0 E8000000 		call	fflush
  75      00
  76              	.LVL5:
  77              		.loc 1 64 0
  78 00c5 488B4424 		movq	24(%rsp), %rax
  78      18
  79 00ca 64483304 		xorq	%fs:40, %rax
  79      25280000 
  79      00
  80 00d3 7508     		jne	.L6
  81 00d5 4881C4D8 		addq	$216, %rsp
  81      000000
  82              		.cfi_remember_state
  83              		.cfi_def_cfa_offset 8
  84 00dc C3       		ret
  85              	.L6:
  86              		.cfi_restore_state
  87 00dd E8000000 		call	__stack_chk_fail
  87      00
  88              	.LVL6:
  89              		.cfi_endproc
  90              	.LFE163:
  92              		.section	.text.unlikely._ZL7warningPKcz
  93              	.LCOLDE0:
  94              		.section	.text._ZL7warningPKcz
  95              	.LHOTE0:
  96              		.section	.text.unlikely._ZL5errorPKcz,"ax",@progbits
  97              	.LCOLDB1:
  98              		.section	.text._ZL5errorPKcz,"ax",@progbits
  99              	.LHOTB1:
 100              		.p2align 4,,15
 102              	_ZL5errorPKcz:
 103              	.LFB164:
 104              		.loc 1 66 0
 105              		.cfi_startproc
 106              	.LVL7:
 107 0000 4881ECD8 		subq	$216, %rsp
 107      000000
 108              		.cfi_def_cfa_offset 224
 109 0007 84C0     		testb	%al, %al
 110 0009 48897424 		movq	%rsi, 40(%rsp)
 110      28
 111 000e 48895424 		movq	%rdx, 48(%rsp)
 111      30
 112 0013 48894C24 		movq	%rcx, 56(%rsp)
 112      38
 113 0018 4C894424 		movq	%r8, 64(%rsp)
 113      40
 114 001d 4C894C24 		movq	%r9, 72(%rsp)
 114      48
 115 0022 7437     		je	.L8
 116 0024 0F294424 		movaps	%xmm0, 80(%rsp)
 116      50
 117 0029 0F294C24 		movaps	%xmm1, 96(%rsp)
 117      60
 118 002e 0F295424 		movaps	%xmm2, 112(%rsp)
 118      70
 119 0033 0F299C24 		movaps	%xmm3, 128(%rsp)
 119      80000000 
 120 003b 0F29A424 		movaps	%xmm4, 144(%rsp)
 120      90000000 
 121 0043 0F29AC24 		movaps	%xmm5, 160(%rsp)
 121      A0000000 
 122 004b 0F29B424 		movaps	%xmm6, 176(%rsp)
 122      B0000000 
 123 0053 0F29BC24 		movaps	%xmm7, 192(%rsp)
 123      C0000000 
 124              	.L8:
 125              		.loc 1 66 0
 126 005b 64488B04 		movq	%fs:40, %rax
 126      25280000 
 126      00
 127 0064 48894424 		movq	%rax, 24(%rsp)
 127      18
 128 0069 31C0     		xorl	%eax, %eax
 129              		.loc 1 68 0
 130 006b 488D8424 		leaq	224(%rsp), %rax
 130      E0000000 
 131              	.LBB12:
 132              	.LBB13:
 133              		.loc 2 127 0
 134 0073 4889FA   		movq	%rdi, %rdx
 135 0076 4889E1   		movq	%rsp, %rcx
 136 0079 BE010000 		movl	$1, %esi
 136      00
 137 007e 488B3D00 		movq	stderr(%rip), %rdi
 137      000000
 138              	.LVL8:
 139              	.LBE13:
 140              	.LBE12:
 141              		.loc 1 68 0
 142 0085 48894424 		movq	%rax, 8(%rsp)
 142      08
 143 008a 488D4424 		leaq	32(%rsp), %rax
 143      20
 144 008f C7042408 		movl	$8, (%rsp)
 144      000000
 145 0096 C7442404 		movl	$48, 4(%rsp)
 145      30000000 
 146 009e 48894424 		movq	%rax, 16(%rsp)
 146      10
 147              	.LVL9:
 148              	.LBB15:
 149              	.LBB14:
 150              		.loc 2 127 0
 151 00a3 E8000000 		call	__vfprintf_chk
 151      00
 152              	.LVL10:
 153              	.LBE14:
 154              	.LBE15:
 155              		.loc 1 71 0
 156 00a8 488B3500 		movq	stderr(%rip), %rsi
 156      000000
 157 00af BF0A0000 		movl	$10, %edi
 157      00
 158 00b4 E8000000 		call	fputc
 158      00
 159              	.LVL11:
 160              		.loc 1 72 0
 161 00b9 488B3D00 		movq	stderr(%rip), %rdi
 161      000000
 162 00c0 E8000000 		call	fflush
 162      00
 163              	.LVL12:
 164              		.loc 1 73 0
 165 00c5 488B4424 		movq	24(%rsp), %rax
 165      18
 166 00ca 64483304 		xorq	%fs:40, %rax
 166      25280000 
 166      00
 167 00d3 7508     		jne	.L11
 168 00d5 4881C4D8 		addq	$216, %rsp
 168      000000
 169              		.cfi_remember_state
 170              		.cfi_def_cfa_offset 8
 171 00dc C3       		ret
 172              	.L11:
 173              		.cfi_restore_state
 174 00dd E8000000 		call	__stack_chk_fail
 174      00
 175              	.LVL13:
 176              		.cfi_endproc
 177              	.LFE164:
 179              		.section	.text.unlikely._ZL5errorPKcz
 180              	.LCOLDE1:
 181              		.section	.text._ZL5errorPKcz
 182              	.LHOTE1:
 183              		.section	.text.unlikely._ZL5fatalPKcz,"ax",@progbits
 184              	.LCOLDB2:
 185              		.section	.text._ZL5fatalPKcz,"ax",@progbits
 186              	.LHOTB2:
 187              		.p2align 4,,15
 189              	_ZL5fatalPKcz:
 190              	.LFB165:
 191              		.loc 1 75 0
 192              		.cfi_startproc
 193              	.LVL14:
 194 0000 4881ECD8 		subq	$216, %rsp
 194      000000
 195              		.cfi_def_cfa_offset 224
 196 0007 84C0     		testb	%al, %al
 197 0009 48897424 		movq	%rsi, 40(%rsp)
 197      28
 198 000e 48895424 		movq	%rdx, 48(%rsp)
 198      30
 199 0013 48894C24 		movq	%rcx, 56(%rsp)
 199      38
 200 0018 4C894424 		movq	%r8, 64(%rsp)
 200      40
 201 001d 4C894C24 		movq	%r9, 72(%rsp)
 201      48
 202 0022 7437     		je	.L13
 203 0024 0F294424 		movaps	%xmm0, 80(%rsp)
 203      50
 204 0029 0F294C24 		movaps	%xmm1, 96(%rsp)
 204      60
 205 002e 0F295424 		movaps	%xmm2, 112(%rsp)
 205      70
 206 0033 0F299C24 		movaps	%xmm3, 128(%rsp)
 206      80000000 
 207 003b 0F29A424 		movaps	%xmm4, 144(%rsp)
 207      90000000 
 208 0043 0F29AC24 		movaps	%xmm5, 160(%rsp)
 208      A0000000 
 209 004b 0F29B424 		movaps	%xmm6, 176(%rsp)
 209      B0000000 
 210 0053 0F29BC24 		movaps	%xmm7, 192(%rsp)
 210      C0000000 
 211              	.L13:
 212              		.loc 1 75 0
 213 005b 64488B04 		movq	%fs:40, %rax
 213      25280000 
 213      00
 214 0064 48894424 		movq	%rax, 24(%rsp)
 214      18
 215 0069 31C0     		xorl	%eax, %eax
 216              		.loc 1 77 0
 217 006b 488D8424 		leaq	224(%rsp), %rax
 217      E0000000 
 218              	.LBB16:
 219              	.LBB17:
 220              		.loc 2 127 0
 221 0073 4889FA   		movq	%rdi, %rdx
 222 0076 4889E1   		movq	%rsp, %rcx
 223 0079 BE010000 		movl	$1, %esi
 223      00
 224 007e 488B3D00 		movq	stderr(%rip), %rdi
 224      000000
 225              	.LVL15:
 226              	.LBE17:
 227              	.LBE16:
 228              		.loc 1 77 0
 229 0085 48894424 		movq	%rax, 8(%rsp)
 229      08
 230 008a 488D4424 		leaq	32(%rsp), %rax
 230      20
 231 008f C7042408 		movl	$8, (%rsp)
 231      000000
 232 0096 C7442404 		movl	$48, 4(%rsp)
 232      30000000 
 233 009e 48894424 		movq	%rax, 16(%rsp)
 233      10
 234              	.LVL16:
 235              	.LBB19:
 236              	.LBB18:
 237              		.loc 2 127 0
 238 00a3 E8000000 		call	__vfprintf_chk
 238      00
 239              	.LVL17:
 240              	.LBE18:
 241              	.LBE19:
 242              		.loc 1 80 0
 243 00a8 488B3500 		movq	stderr(%rip), %rsi
 243      000000
 244 00af BF0A0000 		movl	$10, %edi
 244      00
 245 00b4 E8000000 		call	fputc
 245      00
 246              	.LVL18:
 247              		.loc 1 81 0
 248 00b9 488B3D00 		movq	stderr(%rip), %rdi
 248      000000
 249 00c0 E8000000 		call	fflush
 249      00
 250              	.LVL19:
 251              		.loc 1 82 0
 252 00c5 BF010000 		movl	$1, %edi
 252      00
 253 00ca E8000000 		call	exit
 253      00
 254              	.LVL20:
 255              		.cfi_endproc
 256              	.LFE165:
 258              		.section	.text.unlikely._ZL5fatalPKcz
 259              	.LCOLDE2:
 260              		.section	.text._ZL5fatalPKcz
 261              	.LHOTE2:
 262              		.globl	_ZN2Fl5fatalE
 263              		.section	.data._ZN2Fl5fatalE,"aw",@progbits
 264              		.align 8
 267              	_ZN2Fl5fatalE:
 268 0000 00000000 		.quad	_ZL5fatalPKcz
 268      00000000 
 269              		.globl	_ZN2Fl5errorE
 270              		.section	.data._ZN2Fl5errorE,"aw",@progbits
 271              		.align 8
 274              	_ZN2Fl5errorE:
 275 0000 00000000 		.quad	_ZL5errorPKcz
 275      00000000 
 276              		.globl	_ZN2Fl7warningE
 277              		.section	.data._ZN2Fl7warningE,"aw",@progbits
 278              		.align 8
 281              	_ZN2Fl7warningE:
 282 0000 00000000 		.quad	_ZL7warningPKcz
 282      00000000 
 283              		.text
 284              	.Letext0:
 285              		.section	.text.unlikely._ZL7warningPKcz
 286              	.Letext_cold0:
 287              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 288              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 289              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 290              		.file 6 "/usr/include/stdio.h"
 291              		.file 7 "/usr/include/libio.h"
 292              		.file 8 "<built-in>"
 293              		.file 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h"
 294              		.file 10 "fltk-1.3.4-1/FL/Enumerations.H"
 295              		.file 11 "fltk-1.3.4-1/FL/Fl.H"
 296              		.file 12 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_abort.cxx
     /tmp/ccrTLM69.s:13     .text._ZL7warningPKcz:0000000000000000 _ZL7warningPKcz
     /tmp/ccrTLM69.s:102    .text._ZL5errorPKcz:0000000000000000 _ZL5errorPKcz
     /tmp/ccrTLM69.s:189    .text._ZL5fatalPKcz:0000000000000000 _ZL5fatalPKcz
     /tmp/ccrTLM69.s:267    .data._ZN2Fl5fatalE:0000000000000000 _ZN2Fl5fatalE
     /tmp/ccrTLM69.s:274    .data._ZN2Fl5errorE:0000000000000000 _ZN2Fl5errorE
     /tmp/ccrTLM69.s:281    .data._ZN2Fl7warningE:0000000000000000 _ZN2Fl7warningE
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
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
stderr
__vfprintf_chk
fputc
fflush
__stack_chk_fail
exit
