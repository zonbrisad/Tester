   1              		.file	"glut_font.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z19glutBitmapCharacterPvi,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._Z19glutBitmapCharacterPvi,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z19glutBitmapCharacterPvi
  10              	.Ltext_cold0:
  11              		.section	.text._Z19glutBitmapCharacterPvi
  12              		.globl	_Z19glutBitmapCharacterPvi
  14              	_Z19glutBitmapCharacterPvi:
  15              	.LFB372:
  16              		.file 1 "fltk-1.3.4-1/src/glut_font.cxx"
   1:fltk-1.3.4-1/src/glut_font.cxx **** ...
  17              		.loc 1 39 0
  18              		.cfi_startproc
  19              	.LVL0:
  20 0000 53       		pushq	%rbx
  21              		.cfi_def_cfa_offset 16
  22              		.cfi_offset 3, -16
  23 0001 89F3     		movl	%esi, %ebx
  24 0003 4883EC10 		subq	$16, %rsp
  25              		.cfi_def_cfa_offset 32
  26              		.loc 1 40 0
  27 0007 8B7704   		movl	4(%rdi), %esi
  28              	.LVL1:
  29 000a 8B3F     		movl	(%rdi), %edi
  30              	.LVL2:
  31              		.loc 1 39 0
  32 000c 64488B04 		movq	%fs:40, %rax
  32      25280000 
  32      00
  33 0015 48894424 		movq	%rax, 8(%rsp)
  33      08
  34 001a 31C0     		xorl	%eax, %eax
  35              		.loc 1 40 0
  36 001c E8000000 		call	_Z7gl_fontii
  36      00
  37              	.LVL3:
  38              		.loc 1 42 0
  39 0021 488D7C24 		leaq	7(%rsp), %rdi
  39      07
  40 0026 BE010000 		movl	$1, %esi
  40      00
  41              		.loc 1 41 0
  42 002b 885C2407 		movb	%bl, 7(%rsp)
  43              		.loc 1 42 0
  44 002f E8000000 		call	_Z7gl_drawPKci
  44      00
  45              	.LVL4:
  46              		.loc 1 43 0
  47 0034 488B4424 		movq	8(%rsp), %rax
  47      08
  48 0039 64483304 		xorq	%fs:40, %rax
  48      25280000 
  48      00
  49 0042 7506     		jne	.L5
  50 0044 4883C410 		addq	$16, %rsp
  51              		.cfi_remember_state
  52              		.cfi_def_cfa_offset 16
  53 0048 5B       		popq	%rbx
  54              		.cfi_def_cfa_offset 8
  55              	.LVL5:
  56 0049 C3       		ret
  57              	.LVL6:
  58              	.L5:
  59              		.cfi_restore_state
  60 004a E8000000 		call	__stack_chk_fail
  60      00
  61              	.LVL7:
  62              		.cfi_endproc
  63              	.LFE372:
  65              		.section	.text.unlikely._Z19glutBitmapCharacterPvi
  66              	.LCOLDE0:
  67              		.section	.text._Z19glutBitmapCharacterPvi
  68              	.LHOTE0:
  69              		.section	.text.unlikely._Z16glutBitmapHeightPv,"ax",@progbits
  70              	.LCOLDB1:
  71              		.section	.text._Z16glutBitmapHeightPv,"ax",@progbits
  72              	.LHOTB1:
  73              		.p2align 4,,15
  74              		.globl	_Z16glutBitmapHeightPv
  76              	_Z16glutBitmapHeightPv:
  77              	.LFB373:
  78              		.loc 1 45 0
  79              		.cfi_startproc
  80              	.LVL8:
  81 0000 4883EC08 		subq	$8, %rsp
  82              		.cfi_def_cfa_offset 16
  83              		.loc 1 46 0
  84 0004 8B7704   		movl	4(%rdi), %esi
  85 0007 8B3F     		movl	(%rdi), %edi
  86              	.LVL9:
  87 0009 E8000000 		call	_Z7gl_fontii
  87      00
  88              	.LVL10:
  89              		.loc 1 48 0
  90 000e 4883C408 		addq	$8, %rsp
  91              		.cfi_def_cfa_offset 8
  92              		.loc 1 47 0
  93 0012 E9000000 		jmp	_Z9gl_heightv
  93      00
  94              	.LVL11:
  95              		.cfi_endproc
  96              	.LFE373:
  98              		.section	.text.unlikely._Z16glutBitmapHeightPv
  99              	.LCOLDE1:
 100              		.section	.text._Z16glutBitmapHeightPv
 101              	.LHOTE1:
 102              		.section	.text.unlikely._Z16glutBitmapLengthPvPKh,"ax",@progbits
 103              	.LCOLDB3:
 104              		.section	.text._Z16glutBitmapLengthPvPKh,"ax",@progbits
 105              	.LHOTB3:
 106              		.p2align 4,,15
 107              		.globl	_Z16glutBitmapLengthPvPKh
 109              	_Z16glutBitmapLengthPvPKh:
 110              	.LFB374:
 111              		.loc 1 50 0
 112              		.cfi_startproc
 113              	.LVL12:
 114 0000 53       		pushq	%rbx
 115              		.cfi_def_cfa_offset 16
 116              		.cfi_offset 3, -16
 117              		.loc 1 50 0
 118 0001 4889F3   		movq	%rsi, %rbx
 119              		.loc 1 51 0
 120 0004 8B7704   		movl	4(%rdi), %esi
 121              	.LVL13:
 122 0007 8B3F     		movl	(%rdi), %edi
 123              	.LVL14:
 124 0009 E8000000 		call	_Z7gl_fontii
 124      00
 125              	.LVL15:
 126              		.loc 1 53 0
 127 000e 4889DF   		movq	%rbx, %rdi
 128 0011 E8000000 		call	_Z8gl_widthPKc
 128      00
 129              	.LVL16:
 130 0016 F20F5805 		addsd	.LC2(%rip), %xmm0
 130      00000000 
 131              		.loc 1 54 0
 132 001e 5B       		popq	%rbx
 133              		.cfi_def_cfa_offset 8
 134              	.LVL17:
 135              		.loc 1 53 0
 136 001f F20F2CC0 		cvttsd2si	%xmm0, %eax
 137              		.loc 1 54 0
 138 0023 C3       		ret
 139              		.cfi_endproc
 140              	.LFE374:
 142              		.section	.text.unlikely._Z16glutBitmapLengthPvPKh
 143              	.LCOLDE3:
 144              		.section	.text._Z16glutBitmapLengthPvPKh
 145              	.LHOTE3:
 146              		.section	.text.unlikely._Z16glutBitmapStringPvPKh,"ax",@progbits
 147              	.LCOLDB4:
 148              		.section	.text._Z16glutBitmapStringPvPKh,"ax",@progbits
 149              	.LHOTB4:
 150              		.p2align 4,,15
 151              		.globl	_Z16glutBitmapStringPvPKh
 153              	_Z16glutBitmapStringPvPKh:
 154              	.LFB375:
 155              		.loc 1 56 0
 156              		.cfi_startproc
 157              	.LVL18:
 158 0000 53       		pushq	%rbx
 159              		.cfi_def_cfa_offset 16
 160              		.cfi_offset 3, -16
 161              		.loc 1 56 0
 162 0001 4889F3   		movq	%rsi, %rbx
 163              		.loc 1 57 0
 164 0004 8B7704   		movl	4(%rdi), %esi
 165              	.LVL19:
 166 0007 8B3F     		movl	(%rdi), %edi
 167              	.LVL20:
 168 0009 E8000000 		call	_Z7gl_fontii
 168      00
 169              	.LVL21:
 170              		.loc 1 59 0
 171 000e 4889DF   		movq	%rbx, %rdi
 172              		.loc 1 60 0
 173 0011 5B       		popq	%rbx
 174              		.cfi_def_cfa_offset 8
 175              	.LVL22:
 176              		.loc 1 59 0
 177 0012 E9000000 		jmp	_Z7gl_drawPKc
 177      00
 178              	.LVL23:
 179              		.cfi_endproc
 180              	.LFE375:
 182              		.section	.text.unlikely._Z16glutBitmapStringPvPKh
 183              	.LCOLDE4:
 184              		.section	.text._Z16glutBitmapStringPvPKh
 185              	.LHOTE4:
 186              		.section	.text.unlikely._Z15glutBitmapWidthPvi,"ax",@progbits
 187              	.LCOLDB5:
 188              		.section	.text._Z15glutBitmapWidthPvi,"ax",@progbits
 189              	.LHOTB5:
 190              		.p2align 4,,15
 191              		.globl	_Z15glutBitmapWidthPvi
 193              	_Z15glutBitmapWidthPvi:
 194              	.LFB376:
 195              		.loc 1 62 0
 196              		.cfi_startproc
 197              	.LVL24:
 198 0000 53       		pushq	%rbx
 199              		.cfi_def_cfa_offset 16
 200              		.cfi_offset 3, -16
 201              		.loc 1 62 0
 202 0001 89F3     		movl	%esi, %ebx
 203              		.loc 1 63 0
 204 0003 8B7704   		movl	4(%rdi), %esi
 205              	.LVL25:
 206 0006 8B3F     		movl	(%rdi), %edi
 207              	.LVL26:
 208 0008 E8000000 		call	_Z7gl_fontii
 208      00
 209              	.LVL27:
 210              		.loc 1 64 0
 211 000d 0FB6FB   		movzbl	%bl, %edi
 212 0010 E8000000 		call	_Z8gl_widthh
 212      00
 213              	.LVL28:
 214 0015 F20F5805 		addsd	.LC2(%rip), %xmm0
 214      00000000 
 215              		.loc 1 65 0
 216 001d 5B       		popq	%rbx
 217              		.cfi_def_cfa_offset 8
 218              	.LVL29:
 219              		.loc 1 64 0
 220 001e F20F2CC0 		cvttsd2si	%xmm0, %eax
 221              		.loc 1 65 0
 222 0022 C3       		ret
 223              		.cfi_endproc
 224              	.LFE376:
 226              		.section	.text.unlikely._Z15glutBitmapWidthPvi
 227              	.LCOLDE5:
 228              		.section	.text._Z15glutBitmapWidthPvi
 229              	.LHOTE5:
 230              		.section	.text.unlikely._Z19glutStrokeCharacterPvi,"ax",@progbits
 231              	.LCOLDB7:
 232              		.section	.text._Z19glutStrokeCharacterPvi,"ax",@progbits
 233              	.LHOTB7:
 234              		.p2align 4,,15
 235              		.globl	_Z19glutStrokeCharacterPvi
 237              	_Z19glutStrokeCharacterPvi:
 238              	.LFB377:
 239              		.loc 1 71 0
 240              		.cfi_startproc
 241              	.LVL30:
 242              		.loc 1 77 0
 243 0000 85F6     		testl	%esi, %esi
 244 0002 0F88AF00 		js	.L29
 244      0000
 245              		.loc 1 77 0 is_stmt 0 discriminator 1
 246 0008 3B7708   		cmpl	8(%rdi), %esi
 247 000b 0F8DA600 		jge	.L29
 247      0000
 248              		.loc 1 71 0 is_stmt 1
 249 0011 4156     		pushq	%r14
 250              		.cfi_def_cfa_offset 16
 251              		.cfi_offset 14, -16
 252 0013 4155     		pushq	%r13
 253              		.cfi_def_cfa_offset 24
 254              		.cfi_offset 13, -24
 255              		.loc 1 79 0
 256 0015 4863F6   		movslq	%esi, %rsi
 257              		.loc 1 71 0
 258 0018 4154     		pushq	%r12
 259              		.cfi_def_cfa_offset 32
 260              		.cfi_offset 12, -32
 261 001a 55       		pushq	%rbp
 262              		.cfi_def_cfa_offset 40
 263              		.cfi_offset 6, -40
 264 001b 53       		pushq	%rbx
 265              		.cfi_def_cfa_offset 48
 266              		.cfi_offset 3, -48
 267              		.loc 1 79 0
 268 001c 488B4710 		movq	16(%rdi), %rax
 269 0020 4C8B34F0 		movq	(%rax,%rsi,8), %r14
 270              	.LVL31:
 271              		.loc 1 80 0
 272 0024 4D85F6   		testq	%r14, %r14
 273 0027 0F848200 		je	.L14
 273      0000
 274              		.loc 1 84 0
 275 002d 418B5604 		movl	4(%r14), %edx
 276 0031 4531ED   		xorl	%r13d, %r13d
 277              		.loc 1 82 0
 278 0034 4D8B6608 		movq	8(%r14), %r12
 279              	.LVL32:
 280              		.loc 1 84 0
 281 0038 85D2     		testl	%edx, %edx
 282 003a 7E5A     		jle	.L18
 283              	.LVL33:
 284 003c 0F1F4000 		.p2align 4,,10
 285              		.p2align 3
 286              	.L24:
 287              		.loc 1 86 0
 288 0040 BF030000 		movl	$3, %edi
 288      00
 289              		.loc 1 87 0
 290 0045 31ED     		xorl	%ebp, %ebp
 291 0047 31DB     		xorl	%ebx, %ebx
 292              		.loc 1 86 0
 293 0049 E8000000 		call	glBegin
 293      00
 294              	.LVL34:
 295              		.loc 1 87 0
 296 004e 418B0424 		movl	(%r12), %eax
 297 0052 85C0     		testl	%eax, %eax
 298 0054 7E2D     		jle	.L20
 299              	.LVL35:
 300 0056 662E0F1F 		.p2align 4,,10
 300      84000000 
 300      0000
 301              		.p2align 3
 302              	.L25:
 303              		.loc 1 88 0 discriminator 2
 304 0060 4889E8   		movq	%rbp, %rax
 305 0063 49034424 		addq	8(%r12), %rax
 305      08
 306              		.loc 1 87 0 discriminator 2
 307 0068 83C301   		addl	$1, %ebx
 308              	.LVL36:
 309 006b 4883C508 		addq	$8, %rbp
 310              		.loc 1 88 0 discriminator 2
 311 006f F30F1048 		movss	4(%rax), %xmm1
 311      04
 312 0074 F30F1000 		movss	(%rax), %xmm0
 313 0078 E8000000 		call	glVertex2f
 313      00
 314              	.LVL37:
 315              		.loc 1 87 0 discriminator 2
 316 007d 41391C24 		cmpl	%ebx, (%r12)
 317 0081 7FDD     		jg	.L25
 318              	.LVL38:
 319              	.L20:
 320              		.loc 1 89 0
 321 0083 E8000000 		call	glEnd
 321      00
 322              	.LVL39:
 323              		.loc 1 84 0
 324 0088 4183C501 		addl	$1, %r13d
 325              	.LVL40:
 326 008c 4983C410 		addq	$16, %r12
 327              	.LVL41:
 328 0090 45396E04 		cmpl	%r13d, 4(%r14)
 329 0094 7FAA     		jg	.L24
 330              	.LVL42:
 331              	.L18:
 332              		.loc 1 92 0
 333 0096 660FEFD2 		pxor	%xmm2, %xmm2
 334              		.loc 1 93 0
 335 009a 5B       		popq	%rbx
 336              		.cfi_remember_state
 337              		.cfi_restore 3
 338              		.cfi_def_cfa_offset 40
 339              		.loc 1 92 0
 340 009b F3410F10 		movss	(%r14), %xmm0
 340      06
 341              		.loc 1 93 0
 342 00a0 5D       		popq	%rbp
 343              		.cfi_restore 6
 344              		.cfi_def_cfa_offset 32
 345 00a1 415C     		popq	%r12
 346              		.cfi_restore 12
 347              		.cfi_def_cfa_offset 24
 348              	.LVL43:
 349 00a3 415D     		popq	%r13
 350              		.cfi_restore 13
 351              		.cfi_def_cfa_offset 16
 352 00a5 415E     		popq	%r14
 353              		.cfi_restore 14
 354              		.cfi_def_cfa_offset 8
 355              	.LVL44:
 356              		.loc 1 92 0
 357 00a7 0F28CA   		movaps	%xmm2, %xmm1
 358 00aa E9000000 		jmp	glTranslatef
 358      00
 359              	.LVL45:
 360              	.L14:
 361              		.cfi_restore_state
 362              		.loc 1 93 0
 363 00af 5B       		popq	%rbx
 364              		.cfi_restore 3
 365              		.cfi_def_cfa_offset 40
 366 00b0 5D       		popq	%rbp
 367              		.cfi_restore 6
 368              		.cfi_def_cfa_offset 32
 369 00b1 415C     		popq	%r12
 370              		.cfi_restore 12
 371              		.cfi_def_cfa_offset 24
 372 00b3 415D     		popq	%r13
 373              		.cfi_restore 13
 374              		.cfi_def_cfa_offset 16
 375 00b5 415E     		popq	%r14
 376              		.cfi_restore 14
 377              		.cfi_def_cfa_offset 8
 378              	.LVL46:
 379              	.L29:
 380 00b7 F3C3     		rep ret
 381              		.cfi_endproc
 382              	.LFE377:
 384              		.section	.text.unlikely._Z19glutStrokeCharacterPvi
 385              	.LCOLDE7:
 386              		.section	.text._Z19glutStrokeCharacterPvi
 387              	.LHOTE7:
 388              		.section	.text.unlikely._Z16glutStrokeStringPvPKh,"ax",@progbits
 389              	.LCOLDB9:
 390              		.section	.text._Z16glutStrokeStringPvPKh,"ax",@progbits
 391              	.LHOTB9:
 392              		.p2align 4,,15
 393              		.globl	_Z16glutStrokeStringPvPKh
 395              	_Z16glutStrokeStringPvPKh:
 396              	.LFB378:
 397              		.loc 1 95 0
 398              		.cfi_startproc
 399              	.LVL47:
 400              		.loc 1 101 0
 401 0000 4885F6   		testq	%rsi, %rsi
 402 0003 0F84FC00 		je	.L59
 402      0000
 403              		.loc 1 101 0 is_stmt 0 discriminator 1
 404 0009 0FB606   		movzbl	(%rsi), %eax
 405 000c 84C0     		testb	%al, %al
 406 000e 0F84F300 		je	.L60
 406      0000
 407              		.loc 1 95 0 is_stmt 1
 408 0014 4157     		pushq	%r15
 409              		.cfi_def_cfa_offset 16
 410              		.cfi_offset 15, -16
 411 0016 4156     		pushq	%r14
 412              		.cfi_def_cfa_offset 24
 413              		.cfi_offset 14, -24
 414              		.loc 1 108 0
 415 0018 4C8D7601 		leaq	1(%rsi), %r14
 416              		.loc 1 95 0
 417 001c 4155     		pushq	%r13
 418              		.cfi_def_cfa_offset 32
 419              		.cfi_offset 13, -32
 420 001e 4154     		pushq	%r12
 421              		.cfi_def_cfa_offset 40
 422              		.cfi_offset 12, -40
 423 0020 55       		pushq	%rbp
 424              		.cfi_def_cfa_offset 48
 425              		.cfi_offset 6, -48
 426 0021 53       		pushq	%rbx
 427              		.cfi_def_cfa_offset 56
 428              		.cfi_offset 3, -56
 429 0022 4883EC18 		subq	$24, %rsp
 430              		.cfi_def_cfa_offset 80
 431 0026 48893C24 		movq	%rdi, (%rsp)
 432              	.LVL48:
 433              		.loc 1 108 0
 434 002a C744240C 		movl	$0x00000000, 12(%rsp)
 434      00000000 
 435              	.LVL49:
 436              		.p2align 4,,10
 437 0032 660F1F44 		.p2align 3
 437      0000
 438              	.L41:
 439              	.LBB2:
 440              		.loc 1 109 0
 441 0038 488B0C24 		movq	(%rsp), %rcx
 442 003c 0FB6D0   		movzbl	%al, %edx
 443 003f 3B5108   		cmpl	8(%rcx), %edx
 444 0042 0F8D9E00 		jge	.L33
 444      0000
 445              	.LBB3:
 446              		.loc 1 110 0
 447 0048 3C0A     		cmpb	$10, %al
 448 004a 0F84B900 		je	.L61
 448      0000
 449              	.LBB4:
 450              		.loc 1 115 0
 451 0050 488B3424 		movq	(%rsp), %rsi
 452 0054 488B5610 		movq	16(%rsi), %rdx
 453 0058 4C8B2CC2 		movq	(%rdx,%rax,8), %r13
 454              	.LVL50:
 455              	.LBB5:
 456              		.loc 1 116 0
 457 005c 4D85ED   		testq	%r13, %r13
 458 005f 0F848100 		je	.L33
 458      0000
 459              	.LBB6:
 460              		.loc 1 119 0
 461 0065 418B5504 		movl	4(%r13), %edx
 462 0069 4531E4   		xorl	%r12d, %r12d
 463              		.loc 1 117 0
 464 006c 498B6D08 		movq	8(%r13), %rbp
 465              	.LVL51:
 466              		.loc 1 119 0
 467 0070 85D2     		testl	%edx, %edx
 468 0072 7E50     		jle	.L37
 469              	.LVL52:
 470              		.p2align 4,,10
 471 0074 0F1F4000 		.p2align 3
 472              	.L50:
 473              		.loc 1 120 0
 474 0078 BF030000 		movl	$3, %edi
 474      00
 475              		.loc 1 121 0
 476 007d 4531FF   		xorl	%r15d, %r15d
 477 0080 31DB     		xorl	%ebx, %ebx
 478              		.loc 1 120 0
 479 0082 E8000000 		call	glBegin
 479      00
 480              	.LVL53:
 481              		.loc 1 121 0
 482 0087 8B4500   		movl	0(%rbp), %eax
 483 008a 85C0     		testl	%eax, %eax
 484 008c 7E23     		jle	.L39
 485              	.LVL54:
 486 008e 6690     		.p2align 4,,10
 487              		.p2align 3
 488              	.L51:
 489              		.loc 1 122 0 discriminator 2
 490 0090 4C89FA   		movq	%r15, %rdx
 491 0093 48035508 		addq	8(%rbp), %rdx
 492              		.loc 1 121 0 discriminator 2
 493 0097 83C301   		addl	$1, %ebx
 494              	.LVL55:
 495 009a 4983C708 		addq	$8, %r15
 496              		.loc 1 122 0 discriminator 2
 497 009e F30F104A 		movss	4(%rdx), %xmm1
 497      04
 498 00a3 F30F1002 		movss	(%rdx), %xmm0
 499 00a7 E8000000 		call	glVertex2f
 499      00
 500              	.LVL56:
 501              		.loc 1 121 0 discriminator 2
 502 00ac 395D00   		cmpl	%ebx, 0(%rbp)
 503 00af 7FDF     		jg	.L51
 504              	.LVL57:
 505              	.L39:
 506              		.loc 1 123 0
 507 00b1 E8000000 		call	glEnd
 507      00
 508              	.LVL58:
 509              		.loc 1 119 0
 510 00b6 4183C401 		addl	$1, %r12d
 511              	.LVL59:
 512 00ba 4883C510 		addq	$16, %rbp
 513              	.LVL60:
 514 00be 45396504 		cmpl	%r12d, 4(%r13)
 515 00c2 7FB4     		jg	.L50
 516              	.LVL61:
 517              	.L37:
 518              		.loc 1 126 0
 519 00c4 F30F105C 		movss	12(%rsp), %xmm3
 519      240C
 520 00ca F3410F10 		movss	0(%r13), %xmm0
 520      4500
 521              		.loc 1 127 0
 522 00d0 660FEFD2 		pxor	%xmm2, %xmm2
 523              		.loc 1 126 0
 524 00d4 F30F58D8 		addss	%xmm0, %xmm3
 525              		.loc 1 127 0
 526 00d8 0F28CA   		movaps	%xmm2, %xmm1
 527              		.loc 1 126 0
 528 00db F30F115C 		movss	%xmm3, 12(%rsp)
 528      240C
 529              	.LVL62:
 530              		.loc 1 127 0
 531 00e1 E8000000 		call	glTranslatef
 531      00
 532              	.LVL63:
 533              	.L33:
 534              	.LBE6:
 535              	.LBE5:
 536              	.LBE4:
 537              	.LBE3:
 538              	.LBE2:
 539              		.loc 1 108 0
 540 00e6 4983C601 		addq	$1, %r14
 541              	.LVL64:
 542 00ea 410FB646 		movzbl	-1(%r14), %eax
 542      FF
 543              	.LVL65:
 544 00ef 84C0     		testb	%al, %al
 545 00f1 0F8541FF 		jne	.L41
 545      FFFF
 546              		.loc 1 132 0
 547 00f7 4883C418 		addq	$24, %rsp
 548              		.cfi_def_cfa_offset 56
 549              	.LVL66:
 550 00fb 5B       		popq	%rbx
 551              		.cfi_restore 3
 552              		.cfi_def_cfa_offset 48
 553 00fc 5D       		popq	%rbp
 554              		.cfi_restore 6
 555              		.cfi_def_cfa_offset 40
 556 00fd 415C     		popq	%r12
 557              		.cfi_restore 12
 558              		.cfi_def_cfa_offset 32
 559 00ff 415D     		popq	%r13
 560              		.cfi_restore 13
 561              		.cfi_def_cfa_offset 24
 562 0101 415E     		popq	%r14
 563              		.cfi_restore 14
 564              		.cfi_def_cfa_offset 16
 565              	.LVL67:
 566 0103 415F     		popq	%r15
 567              		.cfi_restore 15
 568              		.cfi_def_cfa_offset 8
 569              	.LVL68:
 570              	.L59:
 571 0105 F3C3     		rep ret
 572              	.LVL69:
 573              	.L60:
 574 0107 F3C3     		rep ret
 575              	.LVL70:
 576              	.L61:
 577              		.cfi_def_cfa_offset 80
 578              		.cfi_offset 3, -56
 579              		.cfi_offset 6, -48
 580              		.cfi_offset 12, -40
 581              		.cfi_offset 13, -32
 582              		.cfi_offset 14, -24
 583              		.cfi_offset 15, -16
 584              	.LBB8:
 585              	.LBB7:
 586              		.loc 1 111 0
 587 0109 F30F1049 		movss	12(%rcx), %xmm1
 587      0C
 588 010e F30F1044 		movss	12(%rsp), %xmm0
 588      240C
 589 0114 660FEFD2 		pxor	%xmm2, %xmm2
 590 0118 0F570D00 		xorps	.LC8(%rip), %xmm1
 590      000000
 591 011f 0F570500 		xorps	.LC8(%rip), %xmm0
 591      000000
 592 0126 E8000000 		call	glTranslatef
 592      00
 593              	.LVL71:
 594              		.loc 1 112 0
 595 012b C744240C 		movl	$0x00000000, 12(%rsp)
 595      00000000 
 596 0133 EBB1     		jmp	.L33
 597              	.LBE7:
 598              	.LBE8:
 599              		.cfi_endproc
 600              	.LFE378:
 602              		.section	.text.unlikely._Z16glutStrokeStringPvPKh
 603              	.LCOLDE9:
 604              		.section	.text._Z16glutStrokeStringPvPKh
 605              	.LHOTE9:
 606              		.section	.text.unlikely._Z15glutStrokeWidthPvi,"ax",@progbits
 607              	.LCOLDB10:
 608              		.section	.text._Z15glutStrokeWidthPvi,"ax",@progbits
 609              	.LHOTB10:
 610              		.p2align 4,,15
 611              		.globl	_Z15glutStrokeWidthPvi
 613              	_Z15glutStrokeWidthPvi:
 614              	.LFB379:
 615              		.loc 1 138 0
 616              		.cfi_startproc
 617              	.LVL72:
 618              		.loc 1 141 0
 619 0000 31C0     		xorl	%eax, %eax
 620 0002 85F6     		testl	%esi, %esi
 621 0004 782A     		js	.L63
 622              		.loc 1 141 0 is_stmt 0 discriminator 2
 623 0006 3B7708   		cmpl	8(%rdi), %esi
 624 0009 7D25     		jge	.L63
 625              		.loc 1 142 0 is_stmt 1
 626 000b 488B5710 		movq	16(%rdi), %rdx
 627 000f 4863F6   		movslq	%esi, %rsi
 628 0012 488B14F2 		movq	(%rdx,%rsi,8), %rdx
 629              	.LVL73:
 630              		.loc 1 144 0
 631 0016 4885D2   		testq	%rdx, %rdx
 632 0019 7415     		je	.L63
 633              		.loc 1 144 0 is_stmt 0 discriminator 1
 634 001b 660FEFC0 		pxor	%xmm0, %xmm0
 635 001f F30F5A02 		cvtss2sd	(%rdx), %xmm0
 636 0023 F20F5805 		addsd	.LC2(%rip), %xmm0
 636      00000000 
 637 002b F20F2CC0 		cvttsd2si	%xmm0, %eax
 638 002f C3       		ret
 639              	.LVL74:
 640              		.p2align 4,,10
 641              		.p2align 3
 642              	.L63:
 643              		.loc 1 145 0 is_stmt 1
 644 0030 F3C3     		rep ret
 645              		.cfi_endproc
 646              	.LFE379:
 648              		.section	.text.unlikely._Z15glutStrokeWidthPvi
 649              	.LCOLDE10:
 650              		.section	.text._Z15glutStrokeWidthPvi
 651              	.LHOTE10:
 652              		.section	.text.unlikely._Z16glutStrokeLengthPvPKh,"ax",@progbits
 653              	.LCOLDB11:
 654              		.section	.text._Z16glutStrokeLengthPvPKh,"ax",@progbits
 655              	.LHOTB11:
 656              		.p2align 4,,15
 657              		.globl	_Z16glutStrokeLengthPvPKh
 659              	_Z16glutStrokeLengthPvPKh:
 660              	.LFB380:
 661              		.loc 1 150 0
 662              		.cfi_startproc
 663              	.LVL75:
 664              		.loc 1 156 0
 665 0000 4885F6   		testq	%rsi, %rsi
 666 0003 0F847F00 		je	.L75
 666      0000
 667              		.loc 1 156 0 is_stmt 0 discriminator 2
 668 0009 0FB616   		movzbl	(%rsi), %edx
 669 000c 31C0     		xorl	%eax, %eax
 670 000e 84D2     		testb	%dl, %dl
 671 0010 746E     		je	.L85
 672              		.loc 1 158 0 is_stmt 1
 673 0012 660FEFC0 		pxor	%xmm0, %xmm0
 674 0016 4883C601 		addq	$1, %rsi
 675              	.LVL76:
 676 001a 8B4F08   		movl	8(%rdi), %ecx
 677 001d 0F28C8   		movaps	%xmm0, %xmm1
 678 0020 EB23     		jmp	.L74
 679              	.LVL77:
 680              		.p2align 4,,10
 681 0022 660F1F44 		.p2align 3
 681      0000
 682              	.L72:
 683              	.LBB9:
 684              	.LBB10:
 685              	.LBB11:
 686              		.loc 1 166 0
 687 0028 488B4710 		movq	16(%rdi), %rax
 688 002c 488B04D0 		movq	(%rax,%rdx,8), %rax
 689              	.LVL78:
 690              		.loc 1 167 0
 691 0030 4885C0   		testq	%rax, %rax
 692 0033 7404     		je	.L71
 693              		.loc 1 167 0 is_stmt 0 discriminator 1
 694 0035 F30F5800 		addss	(%rax), %xmm0
 695              	.LVL79:
 696              	.L71:
 697              	.LBE11:
 698              	.LBE10:
 699              	.LBE9:
 700              		.loc 1 158 0 is_stmt 1
 701 0039 4883C601 		addq	$1, %rsi
 702              	.LVL80:
 703 003d 0FB656FF 		movzbl	-1(%rsi), %edx
 704              	.LVL81:
 705 0041 84D2     		testb	%dl, %dl
 706 0043 7424     		je	.L70
 707              	.LVL82:
 708              	.L74:
 709              	.LBB14:
 710              		.loc 1 159 0
 711 0045 0FB6C2   		movzbl	%dl, %eax
 712 0048 39C8     		cmpl	%ecx, %eax
 713 004a 7DED     		jge	.L71
 714              	.LBB12:
 715              		.loc 1 160 0
 716 004c 80FA0A   		cmpb	$10, %dl
 717 004f 75D7     		jne	.L72
 718              		.loc 1 162 0
 719 0051 0F2EC1   		ucomiss	%xmm1, %xmm0
 720 0054 7603     		jbe	.L84
 721 0056 0F28C8   		movaps	%xmm0, %xmm1
 722              	.LVL83:
 723              	.L84:
 724              	.LBE12:
 725              	.LBE14:
 726              		.loc 1 158 0
 727 0059 4883C601 		addq	$1, %rsi
 728              	.LVL84:
 729 005d 0FB656FF 		movzbl	-1(%rsi), %edx
 730              	.LVL85:
 731              	.LBB15:
 732              	.LBB13:
 733              		.loc 1 163 0
 734 0061 660FEFC0 		pxor	%xmm0, %xmm0
 735              	.LVL86:
 736              	.LBE13:
 737              	.LBE15:
 738              		.loc 1 158 0
 739 0065 84D2     		testb	%dl, %dl
 740 0067 75DC     		jne	.L74
 741              	.L70:
 742              		.loc 1 172 0
 743 0069 F30F5FC1 		maxss	%xmm1, %xmm0
 744              	.LVL87:
 745              		.loc 1 174 0
 746 006d F30F5AC0 		cvtss2sd	%xmm0, %xmm0
 747              	.LVL88:
 748 0071 F20F5805 		addsd	.LC2(%rip), %xmm0
 748      00000000 
 749 0079 F20F2CC0 		cvttsd2si	%xmm0, %eax
 750 007d C3       		ret
 751              	.LVL89:
 752 007e 6690     		.p2align 4,,10
 753              		.p2align 3
 754              	.L85:
 755 0080 F3C3     		rep ret
 756              		.p2align 4,,10
 757 0082 660F1F44 		.p2align 3
 757      0000
 758              	.L75:
 759              		.loc 1 156 0
 760 0088 31C0     		xorl	%eax, %eax
 761 008a C3       		ret
 762              		.cfi_endproc
 763              	.LFE380:
 765              		.section	.text.unlikely._Z16glutStrokeLengthPvPKh
 766              	.LCOLDE11:
 767              		.section	.text._Z16glutStrokeLengthPvPKh
 768              	.LHOTE11:
 769              		.section	.text.unlikely._Z16glutStrokeHeightPv,"ax",@progbits
 770              	.LCOLDB12:
 771              		.section	.text._Z16glutStrokeHeightPv,"ax",@progbits
 772              	.LHOTB12:
 773              		.p2align 4,,15
 774              		.globl	_Z16glutStrokeHeightPv
 776              	_Z16glutStrokeHeightPv:
 777              	.LFB381:
 778              		.loc 1 180 0
 779              		.cfi_startproc
 780              	.LVL90:
 781              		.loc 1 182 0
 782 0000 F30F1047 		movss	12(%rdi), %xmm0
 782      0C
 783              		.loc 1 183 0
 784 0005 C3       		ret
 785              		.cfi_endproc
 786              	.LFE381:
 788              		.section	.text.unlikely._Z16glutStrokeHeightPv
 789              	.LCOLDE12:
 790              		.section	.text._Z16glutStrokeHeightPv
 791              	.LHOTE12:
 792              		.globl	glutBitmapHelvetica18
 793              		.section	.data.glutBitmapHelvetica18,"aw",@progbits
 794              		.align 8
 797              	glutBitmapHelvetica18:
 798 0000 00000000 		.long	0
 799 0004 12000000 		.long	18
 800              		.globl	glutBitmapHelvetica12
 801              		.section	.data.glutBitmapHelvetica12,"aw",@progbits
 802              		.align 8
 805              	glutBitmapHelvetica12:
 806 0000 00000000 		.long	0
 807 0004 0C000000 		.long	12
 808              		.globl	glutBitmapHelvetica10
 809              		.section	.data.glutBitmapHelvetica10,"aw",@progbits
 810              		.align 8
 813              	glutBitmapHelvetica10:
 814 0000 00000000 		.long	0
 815 0004 0A000000 		.long	10
 816              		.globl	glutBitmapTimesRoman24
 817              		.section	.data.glutBitmapTimesRoman24,"aw",@progbits
 818              		.align 8
 821              	glutBitmapTimesRoman24:
 822 0000 08000000 		.long	8
 823 0004 18000000 		.long	24
 824              		.globl	glutBitmapTimesRoman10
 825              		.section	.data.glutBitmapTimesRoman10,"aw",@progbits
 826              		.align 8
 829              	glutBitmapTimesRoman10:
 830 0000 08000000 		.long	8
 831 0004 0A000000 		.long	10
 832              		.globl	glutBitmap8By13
 833              		.section	.data.glutBitmap8By13,"aw",@progbits
 834              		.align 8
 837              	glutBitmap8By13:
 838 0000 0D000000 		.long	13
 839 0004 0D000000 		.long	13
 840              		.globl	glutBitmap9By15
 841              		.section	.data.glutBitmap9By15,"aw",@progbits
 842              		.align 8
 845              	glutBitmap9By15:
 846 0000 0D000000 		.long	13
 847 0004 0F000000 		.long	15
 848              		.section	.rodata.cst8,"aM",@progbits,8
 849              		.align 8
 850              	.LC2:
 851 0000 00000000 		.long	0
 852 0004 0000E03F 		.long	1071644672
 853              		.section	.rodata.cst16,"aM",@progbits,16
 854              		.align 16
 855              	.LC8:
 856 0000 00000080 		.long	2147483648
 857 0004 00000000 		.long	0
 858 0008 00000000 		.long	0
 859 000c 00000000 		.long	0
 860              		.text
 861              	.Letext0:
 862              		.section	.text.unlikely._Z19glutBitmapCharacterPvi
 863              	.Letext_cold0:
 864              		.file 2 "fltk-1.3.4-1/FL/Enumerations.H"
 865              		.file 3 "/usr/include/GL/gl.h"
 866              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 867              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 868              		.file 6 "/usr/include/libio.h"
 869              		.file 7 "fltk-1.3.4-1/FL/glut.H"
 870              		.file 8 "/usr/include/stdio.h"
 871              		.file 9 "fltk-1.3.4-1/FL/gl.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 glut_font.cxx
     /tmp/cceilOkV.s:14     .text._Z19glutBitmapCharacterPvi:0000000000000000 _Z19glutBitmapCharacterPvi
     /tmp/cceilOkV.s:76     .text._Z16glutBitmapHeightPv:0000000000000000 _Z16glutBitmapHeightPv
     /tmp/cceilOkV.s:109    .text._Z16glutBitmapLengthPvPKh:0000000000000000 _Z16glutBitmapLengthPvPKh
     /tmp/cceilOkV.s:153    .text._Z16glutBitmapStringPvPKh:0000000000000000 _Z16glutBitmapStringPvPKh
     /tmp/cceilOkV.s:193    .text._Z15glutBitmapWidthPvi:0000000000000000 _Z15glutBitmapWidthPvi
     /tmp/cceilOkV.s:237    .text._Z19glutStrokeCharacterPvi:0000000000000000 _Z19glutStrokeCharacterPvi
     /tmp/cceilOkV.s:395    .text._Z16glutStrokeStringPvPKh:0000000000000000 _Z16glutStrokeStringPvPKh
     /tmp/cceilOkV.s:613    .text._Z15glutStrokeWidthPvi:0000000000000000 _Z15glutStrokeWidthPvi
     /tmp/cceilOkV.s:659    .text._Z16glutStrokeLengthPvPKh:0000000000000000 _Z16glutStrokeLengthPvPKh
     /tmp/cceilOkV.s:776    .text._Z16glutStrokeHeightPv:0000000000000000 _Z16glutStrokeHeightPv
     /tmp/cceilOkV.s:797    .data.glutBitmapHelvetica18:0000000000000000 glutBitmapHelvetica18
     /tmp/cceilOkV.s:805    .data.glutBitmapHelvetica12:0000000000000000 glutBitmapHelvetica12
     /tmp/cceilOkV.s:813    .data.glutBitmapHelvetica10:0000000000000000 glutBitmapHelvetica10
     /tmp/cceilOkV.s:821    .data.glutBitmapTimesRoman24:0000000000000000 glutBitmapTimesRoman24
     /tmp/cceilOkV.s:829    .data.glutBitmapTimesRoman10:0000000000000000 glutBitmapTimesRoman10
     /tmp/cceilOkV.s:837    .data.glutBitmap8By13:0000000000000000 glutBitmap8By13
     /tmp/cceilOkV.s:845    .data.glutBitmap9By15:0000000000000000 glutBitmap9By15
     /tmp/cceilOkV.s:850    .rodata.cst8:0000000000000000 .LC2
     /tmp/cceilOkV.s:855    .rodata.cst16:0000000000000000 .LC8
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.gl.h.28.80167dfcc6aa1d0fdaa11461360ff2e9
                           .group:0000000000000000 wm4.glext.h.2.33ebf91cb2ac393e00fbf001cfd5adf6
                           .group:0000000000000000 wm4.stddef.h.39.ef2fde9cec0bfde1da884b6eefc7e189
                           .group:0000000000000000 wm4.glext.h.470.f1f9a32ea973d58e9e9d60b0d331a28b
                           .group:0000000000000000 wm4.features.h.19.ad7942cac365cc9b820965257723f4cc
                           .group:0000000000000000 wm4.cdefs.h.19.871bad770587d04922449df94ac50bdb
                           .group:0000000000000000 wm4.wordsize.h.4.256e8fdbd37801980286acdbc40d0280
                           .group:0000000000000000 wm4.cdefs.h.432.619afd0aac7c4b439843706c1b28ddea
                           .group:0000000000000000 wm4.stubs64.h.10.918ceb5fa58268542bf143e4c1efbcf3
                           .group:0000000000000000 wm4.wchar.h.20.510818a05484290d697a517509bf4b2d
                           .group:0000000000000000 wm4.stdint.h.35.e53b4d001f0b958bab74645e9a3f6a60
                           .group:0000000000000000 wm4.inttypes.h.32.c4dc77c414e5a88041490e6d2aa1116a
                           .group:0000000000000000 wm4.glext.h.1425.4660c46bd83bf818a1c8102c2fa59820
                           .group:0000000000000000 wm4.gl.h.2066.d218939585eb4fd8b54422df1c78229d
                           .group:0000000000000000 wm4.stdio.h.26.4719156f1aea2bb9662fd6c582dc9a4c
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.types.h.89.468e2451361e3b92f048f6cad51690ff
                           .group:0000000000000000 wm4.typesizes.h.24.40eb69a6270178f15d1bf3d7b6635a8b
                           .group:0000000000000000 wm4.stdio.h.36.2dd12c1fd035242ad5cfd0152a01be5a
                           .group:0000000000000000 wm4._G_config.h.5.b0f37d9e474454cf6e459063458db32f
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
                           .group:0000000000000000 wm4.types.h.187.fd8c81c4bff8969f5d23c3a34aa715af
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
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.94a07dff536351e64a45c44b55b1ccfb
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.glut.H.86.59b595ea1180d8875deff6fd79838763

UNDEFINED SYMBOLS
_Z7gl_fontii
_Z7gl_drawPKci
__stack_chk_fail
_Z9gl_heightv
_Z8gl_widthPKc
_Z7gl_drawPKc
_Z8gl_widthh
glBegin
glVertex2f
glEnd
glTranslatef
