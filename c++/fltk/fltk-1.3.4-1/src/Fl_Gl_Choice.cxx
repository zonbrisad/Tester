   1              		.file	"Fl_Gl_Choice.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.rodata.str1.1,"aMS",@progbits,1
   5              	.LC0:
   6 0000 4D455341 		.string	"MESA_PRIVATE_CMAP"
   6      5F505249 
   6      56415445 
   6      5F434D41 
   6      5000
   7              		.section	.text.unlikely._ZN12Fl_Gl_Choice4findEiPKi,"ax",@progbits
   8              		.align 2
   9              	.LCOLDB1:
  10              		.section	.text._ZN12Fl_Gl_Choice4findEiPKi,"ax",@progbits
  11              	.LHOTB1:
  12              		.align 2
  13              		.p2align 4,,15
  14              		.section	.text.unlikely._ZN12Fl_Gl_Choice4findEiPKi
  15              	.Ltext_cold0:
  16              		.section	.text._ZN12Fl_Gl_Choice4findEiPKi
  17              		.globl	_ZN12Fl_Gl_Choice4findEiPKi
  19              	_ZN12Fl_Gl_Choice4findEiPKi:
  20              	.LFB328:
  21              		.file 1 "fltk-1.3.4-1/src/Fl_Gl_Choice.cxx"
   1:fltk-1.3.4-1/src/Fl_Gl_Choice.cxx **** ...
  22              		.loc 1 41 0
  23              		.cfi_startproc
  24              	.LVL0:
  25 0000 4155     		pushq	%r13
  26              		.cfi_def_cfa_offset 16
  27              		.cfi_offset 13, -16
  28 0002 4154     		pushq	%r12
  29              		.cfi_def_cfa_offset 24
  30              		.cfi_offset 12, -24
  31 0004 4989F4   		movq	%rsi, %r12
  32 0007 55       		pushq	%rbp
  33              		.cfi_def_cfa_offset 32
  34              		.cfi_offset 6, -32
  35 0008 53       		pushq	%rbx
  36              		.cfi_def_cfa_offset 40
  37              		.cfi_offset 3, -40
  38 0009 89FD     		movl	%edi, %ebp
  39 000b 4881EC98 		subq	$152, %rsp
  39      000000
  40              		.cfi_def_cfa_offset 192
  41              		.loc 1 41 0
  42 0012 64488B04 		movq	%fs:40, %rax
  42      25280000 
  42      00
  43 001b 48898424 		movq	%rax, 136(%rsp)
  43      88000000 
  44 0023 31C0     		xorl	%eax, %eax
  45              		.loc 1 44 0
  46 0025 488B0500 		movq	_ZL5first(%rip), %rax
  46      000000
  47              	.LVL1:
  48 002c 4885C0   		testq	%rax, %rax
  49 002f 7510     		jne	.L5
  50 0031 EB45     		jmp	.L2
  51              		.p2align 4,,10
  52 0033 0F1F4400 		.p2align 3
  52      00
  53              	.L3:
  54              		.loc 1 44 0 is_stmt 0 discriminator 2
  55 0038 488B4010 		movq	16(%rax), %rax
  56              	.LVL2:
  57 003c 4885C0   		testq	%rax, %rax
  58 003f 7437     		je	.L2
  59              	.L5:
  60              		.loc 1 45 0 is_stmt 1
  61 0041 3928     		cmpl	%ebp, (%rax)
  62 0043 75F3     		jne	.L3
  63              		.loc 1 45 0 is_stmt 0 discriminator 1
  64 0045 4C396008 		cmpq	%r12, 8(%rax)
  65 0049 75ED     		jne	.L3
  66              	.LVL3:
  67 004b 0F1F4400 		.p2align 4,,10
  67      00
  68              		.p2align 3
  69              	.L4:
  70              		.loc 1 176 0 is_stmt 1
  71 0050 488B8C24 		movq	136(%rsp), %rcx
  71      88000000 
  72 0058 6448330C 		xorq	%fs:40, %rcx
  72      25280000 
  72      00
  73 0061 0F855202 		jne	.L58
  73      0000
  74 0067 4881C498 		addq	$152, %rsp
  74      000000
  75              		.cfi_remember_state
  76              		.cfi_def_cfa_offset 40
  77 006e 5B       		popq	%rbx
  78              		.cfi_def_cfa_offset 32
  79 006f 5D       		popq	%rbp
  80              		.cfi_def_cfa_offset 24
  81              	.LVL4:
  82 0070 415C     		popq	%r12
  83              		.cfi_def_cfa_offset 16
  84              	.LVL5:
  85 0072 415D     		popq	%r13
  86              		.cfi_def_cfa_offset 8
  87 0074 C3       		ret
  88              	.LVL6:
  89              		.p2align 4,,10
  90 0075 0F1F00   		.p2align 3
  91              	.L2:
  92              		.cfi_restore_state
  93              	.LBB6:
  94              		.loc 1 52 0
  95 0078 4D85E4   		testq	%r12, %r12
  96 007b 4C89E3   		movq	%r12, %rbx
  97 007e 0F84D400 		je	.L59
  97      0000
  98              	.LVL7:
  99              	.L6:
 100              	.LBE6:
 101              		.loc 1 98 0
 102 0084 E8000000 		call	_Z15fl_open_displayv
 102      00
 103              	.LVL8:
 104              		.loc 1 99 0
 105 0089 8B350000 		movl	fl_screen(%rip), %esi
 105      0000
 106 008f 488B3D00 		movq	fl_display(%rip), %rdi
 106      000000
 107 0096 4889DA   		movq	%rbx, %rdx
 108 0099 E8000000 		call	glXChooseVisual
 108      00
 109              	.LVL9:
 110              		.loc 1 100 0
 111 009e 4885C0   		testq	%rax, %rax
 112              		.loc 1 99 0
 113 00a1 4989C5   		movq	%rax, %r13
 114              	.LVL10:
 115              		.loc 1 100 0
 116 00a4 7472     		je	.L60
 117              		.loc 1 150 0
 118 00a6 BF280000 		movl	$40, %edi
 118      00
 119 00ab E8000000 		call	_Znwm
 119      00
 120              	.LVL11:
 121              		.loc 1 152 0
 122 00b0 4C896008 		movq	%r12, 8(%rax)
 123              		.loc 1 150 0
 124 00b4 4889C3   		movq	%rax, %rbx
 125              	.LVL12:
 126              		.loc 1 151 0
 127 00b7 8928     		movl	%ebp, (%rax)
 128              		.loc 1 153 0
 129 00b9 488B0500 		movq	_ZL5first(%rip), %rax
 129      000000
 130              	.LVL13:
 131              		.loc 1 157 0
 132 00c0 4C896B18 		movq	%r13, 24(%rbx)
 133              		.loc 1 154 0
 134 00c4 48891D00 		movq	%rbx, _ZL5first(%rip)
 134      000000
 135              		.loc 1 153 0
 136 00cb 48894310 		movq	%rax, 16(%rbx)
 137              		.loc 1 160 0
 138 00cf 488B0500 		movq	fl_visual(%rip), %rax
 138      000000
 139 00d6 488B4008 		movq	8(%rax), %rax
 140 00da 49394508 		cmpq	%rax, 8(%r13)
 141 00de 7456     		je	.L61
 142              	.L18:
 143              		.loc 1 164 0
 144 00e0 48630500 		movslq	fl_screen(%rip), %rax
 144      000000
 145 00e7 488B3D00 		movq	fl_display(%rip), %rdi
 145      000000
 146 00ee 31C9     		xorl	%ecx, %ecx
 147 00f0 498B5500 		movq	0(%r13), %rdx
 148 00f4 48C1E007 		salq	$7, %rax
 149 00f8 480387E8 		addq	232(%rdi), %rax
 149      000000
 150 00ff 488B7010 		movq	16(%rax), %rsi
 151 0103 E8000000 		call	XCreateColormap
 151      00
 152              	.LVL14:
 153              		.loc 1 165 0
 154 0108 48894320 		movq	%rax, 32(%rbx)
 155 010c 4889D8   		movq	%rbx, %rax
 156 010f E93CFFFF 		jmp	.L4
 156      FF
 157              	.LVL15:
 158              		.p2align 4,,10
 159 0114 0F1F4000 		.p2align 3
 160              	.L60:
 161              		.loc 1 104 0
 162 0118 31C0     		xorl	%eax, %eax
 163              	.LVL16:
 164              		.loc 1 102 0
 165 011a 40F6C580 		testb	$-128, %bpl
 166 011e 0F842CFF 		je	.L4
 166      FFFF
 167              		.loc 1 102 0 is_stmt 0 discriminator 1
 168 0124 89EF     		movl	%ebp, %edi
 169 0126 31F6     		xorl	%esi, %esi
 170 0128 4080E77F 		andb	$127, %dil
 171 012c E8000000 		call	_ZN12Fl_Gl_Choice4findEiPKi
 171      00
 172              	.LVL17:
 173 0131 E91AFFFF 		jmp	.L4
 173      FF
 174              	.LVL18:
 175              	.L61:
 176              		.loc 1 161 0 is_stmt 1 discriminator 1
 177 0136 BF000000 		movl	$.LC0, %edi
 177      00
 178 013b E8000000 		call	fl_getenv
 178      00
 179              	.LVL19:
 180              		.loc 1 160 0 discriminator 1
 181 0140 4885C0   		testq	%rax, %rax
 182 0143 759B     		jne	.L18
 183              		.loc 1 162 0
 184 0145 488B0500 		movq	fl_colormap(%rip), %rax
 184      000000
 185 014c 48894320 		movq	%rax, 32(%rbx)
 186 0150 4889D8   		movq	%rbx, %rax
 187 0153 E9F8FEFF 		jmp	.L4
 187      FF
 188              	.LVL20:
 189              	.L59:
 190              	.LBB8:
 191              	.LBB7:
 192              		.loc 1 56 0
 193 0158 40F6C501 		testb	$1, %bpl
 194 015c 0F84AD00 		je	.L7
 194      0000
 195              	.LVL21:
 196              		.loc 1 57 0
 197 0162 C7042402 		movl	$2, (%rsp)
 197      000000
 198              	.LVL22:
 199              		.loc 1 58 0
 200 0169 C7442404 		movl	$8, 4(%rsp)
 200      08000000 
 201 0171 B8020000 		movl	$2, %eax
 201      00
 202              	.LVL23:
 203              	.L8:
 204              		.loc 1 76 0
 205 0176 40F6C502 		testb	$2, %bpl
 206 017a 740D     		je	.L12
 207              	.LVL24:
 208              		.loc 1 77 0
 209 017c 4863D0   		movslq	%eax, %rdx
 210 017f 83C001   		addl	$1, %eax
 211              	.LVL25:
 212 0182 C7049405 		movl	$5, (%rsp,%rdx,4)
 212      000000
 213              	.L12:
 214              		.loc 1 79 0
 215 0189 40F6C510 		testb	$16, %bpl
 216 018d 741A     		je	.L13
 217              		.loc 1 80 0
 218 018f 8D5001   		leal	1(%rax), %edx
 219              	.LVL26:
 220 0192 4863C8   		movslq	%eax, %rcx
 221 0195 83C002   		addl	$2, %eax
 222              	.LVL27:
 223 0198 C7048C0C 		movl	$12, (%rsp,%rcx,4)
 223      000000
 224 019f 4863D2   		movslq	%edx, %rdx
 225 01a2 C7049401 		movl	$1, (%rsp,%rdx,4)
 225      000000
 226              	.L13:
 227              		.loc 1 82 0
 228 01a9 40F6C520 		testb	$32, %bpl
 229 01ad 741A     		je	.L14
 230              		.loc 1 83 0
 231 01af 8D5001   		leal	1(%rax), %edx
 232              	.LVL28:
 233 01b2 4863C8   		movslq	%eax, %rcx
 234 01b5 83C002   		addl	$2, %eax
 235              	.LVL29:
 236 01b8 C7048C0D 		movl	$13, (%rsp,%rcx,4)
 236      000000
 237 01bf 4863D2   		movslq	%edx, %rdx
 238 01c2 C7049401 		movl	$1, (%rsp,%rdx,4)
 238      000000
 239              	.L14:
 240              		.loc 1 85 0
 241 01c9 F7C50001 		testl	$256, %ebp
 241      0000
 242 01cf 740D     		je	.L15
 243              	.LVL30:
 244              		.loc 1 86 0
 245 01d1 4863D0   		movslq	%eax, %rdx
 246 01d4 83C001   		addl	$1, %eax
 247              	.LVL31:
 248 01d7 C7049406 		movl	$6, (%rsp,%rdx,4)
 248      000000
 249              	.L15:
 250              		.loc 1 89 0
 251 01de 40F6C580 		testb	$-128, %bpl
 252 01e2 741A     		je	.L16
 253              		.loc 1 90 0
 254 01e4 8D5001   		leal	1(%rax), %edx
 255              	.LVL32:
 256 01e7 4863C8   		movslq	%eax, %rcx
 257              		.loc 1 91 0
 258 01ea 83C002   		addl	$2, %eax
 259              	.LVL33:
 260              		.loc 1 90 0
 261 01ed C7048CA1 		movl	$100001, (%rsp,%rcx,4)
 261      860100
 262              		.loc 1 91 0
 263 01f4 4863D2   		movslq	%edx, %rdx
 264 01f7 C7049404 		movl	$4, (%rsp,%rdx,4)
 264      000000
 265              	.L16:
 266              		.loc 1 94 0
 267 01fe 4898     		cltq
 268              		.loc 1 95 0
 269 0200 4889E3   		movq	%rsp, %rbx
 270              	.LVL34:
 271              		.loc 1 94 0
 272 0203 C7048400 		movl	$0, (%rsp,%rax,4)
 272      000000
 273              	.LVL35:
 274 020a E975FEFF 		jmp	.L6
 274      FF
 275              	.LVL36:
 276              	.L7:
 277              		.loc 1 62 0
 278 020f 40F6C540 		testb	$64, %bpl
 279              		.loc 1 60 0
 280 0213 C7042404 		movl	$4, (%rsp)
 280      000000
 281              	.LVL37:
 282              		.loc 1 61 0
 283 021a C7442404 		movl	$9, 4(%rsp)
 283      09000000 
 284              	.LVL38:
 285              		.loc 1 62 0
 286 0222 7437     		je	.L62
 287              		.loc 1 63 0
 288 0224 40F6C508 		testb	$8, %bpl
 289              		.loc 1 62 0
 290 0228 C7442408 		movl	$8, 8(%rsp)
 290      08000000 
 291              		.loc 1 63 0
 292 0230 7578     		jne	.L63
 293              	.L22:
 294              		.loc 1 67 0
 295 0232 40F6C504 		testb	$4, %bpl
 296 0236 B8030000 		movl	$3, %eax
 296      00
 297              	.LVL39:
 298 023b 0F8435FF 		je	.L8
 298      FFFF
 299              	.LVL40:
 300              		.loc 1 68 0
 301 0241 C744240C 		movl	$15, 12(%rsp)
 301      0F000000 
 302              	.LVL41:
 303              		.loc 1 69 0
 304 0249 C7442410 		movl	$1, 16(%rsp)
 304      01000000 
 305              	.L24:
 306              		.loc 1 65 0
 307 0251 B8050000 		movl	$5, %eax
 307      00
 308 0256 E91BFFFF 		jmp	.L8
 308      FF
 309              	.LVL42:
 310              	.L62:
 311              		.loc 1 63 0
 312 025b 40F6C508 		testb	$8, %bpl
 313              		.loc 1 62 0
 314 025f C7442408 		movl	$1, 8(%rsp)
 314      01000000 
 315              		.loc 1 63 0
 316 0267 74C9     		je	.L22
 317              	.LVL43:
 318              		.loc 1 64 0
 319 0269 C744240C 		movl	$11, 12(%rsp)
 319      0B000000 
 320              	.LVL44:
 321              		.loc 1 65 0
 322 0271 B8010000 		movl	$1, %eax
 322      00
 323              	.LVL45:
 324              	.L20:
 325              		.loc 1 67 0 discriminator 4
 326 0276 40F6C504 		testb	$4, %bpl
 327              		.loc 1 65 0 discriminator 4
 328 027a 89442410 		movl	%eax, 16(%rsp)
 329              		.loc 1 67 0 discriminator 4
 330 027e 74D1     		je	.L24
 331              	.LVL46:
 332              		.loc 1 68 0
 333 0280 C7442414 		movl	$15, 20(%rsp)
 333      0F000000 
 334              	.LVL47:
 335              		.loc 1 69 0
 336 0288 C7442418 		movl	$1, 24(%rsp)
 336      01000000 
 337              	.LVL48:
 338              		.loc 1 72 0
 339 0290 B8090000 		movl	$9, %eax
 339      00
 340              		.loc 1 71 0
 341 0295 C744241C 		movl	$17, 28(%rsp)
 341      11000000 
 342              		.loc 1 72 0
 343 029d C7442420 		movl	$1, 32(%rsp)
 343      01000000 
 344 02a5 E9CCFEFF 		jmp	.L8
 344      FF
 345              	.LVL49:
 346              	.L63:
 347              		.loc 1 64 0
 348 02aa C744240C 		movl	$11, 12(%rsp)
 348      0B000000 
 349              	.LVL50:
 350              		.loc 1 65 0
 351 02b2 B8080000 		movl	$8, %eax
 351      00
 352              	.LVL51:
 353 02b7 EBBD     		jmp	.L20
 354              	.LVL52:
 355              	.L58:
 356              	.LBE7:
 357              	.LBE8:
 358              		.loc 1 176 0
 359 02b9 E8000000 		call	__stack_chk_fail
 359      00
 360              	.LVL53:
 361              		.cfi_endproc
 362              	.LFE328:
 364              		.section	.text.unlikely._ZN12Fl_Gl_Choice4findEiPKi
 365              	.LCOLDE1:
 366              		.section	.text._ZN12Fl_Gl_Choice4findEiPKi
 367              	.LHOTE1:
 368              		.section	.text.unlikely._Z20fl_create_gl_contextP11XVisualInfo,"ax",@progbits
 369              	.LCOLDB2:
 370              		.section	.text._Z20fl_create_gl_contextP11XVisualInfo,"ax",@progbits
 371              	.LHOTB2:
 372              		.p2align 4,,15
 373              		.globl	_Z20fl_create_gl_contextP11XVisualInfo
 375              	_Z20fl_create_gl_contextP11XVisualInfo:
 376              	.LFB331:
 377              		.loc 1 207 0
 378              		.cfi_startproc
 379              	.LVL54:
 380 0000 55       		pushq	%rbp
 381              		.cfi_def_cfa_offset 16
 382              		.cfi_offset 6, -16
 383 0001 53       		pushq	%rbx
 384              		.cfi_def_cfa_offset 24
 385              		.cfi_offset 3, -24
 386              		.loc 1 208 0
 387 0002 31D2     		xorl	%edx, %edx
 388              		.loc 1 207 0
 389 0004 4889FE   		movq	%rdi, %rsi
 390 0007 4883EC08 		subq	$8, %rsp
 391              		.cfi_def_cfa_offset 32
 392              		.loc 1 209 0
 393 000b 488B0500 		movq	_ZL12context_list(%rip), %rax
 393      000000
 394 0012 4885C0   		testq	%rax, %rax
 395 0015 740A     		je	.L65
 396              		.loc 1 209 0 is_stmt 0 discriminator 1
 397 0017 8B0D0000 		movl	_ZL8nContext(%rip), %ecx
 397      0000
 398 001d 85C9     		testl	%ecx, %ecx
 399 001f 754F     		jne	.L76
 400              	.LVL55:
 401              	.L65:
 402              		.loc 1 210 0 is_stmt 1
 403 0021 488B3D00 		movq	fl_display(%rip), %rdi
 403      000000
 404              	.LVL56:
 405 0028 B9010000 		movl	$1, %ecx
 405      00
 406 002d E8000000 		call	glXCreateContext
 406      00
 407              	.LVL57:
 408              		.loc 1 211 0
 409 0032 4885C0   		testq	%rax, %rax
 410              		.loc 1 210 0
 411 0035 4889C5   		movq	%rax, %rbp
 412              	.LVL58:
 413              		.loc 1 211 0
 414 0038 7423     		je	.L74
 415              	.LVL59:
 416              	.LBB11:
 417              	.LBB12:
 418              		.loc 1 183 0
 419 003a 48631D00 		movslq	_ZL8nContext(%rip), %rbx
 419      000000
 420 0041 488B0500 		movq	_ZL12context_list(%rip), %rax
 420      000000
 421              	.LVL60:
 422 0048 3B1D0000 		cmpl	_ZL8NContext(%rip), %ebx
 422      0000
 423 004e 7428     		je	.L77
 424              	.L67:
 425              		.loc 1 189 0
 426 0050 8D5301   		leal	1(%rbx), %edx
 427 0053 48892CD8 		movq	%rbp, (%rax,%rbx,8)
 428 0057 89150000 		movl	%edx, _ZL8nContext(%rip)
 428      0000
 429              	.LVL61:
 430              	.L74:
 431              	.LBE12:
 432              	.LBE11:
 433              		.loc 1 214 0
 434 005d 4883C408 		addq	$8, %rsp
 435              		.cfi_remember_state
 436              		.cfi_def_cfa_offset 24
 437 0061 4889E8   		movq	%rbp, %rax
 438 0064 5B       		popq	%rbx
 439              		.cfi_def_cfa_offset 16
 440 0065 5D       		popq	%rbp
 441              		.cfi_def_cfa_offset 8
 442              	.LVL62:
 443 0066 C3       		ret
 444              	.LVL63:
 445 0067 660F1F84 		.p2align 4,,10
 445      00000000 
 445      00
 446              		.p2align 3
 447              	.L76:
 448              		.cfi_restore_state
 449              		.loc 1 209 0 discriminator 2
 450 0070 488B10   		movq	(%rax), %rdx
 451              	.LVL64:
 452 0073 EBAC     		jmp	.L65
 453              	.LVL65:
 454              		.p2align 4,,10
 455 0075 0F1F00   		.p2align 3
 456              	.L77:
 457              	.LBB14:
 458              	.LBB13:
 459              		.loc 1 184 0
 460 0078 85DB     		testl	%ebx, %ebx
 461 007a 742C     		je	.L73
 462 007c 8D041B   		leal	(%rbx,%rbx), %eax
 463 007f 4863F0   		movslq	%eax, %rsi
 464 0082 48C1E603 		salq	$3, %rsi
 465              	.L68:
 466              		.loc 1 186 0
 467 0086 488B3D00 		movq	_ZL12context_list(%rip), %rdi
 467      000000
 468              		.loc 1 185 0
 469 008d 89050000 		movl	%eax, _ZL8NContext(%rip)
 469      0000
 470              		.loc 1 186 0
 471 0093 E8000000 		call	realloc
 471      00
 472              	.LVL66:
 473              		.loc 1 187 0
 474 0098 48890500 		movq	%rax, _ZL12context_list(%rip)
 474      000000
 475 009f EBAF     		jmp	.L67
 476              		.p2align 4,,10
 477 00a1 0F1F8000 		.p2align 3
 477      000000
 478              	.L73:
 479              		.loc 1 184 0
 480 00a8 BE800000 		movl	$128, %esi
 480      00
 481 00ad B8100000 		movl	$16, %eax
 481      00
 482 00b2 EBD2     		jmp	.L68
 483              	.LBE13:
 484              	.LBE14:
 485              		.cfi_endproc
 486              	.LFE331:
 488              		.section	.text.unlikely._Z20fl_create_gl_contextP11XVisualInfo
 489              	.LCOLDE2:
 490              		.section	.text._Z20fl_create_gl_contextP11XVisualInfo
 491              	.LHOTE2:
 492              		.section	.text.unlikely._Z17fl_set_gl_contextP9Fl_WindowP15__GLXcontextRec,"ax",@progbits
 493              	.LCOLDB3:
 494              		.section	.text._Z17fl_set_gl_contextP9Fl_WindowP15__GLXcontextRec,"ax",@progbits
 495              	.LHOTB3:
 496              		.p2align 4,,15
 497              		.globl	_Z17fl_set_gl_contextP9Fl_WindowP15__GLXcontextRec
 499              	_Z17fl_set_gl_contextP9Fl_WindowP15__GLXcontextRec:
 500              	.LFB332:
 501              		.loc 1 259 0
 502              		.cfi_startproc
 503              	.LVL67:
 504              		.loc 1 260 0
 505 0000 48393500 		cmpq	%rsi, _ZL14cached_context(%rip)
 505      000000
 506              		.loc 1 259 0
 507 0007 53       		pushq	%rbx
 508              		.cfi_def_cfa_offset 16
 509              		.cfi_offset 3, -16
 510              		.loc 1 260 0
 511 0008 742E     		je	.L82
 512              	.L79:
 513 000a 4889F3   		movq	%rsi, %rbx
 514              		.loc 1 261 0
 515 000d 48893500 		movq	%rsi, _ZL14cached_context(%rip)
 515      000000
 516              		.loc 1 262 0
 517 0014 48893D00 		movq	%rdi, _ZL13cached_window(%rip)
 517      000000
 518              		.loc 1 264 0
 519 001b E8000000 		call	_Z7fl_xid_PK9Fl_Window
 519      00
 520              	.LVL68:
 521 0020 4889DA   		movq	%rbx, %rdx
 522 0023 488B3D00 		movq	fl_display(%rip), %rdi
 522      000000
 523 002a 4889C6   		movq	%rax, %rsi
 524              		.loc 1 273 0
 525 002d 5B       		popq	%rbx
 526              		.cfi_remember_state
 527              		.cfi_def_cfa_offset 8
 528              	.LVL69:
 529              		.loc 1 264 0
 530 002e E9000000 		jmp	glXMakeCurrent
 530      00
 531              	.LVL70:
 532              		.p2align 4,,10
 533 0033 0F1F4400 		.p2align 3
 533      00
 534              	.L82:
 535              		.cfi_restore_state
 536              		.loc 1 260 0 discriminator 1
 537 0038 48393D00 		cmpq	%rdi, _ZL13cached_window(%rip)
 537      000000
 538 003f 75C9     		jne	.L79
 539              		.loc 1 273 0
 540 0041 5B       		popq	%rbx
 541              		.cfi_def_cfa_offset 8
 542 0042 C3       		ret
 543              		.cfi_endproc
 544              	.LFE332:
 546              		.section	.text.unlikely._Z17fl_set_gl_contextP9Fl_WindowP15__GLXcontextRec
 547              	.LCOLDE3:
 548              		.section	.text._Z17fl_set_gl_contextP9Fl_WindowP15__GLXcontextRec
 549              	.LHOTE3:
 550              		.section	.text.unlikely._Z16fl_no_gl_contextv,"ax",@progbits
 551              	.LCOLDB4:
 552              		.section	.text._Z16fl_no_gl_contextv,"ax",@progbits
 553              	.LHOTB4:
 554              		.p2align 4,,15
 555              		.globl	_Z16fl_no_gl_contextv
 557              	_Z16fl_no_gl_contextv:
 558              	.LFB333:
 559              		.loc 1 275 0
 560              		.cfi_startproc
 561              		.loc 1 279 0
 562 0000 488B3D00 		movq	fl_display(%rip), %rdi
 562      000000
 563 0007 31D2     		xorl	%edx, %edx
 564 0009 31F6     		xorl	%esi, %esi
 565              		.loc 1 276 0
 566 000b 48C70500 		movq	$0, _ZL14cached_context(%rip)
 566      00000000 
 566      000000
 567              		.loc 1 277 0
 568 0016 48C70500 		movq	$0, _ZL13cached_window(%rip)
 568      00000000 
 568      000000
 569              		.loc 1 279 0
 570 0021 E9000000 		jmp	glXMakeCurrent
 570      00
 571              	.LVL71:
 572              		.cfi_endproc
 573              	.LFE333:
 575              		.section	.text.unlikely._Z16fl_no_gl_contextv
 576              	.LCOLDE4:
 577              		.section	.text._Z16fl_no_gl_contextv
 578              	.LHOTE4:
 579              		.section	.text.unlikely._Z20fl_delete_gl_contextP15__GLXcontextRec,"ax",@progbits
 580              	.LCOLDB5:
 581              		.section	.text._Z20fl_delete_gl_contextP15__GLXcontextRec,"ax",@progbits
 582              	.LHOTB5:
 583              		.p2align 4,,15
 584              		.globl	_Z20fl_delete_gl_contextP15__GLXcontextRec
 586              	_Z20fl_delete_gl_contextP15__GLXcontextRec:
 587              	.LFB334:
 588              		.loc 1 289 0
 589              		.cfi_startproc
 590              	.LVL72:
 591              		.loc 1 290 0
 592 0000 48393D00 		cmpq	%rdi, _ZL14cached_context(%rip)
 592      000000
 593              		.loc 1 289 0
 594 0007 4154     		pushq	%r12
 595              		.cfi_def_cfa_offset 16
 596              		.cfi_offset 12, -16
 597 0009 55       		pushq	%rbp
 598              		.cfi_def_cfa_offset 24
 599              		.cfi_offset 6, -24
 600 000a 4889FD   		movq	%rdi, %rbp
 601 000d 53       		pushq	%rbx
 602              		.cfi_def_cfa_offset 32
 603              		.cfi_offset 3, -32
 604              		.loc 1 290 0
 605 000e 0F849800 		je	.L98
 605      0000
 606              	.LVL73:
 607              	.L85:
 608              		.loc 1 292 0
 609 0014 488B3D00 		movq	fl_display(%rip), %rdi
 609      000000
 610 001b 4889EE   		movq	%rbp, %rsi
 611 001e E8000000 		call	glXDestroyContext
 611      00
 612              	.LVL74:
 613              	.LBB21:
 614              	.LBB22:
 615              		.loc 1 194 0
 616 0023 8B1D0000 		movl	_ZL8nContext(%rip), %ebx
 616      0000
 617 0029 85DB     		testl	%ebx, %ebx
 618 002b 7E72     		jle	.L86
 619              		.loc 1 195 0
 620 002d 4C8B2500 		movq	_ZL12context_list(%rip), %r12
 620      000000
 621 0034 B8010000 		movl	$1, %eax
 621      00
 622 0039 493B2C24 		cmpq	(%r12), %rbp
 623 003d 498D5424 		leaq	8(%r12), %rdx
 623      08
 624 0042 751C     		jne	.L89
 625 0044 E98E0000 		jmp	.L99
 625      00
 626              	.LVL75:
 627 0049 0F1F8000 		.p2align 4,,10
 627      000000
 628              		.p2align 3
 629              	.L95:
 630 0050 4889D7   		movq	%rdx, %rdi
 631 0053 4883C001 		addq	$1, %rax
 632              	.LVL76:
 633 0057 488D5208 		leaq	8(%rdx), %rdx
 634 005b 483B2F   		cmpq	(%rdi), %rbp
 635 005e 7410     		je	.L100
 636              	.LVL77:
 637              	.L89:
 638              		.loc 1 194 0
 639 0060 39D8     		cmpl	%ebx, %eax
 640 0062 89C1     		movl	%eax, %ecx
 641              	.LVL78:
 642 0064 7CEA     		jl	.L95
 643              	.LVL79:
 644              	.L84:
 645              	.LBE22:
 646              	.LBE21:
 647              		.loc 1 301 0
 648 0066 5B       		popq	%rbx
 649              		.cfi_remember_state
 650              		.cfi_def_cfa_offset 24
 651 0067 5D       		popq	%rbp
 652              		.cfi_def_cfa_offset 16
 653              	.LVL80:
 654 0068 415C     		popq	%r12
 655              		.cfi_def_cfa_offset 8
 656 006a C3       		ret
 657              	.LVL81:
 658 006b 0F1F4400 		.p2align 4,,10
 658      00
 659              		.p2align 3
 660              	.L100:
 661              		.cfi_restore_state
 662 0070 48C1E003 		salq	$3, %rax
 663              	.LVL82:
 664              	.L87:
 665              	.LBB30:
 666              	.LBB27:
 667              	.LBB23:
 668              	.LBB24:
 669              		.file 2 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 670              		.loc 2 59 0
 671 0074 89DA     		movl	%ebx, %edx
 672 0076 498D3404 		leaq	(%r12,%rax), %rsi
 673              	.LVL83:
 674              	.LBE24:
 675              	.LBE23:
 676              		.loc 1 198 0
 677 007a 83EB01   		subl	$1, %ebx
 678              	.LVL84:
 679              	.LBB26:
 680              	.LBB25:
 681              		.loc 2 59 0
 682 007d 29CA     		subl	%ecx, %edx
 683              	.LVL85:
 684 007f 83EA01   		subl	$1, %edx
 685 0082 4863D2   		movslq	%edx, %rdx
 686 0085 48C1E203 		salq	$3, %rdx
 687 0089 E8000000 		call	memmove
 687      00
 688              	.LVL86:
 689              	.LBE25:
 690              	.LBE26:
 691              		.loc 1 198 0
 692 008e 4863C3   		movslq	%ebx, %rax
 693 0091 891D0000 		movl	%ebx, _ZL8nContext(%rip)
 693      0000
 694 0097 49C704C4 		movq	$0, (%r12,%rax,8)
 694      00000000 
 695              	.L86:
 696              		.loc 1 202 0
 697 009f 85DB     		testl	%ebx, %ebx
 698 00a1 75C3     		jne	.L84
 699              	.LBE27:
 700              	.LBE30:
 701              		.loc 1 301 0
 702 00a3 5B       		popq	%rbx
 703              		.cfi_remember_state
 704              		.cfi_def_cfa_offset 24
 705 00a4 5D       		popq	%rbp
 706              		.cfi_def_cfa_offset 16
 707              	.LVL87:
 708 00a5 415C     		popq	%r12
 709              		.cfi_def_cfa_offset 8
 710              	.LBB31:
 711              	.LBB28:
 712              		.loc 1 202 0
 713 00a7 E9000000 		jmp	_Z27gl_remove_displaylist_fontsv
 713      00
 714              	.LVL88:
 715              	.L98:
 716              		.cfi_restore_state
 717              	.LBE28:
 718              	.LBE31:
 719              	.LBB32:
 720              	.LBB33:
 721              		.loc 1 279 0
 722 00ac 488B3D00 		movq	fl_display(%rip), %rdi
 722      000000
 723              	.LVL89:
 724 00b3 31D2     		xorl	%edx, %edx
 725 00b5 31F6     		xorl	%esi, %esi
 726              		.loc 1 276 0
 727 00b7 48C70500 		movq	$0, _ZL14cached_context(%rip)
 727      00000000 
 727      000000
 728              		.loc 1 277 0
 729 00c2 48C70500 		movq	$0, _ZL13cached_window(%rip)
 729      00000000 
 729      000000
 730              		.loc 1 279 0
 731 00cd E8000000 		call	glXMakeCurrent
 731      00
 732              	.LVL90:
 733 00d2 E93DFFFF 		jmp	.L85
 733      FF
 734              	.LVL91:
 735              	.L99:
 736              	.LBE33:
 737              	.LBE32:
 738              	.LBB34:
 739              	.LBB29:
 740              		.loc 1 195 0
 741 00d7 4C89E7   		movq	%r12, %rdi
 742 00da B8080000 		movl	$8, %eax
 742      00
 743              		.loc 1 194 0
 744 00df 31C9     		xorl	%ecx, %ecx
 745 00e1 EB91     		jmp	.L87
 746              	.LBE29:
 747              	.LBE34:
 748              		.cfi_endproc
 749              	.LFE334:
 751              		.section	.text.unlikely._Z20fl_delete_gl_contextP15__GLXcontextRec
 752              	.LCOLDE5:
 753              		.section	.text._Z20fl_delete_gl_contextP15__GLXcontextRec
 754              	.LHOTE5:
 755              		.section	.bss._ZL13cached_window,"aw",@nobits
 756              		.align 8
 759              	_ZL13cached_window:
 760 0000 00000000 		.zero	8
 760      00000000 
 761              		.section	.bss._ZL14cached_context,"aw",@nobits
 762              		.align 8
 765              	_ZL14cached_context:
 766 0000 00000000 		.zero	8
 766      00000000 
 767              		.section	.bss._ZL8NContext,"aw",@nobits
 768              		.align 4
 771              	_ZL8NContext:
 772 0000 00000000 		.zero	4
 773              		.section	.bss._ZL8nContext,"aw",@nobits
 774              		.align 4
 777              	_ZL8nContext:
 778 0000 00000000 		.zero	4
 779              		.section	.bss._ZL12context_list,"aw",@nobits
 780              		.align 8
 783              	_ZL12context_list:
 784 0000 00000000 		.zero	8
 784      00000000 
 785              		.section	.bss._ZL5first,"aw",@nobits
 786              		.align 8
 789              	_ZL5first:
 790 0000 00000000 		.zero	8
 790      00000000 
 791              		.text
 792              	.Letext0:
 793              		.section	.text.unlikely._ZN12Fl_Gl_Choice4findEiPKi
 794              	.Letext_cold0:
 795              		.file 3 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 796              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types.h"
 797              		.file 5 "/usr/include/libio.h"
 798              		.file 6 "fltk-1.3.4-1/FL/Enumerations.H"
 799              		.file 7 "/usr/include/X11/X.h"
 800              		.file 8 "/usr/include/X11/Xlib.h"
 801              		.file 9 "/usr/include/X11/Xutil.h"
 802              		.file 10 "/usr/include/GL/glx.h"
 803              		.file 11 "fltk-1.3.4-1/src/Fl_Gl_Choice.H"
 804              		.file 12 "/usr/include/stdio.h"
 805              		.file 13 "fltk-1.3.4-1/FL/x.H"
 806              		.file 14 "fltk-1.3.4-1/FL/fl_utf8.h"
 807              		.file 15 "/usr/include/stdlib.h"
 808              		.file 16 "fltk-1.3.4-1/FL/gl_draw.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Gl_Choice.cxx
     /tmp/ccjiveLG.s:19     .text._ZN12Fl_Gl_Choice4findEiPKi:0000000000000000 _ZN12Fl_Gl_Choice4findEiPKi
     /tmp/ccjiveLG.s:789    .bss._ZL5first:0000000000000000 _ZL5first
     /tmp/ccjiveLG.s:375    .text._Z20fl_create_gl_contextP11XVisualInfo:0000000000000000 _Z20fl_create_gl_contextP11XVisualInfo
     /tmp/ccjiveLG.s:783    .bss._ZL12context_list:0000000000000000 _ZL12context_list
     /tmp/ccjiveLG.s:777    .bss._ZL8nContext:0000000000000000 _ZL8nContext
     /tmp/ccjiveLG.s:771    .bss._ZL8NContext:0000000000000000 _ZL8NContext
     /tmp/ccjiveLG.s:499    .text._Z17fl_set_gl_contextP9Fl_WindowP15__GLXcontextRec:0000000000000000 _Z17fl_set_gl_contextP9Fl_WindowP15__GLXcontextRec
     /tmp/ccjiveLG.s:765    .bss._ZL14cached_context:0000000000000000 _ZL14cached_context
     /tmp/ccjiveLG.s:759    .bss._ZL13cached_window:0000000000000000 _ZL13cached_window
     /tmp/ccjiveLG.s:557    .text._Z16fl_no_gl_contextv:0000000000000000 _Z16fl_no_gl_contextv
     /tmp/ccjiveLG.s:586    .text._Z20fl_delete_gl_contextP15__GLXcontextRec:0000000000000000 _Z20fl_delete_gl_contextP15__GLXcontextRec
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
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
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.00137ad0275e3bca492dca30adbe2e71
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.gl.h.28.27e118789b77bf53572e8b8b827388be
                           .group:0000000000000000 wm4.glext.h.2.33ebf91cb2ac393e00fbf001cfd5adf6
                           .group:0000000000000000 wm4.glext.h.470.f1f9a32ea973d58e9e9d60b0d331a28b
                           .group:0000000000000000 wm4.wchar.h.20.510818a05484290d697a517509bf4b2d
                           .group:0000000000000000 wm4.stdint.h.52.8bda5d4f6e37fcdcd6c952c7de376f68
                           .group:0000000000000000 wm4.inttypes.h.32.c4dc77c414e5a88041490e6d2aa1116a
                           .group:0000000000000000 wm4.glext.h.1425.4660c46bd83bf818a1c8102c2fa59820
                           .group:0000000000000000 wm4.gl.h.2066.d218939585eb4fd8b54422df1c78229d
                           .group:0000000000000000 wm4.glx.h.45.4b7e546d91728004cab1371c348ddb63
                           .group:0000000000000000 wm4.glxext.h.2.b4e8a31b7f042be05811d22657d85b23
                           .group:0000000000000000 wm4.glx.h.347.6b73155b2e226683d914b22e4387b260
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
_Z15fl_open_displayv
fl_screen
fl_display
glXChooseVisual
_Znwm
fl_visual
XCreateColormap
fl_getenv
fl_colormap
__stack_chk_fail
glXCreateContext
realloc
_Z7fl_xid_PK9Fl_Window
glXMakeCurrent
glXDestroyContext
memmove
_Z27gl_remove_displaylist_fontsv
