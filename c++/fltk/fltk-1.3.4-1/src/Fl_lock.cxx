   1              		.file	"Fl_lock.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL9lock_ringv,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL9lock_ringv,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL9lock_ringv
  10              	.Ltext_cold0:
  11              		.section	.text._ZL9lock_ringv
  13              	_ZL9lock_ringv:
  14              	.LFB179:
  15              		.file 1 "fltk-1.3.4-1/src/Fl_lock.cxx"
   1:fltk-1.3.4-1/src/Fl_lock.cxx **** ...
  16              		.loc 1 384 0
  17              		.cfi_startproc
  18              		.loc 1 385 0
  19 0000 488B3D00 		movq	_ZL10ring_mutex(%rip), %rdi
  19      000000
  20 0007 4885FF   		testq	%rdi, %rdi
  21 000a 740C     		je	.L6
  22              		.loc 1 389 0
  23 000c E9000000 		jmp	pthread_mutex_lock
  23      00
  24              	.LVL0:
  25              		.p2align 4,,10
  26 0011 0F1F8000 		.p2align 3
  26      000000
  27              	.L6:
  28              		.loc 1 384 0
  29 0018 4883EC08 		subq	$8, %rsp
  30              		.cfi_def_cfa_offset 16
  31              		.loc 1 386 0
  32 001c BF280000 		movl	$40, %edi
  32      00
  33 0021 E8000000 		call	malloc
  33      00
  34              	.LVL1:
  35              		.loc 1 387 0
  36 0026 31F6     		xorl	%esi, %esi
  37 0028 4889C7   		movq	%rax, %rdi
  38              		.loc 1 386 0
  39 002b 48890500 		movq	%rax, _ZL10ring_mutex(%rip)
  39      000000
  40              		.loc 1 387 0
  41 0032 E8000000 		call	pthread_mutex_init
  41      00
  42              	.LVL2:
  43 0037 488B3D00 		movq	_ZL10ring_mutex(%rip), %rdi
  43      000000
  44              		.loc 1 390 0
  45 003e 4883C408 		addq	$8, %rsp
  46              		.cfi_def_cfa_offset 8
  47              		.loc 1 389 0
  48 0042 E9000000 		jmp	pthread_mutex_lock
  48      00
  49              	.LVL3:
  50              		.cfi_endproc
  51              	.LFE179:
  53              		.section	.text.unlikely._ZL9lock_ringv
  54              	.LCOLDE0:
  55              		.section	.text._ZL9lock_ringv
  56              	.LHOTE0:
  57              		.section	.text.unlikely._ZL19unlock_function_stdv,"ax",@progbits
  58              	.LCOLDB1:
  59              		.section	.text._ZL19unlock_function_stdv,"ax",@progbits
  60              	.LHOTB1:
  61              		.p2align 4,,15
  63              	_ZL19unlock_function_stdv:
  64              	.LFB172:
  65              		.loc 1 283 0
  66              		.cfi_startproc
  67              		.loc 1 284 0
  68 0000 832D0000 		subl	$1, _ZL7counter(%rip)
  68      000001
  69 0007 7407     		je	.L9
  70 0009 F3C3     		rep ret
  71 000b 0F1F4400 		.p2align 4,,10
  71      00
  72              		.p2align 3
  73              	.L9:
  74              		.loc 1 284 0 is_stmt 0 discriminator 1
  75 0010 BF000000 		movl	$_ZL10fltk_mutex, %edi
  75      00
  76 0015 E9000000 		jmp	pthread_mutex_unlock
  76      00
  77              	.LVL4:
  78              		.cfi_endproc
  79              	.LFE172:
  81              		.section	.text.unlikely._ZL19unlock_function_stdv
  82              	.LCOLDE1:
  83              		.section	.text._ZL19unlock_function_stdv
  84              	.LHOTE1:
  85              		.section	.text.unlikely._ZL17lock_function_stdv,"ax",@progbits
  86              	.LCOLDB2:
  87              		.section	.text._ZL17lock_function_stdv,"ax",@progbits
  88              	.LHOTB2:
  89              		.p2align 4,,15
  91              	_ZL17lock_function_stdv:
  92              	.LFB171:
  93              		.loc 1 275 0 is_stmt 1
  94              		.cfi_startproc
  95 0000 53       		pushq	%rbx
  96              		.cfi_def_cfa_offset 16
  97              		.cfi_offset 3, -16
  98              		.loc 1 276 0
  99 0001 8B1D0000 		movl	_ZL7counter(%rip), %ebx
  99      0000
 100 0007 85DB     		testl	%ebx, %ebx
 101 0009 740E     		je	.L13
 102              		.loc 1 276 0 is_stmt 0 discriminator 1
 103 000b E8000000 		call	pthread_self
 103      00
 104              	.LVL5:
 105 0010 483B0500 		cmpq	_ZL5owner(%rip), %rax
 105      000000
 106 0017 741F     		je	.L12
 107              	.L13:
 108 0019 E8000000 		call	pthread_self
 108      00
 109              	.LVL6:
 110              		.loc 1 277 0 is_stmt 1
 111 001e BF000000 		movl	$_ZL10fltk_mutex, %edi
 111      00
 112 0023 4889C3   		movq	%rax, %rbx
 113 0026 E8000000 		call	pthread_mutex_lock
 113      00
 114              	.LVL7:
 115              		.loc 1 278 0
 116 002b 48891D00 		movq	%rbx, _ZL5owner(%rip)
 116      000000
 117 0032 8B1D0000 		movl	_ZL7counter(%rip), %ebx
 117      0000
 118              	.L12:
 119              		.loc 1 280 0
 120 0038 83C301   		addl	$1, %ebx
 121 003b 891D0000 		movl	%ebx, _ZL7counter(%rip)
 121      0000
 122              		.loc 1 281 0
 123 0041 5B       		popq	%rbx
 124              		.cfi_def_cfa_offset 8
 125 0042 C3       		ret
 126              		.cfi_endproc
 127              	.LFE171:
 129              		.section	.text.unlikely._ZL17lock_function_stdv
 130              	.LCOLDE2:
 131              		.section	.text._ZL17lock_function_stdv
 132              	.LHOTE2:
 133              		.section	.text.unlikely._ZN2Fl18add_awake_handler_EPFvPvES0_,"ax",@progbits
 134              		.align 2
 135              	.LCOLDB3:
 136              		.section	.text._ZN2Fl18add_awake_handler_EPFvPvES0_,"ax",@progbits
 137              	.LHOTB3:
 138              		.align 2
 139              		.p2align 4,,15
 140              		.globl	_ZN2Fl18add_awake_handler_EPFvPvES0_
 142              	_ZN2Fl18add_awake_handler_EPFvPvES0_:
 143              	.LFB149:
 144              		.loc 1 75 0
 145              		.cfi_startproc
 146              	.LVL8:
 147 0000 4154     		pushq	%r12
 148              		.cfi_def_cfa_offset 16
 149              		.cfi_offset 12, -16
 150 0002 55       		pushq	%rbp
 151              		.cfi_def_cfa_offset 24
 152              		.cfi_offset 6, -24
 153 0003 4989F4   		movq	%rsi, %r12
 154 0006 53       		pushq	%rbx
 155              		.cfi_def_cfa_offset 32
 156              		.cfi_offset 3, -32
 157              		.loc 1 75 0
 158 0007 4889FD   		movq	%rdi, %rbp
 159              		.loc 1 77 0
 160 000a E8000000 		call	_ZL9lock_ringv
 160      00
 161              	.LVL9:
 162              		.loc 1 78 0
 163 000f 488B0500 		movq	_ZN2Fl11awake_ring_E(%rip), %rax
 163      000000
 164 0016 4885C0   		testq	%rax, %rax
 165 0019 7455     		je	.L25
 166              		.loc 1 88 0
 167 001b 48630D00 		movslq	_ZN2Fl16awake_ring_head_E(%rip), %rcx
 167      000000
 168              		.loc 1 90 0
 169 0022 BE000000 		movl	$0, %esi
 169      00
 170              		.loc 1 88 0
 171 0027 8D5101   		leal	1(%rcx), %edx
 172              	.LVL10:
 173              		.loc 1 90 0
 174 002a 3B150000 		cmpl	_ZN2Fl16awake_ring_size_E(%rip), %edx
 174      0000
 175 0030 0F4DD6   		cmovge	%esi, %edx
 176              	.LVL11:
 177              		.loc 1 93 0
 178 0033 39150000 		cmpl	%edx, _ZN2Fl16awake_ring_tail_E(%rip)
 178      0000
 179 0039 0F848700 		je	.L19
 179      0000
 180              	.LVL12:
 181              	.L17:
 182              		.loc 1 97 0
 183 003f 48892CC8 		movq	%rbp, (%rax,%rcx,8)
 184              		.loc 1 98 0
 185 0043 48630D00 		movslq	_ZN2Fl16awake_ring_head_E(%rip), %rcx
 185      000000
 186              		.loc 1 76 0
 187 004a 31DB     		xorl	%ebx, %ebx
 188              		.loc 1 98 0
 189 004c 488B0500 		movq	_ZN2Fl11awake_data_E(%rip), %rax
 189      000000
 190 0053 4C8924C8 		movq	%r12, (%rax,%rcx,8)
 191              		.loc 1 99 0
 192 0057 89150000 		movl	%edx, _ZN2Fl16awake_ring_head_E(%rip)
 192      0000
 193              	.LVL13:
 194              	.L18:
 195              	.LBB12:
 196              	.LBB13:
 197              		.loc 1 381 0
 198 005d 488B3D00 		movq	_ZL10ring_mutex(%rip), %rdi
 198      000000
 199 0064 E8000000 		call	pthread_mutex_unlock
 199      00
 200              	.LVL14:
 201              	.LBE13:
 202              	.LBE12:
 203              		.loc 1 103 0
 204 0069 89D8     		movl	%ebx, %eax
 205 006b 5B       		popq	%rbx
 206              		.cfi_remember_state
 207              		.cfi_def_cfa_offset 24
 208              	.LVL15:
 209 006c 5D       		popq	%rbp
 210              		.cfi_def_cfa_offset 16
 211              	.LVL16:
 212 006d 415C     		popq	%r12
 213              		.cfi_def_cfa_offset 8
 214              	.LVL17:
 215 006f C3       		ret
 216              	.LVL18:
 217              		.p2align 4,,10
 218              		.p2align 3
 219              	.L25:
 220              		.cfi_restore_state
 221              		.loc 1 80 0
 222 0070 BF002000 		movl	$8192, %edi
 222      00
 223              		.loc 1 79 0
 224 0075 C7050000 		movl	$1024, _ZN2Fl16awake_ring_size_E(%rip)
 224      00000004 
 224      0000
 225              		.loc 1 80 0
 226 007f E8000000 		call	malloc
 226      00
 227              	.LVL19:
 228              		.loc 1 81 0
 229 0084 BF002000 		movl	$8192, %edi
 229      00
 230              		.loc 1 80 0
 231 0089 4889C3   		movq	%rax, %rbx
 232 008c 48890500 		movq	%rax, _ZN2Fl11awake_ring_E(%rip)
 232      000000
 233              		.loc 1 81 0
 234 0093 E8000000 		call	malloc
 234      00
 235              	.LVL20:
 236              		.loc 1 88 0
 237 0098 31C9     		xorl	%ecx, %ecx
 238              		.loc 1 93 0
 239 009a 4885DB   		testq	%rbx, %rbx
 240              		.loc 1 81 0
 241 009d 48890500 		movq	%rax, _ZN2Fl11awake_data_E(%rip)
 241      000000
 242              		.loc 1 83 0
 243 00a4 C7050000 		movl	$0, _ZN2Fl16awake_ring_tail_E(%rip)
 243      00000000 
 243      0000
 244 00ae C7050000 		movl	$0, _ZN2Fl16awake_ring_head_E(%rip)
 244      00000000 
 244      0000
 245              	.LVL21:
 246              		.loc 1 93 0
 247 00b8 4889D8   		movq	%rbx, %rax
 248              		.loc 1 88 0
 249 00bb BA010000 		movl	$1, %edx
 249      00
 250              		.loc 1 93 0
 251 00c0 0F8579FF 		jne	.L17
 251      FFFF
 252              	.LVL22:
 253              	.L19:
 254              		.loc 1 95 0
 255 00c6 BBFFFFFF 		movl	$-1, %ebx
 255      FF
 256 00cb EB90     		jmp	.L18
 257              		.cfi_endproc
 258              	.LFE149:
 260              		.section	.text.unlikely._ZN2Fl18add_awake_handler_EPFvPvES0_
 261              	.LCOLDE3:
 262              		.section	.text._ZN2Fl18add_awake_handler_EPFvPvES0_
 263              	.LHOTE3:
 264              		.section	.text.unlikely._ZN2Fl18get_awake_handler_ERPFvPvERS0_,"ax",@progbits
 265              		.align 2
 266              	.LCOLDB4:
 267              		.section	.text._ZN2Fl18get_awake_handler_ERPFvPvERS0_,"ax",@progbits
 268              	.LHOTB4:
 269              		.align 2
 270              		.p2align 4,,15
 271              		.globl	_ZN2Fl18get_awake_handler_ERPFvPvERS0_
 273              	_ZN2Fl18get_awake_handler_ERPFvPvERS0_:
 274              	.LFB150:
 275              		.loc 1 107 0
 276              		.cfi_startproc
 277              	.LVL23:
 278 0000 55       		pushq	%rbp
 279              		.cfi_def_cfa_offset 16
 280              		.cfi_offset 6, -16
 281 0001 53       		pushq	%rbx
 282              		.cfi_def_cfa_offset 24
 283              		.cfi_offset 3, -24
 284 0002 4889FD   		movq	%rdi, %rbp
 285 0005 4889F3   		movq	%rsi, %rbx
 286 0008 4883EC08 		subq	$8, %rsp
 287              		.cfi_def_cfa_offset 32
 288              		.loc 1 109 0
 289 000c E8000000 		call	_ZL9lock_ringv
 289      00
 290              	.LVL24:
 291              		.loc 1 110 0
 292 0011 488B1500 		movq	_ZN2Fl11awake_ring_E(%rip), %rdx
 292      000000
 293 0018 4885D2   		testq	%rdx, %rdx
 294 001b 746B     		je	.L29
 295              		.loc 1 110 0 is_stmt 0 discriminator 1
 296 001d 48630500 		movslq	_ZN2Fl16awake_ring_tail_E(%rip), %rax
 296      000000
 297 0024 39050000 		cmpl	%eax, _ZN2Fl16awake_ring_head_E(%rip)
 297      0000
 298 002a 745C     		je	.L29
 299              		.loc 1 113 0 is_stmt 1
 300 002c 488B04C2 		movq	(%rdx,%rax,8), %rax
 301 0030 48894500 		movq	%rax, 0(%rbp)
 302              		.loc 1 114 0
 303 0034 48631500 		movslq	_ZN2Fl16awake_ring_tail_E(%rip), %rdx
 303      000000
 304 003b 488B0500 		movq	_ZN2Fl11awake_data_E(%rip), %rax
 304      000000
 305 0042 488B04D0 		movq	(%rax,%rdx,8), %rax
 306 0046 488903   		movq	%rax, (%rbx)
 307              		.loc 1 115 0
 308 0049 8B050000 		movl	_ZN2Fl16awake_ring_tail_E(%rip), %eax
 308      0000
 309              		.loc 1 108 0
 310 004f 31DB     		xorl	%ebx, %ebx
 311              	.LVL25:
 312              		.loc 1 115 0
 313 0051 83C001   		addl	$1, %eax
 314              		.loc 1 116 0
 315 0054 3B050000 		cmpl	_ZN2Fl16awake_ring_size_E(%rip), %eax
 315      0000
 316              		.loc 1 115 0
 317 005a 89050000 		movl	%eax, _ZN2Fl16awake_ring_tail_E(%rip)
 317      0000
 318              		.loc 1 116 0
 319 0060 7C0A     		jl	.L27
 320              		.loc 1 117 0
 321 0062 C7050000 		movl	$0, _ZN2Fl16awake_ring_tail_E(%rip)
 321      00000000 
 321      0000
 322              	.L27:
 323              	.LVL26:
 324              	.LBB14:
 325              	.LBB15:
 326              		.loc 1 381 0
 327 006c 488B3D00 		movq	_ZL10ring_mutex(%rip), %rdi
 327      000000
 328 0073 E8000000 		call	pthread_mutex_unlock
 328      00
 329              	.LVL27:
 330              	.LBE15:
 331              	.LBE14:
 332              		.loc 1 122 0
 333 0078 4883C408 		addq	$8, %rsp
 334              		.cfi_remember_state
 335              		.cfi_def_cfa_offset 24
 336 007c 89D8     		movl	%ebx, %eax
 337 007e 5B       		popq	%rbx
 338              		.cfi_def_cfa_offset 16
 339              	.LVL28:
 340 007f 5D       		popq	%rbp
 341              		.cfi_def_cfa_offset 8
 342              	.LVL29:
 343 0080 C3       		ret
 344              	.LVL30:
 345              		.p2align 4,,10
 346 0081 0F1F8000 		.p2align 3
 346      000000
 347              	.L29:
 348              		.cfi_restore_state
 349              		.loc 1 111 0
 350 0088 BBFFFFFF 		movl	$-1, %ebx
 350      FF
 351              	.LVL31:
 352 008d EBDD     		jmp	.L27
 353              		.cfi_endproc
 354              	.LFE150:
 356              		.section	.text.unlikely._ZN2Fl18get_awake_handler_ERPFvPvERS0_
 357              	.LCOLDE4:
 358              		.section	.text._ZN2Fl18get_awake_handler_ERPFvPvERS0_
 359              	.LHOTE4:
 360              		.section	.text.unlikely._ZL15thread_awake_cbiPv,"ax",@progbits
 361              	.LCOLDB5:
 362              		.section	.text._ZL15thread_awake_cbiPv,"ax",@progbits
 363              	.LHOTB5:
 364              		.p2align 4,,15
 366              	_ZL15thread_awake_cbiPv:
 367              	.LFB175:
 368              		.loc 1 320 0
 369              		.cfi_startproc
 370              	.LVL32:
 371 0000 4883EC28 		subq	$40, %rsp
 372              		.cfi_def_cfa_offset 48
 373              	.LBB16:
 374              	.LBB17:
 375              		.file 2 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
   1:/usr/include/x86_64-linux-gnu/bits/unistd.h **** /* Checking macros for unistd functions.
   2:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    Copyright (C) 2005-2016 Free Software Foundation, Inc.
   3:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    This file is part of the GNU C Library.
   4:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
   5:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    The GNU C Library is free software; you can redistribute it and/or
   6:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    modify it under the terms of the GNU Lesser General Public
   7:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    License as published by the Free Software Foundation; either
   8:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    version 2.1 of the License, or (at your option) any later version.
   9:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  10:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    The GNU C Library is distributed in the hope that it will be useful,
  11:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  12:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  13:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    Lesser General Public License for more details.
  14:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  15:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    You should have received a copy of the GNU Lesser General Public
  16:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    License along with the GNU C Library; if not, see
  17:/usr/include/x86_64-linux-gnu/bits/unistd.h ****    <http://www.gnu.org/licenses/>.  */
  18:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  19:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #ifndef _UNISTD_H
  20:/usr/include/x86_64-linux-gnu/bits/unistd.h **** # error "Never include <bits/unistd.h> directly; use <unistd.h> instead."
  21:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #endif
  22:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  23:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __read_chk (int __fd, void *__buf, size_t __nbytes,
  24:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   size_t __buflen) __wur;
  25:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT (__read_alias, (int __fd, void *__buf,
  26:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 					  size_t __nbytes), read) __wur;
  27:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT (__read_chk_warn,
  28:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   (int __fd, void *__buf, size_t __nbytes,
  29:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    size_t __buflen), __read_chk)
  30:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __wur __warnattr ("read called with bigger length than size of "
  31:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		       "the destination buffer");
  32:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  33:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __wur ssize_t
  34:/usr/include/x86_64-linux-gnu/bits/unistd.h **** read (int __fd, void *__buf, size_t __nbytes)
  35:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
  36:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos0 (__buf) != (size_t) -1)
  37:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
  38:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__nbytes))
  39:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __read_chk (__fd, __buf, __nbytes, __bos0 (__buf));
  40:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  41:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (__nbytes > __bos0 (__buf))
  42:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __read_chk_warn (__fd, __buf, __nbytes, __bos0 (__buf));
  43:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
  44:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __read_alias (__fd, __buf, __nbytes);
 376              		.loc 2 44 0
 377 0004 BA080000 		movl	$8, %edx
 377      00
 378 0009 BE000000 		movl	$_ZL15thread_message_, %esi
 378      00
 379              	.LBE17:
 380              	.LBE16:
 381              		.loc 1 320 0
 382 000e 64488B04 		movq	%fs:40, %rax
 382      25280000 
 382      00
 383 0017 48894424 		movq	%rax, 24(%rsp)
 383      18
 384 001c 31C0     		xorl	%eax, %eax
 385              	.LVL33:
 386              	.LBB19:
 387              	.LBB18:
 388              		.loc 2 44 0
 389 001e E8000000 		call	read
 389      00
 390              	.LVL34:
 391              	.LBE18:
 392              	.LBE19:
 393 0023 EB0C     		jmp	.L34
 394              		.p2align 4,,10
 395 0025 0F1F00   		.p2align 3
 396              	.L37:
 397              		.loc 1 327 0
 398 0028 488B7C24 		movq	16(%rsp), %rdi
 398      10
 399 002d FF542408 		call	*8(%rsp)
 400              	.LVL35:
 401              	.L34:
 402              		.loc 1 326 0
 403 0031 488D7424 		leaq	16(%rsp), %rsi
 403      10
 404 0036 488D7C24 		leaq	8(%rsp), %rdi
 404      08
 405 003b E8000000 		call	_ZN2Fl18get_awake_handler_ERPFvPvERS0_
 405      00
 406              	.LVL36:
 407 0040 85C0     		testl	%eax, %eax
 408 0042 74E4     		je	.L37
 409              		.loc 1 329 0
 410 0044 488B4424 		movq	24(%rsp), %rax
 410      18
 411 0049 64483304 		xorq	%fs:40, %rax
 411      25280000 
 411      00
 412 0052 7505     		jne	.L38
 413 0054 4883C428 		addq	$40, %rsp
 414              		.cfi_remember_state
 415              		.cfi_def_cfa_offset 8
 416 0058 C3       		ret
 417              	.L38:
 418              		.cfi_restore_state
 419 0059 E8000000 		call	__stack_chk_fail
 419      00
 420              	.LVL37:
 421              		.cfi_endproc
 422              	.LFE175:
 424              		.section	.text.unlikely._ZL15thread_awake_cbiPv
 425              	.LCOLDE5:
 426              		.section	.text._ZL15thread_awake_cbiPv
 427              	.LHOTE5:
 428              		.section	.text.unlikely._ZN2Fl5awakeEPFvPvES0_,"ax",@progbits
 429              		.align 2
 430              	.LCOLDB6:
 431              		.section	.text._ZN2Fl5awakeEPFvPvES0_,"ax",@progbits
 432              	.LHOTB6:
 433              		.align 2
 434              		.p2align 4,,15
 435              		.globl	_ZN2Fl5awakeEPFvPvES0_
 437              	_ZN2Fl5awakeEPFvPvES0_:
 438              	.LFB151:
 439              		.loc 1 134 0
 440              		.cfi_startproc
 441              	.LVL38:
 442 0000 53       		pushq	%rbx
 443              		.cfi_def_cfa_offset 16
 444              		.cfi_offset 3, -16
 445 0001 4883EC10 		subq	$16, %rsp
 446              		.cfi_def_cfa_offset 32
 447              		.loc 1 134 0
 448 0005 64488B04 		movq	%fs:40, %rax
 448      25280000 
 448      00
 449 000e 48894424 		movq	%rax, 8(%rsp)
 449      08
 450 0013 31C0     		xorl	%eax, %eax
 451              		.loc 1 135 0
 452 0015 E8000000 		call	_ZN2Fl18add_awake_handler_EPFvPvES0_
 452      00
 453              	.LVL39:
 454              	.LBB20:
 455              	.LBB21:
 456              		.loc 1 310 0
 457 001a 8B3D0000 		movl	_ZL14thread_filedes+4(%rip), %edi
 457      0000
 458 0020 BA080000 		movl	$8, %edx
 458      00
 459 0025 4889E6   		movq	%rsp, %rsi
 460              	.LBE21:
 461              	.LBE20:
 462              		.loc 1 135 0
 463 0028 89C3     		movl	%eax, %ebx
 464              	.LVL40:
 465 002a 48C70424 		movq	$0, (%rsp)
 465      00000000 
 466              	.LVL41:
 467              	.LBB23:
 468              	.LBB22:
 469              		.loc 1 310 0
 470 0032 E8000000 		call	write
 470      00
 471              	.LVL42:
 472              	.LBE22:
 473              	.LBE23:
 474              		.loc 1 138 0
 475 0037 488B4C24 		movq	8(%rsp), %rcx
 475      08
 476 003c 6448330C 		xorq	%fs:40, %rcx
 476      25280000 
 476      00
 477 0045 7508     		jne	.L42
 478 0047 4883C410 		addq	$16, %rsp
 479              		.cfi_remember_state
 480              		.cfi_def_cfa_offset 16
 481 004b 89D8     		movl	%ebx, %eax
 482 004d 5B       		popq	%rbx
 483              		.cfi_def_cfa_offset 8
 484              	.LVL43:
 485 004e C3       		ret
 486              	.LVL44:
 487              	.L42:
 488              		.cfi_restore_state
 489 004f E8000000 		call	__stack_chk_fail
 489      00
 490              	.LVL45:
 491              		.cfi_endproc
 492              	.LFE151:
 494              		.section	.text.unlikely._ZN2Fl5awakeEPFvPvES0_
 495              	.LCOLDE6:
 496              		.section	.text._ZN2Fl5awakeEPFvPvES0_
 497              	.LHOTE6:
 498              		.section	.text.unlikely._ZN2Fl5awakeEPv,"ax",@progbits
 499              		.align 2
 500              	.LCOLDB7:
 501              		.section	.text._ZN2Fl5awakeEPv,"ax",@progbits
 502              	.LHOTB7:
 503              		.align 2
 504              		.p2align 4,,15
 505              		.globl	_ZN2Fl5awakeEPv
 507              	_ZN2Fl5awakeEPv:
 508              	.LFB173:
 509              		.loc 1 309 0
 510              		.cfi_startproc
 511              	.LVL46:
 512 0000 4883EC18 		subq	$24, %rsp
 513              		.cfi_def_cfa_offset 32
 514              		.loc 1 310 0
 515 0004 BA080000 		movl	$8, %edx
 515      00
 516              		.loc 1 309 0
 517 0009 48897C24 		movq	%rdi, 8(%rsp)
 517      08
 518              		.loc 1 310 0
 519 000e 8B3D0000 		movl	_ZL14thread_filedes+4(%rip), %edi
 519      0000
 520              	.LVL47:
 521 0014 488D7424 		leaq	8(%rsp), %rsi
 521      08
 522              	.LVL48:
 523 0019 E8000000 		call	write
 523      00
 524              	.LVL49:
 525              		.loc 1 311 0
 526 001e 4883C418 		addq	$24, %rsp
 527              		.cfi_def_cfa_offset 8
 528 0022 C3       		ret
 529              		.cfi_endproc
 530              	.LFE173:
 532              		.section	.text.unlikely._ZN2Fl5awakeEPv
 533              	.LCOLDE7:
 534              		.section	.text._ZN2Fl5awakeEPv
 535              	.LHOTE7:
 536              		.section	.text.unlikely._ZN2Fl14thread_messageEv,"ax",@progbits
 537              		.align 2
 538              	.LCOLDB8:
 539              		.section	.text._ZN2Fl14thread_messageEv,"ax",@progbits
 540              	.LHOTB8:
 541              		.align 2
 542              		.p2align 4,,15
 543              		.globl	_ZN2Fl14thread_messageEv
 545              	_ZN2Fl14thread_messageEv:
 546              	.LFB174:
 547              		.loc 1 314 0
 548              		.cfi_startproc
 549              		.loc 1 315 0
 550 0000 488B0500 		movq	_ZL15thread_message_(%rip), %rax
 550      000000
 551              	.LVL50:
 552              		.loc 1 316 0
 553 0007 48C70500 		movq	$0, _ZL15thread_message_(%rip)
 553      00000000 
 553      000000
 554              		.loc 1 318 0
 555 0012 C3       		ret
 556              		.cfi_endproc
 557              	.LFE174:
 559              		.section	.text.unlikely._ZN2Fl14thread_messageEv
 560              	.LCOLDE8:
 561              		.section	.text._ZN2Fl14thread_messageEv
 562              	.LHOTE8:
 563              		.section	.text.unlikely._ZN2Fl4lockEv,"ax",@progbits
 564              		.align 2
 565              	.LCOLDB9:
 566              		.section	.text._ZN2Fl4lockEv,"ax",@progbits
 567              	.LHOTB9:
 568              		.align 2
 569              		.p2align 4,,15
 570              		.globl	_ZN2Fl4lockEv
 572              	_ZN2Fl4lockEv:
 573              	.LFB176:
 574              		.loc 1 335 0
 575              		.cfi_startproc
 576 0000 4883EC08 		subq	$8, %rsp
 577              		.cfi_def_cfa_offset 16
 578              		.loc 1 336 0
 579 0004 8B050000 		movl	_ZL14thread_filedes+4(%rip), %eax
 579      0000
 580 000a 85C0     		testl	%eax, %eax
 581 000c 7412     		je	.L47
 582 000e 488B0500 		movq	fl_lock_function(%rip), %rax
 582      000000
 583              		.loc 1 369 0
 584 0015 FFD0     		call	*%rax
 585              	.LVL51:
 586              		.loc 1 371 0
 587 0017 31C0     		xorl	%eax, %eax
 588 0019 4883C408 		addq	$8, %rsp
 589              		.cfi_remember_state
 590              		.cfi_def_cfa_offset 8
 591 001d C3       		ret
 592 001e 6690     		.p2align 4,,10
 593              		.p2align 3
 594              	.L47:
 595              		.cfi_restore_state
 596              		.loc 1 339 0
 597 0020 BF000000 		movl	$_ZL14thread_filedes, %edi
 597      00
 598 0025 E8000000 		call	pipe
 598      00
 599              	.LVL52:
 600              		.loc 1 346 0
 601 002a 8B3D0000 		movl	_ZL14thread_filedes+4(%rip), %edi
 601      0000
 602 0030 BE030000 		movl	$3, %esi
 602      00
 603 0035 31C0     		xorl	%eax, %eax
 604 0037 E8000000 		call	fcntl
 604      00
 605              	.LVL53:
 606 003c 8B3D0000 		movl	_ZL14thread_filedes+4(%rip), %edi
 606      0000
 607 0042 80CC08   		orb	$8, %ah
 608 0045 BE040000 		movl	$4, %esi
 608      00
 609 004a 89C2     		movl	%eax, %edx
 610 004c 31C0     		xorl	%eax, %eax
 611 004e E8000000 		call	fcntl
 611      00
 612              	.LVL54:
 613              		.loc 1 351 0
 614 0053 8B3D0000 		movl	_ZL14thread_filedes(%rip), %edi
 614      0000
 615 0059 31C9     		xorl	%ecx, %ecx
 616 005b BA000000 		movl	$_ZL15thread_awake_cbiPv, %edx
 616      00
 617 0060 BE010000 		movl	$1, %esi
 617      00
 618 0065 E8000000 		call	_ZN2Fl6add_fdEiiPFviPvES0_
 618      00
 619              	.LVL55:
 620              	.LBB24:
 621              	.LBB25:
 622              		.loc 1 272 0
 623 006a 31F6     		xorl	%esi, %esi
 624 006c BF000000 		movl	$_ZL10fltk_mutex, %edi
 624      00
 625 0071 E8000000 		call	pthread_mutex_init
 625      00
 626              	.LVL56:
 627              	.LBE25:
 628              	.LBE24:
 629 0076 B8000000 		movl	$_ZL17lock_function_stdv, %eax
 629      00
 630              		.loc 1 362 0
 631 007b 48C70500 		movq	$_ZL17lock_function_stdv, fl_lock_function(%rip)
 631      00000000 
 631      000000
 632              		.loc 1 363 0
 633 0086 48C70500 		movq	$_ZL19unlock_function_stdv, fl_unlock_function(%rip)
 633      00000000 
 633      000000
 634              		.loc 1 369 0
 635 0091 FFD0     		call	*%rax
 636              	.LVL57:
 637              		.loc 1 371 0
 638 0093 31C0     		xorl	%eax, %eax
 639 0095 4883C408 		addq	$8, %rsp
 640              		.cfi_def_cfa_offset 8
 641 0099 C3       		ret
 642              		.cfi_endproc
 643              	.LFE176:
 645              		.section	.text.unlikely._ZN2Fl4lockEv
 646              	.LCOLDE9:
 647              		.section	.text._ZN2Fl4lockEv
 648              	.LHOTE9:
 649              		.section	.text.unlikely._ZN2Fl6unlockEv,"ax",@progbits
 650              		.align 2
 651              	.LCOLDB10:
 652              		.section	.text._ZN2Fl6unlockEv,"ax",@progbits
 653              	.LHOTB10:
 654              		.align 2
 655              		.p2align 4,,15
 656              		.globl	_ZN2Fl6unlockEv
 658              	_ZN2Fl6unlockEv:
 659              	.LFB177:
 660              		.loc 1 373 0
 661              		.cfi_startproc
 662              		.loc 1 374 0
 663 0000 FF250000 		jmp	*fl_unlock_function(%rip)
 663      0000
 664              	.LVL58:
 665              		.cfi_endproc
 666              	.LFE177:
 668              		.section	.text.unlikely._ZN2Fl6unlockEv
 669              	.LCOLDE10:
 670              		.section	.text._ZN2Fl6unlockEv
 671              	.LHOTE10:
 672              		.section	.bss._ZL10ring_mutex,"aw",@nobits
 673              		.align 8
 676              	_ZL10ring_mutex:
 677 0000 00000000 		.zero	8
 677      00000000 
 678              		.section	.bss._ZL15thread_message_,"aw",@nobits
 679              		.align 8
 682              	_ZL15thread_message_:
 683 0000 00000000 		.zero	8
 683      00000000 
 684              		.section	.bss._ZL7counter,"aw",@nobits
 685              		.align 4
 688              	_ZL7counter:
 689 0000 00000000 		.zero	4
 690              		.section	.bss._ZL5owner,"aw",@nobits
 691              		.align 8
 694              	_ZL5owner:
 695 0000 00000000 		.zero	8
 695      00000000 
 696              		.section	.bss._ZL10fltk_mutex,"aw",@nobits
 697              		.align 32
 700              	_ZL10fltk_mutex:
 701 0000 00000000 		.zero	40
 701      00000000 
 701      00000000 
 701      00000000 
 701      00000000 
 702              		.section	.bss._ZL14thread_filedes,"aw",@nobits
 703              		.align 8
 706              	_ZL14thread_filedes:
 707 0000 00000000 		.zero	8
 707      00000000 
 708              		.globl	_ZN2Fl16awake_ring_tail_E
 709              		.section	.bss._ZN2Fl16awake_ring_tail_E,"aw",@nobits
 710              		.align 4
 713              	_ZN2Fl16awake_ring_tail_E:
 714 0000 00000000 		.zero	4
 715              		.globl	_ZN2Fl16awake_ring_head_E
 716              		.section	.bss._ZN2Fl16awake_ring_head_E,"aw",@nobits
 717              		.align 4
 720              	_ZN2Fl16awake_ring_head_E:
 721 0000 00000000 		.zero	4
 722              		.globl	_ZN2Fl16awake_ring_size_E
 723              		.section	.bss._ZN2Fl16awake_ring_size_E,"aw",@nobits
 724              		.align 4
 727              	_ZN2Fl16awake_ring_size_E:
 728 0000 00000000 		.zero	4
 729              		.globl	_ZN2Fl11awake_data_E
 730              		.section	.bss._ZN2Fl11awake_data_E,"aw",@nobits
 731              		.align 8
 734              	_ZN2Fl11awake_data_E:
 735 0000 00000000 		.zero	8
 735      00000000 
 736              		.globl	_ZN2Fl11awake_ring_E
 737              		.section	.bss._ZN2Fl11awake_ring_E,"aw",@nobits
 738              		.align 8
 741              	_ZN2Fl11awake_ring_E:
 742 0000 00000000 		.zero	8
 742      00000000 
 743              		.text
 744              	.Letext0:
 745              		.section	.text.unlikely._ZL9lock_ringv
 746              	.Letext_cold0:
 747              		.file 3 "fltk-1.3.4-1/FL/fl_types.h"
 748              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 749              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 750              		.file 6 "/usr/include/libio.h"
 751              		.file 7 "/usr/include/stdio.h"
 752              		.file 8 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
 753              		.file 9 "fltk-1.3.4-1/FL/Enumerations.H"
 754              		.file 10 "fltk-1.3.4-1/FL/Fl.H"
 755              		.file 11 "/usr/include/x86_64-linux-gnu/bits/confname.h"
 756              		.file 12 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h"
 757              		.file 13 "/usr/include/pthread.h"
 758              		.file 14 "/usr/include/stdlib.h"
 759              		.file 15 "/usr/include/unistd.h"
 760              		.file 16 "/usr/include/fcntl.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_lock.cxx
     /tmp/cclVOLM4.s:13     .text._ZL9lock_ringv:0000000000000000 _ZL9lock_ringv
     /tmp/cclVOLM4.s:676    .bss._ZL10ring_mutex:0000000000000000 _ZL10ring_mutex
     /tmp/cclVOLM4.s:63     .text._ZL19unlock_function_stdv:0000000000000000 _ZL19unlock_function_stdv
     /tmp/cclVOLM4.s:688    .bss._ZL7counter:0000000000000000 _ZL7counter
     /tmp/cclVOLM4.s:700    .bss._ZL10fltk_mutex:0000000000000000 _ZL10fltk_mutex
     /tmp/cclVOLM4.s:91     .text._ZL17lock_function_stdv:0000000000000000 _ZL17lock_function_stdv
     /tmp/cclVOLM4.s:694    .bss._ZL5owner:0000000000000000 _ZL5owner
     /tmp/cclVOLM4.s:142    .text._ZN2Fl18add_awake_handler_EPFvPvES0_:0000000000000000 _ZN2Fl18add_awake_handler_EPFvPvES0_
     /tmp/cclVOLM4.s:741    .bss._ZN2Fl11awake_ring_E:0000000000000000 _ZN2Fl11awake_ring_E
     /tmp/cclVOLM4.s:720    .bss._ZN2Fl16awake_ring_head_E:0000000000000000 _ZN2Fl16awake_ring_head_E
     /tmp/cclVOLM4.s:727    .bss._ZN2Fl16awake_ring_size_E:0000000000000000 _ZN2Fl16awake_ring_size_E
     /tmp/cclVOLM4.s:713    .bss._ZN2Fl16awake_ring_tail_E:0000000000000000 _ZN2Fl16awake_ring_tail_E
     /tmp/cclVOLM4.s:734    .bss._ZN2Fl11awake_data_E:0000000000000000 _ZN2Fl11awake_data_E
     /tmp/cclVOLM4.s:273    .text._ZN2Fl18get_awake_handler_ERPFvPvERS0_:0000000000000000 _ZN2Fl18get_awake_handler_ERPFvPvERS0_
     /tmp/cclVOLM4.s:366    .text._ZL15thread_awake_cbiPv:0000000000000000 _ZL15thread_awake_cbiPv
     /tmp/cclVOLM4.s:682    .bss._ZL15thread_message_:0000000000000000 _ZL15thread_message_
     /tmp/cclVOLM4.s:437    .text._ZN2Fl5awakeEPFvPvES0_:0000000000000000 _ZN2Fl5awakeEPFvPvES0_
     /tmp/cclVOLM4.s:706    .bss._ZL14thread_filedes:0000000000000000 _ZL14thread_filedes
     /tmp/cclVOLM4.s:507    .text._ZN2Fl5awakeEPv:0000000000000000 _ZN2Fl5awakeEPv
     /tmp/cclVOLM4.s:545    .text._ZN2Fl14thread_messageEv:0000000000000000 _ZN2Fl14thread_messageEv
     /tmp/cclVOLM4.s:572    .text._ZN2Fl4lockEv:0000000000000000 _ZN2Fl4lockEv
     /tmp/cclVOLM4.s:658    .text._ZN2Fl6unlockEv:0000000000000000 _ZN2Fl6unlockEv
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.unistd.h.23.a608ae63b1bee638e80d9e2a8598bd8e
                           .group:0000000000000000 wm4.posix_opt.h.20.8587404e00639bdcc5f6a74591f95259
                           .group:0000000000000000 wm4.environments.h.56.c5802092ccc191baeb41f8d355bb878f
                           .group:0000000000000000 wm4.unistd.h.213.4c582e35260d661b081322974b7c1e74
                           .group:0000000000000000 wm4.unistd.h.271.5bc8a6a5109e709e04c40b754b201552
                           .group:0000000000000000 wm4.confname.h.27.6b00117a32f457cc72e5ac810a9adade
                           .group:0000000000000000 wm4.unistd.h.1078.c7eeb0fd3115c9566fb6865aa19af17f
                           .group:0000000000000000 wm4.fcntl.h.24.62c7e777a8b210e920ccbb92cfe8b9d8
                           .group:0000000000000000 wm4.uio.h.23.aa0898d8f5bb12d9ecd480ebbdbd1a4d
                           .group:0000000000000000 wm4.fcntllinux.h.42.916a07d9174cc0724783a75699766e2c
                           .group:0000000000000000 wm4.fcntl.h.40.8ff0a2b883e8f8c14f135fe2e029942a
                           .group:0000000000000000 wm4.fcntl.h.79.95ce396287dbe20a852f5fc91f176776
                           .group:0000000000000000 wm4.sched.h.20.03e66e3b847677c1e781b90f4b73f77e
                           .group:0000000000000000 wm4.sched.h.31.f838e85546a76474a8c4ae9ddad27ef3
                           .group:0000000000000000 wm4.sched.h.28.993b65ef0872fc27063289d09956c680
                           .group:0000000000000000 wm4.sched.h.45.d0cc07ecec8a850ef8bca32ca813813f
                           .group:0000000000000000 wm4.time.h.26.6a3cabd4f228e226db6723a3b0c81ba6
                           .group:0000000000000000 wm4.time.h.40.feab7216a531c47d425d6de002dd2384
                           .group:0000000000000000 wm4.timex.h.19.f552c10b6e10e54ec2c0920b0cef94ab
                           .group:0000000000000000 wm4.time.h.66.3030613ea56472141d4f6280f80765e8
                           .group:0000000000000000 wm4.pthread.h.35.a2370bbf9bd09ad34b7af168bd1e6d24

UNDEFINED SYMBOLS
pthread_mutex_lock
malloc
pthread_mutex_init
pthread_mutex_unlock
pthread_self
read
__stack_chk_fail
write
fl_lock_function
pipe
fcntl
_ZN2Fl6add_fdEiiPFviPvES0_
fl_unlock_function
