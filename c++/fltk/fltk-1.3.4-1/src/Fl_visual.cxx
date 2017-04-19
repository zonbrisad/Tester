   1              		.file	"Fl_visual.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL11test_visualR11XVisualInfoi,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL11test_visualR11XVisualInfoi,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL11test_visualR11XVisualInfoi
  10              	.Ltext_cold0:
  11              		.section	.text._ZL11test_visualR11XVisualInfoi
  13              	_ZL11test_visualR11XVisualInfoi:
  14              	.LFB307:
  15              		.file 1 "fltk-1.3.4-1/src/Fl_visual.cxx"
   1:fltk-1.3.4-1/src/Fl_visual.cxx **** ...
  16              		.loc 1 82 0
  17              		.cfi_startproc
  18              	.LVL0:
  19 0000 53       		pushq	%rbx
  20              		.cfi_def_cfa_offset 16
  21              		.cfi_offset 3, -16
  22 0001 4883EC20 		subq	$32, %rsp
  23              		.cfi_def_cfa_offset 48
  24              		.loc 1 82 0
  25 0005 64488B04 		movq	%fs:40, %rax
  25      25280000 
  25      00
  26 000e 48894424 		movq	%rax, 24(%rsp)
  26      18
  27 0013 31C0     		xorl	%eax, %eax
  28              		.loc 1 83 0
  29 0015 8B050000 		movl	fl_screen(%rip), %eax
  29      0000
  30 001b 394710   		cmpl	%eax, 16(%rdi)
  31 001e 7420     		je	.L34
  32              	.LVL1:
  33              	.L10:
  34              	.LBB15:
  35              	.LBB16:
  36              	.LBB17:
  37              	.LBB18:
  38              		.loc 1 103 0
  39 0020 31C0     		xorl	%eax, %eax
  40              	.L3:
  41              	.LBE18:
  42              	.LBE17:
  43              	.LBE16:
  44              	.LBE15:
  45              		.loc 1 116 0
  46 0022 488B7C24 		movq	24(%rsp), %rdi
  46      18
  47 0027 6448333C 		xorq	%fs:40, %rdi
  47      25280000 
  47      00
  48 0030 0F850801 		jne	.L35
  48      0000
  49 0036 4883C420 		addq	$32, %rsp
  50              		.cfi_remember_state
  51              		.cfi_def_cfa_offset 16
  52 003a 5B       		popq	%rbx
  53              		.cfi_def_cfa_offset 8
  54 003b C3       		ret
  55              	.LVL2:
  56 003c 0F1F4000 		.p2align 4,,10
  57              		.p2align 3
  58              	.L34:
  59              		.cfi_restore_state
  60              		.loc 1 85 0
  61 0040 40F6C601 		testb	$1, %sil
  62 0044 4889FB   		movq	%rdi, %rbx
  63 0047 7511     		jne	.L4
  64              	.LVL3:
  65              		.loc 1 86 0
  66 0049 8B4718   		movl	24(%rdi), %eax
  67 004c 83E802   		subl	$2, %eax
  68 004f 83E0FD   		andl	$-3, %eax
  69 0052 75CC     		jne	.L10
  70              		.loc 1 87 0
  71 0054 837F1408 		cmpl	$8, 20(%rdi)
  72 0058 7EC6     		jle	.L10
  73              	.L4:
  74              		.loc 1 89 0
  75 005a 40F6C640 		testb	$64, %sil
  76 005e 7406     		je	.L6
  77              		.loc 1 90 0
  78 0060 837B1417 		cmpl	$23, 20(%rbx)
  79 0064 7EBA     		jle	.L10
  80              	.L6:
  81              		.loc 1 93 0
  82 0066 F6431801 		testb	$1, 24(%rbx)
  83 006a 754C     		jne	.L36
  84              	.L7:
  85              	.LBB25:
  86              		.loc 1 99 0
  87 006c 83E602   		andl	$2, %esi
  88              	.LVL4:
  89 006f 7457     		je	.L12
  90              	.LVL5:
  91              	.LBE25:
  92              	.LBB26:
  93              	.LBB23:
  94              	.LBB20:
  95              		.loc 1 101 0
  96 0071 488B0500 		movq	_ZZL11test_visualR11XVisualInfoiE8xdbejunk(%rip), %rax
  96      000000
  97 0078 4885C0   		testq	%rax, %rax
  98 007b 7455     		je	.L37
  99              	.L9:
 100              	.LVL6:
 101              	.LBE20:
 102              	.LBB21:
 103              		.loc 1 110 0
 104 007d 8B10     		movl	(%rax), %edx
 105 007f 85D2     		testl	%edx, %edx
 106 0081 7E9D     		jle	.L10
 107              		.loc 1 111 0
 108 0083 488B4008 		movq	8(%rax), %rax
 109 0087 488B4B08 		movq	8(%rbx), %rcx
 110 008b 483908   		cmpq	%rcx, (%rax)
 111 008e 7438     		je	.L12
 112 0090 83EA01   		subl	$1, %edx
 113 0093 48C1E204 		salq	$4, %rdx
 114 0097 4801C2   		addq	%rax, %rdx
 115 009a EB0D     		jmp	.L14
 116              	.LVL7:
 117 009c 0F1F4000 		.p2align 4,,10
 118              		.p2align 3
 119              	.L31:
 120 00a0 4883C010 		addq	$16, %rax
 121 00a4 483908   		cmpq	%rcx, (%rax)
 122 00a7 741F     		je	.L12
 123              	.L14:
 124              		.loc 1 110 0
 125 00a9 4839D0   		cmpq	%rdx, %rax
 126 00ac 75F2     		jne	.L31
 127 00ae E96DFFFF 		jmp	.L10
 127      FF
 128              	.LVL8:
 129              		.p2align 4,,10
 130 00b3 0F1F4400 		.p2align 3
 130      00
 131              	.L36:
 132              	.LBE21:
 133              	.LBE23:
 134              	.LBE26:
 135              		.loc 1 93 0 discriminator 1
 136 00b8 837B1408 		cmpl	$8, 20(%rbx)
 137 00bc 7EAE     		jle	.L7
 138 00be E95DFFFF 		jmp	.L10
 138      FF
 139              	.LVL9:
 140              		.p2align 4,,10
 141 00c3 0F1F4400 		.p2align 3
 141      00
 142              	.L12:
 143              		.loc 1 115 0
 144 00c8 B8010000 		movl	$1, %eax
 144      00
 145 00cd E950FFFF 		jmp	.L3
 145      FF
 146              	.LVL10:
 147              	.L37:
 148              	.LBB27:
 149              	.LBB24:
 150              	.LBB22:
 151              	.LBB19:
 152              		.loc 1 103 0
 153 00d2 488B3D00 		movq	fl_display(%rip), %rdi
 153      000000
 154 00d9 488D5424 		leaq	8(%rsp), %rdx
 154      08
 155 00de 488D7424 		leaq	4(%rsp), %rsi
 155      04
 156 00e3 E8000000 		call	XdbeQueryExtension
 156      00
 157              	.LVL11:
 158 00e8 85C0     		testl	%eax, %eax
 159 00ea 0F8430FF 		je	.L10
 159      FFFF
 160              		.loc 1 104 0
 161 00f0 48630500 		movslq	fl_screen(%rip), %rax
 161      000000
 162 00f7 488B3D00 		movq	fl_display(%rip), %rdi
 162      000000
 163              		.loc 1 106 0
 164 00fe 488D5424 		leaq	12(%rsp), %rdx
 164      0C
 165 0103 488D7424 		leaq	16(%rsp), %rsi
 165      10
 166              		.loc 1 105 0
 167 0108 C744240C 		movl	$1, 12(%rsp)
 167      01000000 
 168              		.loc 1 104 0
 169 0110 48C1E007 		salq	$7, %rax
 170 0114 480387E8 		addq	232(%rdi), %rax
 170      000000
 171 011b 488B4010 		movq	16(%rax), %rax
 172 011f 48894424 		movq	%rax, 16(%rsp)
 172      10
 173              		.loc 1 106 0
 174 0124 E8000000 		call	XdbeGetVisualInfo
 174      00
 175              	.LVL12:
 176              		.loc 1 107 0
 177 0129 4885C0   		testq	%rax, %rax
 178              		.loc 1 106 0
 179 012c 48890500 		movq	%rax, _ZZL11test_visualR11XVisualInfoiE8xdbejunk(%rip)
 179      000000
 180              		.loc 1 107 0
 181 0133 0F8544FF 		jne	.L9
 181      FFFF
 182 0139 E9E2FEFF 		jmp	.L10
 182      FF
 183              	.LVL13:
 184              	.L35:
 185              	.LBE19:
 186              	.LBE22:
 187              	.LBE24:
 188              	.LBE27:
 189              		.loc 1 116 0
 190 013e E8000000 		call	__stack_chk_fail
 190      00
 191              	.LVL14:
 192              		.cfi_endproc
 193              	.LFE307:
 195              		.section	.text.unlikely._ZL11test_visualR11XVisualInfoi
 196              	.LCOLDE0:
 197              		.section	.text._ZL11test_visualR11XVisualInfoi
 198              	.LHOTE0:
 199              		.section	.text.unlikely._ZN2Fl6visualEi,"ax",@progbits
 200              		.align 2
 201              	.LCOLDB1:
 202              		.section	.text._ZN2Fl6visualEi,"ax",@progbits
 203              	.LHOTB1:
 204              		.align 2
 205              		.p2align 4,,15
 206              		.globl	_ZN2Fl6visualEi
 208              	_ZN2Fl6visualEi:
 209              	.LFB308:
 210              		.loc 1 118 0
 211              		.cfi_startproc
 212              	.LVL15:
 213 0000 4157     		pushq	%r15
 214              		.cfi_def_cfa_offset 16
 215              		.cfi_offset 15, -16
 216 0002 4156     		pushq	%r14
 217              		.cfi_def_cfa_offset 24
 218              		.cfi_offset 14, -24
 219              		.loc 1 124 0
 220 0004 41BE0100 		movl	$1, %r14d
 220      0000
 221              		.loc 1 118 0
 222 000a 4155     		pushq	%r13
 223              		.cfi_def_cfa_offset 32
 224              		.cfi_offset 13, -32
 225 000c 4154     		pushq	%r12
 226              		.cfi_def_cfa_offset 40
 227              		.cfi_offset 12, -40
 228 000e 4189FD   		movl	%edi, %r13d
 229 0011 55       		pushq	%rbp
 230              		.cfi_def_cfa_offset 48
 231              		.cfi_offset 6, -48
 232 0012 53       		pushq	%rbx
 233              		.cfi_def_cfa_offset 56
 234              		.cfi_offset 3, -56
 235 0013 4883EC68 		subq	$104, %rsp
 236              		.cfi_def_cfa_offset 160
 237              		.loc 1 118 0
 238 0017 64488B04 		movq	%fs:40, %rax
 238      25280000 
 238      00
 239 0020 48894424 		movq	%rax, 88(%rsp)
 239      58
 240 0025 31C0     		xorl	%eax, %eax
 241              		.loc 1 122 0
 242 0027 E8000000 		call	_Z15fl_open_displayv
 242      00
 243              	.LVL16:
 244              		.loc 1 124 0
 245 002c 488B3D00 		movq	fl_visual(%rip), %rdi
 245      000000
 246 0033 4489EE   		movl	%r13d, %esi
 247 0036 E8000000 		call	_ZL11test_visualR11XVisualInfoi
 247      00
 248              	.LVL17:
 249 003b 85C0     		testl	%eax, %eax
 250 003d 7429     		je	.L57
 251              	.L39:
 252              		.loc 1 140 0
 253 003f 488B5424 		movq	88(%rsp), %rdx
 253      58
 254 0044 64483314 		xorq	%fs:40, %rdx
 254      25280000 
 254      00
 255 004d 4489F0   		movl	%r14d, %eax
 256 0050 0F85D400 		jne	.L58
 256      0000
 257 0056 4883C468 		addq	$104, %rsp
 258              		.cfi_remember_state
 259              		.cfi_def_cfa_offset 56
 260 005a 5B       		popq	%rbx
 261              		.cfi_def_cfa_offset 48
 262 005b 5D       		popq	%rbp
 263              		.cfi_def_cfa_offset 40
 264 005c 415C     		popq	%r12
 265              		.cfi_def_cfa_offset 32
 266 005e 415D     		popq	%r13
 267              		.cfi_def_cfa_offset 24
 268              	.LVL18:
 269 0060 415E     		popq	%r14
 270              		.cfi_def_cfa_offset 16
 271 0062 415F     		popq	%r15
 272              		.cfi_def_cfa_offset 8
 273 0064 C3       		ret
 274              	.LVL19:
 275              		.p2align 4,,10
 276 0065 0F1F00   		.p2align 3
 277              	.L57:
 278              		.cfi_restore_state
 279              		.loc 1 128 0
 280 0068 488B3D00 		movq	fl_display(%rip), %rdi
 280      000000
 281 006f 488D4C24 		leaq	12(%rsp), %rcx
 281      0C
 282 0074 488D5424 		leaq	16(%rsp), %rdx
 282      10
 283 0079 31F6     		xorl	%esi, %esi
 284 007b 4189C6   		movl	%eax, %r14d
 285              	.LBB28:
 286              		.loc 1 131 0
 287 007e 31ED     		xorl	%ebp, %ebp
 288 0080 4531E4   		xorl	%r12d, %r12d
 289              	.LBE28:
 290              		.loc 1 128 0
 291 0083 E8000000 		call	XGetVisualInfo
 291      00
 292              	.LVL20:
 293 0088 4989C7   		movq	%rax, %r15
 294              	.LVL21:
 295 008b 4889C3   		movq	%rax, %rbx
 296              	.LBB29:
 297              		.loc 1 131 0
 298 008e 8B44240C 		movl	12(%rsp), %eax
 299              	.LVL22:
 300 0092 85C0     		testl	%eax, %eax
 301 0094 0F8E8300 		jle	.L43
 301      0000
 302              	.LVL23:
 303 009a 660F1F44 		.p2align 4,,10
 303      0000
 304              		.p2align 3
 305              	.L52:
 306              		.loc 1 131 0 is_stmt 0 discriminator 2
 307 00a0 4489EE   		movl	%r13d, %esi
 308 00a3 4889DF   		movq	%rbx, %rdi
 309 00a6 E8000000 		call	_ZL11test_visualR11XVisualInfoi
 309      00
 310              	.LVL24:
 311 00ab 85C0     		testl	%eax, %eax
 312 00ad 7411     		je	.L41
 313              		.loc 1 132 0 is_stmt 1
 314 00af 4D85E4   		testq	%r12, %r12
 315 00b2 7464     		je	.L46
 316 00b4 8B4314   		movl	20(%rbx), %eax
 317 00b7 41394424 		cmpl	%eax, 20(%r12)
 317      14
 318 00bc 4C0F4CE3 		cmovl	%rbx, %r12
 319              	.LVL25:
 320              	.L41:
 321              		.loc 1 131 0 discriminator 3
 322 00c0 83C501   		addl	$1, %ebp
 323              	.LVL26:
 324 00c3 4883C340 		addq	$64, %rbx
 325 00c7 396C240C 		cmpl	%ebp, 12(%rsp)
 326 00cb 7FD3     		jg	.L52
 327              	.LBE29:
 328              		.loc 1 135 0
 329 00cd 4D85E4   		testq	%r12, %r12
 330 00d0 744B     		je	.L43
 331              		.loc 1 137 0
 332 00d2 48630500 		movslq	fl_screen(%rip), %rax
 332      000000
 333 00d9 488B3D00 		movq	fl_display(%rip), %rdi
 333      000000
 334 00e0 31C9     		xorl	%ecx, %ecx
 335              		.loc 1 136 0
 336 00e2 4C892500 		movq	%r12, fl_visual(%rip)
 336      000000
 337              		.loc 1 137 0
 338 00e9 498B1424 		movq	(%r12), %rdx
 339              		.loc 1 139 0
 340 00ed 41BE0100 		movl	$1, %r14d
 340      0000
 341              		.loc 1 137 0
 342 00f3 48C1E007 		salq	$7, %rax
 343 00f7 480387E8 		addq	232(%rdi), %rax
 343      000000
 344 00fe 488B7010 		movq	16(%rax), %rsi
 345 0102 E8000000 		call	XCreateColormap
 345      00
 346              	.LVL27:
 347              		.loc 1 138 0
 348 0107 48890500 		movq	%rax, fl_colormap(%rip)
 348      000000
 349              		.loc 1 139 0
 350 010e E92CFFFF 		jmp	.L39
 350      FF
 351              		.p2align 4,,10
 352 0113 0F1F4400 		.p2align 3
 352      00
 353              	.L46:
 354              	.LBB30:
 355              		.loc 1 131 0
 356 0118 4989DC   		movq	%rbx, %r12
 357              	.LVL28:
 358 011b EBA3     		jmp	.L41
 359              	.LVL29:
 360              	.L43:
 361              	.LBE30:
 362              		.loc 1 135 0
 363 011d 4C89FF   		movq	%r15, %rdi
 364 0120 E8000000 		call	XFree
 364      00
 365              	.LVL30:
 366 0125 E915FFFF 		jmp	.L39
 366      FF
 367              	.LVL31:
 368              	.L58:
 369              		.loc 1 140 0
 370 012a E8000000 		call	__stack_chk_fail
 370      00
 371              	.LVL32:
 372              		.cfi_endproc
 373              	.LFE308:
 375              		.section	.text.unlikely._ZN2Fl6visualEi
 376              	.LCOLDE1:
 377              		.section	.text._ZN2Fl6visualEi
 378              	.LHOTE1:
 379              		.section	.bss._ZZL11test_visualR11XVisualInfoiE8xdbejunk,"aw",@nobits
 380              		.align 8
 383              	_ZZL11test_visualR11XVisualInfoiE8xdbejunk:
 384 0000 00000000 		.zero	8
 384      00000000 
 385              		.text
 386              	.Letext0:
 387              		.section	.text.unlikely._ZL11test_visualR11XVisualInfoi
 388              	.Letext_cold0:
 389              		.file 2 "fltk-1.3.4-1/FL/fl_types.h"
 390              		.file 3 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 391              		.file 4 "/usr/include/x86_64-linux-gnu/bits/types.h"
 392              		.file 5 "/usr/include/libio.h"
 393              		.file 6 "fltk-1.3.4-1/FL/Enumerations.H"
 394              		.file 7 "fltk-1.3.4-1/FL/Fl.H"
 395              		.file 8 "fltk-1.3.4-1/FL/Fl_Widget.H"
 396              		.file 9 "fltk-1.3.4-1/FL/Fl_Image.H"
 397              		.file 10 "/usr/include/X11/X.h"
 398              		.file 11 "/usr/include/X11/Xlib.h"
 399              		.file 12 "/usr/include/X11/Xutil.h"
 400              		.file 13 "/usr/include/X11/extensions/Xdbe.h"
 401              		.file 14 "/usr/include/stdio.h"
 402              		.file 15 "fltk-1.3.4-1/FL/x.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_visual.cxx
     /tmp/ccbaonXy.s:13     .text._ZL11test_visualR11XVisualInfoi:0000000000000000 _ZL11test_visualR11XVisualInfoi
     /tmp/ccbaonXy.s:383    .bss._ZZL11test_visualR11XVisualInfoiE8xdbejunk:0000000000000000 _ZZL11test_visualR11XVisualInfoiE8xdbejunk
     /tmp/ccbaonXy.s:208    .text._ZN2Fl6visualEi:0000000000000000 _ZN2Fl6visualEi
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
                           .group:0000000000000000 wm4.dbe.h.34.79598bb0b9240f45bf6607b107c7262e

UNDEFINED SYMBOLS
fl_screen
fl_display
XdbeQueryExtension
XdbeGetVisualInfo
__stack_chk_fail
_Z15fl_open_displayv
fl_visual
XGetVisualInfo
XCreateColormap
fl_colormap
XFree
