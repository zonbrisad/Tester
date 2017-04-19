   1              		.file	"filename_absolute.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z20fl_filename_absolutePciPKc,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._Z20fl_filename_absolutePciPKc,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z20fl_filename_absolutePciPKc
  10              	.Ltext_cold0:
  11              		.section	.text._Z20fl_filename_absolutePciPKc
  12              		.globl	_Z20fl_filename_absolutePciPKc
  14              	_Z20fl_filename_absolutePciPKc:
  15              	.LFB113:
  16              		.file 1 "fltk-1.3.4-1/src/filename_absolute.cxx"
   1:fltk-1.3.4-1/src/filename_absolute.cxx **** ...
  17              		.loc 1 56 0
  18              		.cfi_startproc
  19              	.LVL0:
  20 0000 4156     		pushq	%r14
  21              		.cfi_def_cfa_offset 16
  22              		.cfi_offset 14, -16
  23 0002 4155     		pushq	%r13
  24              		.cfi_def_cfa_offset 24
  25              		.cfi_offset 13, -24
  26 0004 4189F6   		movl	%esi, %r14d
  27 0007 4154     		pushq	%r12
  28              		.cfi_def_cfa_offset 32
  29              		.cfi_offset 12, -32
  30 0009 55       		pushq	%rbp
  31              		.cfi_def_cfa_offset 40
  32              		.cfi_offset 6, -40
  33 000a 4989FD   		movq	%rdi, %r13
  34 000d 53       		pushq	%rbx
  35              		.cfi_def_cfa_offset 48
  36              		.cfi_offset 3, -48
  37              		.loc 1 57 0
  38 000e 0FB602   		movzbl	(%rdx), %eax
  39              		.loc 1 56 0
  40 0011 4889D3   		movq	%rdx, %rbx
  41              		.loc 1 57 0
  42 0014 3C2F     		cmpb	$47, %al
  43 0016 0F84E400 		je	.L17
  43      0000
  44 001c 3C7C     		cmpb	$124, %al
  45 001e 0F84DC00 		je	.L17
  45      0000
  46              		.loc 1 67 0
  47 0024 4C63E6   		movslq	%esi, %r12
  48 0027 4C89E7   		movq	%r12, %rdi
  49              	.LVL1:
  50 002a E8000000 		call	_Znam
  50      00
  51              	.LVL2:
  52              		.loc 1 70 0
  53 002f 4489F6   		movl	%r14d, %esi
  54 0032 4889C7   		movq	%rax, %rdi
  55              		.loc 1 67 0
  56 0035 4889C5   		movq	%rax, %rbp
  57              	.LVL3:
  58              		.loc 1 70 0
  59 0038 E8000000 		call	fl_getcwd
  59      00
  60              	.LVL4:
  61              		.loc 1 71 0
  62 003d 4885C0   		testq	%rax, %rax
  63 0040 0F84D300 		je	.L22
  63      0000
  64              		.loc 1 79 0
  65 0046 4889EF   		movq	%rbp, %rdi
  66 0049 E8000000 		call	strlen
  66      00
  67              	.LVL5:
  68 004e 4801E8   		addq	%rbp, %rax
  69              	.LVL6:
  70              		.loc 1 81 0
  71 0051 31D2     		xorl	%edx, %edx
  72 0053 488D4DFF 		leaq	-1(%rbp), %rcx
  73 0057 8078FF2F 		cmpb	$47, -1(%rax)
  74 005b 0F94C2   		sete	%dl
  75 005e 4829D0   		subq	%rdx, %rax
  76              	.LVL7:
  77 0061 EB12     		jmp	.L7
  78              	.LVL8:
  79              		.p2align 4,,10
  80 0063 0F1F4400 		.p2align 3
  80      00
  81              	.L9:
  82              	.LBB2:
  83              		.loc 1 90 0
  84 0068 80FA2F   		cmpb	$47, %dl
  85 006b 0F85C200 		jne	.L13
  85      0000
  86              		.loc 1 91 0
  87 0071 4883C302 		addq	$2, %rbx
  88              	.LVL9:
  89              	.L7:
  90              	.LBE2:
  91              		.loc 1 83 0
  92 0075 803B2E   		cmpb	$46, (%rbx)
  93 0078 750F     		jne	.L8
  94              	.LBB4:
  95              		.loc 1 84 0
  96 007a 0FB65301 		movzbl	1(%rbx), %edx
  97 007e 80FA2E   		cmpb	$46, %dl
  98 0081 75E5     		jne	.L9
  99              		.loc 1 84 0 is_stmt 0 discriminator 1
 100 0083 807B022F 		cmpb	$47, 2(%rbx)
 101 0087 7447     		je	.L23
 102              	.LVL10:
 103              	.L8:
 104              	.LBE4:
 105              		.loc 1 99 0 is_stmt 1
 106 0089 488D7801 		leaq	1(%rax), %rdi
 107              	.LVL11:
 108 008d C6002F   		movb	$47, (%rax)
 109              		.loc 1 100 0
 110 0090 4C89E2   		movq	%r12, %rdx
 111 0093 4889DE   		movq	%rbx, %rsi
 112 0096 4889F8   		movq	%rdi, %rax
 113 0099 4829E8   		subq	%rbp, %rax
 114 009c 4829C2   		subq	%rax, %rdx
 115 009f E8000000 		call	fl_strlcpy
 115      00
 116              	.LVL12:
 117              		.loc 1 102 0
 118 00a4 4C89E2   		movq	%r12, %rdx
 119 00a7 4889EE   		movq	%rbp, %rsi
 120 00aa 4C89EF   		movq	%r13, %rdi
 121 00ad E8000000 		call	fl_strlcpy
 121      00
 122              	.LVL13:
 123              		.loc 1 104 0
 124 00b2 4889EF   		movq	%rbp, %rdi
 125 00b5 E8000000 		call	_ZdaPv
 125      00
 126              	.LVL14:
 127              		.loc 1 106 0
 128 00ba B8010000 		movl	$1, %eax
 128      00
 129              	.L18:
 130              		.loc 1 107 0
 131 00bf 5B       		popq	%rbx
 132              		.cfi_remember_state
 133              		.cfi_def_cfa_offset 40
 134              	.LVL15:
 135 00c0 5D       		popq	%rbp
 136              		.cfi_def_cfa_offset 32
 137              	.LVL16:
 138 00c1 415C     		popq	%r12
 139              		.cfi_def_cfa_offset 24
 140 00c3 415D     		popq	%r13
 141              		.cfi_def_cfa_offset 16
 142              	.LVL17:
 143 00c5 415E     		popq	%r14
 144              		.cfi_def_cfa_offset 8
 145              	.LVL18:
 146 00c7 C3       		ret
 147              	.LVL19:
 148 00c8 0F1F8400 		.p2align 4,,10
 148      00000000 
 149              		.p2align 3
 150              	.L23:
 151              		.cfi_restore_state
 152              	.LBB5:
 153              	.LBB3:
 154              		.loc 1 86 0
 155 00d0 488D50FF 		leaq	-1(%rax), %rdx
 156              	.LVL20:
 157 00d4 4839D5   		cmpq	%rdx, %rbp
 158 00d7 77B0     		ja	.L8
 159 00d9 8078FF2F 		cmpb	$47, -1(%rax)
 160 00dd 740F     		je	.L16
 161 00df 90       		.p2align 4,,10
 162              		.p2align 3
 163              	.L11:
 164              	.LVL21:
 165              		.loc 1 86 0 is_stmt 0 discriminator 3
 166 00e0 4883EA01 		subq	$1, %rdx
 167              	.LVL22:
 168 00e4 4839CA   		cmpq	%rcx, %rdx
 169 00e7 74A0     		je	.L8
 170              		.loc 1 86 0 discriminator 2
 171 00e9 803A2F   		cmpb	$47, (%rdx)
 172 00ec 75F2     		jne	.L11
 173              	.L16:
 174              		.loc 1 86 0
 175 00ee 4889D0   		movq	%rdx, %rax
 176              	.LVL23:
 177              		.loc 1 89 0 is_stmt 1
 178 00f1 4883C303 		addq	$3, %rbx
 179              	.LVL24:
 180              	.LBE3:
 181 00f5 E97BFFFF 		jmp	.L7
 181      FF
 182              	.LVL25:
 183 00fa 660F1F44 		.p2align 4,,10
 183      0000
 184              		.p2align 3
 185              	.L17:
 186              	.LBE5:
 187              		.loc 1 62 0
 188 0100 4963D6   		movslq	%r14d, %rdx
 189              	.LVL26:
 190 0103 4889DE   		movq	%rbx, %rsi
 191              	.LVL27:
 192 0106 4C89EF   		movq	%r13, %rdi
 193              	.LVL28:
 194 0109 E8000000 		call	fl_strlcpy
 194      00
 195              	.LVL29:
 196              		.loc 1 107 0
 197 010e 5B       		popq	%rbx
 198              		.cfi_remember_state
 199              		.cfi_def_cfa_offset 40
 200              	.LVL30:
 201              		.loc 1 63 0
 202 010f 31C0     		xorl	%eax, %eax
 203              		.loc 1 107 0
 204 0111 5D       		popq	%rbp
 205              		.cfi_def_cfa_offset 32
 206 0112 415C     		popq	%r12
 207              		.cfi_def_cfa_offset 24
 208 0114 415D     		popq	%r13
 209              		.cfi_def_cfa_offset 16
 210              	.LVL31:
 211 0116 415E     		popq	%r14
 212              		.cfi_def_cfa_offset 8
 213              	.LVL32:
 214 0118 C3       		ret
 215              	.LVL33:
 216              	.L22:
 217              		.cfi_restore_state
 218              		.loc 1 72 0
 219 0119 4C89E2   		movq	%r12, %rdx
 220 011c 4889DE   		movq	%rbx, %rsi
 221 011f 4C89EF   		movq	%r13, %rdi
 222 0122 E8000000 		call	fl_strlcpy
 222      00
 223              	.LVL34:
 224              		.loc 1 73 0
 225 0127 4889EF   		movq	%rbp, %rdi
 226 012a E8000000 		call	_ZdaPv
 226      00
 227              	.LVL35:
 228              		.loc 1 74 0
 229 012f 31C0     		xorl	%eax, %eax
 230 0131 EB8C     		jmp	.L18
 231              	.LVL36:
 232              	.L13:
 233              	.LBB6:
 234              		.loc 1 93 0
 235 0133 80FA01   		cmpb	$1, %dl
 236 0136 4883D300 		adcq	$0, %rbx
 237              	.LVL37:
 238 013a E94AFFFF 		jmp	.L8
 238      FF
 239              	.LBE6:
 240              		.cfi_endproc
 241              	.LFE113:
 243              		.section	.text.unlikely._Z20fl_filename_absolutePciPKc
 244              	.LCOLDE0:
 245              		.section	.text._Z20fl_filename_absolutePciPKc
 246              	.LHOTE0:
 247              		.section	.rodata.str1.1,"aMS",@progbits,1
 248              	.LC1:
 249 0000 2E00     		.string	"."
 250              	.LC2:
 251 0002 2E2E2F00 		.string	"../"
 252              		.section	.text.unlikely._Z20fl_filename_relativePciPKcS1_,"ax",@progbits
 253              	.LCOLDB3:
 254              		.section	.text._Z20fl_filename_relativePciPKcS1_,"ax",@progbits
 255              	.LHOTB3:
 256              		.p2align 4,,15
 257              		.globl	_Z20fl_filename_relativePciPKcS1_
 259              	_Z20fl_filename_relativePciPKcS1_:
 260              	.LFB115:
 261              		.loc 1 153 0
 262              		.cfi_startproc
 263              	.LVL38:
 264 0000 4157     		pushq	%r15
 265              		.cfi_def_cfa_offset 16
 266              		.cfi_offset 15, -16
 267 0002 4156     		pushq	%r14
 268              		.cfi_def_cfa_offset 24
 269              		.cfi_offset 14, -24
 270 0004 4989FE   		movq	%rdi, %r14
 271 0007 4155     		pushq	%r13
 272              		.cfi_def_cfa_offset 32
 273              		.cfi_offset 13, -32
 274 0009 4154     		pushq	%r12
 275              		.cfi_def_cfa_offset 40
 276              		.cfi_offset 12, -40
 277 000b 4989D5   		movq	%rdx, %r13
 278 000e 55       		pushq	%rbp
 279              		.cfi_def_cfa_offset 48
 280              		.cfi_offset 6, -48
 281 000f 53       		pushq	%rbx
 282              		.cfi_def_cfa_offset 56
 283              		.cfi_offset 3, -56
 284 0010 4C63E6   		movslq	%esi, %r12
 285 0013 4883EC08 		subq	$8, %rsp
 286              		.cfi_def_cfa_offset 64
 287              		.loc 1 158 0
 288 0017 4885C9   		testq	%rcx, %rcx
 289 001a 7464     		je	.L25
 290              		.loc 1 158 0 is_stmt 0 discriminator 1
 291 001c 4889CF   		movq	%rcx, %rdi
 292              	.LVL39:
 293 001f E8000000 		call	strdup
 293      00
 294              	.LVL40:
 295              		.loc 1 166 0 is_stmt 1 discriminator 1
 296 0024 41807D00 		cmpb	$47, 0(%r13)
 296      2F
 297              		.loc 1 158 0 discriminator 1
 298 0029 4989C7   		movq	%rax, %r15
 299              	.LVL41:
 300              		.loc 1 166 0 discriminator 1
 301 002c 7432     		je	.L26
 302              		.loc 1 168 0
 303 002e 4963D4   		movslq	%r12d, %rdx
 304 0031 4C89EE   		movq	%r13, %rsi
 305 0034 4C89F7   		movq	%r14, %rdi
 306 0037 E8000000 		call	fl_strlcpy
 306      00
 307              	.LVL42:
 308              		.loc 1 169 0
 309 003c 4D85FF   		testq	%r15, %r15
 310 003f 7408     		je	.L87
 311              	.L86:
 312              		.loc 1 182 0
 313 0041 4C89FF   		movq	%r15, %rdi
 314 0044 E8000000 		call	free
 314      00
 315              	.LVL43:
 316              	.L87:
 317              		.loc 1 183 0
 318 0049 31C0     		xorl	%eax, %eax
 319              	.LVL44:
 320              	.L82:
 321              		.loc 1 258 0
 322 004b 4883C408 		addq	$8, %rsp
 323              		.cfi_remember_state
 324              		.cfi_def_cfa_offset 56
 325 004f 5B       		popq	%rbx
 326              		.cfi_def_cfa_offset 48
 327 0050 5D       		popq	%rbp
 328              		.cfi_def_cfa_offset 40
 329 0051 415C     		popq	%r12
 330              		.cfi_def_cfa_offset 32
 331              	.LVL45:
 332 0053 415D     		popq	%r13
 333              		.cfi_def_cfa_offset 24
 334 0055 415E     		popq	%r14
 335              		.cfi_def_cfa_offset 16
 336              	.LVL46:
 337 0057 415F     		popq	%r15
 338              		.cfi_def_cfa_offset 8
 339 0059 C3       		ret
 340              	.LVL47:
 341 005a 660F1F44 		.p2align 4,,10
 341      0000
 342              		.p2align 3
 343              	.L26:
 344              		.cfi_restore_state
 345              		.loc 1 179 0
 346 0060 4885C0   		testq	%rax, %rax
 347 0063 741B     		je	.L25
 348              		.loc 1 179 0 is_stmt 0 discriminator 1
 349 0065 0FB618   		movzbl	(%rax), %ebx
 350 0068 80FB2F   		cmpb	$47, %bl
 351 006b 7423     		je	.L89
 352              		.loc 1 181 0 is_stmt 1
 353 006d 4963D4   		movslq	%r12d, %rdx
 354 0070 4C89EE   		movq	%r13, %rsi
 355 0073 4C89F7   		movq	%r14, %rdi
 356 0076 E8000000 		call	fl_strlcpy
 356      00
 357              	.LVL48:
 358 007b EBC4     		jmp	.L86
 359              	.LVL49:
 360 007d 0F1F00   		.p2align 4,,10
 361              		.p2align 3
 362              	.L25:
 363              		.loc 1 168 0
 364 0080 4963D4   		movslq	%r12d, %rdx
 365 0083 4C89EE   		movq	%r13, %rsi
 366 0086 4C89F7   		movq	%r14, %rdi
 367 0089 E8000000 		call	fl_strlcpy
 367      00
 368              	.LVL50:
 369 008e EBB9     		jmp	.L87
 370              	.LVL51:
 371              		.p2align 4,,10
 372              		.p2align 3
 373              	.L89:
 374              		.loc 1 210 0
 375 0090 4889C6   		movq	%rax, %rsi
 376 0093 4C89EF   		movq	%r13, %rdi
 377 0096 E8000000 		call	strcmp
 377      00
 378              	.LVL52:
 379 009b 85C0     		testl	%eax, %eax
 380 009d 0F845D01 		je	.L90
 380      0000
 381 00a3 BA2F0000 		movl	$47, %edx
 381      00
 382 00a8 4C89E8   		movq	%r13, %rax
 383 00ab 4C89FD   		movq	%r15, %rbp
 384 00ae EB2A     		jmp	.L31
 385              	.LVL53:
 386              		.p2align 4,,10
 387              		.p2align 3
 388              	.L32:
 389              		.loc 1 225 0
 390 00b0 38D3     		cmpb	%dl, %bl
 391 00b2 0F859201 		jne	.L91
 391      0000
 392              	.L33:
 393              		.loc 1 218 0
 394 00b8 4883C001 		addq	$1, %rax
 395              	.LVL54:
 396              		.loc 1 219 0
 397 00bc 0FB610   		movzbl	(%rax), %edx
 398              		.loc 1 218 0
 399 00bf 488D4D01 		leaq	1(%rbp), %rcx
 400              	.LVL55:
 401 00c3 0FB65D01 		movzbl	1(%rbp), %ebx
 402              		.loc 1 219 0
 403 00c7 84D2     		testb	%dl, %dl
 404 00c9 0F84E900 		je	.L92
 404      0000
 405              		.loc 1 219 0 is_stmt 0 discriminator 1
 406 00cf 84DB     		testb	%bl, %bl
 407 00d1 0F84E900 		je	.L56
 407      0000
 408 00d7 4889CD   		movq	%rcx, %rbp
 409              	.LVL56:
 410              	.L31:
 411              		.loc 1 221 0 is_stmt 1
 412 00da 80FA2F   		cmpb	$47, %dl
 413 00dd 75D1     		jne	.L32
 414              		.loc 1 221 0 is_stmt 0 discriminator 1
 415 00df 80FB2F   		cmpb	$47, %bl
 416 00e2 74D4     		je	.L33
 417 00e4 0FB630   		movzbl	(%rax), %esi
 418 00e7 0FB65D00 		movzbl	0(%rbp), %ebx
 419              	.LVL57:
 420              	.L34:
 421              		.loc 1 234 0 is_stmt 1 discriminator 3
 422 00eb 4080FE2F 		cmpb	$47, %sil
 423 00ef 741D     		je	.L39
 424              	.LVL58:
 425              	.L36:
 426              		.loc 1 234 0 is_stmt 0
 427 00f1 4939C5   		cmpq	%rax, %r13
 428 00f4 720F     		jb	.L42
 429 00f6 E9470100 		jmp	.L93
 429      00
 430 00fb 0F1F4400 		.p2align 4,,10
 430      00
 431              		.p2align 3
 432              	.L83:
 433              		.loc 1 234 0 discriminator 1
 434 0100 4939C5   		cmpq	%rax, %r13
 435 0103 740D     		je	.L40
 436              	.L42:
 437              		.loc 1 234 0 discriminator 2
 438 0105 4883E801 		subq	$1, %rax
 439              	.LVL59:
 440 0109 80382F   		cmpb	$47, (%rax)
 441 010c 75F2     		jne	.L83
 442              	.L39:
 443              		.loc 1 235 0 is_stmt 1
 444 010e 4C8D6801 		leaq	1(%rax), %r13
 445              	.LVL60:
 446              	.L40:
 447              		.loc 1 238 0
 448 0112 80FB2F   		cmpb	$47, %bl
 449 0115 0F84D500 		je	.L94
 449      0000
 450              	.LVL61:
 451              	.L44:
 452              		.loc 1 239 0
 453 011b 84DB     		testb	%bl, %bl
 454 011d 7469     		je	.L45
 455              		.loc 1 240 0 discriminator 3
 456 011f 80FB2F   		cmpb	$47, %bl
 457 0122 0F840B01 		je	.L46
 457      0000
 458 0128 4C39FD   		cmpq	%r15, %rbp
 459 012b 7710     		ja	.L47
 460 012d E9010100 		jmp	.L46
 460      00
 461              		.p2align 4,,10
 462 0132 660F1F44 		.p2align 3
 462      0000
 463              	.L95:
 464              		.loc 1 240 0 is_stmt 0 discriminator 2
 465 0138 4939EF   		cmpq	%rbp, %r15
 466 013b 730D     		jnb	.L59
 467              	.L47:
 468              	.LVL62:
 469 013d 4883ED01 		subq	$1, %rbp
 470              	.LVL63:
 471 0141 0FB65D00 		movzbl	0(%rbp), %ebx
 472 0145 80FB2F   		cmpb	$47, %bl
 473 0148 75EE     		jne	.L95
 474              	.L59:
 475              		.loc 1 247 0 is_stmt 1
 476 014a 84DB     		testb	%bl, %bl
 477              		.loc 1 243 0
 478 014c 41C60600 		movb	$0, (%r14)
 479              		.loc 1 244 0
 480 0150 43C64426 		movb	$0, -1(%r14,%r12)
 480      FF00
 481              		.loc 1 247 0
 482 0156 7514     		jne	.L51
 483 0158 EB38     		jmp	.L49
 484 015a 660F1F44 		.p2align 4,,10
 484      0000
 485              		.p2align 3
 486              	.L50:
 487              	.LVL64:
 488              		.loc 1 250 0
 489 0160 4883C501 		addq	$1, %rbp
 490              	.LVL65:
 491              		.loc 1 247 0
 492 0164 0FB65D00 		movzbl	0(%rbp), %ebx
 493 0168 84DB     		testb	%bl, %bl
 494 016a 7426     		je	.L49
 495              	.L51:
 496              		.loc 1 248 0
 497 016c 80FB2F   		cmpb	$47, %bl
 498 016f 75EF     		jne	.L50
 499              		.loc 1 248 0 is_stmt 0 discriminator 1
 500 0171 4C89E2   		movq	%r12, %rdx
 501 0174 BE000000 		movl	$.LC2, %esi
 501      00
 502 0179 4C89F7   		movq	%r14, %rdi
 503 017c E8000000 		call	fl_strlcat
 503      00
 504              	.LVL66:
 505 0181 EBDD     		jmp	.L50
 506              		.p2align 4,,10
 507 0183 0F1F4400 		.p2align 3
 507      00
 508              	.L45:
 509              		.loc 1 243 0 is_stmt 1
 510 0188 41C60600 		movb	$0, (%r14)
 511              		.loc 1 244 0
 512 018c 43C64426 		movb	$0, -1(%r14,%r12)
 512      FF00
 513              	.L49:
 514              		.loc 1 254 0
 515 0192 4C89E2   		movq	%r12, %rdx
 516 0195 4C89EE   		movq	%r13, %rsi
 517 0198 4C89F7   		movq	%r14, %rdi
 518 019b E8000000 		call	fl_strlcat
 518      00
 519              	.LVL67:
 520              		.loc 1 256 0
 521 01a0 4C89FF   		movq	%r15, %rdi
 522 01a3 E8000000 		call	free
 522      00
 523              	.LVL68:
 524              		.loc 1 257 0
 525 01a8 B8010000 		movl	$1, %eax
 525      00
 526 01ad E999FEFF 		jmp	.L82
 526      FF
 527              	.LVL69:
 528              		.p2align 4,,10
 529 01b2 660F1F44 		.p2align 3
 529      0000
 530              	.L92:
 531              		.loc 1 218 0
 532 01b8 4889CD   		movq	%rcx, %rbp
 533 01bb E931FFFF 		jmp	.L36
 533      FF
 534              		.p2align 4,,10
 535              		.p2align 3
 536              	.L56:
 537              		.loc 1 219 0
 538 01c0 89D6     		movl	%edx, %esi
 539              	.LVL70:
 540              	.L30:
 541              		.loc 1 229 0
 542 01c2 84DB     		testb	%bl, %bl
 543 01c4 0F858F00 		jne	.L60
 543      0000
 544 01ca 80FA2F   		cmpb	$47, %dl
 545 01cd 0F848600 		je	.L60
 545      0000
 546              		.loc 1 230 0
 547 01d3 4939CF   		cmpq	%rcx, %r15
 548 01d6 7454     		je	.L96
 549              		.loc 1 230 0 is_stmt 0 discriminator 1
 550 01d8 0FB659FF 		movzbl	-1(%rcx), %ebx
 551 01dc 80FB2F   		cmpb	$47, %bl
 552 01df 7441     		je	.L57
 553              	.L38:
 554              		.loc 1 231 0 is_stmt 1
 555 01e1 488D69FF 		leaq	-1(%rcx), %rbp
 556              	.LVL71:
 557 01e5 E901FFFF 		jmp	.L34
 557      FF
 558              	.LVL72:
 559 01ea 660F1F44 		.p2align 4,,10
 559      0000
 560              		.p2align 3
 561              	.L94:
 562 01f0 0FB65DFF 		movzbl	-1(%rbp), %ebx
 563              		.loc 1 238 0 discriminator 1
 564 01f4 4883ED01 		subq	$1, %rbp
 565              	.LVL73:
 566 01f8 E91EFFFF 		jmp	.L44
 566      FF
 567              	.LVL74:
 568 01fd 0F1F00   		.p2align 4,,10
 569              		.p2align 3
 570              	.L90:
 571              		.loc 1 211 0
 572 0200 4963D4   		movslq	%r12d, %rdx
 573 0203 BE000000 		movl	$.LC1, %esi
 573      00
 574 0208 4C89F7   		movq	%r14, %rdi
 575 020b E8000000 		call	fl_strlcpy
 575      00
 576              	.LVL75:
 577              		.loc 1 212 0
 578 0210 4C89FF   		movq	%r15, %rdi
 579 0213 E8000000 		call	free
 579      00
 580              	.LVL76:
 581              		.loc 1 213 0
 582 0218 B8010000 		movl	$1, %eax
 582      00
 583 021d E929FEFF 		jmp	.L82
 583      FF
 584              	.LVL77:
 585              	.L57:
 586 0222 4889CD   		movq	%rcx, %rbp
 587 0225 31DB     		xorl	%ebx, %ebx
 588 0227 E9BFFEFF 		jmp	.L34
 588      FF
 589              	.L96:
 590 022c 410FB65F 		movzbl	-1(%r15), %ebx
 590      FF
 591 0231 EBAE     		jmp	.L38
 592              	.LVL78:
 593              	.L46:
 594              		.loc 1 243 0
 595 0233 41C60600 		movb	$0, (%r14)
 596              		.loc 1 244 0
 597 0237 43C64426 		movb	$0, -1(%r14,%r12)
 597      FF00
 598 023d E92AFFFF 		jmp	.L51
 598      FF
 599              	.LVL79:
 600              	.L93:
 601              		.loc 1 234 0
 602 0242 4989C5   		movq	%rax, %r13
 603              	.LVL80:
 604 0245 E9C8FEFF 		jmp	.L40
 604      FF
 605              	.LVL81:
 606              	.L91:
 607 024a 0FB65D00 		movzbl	0(%rbp), %ebx
 608 024e 0FB630   		movzbl	(%rax), %esi
 609              		.loc 1 225 0
 610 0251 4889E9   		movq	%rbp, %rcx
 611 0254 E969FFFF 		jmp	.L30
 611      FF
 612              	.LVL82:
 613              	.L60:
 614 0259 4889CD   		movq	%rcx, %rbp
 615 025c E98AFEFF 		jmp	.L34
 615      FF
 616              		.cfi_endproc
 617              	.LFE115:
 619              		.section	.text.unlikely._Z20fl_filename_relativePciPKcS1_
 620              	.LCOLDE3:
 621              		.section	.text._Z20fl_filename_relativePciPKcS1_
 622              	.LHOTE3:
 623              		.section	.text.unlikely._Z20fl_filename_relativePciPKc,"ax",@progbits
 624              	.LCOLDB4:
 625              		.section	.text._Z20fl_filename_relativePciPKc,"ax",@progbits
 626              	.LHOTB4:
 627              		.p2align 4,,15
 628              		.globl	_Z20fl_filename_relativePciPKc
 630              	_Z20fl_filename_relativePciPKc:
 631              	.LFB114:
 632              		.loc 1 131 0
 633              		.cfi_startproc
 634              	.LVL83:
 635 0000 4154     		pushq	%r12
 636              		.cfi_def_cfa_offset 16
 637              		.cfi_offset 12, -16
 638 0002 55       		pushq	%rbp
 639              		.cfi_def_cfa_offset 24
 640              		.cfi_offset 6, -24
 641 0003 4889FD   		movq	%rdi, %rbp
 642 0006 53       		pushq	%rbx
 643              		.cfi_def_cfa_offset 32
 644              		.cfi_offset 3, -32
 645 0007 89F3     		movl	%esi, %ebx
 646              		.loc 1 134 0
 647 0009 BE000800 		movl	$2048, %esi
 647      00
 648              	.LVL84:
 649              		.loc 1 131 0
 650 000e 4989D4   		movq	%rdx, %r12
 651 0011 4881EC10 		subq	$2064, %rsp
 651      080000
 652              		.cfi_def_cfa_offset 2096
 653              		.loc 1 134 0
 654 0018 4889E7   		movq	%rsp, %rdi
 655              	.LVL85:
 656              		.loc 1 131 0
 657 001b 64488B04 		movq	%fs:40, %rax
 657      25280000 
 657      00
 658 0024 48898424 		movq	%rax, 2056(%rsp)
 658      08080000 
 659 002c 31C0     		xorl	%eax, %eax
 660              		.loc 1 134 0
 661 002e E8000000 		call	fl_getcwd
 661      00
 662              	.LVL86:
 663 0033 4885C0   		testq	%rax, %rax
 664 0036 7438     		je	.L102
 665              		.loc 1 138 0
 666 0038 4889E1   		movq	%rsp, %rcx
 667 003b 4C89E2   		movq	%r12, %rdx
 668 003e 89DE     		movl	%ebx, %esi
 669 0040 4889EF   		movq	%rbp, %rdi
 670 0043 E8000000 		call	_Z20fl_filename_relativePciPKcS1_
 670      00
 671              	.LVL87:
 672              	.L99:
 673              		.loc 1 139 0
 674 0048 488B8C24 		movq	2056(%rsp), %rcx
 674      08080000 
 675 0050 6448330C 		xorq	%fs:40, %rcx
 675      25280000 
 675      00
 676 0059 7527     		jne	.L103
 677 005b 4881C410 		addq	$2064, %rsp
 677      080000
 678              		.cfi_remember_state
 679              		.cfi_def_cfa_offset 32
 680 0062 5B       		popq	%rbx
 681              		.cfi_def_cfa_offset 24
 682              	.LVL88:
 683 0063 5D       		popq	%rbp
 684              		.cfi_def_cfa_offset 16
 685              	.LVL89:
 686 0064 415C     		popq	%r12
 687              		.cfi_def_cfa_offset 8
 688              	.LVL90:
 689 0066 C3       		ret
 690              	.LVL91:
 691 0067 660F1F84 		.p2align 4,,10
 691      00000000 
 691      00
 692              		.p2align 3
 693              	.L102:
 694              		.cfi_restore_state
 695              		.loc 1 135 0
 696 0070 4863D3   		movslq	%ebx, %rdx
 697 0073 4C89E6   		movq	%r12, %rsi
 698 0076 4889EF   		movq	%rbp, %rdi
 699 0079 E8000000 		call	fl_strlcpy
 699      00
 700              	.LVL92:
 701              		.loc 1 136 0
 702 007e 31C0     		xorl	%eax, %eax
 703 0080 EBC6     		jmp	.L99
 704              	.L103:
 705              		.loc 1 139 0
 706 0082 E8000000 		call	__stack_chk_fail
 706      00
 707              	.LVL93:
 708              		.cfi_endproc
 709              	.LFE114:
 711              		.section	.text.unlikely._Z20fl_filename_relativePciPKc
 712              	.LCOLDE4:
 713              		.section	.text._Z20fl_filename_relativePciPKc
 714              	.LHOTE4:
 715              		.text
 716              	.Letext0:
 717              		.section	.text.unlikely._Z20fl_filename_absolutePciPKc
 718              	.Letext_cold0:
 719              		.file 2 "/usr/include/x86_64-linux-gnu/bits/types.h"
 720              		.file 3 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 721              		.file 4 "/usr/include/libio.h"
 722              		.file 5 "/usr/include/stdio.h"
 723              		.file 6 "fltk-1.3.4-1/FL/fl_utf8.h"
 724              		.file 7 "/usr/include/string.h"
 725              		.file 8 "fltk-1.3.4-1/src/flstring.h"
 726              		.file 9 "/usr/include/stdlib.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 filename_absolute.cxx
     /tmp/ccIhkhJI.s:14     .text._Z20fl_filename_absolutePciPKc:0000000000000000 _Z20fl_filename_absolutePciPKc
     /tmp/ccIhkhJI.s:259    .text._Z20fl_filename_relativePciPKcS1_:0000000000000000 _Z20fl_filename_relativePciPKcS1_
     /tmp/ccIhkhJI.s:630    .text._Z20fl_filename_relativePciPKc:0000000000000000 _Z20fl_filename_relativePciPKc
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

UNDEFINED SYMBOLS
_Znam
fl_getcwd
strlen
fl_strlcpy
_ZdaPv
strdup
free
strcmp
fl_strlcat
__stack_chk_fail
