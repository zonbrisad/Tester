   1              		.file	"freeglut_teapot.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL9fghTeapotidj,"ax",@progbits
   5              	.LCOLDB7:
   6              		.section	.text._ZL9fghTeapotidj,"ax",@progbits
   7              	.LHOTB7:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL9fghTeapotidj
  10              	.Ltext_cold0:
  11              		.section	.text._ZL9fghTeapotidj
  13              	_ZL9fghTeapotidj:
  14              	.LFB372:
  15              		.file 1 "fltk-1.3.4-1/src/freeglut_teapot.cxx"
   1:fltk-1.3.4-1/src/freeglut_teapot.cxx **** ...
  16              		.loc 1 82 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 4157     		pushq	%r15
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 15, -16
  22 0002 4156     		pushq	%r14
  23              		.cfi_def_cfa_offset 24
  24              		.cfi_offset 14, -24
  25 0004 4155     		pushq	%r13
  26              		.cfi_def_cfa_offset 32
  27              		.cfi_offset 13, -32
  28 0006 4154     		pushq	%r12
  29              		.cfi_def_cfa_offset 40
  30              		.cfi_offset 12, -40
  31 0008 55       		pushq	%rbp
  32              		.cfi_def_cfa_offset 48
  33              		.cfi_offset 6, -48
  34 0009 53       		pushq	%rbx
  35              		.cfi_def_cfa_offset 56
  36              		.cfi_offset 3, -56
  37              		.loc 1 97 0
  38 000a 31DB     		xorl	%ebx, %ebx
  39              		.loc 1 82 0
  40 000c 4881EC28 		subq	$1576, %rsp
  40      060000
  41              		.cfi_def_cfa_offset 1632
  42              		.loc 1 82 0
  43 0013 897C2408 		movl	%edi, 8(%rsp)
  44              		.loc 1 86 0
  45 0017 BF002001 		movl	$73728, %edi
  45      00
  46              	.LVL1:
  47              		.loc 1 82 0
  48 001c 8974240C 		movl	%esi, 12(%rsp)
  49 0020 64488B04 		movq	%fs:40, %rax
  49      25280000 
  49      00
  50 0029 48898424 		movq	%rax, 1560(%rsp)
  50      18060000 
  51 0031 31C0     		xorl	%eax, %eax
  52 0033 F20F1104 		movsd	%xmm0, (%rsp)
  52      24
  53              		.loc 1 86 0
  54 0038 E8000000 		call	glPushAttrib
  54      00
  55              	.LVL2:
  56              		.loc 1 87 0
  57 003d BF800D00 		movl	$3456, %edi
  57      00
  58 0042 E8000000 		call	glEnable
  58      00
  59              	.LVL3:
  60              		.loc 1 88 0
  61 0047 BFA10B00 		movl	$2977, %edi
  61      00
  62 004c E8000000 		call	glEnable
  62      00
  63              	.LVL4:
  64              		.loc 1 89 0
  65 0051 BFB70D00 		movl	$3511, %edi
  65      00
  66 0056 E8000000 		call	glEnable
  66      00
  67              	.LVL5:
  68              		.loc 1 90 0
  69 005b BFB40D00 		movl	$3508, %edi
  69      00
  70 0060 E8000000 		call	glEnable
  70      00
  71              	.LVL6:
  72              		.loc 1 92 0
  73 0065 E8000000 		call	glPushMatrix
  73      00
  74              	.LVL7:
  75              		.loc 1 93 0
  76 006a 660FEFDB 		pxor	%xmm3, %xmm3
  77 006e F20F100D 		movsd	.LC3(%rip), %xmm1
  77      00000000 
  78 0076 F20F1005 		movsd	.LC2(%rip), %xmm0
  78      00000000 
  79 007e 660F28D3 		movapd	%xmm3, %xmm2
  80 0082 E8000000 		call	glRotated
  80      00
  81              	.LVL8:
  82              		.loc 1 94 0
  83 0087 F20F1024 		movsd	(%rsp), %xmm4
  83      24
  84 008c F20F5925 		mulsd	.LC4(%rip), %xmm4
  84      00000000 
  85 0094 660F28C4 		movapd	%xmm4, %xmm0
  86 0098 660F28D4 		movapd	%xmm4, %xmm2
  87 009c 660F28CC 		movapd	%xmm4, %xmm1
  88 00a0 E8000000 		call	glScaled
  88      00
  89              	.LVL9:
  90              		.loc 1 95 0
  91 00a5 660FEFC9 		pxor	%xmm1, %xmm1
  92 00a9 F20F1015 		movsd	.LC5(%rip), %xmm2
  92      00000000 
  93 00b1 660F28C1 		movapd	%xmm1, %xmm0
  94 00b5 E8000000 		call	glTranslated
  94      00
  95              	.LVL10:
  96 00ba 660FEFC9 		pxor	%xmm1, %xmm1
  97 00be 48C70424 		movq	$_ZL9patchdata, (%rsp)
  97      00000000 
  98              	.LVL11:
  99 00c6 F20F1005 		movsd	.LC1(%rip), %xmm0
  99      00000000 
 100 00ce 41B86900 		movl	$105, %r8d
 100      0000
 101 00d4 BF660000 		movl	$102, %edi
 101      00
 102              	.LVL12:
 103 00d9 0F1F8000 		.p2align 4,,10
 103      000000
 104              		.p2align 3
 105              	.L16:
 106              		.loc 1 97 0
 107 00e0 4C8B3C24 		movq	(%rsp), %r15
 108 00e4 4531F6   		xorl	%r14d, %r14d
 109              	.LVL13:
 110              	.L13:
 111 00e7 488D8424 		leaq	400(%rsp), %rax
 111      90010000 
 112 00ef 4D89FA   		movq	%r15, %r10
 113 00f2 4D89F9   		movq	%r15, %r9
 114 00f5 31ED     		xorl	%ebp, %ebp
 115 00f7 4A8D3430 		leaq	(%rax,%r14), %rsi
 116 00fb 488D8424 		leaq	1168(%rsp), %rax
 116      90040000 
 117 0103 4E8D1C30 		leaq	(%rax,%r14), %r11
 118 0107 488D8424 		leaq	784(%rsp), %rax
 118      10030000 
 119 010f 4E8D2430 		leaq	(%rax,%r14), %r12
 120              	.LVL14:
 121              	.L11:
 122 0113 498D0C2E 		leaq	(%r14,%rbp), %rcx
 123              		.loc 1 101 0
 124 0117 4C8D6C24 		leaq	16(%rsp), %r13
 124      10
 125              		.loc 1 97 0
 126 011c 31C0     		xorl	%eax, %eax
 127 011e 4C89E2   		movq	%r12, %rdx
 128              		.loc 1 102 0
 129 0121 F20F110C 		movsd	%xmm1, (%rsi,%rax,8)
 129      C6
 130              		.loc 1 101 0
 131 0126 4C01E9   		addq	%r13, %rcx
 132              	.LVL15:
 133              		.loc 1 103 0
 134 0129 4883F801 		cmpq	$1, %rax
 135              		.loc 1 101 0
 136 012d F20F1104 		movsd	%xmm0, (%rcx,%rax,8)
 136      C1
 137              		.loc 1 103 0
 138 0132 746C     		je	.L22
 139              	.L3:
 140              		.loc 1 105 0
 141 0134 4883FB05 		cmpq	$5, %rbx
 142 0138 7F13     		jg	.L5
 143              		.loc 1 108 0
 144 013a 4885C0   		testq	%rax, %rax
 145              		.loc 1 107 0
 146 013d F20F110A 		movsd	%xmm1, (%rdx)
 147              		.loc 1 108 0
 148 0141 0F843403 		je	.L23
 148      0000
 149              		.loc 1 110 0
 150 0147 F2410F11 		movsd	%xmm0, (%r11,%rax,8)
 150      04C3
 151              	.L5:
 152 014d 4883C001 		addq	$1, %rax
 153              	.LVL16:
 154              		.loc 1 100 0
 155 0151 4883F803 		cmpq	$3, %rax
 156 0155 0F848500 		je	.L8
 156      0000
 157 015b 418B39   		movl	(%r9), %edi
 158 015e 458B420C 		movl	12(%r10), %r8d
 159              	.L9:
 160 0162 4C63EF   		movslq	%edi, %r13
 161 0165 4883C208 		addq	$8, %rdx
 162 0169 4F8D6C6D 		leaq	0(%r13,%r13,2), %r13
 162      00
 163 016e 4901C5   		addq	%rax, %r13
 164 0171 F2420F10 		movsd	_ZL6cpdata(,%r13,8), %xmm0
 164      04ED0000 
 164      0000
 165 017b 4D63E8   		movslq	%r8d, %r13
 166 017e 4F8D6C6D 		leaq	0(%r13,%r13,2), %r13
 166      00
 167              		.loc 1 101 0
 168 0183 F20F1104 		movsd	%xmm0, (%rcx,%rax,8)
 168      C1
 169 0188 4901C5   		addq	%rax, %r13
 170              		.loc 1 103 0
 171 018b 4883F801 		cmpq	$1, %rax
 172 018f F2420F10 		movsd	_ZL6cpdata(,%r13,8), %xmm1
 172      0CED0000 
 172      0000
 173              		.loc 1 102 0
 174 0199 F20F110C 		movsd	%xmm1, (%rsi,%rax,8)
 174      C6
 175              		.loc 1 103 0
 176 019e 7594     		jne	.L3
 177              	.L22:
 178              		.loc 1 104 0
 179 01a0 660F28D1 		movapd	%xmm1, %xmm2
 180              		.loc 1 105 0
 181 01a4 4883FB05 		cmpq	$5, %rbx
 182              		.loc 1 104 0
 183 01a8 660F5715 		xorpd	.LC6(%rip), %xmm2
 183      00000000 
 184 01b0 F20F1156 		movsd	%xmm2, 8(%rsi)
 184      08
 185              		.loc 1 105 0
 186 01b5 7F96     		jg	.L5
 187              		.loc 1 114 0
 188 01b7 660F5705 		xorpd	.LC6(%rip), %xmm0
 188      00000000 
 189              		.loc 1 107 0
 190 01bf F20F110A 		movsd	%xmm1, (%rdx)
 191 01c3 418B39   		movl	(%r9), %edi
 192 01c6 458B420C 		movl	12(%r10), %r8d
 193              		.loc 1 114 0
 194 01ca F2410F11 		movsd	%xmm0, 8(%r11)
 194      4308
 195              	.L7:
 196 01d0 4883C001 		addq	$1, %rax
 197              	.LVL17:
 198 01d4 EB8C     		jmp	.L9
 199 01d6 662E0F1F 		.p2align 4,,10
 199      84000000 
 199      0000
 200              		.p2align 3
 201              	.L8:
 202 01e0 4883C518 		addq	$24, %rbp
 203 01e4 4983C104 		addq	$4, %r9
 204 01e8 4983EA04 		subq	$4, %r10
 205 01ec 4883C618 		addq	$24, %rsi
 206 01f0 4983C318 		addq	$24, %r11
 207 01f4 4983C418 		addq	$24, %r12
 208              		.loc 1 99 0 discriminator 2
 209 01f8 4883FD60 		cmpq	$96, %rbp
 210 01fc 7432     		je	.L10
 211 01fe 496301   		movslq	(%r9), %rax
 212              	.LVL18:
 213 0201 4889C7   		movq	%rax, %rdi
 214 0204 488D0440 		leaq	(%rax,%rax,2), %rax
 215 0208 F20F1004 		movsd	_ZL6cpdata(,%rax,8), %xmm0
 215      C5000000 
 215      00
 216 0211 4963420C 		movslq	12(%r10), %rax
 217 0215 4989C0   		movq	%rax, %r8
 218 0218 488D0440 		leaq	(%rax,%rax,2), %rax
 219 021c F20F100C 		movsd	_ZL6cpdata(,%rax,8), %xmm1
 219      C5000000 
 219      00
 220 0225 E9E9FEFF 		jmp	.L11
 220      FF
 221              	.LVL19:
 222 022a 660F1F44 		.p2align 4,,10
 222      0000
 223              		.p2align 3
 224              	.L10:
 225 0230 4983C710 		addq	$16, %r15
 226              		.loc 1 98 0 discriminator 2
 227 0234 4981FE20 		cmpq	$288, %r14
 227      010000
 228 023b 7433     		je	.L12
 229 023d 496307   		movslq	(%r15), %rax
 230              	.LVL20:
 231 0240 4983C660 		addq	$96, %r14
 232 0244 4889C7   		movq	%rax, %rdi
 233 0247 488D0440 		leaq	(%rax,%rax,2), %rax
 234 024b F20F1004 		movsd	_ZL6cpdata(,%rax,8), %xmm0
 234      C5000000 
 234      00
 235 0254 4963470C 		movslq	12(%r15), %rax
 236 0258 4989C0   		movq	%rax, %r8
 237 025b 488D0440 		leaq	(%rax,%rax,2), %rax
 238 025f F20F100C 		movsd	_ZL6cpdata(,%rax,8), %xmm1
 238      C5000000 
 238      00
 239 0268 E97AFEFF 		jmp	.L13
 239      FF
 240              	.LVL21:
 241 026d 0F1F00   		.p2align 4,,10
 242              		.p2align 3
 243              	.L12:
 244              		.loc 1 121 0
 245 0270 660FEFD2 		pxor	%xmm2, %xmm2
 246 0274 41B90000 		movl	$_ZL3tex, %r9d
 246      0000
 247 027a F20F101D 		movsd	.LC3(%rip), %xmm3
 247      00000000 
 248 0282 41B80200 		movl	$2, %r8d
 248      0000
 249 0288 B9040000 		movl	$4, %ecx
 249      00
 250 028d BA020000 		movl	$2, %edx
 250      00
 251 0292 BE020000 		movl	$2, %esi
 251      00
 252 0297 660F28CB 		movapd	%xmm3, %xmm1
 253 029b BFB40D00 		movl	$3508, %edi
 253      00
 254 02a0 660F28C2 		movapd	%xmm2, %xmm0
 255 02a4 E8000000 		call	glMap2d
 255      00
 256              	.LVL22:
 257              		.loc 1 123 0
 258 02a9 660FEFD2 		pxor	%xmm2, %xmm2
 259 02ad 4C8D4C24 		leaq	16(%rsp), %r9
 259      10
 260 02b2 F20F101D 		movsd	.LC3(%rip), %xmm3
 260      00000000 
 261 02ba 41B80400 		movl	$4, %r8d
 261      0000
 262 02c0 B90C0000 		movl	$12, %ecx
 262      00
 263 02c5 BA040000 		movl	$4, %edx
 263      00
 264 02ca BE030000 		movl	$3, %esi
 264      00
 265 02cf 660F28CB 		movapd	%xmm3, %xmm1
 266 02d3 BFB70D00 		movl	$3511, %edi
 266      00
 267 02d8 660F28C2 		movapd	%xmm2, %xmm0
 268 02dc E8000000 		call	glMap2d
 268      00
 269              	.LVL23:
 270              		.loc 1 124 0
 271 02e1 660FEFD2 		pxor	%xmm2, %xmm2
 272 02e5 448B7C24 		movl	8(%rsp), %r15d
 272      08
 273 02ea F20F101D 		movsd	.LC3(%rip), %xmm3
 273      00000000 
 274 02f2 660F28C2 		movapd	%xmm2, %xmm0
 275 02f6 4489FE   		movl	%r15d, %esi
 276 02f9 660F28CB 		movapd	%xmm3, %xmm1
 277 02fd 4489FF   		movl	%r15d, %edi
 278 0300 E8000000 		call	glMapGrid2d
 278      00
 279              	.LVL24:
 280              		.loc 1 125 0
 281 0305 448B7424 		movl	12(%rsp), %r14d
 281      0C
 282 030a 31C9     		xorl	%ecx, %ecx
 283 030c 31F6     		xorl	%esi, %esi
 284 030e 4589F8   		movl	%r15d, %r8d
 285 0311 4489FA   		movl	%r15d, %edx
 286 0314 4489F7   		movl	%r14d, %edi
 287 0317 E8000000 		call	glEvalMesh2
 287      00
 288              	.LVL25:
 289              		.loc 1 127 0
 290 031c 660FEFD2 		pxor	%xmm2, %xmm2
 291 0320 4C8D8C24 		leaq	400(%rsp), %r9
 291      90010000 
 292 0328 F20F101D 		movsd	.LC3(%rip), %xmm3
 292      00000000 
 293 0330 41B80400 		movl	$4, %r8d
 293      0000
 294 0336 B90C0000 		movl	$12, %ecx
 294      00
 295 033b BA040000 		movl	$4, %edx
 295      00
 296 0340 BE030000 		movl	$3, %esi
 296      00
 297 0345 660F28CB 		movapd	%xmm3, %xmm1
 298 0349 BFB70D00 		movl	$3511, %edi
 298      00
 299 034e 660F28C2 		movapd	%xmm2, %xmm0
 300 0352 E8000000 		call	glMap2d
 300      00
 301              	.LVL26:
 302              		.loc 1 128 0
 303 0357 31C9     		xorl	%ecx, %ecx
 304 0359 31F6     		xorl	%esi, %esi
 305 035b 4589F8   		movl	%r15d, %r8d
 306 035e 4489FA   		movl	%r15d, %edx
 307 0361 4489F7   		movl	%r14d, %edi
 308 0364 E8000000 		call	glEvalMesh2
 308      00
 309              	.LVL27:
 310              		.loc 1 129 0
 311 0369 4883FB05 		cmpq	$5, %rbx
 312 036d 0F8F9A00 		jg	.L14
 312      0000
 313              		.loc 1 131 0
 314 0373 660FEFD2 		pxor	%xmm2, %xmm2
 315 0377 4C8D8C24 		leaq	784(%rsp), %r9
 315      10030000 
 316 037f 41B80400 		movl	$4, %r8d
 316      0000
 317 0385 F20F101D 		movsd	.LC3(%rip), %xmm3
 317      00000000 
 318 038d B90C0000 		movl	$12, %ecx
 318      00
 319 0392 BA040000 		movl	$4, %edx
 319      00
 320 0397 BE030000 		movl	$3, %esi
 320      00
 321 039c BFB70D00 		movl	$3511, %edi
 321      00
 322 03a1 660F28CB 		movapd	%xmm3, %xmm1
 323 03a5 660F28C2 		movapd	%xmm2, %xmm0
 324 03a9 E8000000 		call	glMap2d
 324      00
 325              	.LVL28:
 326              		.loc 1 132 0
 327 03ae 4589F8   		movl	%r15d, %r8d
 328 03b1 31C9     		xorl	%ecx, %ecx
 329 03b3 4489FA   		movl	%r15d, %edx
 330 03b6 31F6     		xorl	%esi, %esi
 331 03b8 4489F7   		movl	%r14d, %edi
 332 03bb E8000000 		call	glEvalMesh2
 332      00
 333              	.LVL29:
 334              		.loc 1 134 0
 335 03c0 660FEFD2 		pxor	%xmm2, %xmm2
 336 03c4 4C8D8C24 		leaq	1168(%rsp), %r9
 336      90040000 
 337 03cc F20F101D 		movsd	.LC3(%rip), %xmm3
 337      00000000 
 338 03d4 41B80400 		movl	$4, %r8d
 338      0000
 339 03da B90C0000 		movl	$12, %ecx
 339      00
 340 03df BA040000 		movl	$4, %edx
 340      00
 341 03e4 BE030000 		movl	$3, %esi
 341      00
 342 03e9 660F28CB 		movapd	%xmm3, %xmm1
 343 03ed BFB70D00 		movl	$3511, %edi
 343      00
 344 03f2 660F28C2 		movapd	%xmm2, %xmm0
 345 03f6 E8000000 		call	glMap2d
 345      00
 346              	.LVL30:
 347              		.loc 1 135 0
 348 03fb 4589F8   		movl	%r15d, %r8d
 349 03fe 31C9     		xorl	%ecx, %ecx
 350 0400 4489FA   		movl	%r15d, %edx
 351 0403 31F6     		xorl	%esi, %esi
 352 0405 4489F7   		movl	%r14d, %edi
 353 0408 E8000000 		call	glEvalMesh2
 353      00
 354              	.LVL31:
 355              	.L14:
 356              		.loc 1 97 0 discriminator 2
 357 040d 4883C301 		addq	$1, %rbx
 358              	.LVL32:
 359 0411 48830424 		addq	$64, (%rsp)
 359      40
 360 0416 4883FB0A 		cmpq	$10, %rbx
 361 041a 488B1424 		movq	(%rsp), %rdx
 362 041e 742C     		je	.L15
 363 0420 486302   		movslq	(%rdx), %rax
 364 0423 4889C7   		movq	%rax, %rdi
 365 0426 488D0440 		leaq	(%rax,%rax,2), %rax
 366 042a F20F1004 		movsd	_ZL6cpdata(,%rax,8), %xmm0
 366      C5000000 
 366      00
 367 0433 4863420C 		movslq	12(%rdx), %rax
 368 0437 4989C0   		movq	%rax, %r8
 369 043a 488D0440 		leaq	(%rax,%rax,2), %rax
 370 043e F20F100C 		movsd	_ZL6cpdata(,%rax,8), %xmm1
 370      C5000000 
 370      00
 371 0447 E994FCFF 		jmp	.L16
 371      FF
 372              	.L15:
 373              		.loc 1 139 0
 374 044c E8000000 		call	glPopMatrix
 374      00
 375              	.LVL33:
 376              		.loc 1 140 0
 377 0451 E8000000 		call	glPopAttrib
 377      00
 378              	.LVL34:
 379              		.loc 1 141 0
 380 0456 488B8424 		movq	1560(%rsp), %rax
 380      18060000 
 381 045e 64483304 		xorq	%fs:40, %rax
 381      25280000 
 381      00
 382 0467 7532     		jne	.L24
 383 0469 4881C428 		addq	$1576, %rsp
 383      060000
 384              		.cfi_remember_state
 385              		.cfi_def_cfa_offset 56
 386 0470 5B       		popq	%rbx
 387              		.cfi_def_cfa_offset 48
 388              	.LVL35:
 389 0471 5D       		popq	%rbp
 390              		.cfi_def_cfa_offset 40
 391 0472 415C     		popq	%r12
 392              		.cfi_def_cfa_offset 32
 393 0474 415D     		popq	%r13
 394              		.cfi_def_cfa_offset 24
 395 0476 415E     		popq	%r14
 396              		.cfi_def_cfa_offset 16
 397 0478 415F     		popq	%r15
 398              		.cfi_def_cfa_offset 8
 399 047a C3       		ret
 400              	.LVL36:
 401              	.L23:
 402              		.cfi_restore_state
 403              		.loc 1 109 0
 404 047b 660F570D 		xorpd	.LC6(%rip), %xmm1
 404      00000000 
 405              		.loc 1 112 0
 406 0483 660F5705 		xorpd	.LC6(%rip), %xmm0
 406      00000000 
 407              		.loc 1 109 0
 408 048b F2410F11 		movsd	%xmm1, (%r12)
 408      0C24
 409              		.loc 1 112 0
 410 0491 F2410F11 		movsd	%xmm0, (%r11)
 410      03
 411 0496 E935FDFF 		jmp	.L7
 411      FF
 412              	.LVL37:
 413              	.L24:
 414              		.loc 1 141 0
 415 049b E8000000 		call	__stack_chk_fail
 415      00
 416              	.LVL38:
 417              		.cfi_endproc
 418              	.LFE372:
 420              		.section	.text.unlikely._ZL9fghTeapotidj
 421              	.LCOLDE7:
 422              		.section	.text._ZL9fghTeapotidj
 423              	.LHOTE7:
 424              		.section	.text.unlikely._Z14glutWireTeapotd,"ax",@progbits
 425              	.LCOLDB8:
 426              		.section	.text._Z14glutWireTeapotd,"ax",@progbits
 427              	.LHOTB8:
 428              		.p2align 4,,15
 429              		.globl	_Z14glutWireTeapotd
 431              	_Z14glutWireTeapotd:
 432              	.LFB373:
 433              		.loc 1 150 0
 434              		.cfi_startproc
 435              	.LVL39:
 436              		.loc 1 152 0
 437 0000 BE011B00 		movl	$6913, %esi
 437      00
 438 0005 BF0A0000 		movl	$10, %edi
 438      00
 439 000a E9000000 		jmp	_ZL9fghTeapotidj
 439      00
 440              	.LVL40:
 441              		.cfi_endproc
 442              	.LFE373:
 444              		.section	.text.unlikely._Z14glutWireTeapotd
 445              	.LCOLDE8:
 446              		.section	.text._Z14glutWireTeapotd
 447              	.LHOTE8:
 448              		.section	.text.unlikely._Z15glutSolidTeapotd,"ax",@progbits
 449              	.LCOLDB9:
 450              		.section	.text._Z15glutSolidTeapotd,"ax",@progbits
 451              	.LHOTB9:
 452              		.p2align 4,,15
 453              		.globl	_Z15glutSolidTeapotd
 455              	_Z15glutSolidTeapotd:
 456              	.LFB374:
 457              		.loc 1 159 0
 458              		.cfi_startproc
 459              	.LVL41:
 460              		.loc 1 161 0
 461 0000 BE021B00 		movl	$6914, %esi
 461      00
 462 0005 BF070000 		movl	$7, %edi
 462      00
 463 000a E9000000 		jmp	_ZL9fghTeapotidj
 463      00
 464              	.LVL42:
 465              		.cfi_endproc
 466              	.LFE374:
 468              		.section	.text.unlikely._Z15glutSolidTeapotd
 469              	.LCOLDE9:
 470              		.section	.text._Z15glutSolidTeapotd
 471              	.LHOTE9:
 472              		.section	.data._ZL3tex,"aw",@progbits
 473              		.align 32
 476              	_ZL3tex:
 477 0000 00000000 		.long	0
 478 0004 00000000 		.long	0
 479 0008 00000000 		.long	0
 480 000c 00000000 		.long	0
 481 0010 00000000 		.long	0
 482 0014 0000F03F 		.long	1072693248
 483 0018 00000000 		.long	0
 484 001c 00000000 		.long	0
 485 0020 00000000 		.long	0
 486 0024 00000000 		.long	0
 487 0028 00000000 		.long	0
 488 002c 0000F03F 		.long	1072693248
 489 0030 00000000 		.long	0
 490 0034 0000F03F 		.long	1072693248
 491 0038 00000000 		.long	0
 492 003c 0000F03F 		.long	1072693248
 493              		.section	.rodata._ZL6cpdata,"a",@progbits
 494              		.align 32
 497              	_ZL6cpdata:
 498 0000 9A999999 		.long	2576980378
 499 0004 9999C93F 		.long	1070176665
 500 0008 00000000 		.long	0
 501 000c 00000000 		.long	0
 502 0010 9A999999 		.long	2576980378
 503 0014 99990540 		.long	1074108825
 504 0018 9A999999 		.long	2576980378
 505 001c 9999C93F 		.long	1070176665
 506 0020 79E92631 		.long	824633721
 507 0024 08ACBCBF 		.long	-1078154232
 508 0028 9A999999 		.long	2576980378
 509 002c 99990540 		.long	1074108825
 510 0030 79E92631 		.long	824633721
 511 0034 08ACBC3F 		.long	1069329416
 512 0038 9A999999 		.long	2576980378
 513 003c 9999C9BF 		.long	-1077306983
 514 0040 9A999999 		.long	2576980378
 515 0044 99990540 		.long	1074108825
 516 0048 00000000 		.long	0
 517 004c 00000000 		.long	0
 518 0050 9A999999 		.long	2576980378
 519 0054 9999C9BF 		.long	-1077306983
 520 0058 9A999999 		.long	2576980378
 521 005c 99990540 		.long	1074108825
 522 0060 66666666 		.long	1717986918
 523 0064 6666F53F 		.long	1073047142
 524 0068 00000000 		.long	0
 525 006c 00000000 		.long	0
 526 0070 00000000 		.long	0
 527 0074 00400440 		.long	1074020352
 528 0078 66666666 		.long	1717986918
 529 007c 6666F53F 		.long	1073047142
 530 0080 2B8716D9 		.long	3642132267
 531 0084 CEF7E7BF 		.long	-1075316786
 532 0088 00000000 		.long	0
 533 008c 00400440 		.long	1074020352
 534 0090 2B8716D9 		.long	3642132267
 535 0094 CEF7E73F 		.long	1072166862
 536 0098 66666666 		.long	1717986918
 537 009c 6666F5BF 		.long	-1074436506
 538 00a0 00000000 		.long	0
 539 00a4 00400440 		.long	1074020352
 540 00a8 00000000 		.long	0
 541 00ac 00000000 		.long	0
 542 00b0 66666666 		.long	1717986918
 543 00b4 6666F5BF 		.long	-1074436506
 544 00b8 00000000 		.long	0
 545 00bc 00400440 		.long	1074020352
 546 00c0 00000000 		.long	0
 547 00c4 0000F73F 		.long	1073152000
 548 00c8 00000000 		.long	0
 549 00cc 00000000 		.long	0
 550 00d0 00000000 		.long	0
 551 00d4 00400440 		.long	1074020352
 552 00d8 00000000 		.long	0
 553 00dc 0000F73F 		.long	1073152000
 554 00e0 C3F5285C 		.long	1546188227
 555 00e4 8FC2E9BF 		.long	-1075199345
 556 00e8 00000000 		.long	0
 557 00ec 00400440 		.long	1074020352
 558 00f0 C3F5285C 		.long	1546188227
 559 00f4 8FC2E93F 		.long	1072284303
 560 00f8 00000000 		.long	0
 561 00fc 0000F7BF 		.long	-1074331648
 562 0100 00000000 		.long	0
 563 0104 00400440 		.long	1074020352
 564 0108 00000000 		.long	0
 565 010c 00000000 		.long	0
 566 0110 00000000 		.long	0
 567 0114 0000F7BF 		.long	-1074331648
 568 0118 00000000 		.long	0
 569 011c 00400440 		.long	1074020352
 570 0120 00000000 		.long	0
 571 0124 0000F83F 		.long	1073217536
 572 0128 00000000 		.long	0
 573 012c 00000000 		.long	0
 574 0130 33333333 		.long	858993459
 575 0134 33330340 		.long	1073951539
 576 0138 00000000 		.long	0
 577 013c 0000F83F 		.long	1073217536
 578 0140 E17A14AE 		.long	2920577761
 579 0144 47E1EABF 		.long	-1075125945
 580 0148 33333333 		.long	858993459
 581 014c 33330340 		.long	1073951539
 582 0150 E17A14AE 		.long	2920577761
 583 0154 47E1EA3F 		.long	1072357703
 584 0158 00000000 		.long	0
 585 015c 0000F8BF 		.long	-1074266112
 586 0160 33333333 		.long	858993459
 587 0164 33330340 		.long	1073951539
 588 0168 00000000 		.long	0
 589 016c 00000000 		.long	0
 590 0170 00000000 		.long	0
 591 0174 0000F8BF 		.long	-1074266112
 592 0178 33333333 		.long	858993459
 593 017c 33330340 		.long	1073951539
 594 0180 00000000 		.long	0
 595 0184 0000FC3F 		.long	1073479680
 596 0188 00000000 		.long	0
 597 018c 00000000 		.long	0
 598 0190 00000000 		.long	0
 599 0194 0000FE3F 		.long	1073610752
 600 0198 00000000 		.long	0
 601 019c 0000FC3F 		.long	1073479680
 602 01a0 5C8FC2F5 		.long	4123168604
 603 01a4 285CEFBF 		.long	-1074832344
 604 01a8 00000000 		.long	0
 605 01ac 0000FE3F 		.long	1073610752
 606 01b0 5C8FC2F5 		.long	4123168604
 607 01b4 285CEF3F 		.long	1072651304
 608 01b8 00000000 		.long	0
 609 01bc 0000FCBF 		.long	-1074003968
 610 01c0 00000000 		.long	0
 611 01c4 0000FE3F 		.long	1073610752
 612 01c8 00000000 		.long	0
 613 01cc 00000000 		.long	0
 614 01d0 00000000 		.long	0
 615 01d4 0000FCBF 		.long	-1074003968
 616 01d8 00000000 		.long	0
 617 01dc 0000FE3F 		.long	1073610752
 618 01e0 00000000 		.long	0
 619 01e4 00000040 		.long	1073741824
 620 01e8 00000000 		.long	0
 621 01ec 00000000 		.long	0
 622 01f0 9A999999 		.long	2576980378
 623 01f4 9999F53F 		.long	1073060249
 624 01f8 00000000 		.long	0
 625 01fc 00000040 		.long	1073741824
 626 0200 EC51B81E 		.long	515396076
 627 0204 85EBF1BF 		.long	-1074664571
 628 0208 9A999999 		.long	2576980378
 629 020c 9999F53F 		.long	1073060249
 630 0210 EC51B81E 		.long	515396076
 631 0214 85EBF13F 		.long	1072819077
 632 0218 00000000 		.long	0
 633 021c 000000C0 		.long	-1073741824
 634 0220 9A999999 		.long	2576980378
 635 0224 9999F53F 		.long	1073060249
 636 0228 00000000 		.long	0
 637 022c 00000000 		.long	0
 638 0230 00000000 		.long	0
 639 0234 000000C0 		.long	-1073741824
 640 0238 9A999999 		.long	2576980378
 641 023c 9999F53F 		.long	1073060249
 642 0240 00000000 		.long	0
 643 0244 00000040 		.long	1073741824
 644 0248 00000000 		.long	0
 645 024c 00000000 		.long	0
 646 0250 CDCCCCCC 		.long	3435973837
 647 0254 CCCCEC3F 		.long	1072483532
 648 0258 00000000 		.long	0
 649 025c 00000040 		.long	1073741824
 650 0260 EC51B81E 		.long	515396076
 651 0264 85EBF1BF 		.long	-1074664571
 652 0268 CDCCCCCC 		.long	3435973837
 653 026c CCCCEC3F 		.long	1072483532
 654 0270 EC51B81E 		.long	515396076
 655 0274 85EBF13F 		.long	1072819077
 656 0278 00000000 		.long	0
 657 027c 000000C0 		.long	-1073741824
 658 0280 CDCCCCCC 		.long	3435973837
 659 0284 CCCCEC3F 		.long	1072483532
 660 0288 00000000 		.long	0
 661 028c 00000000 		.long	0
 662 0290 00000000 		.long	0
 663 0294 000000C0 		.long	-1073741824
 664 0298 CDCCCCCC 		.long	3435973837
 665 029c CCCCEC3F 		.long	1072483532
 666 02a0 00000000 		.long	0
 667 02a4 000000C0 		.long	-1073741824
 668 02a8 00000000 		.long	0
 669 02ac 00000000 		.long	0
 670 02b0 CDCCCCCC 		.long	3435973837
 671 02b4 CCCCEC3F 		.long	1072483532
 672 02b8 00000000 		.long	0
 673 02bc 00000040 		.long	1073741824
 674 02c0 00000000 		.long	0
 675 02c4 00000000 		.long	0
 676 02c8 CDCCCCCC 		.long	3435973837
 677 02cc CCCCDC3F 		.long	1071434956
 678 02d0 00000000 		.long	0
 679 02d4 00000040 		.long	1073741824
 680 02d8 EC51B81E 		.long	515396076
 681 02dc 85EBF1BF 		.long	-1074664571
 682 02e0 CDCCCCCC 		.long	3435973837
 683 02e4 CCCCDC3F 		.long	1071434956
 684 02e8 EC51B81E 		.long	515396076
 685 02ec 85EBF13F 		.long	1072819077
 686 02f0 00000000 		.long	0
 687 02f4 000000C0 		.long	-1073741824
 688 02f8 CDCCCCCC 		.long	3435973837
 689 02fc CCCCDC3F 		.long	1071434956
 690 0300 00000000 		.long	0
 691 0304 00000000 		.long	0
 692 0308 00000000 		.long	0
 693 030c 000000C0 		.long	-1073741824
 694 0310 CDCCCCCC 		.long	3435973837
 695 0314 CCCCDC3F 		.long	1071434956
 696 0318 00000000 		.long	0
 697 031c 0000F83F 		.long	1073217536
 698 0320 00000000 		.long	0
 699 0324 00000000 		.long	0
 700 0328 CDCCCCCC 		.long	3435973837
 701 032c CCCCCC3F 		.long	1070386380
 702 0330 00000000 		.long	0
 703 0334 0000F83F 		.long	1073217536
 704 0338 E17A14AE 		.long	2920577761
 705 033c 47E1EABF 		.long	-1075125945
 706 0340 CDCCCCCC 		.long	3435973837
 707 0344 CCCCCC3F 		.long	1070386380
 708 0348 E17A14AE 		.long	2920577761
 709 034c 47E1EA3F 		.long	1072357703
 710 0350 00000000 		.long	0
 711 0354 0000F8BF 		.long	-1074266112
 712 0358 CDCCCCCC 		.long	3435973837
 713 035c CCCCCC3F 		.long	1070386380
 714 0360 00000000 		.long	0
 715 0364 00000000 		.long	0
 716 0368 00000000 		.long	0
 717 036c 0000F8BF 		.long	-1074266112
 718 0370 CDCCCCCC 		.long	3435973837
 719 0374 CCCCCC3F 		.long	1070386380
 720 0378 00000000 		.long	0
 721 037c 0000F83F 		.long	1073217536
 722 0380 00000000 		.long	0
 723 0384 00000000 		.long	0
 724 0388 33333333 		.long	858993459
 725 038c 3333C33F 		.long	1069757235
 726 0390 00000000 		.long	0
 727 0394 0000F83F 		.long	1073217536
 728 0398 E17A14AE 		.long	2920577761
 729 039c 47E1EABF 		.long	-1075125945
 730 03a0 33333333 		.long	858993459
 731 03a4 3333C33F 		.long	1069757235
 732 03a8 E17A14AE 		.long	2920577761
 733 03ac 47E1EA3F 		.long	1072357703
 734 03b0 00000000 		.long	0
 735 03b4 0000F8BF 		.long	-1074266112
 736 03b8 33333333 		.long	858993459
 737 03bc 3333C33F 		.long	1069757235
 738 03c0 00000000 		.long	0
 739 03c4 00000000 		.long	0
 740 03c8 00000000 		.long	0
 741 03cc 0000F8BF 		.long	-1074266112
 742 03d0 33333333 		.long	858993459
 743 03d4 3333C33F 		.long	1069757235
 744 03d8 9A999999 		.long	2576980378
 745 03dc 9999F9BF 		.long	-1074161255
 746 03e0 00000000 		.long	0
 747 03e4 00000000 		.long	0
 748 03e8 33333333 		.long	858993459
 749 03ec 33330040 		.long	1073754931
 750 03f0 9A999999 		.long	2576980378
 751 03f4 9999F9BF 		.long	-1074161255
 752 03f8 33333333 		.long	858993459
 753 03fc 3333D3BF 		.long	-1076677837
 754 0400 33333333 		.long	858993459
 755 0404 33330040 		.long	1073754931
 756 0408 00000000 		.long	0
 757 040c 0000F8BF 		.long	-1074266112
 758 0410 33333333 		.long	858993459
 759 0414 3333D3BF 		.long	-1076677837
 760 0418 00000000 		.long	0
 761 041c 00000240 		.long	1073872896
 762 0420 00000000 		.long	0
 763 0424 0000F8BF 		.long	-1074266112
 764 0428 00000000 		.long	0
 765 042c 00000000 		.long	0
 766 0430 00000000 		.long	0
 767 0434 00000240 		.long	1073872896
 768 0438 66666666 		.long	1717986918
 769 043c 666602C0 		.long	-1073584538
 770 0440 00000000 		.long	0
 771 0444 00000000 		.long	0
 772 0448 33333333 		.long	858993459
 773 044c 33330040 		.long	1073754931
 774 0450 66666666 		.long	1717986918
 775 0454 666602C0 		.long	-1073584538
 776 0458 33333333 		.long	858993459
 777 045c 3333D3BF 		.long	-1076677837
 778 0460 33333333 		.long	858993459
 779 0464 33330040 		.long	1073754931
 780 0468 00000000 		.long	0
 781 046c 000004C0 		.long	-1073479680
 782 0470 33333333 		.long	858993459
 783 0474 3333D3BF 		.long	-1076677837
 784 0478 00000000 		.long	0
 785 047c 00000240 		.long	1073872896
 786 0480 00000000 		.long	0
 787 0484 000004C0 		.long	-1073479680
 788 0488 00000000 		.long	0
 789 048c 00000000 		.long	0
 790 0490 00000000 		.long	0
 791 0494 00000240 		.long	1073872896
 792 0498 9A999999 		.long	2576980378
 793 049c 999905C0 		.long	-1073374823
 794 04a0 00000000 		.long	0
 795 04a4 00000000 		.long	0
 796 04a8 33333333 		.long	858993459
 797 04ac 33330040 		.long	1073754931
 798 04b0 9A999999 		.long	2576980378
 799 04b4 999905C0 		.long	-1073374823
 800 04b8 33333333 		.long	858993459
 801 04bc 3333D3BF 		.long	-1076677837
 802 04c0 33333333 		.long	858993459
 803 04c4 33330040 		.long	1073754931
 804 04c8 00000000 		.long	0
 805 04cc 000008C0 		.long	-1073217536
 806 04d0 33333333 		.long	858993459
 807 04d4 3333D3BF 		.long	-1076677837
 808 04d8 00000000 		.long	0
 809 04dc 00000240 		.long	1073872896
 810 04e0 00000000 		.long	0
 811 04e4 000008C0 		.long	-1073217536
 812 04e8 00000000 		.long	0
 813 04ec 00000000 		.long	0
 814 04f0 00000000 		.long	0
 815 04f4 00000240 		.long	1073872896
 816 04f8 9A999999 		.long	2576980378
 817 04fc 999905C0 		.long	-1073374823
 818 0500 00000000 		.long	0
 819 0504 00000000 		.long	0
 820 0508 CDCCCCCC 		.long	3435973837
 821 050c CCCCFC3F 		.long	1073532108
 822 0510 9A999999 		.long	2576980378
 823 0514 999905C0 		.long	-1073374823
 824 0518 33333333 		.long	858993459
 825 051c 3333D3BF 		.long	-1076677837
 826 0520 CDCCCCCC 		.long	3435973837
 827 0524 CCCCFC3F 		.long	1073532108
 828 0528 00000000 		.long	0
 829 052c 000008C0 		.long	-1073217536
 830 0530 33333333 		.long	858993459
 831 0534 3333D3BF 		.long	-1076677837
 832 0538 CDCCCCCC 		.long	3435973837
 833 053c CCCCFC3F 		.long	1073532108
 834 0540 00000000 		.long	0
 835 0544 000008C0 		.long	-1073217536
 836 0548 00000000 		.long	0
 837 054c 00000000 		.long	0
 838 0550 CDCCCCCC 		.long	3435973837
 839 0554 CCCCFC3F 		.long	1073532108
 840 0558 9A999999 		.long	2576980378
 841 055c 999905C0 		.long	-1073374823
 842 0560 00000000 		.long	0
 843 0564 00000000 		.long	0
 844 0568 33333333 		.long	858993459
 845 056c 3333F93F 		.long	1073296179
 846 0570 9A999999 		.long	2576980378
 847 0574 999905C0 		.long	-1073374823
 848 0578 33333333 		.long	858993459
 849 057c 3333D3BF 		.long	-1076677837
 850 0580 33333333 		.long	858993459
 851 0584 3333F93F 		.long	1073296179
 852 0588 00000000 		.long	0
 853 058c 000008C0 		.long	-1073217536
 854 0590 33333333 		.long	858993459
 855 0594 3333D3BF 		.long	-1076677837
 856 0598 9A999999 		.long	2576980378
 857 059c 9999F53F 		.long	1073060249
 858 05a0 00000000 		.long	0
 859 05a4 000008C0 		.long	-1073217536
 860 05a8 00000000 		.long	0
 861 05ac 00000000 		.long	0
 862 05b0 9A999999 		.long	2576980378
 863 05b4 9999F53F 		.long	1073060249
 864 05b8 00000000 		.long	0
 865 05bc 000004C0 		.long	-1073479680
 866 05c0 00000000 		.long	0
 867 05c4 00000000 		.long	0
 868 05c8 00000000 		.long	0
 869 05cc 0000F23F 		.long	1072824320
 870 05d0 00000000 		.long	0
 871 05d4 000004C0 		.long	-1073479680
 872 05d8 33333333 		.long	858993459
 873 05dc 3333D3BF 		.long	-1076677837
 874 05e0 00000000 		.long	0
 875 05e4 0000F23F 		.long	1072824320
 876 05e8 33333333 		.long	858993459
 877 05ec 333305C0 		.long	-1073401037
 878 05f0 33333333 		.long	858993459
 879 05f4 3333D3BF 		.long	-1076677837
 880 05f8 00000000 		.long	0
 881 05fc 0000EE3F 		.long	1072562176
 882 0600 33333333 		.long	858993459
 883 0604 333305C0 		.long	-1073401037
 884 0608 00000000 		.long	0
 885 060c 00000000 		.long	0
 886 0610 00000000 		.long	0
 887 0614 0000EE3F 		.long	1072562176
 888 0618 00000000 		.long	0
 889 061c 000000C0 		.long	-1073741824
 890 0620 33333333 		.long	858993459
 891 0624 3333D3BF 		.long	-1076677837
 892 0628 CDCCCCCC 		.long	3435973837
 893 062c CCCCEC3F 		.long	1072483532
 894 0630 66666666 		.long	1717986918
 895 0634 6666FEBF 		.long	-1073846682
 896 0638 33333333 		.long	858993459
 897 063c 3333D3BF 		.long	-1076677837
 898 0640 33333333 		.long	858993459
 899 0644 3333E33F 		.long	1071854387
 900 0648 66666666 		.long	1717986918
 901 064c 6666FEBF 		.long	-1073846682
 902 0650 00000000 		.long	0
 903 0654 00000000 		.long	0
 904 0658 33333333 		.long	858993459
 905 065c 3333E33F 		.long	1071854387
 906 0660 33333333 		.long	858993459
 907 0664 3333FB3F 		.long	1073427251
 908 0668 00000000 		.long	0
 909 066c 00000000 		.long	0
 910 0670 CDCCCCCC 		.long	3435973837
 911 0674 CCCCF63F 		.long	1073138892
 912 0678 33333333 		.long	858993459
 913 067c 3333FB3F 		.long	1073427251
 914 0680 1F85EB51 		.long	1374389535
 915 0684 B81EE5BF 		.long	-1075503432
 916 0688 CDCCCCCC 		.long	3435973837
 917 068c CCCCF63F 		.long	1073138892
 918 0690 33333333 		.long	858993459
 919 0694 3333FB3F 		.long	1073427251
 920 0698 1F85EB51 		.long	1374389535
 921 069c B81EE5BF 		.long	-1075503432
 922 06a0 33333333 		.long	858993459
 923 06a4 3333E33F 		.long	1071854387
 924 06a8 33333333 		.long	858993459
 925 06ac 3333FB3F 		.long	1073427251
 926 06b0 00000000 		.long	0
 927 06b4 00000000 		.long	0
 928 06b8 33333333 		.long	858993459
 929 06bc 3333E33F 		.long	1071854387
 930 06c0 CDCCCCCC 		.long	3435973837
 931 06c4 CCCC0440 		.long	1074056396
 932 06c8 00000000 		.long	0
 933 06cc 00000000 		.long	0
 934 06d0 CDCCCCCC 		.long	3435973837
 935 06d4 CCCCF63F 		.long	1073138892
 936 06d8 CDCCCCCC 		.long	3435973837
 937 06dc CCCC0440 		.long	1074056396
 938 06e0 1F85EB51 		.long	1374389535
 939 06e4 B81EE5BF 		.long	-1075503432
 940 06e8 CDCCCCCC 		.long	3435973837
 941 06ec CCCCF63F 		.long	1073138892
 942 06f0 CDCCCCCC 		.long	3435973837
 943 06f4 CCCC0840 		.long	1074318540
 944 06f8 1F85EB51 		.long	1374389535
 945 06fc B81EE5BF 		.long	-1075503432
 946 0700 66666666 		.long	1717986918
 947 0704 6666EA3F 		.long	1072326246
 948 0708 CDCCCCCC 		.long	3435973837
 949 070c CCCC0840 		.long	1074318540
 950 0710 00000000 		.long	0
 951 0714 00000000 		.long	0
 952 0718 66666666 		.long	1717986918
 953 071c 6666EA3F 		.long	1072326246
 954 0720 66666666 		.long	1717986918
 955 0724 66660240 		.long	1073899110
 956 0728 00000000 		.long	0
 957 072c 00000000 		.long	0
 958 0730 CDCCCCCC 		.long	3435973837
 959 0734 CCCC0040 		.long	1073794252
 960 0738 66666666 		.long	1717986918
 961 073c 66660240 		.long	1073899110
 962 0740 00000000 		.long	0
 963 0744 0000D0BF 		.long	-1076887552
 964 0748 CDCCCCCC 		.long	3435973837
 965 074c CCCC0040 		.long	1073794252
 966 0750 33333333 		.long	858993459
 967 0754 33330340 		.long	1073951539
 968 0758 00000000 		.long	0
 969 075c 0000D0BF 		.long	-1076887552
 970 0760 33333333 		.long	858993459
 971 0764 33330040 		.long	1073754931
 972 0768 33333333 		.long	858993459
 973 076c 33330340 		.long	1073951539
 974 0770 00000000 		.long	0
 975 0774 00000000 		.long	0
 976 0778 33333333 		.long	858993459
 977 077c 33330040 		.long	1073754931
 978 0780 9A999999 		.long	2576980378
 979 0784 99990540 		.long	1074108825
 980 0788 00000000 		.long	0
 981 078c 00000000 		.long	0
 982 0790 33333333 		.long	858993459
 983 0794 33330340 		.long	1073951539
 984 0798 9A999999 		.long	2576980378
 985 079c 99990540 		.long	1074108825
 986 07a0 00000000 		.long	0
 987 07a4 0000D0BF 		.long	-1076887552
 988 07a8 33333333 		.long	858993459
 989 07ac 33330340 		.long	1073951539
 990 07b0 66666666 		.long	1717986918
 991 07b4 66660A40 		.long	1074423398
 992 07b8 00000000 		.long	0
 993 07bc 0000D0BF 		.long	-1076887552
 994 07c0 33333333 		.long	858993459
 995 07c4 33330340 		.long	1073951539
 996 07c8 66666666 		.long	1717986918
 997 07cc 66660A40 		.long	1074423398
 998 07d0 00000000 		.long	0
 999 07d4 00000000 		.long	0
 1000 07d8 33333333 		.long	858993459
 1001 07dc 33330340 		.long	1073951539
 1002 07e0 66666666 		.long	1717986918
 1003 07e4 66660640 		.long	1074161254
 1004 07e8 00000000 		.long	0
 1005 07ec 00000000 		.long	0
 1006 07f0 CDCCCCCC 		.long	3435973837
 1007 07f4 CCCC0340 		.long	1073990860
 1008 07f8 66666666 		.long	1717986918
 1009 07fc 66660640 		.long	1074161254
 1010 0800 00000000 		.long	0
 1011 0804 0000D0BF 		.long	-1076887552
 1012 0808 CDCCCCCC 		.long	3435973837
 1013 080c CCCC0340 		.long	1073990860
 1014 0810 33333333 		.long	858993459
 1015 0814 33330C40 		.long	1074541363
 1016 0818 00000000 		.long	0
 1017 081c 0000D0BF 		.long	-1076887552
 1018 0820 33333333 		.long	858993459
 1019 0824 33F30340 		.long	1074000691
 1020 0828 33333333 		.long	858993459
 1021 082c 33330C40 		.long	1074541363
 1022 0830 00000000 		.long	0
 1023 0834 00000000 		.long	0
 1024 0838 33333333 		.long	858993459
 1025 083c 33F30340 		.long	1074000691
 1026 0840 33333333 		.long	858993459
 1027 0844 33330740 		.long	1074213683
 1028 0848 00000000 		.long	0
 1029 084c 00000000 		.long	0
 1030 0850 CDCCCCCC 		.long	3435973837
 1031 0854 CCCC0340 		.long	1073990860
 1032 0858 33333333 		.long	858993459
 1033 085c 33330740 		.long	1074213683
 1034 0860 33333333 		.long	858993459
 1035 0864 3333C3BF 		.long	-1077726413
 1036 0868 CDCCCCCC 		.long	3435973837
 1037 086c CCCC0340 		.long	1073990860
 1038 0870 9A999999 		.long	2576980378
 1039 0874 99990B40 		.long	1074502041
 1040 0878 33333333 		.long	858993459
 1041 087c 3333C3BF 		.long	-1077726413
 1042 0880 9A999999 		.long	2576980378
 1043 0884 99190440 		.long	1074010521
 1044 0888 9A999999 		.long	2576980378
 1045 088c 99990B40 		.long	1074502041
 1046 0890 00000000 		.long	0
 1047 0894 00000000 		.long	0
 1048 0898 9A999999 		.long	2576980378
 1049 089c 99190440 		.long	1074010521
 1050 08a0 66666666 		.long	1717986918
 1051 08a4 66660640 		.long	1074161254
 1052 08a8 00000000 		.long	0
 1053 08ac 00000000 		.long	0
 1054 08b0 33333333 		.long	858993459
 1055 08b4 33330340 		.long	1073951539
 1056 08b8 66666666 		.long	1717986918
 1057 08bc 66660640 		.long	1074161254
 1058 08c0 33333333 		.long	858993459
 1059 08c4 3333C3BF 		.long	-1077726413
 1060 08c8 33333333 		.long	858993459
 1061 08cc 33330340 		.long	1073951539
 1062 08d0 9A999999 		.long	2576980378
 1063 08d4 99990940 		.long	1074370969
 1064 08d8 33333333 		.long	858993459
 1065 08dc 3333C3BF 		.long	-1077726413
 1066 08e0 33333333 		.long	858993459
 1067 08e4 33330340 		.long	1073951539
 1068 08e8 9A999999 		.long	2576980378
 1069 08ec 99990940 		.long	1074370969
 1070 08f0 00000000 		.long	0
 1071 08f4 00000000 		.long	0
 1072 08f8 33333333 		.long	858993459
 1073 08fc 33330340 		.long	1073951539
 1074 0900 00000000 		.long	0
 1075 0904 00000000 		.long	0
 1076 0908 00000000 		.long	0
 1077 090c 00000000 		.long	0
 1078 0910 33333333 		.long	858993459
 1079 0914 33330940 		.long	1074344755
 1080 0918 9A999999 		.long	2576980378
 1081 091c 9999E93F 		.long	1072273817
 1082 0920 00000000 		.long	0
 1083 0924 00000000 		.long	0
 1084 0928 33333333 		.long	858993459
 1085 092c 33330940 		.long	1074344755
 1086 0930 9A999999 		.long	2576980378
 1087 0934 9999E93F 		.long	1072273817
 1088 0938 CDCCCCCC 		.long	3435973837
 1089 093c CCCCDCBF 		.long	-1076048692
 1090 0940 33333333 		.long	858993459
 1091 0944 33330940 		.long	1074344755
 1092 0948 CDCCCCCC 		.long	3435973837
 1093 094c CCCCDC3F 		.long	1071434956
 1094 0950 9A999999 		.long	2576980378
 1095 0954 9999E9BF 		.long	-1075209831
 1096 0958 33333333 		.long	858993459
 1097 095c 33330940 		.long	1074344755
 1098 0960 00000000 		.long	0
 1099 0964 00000000 		.long	0
 1100 0968 9A999999 		.long	2576980378
 1101 096c 9999E9BF 		.long	-1075209831
 1102 0970 33333333 		.long	858993459
 1103 0974 33330940 		.long	1074344755
 1104 0978 00000000 		.long	0
 1105 097c 00000000 		.long	0
 1106 0980 00000000 		.long	0
 1107 0984 00000000 		.long	0
 1108 0988 CDCCCCCC 		.long	3435973837
 1109 098c CCCC0640 		.long	1074187468
 1110 0990 66666666 		.long	1717986918
 1111 0994 6666F63F 		.long	1073112678
 1112 0998 00000000 		.long	0
 1113 099c 00000000 		.long	0
 1114 09a0 33333333 		.long	858993459
 1115 09a4 33330340 		.long	1073951539
 1116 09a8 66666666 		.long	1717986918
 1117 09ac 6666F63F 		.long	1073112678
 1118 09b0 4A0C022B 		.long	721554506
 1119 09b4 8716E9BF 		.long	-1075243385
 1120 09b8 33333333 		.long	858993459
 1121 09bc 33330340 		.long	1073951539
 1122 09c0 4A0C022B 		.long	721554506
 1123 09c4 8716E93F 		.long	1072240263
 1124 09c8 66666666 		.long	1717986918
 1125 09cc 6666F6BF 		.long	-1074370970
 1126 09d0 33333333 		.long	858993459
 1127 09d4 33330340 		.long	1073951539
 1128 09d8 00000000 		.long	0
 1129 09dc 00000000 		.long	0
 1130 09e0 66666666 		.long	1717986918
 1131 09e4 6666F6BF 		.long	-1074370970
 1132 09e8 33333333 		.long	858993459
 1133 09ec 33330340 		.long	1073951539
 1134 09f0 9A999999 		.long	2576980378
 1135 09f4 9999D93F 		.long	1071225241
 1136 09f8 00000000 		.long	0
 1137 09fc 00000000 		.long	0
 1138 0a00 66666666 		.long	1717986918
 1139 0a04 66660440 		.long	1074030182
 1140 0a08 9A999999 		.long	2576980378
 1141 0a0c 9999D93F 		.long	1071225241
 1142 0a10 79E92631 		.long	824633721
 1143 0a14 08ACCCBF 		.long	-1077105656
 1144 0a18 66666666 		.long	1717986918
 1145 0a1c 66660440 		.long	1074030182
 1146 0a20 79E92631 		.long	824633721
 1147 0a24 08ACCC3F 		.long	1070377992
 1148 0a28 9A999999 		.long	2576980378
 1149 0a2c 9999D9BF 		.long	-1076258407
 1150 0a30 66666666 		.long	1717986918
 1151 0a34 66660440 		.long	1074030182
 1152 0a38 00000000 		.long	0
 1153 0a3c 00000000 		.long	0
 1154 0a40 9A999999 		.long	2576980378
 1155 0a44 9999D9BF 		.long	-1076258407
 1156 0a48 66666666 		.long	1717986918
 1157 0a4c 66660440 		.long	1074030182
 1158 0a50 CDCCCCCC 		.long	3435973837
 1159 0a54 CCCCF43F 		.long	1073007820
 1160 0a58 00000000 		.long	0
 1161 0a5c 00000000 		.long	0
 1162 0a60 66666666 		.long	1717986918
 1163 0a64 66660440 		.long	1074030182
 1164 0a68 CDCCCCCC 		.long	3435973837
 1165 0a6c CCCCF43F 		.long	1073007820
 1166 0a70 B29DEFA7 		.long	2817498546
 1167 0a74 C64BE7BF 		.long	-1075360826
 1168 0a78 66666666 		.long	1717986918
 1169 0a7c 66660440 		.long	1074030182
 1170 0a80 B29DEFA7 		.long	2817498546
 1171 0a84 C64BE73F 		.long	1072122822
 1172 0a88 CDCCCCCC 		.long	3435973837
 1173 0a8c CCCCF4BF 		.long	-1074475828
 1174 0a90 66666666 		.long	1717986918
 1175 0a94 66660440 		.long	1074030182
 1176 0a98 00000000 		.long	0
 1177 0a9c 00000000 		.long	0
 1178 0aa0 CDCCCCCC 		.long	3435973837
 1179 0aa4 CCCCF4BF 		.long	-1074475828
 1180 0aa8 66666666 		.long	1717986918
 1181 0aac 66660440 		.long	1074030182
 1182 0ab0 CDCCCCCC 		.long	3435973837
 1183 0ab4 CCCCF43F 		.long	1073007820
 1184 0ab8 00000000 		.long	0
 1185 0abc 00000000 		.long	0
 1186 0ac0 33333333 		.long	858993459
 1187 0ac4 33330340 		.long	1073951539
 1188 0ac8 CDCCCCCC 		.long	3435973837
 1189 0acc CCCCF43F 		.long	1073007820
 1190 0ad0 B29DEFA7 		.long	2817498546
 1191 0ad4 C64BE7BF 		.long	-1075360826
 1192 0ad8 33333333 		.long	858993459
 1193 0adc 33330340 		.long	1073951539
 1194 0ae0 B29DEFA7 		.long	2817498546
 1195 0ae4 C64BE73F 		.long	1072122822
 1196 0ae8 CDCCCCCC 		.long	3435973837
 1197 0aec CCCCF4BF 		.long	-1074475828
 1198 0af0 33333333 		.long	858993459
 1199 0af4 33330340 		.long	1073951539
 1200 0af8 00000000 		.long	0
 1201 0afc 00000000 		.long	0
 1202 0b00 CDCCCCCC 		.long	3435973837
 1203 0b04 CCCCF4BF 		.long	-1074475828
 1204 0b08 33333333 		.long	858993459
 1205 0b0c 33330340 		.long	1073951539
 1206 0b10 00000000 		.long	0
 1207 0b14 00000000 		.long	0
 1208 0b18 00000000 		.long	0
 1209 0b1c 00000000 		.long	0
 1210 0b20 00000000 		.long	0
 1211 0b24 00000000 		.long	0
 1212 0b28 CDCCCCCC 		.long	3435973837
 1213 0b2c CCCCF63F 		.long	1073138892
 1214 0b30 F0A7C64B 		.long	1271310320
 1215 0b34 3789E9BF 		.long	-1075214025
 1216 0b38 00000000 		.long	0
 1217 0b3c 00000000 		.long	0
 1218 0b40 00000000 		.long	0
 1219 0b44 0000F83F 		.long	1073217536
 1220 0b48 00000000 		.long	0
 1221 0b4c 00000000 		.long	0
 1222 0b50 33333333 		.long	858993459
 1223 0b54 3333B33F 		.long	1068708659
 1224 0b58 CDCCCCCC 		.long	3435973837
 1225 0b5c CCCCF63F 		.long	1073138892
 1226 0b60 00000000 		.long	0
 1227 0b64 00000000 		.long	0
 1228 0b68 00000000 		.long	0
 1229 0b6c 00000000 		.long	0
 1230 0b70 F0A7C64B 		.long	1271310320
 1231 0b74 3789E93F 		.long	1072269623
 1232 0b78 CDCCCCCC 		.long	3435973837
 1233 0b7c CCCCF6BF 		.long	-1074344756
 1234 0b80 00000000 		.long	0
 1235 0b84 00000000 		.long	0
 1236 0b88 00000000 		.long	0
 1237 0b8c 00000000 		.long	0
 1238 0b90 00000000 		.long	0
 1239 0b94 0000F8BF 		.long	-1074266112
 1240 0b98 33333333 		.long	858993459
 1241 0b9c 3333B33F 		.long	1068708659
 1242 0ba0 00000000 		.long	0
 1243 0ba4 00000000 		.long	0
 1244 0ba8 CDCCCCCC 		.long	3435973837
 1245 0bac CCCCF6BF 		.long	-1074344756
 1246 0bb0 00000000 		.long	0
 1247 0bb4 00000000 		.long	0
 1248 0bb8 00000000 		.long	0
 1249 0bbc 0000F83F 		.long	1073217536
 1250 0bc0 E17A14AE 		.long	2920577761
 1251 0bc4 47E1EABF 		.long	-1075125945
 1252 0bc8 33333333 		.long	858993459
 1253 0bcc 3333B33F 		.long	1068708659
 1254 0bd0 E17A14AE 		.long	2920577761
 1255 0bd4 47E1EA3F 		.long	1072357703
 1256 0bd8 00000000 		.long	0
 1257 0bdc 0000F8BF 		.long	-1074266112
 1258 0be0 33333333 		.long	858993459
 1259 0be4 3333B33F 		.long	1068708659
 1260              		.section	.rodata._ZL9patchdata,"a",@progbits
 1261              		.align 32
 1264              	_ZL9patchdata:
 1265 0000 66000000 		.long	102
 1266 0004 67000000 		.long	103
 1267 0008 68000000 		.long	104
 1268 000c 69000000 		.long	105
 1269 0010 04000000 		.long	4
 1270 0014 05000000 		.long	5
 1271 0018 06000000 		.long	6
 1272 001c 07000000 		.long	7
 1273 0020 08000000 		.long	8
 1274 0024 09000000 		.long	9
 1275 0028 0A000000 		.long	10
 1276 002c 0B000000 		.long	11
 1277 0030 0C000000 		.long	12
 1278 0034 0D000000 		.long	13
 1279 0038 0E000000 		.long	14
 1280 003c 0F000000 		.long	15
 1281 0040 0C000000 		.long	12
 1282 0044 0D000000 		.long	13
 1283 0048 0E000000 		.long	14
 1284 004c 0F000000 		.long	15
 1285 0050 10000000 		.long	16
 1286 0054 11000000 		.long	17
 1287 0058 12000000 		.long	18
 1288 005c 13000000 		.long	19
 1289 0060 14000000 		.long	20
 1290 0064 15000000 		.long	21
 1291 0068 16000000 		.long	22
 1292 006c 17000000 		.long	23
 1293 0070 18000000 		.long	24
 1294 0074 19000000 		.long	25
 1295 0078 1A000000 		.long	26
 1296 007c 1B000000 		.long	27
 1297 0080 18000000 		.long	24
 1298 0084 19000000 		.long	25
 1299 0088 1A000000 		.long	26
 1300 008c 1B000000 		.long	27
 1301 0090 1D000000 		.long	29
 1302 0094 1E000000 		.long	30
 1303 0098 1F000000 		.long	31
 1304 009c 20000000 		.long	32
 1305 00a0 21000000 		.long	33
 1306 00a4 22000000 		.long	34
 1307 00a8 23000000 		.long	35
 1308 00ac 24000000 		.long	36
 1309 00b0 25000000 		.long	37
 1310 00b4 26000000 		.long	38
 1311 00b8 27000000 		.long	39
 1312 00bc 28000000 		.long	40
 1313 00c0 60000000 		.long	96
 1314 00c4 60000000 		.long	96
 1315 00c8 60000000 		.long	96
 1316 00cc 60000000 		.long	96
 1317 00d0 61000000 		.long	97
 1318 00d4 62000000 		.long	98
 1319 00d8 63000000 		.long	99
 1320 00dc 64000000 		.long	100
 1321 00e0 65000000 		.long	101
 1322 00e4 65000000 		.long	101
 1323 00e8 65000000 		.long	101
 1324 00ec 65000000 		.long	101
 1325 00f0 00000000 		.long	0
 1326 00f4 01000000 		.long	1
 1327 00f8 02000000 		.long	2
 1328 00fc 03000000 		.long	3
 1329 0100 00000000 		.long	0
 1330 0104 01000000 		.long	1
 1331 0108 02000000 		.long	2
 1332 010c 03000000 		.long	3
 1333 0110 6A000000 		.long	106
 1334 0114 6B000000 		.long	107
 1335 0118 6C000000 		.long	108
 1336 011c 6D000000 		.long	109
 1337 0120 6E000000 		.long	110
 1338 0124 6F000000 		.long	111
 1339 0128 70000000 		.long	112
 1340 012c 71000000 		.long	113
 1341 0130 72000000 		.long	114
 1342 0134 73000000 		.long	115
 1343 0138 74000000 		.long	116
 1344 013c 75000000 		.long	117
 1345 0140 76000000 		.long	118
 1346 0144 76000000 		.long	118
 1347 0148 76000000 		.long	118
 1348 014c 76000000 		.long	118
 1349 0150 7C000000 		.long	124
 1350 0154 7A000000 		.long	122
 1351 0158 77000000 		.long	119
 1352 015c 79000000 		.long	121
 1353 0160 7B000000 		.long	123
 1354 0164 7E000000 		.long	126
 1355 0168 7D000000 		.long	125
 1356 016c 78000000 		.long	120
 1357 0170 28000000 		.long	40
 1358 0174 27000000 		.long	39
 1359 0178 26000000 		.long	38
 1360 017c 25000000 		.long	37
 1361 0180 29000000 		.long	41
 1362 0184 2A000000 		.long	42
 1363 0188 2B000000 		.long	43
 1364 018c 2C000000 		.long	44
 1365 0190 2D000000 		.long	45
 1366 0194 2E000000 		.long	46
 1367 0198 2F000000 		.long	47
 1368 019c 30000000 		.long	48
 1369 01a0 31000000 		.long	49
 1370 01a4 32000000 		.long	50
 1371 01a8 33000000 		.long	51
 1372 01ac 34000000 		.long	52
 1373 01b0 35000000 		.long	53
 1374 01b4 36000000 		.long	54
 1375 01b8 37000000 		.long	55
 1376 01bc 38000000 		.long	56
 1377 01c0 35000000 		.long	53
 1378 01c4 36000000 		.long	54
 1379 01c8 37000000 		.long	55
 1380 01cc 38000000 		.long	56
 1381 01d0 39000000 		.long	57
 1382 01d4 3A000000 		.long	58
 1383 01d8 3B000000 		.long	59
 1384 01dc 3C000000 		.long	60
 1385 01e0 3D000000 		.long	61
 1386 01e4 3E000000 		.long	62
 1387 01e8 3F000000 		.long	63
 1388 01ec 40000000 		.long	64
 1389 01f0 1C000000 		.long	28
 1390 01f4 41000000 		.long	65
 1391 01f8 42000000 		.long	66
 1392 01fc 43000000 		.long	67
 1393 0200 44000000 		.long	68
 1394 0204 45000000 		.long	69
 1395 0208 46000000 		.long	70
 1396 020c 47000000 		.long	71
 1397 0210 48000000 		.long	72
 1398 0214 49000000 		.long	73
 1399 0218 4A000000 		.long	74
 1400 021c 4B000000 		.long	75
 1401 0220 4C000000 		.long	76
 1402 0224 4D000000 		.long	77
 1403 0228 4E000000 		.long	78
 1404 022c 4F000000 		.long	79
 1405 0230 50000000 		.long	80
 1406 0234 51000000 		.long	81
 1407 0238 52000000 		.long	82
 1408 023c 53000000 		.long	83
 1409 0240 50000000 		.long	80
 1410 0244 51000000 		.long	81
 1411 0248 52000000 		.long	82
 1412 024c 53000000 		.long	83
 1413 0250 54000000 		.long	84
 1414 0254 55000000 		.long	85
 1415 0258 56000000 		.long	86
 1416 025c 57000000 		.long	87
 1417 0260 58000000 		.long	88
 1418 0264 59000000 		.long	89
 1419 0268 5A000000 		.long	90
 1420 026c 5B000000 		.long	91
 1421 0270 5C000000 		.long	92
 1422 0274 5D000000 		.long	93
 1423 0278 5E000000 		.long	94
 1424 027c 5F000000 		.long	95
 1425              		.section	.rodata.cst8,"aM",@progbits,8
 1426              		.align 8
 1427              	.LC1:
 1428 0000 66666666 		.long	1717986918
 1429 0004 6666F63F 		.long	1073112678
 1430              		.align 8
 1431              	.LC2:
 1432 0008 00000000 		.long	0
 1433 000c 00E07040 		.long	1081139200
 1434              		.align 8
 1435              	.LC3:
 1436 0010 00000000 		.long	0
 1437 0014 0000F03F 		.long	1072693248
 1438              		.align 8
 1439              	.LC4:
 1440 0018 00000000 		.long	0
 1441 001c 0000E03F 		.long	1071644672
 1442              		.align 8
 1443              	.LC5:
 1444 0020 00000000 		.long	0
 1445 0024 0000F8BF 		.long	-1074266112
 1446              		.section	.rodata.cst16,"aM",@progbits,16
 1447              		.align 16
 1448              	.LC6:
 1449 0000 00000000 		.long	0
 1450 0004 00000080 		.long	-2147483648
 1451 0008 00000000 		.long	0
 1452 000c 00000000 		.long	0
 1453              		.text
 1454              	.Letext0:
 1455              		.section	.text.unlikely._ZL9fghTeapotidj
 1456              	.Letext_cold0:
 1457              		.file 2 "fltk-1.3.4-1/FL/Enumerations.H"
 1458              		.file 3 "/usr/include/GL/gl.h"
 1459              		.file 4 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1460              		.file 5 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1461              		.file 6 "/usr/include/libio.h"
 1462              		.file 7 "/usr/include/stdio.h"
 1463              		.file 8 "fltk-1.3.4-1/FL/glut.H"
 1464              		.file 9 "fltk-1.3.4-1/src/freeglut_teapot_data.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 freeglut_teapot.cxx
     /tmp/ccQE9v60.s:13     .text._ZL9fghTeapotidj:0000000000000000 _ZL9fghTeapotidj
     /tmp/ccQE9v60.s:1264   .rodata._ZL9patchdata:0000000000000000 _ZL9patchdata
     /tmp/ccQE9v60.s:497    .rodata._ZL6cpdata:0000000000000000 _ZL6cpdata
     /tmp/ccQE9v60.s:476    .data._ZL3tex:0000000000000000 _ZL3tex
     /tmp/ccQE9v60.s:431    .text._Z14glutWireTeapotd:0000000000000000 _Z14glutWireTeapotd
     /tmp/ccQE9v60.s:455    .text._Z15glutSolidTeapotd:0000000000000000 _Z15glutSolidTeapotd
     /tmp/ccQE9v60.s:1435   .rodata.cst8:0000000000000010 .LC3
     /tmp/ccQE9v60.s:1431   .rodata.cst8:0000000000000008 .LC2
     /tmp/ccQE9v60.s:1439   .rodata.cst8:0000000000000018 .LC4
     /tmp/ccQE9v60.s:1443   .rodata.cst8:0000000000000020 .LC5
     /tmp/ccQE9v60.s:1427   .rodata.cst8:0000000000000000 .LC1
     /tmp/ccQE9v60.s:1448   .rodata.cst16:0000000000000000 .LC6
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

UNDEFINED SYMBOLS
glPushAttrib
glEnable
glPushMatrix
glRotated
glScaled
glTranslated
glMap2d
glMapGrid2d
glEvalMesh2
glPopMatrix
glPopAttrib
__stack_chk_fail
