   1              		.file	"fl_encoding_mac_roman.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._Z21fl_local_to_mac_romanPKci,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._Z21fl_local_to_mac_romanPKci,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._Z21fl_local_to_mac_romanPKci
  10              	.Ltext_cold0:
  11              		.section	.text._Z21fl_local_to_mac_romanPKci
  12              		.globl	_Z21fl_local_to_mac_romanPKci
  14              	_Z21fl_local_to_mac_romanPKci:
  15              	.LFB414:
  16              		.file 1 "fltk-1.3.4-1/src/fl_encoding_mac_roman.cxx"
   1:fltk-1.3.4-1/src/fl_encoding_mac_roman.cxx **** ...
  17              		.loc 1 80 0
  18              		.cfi_startproc
  19              	.LVL0:
  20              		.loc 1 81 0
  21 0000 83FEFF   		cmpl	$-1, %esi
  22              		.loc 1 80 0
  23 0003 4154     		pushq	%r12
  24              		.cfi_def_cfa_offset 16
  25              		.cfi_offset 12, -16
  26 0005 55       		pushq	%rbp
  27              		.cfi_def_cfa_offset 24
  28              		.cfi_offset 6, -24
  29 0006 4889FD   		movq	%rdi, %rbp
  30 0009 53       		pushq	%rbx
  31              		.cfi_def_cfa_offset 32
  32              		.cfi_offset 3, -32
  33 000a 89F3     		movl	%esi, %ebx
  34              		.loc 1 81 0
  35 000c 0F847E00 		je	.L22
  35      0000
  36              	.LVL1:
  37              	.L2:
  38              		.loc 1 82 0
  39 0012 3B1D0000 		cmpl	_ZL5n_buf(%rip), %ebx
  39      0000
  40 0018 488B0500 		movq	_ZL3buf(%rip), %rax
  40      000000
  41 001f 7F35     		jg	.L4
  42              		.loc 1 84 0
  43 0021 488B3D00 		movq	_ZL3buf(%rip), %rdi
  43      000000
  44              		.loc 1 83 0
  45 0028 448DA301 		leal	257(%rbx), %r12d
  45      010000
  46 002f 4181E400 		andl	$2147483392, %r12d
  46      FFFF7F
  47              		.loc 1 84 0
  48 0036 4885FF   		testq	%rdi, %rdi
  49              		.loc 1 83 0
  50 0039 44892500 		movl	%r12d, _ZL5n_buf(%rip)
  50      000000
  51              		.loc 1 84 0
  52 0040 7405     		je	.L5
  53              		.loc 1 84 0 is_stmt 0 discriminator 1
  54 0042 E8000000 		call	free
  54      00
  55              	.LVL2:
  56              	.L5:
  57              		.loc 1 85 0 is_stmt 1
  58 0047 4963FC   		movslq	%r12d, %rdi
  59 004a E8000000 		call	malloc
  59      00
  60              	.LVL3:
  61 004f 48890500 		movq	%rax, _ZL3buf(%rip)
  61      000000
  62              	.L4:
  63              	.LVL4:
  64              	.LBB2:
  65              		.loc 1 89 0
  66 0056 85DB     		testl	%ebx, %ebx
  67 0058 7F0D     		jg	.L16
  68 005a EB27     		jmp	.L13
  69              	.LVL5:
  70 005c 0F1F4000 		.p2align 4,,10
  71              		.p2align 3
  72              	.L7:
  73 0060 83EB01   		subl	$1, %ebx
  74              	.LVL6:
  75              	.LBB3:
  76              		.loc 1 94 0
  77 0063 8810     		movb	%dl, (%rax)
  78              	.LBE3:
  79              		.loc 1 89 0
  80 0065 741C     		je	.L13
  81              	.LVL7:
  82              	.L16:
  83              	.LBB4:
  84              		.loc 1 90 0
  85 0067 0FB65500 		movzbl	0(%rbp), %edx
  86              	.LVL8:
  87              		.loc 1 91 0
  88 006b 84D2     		testb	%dl, %dl
  89 006d 79F1     		jns	.L7
  90              		.loc 1 92 0
  91 006f 83C280   		addl	$-128, %edx
  92              	.LVL9:
  93              	.LBE4:
  94              		.loc 1 89 0
  95 0072 83EB01   		subl	$1, %ebx
  96              	.LVL10:
  97              	.LBB5:
  98              		.loc 1 92 0
  99 0075 4863D2   		movslq	%edx, %rdx
 100 0078 0FB69200 		movzbl	_ZL11latin2roman(%rdx), %edx
 100      000000
 101              	.LVL11:
 102 007f 8810     		movb	%dl, (%rax)
 103              	.LVL12:
 104              	.LBE5:
 105              		.loc 1 89 0
 106 0081 75E4     		jne	.L16
 107              	.L13:
 108              	.LBE2:
 109              		.loc 1 98 0
 110 0083 5B       		popq	%rbx
 111              		.cfi_remember_state
 112              		.cfi_def_cfa_offset 24
 113 0084 5D       		popq	%rbp
 114              		.cfi_def_cfa_offset 16
 115              	.LVL13:
 116 0085 415C     		popq	%r12
 117              		.cfi_def_cfa_offset 8
 118 0087 C3       		ret
 119              	.LVL14:
 120 0088 0F1F8400 		.p2align 4,,10
 120      00000000 
 121              		.p2align 3
 122              	.L22:
 123              		.cfi_restore_state
 124              		.loc 1 81 0 discriminator 1
 125 0090 E8000000 		call	strlen
 125      00
 126              	.LVL15:
 127 0095 89C3     		movl	%eax, %ebx
 128              	.LVL16:
 129 0097 E976FFFF 		jmp	.L2
 129      FF
 130              		.cfi_endproc
 131              	.LFE414:
 133              		.section	.text.unlikely._Z21fl_local_to_mac_romanPKci
 134              	.LCOLDE0:
 135              		.section	.text._Z21fl_local_to_mac_romanPKci
 136              	.LHOTE0:
 137              		.section	.text.unlikely._Z21fl_mac_roman_to_localPKci,"ax",@progbits
 138              	.LCOLDB1:
 139              		.section	.text._Z21fl_mac_roman_to_localPKci,"ax",@progbits
 140              	.LHOTB1:
 141              		.p2align 4,,15
 142              		.globl	_Z21fl_mac_roman_to_localPKci
 144              	_Z21fl_mac_roman_to_localPKci:
 145              	.LFB415:
 146              		.loc 1 101 0
 147              		.cfi_startproc
 148              	.LVL17:
 149              		.loc 1 102 0
 150 0000 83FEFF   		cmpl	$-1, %esi
 151              		.loc 1 101 0
 152 0003 4154     		pushq	%r12
 153              		.cfi_def_cfa_offset 16
 154              		.cfi_offset 12, -16
 155 0005 55       		pushq	%rbp
 156              		.cfi_def_cfa_offset 24
 157              		.cfi_offset 6, -24
 158 0006 89F5     		movl	%esi, %ebp
 159 0008 53       		pushq	%rbx
 160              		.cfi_def_cfa_offset 32
 161              		.cfi_offset 3, -32
 162              		.loc 1 101 0
 163 0009 4889FB   		movq	%rdi, %rbx
 164              		.loc 1 102 0
 165 000c 0F849E00 		je	.L39
 165      0000
 166              	.LVL18:
 167              	.L24:
 168              		.loc 1 103 0
 169 0012 3B2D0000 		cmpl	_ZL5n_buf(%rip), %ebp
 169      0000
 170 0018 488B0500 		movq	_ZL3buf(%rip), %rax
 170      000000
 171 001f 7F35     		jg	.L26
 172              		.loc 1 105 0
 173 0021 488B3D00 		movq	_ZL3buf(%rip), %rdi
 173      000000
 174              		.loc 1 104 0
 175 0028 448DA501 		leal	257(%rbp), %r12d
 175      010000
 176 002f 4181E400 		andl	$2147483392, %r12d
 176      FFFF7F
 177              		.loc 1 105 0
 178 0036 4885FF   		testq	%rdi, %rdi
 179              		.loc 1 104 0
 180 0039 44892500 		movl	%r12d, _ZL5n_buf(%rip)
 180      000000
 181              		.loc 1 105 0
 182 0040 7405     		je	.L27
 183              		.loc 1 105 0 is_stmt 0 discriminator 1
 184 0042 E8000000 		call	free
 184      00
 185              	.LVL19:
 186              	.L27:
 187              		.loc 1 106 0 is_stmt 1
 188 0047 4963FC   		movslq	%r12d, %rdi
 189 004a E8000000 		call	malloc
 189      00
 190              	.LVL20:
 191 004f 48890500 		movq	%rax, _ZL3buf(%rip)
 191      000000
 192              	.L26:
 193              	.LVL21:
 194              	.LBB6:
 195              		.loc 1 110 0
 196 0056 85ED     		testl	%ebp, %ebp
 197 0058 7E47     		jle	.L34
 198 005a 8D55FF   		leal	-1(%rbp), %edx
 199 005d 488D4801 		leaq	1(%rax), %rcx
 200 0061 488D7413 		leaq	1(%rbx,%rdx), %rsi
 200      01
 201 0066 EB14     		jmp	.L32
 202              	.LVL22:
 203 0068 0F1F8400 		.p2align 4,,10
 203      00000000 
 204              		.p2align 3
 205              	.L29:
 206              	.LBB7:
 207              		.loc 1 115 0
 208 0070 8851FF   		movb	%dl, -1(%rcx)
 209              	.LVL23:
 210 0073 4883C101 		addq	$1, %rcx
 211              	.LBE7:
 212              		.loc 1 110 0
 213 0077 4839F3   		cmpq	%rsi, %rbx
 214 007a 7425     		je	.L34
 215              	.LVL24:
 216              	.L32:
 217              	.LBB8:
 218              		.loc 1 111 0
 219 007c 4883C301 		addq	$1, %rbx
 220              	.LVL25:
 221 0080 0FB653FF 		movzbl	-1(%rbx), %edx
 222              	.LVL26:
 223              		.loc 1 112 0
 224 0084 84D2     		testb	%dl, %dl
 225 0086 79E8     		jns	.L29
 226              	.LVL27:
 227              		.loc 1 113 0
 228 0088 83C280   		addl	$-128, %edx
 229              	.LVL28:
 230 008b 4883C101 		addq	$1, %rcx
 231              	.LVL29:
 232 008f 4863D2   		movslq	%edx, %rdx
 233 0092 0FB69200 		movzbl	_ZL11roman2latin(%rdx), %edx
 233      000000
 234              	.LVL30:
 235 0099 8851FE   		movb	%dl, -2(%rcx)
 236              	.LVL31:
 237              	.LBE8:
 238              		.loc 1 110 0
 239 009c 4839F3   		cmpq	%rsi, %rbx
 240 009f 75DB     		jne	.L32
 241              	.LVL32:
 242              	.L34:
 243              	.LBE6:
 244              		.loc 1 119 0
 245 00a1 5B       		popq	%rbx
 246              		.cfi_remember_state
 247              		.cfi_def_cfa_offset 24
 248              	.LVL33:
 249 00a2 5D       		popq	%rbp
 250              		.cfi_def_cfa_offset 16
 251 00a3 415C     		popq	%r12
 252              		.cfi_def_cfa_offset 8
 253 00a5 C3       		ret
 254              	.LVL34:
 255 00a6 662E0F1F 		.p2align 4,,10
 255      84000000 
 255      0000
 256              		.p2align 3
 257              	.L39:
 258              		.cfi_restore_state
 259              		.loc 1 102 0 discriminator 1
 260 00b0 E8000000 		call	strlen
 260      00
 261              	.LVL35:
 262 00b5 89C5     		movl	%eax, %ebp
 263              	.LVL36:
 264 00b7 E956FFFF 		jmp	.L24
 264      FF
 265              		.cfi_endproc
 266              	.LFE415:
 268              		.section	.text.unlikely._Z21fl_mac_roman_to_localPKci
 269              	.LCOLDE1:
 270              		.section	.text._Z21fl_mac_roman_to_localPKci
 271              	.LHOTE1:
 272              		.section	.bss._ZL5n_buf,"aw",@nobits
 273              		.align 4
 276              	_ZL5n_buf:
 277 0000 00000000 		.zero	4
 278              		.section	.bss._ZL3buf,"aw",@nobits
 279              		.align 8
 282              	_ZL3buf:
 283 0000 00000000 		.zero	8
 283      00000000 
 284              		.section	.rodata._ZL11roman2latin,"a",@progbits
 285              		.align 32
 288              	_ZL11roman2latin:
 289 0000 C4       		.byte	-60
 290 0001 C5       		.byte	-59
 291 0002 C7       		.byte	-57
 292 0003 C9       		.byte	-55
 293 0004 D1       		.byte	-47
 294 0005 D6       		.byte	-42
 295 0006 DC       		.byte	-36
 296 0007 E1       		.byte	-31
 297 0008 E0       		.byte	-32
 298 0009 E2       		.byte	-30
 299 000a E4       		.byte	-28
 300 000b E3       		.byte	-29
 301 000c E5       		.byte	-27
 302 000d E7       		.byte	-25
 303 000e E9       		.byte	-23
 304 000f E8       		.byte	-24
 305 0010 EA       		.byte	-22
 306 0011 EB       		.byte	-21
 307 0012 ED       		.byte	-19
 308 0013 EC       		.byte	-20
 309 0014 EE       		.byte	-18
 310 0015 EF       		.byte	-17
 311 0016 F1       		.byte	-15
 312 0017 F3       		.byte	-13
 313 0018 F2       		.byte	-14
 314 0019 F4       		.byte	-12
 315 001a F6       		.byte	-10
 316 001b F5       		.byte	-11
 317 001c FA       		.byte	-6
 318 001d F9       		.byte	-7
 319 001e FB       		.byte	-5
 320 001f FC       		.byte	-4
 321 0020 86       		.byte	-122
 322 0021 B0       		.byte	-80
 323 0022 A2       		.byte	-94
 324 0023 A3       		.byte	-93
 325 0024 A7       		.byte	-89
 326 0025 95       		.byte	-107
 327 0026 B6       		.byte	-74
 328 0027 DF       		.byte	-33
 329 0028 AE       		.byte	-82
 330 0029 A9       		.byte	-87
 331 002a 99       		.byte	-103
 332 002b B4       		.byte	-76
 333 002c A8       		.byte	-88
 334 002d BF       		.byte	-65
 335 002e C6       		.byte	-58
 336 002f D8       		.byte	-40
 337 0030 BF       		.byte	-65
 338 0031 B1       		.byte	-79
 339 0032 BF       		.byte	-65
 340 0033 BF       		.byte	-65
 341 0034 A5       		.byte	-91
 342 0035 B5       		.byte	-75
 343 0036 BF       		.byte	-65
 344 0037 BF       		.byte	-65
 345 0038 BF       		.byte	-65
 346 0039 BF       		.byte	-65
 347 003a BF       		.byte	-65
 348 003b AA       		.byte	-86
 349 003c BA       		.byte	-70
 350 003d BF       		.byte	-65
 351 003e E6       		.byte	-26
 352 003f F8       		.byte	-8
 353 0040 BF       		.byte	-65
 354 0041 A1       		.byte	-95
 355 0042 AC       		.byte	-84
 356 0043 BF       		.byte	-65
 357 0044 83       		.byte	-125
 358 0045 BF       		.byte	-65
 359 0046 BF       		.byte	-65
 360 0047 AB       		.byte	-85
 361 0048 BB       		.byte	-69
 362 0049 85       		.byte	-123
 363 004a A0       		.byte	-96
 364 004b C0       		.byte	-64
 365 004c C3       		.byte	-61
 366 004d D5       		.byte	-43
 367 004e 8C       		.byte	-116
 368 004f 9C       		.byte	-100
 369 0050 96       		.byte	-106
 370 0051 97       		.byte	-105
 371 0052 93       		.byte	-109
 372 0053 94       		.byte	-108
 373 0054 91       		.byte	-111
 374 0055 92       		.byte	-110
 375 0056 F7       		.byte	-9
 376 0057 BF       		.byte	-65
 377 0058 FF       		.byte	-1
 378 0059 9F       		.byte	-97
 379 005a BF       		.byte	-65
 380 005b 80       		.byte	-128
 381 005c 8B       		.byte	-117
 382 005d 9B       		.byte	-101
 383 005e BF       		.byte	-65
 384 005f BF       		.byte	-65
 385 0060 87       		.byte	-121
 386 0061 B7       		.byte	-73
 387 0062 82       		.byte	-126
 388 0063 84       		.byte	-124
 389 0064 89       		.byte	-119
 390 0065 C2       		.byte	-62
 391 0066 CA       		.byte	-54
 392 0067 C1       		.byte	-63
 393 0068 CB       		.byte	-53
 394 0069 C8       		.byte	-56
 395 006a CD       		.byte	-51
 396 006b CE       		.byte	-50
 397 006c CF       		.byte	-49
 398 006d CC       		.byte	-52
 399 006e D3       		.byte	-45
 400 006f D4       		.byte	-44
 401 0070 BF       		.byte	-65
 402 0071 D2       		.byte	-46
 403 0072 DA       		.byte	-38
 404 0073 DB       		.byte	-37
 405 0074 D9       		.byte	-39
 406 0075 BF       		.byte	-65
 407 0076 88       		.byte	-120
 408 0077 98       		.byte	-104
 409 0078 AF       		.byte	-81
 410 0079 BF       		.byte	-65
 411 007a BF       		.byte	-65
 412 007b BF       		.byte	-65
 413 007c B8       		.byte	-72
 414 007d BF       		.byte	-65
 415 007e BF       		.byte	-65
 416 007f BF       		.byte	-65
 417              		.section	.rodata._ZL11latin2roman,"a",@progbits
 418              		.align 32
 421              	_ZL11latin2roman:
 422 0000 DB       		.byte	-37
 423 0001 C0       		.byte	-64
 424 0002 E2       		.byte	-30
 425 0003 C4       		.byte	-60
 426 0004 E3       		.byte	-29
 427 0005 C9       		.byte	-55
 428 0006 A0       		.byte	-96
 429 0007 E0       		.byte	-32
 430 0008 F6       		.byte	-10
 431 0009 E4       		.byte	-28
 432 000a C0       		.byte	-64
 433 000b DC       		.byte	-36
 434 000c CE       		.byte	-50
 435 000d C0       		.byte	-64
 436 000e C0       		.byte	-64
 437 000f C0       		.byte	-64
 438 0010 C0       		.byte	-64
 439 0011 D4       		.byte	-44
 440 0012 D5       		.byte	-43
 441 0013 D2       		.byte	-46
 442 0014 D3       		.byte	-45
 443 0015 A5       		.byte	-91
 444 0016 D0       		.byte	-48
 445 0017 D1       		.byte	-47
 446 0018 F7       		.byte	-9
 447 0019 AA       		.byte	-86
 448 001a C0       		.byte	-64
 449 001b DD       		.byte	-35
 450 001c CF       		.byte	-49
 451 001d C0       		.byte	-64
 452 001e C0       		.byte	-64
 453 001f D9       		.byte	-39
 454 0020 CA       		.byte	-54
 455 0021 C1       		.byte	-63
 456 0022 A2       		.byte	-94
 457 0023 A3       		.byte	-93
 458 0024 C0       		.byte	-64
 459 0025 B4       		.byte	-76
 460 0026 C0       		.byte	-64
 461 0027 A4       		.byte	-92
 462 0028 AC       		.byte	-84
 463 0029 A9       		.byte	-87
 464 002a BB       		.byte	-69
 465 002b C7       		.byte	-57
 466 002c C2       		.byte	-62
 467 002d C0       		.byte	-64
 468 002e A8       		.byte	-88
 469 002f F8       		.byte	-8
 470 0030 A1       		.byte	-95
 471 0031 B1       		.byte	-79
 472 0032 C0       		.byte	-64
 473 0033 C0       		.byte	-64
 474 0034 AB       		.byte	-85
 475 0035 B5       		.byte	-75
 476 0036 A6       		.byte	-90
 477 0037 E1       		.byte	-31
 478 0038 FC       		.byte	-4
 479 0039 C0       		.byte	-64
 480 003a BC       		.byte	-68
 481 003b C8       		.byte	-56
 482 003c C0       		.byte	-64
 483 003d C0       		.byte	-64
 484 003e C0       		.byte	-64
 485 003f C0       		.byte	-64
 486 0040 CB       		.byte	-53
 487 0041 E7       		.byte	-25
 488 0042 E5       		.byte	-27
 489 0043 CC       		.byte	-52
 490 0044 80       		.byte	-128
 491 0045 81       		.byte	-127
 492 0046 AE       		.byte	-82
 493 0047 82       		.byte	-126
 494 0048 E9       		.byte	-23
 495 0049 83       		.byte	-125
 496 004a E6       		.byte	-26
 497 004b E8       		.byte	-24
 498 004c ED       		.byte	-19
 499 004d EA       		.byte	-22
 500 004e EB       		.byte	-21
 501 004f EC       		.byte	-20
 502 0050 C0       		.byte	-64
 503 0051 84       		.byte	-124
 504 0052 F1       		.byte	-15
 505 0053 EE       		.byte	-18
 506 0054 EF       		.byte	-17
 507 0055 CD       		.byte	-51
 508 0056 85       		.byte	-123
 509 0057 C0       		.byte	-64
 510 0058 AF       		.byte	-81
 511 0059 F4       		.byte	-12
 512 005a F2       		.byte	-14
 513 005b F3       		.byte	-13
 514 005c 86       		.byte	-122
 515 005d C0       		.byte	-64
 516 005e C0       		.byte	-64
 517 005f A7       		.byte	-89
 518 0060 88       		.byte	-120
 519 0061 87       		.byte	-121
 520 0062 89       		.byte	-119
 521 0063 8B       		.byte	-117
 522 0064 8A       		.byte	-118
 523 0065 8C       		.byte	-116
 524 0066 BE       		.byte	-66
 525 0067 8D       		.byte	-115
 526 0068 8F       		.byte	-113
 527 0069 8E       		.byte	-114
 528 006a 90       		.byte	-112
 529 006b 91       		.byte	-111
 530 006c 93       		.byte	-109
 531 006d 92       		.byte	-110
 532 006e 94       		.byte	-108
 533 006f 95       		.byte	-107
 534 0070 C0       		.byte	-64
 535 0071 96       		.byte	-106
 536 0072 98       		.byte	-104
 537 0073 97       		.byte	-105
 538 0074 99       		.byte	-103
 539 0075 9B       		.byte	-101
 540 0076 9A       		.byte	-102
 541 0077 D6       		.byte	-42
 542 0078 BF       		.byte	-65
 543 0079 9D       		.byte	-99
 544 007a 9C       		.byte	-100
 545 007b 9E       		.byte	-98
 546 007c 9F       		.byte	-97
 547 007d C0       		.byte	-64
 548 007e C0       		.byte	-64
 549 007f D8       		.byte	-40
 550              		.text
 551              	.Letext0:
 552              		.section	.text.unlikely._Z21fl_local_to_mac_romanPKci
 553              	.Letext_cold0:
 554              		.file 2 "fltk-1.3.4-1/FL/fl_types.h"
 555              		.file 3 "fltk-1.3.4-1/FL/Enumerations.H"
 556              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types.h"
 557              		.file 5 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 558              		.file 6 "/usr/include/libio.h"
 559              		.file 7 "fltk-1.3.4-1/FL/Fl_Device.H"
 560              		.file 8 "/usr/include/stdio.h"
 561              		.file 9 "/usr/include/stdlib.h"
 562              		.file 10 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_encoding_mac_roman.cxx
     /tmp/ccFixjSa.s:14     .text._Z21fl_local_to_mac_romanPKci:0000000000000000 _Z21fl_local_to_mac_romanPKci
     /tmp/ccFixjSa.s:276    .bss._ZL5n_buf:0000000000000000 _ZL5n_buf
     /tmp/ccFixjSa.s:282    .bss._ZL3buf:0000000000000000 _ZL3buf
     /tmp/ccFixjSa.s:421    .rodata._ZL11latin2roman:0000000000000000 _ZL11latin2roman
     /tmp/ccFixjSa.s:144    .text._Z21fl_mac_roman_to_localPKci:0000000000000000 _Z21fl_mac_roman_to_localPKci
     /tmp/ccFixjSa.s:288    .rodata._ZL11roman2latin:0000000000000000 _ZL11roman2latin
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.Enumerations.H.64.046ff8195adb3a8c4fc6b407344ef3ae
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
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
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.a2ca0b29d01f5da7ea7f879d801b43ca
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.75da223233ea088d05b70fad69e90c9e
                           .group:0000000000000000 wm4.stdlib.h.54.0af3535195ddeb87f5c2e8ca307f12bc
                           .group:0000000000000000 wm4.alloca.h.19.edefa922a76c1cbaaf1e416903ba2d1c
                           .group:0000000000000000 wm4.alloca.h.29.156e12058824cc23d961c4d3b13031f6
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.stdio.h.26.4719156f1aea2bb9662fd6c582dc9a4c
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
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
free
malloc
strlen
