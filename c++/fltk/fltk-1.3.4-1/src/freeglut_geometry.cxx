   1              		.file	"freeglut_geometry.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL14fghCircleTablePPdS0_i,"ax",@progbits
   5              	.LCOLDB3:
   6              		.section	.text._ZL14fghCircleTablePPdS0_i,"ax",@progbits
   7              	.LHOTB3:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL14fghCircleTablePPdS0_i
  10              	.Ltext_cold0:
  11              		.section	.text._ZL14fghCircleTablePPdS0_i
  13              	_ZL14fghCircleTablePPdS0_i:
  14              	.LFB377:
  15              		.file 1 "fltk-1.3.4-1/src/freeglut_geometry.cxx"
   1:fltk-1.3.4-1/src/freeglut_geometry.cxx **** ...
  16              		.loc 1 122 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4156     		pushq	%r14
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 14, -16
  22              		.loc 1 127 0
  23 0002 89D0     		movl	%edx, %eax
  24              		.loc 1 122 0
  25 0004 4155     		pushq	%r13
  26              		.cfi_def_cfa_offset 24
  27              		.cfi_offset 13, -24
  28 0006 4154     		pushq	%r12
  29              		.cfi_def_cfa_offset 32
  30              		.cfi_offset 12, -32
  31 0008 55       		pushq	%rbp
  32              		.cfi_def_cfa_offset 40
  33              		.cfi_offset 6, -40
  34              		.loc 1 127 0
  35 0009 C1F81F   		sarl	$31, %eax
  36              		.loc 1 122 0
  37 000c 53       		pushq	%rbx
  38              		.cfi_def_cfa_offset 48
  39              		.cfi_offset 3, -48
  40              		.loc 1 127 0
  41 000d 4189C4   		movl	%eax, %r12d
  42              		.loc 1 122 0
  43 0010 4989FD   		movq	%rdi, %r13
  44              		.loc 1 127 0
  45 0013 4131D4   		xorl	%edx, %r12d
  46              		.loc 1 122 0
  47 0016 4989F6   		movq	%rsi, %r14
  48 0019 4883EC20 		subq	$32, %rsp
  49              		.cfi_def_cfa_offset 80
  50              		.loc 1 127 0
  51 001d 4129C4   		subl	%eax, %r12d
  52              	.LVL1:
  53              		.loc 1 131 0
  54 0020 85D2     		testl	%edx, %edx
  55 0022 F20F101D 		movsd	.LC0(%rip), %xmm3
  55      00000000 
  56 002a F20F115C 		movsd	%xmm3, 8(%rsp)
  56      2408
  57 0030 7412     		je	.L2
  58              		.loc 1 131 0 is_stmt 0 discriminator 1
  59 0032 660FEFC0 		pxor	%xmm0, %xmm0
  60 0036 F20F2AC2 		cvtsi2sd	%edx, %xmm0
  61 003a F20F5ED8 		divsd	%xmm0, %xmm3
  62 003e F20F115C 		movsd	%xmm3, 8(%rsp)
  62      2408
  63              	.L2:
  64              	.LVL2:
  65              		.loc 1 135 0 is_stmt 1 discriminator 4
  66 0044 418D5C24 		leal	1(%r12), %ebx
  66      01
  67 0049 BF080000 		movl	$8, %edi
  67      00
  68              	.LVL3:
  69 004e 4863DB   		movslq	%ebx, %rbx
  70 0051 4889DE   		movq	%rbx, %rsi
  71              	.LVL4:
  72 0054 E8000000 		call	calloc
  72      00
  73              	.LVL5:
  74              		.loc 1 136 0 discriminator 4
  75 0059 BF080000 		movl	$8, %edi
  75      00
  76              		.loc 1 135 0 discriminator 4
  77 005e 49894500 		movq	%rax, 0(%r13)
  78              		.loc 1 136 0 discriminator 4
  79 0062 4889DE   		movq	%rbx, %rsi
  80 0065 E8000000 		call	calloc
  80      00
  81              	.LVL6:
  82 006a 498906   		movq	%rax, (%r14)
  83              		.loc 1 140 0 discriminator 4
  84 006d 498B7D00 		movq	0(%r13), %rdi
  85 0071 4885FF   		testq	%rdi, %rdi
  86 0074 0F84D600 		je	.L10
  86      0000
  87              		.loc 1 140 0 is_stmt 0 discriminator 1
  88 007a 4885C0   		testq	%rax, %rax
  89 007d 0F84A500 		je	.L17
  89      0000
  90              		.loc 1 149 0 is_stmt 1
  91 0083 48C70700 		movq	$0, (%rdi)
  91      000000
  92              		.loc 1 150 0
  93 008a 498B06   		movq	(%r14), %rax
  94              		.loc 1 152 0
  95 008d 4183FC01 		cmpl	$1, %r12d
  96              		.loc 1 150 0
  97 0091 F20F1025 		movsd	.LC2(%rip), %xmm4
  97      00000000 
  98              		.loc 1 152 0
  99 0099 BD080000 		movl	$8, %ebp
  99      00
 100 009e BB010000 		movl	$1, %ebx
 100      00
 101              		.loc 1 150 0
 102 00a3 F20F1120 		movsd	%xmm4, (%rax)
 103              	.LVL7:
 104              		.loc 1 152 0
 105 00a7 7E4D     		jle	.L7
 106              	.LVL8:
 107 00a9 0F1F8000 		.p2align 4,,10
 107      000000
 108              		.p2align 3
 109              	.L8:
 110 00b0 660FEFC0 		pxor	%xmm0, %xmm0
 111 00b4 488D7424 		leaq	16(%rsp), %rsi
 111      10
 112 00b9 488D7C24 		leaq	24(%rsp), %rdi
 112      18
 113 00be F20F2AC3 		cvtsi2sd	%ebx, %xmm0
 114              		.loc 1 152 0 is_stmt 0 discriminator 2
 115 00c2 83C301   		addl	$1, %ebx
 116              	.LVL9:
 117 00c5 F20F5944 		mulsd	8(%rsp), %xmm0
 117      2408
 118 00cb E8000000 		call	sincos
 118      00
 119              	.LVL10:
 120              		.loc 1 154 0 is_stmt 1 discriminator 2
 121 00d0 498B4500 		movq	0(%r13), %rax
 122 00d4 F20F104C 		movsd	24(%rsp), %xmm1
 122      2418
 123 00da F20F1044 		movsd	16(%rsp), %xmm0
 123      2410
 124 00e0 F20F110C 		movsd	%xmm1, (%rax,%rbp)
 124      28
 125              		.loc 1 155 0 discriminator 2
 126 00e5 498B06   		movq	(%r14), %rax
 127 00e8 F20F1104 		movsd	%xmm0, (%rax,%rbp)
 127      28
 128 00ed 4883C508 		addq	$8, %rbp
 129              		.loc 1 152 0 discriminator 2
 130 00f1 4139DC   		cmpl	%ebx, %r12d
 131 00f4 75BA     		jne	.L8
 132              	.LVL11:
 133              	.L7:
 134              		.loc 1 160 0
 135 00f6 498B4500 		movq	0(%r13), %rax
 136 00fa 4D63E4   		movslq	%r12d, %r12
 137 00fd F20F1000 		movsd	(%rax), %xmm0
 138 0101 F2420F11 		movsd	%xmm0, (%rax,%r12,8)
 138      04E0
 139              		.loc 1 161 0
 140 0107 498B06   		movq	(%r14), %rax
 141 010a F20F1000 		movsd	(%rax), %xmm0
 142 010e F2420F11 		movsd	%xmm0, (%rax,%r12,8)
 142      04E0
 143              	.LVL12:
 144              	.L1:
 145              		.loc 1 162 0
 146 0114 4883C420 		addq	$32, %rsp
 147              		.cfi_remember_state
 148              		.cfi_def_cfa_offset 48
 149 0118 5B       		popq	%rbx
 150              		.cfi_def_cfa_offset 40
 151 0119 5D       		popq	%rbp
 152              		.cfi_def_cfa_offset 32
 153 011a 415C     		popq	%r12
 154              		.cfi_def_cfa_offset 24
 155 011c 415D     		popq	%r13
 156              		.cfi_def_cfa_offset 16
 157              	.LVL13:
 158 011e 415E     		popq	%r14
 159              		.cfi_def_cfa_offset 8
 160              	.LVL14:
 161 0120 C3       		ret
 162              	.LVL15:
 163              		.p2align 4,,10
 164 0121 0F1F8000 		.p2align 3
 164      000000
 165              	.L17:
 166              		.cfi_restore_state
 167              		.loc 1 142 0 discriminator 1
 168 0128 E8000000 		call	free
 168      00
 169              	.LVL16:
 170 012d 498B3E   		movq	(%r14), %rdi
 171              	.L3:
 172              		.loc 1 143 0
 173 0130 4885FF   		testq	%rdi, %rdi
 174 0133 74DF     		je	.L1
 175              		.loc 1 162 0 discriminator 1
 176 0135 4883C420 		addq	$32, %rsp
 177              		.cfi_remember_state
 178              		.cfi_def_cfa_offset 48
 179 0139 5B       		popq	%rbx
 180              		.cfi_def_cfa_offset 40
 181 013a 5D       		popq	%rbp
 182              		.cfi_def_cfa_offset 32
 183 013b 415C     		popq	%r12
 184              		.cfi_def_cfa_offset 24
 185              	.LVL17:
 186 013d 415D     		popq	%r13
 187              		.cfi_def_cfa_offset 16
 188              	.LVL18:
 189 013f 415E     		popq	%r14
 190              		.cfi_def_cfa_offset 8
 191              	.LVL19:
 192              		.loc 1 143 0 discriminator 1
 193 0141 E9000000 		jmp	free
 193      00
 194              	.LVL20:
 195 0146 662E0F1F 		.p2align 4,,10
 195      84000000 
 195      0000
 196              		.p2align 3
 197              	.L10:
 198              		.cfi_restore_state
 199              		.loc 1 136 0
 200 0150 4889C7   		movq	%rax, %rdi
 201 0153 EBDB     		jmp	.L3
 202              		.cfi_endproc
 203              	.LFE377:
 205              		.section	.text.unlikely._ZL14fghCircleTablePPdS0_i
 206              	.LCOLDE3:
 207              		.section	.text._ZL14fghCircleTablePPdS0_i
 208              	.LHOTE3:
 209              		.section	.text.unlikely._Z12glutWireCubed,"ax",@progbits
 210              	.LCOLDB7:
 211              		.section	.text._Z12glutWireCubed,"ax",@progbits
 212              	.LHOTB7:
 213              		.p2align 4,,15
 214              		.globl	_Z12glutWireCubed
 216              	_Z12glutWireCubed:
 217              	.LFB375:
 218              		.loc 1 69 0
 219              		.cfi_startproc
 220              	.LVL21:
 221 0000 4883EC18 		subq	$24, %rsp
 222              		.cfi_def_cfa_offset 32
 223              	.LVL22:
 224              		.loc 1 76 0
 225 0004 BF020000 		movl	$2, %edi
 225      00
 226              		.loc 1 70 0
 227 0009 F20F5905 		mulsd	.LC4(%rip), %xmm0
 227      00000000 
 228              	.LVL23:
 229 0011 F20F1104 		movsd	%xmm0, (%rsp)
 229      24
 230              	.LVL24:
 231              		.loc 1 76 0
 232 0016 E8000000 		call	glBegin
 232      00
 233              	.LVL25:
 234 001b 660FEFD2 		pxor	%xmm2, %xmm2
 235 001f F20F1005 		movsd	.LC2(%rip), %xmm0
 235      00000000 
 236 0027 660F28CA 		movapd	%xmm2, %xmm1
 237 002b E8000000 		call	glNormal3d
 237      00
 238              	.LVL26:
 239 0030 F20F1005 		movsd	.LC5(%rip), %xmm0
 239      00000000 
 240 0038 F20F101C 		movsd	(%rsp), %xmm3
 240      24
 241 003d 660F28F0 		movapd	%xmm0, %xmm6
 242 0041 660F28D3 		movapd	%xmm3, %xmm2
 243 0045 660F28C3 		movapd	%xmm3, %xmm0
 244 0049 660F57F3 		xorpd	%xmm3, %xmm6
 245 004d 660F28EE 		movapd	%xmm6, %xmm5
 246 0051 660F28CD 		movapd	%xmm5, %xmm1
 247 0055 F20F116C 		movsd	%xmm5, 8(%rsp)
 247      2408
 248 005b E8000000 		call	glVertex3d
 248      00
 249              	.LVL27:
 250 0060 F20F106C 		movsd	8(%rsp), %xmm5
 250      2408
 251 0066 F20F1004 		movsd	(%rsp), %xmm0
 251      24
 252 006b 660F28D5 		movapd	%xmm5, %xmm2
 253 006f 660F28CD 		movapd	%xmm5, %xmm1
 254 0073 E8000000 		call	glVertex3d
 254      00
 255              	.LVL28:
 256 0078 F20F1024 		movsd	(%rsp), %xmm4
 256      24
 257 007d F20F1054 		movsd	8(%rsp), %xmm2
 257      2408
 258 0083 660F28CC 		movapd	%xmm4, %xmm1
 259 0087 660F28C4 		movapd	%xmm4, %xmm0
 260 008b E8000000 		call	glVertex3d
 260      00
 261              	.LVL29:
 262 0090 F20F1024 		movsd	(%rsp), %xmm4
 262      24
 263 0095 660F28D4 		movapd	%xmm4, %xmm2
 264 0099 660F28CC 		movapd	%xmm4, %xmm1
 265 009d 660F28C4 		movapd	%xmm4, %xmm0
 266 00a1 E8000000 		call	glVertex3d
 266      00
 267              	.LVL30:
 268 00a6 E8000000 		call	glEnd
 268      00
 269              	.LVL31:
 270              		.loc 1 77 0
 271 00ab BF020000 		movl	$2, %edi
 271      00
 272 00b0 E8000000 		call	glBegin
 272      00
 273              	.LVL32:
 274 00b5 660FEFD2 		pxor	%xmm2, %xmm2
 275 00b9 F20F100D 		movsd	.LC2(%rip), %xmm1
 275      00000000 
 276 00c1 660F28C2 		movapd	%xmm2, %xmm0
 277 00c5 E8000000 		call	glNormal3d
 277      00
 278              	.LVL33:
 279 00ca F20F1024 		movsd	(%rsp), %xmm4
 279      24
 280 00cf 660F28D4 		movapd	%xmm4, %xmm2
 281 00d3 660F28CC 		movapd	%xmm4, %xmm1
 282 00d7 660F28C4 		movapd	%xmm4, %xmm0
 283 00db E8000000 		call	glVertex3d
 283      00
 284              	.LVL34:
 285 00e0 F20F1024 		movsd	(%rsp), %xmm4
 285      24
 286 00e5 F20F1054 		movsd	8(%rsp), %xmm2
 286      2408
 287 00eb 660F28CC 		movapd	%xmm4, %xmm1
 288 00ef 660F28C4 		movapd	%xmm4, %xmm0
 289 00f3 E8000000 		call	glVertex3d
 289      00
 290              	.LVL35:
 291 00f8 F20F106C 		movsd	8(%rsp), %xmm5
 291      2408
 292 00fe F20F100C 		movsd	(%rsp), %xmm1
 292      24
 293 0103 660F28D5 		movapd	%xmm5, %xmm2
 294 0107 660F28C5 		movapd	%xmm5, %xmm0
 295 010b E8000000 		call	glVertex3d
 295      00
 296              	.LVL36:
 297 0110 F20F1024 		movsd	(%rsp), %xmm4
 297      24
 298 0115 F20F1044 		movsd	8(%rsp), %xmm0
 298      2408
 299 011b 660F28D4 		movapd	%xmm4, %xmm2
 300 011f 660F28CC 		movapd	%xmm4, %xmm1
 301 0123 E8000000 		call	glVertex3d
 301      00
 302              	.LVL37:
 303 0128 E8000000 		call	glEnd
 303      00
 304              	.LVL38:
 305              		.loc 1 78 0
 306 012d BF020000 		movl	$2, %edi
 306      00
 307 0132 E8000000 		call	glBegin
 307      00
 308              	.LVL39:
 309 0137 660FEFC9 		pxor	%xmm1, %xmm1
 310 013b F20F1015 		movsd	.LC2(%rip), %xmm2
 310      00000000 
 311 0143 660F28C1 		movapd	%xmm1, %xmm0
 312 0147 E8000000 		call	glNormal3d
 312      00
 313              	.LVL40:
 314 014c F20F1024 		movsd	(%rsp), %xmm4
 314      24
 315 0151 660F28D4 		movapd	%xmm4, %xmm2
 316 0155 660F28CC 		movapd	%xmm4, %xmm1
 317 0159 660F28C4 		movapd	%xmm4, %xmm0
 318 015d E8000000 		call	glVertex3d
 318      00
 319              	.LVL41:
 320 0162 F20F1024 		movsd	(%rsp), %xmm4
 320      24
 321 0167 F20F1044 		movsd	8(%rsp), %xmm0
 321      2408
 322 016d 660F28D4 		movapd	%xmm4, %xmm2
 323 0171 660F28CC 		movapd	%xmm4, %xmm1
 324 0175 E8000000 		call	glVertex3d
 324      00
 325              	.LVL42:
 326 017a F20F106C 		movsd	8(%rsp), %xmm5
 326      2408
 327 0180 F20F1014 		movsd	(%rsp), %xmm2
 327      24
 328 0185 660F28CD 		movapd	%xmm5, %xmm1
 329 0189 660F28C5 		movapd	%xmm5, %xmm0
 330 018d E8000000 		call	glVertex3d
 330      00
 331              	.LVL43:
 332 0192 F20F1024 		movsd	(%rsp), %xmm4
 332      24
 333 0197 F20F104C 		movsd	8(%rsp), %xmm1
 333      2408
 334 019d 660F28D4 		movapd	%xmm4, %xmm2
 335 01a1 660F28C4 		movapd	%xmm4, %xmm0
 336 01a5 E8000000 		call	glVertex3d
 336      00
 337              	.LVL44:
 338 01aa E8000000 		call	glEnd
 338      00
 339              	.LVL45:
 340              		.loc 1 79 0
 341 01af BF020000 		movl	$2, %edi
 341      00
 342 01b4 E8000000 		call	glBegin
 342      00
 343              	.LVL46:
 344 01b9 660FEFD2 		pxor	%xmm2, %xmm2
 345 01bd F20F1005 		movsd	.LC6(%rip), %xmm0
 345      00000000 
 346 01c5 660F28CA 		movapd	%xmm2, %xmm1
 347 01c9 E8000000 		call	glNormal3d
 347      00
 348              	.LVL47:
 349 01ce F20F106C 		movsd	8(%rsp), %xmm5
 349      2408
 350 01d4 F20F1014 		movsd	(%rsp), %xmm2
 350      24
 351 01d9 660F28CD 		movapd	%xmm5, %xmm1
 352 01dd 660F28C5 		movapd	%xmm5, %xmm0
 353 01e1 E8000000 		call	glVertex3d
 353      00
 354              	.LVL48:
 355 01e6 F20F1024 		movsd	(%rsp), %xmm4
 355      24
 356 01eb F20F1044 		movsd	8(%rsp), %xmm0
 356      2408
 357 01f1 660F28D4 		movapd	%xmm4, %xmm2
 358 01f5 660F28CC 		movapd	%xmm4, %xmm1
 359 01f9 E8000000 		call	glVertex3d
 359      00
 360              	.LVL49:
 361 01fe F20F106C 		movsd	8(%rsp), %xmm5
 361      2408
 362 0204 F20F100C 		movsd	(%rsp), %xmm1
 362      24
 363 0209 660F28D5 		movapd	%xmm5, %xmm2
 364 020d 660F28C5 		movapd	%xmm5, %xmm0
 365 0211 E8000000 		call	glVertex3d
 365      00
 366              	.LVL50:
 367 0216 F20F106C 		movsd	8(%rsp), %xmm5
 367      2408
 368 021c 660F28D5 		movapd	%xmm5, %xmm2
 369 0220 660F28CD 		movapd	%xmm5, %xmm1
 370 0224 660F28C5 		movapd	%xmm5, %xmm0
 371 0228 E8000000 		call	glVertex3d
 371      00
 372              	.LVL51:
 373 022d E8000000 		call	glEnd
 373      00
 374              	.LVL52:
 375              		.loc 1 80 0
 376 0232 BF020000 		movl	$2, %edi
 376      00
 377 0237 E8000000 		call	glBegin
 377      00
 378              	.LVL53:
 379 023c 660FEFD2 		pxor	%xmm2, %xmm2
 380 0240 F20F100D 		movsd	.LC6(%rip), %xmm1
 380      00000000 
 381 0248 660F28C2 		movapd	%xmm2, %xmm0
 382 024c E8000000 		call	glNormal3d
 382      00
 383              	.LVL54:
 384 0251 F20F106C 		movsd	8(%rsp), %xmm5
 384      2408
 385 0257 F20F1014 		movsd	(%rsp), %xmm2
 385      24
 386 025c 660F28CD 		movapd	%xmm5, %xmm1
 387 0260 660F28C5 		movapd	%xmm5, %xmm0
 388 0264 E8000000 		call	glVertex3d
 388      00
 389              	.LVL55:
 390 0269 F20F106C 		movsd	8(%rsp), %xmm5
 390      2408
 391 026f 660F28D5 		movapd	%xmm5, %xmm2
 392 0273 660F28CD 		movapd	%xmm5, %xmm1
 393 0277 660F28C5 		movapd	%xmm5, %xmm0
 394 027b E8000000 		call	glVertex3d
 394      00
 395              	.LVL56:
 396 0280 F20F106C 		movsd	8(%rsp), %xmm5
 396      2408
 397 0286 F20F1004 		movsd	(%rsp), %xmm0
 397      24
 398 028b 660F28D5 		movapd	%xmm5, %xmm2
 399 028f 660F28CD 		movapd	%xmm5, %xmm1
 400 0293 E8000000 		call	glVertex3d
 400      00
 401              	.LVL57:
 402 0298 F20F1024 		movsd	(%rsp), %xmm4
 402      24
 403 029d F20F104C 		movsd	8(%rsp), %xmm1
 403      2408
 404 02a3 660F28D4 		movapd	%xmm4, %xmm2
 405 02a7 660F28C4 		movapd	%xmm4, %xmm0
 406 02ab E8000000 		call	glVertex3d
 406      00
 407              	.LVL58:
 408 02b0 E8000000 		call	glEnd
 408      00
 409              	.LVL59:
 410              		.loc 1 81 0
 411 02b5 BF020000 		movl	$2, %edi
 411      00
 412 02ba E8000000 		call	glBegin
 412      00
 413              	.LVL60:
 414 02bf 660FEFC9 		pxor	%xmm1, %xmm1
 415 02c3 F20F1015 		movsd	.LC6(%rip), %xmm2
 415      00000000 
 416 02cb 660F28C1 		movapd	%xmm1, %xmm0
 417 02cf E8000000 		call	glNormal3d
 417      00
 418              	.LVL61:
 419 02d4 F20F106C 		movsd	8(%rsp), %xmm5
 419      2408
 420 02da 660F28D5 		movapd	%xmm5, %xmm2
 421 02de 660F28CD 		movapd	%xmm5, %xmm1
 422 02e2 660F28C5 		movapd	%xmm5, %xmm0
 423 02e6 E8000000 		call	glVertex3d
 423      00
 424              	.LVL62:
 425 02eb F20F106C 		movsd	8(%rsp), %xmm5
 425      2408
 426 02f1 F20F100C 		movsd	(%rsp), %xmm1
 426      24
 427 02f6 660F28D5 		movapd	%xmm5, %xmm2
 428 02fa 660F28C5 		movapd	%xmm5, %xmm0
 429 02fe E8000000 		call	glVertex3d
 429      00
 430              	.LVL63:
 431 0303 F20F1024 		movsd	(%rsp), %xmm4
 431      24
 432 0308 F20F1054 		movsd	8(%rsp), %xmm2
 432      2408
 433 030e 660F28CC 		movapd	%xmm4, %xmm1
 434 0312 660F28C4 		movapd	%xmm4, %xmm0
 435 0316 E8000000 		call	glVertex3d
 435      00
 436              	.LVL64:
 437 031b F20F104C 		movsd	8(%rsp), %xmm1
 437      2408
 438 0321 F20F1004 		movsd	(%rsp), %xmm0
 438      24
 439 0326 660F28D1 		movapd	%xmm1, %xmm2
 440 032a E8000000 		call	glVertex3d
 440      00
 441              	.LVL65:
 442              		.loc 1 85 0
 443 032f 4883C418 		addq	$24, %rsp
 444              		.cfi_def_cfa_offset 8
 445              		.loc 1 81 0
 446 0333 E9000000 		jmp	glEnd
 446      00
 447              	.LVL66:
 448              		.cfi_endproc
 449              	.LFE375:
 451              		.section	.text.unlikely._Z12glutWireCubed
 452              	.LCOLDE7:
 453              		.section	.text._Z12glutWireCubed
 454              	.LHOTE7:
 455              		.section	.text.unlikely._Z13glutSolidCubed,"ax",@progbits
 456              	.LCOLDB8:
 457              		.section	.text._Z13glutSolidCubed,"ax",@progbits
 458              	.LHOTB8:
 459              		.p2align 4,,15
 460              		.globl	_Z13glutSolidCubed
 462              	_Z13glutSolidCubed:
 463              	.LFB376:
 464              		.loc 1 91 0
 465              		.cfi_startproc
 466              	.LVL67:
 467 0000 4883EC18 		subq	$24, %rsp
 468              		.cfi_def_cfa_offset 32
 469              	.LVL68:
 470              		.loc 1 98 0
 471 0004 BF070000 		movl	$7, %edi
 471      00
 472              		.loc 1 92 0
 473 0009 F20F5905 		mulsd	.LC4(%rip), %xmm0
 473      00000000 
 474              	.LVL69:
 475 0011 F20F1104 		movsd	%xmm0, (%rsp)
 475      24
 476              	.LVL70:
 477              		.loc 1 98 0
 478 0016 E8000000 		call	glBegin
 478      00
 479              	.LVL71:
 480              		.loc 1 99 0
 481 001b 660FEFD2 		pxor	%xmm2, %xmm2
 482 001f F20F1005 		movsd	.LC2(%rip), %xmm0
 482      00000000 
 483 0027 660F28CA 		movapd	%xmm2, %xmm1
 484 002b E8000000 		call	glNormal3d
 484      00
 485              	.LVL72:
 486 0030 F20F1005 		movsd	.LC5(%rip), %xmm0
 486      00000000 
 487 0038 F20F101C 		movsd	(%rsp), %xmm3
 487      24
 488 003d 660F28F0 		movapd	%xmm0, %xmm6
 489 0041 660F28D3 		movapd	%xmm3, %xmm2
 490 0045 660F28C3 		movapd	%xmm3, %xmm0
 491 0049 660F57F3 		xorpd	%xmm3, %xmm6
 492 004d 660F28EE 		movapd	%xmm6, %xmm5
 493 0051 660F28CD 		movapd	%xmm5, %xmm1
 494 0055 F20F116C 		movsd	%xmm5, 8(%rsp)
 494      2408
 495 005b E8000000 		call	glVertex3d
 495      00
 496              	.LVL73:
 497 0060 F20F106C 		movsd	8(%rsp), %xmm5
 497      2408
 498 0066 F20F1004 		movsd	(%rsp), %xmm0
 498      24
 499 006b 660F28D5 		movapd	%xmm5, %xmm2
 500 006f 660F28CD 		movapd	%xmm5, %xmm1
 501 0073 E8000000 		call	glVertex3d
 501      00
 502              	.LVL74:
 503 0078 F20F1024 		movsd	(%rsp), %xmm4
 503      24
 504 007d F20F1054 		movsd	8(%rsp), %xmm2
 504      2408
 505 0083 660F28CC 		movapd	%xmm4, %xmm1
 506 0087 660F28C4 		movapd	%xmm4, %xmm0
 507 008b E8000000 		call	glVertex3d
 507      00
 508              	.LVL75:
 509 0090 F20F1024 		movsd	(%rsp), %xmm4
 509      24
 510 0095 660F28D4 		movapd	%xmm4, %xmm2
 511 0099 660F28CC 		movapd	%xmm4, %xmm1
 512 009d 660F28C4 		movapd	%xmm4, %xmm0
 513 00a1 E8000000 		call	glVertex3d
 513      00
 514              	.LVL76:
 515              		.loc 1 100 0
 516 00a6 660FEFD2 		pxor	%xmm2, %xmm2
 517 00aa F20F100D 		movsd	.LC2(%rip), %xmm1
 517      00000000 
 518 00b2 660F28C2 		movapd	%xmm2, %xmm0
 519 00b6 E8000000 		call	glNormal3d
 519      00
 520              	.LVL77:
 521 00bb F20F1024 		movsd	(%rsp), %xmm4
 521      24
 522 00c0 660F28D4 		movapd	%xmm4, %xmm2
 523 00c4 660F28CC 		movapd	%xmm4, %xmm1
 524 00c8 660F28C4 		movapd	%xmm4, %xmm0
 525 00cc E8000000 		call	glVertex3d
 525      00
 526              	.LVL78:
 527 00d1 F20F1024 		movsd	(%rsp), %xmm4
 527      24
 528 00d6 F20F1054 		movsd	8(%rsp), %xmm2
 528      2408
 529 00dc 660F28CC 		movapd	%xmm4, %xmm1
 530 00e0 660F28C4 		movapd	%xmm4, %xmm0
 531 00e4 E8000000 		call	glVertex3d
 531      00
 532              	.LVL79:
 533 00e9 F20F106C 		movsd	8(%rsp), %xmm5
 533      2408
 534 00ef F20F100C 		movsd	(%rsp), %xmm1
 534      24
 535 00f4 660F28D5 		movapd	%xmm5, %xmm2
 536 00f8 660F28C5 		movapd	%xmm5, %xmm0
 537 00fc E8000000 		call	glVertex3d
 537      00
 538              	.LVL80:
 539 0101 F20F1024 		movsd	(%rsp), %xmm4
 539      24
 540 0106 F20F1044 		movsd	8(%rsp), %xmm0
 540      2408
 541 010c 660F28D4 		movapd	%xmm4, %xmm2
 542 0110 660F28CC 		movapd	%xmm4, %xmm1
 543 0114 E8000000 		call	glVertex3d
 543      00
 544              	.LVL81:
 545              		.loc 1 101 0
 546 0119 660FEFC9 		pxor	%xmm1, %xmm1
 547 011d F20F1015 		movsd	.LC2(%rip), %xmm2
 547      00000000 
 548 0125 660F28C1 		movapd	%xmm1, %xmm0
 549 0129 E8000000 		call	glNormal3d
 549      00
 550              	.LVL82:
 551 012e F20F1024 		movsd	(%rsp), %xmm4
 551      24
 552 0133 660F28D4 		movapd	%xmm4, %xmm2
 553 0137 660F28CC 		movapd	%xmm4, %xmm1
 554 013b 660F28C4 		movapd	%xmm4, %xmm0
 555 013f E8000000 		call	glVertex3d
 555      00
 556              	.LVL83:
 557 0144 F20F1024 		movsd	(%rsp), %xmm4
 557      24
 558 0149 F20F1044 		movsd	8(%rsp), %xmm0
 558      2408
 559 014f 660F28D4 		movapd	%xmm4, %xmm2
 560 0153 660F28CC 		movapd	%xmm4, %xmm1
 561 0157 E8000000 		call	glVertex3d
 561      00
 562              	.LVL84:
 563 015c F20F106C 		movsd	8(%rsp), %xmm5
 563      2408
 564 0162 F20F1014 		movsd	(%rsp), %xmm2
 564      24
 565 0167 660F28CD 		movapd	%xmm5, %xmm1
 566 016b 660F28C5 		movapd	%xmm5, %xmm0
 567 016f E8000000 		call	glVertex3d
 567      00
 568              	.LVL85:
 569 0174 F20F1024 		movsd	(%rsp), %xmm4
 569      24
 570 0179 F20F104C 		movsd	8(%rsp), %xmm1
 570      2408
 571 017f 660F28D4 		movapd	%xmm4, %xmm2
 572 0183 660F28C4 		movapd	%xmm4, %xmm0
 573 0187 E8000000 		call	glVertex3d
 573      00
 574              	.LVL86:
 575              		.loc 1 102 0
 576 018c 660FEFD2 		pxor	%xmm2, %xmm2
 577 0190 F20F1005 		movsd	.LC6(%rip), %xmm0
 577      00000000 
 578 0198 660F28CA 		movapd	%xmm2, %xmm1
 579 019c E8000000 		call	glNormal3d
 579      00
 580              	.LVL87:
 581 01a1 F20F106C 		movsd	8(%rsp), %xmm5
 581      2408
 582 01a7 F20F1014 		movsd	(%rsp), %xmm2
 582      24
 583 01ac 660F28CD 		movapd	%xmm5, %xmm1
 584 01b0 660F28C5 		movapd	%xmm5, %xmm0
 585 01b4 E8000000 		call	glVertex3d
 585      00
 586              	.LVL88:
 587 01b9 F20F1024 		movsd	(%rsp), %xmm4
 587      24
 588 01be F20F1044 		movsd	8(%rsp), %xmm0
 588      2408
 589 01c4 660F28D4 		movapd	%xmm4, %xmm2
 590 01c8 660F28CC 		movapd	%xmm4, %xmm1
 591 01cc E8000000 		call	glVertex3d
 591      00
 592              	.LVL89:
 593 01d1 F20F106C 		movsd	8(%rsp), %xmm5
 593      2408
 594 01d7 F20F100C 		movsd	(%rsp), %xmm1
 594      24
 595 01dc 660F28D5 		movapd	%xmm5, %xmm2
 596 01e0 660F28C5 		movapd	%xmm5, %xmm0
 597 01e4 E8000000 		call	glVertex3d
 597      00
 598              	.LVL90:
 599 01e9 F20F106C 		movsd	8(%rsp), %xmm5
 599      2408
 600 01ef 660F28D5 		movapd	%xmm5, %xmm2
 601 01f3 660F28CD 		movapd	%xmm5, %xmm1
 602 01f7 660F28C5 		movapd	%xmm5, %xmm0
 603 01fb E8000000 		call	glVertex3d
 603      00
 604              	.LVL91:
 605              		.loc 1 103 0
 606 0200 660FEFD2 		pxor	%xmm2, %xmm2
 607 0204 F20F100D 		movsd	.LC6(%rip), %xmm1
 607      00000000 
 608 020c 660F28C2 		movapd	%xmm2, %xmm0
 609 0210 E8000000 		call	glNormal3d
 609      00
 610              	.LVL92:
 611 0215 F20F106C 		movsd	8(%rsp), %xmm5
 611      2408
 612 021b F20F1014 		movsd	(%rsp), %xmm2
 612      24
 613 0220 660F28CD 		movapd	%xmm5, %xmm1
 614 0224 660F28C5 		movapd	%xmm5, %xmm0
 615 0228 E8000000 		call	glVertex3d
 615      00
 616              	.LVL93:
 617 022d F20F106C 		movsd	8(%rsp), %xmm5
 617      2408
 618 0233 660F28D5 		movapd	%xmm5, %xmm2
 619 0237 660F28CD 		movapd	%xmm5, %xmm1
 620 023b 660F28C5 		movapd	%xmm5, %xmm0
 621 023f E8000000 		call	glVertex3d
 621      00
 622              	.LVL94:
 623 0244 F20F106C 		movsd	8(%rsp), %xmm5
 623      2408
 624 024a F20F1004 		movsd	(%rsp), %xmm0
 624      24
 625 024f 660F28D5 		movapd	%xmm5, %xmm2
 626 0253 660F28CD 		movapd	%xmm5, %xmm1
 627 0257 E8000000 		call	glVertex3d
 627      00
 628              	.LVL95:
 629 025c F20F1024 		movsd	(%rsp), %xmm4
 629      24
 630 0261 F20F104C 		movsd	8(%rsp), %xmm1
 630      2408
 631 0267 660F28D4 		movapd	%xmm4, %xmm2
 632 026b 660F28C4 		movapd	%xmm4, %xmm0
 633 026f E8000000 		call	glVertex3d
 633      00
 634              	.LVL96:
 635              		.loc 1 104 0
 636 0274 660FEFC9 		pxor	%xmm1, %xmm1
 637 0278 F20F1015 		movsd	.LC6(%rip), %xmm2
 637      00000000 
 638 0280 660F28C1 		movapd	%xmm1, %xmm0
 639 0284 E8000000 		call	glNormal3d
 639      00
 640              	.LVL97:
 641 0289 F20F106C 		movsd	8(%rsp), %xmm5
 641      2408
 642 028f 660F28D5 		movapd	%xmm5, %xmm2
 643 0293 660F28CD 		movapd	%xmm5, %xmm1
 644 0297 660F28C5 		movapd	%xmm5, %xmm0
 645 029b E8000000 		call	glVertex3d
 645      00
 646              	.LVL98:
 647 02a0 F20F106C 		movsd	8(%rsp), %xmm5
 647      2408
 648 02a6 F20F100C 		movsd	(%rsp), %xmm1
 648      24
 649 02ab 660F28D5 		movapd	%xmm5, %xmm2
 650 02af 660F28C5 		movapd	%xmm5, %xmm0
 651 02b3 E8000000 		call	glVertex3d
 651      00
 652              	.LVL99:
 653 02b8 F20F1024 		movsd	(%rsp), %xmm4
 653      24
 654 02bd F20F1054 		movsd	8(%rsp), %xmm2
 654      2408
 655 02c3 660F28CC 		movapd	%xmm4, %xmm1
 656 02c7 660F28C4 		movapd	%xmm4, %xmm0
 657 02cb E8000000 		call	glVertex3d
 657      00
 658              	.LVL100:
 659 02d0 F20F104C 		movsd	8(%rsp), %xmm1
 659      2408
 660 02d6 F20F1004 		movsd	(%rsp), %xmm0
 660      24
 661 02db 660F28D1 		movapd	%xmm1, %xmm2
 662 02df E8000000 		call	glVertex3d
 662      00
 663              	.LVL101:
 664              		.loc 1 109 0
 665 02e4 4883C418 		addq	$24, %rsp
 666              		.cfi_def_cfa_offset 8
 667              		.loc 1 105 0
 668 02e8 E9000000 		jmp	glEnd
 668      00
 669              	.LVL102:
 670              		.cfi_endproc
 671              	.LFE376:
 673              		.section	.text.unlikely._Z13glutSolidCubed
 674              	.LCOLDE8:
 675              		.section	.text._Z13glutSolidCubed
 676              	.LHOTE8:
 677              		.section	.text.unlikely._Z15glutSolidSpheredii,"ax",@progbits
 678              	.LCOLDB9:
 679              		.section	.text._Z15glutSolidSpheredii,"ax",@progbits
 680              	.LHOTB9:
 681              		.p2align 4,,15
 682              		.globl	_Z15glutSolidSpheredii
 684              	_Z15glutSolidSpheredii:
 685              	.LFB378:
 686              		.loc 1 168 0
 687              		.cfi_startproc
 688              	.LVL103:
 689 0000 4156     		pushq	%r14
 690              		.cfi_def_cfa_offset 16
 691              		.cfi_offset 14, -16
 692 0002 4155     		pushq	%r13
 693              		.cfi_def_cfa_offset 24
 694              		.cfi_offset 13, -24
 695 0004 4189F6   		movl	%esi, %r14d
 696 0007 4154     		pushq	%r12
 697              		.cfi_def_cfa_offset 32
 698              		.cfi_offset 12, -32
 699 0009 55       		pushq	%rbp
 700              		.cfi_def_cfa_offset 40
 701              		.cfi_offset 6, -40
 702              		.loc 1 181 0
 703 000a 89FA     		movl	%edi, %edx
 704              		.loc 1 168 0
 705 000c 53       		pushq	%rbx
 706              		.cfi_def_cfa_offset 48
 707              		.cfi_offset 3, -48
 708 000d 89FD     		movl	%edi, %ebp
 709              		.loc 1 181 0
 710 000f F7DA     		negl	%edx
 711              		.loc 1 168 0
 712 0011 4883EC70 		subq	$112, %rsp
 713              		.cfi_def_cfa_offset 160
 714              		.loc 1 181 0
 715 0015 488D7424 		leaq	80(%rsp), %rsi
 715      50
 716              	.LVL104:
 717 001a 488D7C24 		leaq	72(%rsp), %rdi
 717      48
 718              	.LVL105:
 719              		.loc 1 168 0
 720 001f F20F1144 		movsd	%xmm0, 24(%rsp)
 720      2418
 721 0025 64488B04 		movq	%fs:40, %rax
 721      25280000 
 721      00
 722 002e 48894424 		movq	%rax, 104(%rsp)
 722      68
 723 0033 31C0     		xorl	%eax, %eax
 724              		.loc 1 181 0
 725 0035 E8000000 		call	_ZL14fghCircleTablePPdS0_i
 725      00
 726              	.LVL106:
 727              		.loc 1 182 0
 728 003a 438D1436 		leal	(%r14,%r14), %edx
 729 003e 488D7424 		leaq	96(%rsp), %rsi
 729      60
 730 0043 488D7C24 		leaq	88(%rsp), %rdi
 730      58
 731 0048 E8000000 		call	_ZL14fghCircleTablePPdS0_i
 731      00
 732              	.LVL107:
 733              		.loc 1 187 0
 734 004d 4585F6   		testl	%r14d, %r14d
 735 0050 488B4424 		movq	96(%rsp), %rax
 735      60
 736 0055 0F8E6B03 		jle	.L50
 736      0000
 737 005b F20F1060 		movsd	8(%rax), %xmm4
 737      08
 738              		.loc 1 189 0
 739 0060 488B5424 		movq	88(%rsp), %rdx
 739      58
 740 0065 B8080000 		movl	$8, %eax
 740      00
 741              		.loc 1 187 0
 742 006a F20F1164 		movsd	%xmm4, 40(%rsp)
 742      2428
 743              	.LVL108:
 744              	.L37:
 745              		.loc 1 189 0 discriminator 4
 746 0070 F20F1024 		movsd	(%rdx,%rax), %xmm4
 746      02
 747              	.LVL109:
 748              		.loc 1 191 0 discriminator 4
 749 0075 BF060000 		movl	$6, %edi
 749      00
 750              		.loc 1 189 0 discriminator 4
 751 007a F20F1164 		movsd	%xmm4, 16(%rsp)
 751      2410
 752              	.LVL110:
 753              		.loc 1 191 0 discriminator 4
 754 0080 E8000000 		call	glBegin
 754      00
 755              	.LVL111:
 756              		.loc 1 193 0 discriminator 4
 757 0085 660FEFC9 		pxor	%xmm1, %xmm1
 758 0089 F20F1015 		movsd	.LC2(%rip), %xmm2
 758      00000000 
 759 0091 660F28C1 		movapd	%xmm1, %xmm0
 760 0095 E8000000 		call	glNormal3d
 760      00
 761              	.LVL112:
 762              		.loc 1 194 0 discriminator 4
 763 009a 660FEFC9 		pxor	%xmm1, %xmm1
 764 009e F20F1054 		movsd	24(%rsp), %xmm2
 764      2418
 765 00a4 660F28C1 		movapd	%xmm1, %xmm0
 766 00a8 E8000000 		call	glVertex3d
 766      00
 767              	.LVL113:
 768              		.loc 1 196 0 discriminator 4
 769 00ad 85ED     		testl	%ebp, %ebp
 770 00af 0F882703 		js	.L25
 770      0000
 771 00b5 F20F1064 		movsd	24(%rsp), %xmm4
 771      2418
 772 00bb 4863DD   		movslq	%ebp, %rbx
 773 00be 48C1E303 		salq	$3, %rbx
 774 00c2 F20F5964 		mulsd	40(%rsp), %xmm4
 774      2428
 775 00c8 F20F1164 		movsd	%xmm4, 48(%rsp)
 775      2430
 776              	.LVL114:
 777 00ce 6690     		.p2align 4,,10
 778              		.p2align 3
 779              	.L27:
 780              		.loc 1 198 0 discriminator 2
 781 00d0 488B4424 		movq	80(%rsp), %rax
 781      50
 782 00d5 F20F104C 		movsd	16(%rsp), %xmm1
 782      2410
 783 00db F20F1054 		movsd	40(%rsp), %xmm2
 783      2428
 784 00e1 F20F1004 		movsd	(%rax,%rbx), %xmm0
 784      18
 785 00e6 488B4424 		movq	72(%rsp), %rax
 785      48
 786 00eb F20F59C1 		mulsd	%xmm1, %xmm0
 787 00ef F20F590C 		mulsd	(%rax,%rbx), %xmm1
 787      18
 788 00f4 E8000000 		call	glNormal3d
 788      00
 789              	.LVL115:
 790              		.loc 1 199 0 discriminator 2
 791 00f9 488B4424 		movq	72(%rsp), %rax
 791      48
 792 00fe F20F1044 		movsd	16(%rsp), %xmm0
 792      2410
 793 0104 F20F1074 		movsd	24(%rsp), %xmm6
 793      2418
 794 010a F20F1054 		movsd	48(%rsp), %xmm2
 794      2430
 795 0110 F20F100C 		movsd	(%rax,%rbx), %xmm1
 795      18
 796 0115 488B4424 		movq	80(%rsp), %rax
 796      50
 797 011a F20F59C8 		mulsd	%xmm0, %xmm1
 798 011e F20F5904 		mulsd	(%rax,%rbx), %xmm0
 798      18
 799 0123 4883EB08 		subq	$8, %rbx
 800 0127 F20F59CE 		mulsd	%xmm6, %xmm1
 801 012b F20F59C6 		mulsd	%xmm6, %xmm0
 802 012f E8000000 		call	glVertex3d
 802      00
 803              	.LVL116:
 804              		.loc 1 196 0 discriminator 2
 805 0134 4883FBF8 		cmpq	$-8, %rbx
 806 0138 7596     		jne	.L27
 807              		.loc 1 206 0
 808 013a 4183EE01 		subl	$1, %r14d
 809              	.LVL117:
 810              		.loc 1 202 0
 811 013e E8000000 		call	glEnd
 811      00
 812              	.LVL118:
 813              		.loc 1 206 0
 814 0143 4183FE01 		cmpl	$1, %r14d
 815 0147 0F8EE902 		jle	.L51
 815      0000
 816              	.LVL119:
 817              	.L39:
 818              		.loc 1 189 0
 819 014d 41BC1000 		movl	$16, %r12d
 819      0000
 820 0153 41BD0100 		movl	$1, %r13d
 820      0000
 821              	.LVL120:
 822 0159 0F1F8000 		.p2align 4,,10
 822      000000
 823              		.p2align 3
 824              	.L30:
 825              		.loc 1 208 0
 826 0160 488B4424 		movq	96(%rsp), %rax
 826      60
 827              		.loc 1 211 0
 828 0165 BF080000 		movl	$8, %edi
 828      00
 829              		.loc 1 208 0
 830 016a F2420F10 		movsd	(%rax,%r12), %xmm5
 830      2C20
 831              		.loc 1 209 0
 832 0170 488B4424 		movq	88(%rsp), %rax
 832      58
 833              		.loc 1 208 0
 834 0175 F20F116C 		movsd	%xmm5, 32(%rsp)
 834      2420
 835              	.LVL121:
 836              		.loc 1 209 0
 837 017b F2420F10 		movsd	(%rax,%r12), %xmm5
 837      2C20
 838              	.LVL122:
 839 0181 F20F116C 		movsd	%xmm5, 8(%rsp)
 839      2408
 840              	.LVL123:
 841              		.loc 1 211 0
 842 0187 E8000000 		call	glBegin
 842      00
 843              	.LVL124:
 844              		.loc 1 213 0
 845 018c 85ED     		testl	%ebp, %ebp
 846 018e 0F88F800 		js	.L31
 846      0000
 847 0194 F20F106C 		movsd	24(%rsp), %xmm5
 847      2418
 848              		.loc 1 213 0 is_stmt 0 discriminator 2
 849 019a 31DB     		xorl	%ebx, %ebx
 850 019c F20F1064 		movsd	40(%rsp), %xmm4
 850      2428
 851 01a2 F20F59E5 		mulsd	%xmm5, %xmm4
 852 01a6 F20F1164 		movsd	%xmm4, 48(%rsp)
 852      2430
 853 01ac F20F1064 		movsd	32(%rsp), %xmm4
 853      2420
 854 01b2 F20F59E5 		mulsd	%xmm5, %xmm4
 855 01b6 F20F1164 		movsd	%xmm4, 56(%rsp)
 855      2438
 856              	.LVL125:
 857 01bc 0F1F4000 		.p2align 4,,10
 858              		.p2align 3
 859              	.L32:
 860              		.loc 1 215 0 is_stmt 1 discriminator 2
 861 01c0 488B4424 		movq	80(%rsp), %rax
 861      50
 862 01c5 F20F104C 		movsd	8(%rsp), %xmm1
 862      2408
 863 01cb F20F1054 		movsd	32(%rsp), %xmm2
 863      2420
 864 01d1 F20F1004 		movsd	(%rax,%rbx,8), %xmm0
 864      D8
 865 01d6 488B4424 		movq	72(%rsp), %rax
 865      48
 866 01db F20F59C1 		mulsd	%xmm1, %xmm0
 867 01df F20F590C 		mulsd	(%rax,%rbx,8), %xmm1
 867      D8
 868 01e4 E8000000 		call	glNormal3d
 868      00
 869              	.LVL126:
 870              		.loc 1 216 0 discriminator 2
 871 01e9 488B4424 		movq	72(%rsp), %rax
 871      48
 872 01ee F20F1044 		movsd	8(%rsp), %xmm0
 872      2408
 873 01f4 F20F105C 		movsd	24(%rsp), %xmm3
 873      2418
 874 01fa F20F1054 		movsd	56(%rsp), %xmm2
 874      2438
 875 0200 F20F100C 		movsd	(%rax,%rbx,8), %xmm1
 875      D8
 876 0205 488B4424 		movq	80(%rsp), %rax
 876      50
 877 020a F20F59C8 		mulsd	%xmm0, %xmm1
 878 020e F20F5904 		mulsd	(%rax,%rbx,8), %xmm0
 878      D8
 879 0213 F20F59CB 		mulsd	%xmm3, %xmm1
 880 0217 F20F59C3 		mulsd	%xmm3, %xmm0
 881 021b E8000000 		call	glVertex3d
 881      00
 882              	.LVL127:
 883              		.loc 1 217 0 discriminator 2
 884 0220 488B4424 		movq	80(%rsp), %rax
 884      50
 885 0225 F20F104C 		movsd	16(%rsp), %xmm1
 885      2410
 886 022b F20F1054 		movsd	40(%rsp), %xmm2
 886      2428
 887 0231 F20F1004 		movsd	(%rax,%rbx,8), %xmm0
 887      D8
 888 0236 488B4424 		movq	72(%rsp), %rax
 888      48
 889 023b F20F59C1 		mulsd	%xmm1, %xmm0
 890 023f F20F590C 		mulsd	(%rax,%rbx,8), %xmm1
 890      D8
 891 0244 E8000000 		call	glNormal3d
 891      00
 892              	.LVL128:
 893              		.loc 1 218 0 discriminator 2
 894 0249 488B4424 		movq	72(%rsp), %rax
 894      48
 895 024e F20F1044 		movsd	16(%rsp), %xmm0
 895      2410
 896 0254 F20F105C 		movsd	24(%rsp), %xmm3
 896      2418
 897 025a F20F1054 		movsd	48(%rsp), %xmm2
 897      2430
 898 0260 F20F100C 		movsd	(%rax,%rbx,8), %xmm1
 898      D8
 899 0265 488B4424 		movq	80(%rsp), %rax
 899      50
 900 026a F20F59C8 		mulsd	%xmm0, %xmm1
 901 026e F20F5904 		mulsd	(%rax,%rbx,8), %xmm0
 901      D8
 902 0273 4883C301 		addq	$1, %rbx
 903              	.LVL129:
 904 0277 F20F59CB 		mulsd	%xmm3, %xmm1
 905 027b F20F59C3 		mulsd	%xmm3, %xmm0
 906 027f E8000000 		call	glVertex3d
 906      00
 907              	.LVL130:
 908              		.loc 1 213 0 discriminator 2
 909 0284 39DD     		cmpl	%ebx, %ebp
 910 0286 0F8D34FF 		jge	.L32
 910      FFFF
 911              	.L31:
 912              		.loc 1 221 0
 913 028c E8000000 		call	glEnd
 913      00
 914              	.LVL131:
 915              		.loc 1 206 0
 916 0291 4183C501 		addl	$1, %r13d
 917              	.LVL132:
 918              		.loc 1 208 0
 919 0295 F20F1064 		movsd	32(%rsp), %xmm4
 919      2420
 920              		.loc 1 209 0
 921 029b F20F106C 		movsd	8(%rsp), %xmm5
 921      2408
 922 02a1 4983C408 		addq	$8, %r12
 923              	.LVL133:
 924              		.loc 1 206 0
 925 02a5 4539F5   		cmpl	%r14d, %r13d
 926              		.loc 1 208 0
 927 02a8 F20F1164 		movsd	%xmm4, 40(%rsp)
 927      2428
 928              	.LVL134:
 929              		.loc 1 209 0
 930 02ae F20F116C 		movsd	%xmm5, 16(%rsp)
 930      2410
 931              		.loc 1 206 0
 932 02b4 0F8CA6FE 		jl	.L30
 932      FFFF
 933              		.loc 1 229 0
 934 02ba BF060000 		movl	$6, %edi
 934      00
 935 02bf E8000000 		call	glBegin
 935      00
 936              	.LVL135:
 937              		.loc 1 231 0
 938 02c4 660FEFC9 		pxor	%xmm1, %xmm1
 939 02c8 F20F1015 		movsd	.LC6(%rip), %xmm2
 939      00000000 
 940 02d0 660F28C1 		movapd	%xmm1, %xmm0
 941 02d4 E8000000 		call	glNormal3d
 941      00
 942              	.LVL136:
 943              		.loc 1 232 0
 944 02d9 F20F1015 		movsd	.LC5(%rip), %xmm2
 944      00000000 
 945 02e1 F20F1064 		movsd	24(%rsp), %xmm4
 945      2418
 946 02e7 660FEFC9 		pxor	%xmm1, %xmm1
 947 02eb 660F57D4 		xorpd	%xmm4, %xmm2
 948 02ef 660F28C1 		movapd	%xmm1, %xmm0
 949 02f3 E8000000 		call	glVertex3d
 949      00
 950              	.LVL137:
 951              		.loc 1 234 0
 952 02f8 85ED     		testl	%ebp, %ebp
 953 02fa 787C     		js	.L34
 954              	.LVL138:
 955              	.L33:
 956 02fc F20F1064 		movsd	24(%rsp), %xmm4
 956      2418
 957              		.loc 1 232 0 discriminator 2
 958 0302 31DB     		xorl	%ebx, %ebx
 959 0304 F20F5964 		mulsd	32(%rsp), %xmm4
 959      2420
 960 030a F20F1164 		movsd	%xmm4, 56(%rsp)
 960      2438
 961              	.LVL139:
 962              		.p2align 4,,10
 963              		.p2align 3
 964              	.L36:
 965              		.loc 1 236 0 discriminator 2
 966 0310 488B4424 		movq	80(%rsp), %rax
 966      50
 967 0315 F20F104C 		movsd	8(%rsp), %xmm1
 967      2408
 968 031b F20F1054 		movsd	32(%rsp), %xmm2
 968      2420
 969 0321 F20F1004 		movsd	(%rax,%rbx,8), %xmm0
 969      D8
 970 0326 488B4424 		movq	72(%rsp), %rax
 970      48
 971 032b F20F59C1 		mulsd	%xmm1, %xmm0
 972 032f F20F590C 		mulsd	(%rax,%rbx,8), %xmm1
 972      D8
 973 0334 E8000000 		call	glNormal3d
 973      00
 974              	.LVL140:
 975              		.loc 1 237 0 discriminator 2
 976 0339 488B4424 		movq	72(%rsp), %rax
 976      48
 977 033e F20F1044 		movsd	8(%rsp), %xmm0
 977      2408
 978 0344 F20F107C 		movsd	24(%rsp), %xmm7
 978      2418
 979 034a F20F1054 		movsd	56(%rsp), %xmm2
 979      2438
 980 0350 F20F100C 		movsd	(%rax,%rbx,8), %xmm1
 980      D8
 981 0355 488B4424 		movq	80(%rsp), %rax
 981      50
 982 035a F20F59C8 		mulsd	%xmm0, %xmm1
 983 035e F20F5904 		mulsd	(%rax,%rbx,8), %xmm0
 983      D8
 984 0363 4883C301 		addq	$1, %rbx
 985              	.LVL141:
 986 0367 F20F59CF 		mulsd	%xmm7, %xmm1
 987 036b F20F59C7 		mulsd	%xmm7, %xmm0
 988 036f E8000000 		call	glVertex3d
 988      00
 989              	.LVL142:
 990              		.loc 1 234 0 discriminator 2
 991 0374 39DD     		cmpl	%ebx, %ebp
 992 0376 7D98     		jge	.L36
 993              	.LVL143:
 994              	.L34:
 995              		.loc 1 240 0
 996 0378 E8000000 		call	glEnd
 996      00
 997              	.LVL144:
 998              		.loc 1 244 0
 999 037d 488B7C24 		movq	72(%rsp), %rdi
 999      48
 1000 0382 E8000000 		call	free
 1000      00
 1001              	.LVL145:
 1002              		.loc 1 245 0
 1003 0387 488B7C24 		movq	80(%rsp), %rdi
 1003      50
 1004 038c E8000000 		call	free
 1004      00
 1005              	.LVL146:
 1006              		.loc 1 246 0
 1007 0391 488B7C24 		movq	88(%rsp), %rdi
 1007      58
 1008 0396 E8000000 		call	free
 1008      00
 1009              	.LVL147:
 1010              		.loc 1 247 0
 1011 039b 488B7C24 		movq	96(%rsp), %rdi
 1011      60
 1012 03a0 E8000000 		call	free
 1012      00
 1013              	.LVL148:
 1014              		.loc 1 248 0
 1015 03a5 488B4424 		movq	104(%rsp), %rax
 1015      68
 1016 03aa 64483304 		xorq	%fs:40, %rax
 1016      25280000 
 1016      00
 1017 03b3 0F85D800 		jne	.L52
 1017      0000
 1018 03b9 4883C470 		addq	$112, %rsp
 1019              		.cfi_remember_state
 1020              		.cfi_def_cfa_offset 48
 1021 03bd 5B       		popq	%rbx
 1022              		.cfi_def_cfa_offset 40
 1023 03be 5D       		popq	%rbp
 1024              		.cfi_def_cfa_offset 32
 1025              	.LVL149:
 1026 03bf 415C     		popq	%r12
 1027              		.cfi_def_cfa_offset 24
 1028 03c1 415D     		popq	%r13
 1029              		.cfi_def_cfa_offset 16
 1030 03c3 415E     		popq	%r14
 1031              		.cfi_def_cfa_offset 8
 1032 03c5 C3       		ret
 1033              	.LVL150:
 1034              	.L50:
 1035              		.cfi_restore_state
 1036              		.loc 1 187 0
 1037 03c6 F20F1020 		movsd	(%rax), %xmm4
 1038              		.loc 1 189 0
 1039 03ca 488B5424 		movq	88(%rsp), %rdx
 1039      58
 1040 03cf 31C0     		xorl	%eax, %eax
 1041              		.loc 1 187 0
 1042 03d1 F20F1164 		movsd	%xmm4, 40(%rsp)
 1042      2428
 1043              	.LVL151:
 1044 03d7 E994FCFF 		jmp	.L37
 1044      FF
 1045              	.LVL152:
 1046              	.L25:
 1047              		.loc 1 206 0
 1048 03dc 4183EE01 		subl	$1, %r14d
 1049              	.LVL153:
 1050              		.loc 1 202 0
 1051 03e0 E8000000 		call	glEnd
 1051      00
 1052              	.LVL154:
 1053              		.loc 1 206 0
 1054 03e5 4183FE01 		cmpl	$1, %r14d
 1055 03e9 0F8F5EFD 		jg	.L39
 1055      FFFF
 1056              	.LVL155:
 1057              		.loc 1 229 0
 1058 03ef BF060000 		movl	$6, %edi
 1058      00
 1059 03f4 E8000000 		call	glBegin
 1059      00
 1060              	.LVL156:
 1061              		.loc 1 231 0
 1062 03f9 660FEFC9 		pxor	%xmm1, %xmm1
 1063 03fd F20F1015 		movsd	.LC6(%rip), %xmm2
 1063      00000000 
 1064 0405 660F28C1 		movapd	%xmm1, %xmm0
 1065 0409 E8000000 		call	glNormal3d
 1065      00
 1066              	.LVL157:
 1067              		.loc 1 232 0
 1068 040e F20F1015 		movsd	.LC5(%rip), %xmm2
 1068      00000000 
 1069 0416 F20F1064 		movsd	24(%rsp), %xmm4
 1069      2418
 1070 041c 660FEFC9 		pxor	%xmm1, %xmm1
 1071 0420 660F57E2 		xorpd	%xmm2, %xmm4
 1072 0424 660F28C1 		movapd	%xmm1, %xmm0
 1073 0428 660F28D4 		movapd	%xmm4, %xmm2
 1074 042c E8000000 		call	glVertex3d
 1074      00
 1075              	.LVL158:
 1076 0431 E942FFFF 		jmp	.L34
 1076      FF
 1077              	.LVL159:
 1078              	.L51:
 1079              		.loc 1 229 0
 1080 0436 BF060000 		movl	$6, %edi
 1080      00
 1081 043b E8000000 		call	glBegin
 1081      00
 1082              	.LVL160:
 1083              		.loc 1 231 0
 1084 0440 660FEFC9 		pxor	%xmm1, %xmm1
 1085 0444 F20F1015 		movsd	.LC6(%rip), %xmm2
 1085      00000000 
 1086 044c 660F28C1 		movapd	%xmm1, %xmm0
 1087 0450 E8000000 		call	glNormal3d
 1087      00
 1088              	.LVL161:
 1089              		.loc 1 232 0
 1090 0455 F20F1064 		movsd	24(%rsp), %xmm4
 1090      2418
 1091 045b F20F1015 		movsd	.LC5(%rip), %xmm2
 1091      00000000 
 1092 0463 660FEFC9 		pxor	%xmm1, %xmm1
 1093 0467 660F57D4 		xorpd	%xmm4, %xmm2
 1094 046b 660F28C1 		movapd	%xmm1, %xmm0
 1095 046f E8000000 		call	glVertex3d
 1095      00
 1096              	.LVL162:
 1097              		.loc 1 189 0
 1098 0474 F20F1064 		movsd	16(%rsp), %xmm4
 1098      2410
 1099 047a F20F1164 		movsd	%xmm4, 8(%rsp)
 1099      2408
 1100              		.loc 1 232 0
 1101 0480 F20F1064 		movsd	40(%rsp), %xmm4
 1101      2428
 1102 0486 F20F1164 		movsd	%xmm4, 32(%rsp)
 1102      2420
 1103 048c E96BFEFF 		jmp	.L33
 1103      FF
 1104              	.LVL163:
 1105              	.L52:
 1106              		.loc 1 248 0
 1107 0491 E8000000 		call	__stack_chk_fail
 1107      00
 1108              	.LVL164:
 1109              		.cfi_endproc
 1110              	.LFE378:
 1112              		.section	.text.unlikely._Z15glutSolidSpheredii
 1113              	.LCOLDE9:
 1114              		.section	.text._Z15glutSolidSpheredii
 1115              	.LHOTE9:
 1116              		.section	.text.unlikely._Z14glutWireSpheredii,"ax",@progbits
 1117              	.LCOLDB10:
 1118              		.section	.text._Z14glutWireSpheredii,"ax",@progbits
 1119              	.LHOTB10:
 1120              		.p2align 4,,15
 1121              		.globl	_Z14glutWireSpheredii
 1123              	_Z14glutWireSpheredii:
 1124              	.LFB379:
 1125              		.loc 1 254 0
 1126              		.cfi_startproc
 1127              	.LVL165:
 1128 0000 4156     		pushq	%r14
 1129              		.cfi_def_cfa_offset 16
 1130              		.cfi_offset 14, -16
 1131 0002 4155     		pushq	%r13
 1132              		.cfi_def_cfa_offset 24
 1133              		.cfi_offset 13, -24
 1134              		.loc 1 267 0
 1135 0004 89FA     		movl	%edi, %edx
 1136              		.loc 1 254 0
 1137 0006 4154     		pushq	%r12
 1138              		.cfi_def_cfa_offset 32
 1139              		.cfi_offset 12, -32
 1140 0008 55       		pushq	%rbp
 1141              		.cfi_def_cfa_offset 40
 1142              		.cfi_offset 6, -40
 1143 0009 4189F4   		movl	%esi, %r12d
 1144 000c 53       		pushq	%rbx
 1145              		.cfi_def_cfa_offset 48
 1146              		.cfi_offset 3, -48
 1147 000d 89FD     		movl	%edi, %ebp
 1148              		.loc 1 267 0
 1149 000f F7DA     		negl	%edx
 1150              		.loc 1 254 0
 1151 0011 4883EC60 		subq	$96, %rsp
 1152              		.cfi_def_cfa_offset 144
 1153              		.loc 1 267 0
 1154 0015 488D7424 		leaq	64(%rsp), %rsi
 1154      40
 1155              	.LVL166:
 1156 001a 488D7C24 		leaq	56(%rsp), %rdi
 1156      38
 1157              	.LVL167:
 1158              		.loc 1 254 0
 1159 001f F20F1104 		movsd	%xmm0, (%rsp)
 1159      24
 1160 0024 64488B04 		movq	%fs:40, %rax
 1160      25280000 
 1160      00
 1161 002d 48894424 		movq	%rax, 88(%rsp)
 1161      58
 1162 0032 31C0     		xorl	%eax, %eax
 1163              		.loc 1 267 0
 1164 0034 E8000000 		call	_ZL14fghCircleTablePPdS0_i
 1164      00
 1165              	.LVL168:
 1166              		.loc 1 268 0
 1167 0039 438D1424 		leal	(%r12,%r12), %edx
 1168 003d 488D7424 		leaq	80(%rsp), %rsi
 1168      50
 1169 0042 488D7C24 		leaq	72(%rsp), %rdi
 1169      48
 1170 0047 E8000000 		call	_ZL14fghCircleTablePPdS0_i
 1170      00
 1171              	.LVL169:
 1172              		.loc 1 272 0
 1173 004c 4183FC01 		cmpl	$1, %r12d
 1174 0050 0F8EF100 		jle	.L57
 1174      0000
 1175 0056 418D4424 		leal	-2(%r12), %eax
 1175      FE
 1176 005b 41BD0800 		movl	$8, %r13d
 1176      0000
 1177 0061 4C8D34C5 		leaq	16(,%rax,8), %r14
 1177      10000000 
 1178              	.LVL170:
 1179 0069 0F1F8000 		.p2align 4,,10
 1179      000000
 1180              		.p2align 3
 1181              	.L58:
 1182              		.loc 1 274 0
 1183 0070 488B4424 		movq	80(%rsp), %rax
 1183      50
 1184              		.loc 1 277 0
 1185 0075 BF020000 		movl	$2, %edi
 1185      00
 1186              		.loc 1 274 0
 1187 007a F2420F10 		movsd	(%rax,%r13), %xmm7
 1187      3C28
 1188              		.loc 1 275 0
 1189 0080 488B4424 		movq	72(%rsp), %rax
 1189      48
 1190              		.loc 1 274 0
 1191 0085 F20F117C 		movsd	%xmm7, 24(%rsp)
 1191      2418
 1192              	.LVL171:
 1193              		.loc 1 275 0
 1194 008b F2420F10 		movsd	(%rax,%r13), %xmm7
 1194      3C28
 1195              	.LVL172:
 1196 0091 F20F117C 		movsd	%xmm7, 32(%rsp)
 1196      2420
 1197              	.LVL173:
 1198              		.loc 1 277 0
 1199 0097 E8000000 		call	glBegin
 1199      00
 1200              	.LVL174:
 1201              		.loc 1 279 0
 1202 009c 85ED     		testl	%ebp, %ebp
 1203 009e 0F889100 		js	.L59
 1203      0000
 1204 00a4 F20F107C 		movsd	24(%rsp), %xmm7
 1204      2418
 1205              		.loc 1 279 0 is_stmt 0 discriminator 2
 1206 00aa 31DB     		xorl	%ebx, %ebx
 1207 00ac F20F593C 		mulsd	(%rsp), %xmm7
 1207      24
 1208 00b1 F20F117C 		movsd	%xmm7, 40(%rsp)
 1208      2428
 1209              	.LVL175:
 1210 00b7 660F1F84 		.p2align 4,,10
 1210      00000000 
 1210      00
 1211              		.p2align 3
 1212              	.L60:
 1213              		.loc 1 281 0 is_stmt 1 discriminator 2
 1214 00c0 488B4424 		movq	64(%rsp), %rax
 1214      40
 1215              		.loc 1 284 0 discriminator 2
 1216 00c5 F20F1054 		movsd	24(%rsp), %xmm2
 1216      2418
 1217              		.loc 1 281 0 discriminator 2
 1218 00cb F20F101C 		movsd	(%rax,%rbx,8), %xmm3
 1218      D8
 1219              	.LVL176:
 1220              		.loc 1 282 0 discriminator 2
 1221 00d0 488B4424 		movq	56(%rsp), %rax
 1221      38
 1222              		.loc 1 284 0 discriminator 2
 1223 00d5 660F28C3 		movapd	%xmm3, %xmm0
 1224 00d9 F20F115C 		movsd	%xmm3, 8(%rsp)
 1224      2408
 1225              		.loc 1 282 0 discriminator 2
 1226 00df F20F1024 		movsd	(%rax,%rbx,8), %xmm4
 1226      D8
 1227              	.LVL177:
 1228 00e4 4883C301 		addq	$1, %rbx
 1229              	.LVL178:
 1230              		.loc 1 284 0 discriminator 2
 1231 00e8 660F28CC 		movapd	%xmm4, %xmm1
 1232 00ec F20F1164 		movsd	%xmm4, 16(%rsp)
 1232      2410
 1233 00f2 E8000000 		call	glNormal3d
 1233      00
 1234              	.LVL179:
 1235              		.loc 1 285 0 discriminator 2
 1236 00f7 F20F1064 		movsd	16(%rsp), %xmm4
 1236      2410
 1237 00fd F20F105C 		movsd	8(%rsp), %xmm3
 1237      2408
 1238 0103 F20F107C 		movsd	32(%rsp), %xmm7
 1238      2420
 1239 0109 660F28CC 		movapd	%xmm4, %xmm1
 1240 010d 660F28C3 		movapd	%xmm3, %xmm0
 1241 0111 F20F59CF 		mulsd	%xmm7, %xmm1
 1242 0115 F20F59C7 		mulsd	%xmm7, %xmm0
 1243 0119 F20F102C 		movsd	(%rsp), %xmm5
 1243      24
 1244 011e F20F1054 		movsd	40(%rsp), %xmm2
 1244      2428
 1245 0124 F20F59CD 		mulsd	%xmm5, %xmm1
 1246 0128 F20F59C5 		mulsd	%xmm5, %xmm0
 1247 012c E8000000 		call	glVertex3d
 1247      00
 1248              	.LVL180:
 1249              		.loc 1 279 0 discriminator 2
 1250 0131 39DD     		cmpl	%ebx, %ebp
 1251 0133 7D8B     		jge	.L60
 1252              	.LVL181:
 1253              	.L59:
 1254 0135 4983C508 		addq	$8, %r13
 1255              		.loc 1 288 0
 1256 0139 E8000000 		call	glEnd
 1256      00
 1257              	.LVL182:
 1258              		.loc 1 272 0
 1259 013e 4D39F5   		cmpq	%r14, %r13
 1260 0141 0F8529FF 		jne	.L58
 1260      FFFF
 1261              	.LVL183:
 1262              	.L57:
 1263              		.loc 1 293 0
 1264 0147 85ED     		testl	%ebp, %ebp
 1265 0149 0F8ECB00 		jle	.L62
 1265      0000
 1266 014f 8D45FF   		leal	-1(%rbp), %eax
 1267 0152 31ED     		xorl	%ebp, %ebp
 1268              	.LVL184:
 1269 0154 4C8D2CC5 		leaq	8(,%rax,8), %r13
 1269      08000000 
 1270              	.LVL185:
 1271 015c 0F1F4000 		.p2align 4,,10
 1272              		.p2align 3
 1273              	.L63:
 1274              		.loc 1 295 0
 1275 0160 BF030000 		movl	$3, %edi
 1275      00
 1276              		.loc 1 297 0
 1277 0165 31DB     		xorl	%ebx, %ebx
 1278              		.loc 1 295 0
 1279 0167 E8000000 		call	glBegin
 1279      00
 1280              	.LVL186:
 1281              		.loc 1 297 0
 1282 016c 4585E4   		testl	%r12d, %r12d
 1283 016f 0F889300 		js	.L64
 1283      0000
 1284              	.LVL187:
 1285              		.p2align 4,,10
 1286 0175 0F1F00   		.p2align 3
 1287              	.L67:
 1288              		.loc 1 299 0 discriminator 2
 1289 0178 488B4424 		movq	72(%rsp), %rax
 1289      48
 1290 017d F20F101C 		movsd	(%rax,%rbx,8), %xmm3
 1290      D8
 1291 0182 488B4424 		movq	64(%rsp), %rax
 1291      40
 1292 0187 F20F1024 		movsd	(%rax,%rbp), %xmm4
 1292      28
 1293              		.loc 1 300 0 discriminator 2
 1294 018c 488B4424 		movq	56(%rsp), %rax
 1294      38
 1295              		.loc 1 299 0 discriminator 2
 1296 0191 F20F59E3 		mulsd	%xmm3, %xmm4
 1297              	.LVL188:
 1298              		.loc 1 300 0 discriminator 2
 1299 0195 F20F591C 		mulsd	(%rax,%rbp), %xmm3
 1299      28
 1300              	.LVL189:
 1301              		.loc 1 301 0 discriminator 2
 1302 019a 488B4424 		movq	80(%rsp), %rax
 1302      50
 1303 019f F20F102C 		movsd	(%rax,%rbx,8), %xmm5
 1303      D8
 1304              	.LVL190:
 1305 01a4 4883C301 		addq	$1, %rbx
 1306              	.LVL191:
 1307              		.loc 1 303 0 discriminator 2
 1308 01a8 660F28C4 		movapd	%xmm4, %xmm0
 1309 01ac F20F1164 		movsd	%xmm4, 8(%rsp)
 1309      2408
 1310 01b2 660F28D5 		movapd	%xmm5, %xmm2
 1311 01b6 F20F116C 		movsd	%xmm5, 24(%rsp)
 1311      2418
 1312 01bc 660F28CB 		movapd	%xmm3, %xmm1
 1313 01c0 F20F115C 		movsd	%xmm3, 16(%rsp)
 1313      2410
 1314 01c6 E8000000 		call	glNormal3d
 1314      00
 1315              	.LVL192:
 1316              		.loc 1 304 0 discriminator 2
 1317 01cb F20F1034 		movsd	(%rsp), %xmm6
 1317      24
 1318 01d0 F20F1064 		movsd	8(%rsp), %xmm4
 1318      2408
 1319 01d6 F20F106C 		movsd	24(%rsp), %xmm5
 1319      2418
 1320 01dc F20F105C 		movsd	16(%rsp), %xmm3
 1320      2410
 1321 01e2 F20F59E6 		mulsd	%xmm6, %xmm4
 1322 01e6 660F28D5 		movapd	%xmm5, %xmm2
 1323 01ea 660F28CB 		movapd	%xmm3, %xmm1
 1324 01ee F20F59D6 		mulsd	%xmm6, %xmm2
 1325 01f2 F20F59CE 		mulsd	%xmm6, %xmm1
 1326 01f6 660F28C4 		movapd	%xmm4, %xmm0
 1327 01fa E8000000 		call	glVertex3d
 1327      00
 1328              	.LVL193:
 1329              		.loc 1 297 0 discriminator 2
 1330 01ff 4139DC   		cmpl	%ebx, %r12d
 1331 0202 0F8D70FF 		jge	.L67
 1331      FFFF
 1332              	.LVL194:
 1333              	.L64:
 1334 0208 4883C508 		addq	$8, %rbp
 1335              		.loc 1 307 0
 1336 020c E8000000 		call	glEnd
 1336      00
 1337              	.LVL195:
 1338              		.loc 1 293 0
 1339 0211 4C39ED   		cmpq	%r13, %rbp
 1340 0214 0F8546FF 		jne	.L63
 1340      FFFF
 1341              	.L62:
 1342              		.loc 1 312 0
 1343 021a 488B7C24 		movq	56(%rsp), %rdi
 1343      38
 1344 021f E8000000 		call	free
 1344      00
 1345              	.LVL196:
 1346              		.loc 1 313 0
 1347 0224 488B7C24 		movq	64(%rsp), %rdi
 1347      40
 1348 0229 E8000000 		call	free
 1348      00
 1349              	.LVL197:
 1350              		.loc 1 314 0
 1351 022e 488B7C24 		movq	72(%rsp), %rdi
 1351      48
 1352 0233 E8000000 		call	free
 1352      00
 1353              	.LVL198:
 1354              		.loc 1 315 0
 1355 0238 488B7C24 		movq	80(%rsp), %rdi
 1355      50
 1356 023d E8000000 		call	free
 1356      00
 1357              	.LVL199:
 1358              		.loc 1 316 0
 1359 0242 488B4424 		movq	88(%rsp), %rax
 1359      58
 1360 0247 64483304 		xorq	%fs:40, %rax
 1360      25280000 
 1360      00
 1361 0250 750D     		jne	.L71
 1362 0252 4883C460 		addq	$96, %rsp
 1363              		.cfi_remember_state
 1364              		.cfi_def_cfa_offset 48
 1365              	.LVL200:
 1366 0256 5B       		popq	%rbx
 1367              		.cfi_def_cfa_offset 40
 1368 0257 5D       		popq	%rbp
 1369              		.cfi_def_cfa_offset 32
 1370 0258 415C     		popq	%r12
 1371              		.cfi_def_cfa_offset 24
 1372              	.LVL201:
 1373 025a 415D     		popq	%r13
 1374              		.cfi_def_cfa_offset 16
 1375 025c 415E     		popq	%r14
 1376              		.cfi_def_cfa_offset 8
 1377 025e C3       		ret
 1378              	.LVL202:
 1379              	.L71:
 1380              		.cfi_restore_state
 1381 025f E8000000 		call	__stack_chk_fail
 1381      00
 1382              	.LVL203:
 1383              		.cfi_endproc
 1384              	.LFE379:
 1386              		.section	.text.unlikely._Z14glutWireSpheredii
 1387              	.LCOLDE10:
 1388              		.section	.text._Z14glutWireSpheredii
 1389              	.LHOTE10:
 1390              		.section	.text.unlikely._Z13glutSolidConeddii,"ax",@progbits
 1391              	.LCOLDB11:
 1392              		.section	.text._Z13glutSolidConeddii,"ax",@progbits
 1393              	.LHOTB11:
 1394              		.p2align 4,,15
 1395              		.globl	_Z13glutSolidConeddii
 1397              	_Z13glutSolidConeddii:
 1398              	.LFB380:
 1399              		.loc 1 322 0
 1400              		.cfi_startproc
 1401              	.LVL204:
 1402 0000 4155     		pushq	%r13
 1403              		.cfi_def_cfa_offset 16
 1404              		.cfi_offset 13, -16
 1405 0002 4154     		pushq	%r12
 1406              		.cfi_def_cfa_offset 24
 1407              		.cfi_offset 12, -24
 1408 0004 4189F5   		movl	%esi, %r13d
 1409 0007 55       		pushq	%rbp
 1410              		.cfi_def_cfa_offset 32
 1411              		.cfi_offset 6, -32
 1412 0008 53       		pushq	%rbx
 1413              		.cfi_def_cfa_offset 40
 1414              		.cfi_offset 3, -40
 1415 0009 89FD     		movl	%edi, %ebp
 1416 000b 660F28E0 		movapd	%xmm0, %xmm4
 1417 000f 4881EC88 		subq	$136, %rsp
 1417      000000
 1418              		.cfi_def_cfa_offset 176
 1419              		.loc 1 330 0
 1420 0016 660F28F9 		movapd	%xmm1, %xmm7
 1421              		.loc 1 322 0
 1422 001a F20F1144 		movsd	%xmm0, 24(%rsp)
 1422      2418
 1423              		.loc 1 330 0
 1424 0020 660FEFC0 		pxor	%xmm0, %xmm0
 1425              	.LVL205:
 1426              		.loc 1 322 0
 1427 0024 64488B04 		movq	%fs:40, %rax
 1427      25280000 
 1427      00
 1428 002d 48894424 		movq	%rax, 120(%rsp)
 1428      78
 1429 0032 31C0     		xorl	%eax, %eax
 1430              		.loc 1 330 0
 1431 0034 85F6     		testl	%esi, %esi
 1432 0036 B8010000 		movl	$1, %eax
 1432      00
 1433              		.loc 1 322 0
 1434 003b F20F114C 		movsd	%xmm1, 88(%rsp)
 1434      2458
 1435              		.loc 1 330 0
 1436 0041 0F4FC6   		cmovg	%esi, %eax
 1437              		.loc 1 331 0
 1438 0044 660F28EC 		movapd	%xmm4, %xmm5
 1439              		.loc 1 330 0
 1440 0048 F20F2AC0 		cvtsi2sd	%eax, %xmm0
 1441              		.loc 1 322 0
 1442 004c 660F28D1 		movapd	%xmm1, %xmm2
 1443              		.loc 1 335 0
 1444 0050 F20F59D1 		mulsd	%xmm1, %xmm2
 1445              		.loc 1 330 0
 1446 0054 F20F5EF8 		divsd	%xmm0, %xmm7
 1447              		.loc 1 331 0
 1448 0058 F20F5EE8 		divsd	%xmm0, %xmm5
 1449              		.loc 1 335 0
 1450 005c 660F28C4 		movapd	%xmm4, %xmm0
 1451              		.loc 1 330 0
 1452 0060 F20F117C 		movsd	%xmm7, 72(%rsp)
 1452      2448
 1453              	.LVL206:
 1454              		.loc 1 335 0
 1455 0066 F20F59C4 		mulsd	%xmm4, %xmm0
 1456              		.loc 1 331 0
 1457 006a F20F116C 		movsd	%xmm5, 80(%rsp)
 1457      2450
 1458              	.LVL207:
 1459              		.loc 1 335 0
 1460 0070 F20F58D0 		addsd	%xmm0, %xmm2
 1461 0074 F20F51CA 		sqrtsd	%xmm2, %xmm1
 1462              	.LVL208:
 1463 0078 660F2EC9 		ucomisd	%xmm1, %xmm1
 1464 007c 0F8A8C03 		jp	.L99
 1464      0000
 1465 0082 660F28C1 		movapd	%xmm1, %xmm0
 1466              	.LVL209:
 1467              	.L73:
 1468 0086 F20F1064 		movsd	88(%rsp), %xmm4
 1468      2458
 1469              		.loc 1 336 0
 1470 008c 660F2EC9 		ucomisd	%xmm1, %xmm1
 1471              		.loc 1 335 0
 1472 0090 F20F5EE0 		divsd	%xmm0, %xmm4
 1473              		.loc 1 336 0
 1474 0094 660F28C1 		movapd	%xmm1, %xmm0
 1475              		.loc 1 335 0
 1476 0098 F20F1164 		movsd	%xmm4, 32(%rsp)
 1476      2420
 1477              	.LVL210:
 1478              		.loc 1 336 0
 1479 009e 0F8A9003 		jp	.L100
 1479      0000
 1480              	.LVL211:
 1481              	.L75:
 1482 00a4 F20F107C 		movsd	24(%rsp), %xmm7
 1482      2418
 1483              		.loc 1 342 0
 1484 00aa 488D7424 		leaq	112(%rsp), %rsi
 1484      70
 1485 00af 488D7C24 		leaq	104(%rsp), %rdi
 1485      68
 1486 00b4 89EA     		movl	%ebp, %edx
 1487              		.loc 1 336 0
 1488 00b6 F20F5EF8 		divsd	%xmm0, %xmm7
 1489              		.loc 1 342 0
 1490 00ba F7DA     		negl	%edx
 1491              		.loc 1 336 0
 1492 00bc F20F117C 		movsd	%xmm7, 40(%rsp)
 1492      2428
 1493              	.LVL212:
 1494              		.loc 1 342 0
 1495 00c2 E8000000 		call	_ZL14fghCircleTablePPdS0_i
 1495      00
 1496              	.LVL213:
 1497              		.loc 1 350 0
 1498 00c7 F20F107C 		movsd	24(%rsp), %xmm7
 1498      2418
 1499              		.loc 1 352 0
 1500 00cd BF060000 		movl	$6, %edi
 1500      00
 1501              		.loc 1 350 0
 1502 00d2 F20F5C7C 		subsd	80(%rsp), %xmm7
 1502      2450
 1503 00d8 F20F117C 		movsd	%xmm7, 8(%rsp)
 1503      2408
 1504              	.LVL214:
 1505              		.loc 1 352 0
 1506 00de E8000000 		call	glBegin
 1506      00
 1507              	.LVL215:
 1508              		.loc 1 354 0
 1509 00e3 660FEFC9 		pxor	%xmm1, %xmm1
 1510 00e7 F20F1015 		movsd	.LC6(%rip), %xmm2
 1510      00000000 
 1511 00ef 660F28C1 		movapd	%xmm1, %xmm0
 1512 00f3 E8000000 		call	glNormal3d
 1512      00
 1513              	.LVL216:
 1514              		.loc 1 355 0
 1515 00f8 660FEFD2 		pxor	%xmm2, %xmm2
 1516 00fc 660F28CA 		movapd	%xmm2, %xmm1
 1517 0100 660F28C2 		movapd	%xmm2, %xmm0
 1518 0104 E8000000 		call	glVertex3d
 1518      00
 1519              	.LVL217:
 1520              		.loc 1 357 0
 1521 0109 85ED     		testl	%ebp, %ebp
 1522 010b 0F88B802 		js	.L77
 1522      0000
 1523              		.loc 1 357 0 is_stmt 0 discriminator 2
 1524 0111 31DB     		xorl	%ebx, %ebx
 1525              	.LVL218:
 1526              		.p2align 4,,10
 1527 0113 0F1F4400 		.p2align 3
 1527      00
 1528              	.L78:
 1529              		.loc 1 358 0 is_stmt 1 discriminator 2
 1530 0118 488B4424 		movq	112(%rsp), %rax
 1530      70
 1531 011d F20F104C 		movsd	24(%rsp), %xmm1
 1531      2418
 1532 0123 660FEFD2 		pxor	%xmm2, %xmm2
 1533 0127 F20F1004 		movsd	(%rax,%rbx,8), %xmm0
 1533      D8
 1534 012c 488B4424 		movq	104(%rsp), %rax
 1534      68
 1535 0131 F20F59C1 		mulsd	%xmm1, %xmm0
 1536 0135 F20F590C 		mulsd	(%rax,%rbx,8), %xmm1
 1536      D8
 1537 013a 4883C301 		addq	$1, %rbx
 1538              	.LVL219:
 1539 013e E8000000 		call	glVertex3d
 1539      00
 1540              	.LVL220:
 1541              		.loc 1 357 0 discriminator 2
 1542 0143 39DD     		cmpl	%ebx, %ebp
 1543 0145 7DD1     		jge	.L78
 1544              		.loc 1 364 0
 1545 0147 4183ED01 		subl	$1, %r13d
 1546              	.LVL221:
 1547              		.loc 1 360 0
 1548 014b E8000000 		call	glEnd
 1548      00
 1549              	.LVL222:
 1550              		.loc 1 364 0
 1551 0150 4585ED   		testl	%r13d, %r13d
 1552 0153 0F8E2501 		jle	.L91
 1552      0000
 1553              	.LVL223:
 1554              	.L89:
 1555              		.loc 1 357 0
 1556 0159 F20F107C 		movsd	72(%rsp), %xmm7
 1556      2448
 1557 015f 4531E4   		xorl	%r12d, %r12d
 1558 0162 F20F117C 		movsd	%xmm7, 16(%rsp)
 1558      2410
 1559 0168 660FEFFF 		pxor	%xmm7, %xmm7
 1560 016c F20F117C 		movsd	%xmm7, 48(%rsp)
 1560      2430
 1561              	.LVL224:
 1562              		.p2align 4,,10
 1563 0172 660F1F44 		.p2align 3
 1563      0000
 1564              	.L81:
 1565              		.loc 1 366 0
 1566 0178 BF080000 		movl	$8, %edi
 1566      00
 1567              		.loc 1 368 0
 1568 017d 31DB     		xorl	%ebx, %ebx
 1569              		.loc 1 366 0
 1570 017f E8000000 		call	glBegin
 1570      00
 1571              	.LVL225:
 1572              		.loc 1 368 0
 1573 0184 85ED     		testl	%ebp, %ebp
 1574 0186 0F888B00 		js	.L82
 1574      0000
 1575              	.LVL226:
 1576 018c 0F1F4000 		.p2align 4,,10
 1577              		.p2align 3
 1578              	.L93:
 1579              		.loc 1 370 0 discriminator 2
 1580 0190 488B4424 		movq	112(%rsp), %rax
 1580      70
 1581 0195 F20F104C 		movsd	40(%rsp), %xmm1
 1581      2428
 1582 019b F20F1054 		movsd	32(%rsp), %xmm2
 1582      2420
 1583 01a1 F20F1004 		movsd	(%rax,%rbx,8), %xmm0
 1583      D8
 1584 01a6 488B4424 		movq	104(%rsp), %rax
 1584      68
 1585 01ab F20F59C1 		mulsd	%xmm1, %xmm0
 1586 01af F20F590C 		mulsd	(%rax,%rbx,8), %xmm1
 1586      D8
 1587 01b4 E8000000 		call	glNormal3d
 1587      00
 1588              	.LVL227:
 1589              		.loc 1 371 0 discriminator 2
 1590 01b9 488B4424 		movq	112(%rsp), %rax
 1590      70
 1591 01be F20F104C 		movsd	24(%rsp), %xmm1
 1591      2418
 1592 01c4 F20F1054 		movsd	48(%rsp), %xmm2
 1592      2430
 1593 01ca F20F1004 		movsd	(%rax,%rbx,8), %xmm0
 1593      D8
 1594 01cf 488B4424 		movq	104(%rsp), %rax
 1594      68
 1595 01d4 F20F59C1 		mulsd	%xmm1, %xmm0
 1596 01d8 F20F590C 		mulsd	(%rax,%rbx,8), %xmm1
 1596      D8
 1597 01dd E8000000 		call	glVertex3d
 1597      00
 1598              	.LVL228:
 1599              		.loc 1 372 0 discriminator 2
 1600 01e2 488B4424 		movq	112(%rsp), %rax
 1600      70
 1601 01e7 F20F104C 		movsd	8(%rsp), %xmm1
 1601      2408
 1602 01ed F20F1054 		movsd	16(%rsp), %xmm2
 1602      2410
 1603 01f3 F20F1004 		movsd	(%rax,%rbx,8), %xmm0
 1603      D8
 1604 01f8 488B4424 		movq	104(%rsp), %rax
 1604      68
 1605 01fd F20F59C1 		mulsd	%xmm1, %xmm0
 1606 0201 F20F590C 		mulsd	(%rax,%rbx,8), %xmm1
 1606      D8
 1607 0206 4883C301 		addq	$1, %rbx
 1608              	.LVL229:
 1609 020a E8000000 		call	glVertex3d
 1609      00
 1610              	.LVL230:
 1611              		.loc 1 368 0 discriminator 2
 1612 020f 39DD     		cmpl	%ebx, %ebp
 1613 0211 0F8D79FF 		jge	.L93
 1613      FFFF
 1614              	.L82:
 1615              	.LVL231:
 1616              		.loc 1 375 0
 1617 0217 F20F1074 		movsd	72(%rsp), %xmm6
 1617      2448
 1618              		.loc 1 364 0
 1619 021d 4183C401 		addl	$1, %r12d
 1620              	.LVL232:
 1621              		.loc 1 376 0
 1622 0221 F20F106C 		movsd	8(%rsp), %xmm5
 1622      2408
 1623              		.loc 1 375 0
 1624 0227 F20F5874 		addsd	16(%rsp), %xmm6
 1624      2410
 1625              		.loc 1 376 0
 1626 022d F20F5C6C 		subsd	80(%rsp), %xmm5
 1626      2450
 1627              		.loc 1 375 0
 1628 0233 F20F1174 		movsd	%xmm6, 56(%rsp)
 1628      2438
 1629              	.LVL233:
 1630              		.loc 1 376 0
 1631 0239 F20F116C 		movsd	%xmm5, 64(%rsp)
 1631      2440
 1632              	.LVL234:
 1633              		.loc 1 378 0
 1634 023f E8000000 		call	glEnd
 1634      00
 1635              	.LVL235:
 1636 0244 F20F107C 		movsd	16(%rsp), %xmm7
 1636      2410
 1637              		.loc 1 364 0
 1638 024a 4539EC   		cmpl	%r13d, %r12d
 1639 024d F20F1074 		movsd	8(%rsp), %xmm6
 1639      2408
 1640 0253 F20F117C 		movsd	%xmm7, 48(%rsp)
 1640      2430
 1641 0259 F20F1174 		movsd	%xmm6, 24(%rsp)
 1641      2418
 1642 025f 7D33     		jge	.L79
 1643              		.loc 1 376 0
 1644 0261 F20F106C 		movsd	64(%rsp), %xmm5
 1644      2440
 1645              		.loc 1 375 0
 1646 0267 F20F1074 		movsd	56(%rsp), %xmm6
 1646      2438
 1647              		.loc 1 376 0
 1648 026d F20F116C 		movsd	%xmm5, 8(%rsp)
 1648      2408
 1649              	.LVL236:
 1650              		.loc 1 375 0
 1651 0273 F20F1174 		movsd	%xmm6, 16(%rsp)
 1651      2410
 1652              	.LVL237:
 1653 0279 E9FAFEFF 		jmp	.L81
 1653      FF
 1654              	.LVL238:
 1655              	.L91:
 1656              		.loc 1 349 0
 1657 027e F20F1064 		movsd	24(%rsp), %xmm4
 1657      2418
 1658 0284 F20F1164 		movsd	%xmm4, 8(%rsp)
 1658      2408
 1659              	.LVL239:
 1660              		.loc 1 346 0
 1661 028a 660FEFE4 		pxor	%xmm4, %xmm4
 1662 028e F20F1164 		movsd	%xmm4, 16(%rsp)
 1662      2410
 1663              	.LVL240:
 1664              	.L79:
 1665              		.loc 1 383 0
 1666 0294 BF040000 		movl	$4, %edi
 1666      00
 1667 0299 E8000000 		call	glBegin
 1667      00
 1668              	.LVL241:
 1669              		.loc 1 385 0
 1670 029e 488B4424 		movq	112(%rsp), %rax
 1670      70
 1671 02a3 F20F104C 		movsd	40(%rsp), %xmm1
 1671      2428
 1672 02a9 F20F1054 		movsd	32(%rsp), %xmm2
 1672      2420
 1673 02af F20F1000 		movsd	(%rax), %xmm0
 1674 02b3 488B4424 		movq	104(%rsp), %rax
 1674      68
 1675 02b8 F20F59C1 		mulsd	%xmm1, %xmm0
 1676 02bc F20F5908 		mulsd	(%rax), %xmm1
 1677 02c0 E8000000 		call	glNormal3d
 1677      00
 1678              	.LVL242:
 1679              		.loc 1 387 0
 1680 02c5 85ED     		testl	%ebp, %ebp
 1681 02c7 0F8EC100 		jle	.L85
 1681      0000
 1682 02cd 8D45FF   		leal	-1(%rbp), %eax
 1683 02d0 31DB     		xorl	%ebx, %ebx
 1684 02d2 4C8D24C5 		leaq	8(,%rax,8), %r12
 1684      08000000 
 1685              	.LVL243:
 1686 02da 660F1F44 		.p2align 4,,10
 1686      0000
 1687              		.p2align 3
 1688              	.L87:
 1689              		.loc 1 389 0 discriminator 2
 1690 02e0 488B4424 		movq	112(%rsp), %rax
 1690      70
 1691 02e5 F20F104C 		movsd	8(%rsp), %xmm1
 1691      2408
 1692 02eb F20F1054 		movsd	16(%rsp), %xmm2
 1692      2410
 1693 02f1 488D6B08 		leaq	8(%rbx), %rbp
 1694 02f5 F20F1004 		movsd	(%rax,%rbx), %xmm0
 1694      18
 1695 02fa 488B4424 		movq	104(%rsp), %rax
 1695      68
 1696 02ff F20F59C1 		mulsd	%xmm1, %xmm0
 1697 0303 F20F590C 		mulsd	(%rax,%rbx), %xmm1
 1697      18
 1698 0308 E8000000 		call	glVertex3d
 1698      00
 1699              	.LVL244:
 1700              		.loc 1 390 0 discriminator 2
 1701 030d 660FEFC9 		pxor	%xmm1, %xmm1
 1702 0311 660FEFC0 		pxor	%xmm0, %xmm0
 1703 0315 F20F1054 		movsd	88(%rsp), %xmm2
 1703      2458
 1704 031b E8000000 		call	glVertex3d
 1704      00
 1705              	.LVL245:
 1706              		.loc 1 391 0 discriminator 2
 1707 0320 488B4424 		movq	112(%rsp), %rax
 1707      70
 1708 0325 F20F1064 		movsd	40(%rsp), %xmm4
 1708      2428
 1709 032b F20F1054 		movsd	32(%rsp), %xmm2
 1709      2420
 1710 0331 F20F105C 		movsd	8(%rax,%rbx), %xmm3
 1710      1808
 1711 0337 488B4424 		movq	104(%rsp), %rax
 1711      68
 1712 033c F20F59DC 		mulsd	%xmm4, %xmm3
 1713 0340 660F28C3 		movapd	%xmm3, %xmm0
 1714 0344 F20F105C 		movsd	8(%rax,%rbx), %xmm3
 1714      1808
 1715 034a F20F59DC 		mulsd	%xmm4, %xmm3
 1716 034e 660F28CB 		movapd	%xmm3, %xmm1
 1717 0352 E8000000 		call	glNormal3d
 1717      00
 1718              	.LVL246:
 1719              		.loc 1 392 0 discriminator 2
 1720 0357 488B4424 		movq	112(%rsp), %rax
 1720      70
 1721 035c F20F104C 		movsd	8(%rsp), %xmm1
 1721      2408
 1722 0362 F20F1054 		movsd	16(%rsp), %xmm2
 1722      2410
 1723 0368 F20F1044 		movsd	8(%rax,%rbx), %xmm0
 1723      1808
 1724 036e 488B4424 		movq	104(%rsp), %rax
 1724      68
 1725 0373 F20F59C1 		mulsd	%xmm1, %xmm0
 1726 0377 F20F594C 		mulsd	8(%rax,%rbx), %xmm1
 1726      1808
 1727 037d 4889EB   		movq	%rbp, %rbx
 1728 0380 E8000000 		call	glVertex3d
 1728      00
 1729              	.LVL247:
 1730              		.loc 1 387 0 discriminator 2
 1731 0385 4939EC   		cmpq	%rbp, %r12
 1732 0388 0F8552FF 		jne	.L87
 1732      FFFF
 1733              	.L85:
 1734              		.loc 1 395 0
 1735 038e E8000000 		call	glEnd
 1735      00
 1736              	.LVL248:
 1737              		.loc 1 399 0
 1738 0393 488B7C24 		movq	104(%rsp), %rdi
 1738      68
 1739 0398 E8000000 		call	free
 1739      00
 1740              	.LVL249:
 1741              		.loc 1 400 0
 1742 039d 488B7C24 		movq	112(%rsp), %rdi
 1742      70
 1743 03a2 E8000000 		call	free
 1743      00
 1744              	.LVL250:
 1745              		.loc 1 401 0
 1746 03a7 488B4424 		movq	120(%rsp), %rax
 1746      78
 1747 03ac 64483304 		xorq	%fs:40, %rax
 1747      25280000 
 1747      00
 1748 03b5 0F858700 		jne	.L101
 1748      0000
 1749 03bb 4881C488 		addq	$136, %rsp
 1749      000000
 1750              		.cfi_remember_state
 1751              		.cfi_def_cfa_offset 40
 1752 03c2 5B       		popq	%rbx
 1753              		.cfi_def_cfa_offset 32
 1754 03c3 5D       		popq	%rbp
 1755              		.cfi_def_cfa_offset 24
 1756 03c4 415C     		popq	%r12
 1757              		.cfi_def_cfa_offset 16
 1758 03c6 415D     		popq	%r13
 1759              		.cfi_def_cfa_offset 8
 1760 03c8 C3       		ret
 1761              	.LVL251:
 1762              	.L77:
 1763              		.cfi_restore_state
 1764              		.loc 1 364 0
 1765 03c9 4183ED01 		subl	$1, %r13d
 1766              	.LVL252:
 1767              		.loc 1 360 0
 1768 03cd E8000000 		call	glEnd
 1768      00
 1769              	.LVL253:
 1770              		.loc 1 364 0
 1771 03d2 4585ED   		testl	%r13d, %r13d
 1772 03d5 0F8F7EFD 		jg	.L89
 1772      FFFF
 1773              		.loc 1 383 0
 1774 03db BF040000 		movl	$4, %edi
 1774      00
 1775 03e0 E8000000 		call	glBegin
 1775      00
 1776              	.LVL254:
 1777              		.loc 1 385 0
 1778 03e5 488B4424 		movq	112(%rsp), %rax
 1778      70
 1779 03ea F20F104C 		movsd	40(%rsp), %xmm1
 1779      2428
 1780 03f0 F20F1054 		movsd	32(%rsp), %xmm2
 1780      2420
 1781 03f6 F20F1000 		movsd	(%rax), %xmm0
 1782 03fa 488B4424 		movq	104(%rsp), %rax
 1782      68
 1783 03ff F20F59C1 		mulsd	%xmm1, %xmm0
 1784 0403 F20F5908 		mulsd	(%rax), %xmm1
 1785 0407 E8000000 		call	glNormal3d
 1785      00
 1786              	.LVL255:
 1787 040c EB80     		jmp	.L85
 1788              	.LVL256:
 1789              	.L99:
 1790              		.loc 1 335 0
 1791 040e 660F28C2 		movapd	%xmm2, %xmm0
 1792 0412 F20F114C 		movsd	%xmm1, 16(%rsp)
 1792      2410
 1793 0418 F20F1154 		movsd	%xmm2, 8(%rsp)
 1793      2408
 1794 041e E8000000 		call	sqrt
 1794      00
 1795              	.LVL257:
 1796 0423 F20F104C 		movsd	16(%rsp), %xmm1
 1796      2410
 1797 0429 F20F1054 		movsd	8(%rsp), %xmm2
 1797      2408
 1798 042f E952FCFF 		jmp	.L73
 1798      FF
 1799              	.LVL258:
 1800              	.L100:
 1801              		.loc 1 336 0
 1802 0434 660F28C2 		movapd	%xmm2, %xmm0
 1803 0438 E8000000 		call	sqrt
 1803      00
 1804              	.LVL259:
 1805 043d E962FCFF 		jmp	.L75
 1805      FF
 1806              	.LVL260:
 1807              	.L101:
 1808              		.loc 1 401 0
 1809 0442 E8000000 		call	__stack_chk_fail
 1809      00
 1810              	.LVL261:
 1811              		.cfi_endproc
 1812              	.LFE380:
 1814              		.section	.text.unlikely._Z13glutSolidConeddii
 1815              	.LCOLDE11:
 1816              		.section	.text._Z13glutSolidConeddii
 1817              	.LHOTE11:
 1818              		.section	.text.unlikely._Z12glutWireConeddii,"ax",@progbits
 1819              	.LCOLDB12:
 1820              		.section	.text._Z12glutWireConeddii,"ax",@progbits
 1821              	.LHOTB12:
 1822              		.p2align 4,,15
 1823              		.globl	_Z12glutWireConeddii
 1825              	_Z12glutWireConeddii:
 1826              	.LFB381:
 1827              		.loc 1 407 0
 1828              		.cfi_startproc
 1829              	.LVL262:
 1830 0000 4156     		pushq	%r14
 1831              		.cfi_def_cfa_offset 16
 1832              		.cfi_offset 14, -16
 1833 0002 4155     		pushq	%r13
 1834              		.cfi_def_cfa_offset 24
 1835              		.cfi_offset 13, -24
 1836 0004 4189F6   		movl	%esi, %r14d
 1837 0007 4154     		pushq	%r12
 1838              		.cfi_def_cfa_offset 32
 1839              		.cfi_offset 12, -32
 1840 0009 55       		pushq	%rbp
 1841              		.cfi_def_cfa_offset 40
 1842              		.cfi_offset 6, -40
 1843 000a 4189FD   		movl	%edi, %r13d
 1844 000d 53       		pushq	%rbx
 1845              		.cfi_def_cfa_offset 48
 1846              		.cfi_offset 3, -48
 1847 000e 660F28E8 		movapd	%xmm0, %xmm5
 1848              		.loc 1 415 0
 1849 0012 660F28F9 		movapd	%xmm1, %xmm7
 1850              		.loc 1 407 0
 1851 0016 4883EC60 		subq	$96, %rsp
 1852              		.cfi_def_cfa_offset 144
 1853              		.loc 1 407 0
 1854 001a 660F28D1 		movapd	%xmm1, %xmm2
 1855 001e F20F1144 		movsd	%xmm0, 32(%rsp)
 1855      2420
 1856              		.loc 1 415 0
 1857 0024 660FEFC0 		pxor	%xmm0, %xmm0
 1858              	.LVL263:
 1859              		.loc 1 407 0
 1860 0028 64488B04 		movq	%fs:40, %rax
 1860      25280000 
 1860      00
 1861 0031 48894424 		movq	%rax, 88(%rsp)
 1861      58
 1862 0036 31C0     		xorl	%eax, %eax
 1863              	.LVL264:
 1864              		.loc 1 415 0
 1865 0038 85F6     		testl	%esi, %esi
 1866 003a B8010000 		movl	$1, %eax
 1866      00
 1867              		.loc 1 420 0
 1868 003f F20F59D1 		mulsd	%xmm1, %xmm2
 1869              		.loc 1 415 0
 1870 0043 0F4FC6   		cmovg	%esi, %eax
 1871              		.loc 1 407 0
 1872 0046 F20F114C 		movsd	%xmm1, 40(%rsp)
 1872      2428
 1873              		.loc 1 415 0
 1874 004c F20F2AC0 		cvtsi2sd	%eax, %xmm0
 1875 0050 F20F5EF8 		divsd	%xmm0, %xmm7
 1876 0054 F20F117C 		movsd	%xmm7, 48(%rsp)
 1876      2430
 1877              	.LVL265:
 1878              		.loc 1 416 0
 1879 005a 660F28FD 		movapd	%xmm5, %xmm7
 1880              	.LVL266:
 1881 005e F20F5EF8 		divsd	%xmm0, %xmm7
 1882              		.loc 1 420 0
 1883 0062 660F28C5 		movapd	%xmm5, %xmm0
 1884 0066 F20F59C5 		mulsd	%xmm5, %xmm0
 1885              		.loc 1 416 0
 1886 006a F20F117C 		movsd	%xmm7, 56(%rsp)
 1886      2438
 1887              	.LVL267:
 1888              		.loc 1 420 0
 1889 0070 F20F58D0 		addsd	%xmm0, %xmm2
 1890 0074 F20F51CA 		sqrtsd	%xmm2, %xmm1
 1891              	.LVL268:
 1892 0078 660F2EC9 		ucomisd	%xmm1, %xmm1
 1893 007c 0F8AE001 		jp	.L123
 1893      0000
 1894 0082 660F28C1 		movapd	%xmm1, %xmm0
 1895              	.LVL269:
 1896              	.L103:
 1897 0086 F20F107C 		movsd	40(%rsp), %xmm7
 1897      2428
 1898              		.loc 1 421 0
 1899 008c 660F2EC9 		ucomisd	%xmm1, %xmm1
 1900              		.loc 1 420 0
 1901 0090 F20F5EF8 		divsd	%xmm0, %xmm7
 1902              		.loc 1 421 0
 1903 0094 660F28C1 		movapd	%xmm1, %xmm0
 1904              		.loc 1 420 0
 1905 0098 F20F117C 		movsd	%xmm7, 16(%rsp)
 1905      2410
 1906              	.LVL270:
 1907              		.loc 1 421 0
 1908 009e 0F8AE201 		jp	.L124
 1908      0000
 1909              	.LVL271:
 1910              	.L105:
 1911 00a4 F20F107C 		movsd	32(%rsp), %xmm7
 1911      2420
 1912              		.loc 1 427 0
 1913 00aa 4489EA   		movl	%r13d, %edx
 1914 00ad 488D7424 		leaq	80(%rsp), %rsi
 1914      50
 1915 00b2 488D7C24 		leaq	72(%rsp), %rdi
 1915      48
 1916 00b7 F7DA     		negl	%edx
 1917              		.loc 1 421 0
 1918 00b9 F20F5EF8 		divsd	%xmm0, %xmm7
 1919 00bd F20F117C 		movsd	%xmm7, 24(%rsp)
 1919      2418
 1920              	.LVL272:
 1921              		.loc 1 427 0
 1922 00c3 E8000000 		call	_ZL14fghCircleTablePPdS0_i
 1922      00
 1923              	.LVL273:
 1924              		.loc 1 431 0
 1925 00c8 4585F6   		testl	%r14d, %r14d
 1926 00cb 0F8ECD00 		jle	.L111
 1926      0000
 1927 00d1 660FEFED 		pxor	%xmm5, %xmm5
 1928 00d5 418D45FF 		leal	-1(%r13), %eax
 1929 00d9 4531E4   		xorl	%r12d, %r12d
 1930 00dc F20F107C 		movsd	32(%rsp), %xmm7
 1930      2420
 1931 00e2 488D2CC5 		leaq	8(,%rax,8), %rbp
 1931      08000000 
 1932 00ea F20F117C 		movsd	%xmm7, 8(%rsp)
 1932      2408
 1933 00f0 F20F112C 		movsd	%xmm5, (%rsp)
 1933      24
 1934              	.LVL274:
 1935              		.p2align 4,,10
 1936 00f5 0F1F00   		.p2align 3
 1937              	.L112:
 1938              		.loc 1 433 0
 1939 00f8 BF020000 		movl	$2, %edi
 1939      00
 1940              		.loc 1 435 0
 1941 00fd 31DB     		xorl	%ebx, %ebx
 1942              		.loc 1 433 0
 1943 00ff E8000000 		call	glBegin
 1943      00
 1944              	.LVL275:
 1945              		.loc 1 435 0
 1946 0104 4585ED   		testl	%r13d, %r13d
 1947 0107 7E61     		jle	.L113
 1948              	.LVL276:
 1949 0109 0F1F8000 		.p2align 4,,10
 1949      000000
 1950              		.p2align 3
 1951              	.L117:
 1952              		.loc 1 437 0 discriminator 2
 1953 0110 488B4424 		movq	80(%rsp), %rax
 1953      50
 1954 0115 F20F104C 		movsd	24(%rsp), %xmm1
 1954      2418
 1955 011b F20F1054 		movsd	16(%rsp), %xmm2
 1955      2410
 1956 0121 F20F1004 		movsd	(%rax,%rbx), %xmm0
 1956      18
 1957 0126 488B4424 		movq	72(%rsp), %rax
 1957      48
 1958 012b F20F59C1 		mulsd	%xmm1, %xmm0
 1959 012f F20F590C 		mulsd	(%rax,%rbx), %xmm1
 1959      18
 1960 0134 E8000000 		call	glNormal3d
 1960      00
 1961              	.LVL277:
 1962              		.loc 1 438 0 discriminator 2
 1963 0139 488B4424 		movq	80(%rsp), %rax
 1963      50
 1964 013e F20F104C 		movsd	8(%rsp), %xmm1
 1964      2408
 1965 0144 F20F1014 		movsd	(%rsp), %xmm2
 1965      24
 1966 0149 F20F1004 		movsd	(%rax,%rbx), %xmm0
 1966      18
 1967 014e 488B4424 		movq	72(%rsp), %rax
 1967      48
 1968 0153 F20F59C1 		mulsd	%xmm1, %xmm0
 1969 0157 F20F590C 		mulsd	(%rax,%rbx), %xmm1
 1969      18
 1970 015c 4883C308 		addq	$8, %rbx
 1971 0160 E8000000 		call	glVertex3d
 1971      00
 1972              	.LVL278:
 1973              		.loc 1 435 0 discriminator 2
 1974 0165 4839EB   		cmpq	%rbp, %rbx
 1975 0168 75A6     		jne	.L117
 1976              	.L113:
 1977              		.loc 1 441 0
 1978 016a E8000000 		call	glEnd
 1978      00
 1979              	.LVL279:
 1980              		.loc 1 443 0
 1981 016f F20F101C 		movsd	(%rsp), %xmm3
 1981      24
 1982              		.loc 1 431 0
 1983 0174 4183C401 		addl	$1, %r12d
 1984              	.LVL280:
 1985              		.loc 1 444 0
 1986 0178 F20F1064 		movsd	8(%rsp), %xmm4
 1986      2408
 1987              		.loc 1 431 0
 1988 017e 4539E6   		cmpl	%r12d, %r14d
 1989              		.loc 1 443 0
 1990 0181 F20F585C 		addsd	48(%rsp), %xmm3
 1990      2430
 1991              		.loc 1 444 0
 1992 0187 F20F5C64 		subsd	56(%rsp), %xmm4
 1992      2438
 1993              		.loc 1 443 0
 1994 018d F20F111C 		movsd	%xmm3, (%rsp)
 1994      24
 1995              	.LVL281:
 1996              		.loc 1 444 0
 1997 0192 F20F1164 		movsd	%xmm4, 8(%rsp)
 1997      2408
 1998              	.LVL282:
 1999              		.loc 1 431 0
 2000 0198 0F855AFF 		jne	.L112
 2000      FFFF
 2001              	.LVL283:
 2002              	.L111:
 2003              		.loc 1 451 0
 2004 019e BF010000 		movl	$1, %edi
 2004      00
 2005 01a3 E8000000 		call	glBegin
 2005      00
 2006              	.LVL284:
 2007              		.loc 1 453 0
 2008 01a8 4585ED   		testl	%r13d, %r13d
 2009 01ab 7E7F     		jle	.L108
 2010 01ad 418D45FF 		leal	-1(%r13), %eax
 2011 01b1 31DB     		xorl	%ebx, %ebx
 2012 01b3 488D2CC5 		leaq	8(,%rax,8), %rbp
 2012      08000000 
 2013              	.LVL285:
 2014 01bb 0F1F4400 		.p2align 4,,10
 2014      00
 2015              		.p2align 3
 2016              	.L115:
 2017              		.loc 1 455 0 discriminator 2
 2018 01c0 488B4424 		movq	80(%rsp), %rax
 2018      50
 2019 01c5 F20F104C 		movsd	24(%rsp), %xmm1
 2019      2418
 2020 01cb F20F1054 		movsd	16(%rsp), %xmm2
 2020      2410
 2021 01d1 F20F1004 		movsd	(%rax,%rbx), %xmm0
 2021      18
 2022 01d6 488B4424 		movq	72(%rsp), %rax
 2022      48
 2023 01db F20F59C1 		mulsd	%xmm1, %xmm0
 2024 01df F20F590C 		mulsd	(%rax,%rbx), %xmm1
 2024      18
 2025 01e4 E8000000 		call	glNormal3d
 2025      00
 2026              	.LVL286:
 2027              		.loc 1 456 0 discriminator 2
 2028 01e9 488B4424 		movq	80(%rsp), %rax
 2028      50
 2029 01ee F20F104C 		movsd	32(%rsp), %xmm1
 2029      2420
 2030 01f4 660FEFD2 		pxor	%xmm2, %xmm2
 2031 01f8 F20F1004 		movsd	(%rax,%rbx), %xmm0
 2031      18
 2032 01fd 488B4424 		movq	72(%rsp), %rax
 2032      48
 2033 0202 F20F59C1 		mulsd	%xmm1, %xmm0
 2034 0206 F20F590C 		mulsd	(%rax,%rbx), %xmm1
 2034      18
 2035 020b 4883C308 		addq	$8, %rbx
 2036 020f E8000000 		call	glVertex3d
 2036      00
 2037              	.LVL287:
 2038              		.loc 1 457 0 discriminator 2
 2039 0214 660FEFC9 		pxor	%xmm1, %xmm1
 2040 0218 F20F1054 		movsd	40(%rsp), %xmm2
 2040      2428
 2041 021e 660F28C1 		movapd	%xmm1, %xmm0
 2042 0222 E8000000 		call	glVertex3d
 2042      00
 2043              	.LVL288:
 2044              		.loc 1 453 0 discriminator 2
 2045 0227 4839DD   		cmpq	%rbx, %rbp
 2046 022a 7594     		jne	.L115
 2047              	.L108:
 2048              		.loc 1 460 0
 2049 022c E8000000 		call	glEnd
 2049      00
 2050              	.LVL289:
 2051              		.loc 1 464 0
 2052 0231 488B7C24 		movq	72(%rsp), %rdi
 2052      48
 2053 0236 E8000000 		call	free
 2053      00
 2054              	.LVL290:
 2055              		.loc 1 465 0
 2056 023b 488B7C24 		movq	80(%rsp), %rdi
 2056      50
 2057 0240 E8000000 		call	free
 2057      00
 2058              	.LVL291:
 2059              		.loc 1 466 0
 2060 0245 488B4424 		movq	88(%rsp), %rax
 2060      58
 2061 024a 64483304 		xorq	%fs:40, %rax
 2061      25280000 
 2061      00
 2062 0253 753F     		jne	.L125
 2063 0255 4883C460 		addq	$96, %rsp
 2064              		.cfi_remember_state
 2065              		.cfi_def_cfa_offset 48
 2066 0259 5B       		popq	%rbx
 2067              		.cfi_def_cfa_offset 40
 2068 025a 5D       		popq	%rbp
 2069              		.cfi_def_cfa_offset 32
 2070 025b 415C     		popq	%r12
 2071              		.cfi_def_cfa_offset 24
 2072 025d 415D     		popq	%r13
 2073              		.cfi_def_cfa_offset 16
 2074              	.LVL292:
 2075 025f 415E     		popq	%r14
 2076              		.cfi_def_cfa_offset 8
 2077              	.LVL293:
 2078 0261 C3       		ret
 2079              	.LVL294:
 2080              	.L123:
 2081              		.cfi_restore_state
 2082              		.loc 1 420 0
 2083 0262 660F28C2 		movapd	%xmm2, %xmm0
 2084 0266 F20F114C 		movsd	%xmm1, 8(%rsp)
 2084      2408
 2085 026c F20F1114 		movsd	%xmm2, (%rsp)
 2085      24
 2086 0271 E8000000 		call	sqrt
 2086      00
 2087              	.LVL295:
 2088 0276 F20F104C 		movsd	8(%rsp), %xmm1
 2088      2408
 2089 027c F20F1014 		movsd	(%rsp), %xmm2
 2089      24
 2090 0281 E900FEFF 		jmp	.L103
 2090      FF
 2091              	.LVL296:
 2092              	.L124:
 2093              		.loc 1 421 0
 2094 0286 660F28C2 		movapd	%xmm2, %xmm0
 2095 028a E8000000 		call	sqrt
 2095      00
 2096              	.LVL297:
 2097 028f E910FEFF 		jmp	.L105
 2097      FF
 2098              	.LVL298:
 2099              	.L125:
 2100              		.loc 1 466 0
 2101 0294 E8000000 		call	__stack_chk_fail
 2101      00
 2102              	.LVL299:
 2103              		.cfi_endproc
 2104              	.LFE381:
 2106              		.section	.text.unlikely._Z12glutWireConeddii
 2107              	.LCOLDE12:
 2108              		.section	.text._Z12glutWireConeddii
 2109              	.LHOTE12:
 2110              		.section	.text.unlikely._Z17glutSolidCylinderddii,"ax",@progbits
 2111              	.LCOLDB13:
 2112              		.section	.text._Z17glutSolidCylinderddii,"ax",@progbits
 2113              	.LHOTB13:
 2114              		.p2align 4,,15
 2115              		.globl	_Z17glutSolidCylinderddii
 2117              	_Z17glutSolidCylinderddii:
 2118              	.LFB382:
 2119              		.loc 1 473 0
 2120              		.cfi_startproc
 2121              	.LVL300:
 2122 0000 4155     		pushq	%r13
 2123              		.cfi_def_cfa_offset 16
 2124              		.cfi_offset 13, -16
 2125 0002 4154     		pushq	%r12
 2126              		.cfi_def_cfa_offset 24
 2127              		.cfi_offset 12, -24
 2128              		.loc 1 485 0
 2129 0004 89FA     		movl	%edi, %edx
 2130              		.loc 1 473 0
 2131 0006 55       		pushq	%rbp
 2132              		.cfi_def_cfa_offset 32
 2133              		.cfi_offset 6, -32
 2134 0007 53       		pushq	%rbx
 2135              		.cfi_def_cfa_offset 40
 2136              		.cfi_offset 3, -40
 2137 0008 89FD     		movl	%edi, %ebp
 2138 000a 660F28E9 		movapd	%xmm1, %xmm5
 2139 000e 4189F5   		movl	%esi, %r13d
 2140 0011 4883EC58 		subq	$88, %rsp
 2141              		.cfi_def_cfa_offset 128
 2142              		.loc 1 473 0
 2143 0015 F20F1104 		movsd	%xmm0, (%rsp)
 2143      24
 2144              		.loc 1 479 0
 2145 001a 660FEFC0 		pxor	%xmm0, %xmm0
 2146              	.LVL301:
 2147              		.loc 1 473 0
 2148 001e 64488B04 		movq	%fs:40, %rax
 2148      25280000 
 2148      00
 2149 0027 48894424 		movq	%rax, 72(%rsp)
 2149      48
 2150 002c 31C0     		xorl	%eax, %eax
 2151              		.loc 1 479 0
 2152 002e 85F6     		testl	%esi, %esi
 2153 0030 B8010000 		movl	$1, %eax
 2153      00
 2154              		.loc 1 485 0
 2155 0035 488D7C24 		leaq	56(%rsp), %rdi
 2155      38
 2156              	.LVL302:
 2157              		.loc 1 479 0
 2158 003a 0F4FC6   		cmovg	%esi, %eax
 2159              		.loc 1 485 0
 2160 003d 488D7424 		leaq	64(%rsp), %rsi
 2160      40
 2161              	.LVL303:
 2162 0042 F7DA     		negl	%edx
 2163              	.LVL304:
 2164              		.loc 1 479 0
 2165 0044 F20F2AC0 		cvtsi2sd	%eax, %xmm0
 2166              		.loc 1 473 0
 2167 0048 F20F114C 		movsd	%xmm1, 32(%rsp)
 2167      2420
 2168              		.loc 1 479 0
 2169 004e F20F5EE8 		divsd	%xmm0, %xmm5
 2170 0052 F20F116C 		movsd	%xmm5, 40(%rsp)
 2170      2428
 2171              	.LVL305:
 2172              		.loc 1 485 0
 2173 0058 E8000000 		call	_ZL14fghCircleTablePPdS0_i
 2173      00
 2174              	.LVL306:
 2175              		.loc 1 489 0
 2176 005d BF060000 		movl	$6, %edi
 2176      00
 2177 0062 E8000000 		call	glBegin
 2177      00
 2178              	.LVL307:
 2179              		.loc 1 490 0
 2180 0067 660FEFC9 		pxor	%xmm1, %xmm1
 2181 006b F20F1015 		movsd	.LC6(%rip), %xmm2
 2181      00000000 
 2182 0073 660F28C1 		movapd	%xmm1, %xmm0
 2183 0077 E8000000 		call	glNormal3d
 2183      00
 2184              	.LVL308:
 2185              		.loc 1 491 0
 2186 007c 660FEFD2 		pxor	%xmm2, %xmm2
 2187 0080 660F28CA 		movapd	%xmm2, %xmm1
 2188 0084 660F28C2 		movapd	%xmm2, %xmm0
 2189 0088 E8000000 		call	glVertex3d
 2189      00
 2190              	.LVL309:
 2191              		.loc 1 492 0
 2192 008d 85ED     		testl	%ebp, %ebp
 2193 008f 0F88E801 		js	.L127
 2193      0000
 2194              		.loc 1 492 0 is_stmt 0 discriminator 2
 2195 0095 31DB     		xorl	%ebx, %ebx
 2196              	.LVL310:
 2197 0097 660F1F84 		.p2align 4,,10
 2197      00000000 
 2197      00
 2198              		.p2align 3
 2199              	.L129:
 2200              		.loc 1 493 0 is_stmt 1 discriminator 2
 2201 00a0 488B4424 		movq	64(%rsp), %rax
 2201      40
 2202 00a5 F20F100C 		movsd	(%rsp), %xmm1
 2202      24
 2203 00aa 660FEFD2 		pxor	%xmm2, %xmm2
 2204 00ae F20F1004 		movsd	(%rax,%rbx,8), %xmm0
 2204      D8
 2205 00b3 488B4424 		movq	56(%rsp), %rax
 2205      38
 2206 00b8 F20F59C1 		mulsd	%xmm1, %xmm0
 2207 00bc F20F590C 		mulsd	(%rax,%rbx,8), %xmm1
 2207      D8
 2208 00c1 4883C301 		addq	$1, %rbx
 2209              	.LVL311:
 2210 00c5 E8000000 		call	glVertex3d
 2210      00
 2211              	.LVL312:
 2212              		.loc 1 492 0 discriminator 2
 2213 00ca 39DD     		cmpl	%ebx, %ebp
 2214 00cc 7DD2     		jge	.L129
 2215              		.loc 1 494 0
 2216 00ce E8000000 		call	glEnd
 2216      00
 2217              	.LVL313:
 2218              		.loc 1 496 0
 2219 00d3 BF060000 		movl	$6, %edi
 2219      00
 2220 00d8 E8000000 		call	glBegin
 2220      00
 2221              	.LVL314:
 2222              		.loc 1 497 0
 2223 00dd 660FEFC9 		pxor	%xmm1, %xmm1
 2224 00e1 F20F1015 		movsd	.LC2(%rip), %xmm2
 2224      00000000 
 2225 00e9 660F28C1 		movapd	%xmm1, %xmm0
 2226 00ed E8000000 		call	glNormal3d
 2226      00
 2227              	.LVL315:
 2228              		.loc 1 498 0
 2229 00f2 660FEFC9 		pxor	%xmm1, %xmm1
 2230 00f6 F20F1054 		movsd	32(%rsp), %xmm2
 2230      2420
 2231 00fc 660F28C1 		movapd	%xmm1, %xmm0
 2232 0100 E8000000 		call	glVertex3d
 2232      00
 2233              	.LVL316:
 2234 0105 4863C5   		movslq	%ebp, %rax
 2235 0108 89EA     		movl	%ebp, %edx
 2236 010a 488D1CC5 		leaq	0(,%rax,8), %rbx
 2236      00000000 
 2237 0112 4829D0   		subq	%rdx, %rax
 2238 0115 4C8D24C5 		leaq	-8(,%rax,8), %r12
 2238      F8FFFFFF 
 2239              	.LVL317:
 2240 011d 0F1F00   		.p2align 4,,10
 2241              		.p2align 3
 2242              	.L130:
 2243              		.loc 1 500 0 discriminator 2
 2244 0120 488B4424 		movq	64(%rsp), %rax
 2244      40
 2245 0125 F20F100C 		movsd	(%rsp), %xmm1
 2245      24
 2246 012a F20F1054 		movsd	32(%rsp), %xmm2
 2246      2420
 2247 0130 F20F1004 		movsd	(%rax,%rbx), %xmm0
 2247      18
 2248 0135 488B4424 		movq	56(%rsp), %rax
 2248      38
 2249 013a F20F59C1 		mulsd	%xmm1, %xmm0
 2250 013e F20F590C 		mulsd	(%rax,%rbx), %xmm1
 2250      18
 2251 0143 4883EB08 		subq	$8, %rbx
 2252 0147 E8000000 		call	glVertex3d
 2252      00
 2253              	.LVL318:
 2254              		.loc 1 499 0 discriminator 2
 2255 014c 4C39E3   		cmpq	%r12, %rbx
 2256 014f 75CF     		jne	.L130
 2257              	.L138:
 2258              		.loc 1 501 0
 2259 0151 E8000000 		call	glEnd
 2259      00
 2260              	.LVL319:
 2261              		.loc 1 508 0
 2262 0156 660FEFF6 		pxor	%xmm6, %xmm6
 2263 015a 4585ED   		testl	%r13d, %r13d
 2264 015d F20F107C 		movsd	40(%rsp), %xmm7
 2264      2428
 2265 0163 41BC0100 		movl	$1, %r12d
 2265      0000
 2266 0169 F20F117C 		movsd	%xmm7, 8(%rsp)
 2266      2408
 2267 016f F20F1174 		movsd	%xmm6, 16(%rsp)
 2267      2410
 2268              		.loc 1 516 0
 2269 0175 F20F1174 		movsd	%xmm6, 24(%rsp)
 2269      2418
 2270              		.loc 1 508 0
 2271 017b 0F8ECD00 		jle	.L134
 2271      0000
 2272              	.LVL320:
 2273              		.p2align 4,,10
 2274 0181 0F1F8000 		.p2align 3
 2274      000000
 2275              	.L142:
 2276              		.loc 1 510 0
 2277 0188 4539E5   		cmpl	%r12d, %r13d
 2278 018b 0F842801 		je	.L147
 2278      0000
 2279              	.LVL321:
 2280              	.L132:
 2281              		.loc 1 513 0
 2282 0191 BF080000 		movl	$8, %edi
 2282      00
 2283              		.loc 1 514 0
 2284 0196 31DB     		xorl	%ebx, %ebx
 2285              		.loc 1 513 0
 2286 0198 E8000000 		call	glBegin
 2286      00
 2287              	.LVL322:
 2288              		.loc 1 514 0
 2289 019d 85ED     		testl	%ebp, %ebp
 2290 019f 787E     		js	.L136
 2291              	.LVL323:
 2292              		.p2align 4,,10
 2293 01a1 0F1F8000 		.p2align 3
 2293      000000
 2294              	.L141:
 2295              		.loc 1 516 0 discriminator 2
 2296 01a8 488B4424 		movq	64(%rsp), %rax
 2296      40
 2297 01ad F20F1054 		movsd	24(%rsp), %xmm2
 2297      2418
 2298 01b3 F20F1004 		movsd	(%rax,%rbx,8), %xmm0
 2298      D8
 2299 01b8 488B4424 		movq	56(%rsp), %rax
 2299      38
 2300 01bd F20F100C 		movsd	(%rax,%rbx,8), %xmm1
 2300      D8
 2301 01c2 E8000000 		call	glNormal3d
 2301      00
 2302              	.LVL324:
 2303              		.loc 1 517 0 discriminator 2
 2304 01c7 488B4424 		movq	64(%rsp), %rax
 2304      40
 2305 01cc F20F100C 		movsd	(%rsp), %xmm1
 2305      24
 2306 01d1 F20F1054 		movsd	16(%rsp), %xmm2
 2306      2410
 2307 01d7 F20F1004 		movsd	(%rax,%rbx,8), %xmm0
 2307      D8
 2308 01dc 488B4424 		movq	56(%rsp), %rax
 2308      38
 2309 01e1 F20F59C1 		mulsd	%xmm1, %xmm0
 2310 01e5 F20F590C 		mulsd	(%rax,%rbx,8), %xmm1
 2310      D8
 2311 01ea E8000000 		call	glVertex3d
 2311      00
 2312              	.LVL325:
 2313              		.loc 1 518 0 discriminator 2
 2314 01ef 488B4424 		movq	64(%rsp), %rax
 2314      40
 2315 01f4 F20F100C 		movsd	(%rsp), %xmm1
 2315      24
 2316 01f9 F20F1054 		movsd	8(%rsp), %xmm2
 2316      2408
 2317 01ff F20F1004 		movsd	(%rax,%rbx,8), %xmm0
 2317      D8
 2318 0204 488B4424 		movq	56(%rsp), %rax
 2318      38
 2319 0209 F20F59C1 		mulsd	%xmm1, %xmm0
 2320 020d F20F590C 		mulsd	(%rax,%rbx,8), %xmm1
 2320      D8
 2321 0212 4883C301 		addq	$1, %rbx
 2322              	.LVL326:
 2323 0216 E8000000 		call	glVertex3d
 2323      00
 2324              	.LVL327:
 2325              		.loc 1 514 0 discriminator 2
 2326 021b 39DD     		cmpl	%ebx, %ebp
 2327 021d 7D89     		jge	.L141
 2328              	.L136:
 2329              		.loc 1 520 0
 2330 021f E8000000 		call	glEnd
 2330      00
 2331              	.LVL328:
 2332              		.loc 1 508 0
 2333 0224 4183C401 		addl	$1, %r12d
 2334              	.LVL329:
 2335              		.loc 1 522 0
 2336 0228 F20F105C 		movsd	8(%rsp), %xmm3
 2336      2408
 2337 022e F20F1044 		movsd	40(%rsp), %xmm0
 2337      2428
 2338              		.loc 1 508 0
 2339 0234 4539E5   		cmpl	%r12d, %r13d
 2340              		.loc 1 522 0
 2341 0237 F20F58C3 		addsd	%xmm3, %xmm0
 2342              	.LVL330:
 2343              		.loc 1 508 0
 2344 023b 7C11     		jl	.L134
 2345              		.loc 1 522 0
 2346 023d F20F115C 		movsd	%xmm3, 16(%rsp)
 2346      2410
 2347 0243 F20F1144 		movsd	%xmm0, 8(%rsp)
 2347      2408
 2348              	.LVL331:
 2349 0249 E93AFFFF 		jmp	.L142
 2349      FF
 2350              	.LVL332:
 2351              	.L134:
 2352              		.loc 1 527 0
 2353 024e 488B7C24 		movq	56(%rsp), %rdi
 2353      38
 2354 0253 E8000000 		call	free
 2354      00
 2355              	.LVL333:
 2356              		.loc 1 528 0
 2357 0258 488B7C24 		movq	64(%rsp), %rdi
 2357      40
 2358 025d E8000000 		call	free
 2358      00
 2359              	.LVL334:
 2360              		.loc 1 529 0
 2361 0262 488B4424 		movq	72(%rsp), %rax
 2361      48
 2362 0267 64483304 		xorq	%fs:40, %rax
 2362      25280000 
 2362      00
 2363 0270 7558     		jne	.L148
 2364 0272 4883C458 		addq	$88, %rsp
 2365              		.cfi_remember_state
 2366              		.cfi_def_cfa_offset 40
 2367              	.LVL335:
 2368 0276 5B       		popq	%rbx
 2369              		.cfi_def_cfa_offset 32
 2370 0277 5D       		popq	%rbp
 2371              		.cfi_def_cfa_offset 24
 2372              	.LVL336:
 2373 0278 415C     		popq	%r12
 2374              		.cfi_def_cfa_offset 16
 2375 027a 415D     		popq	%r13
 2376              		.cfi_def_cfa_offset 8
 2377              	.LVL337:
 2378 027c C3       		ret
 2379              	.LVL338:
 2380              	.L127:
 2381              		.cfi_restore_state
 2382              		.loc 1 494 0
 2383 027d E8000000 		call	glEnd
 2383      00
 2384              	.LVL339:
 2385              		.loc 1 496 0
 2386 0282 BF060000 		movl	$6, %edi
 2386      00
 2387 0287 E8000000 		call	glBegin
 2387      00
 2388              	.LVL340:
 2389              		.loc 1 497 0
 2390 028c 660FEFC9 		pxor	%xmm1, %xmm1
 2391 0290 F20F1015 		movsd	.LC2(%rip), %xmm2
 2391      00000000 
 2392 0298 660F28C1 		movapd	%xmm1, %xmm0
 2393 029c E8000000 		call	glNormal3d
 2393      00
 2394              	.LVL341:
 2395              		.loc 1 498 0
 2396 02a1 660FEFC9 		pxor	%xmm1, %xmm1
 2397 02a5 F20F1054 		movsd	32(%rsp), %xmm2
 2397      2420
 2398 02ab 660F28C1 		movapd	%xmm1, %xmm0
 2399 02af E8000000 		call	glVertex3d
 2399      00
 2400              	.LVL342:
 2401 02b4 E998FEFF 		jmp	.L138
 2401      FF
 2402              	.LVL343:
 2403              	.L147:
 2404              		.loc 1 511 0
 2405 02b9 F20F107C 		movsd	32(%rsp), %xmm7
 2405      2420
 2406 02bf F20F117C 		movsd	%xmm7, 8(%rsp)
 2406      2408
 2407              	.LVL344:
 2408 02c5 E9C7FEFF 		jmp	.L132
 2408      FF
 2409              	.LVL345:
 2410              	.L148:
 2411              		.loc 1 529 0
 2412 02ca E8000000 		call	__stack_chk_fail
 2412      00
 2413              	.LVL346:
 2414              		.cfi_endproc
 2415              	.LFE382:
 2417              		.section	.text.unlikely._Z17glutSolidCylinderddii
 2418              	.LCOLDE13:
 2419              		.section	.text._Z17glutSolidCylinderddii
 2420              	.LHOTE13:
 2421              		.section	.text.unlikely._Z16glutWireCylinderddii,"ax",@progbits
 2422              	.LCOLDB14:
 2423              		.section	.text._Z16glutWireCylinderddii,"ax",@progbits
 2424              	.LHOTB14:
 2425              		.p2align 4,,15
 2426              		.globl	_Z16glutWireCylinderddii
 2428              	_Z16glutWireCylinderddii:
 2429              	.LFB383:
 2430              		.loc 1 535 0
 2431              		.cfi_startproc
 2432              	.LVL347:
 2433 0000 4156     		pushq	%r14
 2434              		.cfi_def_cfa_offset 16
 2435              		.cfi_offset 14, -16
 2436 0002 4155     		pushq	%r13
 2437              		.cfi_def_cfa_offset 24
 2438              		.cfi_offset 13, -24
 2439              		.loc 1 547 0
 2440 0004 89FA     		movl	%edi, %edx
 2441              		.loc 1 535 0
 2442 0006 4154     		pushq	%r12
 2443              		.cfi_def_cfa_offset 32
 2444              		.cfi_offset 12, -32
 2445 0008 55       		pushq	%rbp
 2446              		.cfi_def_cfa_offset 40
 2447              		.cfi_offset 6, -40
 2448 0009 4189F5   		movl	%esi, %r13d
 2449 000c 53       		pushq	%rbx
 2450              		.cfi_def_cfa_offset 48
 2451              		.cfi_offset 3, -48
 2452 000d 660F28E9 		movapd	%xmm1, %xmm5
 2453 0011 4189FE   		movl	%edi, %r14d
 2454 0014 4883EC40 		subq	$64, %rsp
 2455              		.cfi_def_cfa_offset 112
 2456              		.loc 1 535 0
 2457 0018 F20F1104 		movsd	%xmm0, (%rsp)
 2457      24
 2458              		.loc 1 541 0
 2459 001d 660FEFC0 		pxor	%xmm0, %xmm0
 2460              	.LVL348:
 2461              		.loc 1 535 0
 2462 0021 64488B04 		movq	%fs:40, %rax
 2462      25280000 
 2462      00
 2463 002a 48894424 		movq	%rax, 56(%rsp)
 2463      38
 2464 002f 31C0     		xorl	%eax, %eax
 2465              	.LVL349:
 2466              		.loc 1 541 0
 2467 0031 85F6     		testl	%esi, %esi
 2468 0033 B8010000 		movl	$1, %eax
 2468      00
 2469              		.loc 1 547 0
 2470 0038 488D7C24 		leaq	40(%rsp), %rdi
 2470      28
 2471              	.LVL350:
 2472              		.loc 1 541 0
 2473 003d 0F4FC6   		cmovg	%esi, %eax
 2474              		.loc 1 547 0
 2475 0040 488D7424 		leaq	48(%rsp), %rsi
 2475      30
 2476              	.LVL351:
 2477 0045 F7DA     		negl	%edx
 2478              	.LVL352:
 2479              		.loc 1 541 0
 2480 0047 F20F2AC0 		cvtsi2sd	%eax, %xmm0
 2481              		.loc 1 535 0
 2482 004b F20F114C 		movsd	%xmm1, 16(%rsp)
 2482      2410
 2483              		.loc 1 541 0
 2484 0051 F20F5EE8 		divsd	%xmm0, %xmm5
 2485 0055 F20F116C 		movsd	%xmm5, 24(%rsp)
 2485      2418
 2486              	.LVL353:
 2487              		.loc 1 547 0
 2488 005b E8000000 		call	_ZL14fghCircleTablePPdS0_i
 2488      00
 2489              	.LVL354:
 2490              		.loc 1 551 0
 2491 0060 4585ED   		testl	%r13d, %r13d
 2492 0063 0F88B100 		js	.L155
 2492      0000
 2493 0069 660FEFF6 		pxor	%xmm6, %xmm6
 2494 006d 418D46FF 		leal	-1(%r14), %eax
 2495 0071 4531E4   		xorl	%r12d, %r12d
 2496 0074 488D2CC5 		leaq	8(,%rax,8), %rbp
 2496      08000000 
 2497 007c F20F1174 		movsd	%xmm6, 8(%rsp)
 2497      2408
 2498              	.LVL355:
 2499              		.p2align 4,,10
 2500 0082 660F1F44 		.p2align 3
 2500      0000
 2501              	.L156:
 2502              		.loc 1 553 0
 2503 0088 4539E5   		cmpl	%r12d, %r13d
 2504 008b 0F845901 		je	.L166
 2504      0000
 2505              	.LVL356:
 2506              	.L153:
 2507              		.loc 1 556 0
 2508 0091 BF020000 		movl	$2, %edi
 2508      00
 2509              		.loc 1 558 0
 2510 0096 31DB     		xorl	%ebx, %ebx
 2511              		.loc 1 556 0
 2512 0098 E8000000 		call	glBegin
 2512      00
 2513              	.LVL357:
 2514              		.loc 1 558 0
 2515 009d 4585F6   		testl	%r14d, %r14d
 2516 00a0 7E54     		jle	.L157
 2517              	.LVL358:
 2518              		.p2align 4,,10
 2519 00a2 660F1F44 		.p2align 3
 2519      0000
 2520              	.L161:
 2521              		.loc 1 560 0 discriminator 2
 2522 00a8 488B4424 		movq	48(%rsp), %rax
 2522      30
 2523 00ad 660FEFD2 		pxor	%xmm2, %xmm2
 2524 00b1 F20F1004 		movsd	(%rax,%rbx), %xmm0
 2524      18
 2525 00b6 488B4424 		movq	40(%rsp), %rax
 2525      28
 2526 00bb F20F100C 		movsd	(%rax,%rbx), %xmm1
 2526      18
 2527 00c0 E8000000 		call	glNormal3d
 2527      00
 2528              	.LVL359:
 2529              		.loc 1 561 0 discriminator 2
 2530 00c5 488B4424 		movq	48(%rsp), %rax
 2530      30
 2531 00ca F20F100C 		movsd	(%rsp), %xmm1
 2531      24
 2532 00cf F20F1054 		movsd	8(%rsp), %xmm2
 2532      2408
 2533 00d5 F20F1004 		movsd	(%rax,%rbx), %xmm0
 2533      18
 2534 00da 488B4424 		movq	40(%rsp), %rax
 2534      28
 2535 00df F20F59C1 		mulsd	%xmm1, %xmm0
 2536 00e3 F20F590C 		mulsd	(%rax,%rbx), %xmm1
 2536      18
 2537 00e8 4883C308 		addq	$8, %rbx
 2538 00ec E8000000 		call	glVertex3d
 2538      00
 2539              	.LVL360:
 2540              		.loc 1 558 0 discriminator 2
 2541 00f1 4839EB   		cmpq	%rbp, %rbx
 2542 00f4 75B2     		jne	.L161
 2543              	.L157:
 2544              		.loc 1 564 0
 2545 00f6 E8000000 		call	glEnd
 2545      00
 2546              	.LVL361:
 2547              		.loc 1 566 0
 2548 00fb F20F105C 		movsd	8(%rsp), %xmm3
 2548      2408
 2549              		.loc 1 551 0
 2550 0101 4183C401 		addl	$1, %r12d
 2551              	.LVL362:
 2552 0105 4539E5   		cmpl	%r12d, %r13d
 2553              		.loc 1 566 0
 2554 0108 F20F585C 		addsd	24(%rsp), %xmm3
 2554      2418
 2555 010e F20F115C 		movsd	%xmm3, 8(%rsp)
 2555      2408
 2556              	.LVL363:
 2557              		.loc 1 551 0
 2558 0114 0F8D6EFF 		jge	.L156
 2558      FFFF
 2559              	.LVL364:
 2560              	.L155:
 2561              		.loc 1 571 0
 2562 011a BF010000 		movl	$1, %edi
 2562      00
 2563 011f E8000000 		call	glBegin
 2563      00
 2564              	.LVL365:
 2565              		.loc 1 573 0
 2566 0124 4585F6   		testl	%r14d, %r14d
 2567 0127 0F8E8700 		jle	.L151
 2567      0000
 2568 012d 418D46FF 		leal	-1(%r14), %eax
 2569 0131 31DB     		xorl	%ebx, %ebx
 2570 0133 488D2CC5 		leaq	8(,%rax,8), %rbp
 2570      08000000 
 2571              	.LVL366:
 2572 013b 0F1F4400 		.p2align 4,,10
 2572      00
 2573              		.p2align 3
 2574              	.L159:
 2575              		.loc 1 575 0 discriminator 2
 2576 0140 488B4424 		movq	48(%rsp), %rax
 2576      30
 2577 0145 660FEFD2 		pxor	%xmm2, %xmm2
 2578 0149 F20F1004 		movsd	(%rax,%rbx), %xmm0
 2578      18
 2579 014e 488B4424 		movq	40(%rsp), %rax
 2579      28
 2580 0153 F20F100C 		movsd	(%rax,%rbx), %xmm1
 2580      18
 2581 0158 E8000000 		call	glNormal3d
 2581      00
 2582              	.LVL367:
 2583              		.loc 1 576 0 discriminator 2
 2584 015d 488B4424 		movq	48(%rsp), %rax
 2584      30
 2585 0162 F20F100C 		movsd	(%rsp), %xmm1
 2585      24
 2586 0167 660FEFD2 		pxor	%xmm2, %xmm2
 2587 016b F20F1004 		movsd	(%rax,%rbx), %xmm0
 2587      18
 2588 0170 488B4424 		movq	40(%rsp), %rax
 2588      28
 2589 0175 F20F59C1 		mulsd	%xmm1, %xmm0
 2590 0179 F20F590C 		mulsd	(%rax,%rbx), %xmm1
 2590      18
 2591 017e E8000000 		call	glVertex3d
 2591      00
 2592              	.LVL368:
 2593              		.loc 1 577 0 discriminator 2
 2594 0183 488B4424 		movq	48(%rsp), %rax
 2594      30
 2595 0188 F20F100C 		movsd	(%rsp), %xmm1
 2595      24
 2596 018d F20F1054 		movsd	16(%rsp), %xmm2
 2596      2410
 2597 0193 F20F1004 		movsd	(%rax,%rbx), %xmm0
 2597      18
 2598 0198 488B4424 		movq	40(%rsp), %rax
 2598      28
 2599 019d F20F59C1 		mulsd	%xmm1, %xmm0
 2600 01a1 F20F590C 		mulsd	(%rax,%rbx), %xmm1
 2600      18
 2601 01a6 4883C308 		addq	$8, %rbx
 2602 01aa E8000000 		call	glVertex3d
 2602      00
 2603              	.LVL369:
 2604              		.loc 1 573 0 discriminator 2
 2605 01af 4839DD   		cmpq	%rbx, %rbp
 2606 01b2 758C     		jne	.L159
 2607              	.L151:
 2608              		.loc 1 580 0
 2609 01b4 E8000000 		call	glEnd
 2609      00
 2610              	.LVL370:
 2611              		.loc 1 584 0
 2612 01b9 488B7C24 		movq	40(%rsp), %rdi
 2612      28
 2613 01be E8000000 		call	free
 2613      00
 2614              	.LVL371:
 2615              		.loc 1 585 0
 2616 01c3 488B7C24 		movq	48(%rsp), %rdi
 2616      30
 2617 01c8 E8000000 		call	free
 2617      00
 2618              	.LVL372:
 2619              		.loc 1 586 0
 2620 01cd 488B4424 		movq	56(%rsp), %rax
 2620      38
 2621 01d2 64483304 		xorq	%fs:40, %rax
 2621      25280000 
 2621      00
 2622 01db 751E     		jne	.L167
 2623 01dd 4883C440 		addq	$64, %rsp
 2624              		.cfi_remember_state
 2625              		.cfi_def_cfa_offset 48
 2626              	.LVL373:
 2627 01e1 5B       		popq	%rbx
 2628              		.cfi_def_cfa_offset 40
 2629 01e2 5D       		popq	%rbp
 2630              		.cfi_def_cfa_offset 32
 2631 01e3 415C     		popq	%r12
 2632              		.cfi_def_cfa_offset 24
 2633 01e5 415D     		popq	%r13
 2634              		.cfi_def_cfa_offset 16
 2635              	.LVL374:
 2636 01e7 415E     		popq	%r14
 2637              		.cfi_def_cfa_offset 8
 2638              	.LVL375:
 2639 01e9 C3       		ret
 2640              	.LVL376:
 2641              	.L166:
 2642              		.cfi_restore_state
 2643              		.loc 1 554 0
 2644 01ea F20F107C 		movsd	16(%rsp), %xmm7
 2644      2410
 2645 01f0 F20F117C 		movsd	%xmm7, 8(%rsp)
 2645      2408
 2646              	.LVL377:
 2647 01f6 E996FEFF 		jmp	.L153
 2647      FF
 2648              	.LVL378:
 2649              	.L167:
 2650              		.loc 1 586 0
 2651 01fb E8000000 		call	__stack_chk_fail
 2651      00
 2652              	.LVL379:
 2653              		.cfi_endproc
 2654              	.LFE383:
 2656              		.section	.text.unlikely._Z16glutWireCylinderddii
 2657              	.LCOLDE14:
 2658              		.section	.text._Z16glutWireCylinderddii
 2659              	.LHOTE14:
 2660              		.section	.text.unlikely._Z13glutWireTorusddii,"ax",@progbits
 2661              	.LCOLDB16:
 2662              		.section	.text._Z13glutWireTorusddii,"ax",@progbits
 2663              	.LHOTB16:
 2664              		.p2align 4,,15
 2665              		.globl	_Z13glutWireTorusddii
 2667              	_Z13glutWireTorusddii:
 2668              	.LFB384:
 2669              		.loc 1 592 0
 2670              		.cfi_startproc
 2671              	.LVL380:
 2672 0000 4157     		pushq	%r15
 2673              		.cfi_def_cfa_offset 16
 2674              		.cfi_offset 15, -16
 2675 0002 4156     		pushq	%r14
 2676              		.cfi_def_cfa_offset 24
 2677              		.cfi_offset 14, -24
 2678 0004 4155     		pushq	%r13
 2679              		.cfi_def_cfa_offset 32
 2680              		.cfi_offset 13, -32
 2681 0006 4154     		pushq	%r12
 2682              		.cfi_def_cfa_offset 40
 2683              		.cfi_offset 12, -40
 2684 0008 4189F4   		movl	%esi, %r12d
 2685 000b 55       		pushq	%rbp
 2686              		.cfi_def_cfa_offset 48
 2687              		.cfi_offset 6, -48
 2688 000c 53       		pushq	%rbx
 2689              		.cfi_def_cfa_offset 56
 2690              		.cfi_offset 3, -56
 2691 000d 660F28F0 		movapd	%xmm0, %xmm6
 2692 0011 4881EC98 		subq	$152, %rsp
 2692      000000
 2693              		.cfi_def_cfa_offset 208
 2694              		.loc 1 598 0
 2695 0018 85FF     		testl	%edi, %edi
 2696              		.loc 1 592 0
 2697 001a F20F114C 		movsd	%xmm1, 40(%rsp)
 2697      2428
 2698              	.LVL381:
 2699              		.loc 1 598 0
 2700 0020 0F8E4303 		jle	.L179
 2700      0000
 2701 0026 8D2C7F   		leal	(%rdi,%rdi,2), %ebp
 2702 0029 89FB     		movl	%edi, %ebx
 2703              	.L169:
 2704              		.loc 1 599 0
 2705 002b 4585E4   		testl	%r12d, %r12d
 2706 002e B8010000 		movl	$1, %eax
 2706      00
 2707              		.loc 1 602 0
 2708 0033 BF080000 		movl	$8, %edi
 2708      00
 2709              	.LVL382:
 2710              		.loc 1 599 0
 2711 0038 440F4EE0 		cmovle	%eax, %r12d
 2712 003c F20F1134 		movsd	%xmm6, (%rsp)
 2712      24
 2713              	.LVL383:
 2714              		.loc 1 602 0
 2715 0041 410FAFEC 		imull	%r12d, %ebp
 2716 0045 4863ED   		movslq	%ebp, %rbp
 2717 0048 4889EE   		movq	%rbp, %rsi
 2718 004b E8000000 		call	calloc
 2718      00
 2719              	.LVL384:
 2720              		.loc 1 603 0
 2721 0050 4889EE   		movq	%rbp, %rsi
 2722 0053 BF080000 		movl	$8, %edi
 2722      00
 2723              		.loc 1 602 0
 2724 0058 4989C7   		movq	%rax, %r15
 2725 005b 48894424 		movq	%rax, 88(%rsp)
 2725      58
 2726              	.LVL385:
 2727 0060 8D2C5B   		leal	(%rbx,%rbx,2), %ebp
 2728              		.loc 1 608 0
 2729 0063 4D89FD   		movq	%r15, %r13
 2730              		.loc 1 603 0
 2731 0066 E8000000 		call	calloc
 2731      00
 2732              	.LVL386:
 2733 006b 4989C6   		movq	%rax, %r14
 2734 006e 48894424 		movq	%rax, 96(%rsp)
 2734      60
 2735              	.LVL387:
 2736 0073 4863ED   		movslq	%ebp, %rbp
 2737              		.loc 1 605 0
 2738 0076 E8000000 		call	glPushMatrix
 2738      00
 2739              	.LVL388:
 2740              		.loc 1 607 0
 2741 007b 660FEFC0 		pxor	%xmm0, %xmm0
 2742 007f 8D43FF   		leal	-1(%rbx), %eax
 2743 0082 F20F100D 		movsd	.LC0(%rip), %xmm1
 2743      00000000 
 2744 008a 48C1E503 		salq	$3, %rbp
 2745 008e 48894424 		movq	%rax, 104(%rsp)
 2745      68
 2746              		.loc 1 608 0
 2747 0093 660FEFED 		pxor	%xmm5, %xmm5
 2748              		.loc 1 607 0
 2749 0097 F2410F2A 		cvtsi2sd	%r12d, %xmm0
 2749      C4
 2750 009c 488D0440 		leaq	(%rax,%rax,2), %rax
 2751              		.loc 1 608 0
 2752 00a0 F20F1025 		movsd	.LC2(%rip), %xmm4
 2752      00000000 
 2753 00a8 4C897C24 		movq	%r15, 120(%rsp)
 2753      78
 2754 00ad 488D04C5 		leaq	24(,%rax,8), %rax
 2754      18000000 
 2755              		.loc 1 609 0
 2756 00b5 F20F116C 		movsd	%xmm5, 48(%rsp)
 2756      2430
 2757 00bb 4C897424 		movq	%r14, 112(%rsp)
 2757      70
 2758 00c0 F20F1034 		movsd	(%rsp), %xmm6
 2758      24
 2759              	.LBB2:
 2760              		.loc 1 611 0
 2761 00c5 4531FF   		xorl	%r15d, %r15d
 2762 00c8 48894424 		movq	%rax, 56(%rsp)
 2762      38
 2763 00cd 48896C24 		movq	%rbp, 64(%rsp)
 2763      40
 2764 00d2 44896424 		movl	%r12d, 76(%rsp)
 2764      4C
 2765              	.LBE2:
 2766              		.loc 1 607 0
 2767 00d7 F20F5EC8 		divsd	%xmm0, %xmm1
 2768              		.loc 1 608 0
 2769 00db 660FEFC0 		pxor	%xmm0, %xmm0
 2770 00df F20F2AC3 		cvtsi2sd	%ebx, %xmm0
 2771              		.loc 1 607 0
 2772 00e3 F20F114C 		movsd	%xmm1, 80(%rsp)
 2772      2450
 2773              	.LVL389:
 2774              		.loc 1 608 0
 2775 00e9 F20F100D 		movsd	.LC15(%rip), %xmm1
 2775      00000000 
 2776              	.LVL390:
 2777 00f1 F20F5EC8 		divsd	%xmm0, %xmm1
 2778 00f5 F20F114C 		movsd	%xmm1, 32(%rsp)
 2778      2420
 2779              	.LVL391:
 2780 00fb 0F1F4400 		.p2align 4,,10
 2780      00
 2781              		.p2align 3
 2782              	.L174:
 2783 0100 488B4424 		movq	56(%rsp), %rax
 2783      38
 2784              	.LBB8:
 2785              	.LBB3:
 2786              		.loc 1 614 0
 2787 0105 660FEFDB 		pxor	%xmm3, %xmm3
 2788 0109 4C89F5   		movq	%r14, %rbp
 2789 010c 4D89EC   		movq	%r13, %r12
 2790 010f F20F100D 		movsd	.LC2(%rip), %xmm1
 2790      00000000 
 2791 0117 4A8D1C28 		leaq	(%rax,%r13), %rbx
 2792              		.loc 1 615 0
 2793 011b 660F28D3 		movapd	%xmm3, %xmm2
 2794 011f EB55     		jmp	.L172
 2795              	.LVL392:
 2796              		.p2align 4,,10
 2797 0121 0F1F8000 		.p2align 3
 2797      000000
 2798              	.L186:
 2799 0128 660F28C2 		movapd	%xmm2, %xmm0
 2800 012c 488DB424 		leaq	128(%rsp), %rsi
 2800      80000000 
 2801 0134 488DBC24 		leaq	136(%rsp), %rdi
 2801      88000000 
 2802 013c F20F1174 		movsd	%xmm6, 24(%rsp)
 2802      2418
 2803 0142 F20F1154 		movsd	%xmm2, 16(%rsp)
 2803      2410
 2804 0148 E8000000 		call	sincos
 2804      00
 2805              	.LVL393:
 2806 014d F20F108C 		movsd	128(%rsp), %xmm1
 2806      24800000 
 2806      00
 2807 0156 F20F109C 		movsd	136(%rsp), %xmm3
 2807      24880000 
 2807      00
 2808 015f F20F1054 		movsd	16(%rsp), %xmm2
 2808      2410
 2809 0165 F20F1074 		movsd	24(%rsp), %xmm6
 2809      2418
 2810 016b F20F102C 		movsd	(%rsp), %xmm5
 2810      24
 2811 0170 F20F1064 		movsd	8(%rsp), %xmm4
 2811      2408
 2812              	.LVL394:
 2813              	.L172:
 2814              	.LBB4:
 2815              	.LBB5:
 2816              		.loc 1 622 0 discriminator 2
 2817 0176 660F28C6 		movapd	%xmm6, %xmm0
 2818 017a 660F28FC 		movapd	%xmm4, %xmm7
 2819 017e 4983C418 		addq	$24, %r12
 2820              		.loc 1 627 0 discriminator 2
 2821 0182 F20F115D 		movsd	%xmm3, 16(%rbp)
 2821      10
 2822 0187 4883C518 		addq	$24, %rbp
 2823              		.loc 1 622 0 discriminator 2
 2824 018b F20F59C1 		mulsd	%xmm1, %xmm0
 2825              		.loc 1 625 0 discriminator 2
 2826 018f F20F1164 		movsd	%xmm4, 8(%rsp)
 2826      2408
 2827              		.loc 1 628 0 discriminator 2
 2828 0195 F20F5854 		addsd	32(%rsp), %xmm2
 2828      2420
 2829              	.LVL395:
 2830              		.loc 1 626 0 discriminator 2
 2831 019b F20F112C 		movsd	%xmm5, (%rsp)
 2831      24
 2832              		.loc 1 622 0 discriminator 2
 2833 01a0 F20F5844 		addsd	40(%rsp), %xmm0
 2833      2428
 2834 01a6 F20F59F8 		mulsd	%xmm0, %xmm7
 2835              		.loc 1 623 0 discriminator 2
 2836 01aa F20F59C5 		mulsd	%xmm5, %xmm0
 2837              		.loc 1 622 0 discriminator 2
 2838 01ae F2410F11 		movsd	%xmm7, -24(%r12)
 2838      7C24E8
 2839              		.loc 1 623 0 discriminator 2
 2840 01b5 F2410F11 		movsd	%xmm0, -16(%r12)
 2840      4424F0
 2841              		.loc 1 624 0 discriminator 2
 2842 01bc 660F28C6 		movapd	%xmm6, %xmm0
 2843 01c0 F20F59C3 		mulsd	%xmm3, %xmm0
 2844 01c4 F2410F11 		movsd	%xmm0, -8(%r12)
 2844      4424F8
 2845              		.loc 1 625 0 discriminator 2
 2846 01cb 660F28C4 		movapd	%xmm4, %xmm0
 2847 01cf F20F59C1 		mulsd	%xmm1, %xmm0
 2848              		.loc 1 626 0 discriminator 2
 2849 01d3 F20F59CD 		mulsd	%xmm5, %xmm1
 2850              	.LVL396:
 2851              		.loc 1 625 0 discriminator 2
 2852 01d7 F20F1145 		movsd	%xmm0, -24(%rbp)
 2852      E8
 2853              		.loc 1 626 0 discriminator 2
 2854 01dc F20F114D 		movsd	%xmm1, -16(%rbp)
 2854      F0
 2855              	.LBE5:
 2856              		.loc 1 617 0 discriminator 2
 2857 01e1 4939DC   		cmpq	%rbx, %r12
 2858 01e4 0F853EFF 		jne	.L186
 2858      FFFF
 2859              	.LBE4:
 2860              		.loc 1 631 0 discriminator 2
 2861 01ea F20F1054 		movsd	48(%rsp), %xmm2
 2861      2430
 2862              	.LVL397:
 2863 01f0 488B4424 		movq	64(%rsp), %rax
 2863      40
 2864              	.LBE3:
 2865              		.loc 1 611 0 discriminator 2
 2866 01f5 4183C701 		addl	$1, %r15d
 2867              	.LVL398:
 2868 01f9 F20F1134 		movsd	%xmm6, (%rsp)
 2868      24
 2869              	.LBB6:
 2870              		.loc 1 631 0 discriminator 2
 2871 01fe F20F5854 		addsd	80(%rsp), %xmm2
 2871      2450
 2872 0204 4901C5   		addq	%rax, %r13
 2873 0207 4901C6   		addq	%rax, %r14
 2874              	.LBE6:
 2875              		.loc 1 611 0 discriminator 2
 2876 020a 44397C24 		cmpl	%r15d, 76(%rsp)
 2876      4C
 2877              	.LBB7:
 2878              		.loc 1 631 0 discriminator 2
 2879 020f F20F1154 		movsd	%xmm2, 48(%rsp)
 2879      2430
 2880              	.LVL399:
 2881              	.LBE7:
 2882              		.loc 1 611 0 discriminator 2
 2883 0215 7435     		je	.L173
 2884 0217 488DB424 		leaq	128(%rsp), %rsi
 2884      80000000 
 2885 021f 488DBC24 		leaq	136(%rsp), %rdi
 2885      88000000 
 2886 0227 660F28C2 		movapd	%xmm2, %xmm0
 2887 022b E8000000 		call	sincos
 2887      00
 2888              	.LVL400:
 2889 0230 F20F10A4 		movsd	128(%rsp), %xmm4
 2889      24800000 
 2889      00
 2890              	.LVL401:
 2891 0239 F20F10AC 		movsd	136(%rsp), %xmm5
 2891      24880000 
 2891      00
 2892 0242 F20F1034 		movsd	(%rsp), %xmm6
 2892      24
 2893 0247 E9B4FEFF 		jmp	.L174
 2893      FF
 2894              	.LVL402:
 2895              	.L173:
 2896 024c 488B4424 		movq	104(%rsp), %rax
 2896      68
 2897 0251 488B5424 		movq	96(%rsp), %rdx
 2897      60
 2898 0256 488B6C24 		movq	64(%rsp), %rbp
 2898      40
 2899 025b 448B6424 		movl	76(%rsp), %r12d
 2899      4C
 2900 0260 488D4440 		leaq	3(%rax,%rax,2), %rax
 2900      03
 2901              		.loc 1 611 0 is_stmt 0
 2902 0265 4989D5   		movq	%rdx, %r13
 2903 0268 488D04C2 		leaq	(%rdx,%rax,8), %rax
 2904 026c 48894424 		movq	%rax, 8(%rsp)
 2904      08
 2905 0271 488B4424 		movq	88(%rsp), %rax
 2905      58
 2906 0276 48890424 		movq	%rax, (%rsp)
 2907              	.LVL403:
 2908 027a 660F1F44 		.p2align 4,,10
 2908      0000
 2909              		.p2align 3
 2910              	.L176:
 2911              	.LBE8:
 2912              	.LBB9:
 2913              	.LBB10:
 2914              		.loc 1 636 0 is_stmt 1
 2915 0280 BF020000 		movl	$2, %edi
 2915      00
 2916 0285 4D89EE   		movq	%r13, %r14
 2917              	.LBB11:
 2918              		.loc 1 638 0
 2919 0288 4531FF   		xorl	%r15d, %r15d
 2920              	.LVL404:
 2921              	.LBE11:
 2922              		.loc 1 636 0
 2923 028b E8000000 		call	glBegin
 2923      00
 2924              	.LVL405:
 2925 0290 488B1C24 		movq	(%rsp), %rbx
 2926              	.LVL406:
 2927              		.p2align 4,,10
 2928 0294 0F1F4000 		.p2align 3
 2929              	.L175:
 2930              	.LBB14:
 2931              	.LBB12:
 2932              		.loc 1 641 0 discriminator 2
 2933 0298 4C89F7   		movq	%r14, %rdi
 2934              	.LBE12:
 2935              		.loc 1 638 0 discriminator 2
 2936 029b 4183C701 		addl	$1, %r15d
 2937              	.LVL407:
 2938 029f 4901EE   		addq	%rbp, %r14
 2939              	.LBB13:
 2940              		.loc 1 641 0 discriminator 2
 2941 02a2 E8000000 		call	glNormal3dv
 2941      00
 2942              	.LVL408:
 2943              		.loc 1 642 0 discriminator 2
 2944 02a7 4889DF   		movq	%rbx, %rdi
 2945 02aa 4801EB   		addq	%rbp, %rbx
 2946 02ad E8000000 		call	glVertex3dv
 2946      00
 2947              	.LVL409:
 2948              	.LBE13:
 2949              		.loc 1 638 0 discriminator 2
 2950 02b2 4539FC   		cmpl	%r15d, %r12d
 2951 02b5 75E1     		jne	.L175
 2952              	.LBE14:
 2953              		.loc 1 645 0 discriminator 2
 2954 02b7 E8000000 		call	glEnd
 2954      00
 2955              	.LVL410:
 2956 02bc 4983C518 		addq	$24, %r13
 2957 02c0 48830424 		addq	$24, (%rsp)
 2957      18
 2958              	.LBE10:
 2959              		.loc 1 634 0 discriminator 2
 2960 02c5 4C396C24 		cmpq	%r13, 8(%rsp)
 2960      08
 2961 02ca 75B4     		jne	.L176
 2962 02cc 4C8B6C24 		movq	112(%rsp), %r13
 2962      70
 2963 02d1 4C8B7C24 		movq	120(%rsp), %r15
 2963      78
 2964              	.LVL411:
 2965 02d6 4531F6   		xorl	%r14d, %r14d
 2966 02d9 48892C24 		movq	%rbp, (%rsp)
 2967 02dd 44896424 		movl	%r12d, 8(%rsp)
 2967      08
 2968              		.p2align 4,,10
 2969 02e2 660F1F44 		.p2align 3
 2969      0000
 2970              	.L178:
 2971              	.LVL412:
 2972              	.LBE9:
 2973              	.LBB15:
 2974              	.LBB16:
 2975              		.loc 1 650 0
 2976 02e8 BF020000 		movl	$2, %edi
 2976      00
 2977 02ed 4C89FB   		movq	%r15, %rbx
 2978 02f0 4C89ED   		movq	%r13, %rbp
 2979 02f3 E8000000 		call	glBegin
 2979      00
 2980              	.LVL413:
 2981 02f8 488B4424 		movq	56(%rsp), %rax
 2981      38
 2982 02fd 4E8D2428 		leaq	(%rax,%r13), %r12
 2983              	.LVL414:
 2984              		.p2align 4,,10
 2985 0301 0F1F8000 		.p2align 3
 2985      000000
 2986              	.L177:
 2987              	.LBB17:
 2988              	.LBB18:
 2989              		.loc 1 655 0 discriminator 2
 2990 0308 4889EF   		movq	%rbp, %rdi
 2991 030b 4883C518 		addq	$24, %rbp
 2992 030f E8000000 		call	glNormal3dv
 2992      00
 2993              	.LVL415:
 2994              		.loc 1 656 0 discriminator 2
 2995 0314 4889DF   		movq	%rbx, %rdi
 2996 0317 4883C318 		addq	$24, %rbx
 2997 031b E8000000 		call	glVertex3dv
 2997      00
 2998              	.LVL416:
 2999              	.LBE18:
 3000              		.loc 1 652 0 discriminator 2
 3001 0320 4939EC   		cmpq	%rbp, %r12
 3002 0323 75E3     		jne	.L177
 3003              	.LBE17:
 3004              		.loc 1 659 0 discriminator 2
 3005 0325 E8000000 		call	glEnd
 3005      00
 3006              	.LVL417:
 3007 032a 488B0424 		movq	(%rsp), %rax
 3008              	.LBE16:
 3009              		.loc 1 648 0 discriminator 2
 3010 032e 4183C601 		addl	$1, %r14d
 3011              	.LVL418:
 3012 0332 4901C5   		addq	%rax, %r13
 3013 0335 4901C7   		addq	%rax, %r15
 3014 0338 44397424 		cmpl	%r14d, 8(%rsp)
 3014      08
 3015 033d 75A9     		jne	.L178
 3016              	.LBE15:
 3017              		.loc 1 662 0
 3018 033f 488B7C24 		movq	88(%rsp), %rdi
 3018      58
 3019 0344 E8000000 		call	free
 3019      00
 3020              	.LVL419:
 3021              		.loc 1 663 0
 3022 0349 488B7C24 		movq	96(%rsp), %rdi
 3022      60
 3023 034e E8000000 		call	free
 3023      00
 3024              	.LVL420:
 3025              		.loc 1 665 0
 3026 0353 4881C498 		addq	$152, %rsp
 3026      000000
 3027              		.cfi_remember_state
 3028              		.cfi_def_cfa_offset 56
 3029 035a 5B       		popq	%rbx
 3030              		.cfi_def_cfa_offset 48
 3031 035b 5D       		popq	%rbp
 3032              		.cfi_def_cfa_offset 40
 3033 035c 415C     		popq	%r12
 3034              		.cfi_def_cfa_offset 32
 3035 035e 415D     		popq	%r13
 3036              		.cfi_def_cfa_offset 24
 3037 0360 415E     		popq	%r14
 3038              		.cfi_def_cfa_offset 16
 3039              	.LVL421:
 3040 0362 415F     		popq	%r15
 3041              		.cfi_def_cfa_offset 8
 3042              		.loc 1 664 0
 3043 0364 E9000000 		jmp	glPopMatrix
 3043      00
 3044              	.LVL422:
 3045              	.L179:
 3046              		.cfi_restore_state
 3047 0369 BD030000 		movl	$3, %ebp
 3047      00
 3048              		.loc 1 598 0
 3049 036e BB010000 		movl	$1, %ebx
 3049      00
 3050 0373 E9B3FCFF 		jmp	.L169
 3050      FF
 3051              		.cfi_endproc
 3052              	.LFE384:
 3054              		.section	.text.unlikely._Z13glutWireTorusddii
 3055              	.LCOLDE16:
 3056              		.section	.text._Z13glutWireTorusddii
 3057              	.LHOTE16:
 3058              		.section	.text.unlikely._Z14glutSolidTorusddii,"ax",@progbits
 3059              	.LCOLDB17:
 3060              		.section	.text._Z14glutSolidTorusddii,"ax",@progbits
 3061              	.LHOTB17:
 3062              		.p2align 4,,15
 3063              		.globl	_Z14glutSolidTorusddii
 3065              	_Z14glutSolidTorusddii:
 3066              	.LFB385:
 3067              		.loc 1 671 0
 3068              		.cfi_startproc
 3069              	.LVL423:
 3070 0000 4157     		pushq	%r15
 3071              		.cfi_def_cfa_offset 16
 3072              		.cfi_offset 15, -16
 3073 0002 4156     		pushq	%r14
 3074              		.cfi_def_cfa_offset 24
 3075              		.cfi_offset 14, -24
 3076 0004 4155     		pushq	%r13
 3077              		.cfi_def_cfa_offset 32
 3078              		.cfi_offset 13, -32
 3079 0006 4154     		pushq	%r12
 3080              		.cfi_def_cfa_offset 40
 3081              		.cfi_offset 12, -40
 3082 0008 55       		pushq	%rbp
 3083              		.cfi_def_cfa_offset 48
 3084              		.cfi_offset 6, -48
 3085 0009 53       		pushq	%rbx
 3086              		.cfi_def_cfa_offset 56
 3087              		.cfi_offset 3, -56
 3088 000a 660F28F0 		movapd	%xmm0, %xmm6
 3089              	.LVL424:
 3090 000e 4881ECA8 		subq	$168, %rsp
 3090      000000
 3091              		.cfi_def_cfa_offset 224
 3092              	.LVL425:
 3093              		.loc 1 677 0
 3094 0015 85FF     		testl	%edi, %edi
 3095              		.loc 1 671 0
 3096 0017 F20F114C 		movsd	%xmm1, 56(%rsp)
 3096      2438
 3097              	.LVL426:
 3098 001d 897C2474 		movl	%edi, 116(%rsp)
 3099 0021 8974242C 		movl	%esi, 44(%rsp)
 3100              		.loc 1 677 0
 3101 0025 0F8E1C03 		jle	.L196
 3101      0000
 3102 002b 8D5F01   		leal	1(%rdi), %ebx
 3103 002e 8D2C5B   		leal	(%rbx,%rbx,2), %ebp
 3104 0031 4863C5   		movslq	%ebp, %rax
 3105 0034 48898424 		movq	%rax, 136(%rsp)
 3105      88000000 
 3106              		.loc 1 678 0
 3107 003c 8B44242C 		movl	44(%rsp), %eax
 3108 0040 85C0     		testl	%eax, %eax
 3109 0042 0F8E2903 		jle	.L197
 3109      0000
 3110              	.LVL427:
 3111              	.L202:
 3112 0048 83C001   		addl	$1, %eax
 3113 004b 89442470 		movl	%eax, 112(%rsp)
 3114              	.L189:
 3115              		.loc 1 685 0
 3116 004f 0FAF6C24 		imull	112(%rsp), %ebp
 3116      70
 3117 0054 BF080000 		movl	$8, %edi
 3117      00
 3118 0059 F20F1174 		movsd	%xmm6, 8(%rsp)
 3118      2408
 3119              	.LVL428:
 3120 005f 448D245B 		leal	(%rbx,%rbx,2), %r12d
 3121 0063 4D63E4   		movslq	%r12d, %r12
 3122 0066 49C1E403 		salq	$3, %r12
 3123 006a 4863ED   		movslq	%ebp, %rbp
 3124 006d 4889EE   		movq	%rbp, %rsi
 3125 0070 E8000000 		call	calloc
 3125      00
 3126              	.LVL429:
 3127              		.loc 1 686 0
 3128 0075 4889EE   		movq	%rbp, %rsi
 3129 0078 BF080000 		movl	$8, %edi
 3129      00
 3130              		.loc 1 685 0
 3131 007d 4989C6   		movq	%rax, %r14
 3132 0080 48898424 		movq	%rax, 128(%rsp)
 3132      80000000 
 3133              	.LVL430:
 3134              		.loc 1 686 0
 3135 0088 E8000000 		call	calloc
 3135      00
 3136              	.LVL431:
 3137 008d 4989C7   		movq	%rax, %r15
 3138 0090 48894424 		movq	%rax, 120(%rsp)
 3138      78
 3139              	.LVL432:
 3140              		.loc 1 688 0
 3141 0095 E8000000 		call	glPushMatrix
 3141      00
 3142              	.LVL433:
 3143              		.loc 1 690 0
 3144 009a 660FEFC0 		pxor	%xmm0, %xmm0
 3145 009e 4C897424 		movq	%r14, 88(%rsp)
 3145      58
 3146 00a3 F20F100D 		movsd	.LC0(%rip), %xmm1
 3146      00000000 
 3147              		.loc 1 691 0
 3148 00ab 4C897424 		movq	%r14, 72(%rsp)
 3148      48
 3149 00b0 660FEFED 		pxor	%xmm5, %xmm5
 3150 00b4 4C897C24 		movq	%r15, 64(%rsp)
 3150      40
 3151              		.loc 1 690 0
 3152 00b9 F20F2A44 		cvtsi2sd	44(%rsp), %xmm0
 3152      242C
 3153 00bf F20F5EC8 		divsd	%xmm0, %xmm1
 3154              	.LBB19:
 3155              		.loc 1 694 0
 3156 00c3 4531F6   		xorl	%r14d, %r14d
 3157              	.LVL434:
 3158 00c6 4D89FD   		movq	%r15, %r13
 3159 00c9 4C896424 		movq	%r12, 96(%rsp)
 3159      60
 3160              	.LBE19:
 3161              		.loc 1 692 0
 3162 00ce F20F116C 		movsd	%xmm5, 80(%rsp)
 3162      2450
 3163              		.loc 1 691 0
 3164 00d4 660FEFC0 		pxor	%xmm0, %xmm0
 3165 00d8 F20F1025 		movsd	.LC2(%rip), %xmm4
 3165      00000000 
 3166 00e0 F20F1074 		movsd	8(%rsp), %xmm6
 3166      2408
 3167              		.loc 1 690 0
 3168 00e6 F20F114C 		movsd	%xmm1, 104(%rsp)
 3168      2468
 3169              	.LVL435:
 3170              		.loc 1 691 0
 3171 00ec F20F2A44 		cvtsi2sd	116(%rsp), %xmm0
 3171      2474
 3172 00f2 F20F100D 		movsd	.LC15(%rip), %xmm1
 3172      00000000 
 3173              	.LVL436:
 3174 00fa F20F5EC8 		divsd	%xmm0, %xmm1
 3175 00fe F20F114C 		movsd	%xmm1, 48(%rsp)
 3175      2430
 3176              	.LVL437:
 3177              		.p2align 4,,10
 3178 0104 0F1F4000 		.p2align 3
 3179              	.L193:
 3180              	.LBB28:
 3181              	.LBB20:
 3182              		.loc 1 697 0
 3183 0108 660FEFDB 		pxor	%xmm3, %xmm3
 3184 010c 4C89ED   		movq	%r13, %rbp
 3185 010f 4C8B6424 		movq	72(%rsp), %r12
 3185      48
 3186 0114 F20F100D 		movsd	.LC2(%rip), %xmm1
 3186      00000000 
 3187              	.LBB21:
 3188              		.loc 1 700 0
 3189 011c 4531FF   		xorl	%r15d, %r15d
 3190              	.LBE21:
 3191              		.loc 1 698 0
 3192 011f 660F28D3 		movapd	%xmm3, %xmm2
 3193 0123 EB52     		jmp	.L191
 3194              	.LVL438:
 3195              		.p2align 4,,10
 3196 0125 0F1F00   		.p2align 3
 3197              	.L201:
 3198 0128 660F28C2 		movapd	%xmm2, %xmm0
 3199 012c 488DB424 		leaq	144(%rsp), %rsi
 3199      90000000 
 3200 0134 488DBC24 		leaq	152(%rsp), %rdi
 3200      98000000 
 3201 013c F20F1174 		movsd	%xmm6, 32(%rsp)
 3201      2420
 3202 0142 F20F1154 		movsd	%xmm2, 24(%rsp)
 3202      2418
 3203 0148 E8000000 		call	sincos
 3203      00
 3204              	.LVL439:
 3205 014d F20F108C 		movsd	144(%rsp), %xmm1
 3205      24900000 
 3205      00
 3206 0156 F20F109C 		movsd	152(%rsp), %xmm3
 3206      24980000 
 3206      00
 3207 015f F20F1054 		movsd	24(%rsp), %xmm2
 3207      2418
 3208 0165 F20F1074 		movsd	32(%rsp), %xmm6
 3208      2420
 3209 016b F20F106C 		movsd	8(%rsp), %xmm5
 3209      2408
 3210 0171 F20F1064 		movsd	16(%rsp), %xmm4
 3210      2410
 3211              	.LVL440:
 3212              	.L191:
 3213              	.LBB24:
 3214              	.LBB22:
 3215              		.loc 1 705 0 discriminator 2
 3216 0177 660F28C6 		movapd	%xmm6, %xmm0
 3217 017b 660F28FC 		movapd	%xmm4, %xmm7
 3218              	.LBE22:
 3219              		.loc 1 700 0 discriminator 2
 3220 017f 4183C701 		addl	$1, %r15d
 3221              	.LVL441:
 3222              	.LBB23:
 3223              		.loc 1 710 0 discriminator 2
 3224 0183 F20F115D 		movsd	%xmm3, 16(%rbp)
 3224      10
 3225 0188 4983C418 		addq	$24, %r12
 3226              		.loc 1 705 0 discriminator 2
 3227 018c F20F59C1 		mulsd	%xmm1, %xmm0
 3228 0190 4883C518 		addq	$24, %rbp
 3229              		.loc 1 708 0 discriminator 2
 3230 0194 F20F1164 		movsd	%xmm4, 16(%rsp)
 3230      2410
 3231              		.loc 1 709 0 discriminator 2
 3232 019a F20F116C 		movsd	%xmm5, 8(%rsp)
 3232      2408
 3233              		.loc 1 711 0 discriminator 2
 3234 01a0 F20F5854 		addsd	48(%rsp), %xmm2
 3234      2430
 3235              	.LVL442:
 3236              		.loc 1 705 0 discriminator 2
 3237 01a6 F20F5844 		addsd	56(%rsp), %xmm0
 3237      2438
 3238 01ac F20F59F8 		mulsd	%xmm0, %xmm7
 3239              		.loc 1 706 0 discriminator 2
 3240 01b0 F20F59C5 		mulsd	%xmm5, %xmm0
 3241              		.loc 1 705 0 discriminator 2
 3242 01b4 F2410F11 		movsd	%xmm7, -24(%r12)
 3242      7C24E8
 3243              		.loc 1 706 0 discriminator 2
 3244 01bb F2410F11 		movsd	%xmm0, -16(%r12)
 3244      4424F0
 3245              		.loc 1 707 0 discriminator 2
 3246 01c2 660F28C6 		movapd	%xmm6, %xmm0
 3247 01c6 F20F59C3 		mulsd	%xmm3, %xmm0
 3248 01ca F2410F11 		movsd	%xmm0, -8(%r12)
 3248      4424F8
 3249              		.loc 1 708 0 discriminator 2
 3250 01d1 660F28C4 		movapd	%xmm4, %xmm0
 3251 01d5 F20F59C1 		mulsd	%xmm1, %xmm0
 3252              		.loc 1 709 0 discriminator 2
 3253 01d9 F20F59CD 		mulsd	%xmm5, %xmm1
 3254              	.LVL443:
 3255              		.loc 1 708 0 discriminator 2
 3256 01dd F20F1145 		movsd	%xmm0, -24(%rbp)
 3256      E8
 3257              		.loc 1 709 0 discriminator 2
 3258 01e2 F20F114D 		movsd	%xmm1, -16(%rbp)
 3258      F0
 3259              	.LBE23:
 3260              		.loc 1 700 0 discriminator 2
 3261 01e7 4139DF   		cmpl	%ebx, %r15d
 3262 01ea 0F8C38FF 		jl	.L201
 3262      FFFF
 3263              	.LBE24:
 3264              		.loc 1 714 0 discriminator 2
 3265 01f0 F20F1054 		movsd	80(%rsp), %xmm2
 3265      2450
 3266              	.LVL444:
 3267 01f6 488B5424 		movq	96(%rsp), %rdx
 3267      60
 3268              	.LBE20:
 3269              		.loc 1 694 0 discriminator 2
 3270 01fb 4183C601 		addl	$1, %r14d
 3271              	.LVL445:
 3272 01ff 48015424 		addq	%rdx, 72(%rsp)
 3272      48
 3273 0204 F20F1174 		movsd	%xmm6, 8(%rsp)
 3273      2408
 3274              	.LBB25:
 3275              		.loc 1 714 0 discriminator 2
 3276 020a F20F5854 		addsd	104(%rsp), %xmm2
 3276      2468
 3277 0210 4901D5   		addq	%rdx, %r13
 3278              	.LBE25:
 3279              		.loc 1 694 0 discriminator 2
 3280 0213 443B7424 		cmpl	112(%rsp), %r14d
 3280      70
 3281              	.LBB26:
 3282              		.loc 1 714 0 discriminator 2
 3283 0218 F20F1154 		movsd	%xmm2, 80(%rsp)
 3283      2450
 3284              	.LVL446:
 3285              	.LBE26:
 3286              		.loc 1 694 0 discriminator 2
 3287 021e 7436     		je	.L192
 3288 0220 488DB424 		leaq	144(%rsp), %rsi
 3288      90000000 
 3289 0228 488DBC24 		leaq	152(%rsp), %rdi
 3289      98000000 
 3290 0230 660F28C2 		movapd	%xmm2, %xmm0
 3291 0234 E8000000 		call	sincos
 3291      00
 3292              	.LVL447:
 3293 0239 F20F10A4 		movsd	144(%rsp), %xmm4
 3293      24900000 
 3293      00
 3294              	.LVL448:
 3295 0242 F20F10AC 		movsd	152(%rsp), %xmm5
 3295      24980000 
 3295      00
 3296 024b F20F1074 		movsd	8(%rsp), %xmm6
 3296      2408
 3297 0251 E9B2FEFF 		jmp	.L193
 3297      FF
 3298              	.LVL449:
 3299              	.L192:
 3300              	.LBE28:
 3301              		.loc 1 717 0
 3302 0256 BF070000 		movl	$7, %edi
 3302      00
 3303 025b 4C8B6424 		movq	96(%rsp), %r12
 3303      60
 3304 0260 E8000000 		call	glBegin
 3304      00
 3305              	.LVL450:
 3306 0265 8B442474 		movl	116(%rsp), %eax
 3307 0269 488B4C24 		movq	120(%rsp), %rcx
 3307      78
 3308 026e 4C8BAC24 		movq	136(%rsp), %r13
 3308      88000000 
 3309 0276 83E801   		subl	$1, %eax
 3310 0279 488D4440 		leaq	3(%rax,%rax,2), %rax
 3310      03
 3311 027e 49C1E503 		salq	$3, %r13
 3312 0282 4D8D7518 		leaq	24(%r13), %r14
 3313              	.LVL451:
 3314 0286 488D04C1 		leaq	(%rcx,%rax,8), %rax
 3315 028a 48894424 		movq	%rax, 8(%rsp)
 3315      08
 3316              	.LVL452:
 3317 028f 90       		.p2align 4,,10
 3318              		.p2align 3
 3319              	.L195:
 3320              	.LBB29:
 3321              	.LBB27:
 3322              		.loc 1 698 0
 3323 0290 488B6C24 		movq	88(%rsp), %rbp
 3323      58
 3324 0295 488B5C24 		movq	64(%rsp), %rbx
 3324      40
 3325 029a 4531FF   		xorl	%r15d, %r15d
 3326              	.LVL453:
 3327 029d 0F1F00   		.p2align 4,,10
 3328              		.p2align 3
 3329              	.L194:
 3330              	.LBE27:
 3331              	.LBE29:
 3332              	.LBB30:
 3333              	.LBB31:
 3334              	.LBB32:
 3335              		.loc 1 723 0 discriminator 2
 3336 02a0 4889DF   		movq	%rbx, %rdi
 3337              	.LBE32:
 3338              		.loc 1 720 0 discriminator 2
 3339 02a3 4183C701 		addl	$1, %r15d
 3340              	.LVL454:
 3341              	.LBB33:
 3342              		.loc 1 723 0 discriminator 2
 3343 02a7 E8000000 		call	glNormal3dv
 3343      00
 3344              	.LVL455:
 3345              		.loc 1 724 0 discriminator 2
 3346 02ac 4889EF   		movq	%rbp, %rdi
 3347 02af E8000000 		call	glVertex3dv
 3347      00
 3348              	.LVL456:
 3349              		.loc 1 725 0 discriminator 2
 3350 02b4 488D7B18 		leaq	24(%rbx), %rdi
 3351 02b8 E8000000 		call	glNormal3dv
 3351      00
 3352              	.LVL457:
 3353              		.loc 1 726 0 discriminator 2
 3354 02bd 488D7D18 		leaq	24(%rbp), %rdi
 3355 02c1 E8000000 		call	glVertex3dv
 3355      00
 3356              	.LVL458:
 3357              		.loc 1 727 0 discriminator 2
 3358 02c6 498D3C1E 		leaq	(%r14,%rbx), %rdi
 3359 02ca E8000000 		call	glNormal3dv
 3359      00
 3360              	.LVL459:
 3361              		.loc 1 728 0 discriminator 2
 3362 02cf 498D3C2E 		leaq	(%r14,%rbp), %rdi
 3363 02d3 E8000000 		call	glVertex3dv
 3363      00
 3364              	.LVL460:
 3365              		.loc 1 729 0 discriminator 2
 3366 02d8 498D7C1D 		leaq	0(%r13,%rbx), %rdi
 3366      00
 3367 02dd 4C01E3   		addq	%r12, %rbx
 3368 02e0 E8000000 		call	glNormal3dv
 3368      00
 3369              	.LVL461:
 3370              		.loc 1 730 0 discriminator 2
 3371 02e5 498D7C2D 		leaq	0(%r13,%rbp), %rdi
 3371      00
 3372 02ea 4C01E5   		addq	%r12, %rbp
 3373 02ed E8000000 		call	glVertex3dv
 3373      00
 3374              	.LVL462:
 3375              	.LBE33:
 3376              		.loc 1 720 0 discriminator 2
 3377 02f2 44397C24 		cmpl	%r15d, 44(%rsp)
 3377      2C
 3378 02f7 75A7     		jne	.L194
 3379 02f9 48834424 		addq	$24, 64(%rsp)
 3379      4018
 3380 02ff 48834424 		addq	$24, 88(%rsp)
 3380      5818
 3381 0305 488B4424 		movq	64(%rsp), %rax
 3381      40
 3382              	.LBE31:
 3383              		.loc 1 718 0 discriminator 2
 3384 030a 483B4424 		cmpq	8(%rsp), %rax
 3384      08
 3385 030f 0F857BFF 		jne	.L195
 3385      FFFF
 3386              	.LBE30:
 3387              		.loc 1 734 0
 3388 0315 E8000000 		call	glEnd
 3388      00
 3389              	.LVL463:
 3390              		.loc 1 736 0
 3391 031a 488BBC24 		movq	128(%rsp), %rdi
 3391      80000000 
 3392 0322 E8000000 		call	free
 3392      00
 3393              	.LVL464:
 3394              		.loc 1 737 0
 3395 0327 488B7C24 		movq	120(%rsp), %rdi
 3395      78
 3396 032c E8000000 		call	free
 3396      00
 3397              	.LVL465:
 3398              		.loc 1 739 0
 3399 0331 4881C4A8 		addq	$168, %rsp
 3399      000000
 3400              		.cfi_remember_state
 3401              		.cfi_def_cfa_offset 56
 3402 0338 5B       		popq	%rbx
 3403              		.cfi_def_cfa_offset 48
 3404 0339 5D       		popq	%rbp
 3405              		.cfi_def_cfa_offset 40
 3406 033a 415C     		popq	%r12
 3407              		.cfi_def_cfa_offset 32
 3408 033c 415D     		popq	%r13
 3409              		.cfi_def_cfa_offset 24
 3410 033e 415E     		popq	%r14
 3411              		.cfi_def_cfa_offset 16
 3412 0340 415F     		popq	%r15
 3413              		.cfi_def_cfa_offset 8
 3414              	.LVL466:
 3415              		.loc 1 738 0
 3416 0342 E9000000 		jmp	glPopMatrix
 3416      00
 3417              	.LVL467:
 3418              	.L196:
 3419              		.cfi_restore_state
 3420              		.loc 1 678 0
 3421 0347 8B44242C 		movl	44(%rsp), %eax
 3422 034b 48C78424 		movq	$6, 136(%rsp)
 3422      88000000 
 3422      06000000 
 3423 0357 BD060000 		movl	$6, %ebp
 3423      00
 3424 035c BB020000 		movl	$2, %ebx
 3424      00
 3425              		.loc 1 677 0
 3426 0361 C7442474 		movl	$1, 116(%rsp)
 3426      01000000 
 3427              	.LVL468:
 3428              		.loc 1 678 0
 3429 0369 85C0     		testl	%eax, %eax
 3430 036b 0F8FD7FC 		jg	.L202
 3430      FFFF
 3431              	.L197:
 3432 0371 C7442470 		movl	$2, 112(%rsp)
 3432      02000000 
 3433 0379 C744242C 		movl	$1, 44(%rsp)
 3433      01000000 
 3434 0381 E9C9FCFF 		jmp	.L189
 3434      FF
 3435              		.cfi_endproc
 3436              	.LFE385:
 3438              		.section	.text.unlikely._Z14glutSolidTorusddii
 3439              	.LCOLDE17:
 3440              		.section	.text._Z14glutSolidTorusddii
 3441              	.LHOTE17:
 3442              		.section	.text.unlikely._Z20glutWireDodecahedronv,"ax",@progbits
 3443              	.LCOLDB26:
 3444              		.section	.text._Z20glutWireDodecahedronv,"ax",@progbits
 3445              	.LHOTB26:
 3446              		.p2align 4,,15
 3447              		.globl	_Z20glutWireDodecahedronv
 3449              	_Z20glutWireDodecahedronv:
 3450              	.LFB386:
 3451              		.loc 1 745 0
 3452              		.cfi_startproc
 3453 0000 4883EC08 		subq	$8, %rsp
 3454              		.cfi_def_cfa_offset 16
 3455              		.loc 1 752 0
 3456 0004 BF020000 		movl	$2, %edi
 3456      00
 3457 0009 E8000000 		call	glBegin
 3457      00
 3458              	.LVL469:
 3459              		.loc 1 753 0
 3460 000e 660FEFC0 		pxor	%xmm0, %xmm0
 3461 0012 F20F1015 		movsd	.LC18(%rip), %xmm2
 3461      00000000 
 3462 001a F20F100D 		movsd	.LC19(%rip), %xmm1
 3462      00000000 
 3463 0022 E8000000 		call	glNormal3d
 3463      00
 3464              	.LVL470:
 3465 0027 660FEFC0 		pxor	%xmm0, %xmm0
 3466 002b F20F1015 		movsd	.LC20(%rip), %xmm2
 3466      00000000 
 3467 0033 F20F100D 		movsd	.LC21(%rip), %xmm1
 3467      00000000 
 3468 003b E8000000 		call	glVertex3d
 3468      00
 3469              	.LVL471:
 3470 0040 F20F1015 		movsd	.LC2(%rip), %xmm2
 3470      00000000 
 3471 0048 F20F1005 		movsd	.LC6(%rip), %xmm0
 3471      00000000 
 3472 0050 660F28CA 		movapd	%xmm2, %xmm1
 3473 0054 E8000000 		call	glVertex3d
 3473      00
 3474              	.LVL472:
 3475 0059 660FEFC9 		pxor	%xmm1, %xmm1
 3476 005d F20F1015 		movsd	.LC21(%rip), %xmm2
 3476      00000000 
 3477 0065 F20F1005 		movsd	.LC22(%rip), %xmm0
 3477      00000000 
 3478 006d E8000000 		call	glVertex3d
 3478      00
 3479              	.LVL473:
 3480 0072 660FEFC9 		pxor	%xmm1, %xmm1
 3481 0076 F20F1015 		movsd	.LC21(%rip), %xmm2
 3481      00000000 
 3482 007e F20F1005 		movsd	.LC20(%rip), %xmm0
 3482      00000000 
 3483 0086 E8000000 		call	glVertex3d
 3483      00
 3484              	.LVL474:
 3485 008b F20F1015 		movsd	.LC2(%rip), %xmm2
 3485      00000000 
 3486 0093 660F28CA 		movapd	%xmm2, %xmm1
 3487 0097 660F28C2 		movapd	%xmm2, %xmm0
 3488 009b E8000000 		call	glVertex3d
 3488      00
 3489              	.LVL475:
 3490              		.loc 1 754 0
 3491 00a0 E8000000 		call	glEnd
 3491      00
 3492              	.LVL476:
 3493              		.loc 1 755 0
 3494 00a5 BF020000 		movl	$2, %edi
 3494      00
 3495 00aa E8000000 		call	glBegin
 3495      00
 3496              	.LVL477:
 3497              		.loc 1 756 0
 3498 00af 660FEFC0 		pxor	%xmm0, %xmm0
 3499 00b3 F20F1015 		movsd	.LC23(%rip), %xmm2
 3499      00000000 
 3500 00bb F20F100D 		movsd	.LC19(%rip), %xmm1
 3500      00000000 
 3501 00c3 E8000000 		call	glNormal3d
 3501      00
 3502              	.LVL478:
 3503 00c8 660FEFC0 		pxor	%xmm0, %xmm0
 3504 00cc F20F1015 		movsd	.LC22(%rip), %xmm2
 3504      00000000 
 3505 00d4 F20F100D 		movsd	.LC21(%rip), %xmm1
 3505      00000000 
 3506 00dc E8000000 		call	glVertex3d
 3506      00
 3507              	.LVL479:
 3508 00e1 F20F100D 		movsd	.LC2(%rip), %xmm1
 3508      00000000 
 3509 00e9 F20F1015 		movsd	.LC6(%rip), %xmm2
 3509      00000000 
 3510 00f1 660F28C1 		movapd	%xmm1, %xmm0
 3511 00f5 E8000000 		call	glVertex3d
 3511      00
 3512              	.LVL480:
 3513 00fa 660FEFC9 		pxor	%xmm1, %xmm1
 3514 00fe F20F1015 		movsd	.LC24(%rip), %xmm2
 3514      00000000 
 3515 0106 F20F1005 		movsd	.LC20(%rip), %xmm0
 3515      00000000 
 3516 010e E8000000 		call	glVertex3d
 3516      00
 3517              	.LVL481:
 3518 0113 660FEFC9 		pxor	%xmm1, %xmm1
 3519 0117 F20F1015 		movsd	.LC24(%rip), %xmm2
 3519      00000000 
 3520 011f F20F1005 		movsd	.LC22(%rip), %xmm0
 3520      00000000 
 3521 0127 E8000000 		call	glVertex3d
 3521      00
 3522              	.LVL482:
 3523 012c F20F1015 		movsd	.LC6(%rip), %xmm2
 3523      00000000 
 3524 0134 F20F100D 		movsd	.LC2(%rip), %xmm1
 3524      00000000 
 3525 013c 660F28C2 		movapd	%xmm2, %xmm0
 3526 0140 E8000000 		call	glVertex3d
 3526      00
 3527              	.LVL483:
 3528              		.loc 1 757 0
 3529 0145 E8000000 		call	glEnd
 3529      00
 3530              	.LVL484:
 3531              		.loc 1 758 0
 3532 014a BF020000 		movl	$2, %edi
 3532      00
 3533 014f E8000000 		call	glBegin
 3533      00
 3534              	.LVL485:
 3535              		.loc 1 759 0
 3536 0154 660FEFC0 		pxor	%xmm0, %xmm0
 3537 0158 F20F1015 		movsd	.LC18(%rip), %xmm2
 3537      00000000 
 3538 0160 F20F100D 		movsd	.LC25(%rip), %xmm1
 3538      00000000 
 3539 0168 E8000000 		call	glNormal3d
 3539      00
 3540              	.LVL486:
 3541 016d 660FEFC0 		pxor	%xmm0, %xmm0
 3542 0171 F20F1015 		movsd	.LC20(%rip), %xmm2
 3542      00000000 
 3543 0179 F20F100D 		movsd	.LC24(%rip), %xmm1
 3543      00000000 
 3544 0181 E8000000 		call	glVertex3d
 3544      00
 3545              	.LVL487:
 3546 0186 F20F1015 		movsd	.LC2(%rip), %xmm2
 3546      00000000 
 3547 018e F20F100D 		movsd	.LC6(%rip), %xmm1
 3547      00000000 
 3548 0196 660F28C2 		movapd	%xmm2, %xmm0
 3549 019a E8000000 		call	glVertex3d
 3549      00
 3550              	.LVL488:
 3551 019f 660FEFC9 		pxor	%xmm1, %xmm1
 3552 01a3 F20F1015 		movsd	.LC21(%rip), %xmm2
 3552      00000000 
 3553 01ab F20F1005 		movsd	.LC20(%rip), %xmm0
 3553      00000000 
 3554 01b3 E8000000 		call	glVertex3d
 3554      00
 3555              	.LVL489:
 3556 01b8 660FEFC9 		pxor	%xmm1, %xmm1
 3557 01bc F20F1015 		movsd	.LC21(%rip), %xmm2
 3557      00000000 
 3558 01c4 F20F1005 		movsd	.LC22(%rip), %xmm0
 3558      00000000 
 3559 01cc E8000000 		call	glVertex3d
 3559      00
 3560              	.LVL490:
 3561 01d1 F20F100D 		movsd	.LC6(%rip), %xmm1
 3561      00000000 
 3562 01d9 F20F1015 		movsd	.LC2(%rip), %xmm2
 3562      00000000 
 3563 01e1 660F28C1 		movapd	%xmm1, %xmm0
 3564 01e5 E8000000 		call	glVertex3d
 3564      00
 3565              	.LVL491:
 3566              		.loc 1 760 0
 3567 01ea E8000000 		call	glEnd
 3567      00
 3568              	.LVL492:
 3569              		.loc 1 761 0
 3570 01ef BF020000 		movl	$2, %edi
 3570      00
 3571 01f4 E8000000 		call	glBegin
 3571      00
 3572              	.LVL493:
 3573              		.loc 1 762 0
 3574 01f9 660FEFC0 		pxor	%xmm0, %xmm0
 3575 01fd F20F1015 		movsd	.LC23(%rip), %xmm2
 3575      00000000 
 3576 0205 F20F100D 		movsd	.LC25(%rip), %xmm1
 3576      00000000 
 3577 020d E8000000 		call	glNormal3d
 3577      00
 3578              	.LVL494:
 3579 0212 660FEFC0 		pxor	%xmm0, %xmm0
 3580 0216 F20F1015 		movsd	.LC22(%rip), %xmm2
 3580      00000000 
 3581 021e F20F100D 		movsd	.LC24(%rip), %xmm1
 3581      00000000 
 3582 0226 E8000000 		call	glVertex3d
 3582      00
 3583              	.LVL495:
 3584 022b F20F1015 		movsd	.LC6(%rip), %xmm2
 3584      00000000 
 3585 0233 660F28CA 		movapd	%xmm2, %xmm1
 3586 0237 660F28C2 		movapd	%xmm2, %xmm0
 3587 023b E8000000 		call	glVertex3d
 3587      00
 3588              	.LVL496:
 3589 0240 660FEFC9 		pxor	%xmm1, %xmm1
 3590 0244 F20F1015 		movsd	.LC24(%rip), %xmm2
 3590      00000000 
 3591 024c F20F1005 		movsd	.LC22(%rip), %xmm0
 3591      00000000 
 3592 0254 E8000000 		call	glVertex3d
 3592      00
 3593              	.LVL497:
 3594 0259 660FEFC9 		pxor	%xmm1, %xmm1
 3595 025d F20F1015 		movsd	.LC24(%rip), %xmm2
 3595      00000000 
 3596 0265 F20F1005 		movsd	.LC20(%rip), %xmm0
 3596      00000000 
 3597 026d E8000000 		call	glVertex3d
 3597      00
 3598              	.LVL498:
 3599 0272 F20F1015 		movsd	.LC6(%rip), %xmm2
 3599      00000000 
 3600 027a F20F1005 		movsd	.LC2(%rip), %xmm0
 3600      00000000 
 3601 0282 660F28CA 		movapd	%xmm2, %xmm1
 3602 0286 E8000000 		call	glVertex3d
 3602      00
 3603              	.LVL499:
 3604              		.loc 1 763 0
 3605 028b E8000000 		call	glEnd
 3605      00
 3606              	.LVL500:
 3607              		.loc 1 765 0
 3608 0290 BF020000 		movl	$2, %edi
 3608      00
 3609 0295 E8000000 		call	glBegin
 3609      00
 3610              	.LVL501:
 3611              		.loc 1 766 0
 3612 029a 660FEFC9 		pxor	%xmm1, %xmm1
 3613 029e F20F1015 		movsd	.LC19(%rip), %xmm2
 3613      00000000 
 3614 02a6 F20F1005 		movsd	.LC18(%rip), %xmm0
 3614      00000000 
 3615 02ae E8000000 		call	glNormal3d
 3615      00
 3616              	.LVL502:
 3617 02b3 660FEFC9 		pxor	%xmm1, %xmm1
 3618 02b7 F20F1015 		movsd	.LC21(%rip), %xmm2
 3618      00000000 
 3619 02bf F20F1005 		movsd	.LC20(%rip), %xmm0
 3619      00000000 
 3620 02c7 E8000000 		call	glVertex3d
 3620      00
 3621              	.LVL503:
 3622 02cc F20F1015 		movsd	.LC2(%rip), %xmm2
 3622      00000000 
 3623 02d4 F20F100D 		movsd	.LC6(%rip), %xmm1
 3623      00000000 
 3624 02dc 660F28C2 		movapd	%xmm2, %xmm0
 3625 02e0 E8000000 		call	glVertex3d
 3625      00
 3626              	.LVL504:
 3627 02e5 660FEFD2 		pxor	%xmm2, %xmm2
 3628 02e9 F20F100D 		movsd	.LC22(%rip), %xmm1
 3628      00000000 
 3629 02f1 F20F1005 		movsd	.LC21(%rip), %xmm0
 3629      00000000 
 3630 02f9 E8000000 		call	glVertex3d
 3630      00
 3631              	.LVL505:
 3632 02fe 660FEFD2 		pxor	%xmm2, %xmm2
 3633 0302 F20F100D 		movsd	.LC20(%rip), %xmm1
 3633      00000000 
 3634 030a F20F1005 		movsd	.LC21(%rip), %xmm0
 3634      00000000 
 3635 0312 E8000000 		call	glVertex3d
 3635      00
 3636              	.LVL506:
 3637 0317 F20F1015 		movsd	.LC2(%rip), %xmm2
 3637      00000000 
 3638 031f 660F28CA 		movapd	%xmm2, %xmm1
 3639 0323 660F28C2 		movapd	%xmm2, %xmm0
 3640 0327 E8000000 		call	glVertex3d
 3640      00
 3641              	.LVL507:
 3642              		.loc 1 767 0
 3643 032c E8000000 		call	glEnd
 3643      00
 3644              	.LVL508:
 3645              		.loc 1 768 0
 3646 0331 BF020000 		movl	$2, %edi
 3646      00
 3647 0336 E8000000 		call	glBegin
 3647      00
 3648              	.LVL509:
 3649              		.loc 1 769 0
 3650 033b 660FEFC9 		pxor	%xmm1, %xmm1
 3651 033f F20F1015 		movsd	.LC19(%rip), %xmm2
 3651      00000000 
 3652 0347 F20F1005 		movsd	.LC23(%rip), %xmm0
 3652      00000000 
 3653 034f E8000000 		call	glNormal3d
 3653      00
 3654              	.LVL510:
 3655 0354 660FEFC9 		pxor	%xmm1, %xmm1
 3656 0358 F20F1015 		movsd	.LC21(%rip), %xmm2
 3656      00000000 
 3657 0360 F20F1005 		movsd	.LC22(%rip), %xmm0
 3657      00000000 
 3658 0368 E8000000 		call	glVertex3d
 3658      00
 3659              	.LVL511:
 3660 036d F20F1015 		movsd	.LC2(%rip), %xmm2
 3660      00000000 
 3661 0375 F20F1005 		movsd	.LC6(%rip), %xmm0
 3661      00000000 
 3662 037d 660F28CA 		movapd	%xmm2, %xmm1
 3663 0381 E8000000 		call	glVertex3d
 3663      00
 3664              	.LVL512:
 3665 0386 660FEFD2 		pxor	%xmm2, %xmm2
 3666 038a F20F100D 		movsd	.LC20(%rip), %xmm1
 3666      00000000 
 3667 0392 F20F1005 		movsd	.LC24(%rip), %xmm0
 3667      00000000 
 3668 039a E8000000 		call	glVertex3d
 3668      00
 3669              	.LVL513:
 3670 039f 660FEFD2 		pxor	%xmm2, %xmm2
 3671 03a3 F20F100D 		movsd	.LC22(%rip), %xmm1
 3671      00000000 
 3672 03ab F20F1005 		movsd	.LC24(%rip), %xmm0
 3672      00000000 
 3673 03b3 E8000000 		call	glVertex3d
 3673      00
 3674              	.LVL514:
 3675 03b8 F20F100D 		movsd	.LC6(%rip), %xmm1
 3675      00000000 
 3676 03c0 F20F1015 		movsd	.LC2(%rip), %xmm2
 3676      00000000 
 3677 03c8 660F28C1 		movapd	%xmm1, %xmm0
 3678 03cc E8000000 		call	glVertex3d
 3678      00
 3679              	.LVL515:
 3680              		.loc 1 770 0
 3681 03d1 E8000000 		call	glEnd
 3681      00
 3682              	.LVL516:
 3683              		.loc 1 771 0
 3684 03d6 BF020000 		movl	$2, %edi
 3684      00
 3685 03db E8000000 		call	glBegin
 3685      00
 3686              	.LVL517:
 3687              		.loc 1 772 0
 3688 03e0 660FEFC9 		pxor	%xmm1, %xmm1
 3689 03e4 F20F1015 		movsd	.LC25(%rip), %xmm2
 3689      00000000 
 3690 03ec F20F1005 		movsd	.LC18(%rip), %xmm0
 3690      00000000 
 3691 03f4 E8000000 		call	glNormal3d
 3691      00
 3692              	.LVL518:
 3693 03f9 660FEFC9 		pxor	%xmm1, %xmm1
 3694 03fd F20F1015 		movsd	.LC24(%rip), %xmm2
 3694      00000000 
 3695 0405 F20F1005 		movsd	.LC20(%rip), %xmm0
 3695      00000000 
 3696 040d E8000000 		call	glVertex3d
 3696      00
 3697              	.LVL519:
 3698 0412 F20F100D 		movsd	.LC2(%rip), %xmm1
 3698      00000000 
 3699 041a F20F1015 		movsd	.LC6(%rip), %xmm2
 3699      00000000 
 3700 0422 660F28C1 		movapd	%xmm1, %xmm0
 3701 0426 E8000000 		call	glVertex3d
 3701      00
 3702              	.LVL520:
 3703 042b 660FEFD2 		pxor	%xmm2, %xmm2
 3704 042f F20F100D 		movsd	.LC20(%rip), %xmm1
 3704      00000000 
 3705 0437 F20F1005 		movsd	.LC21(%rip), %xmm0
 3705      00000000 
 3706 043f E8000000 		call	glVertex3d
 3706      00
 3707              	.LVL521:
 3708 0444 660FEFD2 		pxor	%xmm2, %xmm2
 3709 0448 F20F100D 		movsd	.LC22(%rip), %xmm1
 3709      00000000 
 3710 0450 F20F1005 		movsd	.LC21(%rip), %xmm0
 3710      00000000 
 3711 0458 E8000000 		call	glVertex3d
 3711      00
 3712              	.LVL522:
 3713 045d F20F1015 		movsd	.LC6(%rip), %xmm2
 3713      00000000 
 3714 0465 F20F1005 		movsd	.LC2(%rip), %xmm0
 3714      00000000 
 3715 046d 660F28CA 		movapd	%xmm2, %xmm1
 3716 0471 E8000000 		call	glVertex3d
 3716      00
 3717              	.LVL523:
 3718              		.loc 1 773 0
 3719 0476 E8000000 		call	glEnd
 3719      00
 3720              	.LVL524:
 3721              		.loc 1 774 0
 3722 047b BF020000 		movl	$2, %edi
 3722      00
 3723 0480 E8000000 		call	glBegin
 3723      00
 3724              	.LVL525:
 3725              		.loc 1 775 0
 3726 0485 660FEFC9 		pxor	%xmm1, %xmm1
 3727 0489 F20F1015 		movsd	.LC25(%rip), %xmm2
 3727      00000000 
 3728 0491 F20F1005 		movsd	.LC23(%rip), %xmm0
 3728      00000000 
 3729 0499 E8000000 		call	glNormal3d
 3729      00
 3730              	.LVL526:
 3731 049e 660FEFC9 		pxor	%xmm1, %xmm1
 3732 04a2 F20F1015 		movsd	.LC24(%rip), %xmm2
 3732      00000000 
 3733 04aa F20F1005 		movsd	.LC22(%rip), %xmm0
 3733      00000000 
 3734 04b2 E8000000 		call	glVertex3d
 3734      00
 3735              	.LVL527:
 3736 04b7 F20F1015 		movsd	.LC6(%rip), %xmm2
 3736      00000000 
 3737 04bf 660F28CA 		movapd	%xmm2, %xmm1
 3738 04c3 660F28C2 		movapd	%xmm2, %xmm0
 3739 04c7 E8000000 		call	glVertex3d
 3739      00
 3740              	.LVL528:
 3741 04cc 660FEFD2 		pxor	%xmm2, %xmm2
 3742 04d0 F20F100D 		movsd	.LC22(%rip), %xmm1
 3742      00000000 
 3743 04d8 F20F1005 		movsd	.LC24(%rip), %xmm0
 3743      00000000 
 3744 04e0 E8000000 		call	glVertex3d
 3744      00
 3745              	.LVL529:
 3746 04e5 660FEFD2 		pxor	%xmm2, %xmm2
 3747 04e9 F20F100D 		movsd	.LC20(%rip), %xmm1
 3747      00000000 
 3748 04f1 F20F1005 		movsd	.LC24(%rip), %xmm0
 3748      00000000 
 3749 04f9 E8000000 		call	glVertex3d
 3749      00
 3750              	.LVL530:
 3751 04fe F20F1015 		movsd	.LC6(%rip), %xmm2
 3751      00000000 
 3752 0506 F20F100D 		movsd	.LC2(%rip), %xmm1
 3752      00000000 
 3753 050e 660F28C2 		movapd	%xmm2, %xmm0
 3754 0512 E8000000 		call	glVertex3d
 3754      00
 3755              	.LVL531:
 3756              		.loc 1 776 0
 3757 0517 E8000000 		call	glEnd
 3757      00
 3758              	.LVL532:
 3759              		.loc 1 778 0
 3760 051c BF020000 		movl	$2, %edi
 3760      00
 3761 0521 E8000000 		call	glBegin
 3761      00
 3762              	.LVL533:
 3763              		.loc 1 779 0
 3764 0526 660FEFD2 		pxor	%xmm2, %xmm2
 3765 052a F20F100D 		movsd	.LC18(%rip), %xmm1
 3765      00000000 
 3766 0532 F20F1005 		movsd	.LC19(%rip), %xmm0
 3766      00000000 
 3767 053a E8000000 		call	glNormal3d
 3767      00
 3768              	.LVL534:
 3769 053f 660FEFD2 		pxor	%xmm2, %xmm2
 3770 0543 F20F100D 		movsd	.LC20(%rip), %xmm1
 3770      00000000 
 3771 054b F20F1005 		movsd	.LC21(%rip), %xmm0
 3771      00000000 
 3772 0553 E8000000 		call	glVertex3d
 3772      00
 3773              	.LVL535:
 3774 0558 F20F100D 		movsd	.LC2(%rip), %xmm1
 3774      00000000 
 3775 0560 F20F1015 		movsd	.LC6(%rip), %xmm2
 3775      00000000 
 3776 0568 660F28C1 		movapd	%xmm1, %xmm0
 3777 056c E8000000 		call	glVertex3d
 3777      00
 3778              	.LVL536:
 3779 0571 660FEFC0 		pxor	%xmm0, %xmm0
 3780 0575 F20F1015 		movsd	.LC22(%rip), %xmm2
 3780      00000000 
 3781 057d F20F100D 		movsd	.LC21(%rip), %xmm1
 3781      00000000 
 3782 0585 E8000000 		call	glVertex3d
 3782      00
 3783              	.LVL537:
 3784 058a 660FEFC0 		pxor	%xmm0, %xmm0
 3785 058e F20F1015 		movsd	.LC20(%rip), %xmm2
 3785      00000000 
 3786 0596 F20F100D 		movsd	.LC21(%rip), %xmm1
 3786      00000000 
 3787 059e E8000000 		call	glVertex3d
 3787      00
 3788              	.LVL538:
 3789 05a3 F20F1015 		movsd	.LC2(%rip), %xmm2
 3789      00000000 
 3790 05ab 660F28CA 		movapd	%xmm2, %xmm1
 3791 05af 660F28C2 		movapd	%xmm2, %xmm0
 3792 05b3 E8000000 		call	glVertex3d
 3792      00
 3793              	.LVL539:
 3794              		.loc 1 780 0
 3795 05b8 E8000000 		call	glEnd
 3795      00
 3796              	.LVL540:
 3797              		.loc 1 781 0
 3798 05bd BF020000 		movl	$2, %edi
 3798      00
 3799 05c2 E8000000 		call	glBegin
 3799      00
 3800              	.LVL541:
 3801              		.loc 1 782 0
 3802 05c7 660FEFD2 		pxor	%xmm2, %xmm2
 3803 05cb F20F100D 		movsd	.LC23(%rip), %xmm1
 3803      00000000 
 3804 05d3 F20F1005 		movsd	.LC19(%rip), %xmm0
 3804      00000000 
 3805 05db E8000000 		call	glNormal3d
 3805      00
 3806              	.LVL542:
 3807 05e0 660FEFD2 		pxor	%xmm2, %xmm2
 3808 05e4 F20F100D 		movsd	.LC22(%rip), %xmm1
 3808      00000000 
 3809 05ec F20F1005 		movsd	.LC21(%rip), %xmm0
 3809      00000000 
 3810 05f4 E8000000 		call	glVertex3d
 3810      00
 3811              	.LVL543:
 3812 05f9 F20F1015 		movsd	.LC2(%rip), %xmm2
 3812      00000000 
 3813 0601 F20F100D 		movsd	.LC6(%rip), %xmm1
 3813      00000000 
 3814 0609 660F28C2 		movapd	%xmm2, %xmm0
 3815 060d E8000000 		call	glVertex3d
 3815      00
 3816              	.LVL544:
 3817 0612 660FEFC0 		pxor	%xmm0, %xmm0
 3818 0616 F20F1015 		movsd	.LC20(%rip), %xmm2
 3818      00000000 
 3819 061e F20F100D 		movsd	.LC24(%rip), %xmm1
 3819      00000000 
 3820 0626 E8000000 		call	glVertex3d
 3820      00
 3821              	.LVL545:
 3822 062b 660FEFC0 		pxor	%xmm0, %xmm0
 3823 062f F20F1015 		movsd	.LC22(%rip), %xmm2
 3823      00000000 
 3824 0637 F20F100D 		movsd	.LC24(%rip), %xmm1
 3824      00000000 
 3825 063f E8000000 		call	glVertex3d
 3825      00
 3826              	.LVL546:
 3827 0644 F20F1015 		movsd	.LC6(%rip), %xmm2
 3827      00000000 
 3828 064c F20F1005 		movsd	.LC2(%rip), %xmm0
 3828      00000000 
 3829 0654 660F28CA 		movapd	%xmm2, %xmm1
 3830 0658 E8000000 		call	glVertex3d
 3830      00
 3831              	.LVL547:
 3832              		.loc 1 783 0
 3833 065d E8000000 		call	glEnd
 3833      00
 3834              	.LVL548:
 3835              		.loc 1 784 0
 3836 0662 BF020000 		movl	$2, %edi
 3836      00
 3837 0667 E8000000 		call	glBegin
 3837      00
 3838              	.LVL549:
 3839              		.loc 1 785 0
 3840 066c 660FEFD2 		pxor	%xmm2, %xmm2
 3841 0670 F20F100D 		movsd	.LC18(%rip), %xmm1
 3841      00000000 
 3842 0678 F20F1005 		movsd	.LC25(%rip), %xmm0
 3842      00000000 
 3843 0680 E8000000 		call	glNormal3d
 3843      00
 3844              	.LVL550:
 3845 0685 660FEFD2 		pxor	%xmm2, %xmm2
 3846 0689 F20F100D 		movsd	.LC20(%rip), %xmm1
 3846      00000000 
 3847 0691 F20F1005 		movsd	.LC24(%rip), %xmm0
 3847      00000000 
 3848 0699 E8000000 		call	glVertex3d
 3848      00
 3849              	.LVL551:
 3850 069e F20F1015 		movsd	.LC2(%rip), %xmm2
 3850      00000000 
 3851 06a6 F20F1005 		movsd	.LC6(%rip), %xmm0
 3851      00000000 
 3852 06ae 660F28CA 		movapd	%xmm2, %xmm1
 3853 06b2 E8000000 		call	glVertex3d
 3853      00
 3854              	.LVL552:
 3855 06b7 660FEFC0 		pxor	%xmm0, %xmm0
 3856 06bb F20F1015 		movsd	.LC20(%rip), %xmm2
 3856      00000000 
 3857 06c3 F20F100D 		movsd	.LC21(%rip), %xmm1
 3857      00000000 
 3858 06cb E8000000 		call	glVertex3d
 3858      00
 3859              	.LVL553:
 3860 06d0 660FEFC0 		pxor	%xmm0, %xmm0
 3861 06d4 F20F1015 		movsd	.LC22(%rip), %xmm2
 3861      00000000 
 3862 06dc F20F100D 		movsd	.LC21(%rip), %xmm1
 3862      00000000 
 3863 06e4 E8000000 		call	glVertex3d
 3863      00
 3864              	.LVL554:
 3865 06e9 F20F1015 		movsd	.LC6(%rip), %xmm2
 3865      00000000 
 3866 06f1 F20F100D 		movsd	.LC2(%rip), %xmm1
 3866      00000000 
 3867 06f9 660F28C2 		movapd	%xmm2, %xmm0
 3868 06fd E8000000 		call	glVertex3d
 3868      00
 3869              	.LVL555:
 3870              		.loc 1 786 0
 3871 0702 E8000000 		call	glEnd
 3871      00
 3872              	.LVL556:
 3873              		.loc 1 787 0
 3874 0707 BF020000 		movl	$2, %edi
 3874      00
 3875 070c E8000000 		call	glBegin
 3875      00
 3876              	.LVL557:
 3877              		.loc 1 788 0
 3878 0711 660FEFD2 		pxor	%xmm2, %xmm2
 3879 0715 F20F100D 		movsd	.LC23(%rip), %xmm1
 3879      00000000 
 3880 071d F20F1005 		movsd	.LC25(%rip), %xmm0
 3880      00000000 
 3881 0725 E8000000 		call	glNormal3d
 3881      00
 3882              	.LVL558:
 3883 072a 660FEFD2 		pxor	%xmm2, %xmm2
 3884 072e F20F100D 		movsd	.LC22(%rip), %xmm1
 3884      00000000 
 3885 0736 F20F1005 		movsd	.LC24(%rip), %xmm0
 3885      00000000 
 3886 073e E8000000 		call	glVertex3d
 3886      00
 3887              	.LVL559:
 3888 0743 F20F1015 		movsd	.LC6(%rip), %xmm2
 3888      00000000 
 3889 074b 660F28CA 		movapd	%xmm2, %xmm1
 3890 074f 660F28C2 		movapd	%xmm2, %xmm0
 3891 0753 E8000000 		call	glVertex3d
 3891      00
 3892              	.LVL560:
 3893 0758 660FEFC0 		pxor	%xmm0, %xmm0
 3894 075c F20F1015 		movsd	.LC22(%rip), %xmm2
 3894      00000000 
 3895 0764 F20F100D 		movsd	.LC24(%rip), %xmm1
 3895      00000000 
 3896 076c E8000000 		call	glVertex3d
 3896      00
 3897              	.LVL561:
 3898 0771 660FEFC0 		pxor	%xmm0, %xmm0
 3899 0775 F20F1015 		movsd	.LC20(%rip), %xmm2
 3899      00000000 
 3900 077d F20F100D 		movsd	.LC24(%rip), %xmm1
 3900      00000000 
 3901 0785 E8000000 		call	glVertex3d
 3901      00
 3902              	.LVL562:
 3903 078a F20F100D 		movsd	.LC6(%rip), %xmm1
 3903      00000000 
 3904 0792 F20F1015 		movsd	.LC2(%rip), %xmm2
 3904      00000000 
 3905 079a 660F28C1 		movapd	%xmm1, %xmm0
 3906 079e E8000000 		call	glVertex3d
 3906      00
 3907              	.LVL563:
 3908              		.loc 1 790 0
 3909 07a3 4883C408 		addq	$8, %rsp
 3910              		.cfi_def_cfa_offset 8
 3911              		.loc 1 789 0
 3912 07a7 E9000000 		jmp	glEnd
 3912      00
 3913              	.LVL564:
 3914              		.cfi_endproc
 3915              	.LFE386:
 3917              		.section	.text.unlikely._Z20glutWireDodecahedronv
 3918              	.LCOLDE26:
 3919              		.section	.text._Z20glutWireDodecahedronv
 3920              	.LHOTE26:
 3921              		.section	.text.unlikely._Z21glutSolidDodecahedronv,"ax",@progbits
 3922              	.LCOLDB27:
 3923              		.section	.text._Z21glutSolidDodecahedronv,"ax",@progbits
 3924              	.LHOTB27:
 3925              		.p2align 4,,15
 3926              		.globl	_Z21glutSolidDodecahedronv
 3928              	_Z21glutSolidDodecahedronv:
 3929              	.LFB387:
 3930              		.loc 1 796 0
 3931              		.cfi_startproc
 3932 0000 4883EC08 		subq	$8, %rsp
 3933              		.cfi_def_cfa_offset 16
 3934              		.loc 1 803 0
 3935 0004 BF090000 		movl	$9, %edi
 3935      00
 3936 0009 E8000000 		call	glBegin
 3936      00
 3937              	.LVL565:
 3938              		.loc 1 804 0
 3939 000e 660FEFC0 		pxor	%xmm0, %xmm0
 3940 0012 F20F1015 		movsd	.LC18(%rip), %xmm2
 3940      00000000 
 3941 001a F20F100D 		movsd	.LC19(%rip), %xmm1
 3941      00000000 
 3942 0022 E8000000 		call	glNormal3d
 3942      00
 3943              	.LVL566:
 3944 0027 660FEFC0 		pxor	%xmm0, %xmm0
 3945 002b F20F1015 		movsd	.LC20(%rip), %xmm2
 3945      00000000 
 3946 0033 F20F100D 		movsd	.LC21(%rip), %xmm1
 3946      00000000 
 3947 003b E8000000 		call	glVertex3d
 3947      00
 3948              	.LVL567:
 3949 0040 F20F1015 		movsd	.LC2(%rip), %xmm2
 3949      00000000 
 3950 0048 F20F1005 		movsd	.LC6(%rip), %xmm0
 3950      00000000 
 3951 0050 660F28CA 		movapd	%xmm2, %xmm1
 3952 0054 E8000000 		call	glVertex3d
 3952      00
 3953              	.LVL568:
 3954 0059 660FEFC9 		pxor	%xmm1, %xmm1
 3955 005d F20F1015 		movsd	.LC21(%rip), %xmm2
 3955      00000000 
 3956 0065 F20F1005 		movsd	.LC22(%rip), %xmm0
 3956      00000000 
 3957 006d E8000000 		call	glVertex3d
 3957      00
 3958              	.LVL569:
 3959 0072 660FEFC9 		pxor	%xmm1, %xmm1
 3960 0076 F20F1015 		movsd	.LC21(%rip), %xmm2
 3960      00000000 
 3961 007e F20F1005 		movsd	.LC20(%rip), %xmm0
 3961      00000000 
 3962 0086 E8000000 		call	glVertex3d
 3962      00
 3963              	.LVL570:
 3964 008b F20F1015 		movsd	.LC2(%rip), %xmm2
 3964      00000000 
 3965 0093 660F28CA 		movapd	%xmm2, %xmm1
 3966 0097 660F28C2 		movapd	%xmm2, %xmm0
 3967 009b E8000000 		call	glVertex3d
 3967      00
 3968              	.LVL571:
 3969              		.loc 1 805 0
 3970 00a0 E8000000 		call	glEnd
 3970      00
 3971              	.LVL572:
 3972              		.loc 1 806 0
 3973 00a5 BF090000 		movl	$9, %edi
 3973      00
 3974 00aa E8000000 		call	glBegin
 3974      00
 3975              	.LVL573:
 3976              		.loc 1 807 0
 3977 00af 660FEFC0 		pxor	%xmm0, %xmm0
 3978 00b3 F20F1015 		movsd	.LC23(%rip), %xmm2
 3978      00000000 
 3979 00bb F20F100D 		movsd	.LC19(%rip), %xmm1
 3979      00000000 
 3980 00c3 E8000000 		call	glNormal3d
 3980      00
 3981              	.LVL574:
 3982 00c8 660FEFC0 		pxor	%xmm0, %xmm0
 3983 00cc F20F1015 		movsd	.LC22(%rip), %xmm2
 3983      00000000 
 3984 00d4 F20F100D 		movsd	.LC21(%rip), %xmm1
 3984      00000000 
 3985 00dc E8000000 		call	glVertex3d
 3985      00
 3986              	.LVL575:
 3987 00e1 F20F100D 		movsd	.LC2(%rip), %xmm1
 3987      00000000 
 3988 00e9 F20F1015 		movsd	.LC6(%rip), %xmm2
 3988      00000000 
 3989 00f1 660F28C1 		movapd	%xmm1, %xmm0
 3990 00f5 E8000000 		call	glVertex3d
 3990      00
 3991              	.LVL576:
 3992 00fa 660FEFC9 		pxor	%xmm1, %xmm1
 3993 00fe F20F1015 		movsd	.LC24(%rip), %xmm2
 3993      00000000 
 3994 0106 F20F1005 		movsd	.LC20(%rip), %xmm0
 3994      00000000 
 3995 010e E8000000 		call	glVertex3d
 3995      00
 3996              	.LVL577:
 3997 0113 660FEFC9 		pxor	%xmm1, %xmm1
 3998 0117 F20F1015 		movsd	.LC24(%rip), %xmm2
 3998      00000000 
 3999 011f F20F1005 		movsd	.LC22(%rip), %xmm0
 3999      00000000 
 4000 0127 E8000000 		call	glVertex3d
 4000      00
 4001              	.LVL578:
 4002 012c F20F1015 		movsd	.LC6(%rip), %xmm2
 4002      00000000 
 4003 0134 F20F100D 		movsd	.LC2(%rip), %xmm1
 4003      00000000 
 4004 013c 660F28C2 		movapd	%xmm2, %xmm0
 4005 0140 E8000000 		call	glVertex3d
 4005      00
 4006              	.LVL579:
 4007              		.loc 1 808 0
 4008 0145 E8000000 		call	glEnd
 4008      00
 4009              	.LVL580:
 4010              		.loc 1 809 0
 4011 014a BF090000 		movl	$9, %edi
 4011      00
 4012 014f E8000000 		call	glBegin
 4012      00
 4013              	.LVL581:
 4014              		.loc 1 810 0
 4015 0154 660FEFC0 		pxor	%xmm0, %xmm0
 4016 0158 F20F1015 		movsd	.LC18(%rip), %xmm2
 4016      00000000 
 4017 0160 F20F100D 		movsd	.LC25(%rip), %xmm1
 4017      00000000 
 4018 0168 E8000000 		call	glNormal3d
 4018      00
 4019              	.LVL582:
 4020 016d 660FEFC0 		pxor	%xmm0, %xmm0
 4021 0171 F20F1015 		movsd	.LC20(%rip), %xmm2
 4021      00000000 
 4022 0179 F20F100D 		movsd	.LC24(%rip), %xmm1
 4022      00000000 
 4023 0181 E8000000 		call	glVertex3d
 4023      00
 4024              	.LVL583:
 4025 0186 F20F1015 		movsd	.LC2(%rip), %xmm2
 4025      00000000 
 4026 018e F20F100D 		movsd	.LC6(%rip), %xmm1
 4026      00000000 
 4027 0196 660F28C2 		movapd	%xmm2, %xmm0
 4028 019a E8000000 		call	glVertex3d
 4028      00
 4029              	.LVL584:
 4030 019f 660FEFC9 		pxor	%xmm1, %xmm1
 4031 01a3 F20F1015 		movsd	.LC21(%rip), %xmm2
 4031      00000000 
 4032 01ab F20F1005 		movsd	.LC20(%rip), %xmm0
 4032      00000000 
 4033 01b3 E8000000 		call	glVertex3d
 4033      00
 4034              	.LVL585:
 4035 01b8 660FEFC9 		pxor	%xmm1, %xmm1
 4036 01bc F20F1015 		movsd	.LC21(%rip), %xmm2
 4036      00000000 
 4037 01c4 F20F1005 		movsd	.LC22(%rip), %xmm0
 4037      00000000 
 4038 01cc E8000000 		call	glVertex3d
 4038      00
 4039              	.LVL586:
 4040 01d1 F20F100D 		movsd	.LC6(%rip), %xmm1
 4040      00000000 
 4041 01d9 F20F1015 		movsd	.LC2(%rip), %xmm2
 4041      00000000 
 4042 01e1 660F28C1 		movapd	%xmm1, %xmm0
 4043 01e5 E8000000 		call	glVertex3d
 4043      00
 4044              	.LVL587:
 4045              		.loc 1 811 0
 4046 01ea E8000000 		call	glEnd
 4046      00
 4047              	.LVL588:
 4048              		.loc 1 812 0
 4049 01ef BF090000 		movl	$9, %edi
 4049      00
 4050 01f4 E8000000 		call	glBegin
 4050      00
 4051              	.LVL589:
 4052              		.loc 1 813 0
 4053 01f9 660FEFC0 		pxor	%xmm0, %xmm0
 4054 01fd F20F1015 		movsd	.LC23(%rip), %xmm2
 4054      00000000 
 4055 0205 F20F100D 		movsd	.LC25(%rip), %xmm1
 4055      00000000 
 4056 020d E8000000 		call	glNormal3d
 4056      00
 4057              	.LVL590:
 4058 0212 660FEFC0 		pxor	%xmm0, %xmm0
 4059 0216 F20F1015 		movsd	.LC22(%rip), %xmm2
 4059      00000000 
 4060 021e F20F100D 		movsd	.LC24(%rip), %xmm1
 4060      00000000 
 4061 0226 E8000000 		call	glVertex3d
 4061      00
 4062              	.LVL591:
 4063 022b F20F1015 		movsd	.LC6(%rip), %xmm2
 4063      00000000 
 4064 0233 660F28CA 		movapd	%xmm2, %xmm1
 4065 0237 660F28C2 		movapd	%xmm2, %xmm0
 4066 023b E8000000 		call	glVertex3d
 4066      00
 4067              	.LVL592:
 4068 0240 660FEFC9 		pxor	%xmm1, %xmm1
 4069 0244 F20F1015 		movsd	.LC24(%rip), %xmm2
 4069      00000000 
 4070 024c F20F1005 		movsd	.LC22(%rip), %xmm0
 4070      00000000 
 4071 0254 E8000000 		call	glVertex3d
 4071      00
 4072              	.LVL593:
 4073 0259 660FEFC9 		pxor	%xmm1, %xmm1
 4074 025d F20F1015 		movsd	.LC24(%rip), %xmm2
 4074      00000000 
 4075 0265 F20F1005 		movsd	.LC20(%rip), %xmm0
 4075      00000000 
 4076 026d E8000000 		call	glVertex3d
 4076      00
 4077              	.LVL594:
 4078 0272 F20F1015 		movsd	.LC6(%rip), %xmm2
 4078      00000000 
 4079 027a F20F1005 		movsd	.LC2(%rip), %xmm0
 4079      00000000 
 4080 0282 660F28CA 		movapd	%xmm2, %xmm1
 4081 0286 E8000000 		call	glVertex3d
 4081      00
 4082              	.LVL595:
 4083              		.loc 1 814 0
 4084 028b E8000000 		call	glEnd
 4084      00
 4085              	.LVL596:
 4086              		.loc 1 816 0
 4087 0290 BF090000 		movl	$9, %edi
 4087      00
 4088 0295 E8000000 		call	glBegin
 4088      00
 4089              	.LVL597:
 4090              		.loc 1 817 0
 4091 029a 660FEFC9 		pxor	%xmm1, %xmm1
 4092 029e F20F1015 		movsd	.LC19(%rip), %xmm2
 4092      00000000 
 4093 02a6 F20F1005 		movsd	.LC18(%rip), %xmm0
 4093      00000000 
 4094 02ae E8000000 		call	glNormal3d
 4094      00
 4095              	.LVL598:
 4096 02b3 660FEFC9 		pxor	%xmm1, %xmm1
 4097 02b7 F20F1015 		movsd	.LC21(%rip), %xmm2
 4097      00000000 
 4098 02bf F20F1005 		movsd	.LC20(%rip), %xmm0
 4098      00000000 
 4099 02c7 E8000000 		call	glVertex3d
 4099      00
 4100              	.LVL599:
 4101 02cc F20F1015 		movsd	.LC2(%rip), %xmm2
 4101      00000000 
 4102 02d4 F20F100D 		movsd	.LC6(%rip), %xmm1
 4102      00000000 
 4103 02dc 660F28C2 		movapd	%xmm2, %xmm0
 4104 02e0 E8000000 		call	glVertex3d
 4104      00
 4105              	.LVL600:
 4106 02e5 660FEFD2 		pxor	%xmm2, %xmm2
 4107 02e9 F20F100D 		movsd	.LC22(%rip), %xmm1
 4107      00000000 
 4108 02f1 F20F1005 		movsd	.LC21(%rip), %xmm0
 4108      00000000 
 4109 02f9 E8000000 		call	glVertex3d
 4109      00
 4110              	.LVL601:
 4111 02fe 660FEFD2 		pxor	%xmm2, %xmm2
 4112 0302 F20F100D 		movsd	.LC20(%rip), %xmm1
 4112      00000000 
 4113 030a F20F1005 		movsd	.LC21(%rip), %xmm0
 4113      00000000 
 4114 0312 E8000000 		call	glVertex3d
 4114      00
 4115              	.LVL602:
 4116 0317 F20F1015 		movsd	.LC2(%rip), %xmm2
 4116      00000000 
 4117 031f 660F28CA 		movapd	%xmm2, %xmm1
 4118 0323 660F28C2 		movapd	%xmm2, %xmm0
 4119 0327 E8000000 		call	glVertex3d
 4119      00
 4120              	.LVL603:
 4121              		.loc 1 818 0
 4122 032c E8000000 		call	glEnd
 4122      00
 4123              	.LVL604:
 4124              		.loc 1 819 0
 4125 0331 BF090000 		movl	$9, %edi
 4125      00
 4126 0336 E8000000 		call	glBegin
 4126      00
 4127              	.LVL605:
 4128              		.loc 1 820 0
 4129 033b 660FEFC9 		pxor	%xmm1, %xmm1
 4130 033f F20F1015 		movsd	.LC19(%rip), %xmm2
 4130      00000000 
 4131 0347 F20F1005 		movsd	.LC23(%rip), %xmm0
 4131      00000000 
 4132 034f E8000000 		call	glNormal3d
 4132      00
 4133              	.LVL606:
 4134 0354 660FEFC9 		pxor	%xmm1, %xmm1
 4135 0358 F20F1015 		movsd	.LC21(%rip), %xmm2
 4135      00000000 
 4136 0360 F20F1005 		movsd	.LC22(%rip), %xmm0
 4136      00000000 
 4137 0368 E8000000 		call	glVertex3d
 4137      00
 4138              	.LVL607:
 4139 036d F20F1015 		movsd	.LC2(%rip), %xmm2
 4139      00000000 
 4140 0375 F20F1005 		movsd	.LC6(%rip), %xmm0
 4140      00000000 
 4141 037d 660F28CA 		movapd	%xmm2, %xmm1
 4142 0381 E8000000 		call	glVertex3d
 4142      00
 4143              	.LVL608:
 4144 0386 660FEFD2 		pxor	%xmm2, %xmm2
 4145 038a F20F100D 		movsd	.LC20(%rip), %xmm1
 4145      00000000 
 4146 0392 F20F1005 		movsd	.LC24(%rip), %xmm0
 4146      00000000 
 4147 039a E8000000 		call	glVertex3d
 4147      00
 4148              	.LVL609:
 4149 039f 660FEFD2 		pxor	%xmm2, %xmm2
 4150 03a3 F20F100D 		movsd	.LC22(%rip), %xmm1
 4150      00000000 
 4151 03ab F20F1005 		movsd	.LC24(%rip), %xmm0
 4151      00000000 
 4152 03b3 E8000000 		call	glVertex3d
 4152      00
 4153              	.LVL610:
 4154 03b8 F20F100D 		movsd	.LC6(%rip), %xmm1
 4154      00000000 
 4155 03c0 F20F1015 		movsd	.LC2(%rip), %xmm2
 4155      00000000 
 4156 03c8 660F28C1 		movapd	%xmm1, %xmm0
 4157 03cc E8000000 		call	glVertex3d
 4157      00
 4158              	.LVL611:
 4159              		.loc 1 821 0
 4160 03d1 E8000000 		call	glEnd
 4160      00
 4161              	.LVL612:
 4162              		.loc 1 822 0
 4163 03d6 BF090000 		movl	$9, %edi
 4163      00
 4164 03db E8000000 		call	glBegin
 4164      00
 4165              	.LVL613:
 4166              		.loc 1 823 0
 4167 03e0 660FEFC9 		pxor	%xmm1, %xmm1
 4168 03e4 F20F1015 		movsd	.LC25(%rip), %xmm2
 4168      00000000 
 4169 03ec F20F1005 		movsd	.LC18(%rip), %xmm0
 4169      00000000 
 4170 03f4 E8000000 		call	glNormal3d
 4170      00
 4171              	.LVL614:
 4172 03f9 660FEFC9 		pxor	%xmm1, %xmm1
 4173 03fd F20F1015 		movsd	.LC24(%rip), %xmm2
 4173      00000000 
 4174 0405 F20F1005 		movsd	.LC20(%rip), %xmm0
 4174      00000000 
 4175 040d E8000000 		call	glVertex3d
 4175      00
 4176              	.LVL615:
 4177 0412 F20F100D 		movsd	.LC2(%rip), %xmm1
 4177      00000000 
 4178 041a F20F1015 		movsd	.LC6(%rip), %xmm2
 4178      00000000 
 4179 0422 660F28C1 		movapd	%xmm1, %xmm0
 4180 0426 E8000000 		call	glVertex3d
 4180      00
 4181              	.LVL616:
 4182 042b 660FEFD2 		pxor	%xmm2, %xmm2
 4183 042f F20F100D 		movsd	.LC20(%rip), %xmm1
 4183      00000000 
 4184 0437 F20F1005 		movsd	.LC21(%rip), %xmm0
 4184      00000000 
 4185 043f E8000000 		call	glVertex3d
 4185      00
 4186              	.LVL617:
 4187 0444 660FEFD2 		pxor	%xmm2, %xmm2
 4188 0448 F20F100D 		movsd	.LC22(%rip), %xmm1
 4188      00000000 
 4189 0450 F20F1005 		movsd	.LC21(%rip), %xmm0
 4189      00000000 
 4190 0458 E8000000 		call	glVertex3d
 4190      00
 4191              	.LVL618:
 4192 045d F20F1015 		movsd	.LC6(%rip), %xmm2
 4192      00000000 
 4193 0465 F20F1005 		movsd	.LC2(%rip), %xmm0
 4193      00000000 
 4194 046d 660F28CA 		movapd	%xmm2, %xmm1
 4195 0471 E8000000 		call	glVertex3d
 4195      00
 4196              	.LVL619:
 4197              		.loc 1 824 0
 4198 0476 E8000000 		call	glEnd
 4198      00
 4199              	.LVL620:
 4200              		.loc 1 825 0
 4201 047b BF090000 		movl	$9, %edi
 4201      00
 4202 0480 E8000000 		call	glBegin
 4202      00
 4203              	.LVL621:
 4204              		.loc 1 826 0
 4205 0485 660FEFC9 		pxor	%xmm1, %xmm1
 4206 0489 F20F1015 		movsd	.LC25(%rip), %xmm2
 4206      00000000 
 4207 0491 F20F1005 		movsd	.LC23(%rip), %xmm0
 4207      00000000 
 4208 0499 E8000000 		call	glNormal3d
 4208      00
 4209              	.LVL622:
 4210 049e 660FEFC9 		pxor	%xmm1, %xmm1
 4211 04a2 F20F1015 		movsd	.LC24(%rip), %xmm2
 4211      00000000 
 4212 04aa F20F1005 		movsd	.LC22(%rip), %xmm0
 4212      00000000 
 4213 04b2 E8000000 		call	glVertex3d
 4213      00
 4214              	.LVL623:
 4215 04b7 F20F1015 		movsd	.LC6(%rip), %xmm2
 4215      00000000 
 4216 04bf 660F28CA 		movapd	%xmm2, %xmm1
 4217 04c3 660F28C2 		movapd	%xmm2, %xmm0
 4218 04c7 E8000000 		call	glVertex3d
 4218      00
 4219              	.LVL624:
 4220 04cc 660FEFD2 		pxor	%xmm2, %xmm2
 4221 04d0 F20F100D 		movsd	.LC22(%rip), %xmm1
 4221      00000000 
 4222 04d8 F20F1005 		movsd	.LC24(%rip), %xmm0
 4222      00000000 
 4223 04e0 E8000000 		call	glVertex3d
 4223      00
 4224              	.LVL625:
 4225 04e5 660FEFD2 		pxor	%xmm2, %xmm2
 4226 04e9 F20F100D 		movsd	.LC20(%rip), %xmm1
 4226      00000000 
 4227 04f1 F20F1005 		movsd	.LC24(%rip), %xmm0
 4227      00000000 
 4228 04f9 E8000000 		call	glVertex3d
 4228      00
 4229              	.LVL626:
 4230 04fe F20F1015 		movsd	.LC6(%rip), %xmm2
 4230      00000000 
 4231 0506 F20F100D 		movsd	.LC2(%rip), %xmm1
 4231      00000000 
 4232 050e 660F28C2 		movapd	%xmm2, %xmm0
 4233 0512 E8000000 		call	glVertex3d
 4233      00
 4234              	.LVL627:
 4235              		.loc 1 827 0
 4236 0517 E8000000 		call	glEnd
 4236      00
 4237              	.LVL628:
 4238              		.loc 1 829 0
 4239 051c BF090000 		movl	$9, %edi
 4239      00
 4240 0521 E8000000 		call	glBegin
 4240      00
 4241              	.LVL629:
 4242              		.loc 1 830 0
 4243 0526 660FEFD2 		pxor	%xmm2, %xmm2
 4244 052a F20F100D 		movsd	.LC18(%rip), %xmm1
 4244      00000000 
 4245 0532 F20F1005 		movsd	.LC19(%rip), %xmm0
 4245      00000000 
 4246 053a E8000000 		call	glNormal3d
 4246      00
 4247              	.LVL630:
 4248 053f 660FEFD2 		pxor	%xmm2, %xmm2
 4249 0543 F20F100D 		movsd	.LC20(%rip), %xmm1
 4249      00000000 
 4250 054b F20F1005 		movsd	.LC21(%rip), %xmm0
 4250      00000000 
 4251 0553 E8000000 		call	glVertex3d
 4251      00
 4252              	.LVL631:
 4253 0558 F20F100D 		movsd	.LC2(%rip), %xmm1
 4253      00000000 
 4254 0560 F20F1015 		movsd	.LC6(%rip), %xmm2
 4254      00000000 
 4255 0568 660F28C1 		movapd	%xmm1, %xmm0
 4256 056c E8000000 		call	glVertex3d
 4256      00
 4257              	.LVL632:
 4258 0571 660FEFC0 		pxor	%xmm0, %xmm0
 4259 0575 F20F1015 		movsd	.LC22(%rip), %xmm2
 4259      00000000 
 4260 057d F20F100D 		movsd	.LC21(%rip), %xmm1
 4260      00000000 
 4261 0585 E8000000 		call	glVertex3d
 4261      00
 4262              	.LVL633:
 4263 058a 660FEFC0 		pxor	%xmm0, %xmm0
 4264 058e F20F1015 		movsd	.LC20(%rip), %xmm2
 4264      00000000 
 4265 0596 F20F100D 		movsd	.LC21(%rip), %xmm1
 4265      00000000 
 4266 059e E8000000 		call	glVertex3d
 4266      00
 4267              	.LVL634:
 4268 05a3 F20F1015 		movsd	.LC2(%rip), %xmm2
 4268      00000000 
 4269 05ab 660F28CA 		movapd	%xmm2, %xmm1
 4270 05af 660F28C2 		movapd	%xmm2, %xmm0
 4271 05b3 E8000000 		call	glVertex3d
 4271      00
 4272              	.LVL635:
 4273              		.loc 1 831 0
 4274 05b8 E8000000 		call	glEnd
 4274      00
 4275              	.LVL636:
 4276              		.loc 1 832 0
 4277 05bd BF090000 		movl	$9, %edi
 4277      00
 4278 05c2 E8000000 		call	glBegin
 4278      00
 4279              	.LVL637:
 4280              		.loc 1 833 0
 4281 05c7 660FEFD2 		pxor	%xmm2, %xmm2
 4282 05cb F20F100D 		movsd	.LC23(%rip), %xmm1
 4282      00000000 
 4283 05d3 F20F1005 		movsd	.LC19(%rip), %xmm0
 4283      00000000 
 4284 05db E8000000 		call	glNormal3d
 4284      00
 4285              	.LVL638:
 4286 05e0 660FEFD2 		pxor	%xmm2, %xmm2
 4287 05e4 F20F100D 		movsd	.LC22(%rip), %xmm1
 4287      00000000 
 4288 05ec F20F1005 		movsd	.LC21(%rip), %xmm0
 4288      00000000 
 4289 05f4 E8000000 		call	glVertex3d
 4289      00
 4290              	.LVL639:
 4291 05f9 F20F1015 		movsd	.LC2(%rip), %xmm2
 4291      00000000 
 4292 0601 F20F100D 		movsd	.LC6(%rip), %xmm1
 4292      00000000 
 4293 0609 660F28C2 		movapd	%xmm2, %xmm0
 4294 060d E8000000 		call	glVertex3d
 4294      00
 4295              	.LVL640:
 4296 0612 660FEFC0 		pxor	%xmm0, %xmm0
 4297 0616 F20F1015 		movsd	.LC20(%rip), %xmm2
 4297      00000000 
 4298 061e F20F100D 		movsd	.LC24(%rip), %xmm1
 4298      00000000 
 4299 0626 E8000000 		call	glVertex3d
 4299      00
 4300              	.LVL641:
 4301 062b 660FEFC0 		pxor	%xmm0, %xmm0
 4302 062f F20F1015 		movsd	.LC22(%rip), %xmm2
 4302      00000000 
 4303 0637 F20F100D 		movsd	.LC24(%rip), %xmm1
 4303      00000000 
 4304 063f E8000000 		call	glVertex3d
 4304      00
 4305              	.LVL642:
 4306 0644 F20F1015 		movsd	.LC6(%rip), %xmm2
 4306      00000000 
 4307 064c F20F1005 		movsd	.LC2(%rip), %xmm0
 4307      00000000 
 4308 0654 660F28CA 		movapd	%xmm2, %xmm1
 4309 0658 E8000000 		call	glVertex3d
 4309      00
 4310              	.LVL643:
 4311              		.loc 1 834 0
 4312 065d E8000000 		call	glEnd
 4312      00
 4313              	.LVL644:
 4314              		.loc 1 835 0
 4315 0662 BF090000 		movl	$9, %edi
 4315      00
 4316 0667 E8000000 		call	glBegin
 4316      00
 4317              	.LVL645:
 4318              		.loc 1 836 0
 4319 066c 660FEFD2 		pxor	%xmm2, %xmm2
 4320 0670 F20F100D 		movsd	.LC18(%rip), %xmm1
 4320      00000000 
 4321 0678 F20F1005 		movsd	.LC25(%rip), %xmm0
 4321      00000000 
 4322 0680 E8000000 		call	glNormal3d
 4322      00
 4323              	.LVL646:
 4324 0685 660FEFD2 		pxor	%xmm2, %xmm2
 4325 0689 F20F100D 		movsd	.LC20(%rip), %xmm1
 4325      00000000 
 4326 0691 F20F1005 		movsd	.LC24(%rip), %xmm0
 4326      00000000 
 4327 0699 E8000000 		call	glVertex3d
 4327      00
 4328              	.LVL647:
 4329 069e F20F1015 		movsd	.LC2(%rip), %xmm2
 4329      00000000 
 4330 06a6 F20F1005 		movsd	.LC6(%rip), %xmm0
 4330      00000000 
 4331 06ae 660F28CA 		movapd	%xmm2, %xmm1
 4332 06b2 E8000000 		call	glVertex3d
 4332      00
 4333              	.LVL648:
 4334 06b7 660FEFC0 		pxor	%xmm0, %xmm0
 4335 06bb F20F1015 		movsd	.LC20(%rip), %xmm2
 4335      00000000 
 4336 06c3 F20F100D 		movsd	.LC21(%rip), %xmm1
 4336      00000000 
 4337 06cb E8000000 		call	glVertex3d
 4337      00
 4338              	.LVL649:
 4339 06d0 660FEFC0 		pxor	%xmm0, %xmm0
 4340 06d4 F20F1015 		movsd	.LC22(%rip), %xmm2
 4340      00000000 
 4341 06dc F20F100D 		movsd	.LC21(%rip), %xmm1
 4341      00000000 
 4342 06e4 E8000000 		call	glVertex3d
 4342      00
 4343              	.LVL650:
 4344 06e9 F20F1015 		movsd	.LC6(%rip), %xmm2
 4344      00000000 
 4345 06f1 F20F100D 		movsd	.LC2(%rip), %xmm1
 4345      00000000 
 4346 06f9 660F28C2 		movapd	%xmm2, %xmm0
 4347 06fd E8000000 		call	glVertex3d
 4347      00
 4348              	.LVL651:
 4349              		.loc 1 837 0
 4350 0702 E8000000 		call	glEnd
 4350      00
 4351              	.LVL652:
 4352              		.loc 1 838 0
 4353 0707 BF090000 		movl	$9, %edi
 4353      00
 4354 070c E8000000 		call	glBegin
 4354      00
 4355              	.LVL653:
 4356              		.loc 1 839 0
 4357 0711 660FEFD2 		pxor	%xmm2, %xmm2
 4358 0715 F20F100D 		movsd	.LC23(%rip), %xmm1
 4358      00000000 
 4359 071d F20F1005 		movsd	.LC25(%rip), %xmm0
 4359      00000000 
 4360 0725 E8000000 		call	glNormal3d
 4360      00
 4361              	.LVL654:
 4362 072a 660FEFD2 		pxor	%xmm2, %xmm2
 4363 072e F20F100D 		movsd	.LC22(%rip), %xmm1
 4363      00000000 
 4364 0736 F20F1005 		movsd	.LC24(%rip), %xmm0
 4364      00000000 
 4365 073e E8000000 		call	glVertex3d
 4365      00
 4366              	.LVL655:
 4367 0743 F20F1015 		movsd	.LC6(%rip), %xmm2
 4367      00000000 
 4368 074b 660F28CA 		movapd	%xmm2, %xmm1
 4369 074f 660F28C2 		movapd	%xmm2, %xmm0
 4370 0753 E8000000 		call	glVertex3d
 4370      00
 4371              	.LVL656:
 4372 0758 660FEFC0 		pxor	%xmm0, %xmm0
 4373 075c F20F1015 		movsd	.LC22(%rip), %xmm2
 4373      00000000 
 4374 0764 F20F100D 		movsd	.LC24(%rip), %xmm1
 4374      00000000 
 4375 076c E8000000 		call	glVertex3d
 4375      00
 4376              	.LVL657:
 4377 0771 660FEFC0 		pxor	%xmm0, %xmm0
 4378 0775 F20F1015 		movsd	.LC20(%rip), %xmm2
 4378      00000000 
 4379 077d F20F100D 		movsd	.LC24(%rip), %xmm1
 4379      00000000 
 4380 0785 E8000000 		call	glVertex3d
 4380      00
 4381              	.LVL658:
 4382 078a F20F100D 		movsd	.LC6(%rip), %xmm1
 4382      00000000 
 4383 0792 F20F1015 		movsd	.LC2(%rip), %xmm2
 4383      00000000 
 4384 079a 660F28C1 		movapd	%xmm1, %xmm0
 4385 079e E8000000 		call	glVertex3d
 4385      00
 4386              	.LVL659:
 4387              		.loc 1 841 0
 4388 07a3 4883C408 		addq	$8, %rsp
 4389              		.cfi_def_cfa_offset 8
 4390              		.loc 1 840 0
 4391 07a7 E9000000 		jmp	glEnd
 4391      00
 4392              	.LVL660:
 4393              		.cfi_endproc
 4394              	.LFE387:
 4396              		.section	.text.unlikely._Z21glutSolidDodecahedronv
 4397              	.LCOLDE27:
 4398              		.section	.text._Z21glutSolidDodecahedronv
 4399              	.LHOTE27:
 4400              		.section	.text.unlikely._Z18glutWireOctahedronv,"ax",@progbits
 4401              	.LCOLDB30:
 4402              		.section	.text._Z18glutWireOctahedronv,"ax",@progbits
 4403              	.LHOTB30:
 4404              		.p2align 4,,15
 4405              		.globl	_Z18glutWireOctahedronv
 4407              	_Z18glutWireOctahedronv:
 4408              	.LFB388:
 4409              		.loc 1 847 0
 4410              		.cfi_startproc
 4411 0000 4883EC08 		subq	$8, %rsp
 4412              		.cfi_def_cfa_offset 16
 4413              		.loc 1 849 0
 4414 0004 BF020000 		movl	$2, %edi
 4414      00
 4415 0009 E8000000 		call	glBegin
 4415      00
 4416              	.LVL661:
 4417              		.loc 1 850 0
 4418 000e F20F1015 		movsd	.LC28(%rip), %xmm2
 4418      00000000 
 4419 0016 660F28CA 		movapd	%xmm2, %xmm1
 4420 001a 660F28C2 		movapd	%xmm2, %xmm0
 4421 001e E8000000 		call	glNormal3d
 4421      00
 4422              	.LVL662:
 4423 0023 660FEFD2 		pxor	%xmm2, %xmm2
 4424 0027 F20F1005 		movsd	.LC2(%rip), %xmm0
 4424      00000000 
 4425 002f 660F28CA 		movapd	%xmm2, %xmm1
 4426 0033 E8000000 		call	glVertex3d
 4426      00
 4427              	.LVL663:
 4428 0038 660FEFD2 		pxor	%xmm2, %xmm2
 4429 003c F20F100D 		movsd	.LC2(%rip), %xmm1
 4429      00000000 
 4430 0044 660F28C2 		movapd	%xmm2, %xmm0
 4431 0048 E8000000 		call	glVertex3d
 4431      00
 4432              	.LVL664:
 4433 004d 660FEFC9 		pxor	%xmm1, %xmm1
 4434 0051 F20F1015 		movsd	.LC2(%rip), %xmm2
 4434      00000000 
 4435 0059 660F28C1 		movapd	%xmm1, %xmm0
 4436 005d E8000000 		call	glVertex3d
 4436      00
 4437              	.LVL665:
 4438              		.loc 1 851 0
 4439 0062 F20F100D 		movsd	.LC28(%rip), %xmm1
 4439      00000000 
 4440 006a F20F1015 		movsd	.LC29(%rip), %xmm2
 4440      00000000 
 4441 0072 660F28C1 		movapd	%xmm1, %xmm0
 4442 0076 E8000000 		call	glNormal3d
 4442      00
 4443              	.LVL666:
 4444 007b 660FEFD2 		pxor	%xmm2, %xmm2
 4445 007f F20F1005 		movsd	.LC2(%rip), %xmm0
 4445      00000000 
 4446 0087 660F28CA 		movapd	%xmm2, %xmm1
 4447 008b E8000000 		call	glVertex3d
 4447      00
 4448              	.LVL667:
 4449 0090 660FEFC9 		pxor	%xmm1, %xmm1
 4450 0094 F20F1015 		movsd	.LC6(%rip), %xmm2
 4450      00000000 
 4451 009c 660F28C1 		movapd	%xmm1, %xmm0
 4452 00a0 E8000000 		call	glVertex3d
 4452      00
 4453              	.LVL668:
 4454 00a5 660FEFD2 		pxor	%xmm2, %xmm2
 4455 00a9 F20F100D 		movsd	.LC2(%rip), %xmm1
 4455      00000000 
 4456 00b1 660F28C2 		movapd	%xmm2, %xmm0
 4457 00b5 E8000000 		call	glVertex3d
 4457      00
 4458              	.LVL669:
 4459              		.loc 1 852 0
 4460 00ba F20F1015 		movsd	.LC28(%rip), %xmm2
 4460      00000000 
 4461 00c2 F20F100D 		movsd	.LC29(%rip), %xmm1
 4461      00000000 
 4462 00ca 660F28C2 		movapd	%xmm2, %xmm0
 4463 00ce E8000000 		call	glNormal3d
 4463      00
 4464              	.LVL670:
 4465 00d3 660FEFD2 		pxor	%xmm2, %xmm2
 4466 00d7 F20F1005 		movsd	.LC2(%rip), %xmm0
 4466      00000000 
 4467 00df 660F28CA 		movapd	%xmm2, %xmm1
 4468 00e3 E8000000 		call	glVertex3d
 4468      00
 4469              	.LVL671:
 4470 00e8 660FEFC9 		pxor	%xmm1, %xmm1
 4471 00ec F20F1015 		movsd	.LC2(%rip), %xmm2
 4471      00000000 
 4472 00f4 660F28C1 		movapd	%xmm1, %xmm0
 4473 00f8 E8000000 		call	glVertex3d
 4473      00
 4474              	.LVL672:
 4475 00fd 660FEFD2 		pxor	%xmm2, %xmm2
 4476 0101 F20F100D 		movsd	.LC6(%rip), %xmm1
 4476      00000000 
 4477 0109 660F28C2 		movapd	%xmm2, %xmm0
 4478 010d E8000000 		call	glVertex3d
 4478      00
 4479              	.LVL673:
 4480              		.loc 1 853 0
 4481 0112 F20F1015 		movsd	.LC29(%rip), %xmm2
 4481      00000000 
 4482 011a F20F1005 		movsd	.LC28(%rip), %xmm0
 4482      00000000 
 4483 0122 660F28CA 		movapd	%xmm2, %xmm1
 4484 0126 E8000000 		call	glNormal3d
 4484      00
 4485              	.LVL674:
 4486 012b 660FEFD2 		pxor	%xmm2, %xmm2
 4487 012f F20F1005 		movsd	.LC2(%rip), %xmm0
 4487      00000000 
 4488 0137 660F28CA 		movapd	%xmm2, %xmm1
 4489 013b E8000000 		call	glVertex3d
 4489      00
 4490              	.LVL675:
 4491 0140 660FEFD2 		pxor	%xmm2, %xmm2
 4492 0144 F20F100D 		movsd	.LC6(%rip), %xmm1
 4492      00000000 
 4493 014c 660F28C2 		movapd	%xmm2, %xmm0
 4494 0150 E8000000 		call	glVertex3d
 4494      00
 4495              	.LVL676:
 4496 0155 660FEFC9 		pxor	%xmm1, %xmm1
 4497 0159 F20F1015 		movsd	.LC6(%rip), %xmm2
 4497      00000000 
 4498 0161 660F28C1 		movapd	%xmm1, %xmm0
 4499 0165 E8000000 		call	glVertex3d
 4499      00
 4500              	.LVL677:
 4501              		.loc 1 854 0
 4502 016a F20F1015 		movsd	.LC28(%rip), %xmm2
 4502      00000000 
 4503 0172 F20F1005 		movsd	.LC29(%rip), %xmm0
 4503      00000000 
 4504 017a 660F28CA 		movapd	%xmm2, %xmm1
 4505 017e E8000000 		call	glNormal3d
 4505      00
 4506              	.LVL678:
 4507 0183 660FEFD2 		pxor	%xmm2, %xmm2
 4508 0187 F20F1005 		movsd	.LC6(%rip), %xmm0
 4508      00000000 
 4509 018f 660F28CA 		movapd	%xmm2, %xmm1
 4510 0193 E8000000 		call	glVertex3d
 4510      00
 4511              	.LVL679:
 4512 0198 660FEFC9 		pxor	%xmm1, %xmm1
 4513 019c F20F1015 		movsd	.LC2(%rip), %xmm2
 4513      00000000 
 4514 01a4 660F28C1 		movapd	%xmm1, %xmm0
 4515 01a8 E8000000 		call	glVertex3d
 4515      00
 4516              	.LVL680:
 4517 01ad 660FEFD2 		pxor	%xmm2, %xmm2
 4518 01b1 F20F100D 		movsd	.LC2(%rip), %xmm1
 4518      00000000 
 4519 01b9 660F28C2 		movapd	%xmm2, %xmm0
 4520 01bd E8000000 		call	glVertex3d
 4520      00
 4521              	.LVL681:
 4522              		.loc 1 855 0
 4523 01c2 F20F1015 		movsd	.LC29(%rip), %xmm2
 4523      00000000 
 4524 01ca F20F100D 		movsd	.LC28(%rip), %xmm1
 4524      00000000 
 4525 01d2 660F28C2 		movapd	%xmm2, %xmm0
 4526 01d6 E8000000 		call	glNormal3d
 4526      00
 4527              	.LVL682:
 4528 01db 660FEFD2 		pxor	%xmm2, %xmm2
 4529 01df F20F1005 		movsd	.LC6(%rip), %xmm0
 4529      00000000 
 4530 01e7 660F28CA 		movapd	%xmm2, %xmm1
 4531 01eb E8000000 		call	glVertex3d
 4531      00
 4532              	.LVL683:
 4533 01f0 660FEFD2 		pxor	%xmm2, %xmm2
 4534 01f4 F20F100D 		movsd	.LC2(%rip), %xmm1
 4534      00000000 
 4535 01fc 660F28C2 		movapd	%xmm2, %xmm0
 4536 0200 E8000000 		call	glVertex3d
 4536      00
 4537              	.LVL684:
 4538 0205 660FEFC9 		pxor	%xmm1, %xmm1
 4539 0209 F20F1015 		movsd	.LC6(%rip), %xmm2
 4539      00000000 
 4540 0211 660F28C1 		movapd	%xmm1, %xmm0
 4541 0215 E8000000 		call	glVertex3d
 4541      00
 4542              	.LVL685:
 4543              		.loc 1 856 0
 4544 021a F20F100D 		movsd	.LC29(%rip), %xmm1
 4544      00000000 
 4545 0222 F20F1015 		movsd	.LC28(%rip), %xmm2
 4545      00000000 
 4546 022a 660F28C1 		movapd	%xmm1, %xmm0
 4547 022e E8000000 		call	glNormal3d
 4547      00
 4548              	.LVL686:
 4549 0233 660FEFD2 		pxor	%xmm2, %xmm2
 4550 0237 F20F1005 		movsd	.LC6(%rip), %xmm0
 4550      00000000 
 4551 023f 660F28CA 		movapd	%xmm2, %xmm1
 4552 0243 E8000000 		call	glVertex3d
 4552      00
 4553              	.LVL687:
 4554 0248 660FEFD2 		pxor	%xmm2, %xmm2
 4555 024c F20F100D 		movsd	.LC6(%rip), %xmm1
 4555      00000000 
 4556 0254 660F28C2 		movapd	%xmm2, %xmm0
 4557 0258 E8000000 		call	glVertex3d
 4557      00
 4558              	.LVL688:
 4559 025d 660FEFC9 		pxor	%xmm1, %xmm1
 4560 0261 F20F1015 		movsd	.LC2(%rip), %xmm2
 4560      00000000 
 4561 0269 660F28C1 		movapd	%xmm1, %xmm0
 4562 026d E8000000 		call	glVertex3d
 4562      00
 4563              	.LVL689:
 4564              		.loc 1 857 0
 4565 0272 F20F1015 		movsd	.LC29(%rip), %xmm2
 4565      00000000 
 4566 027a 660F28CA 		movapd	%xmm2, %xmm1
 4567 027e 660F28C2 		movapd	%xmm2, %xmm0
 4568 0282 E8000000 		call	glNormal3d
 4568      00
 4569              	.LVL690:
 4570 0287 660FEFD2 		pxor	%xmm2, %xmm2
 4571 028b F20F1005 		movsd	.LC6(%rip), %xmm0
 4571      00000000 
 4572 0293 660F28CA 		movapd	%xmm2, %xmm1
 4573 0297 E8000000 		call	glVertex3d
 4573      00
 4574              	.LVL691:
 4575 029c 660FEFC9 		pxor	%xmm1, %xmm1
 4576 02a0 F20F1015 		movsd	.LC6(%rip), %xmm2
 4576      00000000 
 4577 02a8 660F28C1 		movapd	%xmm1, %xmm0
 4578 02ac E8000000 		call	glVertex3d
 4578      00
 4579              	.LVL692:
 4580 02b1 660FEFD2 		pxor	%xmm2, %xmm2
 4581 02b5 F20F100D 		movsd	.LC6(%rip), %xmm1
 4581      00000000 
 4582 02bd 660F28C2 		movapd	%xmm2, %xmm0
 4583 02c1 E8000000 		call	glVertex3d
 4583      00
 4584              	.LVL693:
 4585              		.loc 1 860 0
 4586 02c6 4883C408 		addq	$8, %rsp
 4587              		.cfi_def_cfa_offset 8
 4588              		.loc 1 858 0
 4589 02ca E9000000 		jmp	glEnd
 4589      00
 4590              	.LVL694:
 4591              		.cfi_endproc
 4592              	.LFE388:
 4594              		.section	.text.unlikely._Z18glutWireOctahedronv
 4595              	.LCOLDE30:
 4596              		.section	.text._Z18glutWireOctahedronv
 4597              	.LHOTE30:
 4598              		.section	.text.unlikely._Z19glutSolidOctahedronv,"ax",@progbits
 4599              	.LCOLDB31:
 4600              		.section	.text._Z19glutSolidOctahedronv,"ax",@progbits
 4601              	.LHOTB31:
 4602              		.p2align 4,,15
 4603              		.globl	_Z19glutSolidOctahedronv
 4605              	_Z19glutSolidOctahedronv:
 4606              	.LFB389:
 4607              		.loc 1 866 0
 4608              		.cfi_startproc
 4609 0000 4883EC08 		subq	$8, %rsp
 4610              		.cfi_def_cfa_offset 16
 4611              		.loc 1 868 0
 4612 0004 BF040000 		movl	$4, %edi
 4612      00
 4613 0009 E8000000 		call	glBegin
 4613      00
 4614              	.LVL695:
 4615              		.loc 1 869 0
 4616 000e F20F1015 		movsd	.LC28(%rip), %xmm2
 4616      00000000 
 4617 0016 660F28CA 		movapd	%xmm2, %xmm1
 4618 001a 660F28C2 		movapd	%xmm2, %xmm0
 4619 001e E8000000 		call	glNormal3d
 4619      00
 4620              	.LVL696:
 4621 0023 660FEFD2 		pxor	%xmm2, %xmm2
 4622 0027 F20F1005 		movsd	.LC2(%rip), %xmm0
 4622      00000000 
 4623 002f 660F28CA 		movapd	%xmm2, %xmm1
 4624 0033 E8000000 		call	glVertex3d
 4624      00
 4625              	.LVL697:
 4626 0038 660FEFD2 		pxor	%xmm2, %xmm2
 4627 003c F20F100D 		movsd	.LC2(%rip), %xmm1
 4627      00000000 
 4628 0044 660F28C2 		movapd	%xmm2, %xmm0
 4629 0048 E8000000 		call	glVertex3d
 4629      00
 4630              	.LVL698:
 4631 004d 660FEFC9 		pxor	%xmm1, %xmm1
 4632 0051 F20F1015 		movsd	.LC2(%rip), %xmm2
 4632      00000000 
 4633 0059 660F28C1 		movapd	%xmm1, %xmm0
 4634 005d E8000000 		call	glVertex3d
 4634      00
 4635              	.LVL699:
 4636              		.loc 1 870 0
 4637 0062 F20F100D 		movsd	.LC28(%rip), %xmm1
 4637      00000000 
 4638 006a F20F1015 		movsd	.LC29(%rip), %xmm2
 4638      00000000 
 4639 0072 660F28C1 		movapd	%xmm1, %xmm0
 4640 0076 E8000000 		call	glNormal3d
 4640      00
 4641              	.LVL700:
 4642 007b 660FEFD2 		pxor	%xmm2, %xmm2
 4643 007f F20F1005 		movsd	.LC2(%rip), %xmm0
 4643      00000000 
 4644 0087 660F28CA 		movapd	%xmm2, %xmm1
 4645 008b E8000000 		call	glVertex3d
 4645      00
 4646              	.LVL701:
 4647 0090 660FEFC9 		pxor	%xmm1, %xmm1
 4648 0094 F20F1015 		movsd	.LC6(%rip), %xmm2
 4648      00000000 
 4649 009c 660F28C1 		movapd	%xmm1, %xmm0
 4650 00a0 E8000000 		call	glVertex3d
 4650      00
 4651              	.LVL702:
 4652 00a5 660FEFD2 		pxor	%xmm2, %xmm2
 4653 00a9 F20F100D 		movsd	.LC2(%rip), %xmm1
 4653      00000000 
 4654 00b1 660F28C2 		movapd	%xmm2, %xmm0
 4655 00b5 E8000000 		call	glVertex3d
 4655      00
 4656              	.LVL703:
 4657              		.loc 1 871 0
 4658 00ba F20F1015 		movsd	.LC28(%rip), %xmm2
 4658      00000000 
 4659 00c2 F20F100D 		movsd	.LC29(%rip), %xmm1
 4659      00000000 
 4660 00ca 660F28C2 		movapd	%xmm2, %xmm0
 4661 00ce E8000000 		call	glNormal3d
 4661      00
 4662              	.LVL704:
 4663 00d3 660FEFD2 		pxor	%xmm2, %xmm2
 4664 00d7 F20F1005 		movsd	.LC2(%rip), %xmm0
 4664      00000000 
 4665 00df 660F28CA 		movapd	%xmm2, %xmm1
 4666 00e3 E8000000 		call	glVertex3d
 4666      00
 4667              	.LVL705:
 4668 00e8 660FEFC9 		pxor	%xmm1, %xmm1
 4669 00ec F20F1015 		movsd	.LC2(%rip), %xmm2
 4669      00000000 
 4670 00f4 660F28C1 		movapd	%xmm1, %xmm0
 4671 00f8 E8000000 		call	glVertex3d
 4671      00
 4672              	.LVL706:
 4673 00fd 660FEFD2 		pxor	%xmm2, %xmm2
 4674 0101 F20F100D 		movsd	.LC6(%rip), %xmm1
 4674      00000000 
 4675 0109 660F28C2 		movapd	%xmm2, %xmm0
 4676 010d E8000000 		call	glVertex3d
 4676      00
 4677              	.LVL707:
 4678              		.loc 1 872 0
 4679 0112 F20F1015 		movsd	.LC29(%rip), %xmm2
 4679      00000000 
 4680 011a F20F1005 		movsd	.LC28(%rip), %xmm0
 4680      00000000 
 4681 0122 660F28CA 		movapd	%xmm2, %xmm1
 4682 0126 E8000000 		call	glNormal3d
 4682      00
 4683              	.LVL708:
 4684 012b 660FEFD2 		pxor	%xmm2, %xmm2
 4685 012f F20F1005 		movsd	.LC2(%rip), %xmm0
 4685      00000000 
 4686 0137 660F28CA 		movapd	%xmm2, %xmm1
 4687 013b E8000000 		call	glVertex3d
 4687      00
 4688              	.LVL709:
 4689 0140 660FEFD2 		pxor	%xmm2, %xmm2
 4690 0144 F20F100D 		movsd	.LC6(%rip), %xmm1
 4690      00000000 
 4691 014c 660F28C2 		movapd	%xmm2, %xmm0
 4692 0150 E8000000 		call	glVertex3d
 4692      00
 4693              	.LVL710:
 4694 0155 660FEFC9 		pxor	%xmm1, %xmm1
 4695 0159 F20F1015 		movsd	.LC6(%rip), %xmm2
 4695      00000000 
 4696 0161 660F28C1 		movapd	%xmm1, %xmm0
 4697 0165 E8000000 		call	glVertex3d
 4697      00
 4698              	.LVL711:
 4699              		.loc 1 873 0
 4700 016a F20F1015 		movsd	.LC28(%rip), %xmm2
 4700      00000000 
 4701 0172 F20F1005 		movsd	.LC29(%rip), %xmm0
 4701      00000000 
 4702 017a 660F28CA 		movapd	%xmm2, %xmm1
 4703 017e E8000000 		call	glNormal3d
 4703      00
 4704              	.LVL712:
 4705 0183 660FEFD2 		pxor	%xmm2, %xmm2
 4706 0187 F20F1005 		movsd	.LC6(%rip), %xmm0
 4706      00000000 
 4707 018f 660F28CA 		movapd	%xmm2, %xmm1
 4708 0193 E8000000 		call	glVertex3d
 4708      00
 4709              	.LVL713:
 4710 0198 660FEFC9 		pxor	%xmm1, %xmm1
 4711 019c F20F1015 		movsd	.LC2(%rip), %xmm2
 4711      00000000 
 4712 01a4 660F28C1 		movapd	%xmm1, %xmm0
 4713 01a8 E8000000 		call	glVertex3d
 4713      00
 4714              	.LVL714:
 4715 01ad 660FEFD2 		pxor	%xmm2, %xmm2
 4716 01b1 F20F100D 		movsd	.LC2(%rip), %xmm1
 4716      00000000 
 4717 01b9 660F28C2 		movapd	%xmm2, %xmm0
 4718 01bd E8000000 		call	glVertex3d
 4718      00
 4719              	.LVL715:
 4720              		.loc 1 874 0
 4721 01c2 F20F1015 		movsd	.LC29(%rip), %xmm2
 4721      00000000 
 4722 01ca F20F100D 		movsd	.LC28(%rip), %xmm1
 4722      00000000 
 4723 01d2 660F28C2 		movapd	%xmm2, %xmm0
 4724 01d6 E8000000 		call	glNormal3d
 4724      00
 4725              	.LVL716:
 4726 01db 660FEFD2 		pxor	%xmm2, %xmm2
 4727 01df F20F1005 		movsd	.LC6(%rip), %xmm0
 4727      00000000 
 4728 01e7 660F28CA 		movapd	%xmm2, %xmm1
 4729 01eb E8000000 		call	glVertex3d
 4729      00
 4730              	.LVL717:
 4731 01f0 660FEFD2 		pxor	%xmm2, %xmm2
 4732 01f4 F20F100D 		movsd	.LC2(%rip), %xmm1
 4732      00000000 
 4733 01fc 660F28C2 		movapd	%xmm2, %xmm0
 4734 0200 E8000000 		call	glVertex3d
 4734      00
 4735              	.LVL718:
 4736 0205 660FEFC9 		pxor	%xmm1, %xmm1
 4737 0209 F20F1015 		movsd	.LC6(%rip), %xmm2
 4737      00000000 
 4738 0211 660F28C1 		movapd	%xmm1, %xmm0
 4739 0215 E8000000 		call	glVertex3d
 4739      00
 4740              	.LVL719:
 4741              		.loc 1 875 0
 4742 021a F20F100D 		movsd	.LC29(%rip), %xmm1
 4742      00000000 
 4743 0222 F20F1015 		movsd	.LC28(%rip), %xmm2
 4743      00000000 
 4744 022a 660F28C1 		movapd	%xmm1, %xmm0
 4745 022e E8000000 		call	glNormal3d
 4745      00
 4746              	.LVL720:
 4747 0233 660FEFD2 		pxor	%xmm2, %xmm2
 4748 0237 F20F1005 		movsd	.LC6(%rip), %xmm0
 4748      00000000 
 4749 023f 660F28CA 		movapd	%xmm2, %xmm1
 4750 0243 E8000000 		call	glVertex3d
 4750      00
 4751              	.LVL721:
 4752 0248 660FEFD2 		pxor	%xmm2, %xmm2
 4753 024c F20F100D 		movsd	.LC6(%rip), %xmm1
 4753      00000000 
 4754 0254 660F28C2 		movapd	%xmm2, %xmm0
 4755 0258 E8000000 		call	glVertex3d
 4755      00
 4756              	.LVL722:
 4757 025d 660FEFC9 		pxor	%xmm1, %xmm1
 4758 0261 F20F1015 		movsd	.LC2(%rip), %xmm2
 4758      00000000 
 4759 0269 660F28C1 		movapd	%xmm1, %xmm0
 4760 026d E8000000 		call	glVertex3d
 4760      00
 4761              	.LVL723:
 4762              		.loc 1 876 0
 4763 0272 F20F1015 		movsd	.LC29(%rip), %xmm2
 4763      00000000 
 4764 027a 660F28CA 		movapd	%xmm2, %xmm1
 4765 027e 660F28C2 		movapd	%xmm2, %xmm0
 4766 0282 E8000000 		call	glNormal3d
 4766      00
 4767              	.LVL724:
 4768 0287 660FEFD2 		pxor	%xmm2, %xmm2
 4769 028b F20F1005 		movsd	.LC6(%rip), %xmm0
 4769      00000000 
 4770 0293 660F28CA 		movapd	%xmm2, %xmm1
 4771 0297 E8000000 		call	glVertex3d
 4771      00
 4772              	.LVL725:
 4773 029c 660FEFC9 		pxor	%xmm1, %xmm1
 4774 02a0 F20F1015 		movsd	.LC6(%rip), %xmm2
 4774      00000000 
 4775 02a8 660F28C1 		movapd	%xmm1, %xmm0
 4776 02ac E8000000 		call	glVertex3d
 4776      00
 4777              	.LVL726:
 4778 02b1 660FEFD2 		pxor	%xmm2, %xmm2
 4779 02b5 F20F100D 		movsd	.LC6(%rip), %xmm1
 4779      00000000 
 4780 02bd 660F28C2 		movapd	%xmm2, %xmm0
 4781 02c1 E8000000 		call	glVertex3d
 4781      00
 4782              	.LVL727:
 4783              		.loc 1 879 0
 4784 02c6 4883C408 		addq	$8, %rsp
 4785              		.cfi_def_cfa_offset 8
 4786              		.loc 1 877 0
 4787 02ca E9000000 		jmp	glEnd
 4787      00
 4788              	.LVL728:
 4789              		.cfi_endproc
 4790              	.LFE389:
 4792              		.section	.text.unlikely._Z19glutSolidOctahedronv
 4793              	.LCOLDE31:
 4794              		.section	.text._Z19glutSolidOctahedronv
 4795              	.LHOTE31:
 4796              		.section	.text.unlikely._Z19glutWireTetrahedronv,"ax",@progbits
 4797              	.LCOLDB32:
 4798              		.section	.text._Z19glutWireTetrahedronv,"ax",@progbits
 4799              	.LHOTB32:
 4800              		.p2align 4,,15
 4801              		.globl	_Z19glutWireTetrahedronv
 4803              	_Z19glutWireTetrahedronv:
 4804              	.LFB390:
 4805              		.loc 1 907 0
 4806              		.cfi_startproc
 4807 0000 4883EC18 		subq	$24, %rsp
 4808              		.cfi_def_cfa_offset 32
 4809              		.loc 1 908 0
 4810 0004 BF020000 		movl	$2, %edi
 4810      00
 4811 0009 E8000000 		call	glBegin
 4811      00
 4812              	.LVL729:
 4813              		.loc 1 909 0
 4814 000e F20F101D 		movsd	.LC5(%rip), %xmm3
 4814      00000000 
 4815 0016 F20F1015 		movsd	_ZL5tet_r+16(%rip), %xmm2
 4815      00000000 
 4816 001e F20F100D 		movsd	_ZL5tet_r+8(%rip), %xmm1
 4816      00000000 
 4817 0026 F20F1005 		movsd	_ZL5tet_r(%rip), %xmm0
 4817      00000000 
 4818 002e 660F57D3 		xorpd	%xmm3, %xmm2
 4819 0032 660F57CB 		xorpd	%xmm3, %xmm1
 4820 0036 660F57C3 		xorpd	%xmm3, %xmm0
 4821 003a 0F291C24 		movaps	%xmm3, (%rsp)
 4822 003e E8000000 		call	glNormal3d
 4822      00
 4823              	.LVL730:
 4824 0043 BF000000 		movl	$_ZL5tet_r+24, %edi
 4824      00
 4825 0048 E8000000 		call	glVertex3dv
 4825      00
 4826              	.LVL731:
 4827 004d BF000000 		movl	$_ZL5tet_r+72, %edi
 4827      00
 4828 0052 E8000000 		call	glVertex3dv
 4828      00
 4829              	.LVL732:
 4830 0057 BF000000 		movl	$_ZL5tet_r+48, %edi
 4830      00
 4831 005c E8000000 		call	glVertex3dv
 4831      00
 4832              	.LVL733:
 4833              		.loc 1 910 0
 4834 0061 660F281C 		movapd	(%rsp), %xmm3
 4834      24
 4835 0066 F20F1015 		movsd	_ZL5tet_r+40(%rip), %xmm2
 4835      00000000 
 4836 006e F20F100D 		movsd	_ZL5tet_r+32(%rip), %xmm1
 4836      00000000 
 4837 0076 F20F1005 		movsd	_ZL5tet_r+24(%rip), %xmm0
 4837      00000000 
 4838 007e 660F57D3 		xorpd	%xmm3, %xmm2
 4839 0082 660F57CB 		xorpd	%xmm3, %xmm1
 4840 0086 660F57C3 		xorpd	%xmm3, %xmm0
 4841 008a E8000000 		call	glNormal3d
 4841      00
 4842              	.LVL734:
 4843 008f BF000000 		movl	$_ZL5tet_r, %edi
 4843      00
 4844 0094 E8000000 		call	glVertex3dv
 4844      00
 4845              	.LVL735:
 4846 0099 BF000000 		movl	$_ZL5tet_r+48, %edi
 4846      00
 4847 009e E8000000 		call	glVertex3dv
 4847      00
 4848              	.LVL736:
 4849 00a3 BF000000 		movl	$_ZL5tet_r+72, %edi
 4849      00
 4850 00a8 E8000000 		call	glVertex3dv
 4850      00
 4851              	.LVL737:
 4852              		.loc 1 911 0
 4853 00ad 660F281C 		movapd	(%rsp), %xmm3
 4853      24
 4854 00b2 F20F1015 		movsd	_ZL5tet_r+64(%rip), %xmm2
 4854      00000000 
 4855 00ba F20F100D 		movsd	_ZL5tet_r+56(%rip), %xmm1
 4855      00000000 
 4856 00c2 F20F1005 		movsd	_ZL5tet_r+48(%rip), %xmm0
 4856      00000000 
 4857 00ca 660F57D3 		xorpd	%xmm3, %xmm2
 4858 00ce 660F57CB 		xorpd	%xmm3, %xmm1
 4859 00d2 660F57C3 		xorpd	%xmm3, %xmm0
 4860 00d6 E8000000 		call	glNormal3d
 4860      00
 4861              	.LVL738:
 4862 00db BF000000 		movl	$_ZL5tet_r, %edi
 4862      00
 4863 00e0 E8000000 		call	glVertex3dv
 4863      00
 4864              	.LVL739:
 4865 00e5 BF000000 		movl	$_ZL5tet_r+72, %edi
 4865      00
 4866 00ea E8000000 		call	glVertex3dv
 4866      00
 4867              	.LVL740:
 4868 00ef BF000000 		movl	$_ZL5tet_r+24, %edi
 4868      00
 4869 00f4 E8000000 		call	glVertex3dv
 4869      00
 4870              	.LVL741:
 4871              		.loc 1 912 0
 4872 00f9 660F281C 		movapd	(%rsp), %xmm3
 4872      24
 4873 00fe F20F1015 		movsd	_ZL5tet_r+88(%rip), %xmm2
 4873      00000000 
 4874 0106 F20F100D 		movsd	_ZL5tet_r+80(%rip), %xmm1
 4874      00000000 
 4875 010e F20F1005 		movsd	_ZL5tet_r+72(%rip), %xmm0
 4875      00000000 
 4876 0116 660F57D3 		xorpd	%xmm3, %xmm2
 4877 011a 660F57CB 		xorpd	%xmm3, %xmm1
 4878 011e 660F57C3 		xorpd	%xmm3, %xmm0
 4879 0122 E8000000 		call	glNormal3d
 4879      00
 4880              	.LVL742:
 4881 0127 BF000000 		movl	$_ZL5tet_r, %edi
 4881      00
 4882 012c E8000000 		call	glVertex3dv
 4882      00
 4883              	.LVL743:
 4884 0131 BF000000 		movl	$_ZL5tet_r+24, %edi
 4884      00
 4885 0136 E8000000 		call	glVertex3dv
 4885      00
 4886              	.LVL744:
 4887 013b BF000000 		movl	$_ZL5tet_r+48, %edi
 4887      00
 4888 0140 E8000000 		call	glVertex3dv
 4888      00
 4889              	.LVL745:
 4890              		.loc 1 914 0
 4891 0145 4883C418 		addq	$24, %rsp
 4892              		.cfi_def_cfa_offset 8
 4893              		.loc 1 913 0
 4894 0149 E9000000 		jmp	glEnd
 4894      00
 4895              	.LVL746:
 4896              		.cfi_endproc
 4897              	.LFE390:
 4899              		.section	.text.unlikely._Z19glutWireTetrahedronv
 4900              	.LCOLDE32:
 4901              		.section	.text._Z19glutWireTetrahedronv
 4902              	.LHOTE32:
 4903              		.section	.text.unlikely._Z20glutSolidTetrahedronv,"ax",@progbits
 4904              	.LCOLDB33:
 4905              		.section	.text._Z20glutSolidTetrahedronv,"ax",@progbits
 4906              	.LHOTB33:
 4907              		.p2align 4,,15
 4908              		.globl	_Z20glutSolidTetrahedronv
 4910              	_Z20glutSolidTetrahedronv:
 4911              	.LFB391:
 4912              		.loc 1 920 0
 4913              		.cfi_startproc
 4914 0000 4883EC18 		subq	$24, %rsp
 4915              		.cfi_def_cfa_offset 32
 4916              		.loc 1 921 0
 4917 0004 BF040000 		movl	$4, %edi
 4917      00
 4918 0009 E8000000 		call	glBegin
 4918      00
 4919              	.LVL747:
 4920              		.loc 1 922 0
 4921 000e F20F101D 		movsd	.LC5(%rip), %xmm3
 4921      00000000 
 4922 0016 F20F1015 		movsd	_ZL5tet_r+16(%rip), %xmm2
 4922      00000000 
 4923 001e F20F100D 		movsd	_ZL5tet_r+8(%rip), %xmm1
 4923      00000000 
 4924 0026 F20F1005 		movsd	_ZL5tet_r(%rip), %xmm0
 4924      00000000 
 4925 002e 660F57D3 		xorpd	%xmm3, %xmm2
 4926 0032 660F57CB 		xorpd	%xmm3, %xmm1
 4927 0036 660F57C3 		xorpd	%xmm3, %xmm0
 4928 003a 0F291C24 		movaps	%xmm3, (%rsp)
 4929 003e E8000000 		call	glNormal3d
 4929      00
 4930              	.LVL748:
 4931 0043 BF000000 		movl	$_ZL5tet_r+24, %edi
 4931      00
 4932 0048 E8000000 		call	glVertex3dv
 4932      00
 4933              	.LVL749:
 4934 004d BF000000 		movl	$_ZL5tet_r+72, %edi
 4934      00
 4935 0052 E8000000 		call	glVertex3dv
 4935      00
 4936              	.LVL750:
 4937 0057 BF000000 		movl	$_ZL5tet_r+48, %edi
 4937      00
 4938 005c E8000000 		call	glVertex3dv
 4938      00
 4939              	.LVL751:
 4940              		.loc 1 923 0
 4941 0061 660F281C 		movapd	(%rsp), %xmm3
 4941      24
 4942 0066 F20F1015 		movsd	_ZL5tet_r+40(%rip), %xmm2
 4942      00000000 
 4943 006e F20F100D 		movsd	_ZL5tet_r+32(%rip), %xmm1
 4943      00000000 
 4944 0076 F20F1005 		movsd	_ZL5tet_r+24(%rip), %xmm0
 4944      00000000 
 4945 007e 660F57D3 		xorpd	%xmm3, %xmm2
 4946 0082 660F57CB 		xorpd	%xmm3, %xmm1
 4947 0086 660F57C3 		xorpd	%xmm3, %xmm0
 4948 008a E8000000 		call	glNormal3d
 4948      00
 4949              	.LVL752:
 4950 008f BF000000 		movl	$_ZL5tet_r, %edi
 4950      00
 4951 0094 E8000000 		call	glVertex3dv
 4951      00
 4952              	.LVL753:
 4953 0099 BF000000 		movl	$_ZL5tet_r+48, %edi
 4953      00
 4954 009e E8000000 		call	glVertex3dv
 4954      00
 4955              	.LVL754:
 4956 00a3 BF000000 		movl	$_ZL5tet_r+72, %edi
 4956      00
 4957 00a8 E8000000 		call	glVertex3dv
 4957      00
 4958              	.LVL755:
 4959              		.loc 1 924 0
 4960 00ad 660F281C 		movapd	(%rsp), %xmm3
 4960      24
 4961 00b2 F20F1015 		movsd	_ZL5tet_r+64(%rip), %xmm2
 4961      00000000 
 4962 00ba F20F100D 		movsd	_ZL5tet_r+56(%rip), %xmm1
 4962      00000000 
 4963 00c2 F20F1005 		movsd	_ZL5tet_r+48(%rip), %xmm0
 4963      00000000 
 4964 00ca 660F57D3 		xorpd	%xmm3, %xmm2
 4965 00ce 660F57CB 		xorpd	%xmm3, %xmm1
 4966 00d2 660F57C3 		xorpd	%xmm3, %xmm0
 4967 00d6 E8000000 		call	glNormal3d
 4967      00
 4968              	.LVL756:
 4969 00db BF000000 		movl	$_ZL5tet_r, %edi
 4969      00
 4970 00e0 E8000000 		call	glVertex3dv
 4970      00
 4971              	.LVL757:
 4972 00e5 BF000000 		movl	$_ZL5tet_r+72, %edi
 4972      00
 4973 00ea E8000000 		call	glVertex3dv
 4973      00
 4974              	.LVL758:
 4975 00ef BF000000 		movl	$_ZL5tet_r+24, %edi
 4975      00
 4976 00f4 E8000000 		call	glVertex3dv
 4976      00
 4977              	.LVL759:
 4978              		.loc 1 925 0
 4979 00f9 660F281C 		movapd	(%rsp), %xmm3
 4979      24
 4980 00fe F20F1015 		movsd	_ZL5tet_r+88(%rip), %xmm2
 4980      00000000 
 4981 0106 F20F100D 		movsd	_ZL5tet_r+80(%rip), %xmm1
 4981      00000000 
 4982 010e F20F1005 		movsd	_ZL5tet_r+72(%rip), %xmm0
 4982      00000000 
 4983 0116 660F57D3 		xorpd	%xmm3, %xmm2
 4984 011a 660F57CB 		xorpd	%xmm3, %xmm1
 4985 011e 660F57C3 		xorpd	%xmm3, %xmm0
 4986 0122 E8000000 		call	glNormal3d
 4986      00
 4987              	.LVL760:
 4988 0127 BF000000 		movl	$_ZL5tet_r, %edi
 4988      00
 4989 012c E8000000 		call	glVertex3dv
 4989      00
 4990              	.LVL761:
 4991 0131 BF000000 		movl	$_ZL5tet_r+24, %edi
 4991      00
 4992 0136 E8000000 		call	glVertex3dv
 4992      00
 4993              	.LVL762:
 4994 013b BF000000 		movl	$_ZL5tet_r+48, %edi
 4994      00
 4995 0140 E8000000 		call	glVertex3dv
 4995      00
 4996              	.LVL763:
 4997              		.loc 1 927 0
 4998 0145 4883C418 		addq	$24, %rsp
 4999              		.cfi_def_cfa_offset 8
 5000              		.loc 1 926 0
 5001 0149 E9000000 		jmp	glEnd
 5001      00
 5002              	.LVL764:
 5003              		.cfi_endproc
 5004              	.LFE391:
 5006              		.section	.text.unlikely._Z20glutSolidTetrahedronv
 5007              	.LCOLDE33:
 5008              		.section	.text._Z20glutSolidTetrahedronv
 5009              	.LHOTE33:
 5010              		.section	.text.unlikely._Z19glutWireIcosahedronv,"ax",@progbits
 5011              	.LCOLDB34:
 5012              		.section	.text._Z19glutWireIcosahedronv,"ax",@progbits
 5013              	.LHOTB34:
 5014              		.p2align 4,,15
 5015              		.globl	_Z19glutWireIcosahedronv
 5017              	_Z19glutWireIcosahedronv:
 5018              	.LFB392:
 5019              		.loc 1 942 0
 5020              		.cfi_startproc
 5021 0000 55       		pushq	%rbp
 5022              		.cfi_def_cfa_offset 16
 5023              		.cfi_offset 6, -16
 5024 0001 53       		pushq	%rbx
 5025              		.cfi_def_cfa_offset 24
 5026              		.cfi_offset 3, -24
 5027 0002 BD000000 		movl	$icos_v+244, %ebp
 5027      00
 5028 0007 BB000000 		movl	$icos_v+4, %ebx
 5028      00
 5029 000c 4883EC28 		subq	$40, %rsp
 5030              		.cfi_def_cfa_offset 64
 5031              		.loc 1 942 0
 5032 0010 64488B04 		movq	%fs:40, %rax
 5032      25280000 
 5032      00
 5033 0019 48894424 		movq	%rax, 24(%rsp)
 5033      18
 5034 001e 31C0     		xorl	%eax, %eax
 5035              	.LVL765:
 5036              		.p2align 4,,10
 5037              		.p2align 3
 5038              	.L216:
 5039              	.LBB34:
 5040              	.LBB35:
 5041              		.loc 1 948 0 discriminator 2
 5042 0020 486343FC 		movslq	-4(%rbx), %rax
 5043 0024 4883C30C 		addq	$12, %rbx
 5044 0028 488D0C40 		leaq	(%rax,%rax,2), %rcx
 5045 002c 486343F4 		movslq	-12(%rbx), %rax
 5046 0030 488D14CD 		leaq	icos_r(,%rcx,8), %rdx
 5046      00000000 
 5047 0038 F20F104A 		movsd	8(%rdx), %xmm1
 5047      08
 5048 003d 488D0440 		leaq	(%rax,%rax,2), %rax
 5049 0041 F20F1042 		movsd	16(%rdx), %xmm0
 5049      10
 5050 0046 486353F8 		movslq	-8(%rbx), %rdx
 5051 004a 488D3CC5 		leaq	icos_r(,%rax,8), %rdi
 5051      00000000 
 5052 0052 F20F105F 		movsd	8(%rdi), %xmm3
 5052      08
 5053 0057 488D1452 		leaq	(%rdx,%rdx,2), %rdx
 5054 005b F20F1057 		movsd	16(%rdi), %xmm2
 5054      10
 5055 0060 660F28F3 		movapd	%xmm3, %xmm6
 5056              		.loc 1 951 0 discriminator 2
 5057 0064 BF020000 		movl	$2, %edi
 5057      00
 5058              		.loc 1 948 0 discriminator 2
 5059 0069 488D34D5 		leaq	icos_r(,%rdx,8), %rsi
 5059      00000000 
 5060 0071 F20F5CD0 		subsd	%xmm0, %xmm2
 5061 0075 F20F5CF1 		subsd	%xmm1, %xmm6
 5062 0079 F20F1066 		movsd	16(%rsi), %xmm4
 5062      10
 5063 007e F20F5CE0 		subsd	%xmm0, %xmm4
 5064 0082 F20F1046 		movsd	8(%rsi), %xmm0
 5064      08
 5065 0087 660F28E8 		movapd	%xmm0, %xmm5
 5066 008b 660F28C6 		movapd	%xmm6, %xmm0
 5067 008f F20F5CE9 		subsd	%xmm1, %xmm5
 5068 0093 660F28CA 		movapd	%xmm2, %xmm1
 5069 0097 F20F59C4 		mulsd	%xmm4, %xmm0
 5070 009b F20F59CD 		mulsd	%xmm5, %xmm1
 5071 009f F20F5CC1 		subsd	%xmm1, %xmm0
 5072              		.loc 1 949 0 discriminator 2
 5073 00a3 F20F100C 		movsd	icos_r(,%rdx,8), %xmm1
 5073      D5000000 
 5073      00
 5074 00ac 660F28D9 		movapd	%xmm1, %xmm3
 5075 00b0 F20F100C 		movsd	icos_r(,%rax,8), %xmm1
 5075      C5000000 
 5075      00
 5076              		.loc 1 948 0 discriminator 2
 5077 00b9 F20F1104 		movsd	%xmm0, (%rsp)
 5077      24
 5078              		.loc 1 949 0 discriminator 2
 5079 00be F20F1004 		movsd	icos_r(,%rcx,8), %xmm0
 5079      CD000000 
 5079      00
 5080 00c7 F20F5CC8 		subsd	%xmm0, %xmm1
 5081 00cb F20F5CD8 		subsd	%xmm0, %xmm3
 5082 00cf 660F28C1 		movapd	%xmm1, %xmm0
 5083 00d3 F20F59E1 		mulsd	%xmm1, %xmm4
 5084 00d7 F20F59D3 		mulsd	%xmm3, %xmm2
 5085              		.loc 1 950 0 discriminator 2
 5086 00db F20F59C5 		mulsd	%xmm5, %xmm0
 5087 00df F20F59DE 		mulsd	%xmm6, %xmm3
 5088              		.loc 1 949 0 discriminator 2
 5089 00e3 F20F5CD4 		subsd	%xmm4, %xmm2
 5090              		.loc 1 950 0 discriminator 2
 5091 00e7 F20F5CC3 		subsd	%xmm3, %xmm0
 5092              		.loc 1 949 0 discriminator 2
 5093 00eb F20F1154 		movsd	%xmm2, 8(%rsp)
 5093      2408
 5094              		.loc 1 950 0 discriminator 2
 5095 00f1 F20F1144 		movsd	%xmm0, 16(%rsp)
 5095      2410
 5096              		.loc 1 951 0 discriminator 2
 5097 00f7 E8000000 		call	glBegin
 5097      00
 5098              	.LVL766:
 5099              		.loc 1 952 0 discriminator 2
 5100 00fc 4889E7   		movq	%rsp, %rdi
 5101 00ff E8000000 		call	glNormal3dv
 5101      00
 5102              	.LVL767:
 5103              		.loc 1 953 0 discriminator 2
 5104 0104 486343F0 		movslq	-16(%rbx), %rax
 5105 0108 488D0440 		leaq	(%rax,%rax,2), %rax
 5106 010c 488D3CC5 		leaq	icos_r(,%rax,8), %rdi
 5106      00000000 
 5107 0114 E8000000 		call	glVertex3dv
 5107      00
 5108              	.LVL768:
 5109              		.loc 1 954 0 discriminator 2
 5110 0119 486343F4 		movslq	-12(%rbx), %rax
 5111 011d 488D0440 		leaq	(%rax,%rax,2), %rax
 5112 0121 488D3CC5 		leaq	icos_r(,%rax,8), %rdi
 5112      00000000 
 5113 0129 E8000000 		call	glVertex3dv
 5113      00
 5114              	.LVL769:
 5115              		.loc 1 955 0 discriminator 2
 5116 012e 486343F8 		movslq	-8(%rbx), %rax
 5117 0132 488D0440 		leaq	(%rax,%rax,2), %rax
 5118 0136 488D3CC5 		leaq	icos_r(,%rax,8), %rdi
 5118      00000000 
 5119 013e E8000000 		call	glVertex3dv
 5119      00
 5120              	.LVL770:
 5121              		.loc 1 956 0 discriminator 2
 5122 0143 E8000000 		call	glEnd
 5122      00
 5123              	.LVL771:
 5124              	.LBE35:
 5125              		.loc 1 945 0 discriminator 2
 5126 0148 4839DD   		cmpq	%rbx, %rbp
 5127 014b 0F85CFFE 		jne	.L216
 5127      FFFF
 5128              	.LBE34:
 5129              		.loc 1 958 0
 5130 0151 488B4424 		movq	24(%rsp), %rax
 5130      18
 5131 0156 64483304 		xorq	%fs:40, %rax
 5131      25280000 
 5131      00
 5132 015f 7507     		jne	.L220
 5133 0161 4883C428 		addq	$40, %rsp
 5134              		.cfi_remember_state
 5135              		.cfi_def_cfa_offset 24
 5136 0165 5B       		popq	%rbx
 5137              		.cfi_def_cfa_offset 16
 5138 0166 5D       		popq	%rbp
 5139              		.cfi_def_cfa_offset 8
 5140 0167 C3       		ret
 5141              	.L220:
 5142              		.cfi_restore_state
 5143 0168 E8000000 		call	__stack_chk_fail
 5143      00
 5144              	.LVL772:
 5145              		.cfi_endproc
 5146              	.LFE392:
 5148              		.section	.text.unlikely._Z19glutWireIcosahedronv
 5149              	.LCOLDE34:
 5150              		.section	.text._Z19glutWireIcosahedronv
 5151              	.LHOTE34:
 5152              		.section	.text.unlikely._Z20glutSolidIcosahedronv,"ax",@progbits
 5153              	.LCOLDB35:
 5154              		.section	.text._Z20glutSolidIcosahedronv,"ax",@progbits
 5155              	.LHOTB35:
 5156              		.p2align 4,,15
 5157              		.globl	_Z20glutSolidIcosahedronv
 5159              	_Z20glutSolidIcosahedronv:
 5160              	.LFB393:
 5161              		.loc 1 964 0
 5162              		.cfi_startproc
 5163 0000 55       		pushq	%rbp
 5164              		.cfi_def_cfa_offset 16
 5165              		.cfi_offset 6, -16
 5166 0001 53       		pushq	%rbx
 5167              		.cfi_def_cfa_offset 24
 5168              		.cfi_offset 3, -24
 5169              		.loc 1 967 0
 5170 0002 BF040000 		movl	$4, %edi
 5170      00
 5171 0007 BB000000 		movl	$icos_v+4, %ebx
 5171      00
 5172 000c BD000000 		movl	$icos_v+244, %ebp
 5172      00
 5173              		.loc 1 964 0
 5174 0011 4883EC28 		subq	$40, %rsp
 5175              		.cfi_def_cfa_offset 64
 5176              		.loc 1 964 0
 5177 0015 64488B04 		movq	%fs:40, %rax
 5177      25280000 
 5177      00
 5178 001e 48894424 		movq	%rax, 24(%rsp)
 5178      18
 5179 0023 31C0     		xorl	%eax, %eax
 5180              		.loc 1 967 0
 5181 0025 E8000000 		call	glBegin
 5181      00
 5182              	.LVL773:
 5183 002a 660F1F44 		.p2align 4,,10
 5183      0000
 5184              		.p2align 3
 5185              	.L222:
 5186              	.LBB36:
 5187              	.LBB37:
 5188              		.loc 1 971 0 discriminator 2
 5189 0030 486343FC 		movslq	-4(%rbx), %rax
 5190 0034 4883C30C 		addq	$12, %rbx
 5191 0038 488D0C40 		leaq	(%rax,%rax,2), %rcx
 5192 003c 486343F4 		movslq	-12(%rbx), %rax
 5193 0040 488D14CD 		leaq	icos_r(,%rcx,8), %rdx
 5193      00000000 
 5194 0048 F20F104A 		movsd	8(%rdx), %xmm1
 5194      08
 5195 004d 488D0440 		leaq	(%rax,%rax,2), %rax
 5196 0051 F20F1042 		movsd	16(%rdx), %xmm0
 5196      10
 5197 0056 486353F8 		movslq	-8(%rbx), %rdx
 5198 005a 488D3CC5 		leaq	icos_r(,%rax,8), %rdi
 5198      00000000 
 5199 0062 F20F105F 		movsd	8(%rdi), %xmm3
 5199      08
 5200 0067 488D1452 		leaq	(%rdx,%rdx,2), %rdx
 5201 006b F20F1057 		movsd	16(%rdi), %xmm2
 5201      10
 5202 0070 660F28F3 		movapd	%xmm3, %xmm6
 5203              		.loc 1 974 0 discriminator 2
 5204 0074 4889E7   		movq	%rsp, %rdi
 5205              		.loc 1 971 0 discriminator 2
 5206 0077 488D34D5 		leaq	icos_r(,%rdx,8), %rsi
 5206      00000000 
 5207 007f F20F5CD0 		subsd	%xmm0, %xmm2
 5208 0083 F20F5CF1 		subsd	%xmm1, %xmm6
 5209 0087 F20F1066 		movsd	16(%rsi), %xmm4
 5209      10
 5210 008c F20F5CE0 		subsd	%xmm0, %xmm4
 5211 0090 F20F1046 		movsd	8(%rsi), %xmm0
 5211      08
 5212 0095 660F28E8 		movapd	%xmm0, %xmm5
 5213 0099 660F28C6 		movapd	%xmm6, %xmm0
 5214 009d F20F5CE9 		subsd	%xmm1, %xmm5
 5215 00a1 660F28CA 		movapd	%xmm2, %xmm1
 5216 00a5 F20F59C4 		mulsd	%xmm4, %xmm0
 5217 00a9 F20F59CD 		mulsd	%xmm5, %xmm1
 5218 00ad F20F5CC1 		subsd	%xmm1, %xmm0
 5219              		.loc 1 972 0 discriminator 2
 5220 00b1 F20F100C 		movsd	icos_r(,%rdx,8), %xmm1
 5220      D5000000 
 5220      00
 5221 00ba 660F28D9 		movapd	%xmm1, %xmm3
 5222 00be F20F100C 		movsd	icos_r(,%rax,8), %xmm1
 5222      C5000000 
 5222      00
 5223              		.loc 1 971 0 discriminator 2
 5224 00c7 F20F1104 		movsd	%xmm0, (%rsp)
 5224      24
 5225              		.loc 1 972 0 discriminator 2
 5226 00cc F20F1004 		movsd	icos_r(,%rcx,8), %xmm0
 5226      CD000000 
 5226      00
 5227 00d5 F20F5CC8 		subsd	%xmm0, %xmm1
 5228 00d9 F20F5CD8 		subsd	%xmm0, %xmm3
 5229 00dd 660F28C1 		movapd	%xmm1, %xmm0
 5230 00e1 F20F59E1 		mulsd	%xmm1, %xmm4
 5231 00e5 F20F59D3 		mulsd	%xmm3, %xmm2
 5232              		.loc 1 973 0 discriminator 2
 5233 00e9 F20F59C5 		mulsd	%xmm5, %xmm0
 5234 00ed F20F59DE 		mulsd	%xmm6, %xmm3
 5235              		.loc 1 972 0 discriminator 2
 5236 00f1 F20F5CD4 		subsd	%xmm4, %xmm2
 5237              		.loc 1 973 0 discriminator 2
 5238 00f5 F20F5CC3 		subsd	%xmm3, %xmm0
 5239              		.loc 1 972 0 discriminator 2
 5240 00f9 F20F1154 		movsd	%xmm2, 8(%rsp)
 5240      2408
 5241              		.loc 1 973 0 discriminator 2
 5242 00ff F20F1144 		movsd	%xmm0, 16(%rsp)
 5242      2410
 5243              		.loc 1 974 0 discriminator 2
 5244 0105 E8000000 		call	glNormal3dv
 5244      00
 5245              	.LVL774:
 5246              		.loc 1 975 0 discriminator 2
 5247 010a 486343F0 		movslq	-16(%rbx), %rax
 5248 010e 488D0440 		leaq	(%rax,%rax,2), %rax
 5249 0112 488D3CC5 		leaq	icos_r(,%rax,8), %rdi
 5249      00000000 
 5250 011a E8000000 		call	glVertex3dv
 5250      00
 5251              	.LVL775:
 5252              		.loc 1 976 0 discriminator 2
 5253 011f 486343F4 		movslq	-12(%rbx), %rax
 5254 0123 488D0440 		leaq	(%rax,%rax,2), %rax
 5255 0127 488D3CC5 		leaq	icos_r(,%rax,8), %rdi
 5255      00000000 
 5256 012f E8000000 		call	glVertex3dv
 5256      00
 5257              	.LVL776:
 5258              		.loc 1 977 0 discriminator 2
 5259 0134 486343F8 		movslq	-8(%rbx), %rax
 5260 0138 488D0440 		leaq	(%rax,%rax,2), %rax
 5261 013c 488D3CC5 		leaq	icos_r(,%rax,8), %rdi
 5261      00000000 
 5262 0144 E8000000 		call	glVertex3dv
 5262      00
 5263              	.LVL777:
 5264              	.LBE37:
 5265              		.loc 1 968 0 discriminator 2
 5266 0149 4839DD   		cmpq	%rbx, %rbp
 5267 014c 0F85DEFE 		jne	.L222
 5267      FFFF
 5268              	.LBE36:
 5269              		.loc 1 980 0
 5270 0152 E8000000 		call	glEnd
 5270      00
 5271              	.LVL778:
 5272              		.loc 1 981 0
 5273 0157 488B4424 		movq	24(%rsp), %rax
 5273      18
 5274 015c 64483304 		xorq	%fs:40, %rax
 5274      25280000 
 5274      00
 5275 0165 7507     		jne	.L226
 5276 0167 4883C428 		addq	$40, %rsp
 5277              		.cfi_remember_state
 5278              		.cfi_def_cfa_offset 24
 5279 016b 5B       		popq	%rbx
 5280              		.cfi_def_cfa_offset 16
 5281 016c 5D       		popq	%rbp
 5282              		.cfi_def_cfa_offset 8
 5283 016d C3       		ret
 5284              	.L226:
 5285              		.cfi_restore_state
 5286 016e E8000000 		call	__stack_chk_fail
 5286      00
 5287              	.LVL779:
 5288              		.cfi_endproc
 5289              	.LFE393:
 5291              		.section	.text.unlikely._Z20glutSolidIcosahedronv
 5292              	.LCOLDE35:
 5293              		.section	.text._Z20glutSolidIcosahedronv
 5294              	.LHOTE35:
 5295              		.section	.text.unlikely._Z27glutWireRhombicDodecahedronv,"ax",@progbits
 5296              	.LCOLDB36:
 5297              		.section	.text._Z27glutWireRhombicDodecahedronv,"ax",@progbits
 5298              	.LHOTB36:
 5299              		.p2align 4,,15
 5300              		.globl	_Z27glutWireRhombicDodecahedronv
 5302              	_Z27glutWireRhombicDodecahedronv:
 5303              	.LFB394:
 5304              		.loc 1 1001 0
 5305              		.cfi_startproc
 5306              	.LVL780:
 5307 0000 55       		pushq	%rbp
 5308              		.cfi_def_cfa_offset 16
 5309              		.cfi_offset 6, -16
 5310 0001 53       		pushq	%rbx
 5311              		.cfi_def_cfa_offset 24
 5312              		.cfi_offset 3, -24
 5313 0002 BD000000 		movl	$rdod_n, %ebp
 5313      00
 5314 0007 BB000000 		movl	$rdod_v, %ebx
 5314      00
 5315 000c 4883EC08 		subq	$8, %rsp
 5316              		.cfi_def_cfa_offset 32
 5317              	.LVL781:
 5318              		.p2align 4,,10
 5319              		.p2align 3
 5320              	.L228:
 5321              		.loc 1 1006 0 discriminator 2
 5322 0010 BF020000 		movl	$2, %edi
 5322      00
 5323 0015 4883C310 		addq	$16, %rbx
 5324 0019 E8000000 		call	glBegin
 5324      00
 5325              	.LVL782:
 5326              		.loc 1 1007 0 discriminator 2
 5327 001e 4889EF   		movq	%rbp, %rdi
 5328 0021 4883C518 		addq	$24, %rbp
 5329 0025 E8000000 		call	glNormal3dv
 5329      00
 5330              	.LVL783:
 5331              		.loc 1 1008 0 discriminator 2
 5332 002a 486343F0 		movslq	-16(%rbx), %rax
 5333 002e 488D0440 		leaq	(%rax,%rax,2), %rax
 5334 0032 488D3CC5 		leaq	rdod_r(,%rax,8), %rdi
 5334      00000000 
 5335 003a E8000000 		call	glVertex3dv
 5335      00
 5336              	.LVL784:
 5337              		.loc 1 1009 0 discriminator 2
 5338 003f 486343F4 		movslq	-12(%rbx), %rax
 5339 0043 488D0440 		leaq	(%rax,%rax,2), %rax
 5340 0047 488D3CC5 		leaq	rdod_r(,%rax,8), %rdi
 5340      00000000 
 5341 004f E8000000 		call	glVertex3dv
 5341      00
 5342              	.LVL785:
 5343              		.loc 1 1010 0 discriminator 2
 5344 0054 486343F8 		movslq	-8(%rbx), %rax
 5345 0058 488D0440 		leaq	(%rax,%rax,2), %rax
 5346 005c 488D3CC5 		leaq	rdod_r(,%rax,8), %rdi
 5346      00000000 
 5347 0064 E8000000 		call	glVertex3dv
 5347      00
 5348              	.LVL786:
 5349              		.loc 1 1011 0 discriminator 2
 5350 0069 486343FC 		movslq	-4(%rbx), %rax
 5351 006d 488D0440 		leaq	(%rax,%rax,2), %rax
 5352 0071 488D3CC5 		leaq	rdod_r(,%rax,8), %rdi
 5352      00000000 
 5353 0079 E8000000 		call	glVertex3dv
 5353      00
 5354              	.LVL787:
 5355              		.loc 1 1012 0 discriminator 2
 5356 007e E8000000 		call	glEnd
 5356      00
 5357              	.LVL788:
 5358              		.loc 1 1004 0 discriminator 2
 5359 0083 4881FB00 		cmpq	$rdod_v+192, %rbx
 5359      000000
 5360 008a 7584     		jne	.L228
 5361              		.loc 1 1014 0
 5362 008c 4883C408 		addq	$8, %rsp
 5363              		.cfi_def_cfa_offset 24
 5364 0090 5B       		popq	%rbx
 5365              		.cfi_def_cfa_offset 16
 5366 0091 5D       		popq	%rbp
 5367              		.cfi_def_cfa_offset 8
 5368 0092 C3       		ret
 5369              		.cfi_endproc
 5370              	.LFE394:
 5372              		.section	.text.unlikely._Z27glutWireRhombicDodecahedronv
 5373              	.LCOLDE36:
 5374              		.section	.text._Z27glutWireRhombicDodecahedronv
 5375              	.LHOTE36:
 5376              		.section	.text.unlikely._Z28glutSolidRhombicDodecahedronv,"ax",@progbits
 5377              	.LCOLDB37:
 5378              		.section	.text._Z28glutSolidRhombicDodecahedronv,"ax",@progbits
 5379              	.LHOTB37:
 5380              		.p2align 4,,15
 5381              		.globl	_Z28glutSolidRhombicDodecahedronv
 5383              	_Z28glutSolidRhombicDodecahedronv:
 5384              	.LFB395:
 5385              		.loc 1 1020 0
 5386              		.cfi_startproc
 5387 0000 55       		pushq	%rbp
 5388              		.cfi_def_cfa_offset 16
 5389              		.cfi_offset 6, -16
 5390 0001 53       		pushq	%rbx
 5391              		.cfi_def_cfa_offset 24
 5392              		.cfi_offset 3, -24
 5393              		.loc 1 1023 0
 5394 0002 BF070000 		movl	$7, %edi
 5394      00
 5395 0007 BD000000 		movl	$rdod_n, %ebp
 5395      00
 5396 000c BB000000 		movl	$rdod_v, %ebx
 5396      00
 5397              		.loc 1 1020 0
 5398 0011 4883EC08 		subq	$8, %rsp
 5399              		.cfi_def_cfa_offset 32
 5400              		.loc 1 1023 0
 5401 0015 E8000000 		call	glBegin
 5401      00
 5402              	.LVL789:
 5403 001a 660F1F44 		.p2align 4,,10
 5403      0000
 5404              		.p2align 3
 5405              	.L232:
 5406              		.loc 1 1026 0 discriminator 2
 5407 0020 4889EF   		movq	%rbp, %rdi
 5408 0023 4883C310 		addq	$16, %rbx
 5409 0027 4883C518 		addq	$24, %rbp
 5410 002b E8000000 		call	glNormal3dv
 5410      00
 5411              	.LVL790:
 5412              		.loc 1 1027 0 discriminator 2
 5413 0030 486343F0 		movslq	-16(%rbx), %rax
 5414 0034 488D0440 		leaq	(%rax,%rax,2), %rax
 5415 0038 488D3CC5 		leaq	rdod_r(,%rax,8), %rdi
 5415      00000000 
 5416 0040 E8000000 		call	glVertex3dv
 5416      00
 5417              	.LVL791:
 5418              		.loc 1 1028 0 discriminator 2
 5419 0045 486343F4 		movslq	-12(%rbx), %rax
 5420 0049 488D0440 		leaq	(%rax,%rax,2), %rax
 5421 004d 488D3CC5 		leaq	rdod_r(,%rax,8), %rdi
 5421      00000000 
 5422 0055 E8000000 		call	glVertex3dv
 5422      00
 5423              	.LVL792:
 5424              		.loc 1 1029 0 discriminator 2
 5425 005a 486343F8 		movslq	-8(%rbx), %rax
 5426 005e 488D0440 		leaq	(%rax,%rax,2), %rax
 5427 0062 488D3CC5 		leaq	rdod_r(,%rax,8), %rdi
 5427      00000000 
 5428 006a E8000000 		call	glVertex3dv
 5428      00
 5429              	.LVL793:
 5430              		.loc 1 1030 0 discriminator 2
 5431 006f 486343FC 		movslq	-4(%rbx), %rax
 5432 0073 488D0440 		leaq	(%rax,%rax,2), %rax
 5433 0077 488D3CC5 		leaq	rdod_r(,%rax,8), %rdi
 5433      00000000 
 5434 007f E8000000 		call	glVertex3dv
 5434      00
 5435              	.LVL794:
 5436              		.loc 1 1024 0 discriminator 2
 5437 0084 4881FB00 		cmpq	$rdod_v+192, %rbx
 5437      000000
 5438 008b 7593     		jne	.L232
 5439              		.loc 1 1034 0
 5440 008d 4883C408 		addq	$8, %rsp
 5441              		.cfi_def_cfa_offset 24
 5442 0091 5B       		popq	%rbx
 5443              		.cfi_def_cfa_offset 16
 5444 0092 5D       		popq	%rbp
 5445              		.cfi_def_cfa_offset 8
 5446              		.loc 1 1033 0
 5447 0093 E9000000 		jmp	glEnd
 5447      00
 5448              	.LVL795:
 5449              		.cfi_endproc
 5450              	.LFE395:
 5452              		.section	.text.unlikely._Z28glutSolidRhombicDodecahedronv
 5453              	.LCOLDE37:
 5454              		.section	.text._Z28glutSolidRhombicDodecahedronv
 5455              	.LHOTE37:
 5456              		.section	.text.unlikely._Z24glutWireSierpinskiSpongeiPdd,"ax",@progbits
 5457              	.LCOLDB38:
 5458              		.section	.text._Z24glutWireSierpinskiSpongeiPdd,"ax",@progbits
 5459              	.LHOTB38:
 5460              		.p2align 4,,15
 5461              		.globl	_Z24glutWireSierpinskiSpongeiPdd
 5463              	_Z24glutWireSierpinskiSpongeiPdd:
 5464              	.LFB396:
 5465              		.loc 1 1037 0
 5466              		.cfi_startproc
 5467              	.LVL796:
 5468 0000 4156     		pushq	%r14
 5469              		.cfi_def_cfa_offset 16
 5470              		.cfi_offset 14, -16
 5471 0002 4155     		pushq	%r13
 5472              		.cfi_def_cfa_offset 24
 5473              		.cfi_offset 13, -24
 5474 0004 4154     		pushq	%r12
 5475              		.cfi_def_cfa_offset 32
 5476              		.cfi_offset 12, -32
 5477 0006 55       		pushq	%rbp
 5478              		.cfi_def_cfa_offset 40
 5479              		.cfi_offset 6, -40
 5480 0007 4889F5   		movq	%rsi, %rbp
 5481 000a 53       		pushq	%rbx
 5482              		.cfi_def_cfa_offset 48
 5483              		.cfi_offset 3, -48
 5484 000b 660F28D8 		movapd	%xmm0, %xmm3
 5485 000f 4883EC30 		subq	$48, %rsp
 5486              		.cfi_def_cfa_offset 96
 5487              		.loc 1 1037 0
 5488 0013 64488B04 		movq	%fs:40, %rax
 5488      25280000 
 5488      00
 5489 001c 48894424 		movq	%rax, 40(%rsp)
 5489      28
 5490 0021 31C0     		xorl	%eax, %eax
 5491              	.LBB38:
 5492              		.loc 1 1040 0
 5493 0023 85FF     		testl	%edi, %edi
 5494 0025 0F85F500 		jne	.L236
 5494      0000
 5495 002b 41BE0000 		movl	$_ZL5tet_r, %r14d
 5495      0000
 5496 0031 4531ED   		xorl	%r13d, %r13d
 5497 0034 BB010000 		movl	$1, %ebx
 5497      00
 5498              	.LVL797:
 5499              	.L240:
 5500              	.LBB39:
 5501              	.LBB40:
 5502              		.loc 1 1045 0
 5503 0039 BF020000 		movl	$2, %edi
 5503      00
 5504 003e F20F115C 		movsd	%xmm3, 8(%rsp)
 5504      2408
 5505              		.loc 1 1046 0
 5506 0044 4531E4   		xorl	%r12d, %r12d
 5507              		.loc 1 1045 0
 5508 0047 E8000000 		call	glBegin
 5508      00
 5509              	.LVL798:
 5510              		.loc 1 1046 0
 5511 004c F2410F10 		movsd	16(%r14), %xmm2
 5511      5610
 5512 0052 F2410F10 		movsd	8(%r14), %xmm1
 5512      4E08
 5513 0058 F2410F10 		movsd	(%r14), %xmm0
 5513      06
 5514 005d 660F5715 		xorpd	.LC5(%rip), %xmm2
 5514      00000000 
 5515 0065 660F570D 		xorpd	.LC5(%rip), %xmm1
 5515      00000000 
 5516 006d 660F5705 		xorpd	.LC5(%rip), %xmm0
 5516      00000000 
 5517 0075 E8000000 		call	glNormal3d
 5517      00
 5518              	.LVL799:
 5519 007a F20F105C 		movsd	8(%rsp), %xmm3
 5519      2408
 5520              	.LVL800:
 5521              	.L238:
 5522              	.LBB41:
 5523              	.LBB42:
 5524              		.loc 1 1051 0 discriminator 2
 5525 0080 4863C3   		movslq	%ebx, %rax
 5526              		.loc 1 1052 0 discriminator 2
 5527 0083 660F28C3 		movapd	%xmm3, %xmm0
 5528              		.loc 1 1051 0 discriminator 2
 5529 0087 488D0440 		leaq	(%rax,%rax,2), %rax
 5530 008b 4983C404 		addq	$4, %r12
 5531              		.loc 1 1052 0 discriminator 2
 5532 008f F20F115C 		movsd	%xmm3, 8(%rsp)
 5532      2408
 5533              		.loc 1 1051 0 discriminator 2
 5534 0095 488D14C5 		leaq	_ZL5tet_r(,%rax,8), %rdx
 5534      00000000 
 5535              		.loc 1 1052 0 discriminator 2
 5536 009d F20F5904 		mulsd	_ZL5tet_r(,%rax,8), %xmm0
 5536      C5000000 
 5536      00
 5537 00a6 F20F1052 		movsd	16(%rdx), %xmm2
 5537      10
 5538 00ab F20F104A 		movsd	8(%rdx), %xmm1
 5538      08
 5539 00b0 F20F59D3 		mulsd	%xmm3, %xmm2
 5540 00b4 F20F59CB 		mulsd	%xmm3, %xmm1
 5541 00b8 F20F5845 		addsd	0(%rbp), %xmm0
 5541      00
 5542 00bd F20F5855 		addsd	16(%rbp), %xmm2
 5542      10
 5543 00c2 F20F584D 		addsd	8(%rbp), %xmm1
 5543      08
 5544 00c7 E8000000 		call	glVertex3d
 5544      00
 5545              	.LVL801:
 5546              	.LBE42:
 5547              		.loc 1 1047 0 discriminator 2
 5548 00cc 4983FC0C 		cmpq	$12, %r12
 5549 00d0 F20F105C 		movsd	8(%rsp), %xmm3
 5549      2408
 5550 00d6 7410     		je	.L237
 5551 00d8 438B9C25 		movl	_ZL5tet_i(%r13,%r12), %ebx
 5551      00000000 
 5552 00e0 EB9E     		jmp	.L238
 5553              		.p2align 4,,10
 5554 00e2 660F1F44 		.p2align 3
 5554      0000
 5555              	.L237:
 5556 00e8 4983C50C 		addq	$12, %r13
 5557 00ec F20F115C 		movsd	%xmm3, 8(%rsp)
 5557      2408
 5558 00f2 4983C618 		addq	$24, %r14
 5559              	.LBE41:
 5560              		.loc 1 1055 0 discriminator 2
 5561 00f6 E8000000 		call	glEnd
 5561      00
 5562              	.LVL802:
 5563              	.LBE40:
 5564              		.loc 1 1043 0 discriminator 2
 5565 00fb 4983FD30 		cmpq	$48, %r13
 5566 00ff 0F849300 		je	.L235
 5566      0000
 5567 0105 418B9D00 		movl	_ZL5tet_i(%r13), %ebx
 5567      000000
 5568 010c F20F105C 		movsd	8(%rsp), %xmm3
 5568      2408
 5569 0112 E922FFFF 		jmp	.L240
 5569      FF
 5570              	.LVL803:
 5571 0117 660F1F84 		.p2align 4,,10
 5571      00000000 
 5571      00
 5572              		.p2align 3
 5573              	.L236:
 5574              	.LBE39:
 5575              	.LBB43:
 5576              		.loc 1 1062 0
 5577 0120 F20F591D 		mulsd	.LC4(%rip), %xmm3
 5577      00000000 
 5578              		.loc 1 1061 0
 5579 0128 448D67FF 		leal	-1(%rdi), %r12d
 5580              	.LVL804:
 5581 012c BB000000 		movl	$_ZL5tet_r, %ebx
 5581      00
 5582 0131 41BD0000 		movl	$_ZL5tet_r+96, %r13d
 5582      0000
 5583              	.LVL805:
 5584              	.L241:
 5585              		.loc 1 1065 0 discriminator 2
 5586 0137 F20F1003 		movsd	(%rbx), %xmm0
 5587              		.loc 1 1068 0 discriminator 2
 5588 013b 488D7424 		leaq	16(%rsp), %rsi
 5588      10
 5589 0140 4489E7   		movl	%r12d, %edi
 5590 0143 4883C318 		addq	$24, %rbx
 5591 0147 F20F115C 		movsd	%xmm3, 8(%rsp)
 5591      2408
 5592              		.loc 1 1065 0 discriminator 2
 5593 014d F20F59C3 		mulsd	%xmm3, %xmm0
 5594 0151 F20F5845 		addsd	0(%rbp), %xmm0
 5594      00
 5595 0156 F20F1144 		movsd	%xmm0, 16(%rsp)
 5595      2410
 5596              		.loc 1 1066 0 discriminator 2
 5597 015c F20F1043 		movsd	-16(%rbx), %xmm0
 5597      F0
 5598 0161 F20F59C3 		mulsd	%xmm3, %xmm0
 5599 0165 F20F5845 		addsd	8(%rbp), %xmm0
 5599      08
 5600 016a F20F1144 		movsd	%xmm0, 24(%rsp)
 5600      2418
 5601              		.loc 1 1067 0 discriminator 2
 5602 0170 F20F1043 		movsd	-8(%rbx), %xmm0
 5602      F8
 5603 0175 F20F59C3 		mulsd	%xmm3, %xmm0
 5604 0179 F20F5845 		addsd	16(%rbp), %xmm0
 5604      10
 5605 017e F20F1144 		movsd	%xmm0, 32(%rsp)
 5605      2420
 5606              		.loc 1 1068 0 discriminator 2
 5607 0184 660F28C3 		movapd	%xmm3, %xmm0
 5608 0188 E8000000 		call	_Z24glutWireSierpinskiSpongeiPdd
 5608      00
 5609              	.LVL806:
 5610              		.loc 1 1063 0 discriminator 2
 5611 018d 4939DD   		cmpq	%rbx, %r13
 5612 0190 F20F105C 		movsd	8(%rsp), %xmm3
 5612      2408
 5613 0196 759F     		jne	.L241
 5614              	.LVL807:
 5615              	.L235:
 5616              	.LBE43:
 5617              	.LBE38:
 5618              		.loc 1 1071 0
 5619 0198 488B4424 		movq	40(%rsp), %rax
 5619      28
 5620 019d 64483304 		xorq	%fs:40, %rax
 5620      25280000 
 5620      00
 5621 01a6 750D     		jne	.L248
 5622 01a8 4883C430 		addq	$48, %rsp
 5623              		.cfi_remember_state
 5624              		.cfi_def_cfa_offset 48
 5625 01ac 5B       		popq	%rbx
 5626              		.cfi_def_cfa_offset 40
 5627 01ad 5D       		popq	%rbp
 5628              		.cfi_def_cfa_offset 32
 5629              	.LVL808:
 5630 01ae 415C     		popq	%r12
 5631              		.cfi_def_cfa_offset 24
 5632 01b0 415D     		popq	%r13
 5633              		.cfi_def_cfa_offset 16
 5634 01b2 415E     		popq	%r14
 5635              		.cfi_def_cfa_offset 8
 5636 01b4 C3       		ret
 5637              	.LVL809:
 5638              	.L248:
 5639              		.cfi_restore_state
 5640 01b5 E8000000 		call	__stack_chk_fail
 5640      00
 5641              	.LVL810:
 5642              		.cfi_endproc
 5643              	.LFE396:
 5645              		.section	.text.unlikely._Z24glutWireSierpinskiSpongeiPdd
 5646              	.LCOLDE38:
 5647              		.section	.text._Z24glutWireSierpinskiSpongeiPdd
 5648              	.LHOTE38:
 5649              		.section	.text.unlikely._Z25glutSolidSierpinskiSpongeiPdd,"ax",@progbits
 5650              	.LCOLDB39:
 5651              		.section	.text._Z25glutSolidSierpinskiSpongeiPdd,"ax",@progbits
 5652              	.LHOTB39:
 5653              		.p2align 4,,15
 5654              		.globl	_Z25glutSolidSierpinskiSpongeiPdd
 5656              	_Z25glutSolidSierpinskiSpongeiPdd:
 5657              	.LFB397:
 5658              		.loc 1 1074 0
 5659              		.cfi_startproc
 5660              	.LVL811:
 5661 0000 4156     		pushq	%r14
 5662              		.cfi_def_cfa_offset 16
 5663              		.cfi_offset 14, -16
 5664 0002 4155     		pushq	%r13
 5665              		.cfi_def_cfa_offset 24
 5666              		.cfi_offset 13, -24
 5667 0004 4154     		pushq	%r12
 5668              		.cfi_def_cfa_offset 32
 5669              		.cfi_offset 12, -32
 5670 0006 55       		pushq	%rbp
 5671              		.cfi_def_cfa_offset 40
 5672              		.cfi_offset 6, -40
 5673 0007 53       		pushq	%rbx
 5674              		.cfi_def_cfa_offset 48
 5675              		.cfi_offset 3, -48
 5676 0008 660F28D8 		movapd	%xmm0, %xmm3
 5677 000c 4889F3   		movq	%rsi, %rbx
 5678 000f 4883EC30 		subq	$48, %rsp
 5679              		.cfi_def_cfa_offset 96
 5680              		.loc 1 1074 0
 5681 0013 64488B04 		movq	%fs:40, %rax
 5681      25280000 
 5681      00
 5682 001c 48894424 		movq	%rax, 40(%rsp)
 5682      28
 5683 0021 31C0     		xorl	%eax, %eax
 5684              	.LBB44:
 5685              		.loc 1 1077 0
 5686 0023 85FF     		testl	%edi, %edi
 5687 0025 0F849D00 		je	.L260
 5687      0000
 5688              	.LBB45:
 5689              		.loc 1 1099 0
 5690 002b F20F591D 		mulsd	.LC4(%rip), %xmm3
 5690      00000000 
 5691              		.loc 1 1098 0
 5692 0033 448D67FF 		leal	-1(%rdi), %r12d
 5693              	.LVL812:
 5694 0037 BD000000 		movl	$_ZL5tet_r, %ebp
 5694      00
 5695 003c 41BD0000 		movl	$_ZL5tet_r+96, %r13d
 5695      0000
 5696              	.LVL813:
 5697              	.L256:
 5698              		.loc 1 1102 0 discriminator 2
 5699 0042 F20F1045 		movsd	0(%rbp), %xmm0
 5699      00
 5700              		.loc 1 1105 0 discriminator 2
 5701 0047 488D7424 		leaq	16(%rsp), %rsi
 5701      10
 5702 004c 4489E7   		movl	%r12d, %edi
 5703 004f 4883C518 		addq	$24, %rbp
 5704 0053 F20F115C 		movsd	%xmm3, 8(%rsp)
 5704      2408
 5705              		.loc 1 1102 0 discriminator 2
 5706 0059 F20F59C3 		mulsd	%xmm3, %xmm0
 5707 005d F20F5803 		addsd	(%rbx), %xmm0
 5708 0061 F20F1144 		movsd	%xmm0, 16(%rsp)
 5708      2410
 5709              		.loc 1 1103 0 discriminator 2
 5710 0067 F20F1045 		movsd	-16(%rbp), %xmm0
 5710      F0
 5711 006c F20F59C3 		mulsd	%xmm3, %xmm0
 5712 0070 F20F5843 		addsd	8(%rbx), %xmm0
 5712      08
 5713 0075 F20F1144 		movsd	%xmm0, 24(%rsp)
 5713      2418
 5714              		.loc 1 1104 0 discriminator 2
 5715 007b F20F1045 		movsd	-8(%rbp), %xmm0
 5715      F8
 5716 0080 F20F59C3 		mulsd	%xmm3, %xmm0
 5717 0084 F20F5843 		addsd	16(%rbx), %xmm0
 5717      10
 5718 0089 F20F1144 		movsd	%xmm0, 32(%rsp)
 5718      2420
 5719              		.loc 1 1105 0 discriminator 2
 5720 008f 660F28C3 		movapd	%xmm3, %xmm0
 5721 0093 E8000000 		call	_Z25glutSolidSierpinskiSpongeiPdd
 5721      00
 5722              	.LVL814:
 5723              		.loc 1 1100 0 discriminator 2
 5724 0098 4939ED   		cmpq	%rbp, %r13
 5725 009b F20F105C 		movsd	8(%rsp), %xmm3
 5725      2408
 5726 00a1 759F     		jne	.L256
 5727              	.LVL815:
 5728              	.L249:
 5729              	.LBE45:
 5730              	.LBE44:
 5731              		.loc 1 1108 0
 5732 00a3 488B4424 		movq	40(%rsp), %rax
 5732      28
 5733 00a8 64483304 		xorq	%fs:40, %rax
 5733      25280000 
 5733      00
 5734 00b1 0F850301 		jne	.L261
 5734      0000
 5735 00b7 4883C430 		addq	$48, %rsp
 5736              		.cfi_remember_state
 5737              		.cfi_def_cfa_offset 48
 5738 00bb 5B       		popq	%rbx
 5739              		.cfi_def_cfa_offset 40
 5740              	.LVL816:
 5741 00bc 5D       		popq	%rbp
 5742              		.cfi_def_cfa_offset 32
 5743 00bd 415C     		popq	%r12
 5744              		.cfi_def_cfa_offset 24
 5745 00bf 415D     		popq	%r13
 5746              		.cfi_def_cfa_offset 16
 5747 00c1 415E     		popq	%r14
 5748              		.cfi_def_cfa_offset 8
 5749 00c3 C3       		ret
 5750              	.LVL817:
 5751              		.p2align 4,,10
 5752 00c4 0F1F4000 		.p2align 3
 5753              	.L260:
 5754              		.cfi_restore_state
 5755              	.LBB51:
 5756              	.LBB46:
 5757              		.loc 1 1079 0
 5758 00c8 BF040000 		movl	$4, %edi
 5758      00
 5759              	.LVL818:
 5760 00cd F20F1144 		movsd	%xmm0, 8(%rsp)
 5760      2408
 5761 00d3 41BE0000 		movl	$_ZL5tet_r, %r14d
 5761      0000
 5762 00d9 E8000000 		call	glBegin
 5762      00
 5763              	.LVL819:
 5764 00de F20F105C 		movsd	8(%rsp), %xmm3
 5764      2408
 5765 00e4 4531ED   		xorl	%r13d, %r13d
 5766 00e7 BD010000 		movl	$1, %ebp
 5766      00
 5767              	.LVL820:
 5768              	.L254:
 5769              	.LBB47:
 5770              	.LBB48:
 5771              		.loc 1 1083 0
 5772 00ec F2410F10 		movsd	16(%r14), %xmm2
 5772      5610
 5773 00f2 4531E4   		xorl	%r12d, %r12d
 5774 00f5 F2410F10 		movsd	8(%r14), %xmm1
 5774      4E08
 5775 00fb F2410F10 		movsd	(%r14), %xmm0
 5775      06
 5776 0100 660F5715 		xorpd	.LC5(%rip), %xmm2
 5776      00000000 
 5777 0108 F20F115C 		movsd	%xmm3, 8(%rsp)
 5777      2408
 5778 010e 660F570D 		xorpd	.LC5(%rip), %xmm1
 5778      00000000 
 5779 0116 660F5705 		xorpd	.LC5(%rip), %xmm0
 5779      00000000 
 5780 011e E8000000 		call	glNormal3d
 5780      00
 5781              	.LVL821:
 5782 0123 F20F105C 		movsd	8(%rsp), %xmm3
 5782      2408
 5783              	.LVL822:
 5784              	.L252:
 5785              	.LBB49:
 5786              	.LBB50:
 5787              		.loc 1 1088 0 discriminator 2
 5788 0129 4863C5   		movslq	%ebp, %rax
 5789              		.loc 1 1089 0 discriminator 2
 5790 012c 660F28C3 		movapd	%xmm3, %xmm0
 5791              		.loc 1 1088 0 discriminator 2
 5792 0130 488D0440 		leaq	(%rax,%rax,2), %rax
 5793 0134 4983C404 		addq	$4, %r12
 5794              		.loc 1 1089 0 discriminator 2
 5795 0138 F20F115C 		movsd	%xmm3, 8(%rsp)
 5795      2408
 5796              		.loc 1 1088 0 discriminator 2
 5797 013e 488D14C5 		leaq	_ZL5tet_r(,%rax,8), %rdx
 5797      00000000 
 5798              		.loc 1 1089 0 discriminator 2
 5799 0146 F20F5904 		mulsd	_ZL5tet_r(,%rax,8), %xmm0
 5799      C5000000 
 5799      00
 5800 014f F20F1052 		movsd	16(%rdx), %xmm2
 5800      10
 5801 0154 F20F104A 		movsd	8(%rdx), %xmm1
 5801      08
 5802 0159 F20F59D3 		mulsd	%xmm3, %xmm2
 5803 015d F20F59CB 		mulsd	%xmm3, %xmm1
 5804 0161 F20F5803 		addsd	(%rbx), %xmm0
 5805 0165 F20F5853 		addsd	16(%rbx), %xmm2
 5805      10
 5806 016a F20F584B 		addsd	8(%rbx), %xmm1
 5806      08
 5807 016f E8000000 		call	glVertex3d
 5807      00
 5808              	.LVL823:
 5809              	.LBE50:
 5810              		.loc 1 1084 0 discriminator 2
 5811 0174 4983FC0C 		cmpq	$12, %r12
 5812 0178 F20F105C 		movsd	8(%rsp), %xmm3
 5812      2408
 5813 017e 7410     		je	.L251
 5814 0180 438BAC25 		movl	_ZL5tet_i(%r13,%r12), %ebp
 5814      00000000 
 5815 0188 EB9F     		jmp	.L252
 5816 018a 660F1F44 		.p2align 4,,10
 5816      0000
 5817              		.p2align 3
 5818              	.L251:
 5819 0190 4983C50C 		addq	$12, %r13
 5820 0194 4983C618 		addq	$24, %r14
 5821              	.LBE49:
 5822              	.LBE48:
 5823              		.loc 1 1081 0 discriminator 2
 5824 0198 4983FD30 		cmpq	$48, %r13
 5825 019c 7412     		je	.L253
 5826 019e 418BAD00 		movl	_ZL5tet_i(%r13), %ebp
 5826      000000
 5827 01a5 E942FFFF 		jmp	.L254
 5827      FF
 5828 01aa 660F1F44 		.p2align 4,,10
 5828      0000
 5829              		.p2align 3
 5830              	.L253:
 5831              	.LBE47:
 5832              		.loc 1 1093 0
 5833 01b0 E8000000 		call	glEnd
 5833      00
 5834              	.LVL824:
 5835              	.LBE46:
 5836 01b5 E9E9FEFF 		jmp	.L249
 5836      FF
 5837              	.LVL825:
 5838              	.L261:
 5839              	.LBE51:
 5840              		.loc 1 1108 0
 5841 01ba E8000000 		call	__stack_chk_fail
 5841      00
 5842              	.LVL826:
 5843              		.cfi_endproc
 5844              	.LFE397:
 5846              		.section	.text.unlikely._Z25glutSolidSierpinskiSpongeiPdd
 5847              	.LCOLDE39:
 5848              		.section	.text._Z25glutSolidSierpinskiSpongeiPdd
 5849              	.LHOTE39:
 5850              		.globl	rdod_n
 5851              		.section	.data.rdod_n,"aw",@progbits
 5852              		.align 32
 5855              	rdod_n:
 5856 0000 E76E7F66 		.long	1719627495
 5857 0004 9EA0D63F 		.long	1071030430
 5858 0008 E76E7F66 		.long	1719627495
 5859 000c 9EA0D63F 		.long	1071030430
 5860 0010 00000000 		.long	0
 5861 0014 0000E03F 		.long	1071644672
 5862 0018 E76E7F66 		.long	1719627495
 5863 001c 9EA0D6BF 		.long	-1076453218
 5864 0020 E76E7F66 		.long	1719627495
 5865 0024 9EA0D63F 		.long	1071030430
 5866 0028 00000000 		.long	0
 5867 002c 0000E03F 		.long	1071644672
 5868 0030 E76E7F66 		.long	1719627495
 5869 0034 9EA0D6BF 		.long	-1076453218
 5870 0038 E76E7F66 		.long	1719627495
 5871 003c 9EA0D6BF 		.long	-1076453218
 5872 0040 00000000 		.long	0
 5873 0044 0000E03F 		.long	1071644672
 5874 0048 E76E7F66 		.long	1719627495
 5875 004c 9EA0D63F 		.long	1071030430
 5876 0050 E76E7F66 		.long	1719627495
 5877 0054 9EA0D6BF 		.long	-1076453218
 5878 0058 00000000 		.long	0
 5879 005c 0000E03F 		.long	1071644672
 5880 0060 00000000 		.long	0
 5881 0064 00000000 		.long	0
 5882 0068 00000000 		.long	0
 5883 006c 0000F03F 		.long	1072693248
 5884 0070 00000000 		.long	0
 5885 0074 00000000 		.long	0
 5886 0078 00000000 		.long	0
 5887 007c 0000F0BF 		.long	-1074790400
 5888 0080 00000000 		.long	0
 5889 0084 00000000 		.long	0
 5890 0088 00000000 		.long	0
 5891 008c 00000000 		.long	0
 5892 0090 00000000 		.long	0
 5893 0094 00000000 		.long	0
 5894 0098 00000000 		.long	0
 5895 009c 0000F0BF 		.long	-1074790400
 5896 00a0 00000000 		.long	0
 5897 00a4 00000000 		.long	0
 5898 00a8 00000000 		.long	0
 5899 00ac 0000F03F 		.long	1072693248
 5900 00b0 00000000 		.long	0
 5901 00b4 00000000 		.long	0
 5902 00b8 00000000 		.long	0
 5903 00bc 00000000 		.long	0
 5904 00c0 E76E7F66 		.long	1719627495
 5905 00c4 9EA0D63F 		.long	1071030430
 5906 00c8 E76E7F66 		.long	1719627495
 5907 00cc 9EA0D63F 		.long	1071030430
 5908 00d0 00000000 		.long	0
 5909 00d4 0000E0BF 		.long	-1075838976
 5910 00d8 E76E7F66 		.long	1719627495
 5911 00dc 9EA0D6BF 		.long	-1076453218
 5912 00e0 E76E7F66 		.long	1719627495
 5913 00e4 9EA0D63F 		.long	1071030430
 5914 00e8 00000000 		.long	0
 5915 00ec 0000E0BF 		.long	-1075838976
 5916 00f0 E76E7F66 		.long	1719627495
 5917 00f4 9EA0D6BF 		.long	-1076453218
 5918 00f8 E76E7F66 		.long	1719627495
 5919 00fc 9EA0D6BF 		.long	-1076453218
 5920 0100 00000000 		.long	0
 5921 0104 0000E0BF 		.long	-1075838976
 5922 0108 E76E7F66 		.long	1719627495
 5923 010c 9EA0D63F 		.long	1071030430
 5924 0110 E76E7F66 		.long	1719627495
 5925 0114 9EA0D6BF 		.long	-1076453218
 5926 0118 00000000 		.long	0
 5927 011c 0000E0BF 		.long	-1075838976
 5928              		.globl	rdod_v
 5929              		.section	.data.rdod_v,"aw",@progbits
 5930              		.align 32
 5933              	rdod_v:
 5934 0000 00000000 		.long	0
 5935 0004 01000000 		.long	1
 5936 0008 05000000 		.long	5
 5937 000c 02000000 		.long	2
 5938 0010 00000000 		.long	0
 5939 0014 02000000 		.long	2
 5940 0018 06000000 		.long	6
 5941 001c 03000000 		.long	3
 5942 0020 00000000 		.long	0
 5943 0024 03000000 		.long	3
 5944 0028 07000000 		.long	7
 5945 002c 04000000 		.long	4
 5946 0030 00000000 		.long	0
 5947 0034 04000000 		.long	4
 5948 0038 08000000 		.long	8
 5949 003c 01000000 		.long	1
 5950 0040 05000000 		.long	5
 5951 0044 0A000000 		.long	10
 5952 0048 06000000 		.long	6
 5953 004c 02000000 		.long	2
 5954 0050 06000000 		.long	6
 5955 0054 0B000000 		.long	11
 5956 0058 07000000 		.long	7
 5957 005c 03000000 		.long	3
 5958 0060 07000000 		.long	7
 5959 0064 0C000000 		.long	12
 5960 0068 08000000 		.long	8
 5961 006c 04000000 		.long	4
 5962 0070 08000000 		.long	8
 5963 0074 09000000 		.long	9
 5964 0078 05000000 		.long	5
 5965 007c 01000000 		.long	1
 5966 0080 05000000 		.long	5
 5967 0084 09000000 		.long	9
 5968 0088 0D000000 		.long	13
 5969 008c 0A000000 		.long	10
 5970 0090 06000000 		.long	6
 5971 0094 0A000000 		.long	10
 5972 0098 0D000000 		.long	13
 5973 009c 0B000000 		.long	11
 5974 00a0 07000000 		.long	7
 5975 00a4 0B000000 		.long	11
 5976 00a8 0D000000 		.long	13
 5977 00ac 0C000000 		.long	12
 5978 00b0 08000000 		.long	8
 5979 00b4 0C000000 		.long	12
 5980 00b8 0D000000 		.long	13
 5981 00bc 09000000 		.long	9
 5982              		.globl	rdod_r
 5983              		.section	.data.rdod_r,"aw",@progbits
 5984              		.align 32
 5987              	rdod_r:
 5988 0000 00000000 		.long	0
 5989 0004 00000000 		.long	0
 5990 0008 00000000 		.long	0
 5991 000c 00000000 		.long	0
 5992 0010 00000000 		.long	0
 5993 0014 0000F03F 		.long	1072693248
 5994 0018 B84B7F66 		.long	1719618488
 5995 001c 9EA0E63F 		.long	1072079006
 5996 0020 00000000 		.long	0
 5997 0024 00000000 		.long	0
 5998 0028 00000000 		.long	0
 5999 002c 0000E03F 		.long	1071644672
 6000 0030 00000000 		.long	0
 6001 0034 00000000 		.long	0
 6002 0038 B84B7F66 		.long	1719618488
 6003 003c 9EA0E63F 		.long	1072079006
 6004 0040 00000000 		.long	0
 6005 0044 0000E03F 		.long	1071644672
 6006 0048 B84B7F66 		.long	1719618488
 6007 004c 9EA0E6BF 		.long	-1075404642
 6008 0050 00000000 		.long	0
 6009 0054 00000000 		.long	0
 6010 0058 00000000 		.long	0
 6011 005c 0000E03F 		.long	1071644672
 6012 0060 00000000 		.long	0
 6013 0064 00000000 		.long	0
 6014 0068 B84B7F66 		.long	1719618488
 6015 006c 9EA0E6BF 		.long	-1075404642
 6016 0070 00000000 		.long	0
 6017 0074 0000E03F 		.long	1071644672
 6018 0078 B84B7F66 		.long	1719618488
 6019 007c 9EA0E63F 		.long	1072079006
 6020 0080 B84B7F66 		.long	1719618488
 6021 0084 9EA0E63F 		.long	1072079006
 6022 0088 00000000 		.long	0
 6023 008c 00000000 		.long	0
 6024 0090 B84B7F66 		.long	1719618488
 6025 0094 9EA0E6BF 		.long	-1075404642
 6026 0098 B84B7F66 		.long	1719618488
 6027 009c 9EA0E63F 		.long	1072079006
 6028 00a0 00000000 		.long	0
 6029 00a4 00000000 		.long	0
 6030 00a8 B84B7F66 		.long	1719618488
 6031 00ac 9EA0E6BF 		.long	-1075404642
 6032 00b0 B84B7F66 		.long	1719618488
 6033 00b4 9EA0E6BF 		.long	-1075404642
 6034 00b8 00000000 		.long	0
 6035 00bc 00000000 		.long	0
 6036 00c0 B84B7F66 		.long	1719618488
 6037 00c4 9EA0E63F 		.long	1072079006
 6038 00c8 B84B7F66 		.long	1719618488
 6039 00cc 9EA0E6BF 		.long	-1075404642
 6040 00d0 00000000 		.long	0
 6041 00d4 00000000 		.long	0
 6042 00d8 B84B7F66 		.long	1719618488
 6043 00dc 9EA0E63F 		.long	1072079006
 6044 00e0 00000000 		.long	0
 6045 00e4 00000000 		.long	0
 6046 00e8 00000000 		.long	0
 6047 00ec 0000E0BF 		.long	-1075838976
 6048 00f0 00000000 		.long	0
 6049 00f4 00000000 		.long	0
 6050 00f8 B84B7F66 		.long	1719618488
 6051 00fc 9EA0E63F 		.long	1072079006
 6052 0100 00000000 		.long	0
 6053 0104 0000E0BF 		.long	-1075838976
 6054 0108 B84B7F66 		.long	1719618488
 6055 010c 9EA0E6BF 		.long	-1075404642
 6056 0110 00000000 		.long	0
 6057 0114 00000000 		.long	0
 6058 0118 00000000 		.long	0
 6059 011c 0000E0BF 		.long	-1075838976
 6060 0120 00000000 		.long	0
 6061 0124 00000000 		.long	0
 6062 0128 B84B7F66 		.long	1719618488
 6063 012c 9EA0E6BF 		.long	-1075404642
 6064 0130 00000000 		.long	0
 6065 0134 0000E0BF 		.long	-1075838976
 6066 0138 00000000 		.long	0
 6067 013c 00000000 		.long	0
 6068 0140 00000000 		.long	0
 6069 0144 00000000 		.long	0
 6070 0148 00000000 		.long	0
 6071 014c 0000F0BF 		.long	-1074790400
 6072              		.globl	icos_v
 6073              		.section	.data.icos_v,"aw",@progbits
 6074              		.align 32
 6077              	icos_v:
 6078 0000 00000000 		.long	0
 6079 0004 01000000 		.long	1
 6080 0008 02000000 		.long	2
 6081 000c 00000000 		.long	0
 6082 0010 02000000 		.long	2
 6083 0014 03000000 		.long	3
 6084 0018 00000000 		.long	0
 6085 001c 03000000 		.long	3
 6086 0020 04000000 		.long	4
 6087 0024 00000000 		.long	0
 6088 0028 04000000 		.long	4
 6089 002c 05000000 		.long	5
 6090 0030 00000000 		.long	0
 6091 0034 05000000 		.long	5
 6092 0038 01000000 		.long	1
 6093 003c 01000000 		.long	1
 6094 0040 08000000 		.long	8
 6095 0044 02000000 		.long	2
 6096 0048 02000000 		.long	2
 6097 004c 07000000 		.long	7
 6098 0050 03000000 		.long	3
 6099 0054 03000000 		.long	3
 6100 0058 06000000 		.long	6
 6101 005c 04000000 		.long	4
 6102 0060 04000000 		.long	4
 6103 0064 0A000000 		.long	10
 6104 0068 05000000 		.long	5
 6105 006c 05000000 		.long	5
 6106 0070 09000000 		.long	9
 6107 0074 01000000 		.long	1
 6108 0078 01000000 		.long	1
 6109 007c 09000000 		.long	9
 6110 0080 08000000 		.long	8
 6111 0084 02000000 		.long	2
 6112 0088 08000000 		.long	8
 6113 008c 07000000 		.long	7
 6114 0090 03000000 		.long	3
 6115 0094 07000000 		.long	7
 6116 0098 06000000 		.long	6
 6117 009c 04000000 		.long	4
 6118 00a0 06000000 		.long	6
 6119 00a4 0A000000 		.long	10
 6120 00a8 05000000 		.long	5
 6121 00ac 0A000000 		.long	10
 6122 00b0 09000000 		.long	9
 6123 00b4 0B000000 		.long	11
 6124 00b8 09000000 		.long	9
 6125 00bc 0A000000 		.long	10
 6126 00c0 0B000000 		.long	11
 6127 00c4 08000000 		.long	8
 6128 00c8 09000000 		.long	9
 6129 00cc 0B000000 		.long	11
 6130 00d0 07000000 		.long	7
 6131 00d4 08000000 		.long	8
 6132 00d8 0B000000 		.long	11
 6133 00dc 06000000 		.long	6
 6134 00e0 07000000 		.long	7
 6135 00e4 0B000000 		.long	11
 6136 00e8 0A000000 		.long	10
 6137 00ec 06000000 		.long	6
 6138              		.globl	icos_r
 6139              		.section	.data.icos_r,"aw",@progbits
 6140              		.align 32
 6143              	icos_r:
 6144 0000 00000000 		.long	0
 6145 0004 0000F03F 		.long	1072693248
 6146 0008 00000000 		.long	0
 6147 000c 00000000 		.long	0
 6148 0010 00000000 		.long	0
 6149 0014 00000000 		.long	0
 6150 0018 CFF0BFC5 		.long	3317690575
 6151 001c 259FDC3F 		.long	1071423269
 6152 0020 CFF0BFC5 		.long	3317690575
 6153 0024 259FEC3F 		.long	1072471845
 6154 0028 00000000 		.long	0
 6155 002c 00000000 		.long	0
 6156 0030 CFF0BFC5 		.long	3317690575
 6157 0034 259FDC3F 		.long	1071423269
 6158 0038 5594201D 		.long	488674389
 6159 003c 6DB0D13F 		.long	1070706797
 6160 0040 DB48460B 		.long	189155547
 6161 0044 8838EB3F 		.long	1072380040
 6162 0048 CFF0BFC5 		.long	3317690575
 6163 004c 259FDC3F 		.long	1071423269
 6164 0050 D5B56F71 		.long	1903146453
 6165 0054 C927E7BF 		.long	-1075370039
 6166 0058 5A4EA10D 		.long	228675162
 6167 005c CAD2E03F 		.long	1071698634
 6168 0060 CFF0BFC5 		.long	3317690575
 6169 0064 259FDC3F 		.long	1071423269
 6170 0068 D5B56F71 		.long	1903146453
 6171 006c C927E7BF 		.long	-1075370039
 6172 0070 5A4EA10D 		.long	228675162
 6173 0074 CAD2E0BF 		.long	-1075785014
 6174 0078 CFF0BFC5 		.long	3317690575
 6175 007c 259FDC3F 		.long	1071423269
 6176 0080 5594201D 		.long	488674389
 6177 0084 6DB0D13F 		.long	1070706797
 6178 0088 DB48460B 		.long	189155547
 6179 008c 8838EBBF 		.long	-1075103608
 6180 0090 CFF0BFC5 		.long	3317690575
 6181 0094 259FDCBF 		.long	-1076060379
 6182 0098 CFF0BFC5 		.long	3317690575
 6183 009c 259FECBF 		.long	-1075011803
 6184 00a0 00000000 		.long	0
 6185 00a4 00000000 		.long	0
 6186 00a8 CFF0BFC5 		.long	3317690575
 6187 00ac 259FDCBF 		.long	-1076060379
 6188 00b0 5594201D 		.long	488674389
 6189 00b4 6DB0D1BF 		.long	-1076776851
 6190 00b8 DB48460B 		.long	189155547
 6191 00bc 8838EB3F 		.long	1072380040
 6192 00c0 CFF0BFC5 		.long	3317690575
 6193 00c4 259FDCBF 		.long	-1076060379
 6194 00c8 D5B56F71 		.long	1903146453
 6195 00cc C927E73F 		.long	1072113609
 6196 00d0 5A4EA10D 		.long	228675162
 6197 00d4 CAD2E03F 		.long	1071698634
 6198 00d8 CFF0BFC5 		.long	3317690575
 6199 00dc 259FDCBF 		.long	-1076060379
 6200 00e0 D5B56F71 		.long	1903146453
 6201 00e4 C927E73F 		.long	1072113609
 6202 00e8 5A4EA10D 		.long	228675162
 6203 00ec CAD2E0BF 		.long	-1075785014
 6204 00f0 CFF0BFC5 		.long	3317690575
 6205 00f4 259FDCBF 		.long	-1076060379
 6206 00f8 5594201D 		.long	488674389
 6207 00fc 6DB0D1BF 		.long	-1076776851
 6208 0100 DB48460B 		.long	189155547
 6209 0104 8838EBBF 		.long	-1075103608
 6210 0108 00000000 		.long	0
 6211 010c 0000F0BF 		.long	-1074790400
 6212 0110 00000000 		.long	0
 6213 0114 00000000 		.long	0
 6214 0118 00000000 		.long	0
 6215 011c 00000000 		.long	0
 6216              		.section	.rodata._ZL5tet_i,"a",@progbits
 6217              		.align 32
 6220              	_ZL5tet_i:
 6221 0000 01000000 		.long	1
 6222 0004 03000000 		.long	3
 6223 0008 02000000 		.long	2
 6224 000c 00000000 		.long	0
 6225 0010 02000000 		.long	2
 6226 0014 03000000 		.long	3
 6227 0018 00000000 		.long	0
 6228 001c 03000000 		.long	3
 6229 0020 01000000 		.long	1
 6230 0024 00000000 		.long	0
 6231 0028 01000000 		.long	1
 6232 002c 02000000 		.long	2
 6233              		.section	.data._ZL5tet_r,"aw",@progbits
 6234              		.align 32
 6237              	_ZL5tet_r:
 6238 0000 00000000 		.long	0
 6239 0004 0000F03F 		.long	1072693248
 6240 0008 00000000 		.long	0
 6241 000c 00000000 		.long	0
 6242 0010 00000000 		.long	0
 6243 0014 00000000 		.long	0
 6244 0018 E13D5555 		.long	1431649761
 6245 001c 5555D5BF 		.long	-1076538027
 6246 0020 2BF8FEDD 		.long	3724474411
 6247 0024 7D2BEE3F 		.long	1072573309
 6248 0028 00000000 		.long	0
 6249 002c 00000000 		.long	0
 6250 0030 E13D5555 		.long	1431649761
 6251 0034 5555D5BF 		.long	-1076538027
 6252 0038 2BF8FEDD 		.long	3724474411
 6253 003c 7D2BDEBF 		.long	-1075958915
 6254 0040 E2350C70 		.long	1879848418
 6255 0044 BD20EA3F 		.long	1072308413
 6256 0048 E13D5555 		.long	1431649761
 6257 004c 5555D5BF 		.long	-1076538027
 6258 0050 2BF8FEDD 		.long	3724474411
 6259 0054 7D2BDEBF 		.long	-1075958915
 6260 0058 E2350C70 		.long	1879848418
 6261 005c BD20EABF 		.long	-1075175235
 6262              		.section	.rodata.cst8,"aM",@progbits,8
 6263              		.align 8
 6264              	.LC0:
 6265 0000 182D4454 		.long	1413754136
 6266 0004 FB211940 		.long	1075388923
 6267              		.align 8
 6268              	.LC2:
 6269 0008 00000000 		.long	0
 6270 000c 0000F03F 		.long	1072693248
 6271              		.align 8
 6272              	.LC4:
 6273 0010 00000000 		.long	0
 6274 0014 0000E03F 		.long	1071644672
 6275              		.section	.rodata.cst16,"aM",@progbits,16
 6276              		.align 16
 6277              	.LC5:
 6278 0000 00000000 		.long	0
 6279 0004 00000080 		.long	-2147483648
 6280 0008 00000000 		.long	0
 6281 000c 00000000 		.long	0
 6282              		.section	.rodata.cst8
 6283              		.align 8
 6284              	.LC6:
 6285 0018 00000000 		.long	0
 6286 001c 0000F0BF 		.long	-1074790400
 6287              		.align 8
 6288              	.LC15:
 6289 0020 182D4454 		.long	1413754136
 6290 0024 FB2119C0 		.long	-1072094725
 6291              		.align 8
 6292              	.LC18:
 6293 0028 DB48460B 		.long	189155547
 6294 002c 8838EB3F 		.long	1072380040
 6295              		.align 8
 6296              	.LC19:
 6297 0030 5A4EA10D 		.long	228675162
 6298 0034 CAD2E03F 		.long	1071698634
 6299              		.align 8
 6300              	.LC20:
 6301 0038 03ED2F37 		.long	925887747
 6302 003c EFC6E33F 		.long	1071892207
 6303              		.align 8
 6304              	.LC21:
 6305 0040 81F6979B 		.long	2610427521
 6306 0044 77E3F93F 		.long	1073341303
 6307              		.align 8
 6308              	.LC22:
 6309 0048 03ED2F37 		.long	925887747
 6310 004c EFC6E3BF 		.long	-1075591441
 6311              		.align 8
 6312              	.LC23:
 6313 0050 DB48460B 		.long	189155547
 6314 0054 8838EBBF 		.long	-1075103608
 6315              		.align 8
 6316              	.LC24:
 6317 0058 81F6979B 		.long	2610427521
 6318 005c 77E3F9BF 		.long	-1074142345
 6319              		.align 8
 6320              	.LC25:
 6321 0060 5A4EA10D 		.long	228675162
 6322 0064 CAD2E0BF 		.long	-1075785014
 6323              		.align 8
 6324              	.LC28:
 6325 0068 181D9045 		.long	1167072536
 6326 006c A779E23F 		.long	1071806887
 6327              		.align 8
 6328              	.LC29:
 6329 0070 181D9045 		.long	1167072536
 6330 0074 A779E2BF 		.long	-1075676761
 6331              		.text
 6332              	.Letext0:
 6333              		.section	.text.unlikely._ZL14fghCircleTablePPdS0_i
 6334              	.Letext_cold0:
 6335              		.file 2 "fltk-1.3.4-1/FL/Enumerations.H"
 6336              		.file 3 "/usr/include/GL/gl.h"
 6337              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 6338              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 6339              		.file 6 "/usr/include/libio.h"
 6340              		.file 7 "/usr/include/stdio.h"
 6341              		.file 8 "fltk-1.3.4-1/FL/glut.H"
 6342              		.file 9 "/usr/include/stdlib.h"
 6343              		.file 10 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 freeglut_geometry.cxx
     /tmp/ccxi76Nl.s:13     .text._ZL14fghCircleTablePPdS0_i:0000000000000000 _ZL14fghCircleTablePPdS0_i
     /tmp/ccxi76Nl.s:216    .text._Z12glutWireCubed:0000000000000000 _Z12glutWireCubed
     /tmp/ccxi76Nl.s:462    .text._Z13glutSolidCubed:0000000000000000 _Z13glutSolidCubed
     /tmp/ccxi76Nl.s:684    .text._Z15glutSolidSpheredii:0000000000000000 _Z15glutSolidSpheredii
     /tmp/ccxi76Nl.s:1123   .text._Z14glutWireSpheredii:0000000000000000 _Z14glutWireSpheredii
     /tmp/ccxi76Nl.s:1397   .text._Z13glutSolidConeddii:0000000000000000 _Z13glutSolidConeddii
     /tmp/ccxi76Nl.s:1825   .text._Z12glutWireConeddii:0000000000000000 _Z12glutWireConeddii
     /tmp/ccxi76Nl.s:2117   .text._Z17glutSolidCylinderddii:0000000000000000 _Z17glutSolidCylinderddii
     /tmp/ccxi76Nl.s:2428   .text._Z16glutWireCylinderddii:0000000000000000 _Z16glutWireCylinderddii
     /tmp/ccxi76Nl.s:2667   .text._Z13glutWireTorusddii:0000000000000000 _Z13glutWireTorusddii
     /tmp/ccxi76Nl.s:3065   .text._Z14glutSolidTorusddii:0000000000000000 _Z14glutSolidTorusddii
     /tmp/ccxi76Nl.s:3449   .text._Z20glutWireDodecahedronv:0000000000000000 _Z20glutWireDodecahedronv
     /tmp/ccxi76Nl.s:3928   .text._Z21glutSolidDodecahedronv:0000000000000000 _Z21glutSolidDodecahedronv
     /tmp/ccxi76Nl.s:4407   .text._Z18glutWireOctahedronv:0000000000000000 _Z18glutWireOctahedronv
     /tmp/ccxi76Nl.s:4605   .text._Z19glutSolidOctahedronv:0000000000000000 _Z19glutSolidOctahedronv
     /tmp/ccxi76Nl.s:4803   .text._Z19glutWireTetrahedronv:0000000000000000 _Z19glutWireTetrahedronv
     /tmp/ccxi76Nl.s:6237   .data._ZL5tet_r:0000000000000000 _ZL5tet_r
     /tmp/ccxi76Nl.s:4910   .text._Z20glutSolidTetrahedronv:0000000000000000 _Z20glutSolidTetrahedronv
     /tmp/ccxi76Nl.s:5017   .text._Z19glutWireIcosahedronv:0000000000000000 _Z19glutWireIcosahedronv
     /tmp/ccxi76Nl.s:6077   .data.icos_v:0000000000000000 icos_v
     /tmp/ccxi76Nl.s:6143   .data.icos_r:0000000000000000 icos_r
     /tmp/ccxi76Nl.s:5159   .text._Z20glutSolidIcosahedronv:0000000000000000 _Z20glutSolidIcosahedronv
     /tmp/ccxi76Nl.s:5302   .text._Z27glutWireRhombicDodecahedronv:0000000000000000 _Z27glutWireRhombicDodecahedronv
     /tmp/ccxi76Nl.s:5855   .data.rdod_n:0000000000000000 rdod_n
     /tmp/ccxi76Nl.s:5933   .data.rdod_v:0000000000000000 rdod_v
     /tmp/ccxi76Nl.s:5987   .data.rdod_r:0000000000000000 rdod_r
     /tmp/ccxi76Nl.s:5383   .text._Z28glutSolidRhombicDodecahedronv:0000000000000000 _Z28glutSolidRhombicDodecahedronv
     /tmp/ccxi76Nl.s:5463   .text._Z24glutWireSierpinskiSpongeiPdd:0000000000000000 _Z24glutWireSierpinskiSpongeiPdd
     /tmp/ccxi76Nl.s:6220   .rodata._ZL5tet_i:0000000000000000 _ZL5tet_i
     /tmp/ccxi76Nl.s:5656   .text._Z25glutSolidSierpinskiSpongeiPdd:0000000000000000 _Z25glutSolidSierpinskiSpongeiPdd
     /tmp/ccxi76Nl.s:6264   .rodata.cst8:0000000000000000 .LC0
     /tmp/ccxi76Nl.s:6268   .rodata.cst8:0000000000000008 .LC2
     /tmp/ccxi76Nl.s:6272   .rodata.cst8:0000000000000010 .LC4
     /tmp/ccxi76Nl.s:6277   .rodata.cst16:0000000000000000 .LC5
     /tmp/ccxi76Nl.s:6284   .rodata.cst8:0000000000000018 .LC6
     /tmp/ccxi76Nl.s:6288   .rodata.cst8:0000000000000020 .LC15
     /tmp/ccxi76Nl.s:6292   .rodata.cst8:0000000000000028 .LC18
     /tmp/ccxi76Nl.s:6296   .rodata.cst8:0000000000000030 .LC19
     /tmp/ccxi76Nl.s:6300   .rodata.cst8:0000000000000038 .LC20
     /tmp/ccxi76Nl.s:6304   .rodata.cst8:0000000000000040 .LC21
     /tmp/ccxi76Nl.s:6308   .rodata.cst8:0000000000000048 .LC22
     /tmp/ccxi76Nl.s:6312   .rodata.cst8:0000000000000050 .LC23
     /tmp/ccxi76Nl.s:6316   .rodata.cst8:0000000000000058 .LC24
     /tmp/ccxi76Nl.s:6320   .rodata.cst8:0000000000000060 .LC25
     /tmp/ccxi76Nl.s:6324   .rodata.cst8:0000000000000068 .LC28
     /tmp/ccxi76Nl.s:6328   .rodata.cst8:0000000000000070 .LC29
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
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
                           .group:0000000000000000 wm4.math.h.26.671af5ac9cd425a35e0730f7b6d7cde2
                           .group:0000000000000000 wm4.libmsimddeclstubs.h.34.75644856b74ba3d815155fe5fe7ecc56
                           .group:0000000000000000 wm4.mathdef.h.23.67c0aa4a204f1f427459dfc651aba565
                           .group:0000000000000000 wm4.math.h.55.cf380f99c57d42476a5252f30065036a
                           .group:0000000000000000 wm4.math.h.84.742292806c6be54f49dc607928a827f7
                           .group:0000000000000000 wm4.math.h.105.59ff0f83ebf6a04e70e145cef2d1185e
                           .group:0000000000000000 wm4.math.h.152.afae4114fe3f3987f42ac5211c91e844

UNDEFINED SYMBOLS
calloc
sincos
free
glBegin
glNormal3d
glVertex3d
glEnd
__stack_chk_fail
sqrt
glPushMatrix
glNormal3dv
glVertex3dv
glPopMatrix
