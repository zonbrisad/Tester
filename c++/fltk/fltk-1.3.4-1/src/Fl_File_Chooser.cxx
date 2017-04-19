   1              		.file	"Fl_File_Chooser.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN15Fl_File_Chooser11cb_okButtonEP16Fl_Return_ButtonPv,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN15Fl_File_Chooser11cb_okButtonEP16Fl_Return_ButtonPv,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN15Fl_File_Chooser11cb_okButtonEP16Fl_Return_ButtonPv
  12              	.Ltext_cold0:
  13              		.section	.text._ZN15Fl_File_Chooser11cb_okButtonEP16Fl_Return_ButtonPv
  14              		.globl	_ZN15Fl_File_Chooser11cb_okButtonEP16Fl_Return_ButtonPv
  16              	_ZN15Fl_File_Chooser11cb_okButtonEP16Fl_Return_ButtonPv:
  17              	.LFB706:
  18              		.file 1 "fltk-1.3.4-1/src/Fl_File_Chooser.cxx"
   1:fltk-1.3.4-1/src/Fl_File_Chooser.cxx **** ...
  19              		.loc 1 113 0
  20              		.cfi_startproc
  21              	.LVL0:
  22 0000 53       		pushq	%rbx
  23              		.cfi_def_cfa_offset 16
  24              		.cfi_offset 3, -16
  25              	.LVL1:
  26 0001 488B4708 		movq	8(%rdi), %rax
  27 0005 488B4008 		movq	8(%rax), %rax
  28 0009 488B4008 		movq	8(%rax), %rax
  29 000d 488B5818 		movq	24(%rax), %rbx
  30              	.LVL2:
  31              	.LBB379:
  32              	.LBB380:
  33              		.loc 1 107 0
  34 0011 488BBB18 		movq	6168(%rbx), %rdi
  34      180000
  35              	.LVL3:
  36 0018 488B07   		movq	(%rdi), %rax
  37 001b FF5030   		call	*48(%rax)
  38              	.LVL4:
  39              		.loc 1 110 0
  40 001e 488B03   		movq	(%rbx), %rax
  41 0021 4885C0   		testq	%rax, %rax
  42 0024 740A     		je	.L1
  43              		.loc 1 111 0
  44 0026 488B7308 		movq	8(%rbx), %rsi
  45 002a 4889DF   		movq	%rbx, %rdi
  46              	.LBE380:
  47              	.LBE379:
  48              		.loc 1 115 0
  49 002d 5B       		popq	%rbx
  50              		.cfi_remember_state
  51              		.cfi_def_cfa_offset 8
  52              	.LBB382:
  53              	.LBB381:
  54              		.loc 1 111 0
  55 002e FFE0     		jmp	*%rax
  56              	.LVL5:
  57              		.p2align 4,,10
  58              		.p2align 3
  59              	.L1:
  60              		.cfi_restore_state
  61              	.LBE381:
  62              	.LBE382:
  63              		.loc 1 115 0
  64 0030 5B       		popq	%rbx
  65              		.cfi_def_cfa_offset 8
  66 0031 C3       		ret
  67              		.cfi_endproc
  68              	.LFE706:
  70              		.section	.text.unlikely._ZN15Fl_File_Chooser11cb_okButtonEP16Fl_Return_ButtonPv
  71              	.LCOLDE0:
  72              		.section	.text._ZN15Fl_File_Chooser11cb_okButtonEP16Fl_Return_ButtonPv
  73              	.LHOTE0:
  74              		.section	.text.unlikely._ZN15Fl_File_Chooser18cb_favCancelButtonEP9Fl_ButtonPv,"ax",@progbits
  75              		.align 2
  76              	.LCOLDB1:
  77              		.section	.text._ZN15Fl_File_Chooser18cb_favCancelButtonEP9Fl_ButtonPv,"ax",@progbits
  78              	.LHOTB1:
  79              		.align 2
  80              		.p2align 4,,15
  81              		.globl	_ZN15Fl_File_Chooser18cb_favCancelButtonEP9Fl_ButtonPv
  83              	_ZN15Fl_File_Chooser18cb_favCancelButtonEP9Fl_ButtonPv:
  84              	.LFB718:
  85              		.loc 1 158 0
  86              		.cfi_startproc
  87              	.LVL6:
  88 0000 488B4708 		movq	8(%rdi), %rax
  89 0004 488B4008 		movq	8(%rax), %rax
  90 0008 488B4018 		movq	24(%rax), %rax
  91 000c 488BB870 		movq	6256(%rax), %rdi
  91      180000
  92              	.LVL7:
  93              	.LBB383:
  94              	.LBB384:
  95              		.loc 1 156 0
  96 0013 488B07   		movq	(%rdi), %rax
  97 0016 FF6030   		jmp	*48(%rax)
  98              	.LVL8:
  99              	.LBE384:
 100              	.LBE383:
 101              		.cfi_endproc
 102              	.LFE718:
 104              		.section	.text.unlikely._ZN15Fl_File_Chooser18cb_favCancelButtonEP9Fl_ButtonPv
 105              	.LCOLDE1:
 106              		.section	.text._ZN15Fl_File_Chooser18cb_favCancelButtonEP9Fl_ButtonPv
 107              	.LHOTE1:
 108              		.section	.text.unlikely._ZN15Fl_File_Chooser13cb_showChoiceEP9Fl_ChoicePv,"ax",@progbits
 109              		.align 2
 110              	.LCOLDB2:
 111              		.section	.text._ZN15Fl_File_Chooser13cb_showChoiceEP9Fl_ChoicePv,"ax",@progbits
 112              	.LHOTB2:
 113              		.align 2
 114              		.p2align 4,,15
 115              		.globl	_ZN15Fl_File_Chooser13cb_showChoiceEP9Fl_ChoicePv
 117              	_ZN15Fl_File_Chooser13cb_showChoiceEP9Fl_ChoicePv:
 118              	.LFB689:
 119              		.loc 1 44 0
 120              		.cfi_startproc
 121              	.LVL9:
 122 0000 488B4708 		movq	8(%rdi), %rax
 123 0004 488B4008 		movq	8(%rax), %rax
 124              	.LBB385:
 125              	.LBB386:
 126              		.loc 1 42 0
 127 0008 488B7818 		movq	24(%rax), %rdi
 128              	.LVL10:
 129 000c E9000000 		jmp	_ZN15Fl_File_Chooser12showChoiceCBEv
 129      00
 130              	.LVL11:
 131              	.LBE386:
 132              	.LBE385:
 133              		.cfi_endproc
 134              	.LFE689:
 136              		.section	.text.unlikely._ZN15Fl_File_Chooser13cb_showChoiceEP9Fl_ChoicePv
 137              	.LCOLDE2:
 138              		.section	.text._ZN15Fl_File_Chooser13cb_showChoiceEP9Fl_ChoicePv
 139              	.LHOTE2:
 140              		.section	.text.unlikely._ZN15Fl_File_Chooser18cb_favoritesButtonEP14Fl_Menu_ButtonPv,"ax",@progbit
 141              		.align 2
 142              	.LCOLDB3:
 143              		.section	.text._ZN15Fl_File_Chooser18cb_favoritesButtonEP14Fl_Menu_ButtonPv,"ax",@progbits
 144              	.LHOTB3:
 145              		.align 2
 146              		.p2align 4,,15
 147              		.globl	_ZN15Fl_File_Chooser18cb_favoritesButtonEP14Fl_Menu_ButtonPv
 149              	_ZN15Fl_File_Chooser18cb_favoritesButtonEP14Fl_Menu_ButtonPv:
 150              	.LFB691:
 151              		.loc 1 51 0
 152              		.cfi_startproc
 153              	.LVL12:
 154 0000 488B4708 		movq	8(%rdi), %rax
 155 0004 488B4008 		movq	8(%rax), %rax
 156              	.LBB387:
 157              	.LBB388:
 158              		.loc 1 49 0
 159 0008 488B7818 		movq	24(%rax), %rdi
 160              	.LVL13:
 161 000c E9000000 		jmp	_ZN15Fl_File_Chooser17favoritesButtonCBEv
 161      00
 162              	.LVL14:
 163              	.LBE388:
 164              	.LBE387:
 165              		.cfi_endproc
 166              	.LFE691:
 168              		.section	.text.unlikely._ZN15Fl_File_Chooser18cb_favoritesButtonEP14Fl_Menu_ButtonPv
 169              	.LCOLDE3:
 170              		.section	.text._ZN15Fl_File_Chooser18cb_favoritesButtonEP14Fl_Menu_ButtonPv
 171              	.LHOTE3:
 172              		.section	.text.unlikely._ZN15Fl_File_Chooser12cb_newButtonEP9Fl_ButtonPv,"ax",@progbits
 173              		.align 2
 174              	.LCOLDB4:
 175              		.section	.text._ZN15Fl_File_Chooser12cb_newButtonEP9Fl_ButtonPv,"ax",@progbits
 176              	.LHOTB4:
 177              		.align 2
 178              		.p2align 4,,15
 179              		.globl	_ZN15Fl_File_Chooser12cb_newButtonEP9Fl_ButtonPv
 181              	_ZN15Fl_File_Chooser12cb_newButtonEP9Fl_ButtonPv:
 182              	.LFB693:
 183              		.loc 1 58 0
 184              		.cfi_startproc
 185              	.LVL15:
 186 0000 488B4708 		movq	8(%rdi), %rax
 187 0004 488B4008 		movq	8(%rax), %rax
 188              	.LBB389:
 189              	.LBB390:
 190              		.loc 1 56 0
 191 0008 488B7818 		movq	24(%rax), %rdi
 192              	.LVL16:
 193 000c E9000000 		jmp	_ZN15Fl_File_Chooser6newdirEv
 193      00
 194              	.LVL17:
 195              	.LBE390:
 196              	.LBE389:
 197              		.cfi_endproc
 198              	.LFE693:
 200              		.section	.text.unlikely._ZN15Fl_File_Chooser12cb_newButtonEP9Fl_ButtonPv
 201              	.LCOLDE4:
 202              		.section	.text._ZN15Fl_File_Chooser12cb_newButtonEP9Fl_ButtonPv
 203              	.LHOTE4:
 204              		.section	.text.unlikely._ZN15Fl_File_Chooser3cb_EP7Fl_TilePv,"ax",@progbits
 205              		.align 2
 206              	.LCOLDB5:
 207              		.section	.text._ZN15Fl_File_Chooser3cb_EP7Fl_TilePv,"ax",@progbits
 208              	.LHOTB5:
 209              		.align 2
 210              		.p2align 4,,15
 211              		.globl	_ZN15Fl_File_Chooser3cb_EP7Fl_TilePv
 213              	_ZN15Fl_File_Chooser3cb_EP7Fl_TilePv:
 214              	.LFB696:
 215              		.loc 1 74 0
 216              		.cfi_startproc
 217              	.LVL18:
 218 0000 488B4708 		movq	8(%rdi), %rax
 219              	.LBB391:
 220              	.LBB392:
 221              		.loc 1 72 0
 222 0004 488B7818 		movq	24(%rax), %rdi
 223              	.LVL19:
 224 0008 E9000000 		jmp	_ZN15Fl_File_Chooser14update_previewEv
 224      00
 225              	.LVL20:
 226              	.LBE392:
 227              	.LBE391:
 228              		.cfi_endproc
 229              	.LFE696:
 231              		.section	.text.unlikely._ZN15Fl_File_Chooser3cb_EP7Fl_TilePv
 232              	.LCOLDE5:
 233              		.section	.text._ZN15Fl_File_Chooser3cb_EP7Fl_TilePv
 234              	.LHOTE5:
 235              		.section	.text.unlikely._ZN15Fl_File_Chooser11cb_fileListEP15Fl_File_BrowserPv,"ax",@progbits
 236              		.align 2
 237              	.LCOLDB6:
 238              		.section	.text._ZN15Fl_File_Chooser11cb_fileListEP15Fl_File_BrowserPv,"ax",@progbits
 239              	.LHOTB6:
 240              		.align 2
 241              		.p2align 4,,15
 242              		.globl	_ZN15Fl_File_Chooser11cb_fileListEP15Fl_File_BrowserPv
 244              	_ZN15Fl_File_Chooser11cb_fileListEP15Fl_File_BrowserPv:
 245              	.LFB698:
 246              		.loc 1 81 0
 247              		.cfi_startproc
 248              	.LVL21:
 249 0000 488B4708 		movq	8(%rdi), %rax
 250 0004 488B4008 		movq	8(%rax), %rax
 251              	.LBB393:
 252              	.LBB394:
 253              		.loc 1 79 0
 254 0008 488B7818 		movq	24(%rax), %rdi
 255              	.LVL22:
 256 000c E9000000 		jmp	_ZN15Fl_File_Chooser10fileListCBEv
 256      00
 257              	.LVL23:
 258              	.LBE394:
 259              	.LBE393:
 260              		.cfi_endproc
 261              	.LFE698:
 263              		.section	.text.unlikely._ZN15Fl_File_Chooser11cb_fileListEP15Fl_File_BrowserPv
 264              	.LCOLDE6:
 265              		.section	.text._ZN15Fl_File_Chooser11cb_fileListEP15Fl_File_BrowserPv
 266              	.LHOTE6:
 267              		.section	.text.unlikely._ZN15Fl_File_Chooser16cb_previewButtonEP15Fl_Check_ButtonPv,"ax",@progbits
 268              		.align 2
 269              	.LCOLDB7:
 270              		.section	.text._ZN15Fl_File_Chooser16cb_previewButtonEP15Fl_Check_ButtonPv,"ax",@progbits
 271              	.LHOTB7:
 272              		.align 2
 273              		.p2align 4,,15
 274              		.globl	_ZN15Fl_File_Chooser16cb_previewButtonEP15Fl_Check_ButtonPv
 276              	_ZN15Fl_File_Chooser16cb_previewButtonEP15Fl_Check_ButtonPv:
 277              	.LFB700:
 278              		.loc 1 88 0
 279              		.cfi_startproc
 280              	.LVL24:
 281 0000 488B4708 		movq	8(%rdi), %rax
 282 0004 488B4008 		movq	8(%rax), %rax
 283 0008 488B4008 		movq	8(%rax), %rax
 284 000c 488B7818 		movq	24(%rax), %rdi
 285              	.LVL25:
 286 0010 488B8748 		movq	6216(%rdi), %rax
 286      180000
 287              	.LBB395:
 288              	.LBB396:
 289              		.loc 1 86 0
 290 0017 0FBE707C 		movsbl	124(%rax), %esi
 291              	.LVL26:
 292 001b E9000000 		jmp	_ZN15Fl_File_Chooser7previewEi
 292      00
 293              	.LVL27:
 294              	.LBE396:
 295              	.LBE395:
 296              		.cfi_endproc
 297              	.LFE700:
 299              		.section	.text.unlikely._ZN15Fl_File_Chooser16cb_previewButtonEP15Fl_Check_ButtonPv
 300              	.LCOLDE7:
 301              		.section	.text._ZN15Fl_File_Chooser16cb_previewButtonEP15Fl_Check_ButtonPv
 302              	.LHOTE7:
 303              		.section	.text.unlikely._ZN15Fl_File_Chooser19cb_showHiddenButtonEP15Fl_Check_ButtonPv,"ax",@progb
 304              		.align 2
 305              	.LCOLDB8:
 306              		.section	.text._ZN15Fl_File_Chooser19cb_showHiddenButtonEP15Fl_Check_ButtonPv,"ax",@progbits
 307              	.LHOTB8:
 308              		.align 2
 309              		.p2align 4,,15
 310              		.globl	_ZN15Fl_File_Chooser19cb_showHiddenButtonEP15Fl_Check_ButtonPv
 312              	_ZN15Fl_File_Chooser19cb_showHiddenButtonEP15Fl_Check_ButtonPv:
 313              	.LFB702:
 314              		.loc 1 95 0
 315              		.cfi_startproc
 316              	.LVL28:
 317 0000 488B4708 		movq	8(%rdi), %rax
 318 0004 488B4008 		movq	8(%rax), %rax
 319 0008 488B4008 		movq	8(%rax), %rax
 320 000c 488B7818 		movq	24(%rax), %rdi
 321              	.LVL29:
 322 0010 488B8750 		movq	6224(%rdi), %rax
 322      180000
 323              	.LBB397:
 324              	.LBB398:
 325              		.loc 1 93 0
 326 0017 0FBE707C 		movsbl	124(%rax), %esi
 327              	.LVL30:
 328 001b E9000000 		jmp	_ZN15Fl_File_Chooser10showHiddenEi
 328      00
 329              	.LVL31:
 330              	.LBE398:
 331              	.LBE397:
 332              		.cfi_endproc
 333              	.LFE702:
 335              		.section	.text.unlikely._ZN15Fl_File_Chooser19cb_showHiddenButtonEP15Fl_Check_ButtonPv
 336              	.LCOLDE8:
 337              		.section	.text._ZN15Fl_File_Chooser19cb_showHiddenButtonEP15Fl_Check_ButtonPv
 338              	.LHOTE8:
 339              		.section	.text.unlikely._ZN15Fl_File_Chooser11cb_fileNameEP13Fl_File_InputPv,"ax",@progbits
 340              		.align 2
 341              	.LCOLDB9:
 342              		.section	.text._ZN15Fl_File_Chooser11cb_fileNameEP13Fl_File_InputPv,"ax",@progbits
 343              	.LHOTB9:
 344              		.align 2
 345              		.p2align 4,,15
 346              		.globl	_ZN15Fl_File_Chooser11cb_fileNameEP13Fl_File_InputPv
 348              	_ZN15Fl_File_Chooser11cb_fileNameEP13Fl_File_InputPv:
 349              	.LFB704:
 350              		.loc 1 102 0
 351              		.cfi_startproc
 352              	.LVL32:
 353 0000 488B4708 		movq	8(%rdi), %rax
 354 0004 488B4008 		movq	8(%rax), %rax
 355              	.LBB399:
 356              	.LBB400:
 357              		.loc 1 100 0
 358 0008 488B7818 		movq	24(%rax), %rdi
 359              	.LVL33:
 360 000c E9000000 		jmp	_ZN15Fl_File_Chooser10fileNameCBEv
 360      00
 361              	.LVL34:
 362              	.LBE400:
 363              	.LBE399:
 364              		.cfi_endproc
 365              	.LFE704:
 367              		.section	.text.unlikely._ZN15Fl_File_Chooser11cb_fileNameEP13Fl_File_InputPv
 368              	.LCOLDE9:
 369              		.section	.text._ZN15Fl_File_Chooser11cb_fileNameEP13Fl_File_InputPv
 370              	.LHOTE9:
 371              		.section	.text.unlikely._ZN15Fl_File_Chooser10cb_favListEP15Fl_File_BrowserPv,"ax",@progbits
 372              		.align 2
 373              	.LCOLDB10:
 374              		.section	.text._ZN15Fl_File_Chooser10cb_favListEP15Fl_File_BrowserPv,"ax",@progbits
 375              	.LHOTB10:
 376              		.align 2
 377              		.p2align 4,,15
 378              		.globl	_ZN15Fl_File_Chooser10cb_favListEP15Fl_File_BrowserPv
 380              	_ZN15Fl_File_Chooser10cb_favListEP15Fl_File_BrowserPv:
 381              	.LFB710:
 382              		.loc 1 130 0
 383              		.cfi_startproc
 384              	.LVL35:
 385 0000 488B4708 		movq	8(%rdi), %rax
 386 0004 488B7818 		movq	24(%rax), %rdi
 387              	.LVL36:
 388              	.LBB401:
 389              	.LBB402:
 390              		.loc 1 128 0
 391 0008 488BB778 		movq	6264(%rdi), %rsi
 391      180000
 392              	.LVL37:
 393 000f E9000000 		jmp	_ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget
 393      00
 394              	.LVL38:
 395              	.LBE402:
 396              	.LBE401:
 397              		.cfi_endproc
 398              	.LFE710:
 400              		.section	.text.unlikely._ZN15Fl_File_Chooser10cb_favListEP15Fl_File_BrowserPv
 401              	.LCOLDE10:
 402              		.section	.text._ZN15Fl_File_Chooser10cb_favListEP15Fl_File_BrowserPv
 403              	.LHOTE10:
 404              		.section	.text.unlikely._ZN15Fl_File_Chooser14cb_favUpButtonEP9Fl_ButtonPv,"ax",@progbits
 405              		.align 2
 406              	.LCOLDB11:
 407              		.section	.text._ZN15Fl_File_Chooser14cb_favUpButtonEP9Fl_ButtonPv,"ax",@progbits
 408              	.LHOTB11:
 409              		.align 2
 410              		.p2align 4,,15
 411              		.globl	_ZN15Fl_File_Chooser14cb_favUpButtonEP9Fl_ButtonPv
 413              	_ZN15Fl_File_Chooser14cb_favUpButtonEP9Fl_ButtonPv:
 414              	.LFB712:
 415              		.loc 1 137 0
 416              		.cfi_startproc
 417              	.LVL39:
 418 0000 488B4708 		movq	8(%rdi), %rax
 419 0004 488B4008 		movq	8(%rax), %rax
 420 0008 488B7818 		movq	24(%rax), %rdi
 421              	.LVL40:
 422              	.LBB403:
 423              	.LBB404:
 424              		.loc 1 135 0
 425 000c 488BB780 		movq	6272(%rdi), %rsi
 425      180000
 426              	.LVL41:
 427 0013 E9000000 		jmp	_ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget
 427      00
 428              	.LVL42:
 429              	.LBE404:
 430              	.LBE403:
 431              		.cfi_endproc
 432              	.LFE712:
 434              		.section	.text.unlikely._ZN15Fl_File_Chooser14cb_favUpButtonEP9Fl_ButtonPv
 435              	.LCOLDE11:
 436              		.section	.text._ZN15Fl_File_Chooser14cb_favUpButtonEP9Fl_ButtonPv
 437              	.LHOTE11:
 438              		.section	.text.unlikely._ZN15Fl_File_Chooser18cb_favDeleteButtonEP9Fl_ButtonPv,"ax",@progbits
 439              		.align 2
 440              	.LCOLDB12:
 441              		.section	.text._ZN15Fl_File_Chooser18cb_favDeleteButtonEP9Fl_ButtonPv,"ax",@progbits
 442              	.LHOTB12:
 443              		.align 2
 444              		.p2align 4,,15
 445              		.globl	_ZN15Fl_File_Chooser18cb_favDeleteButtonEP9Fl_ButtonPv
 447              	_ZN15Fl_File_Chooser18cb_favDeleteButtonEP9Fl_ButtonPv:
 448              	.LFB714:
 449              		.loc 1 144 0
 450              		.cfi_startproc
 451              	.LVL43:
 452 0000 488B4708 		movq	8(%rdi), %rax
 453 0004 488B4008 		movq	8(%rax), %rax
 454 0008 488B7818 		movq	24(%rax), %rdi
 455              	.LVL44:
 456              	.LBB405:
 457              	.LBB406:
 458              		.loc 1 142 0
 459 000c 488BB788 		movq	6280(%rdi), %rsi
 459      180000
 460              	.LVL45:
 461 0013 E9000000 		jmp	_ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget
 461      00
 462              	.LVL46:
 463              	.LBE406:
 464              	.LBE405:
 465              		.cfi_endproc
 466              	.LFE714:
 468              		.section	.text.unlikely._ZN15Fl_File_Chooser18cb_favDeleteButtonEP9Fl_ButtonPv
 469              	.LCOLDE12:
 470              		.section	.text._ZN15Fl_File_Chooser18cb_favDeleteButtonEP9Fl_ButtonPv
 471              	.LHOTE12:
 472              		.section	.text.unlikely._ZN15Fl_File_Chooser16cb_favDownButtonEP9Fl_ButtonPv,"ax",@progbits
 473              		.align 2
 474              	.LCOLDB13:
 475              		.section	.text._ZN15Fl_File_Chooser16cb_favDownButtonEP9Fl_ButtonPv,"ax",@progbits
 476              	.LHOTB13:
 477              		.align 2
 478              		.p2align 4,,15
 479              		.globl	_ZN15Fl_File_Chooser16cb_favDownButtonEP9Fl_ButtonPv
 481              	_ZN15Fl_File_Chooser16cb_favDownButtonEP9Fl_ButtonPv:
 482              	.LFB716:
 483              		.loc 1 151 0
 484              		.cfi_startproc
 485              	.LVL47:
 486 0000 488B4708 		movq	8(%rdi), %rax
 487 0004 488B4008 		movq	8(%rax), %rax
 488 0008 488B7818 		movq	24(%rax), %rdi
 489              	.LVL48:
 490              	.LBB407:
 491              	.LBB408:
 492              		.loc 1 149 0
 493 000c 488BB790 		movq	6288(%rdi), %rsi
 493      180000
 494              	.LVL49:
 495 0013 E9000000 		jmp	_ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget
 495      00
 496              	.LVL50:
 497              	.LBE408:
 498              	.LBE407:
 499              		.cfi_endproc
 500              	.LFE716:
 502              		.section	.text.unlikely._ZN15Fl_File_Chooser16cb_favDownButtonEP9Fl_ButtonPv
 503              	.LCOLDE13:
 504              		.section	.text._ZN15Fl_File_Chooser16cb_favDownButtonEP9Fl_ButtonPv
 505              	.LHOTE13:
 506              		.section	.text.unlikely._ZN15Fl_File_Chooser14cb_favOkButtonEP16Fl_Return_ButtonPv,"ax",@progbits
 507              		.align 2
 508              	.LCOLDB14:
 509              		.section	.text._ZN15Fl_File_Chooser14cb_favOkButtonEP16Fl_Return_ButtonPv,"ax",@progbits
 510              	.LHOTB14:
 511              		.align 2
 512              		.p2align 4,,15
 513              		.globl	_ZN15Fl_File_Chooser14cb_favOkButtonEP16Fl_Return_ButtonPv
 515              	_ZN15Fl_File_Chooser14cb_favOkButtonEP16Fl_Return_ButtonPv:
 516              	.LFB720:
 517              		.loc 1 165 0
 518              		.cfi_startproc
 519              	.LVL51:
 520 0000 488B4708 		movq	8(%rdi), %rax
 521 0004 488B4008 		movq	8(%rax), %rax
 522 0008 488B7818 		movq	24(%rax), %rdi
 523              	.LVL52:
 524              	.LBB409:
 525              	.LBB410:
 526              		.loc 1 163 0
 527 000c 488BB7A0 		movq	6304(%rdi), %rsi
 527      180000
 528              	.LVL53:
 529 0013 E9000000 		jmp	_ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget
 529      00
 530              	.LVL54:
 531              	.LBE410:
 532              	.LBE409:
 533              		.cfi_endproc
 534              	.LFE720:
 536              		.section	.text.unlikely._ZN15Fl_File_Chooser14cb_favOkButtonEP16Fl_Return_ButtonPv
 537              	.LCOLDE14:
 538              		.section	.text._ZN15Fl_File_Chooser14cb_favOkButtonEP16Fl_Return_ButtonPv
 539              	.LHOTE14:
 540              		.section	.rodata.str1.1,"aMS",@progbits,1
 541              	.LC15:
 542 0000 00       		.string	""
 543              		.section	.text.unlikely._ZN15Fl_File_Chooser15cb_cancelButtonEP9Fl_ButtonPv,"ax",@progbits
 544              		.align 2
 545              	.LCOLDB16:
 546              		.section	.text._ZN15Fl_File_Chooser15cb_cancelButtonEP9Fl_ButtonPv,"ax",@progbits
 547              	.LHOTB16:
 548              		.align 2
 549              		.p2align 4,,15
 550              		.globl	_ZN15Fl_File_Chooser15cb_cancelButtonEP9Fl_ButtonPv
 552              	_ZN15Fl_File_Chooser15cb_cancelButtonEP9Fl_ButtonPv:
 553              	.LFB708:
 554              		.loc 1 123 0
 555              		.cfi_startproc
 556              	.LVL55:
 557 0000 53       		pushq	%rbx
 558              		.cfi_def_cfa_offset 16
 559              		.cfi_offset 3, -16
 560              	.LVL56:
 561 0001 488B4708 		movq	8(%rdi), %rax
 562              	.LBB413:
 563              	.LBB414:
 564              		.loc 1 118 0
 565 0005 BE000000 		movl	$.LC15, %esi
 565      00
 566              	.LVL57:
 567 000a 488B4008 		movq	8(%rax), %rax
 568 000e 488B4008 		movq	8(%rax), %rax
 569 0012 488B5818 		movq	24(%rax), %rbx
 570              	.LVL58:
 571 0016 488BBB58 		movq	6232(%rbx), %rdi
 571      180000
 572              	.LVL59:
 573 001d E8000000 		call	_ZN13Fl_File_Input5valueEPKc
 573      00
 574              	.LVL60:
 575              		.loc 1 119 0
 576 0022 488BBB38 		movq	6200(%rbx), %rdi
 576      180000
 577 0029 31F6     		xorl	%esi, %esi
 578 002b E8000000 		call	_ZN11Fl_Browser_8deselectEi
 578      00
 579              	.LVL61:
 580              		.loc 1 120 0
 581 0030 4889DE   		movq	%rbx, %rsi
 582 0033 BF000000 		movl	$_ZN15Fl_File_Chooser9previewCBEPS_, %edi
 582      00
 583 0038 E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 583      00
 584              	.LVL62:
 585              		.loc 1 121 0
 586 003d 488BBB18 		movq	6168(%rbx), %rdi
 586      180000
 587              	.LBE414:
 588              	.LBE413:
 589              		.loc 1 125 0
 590 0044 5B       		popq	%rbx
 591              		.cfi_def_cfa_offset 8
 592              	.LVL63:
 593              	.LBB416:
 594              	.LBB415:
 595              		.loc 1 121 0
 596 0045 488B07   		movq	(%rdi), %rax
 597 0048 488B4030 		movq	48(%rax), %rax
 598 004c FFE0     		jmp	*%rax
 599              	.LVL64:
 600              	.LBE415:
 601              	.LBE416:
 602              		.cfi_endproc
 603              	.LFE708:
 605              		.section	.text.unlikely._ZN15Fl_File_Chooser15cb_cancelButtonEP9Fl_ButtonPv
 606              	.LCOLDE16:
 607              		.section	.text._ZN15Fl_File_Chooser15cb_cancelButtonEP9Fl_ButtonPv
 608              	.LHOTE16:
 609              		.section	.text.unlikely._ZN15Fl_File_Chooser9cb_windowEP16Fl_Double_WindowPv,"ax",@progbits
 610              		.align 2
 611              	.LCOLDB17:
 612              		.section	.text._ZN15Fl_File_Chooser9cb_windowEP16Fl_Double_WindowPv,"ax",@progbits
 613              	.LHOTB17:
 614              		.align 2
 615              		.p2align 4,,15
 616              		.globl	_ZN15Fl_File_Chooser9cb_windowEP16Fl_Double_WindowPv
 618              	_ZN15Fl_File_Chooser9cb_windowEP16Fl_Double_WindowPv:
 619              	.LFB687:
 620              		.loc 1 37 0
 621              		.cfi_startproc
 622              	.LVL65:
 623 0000 53       		pushq	%rbx
 624              		.cfi_def_cfa_offset 16
 625              		.cfi_offset 3, -16
 626 0001 488B5F18 		movq	24(%rdi), %rbx
 627              	.LVL66:
 628              	.LBB419:
 629              	.LBB420:
 630              		.loc 1 118 0
 631 0005 BE000000 		movl	$.LC15, %esi
 631      00
 632              	.LVL67:
 633 000a 488BBB58 		movq	6232(%rbx), %rdi
 633      180000
 634              	.LVL68:
 635 0011 E8000000 		call	_ZN13Fl_File_Input5valueEPKc
 635      00
 636              	.LVL69:
 637              		.loc 1 119 0
 638 0016 488BBB38 		movq	6200(%rbx), %rdi
 638      180000
 639 001d 31F6     		xorl	%esi, %esi
 640 001f E8000000 		call	_ZN11Fl_Browser_8deselectEi
 640      00
 641              	.LVL70:
 642              		.loc 1 120 0
 643 0024 4889DE   		movq	%rbx, %rsi
 644 0027 BF000000 		movl	$_ZN15Fl_File_Chooser9previewCBEPS_, %edi
 644      00
 645 002c E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 645      00
 646              	.LVL71:
 647              		.loc 1 121 0
 648 0031 488BBB18 		movq	6168(%rbx), %rdi
 648      180000
 649              	.LBE420:
 650              	.LBE419:
 651              		.loc 1 39 0
 652 0038 5B       		popq	%rbx
 653              		.cfi_def_cfa_offset 8
 654              	.LVL72:
 655              	.LBB422:
 656              	.LBB421:
 657              		.loc 1 121 0
 658 0039 488B07   		movq	(%rdi), %rax
 659 003c 488B4030 		movq	48(%rax), %rax
 660 0040 FFE0     		jmp	*%rax
 661              	.LVL73:
 662              	.LBE421:
 663              	.LBE422:
 664              		.cfi_endproc
 665              	.LFE687:
 667              		.section	.text.unlikely._ZN15Fl_File_Chooser9cb_windowEP16Fl_Double_WindowPv
 668              	.LCOLDE17:
 669              		.section	.text._ZN15Fl_File_Chooser9cb_windowEP16Fl_Double_WindowPv
 670              	.LHOTE17:
 671              		.section	.text.unlikely._ZN15Fl_File_ChooserD2Ev,"ax",@progbits
 672              		.align 2
 673              	.LCOLDB18:
 674              		.section	.text._ZN15Fl_File_ChooserD2Ev,"ax",@progbits
 675              	.LHOTB18:
 676              		.align 2
 677              		.p2align 4,,15
 678              		.globl	_ZN15Fl_File_ChooserD2Ev
 680              	_ZN15Fl_File_ChooserD2Ev:
 681              	.LFB725:
 682              		.loc 1 320 0
 683              		.cfi_startproc
 684              	.LVL74:
 685 0000 53       		pushq	%rbx
 686              		.cfi_def_cfa_offset 16
 687              		.cfi_offset 3, -16
 688              	.LBB423:
 689              		.loc 1 321 0
 690 0001 4889FE   		movq	%rdi, %rsi
 691              	.LBE423:
 692              		.loc 1 320 0
 693 0004 4889FB   		movq	%rdi, %rbx
 694              	.LBB426:
 695              		.loc 1 321 0
 696 0007 BF000000 		movl	$_ZN15Fl_File_Chooser9previewCBEPS_, %edi
 696      00
 697              	.LVL75:
 698 000c E8000000 		call	_ZN2Fl14remove_timeoutEPFvPvES0_
 698      00
 699              	.LVL76:
 700              		.loc 1 322 0
 701 0011 488BB3A8 		movq	6312(%rbx), %rsi
 701      180000
 702 0018 4885F6   		testq	%rsi, %rsi
 703 001b 740C     		je	.L24
 704              	.LVL77:
 705              	.LBB424:
 706              	.LBB425:
 707              		.file 2 "fltk-1.3.4-1/FL/Fl_Group.H"
   1:fltk-1.3.4-1/FL/Fl_Group.H **** //
   2:fltk-1.3.4-1/FL/Fl_Group.H **** // "$Id: Fl_Group.H 10446 2014-11-10 22:09:11Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Group.H **** //
   4:fltk-1.3.4-1/FL/Fl_Group.H **** // Group header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Group.H **** //
   6:fltk-1.3.4-1/FL/Fl_Group.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Group.H **** //
   8:fltk-1.3.4-1/FL/Fl_Group.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Group.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Group.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Group.H **** //
  12:fltk-1.3.4-1/FL/Fl_Group.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Group.H **** //
  14:fltk-1.3.4-1/FL/Fl_Group.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Group.H **** //
  16:fltk-1.3.4-1/FL/Fl_Group.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Group.H **** //
  18:fltk-1.3.4-1/FL/Fl_Group.H **** 
  19:fltk-1.3.4-1/FL/Fl_Group.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Group.H ****    Fl_Group, Fl_End classes . */
  21:fltk-1.3.4-1/FL/Fl_Group.H **** 
  22:fltk-1.3.4-1/FL/Fl_Group.H **** #ifndef Fl_Group_H
  23:fltk-1.3.4-1/FL/Fl_Group.H **** #define Fl_Group_H
  24:fltk-1.3.4-1/FL/Fl_Group.H **** 
  25:fltk-1.3.4-1/FL/Fl_Group.H **** #ifndef Fl_Widget_H
  26:fltk-1.3.4-1/FL/Fl_Group.H **** #include "Fl_Widget.H"
  27:fltk-1.3.4-1/FL/Fl_Group.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Group.H **** 
  29:fltk-1.3.4-1/FL/Fl_Group.H **** /**
  30:fltk-1.3.4-1/FL/Fl_Group.H ****   The Fl_Group class is the FLTK container widget. It maintains
  31:fltk-1.3.4-1/FL/Fl_Group.H ****   an array of child widgets. These children can themselves be any widget
  32:fltk-1.3.4-1/FL/Fl_Group.H ****   including Fl_Group. The most important subclass of Fl_Group
  33:fltk-1.3.4-1/FL/Fl_Group.H ****   is Fl_Window, however groups can also be used to control radio buttons
  34:fltk-1.3.4-1/FL/Fl_Group.H ****   or to enforce resize behavior.
  35:fltk-1.3.4-1/FL/Fl_Group.H **** 
  36:fltk-1.3.4-1/FL/Fl_Group.H ****   The tab and arrow keys are used to move the focus between widgets of
  37:fltk-1.3.4-1/FL/Fl_Group.H ****   this group, and to other groups. The only modifier grabbed is shift
  38:fltk-1.3.4-1/FL/Fl_Group.H ****   (for shift-tab), so that ctrl-tab, alt-up, and such are free
  39:fltk-1.3.4-1/FL/Fl_Group.H ****   for the app to use as shortcuts.
  40:fltk-1.3.4-1/FL/Fl_Group.H **** */
  41:fltk-1.3.4-1/FL/Fl_Group.H **** class FL_EXPORT Fl_Group : public Fl_Widget {
  42:fltk-1.3.4-1/FL/Fl_Group.H **** 
  43:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget** array_;
  44:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* savedfocus_;
  45:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* resizable_;
  46:fltk-1.3.4-1/FL/Fl_Group.H ****   int children_;
  47:fltk-1.3.4-1/FL/Fl_Group.H ****   int *sizes_; // remembered initial sizes of children
  48:fltk-1.3.4-1/FL/Fl_Group.H **** 
  49:fltk-1.3.4-1/FL/Fl_Group.H ****   int navigation(int);
  50:fltk-1.3.4-1/FL/Fl_Group.H ****   static Fl_Group *current_;
  51:fltk-1.3.4-1/FL/Fl_Group.H ****  
  52:fltk-1.3.4-1/FL/Fl_Group.H ****   // unimplemented copy ctor and assignment operator
  53:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Group(const Fl_Group&);
  54:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Group& operator=(const Fl_Group&);
  55:fltk-1.3.4-1/FL/Fl_Group.H **** 
  56:fltk-1.3.4-1/FL/Fl_Group.H **** protected:
  57:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw();
  58:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_child(Fl_Widget& widget) const;
  59:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_children();
  60:fltk-1.3.4-1/FL/Fl_Group.H ****   void draw_outside_label(const Fl_Widget& widget) const ;
  61:fltk-1.3.4-1/FL/Fl_Group.H ****   void update_child(Fl_Widget& widget) const;
  62:fltk-1.3.4-1/FL/Fl_Group.H ****   int  *sizes();
  63:fltk-1.3.4-1/FL/Fl_Group.H **** 
  64:fltk-1.3.4-1/FL/Fl_Group.H **** public:
  65:fltk-1.3.4-1/FL/Fl_Group.H **** 
  66:fltk-1.3.4-1/FL/Fl_Group.H ****   int handle(int);
  67:fltk-1.3.4-1/FL/Fl_Group.H ****   void begin();
  68:fltk-1.3.4-1/FL/Fl_Group.H ****   void end();
  69:fltk-1.3.4-1/FL/Fl_Group.H ****   static Fl_Group *current();
  70:fltk-1.3.4-1/FL/Fl_Group.H ****   static void current(Fl_Group *g);
  71:fltk-1.3.4-1/FL/Fl_Group.H **** 
  72:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
  73:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns how many child widgets the group has.
  74:fltk-1.3.4-1/FL/Fl_Group.H ****   */
  75:fltk-1.3.4-1/FL/Fl_Group.H ****   int children() const {return children_;}
  76:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
  77:fltk-1.3.4-1/FL/Fl_Group.H ****     Returns array()[n].  <i>No range checking is done!</i>
  78:fltk-1.3.4-1/FL/Fl_Group.H ****   */
  79:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* child(int n) const {return array()[n];}
  80:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget*) const;
  81:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
  82:fltk-1.3.4-1/FL/Fl_Group.H ****     See int Fl_Group::find(const Fl_Widget *w) const 
  83:fltk-1.3.4-1/FL/Fl_Group.H ****   */
  84:fltk-1.3.4-1/FL/Fl_Group.H ****   int find(const Fl_Widget& o) const {return find(&o);}
  85:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Widget* const* array() const;
  86:fltk-1.3.4-1/FL/Fl_Group.H **** 
  87:fltk-1.3.4-1/FL/Fl_Group.H ****   void resize(int,int,int,int);
  88:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
  89:fltk-1.3.4-1/FL/Fl_Group.H ****     Creates a new Fl_Group widget using the given position, size,
  90:fltk-1.3.4-1/FL/Fl_Group.H ****     and label string. The default boxtype is FL_NO_BOX.
  91:fltk-1.3.4-1/FL/Fl_Group.H ****   */
  92:fltk-1.3.4-1/FL/Fl_Group.H ****   Fl_Group(int,int,int,int, const char * = 0);
  93:fltk-1.3.4-1/FL/Fl_Group.H ****   virtual ~Fl_Group();
  94:fltk-1.3.4-1/FL/Fl_Group.H ****   void add(Fl_Widget&);
  95:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
  96:fltk-1.3.4-1/FL/Fl_Group.H ****     See void Fl_Group::add(Fl_Widget &w) 
  97:fltk-1.3.4-1/FL/Fl_Group.H ****   */
  98:fltk-1.3.4-1/FL/Fl_Group.H ****   void add(Fl_Widget* o) {add(*o);}
  99:fltk-1.3.4-1/FL/Fl_Group.H ****   void insert(Fl_Widget&, int i);
 100:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 101:fltk-1.3.4-1/FL/Fl_Group.H ****     This does insert(w, find(before)).  This will append the
 102:fltk-1.3.4-1/FL/Fl_Group.H ****     widget if \p before is not in the group.
 103:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 104:fltk-1.3.4-1/FL/Fl_Group.H ****   void insert(Fl_Widget& o, Fl_Widget* before) {insert(o,find(before));}
 105:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(int index);
 106:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(Fl_Widget&);
 107:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 108:fltk-1.3.4-1/FL/Fl_Group.H ****     Removes the widget \p o from the group.
 109:fltk-1.3.4-1/FL/Fl_Group.H ****     \sa void remove(Fl_Widget&)
 110:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 111:fltk-1.3.4-1/FL/Fl_Group.H ****   void remove(Fl_Widget* o) {remove(*o);}
 708              		.loc 2 111 0 discriminator 1
 709 001d 488BBB18 		movq	6168(%rbx), %rdi
 709      180000
 710 0024 E8000000 		call	_ZN8Fl_Group6removeER9Fl_Widget
 710      00
 711              	.LVL78:
 712              	.L24:
 713              	.LBE425:
 714              	.LBE424:
 715              		.loc 1 323 0
 716 0029 488BBB18 		movq	6168(%rbx), %rdi
 716      180000
 717 0030 4885FF   		testq	%rdi, %rdi
 718 0033 7406     		je	.L25
 719              		.loc 1 323 0 is_stmt 0 discriminator 1
 720 0035 488B07   		movq	(%rdi), %rax
 721 0038 FF5008   		call	*8(%rax)
 722              	.LVL79:
 723              	.L25:
 724              		.loc 1 324 0 is_stmt 1
 725 003b 488BBB70 		movq	6256(%rbx), %rdi
 725      180000
 726 0042 4885FF   		testq	%rdi, %rdi
 727 0045 7411     		je	.L23
 728              		.loc 1 324 0 is_stmt 0 discriminator 1
 729 0047 488B07   		movq	(%rdi), %rax
 730              	.LBE426:
 731              		.loc 1 325 0 is_stmt 1 discriminator 1
 732 004a 5B       		popq	%rbx
 733              		.cfi_remember_state
 734              		.cfi_def_cfa_offset 8
 735              	.LVL80:
 736              	.LBB427:
 737              		.loc 1 324 0 discriminator 1
 738 004b 488B4008 		movq	8(%rax), %rax
 739 004f FFE0     		jmp	*%rax
 740              	.LVL81:
 741              		.p2align 4,,10
 742 0051 0F1F8000 		.p2align 3
 742      000000
 743              	.L23:
 744              		.cfi_restore_state
 745              	.LBE427:
 746              		.loc 1 325 0
 747 0058 5B       		popq	%rbx
 748              		.cfi_def_cfa_offset 8
 749              	.LVL82:
 750 0059 C3       		ret
 751              		.cfi_endproc
 752              	.LFE725:
 754              		.section	.text.unlikely._ZN15Fl_File_ChooserD2Ev
 755              	.LCOLDE18:
 756              		.section	.text._ZN15Fl_File_ChooserD2Ev
 757              	.LHOTE18:
 758              		.globl	_ZN15Fl_File_ChooserD1Ev
 759              		.set	_ZN15Fl_File_ChooserD1Ev,_ZN15Fl_File_ChooserD2Ev
 760              		.section	.text.unlikely._ZN15Fl_File_Chooser8callbackEPFvPS_PvES1_,"ax",@progbits
 761              		.align 2
 762              	.LCOLDB19:
 763              		.section	.text._ZN15Fl_File_Chooser8callbackEPFvPS_PvES1_,"ax",@progbits
 764              	.LHOTB19:
 765              		.align 2
 766              		.p2align 4,,15
 767              		.globl	_ZN15Fl_File_Chooser8callbackEPFvPS_PvES1_
 769              	_ZN15Fl_File_Chooser8callbackEPFvPS_PvES1_:
 770              	.LFB727:
 771              		.loc 1 327 0
 772              		.cfi_startproc
 773              	.LVL83:
 774              		.loc 1 328 0
 775 0000 488937   		movq	%rsi, (%rdi)
 776              		.loc 1 329 0
 777 0003 48895708 		movq	%rdx, 8(%rdi)
 778 0007 C3       		ret
 779              		.cfi_endproc
 780              	.LFE727:
 782              		.section	.text.unlikely._ZN15Fl_File_Chooser8callbackEPFvPS_PvES1_
 783              	.LCOLDE19:
 784              		.section	.text._ZN15Fl_File_Chooser8callbackEPFvPS_PvES1_
 785              	.LHOTE19:
 786              		.section	.text.unlikely._ZN15Fl_File_Chooser5colorEj,"ax",@progbits
 787              		.align 2
 788              	.LCOLDB20:
 789              		.section	.text._ZN15Fl_File_Chooser5colorEj,"ax",@progbits
 790              	.LHOTB20:
 791              		.align 2
 792              		.p2align 4,,15
 793              		.globl	_ZN15Fl_File_Chooser5colorEj
 795              	_ZN15Fl_File_Chooser5colorEj:
 796              	.LFB728:
 797              		.loc 1 332 0
 798              		.cfi_startproc
 799              	.LVL84:
 800              		.loc 1 333 0
 801 0000 488B8738 		movq	6200(%rdi), %rax
 801      180000
 802              	.LVL85:
 803              	.LBB428:
 804              	.LBB429:
 805              		.file 3 "fltk-1.3.4-1/FL/Fl_Widget.H"
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
 806              		.loc 3 390 0
 807 0007 897064   		movl	%esi, 100(%rax)
 808              	.LVL86:
 809 000a C3       		ret
 810              	.LBE429:
 811              	.LBE428:
 812              		.cfi_endproc
 813              	.LFE728:
 815              		.section	.text.unlikely._ZN15Fl_File_Chooser5colorEj
 816              	.LCOLDE20:
 817              		.section	.text._ZN15Fl_File_Chooser5colorEj
 818              	.LHOTE20:
 819              		.section	.text.unlikely._ZN15Fl_File_Chooser5colorEv,"ax",@progbits
 820              		.align 2
 821              	.LCOLDB21:
 822              		.section	.text._ZN15Fl_File_Chooser5colorEv,"ax",@progbits
 823              	.LHOTB21:
 824              		.align 2
 825              		.p2align 4,,15
 826              		.globl	_ZN15Fl_File_Chooser5colorEv
 828              	_ZN15Fl_File_Chooser5colorEv:
 829              	.LFB729:
 830              		.loc 1 336 0
 831              		.cfi_startproc
 832              	.LVL87:
 833 0000 488B8738 		movq	6200(%rdi), %rax
 833      180000
 834              		.loc 1 337 0
 835 0007 8B4064   		movl	100(%rax), %eax
 836              		.loc 1 338 0
 837 000a C3       		ret
 838              		.cfi_endproc
 839              	.LFE729:
 841              		.section	.text.unlikely._ZN15Fl_File_Chooser5colorEv
 842              	.LCOLDE21:
 843              		.section	.text._ZN15Fl_File_Chooser5colorEv
 844              	.LHOTE21:
 845              		.section	.text.unlikely._ZN15Fl_File_Chooser9directoryEv,"ax",@progbits
 846              		.align 2
 847              	.LCOLDB22:
 848              		.section	.text._ZN15Fl_File_Chooser9directoryEv,"ax",@progbits
 849              	.LHOTB22:
 850              		.align 2
 851              		.p2align 4,,15
 852              		.globl	_ZN15Fl_File_Chooser9directoryEv
 854              	_ZN15Fl_File_Chooser9directoryEv:
 855              	.LFB730:
 856              		.loc 1 340 0
 857              		.cfi_startproc
 858              	.LVL88:
 859              		.loc 1 341 0
 860 0000 488D4710 		leaq	16(%rdi), %rax
 861              		.loc 1 342 0
 862 0004 C3       		ret
 863              		.cfi_endproc
 864              	.LFE730:
 866              		.section	.text.unlikely._ZN15Fl_File_Chooser9directoryEv
 867              	.LCOLDE22:
 868              		.section	.text._ZN15Fl_File_Chooser9directoryEv
 869              	.LHOTE22:
 870              		.section	.text.unlikely._ZN15Fl_File_Chooser6filterEv,"ax",@progbits
 871              		.align 2
 872              	.LCOLDB23:
 873              		.section	.text._ZN15Fl_File_Chooser6filterEv,"ax",@progbits
 874              	.LHOTB23:
 875              		.align 2
 876              		.p2align 4,,15
 877              		.globl	_ZN15Fl_File_Chooser6filterEv
 879              	_ZN15Fl_File_Chooser6filterEv:
 880              	.LFB731:
 881              		.loc 1 344 0
 882              		.cfi_startproc
 883              	.LVL89:
 884 0000 488B8738 		movq	6200(%rdi), %rax
 884      180000
 885              		.loc 1 345 0
 886 0007 488B80B0 		movq	688(%rax), %rax
 886      020000
 887              		.loc 1 346 0
 888 000e C3       		ret
 889              		.cfi_endproc
 890              	.LFE731:
 892              		.section	.text.unlikely._ZN15Fl_File_Chooser6filterEv
 893              	.LCOLDE23:
 894              		.section	.text._ZN15Fl_File_Chooser6filterEv
 895              	.LHOTE23:
 896              		.section	.text.unlikely._ZN15Fl_File_Chooser12filter_valueEv,"ax",@progbits
 897              		.align 2
 898              	.LCOLDB24:
 899              		.section	.text._ZN15Fl_File_Chooser12filter_valueEv,"ax",@progbits
 900              	.LHOTB24:
 901              		.align 2
 902              		.p2align 4,,15
 903              		.globl	_ZN15Fl_File_Chooser12filter_valueEv
 905              	_ZN15Fl_File_Chooser12filter_valueEv:
 906              	.LFB732:
 907              		.loc 1 348 0
 908              		.cfi_startproc
 909              	.LVL90:
 910              		.loc 1 349 0
 911 0000 488B8720 		movq	6176(%rdi), %rax
 911      180000
 912              	.LVL91:
 913 0007 488B5078 		movq	120(%rax), %rdx
 914 000b 488B8080 		movq	128(%rax), %rax
 914      000000
 915              	.LVL92:
 916              	.LBB430:
 917              	.LBB431:
 918              	.LBB432:
 919              		.file 4 "fltk-1.3.4-1/FL/Fl_Menu_.H"
   1:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
   2:fltk-1.3.4-1/FL/Fl_Menu_.H **** // "$Id: Fl_Menu_.H 11801 2016-07-09 17:06:46Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
   4:fltk-1.3.4-1/FL/Fl_Menu_.H **** // Menu base class header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
   6:fltk-1.3.4-1/FL/Fl_Menu_.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
   8:fltk-1.3.4-1/FL/Fl_Menu_.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Menu_.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Menu_.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
  12:fltk-1.3.4-1/FL/Fl_Menu_.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
  14:fltk-1.3.4-1/FL/Fl_Menu_.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
  16:fltk-1.3.4-1/FL/Fl_Menu_.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Menu_.H **** //
  18:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  19:fltk-1.3.4-1/FL/Fl_Menu_.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Menu_.H ****    Fl_Menu_ widget . */
  21:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  22:fltk-1.3.4-1/FL/Fl_Menu_.H **** #ifndef Fl_Menu__H
  23:fltk-1.3.4-1/FL/Fl_Menu_.H **** #define Fl_Menu__H
  24:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  25:fltk-1.3.4-1/FL/Fl_Menu_.H **** #ifndef Fl_Widget_H
  26:fltk-1.3.4-1/FL/Fl_Menu_.H **** #include "Fl_Widget.H"
  27:fltk-1.3.4-1/FL/Fl_Menu_.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Menu_.H **** #include "Fl_Menu_Item.H"
  29:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  30:fltk-1.3.4-1/FL/Fl_Menu_.H **** /**
  31:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Base class of all widgets that have a menu in FLTK.
  32:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  33:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Currently FLTK provides you with Fl_Menu_Button, Fl_Menu_Bar, and Fl_Choice.
  34:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  35:fltk-1.3.4-1/FL/Fl_Menu_.H ****   The class contains a pointer to an array of structures of type Fl_Menu_Item.
  36:fltk-1.3.4-1/FL/Fl_Menu_.H ****   The array may either be supplied directly by the user program, or it may
  37:fltk-1.3.4-1/FL/Fl_Menu_.H ****   be "private": a dynamically allocated array managed by the Fl_Menu_.
  38:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  39:fltk-1.3.4-1/FL/Fl_Menu_.H ****   When the user clicks a menu item, value() is set to that item
  40:fltk-1.3.4-1/FL/Fl_Menu_.H ****   and then:
  41:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  42:fltk-1.3.4-1/FL/Fl_Menu_.H ****     - If the Fl_Menu_Item has a callback set, that callback
  43:fltk-1.3.4-1/FL/Fl_Menu_.H ****       is invoked with any userdata configured for it.
  44:fltk-1.3.4-1/FL/Fl_Menu_.H ****       (The Fl_Menu_ widget's callback is NOT invoked.)
  45:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  46:fltk-1.3.4-1/FL/Fl_Menu_.H ****     - For any Fl_Menu_Items that \b don't have a callback set,
  47:fltk-1.3.4-1/FL/Fl_Menu_.H ****       the Fl_Menu_ widget's callback is invoked with any userdata
  48:fltk-1.3.4-1/FL/Fl_Menu_.H ****       configured for it. The callback can determine which item
  49:fltk-1.3.4-1/FL/Fl_Menu_.H ****       was picked using value(), mvalue(), item_pathname(), etc.
  50:fltk-1.3.4-1/FL/Fl_Menu_.H **** */
  51:fltk-1.3.4-1/FL/Fl_Menu_.H **** class FL_EXPORT Fl_Menu_ : public Fl_Widget {
  52:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  53:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Menu_Item *menu_;
  54:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item *value_;
  55:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  56:fltk-1.3.4-1/FL/Fl_Menu_.H **** protected:
  57:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  58:fltk-1.3.4-1/FL/Fl_Menu_.H ****   uchar alloc;			// flag indicates if menu_ is a dynamic copy (=1) or not (=0)
  59:fltk-1.3.4-1/FL/Fl_Menu_.H ****   uchar down_box_;
  60:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Font textfont_;
  61:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Fontsize textsize_;
  62:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Color textcolor_;
  63:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  64:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int item_pathname_(char *name, int namelen, const Fl_Menu_Item *finditem,
  65:fltk-1.3.4-1/FL/Fl_Menu_.H ****                      const Fl_Menu_Item *menu=0) const;
  66:fltk-1.3.4-1/FL/Fl_Menu_.H **** public:
  67:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Menu_(int,int,int,int,const char * =0);
  68:fltk-1.3.4-1/FL/Fl_Menu_.H ****   ~Fl_Menu_();
  69:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  70:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int item_pathname(char *name, int namelen, const Fl_Menu_Item *finditem=0) const;
  71:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item* picked(const Fl_Menu_Item*);
  72:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item* find_item(const char *name);
  73:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item* find_item(Fl_Callback*);
  74:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int find_index(const char *name) const;
  75:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int find_index(const Fl_Menu_Item *item) const;
  76:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int find_index(Fl_Callback *cb) const;
  77:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  78:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**
  79:fltk-1.3.4-1/FL/Fl_Menu_.H ****     Returns the menu item with the entered shortcut (key value).
  80:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  81:fltk-1.3.4-1/FL/Fl_Menu_.H ****     This searches the complete menu() for a shortcut that matches the
  82:fltk-1.3.4-1/FL/Fl_Menu_.H ****     entered key value.  It must be called for a FL_KEYBOARD or FL_SHORTCUT
  83:fltk-1.3.4-1/FL/Fl_Menu_.H ****     event.
  84:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  85:fltk-1.3.4-1/FL/Fl_Menu_.H ****     If a match is found, the menu's callback will be called.
  86:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  87:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \return matched Fl_Menu_Item or NULL.
  88:fltk-1.3.4-1/FL/Fl_Menu_.H ****   */
  89:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item* test_shortcut() {return picked(menu()->test_shortcut());}
  90:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void global();
  91:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  92:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**
  93:fltk-1.3.4-1/FL/Fl_Menu_.H ****     Returns a pointer to the array of Fl_Menu_Items.  This will either be
  94:fltk-1.3.4-1/FL/Fl_Menu_.H ****     the value passed to menu(value) or the private copy.
  95:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \sa size() -- returns the size of the Fl_Menu_Item array.
  96:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
  97:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \b Example: How to walk the array:
  98:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \code
  99:fltk-1.3.4-1/FL/Fl_Menu_.H ****     for ( int t=0; t<menubar->size(); t++ ) {                // walk array of items
 100:fltk-1.3.4-1/FL/Fl_Menu_.H ****         const Fl_Menu_Item &item = menubar->menu()[t];       // get each item
 101:fltk-1.3.4-1/FL/Fl_Menu_.H ****         fprintf(stderr, "item #%d -- label=%s, value=%s type=%s\n",
 102:fltk-1.3.4-1/FL/Fl_Menu_.H ****             t,
 103:fltk-1.3.4-1/FL/Fl_Menu_.H ****             item.label() ? item.label() : "(Null)",          // menu terminators have NULL labels
 104:fltk-1.3.4-1/FL/Fl_Menu_.H ****             (item.flags & FL_MENU_VALUE) ? "set" : "clear",  // value of toggle or radio items
 105:fltk-1.3.4-1/FL/Fl_Menu_.H ****             (item.flags & FL_SUBMENU) ? "Submenu" : "Item"); // see if item is a submenu or actual 
 106:fltk-1.3.4-1/FL/Fl_Menu_.H ****     }
 107:fltk-1.3.4-1/FL/Fl_Menu_.H ****     \endcode
 108:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
 109:fltk-1.3.4-1/FL/Fl_Menu_.H ****   */
 110:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item *menu() const {return menu_;}
 111:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void menu(const Fl_Menu_Item *m);
 112:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void copy(const Fl_Menu_Item *m, void* user_data = 0);
 113:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int insert(int index, const char*, int shortcut, Fl_Callback*, void* = 0, int = 0);
 114:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  add(const char*, int shortcut, Fl_Callback*, void* = 0, int = 0); // see src/Fl_Menu_add.cxx
 115:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** See int Fl_Menu_::add(const char* label, int shortcut, Fl_Callback*, void *user_data=0, int f
 116:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  add(const char* a, const char* b, Fl_Callback* c, void* d = 0, int e = 0) {
 117:fltk-1.3.4-1/FL/Fl_Menu_.H ****       return add(a,fl_old_shortcut(b),c,d,e);
 118:fltk-1.3.4-1/FL/Fl_Menu_.H ****   }
 119:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** See int Fl_Menu_::insert(const char* label, int shortcut, Fl_Callback*, void *user_data=0, in
 120:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int insert(int index, const char* a, const char* b, Fl_Callback* c, void* d = 0, int e = 0) {
 121:fltk-1.3.4-1/FL/Fl_Menu_.H ****       return insert(index,a,fl_old_shortcut(b),c,d,e);
 122:fltk-1.3.4-1/FL/Fl_Menu_.H ****   }
 123:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  add(const char *);
 124:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  size() const ;
 125:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void size(int W, int H) { Fl_Widget::size(W, H); }
 126:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void clear();
 127:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int clear_submenu(int index);
 128:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void replace(int,const char *);
 129:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void remove(int);
 130:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Changes the shortcut of item \p i to \p s. */
 131:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void shortcut(int i, int s) {menu_[i].shortcut(s);}
 132:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Sets the flags of item i.  For a list of the flags, see Fl_Menu_Item.  */
 133:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void mode(int i,int fl) {menu_[i].flags = fl;}
 134:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Gets the flags of item i.  For a list of the flags, see Fl_Menu_Item.  */
 135:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int  mode(int i) const {return menu_[i].flags;}
 136:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
 137:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Returns a pointer to the last menu item that was picked.  */
 138:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const Fl_Menu_Item *mvalue() const {return value_;}
 139:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Returns the index into menu() of the last item chosen by the user.  It is zero initially. */
 140:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int value() const {return value_ ? (int)(value_-menu_) : -1;}
 920              		.loc 4 140 0
 921 0012 4885C0   		testq	%rax, %rax
 922 0015 740E     		je	.L41
 923 0017 4829D0   		subq	%rdx, %rax
 924 001a 48C1F803 		sarq	$3, %rax
 925 001e 69C0B76D 		imull	$-1227133513, %eax, %eax
 925      DBB6
 926 0024 C3       		ret
 927              	.L41:
 928 0025 B8FFFFFF 		movl	$-1, %eax
 928      FF
 929              	.LVL93:
 930              	.LBE432:
 931              	.LBE431:
 932              	.LBE430:
 933              		.loc 1 350 0
 934 002a C3       		ret
 935              		.cfi_endproc
 936              	.LFE732:
 938              		.section	.text.unlikely._ZN15Fl_File_Chooser12filter_valueEv
 939              	.LCOLDE24:
 940              		.section	.text._ZN15Fl_File_Chooser12filter_valueEv
 941              	.LHOTE24:
 942              		.section	.text.unlikely._ZN15Fl_File_Chooser12filter_valueEi,"ax",@progbits
 943              		.align 2
 944              	.LCOLDB25:
 945              		.section	.text._ZN15Fl_File_Chooser12filter_valueEi,"ax",@progbits
 946              	.LHOTB25:
 947              		.align 2
 948              		.p2align 4,,15
 949              		.globl	_ZN15Fl_File_Chooser12filter_valueEi
 951              	_ZN15Fl_File_Chooser12filter_valueEi:
 952              	.LFB733:
 953              		.loc 1 352 0
 954              		.cfi_startproc
 955              	.LVL94:
 956 0000 53       		pushq	%rbx
 957              		.cfi_def_cfa_offset 16
 958              		.cfi_offset 3, -16
 959              		.loc 1 352 0
 960 0001 4889FB   		movq	%rdi, %rbx
 961              		.loc 1 353 0
 962 0004 488BBF20 		movq	6176(%rdi), %rdi
 962      180000
 963              	.LVL95:
 964 000b E8000000 		call	_ZN9Fl_Choice5valueEi
 964      00
 965              	.LVL96:
 966              		.loc 1 354 0
 967 0010 4889DF   		movq	%rbx, %rdi
 968              		.loc 1 355 0
 969 0013 5B       		popq	%rbx
 970              		.cfi_def_cfa_offset 8
 971              	.LVL97:
 972              		.loc 1 354 0
 973 0014 E9000000 		jmp	_ZN15Fl_File_Chooser12showChoiceCBEv
 973      00
 974              	.LVL98:
 975              		.cfi_endproc
 976              	.LFE733:
 978              		.section	.text.unlikely._ZN15Fl_File_Chooser12filter_valueEi
 979              	.LCOLDE25:
 980              		.section	.text._ZN15Fl_File_Chooser12filter_valueEi
 981              	.LHOTE25:
 982              		.section	.text.unlikely._ZN15Fl_File_Chooser4hideEv,"ax",@progbits
 983              		.align 2
 984              	.LCOLDB26:
 985              		.section	.text._ZN15Fl_File_Chooser4hideEv,"ax",@progbits
 986              	.LHOTB26:
 987              		.align 2
 988              		.p2align 4,,15
 989              		.globl	_ZN15Fl_File_Chooser4hideEv
 991              	_ZN15Fl_File_Chooser4hideEv:
 992              	.LFB734:
 993              		.loc 1 357 0
 994              		.cfi_startproc
 995              	.LVL99:
 996              		.loc 1 358 0
 997 0000 488BBF18 		movq	6168(%rdi), %rdi
 997      180000
 998              	.LVL100:
 999 0007 488B07   		movq	(%rdi), %rax
 1000 000a FF6030   		jmp	*48(%rax)
 1001              	.LVL101:
 1002              		.cfi_endproc
 1003              	.LFE734:
 1005              		.section	.text.unlikely._ZN15Fl_File_Chooser4hideEv
 1006              	.LCOLDE26:
 1007              		.section	.text._ZN15Fl_File_Chooser4hideEv
 1008              	.LHOTE26:
 1009              		.section	.text.unlikely._ZN15Fl_File_Chooser8iconsizeEh,"ax",@progbits
 1010              		.align 2
 1011              	.LCOLDB27:
 1012              		.section	.text._ZN15Fl_File_Chooser8iconsizeEh,"ax",@progbits
 1013              	.LHOTB27:
 1014              		.align 2
 1015              		.p2align 4,,15
 1016              		.globl	_ZN15Fl_File_Chooser8iconsizeEh
 1018              	_ZN15Fl_File_Chooser8iconsizeEh:
 1019              	.LFB735:
 1020              		.loc 1 361 0
 1021              		.cfi_startproc
 1022              	.LVL102:
 1023              		.loc 1 362 0
 1024 0000 488BBF38 		movq	6200(%rdi), %rdi
 1024      180000
 1025              	.LVL103:
 1026              	.LBB433:
 1027              	.LBB434:
 1028              		.file 5 "fltk-1.3.4-1/FL/Fl_File_Browser.H"
   1:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
   2:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // "$Id: Fl_File_Browser.H 8864 2011-07-19 04:49:30Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
   4:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // FileBrowser definitions.
   5:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
   6:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // Copyright 1999-2010 by Michael Sweet.
   7:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
   8:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  12:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  14:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  16:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  18:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  19:fltk-1.3.4-1/FL/Fl_File_Browser.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_File_Browser.H ****    Fl_File_Browser widget . */
  21:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  22:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  23:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // Include necessary header files...
  24:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  25:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  26:fltk-1.3.4-1/FL/Fl_File_Browser.H **** #ifndef _Fl_File_Browser_H_
  27:fltk-1.3.4-1/FL/Fl_File_Browser.H **** #  define _Fl_File_Browser_H_
  28:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  29:fltk-1.3.4-1/FL/Fl_File_Browser.H **** #  include "Fl_Browser.H"
  30:fltk-1.3.4-1/FL/Fl_File_Browser.H **** #  include "Fl_File_Icon.H"
  31:fltk-1.3.4-1/FL/Fl_File_Browser.H **** #  include "filename.H"
  32:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  33:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  34:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  35:fltk-1.3.4-1/FL/Fl_File_Browser.H **** // Fl_File_Browser class...
  36:fltk-1.3.4-1/FL/Fl_File_Browser.H **** //
  37:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  38:fltk-1.3.4-1/FL/Fl_File_Browser.H **** /** The Fl_File_Browser widget displays a list of filenames, optionally with file-specific icons. *
  39:fltk-1.3.4-1/FL/Fl_File_Browser.H **** class FL_EXPORT Fl_File_Browser : public Fl_Browser {
  40:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   
  41:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   int		filetype_;
  42:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   const char	*directory_;
  43:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   uchar		iconsize_;
  44:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   const char	*pattern_;
  45:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  46:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   int		full_height() const;
  47:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   int		item_height(void *) const;
  48:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   int		item_width(void *) const;
  49:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   void		item_draw(void *, int, int, int, int) const;
  50:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   int		incr_height() const { return (item_height(0)); }
  51:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  52:fltk-1.3.4-1/FL/Fl_File_Browser.H **** public:
  53:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   enum { FILES, DIRECTORIES };
  54:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  55:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   /**
  56:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     The constructor creates the Fl_File_Browser widget at the specified position and size.
  57:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     The destructor destroys the widget and frees all memory that has been allocated.
  58:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   */
  59:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   Fl_File_Browser(int, int, int, int, const char * = 0);
  60:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  61:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   /**    Sets or gets the size of the icons. The default size is 20 pixels.  */
  62:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   uchar		iconsize() const { return (iconsize_); };
  63:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   /**    Sets or gets the size of the icons. The default size is 20 pixels.  */
  64:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   void		iconsize(uchar s) { iconsize_ = s; redraw(); };
 1029              		.loc 5 64 0
 1030 0007 4088B7A8 		movb	%sil, 680(%rdi)
 1030      020000
 1031 000e E9000000 		jmp	_ZN9Fl_Widget6redrawEv
 1031      00
 1032              	.LVL104:
 1033              	.LBE434:
 1034              	.LBE433:
 1035              		.cfi_endproc
 1036              	.LFE735:
 1038              		.section	.text.unlikely._ZN15Fl_File_Chooser8iconsizeEh
 1039              	.LCOLDE27:
 1040              		.section	.text._ZN15Fl_File_Chooser8iconsizeEh
 1041              	.LHOTE27:
 1042              		.section	.text.unlikely._ZN15Fl_File_Chooser8iconsizeEv,"ax",@progbits
 1043              		.align 2
 1044              	.LCOLDB28:
 1045              		.section	.text._ZN15Fl_File_Chooser8iconsizeEv,"ax",@progbits
 1046              	.LHOTB28:
 1047              		.align 2
 1048              		.p2align 4,,15
 1049              		.globl	_ZN15Fl_File_Chooser8iconsizeEv
 1051              	_ZN15Fl_File_Chooser8iconsizeEv:
 1052              	.LFB736:
 1053              		.loc 1 365 0
 1054              		.cfi_startproc
 1055              	.LVL105:
 1056 0000 488B8738 		movq	6200(%rdi), %rax
 1056      180000
 1057              		.loc 1 366 0
 1058 0007 0FB680A8 		movzbl	680(%rax), %eax
 1058      020000
 1059              		.loc 1 367 0
 1060 000e C3       		ret
 1061              		.cfi_endproc
 1062              	.LFE736:
 1064              		.section	.text.unlikely._ZN15Fl_File_Chooser8iconsizeEv
 1065              	.LCOLDE28:
 1066              		.section	.text._ZN15Fl_File_Chooser8iconsizeEv
 1067              	.LHOTE28:
 1068              		.section	.text.unlikely._ZN15Fl_File_Chooser5labelEPKc,"ax",@progbits
 1069              		.align 2
 1070              	.LCOLDB29:
 1071              		.section	.text._ZN15Fl_File_Chooser5labelEPKc,"ax",@progbits
 1072              	.LHOTB29:
 1073              		.align 2
 1074              		.p2align 4,,15
 1075              		.globl	_ZN15Fl_File_Chooser5labelEPKc
 1077              	_ZN15Fl_File_Chooser5labelEPKc:
 1078              	.LFB737:
 1079              		.loc 1 369 0
 1080              		.cfi_startproc
 1081              	.LVL106:
 1082              		.loc 1 370 0
 1083 0000 488BBF18 		movq	6168(%rdi), %rdi
 1083      180000
 1084              	.LVL107:
 1085 0007 E9000000 		jmp	_ZN9Fl_Window5labelEPKc
 1085      00
 1086              	.LVL108:
 1087              		.cfi_endproc
 1088              	.LFE737:
 1090              		.section	.text.unlikely._ZN15Fl_File_Chooser5labelEPKc
 1091              	.LCOLDE29:
 1092              		.section	.text._ZN15Fl_File_Chooser5labelEPKc
 1093              	.LHOTE29:
 1094              		.section	.text.unlikely._ZN15Fl_File_Chooser5labelEv,"ax",@progbits
 1095              		.align 2
 1096              	.LCOLDB30:
 1097              		.section	.text._ZN15Fl_File_Chooser5labelEv,"ax",@progbits
 1098              	.LHOTB30:
 1099              		.align 2
 1100              		.p2align 4,,15
 1101              		.globl	_ZN15Fl_File_Chooser5labelEv
 1103              	_ZN15Fl_File_Chooser5labelEv:
 1104              	.LFB738:
 1105              		.loc 1 373 0
 1106              		.cfi_startproc
 1107              	.LVL109:
 1108 0000 488B8718 		movq	6168(%rdi), %rax
 1108      180000
 1109              		.loc 1 374 0
 1110 0007 488B4030 		movq	48(%rax), %rax
 1111              		.loc 1 375 0
 1112 000b C3       		ret
 1113              		.cfi_endproc
 1114              	.LFE738:
 1116              		.section	.text.unlikely._ZN15Fl_File_Chooser5labelEv
 1117              	.LCOLDE30:
 1118              		.section	.text._ZN15Fl_File_Chooser5labelEv
 1119              	.LHOTE30:
 1120              		.section	.text.unlikely._ZN15Fl_File_Chooser8ok_labelEPKc,"ax",@progbits
 1121              		.align 2
 1122              	.LCOLDB31:
 1123              		.section	.text._ZN15Fl_File_Chooser8ok_labelEPKc,"ax",@progbits
 1124              	.LHOTB31:
 1125              		.align 2
 1126              		.p2align 4,,15
 1127              		.globl	_ZN15Fl_File_Chooser8ok_labelEPKc
 1129              	_ZN15Fl_File_Chooser8ok_labelEPKc:
 1130              	.LFB739:
 1131              		.loc 1 377 0
 1132              		.cfi_startproc
 1133              	.LVL110:
 1134 0000 53       		pushq	%rbx
 1135              		.cfi_def_cfa_offset 16
 1136              		.cfi_offset 3, -16
 1137 0001 4889FB   		movq	%rdi, %rbx
 1138 0004 4883EC10 		subq	$16, %rsp
 1139              		.cfi_def_cfa_offset 32
 1140              		.loc 1 377 0
 1141 0008 64488B04 		movq	%fs:40, %rax
 1141      25280000 
 1141      00
 1142 0011 48894424 		movq	%rax, 8(%rsp)
 1142      08
 1143 0016 31C0     		xorl	%eax, %eax
 1144              		.loc 1 378 0
 1145 0018 4885F6   		testq	%rsi, %rsi
 1146 001b 740C     		je	.L50
 1147              		.loc 1 378 0 is_stmt 0 discriminator 1
 1148 001d 488BBF60 		movq	6240(%rdi), %rdi
 1148      180000
 1149              	.LVL111:
 1150 0024 E8000000 		call	_ZN9Fl_Widget5labelEPKc
 1150      00
 1151              	.LVL112:
 1152              	.L50:
 1153              	.LBB435:
 1154              	.LBB436:
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
 522:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 523:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.
 524:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the active state.
 525:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the label 
 526:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 527:fltk-1.3.4-1/FL/Fl_Widget.H ****   void image(Fl_Image& img) {label_.image=&img;}
 528:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 529:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the image that is used as part of the widget label.  
 530:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inactive state.
 531:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return the current image for the deactivated widget
 532:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 533:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Image* deimage() {return label_.deimage;}
 534:fltk-1.3.4-1/FL/Fl_Widget.H ****   const Fl_Image* deimage() const {return label_.deimage;}
 535:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 536:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 537:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inactive state.
 538:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 539:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 540:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image* img) {label_.deimage=img;}
 541:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 542:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the image to use as part of the widget label.  
 543:fltk-1.3.4-1/FL/Fl_Widget.H ****       This image is used when drawing the widget in the inactive state.
 544:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] img the new image for the deactivated widget
 545:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 546:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deimage(Fl_Image& img) {label_.deimage=&img;}
 547:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 548:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current tooltip text.
 549:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a pointer to the tooltip text or NULL
 550:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see tooltip(const char*), copy_tooltip(const char*)
 551:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 552:fltk-1.3.4-1/FL/Fl_Widget.H ****   const char *tooltip() const {return tooltip_;}
 553:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 554:fltk-1.3.4-1/FL/Fl_Widget.H ****   void tooltip(const char *text);		// see Fl_Tooltip
 555:fltk-1.3.4-1/FL/Fl_Widget.H ****   void copy_tooltip(const char *text);		// see Fl_Tooltip
 556:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 557:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current callback function for the widget.
 558:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 559:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return current callback
 560:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 561:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_Callback_p callback() const {return callback_;}
 562:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 563:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 564:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 565:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 566:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 567:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 568:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb, void* p) {callback_=cb; user_data_=p;}
 569:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 570:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 571:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 572:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 573:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 574:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback* cb) {callback_=cb;}
 575:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 576:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 577:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 578:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 579:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 580:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback0*cb) {callback_=(Fl_Callback*)cb;}
 581:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 582:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current callback function for the widget.
 583:fltk-1.3.4-1/FL/Fl_Widget.H ****       Each widget has a single callback.
 584:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] cb new callback
 585:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] p user data
 586:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 587:fltk-1.3.4-1/FL/Fl_Widget.H ****   void callback(Fl_Callback1*cb, long p=0) {callback_=(Fl_Callback*)cb; user_data_=(void*)(fl_intpt
 588:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 589:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the user data for this widget.
 590:fltk-1.3.4-1/FL/Fl_Widget.H ****       Gets the current user data (void *) argument that is passed to the callback function.
 591:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return user data as a pointer
 592:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 593:fltk-1.3.4-1/FL/Fl_Widget.H ****   void* user_data() const {return user_data_;}
 594:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 595:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the user data for this widget.
 596:fltk-1.3.4-1/FL/Fl_Widget.H ****       Sets the new user data (void *) argument that is passed to the callback function.
 597:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v new user data
 598:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 599:fltk-1.3.4-1/FL/Fl_Widget.H ****   void user_data(void* v) {user_data_ = v;}
 600:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 601:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gets the current user data (long) argument that is passed to the callback function.
 602:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em intptr_t or similar
 603:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 604:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 605:fltk-1.3.4-1/FL/Fl_Widget.H ****   long argument() const {return (long)(fl_intptr_t)user_data_;}
 606:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 607:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the current user data (long) argument that is passed to the callback function.
 608:fltk-1.3.4-1/FL/Fl_Widget.H ****       \todo The user data value must be implemented using \em intptr_t or similar
 609:fltk-1.3.4-1/FL/Fl_Widget.H ****       to avoid 64-bit machine incompatibilities.
 610:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 611:fltk-1.3.4-1/FL/Fl_Widget.H ****   void argument(long v) {user_data_ = (void*)(fl_intptr_t)v;}
 612:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 613:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns the conditions under which the callback is called.
 614:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 615:fltk-1.3.4-1/FL/Fl_Widget.H ****       You can set the flags with when(uchar), the default value is
 616:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_WHEN_RELEASE.
 617:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 618:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return set of flags
 619:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see when(uchar)
 620:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 621:fltk-1.3.4-1/FL/Fl_Widget.H ****   Fl_When when() const {return (Fl_When)when_;}
 622:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 623:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the flags used to decide when a callback is called.
 624:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 625:fltk-1.3.4-1/FL/Fl_Widget.H ****      This controls when callbacks are done. The following values are useful,
 626:fltk-1.3.4-1/FL/Fl_Widget.H ****      the default value is FL_WHEN_RELEASE:
 627:fltk-1.3.4-1/FL/Fl_Widget.H ****      
 628:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li 0: The callback is not done, but changed() is turned on.
 629:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_CHANGED: The callback is done each time the text is
 630:fltk-1.3.4-1/FL/Fl_Widget.H ****          changed by the user.
 631:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_RELEASE: The callback will be done when this widget loses 
 632:fltk-1.3.4-1/FL/Fl_Widget.H ****          the focus, including when the window is unmapped. This is a useful 
 633:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 value for text fields in a panel where doing the callback on every
 634:fltk-1.3.4-1/FL/Fl_Widget.H ****   	 change is wasteful. However the callback will also happen if the 
 635:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 mouse is moved out of the window, which means it should not do 
 636:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 anything visible (like pop up an error message).
 637:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 You might do better setting this to zero, and scanning all the
 638:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 items for changed() when the OK button on a panel is pressed.
 639:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY: If the user types the Enter key, the entire 
 640:fltk-1.3.4-1/FL/Fl_Widget.H ****          text is selected, and the callback is done if the text has changed. 
 641:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 Normally the Enter key will navigate to the next field (or insert 
 642:fltk-1.3.4-1/FL/Fl_Widget.H **** 	 a newline for a Fl_Multiline_Input) - this changes the behavior.
 643:fltk-1.3.4-1/FL/Fl_Widget.H ****      \li FL_WHEN_ENTER_KEY|FL_WHEN_NOT_CHANGED: The Enter key will do the
 644:fltk-1.3.4-1/FL/Fl_Widget.H ****          callback even if the text has not changed. Useful for command fields.
 645:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget::when() is a set of bitflags used by subclasses of 
 646:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl_Widget to decide when to do the callback.
 647:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 648:fltk-1.3.4-1/FL/Fl_Widget.H ****       If the value is zero then the callback is never done. Other values 
 649:fltk-1.3.4-1/FL/Fl_Widget.H ****       are described  in the individual widgets. This field is in the base 
 650:fltk-1.3.4-1/FL/Fl_Widget.H ****       class so that you can scan a panel and do_callback() on all the ones
 651:fltk-1.3.4-1/FL/Fl_Widget.H ****       that don't do their own callbacks in response to an "OK" button.
 652:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] i set of flags
 653:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 654:fltk-1.3.4-1/FL/Fl_Widget.H ****   void when(uchar i) {when_ = i;}
 655:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 656:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget is visible.
 657:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is not drawn and hence invisible.
 658:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible_r()
 659:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 660:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int visible() const {return !(flags_&INVISIBLE);}
 661:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 662:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether a widget and all its parents are visible.
 663:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget or any of its parents are invisible.
 664:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), hide(), visible()
 665:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 666:fltk-1.3.4-1/FL/Fl_Widget.H ****   int visible_r() const;
 667:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 668:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget visible.
 669:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 670:fltk-1.3.4-1/FL/Fl_Widget.H ****       An invisible widget never gets redrawn and does not get keyboard
 671:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse events, but can receive a few other events like FL_SHOW.
 672:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 673:fltk-1.3.4-1/FL/Fl_Widget.H ****       The visible() method returns true if the widget is set to be
 674:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible. The visible_r() method returns true if the widget and
 675:fltk-1.3.4-1/FL/Fl_Widget.H ****       all of its parents are visible. A widget is only visible if
 676:fltk-1.3.4-1/FL/Fl_Widget.H ****       visible() is true on it <I>and all of its parents</I>.
 677:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 678:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing it will send FL_SHOW or FL_HIDE events to the widget.
 679:fltk-1.3.4-1/FL/Fl_Widget.H ****       <I>Do not change it if the parent is not visible, as this
 680:fltk-1.3.4-1/FL/Fl_Widget.H ****       will send false FL_SHOW or FL_HIDE events to the widget</I>.
 681:fltk-1.3.4-1/FL/Fl_Widget.H ****       redraw() is called if necessary on this or the parent.
 682:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 683:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see hide(), visible(), visible_r()
 684:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 685:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void show();
 686:fltk-1.3.4-1/FL/Fl_Widget.H ****   
 687:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes a widget invisible.
 688:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see show(), visible(), visible_r()
 689:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 690:fltk-1.3.4-1/FL/Fl_Widget.H ****   virtual void hide();
 691:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 692:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Makes the widget visible. 
 693:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent widget to see a change in the 
 694:fltk-1.3.4-1/FL/Fl_Widget.H ****       window. Normally you want to use the show() method instead.
 695:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 696:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible() {flags_ &= ~INVISIBLE;}
 697:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 698:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Hides the widget. 
 699:fltk-1.3.4-1/FL/Fl_Widget.H ****       You must still redraw the parent to see a change in the window. 
 700:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally you want to use the hide() method instead.
 701:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 702:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible() {flags_ |= INVISIBLE;}
 703:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 704:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget is active.
 705:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is inactive
 706:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active_r(), activate(), deactivate()
 707:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 708:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int active() const {return !(flags_&INACTIVE);}
 709:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 710:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns whether the widget and all of its parents are active. 
 711:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this or any of the parent widgets are inactive
 712:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), activate(), deactivate()
 713:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 714:fltk-1.3.4-1/FL/Fl_Widget.H ****   int active_r() const;
 715:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 716:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Activates the widget.
 717:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_ACTIVATE to the widget if 
 718:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 719:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see active(), active_r(), deactivate()
 720:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 721:fltk-1.3.4-1/FL/Fl_Widget.H ****   void activate();
 722:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 723:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Deactivates the widget.
 724:fltk-1.3.4-1/FL/Fl_Widget.H ****       Inactive widgets will be drawn "grayed out", e.g. with less contrast 
 725:fltk-1.3.4-1/FL/Fl_Widget.H ****       than the active widget. Inactive widgets will not receive any keyboard 
 726:fltk-1.3.4-1/FL/Fl_Widget.H ****       or mouse button events. Other events (including FL_ENTER, FL_MOVE, 
 727:fltk-1.3.4-1/FL/Fl_Widget.H ****       FL_LEAVE, FL_SHORTCUT, and others) will still be sent. A widget is 
 728:fltk-1.3.4-1/FL/Fl_Widget.H ****       only active if active() is true on it <I>and all of its parents</I>.  
 729:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 730:fltk-1.3.4-1/FL/Fl_Widget.H ****       Changing this value will send FL_DEACTIVATE to the widget if 
 731:fltk-1.3.4-1/FL/Fl_Widget.H ****       active_r() is true.
 732:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 733:fltk-1.3.4-1/FL/Fl_Widget.H ****       Currently you cannot deactivate Fl_Window widgets.
 734:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 735:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate(), active(), active_r()
 736:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 737:fltk-1.3.4-1/FL/Fl_Widget.H ****   void deactivate();
 738:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 739:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if a widget is used for output only.
 740:fltk-1.3.4-1/FL/Fl_Widget.H ****       output() means the same as !active() except it does not change how the 
 741:fltk-1.3.4-1/FL/Fl_Widget.H ****       widget is drawn. The widget will not receive any events. This is useful 
 742:fltk-1.3.4-1/FL/Fl_Widget.H ****       for making scrollbars or buttons that work as displays rather than input 
 743:fltk-1.3.4-1/FL/Fl_Widget.H ****       devices.
 744:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget is used for input and output
 745:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), clear_output() 
 746:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 747:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int output() const {return (flags_&OUTPUT);}
 748:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 749:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to output only.
 750:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see output(), clear_output() 
 751:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 752:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_output() {flags_ |= OUTPUT;}
 753:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 754:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets a widget to accept input.
 755:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_output(), output() 
 756:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 757:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_output() {flags_ &= ~OUTPUT;}
 758:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 759:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns if the widget is able to take events.
 760:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is the same as (active() && !output() && visible())
 761:fltk-1.3.4-1/FL/Fl_Widget.H ****       but is faster.
 762:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if the widget takes no events
 763:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 764:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int takesevents() const {return !(flags_&(INACTIVE|INVISIBLE|OUTPUT));}
 765:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 766:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** 
 767:fltk-1.3.4-1/FL/Fl_Widget.H ****       Checks if the widget value changed since the last callback.
 768:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 769:fltk-1.3.4-1/FL/Fl_Widget.H ****       "Changed" is a flag that is turned on when the user changes the value 
 770:fltk-1.3.4-1/FL/Fl_Widget.H ****       stored in the widget. This is only used by subclasses of Fl_Widget that 
 771:fltk-1.3.4-1/FL/Fl_Widget.H ****       store values, but is in the base class so it is easier to scan all the 
 772:fltk-1.3.4-1/FL/Fl_Widget.H ****       widgets in a panel and do_callback() on the changed ones in response 
 773:fltk-1.3.4-1/FL/Fl_Widget.H ****       to an "OK" button.
 774:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 775:fltk-1.3.4-1/FL/Fl_Widget.H ****       Most widgets turn this flag off when they do the callback, and when 
 776:fltk-1.3.4-1/FL/Fl_Widget.H ****       the program sets the stored value.
 777:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 778:fltk-1.3.4-1/FL/Fl_Widget.H ****      \retval 0 if the value did not change
 779:fltk-1.3.4-1/FL/Fl_Widget.H ****      \see set_changed(), clear_changed()
 780:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 781:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int changed() const {return flags_&CHANGED;}
 782:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 783:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as changed.
 784:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), clear_changed()
 785:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 786:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_changed() {flags_ |= CHANGED;}
 787:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 788:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the value of the widget as unchanged.
 789:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see changed(), set_changed()
 790:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 791:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_changed() {flags_ &= ~CHANGED;}
 792:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 793:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as inactive without sending events or changing focus.
 794:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases you want deactivate().
 795:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see deactivate()
 796:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 797:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_active() {flags_ |= INACTIVE;}
 798:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 799:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Marks the widget as active without sending events or changing focus.
 800:fltk-1.3.4-1/FL/Fl_Widget.H ****       This is mainly for specialized use, for normal cases you want activate().
 801:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see activate()
 802:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 803:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_active() {flags_ &= ~INACTIVE;}
 804:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 805:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Gives the widget the keyboard focus.
 806:fltk-1.3.4-1/FL/Fl_Widget.H ****       Tries to make this widget be the Fl::focus() widget, by first sending 
 807:fltk-1.3.4-1/FL/Fl_Widget.H ****       it an FL_FOCUS event, and if it returns non-zero, setting 
 808:fltk-1.3.4-1/FL/Fl_Widget.H ****       Fl::focus() to this widget. You should use this method to 
 809:fltk-1.3.4-1/FL/Fl_Widget.H ****       assign the focus to a widget.  
 810:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return true if the widget accepted the focus.
 811:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 812:fltk-1.3.4-1/FL/Fl_Widget.H ****   int take_focus();
 813:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 814:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Enables keyboard focus navigation with this widget. 
 815:fltk-1.3.4-1/FL/Fl_Widget.H ****       Note, however, that this will not necessarily mean that the widget
 816:fltk-1.3.4-1/FL/Fl_Widget.H ****       will accept focus, but for widgets that can accept focus, this method
 817:fltk-1.3.4-1/FL/Fl_Widget.H ****       enables it if it has been disabled.
 818:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(), clear_visible_focus(), visible_focus(int) 
 819:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 820:fltk-1.3.4-1/FL/Fl_Widget.H ****   void set_visible_focus() { flags_ |= VISIBLE_FOCUS; }
 821:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 822:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Disables keyboard focus navigation with this widget. 
 823:fltk-1.3.4-1/FL/Fl_Widget.H ****       Normally, all widgets participate in keyboard focus navigation.
 824:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), visible_focus(), visible_focus(int) 
 825:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 826:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_visible_focus() { flags_ &= ~VISIBLE_FOCUS; }
 827:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 828:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Modifies keyboard focus navigation. 
 829:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] v set or clear visible focus
 830:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see set_visible_focus(), clear_visible_focus(), visible_focus() 
 831:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 832:fltk-1.3.4-1/FL/Fl_Widget.H ****   void visible_focus(int v) { if (v) set_visible_focus(); else clear_visible_focus(); }
 833:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 834:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks whether this widget has a visible focus.
 835:fltk-1.3.4-1/FL/Fl_Widget.H ****       \retval 0 if this widget has no visible focus.
 836:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see visible_focus(int), set_visible_focus(), clear_visible_focus()
 837:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 838:fltk-1.3.4-1/FL/Fl_Widget.H ****   unsigned int  visible_focus() { return flags_ & VISIBLE_FOCUS; }
 839:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 840:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** The default callback for all widgets that don't set a callback.
 841:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 842:fltk-1.3.4-1/FL/Fl_Widget.H ****     This callback function puts a pointer to the widget on the queue
 843:fltk-1.3.4-1/FL/Fl_Widget.H ****     returned by Fl::readqueue().
 844:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 845:fltk-1.3.4-1/FL/Fl_Widget.H ****     Relying on the default callback and reading the callback queue with
 846:fltk-1.3.4-1/FL/Fl_Widget.H ****     Fl::readqueue() is not recommended. If you need a callback, you should
 847:fltk-1.3.4-1/FL/Fl_Widget.H ****     set one with Fl_Widget::callback(Fl_Callback *cb, void *data)
 848:fltk-1.3.4-1/FL/Fl_Widget.H ****     or one of its variants.
 849:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 850:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] cb the widget given to the callback
 851:fltk-1.3.4-1/FL/Fl_Widget.H ****     \param[in] d user data associated with that callback
 852:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 853:fltk-1.3.4-1/FL/Fl_Widget.H ****     \see callback(), do_callback(), Fl::readqueue()
 854:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 855:fltk-1.3.4-1/FL/Fl_Widget.H ****   static void default_callback(Fl_Widget *cb, void *d);
 856:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 857:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 858:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with default arguments.
 859:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 860:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 861:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback() {do_callback(this,user_data_);}
 862:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 863:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Calls the widget callback.
 864:fltk-1.3.4-1/FL/Fl_Widget.H ****       Causes a widget to invoke its callback function with arbitrary arguments.
 865:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] o call the callback with \p o as the widget argument
 866:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] arg call the callback with \p arg as the user data argument
 867:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see callback()
 868:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 869:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,long arg) {do_callback(o,(void*)(fl_intptr_t)arg);}
 870:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 871:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Causes a widget to invoke its callback function with arbitrary arguments.
 872:fltk-1.3.4-1/FL/Fl_Widget.H ****   // Documentation and implementation in Fl_Widget.cxx
 873:fltk-1.3.4-1/FL/Fl_Widget.H ****   void do_callback(Fl_Widget* o,void* arg=0);
 874:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 875:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 876:fltk-1.3.4-1/FL/Fl_Widget.H ****   int test_shortcut();
 877:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 878:fltk-1.3.4-1/FL/Fl_Widget.H ****   static unsigned int label_shortcut(const char *t);
 879:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 880:fltk-1.3.4-1/FL/Fl_Widget.H ****   static int test_shortcut(const char*, const bool require_alt = false);
 881:fltk-1.3.4-1/FL/Fl_Widget.H ****   /* Internal use only. */
 882:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _set_fullscreen() {flags_ |= FULLSCREEN;}
 883:fltk-1.3.4-1/FL/Fl_Widget.H ****   void _clear_fullscreen() {flags_ &= ~FULLSCREEN;}
 884:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 885:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if w is a child of this widget.
 886:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] w potential child widget
 887:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return Returns 1 if \p w is a child of this widget, or is
 888:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to this widget. Returns 0 if \p w is NULL.
 889:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 890:fltk-1.3.4-1/FL/Fl_Widget.H ****   int contains(const Fl_Widget *w) const ;
 891:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 892:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Checks if this widget is a child of \p wgt.
 893:fltk-1.3.4-1/FL/Fl_Widget.H ****       Returns 1 if this widget is a child of \p wgt, or is
 894:fltk-1.3.4-1/FL/Fl_Widget.H ****       equal to \p wgt. Returns 0 if \p wgt is NULL.
 895:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] wgt the possible parent widget.
 896:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see contains()
 897:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 898:fltk-1.3.4-1/FL/Fl_Widget.H ****   int inside(const Fl_Widget* wgt) const {return wgt ? wgt->contains(this) : 0;}
 899:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 900:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the widget.
 901:fltk-1.3.4-1/FL/Fl_Widget.H ****       Marks the widget as needing its draw() routine called.
 902:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 903:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw();
 904:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 905:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Schedules the drawing of the label.
 906:fltk-1.3.4-1/FL/Fl_Widget.H ****      Marks the widget or the parent as needing a redraw for the label area 
 907:fltk-1.3.4-1/FL/Fl_Widget.H ****      of a widget.
 908:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 909:fltk-1.3.4-1/FL/Fl_Widget.H ****   void redraw_label();
 910:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 911:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Returns non-zero if draw() needs to be called. 
 912:fltk-1.3.4-1/FL/Fl_Widget.H ****       The damage value is actually a bit field that the widget 
 913:fltk-1.3.4-1/FL/Fl_Widget.H ****       subclass can use to figure out what parts to draw.
 914:fltk-1.3.4-1/FL/Fl_Widget.H ****       \return a bitmap of flags describing the kind of damage to the widget
 915:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), clear_damage(uchar)
 916:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 917:fltk-1.3.4-1/FL/Fl_Widget.H ****   uchar damage() const {return damage_;}
 918:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 919:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears or sets the damage flags.
 920:fltk-1.3.4-1/FL/Fl_Widget.H ****       Damage flags are cleared when parts of the widget drawing is repaired.
 921:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 922:fltk-1.3.4-1/FL/Fl_Widget.H ****       The optional argument \p c specifies the bits that <b>are set</b>
 923:fltk-1.3.4-1/FL/Fl_Widget.H ****       after the call (default: 0) and \b not the bits that are cleared!
 924:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 925:fltk-1.3.4-1/FL/Fl_Widget.H ****       \note Therefore it is possible to set damage bits with this method, but
 926:fltk-1.3.4-1/FL/Fl_Widget.H ****       this should be avoided. Use damage(uchar) instead.
 927:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 928:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c new bitmask of damage flags (default: 0)
 929:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(uchar), damage()
 930:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 931:fltk-1.3.4-1/FL/Fl_Widget.H ****   void clear_damage(uchar c = 0) {damage_ = c;}
 932:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 933:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for the widget.
 934:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the next redraw.
 935:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 936:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 937:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 938:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c);
 939:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 940:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets the damage bits for an area inside the widget.
 941:fltk-1.3.4-1/FL/Fl_Widget.H ****       Setting damage bits will schedule the widget for the next redraw.
 942:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] c bitmask of flags to set
 943:fltk-1.3.4-1/FL/Fl_Widget.H ****       \param[in] x, y, w, h size of damaged area
 944:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see damage(), clear_damage(uchar)
 945:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 946:fltk-1.3.4-1/FL/Fl_Widget.H ****   void damage(uchar c, int x, int y, int w, int h);
 947:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 948:fltk-1.3.4-1/FL/Fl_Widget.H ****   void draw_label(int, int, int, int, Fl_Align) const;
 949:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 950:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Sets width ww and height hh accordingly with the label size.
 951:fltk-1.3.4-1/FL/Fl_Widget.H ****       Labels with images will return w() and h() of the image.
 952:fltk-1.3.4-1/FL/Fl_Widget.H ****       
 953:fltk-1.3.4-1/FL/Fl_Widget.H ****       This calls fl_measure() internally. For more information about
 954:fltk-1.3.4-1/FL/Fl_Widget.H ****       the arguments \p ww and \p hh and word wrapping
 955:fltk-1.3.4-1/FL/Fl_Widget.H ****       \see fl_measure(const char*, int&, int&, int)
 956:fltk-1.3.4-1/FL/Fl_Widget.H ****    */
 957:fltk-1.3.4-1/FL/Fl_Widget.H ****   void measure_label(int& ww, int& hh) const {label_.measure(ww, hh);}
 1155              		.loc 3 957 0 is_stmt 1
 1156 0029 488B8360 		movq	6240(%rbx), %rax
 1156      180000
 1157 0030 488D5424 		leaq	4(%rsp), %rdx
 1157      04
 1158 0035 4889E6   		movq	%rsp, %rsi
 1159              	.LBE436:
 1160              	.LBE435:
 1161              		.loc 1 379 0
 1162 0038 C7042400 		movl	$0, (%rsp)
 1162      000000
 1163 003f C7442404 		movl	$0, 4(%rsp)
 1163      00000000 
 1164              	.LVL113:
 1165              	.LBB438:
 1166              	.LBB437:
 1167              		.loc 3 957 0
 1168 0047 488D7830 		leaq	48(%rax), %rdi
 1169 004b E8000000 		call	_ZNK8Fl_Label7measureERiS0_
 1169      00
 1170              	.LVL114:
 1171              	.LBE437:
 1172              	.LBE438:
 1173              		.loc 1 381 0
 1174 0050 488BB368 		movq	6248(%rbx), %rsi
 1174      180000
 1175              	.LVL115:
 1176 0057 8B0424   		movl	(%rsp), %eax
 1177              		.loc 1 382 0
 1178 005a 41B81900 		movl	$25, %r8d
 1178      0000
 1179              		.loc 1 381 0
 1180 0060 488BBB60 		movq	6240(%rbx), %rdi
 1180      180000
 1181              		.loc 1 382 0
 1182 0067 8B5624   		movl	36(%rsi), %edx
 1183 006a 8B7620   		movl	32(%rsi), %esi
 1184              	.LVL116:
 1185 006d 8D4828   		leal	40(%rax), %ecx
 1186 0070 83EE32   		subl	$50, %esi
 1187 0073 29C6     		subl	%eax, %esi
 1188 0075 488B07   		movq	(%rdi), %rax
 1189 0078 FF5020   		call	*32(%rax)
 1190              	.LVL117:
 1191 007b 488B8360 		movq	6240(%rbx), %rax
 1191      180000
 1192              		.loc 1 383 0
 1193 0082 488B7808 		movq	8(%rax), %rdi
 1194 0086 E8000000 		call	_ZN8Fl_Group10init_sizesEv
 1194      00
 1195              	.LVL118:
 1196              		.loc 1 384 0
 1197 008b 488B4424 		movq	8(%rsp), %rax
 1197      08
 1198 0090 64483304 		xorq	%fs:40, %rax
 1198      25280000 
 1198      00
 1199 0099 7506     		jne	.L56
 1200 009b 4883C410 		addq	$16, %rsp
 1201              		.cfi_remember_state
 1202              		.cfi_def_cfa_offset 16
 1203 009f 5B       		popq	%rbx
 1204              		.cfi_def_cfa_offset 8
 1205              	.LVL119:
 1206 00a0 C3       		ret
 1207              	.LVL120:
 1208              	.L56:
 1209              		.cfi_restore_state
 1210 00a1 E8000000 		call	__stack_chk_fail
 1210      00
 1211              	.LVL121:
 1212              		.cfi_endproc
 1213              	.LFE739:
 1215              		.section	.text.unlikely._ZN15Fl_File_Chooser8ok_labelEPKc
 1216              	.LCOLDE31:
 1217              		.section	.text._ZN15Fl_File_Chooser8ok_labelEPKc
 1218              	.LHOTE31:
 1219              		.section	.text.unlikely._ZN15Fl_File_Chooser8ok_labelEv,"ax",@progbits
 1220              		.align 2
 1221              	.LCOLDB32:
 1222              		.section	.text._ZN15Fl_File_Chooser8ok_labelEv,"ax",@progbits
 1223              	.LHOTB32:
 1224              		.align 2
 1225              		.p2align 4,,15
 1226              		.globl	_ZN15Fl_File_Chooser8ok_labelEv
 1228              	_ZN15Fl_File_Chooser8ok_labelEv:
 1229              	.LFB740:
 1230              		.loc 1 386 0
 1231              		.cfi_startproc
 1232              	.LVL122:
 1233 0000 488B8760 		movq	6240(%rdi), %rax
 1233      180000
 1234              		.loc 1 387 0
 1235 0007 488B4030 		movq	48(%rax), %rax
 1236              		.loc 1 388 0
 1237 000b C3       		ret
 1238              		.cfi_endproc
 1239              	.LFE740:
 1241              		.section	.text.unlikely._ZN15Fl_File_Chooser8ok_labelEv
 1242              	.LCOLDE32:
 1243              		.section	.text._ZN15Fl_File_Chooser8ok_labelEv
 1244              	.LHOTE32:
 1245              		.section	.text.unlikely._ZN15Fl_File_Chooser5shownEv,"ax",@progbits
 1246              		.align 2
 1247              	.LCOLDB33:
 1248              		.section	.text._ZN15Fl_File_Chooser5shownEv,"ax",@progbits
 1249              	.LHOTB33:
 1250              		.align 2
 1251              		.p2align 4,,15
 1252              		.globl	_ZN15Fl_File_Chooser5shownEv
 1254              	_ZN15Fl_File_Chooser5shownEv:
 1255              	.LFB741:
 1256              		.loc 1 390 0
 1257              		.cfi_startproc
 1258              	.LVL123:
 1259 0000 488B8718 		movq	6168(%rdi), %rax
 1259      180000
 1260              		.loc 1 391 0
 1261 0007 4883B8A0 		cmpq	$0, 160(%rax)
 1261      00000000 
 1262 000f 0F95C0   		setne	%al
 1263 0012 0FB6C0   		movzbl	%al, %eax
 1264              		.loc 1 392 0
 1265 0015 C3       		ret
 1266              		.cfi_endproc
 1267              	.LFE741:
 1269              		.section	.text.unlikely._ZN15Fl_File_Chooser5shownEv
 1270              	.LCOLDE33:
 1271              		.section	.text._ZN15Fl_File_Chooser5shownEv
 1272              	.LHOTE33:
 1273              		.section	.text.unlikely._ZN15Fl_File_Chooser9textcolorEj,"ax",@progbits
 1274              		.align 2
 1275              	.LCOLDB34:
 1276              		.section	.text._ZN15Fl_File_Chooser9textcolorEj,"ax",@progbits
 1277              	.LHOTB34:
 1278              		.align 2
 1279              		.p2align 4,,15
 1280              		.globl	_ZN15Fl_File_Chooser9textcolorEj
 1282              	_ZN15Fl_File_Chooser9textcolorEj:
 1283              	.LFB742:
 1284              		.loc 1 394 0
 1285              		.cfi_startproc
 1286              	.LVL124:
 1287              		.loc 1 395 0
 1288 0000 488B8738 		movq	6200(%rdi), %rax
 1288      180000
 1289              	.LVL125:
 1290              	.LBB439:
 1291              	.LBB440:
 1292              		.file 6 "fltk-1.3.4-1/FL/Fl_Browser_.H"
   1:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
   2:fltk-1.3.4-1/FL/Fl_Browser_.H **** // "$Id: Fl_Browser_.H 11464 2016-03-29 11:34:10Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
   4:fltk-1.3.4-1/FL/Fl_Browser_.H **** // Common browser header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
   6:fltk-1.3.4-1/FL/Fl_Browser_.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
   8:fltk-1.3.4-1/FL/Fl_Browser_.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Browser_.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Browser_.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
  12:fltk-1.3.4-1/FL/Fl_Browser_.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
  14:fltk-1.3.4-1/FL/Fl_Browser_.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
  16:fltk-1.3.4-1/FL/Fl_Browser_.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Browser_.H **** //
  18:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  19:fltk-1.3.4-1/FL/Fl_Browser_.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Browser_.H ****    Fl_Browser_ widget . */
  21:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  22:fltk-1.3.4-1/FL/Fl_Browser_.H **** // Yes, I know this should be a template...
  23:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  24:fltk-1.3.4-1/FL/Fl_Browser_.H **** #ifndef Fl_Browser__H
  25:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define Fl_Browser__H
  26:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  27:fltk-1.3.4-1/FL/Fl_Browser_.H **** #ifndef Fl_Group_H
  28:fltk-1.3.4-1/FL/Fl_Browser_.H **** #include "Fl_Group.H"
  29:fltk-1.3.4-1/FL/Fl_Browser_.H **** #endif
  30:fltk-1.3.4-1/FL/Fl_Browser_.H **** #include "Fl_Scrollbar.H"
  31:fltk-1.3.4-1/FL/Fl_Browser_.H **** #include <FL/Fl.H>		// Fl::scrollbar_size()
  32:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  33:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define FL_NORMAL_BROWSER	0	/**< type() of Fl_Browser */
  34:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define FL_SELECT_BROWSER	1	/**< type() of FL_Select_Browser */
  35:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define FL_HOLD_BROWSER		2	/**< type() of Fl_Hold_Browser */
  36:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define FL_MULTI_BROWSER	3	/**< type() of Fl_Multi_Browser */
  37:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  38:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define FL_SORT_ASCENDING	0	/**< sort browser items in ascending alphabetic order. */
  39:fltk-1.3.4-1/FL/Fl_Browser_.H **** #define FL_SORT_DESCENDING	1	/**< sort in descending order */
  40:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  41:fltk-1.3.4-1/FL/Fl_Browser_.H **** /**
  42:fltk-1.3.4-1/FL/Fl_Browser_.H ****   This is the base class for browsers.  To be useful it must be
  43:fltk-1.3.4-1/FL/Fl_Browser_.H ****   subclassed and several virtual functions defined.  The Forms-compatible
  44:fltk-1.3.4-1/FL/Fl_Browser_.H ****   browser and the file chooser's browser are subclassed off of this.
  45:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  46:fltk-1.3.4-1/FL/Fl_Browser_.H ****   This has been designed so that the subclass has complete control
  47:fltk-1.3.4-1/FL/Fl_Browser_.H ****   over the storage of the data, although because next() and 
  48:fltk-1.3.4-1/FL/Fl_Browser_.H ****   prev() functions are used to index, it works best as a linked list
  49:fltk-1.3.4-1/FL/Fl_Browser_.H ****   or as a large block of characters in which the line breaks must be
  50:fltk-1.3.4-1/FL/Fl_Browser_.H ****   searched for.
  51:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  52:fltk-1.3.4-1/FL/Fl_Browser_.H ****   A great deal of work has been done so that the "height" of a data
  53:fltk-1.3.4-1/FL/Fl_Browser_.H ****   object does not need to be determined until it is drawn.  This is
  54:fltk-1.3.4-1/FL/Fl_Browser_.H ****   useful if actually figuring out the size of an object requires
  55:fltk-1.3.4-1/FL/Fl_Browser_.H ****   accessing image data or doing stat() on a file or doing some
  56:fltk-1.3.4-1/FL/Fl_Browser_.H ****   other slow operation.
  57:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  58:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Keyboard navigation of browser items
  59:fltk-1.3.4-1/FL/Fl_Browser_.H ****   ------------------------------------
  60:fltk-1.3.4-1/FL/Fl_Browser_.H ****   The keyboard navigation of browser items is only possible if
  61:fltk-1.3.4-1/FL/Fl_Browser_.H ****   visible_focus() is enabled. If disabled, the widget rejects keyboard focus;
  62:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Tab and Shift-Tab focus navigation will skip the widget.
  63:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  64:fltk-1.3.4-1/FL/Fl_Browser_.H ****   In 'Select' and 'Normal' mode, the widget rejects keyboard focus;
  65:fltk-1.3.4-1/FL/Fl_Browser_.H ****   no navigation keys are supported (other than scrollbar positioning).
  66:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  67:fltk-1.3.4-1/FL/Fl_Browser_.H ****   In 'Hold' mode, the widget accepts keyboard focus, and Up/Down arrow
  68:fltk-1.3.4-1/FL/Fl_Browser_.H ****   keys can navigate the selected item.
  69:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  70:fltk-1.3.4-1/FL/Fl_Browser_.H ****   In 'Multi' mode, the widget accepts keyboard focus, and Up/Down arrow
  71:fltk-1.3.4-1/FL/Fl_Browser_.H ****   keys navigate the focus box; Space toggles the current item's selection,
  72:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Enter selects only the current item (deselects all others).  If Shift
  73:fltk-1.3.4-1/FL/Fl_Browser_.H ****   (or Ctrl) is combined with Up/Down arrow keys, the current item's
  74:fltk-1.3.4-1/FL/Fl_Browser_.H ****   selection state is extended to the next item. In this way one can
  75:fltk-1.3.4-1/FL/Fl_Browser_.H ****   extend a selection or de-selection.
  76:fltk-1.3.4-1/FL/Fl_Browser_.H **** */
  77:fltk-1.3.4-1/FL/Fl_Browser_.H **** class FL_EXPORT Fl_Browser_ : public Fl_Group {
  78:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position_;	// where user wants it scrolled to
  79:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int real_position_;	// the current vertical scrolling position
  80:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int hposition_;	// where user wants it panned to
  81:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int real_hposition_;	// the current horizontal scrolling position
  82:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int offset_;		// how far down top_ item the real_position is
  83:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int max_width;	// widest object seen so far
  84:fltk-1.3.4-1/FL/Fl_Browser_.H ****   uchar has_scrollbar_;	// which scrollbars are enabled
  85:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Fl_Font textfont_;
  86:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Fl_Fontsize textsize_;
  87:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Fl_Color textcolor_;
  88:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void* top_;		// which item scrolling position is in
  89:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void* selection_;	// which is selected (except for FL_MULTI_BROWSER)
  90:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void *redraw1,*redraw2; // minimal update pointers
  91:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void* max_width_item;	// which item has max_width_
  92:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int scrollbar_size_;	// size of scrollbar trough
  93:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  94:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void update_top();
  95:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  96:fltk-1.3.4-1/FL/Fl_Browser_.H **** protected:
  97:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
  98:fltk-1.3.4-1/FL/Fl_Browser_.H ****   // All of the following must be supplied by the subclass:
  99:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 100:fltk-1.3.4-1/FL/Fl_Browser_.H ****     This method must be provided by the subclass 
 101:fltk-1.3.4-1/FL/Fl_Browser_.H ****     to return the first item in the list.
 102:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \see item_first(), item_next(), item_last(), item_prev()
 103:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 104:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual void *item_first() const = 0;
 105:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 106:fltk-1.3.4-1/FL/Fl_Browser_.H ****     This method must be provided by the subclass
 107:fltk-1.3.4-1/FL/Fl_Browser_.H ****     to return the item in the list after \p item.
 108:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \see item_first(), item_next(), item_last(), item_prev()
 109:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 110:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual void *item_next(void *item) const = 0;
 111:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 112:fltk-1.3.4-1/FL/Fl_Browser_.H ****     This method must be provided by the subclass
 113:fltk-1.3.4-1/FL/Fl_Browser_.H ****     to return the item in the list before \p item.
 114:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \see item_first(), item_next(), item_last(), item_prev()
 115:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 116:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual void *item_prev(void *item) const = 0;
 117:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 118:fltk-1.3.4-1/FL/Fl_Browser_.H ****     This method must be provided by the subclass
 119:fltk-1.3.4-1/FL/Fl_Browser_.H ****     to return the last item in the list.
 120:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \see item_first(), item_next(), item_last(), item_prev()
 121:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 122:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual void *item_last() const { return 0L; }
 123:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /** 
 124:fltk-1.3.4-1/FL/Fl_Browser_.H ****     This method must be provided by the subclass to return 
 125:fltk-1.3.4-1/FL/Fl_Browser_.H ****     the height of \p item in pixels.
 126:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Allow for two additional pixels for the list selection box.
 127:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \param[in] item The item whose height is returned.
 128:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \returns The height of the specified \p item in pixels.
 129:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \see item_height(), item_width(), item_quick_height()
 130:fltk-1.3.4-1/FL/Fl_Browser_.H ****   */
 131:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual int item_height(void *item) const = 0;
 132:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 133:fltk-1.3.4-1/FL/Fl_Browser_.H ****     This method must be provided by the subclass to return the width of the
 134:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \p item in pixels.  Allow for two additional pixels for the list
 135:fltk-1.3.4-1/FL/Fl_Browser_.H ****     selection box.
 136:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \param[in] item The item whose width is returned.
 137:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \returns The width of the item in pixels.
 138:fltk-1.3.4-1/FL/Fl_Browser_.H ****   */
 139:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual int item_width(void *item) const = 0;
 140:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual int item_quick_height(void *item) const ;
 141:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 142:fltk-1.3.4-1/FL/Fl_Browser_.H ****     This method must be provided by the subclass to draw the \p item
 143:fltk-1.3.4-1/FL/Fl_Browser_.H ****     in the area indicated by \p X, \p Y, \p W, \p H.
 144:fltk-1.3.4-1/FL/Fl_Browser_.H ****   */
 145:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual void item_draw(void *item,int X,int Y,int W,int H) const = 0;
 146:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 147:fltk-1.3.4-1/FL/Fl_Browser_.H ****     This optional method returns a string (label) that may be used for sorting. 
 148:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \param[in] item The item whose label text is returned.
 149:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \returns The item's text label. (Can be NULL if blank)
 150:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 151:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual const char *item_text(void *item) const { (void)item; return 0L; }
 152:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 153:fltk-1.3.4-1/FL/Fl_Browser_.H ****     This optional method should be provided by the subclass 
 154:fltk-1.3.4-1/FL/Fl_Browser_.H ****     to efficiently swap browser items \p a and \p b, such as for sorting.
 155:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \param[in] a,b The two items to be swapped.
 156:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 157:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual void item_swap(void *a,void *b) { (void)a; (void)b; }
 158:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 159:fltk-1.3.4-1/FL/Fl_Browser_.H ****     This method must be provided by the subclass 
 160:fltk-1.3.4-1/FL/Fl_Browser_.H ****     to return the item for the specified \p index. 
 161:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \param[in] index The \p index of the item to be returned
 162:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \returns The item at the specified \p index.
 163:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 164:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual void *item_at(int index) const { (void)index; return 0L; }
 165:fltk-1.3.4-1/FL/Fl_Browser_.H ****   // you don't have to provide these but it may help speed it up:
 166:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual int full_width() const ;	// current width of all items
 167:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual int full_height() const ;	// current height of all items
 168:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual int incr_height() const ;	// average height of an item
 169:fltk-1.3.4-1/FL/Fl_Browser_.H ****   // These only need to be done by subclass if you want a multi-browser:
 170:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual void item_select(void *item,int val=1);
 171:fltk-1.3.4-1/FL/Fl_Browser_.H ****   virtual int item_selected(void *item) const ;
 172:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 173:fltk-1.3.4-1/FL/Fl_Browser_.H ****   // things the subclass may want to call:
 174:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 175:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Returns the item that appears at the top of the list.
 176:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 177:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void *top() const { return top_; }
 178:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 179:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Returns the item currently selected, or NULL if there is no selection.
 180:fltk-1.3.4-1/FL/Fl_Browser_.H ****     
 181:fltk-1.3.4-1/FL/Fl_Browser_.H ****     For multiple selection browsers this call returns the currently focused item,
 182:fltk-1.3.4-1/FL/Fl_Browser_.H ****     even if it is not selected. To find all selected items, call 
 183:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Fl_Multi_Browser::selected() for every item in question.
 184:fltk-1.3.4-1/FL/Fl_Browser_.H ****   */
 185:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void *selection() const { return selection_; }
 186:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void new_list(); // completely clobber all data, as though list replaced
 187:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void deleting(void *item); // get rid of any pointers to item
 188:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void replacing(void *a,void *b); // change a pointers to b
 189:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void swapping(void *a,void *b); // exchange pointers a and b
 190:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void inserting(void *a,void *b); // insert b near a
 191:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int displayed(void *item) const ; // true if this item is visible
 192:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void redraw_line(void *item); // minimal update, no change in size
 193:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 194:fltk-1.3.4-1/FL/Fl_Browser_.H ****     This method will cause the entire list to be redrawn.
 195:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \see redraw_lines(), redraw_line()
 196:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 197:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void redraw_lines() { damage(FL_DAMAGE_SCROLL); } // redraw all of them
 198:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void bbox(int &X,int &Y,int &W,int &H) const;
 199:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int leftedge() const;	// x position after scrollbar & border
 200:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void *find_item(int ypos); // item under mouse
 201:fltk-1.3.4-1/FL/Fl_Browser_.H ****   
 202:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void draw();
 203:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Fl_Browser_(int X,int Y,int W,int H,const char *L=0);
 204:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 205:fltk-1.3.4-1/FL/Fl_Browser_.H **** public:
 206:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 207:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 208:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Vertical scrollbar. Public, so that it can be accessed directly.
 209:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 210:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Fl_Scrollbar scrollbar;
 211:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 212:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Horizontal scrollbar. Public, so that it can be accessed directly.
 213:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 214:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Fl_Scrollbar hscrollbar;
 215:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 216:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int handle(int event);
 217:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void resize(int X,int Y,int W,int H);
 218:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 219:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int select(void *item,int val=1,int docallbacks=0);
 220:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int select_only(void *item,int docallbacks=0);
 221:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int deselect(int docallbacks=0);
 222:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 223:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Gets the vertical scroll position of the list as a pixel position \p pos.
 224:fltk-1.3.4-1/FL/Fl_Browser_.H ****     The position returned is how many pixels of the list are scrolled off the top edge
 225:fltk-1.3.4-1/FL/Fl_Browser_.H ****     of the screen.  Example: A position of '3' indicates the top 3 pixels of 
 226:fltk-1.3.4-1/FL/Fl_Browser_.H ****     the list are scrolled off the top edge of the screen.
 227:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \see position(), hposition()
 228:fltk-1.3.4-1/FL/Fl_Browser_.H ****   */
 229:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int position() const { return position_; }
 230:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void position(int pos); // scroll to here
 231:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 232:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Gets the horizontal scroll position of the list as a pixel position \p pos.
 233:fltk-1.3.4-1/FL/Fl_Browser_.H ****     The position returned is how many pixels of the list are scrolled off the left edge
 234:fltk-1.3.4-1/FL/Fl_Browser_.H ****     of the screen. Example: A position of '18' indicates the left 18 pixels of
 235:fltk-1.3.4-1/FL/Fl_Browser_.H ****     the list are scrolled off the left edge of the screen.
 236:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \see position(), hposition()
 237:fltk-1.3.4-1/FL/Fl_Browser_.H ****   */
 238:fltk-1.3.4-1/FL/Fl_Browser_.H ****   int hposition() const { return hposition_; }
 239:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void hposition(int); // pan to here
 240:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void display(void *item); // scroll so this item is shown
 241:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 242:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 243:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Values for has_scrollbar().
 244:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 245:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /** Anonymous enum bit flags for has_scrollbar().
 246:fltk-1.3.4-1/FL/Fl_Browser_.H ****      -  bit 0: horizontal
 247:fltk-1.3.4-1/FL/Fl_Browser_.H ****      -  bit 1: vertical
 248:fltk-1.3.4-1/FL/Fl_Browser_.H ****      -  bit 2: 'always' (to be combined with bits 0 and 1)
 249:fltk-1.3.4-1/FL/Fl_Browser_.H ****      -  bit 3-31: reserved for future use
 250:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 251:fltk-1.3.4-1/FL/Fl_Browser_.H ****   enum { // values for has_scrollbar()
 252:fltk-1.3.4-1/FL/Fl_Browser_.H ****     HORIZONTAL = 1,		///< Only show horizontal scrollbar.
 253:fltk-1.3.4-1/FL/Fl_Browser_.H ****     VERTICAL = 2,		///< Only show vertical scrollbar.
 254:fltk-1.3.4-1/FL/Fl_Browser_.H ****     BOTH = 3,			///< Show both scrollbars. (default)
 255:fltk-1.3.4-1/FL/Fl_Browser_.H ****     ALWAYS_ON = 4,		///< Specified scrollbar(s) should 'always' be shown (to be used with HORIZONTA
 256:fltk-1.3.4-1/FL/Fl_Browser_.H ****     HORIZONTAL_ALWAYS = 5,	///< Horizontal scrollbar always on.
 257:fltk-1.3.4-1/FL/Fl_Browser_.H ****     VERTICAL_ALWAYS = 6,	///< Vertical scrollbar always on.
 258:fltk-1.3.4-1/FL/Fl_Browser_.H ****     BOTH_ALWAYS = 7		///< Both scrollbars always on.
 259:fltk-1.3.4-1/FL/Fl_Browser_.H ****   };
 260:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 261:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Returns the current scrollbar mode, see Fl_Browser_::has_scrollbar(uchar)
 262:fltk-1.3.4-1/FL/Fl_Browser_.H ****    */
 263:fltk-1.3.4-1/FL/Fl_Browser_.H ****   uchar has_scrollbar() const { return has_scrollbar_; }
 264:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 265:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Sets whether the widget should have scrollbars or not (default Fl_Browser_::BOTH).
 266:fltk-1.3.4-1/FL/Fl_Browser_.H ****     By default you can scroll in both directions, and the scrollbars
 267:fltk-1.3.4-1/FL/Fl_Browser_.H ****     disappear if the data will fit in the widget.  
 268:fltk-1.3.4-1/FL/Fl_Browser_.H ****     has_scrollbar() changes this based on the value of \p mode:
 269:fltk-1.3.4-1/FL/Fl_Browser_.H ****   
 270:fltk-1.3.4-1/FL/Fl_Browser_.H ****     - 0 - No scrollbars.
 271:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 272:fltk-1.3.4-1/FL/Fl_Browser_.H ****     - Fl_Browser_::HORIZONTAL - Only a horizontal scrollbar.
 273:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 274:fltk-1.3.4-1/FL/Fl_Browser_.H ****     - Fl_Browser_::VERTICAL - Only a vertical scrollbar.
 275:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 276:fltk-1.3.4-1/FL/Fl_Browser_.H ****     - Fl_Browser_::BOTH - The default is both scrollbars.
 277:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 278:fltk-1.3.4-1/FL/Fl_Browser_.H ****     - Fl_Browser_::HORIZONTAL_ALWAYS - Horizontal scrollbar always on,
 279:fltk-1.3.4-1/FL/Fl_Browser_.H ****       vertical always off.
 280:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 281:fltk-1.3.4-1/FL/Fl_Browser_.H ****     - Fl_Browser_::VERTICAL_ALWAYS - Vertical scrollbar always on,
 282:fltk-1.3.4-1/FL/Fl_Browser_.H ****       horizontal always off.
 283:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 284:fltk-1.3.4-1/FL/Fl_Browser_.H ****     - Fl_Browser_::BOTH_ALWAYS - Both always on.
 285:fltk-1.3.4-1/FL/Fl_Browser_.H ****   */
 286:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void has_scrollbar(uchar mode) { has_scrollbar_ = mode; }
 287:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 288:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 289:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Gets the default text font for the lines in the browser.
 290:fltk-1.3.4-1/FL/Fl_Browser_.H ****     \see textfont(), textsize(), textcolor()
 291:fltk-1.3.4-1/FL/Fl_Browser_.H ****   */
 292:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Fl_Font textfont() const { return textfont_; }
 293:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 294:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Sets the default text font for the lines in the browser to \p font.
 295:fltk-1.3.4-1/FL/Fl_Browser_.H ****   */
 296:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void textfont(Fl_Font font) { textfont_ = font; }
 297:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 298:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 299:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Gets the default text size (in pixels) for the lines in the browser.
 300:fltk-1.3.4-1/FL/Fl_Browser_.H ****   */
 301:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Fl_Fontsize textsize() const { return textsize_; }
 302:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 303:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Sets the default text size (in pixels) for the lines in the browser to \p size.
 304:fltk-1.3.4-1/FL/Fl_Browser_.H ****   */
 305:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void textsize(Fl_Fontsize newSize) { textsize_ = newSize; }
 306:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 307:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 308:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Gets the default text color for the lines in the browser.
 309:fltk-1.3.4-1/FL/Fl_Browser_.H ****   */
 310:fltk-1.3.4-1/FL/Fl_Browser_.H ****   Fl_Color textcolor() const { return textcolor_; }
 311:fltk-1.3.4-1/FL/Fl_Browser_.H ****   /**
 312:fltk-1.3.4-1/FL/Fl_Browser_.H ****     Sets the default text color for the lines in the browser to color \p col.
 313:fltk-1.3.4-1/FL/Fl_Browser_.H ****   */
 314:fltk-1.3.4-1/FL/Fl_Browser_.H ****   void textcolor(Fl_Color col) { textcolor_ = col; }
 1293              		.loc 6 314 0
 1294 0007 89B0C400 		movl	%esi, 196(%rax)
 1294      0000
 1295              	.LVL126:
 1296 000d C3       		ret
 1297              	.LBE440:
 1298              	.LBE439:
 1299              		.cfi_endproc
 1300              	.LFE742:
 1302              		.section	.text.unlikely._ZN15Fl_File_Chooser9textcolorEj
 1303              	.LCOLDE34:
 1304              		.section	.text._ZN15Fl_File_Chooser9textcolorEj
 1305              	.LHOTE34:
 1306              		.section	.text.unlikely._ZN15Fl_File_Chooser9textcolorEv,"ax",@progbits
 1307              		.align 2
 1308              	.LCOLDB35:
 1309              		.section	.text._ZN15Fl_File_Chooser9textcolorEv,"ax",@progbits
 1310              	.LHOTB35:
 1311              		.align 2
 1312              		.p2align 4,,15
 1313              		.globl	_ZN15Fl_File_Chooser9textcolorEv
 1315              	_ZN15Fl_File_Chooser9textcolorEv:
 1316              	.LFB743:
 1317              		.loc 1 398 0
 1318              		.cfi_startproc
 1319              	.LVL127:
 1320 0000 488B8738 		movq	6200(%rdi), %rax
 1320      180000
 1321              		.loc 1 399 0
 1322 0007 8B80C400 		movl	196(%rax), %eax
 1322      0000
 1323              		.loc 1 400 0
 1324 000d C3       		ret
 1325              		.cfi_endproc
 1326              	.LFE743:
 1328              		.section	.text.unlikely._ZN15Fl_File_Chooser9textcolorEv
 1329              	.LCOLDE35:
 1330              		.section	.text._ZN15Fl_File_Chooser9textcolorEv
 1331              	.LHOTE35:
 1332              		.section	.text.unlikely._ZN15Fl_File_Chooser8textfontEi,"ax",@progbits
 1333              		.align 2
 1334              	.LCOLDB36:
 1335              		.section	.text._ZN15Fl_File_Chooser8textfontEi,"ax",@progbits
 1336              	.LHOTB36:
 1337              		.align 2
 1338              		.p2align 4,,15
 1339              		.globl	_ZN15Fl_File_Chooser8textfontEi
 1341              	_ZN15Fl_File_Chooser8textfontEi:
 1342              	.LFB744:
 1343              		.loc 1 402 0
 1344              		.cfi_startproc
 1345              	.LVL128:
 1346              		.loc 1 403 0
 1347 0000 488B8738 		movq	6200(%rdi), %rax
 1347      180000
 1348              	.LVL129:
 1349              	.LBB441:
 1350              	.LBB442:
 296:fltk-1.3.4-1/FL/Fl_Browser_.H **** 
 1351              		.loc 6 296 0
 1352 0007 89B0BC00 		movl	%esi, 188(%rax)
 1352      0000
 1353              	.LVL130:
 1354 000d C3       		ret
 1355              	.LBE442:
 1356              	.LBE441:
 1357              		.cfi_endproc
 1358              	.LFE744:
 1360              		.section	.text.unlikely._ZN15Fl_File_Chooser8textfontEi
 1361              	.LCOLDE36:
 1362              		.section	.text._ZN15Fl_File_Chooser8textfontEi
 1363              	.LHOTE36:
 1364              		.section	.text.unlikely._ZN15Fl_File_Chooser8textfontEv,"ax",@progbits
 1365              		.align 2
 1366              	.LCOLDB37:
 1367              		.section	.text._ZN15Fl_File_Chooser8textfontEv,"ax",@progbits
 1368              	.LHOTB37:
 1369              		.align 2
 1370              		.p2align 4,,15
 1371              		.globl	_ZN15Fl_File_Chooser8textfontEv
 1373              	_ZN15Fl_File_Chooser8textfontEv:
 1374              	.LFB745:
 1375              		.loc 1 406 0
 1376              		.cfi_startproc
 1377              	.LVL131:
 1378 0000 488B8738 		movq	6200(%rdi), %rax
 1378      180000
 1379              		.loc 1 407 0
 1380 0007 8B80BC00 		movl	188(%rax), %eax
 1380      0000
 1381              		.loc 1 408 0
 1382 000d C3       		ret
 1383              		.cfi_endproc
 1384              	.LFE745:
 1386              		.section	.text.unlikely._ZN15Fl_File_Chooser8textfontEv
 1387              	.LCOLDE37:
 1388              		.section	.text._ZN15Fl_File_Chooser8textfontEv
 1389              	.LHOTE37:
 1390              		.section	.text.unlikely._ZN15Fl_File_Chooser8textsizeEi,"ax",@progbits
 1391              		.align 2
 1392              	.LCOLDB38:
 1393              		.section	.text._ZN15Fl_File_Chooser8textsizeEi,"ax",@progbits
 1394              	.LHOTB38:
 1395              		.align 2
 1396              		.p2align 4,,15
 1397              		.globl	_ZN15Fl_File_Chooser8textsizeEi
 1399              	_ZN15Fl_File_Chooser8textsizeEi:
 1400              	.LFB746:
 1401              		.loc 1 410 0
 1402              		.cfi_startproc
 1403              	.LVL132:
 1404 0000 55       		pushq	%rbp
 1405              		.cfi_def_cfa_offset 16
 1406              		.cfi_offset 6, -16
 1407 0001 53       		pushq	%rbx
 1408              		.cfi_def_cfa_offset 24
 1409              		.cfi_offset 3, -24
 1410 0002 89F3     		movl	%esi, %ebx
 1411 0004 4883EC08 		subq	$8, %rsp
 1412              		.cfi_def_cfa_offset 32
 1413              		.loc 1 411 0
 1414 0008 488BAF38 		movq	6200(%rdi), %rbp
 1414      180000
 1415              	.LVL133:
 1416              	.LBB443:
 1417              	.LBB444:
  65:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  66:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   /**
  67:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     Sets or gets the filename filter. The pattern matching uses
  68:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     the fl_filename_match()
  69:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     function in FLTK.
  70:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   */
  71:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   void	filter(const char *pattern);
  72:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   /**
  73:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     Sets or gets the filename filter. The pattern matching uses
  74:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     the fl_filename_match()
  75:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     function in FLTK.
  76:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   */
  77:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   const char	*filter() const { return (pattern_); };
  78:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  79:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   /**
  80:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     Loads the specified directory into the browser. If icons have been
  81:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     loaded then the correct icon is associated with each file in the list.
  82:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     
  83:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     <P>The sort argument specifies a sort function to be used with
  84:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     fl_filename_list().
  85:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   */
  86:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   int		load(const char *directory, Fl_File_Sort_F *sort = fl_numericsort);
  87:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  88:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   Fl_Fontsize  textsize() const { return Fl_Browser::textsize(); };
  89:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   void		textsize(Fl_Fontsize s) { Fl_Browser::textsize(s); iconsize_ = (uchar)(3 * s / 2); };
 1418              		.loc 5 89 0
 1419 000f 4889EF   		movq	%rbp, %rdi
 1420              	.LVL134:
 1421 0012 E8000000 		call	_ZN10Fl_Browser8textsizeEi
 1421      00
 1422              	.LVL135:
 1423 0017 8D045B   		leal	(%rbx,%rbx,2), %eax
 1424 001a 89C2     		movl	%eax, %edx
 1425 001c C1EA1F   		shrl	$31, %edx
 1426 001f 01D0     		addl	%edx, %eax
 1427 0021 D1F8     		sarl	%eax
 1428 0023 8885A802 		movb	%al, 680(%rbp)
 1428      0000
 1429              	.LVL136:
 1430              	.LBE444:
 1431              	.LBE443:
 1432              		.loc 1 412 0
 1433 0029 4883C408 		addq	$8, %rsp
 1434              		.cfi_def_cfa_offset 24
 1435 002d 5B       		popq	%rbx
 1436              		.cfi_def_cfa_offset 16
 1437              	.LVL137:
 1438 002e 5D       		popq	%rbp
 1439              		.cfi_def_cfa_offset 8
 1440 002f C3       		ret
 1441              		.cfi_endproc
 1442              	.LFE746:
 1444              		.section	.text.unlikely._ZN15Fl_File_Chooser8textsizeEi
 1445              	.LCOLDE38:
 1446              		.section	.text._ZN15Fl_File_Chooser8textsizeEi
 1447              	.LHOTE38:
 1448              		.section	.text.unlikely._ZN15Fl_File_Chooser8textsizeEv,"ax",@progbits
 1449              		.align 2
 1450              	.LCOLDB39:
 1451              		.section	.text._ZN15Fl_File_Chooser8textsizeEv,"ax",@progbits
 1452              	.LHOTB39:
 1453              		.align 2
 1454              		.p2align 4,,15
 1455              		.globl	_ZN15Fl_File_Chooser8textsizeEv
 1457              	_ZN15Fl_File_Chooser8textsizeEv:
 1458              	.LFB747:
 1459              		.loc 1 414 0
 1460              		.cfi_startproc
 1461              	.LVL138:
 1462 0000 488B8738 		movq	6200(%rdi), %rax
 1462      180000
 1463              		.loc 1 415 0
 1464 0007 8B80C000 		movl	192(%rax), %eax
 1464      0000
 1465              		.loc 1 416 0
 1466 000d C3       		ret
 1467              		.cfi_endproc
 1468              	.LFE747:
 1470              		.section	.text.unlikely._ZN15Fl_File_Chooser8textsizeEv
 1471              	.LCOLDE39:
 1472              		.section	.text._ZN15Fl_File_Chooser8textsizeEv
 1473              	.LHOTE39:
 1474              		.section	.text.unlikely._ZN15Fl_File_Chooser4typeEi,"ax",@progbits
 1475              		.align 2
 1476              	.LCOLDB40:
 1477              		.section	.text._ZN15Fl_File_Chooser4typeEi,"ax",@progbits
 1478              	.LHOTB40:
 1479              		.align 2
 1480              		.p2align 4,,15
 1481              		.globl	_ZN15Fl_File_Chooser4typeEi
 1483              	_ZN15Fl_File_Chooser4typeEi:
 1484              	.LFB748:
 1485              		.loc 1 418 0
 1486              		.cfi_startproc
 1487              	.LVL139:
 1488 0000 55       		pushq	%rbp
 1489              		.cfi_def_cfa_offset 16
 1490              		.cfi_offset 6, -16
 1491 0001 53       		pushq	%rbx
 1492              		.cfi_def_cfa_offset 24
 1493              		.cfi_offset 3, -24
 1494 0002 89F5     		movl	%esi, %ebp
 1495 0004 4889FB   		movq	%rdi, %rbx
 1496 0007 4883EC08 		subq	$8, %rsp
 1497              		.cfi_def_cfa_offset 32
 1498              		.loc 1 419 0
 1499 000b 89B71018 		movl	%esi, 6160(%rdi)
 1499      0000
 1500              		.loc 1 420 0
 1501 0011 83E601   		andl	$1, %esi
 1502              	.LVL140:
 1503              		.loc 1 421 0
 1504 0014 488B8738 		movq	6200(%rdi), %rax
 1504      180000
 1505              		.loc 1 420 0
 1506 001b 7433     		je	.L67
 1507              	.LVL141:
 1508              		.loc 1 424 0
 1509 001d 40F6C502 		testb	$2, %bpl
 1510              	.LBB445:
 1511              	.LBB446:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1512              		.loc 3 279 0
 1513 0021 C6406C03 		movb	$3, 108(%rax)
 1514              	.LBE446:
 1515              	.LBE445:
 1516              		.loc 1 425 0
 1517 0025 488BBB30 		movq	6192(%rbx), %rdi
 1517      180000
 1518              	.LVL142:
 1519              		.loc 1 424 0
 1520 002c 7433     		je	.L69
 1521              	.LVL143:
 1522              	.L75:
 1523              		.loc 1 425 0
 1524 002e E8000000 		call	_ZN9Fl_Widget8activateEv
 1524      00
 1525              	.LVL144:
 1526              		.loc 1 428 0
 1527 0033 83E504   		andl	$4, %ebp
 1528              	.LVL145:
 1529              		.loc 1 429 0
 1530 0036 488B8338 		movq	6200(%rbx), %rax
 1530      180000
 1531              		.loc 1 428 0
 1532 003d 7533     		jne	.L74
 1533              	.L71:
 1534              	.LVL146:
 1535              	.LBB447:
 1536              	.LBB448:
  90:fltk-1.3.4-1/FL/Fl_File_Browser.H **** 
  91:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   /**
  92:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     Sets or gets the file browser type, FILES or
  93:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     DIRECTORIES. When set to FILES, both
  94:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     files and directories are shown. Otherwise only directories are
  95:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     shown.
  96:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   */
  97:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   int		filetype() const { return (filetype_); };
  98:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   /**
  99:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     Sets or gets the file browser type, FILES or
 100:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     DIRECTORIES. When set to FILES, both
 101:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     files and directories are shown. Otherwise only directories are
 102:fltk-1.3.4-1/FL/Fl_File_Browser.H ****     shown.
 103:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   */
 104:fltk-1.3.4-1/FL/Fl_File_Browser.H ****   void		filetype(int t) { filetype_ = t; };
 1537              		.loc 5 104 0
 1538 003f C7809C02 		movl	$0, 668(%rax)
 1538      00000000 
 1538      0000
 1539              	.LBE448:
 1540              	.LBE447:
 1541              		.loc 1 432 0
 1542 0049 4883C408 		addq	$8, %rsp
 1543              		.cfi_remember_state
 1544              		.cfi_def_cfa_offset 24
 1545 004d 5B       		popq	%rbx
 1546              		.cfi_def_cfa_offset 16
 1547              	.LVL147:
 1548 004e 5D       		popq	%rbp
 1549              		.cfi_def_cfa_offset 8
 1550 004f C3       		ret
 1551              	.LVL148:
 1552              		.p2align 4,,10
 1553              		.p2align 3
 1554              	.L67:
 1555              		.cfi_restore_state
 1556              		.loc 1 424 0
 1557 0050 40F6C502 		testb	$2, %bpl
 1558              	.LBB449:
 1559              	.LBB450:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1560              		.loc 3 279 0
 1561 0054 C6406C02 		movb	$2, 108(%rax)
 1562              	.LBE450:
 1563              	.LBE449:
 1564              		.loc 1 425 0
 1565 0058 488BBB30 		movq	6192(%rbx), %rdi
 1565      180000
 1566              		.loc 1 424 0
 1567 005f 75CD     		jne	.L75
 1568              	.LVL149:
 1569              	.L69:
 1570              		.loc 1 427 0
 1571 0061 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 1571      00
 1572              	.LVL150:
 1573              		.loc 1 428 0
 1574 0066 83E504   		andl	$4, %ebp
 1575              	.LVL151:
 1576              		.loc 1 429 0
 1577 0069 488B8338 		movq	6200(%rbx), %rax
 1577      180000
 1578              		.loc 1 428 0
 1579 0070 74CD     		je	.L71
 1580              	.L74:
 1581              	.LVL152:
 1582              	.LBB451:
 1583              	.LBB452:
 1584              		.loc 5 104 0
 1585 0072 C7809C02 		movl	$1, 668(%rax)
 1585      00000100 
 1585      0000
 1586              	.LBE452:
 1587              	.LBE451:
 1588              		.loc 1 432 0
 1589 007c 4883C408 		addq	$8, %rsp
 1590              		.cfi_def_cfa_offset 24
 1591 0080 5B       		popq	%rbx
 1592              		.cfi_def_cfa_offset 16
 1593              	.LVL153:
 1594 0081 5D       		popq	%rbp
 1595              		.cfi_def_cfa_offset 8
 1596 0082 C3       		ret
 1597              		.cfi_endproc
 1598              	.LFE748:
 1600              		.section	.text.unlikely._ZN15Fl_File_Chooser4typeEi
 1601              	.LCOLDE40:
 1602              		.section	.text._ZN15Fl_File_Chooser4typeEi
 1603              	.LHOTE40:
 1604              		.section	.rodata.str1.1
 1605              	.LC41:
 1606 0001 66696C65 		.string	"filechooser"
 1606      63686F6F 
 1606      73657200 
 1607              	.LC42:
 1608 000d 666C746B 		.string	"fltk.org"
 1608      2E6F7267 
 1608      00
 1609              	.LC43:
 1610 0016 43686F6F 		.string	"Choose File"
 1610      73652046 
 1610      696C6500 
 1611              	.LC44:
 1612 0022 53686F77 		.string	"Show:"
 1612      3A00
 1613              	.LC45:
 1614 0028 4661766F 		.string	"Favorites"
 1614      72697465 
 1614      7300
 1615              	.LC46:
 1616 0032 3F00     		.string	"?"
 1617              	.LC47:
 1618 0034 50726576 		.string	"Preview"
 1618      69657700 
 1619              	.LC48:
 1620 003c 53686F77 		.string	"Show hidden files"
 1620      20686964 
 1620      64656E20 
 1620      66696C65 
 1620      7300
 1621              	.LC49:
 1622 004e 46696C65 		.string	"Filename:"
 1622      6E616D65 
 1622      3A00
 1623              	.LC50:
 1624 0058 4F4B00   		.string	"OK"
 1625              	.LC51:
 1626 005b 43616E63 		.string	"Cancel"
 1626      656C00
 1627              	.LC52:
 1628 0062 4D616E61 		.string	"Manage Favorites"
 1628      67652046 
 1628      61766F72 
 1628      69746573 
 1628      00
 1629              	.LC53:
 1630 0073 40383E00 		.string	"@8>"
 1631              	.LC54:
 1632 0077 5800     		.string	"X"
 1633              	.LC55:
 1634 0079 40323E00 		.string	"@2>"
 1635              	.LC56:
 1636 007d 53617665 		.string	"Save"
 1636      00
 1637              	.LC57:
 1638 0082 70726576 		.string	"preview"
 1638      69657700 
 1639              		.section	.text.unlikely._ZN15Fl_File_ChooserC2EPKcS1_iS1_,"ax",@progbits
 1640              		.align 2
 1641              	.LCOLDB58:
 1642              		.section	.text._ZN15Fl_File_ChooserC2EPKcS1_iS1_,"ax",@progbits
 1643              	.LHOTB58:
 1644              		.align 2
 1645              		.p2align 4,,15
 1646              		.globl	_ZN15Fl_File_ChooserC2EPKcS1_iS1_
 1648              	_ZN15Fl_File_ChooserC2EPKcS1_iS1_:
 1649              	.LFB722:
 1650              		.loc 1 169 0
 1651              		.cfi_startproc
 1652              	.LVL154:
 1653 0000 4157     		pushq	%r15
 1654              		.cfi_def_cfa_offset 16
 1655              		.cfi_offset 15, -16
 1656 0002 4156     		pushq	%r14
 1657              		.cfi_def_cfa_offset 24
 1658              		.cfi_offset 14, -24
 1659 0004 4155     		pushq	%r13
 1660              		.cfi_def_cfa_offset 32
 1661              		.cfi_offset 13, -32
 1662 0006 4154     		pushq	%r12
 1663              		.cfi_def_cfa_offset 40
 1664              		.cfi_offset 12, -40
 1665 0008 4D89C5   		movq	%r8, %r13
 1666 000b 55       		pushq	%rbp
 1667              		.cfi_def_cfa_offset 48
 1668              		.cfi_offset 6, -48
 1669 000c 53       		pushq	%rbx
 1670              		.cfi_def_cfa_offset 56
 1671              		.cfi_offset 3, -56
 1672 000d 4189CC   		movl	%ecx, %r12d
 1673 0010 4889FB   		movq	%rdi, %rbx
 1674 0013 4883EC38 		subq	$56, %rsp
 1675              		.cfi_def_cfa_offset 112
 1676              		.loc 1 169 0
 1677 0017 64488B04 		movq	%fs:40, %rax
 1677      25280000 
 1677      00
 1678 0020 48894424 		movq	%rax, 40(%rsp)
 1678      28
 1679 0025 31C0     		xorl	%eax, %eax
 1680              	.LBB577:
 1681              		.loc 1 170 0
 1682 0027 48833D00 		cmpq	$0, _ZN15Fl_File_Chooser6prefs_E(%rip)
 1682      00000000 
 1683              	.LBE577:
 1684              		.loc 1 169 0
 1685 002f 48897424 		movq	%rsi, 16(%rsp)
 1685      10
 1686 0034 48895424 		movq	%rdx, 24(%rsp)
 1686      18
 1687              	.LBB723:
 1688              		.loc 1 170 0
 1689 0039 0F84A10A 		je	.L87
 1689      0000
 1690              	.LVL155:
 1691              	.L77:
 1692              		.loc 1 173 0
 1693 003f E8000000 		call	_ZN8Fl_Group7currentEv
 1693      00
 1694              	.LVL156:
 1695              	.LBB578:
 1696              		.loc 1 174 0
 1697 0044 BFF00000 		movl	$240, %edi
 1697      00
 1698              	.LBE578:
 1699              		.loc 1 173 0
 1700 0049 48894424 		movq	%rax, 8(%rsp)
 1700      08
 1701              	.LVL157:
 1702              	.LBB684:
 1703              		.loc 1 174 0
 1704 004e E8000000 		call	_Znwm
 1704      00
 1705              	.LVL158:
 1706 0053 B9000000 		movl	$.LC43, %ecx
 1706      00
 1707 0058 4889C5   		movq	%rax, %rbp
 1708 005b BA7C0100 		movl	$380, %edx
 1708      00
 1709 0060 BEEA0100 		movl	$490, %esi
 1709      00
 1710 0065 4889C7   		movq	%rax, %rdi
 1711 0068 E8000000 		call	_ZN16Fl_Double_WindowC1EiiPKc
 1711      00
 1712              	.LVL159:
 1713 006d 4889AB18 		movq	%rbp, 6168(%rbx)
 1713      180000
 1714              	.LVL160:
 1715              	.LBB579:
 1716              	.LBB580:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1717              		.loc 3 568 0
 1718 0074 48C74510 		movq	$_ZN15Fl_File_Chooser9cb_windowEP16Fl_Double_WindowPv, 16(%rbp)
 1718      00000000 
 1719              	.LBE580:
 1720              	.LBE579:
 1721              	.LBB582:
 1722              		.loc 1 176 0
 1723 007c BFA00000 		movl	$160, %edi
 1723      00
 1724              	.LBE582:
 1725              	.LBB619:
 1726              	.LBB581:
 568:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1727              		.loc 3 568 0
 1728 0081 48895D18 		movq	%rbx, 24(%rbp)
 1729              	.LVL161:
 1730              	.LBE581:
 1731              	.LBE619:
 1732              	.LBB620:
 1733              		.loc 1 176 0
 1734 0085 E8000000 		call	_Znwm
 1734      00
 1735              	.LVL162:
 1736 008a 4531C9   		xorl	%r9d, %r9d
 1737 008d 41B81900 		movl	$25, %r8d
 1737      0000
 1738 0093 B9D60100 		movl	$470, %ecx
 1738      00
 1739 0098 BA0A0000 		movl	$10, %edx
 1739      00
 1740 009d BE0A0000 		movl	$10, %esi
 1740      00
 1741 00a2 4889C7   		movq	%rax, %rdi
 1742 00a5 4889C5   		movq	%rax, %rbp
 1743              	.LVL163:
 1744 00a8 E8000000 		call	_ZN8Fl_GroupC1EiiiiPKc
 1744      00
 1745              	.LVL164:
 1746              		.loc 1 177 0
 1747 00ad BF980000 		movl	$152, %edi
 1747      00
 1748 00b2 E8000000 		call	_Znwm
 1748      00
 1749              	.LVL165:
 1750 00b7 41B90000 		movl	$.LC44, %r9d
 1750      0000
 1751 00bd 4989C6   		movq	%rax, %r14
 1752 00c0 41B81900 		movl	$25, %r8d
 1752      0000
 1753 00c6 B9D70000 		movl	$215, %ecx
 1753      00
 1754 00cb BA0A0000 		movl	$10, %edx
 1754      00
 1755 00d0 BE410000 		movl	$65, %esi
 1755      00
 1756 00d5 4889C7   		movq	%rax, %rdi
 1757 00d8 E8000000 		call	_ZN9Fl_ChoiceC1EiiiiPKc
 1757      00
 1758              	.LVL166:
 1759 00dd 4C89B320 		movq	%r14, 6176(%rbx)
 1759      180000
 1760              	.LVL167:
 1761              	.LBB583:
 1762              	.LBB584:
 141:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int value(const Fl_Menu_Item*);
 142:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**
 143:fltk-1.3.4-1/FL/Fl_Menu_.H ****     The value is the index into menu() of the last item chosen by
 144:fltk-1.3.4-1/FL/Fl_Menu_.H ****     the user.  It is zero initially.  You can set it as an integer, or set
 145:fltk-1.3.4-1/FL/Fl_Menu_.H ****     it with a pointer to a menu item.  The set routines return non-zero if
 146:fltk-1.3.4-1/FL/Fl_Menu_.H ****     the new value is different than the old one.
 147:fltk-1.3.4-1/FL/Fl_Menu_.H ****   */
 148:fltk-1.3.4-1/FL/Fl_Menu_.H ****   int value(int i) {return value(menu_+i);}
 149:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Returns the title of the last item chosen.  */
 150:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const char *text() const {return value_ ? value_->text : 0;}
 151:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Returns the title of item i.  */
 152:fltk-1.3.4-1/FL/Fl_Menu_.H ****   const char *text(int i) const {return menu_[i].text;}
 153:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
 154:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Gets the current font of menu item labels.  */
 155:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Font textfont() const {return textfont_;}
 156:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**  Sets the current font of menu item labels.  */
 157:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void textfont(Fl_Font c) {textfont_=c;}
 158:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**  Gets the font size of menu item labels.  */
 159:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Fontsize textsize() const {return textsize_;}
 160:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**  Sets the font size of menu item labels.  */
 161:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void textsize(Fl_Fontsize c) {textsize_=c;}
 162:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Get the current color of menu item labels.  */
 163:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Color textcolor() const {return textcolor_;}
 164:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /** Sets the current color of menu item labels. */
 165:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void textcolor(Fl_Color c) {textcolor_=c;}
 166:fltk-1.3.4-1/FL/Fl_Menu_.H **** 
 167:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**
 168:fltk-1.3.4-1/FL/Fl_Menu_.H ****     This box type is used to surround the currently-selected items in the
 169:fltk-1.3.4-1/FL/Fl_Menu_.H ****     menus.  If this is FL_NO_BOX then it acts like
 170:fltk-1.3.4-1/FL/Fl_Menu_.H ****     FL_THIN_UP_BOX and selection_color() acts like
 171:fltk-1.3.4-1/FL/Fl_Menu_.H ****     FL_WHITE, for back compatibility.
 172:fltk-1.3.4-1/FL/Fl_Menu_.H ****   */
 173:fltk-1.3.4-1/FL/Fl_Menu_.H ****   Fl_Boxtype down_box() const {return (Fl_Boxtype)down_box_;}
 174:fltk-1.3.4-1/FL/Fl_Menu_.H ****   /**    See Fl_Boxtype Fl_Menu_::down_box() const   */
 175:fltk-1.3.4-1/FL/Fl_Menu_.H ****   void down_box(Fl_Boxtype b) {down_box_ = b;}
 1763              		.loc 4 175 0
 1764 00e4 41C68689 		movb	$14, 137(%r14)
 1764      0000000E 
 1765              	.LVL168:
 1766              	.LBE584:
 1767              	.LBE583:
 1768              	.LBB585:
 1769              	.LBB586:
 496:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1770              		.loc 3 496 0
 1771 00ec 41C74648 		movl	$1, 72(%r14)
 1771      01000000 
 1772              	.LVL169:
 1773              	.LBE586:
 1774              	.LBE585:
 1775              	.LBB587:
 1776              	.LBB588:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1777              		.loc 3 574 0
 1778 00f4 49C74610 		movq	$_ZN15Fl_File_Chooser13cb_showChoiceEP9Fl_ChoicePv, 16(%r14)
 1778      00000000 
 1779              	.LVL170:
 1780              	.LBE588:
 1781              	.LBE587:
 1782              		.loc 1 181 0
 1783 00fc E8000000 		call	_ZN8Fl_Group7currentEv
 1783      00
 1784              	.LVL171:
 1785              		.loc 1 182 0
 1786 0101 488B3500 		movq	_ZN15Fl_File_Chooser10show_labelE(%rip), %rsi
 1786      000000
 1787              	.LBB589:
 1788              	.LBB590:
 112:fltk-1.3.4-1/FL/Fl_Group.H ****   void clear();
 113:fltk-1.3.4-1/FL/Fl_Group.H **** 
 114:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 115:fltk-1.3.4-1/FL/Fl_Group.H ****     See void Fl_Group::resizable(Fl_Widget *box) 
 116:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 117:fltk-1.3.4-1/FL/Fl_Group.H ****   void resizable(Fl_Widget& o) {resizable_ = &o;}
 118:fltk-1.3.4-1/FL/Fl_Group.H ****   /**
 119:fltk-1.3.4-1/FL/Fl_Group.H ****     The resizable widget defines the resizing box for the group. When the
 120:fltk-1.3.4-1/FL/Fl_Group.H ****     group is resized it calculates a new size and position for all of its
 121:fltk-1.3.4-1/FL/Fl_Group.H ****     children. Widgets that are horizontally or vertically inside the
 122:fltk-1.3.4-1/FL/Fl_Group.H ****     dimensions of the box are scaled to the new size. Widgets outside the
 123:fltk-1.3.4-1/FL/Fl_Group.H ****     box are moved.
 124:fltk-1.3.4-1/FL/Fl_Group.H **** 
 125:fltk-1.3.4-1/FL/Fl_Group.H ****     In these examples the gray area is the resizable:
 126:fltk-1.3.4-1/FL/Fl_Group.H **** 
 127:fltk-1.3.4-1/FL/Fl_Group.H ****     \image html resizebox1.png
 128:fltk-1.3.4-1/FL/Fl_Group.H **** 
 129:fltk-1.3.4-1/FL/Fl_Group.H ****     <br>
 130:fltk-1.3.4-1/FL/Fl_Group.H ****     
 131:fltk-1.3.4-1/FL/Fl_Group.H ****     \image html resizebox2.png
 132:fltk-1.3.4-1/FL/Fl_Group.H ****     
 133:fltk-1.3.4-1/FL/Fl_Group.H ****     \image latex resizebox1.png "before resize"  width=4cm
 134:fltk-1.3.4-1/FL/Fl_Group.H ****     
 135:fltk-1.3.4-1/FL/Fl_Group.H ****     \image latex resizebox2.png "after resize"   width=4.85cm
 136:fltk-1.3.4-1/FL/Fl_Group.H **** 
 137:fltk-1.3.4-1/FL/Fl_Group.H ****     The resizable may be set to the group itself, in which case all the
 138:fltk-1.3.4-1/FL/Fl_Group.H ****     contents are resized. This is the default value for Fl_Group,
 139:fltk-1.3.4-1/FL/Fl_Group.H ****     although NULL is the default for Fl_Window and Fl_Pack.
 140:fltk-1.3.4-1/FL/Fl_Group.H **** 
 141:fltk-1.3.4-1/FL/Fl_Group.H ****     If the resizable is NULL then all widgets remain a fixed size
 142:fltk-1.3.4-1/FL/Fl_Group.H ****     and distance from the top-left corner.
 143:fltk-1.3.4-1/FL/Fl_Group.H **** 
 144:fltk-1.3.4-1/FL/Fl_Group.H ****     It is possible to achieve any type of resize behavior by using an
 145:fltk-1.3.4-1/FL/Fl_Group.H ****     invisible Fl_Box as the resizable and/or by using a hierarchy
 146:fltk-1.3.4-1/FL/Fl_Group.H ****     of child Fl_Group's.
 147:fltk-1.3.4-1/FL/Fl_Group.H ****   */
 148:fltk-1.3.4-1/FL/Fl_Group.H ****   void resizable(Fl_Widget* o) {resizable_ = o;}
 1789              		.loc 2 148 0
 1790 0108 4C89B088 		movq	%r14, 136(%rax)
 1790      000000
 1791              	.LVL172:
 1792              	.LBE590:
 1793              	.LBE589:
 1794              		.loc 1 182 0
 1795 010f 488BBB20 		movq	6176(%rbx), %rdi
 1795      180000
 1796 0116 E8000000 		call	_ZN9Fl_Widget5labelEPKc
 1796      00
 1797              	.LVL173:
 1798              		.loc 1 184 0
 1799 011b BF980000 		movl	$152, %edi
 1799      00
 1800 0120 E8000000 		call	_Znwm
 1800      00
 1801              	.LVL174:
 1802 0125 41B90000 		movl	$.LC45, %r9d
 1802      0000
 1803 012b 41B81900 		movl	$25, %r8d
 1803      0000
 1804 0131 B99B0000 		movl	$155, %ecx
 1804      00
 1805 0136 BA0A0000 		movl	$10, %edx
 1805      00
 1806 013b 4889C7   		movq	%rax, %rdi
 1807 013e BE220100 		movl	$290, %esi
 1807      00
 1808 0143 4989C6   		movq	%rax, %r14
 1809              	.LVL175:
 1810 0146 E8000000 		call	_ZN14Fl_Menu_ButtonC1EiiiiPKc
 1810      00
 1811              	.LVL176:
 1812              		.loc 1 188 0
 1813 014b 488B3500 		movq	_ZN15Fl_File_Chooser15favorites_labelE(%rip), %rsi
 1813      000000
 1814 0152 4C89F7   		movq	%r14, %rdi
 1815              		.loc 1 184 0
 1816 0155 4C89B328 		movq	%r14, 6184(%rbx)
 1816      180000
 1817              	.LVL177:
 1818              	.LBB591:
 1819              	.LBB592:
 1820              		.loc 4 175 0
 1821 015c 41C68689 		movb	$14, 137(%r14)
 1821      0000000E 
 1822              	.LVL178:
 1823              	.LBE592:
 1824              	.LBE591:
 1825              	.LBB593:
 1826              	.LBB594:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1827              		.loc 3 574 0
 1828 0164 49C74610 		movq	$_ZN15Fl_File_Chooser18cb_favoritesButtonEP14Fl_Menu_ButtonPv, 16(%r14)
 1828      00000000 
 1829              	.LVL179:
 1830              	.LBE594:
 1831              	.LBE593:
 1832              	.LBB595:
 1833              	.LBB596:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1834              		.loc 3 357 0
 1835 016c 41C74654 		movl	$20, 84(%r14)
 1835      14000000 
 1836              	.LVL180:
 1837              	.LBE596:
 1838              	.LBE595:
 1839              		.loc 1 188 0
 1840 0174 E8000000 		call	_ZN9Fl_Widget5labelEPKc
 1840      00
 1841              	.LVL181:
 1842              	.LBB597:
 1843              		.loc 1 190 0
 1844 0179 BF800000 		movl	$128, %edi
 1844      00
 1845 017e E8000000 		call	_Znwm
 1845      00
 1846              	.LVL182:
 1847 0183 4531C9   		xorl	%r9d, %r9d
 1848 0186 41B81900 		movl	$25, %r8d
 1848      0000
 1849 018c B9190000 		movl	$25, %ecx
 1849      00
 1850 0191 BA0A0000 		movl	$10, %edx
 1850      00
 1851 0196 BEC70100 		movl	$455, %esi
 1851      00
 1852 019b 4889C7   		movq	%rax, %rdi
 1853 019e 4989C6   		movq	%rax, %r14
 1854              	.LVL183:
 1855 01a1 E8000000 		call	_ZN9Fl_ButtonC1EiiiiPKc
 1855      00
 1856              	.LVL184:
 1857              	.LBB598:
 1858              	.LBB599:
 1859              		.loc 1 67 0
 1860 01a6 803D0000 		cmpb	$0, _ZGVZL9image_newvE5image(%rip)
 1860      000000
 1861              	.LBE599:
 1862              	.LBE598:
 1863              		.loc 1 190 0
 1864 01ad 4C89B330 		movq	%r14, 6192(%rbx)
 1864      180000
 1865              	.LVL185:
 1866              	.LBB610:
 1867              	.LBB608:
 1868              		.loc 1 67 0
 1869 01b4 0F848608 		je	.L78
 1869      0000
 1870 01ba 488B0500 		movq	_ZZL9image_newvE5image(%rip), %rax
 1870      000000
 1871 01c1 4C89F2   		movq	%r14, %rdx
 1872              	.L79:
 1873              	.LVL186:
 1874              	.LBE608:
 1875              	.LBE610:
 1876              	.LBB611:
 1877              	.LBB612:
 521:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1878              		.loc 3 521 0
 1879 01c4 48894238 		movq	%rax, 56(%rdx)
 1880              	.LVL187:
 1881              	.LBE612:
 1882              	.LBE611:
 1883              		.loc 1 192 0
 1884 01c8 488B8330 		movq	6192(%rbx), %rax
 1884      180000
 1885              	.LVL188:
 1886              		.loc 1 194 0
 1887 01cf 4C89F7   		movq	%r14, %rdi
 1888 01d2 488B3500 		movq	_ZN15Fl_File_Chooser21new_directory_tooltipE(%rip), %rsi
 1888      000000
 1889              	.LBB613:
 1890              	.LBB614:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1891              		.loc 3 508 0
 1892 01d9 C7404C08 		movl	$8, 76(%rax)
 1892      000000
 1893              	.LVL189:
 1894              	.LBE614:
 1895              	.LBE613:
 1896              		.loc 1 193 0
 1897 01e0 488B8330 		movq	6192(%rbx), %rax
 1897      180000
 1898              	.LVL190:
 1899              	.LBB615:
 1900              	.LBB616:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1901              		.loc 3 574 0
 1902 01e7 48C74010 		movq	$_ZN15Fl_File_Chooser12cb_newButtonEP9Fl_ButtonPv, 16(%rax)
 1902      00000000 
 1903              	.LVL191:
 1904              	.LBE616:
 1905              	.LBE615:
 1906              		.loc 1 194 0
 1907 01ef E8000000 		call	_ZN9Fl_Widget7tooltipEPKc
 1907      00
 1908              	.LVL192:
 1909              	.LBE597:
 1910              		.loc 1 196 0
 1911 01f4 4889EF   		movq	%rbp, %rdi
 1912 01f7 E8000000 		call	_ZN8Fl_Group3endEv
 1912      00
 1913              	.LVL193:
 1914              	.LBE620:
 1915              	.LBB621:
 1916              		.loc 1 198 0
 1917 01fc BFA00000 		movl	$160, %edi
 1917      00
 1918 0201 E8000000 		call	_Znwm
 1918      00
 1919              	.LVL194:
 1920 0206 4531C9   		xorl	%r9d, %r9d
 1921 0209 4889C5   		movq	%rax, %rbp
 1922              	.LVL195:
 1923 020c 41B8E100 		movl	$225, %r8d
 1923      0000
 1924 0212 B9D60100 		movl	$470, %ecx
 1924      00
 1925 0217 BA2D0000 		movl	$45, %edx
 1925      00
 1926 021c BE0A0000 		movl	$10, %esi
 1926      00
 1927 0221 4889C7   		movq	%rax, %rdi
 1928 0224 E8000000 		call	_ZN7Fl_TileC1EiiiiPKc
 1928      00
 1929              	.LVL196:
 1930              	.LBB622:
 1931              	.LBB623:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1932              		.loc 3 574 0
 1933 0229 48C74510 		movq	$_ZN15Fl_File_Chooser3cb_EP7Fl_TilePv, 16(%rbp)
 1933      00000000 
 1934              	.LVL197:
 1935              	.LBE623:
 1936              	.LBE622:
 1937              		.loc 1 200 0
 1938 0231 BFB80200 		movl	$696, %edi
 1938      00
 1939 0236 E8000000 		call	_Znwm
 1939      00
 1940              	.LVL198:
 1941 023b 4531C9   		xorl	%r9d, %r9d
 1942 023e 4989C6   		movq	%rax, %r14
 1943              	.LVL199:
 1944 0241 41B8E100 		movl	$225, %r8d
 1944      0000
 1945 0247 B9270100 		movl	$295, %ecx
 1945      00
 1946 024c BA2D0000 		movl	$45, %edx
 1946      00
 1947 0251 BE0A0000 		movl	$10, %esi
 1947      00
 1948 0256 4889C7   		movq	%rax, %rdi
 1949 0259 E8000000 		call	_ZN15Fl_File_BrowserC1EiiiiPKc
 1949      00
 1950              	.LVL200:
 1951              		.loc 1 203 0
 1952 025e 4C89F7   		movq	%r14, %rdi
 1953              		.loc 1 200 0
 1954 0261 4C89B338 		movq	%r14, 6200(%rbx)
 1954      180000
 1955              	.LVL201:
 1956              	.LBB624:
 1957              	.LBB625:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1958              		.loc 3 279 0
 1959 0268 41C6466C 		movb	$2, 108(%r14)
 1959      02
 1960              	.LVL202:
 1961              	.LBE625:
 1962              	.LBE624:
 1963              	.LBB626:
 1964              	.LBB627:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1965              		.loc 3 574 0
 1966 026d 49C74610 		movq	$_ZN15Fl_File_Chooser11cb_fileListEP15Fl_File_BrowserPv, 16(%r14)
 1966      00000000 
 1967              	.LVL203:
 1968              	.LBE627:
 1969              	.LBE626:
 1970              		.loc 1 203 0
 1971 0275 E8000000 		call	_ZNK9Fl_Widget6windowEv
 1971      00
 1972              	.LVL204:
 1973 027a 31D2     		xorl	%edx, %edx
 1974 027c 4C89F6   		movq	%r14, %rsi
 1975 027f 4889C7   		movq	%rax, %rdi
 1976 0282 E8000000 		call	_ZN9Fl_Window7hotspotEPK9Fl_Widgeti
 1976      00
 1977              	.LVL205:
 1978              		.loc 1 205 0
 1979 0287 BF780000 		movl	$120, %edi
 1979      00
 1980 028c E8000000 		call	_Znwm
 1980      00
 1981              	.LVL206:
 1982 0291 41B90000 		movl	$.LC46, %r9d
 1982      0000
 1983 0297 4989C6   		movq	%rax, %r14
 1984              	.LVL207:
 1985 029a 41B8E100 		movl	$225, %r8d
 1985      0000
 1986 02a0 B9AF0000 		movl	$175, %ecx
 1986      00
 1987 02a5 BA2D0000 		movl	$45, %edx
 1987      00
 1988 02aa BE310100 		movl	$305, %esi
 1988      00
 1989 02af 4889C7   		movq	%rax, %rdi
 1990 02b2 E8000000 		call	_ZN6Fl_BoxC1EiiiiPKc
 1990      00
 1991              	.LVL208:
 1992              		.loc 1 210 0
 1993 02b7 4889EF   		movq	%rbp, %rdi
 1994              		.loc 1 205 0
 1995 02ba 4C89B340 		movq	%r14, 6208(%rbx)
 1995      180000
 1996              	.LVL209:
 1997              	.LBB628:
 1998              	.LBB629:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1999              		.loc 3 372 0
 2000 02c1 41C6466E 		movb	$3, 110(%r14)
 2000      03
 2001              	.LVL210:
 2002              	.LBE629:
 2003              	.LBE628:
 2004              	.LBB630:
 2005              	.LBB631:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2006              		.loc 3 508 0
 2007 02c6 41C7464C 		movl	$100, 76(%r14)
 2007      64000000 
 2008              	.LVL211:
 2009              	.LBE631:
 2010              	.LBE630:
 2011              	.LBB632:
 2012              	.LBB633:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2013              		.loc 3 357 0
 2014 02ce 41C74654 		movl	$80, 84(%r14)
 2014      50000000 
 2015              	.LVL212:
 2016              	.LBE633:
 2017              	.LBE632:
 2018              		.loc 1 210 0
 2019 02d6 E8000000 		call	_ZN8Fl_Group3endEv
 2019      00
 2020              	.LVL213:
 2021              		.loc 1 211 0
 2022 02db E8000000 		call	_ZN8Fl_Group7currentEv
 2022      00
 2023              	.LVL214:
 2024              	.LBE621:
 2025              	.LBB636:
 2026              		.loc 1 213 0
 2027 02e0 BFA00000 		movl	$160, %edi
 2027      00
 2028              	.LBE636:
 2029              	.LBB678:
 2030              	.LBB634:
 2031              	.LBB635:
 2032              		.loc 2 148 0
 2033 02e5 4889A888 		movq	%rbp, 136(%rax)
 2033      000000
 2034              	.LVL215:
 2035              	.LBE635:
 2036              	.LBE634:
 2037              	.LBE678:
 2038              	.LBB679:
 2039              		.loc 1 213 0
 2040 02ec E8000000 		call	_Znwm
 2040      00
 2041              	.LVL216:
 2042 02f1 4531C9   		xorl	%r9d, %r9d
 2043 02f4 41B85F00 		movl	$95, %r8d
 2043      0000
 2044 02fa B9D60100 		movl	$470, %ecx
 2044      00
 2045 02ff BA130100 		movl	$275, %edx
 2045      00
 2046 0304 BE0A0000 		movl	$10, %esi
 2046      00
 2047 0309 4889C7   		movq	%rax, %rdi
 2048 030c 4889C5   		movq	%rax, %rbp
 2049              	.LVL217:
 2050 030f E8000000 		call	_ZN8Fl_GroupC1EiiiiPKc
 2050      00
 2051              	.LVL218:
 2052              	.LBB637:
 2053              		.loc 1 214 0
 2054 0314 BFA00000 		movl	$160, %edi
 2054      00
 2055 0319 E8000000 		call	_Znwm
 2055      00
 2056              	.LVL219:
 2057 031e 4531C9   		xorl	%r9d, %r9d
 2058 0321 41B81400 		movl	$20, %r8d
 2058      0000
 2059 0327 B9D60100 		movl	$470, %ecx
 2059      00
 2060 032c BA130100 		movl	$275, %edx
 2060      00
 2061 0331 BE0A0000 		movl	$10, %esi
 2061      00
 2062 0336 4889C7   		movq	%rax, %rdi
 2063 0339 4989C6   		movq	%rax, %r14
 2064              	.LVL220:
 2065 033c E8000000 		call	_ZN8Fl_GroupC1EiiiiPKc
 2065      00
 2066              	.LVL221:
 2067              		.loc 1 215 0
 2068 0341 BF800000 		movl	$128, %edi
 2068      00
 2069 0346 E8000000 		call	_Znwm
 2069      00
 2070              	.LVL222:
 2071 034b 41B90000 		movl	$.LC47, %r9d
 2071      0000
 2072 0351 4989C7   		movq	%rax, %r15
 2073 0354 41B81400 		movl	$20, %r8d
 2073      0000
 2074 035a B9490000 		movl	$73, %ecx
 2074      00
 2075 035f BA130100 		movl	$275, %edx
 2075      00
 2076 0364 4889C7   		movq	%rax, %rdi
 2077 0367 BE0A0000 		movl	$10, %esi
 2077      00
 2078 036c E8000000 		call	_ZN15Fl_Check_ButtonC1EiiiiPKc
 2078      00
 2079              	.LVL223:
 2080              		.loc 1 218 0
 2081 0371 4C89FF   		movq	%r15, %rdi
 2082              		.loc 1 215 0
 2083 0374 4C89BB48 		movq	%r15, 6216(%rbx)
 2083      180000
 2084              	.LVL224:
 2085              	.LBB638:
 2086              	.LBB639:
 2087              		.file 7 "fltk-1.3.4-1/FL/Fl_Button.H"
   1:fltk-1.3.4-1/FL/Fl_Button.H **** //
   2:fltk-1.3.4-1/FL/Fl_Button.H **** // "$Id: Fl_Button.H 10386 2014-10-19 20:17:17Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Button.H **** //
   4:fltk-1.3.4-1/FL/Fl_Button.H **** // Button header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Button.H **** //
   6:fltk-1.3.4-1/FL/Fl_Button.H **** // Copyright 1998-2014 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Button.H **** //
   8:fltk-1.3.4-1/FL/Fl_Button.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Button.H **** // the file "COPYING" which should have been included with this file. If this
  10:fltk-1.3.4-1/FL/Fl_Button.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Button.H **** //
  12:fltk-1.3.4-1/FL/Fl_Button.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Button.H **** //
  14:fltk-1.3.4-1/FL/Fl_Button.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Button.H **** //
  16:fltk-1.3.4-1/FL/Fl_Button.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Button.H **** //
  18:fltk-1.3.4-1/FL/Fl_Button.H **** 
  19:fltk-1.3.4-1/FL/Fl_Button.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Button.H ****    Fl_Button widget . */
  21:fltk-1.3.4-1/FL/Fl_Button.H **** 
  22:fltk-1.3.4-1/FL/Fl_Button.H **** #ifndef Fl_Button_H
  23:fltk-1.3.4-1/FL/Fl_Button.H **** #define Fl_Button_H
  24:fltk-1.3.4-1/FL/Fl_Button.H **** 
  25:fltk-1.3.4-1/FL/Fl_Button.H **** #ifndef Fl_Widget_H
  26:fltk-1.3.4-1/FL/Fl_Button.H **** #include "Fl_Widget.H"
  27:fltk-1.3.4-1/FL/Fl_Button.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Button.H **** 
  29:fltk-1.3.4-1/FL/Fl_Button.H **** // values for type()
  30:fltk-1.3.4-1/FL/Fl_Button.H **** #define FL_NORMAL_BUTTON	0   /**< value() will be set to 1 during the press of the button and
  31:fltk-1.3.4-1/FL/Fl_Button.H ****                                          reverts back to 0 when the button is released */
  32:fltk-1.3.4-1/FL/Fl_Button.H **** #define FL_TOGGLE_BUTTON	1   ///< value() toggles between 0 and 1 at every click of the button
  33:fltk-1.3.4-1/FL/Fl_Button.H **** #define FL_RADIO_BUTTON		(FL_RESERVED_TYPE+2) /**< is set to 1 at button press, and all other
  34:fltk-1.3.4-1/FL/Fl_Button.H **** 				         buttons in the same group with <tt>type() == FL_RADIO_BUTTON</tt>
  35:fltk-1.3.4-1/FL/Fl_Button.H **** 				         are set to zero.*/
  36:fltk-1.3.4-1/FL/Fl_Button.H **** #define FL_HIDDEN_BUTTON	3   ///< for Forms compatibility
  37:fltk-1.3.4-1/FL/Fl_Button.H **** 
  38:fltk-1.3.4-1/FL/Fl_Button.H **** extern FL_EXPORT Fl_Shortcut fl_old_shortcut(const char*);
  39:fltk-1.3.4-1/FL/Fl_Button.H **** 
  40:fltk-1.3.4-1/FL/Fl_Button.H **** class Fl_Widget_Tracker;
  41:fltk-1.3.4-1/FL/Fl_Button.H **** 
  42:fltk-1.3.4-1/FL/Fl_Button.H **** /**
  43:fltk-1.3.4-1/FL/Fl_Button.H ****   \class Fl_Button
  44:fltk-1.3.4-1/FL/Fl_Button.H ****   \brief Buttons generate callbacks when they are clicked by the user.
  45:fltk-1.3.4-1/FL/Fl_Button.H **** 
  46:fltk-1.3.4-1/FL/Fl_Button.H ****   You control exactly when and how by changing the values for type() and
  47:fltk-1.3.4-1/FL/Fl_Button.H ****   when().  Buttons can also generate callbacks in response to \c FL_SHORTCUT
  48:fltk-1.3.4-1/FL/Fl_Button.H ****   events.  The button can either have an explicit shortcut(int s) value or a
  49:fltk-1.3.4-1/FL/Fl_Button.H ****   letter shortcut can be indicated in the label() with an '\&' character
  50:fltk-1.3.4-1/FL/Fl_Button.H ****   before it.  For the label shortcut it does not matter if \e Alt is held
  51:fltk-1.3.4-1/FL/Fl_Button.H ****   down, but if you have an input field in the same window, the user will have
  52:fltk-1.3.4-1/FL/Fl_Button.H ****   to hold down the \e Alt key so that the input field does not eat the event
  53:fltk-1.3.4-1/FL/Fl_Button.H ****   first as an \c FL_KEYBOARD event.
  54:fltk-1.3.4-1/FL/Fl_Button.H **** 
  55:fltk-1.3.4-1/FL/Fl_Button.H ****   \todo Refactor the doxygen comments for Fl_Button type() documentation.
  56:fltk-1.3.4-1/FL/Fl_Button.H **** 
  57:fltk-1.3.4-1/FL/Fl_Button.H ****   For an Fl_Button object, the type() call returns one of:
  58:fltk-1.3.4-1/FL/Fl_Button.H ****   \li \c FL_NORMAL_BUTTON (0): value() remains unchanged after button press.
  59:fltk-1.3.4-1/FL/Fl_Button.H ****   \li \c FL_TOGGLE_BUTTON: value() is inverted after button press.
  60:fltk-1.3.4-1/FL/Fl_Button.H ****   \li \c FL_RADIO_BUTTON: value() is set to 1 after button press, and all other
  61:fltk-1.3.4-1/FL/Fl_Button.H ****          buttons in the current group with <tt>type() == FL_RADIO_BUTTON</tt>
  62:fltk-1.3.4-1/FL/Fl_Button.H **** 	 are set to zero.
  63:fltk-1.3.4-1/FL/Fl_Button.H **** 
  64:fltk-1.3.4-1/FL/Fl_Button.H ****   \todo Refactor the doxygen comments for Fl_Button when() documentation.
  65:fltk-1.3.4-1/FL/Fl_Button.H **** 
  66:fltk-1.3.4-1/FL/Fl_Button.H ****   For an Fl_Button object, the following when() values are useful, the default
  67:fltk-1.3.4-1/FL/Fl_Button.H ****   being \c FL_WHEN_RELEASE:
  68:fltk-1.3.4-1/FL/Fl_Button.H ****   \li \c 0: The callback is not done, instead changed() is turned on.
  69:fltk-1.3.4-1/FL/Fl_Button.H ****   \li \c FL_WHEN_RELEASE: The callback is done after the user successfully
  70:fltk-1.3.4-1/FL/Fl_Button.H ****          clicks the button, or when a shortcut is typed.
  71:fltk-1.3.4-1/FL/Fl_Button.H ****   \li \c FL_WHEN_CHANGED: The callback is done each time the value() changes
  72:fltk-1.3.4-1/FL/Fl_Button.H ****          (when the user pushes and releases the button, and as the mouse is
  73:fltk-1.3.4-1/FL/Fl_Button.H **** 	 dragged around in and out of the button).
  74:fltk-1.3.4-1/FL/Fl_Button.H **** */
  75:fltk-1.3.4-1/FL/Fl_Button.H **** 
  76:fltk-1.3.4-1/FL/Fl_Button.H **** class FL_EXPORT Fl_Button : public Fl_Widget {
  77:fltk-1.3.4-1/FL/Fl_Button.H **** 
  78:fltk-1.3.4-1/FL/Fl_Button.H ****   int shortcut_;
  79:fltk-1.3.4-1/FL/Fl_Button.H ****   char value_;
  80:fltk-1.3.4-1/FL/Fl_Button.H ****   char oldval;
  81:fltk-1.3.4-1/FL/Fl_Button.H ****   uchar down_box_;
  82:fltk-1.3.4-1/FL/Fl_Button.H **** 
  83:fltk-1.3.4-1/FL/Fl_Button.H **** protected:
  84:fltk-1.3.4-1/FL/Fl_Button.H **** 
  85:fltk-1.3.4-1/FL/Fl_Button.H ****   static Fl_Widget_Tracker *key_release_tracker;
  86:fltk-1.3.4-1/FL/Fl_Button.H ****   static void key_release_timeout(void*);
  87:fltk-1.3.4-1/FL/Fl_Button.H ****   void simulate_key_action();
  88:fltk-1.3.4-1/FL/Fl_Button.H **** 
  89:fltk-1.3.4-1/FL/Fl_Button.H ****   virtual void draw();
  90:fltk-1.3.4-1/FL/Fl_Button.H **** 
  91:fltk-1.3.4-1/FL/Fl_Button.H **** public:
  92:fltk-1.3.4-1/FL/Fl_Button.H **** 
  93:fltk-1.3.4-1/FL/Fl_Button.H ****   virtual int handle(int);
  94:fltk-1.3.4-1/FL/Fl_Button.H **** 
  95:fltk-1.3.4-1/FL/Fl_Button.H ****   Fl_Button(int X, int Y, int W, int H, const char *L = 0);
  96:fltk-1.3.4-1/FL/Fl_Button.H **** 
  97:fltk-1.3.4-1/FL/Fl_Button.H ****   int value(int v);
  98:fltk-1.3.4-1/FL/Fl_Button.H **** 
  99:fltk-1.3.4-1/FL/Fl_Button.H ****   /**
 100:fltk-1.3.4-1/FL/Fl_Button.H ****     Returns the current value of the button (0 or 1).
 101:fltk-1.3.4-1/FL/Fl_Button.H ****    */
 102:fltk-1.3.4-1/FL/Fl_Button.H ****   char value() const {return value_;}
 103:fltk-1.3.4-1/FL/Fl_Button.H **** 
 104:fltk-1.3.4-1/FL/Fl_Button.H ****   /**
 105:fltk-1.3.4-1/FL/Fl_Button.H ****     Same as \c value(1).
 106:fltk-1.3.4-1/FL/Fl_Button.H ****     \see value(int v)
 107:fltk-1.3.4-1/FL/Fl_Button.H ****    */
 108:fltk-1.3.4-1/FL/Fl_Button.H ****   int set() {return value(1);}
 109:fltk-1.3.4-1/FL/Fl_Button.H **** 
 110:fltk-1.3.4-1/FL/Fl_Button.H ****   /**
 111:fltk-1.3.4-1/FL/Fl_Button.H ****     Same as \c value(0).
 112:fltk-1.3.4-1/FL/Fl_Button.H ****     \see value(int v)
 113:fltk-1.3.4-1/FL/Fl_Button.H ****    */
 114:fltk-1.3.4-1/FL/Fl_Button.H ****   int clear() {return value(0);}
 115:fltk-1.3.4-1/FL/Fl_Button.H **** 
 116:fltk-1.3.4-1/FL/Fl_Button.H ****   void setonly(); // this should only be called on FL_RADIO_BUTTONs
 117:fltk-1.3.4-1/FL/Fl_Button.H **** 
 118:fltk-1.3.4-1/FL/Fl_Button.H ****   /**
 119:fltk-1.3.4-1/FL/Fl_Button.H ****     Returns the current shortcut key for the button.
 120:fltk-1.3.4-1/FL/Fl_Button.H ****     \retval int
 121:fltk-1.3.4-1/FL/Fl_Button.H ****    */
 122:fltk-1.3.4-1/FL/Fl_Button.H ****   int shortcut() const {return shortcut_;}
 123:fltk-1.3.4-1/FL/Fl_Button.H **** 
 124:fltk-1.3.4-1/FL/Fl_Button.H ****   /**
 125:fltk-1.3.4-1/FL/Fl_Button.H ****     Sets the shortcut key to \c s.
 126:fltk-1.3.4-1/FL/Fl_Button.H ****     Setting this overrides the use of '\&' in the label().
 127:fltk-1.3.4-1/FL/Fl_Button.H ****     The value is a bitwise OR of a key and a set of shift flags, for example:
 128:fltk-1.3.4-1/FL/Fl_Button.H ****     <tt>FL_ALT | 'a'</tt>, or
 129:fltk-1.3.4-1/FL/Fl_Button.H ****     <tt>FL_ALT | (FL_F + 10)</tt>, or just
 130:fltk-1.3.4-1/FL/Fl_Button.H ****     <tt>'a'</tt>.
 131:fltk-1.3.4-1/FL/Fl_Button.H ****     A value of 0 disables the shortcut.
 132:fltk-1.3.4-1/FL/Fl_Button.H **** 
 133:fltk-1.3.4-1/FL/Fl_Button.H ****     The key can be any value returned by Fl::event_key(), but will usually be
 134:fltk-1.3.4-1/FL/Fl_Button.H ****     an ASCII letter.  Use a lower-case letter unless you require the shift key
 135:fltk-1.3.4-1/FL/Fl_Button.H ****     to be held down.
 136:fltk-1.3.4-1/FL/Fl_Button.H **** 
 137:fltk-1.3.4-1/FL/Fl_Button.H ****     The shift flags can be any set of values accepted by Fl::event_state().
 138:fltk-1.3.4-1/FL/Fl_Button.H ****     If the bit is on, that shift key must be pushed.  Meta, Alt, Ctrl, and
 139:fltk-1.3.4-1/FL/Fl_Button.H ****     Shift must be off if they are not in the shift flags (zero for the other
 140:fltk-1.3.4-1/FL/Fl_Button.H ****     bits indicates a "don't care" setting).
 141:fltk-1.3.4-1/FL/Fl_Button.H ****     \param[in] s bitwise OR of key and shift flags
 142:fltk-1.3.4-1/FL/Fl_Button.H ****    */
 143:fltk-1.3.4-1/FL/Fl_Button.H ****   void shortcut(int s) {shortcut_ = s;}
 2088              		.loc 7 143 0
 2089 037b 41C74778 		movl	$524400, 120(%r15)
 2089      70000800 
 2090              	.LVL225:
 2091              	.LBE639:
 2092              	.LBE638:
 2093              	.LBB640:
 2094              	.LBB641:
 144:fltk-1.3.4-1/FL/Fl_Button.H **** 
 145:fltk-1.3.4-1/FL/Fl_Button.H ****   /**
 146:fltk-1.3.4-1/FL/Fl_Button.H ****     Returns the current down box type, which is drawn when value() is non-zero.
 147:fltk-1.3.4-1/FL/Fl_Button.H ****     \retval Fl_Boxtype
 148:fltk-1.3.4-1/FL/Fl_Button.H ****    */
 149:fltk-1.3.4-1/FL/Fl_Button.H ****   Fl_Boxtype down_box() const {return (Fl_Boxtype)down_box_;}
 150:fltk-1.3.4-1/FL/Fl_Button.H **** 
 151:fltk-1.3.4-1/FL/Fl_Button.H ****   /**
 152:fltk-1.3.4-1/FL/Fl_Button.H ****     Sets the down box type. The default value of 0 causes FLTK to figure out
 153:fltk-1.3.4-1/FL/Fl_Button.H ****     the correct matching down version of box().
 154:fltk-1.3.4-1/FL/Fl_Button.H **** 
 155:fltk-1.3.4-1/FL/Fl_Button.H ****     Some derived classes (e.g. Fl_Round_Button and Fl_Light_Button use
 156:fltk-1.3.4-1/FL/Fl_Button.H ****     down_box() for special purposes. See docs of these classes.
 157:fltk-1.3.4-1/FL/Fl_Button.H **** 
 158:fltk-1.3.4-1/FL/Fl_Button.H ****     \param[in] b down box type
 159:fltk-1.3.4-1/FL/Fl_Button.H ****    */
 160:fltk-1.3.4-1/FL/Fl_Button.H ****   void down_box(Fl_Boxtype b) {down_box_ = b;}
 2095              		.loc 7 160 0
 2096 0383 41C6477E 		movb	$3, 126(%r15)
 2096      03
 2097              	.LVL226:
 2098              	.LBE641:
 2099              	.LBE640:
 2100              		.loc 1 218 0
 2101 0388 BE010000 		movl	$1, %esi
 2101      00
 2102 038d E8000000 		call	_ZN9Fl_Button5valueEi
 2102      00
 2103              	.LVL227:
 2104              		.loc 1 219 0
 2105 0392 488B8348 		movq	6216(%rbx), %rax
 2105      180000
 2106              	.LVL228:
 2107              		.loc 1 220 0
 2108 0399 488B3500 		movq	_ZN15Fl_File_Chooser13preview_labelE(%rip), %rsi
 2108      000000
 2109              	.LBB642:
 2110              	.LBB643:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2111              		.loc 3 574 0
 2112 03a0 48C74010 		movq	$_ZN15Fl_File_Chooser16cb_previewButtonEP15Fl_Check_ButtonPv, 16(%rax)
 2112      00000000 
 2113              	.LVL229:
 2114              	.LBE643:
 2115              	.LBE642:
 2116              		.loc 1 220 0
 2117 03a8 488BBB48 		movq	6216(%rbx), %rdi
 2117      180000
 2118 03af E8000000 		call	_ZN9Fl_Widget5labelEPKc
 2118      00
 2119              	.LVL230:
 2120              		.loc 1 222 0
 2121 03b4 BF800000 		movl	$128, %edi
 2121      00
 2122 03b9 E8000000 		call	_Znwm
 2122      00
 2123              	.LVL231:
 2124 03be 41B90000 		movl	$.LC48, %r9d
 2124      0000
 2125 03c4 41B81400 		movl	$20, %r8d
 2125      0000
 2126 03ca B9A50000 		movl	$165, %ecx
 2126      00
 2127 03cf BA130100 		movl	$275, %edx
 2127      00
 2128 03d4 4889C7   		movq	%rax, %rdi
 2129 03d7 BE730000 		movl	$115, %esi
 2129      00
 2130 03dc 4989C7   		movq	%rax, %r15
 2131              	.LVL232:
 2132 03df E8000000 		call	_ZN15Fl_Check_ButtonC1EiiiiPKc
 2132      00
 2133              	.LVL233:
 2134              		.loc 1 225 0
 2135 03e4 488B3500 		movq	_ZN15Fl_File_Chooser12hidden_labelE(%rip), %rsi
 2135      000000
 2136 03eb 4C89FF   		movq	%r15, %rdi
 2137              		.loc 1 222 0
 2138 03ee 4C89BB50 		movq	%r15, 6224(%rbx)
 2138      180000
 2139              	.LVL234:
 2140              	.LBB644:
 2141              	.LBB645:
 2142              		.loc 7 160 0
 2143 03f5 41C6477E 		movb	$3, 126(%r15)
 2143      03
 2144              	.LVL235:
 2145              	.LBE645:
 2146              	.LBE644:
 2147              	.LBB646:
 2148              	.LBB647:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2149              		.loc 3 574 0
 2150 03fa 49C74710 		movq	$_ZN15Fl_File_Chooser19cb_showHiddenButtonEP15Fl_Check_ButtonPv, 16(%r15)
 2150      00000000 
 2151              	.LVL236:
 2152              	.LBE647:
 2153              	.LBE646:
 2154              		.loc 1 225 0
 2155 0402 E8000000 		call	_ZN9Fl_Widget5labelEPKc
 2155      00
 2156              	.LVL237:
 2157              	.LBB648:
 2158              		.loc 1 227 0
 2159 0407 BF780000 		movl	$120, %edi
 2159      00
 2160 040c E8000000 		call	_Znwm
 2160      00
 2161              	.LVL238:
 2162 0411 4531C9   		xorl	%r9d, %r9d
 2163 0414 41B81400 		movl	$20, %r8d
 2163      0000
 2164 041a B96D0100 		movl	$365, %ecx
 2164      00
 2165 041f BA130100 		movl	$275, %edx
 2165      00
 2166 0424 BE730000 		movl	$115, %esi
 2166      00
 2167 0429 4989C7   		movq	%rax, %r15
 2168              	.LVL239:
 2169 042c 4889C7   		movq	%rax, %rdi
 2170 042f E8000000 		call	_ZN6Fl_BoxC1EiiiiPKc
 2170      00
 2171              	.LVL240:
 2172              		.loc 1 228 0
 2173 0434 E8000000 		call	_ZN8Fl_Group7currentEv
 2173      00
 2174              	.LVL241:
 2175              	.LBE648:
 2176              		.loc 1 230 0
 2177 0439 4C89F7   		movq	%r14, %rdi
 2178              	.LBB651:
 2179              	.LBB649:
 2180              	.LBB650:
 2181              		.loc 2 148 0
 2182 043c 4C89B888 		movq	%r15, 136(%rax)
 2182      000000
 2183              	.LVL242:
 2184              	.LBE650:
 2185              	.LBE649:
 2186              	.LBE651:
 2187              		.loc 1 230 0
 2188 0443 E8000000 		call	_ZN8Fl_Group3endEv
 2188      00
 2189              	.LVL243:
 2190              	.LBE637:
 2191              		.loc 1 232 0
 2192 0448 BF600200 		movl	$608, %edi
 2192      00
 2193 044d E8000000 		call	_Znwm
 2193      00
 2194              	.LVL244:
 2195 0452 4531C9   		xorl	%r9d, %r9d
 2196 0455 4989C6   		movq	%rax, %r14
 2197              	.LVL245:
 2198 0458 41B82300 		movl	$35, %r8d
 2198      0000
 2199 045e B96D0100 		movl	$365, %ecx
 2199      00
 2200 0463 BA2C0100 		movl	$300, %edx
 2200      00
 2201 0468 BE730000 		movl	$115, %esi
 2201      00
 2202 046d 4889C7   		movq	%rax, %rdi
 2203 0470 E8000000 		call	_ZN13Fl_File_InputC1EiiiiPKc
 2203      00
 2204              	.LVL246:
 2205 0475 4C89B358 		movq	%r14, 6232(%rbx)
 2205      180000
 2206              	.LVL247:
 2207              	.LBB652:
 2208              	.LBB653:
 496:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2209              		.loc 3 496 0
 2210 047c 41C74648 		movl	$1, 72(%r14)
 2210      01000000 
 2211              	.LVL248:
 2212              	.LBE653:
 2213              	.LBE652:
 2214              	.LBB654:
 2215              	.LBB655:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2216              		.loc 3 574 0
 2217 0484 49C74610 		movq	$_ZN15Fl_File_Chooser11cb_fileNameEP13Fl_File_InputPv, 16(%r14)
 2217      00000000 
 2218              	.LVL249:
 2219              	.LBE655:
 2220              	.LBE654:
 2221              	.LBB656:
 2222              	.LBB657:
 654:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2223              		.loc 3 654 0
 2224 048c 41C6466F 		movb	$8, 111(%r14)
 2224      08
 2225              	.LVL250:
 2226              	.LBE657:
 2227              	.LBE656:
 2228              		.loc 1 236 0
 2229 0491 E8000000 		call	_ZN8Fl_Group7currentEv
 2229      00
 2230              	.LVL251:
 2231              	.LBB658:
 2232              	.LBB659:
 2233              		.loc 2 148 0
 2234 0496 4C89B088 		movq	%r14, 136(%rax)
 2234      000000
 2235              	.LVL252:
 2236              	.LBE659:
 2237              	.LBE658:
 2238              		.loc 1 237 0
 2239 049d 488B8358 		movq	6232(%rbx), %rax
 2239      180000
 2240              	.LVL253:
 2241              	.LBB660:
 2242              		.loc 1 239 0
 2243 04a4 BF780000 		movl	$120, %edi
 2243      00
 2244              	.LBE660:
 2245              	.LBB665:
 2246              	.LBB666:
 654:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2247              		.loc 3 654 0
 2248 04a9 C6406F0B 		movb	$11, 111(%rax)
 2249              	.LVL254:
 2250              	.LBE666:
 2251              	.LBE665:
 2252              	.LBB667:
 2253              		.loc 1 239 0
 2254 04ad E8000000 		call	_Znwm
 2254      00
 2255              	.LVL255:
 2256 04b2 41B90000 		movl	$.LC49, %r9d
 2256      0000
 2257 04b8 41B81900 		movl	$25, %r8d
 2257      0000
 2258 04be B9690000 		movl	$105, %ecx
 2258      00
 2259 04c3 BA360100 		movl	$310, %edx
 2259      00
 2260 04c8 4889C7   		movq	%rax, %rdi
 2261 04cb BE0A0000 		movl	$10, %esi
 2261      00
 2262 04d0 4989C6   		movq	%rax, %r14
 2263              	.LVL256:
 2264 04d3 E8000000 		call	_ZN6Fl_BoxC1EiiiiPKc
 2264      00
 2265              	.LVL257:
 2266              		.loc 1 242 0
 2267 04d8 488B3500 		movq	_ZN15Fl_File_Chooser14filename_labelE(%rip), %rsi
 2267      000000
 2268 04df 4C89F7   		movq	%r14, %rdi
 2269              	.LBB661:
 2270              	.LBB662:
 496:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2271              		.loc 3 496 0
 2272 04e2 41C74648 		movl	$1, 72(%r14)
 2272      01000000 
 2273              	.LVL258:
 2274              	.LBE662:
 2275              	.LBE661:
 2276              	.LBB663:
 2277              	.LBB664:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2278              		.loc 3 357 0
 2279 04ea 41C74654 		movl	$24, 84(%r14)
 2279      18000000 
 2280              	.LVL259:
 2281              	.LBE664:
 2282              	.LBE663:
 2283              		.loc 1 242 0
 2284 04f2 E8000000 		call	_ZN9Fl_Widget5labelEPKc
 2284      00
 2285              	.LVL260:
 2286              	.LBE667:
 2287              	.LBB668:
 2288              		.loc 1 244 0
 2289 04f7 BFA00000 		movl	$160, %edi
 2289      00
 2290 04fc E8000000 		call	_Znwm
 2290      00
 2291              	.LVL261:
 2292 0501 4531C9   		xorl	%r9d, %r9d
 2293 0504 41B81900 		movl	$25, %r8d
 2293      0000
 2294 050a B9D60100 		movl	$470, %ecx
 2294      00
 2295 050f BA590100 		movl	$345, %edx
 2295      00
 2296 0514 BE0A0000 		movl	$10, %esi
 2296      00
 2297 0519 4889C7   		movq	%rax, %rdi
 2298 051c 4989C6   		movq	%rax, %r14
 2299              	.LVL262:
 2300 051f E8000000 		call	_ZN8Fl_GroupC1EiiiiPKc
 2300      00
 2301              	.LVL263:
 2302              		.loc 1 245 0
 2303 0524 BF800000 		movl	$128, %edi
 2303      00
 2304 0529 E8000000 		call	_Znwm
 2304      00
 2305              	.LVL264:
 2306 052e 41B90000 		movl	$.LC50, %r9d
 2306      0000
 2307 0534 41B81900 		movl	$25, %r8d
 2307      0000
 2308 053a B9550000 		movl	$85, %ecx
 2308      00
 2309 053f BA590100 		movl	$345, %edx
 2309      00
 2310 0544 4889C7   		movq	%rax, %rdi
 2311 0547 BE390100 		movl	$313, %esi
 2311      00
 2312 054c 4989C7   		movq	%rax, %r15
 2313              	.LVL265:
 2314 054f E8000000 		call	_ZN16Fl_Return_ButtonC1EiiiiPKc
 2314      00
 2315              	.LVL266:
 2316              		.loc 1 247 0
 2317 0554 488B3500 		movq	fl_ok(%rip), %rsi
 2317      000000
 2318 055b 4C89FF   		movq	%r15, %rdi
 2319              		.loc 1 245 0
 2320 055e 4C89BB60 		movq	%r15, 6240(%rbx)
 2320      180000
 2321              	.LVL267:
 2322              	.LBB669:
 2323              	.LBB670:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2324              		.loc 3 574 0
 2325 0565 49C74710 		movq	$_ZN15Fl_File_Chooser11cb_okButtonEP16Fl_Return_ButtonPv, 16(%r15)
 2325      00000000 
 2326              	.LVL268:
 2327              	.LBE670:
 2328              	.LBE669:
 2329              		.loc 1 247 0
 2330 056d E8000000 		call	_ZN9Fl_Widget5labelEPKc
 2330      00
 2331              	.LVL269:
 2332              	.LBB671:
 2333              		.loc 1 249 0
 2334 0572 BF800000 		movl	$128, %edi
 2334      00
 2335 0577 E8000000 		call	_Znwm
 2335      00
 2336              	.LVL270:
 2337 057c 41B90000 		movl	$.LC51, %r9d
 2337      0000
 2338 0582 41B81900 		movl	$25, %r8d
 2338      0000
 2339 0588 B9480000 		movl	$72, %ecx
 2339      00
 2340 058d BA590100 		movl	$345, %edx
 2340      00
 2341 0592 4889C7   		movq	%rax, %rdi
 2342 0595 BE980100 		movl	$408, %esi
 2342      00
 2343 059a 4989C7   		movq	%rax, %r15
 2344              	.LVL271:
 2345 059d E8000000 		call	_ZN9Fl_ButtonC1EiiiiPKc
 2345      00
 2346              	.LVL272:
 2347              		.loc 1 251 0
 2348 05a2 488B3500 		movq	fl_cancel(%rip), %rsi
 2348      000000
 2349 05a9 4C89FF   		movq	%r15, %rdi
 2350              		.loc 1 249 0
 2351 05ac 4C89BB68 		movq	%r15, 6248(%rbx)
 2351      180000
 2352              	.LVL273:
 2353              	.LBB672:
 2354              	.LBB673:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2355              		.loc 3 574 0
 2356 05b3 49C74710 		movq	$_ZN15Fl_File_Chooser15cb_cancelButtonEP9Fl_ButtonPv, 16(%r15)
 2356      00000000 
 2357              	.LVL274:
 2358              	.LBE673:
 2359              	.LBE672:
 2360              		.loc 1 251 0
 2361 05bb E8000000 		call	_ZN9Fl_Widget5labelEPKc
 2361      00
 2362              	.LVL275:
 2363              	.LBE671:
 2364              	.LBB674:
 2365              		.loc 1 253 0
 2366 05c0 BF780000 		movl	$120, %edi
 2366      00
 2367 05c5 E8000000 		call	_Znwm
 2367      00
 2368              	.LVL276:
 2369 05ca 4531C9   		xorl	%r9d, %r9d
 2370 05cd 41B81900 		movl	$25, %r8d
 2370      0000
 2371 05d3 B91E0000 		movl	$30, %ecx
 2371      00
 2372 05d8 BA590100 		movl	$345, %edx
 2372      00
 2373 05dd BE0A0000 		movl	$10, %esi
 2373      00
 2374 05e2 4989C7   		movq	%rax, %r15
 2375              	.LVL277:
 2376 05e5 4889C7   		movq	%rax, %rdi
 2377 05e8 E8000000 		call	_ZN6Fl_BoxC1EiiiiPKc
 2377      00
 2378              	.LVL278:
 2379              		.loc 1 254 0
 2380 05ed E8000000 		call	_ZN8Fl_Group7currentEv
 2380      00
 2381              	.LVL279:
 2382              	.LBE674:
 2383              		.loc 1 256 0
 2384 05f2 4C89F7   		movq	%r14, %rdi
 2385              	.LBB677:
 2386              	.LBB675:
 2387              	.LBB676:
 2388              		.loc 2 148 0
 2389 05f5 4C89B888 		movq	%r15, 136(%rax)
 2389      000000
 2390              	.LVL280:
 2391              	.LBE676:
 2392              	.LBE675:
 2393              	.LBE677:
 2394              		.loc 1 256 0
 2395 05fc E8000000 		call	_ZN8Fl_Group3endEv
 2395      00
 2396              	.LVL281:
 2397              	.LBE668:
 2398              		.loc 1 258 0
 2399 0601 4889EF   		movq	%rbp, %rdi
 2400 0604 E8000000 		call	_ZN8Fl_Group3endEv
 2400      00
 2401              	.LVL282:
 2402              	.LBE679:
 2403              		.loc 1 260 0
 2404 0609 4D85ED   		testq	%r13, %r13
 2405 060c 740F     		je	.L81
 2406              		.loc 1 260 0 is_stmt 0 discriminator 1
 2407 060e 488BBB18 		movq	6168(%rbx), %rdi
 2407      180000
 2408 0615 4C89EE   		movq	%r13, %rsi
 2409 0618 E8000000 		call	_ZN9Fl_Window5labelEPKc
 2409      00
 2410              	.LVL283:
 2411              	.L81:
 2412              		.loc 1 261 0 is_stmt 1
 2413 061d 488B8318 		movq	6168(%rbx), %rax
 2413      180000
 2414              	.LVL284:
 2415              	.LBB680:
 2416              	.LBB681:
 2417              	.LBB682:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2418              		.loc 3 149 0
 2419 0624 81486000 		orl	$16384, 96(%rax)
 2419      400000
 2420              	.LVL285:
 2421              	.LBE682:
 2422              	.LBE681:
 2423              	.LBE680:
 2424              		.loc 1 262 0
 2425 062b 488BBB18 		movq	6168(%rbx), %rdi
 2425      180000
 2426 0632 E8000000 		call	_ZN8Fl_Group3endEv
 2426      00
 2427              	.LVL286:
 2428              	.LBE684:
 2429              	.LBB685:
 2430              		.loc 1 264 0
 2431 0637 BFF00000 		movl	$240, %edi
 2431      00
 2432 063c E8000000 		call	_Znwm
 2432      00
 2433              	.LVL287:
 2434 0641 B9000000 		movl	$.LC52, %ecx
 2434      00
 2435 0646 4889C5   		movq	%rax, %rbp
 2436              	.LVL288:
 2437 0649 BA960000 		movl	$150, %edx
 2437      00
 2438 064e BE630100 		movl	$355, %esi
 2438      00
 2439 0653 4889C7   		movq	%rax, %rdi
 2440 0656 E8000000 		call	_ZN16Fl_Double_WindowC1EiiPKc
 2440      00
 2441              	.LVL289:
 2442 065b 4889AB70 		movq	%rbp, 6256(%rbx)
 2442      180000
 2443              	.LVL290:
 2444              	.LBB686:
 2445              	.LBB687:
 599:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2446              		.loc 3 599 0
 2447 0662 48895D18 		movq	%rbx, 24(%rbp)
 2448              	.LVL291:
 2449              	.LBE687:
 2450              	.LBE686:
 2451              		.loc 1 266 0
 2452 0666 BFB80200 		movl	$696, %edi
 2452      00
 2453 066b E8000000 		call	_Znwm
 2453      00
 2454              	.LVL292:
 2455 0670 4531C9   		xorl	%r9d, %r9d
 2456 0673 4889C5   		movq	%rax, %rbp
 2457              	.LVL293:
 2458 0676 41B85F00 		movl	$95, %r8d
 2458      0000
 2459 067c B92C0100 		movl	$300, %ecx
 2459      00
 2460 0681 BA0A0000 		movl	$10, %edx
 2460      00
 2461 0686 BE0A0000 		movl	$10, %esi
 2461      00
 2462 068b 4889C7   		movq	%rax, %rdi
 2463 068e E8000000 		call	_ZN15Fl_File_BrowserC1EiiiiPKc
 2463      00
 2464              	.LVL294:
 2465 0693 4889AB78 		movq	%rbp, 6264(%rbx)
 2465      180000
 2466              	.LVL295:
 2467              	.LBB688:
 2468              	.LBB689:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2469              		.loc 3 279 0
 2470 069a C6456C02 		movb	$2, 108(%rbp)
 2471              	.LVL296:
 2472              	.LBE689:
 2473              	.LBE688:
 2474              	.LBB690:
 2475              	.LBB691:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2476              		.loc 3 574 0
 2477 069e 48C74510 		movq	$_ZN15Fl_File_Chooser10cb_favListEP15Fl_File_BrowserPv, 16(%rbp)
 2477      00000000 
 2478              	.LVL297:
 2479              	.LBE691:
 2480              	.LBE690:
 2481              		.loc 1 269 0
 2482 06a6 E8000000 		call	_ZN8Fl_Group7currentEv
 2482      00
 2483              	.LVL298:
 2484              	.LBB692:
 2485              		.loc 1 271 0
 2486 06ab BFA00000 		movl	$160, %edi
 2486      00
 2487              	.LBE692:
 2488              	.LBB703:
 2489              	.LBB704:
 2490              		.loc 2 148 0
 2491 06b0 4889A888 		movq	%rbp, 136(%rax)
 2491      000000
 2492              	.LVL299:
 2493              	.LBE704:
 2494              	.LBE703:
 2495              	.LBB705:
 2496              		.loc 1 271 0
 2497 06b7 E8000000 		call	_Znwm
 2497      00
 2498              	.LVL300:
 2499 06bc 4531C9   		xorl	%r9d, %r9d
 2500 06bf 41B85F00 		movl	$95, %r8d
 2500      0000
 2501 06c5 B9190000 		movl	$25, %ecx
 2501      00
 2502 06ca BA0A0000 		movl	$10, %edx
 2502      00
 2503 06cf BE400100 		movl	$320, %esi
 2503      00
 2504 06d4 4889C7   		movq	%rax, %rdi
 2505 06d7 4989C5   		movq	%rax, %r13
 2506              	.LVL301:
 2507 06da E8000000 		call	_ZN8Fl_GroupC1EiiiiPKc
 2507      00
 2508              	.LVL302:
 2509              		.loc 1 272 0
 2510 06df BF800000 		movl	$128, %edi
 2510      00
 2511 06e4 E8000000 		call	_Znwm
 2511      00
 2512              	.LVL303:
 2513 06e9 41B90000 		movl	$.LC53, %r9d
 2513      0000
 2514 06ef 4889C5   		movq	%rax, %rbp
 2515              	.LVL304:
 2516 06f2 41B81900 		movl	$25, %r8d
 2516      0000
 2517 06f8 B9190000 		movl	$25, %ecx
 2517      00
 2518 06fd BA0A0000 		movl	$10, %edx
 2518      00
 2519 0702 BE400100 		movl	$320, %esi
 2519      00
 2520 0707 4889C7   		movq	%rax, %rdi
 2521 070a E8000000 		call	_ZN9Fl_ButtonC1EiiiiPKc
 2521      00
 2522              	.LVL305:
 2523 070f 4889AB80 		movq	%rbp, 6272(%rbx)
 2523      180000
 2524              	.LVL306:
 2525              	.LBB693:
 2526              	.LBB694:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2527              		.loc 3 574 0
 2528 0716 48C74510 		movq	$_ZN15Fl_File_Chooser14cb_favUpButtonEP9Fl_ButtonPv, 16(%rbp)
 2528      00000000 
 2529              	.LVL307:
 2530              	.LBE694:
 2531              	.LBE693:
 2532              		.loc 1 275 0
 2533 071e BF800000 		movl	$128, %edi
 2533      00
 2534 0723 E8000000 		call	_Znwm
 2534      00
 2535              	.LVL308:
 2536 0728 41B90000 		movl	$.LC54, %r9d
 2536      0000
 2537 072e 4889C5   		movq	%rax, %rbp
 2538              	.LVL309:
 2539 0731 41B81900 		movl	$25, %r8d
 2539      0000
 2540 0737 B9190000 		movl	$25, %ecx
 2540      00
 2541 073c BA2D0000 		movl	$45, %edx
 2541      00
 2542 0741 BE400100 		movl	$320, %esi
 2542      00
 2543 0746 4889C7   		movq	%rax, %rdi
 2544 0749 E8000000 		call	_ZN9Fl_ButtonC1EiiiiPKc
 2544      00
 2545              	.LVL310:
 2546 074e 4889AB88 		movq	%rbp, 6280(%rbx)
 2546      180000
 2547              	.LVL311:
 2548              	.LBB695:
 2549              	.LBB696:
 496:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2550              		.loc 3 496 0
 2551 0755 C7454801 		movl	$1, 72(%rbp)
 2551      000000
 2552              	.LVL312:
 2553              	.LBE696:
 2554              	.LBE695:
 2555              	.LBB697:
 2556              	.LBB698:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2557              		.loc 3 574 0
 2558 075c 48C74510 		movq	$_ZN15Fl_File_Chooser18cb_favDeleteButtonEP9Fl_ButtonPv, 16(%rbp)
 2558      00000000 
 2559              	.LVL313:
 2560              	.LBE698:
 2561              	.LBE697:
 2562              		.loc 1 278 0
 2563 0764 E8000000 		call	_ZN8Fl_Group7currentEv
 2563      00
 2564              	.LVL314:
 2565              		.loc 1 280 0
 2566 0769 BF800000 		movl	$128, %edi
 2566      00
 2567              	.LBB699:
 2568              	.LBB700:
 2569              		.loc 2 148 0
 2570 076e 4889A888 		movq	%rbp, 136(%rax)
 2570      000000
 2571              	.LVL315:
 2572              	.LBE700:
 2573              	.LBE699:
 2574              		.loc 1 280 0
 2575 0775 E8000000 		call	_Znwm
 2575      00
 2576              	.LVL316:
 2577 077a 41B90000 		movl	$.LC55, %r9d
 2577      0000
 2578 0780 4889C5   		movq	%rax, %rbp
 2579              	.LVL317:
 2580 0783 41B81900 		movl	$25, %r8d
 2580      0000
 2581 0789 B9190000 		movl	$25, %ecx
 2581      00
 2582 078e BA500000 		movl	$80, %edx
 2582      00
 2583 0793 BE400100 		movl	$320, %esi
 2583      00
 2584 0798 4889C7   		movq	%rax, %rdi
 2585 079b E8000000 		call	_ZN9Fl_ButtonC1EiiiiPKc
 2585      00
 2586              	.LVL318:
 2587              		.loc 1 283 0
 2588 07a0 4C89EF   		movq	%r13, %rdi
 2589              		.loc 1 280 0
 2590 07a3 4889AB90 		movq	%rbp, 6288(%rbx)
 2590      180000
 2591              	.LVL319:
 2592              	.LBB701:
 2593              	.LBB702:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2594              		.loc 3 574 0
 2595 07aa 48C74510 		movq	$_ZN15Fl_File_Chooser16cb_favDownButtonEP9Fl_ButtonPv, 16(%rbp)
 2595      00000000 
 2596              	.LVL320:
 2597              	.LBE702:
 2598              	.LBE701:
 2599              		.loc 1 283 0
 2600 07b2 E8000000 		call	_ZN8Fl_Group3endEv
 2600      00
 2601              	.LVL321:
 2602              	.LBE705:
 2603              	.LBB706:
 2604              		.loc 1 285 0
 2605 07b7 BFA00000 		movl	$160, %edi
 2605      00
 2606 07bc E8000000 		call	_Znwm
 2606      00
 2607              	.LVL322:
 2608 07c1 4531C9   		xorl	%r9d, %r9d
 2609 07c4 41B81D00 		movl	$29, %r8d
 2609      0000
 2610 07ca B94F0100 		movl	$335, %ecx
 2610      00
 2611 07cf BA710000 		movl	$113, %edx
 2611      00
 2612 07d4 BE0A0000 		movl	$10, %esi
 2612      00
 2613 07d9 4889C7   		movq	%rax, %rdi
 2614 07dc 4989C5   		movq	%rax, %r13
 2615              	.LVL323:
 2616 07df E8000000 		call	_ZN8Fl_GroupC1EiiiiPKc
 2616      00
 2617              	.LVL324:
 2618              		.loc 1 286 0
 2619 07e4 BF800000 		movl	$128, %edi
 2619      00
 2620 07e9 E8000000 		call	_Znwm
 2620      00
 2621              	.LVL325:
 2622 07ee 41B90000 		movl	$.LC51, %r9d
 2622      0000
 2623 07f4 41B81900 		movl	$25, %r8d
 2623      0000
 2624 07fa B9480000 		movl	$72, %ecx
 2624      00
 2625 07ff BA730000 		movl	$115, %edx
 2625      00
 2626 0804 4889C7   		movq	%rax, %rdi
 2627 0807 BE110100 		movl	$273, %esi
 2627      00
 2628 080c 4889C5   		movq	%rax, %rbp
 2629              	.LVL326:
 2630 080f E8000000 		call	_ZN9Fl_ButtonC1EiiiiPKc
 2630      00
 2631              	.LVL327:
 2632              		.loc 1 288 0
 2633 0814 488B3500 		movq	fl_cancel(%rip), %rsi
 2633      000000
 2634 081b 4889EF   		movq	%rbp, %rdi
 2635              		.loc 1 286 0
 2636 081e 4889AB98 		movq	%rbp, 6296(%rbx)
 2636      180000
 2637              	.LVL328:
 2638              	.LBB707:
 2639              	.LBB708:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2640              		.loc 3 574 0
 2641 0825 48C74510 		movq	$_ZN15Fl_File_Chooser18cb_favCancelButtonEP9Fl_ButtonPv, 16(%rbp)
 2641      00000000 
 2642              	.LVL329:
 2643              	.LBE708:
 2644              	.LBE707:
 2645              		.loc 1 288 0
 2646 082d E8000000 		call	_ZN9Fl_Widget5labelEPKc
 2646      00
 2647              	.LVL330:
 2648              		.loc 1 290 0
 2649 0832 BF800000 		movl	$128, %edi
 2649      00
 2650 0837 E8000000 		call	_Znwm
 2650      00
 2651              	.LVL331:
 2652 083c 41B90000 		movl	$.LC56, %r9d
 2652      0000
 2653 0842 41B81900 		movl	$25, %r8d
 2653      0000
 2654 0848 B94F0000 		movl	$79, %ecx
 2654      00
 2655 084d BA730000 		movl	$115, %edx
 2655      00
 2656 0852 4889C7   		movq	%rax, %rdi
 2657 0855 BEB50000 		movl	$181, %esi
 2657      00
 2658 085a 4889C5   		movq	%rax, %rbp
 2659              	.LVL332:
 2660 085d E8000000 		call	_ZN16Fl_Return_ButtonC1EiiiiPKc
 2660      00
 2661              	.LVL333:
 2662              		.loc 1 292 0
 2663 0862 488B3500 		movq	_ZN15Fl_File_Chooser10save_labelE(%rip), %rsi
 2663      000000
 2664 0869 4889EF   		movq	%rbp, %rdi
 2665              		.loc 1 290 0
 2666 086c 4889ABA0 		movq	%rbp, 6304(%rbx)
 2666      180000
 2667              	.LVL334:
 2668              	.LBB709:
 2669              	.LBB710:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 2670              		.loc 3 574 0
 2671 0873 48C74510 		movq	$_ZN15Fl_File_Chooser14cb_favOkButtonEP16Fl_Return_ButtonPv, 16(%rbp)
 2671      00000000 
 2672              	.LVL335:
 2673              	.LBE710:
 2674              	.LBE709:
 2675              		.loc 1 292 0
 2676 087b E8000000 		call	_ZN9Fl_Widget5labelEPKc
 2676      00
 2677              	.LVL336:
 2678              	.LBB711:
 2679              		.loc 1 294 0
 2680 0880 BF780000 		movl	$120, %edi
 2680      00
 2681 0885 E8000000 		call	_Znwm
 2681      00
 2682              	.LVL337:
 2683 088a 4531C9   		xorl	%r9d, %r9d
 2684 088d 41B81900 		movl	$25, %r8d
 2684      0000
 2685 0893 B9A10000 		movl	$161, %ecx
 2685      00
 2686 0898 BA730000 		movl	$115, %edx
 2686      00
 2687 089d 4889C5   		movq	%rax, %rbp
 2688              	.LVL338:
 2689 08a0 BE0A0000 		movl	$10, %esi
 2689      00
 2690 08a5 4889C7   		movq	%rax, %rdi
 2691 08a8 E8000000 		call	_ZN6Fl_BoxC1EiiiiPKc
 2691      00
 2692              	.LVL339:
 2693              		.loc 1 295 0
 2694 08ad E8000000 		call	_ZN8Fl_Group7currentEv
 2694      00
 2695              	.LVL340:
 2696              	.LBE711:
 2697              		.loc 1 297 0
 2698 08b2 4C89EF   		movq	%r13, %rdi
 2699              	.LBB714:
 2700              	.LBB712:
 2701              	.LBB713:
 2702              		.loc 2 148 0
 2703 08b5 4889A888 		movq	%rbp, 136(%rax)
 2703      000000
 2704              	.LVL341:
 2705              	.LBE713:
 2706              	.LBE712:
 2707              	.LBE714:
 2708              		.loc 1 297 0
 2709 08bc E8000000 		call	_ZN8Fl_Group3endEv
 2709      00
 2710              	.LVL342:
 2711              	.LBE706:
 2712              		.loc 1 299 0
 2713 08c1 488B3500 		movq	_ZN15Fl_File_Chooser22manage_favorites_labelE(%rip), %rsi
 2713      000000
 2714 08c8 488BBB70 		movq	6256(%rbx), %rdi
 2714      180000
 2715 08cf E8000000 		call	_ZN9Fl_Window5labelEPKc
 2715      00
 2716              	.LVL343:
 2717              		.loc 1 300 0
 2718 08d4 488B8370 		movq	6256(%rbx), %rax
 2718      180000
 2719              	.LVL344:
 2720              	.LBB715:
 2721              	.LBB716:
 2722              	.LBB717:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 2723              		.loc 3 149 0
 2724 08db 81486000 		orl	$16384, 96(%rax)
 2724      400000
 2725              	.LVL345:
 2726              	.LBE717:
 2727              	.LBE716:
 2728              	.LBE715:
 2729              		.loc 1 301 0
 2730 08e2 488BBB70 		movq	6256(%rbx), %rdi
 2730      180000
 2731              	.LVL346:
 2732              	.LBB718:
 2733              	.LBB719:
 2734              		.file 8 "fltk-1.3.4-1/FL/Fl_Window.H"
   1:fltk-1.3.4-1/FL/Fl_Window.H **** //
   2:fltk-1.3.4-1/FL/Fl_Window.H **** // "$Id: Fl_Window.H 10820 2015-07-27 18:13:46Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Window.H **** //
   4:fltk-1.3.4-1/FL/Fl_Window.H **** // Window header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Window.H **** //
   6:fltk-1.3.4-1/FL/Fl_Window.H **** // Copyright 1998-2012 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Window.H **** //
   8:fltk-1.3.4-1/FL/Fl_Window.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Window.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Window.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Window.H **** //
  12:fltk-1.3.4-1/FL/Fl_Window.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Window.H **** //
  14:fltk-1.3.4-1/FL/Fl_Window.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Window.H **** //
  16:fltk-1.3.4-1/FL/Fl_Window.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Window.H **** //
  18:fltk-1.3.4-1/FL/Fl_Window.H **** 
  19:fltk-1.3.4-1/FL/Fl_Window.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl_Window.H ****    Fl_Window widget . */
  21:fltk-1.3.4-1/FL/Fl_Window.H **** 
  22:fltk-1.3.4-1/FL/Fl_Window.H **** #ifndef Fl_Window_H
  23:fltk-1.3.4-1/FL/Fl_Window.H **** #define Fl_Window_H
  24:fltk-1.3.4-1/FL/Fl_Window.H **** 
  25:fltk-1.3.4-1/FL/Fl_Window.H **** #ifdef WIN32
  26:fltk-1.3.4-1/FL/Fl_Window.H **** #include <windows.h>
  27:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Window.H **** 
  29:fltk-1.3.4-1/FL/Fl_Window.H **** #include "Fl_Group.H"
  30:fltk-1.3.4-1/FL/Fl_Window.H **** #include "Fl_Bitmap.H"
  31:fltk-1.3.4-1/FL/Fl_Window.H **** #include <stdlib.h>
  32:fltk-1.3.4-1/FL/Fl_Window.H **** 
  33:fltk-1.3.4-1/FL/Fl_Window.H **** #define FL_WINDOW 0xF0		///< window type id all subclasses have type() >= this
  34:fltk-1.3.4-1/FL/Fl_Window.H **** #define FL_DOUBLE_WINDOW 0xF1   ///< double window type id
  35:fltk-1.3.4-1/FL/Fl_Window.H **** 
  36:fltk-1.3.4-1/FL/Fl_Window.H **** class Fl_X;
  37:fltk-1.3.4-1/FL/Fl_Window.H **** class Fl_RGB_Image;
  38:fltk-1.3.4-1/FL/Fl_Window.H **** 
  39:fltk-1.3.4-1/FL/Fl_Window.H **** 
  40:fltk-1.3.4-1/FL/Fl_Window.H **** /**
  41:fltk-1.3.4-1/FL/Fl_Window.H ****   This widget produces an actual window.  This can either be a main
  42:fltk-1.3.4-1/FL/Fl_Window.H ****   window, with a border and title and all the window management controls,
  43:fltk-1.3.4-1/FL/Fl_Window.H ****   or a "subwindow" inside a window.  This is controlled by whether or not
  44:fltk-1.3.4-1/FL/Fl_Window.H ****   the window has a parent().
  45:fltk-1.3.4-1/FL/Fl_Window.H **** 
  46:fltk-1.3.4-1/FL/Fl_Window.H ****   Once you create a window, you usually add children Fl_Widget
  47:fltk-1.3.4-1/FL/Fl_Window.H ****   's to it by using window->add(child) for each new widget.
  48:fltk-1.3.4-1/FL/Fl_Window.H ****   See Fl_Group for more information on how to add and remove children.
  49:fltk-1.3.4-1/FL/Fl_Window.H **** 
  50:fltk-1.3.4-1/FL/Fl_Window.H ****   There are several subclasses of Fl_Window that provide
  51:fltk-1.3.4-1/FL/Fl_Window.H ****   double-buffering, overlay, menu, and OpenGL support.
  52:fltk-1.3.4-1/FL/Fl_Window.H **** 
  53:fltk-1.3.4-1/FL/Fl_Window.H ****   The window's callback is done if the user tries to close a window
  54:fltk-1.3.4-1/FL/Fl_Window.H ****   using the window manager and Fl::modal() is zero or equal to the
  55:fltk-1.3.4-1/FL/Fl_Window.H ****   window. Fl_Window has a default callback that calls Fl_Window::hide().
  56:fltk-1.3.4-1/FL/Fl_Window.H **** */
  57:fltk-1.3.4-1/FL/Fl_Window.H **** class FL_EXPORT Fl_Window : public Fl_Group {
  58:fltk-1.3.4-1/FL/Fl_Window.H **** 
  59:fltk-1.3.4-1/FL/Fl_Window.H ****   static char *default_xclass_;
  60:fltk-1.3.4-1/FL/Fl_Window.H ****   // Note: we must use separate statements for each of the following 8 variables,
  61:fltk-1.3.4-1/FL/Fl_Window.H ****   // with the static attribute, otherwise MS VC++ 2008/2010 complains :-(
  62:fltk-1.3.4-1/FL/Fl_Window.H ****   // AlbrechtS 04/2012
  63:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10301
  64:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  65:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  66:fltk-1.3.4-1/FL/Fl_Window.H ****   int no_fullscreen_x;
  67:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10301
  68:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  69:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  70:fltk-1.3.4-1/FL/Fl_Window.H ****   int no_fullscreen_y;
  71:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10301
  72:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  73:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  74:fltk-1.3.4-1/FL/Fl_Window.H ****   int no_fullscreen_w;
  75:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10301
  76:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  77:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  78:fltk-1.3.4-1/FL/Fl_Window.H ****   int no_fullscreen_h;
  79:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
  80:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  81:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  82:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_top;
  83:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
  84:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  85:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  86:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_bottom;
  87:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
  88:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  89:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  90:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_left;
  91:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
  92:fltk-1.3.4-1/FL/Fl_Window.H ****   static // when these members are static, ABI compatibility with 1.3.0 is respected
  93:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
  94:fltk-1.3.4-1/FL/Fl_Window.H ****   int fullscreen_screen_right;
  95:fltk-1.3.4-1/FL/Fl_Window.H **** 
  96:fltk-1.3.4-1/FL/Fl_Window.H ****   friend class Fl_X;
  97:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_X *i; // points at the system-specific stuff
  98:fltk-1.3.4-1/FL/Fl_Window.H **** 
  99:fltk-1.3.4-1/FL/Fl_Window.H ****   struct icon_data {
 100:fltk-1.3.4-1/FL/Fl_Window.H ****     const void *legacy_icon;
 101:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_RGB_Image **icons;
 102:fltk-1.3.4-1/FL/Fl_Window.H ****     int count;
 103:fltk-1.3.4-1/FL/Fl_Window.H **** #ifdef WIN32
 104:fltk-1.3.4-1/FL/Fl_Window.H ****     HICON big_icon;
 105:fltk-1.3.4-1/FL/Fl_Window.H ****     HICON small_icon;
 106:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 107:fltk-1.3.4-1/FL/Fl_Window.H ****   };
 108:fltk-1.3.4-1/FL/Fl_Window.H **** 
 109:fltk-1.3.4-1/FL/Fl_Window.H ****   const char* iconlabel_;
 110:fltk-1.3.4-1/FL/Fl_Window.H ****   char* xclass_;
 111:fltk-1.3.4-1/FL/Fl_Window.H ****   struct icon_data *icon_;
 112:fltk-1.3.4-1/FL/Fl_Window.H ****   // size_range stuff:
 113:fltk-1.3.4-1/FL/Fl_Window.H ****   int minw, minh, maxw, maxh;
 114:fltk-1.3.4-1/FL/Fl_Window.H ****   int dw, dh, aspect;
 115:fltk-1.3.4-1/FL/Fl_Window.H ****   uchar size_range_set;
 116:fltk-1.3.4-1/FL/Fl_Window.H ****   // cursor stuff
 117:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_Cursor cursor_default;
 118:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303
 119:fltk-1.3.4-1/FL/Fl_Window.H ****   // legacy, not used
 120:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_Color cursor_fg, cursor_bg;
 121:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 122:fltk-1.3.4-1/FL/Fl_Window.H ****   
 123:fltk-1.3.4-1/FL/Fl_Window.H **** protected:
 124:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Data supporting a non-rectangular window shape */
 125:fltk-1.3.4-1/FL/Fl_Window.H ****   struct shape_data_type {
 126:fltk-1.3.4-1/FL/Fl_Window.H ****     int lw_; ///<  width of shape image
 127:fltk-1.3.4-1/FL/Fl_Window.H ****     int lh_; ///<  height of shape image
 128:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Image* shape_; ///<  shape image
 129:fltk-1.3.4-1/FL/Fl_Window.H **** #if defined(__APPLE__)
 130:fltk-1.3.4-1/FL/Fl_Window.H ****     typedef struct CGImage* CGImageRef;
 131:fltk-1.3.4-1/FL/Fl_Window.H ****     CGImageRef mask;
 132:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 133:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Bitmap *todelete_; ///<  auxiliary bitmap image
 134:fltk-1.3.4-1/FL/Fl_Window.H ****   };
 135:fltk-1.3.4-1/FL/Fl_Window.H **** 
 136:fltk-1.3.4-1/FL/Fl_Window.H **** #if FLTK_ABI_VERSION < 10303 && !defined(FL_DOXYGEN)
 137:fltk-1.3.4-1/FL/Fl_Window.H ****   static
 138:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 139:fltk-1.3.4-1/FL/Fl_Window.H ****   shape_data_type *shape_data_; ///< non-null means the window has a non-rectangular shape
 140:fltk-1.3.4-1/FL/Fl_Window.H **** private:
 141:fltk-1.3.4-1/FL/Fl_Window.H ****   void shape_bitmap_(Fl_Image* b);
 142:fltk-1.3.4-1/FL/Fl_Window.H ****   void shape_alpha_(Fl_Image* img, int offset);
 143:fltk-1.3.4-1/FL/Fl_Window.H ****   void shape_pixmap_(Fl_Image* pixmap);
 144:fltk-1.3.4-1/FL/Fl_Window.H **** public:
 145:fltk-1.3.4-1/FL/Fl_Window.H ****   void shape(const Fl_Image* img);
 146:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Set the window's shape with an Fl_Image.
 147:fltk-1.3.4-1/FL/Fl_Window.H ****    \see void shape(const Fl_Image* img)
 148:fltk-1.3.4-1/FL/Fl_Window.H ****    */
 149:fltk-1.3.4-1/FL/Fl_Window.H ****   inline void shape(const Fl_Image& b) { shape(&b); }
 150:fltk-1.3.4-1/FL/Fl_Window.H **** #if ! (defined(WIN32) || defined(__APPLE__) || defined(FL_DOXYGEN))
 151:fltk-1.3.4-1/FL/Fl_Window.H ****   void combine_mask(void);
 152:fltk-1.3.4-1/FL/Fl_Window.H **** #endif
 153:fltk-1.3.4-1/FL/Fl_Window.H **** private:
 154:fltk-1.3.4-1/FL/Fl_Window.H **** 
 155:fltk-1.3.4-1/FL/Fl_Window.H **** 
 156:fltk-1.3.4-1/FL/Fl_Window.H ****   void size_range_();
 157:fltk-1.3.4-1/FL/Fl_Window.H ****   void _Fl_Window(); // constructor innards
 158:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen_x(); // platform-specific part of sending a window to full screen
 159:fltk-1.3.4-1/FL/Fl_Window.H ****   void fullscreen_off_x(int X, int Y, int W, int H);// platform-specific part of leaving full scree
 160:fltk-1.3.4-1/FL/Fl_Window.H **** 
 161:fltk-1.3.4-1/FL/Fl_Window.H ****   // unimplemented copy ctor and assignment operator
 162:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_Window(const Fl_Window&);
 163:fltk-1.3.4-1/FL/Fl_Window.H ****   Fl_Window& operator=(const Fl_Window&);
 164:fltk-1.3.4-1/FL/Fl_Window.H **** 
 165:fltk-1.3.4-1/FL/Fl_Window.H **** protected:
 166:fltk-1.3.4-1/FL/Fl_Window.H **** 
 167:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Stores the last window that was made current. See current() const */
 168:fltk-1.3.4-1/FL/Fl_Window.H ****   static Fl_Window *current_;
 169:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void draw();
 170:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Forces the window to be drawn, this window is also made current and calls draw(). */
 171:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void flush();
 172:fltk-1.3.4-1/FL/Fl_Window.H **** 
 173:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 174:fltk-1.3.4-1/FL/Fl_Window.H ****     Sets an internal flag that tells FLTK and the window manager to
 175:fltk-1.3.4-1/FL/Fl_Window.H ****     honor position requests.
 176:fltk-1.3.4-1/FL/Fl_Window.H **** 
 177:fltk-1.3.4-1/FL/Fl_Window.H ****     This is used internally and should not be needed by user code.
 178:fltk-1.3.4-1/FL/Fl_Window.H **** 
 179:fltk-1.3.4-1/FL/Fl_Window.H ****     \param[in] force 1 to set the FORCE_POSITION flag, 0 to clear it
 180:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 181:fltk-1.3.4-1/FL/Fl_Window.H ****   void force_position(int force) {
 182:fltk-1.3.4-1/FL/Fl_Window.H ****     if (force) set_flag(FORCE_POSITION);
 183:fltk-1.3.4-1/FL/Fl_Window.H ****     else clear_flag(FORCE_POSITION);
 184:fltk-1.3.4-1/FL/Fl_Window.H ****   }
 185:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 186:fltk-1.3.4-1/FL/Fl_Window.H ****     Returns the internal state of the window's FORCE_POSITION flag.
 187:fltk-1.3.4-1/FL/Fl_Window.H **** 
 188:fltk-1.3.4-1/FL/Fl_Window.H ****     \retval 1 if flag is set
 189:fltk-1.3.4-1/FL/Fl_Window.H ****     \retval 0 otherwise
 190:fltk-1.3.4-1/FL/Fl_Window.H **** 
 191:fltk-1.3.4-1/FL/Fl_Window.H ****     \see force_position(int)
 192:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 193:fltk-1.3.4-1/FL/Fl_Window.H ****   int force_position() const { return ((flags() & FORCE_POSITION)?1:0); }
 194:fltk-1.3.4-1/FL/Fl_Window.H **** 
 195:fltk-1.3.4-1/FL/Fl_Window.H ****   void free_icons();
 196:fltk-1.3.4-1/FL/Fl_Window.H **** 
 197:fltk-1.3.4-1/FL/Fl_Window.H **** public:
 198:fltk-1.3.4-1/FL/Fl_Window.H **** 
 199:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 200:fltk-1.3.4-1/FL/Fl_Window.H ****     Creates a window from the given size and title. 
 201:fltk-1.3.4-1/FL/Fl_Window.H ****     If Fl_Group::current() is not NULL, the window is created as a 
 202:fltk-1.3.4-1/FL/Fl_Window.H ****     subwindow of the parent window.
 203:fltk-1.3.4-1/FL/Fl_Window.H ****     
 204:fltk-1.3.4-1/FL/Fl_Window.H ****     The (w,h) form of the constructor creates a top-level window
 205:fltk-1.3.4-1/FL/Fl_Window.H ****     and asks the window manager to position the window. The (x,y,w,h)
 206:fltk-1.3.4-1/FL/Fl_Window.H ****     form of the constructor either creates a subwindow or a
 207:fltk-1.3.4-1/FL/Fl_Window.H ****     top-level window at the specified location (x,y) , subject to window
 208:fltk-1.3.4-1/FL/Fl_Window.H ****     manager configuration. If you do not specify the position of the
 209:fltk-1.3.4-1/FL/Fl_Window.H ****     window, the window manager will pick a place to show the window
 210:fltk-1.3.4-1/FL/Fl_Window.H ****     or allow the user to pick a location. Use position(x,y)
 211:fltk-1.3.4-1/FL/Fl_Window.H ****     or hotspot() before calling show() to request a
 212:fltk-1.3.4-1/FL/Fl_Window.H ****     position on the screen. See Fl_Window::resize() 
 213:fltk-1.3.4-1/FL/Fl_Window.H ****     for some more details on positioning windows.
 214:fltk-1.3.4-1/FL/Fl_Window.H ****     
 215:fltk-1.3.4-1/FL/Fl_Window.H ****     Top-level windows initially have visible() set to 0
 216:fltk-1.3.4-1/FL/Fl_Window.H ****     and parent() set to NULL. Subwindows initially
 217:fltk-1.3.4-1/FL/Fl_Window.H ****     have visible() set to 1 and parent() set to
 218:fltk-1.3.4-1/FL/Fl_Window.H ****     the parent window pointer.
 219:fltk-1.3.4-1/FL/Fl_Window.H ****     
 220:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Widget::box() defaults to FL_FLAT_BOX. If you plan to
 221:fltk-1.3.4-1/FL/Fl_Window.H ****     completely fill the window with children widgets you should
 222:fltk-1.3.4-1/FL/Fl_Window.H ****     change this to FL_NO_BOX. If you turn the window border off
 223:fltk-1.3.4-1/FL/Fl_Window.H ****     you may want to change this to FL_UP_BOX.
 224:fltk-1.3.4-1/FL/Fl_Window.H **** 
 225:fltk-1.3.4-1/FL/Fl_Window.H ****     \see Fl_Window(int x, int y, int w, int h, const char* title)
 226:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 227:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Window(int w, int h, const char* title= 0);
 228:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Creates a window from the given position, size and title.
 229:fltk-1.3.4-1/FL/Fl_Window.H **** 
 230:fltk-1.3.4-1/FL/Fl_Window.H ****     \see Fl_Window(int w, int h, const char *title)
 231:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 232:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Window(int x, int y, int w, int h, const char* title = 0);
 233:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 234:fltk-1.3.4-1/FL/Fl_Window.H ****     The destructor <I>also deletes all the children</I>. This allows a
 235:fltk-1.3.4-1/FL/Fl_Window.H ****     whole tree to be deleted at once, without having to keep a pointer to
 236:fltk-1.3.4-1/FL/Fl_Window.H ****     all the children in the user code. A kludge has been done so the 
 237:fltk-1.3.4-1/FL/Fl_Window.H ****     Fl_Window and all of its children can be automatic (local)
 238:fltk-1.3.4-1/FL/Fl_Window.H ****     variables, but you must declare the Fl_Window <I>first</I> so
 239:fltk-1.3.4-1/FL/Fl_Window.H ****     that it is destroyed last.
 240:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 241:fltk-1.3.4-1/FL/Fl_Window.H ****     virtual ~Fl_Window();
 242:fltk-1.3.4-1/FL/Fl_Window.H **** 
 243:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual int handle(int);
 244:fltk-1.3.4-1/FL/Fl_Window.H **** 
 245:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 246:fltk-1.3.4-1/FL/Fl_Window.H ****     Changes the size and position of the window.  If shown() is true,
 247:fltk-1.3.4-1/FL/Fl_Window.H ****     these changes are communicated to the window server (which may
 248:fltk-1.3.4-1/FL/Fl_Window.H ****     refuse that size and cause a further resize).  If shown() is
 249:fltk-1.3.4-1/FL/Fl_Window.H ****     false, the size and position are used when show() is called.
 250:fltk-1.3.4-1/FL/Fl_Window.H ****     See Fl_Group for the effect of resizing on the child widgets.
 251:fltk-1.3.4-1/FL/Fl_Window.H **** 
 252:fltk-1.3.4-1/FL/Fl_Window.H ****     You can also call the Fl_Widget methods size(x,y) and position(w,h),
 253:fltk-1.3.4-1/FL/Fl_Window.H ****     which are inline wrappers for this virtual function.
 254:fltk-1.3.4-1/FL/Fl_Window.H **** 
 255:fltk-1.3.4-1/FL/Fl_Window.H ****     A top-level window can not force, but merely suggest a position and 
 256:fltk-1.3.4-1/FL/Fl_Window.H ****     size to the operating system. The window manager may not be willing or 
 257:fltk-1.3.4-1/FL/Fl_Window.H ****     able to display a window at the desired position or with the given 
 258:fltk-1.3.4-1/FL/Fl_Window.H ****     dimensions. It is up to the application developer to verify window 
 259:fltk-1.3.4-1/FL/Fl_Window.H ****     parameters after the resize request.
 260:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 261:fltk-1.3.4-1/FL/Fl_Window.H ****   virtual void resize(int X,int Y,int W,int H);
 262:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 263:fltk-1.3.4-1/FL/Fl_Window.H ****     Sets whether or not the window manager border is around the
 264:fltk-1.3.4-1/FL/Fl_Window.H ****     window.  The default value is true. void border(int) can be
 265:fltk-1.3.4-1/FL/Fl_Window.H ****     used to turn the border on and off. <I>Under most X window
 266:fltk-1.3.4-1/FL/Fl_Window.H ****     managers this does not work after show() has been called,
 267:fltk-1.3.4-1/FL/Fl_Window.H ****     although SGI's 4DWM does work.</I>
 268:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 269:fltk-1.3.4-1/FL/Fl_Window.H ****   void border(int b);
 270:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 271:fltk-1.3.4-1/FL/Fl_Window.H ****     Fast inline function to turn the window manager border
 272:fltk-1.3.4-1/FL/Fl_Window.H ****     off. It only works before show() is called.
 273:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 274:fltk-1.3.4-1/FL/Fl_Window.H ****   void clear_border()	{set_flag(NOBORDER);}
 275:fltk-1.3.4-1/FL/Fl_Window.H ****   /** See void Fl_Window::border(int) */
 276:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int border() const	{return !(flags() & NOBORDER);}
 277:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Activates the flags NOBORDER|FL_OVERRIDE */
 278:fltk-1.3.4-1/FL/Fl_Window.H ****   void set_override()	{set_flag(NOBORDER|OVERRIDE);}
 279:fltk-1.3.4-1/FL/Fl_Window.H ****   /** Returns non zero if FL_OVERRIDE flag is set, 0 otherwise. */
 280:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int override() const  { return flags()&OVERRIDE; }
 281:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 282:fltk-1.3.4-1/FL/Fl_Window.H ****     A "modal" window, when shown(), will prevent any events from
 283:fltk-1.3.4-1/FL/Fl_Window.H ****     being delivered to other windows in the same program, and will also
 284:fltk-1.3.4-1/FL/Fl_Window.H ****     remain on top of the other windows (if the X window manager supports
 285:fltk-1.3.4-1/FL/Fl_Window.H ****     the "transient for" property).  Several modal windows may be shown at
 286:fltk-1.3.4-1/FL/Fl_Window.H ****     once, in which case only the last one shown gets events.  You can see
 287:fltk-1.3.4-1/FL/Fl_Window.H ****     which window (if any) is modal by calling Fl::modal().
 288:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 289:fltk-1.3.4-1/FL/Fl_Window.H ****   void set_modal()	{set_flag(MODAL);}
 290:fltk-1.3.4-1/FL/Fl_Window.H ****   /**  Returns true if this window is modal.  */
 291:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int modal() const	{return flags() & MODAL;}
 292:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 293:fltk-1.3.4-1/FL/Fl_Window.H ****     A "non-modal" window (terminology borrowed from Microsoft Windows)
 294:fltk-1.3.4-1/FL/Fl_Window.H ****     acts like a modal() one in that it remains on top, but it has
 295:fltk-1.3.4-1/FL/Fl_Window.H ****     no effect on event delivery.  There are <I>three</I> states for a
 296:fltk-1.3.4-1/FL/Fl_Window.H ****     window: modal, non-modal, and normal.
 297:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 298:fltk-1.3.4-1/FL/Fl_Window.H ****   void set_non_modal()	{set_flag(NON_MODAL);}
 299:fltk-1.3.4-1/FL/Fl_Window.H ****   /**  Returns true if this window is modal or non-modal. */
 300:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int non_modal() const {return flags() & (NON_MODAL|MODAL);}
 301:fltk-1.3.4-1/FL/Fl_Window.H **** 
 302:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 303:fltk-1.3.4-1/FL/Fl_Window.H ****     Clears the "modal" flags and converts a "modal" or "non-modal"
 304:fltk-1.3.4-1/FL/Fl_Window.H ****     window back into a "normal" window.
 305:fltk-1.3.4-1/FL/Fl_Window.H **** 
 306:fltk-1.3.4-1/FL/Fl_Window.H ****     Note that there are <I>three</I> states for a window: modal,
 307:fltk-1.3.4-1/FL/Fl_Window.H ****     non-modal, and normal.
 308:fltk-1.3.4-1/FL/Fl_Window.H **** 
 309:fltk-1.3.4-1/FL/Fl_Window.H ****     You can not change the "modality" of a window whilst
 310:fltk-1.3.4-1/FL/Fl_Window.H ****     it is shown, so it is necessary to first hide() the window,
 311:fltk-1.3.4-1/FL/Fl_Window.H ****     change its "modality" as required, then re-show the window
 312:fltk-1.3.4-1/FL/Fl_Window.H ****     for the new state to take effect.
 313:fltk-1.3.4-1/FL/Fl_Window.H **** 
 314:fltk-1.3.4-1/FL/Fl_Window.H ****     This method can also be used to change a "modal" window into a
 315:fltk-1.3.4-1/FL/Fl_Window.H ****     "non-modal" one. On several supported platforms, the "modal" state
 316:fltk-1.3.4-1/FL/Fl_Window.H ****     over-rides the "non-modal" state, so the "modal" state must be
 317:fltk-1.3.4-1/FL/Fl_Window.H ****     cleared before the window can be set into the "non-modal"
 318:fltk-1.3.4-1/FL/Fl_Window.H ****     state.
 319:fltk-1.3.4-1/FL/Fl_Window.H ****     In general, the following sequence should work:
 320:fltk-1.3.4-1/FL/Fl_Window.H **** 
 321:fltk-1.3.4-1/FL/Fl_Window.H ****     \code
 322:fltk-1.3.4-1/FL/Fl_Window.H ****     win->hide();
 323:fltk-1.3.4-1/FL/Fl_Window.H ****     win->clear_modal_states();
 324:fltk-1.3.4-1/FL/Fl_Window.H ****     //Set win to new state as desired, or leave "normal", e.g...
 325:fltk-1.3.4-1/FL/Fl_Window.H ****     win->set_non_modal();
 326:fltk-1.3.4-1/FL/Fl_Window.H ****     win->show();
 327:fltk-1.3.4-1/FL/Fl_Window.H ****     \endcode
 328:fltk-1.3.4-1/FL/Fl_Window.H **** 
 329:fltk-1.3.4-1/FL/Fl_Window.H ****     \note Under some window managers, the sequence of hiding the
 330:fltk-1.3.4-1/FL/Fl_Window.H ****     window and changing its modality will often cause it to be
 331:fltk-1.3.4-1/FL/Fl_Window.H ****     re-displayed at a different position when it is subsequently
 332:fltk-1.3.4-1/FL/Fl_Window.H ****     shown. This is an irritating feature but appears to be
 333:fltk-1.3.4-1/FL/Fl_Window.H ****     unavoidable at present.
 334:fltk-1.3.4-1/FL/Fl_Window.H ****     As a result we would advise to use this method only when
 335:fltk-1.3.4-1/FL/Fl_Window.H ****     absolutely necessary.
 336:fltk-1.3.4-1/FL/Fl_Window.H **** 
 337:fltk-1.3.4-1/FL/Fl_Window.H ****     \see void set_modal(), void set_non_modal()
 338:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 339:fltk-1.3.4-1/FL/Fl_Window.H ****   void clear_modal_states() {clear_flag(NON_MODAL | MODAL);}
 340:fltk-1.3.4-1/FL/Fl_Window.H **** 
 341:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 342:fltk-1.3.4-1/FL/Fl_Window.H ****     Marks the window as a menu window.
 343:fltk-1.3.4-1/FL/Fl_Window.H **** 
 344:fltk-1.3.4-1/FL/Fl_Window.H ****     This is intended for internal use, but it can also be used if you
 345:fltk-1.3.4-1/FL/Fl_Window.H ****     write your own menu handling. However, this is not recommended.
 346:fltk-1.3.4-1/FL/Fl_Window.H **** 
 347:fltk-1.3.4-1/FL/Fl_Window.H ****     This flag is used for correct "parenting" of windows in communication
 348:fltk-1.3.4-1/FL/Fl_Window.H ****     with the windowing system. Modern X window managers can use different
 349:fltk-1.3.4-1/FL/Fl_Window.H ****     flags to distinguish menu and tooltip windows from normal windows.
 350:fltk-1.3.4-1/FL/Fl_Window.H **** 
 351:fltk-1.3.4-1/FL/Fl_Window.H ****     This must be called before the window is shown and cannot be changed
 352:fltk-1.3.4-1/FL/Fl_Window.H ****     later.
 353:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 354:fltk-1.3.4-1/FL/Fl_Window.H ****   void set_menu_window()	{set_flag(MENU_WINDOW);}
 355:fltk-1.3.4-1/FL/Fl_Window.H **** 
 356:fltk-1.3.4-1/FL/Fl_Window.H ****   /**  Returns true if this window is a menu window. */
 357:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int menu_window() const {return flags() & MENU_WINDOW;}
 358:fltk-1.3.4-1/FL/Fl_Window.H ****   
 359:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 360:fltk-1.3.4-1/FL/Fl_Window.H ****     Marks the window as a tooltip window.
 361:fltk-1.3.4-1/FL/Fl_Window.H **** 
 362:fltk-1.3.4-1/FL/Fl_Window.H ****     This is intended for internal use, but it can also be used if you
 363:fltk-1.3.4-1/FL/Fl_Window.H ****     write your own tooltip handling. However, this is not recommended.
 364:fltk-1.3.4-1/FL/Fl_Window.H **** 
 365:fltk-1.3.4-1/FL/Fl_Window.H ****     This flag is used for correct "parenting" of windows in communication
 366:fltk-1.3.4-1/FL/Fl_Window.H ****     with the windowing system. Modern X window managers can use different
 367:fltk-1.3.4-1/FL/Fl_Window.H ****     flags to distinguish menu and tooltip windows from normal windows.
 368:fltk-1.3.4-1/FL/Fl_Window.H **** 
 369:fltk-1.3.4-1/FL/Fl_Window.H ****     This must be called before the window is shown and cannot be changed
 370:fltk-1.3.4-1/FL/Fl_Window.H ****     later.
 371:fltk-1.3.4-1/FL/Fl_Window.H **** 
 372:fltk-1.3.4-1/FL/Fl_Window.H ****     \note Since Fl_Tooltip_Window is derived from Fl_Menu_Window, this
 373:fltk-1.3.4-1/FL/Fl_Window.H ****     also \b clears the menu_window() state.
 374:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 375:fltk-1.3.4-1/FL/Fl_Window.H ****   void set_tooltip_window()	{ set_flag(TOOLTIP_WINDOW);
 376:fltk-1.3.4-1/FL/Fl_Window.H **** 				  clear_flag(MENU_WINDOW); }
 377:fltk-1.3.4-1/FL/Fl_Window.H ****   /**  Returns true if this window is a tooltip window. */
 378:fltk-1.3.4-1/FL/Fl_Window.H ****   unsigned int tooltip_window() const {return flags() & TOOLTIP_WINDOW;}
 379:fltk-1.3.4-1/FL/Fl_Window.H **** 
 380:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 381:fltk-1.3.4-1/FL/Fl_Window.H ****     Positions the window so that the mouse is pointing at the given
 382:fltk-1.3.4-1/FL/Fl_Window.H ****     position, or at the center of the given widget, which may be the
 383:fltk-1.3.4-1/FL/Fl_Window.H ****     window itself.  If the optional offscreen parameter is
 384:fltk-1.3.4-1/FL/Fl_Window.H ****     non-zero, then the window is allowed to extend off the screen (this
 385:fltk-1.3.4-1/FL/Fl_Window.H ****     does not work with some X window managers). \see position()
 386:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 387:fltk-1.3.4-1/FL/Fl_Window.H ****   void hotspot(int x, int y, int offscreen = 0);
 388:fltk-1.3.4-1/FL/Fl_Window.H ****   /** See void Fl_Window::hotspot(int x, int y, int offscreen = 0) */
 389:fltk-1.3.4-1/FL/Fl_Window.H ****   void hotspot(const Fl_Widget*, int offscreen = 0);
 390:fltk-1.3.4-1/FL/Fl_Window.H ****   /** See void Fl_Window::hotspot(int x, int y, int offscreen = 0) */
 391:fltk-1.3.4-1/FL/Fl_Window.H ****   void hotspot(const Fl_Widget& p, int offscreen = 0) {hotspot(&p,offscreen);}
 392:fltk-1.3.4-1/FL/Fl_Window.H **** 
 393:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 394:fltk-1.3.4-1/FL/Fl_Window.H ****     Undoes the effect of a previous resize() or show() so that the next time
 395:fltk-1.3.4-1/FL/Fl_Window.H ****     show() is called the window manager is free to position the window.
 396:fltk-1.3.4-1/FL/Fl_Window.H **** 
 397:fltk-1.3.4-1/FL/Fl_Window.H ****     This is for Forms compatibility only.
 398:fltk-1.3.4-1/FL/Fl_Window.H **** 
 399:fltk-1.3.4-1/FL/Fl_Window.H ****     \deprecated please use force_position(0) instead
 400:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 401:fltk-1.3.4-1/FL/Fl_Window.H ****   void free_position()	{clear_flag(FORCE_POSITION);}
 402:fltk-1.3.4-1/FL/Fl_Window.H ****   /**
 403:fltk-1.3.4-1/FL/Fl_Window.H ****     Sets the allowable range the user can resize this window to.
 404:fltk-1.3.4-1/FL/Fl_Window.H ****     This only works for top-level windows.
 405:fltk-1.3.4-1/FL/Fl_Window.H ****     <UL>
 406:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>\p minw and \p minh are the smallest the window can be.
 407:fltk-1.3.4-1/FL/Fl_Window.H **** 	Either value must be greater than 0.</LI>
 408:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>\p maxw and \p maxh are the largest the window can be. If either is
 409:fltk-1.3.4-1/FL/Fl_Window.H **** 	<I>equal</I> to the minimum then you cannot resize in that direction.
 410:fltk-1.3.4-1/FL/Fl_Window.H **** 	If either is zero  then FLTK picks a maximum size in that direction
 411:fltk-1.3.4-1/FL/Fl_Window.H **** 	such that the window will fill the screen.</LI>
 412:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>\p dw and \p dh are size increments.  The  window will be constrained
 413:fltk-1.3.4-1/FL/Fl_Window.H **** 	to widths of minw + N * dw,  where N is any non-negative integer.
 414:fltk-1.3.4-1/FL/Fl_Window.H **** 	If these are less or equal to 1 they are ignored (this is ignored
 415:fltk-1.3.4-1/FL/Fl_Window.H **** 	on WIN32).</LI>
 416:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>\p aspect is a flag that indicates that the window should preserve its
 417:fltk-1.3.4-1/FL/Fl_Window.H **** 	aspect ratio.  This only works if both the maximum and minimum have
 418:fltk-1.3.4-1/FL/Fl_Window.H **** 	the same aspect ratio (ignored on WIN32 and by many X window managers).
 419:fltk-1.3.4-1/FL/Fl_Window.H **** 	</LI>
 420:fltk-1.3.4-1/FL/Fl_Window.H ****     </UL>
 421:fltk-1.3.4-1/FL/Fl_Window.H **** 
 422:fltk-1.3.4-1/FL/Fl_Window.H ****     If this function is not called, FLTK tries to figure out the range
 423:fltk-1.3.4-1/FL/Fl_Window.H ****     from the setting of resizable():
 424:fltk-1.3.4-1/FL/Fl_Window.H ****     <UL>
 425:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>If resizable() is NULL (this is the  default) then the window cannot
 426:fltk-1.3.4-1/FL/Fl_Window.H **** 	be resized and the resize border and max-size control will not be
 427:fltk-1.3.4-1/FL/Fl_Window.H **** 	displayed for the window.</LI>
 428:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>If either dimension of resizable() is less than 100, then that is
 429:fltk-1.3.4-1/FL/Fl_Window.H **** 	considered the minimum size.  Otherwise the resizable() has a minimum
 430:fltk-1.3.4-1/FL/Fl_Window.H **** 	size of 100.</LI>
 431:fltk-1.3.4-1/FL/Fl_Window.H ****     <LI>If either dimension of resizable() is zero, then that is also the
 432:fltk-1.3.4-1/FL/Fl_Window.H **** 	maximum size (so the window cannot resize in that direction).</LI>
 433:fltk-1.3.4-1/FL/Fl_Window.H ****     </UL>
 434:fltk-1.3.4-1/FL/Fl_Window.H **** 
 435:fltk-1.3.4-1/FL/Fl_Window.H ****     It is undefined what happens if the current size does not fit in the
 436:fltk-1.3.4-1/FL/Fl_Window.H ****     constraints passed to size_range().
 437:fltk-1.3.4-1/FL/Fl_Window.H ****   */
 438:fltk-1.3.4-1/FL/Fl_Window.H ****   void size_range(int minw, int minh, int maxw=0, int maxh=0, int dw=0, int dh=0, int aspect=0) {
 439:fltk-1.3.4-1/FL/Fl_Window.H ****     this->minw   = minw;
 2735              		.loc 8 439 0
 2736 08e9 C787C000 		movl	$181, 192(%rdi)
 2736      0000B500 
 2736      0000
 440:fltk-1.3.4-1/FL/Fl_Window.H ****     this->minh   = minh;
 2737              		.loc 8 440 0
 2738 08f3 C787C400 		movl	$150, 196(%rdi)
 2738      00009600 
 2738      0000
 441:fltk-1.3.4-1/FL/Fl_Window.H ****     this->maxw   = maxw;
 2739              		.loc 8 441 0
 2740 08fd C787C800 		movl	$0, 200(%rdi)
 2740      00000000 
 2740      0000
 442:fltk-1.3.4-1/FL/Fl_Window.H ****     this->maxh   = maxh;
 2741              		.loc 8 442 0
 2742 0907 C787CC00 		movl	$0, 204(%rdi)
 2742      00000000 
 2742      0000
 443:fltk-1.3.4-1/FL/Fl_Window.H ****     this->dw     = dw;
 2743              		.loc 8 443 0
 2744 0911 C787D000 		movl	$0, 208(%rdi)
 2744      00000000 
 2744      0000
 444:fltk-1.3.4-1/FL/Fl_Window.H ****     this->dh     = dh;
 2745              		.loc 8 444 0
 2746 091b C787D400 		movl	$0, 212(%rdi)
 2746      00000000 
 2746      0000
 445:fltk-1.3.4-1/FL/Fl_Window.H ****     this->aspect = aspect;
 2747              		.loc 8 445 0
 2748 0925 C787D800 		movl	$0, 216(%rdi)
 2748      00000000 
 2748      0000
 446:fltk-1.3.4-1/FL/Fl_Window.H ****     size_range_();
 2749              		.loc 8 446 0
 2750 092f E8000000 		call	_ZN9Fl_Window11size_range_Ev
 2750      00
 2751              	.LVL347:
 2752              	.LBE719:
 2753              	.LBE718:
 2754              		.loc 1 302 0
 2755 0934 488BBB70 		movq	6256(%rbx), %rdi
 2755      180000
 2756 093b E8000000 		call	_ZN8Fl_Group3endEv
 2756      00
 2757              	.LVL348:
 2758              	.LBE685:
 2759              		.loc 1 304 0
 2760 0940 48C70300 		movq	$0, (%rbx)
 2760      000000
 2761              		.loc 1 305 0
 2762 0947 48C74308 		movq	$0, 8(%rbx)
 2762      00000000 
 2763              		.loc 1 306 0
 2764 094f C6431000 		movb	$0, 16(%rbx)
 2765              		.loc 1 307 0
 2766 0953 E8000000 		call	_ZN2Fl1hEv
 2766      00
 2767              	.LVL349:
 2768 0958 89C5     		movl	%eax, %ebp
 2769              	.LVL350:
 2770 095a E8000000 		call	_ZN2Fl1wEv
 2770      00
 2771              	.LVL351:
 2772 095f 488BBB18 		movq	6168(%rbx), %rdi
 2772      180000
 2773 0966 8B572C   		movl	44(%rdi), %edx
 2774              	.LVL352:
 2775              	.LBB720:
 2776              	.LBB721:
 439:fltk-1.3.4-1/FL/Fl_Window.H ****     this->minh   = minh;
 2777              		.loc 8 439 0
 2778 0969 8B4F28   		movl	40(%rdi), %ecx
 441:fltk-1.3.4-1/FL/Fl_Window.H ****     this->maxh   = maxh;
 2779              		.loc 8 441 0
 2780 096c 8987C800 		movl	%eax, 200(%rdi)
 2780      0000
 442:fltk-1.3.4-1/FL/Fl_Window.H ****     this->dw     = dw;
 2781              		.loc 8 442 0
 2782 0972 89AFCC00 		movl	%ebp, 204(%rdi)
 2782      0000
 443:fltk-1.3.4-1/FL/Fl_Window.H ****     this->dh     = dh;
 2783              		.loc 8 443 0
 2784 0978 C787D000 		movl	$0, 208(%rdi)
 2784      00000000 
 2784      0000
 444:fltk-1.3.4-1/FL/Fl_Window.H ****     this->aspect = aspect;
 2785              		.loc 8 444 0
 2786 0982 C787D400 		movl	$0, 212(%rdi)
 2786      00000000 
 2786      0000
 439:fltk-1.3.4-1/FL/Fl_Window.H ****     this->minh   = minh;
 2787              		.loc 8 439 0
 2788 098c 898FC000 		movl	%ecx, 192(%rdi)
 2788      0000
 440:fltk-1.3.4-1/FL/Fl_Window.H ****     this->maxw   = maxw;
 2789              		.loc 8 440 0
 2790 0992 8997C400 		movl	%edx, 196(%rdi)
 2790      0000
 445:fltk-1.3.4-1/FL/Fl_Window.H ****     size_range_();
 2791              		.loc 8 445 0
 2792 0998 C787D800 		movl	$0, 216(%rdi)
 2792      00000000 
 2792      0000
 2793              		.loc 8 446 0
 2794 09a2 E8000000 		call	_ZN9Fl_Window11size_range_Ev
 2794      00
 2795              	.LVL353:
 2796              	.LBE721:
 2797              	.LBE720:
 2798              		.loc 1 308 0
 2799 09a7 4489E6   		movl	%r12d, %esi
 2800 09aa 4889DF   		movq	%rbx, %rdi
 2801 09ad E8000000 		call	_ZN15Fl_File_Chooser4typeEi
 2801      00
 2802              	.LVL354:
 2803              		.loc 1 309 0
 2804 09b2 488B7424 		movq	24(%rsp), %rsi
 2804      18
 2805 09b7 4889DF   		movq	%rbx, %rdi
 2806 09ba E8000000 		call	_ZN15Fl_File_Chooser6filterEPKc
 2806      00
 2807              	.LVL355:
 2808              		.loc 1 310 0
 2809 09bf 4889DF   		movq	%rbx, %rdi
 2810 09c2 E8000000 		call	_ZN15Fl_File_Chooser16update_favoritesEv
 2810      00
 2811              	.LVL356:
 2812              		.loc 1 311 0
 2813 09c7 488B7424 		movq	16(%rsp), %rsi
 2813      10
 2814 09cc 4889DF   		movq	%rbx, %rdi
 2815 09cf E8000000 		call	_ZN15Fl_File_Chooser5valueEPKc
 2815      00
 2816              	.LVL357:
 2817              		.loc 1 312 0
 2818 09d4 4489E6   		movl	%r12d, %esi
 2819 09d7 4889DF   		movq	%rbx, %rdi
 2820 09da E8000000 		call	_ZN15Fl_File_Chooser4typeEi
 2820      00
 2821              	.LVL358:
 2822              		.loc 1 314 0
 2823 09df 488B3D00 		movq	_ZN15Fl_File_Chooser6prefs_E(%rip), %rdi
 2823      000000
 2824 09e6 488D5424 		leaq	36(%rsp), %rdx
 2824      24
 2825 09eb B9010000 		movl	$1, %ecx
 2825      00
 2826 09f0 BE000000 		movl	$.LC57, %esi
 2826      00
 2827 09f5 E8000000 		call	_ZN14Fl_Preferences3getEPKcRii
 2827      00
 2828              	.LVL359:
 2829              		.loc 1 315 0
 2830 09fa 8B742424 		movl	36(%rsp), %esi
 2831 09fe 4889DF   		movq	%rbx, %rdi
 2832 0a01 E8000000 		call	_ZN15Fl_File_Chooser7previewEi
 2832      00
 2833              	.LVL360:
 2834              		.loc 1 316 0
 2835 0a06 488B7C24 		movq	8(%rsp), %rdi
 2835      08
 2836 0a0b E8000000 		call	_ZN8Fl_Group7currentEPS_
 2836      00
 2837              	.LVL361:
 2838              	.LBE723:
 2839              		.loc 1 318 0
 2840 0a10 488B4424 		movq	40(%rsp), %rax
 2840      28
 2841 0a15 64483304 		xorq	%fs:40, %rax
 2841      25280000 
 2841      00
 2842              	.LBB724:
 2843              		.loc 1 317 0
 2844 0a1e 48C783A8 		movq	$0, 6312(%rbx)
 2844      18000000 
 2844      000000
 2845              	.LBE724:
 2846              		.loc 1 318 0
 2847 0a29 0F85E100 		jne	.L88
 2847      0000
 2848 0a2f 4883C438 		addq	$56, %rsp
 2849              		.cfi_remember_state
 2850              		.cfi_def_cfa_offset 56
 2851 0a33 5B       		popq	%rbx
 2852              		.cfi_def_cfa_offset 48
 2853              	.LVL362:
 2854 0a34 5D       		popq	%rbp
 2855              		.cfi_def_cfa_offset 40
 2856 0a35 415C     		popq	%r12
 2857              		.cfi_def_cfa_offset 32
 2858              	.LVL363:
 2859 0a37 415D     		popq	%r13
 2860              		.cfi_def_cfa_offset 24
 2861              	.LVL364:
 2862 0a39 415E     		popq	%r14
 2863              		.cfi_def_cfa_offset 16
 2864              	.LVL365:
 2865 0a3b 415F     		popq	%r15
 2866              		.cfi_def_cfa_offset 8
 2867              	.LVL366:
 2868 0a3d C3       		ret
 2869              	.LVL367:
 2870 0a3e 6690     		.p2align 4,,10
 2871              		.p2align 3
 2872              	.L78:
 2873              		.cfi_restore_state
 2874              	.LBB725:
 2875              	.LBB722:
 2876              	.LBB683:
 2877              	.LBB618:
 2878              	.LBB617:
 2879              	.LBB609:
 2880              		.loc 1 67 0
 2881 0a40 BF000000 		movl	$_ZGVZL9image_newvE5image, %edi
 2881      00
 2882 0a45 E8000000 		call	__cxa_guard_acquire
 2882      00
 2883              	.LVL368:
 2884 0a4a 85C0     		testl	%eax, %eax
 2885 0a4c 751A     		jne	.L80
 2886 0a4e 488B9330 		movq	6192(%rbx), %rdx
 2886      180000
 2887 0a55 488B0500 		movq	_ZZL9image_newvE5image(%rip), %rax
 2887      000000
 2888 0a5c E963F7FF 		jmp	.L79
 2888      FF
 2889              		.p2align 4,,10
 2890 0a61 0F1F8000 		.p2align 3
 2890      000000
 2891              	.L80:
 2892 0a68 BF380000 		movl	$56, %edi
 2892      00
 2893 0a6d E8000000 		call	_Znwm
 2893      00
 2894              	.LVL369:
 2895              	.LBB600:
 2896              	.LBB601:
 2897              		.file 9 "fltk-1.3.4-1/FL/Fl_Bitmap.H"
   1:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
   2:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // "$Id: Fl_Bitmap.H 10110 2014-02-22 14:51:50Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
   4:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // Bitmap header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
   6:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
   8:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
  12:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
  14:fltk-1.3.4-1/FL/Fl_Bitmap.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
  16:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Bitmap.H **** //
  18:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  19:fltk-1.3.4-1/FL/Fl_Bitmap.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Bitmap.H ****    Fl_Bitmap widget . */
  21:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  22:fltk-1.3.4-1/FL/Fl_Bitmap.H **** #ifndef Fl_Bitmap_H
  23:fltk-1.3.4-1/FL/Fl_Bitmap.H **** #define Fl_Bitmap_H
  24:fltk-1.3.4-1/FL/Fl_Bitmap.H **** #  include "Fl_Image.H"
  25:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  26:fltk-1.3.4-1/FL/Fl_Bitmap.H **** class Fl_Widget;
  27:fltk-1.3.4-1/FL/Fl_Bitmap.H **** struct Fl_Menu_Item;
  28:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  29:fltk-1.3.4-1/FL/Fl_Bitmap.H **** /**
  30:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   The Fl_Bitmap class supports caching and drawing of mono-color
  31:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   (bitmap) images. Images are drawn using the current color.
  32:fltk-1.3.4-1/FL/Fl_Bitmap.H **** */
  33:fltk-1.3.4-1/FL/Fl_Bitmap.H **** class FL_EXPORT Fl_Bitmap : public Fl_Image {
  34:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   friend class Fl_Quartz_Graphics_Driver;
  35:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   friend class Fl_GDI_Graphics_Driver;
  36:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   friend class Fl_GDI_Printer_Graphics_Driver;
  37:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   friend class Fl_Xlib_Graphics_Driver;
  38:fltk-1.3.4-1/FL/Fl_Bitmap.H **** public:
  39:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  40:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   /** pointer to raw bitmap data */
  41:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   const uchar *array;
  42:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   /** Non-zero if array points to bitmap data allocated internally */
  43:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   int alloc_array;
  44:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   
  45:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   private:
  46:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   int start(int XP, int YP, int WP, int HP, int &cx, int &cy, 
  47:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 	    int &X, int &Y, int &W, int &H);
  48:fltk-1.3.4-1/FL/Fl_Bitmap.H **** #if defined(__APPLE__) || defined(WIN32)
  49:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   /** for internal use */
  50:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   void *id_;
  51:fltk-1.3.4-1/FL/Fl_Bitmap.H **** #else
  52:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   /** for internal use */
  53:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   unsigned id_;
  54:fltk-1.3.4-1/FL/Fl_Bitmap.H **** #endif // __APPLE__ || WIN32
  55:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  56:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   public:
  57:fltk-1.3.4-1/FL/Fl_Bitmap.H **** 
  58:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   /** The constructors create a new bitmap from the specified bitmap data */
  59:fltk-1.3.4-1/FL/Fl_Bitmap.H ****   Fl_Bitmap(const uchar *bits, int W, int H) :
  60:fltk-1.3.4-1/FL/Fl_Bitmap.H ****     Fl_Image(W,H,0), array(bits), alloc_array(0), id_(0) {data((const char **)&array, 1);}
 2898              		.loc 9 60 0
 2899 0a72 31C9     		xorl	%ecx, %ecx
 2900              	.LBE601:
 2901              	.LBE600:
 2902              		.loc 1 67 0
 2903 0a74 4989C7   		movq	%rax, %r15
 2904              	.LVL370:
 2905              	.LBB606:
 2906              	.LBB604:
 2907              		.loc 9 60 0
 2908 0a77 4889C7   		movq	%rax, %rdi
 2909 0a7a BA100000 		movl	$16, %edx
 2909      00
 2910 0a7f BE100000 		movl	$16, %esi
 2910      00
 2911 0a84 E8000000 		call	_ZN8Fl_ImageC2Eiii
 2911      00
 2912              	.LVL371:
 2913 0a89 498D5728 		leaq	40(%r15), %rdx
 2914 0a8d 49C70700 		movq	$_ZTV9Fl_Bitmap+16, (%r15)
 2914      000000
 2915 0a94 49C74728 		movq	$_ZL9idata_new, 40(%r15)
 2915      00000000 
 2916 0a9c 41C74730 		movl	$0, 48(%r15)
 2916      00000000 
 2917 0aa4 41C74734 		movl	$0, 52(%r15)
 2917      00000000 
 2918              	.LVL372:
 2919              	.LBE604:
 2920              	.LBE606:
 2921              		.loc 1 67 0
 2922 0aac BF000000 		movl	$_ZGVZL9image_newvE5image, %edi
 2922      00
 2923              	.LBB607:
 2924              	.LBB605:
 2925              		.loc 9 60 0
 2926 0ab1 49895720 		movq	%rdx, 32(%r15)
 2927              	.LBB602:
 2928              	.LBB603:
 2929              		.file 10 "fltk-1.3.4-1/FL/Fl_Image.H"
   1:fltk-1.3.4-1/FL/Fl_Image.H **** //
   2:fltk-1.3.4-1/FL/Fl_Image.H **** // "$Id: Fl_Image.H 12028 2016-10-14 16:35:44Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Image.H **** //
   4:fltk-1.3.4-1/FL/Fl_Image.H **** // Image header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Image.H **** //
   6:fltk-1.3.4-1/FL/Fl_Image.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Image.H **** //
   8:fltk-1.3.4-1/FL/Fl_Image.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Image.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Image.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Image.H **** //
  12:fltk-1.3.4-1/FL/Fl_Image.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Image.H **** //
  14:fltk-1.3.4-1/FL/Fl_Image.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Image.H **** //
  16:fltk-1.3.4-1/FL/Fl_Image.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Image.H **** //
  18:fltk-1.3.4-1/FL/Fl_Image.H **** 
  19:fltk-1.3.4-1/FL/Fl_Image.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl_Image.H ****    Fl_Image, Fl_RGB_Image classes. */
  21:fltk-1.3.4-1/FL/Fl_Image.H **** 
  22:fltk-1.3.4-1/FL/Fl_Image.H **** #ifndef Fl_Image_H
  23:fltk-1.3.4-1/FL/Fl_Image.H **** #  define Fl_Image_H
  24:fltk-1.3.4-1/FL/Fl_Image.H **** 
  25:fltk-1.3.4-1/FL/Fl_Image.H **** #  include "Enumerations.H"
  26:fltk-1.3.4-1/FL/Fl_Image.H **** #include <stdlib.h>
  27:fltk-1.3.4-1/FL/Fl_Image.H **** 
  28:fltk-1.3.4-1/FL/Fl_Image.H **** class Fl_Widget;
  29:fltk-1.3.4-1/FL/Fl_Image.H **** class Fl_Pixmap;
  30:fltk-1.3.4-1/FL/Fl_Image.H **** struct Fl_Menu_Item;
  31:fltk-1.3.4-1/FL/Fl_Image.H **** struct Fl_Label;
  32:fltk-1.3.4-1/FL/Fl_Image.H **** 
  33:fltk-1.3.4-1/FL/Fl_Image.H **** 
  34:fltk-1.3.4-1/FL/Fl_Image.H **** /** \enum Fl_RGB_Scaling
  35:fltk-1.3.4-1/FL/Fl_Image.H ****  The scaling algorithm to use for RGB images.
  36:fltk-1.3.4-1/FL/Fl_Image.H **** */
  37:fltk-1.3.4-1/FL/Fl_Image.H **** enum Fl_RGB_Scaling {
  38:fltk-1.3.4-1/FL/Fl_Image.H ****   FL_RGB_SCALING_NEAREST = 0, ///< default RGB image scaling algorithm
  39:fltk-1.3.4-1/FL/Fl_Image.H ****   FL_RGB_SCALING_BILINEAR     ///< more accurate, but slower RGB image scaling algorithm
  40:fltk-1.3.4-1/FL/Fl_Image.H **** };
  41:fltk-1.3.4-1/FL/Fl_Image.H **** 
  42:fltk-1.3.4-1/FL/Fl_Image.H **** 
  43:fltk-1.3.4-1/FL/Fl_Image.H **** /**
  44:fltk-1.3.4-1/FL/Fl_Image.H ****  \brief Base class for image caching and drawing.
  45:fltk-1.3.4-1/FL/Fl_Image.H ****  
  46:fltk-1.3.4-1/FL/Fl_Image.H ****  Fl_Image is the base class used for caching and drawing all kinds of images 
  47:fltk-1.3.4-1/FL/Fl_Image.H ****  in FLTK. This class keeps track of common image data such as the pixels, 
  48:fltk-1.3.4-1/FL/Fl_Image.H ****  colormap, width, height, and depth. Virtual methods are used to provide 
  49:fltk-1.3.4-1/FL/Fl_Image.H ****  type-specific image handling.
  50:fltk-1.3.4-1/FL/Fl_Image.H ****   
  51:fltk-1.3.4-1/FL/Fl_Image.H ****  Since the Fl_Image class does not support image
  52:fltk-1.3.4-1/FL/Fl_Image.H ****  drawing by itself, calling the draw() method results in
  53:fltk-1.3.4-1/FL/Fl_Image.H ****  a box with an X in it being drawn instead.
  54:fltk-1.3.4-1/FL/Fl_Image.H **** */
  55:fltk-1.3.4-1/FL/Fl_Image.H **** class FL_EXPORT Fl_Image {
  56:fltk-1.3.4-1/FL/Fl_Image.H ****     
  57:fltk-1.3.4-1/FL/Fl_Image.H **** public:
  58:fltk-1.3.4-1/FL/Fl_Image.H ****   static const int ERR_NO_IMAGE    = -1;
  59:fltk-1.3.4-1/FL/Fl_Image.H ****   static const int ERR_FILE_ACCESS = -2;
  60:fltk-1.3.4-1/FL/Fl_Image.H ****   static const int ERR_FORMAT      = -3;
  61:fltk-1.3.4-1/FL/Fl_Image.H ****     
  62:fltk-1.3.4-1/FL/Fl_Image.H **** private:
  63:fltk-1.3.4-1/FL/Fl_Image.H ****   int w_, h_, d_, ld_, count_;
  64:fltk-1.3.4-1/FL/Fl_Image.H ****   const char * const *data_;
  65:fltk-1.3.4-1/FL/Fl_Image.H ****   static Fl_RGB_Scaling RGB_scaling_;
  66:fltk-1.3.4-1/FL/Fl_Image.H **** 
  67:fltk-1.3.4-1/FL/Fl_Image.H ****   // Forbid use of copy constructor and assign operator
  68:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image & operator=(const Fl_Image &);
  69:fltk-1.3.4-1/FL/Fl_Image.H ****   Fl_Image(const Fl_Image &);
  70:fltk-1.3.4-1/FL/Fl_Image.H **** 
  71:fltk-1.3.4-1/FL/Fl_Image.H **** protected:
  72:fltk-1.3.4-1/FL/Fl_Image.H **** 
  73:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  74:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image width in pixels.
  75:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  76:fltk-1.3.4-1/FL/Fl_Image.H ****   void w(int W) {w_ = W;}
  77:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  78:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image height in pixels.
  79:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  80:fltk-1.3.4-1/FL/Fl_Image.H ****   void h(int H) {h_ = H;}
  81:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  82:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current image depth.
  83:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   void d(int D) {d_ = D;}
  85:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
  86:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current line data size in bytes.
  87:fltk-1.3.4-1/FL/Fl_Image.H **** 
  88:fltk-1.3.4-1/FL/Fl_Image.H ****    Color images may contain extra data that is included after every
  89:fltk-1.3.4-1/FL/Fl_Image.H ****    line of color image data and is normally not present.
  90:fltk-1.3.4-1/FL/Fl_Image.H **** 
  91:fltk-1.3.4-1/FL/Fl_Image.H ****    If \p LD is zero, then line data size is assumed to be w() * d() bytes.
  92:fltk-1.3.4-1/FL/Fl_Image.H **** 
  93:fltk-1.3.4-1/FL/Fl_Image.H ****    If \p LD is non-zero, then it must be positive and larger than w() * d()
  94:fltk-1.3.4-1/FL/Fl_Image.H ****    to account for the extra data per line.
  95:fltk-1.3.4-1/FL/Fl_Image.H ****    */
  96:fltk-1.3.4-1/FL/Fl_Image.H ****   void ld(int LD) {ld_ = LD;}
  97:fltk-1.3.4-1/FL/Fl_Image.H ****   /** 
  98:fltk-1.3.4-1/FL/Fl_Image.H ****    Sets the current array pointer and count of pointers in the array.
  99:fltk-1.3.4-1/FL/Fl_Image.H ****    */
 100:fltk-1.3.4-1/FL/Fl_Image.H ****   void data(const char * const *p, int c) {data_ = p; count_ = c;}
 2930              		.loc 10 100 0
 2931 0ab5 41C74718 		movl	$1, 24(%r15)
 2931      01000000 
 2932              	.LVL373:
 2933              	.LBE603:
 2934              	.LBE602:
 2935              	.LBE605:
 2936              	.LBE607:
 2937              		.loc 1 67 0
 2938 0abd 4C893D00 		movq	%r15, _ZZL9image_newvE5image(%rip)
 2938      000000
 2939 0ac4 E8000000 		call	__cxa_guard_release
 2939      00
 2940              	.LVL374:
 2941 0ac9 488B9330 		movq	6192(%rbx), %rdx
 2941      180000
 2942 0ad0 4C89F8   		movq	%r15, %rax
 2943 0ad3 E9ECF6FF 		jmp	.L79
 2943      FF
 2944              	.LVL375:
 2945 0ad8 0F1F8400 		.p2align 4,,10
 2945      00000000 
 2946              		.p2align 3
 2947              	.L87:
 2948              	.LBE609:
 2949              	.LBE617:
 2950              	.LBE618:
 2951              	.LBE683:
 2952              	.LBE722:
 2953              		.loc 1 171 0
 2954 0ae0 BF180000 		movl	$24, %edi
 2954      00
 2955 0ae5 E8000000 		call	_Znwm
 2955      00
 2956              	.LVL376:
 2957 0aea B9000000 		movl	$.LC41, %ecx
 2957      00
 2958 0aef 4889C5   		movq	%rax, %rbp
 2959 0af2 BA000000 		movl	$.LC42, %edx
 2959      00
 2960 0af7 BE010000 		movl	$1, %esi
 2960      00
 2961 0afc 4889C7   		movq	%rax, %rdi
 2962 0aff E8000000 		call	_ZN14Fl_PreferencesC1ENS_4RootEPKcS2_
 2962      00
 2963              	.LVL377:
 2964 0b04 48892D00 		movq	%rbp, _ZN15Fl_File_Chooser6prefs_E(%rip)
 2964      000000
 2965 0b0b E92FF5FF 		jmp	.L77
 2965      FF
 2966              	.LVL378:
 2967              	.L88:
 2968              	.LBE725:
 2969              		.loc 1 318 0
 2970 0b10 E8000000 		call	__stack_chk_fail
 2970      00
 2971              	.LVL379:
 2972              		.cfi_endproc
 2973              	.LFE722:
 2975              		.section	.text.unlikely._ZN15Fl_File_ChooserC2EPKcS1_iS1_
 2976              	.LCOLDE58:
 2977              		.section	.text._ZN15Fl_File_ChooserC2EPKcS1_iS1_
 2978              	.LHOTE58:
 2979              		.globl	_ZN15Fl_File_ChooserC1EPKcS1_iS1_
 2980              		.set	_ZN15Fl_File_ChooserC1EPKcS1_iS1_,_ZN15Fl_File_ChooserC2EPKcS1_iS1_
 2981              		.section	.text.unlikely._ZN15Fl_File_Chooser4typeEv,"ax",@progbits
 2982              		.align 2
 2983              	.LCOLDB59:
 2984              		.section	.text._ZN15Fl_File_Chooser4typeEv,"ax",@progbits
 2985              	.LHOTB59:
 2986              		.align 2
 2987              		.p2align 4,,15
 2988              		.globl	_ZN15Fl_File_Chooser4typeEv
 2990              	_ZN15Fl_File_Chooser4typeEv:
 2991              	.LFB749:
 2992              		.loc 1 434 0
 2993              		.cfi_startproc
 2994              	.LVL380:
 2995              		.loc 1 435 0
 2996 0000 8B871018 		movl	6160(%rdi), %eax
 2996      0000
 2997              		.loc 1 436 0
 2998 0006 C3       		ret
 2999              		.cfi_endproc
 3000              	.LFE749:
 3002              		.section	.text.unlikely._ZN15Fl_File_Chooser4typeEv
 3003              	.LCOLDE59:
 3004              		.section	.text._ZN15Fl_File_Chooser4typeEv
 3005              	.LHOTE59:
 3006              		.section	.text.unlikely._ZNK15Fl_File_Chooser9user_dataEv,"ax",@progbits
 3007              		.align 2
 3008              	.LCOLDB60:
 3009              		.section	.text._ZNK15Fl_File_Chooser9user_dataEv,"ax",@progbits
 3010              	.LHOTB60:
 3011              		.align 2
 3012              		.p2align 4,,15
 3013              		.globl	_ZNK15Fl_File_Chooser9user_dataEv
 3015              	_ZNK15Fl_File_Chooser9user_dataEv:
 3016              	.LFB750:
 3017              		.loc 1 438 0
 3018              		.cfi_startproc
 3019              	.LVL381:
 3020              		.loc 1 439 0
 3021 0000 488B4708 		movq	8(%rdi), %rax
 3022              		.loc 1 440 0
 3023 0004 C3       		ret
 3024              		.cfi_endproc
 3025              	.LFE750:
 3027              		.section	.text.unlikely._ZNK15Fl_File_Chooser9user_dataEv
 3028              	.LCOLDE60:
 3029              		.section	.text._ZNK15Fl_File_Chooser9user_dataEv
 3030              	.LHOTE60:
 3031              		.section	.text.unlikely._ZN15Fl_File_Chooser9user_dataEPv,"ax",@progbits
 3032              		.align 2
 3033              	.LCOLDB61:
 3034              		.section	.text._ZN15Fl_File_Chooser9user_dataEPv,"ax",@progbits
 3035              	.LHOTB61:
 3036              		.align 2
 3037              		.p2align 4,,15
 3038              		.globl	_ZN15Fl_File_Chooser9user_dataEPv
 3040              	_ZN15Fl_File_Chooser9user_dataEPv:
 3041              	.LFB751:
 3042              		.loc 1 442 0
 3043              		.cfi_startproc
 3044              	.LVL382:
 3045              		.loc 1 443 0
 3046 0000 48897708 		movq	%rsi, 8(%rdi)
 3047 0004 C3       		ret
 3048              		.cfi_endproc
 3049              	.LFE751:
 3051              		.section	.text.unlikely._ZN15Fl_File_Chooser9user_dataEPv
 3052              	.LCOLDE61:
 3053              		.section	.text._ZN15Fl_File_Chooser9user_dataEPv
 3054              	.LHOTE61:
 3055              		.section	.text.unlikely._ZN15Fl_File_Chooser7visibleEv,"ax",@progbits
 3056              		.align 2
 3057              	.LCOLDB62:
 3058              		.section	.text._ZN15Fl_File_Chooser7visibleEv,"ax",@progbits
 3059              	.LHOTB62:
 3060              		.align 2
 3061              		.p2align 4,,15
 3062              		.globl	_ZN15Fl_File_Chooser7visibleEv
 3064              	_ZN15Fl_File_Chooser7visibleEv:
 3065              	.LFB752:
 3066              		.loc 1 446 0
 3067              		.cfi_startproc
 3068              	.LVL383:
 3069 0000 488B8718 		movq	6168(%rdi), %rax
 3069      180000
 3070              		.loc 1 447 0
 3071 0007 8B4060   		movl	96(%rax), %eax
 3072 000a D1E8     		shrl	%eax
 3073 000c 83F001   		xorl	$1, %eax
 3074 000f 83E001   		andl	$1, %eax
 3075              		.loc 1 448 0
 3076 0012 C3       		ret
 3077              		.cfi_endproc
 3078              	.LFE752:
 3080              		.section	.text.unlikely._ZN15Fl_File_Chooser7visibleEv
 3081              	.LCOLDE62:
 3082              		.section	.text._ZN15Fl_File_Chooser7visibleEv
 3083              	.LHOTE62:
 3084              		.section	.text.unlikely._ZN15Fl_File_Chooser9add_extraEP9Fl_Widget,"ax",@progbits
 3085              		.align 2
 3086              	.LCOLDB63:
 3087              		.section	.text._ZN15Fl_File_Chooser9add_extraEP9Fl_Widget,"ax",@progbits
 3088              	.LHOTB63:
 3089              		.align 2
 3090              		.p2align 4,,15
 3091              		.globl	_ZN15Fl_File_Chooser9add_extraEP9Fl_Widget
 3093              	_ZN15Fl_File_Chooser9add_extraEP9Fl_Widget:
 3094              	.LFB753:
 3095              		.loc 1 450 0
 3096              		.cfi_startproc
 3097              	.LVL384:
 3098 0000 4155     		pushq	%r13
 3099              		.cfi_def_cfa_offset 16
 3100              		.cfi_offset 13, -16
 3101 0002 4154     		pushq	%r12
 3102              		.cfi_def_cfa_offset 24
 3103              		.cfi_offset 12, -24
 3104 0004 55       		pushq	%rbp
 3105              		.cfi_def_cfa_offset 32
 3106              		.cfi_offset 6, -32
 3107 0005 53       		pushq	%rbx
 3108              		.cfi_def_cfa_offset 40
 3109              		.cfi_offset 3, -40
 3110 0006 4883EC08 		subq	$8, %rsp
 3111              		.cfi_def_cfa_offset 48
 3112              		.loc 1 451 0
 3113 000a 4C8BA7A8 		movq	6312(%rdi), %r12
 3113      180000
 3114              	.LVL385:
 3115              		.loc 1 452 0
 3116 0011 4939F4   		cmpq	%rsi, %r12
 3117 0014 0F840301 		je	.L95
 3117      0000
 3118              	.LBB726:
 3119              		.loc 1 455 0
 3120 001a 4D85E4   		testq	%r12, %r12
 3121 001d 4889F5   		movq	%rsi, %rbp
 3122 0020 4889FB   		movq	%rdi, %rbx
 3123 0023 746B     		je	.L96
 3124              	.LVL386:
 3125              	.LBB727:
 3126              		.loc 1 457 0
 3127 0025 488B9718 		movq	6168(%rdi), %rdx
 3127      180000
 3128              		.loc 1 456 0
 3129 002c 418B4424 		movl	44(%r12), %eax
 3129      2C
 3130 0031 4C8BAA88 		movq	136(%rdx), %r13
 3130      000000
 3131              	.LBB728:
 3132              	.LBB729:
 3133              		.loc 2 148 0
 3134 0038 48C78288 		movq	$0, 136(%rdx)
 3134      00000000 
 3134      000000
 3135              	.LBE729:
 3136              	.LBE728:
 3137              		.loc 1 456 0
 3138 0043 83C004   		addl	$4, %eax
 3139              	.LVL387:
 3140              		.loc 1 459 0
 3141 0046 488BBF18 		movq	6168(%rdi), %rdi
 3141      180000
 3142              	.LVL388:
 3143              	.LBB730:
 3144              	.LBB731:
 341:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3145              		.loc 3 341 0
 3146 004d 4C8B0F   		movq	(%rdi), %r9
 3147 0050 448B472C 		movl	44(%rdi), %r8d
 3148 0054 8B4F28   		movl	40(%rdi), %ecx
 3149 0057 8B5724   		movl	36(%rdi), %edx
 3150              	.LVL389:
 3151 005a 8B7720   		movl	32(%rdi), %esi
 3152              	.LVL390:
 3153 005d 4129C0   		subl	%eax, %r8d
 3154              	.LVL391:
 3155 0060 41FF5120 		call	*32(%r9)
 3156              	.LVL392:
 3157              	.LBE731:
 3158              	.LBE730:
 3159              	.LBB732:
 3160              	.LBB733:
 111:fltk-1.3.4-1/FL/Fl_Group.H ****   void clear();
 3161              		.loc 2 111 0
 3162 0064 488BB3A8 		movq	6312(%rbx), %rsi
 3162      180000
 3163 006b 488BBB18 		movq	6168(%rbx), %rdi
 3163      180000
 3164 0072 E8000000 		call	_ZN8Fl_Group6removeER9Fl_Widget
 3164      00
 3165              	.LVL393:
 3166              	.LBE733:
 3167              	.LBE732:
 3168              		.loc 1 462 0
 3169 0077 488B8318 		movq	6168(%rbx), %rax
 3169      180000
 3170              	.LVL394:
 3171              		.loc 1 461 0
 3172 007e 48C783A8 		movq	$0, 6312(%rbx)
 3172      18000000 
 3172      000000
 3173              	.LBB734:
 3174              	.LBB735:
 3175              		.loc 2 148 0
 3176 0089 4C89A888 		movq	%r13, 136(%rax)
 3176      000000
 3177              	.LVL395:
 3178              	.L96:
 3179              	.LBE735:
 3180              	.LBE734:
 3181              	.LBE727:
 3182              	.LBE726:
 3183              	.LBB736:
 3184              		.loc 1 464 0
 3185 0090 4885ED   		testq	%rbp, %rbp
 3186 0093 0F848400 		je	.L95
 3186      0000
 3187              	.LBB737:
 3188              		.loc 1 465 0
 3189 0099 488B9318 		movq	6168(%rbx), %rdx
 3189      180000
 3190              	.LVL396:
 3191 00a0 8B452C   		movl	44(%rbp), %eax
 3192 00a3 4C8BAA88 		movq	136(%rdx), %r13
 3192      000000
 3193              	.LBB738:
 3194              	.LBB739:
 3195              		.loc 2 148 0
 3196 00aa 48C78288 		movq	$0, 136(%rdx)
 3196      00000000 
 3196      000000
 3197              	.LBE739:
 3198              	.LBE738:
 3199              		.loc 1 468 0
 3200 00b5 488BBB18 		movq	6168(%rbx), %rdi
 3200      180000
 3201              		.loc 1 465 0
 3202 00bc 03422C   		addl	44(%rdx), %eax
 3203              	.LVL397:
 3204              	.LBB740:
 3205              	.LBB741:
 341:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3206              		.loc 3 341 0
 3207 00bf 4C8B0F   		movq	(%rdi), %r9
 3208 00c2 8B4F28   		movl	40(%rdi), %ecx
 3209 00c5 8B5724   		movl	36(%rdi), %edx
 3210              	.LVL398:
 3211 00c8 8B7720   		movl	32(%rdi), %esi
 3212 00cb 448D4004 		leal	4(%rax), %r8d
 3213              	.LVL399:
 3214 00cf 41FF5120 		call	*32(%r9)
 3215              	.LVL400:
 3216              	.LBE741:
 3217              	.LBE740:
 3218              		.loc 1 469 0
 3219 00d3 488B8360 		movq	6240(%rbx), %rax
 3219      180000
 3220              	.LVL401:
 3221              	.LBB742:
 3222              	.LBB743:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 3223              		.loc 3 332 0
 3224 00da 8B4D28   		movl	40(%rbp), %ecx
 3225 00dd BE020000 		movl	$2, %esi
 3225      00
 3226 00e2 448B452C 		movl	44(%rbp), %r8d
 3227 00e6 4889EF   		movq	%rbp, %rdi
 3228 00e9 8B502C   		movl	44(%rax), %edx
 3229 00ec 035024   		addl	36(%rax), %edx
 3230 00ef 488B4500 		movq	0(%rbp), %rax
 3231              	.LVL402:
 3232 00f3 83C202   		addl	$2, %edx
 3233              	.LVL403:
 3234 00f6 FF5020   		call	*32(%rax)
 3235              	.LVL404:
 3236              	.LBE743:
 3237              	.LBE742:
 3238              	.LBB744:
 3239              	.LBB745:
  98:fltk-1.3.4-1/FL/Fl_Group.H ****   void insert(Fl_Widget&, int i);
 3240              		.loc 2 98 0
 3241 00f9 488BBB18 		movq	6168(%rbx), %rdi
 3241      180000
 3242 0100 4889EE   		movq	%rbp, %rsi
 3243 0103 E8000000 		call	_ZN8Fl_Group3addER9Fl_Widget
 3243      00
 3244              	.LVL405:
 3245              	.LBE745:
 3246              	.LBE744:
 3247              		.loc 1 472 0
 3248 0108 488B8318 		movq	6168(%rbx), %rax
 3248      180000
 3249              	.LVL406:
 3250              		.loc 1 471 0
 3251 010f 4889ABA8 		movq	%rbp, 6312(%rbx)
 3251      180000
 3252              	.LBB746:
 3253              	.LBB747:
 3254              		.loc 2 148 0
 3255 0116 4C89A888 		movq	%r13, 136(%rax)
 3255      000000
 3256              	.LVL407:
 3257              	.L95:
 3258              	.LBE747:
 3259              	.LBE746:
 3260              	.LBE737:
 3261              	.LBE736:
 3262              		.loc 1 475 0
 3263 011d 4883C408 		addq	$8, %rsp
 3264              		.cfi_def_cfa_offset 40
 3265 0121 4C89E0   		movq	%r12, %rax
 3266 0124 5B       		popq	%rbx
 3267              		.cfi_def_cfa_offset 32
 3268 0125 5D       		popq	%rbp
 3269              		.cfi_def_cfa_offset 24
 3270 0126 415C     		popq	%r12
 3271              		.cfi_def_cfa_offset 16
 3272              	.LVL408:
 3273 0128 415D     		popq	%r13
 3274              		.cfi_def_cfa_offset 8
 3275 012a C3       		ret
 3276              		.cfi_endproc
 3277              	.LFE753:
 3279              		.section	.text.unlikely._ZN15Fl_File_Chooser9add_extraEP9Fl_Widget
 3280              	.LCOLDE63:
 3281              		.section	.text._ZN15Fl_File_Chooser9add_extraEP9Fl_Widget
 3282              	.LHOTE63:
 3283              		.section	.bss._ZZL9image_newvE5image,"aw",@nobits
 3284              		.align 8
 3287              	_ZZL9image_newvE5image:
 3288 0000 00000000 		.zero	8
 3288      00000000 
 3289              		.section	.bss._ZGVZL9image_newvE5image,"aw",@nobits
 3290              		.align 8
 3293              	_ZGVZL9image_newvE5image:
 3294 0000 00000000 		.zero	8
 3294      00000000 
 3295              		.section	.rodata._ZL9idata_new,"a",@progbits
 3296              		.align 32
 3299              	_ZL9idata_new:
 3300 0000 00       		.byte	0
 3301 0001 00       		.byte	0
 3302 0002 78       		.byte	120
 3303 0003 00       		.byte	0
 3304 0004 84       		.byte	-124
 3305 0005 00       		.byte	0
 3306 0006 02       		.byte	2
 3307 0007 01       		.byte	1
 3308 0008 01       		.byte	1
 3309 0009 FE       		.byte	-2
 3310 000a 01       		.byte	1
 3311 000b 80       		.byte	-128
 3312 000c 31       		.byte	49
 3313 000d 80       		.byte	-128
 3314 000e 31       		.byte	49
 3315 000f 80       		.byte	-128
 3316 0010 FD       		.byte	-3
 3317 0011 80       		.byte	-128
 3318 0012 FD       		.byte	-3
 3319 0013 80       		.byte	-128
 3320 0014 31       		.byte	49
 3321 0015 80       		.byte	-128
 3322 0016 31       		.byte	49
 3323 0017 80       		.byte	-128
 3324 0018 01       		.byte	1
 3325 0019 80       		.byte	-128
 3326 001a 01       		.byte	1
 3327 001b 80       		.byte	-128
 3328 001c FF       		.byte	-1
 3329 001d FF       		.byte	-1
 3330 001e 00       		.byte	0
 3331 001f 00       		.byte	0
 3332              		.text
 3333              	.Letext0:
 3334              		.section	.text.unlikely._ZN15Fl_File_Chooser11cb_okButtonEP16Fl_Return_ButtonPv
 3335              	.Letext_cold0:
 3336              		.file 11 "fltk-1.3.4-1/FL/fl_types.h"
 3337              		.file 12 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 3338              		.file 13 "/usr/include/x86_64-linux-gnu/bits/types.h"
 3339              		.file 14 "/usr/include/libio.h"
 3340              		.file 15 "fltk-1.3.4-1/FL/Enumerations.H"
 3341              		.file 16 "fltk-1.3.4-1/FL/Fl.H"
 3342              		.file 17 "fltk-1.3.4-1/FL/Fl_Browser.H"
 3343              		.file 18 "/usr/include/x86_64-linux-gnu/bits/dirent.h"
 3344              		.file 19 "fltk-1.3.4-1/FL/filename.H"
 3345              		.file 20 "fltk-1.3.4-1/src/../FL/Fl_File_Chooser.H"
 3346              		.file 21 "fltk-1.3.4-1/FL/Fl_Choice.H"
 3347              		.file 22 "fltk-1.3.4-1/FL/Fl_File_Input.H"
 3348              		.file 23 "fltk-1.3.4-1/FL/Fl_Device.H"
 3349              		.file 24 "fltk-1.3.4-1/FL/Fl_Preferences.H"
 3350              		.file 25 "/usr/include/stdio.h"
 3351              		.file 26 "fltk-1.3.4-1/FL/fl_ask.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_File_Chooser.cxx
     /tmp/cc5cMn65.s:16     .text._ZN15Fl_File_Chooser11cb_okButtonEP16Fl_Return_ButtonPv:0000000000000000 _ZN15Fl_File_Chooser11cb_okButtonEP16Fl_Return_ButtonPv
     /tmp/cc5cMn65.s:83     .text._ZN15Fl_File_Chooser18cb_favCancelButtonEP9Fl_ButtonPv:0000000000000000 _ZN15Fl_File_Chooser18cb_favCancelButtonEP9Fl_ButtonPv
     /tmp/cc5cMn65.s:117    .text._ZN15Fl_File_Chooser13cb_showChoiceEP9Fl_ChoicePv:0000000000000000 _ZN15Fl_File_Chooser13cb_showChoiceEP9Fl_ChoicePv
     /tmp/cc5cMn65.s:149    .text._ZN15Fl_File_Chooser18cb_favoritesButtonEP14Fl_Menu_ButtonPv:0000000000000000 _ZN15Fl_File_Chooser18cb_favoritesButtonEP14Fl_Menu_ButtonPv
     /tmp/cc5cMn65.s:181    .text._ZN15Fl_File_Chooser12cb_newButtonEP9Fl_ButtonPv:0000000000000000 _ZN15Fl_File_Chooser12cb_newButtonEP9Fl_ButtonPv
     /tmp/cc5cMn65.s:213    .text._ZN15Fl_File_Chooser3cb_EP7Fl_TilePv:0000000000000000 _ZN15Fl_File_Chooser3cb_EP7Fl_TilePv
     /tmp/cc5cMn65.s:244    .text._ZN15Fl_File_Chooser11cb_fileListEP15Fl_File_BrowserPv:0000000000000000 _ZN15Fl_File_Chooser11cb_fileListEP15Fl_File_BrowserPv
     /tmp/cc5cMn65.s:276    .text._ZN15Fl_File_Chooser16cb_previewButtonEP15Fl_Check_ButtonPv:0000000000000000 _ZN15Fl_File_Chooser16cb_previewButtonEP15Fl_Check_ButtonPv
     /tmp/cc5cMn65.s:312    .text._ZN15Fl_File_Chooser19cb_showHiddenButtonEP15Fl_Check_ButtonPv:0000000000000000 _ZN15Fl_File_Chooser19cb_showHiddenButtonEP15Fl_Check_ButtonPv
     /tmp/cc5cMn65.s:348    .text._ZN15Fl_File_Chooser11cb_fileNameEP13Fl_File_InputPv:0000000000000000 _ZN15Fl_File_Chooser11cb_fileNameEP13Fl_File_InputPv
     /tmp/cc5cMn65.s:380    .text._ZN15Fl_File_Chooser10cb_favListEP15Fl_File_BrowserPv:0000000000000000 _ZN15Fl_File_Chooser10cb_favListEP15Fl_File_BrowserPv
     /tmp/cc5cMn65.s:413    .text._ZN15Fl_File_Chooser14cb_favUpButtonEP9Fl_ButtonPv:0000000000000000 _ZN15Fl_File_Chooser14cb_favUpButtonEP9Fl_ButtonPv
     /tmp/cc5cMn65.s:447    .text._ZN15Fl_File_Chooser18cb_favDeleteButtonEP9Fl_ButtonPv:0000000000000000 _ZN15Fl_File_Chooser18cb_favDeleteButtonEP9Fl_ButtonPv
     /tmp/cc5cMn65.s:481    .text._ZN15Fl_File_Chooser16cb_favDownButtonEP9Fl_ButtonPv:0000000000000000 _ZN15Fl_File_Chooser16cb_favDownButtonEP9Fl_ButtonPv
     /tmp/cc5cMn65.s:515    .text._ZN15Fl_File_Chooser14cb_favOkButtonEP16Fl_Return_ButtonPv:0000000000000000 _ZN15Fl_File_Chooser14cb_favOkButtonEP16Fl_Return_ButtonPv
     /tmp/cc5cMn65.s:552    .text._ZN15Fl_File_Chooser15cb_cancelButtonEP9Fl_ButtonPv:0000000000000000 _ZN15Fl_File_Chooser15cb_cancelButtonEP9Fl_ButtonPv
     /tmp/cc5cMn65.s:618    .text._ZN15Fl_File_Chooser9cb_windowEP16Fl_Double_WindowPv:0000000000000000 _ZN15Fl_File_Chooser9cb_windowEP16Fl_Double_WindowPv
     /tmp/cc5cMn65.s:680    .text._ZN15Fl_File_ChooserD2Ev:0000000000000000 _ZN15Fl_File_ChooserD2Ev
     /tmp/cc5cMn65.s:680    .text._ZN15Fl_File_ChooserD2Ev:0000000000000000 _ZN15Fl_File_ChooserD1Ev
     /tmp/cc5cMn65.s:769    .text._ZN15Fl_File_Chooser8callbackEPFvPS_PvES1_:0000000000000000 _ZN15Fl_File_Chooser8callbackEPFvPS_PvES1_
     /tmp/cc5cMn65.s:795    .text._ZN15Fl_File_Chooser5colorEj:0000000000000000 _ZN15Fl_File_Chooser5colorEj
     /tmp/cc5cMn65.s:828    .text._ZN15Fl_File_Chooser5colorEv:0000000000000000 _ZN15Fl_File_Chooser5colorEv
     /tmp/cc5cMn65.s:854    .text._ZN15Fl_File_Chooser9directoryEv:0000000000000000 _ZN15Fl_File_Chooser9directoryEv
     /tmp/cc5cMn65.s:879    .text._ZN15Fl_File_Chooser6filterEv:0000000000000000 _ZN15Fl_File_Chooser6filterEv
     /tmp/cc5cMn65.s:905    .text._ZN15Fl_File_Chooser12filter_valueEv:0000000000000000 _ZN15Fl_File_Chooser12filter_valueEv
     /tmp/cc5cMn65.s:951    .text._ZN15Fl_File_Chooser12filter_valueEi:0000000000000000 _ZN15Fl_File_Chooser12filter_valueEi
     /tmp/cc5cMn65.s:991    .text._ZN15Fl_File_Chooser4hideEv:0000000000000000 _ZN15Fl_File_Chooser4hideEv
     /tmp/cc5cMn65.s:1018   .text._ZN15Fl_File_Chooser8iconsizeEh:0000000000000000 _ZN15Fl_File_Chooser8iconsizeEh
     /tmp/cc5cMn65.s:1051   .text._ZN15Fl_File_Chooser8iconsizeEv:0000000000000000 _ZN15Fl_File_Chooser8iconsizeEv
     /tmp/cc5cMn65.s:1077   .text._ZN15Fl_File_Chooser5labelEPKc:0000000000000000 _ZN15Fl_File_Chooser5labelEPKc
     /tmp/cc5cMn65.s:1103   .text._ZN15Fl_File_Chooser5labelEv:0000000000000000 _ZN15Fl_File_Chooser5labelEv
     /tmp/cc5cMn65.s:1129   .text._ZN15Fl_File_Chooser8ok_labelEPKc:0000000000000000 _ZN15Fl_File_Chooser8ok_labelEPKc
     /tmp/cc5cMn65.s:1228   .text._ZN15Fl_File_Chooser8ok_labelEv:0000000000000000 _ZN15Fl_File_Chooser8ok_labelEv
     /tmp/cc5cMn65.s:1254   .text._ZN15Fl_File_Chooser5shownEv:0000000000000000 _ZN15Fl_File_Chooser5shownEv
     /tmp/cc5cMn65.s:1282   .text._ZN15Fl_File_Chooser9textcolorEj:0000000000000000 _ZN15Fl_File_Chooser9textcolorEj
     /tmp/cc5cMn65.s:1315   .text._ZN15Fl_File_Chooser9textcolorEv:0000000000000000 _ZN15Fl_File_Chooser9textcolorEv
     /tmp/cc5cMn65.s:1341   .text._ZN15Fl_File_Chooser8textfontEi:0000000000000000 _ZN15Fl_File_Chooser8textfontEi
     /tmp/cc5cMn65.s:1373   .text._ZN15Fl_File_Chooser8textfontEv:0000000000000000 _ZN15Fl_File_Chooser8textfontEv
     /tmp/cc5cMn65.s:1399   .text._ZN15Fl_File_Chooser8textsizeEi:0000000000000000 _ZN15Fl_File_Chooser8textsizeEi
     /tmp/cc5cMn65.s:1457   .text._ZN15Fl_File_Chooser8textsizeEv:0000000000000000 _ZN15Fl_File_Chooser8textsizeEv
     /tmp/cc5cMn65.s:1483   .text._ZN15Fl_File_Chooser4typeEi:0000000000000000 _ZN15Fl_File_Chooser4typeEi
     /tmp/cc5cMn65.s:1648   .text._ZN15Fl_File_ChooserC2EPKcS1_iS1_:0000000000000000 _ZN15Fl_File_ChooserC2EPKcS1_iS1_
     /tmp/cc5cMn65.s:3293   .bss._ZGVZL9image_newvE5image:0000000000000000 _ZGVZL9image_newvE5image
     /tmp/cc5cMn65.s:3287   .bss._ZZL9image_newvE5image:0000000000000000 _ZZL9image_newvE5image
     /tmp/cc5cMn65.s:3299   .rodata._ZL9idata_new:0000000000000000 _ZL9idata_new
     /tmp/cc5cMn65.s:1648   .text._ZN15Fl_File_ChooserC2EPKcS1_iS1_:0000000000000000 _ZN15Fl_File_ChooserC1EPKcS1_iS1_
     /tmp/cc5cMn65.s:2990   .text._ZN15Fl_File_Chooser4typeEv:0000000000000000 _ZN15Fl_File_Chooser4typeEv
     /tmp/cc5cMn65.s:3015   .text._ZNK15Fl_File_Chooser9user_dataEv:0000000000000000 _ZNK15Fl_File_Chooser9user_dataEv
     /tmp/cc5cMn65.s:3040   .text._ZN15Fl_File_Chooser9user_dataEPv:0000000000000000 _ZN15Fl_File_Chooser9user_dataEPv
     /tmp/cc5cMn65.s:3064   .text._ZN15Fl_File_Chooser7visibleEv:0000000000000000 _ZN15Fl_File_Chooser7visibleEv
     /tmp/cc5cMn65.s:3093   .text._ZN15Fl_File_Chooser9add_extraEP9Fl_Widget:0000000000000000 _ZN15Fl_File_Chooser9add_extraEP9Fl_Widget
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
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.Fl_Button.H.23.dd2f7f39568a498db4235a51d94ff020
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
                           .group:0000000000000000 wm4.Fl_Slider.H.30.63744dea3b9f91e5e3b5b1297ae0bb9d
                           .group:0000000000000000 wm4.Fl_Browser_.H.33.3c969d598ffa0d0ae61e0a4412aa05a2
                           .group:0000000000000000 wm4.filename.H.30.99b1a2d49dfb41118316d590634dc617
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
                           .group:0000000000000000 wm4.Fl_Input_.H.23.0358bf58b9391621e5f90e01bc1d1bea
                           .group:0000000000000000 wm4.fl_ask.H.24.be48b4476a0524cdb7b19216c6f73157
                           .group:0000000000000000 wm4.Xlib.h.34.459c895ca349721c12859796b456b2b6
                           .group:0000000000000000 wm4.X.h.4.454d886ca229b34d1a45d073c5ef2641
                           .group:0000000000000000 wm4.Xfuncproto.h.31.06e425817e87036b2d7b94d062f1f31b
                           .group:0000000000000000 wm4.stddef.h.39.00137ad0275e3bca492dca30adbe2e71
                           .group:0000000000000000 wm4.Xlib.h.70.3bd67b0be45264d3bcbde53e94c28626
                           .group:0000000000000000 wm4.keysym.h.49.033c61cc3c7e362b1b6980e8e6a00bf4
                           .group:0000000000000000 wm4.keysymdef.h.115.a18224703ed0ddcd32045b3e8c3a2fdd
                           .group:0000000000000000 wm4.Xutil.h.68.41e78f06cd85385aec49c11e5083e37f
                           .group:0000000000000000 wm4.Xatom.h.2.e1af34501660e315b7ae3c18792e5b8c
                           .group:0000000000000000 wm4.x.H.75.d845a5777fb772b9dead4d174732ff1d
                           .group:0000000000000000 wm4.Fl_Device.H.62.0b803843b22f39545ac86f12f2aa989b

UNDEFINED SYMBOLS
_ZN15Fl_File_Chooser12showChoiceCBEv
_ZN15Fl_File_Chooser17favoritesButtonCBEv
_ZN15Fl_File_Chooser6newdirEv
_ZN15Fl_File_Chooser14update_previewEv
_ZN15Fl_File_Chooser10fileListCBEv
_ZN15Fl_File_Chooser7previewEi
_ZN15Fl_File_Chooser10showHiddenEi
_ZN15Fl_File_Chooser10fileNameCBEv
_ZN15Fl_File_Chooser11favoritesCBEP9Fl_Widget
_ZN13Fl_File_Input5valueEPKc
_ZN11Fl_Browser_8deselectEi
_ZN15Fl_File_Chooser9previewCBEPS_
_ZN2Fl14remove_timeoutEPFvPvES0_
_ZN8Fl_Group6removeER9Fl_Widget
_ZN9Fl_Choice5valueEi
_ZN9Fl_Widget6redrawEv
_ZN9Fl_Window5labelEPKc
_ZN9Fl_Widget5labelEPKc
_ZNK8Fl_Label7measureERiS0_
_ZN8Fl_Group10init_sizesEv
__stack_chk_fail
_ZN10Fl_Browser8textsizeEi
_ZN9Fl_Widget8activateEv
_ZN9Fl_Widget10deactivateEv
_ZN15Fl_File_Chooser6prefs_E
_ZN8Fl_Group7currentEv
_Znwm
_ZN16Fl_Double_WindowC1EiiPKc
_ZN8Fl_GroupC1EiiiiPKc
_ZN9Fl_ChoiceC1EiiiiPKc
_ZN15Fl_File_Chooser10show_labelE
_ZN14Fl_Menu_ButtonC1EiiiiPKc
_ZN15Fl_File_Chooser15favorites_labelE
_ZN9Fl_ButtonC1EiiiiPKc
_ZN15Fl_File_Chooser21new_directory_tooltipE
_ZN9Fl_Widget7tooltipEPKc
_ZN8Fl_Group3endEv
_ZN7Fl_TileC1EiiiiPKc
_ZN15Fl_File_BrowserC1EiiiiPKc
_ZNK9Fl_Widget6windowEv
_ZN9Fl_Window7hotspotEPK9Fl_Widgeti
_ZN6Fl_BoxC1EiiiiPKc
_ZN15Fl_Check_ButtonC1EiiiiPKc
_ZN9Fl_Button5valueEi
_ZN15Fl_File_Chooser13preview_labelE
_ZN15Fl_File_Chooser12hidden_labelE
_ZN13Fl_File_InputC1EiiiiPKc
_ZN15Fl_File_Chooser14filename_labelE
_ZN16Fl_Return_ButtonC1EiiiiPKc
fl_ok
fl_cancel
_ZN15Fl_File_Chooser10save_labelE
_ZN15Fl_File_Chooser22manage_favorites_labelE
_ZN9Fl_Window11size_range_Ev
_ZN2Fl1hEv
_ZN2Fl1wEv
_ZN15Fl_File_Chooser6filterEPKc
_ZN15Fl_File_Chooser16update_favoritesEv
_ZN15Fl_File_Chooser5valueEPKc
_ZN14Fl_Preferences3getEPKcRii
_ZN8Fl_Group7currentEPS_
__cxa_guard_acquire
_ZN8Fl_ImageC2Eiii
_ZTV9Fl_Bitmap
__cxa_guard_release
_ZN14Fl_PreferencesC1ENS_4RootEPKcS2_
_ZN8Fl_Group3addER9Fl_Widget
