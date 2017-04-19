   1              		.file	"screen_xywh.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.rodata.str1.1,"aMS",@progbits,1
   5              	.LC1:
   6 0000 6C696258 		.string	"libXrandr.so.2"
   6      72616E64 
   6      722E736F 
   6      2E3200
   7              	.LC2:
   8 000f 6C696258 		.string	"libXrandr.so"
   8      72616E64 
   8      722E736F 
   8      00
   9              	.LC3:
  10 001c 58525253 		.string	"XRRSizes"
  10      697A6573 
  10      00
  11              		.section	.text.unlikely._ZL11screen_initv,"ax",@progbits
  12              	.LCOLDB5:
  13              		.section	.text._ZL11screen_initv,"ax",@progbits
  14              	.LHOTB5:
  15              		.p2align 4,,15
  16              		.section	.text.unlikely._ZL11screen_initv
  17              	.Ltext_cold0:
  18              		.section	.text._ZL11screen_initv
  20              	_ZL11screen_initv:
  21              	.LFB307:
  22              		.file 1 "fltk-1.3.4-1/src/screen_xywh.cxx"
   1:fltk-1.3.4-1/src/screen_xywh.cxx **** ...
  23              		.loc 1 169 0
  24              		.cfi_startproc
  25 0000 55       		pushq	%rbp
  26              		.cfi_def_cfa_offset 16
  27              		.cfi_offset 6, -16
  28 0001 53       		pushq	%rbx
  29              		.cfi_def_cfa_offset 24
  30              		.cfi_offset 3, -24
  31 0002 4883EC18 		subq	$24, %rsp
  32              		.cfi_def_cfa_offset 48
  33              		.loc 1 169 0
  34 0006 64488B04 		movq	%fs:40, %rax
  34      25280000 
  34      00
  35 000f 48894424 		movq	%rax, 8(%rsp)
  35      08
  36 0014 31C0     		xorl	%eax, %eax
  37              		.loc 1 170 0
  38 0016 48833D00 		cmpq	$0, fl_display(%rip)
  38      00000000 
  39 001e 0F841202 		je	.L29
  39      0000
  40              	.L2:
  41              	.LVL0:
  42              	.LBB8:
  43              		.loc 1 178 0
  44 0024 488B0500 		movq	_ZZL11screen_initvE10XRRSizes_f(%rip), %rax
  44      000000
  45 002b 4885C0   		testq	%rax, %rax
  46 002e 0F84C301 		je	.L30
  46      0000
  47              	.L3:
  48              	.LBE8:
  49              	.LBB11:
  50              	.LBB12:
  51              		.loc 1 188 0
  52 0034 488D5424 		leaq	4(%rsp), %rdx
  52      04
  53 0039 8B350000 		movl	fl_screen(%rip), %esi
  53      0000
  54 003f 488B3D00 		movq	fl_display(%rip), %rdi
  54      000000
  55 0046 FFD0     		call	*%rax
  56              	.LVL1:
  57              	.LBB13:
  58              		.loc 1 194 0
  59 0048 448B4424 		movl	4(%rsp), %r8d
  59      04
  60 004d 4585C0   		testl	%r8d, %r8d
  61 0050 0F8ED201 		jle	.L18
  61      0000
  62              	.LBB14:
  63              		.loc 1 195 0
  64 0056 8B5008   		movl	8(%rax), %edx
  65              	.LVL2:
  66              		.loc 1 196 0
  67 0059 660FEFD2 		pxor	%xmm2, %xmm2
  68 005d 85D2     		testl	%edx, %edx
  69 005f 741C     		je	.L8
  70              		.loc 1 196 0 is_stmt 0 discriminator 1
  71 0061 660FEFD2 		pxor	%xmm2, %xmm2
  72 0065 660FEFC0 		pxor	%xmm0, %xmm0
  73 0069 F30F2A10 		cvtsi2ss	(%rax), %xmm2
  74 006d F30F2AC2 		cvtsi2ss	%edx, %xmm0
  75 0071 F30F5915 		mulss	.LC4(%rip), %xmm2
  75      00000000 
  76 0079 F30F5ED0 		divss	%xmm0, %xmm2
  77              	.L8:
  78              	.LVL3:
  79              		.loc 1 197 0 is_stmt 1 discriminator 4
  80 007d 8B500C   		movl	12(%rax), %edx
  81              	.LVL4:
  82              		.loc 1 199 0 discriminator 4
  83 0080 BB010000 		movl	$1, %ebx
  83      00
  84              		.loc 1 198 0 discriminator 4
  85 0085 85D2     		testl	%edx, %edx
  86 0087 660FEFDB 		pxor	%xmm3, %xmm3
  87 008b 0F853F01 		jne	.L31
  87      0000
  88              	.LVL5:
  89              	.L6:
  90              	.LBE14:
  91              	.LBE13:
  92              	.LBE12:
  93              	.LBE11:
  94              	.LBB18:
  95              		.loc 1 234 0
  96 0091 4C8B1D00 		movq	fl_display(%rip), %r11
  96      000000
  97 0098 458B93E4 		movl	228(%r11), %r10d
  97      000000
  98              		.loc 1 235 0
  99 009f 4183FA10 		cmpl	$16, %r10d
 100              		.loc 1 234 0
 101 00a3 44891500 		movl	%r10d, _ZL11num_screens(%rip)
 101      000000
 102              		.loc 1 235 0
 103 00aa 0F8EF000 		jle	.L9
 103      0000
 104              		.loc 1 235 0 is_stmt 0 discriminator 1
 105 00b0 C7050000 		movl	$16, _ZL11num_screens(%rip)
 105      00001000 
 105      0000
 106              	.LVL6:
 107 00ba 41BA1000 		movl	$16, %r10d
 107      0000
 108              	.L10:
 109              	.LBB19:
 110              	.LBB20:
 111              	.LBB21:
 112              	.LBB22:
 113              		.loc 1 249 0 is_stmt 1
 114 00c0 48632D00 		movslq	fl_screen(%rip), %rbp
 114      000000
 115              		.loc 1 248 0
 116 00c7 660FEFE4 		pxor	%xmm4, %xmm4
 117              		.loc 1 250 0
 118 00cb F30F1035 		movss	.LC4(%rip), %xmm6
 118      00000000 
 119 00d3 B8000000 		movl	$_ZL7screens, %eax
 119      00
 120 00d8 BE000000 		movl	$_ZL3dpi, %esi
 120      00
 121              		.loc 1 249 0
 122 00dd 31C9     		xorl	%ecx, %ecx
 123              		.loc 1 250 0
 124 00df 0F28EC   		movaps	%xmm4, %xmm5
 125              		.loc 1 248 0
 126 00e2 0F28FE   		movaps	%xmm6, %xmm7
 127              		.loc 1 249 0
 128 00e5 48C1E507 		salq	$7, %rbp
 129 00e9 EB23     		jmp	.L16
 130              	.LVL7:
 131 00eb 0F1F4400 		.p2align 4,,10
 131      00
 132              		.p2align 3
 133              	.L32:
 134              	.LBE22:
 135              		.loc 1 244 0
 136 00f0 F30F1116 		movss	%xmm2, (%rsi)
 137              		.loc 1 245 0
 138 00f4 F30F115E 		movss	%xmm3, 4(%rsi)
 138      04
 139              	.L12:
 140              	.LVL8:
 141 00f9 4883C101 		addq	$1, %rcx
 142              	.LVL9:
 143 00fd 4883C008 		addq	$8, %rax
 144 0101 4883C608 		addq	$8, %rsi
 145              	.LBE21:
 146              	.LBE20:
 147              		.loc 1 237 0 discriminator 2
 148 0105 4139CA   		cmpl	%ecx, %r10d
 149 0108 0F8EA200 		jle	.L1
 149      0000
 150              	.L16:
 151              	.LVL10:
 152              	.LBB26:
 153              		.loc 1 238 0
 154 010e 31D2     		xorl	%edx, %edx
 155              		.loc 1 239 0
 156 0110 31FF     		xorl	%edi, %edi
 157              		.loc 1 238 0
 158 0112 668910   		movw	%dx, (%rax)
 159              		.loc 1 239 0
 160 0115 66897802 		movw	%di, 2(%rax)
 161              		.loc 1 240 0
 162 0119 4889CA   		movq	%rcx, %rdx
 163 011c 4D8B8BE8 		movq	232(%r11), %r9
 163      000000
 164 0123 48C1E207 		salq	$7, %rdx
 165 0127 4C01CA   		addq	%r9, %rdx
 166              	.LBB24:
 167              		.loc 1 243 0
 168 012a 85DB     		testl	%ebx, %ebx
 169              	.LBE24:
 170              		.loc 1 240 0
 171 012c 448B4218 		movl	24(%rdx), %r8d
 172 0130 66448940 		movw	%r8w, 4(%rax)
 172      04
 173              		.loc 1 241 0
 174 0135 8B7A1C   		movl	28(%rdx), %edi
 175 0138 66897806 		movw	%di, 6(%rax)
 176              	.LBB25:
 177              		.loc 1 243 0
 178 013c 75B2     		jne	.L32
 179              	.LBB23:
 180              		.loc 1 247 0
 181 013e 8B5220   		movl	32(%rdx), %edx
 182              	.LVL11:
 183              		.loc 1 248 0
 184 0141 0F28C4   		movaps	%xmm4, %xmm0
 185 0144 85D2     		testl	%edx, %edx
 186 0146 741D     		je	.L13
 187              		.loc 1 248 0 is_stmt 0 discriminator 1
 188 0148 660FEFC0 		pxor	%xmm0, %xmm0
 189 014c 450FBFC0 		movswl	%r8w, %r8d
 190 0150 660FEFC9 		pxor	%xmm1, %xmm1
 191 0154 F3410F2A 		cvtsi2ss	%r8d, %xmm0
 191      C0
 192 0159 F30F2ACA 		cvtsi2ss	%edx, %xmm1
 193 015d F30F59C7 		mulss	%xmm7, %xmm0
 194 0161 F30F5EC1 		divss	%xmm1, %xmm0
 195              	.L13:
 196              		.loc 1 248 0 discriminator 4
 197 0165 F30F1106 		movss	%xmm0, (%rsi)
 198              		.loc 1 249 0 is_stmt 1 discriminator 4
 199 0169 418B5429 		movl	36(%r9,%rbp), %edx
 199      24
 200              	.LVL12:
 201              		.loc 1 250 0 discriminator 4
 202 016e 0F28C5   		movaps	%xmm5, %xmm0
 203 0171 85D2     		testl	%edx, %edx
 204 0173 741B     		je	.L14
 205              		.loc 1 250 0 is_stmt 0 discriminator 1
 206 0175 0FBFFF   		movswl	%di, %edi
 207 0178 660FEFC0 		pxor	%xmm0, %xmm0
 208 017c 660FEFC9 		pxor	%xmm1, %xmm1
 209 0180 F30F2AC7 		cvtsi2ss	%edi, %xmm0
 210 0184 F30F2ACA 		cvtsi2ss	%edx, %xmm1
 211 0188 F30F59C6 		mulss	%xmm6, %xmm0
 212 018c F30F5EC1 		divss	%xmm1, %xmm0
 213              	.L14:
 214              		.loc 1 250 0 discriminator 4
 215 0190 F30F1146 		movss	%xmm0, 4(%rsi)
 215      04
 216 0195 E95FFFFF 		jmp	.L12
 216      FF
 217              	.LVL13:
 218 019a 660F1F44 		.p2align 4,,10
 218      0000
 219              		.p2align 3
 220              	.L9:
 221              	.LBE23:
 222              	.LBE25:
 223              	.LBE26:
 224              		.loc 1 237 0 is_stmt 1 discriminator 1
 225 01a0 4585D2   		testl	%r10d, %r10d
 226 01a3 0F8F17FF 		jg	.L10
 226      FFFF
 227              	.LVL14:
 228 01a9 0F1F8000 		.p2align 4,,10
 228      000000
 229              		.p2align 3
 230              	.L1:
 231              	.LBE19:
 232              	.LBE18:
 233              		.loc 1 254 0
 234 01b0 488B4424 		movq	8(%rsp), %rax
 234      08
 235 01b5 64483304 		xorq	%fs:40, %rax
 235      25280000 
 235      00
 236 01be 0F859900 		jne	.L33
 236      0000
 237 01c4 4883C418 		addq	$24, %rsp
 238              		.cfi_remember_state
 239              		.cfi_def_cfa_offset 24
 240 01c8 5B       		popq	%rbx
 241              		.cfi_def_cfa_offset 16
 242              	.LVL15:
 243 01c9 5D       		popq	%rbp
 244              		.cfi_def_cfa_offset 8
 245 01ca C3       		ret
 246              	.LVL16:
 247 01cb 0F1F4400 		.p2align 4,,10
 247      00
 248              		.p2align 3
 249              	.L31:
 250              		.cfi_restore_state
 251              	.LBB27:
 252              	.LBB17:
 253              	.LBB16:
 254              	.LBB15:
 255              		.loc 1 198 0 discriminator 1
 256 01d0 660FEFDB 		pxor	%xmm3, %xmm3
 257              		.loc 1 199 0 discriminator 1
 258 01d4 BB010000 		movl	$1, %ebx
 258      00
 259              		.loc 1 198 0 discriminator 1
 260 01d9 660FEFC0 		pxor	%xmm0, %xmm0
 261 01dd F30F2A58 		cvtsi2ss	4(%rax), %xmm3
 261      04
 262 01e2 F30F2AC2 		cvtsi2ss	%edx, %xmm0
 263 01e6 F30F591D 		mulss	.LC4(%rip), %xmm3
 263      00000000 
 264 01ee F30F5ED8 		divss	%xmm0, %xmm3
 265 01f2 E99AFEFF 		jmp	.L6
 265      FF
 266              	.LVL17:
 267              	.L30:
 268              	.LBE15:
 269              	.LBE16:
 270              	.LBE17:
 271              	.LBE27:
 272              	.LBB28:
 273              	.LBB9:
 274              		.loc 1 179 0
 275 01f7 BE010000 		movl	$1, %esi
 275      00
 276 01fc BF000000 		movl	$.LC1, %edi
 276      00
 277 0201 E8000000 		call	dlopen
 277      00
 278              	.LVL18:
 279              		.loc 1 180 0
 280 0206 4885C0   		testq	%rax, %rax
 281 0209 7435     		je	.L34
 282              	.L4:
 283              		.loc 1 184 0 discriminator 1
 284 020b BE000000 		movl	$.LC3, %esi
 284      00
 285 0210 4889C7   		movq	%rax, %rdi
 286 0213 E8000000 		call	dlsym
 286      00
 287              	.LVL19:
 288 0218 48890500 		movq	%rax, _ZZL11screen_initvE10XRRSizes_f(%rip)
 288      000000
 289              	.L5:
 290              	.LBE9:
 291              	.LBE28:
 292              	.LBB29:
 293              		.loc 1 186 0
 294 021f 4885C0   		testq	%rax, %rax
 295 0222 0F850CFE 		jne	.L3
 295      FFFF
 296              	.L18:
 297              	.LBE29:
 298              		.loc 1 173 0
 299 0228 660FEFDB 		pxor	%xmm3, %xmm3
 300              		.loc 1 172 0
 301 022c 31DB     		xorl	%ebx, %ebx
 302              		.loc 1 173 0
 303 022e 0F28D3   		movaps	%xmm3, %xmm2
 304 0231 E95BFEFF 		jmp	.L6
 304      FF
 305              	.LVL20:
 306              	.L29:
 307              		.loc 1 170 0 discriminator 1
 308 0236 E8000000 		call	_Z15fl_open_displayv
 308      00
 309              	.LVL21:
 310 023b E9E4FDFF 		jmp	.L2
 310      FF
 311              	.LVL22:
 312              	.L34:
 313              	.LBB30:
 314              	.LBB10:
 315              		.loc 1 180 0 discriminator 1
 316 0240 BE010000 		movl	$1, %esi
 316      00
 317 0245 BF000000 		movl	$.LC2, %edi
 317      00
 318 024a E8000000 		call	dlopen
 318      00
 319              	.LVL23:
 320              		.loc 1 184 0 discriminator 1
 321 024f 4885C0   		testq	%rax, %rax
 322 0252 75B7     		jne	.L4
 323 0254 488B0500 		movq	_ZZL11screen_initvE10XRRSizes_f(%rip), %rax
 323      000000
 324              	.LVL24:
 325 025b EBC2     		jmp	.L5
 326              	.LVL25:
 327              	.L33:
 328              	.LBE10:
 329              	.LBE30:
 330              		.loc 1 254 0
 331 025d E8000000 		call	__stack_chk_fail
 331      00
 332              	.LVL26:
 333              		.cfi_endproc
 334              	.LFE307:
 336              		.section	.text.unlikely._ZL11screen_initv
 337              	.LCOLDE5:
 338              		.section	.text._ZL11screen_initv
 339              	.LHOTE5:
 340              		.section	.text.unlikely._ZN2Fl16call_screen_initEv,"ax",@progbits
 341              		.align 2
 342              	.LCOLDB6:
 343              		.section	.text._ZN2Fl16call_screen_initEv,"ax",@progbits
 344              	.LHOTB6:
 345              		.align 2
 346              		.p2align 4,,15
 347              		.globl	_ZN2Fl16call_screen_initEv
 349              	_ZN2Fl16call_screen_initEv:
 350              	.LFB308:
 351              		.loc 1 259 0
 352              		.cfi_startproc
 353              		.loc 1 260 0
 354 0000 E9000000 		jmp	_ZL11screen_initv
 354      00
 355              	.LVL27:
 356              		.cfi_endproc
 357              	.LFE308:
 359              		.section	.text.unlikely._ZN2Fl16call_screen_initEv
 360              	.LCOLDE6:
 361              		.section	.text._ZN2Fl16call_screen_initEv
 362              	.LHOTE6:
 363              		.section	.text.unlikely._ZN2Fl12screen_countEv,"ax",@progbits
 364              		.align 2
 365              	.LCOLDB7:
 366              		.section	.text._ZN2Fl12screen_countEv,"ax",@progbits
 367              	.LHOTB7:
 368              		.align 2
 369              		.p2align 4,,15
 370              		.globl	_ZN2Fl12screen_countEv
 372              	_ZN2Fl12screen_countEv:
 373              	.LFB309:
 374              		.loc 1 267 0
 375              		.cfi_startproc
 376              		.loc 1 268 0
 377 0000 8B050000 		movl	_ZL11num_screens(%rip), %eax
 377      0000
 378 0006 85C0     		testl	%eax, %eax
 379 0008 780E     		js	.L41
 380              		.loc 1 270 0
 381 000a 85C0     		testl	%eax, %eax
 382 000c BA010000 		movl	$1, %edx
 382      00
 383 0011 0F44C2   		cmove	%edx, %eax
 384              		.loc 1 271 0
 385 0014 C3       		ret
 386              		.p2align 4,,10
 387 0015 0F1F00   		.p2align 3
 388              	.L41:
 389              		.loc 1 267 0 discriminator 1
 390 0018 4883EC08 		subq	$8, %rsp
 391              		.cfi_def_cfa_offset 16
 392              		.loc 1 268 0 discriminator 1
 393 001c E8000000 		call	_ZL11screen_initv
 393      00
 394              	.LVL28:
 395 0021 8B050000 		movl	_ZL11num_screens(%rip), %eax
 395      0000
 396              		.loc 1 270 0 discriminator 1
 397 0027 BA010000 		movl	$1, %edx
 397      00
 398 002c 85C0     		testl	%eax, %eax
 399 002e 0F44C2   		cmove	%edx, %eax
 400              		.loc 1 271 0 discriminator 1
 401 0031 4883C408 		addq	$8, %rsp
 402              		.cfi_def_cfa_offset 8
 403 0035 C3       		ret
 404              		.cfi_endproc
 405              	.LFE309:
 407              		.section	.text.unlikely._ZN2Fl12screen_countEv
 408              	.LCOLDE7:
 409              		.section	.text._ZN2Fl12screen_countEv
 410              	.LHOTE7:
 411              		.section	.text.unlikely._ZN2Fl11screen_xywhERiS0_S0_S0_i,"ax",@progbits
 412              		.align 2
 413              	.LCOLDB8:
 414              		.section	.text._ZN2Fl11screen_xywhERiS0_S0_S0_i,"ax",@progbits
 415              	.LHOTB8:
 416              		.align 2
 417              		.p2align 4,,15
 418              		.globl	_ZN2Fl11screen_xywhERiS0_S0_S0_i
 420              	_ZN2Fl11screen_xywhERiS0_S0_S0_i:
 421              	.LFB313:
 422              		.loc 1 329 0
 423              		.cfi_startproc
 424              	.LVL29:
 425 0000 4883EC38 		subq	$56, %rsp
 426              		.cfi_def_cfa_offset 64
 427              		.loc 1 330 0
 428 0004 8B050000 		movl	_ZL11num_screens(%rip), %eax
 428      0000
 429 000a 85C0     		testl	%eax, %eax
 430 000c 785A     		js	.L49
 431              	.LVL30:
 432              	.L43:
 433              		.loc 1 332 0
 434 000e 4585C0   		testl	%r8d, %r8d
 435 0011 784D     		js	.L46
 436              		.loc 1 333 0 discriminator 1
 437 0013 4139C0   		cmpl	%eax, %r8d
 438 0016 41B90000 		movl	$0, %r9d
 438      0000
 439 001c 450F4DC1 		cmovge	%r9d, %r8d
 440              	.L44:
 441              	.LVL31:
 442              		.loc 1 354 0
 443 0020 85C0     		testl	%eax, %eax
 444 0022 7E2F     		jle	.L42
 445              		.loc 1 355 0
 446 0024 4D63C0   		movslq	%r8d, %r8
 447 0027 420FBF04 		movswl	_ZL7screens(,%r8,8), %eax
 447      C5000000 
 447      00
 448 0030 8907     		movl	%eax, (%rdi)
 449              		.loc 1 356 0
 450 0032 420FBF04 		movswl	_ZL7screens+2(,%r8,8), %eax
 450      C5000000 
 450      00
 451 003b 8906     		movl	%eax, (%rsi)
 452              		.loc 1 357 0
 453 003d 420FBF04 		movswl	_ZL7screens+4(,%r8,8), %eax
 453      C5000000 
 453      00
 454 0046 8902     		movl	%eax, (%rdx)
 455              		.loc 1 358 0
 456 0048 420FBF04 		movswl	_ZL7screens+6(,%r8,8), %eax
 456      C5000000 
 456      00
 457 0051 8901     		movl	%eax, (%rcx)
 458              	.LVL32:
 459              	.L42:
 460              		.loc 1 361 0
 461 0053 4883C438 		addq	$56, %rsp
 462              		.cfi_remember_state
 463              		.cfi_def_cfa_offset 8
 464 0057 C3       		ret
 465              	.LVL33:
 466 0058 0F1F8400 		.p2align 4,,10
 466      00000000 
 467              		.p2align 3
 468              	.L46:
 469              		.cfi_restore_state
 470              		.loc 1 333 0
 471 0060 4531C0   		xorl	%r8d, %r8d
 472 0063 EBBB     		jmp	.L44
 473              	.LVL34:
 474              		.p2align 4,,10
 475 0065 0F1F00   		.p2align 3
 476              	.L49:
 477 0068 44894424 		movl	%r8d, 44(%rsp)
 477      2C
 478 006d 48894C24 		movq	%rcx, 32(%rsp)
 478      20
 479 0072 48895424 		movq	%rdx, 24(%rsp)
 479      18
 480 0077 48897424 		movq	%rsi, 16(%rsp)
 480      10
 481 007c 48897C24 		movq	%rdi, 8(%rsp)
 481      08
 482              		.loc 1 330 0 discriminator 1
 483 0081 E8000000 		call	_ZL11screen_initv
 483      00
 484              	.LVL35:
 485 0086 8B050000 		movl	_ZL11num_screens(%rip), %eax
 485      0000
 486 008c 448B4424 		movl	44(%rsp), %r8d
 486      2C
 487 0091 488B4C24 		movq	32(%rsp), %rcx
 487      20
 488 0096 488B5424 		movq	24(%rsp), %rdx
 488      18
 489 009b 488B7424 		movq	16(%rsp), %rsi
 489      10
 490 00a0 488B7C24 		movq	8(%rsp), %rdi
 490      08
 491 00a5 E964FFFF 		jmp	.L43
 491      FF
 492              		.cfi_endproc
 493              	.LFE313:
 495              		.section	.text.unlikely._ZN2Fl11screen_xywhERiS0_S0_S0_i
 496              	.LCOLDE8:
 497              		.section	.text._ZN2Fl11screen_xywhERiS0_S0_S0_i
 498              	.LHOTE8:
 499              		.section	.text.unlikely._ZN2Fl16screen_work_areaERiS0_S0_S0_i,"ax",@progbits
 500              		.align 2
 501              	.LCOLDB9:
 502              		.section	.text._ZN2Fl16screen_work_areaERiS0_S0_S0_i,"ax",@progbits
 503              	.LHOTB9:
 504              		.align 2
 505              		.p2align 4,,15
 506              		.globl	_ZN2Fl16screen_work_areaERiS0_S0_S0_i
 508              	_ZN2Fl16screen_work_areaERiS0_S0_S0_i:
 509              	.LFB312:
 510              		.loc 1 300 0
 511              		.cfi_startproc
 512              	.LVL36:
 513 0000 4883EC38 		subq	$56, %rsp
 514              		.cfi_def_cfa_offset 64
 515              		.loc 1 301 0
 516 0004 8B050000 		movl	_ZL11num_screens(%rip), %eax
 516      0000
 517 000a 85C0     		testl	%eax, %eax
 518 000c 7862     		js	.L58
 519              	.LVL37:
 520              	.L51:
 521              		.loc 1 311 0
 522 000e 4139C0   		cmpl	%eax, %r8d
 523 0011 7D0E     		jge	.L55
 524 0013 4585C0   		testl	%r8d, %r8d
 525 0016 7E09     		jle	.L55
 526              		.loc 1 320 0
 527 0018 4883C438 		addq	$56, %rsp
 528              		.cfi_remember_state
 529              		.cfi_def_cfa_offset 8
 530              		.loc 1 317 0
 531 001c E9000000 		jmp	_ZN2Fl11screen_xywhERiS0_S0_S0_i
 531      00
 532              	.LVL38:
 533              	.L55:
 534              		.cfi_restore_state
 535 0021 48894C24 		movq	%rcx, 32(%rsp)
 535      20
 536 0026 48895424 		movq	%rdx, 24(%rsp)
 536      18
 537 002b 48897424 		movq	%rsi, 16(%rsp)
 537      10
 538 0030 48897C24 		movq	%rdi, 8(%rsp)
 538      08
 539              	.LVL39:
 540              	.LBB33:
 541              	.LBB34:
 542              		.loc 1 312 0
 543 0035 E8000000 		call	_ZN2Fl1xEv
 543      00
 544              	.LVL40:
 545 003a 488B7C24 		movq	8(%rsp), %rdi
 545      08
 546 003f 8907     		movl	%eax, (%rdi)
 547              		.loc 1 313 0
 548 0041 E8000000 		call	_ZN2Fl1yEv
 548      00
 549              	.LVL41:
 550 0046 488B7424 		movq	16(%rsp), %rsi
 550      10
 551 004b 8906     		movl	%eax, (%rsi)
 552              		.loc 1 314 0
 553 004d E8000000 		call	_ZN2Fl1wEv
 553      00
 554              	.LVL42:
 555 0052 488B5424 		movq	24(%rsp), %rdx
 555      18
 556 0057 8902     		movl	%eax, (%rdx)
 557              		.loc 1 315 0
 558 0059 E8000000 		call	_ZN2Fl1hEv
 558      00
 559              	.LVL43:
 560 005e 488B4C24 		movq	32(%rsp), %rcx
 560      20
 561 0063 8901     		movl	%eax, (%rcx)
 562              	.LBE34:
 563              	.LBE33:
 564              		.loc 1 320 0
 565 0065 4883C438 		addq	$56, %rsp
 566              		.cfi_remember_state
 567              		.cfi_def_cfa_offset 8
 568 0069 C3       		ret
 569              	.LVL44:
 570 006a 660F1F44 		.p2align 4,,10
 570      0000
 571              		.p2align 3
 572              	.L58:
 573              		.cfi_restore_state
 574 0070 44894424 		movl	%r8d, 44(%rsp)
 574      2C
 575 0075 48894C24 		movq	%rcx, 32(%rsp)
 575      20
 576 007a 48895424 		movq	%rdx, 24(%rsp)
 576      18
 577 007f 48897424 		movq	%rsi, 16(%rsp)
 577      10
 578 0084 48897C24 		movq	%rdi, 8(%rsp)
 578      08
 579              		.loc 1 301 0 discriminator 1
 580 0089 E8000000 		call	_ZL11screen_initv
 580      00
 581              	.LVL45:
 582 008e 8B050000 		movl	_ZL11num_screens(%rip), %eax
 582      0000
 583 0094 448B4424 		movl	44(%rsp), %r8d
 583      2C
 584 0099 488B4C24 		movq	32(%rsp), %rcx
 584      20
 585 009e 488B5424 		movq	24(%rsp), %rdx
 585      18
 586 00a3 488B7424 		movq	16(%rsp), %rsi
 586      10
 587 00a8 488B7C24 		movq	8(%rsp), %rdi
 587      08
 588 00ad E95CFFFF 		jmp	.L51
 588      FF
 589              		.cfi_endproc
 590              	.LFE312:
 592              		.section	.text.unlikely._ZN2Fl16screen_work_areaERiS0_S0_S0_i
 593              	.LCOLDE9:
 594              		.section	.text._ZN2Fl16screen_work_areaERiS0_S0_S0_i
 595              	.LHOTE9:
 596              		.section	.text.unlikely._ZN2Fl10screen_numEii,"ax",@progbits
 597              		.align 2
 598              	.LCOLDB10:
 599              		.section	.text._ZN2Fl10screen_numEii,"ax",@progbits
 600              	.LHOTB10:
 601              		.align 2
 602              		.p2align 4,,15
 603              		.globl	_ZN2Fl10screen_numEii
 605              	_ZN2Fl10screen_numEii:
 606              	.LFB315:
 607              		.loc 1 380 0
 608              		.cfi_startproc
 609              	.LVL46:
 610 0000 4154     		pushq	%r12
 611              		.cfi_def_cfa_offset 16
 612              		.cfi_offset 12, -16
 613 0002 55       		pushq	%rbp
 614              		.cfi_def_cfa_offset 24
 615              		.cfi_offset 6, -24
 616 0003 4189F4   		movl	%esi, %r12d
 617 0006 53       		pushq	%rbx
 618              		.cfi_def_cfa_offset 32
 619              		.cfi_offset 3, -32
 620 0007 89FD     		movl	%edi, %ebp
 621 0009 4883EC20 		subq	$32, %rsp
 622              		.cfi_def_cfa_offset 64
 623              		.loc 1 380 0
 624 000d 64488B04 		movq	%fs:40, %rax
 624      25280000 
 624      00
 625 0016 48894424 		movq	%rax, 24(%rsp)
 625      18
 626 001b 31C0     		xorl	%eax, %eax
 627              	.LVL47:
 628              		.loc 1 382 0
 629 001d 8B050000 		movl	_ZL11num_screens(%rip), %eax
 629      0000
 630 0023 85C0     		testl	%eax, %eax
 631 0025 0F889D00 		js	.L68
 631      0000
 632              	.LVL48:
 633              	.L60:
 634              	.LBB35:
 635              		.loc 1 384 0 discriminator 1
 636 002b 31DB     		xorl	%ebx, %ebx
 637 002d 85C0     		testl	%eax, %eax
 638 002f 7E7A     		jle	.L64
 639              	.LVL49:
 640              		.p2align 4,,10
 641 0031 0F1F8000 		.p2align 3
 641      000000
 642              	.L65:
 643              	.LBB36:
 644              		.loc 1 386 0
 645 0038 488D4C24 		leaq	20(%rsp), %rcx
 645      14
 646 003d 488D5424 		leaq	16(%rsp), %rdx
 646      10
 647 0042 488D7424 		leaq	12(%rsp), %rsi
 647      0C
 648 0047 488D7C24 		leaq	8(%rsp), %rdi
 648      08
 649 004c 4189D8   		movl	%ebx, %r8d
 650              		.loc 1 385 0
 651 004f C7442408 		movl	$0, 8(%rsp)
 651      00000000 
 652 0057 C744240C 		movl	$0, 12(%rsp)
 652      00000000 
 653 005f C7442410 		movl	$0, 16(%rsp)
 653      00000000 
 654 0067 C7442414 		movl	$0, 20(%rsp)
 654      00000000 
 655              		.loc 1 386 0
 656 006f E8000000 		call	_ZN2Fl11screen_xywhERiS0_S0_S0_i
 656      00
 657              	.LVL50:
 658              		.loc 1 387 0
 659 0074 8B442408 		movl	8(%rsp), %eax
 660 0078 39E8     		cmpl	%ebp, %eax
 661 007a 7F24     		jg	.L63
 662              		.loc 1 387 0 is_stmt 0 discriminator 1
 663 007c 03442410 		addl	16(%rsp), %eax
 664 0080 39C5     		cmpl	%eax, %ebp
 665 0082 7D1C     		jge	.L63
 666              		.loc 1 387 0 discriminator 2
 667 0084 8B44240C 		movl	12(%rsp), %eax
 668 0088 4439E0   		cmpl	%r12d, %eax
 669 008b 7F13     		jg	.L63
 670              		.loc 1 387 0 discriminator 3
 671 008d 03442414 		addl	20(%rsp), %eax
 672 0091 4139C4   		cmpl	%eax, %r12d
 673 0094 7C17     		jl	.L62
 674 0096 662E0F1F 		.p2align 4,,10
 674      84000000 
 674      0000
 675              		.p2align 3
 676              	.L63:
 677              	.LBE36:
 678              		.loc 1 384 0 is_stmt 1
 679 00a0 83C301   		addl	$1, %ebx
 680              	.LVL51:
 681 00a3 391D0000 		cmpl	%ebx, _ZL11num_screens(%rip)
 681      0000
 682 00a9 7F8D     		jg	.L65
 683              	.LVL52:
 684              	.L64:
 685              	.LBE35:
 686              		.loc 1 381 0
 687 00ab 31DB     		xorl	%ebx, %ebx
 688              	.L62:
 689              	.LVL53:
 690              		.loc 1 393 0
 691 00ad 488B5424 		movq	24(%rsp), %rdx
 691      18
 692 00b2 64483314 		xorq	%fs:40, %rdx
 692      25280000 
 692      00
 693 00bb 89D8     		movl	%ebx, %eax
 694 00bd 7519     		jne	.L69
 695 00bf 4883C420 		addq	$32, %rsp
 696              		.cfi_remember_state
 697              		.cfi_def_cfa_offset 32
 698 00c3 5B       		popq	%rbx
 699              		.cfi_def_cfa_offset 24
 700              	.LVL54:
 701 00c4 5D       		popq	%rbp
 702              		.cfi_def_cfa_offset 16
 703              	.LVL55:
 704 00c5 415C     		popq	%r12
 705              		.cfi_def_cfa_offset 8
 706              	.LVL56:
 707 00c7 C3       		ret
 708              	.LVL57:
 709              	.L68:
 710              		.cfi_restore_state
 711              		.loc 1 382 0 discriminator 1
 712 00c8 E8000000 		call	_ZL11screen_initv
 712      00
 713              	.LVL58:
 714 00cd 8B050000 		movl	_ZL11num_screens(%rip), %eax
 714      0000
 715 00d3 E953FFFF 		jmp	.L60
 715      FF
 716              	.LVL59:
 717              	.L69:
 718              		.loc 1 393 0
 719 00d8 E8000000 		call	__stack_chk_fail
 719      00
 720              	.LVL60:
 721              		.cfi_endproc
 722              	.LFE315:
 724              		.section	.text.unlikely._ZN2Fl10screen_numEii
 725              	.LCOLDE10:
 726              		.section	.text._ZN2Fl10screen_numEii
 727              	.LHOTE10:
 728              		.section	.text.unlikely._ZN2Fl11screen_xywhERiS0_S0_S0_ii,"ax",@progbits
 729              		.align 2
 730              	.LCOLDB11:
 731              		.section	.text._ZN2Fl11screen_xywhERiS0_S0_S0_ii,"ax",@progbits
 732              	.LHOTB11:
 733              		.align 2
 734              		.p2align 4,,15
 735              		.globl	_ZN2Fl11screen_xywhERiS0_S0_S0_ii
 737              	_ZN2Fl11screen_xywhERiS0_S0_S0_ii:
 738              	.LFB310:
 739              		.loc 1 279 0
 740              		.cfi_startproc
 741              	.LVL61:
 742 0000 4155     		pushq	%r13
 743              		.cfi_def_cfa_offset 16
 744              		.cfi_offset 13, -16
 745 0002 4154     		pushq	%r12
 746              		.cfi_def_cfa_offset 24
 747              		.cfi_offset 12, -24
 748 0004 4989CD   		movq	%rcx, %r13
 749 0007 55       		pushq	%rbp
 750              		.cfi_def_cfa_offset 32
 751              		.cfi_offset 6, -32
 752 0008 53       		pushq	%rbx
 753              		.cfi_def_cfa_offset 40
 754              		.cfi_offset 3, -40
 755 0009 4889F5   		movq	%rsi, %rbp
 756 000c 4889FB   		movq	%rdi, %rbx
 757              		.loc 1 280 0
 758 000f 4489CE   		movl	%r9d, %esi
 759              	.LVL62:
 760 0012 4489C7   		movl	%r8d, %edi
 761              	.LVL63:
 762              		.loc 1 279 0
 763 0015 4883EC08 		subq	$8, %rsp
 764              		.cfi_def_cfa_offset 48
 765              		.loc 1 279 0
 766 0019 4989D4   		movq	%rdx, %r12
 767              		.loc 1 280 0
 768 001c E8000000 		call	_ZN2Fl10screen_numEii
 768      00
 769              	.LVL64:
 770              		.loc 1 281 0
 771 0021 4883C408 		addq	$8, %rsp
 772              		.cfi_def_cfa_offset 40
 773              		.loc 1 280 0
 774 0025 4C89E9   		movq	%r13, %rcx
 775 0028 4C89E2   		movq	%r12, %rdx
 776 002b 4889EE   		movq	%rbp, %rsi
 777 002e 4889DF   		movq	%rbx, %rdi
 778 0031 4189C0   		movl	%eax, %r8d
 779              		.loc 1 281 0
 780 0034 5B       		popq	%rbx
 781              		.cfi_def_cfa_offset 32
 782              	.LVL65:
 783 0035 5D       		popq	%rbp
 784              		.cfi_def_cfa_offset 24
 785              	.LVL66:
 786 0036 415C     		popq	%r12
 787              		.cfi_def_cfa_offset 16
 788              	.LVL67:
 789 0038 415D     		popq	%r13
 790              		.cfi_def_cfa_offset 8
 791              	.LVL68:
 792              		.loc 1 280 0
 793 003a E9000000 		jmp	_ZN2Fl11screen_xywhERiS0_S0_S0_i
 793      00
 794              	.LVL69:
 795              		.cfi_endproc
 796              	.LFE310:
 798              		.section	.text.unlikely._ZN2Fl11screen_xywhERiS0_S0_S0_ii
 799              	.LCOLDE11:
 800              		.section	.text._ZN2Fl11screen_xywhERiS0_S0_S0_ii
 801              	.LHOTE11:
 802              		.section	.text.unlikely._ZN2Fl16screen_work_areaERiS0_S0_S0_ii,"ax",@progbits
 803              		.align 2
 804              	.LCOLDB12:
 805              		.section	.text._ZN2Fl16screen_work_areaERiS0_S0_S0_ii,"ax",@progbits
 806              	.LHOTB12:
 807              		.align 2
 808              		.p2align 4,,15
 809              		.globl	_ZN2Fl16screen_work_areaERiS0_S0_S0_ii
 811              	_ZN2Fl16screen_work_areaERiS0_S0_S0_ii:
 812              	.LFB311:
 813              		.loc 1 290 0
 814              		.cfi_startproc
 815              	.LVL70:
 816 0000 4155     		pushq	%r13
 817              		.cfi_def_cfa_offset 16
 818              		.cfi_offset 13, -16
 819 0002 4154     		pushq	%r12
 820              		.cfi_def_cfa_offset 24
 821              		.cfi_offset 12, -24
 822 0004 4989CD   		movq	%rcx, %r13
 823 0007 55       		pushq	%rbp
 824              		.cfi_def_cfa_offset 32
 825              		.cfi_offset 6, -32
 826 0008 53       		pushq	%rbx
 827              		.cfi_def_cfa_offset 40
 828              		.cfi_offset 3, -40
 829 0009 4889F5   		movq	%rsi, %rbp
 830 000c 4889FB   		movq	%rdi, %rbx
 831              		.loc 1 291 0
 832 000f 4489CE   		movl	%r9d, %esi
 833              	.LVL71:
 834 0012 4489C7   		movl	%r8d, %edi
 835              	.LVL72:
 836              		.loc 1 290 0
 837 0015 4883EC08 		subq	$8, %rsp
 838              		.cfi_def_cfa_offset 48
 839              		.loc 1 290 0
 840 0019 4989D4   		movq	%rdx, %r12
 841              		.loc 1 291 0
 842 001c E8000000 		call	_ZN2Fl10screen_numEii
 842      00
 843              	.LVL73:
 844              		.loc 1 292 0
 845 0021 4883C408 		addq	$8, %rsp
 846              		.cfi_def_cfa_offset 40
 847              		.loc 1 291 0
 848 0025 4C89E9   		movq	%r13, %rcx
 849 0028 4C89E2   		movq	%r12, %rdx
 850 002b 4889EE   		movq	%rbp, %rsi
 851 002e 4889DF   		movq	%rbx, %rdi
 852 0031 4189C0   		movl	%eax, %r8d
 853              		.loc 1 292 0
 854 0034 5B       		popq	%rbx
 855              		.cfi_def_cfa_offset 32
 856              	.LVL74:
 857 0035 5D       		popq	%rbp
 858              		.cfi_def_cfa_offset 24
 859              	.LVL75:
 860 0036 415C     		popq	%r12
 861              		.cfi_def_cfa_offset 16
 862              	.LVL76:
 863 0038 415D     		popq	%r13
 864              		.cfi_def_cfa_offset 8
 865              	.LVL77:
 866              		.loc 1 291 0
 867 003a E9000000 		jmp	_ZN2Fl16screen_work_areaERiS0_S0_S0_i
 867      00
 868              	.LVL78:
 869              		.cfi_endproc
 870              	.LFE311:
 872              		.section	.text.unlikely._ZN2Fl16screen_work_areaERiS0_S0_S0_ii
 873              	.LCOLDE12:
 874              		.section	.text._ZN2Fl16screen_work_areaERiS0_S0_S0_ii
 875              	.LHOTE12:
 876              		.section	.text.unlikely._ZN2Fl10screen_numEiiii,"ax",@progbits
 877              		.align 2
 878              	.LCOLDB13:
 879              		.section	.text._ZN2Fl10screen_numEiiii,"ax",@progbits
 880              	.LHOTB13:
 881              		.align 2
 882              		.p2align 4,,15
 883              		.globl	_ZN2Fl10screen_numEiiii
 885              	_ZN2Fl10screen_numEiiii:
 886              	.LFB317:
 887              		.loc 1 413 0
 888              		.cfi_startproc
 889              	.LVL79:
 890 0000 4157     		pushq	%r15
 891              		.cfi_def_cfa_offset 16
 892              		.cfi_offset 15, -16
 893 0002 4156     		pushq	%r14
 894              		.cfi_def_cfa_offset 24
 895              		.cfi_offset 14, -24
 896              	.LBB37:
 897              		.loc 1 416 0
 898 0004 4531FF   		xorl	%r15d, %r15d
 899              	.LBE37:
 900              		.loc 1 413 0
 901 0007 4155     		pushq	%r13
 902              		.cfi_def_cfa_offset 32
 903              		.cfi_offset 13, -32
 904 0009 4154     		pushq	%r12
 905              		.cfi_def_cfa_offset 40
 906              		.cfi_offset 12, -40
 907 000b 4189F5   		movl	%esi, %r13d
 908 000e 55       		pushq	%rbp
 909              		.cfi_def_cfa_offset 48
 910              		.cfi_offset 6, -48
 911 000f 53       		pushq	%rbx
 912              		.cfi_def_cfa_offset 56
 913              		.cfi_offset 3, -56
 914 0010 89D5     		movl	%edx, %ebp
 915 0012 89FB     		movl	%edi, %ebx
 916 0014 4189CE   		movl	%ecx, %r14d
 917              		.loc 1 414 0
 918 0017 4531E4   		xorl	%r12d, %r12d
 919              		.loc 1 413 0
 920 001a 4883EC38 		subq	$56, %rsp
 921              		.cfi_def_cfa_offset 112
 922              		.loc 1 413 0
 923 001e 64488B04 		movq	%fs:40, %rax
 923      25280000 
 923      00
 924 0027 48894424 		movq	%rax, 40(%rsp)
 924      28
 925 002c 31C0     		xorl	%eax, %eax
 926              	.LVL80:
 927              		.loc 1 415 0
 928 002e C744240C 		movl	$0x00000000, 12(%rsp)
 928      00000000 
 929 0036 E9D10000 		jmp	.L80
 929      00
 930              	.LVL81:
 931 003b 0F1F4400 		.p2align 4,,10
 931      00
 932              		.p2align 3
 933              	.L75:
 934              	.LBB47:
 935              	.LBB38:
 936              	.LBB39:
 937              		.loc 1 270 0
 938 0040 85C0     		testl	%eax, %eax
 939 0042 BA010000 		movl	$1, %edx
 939      00
 940 0047 0F44C2   		cmove	%edx, %eax
 941              	.LBE39:
 942              	.LBE38:
 943              		.loc 1 416 0
 944 004a 4139C7   		cmpl	%eax, %r15d
 945 004d 0F8DED00 		jge	.L77
 945      0000
 946              	.L88:
 947              	.LBB41:
 948              		.loc 1 418 0
 949 0053 488D4C24 		leaq	36(%rsp), %rcx
 949      24
 950 0058 488D5424 		leaq	32(%rsp), %rdx
 950      20
 951 005d 488D7424 		leaq	28(%rsp), %rsi
 951      1C
 952 0062 488D7C24 		leaq	24(%rsp), %rdi
 952      18
 953 0067 4589F8   		movl	%r15d, %r8d
 954              		.loc 1 417 0
 955 006a C7442418 		movl	$0, 24(%rsp)
 955      00000000 
 956 0072 C744241C 		movl	$0, 28(%rsp)
 956      00000000 
 957 007a C7442420 		movl	$0, 32(%rsp)
 957      00000000 
 958 0082 C7442424 		movl	$0, 36(%rsp)
 958      00000000 
 959              		.loc 1 418 0
 960 008a E8000000 		call	_ZN2Fl11screen_xywhERiS0_S0_S0_i
 960      00
 961              	.LVL82:
 962              		.loc 1 419 0
 963 008f 8B442418 		movl	24(%rsp), %eax
 964              	.LVL83:
 965              	.LBB42:
 966              	.LBB43:
 967              		.loc 1 398 0
 968 0093 8D0C2B   		leal	(%rbx,%rbp), %ecx
 969              	.LBE43:
 970              	.LBE42:
 971              		.loc 1 419 0
 972 0096 8B7C2424 		movl	36(%rsp), %edi
 973 009a 8B542420 		movl	32(%rsp), %edx
 974 009e 8B74241C 		movl	28(%rsp), %esi
 975              	.LVL84:
 976              	.LBB45:
 977              	.LBB44:
 978              		.loc 1 399 0
 979 00a2 660FEFC0 		pxor	%xmm0, %xmm0
 980              		.loc 1 398 0
 981 00a6 39C1     		cmpl	%eax, %ecx
 982 00a8 7C4E     		jl	.L78
 983 00aa 01C2     		addl	%eax, %edx
 984              	.LVL85:
 985 00ac 39D3     		cmpl	%edx, %ebx
 986 00ae 7F48     		jg	.L78
 987 00b0 478D4435 		leal	0(%r13,%r14), %r8d
 987      00
 988 00b5 4439C6   		cmpl	%r8d, %esi
 989 00b8 7F3E     		jg	.L78
 990 00ba 01F7     		addl	%esi, %edi
 991              	.LVL86:
 992 00bc 4139FD   		cmpl	%edi, %r13d
 993 00bf 7F37     		jg	.L78
 994              	.LVL87:
 995              		.loc 1 404 0
 996 00c1 39D1     		cmpl	%edx, %ecx
 997 00c3 660FEFC9 		pxor	%xmm1, %xmm1
 998 00c7 0F4ED1   		cmovle	%ecx, %edx
 999              	.LVL88:
 1000 00ca 39D8     		cmpl	%ebx, %eax
 1001 00cc 0F4CC3   		cmovl	%ebx, %eax
 1002              	.LVL89:
 1003 00cf 660FEFC0 		pxor	%xmm0, %xmm0
 1004 00d3 29C2     		subl	%eax, %edx
 1005 00d5 4139F8   		cmpl	%edi, %r8d
 1006 00d8 410F4EF8 		cmovle	%r8d, %edi
 1007              	.LVL90:
 1008 00dc 4439EE   		cmpl	%r13d, %esi
 1009 00df 410F4CF5 		cmovl	%r13d, %esi
 1010              	.LVL91:
 1011 00e3 29F7     		subl	%esi, %edi
 1012 00e5 F30F2ACA 		cvtsi2ss	%edx, %xmm1
 1013 00e9 F30F2AC7 		cvtsi2ss	%edi, %xmm0
 1014 00ed F30F59C1 		mulss	%xmm1, %xmm0
 1015              	.LVL92:
 1016              		.p2align 4,,10
 1017 00f1 0F1F8000 		.p2align 3
 1017      000000
 1018              	.L78:
 1019              	.LBE44:
 1020              	.LBE45:
 1021              		.loc 1 420 0
 1022 00f8 0F2E4424 		ucomiss	12(%rsp), %xmm0
 1022      0C
 1023 00fd 7609     		jbe	.L79
 1024              		.loc 1 422 0
 1025 00ff F30F1144 		movss	%xmm0, 12(%rsp)
 1025      240C
 1026              	.LVL93:
 1027 0105 4589FC   		movl	%r15d, %r12d
 1028              	.LVL94:
 1029              	.L79:
 1030              	.LBE41:
 1031              		.loc 1 416 0 discriminator 2
 1032 0108 4183C701 		addl	$1, %r15d
 1033              	.LVL95:
 1034              	.L80:
 1035              	.LBB46:
 1036              	.LBB40:
 1037              		.loc 1 268 0 discriminator 1
 1038 010c 8B050000 		movl	_ZL11num_screens(%rip), %eax
 1038      0000
 1039 0112 85C0     		testl	%eax, %eax
 1040 0114 0F8926FF 		jns	.L75
 1040      FFFF
 1041              		.loc 1 268 0 is_stmt 0
 1042 011a E8000000 		call	_ZL11screen_initv
 1042      00
 1043              	.LVL96:
 1044 011f 8B050000 		movl	_ZL11num_screens(%rip), %eax
 1044      0000
 1045              		.loc 1 270 0 is_stmt 1
 1046 0125 BA010000 		movl	$1, %edx
 1046      00
 1047 012a 85C0     		testl	%eax, %eax
 1048 012c 0F44C2   		cmove	%edx, %eax
 1049              	.LBE40:
 1050              	.LBE46:
 1051              		.loc 1 416 0
 1052 012f 4139C7   		cmpl	%eax, %r15d
 1053 0132 0F8C1BFF 		jl	.L88
 1053      FFFF
 1054 0138 0F1F8400 		.p2align 4,,10
 1054      00000000 
 1055              		.p2align 3
 1056              	.L77:
 1057              	.LBE47:
 1058              		.loc 1 426 0
 1059 0140 488B5C24 		movq	40(%rsp), %rbx
 1059      28
 1060 0145 6448331C 		xorq	%fs:40, %rbx
 1060      25280000 
 1060      00
 1061              	.LVL97:
 1062 014e 4489E0   		movl	%r12d, %eax
 1063 0151 750F     		jne	.L89
 1064              	.LVL98:
 1065 0153 4883C438 		addq	$56, %rsp
 1066              		.cfi_remember_state
 1067              		.cfi_def_cfa_offset 56
 1068 0157 5B       		popq	%rbx
 1069              		.cfi_def_cfa_offset 48
 1070 0158 5D       		popq	%rbp
 1071              		.cfi_def_cfa_offset 40
 1072              	.LVL99:
 1073 0159 415C     		popq	%r12
 1074              		.cfi_def_cfa_offset 32
 1075 015b 415D     		popq	%r13
 1076              		.cfi_def_cfa_offset 24
 1077              	.LVL100:
 1078 015d 415E     		popq	%r14
 1079              		.cfi_def_cfa_offset 16
 1080              	.LVL101:
 1081 015f 415F     		popq	%r15
 1082              		.cfi_def_cfa_offset 8
 1083              	.LVL102:
 1084 0161 C3       		ret
 1085              	.LVL103:
 1086              	.L89:
 1087              		.cfi_restore_state
 1088 0162 E8000000 		call	__stack_chk_fail
 1088      00
 1089              	.LVL104:
 1090              		.cfi_endproc
 1091              	.LFE317:
 1093              		.section	.text.unlikely._ZN2Fl10screen_numEiiii
 1094              	.LCOLDE13:
 1095              		.section	.text._ZN2Fl10screen_numEiiii
 1096              	.LHOTE13:
 1097              		.section	.text.unlikely._ZN2Fl11screen_xywhERiS0_S0_S0_iiii,"ax",@progbits
 1098              		.align 2
 1099              	.LCOLDB14:
 1100              		.section	.text._ZN2Fl11screen_xywhERiS0_S0_S0_iiii,"ax",@progbits
 1101              	.LHOTB14:
 1102              		.align 2
 1103              		.p2align 4,,15
 1104              		.globl	_ZN2Fl11screen_xywhERiS0_S0_S0_iiii
 1106              	_ZN2Fl11screen_xywhERiS0_S0_S0_iiii:
 1107              	.LFB314:
 1108              		.loc 1 371 0
 1109              		.cfi_startproc
 1110              	.LVL105:
 1111 0000 4155     		pushq	%r13
 1112              		.cfi_def_cfa_offset 16
 1113              		.cfi_offset 13, -16
 1114 0002 4154     		pushq	%r12
 1115              		.cfi_def_cfa_offset 24
 1116              		.cfi_offset 12, -24
 1117 0004 4989CD   		movq	%rcx, %r13
 1118 0007 55       		pushq	%rbp
 1119              		.cfi_def_cfa_offset 32
 1120              		.cfi_offset 6, -32
 1121 0008 53       		pushq	%rbx
 1122              		.cfi_def_cfa_offset 40
 1123              		.cfi_offset 3, -40
 1124 0009 4989D4   		movq	%rdx, %r12
 1125 000c 4889FB   		movq	%rdi, %rbx
 1126 000f 4889F5   		movq	%rsi, %rbp
 1127              		.loc 1 372 0
 1128 0012 4489C7   		movl	%r8d, %edi
 1129              	.LVL106:
 1130              		.loc 1 371 0
 1131 0015 4883EC08 		subq	$8, %rsp
 1132              		.cfi_def_cfa_offset 48
 1133              		.loc 1 372 0
 1134 0019 4489CE   		movl	%r9d, %esi
 1135              	.LVL107:
 1136 001c 8B4C2438 		movl	56(%rsp), %ecx
 1137              	.LVL108:
 1138 0020 8B542430 		movl	48(%rsp), %edx
 1139              	.LVL109:
 1140 0024 E8000000 		call	_ZN2Fl10screen_numEiiii
 1140      00
 1141              	.LVL110:
 1142              		.loc 1 373 0
 1143 0029 4883C408 		addq	$8, %rsp
 1144              		.cfi_def_cfa_offset 40
 1145              		.loc 1 372 0
 1146 002d 4C89E9   		movq	%r13, %rcx
 1147 0030 4C89E2   		movq	%r12, %rdx
 1148 0033 4889EE   		movq	%rbp, %rsi
 1149 0036 4889DF   		movq	%rbx, %rdi
 1150 0039 4189C0   		movl	%eax, %r8d
 1151              		.loc 1 373 0
 1152 003c 5B       		popq	%rbx
 1153              		.cfi_def_cfa_offset 32
 1154              	.LVL111:
 1155 003d 5D       		popq	%rbp
 1156              		.cfi_def_cfa_offset 24
 1157              	.LVL112:
 1158 003e 415C     		popq	%r12
 1159              		.cfi_def_cfa_offset 16
 1160              	.LVL113:
 1161 0040 415D     		popq	%r13
 1162              		.cfi_def_cfa_offset 8
 1163              	.LVL114:
 1164              		.loc 1 372 0
 1165 0042 E9000000 		jmp	_ZN2Fl11screen_xywhERiS0_S0_S0_i
 1165      00
 1166              	.LVL115:
 1167              		.cfi_endproc
 1168              	.LFE314:
 1170              		.section	.text.unlikely._ZN2Fl11screen_xywhERiS0_S0_S0_iiii
 1171              	.LCOLDE14:
 1172              		.section	.text._ZN2Fl11screen_xywhERiS0_S0_S0_iiii
 1173              	.LHOTE14:
 1174              		.section	.text.unlikely._ZN2Fl10screen_dpiERfS0_i,"ax",@progbits
 1175              		.align 2
 1176              	.LCOLDB15:
 1177              		.section	.text._ZN2Fl10screen_dpiERfS0_i,"ax",@progbits
 1178              	.LHOTB15:
 1179              		.align 2
 1180              		.p2align 4,,15
 1181              		.globl	_ZN2Fl10screen_dpiERfS0_i
 1183              	_ZN2Fl10screen_dpiERfS0_i:
 1184              	.LFB318:
 1185              		.loc 1 435 0
 1186              		.cfi_startproc
 1187              	.LVL116:
 1188 0000 4883EC28 		subq	$40, %rsp
 1189              		.cfi_def_cfa_offset 48
 1190              		.loc 1 436 0
 1191 0004 8B050000 		movl	_ZL11num_screens(%rip), %eax
 1191      0000
 1192 000a 85C0     		testl	%eax, %eax
 1193 000c 7842     		js	.L96
 1194              	.LVL117:
 1195              	.L93:
 1196              		.loc 1 450 0
 1197 000e 85D2     		testl	%edx, %edx
 1198              		.loc 1 437 0
 1199 0010 C7060000 		movl	$0x00000000, (%rsi)
 1199      0000
 1200 0016 C7070000 		movl	$0x00000000, (%rdi)
 1200      0000
 1201              		.loc 1 450 0
 1202 001c 7825     		js	.L92
 1203              		.loc 1 450 0 is_stmt 0 discriminator 1
 1204 001e 3B150000 		cmpl	_ZL11num_screens(%rip), %edx
 1204      0000
 1205 0024 7D1D     		jge	.L92
 1206              		.loc 1 451 0 is_stmt 1
 1207 0026 4863D2   		movslq	%edx, %rdx
 1208 0029 F30F1004 		movss	_ZL3dpi(,%rdx,8), %xmm0
 1208      D5000000 
 1208      00
 1209 0032 F30F1107 		movss	%xmm0, (%rdi)
 1210              		.loc 1 452 0
 1211 0036 F30F1004 		movss	_ZL3dpi+4(,%rdx,8), %xmm0
 1211      D5000000 
 1211      00
 1212 003f F30F1106 		movss	%xmm0, (%rsi)
 1213              	.L92:
 1214              		.loc 1 455 0
 1215 0043 4883C428 		addq	$40, %rsp
 1216              		.cfi_remember_state
 1217              		.cfi_def_cfa_offset 8
 1218 0047 C3       		ret
 1219              	.LVL118:
 1220 0048 0F1F8400 		.p2align 4,,10
 1220      00000000 
 1221              		.p2align 3
 1222              	.L96:
 1223              		.cfi_restore_state
 1224 0050 8954241C 		movl	%edx, 28(%rsp)
 1225 0054 48897424 		movq	%rsi, 16(%rsp)
 1225      10
 1226 0059 48897C24 		movq	%rdi, 8(%rsp)
 1226      08
 1227              		.loc 1 436 0 discriminator 1
 1228 005e E8000000 		call	_ZL11screen_initv
 1228      00
 1229              	.LVL119:
 1230 0063 8B54241C 		movl	28(%rsp), %edx
 1231 0067 488B7424 		movq	16(%rsp), %rsi
 1231      10
 1232 006c 488B7C24 		movq	8(%rsp), %rdi
 1232      08
 1233 0071 EB9B     		jmp	.L93
 1234              		.cfi_endproc
 1235              	.LFE318:
 1237              		.section	.text.unlikely._ZN2Fl10screen_dpiERfS0_i
 1238              	.LCOLDE15:
 1239              		.section	.text._ZN2Fl10screen_dpiERfS0_i
 1240              	.LHOTE15:
 1241              		.section	.bss._ZZL11screen_initvE10XRRSizes_f,"aw",@nobits
 1242              		.align 8
 1245              	_ZZL11screen_initvE10XRRSizes_f:
 1246 0000 00000000 		.zero	8
 1246      00000000 
 1247              		.section	.bss._ZL3dpi,"aw",@nobits
 1248              		.align 32
 1251              	_ZL3dpi:
 1252 0000 00000000 		.zero	128
 1252      00000000 
 1252      00000000 
 1252      00000000 
 1252      00000000 
 1253              		.section	.bss._ZL7screens,"aw",@nobits
 1254              		.align 32
 1257              	_ZL7screens:
 1258 0000 00000000 		.zero	128
 1258      00000000 
 1258      00000000 
 1258      00000000 
 1258      00000000 
 1259              		.section	.data._ZL11num_screens,"aw",@progbits
 1260              		.align 4
 1263              	_ZL11num_screens:
 1264 0000 FFFFFFFF 		.long	-1
 1265              		.section	.rodata.cst4,"aM",@progbits,4
 1266              		.align 4
 1267              	.LC4:
 1268 0000 3333CB41 		.long	1103835955
 1269              		.text
 1270              	.Letext0:
 1271              		.section	.text.unlikely._ZL11screen_initv
 1272              	.Letext_cold0:
 1273              		.file 2 "fltk-1.3.4-1/FL/fl_types.h"
 1274              		.file 3 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1275              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1276              		.file 5 "/usr/include/libio.h"
 1277              		.file 6 "fltk-1.3.4-1/FL/Enumerations.H"
 1278              		.file 7 "fltk-1.3.4-1/FL/Fl.H"
 1279              		.file 8 "fltk-1.3.4-1/FL/Fl_Widget.H"
 1280              		.file 9 "fltk-1.3.4-1/FL/Fl_Image.H"
 1281              		.file 10 "/usr/include/X11/X.h"
 1282              		.file 11 "/usr/include/X11/Xlib.h"
 1283              		.file 12 "/usr/include/stdio.h"
 1284              		.file 13 "fltk-1.3.4-1/FL/x.H"
 1285              		.file 14 "/usr/include/dlfcn.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 screen_xywh.cxx
     /tmp/ccdclS1z.s:20     .text._ZL11screen_initv:0000000000000000 _ZL11screen_initv
     /tmp/ccdclS1z.s:1245   .bss._ZZL11screen_initvE10XRRSizes_f:0000000000000000 _ZZL11screen_initvE10XRRSizes_f
     /tmp/ccdclS1z.s:1263   .data._ZL11num_screens:0000000000000000 _ZL11num_screens
     /tmp/ccdclS1z.s:1257   .bss._ZL7screens:0000000000000000 _ZL7screens
     /tmp/ccdclS1z.s:1251   .bss._ZL3dpi:0000000000000000 _ZL3dpi
     /tmp/ccdclS1z.s:349    .text._ZN2Fl16call_screen_initEv:0000000000000000 _ZN2Fl16call_screen_initEv
     /tmp/ccdclS1z.s:372    .text._ZN2Fl12screen_countEv:0000000000000000 _ZN2Fl12screen_countEv
     /tmp/ccdclS1z.s:420    .text._ZN2Fl11screen_xywhERiS0_S0_S0_i:0000000000000000 _ZN2Fl11screen_xywhERiS0_S0_S0_i
     /tmp/ccdclS1z.s:508    .text._ZN2Fl16screen_work_areaERiS0_S0_S0_i:0000000000000000 _ZN2Fl16screen_work_areaERiS0_S0_S0_i
     /tmp/ccdclS1z.s:605    .text._ZN2Fl10screen_numEii:0000000000000000 _ZN2Fl10screen_numEii
     /tmp/ccdclS1z.s:737    .text._ZN2Fl11screen_xywhERiS0_S0_S0_ii:0000000000000000 _ZN2Fl11screen_xywhERiS0_S0_S0_ii
     /tmp/ccdclS1z.s:811    .text._ZN2Fl16screen_work_areaERiS0_S0_S0_ii:0000000000000000 _ZN2Fl16screen_work_areaERiS0_S0_S0_ii
     /tmp/ccdclS1z.s:885    .text._ZN2Fl10screen_numEiiii:0000000000000000 _ZN2Fl10screen_numEiiii
     /tmp/ccdclS1z.s:1106   .text._ZN2Fl11screen_xywhERiS0_S0_S0_iiii:0000000000000000 _ZN2Fl11screen_xywhERiS0_S0_S0_iiii
     /tmp/ccdclS1z.s:1183   .text._ZN2Fl10screen_dpiERfS0_i:0000000000000000 _ZN2Fl10screen_dpiERfS0_i
     /tmp/ccdclS1z.s:1267   .rodata.cst4:0000000000000000 .LC4
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.dlfcn.h.20.70e9223255b7b53a5ba856b40ed79b32
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.dlfcn.h.24.984956b0eb0dd4fdbcd569f884773ee1
                           .group:0000000000000000 wm4.dlfcn.h.35.17a2f29a976970d03ce2b8cd0ee5815b

UNDEFINED SYMBOLS
fl_display
fl_screen
dlopen
dlsym
_Z15fl_open_displayv
__stack_chk_fail
_ZN2Fl1xEv
_ZN2Fl1yEv
_ZN2Fl1wEv
_ZN2Fl1hEv
