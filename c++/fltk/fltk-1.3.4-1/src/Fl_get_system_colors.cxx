   1              		.file	"Fl_get_system_colors.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN2Fl10foregroundEhhh,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN2Fl10foregroundEhhh,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN2Fl10foregroundEhhh
  12              	.Ltext_cold0:
  13              		.section	.text._ZN2Fl10foregroundEhhh
  14              		.globl	_ZN2Fl10foregroundEhhh
  16              	_ZN2Fl10foregroundEhhh:
  17              	.LFB489:
  18              		.file 1 "fltk-1.3.4-1/src/Fl_get_system_colors.cxx"
   1:fltk-1.3.4-1/src/Fl_get_system_colors.cxx **** ...
  19              		.loc 1 66 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              		.loc 1 69 0
  23 0000 0FB6CA   		movzbl	%dl, %ecx
  24 0003 400FB6D6 		movzbl	%sil, %edx
  25              	.LVL1:
  26 0007 400FB6F7 		movzbl	%dil, %esi
  27              	.LVL2:
  28 000b 31FF     		xorl	%edi, %edi
  29              	.LVL3:
  30              		.loc 1 67 0
  31 000d C6050000 		movb	$1, _ZL9fl_fg_set(%rip)
  31      000001
  32              		.loc 1 69 0
  33 0014 E9000000 		jmp	_ZN2Fl9set_colorEjhhh
  33      00
  34              	.LVL4:
  35              		.cfi_endproc
  36              	.LFE489:
  38              		.section	.text.unlikely._ZN2Fl10foregroundEhhh
  39              	.LCOLDE0:
  40              		.section	.text._ZN2Fl10foregroundEhhh
  41              	.LHOTE0:
  42              		.section	.text.unlikely._ZL19set_selection_colorhhh,"ax",@progbits
  43              	.LCOLDB1:
  44              		.section	.text._ZL19set_selection_colorhhh,"ax",@progbits
  45              	.LHOTB1:
  46              		.p2align 4,,15
  48              	_ZL19set_selection_colorhhh:
  49              	.LFB491:
  50              		.loc 1 91 0
  51              		.cfi_startproc
  52              	.LVL5:
  53              		.loc 1 92 0
  54 0000 0FB6CA   		movzbl	%dl, %ecx
  55 0003 400FB6D6 		movzbl	%sil, %edx
  56              	.LVL6:
  57 0007 400FB6F7 		movzbl	%dil, %esi
  58              	.LVL7:
  59 000b BF0F0000 		movl	$15, %edi
  59      00
  60              	.LVL8:
  61 0010 E9000000 		jmp	_ZN2Fl9set_colorEjhhh
  61      00
  62              	.LVL9:
  63              		.cfi_endproc
  64              	.LFE491:
  66              		.section	.text.unlikely._ZL19set_selection_colorhhh
  67              	.LCOLDE1:
  68              		.section	.text._ZL19set_selection_colorhhh
  69              	.LHOTE1:
  70              		.section	.text.unlikely._ZN2Fl10backgroundEhhh,"ax",@progbits
  71              		.align 2
  72              	.LCOLDB8:
  73              		.section	.text._ZN2Fl10backgroundEhhh,"ax",@progbits
  74              	.LHOTB8:
  75              		.align 2
  76              		.p2align 4,,15
  77              		.globl	_ZN2Fl10backgroundEhhh
  79              	_ZN2Fl10backgroundEhhh:
  80              	.LFB488:
  81              		.loc 1 47 0
  82              		.cfi_startproc
  83              	.LVL10:
  84 0000 55       		pushq	%rbp
  85              		.cfi_def_cfa_offset 16
  86              		.cfi_offset 6, -16
  87 0001 53       		pushq	%rbx
  88              		.cfi_def_cfa_offset 24
  89              		.cfi_offset 3, -24
  90 0002 89F5     		movl	%esi, %ebp
  91 0004 89D3     		movl	%edx, %ebx
  92 0006 4883EC48 		subq	$72, %rsp
  93              		.cfi_def_cfa_offset 96
  94              		.loc 1 51 0
  95 000a 4084FF   		testb	%dil, %dil
  96              		.loc 1 48 0
  97 000d C6050000 		movb	$1, _ZL9fl_bg_set(%rip)
  97      000001
  98              		.loc 1 51 0
  99 0014 742A     		je	.L8
 100              		.loc 1 51 0 is_stmt 0 discriminator 2
 101 0016 4080FFFF 		cmpb	$-1, %dil
 102 001a 0F849801 		je	.L9
 102      0000
 103 0020 660FEFC0 		pxor	%xmm0, %xmm0
 104 0024 400FB6FF 		movzbl	%dil, %edi
 105 0028 F20F1035 		movsd	.LC4(%rip), %xmm6
 105      00000000 
 106 0030 F20F2AC7 		cvtsi2sd	%edi, %xmm0
 107 0034 F20F1174 		movsd	%xmm6, 32(%rsp)
 107      2420
 108 003a F20F5EC6 		divsd	%xmm6, %xmm0
 109 003e EB16     		jmp	.L4
 110              		.p2align 4,,10
 111              		.p2align 3
 112              	.L8:
 113 0040 F20F103D 		movsd	.LC4(%rip), %xmm7
 113      00000000 
 114 0048 F20F1005 		movsd	.LC2(%rip), %xmm0
 114      00000000 
 115 0050 F20F117C 		movsd	%xmm7, 32(%rsp)
 115      2420
 116              	.LVL11:
 117              	.L4:
 118              		.loc 1 52 0 is_stmt 1
 119 0056 E8000000 		call	log
 119      00
 120              	.LVL12:
 121 005b F20F5E05 		divsd	.LC5(%rip), %xmm0
 121      00000000 
 122              		.loc 1 53 0
 123 0063 4084ED   		testb	%bpl, %bpl
 124              		.loc 1 52 0
 125 0066 F20F1144 		movsd	%xmm0, 40(%rsp)
 125      2428
 126              	.LVL13:
 127 006c F20F1005 		movsd	.LC2(%rip), %xmm0
 127      00000000 
 128              	.LVL14:
 129              		.loc 1 53 0
 130 0074 7420     		je	.L5
 131              		.loc 1 53 0 is_stmt 0 discriminator 2
 132 0076 4080FDFF 		cmpb	$-1, %bpl
 133 007a F20F1005 		movsd	.LC3(%rip), %xmm0
 133      00000000 
 134 0082 7412     		je	.L5
 135 0084 660FEFC0 		pxor	%xmm0, %xmm0
 136 0088 400FB6ED 		movzbl	%bpl, %ebp
 137 008c F20F2AC5 		cvtsi2sd	%ebp, %xmm0
 138 0090 F20F5E44 		divsd	32(%rsp), %xmm0
 138      2420
 139              	.L5:
 140              	.LVL15:
 141              		.loc 1 54 0 is_stmt 1
 142 0096 E8000000 		call	log
 142      00
 143              	.LVL16:
 144              		.loc 1 55 0
 145 009b 84DB     		testb	%bl, %bl
 146              		.loc 1 54 0
 147 009d F20F5E05 		divsd	.LC5(%rip), %xmm0
 147      00000000 
 148 00a5 F20F1144 		movsd	%xmm0, 48(%rsp)
 148      2430
 149              	.LVL17:
 150 00ab F20F1005 		movsd	.LC2(%rip), %xmm0
 150      00000000 
 151              	.LVL18:
 152              		.loc 1 55 0
 153 00b3 741E     		je	.L6
 154              		.loc 1 55 0 is_stmt 0 discriminator 2
 155 00b5 80FBFF   		cmpb	$-1, %bl
 156 00b8 F20F1005 		movsd	.LC3(%rip), %xmm0
 156      00000000 
 157 00c0 7411     		je	.L6
 158 00c2 660FEFC0 		pxor	%xmm0, %xmm0
 159 00c6 0FB6DB   		movzbl	%bl, %ebx
 160 00c9 F20F2AC3 		cvtsi2sd	%ebx, %xmm0
 161 00cd F20F5E44 		divsd	32(%rsp), %xmm0
 161      2420
 162              	.L6:
 163              	.LVL19:
 164              		.loc 1 56 0 is_stmt 1
 165 00d3 E8000000 		call	log
 165      00
 166              	.LVL20:
 167              	.LBB27:
 168              		.loc 1 57 0
 169 00d8 31DB     		xorl	%ebx, %ebx
 170              	.LBE27:
 171              		.loc 1 56 0
 172 00da F20F5E05 		divsd	.LC5(%rip), %xmm0
 172      00000000 
 173 00e2 F20F1144 		movsd	%xmm0, 56(%rsp)
 173      2438
 174              	.LVL21:
 175 00e8 0F1F8400 		.p2align 4,,10
 175      00000000 
 176              		.p2align 3
 177              	.L7:
 178              	.LBB30:
 179              	.LBB28:
 180              		.loc 1 58 0 discriminator 2
 181 00f0 660FEFE4 		pxor	%xmm4, %xmm4
 182              		.loc 1 62 0 discriminator 2
 183 00f4 F20F104C 		movsd	56(%rsp), %xmm1
 183      2438
 184              		.loc 1 58 0 discriminator 2
 185 00fa F20F2AE3 		cvtsi2sd	%ebx, %xmm4
 186 00fe F20F5E25 		divsd	.LC6(%rip), %xmm4
 186      00000000 
 187              	.LVL22:
 188              		.loc 1 62 0 discriminator 2
 189 0106 660F28C4 		movapd	%xmm4, %xmm0
 190 010a F20F1164 		movsd	%xmm4, 8(%rsp)
 190      2408
 191 0110 E8000000 		call	pow
 191      00
 192              	.LVL23:
 193              		.loc 1 61 0 discriminator 2
 194 0115 F20F1064 		movsd	8(%rsp), %xmm4
 194      2408
 195              		.loc 1 62 0 discriminator 2
 196 011b F20F1144 		movsd	%xmm0, 24(%rsp)
 196      2418
 197              		.loc 1 61 0 discriminator 2
 198 0121 F20F104C 		movsd	48(%rsp), %xmm1
 198      2430
 199 0127 660F28C4 		movapd	%xmm4, %xmm0
 200 012b F20F1164 		movsd	%xmm4, 16(%rsp)
 200      2410
 201 0131 E8000000 		call	pow
 201      00
 202              	.LVL24:
 203              		.loc 1 60 0 discriminator 2
 204 0136 F20F1064 		movsd	16(%rsp), %xmm4
 204      2410
 205              		.loc 1 61 0 discriminator 2
 206 013c F20F1144 		movsd	%xmm0, 8(%rsp)
 206      2408
 207              	.LVL25:
 208              		.loc 1 60 0 discriminator 2
 209 0142 F20F104C 		movsd	40(%rsp), %xmm1
 209      2428
 210 0148 660F28C4 		movapd	%xmm4, %xmm0
 211 014c E8000000 		call	pow
 211      00
 212              	.LVL26:
 213              		.loc 1 62 0 discriminator 2
 214 0151 F20F106C 		movsd	32(%rsp), %xmm5
 214      2420
 215 0157 8D7B20   		leal	32(%rbx), %edi
 216 015a F20F105C 		movsd	24(%rsp), %xmm3
 216      2418
 217              	.LBE28:
 218              		.loc 1 57 0 discriminator 2
 219 0160 83C301   		addl	$1, %ebx
 220              	.LVL27:
 221              	.LBB29:
 222              		.loc 1 62 0 discriminator 2
 223 0163 F20F1054 		movsd	8(%rsp), %xmm2
 223      2408
 224 0169 F20F59DD 		mulsd	%xmm5, %xmm3
 225 016d F20F59D5 		mulsd	%xmm5, %xmm2
 226 0171 F20F59C5 		mulsd	%xmm5, %xmm0
 227 0175 F20F581D 		addsd	.LC7(%rip), %xmm3
 227      00000000 
 228 017d F20F5815 		addsd	.LC7(%rip), %xmm2
 228      00000000 
 229 0185 F20F5805 		addsd	.LC7(%rip), %xmm0
 229      00000000 
 230 018d F20F2CCB 		cvttsd2si	%xmm3, %ecx
 231 0191 F20F2CD2 		cvttsd2si	%xmm2, %edx
 232 0195 F20F2CF0 		cvttsd2si	%xmm0, %esi
 233 0199 0FB6C9   		movzbl	%cl, %ecx
 234 019c 0FB6D2   		movzbl	%dl, %edx
 235 019f 400FB6F6 		movzbl	%sil, %esi
 236 01a3 E8000000 		call	_ZN2Fl9set_colorEjhhh
 236      00
 237              	.LVL28:
 238              	.LBE29:
 239              		.loc 1 57 0 discriminator 2
 240 01a8 83FB18   		cmpl	$24, %ebx
 241 01ab 0F853FFF 		jne	.L7
 241      FFFF
 242              	.LBE30:
 243              		.loc 1 64 0
 244 01b1 4883C448 		addq	$72, %rsp
 245              		.cfi_remember_state
 246              		.cfi_def_cfa_offset 24
 247 01b5 5B       		popq	%rbx
 248              		.cfi_def_cfa_offset 16
 249              	.LVL29:
 250 01b6 5D       		popq	%rbp
 251              		.cfi_def_cfa_offset 8
 252 01b7 C3       		ret
 253              	.LVL30:
 254              	.L9:
 255              		.cfi_restore_state
 256 01b8 F20F103D 		movsd	.LC4(%rip), %xmm7
 256      00000000 
 257 01c0 F20F1005 		movsd	.LC3(%rip), %xmm0
 257      00000000 
 258 01c8 F20F117C 		movsd	%xmm7, 32(%rsp)
 258      2420
 259 01ce E983FEFF 		jmp	.L4
 259      FF
 260              		.cfi_endproc
 261              	.LFE488:
 263              		.section	.text.unlikely._ZN2Fl10backgroundEhhh
 264              	.LCOLDE8:
 265              		.section	.text._ZN2Fl10backgroundEhhh
 266              	.LHOTE8:
 267              		.section	.text.unlikely._ZN2Fl11background2Ehhh,"ax",@progbits
 268              		.align 2
 269              	.LCOLDB9:
 270              		.section	.text._ZN2Fl11background2Ehhh,"ax",@progbits
 271              	.LHOTB9:
 272              		.align 2
 273              		.p2align 4,,15
 274              		.globl	_ZN2Fl11background2Ehhh
 276              	_ZN2Fl11background2Ehhh:
 277              	.LFB490:
 278              		.loc 1 78 0
 279              		.cfi_startproc
 280              	.LVL31:
 281 0000 4883EC08 		subq	$8, %rsp
 282              		.cfi_def_cfa_offset 16
 283              		.loc 1 81 0
 284 0004 0FB6CA   		movzbl	%dl, %ecx
 285 0007 400FB6D6 		movzbl	%sil, %edx
 286              	.LVL32:
 287 000b 400FB6F7 		movzbl	%dil, %esi
 288              	.LVL33:
 289 000f BF070000 		movl	$7, %edi
 289      00
 290              	.LVL34:
 291              		.loc 1 79 0
 292 0014 C6050000 		movb	$1, _ZL10fl_bg2_set(%rip)
 292      000001
 293              		.loc 1 81 0
 294 001b E8000000 		call	_ZN2Fl9set_colorEjhhh
 294      00
 295              	.LVL35:
 296              		.loc 1 82 0
 297 0020 BE070000 		movl	$7, %esi
 297      00
 298 0025 31FF     		xorl	%edi, %edi
 299 0027 E8000000 		call	_Z11fl_contrastjj
 299      00
 300              	.LVL36:
 301 002c 89C7     		movl	%eax, %edi
 302 002e E8000000 		call	_ZN2Fl9get_colorEj
 302      00
 303              	.LVL37:
 304              		.loc 1 83 0
 305 0033 31FF     		xorl	%edi, %edi
 306 0035 89C6     		movl	%eax, %esi
 307              		.loc 1 84 0
 308 0037 4883C408 		addq	$8, %rsp
 309              		.cfi_def_cfa_offset 8
 310              		.loc 1 83 0
 311 003b E9000000 		jmp	_ZN2Fl9set_colorEjj
 311      00
 312              	.LVL38:
 313              		.cfi_endproc
 314              	.LFE490:
 316              		.section	.text.unlikely._ZN2Fl11background2Ehhh
 317              	.LCOLDE9:
 318              		.section	.text._ZN2Fl11background2Ehhh
 319              	.LHOTE9:
 320              		.section	.rodata.str1.1,"aMS",@progbits,1
 321              	.LC10:
 322 0000 556E6B6E 		.string	"Unknown color: %s"
 322      6F776E20 
 322      636F6C6F 
 322      723A2025 
 322      7300
 323              		.section	.text.unlikely._ZL11getsyscolorPKcS0_S0_S0_PFvhhhE,"ax",@progbits
 324              	.LCOLDB11:
 325              		.section	.text._ZL11getsyscolorPKcS0_S0_S0_PFvhhhE,"ax",@progbits
 326              	.LHOTB11:
 327              		.p2align 4,,15
 329              	_ZL11getsyscolorPKcS0_S0_S0_PFvhhhE:
 330              	.LFB493:
 331              		.loc 1 216 0
 332              		.cfi_startproc
 333              	.LVL39:
 334 0000 55       		pushq	%rbp
 335              		.cfi_def_cfa_offset 16
 336              		.cfi_offset 6, -16
 337 0001 53       		pushq	%rbx
 338              		.cfi_def_cfa_offset 24
 339              		.cfi_offset 3, -24
 340 0002 4C89C5   		movq	%r8, %rbp
 341 0005 4889D3   		movq	%rdx, %rbx
 342 0008 4883EC38 		subq	$56, %rsp
 343              		.cfi_def_cfa_offset 80
 344              		.loc 1 216 0
 345 000c 64488B04 		movq	%fs:40, %rax
 345      25280000 
 345      00
 346 0015 48894424 		movq	%rax, 40(%rsp)
 346      28
 347 001a 31C0     		xorl	%eax, %eax
 348              		.loc 1 217 0
 349 001c 4885D2   		testq	%rdx, %rdx
 350 001f 745F     		je	.L26
 351              	.LVL40:
 352              	.L20:
 353              		.loc 1 222 0
 354 0021 488B3500 		movq	fl_colormap(%rip), %rsi
 354      000000
 355 0028 488B3D00 		movq	fl_display(%rip), %rdi
 355      000000
 356 002f 488D4C24 		leaq	16(%rsp), %rcx
 356      10
 357 0034 4889DA   		movq	%rbx, %rdx
 358 0037 E8000000 		call	XParseColor
 358      00
 359              	.LVL41:
 360 003c 85C0     		testl	%eax, %eax
 361 003e 7430     		je	.L27
 362              		.loc 1 225 0
 363 0040 0FB65424 		movzbl	29(%rsp), %edx
 363      1D
 364 0045 0FB67424 		movzbl	27(%rsp), %esi
 364      1B
 365 004a 0FB67C24 		movzbl	25(%rsp), %edi
 365      19
 366 004f FFD5     		call	*%rbp
 367              	.LVL42:
 368              	.L19:
 369              		.loc 1 226 0
 370 0051 488B4424 		movq	40(%rsp), %rax
 370      28
 371 0056 64483304 		xorq	%fs:40, %rax
 371      25280000 
 371      00
 372 005f 754A     		jne	.L28
 373 0061 4883C438 		addq	$56, %rsp
 374              		.cfi_remember_state
 375              		.cfi_def_cfa_offset 24
 376 0065 5B       		popq	%rbx
 377              		.cfi_def_cfa_offset 16
 378              	.LVL43:
 379 0066 5D       		popq	%rbp
 380              		.cfi_def_cfa_offset 8
 381              	.LVL44:
 382 0067 C3       		ret
 383              	.LVL45:
 384 0068 0F1F8400 		.p2align 4,,10
 384      00000000 
 385              		.p2align 3
 386              	.L27:
 387              		.cfi_restore_state
 388              		.loc 1 223 0
 389 0070 4889DE   		movq	%rbx, %rsi
 390 0073 BF000000 		movl	$.LC10, %edi
 390      00
 391 0078 FF150000 		call	*_ZN2Fl5errorE(%rip)
 391      0000
 392              	.LVL46:
 393 007e EBD1     		jmp	.L19
 394              	.LVL47:
 395              		.p2align 4,,10
 396              		.p2align 3
 397              	.L26:
 398              		.loc 1 218 0
 399 0080 4889F2   		movq	%rsi, %rdx
 400              	.LVL48:
 401 0083 4889FE   		movq	%rdi, %rsi
 402              	.LVL49:
 403 0086 488B3D00 		movq	fl_display(%rip), %rdi
 403      000000
 404              	.LVL50:
 405 008d 48894C24 		movq	%rcx, 8(%rsp)
 405      08
 406 0092 E8000000 		call	XGetDefault
 406      00
 407              	.LVL51:
 408              		.loc 1 219 0
 409 0097 488B4C24 		movq	8(%rsp), %rcx
 409      08
 410              		.loc 1 218 0
 411 009c 4889C3   		movq	%rax, %rbx
 412              	.LVL52:
 413              		.loc 1 219 0
 414 009f 4885C0   		testq	%rax, %rax
 415 00a2 480F44D9 		cmove	%rcx, %rbx
 416 00a6 E976FFFF 		jmp	.L20
 416      FF
 417              	.LVL53:
 418              	.L28:
 419              		.loc 1 226 0
 420 00ab E8000000 		call	__stack_chk_fail
 420      00
 421              	.LVL54:
 422              		.cfi_endproc
 423              	.LFE493:
 425              		.section	.text.unlikely._ZL11getsyscolorPKcS0_S0_S0_PFvhhhE
 426              	.LCOLDE11:
 427              		.section	.text._ZL11getsyscolorPKcS0_S0_S0_PFvhhhE
 428              	.LHOTE11:
 429              		.section	.text.unlikely._Z14fl_parse_colorPKcRhS1_S1_,"ax",@progbits
 430              	.LCOLDB12:
 431              		.section	.text._Z14fl_parse_colorPKcRhS1_S1_,"ax",@progbits
 432              	.LHOTB12:
 433              		.p2align 4,,15
 434              		.globl	_Z14fl_parse_colorPKcRhS1_S1_
 436              	_Z14fl_parse_colorPKcRhS1_S1_:
 437              	.LFB492:
 438              		.loc 1 122 0
 439              		.cfi_startproc
 440              	.LVL55:
 441 0000 4155     		pushq	%r13
 442              		.cfi_def_cfa_offset 16
 443              		.cfi_offset 13, -16
 444 0002 4154     		pushq	%r12
 445              		.cfi_def_cfa_offset 24
 446              		.cfi_offset 12, -24
 447 0004 4989F5   		movq	%rsi, %r13
 448 0007 55       		pushq	%rbp
 449              		.cfi_def_cfa_offset 32
 450              		.cfi_offset 6, -32
 451 0008 53       		pushq	%rbx
 452              		.cfi_def_cfa_offset 40
 453              		.cfi_offset 3, -40
 454 0009 4889FB   		movq	%rdi, %rbx
 455 000c 4989D4   		movq	%rdx, %r12
 456 000f 4889CD   		movq	%rcx, %rbp
 457 0012 4883EC28 		subq	$40, %rsp
 458              		.cfi_def_cfa_offset 80
 459              		.loc 1 124 0
 460 0016 488B3D00 		movq	fl_display(%rip), %rdi
 460      000000
 461              	.LVL56:
 462              		.loc 1 122 0
 463 001d 64488B04 		movq	%fs:40, %rax
 463      25280000 
 463      00
 464 0026 48894424 		movq	%rax, 24(%rsp)
 464      18
 465 002b 31C0     		xorl	%eax, %eax
 466              		.loc 1 124 0
 467 002d 4885FF   		testq	%rdi, %rdi
 468 0030 7456     		je	.L37
 469              	.LVL57:
 470              	.L30:
 471              		.loc 1 125 0
 472 0032 488B3500 		movq	fl_colormap(%rip), %rsi
 472      000000
 473 0039 4889E1   		movq	%rsp, %rcx
 474 003c 4889DA   		movq	%rbx, %rdx
 475 003f E8000000 		call	XParseColor
 475      00
 476              	.LVL58:
 477 0044 85C0     		testl	%eax, %eax
 478 0046 741F     		je	.L31
 479              		.loc 1 126 0
 480 0048 0FB64424 		movzbl	9(%rsp), %eax
 480      09
 481 004d 41884500 		movb	%al, 0(%r13)
 482              		.loc 1 127 0
 483 0051 0FB64424 		movzbl	11(%rsp), %eax
 483      0B
 484 0056 41880424 		movb	%al, (%r12)
 485              		.loc 1 128 0
 486 005a 0FB64424 		movzbl	13(%rsp), %eax
 486      0D
 487 005f 884500   		movb	%al, 0(%rbp)
 488              		.loc 1 129 0
 489 0062 B8010000 		movl	$1, %eax
 489      00
 490              	.L31:
 491              		.loc 1 131 0
 492 0067 488B5424 		movq	24(%rsp), %rdx
 492      18
 493 006c 64483314 		xorq	%fs:40, %rdx
 493      25280000 
 493      00
 494 0075 751F     		jne	.L38
 495 0077 4883C428 		addq	$40, %rsp
 496              		.cfi_remember_state
 497              		.cfi_def_cfa_offset 40
 498 007b 5B       		popq	%rbx
 499              		.cfi_def_cfa_offset 32
 500              	.LVL59:
 501 007c 5D       		popq	%rbp
 502              		.cfi_def_cfa_offset 24
 503              	.LVL60:
 504 007d 415C     		popq	%r12
 505              		.cfi_def_cfa_offset 16
 506              	.LVL61:
 507 007f 415D     		popq	%r13
 508              		.cfi_def_cfa_offset 8
 509              	.LVL62:
 510 0081 C3       		ret
 511              	.LVL63:
 512              		.p2align 4,,10
 513 0082 660F1F44 		.p2align 3
 513      0000
 514              	.L37:
 515              		.cfi_restore_state
 516              		.loc 1 124 0 discriminator 1
 517 0088 E8000000 		call	_Z15fl_open_displayv
 517      00
 518              	.LVL64:
 519 008d 488B3D00 		movq	fl_display(%rip), %rdi
 519      000000
 520 0094 EB9C     		jmp	.L30
 521              	.L38:
 522              		.loc 1 131 0
 523 0096 E8000000 		call	__stack_chk_fail
 523      00
 524              	.LVL65:
 525              		.cfi_endproc
 526              	.LFE492:
 528              		.section	.text.unlikely._Z14fl_parse_colorPKcRhS1_S1_
 529              	.LCOLDE12:
 530              		.section	.text._Z14fl_parse_colorPKcRhS1_S1_
 531              	.LHOTE12:
 532              		.section	.rodata.str1.1
 533              	.LC13:
 534 0012 666C746B 		.string	"fltk"
 534      00
 535              	.LC14:
 536 0017 23666666 		.string	"#ffffff"
 536      66666600 
 537              	.LC15:
 538 001f 6261636B 		.string	"background"
 538      67726F75 
 538      6E6400
 539              	.LC16:
 540 002a 54657874 		.string	"Text"
 540      00
 541              	.LC17:
 542 002f 23303030 		.string	"#000000"
 542      30303000 
 543              	.LC18:
 544 0037 666F7265 		.string	"foreground"
 544      67726F75 
 544      6E6400
 545              	.LC19:
 546 0042 23633063 		.string	"#c0c0c0"
 546      30633000 
 547              	.LC20:
 548 004a 23303030 		.string	"#000080"
 548      30383000 
 549              	.LC21:
 550 0052 73656C65 		.string	"selectBackground"
 550      63744261 
 550      636B6772 
 550      6F756E64 
 550      00
 551              		.section	.text.unlikely._ZN2Fl17get_system_colorsEv,"ax",@progbits
 552              		.align 2
 553              	.LCOLDB22:
 554              		.section	.text._ZN2Fl17get_system_colorsEv,"ax",@progbits
 555              	.LHOTB22:
 556              		.align 2
 557              		.p2align 4,,15
 558              		.globl	_ZN2Fl17get_system_colorsEv
 560              	_ZN2Fl17get_system_colorsEv:
 561              	.LFB494:
 562              		.loc 1 229 0
 563              		.cfi_startproc
 564 0000 53       		pushq	%rbx
 565              		.cfi_def_cfa_offset 16
 566              		.cfi_offset 3, -16
 567              		.loc 1 230 0
 568 0001 E8000000 		call	_Z15fl_open_displayv
 568      00
 569              	.LVL66:
 570              		.loc 1 232 0
 571 0006 E8000000 		call	_ZN2Fl12first_windowEv
 571      00
 572              	.LVL67:
 573 000b 4885C0   		testq	%rax, %rax
 574 000e 7470     		je	.L42
 575              		.loc 1 232 0 is_stmt 0 discriminator 1
 576 0010 E8000000 		call	_ZN2Fl12first_windowEv
 576      00
 577              	.LVL68:
 578 0015 4889C7   		movq	%rax, %rdi
 579 0018 E8000000 		call	_ZNK9Fl_Window6xclassEv
 579      00
 580              	.LVL69:
 581              		.loc 1 233 0 is_stmt 1 discriminator 1
 582 001d 4885C0   		testq	%rax, %rax
 583              		.loc 1 232 0 discriminator 1
 584 0020 4889C3   		movq	%rax, %rbx
 585              	.LVL70:
 586              		.loc 1 233 0 discriminator 1
 587 0023 745B     		je	.L42
 588              		.loc 1 234 0
 589 0025 803D0000 		cmpb	$0, _ZL10fl_bg2_set(%rip)
 589      000000
 590 002c 7460     		je	.L50
 591              	.LVL71:
 592              	.L43:
 593              		.loc 1 235 0
 594 002e 803D0000 		cmpb	$0, _ZL9fl_fg_set(%rip)
 594      000000
 595 0035 0F847D00 		je	.L51
 595      0000
 596              	.L44:
 597              		.loc 1 236 0
 598 003b 803D0000 		cmpb	$0, _ZL9fl_bg_set(%rip)
 598      000000
 599 0042 751F     		jne	.L45
 600              		.loc 1 236 0 is_stmt 0 discriminator 1
 601 0044 488B1500 		movq	fl_bg(%rip), %rdx
 601      000000
 602 004b 41B80000 		movl	$_ZN2Fl10backgroundEhhh, %r8d
 602      0000
 603 0051 B9000000 		movl	$.LC19, %ecx
 603      00
 604 0056 BE000000 		movl	$.LC15, %esi
 604      00
 605 005b 4889DF   		movq	%rbx, %rdi
 606 005e E8000000 		call	_ZL11getsyscolorPKcS0_S0_S0_PFvhhhE
 606      00
 607              	.LVL72:
 608              	.L45:
 609              		.loc 1 238 0 is_stmt 1
 610 0063 5B       		popq	%rbx
 611              		.cfi_remember_state
 612              		.cfi_def_cfa_offset 8
 613              	.LVL73:
 614              		.loc 1 237 0
 615 0064 41B80000 		movl	$_ZL19set_selection_colorhhh, %r8d
 615      0000
 616 006a B9000000 		movl	$.LC20, %ecx
 616      00
 617 006f 31D2     		xorl	%edx, %edx
 618 0071 BE000000 		movl	$.LC21, %esi
 618      00
 619 0076 BF000000 		movl	$.LC16, %edi
 619      00
 620 007b E9000000 		jmp	_ZL11getsyscolorPKcS0_S0_S0_PFvhhhE
 620      00
 621              	.LVL74:
 622              		.p2align 4,,10
 623              		.p2align 3
 624              	.L42:
 625              		.cfi_restore_state
 626              		.loc 1 234 0
 627 0080 803D0000 		cmpb	$0, _ZL10fl_bg2_set(%rip)
 627      000000
 628              		.loc 1 233 0
 629 0087 BB000000 		movl	$.LC13, %ebx
 629      00
 630              	.LVL75:
 631              		.loc 1 234 0
 632 008c 75A0     		jne	.L43
 633              	.L50:
 634              		.loc 1 234 0 is_stmt 0 discriminator 1
 635 008e 488B1500 		movq	fl_bg2(%rip), %rdx
 635      000000
 636 0095 41B80000 		movl	$_ZN2Fl11background2Ehhh, %r8d
 636      0000
 637 009b B9000000 		movl	$.LC14, %ecx
 637      00
 638 00a0 BE000000 		movl	$.LC15, %esi
 638      00
 639 00a5 BF000000 		movl	$.LC16, %edi
 639      00
 640 00aa E8000000 		call	_ZL11getsyscolorPKcS0_S0_S0_PFvhhhE
 640      00
 641              	.LVL76:
 642              		.loc 1 235 0 is_stmt 1 discriminator 1
 643 00af 803D0000 		cmpb	$0, _ZL9fl_fg_set(%rip)
 643      000000
 644 00b6 7583     		jne	.L44
 645              	.L51:
 646 00b8 488B1500 		movq	fl_fg(%rip), %rdx
 646      000000
 647 00bf 41B80000 		movl	$_ZN2Fl10foregroundEhhh, %r8d
 647      0000
 648 00c5 B9000000 		movl	$.LC17, %ecx
 648      00
 649 00ca BE000000 		movl	$.LC18, %esi
 649      00
 650 00cf 4889DF   		movq	%rbx, %rdi
 651 00d2 E8000000 		call	_ZL11getsyscolorPKcS0_S0_S0_PFvhhhE
 651      00
 652              	.LVL77:
 653 00d7 E95FFFFF 		jmp	.L44
 653      FF
 654              		.cfi_endproc
 655              	.LFE494:
 657              		.section	.text.unlikely._ZN2Fl17get_system_colorsEv
 658              	.LCOLDE22:
 659              		.section	.text._ZN2Fl17get_system_colorsEv
 660              	.LHOTE22:
 661              		.section	.rodata.str1.1
 662              	.LC23:
 663 0063 4F6F2E00 		.string	"Oo."
 664              	.LC24:
 665 0067 706C6173 		.string	"plastic"
 665      74696300 
 666              	.LC25:
 667 006f 25632063 		.string	"%c c #%02x%02x%02x"
 667      20232530 
 667      32782530 
 667      32782530 
 667      327800
 668              	.LC26:
 669 0082 67746B2B 		.string	"gtk+"
 669      00
 670              	.LC27:
 671 0087 676C6561 		.string	"gleam"
 671      6D00
 672              		.section	.text.unlikely._ZN2Fl13reload_schemeEv,"ax",@progbits
 673              		.align 2
 674              	.LCOLDB28:
 675              		.section	.text._ZN2Fl13reload_schemeEv,"ax",@progbits
 676              	.LHOTB28:
 677              		.align 2
 678              		.p2align 4,,15
 679              		.globl	_ZN2Fl13reload_schemeEv
 681              	_ZN2Fl13reload_schemeEv:
 682              	.LFB496:
 683              		.loc 1 326 0
 684              		.cfi_startproc
 685 0000 4156     		pushq	%r14
 686              		.cfi_def_cfa_offset 16
 687              		.cfi_offset 14, -16
 688 0002 4155     		pushq	%r13
 689              		.cfi_def_cfa_offset 24
 690              		.cfi_offset 13, -24
 691 0004 4154     		pushq	%r12
 692              		.cfi_def_cfa_offset 32
 693              		.cfi_offset 12, -32
 694 0006 55       		pushq	%rbp
 695              		.cfi_def_cfa_offset 40
 696              		.cfi_offset 6, -40
 697 0007 53       		pushq	%rbx
 698              		.cfi_def_cfa_offset 48
 699              		.cfi_offset 3, -48
 700 0008 4883EC10 		subq	$16, %rsp
 701              		.cfi_def_cfa_offset 64
 702              	.LBB31:
 703              		.loc 1 329 0
 704 000c 488B3D00 		movq	_ZN2Fl7scheme_E(%rip), %rdi
 704      000000
 705              	.LBE31:
 706              		.loc 1 326 0
 707 0013 64488B04 		movq	%fs:40, %rax
 707      25280000 
 707      00
 708 001c 48894424 		movq	%rax, 8(%rsp)
 708      08
 709 0021 31C0     		xorl	%eax, %eax
 710              	.LBB43:
 711              		.loc 1 329 0
 712 0023 4885FF   		testq	%rdi, %rdi
 713 0026 0F841402 		je	.L53
 713      0000
 714              		.loc 1 329 0 is_stmt 0 discriminator 1
 715 002c BE000000 		movl	$.LC24, %esi
 715      00
 716 0031 E8000000 		call	fl_ascii_strcasecmp
 716      00
 717              	.LVL78:
 718 0036 85C0     		testl	%eax, %eax
 719 0038 0F842A01 		je	.L54
 719      0000
 720              		.loc 1 375 0 is_stmt 1
 721 003e 488B3D00 		movq	_ZN2Fl7scheme_E(%rip), %rdi
 721      000000
 722 0045 4885FF   		testq	%rdi, %rdi
 723 0048 0F84F201 		je	.L53
 723      0000
 724              		.loc 1 375 0 is_stmt 0 discriminator 1
 725 004e BE000000 		movl	$.LC26, %esi
 725      00
 726 0053 E8000000 		call	fl_ascii_strcasecmp
 726      00
 727              	.LVL79:
 728 0058 85C0     		testl	%eax, %eax
 729 005a 0F848003 		je	.L59
 729      0000
 730 0060 488B3D00 		movq	_ZN2Fl7scheme_E(%rip), %rdi
 730      000000
 731              		.loc 1 396 0 is_stmt 1
 732 0067 4885FF   		testq	%rdi, %rdi
 733 006a 0F84D001 		je	.L53
 733      0000
 734              		.loc 1 396 0 is_stmt 0 discriminator 1
 735 0070 BE000000 		movl	$.LC27, %esi
 735      00
 736 0075 E8000000 		call	fl_ascii_strcasecmp
 736      00
 737              	.LVL80:
 738 007a 85C0     		testl	%eax, %eax
 739 007c 0F85BE01 		jne	.L53
 739      0000
 740              		.loc 1 398 0 is_stmt 1
 741 0082 488B3D00 		movq	_ZN2Fl10scheme_bg_E(%rip), %rdi
 741      000000
 742 0089 4885FF   		testq	%rdi, %rdi
 743 008c 7411     		je	.L72
 744              		.loc 1 399 0 discriminator 1
 745 008e 488B07   		movq	(%rdi), %rax
 746 0091 FF5008   		call	*8(%rax)
 747              	.LVL81:
 748              		.loc 1 400 0 discriminator 1
 749 0094 48C70500 		movq	$0, _ZN2Fl10scheme_bg_E(%rip)
 749      00000000 
 749      000000
 750              	.L72:
 751              		.loc 1 403 0
 752 009f E8000000 		call	_Z25fl_define_FL_GLEAM_UP_BOXv
 752      00
 753              	.LVL82:
 754 00a4 8D7002   		leal	2(%rax), %esi
 755 00a7 BF040000 		movl	$4, %edi
 755      00
 756 00ac E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 756      00
 757              	.LVL83:
 758              		.loc 1 404 0
 759 00b1 E8000000 		call	_Z25fl_define_FL_GLEAM_UP_BOXv
 759      00
 760              	.LVL84:
 761 00b6 8D7003   		leal	3(%rax), %esi
 762 00b9 BF050000 		movl	$5, %edi
 762      00
 763 00be E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 763      00
 764              	.LVL85:
 765              		.loc 1 405 0
 766 00c3 E8000000 		call	_Z25fl_define_FL_GLEAM_UP_BOXv
 766      00
 767              	.LVL86:
 768 00c8 8D7002   		leal	2(%rax), %esi
 769 00cb BF080000 		movl	$8, %edi
 769      00
 770 00d0 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 770      00
 771              	.LVL87:
 772              		.loc 1 406 0
 773 00d5 E8000000 		call	_Z25fl_define_FL_GLEAM_UP_BOXv
 773      00
 774              	.LVL88:
 775 00da 8D7003   		leal	3(%rax), %esi
 776 00dd BF090000 		movl	$9, %edi
 776      00
 777 00e2 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 777      00
 778              	.LVL89:
 779              		.loc 1 408 0
 780 00e7 E8000000 		call	_Z25fl_define_FL_GLEAM_UP_BOXv
 780      00
 781              	.LVL90:
 782 00ec BF020000 		movl	$2, %edi
 782      00
 783 00f1 89C6     		movl	%eax, %esi
 784 00f3 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 784      00
 785              	.LVL91:
 786              		.loc 1 409 0
 787 00f8 E8000000 		call	_Z25fl_define_FL_GLEAM_UP_BOXv
 787      00
 788              	.LVL92:
 789 00fd 8D7001   		leal	1(%rax), %esi
 790 0100 BF030000 		movl	$3, %edi
 790      00
 791 0105 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 791      00
 792              	.LVL93:
 793              		.loc 1 410 0
 794 010a E8000000 		call	_Z25fl_define_FL_GLEAM_UP_BOXv
 794      00
 795              	.LVL94:
 796 010f 8D7004   		leal	4(%rax), %esi
 797 0112 BF060000 		movl	$6, %edi
 797      00
 798 0117 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 798      00
 799              	.LVL95:
 800              		.loc 1 411 0
 801 011c E8000000 		call	_Z25fl_define_FL_GLEAM_UP_BOXv
 801      00
 802              	.LVL96:
 803 0121 8D7005   		leal	5(%rax), %esi
 804 0124 BF070000 		movl	$7, %edi
 804      00
 805 0129 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 805      00
 806              	.LVL97:
 807              		.loc 1 412 0
 808 012e E8000000 		call	_Z25fl_define_FL_GLEAM_UP_BOXv
 808      00
 809              	.LVL98:
 810 0133 8D7006   		leal	6(%rax), %esi
 811 0136 BF160000 		movl	$22, %edi
 811      00
 812 013b E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 812      00
 813              	.LVL99:
 814              		.loc 1 413 0
 815 0140 E8000000 		call	_Z25fl_define_FL_GLEAM_UP_BOXv
 815      00
 816              	.LVL100:
 817 0145 8D7007   		leal	7(%rax), %esi
 818 0148 BF170000 		movl	$23, %edi
 818      00
 819 014d E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 819      00
 820              	.LVL101:
 821              		.loc 1 416 0
 822 0152 BF0F0000 		movl	$15, %edi
 822      00
 823 0157 E8000000 		call	_ZN2Fl14scrollbar_sizeEi
 823      00
 824              	.LVL102:
 825 015c E9590300 		jmp	.L58
 825      00
 826              		.p2align 4,,10
 827 0161 0F1F8000 		.p2align 3
 827      000000
 828              	.L54:
 829              	.LBB32:
 830              		.loc 1 338 0
 831 0168 488D4C24 		leaq	7(%rsp), %rcx
 831      07
 832 016d 488D5424 		leaq	6(%rsp), %rdx
 832      06
 833 0172 488D7424 		leaq	5(%rsp), %rsi
 833      05
 834 0177 BF310000 		movl	$49, %edi
 834      00
 835 017c BB000000 		movl	$.LC23, %ebx
 835      00
 836 0181 41BD0000 		movl	$_ZL9tile_cmap, %r13d
 836      0000
 837 0187 E8000000 		call	_ZN2Fl9get_colorEjRhS0_S0_
 837      00
 838              	.LVL103:
 839 018c 41BE0000 		movl	$_ZZN2Fl13reload_schemeEvE6levels, %r14d
 839      0000
 840 0192 41BC0000 		movl	$.LC23+3, %r12d
 840      0000
 841 0198 B9FF0000 		movl	$255, %ecx
 841      00
 842              		.loc 1 343 0
 843 019d BD09CB3D 		movl	$-1925330167, %ebp
 843      8D
 844              	.LVL104:
 845              	.L68:
 846 01a2 440FB64C 		movzbl	5(%rsp), %r9d
 846      2405
 847              		.loc 1 346 0
 848 01a8 0FB67424 		movzbl	6(%rsp), %esi
 848      06
 849              	.LBB33:
 850              	.LBB34:
 851              		.file 2 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
 852              		.loc 2 34 0
 853 01ad 4C89EF   		movq	%r13, %rdi
 854              	.LBE34:
 855              	.LBE33:
 856              		.loc 1 343 0
 857 01b0 440FAFC9 		imull	%ecx, %r9d
 858              		.loc 1 346 0
 859 01b4 0FAFF1   		imull	%ecx, %esi
 860              		.loc 1 343 0
 861 01b7 4489C8   		movl	%r9d, %eax
 862 01ba F7ED     		imull	%ebp
 863              		.loc 1 346 0
 864 01bc 89F0     		movl	%esi, %eax
 865              		.loc 1 343 0
 866 01be 4101D1   		addl	%edx, %r9d
 867              		.loc 1 346 0
 868 01c1 F7ED     		imull	%ebp
 869              		.loc 1 343 0
 870 01c3 41C1F907 		sarl	$7, %r9d
 871              	.LVL105:
 872              		.loc 1 346 0
 873 01c7 01D6     		addl	%edx, %esi
 874              		.loc 1 349 0
 875 01c9 0FB65424 		movzbl	7(%rsp), %edx
 875      07
 876              		.loc 1 346 0
 877 01ce C1FE07   		sarl	$7, %esi
 878              	.LVL106:
 879              		.loc 1 349 0
 880 01d1 0FAFCA   		imull	%edx, %ecx
 881 01d4 89C8     		movl	%ecx, %eax
 882 01d6 F7ED     		imull	%ebp
 883              	.LBB38:
 884              	.LBB35:
 885              		.loc 2 34 0
 886 01d8 B8FF0000 		movl	$255, %eax
 886      00
 887              	.LBE35:
 888              	.LBE38:
 889              		.loc 1 349 0
 890 01dd 01D1     		addl	%edx, %ecx
 891              	.LBB39:
 892              	.LBB36:
 893              		.loc 2 34 0
 894 01df 48C7C2FF 		movq	$-1, %rdx
 894      FFFFFF
 895              	.LBE36:
 896              	.LBE39:
 897              		.loc 1 349 0
 898 01e6 C1F907   		sarl	$7, %ecx
 899              	.LVL107:
 900              	.LBB40:
 901              	.LBB37:
 902              		.loc 2 34 0
 903 01e9 4181F9FF 		cmpl	$255, %r9d
 903      000000
 904 01f0 440F4FC8 		cmovg	%eax, %r9d
 905              	.LVL108:
 906 01f4 81F9FF00 		cmpl	$255, %ecx
 906      0000
 907 01fa 0F4FC8   		cmovg	%eax, %ecx
 908              	.LVL109:
 909 01fd 81FEFF00 		cmpl	$255, %esi
 909      0000
 910 0203 0F4FF0   		cmovg	%eax, %esi
 911              	.LVL110:
 912 0206 51       		pushq	%rcx
 913              		.cfi_def_cfa_offset 72
 914 0207 31C0     		xorl	%eax, %eax
 915 0209 56       		pushq	%rsi
 916              		.cfi_def_cfa_offset 80
 917 020a 440FBE03 		movsbl	(%rbx), %r8d
 918 020e B9000000 		movl	$.LC25, %ecx
 918      00
 919 0213 BE010000 		movl	$1, %esi
 919      00
 920 0218 4883C301 		addq	$1, %rbx
 921              	.LVL111:
 922 021c 4983C520 		addq	$32, %r13
 923 0220 4983C601 		addq	$1, %r14
 924 0224 E8000000 		call	__sprintf_chk
 924      00
 925              	.LVL112:
 926              	.LBE37:
 927              	.LBE40:
 928              		.loc 1 342 0
 929 0229 4939DC   		cmpq	%rbx, %r12
 930 022c 58       		popq	%rax
 931              		.cfi_def_cfa_offset 72
 932 022d 5A       		popq	%rdx
 933              		.cfi_def_cfa_offset 64
 934 022e 0F84FC02 		je	.L86
 934      0000
 935 0234 410FB60E 		movzbl	(%r14), %ecx
 936 0238 E965FFFF 		jmp	.L68
 936      FF
 937 023d 0F1F00   		.p2align 4,,10
 938              		.p2align 3
 939              	.L53:
 940              	.LBE32:
 941              		.loc 1 419 0
 942 0240 488B3D00 		movq	_ZN2Fl10scheme_bg_E(%rip), %rdi
 942      000000
 943 0247 4885FF   		testq	%rdi, %rdi
 944 024a 7411     		je	.L63
 945              		.loc 1 420 0 discriminator 1
 946 024c 488B07   		movq	(%rdi), %rax
 947 024f FF5008   		call	*8(%rax)
 948              	.LVL113:
 949              		.loc 1 421 0 discriminator 1
 950 0252 48C70500 		movq	$0, _ZN2Fl10scheme_bg_E(%rip)
 950      00000000 
 950      000000
 951              	.L63:
 952              		.loc 1 424 0
 953 025d 41B90400 		movl	$4, %r9d
 953      0000
 954 0263 41B80400 		movl	$4, %r8d
 954      0000
 955 0269 B9020000 		movl	$2, %ecx
 955      00
 956 026e BA020000 		movl	$2, %edx
 956      00
 957 0273 BE000000 		movl	$_Z11fl_up_frameiiiij, %esi
 957      00
 958 0278 BF040000 		movl	$4, %edi
 958      00
 959 027d E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
 959      00
 960              	.LVL114:
 961              		.loc 1 425 0
 962 0282 41B90400 		movl	$4, %r9d
 962      0000
 963 0288 41B80400 		movl	$4, %r8d
 963      0000
 964 028e B9020000 		movl	$2, %ecx
 964      00
 965 0293 BA020000 		movl	$2, %edx
 965      00
 966 0298 BE000000 		movl	$_Z13fl_down_frameiiiij, %esi
 966      00
 967 029d BF050000 		movl	$5, %edi
 967      00
 968 02a2 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
 968      00
 969              	.LVL115:
 970              		.loc 1 426 0
 971 02a7 41B90200 		movl	$2, %r9d
 971      0000
 972 02ad 41B80200 		movl	$2, %r8d
 972      0000
 973 02b3 B9010000 		movl	$1, %ecx
 973      00
 974 02b8 BA010000 		movl	$1, %edx
 974      00
 975 02bd BE000000 		movl	$_Z16fl_thin_up_frameiiiij, %esi
 975      00
 976 02c2 BF080000 		movl	$8, %edi
 976      00
 977 02c7 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
 977      00
 978              	.LVL116:
 979              		.loc 1 427 0
 980 02cc 41B90200 		movl	$2, %r9d
 980      0000
 981 02d2 41B80200 		movl	$2, %r8d
 981      0000
 982 02d8 B9010000 		movl	$1, %ecx
 982      00
 983 02dd BA010000 		movl	$1, %edx
 983      00
 984 02e2 BE000000 		movl	$_Z18fl_thin_down_frameiiiij, %esi
 984      00
 985 02e7 BF090000 		movl	$9, %edi
 985      00
 986 02ec E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
 986      00
 987              	.LVL117:
 988              		.loc 1 429 0
 989 02f1 41B90400 		movl	$4, %r9d
 989      0000
 990 02f7 41B80400 		movl	$4, %r8d
 990      0000
 991 02fd B9020000 		movl	$2, %ecx
 991      00
 992 0302 BA020000 		movl	$2, %edx
 992      00
 993 0307 BE000000 		movl	$_Z9fl_up_boxiiiij, %esi
 993      00
 994 030c BF020000 		movl	$2, %edi
 994      00
 995 0311 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
 995      00
 996              	.LVL118:
 997              		.loc 1 430 0
 998 0316 41B90400 		movl	$4, %r9d
 998      0000
 999 031c 41B80400 		movl	$4, %r8d
 999      0000
 1000 0322 B9020000 		movl	$2, %ecx
 1000      00
 1001 0327 BA020000 		movl	$2, %edx
 1001      00
 1002 032c BE000000 		movl	$_Z11fl_down_boxiiiij, %esi
 1002      00
 1003 0331 BF030000 		movl	$3, %edi
 1003      00
 1004 0336 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
 1004      00
 1005              	.LVL119:
 1006              		.loc 1 431 0
 1007 033b 41B90200 		movl	$2, %r9d
 1007      0000
 1008 0341 41B80200 		movl	$2, %r8d
 1008      0000
 1009 0347 B9010000 		movl	$1, %ecx
 1009      00
 1010 034c BA010000 		movl	$1, %edx
 1010      00
 1011 0351 BE000000 		movl	$_Z14fl_thin_up_boxiiiij, %esi
 1011      00
 1012 0356 BF060000 		movl	$6, %edi
 1012      00
 1013 035b E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
 1013      00
 1014              	.LVL120:
 1015              		.loc 1 432 0
 1016 0360 41B90200 		movl	$2, %r9d
 1016      0000
 1017 0366 41B80200 		movl	$2, %r8d
 1017      0000
 1018 036c B9010000 		movl	$1, %ecx
 1018      00
 1019 0371 BA010000 		movl	$1, %edx
 1019      00
 1020 0376 BE000000 		movl	$_Z16fl_thin_down_boxiiiij, %esi
 1020      00
 1021 037b BF070000 		movl	$7, %edi
 1021      00
 1022 0380 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
 1022      00
 1023              	.LVL121:
 1024              		.loc 1 433 0
 1025 0385 41B90600 		movl	$6, %r9d
 1025      0000
 1026 038b 41B80600 		movl	$6, %r8d
 1026      0000
 1027 0391 B9030000 		movl	$3, %ecx
 1027      00
 1028 0396 BA030000 		movl	$3, %edx
 1028      00
 1029 039b BE000000 		movl	$_Z15fl_round_up_boxiiiij, %esi
 1029      00
 1030 03a0 BF160000 		movl	$22, %edi
 1030      00
 1031 03a5 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
 1031      00
 1032              	.LVL122:
 1033              		.loc 1 434 0
 1034 03aa 41B90600 		movl	$6, %r9d
 1034      0000
 1035 03b0 41B80600 		movl	$6, %r8d
 1035      0000
 1036 03b6 B9030000 		movl	$3, %ecx
 1036      00
 1037 03bb BA030000 		movl	$3, %edx
 1037      00
 1038 03c0 BE000000 		movl	$_Z17fl_round_down_boxiiiij, %esi
 1038      00
 1039 03c5 BF170000 		movl	$23, %edi
 1039      00
 1040 03ca E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
 1040      00
 1041              	.LVL123:
 1042              		.loc 1 437 0
 1043 03cf BF100000 		movl	$16, %edi
 1043      00
 1044 03d4 E8000000 		call	_ZN2Fl14scrollbar_sizeEi
 1044      00
 1045              	.LVL124:
 1046 03d9 E9DC0000 		jmp	.L58
 1046      00
 1047 03de 6690     		.p2align 4,,10
 1048              		.p2align 3
 1049              	.L59:
 1050              		.loc 1 377 0
 1051 03e0 488B3D00 		movq	_ZN2Fl10scheme_bg_E(%rip), %rdi
 1051      000000
 1052 03e7 4885FF   		testq	%rdi, %rdi
 1053 03ea 7411     		je	.L70
 1054              		.loc 1 378 0 discriminator 1
 1055 03ec 488B07   		movq	(%rdi), %rax
 1056 03ef FF5008   		call	*8(%rax)
 1057              	.LVL125:
 1058              		.loc 1 379 0 discriminator 1
 1059 03f2 48C70500 		movq	$0, _ZN2Fl10scheme_bg_E(%rip)
 1059      00000000 
 1059      000000
 1060              	.L70:
 1061              		.loc 1 382 0
 1062 03fd E8000000 		call	_Z23fl_define_FL_GTK_UP_BOXv
 1062      00
 1063              	.LVL126:
 1064 0402 8D7002   		leal	2(%rax), %esi
 1065 0405 BF040000 		movl	$4, %edi
 1065      00
 1066 040a E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1066      00
 1067              	.LVL127:
 1068              		.loc 1 383 0
 1069 040f E8000000 		call	_Z23fl_define_FL_GTK_UP_BOXv
 1069      00
 1070              	.LVL128:
 1071 0414 8D7003   		leal	3(%rax), %esi
 1072 0417 BF050000 		movl	$5, %edi
 1072      00
 1073 041c E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1073      00
 1074              	.LVL129:
 1075              		.loc 1 384 0
 1076 0421 E8000000 		call	_Z23fl_define_FL_GTK_UP_BOXv
 1076      00
 1077              	.LVL130:
 1078 0426 8D7006   		leal	6(%rax), %esi
 1079 0429 BF080000 		movl	$8, %edi
 1079      00
 1080 042e E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1080      00
 1081              	.LVL131:
 1082              		.loc 1 385 0
 1083 0433 E8000000 		call	_Z23fl_define_FL_GTK_UP_BOXv
 1083      00
 1084              	.LVL132:
 1085 0438 8D7007   		leal	7(%rax), %esi
 1086 043b BF090000 		movl	$9, %edi
 1086      00
 1087 0440 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1087      00
 1088              	.LVL133:
 1089              		.loc 1 387 0
 1090 0445 E8000000 		call	_Z23fl_define_FL_GTK_UP_BOXv
 1090      00
 1091              	.LVL134:
 1092 044a BF020000 		movl	$2, %edi
 1092      00
 1093 044f 89C6     		movl	%eax, %esi
 1094 0451 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1094      00
 1095              	.LVL135:
 1096              		.loc 1 388 0
 1097 0456 E8000000 		call	_Z23fl_define_FL_GTK_UP_BOXv
 1097      00
 1098              	.LVL136:
 1099 045b 8D7001   		leal	1(%rax), %esi
 1100 045e BF030000 		movl	$3, %edi
 1100      00
 1101 0463 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1101      00
 1102              	.LVL137:
 1103              		.loc 1 389 0
 1104 0468 E8000000 		call	_Z23fl_define_FL_GTK_UP_BOXv
 1104      00
 1105              	.LVL138:
 1106 046d 8D7004   		leal	4(%rax), %esi
 1107 0470 BF060000 		movl	$6, %edi
 1107      00
 1108 0475 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1108      00
 1109              	.LVL139:
 1110              		.loc 1 390 0
 1111 047a E8000000 		call	_Z23fl_define_FL_GTK_UP_BOXv
 1111      00
 1112              	.LVL140:
 1113 047f 8D7005   		leal	5(%rax), %esi
 1114 0482 BF070000 		movl	$7, %edi
 1114      00
 1115 0487 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1115      00
 1116              	.LVL141:
 1117              		.loc 1 391 0
 1118 048c E8000000 		call	_Z23fl_define_FL_GTK_UP_BOXv
 1118      00
 1119              	.LVL142:
 1120 0491 8D7008   		leal	8(%rax), %esi
 1121 0494 BF160000 		movl	$22, %edi
 1121      00
 1122 0499 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1122      00
 1123              	.LVL143:
 1124              		.loc 1 392 0
 1125 049e E8000000 		call	_Z23fl_define_FL_GTK_UP_BOXv
 1125      00
 1126              	.LVL144:
 1127 04a3 8D7009   		leal	9(%rax), %esi
 1128 04a6 BF170000 		movl	$23, %edi
 1128      00
 1129 04ab E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1129      00
 1130              	.LVL145:
 1131              		.loc 1 395 0
 1132 04b0 BF0F0000 		movl	$15, %edi
 1132      00
 1133 04b5 E8000000 		call	_ZN2Fl14scrollbar_sizeEi
 1133      00
 1134              	.LVL146:
 1135              	.L58:
 1136              	.LBE43:
 1137              		.loc 1 449 0
 1138 04ba E8000000 		call	_ZN2Fl12first_windowEv
 1138      00
 1139              	.LVL147:
 1140 04bf 4885C0   		testq	%rax, %rax
 1141 04c2 4889C3   		movq	%rax, %rbx
 1142              	.LVL148:
 1143 04c5 743A     		je	.L65
 1144 04c7 660F1F84 		.p2align 4,,10
 1144      00000000 
 1144      00
 1145              		.p2align 3
 1146              	.L78:
 1147              		.loc 1 450 0 discriminator 2
 1148 04d0 488B0500 		movq	_ZN2Fl10scheme_bg_E(%rip), %rax
 1148      000000
 1149              	.LVL149:
 1150              		.loc 1 453 0 discriminator 2
 1151 04d7 4889DF   		movq	%rbx, %rdi
 1152              	.LBB44:
 1153              	.LBB45:
 1154              		.file 3 "fltk-1.3.4-1/FL/Fl_Widget.H"
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
 1155              		.loc 3 357 0 discriminator 2
 1156 04da C7435450 		movl	$80, 84(%rbx)
 1156      000000
 1157              	.LBE45:
 1158              	.LBE44:
 1159              	.LBB46:
 1160              	.LBB47:
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
 1161              		.loc 3 466 0 discriminator 2
 1162 04e1 4885C0   		testq	%rax, %rax
 1163              	.LBE47:
 1164              	.LBE46:
 1165              	.LBB49:
 1166              	.LBB50:
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
 1167              		.loc 3 521 0 discriminator 2
 1168 04e4 48894338 		movq	%rax, 56(%rbx)
 1169              	.LBE50:
 1170              	.LBE49:
 1171              	.LBB51:
 1172              	.LBB48:
 466:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1173              		.loc 3 466 0 discriminator 2
 1174 04e8 0F944358 		sete	88(%rbx)
 1175              	.LVL150:
 1176              	.LBE48:
 1177              	.LBE51:
 1178              		.loc 1 453 0 discriminator 2
 1179 04ec E8000000 		call	_ZN9Fl_Widget6redrawEv
 1179      00
 1180              	.LVL151:
 1181              		.loc 1 449 0 discriminator 2
 1182 04f1 4889DF   		movq	%rbx, %rdi
 1183 04f4 E8000000 		call	_ZN2Fl11next_windowEPK9Fl_Window
 1183      00
 1184              	.LVL152:
 1185 04f9 4885C0   		testq	%rax, %rax
 1186 04fc 4889C3   		movq	%rax, %rbx
 1187              	.LVL153:
 1188 04ff 75CF     		jne	.L78
 1189              	.L65:
 1190              		.loc 1 457 0
 1191 0501 488B5424 		movq	8(%rsp), %rdx
 1191      08
 1192 0506 64483314 		xorq	%fs:40, %rdx
 1192      25280000 
 1192      00
 1193 050f B8010000 		movl	$1, %eax
 1193      00
 1194              	.LVL154:
 1195 0514 0F851A01 		jne	.L87
 1195      0000
 1196 051a 4883C410 		addq	$16, %rsp
 1197              		.cfi_remember_state
 1198              		.cfi_def_cfa_offset 48
 1199 051e 5B       		popq	%rbx
 1200              		.cfi_def_cfa_offset 40
 1201              	.LVL155:
 1202 051f 5D       		popq	%rbp
 1203              		.cfi_def_cfa_offset 32
 1204 0520 415C     		popq	%r12
 1205              		.cfi_def_cfa_offset 24
 1206 0522 415D     		popq	%r13
 1207              		.cfi_def_cfa_offset 16
 1208 0524 415E     		popq	%r14
 1209              		.cfi_def_cfa_offset 8
 1210 0526 C3       		ret
 1211 0527 660F1F84 		.p2align 4,,10
 1211      00000000 
 1211      00
 1212              		.p2align 3
 1213              	.L86:
 1214              		.cfi_restore_state
 1215              	.LBB52:
 1216              	.LBB41:
 1217              		.loc 1 356 0
 1218 0530 BF000000 		movl	$_ZL4tile, %edi
 1218      00
 1219 0535 E8000000 		call	_ZN9Fl_Pixmap7uncacheEv
 1219      00
 1220              	.LVL156:
 1221              		.loc 1 358 0
 1222 053a 48833D00 		cmpq	$0, _ZN2Fl10scheme_bg_E(%rip)
 1222      00000000 
 1223 0542 0F84C200 		je	.L88
 1223      0000
 1224              	.L57:
 1225              		.loc 1 361 0
 1226 0548 E8000000 		call	_Z27fl_define_FL_PLASTIC_UP_BOXv
 1226      00
 1227              	.LVL157:
 1228 054d 8D7002   		leal	2(%rax), %esi
 1229 0550 BF040000 		movl	$4, %edi
 1229      00
 1230 0555 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1230      00
 1231              	.LVL158:
 1232              		.loc 1 362 0
 1233 055a E8000000 		call	_Z27fl_define_FL_PLASTIC_UP_BOXv
 1233      00
 1234              	.LVL159:
 1235 055f 8D7003   		leal	3(%rax), %esi
 1236 0562 BF050000 		movl	$5, %edi
 1236      00
 1237 0567 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1237      00
 1238              	.LVL160:
 1239              		.loc 1 363 0
 1240 056c E8000000 		call	_Z27fl_define_FL_PLASTIC_UP_BOXv
 1240      00
 1241              	.LVL161:
 1242 0571 8D7002   		leal	2(%rax), %esi
 1243 0574 BF080000 		movl	$8, %edi
 1243      00
 1244 0579 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1244      00
 1245              	.LVL162:
 1246              		.loc 1 364 0
 1247 057e E8000000 		call	_Z27fl_define_FL_PLASTIC_UP_BOXv
 1247      00
 1248              	.LVL163:
 1249 0583 8D7003   		leal	3(%rax), %esi
 1250 0586 BF090000 		movl	$9, %edi
 1250      00
 1251 058b E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1251      00
 1252              	.LVL164:
 1253              		.loc 1 366 0
 1254 0590 E8000000 		call	_Z27fl_define_FL_PLASTIC_UP_BOXv
 1254      00
 1255              	.LVL165:
 1256 0595 BF020000 		movl	$2, %edi
 1256      00
 1257 059a 89C6     		movl	%eax, %esi
 1258 059c E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1258      00
 1259              	.LVL166:
 1260              		.loc 1 367 0
 1261 05a1 E8000000 		call	_Z27fl_define_FL_PLASTIC_UP_BOXv
 1261      00
 1262              	.LVL167:
 1263 05a6 8D7001   		leal	1(%rax), %esi
 1264 05a9 BF030000 		movl	$3, %edi
 1264      00
 1265 05ae E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1265      00
 1266              	.LVL168:
 1267              		.loc 1 368 0
 1268 05b3 E8000000 		call	_Z27fl_define_FL_PLASTIC_UP_BOXv
 1268      00
 1269              	.LVL169:
 1270 05b8 8D7004   		leal	4(%rax), %esi
 1271 05bb BF060000 		movl	$6, %edi
 1271      00
 1272 05c0 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1272      00
 1273              	.LVL170:
 1274              		.loc 1 369 0
 1275 05c5 E8000000 		call	_Z27fl_define_FL_PLASTIC_UP_BOXv
 1275      00
 1276              	.LVL171:
 1277 05ca 8D7005   		leal	5(%rax), %esi
 1278 05cd BF070000 		movl	$7, %edi
 1278      00
 1279 05d2 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1279      00
 1280              	.LVL172:
 1281              		.loc 1 370 0
 1282 05d7 E8000000 		call	_Z27fl_define_FL_PLASTIC_UP_BOXv
 1282      00
 1283              	.LVL173:
 1284 05dc 8D7006   		leal	6(%rax), %esi
 1285 05df BF160000 		movl	$22, %edi
 1285      00
 1286 05e4 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1286      00
 1287              	.LVL174:
 1288              		.loc 1 371 0
 1289 05e9 E8000000 		call	_Z27fl_define_FL_PLASTIC_UP_BOXv
 1289      00
 1290              	.LVL175:
 1291 05ee 8D7007   		leal	7(%rax), %esi
 1292 05f1 BF170000 		movl	$23, %edi
 1292      00
 1293 05f6 E8000000 		call	_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
 1293      00
 1294              	.LVL176:
 1295              		.loc 1 374 0
 1296 05fb BF100000 		movl	$16, %edi
 1296      00
 1297 0600 E8000000 		call	_ZN2Fl14scrollbar_sizeEi
 1297      00
 1298              	.LVL177:
 1299              	.LBE41:
 1300 0605 E9B0FEFF 		jmp	.L58
 1300      FF
 1301              	.L88:
 1302              	.LBB42:
 1303              		.loc 1 358 0 discriminator 1
 1304 060a BF380000 		movl	$56, %edi
 1304      00
 1305 060f E8000000 		call	_Znwm
 1305      00
 1306              	.LVL178:
 1307 0614 31C9     		xorl	%ecx, %ecx
 1308 0616 4889C3   		movq	%rax, %rbx
 1309 0619 31D2     		xorl	%edx, %edx
 1310 061b BE000000 		movl	$_ZL4tile, %esi
 1310      00
 1311 0620 4889C7   		movq	%rax, %rdi
 1312 0623 E8000000 		call	_ZN14Fl_Tiled_ImageC1EP8Fl_Imageii
 1312      00
 1313              	.LVL179:
 1314 0628 48891D00 		movq	%rbx, _ZN2Fl10scheme_bg_E(%rip)
 1314      000000
 1315 062f E914FFFF 		jmp	.L57
 1315      FF
 1316              	.LVL180:
 1317              	.L87:
 1318              	.LBE42:
 1319              	.LBE52:
 1320              		.loc 1 457 0
 1321 0634 E8000000 		call	__stack_chk_fail
 1321      00
 1322              	.LVL181:
 1323              		.cfi_endproc
 1324              	.LFE496:
 1326              		.section	.text.unlikely._ZN2Fl13reload_schemeEv
 1327              	.LCOLDE28:
 1328              		.section	.text._ZN2Fl13reload_schemeEv
 1329              	.LHOTE28:
 1330              		.section	.rodata.str1.1
 1331              	.LC29:
 1332 008d 464C544B 		.string	"FLTK_SCHEME"
 1332      5F534348 
 1332      454D4500 
 1333              	.LC30:
 1334 0099 73636865 		.string	"scheme"
 1334      6D6500
 1335              	.LC31:
 1336 00a0 6E6F6E65 		.string	"none"
 1336      00
 1337              	.LC32:
 1338 00a5 62617365 		.string	"base"
 1338      00
 1339              		.section	.text.unlikely._ZN2Fl6schemeEPKc,"ax",@progbits
 1340              		.align 2
 1341              	.LCOLDB33:
 1342              		.section	.text._ZN2Fl6schemeEPKc,"ax",@progbits
 1343              	.LHOTB33:
 1344              		.align 2
 1345              		.p2align 4,,15
 1346              		.globl	_ZN2Fl6schemeEPKc
 1348              	_ZN2Fl6schemeEPKc:
 1349              	.LFB495:
 1350              		.loc 1 292 0
 1351              		.cfi_startproc
 1352              	.LVL182:
 1353              	.LBB53:
 1354              		.loc 1 293 0
 1355 0000 4885FF   		testq	%rdi, %rdi
 1356              	.LBE53:
 1357              		.loc 1 292 0
 1358 0003 53       		pushq	%rbx
 1359              		.cfi_def_cfa_offset 16
 1360              		.cfi_offset 3, -16
 1361              		.loc 1 292 0
 1362 0004 4889FB   		movq	%rdi, %rbx
 1363              	.LBB60:
 1364              		.loc 1 293 0
 1365 0007 0F842301 		je	.L135
 1365      0000
 1366              	.LVL183:
 1367              	.L101:
 1368              	.LBE60:
 1369              		.loc 1 306 0
 1370 000d BE000000 		movl	$.LC31, %esi
 1370      00
 1371 0012 4889DF   		movq	%rbx, %rdi
 1372 0015 E8000000 		call	fl_ascii_strcasecmp
 1372      00
 1373              	.LVL184:
 1374 001a 85C0     		testl	%eax, %eax
 1375 001c 756A     		jne	.L136
 1376              	.L94:
 1377              	.LVL185:
 1378              		.loc 1 312 0
 1379 001e 488B3D00 		movq	_ZN2Fl7scheme_E(%rip), %rdi
 1379      000000
 1380 0025 31DB     		xorl	%ebx, %ebx
 1381 0027 4885FF   		testq	%rdi, %rdi
 1382 002a 0F84A800 		je	.L137
 1382      0000
 1383              	.LVL186:
 1384              	.L102:
 1385              		.loc 1 312 0 is_stmt 0 discriminator 1
 1386 0030 E8000000 		call	free
 1386      00
 1387              	.LVL187:
 1388              	.L99:
 1389              	.LBB61:
 1390              	.LBB62:
 1391              		.file 4 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 1392              		.loc 4 110 0 is_stmt 1
 1393 0035 48B8464C 		movabsq	$5207097262921239622, %rax
 1393      544B5F53 
 1393      4348
 1394              	.LBE62:
 1395              	.LBE61:
 1396              		.loc 1 319 0
 1397 003f 4885DB   		testq	%rbx, %rbx
 1398              		.loc 1 313 0
 1399 0042 48891D00 		movq	%rbx, _ZN2Fl7scheme_E(%rip)
 1399      000000
 1400              	.LVL188:
 1401              	.LBB66:
 1402              	.LBB63:
 1403              		.loc 4 110 0
 1404 0049 48890500 		movq	%rax, _ZZN2Fl6schemeEPKcE1e(%rip)
 1404      000000
 1405 0050 C7050000 		movl	$1027951941, _ZZN2Fl6schemeEPKcE1e+8(%rip)
 1405      0000454D 
 1405      453D
 1406 005a C6050000 		movb	$0, _ZZN2Fl6schemeEPKcE1e+12(%rip)
 1406      000000
 1407              	.LVL189:
 1408              	.LBE63:
 1409              	.LBE66:
 1410              		.loc 1 319 0
 1411 0061 7412     		je	.L100
 1412              		.loc 1 319 0 is_stmt 0 discriminator 1
 1413 0063 BA000400 		movl	$1024, %edx
 1413      00
 1414 0068 4889DE   		movq	%rbx, %rsi
 1415 006b BF000000 		movl	$_ZZN2Fl6schemeEPKcE1e, %edi
 1415      00
 1416 0070 E8000000 		call	fl_strlcat
 1416      00
 1417              	.LVL190:
 1418              	.L100:
 1419              		.loc 1 320 0 is_stmt 1
 1420 0075 BF000000 		movl	$_ZZN2Fl6schemeEPKcE1e, %edi
 1420      00
 1421 007a E8000000 		call	putenv
 1421      00
 1422              	.LVL191:
 1423              		.loc 1 324 0
 1424 007f 5B       		popq	%rbx
 1425              		.cfi_remember_state
 1426              		.cfi_def_cfa_offset 8
 1427              		.loc 1 323 0
 1428 0080 E9000000 		jmp	_ZN2Fl13reload_schemeEv
 1428      00
 1429              	.LVL192:
 1430              		.p2align 4,,10
 1431 0085 0F1F00   		.p2align 3
 1432              	.L136:
 1433              		.cfi_restore_state
 1434              		.loc 1 306 0 discriminator 2
 1435 0088 BE000000 		movl	$.LC32, %esi
 1435      00
 1436 008d 4889DF   		movq	%rbx, %rdi
 1437 0090 E8000000 		call	fl_ascii_strcasecmp
 1437      00
 1438              	.LVL193:
 1439 0095 85C0     		testl	%eax, %eax
 1440 0097 7485     		je	.L94
 1441              		.loc 1 306 0 is_stmt 0 discriminator 4
 1442 0099 803B00   		cmpb	$0, (%rbx)
 1443 009c 7480     		je	.L94
 1444              		.loc 1 307 0 is_stmt 1
 1445 009e BE000000 		movl	$.LC26, %esi
 1445      00
 1446 00a3 4889DF   		movq	%rbx, %rdi
 1447 00a6 E8000000 		call	fl_ascii_strcasecmp
 1447      00
 1448              	.LVL194:
 1449 00ab 85C0     		testl	%eax, %eax
 1450 00ad 7561     		jne	.L138
 1451              		.loc 1 307 0 is_stmt 0 discriminator 1
 1452 00af BF000000 		movl	$.LC26, %edi
 1452      00
 1453 00b4 E8000000 		call	strdup
 1453      00
 1454              	.LVL195:
 1455 00b9 4889C3   		movq	%rax, %rbx
 1456              	.LVL196:
 1457              	.L97:
 1458              		.loc 1 312 0 is_stmt 1
 1459 00bc 488B3D00 		movq	_ZN2Fl7scheme_E(%rip), %rdi
 1459      000000
 1460 00c3 4885FF   		testq	%rdi, %rdi
 1461 00c6 0F8469FF 		je	.L99
 1461      FFFF
 1462 00cc E95FFFFF 		jmp	.L102
 1462      FF
 1463              	.LVL197:
 1464              		.p2align 4,,10
 1465 00d1 0F1F8000 		.p2align 3
 1465      000000
 1466              	.L137:
 1467              	.LBB67:
 1468              	.LBB64:
 1469              		.loc 4 110 0
 1470 00d8 48B8464C 		movabsq	$5207097262921239622, %rax
 1470      544B5F53 
 1470      4348
 1471              	.LBE64:
 1472              	.LBE67:
 1473              		.loc 1 320 0
 1474 00e2 BF000000 		movl	$_ZZN2Fl6schemeEPKcE1e, %edi
 1474      00
 1475              	.LBB68:
 1476              	.LBB65:
 1477              		.loc 4 110 0
 1478 00e7 C7050000 		movl	$1027951941, _ZZN2Fl6schemeEPKcE1e+8(%rip)
 1478      0000454D 
 1478      453D
 1479 00f1 48890500 		movq	%rax, _ZZN2Fl6schemeEPKcE1e(%rip)
 1479      000000
 1480 00f8 C6050000 		movb	$0, _ZZN2Fl6schemeEPKcE1e+12(%rip)
 1480      000000
 1481              	.LVL198:
 1482              	.LBE65:
 1483              	.LBE68:
 1484              		.loc 1 320 0
 1485 00ff E8000000 		call	putenv
 1485      00
 1486              	.LVL199:
 1487              		.loc 1 324 0
 1488 0104 5B       		popq	%rbx
 1489              		.cfi_remember_state
 1490              		.cfi_def_cfa_offset 8
 1491              		.loc 1 323 0
 1492 0105 E9000000 		jmp	_ZN2Fl13reload_schemeEv
 1492      00
 1493              	.LVL200:
 1494 010a 660F1F44 		.p2align 4,,10
 1494      0000
 1495              		.p2align 3
 1496              	.L138:
 1497              		.cfi_restore_state
 1498              		.loc 1 308 0
 1499 0110 BE000000 		movl	$.LC24, %esi
 1499      00
 1500 0115 4889DF   		movq	%rbx, %rdi
 1501 0118 E8000000 		call	fl_ascii_strcasecmp
 1501      00
 1502              	.LVL201:
 1503 011d 85C0     		testl	%eax, %eax
 1504 011f 756F     		jne	.L98
 1505              		.loc 1 308 0 is_stmt 0 discriminator 1
 1506 0121 BF000000 		movl	$.LC24, %edi
 1506      00
 1507 0126 E8000000 		call	strdup
 1507      00
 1508              	.LVL202:
 1509 012b 4889C3   		movq	%rax, %rbx
 1510              	.LVL203:
 1511 012e EB8C     		jmp	.L97
 1512              	.LVL204:
 1513              		.p2align 4,,10
 1514              		.p2align 3
 1515              	.L135:
 1516              	.LBB69:
 1517              	.LBB54:
 1518              		.loc 1 294 0 is_stmt 1
 1519 0130 BF000000 		movl	$.LC29, %edi
 1519      00
 1520 0135 E8000000 		call	getenv
 1520      00
 1521              	.LVL205:
 1522 013a 4885C0   		testq	%rax, %rax
 1523 013d 4889C3   		movq	%rax, %rbx
 1524              	.LVL206:
 1525 0140 0F85C7FE 		jne	.L101
 1525      FFFF
 1526              	.LVL207:
 1527              	.LBB55:
 1528              		.loc 1 297 0
 1529 0146 E8000000 		call	_ZN2Fl12first_windowEv
 1529      00
 1530              	.LVL208:
 1531 014b 4885C0   		testq	%rax, %rax
 1532 014e 7467     		je	.L93
 1533              		.loc 1 297 0 is_stmt 0 discriminator 1
 1534 0150 E8000000 		call	_ZN2Fl12first_windowEv
 1534      00
 1535              	.LVL209:
 1536 0155 4889C7   		movq	%rax, %rdi
 1537 0158 E8000000 		call	_ZNK9Fl_Window6xclassEv
 1537      00
 1538              	.LVL210:
 1539              		.loc 1 298 0 is_stmt 1 discriminator 1
 1540 015d 4885C0   		testq	%rax, %rax
 1541              		.loc 1 297 0 discriminator 1
 1542 0160 4889C3   		movq	%rax, %rbx
 1543              	.LVL211:
 1544              		.loc 1 298 0 discriminator 1
 1545 0163 7452     		je	.L93
 1546              	.LVL212:
 1547              	.L92:
 1548              		.loc 1 299 0
 1549 0165 E8000000 		call	_Z15fl_open_displayv
 1549      00
 1550              	.LVL213:
 1551              		.loc 1 300 0
 1552 016a 488B3D00 		movq	fl_display(%rip), %rdi
 1552      000000
 1553 0171 4889DE   		movq	%rbx, %rsi
 1554 0174 BA000000 		movl	$.LC30, %edx
 1554      00
 1555 0179 E8000000 		call	XGetDefault
 1555      00
 1556              	.LVL214:
 1557              	.LBE55:
 1558              	.LBE54:
 1559              	.LBE69:
 1560              		.loc 1 305 0
 1561 017e 4885C0   		testq	%rax, %rax
 1562              	.LBB70:
 1563              	.LBB58:
 1564              	.LBB56:
 1565              		.loc 1 300 0
 1566 0181 4889C3   		movq	%rax, %rbx
 1567              	.LVL215:
 1568              	.LBE56:
 1569              	.LBE58:
 1570              	.LBE70:
 1571              		.loc 1 305 0
 1572 0184 0F8494FE 		je	.L94
 1572      FFFF
 1573 018a E97EFEFF 		jmp	.L101
 1573      FF
 1574              	.LVL216:
 1575 018f 90       		.p2align 4,,10
 1576              		.p2align 3
 1577              	.L98:
 1578              		.loc 1 309 0
 1579 0190 BE000000 		movl	$.LC27, %esi
 1579      00
 1580 0195 4889DF   		movq	%rbx, %rdi
 1581 0198 E8000000 		call	fl_ascii_strcasecmp
 1581      00
 1582              	.LVL217:
 1583 019d 85C0     		testl	%eax, %eax
 1584 019f 0F8579FE 		jne	.L94
 1584      FFFF
 1585              		.loc 1 309 0 is_stmt 0 discriminator 1
 1586 01a5 BF000000 		movl	$.LC27, %edi
 1586      00
 1587 01aa E8000000 		call	strdup
 1587      00
 1588              	.LVL218:
 1589 01af 4889C3   		movq	%rax, %rbx
 1590              	.LVL219:
 1591 01b2 E905FFFF 		jmp	.L97
 1591      FF
 1592              	.LVL220:
 1593              	.L93:
 1594              	.LBB71:
 1595              	.LBB59:
 1596              	.LBB57:
 1597              		.loc 1 298 0 is_stmt 1
 1598 01b7 BB000000 		movl	$.LC13, %ebx
 1598      00
 1599 01bc EBA7     		jmp	.L92
 1600              	.LBE57:
 1601              	.LBE59:
 1602              	.LBE71:
 1603              		.cfi_endproc
 1604              	.LFE495:
 1606              		.section	.text.unlikely._ZN2Fl6schemeEPKc
 1607              	.LCOLDE33:
 1608              		.section	.text._ZN2Fl6schemeEPKc
 1609              	.LHOTE33:
 1610              		.section	.text.unlikely._GLOBAL__sub_I__ZN2Fl10backgroundEhhh,"ax",@progbits
 1611              	.LCOLDB34:
 1612              		.section	.text.startup._GLOBAL__sub_I__ZN2Fl10backgroundEhhh,"ax",@progbits
 1613              	.LHOTB34:
 1614              		.p2align 4,,15
 1616              	_GLOBAL__sub_I__ZN2Fl10backgroundEhhh:
 1617              	.LFB498:
 1618              		.loc 1 457 0
 1619              		.cfi_startproc
 1620              	.LVL221:
 1621 0000 4883EC08 		subq	$8, %rsp
 1622              		.cfi_def_cfa_offset 16
 1623              	.LBB77:
 1624              	.LBB78:
 1625              	.LBB79:
 1626              	.LBB80:
 1627              		.file 5 "fltk-1.3.4-1/FL/Fl_Pixmap.H"
   1:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
   2:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // "$Id: Fl_Pixmap.H 9706 2012-11-06 20:46:14Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
   4:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Pixmap header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
   6:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Copyright 1998-2012 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
   8:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  12:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  14:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  16:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Pixmap.H **** //
  18:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  19:fltk-1.3.4-1/FL/Fl_Pixmap.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Pixmap.H ****    Fl_Pixmap widget . */
  21:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  22:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #ifndef Fl_Pixmap_H
  23:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #define Fl_Pixmap_H
  24:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  include "Fl_Image.H"
  25:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if defined(WIN32)
  26:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  include "x.H"
  27:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  29:fltk-1.3.4-1/FL/Fl_Pixmap.H **** class Fl_Widget;
  30:fltk-1.3.4-1/FL/Fl_Pixmap.H **** struct Fl_Menu_Item;
  31:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  32:fltk-1.3.4-1/FL/Fl_Pixmap.H **** // Older C++ compilers don't support the explicit keyword... :(
  33:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  if defined(__sgi) && !defined(_COMPILER_VERSION)
  34:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #    define explicit
  35:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #  endif // __sgi && !_COMPILER_VERSION
  36:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  37:fltk-1.3.4-1/FL/Fl_Pixmap.H **** /**
  38:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   The Fl_Pixmap class supports caching and drawing of colormap
  39:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   (pixmap) images, including transparency.
  40:fltk-1.3.4-1/FL/Fl_Pixmap.H **** */
  41:fltk-1.3.4-1/FL/Fl_Pixmap.H **** class FL_EXPORT Fl_Pixmap : public Fl_Image {
  42:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_Quartz_Graphics_Driver;
  43:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_GDI_Graphics_Driver;
  44:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_GDI_Printer_Graphics_Driver;
  45:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   friend class Fl_Xlib_Graphics_Driver;
  46:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void copy_data();
  47:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void delete_data();
  48:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void set_data(const char * const *p);
  49:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   int prepare(int XP, int YP, int WP, int HP, int &cx, int &cy,
  50:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 			 int &X, int &Y, int &W, int &H);
  51:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  52:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   protected:
  53:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  54:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void measure();
  55:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  56:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   public:
  57:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  58:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   int alloc_data; // Non-zero if data was allocated
  59:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   
  60:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   private:
  61:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  62:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if defined(WIN32)
  63:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if FLTK_ABI_VERSION < 10301
  64:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   static // a static member is needed for ABI compatibility
  65:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif
  66:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   UINT pixmap_bg_color; // RGB color used for pixmap background
  67:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif // WIN32
  68:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #if defined(__APPLE__) || defined(WIN32)
  69:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void *id_; // for internal use
  70:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   void *mask_; // for internal use (mask bitmap)
  71:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #else
  72:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   unsigned id_; // for internal use
  73:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   unsigned mask_; // for internal use (mask bitmap)
  74:fltk-1.3.4-1/FL/Fl_Pixmap.H **** #endif // __APPLE__ || WIN32
  75:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   
  76:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   public:
  77:fltk-1.3.4-1/FL/Fl_Pixmap.H **** 
  78:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   /**    The constructors create a new pixmap from the specified XPM data.  */
  79:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   explicit Fl_Pixmap(char * const * D) : Fl_Image(-1,0,1), alloc_data(0), id_(0), mask_(0) {set_dat
  80:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   /**    The constructors create a new pixmap from the specified XPM data.  */
  81:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   explicit Fl_Pixmap(uchar* const * D) : Fl_Image(-1,0,1), alloc_data(0), id_(0), mask_(0) {set_dat
  82:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   /**    The constructors create a new pixmap from the specified XPM data.  */
  83:fltk-1.3.4-1/FL/Fl_Pixmap.H ****   explicit Fl_Pixmap(const char * const * D) : Fl_Image(-1,0,1), alloc_data(0), id_(0), mask_(0) {s
 1628              		.loc 5 83 0
 1629 0004 31D2     		xorl	%edx, %edx
 1630 0006 B9010000 		movl	$1, %ecx
 1630      00
 1631 000b BEFFFFFF 		movl	$-1, %esi
 1631      FF
 1632 0010 BF000000 		movl	$_ZL4tile, %edi
 1632      00
 1633 0015 E8000000 		call	_ZN8Fl_ImageC2Eiii
 1633      00
 1634              	.LVL222:
 1635 001a BE000000 		movl	$_ZL8tile_xpm, %esi
 1635      00
 1636 001f BF000000 		movl	$_ZL4tile, %edi
 1636      00
 1637 0024 48C70500 		movq	$_ZTV9Fl_Pixmap+16, _ZL4tile(%rip)
 1637      00000000 
 1637      000000
 1638 002f C7050000 		movl	$0, _ZL4tile+40(%rip)
 1638      00000000 
 1638      0000
 1639 0039 C7050000 		movl	$0, _ZL4tile+44(%rip)
 1639      00000000 
 1639      0000
 1640 0043 C7050000 		movl	$0, _ZL4tile+48(%rip)
 1640      00000000 
 1640      0000
 1641 004d E8000000 		call	_ZN9Fl_Pixmap8set_dataEPKPKc
 1641      00
 1642              	.LVL223:
 1643 0052 BF000000 		movl	$_ZL4tile, %edi
 1643      00
 1644 0057 E8000000 		call	_ZN9Fl_Pixmap7measureEv
 1644      00
 1645              	.LVL224:
 1646              	.LBE80:
 1647              	.LBE79:
 1648              		.loc 1 264 0
 1649 005c BA000000 		movl	$__dso_handle, %edx
 1649      00
 1650 0061 BE000000 		movl	$_ZL4tile, %esi
 1650      00
 1651 0066 BF000000 		movl	$_ZN9Fl_PixmapD1Ev, %edi
 1651      00
 1652              	.LBE78:
 1653              	.LBE77:
 1654              		.loc 1 457 0
 1655 006b 4883C408 		addq	$8, %rsp
 1656              		.cfi_def_cfa_offset 8
 1657              	.LBB82:
 1658              	.LBB81:
 1659              		.loc 1 264 0
 1660 006f E9000000 		jmp	__cxa_atexit
 1660      00
 1661              	.LVL225:
 1662              	.LBE81:
 1663              	.LBE82:
 1664              		.cfi_endproc
 1665              	.LFE498:
 1667              		.section	.text.unlikely._GLOBAL__sub_I__ZN2Fl10backgroundEhhh
 1668              	.LCOLDE34:
 1669              		.section	.text.startup._GLOBAL__sub_I__ZN2Fl10backgroundEhhh
 1670              	.LHOTE34:
 1671              		.section	.init_array,"aw"
 1672              		.align 8
 1673 0000 00000000 		.quad	_GLOBAL__sub_I__ZN2Fl10backgroundEhhh
 1673      00000000 
 1674              		.section	.rodata._ZZN2Fl13reload_schemeEvE6levels,"a",@progbits
 1677              	_ZZN2Fl13reload_schemeEvE6levels:
 1678 0000 FF       		.byte	-1
 1679 0001 F8       		.byte	-8
 1680 0002 F4       		.byte	-12
 1681              		.section	.bss._ZZN2Fl6schemeEPKcE1e,"aw",@nobits
 1682              		.align 32
 1685              	_ZZN2Fl6schemeEPKcE1e:
 1686 0000 00000000 		.zero	1024
 1686      00000000 
 1686      00000000 
 1686      00000000 
 1686      00000000 
 1687              		.section	.bss._ZL4tile,"aw",@nobits
 1688              		.align 32
 1691              	_ZL4tile:
 1692 0000 00000000 		.zero	56
 1692      00000000 
 1692      00000000 
 1692      00000000 
 1692      00000000 
 1693              		.globl	_ZN2Fl10scheme_bg_E
 1694              		.section	.bss._ZN2Fl10scheme_bg_E,"aw",@nobits
 1695              		.align 8
 1698              	_ZN2Fl10scheme_bg_E:
 1699 0000 00000000 		.zero	8
 1699      00000000 
 1700              		.globl	_ZN2Fl7scheme_E
 1701              		.section	.bss._ZN2Fl7scheme_E,"aw",@nobits
 1702              		.align 8
 1705              	_ZN2Fl7scheme_E:
 1706 0000 00000000 		.zero	8
 1706      00000000 
 1707              		.globl	fl_bg2
 1708              		.section	.bss.fl_bg2,"aw",@nobits
 1709              		.align 8
 1712              	fl_bg2:
 1713 0000 00000000 		.zero	8
 1713      00000000 
 1714              		.globl	fl_bg
 1715              		.section	.bss.fl_bg,"aw",@nobits
 1716              		.align 8
 1719              	fl_bg:
 1720 0000 00000000 		.zero	8
 1720      00000000 
 1721              		.globl	fl_fg
 1722              		.section	.bss.fl_fg,"aw",@nobits
 1723              		.align 8
 1726              	fl_fg:
 1727 0000 00000000 		.zero	8
 1727      00000000 
 1728              		.section	.bss._ZL9fl_fg_set,"aw",@nobits
 1731              	_ZL9fl_fg_set:
 1732 0000 00       		.zero	1
 1733              		.section	.bss._ZL10fl_bg2_set,"aw",@nobits
 1736              	_ZL10fl_bg2_set:
 1737 0000 00       		.zero	1
 1738              		.section	.bss._ZL9fl_bg_set,"aw",@nobits
 1741              	_ZL9fl_bg_set:
 1742 0000 00       		.zero	1
 1743              		.section	.rodata.str1.1
 1744              	.LC35:
 1745 00aa 36342036 		.string	"64 64 3 1"
 1745      34203320 
 1745      3100
 1746              		.section	.rodata.str1.8,"aMS",@progbits,1
 1747              		.align 8
 1748              	.LC36:
 1749 0000 6F6F6F6F 		.string	"oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo"
 1749      6F6F6F6F 
 1749      6F6F6F6F 
 1749      6F6F6F6F 
 1749      6F6F6F6F 
 1750 0041 00000000 		.align 8
 1750      000000
 1751              	.LC37:
 1752 0048 2E2E2E2E 		.string	"................................................................"
 1752      2E2E2E2E 
 1752      2E2E2E2E 
 1752      2E2E2E2E 
 1752      2E2E2E2E 
 1753 0089 00000000 		.align 8
 1753      000000
 1754              	.LC38:
 1755 0090 4F4F4F4F 		.string	"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"
 1755      4F4F4F4F 
 1755      4F4F4F4F 
 1755      4F4F4F4F 
 1755      4F4F4F4F 
 1756              		.section	.rodata._ZL8tile_xpm,"a",@progbits
 1757              		.align 32
 1760              	_ZL8tile_xpm:
 1761 0000 00000000 		.quad	.LC35
 1761      00000000 
 1762 0008 00000000 		.quad	_ZL9tile_cmap
 1762      00000000 
 1763 0010 00000000 		.quad	_ZL9tile_cmap+32
 1763      00000000 
 1764 0018 00000000 		.quad	_ZL9tile_cmap+64
 1764      00000000 
 1765 0020 00000000 		.quad	.LC36
 1765      00000000 
 1766 0028 00000000 		.quad	.LC37
 1766      00000000 
 1767 0030 00000000 		.quad	.LC36
 1767      00000000 
 1768 0038 00000000 		.quad	.LC38
 1768      00000000 
 1769 0040 00000000 		.quad	.LC36
 1769      00000000 
 1770 0048 00000000 		.quad	.LC37
 1770      00000000 
 1771 0050 00000000 		.quad	.LC36
 1771      00000000 
 1772 0058 00000000 		.quad	.LC38
 1772      00000000 
 1773 0060 00000000 		.quad	.LC36
 1773      00000000 
 1774 0068 00000000 		.quad	.LC37
 1774      00000000 
 1775 0070 00000000 		.quad	.LC36
 1775      00000000 
 1776 0078 00000000 		.quad	.LC38
 1776      00000000 
 1777 0080 00000000 		.quad	.LC36
 1777      00000000 
 1778 0088 00000000 		.quad	.LC37
 1778      00000000 
 1779 0090 00000000 		.quad	.LC36
 1779      00000000 
 1780 0098 00000000 		.quad	.LC38
 1780      00000000 
 1781 00a0 00000000 		.quad	.LC36
 1781      00000000 
 1782 00a8 00000000 		.quad	.LC37
 1782      00000000 
 1783 00b0 00000000 		.quad	.LC36
 1783      00000000 
 1784 00b8 00000000 		.quad	.LC38
 1784      00000000 
 1785 00c0 00000000 		.quad	.LC36
 1785      00000000 
 1786 00c8 00000000 		.quad	.LC37
 1786      00000000 
 1787 00d0 00000000 		.quad	.LC36
 1787      00000000 
 1788 00d8 00000000 		.quad	.LC38
 1788      00000000 
 1789 00e0 00000000 		.quad	.LC36
 1789      00000000 
 1790 00e8 00000000 		.quad	.LC37
 1790      00000000 
 1791 00f0 00000000 		.quad	.LC36
 1791      00000000 
 1792 00f8 00000000 		.quad	.LC38
 1792      00000000 
 1793 0100 00000000 		.quad	.LC36
 1793      00000000 
 1794 0108 00000000 		.quad	.LC37
 1794      00000000 
 1795 0110 00000000 		.quad	.LC36
 1795      00000000 
 1796 0118 00000000 		.quad	.LC38
 1796      00000000 
 1797 0120 00000000 		.quad	.LC36
 1797      00000000 
 1798 0128 00000000 		.quad	.LC37
 1798      00000000 
 1799 0130 00000000 		.quad	.LC36
 1799      00000000 
 1800 0138 00000000 		.quad	.LC38
 1800      00000000 
 1801 0140 00000000 		.quad	.LC36
 1801      00000000 
 1802 0148 00000000 		.quad	.LC37
 1802      00000000 
 1803 0150 00000000 		.quad	.LC36
 1803      00000000 
 1804 0158 00000000 		.quad	.LC38
 1804      00000000 
 1805 0160 00000000 		.quad	.LC36
 1805      00000000 
 1806 0168 00000000 		.quad	.LC37
 1806      00000000 
 1807 0170 00000000 		.quad	.LC36
 1807      00000000 
 1808 0178 00000000 		.quad	.LC38
 1808      00000000 
 1809 0180 00000000 		.quad	.LC36
 1809      00000000 
 1810 0188 00000000 		.quad	.LC37
 1810      00000000 
 1811 0190 00000000 		.quad	.LC36
 1811      00000000 
 1812 0198 00000000 		.quad	.LC38
 1812      00000000 
 1813 01a0 00000000 		.quad	.LC36
 1813      00000000 
 1814 01a8 00000000 		.quad	.LC37
 1814      00000000 
 1815 01b0 00000000 		.quad	.LC36
 1815      00000000 
 1816 01b8 00000000 		.quad	.LC38
 1816      00000000 
 1817 01c0 00000000 		.quad	.LC36
 1817      00000000 
 1818 01c8 00000000 		.quad	.LC37
 1818      00000000 
 1819 01d0 00000000 		.quad	.LC36
 1819      00000000 
 1820 01d8 00000000 		.quad	.LC38
 1820      00000000 
 1821 01e0 00000000 		.quad	.LC36
 1821      00000000 
 1822 01e8 00000000 		.quad	.LC37
 1822      00000000 
 1823 01f0 00000000 		.quad	.LC36
 1823      00000000 
 1824 01f8 00000000 		.quad	.LC38
 1824      00000000 
 1825 0200 00000000 		.quad	.LC36
 1825      00000000 
 1826 0208 00000000 		.quad	.LC37
 1826      00000000 
 1827 0210 00000000 		.quad	.LC36
 1827      00000000 
 1828 0218 00000000 		.quad	.LC38
 1828      00000000 
 1829              		.section	.data._ZL9tile_cmap,"aw",@progbits
 1830              		.align 32
 1833              	_ZL9tile_cmap:
 1834 0000 4F206320 		.string	"O c #FFFFFF"
 1834      23464646 
 1834      46464600 
 1835 000c 00000000 		.zero	20
 1835      00000000 
 1835      00000000 
 1835      00000000 
 1835      00000000 
 1836 0020 6F206320 		.string	"o c #EFEFEF"
 1836      23454645 
 1836      46454600 
 1837 002c 00000000 		.zero	20
 1837      00000000 
 1837      00000000 
 1837      00000000 
 1837      00000000 
 1838 0040 2E206320 		.string	". c #E8E8E8"
 1838      23453845 
 1838      38453800 
 1839 004c 00000000 		.zero	20
 1839      00000000 
 1839      00000000 
 1839      00000000 
 1839      00000000 
 1840              		.section	.rodata.cst8,"aM",@progbits,8
 1841              		.align 8
 1842              	.LC2:
 1843 0000 10101010 		.long	269488144
 1844 0004 1010703F 		.long	1064308752
 1845              		.align 8
 1846              	.LC3:
 1847 0008 E0DFDFDF 		.long	3755991008
 1848 000c DFDFEF3F 		.long	1072685023
 1849              		.align 8
 1850              	.LC4:
 1851 0010 00000000 		.long	0
 1852 0014 00E06F40 		.long	1081073664
 1853              		.align 8
 1854              	.LC5:
 1855 0018 B3A3B9DE 		.long	3736708019
 1856 001c 9158D3BF 		.long	-1076668271
 1857              		.align 8
 1858              	.LC6:
 1859 0020 00000000 		.long	0
 1860 0024 00003740 		.long	1077346304
 1861              		.align 8
 1862              	.LC7:
 1863 0028 00000000 		.long	0
 1864 002c 0000E03F 		.long	1071644672
 1865              		.text
 1866              	.Letext0:
 1867              		.section	.text.unlikely._ZN2Fl10foregroundEhhh
 1868              	.Letext_cold0:
 1869              		.file 6 "fltk-1.3.4-1/FL/fl_types.h"
 1870              		.file 7 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1871              		.file 8 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1872              		.file 9 "/usr/include/libio.h"
 1873              		.file 10 "fltk-1.3.4-1/FL/Enumerations.H"
 1874              		.file 11 "fltk-1.3.4-1/FL/Fl.H"
 1875              		.file 12 "fltk-1.3.4-1/FL/Fl_Window.H"
 1876              		.file 13 "fltk-1.3.4-1/FL/Fl_Image.H"
 1877              		.file 14 "/usr/include/X11/X.h"
 1878              		.file 15 "/usr/include/X11/Xlib.h"
 1879              		.file 16 "fltk-1.3.4-1/FL/Fl_Device.H"
 1880              		.file 17 "/usr/include/stdio.h"
 1881              		.file 18 "fltk-1.3.4-1/FL/x.H"
 1882              		.file 19 "fltk-1.3.4-1/src/tile.xpm"
 1883              		.file 20 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
 1884              		.file 21 "fltk-1.3.4-1/src/flstring.h"
 1885              		.file 22 "/usr/include/stdlib.h"
 1886              		.file 23 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_get_system_colors.cxx
     /tmp/cceDxhul.s:16     .text._ZN2Fl10foregroundEhhh:0000000000000000 _ZN2Fl10foregroundEhhh
     /tmp/cceDxhul.s:1731   .bss._ZL9fl_fg_set:0000000000000000 _ZL9fl_fg_set
     /tmp/cceDxhul.s:48     .text._ZL19set_selection_colorhhh:0000000000000000 _ZL19set_selection_colorhhh
     /tmp/cceDxhul.s:79     .text._ZN2Fl10backgroundEhhh:0000000000000000 _ZN2Fl10backgroundEhhh
     /tmp/cceDxhul.s:1741   .bss._ZL9fl_bg_set:0000000000000000 _ZL9fl_bg_set
     /tmp/cceDxhul.s:276    .text._ZN2Fl11background2Ehhh:0000000000000000 _ZN2Fl11background2Ehhh
     /tmp/cceDxhul.s:1736   .bss._ZL10fl_bg2_set:0000000000000000 _ZL10fl_bg2_set
     /tmp/cceDxhul.s:329    .text._ZL11getsyscolorPKcS0_S0_S0_PFvhhhE:0000000000000000 _ZL11getsyscolorPKcS0_S0_S0_PFvhhhE
     /tmp/cceDxhul.s:436    .text._Z14fl_parse_colorPKcRhS1_S1_:0000000000000000 _Z14fl_parse_colorPKcRhS1_S1_
     /tmp/cceDxhul.s:560    .text._ZN2Fl17get_system_colorsEv:0000000000000000 _ZN2Fl17get_system_colorsEv
     /tmp/cceDxhul.s:1719   .bss.fl_bg:0000000000000000 fl_bg
     /tmp/cceDxhul.s:1712   .bss.fl_bg2:0000000000000000 fl_bg2
     /tmp/cceDxhul.s:1726   .bss.fl_fg:0000000000000000 fl_fg
     /tmp/cceDxhul.s:681    .text._ZN2Fl13reload_schemeEv:0000000000000000 _ZN2Fl13reload_schemeEv
     /tmp/cceDxhul.s:1705   .bss._ZN2Fl7scheme_E:0000000000000000 _ZN2Fl7scheme_E
     /tmp/cceDxhul.s:1698   .bss._ZN2Fl10scheme_bg_E:0000000000000000 _ZN2Fl10scheme_bg_E
     /tmp/cceDxhul.s:1833   .data._ZL9tile_cmap:0000000000000000 _ZL9tile_cmap
     /tmp/cceDxhul.s:1677   .rodata._ZZN2Fl13reload_schemeEvE6levels:0000000000000000 _ZZN2Fl13reload_schemeEvE6levels
     /tmp/cceDxhul.s:1691   .bss._ZL4tile:0000000000000000 _ZL4tile
     /tmp/cceDxhul.s:1348   .text._ZN2Fl6schemeEPKc:0000000000000000 _ZN2Fl6schemeEPKc
     /tmp/cceDxhul.s:1685   .bss._ZZN2Fl6schemeEPKcE1e:0000000000000000 _ZZN2Fl6schemeEPKcE1e
     /tmp/cceDxhul.s:1616   .text.startup._GLOBAL__sub_I__ZN2Fl10backgroundEhhh:0000000000000000 _GLOBAL__sub_I__ZN2Fl10backgroundEhhh
     /tmp/cceDxhul.s:1760   .rodata._ZL8tile_xpm:0000000000000000 _ZL8tile_xpm
     /tmp/cceDxhul.s:1850   .rodata.cst8:0000000000000010 .LC4
     /tmp/cceDxhul.s:1842   .rodata.cst8:0000000000000000 .LC2
     /tmp/cceDxhul.s:1854   .rodata.cst8:0000000000000018 .LC5
     /tmp/cceDxhul.s:1846   .rodata.cst8:0000000000000008 .LC3
     /tmp/cceDxhul.s:1858   .rodata.cst8:0000000000000020 .LC6
     /tmp/cceDxhul.s:1862   .rodata.cst8:0000000000000028 .LC7
     /tmp/cceDxhul.s:662    .rodata.str1.1:0000000000000063 .LC23
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
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b
                           .group:0000000000000000 wm4.math.h.26.671af5ac9cd425a35e0730f7b6d7cde2
                           .group:0000000000000000 wm4.libmsimddeclstubs.h.34.75644856b74ba3d815155fe5fe7ecc56
                           .group:0000000000000000 wm4.mathdef.h.23.67c0aa4a204f1f427459dfc651aba565
                           .group:0000000000000000 wm4.math.h.55.cf380f99c57d42476a5252f30065036a
                           .group:0000000000000000 wm4.math.h.84.742292806c6be54f49dc607928a827f7
                           .group:0000000000000000 wm4.math.h.105.59ff0f83ebf6a04e70e145cef2d1185e
                           .group:0000000000000000 wm4.math.h.152.afae4114fe3f3987f42ac5211c91e844
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
_ZN2Fl9set_colorEjhhh
log
pow
_Z11fl_contrastjj
_ZN2Fl9get_colorEj
_ZN2Fl9set_colorEjj
fl_colormap
fl_display
XParseColor
_ZN2Fl5errorE
XGetDefault
__stack_chk_fail
_Z15fl_open_displayv
_ZN2Fl12first_windowEv
_ZNK9Fl_Window6xclassEv
fl_ascii_strcasecmp
_Z25fl_define_FL_GLEAM_UP_BOXv
_ZN2Fl11set_boxtypeE10Fl_BoxtypeS0_
_ZN2Fl14scrollbar_sizeEi
_ZN2Fl9get_colorEjRhS0_S0_
__sprintf_chk
_Z11fl_up_frameiiiij
_ZN2Fl11set_boxtypeE10Fl_BoxtypePFviiiijEhhhh
_Z13fl_down_frameiiiij
_Z16fl_thin_up_frameiiiij
_Z18fl_thin_down_frameiiiij
_Z9fl_up_boxiiiij
_Z11fl_down_boxiiiij
_Z14fl_thin_up_boxiiiij
_Z16fl_thin_down_boxiiiij
_Z15fl_round_up_boxiiiij
_Z17fl_round_down_boxiiiij
_Z23fl_define_FL_GTK_UP_BOXv
_ZN9Fl_Widget6redrawEv
_ZN2Fl11next_windowEPK9Fl_Window
_ZN9Fl_Pixmap7uncacheEv
_Z27fl_define_FL_PLASTIC_UP_BOXv
_Znwm
_ZN14Fl_Tiled_ImageC1EP8Fl_Imageii
free
fl_strlcat
putenv
strdup
getenv
_ZN8Fl_ImageC2Eiii
_ZTV9Fl_Pixmap
_ZN9Fl_Pixmap8set_dataEPKPKc
_ZN9Fl_Pixmap7measureEv
__dso_handle
_ZN9Fl_PixmapD1Ev
__cxa_atexit
