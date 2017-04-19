   1              		.file	"fl_vertex.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN18Fl_Graphics_Driver13begin_polygonEv,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN18Fl_Graphics_Driver13begin_polygonEv,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN18Fl_Graphics_Driver13begin_polygonEv
  12              	.Ltext_cold0:
  13              		.section	.text._ZN18Fl_Graphics_Driver13begin_polygonEv
  14              		.globl	_ZN18Fl_Graphics_Driver13begin_polygonEv
  16              	_ZN18Fl_Graphics_Driver13begin_polygonEv:
  17              	.LFB478:
  18              		.file 1 "fltk-1.3.4-1/src/fl_vertex.cxx"
   1:fltk-1.3.4-1/src/fl_vertex.cxx **** ...
  19              		.loc 1 81 0
  20              		.cfi_startproc
  21              	.LVL0:
  22              		.loc 1 81 0
  23 0000 C7874806 		movl	$0, 1608(%rdi)
  23      00000000 
  23      0000
  24 000a C7876006 		movl	$2, 1632(%rdi)
  24      00000200 
  24      0000
  25 0014 C3       		ret
  26              		.cfi_endproc
  27              	.LFE478:
  29              		.section	.text.unlikely._ZN18Fl_Graphics_Driver13begin_polygonEv
  30              	.LCOLDE0:
  31              		.section	.text._ZN18Fl_Graphics_Driver13begin_polygonEv
  32              	.LHOTE0:
  33              		.section	.rodata.str1.8,"aMS",@progbits,1
  34              		.align 8
  35              	.LC1:
  36 0000 666C5F70 		.string	"fl_push_matrix(): matrix stack overflow."
  36      7573685F 
  36      6D617472 
  36      69782829 
  36      3A206D61 
  37              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11push_matrixEv,"ax",@progbits
  38              		.align 2
  39              	.LCOLDB2:
  40              		.section	.text._ZN18Fl_Graphics_Driver11push_matrixEv,"ax",@progbits
  41              	.LHOTB2:
  42              		.align 2
  43              		.p2align 4,,15
  44              		.globl	_ZN18Fl_Graphics_Driver11push_matrixEv
  46              	_ZN18Fl_Graphics_Driver11push_matrixEv:
  47              	.LFB471:
  48              		.loc 1 38 0
  49              		.cfi_startproc
  50              	.LVL1:
  51              		.loc 1 39 0
  52 0000 48634714 		movslq	20(%rdi), %rax
  53 0004 83F820   		cmpl	$32, %eax
  54 0007 7457     		je	.L5
  55              		.loc 1 42 0
  56 0009 8D5001   		leal	1(%rax), %edx
  57 000c 488D0440 		leaq	(%rax,%rax,2), %rax
  58 0010 895714   		movl	%edx, 20(%rdi)
  59 0013 48C1E004 		salq	$4, %rax
  60 0017 488B9718 		movq	1560(%rdi), %rdx
  60      060000
  61 001e 488D4407 		leaq	16(%rdi,%rax), %rax
  61      10
  62 0023 48895008 		movq	%rdx, 8(%rax)
  63 0027 488B9720 		movq	1568(%rdi), %rdx
  63      060000
  64 002e 48895010 		movq	%rdx, 16(%rax)
  65 0032 488B9728 		movq	1576(%rdi), %rdx
  65      060000
  66 0039 48895018 		movq	%rdx, 24(%rax)
  67 003d 488B9730 		movq	1584(%rdi), %rdx
  67      060000
  68 0044 48895020 		movq	%rdx, 32(%rax)
  69 0048 488B9738 		movq	1592(%rdi), %rdx
  69      060000
  70 004f 48895028 		movq	%rdx, 40(%rax)
  71 0053 488B9740 		movq	1600(%rdi), %rdx
  71      060000
  72 005a 48895030 		movq	%rdx, 48(%rax)
  73 005e C3       		ret
  74 005f 90       		.p2align 4,,10
  75              		.p2align 3
  76              	.L5:
  77              		.loc 1 40 0
  78 0060 BF000000 		movl	$.LC1, %edi
  78      00
  79              	.LVL2:
  80 0065 31C0     		xorl	%eax, %eax
  81 0067 FF250000 		jmp	*_ZN2Fl5errorE(%rip)
  81      0000
  82              	.LVL3:
  83              		.cfi_endproc
  84              	.LFE471:
  86              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11push_matrixEv
  87              	.LCOLDE2:
  88              		.section	.text._ZN18Fl_Graphics_Driver11push_matrixEv
  89              	.LHOTE2:
  90              		.section	.rodata.str1.8
  91 0029 00000000 		.align 8
  91      000000
  92              	.LC3:
  93 0030 666C5F70 		.string	"fl_pop_matrix(): matrix stack underflow."
  93      6F705F6D 
  93      61747269 
  93      7828293A 
  93      206D6174 
  94              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10pop_matrixEv,"ax",@progbits
  95              		.align 2
  96              	.LCOLDB4:
  97              		.section	.text._ZN18Fl_Graphics_Driver10pop_matrixEv,"ax",@progbits
  98              	.LHOTB4:
  99              		.align 2
 100              		.p2align 4,,15
 101              		.globl	_ZN18Fl_Graphics_Driver10pop_matrixEv
 103              	_ZN18Fl_Graphics_Driver10pop_matrixEv:
 104              	.LFB472:
 105              		.loc 1 45 0
 106              		.cfi_startproc
 107              	.LVL4:
 108              		.loc 1 46 0
 109 0000 8B4714   		movl	20(%rdi), %eax
 110 0003 85C0     		testl	%eax, %eax
 111 0005 7459     		je	.L8
 112              		.loc 1 49 0
 113 0007 83E801   		subl	$1, %eax
 114 000a 894714   		movl	%eax, 20(%rdi)
 115 000d 4898     		cltq
 116 000f 488D0440 		leaq	(%rax,%rax,2), %rax
 117 0013 48C1E004 		salq	$4, %rax
 118 0017 488D4407 		leaq	16(%rdi,%rax), %rax
 118      10
 119 001c 488B5008 		movq	8(%rax), %rdx
 120 0020 48899718 		movq	%rdx, 1560(%rdi)
 120      060000
 121 0027 488B5010 		movq	16(%rax), %rdx
 122 002b 48899720 		movq	%rdx, 1568(%rdi)
 122      060000
 123 0032 488B5018 		movq	24(%rax), %rdx
 124 0036 48899728 		movq	%rdx, 1576(%rdi)
 124      060000
 125 003d 488B5020 		movq	32(%rax), %rdx
 126 0041 48899730 		movq	%rdx, 1584(%rdi)
 126      060000
 127 0048 488B5028 		movq	40(%rax), %rdx
 128 004c 48899738 		movq	%rdx, 1592(%rdi)
 128      060000
 129 0053 488B4030 		movq	48(%rax), %rax
 130 0057 48898740 		movq	%rax, 1600(%rdi)
 130      060000
 131 005e C3       		ret
 132 005f 90       		.p2align 4,,10
 133              		.p2align 3
 134              	.L8:
 135              		.loc 1 47 0
 136 0060 BF000000 		movl	$.LC3, %edi
 136      00
 137              	.LVL5:
 138 0065 FF250000 		jmp	*_ZN2Fl5errorE(%rip)
 138      0000
 139              	.LVL6:
 140              		.cfi_endproc
 141              	.LFE472:
 143              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10pop_matrixEv
 144              	.LCOLDE4:
 145              		.section	.text._ZN18Fl_Graphics_Driver10pop_matrixEv
 146              	.LHOTE4:
 147              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11mult_matrixEdddddd,"ax",@progbits
 148              		.align 2
 149              	.LCOLDB5:
 150              		.section	.text._ZN18Fl_Graphics_Driver11mult_matrixEdddddd,"ax",@progbits
 151              	.LHOTB5:
 152              		.align 2
 153              		.p2align 4,,15
 154              		.globl	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 156              	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd:
 157              	.LFB473:
 158              		.loc 1 52 0
 159              		.cfi_startproc
 160              	.LVL7:
 161              		.loc 1 54 0
 162 0000 F2440F10 		movsd	1560(%rdi), %xmm10
 162      97180600 
 162      00
 163 0009 F20F10B7 		movsd	1576(%rdi), %xmm6
 163      28060000 
 164              	.LVL8:
 165              		.loc 1 55 0
 166 0011 F2440F10 		movsd	1568(%rdi), %xmm9
 166      8F200600 
 166      00
 167              		.loc 1 58 0
 168 001a 66450F28 		movapd	%xmm10, %xmm11
 168      DA
 169              		.loc 1 55 0
 170 001f F2440F10 		movsd	1584(%rdi), %xmm8
 170      87300600 
 170      00
 171              	.LVL9:
 172              		.loc 1 58 0
 173 0028 660F28FE 		movapd	%xmm6, %xmm7
 174 002c F2440F59 		mulsd	%xmm4, %xmm11
 174      DC
 175              		.loc 1 59 0
 176 0031 F2410F59 		mulsd	%xmm9, %xmm4
 176      E1
 177              	.LVL10:
 178              		.loc 1 58 0
 179 0036 F20F59FD 		mulsd	%xmm5, %xmm7
 180              		.loc 1 59 0
 181 003a F2410F59 		mulsd	%xmm8, %xmm5
 181      E8
 182              	.LVL11:
 183              		.loc 1 58 0
 184 003f F2410F58 		addsd	%xmm11, %xmm7
 184      FB
 185              		.loc 1 60 0
 186 0044 66450F28 		movapd	%xmm10, %xmm11
 186      DA
 187              		.loc 1 59 0
 188 0049 F20F58EC 		addsd	%xmm4, %xmm5
 189              		.loc 1 60 0
 190 004d 660F28E6 		movapd	%xmm6, %xmm4
 191 0051 F2440F59 		mulsd	%xmm0, %xmm11
 191      D8
 192 0056 F20F59E1 		mulsd	%xmm1, %xmm4
 193 005a F2440F59 		mulsd	%xmm2, %xmm10
 193      D2
 194              	.LVL12:
 195              		.loc 1 58 0
 196 005f F20F58BF 		addsd	1592(%rdi), %xmm7
 196      38060000 
 197              		.loc 1 60 0
 198 0067 F20F59F3 		mulsd	%xmm3, %xmm6
 199              	.LVL13:
 200              		.loc 1 59 0
 201 006b F20F58AF 		addsd	1600(%rdi), %xmm5
 201      40060000 
 202              		.loc 1 60 0
 203 0073 F2410F59 		mulsd	%xmm9, %xmm0
 203      C1
 204              	.LVL14:
 205 0078 F2410F59 		mulsd	%xmm8, %xmm1
 205      C8
 206              	.LVL15:
 207 007d F2410F58 		addsd	%xmm11, %xmm4
 207      E3
 208              	.LVL16:
 209 0082 F2410F59 		mulsd	%xmm9, %xmm2
 209      D1
 210              	.LVL17:
 211 0087 F2410F59 		mulsd	%xmm8, %xmm3
 211      D8
 212              	.LVL18:
 213 008c F2410F58 		addsd	%xmm10, %xmm6
 213      F2
 214              	.LVL19:
 215 0091 F20F11BF 		movsd	%xmm7, 1592(%rdi)
 215      38060000 
 216 0099 F20F58C1 		addsd	%xmm1, %xmm0
 217              	.LVL20:
 218 009d F20F11A7 		movsd	%xmm4, 1560(%rdi)
 218      18060000 
 219 00a5 F20F11AF 		movsd	%xmm5, 1600(%rdi)
 219      40060000 
 220              	.LVL21:
 221 00ad F20F58D3 		addsd	%xmm3, %xmm2
 222 00b1 F20F11B7 		movsd	%xmm6, 1576(%rdi)
 222      28060000 
 223 00b9 F20F1187 		movsd	%xmm0, 1568(%rdi)
 223      20060000 
 224 00c1 F20F1197 		movsd	%xmm2, 1584(%rdi)
 224      30060000 
 225 00c9 C3       		ret
 226              		.cfi_endproc
 227              	.LFE473:
 229              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 230              	.LCOLDE5:
 231              		.section	.text._ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 232              	.LHOTE5:
 233              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6rotateEd,"ax",@progbits
 234              		.align 2
 235              	.LCOLDB16:
 236              		.section	.text._ZN18Fl_Graphics_Driver6rotateEd,"ax",@progbits
 237              	.LHOTB16:
 238              		.align 2
 239              		.p2align 4,,15
 240              		.globl	_ZN18Fl_Graphics_Driver6rotateEd
 242              	_ZN18Fl_Graphics_Driver6rotateEd:
 243              	.LFB474:
 244              		.loc 1 63 0
 245              		.cfi_startproc
 246              	.LVL22:
 247              	.LBB10:
 248              		.loc 1 64 0
 249 0000 660FEFD2 		pxor	%xmm2, %xmm2
 250              	.LBE10:
 251              		.loc 1 63 0
 252 0004 53       		pushq	%rbx
 253              		.cfi_def_cfa_offset 16
 254              		.cfi_offset 3, -16
 255 0005 4883EC10 		subq	$16, %rsp
 256              		.cfi_def_cfa_offset 32
 257              	.LBB15:
 258              		.loc 1 64 0
 259 0009 660F2EC2 		ucomisd	%xmm2, %xmm0
 260 000d 7A06     		jp	.L19
 261 000f 0F848B00 		je	.L22
 261      0000
 262              	.L19:
 263              	.LBB11:
 264              		.loc 1 67 0
 265 0015 660F2E05 		ucomisd	.LC10(%rip), %xmm0
 265      00000000 
 266 001d 4889FB   		movq	%rdi, %rbx
 267 0020 7A06     		jp	.L20
 268              	.LVL23:
 269 0022 0F848800 		je	.L16
 269      0000
 270              	.L20:
 271              		.loc 1 68 0
 272 0028 F20F100D 		movsd	.LC11(%rip), %xmm1
 272      00000000 
 273 0030 660F2EC1 		ucomisd	%xmm1, %xmm0
 274 0034 7A06     		jp	.L21
 275 0036 0F84A400 		je	.L17
 275      0000
 276              	.L21:
 277              		.loc 1 69 0
 278 003c 660F2E05 		ucomisd	.LC12(%rip), %xmm0
 278      00000000 
 279 0044 BA000000 		movl	$0, %edx
 279      00
 280 0049 0F9BC0   		setnp	%al
 281 004c 0F45C2   		cmovne	%edx, %eax
 282 004f 84C0     		testb	%al, %al
 283 0051 0F85A100 		jne	.L18
 283      0000
 284 0057 660F2E05 		ucomisd	.LC13(%rip), %xmm0
 284      00000000 
 285 005f 0F9BC2   		setnp	%dl
 286 0062 0F44C2   		cmove	%edx, %eax
 287 0065 84C0     		testb	%al, %al
 288 0067 0F858B00 		jne	.L18
 288      0000
 289 006d F20F5905 		mulsd	.LC14(%rip), %xmm0
 289      00000000 
 290              	.LVL24:
 291 0075 488D7C24 		leaq	8(%rsp), %rdi
 291      08
 292 007a 4889E6   		movq	%rsp, %rsi
 293 007d F20F5EC1 		divsd	%xmm1, %xmm0
 294 0081 E8000000 		call	sincos
 294      00
 295              	.LVL25:
 296 0086 F20F1054 		movsd	8(%rsp), %xmm2
 296      2408
 297              	.LVL26:
 298 008c F20F100D 		movsd	.LC15(%rip), %xmm1
 298      00000000 
 299              		.loc 1 70 0
 300 0094 F20F1004 		movsd	(%rsp), %xmm0
 300      24
 301              	.LVL27:
 302 0099 660F57CA 		xorpd	%xmm2, %xmm1
 303 009d EB25     		jmp	.L13
 304              	.LVL28:
 305 009f 90       		.p2align 4,,10
 306              		.p2align 3
 307              	.L22:
 308              	.LBE11:
 309              	.LBE15:
 310              		.loc 1 73 0
 311 00a0 4883C410 		addq	$16, %rsp
 312              		.cfi_remember_state
 313              		.cfi_def_cfa_offset 16
 314 00a4 5B       		popq	%rbx
 315              		.cfi_def_cfa_offset 8
 316 00a5 C3       		ret
 317              	.LVL29:
 318 00a6 662E0F1F 		.p2align 4,,10
 318      84000000 
 318      0000
 319              		.p2align 3
 320              	.L16:
 321              		.cfi_restore_state
 322              	.LBB16:
 323              	.LBB12:
 324              		.loc 1 67 0
 325 00b0 660F28C2 		movapd	%xmm2, %xmm0
 326              	.LVL30:
 327 00b4 F20F100D 		movsd	.LC6(%rip), %xmm1
 327      00000000 
 328 00bc F20F1015 		movsd	.LC8(%rip), %xmm2
 328      00000000 
 329              	.L13:
 330              	.LVL31:
 331              		.loc 1 71 0
 332 00c4 660FEFED 		pxor	%xmm5, %xmm5
 333              	.LBE12:
 334              	.LBE16:
 335              		.loc 1 73 0
 336 00c8 4883C410 		addq	$16, %rsp
 337              		.cfi_remember_state
 338              		.cfi_def_cfa_offset 16
 339              	.LBB17:
 340              	.LBB13:
 341              		.loc 1 71 0
 342 00cc 4889DF   		movq	%rbx, %rdi
 343              	.LBE13:
 344              	.LBE17:
 345              		.loc 1 73 0
 346 00cf 5B       		popq	%rbx
 347              		.cfi_def_cfa_offset 8
 348              	.LVL32:
 349              	.LBB18:
 350              	.LBB14:
 351              		.loc 1 71 0
 352 00d0 660F28D8 		movapd	%xmm0, %xmm3
 353 00d4 660F28E5 		movapd	%xmm5, %xmm4
 354 00d8 E9000000 		jmp	_ZN18Fl_Graphics_Driver11mult_matrixEdddddd
 354      00
 355              	.LVL33:
 356 00dd 0F1F00   		.p2align 4,,10
 357              		.p2align 3
 358              	.L17:
 359              		.cfi_restore_state
 360 00e0 F20F100D 		movsd	.LC9(%rip), %xmm1
 360      00000000 
 361              		.loc 1 68 0
 362 00e8 F20F1005 		movsd	.LC6(%rip), %xmm0
 362      00000000 
 363              	.LVL34:
 364 00f0 EBD2     		jmp	.L13
 365              	.LVL35:
 366              		.p2align 4,,10
 367 00f2 660F1F44 		.p2align 3
 367      0000
 368              	.L18:
 369              		.loc 1 69 0
 370 00f8 660F28C2 		movapd	%xmm2, %xmm0
 371              	.LVL36:
 372 00fc F20F100D 		movsd	.LC8(%rip), %xmm1
 372      00000000 
 373 0104 F20F1015 		movsd	.LC6(%rip), %xmm2
 373      00000000 
 374 010c EBB6     		jmp	.L13
 375              	.LBE14:
 376              	.LBE18:
 377              		.cfi_endproc
 378              	.LFE474:
 380              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6rotateEd
 381              	.LCOLDE16:
 382              		.section	.text._ZN18Fl_Graphics_Driver6rotateEd
 383              	.LHOTE16:
 384              		.section	.text.unlikely._ZN18Fl_Graphics_Driver12begin_pointsEv,"ax",@progbits
 385              		.align 2
 386              	.LCOLDB17:
 387              		.section	.text._ZN18Fl_Graphics_Driver12begin_pointsEv,"ax",@progbits
 388              	.LHOTB17:
 389              		.align 2
 390              		.p2align 4,,15
 391              		.globl	_ZN18Fl_Graphics_Driver12begin_pointsEv
 393              	_ZN18Fl_Graphics_Driver12begin_pointsEv:
 394              	.LFB475:
 395              		.loc 1 75 0
 396              		.cfi_startproc
 397              	.LVL37:
 398              		.loc 1 75 0
 399 0000 C7874806 		movl	$0, 1608(%rdi)
 399      00000000 
 399      0000
 400 000a C7876006 		movl	$3, 1632(%rdi)
 400      00000300 
 400      0000
 401 0014 C3       		ret
 402              		.cfi_endproc
 403              	.LFE475:
 405              		.section	.text.unlikely._ZN18Fl_Graphics_Driver12begin_pointsEv
 406              	.LCOLDE17:
 407              		.section	.text._ZN18Fl_Graphics_Driver12begin_pointsEv
 408              	.LHOTE17:
 409              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10begin_lineEv,"ax",@progbits
 410              		.align 2
 411              	.LCOLDB18:
 412              		.section	.text._ZN18Fl_Graphics_Driver10begin_lineEv,"ax",@progbits
 413              	.LHOTB18:
 414              		.align 2
 415              		.p2align 4,,15
 416              		.globl	_ZN18Fl_Graphics_Driver10begin_lineEv
 418              	_ZN18Fl_Graphics_Driver10begin_lineEv:
 419              	.LFB476:
 420              		.loc 1 77 0
 421              		.cfi_startproc
 422              	.LVL38:
 423              		.loc 1 77 0
 424 0000 C7874806 		movl	$0, 1608(%rdi)
 424      00000000 
 424      0000
 425 000a C7876006 		movl	$0, 1632(%rdi)
 425      00000000 
 425      0000
 426 0014 C3       		ret
 427              		.cfi_endproc
 428              	.LFE476:
 430              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10begin_lineEv
 431              	.LCOLDE18:
 432              		.section	.text._ZN18Fl_Graphics_Driver10begin_lineEv
 433              	.LHOTE18:
 434              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10begin_loopEv,"ax",@progbits
 435              		.align 2
 436              	.LCOLDB19:
 437              		.section	.text._ZN18Fl_Graphics_Driver10begin_loopEv,"ax",@progbits
 438              	.LHOTB19:
 439              		.align 2
 440              		.p2align 4,,15
 441              		.globl	_ZN18Fl_Graphics_Driver10begin_loopEv
 443              	_ZN18Fl_Graphics_Driver10begin_loopEv:
 444              	.LFB477:
 445              		.loc 1 79 0
 446              		.cfi_startproc
 447              	.LVL39:
 448              		.loc 1 79 0
 449 0000 C7874806 		movl	$0, 1608(%rdi)
 449      00000000 
 449      0000
 450 000a C7876006 		movl	$1, 1632(%rdi)
 450      00000100 
 450      0000
 451 0014 C3       		ret
 452              		.cfi_endproc
 453              	.LFE477:
 455              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10begin_loopEv
 456              	.LCOLDE19:
 457              		.section	.text._ZN18Fl_Graphics_Driver10begin_loopEv
 458              	.LHOTE19:
 459              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11transform_xEdd,"ax",@progbits
 460              		.align 2
 461              	.LCOLDB20:
 462              		.section	.text._ZN18Fl_Graphics_Driver11transform_xEdd,"ax",@progbits
 463              	.LHOTB20:
 464              		.align 2
 465              		.p2align 4,,15
 466              		.globl	_ZN18Fl_Graphics_Driver11transform_xEdd
 468              	_ZN18Fl_Graphics_Driver11transform_xEdd:
 469              	.LFB479:
 470              		.loc 1 83 0
 471              		.cfi_startproc
 472              	.LVL40:
 473              		.loc 1 83 0
 474 0000 F20F5987 		mulsd	1560(%rdi), %xmm0
 474      18060000 
 475              	.LVL41:
 476 0008 F20F598F 		mulsd	1576(%rdi), %xmm1
 476      28060000 
 477              	.LVL42:
 478 0010 F20F58C1 		addsd	%xmm1, %xmm0
 479 0014 F20F5887 		addsd	1592(%rdi), %xmm0
 479      38060000 
 480 001c C3       		ret
 481              		.cfi_endproc
 482              	.LFE479:
 484              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11transform_xEdd
 485              	.LCOLDE20:
 486              		.section	.text._ZN18Fl_Graphics_Driver11transform_xEdd
 487              	.LHOTE20:
 488              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11transform_yEdd,"ax",@progbits
 489              		.align 2
 490              	.LCOLDB21:
 491              		.section	.text._ZN18Fl_Graphics_Driver11transform_yEdd,"ax",@progbits
 492              	.LHOTB21:
 493              		.align 2
 494              		.p2align 4,,15
 495              		.globl	_ZN18Fl_Graphics_Driver11transform_yEdd
 497              	_ZN18Fl_Graphics_Driver11transform_yEdd:
 498              	.LFB480:
 499              		.loc 1 85 0
 500              		.cfi_startproc
 501              	.LVL43:
 502              		.loc 1 85 0
 503 0000 F20F5987 		mulsd	1568(%rdi), %xmm0
 503      20060000 
 504              	.LVL44:
 505 0008 F20F598F 		mulsd	1584(%rdi), %xmm1
 505      30060000 
 506              	.LVL45:
 507 0010 F20F58C1 		addsd	%xmm1, %xmm0
 508 0014 F20F5887 		addsd	1600(%rdi), %xmm0
 508      40060000 
 509 001c C3       		ret
 510              		.cfi_endproc
 511              	.LFE480:
 513              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11transform_yEdd
 514              	.LCOLDE21:
 515              		.section	.text._ZN18Fl_Graphics_Driver11transform_yEdd
 516              	.LHOTE21:
 517              		.section	.text.unlikely._ZN18Fl_Graphics_Driver12transform_dxEdd,"ax",@progbits
 518              		.align 2
 519              	.LCOLDB22:
 520              		.section	.text._ZN18Fl_Graphics_Driver12transform_dxEdd,"ax",@progbits
 521              	.LHOTB22:
 522              		.align 2
 523              		.p2align 4,,15
 524              		.globl	_ZN18Fl_Graphics_Driver12transform_dxEdd
 526              	_ZN18Fl_Graphics_Driver12transform_dxEdd:
 527              	.LFB481:
 528              		.loc 1 87 0
 529              		.cfi_startproc
 530              	.LVL46:
 531              		.loc 1 87 0
 532 0000 F20F5987 		mulsd	1560(%rdi), %xmm0
 532      18060000 
 533              	.LVL47:
 534 0008 F20F598F 		mulsd	1576(%rdi), %xmm1
 534      28060000 
 535              	.LVL48:
 536 0010 F20F58C1 		addsd	%xmm1, %xmm0
 537 0014 C3       		ret
 538              		.cfi_endproc
 539              	.LFE481:
 541              		.section	.text.unlikely._ZN18Fl_Graphics_Driver12transform_dxEdd
 542              	.LCOLDE22:
 543              		.section	.text._ZN18Fl_Graphics_Driver12transform_dxEdd
 544              	.LHOTE22:
 545              		.section	.text.unlikely._ZN18Fl_Graphics_Driver12transform_dyEdd,"ax",@progbits
 546              		.align 2
 547              	.LCOLDB23:
 548              		.section	.text._ZN18Fl_Graphics_Driver12transform_dyEdd,"ax",@progbits
 549              	.LHOTB23:
 550              		.align 2
 551              		.p2align 4,,15
 552              		.globl	_ZN18Fl_Graphics_Driver12transform_dyEdd
 554              	_ZN18Fl_Graphics_Driver12transform_dyEdd:
 555              	.LFB482:
 556              		.loc 1 89 0
 557              		.cfi_startproc
 558              	.LVL49:
 559              		.loc 1 89 0
 560 0000 F20F5987 		mulsd	1568(%rdi), %xmm0
 560      20060000 
 561              	.LVL50:
 562 0008 F20F598F 		mulsd	1584(%rdi), %xmm1
 562      30060000 
 563              	.LVL51:
 564 0010 F20F58C1 		addsd	%xmm1, %xmm0
 565 0014 C3       		ret
 566              		.cfi_endproc
 567              	.LFE482:
 569              		.section	.text.unlikely._ZN18Fl_Graphics_Driver12transform_dyEdd
 570              	.LCOLDE23:
 571              		.section	.text._ZN18Fl_Graphics_Driver12transform_dyEdd
 572              	.LHOTE23:
 573              		.section	.text.unlikely._ZN18Fl_Graphics_Driver19transformed_vertex0Ess,"ax",@progbits
 574              		.align 2
 575              	.LCOLDB24:
 576              		.section	.text._ZN18Fl_Graphics_Driver19transformed_vertex0Ess,"ax",@progbits
 577              	.LHOTB24:
 578              		.align 2
 579              		.p2align 4,,15
 580              		.globl	_ZN18Fl_Graphics_Driver19transformed_vertex0Ess
 582              	_ZN18Fl_Graphics_Driver19transformed_vertex0Ess:
 583              	.LFB483:
 584              		.loc 1 91 0
 585              		.cfi_startproc
 586              	.LVL52:
 587 0000 4154     		pushq	%r12
 588              		.cfi_def_cfa_offset 16
 589              		.cfi_offset 12, -16
 590 0002 55       		pushq	%rbp
 591              		.cfi_def_cfa_offset 24
 592              		.cfi_offset 6, -24
 593 0003 53       		pushq	%rbx
 594              		.cfi_def_cfa_offset 32
 595              		.cfi_offset 3, -32
 596              		.loc 1 92 0
 597 0004 48638F48 		movslq	1608(%rdi), %rcx
 597      060000
 598 000b 488B8758 		movq	1624(%rdi), %rax
 598      060000
 599 0012 85C9     		testl	%ecx, %ecx
 600 0014 740E     		je	.L33
 601              		.loc 1 92 0 is_stmt 0 discriminator 1
 602 0016 4C63C1   		movslq	%ecx, %r8
 603 0019 4E8D4480 		leaq	-4(%rax,%r8,4), %r8
 603      FC
 604 001e 66413930 		cmpw	%si, (%r8)
 605 0022 7464     		je	.L39
 606              	.L33:
 607 0024 89F5     		movl	%esi, %ebp
 608              		.loc 1 93 0 is_stmt 1
 609 0026 8BB74C06 		movl	1612(%rdi), %esi
 609      0000
 610              	.LVL53:
 611 002c 4189D4   		movl	%edx, %r12d
 612 002f 4889FB   		movq	%rdi, %rbx
 613 0032 39F1     		cmpl	%esi, %ecx
 614 0034 7C2B     		jl	.L35
 615              	.LVL54:
 616              		.loc 1 94 0
 617 0036 4885C0   		testq	%rax, %rax
 618 0039 745D     		je	.L37
 619              		.loc 1 94 0 is_stmt 0 discriminator 1
 620 003b 8D0C36   		leal	(%rsi,%rsi), %ecx
 621 003e 4863F1   		movslq	%ecx, %rsi
 622 0041 48C1E602 		salq	$2, %rsi
 623              	.L36:
 624              		.loc 1 94 0 discriminator 4
 625 0045 898B4C06 		movl	%ecx, 1612(%rbx)
 625      0000
 626              		.loc 1 95 0 is_stmt 1 discriminator 4
 627 004b 4889C7   		movq	%rax, %rdi
 628 004e E8000000 		call	realloc
 628      00
 629              	.LVL55:
 630 0053 48638B48 		movslq	1608(%rbx), %rcx
 630      060000
 631 005a 48898358 		movq	%rax, 1624(%rbx)
 631      060000
 632              	.L35:
 633              		.loc 1 97 0
 634 0061 66892C88 		movw	%bp, (%rax,%rcx,4)
 635              		.loc 1 98 0
 636 0065 48639348 		movslq	1608(%rbx), %rdx
 636      060000
 637 006c 488B8358 		movq	1624(%rbx), %rax
 637      060000
 638 0073 66448964 		movw	%r12w, 2(%rax,%rdx,4)
 638      9002
 639              		.loc 1 99 0
 640 0079 83834806 		addl	$1, 1608(%rbx)
 640      000001
 641              	.LVL56:
 642              	.L31:
 643              		.loc 1 101 0
 644 0080 5B       		popq	%rbx
 645              		.cfi_remember_state
 646              		.cfi_def_cfa_offset 24
 647 0081 5D       		popq	%rbp
 648              		.cfi_def_cfa_offset 16
 649 0082 415C     		popq	%r12
 650              		.cfi_def_cfa_offset 8
 651 0084 C3       		ret
 652              	.LVL57:
 653              		.p2align 4,,10
 654 0085 0F1F00   		.p2align 3
 655              	.L39:
 656              		.cfi_restore_state
 657              		.loc 1 92 0 discriminator 2
 658 0088 66413950 		cmpw	%dx, 2(%r8)
 658      02
 659 008d 7595     		jne	.L33
 660 008f EBEF     		jmp	.L31
 661              	.LVL58:
 662              		.p2align 4,,10
 663 0091 0F1F8000 		.p2align 3
 663      000000
 664              	.L37:
 665 0098 BE400000 		movl	$64, %esi
 665      00
 666              		.loc 1 94 0
 667 009d B9100000 		movl	$16, %ecx
 667      00
 668 00a2 EBA1     		jmp	.L36
 669              		.cfi_endproc
 670              	.LFE483:
 672              		.section	.text.unlikely._ZN18Fl_Graphics_Driver19transformed_vertex0Ess
 673              	.LCOLDE24:
 674              		.section	.text._ZN18Fl_Graphics_Driver19transformed_vertex0Ess
 675              	.LHOTE24:
 676              		.section	.text.unlikely._ZN18Fl_Graphics_Driver18transformed_vertexEdd,"ax",@progbits
 677              		.align 2
 678              	.LCOLDB25:
 679              		.section	.text._ZN18Fl_Graphics_Driver18transformed_vertexEdd,"ax",@progbits
 680              	.LHOTB25:
 681              		.align 2
 682              		.p2align 4,,15
 683              		.globl	_ZN18Fl_Graphics_Driver18transformed_vertexEdd
 685              	_ZN18Fl_Graphics_Driver18transformed_vertexEdd:
 686              	.LFB484:
 687              		.loc 1 103 0
 688              		.cfi_startproc
 689              	.LVL59:
 690 0000 53       		pushq	%rbx
 691              		.cfi_def_cfa_offset 16
 692              		.cfi_offset 3, -16
 693 0001 4889FB   		movq	%rdi, %rbx
 694 0004 4883EC10 		subq	$16, %rsp
 695              		.cfi_def_cfa_offset 32
 696              		.loc 1 103 0
 697 0008 F20F1144 		movsd	%xmm0, 8(%rsp)
 697      2408
 698              		.loc 1 107 0
 699 000e 660F28C1 		movapd	%xmm1, %xmm0
 700              	.LVL60:
 701 0012 E8000000 		call	rint
 701      00
 702              	.LVL61:
 703 0017 F20F1054 		movsd	8(%rsp), %xmm2
 703      2408
 704 001d F20F1104 		movsd	%xmm0, (%rsp)
 704      24
 705 0022 660F28C2 		movapd	%xmm2, %xmm0
 706 0026 E8000000 		call	rint
 706      00
 707              	.LVL62:
 708 002b F20F100C 		movsd	(%rsp), %xmm1
 708      24
 709              		.loc 1 109 0
 710 0030 4883C410 		addq	$16, %rsp
 711              		.cfi_def_cfa_offset 16
 712              		.loc 1 107 0
 713 0034 F20F2CF0 		cvttsd2si	%xmm0, %esi
 714 0038 4889DF   		movq	%rbx, %rdi
 715 003b F20F2CD1 		cvttsd2si	%xmm1, %edx
 716              		.loc 1 109 0
 717 003f 5B       		popq	%rbx
 718              		.cfi_def_cfa_offset 8
 719              	.LVL63:
 720              		.loc 1 107 0
 721 0040 0FBFF6   		movswl	%si, %esi
 722 0043 0FBFD2   		movswl	%dx, %edx
 723 0046 E9000000 		jmp	_ZN18Fl_Graphics_Driver19transformed_vertex0Ess
 723      00
 724              	.LVL64:
 725              		.cfi_endproc
 726              	.LFE484:
 728              		.section	.text.unlikely._ZN18Fl_Graphics_Driver18transformed_vertexEdd
 729              	.LCOLDE25:
 730              		.section	.text._ZN18Fl_Graphics_Driver18transformed_vertexEdd
 731              	.LHOTE25:
 732              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6vertexEdd,"ax",@progbits
 733              		.align 2
 734              	.LCOLDB26:
 735              		.section	.text._ZN18Fl_Graphics_Driver6vertexEdd,"ax",@progbits
 736              	.LHOTB26:
 737              		.align 2
 738              		.p2align 4,,15
 739              		.globl	_ZN18Fl_Graphics_Driver6vertexEdd
 741              	_ZN18Fl_Graphics_Driver6vertexEdd:
 742              	.LFB485:
 743              		.loc 1 111 0
 744              		.cfi_startproc
 745              	.LVL65:
 746              		.loc 1 112 0
 747 0000 F20F109F 		movsd	1568(%rdi), %xmm3
 747      20060000 
 748 0008 F20F1097 		movsd	1584(%rdi), %xmm2
 748      30060000 
 749 0010 F20F59D8 		mulsd	%xmm0, %xmm3
 750 0014 F20F59D1 		mulsd	%xmm1, %xmm2
 751 0018 F20F5987 		mulsd	1560(%rdi), %xmm0
 751      18060000 
 752              	.LVL66:
 753 0020 F20F598F 		mulsd	1576(%rdi), %xmm1
 753      28060000 
 754              	.LVL67:
 755 0028 F20F58D3 		addsd	%xmm3, %xmm2
 756 002c F20F58C8 		addsd	%xmm0, %xmm1
 757 0030 F20F5897 		addsd	1600(%rdi), %xmm2
 757      40060000 
 758 0038 F20F588F 		addsd	1592(%rdi), %xmm1
 758      38060000 
 759 0040 F20F2CD2 		cvttsd2si	%xmm2, %edx
 760 0044 F20F2CF1 		cvttsd2si	%xmm1, %esi
 761 0048 0FBFD2   		movswl	%dx, %edx
 762 004b 0FBFF6   		movswl	%si, %esi
 763 004e E9000000 		jmp	_ZN18Fl_Graphics_Driver19transformed_vertex0Ess
 763      00
 764              	.LVL68:
 765              		.cfi_endproc
 766              	.LFE485:
 768              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6vertexEdd
 769              	.LCOLDE26:
 770              		.section	.text._ZN18Fl_Graphics_Driver6vertexEdd
 771              	.LHOTE26:
 772              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10end_pointsEv,"ax",@progbits
 773              		.align 2
 774              	.LCOLDB27:
 775              		.section	.text._ZN18Fl_Graphics_Driver10end_pointsEv,"ax",@progbits
 776              	.LHOTB27:
 777              		.align 2
 778              		.p2align 4,,15
 779              		.globl	_ZN18Fl_Graphics_Driver10end_pointsEv
 781              	_ZN18Fl_Graphics_Driver10end_pointsEv:
 782              	.LFB486:
 783              		.loc 1 115 0
 784              		.cfi_startproc
 785              	.LVL69:
 786              		.loc 1 117 0
 787 0000 448B8748 		movl	1608(%rdi), %r8d
 787      060000
 788 0007 4183F801 		cmpl	$1, %r8d
 789 000b 7E2B     		jle	.L43
 790              		.loc 1 117 0 is_stmt 0 discriminator 1
 791 000d 488B8F58 		movq	1624(%rdi), %rcx
 791      060000
 792 0014 488B1500 		movq	fl_gc(%rip), %rdx
 792      000000
 793 001b 4531C9   		xorl	%r9d, %r9d
 794 001e 488B3500 		movq	fl_window(%rip), %rsi
 794      000000
 795 0025 488B3D00 		movq	fl_display(%rip), %rdi
 795      000000
 796              	.LVL70:
 797 002c E9000000 		jmp	XDrawPoints
 797      00
 798              	.LVL71:
 799              		.p2align 4,,10
 800 0031 0F1F8000 		.p2align 3
 800      000000
 801              	.L43:
 802 0038 F3C3     		rep ret
 803              		.cfi_endproc
 804              	.LFE486:
 806              		.section	.text.unlikely._ZN18Fl_Graphics_Driver10end_pointsEv
 807              	.LCOLDE27:
 808              		.section	.text._ZN18Fl_Graphics_Driver10end_pointsEv
 809              	.LHOTE27:
 810              		.section	.text.unlikely._ZN18Fl_Graphics_Driver8end_lineEv,"ax",@progbits
 811              		.align 2
 812              	.LCOLDB28:
 813              		.section	.text._ZN18Fl_Graphics_Driver8end_lineEv,"ax",@progbits
 814              	.LHOTB28:
 815              		.align 2
 816              		.p2align 4,,15
 817              		.globl	_ZN18Fl_Graphics_Driver8end_lineEv
 819              	_ZN18Fl_Graphics_Driver8end_lineEv:
 820              	.LFB487:
 821              		.loc 1 133 0 is_stmt 1
 822              		.cfi_startproc
 823              	.LVL72:
 824              		.loc 1 134 0
 825 0000 448B8748 		movl	1608(%rdi), %r8d
 825      060000
 826 0007 4183F801 		cmpl	$1, %r8d
 827 000b 7E2B     		jle	.L47
 828              		.loc 1 139 0 discriminator 1
 829 000d 488B8F58 		movq	1624(%rdi), %rcx
 829      060000
 830 0014 488B1500 		movq	fl_gc(%rip), %rdx
 830      000000
 831 001b 4531C9   		xorl	%r9d, %r9d
 832 001e 488B3500 		movq	fl_window(%rip), %rsi
 832      000000
 833 0025 488B3D00 		movq	fl_display(%rip), %rdi
 833      000000
 834              	.LVL73:
 835 002c E9000000 		jmp	XDrawLines
 835      00
 836              	.LVL74:
 837              		.p2align 4,,10
 838 0031 0F1F8000 		.p2align 3
 838      000000
 839              	.L47:
 840              		.loc 1 135 0
 841 0038 488B07   		movq	(%rdi), %rax
 842 003b FFA01001 		jmp	*272(%rax)
 842      0000
 843              	.LVL75:
 844              		.cfi_endproc
 845              	.LFE487:
 847              		.section	.text.unlikely._ZN18Fl_Graphics_Driver8end_lineEv
 848              	.LCOLDE28:
 849              		.section	.text._ZN18Fl_Graphics_Driver8end_lineEv
 850              	.LHOTE28:
 851              		.section	.text.unlikely._ZN18Fl_Graphics_Driver7fixloopEv,"ax",@progbits
 852              		.align 2
 853              	.LCOLDB29:
 854              		.section	.text._ZN18Fl_Graphics_Driver7fixloopEv,"ax",@progbits
 855              	.LHOTB29:
 856              		.align 2
 857              		.p2align 4,,15
 858              		.globl	_ZN18Fl_Graphics_Driver7fixloopEv
 860              	_ZN18Fl_Graphics_Driver7fixloopEv:
 861              	.LFB488:
 862              		.loc 1 155 0
 863              		.cfi_startproc
 864              	.LVL76:
 865              		.loc 1 156 0
 866 0000 8B974806 		movl	1608(%rdi), %edx
 866      0000
 867 0006 83FA02   		cmpl	$2, %edx
 868 0009 7E61     		jle	.L48
 869 000b 488B8F58 		movq	1624(%rdi), %rcx
 869      060000
 870 0012 4863C2   		movslq	%edx, %rax
 871 0015 48C1E002 		salq	$2, %rax
 872 0019 488D7401 		leaq	-4(%rcx,%rax), %rsi
 872      FC
 873 001e 440FB711 		movzwl	(%rcx), %r10d
 874 0022 66443916 		cmpw	%r10w, (%rsi)
 875 0026 7544     		jne	.L48
 876 0028 440FB759 		movzwl	2(%rcx), %r11d
 876      02
 877 002d 6644395E 		cmpw	%r11w, 2(%rsi)
 877      02
 878 0032 7538     		jne	.L48
 879 0034 83EA01   		subl	$1, %edx
 880 0037 4801C8   		addq	%rcx, %rax
 881 003a EB25     		jmp	.L51
 882 003c 0F1F4000 		.p2align 4,,10
 883              		.p2align 3
 884              	.L56:
 885              		.loc 1 156 0 is_stmt 0 discriminator 1
 886 0040 440FB701 		movzwl	(%rcx), %r8d
 887 0044 4889C6   		movq	%rax, %rsi
 888 0047 66443940 		cmpw	%r8w, -8(%rax)
 888      F8
 889 004c 751E     		jne	.L48
 890              		.loc 1 156 0 discriminator 2
 891 004e 440FB749 		movzwl	2(%rcx), %r9d
 891      02
 892 0053 83EA01   		subl	$1, %edx
 893 0056 4883E804 		subq	$4, %rax
 894 005a 6644394E 		cmpw	%r9w, -6(%rsi)
 894      FA
 895 005f 750B     		jne	.L48
 896              	.L51:
 897              		.loc 1 156 0 discriminator 3
 898 0061 83FA02   		cmpl	$2, %edx
 899 0064 89974806 		movl	%edx, 1608(%rdi)
 899      0000
 900 006a 75D4     		jne	.L56
 901              	.L48:
 902 006c F3C3     		rep ret
 903              		.cfi_endproc
 904              	.LFE488:
 906              		.section	.text.unlikely._ZN18Fl_Graphics_Driver7fixloopEv
 907              	.LCOLDE29:
 908              		.section	.text._ZN18Fl_Graphics_Driver7fixloopEv
 909              	.LHOTE29:
 910              		.section	.text.unlikely._ZN18Fl_Graphics_Driver8end_loopEv,"ax",@progbits
 911              		.align 2
 912              	.LCOLDB30:
 913              		.section	.text._ZN18Fl_Graphics_Driver8end_loopEv,"ax",@progbits
 914              	.LHOTB30:
 915              		.align 2
 916              		.p2align 4,,15
 917              		.globl	_ZN18Fl_Graphics_Driver8end_loopEv
 919              	_ZN18Fl_Graphics_Driver8end_loopEv:
 920              	.LFB489:
 921              		.loc 1 159 0 is_stmt 1
 922              		.cfi_startproc
 923              	.LVL77:
 924 0000 53       		pushq	%rbx
 925              		.cfi_def_cfa_offset 16
 926              		.cfi_offset 3, -16
 927              	.LBB19:
 928              	.LBB20:
 929              		.loc 1 156 0
 930 0001 8B974806 		movl	1608(%rdi), %edx
 930      0000
 931              	.LBE20:
 932              	.LBE19:
 933              		.loc 1 159 0
 934 0007 4889FB   		movq	%rdi, %rbx
 935              	.LBB23:
 936              	.LBB21:
 937              		.loc 1 156 0
 938 000a 83FA02   		cmpl	$2, %edx
 939 000d 7E5F     		jle	.L59
 940 000f 488BB758 		movq	1624(%rdi), %rsi
 940      060000
 941 0016 4863C2   		movslq	%edx, %rax
 942 0019 48C1E002 		salq	$2, %rax
 943 001d 4C8D4406 		leaq	-4(%rsi,%rax), %r8
 943      FC
 944 0022 0FBF0E   		movswl	(%rsi), %ecx
 945 0025 0FBF7E02 		movswl	2(%rsi), %edi
 946              	.LVL78:
 947 0029 66413B08 		cmpw	(%r8), %cx
 948 002d 7555     		jne	.L61
 949 002f 83EA01   		subl	$1, %edx
 950 0032 4801F0   		addq	%rsi, %rax
 951 0035 66413978 		cmpw	%di, 2(%r8)
 951      02
 952 003a 7427     		je	.L64
 953 003c EB46     		jmp	.L61
 954 003e 6690     		.p2align 4,,10
 955              		.p2align 3
 956              	.L71:
 957 0040 0FBF48F8 		movswl	-8(%rax), %ecx
 958 0044 440FB706 		movzwl	(%rsi), %r8d
 959 0048 4989C1   		movq	%rax, %r9
 960 004b 0FBF7E02 		movswl	2(%rsi), %edi
 961 004f 664439C1 		cmpw	%r8w, %cx
 962 0053 752B     		jne	.L73
 963 0055 83EA01   		subl	$1, %edx
 964 0058 4883E804 		subq	$4, %rax
 965 005c 66413979 		cmpw	%di, -6(%r9)
 965      FA
 966 0061 7521     		jne	.L61
 967              	.L64:
 968 0063 83FA02   		cmpl	$2, %edx
 969 0066 89934806 		movl	%edx, 1608(%rbx)
 969      0000
 970 006c 75D2     		jne	.L71
 971              	.L59:
 972              	.LBE21:
 973              	.LBE23:
 974              		.loc 1 162 0
 975 006e 488B03   		movq	(%rbx), %rax
 976 0071 4889DF   		movq	%rbx, %rdi
 977              		.loc 1 163 0
 978 0074 5B       		popq	%rbx
 979              		.cfi_remember_state
 980              		.cfi_def_cfa_offset 8
 981              	.LVL79:
 982              		.loc 1 162 0
 983 0075 488B8018 		movq	280(%rax), %rax
 983      010000
 984 007c FFE0     		jmp	*%rax
 985              	.LVL80:
 986 007e 6690     		.p2align 4,,10
 987              		.p2align 3
 988              	.L73:
 989              		.cfi_restore_state
 990              	.LBB24:
 991              	.LBB22:
 992              		.loc 1 156 0
 993 0080 410FBFC8 		movswl	%r8w, %ecx
 994              	.L61:
 995              	.LVL81:
 996              	.LBE22:
 997              	.LBE24:
 998              		.loc 1 161 0
 999 0084 660FEFC0 		pxor	%xmm0, %xmm0
 1000 0088 488B03   		movq	(%rbx), %rax
 1001 008b 660FEFC9 		pxor	%xmm1, %xmm1
 1002 008f F20F2AC1 		cvtsi2sd	%ecx, %xmm0
 1003 0093 F20F2ACF 		cvtsi2sd	%edi, %xmm1
 1004 0097 4889DF   		movq	%rbx, %rdi
 1005 009a FF904801 		call	*328(%rax)
 1005      0000
 1006              	.LVL82:
 1007              		.loc 1 162 0
 1008 00a0 488B03   		movq	(%rbx), %rax
 1009 00a3 4889DF   		movq	%rbx, %rdi
 1010              		.loc 1 163 0
 1011 00a6 5B       		popq	%rbx
 1012              		.cfi_def_cfa_offset 8
 1013              	.LVL83:
 1014              		.loc 1 162 0
 1015 00a7 488B8018 		movq	280(%rax), %rax
 1015      010000
 1016 00ae FFE0     		jmp	*%rax
 1017              	.LVL84:
 1018              		.cfi_endproc
 1019              	.LFE489:
 1021              		.section	.text.unlikely._ZN18Fl_Graphics_Driver8end_loopEv
 1022              	.LCOLDE30:
 1023              		.section	.text._ZN18Fl_Graphics_Driver8end_loopEv
 1024              	.LHOTE30:
 1025              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11end_polygonEv,"ax",@progbits
 1026              		.align 2
 1027              	.LCOLDB31:
 1028              		.section	.text._ZN18Fl_Graphics_Driver11end_polygonEv,"ax",@progbits
 1029              	.LHOTB31:
 1030              		.align 2
 1031              		.p2align 4,,15
 1032              		.globl	_ZN18Fl_Graphics_Driver11end_polygonEv
 1034              	_ZN18Fl_Graphics_Driver11end_polygonEv:
 1035              	.LFB490:
 1036              		.loc 1 165 0
 1037              		.cfi_startproc
 1038              	.LVL85:
 1039 0000 4883EC08 		subq	$8, %rsp
 1040              		.cfi_def_cfa_offset 16
 1041              	.LBB25:
 1042              	.LBB26:
 1043              		.loc 1 156 0
 1044 0004 448B8748 		movl	1608(%rdi), %r8d
 1044      060000
 1045 000b 4183F802 		cmpl	$2, %r8d
 1046 000f 7E5E     		jle	.L75
 1047 0011 488B8F58 		movq	1624(%rdi), %rcx
 1047      060000
 1048 0018 4963D0   		movslq	%r8d, %rdx
 1049 001b 48C1E202 		salq	$2, %rdx
 1050 001f 488D4411 		leaq	-4(%rcx,%rdx), %rax
 1050      FC
 1051 0024 0FB731   		movzwl	(%rcx), %esi
 1052 0027 663930   		cmpw	%si, (%rax)
 1053 002a 7554     		jne	.L76
 1054 002c 0FB77102 		movzwl	2(%rcx), %esi
 1055 0030 66397002 		cmpw	%si, 2(%rax)
 1056 0034 754A     		jne	.L76
 1057 0036 418D40FF 		leal	-1(%r8), %eax
 1058 003a 4801CA   		addq	%rcx, %rdx
 1059 003d EB22     		jmp	.L77
 1060 003f 90       		.p2align 4,,10
 1061              		.p2align 3
 1062              	.L83:
 1063 0040 440FB711 		movzwl	(%rcx), %r10d
 1064 0044 4889D6   		movq	%rdx, %rsi
 1065 0047 66443952 		cmpw	%r10w, -8(%rdx)
 1065      F8
 1066 004c 7532     		jne	.L76
 1067 004e 440FB759 		movzwl	2(%rcx), %r11d
 1067      02
 1068 0053 83E801   		subl	$1, %eax
 1069 0056 4883EA04 		subq	$4, %rdx
 1070 005a 6644395E 		cmpw	%r11w, -6(%rsi)
 1070      FA
 1071 005f 751F     		jne	.L76
 1072              	.L77:
 1073 0061 83F802   		cmpl	$2, %eax
 1074 0064 4189C0   		movl	%eax, %r8d
 1075 0067 89874806 		movl	%eax, 1608(%rdi)
 1075      0000
 1076 006d 75D1     		jne	.L83
 1077              	.L75:
 1078              	.LVL86:
 1079              	.LBE26:
 1080              	.LBE25:
 1081              		.loc 1 168 0
 1082 006f 488B07   		movq	(%rdi), %rax
 1083 0072 488B8018 		movq	280(%rax), %rax
 1083      010000
 1084              		.loc 1 190 0
 1085 0079 4883C408 		addq	$8, %rsp
 1086              		.cfi_remember_state
 1087              		.cfi_def_cfa_offset 8
 1088              		.loc 1 168 0
 1089 007d FFE0     		jmp	*%rax
 1090              	.LVL87:
 1091 007f 90       		.p2align 4,,10
 1092              		.p2align 3
 1093              	.L76:
 1094              		.cfi_restore_state
 1095              		.loc 1 172 0
 1096 0080 4883EC08 		subq	$8, %rsp
 1097              		.cfi_def_cfa_offset 24
 1098 0084 488B1500 		movq	fl_gc(%rip), %rdx
 1098      000000
 1099 008b 488B3500 		movq	fl_window(%rip), %rsi
 1099      000000
 1100 0092 488B3D00 		movq	fl_display(%rip), %rdi
 1100      000000
 1101              	.LVL88:
 1102 0099 6A00     		pushq	$0
 1103              		.cfi_def_cfa_offset 32
 1104 009b 41B90200 		movl	$2, %r9d
 1104      0000
 1105 00a1 E8000000 		call	XFillPolygon
 1105      00
 1106              	.LVL89:
 1107              		.loc 1 190 0
 1108 00a6 4883C418 		addq	$24, %rsp
 1109              		.cfi_def_cfa_offset 8
 1110 00aa C3       		ret
 1111              		.cfi_endproc
 1112              	.LFE490:
 1114              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11end_polygonEv
 1115              	.LCOLDE31:
 1116              		.section	.text._ZN18Fl_Graphics_Driver11end_polygonEv
 1117              	.LHOTE31:
 1118              		.section	.text.unlikely._ZN18Fl_Graphics_Driver21begin_complex_polygonEv,"ax",@progbits
 1119              		.align 2
 1120              	.LCOLDB32:
 1121              		.section	.text._ZN18Fl_Graphics_Driver21begin_complex_polygonEv,"ax",@progbits
 1122              	.LHOTB32:
 1123              		.align 2
 1124              		.p2align 4,,15
 1125              		.globl	_ZN18Fl_Graphics_Driver21begin_complex_polygonEv
 1127              	_ZN18Fl_Graphics_Driver21begin_complex_polygonEv:
 1128              	.LFB491:
 1129              		.loc 1 192 0
 1130              		.cfi_startproc
 1131              	.LVL90:
 1132              		.loc 1 193 0
 1133 0000 488B07   		movq	(%rdi), %rax
 1134              		.loc 1 192 0
 1135 0003 53       		pushq	%rbx
 1136              		.cfi_def_cfa_offset 16
 1137              		.cfi_offset 3, -16
 1138              		.loc 1 192 0
 1139 0004 4889FB   		movq	%rdi, %rbx
 1140              		.loc 1 193 0
 1141 0007 488B80D8 		movq	216(%rax), %rax
 1141      000000
 1142 000e 483D0000 		cmpq	$_ZN18Fl_Graphics_Driver13begin_polygonEv, %rax
 1142      0000
 1143 0014 752A     		jne	.L86
 1144              	.LVL91:
 1145              	.LBB29:
 1146              	.LBB30:
 1147              		.loc 1 81 0
 1148 0016 C7874806 		movl	$0, 1608(%rdi)
 1148      00000000 
 1148      0000
 1149 0020 C7876006 		movl	$2, 1632(%rdi)
 1149      00000200 
 1149      0000
 1150              	.LBE30:
 1151              	.LBE29:
 1152              		.loc 1 194 0
 1153 002a C7835006 		movl	$0, 1616(%rbx)
 1153      00000000 
 1153      0000
 1154              		.loc 1 198 0
 1155 0034 5B       		popq	%rbx
 1156              		.cfi_remember_state
 1157              		.cfi_def_cfa_offset 8
 1158 0035 C3       		ret
 1159              	.LVL92:
 1160 0036 662E0F1F 		.p2align 4,,10
 1160      84000000 
 1160      0000
 1161              		.p2align 3
 1162              	.L86:
 1163              		.cfi_restore_state
 1164              		.loc 1 193 0
 1165 0040 FFD0     		call	*%rax
 1166              	.LVL93:
 1167              		.loc 1 194 0
 1168 0042 C7835006 		movl	$0, 1616(%rbx)
 1168      00000000 
 1168      0000
 1169              		.loc 1 198 0
 1170 004c 5B       		popq	%rbx
 1171              		.cfi_def_cfa_offset 8
 1172              	.LVL94:
 1173 004d C3       		ret
 1174              		.cfi_endproc
 1175              	.LFE491:
 1177              		.section	.text.unlikely._ZN18Fl_Graphics_Driver21begin_complex_polygonEv
 1178              	.LCOLDE32:
 1179              		.section	.text._ZN18Fl_Graphics_Driver21begin_complex_polygonEv
 1180              	.LHOTE32:
 1181              		.section	.text.unlikely._ZN18Fl_Graphics_Driver3gapEv,"ax",@progbits
 1182              		.align 2
 1183              	.LCOLDB33:
 1184              		.section	.text._ZN18Fl_Graphics_Driver3gapEv,"ax",@progbits
 1185              	.LHOTB33:
 1186              		.align 2
 1187              		.p2align 4,,15
 1188              		.globl	_ZN18Fl_Graphics_Driver3gapEv
 1190              	_ZN18Fl_Graphics_Driver3gapEv:
 1191              	.LFB492:
 1192              		.loc 1 200 0
 1193              		.cfi_startproc
 1194              	.LVL95:
 1195 0000 55       		pushq	%rbp
 1196              		.cfi_def_cfa_offset 16
 1197              		.cfi_offset 6, -16
 1198 0001 53       		pushq	%rbx
 1199              		.cfi_def_cfa_offset 24
 1200              		.cfi_offset 3, -24
 1201 0002 4883EC08 		subq	$8, %rsp
 1202              		.cfi_def_cfa_offset 32
 1203              		.loc 1 201 0
 1204 0006 8B9F5006 		movl	1616(%rdi), %ebx
 1204      0000
 1205 000c 8B974806 		movl	1608(%rdi), %edx
 1205      0000
 1206 0012 448D5B02 		leal	2(%rbx), %r11d
 1207 0016 4439DA   		cmpl	%r11d, %edx
 1208 0019 7E74     		jle	.L90
 1209 001b 4C8B8F58 		movq	1624(%rdi), %r9
 1209      060000
 1210 0022 4863C2   		movslq	%edx, %rax
 1211 0025 4863F3   		movslq	%ebx, %rsi
 1212 0028 48C1E002 		salq	$2, %rax
 1213 002c 4D8D04B1 		leaq	(%r9,%rsi,4), %r8
 1214 0030 4D8D5401 		leaq	-4(%r9,%rax), %r10
 1214      FC
 1215 0035 410FB728 		movzwl	(%r8), %ebp
 1216 0039 410FBF0A 		movswl	(%r10), %ecx
 1217 003d 410FBF70 		movswl	2(%r8), %esi
 1217      02
 1218 0042 6639E9   		cmpw	%bp, %cx
 1219 0045 0F858800 		jne	.L91
 1219      0000
 1220 004b 83EA01   		subl	$1, %edx
 1221 004e 4C01C8   		addq	%r9, %rax
 1222 0051 66413972 		cmpw	%si, 2(%r10)
 1222      02
 1223 0056 742C     		je	.L95
 1224 0058 EB4A     		jmp	.L92
 1225 005a 660F1F44 		.p2align 4,,10
 1225      0000
 1226              		.p2align 3
 1227              	.L99:
 1228              		.loc 1 201 0 is_stmt 0 discriminator 1
 1229 0060 0FBF48F8 		movswl	-8(%rax), %ecx
 1230 0064 450FB708 		movzwl	(%r8), %r9d
 1231 0068 4989C2   		movq	%rax, %r10
 1232 006b 410FBF70 		movswl	2(%r8), %esi
 1232      02
 1233 0070 664439C9 		cmpw	%r9w, %cx
 1234 0074 752A     		jne	.L101
 1235 0076 83EA01   		subl	$1, %edx
 1236 0079 4883E804 		subq	$4, %rax
 1237              		.loc 1 201 0 discriminator 2
 1238 007d 66413972 		cmpw	%si, -6(%r10)
 1238      FA
 1239 0082 7520     		jne	.L92
 1240              	.L95:
 1241              		.loc 1 201 0 discriminator 3
 1242 0084 4439DA   		cmpl	%r11d, %edx
 1243 0087 89974806 		movl	%edx, 1608(%rdi)
 1243      0000
 1244 008d 75D1     		jne	.L99
 1245              	.L90:
 1246              		.loc 1 209 0 is_stmt 1
 1247 008f 899F4806 		movl	%ebx, 1608(%rdi)
 1247      0000
 1248              		.loc 1 211 0
 1249 0095 4883C408 		addq	$8, %rsp
 1250              		.cfi_remember_state
 1251              		.cfi_def_cfa_offset 24
 1252 0099 5B       		popq	%rbx
 1253              		.cfi_def_cfa_offset 16
 1254 009a 5D       		popq	%rbp
 1255              		.cfi_def_cfa_offset 8
 1256 009b C3       		ret
 1257 009c 0F1F4000 		.p2align 4,,10
 1258              		.p2align 3
 1259              	.L101:
 1260              		.cfi_restore_state
 1261              		.loc 1 201 0
 1262 00a0 410FBFC9 		movswl	%r9w, %ecx
 1263              	.L92:
 1264              		.loc 1 203 0
 1265 00a4 660FEFC0 		pxor	%xmm0, %xmm0
 1266 00a8 488B07   		movq	(%rdi), %rax
 1267 00ab 4889FB   		movq	%rdi, %rbx
 1268 00ae 660FEFC9 		pxor	%xmm1, %xmm1
 1269 00b2 F20F2AC1 		cvtsi2sd	%ecx, %xmm0
 1270 00b6 F20F2ACE 		cvtsi2sd	%esi, %xmm1
 1271 00ba FF904801 		call	*328(%rax)
 1271      0000
 1272              	.LVL96:
 1273              		.loc 1 207 0
 1274 00c0 8B834806 		movl	1608(%rbx), %eax
 1274      0000
 1275 00c6 89835006 		movl	%eax, 1616(%rbx)
 1275      0000
 1276              		.loc 1 211 0
 1277 00cc 4883C408 		addq	$8, %rsp
 1278              		.cfi_remember_state
 1279              		.cfi_def_cfa_offset 24
 1280 00d0 5B       		popq	%rbx
 1281              		.cfi_def_cfa_offset 16
 1282              	.LVL97:
 1283 00d1 5D       		popq	%rbp
 1284              		.cfi_def_cfa_offset 8
 1285 00d2 C3       		ret
 1286              	.LVL98:
 1287              	.L91:
 1288              		.cfi_restore_state
 1289              		.loc 1 201 0
 1290 00d3 0FBFCD   		movswl	%bp, %ecx
 1291 00d6 EBCC     		jmp	.L92
 1292              		.cfi_endproc
 1293              	.LFE492:
 1295              		.section	.text.unlikely._ZN18Fl_Graphics_Driver3gapEv
 1296              	.LCOLDE33:
 1297              		.section	.text._ZN18Fl_Graphics_Driver3gapEv
 1298              	.LHOTE33:
 1299              		.section	.text.unlikely._ZN18Fl_Graphics_Driver19end_complex_polygonEv,"ax",@progbits
 1300              		.align 2
 1301              	.LCOLDB34:
 1302              		.section	.text._ZN18Fl_Graphics_Driver19end_complex_polygonEv,"ax",@progbits
 1303              	.LHOTB34:
 1304              		.align 2
 1305              		.p2align 4,,15
 1306              		.globl	_ZN18Fl_Graphics_Driver19end_complex_polygonEv
 1308              	_ZN18Fl_Graphics_Driver19end_complex_polygonEv:
 1309              	.LFB493:
 1310              		.loc 1 213 0
 1311              		.cfi_startproc
 1312              	.LVL99:
 1313 0000 53       		pushq	%rbx
 1314              		.cfi_def_cfa_offset 16
 1315              		.cfi_offset 3, -16
 1316              		.loc 1 214 0
 1317 0001 488B07   		movq	(%rdi), %rax
 1318              		.loc 1 213 0
 1319 0004 4889FB   		movq	%rdi, %rbx
 1320              		.loc 1 214 0
 1321 0007 FF903801 		call	*312(%rax)
 1321      0000
 1322              	.LVL100:
 1323              		.loc 1 215 0
 1324 000d 448B8348 		movl	1608(%rbx), %r8d
 1324      060000
 1325 0014 4183F802 		cmpl	$2, %r8d
 1326 0018 7E36     		jle	.L105
 1327              		.loc 1 220 0 discriminator 1
 1328 001a 4883EC08 		subq	$8, %rsp
 1329              		.cfi_def_cfa_offset 24
 1330 001e 488B8B58 		movq	1624(%rbx), %rcx
 1330      060000
 1331 0025 488B1500 		movq	fl_gc(%rip), %rdx
 1331      000000
 1332 002c 488B3500 		movq	fl_window(%rip), %rsi
 1332      000000
 1333 0033 488B3D00 		movq	fl_display(%rip), %rdi
 1333      000000
 1334 003a 4531C9   		xorl	%r9d, %r9d
 1335 003d 6A00     		pushq	$0
 1336              		.cfi_def_cfa_offset 32
 1337 003f E8000000 		call	XFillPolygon
 1337      00
 1338              	.LVL101:
 1339 0044 58       		popq	%rax
 1340              		.cfi_def_cfa_offset 24
 1341 0045 5A       		popq	%rdx
 1342              		.cfi_def_cfa_offset 16
 1343              		.loc 1 238 0 discriminator 1
 1344 0046 5B       		popq	%rbx
 1345              		.cfi_remember_state
 1346              		.cfi_def_cfa_offset 8
 1347              	.LVL102:
 1348 0047 C3       		ret
 1349              	.LVL103:
 1350 0048 0F1F8400 		.p2align 4,,10
 1350      00000000 
 1351              		.p2align 3
 1352              	.L105:
 1353              		.cfi_restore_state
 1354              		.loc 1 216 0
 1355 0050 488B03   		movq	(%rbx), %rax
 1356 0053 4889DF   		movq	%rbx, %rdi
 1357              		.loc 1 238 0
 1358 0056 5B       		popq	%rbx
 1359              		.cfi_def_cfa_offset 8
 1360              	.LVL104:
 1361              		.loc 1 216 0
 1362 0057 488B8018 		movq	280(%rax), %rax
 1362      010000
 1363 005e FFE0     		jmp	*%rax
 1364              	.LVL105:
 1365              		.cfi_endproc
 1366              	.LFE493:
 1368              		.section	.text.unlikely._ZN18Fl_Graphics_Driver19end_complex_polygonEv
 1369              	.LCOLDE34:
 1370              		.section	.text._ZN18Fl_Graphics_Driver19end_complex_polygonEv
 1371              	.LHOTE34:
 1372              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6circleEddd,"ax",@progbits
 1373              		.align 2
 1374              	.LCOLDB36:
 1375              		.section	.text._ZN18Fl_Graphics_Driver6circleEddd,"ax",@progbits
 1376              	.LHOTB36:
 1377              		.align 2
 1378              		.p2align 4,,15
 1379              		.globl	_ZN18Fl_Graphics_Driver6circleEddd
 1381              	_ZN18Fl_Graphics_Driver6circleEddd:
 1382              	.LFB494:
 1383              		.loc 1 244 0
 1384              		.cfi_startproc
 1385              	.LVL106:
 1386 0000 4155     		pushq	%r13
 1387              		.cfi_def_cfa_offset 16
 1388              		.cfi_offset 13, -16
 1389 0002 4154     		pushq	%r12
 1390              		.cfi_def_cfa_offset 24
 1391              		.cfi_offset 12, -24
 1392 0004 55       		pushq	%rbp
 1393              		.cfi_def_cfa_offset 32
 1394              		.cfi_offset 6, -32
 1395 0005 53       		pushq	%rbx
 1396              		.cfi_def_cfa_offset 40
 1397              		.cfi_offset 3, -40
 1398 0006 4889FB   		movq	%rdi, %rbx
 1399              	.LBB31:
 1400              	.LBB32:
 1401              		.loc 1 83 0
 1402 0009 660F28E8 		movapd	%xmm0, %xmm5
 1403              	.LBE32:
 1404              	.LBE31:
 1405              		.loc 1 244 0
 1406 000d 4883EC28 		subq	$40, %rsp
 1407              		.cfi_def_cfa_offset 80
 1408              	.LBB36:
 1409              	.LBB33:
 1410              		.loc 1 83 0
 1411 0011 660F28E1 		movapd	%xmm1, %xmm4
 1412 0015 F20F10B7 		movsd	1576(%rdi), %xmm6
 1412      28060000 
 1413 001d F20F109F 		movsd	1560(%rdi), %xmm3
 1413      18060000 
 1414 0025 F20F59E6 		mulsd	%xmm6, %xmm4
 1415 0029 F20F59EB 		mulsd	%xmm3, %xmm5
 1416              	.LBE33:
 1417              	.LBE36:
 1418              	.LBB37:
 1419              	.LBB38:
 1420              		.loc 1 85 0
 1421 002d F20F10BF 		movsd	1568(%rdi), %xmm7
 1421      20060000 
 1422 0035 F20F59C7 		mulsd	%xmm7, %xmm0
 1423              	.LVL107:
 1424              	.LBE38:
 1425              	.LBE37:
 1426              	.LBB41:
 1427              	.LBB34:
 1428              		.loc 1 83 0
 1429 0039 F20F58E5 		addsd	%xmm5, %xmm4
 1430              	.LBE34:
 1431              	.LBE41:
 1432              	.LBB42:
 1433              	.LBB39:
 1434              		.loc 1 85 0
 1435 003d F20F10AF 		movsd	1584(%rdi), %xmm5
 1435      30060000 
 1436 0045 F20F59CD 		mulsd	%xmm5, %xmm1
 1437              	.LVL108:
 1438              	.LBE39:
 1439              	.LBE42:
 1440              	.LBB43:
 1441              	.LBB35:
 1442              		.loc 1 83 0
 1443 0049 F20F58A7 		addsd	1592(%rdi), %xmm4
 1443      38060000 
 1444              	.LVL109:
 1445              	.LBE35:
 1446              	.LBE43:
 1447              	.LBB44:
 1448              	.LBB40:
 1449              		.loc 1 85 0
 1450 0051 F20F58C8 		addsd	%xmm0, %xmm1
 1451 0055 F20F588F 		addsd	1600(%rdi), %xmm1
 1451      40060000 
 1452 005d F20F114C 		movsd	%xmm1, 8(%rsp)
 1452      2408
 1453              	.LVL110:
 1454              	.LBE40:
 1455              	.LBE44:
 1456              		.loc 1 247 0
 1457 0063 660FEFC9 		pxor	%xmm1, %xmm1
 1458 0067 660F2EF1 		ucomisd	%xmm1, %xmm6
 1459 006b 0F8AFF00 		jp	.L119
 1459      0000
 1460 0071 0F85F900 		jne	.L119
 1460      0000
 1461              		.loc 1 247 0 is_stmt 0 discriminator 2
 1462 0077 F20F1005 		movsd	.LC35(%rip), %xmm0
 1462      00000000 
 1463 007f 660F54D8 		andpd	%xmm0, %xmm3
 1464              	.LVL111:
 1465              	.L111:
 1466              		.loc 1 248 0 is_stmt 1 discriminator 4
 1467 0083 660F2EF9 		ucomisd	%xmm1, %xmm7
 1468              		.loc 1 247 0 discriminator 4
 1469 0087 F20F59DA 		mulsd	%xmm2, %xmm3
 1470              	.LVL112:
 1471              		.loc 1 248 0 discriminator 4
 1472 008b 0F8AFF00 		jp	.L120
 1472      0000
 1473 0091 0F85F900 		jne	.L120
 1473      0000
 1474              		.loc 1 248 0 is_stmt 0 discriminator 2
 1475 0097 F20F1005 		movsd	.LC35(%rip), %xmm0
 1475      00000000 
 1476 009f 660F54C5 		andpd	%xmm5, %xmm0
 1477              	.LVL113:
 1478              	.L116:
 1479              		.loc 1 249 0 is_stmt 1 discriminator 4
 1480 00a3 660F28FC 		movapd	%xmm4, %xmm7
 1481              		.loc 1 248 0 discriminator 4
 1482 00a7 F20F59C2 		mulsd	%xmm2, %xmm0
 1483              		.loc 1 249 0 discriminator 4
 1484 00ab F20F1164 		movsd	%xmm4, 24(%rsp)
 1484      2418
 1485 00b1 F20F115C 		movsd	%xmm3, 16(%rsp)
 1485      2410
 1486 00b7 F20F5CFB 		subsd	%xmm3, %xmm7
 1487              		.loc 1 248 0 discriminator 4
 1488 00bb F20F1104 		movsd	%xmm0, (%rsp)
 1488      24
 1489              	.LVL114:
 1490              		.loc 1 249 0 discriminator 4
 1491 00c0 660F28C7 		movapd	%xmm7, %xmm0
 1492 00c4 E8000000 		call	rint
 1492      00
 1493              	.LVL115:
 1494              		.loc 1 250 0 discriminator 4
 1495 00c9 F20F1064 		movsd	24(%rsp), %xmm4
 1495      2418
 1496 00cf F20F105C 		movsd	16(%rsp), %xmm3
 1496      2410
 1497              		.loc 1 249 0 discriminator 4
 1498 00d5 F2440F2C 		cvttsd2si	%xmm0, %r12d
 1498      E0
 1499              	.LVL116:
 1500              		.loc 1 250 0 discriminator 4
 1501 00da F20F58DC 		addsd	%xmm4, %xmm3
 1502 00de 660F28C3 		movapd	%xmm3, %xmm0
 1503 00e2 E8000000 		call	rint
 1503      00
 1504              	.LVL117:
 1505              		.loc 1 251 0 discriminator 4
 1506 00e7 F20F1074 		movsd	8(%rsp), %xmm6
 1506      2408
 1507              		.loc 1 250 0 discriminator 4
 1508 00ed F20F2CE8 		cvttsd2si	%xmm0, %ebp
 1509              		.loc 1 251 0 discriminator 4
 1510 00f1 F20F5C34 		subsd	(%rsp), %xmm6
 1510      24
 1511 00f6 660F28C6 		movapd	%xmm6, %xmm0
 1512 00fa E8000000 		call	rint
 1512      00
 1513              	.LVL118:
 1514 00ff F2440F2C 		cvttsd2si	%xmm0, %r13d
 1514      E8
 1515              		.loc 1 252 0 discriminator 4
 1516 0104 F20F1004 		movsd	(%rsp), %xmm0
 1516      24
 1517              		.loc 1 250 0 discriminator 4
 1518 0109 4429E5   		subl	%r12d, %ebp
 1519              	.LVL119:
 1520              		.loc 1 252 0 discriminator 4
 1521 010c F20F5844 		addsd	8(%rsp), %xmm0
 1521      2408
 1522 0112 E8000000 		call	rint
 1522      00
 1523              	.LVL120:
 1524 0117 F20F2CC0 		cvttsd2si	%xmm0, %eax
 1525              		.loc 1 256 0 discriminator 4
 1526 011b BA000000 		movl	$XDrawArc, %edx
 1526      00
 1527 0120 41BA0000 		movl	$XFillArc, %r10d
 1527      0000
 1528 0126 4189E9   		movl	%ebp, %r9d
 1529 0129 4589E8   		movl	%r13d, %r8d
 1530 012c 4489E1   		movl	%r12d, %ecx
 1531 012f 488B3500 		movq	fl_window(%rip), %rsi
 1531      000000
 1532 0136 488B3D00 		movq	fl_display(%rip), %rdi
 1532      000000
 1533              		.loc 1 252 0 discriminator 4
 1534 013d 4429E8   		subl	%r13d, %eax
 1535              	.LVL121:
 1536              		.loc 1 256 0 discriminator 4
 1537 0140 83BB6006 		cmpl	$2, 1632(%rbx)
 1537      000002
 1538 0147 4C0F45D2 		cmovne	%rdx, %r10
 1539 014b 4883EC08 		subq	$8, %rsp
 1540              		.cfi_def_cfa_offset 88
 1541 014f 488B1500 		movq	fl_gc(%rip), %rdx
 1541      000000
 1542 0156 68005A00 		pushq	$23040
 1542      00
 1543              		.cfi_def_cfa_offset 96
 1544 015b 6A00     		pushq	$0
 1545              		.cfi_def_cfa_offset 104
 1546 015d 50       		pushq	%rax
 1547              		.cfi_def_cfa_offset 112
 1548 015e 41FFD2   		call	*%r10
 1549              	.LVL122:
 1550              		.loc 1 273 0 discriminator 4
 1551 0161 4883C448 		addq	$72, %rsp
 1552              		.cfi_def_cfa_offset 40
 1553 0165 5B       		popq	%rbx
 1554              		.cfi_def_cfa_offset 32
 1555              	.LVL123:
 1556 0166 5D       		popq	%rbp
 1557              		.cfi_def_cfa_offset 24
 1558              	.LVL124:
 1559 0167 415C     		popq	%r12
 1560              		.cfi_def_cfa_offset 16
 1561              	.LVL125:
 1562 0169 415D     		popq	%r13
 1563              		.cfi_def_cfa_offset 8
 1564              	.LVL126:
 1565 016b C3       		ret
 1566              	.LVL127:
 1567 016c 0F1F4000 		.p2align 4,,10
 1568              		.p2align 3
 1569              	.L119:
 1570              		.cfi_def_cfa_offset 80
 1571              		.loc 1 247 0 discriminator 1
 1572 0170 F20F59DB 		mulsd	%xmm3, %xmm3
 1573 0174 F20F59F6 		mulsd	%xmm6, %xmm6
 1574 0178 F20F58F3 		addsd	%xmm3, %xmm6
 1575 017c F20F51C6 		sqrtsd	%xmm6, %xmm0
 1576 0180 660F2EC0 		ucomisd	%xmm0, %xmm0
 1577 0184 7A54     		jp	.L124
 1578              	.LVL128:
 1579              	.L109:
 1580 0186 660F28D8 		movapd	%xmm0, %xmm3
 1581 018a E9F4FEFF 		jmp	.L111
 1581      FF
 1582              	.LVL129:
 1583 018f 90       		.p2align 4,,10
 1584              		.p2align 3
 1585              	.L120:
 1586              		.loc 1 248 0 discriminator 1
 1587 0190 F20F59FF 		mulsd	%xmm7, %xmm7
 1588 0194 F20F59ED 		mulsd	%xmm5, %xmm5
 1589 0198 F20F58FD 		addsd	%xmm5, %xmm7
 1590 019c F20F51C7 		sqrtsd	%xmm7, %xmm0
 1591 01a0 660F2EC0 		ucomisd	%xmm0, %xmm0
 1592 01a4 0F8BF9FE 		jnp	.L116
 1592      FFFF
 1593 01aa 660F28C7 		movapd	%xmm7, %xmm0
 1594 01ae F20F1154 		movsd	%xmm2, 24(%rsp)
 1594      2418
 1595 01b4 F20F1164 		movsd	%xmm4, 16(%rsp)
 1595      2410
 1596 01ba F20F111C 		movsd	%xmm3, (%rsp)
 1596      24
 1597 01bf E8000000 		call	sqrt
 1597      00
 1598              	.LVL130:
 1599 01c4 F20F1054 		movsd	24(%rsp), %xmm2
 1599      2418
 1600 01ca F20F1064 		movsd	16(%rsp), %xmm4
 1600      2410
 1601 01d0 F20F101C 		movsd	(%rsp), %xmm3
 1601      24
 1602 01d5 E9C9FEFF 		jmp	.L116
 1602      FF
 1603              	.LVL131:
 1604              	.L124:
 1605              		.loc 1 247 0 discriminator 1
 1606 01da 660F28C6 		movapd	%xmm6, %xmm0
 1607 01de F20F114C 		movsd	%xmm1, 24(%rsp)
 1607      2418
 1608 01e4 F20F1154 		movsd	%xmm2, 16(%rsp)
 1608      2410
 1609 01ea F20F1124 		movsd	%xmm4, (%rsp)
 1609      24
 1610 01ef E8000000 		call	sqrt
 1610      00
 1611              	.LVL132:
 1612 01f4 F20F10BB 		movsd	1568(%rbx), %xmm7
 1612      20060000 
 1613 01fc F20F10AB 		movsd	1584(%rbx), %xmm5
 1613      30060000 
 1614 0204 F20F104C 		movsd	24(%rsp), %xmm1
 1614      2418
 1615 020a F20F1054 		movsd	16(%rsp), %xmm2
 1615      2410
 1616 0210 F20F1024 		movsd	(%rsp), %xmm4
 1616      24
 1617 0215 E96CFFFF 		jmp	.L109
 1617      FF
 1618              		.cfi_endproc
 1619              	.LFE494:
 1621              		.section	.text.unlikely._ZN18Fl_Graphics_Driver6circleEddd
 1622              	.LCOLDE36:
 1623              		.section	.text._ZN18Fl_Graphics_Driver6circleEddd
 1624              	.LHOTE36:
 1625              		.section	.rodata.cst8,"aM",@progbits,8
 1626              		.align 8
 1627              	.LC6:
 1628 0000 00000000 		.long	0
 1629 0004 0000F0BF 		.long	-1074790400
 1630              		.align 8
 1631              	.LC8:
 1632 0008 00000000 		.long	0
 1633 000c 0000F03F 		.long	1072693248
 1634              		.align 8
 1635              	.LC9:
 1636 0010 00000000 		.long	0
 1637 0014 00000080 		.long	-2147483648
 1638              		.align 8
 1639              	.LC10:
 1640 0018 00000000 		.long	0
 1641 001c 00805640 		.long	1079410688
 1642              		.align 8
 1643              	.LC11:
 1644 0020 00000000 		.long	0
 1645 0024 00806640 		.long	1080459264
 1646              		.align 8
 1647              	.LC12:
 1648 0028 00000000 		.long	0
 1649 002c 00E07040 		.long	1081139200
 1650              		.align 8
 1651              	.LC13:
 1652 0030 00000000 		.long	0
 1653 0034 008056C0 		.long	-1068072960
 1654              		.align 8
 1655              	.LC14:
 1656 0038 182D4454 		.long	1413754136
 1657 003c FB210940 		.long	1074340347
 1658              		.section	.rodata.cst16,"aM",@progbits,16
 1659              		.align 16
 1660              	.LC15:
 1661 0000 00000000 		.long	0
 1662 0004 00000080 		.long	-2147483648
 1663 0008 00000000 		.long	0
 1664 000c 00000000 		.long	0
 1665              		.align 16
 1666              	.LC35:
 1667 0010 FFFFFFFF 		.long	4294967295
 1668 0014 FFFFFF7F 		.long	2147483647
 1669 0018 00000000 		.long	0
 1670 001c 00000000 		.long	0
 1671              		.text
 1672              	.Letext0:
 1673              		.section	.text.unlikely._ZN18Fl_Graphics_Driver13begin_polygonEv
 1674              	.Letext_cold0:
 1675              		.file 2 "fltk-1.3.4-1/FL/Enumerations.H"
 1676              		.file 3 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1677              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1678              		.file 5 "/usr/include/X11/X.h"
 1679              		.file 6 "/usr/include/X11/Xlib.h"
 1680              		.file 7 "/usr/include/libio.h"
 1681              		.file 8 "fltk-1.3.4-1/FL/Fl_Device.H"
 1682              		.file 9 "fltk-1.3.4-1/FL/x.H"
 1683              		.file 10 "/usr/include/stdio.h"
 1684              		.file 11 "/usr/include/stdlib.h"
 1685              		.file 12 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_vertex.cxx
     /tmp/ccW7HDpu.s:16     .text._ZN18Fl_Graphics_Driver13begin_polygonEv:0000000000000000 _ZN18Fl_Graphics_Driver13begin_polygonEv
     /tmp/ccW7HDpu.s:46     .text._ZN18Fl_Graphics_Driver11push_matrixEv:0000000000000000 _ZN18Fl_Graphics_Driver11push_matrixEv
     /tmp/ccW7HDpu.s:103    .text._ZN18Fl_Graphics_Driver10pop_matrixEv:0000000000000000 _ZN18Fl_Graphics_Driver10pop_matrixEv
     /tmp/ccW7HDpu.s:156    .text._ZN18Fl_Graphics_Driver11mult_matrixEdddddd:0000000000000000 _ZN18Fl_Graphics_Driver11mult_matrixEdddddd
     /tmp/ccW7HDpu.s:242    .text._ZN18Fl_Graphics_Driver6rotateEd:0000000000000000 _ZN18Fl_Graphics_Driver6rotateEd
     /tmp/ccW7HDpu.s:393    .text._ZN18Fl_Graphics_Driver12begin_pointsEv:0000000000000000 _ZN18Fl_Graphics_Driver12begin_pointsEv
     /tmp/ccW7HDpu.s:418    .text._ZN18Fl_Graphics_Driver10begin_lineEv:0000000000000000 _ZN18Fl_Graphics_Driver10begin_lineEv
     /tmp/ccW7HDpu.s:443    .text._ZN18Fl_Graphics_Driver10begin_loopEv:0000000000000000 _ZN18Fl_Graphics_Driver10begin_loopEv
     /tmp/ccW7HDpu.s:468    .text._ZN18Fl_Graphics_Driver11transform_xEdd:0000000000000000 _ZN18Fl_Graphics_Driver11transform_xEdd
     /tmp/ccW7HDpu.s:497    .text._ZN18Fl_Graphics_Driver11transform_yEdd:0000000000000000 _ZN18Fl_Graphics_Driver11transform_yEdd
     /tmp/ccW7HDpu.s:526    .text._ZN18Fl_Graphics_Driver12transform_dxEdd:0000000000000000 _ZN18Fl_Graphics_Driver12transform_dxEdd
     /tmp/ccW7HDpu.s:554    .text._ZN18Fl_Graphics_Driver12transform_dyEdd:0000000000000000 _ZN18Fl_Graphics_Driver12transform_dyEdd
     /tmp/ccW7HDpu.s:582    .text._ZN18Fl_Graphics_Driver19transformed_vertex0Ess:0000000000000000 _ZN18Fl_Graphics_Driver19transformed_vertex0Ess
     /tmp/ccW7HDpu.s:685    .text._ZN18Fl_Graphics_Driver18transformed_vertexEdd:0000000000000000 _ZN18Fl_Graphics_Driver18transformed_vertexEdd
     /tmp/ccW7HDpu.s:741    .text._ZN18Fl_Graphics_Driver6vertexEdd:0000000000000000 _ZN18Fl_Graphics_Driver6vertexEdd
     /tmp/ccW7HDpu.s:781    .text._ZN18Fl_Graphics_Driver10end_pointsEv:0000000000000000 _ZN18Fl_Graphics_Driver10end_pointsEv
     /tmp/ccW7HDpu.s:819    .text._ZN18Fl_Graphics_Driver8end_lineEv:0000000000000000 _ZN18Fl_Graphics_Driver8end_lineEv
     /tmp/ccW7HDpu.s:860    .text._ZN18Fl_Graphics_Driver7fixloopEv:0000000000000000 _ZN18Fl_Graphics_Driver7fixloopEv
     /tmp/ccW7HDpu.s:919    .text._ZN18Fl_Graphics_Driver8end_loopEv:0000000000000000 _ZN18Fl_Graphics_Driver8end_loopEv
     /tmp/ccW7HDpu.s:1034   .text._ZN18Fl_Graphics_Driver11end_polygonEv:0000000000000000 _ZN18Fl_Graphics_Driver11end_polygonEv
     /tmp/ccW7HDpu.s:1127   .text._ZN18Fl_Graphics_Driver21begin_complex_polygonEv:0000000000000000 _ZN18Fl_Graphics_Driver21begin_complex_polygonEv
     /tmp/ccW7HDpu.s:1190   .text._ZN18Fl_Graphics_Driver3gapEv:0000000000000000 _ZN18Fl_Graphics_Driver3gapEv
     /tmp/ccW7HDpu.s:1308   .text._ZN18Fl_Graphics_Driver19end_complex_polygonEv:0000000000000000 _ZN18Fl_Graphics_Driver19end_complex_polygonEv
     /tmp/ccW7HDpu.s:1381   .text._ZN18Fl_Graphics_Driver6circleEddd:0000000000000000 _ZN18Fl_Graphics_Driver6circleEddd
     /tmp/ccW7HDpu.s:1639   .rodata.cst8:0000000000000018 .LC10
     /tmp/ccW7HDpu.s:1643   .rodata.cst8:0000000000000020 .LC11
     /tmp/ccW7HDpu.s:1647   .rodata.cst8:0000000000000028 .LC12
     /tmp/ccW7HDpu.s:1651   .rodata.cst8:0000000000000030 .LC13
     /tmp/ccW7HDpu.s:1655   .rodata.cst8:0000000000000038 .LC14
     /tmp/ccW7HDpu.s:1660   .rodata.cst16:0000000000000000 .LC15
     /tmp/ccW7HDpu.s:1627   .rodata.cst8:0000000000000000 .LC6
     /tmp/ccW7HDpu.s:1631   .rodata.cst8:0000000000000008 .LC8
     /tmp/ccW7HDpu.s:1635   .rodata.cst8:0000000000000010 .LC9
     /tmp/ccW7HDpu.s:1666   .rodata.cst16:0000000000000010 .LC35
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
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
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.36.6ba2cf8c70728f66893df226e7e0384a
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.stat.h.23.034923aa253537bdc4e59720e9e8ed3d
                           .group:0000000000000000 wm4.time.h.66.fa652aa18ecf92239cee124d5533fe97
                           .group:0000000000000000 wm4.stat.h.23.71443f0579dab3228134d84ad7d61c3e
                           .group:0000000000000000 wm4.stat.h.107.43f8ebdec21eca5e13896fd19df564c8
                           .group:0000000000000000 wm4.locale.h.23.9b5006b0bf779abe978bf85cb308a947
                           .group:0000000000000000 wm4.locale.h.24.c0c42b9681163ce124f9e0123f9f1018
                           .group:0000000000000000 wm4.locale.h.35.94a07dff536351e64a45c44b55b1ccfb
                           .group:0000000000000000 wm4.Fl.H.35.15bf5664bfbc00f06b8216ecfaaa9915
                           .group:0000000000000000 wm4.math.h.26.671af5ac9cd425a35e0730f7b6d7cde2
                           .group:0000000000000000 wm4.libmsimddeclstubs.h.34.75644856b74ba3d815155fe5fe7ecc56
                           .group:0000000000000000 wm4.mathdef.h.23.67c0aa4a204f1f427459dfc651aba565
                           .group:0000000000000000 wm4.math.h.55.cf380f99c57d42476a5252f30065036a
                           .group:0000000000000000 wm4.math.h.84.742292806c6be54f49dc607928a827f7
                           .group:0000000000000000 wm4.math.h.105.59ff0f83ebf6a04e70e145cef2d1185e
                           .group:0000000000000000 wm4.math.h.152.afae4114fe3f3987f42ac5211c91e844

UNDEFINED SYMBOLS
_ZN2Fl5errorE
sincos
realloc
rint
fl_gc
fl_window
fl_display
XDrawPoints
XDrawLines
XFillPolygon
XDrawArc
XFillArc
sqrt
