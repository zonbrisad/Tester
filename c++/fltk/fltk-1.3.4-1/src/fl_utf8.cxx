   1              		.file	"fl_utf8.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL7Toupperi,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL7Toupperi,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL7Toupperi
  10              	.Ltext_cold0:
  11              		.section	.text._ZL7Toupperi
  13              	_ZL7Toupperi:
  14              	.LFB103:
  15              		.file 1 "fltk-1.3.4-1/src/fl_utf8.cxx"
   1:fltk-1.3.4-1/src/fl_utf8.cxx **** ...
  16              		.loc 1 84 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 55       		pushq	%rbp
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 6, -16
  22 0001 53       		pushq	%rbx
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 3, -24
  25 0002 89FD     		movl	%edi, %ebp
  26 0004 4883EC08 		subq	$8, %rsp
  27              		.cfi_def_cfa_offset 32
  28              	.LBB54:
  29              		.loc 1 88 0
  30 0008 48833D00 		cmpq	$0, _ZZL7ToupperiE5table(%rip)
  30      00000000 
  31 0010 7426     		je	.L2
  32              	.LVL1:
  33              	.L7:
  34              	.LBE54:
  35              		.loc 1 100 0
  36 0012 81FDFFFF 		cmpl	$65535, %ebp
  36      0000
  37 0018 89E8     		movl	%ebp, %eax
  38 001a 770E     		ja	.L3
  39              	.LVL2:
  40              	.LBB58:
  41              	.LBB59:
  42              		.loc 1 101 0
  43 001c 488B0500 		movq	_ZZL7ToupperiE5table(%rip), %rax
  43      000000
  44              	.LVL3:
  45 0023 4863FD   		movslq	%ebp, %rdi
  46 0026 0FB70478 		movzwl	(%rax,%rdi,2), %eax
  47              	.LVL4:
  48              	.L3:
  49              	.LBE59:
  50              	.LBE58:
  51              		.loc 1 102 0
  52 002a 4883C408 		addq	$8, %rsp
  53              		.cfi_remember_state
  54              		.cfi_def_cfa_offset 24
  55 002e 5B       		popq	%rbx
  56              		.cfi_def_cfa_offset 16
  57 002f 5D       		popq	%rbp
  58              		.cfi_def_cfa_offset 8
  59              	.LVL5:
  60 0030 C3       		ret
  61              	.LVL6:
  62              		.p2align 4,,10
  63 0031 0F1F8000 		.p2align 3
  63      000000
  64              	.L2:
  65              		.cfi_restore_state
  66              	.LBB60:
  67              	.LBB55:
  68              		.loc 1 89 0
  69 0038 BF000002 		movl	$131072, %edi
  69      00
  70              	.LVL7:
  71 003d E8000000 		call	malloc
  71      00
  72              	.LVL8:
  73              		.loc 1 91 0
  74 0042 31D2     		xorl	%edx, %edx
  75              		.loc 1 90 0
  76 0044 48890500 		movq	%rax, _ZZL7ToupperiE5table(%rip)
  76      000000
  77              	.LVL9:
  78 004b 0F1F4400 		.p2align 4,,10
  78      00
  79              		.p2align 3
  80              	.L5:
  81              		.loc 1 92 0 discriminator 2
  82 0050 66891450 		movw	%dx, (%rax,%rdx,2)
  83              		.loc 1 91 0 discriminator 2
  84 0054 4883C201 		addq	$1, %rdx
  85              	.LVL10:
  86 0058 4881FA00 		cmpq	$65536, %rdx
  86      000100
  87 005f 75EF     		jne	.L5
  88 0061 31DB     		xorl	%ebx, %ebx
  89              	.LVL11:
  90              		.p2align 4,,10
  91 0063 0F1F4400 		.p2align 3
  91      00
  92              	.L8:
  93              	.LBB56:
  94              	.LBB57:
  95              		.loc 1 96 0
  96 0068 89DF     		movl	%ebx, %edi
  97 006a E8000000 		call	XUtf8Tolower
  97      00
  98              	.LVL12:
  99              		.loc 1 97 0
 100 006f 4898     		cltq
 101 0071 4839C3   		cmpq	%rax, %rbx
 102 0074 740B     		je	.L6
 103              		.loc 1 97 0 is_stmt 0 discriminator 1
 104 0076 488B1500 		movq	_ZZL7ToupperiE5table(%rip), %rdx
 104      000000
 105 007d 66891C42 		movw	%bx, (%rdx,%rax,2)
 106              	.L6:
 107              	.LBE57:
 108              		.loc 1 94 0 is_stmt 1 discriminator 2
 109 0081 4883C301 		addq	$1, %rbx
 110              	.LVL13:
 111 0085 4881FB00 		cmpq	$65536, %rbx
 111      000100
 112 008c 75DA     		jne	.L8
 113 008e EB82     		jmp	.L7
 114              	.LBE56:
 115              	.LBE55:
 116              	.LBE60:
 117              		.cfi_endproc
 118              	.LFE103:
 120              		.section	.text.unlikely._ZL7Toupperi
 121              	.LCOLDE0:
 122              		.section	.text._ZL7Toupperi
 123              	.LHOTE0:
 124              		.section	.text.unlikely.fl_utf8len,"ax",@progbits
 125              	.LCOLDB1:
 126              		.section	.text.fl_utf8len,"ax",@progbits
 127              	.LHOTB1:
 128              		.p2align 4,,15
 129              		.globl	fl_utf8len
 131              	fl_utf8len:
 132              	.LFB104:
 133              		.loc 1 112 0
 134              		.cfi_startproc
 135              	.LVL14:
 136              		.loc 1 113 0
 137 0000 4084FF   		testb	%dil, %dil
 138 0003 B8010000 		movl	$1, %eax
 138      00
 139 0008 7806     		js	.L28
 140              	.L18:
 141              		.loc 1 130 0
 142 000a F3C3     		rep ret
 143 000c 0F1F4000 		.p2align 4,,10
 144              		.p2align 3
 145              	.L28:
 146              		.loc 1 114 0
 147 0010 40F6C740 		testb	$64, %dil
 148 0014 7432     		je	.L20
 149              		.loc 1 115 0
 150 0016 40F6C720 		testb	$32, %dil
 151              		.loc 1 127 0
 152 001a B8020000 		movl	$2, %eax
 152      00
 153              		.loc 1 115 0
 154 001f 74E9     		je	.L18
 155              		.loc 1 116 0
 156 0021 40F6C710 		testb	$16, %dil
 157              		.loc 1 125 0
 158 0025 B8030000 		movl	$3, %eax
 158      00
 159              		.loc 1 116 0
 160 002a 74DE     		je	.L18
 161              	.LVL15:
 162              	.LBB63:
 163              	.LBB64:
 164              		.loc 1 117 0
 165 002c 40F6C708 		testb	$8, %dil
 166              		.loc 1 123 0
 167 0030 B8040000 		movl	$4, %eax
 167      00
 168              		.loc 1 117 0
 169 0035 74D3     		je	.L18
 170              		.loc 1 118 0
 171 0037 83E704   		andl	$4, %edi
 172              	.LVL16:
 173              		.loc 1 121 0
 174 003a 4080FF01 		cmpb	$1, %dil
 175 003e 19C0     		sbbl	%eax, %eax
 176 0040 83C006   		addl	$6, %eax
 177 0043 C3       		ret
 178              	.LVL17:
 179              		.p2align 4,,10
 180 0044 0F1F4000 		.p2align 3
 181              	.L20:
 182              	.LBE64:
 183              	.LBE63:
 184              		.loc 1 129 0
 185 0048 B8FFFFFF 		movl	$-1, %eax
 185      FF
 186              		.loc 1 130 0
 187 004d C3       		ret
 188              		.cfi_endproc
 189              	.LFE104:
 191              		.section	.text.unlikely.fl_utf8len
 192              	.LCOLDE1:
 193              		.section	.text.fl_utf8len
 194              	.LHOTE1:
 195              		.section	.text.unlikely.fl_utf8len1,"ax",@progbits
 196              	.LCOLDB2:
 197              		.section	.text.fl_utf8len1,"ax",@progbits
 198              	.LHOTB2:
 199              		.p2align 4,,15
 200              		.globl	fl_utf8len1
 202              	fl_utf8len1:
 203              	.LFB105:
 204              		.loc 1 142 0
 205              		.cfi_startproc
 206              	.LVL18:
 207              		.loc 1 143 0
 208 0000 4084FF   		testb	%dil, %dil
 209 0003 B8010000 		movl	$1, %eax
 209      00
 210 0008 7806     		js	.L41
 211              	.L30:
 212              		.loc 1 160 0
 213 000a F3C3     		rep ret
 214 000c 0F1F4000 		.p2align 4,,10
 215              		.p2align 3
 216              	.L41:
 217              		.loc 1 144 0
 218 0010 40F6C740 		testb	$64, %dil
 219 0014 74F4     		je	.L30
 220              		.loc 1 145 0
 221 0016 40F6C720 		testb	$32, %dil
 222              		.loc 1 157 0
 223 001a B8020000 		movl	$2, %eax
 223      00
 224              		.loc 1 145 0
 225 001f 74E9     		je	.L30
 226              		.loc 1 146 0
 227 0021 40F6C710 		testb	$16, %dil
 228              		.loc 1 155 0
 229 0025 B8030000 		movl	$3, %eax
 229      00
 230              		.loc 1 146 0
 231 002a 74DE     		je	.L30
 232              		.loc 1 147 0
 233 002c 40F6C708 		testb	$8, %dil
 234              		.loc 1 153 0
 235 0030 B8040000 		movl	$4, %eax
 235      00
 236              		.loc 1 147 0
 237 0035 74D3     		je	.L30
 238              		.loc 1 148 0
 239 0037 83E704   		andl	$4, %edi
 240              	.LVL19:
 241              		.loc 1 151 0
 242 003a 4080FF01 		cmpb	$1, %dil
 243 003e 19C0     		sbbl	%eax, %eax
 244 0040 83C006   		addl	$6, %eax
 245              		.loc 1 160 0
 246 0043 C3       		ret
 247              		.cfi_endproc
 248              	.LFE105:
 250              		.section	.text.unlikely.fl_utf8len1
 251              	.LCOLDE2:
 252              		.section	.text.fl_utf8len1
 253              	.LHOTE2:
 254              		.section	.text.unlikely.fl_utf_nb_char,"ax",@progbits
 255              	.LCOLDB3:
 256              		.section	.text.fl_utf_nb_char,"ax",@progbits
 257              	.LHOTB3:
 258              		.p2align 4,,15
 259              		.globl	fl_utf_nb_char
 261              	fl_utf_nb_char:
 262              	.LFB106:
 263              		.loc 1 170 0
 264              		.cfi_startproc
 265              	.LVL20:
 266              		.loc 1 173 0
 267 0000 85F6     		testl	%esi, %esi
 268 0002 7E33     		jle	.L46
 269 0004 4989F8   		movq	%rdi, %r8
 270 0007 31C9     		xorl	%ecx, %ecx
 271 0009 31D2     		xorl	%edx, %edx
 272              	.LBB65:
 273              		.loc 1 175 0
 274 000b 41B90100 		movl	$1, %r9d
 274      0000
 275              	.LVL21:
 276              		.p2align 4,,10
 277 0011 0F1F8000 		.p2align 3
 277      000000
 278              	.L45:
 279              		.loc 1 174 0
 280 0018 4863C2   		movslq	%edx, %rax
 281 001b 410FBE3C 		movsbl	(%r8,%rax), %edi
 281      00
 282 0020 E8000000 		call	fl_utf8len
 282      00
 283              	.LVL22:
 284              		.loc 1 175 0
 285 0025 85C0     		testl	%eax, %eax
 286 0027 410F4EC1 		cmovle	%r9d, %eax
 287              	.LVL23:
 288              		.loc 1 176 0
 289 002b 83C101   		addl	$1, %ecx
 290              	.LVL24:
 291              		.loc 1 177 0
 292 002e 01C2     		addl	%eax, %edx
 293              	.LVL25:
 294              	.LBE65:
 295              		.loc 1 173 0
 296 0030 39D6     		cmpl	%edx, %esi
 297 0032 7FE4     		jg	.L45
 298              	.LVL26:
 299              	.L43:
 300              		.loc 1 180 0
 301 0034 89C8     		movl	%ecx, %eax
 302 0036 C3       		ret
 303              	.LVL27:
 304              	.L46:
 305              		.loc 1 172 0
 306 0037 31C9     		xorl	%ecx, %ecx
 307 0039 EBF9     		jmp	.L43
 308              		.cfi_endproc
 309              	.LFE106:
 311              		.section	.text.unlikely.fl_utf_nb_char
 312              	.LCOLDE3:
 313              		.section	.text.fl_utf_nb_char
 314              	.LHOTE3:
 315              		.section	.text.unlikely.fl_utf_strncasecmp,"ax",@progbits
 316              	.LCOLDB4:
 317              		.section	.text.fl_utf_strncasecmp,"ax",@progbits
 318              	.LHOTB4:
 319              		.p2align 4,,15
 320              		.globl	fl_utf_strncasecmp
 322              	fl_utf_strncasecmp:
 323              	.LFB107:
 324              		.loc 1 194 0
 325              		.cfi_startproc
 326              	.LVL28:
 327 0000 4157     		pushq	%r15
 328              		.cfi_def_cfa_offset 16
 329              		.cfi_offset 15, -16
 330 0002 4156     		pushq	%r14
 331              		.cfi_def_cfa_offset 24
 332              		.cfi_offset 14, -24
 333 0004 4155     		pushq	%r13
 334              		.cfi_def_cfa_offset 32
 335              		.cfi_offset 13, -32
 336 0006 4154     		pushq	%r12
 337              		.cfi_def_cfa_offset 40
 338              		.cfi_offset 12, -40
 339 0008 55       		pushq	%rbp
 340              		.cfi_def_cfa_offset 48
 341              		.cfi_offset 6, -48
 342 0009 53       		pushq	%rbx
 343              		.cfi_def_cfa_offset 56
 344              		.cfi_offset 3, -56
 345 000a 4883EC18 		subq	$24, %rsp
 346              		.cfi_def_cfa_offset 80
 347              		.loc 1 194 0
 348 000e 64488B04 		movq	%fs:40, %rax
 348      25280000 
 348      00
 349 0017 48894424 		movq	%rax, 8(%rsp)
 349      08
 350 001c 31C0     		xorl	%eax, %eax
 351              	.LVL29:
 352              	.LBB66:
 353              		.loc 1 196 0
 354 001e 85D2     		testl	%edx, %edx
 355 0020 7E6E     		jle	.L56
 356 0022 4889FD   		movq	%rdi, %rbp
 357 0025 4989F4   		movq	%rsi, %r12
 358 0028 4189D5   		movl	%edx, %r13d
 359 002b 4531F6   		xorl	%r14d, %r14d
 360 002e EB18     		jmp	.L58
 361              	.LVL30:
 362              		.p2align 4,,10
 363              		.p2align 3
 364              	.L61:
 365              	.LBB67:
 366              		.loc 1 206 0
 367 0030 48630424 		movslq	(%rsp), %rax
 368              	.LBE67:
 369              		.loc 1 196 0
 370 0034 4183C601 		addl	$1, %r14d
 371              	.LVL31:
 372              	.LBB68:
 373              		.loc 1 206 0
 374 0038 4801C5   		addq	%rax, %rbp
 375              	.LVL32:
 376              		.loc 1 207 0
 377 003b 48634424 		movslq	4(%rsp), %rax
 377      04
 378 0040 4901C4   		addq	%rax, %r12
 379              	.LVL33:
 380              	.LBE68:
 381              		.loc 1 196 0
 382 0043 4539F5   		cmpl	%r14d, %r13d
 383 0046 7448     		je	.L56
 384              	.LVL34:
 385              	.L58:
 386              	.LBB69:
 387              		.loc 1 200 0
 388 0048 807D0000 		cmpb	$0, 0(%rbp)
 389 004c 7507     		jne	.L51
 390              		.loc 1 200 0 is_stmt 0 discriminator 1
 391 004e 41803C24 		cmpb	$0, (%r12)
 391      00
 392 0053 743B     		je	.L56
 393              	.L51:
 394              		.loc 1 202 0 is_stmt 1
 395 0055 31F6     		xorl	%esi, %esi
 396 0057 4889E2   		movq	%rsp, %rdx
 397 005a 4889EF   		movq	%rbp, %rdi
 398 005d E8000000 		call	fl_utf8decode
 398      00
 399              	.LVL35:
 400              		.loc 1 203 0
 401 0062 488D5424 		leaq	4(%rsp), %rdx
 401      04
 402 0067 31F6     		xorl	%esi, %esi
 403              		.loc 1 202 0
 404 0069 89C3     		movl	%eax, %ebx
 405              	.LVL36:
 406              		.loc 1 203 0
 407 006b 4C89E7   		movq	%r12, %rdi
 408 006e E8000000 		call	fl_utf8decode
 408      00
 409              	.LVL37:
 410              		.loc 1 204 0
 411 0073 89DF     		movl	%ebx, %edi
 412              		.loc 1 203 0
 413 0075 4189C7   		movl	%eax, %r15d
 414              	.LVL38:
 415              		.loc 1 204 0
 416 0078 E8000000 		call	XUtf8Tolower
 416      00
 417              	.LVL39:
 418 007d 4489FF   		movl	%r15d, %edi
 419 0080 89C3     		movl	%eax, %ebx
 420              	.LVL40:
 421 0082 E8000000 		call	XUtf8Tolower
 421      00
 422              	.LVL41:
 423              		.loc 1 205 0
 424 0087 29C3     		subl	%eax, %ebx
 425              	.LVL42:
 426 0089 74A5     		je	.L61
 427              		.loc 1 204 0
 428 008b 89D8     		movl	%ebx, %eax
 429 008d EB03     		jmp	.L50
 430              	.LVL43:
 431 008f 90       		.p2align 4,,10
 432              		.p2align 3
 433              	.L56:
 434              		.loc 1 200 0
 435 0090 31C0     		xorl	%eax, %eax
 436              	.L50:
 437              	.LBE69:
 438              	.LBE66:
 439              		.loc 1 210 0
 440 0092 488B4C24 		movq	8(%rsp), %rcx
 440      08
 441 0097 6448330C 		xorq	%fs:40, %rcx
 441      25280000 
 441      00
 442 00a0 750F     		jne	.L62
 443 00a2 4883C418 		addq	$24, %rsp
 444              		.cfi_remember_state
 445              		.cfi_def_cfa_offset 56
 446 00a6 5B       		popq	%rbx
 447              		.cfi_def_cfa_offset 48
 448 00a7 5D       		popq	%rbp
 449              		.cfi_def_cfa_offset 40
 450 00a8 415C     		popq	%r12
 451              		.cfi_def_cfa_offset 32
 452 00aa 415D     		popq	%r13
 453              		.cfi_def_cfa_offset 24
 454 00ac 415E     		popq	%r14
 455              		.cfi_def_cfa_offset 16
 456 00ae 415F     		popq	%r15
 457              		.cfi_def_cfa_offset 8
 458 00b0 C3       		ret
 459              	.L62:
 460              		.cfi_restore_state
 461 00b1 E8000000 		call	__stack_chk_fail
 461      00
 462              	.LVL44:
 463              		.cfi_endproc
 464              	.LFE107:
 466              		.section	.text.unlikely.fl_utf_strncasecmp
 467              	.LCOLDE4:
 468              		.section	.text.fl_utf_strncasecmp
 469              	.LHOTE4:
 470              		.section	.text.unlikely.fl_utf_strcasecmp,"ax",@progbits
 471              	.LCOLDB5:
 472              		.section	.text.fl_utf_strcasecmp,"ax",@progbits
 473              	.LHOTB5:
 474              		.p2align 4,,15
 475              		.globl	fl_utf_strcasecmp
 477              	fl_utf_strcasecmp:
 478              	.LFB108:
 479              		.loc 1 222 0
 480              		.cfi_startproc
 481              	.LVL45:
 482              		.loc 1 223 0
 483 0000 BAFFFFFF 		movl	$2147483647, %edx
 483      7F
 484 0005 E9000000 		jmp	fl_utf_strncasecmp
 484      00
 485              	.LVL46:
 486              		.cfi_endproc
 487              	.LFE108:
 489              		.section	.text.unlikely.fl_utf_strcasecmp
 490              	.LCOLDE5:
 491              		.section	.text.fl_utf_strcasecmp
 492              	.LHOTE5:
 493              		.section	.text.unlikely.fl_tolower,"ax",@progbits
 494              	.LCOLDB6:
 495              		.section	.text.fl_tolower,"ax",@progbits
 496              	.LHOTB6:
 497              		.p2align 4,,15
 498              		.globl	fl_tolower
 500              	fl_tolower:
 501              	.LFB109:
 502              		.loc 1 230 0
 503              		.cfi_startproc
 504              	.LVL47:
 505              		.loc 1 231 0
 506 0000 E9000000 		jmp	XUtf8Tolower
 506      00
 507              	.LVL48:
 508              		.cfi_endproc
 509              	.LFE109:
 511              		.section	.text.unlikely.fl_tolower
 512              	.LCOLDE6:
 513              		.section	.text.fl_tolower
 514              	.LHOTE6:
 515              		.section	.text.unlikely.fl_toupper,"ax",@progbits
 516              	.LCOLDB7:
 517              		.section	.text.fl_toupper,"ax",@progbits
 518              	.LHOTB7:
 519              		.p2align 4,,15
 520              		.globl	fl_toupper
 522              	fl_toupper:
 523              	.LFB110:
 524              		.loc 1 238 0
 525              		.cfi_startproc
 526              	.LVL49:
 527              		.loc 1 239 0
 528 0000 E9000000 		jmp	_ZL7Toupperi
 528      00
 529              	.LVL50:
 530              		.cfi_endproc
 531              	.LFE110:
 533              		.section	.text.unlikely.fl_toupper
 534              	.LCOLDE7:
 535              		.section	.text.fl_toupper
 536              	.LHOTE7:
 537              		.section	.text.unlikely.fl_utf_tolower,"ax",@progbits
 538              	.LCOLDB8:
 539              		.section	.text.fl_utf_tolower,"ax",@progbits
 540              	.LHOTB8:
 541              		.p2align 4,,15
 542              		.globl	fl_utf_tolower
 544              	fl_utf_tolower:
 545              	.LFB111:
 546              		.loc 1 247 0
 547              		.cfi_startproc
 548              	.LVL51:
 549 0000 4157     		pushq	%r15
 550              		.cfi_def_cfa_offset 16
 551              		.cfi_offset 15, -16
 552 0002 4156     		pushq	%r14
 553              		.cfi_def_cfa_offset 24
 554              		.cfi_offset 14, -24
 555 0004 4155     		pushq	%r13
 556              		.cfi_def_cfa_offset 32
 557              		.cfi_offset 13, -32
 558 0006 4154     		pushq	%r12
 559              		.cfi_def_cfa_offset 40
 560              		.cfi_offset 12, -40
 561 0008 4C63E6   		movslq	%esi, %r12
 562 000b 55       		pushq	%rbp
 563              		.cfi_def_cfa_offset 48
 564              		.cfi_offset 6, -48
 565 000c 53       		pushq	%rbx
 566              		.cfi_def_cfa_offset 56
 567              		.cfi_offset 3, -56
 568 000d 4883EC28 		subq	$40, %rsp
 569              		.cfi_def_cfa_offset 96
 570              		.loc 1 247 0
 571 0011 64488B04 		movq	%fs:40, %rax
 571      25280000 
 571      00
 572 001a 48894424 		movq	%rax, 24(%rsp)
 572      18
 573 001f 31C0     		xorl	%eax, %eax
 574              	.LVL52:
 575              		.loc 1 250 0
 576 0021 4A8D0427 		leaq	(%rdi,%r12), %rax
 577              	.LBB70:
 578              		.loc 1 251 0
 579 0025 4585E4   		testl	%r12d, %r12d
 580              	.LBE70:
 581              		.loc 1 250 0
 582 0028 48894424 		movq	%rax, 8(%rsp)
 582      08
 583              	.LVL53:
 584              	.LBB72:
 585              		.loc 1 251 0
 586 002d 7E7C     		jle	.L74
 587 002f 4989FE   		movq	%rdi, %r14
 588 0032 4D89E5   		movq	%r12, %r13
 589 0035 4989D7   		movq	%rdx, %r15
 590 0038 31ED     		xorl	%ebp, %ebp
 591 003a 31DB     		xorl	%ebx, %ebx
 592              	.LVL54:
 593 003c 0F1F4000 		.p2align 4,,10
 594              		.p2align 3
 595              	.L72:
 596              	.LBB71:
 597              		.loc 1 255 0
 598 0040 488B7424 		movq	8(%rsp), %rsi
 598      08
 599 0045 488D5424 		leaq	20(%rsp), %rdx
 599      14
 600 004a 4863FB   		movslq	%ebx, %rdi
 601 004d 4C01F7   		addq	%r14, %rdi
 602 0050 E8000000 		call	fl_utf8decode
 602      00
 603              	.LVL55:
 604              		.loc 1 256 0
 605 0055 4863F5   		movslq	%ebp, %rsi
 606 0058 89C7     		movl	%eax, %edi
 607 005a 4D8D2437 		leaq	(%r15,%rsi), %r12
 608 005e E8000000 		call	XUtf8Tolower
 608      00
 609              	.LVL56:
 610 0063 4C89E6   		movq	%r12, %rsi
 611 0066 89C7     		movl	%eax, %edi
 612 0068 E8000000 		call	fl_utf8encode
 612      00
 613              	.LVL57:
 614              		.loc 1 257 0
 615 006d 8B542414 		movl	20(%rsp), %edx
 616              		.loc 1 258 0
 617 0071 8D4B01   		leal	1(%rbx), %ecx
 618 0074 01D3     		addl	%edx, %ebx
 619              	.LVL58:
 620 0076 85D2     		testl	%edx, %edx
 621              		.loc 1 263 0
 622 0078 8D5501   		leal	1(%rbp), %edx
 623              		.loc 1 258 0
 624 007b 0F4ED9   		cmovle	%ecx, %ebx
 625              	.LVL59:
 626              		.loc 1 263 0
 627 007e 01C5     		addl	%eax, %ebp
 628              	.LVL60:
 629 0080 85C0     		testl	%eax, %eax
 630 0082 0F4EEA   		cmovle	%edx, %ebp
 631              	.LVL61:
 632              	.LBE71:
 633              		.loc 1 251 0
 634 0085 4439EB   		cmpl	%r13d, %ebx
 635 0088 7CB6     		jl	.L72
 636              	.LVL62:
 637              	.L67:
 638              	.LBE72:
 639              		.loc 1 269 0
 640 008a 488B4C24 		movq	24(%rsp), %rcx
 640      18
 641 008f 6448330C 		xorq	%fs:40, %rcx
 641      25280000 
 641      00
 642 0098 89E8     		movl	%ebp, %eax
 643 009a 7513     		jne	.L77
 644 009c 4883C428 		addq	$40, %rsp
 645              		.cfi_remember_state
 646              		.cfi_def_cfa_offset 56
 647 00a0 5B       		popq	%rbx
 648              		.cfi_def_cfa_offset 48
 649 00a1 5D       		popq	%rbp
 650              		.cfi_def_cfa_offset 40
 651 00a2 415C     		popq	%r12
 652              		.cfi_def_cfa_offset 32
 653 00a4 415D     		popq	%r13
 654              		.cfi_def_cfa_offset 24
 655 00a6 415E     		popq	%r14
 656              		.cfi_def_cfa_offset 16
 657 00a8 415F     		popq	%r15
 658              		.cfi_def_cfa_offset 8
 659 00aa C3       		ret
 660              	.LVL63:
 661              	.L74:
 662              		.cfi_restore_state
 663              		.loc 1 249 0
 664 00ab 31ED     		xorl	%ebp, %ebp
 665 00ad EBDB     		jmp	.L67
 666              	.LVL64:
 667              	.L77:
 668              		.loc 1 269 0
 669 00af E8000000 		call	__stack_chk_fail
 669      00
 670              	.LVL65:
 671              		.cfi_endproc
 672              	.LFE111:
 674              		.section	.text.unlikely.fl_utf_tolower
 675              	.LCOLDE8:
 676              		.section	.text.fl_utf_tolower
 677              	.LHOTE8:
 678              		.section	.text.unlikely.fl_utf_toupper,"ax",@progbits
 679              	.LCOLDB9:
 680              		.section	.text.fl_utf_toupper,"ax",@progbits
 681              	.LHOTB9:
 682              		.p2align 4,,15
 683              		.globl	fl_utf_toupper
 685              	fl_utf_toupper:
 686              	.LFB112:
 687              		.loc 1 276 0
 688              		.cfi_startproc
 689              	.LVL66:
 690 0000 4157     		pushq	%r15
 691              		.cfi_def_cfa_offset 16
 692              		.cfi_offset 15, -16
 693 0002 4156     		pushq	%r14
 694              		.cfi_def_cfa_offset 24
 695              		.cfi_offset 14, -24
 696 0004 4155     		pushq	%r13
 697              		.cfi_def_cfa_offset 32
 698              		.cfi_offset 13, -32
 699 0006 4154     		pushq	%r12
 700              		.cfi_def_cfa_offset 40
 701              		.cfi_offset 12, -40
 702 0008 4C63E6   		movslq	%esi, %r12
 703 000b 55       		pushq	%rbp
 704              		.cfi_def_cfa_offset 48
 705              		.cfi_offset 6, -48
 706 000c 53       		pushq	%rbx
 707              		.cfi_def_cfa_offset 56
 708              		.cfi_offset 3, -56
 709 000d 4883EC28 		subq	$40, %rsp
 710              		.cfi_def_cfa_offset 96
 711              		.loc 1 276 0
 712 0011 64488B04 		movq	%fs:40, %rax
 712      25280000 
 712      00
 713 001a 48894424 		movq	%rax, 24(%rsp)
 713      18
 714 001f 31C0     		xorl	%eax, %eax
 715              	.LVL67:
 716              		.loc 1 279 0
 717 0021 4A8D0427 		leaq	(%rdi,%r12), %rax
 718              	.LBB73:
 719              		.loc 1 280 0
 720 0025 4585E4   		testl	%r12d, %r12d
 721              	.LBE73:
 722              		.loc 1 279 0
 723 0028 48894424 		movq	%rax, 8(%rsp)
 723      08
 724              	.LVL68:
 725              	.LBB75:
 726              		.loc 1 280 0
 727 002d 7E7C     		jle	.L86
 728 002f 4989FE   		movq	%rdi, %r14
 729 0032 4D89E5   		movq	%r12, %r13
 730 0035 4989D7   		movq	%rdx, %r15
 731 0038 31ED     		xorl	%ebp, %ebp
 732 003a 31DB     		xorl	%ebx, %ebx
 733              	.LVL69:
 734 003c 0F1F4000 		.p2align 4,,10
 735              		.p2align 3
 736              	.L84:
 737              	.LBB74:
 738              		.loc 1 284 0
 739 0040 488B7424 		movq	8(%rsp), %rsi
 739      08
 740 0045 488D5424 		leaq	20(%rsp), %rdx
 740      14
 741 004a 4863FB   		movslq	%ebx, %rdi
 742 004d 4C01F7   		addq	%r14, %rdi
 743 0050 E8000000 		call	fl_utf8decode
 743      00
 744              	.LVL70:
 745              		.loc 1 285 0
 746 0055 4863F5   		movslq	%ebp, %rsi
 747 0058 89C7     		movl	%eax, %edi
 748 005a 4D8D2437 		leaq	(%r15,%rsi), %r12
 749 005e E8000000 		call	_ZL7Toupperi
 749      00
 750              	.LVL71:
 751 0063 4C89E6   		movq	%r12, %rsi
 752 0066 89C7     		movl	%eax, %edi
 753 0068 E8000000 		call	fl_utf8encode
 753      00
 754              	.LVL72:
 755              		.loc 1 286 0
 756 006d 8B542414 		movl	20(%rsp), %edx
 757              		.loc 1 287 0
 758 0071 8D4B01   		leal	1(%rbx), %ecx
 759 0074 01D3     		addl	%edx, %ebx
 760              	.LVL73:
 761 0076 85D2     		testl	%edx, %edx
 762              		.loc 1 292 0
 763 0078 8D5501   		leal	1(%rbp), %edx
 764              		.loc 1 287 0
 765 007b 0F4ED9   		cmovle	%ecx, %ebx
 766              	.LVL74:
 767              		.loc 1 292 0
 768 007e 01C5     		addl	%eax, %ebp
 769              	.LVL75:
 770 0080 85C0     		testl	%eax, %eax
 771 0082 0F4EEA   		cmovle	%edx, %ebp
 772              	.LVL76:
 773              	.LBE74:
 774              		.loc 1 280 0
 775 0085 4439EB   		cmpl	%r13d, %ebx
 776 0088 7CB6     		jl	.L84
 777              	.LVL77:
 778              	.L79:
 779              	.LBE75:
 780              		.loc 1 298 0
 781 008a 488B4C24 		movq	24(%rsp), %rcx
 781      18
 782 008f 6448330C 		xorq	%fs:40, %rcx
 782      25280000 
 782      00
 783 0098 89E8     		movl	%ebp, %eax
 784 009a 7513     		jne	.L89
 785 009c 4883C428 		addq	$40, %rsp
 786              		.cfi_remember_state
 787              		.cfi_def_cfa_offset 56
 788 00a0 5B       		popq	%rbx
 789              		.cfi_def_cfa_offset 48
 790 00a1 5D       		popq	%rbp
 791              		.cfi_def_cfa_offset 40
 792 00a2 415C     		popq	%r12
 793              		.cfi_def_cfa_offset 32
 794 00a4 415D     		popq	%r13
 795              		.cfi_def_cfa_offset 24
 796 00a6 415E     		popq	%r14
 797              		.cfi_def_cfa_offset 16
 798 00a8 415F     		popq	%r15
 799              		.cfi_def_cfa_offset 8
 800 00aa C3       		ret
 801              	.LVL78:
 802              	.L86:
 803              		.cfi_restore_state
 804              		.loc 1 278 0
 805 00ab 31ED     		xorl	%ebp, %ebp
 806 00ad EBDB     		jmp	.L79
 807              	.LVL79:
 808              	.L89:
 809              		.loc 1 298 0
 810 00af E8000000 		call	__stack_chk_fail
 810      00
 811              	.LVL80:
 812              		.cfi_endproc
 813              	.LFE112:
 815              		.section	.text.unlikely.fl_utf_toupper
 816              	.LCOLDE9:
 817              		.section	.text.fl_utf_toupper
 818              	.LHOTE9:
 819              		.section	.text.unlikely.fl_nonspacing,"ax",@progbits
 820              	.LCOLDB10:
 821              		.section	.text.fl_nonspacing,"ax",@progbits
 822              	.LHOTB10:
 823              		.p2align 4,,15
 824              		.globl	fl_nonspacing
 826              	fl_nonspacing:
 827              	.LFB113:
 828              		.loc 1 314 0
 829              		.cfi_startproc
 830              	.LVL81:
 831 0000 4883EC08 		subq	$8, %rsp
 832              		.cfi_def_cfa_offset 16
 833              		.loc 1 315 0
 834 0004 E8000000 		call	XUtf8IsNonSpacing
 834      00
 835              	.LVL82:
 836              		.loc 1 316 0
 837 0009 4883C408 		addq	$8, %rsp
 838              		.cfi_def_cfa_offset 8
 839              		.loc 1 315 0
 840 000d 0FB7C0   		movzwl	%ax, %eax
 841              		.loc 1 316 0
 842 0010 C3       		ret
 843              		.cfi_endproc
 844              	.LFE113:
 846              		.section	.text.unlikely.fl_nonspacing
 847              	.LCOLDE10:
 848              		.section	.text.fl_nonspacing
 849              	.LHOTE10:
 850              		.section	.text.unlikely.fl_utf2mbcs,"ax",@progbits
 851              	.LCOLDB11:
 852              		.section	.text.fl_utf2mbcs,"ax",@progbits
 853              	.LHOTB11:
 854              		.p2align 4,,15
 855              		.globl	fl_utf2mbcs
 857              	fl_utf2mbcs:
 858              	.LFB114:
 859              		.loc 1 385 0
 860              		.cfi_startproc
 861              	.LVL83:
 862              		.loc 1 385 0
 863 0000 4889F8   		movq	%rdi, %rax
 864              		.loc 1 405 0
 865 0003 C3       		ret
 866              		.cfi_endproc
 867              	.LFE114:
 869              		.section	.text.unlikely.fl_utf2mbcs
 870              	.LCOLDE11:
 871              		.section	.text.fl_utf2mbcs
 872              	.LHOTE11:
 873              		.section	.text.unlikely.fl_getenv,"ax",@progbits
 874              	.LCOLDB12:
 875              		.section	.text.fl_getenv,"ax",@progbits
 876              	.LHOTB12:
 877              		.p2align 4,,15
 878              		.globl	fl_getenv
 880              	fl_getenv:
 881              	.LFB115:
 882              		.loc 1 421 0
 883              		.cfi_startproc
 884              	.LVL84:
 885              		.loc 1 445 0
 886 0000 E9000000 		jmp	getenv
 886      00
 887              	.LVL85:
 888              		.cfi_endproc
 889              	.LFE115:
 891              		.section	.text.unlikely.fl_getenv
 892              	.LCOLDE12:
 893              		.section	.text.fl_getenv
 894              	.LHOTE12:
 895              		.section	.text.unlikely.fl_open,"ax",@progbits
 896              	.LCOLDB13:
 897              		.section	.text.fl_open,"ax",@progbits
 898              	.LHOTB13:
 899              		.p2align 4,,15
 900              		.globl	fl_open
 902              	fl_open:
 903              	.LFB116:
 904              		.loc 1 462 0
 905              		.cfi_startproc
 906              	.LVL86:
 907 0000 4883EC58 		subq	$88, %rsp
 908              		.cfi_def_cfa_offset 96
 909              		.loc 1 462 0
 910 0004 64488B04 		movq	%fs:40, %rax
 910      25280000 
 910      00
 911 000d 48894424 		movq	%rax, 24(%rsp)
 911      18
 912 0012 31C0     		xorl	%eax, %eax
 913 0014 48895424 		movq	%rdx, 48(%rsp)
 913      30
 914              		.loc 1 465 0
 915 0019 488D4424 		leaq	96(%rsp), %rax
 915      60
 916              		.loc 1 466 0
 917 001e 8B542430 		movl	48(%rsp), %edx
 918              	.LVL87:
 919              		.loc 1 465 0
 920 0022 C7042410 		movl	$16, (%rsp)
 920      000000
 921 0029 48894424 		movq	%rax, 8(%rsp)
 921      08
 922 002e 488D4424 		leaq	32(%rsp), %rax
 922      20
 923              		.loc 1 481 0
 924 0033 83FAFF   		cmpl	$-1, %edx
 925              		.loc 1 465 0
 926 0036 48894424 		movq	%rax, 16(%rsp)
 926      10
 927              		.loc 1 481 0
 928 003b 7423     		je	.L98
 929              	.LVL88:
 930              	.LBB76:
 931              	.LBB77:
 932              		.file 2 "/usr/include/x86_64-linux-gnu/bits/fcntl2.h"
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
  54:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****     }
  55:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 
  56:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****   if (__va_arg_pack_len () < 1)
  57:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****     return __open_2 (__path, __oflag);
  58:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 
  59:/usr/include/x86_64-linux-gnu/bits/fcntl2.h ****   return __open_alias (__path, __oflag, __va_arg_pack ());
 933              		.loc 2 59 0
 934 003d 31C0     		xorl	%eax, %eax
 935 003f E8000000 		call	open
 935      00
 936              	.LVL89:
 937              	.L97:
 938              	.LBE77:
 939              	.LBE76:
 940              		.loc 1 486 0
 941 0044 488B4C24 		movq	24(%rsp), %rcx
 941      18
 942 0049 6448330C 		xorq	%fs:40, %rcx
 942      25280000 
 942      00
 943 0052 7513     		jne	.L104
 944 0054 4883C458 		addq	$88, %rsp
 945              		.cfi_remember_state
 946              		.cfi_def_cfa_offset 8
 947 0058 C3       		ret
 948              	.LVL90:
 949 0059 0F1F8000 		.p2align 4,,10
 949      000000
 950              		.p2align 3
 951              	.L98:
 952              		.cfi_restore_state
 953              	.LBB78:
 954              	.LBB79:
  57:/usr/include/x86_64-linux-gnu/bits/fcntl2.h **** 
 955              		.loc 2 57 0
 956 0060 E8000000 		call	__open_2
 956      00
 957              	.LVL91:
 958 0065 EBDD     		jmp	.L97
 959              	.LVL92:
 960              	.L104:
 961              	.LBE79:
 962              	.LBE78:
 963              		.loc 1 486 0
 964 0067 E8000000 		call	__stack_chk_fail
 964      00
 965              	.LVL93:
 966              		.cfi_endproc
 967              	.LFE116:
 969              		.section	.text.unlikely.fl_open
 970              	.LCOLDE13:
 971              		.section	.text.fl_open
 972              	.LHOTE13:
 973              		.section	.text.unlikely.fl_fopen,"ax",@progbits
 974              	.LCOLDB14:
 975              		.section	.text.fl_fopen,"ax",@progbits
 976              	.LHOTB14:
 977              		.p2align 4,,15
 978              		.globl	fl_fopen
 980              	fl_fopen:
 981              	.LFB117:
 982              		.loc 1 498 0
 983              		.cfi_startproc
 984              	.LVL94:
 985              		.loc 1 516 0
 986 0000 E9000000 		jmp	fopen
 986      00
 987              	.LVL95:
 988              		.cfi_endproc
 989              	.LFE117:
 991              		.section	.text.unlikely.fl_fopen
 992              	.LCOLDE14:
 993              		.section	.text.fl_fopen
 994              	.LHOTE14:
 995              		.section	.text.unlikely.fl_system,"ax",@progbits
 996              	.LCOLDB15:
 997              		.section	.text.fl_system,"ax",@progbits
 998              	.LHOTB15:
 999              		.p2align 4,,15
 1000              		.globl	fl_system
 1002              	fl_system:
 1003              	.LFB118:
 1004              		.loc 1 535 0
 1005              		.cfi_startproc
 1006              	.LVL96:
 1007              		.loc 1 550 0
 1008 0000 E9000000 		jmp	system
 1008      00
 1009              	.LVL97:
 1010              		.cfi_endproc
 1011              	.LFE118:
 1013              		.section	.text.unlikely.fl_system
 1014              	.LCOLDE15:
 1015              		.section	.text.fl_system
 1016              	.LHOTE15:
 1017              		.section	.text.unlikely.fl_execvp,"ax",@progbits
 1018              	.LCOLDB16:
 1019              		.section	.text.fl_execvp,"ax",@progbits
 1020              	.LHOTB16:
 1021              		.p2align 4,,15
 1022              		.globl	fl_execvp
 1024              	fl_execvp:
 1025              	.LFB119:
 1026              		.loc 1 555 0
 1027              		.cfi_startproc
 1028              	.LVL98:
 1029              		.loc 1 594 0
 1030 0000 E9000000 		jmp	execvp
 1030      00
 1031              	.LVL99:
 1032              		.cfi_endproc
 1033              	.LFE119:
 1035              		.section	.text.unlikely.fl_execvp
 1036              	.LCOLDE16:
 1037              		.section	.text.fl_execvp
 1038              	.LHOTE16:
 1039              		.section	.text.unlikely.fl_chmod,"ax",@progbits
 1040              	.LCOLDB17:
 1041              		.section	.text.fl_chmod,"ax",@progbits
 1042              	.LHOTB17:
 1043              		.p2align 4,,15
 1044              		.globl	fl_chmod
 1046              	fl_chmod:
 1047              	.LFB120:
 1048              		.loc 1 609 0
 1049              		.cfi_startproc
 1050              	.LVL100:
 1051              		.loc 1 622 0
 1052 0000 E9000000 		jmp	chmod
 1052      00
 1053              	.LVL101:
 1054              		.cfi_endproc
 1055              	.LFE120:
 1057              		.section	.text.unlikely.fl_chmod
 1058              	.LCOLDE17:
 1059              		.section	.text.fl_chmod
 1060              	.LHOTE17:
 1061              		.section	.text.unlikely.fl_access,"ax",@progbits
 1062              	.LCOLDB18:
 1063              		.section	.text.fl_access,"ax",@progbits
 1064              	.LHOTB18:
 1065              		.p2align 4,,15
 1066              		.globl	fl_access
 1068              	fl_access:
 1069              	.LFB121:
 1070              		.loc 1 639 0
 1071              		.cfi_startproc
 1072              	.LVL102:
 1073              		.loc 1 652 0
 1074 0000 E9000000 		jmp	access
 1074      00
 1075              	.LVL103:
 1076              		.cfi_endproc
 1077              	.LFE121:
 1079              		.section	.text.unlikely.fl_access
 1080              	.LCOLDE18:
 1081              		.section	.text.fl_access
 1082              	.LHOTE18:
 1083              		.section	.text.unlikely.fl_stat,"ax",@progbits
 1084              	.LCOLDB19:
 1085              		.section	.text.fl_stat,"ax",@progbits
 1086              	.LHOTB19:
 1087              		.p2align 4,,15
 1088              		.globl	fl_stat
 1090              	fl_stat:
 1091              	.LFB122:
 1092              		.loc 1 669 0
 1093              		.cfi_startproc
 1094              	.LVL104:
 1095              		.loc 1 669 0
 1096 0000 4889F2   		movq	%rsi, %rdx
 1097              	.LVL105:
 1098              	.LBB80:
 1099              	.LBB81:
 1100              		.file 3 "/usr/include/x86_64-linux-gnu/sys/stat.h"
   1:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   2:/usr/include/x86_64-linux-gnu/sys/stat.h ****    This file is part of the GNU C Library.
   3:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
   4:/usr/include/x86_64-linux-gnu/sys/stat.h ****    The GNU C Library is free software; you can redistribute it and/or
   5:/usr/include/x86_64-linux-gnu/sys/stat.h ****    modify it under the terms of the GNU Lesser General Public
   6:/usr/include/x86_64-linux-gnu/sys/stat.h ****    License as published by the Free Software Foundation; either
   7:/usr/include/x86_64-linux-gnu/sys/stat.h ****    version 2.1 of the License, or (at your option) any later version.
   8:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
   9:/usr/include/x86_64-linux-gnu/sys/stat.h ****    The GNU C Library is distributed in the hope that it will be useful,
  10:/usr/include/x86_64-linux-gnu/sys/stat.h ****    but WITHOUT ANY WARRANTY; without even the implied warranty of
  11:/usr/include/x86_64-linux-gnu/sys/stat.h ****    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  12:/usr/include/x86_64-linux-gnu/sys/stat.h ****    Lesser General Public License for more details.
  13:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  14:/usr/include/x86_64-linux-gnu/sys/stat.h ****    You should have received a copy of the GNU Lesser General Public
  15:/usr/include/x86_64-linux-gnu/sys/stat.h ****    License along with the GNU C Library; if not, see
  16:/usr/include/x86_64-linux-gnu/sys/stat.h ****    <http://www.gnu.org/licenses/>.  */
  17:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  18:/usr/include/x86_64-linux-gnu/sys/stat.h **** /*
  19:/usr/include/x86_64-linux-gnu/sys/stat.h ****  *	POSIX Standard: 5.6 File Characteristics	<sys/stat.h>
  20:/usr/include/x86_64-linux-gnu/sys/stat.h ****  */
  21:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  22:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifndef	_SYS_STAT_H
  23:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	_SYS_STAT_H	1
  24:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  25:/usr/include/x86_64-linux-gnu/sys/stat.h **** #include <features.h>
  26:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  27:/usr/include/x86_64-linux-gnu/sys/stat.h **** #include <bits/types.h>		/* For __mode_t and __dev_t.  */
  28:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  29:/usr/include/x86_64-linux-gnu/sys/stat.h **** #if defined __USE_XOPEN || defined __USE_XOPEN2K || defined __USE_ATFILE
  30:/usr/include/x86_64-linux-gnu/sys/stat.h **** # if defined __USE_XOPEN || defined __USE_XOPEN2K
  31:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __need_time_t
  32:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
  33:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifdef __USE_ATFILE
  34:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __need_timespec
  35:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
  36:/usr/include/x86_64-linux-gnu/sys/stat.h **** # include <time.h>		/* For time_t resp. timespec.  */
  37:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
  38:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  39:/usr/include/x86_64-linux-gnu/sys/stat.h **** #if defined __USE_XOPEN || defined __USE_XOPEN2K
  40:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* The Single Unix specification says that some more types are
  41:/usr/include/x86_64-linux-gnu/sys/stat.h ****    available here.  */
  42:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifndef __dev_t_defined
  43:/usr/include/x86_64-linux-gnu/sys/stat.h **** typedef __dev_t dev_t;
  44:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __dev_t_defined
  45:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
  46:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  47:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifndef __gid_t_defined
  48:/usr/include/x86_64-linux-gnu/sys/stat.h **** typedef __gid_t gid_t;
  49:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __gid_t_defined
  50:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
  51:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  52:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifndef __ino_t_defined
  53:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  ifndef __USE_FILE_OFFSET64
  54:/usr/include/x86_64-linux-gnu/sys/stat.h **** typedef __ino_t ino_t;
  55:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  else
  56:/usr/include/x86_64-linux-gnu/sys/stat.h **** typedef __ino64_t ino_t;
  57:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  endif
  58:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __ino_t_defined
  59:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
  60:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  61:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifndef __mode_t_defined
  62:/usr/include/x86_64-linux-gnu/sys/stat.h **** typedef __mode_t mode_t;
  63:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __mode_t_defined
  64:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
  65:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  66:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifndef __nlink_t_defined
  67:/usr/include/x86_64-linux-gnu/sys/stat.h **** typedef __nlink_t nlink_t;
  68:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __nlink_t_defined
  69:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
  70:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  71:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifndef __off_t_defined
  72:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  ifndef __USE_FILE_OFFSET64
  73:/usr/include/x86_64-linux-gnu/sys/stat.h **** typedef __off_t off_t;
  74:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  else
  75:/usr/include/x86_64-linux-gnu/sys/stat.h **** typedef __off64_t off_t;
  76:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  endif
  77:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __off_t_defined
  78:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
  79:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  80:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifndef __uid_t_defined
  81:/usr/include/x86_64-linux-gnu/sys/stat.h **** typedef __uid_t uid_t;
  82:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __uid_t_defined
  83:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
  84:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif	/* X/Open */
  85:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  86:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __USE_UNIX98
  87:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifndef __blkcnt_t_defined
  88:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  ifndef __USE_FILE_OFFSET64
  89:/usr/include/x86_64-linux-gnu/sys/stat.h **** typedef __blkcnt_t blkcnt_t;
  90:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  else
  91:/usr/include/x86_64-linux-gnu/sys/stat.h **** typedef __blkcnt64_t blkcnt_t;
  92:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  endif
  93:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __blkcnt_t_defined
  94:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
  95:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
  96:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifndef __blksize_t_defined
  97:/usr/include/x86_64-linux-gnu/sys/stat.h **** typedef __blksize_t blksize_t;
  98:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __blksize_t_defined
  99:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
 100:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif	/* Unix98 */
 101:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 102:/usr/include/x86_64-linux-gnu/sys/stat.h **** __BEGIN_DECLS
 103:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 104:/usr/include/x86_64-linux-gnu/sys/stat.h **** #include <bits/stat.h>
 105:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 106:/usr/include/x86_64-linux-gnu/sys/stat.h **** #if defined __USE_MISC || defined __USE_XOPEN
 107:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_IFMT		__S_IFMT
 108:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_IFDIR	__S_IFDIR
 109:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_IFCHR	__S_IFCHR
 110:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_IFBLK	__S_IFBLK
 111:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_IFREG	__S_IFREG
 112:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifdef __S_IFIFO
 113:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define S_IFIFO	__S_IFIFO
 114:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
 115:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifdef __S_IFLNK
 116:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define S_IFLNK	__S_IFLNK
 117:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
 118:/usr/include/x86_64-linux-gnu/sys/stat.h **** # if (defined __USE_MISC || defined __USE_UNIX98) \
 119:/usr/include/x86_64-linux-gnu/sys/stat.h ****      && defined __S_IFSOCK
 120:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define S_IFSOCK	__S_IFSOCK
 121:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
 122:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 123:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 124:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Test macros for file types.	*/
 125:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 126:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	__S_ISTYPE(mode, mask)	(((mode) & __S_IFMT) == (mask))
 127:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 128:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_ISDIR(mode)	 __S_ISTYPE((mode), __S_IFDIR)
 129:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_ISCHR(mode)	 __S_ISTYPE((mode), __S_IFCHR)
 130:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_ISBLK(mode)	 __S_ISTYPE((mode), __S_IFBLK)
 131:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_ISREG(mode)	 __S_ISTYPE((mode), __S_IFREG)
 132:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __S_IFIFO
 133:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_ISFIFO(mode)	 __S_ISTYPE((mode), __S_IFIFO)
 134:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 135:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __S_IFLNK
 136:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_ISLNK(mode)	 __S_ISTYPE((mode), __S_IFLNK)
 137:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 138:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 139:/usr/include/x86_64-linux-gnu/sys/stat.h **** #if defined __USE_MISC && !defined __S_IFLNK
 140:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_ISLNK(mode)  0
 141:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 142:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 143:/usr/include/x86_64-linux-gnu/sys/stat.h **** #if (defined __USE_UNIX98 || defined __USE_XOPEN2K) \
 144:/usr/include/x86_64-linux-gnu/sys/stat.h ****     && defined __S_IFSOCK
 145:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_ISSOCK(mode) __S_ISTYPE((mode), __S_IFSOCK)
 146:/usr/include/x86_64-linux-gnu/sys/stat.h **** #elif defined __USE_XOPEN2K
 147:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_ISSOCK(mode) 0
 148:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 149:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 150:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* These are from POSIX.1b.  If the objects are not implemented using separate
 151:/usr/include/x86_64-linux-gnu/sys/stat.h ****    distinct file types, the macros always will evaluate to zero.  Unlike the
 152:/usr/include/x86_64-linux-gnu/sys/stat.h ****    other S_* macros the following three take a pointer to a `struct stat'
 153:/usr/include/x86_64-linux-gnu/sys/stat.h ****    object as the argument.  */
 154:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef	__USE_POSIX199309
 155:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_TYPEISMQ(buf) __S_TYPEISMQ(buf)
 156:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_TYPEISSEM(buf) __S_TYPEISSEM(buf)
 157:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_TYPEISSHM(buf) __S_TYPEISSHM(buf)
 158:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 159:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 160:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 161:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Protection bits.  */
 162:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 163:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_ISUID __S_ISUID	/* Set user ID on execution.  */
 164:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_ISGID	__S_ISGID	/* Set group ID on execution.  */
 165:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 166:/usr/include/x86_64-linux-gnu/sys/stat.h **** #if defined __USE_MISC || defined __USE_XOPEN
 167:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Save swapped text after use (sticky bit).  This is pretty well obsolete.  */
 168:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_ISVTX	__S_ISVTX
 169:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 170:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 171:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_IRUSR	__S_IREAD	/* Read by owner.  */
 172:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_IWUSR	__S_IWRITE	/* Write by owner.  */
 173:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_IXUSR	__S_IEXEC	/* Execute by owner.  */
 174:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Read, write, and execute by owner.  */
 175:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_IRWXU	(__S_IREAD|__S_IWRITE|__S_IEXEC)
 176:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 177:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __USE_MISC
 178:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_IREAD	S_IRUSR
 179:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_IWRITE	S_IWUSR
 180:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_IEXEC	S_IXUSR
 181:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 182:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 183:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_IRGRP	(S_IRUSR >> 3)	/* Read by group.  */
 184:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_IWGRP	(S_IWUSR >> 3)	/* Write by group.  */
 185:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_IXGRP	(S_IXUSR >> 3)	/* Execute by group.  */
 186:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Read, write, and execute by group.  */
 187:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_IRWXG	(S_IRWXU >> 3)
 188:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 189:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_IROTH	(S_IRGRP >> 3)	/* Read by others.  */
 190:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_IWOTH	(S_IWGRP >> 3)	/* Write by others.  */
 191:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_IXOTH	(S_IXGRP >> 3)	/* Execute by others.  */
 192:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Read, write, and execute by others.  */
 193:/usr/include/x86_64-linux-gnu/sys/stat.h **** #define	S_IRWXO	(S_IRWXG >> 3)
 194:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 195:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 196:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef	__USE_MISC
 197:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Macros for common mode bit masks.  */
 198:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO) /* 0777 */
 199:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define ALLPERMS (S_ISUID|S_ISGID|S_ISVTX|S_IRWXU|S_IRWXG|S_IRWXO)/* 07777 */
 200:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)/* 0666*/
 201:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 202:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define S_BLKSIZE	512	/* Block size for `st_blocks'.  */
 203:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 204:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 205:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 206:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifndef __USE_FILE_OFFSET64
 207:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Get file attributes for FILE and put them in BUF.  */
 208:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int stat (const char *__restrict __file,
 209:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		 struct stat *__restrict __buf) __THROW __nonnull ((1, 2));
 210:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 211:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Get file attributes for the file, device, pipe, or socket
 212:/usr/include/x86_64-linux-gnu/sys/stat.h ****    that file descriptor FD is open on and put them in BUF.  */
 213:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int fstat (int __fd, struct stat *__buf) __THROW __nonnull ((2));
 214:/usr/include/x86_64-linux-gnu/sys/stat.h **** #else
 215:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifdef __REDIRECT_NTH
 216:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __REDIRECT_NTH (stat, (const char *__restrict __file,
 217:/usr/include/x86_64-linux-gnu/sys/stat.h **** 				  struct stat *__restrict __buf), stat64)
 218:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __nonnull ((1, 2));
 219:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __REDIRECT_NTH (fstat, (int __fd, struct stat *__buf), fstat64)
 220:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __nonnull ((2));
 221:/usr/include/x86_64-linux-gnu/sys/stat.h **** # else
 222:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define stat stat64
 223:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define fstat fstat64
 224:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
 225:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 226:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __USE_LARGEFILE64
 227:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int stat64 (const char *__restrict __file,
 228:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		   struct stat64 *__restrict __buf) __THROW __nonnull ((1, 2));
 229:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int fstat64 (int __fd, struct stat64 *__buf) __THROW __nonnull ((2));
 230:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 231:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 232:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __USE_ATFILE
 233:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Similar to stat, get the attributes for FILE and put them in BUF.
 234:/usr/include/x86_64-linux-gnu/sys/stat.h ****    Relative path names are interpreted relative to FD unless FD is
 235:/usr/include/x86_64-linux-gnu/sys/stat.h ****    AT_FDCWD.  */
 236:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifndef __USE_FILE_OFFSET64
 237:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int fstatat (int __fd, const char *__restrict __file,
 238:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		    struct stat *__restrict __buf, int __flag)
 239:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((2, 3));
 240:/usr/include/x86_64-linux-gnu/sys/stat.h **** # else
 241:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  ifdef __REDIRECT_NTH
 242:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __REDIRECT_NTH (fstatat, (int __fd, const char *__restrict __file,
 243:/usr/include/x86_64-linux-gnu/sys/stat.h **** 				     struct stat *__restrict __buf,
 244:/usr/include/x86_64-linux-gnu/sys/stat.h **** 				     int __flag),
 245:/usr/include/x86_64-linux-gnu/sys/stat.h **** 			   fstatat64) __nonnull ((2, 3));
 246:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  else
 247:/usr/include/x86_64-linux-gnu/sys/stat.h **** #   define fstatat fstatat64
 248:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  endif
 249:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
 250:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 251:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifdef __USE_LARGEFILE64
 252:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int fstatat64 (int __fd, const char *__restrict __file,
 253:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		      struct stat64 *__restrict __buf, int __flag)
 254:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((2, 3));
 255:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
 256:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 257:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 258:/usr/include/x86_64-linux-gnu/sys/stat.h **** #if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K
 259:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifndef __USE_FILE_OFFSET64
 260:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Get file attributes about FILE and put them in BUF.
 261:/usr/include/x86_64-linux-gnu/sys/stat.h ****    If FILE is a symbolic link, do not follow it.  */
 262:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int lstat (const char *__restrict __file,
 263:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		  struct stat *__restrict __buf) __THROW __nonnull ((1, 2));
 264:/usr/include/x86_64-linux-gnu/sys/stat.h **** # else
 265:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  ifdef __REDIRECT_NTH
 266:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __REDIRECT_NTH (lstat,
 267:/usr/include/x86_64-linux-gnu/sys/stat.h **** 			   (const char *__restrict __file,
 268:/usr/include/x86_64-linux-gnu/sys/stat.h **** 			    struct stat *__restrict __buf), lstat64)
 269:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __nonnull ((1, 2));
 270:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  else
 271:/usr/include/x86_64-linux-gnu/sys/stat.h **** #   define lstat lstat64
 272:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  endif
 273:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
 274:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifdef __USE_LARGEFILE64
 275:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int lstat64 (const char *__restrict __file,
 276:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		    struct stat64 *__restrict __buf)
 277:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((1, 2));
 278:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
 279:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 280:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 281:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Set file access permissions for FILE to MODE.
 282:/usr/include/x86_64-linux-gnu/sys/stat.h ****    If FILE is a symbolic link, this affects its target instead.  */
 283:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int chmod (const char *__file, __mode_t __mode)
 284:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((1));
 285:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 286:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __USE_MISC
 287:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Set file access permissions for FILE to MODE.
 288:/usr/include/x86_64-linux-gnu/sys/stat.h ****    If FILE is a symbolic link, this affects the link itself
 289:/usr/include/x86_64-linux-gnu/sys/stat.h ****    rather than its target.  */
 290:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int lchmod (const char *__file, __mode_t __mode)
 291:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((1));
 292:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 293:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 294:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Set file access permissions of the file FD is open on to MODE.  */
 295:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __USE_POSIX
 296:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int fchmod (int __fd, __mode_t __mode) __THROW;
 297:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 298:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 299:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __USE_ATFILE
 300:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Set file access permissions of FILE relative to
 301:/usr/include/x86_64-linux-gnu/sys/stat.h ****    the directory FD is open on.  */
 302:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
 303:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		     int __flag)
 304:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((2)) __wur;
 305:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif /* Use ATFILE.  */
 306:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 307:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 308:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 309:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Set the file creation mask of the current process to MASK,
 310:/usr/include/x86_64-linux-gnu/sys/stat.h ****    and return the old creation mask.  */
 311:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern __mode_t umask (__mode_t __mask) __THROW;
 312:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 313:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef	__USE_GNU
 314:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Get the current `umask' value without changing it.
 315:/usr/include/x86_64-linux-gnu/sys/stat.h ****    This function is only available under the GNU Hurd.  */
 316:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern __mode_t getumask (void) __THROW;
 317:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 318:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 319:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Create a new directory named PATH, with permission bits MODE.  */
 320:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int mkdir (const char *__path, __mode_t __mode)
 321:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((1));
 322:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 323:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __USE_ATFILE
 324:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Like mkdir, create a new directory with permission bits MODE.  But
 325:/usr/include/x86_64-linux-gnu/sys/stat.h ****    interpret relative PATH names relative to the directory associated
 326:/usr/include/x86_64-linux-gnu/sys/stat.h ****    with FD.  */
 327:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
 328:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((2));
 329:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 330:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 331:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Create a device file named PATH, with permission and special bits MODE
 332:/usr/include/x86_64-linux-gnu/sys/stat.h ****    and device number DEV (which can be constructed from major and minor
 333:/usr/include/x86_64-linux-gnu/sys/stat.h ****    device numbers with the `makedev' macro above).  */
 334:/usr/include/x86_64-linux-gnu/sys/stat.h **** #if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
 335:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
 336:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((1));
 337:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 338:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifdef __USE_ATFILE
 339:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Like mknod, create a new device file with permission bits MODE and
 340:/usr/include/x86_64-linux-gnu/sys/stat.h ****    device number DEV.  But interpret relative PATH names relative to
 341:/usr/include/x86_64-linux-gnu/sys/stat.h ****    the directory associated with FD.  */
 342:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int mknodat (int __fd, const char *__path, __mode_t __mode,
 343:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		    __dev_t __dev) __THROW __nonnull ((2));
 344:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
 345:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 346:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 347:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 348:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Create a new FIFO named PATH, with permission bits MODE.  */
 349:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int mkfifo (const char *__path, __mode_t __mode)
 350:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((1));
 351:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 352:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __USE_ATFILE
 353:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Like mkfifo, create a new FIFO with permission bits MODE.  But
 354:/usr/include/x86_64-linux-gnu/sys/stat.h ****    interpret relative PATH names relative to the directory associated
 355:/usr/include/x86_64-linux-gnu/sys/stat.h ****    with FD.  */
 356:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
 357:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((2));
 358:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 359:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 360:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __USE_ATFILE
 361:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Set file access and modification times relative to directory file
 362:/usr/include/x86_64-linux-gnu/sys/stat.h ****    descriptor.  */
 363:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int utimensat (int __fd, const char *__path,
 364:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		      const struct timespec __times[2],
 365:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		      int __flags)
 366:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((2));
 367:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 368:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 369:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __USE_XOPEN2K8
 370:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Set file access and modification times of the file associated with FD.  */
 371:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int futimens (int __fd, const struct timespec __times[2]) __THROW;
 372:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 373:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 374:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* To allow the `struct stat' structure and the file type `mode_t'
 375:/usr/include/x86_64-linux-gnu/sys/stat.h ****    bits to vary without changing shared library major version number,
 376:/usr/include/x86_64-linux-gnu/sys/stat.h ****    the `stat' family of functions and `mknod' are in fact inline
 377:/usr/include/x86_64-linux-gnu/sys/stat.h ****    wrappers around calls to `xstat', `fxstat', `lxstat', and `xmknod',
 378:/usr/include/x86_64-linux-gnu/sys/stat.h ****    which all take a leading version-number argument designating the
 379:/usr/include/x86_64-linux-gnu/sys/stat.h ****    data structure and bits used.  <bits/stat.h> defines _STAT_VER with
 380:/usr/include/x86_64-linux-gnu/sys/stat.h ****    the version number corresponding to `struct stat' as defined in
 381:/usr/include/x86_64-linux-gnu/sys/stat.h ****    that file; and _MKNOD_VER with the version number corresponding to
 382:/usr/include/x86_64-linux-gnu/sys/stat.h ****    the S_IF* macros defined therein.  It is arranged that when not
 383:/usr/include/x86_64-linux-gnu/sys/stat.h ****    inlined these function are always statically linked; that way a
 384:/usr/include/x86_64-linux-gnu/sys/stat.h ****    dynamically-linked executable always encodes the version number
 385:/usr/include/x86_64-linux-gnu/sys/stat.h ****    corresponding to the data structures it uses, so the `x' functions
 386:/usr/include/x86_64-linux-gnu/sys/stat.h ****    in the shared library can adapt without needing to recompile all
 387:/usr/include/x86_64-linux-gnu/sys/stat.h ****    callers.  */
 388:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 389:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifndef _STAT_VER
 390:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define _STAT_VER	0
 391:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 392:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifndef _MKNOD_VER
 393:/usr/include/x86_64-linux-gnu/sys/stat.h **** # define _MKNOD_VER	0
 394:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 395:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 396:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Wrappers for stat and mknod system calls.  */
 397:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifndef __USE_FILE_OFFSET64
 398:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
 399:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((3));
 400:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __xstat (int __ver, const char *__filename,
 401:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		    struct stat *__stat_buf) __THROW __nonnull ((2, 3));
 402:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __lxstat (int __ver, const char *__filename,
 403:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		     struct stat *__stat_buf) __THROW __nonnull ((2, 3));
 404:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __fxstatat (int __ver, int __fildes, const char *__filename,
 405:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		       struct stat *__stat_buf, int __flag)
 406:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((3, 4));
 407:/usr/include/x86_64-linux-gnu/sys/stat.h **** #else
 408:/usr/include/x86_64-linux-gnu/sys/stat.h **** # ifdef __REDIRECT_NTH
 409:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __REDIRECT_NTH (__fxstat, (int __ver, int __fildes,
 410:/usr/include/x86_64-linux-gnu/sys/stat.h **** 				      struct stat *__stat_buf), __fxstat64)
 411:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __nonnull ((3));
 412:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __REDIRECT_NTH (__xstat, (int __ver, const char *__filename,
 413:/usr/include/x86_64-linux-gnu/sys/stat.h **** 				     struct stat *__stat_buf), __xstat64)
 414:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __nonnull ((2, 3));
 415:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __REDIRECT_NTH (__lxstat, (int __ver, const char *__filename,
 416:/usr/include/x86_64-linux-gnu/sys/stat.h **** 				      struct stat *__stat_buf), __lxstat64)
 417:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __nonnull ((2, 3));
 418:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __REDIRECT_NTH (__fxstatat, (int __ver, int __fildes,
 419:/usr/include/x86_64-linux-gnu/sys/stat.h **** 					const char *__filename,
 420:/usr/include/x86_64-linux-gnu/sys/stat.h **** 					struct stat *__stat_buf, int __flag),
 421:/usr/include/x86_64-linux-gnu/sys/stat.h **** 			   __fxstatat64) __nonnull ((3, 4));
 422:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 423:/usr/include/x86_64-linux-gnu/sys/stat.h **** # else
 424:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __fxstat __fxstat64
 425:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __xstat __xstat64
 426:/usr/include/x86_64-linux-gnu/sys/stat.h **** #  define __lxstat __lxstat64
 427:/usr/include/x86_64-linux-gnu/sys/stat.h **** # endif
 428:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 429:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 430:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __USE_LARGEFILE64
 431:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
 432:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((3));
 433:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __xstat64 (int __ver, const char *__filename,
 434:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		      struct stat64 *__stat_buf) __THROW __nonnull ((2, 3));
 435:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __lxstat64 (int __ver, const char *__filename,
 436:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		       struct stat64 *__stat_buf) __THROW __nonnull ((2, 3));
 437:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __fxstatat64 (int __ver, int __fildes, const char *__filename,
 438:/usr/include/x86_64-linux-gnu/sys/stat.h **** 			 struct stat64 *__stat_buf, int __flag)
 439:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((3, 4));
 440:/usr/include/x86_64-linux-gnu/sys/stat.h **** #endif
 441:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
 442:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		     __dev_t *__dev) __THROW __nonnull ((2, 4));
 443:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 444:/usr/include/x86_64-linux-gnu/sys/stat.h **** extern int __xmknodat (int __ver, int __fd, const char *__path,
 445:/usr/include/x86_64-linux-gnu/sys/stat.h **** 		       __mode_t __mode, __dev_t *__dev)
 446:/usr/include/x86_64-linux-gnu/sys/stat.h ****      __THROW __nonnull ((3, 5));
 447:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 448:/usr/include/x86_64-linux-gnu/sys/stat.h **** #ifdef __USE_EXTERN_INLINES
 449:/usr/include/x86_64-linux-gnu/sys/stat.h **** /* Inlined versions of the real stat and mknod functions.  */
 450:/usr/include/x86_64-linux-gnu/sys/stat.h **** 
 451:/usr/include/x86_64-linux-gnu/sys/stat.h **** __extern_inline int
 452:/usr/include/x86_64-linux-gnu/sys/stat.h **** __NTH (stat (const char *__path, struct stat *__statbuf))
 453:/usr/include/x86_64-linux-gnu/sys/stat.h **** {
 454:/usr/include/x86_64-linux-gnu/sys/stat.h ****   return __xstat (_STAT_VER, __path, __statbuf);
 1101              		.loc 3 454 0
 1102 0003 4889FE   		movq	%rdi, %rsi
 1103              	.LVL106:
 1104 0006 BF010000 		movl	$1, %edi
 1104      00
 1105              	.LVL107:
 1106 000b E9000000 		jmp	__xstat
 1106      00
 1107              	.LVL108:
 1108              	.LBE81:
 1109              	.LBE80:
 1110              		.cfi_endproc
 1111              	.LFE122:
 1113              		.section	.text.unlikely.fl_stat
 1114              	.LCOLDE19:
 1115              		.section	.text.fl_stat
 1116              	.LHOTE19:
 1117              		.section	.text.unlikely.fl_getcwd,"ax",@progbits
 1118              	.LCOLDB20:
 1119              		.section	.text.fl_getcwd,"ax",@progbits
 1120              	.LHOTB20:
 1121              		.p2align 4,,15
 1122              		.globl	fl_getcwd
 1124              	fl_getcwd:
 1125              	.LFB123:
 1126              		.loc 1 699 0
 1127              		.cfi_startproc
 1128              	.LVL109:
 1129              		.loc 1 701 0
 1130 0000 4885FF   		testq	%rdi, %rdi
 1131 0003 740B     		je	.L115
 1132              	.LVL110:
 1133              	.LBB82:
 1134              	.LBB83:
 1135              		.file 4 "/usr/include/x86_64-linux-gnu/bits/unistd.h"
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
  45:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
  46:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  47:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #ifdef __USE_UNIX98
  48:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __pread_chk (int __fd, void *__buf, size_t __nbytes,
  49:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    __off_t __offset, size_t __bufsize) __wur;
  50:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __pread64_chk (int __fd, void *__buf, size_t __nbytes,
  51:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			      __off64_t __offset, size_t __bufsize) __wur;
  52:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT (__pread_alias,
  53:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   (int __fd, void *__buf, size_t __nbytes,
  54:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    __off_t __offset), pread) __wur;
  55:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT (__pread64_alias,
  56:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   (int __fd, void *__buf, size_t __nbytes,
  57:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    __off64_t __offset), pread64) __wur;
  58:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT (__pread_chk_warn,
  59:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   (int __fd, void *__buf, size_t __nbytes,
  60:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    __off_t __offset, size_t __bufsize), __pread_chk)
  61:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __wur __warnattr ("pread called with bigger length than size of "
  62:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		       "the destination buffer");
  63:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT (__pread64_chk_warn,
  64:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			   (int __fd, void *__buf, size_t __nbytes,
  65:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    __off64_t __offset, size_t __bufsize),
  66:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			    __pread64_chk)
  67:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __wur __warnattr ("pread64 called with bigger length than size of "
  68:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		       "the destination buffer");
  69:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  70:/usr/include/x86_64-linux-gnu/bits/unistd.h **** # ifndef __USE_FILE_OFFSET64
  71:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __wur ssize_t
  72:/usr/include/x86_64-linux-gnu/bits/unistd.h **** pread (int __fd, void *__buf, size_t __nbytes, __off_t __offset)
  73:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
  74:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos0 (__buf) != (size_t) -1)
  75:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
  76:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__nbytes))
  77:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __pread_chk (__fd, __buf, __nbytes, __offset, __bos0 (__buf));
  78:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  79:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if ( __nbytes > __bos0 (__buf))
  80:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __pread_chk_warn (__fd, __buf, __nbytes, __offset,
  81:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				 __bos0 (__buf));
  82:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
  83:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __pread_alias (__fd, __buf, __nbytes, __offset);
  84:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
  85:/usr/include/x86_64-linux-gnu/bits/unistd.h **** # else
  86:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __wur ssize_t
  87:/usr/include/x86_64-linux-gnu/bits/unistd.h **** pread (int __fd, void *__buf, size_t __nbytes, __off64_t __offset)
  88:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
  89:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos0 (__buf) != (size_t) -1)
  90:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
  91:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__nbytes))
  92:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __pread64_chk (__fd, __buf, __nbytes, __offset, __bos0 (__buf));
  93:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  94:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if ( __nbytes > __bos0 (__buf))
  95:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __pread64_chk_warn (__fd, __buf, __nbytes, __offset,
  96:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				   __bos0 (__buf));
  97:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
  98:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
  99:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __pread64_alias (__fd, __buf, __nbytes, __offset);
 100:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 101:/usr/include/x86_64-linux-gnu/bits/unistd.h **** # endif
 102:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 103:/usr/include/x86_64-linux-gnu/bits/unistd.h **** # ifdef __USE_LARGEFILE64
 104:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __wur ssize_t
 105:/usr/include/x86_64-linux-gnu/bits/unistd.h **** pread64 (int __fd, void *__buf, size_t __nbytes, __off64_t __offset)
 106:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 107:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos0 (__buf) != (size_t) -1)
 108:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
 109:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__nbytes))
 110:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __pread64_chk (__fd, __buf, __nbytes, __offset, __bos0 (__buf));
 111:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 112:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if ( __nbytes > __bos0 (__buf))
 113:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __pread64_chk_warn (__fd, __buf, __nbytes, __offset,
 114:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				   __bos0 (__buf));
 115:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
 116:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 117:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __pread64_alias (__fd, __buf, __nbytes, __offset);
 118:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 119:/usr/include/x86_64-linux-gnu/bits/unistd.h **** # endif
 120:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #endif
 121:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 122:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K
 123:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __readlink_chk (const char *__restrict __path,
 124:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       char *__restrict __buf, size_t __len,
 125:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       size_t __buflen)
 126:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __THROW __nonnull ((1, 2)) __wur;
 127:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT_NTH (__readlink_alias,
 128:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       (const char *__restrict __path,
 129:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				char *__restrict __buf, size_t __len), readlink)
 130:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((1, 2)) __wur;
 131:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT_NTH (__readlink_chk_warn,
 132:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       (const char *__restrict __path,
 133:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				char *__restrict __buf, size_t __len,
 134:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				size_t __buflen), __readlink_chk)
 135:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((1, 2)) __wur __warnattr ("readlink called with bigger length "
 136:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 					  "than size of destination buffer");
 137:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 138:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __nonnull ((1, 2)) __wur ssize_t
 139:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __NTH (readlink (const char *__restrict __path, char *__restrict __buf,
 140:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		 size_t __len))
 141:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 142:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos (__buf) != (size_t) -1)
 143:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
 144:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__len))
 145:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __readlink_chk (__path, __buf, __len, __bos (__buf));
 146:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 147:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if ( __len > __bos (__buf))
 148:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __readlink_chk_warn (__path, __buf, __len, __bos (__buf));
 149:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
 150:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __readlink_alias (__path, __buf, __len);
 151:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 152:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #endif
 153:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 154:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #ifdef __USE_ATFILE
 155:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __readlinkat_chk (int __fd, const char *__restrict __path,
 156:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				 char *__restrict __buf, size_t __len,
 157:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				 size_t __buflen)
 158:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __THROW __nonnull ((2, 3)) __wur;
 159:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT_NTH (__readlinkat_alias,
 160:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       (int __fd, const char *__restrict __path,
 161:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				char *__restrict __buf, size_t __len),
 162:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       readlinkat)
 163:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((2, 3)) __wur;
 164:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern ssize_t __REDIRECT_NTH (__readlinkat_chk_warn,
 165:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			       (int __fd, const char *__restrict __path,
 166:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				char *__restrict __buf, size_t __len,
 167:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				size_t __buflen), __readlinkat_chk)
 168:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __nonnull ((2, 3)) __wur __warnattr ("readlinkat called with bigger "
 169:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 					  "length than size of destination "
 170:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 					  "buffer");
 171:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 172:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __nonnull ((2, 3)) __wur ssize_t
 173:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __NTH (readlinkat (int __fd, const char *__restrict __path,
 174:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		   char *__restrict __buf, size_t __len))
 175:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 176:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos (__buf) != (size_t) -1)
 177:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
 178:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__len))
 179:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __readlinkat_chk (__fd, __path, __buf, __len, __bos (__buf));
 180:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 181:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (__len > __bos (__buf))
 182:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __readlinkat_chk_warn (__fd, __path, __buf, __len,
 183:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 				      __bos (__buf));
 184:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
 185:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __readlinkat_alias (__fd, __path, __buf, __len);
 186:/usr/include/x86_64-linux-gnu/bits/unistd.h **** }
 187:/usr/include/x86_64-linux-gnu/bits/unistd.h **** #endif
 188:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 189:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern char *__getcwd_chk (char *__buf, size_t __size, size_t __buflen)
 190:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __THROW __wur;
 191:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern char *__REDIRECT_NTH (__getcwd_alias,
 192:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			     (char *__buf, size_t __size), getcwd) __wur;
 193:/usr/include/x86_64-linux-gnu/bits/unistd.h **** extern char *__REDIRECT_NTH (__getcwd_chk_warn,
 194:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			     (char *__buf, size_t __size, size_t __buflen),
 195:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 			     __getcwd_chk)
 196:/usr/include/x86_64-linux-gnu/bits/unistd.h ****      __wur __warnattr ("getcwd caller with bigger length than size of "
 197:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 		       "destination buffer");
 198:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 199:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __fortify_function __wur char *
 200:/usr/include/x86_64-linux-gnu/bits/unistd.h **** __NTH (getcwd (char *__buf, size_t __size))
 201:/usr/include/x86_64-linux-gnu/bits/unistd.h **** {
 202:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   if (__bos (__buf) != (size_t) -1)
 203:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     {
 204:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (!__builtin_constant_p (__size))
 205:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __getcwd_chk (__buf, __size, __bos (__buf));
 206:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 
 207:/usr/include/x86_64-linux-gnu/bits/unistd.h ****       if (__size > __bos (__buf))
 208:/usr/include/x86_64-linux-gnu/bits/unistd.h **** 	return __getcwd_chk_warn (__buf, __size, __bos (__buf));
 209:/usr/include/x86_64-linux-gnu/bits/unistd.h ****     }
 210:/usr/include/x86_64-linux-gnu/bits/unistd.h ****   return __getcwd_alias (__buf, __size);
 1136              		.loc 4 210 0
 1137 0005 4863F6   		movslq	%esi, %rsi
 1138              	.LVL111:
 1139 0008 E9000000 		jmp	getcwd
 1139      00
 1140              	.LVL112:
 1141 000d 0F1F00   		.p2align 4,,10
 1142              		.p2align 3
 1143              	.L115:
 1144              	.LBE83:
 1145              	.LBE82:
 1146              		.loc 1 702 0
 1147 0010 8D7E01   		leal	1(%rsi), %edi
 1148              	.LVL113:
 1149              		.loc 1 699 0
 1150 0013 4883EC18 		subq	$24, %rsp
 1151              		.cfi_def_cfa_offset 32
 1152              		.loc 1 702 0
 1153 0017 8974240C 		movl	%esi, 12(%rsp)
 1154 001b 4863FF   		movslq	%edi, %rdi
 1155 001e E8000000 		call	malloc
 1155      00
 1156              	.LVL114:
 1157 0023 8B74240C 		movl	12(%rsp), %esi
 1158 0027 4889C7   		movq	%rax, %rdi
 1159              	.LVL115:
 1160              		.loc 1 726 0
 1161 002a 4883C418 		addq	$24, %rsp
 1162              		.cfi_def_cfa_offset 8
 1163              	.LBB85:
 1164              	.LBB84:
 1165              		.loc 4 210 0
 1166 002e 4863F6   		movslq	%esi, %rsi
 1167              	.LVL116:
 1168 0031 E9000000 		jmp	getcwd
 1168      00
 1169              	.LVL117:
 1170              	.LBE84:
 1171              	.LBE85:
 1172              		.cfi_endproc
 1173              	.LFE123:
 1175              		.section	.text.unlikely.fl_getcwd
 1176              	.LCOLDE20:
 1177              		.section	.text.fl_getcwd
 1178              	.LHOTE20:
 1179              		.section	.text.unlikely.fl_unlink,"ax",@progbits
 1180              	.LCOLDB21:
 1181              		.section	.text.fl_unlink,"ax",@progbits
 1182              	.LHOTB21:
 1183              		.p2align 4,,15
 1184              		.globl	fl_unlink
 1186              	fl_unlink:
 1187              	.LFB124:
 1188              		.loc 1 738 0
 1189              		.cfi_startproc
 1190              	.LVL118:
 1191              		.loc 1 751 0
 1192 0000 E9000000 		jmp	unlink
 1192      00
 1193              	.LVL119:
 1194              		.cfi_endproc
 1195              	.LFE124:
 1197              		.section	.text.unlikely.fl_unlink
 1198              	.LCOLDE21:
 1199              		.section	.text.fl_unlink
 1200              	.LHOTE21:
 1201              		.section	.text.unlikely.fl_mkdir,"ax",@progbits
 1202              	.LCOLDB22:
 1203              		.section	.text.fl_mkdir,"ax",@progbits
 1204              	.LHOTB22:
 1205              		.p2align 4,,15
 1206              		.globl	fl_mkdir
 1208              	fl_mkdir:
 1209              	.LFB125:
 1210              		.loc 1 768 0
 1211              		.cfi_startproc
 1212              	.LVL120:
 1213              		.loc 1 781 0
 1214 0000 E9000000 		jmp	mkdir
 1214      00
 1215              	.LVL121:
 1216              		.cfi_endproc
 1217              	.LFE125:
 1219              		.section	.text.unlikely.fl_mkdir
 1220              	.LCOLDE22:
 1221              		.section	.text.fl_mkdir
 1222              	.LHOTE22:
 1223              		.section	.text.unlikely.fl_rmdir,"ax",@progbits
 1224              	.LCOLDB23:
 1225              		.section	.text.fl_rmdir,"ax",@progbits
 1226              	.LHOTB23:
 1227              		.p2align 4,,15
 1228              		.globl	fl_rmdir
 1230              	fl_rmdir:
 1231              	.LFB126:
 1232              		.loc 1 797 0
 1233              		.cfi_startproc
 1234              	.LVL122:
 1235              		.loc 1 810 0
 1236 0000 E9000000 		jmp	rmdir
 1236      00
 1237              	.LVL123:
 1238              		.cfi_endproc
 1239              	.LFE126:
 1241              		.section	.text.unlikely.fl_rmdir
 1242              	.LCOLDE23:
 1243              		.section	.text.fl_rmdir
 1244              	.LHOTE23:
 1245              		.section	.text.unlikely.fl_rename,"ax",@progbits
 1246              	.LCOLDB24:
 1247              		.section	.text.fl_rename,"ax",@progbits
 1248              	.LHOTB24:
 1249              		.p2align 4,,15
 1250              		.globl	fl_rename
 1252              	fl_rename:
 1253              	.LFB127:
 1254              		.loc 1 827 0
 1255              		.cfi_startproc
 1256              	.LVL124:
 1257              		.loc 1 845 0
 1258 0000 E9000000 		jmp	rename
 1258      00
 1259              	.LVL125:
 1260              		.cfi_endproc
 1261              	.LFE127:
 1263              		.section	.text.unlikely.fl_rename
 1264              	.LCOLDE24:
 1265              		.section	.text.fl_rename
 1266              	.LHOTE24:
 1267              		.section	.text.unlikely.fl_make_path,"ax",@progbits
 1268              	.LCOLDB25:
 1269              		.section	.text.fl_make_path,"ax",@progbits
 1270              	.LHOTB25:
 1271              		.p2align 4,,15
 1272              		.globl	fl_make_path
 1274              	fl_make_path:
 1275              	.LFB128:
 1276              		.loc 1 857 0
 1277              		.cfi_startproc
 1278              	.LVL126:
 1279 0000 4154     		pushq	%r12
 1280              		.cfi_def_cfa_offset 16
 1281              		.cfi_offset 12, -16
 1282 0002 55       		pushq	%rbp
 1283              		.cfi_def_cfa_offset 24
 1284              		.cfi_offset 6, -24
 1285              	.LBB101:
 1286              	.LBB102:
 1287              	.LBB103:
 1288              		.loc 1 652 0
 1289 0003 31F6     		xorl	%esi, %esi
 1290              	.LBE103:
 1291              	.LBE102:
 1292              	.LBE101:
 1293              		.loc 1 857 0
 1294 0005 53       		pushq	%rbx
 1295              		.cfi_def_cfa_offset 32
 1296              		.cfi_offset 3, -32
 1297              		.loc 1 857 0
 1298 0006 4889FB   		movq	%rdi, %rbx
 1299              	.LVL127:
 1300              	.LBB106:
 1301              	.LBB105:
 1302              	.LBB104:
 1303              		.loc 1 652 0
 1304 0009 E8000000 		call	access
 1304      00
 1305              	.LVL128:
 1306              	.LBE104:
 1307              	.LBE105:
 1308              		.loc 1 858 0
 1309 000e 85C0     		testl	%eax, %eax
 1310              	.LBE106:
 1311              		.loc 1 869 0
 1312 0010 BA010000 		movl	$1, %edx
 1312      00
 1313              	.LBB107:
 1314              		.loc 1 858 0
 1315 0015 745B     		je	.L121
 1316              	.LVL129:
 1317              	.LBE107:
 1318              	.LBB108:
 1319              	.LBB109:
 1320              	.LBB110:
 1321              	.LBB111:
 1322              	.LBB112:
 1323              		.file 5 "/usr/include/string.h"
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
 248:/usr/include/string.h **** }
 249:/usr/include/string.h **** 
 250:/usr/include/string.h **** __extern_always_inline const char *
 251:/usr/include/string.h **** strrchr (const char *__s, int __c) __THROW
 252:/usr/include/string.h **** {
 253:/usr/include/string.h ****   return __builtin_strrchr (__s, __c);
 1324              		.loc 5 253 0
 1325 0017 BE2F0000 		movl	$47, %esi
 1325      00
 1326 001c 4889DF   		movq	%rbx, %rdi
 1327 001f E8000000 		call	strrchr
 1327      00
 1328              	.LVL130:
 1329              	.LBE112:
 1330              	.LBE111:
 1331              		.loc 1 860 0
 1332 0024 31D2     		xorl	%edx, %edx
 1333 0026 4885C0   		testq	%rax, %rax
 1334 0029 7447     		je	.L121
 1335              		.loc 1 861 0
 1336 002b 4829D8   		subq	%rbx, %rax
 1337              		.loc 1 862 0
 1338 002e 488D7801 		leaq	1(%rax), %rdi
 1339              		.loc 1 861 0
 1340 0032 4889C5   		movq	%rax, %rbp
 1341              	.LVL131:
 1342              		.loc 1 862 0
 1343 0035 E8000000 		call	malloc
 1343      00
 1344              	.LVL132:
 1345              	.LBB113:
 1346              	.LBB114:
 1347              		.file 6 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 1348              		.loc 6 53 0
 1349 003a 4889EA   		movq	%rbp, %rdx
 1350              	.LBE114:
 1351              	.LBE113:
 1352              		.loc 1 862 0
 1353 003d 4989C4   		movq	%rax, %r12
 1354              	.LVL133:
 1355              	.LBB116:
 1356              	.LBB115:
 1357              		.loc 6 53 0
 1358 0040 4889DE   		movq	%rbx, %rsi
 1359 0043 4889C7   		movq	%rax, %rdi
 1360 0046 E8000000 		call	memcpy
 1360      00
 1361              	.LVL134:
 1362              	.LBE115:
 1363              	.LBE116:
 1364              		.loc 1 865 0
 1365 004b 4C89E7   		movq	%r12, %rdi
 1366              		.loc 1 864 0
 1367 004e 41C6042C 		movb	$0, (%r12,%rbp)
 1367      00
 1368              		.loc 1 865 0
 1369 0053 E8000000 		call	fl_make_path
 1369      00
 1370              	.LVL135:
 1371              		.loc 1 866 0
 1372 0058 4C89E7   		movq	%r12, %rdi
 1373 005b E8000000 		call	free
 1373      00
 1374              	.LVL136:
 1375              	.LBB117:
 1376              	.LBB118:
 1377              		.loc 1 781 0
 1378 0060 BEC00100 		movl	$448, %esi
 1378      00
 1379 0065 4889DF   		movq	%rbx, %rdi
 1380 0068 E8000000 		call	mkdir
 1380      00
 1381              	.LVL137:
 1382              	.LBE118:
 1383              	.LBE117:
 1384              	.LBE110:
 1385              		.loc 1 869 0
 1386 006d BA010000 		movl	$1, %edx
 1386      00
 1387              	.LVL138:
 1388              	.L121:
 1389              	.LBE109:
 1390              	.LBE108:
 1391              		.loc 1 870 0
 1392 0072 5B       		popq	%rbx
 1393              		.cfi_def_cfa_offset 24
 1394              	.LVL139:
 1395 0073 89D0     		movl	%edx, %eax
 1396 0075 5D       		popq	%rbp
 1397              		.cfi_def_cfa_offset 16
 1398 0076 415C     		popq	%r12
 1399              		.cfi_def_cfa_offset 8
 1400 0078 C3       		ret
 1401              		.cfi_endproc
 1402              	.LFE128:
 1404              		.section	.text.unlikely.fl_make_path
 1405              	.LCOLDE25:
 1406              		.section	.text.fl_make_path
 1407              	.LHOTE25:
 1408              		.section	.text.unlikely.fl_make_path_for_file,"ax",@progbits
 1409              	.LCOLDB26:
 1410              		.section	.text.fl_make_path_for_file,"ax",@progbits
 1411              	.LHOTB26:
 1412              		.p2align 4,,15
 1413              		.globl	fl_make_path_for_file
 1415              	fl_make_path_for_file:
 1416              	.LFB129:
 1417              		.loc 1 878 0
 1418              		.cfi_startproc
 1419              	.LVL140:
 1420 0000 4154     		pushq	%r12
 1421              		.cfi_def_cfa_offset 16
 1422              		.cfi_offset 12, -16
 1423 0002 55       		pushq	%rbp
 1424              		.cfi_def_cfa_offset 24
 1425              		.cfi_offset 6, -24
 1426              	.LBB119:
 1427              	.LBB120:
 1428              		.loc 5 253 0
 1429 0003 BE2F0000 		movl	$47, %esi
 1429      00
 1430              	.LBE120:
 1431              	.LBE119:
 1432              		.loc 1 878 0
 1433 0008 53       		pushq	%rbx
 1434              		.cfi_def_cfa_offset 32
 1435              		.cfi_offset 3, -32
 1436              		.loc 1 878 0
 1437 0009 4989FC   		movq	%rdi, %r12
 1438              	.LBB122:
 1439              	.LBB121:
 1440              		.loc 5 253 0
 1441 000c E8000000 		call	strrchr
 1441      00
 1442              	.LVL141:
 1443              	.LBE121:
 1444              	.LBE122:
 1445              		.loc 1 881 0
 1446 0011 4885C0   		testq	%rax, %rax
 1447 0014 743A     		je	.L127
 1448              		.loc 1 882 0
 1449 0016 4C29E0   		subq	%r12, %rax
 1450              		.loc 1 883 0
 1451 0019 488D7801 		leaq	1(%rax), %rdi
 1452              		.loc 1 882 0
 1453 001d 4889C3   		movq	%rax, %rbx
 1454              	.LVL142:
 1455              		.loc 1 883 0
 1456 0020 E8000000 		call	malloc
 1456      00
 1457              	.LVL143:
 1458              	.LBB123:
 1459              	.LBB124:
 1460              		.loc 6 53 0
 1461 0025 4889DA   		movq	%rbx, %rdx
 1462              	.LBE124:
 1463              	.LBE123:
 1464              		.loc 1 883 0
 1465 0028 4889C5   		movq	%rax, %rbp
 1466              	.LVL144:
 1467              	.LBB126:
 1468              	.LBB125:
 1469              		.loc 6 53 0
 1470 002b 4C89E6   		movq	%r12, %rsi
 1471 002e 4889C7   		movq	%rax, %rdi
 1472 0031 E8000000 		call	memcpy
 1472      00
 1473              	.LVL145:
 1474              	.LBE125:
 1475              	.LBE126:
 1476              		.loc 1 885 0
 1477 0036 C6441D00 		movb	$0, 0(%rbp,%rbx)
 1477      00
 1478              		.loc 1 886 0
 1479 003b 4889EF   		movq	%rbp, %rdi
 1480 003e E8000000 		call	fl_make_path
 1480      00
 1481              	.LVL146:
 1482              		.loc 1 889 0
 1483 0043 5B       		popq	%rbx
 1484              		.cfi_remember_state
 1485              		.cfi_def_cfa_offset 24
 1486              	.LVL147:
 1487              		.loc 1 887 0
 1488 0044 4889EF   		movq	%rbp, %rdi
 1489              		.loc 1 889 0
 1490 0047 5D       		popq	%rbp
 1491              		.cfi_def_cfa_offset 16
 1492              	.LVL148:
 1493 0048 415C     		popq	%r12
 1494              		.cfi_def_cfa_offset 8
 1495              	.LVL149:
 1496              		.loc 1 887 0
 1497 004a E9000000 		jmp	free
 1497      00
 1498              	.LVL150:
 1499 004f 90       		.p2align 4,,10
 1500              		.p2align 3
 1501              	.L127:
 1502              		.cfi_restore_state
 1503              		.loc 1 889 0
 1504 0050 5B       		popq	%rbx
 1505              		.cfi_def_cfa_offset 24
 1506 0051 5D       		popq	%rbp
 1507              		.cfi_def_cfa_offset 16
 1508 0052 415C     		popq	%r12
 1509              		.cfi_def_cfa_offset 8
 1510              	.LVL151:
 1511 0054 C3       		ret
 1512              		.cfi_endproc
 1513              	.LFE129:
 1515              		.section	.text.unlikely.fl_make_path_for_file
 1516              	.LCOLDE26:
 1517              		.section	.text.fl_make_path_for_file
 1518              	.LHOTE26:
 1519              		.section	.bss._ZZL7ToupperiE5table,"aw",@nobits
 1520              		.align 8
 1523              	_ZZL7ToupperiE5table:
 1524 0000 00000000 		.zero	8
 1524      00000000 
 1525              		.text
 1526              	.Letext0:
 1527              		.section	.text.unlikely._ZL7Toupperi
 1528              	.Letext_cold0:
 1529              		.file 7 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1530              		.file 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1531              		.file 9 "/usr/include/time.h"
 1532              		.file 10 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h"
 1533              		.file 11 "/usr/include/x86_64-linux-gnu/bits/stat.h"
 1534              		.file 12 "/usr/include/stdio.h"
 1535              		.file 13 "/usr/include/libio.h"
 1536              		.file 14 "fltk-1.3.4-1/src/Xutf8.h"
 1537              		.file 15 "/usr/include/stdlib.h"
 1538              		.file 16 "fltk-1.3.4-1/FL/fl_utf8.h"
 1539              		.file 17 "/usr/include/unistd.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_utf8.cxx
     /tmp/ccKQ1PKM.s:13     .text._ZL7Toupperi:0000000000000000 _ZL7Toupperi
     /tmp/ccKQ1PKM.s:1523   .bss._ZZL7ToupperiE5table:0000000000000000 _ZZL7ToupperiE5table
     /tmp/ccKQ1PKM.s:131    .text.fl_utf8len:0000000000000000 fl_utf8len
     /tmp/ccKQ1PKM.s:202    .text.fl_utf8len1:0000000000000000 fl_utf8len1
     /tmp/ccKQ1PKM.s:261    .text.fl_utf_nb_char:0000000000000000 fl_utf_nb_char
     /tmp/ccKQ1PKM.s:322    .text.fl_utf_strncasecmp:0000000000000000 fl_utf_strncasecmp
     /tmp/ccKQ1PKM.s:477    .text.fl_utf_strcasecmp:0000000000000000 fl_utf_strcasecmp
     /tmp/ccKQ1PKM.s:500    .text.fl_tolower:0000000000000000 fl_tolower
     /tmp/ccKQ1PKM.s:522    .text.fl_toupper:0000000000000000 fl_toupper
     /tmp/ccKQ1PKM.s:544    .text.fl_utf_tolower:0000000000000000 fl_utf_tolower
     /tmp/ccKQ1PKM.s:685    .text.fl_utf_toupper:0000000000000000 fl_utf_toupper
     /tmp/ccKQ1PKM.s:826    .text.fl_nonspacing:0000000000000000 fl_nonspacing
     /tmp/ccKQ1PKM.s:857    .text.fl_utf2mbcs:0000000000000000 fl_utf2mbcs
     /tmp/ccKQ1PKM.s:880    .text.fl_getenv:0000000000000000 fl_getenv
     /tmp/ccKQ1PKM.s:902    .text.fl_open:0000000000000000 fl_open
     /tmp/ccKQ1PKM.s:980    .text.fl_fopen:0000000000000000 fl_fopen
     /tmp/ccKQ1PKM.s:1002   .text.fl_system:0000000000000000 fl_system
     /tmp/ccKQ1PKM.s:1024   .text.fl_execvp:0000000000000000 fl_execvp
     /tmp/ccKQ1PKM.s:1046   .text.fl_chmod:0000000000000000 fl_chmod
     /tmp/ccKQ1PKM.s:1068   .text.fl_access:0000000000000000 fl_access
     /tmp/ccKQ1PKM.s:1090   .text.fl_stat:0000000000000000 fl_stat
     /tmp/ccKQ1PKM.s:1124   .text.fl_getcwd:0000000000000000 fl_getcwd
     /tmp/ccKQ1PKM.s:1186   .text.fl_unlink:0000000000000000 fl_unlink
     /tmp/ccKQ1PKM.s:1208   .text.fl_mkdir:0000000000000000 fl_mkdir
     /tmp/ccKQ1PKM.s:1230   .text.fl_rmdir:0000000000000000 fl_rmdir
     /tmp/ccKQ1PKM.s:1252   .text.fl_rename:0000000000000000 fl_rename
     /tmp/ccKQ1PKM.s:1274   .text.fl_make_path:0000000000000000 fl_make_path
     /tmp/ccKQ1PKM.s:1415   .text.fl_make_path_for_file:0000000000000000 fl_make_path_for_file
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
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
                           .group:0000000000000000 wm4.stdarg.h.31.f401c8171fd246920e7f24fd56d721d1
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.a2ca0b29d01f5da7ea7f879d801b43ca
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.locale.h.23.9b5006b0bf779abe978bf85cb308a947
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.af38aa18b7a3fc3e8a40cdf0a0c8e4c6
                           .group:0000000000000000 wm4.locale.h.158.dd2eb99bcef88a4e6c01cc2897ec0da1
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.stat.h.23.034923aa253537bdc4e59720e9e8ed3d
                           .group:0000000000000000 wm4.time.h.66.fa652aa18ecf92239cee124d5533fe97
                           .group:0000000000000000 wm4.stat.h.23.71443f0579dab3228134d84ad7d61c3e
                           .group:0000000000000000 wm4.stat.h.107.43f8ebdec21eca5e13896fd19df564c8
                           .group:0000000000000000 wm4.fcntl.h.24.62c7e777a8b210e920ccbb92cfe8b9d8
                           .group:0000000000000000 wm4.uio.h.23.aa0898d8f5bb12d9ecd480ebbdbd1a4d
                           .group:0000000000000000 wm4.fcntllinux.h.42.916a07d9174cc0724783a75699766e2c
                           .group:0000000000000000 wm4.fcntl.h.40.8ff0a2b883e8f8c14f135fe2e029942a
                           .group:0000000000000000 wm4.fcntl.h.79.1b8e643ad8ec15e80ca5a02cd230a858
                           .group:0000000000000000 wm4.unistd.h.23.a608ae63b1bee638e80d9e2a8598bd8e
                           .group:0000000000000000 wm4.posix_opt.h.20.8587404e00639bdcc5f6a74591f95259
                           .group:0000000000000000 wm4.environments.h.56.c5802092ccc191baeb41f8d355bb878f
                           .group:0000000000000000 wm4.unistd.h.213.4c582e35260d661b081322974b7c1e74
                           .group:0000000000000000 wm4.unistd.h.271.c6e9d508a90f3b96d3c0f2cee7933ea4
                           .group:0000000000000000 wm4.confname.h.27.6b00117a32f457cc72e5ac810a9adade
                           .group:0000000000000000 wm4.stdio.h.26.4719156f1aea2bb9662fd6c582dc9a4c
                           .group:0000000000000000 wm4.stdio.h.36.2dd12c1fd035242ad5cfd0152a01be5a
                           .group:0000000000000000 wm4._G_config.h.5.b0f37d9e474454cf6e459063458db32f
                           .group:0000000000000000 wm4.wchar.h.80.eea3eba2d2a17aace9470a8e0d8218dc
                           .group:0000000000000000 wm4._G_config.h.46.5187c97b14fd664662cb32e6b94fc49e
                           .group:0000000000000000 wm4.libio.h.33.c2ded1c0abb949ae88131e63bd764871
                           .group:0000000000000000 wm4.stdio.h.120.ebc263fb4928d5242368567fb5fcd6dc
                           .group:0000000000000000 wm4.stdio_lim.h.23.f8541119d1bcf759d7de9531671fd758
                           .group:0000000000000000 wm4.stdio.h.172.df21df34a7396d7da2e08f9b617d582f
                           .group:0000000000000000 wm4.stdio.h.26.e50fc3808d57d965ceefc6f6dd102eb7
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.75da223233ea088d05b70fad69e90c9e
                           .group:0000000000000000 wm4.stdlib.h.54.bfbb5b0b23fee1f35dc97a46ddeb7e8b
                           .group:0000000000000000 wm4.alloca.h.19.edefa922a76c1cbaaf1e416903ba2d1c
                           .group:0000000000000000 wm4.alloca.h.29.156e12058824cc23d961c4d3b13031f6

UNDEFINED SYMBOLS
malloc
XUtf8Tolower
fl_utf8decode
__stack_chk_fail
fl_utf8encode
XUtf8IsNonSpacing
getenv
open
__open_2
fopen
system
execvp
chmod
access
__xstat
getcwd
unlink
mkdir
rmdir
rename
strrchr
memcpy
free
