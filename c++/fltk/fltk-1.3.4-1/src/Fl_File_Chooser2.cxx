   1              		.file	"Fl_File_Chooser2.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL14quote_pathnamePcPKci.constprop.25,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL14quote_pathnamePcPKci.constprop.25,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL14quote_pathnamePcPKci.constprop.25
  10              	.Ltext_cold0:
  11              		.section	.text._ZL14quote_pathnamePcPKci.constprop.25
  13              	_ZL14quote_pathnamePcPKci.constprop.25:
  14              	.LFB767:
  15              		.file 1 "fltk-1.3.4-1/src/Fl_File_Chooser2.cxx"
   1:fltk-1.3.4-1/src/Fl_File_Chooser2.cxx **** ...
  16              		.loc 1 1667 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4883C601 		addq	$1, %rsi
  20              	.LVL1:
  21              		.loc 1 1671 0
  22 0004 BAFF0700 		movl	$2047, %edx
  22      00
  23 0009 EB16     		jmp	.L2
  24              	.LVL2:
  25 000b 0F1F4400 		.p2align 4,,10
  25      00
  26              		.p2align 3
  27              	.L4:
  28              		.loc 1 1681 0
  29 0010 3C2F     		cmpb	$47, %al
  30 0012 7434     		je	.L8
  31              	.L6:
  32              	.LVL3:
  33              		.loc 1 1685 0
  34 0014 8807     		movb	%al, (%rdi)
  35              		.loc 1 1686 0
  36 0016 83EA01   		subl	$1, %edx
  37              	.LVL4:
  38              		.loc 1 1685 0
  39 0019 4883C701 		addq	$1, %rdi
  40              	.LVL5:
  41              	.L5:
  42 001d 4883C601 		addq	$1, %rsi
  43              	.LVL6:
  44              	.L2:
  45              		.loc 1 1673 0
  46 0021 83FA01   		cmpl	$1, %edx
  47 0024 0FB646FF 		movzbl	-1(%rsi), %eax
  48 0028 7E36     		jle	.L3
  49 002a 84C0     		testb	%al, %al
  50 002c 7432     		je	.L3
  51              		.loc 1 1674 0
  52 002e 3C5C     		cmpb	$92, %al
  53 0030 75DE     		jne	.L4
  54              	.LVL7:
  55              		.loc 1 1676 0
  56 0032 C6075C   		movb	$92, (%rdi)
  57              		.loc 1 1677 0
  58 0035 C647012F 		movb	$47, 1(%rdi)
  59              		.loc 1 1678 0
  60 0039 83EA02   		subl	$2, %edx
  61              	.LVL8:
  62              		.loc 1 1677 0
  63 003c 4883C702 		addq	$2, %rdi
  64              	.LVL9:
  65 0040 EBDB     		jmp	.L5
  66              	.LVL10:
  67              		.p2align 4,,10
  68 0042 660F1F44 		.p2align 3
  68      0000
  69              	.L8:
  70              		.loc 1 1682 0
  71 0048 C6075C   		movb	$92, (%rdi)
  72              		.loc 1 1683 0
  73 004b 83EA01   		subl	$1, %edx
  74              	.LVL11:
  75 004e 0FB646FF 		movzbl	-1(%rsi), %eax
  76              		.loc 1 1682 0
  77 0052 4883C701 		addq	$1, %rdi
  78              	.LVL12:
  79 0056 EBBC     		jmp	.L6
  80 0058 0F1F8400 		.p2align 4,,10
  80      00000000 
  81              		.p2align 3
  82              	.L3:
  83              		.loc 1 1690 0
  84 0060 C60700   		movb	$0, (%rdi)
  85 0063 C3       		ret
  86              		.cfi_endproc
  87              	.LFE767:
  89              		.section	.text.unlikely._ZL14quote_pathnamePcPKci.constprop.25
  90              	.LCOLDE0:
  91              		.section	.text._ZL14quote_pathnamePcPKci.constprop.25
  92              	.LHOTE0:
  93              		.section	.text.unlikely._ZN15Fl_File_Chooser5countEv,"ax",@progbits
  94              		.align 2
  95              	.LCOLDB1:
  96              		.section	.text._ZN15Fl_File_Chooser5countEv,"ax",@progbits
  97              	.LHOTB1:
  98              		.align 2
  99              		.p2align 4,,15
 100              		.globl	_ZN15Fl_File_Chooser5countEv
 102              	_ZN15Fl_File_Chooser5countEv:
 103              	.LFB718:
 104              		.loc 1 421 0
 105              		.cfi_startproc
 106              	.LVL13:
 107 0000 4155     		pushq	%r13
 108              		.cfi_def_cfa_offset 16
 109              		.cfi_offset 13, -16
 110              	.LVL14:
 111 0002 4154     		pushq	%r12
 112              		.cfi_def_cfa_offset 24
 113              		.cfi_offset 12, -24
 114 0004 55       		pushq	%rbp
 115              		.cfi_def_cfa_offset 32
 116              		.cfi_offset 6, -32
 117 0005 53       		pushq	%rbx
 118              		.cfi_def_cfa_offset 40
 119              		.cfi_offset 3, -40
 120 0006 4883EC08 		subq	$8, %rsp
 121              		.cfi_def_cfa_offset 48
 122              		.loc 1 429 0
 123 000a F6871018 		testb	$1, 6160(%rdi)
 123      000001
 124 0011 488B8758 		movq	6232(%rdi), %rax
 124      180000
 125 0018 4C8B6078 		movq	120(%rax), %r12
 126              	.LVL15:
 127 001c 7447     		je	.L10
 128 001e 4989FD   		movq	%rdi, %r13
 129              	.LVL16:
 130              		.loc 1 435 0 discriminator 1
 131 0021 488BBF38 		movq	6200(%rdi), %rdi
 131      180000
 132              	.LVL17:
 133 0028 31ED     		xorl	%ebp, %ebp
 134 002a BB010000 		movl	$1, %ebx
 134      00
 135 002f 8B878402 		movl	644(%rdi), %eax
 135      0000
 136 0035 85C0     		testl	%eax, %eax
 137 0037 7E2C     		jle	.L10
 138              	.LVL18:
 139 0039 0F1F8000 		.p2align 4,,10
 139      000000
 140              		.p2align 3
 141              	.L24:
 142              		.loc 1 436 0
 143 0040 89DE     		movl	%ebx, %esi
 144 0042 E8000000 		call	_ZNK10Fl_Browser8selectedEi
 144      00
 145              	.LVL19:
 146              		.loc 1 435 0
 147 0047 498BBD38 		movq	6200(%r13), %rdi
 147      180000
 148              		.loc 1 444 0
 149 004e 83F801   		cmpl	$1, %eax
 150 0051 83DDFF   		sbbl	$-1, %ebp
 151              	.LVL20:
 152              		.loc 1 435 0
 153 0054 83C301   		addl	$1, %ebx
 154              	.LVL21:
 155 0057 3B9F8402 		cmpl	644(%rdi), %ebx
 155      0000
 156 005d 7EE1     		jle	.L24
 157              		.loc 1 447 0
 158 005f 85ED     		testl	%ebp, %ebp
 159 0061 89E8     		movl	%ebp, %eax
 160 0063 7511     		jne	.L15
 161              	.LVL22:
 162              	.L10:
 163              		.loc 1 431 0
 164 0065 31C0     		xorl	%eax, %eax
 165 0067 4D85E4   		testq	%r12, %r12
 166 006a 740A     		je	.L15
 167              		.loc 1 431 0 is_stmt 0 discriminator 2
 168 006c 31C0     		xorl	%eax, %eax
 169 006e 41803C24 		cmpb	$0, (%r12)
 169      00
 170 0073 0F95C0   		setne	%al
 171              	.L15:
 172              		.loc 1 450 0 is_stmt 1
 173 0076 4883C408 		addq	$8, %rsp
 174              		.cfi_def_cfa_offset 40
 175 007a 5B       		popq	%rbx
 176              		.cfi_def_cfa_offset 32
 177 007b 5D       		popq	%rbp
 178              		.cfi_def_cfa_offset 24
 179 007c 415C     		popq	%r12
 180              		.cfi_def_cfa_offset 16
 181 007e 415D     		popq	%r13
 182              		.cfi_def_cfa_offset 8
 183 0080 C3       		ret
 184              		.cfi_endproc
 185              	.LFE718:
 187              		.section	.text.unlikely._ZN15Fl_File_Chooser5countEv
 188              	.LCOLDE1:
 189              		.section	.text._ZN15Fl_File_Chooser5countEv
 190              	.LHOTE1:
 191              		.section	.rodata.str1.1,"aMS",@progbits,1
 192              	.LC2:
 193 0000 626C6100 		.string	"bla"
 194              	.LC3:
 195 0004 484F4D45 		.string	"HOME"
 195      00
 196              	.LC4:
 197 0009 6661766F 		.string	"favorite%02d"
 197      72697465 
 197      25303264 
 197      00
 198              	.LC5:
 199 0016 00       		.string	""
 200              		.section	.text.unlikely._ZN15Fl_File_Chooser16update_favoritesEv,"ax",@progbits
 201              		.align 2
 202              	.LCOLDB6:
 203              		.section	.text._ZN15Fl_File_Chooser16update_favoritesEv,"ax",@progbits
 204              	.LHOTB6:
 205              		.align 2
 206              		.p2align 4,,15
 207              		.globl	_ZN15Fl_File_Chooser16update_favoritesEv
 209              	_ZN15Fl_File_Chooser16update_favoritesEv:
 210              	.LFB731:
 211              		.loc 1 1265 0
 212              		.cfi_startproc
 213              	.LVL23:
 214 0000 4154     		pushq	%r12
 215              		.cfi_def_cfa_offset 16
 216              		.cfi_offset 12, -16
 217 0002 55       		pushq	%rbp
 218              		.cfi_def_cfa_offset 24
 219              		.cfi_offset 6, -24
 220 0003 4989FC   		movq	%rdi, %r12
 221 0006 53       		pushq	%rbx
 222              		.cfi_def_cfa_offset 32
 223              		.cfi_offset 3, -32
 224 0007 4881EC10 		subq	$4112, %rsp
 224      100000
 225              		.cfi_def_cfa_offset 4144
 226              		.loc 1 1272 0
 227 000e 488BBF28 		movq	6184(%rdi), %rdi
 227      180000
 228              	.LVL24:
 229              		.loc 1 1265 0
 230 0015 64488B04 		movq	%fs:40, %rax
 230      25280000 
 230      00
 231 001e 48898424 		movq	%rax, 4104(%rsp)
 231      08100000 
 232 0026 31C0     		xorl	%eax, %eax
 233              		.loc 1 1280 0
 234 0028 488DAC24 		leaq	2048(%rsp), %rbp
 234      00080000 
 235              		.loc 1 1272 0
 236 0030 E8000000 		call	_ZN8Fl_Menu_5clearEv
 236      00
 237              	.LVL25:
 238              		.loc 1 1273 0
 239 0035 498BBC24 		movq	6184(%r12), %rdi
 239      28180000 
 240 003d BE000000 		movl	$.LC2, %esi
 240      00
 241 0042 E8000000 		call	_ZN8Fl_Menu_3addEPKc
 241      00
 242              	.LVL26:
 243              		.loc 1 1274 0
 244 0047 498BBC24 		movq	6184(%r12), %rdi
 244      28180000 
 245 004f E8000000 		call	_ZN8Fl_Menu_5clearEv
 245      00
 246              	.LVL27:
 247              		.loc 1 1275 0
 248 0054 498BBC24 		movq	6184(%r12), %rdi
 248      28180000 
 249 005c 488B3500 		movq	_ZN15Fl_File_Chooser19add_favorites_labelE(%rip), %rsi
 249      000000
 250 0063 4531C9   		xorl	%r9d, %r9d
 251 0066 4531C0   		xorl	%r8d, %r8d
 252 0069 31C9     		xorl	%ecx, %ecx
 253 006b BA610008 		movl	$524385, %edx
 253      00
 254 0070 E8000000 		call	_ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i
 254      00
 255              	.LVL28:
 256              		.loc 1 1276 0
 257 0075 498BBC24 		movq	6184(%r12), %rdi
 257      28180000 
 258 007d 488B3500 		movq	_ZN15Fl_File_Chooser22manage_favorites_labelE(%rip), %rsi
 258      000000
 259 0084 4531C0   		xorl	%r8d, %r8d
 260 0087 31C9     		xorl	%ecx, %ecx
 261 0089 41B98000 		movl	$128, %r9d
 261      0000
 262 008f BA6D0008 		movl	$524397, %edx
 262      00
 263 0094 E8000000 		call	_ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i
 263      00
 264              	.LVL29:
 265              		.loc 1 1277 0
 266 0099 498BBC24 		movq	6184(%r12), %rdi
 266      28180000 
 267 00a1 488B3500 		movq	_ZN15Fl_File_Chooser17filesystems_labelE(%rip), %rsi
 267      000000
 268 00a8 4531C9   		xorl	%r9d, %r9d
 269 00ab 4531C0   		xorl	%r8d, %r8d
 270 00ae 31C9     		xorl	%ecx, %ecx
 271 00b0 BA660008 		movl	$524390, %edx
 271      00
 272 00b5 E8000000 		call	_ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i
 272      00
 273              	.LVL30:
 274              	.LBB445:
 275              	.LBB446:
 276              		.loc 1 1720 0
 277 00ba BF000000 		movl	$.LC3, %edi
 277      00
 278 00bf E8000000 		call	fl_getenv
 278      00
 279              	.LVL31:
 280              	.LBE446:
 281              	.LBE445:
 282              		.loc 1 1279 0
 283 00c4 4885C0   		testq	%rax, %rax
 284 00c7 7428     		je	.L31
 285              		.loc 1 1280 0
 286 00c9 4889C6   		movq	%rax, %rsi
 287 00cc 4889EF   		movq	%rbp, %rdi
 288 00cf E8000000 		call	_ZL14quote_pathnamePcPKci.constprop.25
 288      00
 289              	.LVL32:
 290              		.loc 1 1281 0
 291 00d4 498BBC24 		movq	6184(%r12), %rdi
 291      28180000 
 292 00dc 4531C9   		xorl	%r9d, %r9d
 293 00df 4531C0   		xorl	%r8d, %r8d
 294 00e2 31C9     		xorl	%ecx, %ecx
 295 00e4 BA680008 		movl	$524392, %edx
 295      00
 296 00e9 4889EE   		movq	%rbp, %rsi
 297 00ec E8000000 		call	_ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i
 297      00
 298              	.LVL33:
 299              	.L31:
 300              		.loc 1 1265 0 discriminator 1
 301 00f1 31DB     		xorl	%ebx, %ebx
 302 00f3 EB1B     		jmp	.L36
 303              	.LVL34:
 304              		.p2align 4,,10
 305 00f5 0F1F00   		.p2align 3
 306              	.L33:
 307              		.loc 1 1292 0
 308 00f8 498BBC24 		movq	6184(%r12), %rdi
 308      28180000 
 309 0100 4889EE   		movq	%rbp, %rsi
 310              		.loc 1 1284 0
 311 0103 83C301   		addl	$1, %ebx
 312              	.LVL35:
 313              		.loc 1 1292 0
 314 0106 E8000000 		call	_ZN8Fl_Menu_3addEPKc
 314      00
 315              	.LVL36:
 316              		.loc 1 1284 0
 317 010b 83FB64   		cmpl	$100, %ebx
 318 010e 7478     		je	.L42
 319              	.LVL37:
 320              	.L36:
 321              	.LBB447:
 322              	.LBB448:
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
 324              		.loc 2 34 0
 325 0110 4189D8   		movl	%ebx, %r8d
 326 0113 B9000000 		movl	$.LC4, %ecx
 326      00
 327 0118 BA000800 		movl	$2048, %edx
 327      00
 328 011d BE010000 		movl	$1, %esi
 328      00
 329 0122 4889EF   		movq	%rbp, %rdi
 330 0125 31C0     		xorl	%eax, %eax
 331 0127 E8000000 		call	__sprintf_chk
 331      00
 332              	.LVL38:
 333              	.LBE448:
 334              	.LBE447:
 335              		.loc 1 1286 0
 336 012c 488B3D00 		movq	_ZN15Fl_File_Chooser6prefs_E(%rip), %rdi
 336      000000
 337 0133 41B80008 		movl	$2048, %r8d
 337      0000
 338 0139 B9000000 		movl	$.LC5, %ecx
 338      00
 339 013e 4889E2   		movq	%rsp, %rdx
 340 0141 4889EE   		movq	%rbp, %rsi
 341 0144 E8000000 		call	_ZN14Fl_Preferences3getEPKcPcS1_i
 341      00
 342              	.LVL39:
 343              		.loc 1 1287 0
 344 0149 803C2400 		cmpb	$0, (%rsp)
 345 014d 7449     		je	.L30
 346              		.loc 1 1289 0
 347 014f 4889E6   		movq	%rsp, %rsi
 348 0152 4889EF   		movq	%rbp, %rdi
 349 0155 E8000000 		call	_ZL14quote_pathnamePcPKci.constprop.25
 349      00
 350              	.LVL40:
 351              		.loc 1 1291 0
 352 015a 83FB09   		cmpl	$9, %ebx
 353 015d 7F99     		jg	.L33
 354              		.loc 1 1291 0 is_stmt 0 discriminator 1
 355 015f 498BBC24 		movq	6184(%r12), %rdi
 355      28180000 
 356 0167 8D933000 		leal	524336(%rbx), %edx
 356      0800
 357 016d 4531C9   		xorl	%r9d, %r9d
 358 0170 4531C0   		xorl	%r8d, %r8d
 359 0173 31C9     		xorl	%ecx, %ecx
 360 0175 4889EE   		movq	%rbp, %rsi
 361              		.loc 1 1284 0 is_stmt 1 discriminator 1
 362 0178 83C301   		addl	$1, %ebx
 363              	.LVL41:
 364              		.loc 1 1291 0 discriminator 1
 365 017b E8000000 		call	_ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i
 365      00
 366              	.LVL42:
 367              		.loc 1 1284 0 discriminator 1
 368 0180 83FB64   		cmpl	$100, %ebx
 369 0183 758B     		jne	.L36
 370              		.p2align 4,,10
 371 0185 0F1F00   		.p2align 3
 372              	.L42:
 373 0188 498B8424 		movq	6184(%r12), %rax
 373      28180000 
 374 0190 488B4078 		movq	120(%rax), %rax
 375              	.LVL43:
 376              	.LBB449:
 377              	.LBB450:
 378              		.file 3 "fltk-1.3.4-1/FL/Fl_Menu_Item.H"
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
 133:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 134:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Returns the first menu item, same as next(0). */
 135:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const Fl_Menu_Item *first() const { return next(0); }
 136:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 137:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Returns the first menu item, same as next(0). */
 138:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Menu_Item *first() { return next(0); }
 139:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 140:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   // methods on menu items:
 141:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 142:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Returns the title of the item.
 143:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     A NULL here indicates the end of the menu (or of a submenu).
 144:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     A '&' in the item will print an underscore under the next letter,
 145:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     and if the menu is popped up that letter will be a "shortcut" to pick
 146:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     that item.  To get a real '&' put two in a row.
 147:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 148:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const char* label() const {return text;}
 149:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 150:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**    See const char* Fl_Menu_Item::label() const   */
 151:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void label(const char* a) {text=a;}
 152:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 153:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**    See const char* Fl_Menu_Item::label() const   */
 154:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void label(Fl_Labeltype a,const char* b) {labeltype_ = a; text = b;}
 155:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 156:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 157:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Returns the menu item's labeltype.
 158:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     A labeltype identifies a routine that draws the label of the
 159:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     widget.  This can be used for special effects such as emboss, or to use
 160:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     the label() pointer as another form of data such as a bitmap.
 161:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     The value FL_NORMAL_LABEL prints the label as text.
 162:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 163:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)labeltype_;}
 164:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 165:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 166:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's labeltype.
 167:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     A labeltype identifies a routine that draws the label of the
 168:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     widget.  This can be used for special effects such as emboss, or to use
 169:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     the label() pointer as another form of data such as a bitmap.
 170:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     The value FL_NORMAL_LABEL prints the label as text.
 171:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 172:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void labeltype(Fl_Labeltype a) {labeltype_ = a;}
 173:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 174:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 175:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Gets the menu item's label color.
 176:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     This color is passed to the labeltype routine, and is typically the
 177:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     color of the label text.  This defaults to FL_BLACK.  If this
 178:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     color is not black fltk will \b not use overlay bitplanes to draw
 179:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     the menu - this is so that images put in the menu draw correctly.
 180:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 181:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Color labelcolor() const {return labelcolor_;}
 182:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 183:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 184:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's label color.
 185:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     \see Fl_Color Fl_Menu_Item::labelcolor() const
 186:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 187:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void labelcolor(Fl_Color a) {labelcolor_ = a;}
 188:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 189:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Gets the menu item's label font.
 190:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Fonts are identified by small 8-bit indexes into a table. See the
 191:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     enumeration list for predefined fonts. The default value is a
 192:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Helvetica font. The function Fl::set_font() can define new fonts.
 193:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 194:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Font labelfont() const {return labelfont_;}
 195:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 196:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 197:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's label font.
 198:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Fonts are identified by small 8-bit indexes into a table. See the
 199:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     enumeration list for predefined fonts. The default value is a
 200:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Helvetica font.  The function Fl::set_font() can define new fonts.
 201:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 202:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void labelfont(Fl_Font a) {labelfont_ = a;}
 203:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 204:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Gets the label font pixel size/height. */
 205:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Fontsize labelsize() const {return labelsize_;}
 206:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 207:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Sets the label font pixel size/height.*/
 208:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void labelsize(Fl_Fontsize a) {labelsize_ = a;}
 209:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 210:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 211:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Returns the callback function that is set for the menu item.
 212:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Each item has space for a callback function and an argument for that
 213:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     function. Due to back compatibility, the Fl_Menu_Item itself
 214:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     is not passed to the callback, instead you have to get it by calling
 215:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     ((Fl_Menu_*)w)->mvalue() where w is the widget argument.
 216:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 217:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Callback_p callback() const {return callback_;}
 218:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 219:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 220:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's callback function and userdata() argument.
 221:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     \see Fl_Callback_p Fl_MenuItem::callback() const
 222:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 223:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void callback(Fl_Callback* c, void* p) {callback_=c; user_data_=p;}
 224:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 225:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 226:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's callback function.
 227:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     This method does not set the userdata() argument.
 228:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     \see Fl_Callback_p Fl_MenuItem::callback() const
 229:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    */
 230:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void callback(Fl_Callback* c) {callback_=c;}
 231:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 232:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 233:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's callback function.
 234:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     This method does not set the userdata() argument.
 235:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     \see Fl_Callback_p Fl_MenuItem::callback() const
 236:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    */
 237:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void callback(Fl_Callback0*c) {callback_=(Fl_Callback*)c;}
 238:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 239:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 240:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the menu item's callback function and userdata() argument.
 241:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     This method does not set the userdata() argument.
 242:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     The argument \p is cast to void* and stored as the userdata()
 243:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     for the menu item's callback function.
 244:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     \see Fl_Callback_p Fl_MenuItem::callback() const
 245:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    */
 246:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void callback(Fl_Callback1*c, long p=0) {callback_=(Fl_Callback*)c; user_data_=(void*)(fl_intptr_
 247:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 248:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 249:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Gets the user_data() argument that is sent to the callback function.
 250:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 251:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void* user_data() const {return user_data_;}
 252:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 253:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the user_data() argument that is sent to the callback function.
 254:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 255:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void user_data(void* v) {user_data_ = v;}
 256:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 257:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Gets the user_data() argument that is sent to the callback function.
 258:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     For convenience you can also define the callback as taking a long
 259:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     argument.  This method casts the stored userdata() argument to long
 260:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     and returns it as a \e long value.
 261:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 262:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   long argument() const {return (long)(fl_intptr_t)user_data_;}
 263:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 264:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets the user_data() argument that is sent to the callback function.
 265:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     For convenience you can also define the callback as taking a long
 266:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     argument.  This method casts the given argument \p v to void*
 267:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     and stores it in the menu item's userdata() member.
 268:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     This may not be portable to some machines.
 269:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 270:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 271:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 272:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Gets what key combination shortcut will trigger the menu item. */
 273:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int shortcut() const {return shortcut_;}
 274:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 275:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 276:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Sets exactly what key combination will trigger the menu item.  The
 277:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     value is a logical 'or' of a key and a set of shift flags, for instance 
 278:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     FL_ALT+'a' or FL_ALT+FL_F+10 or just 'a'.  A value of
 279:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     zero disables the shortcut.
 280:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 281:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     The key can be any value returned by Fl::event_key(), but will usually 
 282:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     be an ASCII letter. Use a lower-case letter unless you require the shift 
 283:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     key to be held down.
 284:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 285:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     The shift flags can be any set of values accepted by Fl::event_state().
 286:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     If the bit is on that shift key must be pushed.  Meta, Alt, Ctrl, 
 287:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     and Shift must be off if they are not in the shift flags (zero for the 
 288:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     other bits indicates a "don't care" setting).
 289:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 290:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void shortcut(int s) {shortcut_ = s;}
 291:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 292:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Returns true if either FL_SUBMENU or FL_SUBMENU_POINTER
 293:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     is on in the flags. FL_SUBMENU indicates an embedded submenu
 294:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     that goes from the next item through the next one with a NULL
 295:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     label(). FL_SUBMENU_POINTER indicates that user_data()
 296:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     is a pointer to another menu array.
 297:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 298:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int submenu() const {return flags&(FL_SUBMENU|FL_SUBMENU_POINTER);}
 299:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 300:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Returns true if a checkbox will be drawn next to this item.
 301:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     This is true if FL_MENU_TOGGLE or FL_MENU_RADIO is set in the flags.
 302:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 303:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int checkbox() const {return flags&FL_MENU_TOGGLE;}
 304:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 305:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Returns true if this item is a radio item.
 306:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     When a radio button is selected all "adjacent" radio buttons are
 307:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     turned off.  A set of radio items is delimited by an item that has
 308:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     radio() false, or by an item with FL_MENU_DIVIDER turned on.
 309:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 310:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int radio() const {return flags&FL_MENU_RADIO;}
 311:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Returns the current value of the check or radio item.
 312:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****       This is zero (0) if the menu item is not checked and
 313:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****       non-zero otherwise. You should not rely on a particular value,
 314:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****       only zero or non-zero.
 315:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****       \note The returned value for a checked menu item as of FLTK 1.3.2
 316:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****       is FL_MENU_VALUE (4), but may be 1 in a future version.
 317:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 318:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int value() const {return flags&FL_MENU_VALUE;}
 319:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 320:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Turns the check or radio item "on" for the menu item. Note that this
 321:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     does not turn off any adjacent radio items like set_only() does.
 322:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 323:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void set() {flags |= FL_MENU_VALUE;}
 324:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 325:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Turns the check or radio item "off" for the menu item. */
 326:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void clear() {flags &= ~FL_MENU_VALUE;}
 327:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 328:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void setonly();
 329:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 330:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Gets the visibility of an item. */
 331:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int visible() const {return !(flags&FL_MENU_INVISIBLE);}
 332:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 333:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Makes an item visible in the menu. */
 334:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void show() {flags &= ~FL_MENU_INVISIBLE;}
 335:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 336:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Hides an item in the menu. */
 337:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void hide() {flags |= FL_MENU_INVISIBLE;}
 338:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 339:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Gets whether or not the item can be picked. */
 340:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int active() const {return !(flags&FL_MENU_INACTIVE);}
 341:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 342:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Allows a menu item to be picked. */
 343:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void activate() {flags &= ~FL_MENU_INACTIVE;}
 344:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 345:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Prevents a menu item from being picked. Note that this will also cause
 346:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     the menu item to appear grayed-out.
 347:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 348:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void deactivate() {flags |= FL_MENU_INACTIVE;}
 379              		.loc 3 348 0
 380 0194 83482001 		orl	$1, 32(%rax)
 381              	.LVL44:
 382              	.L30:
 383              	.LBE450:
 384              	.LBE449:
 385              		.loc 1 1296 0
 386 0198 488B8424 		movq	4104(%rsp), %rax
 386      08100000 
 387 01a0 64483304 		xorq	%fs:40, %rax
 387      25280000 
 387      00
 388 01a9 750C     		jne	.L43
 389 01ab 4881C410 		addq	$4112, %rsp
 389      100000
 390              		.cfi_remember_state
 391              		.cfi_def_cfa_offset 32
 392 01b2 5B       		popq	%rbx
 393              		.cfi_def_cfa_offset 24
 394              	.LVL45:
 395 01b3 5D       		popq	%rbp
 396              		.cfi_def_cfa_offset 16
 397 01b4 415C     		popq	%r12
 398              		.cfi_def_cfa_offset 8
 399              	.LVL46:
 400 01b6 C3       		ret
 401              	.LVL47:
 402              	.L43:
 403              		.cfi_restore_state
 404 01b7 E8000000 		call	__stack_chk_fail
 404      00
 405              	.LVL48:
 406              		.cfi_endproc
 407              	.LFE731:
 409              		.section	.text.unlikely._ZN15Fl_File_Chooser16update_favoritesEv
 410              	.LCOLDE6:
 411              		.section	.text._ZN15Fl_File_Chooser16update_favoritesEv
 412              	.LHOTE6:
 413              		.section	.text.unlikely._ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget,"ax",@progbits
 414              		.align 2
 415              	.LCOLDB7:
 416              		.section	.text._ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget,"ax",@progbits
 417              	.LHOTB7:
 418              		.align 2
 419              		.p2align 4,,15
 420              		.globl	_ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget
 422              	_ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget:
 423              	.LFB721:
 424              		.loc 1 578 0
 425              		.cfi_startproc
 426              	.LVL49:
 427 0000 4155     		pushq	%r13
 428              		.cfi_def_cfa_offset 16
 429              		.cfi_offset 13, -16
 430 0002 4154     		pushq	%r12
 431              		.cfi_def_cfa_offset 24
 432              		.cfi_offset 12, -24
 433 0004 55       		pushq	%rbp
 434              		.cfi_def_cfa_offset 32
 435              		.cfi_offset 6, -32
 436 0005 53       		pushq	%rbx
 437              		.cfi_def_cfa_offset 40
 438              		.cfi_offset 3, -40
 439 0006 4889FD   		movq	%rdi, %rbp
 440 0009 4881EC38 		subq	$1080, %rsp
 440      040000
 441              		.cfi_def_cfa_offset 1120
 442              		.loc 1 586 0
 443 0010 488BBF78 		movq	6264(%rdi), %rdi
 443      180000
 444              	.LVL50:
 445              		.loc 1 578 0
 446 0017 64488B04 		movq	%fs:40, %rax
 446      25280000 
 446      00
 447 0020 48898424 		movq	%rax, 1064(%rsp)
 447      28040000 
 448 0028 31C0     		xorl	%eax, %eax
 449              		.loc 1 584 0
 450 002a 4885F6   		testq	%rsi, %rsi
 451 002d 0F846501 		je	.L87
 451      0000
 452              		.loc 1 610 0
 453 0033 4839FE   		cmpq	%rdi, %rsi
 454 0036 0F844402 		je	.L88
 454      0000
 455              		.loc 1 625 0
 456 003c 483BB580 		cmpq	6272(%rbp), %rsi
 456      180000
 457 0043 0F849702 		je	.L89
 457      0000
 458              		.loc 1 637 0
 459 0049 483BB588 		cmpq	6280(%rbp), %rsi
 459      180000
 460 0050 0F841A03 		je	.L90
 460      0000
 461              		.loc 1 654 0
 462 0056 483BB590 		cmpq	6288(%rbp), %rsi
 462      180000
 463 005d 0F848D03 		je	.L91
 463      0000
 464              		.loc 1 666 0
 465 0063 483BB5A0 		cmpq	6304(%rbp), %rsi
 465      180000
 466 006a 742C     		je	.L92
 467              	.LVL51:
 468              	.L44:
 469              		.loc 1 691 0
 470 006c 488B8424 		movq	1064(%rsp), %rax
 470      28040000 
 471 0074 64483304 		xorq	%fs:40, %rax
 471      25280000 
 471      00
 472 007d 0F854D04 		jne	.L93
 472      0000
 473 0083 4881C438 		addq	$1080, %rsp
 473      040000
 474              		.cfi_remember_state
 475              		.cfi_def_cfa_offset 40
 476 008a 5B       		popq	%rbx
 477              		.cfi_def_cfa_offset 32
 478 008b 5D       		popq	%rbp
 479              		.cfi_def_cfa_offset 24
 480              	.LVL52:
 481 008c 415C     		popq	%r12
 482              		.cfi_def_cfa_offset 16
 483 008e 415D     		popq	%r13
 484              		.cfi_def_cfa_offset 8
 485 0090 C3       		ret
 486              	.LVL53:
 487              		.p2align 4,,10
 488 0091 0F1F8000 		.p2align 3
 488      000000
 489              	.L92:
 490              		.cfi_restore_state
 491              		.loc 1 668 0 discriminator 3
 492 0098 8B878402 		movl	644(%rdi), %eax
 492      0000
 493 009e 31DB     		xorl	%ebx, %ebx
 494 00a0 4989E4   		movq	%rsp, %r12
 495 00a3 85C0     		testl	%eax, %eax
 496 00a5 7E5C     		jle	.L66
 497              	.LVL54:
 498 00a7 660F1F84 		.p2align 4,,10
 498      00000000 
 498      00
 499              		.p2align 3
 500              	.L76:
 501              	.LBB451:
 502              	.LBB452:
 503              		.loc 2 34 0
 504 00b0 4189D8   		movl	%ebx, %r8d
 505 00b3 B9000000 		movl	$.LC4, %ecx
 505      00
 506 00b8 BA200000 		movl	$32, %edx
 506      00
 507 00bd BE010000 		movl	$1, %esi
 507      00
 508 00c2 4C89E7   		movq	%r12, %rdi
 509 00c5 31C0     		xorl	%eax, %eax
 510 00c7 E8000000 		call	__sprintf_chk
 510      00
 511              	.LVL55:
 512              	.LBE452:
 513              	.LBE451:
 514              		.loc 1 672 0
 515 00cc 488BBD78 		movq	6264(%rbp), %rdi
 515      180000
 516 00d3 83C301   		addl	$1, %ebx
 517              	.LVL56:
 518 00d6 89DE     		movl	%ebx, %esi
 519 00d8 E8000000 		call	_ZNK10Fl_Browser4textEi
 519      00
 520              	.LVL57:
 521 00dd 488B3D00 		movq	_ZN15Fl_File_Chooser6prefs_E(%rip), %rdi
 521      000000
 522 00e4 4889C2   		movq	%rax, %rdx
 523 00e7 4C89E6   		movq	%r12, %rsi
 524 00ea E8000000 		call	_ZN14Fl_Preferences3setEPKcS1_
 524      00
 525              	.LVL58:
 526 00ef 488B8578 		movq	6264(%rbp), %rax
 526      180000
 527              		.loc 1 668 0
 528 00f6 3B988402 		cmpl	644(%rax), %ebx
 528      0000
 529 00fc 7CB2     		jl	.L76
 530              		.loc 1 676 0 discriminator 1
 531 00fe 83FB63   		cmpl	$99, %ebx
 532 0101 7F69     		jg	.L69
 533              	.LVL59:
 534              	.L66:
 535 0103 4C8D6C24 		leaq	32(%rsp), %r13
 535      20
 536 0108 EB22     		jmp	.L70
 537 010a 660F1F44 		.p2align 4,,10
 537      0000
 538              		.p2align 3
 539              	.L94:
 540              		.loc 1 682 0 discriminator 1
 541 0110 488B3D00 		movq	_ZN15Fl_File_Chooser6prefs_E(%rip), %rdi
 541      000000
 542 0117 BA000000 		movl	$.LC5, %edx
 542      00
 543 011c 4C89E6   		movq	%r12, %rsi
 544              		.loc 1 676 0 discriminator 1
 545 011f 83C301   		addl	$1, %ebx
 546              	.LVL60:
 547              		.loc 1 682 0 discriminator 1
 548 0122 E8000000 		call	_ZN14Fl_Preferences3setEPKcS1_
 548      00
 549              	.LVL61:
 550              		.loc 1 676 0 discriminator 1
 551 0127 83FB64   		cmpl	$100, %ebx
 552 012a 7440     		je	.L69
 553              	.L70:
 554              	.LVL62:
 555              	.LBB453:
 556              	.LBB454:
 557              		.loc 2 34 0
 558 012c 4189D8   		movl	%ebx, %r8d
 559 012f B9000000 		movl	$.LC4, %ecx
 559      00
 560 0134 BA200000 		movl	$32, %edx
 560      00
 561 0139 BE010000 		movl	$1, %esi
 561      00
 562 013e 4C89E7   		movq	%r12, %rdi
 563 0141 31C0     		xorl	%eax, %eax
 564 0143 E8000000 		call	__sprintf_chk
 564      00
 565              	.LVL63:
 566              	.LBE454:
 567              	.LBE453:
 568              		.loc 1 680 0
 569 0148 488B3D00 		movq	_ZN15Fl_File_Chooser6prefs_E(%rip), %rdi
 569      000000
 570 014f 41B80004 		movl	$1024, %r8d
 570      0000
 571 0155 B9000000 		movl	$.LC5, %ecx
 571      00
 572 015a 4C89EA   		movq	%r13, %rdx
 573 015d 4C89E6   		movq	%r12, %rsi
 574 0160 E8000000 		call	_ZN14Fl_Preferences3getEPKcPcS1_i
 574      00
 575              	.LVL64:
 576              		.loc 1 682 0
 577 0165 807C2420 		cmpb	$0, 32(%rsp)
 577      00
 578 016a 75A4     		jne	.L94
 579              	.L69:
 580              		.loc 1 686 0
 581 016c 4889EF   		movq	%rbp, %rdi
 582 016f E8000000 		call	_ZN15Fl_File_Chooser16update_favoritesEv
 582      00
 583              	.LVL65:
 584              		.loc 1 687 0
 585 0174 488B3D00 		movq	_ZN15Fl_File_Chooser6prefs_E(%rip), %rdi
 585      000000
 586 017b E8000000 		call	_ZN14Fl_Preferences5flushEv
 586      00
 587              	.LVL66:
 588              		.loc 1 689 0
 589 0180 488BBD70 		movq	6256(%rbp), %rdi
 589      180000
 590 0187 488B07   		movq	(%rdi), %rax
 591 018a FF5030   		call	*48(%rax)
 592              	.LVL67:
 593 018d E9DAFEFF 		jmp	.L44
 593      FF
 594              	.LVL68:
 595              		.p2align 4,,10
 596 0192 660F1F44 		.p2align 3
 596      0000
 597              	.L87:
 598              		.loc 1 586 0
 599 0198 E8000000 		call	_ZN10Fl_Browser5clearEv
 599      00
 600              	.LVL69:
 601              		.loc 1 587 0
 602 019d 488BBD78 		movq	6264(%rbp), %rdi
 602      180000
 603 01a4 31F6     		xorl	%esi, %esi
 604              		.loc 1 589 0
 605 01a6 31DB     		xorl	%ebx, %ebx
 606 01a8 4989E4   		movq	%rsp, %r12
 607 01ab 4C8D6C24 		leaq	32(%rsp), %r13
 607      20
 608              		.loc 1 587 0
 609 01b0 E8000000 		call	_ZN11Fl_Browser_8deselectEi
 609      00
 610              	.LVL70:
 611 01b5 EB30     		jmp	.L49
 612              	.LVL71:
 613 01b7 660F1F84 		.p2align 4,,10
 613      00000000 
 613      00
 614              		.p2align 3
 615              	.L46:
 616              		.loc 1 600 0 discriminator 2
 617 01c0 BE050000 		movl	$5, %esi
 617      00
 618 01c5 4C89EF   		movq	%r13, %rdi
 619              		.loc 1 589 0 discriminator 2
 620 01c8 83C301   		addl	$1, %ebx
 621              	.LVL72:
 622              		.loc 1 600 0 discriminator 2
 623 01cb E8000000 		call	_ZN12Fl_File_Icon4findEPKci
 623      00
 624              	.LVL73:
 625 01d0 488BBD78 		movq	6264(%rbp), %rdi
 625      180000
 626 01d7 4889C2   		movq	%rax, %rdx
 627 01da 4C89EE   		movq	%r13, %rsi
 628 01dd E8000000 		call	_ZN10Fl_Browser3addEPKcPv
 628      00
 629              	.LVL74:
 630              		.loc 1 589 0 discriminator 2
 631 01e2 83FB64   		cmpl	$100, %ebx
 632 01e5 7440     		je	.L48
 633              	.LVL75:
 634              	.L49:
 635              	.LBB455:
 636              	.LBB456:
 637              		.loc 2 34 0
 638 01e7 4189D8   		movl	%ebx, %r8d
 639 01ea B9000000 		movl	$.LC4, %ecx
 639      00
 640 01ef BA200000 		movl	$32, %edx
 640      00
 641 01f4 BE010000 		movl	$1, %esi
 641      00
 642 01f9 4C89E7   		movq	%r12, %rdi
 643 01fc 31C0     		xorl	%eax, %eax
 644 01fe E8000000 		call	__sprintf_chk
 644      00
 645              	.LVL76:
 646              	.LBE456:
 647              	.LBE455:
 648              		.loc 1 593 0
 649 0203 488B3D00 		movq	_ZN15Fl_File_Chooser6prefs_E(%rip), %rdi
 649      000000
 650 020a 41B80004 		movl	$1024, %r8d
 650      0000
 651 0210 B9000000 		movl	$.LC5, %ecx
 651      00
 652 0215 4C89EA   		movq	%r13, %rdx
 653 0218 4C89E6   		movq	%r12, %rsi
 654 021b E8000000 		call	_ZN14Fl_Preferences3getEPKcPcS1_i
 654      00
 655              	.LVL77:
 656              		.loc 1 596 0
 657 0220 807C2420 		cmpb	$0, 32(%rsp)
 657      00
 658 0225 7599     		jne	.L46
 659              	.L48:
 660              		.loc 1 603 0
 661 0227 488BBD80 		movq	6272(%rbp), %rdi
 661      180000
 662 022e E8000000 		call	_ZN9Fl_Widget10deactivateEv
 662      00
 663              	.LVL78:
 664              		.loc 1 604 0
 665 0233 488BBD88 		movq	6280(%rbp), %rdi
 665      180000
 666 023a E8000000 		call	_ZN9Fl_Widget10deactivateEv
 666      00
 667              	.LVL79:
 668              		.loc 1 605 0
 669 023f 488BBD90 		movq	6288(%rbp), %rdi
 669      180000
 670 0246 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 670      00
 671              	.LVL80:
 672              		.loc 1 606 0
 673 024b 488BBDA0 		movq	6304(%rbp), %rdi
 673      180000
 674 0252 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 674      00
 675              	.LVL81:
 676              		.loc 1 608 0
 677 0257 488BBD70 		movq	6256(%rbp), %rdi
 677      180000
 678 025e 488BB578 		movq	6264(%rbp), %rsi
 678      180000
 679 0265 31D2     		xorl	%edx, %edx
 680 0267 E8000000 		call	_ZN9Fl_Window7hotspotEPK9Fl_Widgeti
 680      00
 681              	.LVL82:
 682              		.loc 1 609 0
 683 026c 488BBD70 		movq	6256(%rbp), %rdi
 683      180000
 684 0273 488B07   		movq	(%rdi), %rax
 685 0276 FF5028   		call	*40(%rax)
 686              	.LVL83:
 687 0279 E9EEFDFF 		jmp	.L44
 687      FF
 688              	.LVL84:
 689 027e 6690     		.p2align 4,,10
 690              		.p2align 3
 691              	.L88:
 692              		.loc 1 611 0
 693 0280 4889F7   		movq	%rsi, %rdi
 694 0283 E8000000 		call	_ZNK10Fl_Browser5valueEv
 694      00
 695              	.LVL85:
 696              		.loc 1 612 0
 697 0288 85C0     		testl	%eax, %eax
 698              		.loc 1 611 0
 699 028a 89C3     		movl	%eax, %ebx
 700              	.LVL86:
 701              		.loc 1 613 0
 702 028c 488BBD80 		movq	6272(%rbp), %rdi
 702      180000
 703              		.loc 1 612 0
 704 0293 0F84F101 		je	.L51
 704      0000
 705              		.loc 1 613 0
 706 0299 83F801   		cmpl	$1, %eax
 707 029c 0F8E2402 		jle	.L52
 707      0000
 708              		.loc 1 613 0 is_stmt 0 discriminator 1
 709 02a2 E8000000 		call	_ZN9Fl_Widget8activateEv
 709      00
 710              	.LVL87:
 711              	.L53:
 712              		.loc 1 616 0 is_stmt 1
 713 02a7 488BBD88 		movq	6280(%rbp), %rdi
 713      180000
 714 02ae E8000000 		call	_ZN9Fl_Widget8activateEv
 714      00
 715              	.LVL88:
 716 02b3 488B8578 		movq	6264(%rbp), %rax
 716      180000
 717              		.loc 1 618 0
 718 02ba 488BBD90 		movq	6288(%rbp), %rdi
 718      180000
 719 02c1 3B988402 		cmpl	644(%rax), %ebx
 719      0000
 720 02c7 0F8CA401 		jl	.L82
 720      0000
 721              	.LVL89:
 722              	.L83:
 723              		.loc 1 623 0
 724 02cd E8000000 		call	_ZN9Fl_Widget10deactivateEv
 724      00
 725              	.LVL90:
 726 02d2 E995FDFF 		jmp	.L44
 726      FF
 727              	.LVL91:
 728 02d7 660F1F84 		.p2align 4,,10
 728      00000000 
 728      00
 729              		.p2align 3
 730              	.L89:
 731              		.loc 1 626 0
 732 02e0 E8000000 		call	_ZNK10Fl_Browser5valueEv
 732      00
 733              	.LVL92:
 734              		.loc 1 628 0
 735 02e5 488BBD78 		movq	6264(%rbp), %rdi
 735      180000
 736 02ec 89C6     		movl	%eax, %esi
 737              		.loc 1 626 0
 738 02ee 89C3     		movl	%eax, %ebx
 739              	.LVL93:
 740              		.loc 1 628 0
 741 02f0 448D63FF 		leal	-1(%rbx), %r12d
 742 02f4 E8000000 		call	_ZNK10Fl_Browser4dataEi
 742      00
 743              	.LVL94:
 744 02f9 488BBD78 		movq	6264(%rbp), %rdi
 744      180000
 745 0300 89DE     		movl	%ebx, %esi
 746 0302 4989C5   		movq	%rax, %r13
 747 0305 E8000000 		call	_ZNK10Fl_Browser4textEi
 747      00
 748              	.LVL95:
 749 030a 488BBD78 		movq	6264(%rbp), %rdi
 749      180000
 750 0311 4889C2   		movq	%rax, %rdx
 751 0314 4C89E9   		movq	%r13, %rcx
 752 0317 4489E6   		movl	%r12d, %esi
 753 031a E8000000 		call	_ZN10Fl_Browser6insertEiPKcPv
 753      00
 754              	.LVL96:
 755              		.loc 1 629 0
 756 031f 488BBD78 		movq	6264(%rbp), %rdi
 756      180000
 757 0326 8D7301   		leal	1(%rbx), %esi
 758 0329 E8000000 		call	_ZN10Fl_Browser6removeEi
 758      00
 759              	.LVL97:
 760              		.loc 1 630 0
 761 032e 488BBD78 		movq	6264(%rbp), %rdi
 761      180000
 762 0335 BA010000 		movl	$1, %edx
 762      00
 763 033a 4489E6   		movl	%r12d, %esi
 764 033d E8000000 		call	_ZN10Fl_Browser6selectEii
 764      00
 765              	.LVL98:
 766              		.loc 1 632 0
 767 0342 83FB02   		cmpl	$2, %ebx
 768 0345 0F845C01 		je	.L95
 768      0000
 769              	.L56:
 770              		.loc 1 634 0
 771 034b 488BBD90 		movq	6288(%rbp), %rdi
 771      180000
 772 0352 E8000000 		call	_ZN9Fl_Widget8activateEv
 772      00
 773              	.LVL99:
 774              		.loc 1 636 0
 775 0357 488BBDA0 		movq	6304(%rbp), %rdi
 775      180000
 776 035e E8000000 		call	_ZN9Fl_Widget8activateEv
 776      00
 777              	.LVL100:
 778 0363 E904FDFF 		jmp	.L44
 778      FF
 779              	.LVL101:
 780 0368 0F1F8400 		.p2align 4,,10
 780      00000000 
 781              		.p2align 3
 782              	.L90:
 783              		.loc 1 638 0
 784 0370 E8000000 		call	_ZNK10Fl_Browser5valueEv
 784      00
 785              	.LVL102:
 786              		.loc 1 640 0
 787 0375 488BBD78 		movq	6264(%rbp), %rdi
 787      180000
 788 037c 89C6     		movl	%eax, %esi
 789              		.loc 1 638 0
 790 037e 89C3     		movl	%eax, %ebx
 791              	.LVL103:
 792              		.loc 1 640 0
 793 0380 E8000000 		call	_ZN10Fl_Browser6removeEi
 793      00
 794              	.LVL104:
 795              		.loc 1 642 0
 796 0385 488BBD78 		movq	6264(%rbp), %rdi
 796      180000
 797              	.LVL105:
 798 038c 31C0     		xorl	%eax, %eax
 799              		.loc 1 643 0
 800 038e BA010000 		movl	$1, %edx
 800      00
 801              		.loc 1 642 0
 802 0393 3B9F8402 		cmpl	644(%rdi), %ebx
 802      0000
 803 0399 0F9FC0   		setg	%al
 804 039c 29C3     		subl	%eax, %ebx
 805              	.LVL106:
 806              		.loc 1 643 0
 807 039e 89DE     		movl	%ebx, %esi
 808 03a0 E8000000 		call	_ZN10Fl_Browser6selectEii
 808      00
 809              	.LVL107:
 810 03a5 488B8578 		movq	6264(%rbp), %rax
 810      180000
 811              		.loc 1 645 0
 812 03ac 488BBD90 		movq	6288(%rbp), %rdi
 812      180000
 813 03b3 3B988402 		cmpl	644(%rax), %ebx
 813      0000
 814 03b9 0F8CC100 		jl	.L96
 814      0000
 815              		.loc 1 646 0
 816 03bf E8000000 		call	_ZN9Fl_Widget10deactivateEv
 816      00
 817              	.LVL108:
 818              	.L60:
 819              		.loc 1 648 0
 820 03c4 83FB01   		cmpl	$1, %ebx
 821 03c7 488BBD80 		movq	6272(%rbp), %rdi
 821      180000
 822 03ce 0F8F9100 		jg	.L85
 822      0000
 823              		.loc 1 649 0
 824 03d4 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 824      00
 825              	.LVL109:
 826              		.loc 1 651 0
 827 03d9 85DB     		testl	%ebx, %ebx
 828 03db 0F858900 		jne	.L84
 828      0000
 829              		.loc 1 651 0 is_stmt 0 discriminator 1
 830 03e1 488BBD88 		movq	6280(%rbp), %rdi
 830      180000
 831 03e8 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 831      00
 832              	.LVL110:
 833 03ed EB7B     		jmp	.L84
 834              	.LVL111:
 835 03ef 90       		.p2align 4,,10
 836              		.p2align 3
 837              	.L91:
 838              		.loc 1 655 0 is_stmt 1
 839 03f0 E8000000 		call	_ZNK10Fl_Browser5valueEv
 839      00
 840              	.LVL112:
 841              		.loc 1 657 0
 842 03f5 488BBD78 		movq	6264(%rbp), %rdi
 842      180000
 843 03fc 89C6     		movl	%eax, %esi
 844              		.loc 1 655 0
 845 03fe 89C3     		movl	%eax, %ebx
 846              	.LVL113:
 847              		.loc 1 657 0
 848 0400 E8000000 		call	_ZNK10Fl_Browser4dataEi
 848      00
 849              	.LVL114:
 850 0405 488BBD78 		movq	6264(%rbp), %rdi
 850      180000
 851 040c 89DE     		movl	%ebx, %esi
 852 040e 4989C4   		movq	%rax, %r12
 853 0411 E8000000 		call	_ZNK10Fl_Browser4textEi
 853      00
 854              	.LVL115:
 855 0416 488BBD78 		movq	6264(%rbp), %rdi
 855      180000
 856 041d 8D7302   		leal	2(%rbx), %esi
 857 0420 4889C2   		movq	%rax, %rdx
 858 0423 4C89E1   		movq	%r12, %rcx
 859 0426 E8000000 		call	_ZN10Fl_Browser6insertEiPKcPv
 859      00
 860              	.LVL116:
 861              		.loc 1 658 0
 862 042b 488BBD78 		movq	6264(%rbp), %rdi
 862      180000
 863 0432 89DE     		movl	%ebx, %esi
 864              		.loc 1 659 0
 865 0434 83C301   		addl	$1, %ebx
 866              	.LVL117:
 867              		.loc 1 658 0
 868 0437 E8000000 		call	_ZN10Fl_Browser6removeEi
 868      00
 869              	.LVL118:
 870              		.loc 1 659 0
 871 043c 488BBD78 		movq	6264(%rbp), %rdi
 871      180000
 872 0443 BA010000 		movl	$1, %edx
 872      00
 873 0448 89DE     		movl	%ebx, %esi
 874 044a E8000000 		call	_ZN10Fl_Browser6selectEii
 874      00
 875              	.LVL119:
 876 044f 488B8578 		movq	6264(%rbp), %rax
 876      180000
 877              		.loc 1 661 0
 878 0456 3B988402 		cmpl	644(%rax), %ebx
 878      0000
 879 045c 745A     		je	.L97
 880              	.LVL120:
 881              	.L64:
 882              		.loc 1 663 0
 883 045e 488BBD80 		movq	6272(%rbp), %rdi
 883      180000
 884              	.LVL121:
 885              	.L85:
 886 0465 E8000000 		call	_ZN9Fl_Widget8activateEv
 886      00
 887              	.LVL122:
 888              	.L84:
 889              		.loc 1 665 0
 890 046a 488BBDA0 		movq	6304(%rbp), %rdi
 890      180000
 891              	.L82:
 892 0471 E8000000 		call	_ZN9Fl_Widget8activateEv
 892      00
 893              	.LVL123:
 894 0476 E9F1FBFF 		jmp	.L44
 894      FF
 895              	.LVL124:
 896 047b 0F1F4400 		.p2align 4,,10
 896      00
 897              		.p2align 3
 898              	.L96:
 899              		.loc 1 645 0 discriminator 1
 900 0480 E8000000 		call	_ZN9Fl_Widget8activateEv
 900      00
 901              	.LVL125:
 902 0485 E93AFFFF 		jmp	.L60
 902      FF
 903              	.LVL126:
 904              	.L51:
 905              		.loc 1 621 0
 906 048a E8000000 		call	_ZN9Fl_Widget10deactivateEv
 906      00
 907              	.LVL127:
 908              		.loc 1 622 0
 909 048f 488BBD88 		movq	6280(%rbp), %rdi
 909      180000
 910 0496 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 910      00
 911              	.LVL128:
 912              		.loc 1 623 0
 913 049b 488BBD90 		movq	6288(%rbp), %rdi
 913      180000
 914 04a2 E926FEFF 		jmp	.L83
 914      FF
 915              	.L95:
 916              		.loc 1 632 0 discriminator 1
 917 04a7 488BBD80 		movq	6272(%rbp), %rdi
 917      180000
 918 04ae E8000000 		call	_ZN9Fl_Widget10deactivateEv
 918      00
 919              	.LVL129:
 920 04b3 E993FEFF 		jmp	.L56
 920      FF
 921              	.LVL130:
 922              	.L97:
 923              		.loc 1 661 0 discriminator 1
 924 04b8 488BBD90 		movq	6288(%rbp), %rdi
 924      180000
 925 04bf E8000000 		call	_ZN9Fl_Widget10deactivateEv
 925      00
 926              	.LVL131:
 927 04c4 EB98     		jmp	.L64
 928              	.LVL132:
 929              	.L52:
 930              		.loc 1 614 0
 931 04c6 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 931      00
 932              	.LVL133:
 933 04cb E9D7FDFF 		jmp	.L53
 933      FF
 934              	.LVL134:
 935              	.L93:
 936              		.loc 1 691 0
 937 04d0 E8000000 		call	__stack_chk_fail
 937      00
 938              	.LVL135:
 939              		.cfi_endproc
 940              	.LFE721:
 942              		.section	.text.unlikely._ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget
 943              	.LCOLDE7:
 944              		.section	.text._ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget
 945              	.LHOTE7:
 946              		.section	.rodata.str1.1
 947              	.LC8:
 948 0017 25732F25 		.string	"%s/%s"
 948      7300
 949              		.section	.text.unlikely._ZN15Fl_File_Chooser5valueEi,"ax",@progbits
 950              		.align 2
 951              	.LCOLDB9:
 952              		.section	.text._ZN15Fl_File_Chooser5valueEi,"ax",@progbits
 953              	.LHOTB9:
 954              		.align 2
 955              		.p2align 4,,15
 956              		.globl	_ZN15Fl_File_Chooser5valueEi
 958              	_ZN15Fl_File_Chooser5valueEi:
 959              	.LFB733:
 960              		.loc 1 1478 0
 961              		.cfi_startproc
 962              	.LVL136:
 963 0000 4156     		pushq	%r14
 964              		.cfi_def_cfa_offset 16
 965              		.cfi_offset 14, -16
 966              	.LVL137:
 967 0002 4155     		pushq	%r13
 968              		.cfi_def_cfa_offset 24
 969              		.cfi_offset 13, -24
 970 0004 4154     		pushq	%r12
 971              		.cfi_def_cfa_offset 32
 972              		.cfi_offset 12, -32
 973 0006 55       		pushq	%rbp
 974              		.cfi_def_cfa_offset 40
 975              		.cfi_offset 6, -40
 976 0007 53       		pushq	%rbx
 977              		.cfi_def_cfa_offset 48
 978              		.cfi_offset 3, -48
 979              		.loc 1 1487 0
 980 0008 F6871018 		testb	$1, 6160(%rdi)
 980      000001
 981 000f 488B8758 		movq	6232(%rdi), %rax
 981      180000
 982 0016 4C8B6078 		movq	120(%rax), %r12
 983              	.LVL138:
 984 001a 7424     		je	.L99
 985 001c 4889FD   		movq	%rdi, %rbp
 986              	.LVL139:
 987              		.loc 1 1494 0 discriminator 1
 988 001f 488BBF38 		movq	6200(%rdi), %rdi
 988      180000
 989              	.LVL140:
 990 0026 4531ED   		xorl	%r13d, %r13d
 991 0029 4189F6   		movl	%esi, %r14d
 992 002c BB010000 		movl	$1, %ebx
 992      00
 993 0031 8B8F8402 		movl	644(%rdi), %ecx
 993      0000
 994 0037 85C9     		testl	%ecx, %ecx
 995 0039 7F51     		jg	.L112
 996              	.LVL141:
 997 003b 0F1F4400 		.p2align 4,,10
 997      00
 998              		.p2align 3
 999              	.L99:
 1000              		.loc 1 1489 0
 1001 0040 4D85E4   		testq	%r12, %r12
 1002 0043 0F849700 		je	.L104
 1002      0000
 1003              		.loc 1 1513 0 discriminator 2
 1004 0049 41803C24 		cmpb	$0, (%r12)
 1004      00
 1005 004e 0F848C00 		je	.L104
 1005      0000
 1006 0054 4C89E0   		movq	%r12, %rax
 1007              	.L103:
 1008              		.loc 1 1515 0
 1009 0057 5B       		popq	%rbx
 1010              		.cfi_remember_state
 1011              		.cfi_def_cfa_offset 40
 1012 0058 5D       		popq	%rbp
 1013              		.cfi_def_cfa_offset 32
 1014 0059 415C     		popq	%r12
 1015              		.cfi_def_cfa_offset 24
 1016 005b 415D     		popq	%r13
 1017              		.cfi_def_cfa_offset 16
 1018 005d 415E     		popq	%r14
 1019              		.cfi_def_cfa_offset 8
 1020 005f C3       		ret
 1021              	.LVL142:
 1022              		.p2align 4,,10
 1023              		.p2align 3
 1024              	.L121:
 1025              		.cfi_restore_state
 1026              		.loc 1 1497 0
 1027 0060 488BBD38 		movq	6200(%rbp), %rdi
 1027      180000
 1028 0067 89DE     		movl	%ebx, %esi
 1029              		.loc 1 1499 0
 1030 0069 4183C501 		addl	$1, %r13d
 1031              	.LVL143:
 1032              		.loc 1 1497 0
 1033 006d E8000000 		call	_ZNK10Fl_Browser4textEi
 1033      00
 1034              	.LVL144:
 1035              		.loc 1 1501 0
 1036 0072 4539F5   		cmpl	%r14d, %r13d
 1037              		.loc 1 1497 0
 1038 0075 4989C4   		movq	%rax, %r12
 1039              	.LVL145:
 1040              		.loc 1 1501 0
 1041 0078 7426     		je	.L120
 1042              	.LVL146:
 1043              	.L105:
 1044              		.loc 1 1494 0 discriminator 2
 1045 007a 488BBD38 		movq	6200(%rbp), %rdi
 1045      180000
 1046 0081 83C301   		addl	$1, %ebx
 1047              	.LVL147:
 1048 0084 3B9F8402 		cmpl	644(%rdi), %ebx
 1048      0000
 1049 008a 7FB4     		jg	.L99
 1050              	.LVL148:
 1051              	.L112:
 1052              		.loc 1 1495 0
 1053 008c 89DE     		movl	%ebx, %esi
 1054 008e E8000000 		call	_ZNK10Fl_Browser8selectedEi
 1054      00
 1055              	.LVL149:
 1056 0093 85C0     		testl	%eax, %eax
 1057 0095 74E3     		je	.L105
 1058 0097 EBC7     		jmp	.L121
 1059              	.LVL150:
 1060 0099 0F1F8000 		.p2align 4,,10
 1060      000000
 1061              		.p2align 3
 1062              	.L120:
 1063              		.loc 1 1502 0
 1064 00a0 807D1000 		cmpb	$0, 16(%rbp)
 1065 00a4 7445     		je	.L106
 1066              	.LVL151:
 1067              	.LBB457:
 1068              	.LBB458:
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
 1069              		.loc 2 65 0
 1070 00a6 4883EC08 		subq	$8, %rsp
 1071              		.cfi_def_cfa_offset 56
 1072 00aa 4C8D4D10 		leaq	16(%rbp), %r9
 1073 00ae BA010000 		movl	$1, %edx
 1073      00
 1074 00b3 50       		pushq	%rax
 1075              		.cfi_def_cfa_offset 64
 1076 00b4 41B80000 		movl	$.LC8, %r8d
 1076      0000
 1077 00ba B9000800 		movl	$2048, %ecx
 1077      00
 1078 00bf BE000800 		movl	$2048, %esi
 1078      00
 1079 00c4 BF000000 		movl	$_ZZN15Fl_File_Chooser5valueEiE8pathname, %edi
 1079      00
 1080 00c9 31C0     		xorl	%eax, %eax
 1081              	.LVL152:
 1082 00cb E8000000 		call	__snprintf_chk
 1082      00
 1083              	.LVL153:
 1084 00d0 58       		popq	%rax
 1085              		.cfi_def_cfa_offset 56
 1086              	.LBE458:
 1087              	.LBE457:
 1088              		.loc 1 1508 0
 1089 00d1 B8000000 		movl	$_ZZN15Fl_File_Chooser5valueEiE8pathname, %eax
 1089      00
 1090              	.LBB460:
 1091              	.LBB459:
 1092              		.loc 2 65 0
 1093 00d6 5A       		popq	%rdx
 1094              		.cfi_def_cfa_offset 48
 1095 00d7 E97BFFFF 		jmp	.L103
 1095      FF
 1096              	.LVL154:
 1097 00dc 0F1F4000 		.p2align 4,,10
 1098              		.p2align 3
 1099              	.L104:
 1100              	.LBE459:
 1101              	.LBE460:
 1102              		.loc 1 1515 0
 1103 00e0 5B       		popq	%rbx
 1104              		.cfi_remember_state
 1105              		.cfi_def_cfa_offset 40
 1106              		.loc 1 1489 0
 1107 00e1 31C0     		xorl	%eax, %eax
 1108              		.loc 1 1515 0
 1109 00e3 5D       		popq	%rbp
 1110              		.cfi_def_cfa_offset 32
 1111 00e4 415C     		popq	%r12
 1112              		.cfi_def_cfa_offset 24
 1113 00e6 415D     		popq	%r13
 1114              		.cfi_def_cfa_offset 16
 1115 00e8 415E     		popq	%r14
 1116              		.cfi_def_cfa_offset 8
 1117 00ea C3       		ret
 1118              	.LVL155:
 1119              	.L106:
 1120              		.cfi_restore_state
 1121              		.loc 1 1505 0
 1122 00eb BA000800 		movl	$2048, %edx
 1122      00
 1123 00f0 4889C6   		movq	%rax, %rsi
 1124 00f3 BF000000 		movl	$_ZZN15Fl_File_Chooser5valueEiE8pathname, %edi
 1124      00
 1125 00f8 E8000000 		call	fl_strlcpy
 1125      00
 1126              	.LVL156:
 1127              		.loc 1 1508 0
 1128 00fd B8000000 		movl	$_ZZN15Fl_File_Chooser5valueEiE8pathname, %eax
 1128      00
 1129 0102 E950FFFF 		jmp	.L103
 1129      FF
 1130              		.cfi_endproc
 1131              	.LFE733:
 1133              		.section	.text.unlikely._ZN15Fl_File_Chooser5valueEi
 1134              	.LCOLDE9:
 1135              		.section	.text._ZN15Fl_File_Chooser5valueEi
 1136              	.LHOTE9:
 1137              		.section	.rodata.str1.1
 1138              	.LC10:
 1139 001d 4066696C 		.string	"@fileopen"
 1139      656F7065 
 1139      6E00
 1140              	.LC11:
 1141 0027 3C656D70 		.string	"<empty file>"
 1141      74792066 
 1141      696C653E 
 1141      00
 1142              	.LC12:
 1143 0034 402D3372 		.string	"@-3refresh"
 1143      65667265 
 1143      736800
 1144              	.LC13:
 1145 003f 726200   		.string	"rb"
 1146              	.LC14:
 1147 0042 3F00     		.string	"?"
 1148              	.LC15:
 1149 0044 5800     		.string	"X"
 1150              		.section	.text.unlikely._ZN15Fl_File_Chooser14update_previewEv.part.23,"ax",@progbits
 1151              		.align 2
 1152              	.LCOLDB16:
 1153              		.section	.text._ZN15Fl_File_Chooser14update_previewEv.part.23,"ax",@progbits
 1154              	.LHOTB16:
 1155              		.align 2
 1156              		.p2align 4,,15
 1158              	_ZN15Fl_File_Chooser14update_previewEv.part.23:
 1159              	.LFB765:
 1160              		.loc 1 1304 0
 1161              		.cfi_startproc
 1162              	.LVL157:
 1163 0000 4156     		pushq	%r14
 1164              		.cfi_def_cfa_offset 16
 1165              		.cfi_offset 14, -16
 1166 0002 4155     		pushq	%r13
 1167              		.cfi_def_cfa_offset 24
 1168              		.cfi_offset 13, -24
 1169              		.loc 1 1316 0
 1170 0004 BE010000 		movl	$1, %esi
 1170      00
 1171              		.loc 1 1304 0
 1172 0009 4154     		pushq	%r12
 1173              		.cfi_def_cfa_offset 32
 1174              		.cfi_offset 12, -32
 1175 000b 55       		pushq	%rbp
 1176              		.cfi_def_cfa_offset 40
 1177              		.cfi_offset 6, -40
 1178 000c 4989FC   		movq	%rdi, %r12
 1179 000f 53       		pushq	%rbx
 1180              		.cfi_def_cfa_offset 48
 1181              		.cfi_offset 3, -48
 1182 0010 4881ECA0 		subq	$160, %rsp
 1182      000000
 1183              		.cfi_def_cfa_offset 208
 1184              		.loc 1 1304 0
 1185 0017 64488B04 		movq	%fs:40, %rax
 1185      25280000 
 1185      00
 1186 0020 48898424 		movq	%rax, 152(%rsp)
 1186      98000000 
 1187 0028 31C0     		xorl	%eax, %eax
 1188              		.loc 1 1316 0
 1189 002a E8000000 		call	_ZN15Fl_File_Chooser5valueEi
 1189      00
 1190              	.LVL158:
 1191              	.LBB461:
 1192              		.loc 1 1317 0
 1193 002f 4885C0   		testq	%rax, %rax
 1194 0032 0F84A802 		je	.L169
 1194      0000
 1195              	.LBB462:
 1196              		.loc 1 1320 0
 1197 0038 4889C7   		movq	%rax, %rdi
 1198 003b 4889C3   		movq	%rax, %rbx
 1199              		.loc 1 1322 0
 1200 003e 41BD0000 		movl	$.LC10, %r13d
 1200      0000
 1201              		.loc 1 1320 0
 1202 0044 E8000000 		call	_Z17fl_filename_isdirPKc
 1202      00
 1203              	.LVL159:
 1204 0049 85C0     		testl	%eax, %eax
 1205 004b 0F84B700 		je	.L245
 1205      0000
 1206              	.LVL160:
 1207              	.L123:
 1208              	.LBE462:
 1209              	.LBE461:
 1210              		.loc 1 1351 0
 1211 0051 498B8424 		movq	6208(%r12), %rax
 1211      40180000 
 1212 0059 488B7838 		movq	56(%rax), %rdi
 1213              	.LVL161:
 1214              		.loc 1 1353 0
 1215 005d 4885FF   		testq	%rdi, %rdi
 1216 0060 740D     		je	.L239
 1217 0062 E8000000 		call	_ZN15Fl_Shared_Image7releaseEv
 1217      00
 1218              	.LVL162:
 1219              		.loc 1 1355 0
 1220 0067 498B8424 		movq	6208(%r12), %rax
 1220      40180000 
 1221              	.L239:
 1222              	.LVL163:
 1223              	.LBB473:
 1224              	.LBB474:
 1225              		.file 4 "fltk-1.3.4-1/FL/Fl_Widget.H"
   1:fltk-1.3.4-1/FL/Fl_Widget.H **** //
   2:fltk-1.3.4-1/FL/Fl_Widget.H **** // "$Id: Fl_Widget.H 10677 2015-04-05 09:04:44Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Widget.H **** //
   4:fltk-1.3.4-1/FL/Fl_Widget.H **** // Widget header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Widget.H **** //
   6:fltk-1.3.4-1/FL/Fl_Widget.H **** // Copyright 1998-2015 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Widget.H **** //
   8:fltk-1.3.4-1/FL/Fl_Widget.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Widget.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Widget.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  12:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  14:fltk-1.3.4-1/FL/Fl_Widget.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  16:fltk-1.3.4-1/FL/Fl_Widget.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Widget.H **** //
  18:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  19:fltk-1.3.4-1/FL/Fl_Widget.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl_Widget.H ****    Fl_Widget, Fl_Label classes . */
  21:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  22:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifndef Fl_Widget_H
  23:fltk-1.3.4-1/FL/Fl_Widget.H **** #define Fl_Widget_H
  24:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  25:fltk-1.3.4-1/FL/Fl_Widget.H **** #include "Enumerations.H"
  26:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  27:fltk-1.3.4-1/FL/Fl_Widget.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Widget.H ****   \todo	typedef's fl_intptr_t and fl_uintptr_t should be documented.
  29:fltk-1.3.4-1/FL/Fl_Widget.H **** */
  30:fltk-1.3.4-1/FL/Fl_Widget.H **** #ifdef _WIN64
  31:fltk-1.3.4-1/FL/Fl_Widget.H **** #if defined(__GNUC__) || defined(__clang__)
  32:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stdint.h>
  33:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  34:fltk-1.3.4-1/FL/Fl_Widget.H **** #include <stddef.h>  // M$VC
  35:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  36:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef intptr_t fl_intptr_t;
  37:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef uintptr_t fl_uintptr_t;
  38:fltk-1.3.4-1/FL/Fl_Widget.H **** #else
  39:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef long fl_intptr_t;
  40:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef unsigned long fl_uintptr_t;
  41:fltk-1.3.4-1/FL/Fl_Widget.H **** #endif
  42:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  43:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Widget;
  44:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Window;
  45:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Group;
  46:fltk-1.3.4-1/FL/Fl_Widget.H **** class Fl_Image;
  47:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  48:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type definition for all fltk widgets (by far the most used) */
  49:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback )(Fl_Widget*, void*);
  50:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Default callback type pointer definition for all fltk widgets */
  51:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef Fl_Callback* Fl_Callback_p; // needed for BORLAND
  52:fltk-1.3.4-1/FL/Fl_Widget.H **** /** One parameter callback type definition passing only the widget */
  53:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback0)(Fl_Widget*);
  54:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Callback type definition passing the widget and a long data value */
  55:fltk-1.3.4-1/FL/Fl_Widget.H **** typedef void (Fl_Callback1)(Fl_Widget*, long);
  56:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  57:fltk-1.3.4-1/FL/Fl_Widget.H **** /** This struct stores all information for a text or mixed graphics label.
  58:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  59:fltk-1.3.4-1/FL/Fl_Widget.H ****     \todo There is an aspiration that the Fl_Label type will become a widget by itself.
  60:fltk-1.3.4-1/FL/Fl_Widget.H ****           That way we will be avoiding a lot of code duplication by handling labels in
  61:fltk-1.3.4-1/FL/Fl_Widget.H ****           a similar fashion to widgets containing text. We also provide an easy
  62:fltk-1.3.4-1/FL/Fl_Widget.H ****           interface for very complex labels, containing html or vector graphics.
  63:fltk-1.3.4-1/FL/Fl_Widget.H ****           However, this re-factoring is not in place in this release.
  64:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
  65:fltk-1.3.4-1/FL/Fl_Widget.H **** struct FL_EXPORT Fl_Label {
  66:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label text */
  67:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* value;
  68:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for an active label */
  69:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image;
  70:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** optional image for a deactivated label */
  71:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage;
  72:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** label font used in text */
  73:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font font;
  74:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** size of label font */
  75:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize size;
  76:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** text color */
  77:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color;
  78:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** alignment of label */
  79:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align_;
  80:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** type of label. \see Fl_Labeltype */
  81:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type;
  82:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  83:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the label aligned to the given box */
  84:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw(int,int,int,int, Fl_Align) const ;
  85:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure(int &w, int &h) const ;
  86:fltk-1.3.4-1/FL/Fl_Widget.H **** };
  87:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  88:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  89:fltk-1.3.4-1/FL/Fl_Widget.H **** /** Fl_Widget is the base class for all widgets in FLTK.  
  90:fltk-1.3.4-1/FL/Fl_Widget.H ****   
  91:fltk-1.3.4-1/FL/Fl_Widget.H ****     You can't create one of these because the constructor is not public.
  92:fltk-1.3.4-1/FL/Fl_Widget.H ****     However you can subclass it.  
  93:fltk-1.3.4-1/FL/Fl_Widget.H **** 
  94:fltk-1.3.4-1/FL/Fl_Widget.H ****     All "property" accessing methods, such as color(), parent(), or argument() 
  95:fltk-1.3.4-1/FL/Fl_Widget.H ****     are implemented as trivial inline functions and thus are as fast and small 
  96:fltk-1.3.4-1/FL/Fl_Widget.H ****     as accessing fields in a structure. Unless otherwise noted, the property 
  97:fltk-1.3.4-1/FL/Fl_Widget.H ****     setting methods such as color(n) or label(s) are also trivial inline 
  98:fltk-1.3.4-1/FL/Fl_Widget.H ****     functions, even if they change the widget's appearance. It is up to the 
  99:fltk-1.3.4-1/FL/Fl_Widget.H ****     user code to call redraw() after these.
 100:fltk-1.3.4-1/FL/Fl_Widget.H ****  */
 101:fltk-1.3.4-1/FL/Fl_Widget.H **** class FL_EXPORT Fl_Widget {
 102:fltk-1.3.4-1/FL/Fl_Widget.H ****   friend class Fl_Group;
 103:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 104:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent_;
 105:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback* callback_;
 106:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data_;
 107:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x_,y_,w_,h_;
 108:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Label label_;
 109:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags_;
 110:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color_;
 111:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color2_;
 112:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type_;
 113:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage_;
 114:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar box_;
 115:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar when_;
 116:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 117:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip_;
 118:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 119:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented copy ctor */
 120:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(const Fl_Widget &);
 121:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** unimplemented assignment operator */
 122:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget& operator=(const Fl_Widget &);
 123:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 124:fltk-1.3.4-1/FL/Fl_Widget.H **** protected:
 125:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 126:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Creates a widget at the given position and size.
 127:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 128:fltk-1.3.4-1/FL/Fl_Widget.H ****       The Fl_Widget is a protected constructor, but all derived widgets have a 
 129:fltk-1.3.4-1/FL/Fl_Widget.H ****       matching public constructor. It takes a value for x(), y(), w(), h(), and 
 130:fltk-1.3.4-1/FL/Fl_Widget.H ****       an optional value for label().
 131:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 132:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y the position of the widget relative to the enclosing window
 133:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h size of the widget in pixels
 134:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] label optional text for the widget label
 135:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 136:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Widget(int x, int y, int w, int h, const char *label=0L);
 137:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 138:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 139:fltk-1.3.4-1/FL/Fl_Widget.H ****   void x(int v) {x_ = v;}
 140:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 141:fltk-1.3.4-1/FL/Fl_Widget.H ****   void y(int v) {y_ = v;}
 142:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 143:fltk-1.3.4-1/FL/Fl_Widget.H ****   void w(int v) {w_ = v;}
 144:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. Use position(int,int), size(int,int) or resize(int,int,int,int) instead. *
 145:fltk-1.3.4-1/FL/Fl_Widget.H ****   void h(int v) {h_ = v;}
 146:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget flags mask */
 147:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int flags() const {return flags_;}
 148:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a flag in the flags mask */
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_flag(unsigned int c) {flags_ |= c;}
 150:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 151:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_flag(unsigned int c) {flags_ &= ~c;}
 152:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** flags possible values enumeration.
 153:fltk-1.3.4-1/FL/Fl_Widget.H ****       See activate(), output(), visible(), changed(), set_visible_focus()
 154:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 155:fltk-1.3.4-1/FL/Fl_Widget.H ****   enum {
 156:fltk-1.3.4-1/FL/Fl_Widget.H ****         INACTIVE        = 1<<0,   ///< the widget can't receive focus, and is disabled but potentia
 157:fltk-1.3.4-1/FL/Fl_Widget.H ****         INVISIBLE       = 1<<1,   ///< the widget is not drawn, but can receive a few special event
 158:fltk-1.3.4-1/FL/Fl_Widget.H ****         OUTPUT          = 1<<2,   ///< for output only
 159:fltk-1.3.4-1/FL/Fl_Widget.H ****         NOBORDER        = 1<<3,   ///< don't draw a decoration (Fl_Window)
 160:fltk-1.3.4-1/FL/Fl_Widget.H ****         FORCE_POSITION  = 1<<4,   ///< don't let the window manager position the window (Fl_Window)
 161:fltk-1.3.4-1/FL/Fl_Widget.H ****         NON_MODAL       = 1<<5,   ///< this is a hovering toolbar window (Fl_Window)
 162:fltk-1.3.4-1/FL/Fl_Widget.H ****         SHORTCUT_LABEL  = 1<<6,   ///< the label contains a shortcut we need to draw
 163:fltk-1.3.4-1/FL/Fl_Widget.H ****         CHANGED         = 1<<7,   ///< the widget value changed
 164:fltk-1.3.4-1/FL/Fl_Widget.H ****         OVERRIDE        = 1<<8,   ///< position window on top (Fl_Window)
 165:fltk-1.3.4-1/FL/Fl_Widget.H ****         VISIBLE_FOCUS   = 1<<9,   ///< accepts keyboard focus navigation if the widget can have the
 166:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_LABEL    = 1<<10,  ///< the widget label is internally copied, its destruction is ha
 167:fltk-1.3.4-1/FL/Fl_Widget.H ****         CLIP_CHILDREN   = 1<<11,  ///< all drawing within this widget will be clipped (Fl_Group)
 168:fltk-1.3.4-1/FL/Fl_Widget.H ****         MENU_WINDOW     = 1<<12,  ///< a temporary popup window, dismissed by clicking outside (Fl_
 169:fltk-1.3.4-1/FL/Fl_Widget.H ****         TOOLTIP_WINDOW  = 1<<13,  ///< a temporary popup, transparent to events, and dismissed easi
 170:fltk-1.3.4-1/FL/Fl_Widget.H ****         MODAL           = 1<<14,  ///< a window blocking input to all other winows (Fl_Window)
 171:fltk-1.3.4-1/FL/Fl_Widget.H ****         NO_OVERLAY      = 1<<15,  ///< window not using a hardware overlay plane (Fl_Menu_Window)
 172:fltk-1.3.4-1/FL/Fl_Widget.H ****         GROUP_RELATIVE  = 1<<16,  ///< position this widget relative to the parent group, not to th
 173:fltk-1.3.4-1/FL/Fl_Widget.H ****         COPIED_TOOLTIP  = 1<<17,  ///< the widget tooltip is internally copied, its destruction is 
 174:fltk-1.3.4-1/FL/Fl_Widget.H ****         FULLSCREEN      = 1<<18,  ///< a fullscreen window (Fl_Window)
 175:fltk-1.3.4-1/FL/Fl_Widget.H ****         MAC_USE_ACCENTS_MENU = 1<<19, ///< On the Mac OS platform, pressing and holding a key on th
 176:fltk-1.3.4-1/FL/Fl_Widget.H ****         // (space for more flags)
 177:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG3       = 1<<29,  ///< reserved for 3rd party extensions
 178:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG2       = 1<<30,  ///< reserved for 3rd party extensions
 179:fltk-1.3.4-1/FL/Fl_Widget.H ****         USERFLAG1       = 1<<31   ///< reserved for 3rd party extensions
 180:fltk-1.3.4-1/FL/Fl_Widget.H ****   };
 181:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box() const;
 182:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, Fl_Color c) const;
 183:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_box(Fl_Boxtype t, int x,int y,int w,int h, Fl_Color c) const;
 184:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_backdrop() const;
 185:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** draws a focus rectangle around the widget */
 186:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus() {draw_focus(box(),x(),y(),w(),h());}
 187:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_focus(Fl_Boxtype t, int x,int y,int w,int h) const;
 188:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label() const;
 189:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int) const;
 190:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 191:fltk-1.3.4-1/FL/Fl_Widget.H **** public:
 192:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 193:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Destroys the widget.
 194:fltk-1.3.4-1/FL/Fl_Widget.H ****       Destroying single widgets is not very common. You almost always want to 
 195:fltk-1.3.4-1/FL/Fl_Widget.H ****       destroy the parent group instead, which will destroy all of the child widgets 
 196:fltk-1.3.4-1/FL/Fl_Widget.H ****       and groups in that group.
 197:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 198:fltk-1.3.4-1/FL/Fl_Widget.H ****       \since FLTK 1.3, the widget's destructor removes the widget from its parent
 199:fltk-1.3.4-1/FL/Fl_Widget.H ****       group, if it is member of a group.
 200:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 201:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual ~Fl_Widget();
 202:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 203:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Draws the widget.
 204:fltk-1.3.4-1/FL/Fl_Widget.H ****       Never call this function directly. FLTK will schedule redrawing whenever
 205:fltk-1.3.4-1/FL/Fl_Widget.H ****       needed. If your widget must be redrawn as soon as possible, call redraw()
 206:fltk-1.3.4-1/FL/Fl_Widget.H ****       instead.
 207:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 208:fltk-1.3.4-1/FL/Fl_Widget.H ****       Override this function to draw your own widgets.
 209:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 210:fltk-1.3.4-1/FL/Fl_Widget.H ****       If you ever need to call another widget's draw method <I>from within your
 211:fltk-1.3.4-1/FL/Fl_Widget.H ****       own draw() method</I>, e.g. for an embedded scrollbar, you can do it
 212:fltk-1.3.4-1/FL/Fl_Widget.H ****       (because draw() is virtual) like this:
 213:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 214:fltk-1.3.4-1/FL/Fl_Widget.H ****       \code
 215:fltk-1.3.4-1/FL/Fl_Widget.H ****         Fl_Widget *s = &scroll;		// scroll is an embedded Fl_Scrollbar
 216:fltk-1.3.4-1/FL/Fl_Widget.H **** 	s->draw();			// calls Fl_Scrollbar::draw()
 217:fltk-1.3.4-1/FL/Fl_Widget.H ****       \endcode
 218:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 219:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void draw() = 0;
 220:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 221:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Handles the specified event. 
 222:fltk-1.3.4-1/FL/Fl_Widget.H ****       You normally don't call this method directly, but instead let FLTK do 
 223:fltk-1.3.4-1/FL/Fl_Widget.H ****       it when the user interacts with the widget.
 224:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 225:fltk-1.3.4-1/FL/Fl_Widget.H ****       When implemented in a widget, this function must return 0 if the 
 226:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget does not use the event or 1 otherwise.
 227:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 228:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most of the time, you want to call the inherited handle() method in 
 229:fltk-1.3.4-1/FL/Fl_Widget.H ****       your overridden method so that you don't short-circuit events that you 
 230:fltk-1.3.4-1/FL/Fl_Widget.H ****       don't handle. In this last case you should return the callee retval.
 231:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 232:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] event the kind of event received
 233:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the event was not used or understood
 234:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 if the event was used and can be deleted
 235:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Event
 236:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 237:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual int handle(int event);
 238:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 239:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the current label was assigned with copy_label().
 240:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 241:fltk-1.3.4-1/FL/Fl_Widget.H ****       This can be useful for temporarily overwriting the widget's label
 242:fltk-1.3.4-1/FL/Fl_Widget.H ****       and restoring it later.
 243:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 244:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 current label was assigned with label().
 245:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 1 current label was assigned with copy_label().
 246:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 247:fltk-1.3.4-1/FL/Fl_Widget.H ****   int is_label_copied() const {return ((flags_ & COPIED_LABEL) ? 1 : 0);}
 248:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 249:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns a pointer to the parent widget.  
 250:fltk-1.3.4-1/FL/Fl_Widget.H ****       Usually this is a Fl_Group or Fl_Window. 
 251:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval NULL if the widget has no parent
 252:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Group::add(Fl_Widget*)
 253:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 254:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Group* parent() const {return parent_;}
 255:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 256:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only - "for hacks only".
 257:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 258:fltk-1.3.4-1/FL/Fl_Widget.H ****       It is \em \b STRONGLY recommended not to use this method, because it
 259:fltk-1.3.4-1/FL/Fl_Widget.H ****       short-circuits Fl_Group's normal widget adding and removing methods,
 260:fltk-1.3.4-1/FL/Fl_Widget.H ****       if the widget is already a child widget of another Fl_Group.
 261:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 262:fltk-1.3.4-1/FL/Fl_Widget.H ****       Use Fl_Group::add(Fl_Widget*) and/or Fl_Group::remove(Fl_Widget*) instead.
 263:fltk-1.3.4-1/FL/Fl_Widget.H ****   */
 264:fltk-1.3.4-1/FL/Fl_Widget.H ****   void parent(Fl_Group* p) {parent_ = p;} // for hacks only, use Fl_Group::add()
 265:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 266:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget type.
 267:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns the widget type value, which is used for Forms compatibility
 268:fltk-1.3.4-1/FL/Fl_Widget.H ****       and to simulate RTTI.
 269:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 270:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo Explain "simulate RTTI" (currently only used to decide if a widget
 271:fltk-1.3.4-1/FL/Fl_Widget.H ****       is a window, i.e. type()>=FL_WINDOW ?). Is type() really used in a way
 272:fltk-1.3.4-1/FL/Fl_Widget.H ****       that ensures "Forms compatibility" ?
 273:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 274:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar type() const {return type_;}
 275:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 276:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the widget type.
 277:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is used for Forms compatibility.
 278:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 279:fltk-1.3.4-1/FL/Fl_Widget.H ****   void type(uchar t) {type_ = t;}
 280:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 281:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 282:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the x position relative to the window
 283:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 284:fltk-1.3.4-1/FL/Fl_Widget.H ****   int x() const {return x_;}
 285:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 286:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget position in its window.
 287:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the y position relative to the window
 288:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 289:fltk-1.3.4-1/FL/Fl_Widget.H ****   int y() const {return y_;}
 290:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 291:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget width.
 292:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the width of the widget in pixels.
 293:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 294:fltk-1.3.4-1/FL/Fl_Widget.H ****   int w() const {return w_;}
 295:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 296:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the widget height.
 297:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the height of the widget in pixels.
 298:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 299:fltk-1.3.4-1/FL/Fl_Widget.H ****   int h() const {return h_;}
 300:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 301:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size or position of the widget.
 302:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 303:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is a virtual function so that the widget may implement its 
 304:fltk-1.3.4-1/FL/Fl_Widget.H ****       own handling of resizing. The default version does \e not
 305:fltk-1.3.4-1/FL/Fl_Widget.H ****       call the redraw() method, but instead relies on the parent widget 
 306:fltk-1.3.4-1/FL/Fl_Widget.H ****       to do so because the parent may know a faster way to update the 
 307:fltk-1.3.4-1/FL/Fl_Widget.H ****       display, such as scrolling from the old position.  
 308:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 309:fltk-1.3.4-1/FL/Fl_Widget.H ****       Some window managers under X11 call resize() a lot more often 
 310:fltk-1.3.4-1/FL/Fl_Widget.H ****       than needed. Please verify that the position or size of a widget 
 311:fltk-1.3.4-1/FL/Fl_Widget.H ****       did actually change before doing any extensive calculations.
 312:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 313:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h()), 
 314:fltk-1.3.4-1/FL/Fl_Widget.H ****       and size(W, H) is a shortcut for resize(x(), y(), W, H).
 315:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 316:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y new position relative to the parent window 
 317:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w, h new size
 318:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), size(int,int)
 319:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 320:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void resize(int x, int y, int w, int h);
 321:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 322:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Internal use only. */
 323:fltk-1.3.4-1/FL/Fl_Widget.H ****   int damage_resize(int,int,int,int);
 324:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 325:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Repositions the window or widget.
 326:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 327:fltk-1.3.4-1/FL/Fl_Widget.H ****       position(X, Y) is a shortcut for resize(X, Y, w(), h()).
 328:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 329:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] X, Y new position relative to the parent window 
 330:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see resize(int,int,int,int), size(int,int)
 331:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 332:fltk-1.3.4-1/FL/Fl_Widget.H ****   void position(int X,int Y) {resize(X,Y,w_,h_);}
 333:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 334:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Changes the size of the widget.
 335:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 336:fltk-1.3.4-1/FL/Fl_Widget.H ****       size(W, H) is a shortcut for resize(x(), y(), W, H).
 337:fltk-1.3.4-1/FL/Fl_Widget.H ****     
 338:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] W, H new size
 339:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see position(int,int), resize(int,int,int,int)
 340:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 341:fltk-1.3.4-1/FL/Fl_Widget.H ****   void size(int W,int H) {resize(x_,y_,W,H);}
 342:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 343:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label alignment.
 344:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 345:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return label alignment
 346:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(), align(Fl_Align), Fl_Align
 347:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 348:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Align align() const {return label_.align_;}
 349:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 350:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label alignment.
 351:fltk-1.3.4-1/FL/Fl_Widget.H ****       This controls how the label is displayed next to or inside the widget. 
 352:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default value is FL_ALIGN_CENTER, which centers the label inside 
 353:fltk-1.3.4-1/FL/Fl_Widget.H ****       the widget.
 354:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] alignment new label alignment
 355:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see align(), Fl_Align
 356:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 357:fltk-1.3.4-1/FL/Fl_Widget.H ****   void align(Fl_Align alignment) {label_.align_ = alignment;}
 358:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 359:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the box type of the widget.
 360:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current box type
 361:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(Fl_Boxtype), Fl_Boxtype
 362:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 363:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Boxtype box() const {return (Fl_Boxtype)box_;}
 364:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 365:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the box type for the widget. 
 366:fltk-1.3.4-1/FL/Fl_Widget.H ****       This identifies a routine that draws the background of the widget.
 367:fltk-1.3.4-1/FL/Fl_Widget.H ****       See Fl_Boxtype for the available types. The default depends on the 
 368:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget, but is usually FL_NO_BOX or FL_UP_BOX.
 369:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_box the new box type
 370:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see box(), Fl_Boxtype
 371:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 372:fltk-1.3.4-1/FL/Fl_Widget.H ****   void box(Fl_Boxtype new_box) {box_ = new_box;}
 373:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 374:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the background color of the widget.
 375:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current background color
 376:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(Fl_Color), color(Fl_Color, Fl_Color)
 377:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 378:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color color() const {return color_;}
 379:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 380:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background color of the widget. 
 381:fltk-1.3.4-1/FL/Fl_Widget.H ****       The color is passed to the box routine. The color is either an index into 
 382:fltk-1.3.4-1/FL/Fl_Widget.H ****       an internal table of RGB colors or an RGB color value generated using 
 383:fltk-1.3.4-1/FL/Fl_Widget.H ****       fl_rgb_color().
 384:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 385:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default for most widgets is FL_BACKGROUND_COLOR. Use Fl::set_color()
 386:fltk-1.3.4-1/FL/Fl_Widget.H ****       to redefine colors in the color map.
 387:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 388:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(), color(Fl_Color, Fl_Color), selection_color(Fl_Color)
 389:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 390:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg) {color_ = bg;}
 391:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 392:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the selection color.
 393:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current selection color
 394:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(Fl_Color), color(Fl_Color, Fl_Color)
 395:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 396:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color selection_color() const {return color2_;}
 397:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 398:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the selection color.
 399:fltk-1.3.4-1/FL/Fl_Widget.H ****       The selection color is defined for Forms compatibility and is usually 
 400:fltk-1.3.4-1/FL/Fl_Widget.H ****       used to color the widget when it is selected, although some widgets 
 401:fltk-1.3.4-1/FL/Fl_Widget.H ****       use this color for other purposes. You can set both colors at once 
 402:fltk-1.3.4-1/FL/Fl_Widget.H ****       with color(Fl_Color bg, Fl_Color sel).
 403:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a the new selection color
 404:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see selection_color(), color(Fl_Color, Fl_Color)
 405:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 406:fltk-1.3.4-1/FL/Fl_Widget.H ****   void selection_color(Fl_Color a) {color2_ = a;}
 407:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 408:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the background and selection color of the widget. 
 409:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 410:fltk-1.3.4-1/FL/Fl_Widget.H ****       The two color form sets both the background and selection colors. 
 411:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] bg background color
 412:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] sel selection color
 413:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see color(unsigned), selection_color(unsigned)
 414:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 415:fltk-1.3.4-1/FL/Fl_Widget.H ****   void color(Fl_Color bg, Fl_Color sel) {color_=bg; color2_=sel;}
 416:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 417:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current label text.
 418:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the current label text
 419:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), copy_label(const char *)
 420:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 421:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char* label() const {return label_.value;}
 422:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 423:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label pointer.
 424:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 425:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label is shown somewhere on or next to the widget. The passed pointer 
 426:fltk-1.3.4-1/FL/Fl_Widget.H ****       is stored unchanged in the widget (the string is \em not copied), so if 
 427:fltk-1.3.4-1/FL/Fl_Widget.H ****       you need to set the label to a formatted value, make sure the buffer is 
 428:fltk-1.3.4-1/FL/Fl_Widget.H ****       static, global, or allocated. The copy_label() method can be used 
 429:fltk-1.3.4-1/FL/Fl_Widget.H ****       to make a copy of the label string automatically.
 430:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] text pointer to new label text
 431:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see copy_label()
 432:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 433:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(const char* text);
 434:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 435:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current label. 
 436:fltk-1.3.4-1/FL/Fl_Widget.H ****       Unlike label(), this method allocates a copy of the label 
 437:fltk-1.3.4-1/FL/Fl_Widget.H ****       string instead of using the original string pointer.
 438:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 439:fltk-1.3.4-1/FL/Fl_Widget.H ****       The internal copy will automatically be freed whenever you assign
 440:fltk-1.3.4-1/FL/Fl_Widget.H ****       a new label or when the widget is destroyed.
 441:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 442:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] new_label the new label text
 443:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label()
 444:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 445:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_label(const char *new_label);
 446:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 447:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Shortcut to set the label text and type in one call.
 448:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see label(const char *), labeltype(Fl_Labeltype)
 449:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 450:fltk-1.3.4-1/FL/Fl_Widget.H ****   void label(Fl_Labeltype a, const char* b) {label_.type = a; label_.value = b;}
 451:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 452:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label type.
 453:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label type.
 454:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 455:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 456:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Labeltype labeltype() const {return (Fl_Labeltype)label_.type;}
 457:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 458:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label type. 
 459:fltk-1.3.4-1/FL/Fl_Widget.H ****       The label type identifies the function that draws the label of the widget. 
 460:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is generally used for special effects such as embossing or for using 
 461:fltk-1.3.4-1/FL/Fl_Widget.H ****       the label() pointer as another form of data such as an icon. The value 
 462:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_NORMAL_LABEL prints the label as plain text.
 463:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] a new label type
 464:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Labeltype
 465:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 466:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labeltype(Fl_Labeltype a) {label_.type = a;}
 467:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 468:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the label color. 
 469:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 470:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current label color
 471:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 472:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Color labelcolor() const {return label_.color;}
 473:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 474:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the label color. 
 475:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default color is FL_FOREGROUND_COLOR. 
 476:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c the new label color
 477:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 478:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelcolor(Fl_Color c) {label_.color=c;}
 479:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 480:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font to use. 
 481:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The default value
 482:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Windows&reg;).
 483:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 484:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current font used by the label
 485:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 486:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 487:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Font labelfont() const {return label_.font;}
 488:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 489:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font to use. 
 490:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fonts are identified by indexes into a table. The default value
 491:fltk-1.3.4-1/FL/Fl_Widget.H ****       uses a Helvetica typeface (Arial for Microsoft&reg; Windows&reg;).
 492:fltk-1.3.4-1/FL/Fl_Widget.H ****       The function Fl::set_font() can define new typefaces.
 493:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] f the new font for the label
 494:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Font
 495:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 496:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelfont(Fl_Font f) {label_.font=f;}
 497:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 498:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the font size in pixels. 
 499:fltk-1.3.4-1/FL/Fl_Widget.H ****       The default size is 14 pixels.
 500:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current font size
 501:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 502:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Fontsize labelsize() const {return label_.size;}
 503:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 504:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the font size in pixels.
 505:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] pix the new font size
 506:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see Fl_Fontsize labelsize()
 507:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 508:fltk-1.3.4-1/FL/Fl_Widget.H ****   void labelsize(Fl_Fontsize pix) {label_.size=pix;}
 509:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 510:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label.
 511:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the active state.
 512:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image
 513:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 514:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* image() {return label_.image;}
 515:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* image() const {return label_.image;}
 516:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 517:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 518:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the active state.
 519:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 520:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 521:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image* img) {label_.image=img;}
 1226              		.loc 4 521 0
 1227 006f 48C74038 		movq	$0, 56(%rax)
 1227      00000000 
 1228              	.LVL164:
 1229              	.L146:
 1230              	.LBE474:
 1231              	.LBE473:
 1232              	.LBB478:
 1233              		.loc 1 1461 0
 1234 0077 4D85ED   		testq	%r13, %r13
 1235 007a 7454     		je	.L144
 1236              		.loc 1 1462 0
 1237 007c 498BBC24 		movq	6208(%r12), %rdi
 1237      40180000 
 1238 0084 4C89EE   		movq	%r13, %rsi
 1239 0087 E8000000 		call	_ZN9Fl_Widget5labelEPKc
 1239      00
 1240              	.LVL165:
 1241              		.loc 1 1463 0
 1242 008c 498B8424 		movq	6208(%r12), %rax
 1242      40180000 
 1243              	.LVL166:
 1244              		.loc 1 1464 0
 1245 0094 41807D00 		cmpb	$64, 0(%r13)
 1245      40
 1246 0099 BA4B0000 		movl	$75, %edx
 1246      00
 1247              	.LBB479:
 1248              	.LBB480:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1249              		.loc 4 357 0
 1250 009e C7405440 		movl	$64, 84(%rax)
 1250      000000
 1251              	.LVL167:
 1252              	.LBE480:
 1253              	.LBE479:
 1254              		.loc 1 1464 0
 1255 00a5 B80C0000 		movl	$12, %eax
 1255      00
 1256              	.LVL168:
 1257 00aa 0F44C2   		cmove	%edx, %eax
 1258 00ad 498B9424 		movq	6208(%r12), %rdx
 1258      40180000 
 1259              	.LVL169:
 1260              	.LBB481:
 1261              	.LBB482:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1262              		.loc 4 508 0
 1263 00b5 89424C   		movl	%eax, 76(%rdx)
 1264              	.LVL170:
 1265              	.LBE482:
 1266              	.LBE481:
 1267              		.loc 1 1465 0
 1268 00b8 498B8424 		movq	6208(%r12), %rax
 1268      40180000 
 1269              	.LVL171:
 1270              	.LBB483:
 1271              	.LBB484:
 496:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1272              		.loc 4 496 0
 1273 00c0 C7404800 		movl	$0, 72(%rax)
 1273      000000
 1274              	.LVL172:
 1275 00c7 660F1F84 		.p2align 4,,10
 1275      00000000 
 1275      00
 1276              		.p2align 3
 1277              	.L144:
 1278              	.LBE484:
 1279              	.LBE483:
 1280              	.LBE478:
 1281              		.loc 1 1468 0
 1282 00d0 498BBC24 		movq	6208(%r12), %rdi
 1282      40180000 
 1283 00d8 E8000000 		call	_ZN9Fl_Widget6redrawEv
 1283      00
 1284              	.LVL173:
 1285              		.loc 1 1469 0
 1286 00dd 488B8424 		movq	152(%rsp), %rax
 1286      98000000 
 1287 00e5 64483304 		xorq	%fs:40, %rax
 1287      25280000 
 1287      00
 1288 00ee 0F850B05 		jne	.L246
 1288      0000
 1289 00f4 4881C4A0 		addq	$160, %rsp
 1289      000000
 1290              		.cfi_remember_state
 1291              		.cfi_def_cfa_offset 48
 1292 00fb 5B       		popq	%rbx
 1293              		.cfi_def_cfa_offset 40
 1294 00fc 5D       		popq	%rbp
 1295              		.cfi_def_cfa_offset 32
 1296 00fd 415C     		popq	%r12
 1297              		.cfi_def_cfa_offset 24
 1298              	.LVL174:
 1299 00ff 415D     		popq	%r13
 1300              		.cfi_def_cfa_offset 16
 1301 0101 415E     		popq	%r14
 1302              		.cfi_def_cfa_offset 8
 1303 0103 C3       		ret
 1304              	.LVL175:
 1305              		.p2align 4,,10
 1306 0104 0F1F4000 		.p2align 3
 1307              	.L245:
 1308              		.cfi_restore_state
 1309              	.LBB528:
 1310              	.LBB468:
 1311              	.LBB463:
 1312              		.loc 1 1326 0
 1313 0108 4889E6   		movq	%rsp, %rsi
 1314 010b 4889DF   		movq	%rbx, %rdi
 1315 010e E8000000 		call	fl_stat
 1315      00
 1316              	.LVL176:
 1317 0113 85C0     		testl	%eax, %eax
 1318 0115 0F84CD01 		je	.L247
 1318      0000
 1319              	.L124:
 1320              	.LVL177:
 1321              	.LBE463:
 1322              	.LBE468:
 1323              	.LBE528:
 1324              		.loc 1 1351 0
 1325 011b 498B8424 		movq	6208(%r12), %rax
 1325      40180000 
 1326 0123 488B7838 		movq	56(%rax), %rdi
 1327              	.LVL178:
 1328              		.loc 1 1353 0
 1329 0127 4885FF   		testq	%rdi, %rdi
 1330 012a 0F85C504 		jne	.L248
 1330      0000
 1331              	.LVL179:
 1332              	.LBB529:
 1333              	.LBB475:
 1334              		.loc 4 521 0
 1335 0130 48C74038 		movq	$0, 56(%rax)
 1335      00000000 
 1336              	.LVL180:
 1337              	.L161:
 1338              	.LBE475:
 1339              	.LBE529:
 1340              	.LBB530:
 1341              	.LBB485:
 1342              		.loc 1 1362 0
 1343 0138 4889DF   		movq	%rbx, %rdi
 1344 013b BE000000 		movl	$.LC13, %esi
 1344      00
 1345 0140 E8000000 		call	fl_fopen
 1345      00
 1346              	.LVL181:
 1347              		.loc 1 1365 0
 1348 0145 4885C0   		testq	%rax, %rax
 1349              		.loc 1 1362 0
 1350 0148 4889C3   		movq	%rax, %rbx
 1351              	.LVL182:
 1352              		.loc 1 1365 0
 1353 014b 0F84DE03 		je	.L126
 1353      0000
 1354              		.loc 1 1367 0
 1355 0151 4D8DAC24 		leaq	4112(%r12), %r13
 1355      10100000 
 1356              	.LVL183:
 1357              	.LBB486:
 1358              	.LBB487:
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
 128:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 129:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 130:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __USE_XOPEN2K8
 131:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
 132:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  ...) __attribute__ ((__format__ (__printf__, 3, 4)));
 133:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vdprintf_chk (int __fd, int __flag,
 134:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __fmt, _G_va_list __arg)
 135:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __attribute__ ((__format__ (__printf__, 3, 0)));
 136:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 137:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  ifdef __va_arg_pack
 138:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 139:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** dprintf (int __fd, const char *__restrict __fmt, ...)
 140:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 141:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __dprintf_chk (__fd, __USE_FORTIFY_LEVEL - 1, __fmt,
 142:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			__va_arg_pack ());
 143:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 144:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  elif !defined __cplusplus
 145:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define dprintf(fd, ...) \
 146:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __dprintf_chk (fd, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 147:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  endif
 148:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 149:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 150:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** vdprintf (int __fd, const char *__restrict __fmt, _G_va_list __ap)
 151:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 152:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vdprintf_chk (__fd, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 153:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 154:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
 155:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 156:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __USE_GNU
 157:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 158:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __asprintf_chk (char **__restrict __ptr, int __flag,
 159:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   const char *__restrict __fmt, ...)
 160:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 4))) __wur;
 161:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vasprintf_chk (char **__restrict __ptr, int __flag,
 162:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    const char *__restrict __fmt, _G_va_list __arg)
 163:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 0))) __wur;
 164:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __obstack_printf_chk (struct obstack *__restrict __obstack,
 165:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				 int __flag, const char *__restrict __format,
 166:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				 ...)
 167:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 4)));
 168:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __obstack_vprintf_chk (struct obstack *__restrict __obstack,
 169:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  int __flag,
 170:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  const char *__restrict __format,
 171:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				  _G_va_list __args)
 172:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __THROW __attribute__ ((__format__ (__printf__, 3, 0)));
 173:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 174:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  ifdef __va_arg_pack
 175:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 176:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...))
 177:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 178:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __asprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt,
 179:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 __va_arg_pack ());
 180:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 181:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 182:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 183:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (__asprintf (char **__restrict __ptr, const char *__restrict __fmt,
 184:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		   ...))
 185:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 186:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __asprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt,
 187:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 __va_arg_pack ());
 188:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 189:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 190:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 191:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (obstack_printf (struct obstack *__restrict __obstack,
 192:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       const char *__restrict __fmt, ...))
 193:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 194:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __obstack_printf_chk (__obstack, __USE_FORTIFY_LEVEL - 1, __fmt,
 195:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			       __va_arg_pack ());
 196:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 197:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  elif !defined __cplusplus
 198:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define asprintf(ptr, ...) \
 199:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __asprintf_chk (ptr, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 200:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define __asprintf(ptr, ...) \
 201:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __asprintf_chk (ptr, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 202:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #   define obstack_printf(obstack, ...) \
 203:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __obstack_printf_chk (obstack, __USE_FORTIFY_LEVEL - 1, __VA_ARGS__)
 204:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  endif
 205:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 206:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 207:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vasprintf (char **__restrict __ptr, const char *__restrict __fmt,
 208:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		  _G_va_list __ap))
 209:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 210:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __vasprintf_chk (__ptr, __USE_FORTIFY_LEVEL - 1, __fmt, __ap);
 211:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 212:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 213:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
 214:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (obstack_vprintf (struct obstack *__restrict __obstack,
 215:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			const char *__restrict __fmt, _G_va_list __ap))
 216:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 217:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __obstack_vprintf_chk (__obstack, __USE_FORTIFY_LEVEL - 1, __fmt,
 218:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				__ap);
 219:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 220:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 221:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
 222:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 223:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
 224:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 225:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if !defined __USE_ISOC11 \
 226:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     || (defined __cplusplus && __cplusplus <= 201103L && !defined __USE_GNU)
 227:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__gets_chk (char *__str, size_t) __wur;
 228:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__REDIRECT (__gets_warn, (char *__str), gets)
 229:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __wur __warnattr ("please use fgets or getline instead, gets can't "
 230:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       "specify buffer size");
 231:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 232:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function __wur char *
 233:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** gets (char *__str)
 234:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 235:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   if (__bos (__str) != (size_t) -1)
 236:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     return __gets_chk (__str, __bos (__str));
 237:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __gets_warn (__str);
 238:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 239:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
 240:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 241:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
 242:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  FILE *__restrict __stream) __wur;
 243:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__REDIRECT (__fgets_alias,
 244:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 (char *__restrict __s, int __n,
 245:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  FILE *__restrict __stream), fgets) __wur;
 246:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern char *__REDIRECT (__fgets_chk_warn,
 247:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			 (char *__restrict __s, size_t __size, int __n,
 248:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  FILE *__restrict __stream), __fgets_chk)
 249:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __wur __warnattr ("fgets called with bigger size than length "
 250:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       "of destination buffer");
 251:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 252:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function __wur char *
 253:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
 254:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 255:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   if (__bos (__s) != (size_t) -1)
 256:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     {
 257:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if (!__builtin_constant_p (__n) || __n <= 0)
 258:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fgets_chk (__s, __bos (__s), __n, __stream);
 259:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 260:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if ((size_t) __n > __bos (__s))
 261:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fgets_chk_warn (__s, __bos (__s), __n, __stream);
 262:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     }
 263:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __fgets_alias (__s, __n, __stream);
 264:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 265:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 266:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
 267:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __size, size_t __n,
 268:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   FILE *__restrict __stream) __wur;
 269:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern size_t __REDIRECT (__fread_alias,
 270:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  (void *__restrict __ptr, size_t __size,
 271:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __n, FILE *__restrict __stream),
 272:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  fread) __wur;
 273:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern size_t __REDIRECT (__fread_chk_warn,
 274:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  (void *__restrict __ptr, size_t __ptrlen,
 275:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __size, size_t __n,
 276:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   FILE *__restrict __stream),
 277:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			  __fread_chk)
 278:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****      __wur __warnattr ("fread called with bigger size * nmemb than length "
 279:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		       "of destination buffer");
 280:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 281:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function __wur size_t
 282:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** fread (void *__restrict __ptr, size_t __size, size_t __n,
 283:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****        FILE *__restrict __stream)
 284:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
 285:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   if (__bos0 (__ptr) != (size_t) -1)
 286:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     {
 287:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if (!__builtin_constant_p (__size)
 288:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	  || !__builtin_constant_p (__n)
 289:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	  || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 290:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fread_chk (__ptr, __bos0 (__ptr), __size, __n, __stream);
 291:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
 292:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****       if (__size * __n > __bos0 (__ptr))
 293:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 	return __fread_chk_warn (__ptr, __bos0 (__ptr), __size, __n, __stream);
 294:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****     }
 295:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __fread_alias (__ptr, __size, __n, __stream);
 1359              		.loc 2 295 0
 1360 0159 4889C1   		movq	%rax, %rcx
 1361 015c BAFF0700 		movl	$2047, %edx
 1361      00
 1362 0161 BE010000 		movl	$1, %esi
 1362      00
 1363 0166 4C89EF   		movq	%r13, %rdi
 1364 0169 E8000000 		call	fread
 1364      00
 1365              	.LVL184:
 1366              	.LBE487:
 1367              	.LBE486:
 1368              		.loc 1 1368 0
 1369 016e 4898     		cltq
 1370              		.loc 1 1369 0
 1371 0170 4889DF   		movq	%rbx, %rdi
 1372              		.loc 1 1368 0
 1373 0173 41C68404 		movb	$0, 4112(%r12,%rax)
 1373      10100000 
 1373      00
 1374              		.loc 1 1369 0
 1375 017c E8000000 		call	fclose
 1375      00
 1376              	.LVL185:
 1377              	.L127:
 1378              		.loc 1 1375 0
 1379 0181 498BBC24 		movq	6168(%r12), %rdi
 1379      18180000 
 1380 0189 31F6     		xorl	%esi, %esi
 1381 018b E8000000 		call	_ZN9Fl_Window6cursorE9Fl_Cursor
 1381      00
 1382              	.LVL186:
 1383              		.loc 1 1376 0
 1384 0190 E8000000 		call	_ZN2Fl5checkEv
 1384      00
 1385              	.LVL187:
 1386              	.LBB488:
 1387              		.loc 1 1379 0
 1388 0195 410FB6AC 		movzbl	4112(%r12), %ebp
 1388      24101000 
 1388      00
 1389 019e 4084ED   		testb	%bpl, %bpl
 1390 01a1 0F84EF02 		je	.L166
 1390      0000
 1391 01a7 400FB6DD 		movzbl	%bpl, %ebx
 1392 01ab 4D89EE   		movq	%r13, %r14
 1393 01ae EB27     		jmp	.L140
 1394              	.LVL188:
 1395              		.p2align 4,,10
 1396              		.p2align 3
 1397              	.L249:
 1398              	.LBB489:
 1399              	.LBB490:
 1400              	.LBB491:
 1401              		.file 5 "/usr/include/ctype.h"
   1:/usr/include/ctype.h **** /* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   2:/usr/include/ctype.h ****    This file is part of the GNU C Library.
   3:/usr/include/ctype.h **** 
   4:/usr/include/ctype.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/ctype.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/ctype.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/ctype.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/ctype.h **** 
   9:/usr/include/ctype.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/ctype.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/ctype.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/ctype.h ****    Lesser General Public License for more details.
  13:/usr/include/ctype.h **** 
  14:/usr/include/ctype.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/ctype.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/ctype.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/ctype.h **** 
  18:/usr/include/ctype.h **** /*
  19:/usr/include/ctype.h ****  *	ISO C99 Standard 7.4: Character handling	<ctype.h>
  20:/usr/include/ctype.h ****  */
  21:/usr/include/ctype.h **** 
  22:/usr/include/ctype.h **** #ifndef	_CTYPE_H
  23:/usr/include/ctype.h **** #define	_CTYPE_H	1
  24:/usr/include/ctype.h **** 
  25:/usr/include/ctype.h **** #include <features.h>
  26:/usr/include/ctype.h **** #include <bits/types.h>
  27:/usr/include/ctype.h **** 
  28:/usr/include/ctype.h **** __BEGIN_DECLS
  29:/usr/include/ctype.h **** 
  30:/usr/include/ctype.h **** #ifndef _ISbit
  31:/usr/include/ctype.h **** /* These are all the characteristics of characters.
  32:/usr/include/ctype.h ****    If there get to be more than 16 distinct characteristics,
  33:/usr/include/ctype.h ****    many things must be changed that use `unsigned short int's.
  34:/usr/include/ctype.h **** 
  35:/usr/include/ctype.h ****    The characteristics are stored always in network byte order (big
  36:/usr/include/ctype.h ****    endian).  We define the bit value interpretations here dependent on the
  37:/usr/include/ctype.h ****    machine's byte order.  */
  38:/usr/include/ctype.h **** 
  39:/usr/include/ctype.h **** # include <endian.h>
  40:/usr/include/ctype.h **** # if __BYTE_ORDER == __BIG_ENDIAN
  41:/usr/include/ctype.h **** #  define _ISbit(bit)	(1 << (bit))
  42:/usr/include/ctype.h **** # else /* __BYTE_ORDER == __LITTLE_ENDIAN */
  43:/usr/include/ctype.h **** #  define _ISbit(bit)	((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
  44:/usr/include/ctype.h **** # endif
  45:/usr/include/ctype.h **** 
  46:/usr/include/ctype.h **** enum
  47:/usr/include/ctype.h **** {
  48:/usr/include/ctype.h ****   _ISupper = _ISbit (0),	/* UPPERCASE.  */
  49:/usr/include/ctype.h ****   _ISlower = _ISbit (1),	/* lowercase.  */
  50:/usr/include/ctype.h ****   _ISalpha = _ISbit (2),	/* Alphabetic.  */
  51:/usr/include/ctype.h ****   _ISdigit = _ISbit (3),	/* Numeric.  */
  52:/usr/include/ctype.h ****   _ISxdigit = _ISbit (4),	/* Hexadecimal numeric.  */
  53:/usr/include/ctype.h ****   _ISspace = _ISbit (5),	/* Whitespace.  */
  54:/usr/include/ctype.h ****   _ISprint = _ISbit (6),	/* Printing.  */
  55:/usr/include/ctype.h ****   _ISgraph = _ISbit (7),	/* Graphical.  */
  56:/usr/include/ctype.h ****   _ISblank = _ISbit (8),	/* Blank (usually SPC and TAB).  */
  57:/usr/include/ctype.h ****   _IScntrl = _ISbit (9),	/* Control character.  */
  58:/usr/include/ctype.h ****   _ISpunct = _ISbit (10),	/* Punctuation.  */
  59:/usr/include/ctype.h ****   _ISalnum = _ISbit (11)	/* Alphanumeric.  */
  60:/usr/include/ctype.h **** };
  61:/usr/include/ctype.h **** #endif /* ! _ISbit  */
  62:/usr/include/ctype.h **** 
  63:/usr/include/ctype.h **** /* These are defined in ctype-info.c.
  64:/usr/include/ctype.h ****    The declarations here must match those in localeinfo.h.
  65:/usr/include/ctype.h **** 
  66:/usr/include/ctype.h ****    In the thread-specific locale model (see `uselocale' in <locale.h>)
  67:/usr/include/ctype.h ****    we cannot use global variables for these as was done in the past.
  68:/usr/include/ctype.h ****    Instead, the following accessor functions return the address of
  69:/usr/include/ctype.h ****    each variable, which is local to the current thread if multithreaded.
  70:/usr/include/ctype.h **** 
  71:/usr/include/ctype.h ****    These point into arrays of 384, so they can be indexed by any `unsigned
  72:/usr/include/ctype.h ****    char' value [0,255]; by EOF (-1); or by any `signed char' value
  73:/usr/include/ctype.h ****    [-128,-1).  ISO C requires that the ctype functions work for `unsigned
  74:/usr/include/ctype.h ****    char' values and for EOF; we also support negative `signed char' values
  75:/usr/include/ctype.h ****    for broken old programs.  The case conversion arrays are of `int's
  76:/usr/include/ctype.h ****    rather than `unsigned char's because tolower (EOF) must be EOF, which
  77:/usr/include/ctype.h ****    doesn't fit into an `unsigned char'.  But today more important is that
  78:/usr/include/ctype.h ****    the arrays are also used for multi-byte character sets.  */
  79:/usr/include/ctype.h **** extern const unsigned short int **__ctype_b_loc (void)
  80:/usr/include/ctype.h ****      __THROW __attribute__ ((__const__));
  81:/usr/include/ctype.h **** extern const __int32_t **__ctype_tolower_loc (void)
  82:/usr/include/ctype.h ****      __THROW __attribute__ ((__const__));
  83:/usr/include/ctype.h **** extern const __int32_t **__ctype_toupper_loc (void)
  84:/usr/include/ctype.h ****      __THROW __attribute__ ((__const__));
  85:/usr/include/ctype.h **** 
  86:/usr/include/ctype.h **** 
  87:/usr/include/ctype.h **** #ifndef __cplusplus
  88:/usr/include/ctype.h **** # define __isctype(c, type) \
  89:/usr/include/ctype.h ****   ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
  90:/usr/include/ctype.h **** #elif defined __USE_EXTERN_INLINES
  91:/usr/include/ctype.h **** # define __isctype_f(type) \
  92:/usr/include/ctype.h ****   __extern_inline int							      \
  93:/usr/include/ctype.h ****   is##type (int __c) __THROW						      \
  94:/usr/include/ctype.h ****   {									      \
  95:/usr/include/ctype.h ****     return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _IS##type; \
  96:/usr/include/ctype.h ****   }
  97:/usr/include/ctype.h **** #endif
  98:/usr/include/ctype.h **** 
  99:/usr/include/ctype.h **** #define	__isascii(c)	(((c) & ~0x7f) == 0)	/* If C is a 7 bit value.  */
 100:/usr/include/ctype.h **** #define	__toascii(c)	((c) & 0x7f)		/* Mask off high bits.  */
 101:/usr/include/ctype.h **** 
 102:/usr/include/ctype.h **** #define	__exctype(name)	extern int name (int) __THROW
 103:/usr/include/ctype.h **** 
 104:/usr/include/ctype.h **** __BEGIN_NAMESPACE_STD
 105:/usr/include/ctype.h **** 
 106:/usr/include/ctype.h **** /* The following names are all functions:
 107:/usr/include/ctype.h ****      int isCHARACTERISTIC(int c);
 108:/usr/include/ctype.h ****    which return nonzero iff C has CHARACTERISTIC.
 109:/usr/include/ctype.h ****    For the meaning of the characteristic names, see the `enum' above.  */
 110:/usr/include/ctype.h **** __exctype (isalnum);
 111:/usr/include/ctype.h **** __exctype (isalpha);
 112:/usr/include/ctype.h **** __exctype (iscntrl);
 113:/usr/include/ctype.h **** __exctype (isdigit);
 114:/usr/include/ctype.h **** __exctype (islower);
 115:/usr/include/ctype.h **** __exctype (isgraph);
 116:/usr/include/ctype.h **** __exctype (isprint);
 117:/usr/include/ctype.h **** __exctype (ispunct);
 118:/usr/include/ctype.h **** __exctype (isspace);
 119:/usr/include/ctype.h **** __exctype (isupper);
 120:/usr/include/ctype.h **** __exctype (isxdigit);
 121:/usr/include/ctype.h **** 
 122:/usr/include/ctype.h **** 
 123:/usr/include/ctype.h **** /* Return the lowercase version of C.  */
 124:/usr/include/ctype.h **** extern int tolower (int __c) __THROW;
 125:/usr/include/ctype.h **** 
 126:/usr/include/ctype.h **** /* Return the uppercase version of C.  */
 127:/usr/include/ctype.h **** extern int toupper (int __c) __THROW;
 128:/usr/include/ctype.h **** 
 129:/usr/include/ctype.h **** __END_NAMESPACE_STD
 130:/usr/include/ctype.h **** 
 131:/usr/include/ctype.h **** 
 132:/usr/include/ctype.h **** /* ISO C99 introduced one new function.  */
 133:/usr/include/ctype.h **** #ifdef	__USE_ISOC99
 134:/usr/include/ctype.h **** __BEGIN_NAMESPACE_C99
 135:/usr/include/ctype.h **** 
 136:/usr/include/ctype.h **** __exctype (isblank);
 137:/usr/include/ctype.h **** 
 138:/usr/include/ctype.h **** __END_NAMESPACE_C99
 139:/usr/include/ctype.h **** #endif
 140:/usr/include/ctype.h **** 
 141:/usr/include/ctype.h **** #ifdef __USE_GNU
 142:/usr/include/ctype.h **** /* Test C for a set of character classes according to MASK.  */
 143:/usr/include/ctype.h **** extern int isctype (int __c, int __mask) __THROW;
 144:/usr/include/ctype.h **** #endif
 145:/usr/include/ctype.h **** 
 146:/usr/include/ctype.h **** #if defined __USE_MISC || defined __USE_XOPEN
 147:/usr/include/ctype.h **** 
 148:/usr/include/ctype.h **** /* Return nonzero iff C is in the ASCII set
 149:/usr/include/ctype.h ****    (i.e., is no more than 7 bits wide).  */
 150:/usr/include/ctype.h **** extern int isascii (int __c) __THROW;
 151:/usr/include/ctype.h **** 
 152:/usr/include/ctype.h **** /* Return the part of C that is in the ASCII set
 153:/usr/include/ctype.h ****    (i.e., the low-order 7 bits of C).  */
 154:/usr/include/ctype.h **** extern int toascii (int __c) __THROW;
 155:/usr/include/ctype.h **** 
 156:/usr/include/ctype.h **** /* These are the same as `toupper' and `tolower' except that they do not
 157:/usr/include/ctype.h ****    check the argument for being in the range of a `char'.  */
 158:/usr/include/ctype.h **** __exctype (_toupper);
 159:/usr/include/ctype.h **** __exctype (_tolower);
 160:/usr/include/ctype.h **** #endif /* Use X/Open or use misc.  */
 161:/usr/include/ctype.h **** 
 162:/usr/include/ctype.h **** /* This code is needed for the optimized mapping functions.  */
 163:/usr/include/ctype.h **** #define __tobody(c, f, a, args) \
 164:/usr/include/ctype.h ****   (__extension__							      \
 165:/usr/include/ctype.h ****    ({ int __res;							      \
 166:/usr/include/ctype.h ****       if (sizeof (c) > 1)						      \
 167:/usr/include/ctype.h **** 	{								      \
 168:/usr/include/ctype.h **** 	  if (__builtin_constant_p (c))					      \
 169:/usr/include/ctype.h **** 	    {								      \
 170:/usr/include/ctype.h **** 	      int __c = (c);						      \
 171:/usr/include/ctype.h **** 	      __res = __c < -128 || __c > 255 ? __c : (a)[__c];		      \
 172:/usr/include/ctype.h **** 	    }								      \
 173:/usr/include/ctype.h **** 	  else								      \
 174:/usr/include/ctype.h **** 	    __res = f args;						      \
 175:/usr/include/ctype.h **** 	}								      \
 176:/usr/include/ctype.h ****       else								      \
 177:/usr/include/ctype.h **** 	__res = (a)[(int) (c)];						      \
 178:/usr/include/ctype.h ****       __res; }))
 179:/usr/include/ctype.h **** 
 180:/usr/include/ctype.h **** #if !defined __NO_CTYPE
 181:/usr/include/ctype.h **** # ifdef __isctype_f
 182:/usr/include/ctype.h **** __isctype_f (alnum)
 183:/usr/include/ctype.h **** __isctype_f (alpha)
 184:/usr/include/ctype.h **** __isctype_f (cntrl)
 185:/usr/include/ctype.h **** __isctype_f (digit)
 186:/usr/include/ctype.h **** __isctype_f (lower)
 187:/usr/include/ctype.h **** __isctype_f (graph)
 188:/usr/include/ctype.h **** __isctype_f (print)
 1402              		.loc 5 188 0
 1403 01b0 E8000000 		call	__ctype_b_loc
 1403      00
 1404              	.LVL189:
 1405 01b5 488B00   		movq	(%rax), %rax
 1406              	.LBE491:
 1407              	.LBE490:
 1408              		.loc 1 1382 0
 1409 01b8 66F70458 		testw	$24576, (%rax,%rbx,2)
 1409      0060
 1410 01be 0F841C03 		je	.L129
 1410      0000
 1411 01c4 4C89F0   		movq	%r14, %rax
 1412              	.LVL190:
 1413              	.L130:
 1414              	.LBE489:
 1415              		.loc 1 1379 0
 1416 01c7 0FB65801 		movzbl	1(%rax), %ebx
 1417 01cb 4C8D7001 		leaq	1(%rax), %r14
 1418              	.LVL191:
 1419 01cf 84DB     		testb	%bl, %bl
 1420 01d1 0F848900 		je	.L133
 1420      0000
 1421              	.LVL192:
 1422              	.L140:
 1423              	.LBB492:
 1424              		.loc 1 1381 0
 1425 01d7 84DB     		testb	%bl, %bl
 1426 01d9 79D5     		jns	.L249
 1427              		.loc 1 1383 0
 1428 01db 89D8     		movl	%ebx, %eax
 1429 01dd 83E0E0   		andl	$-32, %eax
 1430 01e0 3CC0     		cmpb	$-64, %al
 1431 01e2 0F84C001 		je	.L250
 1431      0000
 1432              		.loc 1 1386 0
 1433 01e8 89D8     		movl	%ebx, %eax
 1434 01ea 83E0F0   		andl	$-16, %eax
 1435 01ed 3CE0     		cmpb	$-32, %al
 1436 01ef 0F84DB01 		je	.L251
 1436      0000
 1437              		.loc 1 1391 0
 1438 01f5 83E3F8   		andl	$-8, %ebx
 1439              	.LVL193:
 1440 01f8 4C89F0   		movq	%r14, %rax
 1441 01fb 80FBF0   		cmpb	$-16, %bl
 1442 01fe 75C7     		jne	.L130
 1443              		.loc 1 1392 0
 1444 0200 410FB65E 		movzbl	1(%r14), %ebx
 1444      01
 1445 0205 84DB     		testb	%bl, %bl
 1446 0207 7410     		je	.L137
 1447 0209 89D8     		movl	%ebx, %eax
 1448 020b 25C00000 		andl	$192, %eax
 1448      00
 1449 0210 83C080   		addl	$-128, %eax
 1450 0213 0F85C702 		jne	.L129
 1450      0000
 1451              	.L137:
 1452              	.LVL194:
 1453              		.loc 1 1394 0
 1454 0219 410FB656 		movzbl	2(%r14), %edx
 1454      02
 1455 021e 84D2     		testb	%dl, %dl
 1456 0220 7410     		je	.L138
 1457 0222 89D0     		movl	%edx, %eax
 1458 0224 25C00000 		andl	$192, %eax
 1458      00
 1459 0229 83C080   		addl	$-128, %eax
 1460 022c 0F858603 		jne	.L238
 1460      0000
 1461              	.L138:
 1462              	.LVL195:
 1463              		.loc 1 1396 0
 1464 0232 410FB646 		movzbl	3(%r14), %eax
 1464      03
 1465 0237 84C0     		testb	%al, %al
 1466 0239 740E     		je	.L139
 1467 023b 25C00000 		andl	$192, %eax
 1467      00
 1468 0240 83C080   		addl	$-128, %eax
 1469 0243 0F857803 		jne	.L252
 1469      0000
 1470              	.L139:
 1471              		.loc 1 1397 0
 1472 0249 498D4603 		leaq	3(%r14), %rax
 1473              	.LVL196:
 1474              	.LBE492:
 1475              		.loc 1 1379 0
 1476 024d 0FB65801 		movzbl	1(%rax), %ebx
 1477 0251 4C8D7001 		leaq	1(%rax), %r14
 1478              	.LVL197:
 1479 0255 84DB     		testb	%bl, %bl
 1480 0257 0F857AFF 		jne	.L140
 1480      FFFF
 1481              	.LVL198:
 1482 025d 0F1F00   		.p2align 4,,10
 1483              		.p2align 3
 1484              	.L133:
 1485              	.LBE488:
 1486              		.loc 1 1404 0
 1487 0260 4D39EE   		cmpq	%r13, %r14
 1488 0263 0F84F801 		je	.L157
 1488      0000
 1489 0269 84DB     		testb	%bl, %bl
 1490 026b 0F85F001 		jne	.L157
 1490      0000
 1491              	.LVL199:
 1492              	.L158:
 1493              	.LBB495:
 1494              	.LBB496:
 1495              		.loc 1 1418 0
 1496 0271 498BBC24 		movq	6208(%r12), %rdi
 1496      40180000 
 1497              	.LVL200:
 1498 0279 BA676666 		movl	$1717986919, %edx
 1498      66
 1499              		.loc 1 1419 0
 1500 027e BB060000 		movl	$6, %ebx
 1500      00
 1501              		.loc 1 1418 0
 1502 0283 8B4F2C   		movl	44(%rdi), %ecx
 1503 0286 89C8     		movl	%ecx, %eax
 1504 0288 C1F91F   		sarl	$31, %ecx
 1505 028b F7EA     		imull	%edx
 1506 028d C1FA03   		sarl	$3, %edx
 1507 0290 29CA     		subl	%ecx, %edx
 1508              	.LVL201:
 1509              		.loc 1 1419 0
 1510 0292 83FA05   		cmpl	$5, %edx
 1511 0295 7E0B     		jle	.L145
 1512              		.loc 1 1420 0
 1513 0297 8B1D0000 		movl	FL_NORMAL_SIZE(%rip), %ebx
 1513      0000
 1514 029d 39DA     		cmpl	%ebx, %edx
 1515 029f 0F4EDA   		cmovle	%edx, %ebx
 1516              	.L145:
 1517              	.LVL202:
 1518              		.loc 1 1422 0
 1519 02a2 4C89EE   		movq	%r13, %rsi
 1520 02a5 E8000000 		call	_ZN9Fl_Widget5labelEPKc
 1520      00
 1521              	.LVL203:
 1522              		.loc 1 1423 0
 1523 02aa 498B8424 		movq	6208(%r12), %rax
 1523      40180000 
 1524              	.LVL204:
 1525              	.LBB497:
 1526              	.LBB498:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1527              		.loc 4 357 0
 1528 02b2 C7405455 		movl	$85, 84(%rax)
 1528      000000
 1529              	.LVL205:
 1530              	.LBE498:
 1531              	.LBE497:
 1532              		.loc 1 1425 0
 1533 02b9 498B8424 		movq	6208(%r12), %rax
 1533      40180000 
 1534              	.LVL206:
 1535              	.LBB499:
 1536              	.LBB500:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1537              		.loc 4 508 0
 1538 02c1 89584C   		movl	%ebx, 76(%rax)
 1539              	.LVL207:
 1540              	.LBE500:
 1541              	.LBE499:
 1542              		.loc 1 1426 0
 1543 02c4 498B8424 		movq	6208(%r12), %rax
 1543      40180000 
 1544              	.LVL208:
 1545              	.LBB501:
 1546              	.LBB502:
 496:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1547              		.loc 4 496 0
 1548 02cc C7404804 		movl	$4, 72(%rax)
 1548      000000
 1549 02d3 E9F8FDFF 		jmp	.L144
 1549      FF
 1550              	.LVL209:
 1551 02d8 0F1F8400 		.p2align 4,,10
 1551      00000000 
 1552              		.p2align 3
 1553              	.L169:
 1554              	.LBE502:
 1555              	.LBE501:
 1556              	.LBE496:
 1557              	.LBE495:
 1558              	.LBE485:
 1559              	.LBE530:
 1560              		.loc 1 1307 0
 1561 02e0 4531ED   		xorl	%r13d, %r13d
 1562 02e3 E969FDFF 		jmp	.L123
 1562      FF
 1563              	.LVL210:
 1564              	.L247:
 1565              	.LBB531:
 1566              	.LBB469:
 1567              	.LBB464:
 1568              		.loc 1 1327 0
 1569 02e8 8B442418 		movl	24(%rsp), %eax
 1570              	.LBE464:
 1571              	.LBE469:
 1572              	.LBE531:
 1573              		.loc 1 1308 0
 1574 02ec 31ED     		xorl	%ebp, %ebp
 1575              	.LBB532:
 1576              	.LBB470:
 1577              	.LBB465:
 1578              		.loc 1 1329 0
 1579 02ee 41BD0000 		movl	$.LC12, %r13d
 1579      0000
 1580              		.loc 1 1327 0
 1581 02f4 2500F000 		andl	$61440, %eax
 1581      00
 1582 02f9 3D008000 		cmpl	$32768, %eax
 1582      00
 1583 02fe 0F845702 		je	.L253
 1583      0000
 1584              	.L125:
 1585              	.LVL211:
 1586              	.LBE465:
 1587              	.LBE470:
 1588              	.LBE532:
 1589              		.loc 1 1351 0
 1590 0304 498B8424 		movq	6208(%r12), %rax
 1590      40180000 
 1591 030c 488B7838 		movq	56(%rax), %rdi
 1592              	.LVL212:
 1593              		.loc 1 1353 0
 1594 0310 4885FF   		testq	%rdi, %rdi
 1595 0313 0F85B302 		jne	.L254
 1595      0000
 1596              	.LVL213:
 1597              	.LBB533:
 1598              	.LBB476:
 1599              		.loc 4 521 0
 1600 0319 48C74038 		movq	$0, 56(%rax)
 1600      00000000 
 1601              	.LVL214:
 1602              	.L162:
 1603              	.LBE476:
 1604              	.LBE533:
 1605              	.LBB534:
 1606              		.loc 1 1428 0
 1607 0321 4885ED   		testq	%rbp, %rbp
 1608 0324 0F844DFD 		je	.L146
 1608      FFFF
 1609 032a 8B4D08   		movl	8(%rbp), %ecx
 1610              	.LVL215:
 1611 032d 85C9     		testl	%ecx, %ecx
 1612 032f 0F8EDB00 		jle	.L147
 1612      0000
 1613 0335 448B450C 		movl	12(%rbp), %r8d
 1614              	.LVL216:
 1615 0339 4585C0   		testl	%r8d, %r8d
 1616 033c 0F8ECE00 		jle	.L147
 1616      0000
 1617              	.LVL217:
 1618              		.loc 1 1429 0
 1619 0342 8B5510   		movl	16(%rbp), %edx
 1620 0345 85D2     		testl	%edx, %edx
 1621 0347 0F88C300 		js	.L147
 1621      0000
 1622              	.LVL218:
 1623              		.loc 1 1430 0
 1624 034d 8B4518   		movl	24(%rbp), %eax
 1625              	.LVL219:
 1626 0350 85C0     		testl	%eax, %eax
 1627 0352 0F8EB800 		jle	.L147
 1627      0000
 1628              		.loc 1 1439 0
 1629 0358 498B8424 		movq	6208(%r12), %rax
 1629      40180000 
 1630              	.LVL220:
 1631 0360 8B7028   		movl	40(%rax), %esi
 1632              		.loc 1 1440 0
 1633 0363 8B502C   		movl	44(%rax), %edx
 1634              		.loc 1 1439 0
 1635 0366 83EE14   		subl	$20, %esi
 1636              	.LVL221:
 1637              		.loc 1 1440 0
 1638 0369 8D7AEC   		leal	-20(%rdx), %edi
 1639              	.LVL222:
 1640              		.loc 1 1442 0
 1641 036c 39F1     		cmpl	%esi, %ecx
 1642 036e 0F8F7C01 		jg	.L149
 1642      0000
 1643              	.LVL223:
 1644 0374 4139F8   		cmpl	%edi, %r8d
 1645 0377 0F8F7301 		jg	.L149
 1645      0000
 1646              	.LVL224:
 1647              	.LBB512:
 1648              	.LBB513:
 1649              		.loc 4 521 0
 1650 037d 48896838 		movq	%rbp, 56(%rax)
 1651              	.LVL225:
 1652              	.L156:
 1653              	.LBE513:
 1654              	.LBE512:
 1655              		.loc 1 1459 0
 1656 0381 498B8424 		movq	6208(%r12), %rax
 1656      40180000 
 1657              	.LVL226:
 1658              		.loc 1 1460 0
 1659 0389 31F6     		xorl	%esi, %esi
 1660              	.LBB514:
 1661              	.LBB515:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1662              		.loc 4 357 0
 1663 038b C7405440 		movl	$64, 84(%rax)
 1663      000000
 1664              	.LVL227:
 1665              	.LBE515:
 1666              	.LBE514:
 1667              		.loc 1 1460 0
 1668 0392 498BBC24 		movq	6208(%r12), %rdi
 1668      40180000 
 1669 039a E8000000 		call	_ZN9Fl_Widget5labelEPKc
 1669      00
 1670              	.LVL228:
 1671 039f E92CFDFF 		jmp	.L144
 1671      FF
 1672              	.LVL229:
 1673              		.p2align 4,,10
 1674 03a4 0F1F4000 		.p2align 3
 1675              	.L250:
 1676              	.LBB516:
 1677              	.LBB509:
 1678              	.LBB493:
 1679              		.loc 1 1384 0
 1680 03a8 410FB646 		movzbl	1(%r14), %eax
 1680      01
 1681 03ad 84C0     		testb	%al, %al
 1682 03af 740E     		je	.L132
 1683 03b1 25C00000 		andl	$192, %eax
 1683      00
 1684 03b6 83C080   		addl	$-128, %eax
 1685 03b9 0F852101 		jne	.L129
 1685      0000
 1686              	.L132:
 1687              		.loc 1 1385 0
 1688 03bf 498D4601 		leaq	1(%r14), %rax
 1689              	.LVL230:
 1690 03c3 E9FFFDFF 		jmp	.L130
 1690      FF
 1691              	.LVL231:
 1692 03c8 0F1F8400 		.p2align 4,,10
 1692      00000000 
 1693              		.p2align 3
 1694              	.L251:
 1695              		.loc 1 1387 0
 1696 03d0 410FB65E 		movzbl	1(%r14), %ebx
 1696      01
 1697              	.LVL232:
 1698 03d5 84DB     		testb	%bl, %bl
 1699 03d7 7410     		je	.L135
 1700 03d9 89D8     		movl	%ebx, %eax
 1701 03db 25C00000 		andl	$192, %eax
 1701      00
 1702 03e0 83C080   		addl	$-128, %eax
 1703 03e3 0F85F700 		jne	.L129
 1703      0000
 1704              	.L135:
 1705              	.LVL233:
 1706              		.loc 1 1389 0
 1707 03e9 410FB646 		movzbl	2(%r14), %eax
 1707      02
 1708 03ee 84C0     		testb	%al, %al
 1709 03f0 740E     		je	.L136
 1710 03f2 25C00000 		andl	$192, %eax
 1710      00
 1711 03f7 83C080   		addl	$-128, %eax
 1712 03fa 0F85B801 		jne	.L238
 1712      0000
 1713              	.L136:
 1714              		.loc 1 1390 0
 1715 0400 498D4602 		leaq	2(%r14), %rax
 1716              	.LVL234:
 1717 0404 E9BEFDFF 		jmp	.L130
 1717      FF
 1718              	.LVL235:
 1719 0409 0F1F8000 		.p2align 4,,10
 1719      000000
 1720              		.p2align 3
 1721              	.L147:
 1722              	.LBE493:
 1723              	.LBE509:
 1724              	.LBE516:
 1725              		.loc 1 1433 0
 1726 0410 498BBC24 		movq	6208(%r12), %rdi
 1726      40180000 
 1727 0418 BE000000 		movl	$.LC15, %esi
 1727      00
 1728 041d E8000000 		call	_ZN9Fl_Widget5labelEPKc
 1728      00
 1729              	.LVL236:
 1730              		.loc 1 1434 0
 1731 0422 498B8424 		movq	6208(%r12), %rax
 1731      40180000 
 1732              	.LVL237:
 1733              	.LBB517:
 1734              	.LBB518:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1735              		.loc 4 357 0
 1736 042a C7405440 		movl	$64, 84(%rax)
 1736      000000
 1737              	.LVL238:
 1738              	.LBE518:
 1739              	.LBE517:
 1740              		.loc 1 1435 0
 1741 0431 498B8424 		movq	6208(%r12), %rax
 1741      40180000 
 1742              	.LVL239:
 1743              	.LBB519:
 1744              	.LBB520:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1745              		.loc 4 508 0
 1746 0439 C7404C46 		movl	$70, 76(%rax)
 1746      000000
 1747              	.LVL240:
 1748              	.LBE520:
 1749              	.LBE519:
 1750              		.loc 1 1436 0
 1751 0440 498B8424 		movq	6208(%r12), %rax
 1751      40180000 
 1752              	.LVL241:
 1753              	.LBB521:
 1754              	.LBB522:
 496:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1755              		.loc 4 496 0
 1756 0448 C7404800 		movl	$0, 72(%rax)
 1756      000000
 1757              	.LVL242:
 1758              	.LBE522:
 1759              	.LBE521:
 1760              		.loc 1 1437 0
 1761 044f 498BBC24 		movq	6208(%r12), %rdi
 1761      40180000 
 1762 0457 E8000000 		call	_ZN9Fl_Widget6redrawEv
 1762      00
 1763              	.LVL243:
 1764 045c E96FFCFF 		jmp	.L144
 1764      FF
 1765              	.LVL244:
 1766              	.L157:
 1767 0461 E8000000 		call	__ctype_b_loc
 1767      00
 1768              	.LVL245:
 1769 0466 488B10   		movq	(%rax), %rdx
 1770              	.LBB523:
 1771              		.loc 1 1404 0
 1772 0469 4C89E8   		movq	%r13, %rax
 1773              	.LVL246:
 1774 046c 0F1F4000 		.p2align 4,,10
 1775              		.p2align 3
 1776              	.L143:
 1777              		.loc 1 1406 0
 1778 0470 66F7046A 		testw	$24576, (%rdx,%rbp,2)
 1778      0060
 1779 0476 0F84CC00 		je	.L255
 1779      0000
 1780              		.loc 1 1405 0
 1781 047c 4883C001 		addq	$1, %rax
 1782              	.LVL247:
 1783              		.loc 1 1406 0
 1784 0480 0FB628   		movzbl	(%rax), %ebp
 1785 0483 4084ED   		testb	%bpl, %bpl
 1786 0486 75E8     		jne	.L143
 1787 0488 4C39E8   		cmpq	%r13, %rax
 1788 048b 0F94C0   		sete	%al
 1789              	.LVL248:
 1790              	.L142:
 1791              	.LBB510:
 1792              		.loc 1 1410 0
 1793 048e 84C0     		testb	%al, %al
 1794 0490 0F84DBFD 		je	.L158
 1794      FFFF
 1795              	.L166:
 1796              		.loc 1 1412 0
 1797 0496 498BBC24 		movq	6208(%r12), %rdi
 1797      40180000 
 1798 049e BE000000 		movl	$.LC14, %esi
 1798      00
 1799 04a3 E8000000 		call	_ZN9Fl_Widget5labelEPKc
 1799      00
 1800              	.LVL249:
 1801              		.loc 1 1413 0
 1802 04a8 498B8424 		movq	6208(%r12), %rax
 1802      40180000 
 1803              	.LVL250:
 1804              	.LBB503:
 1805              	.LBB504:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1806              		.loc 4 357 0
 1807 04b0 C7405440 		movl	$64, 84(%rax)
 1807      000000
 1808              	.LVL251:
 1809              	.LBE504:
 1810              	.LBE503:
 1811              		.loc 1 1414 0
 1812 04b7 498B8424 		movq	6208(%r12), %rax
 1812      40180000 
 1813              	.LVL252:
 1814              	.LBB505:
 1815              	.LBB506:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1816              		.loc 4 508 0
 1817 04bf C7404C4B 		movl	$75, 76(%rax)
 1817      000000
 1818              	.LVL253:
 1819              	.LBE506:
 1820              	.LBE505:
 1821              		.loc 1 1415 0
 1822 04c6 498B8424 		movq	6208(%r12), %rax
 1822      40180000 
 1823              	.LVL254:
 1824              	.LBB507:
 1825              	.LBB508:
 496:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1826              		.loc 4 496 0
 1827 04ce C7404800 		movl	$0, 72(%rax)
 1827      000000
 1828 04d5 E9F6FBFF 		jmp	.L144
 1828      FF
 1829              	.LVL255:
 1830 04da 660F1F44 		.p2align 4,,10
 1830      0000
 1831              		.p2align 3
 1832              	.L129:
 1833 04e0 410FB61E 		movzbl	(%r14), %ebx
 1834 04e4 E977FDFF 		jmp	.L133
 1834      FF
 1835              	.LVL256:
 1836 04e9 0F1F8000 		.p2align 4,,10
 1836      000000
 1837              		.p2align 3
 1838              	.L149:
 1839              	.LBE508:
 1840              	.LBE507:
 1841              	.LBE510:
 1842              	.LBE523:
 1843              		.loc 1 1444 0
 1844 04f0 4489C0   		movl	%r8d, %eax
 1845              	.LVL257:
 1846 04f3 0FAFC6   		imull	%esi, %eax
 1847 04f6 99       		cltd
 1848 04f7 F7F9     		idivl	%ecx
 1849              	.LVL258:
 1850              		.loc 1 1446 0
 1851 04f9 39C7     		cmpl	%eax, %edi
 1852 04fb 7D0D     		jge	.L155
 1853              	.LVL259:
 1854              		.loc 1 1448 0
 1855 04fd 89C8     		movl	%ecx, %eax
 1856 04ff 0FAFC7   		imull	%edi, %eax
 1857 0502 99       		cltd
 1858 0503 41F7F8   		idivl	%r8d
 1859 0506 89C6     		movl	%eax, %esi
 1860              	.LVL260:
 1861 0508 89F8     		movl	%edi, %eax
 1862              	.LVL261:
 1863              	.L155:
 1864              		.loc 1 1451 0
 1865 050a 488B4D00 		movq	0(%rbp), %rcx
 1866 050e 4889EF   		movq	%rbp, %rdi
 1867              	.LVL262:
 1868 0511 89C2     		movl	%eax, %edx
 1869 0513 FF5110   		call	*16(%rcx)
 1870              	.LVL263:
 1871              		.loc 1 1452 0
 1872 0516 498B9424 		movq	6208(%r12), %rdx
 1872      40180000 
 1873              	.LVL264:
 1874              		.loc 1 1454 0
 1875 051e 4889EF   		movq	%rbp, %rdi
 1876              	.LBB524:
 1877              	.LBB525:
 1878              		.loc 4 521 0
 1879 0521 48894238 		movq	%rax, 56(%rdx)
 1880              	.LVL265:
 1881              	.LBE525:
 1882              	.LBE524:
 1883              		.loc 1 1454 0
 1884 0525 E8000000 		call	_ZN15Fl_Shared_Image7releaseEv
 1884      00
 1885              	.LVL266:
 1886 052a E952FEFF 		jmp	.L156
 1886      FF
 1887              	.LVL267:
 1888              	.L126:
 1889              	.LBB526:
 1890              		.loc 1 1372 0
 1891 052f 41C68424 		movb	$0, 4112(%r12)
 1891      10100000 
 1891      00
 1892 0538 4D8DAC24 		leaq	4112(%r12), %r13
 1892      10100000 
 1893 0540 E93CFCFF 		jmp	.L127
 1893      FF
 1894              	.LVL268:
 1895              		.p2align 4,,10
 1896 0545 0F1F00   		.p2align 3
 1897              	.L255:
 1898 0548 803800   		cmpb	$0, (%rax)
 1899 054b 0F95C2   		setne	%dl
 1900 054e 4C39E8   		cmpq	%r13, %rax
 1901 0551 0F94C0   		sete	%al
 1902              	.LVL269:
 1903 0554 09D0     		orl	%edx, %eax
 1904 0556 E933FFFF 		jmp	.L142
 1904      FF
 1905              	.LVL270:
 1906              	.L253:
 1907              	.LBE526:
 1908              	.LBE534:
 1909              	.LBB535:
 1910              	.LBB471:
 1911              	.LBB466:
 1912              		.loc 1 1331 0
 1913 055b 48837C24 		cmpq	$0, 48(%rsp)
 1913      3000
 1914              		.loc 1 1333 0
 1915 0561 41BD0000 		movl	$.LC11, %r13d
 1915      0000
 1916              		.loc 1 1331 0
 1917 0567 0F8497FD 		je	.L125
 1917      FFFF
 1918              		.loc 1 1337 0
 1919 056d 498BBC24 		movq	6168(%r12), %rdi
 1919      18180000 
 1920 0575 BE4C0000 		movl	$76, %esi
 1920      00
 1921 057a E8000000 		call	_ZN9Fl_Window6cursorE9Fl_Cursor
 1921      00
 1922              	.LVL271:
 1923              		.loc 1 1338 0
 1924 057f E8000000 		call	_ZN2Fl5checkEv
 1924      00
 1925              	.LVL272:
 1926              		.loc 1 1340 0
 1927 0584 31D2     		xorl	%edx, %edx
 1928 0586 31F6     		xorl	%esi, %esi
 1929 0588 4889DF   		movq	%rbx, %rdi
 1930 058b E8000000 		call	_ZN15Fl_Shared_Image3getEPKcii
 1930      00
 1931              	.LVL273:
 1932              		.loc 1 1342 0
 1933 0590 4885C0   		testq	%rax, %rax
 1934              		.loc 1 1340 0
 1935 0593 4889C5   		movq	%rax, %rbp
 1936              	.LVL274:
 1937              		.loc 1 1342 0
 1938 0596 0F847FFB 		je	.L124
 1938      FFFF
 1939              		.loc 1 1343 0
 1940 059c 498BBC24 		movq	6168(%r12), %rdi
 1940      18180000 
 1941 05a4 31F6     		xorl	%esi, %esi
 1942              	.LBE466:
 1943              	.LBE471:
 1944              	.LBE535:
 1945              		.loc 1 1307 0
 1946 05a6 4531ED   		xorl	%r13d, %r13d
 1947              	.LBB536:
 1948              	.LBB472:
 1949              	.LBB467:
 1950              		.loc 1 1343 0
 1951 05a9 E8000000 		call	_ZN9Fl_Window6cursorE9Fl_Cursor
 1951      00
 1952              	.LVL275:
 1953              		.loc 1 1344 0
 1954 05ae E8000000 		call	_ZN2Fl5checkEv
 1954      00
 1955              	.LVL276:
 1956 05b3 E94CFDFF 		jmp	.L125
 1956      FF
 1957              	.LVL277:
 1958              	.L238:
 1959              	.LBE467:
 1960              	.LBE472:
 1961              	.LBE536:
 1962              	.LBB537:
 1963              	.LBB527:
 1964              	.LBB511:
 1965              	.LBB494:
 1966              		.loc 1 1393 0
 1967 05b8 4983C601 		addq	$1, %r14
 1968 05bc E99FFCFF 		jmp	.L133
 1968      FF
 1969              	.LVL278:
 1970              	.L252:
 1971              		.loc 1 1395 0
 1972 05c1 4983C602 		addq	$2, %r14
 1973              	.LVL279:
 1974              		.loc 1 1394 0
 1975 05c5 89D3     		movl	%edx, %ebx
 1976 05c7 E994FCFF 		jmp	.L133
 1976      FF
 1977              	.LVL280:
 1978              	.L254:
 1979              	.LBE494:
 1980              	.LBE511:
 1981              	.LBE527:
 1982              	.LBE537:
 1983              		.loc 1 1353 0
 1984 05cc 41BE0100 		movl	$1, %r14d
 1984      0000
 1985              	.LVL281:
 1986              	.L163:
 1987 05d2 E8000000 		call	_ZN15Fl_Shared_Image7releaseEv
 1987      00
 1988              	.LVL282:
 1989              		.loc 1 1355 0
 1990 05d7 498B8424 		movq	6208(%r12), %rax
 1990      40180000 
 1991              	.LVL283:
 1992              	.LBB538:
 1993              		.loc 1 1357 0
 1994 05df 4585F6   		testl	%r14d, %r14d
 1995              	.LBE538:
 1996              	.LBB539:
 1997              	.LBB477:
 1998              		.loc 4 521 0
 1999 05e2 48C74038 		movq	$0, 56(%rax)
 1999      00000000 
 2000              	.LVL284:
 2001              	.LBE477:
 2002              	.LBE539:
 2003              	.LBB540:
 2004              		.loc 1 1357 0
 2005 05ea 0F8448FB 		je	.L161
 2005      FFFF
 2006 05f0 E92CFDFF 		jmp	.L162
 2006      FF
 2007              	.LVL285:
 2008              	.L248:
 2009              	.LBE540:
 2010              		.loc 1 1353 0
 2011 05f5 4531ED   		xorl	%r13d, %r13d
 2012 05f8 31ED     		xorl	%ebp, %ebp
 2013 05fa 4531F6   		xorl	%r14d, %r14d
 2014 05fd EBD3     		jmp	.L163
 2015              	.LVL286:
 2016              	.L246:
 2017              		.loc 1 1469 0
 2018 05ff E8000000 		call	__stack_chk_fail
 2018      00
 2019              	.LVL287:
 2020              		.cfi_endproc
 2021              	.LFE765:
 2023              		.section	.text.unlikely._ZN15Fl_File_Chooser14update_previewEv.part.23
 2024              	.LCOLDE16:
 2025              		.section	.text._ZN15Fl_File_Chooser14update_previewEv.part.23
 2026              	.LHOTE16:
 2027              		.section	.text.unlikely._ZN15Fl_File_Chooser14update_previewEv,"ax",@progbits
 2028              		.align 2
 2029              	.LCOLDB17:
 2030              		.section	.text._ZN15Fl_File_Chooser14update_previewEv,"ax",@progbits
 2031              	.LHOTB17:
 2032              		.align 2
 2033              		.p2align 4,,15
 2034              		.globl	_ZN15Fl_File_Chooser14update_previewEv
 2036              	_ZN15Fl_File_Chooser14update_previewEv:
 2037              	.LFB732:
 2038              		.loc 1 1305 0
 2039              		.cfi_startproc
 2040              	.LVL288:
 2041 0000 488B8748 		movq	6216(%rdi), %rax
 2041      180000
 2042              		.loc 1 1314 0
 2043 0007 80787C00 		cmpb	$0, 124(%rax)
 2044 000b 7503     		jne	.L258
 2045 000d F3C3     		rep ret
 2046 000f 90       		.p2align 4,,10
 2047              		.p2align 3
 2048              	.L258:
 2049 0010 E9000000 		jmp	_ZN15Fl_File_Chooser14update_previewEv.part.23
 2049      00
 2050              	.LVL289:
 2051              		.cfi_endproc
 2052              	.LFE732:
 2054              		.section	.text.unlikely._ZN15Fl_File_Chooser14update_previewEv
 2055              	.LCOLDE17:
 2056              		.section	.text._ZN15Fl_File_Chooser14update_previewEv
 2057              	.LHOTE17:
 2058              		.section	.rodata.str1.1
 2059              	.LC18:
 2060 0046 70726576 		.string	"preview"
 2060      69657700 
 2061              		.section	.text.unlikely._ZN15Fl_File_Chooser7previewEi,"ax",@progbits
 2062              		.align 2
 2063              	.LCOLDB19:
 2064              		.section	.text._ZN15Fl_File_Chooser7previewEi,"ax",@progbits
 2065              	.LHOTB19:
 2066              		.align 2
 2067              		.p2align 4,,15
 2068              		.globl	_ZN15Fl_File_Chooser7previewEi
 2070              	_ZN15Fl_File_Chooser7previewEi:
 2071              	.LFB726:
 2072              		.loc 1 1098 0
 2073              		.cfi_startproc
 2074              	.LVL290:
 2075 0000 4154     		pushq	%r12
 2076              		.cfi_def_cfa_offset 16
 2077              		.cfi_offset 12, -16
 2078 0002 55       		pushq	%rbp
 2079              		.cfi_def_cfa_offset 24
 2080              		.cfi_offset 6, -24
 2081 0003 89F5     		movl	%esi, %ebp
 2082 0005 53       		pushq	%rbx
 2083              		.cfi_def_cfa_offset 32
 2084              		.cfi_offset 3, -32
 2085              		.loc 1 1098 0
 2086 0006 4889FB   		movq	%rdi, %rbx
 2087              		.loc 1 1099 0
 2088 0009 488BBF48 		movq	6216(%rdi), %rdi
 2088      180000
 2089              	.LVL291:
 2090 0010 E8000000 		call	_ZN9Fl_Button5valueEi
 2090      00
 2091              	.LVL292:
 2092              		.loc 1 1100 0
 2093 0015 488B3D00 		movq	_ZN15Fl_File_Chooser6prefs_E(%rip), %rdi
 2093      000000
 2094 001c 89EA     		movl	%ebp, %edx
 2095 001e BE000000 		movl	$.LC18, %esi
 2095      00
 2096 0023 E8000000 		call	_ZN14Fl_Preferences3setEPKci
 2096      00
 2097              	.LVL293:
 2098              		.loc 1 1101 0
 2099 0028 488B3D00 		movq	_ZN15Fl_File_Chooser6prefs_E(%rip), %rdi
 2099      000000
 2100 002f E8000000 		call	_ZN14Fl_Preferences5flushEv
 2100      00
 2101              	.LVL294:
 2102 0034 488B8340 		movq	6208(%rbx), %rax
 2102      180000
 2103              	.LBB541:
 2104              		.loc 1 1104 0
 2105 003b 85ED     		testl	%ebp, %ebp
 2106 003d 4C8B6008 		movq	8(%rax), %r12
 2107              	.LVL295:
 2108 0041 0F849100 		je	.L260
 2108      0000
 2109              	.LVL296:
 2110              	.LBB542:
 2111              		.loc 1 1105 0
 2112 0047 418B4424 		movl	40(%r12), %eax
 2112      28
 2113              	.LVL297:
 2114              		.loc 1 1106 0
 2115 004c 488BBB38 		movq	6200(%rbx), %rdi
 2115      180000
 2116              		.loc 1 1105 0
 2117 0053 BA565555 		movl	$1431655766, %edx
 2117      55
 2118 0058 8D0C00   		leal	(%rax,%rax), %ecx
 2119              		.loc 1 1107 0
 2120 005b 8B7720   		movl	32(%rdi), %esi
 2121 005e 448B472C 		movl	44(%rdi), %r8d
 2122              		.loc 1 1105 0
 2123 0062 89C8     		movl	%ecx, %eax
 2124 0064 C1F91F   		sarl	$31, %ecx
 2125 0067 F7EA     		imull	%edx
 2126              		.loc 1 1107 0
 2127 0069 488B07   		movq	(%rdi), %rax
 2128              		.loc 1 1105 0
 2129 006c 29CA     		subl	%ecx, %edx
 2130 006e 89D5     		movl	%edx, %ebp
 2131              	.LVL298:
 2132              		.loc 1 1107 0
 2133 0070 8B5724   		movl	36(%rdi), %edx
 2134              	.LVL299:
 2135 0073 89E9     		movl	%ebp, %ecx
 2136 0075 FF5020   		call	*32(%rax)
 2137              	.LVL300:
 2138              		.loc 1 1108 0
 2139 0078 488BBB40 		movq	6208(%rbx), %rdi
 2139      180000
 2140              	.LVL301:
 2141 007f 488B8338 		movq	6200(%rbx), %rax
 2141      180000
 2142              		.loc 1 1109 0
 2143 0086 418B4C24 		movl	40(%r12), %ecx
 2143      28
 2144 008b 8B7020   		movl	32(%rax), %esi
 2145 008e 488B07   		movq	(%rdi), %rax
 2146 0091 29E9     		subl	%ebp, %ecx
 2147 0093 8B5724   		movl	36(%rdi), %edx
 2148 0096 448B472C 		movl	44(%rdi), %r8d
 2149 009a 01EE     		addl	%ebp, %esi
 2150 009c FF5020   		call	*32(%rax)
 2151              	.LVL302:
 2152              		.loc 1 1110 0
 2153 009f 488BBB40 		movq	6208(%rbx), %rdi
 2153      180000
 2154 00a6 488B07   		movq	(%rdi), %rax
 2155 00a9 FF5028   		call	*40(%rax)
 2156              	.LVL303:
 2157 00ac 488B8348 		movq	6216(%rbx), %rax
 2157      180000
 2158              	.LBB543:
 2159              	.LBB544:
 2160              		.loc 1 1314 0
 2161 00b3 80787C00 		cmpb	$0, 124(%rax)
 2162 00b7 756F     		jne	.L263
 2163              	.LVL304:
 2164              	.L261:
 2165              	.LBE544:
 2166              	.LBE543:
 2167              	.LBE542:
 2168              	.LBE541:
 2169              		.loc 1 1119 0
 2170 00b9 4C89E7   		movq	%r12, %rdi
 2171 00bc E8000000 		call	_ZN8Fl_Group10init_sizesEv
 2171      00
 2172              	.LVL305:
 2173 00c1 488B8338 		movq	6200(%rbx), %rax
 2173      180000
 2174              		.loc 1 1122 0
 2175 00c8 5B       		popq	%rbx
 2176              		.cfi_remember_state
 2177              		.cfi_def_cfa_offset 24
 2178              	.LVL306:
 2179 00c9 5D       		popq	%rbp
 2180              		.cfi_def_cfa_offset 16
 2181 00ca 415C     		popq	%r12
 2182              		.cfi_def_cfa_offset 8
 2183              		.loc 1 1121 0
 2184 00cc 488B7808 		movq	8(%rax), %rdi
 2185 00d0 E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 2185      00
 2186              	.LVL307:
 2187              		.p2align 4,,10
 2188 00d5 0F1F00   		.p2align 3
 2189              	.L260:
 2190              		.cfi_restore_state
 2191              	.LBB548:
 2192              		.loc 1 1113 0
 2193 00d8 488BBB38 		movq	6200(%rbx), %rdi
 2193      180000
 2194              	.LVL308:
 2195              		.loc 1 1114 0
 2196 00df 418B4C24 		movl	40(%r12), %ecx
 2196      28
 2197 00e4 488B07   		movq	(%rdi), %rax
 2198              	.LVL309:
 2199 00e7 8B5724   		movl	36(%rdi), %edx
 2200 00ea 8B7720   		movl	32(%rdi), %esi
 2201 00ed 448B472C 		movl	44(%rdi), %r8d
 2202 00f1 FF5020   		call	*32(%rax)
 2203              	.LVL310:
 2204              		.loc 1 1115 0
 2205 00f4 488BBB40 		movq	6208(%rbx), %rdi
 2205      180000
 2206              	.LVL311:
 2207              		.loc 1 1116 0
 2208 00fb 418B7424 		movl	40(%r12), %esi
 2208      28
 2209 0100 31C9     		xorl	%ecx, %ecx
 2210 0102 41037424 		addl	32(%r12), %esi
 2210      20
 2211 0107 488B07   		movq	(%rdi), %rax
 2212 010a 8B5724   		movl	36(%rdi), %edx
 2213 010d 448B472C 		movl	44(%rdi), %r8d
 2214 0111 FF5020   		call	*32(%rax)
 2215              	.LVL312:
 2216              		.loc 1 1117 0
 2217 0114 488BBB40 		movq	6208(%rbx), %rdi
 2217      180000
 2218 011b 488B07   		movq	(%rdi), %rax
 2219 011e FF5030   		call	*48(%rax)
 2220              	.LVL313:
 2221 0121 EB96     		jmp	.L261
 2222              	.LVL314:
 2223              		.p2align 4,,10
 2224 0123 0F1F4400 		.p2align 3
 2224      00
 2225              	.L263:
 2226              	.LBB547:
 2227              	.LBB546:
 2228              	.LBB545:
 2229 0128 4889DF   		movq	%rbx, %rdi
 2230 012b E8000000 		call	_ZN15Fl_File_Chooser14update_previewEv.part.23
 2230      00
 2231              	.LVL315:
 2232 0130 EB87     		jmp	.L261
 2233              	.LBE545:
 2234              	.LBE546:
 2235              	.LBE547:
 2236              	.LBE548:
 2237              		.cfi_endproc
 2238              	.LFE726:
 2240              		.section	.text.unlikely._ZN15Fl_File_Chooser7previewEi
 2241              	.LCOLDE19:
 2242              		.section	.text._ZN15Fl_File_Chooser7previewEi
 2243              	.LHOTE19:
 2244              		.section	.text.unlikely._ZN15Fl_File_Chooser9previewCBEPS_,"ax",@progbits
 2245              		.align 2
 2246              	.LCOLDB20:
 2247              		.section	.text._ZN15Fl_File_Chooser9previewCBEPS_,"ax",@progbits
 2248              	.LHOTB20:
 2249              		.align 2
 2250              		.p2align 4,,15
 2251              		.globl	_ZN15Fl_File_Chooser9previewCBEPS_
 2253              	_ZN15Fl_File_Chooser9previewCBEPS_:
 2254              	.LFB727:
 2255              		.loc 1 1130 0
 2256              		.cfi_startproc
 2257              	.LVL316:
 2258 0000 488B8748 		movq	6216(%rdi), %rax
 2258      180000
 2259              	.LBB549:
 2260              	.LBB550:
 2261              		.loc 1 1314 0
 2262 0007 80787C00 		cmpb	$0, 124(%rax)
 2263 000b 7503     		jne	.L266
 2264 000d F3C3     		rep ret
 2265 000f 90       		.p2align 4,,10
 2266              		.p2align 3
 2267              	.L266:
 2268 0010 E9000000 		jmp	_ZN15Fl_File_Chooser14update_previewEv.part.23
 2268      00
 2269              	.LVL317:
 2270              	.LBE550:
 2271              	.LBE549:
 2272              		.cfi_endproc
 2273              	.LFE727:
 2275              		.section	.text.unlikely._ZN15Fl_File_Chooser9previewCBEPS_
 2276              	.LCOLDE20:
 2277              		.section	.text._ZN15Fl_File_Chooser9previewCBEPS_
 2278              	.LHOTE20:
 2279              		.section	.rodata.str1.1
 2280              	.LC21:
 2281 004e 2E2E2F00 		.string	"../"
 2282              		.section	.text.unlikely._ZN15Fl_File_Chooser19remove_hidden_filesEv,"ax",@progbits
 2283              		.align 2
 2284              	.LCOLDB22:
 2285              		.section	.text._ZN15Fl_File_Chooser19remove_hidden_filesEv,"ax",@progbits
 2286              	.LHOTB22:
 2287              		.align 2
 2288              		.p2align 4,,15
 2289              		.globl	_ZN15Fl_File_Chooser19remove_hidden_filesEv
 2291              	_ZN15Fl_File_Chooser19remove_hidden_filesEv:
 2292              	.LFB737:
 2293              		.loc 1 1622 0
 2294              		.cfi_startproc
 2295              	.LVL318:
 2296 0000 55       		pushq	%rbp
 2297              		.cfi_def_cfa_offset 16
 2298              		.cfi_offset 6, -16
 2299 0001 53       		pushq	%rbx
 2300              		.cfi_def_cfa_offset 24
 2301              		.cfi_offset 3, -24
 2302 0002 4889FD   		movq	%rdi, %rbp
 2303 0005 4883EC08 		subq	$8, %rsp
 2304              		.cfi_def_cfa_offset 32
 2305              		.loc 1 1623 0
 2306 0009 488BBF38 		movq	6200(%rdi), %rdi
 2306      180000
 2307              	.LVL319:
 2308 0010 8B9F8402 		movl	644(%rdi), %ebx
 2308      0000
 2309              	.LVL320:
 2310              	.LBB551:
 2311              		.loc 1 1624 0
 2312 0016 85DB     		testl	%ebx, %ebx
 2313 0018 7F12     		jg	.L271
 2314 001a EB47     		jmp	.L268
 2315              	.LVL321:
 2316 001c 0F1F4000 		.p2align 4,,10
 2317              		.p2align 3
 2318              	.L269:
 2319              		.loc 1 1624 0 is_stmt 0 discriminator 2
 2320 0020 83EB01   		subl	$1, %ebx
 2321              	.LVL322:
 2322 0023 488BBD38 		movq	6200(%rbp), %rdi
 2322      180000
 2323 002a 7437     		je	.L268
 2324              	.L271:
 2325              	.LBB552:
 2326              		.loc 1 1625 0 is_stmt 1
 2327 002c 89DE     		movl	%ebx, %esi
 2328 002e E8000000 		call	_ZNK10Fl_Browser4textEi
 2328      00
 2329              	.LVL323:
 2330              		.loc 1 1626 0
 2331 0033 80382E   		cmpb	$46, (%rax)
 2332 0036 75E8     		jne	.L269
 2333              		.loc 1 1626 0 is_stmt 0 discriminator 1
 2334 0038 BF000000 		movl	$.LC21, %edi
 2334      00
 2335 003d B9040000 		movl	$4, %ecx
 2335      00
 2336 0042 4889C6   		movq	%rax, %rsi
 2337 0045 F3A6     		repz cmpsb
 2338              	.LVL324:
 2339 0047 74D7     		je	.L269
 2340              		.loc 1 1626 0 discriminator 2
 2341 0049 488BBD38 		movq	6200(%rbp), %rdi
 2341      180000
 2342 0050 89DE     		movl	%ebx, %esi
 2343 0052 E8000000 		call	_ZN10Fl_Browser6removeEi
 2343      00
 2344              	.LVL325:
 2345              	.LBE552:
 2346              		.loc 1 1624 0 is_stmt 1 discriminator 2
 2347 0057 83EB01   		subl	$1, %ebx
 2348              	.LVL326:
 2349 005a 488BBD38 		movq	6200(%rbp), %rdi
 2349      180000
 2350 0061 75C9     		jne	.L271
 2351              	.L268:
 2352              	.LVL327:
 2353              	.LBE551:
 2354              		.loc 1 1629 0
 2355 0063 4883C408 		addq	$8, %rsp
 2356              		.cfi_def_cfa_offset 24
 2357              	.LBB553:
 2358              	.LBB554:
 2359              		.file 6 "fltk-1.3.4-1/FL/Fl_Browser.H"
   1:fltk-1.3.4-1/FL/Fl_Browser.H **** //
   2:fltk-1.3.4-1/FL/Fl_Browser.H **** // "$Id: Fl_Browser.H 11453 2016-03-28 16:16:29Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Browser.H **** //
   4:fltk-1.3.4-1/FL/Fl_Browser.H **** // Browser header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Browser.H **** //
   6:fltk-1.3.4-1/FL/Fl_Browser.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Browser.H **** //
   8:fltk-1.3.4-1/FL/Fl_Browser.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Browser.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Browser.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Browser.H **** //
  12:fltk-1.3.4-1/FL/Fl_Browser.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Browser.H **** //
  14:fltk-1.3.4-1/FL/Fl_Browser.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Browser.H **** //
  16:fltk-1.3.4-1/FL/Fl_Browser.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Browser.H **** //
  18:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  19:fltk-1.3.4-1/FL/Fl_Browser.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Browser.H ****    Fl_Browser widget . */
  21:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  22:fltk-1.3.4-1/FL/Fl_Browser.H **** // Forms-compatible browser.  Probably useful for other
  23:fltk-1.3.4-1/FL/Fl_Browser.H **** // lists of textual data.  Notice that the line numbers
  24:fltk-1.3.4-1/FL/Fl_Browser.H **** // start from 1, and 0 means "no line".
  25:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  26:fltk-1.3.4-1/FL/Fl_Browser.H **** #ifndef Fl_Browser_H
  27:fltk-1.3.4-1/FL/Fl_Browser.H **** #define Fl_Browser_H
  28:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  29:fltk-1.3.4-1/FL/Fl_Browser.H **** #include "Fl_Browser_.H"
  30:fltk-1.3.4-1/FL/Fl_Browser.H **** #include "Fl_Image.H"
  31:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  32:fltk-1.3.4-1/FL/Fl_Browser.H **** struct FL_BLINE;
  33:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  34:fltk-1.3.4-1/FL/Fl_Browser.H **** /**
  35:fltk-1.3.4-1/FL/Fl_Browser.H ****   The Fl_Browser widget displays a scrolling list of text
  36:fltk-1.3.4-1/FL/Fl_Browser.H ****   lines, and manages all the storage for the text.  This is not a text
  37:fltk-1.3.4-1/FL/Fl_Browser.H ****   editor or spreadsheet!  But it is useful for showing a vertical list of
  38:fltk-1.3.4-1/FL/Fl_Browser.H ****   named objects to the user.
  39:fltk-1.3.4-1/FL/Fl_Browser.H ****   
  40:fltk-1.3.4-1/FL/Fl_Browser.H ****   Each line in the browser is identified by number. <I>The numbers
  41:fltk-1.3.4-1/FL/Fl_Browser.H ****   start at one</I> (this is so that zero can be reserved for "no line" in
  42:fltk-1.3.4-1/FL/Fl_Browser.H ****   the selective browsers). <I>Unless otherwise noted, the methods do not
  43:fltk-1.3.4-1/FL/Fl_Browser.H ****   check to see if the passed line number is in range and legal.  It must
  44:fltk-1.3.4-1/FL/Fl_Browser.H ****   always be greater than zero and &lt;= size().</I>
  45:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  46:fltk-1.3.4-1/FL/Fl_Browser.H ****   Each line contains a null-terminated string of text and a void *
  47:fltk-1.3.4-1/FL/Fl_Browser.H ****   data pointer.  The text string is displayed, the void *
  48:fltk-1.3.4-1/FL/Fl_Browser.H ****   pointer can be used by the callbacks to reference the object the text
  49:fltk-1.3.4-1/FL/Fl_Browser.H ****   describes.
  50:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  51:fltk-1.3.4-1/FL/Fl_Browser.H ****   The base class does nothing when the user clicks on it.  The
  52:fltk-1.3.4-1/FL/Fl_Browser.H ****   subclasses 
  53:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Select_Browser, 
  54:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Hold_Browser, and 
  55:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Multi_Browser react to user clicks to select lines in
  56:fltk-1.3.4-1/FL/Fl_Browser.H ****   the browser and do callbacks.
  57:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  58:fltk-1.3.4-1/FL/Fl_Browser.H ****   The base class
  59:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Browser_ provides the scrolling and selection mechanisms of
  60:fltk-1.3.4-1/FL/Fl_Browser.H ****   this and all the subclasses, but the dimensions and appearance of each
  61:fltk-1.3.4-1/FL/Fl_Browser.H ****   item are determined by the subclass. You can use Fl_Browser_
  62:fltk-1.3.4-1/FL/Fl_Browser.H ****   to display information other than text, or text that is dynamically
  63:fltk-1.3.4-1/FL/Fl_Browser.H ****   produced from your own data structures. If you find that loading the
  64:fltk-1.3.4-1/FL/Fl_Browser.H ****   browser is a lot of work or is inefficient, you may want to make a
  65:fltk-1.3.4-1/FL/Fl_Browser.H ****   subclass of Fl_Browser_.
  66:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  67:fltk-1.3.4-1/FL/Fl_Browser.H ****   Some common coding patterns used for working with Fl_Browser:
  68:fltk-1.3.4-1/FL/Fl_Browser.H ****   \code
  69:fltk-1.3.4-1/FL/Fl_Browser.H ****       // How to loop through all the items in the browser
  70:fltk-1.3.4-1/FL/Fl_Browser.H ****       for ( int t=1; t<=browser->size(); t++ ) {       // index 1 based..!
  71:fltk-1.3.4-1/FL/Fl_Browser.H **** 	  printf("item #%d, label='%s'\n", t, browser->text(t));
  72:fltk-1.3.4-1/FL/Fl_Browser.H ****       }
  73:fltk-1.3.4-1/FL/Fl_Browser.H ****   \endcode
  74:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  75:fltk-1.3.4-1/FL/Fl_Browser.H ****   Note: If you are <I>subclassing</I> Fl_Browser, it's more efficient
  76:fltk-1.3.4-1/FL/Fl_Browser.H ****   to use the protected methods item_first() and item_next(), since
  77:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Browser internally uses linked lists to manage the browser's items.
  78:fltk-1.3.4-1/FL/Fl_Browser.H ****   For more info, see find_item(int).
  79:fltk-1.3.4-1/FL/Fl_Browser.H **** */
  80:fltk-1.3.4-1/FL/Fl_Browser.H **** class FL_EXPORT Fl_Browser : public Fl_Browser_ {
  81:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  82:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE *first;		// the array of lines
  83:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE *last;
  84:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE *cache;
  85:fltk-1.3.4-1/FL/Fl_Browser.H ****   int cacheline;		// line number of cache
  86:fltk-1.3.4-1/FL/Fl_Browser.H ****   int lines;                	// Number of lines
  87:fltk-1.3.4-1/FL/Fl_Browser.H ****   int full_height_;
  88:fltk-1.3.4-1/FL/Fl_Browser.H ****   const int* column_widths_;
  89:fltk-1.3.4-1/FL/Fl_Browser.H ****   char format_char_;		// alternative to @-sign
  90:fltk-1.3.4-1/FL/Fl_Browser.H ****   char column_char_;		// alternative to tab
  91:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  92:fltk-1.3.4-1/FL/Fl_Browser.H **** protected:
  93:fltk-1.3.4-1/FL/Fl_Browser.H **** 
  94:fltk-1.3.4-1/FL/Fl_Browser.H ****   // required routines for Fl_Browser_ subclass:
  95:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* item_first() const ;
  96:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* item_next(void* item) const ;
  97:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* item_prev(void* item) const ;
  98:fltk-1.3.4-1/FL/Fl_Browser.H ****   void* item_last()const ;
  99:fltk-1.3.4-1/FL/Fl_Browser.H ****   int item_selected(void* item) const ;
 100:fltk-1.3.4-1/FL/Fl_Browser.H ****   void item_select(void* item, int val);
 101:fltk-1.3.4-1/FL/Fl_Browser.H ****   int item_height(void* item) const ;
 102:fltk-1.3.4-1/FL/Fl_Browser.H ****   int item_width(void* item) const ;
 103:fltk-1.3.4-1/FL/Fl_Browser.H ****   void item_draw(void* item, int X, int Y, int W, int H) const ;
 104:fltk-1.3.4-1/FL/Fl_Browser.H ****   int full_height() const ;
 105:fltk-1.3.4-1/FL/Fl_Browser.H ****   int incr_height() const ;
 106:fltk-1.3.4-1/FL/Fl_Browser.H ****   const char *item_text(void *item) const;
 107:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** Swap the items \p a and \p b.
 108:fltk-1.3.4-1/FL/Fl_Browser.H ****       You must call redraw() to make any changes visible.
 109:fltk-1.3.4-1/FL/Fl_Browser.H ****       \param[in] a,b the items to be swapped.
 110:fltk-1.3.4-1/FL/Fl_Browser.H ****       \see swap(int,int), item_swap()
 111:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 112:fltk-1.3.4-1/FL/Fl_Browser.H ****   void item_swap(void *a, void *b) { swap((FL_BLINE*)a, (FL_BLINE*)b); }
 113:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** Return the item at specified \p line.
 114:fltk-1.3.4-1/FL/Fl_Browser.H ****       \param[in] line The line of the item to return. (1 based)
 115:fltk-1.3.4-1/FL/Fl_Browser.H ****       \returns The item, or NULL if line out of range.
 116:fltk-1.3.4-1/FL/Fl_Browser.H ****       \see item_at(), find_line(), lineno()
 117:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 118:fltk-1.3.4-1/FL/Fl_Browser.H ****   void *item_at(int line) const { return (void*)find_line(line); }
 119:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 120:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE* find_line(int line) const ;
 121:fltk-1.3.4-1/FL/Fl_Browser.H ****   FL_BLINE* _remove(int line) ;
 122:fltk-1.3.4-1/FL/Fl_Browser.H ****   void insert(int line, FL_BLINE* item);
 123:fltk-1.3.4-1/FL/Fl_Browser.H ****   int lineno(void *item) const ;
 124:fltk-1.3.4-1/FL/Fl_Browser.H ****   void swap(FL_BLINE *a, FL_BLINE *b);
 125:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 126:fltk-1.3.4-1/FL/Fl_Browser.H **** public:
 127:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 128:fltk-1.3.4-1/FL/Fl_Browser.H ****   void remove(int line);
 129:fltk-1.3.4-1/FL/Fl_Browser.H ****   void add(const char* newtext, void* d = 0);
 130:fltk-1.3.4-1/FL/Fl_Browser.H ****   void insert(int line, const char* newtext, void* d = 0);
 131:fltk-1.3.4-1/FL/Fl_Browser.H ****   void move(int to, int from);
 132:fltk-1.3.4-1/FL/Fl_Browser.H ****   int  load(const char* filename);
 133:fltk-1.3.4-1/FL/Fl_Browser.H ****   void swap(int a, int b);
 134:fltk-1.3.4-1/FL/Fl_Browser.H ****   void clear();
 135:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 136:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 137:fltk-1.3.4-1/FL/Fl_Browser.H ****     Returns how many lines are in the browser.
 138:fltk-1.3.4-1/FL/Fl_Browser.H ****     The last line number is equal to this.
 139:fltk-1.3.4-1/FL/Fl_Browser.H ****     Returns 0 if browser is empty.
 140:fltk-1.3.4-1/FL/Fl_Browser.H ****   */
 141:fltk-1.3.4-1/FL/Fl_Browser.H ****   int size() const { return lines; }
 142:fltk-1.3.4-1/FL/Fl_Browser.H ****   void size(int W, int H) { Fl_Widget::size(W, H); }
 143:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 144:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 145:fltk-1.3.4-1/FL/Fl_Browser.H ****     Gets the default text size (in pixels) for the lines in the browser.
 146:fltk-1.3.4-1/FL/Fl_Browser.H ****   */
 147:fltk-1.3.4-1/FL/Fl_Browser.H ****   Fl_Fontsize textsize() const { return Fl_Browser_::textsize(); }
 148:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 149:fltk-1.3.4-1/FL/Fl_Browser.H ****   /*
 150:fltk-1.3.4-1/FL/Fl_Browser.H ****     Sets the default text size for the lines in the browser to newSize.
 151:fltk-1.3.4-1/FL/Fl_Browser.H ****     Defined and documented in Fl_Browser.cxx
 152:fltk-1.3.4-1/FL/Fl_Browser.H ****   */
 153:fltk-1.3.4-1/FL/Fl_Browser.H ****   void textsize(Fl_Fontsize newSize);
 154:fltk-1.3.4-1/FL/Fl_Browser.H **** 
 155:fltk-1.3.4-1/FL/Fl_Browser.H ****   int topline() const ;
 156:fltk-1.3.4-1/FL/Fl_Browser.H ****   /** For internal use only? */
 157:fltk-1.3.4-1/FL/Fl_Browser.H ****   enum Fl_Line_Position { TOP, BOTTOM, MIDDLE };
 158:fltk-1.3.4-1/FL/Fl_Browser.H ****   void lineposition(int line, Fl_Line_Position pos);
 159:fltk-1.3.4-1/FL/Fl_Browser.H ****   /**
 160:fltk-1.3.4-1/FL/Fl_Browser.H ****     Scrolls the browser so the top item in the browser
 161:fltk-1.3.4-1/FL/Fl_Browser.H ****     is showing the specified \p line.
 162:fltk-1.3.4-1/FL/Fl_Browser.H ****     \param[in] line The line to be displayed at the top.
 163:fltk-1.3.4-1/FL/Fl_Browser.H ****     \see topline(), middleline(), bottomline(), displayed(), lineposition()
 164:fltk-1.3.4-1/FL/Fl_Browser.H ****    */
 165:fltk-1.3.4-1/FL/Fl_Browser.H ****   void topline(int line) { lineposition(line, TOP); }
 2360              		.loc 6 165 0
 2361 0067 31D2     		xorl	%edx, %edx
 2362 0069 BE010000 		movl	$1, %esi
 2362      00
 2363              	.LBE554:
 2364              	.LBE553:
 2365              		.loc 1 1629 0
 2366 006e 5B       		popq	%rbx
 2367              		.cfi_def_cfa_offset 16
 2368              	.LVL328:
 2369 006f 5D       		popq	%rbp
 2370              		.cfi_def_cfa_offset 8
 2371              	.LVL329:
 2372              	.LBB556:
 2373              	.LBB555:
 2374              		.loc 6 165 0
 2375 0070 E9000000 		jmp	_ZN10Fl_Browser12linepositionEiNS_16Fl_Line_PositionE
 2375      00
 2376              	.LVL330:
 2377              	.LBE555:
 2378              	.LBE556:
 2379              		.cfi_endproc
 2380              	.LFE737:
 2382              		.section	.text.unlikely._ZN15Fl_File_Chooser19remove_hidden_filesEv
 2383              	.LCOLDE22:
 2384              		.section	.text._ZN15Fl_File_Chooser19remove_hidden_filesEv
 2385              	.LHOTE22:
 2386              		.section	.rodata.str1.1
 2387              	.LC23:
 2388 0052 2F00     		.string	"/"
 2389              		.section	.text.unlikely._ZN15Fl_File_Chooser6rescanEv,"ax",@progbits
 2390              		.align 2
 2391              	.LCOLDB24:
 2392              		.section	.text._ZN15Fl_File_Chooser6rescanEv,"ax",@progbits
 2393              	.LHOTB24:
 2394              		.align 2
 2395              		.p2align 4,,15
 2396              		.globl	_ZN15Fl_File_Chooser6rescanEv
 2398              	_ZN15Fl_File_Chooser6rescanEv:
 2399              	.LFB728:
 2400              		.loc 1 1141 0
 2401              		.cfi_startproc
 2402              	.LVL331:
 2403 0000 4154     		pushq	%r12
 2404              		.cfi_def_cfa_offset 16
 2405              		.cfi_offset 12, -16
 2406 0002 55       		pushq	%rbp
 2407              		.cfi_def_cfa_offset 24
 2408              		.cfi_offset 6, -24
 2409              		.loc 1 1146 0
 2410 0003 4C8D6710 		leaq	16(%rdi), %r12
 2411              		.loc 1 1141 0
 2412 0007 53       		pushq	%rbx
 2413              		.cfi_def_cfa_offset 32
 2414              		.cfi_offset 3, -32
 2415              		.loc 1 1146 0
 2416 0008 BA000800 		movl	$2048, %edx
 2416      00
 2417              		.loc 1 1141 0
 2418 000d 4889FB   		movq	%rdi, %rbx
 2419              		.loc 1 1146 0
 2420 0010 4C89E6   		movq	%r12, %rsi
 2421              		.loc 1 1141 0
 2422 0013 4881EC10 		subq	$2064, %rsp
 2422      080000
 2423              		.cfi_def_cfa_offset 2096
 2424              		.loc 1 1146 0
 2425 001a 4889E7   		movq	%rsp, %rdi
 2426              	.LVL332:
 2427 001d 4889E5   		movq	%rsp, %rbp
 2428              		.loc 1 1141 0
 2429 0020 64488B04 		movq	%fs:40, %rax
 2429      25280000 
 2429      00
 2430 0029 48898424 		movq	%rax, 2056(%rsp)
 2430      08080000 
 2431 0031 31C0     		xorl	%eax, %eax
 2432              		.loc 1 1146 0
 2433 0033 E8000000 		call	fl_strlcpy
 2433      00
 2434              	.LVL333:
 2435              		.loc 1 1147 0
 2436 0038 803C2400 		cmpb	$0, (%rsp)
 2437 003c 7454     		je	.L277
 2438              		.loc 1 1147 0 is_stmt 0 discriminator 1
 2439 003e 4889E2   		movq	%rsp, %rdx
 2440              	.L278:
 2441 0041 8B0A     		movl	(%rdx), %ecx
 2442 0043 4883C204 		addq	$4, %rdx
 2443 0047 8D81FFFE 		leal	-16843009(%rcx), %eax
 2443      FEFE
 2444 004d F7D1     		notl	%ecx
 2445 004f 21C8     		andl	%ecx, %eax
 2446 0051 25808080 		andl	$-2139062144, %eax
 2446      80
 2447 0056 74E9     		je	.L278
 2448 0058 89C1     		movl	%eax, %ecx
 2449 005a C1E910   		shrl	$16, %ecx
 2450 005d A9808000 		testl	$32896, %eax
 2450      00
 2451 0062 0F44C1   		cmove	%ecx, %eax
 2452 0065 488D4A02 		leaq	2(%rdx), %rcx
 2453 0069 89C6     		movl	%eax, %esi
 2454 006b 480F44D1 		cmove	%rcx, %rdx
 2455 006f 4000C6   		addb	%al, %sil
 2456 0072 4883DA03 		sbbq	$3, %rdx
 2457 0076 4829EA   		subq	%rbp, %rdx
 2458 0079 807C14FF 		cmpb	$47, -1(%rsp,%rdx)
 2458      2F
 2459 007e 7412     		je	.L277
 2460              		.loc 1 1148 0 is_stmt 1
 2461 0080 BA000800 		movl	$2048, %edx
 2461      00
 2462 0085 BE000000 		movl	$.LC23, %esi
 2462      00
 2463 008a 4889EF   		movq	%rbp, %rdi
 2464 008d E8000000 		call	fl_strlcat
 2464      00
 2465              	.LVL334:
 2466              	.L277:
 2467              		.loc 1 1151 0
 2468 0092 488BBB58 		movq	6232(%rbx), %rdi
 2468      180000
 2469 0099 4889EE   		movq	%rbp, %rsi
 2470 009c E8000000 		call	_ZN13Fl_File_Input5valueEPKc
 2470      00
 2471              	.LVL335:
 2472              		.loc 1 1153 0
 2473 00a1 F6831018 		testb	$4, 6160(%rbx)
 2473      000004
 2474              		.loc 1 1154 0
 2475 00a8 488BBB60 		movq	6240(%rbx), %rdi
 2475      180000
 2476              		.loc 1 1153 0
 2477 00af 745F     		je	.L280
 2478              		.loc 1 1154 0
 2479 00b1 E8000000 		call	_ZN9Fl_Widget8activateEv
 2479      00
 2480              	.LVL336:
 2481              	.L281:
 2482              		.loc 1 1159 0
 2483 00b6 488BBB38 		movq	6200(%rbx), %rdi
 2483      180000
 2484 00bd 488B1500 		movq	_ZN15Fl_File_Chooser4sortE(%rip), %rdx
 2484      000000
 2485 00c4 4C89E6   		movq	%r12, %rsi
 2486 00c7 E8000000 		call	_ZN15Fl_File_Browser4loadEPKcPFiPP6direntS4_E
 2486      00
 2487              	.LVL337:
 2488 00cc 488B8350 		movq	6224(%rbx), %rax
 2488      180000
 2489              		.loc 1 1161 0
 2490 00d3 80787C00 		cmpb	$0, 124(%rax)
 2491 00d7 7447     		je	.L288
 2492              	.LVL338:
 2493              	.L282:
 2494 00d9 488B8348 		movq	6216(%rbx), %rax
 2494      180000
 2495              	.LBB557:
 2496              	.LBB558:
 2497              		.loc 1 1314 0
 2498 00e0 80787C00 		cmpb	$0, 124(%rax)
 2499 00e4 7408     		je	.L276
 2500 00e6 4889DF   		movq	%rbx, %rdi
 2501 00e9 E8000000 		call	_ZN15Fl_File_Chooser14update_previewEv.part.23
 2501      00
 2502              	.LVL339:
 2503              	.L276:
 2504              	.LBE558:
 2505              	.LBE557:
 2506              		.loc 1 1165 0
 2507 00ee 488B8424 		movq	2056(%rsp), %rax
 2507      08080000 
 2508 00f6 64483304 		xorq	%fs:40, %rax
 2508      25280000 
 2508      00
 2509 00ff 7529     		jne	.L289
 2510 0101 4881C410 		addq	$2064, %rsp
 2510      080000
 2511              		.cfi_remember_state
 2512              		.cfi_def_cfa_offset 32
 2513 0108 5B       		popq	%rbx
 2514              		.cfi_def_cfa_offset 24
 2515              	.LVL340:
 2516 0109 5D       		popq	%rbp
 2517              		.cfi_def_cfa_offset 16
 2518 010a 415C     		popq	%r12
 2519              		.cfi_def_cfa_offset 8
 2520              	.LVL341:
 2521 010c C3       		ret
 2522              	.LVL342:
 2523 010d 0F1F00   		.p2align 4,,10
 2524              		.p2align 3
 2525              	.L280:
 2526              		.cfi_restore_state
 2527              		.loc 1 1156 0
 2528 0110 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 2528      00
 2529              	.LVL343:
 2530 0115 EB9F     		jmp	.L281
 2531              	.LVL344:
 2532 0117 660F1F84 		.p2align 4,,10
 2532      00000000 
 2532      00
 2533              		.p2align 3
 2534              	.L288:
 2535              		.loc 1 1161 0 discriminator 1
 2536 0120 4889DF   		movq	%rbx, %rdi
 2537 0123 E8000000 		call	_ZN15Fl_File_Chooser19remove_hidden_filesEv
 2537      00
 2538              	.LVL345:
 2539 0128 EBAF     		jmp	.L282
 2540              	.LVL346:
 2541              	.L289:
 2542              		.loc 1 1165 0
 2543 012a E8000000 		call	__stack_chk_fail
 2543      00
 2544              	.LVL347:
 2545              		.cfi_endproc
 2546              	.LFE728:
 2548              		.section	.text.unlikely._ZN15Fl_File_Chooser6rescanEv
 2549              	.LCOLDE24:
 2550              		.section	.text._ZN15Fl_File_Chooser6rescanEv
 2551              	.LHOTE24:
 2552              		.section	.rodata.str1.1
 2553              	.LC25:
 2554 0054 2E00     		.string	"."
 2555              	.LC26:
 2556 0056 2F2E2E00 		.string	"/.."
 2557              	.LC27:
 2558 005a 2F2E00   		.string	"/."
 2559              		.section	.text.unlikely._ZN15Fl_File_Chooser9directoryEPKc,"ax",@progbits
 2560              		.align 2
 2561              	.LCOLDB28:
 2562              		.section	.text._ZN15Fl_File_Chooser9directoryEPKc,"ax",@progbits
 2563              	.LHOTB28:
 2564              		.align 2
 2565              		.p2align 4,,15
 2566              		.globl	_ZN15Fl_File_Chooser9directoryEPKc
 2568              	_ZN15Fl_File_Chooser9directoryEPKc:
 2569              	.LFB719:
 2570              		.loc 1 459 0
 2571              		.cfi_startproc
 2572              	.LVL348:
 2573 0000 55       		pushq	%rbp
 2574              		.cfi_def_cfa_offset 16
 2575              		.cfi_offset 6, -16
 2576 0001 53       		pushq	%rbx
 2577              		.cfi_def_cfa_offset 24
 2578              		.cfi_offset 3, -24
 2579              		.loc 1 467 0
 2580 0002 B8000000 		movl	$.LC25, %eax
 2580      00
 2581              		.loc 1 459 0
 2582 0007 4889FD   		movq	%rdi, %rbp
 2583 000a 4883EC08 		subq	$8, %rsp
 2584              		.cfi_def_cfa_offset 32
 2585              		.loc 1 467 0
 2586 000e 4885F6   		testq	%rsi, %rsi
 2587 0011 480F44F0 		cmove	%rax, %rsi
 2588              	.LVL349:
 2589              		.loc 1 484 0
 2590 0015 0FB606   		movzbl	(%rsi), %eax
 2591 0018 84C0     		testb	%al, %al
 2592 001a 0F84A800 		je	.L292
 2592      0000
 2593              		.loc 1 490 0
 2594 0020 3C2F     		cmpb	$47, %al
 2595              		.loc 1 492 0
 2596 0022 488D5F10 		leaq	16(%rdi), %rbx
 2597              		.loc 1 490 0
 2598 0026 0F84D400 		je	.L293
 2598      0000
 2599 002c 3C5C     		cmpb	$92, %al
 2600 002e 0F84CC00 		je	.L293
 2600      0000
 2601              	.LVL350:
 2602              	.LBB559:
 2603              	.LBB560:
 2604              		.file 7 "fltk-1.3.4-1/FL/filename.H"
   1:fltk-1.3.4-1/FL/filename.H **** /*
   2:fltk-1.3.4-1/FL/filename.H ****  * "$Id: filename.H 9704 2012-10-19 11:23:51Z manolo $"
   3:fltk-1.3.4-1/FL/filename.H ****  *
   4:fltk-1.3.4-1/FL/filename.H ****  * Filename header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/filename.H ****  *
   6:fltk-1.3.4-1/FL/filename.H ****  * Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/filename.H ****  *
   8:fltk-1.3.4-1/FL/filename.H ****  * This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/filename.H ****  * the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/filename.H ****  * file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/filename.H ****  *
  12:fltk-1.3.4-1/FL/filename.H ****  *     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/filename.H ****  *
  14:fltk-1.3.4-1/FL/filename.H ****  * Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/filename.H ****  *
  16:fltk-1.3.4-1/FL/filename.H ****  *     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/filename.H ****  */
  18:fltk-1.3.4-1/FL/filename.H **** /** \file
  19:fltk-1.3.4-1/FL/filename.H ****  File names and URI utility functions.
  20:fltk-1.3.4-1/FL/filename.H ****  */
  21:fltk-1.3.4-1/FL/filename.H **** 
  22:fltk-1.3.4-1/FL/filename.H **** /* Xcode on OS X includes files by recursing down into directories.
  23:fltk-1.3.4-1/FL/filename.H ****  * This code catches the cycle and directly includes the required file.
  24:fltk-1.3.4-1/FL/filename.H ****  */
  25:fltk-1.3.4-1/FL/filename.H **** #ifdef fl_dirent_h_cyclic_include
  26:fltk-1.3.4-1/FL/filename.H **** #  include "/usr/include/dirent.h"
  27:fltk-1.3.4-1/FL/filename.H **** #endif
  28:fltk-1.3.4-1/FL/filename.H **** 
  29:fltk-1.3.4-1/FL/filename.H **** #ifndef FL_FILENAME_H
  30:fltk-1.3.4-1/FL/filename.H **** #  define FL_FILENAME_H
  31:fltk-1.3.4-1/FL/filename.H **** 
  32:fltk-1.3.4-1/FL/filename.H **** #  include "Fl_Export.H"
  33:fltk-1.3.4-1/FL/filename.H **** 
  34:fltk-1.3.4-1/FL/filename.H **** /** \addtogroup filenames File names and URI utility functions
  35:fltk-1.3.4-1/FL/filename.H ****  File names and URI functions defined in <FL/filename.H>
  36:fltk-1.3.4-1/FL/filename.H ****     @{ */
  37:fltk-1.3.4-1/FL/filename.H **** 
  38:fltk-1.3.4-1/FL/filename.H **** #  define FL_PATH_MAX 2048 /**< all path buffers should use this length */
  39:fltk-1.3.4-1/FL/filename.H **** /** Gets the file name from a path.
  40:fltk-1.3.4-1/FL/filename.H ****     Similar to basename(3), exceptions shown below.
  41:fltk-1.3.4-1/FL/filename.H ****     \code
  42:fltk-1.3.4-1/FL/filename.H ****     #include <FL/filename.H>
  43:fltk-1.3.4-1/FL/filename.H ****     [..]
  44:fltk-1.3.4-1/FL/filename.H ****     const char *out;
  45:fltk-1.3.4-1/FL/filename.H ****     out = fl_filename_name("/usr/lib");     // out="lib"
  46:fltk-1.3.4-1/FL/filename.H ****     out = fl_filename_name("/usr/");        // out=""      (basename(3) returns "usr" instead)
  47:fltk-1.3.4-1/FL/filename.H ****     out = fl_filename_name("/usr");         // out="usr"
  48:fltk-1.3.4-1/FL/filename.H ****     out = fl_filename_name("/");            // out=""      (basename(3) returns "/" instead)
  49:fltk-1.3.4-1/FL/filename.H ****     out = fl_filename_name(".");            // out="."
  50:fltk-1.3.4-1/FL/filename.H ****     out = fl_filename_name("..");           // out=".."
  51:fltk-1.3.4-1/FL/filename.H ****     \endcode
  52:fltk-1.3.4-1/FL/filename.H ****     \return a pointer to the char after the last slash, or to \p filename if there is none.
  53:fltk-1.3.4-1/FL/filename.H ****  */
  54:fltk-1.3.4-1/FL/filename.H **** FL_EXPORT const char *fl_filename_name(const char * filename);
  55:fltk-1.3.4-1/FL/filename.H **** FL_EXPORT const char *fl_filename_ext(const char *buf);
  56:fltk-1.3.4-1/FL/filename.H **** FL_EXPORT char *fl_filename_setext(char *to, int tolen, const char *ext);
  57:fltk-1.3.4-1/FL/filename.H **** FL_EXPORT int fl_filename_expand(char *to, int tolen, const char *from);
  58:fltk-1.3.4-1/FL/filename.H **** FL_EXPORT int fl_filename_absolute(char *to, int tolen, const char *from);
  59:fltk-1.3.4-1/FL/filename.H **** FL_EXPORT int fl_filename_relative(char *to, int tolen, const char *from);
  60:fltk-1.3.4-1/FL/filename.H **** FL_EXPORT int fl_filename_match(const char *name, const char *pattern);
  61:fltk-1.3.4-1/FL/filename.H **** FL_EXPORT int fl_filename_isdir(const char *name);
  62:fltk-1.3.4-1/FL/filename.H **** 
  63:fltk-1.3.4-1/FL/filename.H **** #  if defined(__cplusplus) && !defined(FL_DOXYGEN)
  64:fltk-1.3.4-1/FL/filename.H **** /*
  65:fltk-1.3.4-1/FL/filename.H ****  * Under WIN32, we include filename.H from numericsort.c; this should probably change...
  66:fltk-1.3.4-1/FL/filename.H ****  */
  67:fltk-1.3.4-1/FL/filename.H **** 
  68:fltk-1.3.4-1/FL/filename.H **** inline char *fl_filename_setext(char *to, const char *ext) { return fl_filename_setext(to, FL_PATH_
  69:fltk-1.3.4-1/FL/filename.H **** inline int fl_filename_expand(char *to, const char *from) { return fl_filename_expand(to, FL_PATH_M
  70:fltk-1.3.4-1/FL/filename.H **** inline int fl_filename_absolute(char *to, const char *from) { return fl_filename_absolute(to, FL_PA
 2605              		.loc 7 70 0
 2606 0034 4889F2   		movq	%rsi, %rdx
 2607 0037 4889DF   		movq	%rbx, %rdi
 2608              	.LVL351:
 2609 003a BE000800 		movl	$2048, %esi
 2609      00
 2610              	.LVL352:
 2611 003f E8000000 		call	_Z20fl_filename_absolutePciPKc
 2611      00
 2612              	.LVL353:
 2613              	.L294:
 2614              	.LBE560:
 2615              	.LBE559:
 2616              		.loc 1 497 0
 2617 0044 4889DF   		movq	%rbx, %rdi
 2618 0047 E8000000 		call	strlen
 2618      00
 2619              	.LVL354:
 2620 004c 488D5403 		leaq	-1(%rbx,%rax), %rdx
 2620      FF
 2621              	.LVL355:
 2622              		.loc 1 498 0
 2623 0051 0FB60A   		movzbl	(%rdx), %ecx
 2624 0054 80F92F   		cmpb	$47, %cl
 2625 0057 400F94C6 		sete	%sil
 2626 005b 80F95C   		cmpb	$92, %cl
 2627 005e 0F94C1   		sete	%cl
 2628 0061 4008CE   		orb	%cl, %sil
 2629 0064 7410     		je	.L305
 2630 0066 4839DA   		cmpq	%rbx, %rdx
 2631 0069 760B     		jbe	.L305
 2632              		.loc 1 499 0
 2633 006b C60200   		movb	$0, (%rdx)
 2634 006e 4889DF   		movq	%rbx, %rdi
 2635 0071 E8000000 		call	strlen
 2635      00
 2636              	.LVL356:
 2637              	.L305:
 2638              		.loc 1 502 0
 2639 0076 488D5403 		leaq	-3(%rbx,%rax), %rdx
 2639      FD
 2640              	.LVL357:
 2641              		.loc 1 503 0
 2642 007b 4839DA   		cmpq	%rbx, %rdx
 2643 007e 7260     		jb	.L297
 2644              		.loc 1 503 0 is_stmt 0 discriminator 1
 2645 0080 BF000000 		movl	$.LC26, %edi
 2645      00
 2646 0085 B9040000 		movl	$4, %ecx
 2646      00
 2647 008a 4889D6   		movq	%rdx, %rsi
 2648 008d F3A6     		repz cmpsb
 2649              	.LVL358:
 2650 008f 754F     		jne	.L297
 2651              		.loc 1 506 0 is_stmt 1
 2652 0091 4839DA   		cmpq	%rbx, %rdx
 2653              		.loc 1 505 0
 2654 0094 C60200   		movb	$0, (%rdx)
 2655              	.LVL359:
 2656              		.loc 1 506 0
 2657 0097 770F     		ja	.L301
 2658 0099 EB31     		jmp	.L303
 2659              	.LVL360:
 2660 009b 0F1F4400 		.p2align 4,,10
 2660      00
 2661              		.p2align 3
 2662              	.L302:
 2663              		.loc 1 507 0
 2664 00a0 80382F   		cmpb	$47, (%rax)
 2665 00a3 4889C2   		movq	%rax, %rdx
 2666 00a6 7418     		je	.L300
 2667              	.LVL361:
 2668              	.L301:
 2669              		.loc 1 508 0
 2670 00a8 488D42FF 		leaq	-1(%rdx), %rax
 2671              	.LVL362:
 2672              		.loc 1 506 0
 2673 00ac 4839D8   		cmpq	%rbx, %rax
 2674 00af 75EF     		jne	.L302
 2675              		.loc 1 511 0
 2676 00b1 807AFF2F 		cmpb	$47, -1(%rdx)
 2677 00b5 7515     		jne	.L303
 2678              		.loc 1 508 0
 2679 00b7 4889D8   		movq	%rbx, %rax
 2680              	.LVL363:
 2681 00ba 660F1F44 		.p2align 4,,10
 2681      0000
 2682              		.p2align 3
 2683              	.L300:
 2684              		.loc 1 512 0
 2685 00c0 C60000   		movb	$0, (%rax)
 2686 00c3 EB07     		jmp	.L303
 2687              	.LVL364:
 2688              		.p2align 4,,10
 2689 00c5 0F1F00   		.p2align 3
 2690              	.L292:
 2691              		.loc 1 519 0
 2692 00c8 C6471000 		movb	$0, 16(%rdi)
 2693              	.LVL365:
 2694              	.L303:
 2695              		.loc 1 521 0
 2696 00cc 4889EF   		movq	%rbp, %rdi
 2697 00cf E8000000 		call	_ZN15Fl_File_Chooser5shownEv
 2697      00
 2698              	.LVL366:
 2699 00d4 85C0     		testl	%eax, %eax
 2700 00d6 7540     		jne	.L318
 2701              		.loc 1 525 0
 2702 00d8 4883C408 		addq	$8, %rsp
 2703              		.cfi_remember_state
 2704              		.cfi_def_cfa_offset 24
 2705 00dc 5B       		popq	%rbx
 2706              		.cfi_def_cfa_offset 16
 2707 00dd 5D       		popq	%rbp
 2708              		.cfi_def_cfa_offset 8
 2709              	.LVL367:
 2710 00de C3       		ret
 2711              	.LVL368:
 2712 00df 90       		.p2align 4,,10
 2713              		.p2align 3
 2714              	.L297:
 2715              		.cfi_restore_state
 2716              		.loc 1 513 0
 2717 00e0 488D7201 		leaq	1(%rdx), %rsi
 2718 00e4 4839DE   		cmpq	%rbx, %rsi
 2719 00e7 72E3     		jb	.L303
 2720              		.loc 1 513 0 is_stmt 0 discriminator 1
 2721 00e9 BF000000 		movl	$.LC27, %edi
 2721      00
 2722 00ee B9030000 		movl	$3, %ecx
 2722      00
 2723 00f3 F3A6     		repz cmpsb
 2724 00f5 75D5     		jne	.L303
 2725              		.loc 1 515 0 is_stmt 1
 2726 00f7 C6420100 		movb	$0, 1(%rdx)
 2727 00fb EBCF     		jmp	.L303
 2728              	.LVL369:
 2729 00fd 0F1F00   		.p2align 4,,10
 2730              		.p2align 3
 2731              	.L293:
 2732              		.loc 1 494 0
 2733 0100 BA000800 		movl	$2048, %edx
 2733      00
 2734 0105 4889DF   		movq	%rbx, %rdi
 2735              	.LVL370:
 2736 0108 E8000000 		call	fl_strlcpy
 2736      00
 2737              	.LVL371:
 2738 010d E932FFFF 		jmp	.L294
 2738      FF
 2739              		.p2align 4,,10
 2740 0112 660F1F44 		.p2align 3
 2740      0000
 2741              	.L318:
 2742              		.loc 1 525 0
 2743 0118 4883C408 		addq	$8, %rsp
 2744              		.cfi_def_cfa_offset 24
 2745              		.loc 1 523 0
 2746 011c 4889EF   		movq	%rbp, %rdi
 2747              		.loc 1 525 0
 2748 011f 5B       		popq	%rbx
 2749              		.cfi_def_cfa_offset 16
 2750 0120 5D       		popq	%rbp
 2751              		.cfi_def_cfa_offset 8
 2752              	.LVL372:
 2753              		.loc 1 523 0
 2754 0121 E9000000 		jmp	_ZN15Fl_File_Chooser6rescanEv
 2754      00
 2755              	.LVL373:
 2756              		.cfi_endproc
 2757              	.LFE719:
 2759              		.section	.text.unlikely._ZN15Fl_File_Chooser9directoryEPKc
 2760              	.LCOLDE28:
 2761              		.section	.text._ZN15Fl_File_Chooser9directoryEPKc
 2762              	.LHOTE28:
 2763              		.section	.text.unlikely._ZN15Fl_File_Chooser17favoritesButtonCBEv,"ax",@progbits
 2764              		.align 2
 2765              	.LCOLDB29:
 2766              		.section	.text._ZN15Fl_File_Chooser17favoritesButtonCBEv,"ax",@progbits
 2767              	.LHOTB29:
 2768              		.align 2
 2769              		.p2align 4,,15
 2770              		.globl	_ZN15Fl_File_Chooser17favoritesButtonCBEv
 2772              	_ZN15Fl_File_Chooser17favoritesButtonCBEv:
 2773              	.LFB720:
 2774              		.loc 1 534 0
 2775              		.cfi_startproc
 2776              	.LVL374:
 2777 0000 55       		pushq	%rbp
 2778              		.cfi_def_cfa_offset 16
 2779              		.cfi_offset 6, -16
 2780 0001 53       		pushq	%rbx
 2781              		.cfi_def_cfa_offset 24
 2782              		.cfi_offset 3, -24
 2783 0002 4889FB   		movq	%rdi, %rbx
 2784 0005 4881EC18 		subq	$2072, %rsp
 2784      080000
 2785              		.cfi_def_cfa_offset 2096
 2786              		.loc 1 534 0
 2787 000c 64488B04 		movq	%fs:40, %rax
 2787      25280000 
 2787      00
 2788 0015 48898424 		movq	%rax, 2056(%rsp)
 2788      08080000 
 2789 001d 31C0     		xorl	%eax, %eax
 2790              		.loc 1 540 0
 2791 001f 488B8728 		movq	6184(%rdi), %rax
 2791      180000
 2792 0026 488B4878 		movq	120(%rax), %rcx
 2793 002a 488B8080 		movq	128(%rax), %rax
 2793      000000
 2794              	.LVL375:
 2795              	.LBB561:
 2796              	.LBB562:
 2797              		.file 8 "fltk-1.3.4-1/FL/Fl_Menu_.H"
   1:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
   2:fltk-1.3.4-1/FL/Fl_Menu_.H **** // "$Id: Fl_Menu_.H 11801 2016-07-09 17:06:46Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
   4:fltk-1.3.4-1/FL/Fl_Menu_.H **** // Menu base class header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
   6:fltk-1.3.4-1/FL/Fl_Menu_.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
   8:fltk-1.3.4-1/FL/Fl_Menu_.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Menu_.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Menu_.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
  12:fltk-1.3.4-1/FL/Fl_Menu_.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
  14:fltk-1.3.4-1/FL/Fl_Menu_.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
  16:fltk-1.3.4-1/FL/Fl_Menu_.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
  18:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  19:fltk-1.3.4-1/FL/Fl_Menu_.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Menu_.H ****    Fl_Menu_ widget . */
  21:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  22:fltk-1.3.4-1/FL/Fl_Menu_.H **** #ifndef Fl_Menu__H
  23:fltk-1.3.4-1/FL/Fl_Menu_.H **** #define Fl_Menu__H
  24:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  25:fltk-1.3.4-1/FL/Fl_Menu_.H **** #ifndef Fl_Widget_H
  26:fltk-1.3.4-1/FL/Fl_Menu_.H **** #include "Fl_Widget.H"
  27:fltk-1.3.4-1/FL/Fl_Menu_.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Menu_.H **** #include "Fl_Menu_Item.H"
  29:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  30:fltk-1.3.4-1/FL/Fl_Menu_.H **** /**
  31:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Base class of all widgets that have a menu in FLTK.
  32:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  33:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Currently FLTK provides you with Fl_Menu_Button, Fl_Menu_Bar, and Fl_Choice.
  34:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  35:fltk-1.3.4-1/FL/Fl_Menu_.H ****   The class contains a pointer to an array of structures of type Fl_Menu_Item.
  36:fltk-1.3.4-1/FL/Fl_Menu_.H ****   The array may either be supplied directly by the user program, or it may
  37:fltk-1.3.4-1/FL/Fl_Menu_.H ****   be "private": a dynamically allocated array managed by the Fl_Menu_.
  38:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  39:fltk-1.3.4-1/FL/Fl_Menu_.H ****   When the user clicks a menu item, value() is set to that item
  40:fltk-1.3.4-1/FL/Fl_Menu_.H ****   and then:
  41:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  42:fltk-1.3.4-1/FL/Fl_Menu_.H ****     - If the Fl_Menu_Item has a callback set, that callback
  43:fltk-1.3.4-1/FL/Fl_Menu_.H ****       is invoked with any userdata configured for it.
  44:fltk-1.3.4-1/FL/Fl_Menu_.H ****       (The Fl_Menu_ widget's callback is NOT invoked.)
  45:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  46:fltk-1.3.4-1/FL/Fl_Menu_.H ****     - For any Fl_Menu_Items that \b don't have a callback set,
  47:fltk-1.3.4-1/FL/Fl_Menu_.H ****       the Fl_Menu_ widget's callback is invoked with any userdata
  48:fltk-1.3.4-1/FL/Fl_Menu_.H ****       configured for it. The callback can determine which item
  49:fltk-1.3.4-1/FL/Fl_Menu_.H ****       was picked using value(), mvalue(), item_pathname(), etc.
  50:fltk-1.3.4-1/FL/Fl_Menu_.H **** */
  51:fltk-1.3.4-1/FL/Fl_Menu_.H **** class FL_EXPORT Fl_Menu_ : public Fl_Widget {
  52:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  53:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Menu_Item *menu_;
  54:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item *value_;
  55:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  56:fltk-1.3.4-1/FL/Fl_Menu_.H **** protected:
  57:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  58:fltk-1.3.4-1/FL/Fl_Menu_.H ****   uchar alloc;			// flag indicates if menu_ is a dynamic copy (=1) or not (=0)
  59:fltk-1.3.4-1/FL/Fl_Menu_.H ****   uchar down_box_;
  60:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Font textfont_;
  61:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Fontsize textsize_;
  62:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Color textcolor_;
  63:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  64:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int item_pathname_(char *name, int namelen, const Fl_Menu_Item *finditem,
  65:fltk-1.3.4-1/FL/Fl_Menu_.H ****                      const Fl_Menu_Item *menu=0) const;
  66:fltk-1.3.4-1/FL/Fl_Menu_.H **** public:
  67:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Menu_(int,int,int,int,const char * =0);
  68:fltk-1.3.4-1/FL/Fl_Menu_.H ****   ~Fl_Menu_();
  69:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  70:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int item_pathname(char *name, int namelen, const Fl_Menu_Item *finditem=0) const;
  71:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item* picked(const Fl_Menu_Item*);
  72:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item* find_item(const char *name);
  73:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item* find_item(Fl_Callback*);
  74:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int find_index(const char *name) const;
  75:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int find_index(const Fl_Menu_Item *item) const;
  76:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int find_index(Fl_Callback *cb) const;
  77:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  78:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**
  79:fltk-1.3.4-1/FL/Fl_Menu_.H ****     Returns the menu item with the entered shortcut (key value).
  80:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  81:fltk-1.3.4-1/FL/Fl_Menu_.H ****     This searches the complete menu() for a shortcut that matches the
  82:fltk-1.3.4-1/FL/Fl_Menu_.H ****     entered key value.  It must be called for a FL_KEYBOARD or FL_SHORTCUT
  83:fltk-1.3.4-1/FL/Fl_Menu_.H ****     event.
  84:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  85:fltk-1.3.4-1/FL/Fl_Menu_.H ****     If a match is found, the menu's callback will be called.
  86:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  87:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \return matched Fl_Menu_Item or NULL.
  88:fltk-1.3.4-1/FL/Fl_Menu_.H ****   */
  89:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item* test_shortcut() {return picked(menu()->test_shortcut());}
  90:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void global();
  91:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  92:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**
  93:fltk-1.3.4-1/FL/Fl_Menu_.H ****     Returns a pointer to the array of Fl_Menu_Items.  This will either be
  94:fltk-1.3.4-1/FL/Fl_Menu_.H ****     the value passed to menu(value) or the private copy.
  95:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \sa size() -- returns the size of the Fl_Menu_Item array.
  96:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  97:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \b Example: How to walk the array:
  98:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \code
  99:fltk-1.3.4-1/FL/Fl_Menu_.H ****     for ( int t=0; t<menubar->size(); t++ ) {                // walk array of items
 100:fltk-1.3.4-1/FL/Fl_Menu_.H ****         const Fl_Menu_Item &item = menubar->menu()[t];       // get each item
 101:fltk-1.3.4-1/FL/Fl_Menu_.H ****         fprintf(stderr, "item #%d -- label=%s, value=%s type=%s\n",
 102:fltk-1.3.4-1/FL/Fl_Menu_.H ****             t,
 103:fltk-1.3.4-1/FL/Fl_Menu_.H ****             item.label() ? item.label() : "(Null)",          // menu terminators have NULL labels
 104:fltk-1.3.4-1/FL/Fl_Menu_.H ****             (item.flags & FL_MENU_VALUE) ? "set" : "clear",  // value of toggle or radio items
 105:fltk-1.3.4-1/FL/Fl_Menu_.H ****             (item.flags & FL_SUBMENU) ? "Submenu" : "Item"); // see if item is a submenu or actual 
 106:fltk-1.3.4-1/FL/Fl_Menu_.H ****     }
 107:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \endcode
 108:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
 109:fltk-1.3.4-1/FL/Fl_Menu_.H ****   */
 110:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item *menu() const {return menu_;}
 111:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void menu(const Fl_Menu_Item *m);
 112:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void copy(const Fl_Menu_Item *m, void* user_data = 0);
 113:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int insert(int index, const char*, int shortcut, Fl_Callback*, void* = 0, int = 0);
 114:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  add(const char*, int shortcut, Fl_Callback*, void* = 0, int = 0); // see src/Fl_Menu_add.cxx
 115:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** See int Fl_Menu_::add(const char* label, int shortcut, Fl_Callback*, void *user_data=0, int f
 116:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  add(const char* a, const char* b, Fl_Callback* c, void* d = 0, int e = 0) {
 117:fltk-1.3.4-1/FL/Fl_Menu_.H ****       return add(a,fl_old_shortcut(b),c,d,e);
 118:fltk-1.3.4-1/FL/Fl_Menu_.H ****   }
 119:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** See int Fl_Menu_::insert(const char* label, int shortcut, Fl_Callback*, void *user_data=0, in
 120:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int insert(int index, const char* a, const char* b, Fl_Callback* c, void* d = 0, int e = 0) {
 121:fltk-1.3.4-1/FL/Fl_Menu_.H ****       return insert(index,a,fl_old_shortcut(b),c,d,e);
 122:fltk-1.3.4-1/FL/Fl_Menu_.H ****   }
 123:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  add(const char *);
 124:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  size() const ;
 125:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void size(int W, int H) { Fl_Widget::size(W, H); }
 126:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void clear();
 127:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int clear_submenu(int index);
 128:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void replace(int,const char *);
 129:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void remove(int);
 130:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Changes the shortcut of item \p i to \p s. */
 131:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void shortcut(int i, int s) {menu_[i].shortcut(s);}
 132:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Sets the flags of item i.  For a list of the flags, see Fl_Menu_Item.  */
 133:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void mode(int i,int fl) {menu_[i].flags = fl;}
 134:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Gets the flags of item i.  For a list of the flags, see Fl_Menu_Item.  */
 135:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  mode(int i) const {return menu_[i].flags;}
 136:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
 137:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Returns a pointer to the last menu item that was picked.  */
 138:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item *mvalue() const {return value_;}
 139:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Returns the index into menu() of the last item chosen by the user.  It is zero initially. */
 140:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int value() const {return value_ ? (int)(value_-menu_) : -1;}
 2798              		.loc 8 140 0
 2799 0031 4885C0   		testq	%rax, %rax
 2800 0034 0F846601 		je	.L332
 2800      0000
 2801 003a 4829C8   		subq	%rcx, %rax
 2802 003d 48BAB76D 		movabsq	$7905747460161236407, %rdx
 2802      DBB66DDB 
 2802      B66D
 2803 0047 48C1F803 		sarq	$3, %rax
 2804 004b 480FAFC2 		imulq	%rdx, %rax
 2805              	.LBE562:
 2806              	.LBE561:
 2807              		.loc 1 542 0
 2808 004f 85C0     		testl	%eax, %eax
 2809 0051 0F849900 		je	.L338
 2809      0000
 2810              		.loc 1 558 0
 2811 0057 83F801   		cmpl	$1, %eax
 2812 005a 0F843101 		je	.L339
 2812      0000
 2813              		.loc 1 561 0
 2814 0060 83F802   		cmpl	$2, %eax
 2815 0063 0F844301 		je	.L326
 2815      0000
 2816 0069 4898     		cltq
 2817 006b 488D14C5 		leaq	0(,%rax,8), %rdx
 2817      00000000 
 2818 0073 48C1E006 		salq	$6, %rax
 2819 0077 4829D0   		subq	%rdx, %rax
 2820              	.L320:
 2821              	.LVL376:
 2822              	.LBB564:
 2823              	.LBB565:
 141:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int value(const Fl_Menu_Item*);
 142:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**
 143:fltk-1.3.4-1/FL/Fl_Menu_.H ****     The value is the index into menu() of the last item chosen by
 144:fltk-1.3.4-1/FL/Fl_Menu_.H ****     the user.  It is zero initially.  You can set it as an integer, or set
 145:fltk-1.3.4-1/FL/Fl_Menu_.H ****     it with a pointer to a menu item.  The set routines return non-zero if
 146:fltk-1.3.4-1/FL/Fl_Menu_.H ****     the new value is different than the old one.
 147:fltk-1.3.4-1/FL/Fl_Menu_.H ****   */
 148:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int value(int i) {return value(menu_+i);}
 149:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Returns the title of the last item chosen.  */
 150:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const char *text() const {return value_ ? value_->text : 0;}
 151:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Returns the title of item i.  */
 152:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const char *text(int i) const {return menu_[i].text;}
 2824              		.loc 8 152 0
 2825 007a 488B3C01 		movq	(%rcx,%rax), %rdi
 2826              	.LVL377:
 2827              	.LBE565:
 2828              	.LBE564:
 2829              	.LBB566:
 2830              	.LBB567:
 2831              		.loc 1 1705 0
 2832 007e 4889E6   		movq	%rsp, %rsi
 2833 0081 4889E2   		movq	%rsp, %rdx
 2834 0084 0FB607   		movzbl	(%rdi), %eax
 2835 0087 84C0     		testb	%al, %al
 2836 0089 7435     		je	.L327
 2837              	.LVL378:
 2838 008b B9FF0700 		movl	$2047, %ecx
 2838      00
 2839 0090 EB0A     		jmp	.L329
 2840              	.LVL379:
 2841              		.p2align 4,,10
 2842 0092 660F1F44 		.p2align 3
 2842      0000
 2843              	.L340:
 2844 0098 84C0     		testb	%al, %al
 2845 009a 7424     		je	.L327
 2846              	.L329:
 2847              	.LVL380:
 2848              		.loc 1 1706 0
 2849 009c 3C5C     		cmpb	$92, %al
 2850 009e 0F94C0   		sete	%al
 2851              		.loc 1 1707 0
 2852 00a1 4883C201 		addq	$1, %rdx
 2853              	.LVL381:
 2854              		.loc 1 1706 0
 2855 00a5 0FB6C0   		movzbl	%al, %eax
 2856 00a8 4801F8   		addq	%rdi, %rax
 2857              	.LVL382:
 2858              		.loc 1 1705 0
 2859 00ab 83E901   		subl	$1, %ecx
 2860              	.LVL383:
 2861              		.loc 1 1707 0
 2862 00ae 440FB600 		movzbl	(%rax), %r8d
 2863 00b2 488D7801 		leaq	1(%rax), %rdi
 2864              	.LVL384:
 2865 00b6 448842FF 		movb	%r8b, -1(%rdx)
 2866              		.loc 1 1705 0
 2867 00ba 0FB64001 		movzbl	1(%rax), %eax
 2868 00be 75D8     		jne	.L340
 2869              	.L327:
 2870              		.loc 1 1711 0
 2871 00c0 C60200   		movb	$0, (%rdx)
 2872              	.LVL385:
 2873              	.LBE567:
 2874              	.LBE566:
 2875              		.loc 1 566 0
 2876 00c3 4889DF   		movq	%rbx, %rdi
 2877 00c6 E8000000 		call	_ZN15Fl_File_Chooser9directoryEPKc
 2877      00
 2878              	.LVL386:
 2879              	.L319:
 2880              		.loc 1 568 0
 2881 00cb 488B8424 		movq	2056(%rsp), %rax
 2881      08080000 
 2882 00d3 64483304 		xorq	%fs:40, %rax
 2882      25280000 
 2882      00
 2883 00dc 0F85E700 		jne	.L341
 2883      0000
 2884 00e2 4881C418 		addq	$2072, %rsp
 2884      080000
 2885              		.cfi_remember_state
 2886              		.cfi_def_cfa_offset 24
 2887 00e9 5B       		popq	%rbx
 2888              		.cfi_def_cfa_offset 16
 2889              	.LVL387:
 2890 00ea 5D       		popq	%rbp
 2891              		.cfi_def_cfa_offset 8
 2892 00eb C3       		ret
 2893              	.LVL388:
 2894 00ec 0F1F4000 		.p2align 4,,10
 2895              		.p2align 3
 2896              	.L338:
 2897              		.cfi_restore_state
 2898              	.LBB568:
 2899              	.LBB569:
 2900              		.loc 1 1720 0
 2901 00f0 BF000000 		movl	$.LC3, %edi
 2901      00
 2902 00f5 E8000000 		call	fl_getenv
 2902      00
 2903              	.LVL389:
 2904              	.LBE569:
 2905              	.LBE568:
 2906              		.loc 1 544 0
 2907 00fa 4885C0   		testq	%rax, %rax
 2908 00fd 488BBB28 		movq	6184(%rbx), %rdi
 2908      180000
 2909 0104 0F84B100 		je	.L322
 2909      0000
 2910              		.loc 1 544 0 is_stmt 0 discriminator 1
 2911 010a E8000000 		call	_ZNK8Fl_Menu_4sizeEv
 2911      00
 2912              	.LVL390:
 2913 010f 448D40FB 		leal	-5(%rax), %r8d
 2914              	.LVL391:
 2915              	.L323:
 2916              	.LBB570:
 2917              	.LBB571:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 2918              		.loc 2 34 0 is_stmt 1
 2919 0113 B9000000 		movl	$.LC4, %ecx
 2919      00
 2920 0118 BA000800 		movl	$2048, %edx
 2920      00
 2921 011d BE010000 		movl	$1, %esi
 2921      00
 2922 0122 4889E7   		movq	%rsp, %rdi
 2923 0125 31C0     		xorl	%eax, %eax
 2924              	.LBE571:
 2925              	.LBE570:
 2926              		.loc 1 549 0
 2927 0127 488D6B10 		leaq	16(%rbx), %rbp
 2928              	.LBB573:
 2929              	.LBB572:
  34:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 2930              		.loc 2 34 0
 2931 012b E8000000 		call	__sprintf_chk
 2931      00
 2932              	.LVL392:
 2933              	.LBE572:
 2934              	.LBE573:
 2935              		.loc 1 549 0
 2936 0130 488B3D00 		movq	_ZN15Fl_File_Chooser6prefs_E(%rip), %rdi
 2936      000000
 2937 0137 4889EA   		movq	%rbp, %rdx
 2938 013a 4889E6   		movq	%rsp, %rsi
 2939 013d E8000000 		call	_ZN14Fl_Preferences3setEPKcS1_
 2939      00
 2940              	.LVL393:
 2941              		.loc 1 550 0
 2942 0142 488B3D00 		movq	_ZN15Fl_File_Chooser6prefs_E(%rip), %rdi
 2942      000000
 2943 0149 E8000000 		call	_ZN14Fl_Preferences5flushEv
 2943      00
 2944              	.LVL394:
 2945              		.loc 1 552 0
 2946 014e 4889EE   		movq	%rbp, %rsi
 2947 0151 4889E7   		movq	%rsp, %rdi
 2948 0154 E8000000 		call	_ZL14quote_pathnamePcPKci.constprop.25
 2948      00
 2949              	.LVL395:
 2950              		.loc 1 553 0
 2951 0159 488BBB28 		movq	6184(%rbx), %rdi
 2951      180000
 2952 0160 4889E6   		movq	%rsp, %rsi
 2953 0163 E8000000 		call	_ZN8Fl_Menu_3addEPKc
 2953      00
 2954              	.LVL396:
 2955              		.loc 1 555 0
 2956 0168 488BBB28 		movq	6184(%rbx), %rdi
 2956      180000
 2957 016f E8000000 		call	_ZNK8Fl_Menu_4sizeEv
 2957      00
 2958              	.LVL397:
 2959 0174 83F868   		cmpl	$104, %eax
 2960 0177 0F8E4EFF 		jle	.L319
 2960      FFFF
 2961 017d 488B8328 		movq	6184(%rbx), %rax
 2961      180000
 2962 0184 488B4078 		movq	120(%rax), %rax
 2963              	.LVL398:
 2964              	.LBB574:
 2965              	.LBB575:
 2966              		.loc 3 348 0
 2967 0188 83482001 		orl	$1, 32(%rax)
 2968              	.LVL399:
 2969 018c E93AFFFF 		jmp	.L319
 2969      FF
 2970              	.LVL400:
 2971              	.L339:
 2972              	.LBE575:
 2973              	.LBE574:
 2974              		.loc 1 560 0
 2975 0191 31F6     		xorl	%esi, %esi
 2976 0193 E8000000 		call	_ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget
 2976      00
 2977              	.LVL401:
 2978 0198 E92EFFFF 		jmp	.L319
 2978      FF
 2979              	.LVL402:
 2980 019d 0F1F00   		.p2align 4,,10
 2981              		.p2align 3
 2982              	.L332:
 2983              	.LBB576:
 2984              	.LBB563:
 140:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int value(const Fl_Menu_Item*);
 2985              		.loc 8 140 0
 2986 01a0 48C7C0C8 		movq	$-56, %rax
 2986      FFFFFF
 2987 01a7 E9CEFEFF 		jmp	.L320
 2987      FF
 2988              	.L326:
 2989              	.LBE563:
 2990              	.LBE576:
 2991              		.loc 1 563 0
 2992 01ac BE000000 		movl	$.LC5, %esi
 2992      00
 2993 01b1 E8000000 		call	_ZN15Fl_File_Chooser9directoryEPKc
 2993      00
 2994              	.LVL403:
 2995 01b6 E910FFFF 		jmp	.L319
 2995      FF
 2996              	.L322:
 2997              		.loc 1 545 0
 2998 01bb E8000000 		call	_ZNK8Fl_Menu_4sizeEv
 2998      00
 2999              	.LVL404:
 3000 01c0 448D40FC 		leal	-4(%rax), %r8d
 3001              	.LVL405:
 3002 01c4 E94AFFFF 		jmp	.L323
 3002      FF
 3003              	.LVL406:
 3004              	.L341:
 3005              		.loc 1 568 0
 3006 01c9 E8000000 		call	__stack_chk_fail
 3006      00
 3007              	.LVL407:
 3008              		.cfi_endproc
 3009              	.LFE720:
 3011              		.section	.text.unlikely._ZN15Fl_File_Chooser17favoritesButtonCBEv
 3012              	.LCOLDE29:
 3013              		.section	.text._ZN15Fl_File_Chooser17favoritesButtonCBEv
 3014              	.LHOTE29:
 3015              		.section	.rodata.str1.1
 3016              	.LC30:
 3017 005d 2F257300 		.string	"/%s"
 3018              		.section	.text.unlikely._ZN15Fl_File_Chooser10fileListCBEv,"ax",@progbits
 3019              		.align 2
 3020              	.LCOLDB32:
 3021              		.section	.text._ZN15Fl_File_Chooser10fileListCBEv,"ax",@progbits
 3022              	.LHOTB32:
 3023              		.align 2
 3024              		.p2align 4,,15
 3025              		.globl	_ZN15Fl_File_Chooser10fileListCBEv
 3027              	_ZN15Fl_File_Chooser10fileListCBEv:
 3028              	.LFB722:
 3029              		.loc 1 701 0
 3030              		.cfi_startproc
 3031              	.LVL408:
 3032 0000 4156     		pushq	%r14
 3033              		.cfi_def_cfa_offset 16
 3034              		.cfi_offset 14, -16
 3035 0002 4155     		pushq	%r13
 3036              		.cfi_def_cfa_offset 24
 3037              		.cfi_offset 13, -24
 3038 0004 4154     		pushq	%r12
 3039              		.cfi_def_cfa_offset 32
 3040              		.cfi_offset 12, -32
 3041 0006 55       		pushq	%rbp
 3042              		.cfi_def_cfa_offset 40
 3043              		.cfi_offset 6, -40
 3044 0007 53       		pushq	%rbx
 3045              		.cfi_def_cfa_offset 48
 3046              		.cfi_offset 3, -48
 3047 0008 4889FB   		movq	%rdi, %rbx
 3048 000b 4881EC10 		subq	$2064, %rsp
 3048      080000
 3049              		.cfi_def_cfa_offset 2112
 3050              		.loc 1 706 0
 3051 0012 488BBF38 		movq	6200(%rdi), %rdi
 3051      180000
 3052              	.LVL409:
 3053              		.loc 1 701 0
 3054 0019 64488B04 		movq	%fs:40, %rax
 3054      25280000 
 3054      00
 3055 0022 48898424 		movq	%rax, 2056(%rsp)
 3055      08080000 
 3056 002a 31C0     		xorl	%eax, %eax
 3057              		.loc 1 706 0
 3058 002c E8000000 		call	_ZNK10Fl_Browser5valueEv
 3058      00
 3059              	.LVL410:
 3060 0031 488BBB38 		movq	6200(%rbx), %rdi
 3060      180000
 3061 0038 89C6     		movl	%eax, %esi
 3062 003a E8000000 		call	_ZNK10Fl_Browser4textEi
 3062      00
 3063              	.LVL411:
 3064              		.loc 1 707 0
 3065 003f 4885C0   		testq	%rax, %rax
 3066 0042 0F842101 		je	.L342
 3066      0000
 3067              		.loc 1 710 0
 3068 0048 807B1000 		cmpb	$0, 16(%rbx)
 3069 004c 0F84BE01 		je	.L391
 3069      0000
 3070              		.loc 1 712 0
 3071 0052 4C8D4B10 		leaq	16(%rbx), %r9
 3072 0056 B9020000 		movl	$2, %ecx
 3072      00
 3073 005b BF000000 		movl	$.LC23, %edi
 3073      00
 3074              	.LBB577:
 3075              	.LBB578:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3076              		.loc 2 65 0
 3077 0060 4989E4   		movq	%rsp, %r12
 3078              	.LBE578:
 3079              	.LBE577:
 3080              		.loc 1 712 0
 3081 0063 4C89CE   		movq	%r9, %rsi
 3082 0066 F3A6     		repz cmpsb
 3083 0068 0F97C1   		seta	%cl
 3084 006b 0F92C2   		setb	%dl
 3085 006e 38D1     		cmpb	%dl, %cl
 3086 0070 0F841A01 		je	.L392
 3086      0000
 3087              	.LVL412:
 3088              	.LBB580:
 3089              	.LBB581:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3090              		.loc 2 65 0
 3091 0076 4883EC08 		subq	$8, %rsp
 3092              		.cfi_def_cfa_offset 2120
 3093              	.LVL413:
 3094 007a BE000800 		movl	$2048, %esi
 3094      00
 3095 007f 4C89E7   		movq	%r12, %rdi
 3096 0082 50       		pushq	%rax
 3097              		.cfi_def_cfa_offset 2128
 3098 0083 41B80000 		movl	$.LC8, %r8d
 3098      0000
 3099 0089 B9000800 		movl	$2048, %ecx
 3099      00
 3100 008e BA010000 		movl	$1, %edx
 3100      00
 3101 0093 31C0     		xorl	%eax, %eax
 3102              	.LVL414:
 3103 0095 E8000000 		call	__snprintf_chk
 3103      00
 3104              	.LVL415:
 3105 009a 5E       		popq	%rsi
 3106              		.cfi_def_cfa_offset 2120
 3107 009b 5F       		popq	%rdi
 3108              		.cfi_def_cfa_offset 2112
 3109              	.LVL416:
 3110              	.L345:
 3111              	.LBE581:
 3112              	.LBE580:
 3113              	.LBB582:
 3114              		.loc 1 718 0
 3115 009c 8B0D0000 		movl	_ZN2Fl8e_clicksE(%rip), %ecx
 3115      0000
 3116              	.LBB583:
 3117              		.loc 1 746 0
 3118 00a2 4C89E2   		movq	%r12, %rdx
 3119              	.LBE583:
 3120              		.loc 1 718 0
 3121 00a5 85C9     		testl	%ecx, %ecx
 3122 00a7 0F851601 		jne	.L393
 3122      0000
 3123              	.L381:
 3124              	.LBB590:
 3125              		.loc 1 746 0
 3126 00ad 8B0A     		movl	(%rdx), %ecx
 3127 00af 4883C204 		addq	$4, %rdx
 3128 00b3 8D81FFFE 		leal	-16843009(%rcx), %eax
 3128      FEFE
 3129 00b9 F7D1     		notl	%ecx
 3130 00bb 21C8     		andl	%ecx, %eax
 3131 00bd 25808080 		andl	$-2139062144, %eax
 3131      80
 3132 00c2 74E9     		je	.L381
 3133 00c4 89C1     		movl	%eax, %ecx
 3134 00c6 C1E910   		shrl	$16, %ecx
 3135 00c9 A9808000 		testl	$32896, %eax
 3135      00
 3136 00ce 0F44C1   		cmove	%ecx, %eax
 3137 00d1 488D4A02 		leaq	2(%rdx), %rcx
 3138 00d5 480F44D1 		cmove	%rcx, %rdx
 3139 00d9 89C1     		movl	%eax, %ecx
 3140 00db 00C1     		addb	%al, %cl
 3141              	.LBB584:
 3142              		.loc 1 748 0
 3143 00dd 8B831018 		movl	6160(%rbx), %eax
 3143      0000
 3144              	.LBE584:
 3145              		.loc 1 746 0
 3146 00e3 4883DA03 		sbbq	$3, %rdx
 3147 00e7 4C8D6AFF 		leaq	-1(%rdx), %r13
 3148              	.LVL417:
 3149              	.LBB588:
 3150              		.loc 1 748 0
 3151 00eb 83E005   		andl	$5, %eax
 3152 00ee 83F801   		cmpl	$1, %eax
 3153 00f1 0F846901 		je	.L394
 3153      0000
 3154              	.L353:
 3155              	.LBE588:
 3156              		.loc 1 774 0
 3157 00f7 41807D00 		cmpb	$47, 0(%r13)
 3157      2F
 3158 00fc 0F844E01 		je	.L395
 3158      0000
 3159              	.L361:
 3160              		.loc 1 777 0
 3161 0102 488BBB58 		movq	6232(%rbx), %rdi
 3161      180000
 3162 0109 4C89E6   		movq	%r12, %rsi
 3163 010c E8000000 		call	_ZN13Fl_File_Input5valueEPKc
 3163      00
 3164              	.LVL418:
 3165              		.loc 1 780 0
 3166 0111 4889DE   		movq	%rbx, %rsi
 3167 0114 BF000000 		movl	$_ZN15Fl_File_Chooser9previewCBEPS_, %edi
 3167      00
 3168 0119 E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 3168      00
 3169              	.LVL419:
 3170              		.loc 1 781 0
 3171 011e F20F1005 		movsd	.LC31(%rip), %xmm0
 3171      00000000 
 3172 0126 4889DE   		movq	%rbx, %rsi
 3173 0129 BF000000 		movl	$_ZN15Fl_File_Chooser9previewCBEPS_, %edi
 3173      00
 3174 012e E8000000 		call	_ZN2Fl11add_timeoutEdPFvPvES0_
 3174      00
 3175              	.LVL420:
 3176              		.loc 1 784 0
 3177 0133 488B03   		movq	(%rbx), %rax
 3178 0136 4885C0   		testq	%rax, %rax
 3179 0139 7409     		je	.L362
 3180              		.loc 1 784 0 is_stmt 0 discriminator 1
 3181 013b 488B7308 		movq	8(%rbx), %rsi
 3182 013f 4889DF   		movq	%rbx, %rdi
 3183 0142 FFD0     		call	*%rax
 3184              	.LVL421:
 3185              	.L362:
 3186              		.loc 1 787 0 is_stmt 1
 3187 0144 4C89E7   		movq	%r12, %rdi
 3188 0147 E8000000 		call	_Z24_fl_filename_isdir_quickPKc
 3188      00
 3189              	.LVL422:
 3190 014c 85C0     		testl	%eax, %eax
 3191 014e 740D     		je	.L363
 3192              		.loc 1 787 0 is_stmt 0 discriminator 2
 3193 0150 F6831018 		testb	$4, 6160(%rbx)
 3193      000004
 3194 0157 0F849B00 		je	.L396
 3194      0000
 3195              	.L363:
 3196              		.loc 1 788 0 is_stmt 1
 3197 015d 488BBB60 		movq	6240(%rbx), %rdi
 3197      180000
 3198 0164 E8000000 		call	_ZN9Fl_Widget8activateEv
 3198      00
 3199              	.LVL423:
 3200              	.L342:
 3201              	.LBE590:
 3202              	.LBE582:
 3203              		.loc 1 792 0
 3204 0169 488B8424 		movq	2056(%rsp), %rax
 3204      08080000 
 3205 0171 64483304 		xorq	%fs:40, %rax
 3205      25280000 
 3205      00
 3206 017a 0F859A01 		jne	.L397
 3206      0000
 3207 0180 4881C410 		addq	$2064, %rsp
 3207      080000
 3208              		.cfi_remember_state
 3209              		.cfi_def_cfa_offset 48
 3210 0187 5B       		popq	%rbx
 3211              		.cfi_def_cfa_offset 40
 3212              	.LVL424:
 3213 0188 5D       		popq	%rbp
 3214              		.cfi_def_cfa_offset 32
 3215 0189 415C     		popq	%r12
 3216              		.cfi_def_cfa_offset 24
 3217 018b 415D     		popq	%r13
 3218              		.cfi_def_cfa_offset 16
 3219 018d 415E     		popq	%r14
 3220              		.cfi_def_cfa_offset 8
 3221 018f C3       		ret
 3222              	.LVL425:
 3223              		.p2align 4,,10
 3224              		.p2align 3
 3225              	.L392:
 3226              		.cfi_restore_state
 3227              	.LBB596:
 3228              	.LBB579:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3229              		.loc 2 65 0
 3230 0190 4989C1   		movq	%rax, %r9
 3231 0193 B9000800 		movl	$2048, %ecx
 3231      00
 3232 0198 BA010000 		movl	$1, %edx
 3232      00
 3233 019d 31C0     		xorl	%eax, %eax
 3234              	.LVL426:
 3235 019f 41B80000 		movl	$.LC30, %r8d
 3235      0000
 3236 01a5 BE000800 		movl	$2048, %esi
 3236      00
 3237 01aa 4889E7   		movq	%rsp, %rdi
 3238 01ad E8000000 		call	__snprintf_chk
 3238      00
 3239              	.LVL427:
 3240              	.LBE579:
 3241              	.LBE596:
 3242              	.LBB597:
 3243              		.loc 1 718 0
 3244 01b2 8B0D0000 		movl	_ZN2Fl8e_clicksE(%rip), %ecx
 3244      0000
 3245              	.LBB591:
 3246              		.loc 1 746 0
 3247 01b8 4C89E2   		movq	%r12, %rdx
 3248              	.LBE591:
 3249              		.loc 1 718 0
 3250 01bb 85C9     		testl	%ecx, %ecx
 3251 01bd 0F84EAFE 		je	.L381
 3251      FFFF
 3252              	.LVL428:
 3253              	.L393:
 3254              		.loc 1 723 0
 3255 01c3 4C89E7   		movq	%r12, %rdi
 3256 01c6 E8000000 		call	_Z24_fl_filename_isdir_quickPKc
 3256      00
 3257              	.LVL429:
 3258 01cb 85C0     		testl	%eax, %eax
 3259 01cd 7561     		jne	.L398
 3260              		.loc 1 738 0
 3261 01cf 488BBB18 		movq	6168(%rbx), %rdi
 3261      180000
 3262 01d6 488B07   		movq	(%rdi), %rax
 3263 01d9 FF5030   		call	*48(%rax)
 3264              	.LVL430:
 3265              		.loc 1 739 0
 3266 01dc 488B03   		movq	(%rbx), %rax
 3267 01df 4885C0   		testq	%rax, %rax
 3268 01e2 7485     		je	.L342
 3269              		.loc 1 739 0 is_stmt 0 discriminator 1
 3270 01e4 488B7308 		movq	8(%rbx), %rsi
 3271 01e8 4889DF   		movq	%rbx, %rdi
 3272 01eb FFD0     		call	*%rax
 3273              	.LVL431:
 3274 01ed E977FFFF 		jmp	.L342
 3274      FF
 3275              	.LVL432:
 3276              		.p2align 4,,10
 3277 01f2 660F1F44 		.p2align 3
 3277      0000
 3278              	.L396:
 3279              	.LBB592:
 3280              		.loc 1 790 0 is_stmt 1
 3281 01f8 488BBB60 		movq	6240(%rbx), %rdi
 3281      180000
 3282 01ff E8000000 		call	_ZN9Fl_Widget10deactivateEv
 3282      00
 3283              	.LVL433:
 3284 0204 E960FFFF 		jmp	.L342
 3284      FF
 3285              	.LVL434:
 3286 0209 0F1F8000 		.p2align 4,,10
 3286      000000
 3287              		.p2align 3
 3288              	.L391:
 3289              	.LBE592:
 3290              	.LBE597:
 3291              		.loc 1 711 0
 3292 0210 BA000800 		movl	$2048, %edx
 3292      00
 3293 0215 4889C6   		movq	%rax, %rsi
 3294 0218 4889E7   		movq	%rsp, %rdi
 3295 021b 4989E4   		movq	%rsp, %r12
 3296 021e E8000000 		call	fl_strlcpy
 3296      00
 3297              	.LVL435:
 3298 0223 E974FEFF 		jmp	.L345
 3298      FF
 3299 0228 0F1F8400 		.p2align 4,,10
 3299      00000000 
 3300              		.p2align 3
 3301              	.L398:
 3302              	.LBB598:
 3303              		.loc 1 727 0
 3304 0230 4C89E6   		movq	%r12, %rsi
 3305 0233 4889DF   		movq	%rbx, %rdi
 3306 0236 E8000000 		call	_ZN15Fl_File_Chooser9directoryEPKc
 3306      00
 3307              	.LVL436:
 3308              	.LBB593:
 3309              	.LBB594:
 3310              		.file 9 "fltk-1.3.4-1/FL/Fl.H"
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
 3311              		.loc 9 653 0
 3312 023b C7050000 		movl	$-1, _ZN2Fl8e_clicksE(%rip)
 3312      0000FFFF 
 3312      FFFF
 3313 0245 E91FFFFF 		jmp	.L342
 3313      FF
 3314              	.LVL437:
 3315 024a 660F1F44 		.p2align 4,,10
 3315      0000
 3316              		.p2align 3
 3317              	.L395:
 3318              	.LBE594:
 3319              	.LBE593:
 3320              	.LBB595:
 3321              		.loc 1 774 0 discriminator 1
 3322 0250 41C64500 		movb	$0, 0(%r13)
 3322      00
 3323 0255 E9A8FEFF 		jmp	.L361
 3323      FF
 3324 025a 660F1F44 		.p2align 4,,10
 3324      0000
 3325              		.p2align 3
 3326              	.L394:
 3327              	.LBB589:
 3328              	.LBB585:
 3329              		.loc 1 749 0
 3330 0260 41807D00 		cmpb	$47, 0(%r13)
 3330      2F
 3331              	.LBB586:
 3332              		.loc 1 751 0
 3333 0265 488BBB38 		movq	6200(%rbx), %rdi
 3333      180000
 3334              	.LBE586:
 3335              		.loc 1 749 0
 3336 026c 747F     		je	.L389
 3337              	.LVL438:
 3338              	.LBB587:
 3339              		.loc 1 758 0 discriminator 1
 3340 026e 8B878402 		movl	644(%rdi), %eax
 3340      0000
 3341 0274 BD010000 		movl	$1, %ebp
 3341      00
 3342 0279 85C0     		testl	%eax, %eax
 3343 027b 7F21     		jg	.L379
 3344 027d E980FEFF 		jmp	.L361
 3344      FF
 3345              	.LVL439:
 3346              		.p2align 4,,10
 3347 0282 660F1F44 		.p2align 3
 3347      0000
 3348              	.L367:
 3349              		.loc 1 758 0 is_stmt 0
 3350 0288 488BBB38 		movq	6200(%rbx), %rdi
 3350      180000
 3351 028f 83C501   		addl	$1, %ebp
 3352              	.LVL440:
 3353 0292 3BAF8402 		cmpl	644(%rdi), %ebp
 3353      0000
 3354 0298 0F8F59FE 		jg	.L353
 3354      FFFF
 3355              	.LVL441:
 3356              	.L379:
 3357              		.loc 1 759 0 is_stmt 1
 3358 029e E8000000 		call	_ZNK10Fl_Browser5valueEv
 3358      00
 3359              	.LVL442:
 3360 02a3 39E8     		cmpl	%ebp, %eax
 3361 02a5 74E1     		je	.L367
 3362              		.loc 1 759 0 is_stmt 0 discriminator 1
 3363 02a7 488BBB38 		movq	6200(%rbx), %rdi
 3363      180000
 3364 02ae 89EE     		movl	%ebp, %esi
 3365 02b0 E8000000 		call	_ZNK10Fl_Browser8selectedEi
 3365      00
 3366              	.LVL443:
 3367 02b5 85C0     		testl	%eax, %eax
 3368 02b7 74CF     		je	.L367
 3369              		.loc 1 760 0 is_stmt 1
 3370 02b9 488BBB38 		movq	6200(%rbx), %rdi
 3370      180000
 3371 02c0 89EE     		movl	%ebp, %esi
 3372 02c2 E8000000 		call	_ZNK10Fl_Browser4textEi
 3372      00
 3373              	.LVL444:
 3374 02c7 4989C6   		movq	%rax, %r14
 3375              	.LVL445:
 3376              		.loc 1 761 0
 3377 02ca 4889C7   		movq	%rax, %rdi
 3378 02cd E8000000 		call	strlen
 3378      00
 3379              	.LVL446:
 3380              		.loc 1 762 0
 3381 02d2 41807C06 		cmpb	$47, -1(%r14,%rax)
 3381      FF2F
 3382 02d8 75AE     		jne	.L367
 3383              		.loc 1 766 0
 3384 02da 488BBB38 		movq	6200(%rbx), %rdi
 3384      180000
 3385              	.LVL447:
 3386 02e1 39AF8402 		cmpl	%ebp, 644(%rdi)
 3386      0000
 3387 02e7 0F8C0AFE 		jl	.L353
 3387      FFFF
 3388              	.LVL448:
 3389              	.L389:
 3390              		.loc 1 767 0
 3391 02ed E8000000 		call	_ZNK10Fl_Browser5valueEv
 3391      00
 3392              	.LVL449:
 3393              		.loc 1 768 0
 3394 02f2 488BBB38 		movq	6200(%rbx), %rdi
 3394      180000
 3395 02f9 31F6     		xorl	%esi, %esi
 3396              		.loc 1 767 0
 3397 02fb 89C5     		movl	%eax, %ebp
 3398              	.LVL450:
 3399              		.loc 1 768 0
 3400 02fd E8000000 		call	_ZN11Fl_Browser_8deselectEi
 3400      00
 3401              	.LVL451:
 3402              		.loc 1 769 0
 3403 0302 488BBB38 		movq	6200(%rbx), %rdi
 3403      180000
 3404 0309 BA010000 		movl	$1, %edx
 3404      00
 3405 030e 89EE     		movl	%ebp, %esi
 3406 0310 E8000000 		call	_ZN10Fl_Browser6selectEii
 3406      00
 3407              	.LVL452:
 3408 0315 E9DDFDFF 		jmp	.L353
 3408      FF
 3409              	.LVL453:
 3410              	.L397:
 3411              	.LBE587:
 3412              	.LBE585:
 3413              	.LBE589:
 3414              	.LBE595:
 3415              	.LBE598:
 3416              		.loc 1 792 0
 3417 031a E8000000 		call	__stack_chk_fail
 3417      00
 3418              	.LVL454:
 3419              		.cfi_endproc
 3420              	.LFE722:
 3422              		.section	.text.unlikely._ZN15Fl_File_Chooser10fileListCBEv
 3423              	.LCOLDE32:
 3424              		.section	.text._ZN15Fl_File_Chooser10fileListCBEv
 3425              	.LHOTE32:
 3426              		.section	.rodata.str1.1
 3427              	.LC33:
 3428 0061 257300   		.string	"%s"
 3429              		.section	.text.unlikely._ZN15Fl_File_Chooser6newdirEv,"ax",@progbits
 3430              		.align 2
 3431              	.LCOLDB34:
 3432              		.section	.text._ZN15Fl_File_Chooser6newdirEv,"ax",@progbits
 3433              	.LHOTB34:
 3434              		.align 2
 3435              		.p2align 4,,15
 3436              		.globl	_ZN15Fl_File_Chooser6newdirEv
 3438              	_ZN15Fl_File_Chooser6newdirEv:
 3439              	.LFB725:
 3440              		.loc 1 1059 0
 3441              		.cfi_startproc
 3442              	.LVL455:
 3443 0000 55       		pushq	%rbp
 3444              		.cfi_def_cfa_offset 16
 3445              		.cfi_offset 6, -16
 3446 0001 53       		pushq	%rbx
 3447              		.cfi_def_cfa_offset 24
 3448              		.cfi_offset 3, -24
 3449              		.loc 1 1065 0
 3450 0002 31F6     		xorl	%esi, %esi
 3451              		.loc 1 1059 0
 3452 0004 4889FD   		movq	%rdi, %rbp
 3453              		.loc 1 1065 0
 3454 0007 BF000000 		movl	$.LC33, %edi
 3454      00
 3455              	.LVL456:
 3456              		.loc 1 1059 0
 3457 000c 4881EC18 		subq	$2072, %rsp
 3457      080000
 3458              		.cfi_def_cfa_offset 2096
 3459              		.loc 1 1065 0
 3460 0013 488B1500 		movq	_ZN15Fl_File_Chooser19new_directory_labelE(%rip), %rdx
 3460      000000
 3461              		.loc 1 1059 0
 3462 001a 64488B04 		movq	%fs:40, %rax
 3462      25280000 
 3462      00
 3463 0023 48898424 		movq	%rax, 2056(%rsp)
 3463      08080000 
 3464 002b 31C0     		xorl	%eax, %eax
 3465              		.loc 1 1065 0
 3466 002d E8000000 		call	_Z8fl_inputPKcS0_z
 3466      00
 3467              	.LVL457:
 3468 0032 4885C0   		testq	%rax, %rax
 3469 0035 746B     		je	.L399
 3470              		.loc 1 1072 0
 3471 0037 0FB610   		movzbl	(%rax), %edx
 3472              	.LBB599:
 3473              	.LBB600:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3474              		.loc 2 65 0
 3475 003a 4889E3   		movq	%rsp, %rbx
 3476              	.LBE600:
 3477              	.LBE599:
 3478              		.loc 1 1072 0
 3479 003d 80FA2F   		cmpb	$47, %dl
 3480 0040 747E     		je	.L401
 3481 0042 80FA5C   		cmpb	$92, %dl
 3482 0045 7479     		je	.L401
 3483              	.LVL458:
 3484              	.LBB602:
 3485              	.LBB601:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 3486              		.loc 2 65 0
 3487 0047 4883EC08 		subq	$8, %rsp
 3488              		.cfi_def_cfa_offset 2104
 3489 004b 4C8D4D10 		leaq	16(%rbp), %r9
 3490 004f BA010000 		movl	$1, %edx
 3490      00
 3491 0054 50       		pushq	%rax
 3492              		.cfi_def_cfa_offset 2112
 3493 0055 41B80000 		movl	$.LC8, %r8d
 3493      0000
 3494 005b B9000800 		movl	$2048, %ecx
 3494      00
 3495 0060 BE000800 		movl	$2048, %esi
 3495      00
 3496 0065 4889DF   		movq	%rbx, %rdi
 3497 0068 31C0     		xorl	%eax, %eax
 3498              	.LVL459:
 3499 006a E8000000 		call	__snprintf_chk
 3499      00
 3500              	.LVL460:
 3501 006f 58       		popq	%rax
 3502              		.cfi_def_cfa_offset 2104
 3503 0070 5A       		popq	%rdx
 3504              		.cfi_def_cfa_offset 2096
 3505              	.LVL461:
 3506              	.L402:
 3507              	.LBE601:
 3508              	.LBE602:
 3509              		.loc 1 1082 0
 3510 0071 BEFF0100 		movl	$511, %esi
 3510      00
 3511 0076 4889DF   		movq	%rbx, %rdi
 3512 0079 E8000000 		call	mkdir
 3512      00
 3513              	.LVL462:
 3514 007e 85C0     		testl	%eax, %eax
 3515 0080 7456     		je	.L403
 3516              		.loc 1 1084 0
 3517 0082 E8000000 		call	__errno_location
 3517      00
 3518              	.LVL463:
 3519 0087 8B38     		movl	(%rax), %edi
 3520 0089 83FF11   		cmpl	$17, %edi
 3521 008c 744A     		je	.L403
 3522              		.loc 1 1086 0
 3523 008e E8000000 		call	strerror
 3523      00
 3524              	.LVL464:
 3525 0093 BF000000 		movl	$.LC33, %edi
 3525      00
 3526 0098 4889C6   		movq	%rax, %rsi
 3527 009b 31C0     		xorl	%eax, %eax
 3528 009d E8000000 		call	_Z8fl_alertPKcz
 3528      00
 3529              	.LVL465:
 3530              	.L399:
 3531              		.loc 1 1092 0
 3532 00a2 488B8424 		movq	2056(%rsp), %rax
 3532      08080000 
 3533 00aa 64483304 		xorq	%fs:40, %rax
 3533      25280000 
 3533      00
 3534 00b3 7530     		jne	.L422
 3535 00b5 4881C418 		addq	$2072, %rsp
 3535      080000
 3536              		.cfi_remember_state
 3537              		.cfi_def_cfa_offset 24
 3538 00bc 5B       		popq	%rbx
 3539              		.cfi_def_cfa_offset 16
 3540 00bd 5D       		popq	%rbp
 3541              		.cfi_def_cfa_offset 8
 3542              	.LVL466:
 3543 00be C3       		ret
 3544              	.LVL467:
 3545 00bf 90       		.p2align 4,,10
 3546              		.p2align 3
 3547              	.L401:
 3548              		.cfi_restore_state
 3549              		.loc 1 1076 0
 3550 00c0 BA000800 		movl	$2048, %edx
 3550      00
 3551 00c5 4889C6   		movq	%rax, %rsi
 3552 00c8 4889DF   		movq	%rbx, %rdi
 3553 00cb E8000000 		call	fl_strlcpy
 3553      00
 3554              	.LVL468:
 3555 00d0 EB9F     		jmp	.L402
 3556              		.p2align 4,,10
 3557 00d2 660F1F44 		.p2align 3
 3557      0000
 3558              	.L403:
 3559              		.loc 1 1091 0 discriminator 1
 3560 00d8 4889DE   		movq	%rbx, %rsi
 3561 00db 4889EF   		movq	%rbp, %rdi
 3562 00de E8000000 		call	_ZN15Fl_File_Chooser9directoryEPKc
 3562      00
 3563              	.LVL469:
 3564 00e3 EBBD     		jmp	.L399
 3565              	.L422:
 3566              		.loc 1 1092 0
 3567 00e5 E8000000 		call	__stack_chk_fail
 3567      00
 3568              	.LVL470:
 3569              		.cfi_endproc
 3570              	.LFE725:
 3572              		.section	.text.unlikely._ZN15Fl_File_Chooser6newdirEv
 3573              	.LCOLDE34:
 3574              		.section	.text._ZN15Fl_File_Chooser6newdirEv
 3575              	.LHOTE34:
 3576              		.section	.text.unlikely._ZN15Fl_File_Chooser5valueEPKc.part.24,"ax",@progbits
 3577              		.align 2
 3578              	.LCOLDB35:
 3579              		.section	.text._ZN15Fl_File_Chooser5valueEPKc.part.24,"ax",@progbits
 3580              	.LHOTB35:
 3581              		.align 2
 3582              		.p2align 4,,15
 3584              	_ZN15Fl_File_Chooser5valueEPKc.part.24:
 3585              	.LFB766:
 3586              		.loc 1 1523 0
 3587              		.cfi_startproc
 3588              	.LVL471:
 3589 0000 4155     		pushq	%r13
 3590              		.cfi_def_cfa_offset 16
 3591              		.cfi_offset 13, -16
 3592 0002 4154     		pushq	%r12
 3593              		.cfi_def_cfa_offset 24
 3594              		.cfi_offset 12, -24
 3595 0004 4889F2   		movq	%rsi, %rdx
 3596 0007 55       		pushq	%rbp
 3597              		.cfi_def_cfa_offset 32
 3598              		.cfi_offset 6, -32
 3599 0008 53       		pushq	%rbx
 3600              		.cfi_def_cfa_offset 40
 3601              		.cfi_offset 3, -40
 3602              		.loc 1 1558 0
 3603 0009 BE000800 		movl	$2048, %esi
 3603      00
 3604              	.LVL472:
 3605              		.loc 1 1523 0
 3606 000e 4889FD   		movq	%rdi, %rbp
 3607 0011 4881EC18 		subq	$2072, %rsp
 3607      080000
 3608              		.cfi_def_cfa_offset 2112
 3609              		.loc 1 1558 0
 3610 0018 4889E7   		movq	%rsp, %rdi
 3611              	.LVL473:
 3612 001b 4889E3   		movq	%rsp, %rbx
 3613              		.loc 1 1523 0
 3614 001e 64488B04 		movq	%fs:40, %rax
 3614      25280000 
 3614      00
 3615 0027 48898424 		movq	%rax, 2056(%rsp)
 3615      08080000 
 3616 002f 31C0     		xorl	%eax, %eax
 3617              		.loc 1 1558 0
 3618 0031 E8000000 		call	_Z20fl_filename_absolutePciPKc
 3618      00
 3619              	.LVL474:
 3620              	.LBB603:
 3621              	.LBB604:
 3622              		.file 10 "/usr/include/string.h"
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
 227:/usr/include/string.h **** }
 228:/usr/include/string.h **** # endif
 229:/usr/include/string.h **** }
 230:/usr/include/string.h **** #else
 231:/usr/include/string.h **** extern char *strchr (const char *__s, int __c)
 232:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 233:/usr/include/string.h **** #endif
 234:/usr/include/string.h **** /* Find the last occurrence of C in S.  */
 235:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 236:/usr/include/string.h **** extern "C++"
 237:/usr/include/string.h **** {
 238:/usr/include/string.h **** extern char *strrchr (char *__s, int __c)
 239:/usr/include/string.h ****      __THROW __asm ("strrchr") __attribute_pure__ __nonnull ((1));
 240:/usr/include/string.h **** extern const char *strrchr (const char *__s, int __c)
 241:/usr/include/string.h ****      __THROW __asm ("strrchr") __attribute_pure__ __nonnull ((1));
 242:/usr/include/string.h **** 
 243:/usr/include/string.h **** # ifdef __OPTIMIZE__
 244:/usr/include/string.h **** __extern_always_inline char *
 245:/usr/include/string.h **** strrchr (char *__s, int __c) __THROW
 246:/usr/include/string.h **** {
 247:/usr/include/string.h ****   return __builtin_strrchr (__s, __c);
 3623              		.loc 10 247 0
 3624 0036 BE2F0000 		movl	$47, %esi
 3624      00
 3625 003b 4889E7   		movq	%rsp, %rdi
 3626 003e E8000000 		call	strrchr
 3626      00
 3627              	.LVL475:
 3628              	.LBE604:
 3629              	.LBE603:
 3630              		.loc 1 1560 0
 3631 0043 4885C0   		testq	%rax, %rax
 3632 0046 0F846401 		je	.L424
 3632      0000
 3633              		.loc 1 1562 0
 3634 004c 4889E7   		movq	%rsp, %rdi
 3635 004f 4989C4   		movq	%rax, %r12
 3636 0052 E8000000 		call	_Z17fl_filename_isdirPKc
 3636      00
 3637              	.LVL476:
 3638 0057 85C0     		testl	%eax, %eax
 3639 0059 0F842901 		je	.L443
 3639      0000
 3640              	.L425:
 3641              	.LVL477:
 3642              		.loc 1 1564 0
 3643 005f 4889DE   		movq	%rbx, %rsi
 3644 0062 4889EF   		movq	%rbp, %rdi
 3645 0065 E8000000 		call	_ZN15Fl_File_Chooser9directoryEPKc
 3645      00
 3646              	.LVL478:
 3647              		.loc 1 1565 0
 3648 006a 41803C24 		cmpb	$47, (%r12)
 3648      2F
 3649 006f 0F842B01 		je	.L444
 3649      0000
 3650              		.loc 1 1572 0
 3651 0075 4939DC   		cmpq	%rbx, %r12
 3652 0078 7606     		jbe	.L426
 3653 007a 41C64424 		movb	$47, -1(%r12)
 3653      FF2F
 3654              	.LVL479:
 3655              	.L426:
 3656              		.loc 1 1574 0
 3657 0080 488BBD58 		movq	6232(%rbp), %rdi
 3657      180000
 3658 0087 4889DE   		movq	%rbx, %rsi
 3659 008a E8000000 		call	_ZN13Fl_File_Input5valueEPKc
 3659      00
 3660              	.LVL480:
 3661              		.loc 1 1575 0
 3662 008f 4889DA   		movq	%rbx, %rdx
 3663              	.L427:
 3664 0092 8B0A     		movl	(%rdx), %ecx
 3665 0094 4883C204 		addq	$4, %rdx
 3666 0098 8D81FFFE 		leal	-16843009(%rcx), %eax
 3666      FEFE
 3667 009e F7D1     		notl	%ecx
 3668 00a0 21C8     		andl	%ecx, %eax
 3669 00a2 25808080 		andl	$-2139062144, %eax
 3669      80
 3670 00a7 74E9     		je	.L427
 3671 00a9 89C1     		movl	%eax, %ecx
 3672 00ab 488BBD58 		movq	6232(%rbp), %rdi
 3672      180000
 3673 00b2 C1E910   		shrl	$16, %ecx
 3674 00b5 A9808000 		testl	$32896, %eax
 3674      00
 3675 00ba 0F44C1   		cmove	%ecx, %eax
 3676 00bd 488D4A02 		leaq	2(%rdx), %rcx
 3677 00c1 480F44D1 		cmove	%rcx, %rdx
 3678 00c5 89C1     		movl	%eax, %ecx
 3679 00c7 00C1     		addb	%al, %cl
 3680 00c9 4883DA03 		sbbq	$3, %rdx
 3681 00cd 31F6     		xorl	%esi, %esi
 3682 00cf 4829DA   		subq	%rbx, %rdx
 3683              		.loc 1 1584 0
 3684 00d2 BB010000 		movl	$1, %ebx
 3684      00
 3685              		.loc 1 1575 0
 3686 00d7 E8000000 		call	_ZN9Fl_Input_8positionEii
 3686      00
 3687              	.LVL481:
 3688              		.loc 1 1576 0
 3689 00dc 488BBD60 		movq	6240(%rbp), %rdi
 3689      180000
 3690 00e3 E8000000 		call	_ZN9Fl_Widget8activateEv
 3690      00
 3691              	.LVL482:
 3692              		.loc 1 1579 0
 3693 00e8 488BBD38 		movq	6200(%rbp), %rdi
 3693      180000
 3694              		.loc 1 1581 0
 3695 00ef 31F6     		xorl	%esi, %esi
 3696 00f1 448BAF84 		movl	644(%rdi), %r13d
 3696      020000
 3697              	.LVL483:
 3698 00f8 E8000000 		call	_ZN11Fl_Browser_8deselectEi
 3698      00
 3699              	.LVL484:
 3700              		.loc 1 1582 0
 3701 00fd 488BBD38 		movq	6200(%rbp), %rdi
 3701      180000
 3702 0104 E8000000 		call	_ZN9Fl_Widget6redrawEv
 3702      00
 3703              	.LVL485:
 3704              		.loc 1 1584 0
 3705 0109 4585ED   		testl	%r13d, %r13d
 3706 010c 7F32     		jg	.L438
 3707              	.LVL486:
 3708 010e 6690     		.p2align 4,,10
 3709              		.p2align 3
 3710              	.L423:
 3711              		.loc 1 1595 0
 3712 0110 488B8424 		movq	2056(%rsp), %rax
 3712      08080000 
 3713 0118 64483304 		xorq	%fs:40, %rax
 3713      25280000 
 3713      00
 3714 0121 0F859E00 		jne	.L445
 3714      0000
 3715 0127 4881C418 		addq	$2072, %rsp
 3715      080000
 3716              		.cfi_remember_state
 3717              		.cfi_def_cfa_offset 40
 3718 012e 5B       		popq	%rbx
 3719              		.cfi_def_cfa_offset 32
 3720 012f 5D       		popq	%rbp
 3721              		.cfi_def_cfa_offset 24
 3722              	.LVL487:
 3723 0130 415C     		popq	%r12
 3724              		.cfi_def_cfa_offset 16
 3725 0132 415D     		popq	%r13
 3726              		.cfi_def_cfa_offset 8
 3727 0134 C3       		ret
 3728              	.LVL488:
 3729              		.p2align 4,,10
 3730 0135 0F1F00   		.p2align 3
 3731              	.L431:
 3732              		.cfi_restore_state
 3733              		.loc 1 1584 0
 3734 0138 83C301   		addl	$1, %ebx
 3735              	.LVL489:
 3736 013b 4139DD   		cmpl	%ebx, %r13d
 3737 013e 7CD0     		jl	.L423
 3738              	.LVL490:
 3739              	.L438:
 3740              		.loc 1 1588 0
 3741 0140 488BBD38 		movq	6200(%rbp), %rdi
 3741      180000
 3742 0147 89DE     		movl	%ebx, %esi
 3743 0149 E8000000 		call	_ZNK10Fl_Browser4textEi
 3743      00
 3744              	.LVL491:
 3745 014e 4C89E6   		movq	%r12, %rsi
 3746 0151 4889C7   		movq	%rax, %rdi
 3747 0154 E8000000 		call	strcmp
 3747      00
 3748              	.LVL492:
 3749 0159 85C0     		testl	%eax, %eax
 3750 015b 75DB     		jne	.L431
 3751              	.LVL493:
 3752              	.LBB605:
 3753              	.LBB606:
 3754              		.loc 6 165 0
 3755 015d 488BBD38 		movq	6200(%rbp), %rdi
 3755      180000
 3756 0164 31D2     		xorl	%edx, %edx
 3757 0166 89DE     		movl	%ebx, %esi
 3758 0168 E8000000 		call	_ZN10Fl_Browser12linepositionEiNS_16Fl_Line_PositionE
 3758      00
 3759              	.LVL494:
 3760              	.LBE606:
 3761              	.LBE605:
 3762              		.loc 1 1592 0
 3763 016d 488BBD38 		movq	6200(%rbp), %rdi
 3763      180000
 3764 0174 BA010000 		movl	$1, %edx
 3764      00
 3765 0179 89DE     		movl	%ebx, %esi
 3766 017b E8000000 		call	_ZN10Fl_Browser6selectEii
 3766      00
 3767              	.LVL495:
 3768 0180 EB8E     		jmp	.L423
 3769              	.LVL496:
 3770              		.p2align 4,,10
 3771 0182 660F1F44 		.p2align 3
 3771      0000
 3772              	.L443:
 3773              		.loc 1 1562 0
 3774 0188 41C60424 		movb	$0, (%r12)
 3774      00
 3775 018d 4983C401 		addq	$1, %r12
 3776              	.LVL497:
 3777 0191 E9C9FEFF 		jmp	.L425
 3777      FF
 3778 0196 662E0F1F 		.p2align 4,,10
 3778      84000000 
 3778      0000
 3779              		.p2align 3
 3780              	.L444:
 3781              		.loc 1 1565 0
 3782 01a0 4989DC   		movq	%rbx, %r12
 3783              	.LVL498:
 3784 01a3 E9D8FEFF 		jmp	.L426
 3784      FF
 3785 01a8 0F1F8400 		.p2align 4,,10
 3785      00000000 
 3786              		.p2align 3
 3787              	.L424:
 3788              		.loc 1 1567 0
 3789 01b0 BE000000 		movl	$.LC25, %esi
 3789      00
 3790 01b5 4889EF   		movq	%rbp, %rdi
 3791              		.loc 1 1568 0
 3792 01b8 4989E4   		movq	%rsp, %r12
 3793              		.loc 1 1567 0
 3794 01bb E8000000 		call	_ZN15Fl_File_Chooser9directoryEPKc
 3794      00
 3795              	.LVL499:
 3796 01c0 E9BBFEFF 		jmp	.L426
 3796      FF
 3797              	.LVL500:
 3798              	.L445:
 3799              		.loc 1 1595 0
 3800 01c5 E8000000 		call	__stack_chk_fail
 3800      00
 3801              	.LVL501:
 3802              		.cfi_endproc
 3803              	.LFE766:
 3805              		.section	.text.unlikely._ZN15Fl_File_Chooser5valueEPKc.part.24
 3806              	.LCOLDE35:
 3807              		.section	.text._ZN15Fl_File_Chooser5valueEPKc.part.24
 3808              	.LHOTE35:
 3809              		.section	.text.unlikely._ZN15Fl_File_Chooser5valueEPKc,"ax",@progbits
 3810              		.align 2
 3811              	.LCOLDB36:
 3812              		.section	.text._ZN15Fl_File_Chooser5valueEPKc,"ax",@progbits
 3813              	.LHOTB36:
 3814              		.align 2
 3815              		.p2align 4,,15
 3816              		.globl	_ZN15Fl_File_Chooser5valueEPKc
 3818              	_ZN15Fl_File_Chooser5valueEPKc:
 3819              	.LFB734:
 3820              		.loc 1 1525 0
 3821              		.cfi_startproc
 3822              	.LVL502:
 3823              		.loc 1 1535 0
 3824 0000 4885F6   		testq	%rsi, %rsi
 3825              		.loc 1 1525 0
 3826 0003 53       		pushq	%rbx
 3827              		.cfi_def_cfa_offset 16
 3828              		.cfi_offset 3, -16
 3829              		.loc 1 1535 0
 3830 0004 7405     		je	.L447
 3831              		.loc 1 1535 0 is_stmt 0 discriminator 1
 3832 0006 803E00   		cmpb	$0, (%rsi)
 3833 0009 752D     		jne	.L448
 3834              	.L447:
 3835 000b 4889FB   		movq	%rdi, %rbx
 3836              		.loc 1 1537 0 is_stmt 1
 3837 000e E8000000 		call	_ZN15Fl_File_Chooser9directoryEPKc
 3837      00
 3838              	.LVL503:
 3839              		.loc 1 1538 0
 3840 0013 488BBB58 		movq	6232(%rbx), %rdi
 3840      180000
 3841 001a BE000000 		movl	$.LC5, %esi
 3841      00
 3842 001f E8000000 		call	_ZN13Fl_File_Input5valueEPKc
 3842      00
 3843              	.LVL504:
 3844              		.loc 1 1539 0
 3845 0024 488BBB60 		movq	6240(%rbx), %rdi
 3845      180000
 3846              		.loc 1 1595 0
 3847 002b 5B       		popq	%rbx
 3848              		.cfi_remember_state
 3849              		.cfi_def_cfa_offset 8
 3850              	.LVL505:
 3851              		.loc 1 1539 0
 3852 002c E9000000 		jmp	_ZN9Fl_Widget10deactivateEv
 3852      00
 3853              	.LVL506:
 3854              		.p2align 4,,10
 3855 0031 0F1F8000 		.p2align 3
 3855      000000
 3856              	.L448:
 3857              		.cfi_restore_state
 3858              		.loc 1 1595 0
 3859 0038 5B       		popq	%rbx
 3860              		.cfi_def_cfa_offset 8
 3861 0039 E9000000 		jmp	_ZN15Fl_File_Chooser5valueEPKc.part.24
 3861      00
 3862              	.LVL507:
 3863              		.cfi_endproc
 3864              	.LFE734:
 3866              		.section	.text.unlikely._ZN15Fl_File_Chooser5valueEPKc
 3867              	.LCOLDE36:
 3868              		.section	.text._ZN15Fl_File_Chooser5valueEPKc
 3869              	.LHOTE36:
 3870              		.section	.text.unlikely._ZN15Fl_File_Chooser10fileNameCBEv,"ax",@progbits
 3871              		.align 2
 3872              	.LCOLDB37:
 3873              		.section	.text._ZN15Fl_File_Chooser10fileNameCBEv,"ax",@progbits
 3874              	.LHOTB37:
 3875              		.align 2
 3876              		.p2align 4,,15
 3877              		.globl	_ZN15Fl_File_Chooser10fileNameCBEv
 3879              	_ZN15Fl_File_Chooser10fileNameCBEv:
 3880              	.LFB723:
 3881              		.loc 1 801 0
 3882              		.cfi_startproc
 3883              	.LVL508:
 3884 0000 4157     		pushq	%r15
 3885              		.cfi_def_cfa_offset 16
 3886              		.cfi_offset 15, -16
 3887 0002 4156     		pushq	%r14
 3888              		.cfi_def_cfa_offset 24
 3889              		.cfi_offset 14, -24
 3890 0004 4989FF   		movq	%rdi, %r15
 3891 0007 4155     		pushq	%r13
 3892              		.cfi_def_cfa_offset 32
 3893              		.cfi_offset 13, -32
 3894 0009 4154     		pushq	%r12
 3895              		.cfi_def_cfa_offset 40
 3896              		.cfi_offset 12, -40
 3897 000b 55       		pushq	%rbp
 3898              		.cfi_def_cfa_offset 48
 3899              		.cfi_offset 6, -48
 3900 000c 53       		pushq	%rbx
 3901              		.cfi_def_cfa_offset 56
 3902              		.cfi_offset 3, -56
 3903 000d 4881EC48 		subq	$4168, %rsp
 3903      100000
 3904              		.cfi_def_cfa_offset 4224
 3905              		.loc 1 801 0
 3906 0014 64488B04 		movq	%fs:40, %rax
 3906      25280000 
 3906      00
 3907 001d 48898424 		movq	%rax, 4152(%rsp)
 3907      38100000 
 3908 0025 31C0     		xorl	%eax, %eax
 3909              	.LVL509:
 3910 0027 488B8758 		movq	6232(%rdi), %rax
 3910      180000
 3911 002e 488B5878 		movq	120(%rax), %rbx
 3912              	.LVL510:
 3913              		.loc 1 819 0
 3914 0032 4885DB   		testq	%rbx, %rbx
 3915 0035 0F842502 		je	.L505
 3915      0000
 3916              		.loc 1 819 0 is_stmt 0 discriminator 1
 3917 003b 0FB62B   		movzbl	(%rbx), %ebp
 3918 003e 4084ED   		testb	%bpl, %bpl
 3919 0041 0F841902 		je	.L505
 3919      0000
 3920              	.LVL511:
 3921              	.LBB634:
 3922              	.LBB635:
 220:/usr/include/string.h **** }
 3923              		.loc 10 220 0 is_stmt 1
 3924 0047 BE7E0000 		movl	$126, %esi
 3924      00
 3925 004c 4889DF   		movq	%rbx, %rdi
 3926              	.LVL512:
 3927 004f E8000000 		call	strchr
 3927      00
 3928              	.LVL513:
 3929              	.LBE635:
 3930              	.LBE634:
 3931              		.loc 1 825 0
 3932 0054 4885C0   		testq	%rax, %rax
 3933 0057 0F84CB04 		je	.L585
 3933      0000
 3934              	.L457:
 3935              		.loc 1 826 0
 3936 005d 488D4424 		leaq	48(%rsp), %rax
 3936      30
 3937 0062 4889DA   		movq	%rbx, %rdx
 3938 0065 BE000800 		movl	$2048, %esi
 3938      00
 3939 006a 4889C3   		movq	%rax, %rbx
 3940 006d 4889C7   		movq	%rax, %rdi
 3941 0070 48894424 		movq	%rax, 24(%rsp)
 3941      18
 3942 0075 E8000000 		call	_Z18fl_filename_expandPciPKc
 3942      00
 3943              	.LVL514:
 3944              		.loc 1 828 0
 3945 007a 4889DE   		movq	%rbx, %rsi
 3946 007d 4C89FF   		movq	%r15, %rdi
 3947 0080 E8000000 		call	_ZN15Fl_File_Chooser5valueEPKc
 3947      00
 3948              	.LVL515:
 3949              		.loc 1 837 0
 3950 0085 41807F10 		cmpb	$0, 16(%r15)
 3950      00
 3951 008a 7440     		je	.L460
 3952 008c 807C2430 		cmpb	$47, 48(%rsp)
 3952      2F
 3953 0091 7439     		je	.L460
 3954              		.loc 1 827 0
 3955 0093 488B5C24 		movq	24(%rsp), %rbx
 3955      18
 3956              	.LVL516:
 3957              	.L518:
 3958              		.loc 1 839 0
 3959 0098 4889DA   		movq	%rbx, %rdx
 3960 009b 488B5C24 		movq	24(%rsp), %rbx
 3960      18
 3961 00a0 BE000800 		movl	$2048, %esi
 3961      00
 3962 00a5 4889DF   		movq	%rbx, %rdi
 3963 00a8 E8000000 		call	_Z20fl_filename_absolutePciPKc
 3963      00
 3964              	.LVL517:
 3965              		.loc 1 840 0
 3966 00ad 4889DE   		movq	%rbx, %rsi
 3967 00b0 4C89FF   		movq	%r15, %rdi
 3968 00b3 E8000000 		call	_ZN15Fl_File_Chooser5valueEPKc
 3968      00
 3969              	.LVL518:
 3970              		.loc 1 841 0
 3971 00b8 498BBF58 		movq	6232(%r15), %rdi
 3971      180000
 3972 00bf 8BB79000 		movl	144(%rdi), %esi
 3972      0000
 3973              	.LVL519:
 3974              	.LBB636:
 3975              	.LBB637:
 3976              		.file 11 "fltk-1.3.4-1/FL/Fl_Input_.H"
   1:fltk-1.3.4-1/FL/Fl_Input_.H **** //
   2:fltk-1.3.4-1/FL/Fl_Input_.H **** // "$Id: Fl_Input_.H 10807 2015-07-21 13:55:13Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Input_.H **** //
   4:fltk-1.3.4-1/FL/Fl_Input_.H **** // Input base class header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Input_.H **** //
   6:fltk-1.3.4-1/FL/Fl_Input_.H **** // Copyright 1998-2015 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Input_.H **** //
   8:fltk-1.3.4-1/FL/Fl_Input_.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Input_.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Input_.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Input_.H **** //
  12:fltk-1.3.4-1/FL/Fl_Input_.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Input_.H **** //
  14:fltk-1.3.4-1/FL/Fl_Input_.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Input_.H **** //
  16:fltk-1.3.4-1/FL/Fl_Input_.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Input_.H **** //
  18:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  19:fltk-1.3.4-1/FL/Fl_Input_.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Input_.H ****    Fl_Input_ widget . */
  21:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  22:fltk-1.3.4-1/FL/Fl_Input_.H **** #ifndef Fl_Input__H
  23:fltk-1.3.4-1/FL/Fl_Input_.H **** #define Fl_Input__H
  24:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  25:fltk-1.3.4-1/FL/Fl_Input_.H **** #ifndef Fl_Widget_H
  26:fltk-1.3.4-1/FL/Fl_Input_.H **** #include "Fl_Widget.H"
  27:fltk-1.3.4-1/FL/Fl_Input_.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  29:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_NORMAL_INPUT		0
  30:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_FLOAT_INPUT		1
  31:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_INT_INPUT		2
  32:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_HIDDEN_INPUT		3
  33:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_MULTILINE_INPUT	4
  34:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_SECRET_INPUT		5
  35:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_INPUT_TYPE		7
  36:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_INPUT_READONLY	8
  37:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_NORMAL_OUTPUT	(FL_NORMAL_INPUT | FL_INPUT_READONLY)
  38:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_MULTILINE_OUTPUT	(FL_MULTILINE_INPUT | FL_INPUT_READONLY)
  39:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_INPUT_WRAP		16
  40:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_MULTILINE_INPUT_WRAP	(FL_MULTILINE_INPUT | FL_INPUT_WRAP)
  41:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_MULTILINE_OUTPUT_WRAP (FL_MULTILINE_INPUT | FL_INPUT_READONLY | FL_INPUT_WRAP)
  42:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  43:fltk-1.3.4-1/FL/Fl_Input_.H **** /**
  44:fltk-1.3.4-1/FL/Fl_Input_.H ****   This class provides a low-overhead text input field.
  45:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  46:fltk-1.3.4-1/FL/Fl_Input_.H ****   This is a virtual base class below Fl_Input. It has all
  47:fltk-1.3.4-1/FL/Fl_Input_.H ****   the same interfaces, but lacks the handle() and
  48:fltk-1.3.4-1/FL/Fl_Input_.H ****   draw() method. You may want to subclass it if you are
  49:fltk-1.3.4-1/FL/Fl_Input_.H ****   one of those people who likes to change how the editing keys
  50:fltk-1.3.4-1/FL/Fl_Input_.H ****   work. It may also be useful for adding scrollbars
  51:fltk-1.3.4-1/FL/Fl_Input_.H ****   to the input field.
  52:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  53:fltk-1.3.4-1/FL/Fl_Input_.H ****   This can act like any of the subclasses of Fl_Input, by
  54:fltk-1.3.4-1/FL/Fl_Input_.H ****   setting type() to one of the following values:
  55:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  56:fltk-1.3.4-1/FL/Fl_Input_.H ****   \code
  57:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_NORMAL_INPUT	   0
  58:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_FLOAT_INPUT	   1
  59:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_INT_INPUT		   2
  60:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_MULTILINE_INPUT	   4
  61:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_SECRET_INPUT	   5
  62:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_INPUT_TYPE		   7
  63:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_INPUT_READONLY	   8
  64:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_NORMAL_OUTPUT	   (FL_NORMAL_INPUT | FL_INPUT_READONLY)
  65:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_MULTILINE_OUTPUT	   (FL_MULTILINE_INPUT | FL_INPUT_READONLY)
  66:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_INPUT_WRAP		   16
  67:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_MULTILINE_INPUT_WRAP  (FL_MULTILINE_INPUT | FL_INPUT_WRAP)
  68:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_MULTILINE_OUTPUT_WRAP (FL_MULTILINE_INPUT | FL_INPUT_READONLY | FL_INPUT_WRAP)
  69:fltk-1.3.4-1/FL/Fl_Input_.H ****   \endcode
  70:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  71:fltk-1.3.4-1/FL/Fl_Input_.H ****   All variables that represent an index into a text buffer are byte-oriented,
  72:fltk-1.3.4-1/FL/Fl_Input_.H ****   not character oriented, counting from 0 (at or before the first character)
  73:fltk-1.3.4-1/FL/Fl_Input_.H ****   to size() (at the end of the buffer, after the last byte). Since UTF-8
  74:fltk-1.3.4-1/FL/Fl_Input_.H ****   characters can be up to six bytes long, simply incrementing such an index
  75:fltk-1.3.4-1/FL/Fl_Input_.H ****   will not reliably advance to the next character in the text buffer.
  76:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  77:fltk-1.3.4-1/FL/Fl_Input_.H ****   Indices and pointers into the text buffer should always point at a 7 bit ASCII
  78:fltk-1.3.4-1/FL/Fl_Input_.H ****   character or the beginning of a UTF-8 character sequence. Behavior for false
  79:fltk-1.3.4-1/FL/Fl_Input_.H ****   UTF-8 sequences and pointers into the middle of a sequence are undefined.
  80:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  81:fltk-1.3.4-1/FL/Fl_Input_.H ****   \see Fl_Text_Display, Fl_Text_Editor for more powerful text handling widgets
  82:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  83:fltk-1.3.4-1/FL/Fl_Input_.H ****   \internal
  84:fltk-1.3.4-1/FL/Fl_Input_.H ****   When porting this widget from ASCII to UTF-8, previously legal pointers into
  85:fltk-1.3.4-1/FL/Fl_Input_.H ****   the text of this widget can become illegal by pointing into the middle of
  86:fltk-1.3.4-1/FL/Fl_Input_.H ****   a UTF-8 sequence. This is not a big problem for Fl_Input_ because all code
  87:fltk-1.3.4-1/FL/Fl_Input_.H ****   in this module is quite tolerant. It could be problematic though when deriving
  88:fltk-1.3.4-1/FL/Fl_Input_.H ****   from this class because no feedback for illegal pointers is given. Additionally,
  89:fltk-1.3.4-1/FL/Fl_Input_.H ****   a careless "copy" call can put partial UTF-8 sequences into the clipboard.
  90:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  91:fltk-1.3.4-1/FL/Fl_Input_.H ****   None of these issues should be disastrous. Nevertheless, we should
  92:fltk-1.3.4-1/FL/Fl_Input_.H ****   discuss how FLTK should handle false UTF-8 sequences and pointers.
  93:fltk-1.3.4-1/FL/Fl_Input_.H **** */
  94:fltk-1.3.4-1/FL/Fl_Input_.H **** class FL_EXPORT Fl_Input_ : public Fl_Widget {
  95:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  96:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Storage for the text field. */
  97:fltk-1.3.4-1/FL/Fl_Input_.H ****   const char* value_;
  98:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  99:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Buffer memory for expanded text. \see expand() */
 100:fltk-1.3.4-1/FL/Fl_Input_.H ****   char* buffer;
 101:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 102:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Size of text in bytes in the \p value_ field. */
 103:fltk-1.3.4-1/FL/Fl_Input_.H ****   int size_;
 104:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 105:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Current size of internal value() buffer in bytes. */
 106:fltk-1.3.4-1/FL/Fl_Input_.H ****   int bufsize;
 107:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 108:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Position of the cursor in the document. */
 109:fltk-1.3.4-1/FL/Fl_Input_.H ****   int position_;
 110:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 111:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Position of the other end of the selected text.
 112:fltk-1.3.4-1/FL/Fl_Input_.H ****       If \p position_ equals \p mark_, no text is selected */
 113:fltk-1.3.4-1/FL/Fl_Input_.H ****   int mark_;
 114:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 115:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Behavior of Tab key in multiline input widget. 
 116:fltk-1.3.4-1/FL/Fl_Input_.H ****       If enabled (default) Tab causes focus nav, otherwise Tab is inserted 
 117:fltk-1.3.4-1/FL/Fl_Input_.H ****       as a character. */
 118:fltk-1.3.4-1/FL/Fl_Input_.H ****   int tab_nav_;
 119:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 120:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Offset to text origin within widget bounds */
 121:fltk-1.3.4-1/FL/Fl_Input_.H ****   int xscroll_, yscroll_;
 122:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 123:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Minimal update pointer. Display requires redraw from here to the end
 124:fltk-1.3.4-1/FL/Fl_Input_.H ****       of the buffer. */
 125:fltk-1.3.4-1/FL/Fl_Input_.H ****   int mu_p;
 126:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 127:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Maximum number of (UTF-8) characters a user can input. */
 128:fltk-1.3.4-1/FL/Fl_Input_.H ****   int maximum_size_;
 129:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 130:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Shortcut key that will fetch focus for this widget. */
 131:fltk-1.3.4-1/FL/Fl_Input_.H ****   int shortcut_;
 132:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 133:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal This is set if no text but only the cursor needs updating. */
 134:fltk-1.3.4-1/FL/Fl_Input_.H ****   uchar erase_cursor_only;
 135:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 136:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal The font used for the entire text. */
 137:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Font textfont_;
 138:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 139:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Height of the font used for the entire text. */
 140:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Fontsize textsize_;
 141:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 142:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal color of the entire text */
 143:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Color textcolor_;
 144:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 145:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal color of the text cursor */
 146:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Color cursor_color_;
 147:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 148:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Horizontal cursor position in pixels while moving up or down. */
 149:fltk-1.3.4-1/FL/Fl_Input_.H ****   static double up_down_pos;
 150:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 151:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Flag to remember last cursor move. */
 152:fltk-1.3.4-1/FL/Fl_Input_.H ****   static int was_up_down;
 153:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 154:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Convert a given text segment into the text that will be rendered on screen. */
 155:fltk-1.3.4-1/FL/Fl_Input_.H ****   const char* expand(const char*, char*) const;
 156:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 157:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Calculates the width in pixels of part of a text buffer. */
 158:fltk-1.3.4-1/FL/Fl_Input_.H ****   double expandpos(const char*, const char*, const char*, int*) const;
 159:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 160:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Mark a range of characters for update. */
 161:fltk-1.3.4-1/FL/Fl_Input_.H ****   void minimal_update(int, int);
 162:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 163:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Mark a range of characters for update. */
 164:fltk-1.3.4-1/FL/Fl_Input_.H ****   void minimal_update(int p);
 165:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 166:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Copy the value from a possibly static entry into the internal buffer. */
 167:fltk-1.3.4-1/FL/Fl_Input_.H ****   void put_in_buffer(int newsize);
 168:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 169:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Set the current font and font size. */
 170:fltk-1.3.4-1/FL/Fl_Input_.H ****   void setfont() const;
 171:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 172:fltk-1.3.4-1/FL/Fl_Input_.H **** protected:
 173:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 174:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Find the start of a word. */
 175:fltk-1.3.4-1/FL/Fl_Input_.H ****   int word_start(int i) const;
 176:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 177:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Find the end of a word. */
 178:fltk-1.3.4-1/FL/Fl_Input_.H ****   int word_end(int i) const;
 179:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 180:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Find the start of a line. */
 181:fltk-1.3.4-1/FL/Fl_Input_.H ****   int line_start(int i) const;
 182:fltk-1.3.4-1/FL/Fl_Input_.H ****   
 183:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Find the end of a line. */
 184:fltk-1.3.4-1/FL/Fl_Input_.H ****   int line_end(int i) const;
 185:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 186:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Draw the text in the passed bounding box. */
 187:fltk-1.3.4-1/FL/Fl_Input_.H ****   void drawtext(int, int, int, int);
 188:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 189:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Move the cursor to the column given by up_down_pos. */
 190:fltk-1.3.4-1/FL/Fl_Input_.H ****   int up_down_position(int, int keepmark=0);
 191:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 192:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Handle mouse clicks and mouse moves. */
 193:fltk-1.3.4-1/FL/Fl_Input_.H ****   void handle_mouse(int, int, int, int, int keepmark=0);
 194:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 195:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Handle all kinds of text field related events. */
 196:fltk-1.3.4-1/FL/Fl_Input_.H ****   int handletext(int e, int, int, int, int);
 197:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 198:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Check the when() field and do a callback if indicated. */
 199:fltk-1.3.4-1/FL/Fl_Input_.H ****   void maybe_do_callback();
 200:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 201:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Horizontal offset of text to left edge of widget. */
 202:fltk-1.3.4-1/FL/Fl_Input_.H ****   int xscroll() const {return xscroll_;}
 203:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 204:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Vertical offset of text to top edge of widget. */
 205:fltk-1.3.4-1/FL/Fl_Input_.H ****   int yscroll() const {return yscroll_;}
 206:fltk-1.3.4-1/FL/Fl_Input_.H ****   void yscroll(int yOffset) { yscroll_ = yOffset; damage(FL_DAMAGE_EXPOSE);}
 207:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 208:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Return the number of lines displayed on a single page.  */
 209:fltk-1.3.4-1/FL/Fl_Input_.H ****   int linesPerPage();
 210:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 211:fltk-1.3.4-1/FL/Fl_Input_.H **** public:
 212:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 213:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Change the size of the widget. */
 214:fltk-1.3.4-1/FL/Fl_Input_.H ****   void resize(int, int, int, int);
 215:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 216:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Constructor */
 217:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Input_(int, int, int, int, const char* = 0);
 218:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 219:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Destructor */
 220:fltk-1.3.4-1/FL/Fl_Input_.H ****   ~Fl_Input_();
 221:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 222:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Changes the widget text. */
 223:fltk-1.3.4-1/FL/Fl_Input_.H ****   int value(const char*);
 224:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 225:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Changes the widget text. */
 226:fltk-1.3.4-1/FL/Fl_Input_.H ****   int value(const char*, int);
 227:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 228:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Changes the widget text. */
 229:fltk-1.3.4-1/FL/Fl_Input_.H ****   int static_value(const char*);
 230:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 231:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Changes the widget text. */
 232:fltk-1.3.4-1/FL/Fl_Input_.H ****   int static_value(const char*, int);
 233:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 234:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 235:fltk-1.3.4-1/FL/Fl_Input_.H ****       Returns the text displayed in the widget.
 236:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 237:fltk-1.3.4-1/FL/Fl_Input_.H ****       This function returns the current value, which is a pointer
 238:fltk-1.3.4-1/FL/Fl_Input_.H ****       to the internal buffer and is valid only until the next event is
 239:fltk-1.3.4-1/FL/Fl_Input_.H ****       handled.
 240:fltk-1.3.4-1/FL/Fl_Input_.H ****   
 241:fltk-1.3.4-1/FL/Fl_Input_.H ****       \return pointer to an internal buffer - do not free() this    
 242:fltk-1.3.4-1/FL/Fl_Input_.H ****       \see Fl_Input_::value(const char*)
 243:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 244:fltk-1.3.4-1/FL/Fl_Input_.H ****   const char* value() const {return value_;}
 245:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 246:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Returns the character at index \p i. */
 247:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Char index(int i) const;
 248:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 249:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 250:fltk-1.3.4-1/FL/Fl_Input_.H ****     Returns the number of bytes in value(). 
 251:fltk-1.3.4-1/FL/Fl_Input_.H ****   
 252:fltk-1.3.4-1/FL/Fl_Input_.H ****     This may be greater than <tt>strlen(value())</tt> if there are 
 253:fltk-1.3.4-1/FL/Fl_Input_.H ****     \c nul characters in the text.
 254:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 255:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return number of bytes in the text
 256:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 257:fltk-1.3.4-1/FL/Fl_Input_.H ****   int size() const {return size_;}
 258:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 259:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the width and height of this widget.
 260:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] W, H new width and height
 261:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see Fl_Widget::size(int, int) */
 262:fltk-1.3.4-1/FL/Fl_Input_.H ****   void size(int W, int H) { Fl_Widget::size(W, H); }
 263:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 264:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the maximum length of the input field in characters.
 265:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see maximum_size(int). */
 266:fltk-1.3.4-1/FL/Fl_Input_.H ****   int maximum_size() const {return maximum_size_;}
 267:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 268:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the maximum length of the input field in characters.
 269:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 270:fltk-1.3.4-1/FL/Fl_Input_.H ****     This limits the number of <b>characters</b> that can be inserted
 271:fltk-1.3.4-1/FL/Fl_Input_.H ****     in the widget.
 272:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 273:fltk-1.3.4-1/FL/Fl_Input_.H ****     Since FLTK 1.3 this is different than the buffer size, since one
 274:fltk-1.3.4-1/FL/Fl_Input_.H ****     character can be more than one byte in UTF-8 encoding. In FLTK 1.1
 275:fltk-1.3.4-1/FL/Fl_Input_.H ****     this was the same (one byte = one character).
 276:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 277:fltk-1.3.4-1/FL/Fl_Input_.H ****   void maximum_size(int m) {maximum_size_ = m;}
 278:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 279:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the position of the text cursor.
 280:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return the cursor position as an index in the range 0..size()
 281:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see position(int, int)
 282:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 283:fltk-1.3.4-1/FL/Fl_Input_.H ****   int position() const {return position_;}
 284:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 285:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the current selection mark. 
 286:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return index into the text */
 287:fltk-1.3.4-1/FL/Fl_Input_.H ****   int mark() const {return mark_;}
 288:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 289:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Sets the index for the cursor and mark. */
 290:fltk-1.3.4-1/FL/Fl_Input_.H ****   int position(int p, int m);
 291:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 292:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the cursor position and mark.
 293:fltk-1.3.4-1/FL/Fl_Input_.H ****     position(n) is the same as <tt>position(n, n)</tt>.
 294:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param p new index for cursor and mark
 295:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if no positions changed
 296:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see position(int, int), position(), mark(int)
 297:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 298:fltk-1.3.4-1/FL/Fl_Input_.H ****   int position(int p) {return position(p, p);}
 299:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 300:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the current selection mark. 
 301:fltk-1.3.4-1/FL/Fl_Input_.H ****     mark(n) is the same as <tt>position(position(),n)</tt>.
 302:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param m new index of the mark 
 303:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if the mark did not change
 304:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see position(), position(int, int) */
 305:fltk-1.3.4-1/FL/Fl_Input_.H ****   int mark(int m) {return position(position(), m);}
 3977              		.loc 11 305 0
 3978 00c5 89F2     		movl	%esi, %edx
 3979 00c7 E8000000 		call	_ZN9Fl_Input_8positionEii
 3979      00
 3980              	.LVL520:
 3981              	.L460:
 3982              	.LBE637:
 3983              	.LBE636:
 3984              	.LBB638:
 3985              	.LBB639:
 3986              	.LBB640:
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
 3987              		.loc 9 721 0
 3988 00cc 8B050000 		movl	_ZN2Fl8e_keysymE(%rip), %eax
 3988      0000
 3989              	.LBE640:
 3990              	.LBE639:
 3991              		.loc 1 850 0
 3992 00d2 89C2     		movl	%eax, %edx
 3993 00d4 80E27F   		andb	$127, %dl
 3994 00d7 81FA0DFF 		cmpl	$65293, %edx
 3994      0000
 3995 00dd 0F84B501 		je	.L586
 3995      0000
 3996              	.LBB641:
 3997              		.loc 1 877 0
 3998 00e3 3D08FF00 		cmpl	$65288, %eax
 3998      00
 3999 00e8 0F84F402 		je	.L578
 3999      0000
 4000 00ee 3DFFFF00 		cmpl	$65535, %eax
 4000      00
 4001 00f3 0F84E902 		je	.L578
 4001      0000
 4002              	.LVL521:
 4003              	.LBB642:
 4004              	.LBB643:
 4005              	.LBB644:
 4006              		.loc 10 247 0
 4007 00f9 488B7C24 		movq	24(%rsp), %rdi
 4007      18
 4008 00fe BE2F0000 		movl	$47, %esi
 4008      00
 4009 0103 E8000000 		call	strrchr
 4009      00
 4010              	.LVL522:
 4011              	.LBE644:
 4012              	.LBE643:
 4013              		.loc 1 880 0
 4014 0108 4885C0   		testq	%rax, %rax
 4015              	.LBB646:
 4016              	.LBB645:
 4017              		.loc 10 247 0
 4018 010b 4989C5   		movq	%rax, %r13
 4019              	.LVL523:
 4020              	.LBE645:
 4021              	.LBE646:
 4022              		.loc 1 880 0
 4023 010e 0F843505 		je	.L587
 4023      0000
 4024              	.L514:
 4025              	.LVL524:
 4026              	.LBB647:
 4027              		.loc 1 893 0
 4028 0114 498D5F10 		leaq	16(%r15), %rbx
 4029 0118 488B7C24 		movq	24(%rsp), %rdi
 4029      18
 4030              	.LBE647:
 4031              		.loc 1 886 0
 4032 011d 498D4501 		leaq	1(%r13), %rax
 4033 0121 41C64500 		movb	$0, 0(%r13)
 4033      00
 4034              	.LBB655:
 4035              		.loc 1 893 0
 4036 0126 4889DE   		movq	%rbx, %rsi
 4037              	.LBE655:
 4038              		.loc 1 886 0
 4039 0129 48894424 		movq	%rax, 8(%rsp)
 4039      08
 4040              	.LVL525:
 4041              	.LBB656:
 4042              		.loc 1 893 0
 4043 012e E8000000 		call	strcmp
 4043      00
 4044              	.LVL526:
 4045 0133 85C0     		testl	%eax, %eax
 4046 0135 7455     		je	.L482
 4047              		.loc 1 893 0 is_stmt 0 discriminator 1
 4048 0137 807C2430 		cmpb	$0, 48(%rsp)
 4048      00
 4049 013c 7511     		jne	.L483
 4050              		.loc 1 894 0 is_stmt 1
 4051 013e BE000000 		movl	$.LC23, %esi
 4051      00
 4052 0143 B9020000 		movl	$2, %ecx
 4052      00
 4053 0148 4889DF   		movq	%rbx, %rdi
 4054 014b F3A6     		repz cmpsb
 4055 014d 743D     		je	.L482
 4056              	.L483:
 4057              	.LBB648:
 4058              		.loc 1 896 0
 4059 014f 498B8758 		movq	6232(%r15), %rax
 4059      180000
 4060              		.loc 1 899 0
 4061 0156 488B7424 		movq	24(%rsp), %rsi
 4061      18
 4062 015b 4C89FF   		movq	%r15, %rdi
 4063 015e 8BA89000 		movl	144(%rax), %ebp
 4063      0000
 4064              	.LVL527:
 4065 0164 448BA094 		movl	148(%rax), %r12d
 4065      000000
 4066              	.LVL528:
 4067 016b E8000000 		call	_ZN15Fl_File_Chooser9directoryEPKc
 4067      00
 4068              	.LVL529:
 4069              	.LBB649:
 4070              		.loc 1 901 0
 4071 0170 41807D01 		cmpb	$0, 1(%r13)
 4071      00
 4072 0175 0F856D04 		jne	.L588
 4072      0000
 4073              	.L484:
 4074              	.LBE649:
 4075              		.loc 1 909 0
 4076 017b 498BBF58 		movq	6232(%r15), %rdi
 4076      180000
 4077 0182 4489E2   		movl	%r12d, %edx
 4078 0185 89EE     		movl	%ebp, %esi
 4079 0187 E8000000 		call	_ZN9Fl_Input_8positionEii
 4079      00
 4080              	.LVL530:
 4081              	.L482:
 4082              	.LBE648:
 4083              	.LBE656:
 4084              		.loc 1 913 0
 4085 018c 498BAF38 		movq	6200(%r15), %rbp
 4085      180000
 4086              		.loc 1 914 0
 4087 0193 488B7C24 		movq	8(%rsp), %rdi
 4087      08
 4088 0198 8B858402 		movl	644(%rbp), %eax
 4088      0000
 4089 019e 4189C6   		movl	%eax, %r14d
 4090 01a1 89442420 		movl	%eax, 32(%rsp)
 4091              	.LVL531:
 4092 01a5 E8000000 		call	strlen
 4092      00
 4093              	.LVL532:
 4094              		.loc 1 918 0
 4095 01aa 4585F6   		testl	%r14d, %r14d
 4096              		.loc 1 914 0
 4097 01ad 48894424 		movq	%rax, 40(%rsp)
 4097      28
 4098 01b2 4189C4   		movl	%eax, %r12d
 4099              	.LVL533:
 4100              		.loc 1 915 0
 4101 01b5 8D5801   		leal	1(%rax), %ebx
 4102              	.LVL534:
 4103              		.loc 1 918 0
 4104 01b8 0F8E2002 		jle	.L485
 4104      0000
 4105 01be 4898     		cltq
 4106              	.LVL535:
 4107 01c0 C7442424 		movl	$0, 36(%rsp)
 4107      00000000 
 4108 01c8 41BD0100 		movl	$1, %r13d
 4108      0000
 4109 01ce 48894424 		movq	%rax, 16(%rsp)
 4109      10
 4110 01d3 4889EF   		movq	%rbp, %rdi
 4111              	.LVL536:
 4112 01d6 662E0F1F 		.p2align 4,,10
 4112      84000000 
 4112      0000
 4113              		.p2align 3
 4114              	.L494:
 4115              		.loc 1 919 0
 4116 01e0 4489EE   		movl	%r13d, %esi
 4117 01e3 E8000000 		call	_ZNK10Fl_Browser4textEi
 4117      00
 4118              	.LVL537:
 4119              		.loc 1 924 0
 4120 01e8 488B5424 		movq	16(%rsp), %rdx
 4120      10
 4121 01ed 488B7C24 		movq	8(%rsp), %rdi
 4121      08
 4122 01f2 4889C6   		movq	%rax, %rsi
 4123              		.loc 1 919 0
 4124 01f5 4889C5   		movq	%rax, %rbp
 4125              	.LVL538:
 4126              		.loc 1 924 0
 4127 01f8 E8000000 		call	strncmp
 4127      00
 4128              	.LVL539:
 4129 01fd 85C0     		testl	%eax, %eax
 4130 01ff 753D     		jne	.L486
 4131              		.loc 1 927 0
 4132 0201 8B4C2424 		movl	36(%rsp), %ecx
 4133 0205 4C63F3   		movslq	%ebx, %r14
 4134 0208 85C9     		testl	%ecx, %ecx
 4135 020a 0F844802 		je	.L589
 4135      0000
 4136              		.p2align 4,,10
 4137              		.p2align 3
 4138              	.L551:
 4139              		.loc 1 947 0
 4140 0210 488DB424 		leaq	2096(%rsp), %rsi
 4140      30080000 
 4141 0218 4C89F2   		movq	%r14, %rdx
 4142 021b 4889EF   		movq	%rbp, %rdi
 4143 021e E8000000 		call	strncmp
 4143      00
 4144              	.LVL540:
 4145 0223 85C0     		testl	%eax, %eax
 4146 0225 740C     		je	.L491
 4147              		.loc 1 951 0
 4148 0227 83EB01   		subl	$1, %ebx
 4149              	.LVL541:
 4150 022a 4983EE01 		subq	$1, %r14
 4151              		.loc 1 943 0
 4152 022e 4139DC   		cmpl	%ebx, %r12d
 4153 0231 7CDD     		jl	.L551
 4154              	.L491:
 4155              		.loc 1 954 0
 4156 0233 4863C3   		movslq	%ebx, %rax
 4157 0236 C6840430 		movb	$0, 2096(%rsp,%rax)
 4157      08000000 
 4158              	.L486:
 4159              		.loc 1 918 0 discriminator 2
 4160 023e 4183C501 		addl	$1, %r13d
 4161              	.LVL542:
 4162 0242 443B6C24 		cmpl	32(%rsp), %r13d
 4162      20
 4163 0247 0F8F5B01 		jg	.L493
 4163      0000
 4164 024d 4439E3   		cmpl	%r12d, %ebx
 4165 0250 0F8E5201 		jle	.L493
 4165      0000
 4166 0256 498BBF38 		movq	6200(%r15), %rdi
 4166      180000
 4167 025d EB81     		jmp	.L494
 4168              	.LVL543:
 4169 025f 90       		.p2align 4,,10
 4170              		.p2align 3
 4171              	.L505:
 4172              	.LBE642:
 4173              		.loc 1 999 0
 4174 0260 498BBF60 		movq	6240(%r15), %rdi
 4174      180000
 4175 0267 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 4175      00
 4176              	.LVL544:
 4177              	.L453:
 4178              	.LBE641:
 4179              	.LBE638:
 4180              		.loc 1 1002 0
 4181 026c 488B8424 		movq	4152(%rsp), %rax
 4181      38100000 
 4182 0274 64483304 		xorq	%fs:40, %rax
 4182      25280000 
 4182      00
 4183 027d 0F855404 		jne	.L590
 4183      0000
 4184 0283 4881C448 		addq	$4168, %rsp
 4184      100000
 4185              		.cfi_remember_state
 4186              		.cfi_def_cfa_offset 56
 4187 028a 5B       		popq	%rbx
 4188              		.cfi_def_cfa_offset 48
 4189 028b 5D       		popq	%rbp
 4190              		.cfi_def_cfa_offset 40
 4191 028c 415C     		popq	%r12
 4192              		.cfi_def_cfa_offset 32
 4193 028e 415D     		popq	%r13
 4194              		.cfi_def_cfa_offset 24
 4195 0290 415E     		popq	%r14
 4196              		.cfi_def_cfa_offset 16
 4197 0292 415F     		popq	%r15
 4198              		.cfi_def_cfa_offset 8
 4199              	.LVL545:
 4200 0294 C3       		ret
 4201              	.LVL546:
 4202              		.p2align 4,,10
 4203 0295 0F1F00   		.p2align 3
 4204              	.L586:
 4205              		.cfi_restore_state
 4206              	.LBB681:
 4207              		.loc 1 857 0
 4208 0298 488B7C24 		movq	24(%rsp), %rdi
 4208      18
 4209 029d E8000000 		call	_Z24_fl_filename_isdir_quickPKc
 4209      00
 4210              	.LVL547:
 4211 02a2 85C0     		testl	%eax, %eax
 4212 02a4 0F84A600 		je	.L474
 4212      0000
 4213              	.LBB668:
 4214              	.LBB669:
 4215              		.loc 1 1641 0 discriminator 1
 4216 02aa 488B5C24 		movq	24(%rsp), %rbx
 4216      18
 4217              	.LBE669:
 4218              	.LBE668:
 4219              		.loc 1 858 0 discriminator 1
 4220 02af 4D8D6710 		leaq	16(%r15), %r12
 4221              	.LVL548:
 4222              	.L465:
 4223              	.LBB672:
 4224              	.LBB670:
 4225              		.loc 1 1641 0 discriminator 1
 4226 02b3 8B13     		movl	(%rbx), %edx
 4227 02b5 4883C304 		addq	$4, %rbx
 4228 02b9 8D82FFFE 		leal	-16843009(%rdx), %eax
 4228      FEFE
 4229 02bf F7D2     		notl	%edx
 4230 02c1 21D0     		andl	%edx, %eax
 4231 02c3 25808080 		andl	$-2139062144, %eax
 4231      80
 4232 02c8 74E9     		je	.L465
 4233 02ca 89C2     		movl	%eax, %edx
 4234              		.loc 1 1642 0 discriminator 1
 4235 02cc 4C89E7   		movq	%r12, %rdi
 4236              		.loc 1 1641 0 discriminator 1
 4237 02cf C1EA10   		shrl	$16, %edx
 4238 02d2 A9808000 		testl	$32896, %eax
 4238      00
 4239 02d7 0F44C2   		cmove	%edx, %eax
 4240 02da 488D5302 		leaq	2(%rbx), %rdx
 4241 02de 89C1     		movl	%eax, %ecx
 4242 02e0 480F44DA 		cmove	%rdx, %rbx
 4243 02e4 00C1     		addb	%al, %cl
 4244 02e6 4883DB03 		sbbq	$3, %rbx
 4245 02ea 482B5C24 		subq	24(%rsp), %rbx
 4245      18
 4246              		.loc 1 1642 0 discriminator 1
 4247 02ef E8000000 		call	strlen
 4247      00
 4248              	.LVL549:
 4249 02f4 83E801   		subl	$1, %eax
 4250              		.loc 1 1641 0 discriminator 1
 4251 02f7 8D6BFF   		leal	-1(%rbx), %ebp
 4252              	.LVL550:
 4253              		.loc 1 1644 0 discriminator 1
 4254 02fa 89EA     		movl	%ebp, %edx
 4255 02fc C1EA1F   		shrl	$31, %edx
 4256 02ff 84D2     		testb	%dl, %dl
 4257 0301 752D     		jne	.L575
 4258 0303 89C2     		movl	%eax, %edx
 4259 0305 C1EA1F   		shrl	$31, %edx
 4260 0308 84D2     		testb	%dl, %dl
 4261 030a 7524     		jne	.L575
 4262              		.loc 1 1647 0
 4263 030c 4863D5   		movslq	%ebp, %rdx
 4264 030f 807C1430 		cmpb	$47, 48(%rsp,%rdx)
 4264      2F
 4265              		.loc 1 1648 0
 4266 0314 4863D0   		movslq	%eax, %rdx
 4267              		.loc 1 1647 0
 4268 0317 0F45EB   		cmovne	%ebx, %ebp
 4269              	.LVL551:
 4270              		.loc 1 1648 0
 4271 031a 41807C17 		cmpb	$47, 16(%r15,%rdx)
 4271      102F
 4272 0320 0F95C2   		setne	%dl
 4273 0323 0FB6D2   		movzbl	%dl, %edx
 4274 0326 01D0     		addl	%edx, %eax
 4275              	.LVL552:
 4276              		.loc 1 1651 0
 4277 0328 39C5     		cmpl	%eax, %ebp
 4278 032a 0F846C03 		je	.L472
 4278      0000
 4279              	.L575:
 4280 0330 29C5     		subl	%eax, %ebp
 4281              	.LVL553:
 4282 0332 89E8     		movl	%ebp, %eax
 4283              	.LVL554:
 4284              	.L469:
 4285              	.LBE670:
 4286              	.LBE672:
 4287              		.loc 1 857 0
 4288 0334 85C0     		testl	%eax, %eax
 4289 0336 7418     		je	.L474
 4290              		.loc 1 860 0
 4291 0338 488B7424 		movq	24(%rsp), %rsi
 4291      18
 4292 033d 4C89FF   		movq	%r15, %rdi
 4293 0340 E8000000 		call	_ZN15Fl_File_Chooser9directoryEPKc
 4293      00
 4294              	.LVL555:
 4295 0345 E922FFFF 		jmp	.L453
 4295      FF
 4296 034a 660F1F44 		.p2align 4,,10
 4296      0000
 4297              		.p2align 3
 4298              	.L474:
 4299              		.loc 1 861 0
 4300 0350 41F68710 		testb	$2, 6160(%r15)
 4300      18000002 
 4301 0358 0F841203 		je	.L591
 4301      0000
 4302              	.L509:
 4303              		.loc 1 862 0
 4304 035e 488B7C24 		movq	24(%rsp), %rdi
 4304      18
 4305 0363 E8000000 		call	_Z24_fl_filename_isdir_quickPKc
 4305      00
 4306              	.LVL556:
 4307 0368 85C0     		testl	%eax, %eax
 4308 036a 0F856502 		jne	.L592
 4308      0000
 4309              	.L476:
 4310              	.LVL557:
 4311 0370 498B8748 		movq	6216(%r15), %rax
 4311      180000
 4312              	.LBB673:
 4313              	.LBB674:
 4314              		.loc 1 1314 0
 4315 0377 80787C00 		cmpb	$0, 124(%rax)
 4316 037b 0F853003 		jne	.L593
 4316      0000
 4317              	.LVL558:
 4318              	.L511:
 4319              	.LBE674:
 4320              	.LBE673:
 4321              		.loc 1 867 0
 4322 0381 498B07   		movq	(%r15), %rax
 4323 0384 4885C0   		testq	%rax, %rax
 4324 0387 7409     		je	.L478
 4325              		.loc 1 867 0 is_stmt 0 discriminator 1
 4326 0389 498B7708 		movq	8(%r15), %rsi
 4327 038d 4C89FF   		movq	%r15, %rdi
 4328 0390 FFD0     		call	*%rax
 4329              	.LVL559:
 4330              	.L478:
 4331              		.loc 1 870 0 is_stmt 1
 4332 0392 498BBF18 		movq	6168(%r15), %rdi
 4332      180000
 4333 0399 488B07   		movq	(%rdi), %rax
 4334 039c FF5030   		call	*48(%rax)
 4335              	.LVL560:
 4336 039f E9C8FEFF 		jmp	.L453
 4336      FF
 4337              	.LVL561:
 4338              		.p2align 4,,10
 4339 03a4 0F1F4000 		.p2align 3
 4340              	.L493:
 4341              	.LBB676:
 4342              	.LBB664:
 4343              		.loc 1 960 0
 4344 03a8 8B542424 		movl	36(%rsp), %edx
 4345 03ac 85D2     		testl	%edx, %edx
 4346 03ae 0F8EC401 		jle	.L522
 4346      0000
 4347 03b4 3B5C2428 		cmpl	40(%rsp), %ebx
 4348 03b8 0F85BA01 		jne	.L522
 4348      0000
 4349              		.loc 1 961 0 discriminator 1
 4350 03be 498BBF38 		movq	6200(%r15), %rdi
 4350      180000
 4351 03c5 8B742424 		movl	36(%rsp), %esi
 4352 03c9 E8000000 		call	_ZNK10Fl_Browser4textEi
 4352      00
 4353              	.LVL562:
 4354 03ce 4889C7   		movq	%rax, %rdi
 4355 03d1 E8000000 		call	strlen
 4355      00
 4356              	.LVL563:
 4357              		.loc 1 960 0 discriminator 1
 4358 03d6 39C3     		cmpl	%eax, %ebx
 4359 03d8 0F840F01 		je	.L594
 4359      0000
 4360              	.LVL564:
 4361              	.L485:
 4362              		.loc 1 979 0
 4363 03de 85DB     		testl	%ebx, %ebx
 4364 03e0 751A     		jne	.L499
 4365              	.LVL565:
 4366              	.L578:
 4367              		.loc 1 980 0
 4368 03e2 498BBF38 		movq	6200(%r15), %rdi
 4368      180000
 4369 03e9 31F6     		xorl	%esi, %esi
 4370 03eb E8000000 		call	_ZN11Fl_Browser_8deselectEi
 4370      00
 4371              	.LVL566:
 4372              		.loc 1 981 0
 4373 03f0 498BBF38 		movq	6200(%r15), %rdi
 4373      180000
 4374 03f7 E8000000 		call	_ZN9Fl_Widget6redrawEv
 4374      00
 4375              	.LVL567:
 4376              	.L499:
 4377              		.loc 1 985 0
 4378 03fc 41F68710 		testb	$2, 6160(%r15)
 4378      18000002 
 4379 0404 751A     		jne	.L515
 4380              	.LVL568:
 4381 0406 498B8758 		movq	6232(%r15), %rax
 4381      180000
 4382              	.LBE664:
 4383              		.loc 1 995 0 discriminator 2
 4384 040d 31F6     		xorl	%esi, %esi
 4385 040f 488B7878 		movq	120(%rax), %rdi
 4386 0413 E8000000 		call	access
 4386      00
 4387              	.LVL569:
 4388 0418 85C0     		testl	%eax, %eax
 4389 041a 0F8540FE 		jne	.L505
 4389      FFFF
 4390              	.L515:
 4391              	.LVL570:
 4392 0420 498B8758 		movq	6232(%r15), %rax
 4392      180000
 4393              		.loc 1 996 0
 4394 0427 488B7878 		movq	120(%rax), %rdi
 4395 042b E8000000 		call	_Z17fl_filename_isdirPKc
 4395      00
 4396              	.LVL571:
 4397              		.loc 1 995 0
 4398 0430 85C0     		testl	%eax, %eax
 4399 0432 740E     		je	.L506
 4400              		.loc 1 996 0
 4401 0434 41F68710 		testb	$4, 6160(%r15)
 4401      18000004 
 4402 043c 0F841EFE 		je	.L505
 4402      FFFF
 4403              	.L506:
 4404              		.loc 1 997 0
 4405 0442 498BBF60 		movq	6240(%r15), %rdi
 4405      180000
 4406 0449 E8000000 		call	_ZN9Fl_Widget8activateEv
 4406      00
 4407              	.LVL572:
 4408 044e E919FEFF 		jmp	.L453
 4408      FF
 4409              	.LVL573:
 4410              		.p2align 4,,10
 4411 0453 0F1F4400 		.p2align 3
 4411      00
 4412              	.L589:
 4413              	.LBB665:
 4414              		.loc 1 929 0
 4415 0458 488DBC24 		leaq	2096(%rsp), %rdi
 4415      30080000 
 4416 0460 BA000800 		movl	$2048, %edx
 4416      00
 4417 0465 4889EE   		movq	%rbp, %rsi
 4418 0468 E8000000 		call	fl_strlcpy
 4418      00
 4419              	.LVL574:
 4420              		.loc 1 930 0
 4421 046d 488D8424 		leaq	2096(%rsp), %rax
 4421      30080000 
 4422              	.L488:
 4423 0475 8B08     		movl	(%rax), %ecx
 4424 0477 4883C004 		addq	$4, %rax
 4425 047b 8D91FFFE 		leal	-16843009(%rcx), %edx
 4425      FEFE
 4426 0481 F7D1     		notl	%ecx
 4427 0483 21CA     		andl	%ecx, %edx
 4428 0485 81E28080 		andl	$-2139062144, %edx
 4428      8080
 4429 048b 74E8     		je	.L488
 4430 048d 89D1     		movl	%edx, %ecx
 4431 048f C1E910   		shrl	$16, %ecx
 4432 0492 F7C28080 		testl	$32896, %edx
 4432      0000
 4433 0498 0F44D1   		cmove	%ecx, %edx
 4434 049b 488D4802 		leaq	2(%rax), %rcx
 4435 049f 480F44C1 		cmove	%rcx, %rax
 4436 04a3 89D1     		movl	%edx, %ecx
 4437 04a5 00D1     		addb	%dl, %cl
 4438 04a7 488D8C24 		leaq	2096(%rsp), %rcx
 4438      30080000 
 4439 04af 4883D803 		sbbq	$3, %rax
 4440 04b3 4829C8   		subq	%rcx, %rax
 4441 04b6 89C3     		movl	%eax, %ebx
 4442              	.LVL575:
 4443              		.loc 1 933 0
 4444 04b8 83E801   		subl	$1, %eax
 4445              	.LVL576:
 4446 04bb 4863D0   		movslq	%eax, %rdx
 4447 04be 80BC1430 		cmpb	$47, 2096(%rsp,%rdx)
 4447      0800002F 
 4448 04c6 750A     		jne	.L490
 4449              	.LVL577:
 4450              		.loc 1 935 0
 4451 04c8 C6841430 		movb	$0, 2096(%rsp,%rdx)
 4451      08000000 
 4452              		.loc 1 934 0
 4453 04d0 89C3     		movl	%eax, %ebx
 4454              	.LVL578:
 4455              	.L490:
 4456              	.LBB657:
 4457              	.LBB658:
 4458              		.loc 6 165 0
 4459 04d2 498BBF38 		movq	6200(%r15), %rdi
 4459      180000
 4460 04d9 31D2     		xorl	%edx, %edx
 4461 04db 4489EE   		movl	%r13d, %esi
 4462 04de E8000000 		call	_ZN10Fl_Browser12linepositionEiNS_16Fl_Line_PositionE
 4462      00
 4463              	.LVL579:
 4464              	.LBE658:
 4465              	.LBE657:
 4466 04e3 44896C24 		movl	%r13d, 36(%rsp)
 4466      24
 4467 04e8 E951FDFF 		jmp	.L486
 4467      FF
 4468              	.LVL580:
 4469              	.L594:
 4470              		.loc 1 963 0
 4471 04ed 498BBF38 		movq	6200(%r15), %rdi
 4471      180000
 4472 04f4 31F6     		xorl	%esi, %esi
 4473 04f6 E8000000 		call	_ZN11Fl_Browser_8deselectEi
 4473      00
 4474              	.LVL581:
 4475              		.loc 1 964 0
 4476 04fb 498BBF38 		movq	6200(%r15), %rdi
 4476      180000
 4477 0502 8B742424 		movl	36(%rsp), %esi
 4478 0506 BA010000 		movl	$1, %edx
 4478      00
 4479 050b E8000000 		call	_ZN10Fl_Browser6selectEii
 4479      00
 4480              	.LVL582:
 4481              		.loc 1 965 0
 4482 0510 498BBF38 		movq	6200(%r15), %rdi
 4482      180000
 4483 0517 E8000000 		call	_ZN9Fl_Widget6redrawEv
 4483      00
 4484              	.LVL583:
 4485 051c E9DBFEFF 		jmp	.L499
 4485      FF
 4486              	.LVL584:
 4487              		.p2align 4,,10
 4488 0521 0F1F8000 		.p2align 3
 4488      000000
 4489              	.L585:
 4490              	.LBE665:
 4491              	.LBE676:
 4492              	.LBE681:
 4493              	.LBB682:
 4494              	.LBB683:
 220:/usr/include/string.h **** }
 4495              		.loc 10 220 0
 4496 0528 BE240000 		movl	$36, %esi
 4496      00
 4497 052d 4889DF   		movq	%rbx, %rdi
 4498 0530 E8000000 		call	strchr
 4498      00
 4499              	.LVL585:
 4500              	.LBE683:
 4501              	.LBE682:
 4502              		.loc 1 825 0
 4503 0535 4885C0   		testq	%rax, %rax
 4504 0538 0F851FFB 		jne	.L457
 4504      FFFF
 4505              	.LVL586:
 4506              		.loc 1 837 0
 4507 053e 41807F10 		cmpb	$0, 16(%r15)
 4507      00
 4508 0543 0F857501 		jne	.L595
 4508      0000
 4509              	.L461:
 4510              		.loc 1 842 0
 4511 0549 488D4424 		leaq	48(%rsp), %rax
 4511      30
 4512 054e 4839C3   		cmpq	%rax, %rbx
 4513 0551 48894424 		movq	%rax, 24(%rsp)
 4513      18
 4514 0556 0F8470FB 		je	.L460
 4514      FFFF
 4515              		.loc 1 844 0
 4516 055c BA000800 		movl	$2048, %edx
 4516      00
 4517 0561 4889DE   		movq	%rbx, %rsi
 4518 0564 4889C7   		movq	%rax, %rdi
 4519 0567 E8000000 		call	fl_strlcpy
 4519      00
 4520              	.LVL587:
 4521 056c E95BFBFF 		jmp	.L460
 4521      FF
 4522              	.LVL588:
 4523              		.p2align 4,,10
 4524 0571 0F1F8000 		.p2align 3
 4524      000000
 4525              	.L522:
 4526 0578 8B442424 		movl	36(%rsp), %eax
 4527 057c 85C0     		testl	%eax, %eax
 4528 057e 0F95C2   		setne	%dl
 4529 0581 3B5C2428 		cmpl	40(%rsp), %ebx
 4530 0585 0F9FC0   		setg	%al
 4531              	.LBB684:
 4532              	.LBB677:
 4533              	.LBB666:
 4534              		.loc 1 966 0
 4535 0588 84C2     		testb	%al, %dl
 4536 058a 0F844EFE 		je	.L485
 4536      FFFF
 4537              		.loc 1 970 0
 4538 0590 488B6C24 		movq	8(%rsp), %rbp
 4538      08
 4539              	.LVL589:
 4540 0595 482B6C24 		subq	24(%rsp), %rbp
 4540      18
 4541              		.loc 1 971 0
 4542 059a 488D8C24 		leaq	2096(%rsp), %rcx
 4542      30080000 
 4543              		.loc 1 968 0
 4544 05a2 448B6424 		movl	40(%rsp), %r12d
 4544      28
 4545              	.LVL590:
 4546              		.loc 1 971 0
 4547 05a7 498BBF58 		movq	6232(%r15), %rdi
 4547      180000
 4548 05ae 4531C0   		xorl	%r8d, %r8d
 4549              		.loc 1 968 0
 4550 05b1 4101EC   		addl	%ebp, %r12d
 4551              		.loc 1 971 0
 4552 05b4 89EE     		movl	%ebp, %esi
 4553 05b6 4489E2   		movl	%r12d, %edx
 4554 05b9 E8000000 		call	_ZN9Fl_Input_7replaceEiiPKci
 4554      00
 4555              	.LVL591:
 4556              		.loc 1 978 0
 4557 05be 498BBF58 		movq	6232(%r15), %rdi
 4557      180000
 4558 05c5 8D342B   		leal	(%rbx,%rbp), %esi
 4559 05c8 4489E2   		movl	%r12d, %edx
 4560 05cb E8000000 		call	_ZN9Fl_Input_8positionEii
 4560      00
 4561              	.LVL592:
 4562 05d0 E927FEFF 		jmp	.L499
 4562      FF
 4563              	.LVL593:
 4564              	.L592:
 4565              	.LBE666:
 4566              	.LBE677:
 4567              		.loc 1 862 0 discriminator 2
 4568 05d5 41F68710 		testb	$4, 6160(%r15)
 4568      18000004 
 4569 05dd 0F858DFD 		jne	.L476
 4569      FFFF
 4570 05e3 E984FCFF 		jmp	.L453
 4570      FF
 4571              	.LVL594:
 4572              	.L588:
 4573              	.LBB678:
 4574              	.LBB667:
 4575              	.LBB659:
 4576              	.LBB654:
 4577              	.LBB653:
 4578              	.LBB650:
 4579              	.LBB651:
 4580              	.LBB652:
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
 4581              		.loc 2 65 0
 4582 05e8 4883EC08 		subq	$8, %rsp
 4583              		.cfi_def_cfa_offset 4232
 4584 05ec 4989D9   		movq	%rbx, %r9
 4585 05ef 41B80000 		movl	$.LC8, %r8d
 4585      0000
 4586 05f5 FF742410 		pushq	16(%rsp)
 4587              		.cfi_def_cfa_offset 4240
 4588 05f9 B9000800 		movl	$2048, %ecx
 4588      00
 4589 05fe BA010000 		movl	$1, %edx
 4589      00
 4590 0603 BE000800 		movl	$2048, %esi
 4590      00
 4591 0608 31C0     		xorl	%eax, %eax
 4592 060a 488DBC24 		leaq	2112(%rsp), %rdi
 4592      40080000 
 4593              	.LVL595:
 4594 0612 E8000000 		call	__snprintf_chk
 4594      00
 4595              	.LVL596:
 4596              	.LBE652:
 4597              	.LBE651:
 4598              		.loc 1 905 0
 4599 0617 498BBF58 		movq	6232(%r15), %rdi
 4599      180000
 4600 061e 488DB424 		leaq	2112(%rsp), %rsi
 4600      40080000 
 4601 0626 E8000000 		call	_ZN13Fl_File_Input5valueEPKc
 4601      00
 4602              	.LVL597:
 4603              		.loc 1 906 0
 4604 062b 488B7C24 		movq	40(%rsp), %rdi
 4604      28
 4605 0630 488DB424 		leaq	2112(%rsp), %rsi
 4605      40080000 
 4606 0638 BA000800 		movl	$2048, %edx
 4606      00
 4607 063d E8000000 		call	fl_strlcpy
 4607      00
 4608              	.LVL598:
 4609              	.LBE650:
 4610 0642 5E       		popq	%rsi
 4611              		.cfi_def_cfa_offset 4232
 4612 0643 5F       		popq	%rdi
 4613              		.cfi_def_cfa_offset 4224
 4614 0644 E932FBFF 		jmp	.L484
 4614      FF
 4615              	.LVL599:
 4616              	.L587:
 4617              	.LBE653:
 4618              	.LBE654:
 4619              	.LBE659:
 4620              	.LBB660:
 4621              	.LBB661:
 4622              		.loc 10 247 0
 4623 0649 488B7C24 		movq	24(%rsp), %rdi
 4623      18
 4624 064e BE5C0000 		movl	$92, %esi
 4624      00
 4625 0653 E8000000 		call	strrchr
 4625      00
 4626              	.LVL600:
 4627              	.LBE661:
 4628              	.LBE660:
 4629              		.loc 1 883 0
 4630 0658 4885C0   		testq	%rax, %rax
 4631              	.LBB663:
 4632              	.LBB662:
 4633              		.loc 10 247 0
 4634 065b 4989C5   		movq	%rax, %r13
 4635              	.LVL601:
 4636              	.LBE662:
 4637              	.LBE663:
 4638              		.loc 1 883 0
 4639 065e 0F8408FC 		je	.L453
 4639      FFFF
 4640 0664 E9ABFAFF 		jmp	.L514
 4640      FF
 4641              	.LVL602:
 4642 0669 0F1F8000 		.p2align 4,,10
 4642      000000
 4643              		.p2align 3
 4644              	.L591:
 4645              	.LBE667:
 4646              	.LBE678:
 4647              		.loc 1 861 0 discriminator 2
 4648 0670 488B7C24 		movq	24(%rsp), %rdi
 4648      18
 4649 0675 31F6     		xorl	%esi, %esi
 4650 0677 E8000000 		call	access
 4650      00
 4651              	.LVL603:
 4652 067c 85C0     		testl	%eax, %eax
 4653 067e 0F84DAFC 		je	.L509
 4653      FFFF
 4654              		.loc 1 874 0
 4655 0684 488B3500 		movq	_ZN15Fl_File_Chooser19existing_file_labelE(%rip), %rsi
 4655      000000
 4656 068b BF000000 		movl	$.LC33, %edi
 4656      00
 4657 0690 31C0     		xorl	%eax, %eax
 4658 0692 E8000000 		call	_Z8fl_alertPKcz
 4658      00
 4659              	.LVL604:
 4660 0697 E9D0FBFF 		jmp	.L453
 4660      FF
 4661              	.LVL605:
 4662              	.L472:
 4663              	.LBB679:
 4664              	.LBB671:
 4665              		.loc 1 1657 0
 4666 069c 488B7C24 		movq	24(%rsp), %rdi
 4666      18
 4667 06a1 4863D5   		movslq	%ebp, %rdx
 4668 06a4 4C89E6   		movq	%r12, %rsi
 4669 06a7 E8000000 		call	strncmp
 4669      00
 4670              	.LVL606:
 4671 06ac E983FCFF 		jmp	.L469
 4671      FF
 4672              	.LVL607:
 4673              	.L593:
 4674              	.LBE671:
 4675              	.LBE679:
 4676              	.LBB680:
 4677              	.LBB675:
 4678 06b1 4C89FF   		movq	%r15, %rdi
 4679 06b4 E8000000 		call	_ZN15Fl_File_Chooser14update_previewEv.part.23
 4679      00
 4680              	.LVL608:
 4681 06b9 E9C3FCFF 		jmp	.L511
 4681      FF
 4682              	.LVL609:
 4683              	.L595:
 4684              	.LBE675:
 4685              	.LBE680:
 4686              	.LBE684:
 4687              		.loc 1 837 0 discriminator 1
 4688 06be 4080FD2F 		cmpb	$47, %bpl
 4689 06c2 0F8481FE 		je	.L461
 4689      FFFF
 4690 06c8 488D4424 		leaq	48(%rsp), %rax
 4690      30
 4691 06cd 48894424 		movq	%rax, 24(%rsp)
 4691      18
 4692 06d2 E9C1F9FF 		jmp	.L518
 4692      FF
 4693              	.LVL610:
 4694              	.L590:
 4695              		.loc 1 1002 0
 4696 06d7 E8000000 		call	__stack_chk_fail
 4696      00
 4697              	.LVL611:
 4698              		.cfi_endproc
 4699              	.LFE723:
 4701              		.section	.text.unlikely._ZN15Fl_File_Chooser10fileNameCBEv
 4702              	.LCOLDE37:
 4703              		.section	.text._ZN15Fl_File_Chooser10fileNameCBEv
 4704              	.LHOTE37:
 4705              		.section	.text.unlikely._ZN15Fl_File_Chooser20rescan_keep_filenameEv,"ax",@progbits
 4706              		.align 2
 4707              	.LCOLDB38:
 4708              		.section	.text._ZN15Fl_File_Chooser20rescan_keep_filenameEv,"ax",@progbits
 4709              	.LHOTB38:
 4710              		.align 2
 4711              		.p2align 4,,15
 4712              		.globl	_ZN15Fl_File_Chooser20rescan_keep_filenameEv
 4714              	_ZN15Fl_File_Chooser20rescan_keep_filenameEv:
 4715              	.LFB729:
 4716              		.loc 1 1173 0
 4717              		.cfi_startproc
 4718              	.LVL612:
 4719 0000 4154     		pushq	%r12
 4720              		.cfi_def_cfa_offset 16
 4721              		.cfi_offset 12, -16
 4722 0002 55       		pushq	%rbp
 4723              		.cfi_def_cfa_offset 24
 4724              		.cfi_offset 6, -24
 4725 0003 4889FD   		movq	%rdi, %rbp
 4726 0006 53       		pushq	%rbx
 4727              		.cfi_def_cfa_offset 32
 4728              		.cfi_offset 3, -32
 4729 0007 4881EC10 		subq	$2064, %rsp
 4729      080000
 4730              		.cfi_def_cfa_offset 2096
 4731              		.loc 1 1173 0
 4732 000e 64488B04 		movq	%fs:40, %rax
 4732      25280000 
 4732      00
 4733 0017 48898424 		movq	%rax, 2056(%rsp)
 4733      08080000 
 4734 001f 31C0     		xorl	%eax, %eax
 4735              	.LVL613:
 4736 0021 488B8758 		movq	6232(%rdi), %rax
 4736      180000
 4737 0028 4C8B6078 		movq	120(%rax), %r12
 4738              	.LVL614:
 4739              		.loc 1 1176 0
 4740 002c 4D85E4   		testq	%r12, %r12
 4741 002f 0F840301 		je	.L597
 4741      0000
 4742              		.loc 1 1176 0 is_stmt 0 discriminator 1
 4743 0035 41803C24 		cmpb	$0, (%r12)
 4743      00
 4744 003a 0F84F800 		je	.L597
 4744      0000
 4745              		.loc 1 1176 0 discriminator 2
 4746 0040 4C89E7   		movq	%r12, %rdi
 4747              	.LVL615:
 4748 0043 E8000000 		call	strlen
 4748      00
 4749              	.LVL616:
 4750 0048 41807C04 		cmpb	$47, -1(%r12,%rax)
 4750      FF2F
 4751 004e 0F84E400 		je	.L597
 4751      0000
 4752              		.loc 1 1183 0 is_stmt 1
 4753 0054 BA000800 		movl	$2048, %edx
 4753      00
 4754 0059 4C89E6   		movq	%r12, %rsi
 4755 005c 4889E7   		movq	%rsp, %rdi
 4756 005f E8000000 		call	fl_strlcpy
 4756      00
 4757              	.LVL617:
 4758              		.loc 1 1186 0
 4759 0064 488BBD38 		movq	6200(%rbp), %rdi
 4759      180000
 4760 006b 488B1500 		movq	_ZN15Fl_File_Chooser4sortE(%rip), %rdx
 4760      000000
 4761 0072 488D7510 		leaq	16(%rbp), %rsi
 4762              		.loc 1 1183 0
 4763 0076 4889E3   		movq	%rsp, %rbx
 4764              		.loc 1 1186 0
 4765 0079 E8000000 		call	_ZN15Fl_File_Browser4loadEPKcPFiPP6direntS4_E
 4765      00
 4766              	.LVL618:
 4767 007e 488B8550 		movq	6224(%rbp), %rax
 4767      180000
 4768              		.loc 1 1188 0
 4769 0085 80787C00 		cmpb	$0, 124(%rax)
 4770 0089 0F840101 		je	.L618
 4770      0000
 4771              	.LVL619:
 4772              	.L600:
 4773 008f 488B8548 		movq	6216(%rbp), %rax
 4773      180000
 4774              	.LBB685:
 4775              	.LBB686:
 4776              		.loc 1 1314 0
 4777 0096 80787C00 		cmpb	$0, 124(%rax)
 4778 009a 0F85E000 		jne	.L619
 4778      0000
 4779              	.LVL620:
 4780              	.L601:
 4781              	.LBE686:
 4782              	.LBE685:
 4783              	.LBB688:
 4784              	.LBB689:
 4785              		.loc 10 247 0
 4786 00a0 4889DF   		movq	%rbx, %rdi
 4787 00a3 BE2F0000 		movl	$47, %esi
 4787      00
 4788 00a8 E8000000 		call	strrchr
 4788      00
 4789              	.LVL621:
 4790              	.LBE689:
 4791              	.LBE688:
 4792              		.loc 1 1200 0
 4793 00ad 488BBD38 		movq	6200(%rbp), %rdi
 4793      180000
 4794              		.loc 1 1197 0
 4795 00b4 4885C0   		testq	%rax, %rax
 4796 00b7 4C8D6001 		leaq	1(%rax), %r12
 4797 00bb 4C0F44E3 		cmove	%rbx, %r12
 4798              	.LVL622:
 4799              		.loc 1 1200 0
 4800 00bf 8B878402 		movl	644(%rdi), %eax
 4800      0000
 4801 00c5 85C0     		testl	%eax, %eax
 4802 00c7 0F8E9300 		jle	.L603
 4802      0000
 4803 00cd BB010000 		movl	$1, %ebx
 4803      00
 4804 00d2 EB16     		jmp	.L606
 4805              	.LVL623:
 4806              		.p2align 4,,10
 4807 00d4 0F1F4000 		.p2align 3
 4808              	.L604:
 4809              		.loc 1 1200 0 is_stmt 0 discriminator 2
 4810 00d8 488BBD38 		movq	6200(%rbp), %rdi
 4810      180000
 4811 00df 83C301   		addl	$1, %ebx
 4812              	.LVL624:
 4813 00e2 3B9F8402 		cmpl	644(%rdi), %ebx
 4813      0000
 4814 00e8 7F76     		jg	.L603
 4815              	.LVL625:
 4816              	.L606:
 4817              		.loc 1 1204 0 is_stmt 1
 4818 00ea 89DE     		movl	%ebx, %esi
 4819 00ec E8000000 		call	_ZNK10Fl_Browser4textEi
 4819      00
 4820              	.LVL626:
 4821 00f1 4C89E6   		movq	%r12, %rsi
 4822 00f4 4889C7   		movq	%rax, %rdi
 4823 00f7 E8000000 		call	strcmp
 4823      00
 4824              	.LVL627:
 4825 00fc 85C0     		testl	%eax, %eax
 4826 00fe 75D8     		jne	.L604
 4827              	.LVL628:
 4828              	.LBB690:
 4829              	.LBB691:
 4830              		.loc 6 165 0
 4831 0100 488BBD38 		movq	6200(%rbp), %rdi
 4831      180000
 4832 0107 31D2     		xorl	%edx, %edx
 4833 0109 89DE     		movl	%ebx, %esi
 4834 010b E8000000 		call	_ZN10Fl_Browser12linepositionEiNS_16Fl_Line_PositionE
 4834      00
 4835              	.LVL629:
 4836              	.LBE691:
 4837              	.LBE690:
 4838              		.loc 1 1207 0
 4839 0110 488BBD38 		movq	6200(%rbp), %rdi
 4839      180000
 4840 0117 BA010000 		movl	$1, %edx
 4840      00
 4841 011c 89DE     		movl	%ebx, %esi
 4842 011e E8000000 		call	_ZN10Fl_Browser6selectEii
 4842      00
 4843              	.LVL630:
 4844              	.L605:
 4845              		.loc 1 1214 0
 4846 0123 488BBD60 		movq	6240(%rbp), %rdi
 4846      180000
 4847 012a E8000000 		call	_ZN9Fl_Widget8activateEv
 4847      00
 4848              	.LVL631:
 4849 012f EB0F     		jmp	.L596
 4850              	.LVL632:
 4851              		.p2align 4,,10
 4852 0131 0F1F8000 		.p2align 3
 4852      000000
 4853              	.L597:
 4854              		.loc 1 1177 0
 4855 0138 4889EF   		movq	%rbp, %rdi
 4856 013b E8000000 		call	_ZN15Fl_File_Chooser6rescanEv
 4856      00
 4857              	.LVL633:
 4858              	.L596:
 4859              		.loc 1 1217 0
 4860 0140 488B8424 		movq	2056(%rsp), %rax
 4860      08080000 
 4861 0148 64483304 		xorq	%fs:40, %rax
 4861      25280000 
 4861      00
 4862 0151 754A     		jne	.L620
 4863 0153 4881C410 		addq	$2064, %rsp
 4863      080000
 4864              		.cfi_remember_state
 4865              		.cfi_def_cfa_offset 32
 4866 015a 5B       		popq	%rbx
 4867              		.cfi_def_cfa_offset 24
 4868 015b 5D       		popq	%rbp
 4869              		.cfi_def_cfa_offset 16
 4870              	.LVL634:
 4871 015c 415C     		popq	%r12
 4872              		.cfi_def_cfa_offset 8
 4873 015e C3       		ret
 4874              	.LVL635:
 4875 015f 90       		.p2align 4,,10
 4876              		.p2align 3
 4877              	.L603:
 4878              		.cfi_restore_state
 4879              		.loc 1 1213 0
 4880 0160 F6851018 		testb	$2, 6160(%rbp)
 4880      000002
 4881 0167 75BA     		jne	.L605
 4882              		.loc 1 1216 0
 4883 0169 488BBD60 		movq	6240(%rbp), %rdi
 4883      180000
 4884              	.LVL636:
 4885 0170 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 4885      00
 4886              	.LVL637:
 4887 0175 EBC9     		jmp	.L596
 4888              	.LVL638:
 4889 0177 660F1F84 		.p2align 4,,10
 4889      00000000 
 4889      00
 4890              		.p2align 3
 4891              	.L619:
 4892              	.LBB692:
 4893              	.LBB687:
 4894 0180 4889EF   		movq	%rbp, %rdi
 4895 0183 E8000000 		call	_ZN15Fl_File_Chooser14update_previewEv.part.23
 4895      00
 4896              	.LVL639:
 4897 0188 E913FFFF 		jmp	.L601
 4897      FF
 4898              	.LVL640:
 4899 018d 0F1F00   		.p2align 4,,10
 4900              		.p2align 3
 4901              	.L618:
 4902              	.LBE687:
 4903              	.LBE692:
 4904              		.loc 1 1188 0 discriminator 1
 4905 0190 4889EF   		movq	%rbp, %rdi
 4906 0193 E8000000 		call	_ZN15Fl_File_Chooser19remove_hidden_filesEv
 4906      00
 4907              	.LVL641:
 4908 0198 E9F2FEFF 		jmp	.L600
 4908      FF
 4909              	.L620:
 4910              		.loc 1 1217 0
 4911 019d E8000000 		call	__stack_chk_fail
 4911      00
 4912              	.LVL642:
 4913              		.cfi_endproc
 4914              	.LFE729:
 4916              		.section	.text.unlikely._ZN15Fl_File_Chooser20rescan_keep_filenameEv
 4917              	.LCOLDE38:
 4918              		.section	.text._ZN15Fl_File_Chooser20rescan_keep_filenameEv
 4919              	.LHOTE38:
 4920              		.section	.text.unlikely._ZN15Fl_File_Chooser12showChoiceCBEv,"ax",@progbits
 4921              		.align 2
 4922              	.LCOLDB39:
 4923              		.section	.text._ZN15Fl_File_Chooser12showChoiceCBEv,"ax",@progbits
 4924              	.LHOTB39:
 4925              		.align 2
 4926              		.p2align 4,,15
 4927              		.globl	_ZN15Fl_File_Chooser12showChoiceCBEv
 4929              	_ZN15Fl_File_Chooser12showChoiceCBEv:
 4930              	.LFB730:
 4931              		.loc 1 1226 0
 4932              		.cfi_startproc
 4933              	.LVL643:
 4934 0000 4155     		pushq	%r13
 4935              		.cfi_def_cfa_offset 16
 4936              		.cfi_offset 13, -16
 4937 0002 4154     		pushq	%r12
 4938              		.cfi_def_cfa_offset 24
 4939              		.cfi_offset 12, -24
 4940 0004 48C7C2C8 		movq	$-56, %rdx
 4940      FFFFFF
 4941 000b 55       		pushq	%rbp
 4942              		.cfi_def_cfa_offset 32
 4943              		.cfi_offset 6, -32
 4944 000c 53       		pushq	%rbx
 4945              		.cfi_def_cfa_offset 40
 4946              		.cfi_offset 3, -40
 4947 000d 4889FB   		movq	%rdi, %rbx
 4948 0010 4881EC18 		subq	$2072, %rsp
 4948      080000
 4949              		.cfi_def_cfa_offset 2112
 4950              		.loc 1 1226 0
 4951 0017 64488B04 		movq	%fs:40, %rax
 4951      25280000 
 4951      00
 4952 0020 48898424 		movq	%rax, 2056(%rsp)
 4952      08080000 
 4953 0028 31C0     		xorl	%eax, %eax
 4954              		.loc 1 1233 0
 4955 002a 488B8720 		movq	6176(%rdi), %rax
 4955      180000
 4956              	.LVL644:
 4957 0031 488B4878 		movq	120(%rax), %rcx
 4958 0035 488B8080 		movq	128(%rax), %rax
 4958      000000
 4959              	.LVL645:
 4960              	.LBB693:
 4961              	.LBB694:
 4962              	.LBB695:
 140:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int value(const Fl_Menu_Item*);
 4963              		.loc 8 140 0
 4964 003c 4885C0   		testq	%rax, %rax
 4965 003f 741F     		je	.L622
 4966 0041 4829C8   		subq	%rcx, %rax
 4967 0044 48C1F803 		sarq	$3, %rax
 4968 0048 69C0B76D 		imull	$-1227133513, %eax, %eax
 4968      DBB6
 4969 004e 4863D0   		movslq	%eax, %rdx
 4970 0051 488D04D5 		leaq	0(,%rdx,8), %rax
 4970      00000000 
 4971 0059 48C1E206 		salq	$6, %rdx
 4972 005d 4829C2   		subq	%rax, %rdx
 4973              	.L622:
 4974              	.LVL646:
 4975              	.LBE695:
 4976              	.LBE694:
 4977              	.LBE693:
 4978              	.LBB696:
 4979              	.LBB697:
 4980              		.loc 8 152 0
 4981 0060 4C8B2411 		movq	(%rcx,%rdx), %r12
 4982              	.LBE697:
 4983              	.LBE696:
 4984              		.loc 1 1235 0
 4985 0064 4C8B2D00 		movq	_ZN15Fl_File_Chooser19custom_filter_labelE(%rip), %r13
 4985      000000
 4986 006b 4C89E7   		movq	%r12, %rdi
 4987              	.LVL647:
 4988 006e 4C89EE   		movq	%r13, %rsi
 4989 0071 E8000000 		call	strcmp
 4989      00
 4990              	.LVL648:
 4991 0076 85C0     		testl	%eax, %eax
 4992 0078 0F849200 		je	.L641
 4992      0000
 4993              	.LVL649:
 4994              	.LBB698:
 4995              	.LBB699:
 226:/usr/include/string.h **** }
 4996              		.loc 10 226 0
 4997 007e BE280000 		movl	$40, %esi
 4997      00
 4998 0083 4C89E7   		movq	%r12, %rdi
 4999              	.LBE699:
 5000              	.LBE698:
 5001              		.loc 1 1244 0
 5002 0086 488DAB10 		leaq	2064(%rbx), %rbp
 5002      080000
 5003              	.LBB701:
 5004              	.LBB700:
 226:/usr/include/string.h **** }
 5005              		.loc 10 226 0
 5006 008d E8000000 		call	strchr
 5006      00
 5007              	.LVL650:
 5008              	.LBE700:
 5009              	.LBE701:
 5010              		.loc 1 1243 0
 5011 0092 4885C0   		testq	%rax, %rax
 5012 0095 0F84E500 		je	.L642
 5012      0000
 5013              		.loc 1 1246 0
 5014 009b 488D7001 		leaq	1(%rax), %rsi
 5015 009f BA000800 		movl	$2048, %edx
 5015      00
 5016 00a4 4889EF   		movq	%rbp, %rdi
 5017 00a7 E8000000 		call	fl_strlcpy
 5017      00
 5018              	.LVL651:
 5019              	.LBB702:
 5020              	.LBB703:
 5021              		.loc 10 247 0
 5022 00ac BE290000 		movl	$41, %esi
 5022      00
 5023 00b1 4889EF   		movq	%rbp, %rdi
 5024 00b4 E8000000 		call	strrchr
 5024      00
 5025              	.LVL652:
 5026              	.LBE703:
 5027              	.LBE702:
 5028              		.loc 1 1247 0
 5029 00b9 4885C0   		testq	%rax, %rax
 5030 00bc 7403     		je	.L624
 5031              		.loc 1 1247 0 is_stmt 0 discriminator 1
 5032 00be C60000   		movb	$0, (%rax)
 5033              	.L624:
 5034              		.loc 1 1250 0 is_stmt 1
 5035 00c1 488BBB38 		movq	6200(%rbx), %rdi
 5035      180000
 5036 00c8 4889EE   		movq	%rbp, %rsi
 5037 00cb E8000000 		call	_ZN15Fl_File_Browser6filterEPKc
 5037      00
 5038              	.LVL653:
 5039              		.loc 1 1252 0
 5040 00d0 4889DF   		movq	%rbx, %rdi
 5041 00d3 E8000000 		call	_ZN15Fl_File_Chooser5shownEv
 5041      00
 5042              	.LVL654:
 5043 00d8 85C0     		testl	%eax, %eax
 5044 00da 7408     		je	.L621
 5045              		.loc 1 1254 0
 5046 00dc 4889DF   		movq	%rbx, %rdi
 5047 00df E8000000 		call	_ZN15Fl_File_Chooser20rescan_keep_filenameEv
 5047      00
 5048              	.LVL655:
 5049              	.L621:
 5050              		.loc 1 1256 0
 5051 00e4 488B8424 		movq	2056(%rsp), %rax
 5051      08080000 
 5052 00ec 64483304 		xorq	%fs:40, %rax
 5052      25280000 
 5052      00
 5053 00f5 0F859A00 		jne	.L643
 5053      0000
 5054 00fb 4881C418 		addq	$2072, %rsp
 5054      080000
 5055              		.cfi_remember_state
 5056              		.cfi_def_cfa_offset 40
 5057 0102 5B       		popq	%rbx
 5058              		.cfi_def_cfa_offset 32
 5059              	.LVL656:
 5060 0103 5D       		popq	%rbp
 5061              		.cfi_def_cfa_offset 24
 5062 0104 415C     		popq	%r12
 5063              		.cfi_def_cfa_offset 16
 5064 0106 415D     		popq	%r13
 5065              		.cfi_def_cfa_offset 8
 5066 0108 C3       		ret
 5067              	.LVL657:
 5068 0109 0F1F8000 		.p2align 4,,10
 5068      000000
 5069              		.p2align 3
 5070              	.L641:
 5071              		.cfi_restore_state
 5072              		.loc 1 1236 0
 5073 0110 488DAB10 		leaq	2064(%rbx), %rbp
 5073      080000
 5074 0117 4C89EA   		movq	%r13, %rdx
 5075 011a BF000000 		movl	$.LC33, %edi
 5075      00
 5076 011f 4889EE   		movq	%rbp, %rsi
 5077 0122 E8000000 		call	_Z8fl_inputPKcS0_z
 5077      00
 5078              	.LVL658:
 5079 0127 4885C0   		testq	%rax, %rax
 5080 012a 4989C4   		movq	%rax, %r12
 5081              	.LVL659:
 5082 012d 7492     		je	.L624
 5083              		.loc 1 1237 0
 5084 012f BA000800 		movl	$2048, %edx
 5084      00
 5085 0134 4889EF   		movq	%rbp, %rdi
 5086 0137 4889C6   		movq	%rax, %rsi
 5087 013a E8000000 		call	fl_strlcpy
 5087      00
 5088              	.LVL660:
 5089              		.loc 1 1239 0
 5090 013f 4C89E6   		movq	%r12, %rsi
 5091 0142 4889E7   		movq	%rsp, %rdi
 5092 0145 E8000000 		call	_ZL14quote_pathnamePcPKci.constprop.25
 5092      00
 5093              	.LVL661:
 5094              		.loc 1 1240 0
 5095 014a 488BBB20 		movq	6176(%rbx), %rdi
 5095      180000
 5096 0151 4889E6   		movq	%rsp, %rsi
 5097 0154 E8000000 		call	_ZN8Fl_Menu_3addEPKc
 5097      00
 5098              	.LVL662:
 5099              		.loc 1 1241 0
 5100 0159 488BBB20 		movq	6176(%rbx), %rdi
 5100      180000
 5101 0160 E8000000 		call	_ZNK8Fl_Menu_4sizeEv
 5101      00
 5102              	.LVL663:
 5103 0165 488BBB20 		movq	6176(%rbx), %rdi
 5103      180000
 5104 016c 8D70FE   		leal	-2(%rax), %esi
 5105 016f E8000000 		call	_ZN9Fl_Choice5valueEi
 5105      00
 5106              	.LVL664:
 5107 0174 E948FFFF 		jmp	.L624
 5107      FF
 5108              	.LVL665:
 5109 0179 0F1F8000 		.p2align 4,,10
 5109      000000
 5110              		.p2align 3
 5111              	.L642:
 5112              		.loc 1 1244 0
 5113 0180 BA000800 		movl	$2048, %edx
 5113      00
 5114 0185 4C89E6   		movq	%r12, %rsi
 5115 0188 4889EF   		movq	%rbp, %rdi
 5116 018b E8000000 		call	fl_strlcpy
 5116      00
 5117              	.LVL666:
 5118 0190 E92CFFFF 		jmp	.L624
 5118      FF
 5119              	.L643:
 5120              		.loc 1 1256 0
 5121 0195 E8000000 		call	__stack_chk_fail
 5121      00
 5122              	.LVL667:
 5123              		.cfi_endproc
 5124              	.LFE730:
 5126              		.section	.text.unlikely._ZN15Fl_File_Chooser12showChoiceCBEv
 5127              	.LCOLDE39:
 5128              		.section	.text._ZN15Fl_File_Chooser12showChoiceCBEv
 5129              	.LHOTE39:
 5130              		.section	.rodata.str1.1
 5131              	.LC40:
 5132 0064 2A00     		.string	"*"
 5133              	.LC41:
 5134 0066 282A2900 		.string	"(*)"
 5135              		.section	.text.unlikely._ZN15Fl_File_Chooser6filterEPKc,"ax",@progbits
 5136              		.align 2
 5137              	.LCOLDB42:
 5138              		.section	.text._ZN15Fl_File_Chooser6filterEPKc,"ax",@progbits
 5139              	.LHOTB42:
 5140              		.align 2
 5141              		.p2align 4,,15
 5142              		.globl	_ZN15Fl_File_Chooser6filterEPKc
 5144              	_ZN15Fl_File_Chooser6filterEPKc:
 5145              	.LFB724:
 5146              		.loc 1 1011 0
 5147              		.cfi_startproc
 5148              	.LVL668:
 5149 0000 4157     		pushq	%r15
 5150              		.cfi_def_cfa_offset 16
 5151              		.cfi_offset 15, -16
 5152 0002 4156     		pushq	%r14
 5153              		.cfi_def_cfa_offset 24
 5154              		.cfi_offset 14, -24
 5155 0004 4155     		pushq	%r13
 5156              		.cfi_def_cfa_offset 32
 5157              		.cfi_offset 13, -32
 5158 0006 4154     		pushq	%r12
 5159              		.cfi_def_cfa_offset 40
 5160              		.cfi_offset 12, -40
 5161 0008 4989FD   		movq	%rdi, %r13
 5162 000b 55       		pushq	%rbp
 5163              		.cfi_def_cfa_offset 48
 5164              		.cfi_offset 6, -48
 5165 000c 53       		pushq	%rbx
 5166              		.cfi_def_cfa_offset 56
 5167              		.cfi_offset 3, -56
 5168 000d 4881EC18 		subq	$2072, %rsp
 5168      080000
 5169              		.cfi_def_cfa_offset 2128
 5170              		.loc 1 1011 0
 5171 0014 64488B04 		movq	%fs:40, %rax
 5171      25280000 
 5171      00
 5172 001d 48898424 		movq	%rax, 2056(%rsp)
 5172      08080000 
 5173 0025 31C0     		xorl	%eax, %eax
 5174              		.loc 1 1020 0
 5175 0027 4885F6   		testq	%rsi, %rsi
 5176 002a 0F845801 		je	.L656
 5176      0000
 5177              		.loc 1 1020 0 is_stmt 0 discriminator 2
 5178 0030 803E00   		cmpb	$0, (%rsi)
 5179 0033 B8000000 		movl	$.LC40, %eax
 5179      00
 5180 0038 480F44F0 		cmove	%rax, %rsi
 5181              	.LVL669:
 5182              	.L645:
 5183              		.loc 1 1023 0 is_stmt 1
 5184 003c 4889F7   		movq	%rsi, %rdi
 5185              	.LVL670:
 5186 003f E8000000 		call	strdup
 5186      00
 5187              	.LVL671:
 5188              		.loc 1 1026 0
 5189 0044 498BBD20 		movq	6176(%r13), %rdi
 5189      180000
 5190              		.loc 1 1023 0
 5191 004b 4989C7   		movq	%rax, %r15
 5192              	.LVL672:
 5193              		.loc 1 1026 0
 5194 004e E8000000 		call	_ZN8Fl_Menu_5clearEv
 5194      00
 5195              	.LVL673:
 5196              		.loc 1 1028 0
 5197 0053 4D85FF   		testq	%r15, %r15
 5198 0056 0F840B01 		je	.L646
 5198      0000
 5199 005c 41803F00 		cmpb	$0, (%r15)
 5200 0060 0F840101 		je	.L646
 5200      0000
 5201 0066 4C89FB   		movq	%r15, %rbx
 5202 0069 4531E4   		xorl	%r12d, %r12d
 5203 006c 41BE0000 		movl	$.LC40, %r14d
 5203      0000
 5204 0072 EB2B     		jmp	.L649
 5205              	.LVL674:
 5206              		.p2align 4,,10
 5207 0074 0F1F4000 		.p2align 3
 5208              	.L670:
 5209              		.loc 1 1033 0
 5210 0078 498BBD20 		movq	6176(%r13), %rdi
 5210      180000
 5211 007f 488B3500 		movq	_ZN15Fl_File_Chooser15all_files_labelE(%rip), %rsi
 5211      000000
 5212              		.loc 1 1034 0
 5213 0086 41BC0100 		movl	$1, %r12d
 5213      0000
 5214              	.LVL675:
 5215              		.loc 1 1033 0
 5216 008c E8000000 		call	_ZN8Fl_Menu_3addEPKc
 5216      00
 5217              	.LVL676:
 5218              		.loc 1 1028 0
 5219 0091 4885ED   		testq	%rbp, %rbp
 5220 0094 746D     		je	.L648
 5221              	.L671:
 5222              		.loc 1 1028 0 is_stmt 0 discriminator 2
 5223 0096 807D0000 		cmpb	$0, 0(%rbp)
 5224 009a 7467     		je	.L648
 5225 009c 4889EB   		movq	%rbp, %rbx
 5226              	.LVL677:
 5227              	.L649:
 5228              	.LBB704:
 5229              	.LBB705:
 220:/usr/include/string.h **** }
 5230              		.loc 10 220 0 is_stmt 1
 5231 009f BE090000 		movl	$9, %esi
 5231      00
 5232 00a4 4889DF   		movq	%rbx, %rdi
 5233 00a7 E8000000 		call	strchr
 5233      00
 5234              	.LVL678:
 5235              	.LBE705:
 5236              	.LBE704:
 5237              		.loc 1 1030 0
 5238 00ac 4885C0   		testq	%rax, %rax
 5239 00af 0F84AB00 		je	.L658
 5239      0000
 5240              		.loc 1 1030 0 is_stmt 0 discriminator 1
 5241 00b5 488D6801 		leaq	1(%rax), %rbp
 5242              	.LVL679:
 5243 00b9 C60000   		movb	$0, (%rax)
 5244              	.LVL680:
 5245              	.L650:
 5246              		.loc 1 1032 0 is_stmt 1
 5247 00bc B9020000 		movl	$2, %ecx
 5247      00
 5248 00c1 4889DE   		movq	%rbx, %rsi
 5249 00c4 4C89F7   		movq	%r14, %rdi
 5250 00c7 F3A6     		repz cmpsb
 5251              	.LVL681:
 5252 00c9 74AD     		je	.L670
 5253              		.loc 1 1036 0
 5254 00cb 4889DE   		movq	%rbx, %rsi
 5255 00ce 4889E7   		movq	%rsp, %rdi
 5256 00d1 E8000000 		call	_ZL14quote_pathnamePcPKci.constprop.25
 5256      00
 5257              	.LVL682:
 5258              		.loc 1 1037 0
 5259 00d6 498BBD20 		movq	6176(%r13), %rdi
 5259      180000
 5260 00dd 4889E6   		movq	%rsp, %rsi
 5261 00e0 E8000000 		call	_ZN8Fl_Menu_3addEPKc
 5261      00
 5262              	.LVL683:
 5263              	.LBB706:
 5264              	.LBB707:
 248:/usr/include/string.h **** }
 249:/usr/include/string.h **** 
 250:/usr/include/string.h **** __extern_always_inline const char *
 251:/usr/include/string.h **** strrchr (const char *__s, int __c) __THROW
 252:/usr/include/string.h **** {
 253:/usr/include/string.h ****   return __builtin_strrchr (__s, __c);
 254:/usr/include/string.h **** }
 255:/usr/include/string.h **** # endif
 256:/usr/include/string.h **** }
 257:/usr/include/string.h **** #else
 258:/usr/include/string.h **** extern char *strrchr (const char *__s, int __c)
 259:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 260:/usr/include/string.h **** #endif
 261:/usr/include/string.h **** __END_NAMESPACE_STD
 262:/usr/include/string.h **** 
 263:/usr/include/string.h **** #ifdef __USE_GNU
 264:/usr/include/string.h **** /* This function is similar to `strchr'.  But it returns a pointer to
 265:/usr/include/string.h ****    the closing NUL byte in case C is not found in S.  */
 266:/usr/include/string.h **** # ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 267:/usr/include/string.h **** extern "C++" char *strchrnul (char *__s, int __c)
 268:/usr/include/string.h ****      __THROW __asm ("strchrnul") __attribute_pure__ __nonnull ((1));
 269:/usr/include/string.h **** extern "C++" const char *strchrnul (const char *__s, int __c)
 270:/usr/include/string.h ****      __THROW __asm ("strchrnul") __attribute_pure__ __nonnull ((1));
 271:/usr/include/string.h **** # else
 272:/usr/include/string.h **** extern char *strchrnul (const char *__s, int __c)
 273:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1));
 274:/usr/include/string.h **** # endif
 275:/usr/include/string.h **** #endif
 276:/usr/include/string.h **** 
 277:/usr/include/string.h **** __BEGIN_NAMESPACE_STD
 278:/usr/include/string.h **** /* Return the length of the initial segment of S which
 279:/usr/include/string.h ****    consists entirely of characters not in REJECT.  */
 280:/usr/include/string.h **** extern size_t strcspn (const char *__s, const char *__reject)
 281:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 282:/usr/include/string.h **** /* Return the length of the initial segment of S which
 283:/usr/include/string.h ****    consists entirely of characters in ACCEPT.  */
 284:/usr/include/string.h **** extern size_t strspn (const char *__s, const char *__accept)
 285:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 286:/usr/include/string.h **** /* Find the first occurrence in S of any character in ACCEPT.  */
 287:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 288:/usr/include/string.h **** extern "C++"
 289:/usr/include/string.h **** {
 290:/usr/include/string.h **** extern char *strpbrk (char *__s, const char *__accept)
 291:/usr/include/string.h ****      __THROW __asm ("strpbrk") __attribute_pure__ __nonnull ((1, 2));
 292:/usr/include/string.h **** extern const char *strpbrk (const char *__s, const char *__accept)
 293:/usr/include/string.h ****      __THROW __asm ("strpbrk") __attribute_pure__ __nonnull ((1, 2));
 294:/usr/include/string.h **** 
 295:/usr/include/string.h **** # ifdef __OPTIMIZE__
 296:/usr/include/string.h **** __extern_always_inline char *
 297:/usr/include/string.h **** strpbrk (char *__s, const char *__accept) __THROW
 298:/usr/include/string.h **** {
 299:/usr/include/string.h ****   return __builtin_strpbrk (__s, __accept);
 300:/usr/include/string.h **** }
 301:/usr/include/string.h **** 
 302:/usr/include/string.h **** __extern_always_inline const char *
 303:/usr/include/string.h **** strpbrk (const char *__s, const char *__accept) __THROW
 304:/usr/include/string.h **** {
 305:/usr/include/string.h ****   return __builtin_strpbrk (__s, __accept);
 306:/usr/include/string.h **** }
 307:/usr/include/string.h **** # endif
 308:/usr/include/string.h **** }
 309:/usr/include/string.h **** #else
 310:/usr/include/string.h **** extern char *strpbrk (const char *__s, const char *__accept)
 311:/usr/include/string.h ****      __THROW __attribute_pure__ __nonnull ((1, 2));
 312:/usr/include/string.h **** #endif
 313:/usr/include/string.h **** /* Find the first occurrence of NEEDLE in HAYSTACK.  */
 314:/usr/include/string.h **** #ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
 315:/usr/include/string.h **** extern "C++"
 316:/usr/include/string.h **** {
 317:/usr/include/string.h **** extern char *strstr (char *__haystack, const char *__needle)
 318:/usr/include/string.h ****      __THROW __asm ("strstr") __attribute_pure__ __nonnull ((1, 2));
 319:/usr/include/string.h **** extern const char *strstr (const char *__haystack, const char *__needle)
 320:/usr/include/string.h ****      __THROW __asm ("strstr") __attribute_pure__ __nonnull ((1, 2));
 321:/usr/include/string.h **** 
 322:/usr/include/string.h **** # ifdef __OPTIMIZE__
 323:/usr/include/string.h **** __extern_always_inline char *
 324:/usr/include/string.h **** strstr (char *__haystack, const char *__needle) __THROW
 325:/usr/include/string.h **** {
 326:/usr/include/string.h ****   return __builtin_strstr (__haystack, __needle);
 5265              		.loc 10 326 0
 5266 00e5 BE000000 		movl	$.LC41, %esi
 5266      00
 5267 00ea 4889DF   		movq	%rbx, %rdi
 5268 00ed E8000000 		call	strstr
 5268      00
 5269              	.LVL684:
 5270              	.LBE707:
 5271              	.LBE706:
 5272              		.loc 1 1038 0
 5273 00f2 4885C0   		testq	%rax, %rax
 5274 00f5 B8010000 		movl	$1, %eax
 5274      00
 5275 00fa 440F45E0 		cmovne	%eax, %r12d
 5276              	.LVL685:
 5277              		.loc 1 1028 0
 5278 00fe 4885ED   		testq	%rbp, %rbp
 5279 0101 7593     		jne	.L671
 5280              	.L648:
 5281              		.loc 1 1042 0
 5282 0103 4C89FF   		movq	%r15, %rdi
 5283 0106 E8000000 		call	free
 5283      00
 5284              	.LVL686:
 5285              		.loc 1 1044 0
 5286 010b 4585E4   		testl	%r12d, %r12d
 5287 010e 745F     		je	.L654
 5288              	.LVL687:
 5289              	.L653:
 5290              		.loc 1 1046 0
 5291 0110 498BBD20 		movq	6176(%r13), %rdi
 5291      180000
 5292 0117 488B3500 		movq	_ZN15Fl_File_Chooser19custom_filter_labelE(%rip), %rsi
 5292      000000
 5293 011e E8000000 		call	_ZN8Fl_Menu_3addEPKc
 5293      00
 5294              	.LVL688:
 5295              		.loc 1 1048 0
 5296 0123 498BBD20 		movq	6176(%r13), %rdi
 5296      180000
 5297 012a 31F6     		xorl	%esi, %esi
 5298 012c E8000000 		call	_ZN9Fl_Choice5valueEi
 5298      00
 5299              	.LVL689:
 5300              		.loc 1 1049 0
 5301 0131 4C89EF   		movq	%r13, %rdi
 5302 0134 E8000000 		call	_ZN15Fl_File_Chooser12showChoiceCBEv
 5302      00
 5303              	.LVL690:
 5304              		.loc 1 1050 0
 5305 0139 488B8424 		movq	2056(%rsp), %rax
 5305      08080000 
 5306 0141 64483304 		xorq	%fs:40, %rax
 5306      25280000 
 5306      00
 5307 014a 7546     		jne	.L672
 5308 014c 4881C418 		addq	$2072, %rsp
 5308      080000
 5309              		.cfi_remember_state
 5310              		.cfi_def_cfa_offset 56
 5311 0153 5B       		popq	%rbx
 5312              		.cfi_def_cfa_offset 48
 5313 0154 5D       		popq	%rbp
 5314              		.cfi_def_cfa_offset 40
 5315 0155 415C     		popq	%r12
 5316              		.cfi_def_cfa_offset 32
 5317 0157 415D     		popq	%r13
 5318              		.cfi_def_cfa_offset 24
 5319              	.LVL691:
 5320 0159 415E     		popq	%r14
 5321              		.cfi_def_cfa_offset 16
 5322 015b 415F     		popq	%r15
 5323              		.cfi_def_cfa_offset 8
 5324              	.LVL692:
 5325 015d C3       		ret
 5326              	.LVL693:
 5327 015e 6690     		.p2align 4,,10
 5328              		.p2align 3
 5329              	.L658:
 5330              		.cfi_restore_state
 5331 0160 31ED     		xorl	%ebp, %ebp
 5332 0162 E955FFFF 		jmp	.L650
 5332      FF
 5333              	.LVL694:
 5334              	.L646:
 5335              		.loc 1 1042 0
 5336 0167 4C89FF   		movq	%r15, %rdi
 5337 016a E8000000 		call	free
 5337      00
 5338              	.LVL695:
 5339              	.L654:
 5340              		.loc 1 1044 0 discriminator 1
 5341 016f 498BBD20 		movq	6176(%r13), %rdi
 5341      180000
 5342 0176 488B3500 		movq	_ZN15Fl_File_Chooser15all_files_labelE(%rip), %rsi
 5342      000000
 5343 017d E8000000 		call	_ZN8Fl_Menu_3addEPKc
 5343      00
 5344              	.LVL696:
 5345 0182 EB8C     		jmp	.L653
 5346              	.LVL697:
 5347              		.p2align 4,,10
 5348 0184 0F1F4000 		.p2align 3
 5349              	.L656:
 5350              		.loc 1 1020 0
 5351 0188 BE000000 		movl	$.LC40, %esi
 5351      00
 5352              	.LVL698:
 5353 018d E9AAFEFF 		jmp	.L645
 5353      FF
 5354              	.LVL699:
 5355              	.L672:
 5356              		.loc 1 1050 0
 5357 0192 E8000000 		call	__stack_chk_fail
 5357      00
 5358              	.LVL700:
 5359              		.cfi_endproc
 5360              	.LFE724:
 5362              		.section	.text.unlikely._ZN15Fl_File_Chooser6filterEPKc
 5363              	.LCOLDE42:
 5364              		.section	.text._ZN15Fl_File_Chooser6filterEPKc
 5365              	.LHOTE42:
 5366              		.section	.text.unlikely._ZN15Fl_File_Chooser4showEv,"ax",@progbits
 5367              		.align 2
 5368              	.LCOLDB43:
 5369              		.section	.text._ZN15Fl_File_Chooser4showEv,"ax",@progbits
 5370              	.LHOTB43:
 5371              		.align 2
 5372              		.p2align 4,,15
 5373              		.globl	_ZN15Fl_File_Chooser4showEv
 5375              	_ZN15Fl_File_Chooser4showEv:
 5376              	.LFB735:
 5377              		.loc 1 1598 0
 5378              		.cfi_startproc
 5379              	.LVL701:
 5380 0000 53       		pushq	%rbx
 5381              		.cfi_def_cfa_offset 16
 5382              		.cfi_offset 3, -16
 5383              		.loc 1 1598 0
 5384 0001 4889FB   		movq	%rdi, %rbx
 5385              		.loc 1 1599 0
 5386 0004 488BB738 		movq	6200(%rdi), %rsi
 5386      180000
 5387 000b 488BBF18 		movq	6168(%rdi), %rdi
 5387      180000
 5388              	.LVL702:
 5389 0012 31D2     		xorl	%edx, %edx
 5390 0014 E8000000 		call	_ZN9Fl_Window7hotspotEPK9Fl_Widgeti
 5390      00
 5391              	.LVL703:
 5392              		.loc 1 1600 0
 5393 0019 488BBB18 		movq	6168(%rbx), %rdi
 5393      180000
 5394 0020 488B07   		movq	(%rdi), %rax
 5395 0023 FF5028   		call	*40(%rax)
 5396              	.LVL704:
 5397              		.loc 1 1601 0
 5398 0026 E8000000 		call	_ZN2Fl5flushEv
 5398      00
 5399              	.LVL705:
 5400              		.loc 1 1602 0
 5401 002b BF4C0000 		movl	$76, %edi
 5401      00
 5402 0030 E8000000 		call	_Z9fl_cursor9Fl_Cursor
 5402      00
 5403              	.LVL706:
 5404              		.loc 1 1603 0
 5405 0035 4889DF   		movq	%rbx, %rdi
 5406 0038 E8000000 		call	_ZN15Fl_File_Chooser20rescan_keep_filenameEv
 5406      00
 5407              	.LVL707:
 5408              		.loc 1 1604 0
 5409 003d 31FF     		xorl	%edi, %edi
 5410 003f E8000000 		call	_Z9fl_cursor9Fl_Cursor
 5410      00
 5411              	.LVL708:
 5412              		.loc 1 1605 0
 5413 0044 488BBB58 		movq	6232(%rbx), %rdi
 5413      180000
 5414              		.loc 1 1609 0
 5415 004b 5B       		popq	%rbx
 5416              		.cfi_def_cfa_offset 8
 5417              	.LVL709:
 5418              		.loc 1 1605 0
 5419 004c E9000000 		jmp	_ZN9Fl_Widget10take_focusEv
 5419      00
 5420              	.LVL710:
 5421              		.cfi_endproc
 5422              	.LFE735:
 5424              		.section	.text.unlikely._ZN15Fl_File_Chooser4showEv
 5425              	.LCOLDE43:
 5426              		.section	.text._ZN15Fl_File_Chooser4showEv
 5427              	.LHOTE43:
 5428              		.section	.text.unlikely._ZN15Fl_File_Chooser10showHiddenEi,"ax",@progbits
 5429              		.align 2
 5430              	.LCOLDB44:
 5431              		.section	.text._ZN15Fl_File_Chooser10showHiddenEi,"ax",@progbits
 5432              	.LHOTB44:
 5433              		.align 2
 5434              		.p2align 4,,15
 5435              		.globl	_ZN15Fl_File_Chooser10showHiddenEi
 5437              	_ZN15Fl_File_Chooser10showHiddenEi:
 5438              	.LFB736:
 5439              		.loc 1 1612 0
 5440              		.cfi_startproc
 5441              	.LVL711:
 5442              		.loc 1 1613 0
 5443 0000 85F6     		testl	%esi, %esi
 5444              		.loc 1 1612 0
 5445 0002 53       		pushq	%rbx
 5446              		.cfi_def_cfa_offset 16
 5447              		.cfi_offset 3, -16
 5448              		.loc 1 1612 0
 5449 0003 4889FB   		movq	%rdi, %rbx
 5450              		.loc 1 1613 0
 5451 0006 7518     		jne	.L678
 5452              		.loc 1 1616 0
 5453 0008 E8000000 		call	_ZN15Fl_File_Chooser19remove_hidden_filesEv
 5453      00
 5454              	.LVL712:
 5455              		.loc 1 1617 0
 5456 000d 488BBB38 		movq	6200(%rbx), %rdi
 5456      180000
 5457              		.loc 1 1619 0
 5458 0014 5B       		popq	%rbx
 5459              		.cfi_remember_state
 5460              		.cfi_def_cfa_offset 8
 5461              	.LVL713:
 5462              		.loc 1 1617 0
 5463 0015 E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 5463      00
 5464              	.LVL714:
 5465 001a 660F1F44 		.p2align 4,,10
 5465      0000
 5466              		.p2align 3
 5467              	.L678:
 5468              		.cfi_restore_state
 5469              		.loc 1 1614 0
 5470 0020 E8000000 		call	_ZN15Fl_File_Chooser9directoryEv
 5470      00
 5471              	.LVL715:
 5472 0025 488BBB38 		movq	6200(%rbx), %rdi
 5472      180000
 5473 002c BA000000 		movl	$fl_numericsort, %edx
 5473      00
 5474 0031 4889C6   		movq	%rax, %rsi
 5475              		.loc 1 1619 0
 5476 0034 5B       		popq	%rbx
 5477              		.cfi_def_cfa_offset 8
 5478              	.LVL716:
 5479              		.loc 1 1614 0
 5480 0035 E9000000 		jmp	_ZN15Fl_File_Browser4loadEPKcPFiPP6direntS4_E
 5480      00
 5481              	.LVL717:
 5482              		.cfi_endproc
 5483              	.LFE736:
 5485              		.section	.text.unlikely._ZN15Fl_File_Chooser10showHiddenEi
 5486              	.LCOLDE44:
 5487              		.section	.text._ZN15Fl_File_Chooser10showHiddenEi
 5488              	.LHOTE44:
 5489              		.section	.bss._ZZN15Fl_File_Chooser5valueEiE8pathname,"aw",@nobits
 5490              		.align 32
 5493              	_ZZN15Fl_File_Chooser5valueEiE8pathname:
 5494 0000 00000000 		.zero	2048
 5494      00000000 
 5494      00000000 
 5494      00000000 
 5494      00000000 
 5495              		.globl	_ZN15Fl_File_Chooser4sortE
 5496              		.section	.data._ZN15Fl_File_Chooser4sortE,"aw",@progbits
 5497              		.align 8
 5500              	_ZN15Fl_File_Chooser4sortE:
 5501 0000 00000000 		.quad	fl_numericsort
 5501      00000000 
 5502              		.globl	_ZN15Fl_File_Chooser12hidden_labelE
 5503              		.section	.rodata.str1.1
 5504              	.LC45:
 5505 006a 53686F77 		.string	"Show hidden files"
 5505      20686964 
 5505      64656E20 
 5505      66696C65 
 5505      7300
 5506              		.section	.data._ZN15Fl_File_Chooser12hidden_labelE,"aw",@progbits
 5507              		.align 8
 5510              	_ZN15Fl_File_Chooser12hidden_labelE:
 5511 0000 00000000 		.quad	.LC45
 5511      00000000 
 5512              		.globl	_ZN15Fl_File_Chooser10show_labelE
 5513              		.section	.rodata.str1.1
 5514              	.LC46:
 5515 007c 53686F77 		.string	"Show:"
 5515      3A00
 5516              		.section	.data._ZN15Fl_File_Chooser10show_labelE,"aw",@progbits
 5517              		.align 8
 5520              	_ZN15Fl_File_Chooser10show_labelE:
 5521 0000 00000000 		.quad	.LC46
 5521      00000000 
 5522              		.globl	_ZN15Fl_File_Chooser10save_labelE
 5523              		.section	.rodata.str1.1
 5524              	.LC47:
 5525 0082 53617665 		.string	"Save"
 5525      00
 5526              		.section	.data._ZN15Fl_File_Chooser10save_labelE,"aw",@progbits
 5527              		.align 8
 5530              	_ZN15Fl_File_Chooser10save_labelE:
 5531 0000 00000000 		.quad	.LC47
 5531      00000000 
 5532              		.globl	_ZN15Fl_File_Chooser13preview_labelE
 5533              		.section	.rodata.str1.1
 5534              	.LC48:
 5535 0087 50726576 		.string	"Preview"
 5535      69657700 
 5536              		.section	.data._ZN15Fl_File_Chooser13preview_labelE,"aw",@progbits
 5537              		.align 8
 5540              	_ZN15Fl_File_Chooser13preview_labelE:
 5541 0000 00000000 		.quad	.LC48
 5541      00000000 
 5542              		.globl	_ZN15Fl_File_Chooser21new_directory_tooltipE
 5543              		.section	.rodata.str1.1
 5544              	.LC49:
 5545 008f 43726561 		.string	"Create a new directory."
 5545      74652061 
 5545      206E6577 
 5545      20646972 
 5545      6563746F 
 5546              		.section	.data._ZN15Fl_File_Chooser21new_directory_tooltipE,"aw",@progbits
 5547              		.align 8
 5550              	_ZN15Fl_File_Chooser21new_directory_tooltipE:
 5551 0000 00000000 		.quad	.LC49
 5551      00000000 
 5552              		.globl	_ZN15Fl_File_Chooser19new_directory_labelE
 5553              		.section	.rodata.str1.1
 5554              	.LC50:
 5555 00a7 4E657720 		.string	"New Directory?"
 5555      44697265 
 5555      63746F72 
 5555      793F00
 5556              		.section	.data._ZN15Fl_File_Chooser19new_directory_labelE,"aw",@progbits
 5557              		.align 8
 5560              	_ZN15Fl_File_Chooser19new_directory_labelE:
 5561 0000 00000000 		.quad	.LC50
 5561      00000000 
 5562              		.globl	_ZN15Fl_File_Chooser22manage_favorites_labelE
 5563              		.section	.rodata.str1.1
 5564              	.LC51:
 5565 00b6 4D616E61 		.string	"Manage Favorites"
 5565      67652046 
 5565      61766F72 
 5565      69746573 
 5565      00
 5566              		.section	.data._ZN15Fl_File_Chooser22manage_favorites_labelE,"aw",@progbits
 5567              		.align 8
 5570              	_ZN15Fl_File_Chooser22manage_favorites_labelE:
 5571 0000 00000000 		.quad	.LC51
 5571      00000000 
 5572              		.globl	_ZN15Fl_File_Chooser17filesystems_labelE
 5573              		.section	.rodata.str1.1
 5574              	.LC52:
 5575 00c7 46696C65 		.string	"File Systems"
 5575      20537973 
 5575      74656D73 
 5575      00
 5576              		.section	.data._ZN15Fl_File_Chooser17filesystems_labelE,"aw",@progbits
 5577              		.align 8
 5580              	_ZN15Fl_File_Chooser17filesystems_labelE:
 5581 0000 00000000 		.quad	.LC52
 5581      00000000 
 5582              		.globl	_ZN15Fl_File_Chooser14filename_labelE
 5583              		.section	.rodata.str1.1
 5584              	.LC53:
 5585 00d4 46696C65 		.string	"Filename:"
 5585      6E616D65 
 5585      3A00
 5586              		.section	.data._ZN15Fl_File_Chooser14filename_labelE,"aw",@progbits
 5587              		.align 8
 5590              	_ZN15Fl_File_Chooser14filename_labelE:
 5591 0000 00000000 		.quad	.LC53
 5591      00000000 
 5592              		.globl	_ZN15Fl_File_Chooser15favorites_labelE
 5593              		.section	.rodata.str1.1
 5594              	.LC54:
 5595 00de 4661766F 		.string	"Favorites"
 5595      72697465 
 5595      7300
 5596              		.section	.data._ZN15Fl_File_Chooser15favorites_labelE,"aw",@progbits
 5597              		.align 8
 5600              	_ZN15Fl_File_Chooser15favorites_labelE:
 5601 0000 00000000 		.quad	.LC54
 5601      00000000 
 5602              		.globl	_ZN15Fl_File_Chooser19existing_file_labelE
 5603              		.section	.rodata.str1.8,"aMS",@progbits,1
 5604              		.align 8
 5605              	.LC55:
 5606 0000 506C6561 		.string	"Please choose an existing file!"
 5606      73652063 
 5606      686F6F73 
 5606      6520616E 
 5606      20657869 
 5607              		.section	.data._ZN15Fl_File_Chooser19existing_file_labelE,"aw",@progbits
 5608              		.align 8
 5611              	_ZN15Fl_File_Chooser19existing_file_labelE:
 5612 0000 00000000 		.quad	.LC55
 5612      00000000 
 5613              		.globl	_ZN15Fl_File_Chooser19custom_filter_labelE
 5614              		.section	.rodata.str1.1
 5615              	.LC56:
 5616 00e8 43757374 		.string	"Custom Filter"
 5616      6F6D2046 
 5616      696C7465 
 5616      7200
 5617              		.section	.data._ZN15Fl_File_Chooser19custom_filter_labelE,"aw",@progbits
 5618              		.align 8
 5621              	_ZN15Fl_File_Chooser19custom_filter_labelE:
 5622 0000 00000000 		.quad	.LC56
 5622      00000000 
 5623              		.globl	_ZN15Fl_File_Chooser15all_files_labelE
 5624              		.section	.rodata.str1.1
 5625              	.LC57:
 5626 00f6 416C6C20 		.string	"All Files (*)"
 5626      46696C65 
 5626      7320282A 
 5626      2900
 5627              		.section	.data._ZN15Fl_File_Chooser15all_files_labelE,"aw",@progbits
 5628              		.align 8
 5631              	_ZN15Fl_File_Chooser15all_files_labelE:
 5632 0000 00000000 		.quad	.LC57
 5632      00000000 
 5633              		.globl	_ZN15Fl_File_Chooser19add_favorites_labelE
 5634              		.section	.rodata.str1.1
 5635              	.LC58:
 5636 0104 41646420 		.string	"Add to Favorites"
 5636      746F2046 
 5636      61766F72 
 5636      69746573 
 5636      00
 5637              		.section	.data._ZN15Fl_File_Chooser19add_favorites_labelE,"aw",@progbits
 5638              		.align 8
 5641              	_ZN15Fl_File_Chooser19add_favorites_labelE:
 5642 0000 00000000 		.quad	.LC58
 5642      00000000 
 5643              		.globl	_ZN15Fl_File_Chooser6prefs_E
 5644              		.section	.bss._ZN15Fl_File_Chooser6prefs_E,"aw",@nobits
 5645              		.align 8
 5648              	_ZN15Fl_File_Chooser6prefs_E:
 5649 0000 00000000 		.zero	8
 5649      00000000 
 5650              		.section	.rodata.cst8,"aM",@progbits,8
 5651              		.align 8
 5652              	.LC31:
 5653 0000 00000000 		.long	0
 5654 0004 0000F03F 		.long	1072693248
 5655              		.text
 5656              	.Letext0:
 5657              		.section	.text.unlikely._ZL14quote_pathnamePcPKci.constprop.25
 5658              	.Letext_cold0:
 5659              		.file 12 "fltk-1.3.4-1/FL/fl_types.h"
 5660              		.file 13 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 5661              		.file 14 "/usr/include/x86_64-linux-gnu/bits/types.h"
 5662              		.file 15 "/usr/include/stdio.h"
 5663              		.file 16 "/usr/include/libio.h"
 5664              		.file 17 "/usr/include/time.h"
 5665              		.file 18 "/usr/include/x86_64-linux-gnu/bits/stat.h"
 5666              		.file 19 "fltk-1.3.4-1/FL/Enumerations.H"
 5667              		.file 20 "fltk-1.3.4-1/FL/Fl_Window.H"
 5668              		.file 21 "fltk-1.3.4-1/FL/Fl_Image.H"
 5669              		.file 22 "fltk-1.3.4-1/FL/Fl_Preferences.H"
 5670              		.file 23 "fltk-1.3.4-1/FL/Fl_Browser_.H"
 5671              		.file 24 "fltk-1.3.4-1/FL/Fl_File_Icon.H"
 5672              		.file 25 "/usr/include/x86_64-linux-gnu/bits/dirent.h"
 5673              		.file 26 "fltk-1.3.4-1/FL/Fl_File_Browser.H"
 5674              		.file 27 "fltk-1.3.4-1/FL/fl_ask.H"
 5675              		.file 28 "fltk-1.3.4-1/FL/Fl_File_Chooser.H"
 5676              		.file 29 "fltk-1.3.4-1/FL/Fl_Choice.H"
 5677              		.file 30 "fltk-1.3.4-1/FL/Fl_Button.H"
 5678              		.file 31 "fltk-1.3.4-1/FL/Fl_File_Input.H"
 5679              		.file 32 "fltk-1.3.4-1/FL/Fl_Device.H"
 5680              		.file 33 "/usr/include/x86_64-linux-gnu/bits/confname.h"
 5681              		.file 34 "fltk-1.3.4-1/FL/Fl_Group.H"
 5682              		.file 35 "fltk-1.3.4-1/FL/Fl_Shared_Image.H"
 5683              		.file 36 "fltk-1.3.4-1/FL/fl_utf8.h"
 5684              		.file 37 "fltk-1.3.4-1/src/flstring.h"
 5685              		.file 38 "/usr/include/x86_64-linux-gnu/sys/stat.h"
 5686              		.file 39 "/usr/include/x86_64-linux-gnu/bits/errno.h"
 5687              		.file 40 "/usr/include/unistd.h"
 5688              		.file 41 "/usr/include/stdlib.h"
 5689              		.file 42 "fltk-1.3.4-1/FL/fl_draw.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_File_Chooser2.cxx
     /tmp/ccrwD6CG.s:13     .text._ZL14quote_pathnamePcPKci.constprop.25:0000000000000000 _ZL14quote_pathnamePcPKci.constprop.25
     /tmp/ccrwD6CG.s:102    .text._ZN15Fl_File_Chooser5countEv:0000000000000000 _ZN15Fl_File_Chooser5countEv
     /tmp/ccrwD6CG.s:209    .text._ZN15Fl_File_Chooser16update_favoritesEv:0000000000000000 _ZN15Fl_File_Chooser16update_favoritesEv
     /tmp/ccrwD6CG.s:5641   .data._ZN15Fl_File_Chooser19add_favorites_labelE:0000000000000000 _ZN15Fl_File_Chooser19add_favorites_labelE
     /tmp/ccrwD6CG.s:5570   .data._ZN15Fl_File_Chooser22manage_favorites_labelE:0000000000000000 _ZN15Fl_File_Chooser22manage_favorites_labelE
     /tmp/ccrwD6CG.s:5580   .data._ZN15Fl_File_Chooser17filesystems_labelE:0000000000000000 _ZN15Fl_File_Chooser17filesystems_labelE
     /tmp/ccrwD6CG.s:5648   .bss._ZN15Fl_File_Chooser6prefs_E:0000000000000000 _ZN15Fl_File_Chooser6prefs_E
     /tmp/ccrwD6CG.s:422    .text._ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget:0000000000000000 _ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget
     /tmp/ccrwD6CG.s:958    .text._ZN15Fl_File_Chooser5valueEi:0000000000000000 _ZN15Fl_File_Chooser5valueEi
     /tmp/ccrwD6CG.s:5493   .bss._ZZN15Fl_File_Chooser5valueEiE8pathname:0000000000000000 _ZZN15Fl_File_Chooser5valueEiE8pathname
     /tmp/ccrwD6CG.s:1158   .text._ZN15Fl_File_Chooser14update_previewEv.part.23:0000000000000000 _ZN15Fl_File_Chooser14update_previewEv.part.23
     /tmp/ccrwD6CG.s:2036   .text._ZN15Fl_File_Chooser14update_previewEv:0000000000000000 _ZN15Fl_File_Chooser14update_previewEv
     /tmp/ccrwD6CG.s:2070   .text._ZN15Fl_File_Chooser7previewEi:0000000000000000 _ZN15Fl_File_Chooser7previewEi
     /tmp/ccrwD6CG.s:2253   .text._ZN15Fl_File_Chooser9previewCBEPS_:0000000000000000 _ZN15Fl_File_Chooser9previewCBEPS_
     /tmp/ccrwD6CG.s:2291   .text._ZN15Fl_File_Chooser19remove_hidden_filesEv:0000000000000000 _ZN15Fl_File_Chooser19remove_hidden_filesEv
     /tmp/ccrwD6CG.s:2398   .text._ZN15Fl_File_Chooser6rescanEv:0000000000000000 _ZN15Fl_File_Chooser6rescanEv
     /tmp/ccrwD6CG.s:5500   .data._ZN15Fl_File_Chooser4sortE:0000000000000000 _ZN15Fl_File_Chooser4sortE
     /tmp/ccrwD6CG.s:2568   .text._ZN15Fl_File_Chooser9directoryEPKc:0000000000000000 _ZN15Fl_File_Chooser9directoryEPKc
     /tmp/ccrwD6CG.s:2772   .text._ZN15Fl_File_Chooser17favoritesButtonCBEv:0000000000000000 _ZN15Fl_File_Chooser17favoritesButtonCBEv
     /tmp/ccrwD6CG.s:3027   .text._ZN15Fl_File_Chooser10fileListCBEv:0000000000000000 _ZN15Fl_File_Chooser10fileListCBEv
     /tmp/ccrwD6CG.s:3438   .text._ZN15Fl_File_Chooser6newdirEv:0000000000000000 _ZN15Fl_File_Chooser6newdirEv
     /tmp/ccrwD6CG.s:5560   .data._ZN15Fl_File_Chooser19new_directory_labelE:0000000000000000 _ZN15Fl_File_Chooser19new_directory_labelE
     /tmp/ccrwD6CG.s:3584   .text._ZN15Fl_File_Chooser5valueEPKc.part.24:0000000000000000 _ZN15Fl_File_Chooser5valueEPKc.part.24
     /tmp/ccrwD6CG.s:3818   .text._ZN15Fl_File_Chooser5valueEPKc:0000000000000000 _ZN15Fl_File_Chooser5valueEPKc
     /tmp/ccrwD6CG.s:3879   .text._ZN15Fl_File_Chooser10fileNameCBEv:0000000000000000 _ZN15Fl_File_Chooser10fileNameCBEv
     /tmp/ccrwD6CG.s:5611   .data._ZN15Fl_File_Chooser19existing_file_labelE:0000000000000000 _ZN15Fl_File_Chooser19existing_file_labelE
     /tmp/ccrwD6CG.s:4714   .text._ZN15Fl_File_Chooser20rescan_keep_filenameEv:0000000000000000 _ZN15Fl_File_Chooser20rescan_keep_filenameEv
     /tmp/ccrwD6CG.s:4929   .text._ZN15Fl_File_Chooser12showChoiceCBEv:0000000000000000 _ZN15Fl_File_Chooser12showChoiceCBEv
     /tmp/ccrwD6CG.s:5621   .data._ZN15Fl_File_Chooser19custom_filter_labelE:0000000000000000 _ZN15Fl_File_Chooser19custom_filter_labelE
     /tmp/ccrwD6CG.s:5144   .text._ZN15Fl_File_Chooser6filterEPKc:0000000000000000 _ZN15Fl_File_Chooser6filterEPKc
     /tmp/ccrwD6CG.s:5631   .data._ZN15Fl_File_Chooser15all_files_labelE:0000000000000000 _ZN15Fl_File_Chooser15all_files_labelE
     /tmp/ccrwD6CG.s:5375   .text._ZN15Fl_File_Chooser4showEv:0000000000000000 _ZN15Fl_File_Chooser4showEv
     /tmp/ccrwD6CG.s:5437   .text._ZN15Fl_File_Chooser10showHiddenEi:0000000000000000 _ZN15Fl_File_Chooser10showHiddenEi
     /tmp/ccrwD6CG.s:5510   .data._ZN15Fl_File_Chooser12hidden_labelE:0000000000000000 _ZN15Fl_File_Chooser12hidden_labelE
     /tmp/ccrwD6CG.s:5520   .data._ZN15Fl_File_Chooser10show_labelE:0000000000000000 _ZN15Fl_File_Chooser10show_labelE
     /tmp/ccrwD6CG.s:5530   .data._ZN15Fl_File_Chooser10save_labelE:0000000000000000 _ZN15Fl_File_Chooser10save_labelE
     /tmp/ccrwD6CG.s:5540   .data._ZN15Fl_File_Chooser13preview_labelE:0000000000000000 _ZN15Fl_File_Chooser13preview_labelE
     /tmp/ccrwD6CG.s:5550   .data._ZN15Fl_File_Chooser21new_directory_tooltipE:0000000000000000 _ZN15Fl_File_Chooser21new_directory_tooltipE
     /tmp/ccrwD6CG.s:5590   .data._ZN15Fl_File_Chooser14filename_labelE:0000000000000000 _ZN15Fl_File_Chooser14filename_labelE
     /tmp/ccrwD6CG.s:5600   .data._ZN15Fl_File_Chooser15favorites_labelE:0000000000000000 _ZN15Fl_File_Chooser15favorites_labelE
     /tmp/ccrwD6CG.s:5652   .rodata.cst8:0000000000000000 .LC31
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
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.Fl_Button.H.23.dd2f7f39568a498db4235a51d94ff020
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
                           .group:0000000000000000 wm4.Fl_Slider.H.30.63744dea3b9f91e5e3b5b1297ae0bb9d
                           .group:0000000000000000 wm4.Fl_Browser_.H.33.3c969d598ffa0d0ae61e0a4412aa05a2
                           .group:0000000000000000 wm4.filename.H.30.99b1a2d49dfb41118316d590634dc617
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
                           .group:0000000000000000 wm4.Fl_Input_.H.23.0358bf58b9391621e5f90e01bc1d1bea
                           .group:0000000000000000 wm4.fl_ask.H.24.be48b4476a0524cdb7b19216c6f73157
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.00137ad0275e3bca492dca30adbe2e71
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
                           .group:0000000000000000 wm4.errno.h.21.234adedf0a908ba1512bb39778d0c13a
                           .group:0000000000000000 wm4.errnobase.h.2.3ec77d86fa6012e288bd2eb28191253f
                           .group:0000000000000000 wm4.errno.h.6.6707cf97e82b783d19d3d077217dd04e
                           .group:0000000000000000 wm4.errno.h.27.5f4b88dc9507696aecbaa61ffb4828e0
                           .group:0000000000000000 wm4.errno.h.36.afe6c2702b2ada9447adc06c6378ccc9
                           .group:0000000000000000 wm4.unistd.h.23.a608ae63b1bee638e80d9e2a8598bd8e
                           .group:0000000000000000 wm4.posix_opt.h.20.8587404e00639bdcc5f6a74591f95259
                           .group:0000000000000000 wm4.environments.h.56.c5802092ccc191baeb41f8d355bb878f
                           .group:0000000000000000 wm4.unistd.h.213.4c582e35260d661b081322974b7c1e74
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.unistd.h.271.5bc8a6a5109e709e04c40b754b201552
                           .group:0000000000000000 wm4.confname.h.27.6b00117a32f457cc72e5ac810a9adade
                           .group:0000000000000000 wm4.unistd.h.1078.c7eeb0fd3115c9566fb6865aa19af17f
                           .group:0000000000000000 wm4.pwd.h.23.1002ff527d624da43129af4283a8ca6d
                           .group:0000000000000000 wm4.pwd.h.62.15b4690345af76aa1e5e248acb2bab73

UNDEFINED SYMBOLS
_ZNK10Fl_Browser8selectedEi
_ZN8Fl_Menu_5clearEv
_ZN8Fl_Menu_3addEPKc
_ZN8Fl_Menu_3addEPKciPFvP9Fl_WidgetPvES4_i
fl_getenv
__sprintf_chk
_ZN14Fl_Preferences3getEPKcPcS1_i
__stack_chk_fail
_ZNK10Fl_Browser4textEi
_ZN14Fl_Preferences3setEPKcS1_
_ZN14Fl_Preferences5flushEv
_ZN10Fl_Browser5clearEv
_ZN11Fl_Browser_8deselectEi
_ZN12Fl_File_Icon4findEPKci
_ZN10Fl_Browser3addEPKcPv
_ZN9Fl_Widget10deactivateEv
_ZN9Fl_Window7hotspotEPK9Fl_Widgeti
_ZNK10Fl_Browser5valueEv
_ZN9Fl_Widget8activateEv
_ZNK10Fl_Browser4dataEi
_ZN10Fl_Browser6insertEiPKcPv
_ZN10Fl_Browser6removeEi
_ZN10Fl_Browser6selectEii
__snprintf_chk
fl_strlcpy
_Z17fl_filename_isdirPKc
_ZN15Fl_Shared_Image7releaseEv
_ZN9Fl_Widget5labelEPKc
_ZN9Fl_Widget6redrawEv
fl_stat
fl_fopen
fread
fclose
_ZN9Fl_Window6cursorE9Fl_Cursor
_ZN2Fl5checkEv
__ctype_b_loc
FL_NORMAL_SIZE
_ZN15Fl_Shared_Image3getEPKcii
_ZN9Fl_Button5valueEi
_ZN14Fl_Preferences3setEPKci
_ZN8Fl_Group10init_sizesEv
_ZN10Fl_Browser12linepositionEiNS_16Fl_Line_PositionE
fl_strlcat
_ZN13Fl_File_Input5valueEPKc
_ZN15Fl_File_Browser4loadEPKcPFiPP6direntS4_E
_Z20fl_filename_absolutePciPKc
strlen
_ZN15Fl_File_Chooser5shownEv
_ZNK8Fl_Menu_4sizeEv
_ZN2Fl8e_clicksE
_ZN2Fl14remove_timeoutEPFvPvES0_
_ZN2Fl11add_timeoutEdPFvPvES0_
_Z24_fl_filename_isdir_quickPKc
_Z8fl_inputPKcS0_z
mkdir
__errno_location
strerror
_Z8fl_alertPKcz
strrchr
_ZN9Fl_Input_8positionEii
strcmp
strchr
_Z18fl_filename_expandPciPKc
_ZN2Fl8e_keysymE
strncmp
access
_ZN9Fl_Input_7replaceEiiPKci
_ZN15Fl_File_Browser6filterEPKc
_ZN9Fl_Choice5valueEi
strdup
strstr
free
_ZN2Fl5flushEv
_Z9fl_cursor9Fl_Cursor
_ZN9Fl_Widget10take_focusEv
_ZN15Fl_File_Chooser9directoryEv
fl_numericsort
