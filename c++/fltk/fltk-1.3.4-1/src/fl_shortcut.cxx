   1              		.file	"fl_shortcut.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL16add_modifier_keyPcPKcS1_.constprop.4,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL16add_modifier_keyPcPKcS1_.constprop.4,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL16add_modifier_keyPcPKcS1_.constprop.4
  10              	.Ltext_cold0:
  11              		.section	.text._ZL16add_modifier_keyPcPKcS1_.constprop.4
  13              	_ZL16add_modifier_keyPcPKcS1_.constprop.4:
  14              	.LFB504:
  15              		.file 1 "fltk-1.3.4-1/src/fl_shortcut.cxx"
   1:fltk-1.3.4-1/src/fl_shortcut.cxx **** ...
  16              		.loc 1 216 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4154     		pushq	%r12
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 12, -16
  22 0002 55       		pushq	%rbp
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 6, -24
  25 0003 4889FD   		movq	%rdi, %rbp
  26 0006 53       		pushq	%rbx
  27              		.cfi_def_cfa_offset 32
  28              		.cfi_offset 3, -32
  29              		.loc 1 217 0
  30 0007 4889F7   		movq	%rsi, %rdi
  31              	.LVL1:
  32              		.loc 1 216 0
  33 000a 4989F4   		movq	%rsi, %r12
  34              		.loc 1 217 0
  35 000d E8000000 		call	strlen
  35      00
  36              	.LVL2:
  37              		.loc 1 218 0
  38 0012 4863D8   		movslq	%eax, %rbx
  39 0015 4801EB   		addq	%rbp, %rbx
  40 0018 4881FB00 		cmpq	$_ZZ17fl_shortcut_labeljPPKcE3buf+60, %rbx
  40      000000
  41 001f 7647     		jbe	.L2
  42              		.loc 1 219 0
  43 0021 488D5504 		leaq	4(%rbp), %rdx
  44 0025 4889E8   		movq	%rbp, %rax
  45              	.LVL3:
  46 0028 4881FA00 		cmpq	$_ZZ17fl_shortcut_labeljPPKcE3buf+60, %rdx
  46      000000
  47 002f 760F     		jbe	.L10
  48              	.LVL4:
  49              	.L3:
  50              		.loc 1 235 0
  51 0031 5B       		popq	%rbx
  52              		.cfi_remember_state
  53              		.cfi_def_cfa_offset 24
  54 0032 5D       		popq	%rbp
  55              		.cfi_def_cfa_offset 16
  56 0033 415C     		popq	%r12
  57              		.cfi_def_cfa_offset 8
  58              	.LVL5:
  59 0035 C3       		ret
  60              	.LVL6:
  61 0036 662E0F1F 		.p2align 4,,10
  61      84000000 
  61      0000
  62              		.p2align 3
  63              	.L10:
  64              		.cfi_restore_state
  65              		.loc 1 221 0
  66 0040 488D5D03 		leaq	3(%rbp), %rbx
  67              	.LBB52:
  68              	.LBB53:
  69              		.file 2 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
  91:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  92:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
  93:/usr/include/x86_64-linux-gnu/bits/string3.h **** #ifdef __USE_MISC
  94:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void
  95:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (bcopy (const void *__src, void *__dest, size_t __len))
  96:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
  97:/usr/include/x86_64-linux-gnu/bits/string3.h ****   (void) __builtin___memmove_chk (__dest, __src, __len, __bos0 (__dest));
  98:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
  99:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 100:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function void
 101:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (bzero (void *__dest, size_t __len))
 102:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 103:/usr/include/x86_64-linux-gnu/bits/string3.h ****   (void) __builtin___memset_chk (__dest, '\0', __len, __bos0 (__dest));
 104:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 105:/usr/include/x86_64-linux-gnu/bits/string3.h **** #endif
 106:/usr/include/x86_64-linux-gnu/bits/string3.h **** 
 107:/usr/include/x86_64-linux-gnu/bits/string3.h **** __fortify_function char *
 108:/usr/include/x86_64-linux-gnu/bits/string3.h **** __NTH (strcpy (char *__restrict __dest, const char *__restrict __src))
 109:/usr/include/x86_64-linux-gnu/bits/string3.h **** {
 110:/usr/include/x86_64-linux-gnu/bits/string3.h ****   return __builtin___strcpy_chk (__dest, __src, __bos (__dest));
  70              		.loc 2 110 0
  71 0044 C745002E 		movl	$3026478, 0(%rbp)
  71      2E2E00
  72              	.LVL7:
  73              	.LBE53:
  74              	.LBE52:
  75              		.loc 1 228 0
  76 004b 0FB643FF 		movzbl	-1(%rbx), %eax
  77 004f 3C5C     		cmpb	$92, %al
  78 0051 742C     		je	.L11
  79              	.L5:
  80              		.loc 1 230 0
  81 0053 3C2B     		cmpb	$43, %al
  82 0055 7439     		je	.L7
  83              	.LVL8:
  84              		.loc 1 233 0
  85 0057 C6032B   		movb	$43, (%rbx)
  86 005a 488D4301 		leaq	1(%rbx), %rax
  87              	.LVL9:
  88              		.loc 1 235 0
  89 005e 5B       		popq	%rbx
  90              		.cfi_remember_state
  91              		.cfi_def_cfa_offset 24
  92 005f 5D       		popq	%rbp
  93              		.cfi_def_cfa_offset 16
  94 0060 415C     		popq	%r12
  95              		.cfi_def_cfa_offset 8
  96              	.LVL10:
  97 0062 C3       		ret
  98              	.LVL11:
  99              		.p2align 4,,10
 100 0063 0F1F4400 		.p2align 3
 100      00
 101              	.L2:
 102              		.cfi_restore_state
 103              	.LBB54:
 104              	.LBB55:
 105              		.loc 2 110 0
 106 0068 488D5001 		leaq	1(%rax), %rdx
 107 006c 4C89E6   		movq	%r12, %rsi
 108 006f 4889EF   		movq	%rbp, %rdi
 109 0072 E8000000 		call	memcpy
 109      00
 110              	.LVL12:
 111              	.LBE55:
 112              	.LBE54:
 113              		.loc 1 228 0
 114 0077 0FB643FF 		movzbl	-1(%rbx), %eax
 115 007b 3C5C     		cmpb	$92, %al
 116 007d 75D4     		jne	.L5
 117              	.L11:
 118              	.LVL13:
 119              		.loc 1 229 0
 120 007f 488D43FF 		leaq	-1(%rbx), %rax
 121              	.LVL14:
 122              		.loc 1 235 0
 123 0083 5B       		popq	%rbx
 124              		.cfi_remember_state
 125              		.cfi_def_cfa_offset 24
 126 0084 5D       		popq	%rbp
 127              		.cfi_def_cfa_offset 16
 128 0085 415C     		popq	%r12
 129              		.cfi_def_cfa_offset 8
 130              	.LVL15:
 131 0087 C3       		ret
 132              	.LVL16:
 133 0088 0F1F8400 		.p2align 4,,10
 133      00000000 
 134              		.p2align 3
 135              	.L7:
 136              		.cfi_restore_state
 137              		.loc 1 230 0
 138 0090 4889D8   		movq	%rbx, %rax
 139 0093 EB9C     		jmp	.L3
 140              		.cfi_endproc
 141              	.LFE504:
 143              		.section	.text.unlikely._ZL16add_modifier_keyPcPKcS1_.constprop.4
 144              	.LCOLDE0:
 145              		.section	.text._ZL16add_modifier_keyPcPKcS1_.constprop.4
 146              	.LHOTE0:
 147              		.section	.rodata.str1.1,"aMS",@progbits,1
 148              	.LC1:
 149 0000 456E7465 		.string	"Enter"
 149      7200
 150              		.section	.text.unlikely._Z17fl_shortcut_labeljPPKc.part.2,"ax",@progbits
 151              	.LCOLDB2:
 152              		.section	.text._Z17fl_shortcut_labeljPPKc.part.2,"ax",@progbits
 153              	.LHOTB2:
 154              		.p2align 4,,15
 156              	_Z17fl_shortcut_labeljPPKc.part.2:
 157              	.LFB502:
 158              		.loc 1 247 0
 159              		.cfi_startproc
 160              	.LVL17:
 161 0000 4155     		pushq	%r13
 162              		.cfi_def_cfa_offset 16
 163              		.cfi_offset 13, -16
 164 0002 4154     		pushq	%r12
 165              		.cfi_def_cfa_offset 24
 166              		.cfi_offset 12, -24
 167 0004 4989F5   		movq	%rsi, %r13
 168 0007 55       		pushq	%rbp
 169              		.cfi_def_cfa_offset 32
 170              		.cfi_offset 6, -32
 171 0008 53       		pushq	%rbx
 172              		.cfi_def_cfa_offset 40
 173              		.cfi_offset 3, -40
 174              		.loc 1 254 0
 175 0009 0FB7EF   		movzwl	%di, %ebp
 176              	.LVL18:
 177              		.loc 1 247 0
 178 000c 89FB     		movl	%edi, %ebx
 179              		.loc 1 255 0
 180 000e 89EF     		movl	%ebp, %edi
 181              	.LVL19:
 182              		.loc 1 249 0
 183 0010 41BC0000 		movl	$_ZZ17fl_shortcut_labeljPPKcE3buf, %r12d
 183      0000
 184              		.loc 1 247 0
 185 0016 4883EC08 		subq	$8, %rsp
 186              		.cfi_def_cfa_offset 48
 187              		.loc 1 255 0
 188 001a E8000000 		call	fl_tolower
 188      00
 189              	.LVL20:
 190              		.loc 1 256 0
 191 001f 89DA     		movl	%ebx, %edx
 192 0021 81CA0000 		orl	$65536, %edx
 192      0100
 193 0027 39C5     		cmpl	%eax, %ebp
 194 0029 0F45DA   		cmovne	%edx, %ebx
 195              	.LVL21:
 196              		.loc 1 264 0
 197 002c F7C30000 		testl	$262144, %ebx
 197      0400
 198 0032 0F85F800 		jne	.L45
 198      0000
 199              	.L14:
 200              	.LVL22:
 201              		.loc 1 265 0
 202 0038 F7C30000 		testl	$524288, %ebx
 202      0800
 203 003e 0F85D400 		jne	.L46
 203      0000
 204              	.L15:
 205              		.loc 1 266 0
 206 0044 F7C30000 		testl	$65536, %ebx
 206      0100
 207 004a 0F859000 		jne	.L47
 207      0000
 208              		.loc 1 267 0
 209 0050 81E30000 		andl	$4194304, %ebx
 209      4000
 210              	.LVL23:
 211 0056 0F85A200 		jne	.L48
 211      0000
 212              	.L17:
 213              		.loc 1 268 0
 214 005c 4D85ED   		testq	%r13, %r13
 215 005f 7404     		je	.L18
 216 0061 4D896500 		movq	%r12, 0(%r13)
 217              	.L18:
 218              		.loc 1 308 0
 219 0065 81FD0DFF 		cmpl	$65293, %ebp
 219      0000
 220 006b 7443     		je	.L25
 221 006d 83FD0D   		cmpl	$13, %ebp
 222 0070 743E     		je	.L25
 223              		.loc 1 309 0
 224 0072 8D45DF   		leal	-33(%rbp), %eax
 225 0075 3DDE0000 		cmpl	$222, %eax
 225      00
 226 007a 0F87D000 		ja	.L20
 226      0000
 227              	.L22:
 228              		.loc 1 312 0
 229 0080 89EF     		movl	%ebp, %edi
 230 0082 E8000000 		call	fl_toupper
 230      00
 231              	.LVL24:
 232 0087 4C89E6   		movq	%r12, %rsi
 233 008a 89C7     		movl	%eax, %edi
 234 008c E8000000 		call	fl_utf8encode
 234      00
 235              	.LVL25:
 236              		.loc 1 313 0
 237 0091 4898     		cltq
 238 0093 41C60404 		movb	$0, (%r12,%rax)
 238      00
 239              		.loc 1 324 0
 240 0098 4883C408 		addq	$8, %rsp
 241              		.cfi_remember_state
 242              		.cfi_def_cfa_offset 40
 243              		.loc 1 314 0
 244 009c B8000000 		movl	$_ZZ17fl_shortcut_labeljPPKcE3buf, %eax
 244      00
 245              	.LVL26:
 246              		.loc 1 324 0
 247 00a1 5B       		popq	%rbx
 248              		.cfi_def_cfa_offset 32
 249 00a2 5D       		popq	%rbp
 250              		.cfi_def_cfa_offset 24
 251              	.LVL27:
 252 00a3 415C     		popq	%r12
 253              		.cfi_def_cfa_offset 16
 254 00a5 415D     		popq	%r13
 255              		.cfi_def_cfa_offset 8
 256              	.LVL28:
 257 00a7 C3       		ret
 258              	.LVL29:
 259 00a8 0F1F8400 		.p2align 4,,10
 259      00000000 
 260              		.p2align 3
 261              	.L25:
 262              		.cfi_restore_state
 263              		.loc 1 316 0
 264 00b0 4981FC00 		cmpq	$_ZZ17fl_shortcut_labeljPPKcE3buf, %r12
 264      000000
 265              		.loc 1 308 0
 266 00b7 BE000000 		movl	$.LC1, %esi
 266      00
 267              	.LVL30:
 268              		.loc 1 316 0
 269 00bc 0F87AE00 		ja	.L49
 269      0000
 270              	.L23:
 271              		.loc 1 320 0
 272 00c2 4D85ED   		testq	%r13, %r13
 273 00c5 0F84C500 		je	.L26
 273      0000
 274 00cb 49897500 		movq	%rsi, 0(%r13)
 275 00cf 4889F0   		movq	%rsi, %rax
 276              	.LVL31:
 277              	.L21:
 278              		.loc 1 324 0
 279 00d2 4883C408 		addq	$8, %rsp
 280              		.cfi_remember_state
 281              		.cfi_def_cfa_offset 40
 282 00d6 5B       		popq	%rbx
 283              		.cfi_def_cfa_offset 32
 284 00d7 5D       		popq	%rbp
 285              		.cfi_def_cfa_offset 24
 286              	.LVL32:
 287 00d8 415C     		popq	%r12
 288              		.cfi_def_cfa_offset 16
 289              	.LVL33:
 290 00da 415D     		popq	%r13
 291              		.cfi_def_cfa_offset 8
 292              	.LVL34:
 293 00dc C3       		ret
 294              	.LVL35:
 295 00dd 0F1F00   		.p2align 4,,10
 296              		.p2align 3
 297              	.L47:
 298              		.cfi_restore_state
 299              		.loc 1 266 0
 300 00e0 488B3500 		movq	fl_local_shift(%rip), %rsi
 300      000000
 301 00e7 4C89E7   		movq	%r12, %rdi
 302 00ea E8000000 		call	_ZL16add_modifier_keyPcPKcS1_.constprop.4
 302      00
 303              	.LVL36:
 304              		.loc 1 267 0
 305 00ef 81E30000 		andl	$4194304, %ebx
 305      4000
 306              	.LVL37:
 307              		.loc 1 266 0
 308 00f5 4989C4   		movq	%rax, %r12
 309              	.LVL38:
 310              		.loc 1 267 0
 311 00f8 0F845EFF 		je	.L17
 311      FFFF
 312              	.LVL39:
 313              	.L48:
 314 00fe 488B3500 		movq	fl_local_meta(%rip), %rsi
 314      000000
 315 0105 4C89E7   		movq	%r12, %rdi
 316 0108 E8000000 		call	_ZL16add_modifier_keyPcPKcS1_.constprop.4
 316      00
 317              	.LVL40:
 318 010d 4989C4   		movq	%rax, %r12
 319              	.LVL41:
 320 0110 E947FFFF 		jmp	.L17
 320      FF
 321              	.LVL42:
 322              		.p2align 4,,10
 323 0115 0F1F00   		.p2align 3
 324              	.L46:
 325              		.loc 1 265 0
 326 0118 488B3500 		movq	fl_local_alt(%rip), %rsi
 326      000000
 327 011f 4C89E7   		movq	%r12, %rdi
 328 0122 E8000000 		call	_ZL16add_modifier_keyPcPKcS1_.constprop.4
 328      00
 329              	.LVL43:
 330 0127 4989C4   		movq	%rax, %r12
 331              	.LVL44:
 332 012a E915FFFF 		jmp	.L15
 332      FF
 333              	.LVL45:
 334 012f 90       		.p2align 4,,10
 335              		.p2align 3
 336              	.L45:
 337              		.loc 1 264 0
 338 0130 488B3500 		movq	fl_local_ctrl(%rip), %rsi
 338      000000
 339 0137 4C89E7   		movq	%r12, %rdi
 340 013a E8000000 		call	_ZL16add_modifier_keyPcPKcS1_.constprop.4
 340      00
 341              	.LVL46:
 342 013f 4989C4   		movq	%rax, %r12
 343              	.LVL47:
 344 0142 E9F1FEFF 		jmp	.L14
 344      FF
 345              	.LVL48:
 346 0147 660F1F84 		.p2align 4,,10
 346      00000000 
 346      00
 347              		.p2align 3
 348              	.L20:
 349              		.loc 1 310 0
 350 0150 89EF     		movl	%ebp, %edi
 351 0152 E8000000 		call	XKeysymToString
 351      00
 352              	.LVL49:
 353              		.loc 1 311 0
 354 0157 4885C0   		testq	%rax, %rax
 355              		.loc 1 310 0
 356 015a 4889C6   		movq	%rax, %rsi
 357              	.LVL50:
 358              		.loc 1 311 0
 359 015d 0F841DFF 		je	.L22
 359      FFFF
 360              		.loc 1 316 0
 361 0163 4981FC00 		cmpq	$_ZZ17fl_shortcut_labeljPPKcE3buf, %r12
 361      000000
 362 016a 0F8652FF 		jbe	.L23
 362      FFFF
 363              	.LVL51:
 364              	.L49:
 365              	.LBB56:
 366              	.LBB57:
 367              		.loc 2 110 0
 368 0170 4C89E7   		movq	%r12, %rdi
 369 0173 E8000000 		call	strcpy
 369      00
 370              	.LVL52:
 371              	.LBE57:
 372              	.LBE56:
 373              		.loc 1 324 0
 374 0178 4883C408 		addq	$8, %rsp
 375              		.cfi_remember_state
 376              		.cfi_def_cfa_offset 40
 377              		.loc 1 318 0
 378 017c B8000000 		movl	$_ZZ17fl_shortcut_labeljPPKcE3buf, %eax
 378      00
 379              		.loc 1 324 0
 380 0181 5B       		popq	%rbx
 381              		.cfi_def_cfa_offset 32
 382 0182 5D       		popq	%rbp
 383              		.cfi_def_cfa_offset 24
 384              	.LVL53:
 385 0183 415C     		popq	%r12
 386              		.cfi_def_cfa_offset 16
 387              	.LVL54:
 388 0185 415D     		popq	%r13
 389              		.cfi_def_cfa_offset 8
 390              	.LVL55:
 391 0187 C3       		ret
 392              	.LVL56:
 393 0188 0F1F8400 		.p2align 4,,10
 393      00000000 
 394              		.p2align 3
 395              	.L26:
 396              		.cfi_restore_state
 397              		.loc 1 320 0
 398 0190 4889F0   		movq	%rsi, %rax
 399 0193 E93AFFFF 		jmp	.L21
 399      FF
 400              		.cfi_endproc
 401              	.LFE502:
 403              		.section	.text.unlikely._Z17fl_shortcut_labeljPPKc.part.2
 404              	.LCOLDE2:
 405              		.section	.text._Z17fl_shortcut_labeljPPKc.part.2
 406              	.LHOTE2:
 407              		.section	.text.unlikely._ZN2Fl13test_shortcutEj,"ax",@progbits
 408              		.align 2
 409              	.LCOLDB3:
 410              		.section	.text._ZN2Fl13test_shortcutEj,"ax",@progbits
 411              	.LHOTB3:
 412              		.align 2
 413              		.p2align 4,,15
 414              		.globl	_ZN2Fl13test_shortcutEj
 416              	_ZN2Fl13test_shortcutEj:
 417              	.LFB492:
 418              		.loc 1 54 0
 419              		.cfi_startproc
 420              	.LVL57:
 421              		.loc 1 55 0
 422 0000 85FF     		testl	%edi, %edi
 423 0002 750C     		jne	.L70
 424              		.loc 1 82 0
 425 0004 31C0     		xorl	%eax, %eax
 426              		.loc 1 83 0
 427 0006 C3       		ret
 428 0007 660F1F84 		.p2align 4,,10
 428      00000000 
 428      00
 429              		.p2align 3
 430              	.L70:
 431              		.loc 1 54 0
 432 0010 55       		pushq	%rbp
 433              		.cfi_def_cfa_offset 16
 434              		.cfi_offset 6, -16
 435 0011 53       		pushq	%rbx
 436              		.cfi_def_cfa_offset 24
 437              		.cfi_offset 3, -24
 438              		.loc 1 57 0
 439 0012 0FB7EF   		movzwl	%di, %ebp
 440              	.LVL58:
 441 0015 89FB     		movl	%edi, %ebx
 442              		.loc 1 58 0
 443 0017 89EF     		movl	%ebp, %edi
 444              	.LVL59:
 445              		.loc 1 54 0
 446 0019 4883EC08 		subq	$8, %rsp
 447              		.cfi_def_cfa_offset 32
 448              		.loc 1 58 0
 449 001d E8000000 		call	fl_tolower
 449      00
 450              	.LVL60:
 451              		.loc 1 59 0
 452 0022 89DA     		movl	%ebx, %edx
 453 0024 81CA0000 		orl	$65536, %edx
 453      0100
 454 002a 39C5     		cmpl	%eax, %ebp
 455              	.LBB58:
 456              	.LBB59:
 457              		.file 3 "fltk-1.3.4-1/FL/Fl.H"
   1:fltk-1.3.4-1/FL/Fl.H **** //
   2:fltk-1.3.4-1/FL/Fl.H **** // "$Id: Fl.H 11945 2016-09-16 09:11:48Z manolo $"
   3:fltk-1.3.4-1/FL/Fl.H **** //
   4:fltk-1.3.4-1/FL/Fl.H **** // Main header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl.H **** //
   6:fltk-1.3.4-1/FL/Fl.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl.H **** //
   8:fltk-1.3.4-1/FL/Fl.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl.H **** //
  12:fltk-1.3.4-1/FL/Fl.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl.H **** //
  14:fltk-1.3.4-1/FL/Fl.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl.H **** //
  16:fltk-1.3.4-1/FL/Fl.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl.H **** //
  18:fltk-1.3.4-1/FL/Fl.H **** 
  19:fltk-1.3.4-1/FL/Fl.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl.H ****     Fl static class.
  21:fltk-1.3.4-1/FL/Fl.H ****  */
  22:fltk-1.3.4-1/FL/Fl.H **** 
  23:fltk-1.3.4-1/FL/Fl.H **** #ifndef Fl_H
  24:fltk-1.3.4-1/FL/Fl.H **** #  define Fl_H
  25:fltk-1.3.4-1/FL/Fl.H **** 
  26:fltk-1.3.4-1/FL/Fl.H **** #include <FL/Fl_Export.H>
  27:fltk-1.3.4-1/FL/Fl.H **** 
  28:fltk-1.3.4-1/FL/Fl.H **** #ifdef FLTK_HAVE_CAIRO
  29:fltk-1.3.4-1/FL/Fl.H **** # include <FL/Fl_Cairo.H>
  30:fltk-1.3.4-1/FL/Fl.H **** #endif
  31:fltk-1.3.4-1/FL/Fl.H **** 
  32:fltk-1.3.4-1/FL/Fl.H **** #  include "fl_utf8.h"
  33:fltk-1.3.4-1/FL/Fl.H **** #  include "Enumerations.H"
  34:fltk-1.3.4-1/FL/Fl.H **** #  ifndef Fl_Object
  35:fltk-1.3.4-1/FL/Fl.H **** #    define Fl_Object Fl_Widget	/**< for back compatibility - use Fl_Widget! */
  36:fltk-1.3.4-1/FL/Fl.H **** #  endif
  37:fltk-1.3.4-1/FL/Fl.H **** 
  38:fltk-1.3.4-1/FL/Fl.H **** #  ifdef check
  39:fltk-1.3.4-1/FL/Fl.H **** #    undef check
  40:fltk-1.3.4-1/FL/Fl.H **** #  endif
  41:fltk-1.3.4-1/FL/Fl.H **** 
  42:fltk-1.3.4-1/FL/Fl.H **** 
  43:fltk-1.3.4-1/FL/Fl.H **** class Fl_Widget;
  44:fltk-1.3.4-1/FL/Fl.H **** class Fl_Window;
  45:fltk-1.3.4-1/FL/Fl.H **** class Fl_Image;
  46:fltk-1.3.4-1/FL/Fl.H **** struct Fl_Label;
  47:fltk-1.3.4-1/FL/Fl.H **** 
  48:fltk-1.3.4-1/FL/Fl.H **** // Keep avoiding having the socket deps at that level but mke sure it will work in both 32 & 64 bit
  49:fltk-1.3.4-1/FL/Fl.H **** #if defined(WIN32) && !defined(__CYGWIN__)
  50:fltk-1.3.4-1/FL/Fl.H **** # if defined(_WIN64)
  51:fltk-1.3.4-1/FL/Fl.H **** #  define FL_SOCKET unsigned __int64
  52:fltk-1.3.4-1/FL/Fl.H **** # else
  53:fltk-1.3.4-1/FL/Fl.H **** #  define FL_SOCKET int
  54:fltk-1.3.4-1/FL/Fl.H **** # endif
  55:fltk-1.3.4-1/FL/Fl.H **** #else
  56:fltk-1.3.4-1/FL/Fl.H **** # define FL_SOCKET int
  57:fltk-1.3.4-1/FL/Fl.H **** #endif
  58:fltk-1.3.4-1/FL/Fl.H **** 
  59:fltk-1.3.4-1/FL/Fl.H **** 
  60:fltk-1.3.4-1/FL/Fl.H **** // Pointers you can use to change FLTK to a foreign language.
  61:fltk-1.3.4-1/FL/Fl.H **** // Note: Similar pointers are defined in FL/fl_ask.H and src/fl_ask.cxx
  62:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_ctrl;
  63:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_meta;
  64:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_alt;
  65:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_shift;
  66:fltk-1.3.4-1/FL/Fl.H **** 
  67:fltk-1.3.4-1/FL/Fl.H **** /** \defgroup  callback_functions Callback function typedefs
  68:fltk-1.3.4-1/FL/Fl.H ****  \brief Typedefs defined in <FL/Fl.H> for callback or handler functions passed as function paramete
  69:fltk-1.3.4-1/FL/Fl.H **** 
  70:fltk-1.3.4-1/FL/Fl.H ****     FLTK uses callback functions as parameters for some function calls, e.g. to
  71:fltk-1.3.4-1/FL/Fl.H ****     set up global event handlers (Fl::add_handler()), to add a timeout handler
  72:fltk-1.3.4-1/FL/Fl.H ****     (Fl::add_timeout()), and many more.
  73:fltk-1.3.4-1/FL/Fl.H **** 
  74:fltk-1.3.4-1/FL/Fl.H ****     The typedefs defined in this group describe the function parameters used to set
  75:fltk-1.3.4-1/FL/Fl.H ****     up or clear the callback functions and should also be referenced to define the
  76:fltk-1.3.4-1/FL/Fl.H ****     callback function to handle such events in the user's code.
  77:fltk-1.3.4-1/FL/Fl.H **** 
  78:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::add_handler(), Fl::add_timeout(), Fl::repeat_timeout(),
  79:fltk-1.3.4-1/FL/Fl.H **** 	 Fl::remove_timeout() and others
  80:fltk-1.3.4-1/FL/Fl.H ****   @{ */
  81:fltk-1.3.4-1/FL/Fl.H **** 
  82:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some label drawing functions passed as parameters */
  83:fltk-1.3.4-1/FL/Fl.H **** typedef void (Fl_Label_Draw_F)(const Fl_Label *label, int x, int y, int w, int h, Fl_Align align);
  84:fltk-1.3.4-1/FL/Fl.H **** 
  85:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some label measurement functions passed as parameters */
  86:fltk-1.3.4-1/FL/Fl.H **** typedef void (Fl_Label_Measure_F)(const Fl_Label *label, int &width, int &height);
  87:fltk-1.3.4-1/FL/Fl.H **** 
  88:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some box drawing functions passed as parameters */
  89:fltk-1.3.4-1/FL/Fl.H **** typedef void (Fl_Box_Draw_F)(int x, int y, int w, int h, Fl_Color color);
  90:fltk-1.3.4-1/FL/Fl.H **** 
  91:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some timeout callback functions passed as parameters */
  92:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Timeout_Handler)(void *data);
  93:fltk-1.3.4-1/FL/Fl.H **** 
  94:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some wakeup callback functions passed as parameters */
  95:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Awake_Handler)(void *data);
  96:fltk-1.3.4-1/FL/Fl.H **** 
  97:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_idle callback functions passed as parameters */
  98:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Idle_Handler)(void *data);
  99:fltk-1.3.4-1/FL/Fl.H **** 
 100:fltk-1.3.4-1/FL/Fl.H **** /** Signature of set_idle callback functions passed as parameters */
 101:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Old_Idle_Handler)();
 102:fltk-1.3.4-1/FL/Fl.H **** 
 103:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_fd functions passed as parameters */
 104:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_FD_Handler)(FL_SOCKET fd, void *data);
 105:fltk-1.3.4-1/FL/Fl.H **** 
 106:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_handler functions passed as parameters */
 107:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_Event_Handler)(int event);
 108:fltk-1.3.4-1/FL/Fl.H **** 
 109:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_system_handler functions passed as parameters */
 110:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_System_Handler)(void *event, void *data);
 111:fltk-1.3.4-1/FL/Fl.H **** 
 112:fltk-1.3.4-1/FL/Fl.H **** /** Signature of set_abort functions passed as parameters */
 113:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Abort_Handler)(const char *format,...);
 114:fltk-1.3.4-1/FL/Fl.H **** 
 115:fltk-1.3.4-1/FL/Fl.H **** /** Signature of set_atclose functions passed as parameters */
 116:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Atclose_Handler)(Fl_Window *window, void *data);
 117:fltk-1.3.4-1/FL/Fl.H **** 
 118:fltk-1.3.4-1/FL/Fl.H **** /** Signature of args functions passed as parameters */
 119:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_Args_Handler)(int argc, char **argv, int &i);
 120:fltk-1.3.4-1/FL/Fl.H **** 
 121:fltk-1.3.4-1/FL/Fl.H **** /** Signature of event_dispatch functions passed as parameters.
 122:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::event_dispatch(Fl_Event_Dispatch) */
 123:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_Event_Dispatch)(int event, Fl_Window *w);
 124:fltk-1.3.4-1/FL/Fl.H **** 
 125:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_clipboard_notify functions passed as parameters */
 126:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Clipboard_Notify_Handler)(int source, void *data);
 127:fltk-1.3.4-1/FL/Fl.H **** 
 128:fltk-1.3.4-1/FL/Fl.H **** /** @} */ /* group callback_functions */
 129:fltk-1.3.4-1/FL/Fl.H **** 
 130:fltk-1.3.4-1/FL/Fl.H **** 
 131:fltk-1.3.4-1/FL/Fl.H **** /**
 132:fltk-1.3.4-1/FL/Fl.H ****   The Fl is the FLTK global (static) class containing
 133:fltk-1.3.4-1/FL/Fl.H ****   state information and global methods for the current application.
 134:fltk-1.3.4-1/FL/Fl.H **** */
 135:fltk-1.3.4-1/FL/Fl.H **** class FL_EXPORT Fl {
 136:fltk-1.3.4-1/FL/Fl.H ****   Fl() {}; // no constructor!
 137:fltk-1.3.4-1/FL/Fl.H ****   
 138:fltk-1.3.4-1/FL/Fl.H **** private:
 139:fltk-1.3.4-1/FL/Fl.H ****   static int use_high_res_GL_;
 140:fltk-1.3.4-1/FL/Fl.H ****   
 141:fltk-1.3.4-1/FL/Fl.H **** public: // should be private!
 142:fltk-1.3.4-1/FL/Fl.H **** #ifndef FL_DOXYGEN
 143:fltk-1.3.4-1/FL/Fl.H ****   static int e_number;
 144:fltk-1.3.4-1/FL/Fl.H ****   static int e_x;
 145:fltk-1.3.4-1/FL/Fl.H ****   static int e_y;
 146:fltk-1.3.4-1/FL/Fl.H ****   static int e_x_root;
 147:fltk-1.3.4-1/FL/Fl.H ****   static int e_y_root;
 148:fltk-1.3.4-1/FL/Fl.H ****   static int e_dx;
 149:fltk-1.3.4-1/FL/Fl.H ****   static int e_dy;
 150:fltk-1.3.4-1/FL/Fl.H ****   static int e_state;
 151:fltk-1.3.4-1/FL/Fl.H ****   static int e_clicks;
 152:fltk-1.3.4-1/FL/Fl.H ****   static int e_is_click;
 153:fltk-1.3.4-1/FL/Fl.H ****   static int e_keysym;
 154:fltk-1.3.4-1/FL/Fl.H ****   static char* e_text;
 155:fltk-1.3.4-1/FL/Fl.H ****   static int e_length;
 156:fltk-1.3.4-1/FL/Fl.H ****   static void *e_clipboard_data;
 157:fltk-1.3.4-1/FL/Fl.H ****   static const char *e_clipboard_type;
 158:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Event_Dispatch e_dispatch;
 159:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* belowmouse_;
 160:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* pushed_;
 161:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* focus_;
 162:fltk-1.3.4-1/FL/Fl.H ****   static int damage_;
 163:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* selection_owner_;
 164:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* modal_;
 165:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* grab_;
 166:fltk-1.3.4-1/FL/Fl.H ****   static int compose_state; // used for dead keys (WIN32) or marked text (MacOS)
 167:fltk-1.3.4-1/FL/Fl.H ****   static void call_screen_init(); // recompute screen number and dimensions
 168:fltk-1.3.4-1/FL/Fl.H **** #ifdef __APPLE__
 169:fltk-1.3.4-1/FL/Fl.H ****   static void reset_marked_text(); // resets marked text
 170:fltk-1.3.4-1/FL/Fl.H ****   static void insertion_point_location(int x, int y, int height); // sets window coordinates & heig
 171:fltk-1.3.4-1/FL/Fl.H **** #endif
 172:fltk-1.3.4-1/FL/Fl.H **** #endif // FL_DOXYGEN
 173:fltk-1.3.4-1/FL/Fl.H ****   
 174:fltk-1.3.4-1/FL/Fl.H ****   
 175:fltk-1.3.4-1/FL/Fl.H ****   /**
 176:fltk-1.3.4-1/FL/Fl.H ****     If true then flush() will do something.
 177:fltk-1.3.4-1/FL/Fl.H ****   */
 178:fltk-1.3.4-1/FL/Fl.H ****   static void damage(int d) {damage_ = d;}
 179:fltk-1.3.4-1/FL/Fl.H ****   
 180:fltk-1.3.4-1/FL/Fl.H **** public:
 181:fltk-1.3.4-1/FL/Fl.H ****   /** Enumerator for global FLTK options.
 182:fltk-1.3.4-1/FL/Fl.H ****       These options can be set system wide, per user, or for the running
 183:fltk-1.3.4-1/FL/Fl.H ****       application only.
 184:fltk-1.3.4-1/FL/Fl.H ****       \see Fl::option(Fl_Option, bool)
 185:fltk-1.3.4-1/FL/Fl.H ****       \see Fl::option(Fl_Option)
 186:fltk-1.3.4-1/FL/Fl.H ****   */
 187:fltk-1.3.4-1/FL/Fl.H ****   typedef enum {
 188:fltk-1.3.4-1/FL/Fl.H ****       /// When switched on, moving the text cursor beyond the start or end of
 189:fltk-1.3.4-1/FL/Fl.H ****       /// a text in a text widget will change focus to the next text widget.
 190:fltk-1.3.4-1/FL/Fl.H ****       /// (This is considered 'old' behavior)
 191:fltk-1.3.4-1/FL/Fl.H ****       ///
 192:fltk-1.3.4-1/FL/Fl.H ****       /// When switched off (default), the cursor will stop at the end of the text.
 193:fltk-1.3.4-1/FL/Fl.H ****       /// Pressing Tab or Ctrl-Tab will advance the keyboard focus.
 194:fltk-1.3.4-1/FL/Fl.H ****       ///
 195:fltk-1.3.4-1/FL/Fl.H ****       /// See also: Fl_Input_::tab_nav()
 196:fltk-1.3.4-1/FL/Fl.H ****       ///
 197:fltk-1.3.4-1/FL/Fl.H ****     OPTION_ARROW_FOCUS = 0,
 198:fltk-1.3.4-1/FL/Fl.H ****       // When switched on, FLTK will use the file chooser dialog that comes 
 199:fltk-1.3.4-1/FL/Fl.H ****       // with your operating system whenever possible. When switched off, FLTK
 200:fltk-1.3.4-1/FL/Fl.H ****       // will present its own file chooser.
 201:fltk-1.3.4-1/FL/Fl.H ****       // \todo implement me
 202:fltk-1.3.4-1/FL/Fl.H ****     // OPTION_NATIVE_FILECHOOSER,
 203:fltk-1.3.4-1/FL/Fl.H ****       // When Filechooser Preview is enabled, the FLTK or native file chooser
 204:fltk-1.3.4-1/FL/Fl.H ****       // will show a preview of a selected file (if possible) before the user
 205:fltk-1.3.4-1/FL/Fl.H ****       // decides to choose the file.
 206:fltk-1.3.4-1/FL/Fl.H ****       // \todo implement me
 207:fltk-1.3.4-1/FL/Fl.H ****     //OPTION_FILECHOOSER_PREVIEW,
 208:fltk-1.3.4-1/FL/Fl.H ****       /// If visible focus is switched on (default), FLTK will draw a dotted rectangle 
 209:fltk-1.3.4-1/FL/Fl.H ****       /// inside the widget that will receive the next keystroke. If switched
 210:fltk-1.3.4-1/FL/Fl.H ****       /// off, no such indicator will be drawn and keyboard navigation
 211:fltk-1.3.4-1/FL/Fl.H ****       /// is disabled.
 212:fltk-1.3.4-1/FL/Fl.H ****     OPTION_VISIBLE_FOCUS,
 213:fltk-1.3.4-1/FL/Fl.H ****       /// If text drag-and-drop is enabled (default), the user can select and drag text
 214:fltk-1.3.4-1/FL/Fl.H ****       /// from any text widget. If disabled, no dragging is possible, however
 215:fltk-1.3.4-1/FL/Fl.H ****       /// dropping text from other applications still works.
 216:fltk-1.3.4-1/FL/Fl.H ****     OPTION_DND_TEXT,
 217:fltk-1.3.4-1/FL/Fl.H ****       /// If tooltips are enabled (default), hovering the mouse over a widget with a 
 218:fltk-1.3.4-1/FL/Fl.H ****       /// tooltip text will open a little tooltip window until the mouse leaves
 219:fltk-1.3.4-1/FL/Fl.H ****       /// the widget. If disabled, no tooltip is shown.
 220:fltk-1.3.4-1/FL/Fl.H ****     OPTION_SHOW_TOOLTIPS,
 221:fltk-1.3.4-1/FL/Fl.H ****      /// When switched on (default), Fl_Native_File_Chooser runs GTK file dialogs
 222:fltk-1.3.4-1/FL/Fl.H ****      /// if the GTK library is available on the platform (linux/unix only).
 223:fltk-1.3.4-1/FL/Fl.H ****      /// When switched off, GTK file dialogs aren't used even if the GTK library is available.
 224:fltk-1.3.4-1/FL/Fl.H ****     OPTION_FNFC_USES_GTK,
 225:fltk-1.3.4-1/FL/Fl.H ****       // don't change this, leave it always as the last element
 226:fltk-1.3.4-1/FL/Fl.H ****       /// For internal use only.
 227:fltk-1.3.4-1/FL/Fl.H ****     OPTION_LAST
 228:fltk-1.3.4-1/FL/Fl.H ****   } Fl_Option;
 229:fltk-1.3.4-1/FL/Fl.H **** 
 230:fltk-1.3.4-1/FL/Fl.H **** private:  
 231:fltk-1.3.4-1/FL/Fl.H ****   static unsigned char options_[OPTION_LAST];
 232:fltk-1.3.4-1/FL/Fl.H ****   static unsigned char options_read_;
 233:fltk-1.3.4-1/FL/Fl.H ****   
 234:fltk-1.3.4-1/FL/Fl.H **** public:  
 235:fltk-1.3.4-1/FL/Fl.H ****   /*
 236:fltk-1.3.4-1/FL/Fl.H ****    Return a global setting for all FLTK applications, possibly overridden
 237:fltk-1.3.4-1/FL/Fl.H ****    by a setting specifically for this application.
 238:fltk-1.3.4-1/FL/Fl.H ****    */
 239:fltk-1.3.4-1/FL/Fl.H ****   static bool option(Fl_Option opt);
 240:fltk-1.3.4-1/FL/Fl.H ****   
 241:fltk-1.3.4-1/FL/Fl.H ****   /*
 242:fltk-1.3.4-1/FL/Fl.H ****    Override an option while the application is running.
 243:fltk-1.3.4-1/FL/Fl.H ****    */
 244:fltk-1.3.4-1/FL/Fl.H ****   static void option(Fl_Option opt, bool val);
 245:fltk-1.3.4-1/FL/Fl.H ****   
 246:fltk-1.3.4-1/FL/Fl.H ****   /**
 247:fltk-1.3.4-1/FL/Fl.H ****     The currently executing idle callback function: DO NOT USE THIS DIRECTLY!
 248:fltk-1.3.4-1/FL/Fl.H ****     
 249:fltk-1.3.4-1/FL/Fl.H ****     This is now used as part of a higher level system allowing multiple
 250:fltk-1.3.4-1/FL/Fl.H ****     idle callback functions to be called.
 251:fltk-1.3.4-1/FL/Fl.H ****     \see add_idle(), remove_idle()
 252:fltk-1.3.4-1/FL/Fl.H ****   */
 253:fltk-1.3.4-1/FL/Fl.H ****   static void (*idle)();
 254:fltk-1.3.4-1/FL/Fl.H **** 
 255:fltk-1.3.4-1/FL/Fl.H **** #ifndef FL_DOXYGEN
 256:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Awake_Handler *awake_ring_;
 257:fltk-1.3.4-1/FL/Fl.H ****   static void **awake_data_;
 258:fltk-1.3.4-1/FL/Fl.H ****   static int awake_ring_size_;
 259:fltk-1.3.4-1/FL/Fl.H ****   static int awake_ring_head_;
 260:fltk-1.3.4-1/FL/Fl.H ****   static int awake_ring_tail_;
 261:fltk-1.3.4-1/FL/Fl.H ****   static const char* scheme_;
 262:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Image* scheme_bg_;
 263:fltk-1.3.4-1/FL/Fl.H **** 
 264:fltk-1.3.4-1/FL/Fl.H ****   static int e_original_keysym; // late addition
 265:fltk-1.3.4-1/FL/Fl.H ****   static int scrollbar_size_;
 266:fltk-1.3.4-1/FL/Fl.H **** #endif
 267:fltk-1.3.4-1/FL/Fl.H **** 
 268:fltk-1.3.4-1/FL/Fl.H **** 
 269:fltk-1.3.4-1/FL/Fl.H ****   static int add_awake_handler_(Fl_Awake_Handler, void*);
 270:fltk-1.3.4-1/FL/Fl.H ****   static int get_awake_handler_(Fl_Awake_Handler&, void*&);
 271:fltk-1.3.4-1/FL/Fl.H **** 
 272:fltk-1.3.4-1/FL/Fl.H **** public:
 273:fltk-1.3.4-1/FL/Fl.H **** 
 274:fltk-1.3.4-1/FL/Fl.H ****   // API version number
 275:fltk-1.3.4-1/FL/Fl.H ****   static double version();
 276:fltk-1.3.4-1/FL/Fl.H ****   static int api_version();
 277:fltk-1.3.4-1/FL/Fl.H **** 
 278:fltk-1.3.4-1/FL/Fl.H ****   // ABI version number
 279:fltk-1.3.4-1/FL/Fl.H ****   static int abi_version();
 280:fltk-1.3.4-1/FL/Fl.H **** 
 281:fltk-1.3.4-1/FL/Fl.H ****   /**
 282:fltk-1.3.4-1/FL/Fl.H ****     Returns whether the runtime library ABI version is correct.
 283:fltk-1.3.4-1/FL/Fl.H **** 
 284:fltk-1.3.4-1/FL/Fl.H ****     This enables you to check the ABI version of the linked FLTK
 285:fltk-1.3.4-1/FL/Fl.H ****     library at runtime.
 286:fltk-1.3.4-1/FL/Fl.H **** 
 287:fltk-1.3.4-1/FL/Fl.H ****     Returns 1 (true) if the compiled ABI version (in the header files)
 288:fltk-1.3.4-1/FL/Fl.H ****     and the linked library ABI version (used at runtime) are the same,
 289:fltk-1.3.4-1/FL/Fl.H ****     0 (false) otherwise.
 290:fltk-1.3.4-1/FL/Fl.H **** 
 291:fltk-1.3.4-1/FL/Fl.H ****     Argument \p val can be used to query a particular library ABI version.
 292:fltk-1.3.4-1/FL/Fl.H ****     Use for instance 10303 to query if the runtime library is compatible
 293:fltk-1.3.4-1/FL/Fl.H ****     with FLTK ABI version 1.3.3. This is rarely useful.
 294:fltk-1.3.4-1/FL/Fl.H **** 
 295:fltk-1.3.4-1/FL/Fl.H ****     The default \p val argument is FL_ABI_VERSION, which checks the version
 296:fltk-1.3.4-1/FL/Fl.H ****     defined at configure time (i.e. in the header files at program
 297:fltk-1.3.4-1/FL/Fl.H ****     compilation time) against the linked library version used at runtime.
 298:fltk-1.3.4-1/FL/Fl.H ****     This is particularly useful if you linked with a shared object library,
 299:fltk-1.3.4-1/FL/Fl.H ****     but it also concerns static linking.
 300:fltk-1.3.4-1/FL/Fl.H **** 
 301:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::abi_version()
 302:fltk-1.3.4-1/FL/Fl.H ****   */
 303:fltk-1.3.4-1/FL/Fl.H ****   static inline int abi_check(const int val = FL_ABI_VERSION) {
 304:fltk-1.3.4-1/FL/Fl.H ****     return val == abi_version();
 305:fltk-1.3.4-1/FL/Fl.H ****   }
 306:fltk-1.3.4-1/FL/Fl.H **** 
 307:fltk-1.3.4-1/FL/Fl.H ****   // argument parsers:
 308:fltk-1.3.4-1/FL/Fl.H ****   static int arg(int argc, char **argv, int& i);
 309:fltk-1.3.4-1/FL/Fl.H ****   static int args(int argc, char **argv, int& i, Fl_Args_Handler cb = 0);
 310:fltk-1.3.4-1/FL/Fl.H ****   static void args(int argc, char **argv);
 311:fltk-1.3.4-1/FL/Fl.H ****   /**
 312:fltk-1.3.4-1/FL/Fl.H ****     Usage string displayed if Fl::args() detects an invalid argument.
 313:fltk-1.3.4-1/FL/Fl.H ****     This may be changed to point to customized text at run-time.
 314:fltk-1.3.4-1/FL/Fl.H ****   */
 315:fltk-1.3.4-1/FL/Fl.H ****   static const char* const help;
 316:fltk-1.3.4-1/FL/Fl.H **** 
 317:fltk-1.3.4-1/FL/Fl.H ****   // things called by initialization:
 318:fltk-1.3.4-1/FL/Fl.H ****   static void display(const char*);
 319:fltk-1.3.4-1/FL/Fl.H ****   static int visual(int);
 320:fltk-1.3.4-1/FL/Fl.H ****   /**
 321:fltk-1.3.4-1/FL/Fl.H ****     This does the same thing as Fl::visual(int) but also requires OpenGL
 322:fltk-1.3.4-1/FL/Fl.H ****     drawing to work. This <I>must</I> be done if you want to draw in
 323:fltk-1.3.4-1/FL/Fl.H ****     normal windows with OpenGL with gl_start() and gl_end().
 324:fltk-1.3.4-1/FL/Fl.H ****     It may be useful to call this so your X windows use the same visual
 325:fltk-1.3.4-1/FL/Fl.H ****     as an Fl_Gl_Window, which on some servers will reduce colormap flashing.
 326:fltk-1.3.4-1/FL/Fl.H **** 
 327:fltk-1.3.4-1/FL/Fl.H ****     See Fl_Gl_Window for a list of additional values for the argument.
 328:fltk-1.3.4-1/FL/Fl.H ****   */
 329:fltk-1.3.4-1/FL/Fl.H ****   static int gl_visual(int, int *alist=0); // platform dependent
 330:fltk-1.3.4-1/FL/Fl.H ****   static void own_colormap();
 331:fltk-1.3.4-1/FL/Fl.H ****   static void get_system_colors();
 332:fltk-1.3.4-1/FL/Fl.H ****   static void foreground(uchar, uchar, uchar);
 333:fltk-1.3.4-1/FL/Fl.H ****   static void background(uchar, uchar, uchar);
 334:fltk-1.3.4-1/FL/Fl.H ****   static void background2(uchar, uchar, uchar);
 335:fltk-1.3.4-1/FL/Fl.H **** 
 336:fltk-1.3.4-1/FL/Fl.H ****   // schemes:
 337:fltk-1.3.4-1/FL/Fl.H ****   static int scheme(const char *name);
 338:fltk-1.3.4-1/FL/Fl.H ****   /** See void scheme(const char *name) */
 339:fltk-1.3.4-1/FL/Fl.H ****   static const char* scheme() {return scheme_;}
 340:fltk-1.3.4-1/FL/Fl.H **** 
 341:fltk-1.3.4-1/FL/Fl.H ****   /** Returns whether the current scheme is the given name.
 342:fltk-1.3.4-1/FL/Fl.H **** 
 343:fltk-1.3.4-1/FL/Fl.H ****     This is a fast inline convenience function to support scheme-specific
 344:fltk-1.3.4-1/FL/Fl.H ****     code in widgets, e.g. in their draw() methods, if required.
 345:fltk-1.3.4-1/FL/Fl.H **** 
 346:fltk-1.3.4-1/FL/Fl.H ****     Use a valid scheme name, not \p NULL (although \p NULL is allowed,
 347:fltk-1.3.4-1/FL/Fl.H ****     this is not a useful argument - see below).
 348:fltk-1.3.4-1/FL/Fl.H **** 
 349:fltk-1.3.4-1/FL/Fl.H ****     If Fl::scheme() has not been set or has been set to the default
 350:fltk-1.3.4-1/FL/Fl.H ****     scheme ("none" or "base"), then this will always return 0 regardless
 351:fltk-1.3.4-1/FL/Fl.H ****     of the argument, because Fl::scheme() is \p NULL in this case.
 352:fltk-1.3.4-1/FL/Fl.H **** 
 353:fltk-1.3.4-1/FL/Fl.H ****     \note The stored scheme name is always lowercase, and this method will
 354:fltk-1.3.4-1/FL/Fl.H ****     do a case-sensitive compare, so you \b must provide a lowercase string to
 355:fltk-1.3.4-1/FL/Fl.H ****     return the correct value. This is intentional for performance reasons.
 356:fltk-1.3.4-1/FL/Fl.H **** 
 357:fltk-1.3.4-1/FL/Fl.H ****     Example:
 358:fltk-1.3.4-1/FL/Fl.H ****     \code
 359:fltk-1.3.4-1/FL/Fl.H ****       if (Fl::is_scheme("gtk+")) { your_code_here(); }
 360:fltk-1.3.4-1/FL/Fl.H ****     \endcode
 361:fltk-1.3.4-1/FL/Fl.H **** 
 362:fltk-1.3.4-1/FL/Fl.H ****     \param[in] name \b lowercase string of requested scheme name.
 363:fltk-1.3.4-1/FL/Fl.H **** 
 364:fltk-1.3.4-1/FL/Fl.H ****     \return 1 if the given scheme is active, 0 otherwise.
 365:fltk-1.3.4-1/FL/Fl.H **** 
 366:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::scheme(const char *name)
 367:fltk-1.3.4-1/FL/Fl.H ****   */
 368:fltk-1.3.4-1/FL/Fl.H ****   static int is_scheme(const char *name) {
 369:fltk-1.3.4-1/FL/Fl.H ****     return (scheme_ && name && !strcmp(name,scheme_));
 370:fltk-1.3.4-1/FL/Fl.H ****   }
 371:fltk-1.3.4-1/FL/Fl.H ****   /**
 372:fltk-1.3.4-1/FL/Fl.H ****     Called by scheme according to scheme name. 
 373:fltk-1.3.4-1/FL/Fl.H ****     Loads or reloads the current scheme selection. 
 374:fltk-1.3.4-1/FL/Fl.H ****     See void scheme(const char *name) 
 375:fltk-1.3.4-1/FL/Fl.H ****   */
 376:fltk-1.3.4-1/FL/Fl.H ****   static int reload_scheme(); // platform dependent
 377:fltk-1.3.4-1/FL/Fl.H ****   static int scrollbar_size();
 378:fltk-1.3.4-1/FL/Fl.H ****   static void scrollbar_size(int W);
 379:fltk-1.3.4-1/FL/Fl.H **** 
 380:fltk-1.3.4-1/FL/Fl.H ****   // execution:
 381:fltk-1.3.4-1/FL/Fl.H ****   static int wait();
 382:fltk-1.3.4-1/FL/Fl.H ****   static double wait(double time);
 383:fltk-1.3.4-1/FL/Fl.H ****   static int check();
 384:fltk-1.3.4-1/FL/Fl.H ****   static int ready();
 385:fltk-1.3.4-1/FL/Fl.H ****   static int run();
 386:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* readqueue();
 387:fltk-1.3.4-1/FL/Fl.H ****   /**
 388:fltk-1.3.4-1/FL/Fl.H ****   Adds a one-shot timeout callback.  The function will be called by
 389:fltk-1.3.4-1/FL/Fl.H ****   Fl::wait() at <i>t</i> seconds after this function is called.
 390:fltk-1.3.4-1/FL/Fl.H ****   The optional void* argument is passed to the callback.
 391:fltk-1.3.4-1/FL/Fl.H ****   
 392:fltk-1.3.4-1/FL/Fl.H ****   You can have multiple timeout callbacks. To remove a timeout
 393:fltk-1.3.4-1/FL/Fl.H ****   callback use Fl::remove_timeout().
 394:fltk-1.3.4-1/FL/Fl.H ****   
 395:fltk-1.3.4-1/FL/Fl.H ****   If you need more accurate, repeated timeouts, use Fl::repeat_timeout() to
 396:fltk-1.3.4-1/FL/Fl.H ****   reschedule the subsequent timeouts.
 397:fltk-1.3.4-1/FL/Fl.H ****   
 398:fltk-1.3.4-1/FL/Fl.H ****   The following code will print "TICK" each second on
 399:fltk-1.3.4-1/FL/Fl.H ****   stdout with a fair degree of accuracy:
 400:fltk-1.3.4-1/FL/Fl.H ****   
 401:fltk-1.3.4-1/FL/Fl.H ****   \code
 402:fltk-1.3.4-1/FL/Fl.H **** #include <stdio.h>
 403:fltk-1.3.4-1/FL/Fl.H **** #include <FL/Fl.H>
 404:fltk-1.3.4-1/FL/Fl.H **** #include <FL/Fl_Window.H>
 405:fltk-1.3.4-1/FL/Fl.H **** void callback(void*) {
 406:fltk-1.3.4-1/FL/Fl.H ****   printf("TICK\n");
 407:fltk-1.3.4-1/FL/Fl.H ****   Fl::repeat_timeout(1.0, callback);    // retrigger timeout
 408:fltk-1.3.4-1/FL/Fl.H **** }
 409:fltk-1.3.4-1/FL/Fl.H **** int main() {
 410:fltk-1.3.4-1/FL/Fl.H ****   Fl_Window win(100,100);
 411:fltk-1.3.4-1/FL/Fl.H ****   win.show();
 412:fltk-1.3.4-1/FL/Fl.H ****   Fl::add_timeout(1.0, callback);       // set up first timeout
 413:fltk-1.3.4-1/FL/Fl.H ****   return Fl::run();
 414:fltk-1.3.4-1/FL/Fl.H **** }
 415:fltk-1.3.4-1/FL/Fl.H ****   \endcode
 416:fltk-1.3.4-1/FL/Fl.H ****   */
 417:fltk-1.3.4-1/FL/Fl.H ****   static void add_timeout(double t, Fl_Timeout_Handler,void* = 0); // platform dependent
 418:fltk-1.3.4-1/FL/Fl.H ****   /**
 419:fltk-1.3.4-1/FL/Fl.H ****   Repeats a timeout callback from the expiration of the
 420:fltk-1.3.4-1/FL/Fl.H ****   previous timeout, allowing for more accurate timing. You may only call
 421:fltk-1.3.4-1/FL/Fl.H ****   this method inside a timeout callback.
 422:fltk-1.3.4-1/FL/Fl.H ****   
 423:fltk-1.3.4-1/FL/Fl.H ****   The following code will print "TICK" each second on
 424:fltk-1.3.4-1/FL/Fl.H ****   stdout with a fair degree of accuracy:
 425:fltk-1.3.4-1/FL/Fl.H ****   
 426:fltk-1.3.4-1/FL/Fl.H ****   \code
 427:fltk-1.3.4-1/FL/Fl.H ****      void callback(void*) {
 428:fltk-1.3.4-1/FL/Fl.H ****        puts("TICK");
 429:fltk-1.3.4-1/FL/Fl.H ****        Fl::repeat_timeout(1.0, callback);
 430:fltk-1.3.4-1/FL/Fl.H ****      }
 431:fltk-1.3.4-1/FL/Fl.H ****   
 432:fltk-1.3.4-1/FL/Fl.H ****      int main() {
 433:fltk-1.3.4-1/FL/Fl.H ****        Fl::add_timeout(1.0, callback);
 434:fltk-1.3.4-1/FL/Fl.H ****        return Fl::run();
 435:fltk-1.3.4-1/FL/Fl.H ****      }
 436:fltk-1.3.4-1/FL/Fl.H ****   \endcode
 437:fltk-1.3.4-1/FL/Fl.H ****   */
 438:fltk-1.3.4-1/FL/Fl.H ****   static void repeat_timeout(double t, Fl_Timeout_Handler, void* = 0); // platform dependent
 439:fltk-1.3.4-1/FL/Fl.H ****   static int  has_timeout(Fl_Timeout_Handler, void* = 0);
 440:fltk-1.3.4-1/FL/Fl.H ****   static void remove_timeout(Fl_Timeout_Handler, void* = 0);
 441:fltk-1.3.4-1/FL/Fl.H ****   static void add_check(Fl_Timeout_Handler, void* = 0);
 442:fltk-1.3.4-1/FL/Fl.H ****   static int  has_check(Fl_Timeout_Handler, void* = 0);
 443:fltk-1.3.4-1/FL/Fl.H ****   static void remove_check(Fl_Timeout_Handler, void* = 0);
 444:fltk-1.3.4-1/FL/Fl.H ****   /**
 445:fltk-1.3.4-1/FL/Fl.H ****     Adds file descriptor fd to listen to.
 446:fltk-1.3.4-1/FL/Fl.H ****     
 447:fltk-1.3.4-1/FL/Fl.H ****     When the fd becomes ready for reading Fl::wait() will call the
 448:fltk-1.3.4-1/FL/Fl.H ****     callback and then return. The callback is passed the fd and the
 449:fltk-1.3.4-1/FL/Fl.H ****     arbitrary void* argument.
 450:fltk-1.3.4-1/FL/Fl.H ****     
 451:fltk-1.3.4-1/FL/Fl.H ****     The second version takes a when bitfield, with the bits
 452:fltk-1.3.4-1/FL/Fl.H ****     FL_READ, FL_WRITE, and FL_EXCEPT defined,
 453:fltk-1.3.4-1/FL/Fl.H ****     to indicate when the callback should be done.
 454:fltk-1.3.4-1/FL/Fl.H ****     
 455:fltk-1.3.4-1/FL/Fl.H ****     There can only be one callback of each type for a file descriptor. 
 456:fltk-1.3.4-1/FL/Fl.H ****     Fl::remove_fd() gets rid of <I>all</I> the callbacks for a given
 457:fltk-1.3.4-1/FL/Fl.H ****     file descriptor.
 458:fltk-1.3.4-1/FL/Fl.H ****     
 459:fltk-1.3.4-1/FL/Fl.H ****     Under UNIX <I>any</I> file descriptor can be monitored (files,
 460:fltk-1.3.4-1/FL/Fl.H ****     devices, pipes, sockets, etc.). Due to limitations in Microsoft Windows,
 461:fltk-1.3.4-1/FL/Fl.H ****     WIN32 applications can only monitor sockets.
 462:fltk-1.3.4-1/FL/Fl.H ****   */
 463:fltk-1.3.4-1/FL/Fl.H ****   static void add_fd(int fd, int when, Fl_FD_Handler cb, void* = 0); // platform dependent
 464:fltk-1.3.4-1/FL/Fl.H ****   /** See void add_fd(int fd, int when, Fl_FD_Handler cb, void* = 0) */
 465:fltk-1.3.4-1/FL/Fl.H ****   static void add_fd(int fd, Fl_FD_Handler cb, void* = 0); // platform dependent
 466:fltk-1.3.4-1/FL/Fl.H ****   /** Removes a file descriptor handler. */
 467:fltk-1.3.4-1/FL/Fl.H ****   static void remove_fd(int, int when); // platform dependent
 468:fltk-1.3.4-1/FL/Fl.H ****   /** Removes a file descriptor handler. */
 469:fltk-1.3.4-1/FL/Fl.H ****   static void remove_fd(int); // platform dependent
 470:fltk-1.3.4-1/FL/Fl.H **** 
 471:fltk-1.3.4-1/FL/Fl.H ****   static void add_idle(Fl_Idle_Handler cb, void* data = 0);
 472:fltk-1.3.4-1/FL/Fl.H ****   static int  has_idle(Fl_Idle_Handler cb, void* data = 0);
 473:fltk-1.3.4-1/FL/Fl.H ****   static void remove_idle(Fl_Idle_Handler cb, void* data = 0);
 474:fltk-1.3.4-1/FL/Fl.H ****   /** If true then flush() will do something. */
 475:fltk-1.3.4-1/FL/Fl.H ****   static int damage() {return damage_;}
 476:fltk-1.3.4-1/FL/Fl.H ****   static void redraw();
 477:fltk-1.3.4-1/FL/Fl.H ****   static void flush();
 478:fltk-1.3.4-1/FL/Fl.H ****   /** \addtogroup group_comdlg
 479:fltk-1.3.4-1/FL/Fl.H ****     @{ */
 480:fltk-1.3.4-1/FL/Fl.H ****   /**
 481:fltk-1.3.4-1/FL/Fl.H ****   FLTK calls Fl::warning() to output a warning message.
 482:fltk-1.3.4-1/FL/Fl.H ****   
 483:fltk-1.3.4-1/FL/Fl.H ****   The default version on Windows returns \e without printing a warning
 484:fltk-1.3.4-1/FL/Fl.H ****   message, because Windows programs normally don't have stderr (a console
 485:fltk-1.3.4-1/FL/Fl.H ****   window) enabled.
 486:fltk-1.3.4-1/FL/Fl.H **** 
 487:fltk-1.3.4-1/FL/Fl.H ****   The default version on all other platforms prints the warning message to stderr.
 488:fltk-1.3.4-1/FL/Fl.H **** 
 489:fltk-1.3.4-1/FL/Fl.H ****   You can override the behavior by setting the function pointer to your
 490:fltk-1.3.4-1/FL/Fl.H ****   own routine.
 491:fltk-1.3.4-1/FL/Fl.H **** 
 492:fltk-1.3.4-1/FL/Fl.H ****   Fl::warning() means that there was a recoverable problem, the display may
 493:fltk-1.3.4-1/FL/Fl.H ****   be messed up, but the user can probably keep working - all X protocol
 494:fltk-1.3.4-1/FL/Fl.H ****   errors call this, for example. The default implementation returns after
 495:fltk-1.3.4-1/FL/Fl.H ****   displaying the message.
 496:fltk-1.3.4-1/FL/Fl.H ****    \note \#include <FL/Fl.H>
 497:fltk-1.3.4-1/FL/Fl.H ****   */
 498:fltk-1.3.4-1/FL/Fl.H ****   static void (*warning)(const char*, ...);
 499:fltk-1.3.4-1/FL/Fl.H ****   /**
 500:fltk-1.3.4-1/FL/Fl.H ****   FLTK calls Fl::error() to output a normal error message.
 501:fltk-1.3.4-1/FL/Fl.H ****   
 502:fltk-1.3.4-1/FL/Fl.H ****   The default version on Windows displays the error message in a MessageBox window.
 503:fltk-1.3.4-1/FL/Fl.H **** 
 504:fltk-1.3.4-1/FL/Fl.H ****   The default version on all other platforms prints the error message to stderr.
 505:fltk-1.3.4-1/FL/Fl.H **** 
 506:fltk-1.3.4-1/FL/Fl.H ****   You can override the behavior by setting the function pointer to your
 507:fltk-1.3.4-1/FL/Fl.H ****   own routine.
 508:fltk-1.3.4-1/FL/Fl.H **** 
 509:fltk-1.3.4-1/FL/Fl.H ****   Fl::error() means there is a recoverable error such as the inability to read
 510:fltk-1.3.4-1/FL/Fl.H ****   an image file. The default implementation returns after displaying the message.
 511:fltk-1.3.4-1/FL/Fl.H ****    \note \#include <FL/Fl.H>
 512:fltk-1.3.4-1/FL/Fl.H ****   */
 513:fltk-1.3.4-1/FL/Fl.H ****   static void (*error)(const char*, ...);
 514:fltk-1.3.4-1/FL/Fl.H ****   /**
 515:fltk-1.3.4-1/FL/Fl.H ****   FLTK calls Fl::fatal() to output a fatal error message.
 516:fltk-1.3.4-1/FL/Fl.H ****   
 517:fltk-1.3.4-1/FL/Fl.H ****   The default version on Windows displays the error message in a MessageBox window.
 518:fltk-1.3.4-1/FL/Fl.H **** 
 519:fltk-1.3.4-1/FL/Fl.H ****   The default version on all other platforms prints the error message to stderr.
 520:fltk-1.3.4-1/FL/Fl.H ****   
 521:fltk-1.3.4-1/FL/Fl.H ****   You can override the behavior by setting the function pointer to your
 522:fltk-1.3.4-1/FL/Fl.H ****   own routine.
 523:fltk-1.3.4-1/FL/Fl.H **** 
 524:fltk-1.3.4-1/FL/Fl.H ****   Fl::fatal() must not return, as FLTK is in an unusable state, however your
 525:fltk-1.3.4-1/FL/Fl.H ****   version may be able to use longjmp or an exception to continue, as long as
 526:fltk-1.3.4-1/FL/Fl.H ****   it does not call FLTK again. The default implementation exits with status 1
 527:fltk-1.3.4-1/FL/Fl.H ****   after displaying the message.
 528:fltk-1.3.4-1/FL/Fl.H ****    \note \#include <FL/Fl.H>
 529:fltk-1.3.4-1/FL/Fl.H ****   */
 530:fltk-1.3.4-1/FL/Fl.H ****   static void (*fatal)(const char*, ...);
 531:fltk-1.3.4-1/FL/Fl.H ****   /** @} */
 532:fltk-1.3.4-1/FL/Fl.H **** 
 533:fltk-1.3.4-1/FL/Fl.H ****   /** \defgroup  fl_windows Windows handling functions
 534:fltk-1.3.4-1/FL/Fl.H ****       \brief Windows and standard dialogs handling declared in <FL/Fl.H>
 535:fltk-1.3.4-1/FL/Fl.H ****     @{ */
 536:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* first_window();
 537:fltk-1.3.4-1/FL/Fl.H ****   static void first_window(Fl_Window*);
 538:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* next_window(const Fl_Window*);
 539:fltk-1.3.4-1/FL/Fl.H **** 
 540:fltk-1.3.4-1/FL/Fl.H ****   /**
 541:fltk-1.3.4-1/FL/Fl.H ****     Returns the top-most modal() window currently shown.
 542:fltk-1.3.4-1/FL/Fl.H **** 
 543:fltk-1.3.4-1/FL/Fl.H ****     This is the most recently shown() window with modal() true, or NULL
 544:fltk-1.3.4-1/FL/Fl.H ****     if there are no modal() windows shown().
 545:fltk-1.3.4-1/FL/Fl.H ****     The modal() window has its handle() method called
 546:fltk-1.3.4-1/FL/Fl.H ****     for all events, and no other windows will have handle()
 547:fltk-1.3.4-1/FL/Fl.H ****     called (grab() overrides this).
 548:fltk-1.3.4-1/FL/Fl.H ****   */
 549:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* modal() {return modal_;}
 550:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the window that currently receives all events.
 551:fltk-1.3.4-1/FL/Fl.H ****    
 552:fltk-1.3.4-1/FL/Fl.H ****    \return The window that currently receives all events,
 553:fltk-1.3.4-1/FL/Fl.H ****    or NULL if event grabbing is currently OFF.
 554:fltk-1.3.4-1/FL/Fl.H ****   */
 555:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* grab() {return grab_;}
 556:fltk-1.3.4-1/FL/Fl.H ****   /** Selects the window to grab.  
 557:fltk-1.3.4-1/FL/Fl.H ****    This is used when pop-up menu systems are active.
 558:fltk-1.3.4-1/FL/Fl.H ****    
 559:fltk-1.3.4-1/FL/Fl.H ****    Send all events to the passed window no matter where the pointer or
 560:fltk-1.3.4-1/FL/Fl.H ****    focus is (including in other programs). The window <I>does not have
 561:fltk-1.3.4-1/FL/Fl.H ****    to be shown()</I> , this lets the handle() method of a
 562:fltk-1.3.4-1/FL/Fl.H ****    "dummy" window override all event handling and allows you to
 563:fltk-1.3.4-1/FL/Fl.H ****    map and unmap a complex set of windows (under both X and WIN32
 564:fltk-1.3.4-1/FL/Fl.H ****    <I>some</I> window must be mapped because the system interface needs a
 565:fltk-1.3.4-1/FL/Fl.H ****    window id).
 566:fltk-1.3.4-1/FL/Fl.H ****    
 567:fltk-1.3.4-1/FL/Fl.H ****    If grab() is on it will also affect show() of windows by doing
 568:fltk-1.3.4-1/FL/Fl.H ****    system-specific operations (on X it turns on override-redirect).
 569:fltk-1.3.4-1/FL/Fl.H ****    These are designed to make menus popup reliably
 570:fltk-1.3.4-1/FL/Fl.H ****    and faster on the system.
 571:fltk-1.3.4-1/FL/Fl.H ****    
 572:fltk-1.3.4-1/FL/Fl.H ****    To turn off grabbing do Fl::grab(0).
 573:fltk-1.3.4-1/FL/Fl.H ****    
 574:fltk-1.3.4-1/FL/Fl.H ****    <I>Be careful that your program does not enter an infinite loop
 575:fltk-1.3.4-1/FL/Fl.H ****    while grab() is on.  On X this will lock up your screen!</I>
 576:fltk-1.3.4-1/FL/Fl.H ****    To avoid this potential lockup, all newer operating systems seem to 
 577:fltk-1.3.4-1/FL/Fl.H ****    limit mouse pointer grabbing to the time during which a mouse button 
 578:fltk-1.3.4-1/FL/Fl.H ****    is held down. Some OS's may not support grabbing at all.
 579:fltk-1.3.4-1/FL/Fl.H ****    */
 580:fltk-1.3.4-1/FL/Fl.H ****   static void grab(Fl_Window*); // platform dependent
 581:fltk-1.3.4-1/FL/Fl.H ****   /** @} */
 582:fltk-1.3.4-1/FL/Fl.H **** 
 583:fltk-1.3.4-1/FL/Fl.H ****   /** \defgroup fl_events Events handling functions
 584:fltk-1.3.4-1/FL/Fl.H **** 	Fl class events handling API declared in <FL/Fl.H>
 585:fltk-1.3.4-1/FL/Fl.H **** 	@{
 586:fltk-1.3.4-1/FL/Fl.H ****   */
 587:fltk-1.3.4-1/FL/Fl.H ****   // event information:
 588:fltk-1.3.4-1/FL/Fl.H ****   /**
 589:fltk-1.3.4-1/FL/Fl.H ****     Returns the last event that was processed. This can be used
 590:fltk-1.3.4-1/FL/Fl.H ****     to determine if a callback is being done in response to a
 591:fltk-1.3.4-1/FL/Fl.H ****     keypress, mouse click, etc.
 592:fltk-1.3.4-1/FL/Fl.H ****   */
 593:fltk-1.3.4-1/FL/Fl.H ****   static int event()		{return e_number;}
 594:fltk-1.3.4-1/FL/Fl.H ****   /**
 595:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse position of the event relative to the Fl_Window
 596:fltk-1.3.4-1/FL/Fl.H ****     it was passed to.
 597:fltk-1.3.4-1/FL/Fl.H ****   */
 598:fltk-1.3.4-1/FL/Fl.H ****   static int event_x()	{return e_x;}
 599:fltk-1.3.4-1/FL/Fl.H ****   /**
 600:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse position of the event relative to the Fl_Window
 601:fltk-1.3.4-1/FL/Fl.H ****     it was passed to.
 602:fltk-1.3.4-1/FL/Fl.H ****   */
 603:fltk-1.3.4-1/FL/Fl.H ****   static int event_y()	{return e_y;}
 604:fltk-1.3.4-1/FL/Fl.H ****   /**
 605:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse position on the screen of the event.  To find the
 606:fltk-1.3.4-1/FL/Fl.H ****     absolute position of an Fl_Window on the screen, use the
 607:fltk-1.3.4-1/FL/Fl.H ****     difference between event_x_root(),event_y_root() and 
 608:fltk-1.3.4-1/FL/Fl.H ****     event_x(),event_y().
 609:fltk-1.3.4-1/FL/Fl.H ****   */
 610:fltk-1.3.4-1/FL/Fl.H ****   static int event_x_root()	{return e_x_root;}
 611:fltk-1.3.4-1/FL/Fl.H ****   /**
 612:fltk-1.3.4-1/FL/Fl.H ****     Returns the mouse position on the screen of the event.  To find the
 613:fltk-1.3.4-1/FL/Fl.H ****     absolute position of an Fl_Window on the screen, use the
 614:fltk-1.3.4-1/FL/Fl.H ****     difference between event_x_root(),event_y_root() and 
 615:fltk-1.3.4-1/FL/Fl.H ****     event_x(),event_y().
 616:fltk-1.3.4-1/FL/Fl.H ****   */
 617:fltk-1.3.4-1/FL/Fl.H ****   static int event_y_root()	{return e_y_root;}
 618:fltk-1.3.4-1/FL/Fl.H ****   /**
 619:fltk-1.3.4-1/FL/Fl.H ****     Returns the current horizontal mouse scrolling associated with the
 620:fltk-1.3.4-1/FL/Fl.H ****     FL_MOUSEWHEEL event. Right is positive.
 621:fltk-1.3.4-1/FL/Fl.H ****   */
 622:fltk-1.3.4-1/FL/Fl.H ****   static int event_dx()	{return e_dx;}
 623:fltk-1.3.4-1/FL/Fl.H ****   /**
 624:fltk-1.3.4-1/FL/Fl.H ****     Returns the current vertical mouse scrolling associated with the
 625:fltk-1.3.4-1/FL/Fl.H ****     FL_MOUSEWHEEL event. Down is positive.
 626:fltk-1.3.4-1/FL/Fl.H ****   */
 627:fltk-1.3.4-1/FL/Fl.H ****   static int event_dy()	{return e_dy;}
 628:fltk-1.3.4-1/FL/Fl.H ****   /**
 629:fltk-1.3.4-1/FL/Fl.H ****     Return where the mouse is on the screen by doing a round-trip query to
 630:fltk-1.3.4-1/FL/Fl.H ****     the server.  You should use Fl::event_x_root() and 
 631:fltk-1.3.4-1/FL/Fl.H ****     Fl::event_y_root() if possible, but this is necessary if you are
 632:fltk-1.3.4-1/FL/Fl.H ****     not sure if a mouse event has been processed recently (such as to
 633:fltk-1.3.4-1/FL/Fl.H ****     position your first window).  If the display is not open, this will
 634:fltk-1.3.4-1/FL/Fl.H ****     open it.
 635:fltk-1.3.4-1/FL/Fl.H ****   */
 636:fltk-1.3.4-1/FL/Fl.H ****   static void get_mouse(int &,int &); // platform dependent
 637:fltk-1.3.4-1/FL/Fl.H ****   /**
 638:fltk-1.3.4-1/FL/Fl.H ****     Returns non zero if we had a double click event.
 639:fltk-1.3.4-1/FL/Fl.H ****     \retval Non-zero if the most recent FL_PUSH or FL_KEYBOARD was a "double click".  
 640:fltk-1.3.4-1/FL/Fl.H ****     \retval  N-1 for  N clicks. 
 641:fltk-1.3.4-1/FL/Fl.H ****     A double click is counted if the same button is pressed
 642:fltk-1.3.4-1/FL/Fl.H ****     again while event_is_click() is true.
 643:fltk-1.3.4-1/FL/Fl.H ****     
 644:fltk-1.3.4-1/FL/Fl.H ****    */
 645:fltk-1.3.4-1/FL/Fl.H ****   static int event_clicks()	{return e_clicks;}
 646:fltk-1.3.4-1/FL/Fl.H ****   /**
 647:fltk-1.3.4-1/FL/Fl.H ****     Manually sets the number returned by Fl::event_clicks().  
 648:fltk-1.3.4-1/FL/Fl.H ****     This can be used to set it to zero so that
 649:fltk-1.3.4-1/FL/Fl.H ****     later code does not think an item was double-clicked.
 650:fltk-1.3.4-1/FL/Fl.H ****     \param[in] i corresponds to no double-click if 0, i+1 mouse clicks otherwise
 651:fltk-1.3.4-1/FL/Fl.H ****     \see int event_clicks()
 652:fltk-1.3.4-1/FL/Fl.H ****   */
 653:fltk-1.3.4-1/FL/Fl.H ****   static void event_clicks(int i) {e_clicks = i;}
 654:fltk-1.3.4-1/FL/Fl.H ****   /**
 655:fltk-1.3.4-1/FL/Fl.H ****   Returns non-zero if the mouse has not moved far enough
 656:fltk-1.3.4-1/FL/Fl.H ****   and not enough time has passed since the last FL_PUSH or 
 657:fltk-1.3.4-1/FL/Fl.H ****   FL_KEYBOARD event for it to be considered a "drag" rather than a
 658:fltk-1.3.4-1/FL/Fl.H ****   "click".  You can test this on FL_DRAG, FL_RELEASE,
 659:fltk-1.3.4-1/FL/Fl.H ****   and FL_MOVE events.  
 660:fltk-1.3.4-1/FL/Fl.H ****   */
 661:fltk-1.3.4-1/FL/Fl.H ****   static int event_is_click()	{return e_is_click;}
 662:fltk-1.3.4-1/FL/Fl.H ****   /**
 663:fltk-1.3.4-1/FL/Fl.H ****    Clears the value returned by Fl::event_is_click().  
 664:fltk-1.3.4-1/FL/Fl.H ****    Useful to prevent the <I>next</I>
 665:fltk-1.3.4-1/FL/Fl.H ****    click from being counted as a double-click or to make a popup menu
 666:fltk-1.3.4-1/FL/Fl.H ****    pick an item with a single click.  Don't pass non-zero to this. 
 667:fltk-1.3.4-1/FL/Fl.H ****   */
 668:fltk-1.3.4-1/FL/Fl.H ****   static void event_is_click(int i) {e_is_click = i;}
 669:fltk-1.3.4-1/FL/Fl.H ****   /**
 670:fltk-1.3.4-1/FL/Fl.H ****     Gets which particular mouse button caused the current event.
 671:fltk-1.3.4-1/FL/Fl.H **** 
 672:fltk-1.3.4-1/FL/Fl.H ****     This returns garbage if the most recent event was not a FL_PUSH or FL_RELEASE event.
 673:fltk-1.3.4-1/FL/Fl.H ****     \retval FL_LEFT_MOUSE \retval FL_MIDDLE_MOUSE \retval FL_RIGHT_MOUSE.
 674:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::event_buttons()
 675:fltk-1.3.4-1/FL/Fl.H ****   */
 676:fltk-1.3.4-1/FL/Fl.H ****   static int event_button()	{return e_keysym-FL_Button;}
 677:fltk-1.3.4-1/FL/Fl.H ****   /**
 678:fltk-1.3.4-1/FL/Fl.H ****     Returns the keyboard and mouse button states of the last event.
 679:fltk-1.3.4-1/FL/Fl.H **** 
 680:fltk-1.3.4-1/FL/Fl.H ****     This is a bitfield of what shift states were on and what mouse buttons
 681:fltk-1.3.4-1/FL/Fl.H ****     were held down during the most recent event.
 682:fltk-1.3.4-1/FL/Fl.H **** 
 683:fltk-1.3.4-1/FL/Fl.H ****     The legal event state bits are:
 684:fltk-1.3.4-1/FL/Fl.H **** 
 685:fltk-1.3.4-1/FL/Fl.H ****     - FL_SHIFT
 686:fltk-1.3.4-1/FL/Fl.H ****     - FL_CAPS_LOCK
 687:fltk-1.3.4-1/FL/Fl.H ****     - FL_CTRL
 688:fltk-1.3.4-1/FL/Fl.H ****     - FL_ALT
 689:fltk-1.3.4-1/FL/Fl.H ****     - FL_NUM_LOCK
 690:fltk-1.3.4-1/FL/Fl.H ****     - FL_META
 691:fltk-1.3.4-1/FL/Fl.H ****     - FL_SCROLL_LOCK
 692:fltk-1.3.4-1/FL/Fl.H ****     - FL_BUTTON1
 693:fltk-1.3.4-1/FL/Fl.H ****     - FL_BUTTON2
 694:fltk-1.3.4-1/FL/Fl.H ****     - FL_BUTTON3
 695:fltk-1.3.4-1/FL/Fl.H ****     
 696:fltk-1.3.4-1/FL/Fl.H ****     X servers do not agree on shift states, and FL_NUM_LOCK, FL_META, and
 697:fltk-1.3.4-1/FL/Fl.H ****     FL_SCROLL_LOCK may not work. The values were selected to match the
 698:fltk-1.3.4-1/FL/Fl.H ****     XFree86 server on Linux. In addition there is a bug in the way X works
 699:fltk-1.3.4-1/FL/Fl.H ****     so that the shift state is not correctly reported until the first event
 700:fltk-1.3.4-1/FL/Fl.H ****     <I>after</I> the shift key is pressed or released.
 701:fltk-1.3.4-1/FL/Fl.H ****   */
 702:fltk-1.3.4-1/FL/Fl.H ****   static int event_state()	{return e_state;}
 458              		.loc 3 702 0
 459 002c 8B2D0000 		movl	_ZN2Fl7e_stateE(%rip), %ebp
 459      0000
 460              	.LVL61:
 461              	.LBE59:
 462              	.LBE58:
 463              		.loc 1 59 0
 464 0032 0F45DA   		cmovne	%edx, %ebx
 465              	.LVL62:
 466              		.loc 1 64 0
 467 0035 89E8     		movl	%ebp, %eax
 468 0037 350000FF 		xorl	$2147418112, %eax
 468      7F
 469 003c 85D8     		testl	%ebx, %eax
 470 003e 7570     		jne	.L51
 471              		.loc 1 66 0
 472 0040 89D8     		movl	%ebx, %eax
 473 0042 31E8     		xorl	%ebp, %eax
 474              	.LVL63:
 475              		.loc 1 68 0
 476 0044 A900004C 		testl	$4980736, %eax
 476      00
 477 0049 7565     		jne	.L51
 478              		.loc 1 73 0
 479 004b A9000001 		testl	$65536, %eax
 479      00
 480              		.loc 1 70 0
 481 0050 0FB7DB   		movzwl	%bx, %ebx
 482              	.LVL64:
 483              		.loc 1 73 0
 484 0053 7508     		jne	.L53
 485 0055 3B1D0000 		cmpl	_ZN2Fl8e_keysymE(%rip), %ebx
 485      0000
 486 005b 7443     		je	.L55
 487              	.L53:
 488              		.loc 1 76 0
 489 005d 48633500 		movslq	_ZN2Fl8e_lengthE(%rip), %rsi
 489      000000
 490              	.LBB60:
 491              	.LBB61:
 703:fltk-1.3.4-1/FL/Fl.H **** 
 704:fltk-1.3.4-1/FL/Fl.H ****   /** Returns non-zero if any of the passed event state bits are turned on.
 705:fltk-1.3.4-1/FL/Fl.H **** 
 706:fltk-1.3.4-1/FL/Fl.H ****     Use \p mask to pass the event states you're interested in.
 707:fltk-1.3.4-1/FL/Fl.H ****     The legal event state bits are defined in Fl::event_state().
 708:fltk-1.3.4-1/FL/Fl.H ****   */
 709:fltk-1.3.4-1/FL/Fl.H ****   static int event_state(int mask) {return e_state&mask;}
 710:fltk-1.3.4-1/FL/Fl.H ****   /**
 711:fltk-1.3.4-1/FL/Fl.H ****     Gets which key on the keyboard was last pushed.
 712:fltk-1.3.4-1/FL/Fl.H **** 
 713:fltk-1.3.4-1/FL/Fl.H ****     The returned integer 'key code' is not necessarily a text
 714:fltk-1.3.4-1/FL/Fl.H ****     equivalent for the keystroke. For instance: if someone presses '5' on the 
 715:fltk-1.3.4-1/FL/Fl.H ****     numeric keypad with numlock on, Fl::event_key() may return the 'key code'
 716:fltk-1.3.4-1/FL/Fl.H ****     for this key, and NOT the character '5'. To always get the '5', use Fl::event_text() instead.
 717:fltk-1.3.4-1/FL/Fl.H ****     
 718:fltk-1.3.4-1/FL/Fl.H ****     \returns an integer 'key code', or 0 if the last event was not a key press or release.
 719:fltk-1.3.4-1/FL/Fl.H ****     \see int event_key(int), event_text(), compose(int&).
 720:fltk-1.3.4-1/FL/Fl.H ****   */
 721:fltk-1.3.4-1/FL/Fl.H ****   static int event_key()	{return e_keysym;}
 722:fltk-1.3.4-1/FL/Fl.H ****   /**
 723:fltk-1.3.4-1/FL/Fl.H ****     Returns the keycode of the last key event, regardless of the NumLock state.
 724:fltk-1.3.4-1/FL/Fl.H ****       
 725:fltk-1.3.4-1/FL/Fl.H ****     If NumLock is deactivated, FLTK translates events from the 
 726:fltk-1.3.4-1/FL/Fl.H ****     numeric keypad into the corresponding arrow key events. 
 727:fltk-1.3.4-1/FL/Fl.H ****     event_key() returns the translated key code, whereas
 728:fltk-1.3.4-1/FL/Fl.H ****     event_original_key() returns the keycode before NumLock translation.
 729:fltk-1.3.4-1/FL/Fl.H ****   */
 730:fltk-1.3.4-1/FL/Fl.H ****   static int event_original_key(){return e_original_keysym;}
 731:fltk-1.3.4-1/FL/Fl.H ****   /** 
 732:fltk-1.3.4-1/FL/Fl.H ****     Returns true if the given \p key was held
 733:fltk-1.3.4-1/FL/Fl.H ****     down (or pressed) <I>during</I> the last event.  This is constant until
 734:fltk-1.3.4-1/FL/Fl.H ****     the next event is read from the server.
 735:fltk-1.3.4-1/FL/Fl.H ****     
 736:fltk-1.3.4-1/FL/Fl.H ****     Fl::get_key(int) returns true if the given key is held down <I>now</I>.
 737:fltk-1.3.4-1/FL/Fl.H ****     Under X this requires a round-trip to the server and is <I>much</I>
 738:fltk-1.3.4-1/FL/Fl.H ****     slower than Fl::event_key(int).
 739:fltk-1.3.4-1/FL/Fl.H ****     
 740:fltk-1.3.4-1/FL/Fl.H ****     Keys are identified by the <I>unshifted</I> values. FLTK defines a
 741:fltk-1.3.4-1/FL/Fl.H ****     set of symbols that should work on most modern machines for every key
 742:fltk-1.3.4-1/FL/Fl.H ****     on the keyboard:
 743:fltk-1.3.4-1/FL/Fl.H ****     
 744:fltk-1.3.4-1/FL/Fl.H ****     \li All keys on the main keyboard producing a printable ASCII
 745:fltk-1.3.4-1/FL/Fl.H **** 	character use the value of that ASCII character (as though shift,
 746:fltk-1.3.4-1/FL/Fl.H **** 	ctrl, and caps lock were not on). The space bar is 32.
 747:fltk-1.3.4-1/FL/Fl.H ****     \li All keys on the numeric keypad producing a printable ASCII
 748:fltk-1.3.4-1/FL/Fl.H **** 	character use the value of that ASCII character plus FL_KP.
 749:fltk-1.3.4-1/FL/Fl.H **** 	The highest possible value is FL_KP_Last so you can
 750:fltk-1.3.4-1/FL/Fl.H **** 	range-check to see if something is  on the keypad.
 751:fltk-1.3.4-1/FL/Fl.H ****     \li All numbered function keys use the number on the function key plus 
 752:fltk-1.3.4-1/FL/Fl.H **** 	FL_F.  The highest possible number is FL_F_Last, so you
 753:fltk-1.3.4-1/FL/Fl.H **** 	can range-check a value.
 754:fltk-1.3.4-1/FL/Fl.H ****     \li Buttons on the mouse are considered keys, and use the button
 755:fltk-1.3.4-1/FL/Fl.H **** 	number (where the left button is 1) plus FL_Button.
 756:fltk-1.3.4-1/FL/Fl.H ****     \li All other keys on the keypad have a symbol: FL_Escape,
 757:fltk-1.3.4-1/FL/Fl.H **** 	FL_BackSpace, FL_Tab, FL_Enter, FL_Print, FL_Scroll_Lock, FL_Pause,
 758:fltk-1.3.4-1/FL/Fl.H **** 	FL_Insert, FL_Home, FL_Page_Up, FL_Delete, FL_End, FL_Page_Down,
 759:fltk-1.3.4-1/FL/Fl.H **** 	FL_Left, FL_Up, FL_Right, FL_Down, FL_Iso_Key, FL_Shift_L, FL_Shift_R,
 760:fltk-1.3.4-1/FL/Fl.H **** 	FL_Control_L, FL_Control_R, FL_Caps_Lock, FL_Alt_L, FL_Alt_R,
 761:fltk-1.3.4-1/FL/Fl.H **** 	FL_Meta_L, FL_Meta_R, FL_Menu, FL_Num_Lock, FL_KP_Enter.  Be
 762:fltk-1.3.4-1/FL/Fl.H **** 	careful not to confuse these with the very similar, but all-caps,
 763:fltk-1.3.4-1/FL/Fl.H **** 	symbols used by Fl::event_state().
 764:fltk-1.3.4-1/FL/Fl.H **** 
 765:fltk-1.3.4-1/FL/Fl.H ****     On X Fl::get_key(FL_Button+n) does not work.
 766:fltk-1.3.4-1/FL/Fl.H ****     
 767:fltk-1.3.4-1/FL/Fl.H ****     On WIN32 Fl::get_key(FL_KP_Enter) and Fl::event_key(FL_KP_Enter) do not work.
 768:fltk-1.3.4-1/FL/Fl.H ****   */
 769:fltk-1.3.4-1/FL/Fl.H ****   static int event_key(int key);
 770:fltk-1.3.4-1/FL/Fl.H ****   /** 
 771:fltk-1.3.4-1/FL/Fl.H ****     Returns true if the given \p key is held down <I>now</I>.  
 772:fltk-1.3.4-1/FL/Fl.H ****     Under X this requires a round-trip to the server and is <I>much</I>
 773:fltk-1.3.4-1/FL/Fl.H ****     slower than Fl::event_key(int). \see event_key(int)
 774:fltk-1.3.4-1/FL/Fl.H ****   */
 775:fltk-1.3.4-1/FL/Fl.H ****   static int get_key(int key); // platform dependent
 776:fltk-1.3.4-1/FL/Fl.H ****   /** 
 777:fltk-1.3.4-1/FL/Fl.H ****     Returns the text associated with the current event, including FL_PASTE or FL_DND_RELEASE events
 778:fltk-1.3.4-1/FL/Fl.H ****     This can be used in response to FL_KEYUP, FL_KEYDOWN, FL_PASTE, and FL_DND_RELEASE.
 779:fltk-1.3.4-1/FL/Fl.H **** 
 780:fltk-1.3.4-1/FL/Fl.H ****     When responding to FL_KEYUP/FL_KEYDOWN, use this function instead of Fl::event_key()
 781:fltk-1.3.4-1/FL/Fl.H ****     to get the text equivalent of keystrokes suitable for inserting into strings 
 782:fltk-1.3.4-1/FL/Fl.H ****     and text widgets.
 783:fltk-1.3.4-1/FL/Fl.H **** 
 784:fltk-1.3.4-1/FL/Fl.H ****     The returned string is guaranteed to be NULL terminated.
 785:fltk-1.3.4-1/FL/Fl.H ****     However, see Fl::event_length() for the actual length of the string,
 786:fltk-1.3.4-1/FL/Fl.H ****     in case the string itself contains NULLs that are part of the text data.
 787:fltk-1.3.4-1/FL/Fl.H **** 
 788:fltk-1.3.4-1/FL/Fl.H ****     \returns A NULL terminated text string equivalent of the last keystroke.
 789:fltk-1.3.4-1/FL/Fl.H ****    */
 790:fltk-1.3.4-1/FL/Fl.H ****   static const char* event_text() {return e_text;}
 492              		.loc 3 790 0
 493 0064 488B3D00 		movq	_ZN2Fl6e_textE(%rip), %rdi
 493      000000
 494              	.LBE61:
 495              	.LBE60:
 496              		.loc 1 76 0
 497 006b 31D2     		xorl	%edx, %edx
 498 006d 4801FE   		addq	%rdi, %rsi
 499 0070 E8000000 		call	fl_utf8decode
 499      00
 500              	.LVL65:
 501              		.loc 1 77 0
 502 0075 F7C50000 		testl	$131072, %ebp
 502      0200
 503 007b 7504     		jne	.L57
 504 007d 39C3     		cmpl	%eax, %ebx
 505 007f 741F     		je	.L55
 506              	.L57:
 507              		.loc 1 80 0
 508 0081 81E50000 		andl	$262144, %ebp
 508      0400
 509 0087 7427     		je	.L51
 510              		.loc 1 80 0 is_stmt 0 discriminator 1
 511 0089 8D53C1   		leal	-63(%rbx), %edx
 512 008c 83FA20   		cmpl	$32, %edx
 513 008f 771F     		ja	.L51
 514              		.loc 1 81 0 is_stmt 1
 515 0091 83F340   		xorl	$64, %ebx
 516              	.LVL66:
 517 0094 39D8     		cmpl	%ebx, %eax
 518 0096 7518     		jne	.L51
 519              	.LVL67:
 520 0098 0F1F8400 		.p2align 4,,10
 520      00000000 
 521              		.p2align 3
 522              	.L55:
 523              		.loc 1 73 0
 524 00a0 B8010000 		movl	$1, %eax
 524      00
 525 00a5 EB0B     		jmp	.L67
 526 00a7 660F1F84 		.p2align 4,,10
 526      00000000 
 526      00
 527              		.p2align 3
 528              	.L51:
 529              		.loc 1 82 0
 530 00b0 31C0     		xorl	%eax, %eax
 531              	.L67:
 532              		.loc 1 83 0
 533 00b2 4883C408 		addq	$8, %rsp
 534              		.cfi_def_cfa_offset 24
 535 00b6 5B       		popq	%rbx
 536              		.cfi_restore 3
 537              		.cfi_def_cfa_offset 16
 538 00b7 5D       		popq	%rbp
 539              		.cfi_restore 6
 540              		.cfi_def_cfa_offset 8
 541 00b8 C3       		ret
 542              		.cfi_endproc
 543              	.LFE492:
 545              		.section	.text.unlikely._ZN2Fl13test_shortcutEj
 546              	.LCOLDE3:
 547              		.section	.text._ZN2Fl13test_shortcutEj
 548              	.LHOTE3:
 549              		.section	.text.unlikely._Z17fl_shortcut_labelj,"ax",@progbits
 550              	.LCOLDB4:
 551              		.section	.text._Z17fl_shortcut_labelj,"ax",@progbits
 552              	.LHOTB4:
 553              		.p2align 4,,15
 554              		.globl	_Z17fl_shortcut_labelj
 556              	_Z17fl_shortcut_labelj:
 557              	.LFB493:
 558              		.loc 1 199 0
 559              		.cfi_startproc
 560              	.LVL68:
 561              	.LBB62:
 562              	.LBB63:
 563              		.loc 1 252 0
 564 0000 85FF     		testl	%edi, %edi
 565 0002 7514     		jne	.L76
 566 0004 C6050000 		movb	$0, _ZZ17fl_shortcut_labeljPPKcE3buf(%rip)
 566      000000
 567              	.LVL69:
 568              	.LBE63:
 569              	.LBE62:
 570              		.loc 1 201 0
 571 000b B8000000 		movl	$_ZZ17fl_shortcut_labeljPPKcE3buf, %eax
 571      00
 572 0010 C3       		ret
 573              	.LVL70:
 574              		.p2align 4,,10
 575 0011 0F1F8000 		.p2align 3
 575      000000
 576              	.L76:
 577              	.LBB65:
 578              	.LBB64:
 579 0018 31F6     		xorl	%esi, %esi
 580 001a E9000000 		jmp	_Z17fl_shortcut_labeljPPKc.part.2
 580      00
 581              	.LVL71:
 582              	.LBE64:
 583              	.LBE65:
 584              		.cfi_endproc
 585              	.LFE493:
 587              		.section	.text.unlikely._Z17fl_shortcut_labelj
 588              	.LCOLDE4:
 589              		.section	.text._Z17fl_shortcut_labelj
 590              	.LHOTE4:
 591              		.section	.text.unlikely._Z17fl_shortcut_labeljPPKc,"ax",@progbits
 592              	.LCOLDB5:
 593              		.section	.text._Z17fl_shortcut_labeljPPKc,"ax",@progbits
 594              	.LHOTB5:
 595              		.p2align 4,,15
 596              		.globl	_Z17fl_shortcut_labeljPPKc
 598              	_Z17fl_shortcut_labeljPPKc:
 599              	.LFB495:
 600              		.loc 1 247 0
 601              		.cfi_startproc
 602              	.LVL72:
 603              		.loc 1 251 0
 604 0000 4885F6   		testq	%rsi, %rsi
 605 0003 7407     		je	.L78
 606              		.loc 1 251 0 is_stmt 0 discriminator 1
 607 0005 48C70600 		movq	$_ZZ17fl_shortcut_labeljPPKcE3buf, (%rsi)
 607      000000
 608              	.L78:
 609              		.loc 1 252 0 is_stmt 1
 610 000c 85FF     		testl	%edi, %edi
 611 000e 7510     		jne	.L86
 612              		.loc 1 252 0 is_stmt 0 discriminator 1
 613 0010 C6050000 		movb	$0, _ZZ17fl_shortcut_labeljPPKcE3buf(%rip)
 613      000000
 614              		.loc 1 324 0 is_stmt 1 discriminator 1
 615 0017 B8000000 		movl	$_ZZ17fl_shortcut_labeljPPKcE3buf, %eax
 615      00
 616 001c C3       		ret
 617 001d 0F1F00   		.p2align 4,,10
 618              		.p2align 3
 619              	.L86:
 620 0020 E9000000 		jmp	_Z17fl_shortcut_labeljPPKc.part.2
 620      00
 621              	.LVL73:
 622              		.cfi_endproc
 623              	.LFE495:
 625              		.section	.text.unlikely._Z17fl_shortcut_labeljPPKc
 626              	.LCOLDE5:
 627              		.section	.text._Z17fl_shortcut_labeljPPKc
 628              	.LHOTE5:
 629              		.section	.rodata.str1.1
 630              	.LC6:
 631 0006 402100   		.string	"@!"
 632              		.section	.text.unlikely._Z15fl_old_shortcutPKc,"ax",@progbits
 633              	.LCOLDB7:
 634              		.section	.text._Z15fl_old_shortcutPKc,"ax",@progbits
 635              	.LHOTB7:
 636              		.p2align 4,,15
 637              		.globl	_Z15fl_old_shortcutPKc
 639              	_Z15fl_old_shortcutPKc:
 640              	.LFB496:
 641              		.loc 1 396 0
 642              		.cfi_startproc
 643              	.LVL74:
 644              		.loc 1 397 0
 645 0000 4885FF   		testq	%rdi, %rdi
 646 0003 0F848F00 		je	.L96
 646      0000
 647              		.loc 1 396 0 discriminator 2
 648 0009 4155     		pushq	%r13
 649              		.cfi_def_cfa_offset 16
 650              		.cfi_offset 13, -16
 651 000b 4154     		pushq	%r12
 652              		.cfi_def_cfa_offset 24
 653              		.cfi_offset 12, -24
 654              		.loc 1 397 0 discriminator 2
 655 000d 31C0     		xorl	%eax, %eax
 656              		.loc 1 396 0 discriminator 2
 657 000f 55       		pushq	%rbp
 658              		.cfi_def_cfa_offset 32
 659              		.cfi_offset 6, -32
 660 0010 53       		pushq	%rbx
 661              		.cfi_def_cfa_offset 40
 662              		.cfi_offset 3, -40
 663 0011 4889FD   		movq	%rdi, %rbp
 664 0014 4883EC08 		subq	$8, %rsp
 665              		.cfi_def_cfa_offset 48
 666              		.loc 1 397 0 discriminator 2
 667 0018 0FB61F   		movzbl	(%rdi), %ebx
 668 001b 84DB     		testb	%bl, %bl
 669 001d 7446     		je	.L88
 670              		.loc 1 398 0
 671 001f 440FB66F 		movzbl	1(%rdi), %r13d
 671      01
 672 0024 4584ED   		testb	%r13b, %r13b
 673 0027 7447     		je	.L108
 674              	.LVL75:
 675              	.L89:
 676              		.loc 1 399 0
 677 0029 4531E4   		xorl	%r12d, %r12d
 678              		.loc 1 400 0
 679 002c 80FB23   		cmpb	$35, %bl
 680 002f 746F     		je	.L109
 681              	.LVL76:
 682              	.L90:
 683              		.loc 1 401 0
 684 0031 80FB2B   		cmpb	$43, %bl
 685 0034 0F84BE00 		je	.L110
 685      0000
 686              	.L91:
 687              		.loc 1 402 0
 688 003a 80FB5E   		cmpb	$94, %bl
 689 003d 0F849D00 		je	.L111
 689      0000
 690              	.L92:
 691              		.loc 1 403 0
 692 0043 80FB21   		cmpb	$33, %bl
 693 0046 0F847C00 		je	.L112
 693      0000
 694              	.L93:
 695              		.loc 1 404 0
 696 004c 80FB40   		cmpb	$64, %bl
 697 004f 745F     		je	.L113
 698              	.L94:
 699              		.loc 1 405 0
 700 0051 84DB     		testb	%bl, %bl
 701 0053 740A     		je	.L95
 702              		.loc 1 405 0 is_stmt 0 discriminator 1
 703 0055 807D0100 		cmpb	$0, 1(%rbp)
 704 0059 0F85B100 		jne	.L114
 704      0000
 705              	.L95:
 706              		.loc 1 406 0 is_stmt 1
 707 005f 0FBEC3   		movsbl	%bl, %eax
 708 0062 4409E0   		orl	%r12d, %eax
 709              	.LVL77:
 710              	.L88:
 711              		.loc 1 407 0
 712 0065 4883C408 		addq	$8, %rsp
 713              		.cfi_remember_state
 714              		.cfi_def_cfa_offset 40
 715 0069 5B       		popq	%rbx
 716              		.cfi_restore 3
 717              		.cfi_def_cfa_offset 32
 718 006a 5D       		popq	%rbp
 719              		.cfi_restore 6
 720              		.cfi_def_cfa_offset 24
 721              	.LVL78:
 722 006b 415C     		popq	%r12
 723              		.cfi_restore 12
 724              		.cfi_def_cfa_offset 16
 725 006d 415D     		popq	%r13
 726              		.cfi_restore 13
 727              		.cfi_def_cfa_offset 8
 728 006f C3       		ret
 729              	.LVL79:
 730              		.p2align 4,,10
 731              		.p2align 3
 732              	.L108:
 733              		.cfi_restore_state
 734              	.LBB66:
 735              	.LBB67:
 736              		.file 4 "/usr/include/string.h"
   1:/usr/include/string.h **** /* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   2:/usr/include/string.h ****    This file is part of the GNU C Library.
   3:/usr/include/string.h **** 
   4:/usr/include/string.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/string.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/string.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/string.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/string.h **** 
   9:/usr/include/string.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/string.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/string.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/string.h ****    Lesser General Public License for more details.
  13:/usr/include/string.h **** 
  14:/usr/include/string.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/string.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/string.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/string.h **** 
  18:/usr/include/string.h **** /*
  19:/usr/include/string.h ****  *	ISO C99 Standard: 7.21 String handling	<string.h>
  20:/usr/include/string.h ****  */
  21:/usr/include/string.h **** 
  22:/usr/include/string.h **** #ifndef	_STRING_H
  23:/usr/include/string.h **** #define	_STRING_H	1
  24:/usr/include/string.h **** 
  25:/usr/include/string.h **** #include <features.h>
  26:/usr/include/string.h **** 
  27:/usr/include/string.h **** __BEGIN_DECLS
  28:/usr/include/string.h **** 
  29:/usr/include/string.h **** /* Get size_t and NULL from <stddef.h>.  */
  30:/usr/include/string.h **** #define	__need_size_t
  31:/usr/include/string.h **** #define	__need_NULL
  32:/usr/include/string.h **** #include <stddef.h>
  33:/usr/include/string.h **** 
  34:/usr/include/string.h **** /* Tell the caller that we provide correct C++ prototypes.  */
  35:/usr/include/string.h **** #if defined __cplusplus && __GNUC_PREREQ (4, 4)
  36:/usr/include/string.h **** # define __CORRECT_ISO_CPP_STRING_H_PROTO
  37:/usr/include/string.h **** #endif
  38:/usr/include/string.h **** 
  39:/usr/include/string.h **** 
  40:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
  41:/usr/include/string.h **** /* Copy N bytes of SRC to DEST.  */
  42:/usr/include/string.h **** extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
  43:/usr/include/string.h **** 		     size_t __n) __THROW __nonnull ((1, 2));
  44:/usr/include/string.h **** /* Copy N bytes of SRC to DEST, guaranteeing
  45:/usr/include/string.h ****    correct behavior for overlapping strings.  */
  46:/usr/include/string.h **** extern void *memmove (void *__dest, const void *__src, size_t __n)
  47:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
  48:/usr/include/string.h **** __END_NAMESPACE_STD
  49:/usr/include/string.h **** 
  50:/usr/include/string.h **** /* Copy no more than N bytes of SRC to DEST, stopping when C is found.
  51:/usr/include/string.h ****    Return the position in DEST one byte past where C was copied,
  52:/usr/include/string.h ****    or NULL if C was not found in the first N bytes of SRC.  */
  53:/usr/include/string.h **** #if defined __USE_MISC || defined __USE_XOPEN
  54:/usr/include/string.h **** extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
  55:/usr/include/string.h **** 		      int __c, size_t __n)
  56:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
  57:/usr/include/string.h **** #endif /* Misc || X/Open.  */
  58:/usr/include/string.h **** 
  59:/usr/include/string.h **** 
  60:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
  61:/usr/include/string.h **** /* Set N bytes of S to C.  */
  62:/usr/include/string.h **** extern void *memset (void *__s, int __c, size_t __n) __THROW __nonnull ((1));
  63:/usr/include/string.h **** 
  64:/usr/include/string.h **** /* Compare N bytes of S1 and S2.  */
  65:/usr/include/string.h **** extern int memcmp (const void *__s1, const void *__s2, size_t __n)
  66:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
  67:/usr/include/string.h **** 
  68:/usr/include/string.h **** /* Search N bytes of S for C.  */
  69:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
  70:/usr/include/string.h **** extern "C++"
  71:/usr/include/string.h **** {
  72:/usr/include/string.h **** extern void *memchr (void *__s, int __c, size_t __n)
  73:/usr/include/string.h ****       __THROW __asm ("memchr") __attribute_pure__ __nonnull ((1));
  74:/usr/include/string.h **** extern const void *memchr (const void *__s, int __c, size_t __n)
  75:/usr/include/string.h ****       __THROW __asm ("memchr") __attribute_pure__ __nonnull ((1));
  76:/usr/include/string.h **** 
  77:/usr/include/string.h **** # ifdef __OPTIMIZE__
  78:/usr/include/string.h **** __extern_always_inline void *
  79:/usr/include/string.h **** memchr (void *__s, int __c, size_t __n) __THROW
  80:/usr/include/string.h **** {
  81:/usr/include/string.h ****   return __builtin_memchr (__s, __c, __n);
  82:/usr/include/string.h **** }
  83:/usr/include/string.h **** 
  84:/usr/include/string.h **** __extern_always_inline const void *
  85:/usr/include/string.h **** memchr (const void *__s, int __c, size_t __n) __THROW
  86:/usr/include/string.h **** {
  87:/usr/include/string.h ****   return __builtin_memchr (__s, __c, __n);
  88:/usr/include/string.h **** }
  89:/usr/include/string.h **** # endif
  90:/usr/include/string.h **** }
  91:/usr/include/string.h **** #else
  92:/usr/include/string.h **** extern void *memchr (const void *__s, int __c, size_t __n)
  93:/usr/include/string.h ****       __THROW __attribute_pure__ __nonnull ((1));
  94:/usr/include/string.h **** #endif
  95:/usr/include/string.h **** __END_NAMESPACE_STD
  96:/usr/include/string.h **** 
  97:/usr/include/string.h **** #ifdef __USE_GNU
  98:/usr/include/string.h **** /* Search in S for C.  This is similar to `memchr' but there is no
  99:/usr/include/string.h ****    length limit.  */
 100:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 101:/usr/include/string.h **** extern "C++" void *rawmemchr (void *__s, int __c)
 102:/usr/include/string.h ****      __THROW __asm ("rawmemchr") __attribute_pure__ __nonnull ((1));
 103:/usr/include/string.h **** extern "C++" const void *rawmemchr (const void *__s, int __c)
 104:/usr/include/string.h ****      __THROW __asm ("rawmemchr") __attribute_pure__ __nonnull ((1));
 105:/usr/include/string.h **** # else
 106:/usr/include/string.h **** extern void *rawmemchr (const void *__s, int __c)
 107:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 108:/usr/include/string.h **** # endif
 109:/usr/include/string.h **** 
 110:/usr/include/string.h **** /* Search N bytes of S for the final occurrence of C.  */
 111:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 112:/usr/include/string.h **** extern "C++" void *memrchr (void *__s, int __c, size_t __n)
 113:/usr/include/string.h ****       __THROW __asm ("memrchr") __attribute_pure__ __nonnull ((1));
 114:/usr/include/string.h **** extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
 115:/usr/include/string.h ****       __THROW __asm ("memrchr") __attribute_pure__ __nonnull ((1));
 116:/usr/include/string.h **** # else
 117:/usr/include/string.h **** extern void *memrchr (const void *__s, int __c, size_t __n)
 118:/usr/include/string.h ****       __THROW __attribute_pure__ __nonnull ((1));
 119:/usr/include/string.h **** # endif
 120:/usr/include/string.h **** #endif
 121:/usr/include/string.h **** 
 122:/usr/include/string.h **** 
 123:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 124:/usr/include/string.h **** /* Copy SRC to DEST.  */
 125:/usr/include/string.h **** extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
 126:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 127:/usr/include/string.h **** /* Copy no more than N characters of SRC to DEST.  */
 128:/usr/include/string.h **** extern char *strncpy (char *__restrict __dest,
 129:/usr/include/string.h **** 		      const char *__restrict __src, size_t __n)
 130:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 131:/usr/include/string.h **** 
 132:/usr/include/string.h **** /* Append SRC onto DEST.  */
 133:/usr/include/string.h **** extern char *strcat (char *__restrict __dest, const char *__restrict __src)
 134:/usr/include/string.h ****      __THROW __nonnull ((1, 2));
 135:/usr/include/string.h **** /* Append no more than N characters from SRC onto DEST.  */
 136:/usr/include/string.h **** extern char *strncat (char *__restrict __dest, const char *__restrict __src,
 137:/usr/include/string.h **** 		      size_t __n) __THROW __nonnull ((1, 2));
 138:/usr/include/string.h **** 
 139:/usr/include/string.h **** /* Compare S1 and S2.  */
 140:/usr/include/string.h **** extern int strcmp (const char *__s1, const char *__s2)
 141:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 142:/usr/include/string.h **** /* Compare N characters of S1 and S2.  */
 143:/usr/include/string.h **** extern int strncmp (const char *__s1, const char *__s2, size_t __n)
 144:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 145:/usr/include/string.h **** 
 146:/usr/include/string.h **** /* Compare the collated forms of S1 and S2.  */
 147:/usr/include/string.h **** extern int strcoll (const char *__s1, const char *__s2)
 148:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 149:/usr/include/string.h **** /* Put a transformation of SRC into no more than N bytes of DEST.  */
 150:/usr/include/string.h **** extern size_t strxfrm (char *__restrict __dest,
 151:/usr/include/string.h **** 		       const char *__restrict __src, size_t __n)
 152:/usr/include/string.h ****      __THROW __nonnull ((2));
 153:/usr/include/string.h **** __END_NAMESPACE_STD
 154:/usr/include/string.h **** 
 155:/usr/include/string.h **** #ifdef __USE_XOPEN2K8
 156:/usr/include/string.h **** /* The following functions are equivalent to the both above but they
 157:/usr/include/string.h ****    take the locale they use for the collation as an extra argument.
 158:/usr/include/string.h ****    This is not standardsized but something like will come.  */
 159:/usr/include/string.h **** # include <xlocale.h>
 160:/usr/include/string.h **** 
 161:/usr/include/string.h **** /* Compare the collated forms of S1 and S2 using rules from L.  */
 162:/usr/include/string.h **** extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
 163:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2, 3));
 164:/usr/include/string.h **** /* Put a transformation of SRC into no more than N bytes of DEST.  */
 165:/usr/include/string.h **** extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
 166:/usr/include/string.h **** 			 __locale_t __l) __THROW __nonnull ((2, 4));
 167:/usr/include/string.h **** #endif
 168:/usr/include/string.h **** 
 169:/usr/include/string.h **** #if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
 170:/usr/include/string.h **** /* Duplicate S, returning an identical malloc'd string.  */
 171:/usr/include/string.h **** extern char *strdup (const char *__s)
 172:/usr/include/string.h ****      __THROW __attribute_malloc__ __nonnull ((1));
 173:/usr/include/string.h **** #endif
 174:/usr/include/string.h **** 
 175:/usr/include/string.h **** /* Return a malloc'd copy of at most N bytes of STRING.  The
 176:/usr/include/string.h ****    resultant string is terminated even if no null terminator
 177:/usr/include/string.h ****    appears before STRING[N].  */
 178:/usr/include/string.h **** #if defined __USE_XOPEN2K8
 179:/usr/include/string.h **** extern char *strndup (const char *__string, size_t __n)
 180:/usr/include/string.h ****      __THROW __attribute_malloc__ __nonnull ((1));
 181:/usr/include/string.h **** #endif
 182:/usr/include/string.h **** 
 183:/usr/include/string.h **** #if defined __USE_GNU && defined __GNUC__
 184:/usr/include/string.h **** /* Duplicate S, returning an identical alloca'd string.  */
 185:/usr/include/string.h **** # define strdupa(s)							      \
 186:/usr/include/string.h ****   (__extension__							      \
 187:/usr/include/string.h ****     ({									      \
 188:/usr/include/string.h ****       const char *__old = (s);						      \
 189:/usr/include/string.h ****       size_t __len = strlen (__old) + 1;				      \
 190:/usr/include/string.h ****       char *__new = (char *) __builtin_alloca (__len);			      \
 191:/usr/include/string.h ****       (char *) memcpy (__new, __old, __len);				      \
 192:/usr/include/string.h ****     }))
 193:/usr/include/string.h **** 
 194:/usr/include/string.h **** /* Return an alloca'd copy of at most N bytes of string.  */
 195:/usr/include/string.h **** # define strndupa(s, n)							      \
 196:/usr/include/string.h ****   (__extension__							      \
 197:/usr/include/string.h ****     ({									      \
 198:/usr/include/string.h ****       const char *__old = (s);						      \
 199:/usr/include/string.h ****       size_t __len = strnlen (__old, (n));				      \
 200:/usr/include/string.h ****       char *__new = (char *) __builtin_alloca (__len + 1);		      \
 201:/usr/include/string.h ****       __new[__len] = '\0';						      \
 202:/usr/include/string.h ****       (char *) memcpy (__new, __old, __len);				      \
 203:/usr/include/string.h ****     }))
 204:/usr/include/string.h **** #endif
 205:/usr/include/string.h **** 
 206:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 207:/usr/include/string.h **** /* Find the first occurrence of C in S.  */
 208:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 209:/usr/include/string.h **** extern "C++"
 210:/usr/include/string.h **** {
 211:/usr/include/string.h **** extern char *strchr (char *__s, int __c)
 212:/usr/include/string.h ****      __THROW __asm ("strchr") __attribute_pure__ __nonnull ((1));
 213:/usr/include/string.h **** extern const char *strchr (const char *__s, int __c)
 214:/usr/include/string.h ****      __THROW __asm ("strchr") __attribute_pure__ __nonnull ((1));
 215:/usr/include/string.h **** 
 216:/usr/include/string.h **** # ifdef __OPTIMIZE__
 217:/usr/include/string.h **** __extern_always_inline char *
 218:/usr/include/string.h **** strchr (char *__s, int __c) __THROW
 219:/usr/include/string.h **** {
 220:/usr/include/string.h ****   return __builtin_strchr (__s, __c);
 221:/usr/include/string.h **** }
 222:/usr/include/string.h **** 
 223:/usr/include/string.h **** __extern_always_inline const char *
 224:/usr/include/string.h **** strchr (const char *__s, int __c) __THROW
 225:/usr/include/string.h **** {
 226:/usr/include/string.h ****   return __builtin_strchr (__s, __c);
 737              		.loc 4 226 0 discriminator 1
 738 0070 440FBEE3 		movsbl	%bl, %r12d
 739              	.LVL80:
 740 0074 BF000000 		movl	$.LC6, %edi
 740      00
 741              	.LVL81:
 742 0079 4489E6   		movl	%r12d, %esi
 743 007c E8000000 		call	strchr
 743      00
 744              	.LVL82:
 745              	.LBE67:
 746              	.LBE66:
 747              		.loc 1 398 0 discriminator 1
 748 0081 4885C0   		testq	%rax, %rax
 749 0084 74A3     		je	.L89
 750              		.loc 1 407 0 discriminator 2
 751 0086 4883C408 		addq	$8, %rsp
 752              		.cfi_def_cfa_offset 40
 753              		.loc 1 398 0 discriminator 2
 754 008a 4489E0   		movl	%r12d, %eax
 755              		.loc 1 407 0 discriminator 2
 756 008d 5B       		popq	%rbx
 757              		.cfi_restore 3
 758              		.cfi_def_cfa_offset 32
 759 008e 5D       		popq	%rbp
 760              		.cfi_restore 6
 761              		.cfi_def_cfa_offset 24
 762              	.LVL83:
 763 008f 415C     		popq	%r12
 764              		.cfi_restore 12
 765              		.cfi_def_cfa_offset 16
 766 0091 415D     		popq	%r13
 767              		.cfi_restore 13
 768              		.cfi_def_cfa_offset 8
 769 0093 C3       		ret
 770              	.LVL84:
 771              		.p2align 4,,10
 772 0094 0F1F4000 		.p2align 3
 773              	.L96:
 774              		.loc 1 397 0
 775 0098 31C0     		xorl	%eax, %eax
 776 009a C3       		ret
 777              	.LVL85:
 778 009b 0F1F4400 		.p2align 4,,10
 778      00
 779              		.p2align 3
 780              	.L109:
 781              		.cfi_def_cfa_offset 48
 782              		.cfi_offset 3, -40
 783              		.cfi_offset 6, -32
 784              		.cfi_offset 12, -24
 785              		.cfi_offset 13, -16
 786              		.loc 1 400 0 discriminator 1
 787 00a0 4883C501 		addq	$1, %rbp
 788              	.LVL86:
 789              		.loc 1 398 0 discriminator 1
 790 00a4 4489EB   		movl	%r13d, %ebx
 791              		.loc 1 400 0 discriminator 1
 792 00a7 41BC0000 		movl	$524288, %r12d
 792      0800
 793 00ad EB82     		jmp	.L90
 794              	.LVL87:
 795 00af 90       		.p2align 4,,10
 796              		.p2align 3
 797              	.L113:
 798 00b0 0FB65D01 		movzbl	1(%rbp), %ebx
 799              		.loc 1 404 0 discriminator 1
 800 00b4 4181CC00 		orl	$262144, %r12d
 800      000400
 801              	.LVL88:
 802 00bb 4883C501 		addq	$1, %rbp
 803              	.LVL89:
 804 00bf EB90     		jmp	.L94
 805              		.p2align 4,,10
 806 00c1 0F1F8000 		.p2align 3
 806      000000
 807              	.L112:
 808 00c8 0FB65D01 		movzbl	1(%rbp), %ebx
 809              		.loc 1 403 0 discriminator 1
 810 00cc 4181CC00 		orl	$4194304, %r12d
 810      004000
 811              	.LVL90:
 812 00d3 4883C501 		addq	$1, %rbp
 813              	.LVL91:
 814 00d7 E970FFFF 		jmp	.L93
 814      FF
 815 00dc 0F1F4000 		.p2align 4,,10
 816              		.p2align 3
 817              	.L111:
 818 00e0 0FB65D01 		movzbl	1(%rbp), %ebx
 819              		.loc 1 402 0 discriminator 1
 820 00e4 4181CC00 		orl	$262144, %r12d
 820      000400
 821              	.LVL92:
 822 00eb 4883C501 		addq	$1, %rbp
 823              	.LVL93:
 824 00ef E94FFFFF 		jmp	.L92
 824      FF
 825              		.p2align 4,,10
 826 00f4 0F1F4000 		.p2align 3
 827              	.L110:
 828 00f8 0FB65D01 		movzbl	1(%rbp), %ebx
 829              		.loc 1 401 0 discriminator 1
 830 00fc 4181CC00 		orl	$65536, %r12d
 830      000100
 831              	.LVL94:
 832 0103 4883C501 		addq	$1, %rbp
 833              	.LVL95:
 834 0107 E92EFFFF 		jmp	.L91
 834      FF
 835 010c 0F1F4000 		.p2align 4,,10
 836              		.p2align 3
 837              	.L114:
 838              		.loc 1 405 0 discriminator 2
 839 0110 31D2     		xorl	%edx, %edx
 840 0112 31F6     		xorl	%esi, %esi
 841 0114 4889EF   		movq	%rbp, %rdi
 842 0117 E8000000 		call	strtol
 842      00
 843              	.LVL96:
 844 011c 4409E0   		orl	%r12d, %eax
 845 011f E941FFFF 		jmp	.L88
 845      FF
 846              		.cfi_endproc
 847              	.LFE496:
 849              		.section	.text.unlikely._Z15fl_old_shortcutPKc
 850              	.LCOLDE7:
 851              		.section	.text._Z15fl_old_shortcutPKc
 852              	.LHOTE7:
 853              		.section	.text.unlikely._ZN9Fl_Widget14label_shortcutEPKc,"ax",@progbits
 854              		.align 2
 855              	.LCOLDB8:
 856              		.section	.text._ZN9Fl_Widget14label_shortcutEPKc,"ax",@progbits
 857              	.LHOTB8:
 858              		.align 2
 859              		.p2align 4,,15
 860              		.globl	_ZN9Fl_Widget14label_shortcutEPKc
 862              	_ZN9Fl_Widget14label_shortcutEPKc:
 863              	.LFB497:
 864              		.loc 1 423 0
 865              		.cfi_startproc
 866              	.LVL97:
 867              		.loc 1 424 0
 868 0000 4885FF   		testq	%rdi, %rdi
 869 0003 743F     		je	.L133
 870              	.LBB68:
 871              		.loc 1 426 0
 872 0005 0FB607   		movzbl	(%rdi), %eax
 873 0008 84C0     		testb	%al, %al
 874 000a 7438     		je	.L133
 875              	.LBE68:
 876              		.loc 1 423 0
 877 000c 53       		pushq	%rbx
 878              		.cfi_def_cfa_offset 16
 879              		.cfi_offset 3, -16
 880 000d EB0D     		jmp	.L120
 881              	.LVL98:
 882 000f 90       		.p2align 4,,10
 883              		.p2align 3
 884              	.L119:
 885              	.LBB71:
 886              		.loc 1 426 0
 887 0010 0FB64301 		movzbl	1(%rbx), %eax
 888              		.loc 1 433 0
 889 0014 488D7B01 		leaq	1(%rbx), %rdi
 890              	.LVL99:
 891              		.loc 1 426 0
 892 0018 84C0     		testb	%al, %al
 893 001a 7424     		je	.L118
 894              	.L120:
 895              	.LBB69:
 896              		.loc 1 427 0
 897 001c 3C26     		cmpb	$38, %al
 898 001e 4889FB   		movq	%rdi, %rbx
 899 0021 75ED     		jne	.L119
 900              	.LVL100:
 901              	.LBB70:
 902              		.loc 1 428 0
 903 0023 488D5F01 		leaq	1(%rdi), %rbx
 904              	.LVL101:
 905 0027 31D2     		xorl	%edx, %edx
 906 0029 31F6     		xorl	%esi, %esi
 907 002b 4889DF   		movq	%rbx, %rdi
 908              	.LVL102:
 909 002e E8000000 		call	fl_utf8decode
 909      00
 910              	.LVL103:
 911              		.loc 1 429 0
 912 0033 85C0     		testl	%eax, %eax
 913 0035 7409     		je	.L118
 914              		.loc 1 430 0
 915 0037 83F826   		cmpl	$38, %eax
 916 003a 74D4     		je	.L119
 917              	.LBE70:
 918              	.LBE69:
 919              	.LBE71:
 920              		.loc 1 435 0
 921 003c 5B       		popq	%rbx
 922              		.cfi_remember_state
 923              		.cfi_restore 3
 924              		.cfi_def_cfa_offset 8
 925              	.LVL104:
 926 003d C3       		ret
 927              	.LVL105:
 928 003e 6690     		.p2align 4,,10
 929              		.p2align 3
 930              	.L118:
 931              		.cfi_restore_state
 932              		.loc 1 424 0
 933 0040 31C0     		xorl	%eax, %eax
 934              		.loc 1 435 0
 935 0042 5B       		popq	%rbx
 936              		.cfi_restore 3
 937              		.cfi_def_cfa_offset 8
 938 0043 C3       		ret
 939              	.LVL106:
 940              	.L133:
 941              		.loc 1 424 0
 942 0044 31C0     		xorl	%eax, %eax
 943              		.loc 1 435 0
 944 0046 C3       		ret
 945              		.cfi_endproc
 946              	.LFE497:
 948              		.section	.text.unlikely._ZN9Fl_Widget14label_shortcutEPKc
 949              	.LCOLDE8:
 950              		.section	.text._ZN9Fl_Widget14label_shortcutEPKc
 951              	.LHOTE8:
 952              		.section	.text.unlikely._ZN9Fl_Widget13test_shortcutEPKcb.part.3,"ax",@progbits
 953              		.align 2
 954              	.LCOLDB9:
 955              		.section	.text._ZN9Fl_Widget13test_shortcutEPKcb.part.3,"ax",@progbits
 956              	.LHOTB9:
 957              		.align 2
 958              		.p2align 4,,15
 960              	_ZN9Fl_Widget13test_shortcutEPKcb.part.3:
 961              	.LFB503:
 962              		.loc 1 456 0
 963              		.cfi_startproc
 964              	.LVL107:
 965 0000 55       		pushq	%rbp
 966              		.cfi_def_cfa_offset 16
 967              		.cfi_offset 6, -16
 968 0001 53       		pushq	%rbx
 969              		.cfi_def_cfa_offset 24
 970              		.cfi_offset 3, -24
 971 0002 4889FD   		movq	%rdi, %rbp
 972              		.loc 1 460 0
 973 0005 31D2     		xorl	%edx, %edx
 974              		.loc 1 456 0
 975 0007 4883EC08 		subq	$8, %rsp
 976              		.cfi_def_cfa_offset 32
 977              		.loc 1 460 0
 978 000b 48633500 		movslq	_ZN2Fl8e_lengthE(%rip), %rsi
 978      000000
 979              	.LBB72:
 980              	.LBB73:
 981              		.loc 3 790 0
 982 0012 488B3D00 		movq	_ZN2Fl6e_textE(%rip), %rdi
 982      000000
 983              	.LVL108:
 984              	.LBE73:
 985              	.LBE72:
 986              		.loc 1 460 0
 987 0019 4801FE   		addq	%rdi, %rsi
 988 001c E8000000 		call	fl_utf8decode
 988      00
 989              	.LVL109:
 990 0021 89C3     		movl	%eax, %ebx
 991              	.LVL110:
 992 0023 31C0     		xorl	%eax, %eax
 993              	.LVL111:
 994              		.loc 1 467 0
 995 0025 85DB     		testl	%ebx, %ebx
 996 0027 7410     		je	.L135
 997              		.loc 1 468 0
 998 0029 4889EF   		movq	%rbp, %rdi
 999 002c E8000000 		call	_ZN9Fl_Widget14label_shortcutEPKc
 999      00
 1000              	.LVL112:
 1001              		.loc 1 467 0
 1002 0031 39C3     		cmpl	%eax, %ebx
 1003 0033 0F94C0   		sete	%al
 1004              	.LVL113:
 1005 0036 0FB6C0   		movzbl	%al, %eax
 1006              	.L135:
 1007              		.loc 1 477 0
 1008 0039 4883C408 		addq	$8, %rsp
 1009              		.cfi_def_cfa_offset 24
 1010 003d 5B       		popq	%rbx
 1011              		.cfi_def_cfa_offset 16
 1012              	.LVL114:
 1013 003e 5D       		popq	%rbp
 1014              		.cfi_def_cfa_offset 8
 1015              	.LVL115:
 1016 003f C3       		ret
 1017              		.cfi_endproc
 1018              	.LFE503:
 1020              		.section	.text.unlikely._ZN9Fl_Widget13test_shortcutEPKcb.part.3
 1021              	.LCOLDE9:
 1022              		.section	.text._ZN9Fl_Widget13test_shortcutEPKcb.part.3
 1023              	.LHOTE9:
 1024              		.section	.text.unlikely._ZN9Fl_Widget13test_shortcutEPKcb,"ax",@progbits
 1025              		.align 2
 1026              	.LCOLDB10:
 1027              		.section	.text._ZN9Fl_Widget13test_shortcutEPKcb,"ax",@progbits
 1028              	.LHOTB10:
 1029              		.align 2
 1030              		.p2align 4,,15
 1031              		.globl	_ZN9Fl_Widget13test_shortcutEPKcb
 1033              	_ZN9Fl_Widget13test_shortcutEPKcb:
 1034              	.LFB498:
 1035              		.loc 1 456 0
 1036              		.cfi_startproc
 1037              	.LVL116:
 1038              		.loc 1 457 0
 1039 0000 4885FF   		testq	%rdi, %rdi
 1040 0003 740E     		je	.L144
 1041              		.loc 1 459 0
 1042 0005 4084F6   		testb	%sil, %sil
 1043 0008 7416     		je	.L142
 1044 000a F6050000 		testb	$8, _ZN2Fl7e_stateE+2(%rip)
 1044      000008
 1045 0011 750D     		jne	.L142
 1046              	.L144:
 1047              		.loc 1 477 0
 1048 0013 31C0     		xorl	%eax, %eax
 1049 0015 C3       		ret
 1050 0016 662E0F1F 		.p2align 4,,10
 1050      84000000 
 1050      0000
 1051              		.p2align 3
 1052              	.L142:
 1053 0020 E9000000 		jmp	_ZN9Fl_Widget13test_shortcutEPKcb.part.3
 1053      00
 1054              	.LVL117:
 1055              		.cfi_endproc
 1056              	.LFE498:
 1058              		.section	.text.unlikely._ZN9Fl_Widget13test_shortcutEPKcb
 1059              	.LCOLDE10:
 1060              		.section	.text._ZN9Fl_Widget13test_shortcutEPKcb
 1061              	.LHOTE10:
 1062              		.section	.text.unlikely._ZN9Fl_Widget13test_shortcutEv,"ax",@progbits
 1063              		.align 2
 1064              	.LCOLDB11:
 1065              		.section	.text._ZN9Fl_Widget13test_shortcutEv,"ax",@progbits
 1066              	.LHOTB11:
 1067              		.align 2
 1068              		.p2align 4,,15
 1069              		.globl	_ZN9Fl_Widget13test_shortcutEv
 1071              	_ZN9Fl_Widget13test_shortcutEv:
 1072              	.LFB499:
 1073              		.loc 1 494 0
 1074              		.cfi_startproc
 1075              	.LVL118:
 1076              		.loc 1 495 0
 1077 0000 F6476040 		testb	$64, 96(%rdi)
 1078 0004 7412     		je	.L147
 1079 0006 488B7F30 		movq	48(%rdi), %rdi
 1080              	.LVL119:
 1081              	.LBB74:
 1082              	.LBB75:
 1083              		.loc 1 457 0
 1084 000a 4885FF   		testq	%rdi, %rdi
 1085 000d 7409     		je	.L147
 1086 000f E9000000 		jmp	_ZN9Fl_Widget13test_shortcutEPKcb.part.3
 1086      00
 1087              	.LVL120:
 1088              		.p2align 4,,10
 1089 0014 0F1F4000 		.p2align 3
 1090              	.L147:
 1091              	.LBE75:
 1092              	.LBE74:
 1093              		.loc 1 497 0
 1094 0018 31C0     		xorl	%eax, %eax
 1095 001a C3       		ret
 1096              		.cfi_endproc
 1097              	.LFE499:
 1099              		.section	.text.unlikely._ZN9Fl_Widget13test_shortcutEv
 1100              	.LCOLDE11:
 1101              		.section	.text._ZN9Fl_Widget13test_shortcutEv
 1102              	.LHOTE11:
 1103              		.section	.bss._ZZ17fl_shortcut_labeljPPKcE3buf,"aw",@nobits
 1104              		.align 32
 1107              	_ZZ17fl_shortcut_labeljPPKcE3buf:
 1108 0000 00000000 		.zero	80
 1108      00000000 
 1108      00000000 
 1108      00000000 
 1108      00000000 
 1109              		.text
 1110              	.Letext0:
 1111              		.section	.text.unlikely._ZL16add_modifier_keyPcPKcS1_.constprop.4
 1112              	.Letext_cold0:
 1113              		.file 5 "fltk-1.3.4-1/FL/fl_types.h"
 1114              		.file 6 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1115              		.file 7 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1116              		.file 8 "/usr/include/libio.h"
 1117              		.file 9 "fltk-1.3.4-1/FL/Enumerations.H"
 1118              		.file 10 "fltk-1.3.4-1/FL/Fl_Widget.H"
 1119              		.file 11 "fltk-1.3.4-1/FL/Fl_Image.H"
 1120              		.file 12 "fltk-1.3.4-1/FL/Fl_Device.H"
 1121              		.file 13 "/usr/include/stdio.h"
 1122              		.file 14 "fltk-1.3.4-1/FL/fl_utf8.h"
 1123              		.file 15 "/usr/include/X11/Xlib.h"
 1124              		.file 16 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_shortcut.cxx
     /tmp/cc2pA0f4.s:13     .text._ZL16add_modifier_keyPcPKcS1_.constprop.4:0000000000000000 _ZL16add_modifier_keyPcPKcS1_.constprop.4
     /tmp/cc2pA0f4.s:1107   .bss._ZZ17fl_shortcut_labeljPPKcE3buf:0000000000000000 _ZZ17fl_shortcut_labeljPPKcE3buf
     /tmp/cc2pA0f4.s:156    .text._Z17fl_shortcut_labeljPPKc.part.2:0000000000000000 _Z17fl_shortcut_labeljPPKc.part.2
     /tmp/cc2pA0f4.s:416    .text._ZN2Fl13test_shortcutEj:0000000000000000 _ZN2Fl13test_shortcutEj
     /tmp/cc2pA0f4.s:556    .text._Z17fl_shortcut_labelj:0000000000000000 _Z17fl_shortcut_labelj
     /tmp/cc2pA0f4.s:598    .text._Z17fl_shortcut_labeljPPKc:0000000000000000 _Z17fl_shortcut_labeljPPKc
     /tmp/cc2pA0f4.s:639    .text._Z15fl_old_shortcutPKc:0000000000000000 _Z15fl_old_shortcutPKc
     /tmp/cc2pA0f4.s:862    .text._ZN9Fl_Widget14label_shortcutEPKc:0000000000000000 _ZN9Fl_Widget14label_shortcutEPKc
     /tmp/cc2pA0f4.s:960    .text._ZN9Fl_Widget13test_shortcutEPKcb.part.3:0000000000000000 _ZN9Fl_Widget13test_shortcutEPKcb.part.3
     /tmp/cc2pA0f4.s:1033   .text._ZN9Fl_Widget13test_shortcutEPKcb:0000000000000000 _ZN9Fl_Widget13test_shortcutEPKcb
     /tmp/cc2pA0f4.s:1071   .text._ZN9Fl_Widget13test_shortcutEv:0000000000000000 _ZN9Fl_Widget13test_shortcutEv
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
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.Fl_Button.H.23.dd2f7f39568a498db4235a51d94ff020
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
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
strlen
memcpy
fl_tolower
fl_toupper
fl_utf8encode
fl_local_shift
fl_local_meta
fl_local_alt
fl_local_ctrl
XKeysymToString
strcpy
_ZN2Fl7e_stateE
_ZN2Fl8e_keysymE
_ZN2Fl8e_lengthE
_ZN2Fl6e_textE
fl_utf8decode
strchr
strtol
