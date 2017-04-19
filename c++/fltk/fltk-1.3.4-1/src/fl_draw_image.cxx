   1              		.file	"fl_draw_image.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL17color16_converterPKhPhii,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL17color16_converterPKhPhii,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL17color16_converterPKhPhii
  10              	.Ltext_cold0:
  11              		.section	.text._ZL17color16_converterPKhPhii
  13              	_ZL17color16_converterPKhPhii:
  14              	.LFB484:
  15              		.file 1 "fltk-1.3.4-1/src/fl_draw_image.cxx"
   1:fltk-1.3.4-1/src/fl_draw_image.cxx **** ...
  16              		.loc 1 149 0
  17              		.cfi_startproc
  18              	.LVL0:
  19              		.loc 1 152 0
  20 0000 8B050000 		movl	_ZL3dir(%rip), %eax
  20      0000
  21              		.loc 1 149 0
  22 0006 4155     		pushq	%r13
  23              		.cfi_def_cfa_offset 16
  24              		.cfi_offset 13, -16
  25 0008 4154     		pushq	%r12
  26              		.cfi_def_cfa_offset 24
  27              		.cfi_offset 12, -24
  28 000a 55       		pushq	%rbp
  29              		.cfi_def_cfa_offset 32
  30              		.cfi_offset 6, -32
  31 000b 53       		pushq	%rbx
  32              		.cfi_def_cfa_offset 40
  33              		.cfi_offset 3, -40
  34              		.loc 1 152 0
  35 000c 85C0     		testl	%eax, %eax
  36 000e 0F842C01 		je	.L2
  36      0000
  37              		.loc 1 154 0
  38 0014 448D42FF 		leal	-1(%rdx), %r8d
  39              		.loc 1 153 0
  40 0018 C7050000 		movl	$0, _ZL3dir(%rip)
  40      00000000 
  40      0000
  41              		.loc 1 157 0
  42 0022 48C7C3FF 		movq	$-1, %rbx
  42      FFFFFF
  43              		.loc 1 154 0
  44 0029 4489C0   		movl	%r8d, %eax
  45 002c 0FAFC1   		imull	%ecx, %eax
  46              		.loc 1 156 0
  47 002f F7D9     		negl	%ecx
  48              	.LVL1:
  49              		.loc 1 154 0
  50 0031 4898     		cltq
  51 0033 4801C7   		addq	%rax, %rdi
  52              	.LVL2:
  53              		.loc 1 155 0
  54 0036 4863C2   		movslq	%edx, %rax
  55 0039 488D7446 		leaq	-2(%rsi,%rax,2), %rsi
  55      FE
  56              	.LVL3:
  57              	.L3:
  58              		.loc 1 164 0
  59 003e 85D2     		testl	%edx, %edx
  60              		.loc 1 163 0
  61 0040 448B1D00 		movl	_ZL2ri(%rip), %r11d
  61      000000
  62              	.LVL4:
  63 0047 448B1500 		movl	_ZL2gi(%rip), %r10d
  63      000000
  64              	.LVL5:
  65 004e 448B0D00 		movl	_ZL2bi(%rip), %r9d
  65      000000
  66              	.LVL6:
  67              		.loc 1 164 0
  68 0055 0F84C400 		je	.L4
  68      0000
  69 005b 4863E9   		movslq	%ecx, %rbp
  70 005e 4801DB   		addq	%rbx, %rbx
  71              	.LVL7:
  72 0061 BAFF0000 		movl	$255, %edx
  72      00
  73              	.LVL8:
  74 0066 662E0F1F 		.p2align 4,,10
  74      84000000 
  74      0000
  75              		.p2align 3
  76              	.L5:
  77              		.loc 1 165 0
  78 0070 0FB60D00 		movzbl	fl_redmask(%rip), %ecx
  78      000000
  79              		.loc 1 166 0
  80 0077 440FB625 		movzbl	fl_greenmask(%rip), %r12d
  80      00000000 
  81              		.loc 1 165 0
  82 007f 89C8     		movl	%ecx, %eax
  83 0081 F7D0     		notl	%eax
  84 0083 4121C3   		andl	%eax, %r11d
  85              	.LVL9:
  86 0086 0FB607   		movzbl	(%rdi), %eax
  87 0089 4101C3   		addl	%eax, %r11d
  88              	.LVL10:
  89              		.loc 1 166 0
  90 008c 4489E0   		movl	%r12d, %eax
  91 008f 4181FBFF 		cmpl	$255, %r11d
  91      000000
  92 0096 F7D0     		notl	%eax
  93 0098 440F4FDA 		cmovg	%edx, %r11d
  94              	.LVL11:
  95 009c 4121C2   		andl	%eax, %r10d
  96              	.LVL12:
  97 009f 0FB64701 		movzbl	1(%rdi), %eax
  98 00a3 4101C2   		addl	%eax, %r10d
  99              	.LVL13:
 100              		.loc 1 167 0
 101 00a6 0FB60500 		movzbl	fl_bluemask(%rip), %eax
 101      000000
 102 00ad 4181FAFF 		cmpl	$255, %r10d
 102      000000
 103 00b4 440F4FD2 		cmovg	%edx, %r10d
 104              	.LVL14:
 105 00b8 4189C5   		movl	%eax, %r13d
 106 00bb 41F7D5   		notl	%r13d
 107 00be 4521E9   		andl	%r13d, %r9d
 108              	.LVL15:
 109 00c1 440FB66F 		movzbl	2(%rdi), %r13d
 109      02
 110 00c6 4501E9   		addl	%r13d, %r9d
 111              	.LVL16:
 112 00c9 4181F9FF 		cmpl	$255, %r9d
 112      000000
 113 00d0 440F4FCA 		cmovg	%edx, %r9d
 114              	.LVL17:
 115              		.loc 1 172 0
 116 00d4 4421D9   		andl	%r11d, %ecx
 117 00d7 4521D4   		andl	%r10d, %r12d
 118 00da 4189CD   		movl	%ecx, %r13d
 119 00dd 8B0D0000 		movl	fl_redshift(%rip), %ecx
 119      0000
 120 00e3 4421C8   		andl	%r9d, %eax
 121              		.loc 1 164 0
 122 00e6 4183E801 		subl	$1, %r8d
 123              	.LVL18:
 124 00ea 4801EF   		addq	%rbp, %rdi
 125              	.LVL19:
 126              		.loc 1 172 0
 127 00ed 41D3E5   		sall	%cl, %r13d
 128 00f0 8B0D0000 		movl	fl_greenshift(%rip), %ecx
 128      0000
 129 00f6 41D3E4   		sall	%cl, %r12d
 130 00f9 8B0D0000 		movl	fl_blueshift(%rip), %ecx
 130      0000
 131 00ff 4501EC   		addl	%r13d, %r12d
 132 0102 D3E0     		sall	%cl, %eax
 133 0104 8B0D0000 		movl	fl_extrashift(%rip), %ecx
 133      0000
 134 010a 4401E0   		addl	%r12d, %eax
 135 010d D3F8     		sarl	%cl, %eax
 136 010f 668906   		movw	%ax, (%rsi)
 137              		.loc 1 164 0
 138 0112 4801DE   		addq	%rbx, %rsi
 139              	.LVL20:
 140 0115 4183F8FF 		cmpl	$-1, %r8d
 141 0119 0F8551FF 		jne	.L5
 141      FFFF
 142              	.LVL21:
 143              	.L4:
 144              		.loc 1 175 0
 145 011f 5B       		popq	%rbx
 146              		.cfi_remember_state
 147              		.cfi_def_cfa_offset 32
 148              		.loc 1 174 0
 149 0120 44891D00 		movl	%r11d, _ZL2ri(%rip)
 149      000000
 150 0127 44891500 		movl	%r10d, _ZL2gi(%rip)
 150      000000
 151              		.loc 1 175 0
 152 012e 5D       		popq	%rbp
 153              		.cfi_def_cfa_offset 24
 154              		.loc 1 174 0
 155 012f 44890D00 		movl	%r9d, _ZL2bi(%rip)
 155      000000
 156              		.loc 1 175 0
 157 0136 415C     		popq	%r12
 158              		.cfi_def_cfa_offset 16
 159 0138 415D     		popq	%r13
 160              		.cfi_def_cfa_offset 8
 161 013a C3       		ret
 162              	.LVL22:
 163 013b 0F1F4400 		.p2align 4,,10
 163      00
 164              		.p2align 3
 165              	.L2:
 166              		.cfi_restore_state
 167              		.loc 1 159 0
 168 0140 C7050000 		movl	$1, _ZL3dir(%rip)
 168      00000100 
 168      0000
 169              	.LVL23:
 170 014a 448D42FF 		leal	-1(%rdx), %r8d
 171              		.loc 1 161 0
 172 014e BB010000 		movl	$1, %ebx
 172      00
 173 0153 E9E6FEFF 		jmp	.L3
 173      FF
 174              		.cfi_endproc
 175              	.LFE484:
 177              		.section	.text.unlikely._ZL17color16_converterPKhPhii
 178              	.LCOLDE0:
 179              		.section	.text._ZL17color16_converterPKhPhii
 180              	.LHOTE0:
 181              		.section	.text.unlikely._ZL16mono16_converterPKhPhii,"ax",@progbits
 182              	.LCOLDB1:
 183              		.section	.text._ZL16mono16_converterPKhPhii,"ax",@progbits
 184              	.LHOTB1:
 185              		.p2align 4,,15
 187              	_ZL16mono16_converterPKhPhii:
 188              	.LFB485:
 189              		.loc 1 177 0
 190              		.cfi_startproc
 191              	.LVL24:
 192              		.loc 1 180 0
 193 0000 8B050000 		movl	_ZL3dir(%rip), %eax
 193      0000
 194 0006 85C0     		testl	%eax, %eax
 195 0008 0F84DA00 		je	.L13
 195      0000
 196              		.loc 1 182 0
 197 000e 448D4AFF 		leal	-1(%rdx), %r9d
 198              		.loc 1 181 0
 199 0012 C7050000 		movl	$0, _ZL3dir(%rip)
 199      00000000 
 199      0000
 200              		.loc 1 182 0
 201 001c 4489C8   		movl	%r9d, %eax
 202 001f 0FAFC1   		imull	%ecx, %eax
 203              		.loc 1 184 0
 204 0022 F7D9     		negl	%ecx
 205              	.LVL25:
 206              		.loc 1 182 0
 207 0024 4898     		cltq
 208 0026 4801C7   		addq	%rax, %rdi
 209              	.LVL26:
 210              		.loc 1 183 0
 211 0029 4863C2   		movslq	%edx, %rax
 212 002c 488D7446 		leaq	-2(%rsi,%rax,2), %rsi
 212      FE
 213              	.LVL27:
 214              		.loc 1 185 0
 215 0031 B8FFFFFF 		movl	$-1, %eax
 215      FF
 216              	.LVL28:
 217              	.L14:
 218              		.loc 1 191 0
 219 0036 440FB615 		movzbl	fl_redmask(%rip), %r10d
 219      00000000 
 220              		.loc 1 192 0
 221 003e 448B0500 		movl	_ZL2ri(%rip), %r8d
 221      000000
 222              		.loc 1 191 0
 223 0045 44221500 		andb	fl_greenmask(%rip), %r10b
 223      000000
 224 004c 44221500 		andb	fl_bluemask(%rip), %r10b
 224      000000
 225              	.LVL29:
 226              	.LBB28:
 227              		.loc 1 193 0
 228 0053 85D2     		testl	%edx, %edx
 229 0055 0F84A500 		je	.L22
 229      0000
 230              	.LBE28:
 231              		.loc 1 177 0
 232 005b 4156     		pushq	%r14
 233              		.cfi_def_cfa_offset 16
 234              		.cfi_offset 14, -16
 235 005d 4863D0   		movslq	%eax, %rdx
 236              	.LVL30:
 237 0060 4154     		pushq	%r12
 238              		.cfi_def_cfa_offset 24
 239              		.cfi_offset 12, -24
 240 0062 55       		pushq	%rbp
 241              		.cfi_def_cfa_offset 32
 242              		.cfi_offset 6, -32
 243 0063 53       		pushq	%rbx
 244              		.cfi_def_cfa_offset 40
 245              		.cfi_offset 3, -40
 246 0064 410FB6DA 		movzbl	%r10b, %ebx
 247 0068 F7D3     		notl	%ebx
 248 006a 4C63D9   		movslq	%ecx, %r11
 249 006d 4801D2   		addq	%rdx, %rdx
 250 0070 BDFF0000 		movl	$255, %ebp
 250      00
 251              	.LVL31:
 252              		.p2align 4,,10
 253 0075 0F1F00   		.p2align 3
 254              	.L16:
 255              	.LBB31:
 256              	.LBB29:
 257              		.loc 1 194 0
 258 0078 0FB607   		movzbl	(%rdi), %eax
 259 007b 4121D8   		andl	%ebx, %r8d
 260              	.LVL32:
 261              		.loc 1 200 0
 262 007e 8B0D0000 		movl	fl_redshift(%rip), %ecx
 262      0000
 263              		.loc 1 194 0
 264 0084 4101C0   		addl	%eax, %r8d
 265              	.LVL33:
 266              		.loc 1 196 0
 267 0087 4489D0   		movl	%r10d, %eax
 268 008a 4181F8FF 		cmpl	$255, %r8d
 268      000000
 269 0091 440F4FC5 		cmovg	%ebp, %r8d
 270              	.LVL34:
 271              	.LBE29:
 272              		.loc 1 193 0
 273 0095 4183E901 		subl	$1, %r9d
 274              	.LVL35:
 275 0099 4C01DF   		addq	%r11, %rdi
 276              	.LVL36:
 277              	.LBB30:
 278              		.loc 1 196 0
 279 009c 4421C0   		andl	%r8d, %eax
 280              	.LVL37:
 281 009f 0FB6C0   		movzbl	%al, %eax
 282              		.loc 1 200 0
 283 00a2 4189C4   		movl	%eax, %r12d
 284 00a5 4189C6   		movl	%eax, %r14d
 285 00a8 41D3E4   		sall	%cl, %r12d
 286 00ab 8B0D0000 		movl	fl_greenshift(%rip), %ecx
 286      0000
 287 00b1 41D3E6   		sall	%cl, %r14d
 288 00b4 8B0D0000 		movl	fl_blueshift(%rip), %ecx
 288      0000
 289 00ba 4501F4   		addl	%r14d, %r12d
 290 00bd D3E0     		sall	%cl, %eax
 291 00bf 8B0D0000 		movl	fl_extrashift(%rip), %ecx
 291      0000
 292 00c5 4401E0   		addl	%r12d, %eax
 293 00c8 D3F8     		sarl	%cl, %eax
 294 00ca 668906   		movw	%ax, (%rsi)
 295              	.LBE30:
 296              		.loc 1 193 0
 297 00cd 4801D6   		addq	%rdx, %rsi
 298              	.LVL38:
 299 00d0 4183F9FF 		cmpl	$-1, %r9d
 300 00d4 75A2     		jne	.L16
 301              	.LBE31:
 302              		.loc 1 203 0
 303 00d6 5B       		popq	%rbx
 304              		.cfi_restore 3
 305              		.cfi_def_cfa_offset 32
 306              		.loc 1 202 0
 307 00d7 44890500 		movl	%r8d, _ZL2ri(%rip)
 307      000000
 308              		.loc 1 203 0
 309 00de 5D       		popq	%rbp
 310              		.cfi_restore 6
 311              		.cfi_def_cfa_offset 24
 312 00df 415C     		popq	%r12
 313              		.cfi_restore 12
 314              		.cfi_def_cfa_offset 16
 315 00e1 415E     		popq	%r14
 316              		.cfi_restore 14
 317              		.cfi_def_cfa_offset 8
 318 00e3 C3       		ret
 319              	.LVL39:
 320              		.p2align 4,,10
 321 00e4 0F1F4000 		.p2align 3
 322              	.L13:
 323              		.loc 1 187 0
 324 00e8 C7050000 		movl	$1, _ZL3dir(%rip)
 324      00000100 
 324      0000
 325              	.LVL40:
 326 00f2 448D4AFF 		leal	-1(%rdx), %r9d
 327              		.loc 1 189 0
 328 00f6 B8010000 		movl	$1, %eax
 328      00
 329 00fb E936FFFF 		jmp	.L14
 329      FF
 330              	.LVL41:
 331              	.L22:
 332              		.loc 1 202 0
 333 0100 44890500 		movl	%r8d, _ZL2ri(%rip)
 333      000000
 334 0107 C3       		ret
 335              		.cfi_endproc
 336              	.LFE485:
 338              		.section	.text.unlikely._ZL16mono16_converterPKhPhii
 339              	.LCOLDE1:
 340              		.section	.text._ZL16mono16_converterPKhPhii
 341              	.LHOTE1:
 342              		.section	.text.unlikely._ZL14c565_converterPKhPhii,"ax",@progbits
 343              	.LCOLDB2:
 344              		.section	.text._ZL14c565_converterPKhPhii,"ax",@progbits
 345              	.LHOTB2:
 346              		.p2align 4,,15
 348              	_ZL14c565_converterPKhPhii:
 349              	.LFB486:
 350              		.loc 1 207 0
 351              		.cfi_startproc
 352              	.LVL42:
 353              		.loc 1 210 0
 354 0000 8B050000 		movl	_ZL3dir(%rip), %eax
 354      0000
 355              		.loc 1 207 0
 356 0006 4154     		pushq	%r12
 357              		.cfi_def_cfa_offset 16
 358              		.cfi_offset 12, -16
 359 0008 55       		pushq	%rbp
 360              		.cfi_def_cfa_offset 24
 361              		.cfi_offset 6, -24
 362 0009 53       		pushq	%rbx
 363              		.cfi_def_cfa_offset 32
 364              		.cfi_offset 3, -32
 365              		.loc 1 210 0
 366 000a 85C0     		testl	%eax, %eax
 367 000c 0F84DE00 		je	.L24
 367      0000
 368              		.loc 1 212 0
 369 0012 448D52FF 		leal	-1(%rdx), %r10d
 370              		.loc 1 211 0
 371 0016 C7050000 		movl	$0, _ZL3dir(%rip)
 371      00000000 
 371      0000
 372              		.loc 1 215 0
 373 0020 49C7C3FF 		movq	$-1, %r11
 373      FFFFFF
 374              		.loc 1 212 0
 375 0027 4489D0   		movl	%r10d, %eax
 376 002a 0FAFC1   		imull	%ecx, %eax
 377              		.loc 1 214 0
 378 002d F7D9     		negl	%ecx
 379              	.LVL43:
 380              		.loc 1 212 0
 381 002f 4898     		cltq
 382 0031 4801C7   		addq	%rax, %rdi
 383              	.LVL44:
 384              		.loc 1 213 0
 385 0034 4863C2   		movslq	%edx, %rax
 386 0037 488D7446 		leaq	-2(%rsi,%rax,2), %rsi
 386      FE
 387              	.LVL45:
 388              	.L25:
 389              		.loc 1 222 0
 390 003c 85D2     		testl	%edx, %edx
 391              		.loc 1 221 0
 392 003e 448B0D00 		movl	_ZL2ri(%rip), %r9d
 392      000000
 393              	.LVL46:
 394 0045 448B0500 		movl	_ZL2gi(%rip), %r8d
 394      000000
 395              	.LVL47:
 396 004c 8B050000 		movl	_ZL2bi(%rip), %eax
 396      0000
 397              	.LVL48:
 398              		.loc 1 222 0
 399 0052 747A     		je	.L26
 400 0054 4863C9   		movslq	%ecx, %rcx
 401 0057 4D01DB   		addq	%r11, %r11
 402              	.LVL49:
 403 005a BAFF0000 		movl	$255, %edx
 403      00
 404              	.LVL50:
 405 005f 90       		.p2align 4,,10
 406              		.p2align 3
 407              	.L27:
 408              		.loc 1 223 0
 409 0060 0FB61F   		movzbl	(%rdi), %ebx
 410 0063 4183E107 		andl	$7, %r9d
 411              	.LVL51:
 412 0067 4101D9   		addl	%ebx, %r9d
 413              	.LVL52:
 414              		.loc 1 224 0
 415 006a 0FB65F01 		movzbl	1(%rdi), %ebx
 416 006e 4181F9FF 		cmpl	$255, %r9d
 416      000000
 417 0075 440F4FCA 		cmovg	%edx, %r9d
 418              	.LVL53:
 419 0079 4183E003 		andl	$3, %r8d
 420              	.LVL54:
 421 007d 4101D8   		addl	%ebx, %r8d
 422              	.LVL55:
 423              		.loc 1 225 0
 424 0080 0FB65F02 		movzbl	2(%rdi), %ebx
 425 0084 4181F8FF 		cmpl	$255, %r8d
 425      000000
 426 008b 440F4FC2 		cmovg	%edx, %r8d
 427              	.LVL56:
 428 008f 83E007   		andl	$7, %eax
 429              	.LVL57:
 430              		.loc 1 226 0
 431 0092 4589C4   		movl	%r8d, %r12d
 432              		.loc 1 225 0
 433 0095 01D8     		addl	%ebx, %eax
 434              	.LVL58:
 435              		.loc 1 226 0
 436 0097 4489CB   		movl	%r9d, %ebx
 437 009a 3DFF0000 		cmpl	$255, %eax
 437      00
 438 009f 0F4FC2   		cmovg	%edx, %eax
 439              	.LVL59:
 440 00a2 6681E3F8 		andw	$248, %bx
 440      00
 441 00a7 664181E4 		andw	$252, %r12w
 441      FC00
 442 00ad C1E308   		sall	$8, %ebx
 443              		.loc 1 222 0
 444 00b0 4183EA01 		subl	$1, %r10d
 445              	.LVL60:
 446 00b4 4801CF   		addq	%rcx, %rdi
 447              	.LVL61:
 448              		.loc 1 226 0
 449 00b7 428D2CE3 		leal	(%rbx,%r12,8), %ebp
 450 00bb 89C3     		movl	%eax, %ebx
 451 00bd C1FB03   		sarl	$3, %ebx
 452 00c0 01EB     		addl	%ebp, %ebx
 453 00c2 66891E   		movw	%bx, (%rsi)
 454              		.loc 1 222 0
 455 00c5 4C01DE   		addq	%r11, %rsi
 456              	.LVL62:
 457 00c8 4183FAFF 		cmpl	$-1, %r10d
 458 00cc 7592     		jne	.L27
 459              	.LVL63:
 460              	.L26:
 461              		.loc 1 229 0
 462 00ce 5B       		popq	%rbx
 463              		.cfi_remember_state
 464              		.cfi_def_cfa_offset 24
 465              		.loc 1 228 0
 466 00cf 44890D00 		movl	%r9d, _ZL2ri(%rip)
 466      000000
 467 00d6 44890500 		movl	%r8d, _ZL2gi(%rip)
 467      000000
 468              		.loc 1 229 0
 469 00dd 5D       		popq	%rbp
 470              		.cfi_def_cfa_offset 16
 471              		.loc 1 228 0
 472 00de 89050000 		movl	%eax, _ZL2bi(%rip)
 472      0000
 473              		.loc 1 229 0
 474 00e4 415C     		popq	%r12
 475              		.cfi_def_cfa_offset 8
 476 00e6 C3       		ret
 477              	.LVL64:
 478 00e7 660F1F84 		.p2align 4,,10
 478      00000000 
 478      00
 479              		.p2align 3
 480              	.L24:
 481              		.cfi_restore_state
 482              		.loc 1 217 0
 483 00f0 C7050000 		movl	$1, _ZL3dir(%rip)
 483      00000100 
 483      0000
 484              	.LVL65:
 485 00fa 448D52FF 		leal	-1(%rdx), %r10d
 486              		.loc 1 219 0
 487 00fe 41BB0100 		movl	$1, %r11d
 487      0000
 488 0104 E933FFFF 		jmp	.L25
 488      FF
 489              		.cfi_endproc
 490              	.LFE486:
 492              		.section	.text.unlikely._ZL14c565_converterPKhPhii
 493              	.LCOLDE2:
 494              		.section	.text._ZL14c565_converterPKhPhii
 495              	.LHOTE2:
 496              		.section	.text.unlikely._ZL14m565_converterPKhPhii,"ax",@progbits
 497              	.LCOLDB3:
 498              		.section	.text._ZL14m565_converterPKhPhii,"ax",@progbits
 499              	.LHOTB3:
 500              		.p2align 4,,15
 502              	_ZL14m565_converterPKhPhii:
 503              	.LFB487:
 504              		.loc 1 231 0
 505              		.cfi_startproc
 506              	.LVL66:
 507              		.loc 1 234 0
 508 0000 8B050000 		movl	_ZL3dir(%rip), %eax
 508      0000
 509 0006 85C0     		testl	%eax, %eax
 510 0008 0F848A00 		je	.L34
 510      0000
 511              		.loc 1 236 0
 512 000e 448D4AFF 		leal	-1(%rdx), %r9d
 513              		.loc 1 235 0
 514 0012 C7050000 		movl	$0, _ZL3dir(%rip)
 514      00000000 
 514      0000
 515              		.loc 1 239 0
 516 001c 49C7C3FF 		movq	$-1, %r11
 516      FFFFFF
 517              		.loc 1 236 0
 518 0023 4489C8   		movl	%r9d, %eax
 519 0026 0FAFC1   		imull	%ecx, %eax
 520              		.loc 1 238 0
 521 0029 F7D9     		negl	%ecx
 522              	.LVL67:
 523              		.loc 1 236 0
 524 002b 4898     		cltq
 525 002d 4801C7   		addq	%rax, %rdi
 526              	.LVL68:
 527              		.loc 1 237 0
 528 0030 4863C2   		movslq	%edx, %rax
 529 0033 488D7446 		leaq	-2(%rsi,%rax,2), %rsi
 529      FE
 530              	.LVL69:
 531              	.L35:
 532              		.loc 1 246 0
 533 0038 85D2     		testl	%edx, %edx
 534              		.loc 1 245 0
 535 003a 8B050000 		movl	_ZL2ri(%rip), %eax
 535      0000
 536              	.LVL70:
 537              		.loc 1 246 0
 538 0040 746C     		je	.L43
 539              		.loc 1 231 0
 540 0042 53       		pushq	%rbx
 541              		.cfi_def_cfa_offset 16
 542              		.cfi_offset 3, -16
 543 0043 4863C9   		movslq	%ecx, %rcx
 544 0046 4D01DB   		addq	%r11, %r11
 545              	.LVL71:
 546 0049 BBFF0000 		movl	$255, %ebx
 546      00
 547              	.LVL72:
 548 004e 6690     		.p2align 4,,10
 549              		.p2align 3
 550              	.L37:
 551              		.loc 1 247 0
 552 0050 0FB617   		movzbl	(%rdi), %edx
 553 0053 83E007   		andl	$7, %eax
 554              	.LVL73:
 555 0056 01D0     		addl	%edx, %eax
 556              	.LVL74:
 557 0058 3DFF0000 		cmpl	$255, %eax
 557      00
 558 005d 0F4FC3   		cmovg	%ebx, %eax
 559              	.LVL75:
 560              		.loc 1 246 0
 561 0060 4183E901 		subl	$1, %r9d
 562              	.LVL76:
 563 0064 4801CF   		addq	%rcx, %rdi
 564              	.LVL77:
 565              		.loc 1 248 0
 566 0067 89C2     		movl	%eax, %edx
 567 0069 C1FA03   		sarl	$3, %edx
 568 006c 4189D2   		movl	%edx, %r10d
 569 006f 4189D0   		movl	%edx, %r8d
 570 0072 41C1E206 		sall	$6, %r10d
 571 0076 41C1E00B 		sall	$11, %r8d
 572 007a 4501D0   		addl	%r10d, %r8d
 573 007d 4401C2   		addl	%r8d, %edx
 574 0080 668916   		movw	%dx, (%rsi)
 575              		.loc 1 246 0
 576 0083 4C01DE   		addq	%r11, %rsi
 577              	.LVL78:
 578 0086 4183F9FF 		cmpl	$-1, %r9d
 579 008a 75C4     		jne	.L37
 580              		.loc 1 250 0
 581 008c 89050000 		movl	%eax, _ZL2ri(%rip)
 581      0000
 582              		.loc 1 251 0
 583 0092 5B       		popq	%rbx
 584              		.cfi_restore 3
 585              		.cfi_def_cfa_offset 8
 586 0093 C3       		ret
 587              	.LVL79:
 588              		.p2align 4,,10
 589 0094 0F1F4000 		.p2align 3
 590              	.L34:
 591              		.loc 1 241 0
 592 0098 C7050000 		movl	$1, _ZL3dir(%rip)
 592      00000100 
 592      0000
 593              	.LVL80:
 594 00a2 448D4AFF 		leal	-1(%rdx), %r9d
 595              		.loc 1 243 0
 596 00a6 41BB0100 		movl	$1, %r11d
 596      0000
 597 00ac EB8A     		jmp	.L35
 598              	.LVL81:
 599              	.L43:
 600              		.loc 1 250 0
 601 00ae 89050000 		movl	%eax, _ZL2ri(%rip)
 601      0000
 602 00b4 C3       		ret
 603              		.cfi_endproc
 604              	.LFE487:
 606              		.section	.text.unlikely._ZL14m565_converterPKhPhii
 607              	.LCOLDE3:
 608              		.section	.text._ZL14m565_converterPKhPhii
 609              	.LHOTE3:
 610              		.section	.text.unlikely._ZL13rgb_converterPKhPhii,"ax",@progbits
 611              	.LCOLDB4:
 612              		.section	.text._ZL13rgb_converterPKhPhii,"ax",@progbits
 613              	.LHOTB4:
 614              		.p2align 4,,15
 616              	_ZL13rgb_converterPKhPhii:
 617              	.LFB488:
 618              		.loc 1 256 0
 619              		.cfi_startproc
 620              	.LVL82:
 621              		.loc 1 257 0
 622 0000 83E903   		subl	$3, %ecx
 623              	.LVL83:
 624              		.loc 1 258 0
 625 0003 85D2     		testl	%edx, %edx
 626 0005 7439     		je	.L44
 627 0007 8D42FF   		leal	-1(%rdx), %eax
 628 000a 4863C9   		movslq	%ecx, %rcx
 629 000d 4883C103 		addq	$3, %rcx
 630              	.LVL84:
 631 0011 488D5440 		leaq	3(%rax,%rax,2), %rdx
 631      03
 632              	.LVL85:
 633 0016 4801F2   		addq	%rsi, %rdx
 634              	.LVL86:
 635 0019 0F1F8000 		.p2align 4,,10
 635      000000
 636              		.p2align 3
 637              	.L46:
 638              		.loc 1 259 0 discriminator 1
 639 0020 0FB607   		movzbl	(%rdi), %eax
 640 0023 4883C603 		addq	$3, %rsi
 641              	.LVL87:
 642 0027 8846FD   		movb	%al, -3(%rsi)
 643              	.LVL88:
 644              		.loc 1 260 0 discriminator 1
 645 002a 0FB64701 		movzbl	1(%rdi), %eax
 646 002e 8846FE   		movb	%al, -2(%rsi)
 647              	.LVL89:
 648              		.loc 1 261 0 discriminator 1
 649 0031 0FB64702 		movzbl	2(%rdi), %eax
 650 0035 4801CF   		addq	%rcx, %rdi
 651              	.LVL90:
 652              		.loc 1 258 0 discriminator 1
 653 0038 4839F2   		cmpq	%rsi, %rdx
 654              		.loc 1 261 0 discriminator 1
 655 003b 8846FF   		movb	%al, -1(%rsi)
 656              		.loc 1 258 0 discriminator 1
 657 003e 75E0     		jne	.L46
 658              	.LVL91:
 659              	.L44:
 660 0040 F3C3     		rep ret
 661              		.cfi_endproc
 662              	.LFE488:
 664              		.section	.text.unlikely._ZL13rgb_converterPKhPhii
 665              	.LCOLDE4:
 666              		.section	.text._ZL13rgb_converterPKhPhii
 667              	.LHOTE4:
 668              		.section	.text.unlikely._ZL13bgr_converterPKhPhii,"ax",@progbits
 669              	.LCOLDB5:
 670              		.section	.text._ZL13bgr_converterPKhPhii,"ax",@progbits
 671              	.LHOTB5:
 672              		.p2align 4,,15
 674              	_ZL13bgr_converterPKhPhii:
 675              	.LFB489:
 676              		.loc 1 265 0
 677              		.cfi_startproc
 678              	.LVL92:
 679              	.LBB32:
 680              		.loc 1 266 0
 681 0000 85D2     		testl	%edx, %edx
 682 0002 7436     		je	.L49
 683 0004 8D42FF   		leal	-1(%rdx), %eax
 684 0007 4863C9   		movslq	%ecx, %rcx
 685 000a 4C8D4C40 		leaq	3(%rax,%rax,2), %r9
 685      03
 686 000f 4901F1   		addq	%rsi, %r9
 687              	.LVL93:
 688              		.p2align 4,,10
 689 0012 660F1F44 		.p2align 3
 689      0000
 690              	.L51:
 691              	.LBB33:
 692              		.loc 1 268 0 discriminator 1
 693 0018 0FB65701 		movzbl	1(%rdi), %edx
 694              		.loc 1 269 0 discriminator 1
 695 001c 440FB647 		movzbl	2(%rdi), %r8d
 695      02
 696 0021 4883C603 		addq	$3, %rsi
 697              	.LVL94:
 698              		.loc 1 267 0 discriminator 1
 699 0025 0FB607   		movzbl	(%rdi), %eax
 700              	.LVL95:
 701              	.LBE33:
 702              		.loc 1 266 0 discriminator 1
 703 0028 4801CF   		addq	%rcx, %rdi
 704              	.LVL96:
 705              	.LBB34:
 706              		.loc 1 269 0 discriminator 1
 707 002b 448846FD 		movb	%r8b, -3(%rsi)
 708              		.loc 1 270 0 discriminator 1
 709 002f 8856FE   		movb	%dl, -2(%rsi)
 710              	.LVL97:
 711              	.LBE34:
 712              		.loc 1 266 0 discriminator 1
 713 0032 4C39CE   		cmpq	%r9, %rsi
 714              	.LBB35:
 715              		.loc 1 271 0 discriminator 1
 716 0035 8846FF   		movb	%al, -1(%rsi)
 717              	.LBE35:
 718              		.loc 1 266 0 discriminator 1
 719 0038 75DE     		jne	.L51
 720              	.LVL98:
 721              	.L49:
 722 003a F3C3     		rep ret
 723              	.LBE32:
 724              		.cfi_endproc
 725              	.LFE489:
 727              		.section	.text.unlikely._ZL13bgr_converterPKhPhii
 728              	.LCOLDE5:
 729              		.section	.text._ZL13bgr_converterPKhPhii
 730              	.LHOTE5:
 731              		.section	.text.unlikely._ZL13rrr_converterPKhPhii,"ax",@progbits
 732              	.LCOLDB6:
 733              		.section	.text._ZL13rrr_converterPKhPhii,"ax",@progbits
 734              	.LHOTB6:
 735              		.p2align 4,,15
 737              	_ZL13rrr_converterPKhPhii:
 738              	.LFB490:
 739              		.loc 1 275 0
 740              		.cfi_startproc
 741              	.LVL99:
 742              		.loc 1 276 0
 743 0000 85D2     		testl	%edx, %edx
 744 0002 7432     		je	.L54
 745 0004 8D42FF   		leal	-1(%rdx), %eax
 746 0007 4863C9   		movslq	%ecx, %rcx
 747 000a 488D5440 		leaq	3(%rax,%rax,2), %rdx
 747      03
 748              	.LVL100:
 749 000f 4801F2   		addq	%rsi, %rdx
 750              	.LVL101:
 751              		.p2align 4,,10
 752 0012 660F1F44 		.p2align 3
 752      0000
 753              	.L56:
 754              		.loc 1 277 0 discriminator 1
 755 0018 0FB607   		movzbl	(%rdi), %eax
 756 001b 4883C603 		addq	$3, %rsi
 757              	.LVL102:
 758 001f 8846FD   		movb	%al, -3(%rsi)
 759              	.LVL103:
 760              		.loc 1 278 0 discriminator 1
 761 0022 0FB607   		movzbl	(%rdi), %eax
 762 0025 8846FE   		movb	%al, -2(%rsi)
 763              	.LVL104:
 764              		.loc 1 279 0 discriminator 1
 765 0028 0FB607   		movzbl	(%rdi), %eax
 766              		.loc 1 276 0 discriminator 1
 767 002b 4801CF   		addq	%rcx, %rdi
 768              	.LVL105:
 769 002e 4839D6   		cmpq	%rdx, %rsi
 770              		.loc 1 279 0 discriminator 1
 771 0031 8846FF   		movb	%al, -1(%rsi)
 772              		.loc 1 276 0 discriminator 1
 773 0034 75E2     		jne	.L56
 774              	.LVL106:
 775              	.L54:
 776 0036 F3C3     		rep ret
 777              		.cfi_endproc
 778              	.LFE490:
 780              		.section	.text.unlikely._ZL13rrr_converterPKhPhii
 781              	.LCOLDE6:
 782              		.section	.text._ZL13rrr_converterPKhPhii
 783              	.LHOTE6:
 784              		.section	.text.unlikely._ZL14rgbx_converterPKhPhii,"ax",@progbits
 785              	.LCOLDB7:
 786              		.section	.text._ZL14rgbx_converterPKhPhii,"ax",@progbits
 787              	.LHOTB7:
 788              		.p2align 4,,15
 790              	_ZL14rgbx_converterPKhPhii:
 791              	.LFB491:
 792              		.loc 1 307 0
 793              		.cfi_startproc
 794              	.LVL107:
 795              		.loc 1 308 0
 796 0000 89D0     		movl	%edx, %eax
 797              		.loc 1 307 0
 798 0002 4154     		pushq	%r12
 799              		.cfi_def_cfa_offset 16
 800              		.cfi_offset 12, -16
 801 0004 55       		pushq	%rbp
 802              		.cfi_def_cfa_offset 24
 803              		.cfi_offset 6, -24
 804              		.loc 1 308 0
 805 0005 C1E81F   		shrl	$31, %eax
 806              		.loc 1 307 0
 807 0008 53       		pushq	%rbx
 808              		.cfi_def_cfa_offset 32
 809              		.cfi_offset 3, -32
 810              		.loc 1 308 0
 811 0009 01D0     		addl	%edx, %eax
 812 000b D1F8     		sarl	%eax
 813              	.LVL108:
 814              	.LBB36:
 815 000d 85C0     		testl	%eax, %eax
 816 000f 0F848000 		je	.L60
 816      0000
 817 0015 8D68FF   		leal	-1(%rax), %ebp
 818 0018 4863C9   		movslq	%ecx, %rcx
 819 001b 4989F2   		movq	%rsi, %r10
 820 001e 4C8D1C09 		leaq	(%rcx,%rcx), %r11
 821 0022 4989F9   		movq	%rdi, %r9
 822 0025 4801F9   		addq	%rdi, %rcx
 823              	.LVL109:
 824 0028 488D5CEE 		leaq	8(%rsi,%rbp,8), %rbx
 824      08
 825              	.LVL110:
 826 002d 0F1F00   		.p2align 4,,10
 827              		.p2align 3
 828              	.L61:
 829              	.LBB37:
 830              		.loc 1 308 0 is_stmt 0 discriminator 2
 831 0030 440FB641 		movzbl	1(%rcx), %r8d
 831      01
 832 0035 0FB64102 		movzbl	2(%rcx), %eax
 833 0039 4983C208 		addq	$8, %r10
 834              	.LVL111:
 835 003d 450FB661 		movzbl	1(%r9), %r12d
 835      01
 836              	.LVL112:
 837 0042 C1E008   		sall	$8, %eax
 838 0045 41C1E010 		sall	$16, %r8d
 839 0049 4101C0   		addl	%eax, %r8d
 840 004c 0FB601   		movzbl	(%rcx), %eax
 841 004f 41C1E410 		sall	$16, %r12d
 842              	.LVL113:
 843 0053 4C01D9   		addq	%r11, %rcx
 844 0056 C1E018   		sall	$24, %eax
 845 0059 4401C0   		addl	%r8d, %eax
 846 005c 450FB641 		movzbl	2(%r9), %r8d
 846      02
 847 0061 48C1E020 		salq	$32, %rax
 848 0065 41C1E008 		sall	$8, %r8d
 849 0069 4501C4   		addl	%r8d, %r12d
 850 006c 450FB601 		movzbl	(%r9), %r8d
 851              	.LVL114:
 852 0070 4D01D9   		addq	%r11, %r9
 853              	.LVL115:
 854 0073 41C1E018 		sall	$24, %r8d
 855 0077 4501E0   		addl	%r12d, %r8d
 856 007a 4C09C0   		orq	%r8, %rax
 857              	.LBE37:
 858 007d 4939DA   		cmpq	%rbx, %r10
 859              	.LBB38:
 860 0080 498942F8 		movq	%rax, -8(%r10)
 861              	.LBE38:
 862 0084 75AA     		jne	.L61
 863 0086 4883C501 		addq	$1, %rbp
 864 008a 488D34EE 		leaq	(%rsi,%rbp,8), %rsi
 865              	.LVL116:
 866 008e 490FAFEB 		imulq	%r11, %rbp
 867 0092 4801EF   		addq	%rbp, %rdi
 868              	.LVL117:
 869              	.L60:
 870              	.LBE36:
 871              		.loc 1 308 0 discriminator 3
 872 0095 83E201   		andl	$1, %edx
 873              	.LVL118:
 874 0098 741B     		je	.L59
 875              	.LVL119:
 876              		.loc 1 308 0 discriminator 5
 877 009a 0FB65701 		movzbl	1(%rdi), %edx
 878 009e 0FB64702 		movzbl	2(%rdi), %eax
 879 00a2 C1E210   		sall	$16, %edx
 880 00a5 C1E008   		sall	$8, %eax
 881 00a8 01C2     		addl	%eax, %edx
 882 00aa 0FB607   		movzbl	(%rdi), %eax
 883 00ad C1E018   		sall	$24, %eax
 884 00b0 01D0     		addl	%edx, %eax
 885 00b2 488906   		movq	%rax, (%rsi)
 886              	.LVL120:
 887              	.L59:
 888              		.loc 1 309 0 is_stmt 1
 889 00b5 5B       		popq	%rbx
 890              		.cfi_def_cfa_offset 24
 891 00b6 5D       		popq	%rbp
 892              		.cfi_def_cfa_offset 16
 893 00b7 415C     		popq	%r12
 894              		.cfi_def_cfa_offset 8
 895 00b9 C3       		ret
 896              		.cfi_endproc
 897              	.LFE491:
 899              		.section	.text.unlikely._ZL14rgbx_converterPKhPhii
 900              	.LCOLDE7:
 901              		.section	.text._ZL14rgbx_converterPKhPhii
 902              	.LHOTE7:
 903              		.section	.text.unlikely._ZL14xbgr_converterPKhPhii,"ax",@progbits
 904              	.LCOLDB8:
 905              		.section	.text._ZL14xbgr_converterPKhPhii,"ax",@progbits
 906              	.LHOTB8:
 907              		.p2align 4,,15
 909              	_ZL14xbgr_converterPKhPhii:
 910              	.LFB492:
 911              		.loc 1 311 0
 912              		.cfi_startproc
 913              	.LVL121:
 914              		.loc 1 312 0
 915 0000 89D0     		movl	%edx, %eax
 916              		.loc 1 311 0
 917 0002 4155     		pushq	%r13
 918              		.cfi_def_cfa_offset 16
 919              		.cfi_offset 13, -16
 920 0004 4154     		pushq	%r12
 921              		.cfi_def_cfa_offset 24
 922              		.cfi_offset 12, -24
 923              		.loc 1 312 0
 924 0006 C1E81F   		shrl	$31, %eax
 925              		.loc 1 311 0
 926 0009 55       		pushq	%rbp
 927              		.cfi_def_cfa_offset 32
 928              		.cfi_offset 6, -32
 929 000a 53       		pushq	%rbx
 930              		.cfi_def_cfa_offset 40
 931              		.cfi_offset 3, -40
 932              		.loc 1 312 0
 933 000b 01D0     		addl	%edx, %eax
 934 000d D1F8     		sarl	%eax
 935              	.LVL122:
 936              	.LBB39:
 937 000f 85C0     		testl	%eax, %eax
 938 0011 747F     		je	.L72
 939 0013 8D68FF   		leal	-1(%rax), %ebp
 940 0016 4863C9   		movslq	%ecx, %rcx
 941 0019 4989F2   		movq	%rsi, %r10
 942 001c 4C8D1C09 		leaq	(%rcx,%rcx), %r11
 943 0020 4989F9   		movq	%rdi, %r9
 944 0023 4801F9   		addq	%rdi, %rcx
 945              	.LVL123:
 946 0026 488D5CEE 		leaq	8(%rsi,%rbp,8), %rbx
 946      08
 947              	.LVL124:
 948 002b 0F1F4400 		.p2align 4,,10
 948      00
 949              		.p2align 3
 950              	.L73:
 951              	.LBB40:
 952              		.loc 1 312 0 is_stmt 0 discriminator 2
 953 0030 0FB64101 		movzbl	1(%rcx), %eax
 954 0034 440FB621 		movzbl	(%rcx), %r12d
 955 0038 4983C208 		addq	$8, %r10
 956              	.LVL125:
 957 003c 450FB629 		movzbl	(%r9), %r13d
 958 0040 C1E008   		sall	$8, %eax
 959 0043 468D0420 		leal	(%rax,%r12), %r8d
 960 0047 0FB64102 		movzbl	2(%rcx), %eax
 961 004b 4C01D9   		addq	%r11, %rcx
 962 004e C1E010   		sall	$16, %eax
 963 0051 4401C0   		addl	%r8d, %eax
 964 0054 450FB641 		movzbl	1(%r9), %r8d
 964      01
 965              	.LVL126:
 966 0059 48C1E020 		salq	$32, %rax
 967 005d 41C1E008 		sall	$8, %r8d
 968              	.LVL127:
 969 0061 478D2428 		leal	(%r8,%r13), %r12d
 970 0065 450FB641 		movzbl	2(%r9), %r8d
 970      02
 971              	.LVL128:
 972 006a 4D01D9   		addq	%r11, %r9
 973              	.LVL129:
 974 006d 41C1E010 		sall	$16, %r8d
 975 0071 4501E0   		addl	%r12d, %r8d
 976 0074 4D63C0   		movslq	%r8d, %r8
 977 0077 4C09C0   		orq	%r8, %rax
 978              	.LBE40:
 979 007a 4939DA   		cmpq	%rbx, %r10
 980              	.LBB41:
 981 007d 498942F8 		movq	%rax, -8(%r10)
 982              	.LBE41:
 983 0081 75AD     		jne	.L73
 984 0083 4883C501 		addq	$1, %rbp
 985 0087 488D34EE 		leaq	(%rsi,%rbp,8), %rsi
 986              	.LVL130:
 987 008b 490FAFEB 		imulq	%r11, %rbp
 988 008f 4801EF   		addq	%rbp, %rdi
 989              	.LVL131:
 990              	.L72:
 991              	.LBE39:
 992              		.loc 1 312 0 discriminator 3
 993 0092 83E201   		andl	$1, %edx
 994              	.LVL132:
 995 0095 741B     		je	.L71
 996              	.LVL133:
 997              		.loc 1 312 0 discriminator 5
 998 0097 0FB64701 		movzbl	1(%rdi), %eax
 999 009b 0FB60F   		movzbl	(%rdi), %ecx
 1000 009e C1E008   		sall	$8, %eax
 1001 00a1 8D1408   		leal	(%rax,%rcx), %edx
 1002 00a4 0FB64702 		movzbl	2(%rdi), %eax
 1003 00a8 C1E010   		sall	$16, %eax
 1004 00ab 01D0     		addl	%edx, %eax
 1005 00ad 4898     		cltq
 1006 00af 488906   		movq	%rax, (%rsi)
 1007              	.LVL134:
 1008              	.L71:
 1009              		.loc 1 313 0 is_stmt 1
 1010 00b2 5B       		popq	%rbx
 1011              		.cfi_def_cfa_offset 32
 1012 00b3 5D       		popq	%rbp
 1013              		.cfi_def_cfa_offset 24
 1014 00b4 415C     		popq	%r12
 1015              		.cfi_def_cfa_offset 16
 1016 00b6 415D     		popq	%r13
 1017              		.cfi_def_cfa_offset 8
 1018 00b8 C3       		ret
 1019              		.cfi_endproc
 1020              	.LFE492:
 1022              		.section	.text.unlikely._ZL14xbgr_converterPKhPhii
 1023              	.LCOLDE8:
 1024              		.section	.text._ZL14xbgr_converterPKhPhii
 1025              	.LHOTE8:
 1026              		.section	.text.unlikely._ZL14xrgb_converterPKhPhii,"ax",@progbits
 1027              	.LCOLDB9:
 1028              		.section	.text._ZL14xrgb_converterPKhPhii,"ax",@progbits
 1029              	.LHOTB9:
 1030              		.p2align 4,,15
 1032              	_ZL14xrgb_converterPKhPhii:
 1033              	.LFB493:
 1034              		.loc 1 315 0
 1035              		.cfi_startproc
 1036              	.LVL135:
 1037              		.loc 1 316 0
 1038 0000 89D0     		movl	%edx, %eax
 1039              		.loc 1 315 0
 1040 0002 4154     		pushq	%r12
 1041              		.cfi_def_cfa_offset 16
 1042              		.cfi_offset 12, -16
 1043 0004 55       		pushq	%rbp
 1044              		.cfi_def_cfa_offset 24
 1045              		.cfi_offset 6, -24
 1046              		.loc 1 316 0
 1047 0005 C1E81F   		shrl	$31, %eax
 1048              		.loc 1 315 0
 1049 0008 53       		pushq	%rbx
 1050              		.cfi_def_cfa_offset 32
 1051              		.cfi_offset 3, -32
 1052              		.loc 1 316 0
 1053 0009 01D0     		addl	%edx, %eax
 1054 000b D1F8     		sarl	%eax
 1055              	.LVL136:
 1056              	.LBB42:
 1057 000d 85C0     		testl	%eax, %eax
 1058 000f 0F848100 		je	.L84
 1058      0000
 1059 0015 448D60FF 		leal	-1(%rax), %r12d
 1060 0019 4863C9   		movslq	%ecx, %rcx
 1061 001c 4989F3   		movq	%rsi, %r11
 1062 001f 488D1C09 		leaq	(%rcx,%rcx), %rbx
 1063 0023 4989FA   		movq	%rdi, %r10
 1064 0026 4801F9   		addq	%rdi, %rcx
 1065              	.LVL137:
 1066 0029 4A8D6CE6 		leaq	8(%rsi,%r12,8), %rbp
 1066      08
 1067              	.LVL138:
 1068 002e 6690     		.p2align 4,,10
 1069              		.p2align 3
 1070              	.L85:
 1071              	.LBB43:
 1072              		.loc 1 316 0 is_stmt 0 discriminator 2
 1073 0030 0FB601   		movzbl	(%rcx), %eax
 1074 0033 4983C308 		addq	$8, %r11
 1075              	.LVL139:
 1076 0037 C1E010   		sall	$16, %eax
 1077 003a 4189C0   		movl	%eax, %r8d
 1078 003d 0FB64101 		movzbl	1(%rcx), %eax
 1079 0041 C1E008   		sall	$8, %eax
 1080 0044 4401C0   		addl	%r8d, %eax
 1081 0047 440FB641 		movzbl	2(%rcx), %r8d
 1081      02
 1082 004c 4801D9   		addq	%rbx, %rcx
 1083 004f 4401C0   		addl	%r8d, %eax
 1084 0052 450FB602 		movzbl	(%r10), %r8d
 1085              	.LVL140:
 1086 0056 48C1E020 		salq	$32, %rax
 1087 005a 4589C1   		movl	%r8d, %r9d
 1088 005d 450FB642 		movzbl	1(%r10), %r8d
 1088      01
 1089              	.LVL141:
 1090 0062 41C1E110 		sall	$16, %r9d
 1091              	.LVL142:
 1092 0066 41C1E008 		sall	$8, %r8d
 1093              	.LVL143:
 1094 006a 4501C8   		addl	%r9d, %r8d
 1095 006d 450FB64A 		movzbl	2(%r10), %r9d
 1095      02
 1096 0072 4901DA   		addq	%rbx, %r10
 1097              	.LVL144:
 1098 0075 4501C8   		addl	%r9d, %r8d
 1099 0078 4D63C0   		movslq	%r8d, %r8
 1100 007b 4C09C0   		orq	%r8, %rax
 1101              	.LBE43:
 1102 007e 4939EB   		cmpq	%rbp, %r11
 1103              	.LBB44:
 1104 0081 498943F8 		movq	%rax, -8(%r11)
 1105              	.LBE44:
 1106 0085 75A9     		jne	.L85
 1107 0087 4983C401 		addq	$1, %r12
 1108 008b 4A8D34E6 		leaq	(%rsi,%r12,8), %rsi
 1109              	.LVL145:
 1110 008f 4C0FAFE3 		imulq	%rbx, %r12
 1111 0093 4C01E7   		addq	%r12, %rdi
 1112              	.LVL146:
 1113              	.L84:
 1114              	.LBE42:
 1115              		.loc 1 316 0 discriminator 3
 1116 0096 83E201   		andl	$1, %edx
 1117              	.LVL147:
 1118 0099 741A     		je	.L83
 1119              	.LVL148:
 1120              		.loc 1 316 0 discriminator 5
 1121 009b 0FB617   		movzbl	(%rdi), %edx
 1122 009e 0FB64701 		movzbl	1(%rdi), %eax
 1123 00a2 C1E210   		sall	$16, %edx
 1124 00a5 C1E008   		sall	$8, %eax
 1125 00a8 01C2     		addl	%eax, %edx
 1126 00aa 0FB64702 		movzbl	2(%rdi), %eax
 1127 00ae 01D0     		addl	%edx, %eax
 1128 00b0 4898     		cltq
 1129 00b2 488906   		movq	%rax, (%rsi)
 1130              	.LVL149:
 1131              	.L83:
 1132              		.loc 1 317 0 is_stmt 1
 1133 00b5 5B       		popq	%rbx
 1134              		.cfi_def_cfa_offset 24
 1135 00b6 5D       		popq	%rbp
 1136              		.cfi_def_cfa_offset 16
 1137 00b7 415C     		popq	%r12
 1138              		.cfi_def_cfa_offset 8
 1139 00b9 C3       		ret
 1140              		.cfi_endproc
 1141              	.LFE493:
 1143              		.section	.text.unlikely._ZL14xrgb_converterPKhPhii
 1144              	.LCOLDE9:
 1145              		.section	.text._ZL14xrgb_converterPKhPhii
 1146              	.LHOTE9:
 1147              		.section	.text.unlikely._ZL21argb_premul_converterPKhPhii,"ax",@progbits
 1148              	.LCOLDB10:
 1149              		.section	.text._ZL21argb_premul_converterPKhPhii,"ax",@progbits
 1150              	.LHOTB10:
 1151              		.p2align 4,,15
 1153              	_ZL21argb_premul_converterPKhPhii:
 1154              	.LFB494:
 1155              		.loc 1 319 0
 1156              		.cfi_startproc
 1157              	.LVL150:
 1158              		.loc 1 320 0
 1159 0000 89D0     		movl	%edx, %eax
 1160              		.loc 1 319 0
 1161 0002 4156     		pushq	%r14
 1162              		.cfi_def_cfa_offset 16
 1163              		.cfi_offset 14, -16
 1164 0004 4155     		pushq	%r13
 1165              		.cfi_def_cfa_offset 24
 1166              		.cfi_offset 13, -24
 1167              		.loc 1 320 0
 1168 0006 C1E81F   		shrl	$31, %eax
 1169              		.loc 1 319 0
 1170 0009 4154     		pushq	%r12
 1171              		.cfi_def_cfa_offset 32
 1172              		.cfi_offset 12, -32
 1173 000b 55       		pushq	%rbp
 1174              		.cfi_def_cfa_offset 40
 1175              		.cfi_offset 6, -40
 1176              		.loc 1 320 0
 1177 000c 01D0     		addl	%edx, %eax
 1178              		.loc 1 319 0
 1179 000e 53       		pushq	%rbx
 1180              		.cfi_def_cfa_offset 48
 1181              		.cfi_offset 3, -48
 1182              		.loc 1 320 0
 1183 000f D1F8     		sarl	%eax
 1184              	.LVL151:
 1185              	.LBB45:
 1186 0011 85C0     		testl	%eax, %eax
 1187 0013 0F843701 		je	.L96
 1187      0000
 1188 0019 448D60FF 		leal	-1(%rax), %r12d
 1189 001d 4863C9   		movslq	%ecx, %rcx
 1190 0020 4989F3   		movq	%rsi, %r11
 1191 0023 488D1C09 		leaq	(%rcx,%rcx), %rbx
 1192 0027 4989FA   		movq	%rdi, %r10
 1193 002a 4801F9   		addq	%rdi, %rcx
 1194              	.LVL152:
 1195 002d 4A8D6CE6 		leaq	8(%rsi,%r12,8), %rbp
 1195      08
 1196              	.LVL153:
 1197              		.p2align 4,,10
 1198 0032 660F1F44 		.p2align 3
 1198      0000
 1199              	.L97:
 1200              	.LBB46:
 1201              		.loc 1 320 0 is_stmt 0 discriminator 2
 1202 0038 440FB649 		movzbl	3(%rcx), %r9d
 1202      03
 1203 003d 0FB64102 		movzbl	2(%rcx), %eax
 1204 0041 4983C308 		addq	$8, %r11
 1205              	.LVL154:
 1206 0045 450FB642 		movzbl	3(%r10), %r8d
 1206      03
 1207              	.LVL155:
 1208 004a 410FAFC1 		imull	%r9d, %eax
 1209 004e 4589CD   		movl	%r9d, %r13d
 1210 0051 41C1E518 		sall	$24, %r13d
 1211 0055 4C63F0   		movslq	%eax, %r14
 1212 0058 4969C681 		imulq	$-2139062143, %r14, %rax
 1212      808080
 1213 005f 48C1E820 		shrq	$32, %rax
 1214 0063 4401F0   		addl	%r14d, %eax
 1215 0066 C1F807   		sarl	$7, %eax
 1216 0069 4101C5   		addl	%eax, %r13d
 1217 006c 0FB601   		movzbl	(%rcx), %eax
 1218 006f 410FAFC1 		imull	%r9d, %eax
 1219 0073 4898     		cltq
 1220 0075 4989C6   		movq	%rax, %r14
 1221 0078 4869C081 		imulq	$-2139062143, %rax, %rax
 1221      808080
 1222 007f 48C1E820 		shrq	$32, %rax
 1223 0083 4401F0   		addl	%r14d, %eax
 1224 0086 440FB671 		movzbl	1(%rcx), %r14d
 1224      01
 1225 008b C1F807   		sarl	$7, %eax
 1226 008e C1E010   		sall	$16, %eax
 1227 0091 4401E8   		addl	%r13d, %eax
 1228 0094 450FAFF1 		imull	%r9d, %r14d
 1229 0098 4D63EE   		movslq	%r14d, %r13
 1230 009b 4D69CD81 		imulq	$-2139062143, %r13, %r9
 1230      808080
 1231 00a2 49C1E920 		shrq	$32, %r9
 1232 00a6 478D0C0E 		leal	(%r14,%r9), %r9d
 1233 00aa 41C1F907 		sarl	$7, %r9d
 1234 00ae 41C1E108 		sall	$8, %r9d
 1235 00b2 468D2C08 		leal	(%rax,%r9), %r13d
 1236 00b6 410FB642 		movzbl	2(%r10), %eax
 1236      02
 1237              	.LVL156:
 1238 00bb 4589C1   		movl	%r8d, %r9d
 1239 00be 41C1E118 		sall	$24, %r9d
 1240 00c2 49C1E520 		salq	$32, %r13
 1241 00c6 410FAFC0 		imull	%r8d, %eax
 1242              	.LVL157:
 1243 00ca 4C63F0   		movslq	%eax, %r14
 1244 00cd 4969C681 		imulq	$-2139062143, %r14, %rax
 1244      808080
 1245 00d4 48C1E820 		shrq	$32, %rax
 1246 00d8 4401F0   		addl	%r14d, %eax
 1247 00db C1F807   		sarl	$7, %eax
 1248 00de 4101C1   		addl	%eax, %r9d
 1249 00e1 410FB602 		movzbl	(%r10), %eax
 1250              	.LVL158:
 1251 00e5 410FAFC0 		imull	%r8d, %eax
 1252              	.LVL159:
 1253 00e9 4898     		cltq
 1254 00eb 4989C6   		movq	%rax, %r14
 1255 00ee 4869C081 		imulq	$-2139062143, %rax, %rax
 1255      808080
 1256 00f5 48C1E820 		shrq	$32, %rax
 1257 00f9 4401F0   		addl	%r14d, %eax
 1258 00fc 450FB672 		movzbl	1(%r10), %r14d
 1258      01
 1259 0101 C1F807   		sarl	$7, %eax
 1260 0104 4901DA   		addq	%rbx, %r10
 1261              	.LVL160:
 1262 0107 4801D9   		addq	%rbx, %rcx
 1263 010a C1E010   		sall	$16, %eax
 1264 010d 4401C8   		addl	%r9d, %eax
 1265 0110 450FAFF0 		imull	%r8d, %r14d
 1266 0114 4D63CE   		movslq	%r14d, %r9
 1267 0117 4D69C181 		imulq	$-2139062143, %r9, %r8
 1267      808080
 1268 011e 49C1E820 		shrq	$32, %r8
 1269 0122 478D0406 		leal	(%r14,%r8), %r8d
 1270 0126 41C1F807 		sarl	$7, %r8d
 1271 012a 41C1E008 		sall	$8, %r8d
 1272 012e 4401C0   		addl	%r8d, %eax
 1273 0131 4909C5   		orq	%rax, %r13
 1274              	.LBE46:
 1275 0134 4939EB   		cmpq	%rbp, %r11
 1276              	.LBB47:
 1277 0137 4D896BF8 		movq	%r13, -8(%r11)
 1278              	.LBE47:
 1279 013b 0F85F7FE 		jne	.L97
 1279      FFFF
 1280 0141 4983C401 		addq	$1, %r12
 1281 0145 4A8D34E6 		leaq	(%rsi,%r12,8), %rsi
 1282              	.LVL161:
 1283 0149 4C0FAFE3 		imulq	%rbx, %r12
 1284 014d 4C01E7   		addq	%r12, %rdi
 1285              	.LVL162:
 1286              	.L96:
 1287              	.LBE45:
 1288              		.loc 1 320 0 discriminator 3
 1289 0150 83E201   		andl	$1, %edx
 1290              	.LVL163:
 1291 0153 7476     		je	.L95
 1292              	.LVL164:
 1293              		.loc 1 320 0 discriminator 5
 1294 0155 0FB65702 		movzbl	2(%rdi), %edx
 1295 0159 440FB647 		movzbl	3(%rdi), %r8d
 1295      03
 1296 015e 89D0     		movl	%edx, %eax
 1297 0160 410FAFC0 		imull	%r8d, %eax
 1298 0164 4863C8   		movslq	%eax, %rcx
 1299 0167 4869D181 		imulq	$-2139062143, %rcx, %rdx
 1299      808080
 1300 016e 0FB60F   		movzbl	(%rdi), %ecx
 1301 0171 48C1EA20 		shrq	$32, %rdx
 1302 0175 410FAFC8 		imull	%r8d, %ecx
 1303 0179 01C2     		addl	%eax, %edx
 1304 017b 4489C0   		movl	%r8d, %eax
 1305 017e C1FA07   		sarl	$7, %edx
 1306 0181 C1E018   		sall	$24, %eax
 1307 0184 01D0     		addl	%edx, %eax
 1308 0186 4863D1   		movslq	%ecx, %rdx
 1309 0189 4869CA81 		imulq	$-2139062143, %rdx, %rcx
 1309      808080
 1310 0190 4989D1   		movq	%rdx, %r9
 1311 0193 4889CA   		movq	%rcx, %rdx
 1312 0196 48C1EA20 		shrq	$32, %rdx
 1313 019a 418D0C11 		leal	(%r9,%rdx), %ecx
 1314 019e C1F907   		sarl	$7, %ecx
 1315 01a1 C1E110   		sall	$16, %ecx
 1316 01a4 01C1     		addl	%eax, %ecx
 1317 01a6 0FB64701 		movzbl	1(%rdi), %eax
 1318 01aa 440FAFC0 		imull	%eax, %r8d
 1319 01ae 4963D0   		movslq	%r8d, %rdx
 1320 01b1 4869C281 		imulq	$-2139062143, %rdx, %rax
 1320      808080
 1321 01b8 48C1E820 		shrq	$32, %rax
 1322 01bc 418D0400 		leal	(%r8,%rax), %eax
 1323 01c0 C1F807   		sarl	$7, %eax
 1324 01c3 C1E008   		sall	$8, %eax
 1325 01c6 01C8     		addl	%ecx, %eax
 1326 01c8 488906   		movq	%rax, (%rsi)
 1327              	.LVL165:
 1328              	.L95:
 1329              		.loc 1 324 0 is_stmt 1
 1330 01cb 5B       		popq	%rbx
 1331              		.cfi_def_cfa_offset 40
 1332 01cc 5D       		popq	%rbp
 1333              		.cfi_def_cfa_offset 32
 1334 01cd 415C     		popq	%r12
 1335              		.cfi_def_cfa_offset 24
 1336 01cf 415D     		popq	%r13
 1337              		.cfi_def_cfa_offset 16
 1338 01d1 415E     		popq	%r14
 1339              		.cfi_def_cfa_offset 8
 1340 01d3 C3       		ret
 1341              		.cfi_endproc
 1342              	.LFE494:
 1344              		.section	.text.unlikely._ZL21argb_premul_converterPKhPhii
 1345              	.LCOLDE10:
 1346              		.section	.text._ZL21argb_premul_converterPKhPhii
 1347              	.LHOTE10:
 1348              		.section	.text.unlikely._ZL14bgrx_converterPKhPhii,"ax",@progbits
 1349              	.LCOLDB11:
 1350              		.section	.text._ZL14bgrx_converterPKhPhii,"ax",@progbits
 1351              	.LHOTB11:
 1352              		.p2align 4,,15
 1354              	_ZL14bgrx_converterPKhPhii:
 1355              	.LFB495:
 1356              		.loc 1 326 0
 1357              		.cfi_startproc
 1358              	.LVL166:
 1359              		.loc 1 327 0
 1360 0000 89D0     		movl	%edx, %eax
 1361              		.loc 1 326 0
 1362 0002 4154     		pushq	%r12
 1363              		.cfi_def_cfa_offset 16
 1364              		.cfi_offset 12, -16
 1365 0004 55       		pushq	%rbp
 1366              		.cfi_def_cfa_offset 24
 1367              		.cfi_offset 6, -24
 1368              		.loc 1 327 0
 1369 0005 C1E81F   		shrl	$31, %eax
 1370              		.loc 1 326 0
 1371 0008 53       		pushq	%rbx
 1372              		.cfi_def_cfa_offset 32
 1373              		.cfi_offset 3, -32
 1374              		.loc 1 327 0
 1375 0009 01D0     		addl	%edx, %eax
 1376 000b D1F8     		sarl	%eax
 1377              	.LVL167:
 1378              	.LBB48:
 1379 000d 85C0     		testl	%eax, %eax
 1380 000f 0F848000 		je	.L108
 1380      0000
 1381 0015 8D68FF   		leal	-1(%rax), %ebp
 1382 0018 4863C9   		movslq	%ecx, %rcx
 1383 001b 4989F2   		movq	%rsi, %r10
 1384 001e 4C8D1C09 		leaq	(%rcx,%rcx), %r11
 1385 0022 4989F9   		movq	%rdi, %r9
 1386 0025 4801F9   		addq	%rdi, %rcx
 1387              	.LVL168:
 1388 0028 488D5CEE 		leaq	8(%rsi,%rbp,8), %rbx
 1388      08
 1389              	.LVL169:
 1390 002d 0F1F00   		.p2align 4,,10
 1391              		.p2align 3
 1392              	.L109:
 1393              	.LBB49:
 1394              		.loc 1 327 0 is_stmt 0 discriminator 2
 1395 0030 440FB601 		movzbl	(%rcx), %r8d
 1396 0034 0FB64101 		movzbl	1(%rcx), %eax
 1397 0038 4983C208 		addq	$8, %r10
 1398              	.LVL170:
 1399 003c 450FB621 		movzbl	(%r9), %r12d
 1400              	.LVL171:
 1401 0040 C1E010   		sall	$16, %eax
 1402 0043 41C1E008 		sall	$8, %r8d
 1403 0047 4101C0   		addl	%eax, %r8d
 1404 004a 0FB64102 		movzbl	2(%rcx), %eax
 1405 004e 41C1E408 		sall	$8, %r12d
 1406              	.LVL172:
 1407 0052 4C01D9   		addq	%r11, %rcx
 1408 0055 C1E018   		sall	$24, %eax
 1409 0058 4401C0   		addl	%r8d, %eax
 1410 005b 450FB641 		movzbl	1(%r9), %r8d
 1410      01
 1411 0060 48C1E020 		salq	$32, %rax
 1412 0064 41C1E010 		sall	$16, %r8d
 1413 0068 4501C4   		addl	%r8d, %r12d
 1414 006b 450FB641 		movzbl	2(%r9), %r8d
 1414      02
 1415              	.LVL173:
 1416 0070 4D01D9   		addq	%r11, %r9
 1417              	.LVL174:
 1418 0073 41C1E018 		sall	$24, %r8d
 1419 0077 4501E0   		addl	%r12d, %r8d
 1420 007a 4C09C0   		orq	%r8, %rax
 1421              	.LBE49:
 1422 007d 4939DA   		cmpq	%rbx, %r10
 1423              	.LBB50:
 1424 0080 498942F8 		movq	%rax, -8(%r10)
 1425              	.LBE50:
 1426 0084 75AA     		jne	.L109
 1427 0086 4883C501 		addq	$1, %rbp
 1428 008a 488D34EE 		leaq	(%rsi,%rbp,8), %rsi
 1429              	.LVL175:
 1430 008e 490FAFEB 		imulq	%r11, %rbp
 1431 0092 4801EF   		addq	%rbp, %rdi
 1432              	.LVL176:
 1433              	.L108:
 1434              	.LBE48:
 1435              		.loc 1 327 0 discriminator 3
 1436 0095 83E201   		andl	$1, %edx
 1437              	.LVL177:
 1438 0098 741B     		je	.L107
 1439              	.LVL178:
 1440              		.loc 1 327 0 discriminator 5
 1441 009a 0FB617   		movzbl	(%rdi), %edx
 1442 009d 0FB64701 		movzbl	1(%rdi), %eax
 1443 00a1 C1E208   		sall	$8, %edx
 1444 00a4 C1E010   		sall	$16, %eax
 1445 00a7 01C2     		addl	%eax, %edx
 1446 00a9 0FB64702 		movzbl	2(%rdi), %eax
 1447 00ad C1E018   		sall	$24, %eax
 1448 00b0 01D0     		addl	%edx, %eax
 1449 00b2 488906   		movq	%rax, (%rsi)
 1450              	.LVL179:
 1451              	.L107:
 1452              		.loc 1 328 0 is_stmt 1
 1453 00b5 5B       		popq	%rbx
 1454              		.cfi_def_cfa_offset 24
 1455 00b6 5D       		popq	%rbp
 1456              		.cfi_def_cfa_offset 16
 1457 00b7 415C     		popq	%r12
 1458              		.cfi_def_cfa_offset 8
 1459 00b9 C3       		ret
 1460              		.cfi_endproc
 1461              	.LFE495:
 1463              		.section	.text.unlikely._ZL14bgrx_converterPKhPhii
 1464              	.LCOLDE11:
 1465              		.section	.text._ZL14bgrx_converterPKhPhii
 1466              	.LHOTE11:
 1467              		.section	.text.unlikely._ZL14rrrx_converterPKhPhii,"ax",@progbits
 1468              	.LCOLDB12:
 1469              		.section	.text._ZL14rrrx_converterPKhPhii,"ax",@progbits
 1470              	.LHOTB12:
 1471              		.p2align 4,,15
 1473              	_ZL14rrrx_converterPKhPhii:
 1474              	.LFB496:
 1475              		.loc 1 330 0
 1476              		.cfi_startproc
 1477              	.LVL180:
 1478              		.loc 1 331 0
 1479 0000 89D0     		movl	%edx, %eax
 1480              		.loc 1 330 0
 1481 0002 55       		pushq	%rbp
 1482              		.cfi_def_cfa_offset 16
 1483              		.cfi_offset 6, -16
 1484 0003 53       		pushq	%rbx
 1485              		.cfi_def_cfa_offset 24
 1486              		.cfi_offset 3, -24
 1487              		.loc 1 331 0
 1488 0004 C1E81F   		shrl	$31, %eax
 1489 0007 01D0     		addl	%edx, %eax
 1490 0009 D1F8     		sarl	%eax
 1491              	.LVL181:
 1492              	.LBB51:
 1493 000b 85C0     		testl	%eax, %eax
 1494 000d 7458     		je	.L120
 1495 000f 8D68FF   		leal	-1(%rax), %ebp
 1496 0012 4863C9   		movslq	%ecx, %rcx
 1497 0015 4989F2   		movq	%rsi, %r10
 1498 0018 4C8D1C09 		leaq	(%rcx,%rcx), %r11
 1499 001c 4989F9   		movq	%rdi, %r9
 1500 001f 488D5CEE 		leaq	8(%rsi,%rbp,8), %rbx
 1500      08
 1501              	.LVL182:
 1502              		.p2align 4,,10
 1503 0024 0F1F4000 		.p2align 3
 1504              	.L121:
 1505              	.LBB52:
 1506              		.loc 1 331 0 is_stmt 0 discriminator 2
 1507 0028 410FB604 		movzbl	(%r9,%rcx), %eax
 1507      09
 1508 002d 450FB601 		movzbl	(%r9), %r8d
 1509 0031 4983C208 		addq	$8, %r10
 1510              	.LVL183:
 1511 0035 4D01D9   		addq	%r11, %r9
 1512              	.LVL184:
 1513 0038 69C00001 		imull	$16843008, %eax, %eax
 1513      0101
 1514 003e 4569C000 		imull	$16843008, %r8d, %r8d
 1514      010101
 1515              	.LVL185:
 1516 0045 48C1E020 		salq	$32, %rax
 1517 0049 4C09C0   		orq	%r8, %rax
 1518              	.LBE52:
 1519 004c 4C39D3   		cmpq	%r10, %rbx
 1520              	.LBB53:
 1521 004f 498942F8 		movq	%rax, -8(%r10)
 1522              	.LBE53:
 1523 0053 75D3     		jne	.L121
 1524 0055 4883C501 		addq	$1, %rbp
 1525 0059 4801C9   		addq	%rcx, %rcx
 1526              	.LVL186:
 1527 005c 480FAFCD 		imulq	%rbp, %rcx
 1528 0060 488D34EE 		leaq	(%rsi,%rbp,8), %rsi
 1529              	.LVL187:
 1530 0064 4801CF   		addq	%rcx, %rdi
 1531              	.LVL188:
 1532              	.L120:
 1533              	.LBE51:
 1534              		.loc 1 331 0 discriminator 3
 1535 0067 83E201   		andl	$1, %edx
 1536              	.LVL189:
 1537 006a 740C     		je	.L119
 1538              	.LVL190:
 1539              		.loc 1 331 0 discriminator 5
 1540 006c 0FB607   		movzbl	(%rdi), %eax
 1541 006f 69C00001 		imull	$16843008, %eax, %eax
 1541      0101
 1542 0075 488906   		movq	%rax, (%rsi)
 1543              	.LVL191:
 1544              	.L119:
 1545              		.loc 1 332 0 is_stmt 1
 1546 0078 5B       		popq	%rbx
 1547              		.cfi_def_cfa_offset 16
 1548 0079 5D       		popq	%rbp
 1549              		.cfi_def_cfa_offset 8
 1550 007a C3       		ret
 1551              		.cfi_endproc
 1552              	.LFE496:
 1554              		.section	.text.unlikely._ZL14rrrx_converterPKhPhii
 1555              	.LCOLDE12:
 1556              		.section	.text._ZL14rrrx_converterPKhPhii
 1557              	.LHOTE12:
 1558              		.section	.text.unlikely._ZL14xrrr_converterPKhPhii,"ax",@progbits
 1559              	.LCOLDB13:
 1560              		.section	.text._ZL14xrrr_converterPKhPhii,"ax",@progbits
 1561              	.LHOTB13:
 1562              		.p2align 4,,15
 1564              	_ZL14xrrr_converterPKhPhii:
 1565              	.LFB497:
 1566              		.loc 1 334 0
 1567              		.cfi_startproc
 1568              	.LVL192:
 1569              		.loc 1 335 0
 1570 0000 89D0     		movl	%edx, %eax
 1571              		.loc 1 334 0
 1572 0002 55       		pushq	%rbp
 1573              		.cfi_def_cfa_offset 16
 1574              		.cfi_offset 6, -16
 1575 0003 53       		pushq	%rbx
 1576              		.cfi_def_cfa_offset 24
 1577              		.cfi_offset 3, -24
 1578              		.loc 1 335 0
 1579 0004 C1E81F   		shrl	$31, %eax
 1580 0007 01D0     		addl	%edx, %eax
 1581 0009 D1F8     		sarl	%eax
 1582              	.LVL193:
 1583              	.LBB54:
 1584 000b 85C0     		testl	%eax, %eax
 1585 000d 7458     		je	.L132
 1586 000f 8D68FF   		leal	-1(%rax), %ebp
 1587 0012 4863C9   		movslq	%ecx, %rcx
 1588 0015 4989F2   		movq	%rsi, %r10
 1589 0018 4C8D1C09 		leaq	(%rcx,%rcx), %r11
 1590 001c 4989F9   		movq	%rdi, %r9
 1591 001f 488D5CEE 		leaq	8(%rsi,%rbp,8), %rbx
 1591      08
 1592              	.LVL194:
 1593              		.p2align 4,,10
 1594 0024 0F1F4000 		.p2align 3
 1595              	.L133:
 1596              	.LBB55:
 1597              		.loc 1 335 0 is_stmt 0 discriminator 2
 1598 0028 410FB604 		movzbl	(%r9,%rcx), %eax
 1598      09
 1599 002d 450FB601 		movzbl	(%r9), %r8d
 1600 0031 4983C208 		addq	$8, %r10
 1601              	.LVL195:
 1602 0035 4D01D9   		addq	%r11, %r9
 1603              	.LVL196:
 1604 0038 69C00101 		imull	$65793, %eax, %eax
 1604      0100
 1605 003e 4569C001 		imull	$65793, %r8d, %r8d
 1605      010100
 1606              	.LVL197:
 1607 0045 48C1E020 		salq	$32, %rax
 1608 0049 4C09C0   		orq	%r8, %rax
 1609              	.LBE55:
 1610 004c 4C39D3   		cmpq	%r10, %rbx
 1611              	.LBB56:
 1612 004f 498942F8 		movq	%rax, -8(%r10)
 1613              	.LBE56:
 1614 0053 75D3     		jne	.L133
 1615 0055 4883C501 		addq	$1, %rbp
 1616 0059 4801C9   		addq	%rcx, %rcx
 1617              	.LVL198:
 1618 005c 480FAFCD 		imulq	%rbp, %rcx
 1619 0060 488D34EE 		leaq	(%rsi,%rbp,8), %rsi
 1620              	.LVL199:
 1621 0064 4801CF   		addq	%rcx, %rdi
 1622              	.LVL200:
 1623              	.L132:
 1624              	.LBE54:
 1625              		.loc 1 335 0 discriminator 3
 1626 0067 83E201   		andl	$1, %edx
 1627              	.LVL201:
 1628 006a 740C     		je	.L131
 1629              	.LVL202:
 1630              		.loc 1 335 0 discriminator 5
 1631 006c 0FB607   		movzbl	(%rdi), %eax
 1632 006f 69C00101 		imull	$65793, %eax, %eax
 1632      0100
 1633 0075 488906   		movq	%rax, (%rsi)
 1634              	.LVL203:
 1635              	.L131:
 1636              		.loc 1 336 0 is_stmt 1
 1637 0078 5B       		popq	%rbx
 1638              		.cfi_def_cfa_offset 16
 1639 0079 5D       		popq	%rbp
 1640              		.cfi_def_cfa_offset 8
 1641 007a C3       		ret
 1642              		.cfi_endproc
 1643              	.LFE497:
 1645              		.section	.text.unlikely._ZL14xrrr_converterPKhPhii
 1646              	.LCOLDE13:
 1647              		.section	.text._ZL14xrrr_converterPKhPhii
 1648              	.LHOTE13:
 1649              		.section	.text.unlikely._ZL17color32_converterPKhPhii,"ax",@progbits
 1650              	.LCOLDB14:
 1651              		.section	.text._ZL17color32_converterPKhPhii,"ax",@progbits
 1652              	.LHOTB14:
 1653              		.p2align 4,,15
 1655              	_ZL17color32_converterPKhPhii:
 1656              	.LFB498:
 1657              		.loc 1 339 0
 1658              		.cfi_startproc
 1659              	.LVL204:
 1660              		.loc 1 340 0
 1661 0000 89D0     		movl	%edx, %eax
 1662              		.loc 1 339 0
 1663 0002 4156     		pushq	%r14
 1664              		.cfi_def_cfa_offset 16
 1665              		.cfi_offset 14, -16
 1666 0004 4155     		pushq	%r13
 1667              		.cfi_def_cfa_offset 24
 1668              		.cfi_offset 13, -24
 1669              		.loc 1 340 0
 1670 0006 C1E81F   		shrl	$31, %eax
 1671              		.loc 1 339 0
 1672 0009 4154     		pushq	%r12
 1673              		.cfi_def_cfa_offset 32
 1674              		.cfi_offset 12, -32
 1675 000b 55       		pushq	%rbp
 1676              		.cfi_def_cfa_offset 40
 1677              		.cfi_offset 6, -40
 1678              		.loc 1 340 0
 1679 000c 01D0     		addl	%edx, %eax
 1680              		.loc 1 339 0
 1681 000e 53       		pushq	%rbx
 1682              		.cfi_def_cfa_offset 48
 1683              		.cfi_offset 3, -48
 1684              		.loc 1 340 0
 1685 000f D1F8     		sarl	%eax
 1686              	.LVL205:
 1687              	.LBB57:
 1688 0011 85C0     		testl	%eax, %eax
 1689 0013 0F84BE00 		je	.L144
 1689      0000
 1690 0019 8D68FF   		leal	-1(%rax), %ebp
 1691 001c 4C63C1   		movslq	%ecx, %r8
 1692 001f 4989F2   		movq	%rsi, %r10
 1693 0022 4F8D1C00 		leaq	(%r8,%r8), %r11
 1694 0026 4989F9   		movq	%rdi, %r9
 1695 0029 4901F8   		addq	%rdi, %r8
 1696 002c 488D5CEE 		leaq	8(%rsi,%rbp,8), %rbx
 1696      08
 1697              	.LVL206:
 1698              		.p2align 4,,10
 1699 0031 0F1F8000 		.p2align 3
 1699      000000
 1700              	.L145:
 1701              	.LBB58:
 1702              		.loc 1 340 0 is_stmt 0 discriminator 2
 1703 0038 450FB628 		movzbl	(%r8), %r13d
 1704 003c 0FB60D00 		movzbl	fl_redshift(%rip), %ecx
 1704      000000
 1705 0043 4983C208 		addq	$8, %r10
 1706              	.LVL207:
 1707 0047 410FB640 		movzbl	1(%r8), %eax
 1707      01
 1708 004c 4589EE   		movl	%r13d, %r14d
 1709 004f 41D3E6   		sall	%cl, %r14d
 1710 0052 0FB60D00 		movzbl	fl_greenshift(%rip), %ecx
 1710      000000
 1711 0059 D3E0     		sall	%cl, %eax
 1712 005b 0FB60D00 		movzbl	fl_blueshift(%rip), %ecx
 1712      000000
 1713 0062 458D2C06 		leal	(%r14,%rax), %r13d
 1714 0066 410FB640 		movzbl	2(%r8), %eax
 1714      02
 1715 006b 4D01D8   		addq	%r11, %r8
 1716 006e D3E0     		sall	%cl, %eax
 1717 0070 0FB60D00 		movzbl	fl_redshift(%rip), %ecx
 1717      000000
 1718 0077 4401E8   		addl	%r13d, %eax
 1719 007a 450FB629 		movzbl	(%r9), %r13d
 1720              	.LVL208:
 1721 007e 4989C4   		movq	%rax, %r12
 1722 0081 49C1E420 		salq	$32, %r12
 1723 0085 4489E8   		movl	%r13d, %eax
 1724 0088 450FB669 		movzbl	1(%r9), %r13d
 1724      01
 1725              	.LVL209:
 1726 008d D3E0     		sall	%cl, %eax
 1727              	.LVL210:
 1728 008f 0FB60D00 		movzbl	fl_greenshift(%rip), %ecx
 1728      000000
 1729 0096 41D3E5   		sall	%cl, %r13d
 1730 0099 0FB60D00 		movzbl	fl_blueshift(%rip), %ecx
 1730      000000
 1731 00a0 4101C5   		addl	%eax, %r13d
 1732 00a3 410FB641 		movzbl	2(%r9), %eax
 1732      02
 1733              	.LVL211:
 1734 00a8 4D01D9   		addq	%r11, %r9
 1735              	.LVL212:
 1736 00ab D3E0     		sall	%cl, %eax
 1737 00ad 89C1     		movl	%eax, %ecx
 1738 00af 4C89E0   		movq	%r12, %rax
 1739 00b2 4401E9   		addl	%r13d, %ecx
 1740 00b5 4863C9   		movslq	%ecx, %rcx
 1741 00b8 4809C8   		orq	%rcx, %rax
 1742              	.LBE58:
 1743 00bb 4939DA   		cmpq	%rbx, %r10
 1744              	.LBB59:
 1745 00be 498942F8 		movq	%rax, -8(%r10)
 1746              	.LBE59:
 1747 00c2 0F8570FF 		jne	.L145
 1747      FFFF
 1748 00c8 4883C501 		addq	$1, %rbp
 1749 00cc 488D34EE 		leaq	(%rsi,%rbp,8), %rsi
 1750              	.LVL213:
 1751 00d0 490FAFEB 		imulq	%r11, %rbp
 1752 00d4 4801EF   		addq	%rbp, %rdi
 1753              	.LVL214:
 1754              	.L144:
 1755              	.LBE57:
 1756              		.loc 1 340 0 discriminator 3
 1757 00d7 83E201   		andl	$1, %edx
 1758              	.LVL215:
 1759 00da 742C     		je	.L143
 1760              	.LVL216:
 1761              		.loc 1 340 0 discriminator 5
 1762 00dc 0FB617   		movzbl	(%rdi), %edx
 1763 00df 8B0D0000 		movl	fl_redshift(%rip), %ecx
 1763      0000
 1764 00e5 0FB64701 		movzbl	1(%rdi), %eax
 1765 00e9 D3E2     		sall	%cl, %edx
 1766 00eb 8B0D0000 		movl	fl_greenshift(%rip), %ecx
 1766      0000
 1767 00f1 D3E0     		sall	%cl, %eax
 1768 00f3 8B0D0000 		movl	fl_blueshift(%rip), %ecx
 1768      0000
 1769 00f9 01C2     		addl	%eax, %edx
 1770 00fb 0FB64702 		movzbl	2(%rdi), %eax
 1771 00ff D3E0     		sall	%cl, %eax
 1772 0101 01D0     		addl	%edx, %eax
 1773 0103 4898     		cltq
 1774 0105 488906   		movq	%rax, (%rsi)
 1775              	.LVL217:
 1776              	.L143:
 1777              		.loc 1 342 0 is_stmt 1
 1778 0108 5B       		popq	%rbx
 1779              		.cfi_def_cfa_offset 40
 1780 0109 5D       		popq	%rbp
 1781              		.cfi_def_cfa_offset 32
 1782 010a 415C     		popq	%r12
 1783              		.cfi_def_cfa_offset 24
 1784 010c 415D     		popq	%r13
 1785              		.cfi_def_cfa_offset 16
 1786 010e 415E     		popq	%r14
 1787              		.cfi_def_cfa_offset 8
 1788 0110 C3       		ret
 1789              		.cfi_endproc
 1790              	.LFE498:
 1792              		.section	.text.unlikely._ZL17color32_converterPKhPhii
 1793              	.LCOLDE14:
 1794              		.section	.text._ZL17color32_converterPKhPhii
 1795              	.LHOTE14:
 1796              		.section	.text.unlikely._ZL16mono32_converterPKhPhii,"ax",@progbits
 1797              	.LCOLDB15:
 1798              		.section	.text._ZL16mono32_converterPKhPhii,"ax",@progbits
 1799              	.LHOTB15:
 1800              		.p2align 4,,15
 1802              	_ZL16mono32_converterPKhPhii:
 1803              	.LFB499:
 1804              		.loc 1 345 0
 1805              		.cfi_startproc
 1806              	.LVL218:
 1807              		.loc 1 346 0
 1808 0000 89D0     		movl	%edx, %eax
 1809              		.loc 1 345 0
 1810 0002 4157     		pushq	%r15
 1811              		.cfi_def_cfa_offset 16
 1812              		.cfi_offset 15, -16
 1813 0004 4156     		pushq	%r14
 1814              		.cfi_def_cfa_offset 24
 1815              		.cfi_offset 14, -24
 1816              		.loc 1 346 0
 1817 0006 C1E81F   		shrl	$31, %eax
 1818              		.loc 1 345 0
 1819 0009 4155     		pushq	%r13
 1820              		.cfi_def_cfa_offset 32
 1821              		.cfi_offset 13, -32
 1822 000b 4154     		pushq	%r12
 1823              		.cfi_def_cfa_offset 40
 1824              		.cfi_offset 12, -40
 1825              		.loc 1 346 0
 1826 000d 01D0     		addl	%edx, %eax
 1827              		.loc 1 345 0
 1828 000f 55       		pushq	%rbp
 1829              		.cfi_def_cfa_offset 48
 1830              		.cfi_offset 6, -48
 1831 0010 53       		pushq	%rbx
 1832              		.cfi_def_cfa_offset 56
 1833              		.cfi_offset 3, -56
 1834              		.loc 1 346 0
 1835 0011 D1F8     		sarl	%eax
 1836              	.LVL219:
 1837              	.LBB60:
 1838 0013 85C0     		testl	%eax, %eax
 1839 0015 0F84A200 		je	.L156
 1839      0000
 1840 001b 448D68FF 		leal	-1(%rax), %r13d
 1841 001f 4863D9   		movslq	%ecx, %rbx
 1842 0022 4989F3   		movq	%rsi, %r11
 1843 0025 488D2C1B 		leaq	(%rbx,%rbx), %rbp
 1844 0029 4989FA   		movq	%rdi, %r10
 1845 002c 4989FE   		movq	%rdi, %r14
 1846 002f 4E8D64EE 		leaq	8(%rsi,%r13,8), %r12
 1846      08
 1847              	.LVL220:
 1848              		.p2align 4,,10
 1849 0034 0F1F4000 		.p2align 3
 1850              	.L157:
 1851              	.LBB61:
 1852              		.loc 1 346 0 is_stmt 0 discriminator 2
 1853 0038 410FB63C 		movzbl	(%r10,%rbx), %edi
 1853      1A
 1854 003d 0FB60D00 		movzbl	fl_redshift(%rip), %ecx
 1854      000000
 1855 0044 4983C308 		addq	$8, %r11
 1856              	.LVL221:
 1857 0048 448B0D00 		movl	fl_blueshift(%rip), %r9d
 1857      000000
 1858 004f 410FB602 		movzbl	(%r10), %eax
 1859              	.LVL222:
 1860 0053 4901EA   		addq	%rbp, %r10
 1861              	.LVL223:
 1862 0056 4189F8   		movl	%edi, %r8d
 1863 0059 4189FF   		movl	%edi, %r15d
 1864 005c 41D3E0   		sall	%cl, %r8d
 1865 005f 0FB60D00 		movzbl	fl_greenshift(%rip), %ecx
 1865      000000
 1866 0066 41D3E7   		sall	%cl, %r15d
 1867 0069 4489C9   		movl	%r9d, %ecx
 1868 006c D3E7     		sall	%cl, %edi
 1869 006e 0FB60D00 		movzbl	fl_redshift(%rip), %ecx
 1869      000000
 1870 0075 4501F8   		addl	%r15d, %r8d
 1871 0078 4101F8   		addl	%edi, %r8d
 1872 007b 89C7     		movl	%eax, %edi
 1873 007d 4189C7   		movl	%eax, %r15d
 1874 0080 49C1E020 		salq	$32, %r8
 1875 0084 D3E7     		sall	%cl, %edi
 1876 0086 0FB60D00 		movzbl	fl_greenshift(%rip), %ecx
 1876      000000
 1877 008d 41D3E7   		sall	%cl, %r15d
 1878 0090 4489C9   		movl	%r9d, %ecx
 1879 0093 4401FF   		addl	%r15d, %edi
 1880 0096 D3E0     		sall	%cl, %eax
 1881              	.LVL224:
 1882 0098 01F8     		addl	%edi, %eax
 1883 009a 4898     		cltq
 1884 009c 4909C0   		orq	%rax, %r8
 1885              	.LBE61:
 1886 009f 4D39E3   		cmpq	%r12, %r11
 1887              	.LBB62:
 1888 00a2 4D8943F8 		movq	%r8, -8(%r11)
 1889              	.LBE62:
 1890 00a6 7590     		jne	.L157
 1891 00a8 4983C501 		addq	$1, %r13
 1892 00ac 4801DB   		addq	%rbx, %rbx
 1893              	.LVL225:
 1894 00af 4C89F7   		movq	%r14, %rdi
 1895 00b2 490FAFDD 		imulq	%r13, %rbx
 1896 00b6 4A8D34EE 		leaq	(%rsi,%r13,8), %rsi
 1897              	.LVL226:
 1898 00ba 4801DF   		addq	%rbx, %rdi
 1899              	.LVL227:
 1900              	.L156:
 1901              	.LBE60:
 1902              		.loc 1 346 0 discriminator 3
 1903 00bd 83E201   		andl	$1, %edx
 1904              	.LVL228:
 1905 00c0 7428     		je	.L155
 1906              	.LVL229:
 1907              		.loc 1 346 0 discriminator 5
 1908 00c2 0FB607   		movzbl	(%rdi), %eax
 1909 00c5 8B0D0000 		movl	fl_redshift(%rip), %ecx
 1909      0000
 1910 00cb 89C7     		movl	%eax, %edi
 1911 00cd 89C2     		movl	%eax, %edx
 1912 00cf D3E7     		sall	%cl, %edi
 1913 00d1 8B0D0000 		movl	fl_greenshift(%rip), %ecx
 1913      0000
 1914 00d7 D3E2     		sall	%cl, %edx
 1915 00d9 8B0D0000 		movl	fl_blueshift(%rip), %ecx
 1915      0000
 1916 00df 01FA     		addl	%edi, %edx
 1917 00e1 D3E0     		sall	%cl, %eax
 1918 00e3 01D0     		addl	%edx, %eax
 1919 00e5 4898     		cltq
 1920 00e7 488906   		movq	%rax, (%rsi)
 1921              	.LVL230:
 1922              	.L155:
 1923              		.loc 1 348 0 is_stmt 1
 1924 00ea 5B       		popq	%rbx
 1925              		.cfi_def_cfa_offset 48
 1926 00eb 5D       		popq	%rbp
 1927              		.cfi_def_cfa_offset 40
 1928 00ec 415C     		popq	%r12
 1929              		.cfi_def_cfa_offset 32
 1930 00ee 415D     		popq	%r13
 1931              		.cfi_def_cfa_offset 24
 1932 00f0 415E     		popq	%r14
 1933              		.cfi_def_cfa_offset 16
 1934 00f2 415F     		popq	%r15
 1935              		.cfi_def_cfa_offset 8
 1936 00f4 C3       		ret
 1937              		.cfi_endproc
 1938              	.LFE499:
 1940              		.section	.text.unlikely._ZL16mono32_converterPKhPhii
 1941              	.LCOLDE15:
 1942              		.section	.text._ZL16mono32_converterPKhPhii
 1943              	.LHOTE15:
 1944              		.section	.rodata.str1.1,"aMS",@progbits,1
 1945              	.LC16:
 1946 0000 43616E27 		.string	"Can't do scanline_pad of %d"
 1946      7420646F 
 1946      20736361 
 1946      6E6C696E 
 1946      655F7061 
 1947              		.section	.rodata.str1.8,"aMS",@progbits,1
 1948              		.align 8
 1949              	.LC17:
 1950 0000 43616E27 		.string	"Can't do %d bits_per_pixel colormap"
 1950      7420646F 
 1950      20256420 
 1950      62697473 
 1950      5F706572 
 1951 0024 00000000 		.align 8
 1952              	.LC18:
 1953 0028 43616E27 		.string	"Can't do arbitrary 24bit color"
 1953      7420646F 
 1953      20617262 
 1953      69747261 
 1953      72792032 
 1954              		.section	.rodata.str1.1
 1955              	.LC19:
 1956 001c 43616E27 		.string	"Can't do %d bits_per_pixel"
 1956      7420646F 
 1956      20256420 
 1956      62697473 
 1956      5F706572 
 1957              		.section	.text.unlikely._ZL7innardsPKhiiiiiiiPFvPviiiPhES1_b,"ax",@progbits
 1958              	.LCOLDB20:
 1959              		.section	.text._ZL7innardsPKhiiiiiiiPFvPviiiPhES1_b,"ax",@progbits
 1960              	.LHOTB20:
 1961              		.p2align 4,,15
 1963              	_ZL7innardsPKhiiiiiiiPFvPviiiPhES1_b:
 1964              	.LFB501:
 1965              		.loc 1 463 0
 1966              		.cfi_startproc
 1967              	.LVL231:
 1968 0000 4157     		pushq	%r15
 1969              		.cfi_def_cfa_offset 16
 1970              		.cfi_offset 15, -16
 1971 0002 4156     		pushq	%r14
 1972              		.cfi_def_cfa_offset 24
 1973              		.cfi_offset 14, -24
 1974 0004 4155     		pushq	%r13
 1975              		.cfi_def_cfa_offset 32
 1976              		.cfi_offset 13, -32
 1977 0006 4154     		pushq	%r12
 1978              		.cfi_def_cfa_offset 40
 1979              		.cfi_offset 12, -40
 1980 0008 4589CC   		movl	%r9d, %r12d
 1981 000b 55       		pushq	%rbp
 1982              		.cfi_def_cfa_offset 48
 1983              		.cfi_offset 6, -48
 1984 000c 53       		pushq	%rbx
 1985              		.cfi_def_cfa_offset 56
 1986              		.cfi_offset 3, -56
 1987 000d 89CD     		movl	%ecx, %ebp
 1988 000f 4889FB   		movq	%rdi, %rbx
 1989 0012 4883EC78 		subq	$120, %rsp
 1990              		.cfi_def_cfa_offset 176
 1991              		.loc 1 463 0
 1992 0016 488B8424 		movq	192(%rsp), %rax
 1992      C0000000 
 1993 001e 448BB424 		movl	176(%rsp), %r14d
 1993      B0000000 
 1994 0026 89742424 		movl	%esi, 36(%rsp)
 1995 002a 89542428 		movl	%edx, 40(%rsp)
 1996 002e 48894424 		movq	%rax, 48(%rsp)
 1996      30
 1997 0033 488B8424 		movq	200(%rsp), %rax
 1997      C8000000 
 1998 003b 48894424 		movq	%rax, 8(%rsp)
 1998      08
 1999 0040 8B8424D0 		movl	208(%rsp), %eax
 1999      000000
 2000 0047 8944242C 		movl	%eax, 44(%rsp)
 2001 004b 64488B04 		movq	%fs:40, %rax
 2001      25280000 
 2001      00
 2002 0054 48894424 		movq	%rax, 104(%rsp)
 2002      68
 2003 0059 31C0     		xorl	%eax, %eax
 2004              		.loc 1 464 0
 2005 005b 4585F6   		testl	%r14d, %r14d
 2006 005e 7515     		jne	.L168
 2007              		.loc 1 464 0 is_stmt 0 discriminator 1
 2008 0060 4489C8   		movl	%r9d, %eax
 2009 0063 C1F81F   		sarl	$31, %eax
 2010 0066 89C2     		movl	%eax, %edx
 2011              	.LVL232:
 2012 0068 4431CA   		xorl	%r9d, %edx
 2013 006b 29C2     		subl	%eax, %edx
 2014 006d 89D0     		movl	%edx, %eax
 2015 006f 0FAFC1   		imull	%ecx, %eax
 2016 0072 4189C6   		movl	%eax, %r14d
 2017              	.LVL233:
 2018              	.L168:
 2019              	.LBB77:
 2020              	.LBB78:
 2021              		.file 2 "fltk-1.3.4-1/FL/fl_draw.H"
   1:fltk-1.3.4-1/FL/fl_draw.H **** //
   2:fltk-1.3.4-1/FL/fl_draw.H **** // "$Id: fl_draw.H 11977 2016-09-25 11:07:06Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/fl_draw.H **** //
   4:fltk-1.3.4-1/FL/fl_draw.H **** // Portable drawing function header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/fl_draw.H **** //
   6:fltk-1.3.4-1/FL/fl_draw.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/fl_draw.H **** //
   8:fltk-1.3.4-1/FL/fl_draw.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/fl_draw.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/fl_draw.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/fl_draw.H **** //
  12:fltk-1.3.4-1/FL/fl_draw.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/fl_draw.H **** //
  14:fltk-1.3.4-1/FL/fl_draw.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/fl_draw.H **** //
  16:fltk-1.3.4-1/FL/fl_draw.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/fl_draw.H **** //
  18:fltk-1.3.4-1/FL/fl_draw.H **** 
  19:fltk-1.3.4-1/FL/fl_draw.H **** /**
  20:fltk-1.3.4-1/FL/fl_draw.H ****   \file fl_draw.H
  21:fltk-1.3.4-1/FL/fl_draw.H ****   \brief utility header to pull drawing functions together
  22:fltk-1.3.4-1/FL/fl_draw.H **** */
  23:fltk-1.3.4-1/FL/fl_draw.H **** 
  24:fltk-1.3.4-1/FL/fl_draw.H **** #ifndef fl_draw_H
  25:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_draw_H
  26:fltk-1.3.4-1/FL/fl_draw.H **** 
  27:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/x.H>	      // for Fl_Region
  28:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Enumerations.H>  // for the color names
  29:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Window.H>     // for fl_set_spot()
  30:fltk-1.3.4-1/FL/fl_draw.H **** #include <FL/Fl_Device.H>     // for fl_graphics_driver
  31:fltk-1.3.4-1/FL/fl_draw.H **** 
  32:fltk-1.3.4-1/FL/fl_draw.H **** // Image class...
  33:fltk-1.3.4-1/FL/fl_draw.H **** class Fl_Image;
  34:fltk-1.3.4-1/FL/fl_draw.H **** 
  35:fltk-1.3.4-1/FL/fl_draw.H **** // Label flags...
  36:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT extern char fl_draw_shortcut;
  37:fltk-1.3.4-1/FL/fl_draw.H **** 
  38:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_attributes
  39:fltk-1.3.4-1/FL/fl_draw.H ****     @{
  40:fltk-1.3.4-1/FL/fl_draw.H **** */
  41:fltk-1.3.4-1/FL/fl_draw.H **** 
  42:fltk-1.3.4-1/FL/fl_draw.H **** // Colors:
  43:fltk-1.3.4-1/FL/fl_draw.H **** /**
  44:fltk-1.3.4-1/FL/fl_draw.H ****  Sets the color for all subsequent drawing operations.
  45:fltk-1.3.4-1/FL/fl_draw.H ****  For colormapped displays, a color cell will be allocated out of
  46:fltk-1.3.4-1/FL/fl_draw.H ****  \p fl_colormap the first time you use a color. If the colormap fills up
  47:fltk-1.3.4-1/FL/fl_draw.H ****  then a least-squares algorithm is used to find the closest color.
  48:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
  49:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
  50:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] c color 
  51:fltk-1.3.4-1/FL/fl_draw.H ****  */
  52:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(Fl_Color c) {fl_graphics_driver->color(c); } // select indexed color
  53:fltk-1.3.4-1/FL/fl_draw.H **** /** for back compatibility - use fl_color(Fl_Color c) instead */
  54:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_color(int c) {fl_color((Fl_Color)c);}
  55:fltk-1.3.4-1/FL/fl_draw.H **** /**
  56:fltk-1.3.4-1/FL/fl_draw.H ****  Sets the color for all subsequent drawing operations.
  57:fltk-1.3.4-1/FL/fl_draw.H ****  The closest possible match to the RGB color is used.
  58:fltk-1.3.4-1/FL/fl_draw.H ****  The RGB color is used directly on TrueColor displays.
  59:fltk-1.3.4-1/FL/fl_draw.H ****  For colormap visuals the nearest index in the gray
  60:fltk-1.3.4-1/FL/fl_draw.H ****  ramp or color cube is used.
  61:fltk-1.3.4-1/FL/fl_draw.H ****  If no valid graphical context (fl_gc) is available,
  62:fltk-1.3.4-1/FL/fl_draw.H ****  the foreground is not set for the current window.
  63:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r,g,b color components
  64:fltk-1.3.4-1/FL/fl_draw.H ****  */
  65:fltk-1.3.4-1/FL/fl_draw.H **** inline void	fl_color(uchar r, uchar g, uchar b) {fl_graphics_driver->color(r,g,b); } // select actu
  66:fltk-1.3.4-1/FL/fl_draw.H **** /**
  67:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the last fl_color() that was set.
  68:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used for state save/restore.
  69:fltk-1.3.4-1/FL/fl_draw.H **** */
  70:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Color fl_color() {return fl_graphics_driver->color();}
  71:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
  72:fltk-1.3.4-1/FL/fl_draw.H **** 
  73:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup fl_drawings
  74:fltk-1.3.4-1/FL/fl_draw.H ****     @{
  75:fltk-1.3.4-1/FL/fl_draw.H **** */
  76:fltk-1.3.4-1/FL/fl_draw.H **** // clip:
  77:fltk-1.3.4-1/FL/fl_draw.H **** /**
  78:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes this
  79:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack.
  80:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size
  81:fltk-1.3.4-1/FL/fl_draw.H ****  */
  82:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_clip(int x, int y, int w, int h) {fl_graphics_driver->push_clip(x,y,w,h); }
  83:fltk-1.3.4-1/FL/fl_draw.H **** /**
  84:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the current clip region with a rectangle and pushes this
  85:fltk-1.3.4-1/FL/fl_draw.H ****  new region onto the stack (deprecated).
  86:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size
  87:fltk-1.3.4-1/FL/fl_draw.H ****  \deprecated
  88:fltk-1.3.4-1/FL/fl_draw.H ****    fl_clip(int, int, int, int) is deprecated and will be removed from future releases.
  89:fltk-1.3.4-1/FL/fl_draw.H ****    Please use fl_push_clip(int x, int y, int w, int h) instead.
  90:fltk-1.3.4-1/FL/fl_draw.H ****  */
  91:fltk-1.3.4-1/FL/fl_draw.H **** #define fl_clip fl_push_clip
  92:fltk-1.3.4-1/FL/fl_draw.H **** /**
  93:fltk-1.3.4-1/FL/fl_draw.H ****  Pushes an empty clip region onto the stack so nothing will be clipped.
  94:fltk-1.3.4-1/FL/fl_draw.H ****  */
  95:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_no_clip() {fl_graphics_driver->push_no_clip(); }
  96:fltk-1.3.4-1/FL/fl_draw.H **** /**
  97:fltk-1.3.4-1/FL/fl_draw.H ****  Restores the previous clip region.
  98:fltk-1.3.4-1/FL/fl_draw.H ****  
  99:fltk-1.3.4-1/FL/fl_draw.H ****  You must call fl_pop_clip() once for every time you call fl_push_clip().
 100:fltk-1.3.4-1/FL/fl_draw.H ****  Unpredictable results may occur if the clip stack is not empty when
 101:fltk-1.3.4-1/FL/fl_draw.H ****  you return to FLTK.
 102:fltk-1.3.4-1/FL/fl_draw.H ****  */
 103:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pop_clip() {fl_graphics_driver->pop_clip(); }
 104:fltk-1.3.4-1/FL/fl_draw.H **** /**
 105:fltk-1.3.4-1/FL/fl_draw.H ****  Does the rectangle intersect the current clip region?
 106:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size of rectangle
 107:fltk-1.3.4-1/FL/fl_draw.H ****  \returns non-zero if any of the rectangle intersects the current clip
 108:fltk-1.3.4-1/FL/fl_draw.H ****  region. If this returns 0 you don't have to draw the object.
 109:fltk-1.3.4-1/FL/fl_draw.H ****  
 110:fltk-1.3.4-1/FL/fl_draw.H ****  \note
 111:fltk-1.3.4-1/FL/fl_draw.H ****  Under X this returns 2 if the rectangle is partially clipped, 
 112:fltk-1.3.4-1/FL/fl_draw.H ****  and 1 if it is entirely inside the clip region.
 113:fltk-1.3.4-1/FL/fl_draw.H ****  */
 114:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_not_clipped(int x, int y, int w, int h) {return fl_graphics_driver->not_clipped(x,y,w
 115:fltk-1.3.4-1/FL/fl_draw.H **** /**
 116:fltk-1.3.4-1/FL/fl_draw.H ****  Intersects the rectangle with the current clip region and returns the
 117:fltk-1.3.4-1/FL/fl_draw.H ****  bounding box of the result.
 118:fltk-1.3.4-1/FL/fl_draw.H ****  
 119:fltk-1.3.4-1/FL/fl_draw.H ****  Returns non-zero if the resulting rectangle is different to the original.
 120:fltk-1.3.4-1/FL/fl_draw.H ****  This can be used to limit the necessary drawing to a rectangle.
 121:fltk-1.3.4-1/FL/fl_draw.H ****  \p W and \p H are set to zero if the rectangle is completely outside the region.
 122:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h position and size of rectangle
 123:fltk-1.3.4-1/FL/fl_draw.H ****  \param[out] X,Y,W,H position and size of resulting bounding box.
 124:fltk-1.3.4-1/FL/fl_draw.H ****  \returns Non-zero if the resulting rectangle is different to the original.
 125:fltk-1.3.4-1/FL/fl_draw.H ****  */
 126:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_clip_box(int x , int y, int w, int h, int& X, int& Y, int& W, int& H) 
 127:fltk-1.3.4-1/FL/fl_draw.H ****   {return fl_graphics_driver->clip_box(x,y,w,h,X,Y,W,H); }
 2022              		.loc 2 127 0 is_stmt 1
 2023 0075 4883EC08 		subq	$8, %rsp
 2024              		.cfi_def_cfa_offset 184
 2025 0079 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2025      000000
 2026              	.LVL234:
 2027 0080 89E9     		movl	%ebp, %ecx
 2028              	.LVL235:
 2029 0082 488D5424 		leaq	108(%rsp), %rdx
 2029      6C
 2030              	.LVL236:
 2031 0087 488B07   		movq	(%rdi), %rax
 2032 008a 52       		pushq	%rdx
 2033              		.cfi_def_cfa_offset 192
 2034 008b 488D5424 		leaq	112(%rsp), %rdx
 2034      70
 2035              	.LVL237:
 2036 0090 52       		pushq	%rdx
 2037              		.cfi_def_cfa_offset 200
 2038              	.LVL238:
 2039 0091 488D5424 		leaq	116(%rsp), %rdx
 2039      74
 2040              	.LVL239:
 2041 0096 52       		pushq	%rdx
 2042              		.cfi_def_cfa_offset 208
 2043              	.LVL240:
 2044 0097 448B6C24 		movl	72(%rsp), %r13d
 2044      48
 2045 009c 448B7C24 		movl	68(%rsp), %r15d
 2045      44
 2046 00a1 4C8D4C24 		leaq	120(%rsp), %r9
 2046      78
 2047              	.LVL241:
 2048 00a6 4489EA   		movl	%r13d, %edx
 2049              	.LVL242:
 2050 00a9 4489FE   		movl	%r15d, %esi
 2051              	.LVL243:
 2052 00ac FF905801 		call	*344(%rax)
 2052      0000
 2053              	.LVL244:
 2054              	.LBE78:
 2055              	.LBE77:
 2056              		.loc 1 468 0
 2057 00b2 8B8C2480 		movl	128(%rsp), %ecx
 2057      000000
 2058 00b9 4883C420 		addq	$32, %rsp
 2059              		.cfi_def_cfa_offset 176
 2060 00bd 85C9     		testl	%ecx, %ecx
 2061 00bf 0F8E4302 		jle	.L167
 2061      0000
 2062              		.loc 1 468 0 is_stmt 0 discriminator 1
 2063 00c5 8B542464 		movl	100(%rsp), %edx
 2064 00c9 85D2     		testl	%edx, %edx
 2065 00cb 0F8E3702 		jle	.L167
 2065      0000
 2066              		.loc 1 472 0 is_stmt 1
 2067 00d1 8B050000 		movl	_ZL15bytes_per_pixel(%rip), %eax
 2067      0000
 2068              		.loc 1 469 0
 2069 00d7 44297C24 		subl	%r15d, 88(%rsp)
 2069      58
 2070              		.loc 1 470 0
 2071 00dc 44296C24 		subl	%r13d, 92(%rsp)
 2071      5C
 2072              		.loc 1 472 0
 2073 00e1 85C0     		testl	%eax, %eax
 2074 00e3 89442438 		movl	%eax, 56(%rsp)
 2075 00e7 0F846504 		je	.L308
 2075      0000
 2076              	.L306:
 2077 00ed 4C8B2D00 		movq	_ZL9converter(%rip), %r13
 2077      000000
 2078              	.L171:
 2079              	.LVL245:
 2080              		.loc 1 480 0
 2081 00f4 8BBC24B8 		movl	184(%rsp), %edi
 2081      000000
 2082              		.loc 1 474 0
 2083 00fb 488B0500 		movq	fl_gc(%rip), %rax
 2083      000000
 2084              		.loc 1 476 0
 2085 0102 890D0000 		movl	%ecx, _ZL2xi(%rip)
 2085      0000
 2086              		.loc 1 477 0
 2087 0108 89150000 		movl	%edx, _ZL2xi+4(%rip)
 2087      0000
 2088              		.loc 1 480 0
 2089 010e 85FF     		testl	%edi, %edi
 2090 0110 4C0F452D 		cmovne	_ZL14mono_converter(%rip), %r13
 2090      00000000 
 2091              		.loc 1 481 0
 2092 0118 807C242C 		cmpb	$0, 44(%rsp)
 2092      00
 2093              		.loc 1 474 0
 2094 011d 48894424 		movq	%rax, 64(%rsp)
 2094      40
 2095              	.LVL246:
 2096              		.loc 1 481 0
 2097 0122 0F850302 		jne	.L309
 2097      0000
 2098              	.LBB79:
 2099              		.loc 1 512 0 discriminator 1
 2100 0128 4183FC03 		cmpl	$3, %r12d
 2101 012c 400F94C6 		sete	%sil
 2102 0130 4885DB   		testq	%rbx, %rbx
 2103 0133 0F95C0   		setne	%al
 2104              	.LVL247:
 2105 0136 4084C6   		testb	%al, %sil
 2106              		.loc 1 513 0 discriminator 1
 2107 0139 8B050000 		movl	_ZL12scanline_add(%rip), %eax
 2107      0000
 2108              		.loc 1 512 0 discriminator 1
 2109 013f 740D     		je	.L202
 2110 0141 4981FD00 		cmpq	$_ZL13rgb_converterPKhPhii, %r13
 2110      000000
 2111 0148 0F845307 		je	.L310
 2111      0000
 2112              	.L202:
 2113              		.loc 1 512 0 is_stmt 0
 2114 014e 89542420 		movl	%edx, 32(%rsp)
 2115 0152 8B742438 		movl	56(%rsp), %esi
 2116 0156 E9270200 		jmp	.L203
 2116      00
 2117              	.LVL248:
 2118              	.L211:
 2119              	.LBB80:
 2120              	.LBB81:
 2121              	.LBB82:
 2122              		.loc 1 547 0 is_stmt 1
 2123 015b 89E8     		movl	%ebp, %eax
 2124 015d 48BE0000 		movabsq	$1143914305352105984, %rsi
 2124      00000000 
 2124      E00F
 2125 0167 48C7C7FF 		movq	$-1, %rdi
 2125      FFFFFF
 2126 016e 410FAFC4 		imull	%r12d, %eax
 2127 0172 48894C24 		movq	%rcx, 16(%rsp)
 2127      10
 2128 0177 4898     		cltq
 2129 0179 4883C007 		addq	$7, %rax
 2130 017d 48C1E803 		shrq	$3, %rax
 2131 0181 488D14C5 		leaq	0(,%rax,8), %rdx
 2131      00000000 
 2132 0189 4839F0   		cmpq	%rsi, %rax
 2133 018c 480F46FA 		cmovbe	%rdx, %rdi
 2134 0190 E8000000 		call	_Znam
 2134      00
 2135              	.LVL249:
 2136 0195 48894424 		movq	%rax, 72(%rsp)
 2136      48
 2137              	.LVL250:
 2138              	.LBB83:
 2139              		.loc 1 548 0
 2140 019a 8B442464 		movl	100(%rsp), %eax
 2141              	.LVL251:
 2142 019e 488B4C24 		movq	16(%rsp), %rcx
 2142      10
 2143 01a3 85C0     		testl	%eax, %eax
 2144 01a5 0F8E1001 		jle	.L224
 2144      0000
 2145 01ab 8B542420 		movl	32(%rsp), %edx
 2146 01af 4C8D34CD 		leaq	0(,%rcx,8), %r14
 2146      00000000 
 2147              	.LVL252:
 2148 01b7 44896424 		movl	%r12d, 24(%rsp)
 2148      18
 2149 01bc 488B6C24 		movq	72(%rsp), %rbp
 2149      48
 2150              	.LVL253:
 2151 01c1 4C897424 		movq	%r14, 16(%rsp)
 2151      10
 2152 01c6 85D2     		testl	%edx, %edx
 2153 01c8 0F9E4424 		setle	63(%rsp)
 2153      3F
 2154 01cd 4531FF   		xorl	%r15d, %r15d
 2155              	.LVL254:
 2156 01d0 4589FC   		movl	%r15d, %r12d
 2157              	.LVL255:
 2158 01d3 4C8B7C24 		movq	48(%rsp), %r15
 2158      30
 2159              	.LVL256:
 2160 01d8 0F1F8400 		.p2align 4,,10
 2160      00000000 
 2161              		.p2align 3
 2162              	.L225:
 2163              	.LBB84:
 2164              		.loc 1 551 0
 2165 01e0 4139C4   		cmpl	%eax, %r12d
 2166              		.loc 1 549 0
 2167 01e3 488B1D00 		movq	_ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE6buffer(%rip), %rbx
 2167      000000
 2168              	.LVL257:
 2169              		.loc 1 551 0
 2170 01ea 0F8D5805 		jge	.L239
 2170      0000
 2171 01f0 807C243F 		cmpb	$0, 63(%rsp)
 2171      00
 2172 01f5 0F854D05 		jne	.L239
 2172      0000
 2173              		.loc 1 551 0 is_stmt 0 discriminator 3
 2174 01fb 4531F6   		xorl	%r14d, %r14d
 2175 01fe 4489E0   		movl	%r12d, %eax
 2176 0201 4589F4   		movl	%r14d, %r12d
 2177              	.LVL258:
 2178 0204 4189C6   		movl	%eax, %r14d
 2179 0207 EB0E     		jmp	.L222
 2180              	.LVL259:
 2181 0209 0F1F8000 		.p2align 4,,10
 2181      000000
 2182              		.p2align 3
 2183              	.L311:
 2184 0210 44396424 		cmpl	%r12d, 32(%rsp)
 2184      20
 2185 0215 7E3F     		jle	.L241
 2186              	.LVL260:
 2187              	.L222:
 2188              		.loc 1 552 0 is_stmt 1 discriminator 3
 2189 0217 8B54245C 		movl	92(%rsp), %edx
 2190 021b 4989E8   		movq	%rbp, %r8
 2191 021e 8B4C2460 		movl	96(%rsp), %ecx
 2192 0222 8B742458 		movl	88(%rsp), %esi
 2193 0226 488B7C24 		movq	8(%rsp), %rdi
 2193      08
 2194              		.loc 1 551 0 discriminator 3
 2195 022b 4183C401 		addl	$1, %r12d
 2196              	.LVL261:
 2197              		.loc 1 552 0 discriminator 3
 2198 022f 4401F2   		addl	%r14d, %edx
 2199              		.loc 1 551 0 discriminator 3
 2200 0232 4183C601 		addl	$1, %r14d
 2201              	.LVL262:
 2202              		.loc 1 552 0 discriminator 3
 2203 0236 41FFD7   		call	*%r15
 2204              	.LVL263:
 2205              		.loc 1 553 0 discriminator 3
 2206 0239 4889DE   		movq	%rbx, %rsi
 2207 023c 8B4C2418 		movl	24(%rsp), %ecx
 2208 0240 8B542460 		movl	96(%rsp), %edx
 2209 0244 4889EF   		movq	%rbp, %rdi
 2210 0247 41FFD5   		call	*%r13
 2211              	.LVL264:
 2212              		.loc 1 554 0 discriminator 3
 2213 024a 48035C24 		addq	16(%rsp), %rbx
 2213      10
 2214              	.LVL265:
 2215              		.loc 1 551 0 discriminator 3
 2216 024f 44397424 		cmpl	%r14d, 100(%rsp)
 2216      64
 2217 0254 7FBA     		jg	.L311
 2218              	.L241:
 2219 0256 4489F0   		movl	%r14d, %eax
 2220 0259 4589E6   		movl	%r12d, %r14d
 2221              	.LVL266:
 2222 025c 4489F2   		movl	%r14d, %edx
 2223 025f 4189C4   		movl	%eax, %r12d
 2224              	.LVL267:
 2225              	.L221:
 2226              		.loc 1 556 0
 2227 0262 52       		pushq	%rdx
 2228              		.cfi_def_cfa_offset 184
 2229 0263 8B542468 		movl	104(%rsp), %edx
 2230 0267 4531C9   		xorl	%r9d, %r9d
 2231 026a 488B3500 		movq	fl_window(%rip), %rsi
 2231      000000
 2232 0271 488B3D00 		movq	fl_display(%rip), %rdi
 2232      000000
 2233 0278 4531C0   		xorl	%r8d, %r8d
 2234 027b B9000000 		movl	$_ZL2xi, %ecx
 2234      00
 2235 0280 52       		pushq	%rdx
 2236              		.cfi_def_cfa_offset 192
 2237 0281 8B542438 		movl	56(%rsp), %edx
 2238 0285 0354246C 		addl	108(%rsp), %edx
 2239 0289 4401E2   		addl	%r12d, %edx
 2240 028c 89D0     		movl	%edx, %eax
 2241 028e 488B1500 		movq	fl_gc(%rip), %rdx
 2241      000000
 2242 0295 4429F0   		subl	%r14d, %eax
 2243 0298 50       		pushq	%rax
 2244              		.cfi_def_cfa_offset 200
 2245 0299 8B44243C 		movl	60(%rsp), %eax
 2246 029d 03442470 		addl	112(%rsp), %eax
 2247 02a1 50       		pushq	%rax
 2248              		.cfi_def_cfa_offset 208
 2249 02a2 E8000000 		call	XPutImage
 2249      00
 2250              	.LVL268:
 2251              	.LBE84:
 2252              		.loc 1 548 0
 2253 02a7 8B842484 		movl	132(%rsp), %eax
 2253      000000
 2254 02ae 4883C420 		addq	$32, %rsp
 2255              		.cfi_def_cfa_offset 176
 2256 02b2 4439E0   		cmpl	%r12d, %eax
 2257 02b5 0F8F25FF 		jg	.L225
 2257      FFFF
 2258              	.LVL269:
 2259              	.L224:
 2260              	.LBE83:
 2261              		.loc 1 559 0
 2262 02bb 488B7C24 		movq	72(%rsp), %rdi
 2262      48
 2263 02c0 E8000000 		call	_ZdaPv
 2263      00
 2264              	.LVL270:
 2265              		.p2align 4,,10
 2266 02c5 0F1F00   		.p2align 3
 2267              	.L213:
 2268              	.LBE82:
 2269              	.LBE81:
 2270              	.LBE80:
 2271              	.LBE79:
 2272              		.loc 1 563 0
 2273 02c8 807C242C 		cmpb	$0, 44(%rsp)
 2273      00
 2274 02cd 7439     		je	.L167
 2275              		.loc 1 565 0
 2276 02cf 488B0500 		movq	fl_visual(%rip), %rax
 2276      000000
 2277              		.loc 1 564 0
 2278 02d6 8B742438 		movl	56(%rsp), %esi
 2279              		.loc 1 565 0
 2280 02da 8B5014   		movl	20(%rax), %edx
 2281              		.loc 1 564 0
 2282 02dd 89350000 		movl	%esi, _ZL15bytes_per_pixel(%rip)
 2282      0000
 2283              		.loc 1 565 0
 2284 02e3 89150000 		movl	%edx, _ZL2xi+40(%rip)
 2284      0000
 2285              		.loc 1 566 0
 2286 02e9 8D14F500 		leal	0(,%rsi,8), %edx
 2286      000000
 2287 02f0 89150000 		movl	%edx, _ZL2xi+48(%rip)
 2287      0000
 2288              		.loc 1 568 0
 2289 02f6 83781420 		cmpl	$32, 20(%rax)
 2290 02fa 740C     		je	.L167
 2291              		.loc 1 569 0
 2292 02fc 488B4424 		movq	64(%rsp), %rax
 2292      40
 2293 0301 48890500 		movq	%rax, fl_gc(%rip)
 2293      000000
 2294              	.LVL271:
 2295              	.L167:
 2296              		.loc 1 572 0
 2297 0308 488B4424 		movq	104(%rsp), %rax
 2297      68
 2298 030d 64483304 		xorq	%fs:40, %rax
 2298      25280000 
 2298      00
 2299 0316 0F850507 		jne	.L312
 2299      0000
 2300 031c 4883C478 		addq	$120, %rsp
 2301              		.cfi_remember_state
 2302              		.cfi_def_cfa_offset 56
 2303 0320 5B       		popq	%rbx
 2304              		.cfi_def_cfa_offset 48
 2305 0321 5D       		popq	%rbp
 2306              		.cfi_def_cfa_offset 40
 2307 0322 415C     		popq	%r12
 2308              		.cfi_def_cfa_offset 32
 2309 0324 415D     		popq	%r13
 2310              		.cfi_def_cfa_offset 24
 2311 0326 415E     		popq	%r14
 2312              		.cfi_def_cfa_offset 16
 2313 0328 415F     		popq	%r15
 2314              		.cfi_def_cfa_offset 8
 2315 032a C3       		ret
 2316              	.LVL272:
 2317              	.L309:
 2318              		.cfi_restore_state
 2319              		.loc 1 489 0
 2320 032b 488B0500 		movq	fl_visual(%rip), %rax
 2320      000000
 2321              	.LVL273:
 2322              		.loc 1 485 0
 2323 0332 C7050000 		movl	$32, _ZL2xi+40(%rip)
 2323      00002000 
 2323      0000
 2324 033c BE040000 		movl	$4, %esi
 2324      00
 2325              		.loc 1 486 0
 2326 0341 C7050000 		movl	$32, _ZL2xi+48(%rip)
 2326      00002000 
 2326      0000
 2327              		.loc 1 483 0
 2328 034b C7050000 		movl	$4, _ZL15bytes_per_pixel(%rip)
 2328      00000400 
 2328      0000
 2329              	.LVL274:
 2330              		.loc 1 489 0
 2331 0355 83781420 		cmpl	$32, 20(%rax)
 2332 0359 7417     		je	.L200
 2333              		.loc 1 490 0
 2334 035b 488B0500 		movq	_ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE4gc32(%rip), %rax
 2334      000000
 2335 0362 4885C0   		testq	%rax, %rax
 2336 0365 0F846C05 		je	.L313
 2336      0000
 2337              	.LVL275:
 2338              	.L201:
 2339              		.loc 1 492 0
 2340 036b 48890500 		movq	%rax, fl_gc(%rip)
 2340      000000
 2341              	.L200:
 2342 0372 8B050000 		movl	_ZL12scanline_add(%rip), %eax
 2342      0000
 2343 0378 89542420 		movl	%edx, 32(%rsp)
 2344 037c 41BD0000 		movl	$_ZL21argb_premul_converterPKhPhii, %r13d
 2344      0000
 2345              	.LVL276:
 2346              	.L203:
 2347              	.LBB100:
 2348              	.LBB98:
 2349              		.loc 1 518 0
 2350 0382 0FAFCE   		imull	%esi, %ecx
 2351 0385 01C8     		addl	%ecx, %eax
 2352 0387 23050000 		andl	_ZL13scanline_mask(%rip), %eax
 2352      0000
 2353 038d 4898     		cltq
 2354 038f 48C1E803 		shrq	$3, %rax
 2355              	.LBB93:
 2356              		.loc 1 522 0
 2357 0393 0FAFD0   		imull	%eax, %edx
 2358              	.LBE93:
 2359              		.loc 1 518 0
 2360 0396 4989C7   		movq	%rax, %r15
 2361              	.LVL277:
 2362              	.LBB94:
 2363              		.loc 1 523 0
 2364 0399 81FA0000 		cmpl	$262144, %edx
 2364      0400
 2365 039f 4863C2   		movslq	%edx, %rax
 2366              	.LVL278:
 2367 03a2 7E17     		jle	.L206
 2368              	.LVL279:
 2369              		.loc 1 525 0
 2370 03a4 B8000004 		movl	$262144, %eax
 2370      00
 2371 03a9 99       		cltd
 2372 03aa 41F7FF   		idivl	%r15d
 2373              		.loc 1 524 0
 2374 03ad BA000004 		movl	$262144, %edx
 2374      00
 2375              		.loc 1 525 0
 2376 03b2 89442420 		movl	%eax, 32(%rsp)
 2377              	.LVL280:
 2378 03b6 B8000004 		movl	$262144, %eax
 2378      00
 2379              	.LVL281:
 2380              	.L206:
 2381              		.loc 1 527 0
 2382 03bb 48390500 		cmpq	%rax, _ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE11buffer_size(%rip)
 2382      000000
 2383 03c2 4C8B0500 		movq	_ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE6buffer(%rip), %r8
 2383      000000
 2384 03c9 7D5C     		jge	.L208
 2385              		.loc 1 528 0
 2386 03cb 488B3D00 		movq	_ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE6buffer(%rip), %rdi
 2386      000000
 2387 03d2 4885FF   		testq	%rdi, %rdi
 2388 03d5 7417     		je	.L209
 2389 03d7 48894424 		movq	%rax, 24(%rsp)
 2389      18
 2390 03dc 89542410 		movl	%edx, 16(%rsp)
 2391              		.loc 1 528 0 is_stmt 0 discriminator 1
 2392 03e0 E8000000 		call	_ZdaPv
 2392      00
 2393              	.LVL282:
 2394 03e5 488B4424 		movq	24(%rsp), %rax
 2394      18
 2395 03ea 8B542410 		movl	16(%rsp), %edx
 2396              	.LVL283:
 2397              	.L209:
 2398              		.loc 1 530 0 is_stmt 1
 2399 03ee 4863D2   		movslq	%edx, %rdx
 2400              		.loc 1 529 0
 2401 03f1 48890500 		movq	%rax, _ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE11buffer_size(%rip)
 2401      000000
 2402              		.loc 1 530 0
 2403 03f8 48BE0000 		movabsq	$1143914305352105984, %rsi
 2403      00000000 
 2403      E00F
 2404 0402 488D04D5 		leaq	0(,%rdx,8), %rax
 2404      00000000 
 2405 040a 4839F2   		cmpq	%rsi, %rdx
 2406 040d 48C7C7FF 		movq	$-1, %rdi
 2406      FFFFFF
 2407 0414 480F46F8 		cmovbe	%rax, %rdi
 2408 0418 E8000000 		call	_Znam
 2408      00
 2409              	.LVL284:
 2410 041d 48890500 		movq	%rax, _ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE6buffer(%rip)
 2410      000000
 2411 0424 4989C0   		movq	%rax, %r8
 2412              	.L208:
 2413              	.LBE94:
 2414              		.loc 1 533 0
 2415 0427 4963CF   		movslq	%r15d, %rcx
 2416              	.LBB95:
 2417              		.loc 1 534 0
 2418 042a 4885DB   		testq	%rbx, %rbx
 2419              	.LBE95:
 2420              		.loc 1 532 0
 2421 042d 4C890500 		movq	%r8, _ZL2xi+16(%rip)
 2421      000000
 2422              		.loc 1 533 0
 2423 0434 8D04CD00 		leal	0(,%rcx,8), %eax
 2423      000000
 2424 043b 89050000 		movl	%eax, _ZL2xi+44(%rip)
 2424      0000
 2425              	.LBB96:
 2426              		.loc 1 534 0
 2427 0441 0F8414FD 		je	.L211
 2427      FFFF
 2428              	.LBB87:
 2429              		.loc 1 535 0
 2430 0447 448B5424 		movl	88(%rsp), %r10d
 2430      58
 2431 044c 8B44245C 		movl	92(%rsp), %eax
 2432 0450 450FAFD4 		imull	%r12d, %r10d
 2433 0454 410FAFC6 		imull	%r14d, %eax
 2434 0458 4101C2   		addl	%eax, %r10d
 2435              	.LBB88:
 2436              		.loc 1 536 0
 2437 045b 8B442464 		movl	100(%rsp), %eax
 2438              	.LBE88:
 2439              		.loc 1 535 0
 2440 045f 4D63D2   		movslq	%r10d, %r10
 2441 0462 4E8D3C13 		leaq	(%rbx,%r10), %r15
 2442              	.LVL285:
 2443              	.LBB91:
 2444              		.loc 1 536 0
 2445 0466 85C0     		testl	%eax, %eax
 2446 0468 0F8E5AFE 		jle	.L213
 2446      FFFF
 2447 046e 8B742420 		movl	32(%rsp), %esi
 2448 0472 4963FE   		movslq	%r14d, %rdi
 2449 0475 4C89C3   		movq	%r8, %rbx
 2450 0478 48897C24 		movq	%rdi, 16(%rsp)
 2450      10
 2451              	.LVL286:
 2452 047d 85F6     		testl	%esi, %esi
 2453 047f 488D34CD 		leaq	0(,%rcx,8), %rsi
 2453      00000000 
 2454 0487 0F9E4424 		setle	24(%rsp)
 2454      18
 2455 048c 31ED     		xorl	%ebp, %ebp
 2456              	.LVL287:
 2457              	.LBB89:
 2458              		.loc 1 539 0
 2459 048e 39C5     		cmpl	%eax, %ebp
 2460 0490 48897424 		movq	%rsi, 8(%rsp)
 2460      08
 2461 0495 0F8DB000 		jge	.L237
 2461      0000
 2462              	.LVL288:
 2463 049b 0F1F4400 		.p2align 4,,10
 2463      00
 2464              		.p2align 3
 2465              	.L315:
 2466 04a0 807C2418 		cmpb	$0, 24(%rsp)
 2466      00
 2467 04a5 0F85A000 		jne	.L237
 2467      0000
 2468 04ab 4531F6   		xorl	%r14d, %r14d
 2469 04ae EB07     		jmp	.L215
 2470              	.LVL289:
 2471              		.p2align 4,,10
 2472              		.p2align 3
 2473              	.L314:
 2474              		.loc 1 539 0 is_stmt 0 discriminator 3
 2475 04b0 44397424 		cmpl	%r14d, 32(%rsp)
 2475      20
 2476 04b5 7E29     		jle	.L240
 2477              	.LVL290:
 2478              	.L215:
 2479 04b7 4183C601 		addl	$1, %r14d
 2480              	.LVL291:
 2481              		.loc 1 540 0 is_stmt 1 discriminator 3
 2482 04bb 8B542460 		movl	96(%rsp), %edx
 2483 04bf 4889DE   		movq	%rbx, %rsi
 2484 04c2 4C89FF   		movq	%r15, %rdi
 2485 04c5 4489E1   		movl	%r12d, %ecx
 2486 04c8 41FFD5   		call	*%r13
 2487              	.LVL292:
 2488              		.loc 1 541 0 discriminator 3
 2489 04cb 4C037C24 		addq	16(%rsp), %r15
 2489      10
 2490              	.LVL293:
 2491              		.loc 1 542 0 discriminator 3
 2492 04d0 48035C24 		addq	8(%rsp), %rbx
 2492      08
 2493              	.LVL294:
 2494 04d5 428D5435 		leal	0(%rbp,%r14), %edx
 2494      00
 2495              	.LVL295:
 2496              		.loc 1 539 0 discriminator 3
 2497 04da 39542464 		cmpl	%edx, 100(%rsp)
 2498 04de 7FD0     		jg	.L314
 2499              	.L240:
 2500 04e0 4489F1   		movl	%r14d, %ecx
 2501 04e3 89D5     		movl	%edx, %ebp
 2502              	.LVL296:
 2503              	.L214:
 2504              		.loc 1 544 0
 2505 04e5 51       		pushq	%rcx
 2506              		.cfi_def_cfa_offset 184
 2507 04e6 8B542468 		movl	104(%rsp), %edx
 2508 04ea 4531C9   		xorl	%r9d, %r9d
 2509 04ed 488B3500 		movq	fl_window(%rip), %rsi
 2509      000000
 2510 04f4 488B3D00 		movq	fl_display(%rip), %rdi
 2510      000000
 2511 04fb 4531C0   		xorl	%r8d, %r8d
 2512 04fe B9000000 		movl	$_ZL2xi, %ecx
 2512      00
 2513 0503 52       		pushq	%rdx
 2514              		.cfi_def_cfa_offset 192
 2515 0504 8B542438 		movl	56(%rsp), %edx
 2516 0508 0354246C 		addl	108(%rsp), %edx
 2517 050c 01EA     		addl	%ebp, %edx
 2518 050e 89D0     		movl	%edx, %eax
 2519 0510 488B1500 		movq	fl_gc(%rip), %rdx
 2519      000000
 2520 0517 4429F0   		subl	%r14d, %eax
 2521 051a 50       		pushq	%rax
 2522              		.cfi_def_cfa_offset 200
 2523 051b 8B44243C 		movl	60(%rsp), %eax
 2524 051f 03442470 		addl	112(%rsp), %eax
 2525 0523 50       		pushq	%rax
 2526              		.cfi_def_cfa_offset 208
 2527 0524 E8000000 		call	XPutImage
 2527      00
 2528              	.LVL297:
 2529              	.LBE89:
 2530              		.loc 1 536 0
 2531 0529 8B842484 		movl	132(%rsp), %eax
 2531      000000
 2532 0530 4883C420 		addq	$32, %rsp
 2533              		.cfi_def_cfa_offset 176
 2534 0534 39E8     		cmpl	%ebp, %eax
 2535 0536 0F8E8CFD 		jle	.L213
 2535      FFFF
 2536              	.LBB90:
 2537              		.loc 1 539 0
 2538 053c 39C5     		cmpl	%eax, %ebp
 2539 053e 488B1D00 		movq	_ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE6buffer(%rip), %rbx
 2539      000000
 2540              	.LVL298:
 2541 0545 0F8C55FF 		jl	.L315
 2541      FFFF
 2542              	.LVL299:
 2543              	.L237:
 2544 054b 31C9     		xorl	%ecx, %ecx
 2545 054d 4531F6   		xorl	%r14d, %r14d
 2546 0550 EB93     		jmp	.L214
 2547              	.LVL300:
 2548              	.L308:
 2549              	.LBE90:
 2550              	.LBE91:
 2551              	.LBE87:
 2552              	.LBE96:
 2553              	.LBE98:
 2554              	.LBE100:
 2555              	.LBB101:
 2556              	.LBB102:
 2557              		.loc 1 354 0
 2558 0552 BF380000 		movl	$56, %edi
 2558      00
 2559 0557 E8000000 		call	_Z9fl_xpixelj
 2559      00
 2560              	.LVL301:
 2561              		.loc 1 355 0
 2562 055c BFFF0000 		movl	$255, %edi
 2562      00
 2563 0561 E8000000 		call	_Z9fl_xpixelj
 2563      00
 2564              	.LVL302:
 2565              		.loc 1 359 0
 2566 0566 488B0500 		movq	_ZZL17figure_out_visualvE7pfvlist(%rip), %rax
 2566      000000
 2567 056d 4885C0   		testq	%rax, %rax
 2568 0570 0F84D703 		je	.L316
 2568      0000
 2569              	.L172:
 2570              	.LVL303:
 2571              		.loc 1 361 0
 2572 0576 48631500 		movslq	_ZZL17figure_out_visualvE10FL_NUM_pfv(%rip), %rdx
 2572      000000
 2573 057d 488B3500 		movq	fl_visual(%rip), %rsi
 2573      000000
 2574 0584 488D1452 		leaq	(%rdx,%rdx,2), %rdx
 2575 0588 488D1490 		leaq	(%rax,%rdx,4), %rdx
 2576 058c 4839C2   		cmpq	%rax, %rdx
 2577 058f 761C     		jbe	.L174
 2578              		.loc 1 362 0
 2579 0591 8B4E14   		movl	20(%rsi), %ecx
 2580 0594 3908     		cmpl	%ecx, (%rax)
 2581 0596 750C     		jne	.L176
 2582 0598 EB13     		jmp	.L174
 2583              	.LVL304:
 2584 059a 660F1F44 		.p2align 4,,10
 2584      0000
 2585              		.p2align 3
 2586              	.L177:
 2587 05a0 3908     		cmpl	%ecx, (%rax)
 2588 05a2 7409     		je	.L174
 2589              	.LVL305:
 2590              	.L176:
 2591              		.loc 1 361 0
 2592 05a4 4883C00C 		addq	$12, %rax
 2593              	.LVL306:
 2594 05a8 4839D0   		cmpq	%rdx, %rax
 2595 05ab 72F3     		jb	.L177
 2596              	.LVL307:
 2597              	.L174:
 2598              		.loc 1 364 0
 2599 05ad 488B1500 		movq	fl_display(%rip), %rdx
 2599      000000
 2600              		.loc 1 363 0
 2601 05b4 C7050000 		movl	$2, _ZL2xi+12(%rip)
 2601      00000200 
 2601      0000
 2602              		.loc 1 364 0
 2603 05be 8B5250   		movl	80(%rdx), %edx
 2604 05c1 89150000 		movl	%edx, _ZL2xi+24(%rip)
 2604      0000
 2605              		.loc 1 368 0
 2606 05c7 8B5614   		movl	20(%rsi), %edx
 2607 05ca 89150000 		movl	%edx, _ZL2xi+40(%rip)
 2607      0000
 2608              		.loc 1 369 0
 2609 05d0 8B5004   		movl	4(%rax), %edx
 2610              		.loc 1 371 0
 2611 05d3 F6C207   		testb	$7, %dl
 2612              		.loc 1 369 0
 2613 05d6 89150000 		movl	%edx, _ZL2xi+48(%rip)
 2613      0000
 2614              		.loc 1 371 0
 2615 05dc 0F84D800 		je	.L178
 2615      0000
 2616 05e2 C7050000 		movl	$0, _ZL15bytes_per_pixel(%rip)
 2616      00000000 
 2616      0000
 2617              	.L179:
 2618              		.loc 1 374 0
 2619 05ec 8B7008   		movl	8(%rax), %esi
 2620 05ef 448D6E07 		leal	7(%rsi), %r13d
 2621 05f3 85F6     		testl	%esi, %esi
 2622 05f5 440F49EE 		cmovns	%esi, %r13d
 2623 05f9 41C1FD03 		sarl	$3, %r13d
 2624              	.LVL308:
 2625              		.loc 1 375 0
 2626 05fd 40F6C607 		testb	$7, %sil
 2627 0601 7509     		jne	.L180
 2628 0603 418D45FF 		leal	-1(%r13), %eax
 2629 0607 4485E8   		testl	%r13d, %eax
 2630 060a 740D     		je	.L181
 2631              	.L180:
 2632              		.loc 1 376 0
 2633 060c BF000000 		movl	$.LC16, %edi
 2633      00
 2634 0611 31C0     		xorl	%eax, %eax
 2635 0613 FF150000 		call	*_ZN2Fl5fatalE(%rip)
 2635      0000
 2636              	.LVL309:
 2637              	.L181:
 2638              		.loc 1 377 0
 2639 0619 4183FD07 		cmpl	$7, %r13d
 2640 061d B8F8FFFF 		movl	$-8, %eax
 2640      FF
 2641 0622 BA070000 		movl	$7, %edx
 2641      00
 2642 0627 7609     		jbe	.L182
 2643 0629 4489E8   		movl	%r13d, %eax
 2644 062c 418D55FF 		leal	-1(%r13), %edx
 2645 0630 F7D8     		negl	%eax
 2646              	.L182:
 2647              	.LVL310:
 2648              		.loc 1 379 0
 2649 0632 89050000 		movl	%eax, _ZL13scanline_mask(%rip)
 2649      0000
 2650              		.loc 1 382 0
 2651 0638 8B050000 		movl	_ZL15bytes_per_pixel(%rip), %eax
 2651      0000
 2652              		.loc 1 378 0
 2653 063e 89150000 		movl	%edx, _ZL12scanline_add(%rip)
 2653      0000
 2654              		.loc 1 382 0
 2655 0644 83F801   		cmpl	$1, %eax
 2656 0647 89442438 		movl	%eax, 56(%rsp)
 2657 064b 0F842702 		je	.L317
 2657      0000
 2658              		.loc 1 387 0
 2659 0651 488B0500 		movq	fl_visual(%rip), %rax
 2659      000000
 2660 0658 48837820 		cmpq	$0, 32(%rax)
 2660      00
 2661 065d 0F84C300 		je	.L318
 2661      0000
 2662              	.L184:
 2663              		.loc 1 397 0
 2664 0663 8B742438 		movl	56(%rsp), %esi
 2665              		.loc 1 393 0
 2666 0667 8B150000 		movl	fl_redshift(%rip), %edx
 2666      0000
 2667              	.LVL311:
 2668              		.loc 1 394 0
 2669 066d 8B0D0000 		movl	fl_greenshift(%rip), %ecx
 2669      0000
 2670              	.LVL312:
 2671              		.loc 1 395 0
 2672 0673 8B050000 		movl	fl_blueshift(%rip), %eax
 2672      0000
 2673              	.LVL313:
 2674              		.loc 1 397 0
 2675 0679 83FE03   		cmpl	$3, %esi
 2676 067c 0F84D000 		je	.L186
 2676      0000
 2677 0682 83FE04   		cmpl	$4, %esi
 2678 0685 0F844101 		je	.L187
 2678      0000
 2679 068b 83FE02   		cmpl	$2, %esi
 2680 068e 7440     		je	.L319
 2681              		.loc 1 452 0
 2682 0690 8B350000 		movl	_ZL2xi+48(%rip), %esi
 2682      0000
 2683 0696 BF000000 		movl	$.LC19, %edi
 2683      00
 2684 069b 31C0     		xorl	%eax, %eax
 2685              	.LVL314:
 2686 069d FF150000 		call	*_ZN2Fl5fatalE(%rip)
 2686      0000
 2687              	.LVL315:
 2688              	.L307:
 2689 06a3 8B050000 		movl	_ZL15bytes_per_pixel(%rip), %eax
 2689      0000
 2690 06a9 8B4C2460 		movl	96(%rsp), %ecx
 2691 06ad 8B542464 		movl	100(%rsp), %edx
 2692 06b1 89442438 		movl	%eax, 56(%rsp)
 2693 06b5 E933FAFF 		jmp	.L306
 2693      FF
 2694              	.L178:
 2695              		.loc 1 372 0
 2696 06ba 8D4A07   		leal	7(%rdx), %ecx
 2697 06bd 85D2     		testl	%edx, %edx
 2698 06bf 0F48D1   		cmovs	%ecx, %edx
 2699 06c2 C1FA03   		sarl	$3, %edx
 2700 06c5 89150000 		movl	%edx, _ZL15bytes_per_pixel(%rip)
 2700      0000
 2701 06cb E91CFFFF 		jmp	.L179
 2701      FF
 2702              	.LVL316:
 2703              	.L319:
 2704              		.loc 1 407 0
 2705 06d0 83FA0B   		cmpl	$11, %edx
 2706              		.loc 1 403 0
 2707 06d3 C7050000 		movl	$0, _ZL2xi+24(%rip)
 2707      00000000 
 2707      0000
 2708              		.loc 1 407 0
 2709 06dd 400F94C6 		sete	%sil
 2710 06e1 83F906   		cmpl	$6, %ecx
 2711 06e4 0F94C2   		sete	%dl
 2712              	.LVL317:
 2713 06e7 4084D6   		testb	%dl, %sil
 2714 06ea 7411     		je	.L189
 2715 06ec 85C0     		testl	%eax, %eax
 2716 06ee 750D     		jne	.L189
 2717 06f0 833D0000 		cmpl	$3, fl_extrashift(%rip)
 2717      000003
 2718 06f7 0F84D202 		je	.L320
 2718      0000
 2719              	.L189:
 2720              		.loc 1 411 0
 2721 06fd 48C70500 		movq	$_ZL17color16_converterPKhPhii, _ZL9converter(%rip)
 2721      00000000 
 2721      000000
 2722              		.loc 1 412 0
 2723 0708 48C70500 		movq	$_ZL16mono16_converterPKhPhii, _ZL14mono_converter(%rip)
 2723      00000000 
 2723      000000
 2724 0713 41BD0000 		movl	$_ZL17color16_converterPKhPhii, %r13d
 2724      0000
 2725 0719 8B4C2460 		movl	96(%rsp), %ecx
 2726              	.LVL318:
 2727 071d 8B542464 		movl	100(%rsp), %edx
 2728 0721 E9CEF9FF 		jmp	.L171
 2728      FF
 2729              	.LVL319:
 2730              	.L318:
 2731              		.loc 1 388 0
 2732 0726 31C0     		xorl	%eax, %eax
 2733 0728 8B350000 		movl	_ZL2xi+48(%rip), %esi
 2733      0000
 2734 072e BF000000 		movl	$.LC17, %edi
 2734      00
 2735 0733 FF150000 		call	*_ZN2Fl5fatalE(%rip)
 2735      0000
 2736              	.LVL320:
 2737 0739 8B050000 		movl	_ZL15bytes_per_pixel(%rip), %eax
 2737      0000
 2738 073f 89442438 		movl	%eax, 56(%rsp)
 2739 0743 E91BFFFF 		jmp	.L184
 2739      FF
 2740              	.LVL321:
 2741              	.L239:
 2742              	.LBE102:
 2743              	.LBE101:
 2744              	.LBB107:
 2745              	.LBB99:
 2746              	.LBB97:
 2747              	.LBB92:
 2748              	.LBB86:
 2749              	.LBB85:
 2750              		.loc 1 551 0
 2751 0748 31D2     		xorl	%edx, %edx
 2752 074a 4531F6   		xorl	%r14d, %r14d
 2753 074d E910FBFF 		jmp	.L221
 2753      FF
 2754              	.LVL322:
 2755              	.L186:
 2756              	.LBE85:
 2757              	.LBE86:
 2758              	.LBE92:
 2759              	.LBE97:
 2760              	.LBE99:
 2761              	.LBE107:
 2762              	.LBB108:
 2763              	.LBB103:
 2764              		.loc 1 417 0
 2765 0752 448B0D00 		movl	_ZL2xi+24(%rip), %r9d
 2765      000000
 2766 0759 4585C9   		testl	%r9d, %r9d
 2767 075c 7415     		je	.L190
 2768 075e BE100000 		movl	$16, %esi
 2768      00
 2769 0763 89F7     		movl	%esi, %edi
 2770 0765 29D7     		subl	%edx, %edi
 2771 0767 89FA     		movl	%edi, %edx
 2772              	.LVL323:
 2773 0769 89F7     		movl	%esi, %edi
 2774 076b 29C6     		subl	%eax, %esi
 2775 076d 29CF     		subl	%ecx, %edi
 2776 076f 89F0     		movl	%esi, %eax
 2777              	.LVL324:
 2778 0771 89F9     		movl	%edi, %ecx
 2779              	.LVL325:
 2780              	.L190:
 2781              		.loc 1 418 0
 2782 0773 83F908   		cmpl	$8, %ecx
 2783 0776 0F94C1   		sete	%cl
 2784              	.LVL326:
 2785 0779 85D2     		testl	%edx, %edx
 2786 077b 400F94C6 		sete	%sil
 2787 077f 4084CE   		testb	%cl, %sil
 2788 0782 7409     		je	.L191
 2789 0784 83F810   		cmpl	$16, %eax
 2790 0787 0F846B02 		je	.L321
 2790      0000
 2791              	.L191:
 2792              		.loc 1 421 0
 2793 078d 83FA10   		cmpl	$16, %edx
 2794 0790 0F94C2   		sete	%dl
 2795              	.LVL327:
 2796 0793 84CA     		testb	%cl, %dl
 2797 0795 0F846D01 		je	.L192
 2797      0000
 2798 079b 85C0     		testl	%eax, %eax
 2799 079d 0F856501 		jne	.L192
 2799      0000
 2800              		.loc 1 422 0
 2801 07a3 48C70500 		movq	$_ZL13bgr_converterPKhPhii, _ZL9converter(%rip)
 2801      00000000 
 2801      000000
 2802              		.loc 1 423 0
 2803 07ae 48C70500 		movq	$_ZL13rrr_converterPKhPhii, _ZL14mono_converter(%rip)
 2803      00000000 
 2803      000000
 2804 07b9 41BD0000 		movl	$_ZL13bgr_converterPKhPhii, %r13d
 2804      0000
 2805 07bf 8B4C2460 		movl	96(%rsp), %ecx
 2806 07c3 8B542464 		movl	100(%rsp), %edx
 2807 07c7 E928F9FF 		jmp	.L171
 2807      FF
 2808              	.LVL328:
 2809              	.L187:
 2810              		.loc 1 430 0
 2811 07cc 448B0500 		movl	_ZL2xi+24(%rip), %r8d
 2811      000000
 2812 07d3 4585C0   		testl	%r8d, %r8d
 2813 07d6 7415     		je	.L229
 2814              		.loc 1 431 0
 2815 07d8 BE180000 		movl	$24, %esi
 2815      00
 2816 07dd 89F7     		movl	%esi, %edi
 2817 07df 29D7     		subl	%edx, %edi
 2818 07e1 89FA     		movl	%edi, %edx
 2819              	.LVL329:
 2820 07e3 89F7     		movl	%esi, %edi
 2821 07e5 29C6     		subl	%eax, %esi
 2822 07e7 29CF     		subl	%ecx, %edi
 2823 07e9 89F0     		movl	%esi, %eax
 2824              	.LVL330:
 2825 07eb 89F9     		movl	%edi, %ecx
 2826              	.LVL331:
 2827              	.L229:
 2828              		.loc 1 432 0
 2829 07ed 83F908   		cmpl	$8, %ecx
 2830 07f0 400F94C6 		sete	%sil
 2831 07f4 85D2     		testl	%edx, %edx
 2832 07f6 400F94C7 		sete	%dil
 2833 07fa 4084F7   		testb	%sil, %dil
 2834 07fd 7409     		je	.L194
 2835 07ff 83F810   		cmpl	$16, %eax
 2836 0802 0F847501 		je	.L322
 2836      0000
 2837              	.L194:
 2838              		.loc 1 435 0
 2839 0808 83F910   		cmpl	$16, %ecx
 2840 080b 0F94C1   		sete	%cl
 2841              	.LVL332:
 2842 080e 83FA18   		cmpl	$24, %edx
 2843 0811 400F94C7 		sete	%dil
 2844 0815 4084CF   		testb	%cl, %dil
 2845 0818 7409     		je	.L195
 2846 081a 83F808   		cmpl	$8, %eax
 2847 081d 0F848301 		je	.L323
 2847      0000
 2848              	.L195:
 2849              		.loc 1 438 0
 2850 0823 83FA08   		cmpl	$8, %edx
 2851 0826 400F94C7 		sete	%dil
 2852 082a 4084CF   		testb	%cl, %dil
 2853 082d 7409     		je	.L196
 2854 082f 83F818   		cmpl	$24, %eax
 2855 0832 0F84EE01 		je	.L324
 2855      0000
 2856              	.L196:
 2857              		.loc 1 441 0
 2858 0838 83FA10   		cmpl	$16, %edx
 2859 083b 0F94C2   		sete	%dl
 2860              	.LVL333:
 2861 083e 4084F2   		testb	%sil, %dl
 2862 0841 0F84D300 		je	.L197
 2862      0000
 2863 0847 85C0     		testl	%eax, %eax
 2864 0849 0F85CB00 		jne	.L197
 2864      0000
 2865              		.loc 1 442 0
 2866 084f 48C70500 		movq	$_ZL14xrgb_converterPKhPhii, _ZL9converter(%rip)
 2866      00000000 
 2866      000000
 2867              		.loc 1 443 0
 2868 085a 48C70500 		movq	$_ZL14xrrr_converterPKhPhii, _ZL14mono_converter(%rip)
 2868      00000000 
 2868      000000
 2869 0865 41BD0000 		movl	$_ZL14xrgb_converterPKhPhii, %r13d
 2869      0000
 2870 086b 8B4C2460 		movl	96(%rsp), %ecx
 2871 086f 8B542464 		movl	100(%rsp), %edx
 2872 0873 E97CF8FF 		jmp	.L171
 2872      FF
 2873              	.LVL334:
 2874              	.L317:
 2875              		.loc 1 383 0
 2876 0878 48C70500 		movq	$_ZL16color8_converterPKhPhii, _ZL9converter(%rip)
 2876      00000000 
 2876      000000
 2877              		.loc 1 384 0
 2878 0883 48C70500 		movq	$_ZL15mono8_converterPKhPhii, _ZL14mono_converter(%rip)
 2878      00000000 
 2878      000000
 2879 088e 41BD0000 		movl	$_ZL16color8_converterPKhPhii, %r13d
 2879      0000
 2880 0894 8B4C2460 		movl	96(%rsp), %ecx
 2881 0898 8B542464 		movl	100(%rsp), %edx
 2882 089c E953F8FF 		jmp	.L171
 2882      FF
 2883              	.LVL335:
 2884              	.L310:
 2885              	.LBE103:
 2886              	.LBE108:
 2887              	.LBB109:
 2888              		.loc 1 513 0
 2889 08a1 4185C6   		testl	%eax, %r14d
 2890 08a4 0F85C000 		jne	.L235
 2890      0000
 2891              		.loc 1 514 0
 2892 08aa 8B442458 		movl	88(%rsp), %eax
 2893              		.loc 1 515 0
 2894 08ae 44893500 		movl	%r14d, _ZL2xi+44(%rip)
 2894      000000
 2895              		.loc 1 514 0
 2896 08b5 8D0440   		leal	(%rax,%rax,2), %eax
 2897 08b8 4863D0   		movslq	%eax, %rdx
 2898 08bb 8B44245C 		movl	92(%rsp), %eax
 2899 08bf 410FAFC6 		imull	%r14d, %eax
 2900 08c3 4898     		cltq
 2901 08c5 4801D0   		addq	%rdx, %rax
 2902 08c8 4801C3   		addq	%rax, %rbx
 2903              	.LVL336:
 2904 08cb 48891D00 		movq	%rbx, _ZL2xi+16(%rip)
 2904      000000
 2905 08d2 E931FAFF 		jmp	.L167
 2905      FF
 2906              	.LVL337:
 2907              	.L313:
 2908              	.LBE109:
 2909              		.loc 1 491 0
 2910 08d7 488B3500 		movq	fl_window(%rip), %rsi
 2910      000000
 2911 08de 488B3D00 		movq	fl_display(%rip), %rdi
 2911      000000
 2912 08e5 31C9     		xorl	%ecx, %ecx
 2913 08e7 31D2     		xorl	%edx, %edx
 2914 08e9 E8000000 		call	XCreateGC
 2914      00
 2915              	.LVL338:
 2916 08ee 8B4C2460 		movl	96(%rsp), %ecx
 2917 08f2 48890500 		movq	%rax, _ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE4gc32(%rip)
 2917      000000
 2918 08f9 8B350000 		movl	_ZL15bytes_per_pixel(%rip), %esi
 2918      0000
 2919 08ff 8B542464 		movl	100(%rsp), %edx
 2920 0903 E963FAFF 		jmp	.L201
 2920      FF
 2921              	.LVL339:
 2922              	.L192:
 2923              	.LBB110:
 2924              	.LBB104:
 2925              		.loc 1 425 0
 2926 0908 BF000000 		movl	$.LC18, %edi
 2926      00
 2927 090d 31C0     		xorl	%eax, %eax
 2928              	.LVL340:
 2929 090f FF150000 		call	*_ZN2Fl5fatalE(%rip)
 2929      0000
 2930              	.LVL341:
 2931 0915 E989FDFF 		jmp	.L307
 2931      FF
 2932              	.LVL342:
 2933              	.L197:
 2934              		.loc 1 445 0
 2935 091a C7050000 		movl	$0, _ZL2xi+24(%rip)
 2935      00000000 
 2935      0000
 2936              		.loc 1 446 0
 2937 0924 48C70500 		movq	$_ZL17color32_converterPKhPhii, _ZL9converter(%rip)
 2937      00000000 
 2937      000000
 2938              		.loc 1 447 0
 2939 092f 41BD0000 		movl	$_ZL17color32_converterPKhPhii, %r13d
 2939      0000
 2940 0935 48C70500 		movq	$_ZL16mono32_converterPKhPhii, _ZL14mono_converter(%rip)
 2940      00000000 
 2940      000000
 2941 0940 8B4C2460 		movl	96(%rsp), %ecx
 2942 0944 8B542464 		movl	100(%rsp), %edx
 2943 0948 E9A7F7FF 		jmp	.L171
 2943      FF
 2944              	.LVL343:
 2945              	.L316:
 2946              		.loc 1 359 0
 2947 094d 488B3D00 		movq	fl_display(%rip), %rdi
 2947      000000
 2948 0954 BE000000 		movl	$_ZZL17figure_out_visualvE10FL_NUM_pfv, %esi
 2948      00
 2949 0959 E8000000 		call	XListPixmapFormats
 2949      00
 2950              	.LVL344:
 2951 095e 48890500 		movq	%rax, _ZZL17figure_out_visualvE7pfvlist(%rip)
 2951      000000
 2952 0965 E90CFCFF 		jmp	.L172
 2952      FF
 2953              	.LVL345:
 2954              	.L235:
 2955              	.LBE104:
 2956              	.LBE110:
 2957              	.LBB111:
 2958 096a 89542420 		movl	%edx, 32(%rsp)
 2959 096e 8B742438 		movl	56(%rsp), %esi
 2960 0972 41BD0000 		movl	$_ZL13rgb_converterPKhPhii, %r13d
 2960      0000
 2961              	.LVL346:
 2962 0978 E905FAFF 		jmp	.L203
 2962      FF
 2963              	.LVL347:
 2964              	.L322:
 2965              	.LBE111:
 2966              	.LBB112:
 2967              	.LBB105:
 2968              		.loc 1 433 0
 2969 097d 48C70500 		movq	$_ZL14xbgr_converterPKhPhii, _ZL9converter(%rip)
 2969      00000000 
 2969      000000
 2970              		.loc 1 434 0
 2971 0988 48C70500 		movq	$_ZL14xrrr_converterPKhPhii, _ZL14mono_converter(%rip)
 2971      00000000 
 2971      000000
 2972 0993 41BD0000 		movl	$_ZL14xbgr_converterPKhPhii, %r13d
 2972      0000
 2973 0999 8B4C2460 		movl	96(%rsp), %ecx
 2974              	.LVL348:
 2975 099d 8B542464 		movl	100(%rsp), %edx
 2976              	.LVL349:
 2977 09a1 E94EF7FF 		jmp	.L171
 2977      FF
 2978              	.LVL350:
 2979              	.L323:
 2980              		.loc 1 436 0
 2981 09a6 48C70500 		movq	$_ZL14rgbx_converterPKhPhii, _ZL9converter(%rip)
 2981      00000000 
 2981      000000
 2982              		.loc 1 437 0
 2983 09b1 48C70500 		movq	$_ZL14rrrx_converterPKhPhii, _ZL14mono_converter(%rip)
 2983      00000000 
 2983      000000
 2984 09bc 41BD0000 		movl	$_ZL14rgbx_converterPKhPhii, %r13d
 2984      0000
 2985 09c2 8B4C2460 		movl	96(%rsp), %ecx
 2986 09c6 8B542464 		movl	100(%rsp), %edx
 2987              	.LVL351:
 2988 09ca E925F7FF 		jmp	.L171
 2988      FF
 2989              	.LVL352:
 2990              	.L320:
 2991              		.loc 1 408 0
 2992 09cf 48C70500 		movq	$_ZL14c565_converterPKhPhii, _ZL9converter(%rip)
 2992      00000000 
 2992      000000
 2993              		.loc 1 409 0
 2994 09da 48C70500 		movq	$_ZL14m565_converterPKhPhii, _ZL14mono_converter(%rip)
 2994      00000000 
 2994      000000
 2995 09e5 41BD0000 		movl	$_ZL14c565_converterPKhPhii, %r13d
 2995      0000
 2996 09eb 8B4C2460 		movl	96(%rsp), %ecx
 2997              	.LVL353:
 2998 09ef 8B542464 		movl	100(%rsp), %edx
 2999 09f3 E9FCF6FF 		jmp	.L171
 2999      FF
 3000              	.LVL354:
 3001              	.L321:
 3002              		.loc 1 419 0
 3003 09f8 48C70500 		movq	$_ZL13rgb_converterPKhPhii, _ZL9converter(%rip)
 3003      00000000 
 3003      000000
 3004              		.loc 1 420 0
 3005 0a03 48C70500 		movq	$_ZL13rrr_converterPKhPhii, _ZL14mono_converter(%rip)
 3005      00000000 
 3005      000000
 3006 0a0e 41BD0000 		movl	$_ZL13rgb_converterPKhPhii, %r13d
 3006      0000
 3007 0a14 8B4C2460 		movl	96(%rsp), %ecx
 3008 0a18 8B542464 		movl	100(%rsp), %edx
 3009              	.LVL355:
 3010 0a1c E9D3F6FF 		jmp	.L171
 3010      FF
 3011              	.LVL356:
 3012              	.L312:
 3013              	.LBE105:
 3014              	.LBE112:
 3015              		.loc 1 572 0
 3016 0a21 E8000000 		call	__stack_chk_fail
 3016      00
 3017              	.LVL357:
 3018              	.L324:
 3019              	.LBB113:
 3020              	.LBB106:
 3021              		.loc 1 439 0
 3022 0a26 48C70500 		movq	$_ZL14bgrx_converterPKhPhii, _ZL9converter(%rip)
 3022      00000000 
 3022      000000
 3023              		.loc 1 440 0
 3024 0a31 48C70500 		movq	$_ZL14rrrx_converterPKhPhii, _ZL14mono_converter(%rip)
 3024      00000000 
 3024      000000
 3025 0a3c 41BD0000 		movl	$_ZL14bgrx_converterPKhPhii, %r13d
 3025      0000
 3026 0a42 8B4C2460 		movl	96(%rsp), %ecx
 3027 0a46 8B542464 		movl	100(%rsp), %edx
 3028              	.LVL358:
 3029 0a4a E9A5F6FF 		jmp	.L171
 3029      FF
 3030              	.LBE106:
 3031              	.LBE113:
 3032              		.cfi_endproc
 3033              	.LFE501:
 3035              		.section	.text.unlikely._ZL7innardsPKhiiiiiiiPFvPviiiPhES1_b
 3036              	.LCOLDE20:
 3037              		.section	.text._ZL7innardsPKhiiiiiiiPFvPviiiPhES1_b
 3038              	.LHOTE20:
 3039              		.section	.text.unlikely._ZL15mono8_converterPKhPhii,"ax",@progbits
 3040              	.LCOLDB21:
 3041              		.section	.text._ZL15mono8_converterPKhPhii,"ax",@progbits
 3042              	.LHOTB21:
 3043              		.p2align 4,,15
 3045              	_ZL15mono8_converterPKhPhii:
 3046              	.LFB483:
 3047              		.loc 1 103 0
 3048              		.cfi_startproc
 3049              	.LVL359:
 3050 0000 4157     		pushq	%r15
 3051              		.cfi_def_cfa_offset 16
 3052              		.cfi_offset 15, -16
 3053 0002 4156     		pushq	%r14
 3054              		.cfi_def_cfa_offset 24
 3055              		.cfi_offset 14, -24
 3056 0004 4989FF   		movq	%rdi, %r15
 3057 0007 4155     		pushq	%r13
 3058              		.cfi_def_cfa_offset 32
 3059              		.cfi_offset 13, -32
 3060 0009 4154     		pushq	%r12
 3061              		.cfi_def_cfa_offset 40
 3062              		.cfi_offset 12, -40
 3063 000b 4989F0   		movq	%rsi, %r8
 3064 000e 55       		pushq	%rbp
 3065              		.cfi_def_cfa_offset 48
 3066              		.cfi_offset 6, -48
 3067 000f 53       		pushq	%rbx
 3068              		.cfi_def_cfa_offset 56
 3069              		.cfi_offset 3, -56
 3070 0010 4883EC28 		subq	$40, %rsp
 3071              		.cfi_def_cfa_offset 96
 3072              		.loc 1 106 0
 3073 0014 8B050000 		movl	_ZL3dir(%rip), %eax
 3073      0000
 3074              		.loc 1 104 0
 3075 001a 8B1D0000 		movl	_ZL2ri(%rip), %ebx
 3075      0000
 3076              	.LVL360:
 3077 0020 8B2D0000 		movl	_ZL2gi(%rip), %ebp
 3077      0000
 3078              	.LVL361:
 3079 0026 448B0D00 		movl	_ZL2bi(%rip), %r9d
 3079      000000
 3080              	.LVL362:
 3081              		.loc 1 106 0
 3082 002d 85C0     		testl	%eax, %eax
 3083 002f 0F847301 		je	.L326
 3083      0000
 3084              		.loc 1 108 0
 3085 0035 448D72FF 		leal	-1(%rdx), %r14d
 3086              		.loc 1 107 0
 3087 0039 C7050000 		movl	$0, _ZL3dir(%rip)
 3087      00000000 
 3087      0000
 3088              		.loc 1 111 0
 3089 0043 41BDFFFF 		movl	$-1, %r13d
 3089      FFFF
 3090              		.loc 1 108 0
 3091 0049 4489F0   		movl	%r14d, %eax
 3092 004c 0FAFC1   		imull	%ecx, %eax
 3093              		.loc 1 110 0
 3094 004f F7D9     		negl	%ecx
 3095              	.LVL363:
 3096              		.loc 1 108 0
 3097 0051 4898     		cltq
 3098 0053 4901C7   		addq	%rax, %r15
 3099              	.LVL364:
 3100              		.loc 1 109 0
 3101 0056 4863C2   		movslq	%edx, %rax
 3102 0059 4C8D4406 		leaq	-1(%rsi,%rax), %r8
 3102      FF
 3103              	.LVL365:
 3104              	.L327:
 3105              	.LBB114:
 3106              		.loc 1 117 0 discriminator 1
 3107 005e 85D2     		testl	%edx, %edx
 3108 0060 0F841A01 		je	.L328
 3108      0000
 3109 0066 4863C1   		movslq	%ecx, %rax
 3110 0069 41BCFF00 		movl	$255, %r12d
 3110      0000
 3111 006f 48890424 		movq	%rax, (%rsp)
 3112 0073 4963C5   		movslq	%r13d, %rax
 3113 0076 48894424 		movq	%rax, 8(%rsp)
 3113      08
 3114 007b EB60     		jmp	.L331
 3115              	.LVL366:
 3116 007d 0F1F00   		.p2align 4,,10
 3117              		.p2align 3
 3118              	.L337:
 3119              	.LBB115:
 3120              		.loc 1 123 0 discriminator 2
 3121 0080 4489EA   		movl	%r13d, %edx
 3122 0083 89EE     		movl	%ebp, %esi
 3123 0085 89DF     		movl	%ebx, %edi
 3124 0087 E8000000 		call	_Z9fl_xpixelhhh
 3124      00
 3125              	.LVL367:
 3126 008c 4C8B4424 		movq	16(%rsp), %r8
 3126      10
 3127 0091 4C8B5424 		movq	24(%rsp), %r10
 3127      18
 3128              	.LVL368:
 3129              	.L329:
 3130              		.loc 1 124 0
 3131 0096 49C1E204 		salq	$4, %r10
 3132              		.loc 1 126 0
 3133 009a 4589E9   		movl	%r13d, %r9d
 3134              	.LBE115:
 3135              		.loc 1 117 0
 3136 009d 4183EE01 		subl	$1, %r14d
 3137              	.LVL369:
 3138              	.LBB120:
 3139              		.loc 1 124 0
 3140 00a1 410FB692 		movzbl	fl_xmap(%r10), %edx
 3140      00000000 
 3141              		.loc 1 127 0
 3142 00a9 498B8200 		movq	fl_xmap+8(%r10), %rax
 3142      000000
 3143              	.LBE120:
 3144              		.loc 1 117 0
 3145 00b0 4C033C24 		addq	(%rsp), %r15
 3146              	.LVL370:
 3147              	.LBB121:
 3148              		.loc 1 124 0
 3149 00b4 29D3     		subl	%edx, %ebx
 3150              	.LVL371:
 3151              		.loc 1 125 0
 3152 00b6 410FB692 		movzbl	fl_xmap+1(%r10), %edx
 3152      00000000 
 3153 00be 29D5     		subl	%edx, %ebp
 3154              	.LVL372:
 3155              		.loc 1 126 0
 3156 00c0 410FB692 		movzbl	fl_xmap+2(%r10), %edx
 3156      00000000 
 3157              		.loc 1 127 0
 3158 00c8 418800   		movb	%al, (%r8)
 3159              	.LBE121:
 3160              		.loc 1 117 0
 3161 00cb 4C034424 		addq	8(%rsp), %r8
 3161      08
 3162              	.LBB122:
 3163              		.loc 1 126 0
 3164 00d0 4129D1   		subl	%edx, %r9d
 3165              	.LVL373:
 3166              	.LBE122:
 3167              		.loc 1 117 0
 3168 00d3 4183FEFF 		cmpl	$-1, %r14d
 3169 00d7 0F84A300 		je	.L328
 3169      0000
 3170              	.LVL374:
 3171              	.L331:
 3172              	.LBB123:
 3173              		.loc 1 118 0
 3174 00dd 410FB607 		movzbl	(%r15), %eax
 3175 00e1 01C3     		addl	%eax, %ebx
 3176              	.LVL375:
 3177 00e3 81FBFF00 		cmpl	$255, %ebx
 3177      0000
 3178 00e9 410F4FDC 		cmovg	%r12d, %ebx
 3179              	.LVL376:
 3180 00ed 31D2     		xorl	%edx, %edx
 3181 00ef 85DB     		testl	%ebx, %ebx
 3182 00f1 0F48DA   		cmovs	%edx, %ebx
 3183              	.LVL377:
 3184              		.loc 1 119 0
 3185 00f4 01C5     		addl	%eax, %ebp
 3186              	.LVL378:
 3187 00f6 81FDFF00 		cmpl	$255, %ebp
 3187      0000
 3188 00fc 410F4FEC 		cmovg	%r12d, %ebp
 3189              	.LVL379:
 3190 0100 85ED     		testl	%ebp, %ebp
 3191 0102 0F48EA   		cmovs	%edx, %ebp
 3192              	.LVL380:
 3193              		.loc 1 120 0
 3194 0105 4401C8   		addl	%r9d, %eax
 3195              	.LVL381:
 3196 0108 3DFF0000 		cmpl	$255, %eax
 3196      00
 3197 010d 410F4FC4 		cmovg	%r12d, %eax
 3198              	.LVL382:
 3199 0111 85C0     		testl	%eax, %eax
 3200 0113 0F49D0   		cmovns	%eax, %edx
 3201              	.LBB116:
 3202              	.LBB117:
 3203              		.file 3 "fltk-1.3.4-1/FL/Enumerations.H"
   1:fltk-1.3.4-1/FL/Enumerations.H **** //
   2:fltk-1.3.4-1/FL/Enumerations.H **** // "$Id: Enumerations.H 11803 2016-07-09 18:43:31Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Enumerations.H **** //
   4:fltk-1.3.4-1/FL/Enumerations.H **** // Enumerations for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Enumerations.H **** //
   6:fltk-1.3.4-1/FL/Enumerations.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Enumerations.H **** //
   8:fltk-1.3.4-1/FL/Enumerations.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Enumerations.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Enumerations.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Enumerations.H **** //
  12:fltk-1.3.4-1/FL/Enumerations.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Enumerations.H **** //
  14:fltk-1.3.4-1/FL/Enumerations.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Enumerations.H **** //
  16:fltk-1.3.4-1/FL/Enumerations.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Enumerations.H **** //
  18:fltk-1.3.4-1/FL/Enumerations.H **** 
  19:fltk-1.3.4-1/FL/Enumerations.H **** /** \file
  20:fltk-1.3.4-1/FL/Enumerations.H ****     This file contains type definitions and general enumerations.
  21:fltk-1.3.4-1/FL/Enumerations.H ****  */
  22:fltk-1.3.4-1/FL/Enumerations.H **** 
  23:fltk-1.3.4-1/FL/Enumerations.H **** #ifndef Fl_Enumerations_H
  24:fltk-1.3.4-1/FL/Enumerations.H **** #define Fl_Enumerations_H
  25:fltk-1.3.4-1/FL/Enumerations.H **** 
  26:fltk-1.3.4-1/FL/Enumerations.H **** /*
  27:fltk-1.3.4-1/FL/Enumerations.H ****  ******************************************************************************
  28:fltk-1.3.4-1/FL/Enumerations.H ****  * Notes on FL_ABI_VERSION and deprecated (obsolete) FLTK_ABI_VERSION:
  29:fltk-1.3.4-1/FL/Enumerations.H ****  *
  30:fltk-1.3.4-1/FL/Enumerations.H ****  * (1)	FLTK_ABI_VERSION is deprecated, but still defined below.
  31:fltk-1.3.4-1/FL/Enumerations.H ****  *	Do NOT define FLTK_ABI_VERSION here - it would be overwritten later.
  32:fltk-1.3.4-1/FL/Enumerations.H ****  *
  33:fltk-1.3.4-1/FL/Enumerations.H ****  * (2)	FL_ABI_VERSION is now (as of FLTK 1.3.4) defined by configure
  34:fltk-1.3.4-1/FL/Enumerations.H ****  *	or CMake. Do NOT define it here. Its definition will be included
  35:fltk-1.3.4-1/FL/Enumerations.H ****  *	below by "#include <FL/abi-version.h>".
  36:fltk-1.3.4-1/FL/Enumerations.H ****  *
  37:fltk-1.3.4-1/FL/Enumerations.H ****  * (3)	If you use the provided IDE files (Windows VC++ or Xcode) you should
  38:fltk-1.3.4-1/FL/Enumerations.H ****  *	edit the definition in the provided file abi-version.ide. The correct
  39:fltk-1.3.4-1/FL/Enumerations.H ****  *	file is `/path/to/fltk/abi-version.ide' .
  40:fltk-1.3.4-1/FL/Enumerations.H ****  *
  41:fltk-1.3.4-1/FL/Enumerations.H ****  ******************************************************************************
  42:fltk-1.3.4-1/FL/Enumerations.H ****  * For more informations on FL_ABI_VERSION see README.abi-version.txt.
  43:fltk-1.3.4-1/FL/Enumerations.H ****  ******************************************************************************
  44:fltk-1.3.4-1/FL/Enumerations.H ****  */
  45:fltk-1.3.4-1/FL/Enumerations.H **** 
  46:fltk-1.3.4-1/FL/Enumerations.H **** #include <FL/abi-version.h>
  47:fltk-1.3.4-1/FL/Enumerations.H **** 
  48:fltk-1.3.4-1/FL/Enumerations.H **** #  include "Fl_Export.H"
  49:fltk-1.3.4-1/FL/Enumerations.H **** #  include "fl_types.h"
  50:fltk-1.3.4-1/FL/Enumerations.H **** 
  51:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Version Numbers
  52:fltk-1.3.4-1/FL/Enumerations.H **** 
  53:fltk-1.3.4-1/FL/Enumerations.H ****     FLTK defines some constants to help the programmer to
  54:fltk-1.3.4-1/FL/Enumerations.H ****     find out, for which FLTK version a program is compiled.
  55:fltk-1.3.4-1/FL/Enumerations.H ****     
  56:fltk-1.3.4-1/FL/Enumerations.H ****     The following constants are defined:
  57:fltk-1.3.4-1/FL/Enumerations.H ****  */
  58:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
  59:fltk-1.3.4-1/FL/Enumerations.H **** 
  60:fltk-1.3.4-1/FL/Enumerations.H **** /**
  61:fltk-1.3.4-1/FL/Enumerations.H ****    The major release version of this FLTK library.
  62:fltk-1.3.4-1/FL/Enumerations.H ****    \sa FL_VERSION
  63:fltk-1.3.4-1/FL/Enumerations.H ****  */
  64:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_MAJOR_VERSION	1
  65:fltk-1.3.4-1/FL/Enumerations.H **** 
  66:fltk-1.3.4-1/FL/Enumerations.H **** /**
  67:fltk-1.3.4-1/FL/Enumerations.H ****    The minor release version for this library.
  68:fltk-1.3.4-1/FL/Enumerations.H **** 
  69:fltk-1.3.4-1/FL/Enumerations.H ****    FLTK remains mostly source-code compatible between minor version changes.
  70:fltk-1.3.4-1/FL/Enumerations.H ****  */
  71:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_MINOR_VERSION	3
  72:fltk-1.3.4-1/FL/Enumerations.H **** 
  73:fltk-1.3.4-1/FL/Enumerations.H **** /**
  74:fltk-1.3.4-1/FL/Enumerations.H ****    The patch version for this library.
  75:fltk-1.3.4-1/FL/Enumerations.H **** 
  76:fltk-1.3.4-1/FL/Enumerations.H ****    FLTK remains binary compatible between patches.
  77:fltk-1.3.4-1/FL/Enumerations.H ****  */
  78:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PATCH_VERSION	4
  79:fltk-1.3.4-1/FL/Enumerations.H **** 
  80:fltk-1.3.4-1/FL/Enumerations.H **** /**
  81:fltk-1.3.4-1/FL/Enumerations.H ****     The FLTK version number as a \em double.
  82:fltk-1.3.4-1/FL/Enumerations.H **** 
  83:fltk-1.3.4-1/FL/Enumerations.H ****     FL_VERSION is a \em double that describes the major, minor, and patch
  84:fltk-1.3.4-1/FL/Enumerations.H ****     version numbers.
  85:fltk-1.3.4-1/FL/Enumerations.H **** 
  86:fltk-1.3.4-1/FL/Enumerations.H ****     Version 1.2.3 is actually stored as 1.0203 to allow for more than 9
  87:fltk-1.3.4-1/FL/Enumerations.H ****     minor and patch releases.
  88:fltk-1.3.4-1/FL/Enumerations.H **** 
  89:fltk-1.3.4-1/FL/Enumerations.H ****     \deprecated This \p double version number is retained for compatibility
  90:fltk-1.3.4-1/FL/Enumerations.H ****     with existing program code. New code should use \em int FL_API_VERSION
  91:fltk-1.3.4-1/FL/Enumerations.H ****     instead. FL_VERSION is deprecated because comparisons of floating point
  92:fltk-1.3.4-1/FL/Enumerations.H ****     values may fail due to rounding errors. However, there are currently no
  93:fltk-1.3.4-1/FL/Enumerations.H ****     plans to remove this deprecated constant.
  94:fltk-1.3.4-1/FL/Enumerations.H **** 
  95:fltk-1.3.4-1/FL/Enumerations.H ****     FL_VERSION is equivalent to <em>(double)FL_API_VERSION / 10000</em>.
  96:fltk-1.3.4-1/FL/Enumerations.H **** 
  97:fltk-1.3.4-1/FL/Enumerations.H ****     \see Fl::version() (deprecated as well)
  98:fltk-1.3.4-1/FL/Enumerations.H ****     \see FL_API_VERSION
  99:fltk-1.3.4-1/FL/Enumerations.H ****     \see Fl::api_version()
 100:fltk-1.3.4-1/FL/Enumerations.H ****  */
 101:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_VERSION	( (double)FL_MAJOR_VERSION + \
 102:fltk-1.3.4-1/FL/Enumerations.H **** 			  (double)FL_MINOR_VERSION * 0.01 + \
 103:fltk-1.3.4-1/FL/Enumerations.H **** 			  (double)FL_PATCH_VERSION * 0.0001 )
 104:fltk-1.3.4-1/FL/Enumerations.H **** 
 105:fltk-1.3.4-1/FL/Enumerations.H **** /**
 106:fltk-1.3.4-1/FL/Enumerations.H ****     The FLTK API version number as an \em int.
 107:fltk-1.3.4-1/FL/Enumerations.H **** 
 108:fltk-1.3.4-1/FL/Enumerations.H ****     FL_API_VERSION is an \em int that describes the major, minor, and patch
 109:fltk-1.3.4-1/FL/Enumerations.H ****     version numbers.
 110:fltk-1.3.4-1/FL/Enumerations.H **** 
 111:fltk-1.3.4-1/FL/Enumerations.H ****     Version 1.2.3 is actually stored as 10203 to allow for more than 9
 112:fltk-1.3.4-1/FL/Enumerations.H ****     minor and patch releases.
 113:fltk-1.3.4-1/FL/Enumerations.H **** 
 114:fltk-1.3.4-1/FL/Enumerations.H ****     The FL_MAJOR_VERSION, FL_MINOR_VERSION, and FL_PATCH_VERSION constants
 115:fltk-1.3.4-1/FL/Enumerations.H ****     give the integral values for the major, minor, and patch releases
 116:fltk-1.3.4-1/FL/Enumerations.H ****     respectively.
 117:fltk-1.3.4-1/FL/Enumerations.H **** 
 118:fltk-1.3.4-1/FL/Enumerations.H ****     \note FL_API_VERSION is intended to replace the deprecated
 119:fltk-1.3.4-1/FL/Enumerations.H ****     \em double FL_VERSION.
 120:fltk-1.3.4-1/FL/Enumerations.H **** 
 121:fltk-1.3.4-1/FL/Enumerations.H ****     \see Fl::api_version()
 122:fltk-1.3.4-1/FL/Enumerations.H ****  */
 123:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_API_VERSION (FL_MAJOR_VERSION*10000 + FL_MINOR_VERSION*100 + FL_PATCH_VERSION)
 124:fltk-1.3.4-1/FL/Enumerations.H **** 
 125:fltk-1.3.4-1/FL/Enumerations.H **** /**
 126:fltk-1.3.4-1/FL/Enumerations.H ****     The FLTK ABI (Application Binary Interface) version number as an \em int.
 127:fltk-1.3.4-1/FL/Enumerations.H **** 
 128:fltk-1.3.4-1/FL/Enumerations.H ****     FL_ABI_VERSION is an \em int that describes the major, minor, and patch
 129:fltk-1.3.4-1/FL/Enumerations.H ****     ABI version numbers in the same format as FL_API_VERSION.
 130:fltk-1.3.4-1/FL/Enumerations.H **** 
 131:fltk-1.3.4-1/FL/Enumerations.H ****     The ABI version number \p FL_ABI_VERSION is usually the same as the
 132:fltk-1.3.4-1/FL/Enumerations.H ****     API version \p FL_API_VERSION with the last two digits set to '00'.
 133:fltk-1.3.4-1/FL/Enumerations.H **** 
 134:fltk-1.3.4-1/FL/Enumerations.H ****     FLTK retains the ABI (Application Binary Interface) during patch
 135:fltk-1.3.4-1/FL/Enumerations.H ****     releases of the same major and minor versions. Examples:
 136:fltk-1.3.4-1/FL/Enumerations.H **** 
 137:fltk-1.3.4-1/FL/Enumerations.H ****     \verbatim
 138:fltk-1.3.4-1/FL/Enumerations.H ****       FLTK Version  FL_API_VERSION  FL_ABI_VERSION  FL_VERSION (deprecated)
 139:fltk-1.3.4-1/FL/Enumerations.H ****         1.3.0          10300           10300           1.0300
 140:fltk-1.3.4-1/FL/Enumerations.H **** 	1.3.4          10304           10300           1.0304
 141:fltk-1.3.4-1/FL/Enumerations.H ****     \endverbatim
 142:fltk-1.3.4-1/FL/Enumerations.H **** 
 143:fltk-1.3.4-1/FL/Enumerations.H ****     Version 1.2.3 is actually stored as 10203 to allow for more than 9
 144:fltk-1.3.4-1/FL/Enumerations.H ****     minor and patch releases.
 145:fltk-1.3.4-1/FL/Enumerations.H **** 
 146:fltk-1.3.4-1/FL/Enumerations.H ****     The FL_MAJOR_VERSION, FL_MINOR_VERSION, and FL_PATCH_VERSION constants
 147:fltk-1.3.4-1/FL/Enumerations.H ****     give the integral values for the major, minor, and patch releases
 148:fltk-1.3.4-1/FL/Enumerations.H ****     respectively.
 149:fltk-1.3.4-1/FL/Enumerations.H **** 
 150:fltk-1.3.4-1/FL/Enumerations.H ****     To enable new ABI-breaking features in patch releases you can configure
 151:fltk-1.3.4-1/FL/Enumerations.H ****     FLTK to use a higher FL_ABI_VERSION.
 152:fltk-1.3.4-1/FL/Enumerations.H **** 
 153:fltk-1.3.4-1/FL/Enumerations.H ****     \see README.abi-version.txt
 154:fltk-1.3.4-1/FL/Enumerations.H ****  */
 155:fltk-1.3.4-1/FL/Enumerations.H **** #ifndef FL_ABI_VERSION
 156:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ABI_VERSION (FL_MAJOR_VERSION*10000 + FL_MINOR_VERSION*100)
 157:fltk-1.3.4-1/FL/Enumerations.H **** #endif
 158:fltk-1.3.4-1/FL/Enumerations.H **** 
 159:fltk-1.3.4-1/FL/Enumerations.H **** /*
 160:fltk-1.3.4-1/FL/Enumerations.H ****   Check if FL_ABI_VERSION is out of allowed range; redefine if necessary.
 161:fltk-1.3.4-1/FL/Enumerations.H **** 
 162:fltk-1.3.4-1/FL/Enumerations.H ****   This is done to prevent users from defining an illegal ABI version.
 163:fltk-1.3.4-1/FL/Enumerations.H **** 
 164:fltk-1.3.4-1/FL/Enumerations.H ****   Rule: FL_MAJOR_VERSION * 10000 + FL_MINOR_VERSION * 100
 165:fltk-1.3.4-1/FL/Enumerations.H **** 	  <= FL_ABI_VERSION <= FL_API_VERSION.
 166:fltk-1.3.4-1/FL/Enumerations.H **** 
 167:fltk-1.3.4-1/FL/Enumerations.H ****   Example (FLTK 1.3.4):
 168:fltk-1.3.4-1/FL/Enumerations.H **** 
 169:fltk-1.3.4-1/FL/Enumerations.H ****     10300 <= FL_ABI_VERSION <= 10304
 170:fltk-1.3.4-1/FL/Enumerations.H **** 
 171:fltk-1.3.4-1/FL/Enumerations.H ****   Note: configure + CMake can be used to define FL_ABI_VERSION, but they
 172:fltk-1.3.4-1/FL/Enumerations.H ****   do not check validity. This is done here.
 173:fltk-1.3.4-1/FL/Enumerations.H **** */
 174:fltk-1.3.4-1/FL/Enumerations.H **** 
 175:fltk-1.3.4-1/FL/Enumerations.H **** #if FL_ABI_VERSION < FL_MAJOR_VERSION*10000 + FL_MINOR_VERSION*100
 176:fltk-1.3.4-1/FL/Enumerations.H **** 
 177:fltk-1.3.4-1/FL/Enumerations.H **** # undef FL_ABI_VERSION
 178:fltk-1.3.4-1/FL/Enumerations.H **** # define FL_ABI_VERSION (FL_MAJOR_VERSION*10000 + FL_MINOR_VERSION*100)
 179:fltk-1.3.4-1/FL/Enumerations.H **** 
 180:fltk-1.3.4-1/FL/Enumerations.H **** #elif FL_ABI_VERSION > FL_API_VERSION
 181:fltk-1.3.4-1/FL/Enumerations.H **** 
 182:fltk-1.3.4-1/FL/Enumerations.H **** # undef FL_ABI_VERSION
 183:fltk-1.3.4-1/FL/Enumerations.H **** # define FL_ABI_VERSION FL_API_VERSION
 184:fltk-1.3.4-1/FL/Enumerations.H **** 
 185:fltk-1.3.4-1/FL/Enumerations.H **** #endif
 186:fltk-1.3.4-1/FL/Enumerations.H **** 
 187:fltk-1.3.4-1/FL/Enumerations.H **** /*
 188:fltk-1.3.4-1/FL/Enumerations.H ****   FLTK_ABI_VERSION is deprecated (replaced by FL_ABI_VERSION).
 189:fltk-1.3.4-1/FL/Enumerations.H **** 
 190:fltk-1.3.4-1/FL/Enumerations.H ****   This deprecated constant will be removed in FLTK 1.4.0 and later.
 191:fltk-1.3.4-1/FL/Enumerations.H ****   Please use FL_ABI_VERSION when FLTK 1.4.0 has been released.
 192:fltk-1.3.4-1/FL/Enumerations.H **** */
 193:fltk-1.3.4-1/FL/Enumerations.H **** 
 194:fltk-1.3.4-1/FL/Enumerations.H **** #ifdef FLTK_ABI_VERSION
 195:fltk-1.3.4-1/FL/Enumerations.H **** #undef FLTK_ABI_VERSION
 196:fltk-1.3.4-1/FL/Enumerations.H **** #endif
 197:fltk-1.3.4-1/FL/Enumerations.H **** 
 198:fltk-1.3.4-1/FL/Enumerations.H **** #define FLTK_ABI_VERSION FL_ABI_VERSION
 199:fltk-1.3.4-1/FL/Enumerations.H **** 
 200:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/	// group: Version Numbers
 201:fltk-1.3.4-1/FL/Enumerations.H **** 
 202:fltk-1.3.4-1/FL/Enumerations.H **** /**
 203:fltk-1.3.4-1/FL/Enumerations.H ****     Every time a user moves the mouse pointer, clicks a button,
 204:fltk-1.3.4-1/FL/Enumerations.H ****     or presses a key, an event is generated and sent to your
 205:fltk-1.3.4-1/FL/Enumerations.H ****     application. Events can also come from other programs like the
 206:fltk-1.3.4-1/FL/Enumerations.H ****     window manager.
 207:fltk-1.3.4-1/FL/Enumerations.H ****    
 208:fltk-1.3.4-1/FL/Enumerations.H ****     Events are identified by the integer argument passed to the 
 209:fltk-1.3.4-1/FL/Enumerations.H ****     Fl_Widget::handle() virtual method. Other information about the 
 210:fltk-1.3.4-1/FL/Enumerations.H ****     most recent event is stored in static locations and acquired  by 
 211:fltk-1.3.4-1/FL/Enumerations.H ****     calling the Fl::event_*() methods. This static information remains 
 212:fltk-1.3.4-1/FL/Enumerations.H ****     valid until the next event is read from the window system, so it 
 213:fltk-1.3.4-1/FL/Enumerations.H ****     is ok to look at it outside of the handle() method.
 214:fltk-1.3.4-1/FL/Enumerations.H **** 
 215:fltk-1.3.4-1/FL/Enumerations.H ****     Event numbers can be converted to their actual names using the
 216:fltk-1.3.4-1/FL/Enumerations.H ****     \ref fl_eventnames[] array defined in \#include &lt;FL/names.h&gt;
 217:fltk-1.3.4-1/FL/Enumerations.H **** 
 218:fltk-1.3.4-1/FL/Enumerations.H ****     \sa Fl::event_text(), Fl::event_key(), class Fl::
 219:fltk-1.3.4-1/FL/Enumerations.H ****  */
 220:fltk-1.3.4-1/FL/Enumerations.H **** // DEV NOTE: Keep this list in sync with FL/names.H
 221:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_Event {	// events
 222:fltk-1.3.4-1/FL/Enumerations.H ****   /** No event. */
 223:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NO_EVENT		= 0,
 224:fltk-1.3.4-1/FL/Enumerations.H **** 
 225:fltk-1.3.4-1/FL/Enumerations.H ****   /** A mouse button has gone down with the mouse pointing at this
 226:fltk-1.3.4-1/FL/Enumerations.H ****       widget. You can find out what button by calling Fl::event_button(). 
 227:fltk-1.3.4-1/FL/Enumerations.H ****       You find out the mouse position by calling Fl::event_x() and
 228:fltk-1.3.4-1/FL/Enumerations.H ****       Fl::event_y().
 229:fltk-1.3.4-1/FL/Enumerations.H **** 
 230:fltk-1.3.4-1/FL/Enumerations.H ****       A widget indicates that it "wants" the mouse click by returning non-zero 
 231:fltk-1.3.4-1/FL/Enumerations.H ****       from its Fl_Widget::handle() method. It will then become the 
 232:fltk-1.3.4-1/FL/Enumerations.H ****       Fl::pushed() widget and will get FL_DRAG and the matching FL_RELEASE events.  
 233:fltk-1.3.4-1/FL/Enumerations.H ****       If Fl_Widget::handle() returns zero then FLTK will try sending the FL_PUSH 
 234:fltk-1.3.4-1/FL/Enumerations.H ****       to another widget. 
 235:fltk-1.3.4-1/FL/Enumerations.H ****    */
 236:fltk-1.3.4-1/FL/Enumerations.H ****   FL_PUSH		= 1,
 237:fltk-1.3.4-1/FL/Enumerations.H **** 
 238:fltk-1.3.4-1/FL/Enumerations.H ****   /** A mouse button has been released. You can find out what button by 
 239:fltk-1.3.4-1/FL/Enumerations.H ****       calling Fl::event_button().
 240:fltk-1.3.4-1/FL/Enumerations.H **** 
 241:fltk-1.3.4-1/FL/Enumerations.H ****       In order to receive the FL_RELEASE event, the widget must return 
 242:fltk-1.3.4-1/FL/Enumerations.H ****       non-zero when handling FL_PUSH.
 243:fltk-1.3.4-1/FL/Enumerations.H ****    */
 244:fltk-1.3.4-1/FL/Enumerations.H ****   FL_RELEASE		= 2,
 245:fltk-1.3.4-1/FL/Enumerations.H **** 
 246:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has been moved to point at this widget.  This can
 247:fltk-1.3.4-1/FL/Enumerations.H ****       be used for highlighting feedback.  If a widget wants to
 248:fltk-1.3.4-1/FL/Enumerations.H ****       highlight or otherwise track the mouse, it indicates this by
 249:fltk-1.3.4-1/FL/Enumerations.H ****       returning non-zero from its handle() method. It then
 250:fltk-1.3.4-1/FL/Enumerations.H ****       becomes the Fl::belowmouse() widget and will receive 
 251:fltk-1.3.4-1/FL/Enumerations.H ****       FL_MOVE and FL_LEAVE events.
 252:fltk-1.3.4-1/FL/Enumerations.H ****    */
 253:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ENTER		= 3,
 254:fltk-1.3.4-1/FL/Enumerations.H **** 
 255:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has moved out of the widget.
 256:fltk-1.3.4-1/FL/Enumerations.H ****       In order to receive the FL_LEAVE event, the widget must 
 257:fltk-1.3.4-1/FL/Enumerations.H ****       return non-zero when handling FL_ENTER.
 258:fltk-1.3.4-1/FL/Enumerations.H ****    */
 259:fltk-1.3.4-1/FL/Enumerations.H ****   FL_LEAVE		= 4,
 260:fltk-1.3.4-1/FL/Enumerations.H **** 
 261:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has moved with a button held down. The current button state 
 262:fltk-1.3.4-1/FL/Enumerations.H ****       is in Fl::event_state(). The mouse position is in Fl::event_x() and 
 263:fltk-1.3.4-1/FL/Enumerations.H ****       Fl::event_y().
 264:fltk-1.3.4-1/FL/Enumerations.H **** 
 265:fltk-1.3.4-1/FL/Enumerations.H ****       In order to receive FL_DRAG events, the widget must return non-zero 
 266:fltk-1.3.4-1/FL/Enumerations.H ****       when handling FL_PUSH.
 267:fltk-1.3.4-1/FL/Enumerations.H ****    */
 268:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DRAG		= 5,
 269:fltk-1.3.4-1/FL/Enumerations.H **** 
 270:fltk-1.3.4-1/FL/Enumerations.H ****   /** This indicates an <I>attempt</I> to give a widget the keyboard focus.
 271:fltk-1.3.4-1/FL/Enumerations.H **** 
 272:fltk-1.3.4-1/FL/Enumerations.H ****       If a widget wants the focus, it should change itself to display the 
 273:fltk-1.3.4-1/FL/Enumerations.H ****       fact that it has the focus, and return non-zero from its handle() method.
 274:fltk-1.3.4-1/FL/Enumerations.H ****       It then becomes the Fl::focus() widget and gets FL_KEYDOWN, FL_KEYUP, 
 275:fltk-1.3.4-1/FL/Enumerations.H ****       and FL_UNFOCUS events.
 276:fltk-1.3.4-1/FL/Enumerations.H **** 
 277:fltk-1.3.4-1/FL/Enumerations.H ****       The focus will change either because the window manager changed which 
 278:fltk-1.3.4-1/FL/Enumerations.H ****       window gets the focus, or because the user tried to navigate using tab, 
 279:fltk-1.3.4-1/FL/Enumerations.H ****       arrows, or other keys. You can check Fl::event_key() to figure out why 
 280:fltk-1.3.4-1/FL/Enumerations.H ****       it moved. For navigation it will be the key pressed and for interaction 
 281:fltk-1.3.4-1/FL/Enumerations.H ****       with the window manager it will be zero.
 282:fltk-1.3.4-1/FL/Enumerations.H ****    */
 283:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FOCUS		= 6,
 284:fltk-1.3.4-1/FL/Enumerations.H ****   
 285:fltk-1.3.4-1/FL/Enumerations.H ****   /** This event is sent to the previous Fl::focus() widget when another 
 286:fltk-1.3.4-1/FL/Enumerations.H ****       widget gets the focus or the window loses focus.
 287:fltk-1.3.4-1/FL/Enumerations.H ****    */
 288:fltk-1.3.4-1/FL/Enumerations.H ****   FL_UNFOCUS		= 7,
 289:fltk-1.3.4-1/FL/Enumerations.H **** 
 290:fltk-1.3.4-1/FL/Enumerations.H ****   /** A key was pressed (FL_KEYDOWN) or released (FL_KEYUP). 
 291:fltk-1.3.4-1/FL/Enumerations.H ****       Fl_KEYBOARD is a synonym for FL_KEYDOWN.
 292:fltk-1.3.4-1/FL/Enumerations.H ****       The key can be found in Fl::event_key().
 293:fltk-1.3.4-1/FL/Enumerations.H ****       The text that the key should insert can be found with Fl::event_text() 
 294:fltk-1.3.4-1/FL/Enumerations.H ****       and its length is in Fl::event_length(). If you use the key handle()
 295:fltk-1.3.4-1/FL/Enumerations.H ****       should return 1. If you return zero then FLTK assumes you ignored the 
 296:fltk-1.3.4-1/FL/Enumerations.H ****       key and will then attempt to send it to a parent widget. If none of 
 297:fltk-1.3.4-1/FL/Enumerations.H ****       them want it, it will change the event into a FL_SHORTCUT event.
 298:fltk-1.3.4-1/FL/Enumerations.H **** 
 299:fltk-1.3.4-1/FL/Enumerations.H ****       To receive FL_KEYBOARD events you must also respond to the FL_FOCUS
 300:fltk-1.3.4-1/FL/Enumerations.H ****       and FL_UNFOCUS events.
 301:fltk-1.3.4-1/FL/Enumerations.H **** 
 302:fltk-1.3.4-1/FL/Enumerations.H ****       If you are writing a text-editing widget you may also want to call 
 303:fltk-1.3.4-1/FL/Enumerations.H ****       the Fl::compose() function to translate individual keystrokes into 
 304:fltk-1.3.4-1/FL/Enumerations.H ****       non-ASCII characters.
 305:fltk-1.3.4-1/FL/Enumerations.H **** 
 306:fltk-1.3.4-1/FL/Enumerations.H ****       FL_KEYUP events are sent to the widget that currently has focus. This 
 307:fltk-1.3.4-1/FL/Enumerations.H ****       is not necessarily the same widget that received the corresponding 
 308:fltk-1.3.4-1/FL/Enumerations.H ****       FL_KEYDOWN event because focus may have changed between events.
 309:fltk-1.3.4-1/FL/Enumerations.H ****    */
 310:fltk-1.3.4-1/FL/Enumerations.H ****   FL_KEYDOWN		= 8,
 311:fltk-1.3.4-1/FL/Enumerations.H **** 
 312:fltk-1.3.4-1/FL/Enumerations.H ****   /** Equivalent to FL_KEYDOWN.
 313:fltk-1.3.4-1/FL/Enumerations.H ****       \see FL_KEYDOWN
 314:fltk-1.3.4-1/FL/Enumerations.H ****    */
 315:fltk-1.3.4-1/FL/Enumerations.H ****   FL_KEYBOARD		= 8,
 316:fltk-1.3.4-1/FL/Enumerations.H ****  
 317:fltk-1.3.4-1/FL/Enumerations.H ****   /** Key release event.
 318:fltk-1.3.4-1/FL/Enumerations.H ****       \see FL_KEYDOWN
 319:fltk-1.3.4-1/FL/Enumerations.H ****    */
 320:fltk-1.3.4-1/FL/Enumerations.H ****   FL_KEYUP		= 9,
 321:fltk-1.3.4-1/FL/Enumerations.H **** 
 322:fltk-1.3.4-1/FL/Enumerations.H ****   /** The user clicked the close button of a window.
 323:fltk-1.3.4-1/FL/Enumerations.H ****       This event is used internally only to trigger the callback of
 324:fltk-1.3.4-1/FL/Enumerations.H ****       Fl_Window derived classed. The default callback closes the 
 325:fltk-1.3.4-1/FL/Enumerations.H ****       window calling Fl_Window::hide().
 326:fltk-1.3.4-1/FL/Enumerations.H ****    */
 327:fltk-1.3.4-1/FL/Enumerations.H ****   FL_CLOSE		= 10,
 328:fltk-1.3.4-1/FL/Enumerations.H **** 
 329:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has moved without any mouse buttons held down. 
 330:fltk-1.3.4-1/FL/Enumerations.H ****       This event is sent to the Fl::belowmouse() widget.
 331:fltk-1.3.4-1/FL/Enumerations.H **** 
 332:fltk-1.3.4-1/FL/Enumerations.H ****       In order to receive FL_MOVE events, the widget must return 
 333:fltk-1.3.4-1/FL/Enumerations.H ****       non-zero when handling FL_ENTER.
 334:fltk-1.3.4-1/FL/Enumerations.H ****    */
 335:fltk-1.3.4-1/FL/Enumerations.H ****   FL_MOVE		= 11,
 336:fltk-1.3.4-1/FL/Enumerations.H **** 
 337:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the Fl::focus() widget is zero or ignores an FL_KEYBOARD
 338:fltk-1.3.4-1/FL/Enumerations.H ****       event then FLTK tries sending this event to every widget it 
 339:fltk-1.3.4-1/FL/Enumerations.H ****       can, until one of them returns non-zero. FL_SHORTCUT is first 
 340:fltk-1.3.4-1/FL/Enumerations.H ****       sent to the Fl::belowmouse() widget, then its parents and siblings, 
 341:fltk-1.3.4-1/FL/Enumerations.H ****       and eventually to every widget in the window, trying to find an 
 342:fltk-1.3.4-1/FL/Enumerations.H ****       object that returns non-zero. FLTK tries really hard to not to ignore 
 343:fltk-1.3.4-1/FL/Enumerations.H ****       any keystrokes!
 344:fltk-1.3.4-1/FL/Enumerations.H **** 
 345:fltk-1.3.4-1/FL/Enumerations.H ****       You can also make "global" shortcuts by using Fl::add_handler(). A 
 346:fltk-1.3.4-1/FL/Enumerations.H ****       global shortcut will work no matter what windows are displayed or 
 347:fltk-1.3.4-1/FL/Enumerations.H ****       which one has the focus.
 348:fltk-1.3.4-1/FL/Enumerations.H ****    */
 349:fltk-1.3.4-1/FL/Enumerations.H ****   FL_SHORTCUT		= 12,
 350:fltk-1.3.4-1/FL/Enumerations.H **** 
 351:fltk-1.3.4-1/FL/Enumerations.H ****   /** This widget is no longer active, due to Fl_Widget::deactivate() 
 352:fltk-1.3.4-1/FL/Enumerations.H ****       being called on it or one of its parents. Fl_Widget::active() may 
 353:fltk-1.3.4-1/FL/Enumerations.H ****       still be true after this, the widget is only active if Fl_Widget::active()
 354:fltk-1.3.4-1/FL/Enumerations.H ****       is true on it and all its parents (use Fl_Widget::active_r() to check this).
 355:fltk-1.3.4-1/FL/Enumerations.H ****    */
 356:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DEACTIVATE		= 13,
 357:fltk-1.3.4-1/FL/Enumerations.H **** 
 358:fltk-1.3.4-1/FL/Enumerations.H ****   /** This widget is now active, due to Fl_Widget::activate() being 
 359:fltk-1.3.4-1/FL/Enumerations.H ****       called on it or one of its parents.
 360:fltk-1.3.4-1/FL/Enumerations.H ****    */
 361:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ACTIVATE		= 14,
 362:fltk-1.3.4-1/FL/Enumerations.H **** 
 363:fltk-1.3.4-1/FL/Enumerations.H ****   /** This widget is no longer visible, due to Fl_Widget::hide() being 
 364:fltk-1.3.4-1/FL/Enumerations.H ****       called on it or one of its parents, or due to a parent window being 
 365:fltk-1.3.4-1/FL/Enumerations.H ****       minimized.  Fl_Widget::visible() may still be true after this, but the 
 366:fltk-1.3.4-1/FL/Enumerations.H ****       widget is visible only if visible() is true for it and all its 
 367:fltk-1.3.4-1/FL/Enumerations.H ****       parents (use Fl_Widget::visible_r() to check this).
 368:fltk-1.3.4-1/FL/Enumerations.H ****    */
 369:fltk-1.3.4-1/FL/Enumerations.H ****   FL_HIDE		= 15,
 370:fltk-1.3.4-1/FL/Enumerations.H **** 
 371:fltk-1.3.4-1/FL/Enumerations.H ****   /** This widget is visible again, due to Fl_Widget::show() being called on 
 372:fltk-1.3.4-1/FL/Enumerations.H ****       it or one of its parents, or due to a parent window being restored. 
 373:fltk-1.3.4-1/FL/Enumerations.H ****       Child Fl_Windows respond to this by actually creating the window if not 
 374:fltk-1.3.4-1/FL/Enumerations.H ****       done already, so if you subclass a window, be sure to pass FL_SHOW 
 375:fltk-1.3.4-1/FL/Enumerations.H ****       to the base class Fl_Widget::handle() method!
 376:fltk-1.3.4-1/FL/Enumerations.H ****    */
 377:fltk-1.3.4-1/FL/Enumerations.H ****   FL_SHOW		= 16,
 378:fltk-1.3.4-1/FL/Enumerations.H **** 
 379:fltk-1.3.4-1/FL/Enumerations.H ****   /** You should get this event some time after you call Fl::paste(). 
 380:fltk-1.3.4-1/FL/Enumerations.H ****       The contents of Fl::event_text() is the text to insert and the number 
 381:fltk-1.3.4-1/FL/Enumerations.H ****       of characters is in Fl::event_length().
 382:fltk-1.3.4-1/FL/Enumerations.H ****    */
 383:fltk-1.3.4-1/FL/Enumerations.H ****   FL_PASTE		= 17,
 384:fltk-1.3.4-1/FL/Enumerations.H **** 
 385:fltk-1.3.4-1/FL/Enumerations.H ****   /** The Fl::selection_owner() will get this event before the selection is 
 386:fltk-1.3.4-1/FL/Enumerations.H ****       moved to another widget. This indicates that some other widget or program 
 387:fltk-1.3.4-1/FL/Enumerations.H ****       has claimed the selection. Motif programs used this to clear the selection 
 388:fltk-1.3.4-1/FL/Enumerations.H ****       indication. Most modern programs ignore this.
 389:fltk-1.3.4-1/FL/Enumerations.H ****    */
 390:fltk-1.3.4-1/FL/Enumerations.H ****   FL_SELECTIONCLEAR	= 18,
 391:fltk-1.3.4-1/FL/Enumerations.H **** 
 392:fltk-1.3.4-1/FL/Enumerations.H ****   /** The user has moved the mouse wheel. The Fl::event_dx() and Fl::event_dy()
 393:fltk-1.3.4-1/FL/Enumerations.H ****       methods can be used to find the amount to scroll horizontally and vertically.
 394:fltk-1.3.4-1/FL/Enumerations.H ****    */
 395:fltk-1.3.4-1/FL/Enumerations.H ****   FL_MOUSEWHEEL		= 19,
 396:fltk-1.3.4-1/FL/Enumerations.H **** 
 397:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has been moved to point at this widget. A widget that is 
 398:fltk-1.3.4-1/FL/Enumerations.H ****       interested in receiving drag'n'drop data must return 1 to receive 
 399:fltk-1.3.4-1/FL/Enumerations.H ****       FL_DND_DRAG, FL_DND_LEAVE and FL_DND_RELEASE events.
 400:fltk-1.3.4-1/FL/Enumerations.H ****    */
 401:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DND_ENTER		= 20,
 402:fltk-1.3.4-1/FL/Enumerations.H **** 
 403:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has been moved inside a widget while dragging data.  A 
 404:fltk-1.3.4-1/FL/Enumerations.H ****       widget that is interested in receiving drag'n'drop data should 
 405:fltk-1.3.4-1/FL/Enumerations.H ****       indicate the possible drop position.
 406:fltk-1.3.4-1/FL/Enumerations.H ****    */
 407:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DND_DRAG		= 21,
 408:fltk-1.3.4-1/FL/Enumerations.H **** 
 409:fltk-1.3.4-1/FL/Enumerations.H ****   /** The mouse has moved out of the widget.
 410:fltk-1.3.4-1/FL/Enumerations.H ****    */
 411:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DND_LEAVE		= 22,
 412:fltk-1.3.4-1/FL/Enumerations.H **** 
 413:fltk-1.3.4-1/FL/Enumerations.H ****   /** The user has released the mouse button dropping data into the widget. 
 414:fltk-1.3.4-1/FL/Enumerations.H ****       If the widget returns 1, it will receive the data in the immediately 
 415:fltk-1.3.4-1/FL/Enumerations.H ****       following FL_PASTE event.
 416:fltk-1.3.4-1/FL/Enumerations.H ****    */
 417:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DND_RELEASE	= 23,
 418:fltk-1.3.4-1/FL/Enumerations.H ****   /** The screen configuration (number, positions) was changed.
 419:fltk-1.3.4-1/FL/Enumerations.H ****    Use Fl::add_handler() to be notified of this event.
 420:fltk-1.3.4-1/FL/Enumerations.H ****    */
 421:fltk-1.3.4-1/FL/Enumerations.H ****   FL_SCREEN_CONFIGURATION_CHANGED = 24,
 422:fltk-1.3.4-1/FL/Enumerations.H ****   /** The fullscreen state of the window has changed
 423:fltk-1.3.4-1/FL/Enumerations.H ****    */
 424:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FULLSCREEN         = 25,
 425:fltk-1.3.4-1/FL/Enumerations.H ****   /** The user has made a zoom/pinch/magnification gesture. 
 426:fltk-1.3.4-1/FL/Enumerations.H ****       The Fl::event_dy() method can be used to find magnification amount,
 427:fltk-1.3.4-1/FL/Enumerations.H ****       Fl::event_x() and Fl::event_y() are set as well.
 428:fltk-1.3.4-1/FL/Enumerations.H ****      */
 429:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ZOOM_GESTURE	= 26
 430:fltk-1.3.4-1/FL/Enumerations.H **** };
 431:fltk-1.3.4-1/FL/Enumerations.H **** 
 432:fltk-1.3.4-1/FL/Enumerations.H **** /** \name When Conditions */
 433:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 434:fltk-1.3.4-1/FL/Enumerations.H **** /** These constants determine when a callback is performed.
 435:fltk-1.3.4-1/FL/Enumerations.H **** 
 436:fltk-1.3.4-1/FL/Enumerations.H ****     \sa Fl_Widget::when();
 437:fltk-1.3.4-1/FL/Enumerations.H ****     \todo doxygen comments for values are incomplete and maybe wrong or unclear
 438:fltk-1.3.4-1/FL/Enumerations.H ****  */
 439:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_When { // Fl_Widget::when():
 440:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_NEVER		= 0,	///< Never call the callback
 441:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_CHANGED	= 1,	///< Do the callback only when the widget value changes
 442:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_NOT_CHANGED	= 2,	///< Do the callback whenever the user interacts with the widget
 443:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_RELEASE	= 4,	///< Do the callback when the button or key is released and the value change
 444:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_RELEASE_ALWAYS= 6,	///< Do the callback when the button or key is released, even if the v
 445:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_ENTER_KEY	= 8,	///< Do the callback when the user presses the ENTER key and the value cha
 446:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_ENTER_KEY_ALWAYS=10,	///< Do the callback when the user presses the ENTER key, even if th
 447:fltk-1.3.4-1/FL/Enumerations.H ****   FL_WHEN_ENTER_KEY_CHANGED=11	///< ?
 448:fltk-1.3.4-1/FL/Enumerations.H **** };
 449:fltk-1.3.4-1/FL/Enumerations.H **** 
 450:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/		// group: When Conditions
 451:fltk-1.3.4-1/FL/Enumerations.H **** 
 452:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Mouse and Keyboard Events
 453:fltk-1.3.4-1/FL/Enumerations.H **** 
 454:fltk-1.3.4-1/FL/Enumerations.H **** 	This and the following constants define the non-ASCII keys on the
 455:fltk-1.3.4-1/FL/Enumerations.H **** 	keyboard for FL_KEYBOARD and FL_SHORTCUT events.
 456:fltk-1.3.4-1/FL/Enumerations.H **** 
 457:fltk-1.3.4-1/FL/Enumerations.H **** 	\todo	FL_Button and FL_key... constants could be structured better
 458:fltk-1.3.4-1/FL/Enumerations.H **** 		(use an enum or some doxygen grouping ?)
 459:fltk-1.3.4-1/FL/Enumerations.H ****   
 460:fltk-1.3.4-1/FL/Enumerations.H **** 	\sa	Fl::event_key() and Fl::get_key(int) (use ascii letters for all other keys):
 461:fltk-1.3.4-1/FL/Enumerations.H ****  */
 462:fltk-1.3.4-1/FL/Enumerations.H **** 
 463:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 464:fltk-1.3.4-1/FL/Enumerations.H **** 
 465:fltk-1.3.4-1/FL/Enumerations.H **** // FIXME: These codes collide with valid Unicode keys
 466:fltk-1.3.4-1/FL/Enumerations.H **** 
 467:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Button	0xfee8	///< A mouse button; use Fl_Button + n for mouse button n.
 468:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BackSpace	0xff08	///< The backspace key.
 469:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Tab		0xff09	///< The tab key.
 470:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Iso_Key	0xff0c  ///< The additional key of ISO keyboards.
 471:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Enter	0xff0d	///< The enter key. 
 472:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Pause	0xff13	///< The pause key.
 473:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Scroll_Lock	0xff14	///< The scroll lock key.
 474:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Escape	0xff1b	///< The escape key.
 475:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Kana         0xff2e  ///< The Kana key of JIS keyboards.
 476:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Eisu         0xff2f  ///< The Eisu key of JIS keyboards.
 477:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Yen          0xff30  ///< The Yen key of JIS keyboards.
 478:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_JIS_Underscore 0xff31 ///< The underscore key of JIS keyboards.
 479:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Home		0xff50	///< The home key.
 480:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Left		0xff51	///< The left arrow key.
 481:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Up		0xff52	///< The up arrow key.
 482:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Right	0xff53	///< The right arrow key.
 483:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Down		0xff54	///< The down arrow key.
 484:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Page_Up	0xff55	///< The page-up key.
 485:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Page_Down	0xff56	///< The page-down key.
 486:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_End		0xff57	///< The end key.
 487:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Print	0xff61	///< The print (or print-screen) key.
 488:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Insert	0xff63	///< The insert key. 
 489:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Menu		0xff67	///< The menu key.
 490:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Help		0xff68	///< The 'help' key on Mac keyboards
 491:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Num_Lock	0xff7f	///< The num lock key.
 492:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_KP		0xff80	///< One of the keypad numbers; use FL_KP + 'n' for digit n.
 493:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_KP_Enter	0xff8d	///< The enter key on the keypad, same as Fl_KP+'\\r'.
 494:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_KP_Last	0xffbd	///< The last keypad key; use to range-check keypad.
 495:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_F		0xffbd	///< One of the function keys; use FL_F + n for function key n.
 496:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_F_Last	0xffe0	///< The last function key; use to range-check function keys.
 497:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Shift_L	0xffe1	///< The lefthand shift key.
 498:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Shift_R	0xffe2	///< The righthand shift key.
 499:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Control_L	0xffe3	///< The lefthand control key.
 500:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Control_R	0xffe4	///< The righthand control key.
 501:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Caps_Lock	0xffe5	///< The caps lock key.
 502:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Meta_L	0xffe7	///< The left meta/Windows key.
 503:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Meta_R	0xffe8	///< The right meta/Windows key.
 504:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Alt_L	0xffe9	///< The left alt key.
 505:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Alt_R	0xffea	///< The right alt key. 
 506:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Delete	0xffff	///< The delete key.
 507:fltk-1.3.4-1/FL/Enumerations.H **** 
 508:fltk-1.3.4-1/FL/Enumerations.H **** // These use the Private Use Area (PUA) of the Basic Multilingual Plane
 509:fltk-1.3.4-1/FL/Enumerations.H **** // of Unicode. Guaranteed not to conflict with a proper Unicode character.
 510:fltk-1.3.4-1/FL/Enumerations.H **** 
 511:fltk-1.3.4-1/FL/Enumerations.H **** // These primarily map to the XFree86 keysym range
 512:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Volume_Down  0xEF11   /* Volume control down        */
 513:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Volume_Mute  0xEF12   /* Mute sound from the system */
 514:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Volume_Up    0xEF13   /* Volume control up          */
 515:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Media_Play   0xEF14   /* Start playing of audio     */
 516:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Media_Stop   0xEF15   /* Stop playing audio         */
 517:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Media_Prev   0xEF16   /* Previous track             */
 518:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Media_Next   0xEF17   /* Next track                 */
 519:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Home_Page    0xEF18   /* Display user's home page   */
 520:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Mail         0xEF19   /* Invoke user's mail program */
 521:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Search       0xEF1B   /* Search                     */
 522:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Back         0xEF26   /* Like back on a browser     */
 523:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Forward      0xEF27   /* Like forward on a browser  */
 524:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Stop         0xEF28   /* Stop current operation     */
 525:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Refresh      0xEF29   /* Refresh the page           */
 526:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Sleep        0xEF2F   /* Put system to sleep        */
 527:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_Favorites    0xEF30   /* Show favorite locations    */
 528:fltk-1.3.4-1/FL/Enumerations.H **** 
 529:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/	// group: Mouse and Keyboard Events
 530:fltk-1.3.4-1/FL/Enumerations.H **** 
 531:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Mouse Buttons
 532:fltk-1.3.4-1/FL/Enumerations.H **** 
 533:fltk-1.3.4-1/FL/Enumerations.H **** 	These constants define the button numbers for FL_PUSH and FL_RELEASE events.
 534:fltk-1.3.4-1/FL/Enumerations.H **** 	
 535:fltk-1.3.4-1/FL/Enumerations.H **** 	\sa Fl::event_button()
 536:fltk-1.3.4-1/FL/Enumerations.H **** */
 537:fltk-1.3.4-1/FL/Enumerations.H **** 
 538:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 539:fltk-1.3.4-1/FL/Enumerations.H **** 
 540:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_LEFT_MOUSE	1	///< The left mouse button
 541:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_MIDDLE_MOUSE	2	///< The middle mouse button
 542:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_RIGHT_MOUSE	3	///< The right mouse button
 543:fltk-1.3.4-1/FL/Enumerations.H **** 
 544:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/		// group: Mouse Buttons
 545:fltk-1.3.4-1/FL/Enumerations.H **** 
 546:fltk-1.3.4-1/FL/Enumerations.H **** 
 547:fltk-1.3.4-1/FL/Enumerations.H **** /** \name	Event States
 548:fltk-1.3.4-1/FL/Enumerations.H **** 
 549:fltk-1.3.4-1/FL/Enumerations.H **** 	The following constants define bits in the Fl::event_state() value.
 550:fltk-1.3.4-1/FL/Enumerations.H **** */
 551:fltk-1.3.4-1/FL/Enumerations.H **** 
 552:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/		// group: Event States
 553:fltk-1.3.4-1/FL/Enumerations.H **** 
 554:fltk-1.3.4-1/FL/Enumerations.H **** // FIXME: it would be nice to have the modifiers in the upper 8 bit so that
 555:fltk-1.3.4-1/FL/Enumerations.H **** //        a unicode ke (24bit) can be sent as an unsigned with the modifiers.
 556:fltk-1.3.4-1/FL/Enumerations.H **** 
 557:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHIFT	0x00010000	///< One of the shift keys is down
 558:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_CAPS_LOCK	0x00020000	///< The caps lock is on
 559:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_CTRL		0x00040000	///< One of the ctrl keys is down
 560:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ALT		0x00080000	///< One of the alt keys is down
 561:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_LOCK	0x00100000	///< The num lock is on
 562:fltk-1.3.4-1/FL/Enumerations.H **** 					// most X servers do this?
 563:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_META		0x00400000	///< One of the meta/Windows keys is down
 564:fltk-1.3.4-1/FL/Enumerations.H **** 					// correct for XFree86
 565:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SCROLL_LOCK	0x00800000	///< The scroll lock is on
 566:fltk-1.3.4-1/FL/Enumerations.H **** 					// correct for XFree86
 567:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTON1	0x01000000	///< Mouse button 1 is pushed
 568:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTON2	0x02000000	///< Mouse button 2 is pushed
 569:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTON3	0x04000000	///< Mouse button 3 is pushed
 570:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTONS	0x7f000000	///< Any mouse button is pushed
 571:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_BUTTON(n)	(0x00800000<<(n)) ///< Mouse button n (n > 0) is pushed
 572:fltk-1.3.4-1/FL/Enumerations.H **** 
 573:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_KEY_MASK 0x0000ffff		///< All keys are 16 bit for now 
 574:fltk-1.3.4-1/FL/Enumerations.H **** 					//   FIXME: Unicode needs 24 bits!
 575:fltk-1.3.4-1/FL/Enumerations.H **** 
 576:fltk-1.3.4-1/FL/Enumerations.H **** #ifdef __APPLE__
 577:fltk-1.3.4-1/FL/Enumerations.H **** #  define FL_COMMAND	FL_META		///< An alias for FL_CTRL on WIN32 and X11, or FL_META on MacOS X
 578:fltk-1.3.4-1/FL/Enumerations.H **** #  define FL_CONTROL 	FL_CTRL		///< An alias for FL_META on WIN32 and X11, or FL_CTRL on MacOS X
 579:fltk-1.3.4-1/FL/Enumerations.H **** #else
 580:fltk-1.3.4-1/FL/Enumerations.H **** #  define FL_COMMAND	FL_CTRL		///< An alias for FL_CTRL on WIN32 and X11, or FL_META on MacOS X
 581:fltk-1.3.4-1/FL/Enumerations.H **** #  define FL_CONTROL	FL_META		///< An alias for FL_META on WIN32 and X11, or FL_CTRL on MacOS X
 582:fltk-1.3.4-1/FL/Enumerations.H **** #endif // __APPLE__
 583:fltk-1.3.4-1/FL/Enumerations.H **** 
 584:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/		// group: Event States
 585:fltk-1.3.4-1/FL/Enumerations.H **** 
 586:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Box Types
 587:fltk-1.3.4-1/FL/Enumerations.H ****     \brief FLTK standard box types
 588:fltk-1.3.4-1/FL/Enumerations.H ****     
 589:fltk-1.3.4-1/FL/Enumerations.H ****     This enum defines the standard box types included with FLTK.
 590:fltk-1.3.4-1/FL/Enumerations.H ****     
 591:fltk-1.3.4-1/FL/Enumerations.H ****     FL_NO_BOX means nothing is drawn at all, so whatever is already 
 592:fltk-1.3.4-1/FL/Enumerations.H ****     on the screen remains. The FL_..._FRAME types only draw their edges, 
 593:fltk-1.3.4-1/FL/Enumerations.H ****     leaving the interior unchanged. The blue color in Figure 1 
 594:fltk-1.3.4-1/FL/Enumerations.H ****     is the area that is not drawn by the frame types.
 595:fltk-1.3.4-1/FL/Enumerations.H ****     
 596:fltk-1.3.4-1/FL/Enumerations.H ****     \image html boxtypes.png "Figure 1: FLTK standard box types"
 597:fltk-1.3.4-1/FL/Enumerations.H ****     \image latex boxtypes.png "FLTK standard box types" width=10cm
 598:fltk-1.3.4-1/FL/Enumerations.H ****     \todo	Description of boxtypes is incomplete.
 599:fltk-1.3.4-1/FL/Enumerations.H ****     		See below for the defined enum Fl_Boxtype.
 600:fltk-1.3.4-1/FL/Enumerations.H **** 		\see src/Fl_get_system_colors.cxx
 601:fltk-1.3.4-1/FL/Enumerations.H **** */
 602:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 603:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_Boxtype { // boxtypes (if you change these you must fix fl_boxtype.cxx):
 604:fltk-1.3.4-1/FL/Enumerations.H **** 
 605:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NO_BOX = 0,		///< nothing is drawn at all, this box is invisible
 606:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FLAT_BOX,			///< a flat box
 607:fltk-1.3.4-1/FL/Enumerations.H ****   FL_UP_BOX,			///< see figure 1
 608:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DOWN_BOX,			///< see figure 1
 609:fltk-1.3.4-1/FL/Enumerations.H ****   FL_UP_FRAME,			///< see figure 1
 610:fltk-1.3.4-1/FL/Enumerations.H ****   FL_DOWN_FRAME,		///< see figure 1
 611:fltk-1.3.4-1/FL/Enumerations.H ****   FL_THIN_UP_BOX,		///< see figure 1
 612:fltk-1.3.4-1/FL/Enumerations.H ****   FL_THIN_DOWN_BOX,		///< see figure 1
 613:fltk-1.3.4-1/FL/Enumerations.H ****   FL_THIN_UP_FRAME,		///< see figure 1
 614:fltk-1.3.4-1/FL/Enumerations.H ****   FL_THIN_DOWN_FRAME,		///< see figure 1
 615:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ENGRAVED_BOX,		///< see figure 1
 616:fltk-1.3.4-1/FL/Enumerations.H ****   FL_EMBOSSED_BOX,		///< see figure 1
 617:fltk-1.3.4-1/FL/Enumerations.H ****   FL_ENGRAVED_FRAME,		///< see figure 1
 618:fltk-1.3.4-1/FL/Enumerations.H ****   FL_EMBOSSED_FRAME,		///< see figure 1
 619:fltk-1.3.4-1/FL/Enumerations.H ****   FL_BORDER_BOX,		///< see figure 1
 620:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_SHADOW_BOX,		///< see figure 1
 621:fltk-1.3.4-1/FL/Enumerations.H ****   FL_BORDER_FRAME,		///< see figure 1
 622:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_SHADOW_FRAME,		///< see figure 1
 623:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ROUNDED_BOX,		///< see figure 1
 624:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_RSHADOW_BOX,		///< see figure 1
 625:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ROUNDED_FRAME,		///< see figure 1
 626:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_RFLAT_BOX,		///< see figure 1
 627:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ROUND_UP_BOX,		///< see figure 1
 628:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ROUND_DOWN_BOX,		///< see figure 1
 629:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_DIAMOND_UP_BOX,		///< see figure 1
 630:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_DIAMOND_DOWN_BOX,		///< see figure 1
 631:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_OVAL_BOX,			///< see figure 1
 632:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_OSHADOW_BOX,		///< see figure 1
 633:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_OVAL_FRAME,		///< see figure 1
 634:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_OFLAT_BOX,		///< see figure 1
 635:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_UP_BOX,		///< plastic version of FL_UP_BOX
 636:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_DOWN_BOX,		///< plastic version of FL_DOWN_BOX
 637:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_UP_FRAME,		///< plastic version of FL_UP_FRAME
 638:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_DOWN_FRAME,	///< plastic version of FL_DOWN_FRAME
 639:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_THIN_UP_BOX,	///< plastic version of FL_THIN_UP_BOX
 640:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_THIN_DOWN_BOX,	///< plastic version of FL_THIN_DOWN_BOX
 641:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_ROUND_UP_BOX,	///< plastic version of FL_ROUND_UP_BOX
 642:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_PLASTIC_ROUND_DOWN_BOX,	///< plastic version of FL_ROUND_DOWN_BOX
 643:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_UP_BOX,		///< gtk+ version of FL_UP_BOX
 644:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_DOWN_BOX,		///< gtk+ version of FL_DOWN_BOX
 645:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_UP_FRAME,		///< gtk+ version of FL_UP_FRAME
 646:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_DOWN_FRAME,		///< gtk+ version of FL_DOWN_FRAME
 647:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_THIN_UP_BOX,		///< gtk+ version of FL_THIN_UP_BOX
 648:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_THIN_DOWN_BOX,	///< gtk+ version of FL_THIN_DOWN_BOX
 649:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_THIN_UP_FRAME,	///< gtk+ version of FL_THIN_UP_FRAME
 650:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_THIN_DOWN_FRAME,	///< gtk+ version of FL_THIN_DOWN_FRAME
 651:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_ROUND_UP_BOX,		///< gtk+ version of FL_ROUND_UP_BOX
 652:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GTK_ROUND_DOWN_BOX,	///< gtk+ version of FL_ROUND_DOWN_BOX
 653:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_UP_BOX,		///< gleam version of FL_UP_BOX
 654:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_DOWN_BOX,		///< gleam version of FL_DOWN_BOX
 655:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_UP_FRAME,		///< gleam version of FL_UP_FRAME
 656:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_DOWN_FRAME,		///< gleam version of FL_DOWN_FRAME
 657:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_THIN_UP_BOX,	///< gleam version of FL_THIN_UP_BOX
 658:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_THIN_DOWN_BOX,	///< gleam version of FL_THIN_DOWN_BOX
 659:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_ROUND_UP_BOX,	///< gleam version of FL_ROUND_UP_BOX
 660:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_GLEAM_ROUND_DOWN_BOX,	///< gleam version of FL_ROUND_DOWN_BOX
 661:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FREE_BOXTYPE		///< the first free box type for creation of new box types
 662:fltk-1.3.4-1/FL/Enumerations.H **** };
 663:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_ROUND_UP_BOX();
 664:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ROUND_UP_BOX fl_define_FL_ROUND_UP_BOX()
 665:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ROUND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_ROUND_UP_BOX()+1)
 666:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_SHADOW_BOX();
 667:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHADOW_BOX fl_define_FL_SHADOW_BOX()
 668:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHADOW_FRAME (Fl_Boxtype)(fl_define_FL_SHADOW_BOX()+2)
 669:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_ROUNDED_BOX();
 670:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ROUNDED_BOX fl_define_FL_ROUNDED_BOX()
 671:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ROUNDED_FRAME (Fl_Boxtype)(fl_define_FL_ROUNDED_BOX()+2)
 672:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_RFLAT_BOX();
 673:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_RFLAT_BOX fl_define_FL_RFLAT_BOX()
 674:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_RSHADOW_BOX();
 675:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_RSHADOW_BOX fl_define_FL_RSHADOW_BOX()
 676:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_DIAMOND_BOX();
 677:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_DIAMOND_UP_BOX fl_define_FL_DIAMOND_BOX()
 678:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_DIAMOND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_DIAMOND_BOX()+1)
 679:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_OVAL_BOX();
 680:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_OVAL_BOX fl_define_FL_OVAL_BOX()
 681:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_OSHADOW_BOX (Fl_Boxtype)(fl_define_FL_OVAL_BOX()+1)
 682:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_OVAL_FRAME (Fl_Boxtype)(fl_define_FL_OVAL_BOX()+2)
 683:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_OFLAT_BOX (Fl_Boxtype)(fl_define_FL_OVAL_BOX()+3)
 684:fltk-1.3.4-1/FL/Enumerations.H **** 
 685:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_PLASTIC_UP_BOX();
 686:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_UP_BOX fl_define_FL_PLASTIC_UP_BOX()
 687:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_DOWN_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+1)
 688:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_UP_FRAME (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+2)
 689:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_DOWN_FRAME (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+3)
 690:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_THIN_UP_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+4)
 691:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_THIN_DOWN_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+5)
 692:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_ROUND_UP_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+6)
 693:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_PLASTIC_ROUND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_PLASTIC_UP_BOX()+7)
 694:fltk-1.3.4-1/FL/Enumerations.H **** 
 695:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_GTK_UP_BOX();
 696:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_UP_BOX fl_define_FL_GTK_UP_BOX()
 697:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+1)
 698:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_UP_FRAME (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+2)
 699:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_DOWN_FRAME (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+3)
 700:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_THIN_UP_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+4)
 701:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_THIN_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+5)
 702:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_THIN_UP_FRAME (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+6)
 703:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_THIN_DOWN_FRAME (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+7)
 704:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_ROUND_UP_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+8)
 705:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GTK_ROUND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GTK_UP_BOX()+9)
 706:fltk-1.3.4-1/FL/Enumerations.H **** 
 707:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Boxtype fl_define_FL_GLEAM_UP_BOX();
 708:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_UP_BOX fl_define_FL_GLEAM_UP_BOX()
 709:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+1)
 710:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_UP_FRAME (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+2)
 711:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_DOWN_FRAME (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+3)
 712:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_THIN_UP_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+4)
 713:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_THIN_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+5)
 714:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_ROUND_UP_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+6)
 715:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GLEAM_ROUND_DOWN_BOX (Fl_Boxtype)(fl_define_FL_GLEAM_UP_BOX()+7)
 716:fltk-1.3.4-1/FL/Enumerations.H **** 
 717:fltk-1.3.4-1/FL/Enumerations.H **** // conversions of box types to other boxtypes:
 718:fltk-1.3.4-1/FL/Enumerations.H **** /**
 719:fltk-1.3.4-1/FL/Enumerations.H ****   Get the filled version of a frame.
 720:fltk-1.3.4-1/FL/Enumerations.H ****   If no filled version of a given frame exists, the behavior of this function
 721:fltk-1.3.4-1/FL/Enumerations.H ****   is undefined and some random box or frame is returned.
 722:fltk-1.3.4-1/FL/Enumerations.H ****  */
 723:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Boxtype fl_box(Fl_Boxtype b) {
 724:fltk-1.3.4-1/FL/Enumerations.H ****   return (Fl_Boxtype)((b<FL_UP_BOX||b%4>1)?b:(b-2));
 725:fltk-1.3.4-1/FL/Enumerations.H **** }
 726:fltk-1.3.4-1/FL/Enumerations.H **** /**
 727:fltk-1.3.4-1/FL/Enumerations.H ****   Get the "pressed" or "down" version of a box.
 728:fltk-1.3.4-1/FL/Enumerations.H ****   If no "down" version of a given box exists, the behavior of this function
 729:fltk-1.3.4-1/FL/Enumerations.H ****   is undefined and some random box or frame is returned.
 730:fltk-1.3.4-1/FL/Enumerations.H ****  */
 731:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Boxtype fl_down(Fl_Boxtype b) {
 732:fltk-1.3.4-1/FL/Enumerations.H ****   return (Fl_Boxtype)((b<FL_UP_BOX)?b:(b|1));
 733:fltk-1.3.4-1/FL/Enumerations.H **** }
 734:fltk-1.3.4-1/FL/Enumerations.H **** /**
 735:fltk-1.3.4-1/FL/Enumerations.H ****   Get the unfilled, frame only version of a box.
 736:fltk-1.3.4-1/FL/Enumerations.H ****   If no frame version of a given box exists, the behavior of this function
 737:fltk-1.3.4-1/FL/Enumerations.H ****   is undefined and some random box or frame is returned.
 738:fltk-1.3.4-1/FL/Enumerations.H ****  */
 739:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Boxtype fl_frame(Fl_Boxtype b) {
 740:fltk-1.3.4-1/FL/Enumerations.H ****   return (Fl_Boxtype)((b%4<2)?b:(b+2));
 741:fltk-1.3.4-1/FL/Enumerations.H **** }
 742:fltk-1.3.4-1/FL/Enumerations.H **** 
 743:fltk-1.3.4-1/FL/Enumerations.H **** // back-compatibility box types:
 744:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FRAME FL_ENGRAVED_FRAME
 745:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FRAME_BOX FL_ENGRAVED_BOX
 746:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_CIRCLE_BOX FL_ROUND_DOWN_BOX
 747:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_DIAMOND_BOX FL_DIAMOND_DOWN_BOX
 748:fltk-1.3.4-1/FL/Enumerations.H **** 
 749:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/	// group: Box Types
 750:fltk-1.3.4-1/FL/Enumerations.H **** 
 751:fltk-1.3.4-1/FL/Enumerations.H **** /**
 752:fltk-1.3.4-1/FL/Enumerations.H ****    The labeltype() method sets the type of the label.
 753:fltk-1.3.4-1/FL/Enumerations.H **** 
 754:fltk-1.3.4-1/FL/Enumerations.H ****    The following standard label types are included:
 755:fltk-1.3.4-1/FL/Enumerations.H **** 
 756:fltk-1.3.4-1/FL/Enumerations.H ****    \todo	The doxygen comments are incomplete, and some labeltypes
 757:fltk-1.3.4-1/FL/Enumerations.H ****    	start with an underscore. Also, there are three
 758:fltk-1.3.4-1/FL/Enumerations.H **** 		external functions undocumented (yet):
 759:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_SHADOW_LABEL()
 760:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_ENGRAVED_LABEL()
 761:fltk-1.3.4-1/FL/Enumerations.H **** 		  - fl_define_FL_EMBOSSED_LABEL()
 762:fltk-1.3.4-1/FL/Enumerations.H **** */
 763:fltk-1.3.4-1/FL/Enumerations.H **** enum Fl_Labeltype {	// labeltypes:
 764:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NORMAL_LABEL	= 0, ///< draws the text (0)
 765:fltk-1.3.4-1/FL/Enumerations.H ****   FL_NO_LABEL,         ///< does nothing
 766:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_SHADOW_LABEL,    ///< draws a drop shadow under the text
 767:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ENGRAVED_LABEL,	 ///< draws edges as though the text is engraved
 768:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_EMBOSSED_LABEL,  ///< draws edges as though the text is raised
 769:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_MULTI_LABEL,     ///< draws a composite label \see Fl_Multi_Label
 770:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_ICON_LABEL,      ///< draws the icon associated with the text
 771:fltk-1.3.4-1/FL/Enumerations.H ****   _FL_IMAGE_LABEL,     ///< the label displays an "icon" based on a Fl_Image
 772:fltk-1.3.4-1/FL/Enumerations.H **** 
 773:fltk-1.3.4-1/FL/Enumerations.H ****   FL_FREE_LABELTYPE    ///< first free labeltype to use for creating own labeltypes
 774:fltk-1.3.4-1/FL/Enumerations.H **** };
 775:fltk-1.3.4-1/FL/Enumerations.H **** 
 776:fltk-1.3.4-1/FL/Enumerations.H **** /** 
 777:fltk-1.3.4-1/FL/Enumerations.H ****   Sets the current label type and return its corresponding Fl_Labeltype value. 
 778:fltk-1.3.4-1/FL/Enumerations.H ****   @{
 779:fltk-1.3.4-1/FL/Enumerations.H **** */
 780:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SYMBOL_LABEL FL_NORMAL_LABEL
 781:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_SHADOW_LABEL();
 782:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_SHADOW_LABEL fl_define_FL_SHADOW_LABEL()
 783:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_ENGRAVED_LABEL();
 784:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_ENGRAVED_LABEL fl_define_FL_ENGRAVED_LABEL()
 785:fltk-1.3.4-1/FL/Enumerations.H **** extern Fl_Labeltype FL_EXPORT fl_define_FL_EMBOSSED_LABEL();
 786:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_EMBOSSED_LABEL fl_define_FL_EMBOSSED_LABEL()
 787:fltk-1.3.4-1/FL/Enumerations.H **** /** @} */
 788:fltk-1.3.4-1/FL/Enumerations.H **** 
 789:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Alignment Flags 
 790:fltk-1.3.4-1/FL/Enumerations.H ****     Flags to control the label alignment. 
 791:fltk-1.3.4-1/FL/Enumerations.H **** 
 792:fltk-1.3.4-1/FL/Enumerations.H ****     This controls how the label is displayed next to or inside the widget. 
 793:fltk-1.3.4-1/FL/Enumerations.H ****     The default value is FL_ALIGN_CENTER (0) for most widgets, which centers
 794:fltk-1.3.4-1/FL/Enumerations.H ****     the label inside the widget.
 795:fltk-1.3.4-1/FL/Enumerations.H **** 
 796:fltk-1.3.4-1/FL/Enumerations.H ****     Flags can be or'd to achieve a combination of alignments, but there
 797:fltk-1.3.4-1/FL/Enumerations.H ****     are some "magic values" (e.g. combinations of TOP and BOTTOM and of
 798:fltk-1.3.4-1/FL/Enumerations.H ****     LEFT and RIGHT) that have special meanings (see below). For instance:<BR>
 799:fltk-1.3.4-1/FL/Enumerations.H ****     FL_ALIGN_TOP_LEFT == (FL_ALIGN_TOP|FL_ALIGN_LEFT) != FL_ALIGN_LEFT_TOP.
 800:fltk-1.3.4-1/FL/Enumerations.H **** 
 801:fltk-1.3.4-1/FL/Enumerations.H ****     \code
 802:fltk-1.3.4-1/FL/Enumerations.H ****     Outside alignments (FL_ALIGN_INSIDE is not set):
 803:fltk-1.3.4-1/FL/Enumerations.H **** 
 804:fltk-1.3.4-1/FL/Enumerations.H ****                TOP_LEFT        TOP       TOP_RIGHT
 805:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 806:fltk-1.3.4-1/FL/Enumerations.H ****        LEFT_TOP|                                 |RIGHT_TOP
 807:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 808:fltk-1.3.4-1/FL/Enumerations.H ****            LEFT|             CENTER              |RIGHT
 809:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 810:fltk-1.3.4-1/FL/Enumerations.H ****     LEFT_BOTTOM|                                 |RIGHT_BOTTOM
 811:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 812:fltk-1.3.4-1/FL/Enumerations.H ****                BOTTOM_LEFT   BOTTOM   BOTTOM_RIGHT
 813:fltk-1.3.4-1/FL/Enumerations.H **** 
 814:fltk-1.3.4-1/FL/Enumerations.H ****     Inside alignments (FL_ALIGN_INSIDE is set):
 815:fltk-1.3.4-1/FL/Enumerations.H **** 
 816:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 817:fltk-1.3.4-1/FL/Enumerations.H ****                |TOP_LEFT       TOP      TOP_RIGHT|
 818:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 819:fltk-1.3.4-1/FL/Enumerations.H ****                |LEFT         CENTER         RIGHT|
 820:fltk-1.3.4-1/FL/Enumerations.H ****                |                                 |
 821:fltk-1.3.4-1/FL/Enumerations.H ****                |BOTTOM_LEFT  BOTTOM  BOTTOM_RIGHT|
 822:fltk-1.3.4-1/FL/Enumerations.H ****                +---------------------------------+
 823:fltk-1.3.4-1/FL/Enumerations.H ****     \endcode
 824:fltk-1.3.4-1/FL/Enumerations.H ****     \see #FL_ALIGN_CENTER, etc.
 825:fltk-1.3.4-1/FL/Enumerations.H ****  */
 826:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 827:fltk-1.3.4-1/FL/Enumerations.H **** /** FLTK type for alignment control */
 828:fltk-1.3.4-1/FL/Enumerations.H **** typedef unsigned Fl_Align;
 829:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label horizontally in the middle. */
 830:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_CENTER		= (Fl_Align)0;
 831:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the top of the widget. Inside labels appear below the top,
 832:fltk-1.3.4-1/FL/Enumerations.H ****       outside labels are drawn on top of the widget. */
 833:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP		= (Fl_Align)1;
 834:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the bottom of the widget. */
 835:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM		= (Fl_Align)2;
 836:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label at the left of the widget. Inside labels appear left-justified
 837:fltk-1.3.4-1/FL/Enumerations.H ****       starting at the left side of the widget, outside labels are right-justified and
 838:fltk-1.3.4-1/FL/Enumerations.H ****       drawn to the left of the widget. */
 839:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT		= (Fl_Align)4;
 840:fltk-1.3.4-1/FL/Enumerations.H ****   /** Align the label to the right of the widget. */
 841:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT		= (Fl_Align)8;
 842:fltk-1.3.4-1/FL/Enumerations.H ****   /** Draw the label inside of the widget. */
 843:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_INSIDE		= (Fl_Align)16;
 844:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text on top of the image. */
 845:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TEXT_OVER_IMAGE	= (Fl_Align)0x0020;
 846:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text below the image. */
 847:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_OVER_TEXT	= (Fl_Align)0x0000;
 848:fltk-1.3.4-1/FL/Enumerations.H ****   /** All parts of the label that are lager than the widget will not be drawn . */
 849:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_CLIP		= (Fl_Align)64;
 850:fltk-1.3.4-1/FL/Enumerations.H ****   /** Wrap text that does not fit the width of the widget. */
 851:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_WRAP		= (Fl_Align)128;
 852:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text to the right of the image. */
 853:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_NEXT_TO_TEXT = (Fl_Align)0x0100;
 854:fltk-1.3.4-1/FL/Enumerations.H ****   /** If the label contains an image, draw the text to the left of the image. */
 855:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TEXT_NEXT_TO_IMAGE = (Fl_Align)0x0120;
 856:fltk-1.3.4-1/FL/Enumerations.H **** /** If the label contains an image, draw the image or deimage in the background. */
 857:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_BACKDROP  = (Fl_Align)0x0200;
 858:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP_LEFT	= FL_ALIGN_TOP | FL_ALIGN_LEFT;
 859:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_TOP_RIGHT	= FL_ALIGN_TOP | FL_ALIGN_RIGHT;
 860:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM_LEFT	= FL_ALIGN_BOTTOM | FL_ALIGN_LEFT;
 861:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_BOTTOM_RIGHT	= FL_ALIGN_BOTTOM | FL_ALIGN_RIGHT;
 862:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT_TOP	= 0x0007; // magic value
 863:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT_TOP	= 0x000b; // magic value
 864:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_LEFT_BOTTOM	= 0x000d; // magic value
 865:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_RIGHT_BOTTOM	= 0x000e; // magic value
 866:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_NOWRAP		= (Fl_Align)0; // for back compatibility
 867:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_POSITION_MASK   = 0x000f; // left, right, top, bottom
 868:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Align FL_ALIGN_IMAGE_MASK      = 0x0320; // l/r, t/b, backdrop
 869:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/
 870:fltk-1.3.4-1/FL/Enumerations.H **** 
 871:fltk-1.3.4-1/FL/Enumerations.H **** 
 872:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Font Numbers
 873:fltk-1.3.4-1/FL/Enumerations.H ****     The following constants define the standard FLTK fonts:
 874:fltk-1.3.4-1/FL/Enumerations.H ****  */
 875:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 876:fltk-1.3.4-1/FL/Enumerations.H **** /** A font number is an index into the internal font table. */
 877:fltk-1.3.4-1/FL/Enumerations.H **** typedef int Fl_Font;
 878:fltk-1.3.4-1/FL/Enumerations.H **** 
 879:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA              = 0;	///< Helvetica (or Arial) normal (0)
 880:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_BOLD         = 1;	///< Helvetica (or Arial) bold
 881:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_ITALIC       = 2;	///< Helvetica (or Arial) oblique
 882:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_HELVETICA_BOLD_ITALIC  = 3;	///< Helvetica (or Arial) bold-oblique
 883:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER                = 4;	///< Courier normal
 884:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_BOLD           = 5;	///< Courier bold 
 885:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_ITALIC         = 6;	///< Courier italic
 886:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_COURIER_BOLD_ITALIC    = 7;	///< Courier bold-italic
 887:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES                  = 8;	///< Times roman
 888:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_BOLD             = 9;	///< Times roman bold
 889:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_ITALIC           = 10;	///< Times roman italic
 890:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_TIMES_BOLD_ITALIC      = 11;	///< Times roman bold-italic
 891:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SYMBOL                 = 12;	///< Standard symbol font
 892:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SCREEN                 = 13;	///< Default monospaced screen font
 893:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_SCREEN_BOLD            = 14;	///< Default monospaced bold screen font
 894:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_ZAPF_DINGBATS          = 15;	///< Zapf-dingbats font
 895:fltk-1.3.4-1/FL/Enumerations.H **** 
 896:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_FREE_FONT              = 16;	///< first one to allocate
 897:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_BOLD                   = 1;	///< add this to helvetica, courier, or times
 898:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_ITALIC                 = 2;	///< add this to helvetica, courier, or times
 899:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Font FL_BOLD_ITALIC            = 3;	///< add this to helvetica, courier, or times
 900:fltk-1.3.4-1/FL/Enumerations.H **** 
 901:fltk-1.3.4-1/FL/Enumerations.H **** /*@}*/
 902:fltk-1.3.4-1/FL/Enumerations.H **** 
 903:fltk-1.3.4-1/FL/Enumerations.H **** /** Size of a font in pixels.
 904:fltk-1.3.4-1/FL/Enumerations.H ****     This is the approximate height of a font in pixels.
 905:fltk-1.3.4-1/FL/Enumerations.H ****  */
 906:fltk-1.3.4-1/FL/Enumerations.H **** typedef int Fl_Fontsize;
 907:fltk-1.3.4-1/FL/Enumerations.H **** 
 908:fltk-1.3.4-1/FL/Enumerations.H **** extern FL_EXPORT Fl_Fontsize FL_NORMAL_SIZE;	///< normal font size
 909:fltk-1.3.4-1/FL/Enumerations.H **** 
 910:fltk-1.3.4-1/FL/Enumerations.H **** /** \name Colors 
 911:fltk-1.3.4-1/FL/Enumerations.H ****     The Fl_Color type holds an FLTK color value.
 912:fltk-1.3.4-1/FL/Enumerations.H **** 
 913:fltk-1.3.4-1/FL/Enumerations.H ****     Colors are either 8-bit indexes into a <a href="fltk-colormap.png">virtual colormap</a>
 914:fltk-1.3.4-1/FL/Enumerations.H ****     or 24-bit RGB color values. (See \ref drawing_colors for the default FLTK colormap)
 915:fltk-1.3.4-1/FL/Enumerations.H **** 
 916:fltk-1.3.4-1/FL/Enumerations.H ****     Color indices occupy the lower 8 bits of the value, while
 917:fltk-1.3.4-1/FL/Enumerations.H ****     RGB colors occupy the upper 24 bits, for a byte organization of RGBI.
 918:fltk-1.3.4-1/FL/Enumerations.H **** 
 919:fltk-1.3.4-1/FL/Enumerations.H **** <pre>
 920:fltk-1.3.4-1/FL/Enumerations.H ****  Fl_Color => 0xrrggbbii
 921:fltk-1.3.4-1/FL/Enumerations.H ****                 | | | |
 922:fltk-1.3.4-1/FL/Enumerations.H ****                 | | | +--- \ref drawing_colors "index" between 0 and 255
 923:fltk-1.3.4-1/FL/Enumerations.H ****                 | | +----- blue color component (8 bit)
 924:fltk-1.3.4-1/FL/Enumerations.H ****                 | +------- green component (8 bit)
 925:fltk-1.3.4-1/FL/Enumerations.H ****                 +--------- red component (8 bit)
 926:fltk-1.3.4-1/FL/Enumerations.H ****  </pre>
 927:fltk-1.3.4-1/FL/Enumerations.H **** 
 928:fltk-1.3.4-1/FL/Enumerations.H ****     A color can have either an index or an rgb value. Colors with rgb set 
 929:fltk-1.3.4-1/FL/Enumerations.H ****     and an index >0 are reserved for special use.
 930:fltk-1.3.4-1/FL/Enumerations.H **** 
 931:fltk-1.3.4-1/FL/Enumerations.H ****  */
 932:fltk-1.3.4-1/FL/Enumerations.H **** /*@{*/
 933:fltk-1.3.4-1/FL/Enumerations.H **** /** An FLTK color value; see also \ref drawing_colors  */
 934:fltk-1.3.4-1/FL/Enumerations.H **** typedef unsigned int Fl_Color;
 935:fltk-1.3.4-1/FL/Enumerations.H **** 
 936:fltk-1.3.4-1/FL/Enumerations.H **** // Standard colors. These are used as default colors in widgets and altered as necessary
 937:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_FOREGROUND_COLOR  = 0;	///< the default foreground color (0) used for labels and 
 938:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BACKGROUND2_COLOR = 7;	///< the default background color for text, list, and valu
 939:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_INACTIVE_COLOR    = 8;	///< the inactive foreground color
 940:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_SELECTION_COLOR   = 15;	///< the default selection/highlight color
 941:fltk-1.3.4-1/FL/Enumerations.H **** 
 942:fltk-1.3.4-1/FL/Enumerations.H ****   // boxtypes generally limit themselves to these colors so
 943:fltk-1.3.4-1/FL/Enumerations.H ****   // the whole ramp is not allocated:
 944:fltk-1.3.4-1/FL/Enumerations.H **** 
 945:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_GRAY0   = 32;			// 'A'
 946:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK3   = 39;			// 'H'
 947:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK2   = 45;			// 'N'
 948:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK1   = 47;			// 'P'
 949:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BACKGROUND_COLOR  = 49;	// 'R' default background color
 950:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT1  = 50;			// 'S'
 951:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT2  = 52;			// 'U'
 952:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_LIGHT3  = 54;			// 'W'
 953:fltk-1.3.4-1/FL/Enumerations.H **** 
 954:fltk-1.3.4-1/FL/Enumerations.H ****   // FLTK provides a 5x8x5 color cube that is used with colormap visuals
 955:fltk-1.3.4-1/FL/Enumerations.H **** 
 956:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BLACK   = 56;
 957:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_RED     = 88;
 958:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_GREEN   = 63;
 959:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_YELLOW  = 95;
 960:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_BLUE    = 216;
 961:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_MAGENTA = 248;
 962:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_CYAN    = 223;
 963:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_RED = 72;
 964:fltk-1.3.4-1/FL/Enumerations.H **** 
 965:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_GREEN    = 60;
 966:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_YELLOW   = 76;
 967:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_BLUE     = 136;
 968:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_MAGENTA  = 152;
 969:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_DARK_CYAN     = 140;
 970:fltk-1.3.4-1/FL/Enumerations.H **** 
 971:fltk-1.3.4-1/FL/Enumerations.H **** const Fl_Color FL_WHITE         = 255;
 972:fltk-1.3.4-1/FL/Enumerations.H **** 
 973:fltk-1.3.4-1/FL/Enumerations.H **** 
 974:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_FREE_COLOR     (Fl_Color)16
 975:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_FREE_COLOR 16
 976:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GRAY_RAMP      (Fl_Color)32
 977:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_GRAY       24
 978:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_GRAY           FL_BACKGROUND_COLOR
 979:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_COLOR_CUBE     (Fl_Color)56
 980:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_RED        5
 981:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_GREEN      8
 982:fltk-1.3.4-1/FL/Enumerations.H **** #define FL_NUM_BLUE       5
 983:fltk-1.3.4-1/FL/Enumerations.H **** 
 984:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_inactive(Fl_Color c);
 985:fltk-1.3.4-1/FL/Enumerations.H **** 
 986:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_contrast(Fl_Color fg, Fl_Color bg);
 987:fltk-1.3.4-1/FL/Enumerations.H **** 
 988:fltk-1.3.4-1/FL/Enumerations.H **** FL_EXPORT Fl_Color fl_color_average(Fl_Color c1, Fl_Color c2, float weight);
 989:fltk-1.3.4-1/FL/Enumerations.H **** 
 990:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a lighter version of the specified color. */
 991:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_lighter(Fl_Color c) { return fl_color_average(c, FL_WHITE, .67f); }
 992:fltk-1.3.4-1/FL/Enumerations.H **** 
 993:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a darker version of the specified color. */
 994:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_darker(Fl_Color c) { return fl_color_average(c, FL_BLACK, .67f); }
 995:fltk-1.3.4-1/FL/Enumerations.H **** 
 996:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns the 24-bit color value closest to \p r, \p g, \p b. */
 997:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_rgb_color(uchar r, uchar g, uchar b) {
 998:fltk-1.3.4-1/FL/Enumerations.H ****   if (!r && !g && !b) return FL_BLACK;
 999:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((r << 8) | g) << 8) | b) << 8);
1000:fltk-1.3.4-1/FL/Enumerations.H **** }
1001:fltk-1.3.4-1/FL/Enumerations.H **** 
1002:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns the 24-bit color value closest to \p g (grayscale). */
1003:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_rgb_color(uchar g) {
1004:fltk-1.3.4-1/FL/Enumerations.H ****   if (!g) return FL_BLACK;
1005:fltk-1.3.4-1/FL/Enumerations.H ****   else return (Fl_Color)(((((g << 8) | g) << 8) | g) << 8);
1006:fltk-1.3.4-1/FL/Enumerations.H **** }
1007:fltk-1.3.4-1/FL/Enumerations.H **** 
1008:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a gray color value from black (i == 0) to white (i == FL_NUM_GRAY - 1).
1009:fltk-1.3.4-1/FL/Enumerations.H ****     FL_NUM_GRAY is defined to be 24 in the current FLTK release.
1010:fltk-1.3.4-1/FL/Enumerations.H ****     To get the closest FLTK gray value to an 8-bit grayscale color 'I' use:
1011:fltk-1.3.4-1/FL/Enumerations.H **** 
1012:fltk-1.3.4-1/FL/Enumerations.H ****  \code
1013:fltk-1.3.4-1/FL/Enumerations.H ****    fl_gray_ramp(I * (FL_NUM_GRAY - 1) / 255)
1014:fltk-1.3.4-1/FL/Enumerations.H ****  \endcode
1015:fltk-1.3.4-1/FL/Enumerations.H **** */
1016:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_gray_ramp(int i) {return (Fl_Color)(i+FL_GRAY_RAMP);}
1017:fltk-1.3.4-1/FL/Enumerations.H **** 
1018:fltk-1.3.4-1/FL/Enumerations.H **** /** Returns a color out of the color cube.
1019:fltk-1.3.4-1/FL/Enumerations.H **** 
1020:fltk-1.3.4-1/FL/Enumerations.H ****   \p r must be in the range 0 to FL_NUM_RED (5) minus 1,
1021:fltk-1.3.4-1/FL/Enumerations.H ****   \p g must be in the range 0 to FL_NUM_GREEN (8) minus 1,
1022:fltk-1.3.4-1/FL/Enumerations.H ****   \p b must be in the range 0 to FL_NUM_BLUE (5) minus 1.
1023:fltk-1.3.4-1/FL/Enumerations.H **** 
1024:fltk-1.3.4-1/FL/Enumerations.H ****   To get the closest color to a 8-bit set of R,G,B values use:
1025:fltk-1.3.4-1/FL/Enumerations.H **** 
1026:fltk-1.3.4-1/FL/Enumerations.H ****   \code
1027:fltk-1.3.4-1/FL/Enumerations.H ****     fl_color_cube(R * (FL_NUM_RED - 1) / 255,
1028:fltk-1.3.4-1/FL/Enumerations.H ****        G * (FL_NUM_GREEN - 1) / 255,
1029:fltk-1.3.4-1/FL/Enumerations.H ****        B * (FL_NUM_BLUE - 1) / 255);
1030:fltk-1.3.4-1/FL/Enumerations.H ****   \endcode
1031:fltk-1.3.4-1/FL/Enumerations.H ****  */
1032:fltk-1.3.4-1/FL/Enumerations.H **** inline Fl_Color fl_color_cube(int r, int g, int b) {
1033:fltk-1.3.4-1/FL/Enumerations.H ****   return (Fl_Color)((b*FL_NUM_RED + r) * FL_NUM_GREEN + g + FL_COLOR_CUBE);}
 3204              		.loc 3 1033 0
 3205 0116 8D0492   		leal	(%rdx,%rdx,4), %eax
 3206 0119 4189D5   		movl	%edx, %r13d
 3207              	.LVL383:
 3208 011c C1F808   		sarl	$8, %eax
 3209 011f 8D1480   		leal	(%rax,%rax,4), %edx
 3210              	.LVL384:
 3211 0122 8D049B   		leal	(%rbx,%rbx,4), %eax
 3212 0125 C1F808   		sarl	$8, %eax
 3213 0128 01D0     		addl	%edx, %eax
 3214 012a 89EA     		movl	%ebp, %edx
 3215 012c C1FA05   		sarl	$5, %edx
 3216              	.LVL385:
 3217 012f 448D54C2 		leal	56(%rdx,%rax,8), %r10d
 3217      38
 3218              	.LBE117:
 3219              	.LBE116:
 3220              		.loc 1 123 0
 3221 0134 4C89D0   		movq	%r10, %rax
 3222              	.LBB119:
 3223              	.LBB118:
 3224              		.loc 3 1033 0
 3225 0137 4C89D7   		movq	%r10, %rdi
 3226              	.LVL386:
 3227              	.LBE118:
 3228              	.LBE119:
 3229              		.loc 1 123 0
 3230 013a 48C1E004 		salq	$4, %rax
 3231 013e 80B80000 		cmpb	$0, fl_xmap+3(%rax)
 3231      000000
 3232 0145 0F854BFF 		jne	.L329
 3232      FFFF
 3233              		.loc 1 123 0 is_stmt 0 discriminator 1
 3234 014b 803D0000 		cmpb	$0, fl_redmask(%rip)
 3234      000000
 3235 0152 4C895424 		movq	%r10, 24(%rsp)
 3235      18
 3236 0157 4C894424 		movq	%r8, 16(%rsp)
 3236      10
 3237 015c 0F841EFF 		je	.L337
 3237      FFFF
 3238              		.loc 1 123 0 discriminator 3
 3239 0162 E8000000 		call	_Z9fl_xpixelj
 3239      00
 3240              	.LVL387:
 3241 0167 4C8B5424 		movq	24(%rsp), %r10
 3241      18
 3242 016c 4C8B4424 		movq	16(%rsp), %r8
 3242      10
 3243 0171 E920FFFF 		jmp	.L329
 3243      FF
 3244              	.LVL388:
 3245 0176 662E0F1F 		.p2align 4,,10
 3245      84000000 
 3245      0000
 3246              		.p2align 3
 3247              	.L328:
 3248              	.LBE123:
 3249              	.LBE114:
 3250              		.loc 1 129 0 is_stmt 1
 3251 0180 891D0000 		movl	%ebx, _ZL2ri(%rip)
 3251      0000
 3252 0186 892D0000 		movl	%ebp, _ZL2gi(%rip)
 3252      0000
 3253 018c 44890D00 		movl	%r9d, _ZL2bi(%rip)
 3253      000000
 3254              		.loc 1 130 0
 3255 0193 4883C428 		addq	$40, %rsp
 3256              		.cfi_remember_state
 3257              		.cfi_def_cfa_offset 56
 3258 0197 5B       		popq	%rbx
 3259              		.cfi_def_cfa_offset 48
 3260              	.LVL389:
 3261 0198 5D       		popq	%rbp
 3262              		.cfi_def_cfa_offset 40
 3263              	.LVL390:
 3264 0199 415C     		popq	%r12
 3265              		.cfi_def_cfa_offset 32
 3266 019b 415D     		popq	%r13
 3267              		.cfi_def_cfa_offset 24
 3268 019d 415E     		popq	%r14
 3269              		.cfi_def_cfa_offset 16
 3270 019f 415F     		popq	%r15
 3271              		.cfi_def_cfa_offset 8
 3272              	.LVL391:
 3273 01a1 C3       		ret
 3274              	.LVL392:
 3275              		.p2align 4,,10
 3276 01a2 660F1F44 		.p2align 3
 3276      0000
 3277              	.L326:
 3278              		.cfi_restore_state
 3279              		.loc 1 113 0
 3280 01a8 C7050000 		movl	$1, _ZL3dir(%rip)
 3280      00000100 
 3280      0000
 3281              	.LVL393:
 3282 01b2 448D72FF 		leal	-1(%rdx), %r14d
 3283              		.loc 1 115 0
 3284 01b6 41BD0100 		movl	$1, %r13d
 3284      0000
 3285 01bc E99DFEFF 		jmp	.L327
 3285      FF
 3286              		.cfi_endproc
 3287              	.LFE483:
 3289              		.section	.text.unlikely._ZL15mono8_converterPKhPhii
 3290              	.LCOLDE21:
 3291              		.section	.text._ZL15mono8_converterPKhPhii
 3292              	.LHOTE21:
 3293              		.section	.text.unlikely._ZL16color8_converterPKhPhii,"ax",@progbits
 3294              	.LCOLDB22:
 3295              		.section	.text._ZL16color8_converterPKhPhii,"ax",@progbits
 3296              	.LHOTB22:
 3297              		.p2align 4,,15
 3299              	_ZL16color8_converterPKhPhii:
 3300              	.LFB482:
 3301              		.loc 1 74 0
 3302              		.cfi_startproc
 3303              	.LVL394:
 3304 0000 4157     		pushq	%r15
 3305              		.cfi_def_cfa_offset 16
 3306              		.cfi_offset 15, -16
 3307 0002 4156     		pushq	%r14
 3308              		.cfi_def_cfa_offset 24
 3309              		.cfi_offset 14, -24
 3310 0004 4989FF   		movq	%rdi, %r15
 3311 0007 4155     		pushq	%r13
 3312              		.cfi_def_cfa_offset 32
 3313              		.cfi_offset 13, -32
 3314 0009 4154     		pushq	%r12
 3315              		.cfi_def_cfa_offset 40
 3316              		.cfi_offset 12, -40
 3317 000b 4989F1   		movq	%rsi, %r9
 3318 000e 55       		pushq	%rbp
 3319              		.cfi_def_cfa_offset 48
 3320              		.cfi_offset 6, -48
 3321 000f 53       		pushq	%rbx
 3322              		.cfi_def_cfa_offset 56
 3323              		.cfi_offset 3, -56
 3324 0010 4883EC28 		subq	$40, %rsp
 3325              		.cfi_def_cfa_offset 96
 3326              		.loc 1 77 0
 3327 0014 8B050000 		movl	_ZL3dir(%rip), %eax
 3327      0000
 3328              		.loc 1 75 0
 3329 001a 8B2D0000 		movl	_ZL2ri(%rip), %ebp
 3329      0000
 3330              	.LVL395:
 3331 0020 448B3500 		movl	_ZL2gi(%rip), %r14d
 3331      000000
 3332              	.LVL396:
 3333 0027 8B1D0000 		movl	_ZL2bi(%rip), %ebx
 3333      0000
 3334              	.LVL397:
 3335              		.loc 1 77 0
 3336 002d 85C0     		testl	%eax, %eax
 3337 002f 0F847B01 		je	.L339
 3337      0000
 3338              		.loc 1 79 0
 3339 0035 448D42FF 		leal	-1(%rdx), %r8d
 3340              		.loc 1 78 0
 3341 0039 C7050000 		movl	$0, _ZL3dir(%rip)
 3341      00000000 
 3341      0000
 3342              		.loc 1 82 0
 3343 0043 41BDFFFF 		movl	$-1, %r13d
 3343      FFFF
 3344              		.loc 1 79 0
 3345 0049 4489C0   		movl	%r8d, %eax
 3346 004c 0FAFC1   		imull	%ecx, %eax
 3347              		.loc 1 81 0
 3348 004f F7D9     		negl	%ecx
 3349              	.LVL398:
 3350              		.loc 1 79 0
 3351 0051 4898     		cltq
 3352 0053 4901C7   		addq	%rax, %r15
 3353              	.LVL399:
 3354              		.loc 1 80 0
 3355 0056 4863C2   		movslq	%edx, %rax
 3356 0059 4C8D4C06 		leaq	-1(%rsi,%rax), %r9
 3356      FF
 3357              	.LVL400:
 3358              	.L340:
 3359              	.LBB124:
 3360              		.loc 1 88 0 discriminator 1
 3361 005e 85D2     		testl	%edx, %edx
 3362 0060 0F842201 		je	.L341
 3362      0000
 3363 0066 4863C1   		movslq	%ecx, %rax
 3364 0069 41BCFF00 		movl	$255, %r12d
 3364      0000
 3365 006f 48890424 		movq	%rax, (%rsp)
 3366 0073 4963C5   		movslq	%r13d, %rax
 3367 0076 48894424 		movq	%rax, 8(%rsp)
 3367      08
 3368 007b EB60     		jmp	.L344
 3369              	.LVL401:
 3370 007d 0F1F00   		.p2align 4,,10
 3371              		.p2align 3
 3372              	.L350:
 3373              	.LBB125:
 3374              		.loc 1 94 0 discriminator 2
 3375 0080 89DA     		movl	%ebx, %edx
 3376 0082 4489F6   		movl	%r14d, %esi
 3377 0085 89EF     		movl	%ebp, %edi
 3378 0087 E8000000 		call	_Z9fl_xpixelhhh
 3378      00
 3379              	.LVL402:
 3380 008c 448B4424 		movl	20(%rsp), %r8d
 3380      14
 3381 0091 4C8B4C24 		movq	24(%rsp), %r9
 3381      18
 3382              	.LVL403:
 3383              	.L342:
 3384              		.loc 1 95 0
 3385 0096 4D89EA   		movq	%r13, %r10
 3386              	.LBE125:
 3387              		.loc 1 88 0
 3388 0099 4183E801 		subl	$1, %r8d
 3389 009d 4C033C24 		addq	(%rsp), %r15
 3390              	.LVL404:
 3391              	.LBB130:
 3392              		.loc 1 95 0
 3393 00a1 49C1E204 		salq	$4, %r10
 3394 00a5 410FB692 		movzbl	fl_xmap(%r10), %edx
 3394      00000000 
 3395              		.loc 1 98 0
 3396 00ad 498B8200 		movq	fl_xmap+8(%r10), %rax
 3396      000000
 3397              		.loc 1 95 0
 3398 00b4 29D5     		subl	%edx, %ebp
 3399              	.LVL405:
 3400              		.loc 1 96 0
 3401 00b6 410FB692 		movzbl	fl_xmap+1(%r10), %edx
 3401      00000000 
 3402 00be 4129D6   		subl	%edx, %r14d
 3403              	.LVL406:
 3404              		.loc 1 97 0
 3405 00c1 410FB692 		movzbl	fl_xmap+2(%r10), %edx
 3405      00000000 
 3406              		.loc 1 98 0
 3407 00c9 418801   		movb	%al, (%r9)
 3408              	.LBE130:
 3409              		.loc 1 88 0
 3410 00cc 4C034C24 		addq	8(%rsp), %r9
 3410      08
 3411              	.LBB131:
 3412              		.loc 1 97 0
 3413 00d1 29D3     		subl	%edx, %ebx
 3414              	.LVL407:
 3415              	.LBE131:
 3416              		.loc 1 88 0
 3417 00d3 4183F8FF 		cmpl	$-1, %r8d
 3418 00d7 0F84AB00 		je	.L341
 3418      0000
 3419              	.LVL408:
 3420              	.L344:
 3421              	.LBB132:
 3422              		.loc 1 89 0
 3423 00dd 410FB607 		movzbl	(%r15), %eax
 3424 00e1 01C5     		addl	%eax, %ebp
 3425              	.LVL409:
 3426              		.loc 1 90 0
 3427 00e3 410FB647 		movzbl	1(%r15), %eax
 3427      01
 3428 00e8 81FDFF00 		cmpl	$255, %ebp
 3428      0000
 3429 00ee 410F4FEC 		cmovg	%r12d, %ebp
 3430              	.LVL410:
 3431 00f2 31D2     		xorl	%edx, %edx
 3432 00f4 85ED     		testl	%ebp, %ebp
 3433 00f6 0F48EA   		cmovs	%edx, %ebp
 3434              	.LVL411:
 3435 00f9 4101C6   		addl	%eax, %r14d
 3436              	.LVL412:
 3437              		.loc 1 91 0
 3438 00fc 410FB647 		movzbl	2(%r15), %eax
 3438      02
 3439 0101 4181FEFF 		cmpl	$255, %r14d
 3439      000000
 3440 0108 450F4FF4 		cmovg	%r12d, %r14d
 3441              	.LVL413:
 3442 010c 4585F6   		testl	%r14d, %r14d
 3443 010f 440F48F2 		cmovs	%edx, %r14d
 3444              	.LVL414:
 3445 0113 01C3     		addl	%eax, %ebx
 3446              	.LVL415:
 3447 0115 81FBFF00 		cmpl	$255, %ebx
 3447      0000
 3448 011b 410F4FDC 		cmovg	%r12d, %ebx
 3449              	.LVL416:
 3450 011f 85DB     		testl	%ebx, %ebx
 3451 0121 0F48DA   		cmovs	%edx, %ebx
 3452              	.LVL417:
 3453              	.LBB126:
 3454              	.LBB127:
 3455              		.loc 3 1033 0
 3456 0124 8D049B   		leal	(%rbx,%rbx,4), %eax
 3457 0127 C1F808   		sarl	$8, %eax
 3458 012a 8D1480   		leal	(%rax,%rax,4), %edx
 3459 012d 8D44AD00 		leal	0(%rbp,%rbp,4), %eax
 3460 0131 C1F808   		sarl	$8, %eax
 3461 0134 01D0     		addl	%edx, %eax
 3462 0136 4489F2   		movl	%r14d, %edx
 3463 0139 C1FA05   		sarl	$5, %edx
 3464              	.LVL418:
 3465 013c 448D6CC2 		leal	56(%rdx,%rax,8), %r13d
 3465      38
 3466              	.LBE127:
 3467              	.LBE126:
 3468              		.loc 1 94 0
 3469 0141 4C89E8   		movq	%r13, %rax
 3470              	.LBB129:
 3471              	.LBB128:
 3472              		.loc 3 1033 0
 3473 0144 4C89EF   		movq	%r13, %rdi
 3474              	.LVL419:
 3475              	.LBE128:
 3476              	.LBE129:
 3477              		.loc 1 94 0
 3478 0147 48C1E004 		salq	$4, %rax
 3479 014b 80B80000 		cmpb	$0, fl_xmap+3(%rax)
 3479      000000
 3480 0152 0F853EFF 		jne	.L342
 3480      FFFF
 3481              		.loc 1 94 0 is_stmt 0 discriminator 1
 3482 0158 803D0000 		cmpb	$0, fl_redmask(%rip)
 3482      000000
 3483 015f 4C894C24 		movq	%r9, 24(%rsp)
 3483      18
 3484 0164 44894424 		movl	%r8d, 20(%rsp)
 3484      14
 3485 0169 0F8411FF 		je	.L350
 3485      FFFF
 3486              		.loc 1 94 0 discriminator 3
 3487 016f E8000000 		call	_Z9fl_xpixelj
 3487      00
 3488              	.LVL420:
 3489 0174 4C8B4C24 		movq	24(%rsp), %r9
 3489      18
 3490 0179 448B4424 		movl	20(%rsp), %r8d
 3490      14
 3491 017e E913FFFF 		jmp	.L342
 3491      FF
 3492              	.LVL421:
 3493              		.p2align 4,,10
 3494 0183 0F1F4400 		.p2align 3
 3494      00
 3495              	.L341:
 3496              	.LBE132:
 3497              	.LBE124:
 3498              		.loc 1 100 0 is_stmt 1
 3499 0188 892D0000 		movl	%ebp, _ZL2ri(%rip)
 3499      0000
 3500 018e 44893500 		movl	%r14d, _ZL2gi(%rip)
 3500      000000
 3501 0195 891D0000 		movl	%ebx, _ZL2bi(%rip)
 3501      0000
 3502              		.loc 1 101 0
 3503 019b 4883C428 		addq	$40, %rsp
 3504              		.cfi_remember_state
 3505              		.cfi_def_cfa_offset 56
 3506 019f 5B       		popq	%rbx
 3507              		.cfi_def_cfa_offset 48
 3508              	.LVL422:
 3509 01a0 5D       		popq	%rbp
 3510              		.cfi_def_cfa_offset 40
 3511              	.LVL423:
 3512 01a1 415C     		popq	%r12
 3513              		.cfi_def_cfa_offset 32
 3514 01a3 415D     		popq	%r13
 3515              		.cfi_def_cfa_offset 24
 3516 01a5 415E     		popq	%r14
 3517              		.cfi_def_cfa_offset 16
 3518              	.LVL424:
 3519 01a7 415F     		popq	%r15
 3520              		.cfi_def_cfa_offset 8
 3521              	.LVL425:
 3522 01a9 C3       		ret
 3523              	.LVL426:
 3524 01aa 660F1F44 		.p2align 4,,10
 3524      0000
 3525              		.p2align 3
 3526              	.L339:
 3527              		.cfi_restore_state
 3528              		.loc 1 84 0
 3529 01b0 C7050000 		movl	$1, _ZL3dir(%rip)
 3529      00000100 
 3529      0000
 3530              	.LVL427:
 3531 01ba 448D42FF 		leal	-1(%rdx), %r8d
 3532              		.loc 1 86 0
 3533 01be 41BD0100 		movl	$1, %r13d
 3533      0000
 3534 01c4 E995FEFF 		jmp	.L340
 3534      FF
 3535              		.cfi_endproc
 3536              	.LFE482:
 3538              		.section	.text.unlikely._ZL16color8_converterPKhPhii
 3539              	.LCOLDE22:
 3540              		.section	.text._ZL16color8_converterPKhPhii
 3541              	.LHOTE22:
 3542              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver10draw_imageEPKhiiiiii,"ax",@progbits
 3543              		.align 2
 3544              	.LCOLDB23:
 3545              		.section	.text._ZN23Fl_Xlib_Graphics_Driver10draw_imageEPKhiiiiii,"ax",@progbits
 3546              	.LHOTB23:
 3547              		.align 2
 3548              		.p2align 4,,15
 3549              		.globl	_ZN23Fl_Xlib_Graphics_Driver10draw_imageEPKhiiiiii
 3551              	_ZN23Fl_Xlib_Graphics_Driver10draw_imageEPKhiiiiii:
 3552              	.LFB502:
 3553              		.loc 1 574 0
 3554              		.cfi_startproc
 3555              	.LVL428:
 3556 0000 4883EC10 		subq	$16, %rsp
 3557              		.cfi_def_cfa_offset 24
 3558              		.loc 1 574 0
 3559 0004 4889F7   		movq	%rsi, %rdi
 3560              	.LVL429:
 3561 0007 89D6     		movl	%edx, %esi
 3562              	.LVL430:
 3563 0009 89CA     		movl	%ecx, %edx
 3564              	.LVL431:
 3565 000b 4489C1   		movl	%r8d, %ecx
 3566              	.LVL432:
 3567 000e 4589C8   		movl	%r9d, %r8d
 3568              	.LVL433:
 3569 0011 448B4C24 		movl	24(%rsp), %r9d
 3569      18
 3570              	.LVL434:
 3571              		.loc 1 576 0
 3572 0016 4589CA   		movl	%r9d, %r10d
 3573 0019 41C1FA1F 		sarl	$31, %r10d
 3574 001d 4489D0   		movl	%r10d, %eax
 3575 0020 4431C8   		xorl	%r9d, %eax
 3576 0023 4429D0   		subl	%r10d, %eax
 3577 0026 25000000 		andl	$1073741824, %eax
 3577      40
 3578 002b 410F95C2 		setne	%r10b
 3579              	.LVL435:
 3580              		.loc 1 577 0
 3581 002f 4131C1   		xorl	%eax, %r9d
 3582              	.LVL436:
 3583              		.loc 1 580 0
 3584 0032 410FB6C2 		movzbl	%r10b, %eax
 3585 0036 50       		pushq	%rax
 3586              		.cfi_def_cfa_offset 32
 3587 0037 418D4102 		leal	2(%r9), %eax
 3588 003b 6A00     		pushq	$0
 3589              		.cfi_def_cfa_offset 40
 3590 003d 6A00     		pushq	$0
 3591              		.cfi_def_cfa_offset 48
 3592 003f 83F804   		cmpl	$4, %eax
 3593 0042 0F96C0   		setbe	%al
 3594 0045 0FB6C0   		movzbl	%al, %eax
 3595 0048 50       		pushq	%rax
 3596              		.cfi_def_cfa_offset 56
 3597 0049 8B442440 		movl	64(%rsp), %eax
 3598 004d 50       		pushq	%rax
 3599              		.cfi_def_cfa_offset 64
 3600 004e E8000000 		call	_ZL7innardsPKhiiiiiiiPFvPviiiPhES1_b
 3600      00
 3601              	.LVL437:
 3602              		.loc 1 581 0
 3603 0053 4883C438 		addq	$56, %rsp
 3604              		.cfi_def_cfa_offset 8
 3605 0057 C3       		ret
 3606              		.cfi_endproc
 3607              	.LFE502:
 3609              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver10draw_imageEPKhiiiiii
 3610              	.LCOLDE23:
 3611              		.section	.text._ZN23Fl_Xlib_Graphics_Driver10draw_imageEPKhiiiiii
 3612              	.LHOTE23:
 3613              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii,"ax",@progbit
 3614              		.align 2
 3615              	.LCOLDB24:
 3616              		.section	.text._ZN23Fl_Xlib_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii,"ax",@progbits
 3617              	.LHOTB24:
 3618              		.align 2
 3619              		.p2align 4,,15
 3620              		.globl	_ZN23Fl_Xlib_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 3622              	_ZN23Fl_Xlib_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii:
 3623              	.LFB503:
 3624              		.loc 1 584 0
 3625              		.cfi_startproc
 3626              	.LVL438:
 3627 0000 4883EC10 		subq	$16, %rsp
 3628              		.cfi_def_cfa_offset 24
 3629              		.loc 1 584 0
 3630 0004 4189CA   		movl	%ecx, %r10d
 3631 0007 4489C9   		movl	%r9d, %ecx
 3632              	.LVL439:
 3633 000a 448B4C24 		movl	32(%rsp), %r9d
 3633      20
 3634              	.LVL440:
 3635 000f 4589C3   		movl	%r8d, %r11d
 3636              		.loc 1 586 0
 3637 0012 4489CF   		movl	%r9d, %edi
 3638              	.LVL441:
 3639 0015 C1FF1F   		sarl	$31, %edi
 3640 0018 89F8     		movl	%edi, %eax
 3641 001a 4431C8   		xorl	%r9d, %eax
 3642 001d 29F8     		subl	%edi, %eax
 3643 001f 25000000 		andl	$1073741824, %eax
 3643      40
 3644 0024 400F95C7 		setne	%dil
 3645              	.LVL442:
 3646              		.loc 1 587 0
 3647 0028 4131C1   		xorl	%eax, %r9d
 3648              	.LVL443:
 3649              		.loc 1 590 0
 3650 002b 400FB6C7 		movzbl	%dil, %eax
 3651 002f 50       		pushq	%rax
 3652              		.cfi_def_cfa_offset 32
 3653 0030 418D4102 		leal	2(%r9), %eax
 3654 0034 52       		pushq	%rdx
 3655              		.cfi_def_cfa_offset 40
 3656 0035 56       		pushq	%rsi
 3657              		.cfi_def_cfa_offset 48
 3658 0036 4489DA   		movl	%r11d, %edx
 3659              	.LVL444:
 3660 0039 4489D6   		movl	%r10d, %esi
 3661              	.LVL445:
 3662 003c 83F804   		cmpl	$4, %eax
 3663 003f 0F96C0   		setbe	%al
 3664 0042 31FF     		xorl	%edi, %edi
 3665              	.LVL446:
 3666 0044 0FB6C0   		movzbl	%al, %eax
 3667 0047 50       		pushq	%rax
 3668              		.cfi_def_cfa_offset 56
 3669              	.LVL447:
 3670 0048 6A00     		pushq	$0
 3671              		.cfi_def_cfa_offset 64
 3672 004a 448B4424 		movl	64(%rsp), %r8d
 3672      40
 3673              	.LVL448:
 3674 004f E8000000 		call	_ZL7innardsPKhiiiiiiiPFvPviiiPhES1_b
 3674      00
 3675              	.LVL449:
 3676              		.loc 1 591 0
 3677 0054 4883C438 		addq	$56, %rsp
 3678              		.cfi_def_cfa_offset 8
 3679 0058 C3       		ret
 3680              		.cfi_endproc
 3681              	.LFE503:
 3683              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 3684              	.LCOLDE24:
 3685              		.section	.text._ZN23Fl_Xlib_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
 3686              	.LHOTE24:
 3687              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPKhiiiiii,"ax",@progbits
 3688              		.align 2
 3689              	.LCOLDB25:
 3690              		.section	.text._ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPKhiiiiii,"ax",@progbits
 3691              	.LHOTB25:
 3692              		.align 2
 3693              		.p2align 4,,15
 3694              		.globl	_ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPKhiiiiii
 3696              	_ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPKhiiiiii:
 3697              	.LFB504:
 3698              		.loc 1 593 0
 3699              		.cfi_startproc
 3700              	.LVL450:
 3701 0000 4883EC10 		subq	$16, %rsp
 3702              		.cfi_def_cfa_offset 24
 3703              		.loc 1 593 0
 3704 0004 4889F7   		movq	%rsi, %rdi
 3705              	.LVL451:
 3706 0007 89D6     		movl	%edx, %esi
 3707              	.LVL452:
 3708              		.loc 1 594 0
 3709 0009 6A00     		pushq	$0
 3710              		.cfi_def_cfa_offset 32
 3711 000b 6A00     		pushq	$0
 3712              		.cfi_def_cfa_offset 40
 3713              		.loc 1 593 0
 3714 000d 89CA     		movl	%ecx, %edx
 3715              	.LVL453:
 3716              		.loc 1 594 0
 3717 000f 6A00     		pushq	$0
 3718              		.cfi_def_cfa_offset 48
 3719 0011 6A01     		pushq	$1
 3720              		.cfi_def_cfa_offset 56
 3721              		.loc 1 593 0
 3722 0013 4489C1   		movl	%r8d, %ecx
 3723              	.LVL454:
 3724              		.loc 1 594 0
 3725 0016 8B442440 		movl	64(%rsp), %eax
 3726              		.loc 1 593 0
 3727 001a 4589C8   		movl	%r9d, %r8d
 3728              	.LVL455:
 3729              		.loc 1 594 0
 3730 001d 50       		pushq	%rax
 3731              		.cfi_def_cfa_offset 64
 3732 001e 448B4C24 		movl	64(%rsp), %r9d
 3732      40
 3733              	.LVL456:
 3734 0023 E8000000 		call	_ZL7innardsPKhiiiiiiiPFvPviiiPhES1_b
 3734      00
 3735              	.LVL457:
 3736              		.loc 1 595 0
 3737 0028 4883C438 		addq	$56, %rsp
 3738              		.cfi_def_cfa_offset 8
 3739 002c C3       		ret
 3740              		.cfi_endproc
 3741              	.LFE504:
 3743              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPKhiiiiii
 3744              	.LCOLDE25:
 3745              		.section	.text._ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPKhiiiiii
 3746              	.LHOTE25:
 3747              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii,"ax",@pr
 3748              		.align 2
 3749              	.LCOLDB26:
 3750              		.section	.text._ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii,"ax",@progbits
 3751              	.LHOTB26:
 3752              		.align 2
 3753              		.p2align 4,,15
 3754              		.globl	_ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
 3756              	_ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii:
 3757              	.LFB505:
 3758              		.loc 1 598 0
 3759              		.cfi_startproc
 3760              	.LVL458:
 3761 0000 4883EC10 		subq	$16, %rsp
 3762              		.cfi_def_cfa_offset 24
 3763              		.loc 1 598 0
 3764 0004 89C8     		movl	%ecx, %eax
 3765 0006 4489C7   		movl	%r8d, %edi
 3766              	.LVL459:
 3767              		.loc 1 599 0
 3768 0009 6A00     		pushq	$0
 3769              		.cfi_def_cfa_offset 32
 3770              		.loc 1 598 0
 3771 000b 4489C9   		movl	%r9d, %ecx
 3772              	.LVL460:
 3773              		.loc 1 599 0
 3774 000e 52       		pushq	%rdx
 3775              		.cfi_def_cfa_offset 40
 3776 000f 56       		pushq	%rsi
 3777              		.cfi_def_cfa_offset 48
 3778 0010 6A01     		pushq	$1
 3779              		.cfi_def_cfa_offset 56
 3780 0012 89FA     		movl	%edi, %edx
 3781              	.LVL461:
 3782 0014 6A00     		pushq	$0
 3783              		.cfi_def_cfa_offset 64
 3784 0016 448B4C24 		movl	72(%rsp), %r9d
 3784      48
 3785              	.LVL462:
 3786 001b 89C6     		movl	%eax, %esi
 3787              	.LVL463:
 3788 001d 448B4424 		movl	64(%rsp), %r8d
 3788      40
 3789              	.LVL464:
 3790 0022 31FF     		xorl	%edi, %edi
 3791 0024 E8000000 		call	_ZL7innardsPKhiiiiiiiPFvPviiiPhES1_b
 3791      00
 3792              	.LVL465:
 3793              		.loc 1 600 0
 3794 0029 4883C438 		addq	$56, %rsp
 3795              		.cfi_def_cfa_offset 8
 3796 002d C3       		ret
 3797              		.cfi_endproc
 3798              	.LFE505:
 3800              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
 3801              	.LCOLDE26:
 3802              		.section	.text._ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
 3803              	.LHOTE26:
 3804              		.section	.text.unlikely._Z8fl_rectfiiiihhh,"ax",@progbits
 3805              	.LCOLDB27:
 3806              		.section	.text._Z8fl_rectfiiiihhh,"ax",@progbits
 3807              	.LHOTB27:
 3808              		.p2align 4,,15
 3809              		.globl	_Z8fl_rectfiiiihhh
 3811              	_Z8fl_rectfiiiihhh:
 3812              	.LFB506:
 3813              		.loc 1 602 0
 3814              		.cfi_startproc
 3815              	.LVL466:
 3816 0000 4155     		pushq	%r13
 3817              		.cfi_def_cfa_offset 16
 3818              		.cfi_offset 13, -16
 3819 0002 4154     		pushq	%r12
 3820              		.cfi_def_cfa_offset 24
 3821              		.cfi_offset 12, -24
 3822 0004 4189CD   		movl	%ecx, %r13d
 3823 0007 55       		pushq	%rbp
 3824              		.cfi_def_cfa_offset 32
 3825              		.cfi_offset 6, -32
 3826 0008 53       		pushq	%rbx
 3827              		.cfi_def_cfa_offset 40
 3828              		.cfi_offset 3, -40
 3829 0009 89F5     		movl	%esi, %ebp
 3830 000b 89FB     		movl	%edi, %ebx
 3831 000d 4189D4   		movl	%edx, %r12d
 3832 0010 4883EC18 		subq	$24, %rsp
 3833              		.cfi_def_cfa_offset 64
 3834              		.loc 1 602 0
 3835 0014 64488B04 		movq	%fs:40, %rax
 3835      25280000 
 3835      00
 3836 001d 48894424 		movq	%rax, 8(%rsp)
 3836      08
 3837 0022 31C0     		xorl	%eax, %eax
 3838              	.LBB133:
 3839              		.loc 1 603 0
 3840 0024 488B0500 		movq	fl_visual(%rip), %rax
 3840      000000
 3841              	.LBE133:
 3842              		.loc 1 602 0
 3843 002b 8B4C2440 		movl	64(%rsp), %ecx
 3844              	.LVL467:
 3845              	.LBB139:
 3846              		.loc 1 603 0
 3847 002f 83781410 		cmpl	$16, 20(%rax)
 3848 0033 7F53     		jg	.L370
 3849              	.LBB134:
 3850              		.loc 1 608 0
 3851 0035 44880424 		movb	%r8b, (%rsp)
 3852 0039 44884C24 		movb	%r9b, 1(%rsp)
 3852      01
 3853              		.loc 1 609 0
 3854 003e 4883EC08 		subq	$8, %rsp
 3855              		.cfi_def_cfa_offset 72
 3856              		.loc 1 608 0
 3857 0042 884C240A 		movb	%cl, 10(%rsp)
 3858              		.loc 1 609 0
 3859 0046 6A00     		pushq	$0
 3860              		.cfi_def_cfa_offset 80
 3861 0048 89D1     		movl	%edx, %ecx
 3862 004a 6A00     		pushq	$0
 3863              		.cfi_def_cfa_offset 88
 3864 004c 6A00     		pushq	$0
 3865              		.cfi_def_cfa_offset 96
 3866 004e 89F2     		movl	%esi, %edx
 3867              	.LVL468:
 3868 0050 6A00     		pushq	$0
 3869              		.cfi_def_cfa_offset 104
 3870 0052 6A00     		pushq	$0
 3871              		.cfi_def_cfa_offset 112
 3872 0054 89FE     		movl	%edi, %esi
 3873              	.LVL469:
 3874 0056 4531C9   		xorl	%r9d, %r9d
 3875              	.LVL470:
 3876 0059 4589E8   		movl	%r13d, %r8d
 3877              	.LVL471:
 3878 005c 488D7C24 		leaq	48(%rsp), %rdi
 3878      30
 3879              	.LVL472:
 3880 0061 E8000000 		call	_ZL7innardsPKhiiiiiiiPFvPviiiPhES1_b
 3880      00
 3881              	.LVL473:
 3882 0066 4883C430 		addq	$48, %rsp
 3883              		.cfi_def_cfa_offset 64
 3884              	.L365:
 3885              	.LBE134:
 3886              	.LBE139:
 3887              		.loc 1 611 0
 3888 006a 488B4424 		movq	8(%rsp), %rax
 3888      08
 3889 006f 64483304 		xorq	%fs:40, %rax
 3889      25280000 
 3889      00
 3890 0078 7542     		jne	.L371
 3891 007a 4883C418 		addq	$24, %rsp
 3892              		.cfi_remember_state
 3893              		.cfi_def_cfa_offset 40
 3894 007e 5B       		popq	%rbx
 3895              		.cfi_def_cfa_offset 32
 3896              	.LVL474:
 3897 007f 5D       		popq	%rbp
 3898              		.cfi_def_cfa_offset 24
 3899              	.LVL475:
 3900 0080 415C     		popq	%r12
 3901              		.cfi_def_cfa_offset 16
 3902              	.LVL476:
 3903 0082 415D     		popq	%r13
 3904              		.cfi_def_cfa_offset 8
 3905              	.LVL477:
 3906 0084 C3       		ret
 3907              	.LVL478:
 3908              		.p2align 4,,10
 3909 0085 0F1F00   		.p2align 3
 3910              	.L370:
 3911              		.cfi_restore_state
 3912              	.LBB140:
 3913              	.LBB135:
 3914              	.LBB136:
  65:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3915              		.loc 2 65 0
 3916 0088 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3916      000000
 3917 008f 410FB6D1 		movzbl	%r9b, %edx
 3918              	.LVL479:
 3919 0093 410FB6F0 		movzbl	%r8b, %esi
 3920              	.LVL480:
 3921 0097 0FB6C9   		movzbl	%cl, %ecx
 3922 009a 488B07   		movq	(%rdi), %rax
 3923 009d FF909000 		call	*144(%rax)
 3923      0000
 3924              	.LVL481:
 3925              	.LBE136:
 3926              	.LBE135:
 3927              	.LBB137:
 3928              	.LBB138:
 128:fltk-1.3.4-1/FL/fl_draw.H **** /** Undoes any clobbering of clip done by your program */
 129:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_restore_clip() { fl_graphics_driver->restore_clip(); }
 130:fltk-1.3.4-1/FL/fl_draw.H **** /**
 131:fltk-1.3.4-1/FL/fl_draw.H ****  Replaces the top of the clipping stack with a clipping region of any shape.
 132:fltk-1.3.4-1/FL/fl_draw.H ****  
 133:fltk-1.3.4-1/FL/fl_draw.H ****  Fl_Region is an operating system specific type.
 134:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] r clipping region
 135:fltk-1.3.4-1/FL/fl_draw.H ****  */
 136:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_clip_region(Fl_Region r) { fl_graphics_driver->clip_region(r); }
 137:fltk-1.3.4-1/FL/fl_draw.H **** /**
 138:fltk-1.3.4-1/FL/fl_draw.H ****  Returns the current clipping region.
 139:fltk-1.3.4-1/FL/fl_draw.H ****  */
 140:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Region fl_clip_region() { return fl_graphics_driver->clip_region(); }
 141:fltk-1.3.4-1/FL/fl_draw.H **** 
 142:fltk-1.3.4-1/FL/fl_draw.H **** 
 143:fltk-1.3.4-1/FL/fl_draw.H **** // points:
 144:fltk-1.3.4-1/FL/fl_draw.H **** /**
 145:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a single pixel at the given coordinates
 146:fltk-1.3.4-1/FL/fl_draw.H ****  */
 147:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_point(int x, int y) { fl_graphics_driver->point(x,y); }
 148:fltk-1.3.4-1/FL/fl_draw.H **** 
 149:fltk-1.3.4-1/FL/fl_draw.H **** // line type:
 150:fltk-1.3.4-1/FL/fl_draw.H **** /**
 151:fltk-1.3.4-1/FL/fl_draw.H ****  Sets how to draw lines (the "pen").
 152:fltk-1.3.4-1/FL/fl_draw.H ****  If you change this it is your responsibility to set it back to the default
 153:fltk-1.3.4-1/FL/fl_draw.H ****  using \c fl_line_style(0).
 154:fltk-1.3.4-1/FL/fl_draw.H ****  
 155:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] style A bitmask which is a bitwise-OR of a line style, a cap
 156:fltk-1.3.4-1/FL/fl_draw.H ****  style, and a join style. If you don't specify a dash type you
 157:fltk-1.3.4-1/FL/fl_draw.H ****  will get a solid line. If you don't specify a cap or join type
 158:fltk-1.3.4-1/FL/fl_draw.H ****  you will get a system-defined default of whatever value is
 159:fltk-1.3.4-1/FL/fl_draw.H ****  fastest.
 160:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] width The thickness of the lines in pixels. Zero results in the
 161:fltk-1.3.4-1/FL/fl_draw.H ****  system defined default, which on both X and Windows is somewhat
 162:fltk-1.3.4-1/FL/fl_draw.H ****  different and nicer than 1.
 163:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] dashes A pointer to an array of dash lengths, measured in pixels.
 164:fltk-1.3.4-1/FL/fl_draw.H ****  The first location is how long to draw a solid portion, the next
 165:fltk-1.3.4-1/FL/fl_draw.H ****  is how long to draw the gap, then the solid, etc. It is terminated
 166:fltk-1.3.4-1/FL/fl_draw.H ****  with a zero-length entry. A \c NULL pointer or a zero-length
 167:fltk-1.3.4-1/FL/fl_draw.H ****  array results in a solid line. Odd array sizes are not supported
 168:fltk-1.3.4-1/FL/fl_draw.H ****  and result in undefined behavior.
 169:fltk-1.3.4-1/FL/fl_draw.H ****  
 170:fltk-1.3.4-1/FL/fl_draw.H ****  \note      Because of how line styles are implemented on Win32 systems,
 171:fltk-1.3.4-1/FL/fl_draw.H ****  you \e must set the line style \e after setting the drawing
 172:fltk-1.3.4-1/FL/fl_draw.H ****  color. If you set the color after the line style you will lose
 173:fltk-1.3.4-1/FL/fl_draw.H ****  the line style settings.
 174:fltk-1.3.4-1/FL/fl_draw.H ****  \note      The \p dashes array does not work under Windows 95, 98 or Me,
 175:fltk-1.3.4-1/FL/fl_draw.H ****  since those operating systems do not support complex line styles.
 176:fltk-1.3.4-1/FL/fl_draw.H ****  */
 177:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line_style(int style, int width=0, char* dashes=0) {fl_graphics_driver->line_style(s
 178:fltk-1.3.4-1/FL/fl_draw.H **** enum {
 179:fltk-1.3.4-1/FL/fl_draw.H ****   FL_SOLID	= 0,		///< line style: <tt>___________</tt>
 180:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASH	= 1,		///< line style: <tt>_ _ _ _ _ _</tt>
 181:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DOT	= 2,		///< line style: <tt>. . . . . .</tt>
 182:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASHDOT	= 3,		///< line style: <tt>_ . _ . _ .</tt>
 183:fltk-1.3.4-1/FL/fl_draw.H ****   FL_DASHDOTDOT	= 4,		///< line style: <tt>_ . . _ . .</tt>
 184:fltk-1.3.4-1/FL/fl_draw.H **** 
 185:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_FLAT	= 0x100,	///< cap style: end is flat
 186:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_ROUND	= 0x200,	///< cap style: end is round
 187:fltk-1.3.4-1/FL/fl_draw.H ****   FL_CAP_SQUARE	= 0x300,	///< cap style: end wraps end point
 188:fltk-1.3.4-1/FL/fl_draw.H **** 
 189:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_MITER	= 0x1000,	///< join style: line join extends to a point
 190:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_ROUND	= 0x2000,	///< join style: line join is rounded
 191:fltk-1.3.4-1/FL/fl_draw.H ****   FL_JOIN_BEVEL	= 0x3000	///< join style: line join is tidied
 192:fltk-1.3.4-1/FL/fl_draw.H **** };
 193:fltk-1.3.4-1/FL/fl_draw.H **** 
 194:fltk-1.3.4-1/FL/fl_draw.H **** // rectangles tweaked to exactly fill the pixel rectangle:
 195:fltk-1.3.4-1/FL/fl_draw.H **** 
 196:fltk-1.3.4-1/FL/fl_draw.H **** /** 
 197:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a 1-pixel border \e inside the given bounding box.
 198:fltk-1.3.4-1/FL/fl_draw.H ****  This function is meant for quick drawing of simple boxes. The behavior is 
 199:fltk-1.3.4-1/FL/fl_draw.H ****  undefined for line widths that are not 1.
 200:fltk-1.3.4-1/FL/fl_draw.H ****  */
 201:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rect(int x, int y, int w, int h) { fl_graphics_driver->rect(x,y,w,h); }
 202:fltk-1.3.4-1/FL/fl_draw.H **** 
 203:fltk-1.3.4-1/FL/fl_draw.H **** /** Draws with passed color a 1-pixel border \e inside the given bounding box */
 204:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rect(int x, int y, int w, int h, Fl_Color c) {fl_color(c); fl_rect(x,y,w,h);}
 205:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with current color a rectangle that exactly fills the given bounding box */
 206:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h) { fl_graphics_driver->rectf(x,y,w,h); }
 3929              		.loc 2 206 0
 3930 00a3 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3930      000000
 3931 00aa 4589E8   		movl	%r13d, %r8d
 3932 00ad 4489E1   		movl	%r12d, %ecx
 3933 00b0 89EA     		movl	%ebp, %edx
 3934 00b2 89DE     		movl	%ebx, %esi
 3935 00b4 488B07   		movq	(%rdi), %rax
 3936 00b7 FF5020   		call	*32(%rax)
 3937              	.LVL482:
 3938 00ba EBAE     		jmp	.L365
 3939              	.LVL483:
 3940              	.L371:
 3941              	.LBE138:
 3942              	.LBE137:
 3943              	.LBE140:
 3944              		.loc 1 611 0
 3945 00bc E8000000 		call	__stack_chk_fail
 3945      00
 3946              	.LVL484:
 3947              		.cfi_endproc
 3948              	.LFE506:
 3950              		.section	.text.unlikely._Z8fl_rectfiiiihhh
 3951              	.LCOLDE27:
 3952              		.section	.text._Z8fl_rectfiiiihhh
 3953              	.LHOTE27:
 3954              		.section	.bss._ZZL17figure_out_visualvE10FL_NUM_pfv,"aw",@nobits
 3955              		.align 4
 3958              	_ZZL17figure_out_visualvE10FL_NUM_pfv:
 3959 0000 00000000 		.zero	4
 3960              		.section	.bss._ZZL17figure_out_visualvE7pfvlist,"aw",@nobits
 3961              		.align 8
 3964              	_ZZL17figure_out_visualvE7pfvlist:
 3965 0000 00000000 		.zero	8
 3965      00000000 
 3966              		.section	.bss._ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE6buffer,"aw",@nobits
 3967              		.align 8
 3970              	_ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE6buffer:
 3971 0000 00000000 		.zero	8
 3971      00000000 
 3972              		.section	.bss._ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE11buffer_size,"aw",@nobits
 3973              		.align 8
 3976              	_ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE11buffer_size:
 3977 0000 00000000 		.zero	8
 3977      00000000 
 3978              		.section	.bss._ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE4gc32,"aw",@nobits
 3979              		.align 8
 3982              	_ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE4gc32:
 3983 0000 00000000 		.zero	8
 3983      00000000 
 3984              		.section	.bss._ZL2bi,"aw",@nobits
 3985              		.align 4
 3988              	_ZL2bi:
 3989 0000 00000000 		.zero	4
 3990              		.section	.bss._ZL2gi,"aw",@nobits
 3991              		.align 4
 3994              	_ZL2gi:
 3995 0000 00000000 		.zero	4
 3996              		.section	.bss._ZL2ri,"aw",@nobits
 3997              		.align 4
 4000              	_ZL2ri:
 4001 0000 00000000 		.zero	4
 4002              		.section	.bss._ZL3dir,"aw",@nobits
 4003              		.align 4
 4006              	_ZL3dir:
 4007 0000 00000000 		.zero	4
 4008              		.section	.bss._ZL14mono_converter,"aw",@nobits
 4009              		.align 8
 4012              	_ZL14mono_converter:
 4013 0000 00000000 		.zero	8
 4013      00000000 
 4014              		.section	.bss._ZL9converter,"aw",@nobits
 4015              		.align 8
 4018              	_ZL9converter:
 4019 0000 00000000 		.zero	8
 4019      00000000 
 4020              		.section	.bss._ZL13scanline_mask,"aw",@nobits
 4021              		.align 4
 4024              	_ZL13scanline_mask:
 4025 0000 00000000 		.zero	4
 4026              		.section	.bss._ZL12scanline_add,"aw",@nobits
 4027              		.align 4
 4030              	_ZL12scanline_add:
 4031 0000 00000000 		.zero	4
 4032              		.section	.bss._ZL15bytes_per_pixel,"aw",@nobits
 4033              		.align 4
 4036              	_ZL15bytes_per_pixel:
 4037 0000 00000000 		.zero	4
 4038              		.section	.bss._ZL2xi,"aw",@nobits
 4039              		.align 32
 4042              	_ZL2xi:
 4043 0000 00000000 		.zero	136
 4043      00000000 
 4043      00000000 
 4043      00000000 
 4043      00000000 
 4044              		.text
 4045              	.Letext0:
 4046              		.section	.text.unlikely._ZL17color16_converterPKhPhii
 4047              	.Letext_cold0:
 4048              		.file 4 "fltk-1.3.4-1/FL/fl_types.h"
 4049              		.file 5 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 4050              		.file 6 "/usr/include/x86_64-linux-gnu/bits/types.h"
 4051              		.file 7 "/usr/include/libio.h"
 4052              		.file 8 "/usr/include/X11/X.h"
 4053              		.file 9 "/usr/include/X11/Xlib.h"
 4054              		.file 10 "/usr/include/X11/Xutil.h"
 4055              		.file 11 "fltk-1.3.4-1/FL/Fl_Device.H"
 4056              		.file 12 "fltk-1.3.4-1/src/Fl_XColor.H"
 4057              		.file 13 "/usr/include/stdio.h"
 4058              		.file 14 "fltk-1.3.4-1/FL/x.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_draw_image.cxx
     /tmp/cczlPIgA.s:13     .text._ZL17color16_converterPKhPhii:0000000000000000 _ZL17color16_converterPKhPhii
     /tmp/cczlPIgA.s:4006   .bss._ZL3dir:0000000000000000 _ZL3dir
     /tmp/cczlPIgA.s:4000   .bss._ZL2ri:0000000000000000 _ZL2ri
     /tmp/cczlPIgA.s:3994   .bss._ZL2gi:0000000000000000 _ZL2gi
     /tmp/cczlPIgA.s:3988   .bss._ZL2bi:0000000000000000 _ZL2bi
     /tmp/cczlPIgA.s:187    .text._ZL16mono16_converterPKhPhii:0000000000000000 _ZL16mono16_converterPKhPhii
     /tmp/cczlPIgA.s:348    .text._ZL14c565_converterPKhPhii:0000000000000000 _ZL14c565_converterPKhPhii
     /tmp/cczlPIgA.s:502    .text._ZL14m565_converterPKhPhii:0000000000000000 _ZL14m565_converterPKhPhii
     /tmp/cczlPIgA.s:616    .text._ZL13rgb_converterPKhPhii:0000000000000000 _ZL13rgb_converterPKhPhii
     /tmp/cczlPIgA.s:674    .text._ZL13bgr_converterPKhPhii:0000000000000000 _ZL13bgr_converterPKhPhii
     /tmp/cczlPIgA.s:737    .text._ZL13rrr_converterPKhPhii:0000000000000000 _ZL13rrr_converterPKhPhii
     /tmp/cczlPIgA.s:790    .text._ZL14rgbx_converterPKhPhii:0000000000000000 _ZL14rgbx_converterPKhPhii
     /tmp/cczlPIgA.s:909    .text._ZL14xbgr_converterPKhPhii:0000000000000000 _ZL14xbgr_converterPKhPhii
     /tmp/cczlPIgA.s:1032   .text._ZL14xrgb_converterPKhPhii:0000000000000000 _ZL14xrgb_converterPKhPhii
     /tmp/cczlPIgA.s:1153   .text._ZL21argb_premul_converterPKhPhii:0000000000000000 _ZL21argb_premul_converterPKhPhii
     /tmp/cczlPIgA.s:1354   .text._ZL14bgrx_converterPKhPhii:0000000000000000 _ZL14bgrx_converterPKhPhii
     /tmp/cczlPIgA.s:1473   .text._ZL14rrrx_converterPKhPhii:0000000000000000 _ZL14rrrx_converterPKhPhii
     /tmp/cczlPIgA.s:1564   .text._ZL14xrrr_converterPKhPhii:0000000000000000 _ZL14xrrr_converterPKhPhii
     /tmp/cczlPIgA.s:1655   .text._ZL17color32_converterPKhPhii:0000000000000000 _ZL17color32_converterPKhPhii
     /tmp/cczlPIgA.s:1802   .text._ZL16mono32_converterPKhPhii:0000000000000000 _ZL16mono32_converterPKhPhii
     /tmp/cczlPIgA.s:1963   .text._ZL7innardsPKhiiiiiiiPFvPviiiPhES1_b:0000000000000000 _ZL7innardsPKhiiiiiiiPFvPviiiPhES1_b
     /tmp/cczlPIgA.s:4036   .bss._ZL15bytes_per_pixel:0000000000000000 _ZL15bytes_per_pixel
     /tmp/cczlPIgA.s:4018   .bss._ZL9converter:0000000000000000 _ZL9converter
     /tmp/cczlPIgA.s:4042   .bss._ZL2xi:0000000000000000 _ZL2xi
     /tmp/cczlPIgA.s:4012   .bss._ZL14mono_converter:0000000000000000 _ZL14mono_converter
     /tmp/cczlPIgA.s:4030   .bss._ZL12scanline_add:0000000000000000 _ZL12scanline_add
     /tmp/cczlPIgA.s:3970   .bss._ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE6buffer:0000000000000000 _ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE6buffer
     /tmp/cczlPIgA.s:3982   .bss._ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE4gc32:0000000000000000 _ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE4gc32
     /tmp/cczlPIgA.s:4024   .bss._ZL13scanline_mask:0000000000000000 _ZL13scanline_mask
     /tmp/cczlPIgA.s:3976   .bss._ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE11buffer_size:0000000000000000 _ZZL7innardsPKhiiiiiiiPFvPviiiPhES1_bE11buffer_size
     /tmp/cczlPIgA.s:3964   .bss._ZZL17figure_out_visualvE7pfvlist:0000000000000000 _ZZL17figure_out_visualvE7pfvlist
     /tmp/cczlPIgA.s:3958   .bss._ZZL17figure_out_visualvE10FL_NUM_pfv:0000000000000000 _ZZL17figure_out_visualvE10FL_NUM_pfv
     /tmp/cczlPIgA.s:3299   .text._ZL16color8_converterPKhPhii:0000000000000000 _ZL16color8_converterPKhPhii
     /tmp/cczlPIgA.s:3045   .text._ZL15mono8_converterPKhPhii:0000000000000000 _ZL15mono8_converterPKhPhii
     /tmp/cczlPIgA.s:3551   .text._ZN23Fl_Xlib_Graphics_Driver10draw_imageEPKhiiiiii:0000000000000000 _ZN23Fl_Xlib_Graphics_Driver10draw_imageEPKhiiiiii
     /tmp/cczlPIgA.s:3622   .text._ZN23Fl_Xlib_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii:0000000000000000 _ZN23Fl_Xlib_Graphics_Driver10draw_imageEPFvPviiiPhES0_iiiii
     /tmp/cczlPIgA.s:3696   .text._ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPKhiiiiii:0000000000000000 _ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPKhiiiiii
     /tmp/cczlPIgA.s:3756   .text._ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii:0000000000000000 _ZN23Fl_Xlib_Graphics_Driver15draw_image_monoEPFvPviiiPhES0_iiiii
     /tmp/cczlPIgA.s:3811   .text._Z8fl_rectfiiiihhh:0000000000000000 _Z8fl_rectfiiiihhh
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
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
fl_redmask
fl_greenmask
fl_bluemask
fl_redshift
fl_greenshift
fl_blueshift
fl_extrashift
fl_graphics_driver
fl_gc
_Znam
fl_window
fl_display
XPutImage
_ZdaPv
fl_visual
_Z9fl_xpixelj
_ZN2Fl5fatalE
XCreateGC
XListPixmapFormats
__stack_chk_fail
_Z9fl_xpixelhhh
fl_xmap
