   1              		.file	"fl_ask.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZL9button_cbP9Fl_Widgetl,"ax",@progbits
   5              	.LCOLDB0:
   6              		.section	.text._ZL9button_cbP9Fl_Widgetl,"ax",@progbits
   7              	.LHOTB0:
   8              		.p2align 4,,15
   9              		.section	.text.unlikely._ZL9button_cbP9Fl_Widgetl
  10              	.Ltext_cold0:
  11              		.section	.text._ZL9button_cbP9Fl_Widgetl
  13              	_ZL9button_cbP9Fl_Widgetl:
  14              	.LFB527:
  15              		.file 1 "fltk-1.3.4-1/src/fl_ask.cxx"
   1:fltk-1.3.4-1/src/fl_ask.cxx **** ...
  16              		.loc 1 69 0
  17              		.cfi_startproc
  18              	.LVL0:
  19              		.loc 1 71 0
  20 0000 488B3D00 		movq	_ZL12message_form(%rip), %rdi
  20      000000
  21              		.loc 1 70 0
  22 0007 89350000 		movl	%esi, _ZL7ret_val(%rip)
  22      0000
  23              		.loc 1 71 0
  24 000d 488B07   		movq	(%rdi), %rax
  25 0010 FF6030   		jmp	*48(%rax)
  26              	.LVL1:
  27              		.cfi_endproc
  28              	.LFE527:
  30              		.section	.text.unlikely._ZL9button_cbP9Fl_Widgetl
  31              	.LCOLDE0:
  32              		.section	.text._ZL9button_cbP9Fl_Widgetl
  33              	.LHOTE0:
  34              		.section	.text.unlikely._Z7fl_beepi,"ax",@progbits
  35              	.LCOLDB1:
  36              		.section	.text._Z7fl_beepi,"ax",@progbits
  37              	.LHOTB1:
  38              		.p2align 4,,15
  39              		.globl	_Z7fl_beepi
  41              	_Z7fl_beepi:
  42              	.LFB531:
  43              		.loc 1 283 0
  44              		.cfi_startproc
  45              	.LVL2:
  46 0000 4883EC08 		subq	$8, %rsp
  47              		.cfi_def_cfa_offset 16
  48              		.loc 1 313 0
  49 0004 85FF     		testl	%edi, %edi
  50 0006 7428     		je	.L4
  51 0008 83FF02   		cmpl	$2, %edi
  52 000b 7423     		je	.L4
  53              		.loc 1 321 0
  54 000d 488B3D00 		movq	fl_display(%rip), %rdi
  54      000000
  55              	.LVL3:
  56 0014 4885FF   		testq	%rdi, %rdi
  57 0017 7447     		je	.L16
  58              	.L6:
  59              		.loc 1 323 0
  60 0019 BE320000 		movl	$50, %esi
  60      00
  61              		.loc 1 327 0
  62 001e 4883C408 		addq	$8, %rsp
  63              		.cfi_remember_state
  64              		.cfi_def_cfa_offset 8
  65              		.loc 1 323 0
  66 0022 E9000000 		jmp	XBell
  66      00
  67              	.LVL4:
  68 0027 660F1F84 		.p2align 4,,10
  68      00000000 
  68      00
  69              		.p2align 3
  70              	.L4:
  71              		.cfi_restore_state
  72              		.loc 1 316 0
  73 0030 488B3D00 		movq	fl_display(%rip), %rdi
  73      000000
  74              	.LVL5:
  75 0037 4885FF   		testq	%rdi, %rdi
  76 003a 7414     		je	.L17
  77              	.L5:
  78              		.loc 1 318 0
  79 003c BE640000 		movl	$100, %esi
  79      00
  80              		.loc 1 327 0
  81 0041 4883C408 		addq	$8, %rsp
  82              		.cfi_remember_state
  83              		.cfi_def_cfa_offset 8
  84              		.loc 1 318 0
  85 0045 E9000000 		jmp	XBell
  85      00
  86              	.LVL6:
  87 004a 660F1F44 		.p2align 4,,10
  87      0000
  88              		.p2align 3
  89              	.L17:
  90              		.cfi_restore_state
  91              		.loc 1 316 0 discriminator 1
  92 0050 E8000000 		call	_Z15fl_open_displayv
  92      00
  93              	.LVL7:
  94 0055 488B3D00 		movq	fl_display(%rip), %rdi
  94      000000
  95 005c EBDE     		jmp	.L5
  96 005e 6690     		.p2align 4,,10
  97              		.p2align 3
  98              	.L16:
  99              		.loc 1 321 0 discriminator 1
 100 0060 E8000000 		call	_Z15fl_open_displayv
 100      00
 101              	.LVL8:
 102 0065 488B3D00 		movq	fl_display(%rip), %rdi
 102      000000
 103 006c EBAB     		jmp	.L6
 104              		.cfi_endproc
 105              	.LFE531:
 107              		.section	.text.unlikely._Z7fl_beepi
 108              	.LCOLDE1:
 109              		.section	.text._Z7fl_beepi
 110              	.LHOTE1:
 111              		.section	.text.unlikely._Z18fl_message_hotspoti,"ax",@progbits
 112              	.LCOLDB2:
 113              		.section	.text._Z18fl_message_hotspoti,"ax",@progbits
 114              	.LHOTB2:
 115              		.p2align 4,,15
 116              		.globl	_Z18fl_message_hotspoti
 118              	_Z18fl_message_hotspoti:
 119              	.LFB540:
 120              		.loc 1 555 0
 121              		.cfi_startproc
 122              	.LVL9:
 123              		.loc 1 556 0
 124 0000 31C0     		xorl	%eax, %eax
 125 0002 85FF     		testl	%edi, %edi
 126 0004 0F95C0   		setne	%al
 127 0007 89050000 		movl	%eax, _ZL13enableHotspot(%rip)
 127      0000
 128 000d C3       		ret
 129              		.cfi_endproc
 130              	.LFE540:
 132              		.section	.text.unlikely._Z18fl_message_hotspoti
 133              	.LCOLDE2:
 134              		.section	.text._Z18fl_message_hotspoti
 135              	.LHOTE2:
 136              		.section	.text.unlikely._Z18fl_message_hotspotv,"ax",@progbits
 137              	.LCOLDB3:
 138              		.section	.text._Z18fl_message_hotspotv,"ax",@progbits
 139              	.LHOTB3:
 140              		.p2align 4,,15
 141              		.globl	_Z18fl_message_hotspotv
 143              	_Z18fl_message_hotspotv:
 144              	.LFB541:
 145              		.loc 1 567 0
 146              		.cfi_startproc
 147              		.loc 1 569 0
 148 0000 8B050000 		movl	_ZL13enableHotspot(%rip), %eax
 148      0000
 149 0006 C3       		ret
 150              		.cfi_endproc
 151              	.LFE541:
 153              		.section	.text.unlikely._Z18fl_message_hotspotv
 154              	.LCOLDE3:
 155              		.section	.text._Z18fl_message_hotspotv
 156              	.LHOTE3:
 157              		.section	.text.unlikely._Z24fl_message_title_defaultPKc,"ax",@progbits
 158              	.LCOLDB4:
 159              		.section	.text._Z24fl_message_title_defaultPKc,"ax",@progbits
 160              	.LHOTB4:
 161              		.p2align 4,,15
 162              		.globl	_Z24fl_message_title_defaultPKc
 164              	_Z24fl_message_title_defaultPKc:
 165              	.LFB543:
 166              		.loc 1 607 0
 167              		.cfi_startproc
 168              	.LVL10:
 169 0000 53       		pushq	%rbx
 170              		.cfi_def_cfa_offset 16
 171              		.cfi_offset 3, -16
 172              		.loc 1 607 0
 173 0001 4889FB   		movq	%rdi, %rbx
 174              		.loc 1 608 0
 175 0004 488B3D00 		movq	_ZL21message_title_default(%rip), %rdi
 175      000000
 176              	.LVL11:
 177 000b 4885FF   		testq	%rdi, %rdi
 178 000e 7410     		je	.L21
 179              		.loc 1 609 0
 180 0010 E8000000 		call	free
 180      00
 181              	.LVL12:
 182              		.loc 1 610 0
 183 0015 48C70500 		movq	$0, _ZL21message_title_default(%rip)
 183      00000000 
 183      000000
 184              	.L21:
 185              		.loc 1 612 0
 186 0020 4885DB   		testq	%rbx, %rbx
 187 0023 740F     		je	.L20
 188              		.loc 1 613 0
 189 0025 4889DF   		movq	%rbx, %rdi
 190 0028 E8000000 		call	strdup
 190      00
 191              	.LVL13:
 192 002d 48890500 		movq	%rax, _ZL21message_title_default(%rip)
 192      000000
 193              	.L20:
 194              		.loc 1 614 0
 195 0034 5B       		popq	%rbx
 196              		.cfi_def_cfa_offset 8
 197              	.LVL14:
 198 0035 C3       		ret
 199              		.cfi_endproc
 200              	.LFE543:
 202              		.section	.text.unlikely._Z24fl_message_title_defaultPKc
 203              	.LCOLDE4:
 204              		.section	.text._Z24fl_message_title_defaultPKc
 205              	.LHOTE4:
 206              		.section	.text.unlikely._ZL8makeformv.part.14,"ax",@progbits
 207              	.LCOLDB5:
 208              		.section	.text._ZL8makeformv.part.14,"ax",@progbits
 209              	.LHOTB5:
 210              		.p2align 4,,15
 212              	_ZL8makeformv.part.14:
 213              	.LFB558:
 214              		.loc 1 74 0
 215              		.cfi_startproc
 216 0000 4157     		pushq	%r15
 217              		.cfi_def_cfa_offset 16
 218              		.cfi_offset 15, -16
 219 0002 4156     		pushq	%r14
 220              		.cfi_def_cfa_offset 24
 221              		.cfi_offset 14, -24
 222              		.loc 1 97 0
 223 0004 41BF0100 		movl	$1, %r15d
 223      0000
 224              		.loc 1 74 0
 225 000a 4155     		pushq	%r13
 226              		.cfi_def_cfa_offset 32
 227              		.cfi_offset 13, -32
 228 000c 4154     		pushq	%r12
 229              		.cfi_def_cfa_offset 40
 230              		.cfi_offset 12, -40
 231 000e 41BC0000 		movl	$_ZL6button, %r12d
 231      0000
 232 0014 55       		pushq	%rbp
 233              		.cfi_def_cfa_offset 48
 234              		.cfi_offset 6, -48
 235 0015 53       		pushq	%rbx
 236              		.cfi_def_cfa_offset 56
 237              		.cfi_offset 3, -56
 238              		.loc 1 97 0
 239 0016 41BED200 		movl	$210, %r14d
 239      0000
 240 001c 4531ED   		xorl	%r13d, %r13d
 241              		.loc 1 74 0
 242 001f 4883EC28 		subq	$40, %rsp
 243              		.cfi_def_cfa_offset 96
 244              		.loc 1 80 0
 245 0023 E8000000 		call	_ZN8Fl_Group7currentEv
 245      00
 246              	.LVL15:
 247              		.loc 1 81 0
 248 0028 31FF     		xorl	%edi, %edi
 249              		.loc 1 80 0
 250 002a 48894424 		movq	%rax, 24(%rsp)
 250      18
 251              	.LVL16:
 252              		.loc 1 81 0
 253 002f E8000000 		call	_ZN8Fl_Group7currentEPS_
 253      00
 254              	.LVL17:
 255              		.loc 1 83 0
 256 0034 BFF00000 		movl	$240, %edi
 256      00
 257 0039 E8000000 		call	_Znwm
 257      00
 258              	.LVL18:
 259 003e 31C9     		xorl	%ecx, %ecx
 260 0040 4889C5   		movq	%rax, %rbp
 261 0043 BA670000 		movl	$103, %edx
 261      00
 262 0048 BE9A0100 		movl	$410, %esi
 262      00
 263 004d 4889C7   		movq	%rax, %rdi
 264 0050 E8000000 		call	_ZN9Fl_WindowC1EiiPKc
 264      00
 265              	.LVL19:
 266              		.loc 1 88 0
 267 0055 BF780000 		movl	$120, %edi
 267      00
 268              	.LBB153:
 269              	.LBB154:
 270              		.file 2 "fltk-1.3.4-1/FL/Fl_Widget.H"
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
 271              		.loc 2 587 0
 272 005a 48C74510 		movq	$_ZL9button_cbP9Fl_Widgetl, 16(%rbp)
 272      00000000 
 273 0062 48C74518 		movq	$0, 24(%rbp)
 273      00000000 
 274              	.LBE154:
 275              	.LBE153:
 276              		.loc 1 83 0
 277 006a 48892D00 		movq	%rbp, _ZL12message_form(%rip)
 277      000000
 278              	.LVL20:
 279              		.loc 1 88 0
 280 0071 E8000000 		call	_Znwm
 280      00
 281              	.LVL21:
 282              		.loc 1 87 0
 283 0076 4531C9   		xorl	%r9d, %r9d
 284              		.loc 1 88 0
 285 0079 4889C3   		movq	%rax, %rbx
 286              		.loc 1 87 0
 287 007c 41B81400 		movl	$20, %r8d
 287      0000
 288 0082 B9540100 		movl	$340, %ecx
 288      00
 289 0087 BA190000 		movl	$25, %edx
 289      00
 290 008c BE3C0000 		movl	$60, %esi
 290      00
 291 0091 4889C7   		movq	%rax, %rdi
 292 0094 E8000000 		call	_ZN6Fl_BoxC1EiiiiPKc
 292      00
 293              	.LVL22:
 294              	.LBB155:
 295              	.LBB156:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 296              		.loc 2 357 0
 297 0099 C7435494 		movl	$148, 84(%rbx)
 297      000000
 298              	.LBE156:
 299              	.LBE155:
 300              		.loc 1 89 0
 301 00a0 BFC80000 		movl	$200, %edi
 301      00
 302              		.loc 1 88 0
 303 00a5 48891D00 		movq	%rbx, _ZL7message(%rip)
 303      000000
 304              	.LVL23:
 305              		.loc 1 89 0
 306 00ac E8000000 		call	_Znwm
 306      00
 307              	.LVL24:
 308 00b1 4531C9   		xorl	%r9d, %r9d
 309 00b4 4889C3   		movq	%rax, %rbx
 310              	.LVL25:
 311 00b7 41B81700 		movl	$23, %r8d
 311      0000
 312 00bd B9540100 		movl	$340, %ecx
 312      00
 313 00c2 BA250000 		movl	$37, %edx
 313      00
 314 00c7 BE3C0000 		movl	$60, %esi
 314      00
 315 00cc 4889C7   		movq	%rax, %rdi
 316 00cf E8000000 		call	_ZN8Fl_InputC1EiiiiPKc
 316      00
 317              	.LVL26:
 318 00d4 4889DF   		movq	%rbx, %rdi
 319 00d7 48891D00 		movq	%rbx, _ZL5input(%rip)
 319      000000
 320 00de E8000000 		call	_ZN9Fl_Widget4hideEv
 320      00
 321              	.LVL27:
 322              	.LBB157:
 323              		.loc 1 90 0
 324 00e3 BF780000 		movl	$120, %edi
 324      00
 325 00e8 E8000000 		call	_Znwm
 325      00
 326              	.LVL28:
 327 00ed 4531C9   		xorl	%r9d, %r9d
 328 00f0 4889C3   		movq	%rax, %rbx
 329 00f3 4889C7   		movq	%rax, %rdi
 330 00f6 41B83200 		movl	$50, %r8d
 330      0000
 331 00fc B9320000 		movl	$50, %ecx
 331      00
 332 0101 BA0A0000 		movl	$10, %edx
 332      00
 333 0106 BE0A0000 		movl	$10, %esi
 333      00
 334 010b E8000000 		call	_ZN6Fl_BoxC1EiiiiPKc
 334      00
 335              	.LVL29:
 336              	.LBB158:
 337              	.LBB159:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 338              		.loc 2 372 0
 339 0110 C6436E06 		movb	$6, 110(%rbx)
 340              	.LBE159:
 341              	.LBE158:
 342              	.LBB160:
 343              	.LBB161:
 496:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 344              		.loc 2 496 0
 345 0114 C7434809 		movl	$9, 72(%rbx)
 345      000000
 346              	.LBE161:
 347              	.LBE160:
 348              	.LBE157:
 349              		.loc 1 97 0
 350 011b 4889EF   		movq	%rbp, %rdi
 351              	.LBB168:
 352              	.LBB162:
 353              	.LBB163:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 354              		.loc 2 508 0
 355 011e C7434C22 		movl	$34, 76(%rbx)
 355      000000
 356              	.LBE163:
 357              	.LBE162:
 358              	.LBB164:
 359              	.LBB165:
 390:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 360              		.loc 2 390 0
 361 0125 C74364FF 		movl	$255, 100(%rbx)
 361      000000
 362              	.LBE165:
 363              	.LBE164:
 364              	.LBB166:
 365              	.LBB167:
 478:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 366              		.loc 2 478 0
 367 012c C74350D8 		movl	$216, 80(%rbx)
 367      000000
 368              	.LBE167:
 369              	.LBE166:
 370              		.loc 1 90 0
 371 0133 48891D00 		movq	%rbx, _ZL4icon(%rip)
 371      000000
 372              	.LVL30:
 373              	.LBE168:
 374              		.loc 1 97 0
 375 013a E8000000 		call	_ZN8Fl_Group3endEv
 375      00
 376              	.LVL31:
 377 013f 4D89E2   		movq	%r12, %r10
 378              	.LVL32:
 379              	.L31:
 380 0142 418D7664 		leal	100(%r14), %esi
 381              	.LVL33:
 382              	.LBB169:
 383              		.loc 1 101 0
 384 0146 4983FD01 		cmpq	$1, %r13
 385 014a 4C895424 		movq	%r10, 8(%rsp)
 385      08
 386              		.loc 1 102 0
 387 014f BF800000 		movl	$128, %edi
 387      00
 388 0154 89742414 		movl	%esi, 20(%rsp)
 389              		.loc 1 101 0
 390 0158 0F84F100 		je	.L37
 390      0000
 391              		.loc 1 104 0
 392 015e E8000000 		call	_Znwm
 392      00
 393              	.LVL34:
 394 0163 8B742414 		movl	20(%rsp), %esi
 395 0167 4531C9   		xorl	%r9d, %r9d
 396 016a 41B81700 		movl	$23, %r8d
 396      0000
 397 0170 B95A0000 		movl	$90, %ecx
 397      00
 398 0175 BA460000 		movl	$70, %edx
 398      00
 399 017a 4889C7   		movq	%rax, %rdi
 400 017d 4889C3   		movq	%rax, %rbx
 401 0180 E8000000 		call	_ZN9Fl_ButtonC1EiiiiPKc
 401      00
 402              	.LVL35:
 403 0185 4C8B5424 		movq	8(%rsp), %r10
 403      08
 404              		.loc 1 100 0
 405 018a 4183FF03 		cmpl	$3, %r15d
 406              	.LBB170:
 407              	.LBB171:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 408              		.loc 2 357 0
 409 018e C7435490 		movl	$144, 84(%rbx)
 409      000000
 410              	.LBE171:
 411              	.LBE170:
 412              	.LBB173:
 413              	.LBB174:
 414              		.loc 2 587 0
 415 0195 48C74310 		movq	$_ZL9button_cbP9Fl_Widgetl, 16(%rbx)
 415      00000000 
 416 019d 4C896B18 		movq	%r13, 24(%rbx)
 417              	.LBE174:
 418              	.LBE173:
 419              		.loc 1 104 0
 420 01a1 49891A   		movq	%rbx, (%r10)
 421              	.LVL36:
 422              		.loc 1 100 0
 423 01a4 741A     		je	.L38
 424              	.LVL37:
 425              	.L33:
 426 01a6 4983C501 		addq	$1, %r13
 427 01aa 4183C701 		addl	$1, %r15d
 428 01ae 4183EE64 		subl	$100, %r14d
 429 01b2 4983C208 		addq	$8, %r10
 430 01b6 EB8A     		jmp	.L31
 431              	.LVL38:
 432 01b8 0F1F8400 		.p2align 4,,10
 432      00000000 
 433              		.p2align 3
 434              	.L38:
 435              	.LBE169:
 436              	.LBB178:
 437              	.LBB179:
 438              		.file 3 "fltk-1.3.4-1/FL/Fl_Button.H"
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
 439              		.loc 3 143 0
 440 01c0 488B0500 		movq	_ZL6button(%rip), %rax
 440      000000
 441 01c7 C740781B 		movl	$65307, 120(%rax)
 441      FF0000
 442              	.LVL39:
 443              	.L34:
 444              	.LBE179:
 445              	.LBE178:
 446              	.LBB180:
 447              	.LBB181:
 448              	.LBB182:
 449              		.file 4 "fltk-1.3.4-1/FL/Fl_Group.H"
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
 450              		.loc 4 98 0
 451 01ce 498B7424 		movq	16(%r12), %rsi
 451      10
 452 01d3 4889EF   		movq	%rbp, %rdi
 453 01d6 4983EC08 		subq	$8, %r12
 454              	.LVL40:
 455 01da E8000000 		call	_ZN8Fl_Group3addER9Fl_Widget
 455      00
 456              	.LVL41:
 457              	.LBE182:
 458              	.LBE181:
 459              		.loc 1 112 0
 460 01df 4981FC00 		cmpq	$_ZL6button-24, %r12
 460      000000
 461 01e6 75E6     		jne	.L34
 462              	.LBE180:
 463              		.loc 1 115 0
 464 01e8 4889EF   		movq	%rbp, %rdi
 465 01eb E8000000 		call	_ZN8Fl_Group5beginEv
 465      00
 466              	.LVL42:
 467              		.loc 1 116 0
 468 01f0 BF780000 		movl	$120, %edi
 468      00
 469 01f5 E8000000 		call	_Znwm
 469      00
 470              	.LVL43:
 471 01fa 4531C9   		xorl	%r9d, %r9d
 472 01fd 4889C3   		movq	%rax, %rbx
 473              	.LVL44:
 474 0200 4889C7   		movq	%rax, %rdi
 475 0203 41B81B00 		movl	$27, %r8d
 475      0000
 476 0209 B9320000 		movl	$50, %ecx
 476      00
 477 020e BA0A0000 		movl	$10, %edx
 477      00
 478 0213 BE3C0000 		movl	$60, %esi
 478      00
 479 0218 E8000000 		call	_ZN6Fl_BoxC1EiiiiPKc
 479      00
 480              	.LVL45:
 481              	.LBB183:
 482              	.LBB184:
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
 483              		.loc 4 148 0
 484 021d 48899D88 		movq	%rbx, 136(%rbp)
 484      000000
 485              	.LVL46:
 486              	.LBE184:
 487              	.LBE183:
 488              		.loc 1 117 0
 489 0224 4889EF   		movq	%rbp, %rdi
 490 0227 E8000000 		call	_ZN8Fl_Group3endEv
 490      00
 491              	.LVL47:
 492              	.LBB185:
 493              	.LBB186:
 494              	.LBB187:
 149:fltk-1.3.4-1/FL/Fl_Widget.H ****   /** Clears a flag in the flags mask */
 495              		.loc 2 149 0
 496 022c 814D6000 		orl	$16384, 96(%rbp)
 496      400000
 497              	.LVL48:
 498              	.LBE187:
 499              	.LBE186:
 500              	.LBE185:
 501              		.loc 1 119 0
 502 0233 488B7C24 		movq	24(%rsp), %rdi
 502      18
 503 0238 E8000000 		call	_ZN8Fl_Group7currentEPS_
 503      00
 504              	.LVL49:
 505              		.loc 1 121 0
 506 023d 4883C428 		addq	$40, %rsp
 507              		.cfi_remember_state
 508              		.cfi_def_cfa_offset 56
 509 0241 4889E8   		movq	%rbp, %rax
 510 0244 5B       		popq	%rbx
 511              		.cfi_def_cfa_offset 48
 512 0245 5D       		popq	%rbp
 513              		.cfi_def_cfa_offset 40
 514              	.LVL50:
 515 0246 415C     		popq	%r12
 516              		.cfi_def_cfa_offset 32
 517 0248 415D     		popq	%r13
 518              		.cfi_def_cfa_offset 24
 519 024a 415E     		popq	%r14
 520              		.cfi_def_cfa_offset 16
 521 024c 415F     		popq	%r15
 522              		.cfi_def_cfa_offset 8
 523              	.LVL51:
 524 024e C3       		ret
 525              	.LVL52:
 526              	.L37:
 527              		.cfi_restore_state
 528              	.LBB188:
 529              		.loc 1 102 0
 530 024f E8000000 		call	_Znwm
 530      00
 531              	.LVL53:
 532 0254 8B742414 		movl	20(%rsp), %esi
 533 0258 4889C7   		movq	%rax, %rdi
 534 025b 4531C9   		xorl	%r9d, %r9d
 535 025e 41B81700 		movl	$23, %r8d
 535      0000
 536 0264 B95A0000 		movl	$90, %ecx
 536      00
 537 0269 BA460000 		movl	$70, %edx
 537      00
 538 026e 4889C3   		movq	%rax, %rbx
 539 0271 E8000000 		call	_ZN16Fl_Return_ButtonC1EiiiiPKc
 539      00
 540              	.LVL54:
 541              		.loc 1 105 0
 542 0276 4C8B5424 		movq	8(%rsp), %r10
 542      08
 543              		.loc 1 102 0
 544 027b 48891D00 		movq	%rbx, _ZL6button+8(%rip)
 544      000000
 545              		.loc 1 105 0
 546 0282 498B02   		movq	(%r10), %rax
 547              	.LVL55:
 548              	.LBB176:
 549              	.LBB172:
 357:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 550              		.loc 2 357 0
 551 0285 C7405490 		movl	$144, 84(%rax)
 551      000000
 552              	.LVL56:
 553              	.LBE172:
 554              	.LBE176:
 555              	.LBB177:
 556              	.LBB175:
 557              		.loc 2 587 0
 558 028c 48C74010 		movq	$_ZL9button_cbP9Fl_Widgetl, 16(%rax)
 558      00000000 
 559 0294 48C74018 		movq	$1, 24(%rax)
 559      01000000 
 560              	.LVL57:
 561 029c E905FFFF 		jmp	.L33
 561      FF
 562              	.LBE175:
 563              	.LBE177:
 564              	.LBE188:
 565              		.cfi_endproc
 566              	.LFE558:
 568              		.section	.text.unlikely._ZL8makeformv.part.14
 569              	.LCOLDE5:
 570              		.section	.text._ZL8makeformv.part.14
 571              	.LHOTE5:
 572              		.section	.rodata.str1.1,"aMS",@progbits,1
 573              	.LC6:
 574 0000 257300   		.string	"%s"
 575              		.section	.text.unlikely._ZL7innardsPKcP13__va_list_tagS0_S0_S0_,"ax",@progbits
 576              	.LCOLDB7:
 577              		.section	.text._ZL7innardsPKcP13__va_list_tagS0_S0_S0_,"ax",@progbits
 578              	.LHOTB7:
 579              		.p2align 4,,15
 581              	_ZL7innardsPKcP13__va_list_tagS0_S0_S0_:
 582              	.LFB530:
 583              		.loc 1 207 0
 584              		.cfi_startproc
 585              	.LVL58:
 586 0000 4157     		pushq	%r15
 587              		.cfi_def_cfa_offset 16
 588              		.cfi_offset 15, -16
 589 0002 4156     		pushq	%r14
 590              		.cfi_def_cfa_offset 24
 591              		.cfi_offset 14, -24
 592 0004 4989FE   		movq	%rdi, %r14
 593 0007 4155     		pushq	%r13
 594              		.cfi_def_cfa_offset 32
 595              		.cfi_offset 13, -32
 596 0009 4154     		pushq	%r12
 597              		.cfi_def_cfa_offset 40
 598              		.cfi_offset 12, -40
 599              		.loc 1 208 0
 600 000b 31FF     		xorl	%edi, %edi
 601              	.LVL59:
 602              		.loc 1 207 0
 603 000d 55       		pushq	%rbp
 604              		.cfi_def_cfa_offset 48
 605              		.cfi_offset 6, -48
 606 000e 53       		pushq	%rbx
 607              		.cfi_def_cfa_offset 56
 608              		.cfi_offset 3, -56
 609 000f 4989D5   		movq	%rdx, %r13
 610 0012 4889F3   		movq	%rsi, %rbx
 611 0015 4989CC   		movq	%rcx, %r12
 612 0018 4C89C5   		movq	%r8, %rbp
 613 001b 4881EC58 		subq	$1112, %rsp
 613      040000
 614              		.cfi_def_cfa_offset 1168
 615              		.loc 1 207 0
 616 0022 64488B04 		movq	%fs:40, %rax
 616      25280000 
 616      00
 617 002b 48898424 		movq	%rax, 1096(%rsp)
 617      48040000 
 618 0033 31C0     		xorl	%eax, %eax
 619              		.loc 1 208 0
 620 0035 E8000000 		call	_ZN2Fl6pushedEP9Fl_Widget
 620      00
 621              	.LVL60:
 622              	.LBB237:
 623              	.LBB238:
 624              		.loc 1 75 0
 625 003a 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 625      000000
 626              	.LBE238:
 627              	.LBE237:
 628              		.loc 1 210 0
 629 0041 C6050000 		movb	$1, _ZL14avoidRecursion(%rip)
 629      000001
 630              	.LBB241:
 631              	.LBB239:
 632              		.loc 1 75 0
 633 0048 4885FF   		testq	%rdi, %rdi
 634 004b 0F847706 		je	.L90
 634      0000
 635              	.L40:
 636              	.LVL61:
 637              	.LBE239:
 638              	.LBE241:
 639              	.LBB242:
 640              	.LBB243:
 341:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 641              		.loc 2 341 0
 642 0051 488B07   		movq	(%rdi), %rax
 643 0054 8B7720   		movl	32(%rdi), %esi
 644 0057 B99A0100 		movl	$410, %ecx
 644      00
 645 005c 8B5724   		movl	36(%rdi), %edx
 646 005f 41B86700 		movl	$103, %r8d
 646      0000
 647 0065 FF5020   		call	*32(%rax)
 648              	.LVL62:
 649              	.LBE243:
 650              	.LBE242:
 651              		.loc 1 215 0
 652 0068 BF000000 		movl	$.LC6, %edi
 652      00
 653 006d B9030000 		movl	$3, %ecx
 653      00
 654 0072 4C89F6   		movq	%r14, %rsi
 655 0075 F3A6     		repz cmpsb
 656              	.LVL63:
 657 0077 0F859305 		jne	.L41
 657      0000
 658              		.loc 1 216 0
 659 007d 8B03     		movl	(%rbx), %eax
 660 007f 83F82F   		cmpl	$47, %eax
 661 0082 0F875804 		ja	.L42
 661      0000
 662              		.loc 1 216 0 is_stmt 0 discriminator 2
 663 0088 89C2     		movl	%eax, %edx
 664 008a 48035310 		addq	16(%rbx), %rdx
 665 008e 83C008   		addl	$8, %eax
 666 0091 8903     		movl	%eax, (%rbx)
 667              	.L43:
 668              		.loc 1 216 0 discriminator 4
 669 0093 488B32   		movq	(%rdx), %rsi
 670 0096 488B3D00 		movq	_ZL7message(%rip), %rdi
 670      000000
 671 009d E8000000 		call	_ZN9Fl_Widget5labelEPKc
 671      00
 672              	.LVL64:
 673              	.L44:
 674              	.LBB244:
 675              	.LBB245:
 496:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 676              		.loc 2 496 0 is_stmt 1
 677 00a2 8B150000 		movl	fl_message_font_(%rip), %edx
 677      0000
 678              	.LBE245:
 679              	.LBE244:
 680              		.loc 1 222 0
 681 00a8 488B0500 		movq	_ZL7message(%rip), %rax
 681      000000
 682              	.LVL65:
 683              	.LBB247:
 684              	.LBB246:
 496:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 685              		.loc 2 496 0
 686 00af 895048   		movl	%edx, 72(%rax)
 687              	.LVL66:
 688              	.LBE246:
 689              	.LBE247:
 690              		.loc 1 223 0
 691 00b2 8B150000 		movl	fl_message_size_(%rip), %edx
 691      0000
 692 00b8 83FAFF   		cmpl	$-1, %edx
 693 00bb 0F848705 		je	.L91
 693      0000
 694              	.LVL67:
 695              		.loc 1 227 0
 696 00c1 488B3D00 		movq	_ZL6button(%rip), %rdi
 696      000000
 697 00c8 4D85ED   		testq	%r13, %r13
 698              	.LBB248:
 699              	.LBB249:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 700              		.loc 2 508 0
 701 00cb 89504C   		movl	%edx, 76(%rax)
 702              	.LBE249:
 703              	.LBE248:
 704              		.loc 1 227 0
 705 00ce 488B07   		movq	(%rdi), %rax
 706              	.LVL68:
 707 00d1 0F848D05 		je	.L47
 707      0000
 708              	.LVL69:
 709              	.L100:
 710              		.loc 1 227 0 is_stmt 0 discriminator 1
 711 00d7 FF5028   		call	*40(%rax)
 712              	.LVL70:
 713 00da 488B3D00 		movq	_ZL6button(%rip), %rdi
 713      000000
 714 00e1 4C89EE   		movq	%r13, %rsi
 715 00e4 E8000000 		call	_ZN9Fl_Widget5labelEPKc
 715      00
 716              	.LVL71:
 717 00e9 488B3D00 		movq	_ZL6button+8(%rip), %rdi
 717      000000
 718              	.LVL72:
 719              	.LBB250:
 720              	.LBB251:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 721              		.loc 2 332 0 is_stmt 1 discriminator 1
 722 00f0 BA460000 		movl	$70, %edx
 722      00
 723 00f5 BED20000 		movl	$210, %esi
 723      00
 724 00fa 488B07   		movq	(%rdi), %rax
 725 00fd 8B4F28   		movl	40(%rdi), %ecx
 726 0100 448B472C 		movl	44(%rdi), %r8d
 727 0104 FF5020   		call	*32(%rax)
 728              	.LVL73:
 729              	.LBE251:
 730              	.LBE250:
 731              		.loc 1 229 0 discriminator 1
 732 0107 488B3D00 		movq	_ZL6button+8(%rip), %rdi
 732      000000
 733 010e 4D85E4   		testq	%r12, %r12
 734 0111 488B07   		movq	(%rdi), %rax
 735 0114 0F848605 		je	.L49
 735      0000
 736              	.LVL74:
 737              	.L101:
 738 011a FF5028   		call	*40(%rax)
 739              	.LVL75:
 740 011d 488B3D00 		movq	_ZL6button+8(%rip), %rdi
 740      000000
 741 0124 4C89E6   		movq	%r12, %rsi
 742 0127 E8000000 		call	_ZN9Fl_Widget5labelEPKc
 742      00
 743              	.LVL76:
 744              		.loc 1 231 0 discriminator 1
 745 012c 488B3D00 		movq	_ZL6button+16(%rip), %rdi
 745      000000
 746 0133 4885ED   		testq	%rbp, %rbp
 747 0136 488B07   		movq	(%rdi), %rax
 748 0139 0F848105 		je	.L51
 748      0000
 749              	.L102:
 750 013f FF5028   		call	*40(%rax)
 751              	.LVL77:
 752 0142 488B3D00 		movq	_ZL6button+16(%rip), %rdi
 752      000000
 753 0149 4889EE   		movq	%rbp, %rsi
 754 014c E8000000 		call	_ZN9Fl_Widget5labelEPKc
 754      00
 755              	.LVL78:
 756              	.L52:
 757              		.loc 1 233 0
 758 0151 488B3D00 		movq	_ZL4icon(%rip), %rdi
 758      000000
 759 0158 488B4730 		movq	48(%rdi), %rax
 760              		.loc 1 234 0
 761 015c 4885C0   		testq	%rax, %rax
 762 015f 48894424 		movq	%rax, 8(%rsp)
 762      08
 763              	.LVL79:
 764 0164 0F846F05 		je	.L92
 764      0000
 765              	.LVL80:
 766              	.L53:
 767              	.LBB252:
 768              	.LBB253:
 769              		.loc 1 136 0
 770 016a 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 770      000000
 771              	.LVL81:
 772              	.LBB254:
 773              	.LBB255:
 341:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 774              		.loc 2 341 0
 775 0171 41B86700 		movl	$103, %r8d
 775      0000
 776 0177 B99A0100 		movl	$410, %ecx
 776      00
 777 017c 488B07   		movq	(%rdi), %rax
 778 017f 8B5724   		movl	36(%rdi), %edx
 779 0182 8B7720   		movl	32(%rdi), %esi
 780 0185 FF5020   		call	*32(%rax)
 781              	.LVL82:
 782              	.LBE255:
 783              	.LBE254:
 784              		.loc 1 138 0
 785 0188 488B0500 		movq	_ZL7message(%rip), %rax
 785      000000
 786              	.LVL83:
 787              	.LBB256:
 788              	.LBB257:
 789              		.file 5 "fltk-1.3.4-1/FL/fl_draw.H"
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
 207:fltk-1.3.4-1/FL/fl_draw.H **** /** Colors with passed color a rectangle that exactly fills the given bounding box */
 208:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rectf(int x, int y, int w, int h, Fl_Color c) {fl_color(c); fl_rectf(x,y,w,h);}
 209:fltk-1.3.4-1/FL/fl_draw.H **** 
 210:fltk-1.3.4-1/FL/fl_draw.H **** /**
 211:fltk-1.3.4-1/FL/fl_draw.H ****   Colors a rectangle with "exactly" the passed <tt>r,g,b</tt> color.
 212:fltk-1.3.4-1/FL/fl_draw.H ****   On screens with less than 24 bits of color this is done by drawing a
 213:fltk-1.3.4-1/FL/fl_draw.H ****   solid-colored block using fl_draw_image() so that the correct color
 214:fltk-1.3.4-1/FL/fl_draw.H ****   shade is produced.
 215:fltk-1.3.4-1/FL/fl_draw.H ****   */
 216:fltk-1.3.4-1/FL/fl_draw.H **** /* note: doxygen comment here to avoid triplication in os-speciic files */
 217:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_rectf(int x, int y, int w, int h, uchar r, uchar g, uchar b);
 218:fltk-1.3.4-1/FL/fl_draw.H **** 
 219:fltk-1.3.4-1/FL/fl_draw.H **** // line segments:
 220:fltk-1.3.4-1/FL/fl_draw.H **** /**
 221:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a line from (x,y) to (x1,y1)
 222:fltk-1.3.4-1/FL/fl_draw.H ****  */
 223:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1) {fl_graphics_driver->line(x,y,x1,y1); }
 224:fltk-1.3.4-1/FL/fl_draw.H **** /**
 225:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a line from (x,y) to (x1,y1) and another from (x1,y1) to (x2,y2)
 226:fltk-1.3.4-1/FL/fl_draw.H ****  */
 227:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_line(int x, int y, int x1, int y1, int x2, int y2) {fl_graphics_driver->line(x,y,x1,
 228:fltk-1.3.4-1/FL/fl_draw.H **** 
 229:fltk-1.3.4-1/FL/fl_draw.H **** // closed line segments:
 230:fltk-1.3.4-1/FL/fl_draw.H **** /**
 231:fltk-1.3.4-1/FL/fl_draw.H ****  Outlines a 3-sided polygon with lines
 232:fltk-1.3.4-1/FL/fl_draw.H ****  */
 233:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_loop(int x, int y, int x1, int y1, int x2, int y2) {fl_graphics_driver->loop(x,y,x1,
 234:fltk-1.3.4-1/FL/fl_draw.H **** /**
 235:fltk-1.3.4-1/FL/fl_draw.H ****  Outlines a 4-sided polygon with lines
 236:fltk-1.3.4-1/FL/fl_draw.H ****  */
 237:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_loop(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3) 
 238:fltk-1.3.4-1/FL/fl_draw.H ****   {fl_graphics_driver->loop(x,y,x1,y1,x2,y2,x3,y3); }
 239:fltk-1.3.4-1/FL/fl_draw.H **** 
 240:fltk-1.3.4-1/FL/fl_draw.H **** // filled polygons
 241:fltk-1.3.4-1/FL/fl_draw.H **** /**
 242:fltk-1.3.4-1/FL/fl_draw.H ****  Fills a 3-sided polygon. The polygon must be convex.
 243:fltk-1.3.4-1/FL/fl_draw.H ****  */
 244:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_polygon(int x, int y, int x1, int y1, int x2, int y2) {fl_graphics_driver->polygon(x
 245:fltk-1.3.4-1/FL/fl_draw.H **** /**
 246:fltk-1.3.4-1/FL/fl_draw.H ****  Fills a 4-sided polygon. The polygon must be convex.
 247:fltk-1.3.4-1/FL/fl_draw.H ****  */
 248:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_polygon(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3) 
 249:fltk-1.3.4-1/FL/fl_draw.H ****   { fl_graphics_driver->polygon(x,y,x1,y1,x2,y2,x3,y3); }
 250:fltk-1.3.4-1/FL/fl_draw.H **** 
 251:fltk-1.3.4-1/FL/fl_draw.H **** // draw rectilinear lines, horizontal segment first:
 252:fltk-1.3.4-1/FL/fl_draw.H **** /**
 253:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y)
 254:fltk-1.3.4-1/FL/fl_draw.H ****  */
 255:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_xyline(int x, int y, int x1) {fl_graphics_driver->xyline(x,y,x1);}
 256:fltk-1.3.4-1/FL/fl_draw.H **** /**
 257:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y), then vertical from (x1,y) to (x1,y2)
 258:fltk-1.3.4-1/FL/fl_draw.H ****  */
 259:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_xyline(int x, int y, int x1, int y2) {fl_graphics_driver->xyline(x,y,x1,y2);}
 260:fltk-1.3.4-1/FL/fl_draw.H **** /**
 261:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a horizontal line from (x,y) to (x1,y), then a vertical from (x1,y) to (x1,y2)
 262:fltk-1.3.4-1/FL/fl_draw.H ****  and then another horizontal from (x1,y2) to (x3,y2)
 263:fltk-1.3.4-1/FL/fl_draw.H ****  */
 264:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_xyline(int x, int y, int x1, int y2, int x3) {fl_graphics_driver->xyline(x,y,x1,y2,x
 265:fltk-1.3.4-1/FL/fl_draw.H **** 
 266:fltk-1.3.4-1/FL/fl_draw.H **** // draw rectilinear lines, vertical segment first:
 267:fltk-1.3.4-1/FL/fl_draw.H **** /**
 268:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a vertical line from (x,y) to (x,y1)
 269:fltk-1.3.4-1/FL/fl_draw.H ****  */
 270:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_yxline(int x, int y, int y1) {fl_graphics_driver->yxline(x,y,y1);}
 271:fltk-1.3.4-1/FL/fl_draw.H **** /**
 272:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a vertical line from (x,y) to (x,y1), then a horizontal from (x,y1) to (x2,y1)
 273:fltk-1.3.4-1/FL/fl_draw.H ****  */
 274:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_yxline(int x, int y, int y1, int x2) {fl_graphics_driver->yxline(x,y,y1,x2);}
 275:fltk-1.3.4-1/FL/fl_draw.H **** /**
 276:fltk-1.3.4-1/FL/fl_draw.H ****  Draws a vertical line from (x,y) to (x,y1) then a horizontal from (x,y1)
 277:fltk-1.3.4-1/FL/fl_draw.H ****  to (x2,y1), then another vertical from (x2,y1) to (x2,y3)
 278:fltk-1.3.4-1/FL/fl_draw.H ****  */
 279:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_yxline(int x, int y, int y1, int x2, int y3) {fl_graphics_driver->yxline(x,y,y1,x2,y
 280:fltk-1.3.4-1/FL/fl_draw.H **** 
 281:fltk-1.3.4-1/FL/fl_draw.H **** // circular lines and pie slices (code in fl_arci.C):
 282:fltk-1.3.4-1/FL/fl_draw.H **** /**
 283:fltk-1.3.4-1/FL/fl_draw.H ****  Draw ellipse sections using integer coordinates.
 284:fltk-1.3.4-1/FL/fl_draw.H ****  
 285:fltk-1.3.4-1/FL/fl_draw.H ****  These functions match the rather limited circle drawing code provided by X
 286:fltk-1.3.4-1/FL/fl_draw.H ****  and WIN32. The advantage over using fl_arc with floating point coordinates
 287:fltk-1.3.4-1/FL/fl_draw.H ****  is that they are faster because they often use the hardware, and they draw
 288:fltk-1.3.4-1/FL/fl_draw.H ****  much nicer small circles, since the small sizes are often hard-coded bitmaps.
 289:fltk-1.3.4-1/FL/fl_draw.H ****  
 290:fltk-1.3.4-1/FL/fl_draw.H ****  If a complete circle is drawn it will fit inside the passed bounding box.
 291:fltk-1.3.4-1/FL/fl_draw.H ****  The two angles are measured in degrees counter-clockwise from 3 o'clock and
 292:fltk-1.3.4-1/FL/fl_draw.H ****  are the starting and ending angle of the arc, \p a2 must be greater or equal
 293:fltk-1.3.4-1/FL/fl_draw.H ****  to \p a1.
 294:fltk-1.3.4-1/FL/fl_draw.H ****  
 295:fltk-1.3.4-1/FL/fl_draw.H ****  fl_arc() draws a series of lines to approximate the arc. Notice that the
 296:fltk-1.3.4-1/FL/fl_draw.H ****  integer version of fl_arc() has a different number of arguments than the
 297:fltk-1.3.4-1/FL/fl_draw.H ****  double version fl_arc(double x, double y, double r, double start, double end)
 298:fltk-1.3.4-1/FL/fl_draw.H ****  
 299:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h bounding box of complete circle
 300:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] a1,a2 start and end angles of arc measured in degrees
 301:fltk-1.3.4-1/FL/fl_draw.H ****  counter-clockwise from 3 o'clock. \p a2 must be greater
 302:fltk-1.3.4-1/FL/fl_draw.H ****  than or equal to \p a1.
 303:fltk-1.3.4-1/FL/fl_draw.H ****  */
 304:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_arc(int x, int y, int w, int h, double a1, double a2) {fl_graphics_driver->arc(x,y,w
 305:fltk-1.3.4-1/FL/fl_draw.H **** /**
 306:fltk-1.3.4-1/FL/fl_draw.H ****  Draw filled ellipse sections using integer coordinates.
 307:fltk-1.3.4-1/FL/fl_draw.H ****  
 308:fltk-1.3.4-1/FL/fl_draw.H ****  Like fl_arc(), but fl_pie() draws a filled-in pie slice.
 309:fltk-1.3.4-1/FL/fl_draw.H ****  This slice may extend outside the line drawn by fl_arc();
 310:fltk-1.3.4-1/FL/fl_draw.H ****  to avoid this use w - 1 and h - 1.
 311:fltk-1.3.4-1/FL/fl_draw.H ****  
 312:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,w,h bounding box of complete circle
 313:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] a1,a2 start and end angles of arc measured in degrees
 314:fltk-1.3.4-1/FL/fl_draw.H ****  counter-clockwise from 3 o'clock. \p a2 must be greater
 315:fltk-1.3.4-1/FL/fl_draw.H ****  than or equal to \p a1.
 316:fltk-1.3.4-1/FL/fl_draw.H ****  */
 317:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pie(int x, int y, int w, int h, double a1, double a2) {fl_graphics_driver->pie(x,y,w
 318:fltk-1.3.4-1/FL/fl_draw.H **** /** fl_chord declaration is a place holder - the function does not yet exist */
 319:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_chord(int x, int y, int w, int h, double a1, double a2); // nyi
 320:fltk-1.3.4-1/FL/fl_draw.H **** 
 321:fltk-1.3.4-1/FL/fl_draw.H **** // scalable drawing code (code in fl_vertex.C and fl_arc.C):
 322:fltk-1.3.4-1/FL/fl_draw.H **** /**
 323:fltk-1.3.4-1/FL/fl_draw.H ****  Saves the current transformation matrix on the stack. 
 324:fltk-1.3.4-1/FL/fl_draw.H ****  The maximum depth of the stack is 32.
 325:fltk-1.3.4-1/FL/fl_draw.H ****  */
 326:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_push_matrix() { fl_graphics_driver->push_matrix(); }
 327:fltk-1.3.4-1/FL/fl_draw.H **** /**
 328:fltk-1.3.4-1/FL/fl_draw.H ****  Restores the current transformation matrix from the stack.
 329:fltk-1.3.4-1/FL/fl_draw.H ****  */
 330:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_pop_matrix() { fl_graphics_driver->pop_matrix(); }
 331:fltk-1.3.4-1/FL/fl_draw.H **** /**
 332:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates scaling transformation onto the current one.
 333:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y scale factors in x-direction and y-direction
 334:fltk-1.3.4-1/FL/fl_draw.H ****  */
 335:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_scale(double x, double y) { fl_graphics_driver->scale(x, y); }
 336:fltk-1.3.4-1/FL/fl_draw.H **** /**
 337:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates scaling transformation onto the current one.
 338:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x scale factor in both x-direction and y-direction
 339:fltk-1.3.4-1/FL/fl_draw.H ****  */
 340:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_scale(double x) { fl_graphics_driver->scale(x, x); }
 341:fltk-1.3.4-1/FL/fl_draw.H **** /**
 342:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates translation transformation onto the current one.
 343:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y translation factor in x-direction and y-direction
 344:fltk-1.3.4-1/FL/fl_draw.H ****  */
 345:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_translate(double x, double y) { fl_graphics_driver->translate(x, y); }
 346:fltk-1.3.4-1/FL/fl_draw.H **** /**
 347:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates rotation transformation onto the current one.
 348:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] d - rotation angle, counter-clockwise in degrees (not radians)
 349:fltk-1.3.4-1/FL/fl_draw.H ****  */
 350:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rotate(double d) { fl_graphics_driver->rotate(d); }
 351:fltk-1.3.4-1/FL/fl_draw.H **** /**
 352:fltk-1.3.4-1/FL/fl_draw.H ****  Concatenates another transformation onto the current one.
 353:fltk-1.3.4-1/FL/fl_draw.H ****  
 354:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] a,b,c,d,x,y transformation matrix elements such that
 355:fltk-1.3.4-1/FL/fl_draw.H ****  <tt> X' = aX + cY + x </tt> and <tt> Y' = bX +dY + y </tt>
 356:fltk-1.3.4-1/FL/fl_draw.H ****  */
 357:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_mult_matrix(double a, double b, double c, double d, double x,double y) 
 358:fltk-1.3.4-1/FL/fl_draw.H **** 	{ fl_graphics_driver->mult_matrix(a, b, c, d, x, y); }
 359:fltk-1.3.4-1/FL/fl_draw.H **** /**
 360:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a list of points. Points are added to the list with fl_vertex()
 361:fltk-1.3.4-1/FL/fl_draw.H ****  */
 362:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_points() {fl_graphics_driver->begin_points(); }
 363:fltk-1.3.4-1/FL/fl_draw.H **** /**
 364:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a list of lines.
 365:fltk-1.3.4-1/FL/fl_draw.H ****  */
 366:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_line() {fl_graphics_driver->begin_line(); }
 367:fltk-1.3.4-1/FL/fl_draw.H **** /**
 368:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a closed sequence of lines.
 369:fltk-1.3.4-1/FL/fl_draw.H ****  */
 370:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_loop() {fl_graphics_driver->begin_loop(); }
 371:fltk-1.3.4-1/FL/fl_draw.H **** /**
 372:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a convex filled polygon.
 373:fltk-1.3.4-1/FL/fl_draw.H ****  */
 374:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_polygon() {fl_graphics_driver->begin_polygon(); }
 375:fltk-1.3.4-1/FL/fl_draw.H **** /**
 376:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a single vertex to the current path.
 377:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 378:fltk-1.3.4-1/FL/fl_draw.H ****  */
 379:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_vertex(double x, double y) {fl_graphics_driver->vertex(x,y); }
 380:fltk-1.3.4-1/FL/fl_draw.H **** /**
 381:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points on a Bezier curve to the path.
 382:fltk-1.3.4-1/FL/fl_draw.H ****  The curve ends (and two of the points) are at X0,Y0 and X3,Y3.
 383:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X0,Y0 curve start point
 384:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X1,Y1 curve control point
 385:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X2,Y2 curve control point
 386:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] X3,Y3 curve end point
 387:fltk-1.3.4-1/FL/fl_draw.H ****  */
 388:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double X3, d
 389:fltk-1.3.4-1/FL/fl_draw.H ****   {fl_graphics_driver->curve(X0,Y0,X1,Y1,X2,Y2,X3,Y3); }
 390:fltk-1.3.4-1/FL/fl_draw.H **** /**
 391:fltk-1.3.4-1/FL/fl_draw.H ****  Adds a series of points to the current path on the arc of a circle.
 392:fltk-1.3.4-1/FL/fl_draw.H ****  You can get elliptical paths by using scale and rotate before calling fl_arc().
 393:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,r center and radius of circular arc
 394:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] start,end angles of start and end of arc measured in degrees
 395:fltk-1.3.4-1/FL/fl_draw.H ****  counter-clockwise from 3 o'clock. If \p end is less than \p start
 396:fltk-1.3.4-1/FL/fl_draw.H ****  then it draws the arc in a clockwise direction.
 397:fltk-1.3.4-1/FL/fl_draw.H **** 
 398:fltk-1.3.4-1/FL/fl_draw.H ****  Examples:
 399:fltk-1.3.4-1/FL/fl_draw.H ****  \code
 400:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw an arc of points
 401:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_points();
 402:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(100.0, 100.0, 50.0, 0.0, 180.0);
 403:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_points();
 404:fltk-1.3.4-1/FL/fl_draw.H **** 
 405:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw arc with a line
 406:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_line();
 407:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(200.0, 100.0, 50.0, 0.0, 180.0);
 408:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_line();
 409:fltk-1.3.4-1/FL/fl_draw.H **** 
 410:fltk-1.3.4-1/FL/fl_draw.H ****     // Draw filled arc
 411:fltk-1.3.4-1/FL/fl_draw.H ****     fl_begin_polygon();
 412:fltk-1.3.4-1/FL/fl_draw.H ****     fl_arc(300.0, 100.0, 50.0, 0.0, 180.0);
 413:fltk-1.3.4-1/FL/fl_draw.H ****     fl_end_polygon();
 414:fltk-1.3.4-1/FL/fl_draw.H ****  \endcode
 415:fltk-1.3.4-1/FL/fl_draw.H ****  */
 416:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_arc(double x, double y, double r, double start, double end) {fl_graphics_driver->arc
 417:fltk-1.3.4-1/FL/fl_draw.H **** /**
 418:fltk-1.3.4-1/FL/fl_draw.H ****  fl_circle() is equivalent to fl_arc(x,y,r,0,360), but may be faster.
 419:fltk-1.3.4-1/FL/fl_draw.H ****  
 420:fltk-1.3.4-1/FL/fl_draw.H ****  It must be the \e only thing in the path: if you want a circle as part of
 421:fltk-1.3.4-1/FL/fl_draw.H ****  a complex polygon you must use fl_arc()
 422:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y,r center and radius of circle
 423:fltk-1.3.4-1/FL/fl_draw.H ****  */
 424:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_circle(double x, double y, double r) {fl_graphics_driver->circle(x,y,r); }
 425:fltk-1.3.4-1/FL/fl_draw.H **** /**
 426:fltk-1.3.4-1/FL/fl_draw.H ****  Ends list of points, and draws.
 427:fltk-1.3.4-1/FL/fl_draw.H ****  */
 428:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_points() {fl_graphics_driver->end_points(); }
 429:fltk-1.3.4-1/FL/fl_draw.H **** /**
 430:fltk-1.3.4-1/FL/fl_draw.H ****  Ends list of lines, and draws.
 431:fltk-1.3.4-1/FL/fl_draw.H ****  */
 432:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_line() {fl_graphics_driver->end_line(); }
 433:fltk-1.3.4-1/FL/fl_draw.H **** /**
 434:fltk-1.3.4-1/FL/fl_draw.H ****  Ends closed sequence of lines, and draws.
 435:fltk-1.3.4-1/FL/fl_draw.H ****  */
 436:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_loop() {fl_graphics_driver->end_loop(); }
 437:fltk-1.3.4-1/FL/fl_draw.H **** /**
 438:fltk-1.3.4-1/FL/fl_draw.H ****  Ends convex filled polygon, and draws.
 439:fltk-1.3.4-1/FL/fl_draw.H ****  */
 440:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_polygon() {fl_graphics_driver->end_polygon(); }
 441:fltk-1.3.4-1/FL/fl_draw.H **** /**
 442:fltk-1.3.4-1/FL/fl_draw.H ****  Starts drawing a complex filled polygon.
 443:fltk-1.3.4-1/FL/fl_draw.H ****  
 444:fltk-1.3.4-1/FL/fl_draw.H ****  The polygon may be concave, may have holes in it, or may be several
 445:fltk-1.3.4-1/FL/fl_draw.H ****  disconnected pieces. Call fl_gap() to separate loops of the path.
 446:fltk-1.3.4-1/FL/fl_draw.H ****  
 447:fltk-1.3.4-1/FL/fl_draw.H ****  To outline the polygon, use fl_begin_loop() and replace each fl_gap()
 448:fltk-1.3.4-1/FL/fl_draw.H ****  with fl_end_loop();fl_begin_loop() pairs.
 449:fltk-1.3.4-1/FL/fl_draw.H ****  
 450:fltk-1.3.4-1/FL/fl_draw.H ****  \note
 451:fltk-1.3.4-1/FL/fl_draw.H ****  For portability, you should only draw polygons that appear the same
 452:fltk-1.3.4-1/FL/fl_draw.H ****  whether "even/odd" or "non-zero" winding rules are used to fill them.
 453:fltk-1.3.4-1/FL/fl_draw.H ****  Holes should be drawn in the opposite direction to the outside loop.
 454:fltk-1.3.4-1/FL/fl_draw.H ****  */
 455:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_begin_complex_polygon() {fl_graphics_driver->begin_complex_polygon(); }
 456:fltk-1.3.4-1/FL/fl_draw.H **** /**
 457:fltk-1.3.4-1/FL/fl_draw.H ****  Call fl_gap() to separate loops of the path.
 458:fltk-1.3.4-1/FL/fl_draw.H ****  
 459:fltk-1.3.4-1/FL/fl_draw.H ****  It is unnecessary but harmless to call fl_gap() before the first vertex,
 460:fltk-1.3.4-1/FL/fl_draw.H ****  after the last vertex, or several times in a row.
 461:fltk-1.3.4-1/FL/fl_draw.H ****  */
 462:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_gap() {fl_graphics_driver->gap(); }
 463:fltk-1.3.4-1/FL/fl_draw.H **** /**
 464:fltk-1.3.4-1/FL/fl_draw.H ****  Ends complex filled polygon, and draws.
 465:fltk-1.3.4-1/FL/fl_draw.H ****  */
 466:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_end_complex_polygon() {fl_graphics_driver->end_complex_polygon(); }
 467:fltk-1.3.4-1/FL/fl_draw.H **** // get and use transformed positions:
 468:fltk-1.3.4-1/FL/fl_draw.H **** /**
 469:fltk-1.3.4-1/FL/fl_draw.H ****  Transforms coordinate using the current transformation matrix.
 470:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 471:fltk-1.3.4-1/FL/fl_draw.H ****  */
 472:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_transform_x(double x, double y) {return fl_graphics_driver->transform_x(x, y); }
 473:fltk-1.3.4-1/FL/fl_draw.H **** /**
 474:fltk-1.3.4-1/FL/fl_draw.H ****  Transforms coordinate using the current transformation matrix.
 475:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 476:fltk-1.3.4-1/FL/fl_draw.H ****  */
 477:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_transform_y(double x, double y) {return fl_graphics_driver->transform_y(x, y); }
 478:fltk-1.3.4-1/FL/fl_draw.H **** /**
 479:fltk-1.3.4-1/FL/fl_draw.H ****  Transforms distance using current transformation matrix.
 480:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 481:fltk-1.3.4-1/FL/fl_draw.H ****  */
 482:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_transform_dx(double x, double y) {return fl_graphics_driver->transform_dx(x, y); }
 483:fltk-1.3.4-1/FL/fl_draw.H **** /**
 484:fltk-1.3.4-1/FL/fl_draw.H ****  Transforms distance using current transformation matrix.
 485:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] x,y coordinate
 486:fltk-1.3.4-1/FL/fl_draw.H ****  */
 487:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_transform_dy(double x, double y) {return fl_graphics_driver->transform_dy(x, y); }
 488:fltk-1.3.4-1/FL/fl_draw.H **** /**
 489:fltk-1.3.4-1/FL/fl_draw.H ****  Adds coordinate pair to the vertex list without further transformations.
 490:fltk-1.3.4-1/FL/fl_draw.H ****  \param[in] xf,yf transformed coordinate
 491:fltk-1.3.4-1/FL/fl_draw.H ****  */
 492:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_transformed_vertex(double xf, double yf) {fl_graphics_driver->transformed_vertex(xf,
 493:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
 494:fltk-1.3.4-1/FL/fl_draw.H **** 
 495:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup  fl_attributes
 496:fltk-1.3.4-1/FL/fl_draw.H ****     @{ */
 497:fltk-1.3.4-1/FL/fl_draw.H **** /* NOTE: doxygen comments here to avoid triplication in os-specific sources */
 498:fltk-1.3.4-1/FL/fl_draw.H **** 
 499:fltk-1.3.4-1/FL/fl_draw.H **** // Fonts:
 500:fltk-1.3.4-1/FL/fl_draw.H **** /**
 501:fltk-1.3.4-1/FL/fl_draw.H ****   Sets the current font, which is then used in various drawing routines.
 502:fltk-1.3.4-1/FL/fl_draw.H ****   You may call this outside a draw context if necessary to call fl_width(),
 503:fltk-1.3.4-1/FL/fl_draw.H ****   but on X this will open the display.
 504:fltk-1.3.4-1/FL/fl_draw.H **** 
 505:fltk-1.3.4-1/FL/fl_draw.H ****   The font is identified by a \p face and a \p size.
 506:fltk-1.3.4-1/FL/fl_draw.H ****   The size of the font is measured in pixels and not "points".
 507:fltk-1.3.4-1/FL/fl_draw.H ****   Lines should be spaced \p size pixels apart or more.
 508:fltk-1.3.4-1/FL/fl_draw.H **** */
 509:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_font(Fl_Font face, Fl_Fontsize fsize) { fl_graphics_driver->font(face,fsize); }
 790              		.loc 5 509 0
 791 018f 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 791      000000
 792 0196 8B504C   		movl	76(%rax), %edx
 793 0199 8B7048   		movl	72(%rax), %esi
 794 019c 488B07   		movq	(%rdi), %rax
 795              	.LVL84:
 796 019f FF90B001 		call	*432(%rax)
 796      0000
 797              	.LVL85:
 798 01a5 488B0500 		movq	_ZL7message(%rip), %rax
 798      000000
 799              	.LBE257:
 800              	.LBE256:
 801              		.loc 1 140 0
 802 01ac 488D5424 		leaq	28(%rsp), %rdx
 802      1C
 803 01b1 488D7424 		leaq	24(%rsp), %rsi
 803      18
 804 01b6 B9010000 		movl	$1, %ecx
 804      00
 805              		.loc 1 139 0
 806 01bb C744241C 		movl	$0, 28(%rsp)
 806      00000000 
 807 01c3 C7442418 		movl	$0, 24(%rsp)
 807      00000000 
 808              	.LVL86:
 809              		.loc 1 140 0
 810 01cb 488B7830 		movq	48(%rax), %rdi
 811 01cf E8000000 		call	_Z10fl_measurePKcRiS1_i
 811      00
 812              	.LVL87:
 813              		.loc 1 142 0
 814 01d4 8B442418 		movl	24(%rsp), %eax
 815 01d8 8D500A   		leal	10(%rax), %edx
 816              		.loc 1 143 0
 817 01db 8B44241C 		movl	28(%rsp), %eax
 818              		.loc 1 142 0
 819 01df 89542418 		movl	%edx, 24(%rsp)
 820              		.loc 1 143 0
 821 01e3 83C00A   		addl	$10, %eax
 822              		.loc 1 144 0
 823 01e6 81FA5301 		cmpl	$339, %edx
 823      0000
 824              		.loc 1 143 0
 825 01ec 8944241C 		movl	%eax, 28(%rsp)
 826              		.loc 1 144 0
 827 01f0 7F08     		jg	.L54
 828              		.loc 1 145 0
 829 01f2 C7442418 		movl	$340, 24(%rsp)
 829      54010000 
 830              	.L54:
 831              		.loc 1 146 0
 832 01fa 83F81D   		cmpl	$29, %eax
 833 01fd 7F08     		jg	.L55
 834              		.loc 1 147 0
 835 01ff C744241C 		movl	$30, 28(%rsp)
 835      1E000000 
 836              	.L55:
 837              		.loc 1 149 0
 838 0207 488B0500 		movq	_ZL6button(%rip), %rax
 838      000000
 839              	.LVL88:
 840              	.LBB258:
 841              	.LBB259:
 842              		.loc 5 509 0
 843 020e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 843      000000
 844 0215 4C8D7C24 		leaq	32(%rsp), %r15
 844      20
 845 021a 4C8D7424 		leaq	48(%rsp), %r14
 845      30
 846 021f BD000000 		movl	$_ZL6button, %ebp
 846      00
 847              	.LVL89:
 848              	.LBE259:
 849              	.LBE258:
 850              		.loc 1 154 0
 851 0224 41BC1900 		movl	$25, %r12d
 851      0000
 852              	.LVL90:
 853 022a 31DB     		xorl	%ebx, %ebx
 854              	.LVL91:
 855              	.LBB261:
 856              	.LBB260:
 857              		.loc 5 509 0
 858 022c 8B504C   		movl	76(%rax), %edx
 859 022f 8B7048   		movl	72(%rax), %esi
 860 0232 488B07   		movq	(%rdi), %rax
 861              	.LVL92:
 862 0235 FF90B001 		call	*432(%rax)
 862      0000
 863              	.LVL93:
 864              	.LBE260:
 865              	.LBE261:
 866              	.LBB262:
 867              	.LBB263:
 868              		.file 6 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 869              		.loc 6 90 0
 870 023b 48C74424 		movq	$0, 32(%rsp)
 870      20000000 
 870      00
 871 0244 C7442428 		movl	$0, 40(%rsp)
 871      00000000 
 872              	.LVL94:
 873              	.LBE263:
 874              	.LBE262:
 875              	.LBB264:
 876              	.LBB265:
 877 024c 48C74424 		movq	$0, 48(%rsp)
 877      30000000 
 877      00
 878 0255 C7442438 		movl	$0, 56(%rsp)
 878      00000000 
 879              	.LVL95:
 880              	.L58:
 881              	.LBE265:
 882              	.LBE264:
 883              		.loc 1 155 0
 884 025d 488B5500 		movq	0(%rbp), %rdx
 885              	.LVL96:
 886 0261 F6426002 		testb	$2, 96(%rdx)
 887 0265 0F84B502 		je	.L93
 887      0000
 888              	.LVL97:
 889              	.L56:
 890              		.loc 1 154 0
 891 026b 83C301   		addl	$1, %ebx
 892              	.LVL98:
 893 026e 4883C508 		addq	$8, %rbp
 894 0272 4983C704 		addq	$4, %r15
 895 0276 4983C604 		addq	$4, %r14
 896 027a 83FB03   		cmpl	$3, %ebx
 897 027d 75DE     		jne	.L58
 898              	.LVL99:
 899              		.loc 1 169 0
 900 027f 488B1500 		movq	_ZL5input(%rip), %rdx
 900      000000
 901 0286 F6426002 		testb	$2, 96(%rdx)
 902 028a 0F855003 		jne	.L59
 902      0000
 903 0290 8B44241C 		movl	28(%rsp), %eax
 904 0294 8D4819   		leal	25(%rax), %ecx
 905              	.LVL100:
 906              	.L60:
 907              		.loc 1 173 0
 908 0297 8B542424 		movl	36(%rsp), %edx
 909 029b 03542420 		addl	32(%rsp), %edx
 910              		.loc 1 181 0
 911 029f 468D7421 		leal	30(%rcx,%r12), %r14d
 911      1E
 912              		.loc 1 172 0
 913 02a4 8B442418 		movl	24(%rsp), %eax
 914              		.loc 1 173 0
 915 02a8 03542428 		addl	40(%rsp), %edx
 916              		.loc 1 183 0
 917 02ac 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 917      000000
 918              	.LBB266:
 919              	.LBB267:
 341:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 920              		.loc 2 341 0
 921 02b3 4589F0   		movl	%r14d, %r8d
 922              	.LBE267:
 923              	.LBE266:
 924              		.loc 1 172 0
 925 02b6 8D583C   		leal	60(%rax), %ebx
 926              	.LVL101:
 927              		.loc 1 173 0
 928 02b9 83EA0A   		subl	$10, %edx
 929              	.LVL102:
 930              	.LBB271:
 931              	.LBB268:
 341:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 932              		.loc 2 341 0
 933 02bc 8B7720   		movl	32(%rdi), %esi
 934 02bf 39D3     		cmpl	%edx, %ebx
 935 02c1 0F4CDA   		cmovl	%edx, %ebx
 936              	.LVL103:
 937              	.LBE268:
 938              	.LBE271:
 939              		.loc 1 189 0
 940 02c4 31ED     		xorl	%ebp, %ebp
 941              		.loc 1 178 0
 942 02c6 8D53C4   		leal	-60(%rbx), %edx
 943              	.LVL104:
 944              		.loc 1 180 0
 945 02c9 83C314   		addl	$20, %ebx
 946              	.LVL105:
 947              	.LBB272:
 948              	.LBB269:
 341:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 949              		.loc 2 341 0
 950 02cc 89D9     		movl	%ebx, %ecx
 951              	.LVL106:
 952              	.LBE269:
 953              	.LBE272:
 954              		.loc 1 178 0
 955 02ce 89542418 		movl	%edx, 24(%rsp)
 956              	.LBB273:
 957              	.LBB270:
 341:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 958              		.loc 2 341 0
 959 02d2 4C8B0F   		movq	(%rdi), %r9
 960 02d5 8B5724   		movl	36(%rdi), %edx
 961 02d8 41FF5120 		call	*32(%r9)
 962              	.LVL107:
 963              	.LBE270:
 964              	.LBE273:
 965              		.loc 1 184 0
 966 02dc 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 966      000000
 967              	.LVL108:
 968              	.LBB274:
 969              	.LBB275:
 970              		.file 7 "fltk-1.3.4-1/FL/Fl_Window.H"
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
 440:fltk-1.3.4-1/FL/Fl_Window.H ****     this->minh   = minh;
 971              		.loc 7 440 0
 972 02e3 4489B7C4 		movl	%r14d, 196(%rdi)
 972      000000
 441:fltk-1.3.4-1/FL/Fl_Window.H ****     this->maxw   = maxw;
 442:fltk-1.3.4-1/FL/Fl_Window.H ****     this->maxh   = maxh;
 973              		.loc 7 442 0
 974 02ea 4489B7CC 		movl	%r14d, 204(%rdi)
 974      000000
 975              	.LBE275:
 976              	.LBE274:
 977              		.loc 1 195 0
 978 02f1 4183EE0A 		subl	$10, %r14d
 979              	.LVL109:
 980              	.LBB278:
 981              	.LBB276:
 439:fltk-1.3.4-1/FL/Fl_Window.H ****     this->minh   = minh;
 982              		.loc 7 439 0
 983 02f5 899FC000 		movl	%ebx, 192(%rdi)
 983      0000
 441:fltk-1.3.4-1/FL/Fl_Window.H ****     this->maxw   = maxw;
 984              		.loc 7 441 0
 985 02fb 899FC800 		movl	%ebx, 200(%rdi)
 985      0000
 986              	.LBE276:
 987              	.LBE278:
 988              		.loc 1 195 0
 989 0301 4529E6   		subl	%r12d, %r14d
 990              	.LBB279:
 991              	.LBB277:
 443:fltk-1.3.4-1/FL/Fl_Window.H ****     this->dw     = dw;
 992              		.loc 7 443 0
 993 0304 C787D000 		movl	$0, 208(%rdi)
 993      00000000 
 993      0000
 444:fltk-1.3.4-1/FL/Fl_Window.H ****     this->dh     = dh;
 994              		.loc 7 444 0
 995 030e C787D400 		movl	$0, 212(%rdi)
 995      00000000 
 995      0000
 445:fltk-1.3.4-1/FL/Fl_Window.H ****     this->aspect = aspect;
 996              		.loc 7 445 0
 997 0318 C787D800 		movl	$0, 216(%rdi)
 997      00000000 
 997      0000
 446:fltk-1.3.4-1/FL/Fl_Window.H ****     size_range_();
 998              		.loc 7 446 0
 999 0322 E8000000 		call	_ZN9Fl_Window11size_range_Ev
 999      00
 1000              	.LVL110:
 1001              	.LBE277:
 1002              	.LBE279:
 1003              		.loc 1 186 0
 1004 0327 488B3D00 		movq	_ZL7message(%rip), %rdi
 1004      000000
 1005 032e 448B4424 		movl	28(%rsp), %r8d
 1005      1C
 1006 0333 BA0A0000 		movl	$10, %edx
 1006      00
 1007 0338 8B4C2418 		movl	24(%rsp), %ecx
 1008 033c BE460000 		movl	$70, %esi
 1008      00
 1009 0341 4C8B0F   		movq	(%rdi), %r9
 1010 0344 41FF5120 		call	*32(%r9)
 1011              	.LVL111:
 1012              		.loc 1 187 0
 1013 0348 488B3D00 		movq	_ZL4icon(%rip), %rdi
 1013      000000
 1014 034f 41B83200 		movl	$50, %r8d
 1014      0000
 1015 0355 B9320000 		movl	$50, %ecx
 1015      00
 1016 035a BA0A0000 		movl	$10, %edx
 1016      00
 1017 035f BE0A0000 		movl	$10, %esi
 1017      00
 1018 0364 4C8B0F   		movq	(%rdi), %r9
 1019 0367 41FF5120 		call	*32(%r9)
 1020              	.LVL112:
 1021              	.LBB280:
 1022              	.LBB281:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1023              		.loc 2 508 0
 1024 036b 488B1500 		movq	_ZL4icon(%rip), %rdx
 1024      000000
 1025              	.LBE281:
 1026              	.LBE280:
 1027              		.loc 1 189 0
 1028 0372 488B3D00 		movq	_ZL5input(%rip), %rdi
 1028      000000
 1029 0379 41B81900 		movl	$25, %r8d
 1029      0000
 1030 037f 8B44241C 		movl	28(%rsp), %eax
 1031 0383 8B4C2418 		movl	24(%rsp), %ecx
 1032 0387 BE460000 		movl	$70, %esi
 1032      00
 1033              	.LBB283:
 1034              	.LBB282:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1035              		.loc 2 508 0
 1036 038c C7424C28 		movl	$40, 76(%rdx)
 1036      000000
 1037              	.LVL113:
 1038              	.LBE282:
 1039              	.LBE283:
 1040              		.loc 1 189 0
 1041 0393 4C8B0F   		movq	(%rdi), %r9
 1042 0396 8D500A   		leal	10(%rax), %edx
 1043 0399 41FF5120 		call	*32(%r9)
 1044              	.LVL114:
 1045              	.L62:
 1046              		.loc 1 192 0
 1047 039d 8B4C2C20 		movl	32(%rsp,%rbp), %ecx
 1048 03a1 85C9     		testl	%ecx, %ecx
 1049 03a3 0F854F01 		jne	.L94
 1049      0000
 1050              	.L61:
 1051 03a9 4883C504 		addq	$4, %rbp
 1052              		.loc 1 191 0
 1053 03ad 4883FD0C 		cmpq	$12, %rbp
 1054 03b1 75EA     		jne	.L62
 1055              	.LVL115:
 1056              	.LBE253:
 1057              	.LBE252:
 1058              		.loc 1 238 0
 1059 03b3 488B3D00 		movq	_ZL6button+8(%rip), %rdi
 1059      000000
 1060              	.LVL116:
 1061 03ba F6476002 		testb	$2, 96(%rdi)
 1062 03be 7512     		jne	.L63
 1063              	.LVL117:
 1064              		.loc 1 238 0 is_stmt 0 discriminator 1
 1065 03c0 488B0500 		movq	_ZL5input(%rip), %rax
 1065      000000
 1066 03c7 F6406002 		testb	$2, 96(%rax)
 1067 03cb 7405     		je	.L63
 1068              		.loc 1 239 0 is_stmt 1
 1069 03cd E8000000 		call	_ZN9Fl_Widget10take_focusEv
 1069      00
 1070              	.LVL118:
 1071              	.L63:
 1072              		.loc 1 240 0
 1073 03d2 8B050000 		movl	_ZL13enableHotspot(%rip), %eax
 1073      0000
 1074 03d8 85C0     		testl	%eax, %eax
 1075 03da 0F851002 		jne	.L95
 1075      0000
 1076              	.L65:
 1077              		.loc 1 242 0
 1078 03e0 4D85ED   		testq	%r13, %r13
 1079 03e3 0F847701 		je	.L66
 1079      0000
 1080              		.loc 1 242 0 is_stmt 0 discriminator 1
 1081 03e9 4C89EF   		movq	%r13, %rdi
 1082 03ec E8000000 		call	_ZN9Fl_Widget14label_shortcutEPKc
 1082      00
 1083              	.LVL119:
 1084 03f1 85C0     		testl	%eax, %eax
 1085 03f3 0F846701 		je	.L66
 1085      0000
 1086              	.LVL120:
 1087              	.LBB287:
 1088              	.LBB288:
 1089              		.loc 3 143 0 is_stmt 1
 1090 03f9 488B0500 		movq	_ZL6button(%rip), %rax
 1090      000000
 1091              	.LBE288:
 1092              	.LBE287:
 1093              		.loc 1 248 0
 1094 0400 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 1094      000000
 1095              	.LVL121:
 1096              	.LBB290:
 1097              	.LBB289:
 1098              		.loc 3 143 0
 1099 0407 C7407800 		movl	$0, 120(%rax)
 1099      000000
 1100              	.LBE289:
 1101              	.LBE290:
 1102              		.loc 1 248 0
 1103 040e 48837F30 		cmpq	$0, 48(%rdi)
 1103      00
 1104 0413 0F846701 		je	.L96
 1104      0000
 1105              	.LVL122:
 1106              	.L68:
 1107              	.LBB291:
 1108              	.LBB292:
 1109              		.file 8 "fltk-1.3.4-1/FL/Fl.H"
   1:fltk-1.3.4-1/FL/Fl.H **** //
   2:fltk-1.3.4-1/FL/Fl.H **** // "$Id: Fl.H 11945 2016-09-16 09:11:48Z manolo $"
   3:fltk-1.3.4-1/FL/Fl.H **** //
   4:fltk-1.3.4-1/FL/Fl.H **** // Main header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl.H **** //
   6:fltk-1.3.4-1/FL/Fl.H **** // Copyright 1998-2016 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl.H **** //
   8:fltk-1.3.4-1/FL/Fl.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl.H **** //
  12:fltk-1.3.4-1/FL/Fl.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl.H **** //
  14:fltk-1.3.4-1/FL/Fl.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl.H **** //
  16:fltk-1.3.4-1/FL/Fl.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl.H **** //
  18:fltk-1.3.4-1/FL/Fl.H **** 
  19:fltk-1.3.4-1/FL/Fl.H **** /** \file
  20:fltk-1.3.4-1/FL/Fl.H ****     Fl static class.
  21:fltk-1.3.4-1/FL/Fl.H ****  */
  22:fltk-1.3.4-1/FL/Fl.H **** 
  23:fltk-1.3.4-1/FL/Fl.H **** #ifndef Fl_H
  24:fltk-1.3.4-1/FL/Fl.H **** #  define Fl_H
  25:fltk-1.3.4-1/FL/Fl.H **** 
  26:fltk-1.3.4-1/FL/Fl.H **** #include <FL/Fl_Export.H>
  27:fltk-1.3.4-1/FL/Fl.H **** 
  28:fltk-1.3.4-1/FL/Fl.H **** #ifdef FLTK_HAVE_CAIRO
  29:fltk-1.3.4-1/FL/Fl.H **** # include <FL/Fl_Cairo.H>
  30:fltk-1.3.4-1/FL/Fl.H **** #endif
  31:fltk-1.3.4-1/FL/Fl.H **** 
  32:fltk-1.3.4-1/FL/Fl.H **** #  include "fl_utf8.h"
  33:fltk-1.3.4-1/FL/Fl.H **** #  include "Enumerations.H"
  34:fltk-1.3.4-1/FL/Fl.H **** #  ifndef Fl_Object
  35:fltk-1.3.4-1/FL/Fl.H **** #    define Fl_Object Fl_Widget	/**< for back compatibility - use Fl_Widget! */
  36:fltk-1.3.4-1/FL/Fl.H **** #  endif
  37:fltk-1.3.4-1/FL/Fl.H **** 
  38:fltk-1.3.4-1/FL/Fl.H **** #  ifdef check
  39:fltk-1.3.4-1/FL/Fl.H **** #    undef check
  40:fltk-1.3.4-1/FL/Fl.H **** #  endif
  41:fltk-1.3.4-1/FL/Fl.H **** 
  42:fltk-1.3.4-1/FL/Fl.H **** 
  43:fltk-1.3.4-1/FL/Fl.H **** class Fl_Widget;
  44:fltk-1.3.4-1/FL/Fl.H **** class Fl_Window;
  45:fltk-1.3.4-1/FL/Fl.H **** class Fl_Image;
  46:fltk-1.3.4-1/FL/Fl.H **** struct Fl_Label;
  47:fltk-1.3.4-1/FL/Fl.H **** 
  48:fltk-1.3.4-1/FL/Fl.H **** // Keep avoiding having the socket deps at that level but mke sure it will work in both 32 & 64 bit
  49:fltk-1.3.4-1/FL/Fl.H **** #if defined(WIN32) && !defined(__CYGWIN__)
  50:fltk-1.3.4-1/FL/Fl.H **** # if defined(_WIN64)
  51:fltk-1.3.4-1/FL/Fl.H **** #  define FL_SOCKET unsigned __int64
  52:fltk-1.3.4-1/FL/Fl.H **** # else
  53:fltk-1.3.4-1/FL/Fl.H **** #  define FL_SOCKET int
  54:fltk-1.3.4-1/FL/Fl.H **** # endif
  55:fltk-1.3.4-1/FL/Fl.H **** #else
  56:fltk-1.3.4-1/FL/Fl.H **** # define FL_SOCKET int
  57:fltk-1.3.4-1/FL/Fl.H **** #endif
  58:fltk-1.3.4-1/FL/Fl.H **** 
  59:fltk-1.3.4-1/FL/Fl.H **** 
  60:fltk-1.3.4-1/FL/Fl.H **** // Pointers you can use to change FLTK to a foreign language.
  61:fltk-1.3.4-1/FL/Fl.H **** // Note: Similar pointers are defined in FL/fl_ask.H and src/fl_ask.cxx
  62:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_ctrl;
  63:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_meta;
  64:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_alt;
  65:fltk-1.3.4-1/FL/Fl.H **** extern FL_EXPORT const char* fl_local_shift;
  66:fltk-1.3.4-1/FL/Fl.H **** 
  67:fltk-1.3.4-1/FL/Fl.H **** /** \defgroup  callback_functions Callback function typedefs
  68:fltk-1.3.4-1/FL/Fl.H ****  \brief Typedefs defined in <FL/Fl.H> for callback or handler functions passed as function paramete
  69:fltk-1.3.4-1/FL/Fl.H **** 
  70:fltk-1.3.4-1/FL/Fl.H ****     FLTK uses callback functions as parameters for some function calls, e.g. to
  71:fltk-1.3.4-1/FL/Fl.H ****     set up global event handlers (Fl::add_handler()), to add a timeout handler
  72:fltk-1.3.4-1/FL/Fl.H ****     (Fl::add_timeout()), and many more.
  73:fltk-1.3.4-1/FL/Fl.H **** 
  74:fltk-1.3.4-1/FL/Fl.H ****     The typedefs defined in this group describe the function parameters used to set
  75:fltk-1.3.4-1/FL/Fl.H ****     up or clear the callback functions and should also be referenced to define the
  76:fltk-1.3.4-1/FL/Fl.H ****     callback function to handle such events in the user's code.
  77:fltk-1.3.4-1/FL/Fl.H **** 
  78:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::add_handler(), Fl::add_timeout(), Fl::repeat_timeout(),
  79:fltk-1.3.4-1/FL/Fl.H **** 	 Fl::remove_timeout() and others
  80:fltk-1.3.4-1/FL/Fl.H ****   @{ */
  81:fltk-1.3.4-1/FL/Fl.H **** 
  82:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some label drawing functions passed as parameters */
  83:fltk-1.3.4-1/FL/Fl.H **** typedef void (Fl_Label_Draw_F)(const Fl_Label *label, int x, int y, int w, int h, Fl_Align align);
  84:fltk-1.3.4-1/FL/Fl.H **** 
  85:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some label measurement functions passed as parameters */
  86:fltk-1.3.4-1/FL/Fl.H **** typedef void (Fl_Label_Measure_F)(const Fl_Label *label, int &width, int &height);
  87:fltk-1.3.4-1/FL/Fl.H **** 
  88:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some box drawing functions passed as parameters */
  89:fltk-1.3.4-1/FL/Fl.H **** typedef void (Fl_Box_Draw_F)(int x, int y, int w, int h, Fl_Color color);
  90:fltk-1.3.4-1/FL/Fl.H **** 
  91:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some timeout callback functions passed as parameters */
  92:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Timeout_Handler)(void *data);
  93:fltk-1.3.4-1/FL/Fl.H **** 
  94:fltk-1.3.4-1/FL/Fl.H **** /** Signature of some wakeup callback functions passed as parameters */
  95:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Awake_Handler)(void *data);
  96:fltk-1.3.4-1/FL/Fl.H **** 
  97:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_idle callback functions passed as parameters */
  98:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Idle_Handler)(void *data);
  99:fltk-1.3.4-1/FL/Fl.H **** 
 100:fltk-1.3.4-1/FL/Fl.H **** /** Signature of set_idle callback functions passed as parameters */
 101:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Old_Idle_Handler)();
 102:fltk-1.3.4-1/FL/Fl.H **** 
 103:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_fd functions passed as parameters */
 104:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_FD_Handler)(FL_SOCKET fd, void *data);
 105:fltk-1.3.4-1/FL/Fl.H **** 
 106:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_handler functions passed as parameters */
 107:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_Event_Handler)(int event);
 108:fltk-1.3.4-1/FL/Fl.H **** 
 109:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_system_handler functions passed as parameters */
 110:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_System_Handler)(void *event, void *data);
 111:fltk-1.3.4-1/FL/Fl.H **** 
 112:fltk-1.3.4-1/FL/Fl.H **** /** Signature of set_abort functions passed as parameters */
 113:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Abort_Handler)(const char *format,...);
 114:fltk-1.3.4-1/FL/Fl.H **** 
 115:fltk-1.3.4-1/FL/Fl.H **** /** Signature of set_atclose functions passed as parameters */
 116:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Atclose_Handler)(Fl_Window *window, void *data);
 117:fltk-1.3.4-1/FL/Fl.H **** 
 118:fltk-1.3.4-1/FL/Fl.H **** /** Signature of args functions passed as parameters */
 119:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_Args_Handler)(int argc, char **argv, int &i);
 120:fltk-1.3.4-1/FL/Fl.H **** 
 121:fltk-1.3.4-1/FL/Fl.H **** /** Signature of event_dispatch functions passed as parameters.
 122:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::event_dispatch(Fl_Event_Dispatch) */
 123:fltk-1.3.4-1/FL/Fl.H **** typedef int (*Fl_Event_Dispatch)(int event, Fl_Window *w);
 124:fltk-1.3.4-1/FL/Fl.H **** 
 125:fltk-1.3.4-1/FL/Fl.H **** /** Signature of add_clipboard_notify functions passed as parameters */
 126:fltk-1.3.4-1/FL/Fl.H **** typedef void (*Fl_Clipboard_Notify_Handler)(int source, void *data);
 127:fltk-1.3.4-1/FL/Fl.H **** 
 128:fltk-1.3.4-1/FL/Fl.H **** /** @} */ /* group callback_functions */
 129:fltk-1.3.4-1/FL/Fl.H **** 
 130:fltk-1.3.4-1/FL/Fl.H **** 
 131:fltk-1.3.4-1/FL/Fl.H **** /**
 132:fltk-1.3.4-1/FL/Fl.H ****   The Fl is the FLTK global (static) class containing
 133:fltk-1.3.4-1/FL/Fl.H ****   state information and global methods for the current application.
 134:fltk-1.3.4-1/FL/Fl.H **** */
 135:fltk-1.3.4-1/FL/Fl.H **** class FL_EXPORT Fl {
 136:fltk-1.3.4-1/FL/Fl.H ****   Fl() {}; // no constructor!
 137:fltk-1.3.4-1/FL/Fl.H ****   
 138:fltk-1.3.4-1/FL/Fl.H **** private:
 139:fltk-1.3.4-1/FL/Fl.H ****   static int use_high_res_GL_;
 140:fltk-1.3.4-1/FL/Fl.H ****   
 141:fltk-1.3.4-1/FL/Fl.H **** public: // should be private!
 142:fltk-1.3.4-1/FL/Fl.H **** #ifndef FL_DOXYGEN
 143:fltk-1.3.4-1/FL/Fl.H ****   static int e_number;
 144:fltk-1.3.4-1/FL/Fl.H ****   static int e_x;
 145:fltk-1.3.4-1/FL/Fl.H ****   static int e_y;
 146:fltk-1.3.4-1/FL/Fl.H ****   static int e_x_root;
 147:fltk-1.3.4-1/FL/Fl.H ****   static int e_y_root;
 148:fltk-1.3.4-1/FL/Fl.H ****   static int e_dx;
 149:fltk-1.3.4-1/FL/Fl.H ****   static int e_dy;
 150:fltk-1.3.4-1/FL/Fl.H ****   static int e_state;
 151:fltk-1.3.4-1/FL/Fl.H ****   static int e_clicks;
 152:fltk-1.3.4-1/FL/Fl.H ****   static int e_is_click;
 153:fltk-1.3.4-1/FL/Fl.H ****   static int e_keysym;
 154:fltk-1.3.4-1/FL/Fl.H ****   static char* e_text;
 155:fltk-1.3.4-1/FL/Fl.H ****   static int e_length;
 156:fltk-1.3.4-1/FL/Fl.H ****   static void *e_clipboard_data;
 157:fltk-1.3.4-1/FL/Fl.H ****   static const char *e_clipboard_type;
 158:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Event_Dispatch e_dispatch;
 159:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* belowmouse_;
 160:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* pushed_;
 161:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* focus_;
 162:fltk-1.3.4-1/FL/Fl.H ****   static int damage_;
 163:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* selection_owner_;
 164:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* modal_;
 165:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* grab_;
 166:fltk-1.3.4-1/FL/Fl.H ****   static int compose_state; // used for dead keys (WIN32) or marked text (MacOS)
 167:fltk-1.3.4-1/FL/Fl.H ****   static void call_screen_init(); // recompute screen number and dimensions
 168:fltk-1.3.4-1/FL/Fl.H **** #ifdef __APPLE__
 169:fltk-1.3.4-1/FL/Fl.H ****   static void reset_marked_text(); // resets marked text
 170:fltk-1.3.4-1/FL/Fl.H ****   static void insertion_point_location(int x, int y, int height); // sets window coordinates & heig
 171:fltk-1.3.4-1/FL/Fl.H **** #endif
 172:fltk-1.3.4-1/FL/Fl.H **** #endif // FL_DOXYGEN
 173:fltk-1.3.4-1/FL/Fl.H ****   
 174:fltk-1.3.4-1/FL/Fl.H ****   
 175:fltk-1.3.4-1/FL/Fl.H ****   /**
 176:fltk-1.3.4-1/FL/Fl.H ****     If true then flush() will do something.
 177:fltk-1.3.4-1/FL/Fl.H ****   */
 178:fltk-1.3.4-1/FL/Fl.H ****   static void damage(int d) {damage_ = d;}
 179:fltk-1.3.4-1/FL/Fl.H ****   
 180:fltk-1.3.4-1/FL/Fl.H **** public:
 181:fltk-1.3.4-1/FL/Fl.H ****   /** Enumerator for global FLTK options.
 182:fltk-1.3.4-1/FL/Fl.H ****       These options can be set system wide, per user, or for the running
 183:fltk-1.3.4-1/FL/Fl.H ****       application only.
 184:fltk-1.3.4-1/FL/Fl.H ****       \see Fl::option(Fl_Option, bool)
 185:fltk-1.3.4-1/FL/Fl.H ****       \see Fl::option(Fl_Option)
 186:fltk-1.3.4-1/FL/Fl.H ****   */
 187:fltk-1.3.4-1/FL/Fl.H ****   typedef enum {
 188:fltk-1.3.4-1/FL/Fl.H ****       /// When switched on, moving the text cursor beyond the start or end of
 189:fltk-1.3.4-1/FL/Fl.H ****       /// a text in a text widget will change focus to the next text widget.
 190:fltk-1.3.4-1/FL/Fl.H ****       /// (This is considered 'old' behavior)
 191:fltk-1.3.4-1/FL/Fl.H ****       ///
 192:fltk-1.3.4-1/FL/Fl.H ****       /// When switched off (default), the cursor will stop at the end of the text.
 193:fltk-1.3.4-1/FL/Fl.H ****       /// Pressing Tab or Ctrl-Tab will advance the keyboard focus.
 194:fltk-1.3.4-1/FL/Fl.H ****       ///
 195:fltk-1.3.4-1/FL/Fl.H ****       /// See also: Fl_Input_::tab_nav()
 196:fltk-1.3.4-1/FL/Fl.H ****       ///
 197:fltk-1.3.4-1/FL/Fl.H ****     OPTION_ARROW_FOCUS = 0,
 198:fltk-1.3.4-1/FL/Fl.H ****       // When switched on, FLTK will use the file chooser dialog that comes 
 199:fltk-1.3.4-1/FL/Fl.H ****       // with your operating system whenever possible. When switched off, FLTK
 200:fltk-1.3.4-1/FL/Fl.H ****       // will present its own file chooser.
 201:fltk-1.3.4-1/FL/Fl.H ****       // \todo implement me
 202:fltk-1.3.4-1/FL/Fl.H ****     // OPTION_NATIVE_FILECHOOSER,
 203:fltk-1.3.4-1/FL/Fl.H ****       // When Filechooser Preview is enabled, the FLTK or native file chooser
 204:fltk-1.3.4-1/FL/Fl.H ****       // will show a preview of a selected file (if possible) before the user
 205:fltk-1.3.4-1/FL/Fl.H ****       // decides to choose the file.
 206:fltk-1.3.4-1/FL/Fl.H ****       // \todo implement me
 207:fltk-1.3.4-1/FL/Fl.H ****     //OPTION_FILECHOOSER_PREVIEW,
 208:fltk-1.3.4-1/FL/Fl.H ****       /// If visible focus is switched on (default), FLTK will draw a dotted rectangle 
 209:fltk-1.3.4-1/FL/Fl.H ****       /// inside the widget that will receive the next keystroke. If switched
 210:fltk-1.3.4-1/FL/Fl.H ****       /// off, no such indicator will be drawn and keyboard navigation
 211:fltk-1.3.4-1/FL/Fl.H ****       /// is disabled.
 212:fltk-1.3.4-1/FL/Fl.H ****     OPTION_VISIBLE_FOCUS,
 213:fltk-1.3.4-1/FL/Fl.H ****       /// If text drag-and-drop is enabled (default), the user can select and drag text
 214:fltk-1.3.4-1/FL/Fl.H ****       /// from any text widget. If disabled, no dragging is possible, however
 215:fltk-1.3.4-1/FL/Fl.H ****       /// dropping text from other applications still works.
 216:fltk-1.3.4-1/FL/Fl.H ****     OPTION_DND_TEXT,
 217:fltk-1.3.4-1/FL/Fl.H ****       /// If tooltips are enabled (default), hovering the mouse over a widget with a 
 218:fltk-1.3.4-1/FL/Fl.H ****       /// tooltip text will open a little tooltip window until the mouse leaves
 219:fltk-1.3.4-1/FL/Fl.H ****       /// the widget. If disabled, no tooltip is shown.
 220:fltk-1.3.4-1/FL/Fl.H ****     OPTION_SHOW_TOOLTIPS,
 221:fltk-1.3.4-1/FL/Fl.H ****      /// When switched on (default), Fl_Native_File_Chooser runs GTK file dialogs
 222:fltk-1.3.4-1/FL/Fl.H ****      /// if the GTK library is available on the platform (linux/unix only).
 223:fltk-1.3.4-1/FL/Fl.H ****      /// When switched off, GTK file dialogs aren't used even if the GTK library is available.
 224:fltk-1.3.4-1/FL/Fl.H ****     OPTION_FNFC_USES_GTK,
 225:fltk-1.3.4-1/FL/Fl.H ****       // don't change this, leave it always as the last element
 226:fltk-1.3.4-1/FL/Fl.H ****       /// For internal use only.
 227:fltk-1.3.4-1/FL/Fl.H ****     OPTION_LAST
 228:fltk-1.3.4-1/FL/Fl.H ****   } Fl_Option;
 229:fltk-1.3.4-1/FL/Fl.H **** 
 230:fltk-1.3.4-1/FL/Fl.H **** private:  
 231:fltk-1.3.4-1/FL/Fl.H ****   static unsigned char options_[OPTION_LAST];
 232:fltk-1.3.4-1/FL/Fl.H ****   static unsigned char options_read_;
 233:fltk-1.3.4-1/FL/Fl.H ****   
 234:fltk-1.3.4-1/FL/Fl.H **** public:  
 235:fltk-1.3.4-1/FL/Fl.H ****   /*
 236:fltk-1.3.4-1/FL/Fl.H ****    Return a global setting for all FLTK applications, possibly overridden
 237:fltk-1.3.4-1/FL/Fl.H ****    by a setting specifically for this application.
 238:fltk-1.3.4-1/FL/Fl.H ****    */
 239:fltk-1.3.4-1/FL/Fl.H ****   static bool option(Fl_Option opt);
 240:fltk-1.3.4-1/FL/Fl.H ****   
 241:fltk-1.3.4-1/FL/Fl.H ****   /*
 242:fltk-1.3.4-1/FL/Fl.H ****    Override an option while the application is running.
 243:fltk-1.3.4-1/FL/Fl.H ****    */
 244:fltk-1.3.4-1/FL/Fl.H ****   static void option(Fl_Option opt, bool val);
 245:fltk-1.3.4-1/FL/Fl.H ****   
 246:fltk-1.3.4-1/FL/Fl.H ****   /**
 247:fltk-1.3.4-1/FL/Fl.H ****     The currently executing idle callback function: DO NOT USE THIS DIRECTLY!
 248:fltk-1.3.4-1/FL/Fl.H ****     
 249:fltk-1.3.4-1/FL/Fl.H ****     This is now used as part of a higher level system allowing multiple
 250:fltk-1.3.4-1/FL/Fl.H ****     idle callback functions to be called.
 251:fltk-1.3.4-1/FL/Fl.H ****     \see add_idle(), remove_idle()
 252:fltk-1.3.4-1/FL/Fl.H ****   */
 253:fltk-1.3.4-1/FL/Fl.H ****   static void (*idle)();
 254:fltk-1.3.4-1/FL/Fl.H **** 
 255:fltk-1.3.4-1/FL/Fl.H **** #ifndef FL_DOXYGEN
 256:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Awake_Handler *awake_ring_;
 257:fltk-1.3.4-1/FL/Fl.H ****   static void **awake_data_;
 258:fltk-1.3.4-1/FL/Fl.H ****   static int awake_ring_size_;
 259:fltk-1.3.4-1/FL/Fl.H ****   static int awake_ring_head_;
 260:fltk-1.3.4-1/FL/Fl.H ****   static int awake_ring_tail_;
 261:fltk-1.3.4-1/FL/Fl.H ****   static const char* scheme_;
 262:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Image* scheme_bg_;
 263:fltk-1.3.4-1/FL/Fl.H **** 
 264:fltk-1.3.4-1/FL/Fl.H ****   static int e_original_keysym; // late addition
 265:fltk-1.3.4-1/FL/Fl.H ****   static int scrollbar_size_;
 266:fltk-1.3.4-1/FL/Fl.H **** #endif
 267:fltk-1.3.4-1/FL/Fl.H **** 
 268:fltk-1.3.4-1/FL/Fl.H **** 
 269:fltk-1.3.4-1/FL/Fl.H ****   static int add_awake_handler_(Fl_Awake_Handler, void*);
 270:fltk-1.3.4-1/FL/Fl.H ****   static int get_awake_handler_(Fl_Awake_Handler&, void*&);
 271:fltk-1.3.4-1/FL/Fl.H **** 
 272:fltk-1.3.4-1/FL/Fl.H **** public:
 273:fltk-1.3.4-1/FL/Fl.H **** 
 274:fltk-1.3.4-1/FL/Fl.H ****   // API version number
 275:fltk-1.3.4-1/FL/Fl.H ****   static double version();
 276:fltk-1.3.4-1/FL/Fl.H ****   static int api_version();
 277:fltk-1.3.4-1/FL/Fl.H **** 
 278:fltk-1.3.4-1/FL/Fl.H ****   // ABI version number
 279:fltk-1.3.4-1/FL/Fl.H ****   static int abi_version();
 280:fltk-1.3.4-1/FL/Fl.H **** 
 281:fltk-1.3.4-1/FL/Fl.H ****   /**
 282:fltk-1.3.4-1/FL/Fl.H ****     Returns whether the runtime library ABI version is correct.
 283:fltk-1.3.4-1/FL/Fl.H **** 
 284:fltk-1.3.4-1/FL/Fl.H ****     This enables you to check the ABI version of the linked FLTK
 285:fltk-1.3.4-1/FL/Fl.H ****     library at runtime.
 286:fltk-1.3.4-1/FL/Fl.H **** 
 287:fltk-1.3.4-1/FL/Fl.H ****     Returns 1 (true) if the compiled ABI version (in the header files)
 288:fltk-1.3.4-1/FL/Fl.H ****     and the linked library ABI version (used at runtime) are the same,
 289:fltk-1.3.4-1/FL/Fl.H ****     0 (false) otherwise.
 290:fltk-1.3.4-1/FL/Fl.H **** 
 291:fltk-1.3.4-1/FL/Fl.H ****     Argument \p val can be used to query a particular library ABI version.
 292:fltk-1.3.4-1/FL/Fl.H ****     Use for instance 10303 to query if the runtime library is compatible
 293:fltk-1.3.4-1/FL/Fl.H ****     with FLTK ABI version 1.3.3. This is rarely useful.
 294:fltk-1.3.4-1/FL/Fl.H **** 
 295:fltk-1.3.4-1/FL/Fl.H ****     The default \p val argument is FL_ABI_VERSION, which checks the version
 296:fltk-1.3.4-1/FL/Fl.H ****     defined at configure time (i.e. in the header files at program
 297:fltk-1.3.4-1/FL/Fl.H ****     compilation time) against the linked library version used at runtime.
 298:fltk-1.3.4-1/FL/Fl.H ****     This is particularly useful if you linked with a shared object library,
 299:fltk-1.3.4-1/FL/Fl.H ****     but it also concerns static linking.
 300:fltk-1.3.4-1/FL/Fl.H **** 
 301:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::abi_version()
 302:fltk-1.3.4-1/FL/Fl.H ****   */
 303:fltk-1.3.4-1/FL/Fl.H ****   static inline int abi_check(const int val = FL_ABI_VERSION) {
 304:fltk-1.3.4-1/FL/Fl.H ****     return val == abi_version();
 305:fltk-1.3.4-1/FL/Fl.H ****   }
 306:fltk-1.3.4-1/FL/Fl.H **** 
 307:fltk-1.3.4-1/FL/Fl.H ****   // argument parsers:
 308:fltk-1.3.4-1/FL/Fl.H ****   static int arg(int argc, char **argv, int& i);
 309:fltk-1.3.4-1/FL/Fl.H ****   static int args(int argc, char **argv, int& i, Fl_Args_Handler cb = 0);
 310:fltk-1.3.4-1/FL/Fl.H ****   static void args(int argc, char **argv);
 311:fltk-1.3.4-1/FL/Fl.H ****   /**
 312:fltk-1.3.4-1/FL/Fl.H ****     Usage string displayed if Fl::args() detects an invalid argument.
 313:fltk-1.3.4-1/FL/Fl.H ****     This may be changed to point to customized text at run-time.
 314:fltk-1.3.4-1/FL/Fl.H ****   */
 315:fltk-1.3.4-1/FL/Fl.H ****   static const char* const help;
 316:fltk-1.3.4-1/FL/Fl.H **** 
 317:fltk-1.3.4-1/FL/Fl.H ****   // things called by initialization:
 318:fltk-1.3.4-1/FL/Fl.H ****   static void display(const char*);
 319:fltk-1.3.4-1/FL/Fl.H ****   static int visual(int);
 320:fltk-1.3.4-1/FL/Fl.H ****   /**
 321:fltk-1.3.4-1/FL/Fl.H ****     This does the same thing as Fl::visual(int) but also requires OpenGL
 322:fltk-1.3.4-1/FL/Fl.H ****     drawing to work. This <I>must</I> be done if you want to draw in
 323:fltk-1.3.4-1/FL/Fl.H ****     normal windows with OpenGL with gl_start() and gl_end().
 324:fltk-1.3.4-1/FL/Fl.H ****     It may be useful to call this so your X windows use the same visual
 325:fltk-1.3.4-1/FL/Fl.H ****     as an Fl_Gl_Window, which on some servers will reduce colormap flashing.
 326:fltk-1.3.4-1/FL/Fl.H **** 
 327:fltk-1.3.4-1/FL/Fl.H ****     See Fl_Gl_Window for a list of additional values for the argument.
 328:fltk-1.3.4-1/FL/Fl.H ****   */
 329:fltk-1.3.4-1/FL/Fl.H ****   static int gl_visual(int, int *alist=0); // platform dependent
 330:fltk-1.3.4-1/FL/Fl.H ****   static void own_colormap();
 331:fltk-1.3.4-1/FL/Fl.H ****   static void get_system_colors();
 332:fltk-1.3.4-1/FL/Fl.H ****   static void foreground(uchar, uchar, uchar);
 333:fltk-1.3.4-1/FL/Fl.H ****   static void background(uchar, uchar, uchar);
 334:fltk-1.3.4-1/FL/Fl.H ****   static void background2(uchar, uchar, uchar);
 335:fltk-1.3.4-1/FL/Fl.H **** 
 336:fltk-1.3.4-1/FL/Fl.H ****   // schemes:
 337:fltk-1.3.4-1/FL/Fl.H ****   static int scheme(const char *name);
 338:fltk-1.3.4-1/FL/Fl.H ****   /** See void scheme(const char *name) */
 339:fltk-1.3.4-1/FL/Fl.H ****   static const char* scheme() {return scheme_;}
 340:fltk-1.3.4-1/FL/Fl.H **** 
 341:fltk-1.3.4-1/FL/Fl.H ****   /** Returns whether the current scheme is the given name.
 342:fltk-1.3.4-1/FL/Fl.H **** 
 343:fltk-1.3.4-1/FL/Fl.H ****     This is a fast inline convenience function to support scheme-specific
 344:fltk-1.3.4-1/FL/Fl.H ****     code in widgets, e.g. in their draw() methods, if required.
 345:fltk-1.3.4-1/FL/Fl.H **** 
 346:fltk-1.3.4-1/FL/Fl.H ****     Use a valid scheme name, not \p NULL (although \p NULL is allowed,
 347:fltk-1.3.4-1/FL/Fl.H ****     this is not a useful argument - see below).
 348:fltk-1.3.4-1/FL/Fl.H **** 
 349:fltk-1.3.4-1/FL/Fl.H ****     If Fl::scheme() has not been set or has been set to the default
 350:fltk-1.3.4-1/FL/Fl.H ****     scheme ("none" or "base"), then this will always return 0 regardless
 351:fltk-1.3.4-1/FL/Fl.H ****     of the argument, because Fl::scheme() is \p NULL in this case.
 352:fltk-1.3.4-1/FL/Fl.H **** 
 353:fltk-1.3.4-1/FL/Fl.H ****     \note The stored scheme name is always lowercase, and this method will
 354:fltk-1.3.4-1/FL/Fl.H ****     do a case-sensitive compare, so you \b must provide a lowercase string to
 355:fltk-1.3.4-1/FL/Fl.H ****     return the correct value. This is intentional for performance reasons.
 356:fltk-1.3.4-1/FL/Fl.H **** 
 357:fltk-1.3.4-1/FL/Fl.H ****     Example:
 358:fltk-1.3.4-1/FL/Fl.H ****     \code
 359:fltk-1.3.4-1/FL/Fl.H ****       if (Fl::is_scheme("gtk+")) { your_code_here(); }
 360:fltk-1.3.4-1/FL/Fl.H ****     \endcode
 361:fltk-1.3.4-1/FL/Fl.H **** 
 362:fltk-1.3.4-1/FL/Fl.H ****     \param[in] name \b lowercase string of requested scheme name.
 363:fltk-1.3.4-1/FL/Fl.H **** 
 364:fltk-1.3.4-1/FL/Fl.H ****     \return 1 if the given scheme is active, 0 otherwise.
 365:fltk-1.3.4-1/FL/Fl.H **** 
 366:fltk-1.3.4-1/FL/Fl.H ****     \see Fl::scheme(const char *name)
 367:fltk-1.3.4-1/FL/Fl.H ****   */
 368:fltk-1.3.4-1/FL/Fl.H ****   static int is_scheme(const char *name) {
 369:fltk-1.3.4-1/FL/Fl.H ****     return (scheme_ && name && !strcmp(name,scheme_));
 370:fltk-1.3.4-1/FL/Fl.H ****   }
 371:fltk-1.3.4-1/FL/Fl.H ****   /**
 372:fltk-1.3.4-1/FL/Fl.H ****     Called by scheme according to scheme name. 
 373:fltk-1.3.4-1/FL/Fl.H ****     Loads or reloads the current scheme selection. 
 374:fltk-1.3.4-1/FL/Fl.H ****     See void scheme(const char *name) 
 375:fltk-1.3.4-1/FL/Fl.H ****   */
 376:fltk-1.3.4-1/FL/Fl.H ****   static int reload_scheme(); // platform dependent
 377:fltk-1.3.4-1/FL/Fl.H ****   static int scrollbar_size();
 378:fltk-1.3.4-1/FL/Fl.H ****   static void scrollbar_size(int W);
 379:fltk-1.3.4-1/FL/Fl.H **** 
 380:fltk-1.3.4-1/FL/Fl.H ****   // execution:
 381:fltk-1.3.4-1/FL/Fl.H ****   static int wait();
 382:fltk-1.3.4-1/FL/Fl.H ****   static double wait(double time);
 383:fltk-1.3.4-1/FL/Fl.H ****   static int check();
 384:fltk-1.3.4-1/FL/Fl.H ****   static int ready();
 385:fltk-1.3.4-1/FL/Fl.H ****   static int run();
 386:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Widget* readqueue();
 387:fltk-1.3.4-1/FL/Fl.H ****   /**
 388:fltk-1.3.4-1/FL/Fl.H ****   Adds a one-shot timeout callback.  The function will be called by
 389:fltk-1.3.4-1/FL/Fl.H ****   Fl::wait() at <i>t</i> seconds after this function is called.
 390:fltk-1.3.4-1/FL/Fl.H ****   The optional void* argument is passed to the callback.
 391:fltk-1.3.4-1/FL/Fl.H ****   
 392:fltk-1.3.4-1/FL/Fl.H ****   You can have multiple timeout callbacks. To remove a timeout
 393:fltk-1.3.4-1/FL/Fl.H ****   callback use Fl::remove_timeout().
 394:fltk-1.3.4-1/FL/Fl.H ****   
 395:fltk-1.3.4-1/FL/Fl.H ****   If you need more accurate, repeated timeouts, use Fl::repeat_timeout() to
 396:fltk-1.3.4-1/FL/Fl.H ****   reschedule the subsequent timeouts.
 397:fltk-1.3.4-1/FL/Fl.H ****   
 398:fltk-1.3.4-1/FL/Fl.H ****   The following code will print "TICK" each second on
 399:fltk-1.3.4-1/FL/Fl.H ****   stdout with a fair degree of accuracy:
 400:fltk-1.3.4-1/FL/Fl.H ****   
 401:fltk-1.3.4-1/FL/Fl.H ****   \code
 402:fltk-1.3.4-1/FL/Fl.H **** #include <stdio.h>
 403:fltk-1.3.4-1/FL/Fl.H **** #include <FL/Fl.H>
 404:fltk-1.3.4-1/FL/Fl.H **** #include <FL/Fl_Window.H>
 405:fltk-1.3.4-1/FL/Fl.H **** void callback(void*) {
 406:fltk-1.3.4-1/FL/Fl.H ****   printf("TICK\n");
 407:fltk-1.3.4-1/FL/Fl.H ****   Fl::repeat_timeout(1.0, callback);    // retrigger timeout
 408:fltk-1.3.4-1/FL/Fl.H **** }
 409:fltk-1.3.4-1/FL/Fl.H **** int main() {
 410:fltk-1.3.4-1/FL/Fl.H ****   Fl_Window win(100,100);
 411:fltk-1.3.4-1/FL/Fl.H ****   win.show();
 412:fltk-1.3.4-1/FL/Fl.H ****   Fl::add_timeout(1.0, callback);       // set up first timeout
 413:fltk-1.3.4-1/FL/Fl.H ****   return Fl::run();
 414:fltk-1.3.4-1/FL/Fl.H **** }
 415:fltk-1.3.4-1/FL/Fl.H ****   \endcode
 416:fltk-1.3.4-1/FL/Fl.H ****   */
 417:fltk-1.3.4-1/FL/Fl.H ****   static void add_timeout(double t, Fl_Timeout_Handler,void* = 0); // platform dependent
 418:fltk-1.3.4-1/FL/Fl.H ****   /**
 419:fltk-1.3.4-1/FL/Fl.H ****   Repeats a timeout callback from the expiration of the
 420:fltk-1.3.4-1/FL/Fl.H ****   previous timeout, allowing for more accurate timing. You may only call
 421:fltk-1.3.4-1/FL/Fl.H ****   this method inside a timeout callback.
 422:fltk-1.3.4-1/FL/Fl.H ****   
 423:fltk-1.3.4-1/FL/Fl.H ****   The following code will print "TICK" each second on
 424:fltk-1.3.4-1/FL/Fl.H ****   stdout with a fair degree of accuracy:
 425:fltk-1.3.4-1/FL/Fl.H ****   
 426:fltk-1.3.4-1/FL/Fl.H ****   \code
 427:fltk-1.3.4-1/FL/Fl.H ****      void callback(void*) {
 428:fltk-1.3.4-1/FL/Fl.H ****        puts("TICK");
 429:fltk-1.3.4-1/FL/Fl.H ****        Fl::repeat_timeout(1.0, callback);
 430:fltk-1.3.4-1/FL/Fl.H ****      }
 431:fltk-1.3.4-1/FL/Fl.H ****   
 432:fltk-1.3.4-1/FL/Fl.H ****      int main() {
 433:fltk-1.3.4-1/FL/Fl.H ****        Fl::add_timeout(1.0, callback);
 434:fltk-1.3.4-1/FL/Fl.H ****        return Fl::run();
 435:fltk-1.3.4-1/FL/Fl.H ****      }
 436:fltk-1.3.4-1/FL/Fl.H ****   \endcode
 437:fltk-1.3.4-1/FL/Fl.H ****   */
 438:fltk-1.3.4-1/FL/Fl.H ****   static void repeat_timeout(double t, Fl_Timeout_Handler, void* = 0); // platform dependent
 439:fltk-1.3.4-1/FL/Fl.H ****   static int  has_timeout(Fl_Timeout_Handler, void* = 0);
 440:fltk-1.3.4-1/FL/Fl.H ****   static void remove_timeout(Fl_Timeout_Handler, void* = 0);
 441:fltk-1.3.4-1/FL/Fl.H ****   static void add_check(Fl_Timeout_Handler, void* = 0);
 442:fltk-1.3.4-1/FL/Fl.H ****   static int  has_check(Fl_Timeout_Handler, void* = 0);
 443:fltk-1.3.4-1/FL/Fl.H ****   static void remove_check(Fl_Timeout_Handler, void* = 0);
 444:fltk-1.3.4-1/FL/Fl.H ****   /**
 445:fltk-1.3.4-1/FL/Fl.H ****     Adds file descriptor fd to listen to.
 446:fltk-1.3.4-1/FL/Fl.H ****     
 447:fltk-1.3.4-1/FL/Fl.H ****     When the fd becomes ready for reading Fl::wait() will call the
 448:fltk-1.3.4-1/FL/Fl.H ****     callback and then return. The callback is passed the fd and the
 449:fltk-1.3.4-1/FL/Fl.H ****     arbitrary void* argument.
 450:fltk-1.3.4-1/FL/Fl.H ****     
 451:fltk-1.3.4-1/FL/Fl.H ****     The second version takes a when bitfield, with the bits
 452:fltk-1.3.4-1/FL/Fl.H ****     FL_READ, FL_WRITE, and FL_EXCEPT defined,
 453:fltk-1.3.4-1/FL/Fl.H ****     to indicate when the callback should be done.
 454:fltk-1.3.4-1/FL/Fl.H ****     
 455:fltk-1.3.4-1/FL/Fl.H ****     There can only be one callback of each type for a file descriptor. 
 456:fltk-1.3.4-1/FL/Fl.H ****     Fl::remove_fd() gets rid of <I>all</I> the callbacks for a given
 457:fltk-1.3.4-1/FL/Fl.H ****     file descriptor.
 458:fltk-1.3.4-1/FL/Fl.H ****     
 459:fltk-1.3.4-1/FL/Fl.H ****     Under UNIX <I>any</I> file descriptor can be monitored (files,
 460:fltk-1.3.4-1/FL/Fl.H ****     devices, pipes, sockets, etc.). Due to limitations in Microsoft Windows,
 461:fltk-1.3.4-1/FL/Fl.H ****     WIN32 applications can only monitor sockets.
 462:fltk-1.3.4-1/FL/Fl.H ****   */
 463:fltk-1.3.4-1/FL/Fl.H ****   static void add_fd(int fd, int when, Fl_FD_Handler cb, void* = 0); // platform dependent
 464:fltk-1.3.4-1/FL/Fl.H ****   /** See void add_fd(int fd, int when, Fl_FD_Handler cb, void* = 0) */
 465:fltk-1.3.4-1/FL/Fl.H ****   static void add_fd(int fd, Fl_FD_Handler cb, void* = 0); // platform dependent
 466:fltk-1.3.4-1/FL/Fl.H ****   /** Removes a file descriptor handler. */
 467:fltk-1.3.4-1/FL/Fl.H ****   static void remove_fd(int, int when); // platform dependent
 468:fltk-1.3.4-1/FL/Fl.H ****   /** Removes a file descriptor handler. */
 469:fltk-1.3.4-1/FL/Fl.H ****   static void remove_fd(int); // platform dependent
 470:fltk-1.3.4-1/FL/Fl.H **** 
 471:fltk-1.3.4-1/FL/Fl.H ****   static void add_idle(Fl_Idle_Handler cb, void* data = 0);
 472:fltk-1.3.4-1/FL/Fl.H ****   static int  has_idle(Fl_Idle_Handler cb, void* data = 0);
 473:fltk-1.3.4-1/FL/Fl.H ****   static void remove_idle(Fl_Idle_Handler cb, void* data = 0);
 474:fltk-1.3.4-1/FL/Fl.H ****   /** If true then flush() will do something. */
 475:fltk-1.3.4-1/FL/Fl.H ****   static int damage() {return damage_;}
 476:fltk-1.3.4-1/FL/Fl.H ****   static void redraw();
 477:fltk-1.3.4-1/FL/Fl.H ****   static void flush();
 478:fltk-1.3.4-1/FL/Fl.H ****   /** \addtogroup group_comdlg
 479:fltk-1.3.4-1/FL/Fl.H ****     @{ */
 480:fltk-1.3.4-1/FL/Fl.H ****   /**
 481:fltk-1.3.4-1/FL/Fl.H ****   FLTK calls Fl::warning() to output a warning message.
 482:fltk-1.3.4-1/FL/Fl.H ****   
 483:fltk-1.3.4-1/FL/Fl.H ****   The default version on Windows returns \e without printing a warning
 484:fltk-1.3.4-1/FL/Fl.H ****   message, because Windows programs normally don't have stderr (a console
 485:fltk-1.3.4-1/FL/Fl.H ****   window) enabled.
 486:fltk-1.3.4-1/FL/Fl.H **** 
 487:fltk-1.3.4-1/FL/Fl.H ****   The default version on all other platforms prints the warning message to stderr.
 488:fltk-1.3.4-1/FL/Fl.H **** 
 489:fltk-1.3.4-1/FL/Fl.H ****   You can override the behavior by setting the function pointer to your
 490:fltk-1.3.4-1/FL/Fl.H ****   own routine.
 491:fltk-1.3.4-1/FL/Fl.H **** 
 492:fltk-1.3.4-1/FL/Fl.H ****   Fl::warning() means that there was a recoverable problem, the display may
 493:fltk-1.3.4-1/FL/Fl.H ****   be messed up, but the user can probably keep working - all X protocol
 494:fltk-1.3.4-1/FL/Fl.H ****   errors call this, for example. The default implementation returns after
 495:fltk-1.3.4-1/FL/Fl.H ****   displaying the message.
 496:fltk-1.3.4-1/FL/Fl.H ****    \note \#include <FL/Fl.H>
 497:fltk-1.3.4-1/FL/Fl.H ****   */
 498:fltk-1.3.4-1/FL/Fl.H ****   static void (*warning)(const char*, ...);
 499:fltk-1.3.4-1/FL/Fl.H ****   /**
 500:fltk-1.3.4-1/FL/Fl.H ****   FLTK calls Fl::error() to output a normal error message.
 501:fltk-1.3.4-1/FL/Fl.H ****   
 502:fltk-1.3.4-1/FL/Fl.H ****   The default version on Windows displays the error message in a MessageBox window.
 503:fltk-1.3.4-1/FL/Fl.H **** 
 504:fltk-1.3.4-1/FL/Fl.H ****   The default version on all other platforms prints the error message to stderr.
 505:fltk-1.3.4-1/FL/Fl.H **** 
 506:fltk-1.3.4-1/FL/Fl.H ****   You can override the behavior by setting the function pointer to your
 507:fltk-1.3.4-1/FL/Fl.H ****   own routine.
 508:fltk-1.3.4-1/FL/Fl.H **** 
 509:fltk-1.3.4-1/FL/Fl.H ****   Fl::error() means there is a recoverable error such as the inability to read
 510:fltk-1.3.4-1/FL/Fl.H ****   an image file. The default implementation returns after displaying the message.
 511:fltk-1.3.4-1/FL/Fl.H ****    \note \#include <FL/Fl.H>
 512:fltk-1.3.4-1/FL/Fl.H ****   */
 513:fltk-1.3.4-1/FL/Fl.H ****   static void (*error)(const char*, ...);
 514:fltk-1.3.4-1/FL/Fl.H ****   /**
 515:fltk-1.3.4-1/FL/Fl.H ****   FLTK calls Fl::fatal() to output a fatal error message.
 516:fltk-1.3.4-1/FL/Fl.H ****   
 517:fltk-1.3.4-1/FL/Fl.H ****   The default version on Windows displays the error message in a MessageBox window.
 518:fltk-1.3.4-1/FL/Fl.H **** 
 519:fltk-1.3.4-1/FL/Fl.H ****   The default version on all other platforms prints the error message to stderr.
 520:fltk-1.3.4-1/FL/Fl.H ****   
 521:fltk-1.3.4-1/FL/Fl.H ****   You can override the behavior by setting the function pointer to your
 522:fltk-1.3.4-1/FL/Fl.H ****   own routine.
 523:fltk-1.3.4-1/FL/Fl.H **** 
 524:fltk-1.3.4-1/FL/Fl.H ****   Fl::fatal() must not return, as FLTK is in an unusable state, however your
 525:fltk-1.3.4-1/FL/Fl.H ****   version may be able to use longjmp or an exception to continue, as long as
 526:fltk-1.3.4-1/FL/Fl.H ****   it does not call FLTK again. The default implementation exits with status 1
 527:fltk-1.3.4-1/FL/Fl.H ****   after displaying the message.
 528:fltk-1.3.4-1/FL/Fl.H ****    \note \#include <FL/Fl.H>
 529:fltk-1.3.4-1/FL/Fl.H ****   */
 530:fltk-1.3.4-1/FL/Fl.H ****   static void (*fatal)(const char*, ...);
 531:fltk-1.3.4-1/FL/Fl.H ****   /** @} */
 532:fltk-1.3.4-1/FL/Fl.H **** 
 533:fltk-1.3.4-1/FL/Fl.H ****   /** \defgroup  fl_windows Windows handling functions
 534:fltk-1.3.4-1/FL/Fl.H ****       \brief Windows and standard dialogs handling declared in <FL/Fl.H>
 535:fltk-1.3.4-1/FL/Fl.H ****     @{ */
 536:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* first_window();
 537:fltk-1.3.4-1/FL/Fl.H ****   static void first_window(Fl_Window*);
 538:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* next_window(const Fl_Window*);
 539:fltk-1.3.4-1/FL/Fl.H **** 
 540:fltk-1.3.4-1/FL/Fl.H ****   /**
 541:fltk-1.3.4-1/FL/Fl.H ****     Returns the top-most modal() window currently shown.
 542:fltk-1.3.4-1/FL/Fl.H **** 
 543:fltk-1.3.4-1/FL/Fl.H ****     This is the most recently shown() window with modal() true, or NULL
 544:fltk-1.3.4-1/FL/Fl.H ****     if there are no modal() windows shown().
 545:fltk-1.3.4-1/FL/Fl.H ****     The modal() window has its handle() method called
 546:fltk-1.3.4-1/FL/Fl.H ****     for all events, and no other windows will have handle()
 547:fltk-1.3.4-1/FL/Fl.H ****     called (grab() overrides this).
 548:fltk-1.3.4-1/FL/Fl.H ****   */
 549:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* modal() {return modal_;}
 550:fltk-1.3.4-1/FL/Fl.H ****   /** Returns the window that currently receives all events.
 551:fltk-1.3.4-1/FL/Fl.H ****    
 552:fltk-1.3.4-1/FL/Fl.H ****    \return The window that currently receives all events,
 553:fltk-1.3.4-1/FL/Fl.H ****    or NULL if event grabbing is currently OFF.
 554:fltk-1.3.4-1/FL/Fl.H ****   */
 555:fltk-1.3.4-1/FL/Fl.H ****   static Fl_Window* grab() {return grab_;}
 1110              		.loc 8 555 0
 1111 0419 488B1D00 		movq	_ZN2Fl5grab_E(%rip), %rbx
 1111      000000
 1112              	.LBE292:
 1113              	.LBE291:
 1114              		.loc 1 253 0
 1115 0420 4885DB   		testq	%rbx, %rbx
 1116 0423 0F847C01 		je	.L70
 1116      0000
 1117              	.LVL123:
 1118              	.L99:
 1119              		.loc 1 253 0 is_stmt 0 discriminator 1
 1120 0429 31FF     		xorl	%edi, %edi
 1121 042b E8000000 		call	_ZN2Fl4grabEP9Fl_Window
 1121      00
 1122              	.LVL124:
 1123              		.loc 1 254 0 is_stmt 1 discriminator 1
 1124 0430 E8000000 		call	_ZN8Fl_Group7currentEv
 1124      00
 1125              	.LVL125:
 1126              		.loc 1 255 0 discriminator 1
 1127 0435 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 1127      000000
 1128              		.loc 1 254 0 discriminator 1
 1129 043c 4889C5   		movq	%rax, %rbp
 1130              	.LVL126:
 1131              		.loc 1 255 0 discriminator 1
 1132 043f 488B07   		movq	(%rdi), %rax
 1133              	.LVL127:
 1134 0442 FF5028   		call	*40(%rax)
 1135              	.LVL128:
 1136              		.loc 1 256 0 discriminator 1
 1137 0445 4889EF   		movq	%rbp, %rdi
 1138 0448 E8000000 		call	_ZN8Fl_Group7currentEPS_
 1138      00
 1139              	.LVL129:
 1140 044d 488B0500 		movq	_ZL12message_form(%rip), %rax
 1140      000000
 1141              		.loc 1 257 0 discriminator 1
 1142 0454 4883B8A0 		cmpq	$0, 160(%rax)
 1142      00000000 
 1143 045c 741D     		je	.L74
 1144              	.LVL130:
 1145 045e 6690     		.p2align 4,,10
 1146              		.p2align 3
 1147              	.L73:
 1148 0460 E8000000 		call	_ZN2Fl4waitEv
 1148      00
 1149              	.LVL131:
 1150 0465 488B0500 		movq	_ZL12message_form(%rip), %rax
 1150      000000
 1151 046c 4883B8A0 		cmpq	$0, 160(%rax)
 1151      00000000 
 1152 0474 75EA     		jne	.L73
 1153              		.loc 1 258 0
 1154 0476 4885DB   		testq	%rbx, %rbx
 1155 0479 7408     		je	.L72
 1156              	.LVL132:
 1157              	.L74:
 1158              		.loc 1 259 0
 1159 047b 4889DF   		movq	%rbx, %rdi
 1160 047e E8000000 		call	_ZN2Fl4grabEP9Fl_Window
 1160      00
 1161              	.LVL133:
 1162              	.L72:
 1163              		.loc 1 260 0
 1164 0483 488B7424 		movq	8(%rsp), %rsi
 1164      08
 1165 0488 488B3D00 		movq	_ZL4icon(%rip), %rdi
 1165      000000
 1166 048f E8000000 		call	_ZN9Fl_Widget5labelEPKc
 1166      00
 1167              	.LVL134:
 1168              		.loc 1 261 0
 1169 0494 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 1169      000000
 1170 049b 31F6     		xorl	%esi, %esi
 1171 049d E8000000 		call	_ZN9Fl_Window5labelEPKc
 1171      00
 1172              	.LVL135:
 1173              		.loc 1 265 0
 1174 04a2 488B8C24 		movq	1096(%rsp), %rcx
 1174      48040000 
 1175 04aa 6448330C 		xorq	%fs:40, %rcx
 1175      25280000 
 1175      00
 1176              		.loc 1 263 0
 1177 04b3 C6050000 		movb	$0, _ZL14avoidRecursion(%rip)
 1177      000000
 1178              		.loc 1 265 0
 1179 04ba 8B050000 		movl	_ZL7ret_val(%rip), %eax
 1179      0000
 1180 04c0 0F852E02 		jne	.L97
 1180      0000
 1181 04c6 4881C458 		addq	$1112, %rsp
 1181      040000
 1182              		.cfi_remember_state
 1183              		.cfi_def_cfa_offset 56
 1184 04cd 5B       		popq	%rbx
 1185              		.cfi_def_cfa_offset 48
 1186 04ce 5D       		popq	%rbp
 1187              		.cfi_def_cfa_offset 40
 1188              	.LVL136:
 1189 04cf 415C     		popq	%r12
 1190              		.cfi_def_cfa_offset 32
 1191 04d1 415D     		popq	%r13
 1192              		.cfi_def_cfa_offset 24
 1193              	.LVL137:
 1194 04d3 415E     		popq	%r14
 1195              		.cfi_def_cfa_offset 16
 1196 04d5 415F     		popq	%r15
 1197              		.cfi_def_cfa_offset 8
 1198 04d7 C3       		ret
 1199              	.LVL138:
 1200 04d8 0F1F8400 		.p2align 4,,10
 1200      00000000 
 1201              		.p2align 3
 1202              	.L42:
 1203              		.cfi_restore_state
 1204              		.loc 1 216 0 discriminator 1
 1205 04e0 488B5308 		movq	8(%rbx), %rdx
 1206 04e4 488D4208 		leaq	8(%rdx), %rax
 1207 04e8 48894308 		movq	%rax, 8(%rbx)
 1208 04ec E9A2FBFF 		jmp	.L43
 1208      FF
 1209              	.LVL139:
 1210              		.p2align 4,,10
 1211 04f1 0F1F8000 		.p2align 3
 1211      000000
 1212              	.L94:
 1213              	.LBB294:
 1214              	.LBB284:
 1215              		.loc 1 195 0
 1216 04f8 488BBC2D 		movq	_ZL6button(%rbp,%rbp), %rdi
 1216      00000000 
 1217              		.loc 1 194 0
 1218 0500 29CB     		subl	%ecx, %ebx
 1219              	.LVL140:
 1220              		.loc 1 195 0
 1221 0502 4589E0   		movl	%r12d, %r8d
 1222 0505 83E90A   		subl	$10, %ecx
 1223 0508 4489F2   		movl	%r14d, %edx
 1224 050b 89DE     		movl	%ebx, %esi
 1225 050d 4C8B0F   		movq	(%rdi), %r9
 1226 0510 41FF5120 		call	*32(%r9)
 1227              	.LVL141:
 1228 0514 E990FEFF 		jmp	.L61
 1228      FF
 1229              	.LVL142:
 1230 0519 0F1F8000 		.p2align 4,,10
 1230      000000
 1231              		.p2align 3
 1232              	.L93:
 1233              		.loc 1 157 0
 1234 0520 488B7A30 		movq	48(%rdx), %rdi
 1235 0524 B9010000 		movl	$1, %ecx
 1235      00
 1236 0529 4C89F2   		movq	%r14, %rdx
 1237              	.LVL143:
 1238 052c 4C89FE   		movq	%r15, %rsi
 1239 052f E8000000 		call	_Z10fl_measurePKcRiS1_i
 1239      00
 1240              	.LVL144:
 1241              		.loc 1 159 0
 1242 0534 83FB01   		cmpl	$1, %ebx
 1243 0537 0F84AD01 		je	.L98
 1243      0000
 1244              	.L57:
 1245              		.loc 1 163 0
 1246 053d 418B06   		movl	(%r14), %eax
 1247              		.loc 1 162 0
 1248 0540 4183071E 		addl	$30, (%r15)
 1249              		.loc 1 163 0
 1250 0544 8D500A   		leal	10(%rax), %edx
 1251 0547 4139D4   		cmpl	%edx, %r12d
 1252 054a 418916   		movl	%edx, (%r14)
 1253 054d 440F4CE2 		cmovl	%edx, %r12d
 1254              	.LVL145:
 1255 0551 E915FDFF 		jmp	.L56
 1255      FF
 1256              	.LVL146:
 1257 0556 662E0F1F 		.p2align 4,,10
 1257      84000000 
 1257      0000
 1258              		.p2align 3
 1259              	.L66:
 1260              	.LBE284:
 1261              	.LBE294:
 1262              	.LBB295:
 1263              	.LBB296:
 1264              		.loc 3 143 0
 1265 0560 488B0500 		movq	_ZL6button(%rip), %rax
 1265      000000
 1266              	.LBE296:
 1267              	.LBE295:
 1268              		.loc 1 248 0
 1269 0567 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 1269      000000
 1270              	.LVL147:
 1271              	.LBB298:
 1272              	.LBB297:
 1273              		.loc 3 143 0
 1274 056e C740781B 		movl	$65307, 120(%rax)
 1274      FF0000
 1275              	.LBE297:
 1276              	.LBE298:
 1277              		.loc 1 248 0
 1278 0575 48837F30 		cmpq	$0, 48(%rdi)
 1278      00
 1279 057a 0F8599FE 		jne	.L68
 1279      FFFF
 1280              	.LVL148:
 1281              	.L96:
 1282              		.loc 1 248 0 is_stmt 0 discriminator 1
 1283 0580 488B3500 		movq	_ZL21message_title_default(%rip), %rsi
 1283      000000
 1284 0587 4885F6   		testq	%rsi, %rsi
 1285 058a 0F8489FE 		je	.L68
 1285      FFFF
 1286              		.loc 1 249 0 is_stmt 1
 1287 0590 E8000000 		call	_ZN9Fl_Window5labelEPKc
 1287      00
 1288              	.LVL149:
 1289              	.LBB299:
 1290              	.LBB293:
 1291              		.loc 8 555 0
 1292 0595 488B1D00 		movq	_ZN2Fl5grab_E(%rip), %rbx
 1292      000000
 1293              	.LBE293:
 1294              	.LBE299:
 1295              		.loc 1 253 0
 1296 059c 4885DB   		testq	%rbx, %rbx
 1297 059f 0F8584FE 		jne	.L99
 1297      FFFF
 1298              	.L70:
 1299              		.loc 1 254 0
 1300 05a5 E8000000 		call	_ZN8Fl_Group7currentEv
 1300      00
 1301              	.LVL150:
 1302              		.loc 1 255 0
 1303 05aa 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 1303      000000
 1304              		.loc 1 254 0
 1305 05b1 4889C5   		movq	%rax, %rbp
 1306              	.LVL151:
 1307              		.loc 1 255 0
 1308 05b4 488B07   		movq	(%rdi), %rax
 1309              	.LVL152:
 1310 05b7 FF5028   		call	*40(%rax)
 1311              	.LVL153:
 1312              		.loc 1 256 0
 1313 05ba 4889EF   		movq	%rbp, %rdi
 1314 05bd E8000000 		call	_ZN8Fl_Group7currentEPS_
 1314      00
 1315              	.LVL154:
 1316 05c2 488B0500 		movq	_ZL12message_form(%rip), %rax
 1316      000000
 1317              		.loc 1 257 0
 1318 05c9 4883B8A0 		cmpq	$0, 160(%rax)
 1318      00000000 
 1319 05d1 0F8589FE 		jne	.L73
 1319      FFFF
 1320 05d7 E9A7FEFF 		jmp	.L72
 1320      FF
 1321              	.LVL155:
 1322 05dc 0F1F4000 		.p2align 4,,10
 1323              		.p2align 3
 1324              	.L59:
 1325              	.LBB300:
 1326              	.LBB285:
 1327              		.loc 1 170 0
 1328 05e0 8B4C241C 		movl	28(%rsp), %ecx
 1329              	.LVL156:
 1330 05e4 E9AEFCFF 		jmp	.L60
 1330      FF
 1331              	.LVL157:
 1332 05e9 0F1F8000 		.p2align 4,,10
 1332      000000
 1333              		.p2align 3
 1334              	.L95:
 1335              	.LBE285:
 1336              	.LBE300:
 1337              		.loc 1 241 0
 1338 05f0 488B3500 		movq	_ZL6button(%rip), %rsi
 1338      000000
 1339 05f7 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 1339      000000
 1340 05fe 31D2     		xorl	%edx, %edx
 1341 0600 E8000000 		call	_ZN9Fl_Window7hotspotEPK9Fl_Widgeti
 1341      00
 1342              	.LVL158:
 1343 0605 E9D6FDFF 		jmp	.L65
 1343      FF
 1344              	.LVL159:
 1345 060a 660F1F44 		.p2align 4,,10
 1345      0000
 1346              		.p2align 3
 1347              	.L41:
 1348              	.LBB301:
 1349              	.LBB302:
 1350              		.file 9 "/usr/include/x86_64-linux-gnu/bits/stdio2.h"
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
  35:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  36:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #elif !defined __cplusplus
  37:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # define sprintf(str, ...) \
  38:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __builtin___sprintf_chk (str, __USE_FORTIFY_LEVEL - 1, __bos (str), \
  39:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   __VA_ARGS__)
  40:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #endif
  41:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  42:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  43:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vsprintf (char *__restrict __s, const char *__restrict __fmt,
  44:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		 _G_va_list __ap))
  45:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  46:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___vsprintf_chk (__s, __USE_FORTIFY_LEVEL - 1,
  47:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				   __bos (__s), __fmt, __ap);
  48:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  49:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  50:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #if defined __USE_ISOC99 || defined __USE_UNIX98
  51:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  52:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
  53:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   size_t __slen, const char *__restrict __format,
  54:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			   ...) __THROW;
  55:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
  56:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    size_t __slen, const char *__restrict __format,
  57:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    _G_va_list __ap) __THROW;
  58:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  59:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # ifdef __va_arg_pack
  60:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  61:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (snprintf (char *__restrict __s, size_t __n,
  62:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		 const char *__restrict __fmt, ...))
  63:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  64:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___snprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
  65:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				   __bos (__s), __fmt, __va_arg_pack ());
  66:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** }
  67:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # elif !defined __cplusplus
  68:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** #  define snprintf(str, len, ...) \
  69:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   __builtin___snprintf_chk (str, len, __USE_FORTIFY_LEVEL - 1, __bos (str), \
  70:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 			    __VA_ARGS__)
  71:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** # endif
  72:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 
  73:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __fortify_function int
  74:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** __NTH (vsnprintf (char *__restrict __s, size_t __n,
  75:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 		  const char *__restrict __fmt, _G_va_list __ap))
  76:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** {
  77:/usr/include/x86_64-linux-gnu/bits/stdio2.h ****   return __builtin___vsnprintf_chk (__s, __n, __USE_FORTIFY_LEVEL - 1,
  78:/usr/include/x86_64-linux-gnu/bits/stdio2.h **** 				    __bos (__s), __fmt, __ap);
 1351              		.loc 9 78 0
 1352 0610 488D7C24 		leaq	64(%rsp), %rdi
 1352      40
 1353              	.LVL160:
 1354 0615 4989D9   		movq	%rbx, %r9
 1355 0618 4D89F0   		movq	%r14, %r8
 1356 061b B9000400 		movl	$1024, %ecx
 1356      00
 1357 0620 BA010000 		movl	$1, %edx
 1357      00
 1358 0625 BE000400 		movl	$1024, %esi
 1358      00
 1359 062a E8000000 		call	__vsnprintf_chk
 1359      00
 1360              	.LVL161:
 1361              	.LBE302:
 1362              	.LBE301:
 1363              		.loc 1 219 0
 1364 062f 488B3D00 		movq	_ZL7message(%rip), %rdi
 1364      000000
 1365 0636 488D7424 		leaq	64(%rsp), %rsi
 1365      40
 1366 063b E8000000 		call	_ZN9Fl_Widget5labelEPKc
 1366      00
 1367              	.LVL162:
 1368 0640 E95DFAFF 		jmp	.L44
 1368      FF
 1369              	.LVL163:
 1370              		.p2align 4,,10
 1371 0645 0F1F00   		.p2align 3
 1372              	.L91:
 1373              	.LBB303:
 1374              	.LBB304:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1375              		.loc 2 508 0
 1376 0648 8B150000 		movl	FL_NORMAL_SIZE(%rip), %edx
 1376      0000
 1377              	.LBE304:
 1378              	.LBE303:
 1379              		.loc 1 227 0
 1380 064e 488B3D00 		movq	_ZL6button(%rip), %rdi
 1380      000000
 1381 0655 4D85ED   		testq	%r13, %r13
 1382              	.LBB306:
 1383              	.LBB305:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1384              		.loc 2 508 0
 1385 0658 89504C   		movl	%edx, 76(%rax)
 1386              	.LBE305:
 1387              	.LBE306:
 1388              		.loc 1 227 0
 1389 065b 488B07   		movq	(%rdi), %rax
 1390              	.LVL164:
 1391 065e 0F8573FA 		jne	.L100
 1391      FFFF
 1392              	.LVL165:
 1393              	.L47:
 1394              		.loc 1 228 0
 1395 0664 FF5030   		call	*48(%rax)
 1396              	.LVL166:
 1397 0667 488B3D00 		movq	_ZL6button+8(%rip), %rdi
 1397      000000
 1398              	.LVL167:
 1399              	.LBB307:
 1400              	.LBB308:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1401              		.loc 2 332 0
 1402 066e BA460000 		movl	$70, %edx
 1402      00
 1403 0673 BE360100 		movl	$310, %esi
 1403      00
 1404 0678 488B07   		movq	(%rdi), %rax
 1405 067b 8B4F28   		movl	40(%rdi), %ecx
 1406 067e 448B472C 		movl	44(%rdi), %r8d
 1407 0682 FF5020   		call	*32(%rax)
 1408              	.LVL168:
 1409              	.LBE308:
 1410              	.LBE307:
 1411              		.loc 1 229 0
 1412 0685 488B3D00 		movq	_ZL6button+8(%rip), %rdi
 1412      000000
 1413 068c 4D85E4   		testq	%r12, %r12
 1414 068f 488B07   		movq	(%rdi), %rax
 1415 0692 0F8582FA 		jne	.L101
 1415      FFFF
 1416              	.LVL169:
 1417 0698 0F1F8400 		.p2align 4,,10
 1417      00000000 
 1418              		.p2align 3
 1419              	.L49:
 1420              		.loc 1 230 0
 1421 06a0 FF5030   		call	*48(%rax)
 1422              	.LVL170:
 1423              		.loc 1 231 0
 1424 06a3 488B3D00 		movq	_ZL6button+16(%rip), %rdi
 1424      000000
 1425 06aa 4885ED   		testq	%rbp, %rbp
 1426 06ad 488B07   		movq	(%rdi), %rax
 1427 06b0 0F8589FA 		jne	.L102
 1427      FFFF
 1428 06b6 662E0F1F 		.p2align 4,,10
 1428      84000000 
 1428      0000
 1429              		.p2align 3
 1430              	.L51:
 1431              		.loc 1 232 0
 1432 06c0 FF5030   		call	*48(%rax)
 1433              	.LVL171:
 1434 06c3 E989FAFF 		jmp	.L52
 1434      FF
 1435              	.LVL172:
 1436              	.L90:
 1437              	.LBB309:
 1438              	.LBB240:
 1439 06c8 E8000000 		call	_ZL8makeformv.part.14
 1439      00
 1440              	.LVL173:
 1441 06cd 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 1441      000000
 1442 06d4 E978F9FF 		jmp	.L40
 1442      FF
 1443              	.LVL174:
 1444              	.L92:
 1445              	.LBE240:
 1446              	.LBE309:
 1447              		.loc 1 234 0 discriminator 1
 1448 06d9 488B3500 		movq	_ZL9iconlabel(%rip), %rsi
 1448      000000
 1449 06e0 E8000000 		call	_ZN9Fl_Widget5labelEPKc
 1449      00
 1450              	.LVL175:
 1451 06e5 E980FAFF 		jmp	.L53
 1451      FF
 1452              	.LVL176:
 1453              	.L98:
 1454              	.LBB310:
 1455              	.LBB286:
 1456              		.loc 1 160 0
 1457 06ea 83442424 		addl	$20, 36(%rsp)
 1457      14
 1458 06ef E949FEFF 		jmp	.L57
 1458      FF
 1459              	.LVL177:
 1460              	.L97:
 1461              	.LBE286:
 1462              	.LBE310:
 1463              		.loc 1 265 0
 1464 06f4 E8000000 		call	__stack_chk_fail
 1464      00
 1465              	.LVL178:
 1466              		.cfi_endproc
 1467              	.LFE530:
 1469              		.section	.text.unlikely._ZL7innardsPKcP13__va_list_tagS0_S0_S0_
 1470              	.LCOLDE7:
 1471              		.section	.text._ZL7innardsPKcP13__va_list_tagS0_S0_S0_
 1472              	.LHOTE7:
 1473              		.section	.rodata.str1.1
 1474              	.LC8:
 1475 0003 6900     		.string	"i"
 1476              	.LC9:
 1477 0005 3F00     		.string	"?"
 1478              		.section	.text.unlikely._Z10fl_messagePKcz,"ax",@progbits
 1479              	.LCOLDB10:
 1480              		.section	.text._Z10fl_messagePKcz,"ax",@progbits
 1481              	.LHOTB10:
 1482              		.p2align 4,,15
 1483              		.globl	_Z10fl_messagePKcz
 1485              	_Z10fl_messagePKcz:
 1486              	.LFB532:
 1487              		.loc 1 338 0
 1488              		.cfi_startproc
 1489              	.LVL179:
 1490 0000 4881ECD8 		subq	$216, %rsp
 1490      000000
 1491              		.cfi_def_cfa_offset 224
 1492 0007 84C0     		testb	%al, %al
 1493 0009 48897424 		movq	%rsi, 40(%rsp)
 1493      28
 1494 000e 48895424 		movq	%rdx, 48(%rsp)
 1494      30
 1495 0013 48894C24 		movq	%rcx, 56(%rsp)
 1495      38
 1496 0018 4C894424 		movq	%r8, 64(%rsp)
 1496      40
 1497 001d 4C894C24 		movq	%r9, 72(%rsp)
 1497      48
 1498 0022 7437     		je	.L104
 1499 0024 0F294424 		movaps	%xmm0, 80(%rsp)
 1499      50
 1500 0029 0F294C24 		movaps	%xmm1, 96(%rsp)
 1500      60
 1501 002e 0F295424 		movaps	%xmm2, 112(%rsp)
 1501      70
 1502 0033 0F299C24 		movaps	%xmm3, 128(%rsp)
 1502      80000000 
 1503 003b 0F29A424 		movaps	%xmm4, 144(%rsp)
 1503      90000000 
 1504 0043 0F29AC24 		movaps	%xmm5, 160(%rsp)
 1504      A0000000 
 1505 004b 0F29B424 		movaps	%xmm6, 176(%rsp)
 1505      B0000000 
 1506 0053 0F29BC24 		movaps	%xmm7, 192(%rsp)
 1506      C0000000 
 1507              	.L104:
 1508              		.loc 1 338 0
 1509 005b 64488B04 		movq	%fs:40, %rax
 1509      25280000 
 1509      00
 1510 0064 48894424 		movq	%rax, 24(%rsp)
 1510      18
 1511 0069 31C0     		xorl	%eax, %eax
 1512              		.loc 1 340 0
 1513 006b 803D0000 		cmpb	$0, _ZL14avoidRecursion(%rip)
 1513      000000
 1514 0072 741C     		je	.L109
 1515              	.LVL180:
 1516              	.L103:
 1517              		.loc 1 351 0
 1518 0074 488B4424 		movq	24(%rsp), %rax
 1518      18
 1519 0079 64483304 		xorq	%fs:40, %rax
 1519      25280000 
 1519      00
 1520 0082 755E     		jne	.L110
 1521 0084 4881C4D8 		addq	$216, %rsp
 1521      000000
 1522              		.cfi_remember_state
 1523              		.cfi_def_cfa_offset 8
 1524 008b C3       		ret
 1525              	.LVL181:
 1526 008c 0F1F4000 		.p2align 4,,10
 1527              		.p2align 3
 1528              	.L109:
 1529              		.cfi_restore_state
 1530              		.loc 1 346 0
 1531 0090 488D8424 		leaq	224(%rsp), %rax
 1531      E0000000 
 1532              		.loc 1 348 0
 1533 0098 488B0D00 		movq	fl_close(%rip), %rcx
 1533      000000
 1534 009f 4531C0   		xorl	%r8d, %r8d
 1535 00a2 31D2     		xorl	%edx, %edx
 1536 00a4 4889E6   		movq	%rsp, %rsi
 1537              		.loc 1 346 0
 1538 00a7 C7042408 		movl	$8, (%rsp)
 1538      000000
 1539 00ae 48894424 		movq	%rax, 8(%rsp)
 1539      08
 1540 00b3 488D4424 		leaq	32(%rsp), %rax
 1540      20
 1541 00b8 C7442404 		movl	$48, 4(%rsp)
 1541      30000000 
 1542              		.loc 1 347 0
 1543 00c0 48C70500 		movq	$.LC8, _ZL9iconlabel(%rip)
 1543      00000000 
 1543      000000
 1544              		.loc 1 346 0
 1545 00cb 48894424 		movq	%rax, 16(%rsp)
 1545      10
 1546              		.loc 1 348 0
 1547 00d0 E8000000 		call	_ZL7innardsPKcP13__va_list_tagS0_S0_S0_
 1547      00
 1548              	.LVL182:
 1549              		.loc 1 350 0
 1550 00d5 48C70500 		movq	$.LC9, _ZL9iconlabel(%rip)
 1550      00000000 
 1550      000000
 1551 00e0 EB92     		jmp	.L103
 1552              	.L110:
 1553              		.loc 1 351 0
 1554 00e2 E8000000 		call	__stack_chk_fail
 1554      00
 1555              	.LVL183:
 1556              		.cfi_endproc
 1557              	.LFE532:
 1559              		.section	.text.unlikely._Z10fl_messagePKcz
 1560              	.LCOLDE10:
 1561              		.section	.text._Z10fl_messagePKcz
 1562              	.LHOTE10:
 1563              		.section	.rodata.str1.1
 1564              	.LC11:
 1565 0007 2100     		.string	"!"
 1566              		.section	.text.unlikely._Z8fl_alertPKcz,"ax",@progbits
 1567              	.LCOLDB12:
 1568              		.section	.text._Z8fl_alertPKcz,"ax",@progbits
 1569              	.LHOTB12:
 1570              		.p2align 4,,15
 1571              		.globl	_Z8fl_alertPKcz
 1573              	_Z8fl_alertPKcz:
 1574              	.LFB533:
 1575              		.loc 1 361 0
 1576              		.cfi_startproc
 1577              	.LVL184:
 1578 0000 4881ECD8 		subq	$216, %rsp
 1578      000000
 1579              		.cfi_def_cfa_offset 224
 1580 0007 84C0     		testb	%al, %al
 1581 0009 48897424 		movq	%rsi, 40(%rsp)
 1581      28
 1582 000e 48895424 		movq	%rdx, 48(%rsp)
 1582      30
 1583 0013 48894C24 		movq	%rcx, 56(%rsp)
 1583      38
 1584 0018 4C894424 		movq	%r8, 64(%rsp)
 1584      40
 1585 001d 4C894C24 		movq	%r9, 72(%rsp)
 1585      48
 1586 0022 7437     		je	.L112
 1587 0024 0F294424 		movaps	%xmm0, 80(%rsp)
 1587      50
 1588 0029 0F294C24 		movaps	%xmm1, 96(%rsp)
 1588      60
 1589 002e 0F295424 		movaps	%xmm2, 112(%rsp)
 1589      70
 1590 0033 0F299C24 		movaps	%xmm3, 128(%rsp)
 1590      80000000 
 1591 003b 0F29A424 		movaps	%xmm4, 144(%rsp)
 1591      90000000 
 1592 0043 0F29AC24 		movaps	%xmm5, 160(%rsp)
 1592      A0000000 
 1593 004b 0F29B424 		movaps	%xmm6, 176(%rsp)
 1593      B0000000 
 1594 0053 0F29BC24 		movaps	%xmm7, 192(%rsp)
 1594      C0000000 
 1595              	.L112:
 1596              		.loc 1 361 0
 1597 005b 64488B04 		movq	%fs:40, %rax
 1597      25280000 
 1597      00
 1598 0064 48894424 		movq	%rax, 24(%rsp)
 1598      18
 1599 0069 31C0     		xorl	%eax, %eax
 1600              		.loc 1 363 0
 1601 006b 803D0000 		cmpb	$0, _ZL14avoidRecursion(%rip)
 1601      000000
 1602 0072 741C     		je	.L117
 1603              	.LVL185:
 1604              	.L111:
 1605              		.loc 1 374 0
 1606 0074 488B4424 		movq	24(%rsp), %rax
 1606      18
 1607 0079 64483304 		xorq	%fs:40, %rax
 1607      25280000 
 1607      00
 1608 0082 755E     		jne	.L118
 1609 0084 4881C4D8 		addq	$216, %rsp
 1609      000000
 1610              		.cfi_remember_state
 1611              		.cfi_def_cfa_offset 8
 1612 008b C3       		ret
 1613              	.LVL186:
 1614 008c 0F1F4000 		.p2align 4,,10
 1615              		.p2align 3
 1616              	.L117:
 1617              		.cfi_restore_state
 1618              		.loc 1 369 0
 1619 0090 488D8424 		leaq	224(%rsp), %rax
 1619      E0000000 
 1620              		.loc 1 371 0
 1621 0098 488B0D00 		movq	fl_close(%rip), %rcx
 1621      000000
 1622 009f 4531C0   		xorl	%r8d, %r8d
 1623 00a2 31D2     		xorl	%edx, %edx
 1624 00a4 4889E6   		movq	%rsp, %rsi
 1625              		.loc 1 369 0
 1626 00a7 C7042408 		movl	$8, (%rsp)
 1626      000000
 1627 00ae 48894424 		movq	%rax, 8(%rsp)
 1627      08
 1628 00b3 488D4424 		leaq	32(%rsp), %rax
 1628      20
 1629 00b8 C7442404 		movl	$48, 4(%rsp)
 1629      30000000 
 1630              		.loc 1 370 0
 1631 00c0 48C70500 		movq	$.LC11, _ZL9iconlabel(%rip)
 1631      00000000 
 1631      000000
 1632              		.loc 1 369 0
 1633 00cb 48894424 		movq	%rax, 16(%rsp)
 1633      10
 1634              		.loc 1 371 0
 1635 00d0 E8000000 		call	_ZL7innardsPKcP13__va_list_tagS0_S0_S0_
 1635      00
 1636              	.LVL187:
 1637              		.loc 1 373 0
 1638 00d5 48C70500 		movq	$.LC9, _ZL9iconlabel(%rip)
 1638      00000000 
 1638      000000
 1639 00e0 EB92     		jmp	.L111
 1640              	.L118:
 1641              		.loc 1 374 0
 1642 00e2 E8000000 		call	__stack_chk_fail
 1642      00
 1643              	.LVL188:
 1644              		.cfi_endproc
 1645              	.LFE533:
 1647              		.section	.text.unlikely._Z8fl_alertPKcz
 1648              	.LCOLDE12:
 1649              		.section	.text._Z8fl_alertPKcz
 1650              	.LHOTE12:
 1651              		.section	.text.unlikely._Z6fl_askPKcz,"ax",@progbits
 1652              	.LCOLDB13:
 1653              		.section	.text._Z6fl_askPKcz,"ax",@progbits
 1654              	.LHOTB13:
 1655              		.p2align 4,,15
 1656              		.globl	_Z6fl_askPKcz
 1658              	_Z6fl_askPKcz:
 1659              	.LFB534:
 1660              		.loc 1 390 0
 1661              		.cfi_startproc
 1662              	.LVL189:
 1663 0000 4881ECD8 		subq	$216, %rsp
 1663      000000
 1664              		.cfi_def_cfa_offset 224
 1665 0007 84C0     		testb	%al, %al
 1666 0009 48897424 		movq	%rsi, 40(%rsp)
 1666      28
 1667 000e 48895424 		movq	%rdx, 48(%rsp)
 1667      30
 1668 0013 48894C24 		movq	%rcx, 56(%rsp)
 1668      38
 1669 0018 4C894424 		movq	%r8, 64(%rsp)
 1669      40
 1670 001d 4C894C24 		movq	%r9, 72(%rsp)
 1670      48
 1671 0022 7437     		je	.L120
 1672 0024 0F294424 		movaps	%xmm0, 80(%rsp)
 1672      50
 1673 0029 0F294C24 		movaps	%xmm1, 96(%rsp)
 1673      60
 1674 002e 0F295424 		movaps	%xmm2, 112(%rsp)
 1674      70
 1675 0033 0F299C24 		movaps	%xmm3, 128(%rsp)
 1675      80000000 
 1676 003b 0F29A424 		movaps	%xmm4, 144(%rsp)
 1676      90000000 
 1677 0043 0F29AC24 		movaps	%xmm5, 160(%rsp)
 1677      A0000000 
 1678 004b 0F29B424 		movaps	%xmm6, 176(%rsp)
 1678      B0000000 
 1679 0053 0F29BC24 		movaps	%xmm7, 192(%rsp)
 1679      C0000000 
 1680              	.L120:
 1681              		.loc 1 390 0
 1682 005b 64488B04 		movq	%fs:40, %rax
 1682      25280000 
 1682      00
 1683 0064 48894424 		movq	%rax, 24(%rsp)
 1683      18
 1684 0069 31C0     		xorl	%eax, %eax
 1685              		.loc 1 392 0
 1686 006b 803D0000 		cmpb	$0, _ZL14avoidRecursion(%rip)
 1686      000000
 1687 0072 753F     		jne	.L121
 1688              		.loc 1 398 0
 1689 0074 488D8424 		leaq	224(%rsp), %rax
 1689      E0000000 
 1690              		.loc 1 399 0
 1691 007c 488B0D00 		movq	fl_yes(%rip), %rcx
 1691      000000
 1692 0083 488B1500 		movq	fl_no(%rip), %rdx
 1692      000000
 1693 008a 4531C0   		xorl	%r8d, %r8d
 1694 008d 4889E6   		movq	%rsp, %rsi
 1695              		.loc 1 398 0
 1696 0090 C7042408 		movl	$8, (%rsp)
 1696      000000
 1697 0097 48894424 		movq	%rax, 8(%rsp)
 1697      08
 1698 009c 488D4424 		leaq	32(%rsp), %rax
 1698      20
 1699 00a1 C7442404 		movl	$48, 4(%rsp)
 1699      30000000 
 1700 00a9 48894424 		movq	%rax, 16(%rsp)
 1700      10
 1701              		.loc 1 399 0
 1702 00ae E8000000 		call	_ZL7innardsPKcP13__va_list_tagS0_S0_S0_
 1702      00
 1703              	.LVL190:
 1704              	.L121:
 1705              		.loc 1 403 0
 1706 00b3 488B5424 		movq	24(%rsp), %rdx
 1706      18
 1707 00b8 64483314 		xorq	%fs:40, %rdx
 1707      25280000 
 1707      00
 1708 00c1 7508     		jne	.L125
 1709 00c3 4881C4D8 		addq	$216, %rsp
 1709      000000
 1710              		.cfi_remember_state
 1711              		.cfi_def_cfa_offset 8
 1712 00ca C3       		ret
 1713              	.L125:
 1714              		.cfi_restore_state
 1715 00cb E8000000 		call	__stack_chk_fail
 1715      00
 1716              	.LVL191:
 1717              		.cfi_endproc
 1718              	.LFE534:
 1720              		.section	.text.unlikely._Z6fl_askPKcz
 1721              	.LCOLDE13:
 1722              		.section	.text._Z6fl_askPKcz
 1723              	.LHOTE13:
 1724              		.section	.text.unlikely._Z9fl_choicePKcS0_S0_S0_z,"ax",@progbits
 1725              	.LCOLDB14:
 1726              		.section	.text._Z9fl_choicePKcS0_S0_S0_z,"ax",@progbits
 1727              	.LHOTB14:
 1728              		.p2align 4,,15
 1729              		.globl	_Z9fl_choicePKcS0_S0_S0_z
 1731              	_Z9fl_choicePKcS0_S0_S0_z:
 1732              	.LFB535:
 1733              		.loc 1 459 0
 1734              		.cfi_startproc
 1735              	.LVL192:
 1736 0000 4881ECD8 		subq	$216, %rsp
 1736      000000
 1737              		.cfi_def_cfa_offset 224
 1738 0007 84C0     		testb	%al, %al
 1739 0009 4C894424 		movq	%r8, 64(%rsp)
 1739      40
 1740 000e 4C894C24 		movq	%r9, 72(%rsp)
 1740      48
 1741 0013 7437     		je	.L127
 1742 0015 0F294424 		movaps	%xmm0, 80(%rsp)
 1742      50
 1743 001a 0F294C24 		movaps	%xmm1, 96(%rsp)
 1743      60
 1744 001f 0F295424 		movaps	%xmm2, 112(%rsp)
 1744      70
 1745 0024 0F299C24 		movaps	%xmm3, 128(%rsp)
 1745      80000000 
 1746 002c 0F29A424 		movaps	%xmm4, 144(%rsp)
 1746      90000000 
 1747 0034 0F29AC24 		movaps	%xmm5, 160(%rsp)
 1747      A0000000 
 1748 003c 0F29B424 		movaps	%xmm6, 176(%rsp)
 1748      B0000000 
 1749 0044 0F29BC24 		movaps	%xmm7, 192(%rsp)
 1749      C0000000 
 1750              	.L127:
 1751              		.loc 1 459 0
 1752 004c 64488B04 		movq	%fs:40, %rax
 1752      25280000 
 1752      00
 1753 0055 48894424 		movq	%rax, 24(%rsp)
 1753      18
 1754 005a 31C0     		xorl	%eax, %eax
 1755              		.loc 1 461 0
 1756 005c 803D0000 		cmpb	$0, _ZL14avoidRecursion(%rip)
 1756      000000
 1757 0063 7537     		jne	.L128
 1758              		.loc 1 467 0
 1759 0065 488D8424 		leaq	224(%rsp), %rax
 1759      E0000000 
 1760              		.loc 1 468 0
 1761 006d 4989C8   		movq	%rcx, %r8
 1762 0070 4889D1   		movq	%rdx, %rcx
 1763              	.LVL193:
 1764 0073 4889F2   		movq	%rsi, %rdx
 1765              	.LVL194:
 1766 0076 4889E6   		movq	%rsp, %rsi
 1767              	.LVL195:
 1768              		.loc 1 467 0
 1769 0079 C7042420 		movl	$32, (%rsp)
 1769      000000
 1770 0080 48894424 		movq	%rax, 8(%rsp)
 1770      08
 1771 0085 488D4424 		leaq	32(%rsp), %rax
 1771      20
 1772 008a C7442404 		movl	$48, 4(%rsp)
 1772      30000000 
 1773 0092 48894424 		movq	%rax, 16(%rsp)
 1773      10
 1774              		.loc 1 468 0
 1775 0097 E8000000 		call	_ZL7innardsPKcP13__va_list_tagS0_S0_S0_
 1775      00
 1776              	.LVL196:
 1777              	.L128:
 1778              		.loc 1 471 0
 1779 009c 488B5424 		movq	24(%rsp), %rdx
 1779      18
 1780 00a1 64483314 		xorq	%fs:40, %rdx
 1780      25280000 
 1780      00
 1781 00aa 7508     		jne	.L132
 1782 00ac 4881C4D8 		addq	$216, %rsp
 1782      000000
 1783              		.cfi_remember_state
 1784              		.cfi_def_cfa_offset 8
 1785 00b3 C3       		ret
 1786              	.L132:
 1787              		.cfi_restore_state
 1788 00b4 E8000000 		call	__stack_chk_fail
 1788      00
 1789              	.LVL197:
 1790              		.cfi_endproc
 1791              	.LFE535:
 1793              		.section	.text.unlikely._Z9fl_choicePKcS0_S0_S0_z
 1794              	.LCOLDE14:
 1795              		.section	.text._Z9fl_choicePKcS0_S0_S0_z
 1796              	.LHOTE14:
 1797              		.section	.text.unlikely._ZL13input_innardsPKcP13__va_list_tagS0_h,"ax",@progbits
 1798              	.LCOLDB15:
 1799              		.section	.text._ZL13input_innardsPKcP13__va_list_tagS0_h,"ax",@progbits
 1800              	.LHOTB15:
 1801              		.p2align 4,,15
 1803              	_ZL13input_innardsPKcP13__va_list_tagS0_h:
 1804              	.LFB537:
 1805              		.loc 1 480 0
 1806              		.cfi_startproc
 1807              	.LVL198:
 1808 0000 4155     		pushq	%r13
 1809              		.cfi_def_cfa_offset 16
 1810              		.cfi_offset 13, -16
 1811 0002 4154     		pushq	%r12
 1812              		.cfi_def_cfa_offset 24
 1813              		.cfi_offset 12, -24
 1814 0004 4189CD   		movl	%ecx, %r13d
 1815 0007 55       		pushq	%rbp
 1816              		.cfi_def_cfa_offset 32
 1817              		.cfi_offset 6, -32
 1818 0008 53       		pushq	%rbx
 1819              		.cfi_def_cfa_offset 40
 1820              		.cfi_offset 3, -40
 1821 0009 4889FB   		movq	%rdi, %rbx
 1822 000c 4889F5   		movq	%rsi, %rbp
 1823 000f 4989D4   		movq	%rdx, %r12
 1824 0012 4883EC08 		subq	$8, %rsp
 1825              		.cfi_def_cfa_offset 48
 1826              	.LBB311:
 1827              	.LBB312:
 1828              		.loc 1 75 0
 1829 0016 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 1829      000000
 1830              	.LVL199:
 1831 001d 4885FF   		testq	%rdi, %rdi
 1832 0020 0F84DA00 		je	.L138
 1832      0000
 1833              	.LVL200:
 1834              	.L134:
 1835              	.LBE312:
 1836              	.LBE311:
 1837              	.LBB314:
 1838              	.LBB315:
 341:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1839              		.loc 2 341 0
 1840 0026 488B07   		movq	(%rdi), %rax
 1841 0029 8B5724   		movl	36(%rdi), %edx
 1842 002c 41B86700 		movl	$103, %r8d
 1842      0000
 1843 0032 8B7720   		movl	32(%rdi), %esi
 1844 0035 B99A0100 		movl	$410, %ecx
 1844      00
 1845 003a FF5020   		call	*32(%rax)
 1846              	.LVL201:
 1847              	.LBE315:
 1848              	.LBE314:
 1849              		.loc 1 483 0
 1850 003d 488B3D00 		movq	_ZL7message(%rip), %rdi
 1850      000000
 1851              	.LVL202:
 1852              	.LBB316:
 1853              	.LBB317:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1854              		.loc 2 332 0
 1855 0044 BA0A0000 		movl	$10, %edx
 1855      00
 1856 0049 BE3C0000 		movl	$60, %esi
 1856      00
 1857 004e 488B07   		movq	(%rdi), %rax
 1858 0051 8B4F28   		movl	40(%rdi), %ecx
 1859 0054 448B472C 		movl	44(%rdi), %r8d
 1860 0058 FF5020   		call	*32(%rax)
 1861              	.LVL203:
 1862              	.LBE317:
 1863              	.LBE316:
 1864              		.loc 1 484 0
 1865 005b 488B3D00 		movq	_ZL5input(%rip), %rdi
 1865      000000
 1866              	.LVL204:
 1867              		.loc 1 485 0
 1868 0062 488B07   		movq	(%rdi), %rax
 1869              	.LBB318:
 1870              	.LBB319:
 279:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1871              		.loc 2 279 0
 1872 0065 44886F6C 		movb	%r13b, 108(%rdi)
 1873              	.LVL205:
 1874              	.LBE319:
 1875              	.LBE318:
 1876              		.loc 1 485 0
 1877 0069 FF5028   		call	*40(%rax)
 1878              	.LVL206:
 1879              		.loc 1 486 0
 1880 006c 488B3D00 		movq	_ZL5input(%rip), %rdi
 1880      000000
 1881 0073 4C89E6   		movq	%r12, %rsi
 1882 0076 E8000000 		call	_ZN9Fl_Input_5valueEPKc
 1882      00
 1883              	.LVL207:
 1884              		.loc 1 487 0
 1885 007b 488B3D00 		movq	_ZL5input(%rip), %rdi
 1885      000000
 1886 0082 E8000000 		call	_ZN9Fl_Widget10take_focusEv
 1886      00
 1887              	.LVL208:
 1888              		.loc 1 489 0
 1889 0087 488B0D00 		movq	fl_ok(%rip), %rcx
 1889      000000
 1890 008e 488B1500 		movq	fl_cancel(%rip), %rdx
 1890      000000
 1891 0095 4531C0   		xorl	%r8d, %r8d
 1892 0098 4889EE   		movq	%rbp, %rsi
 1893 009b 4889DF   		movq	%rbx, %rdi
 1894 009e E8000000 		call	_ZL7innardsPKcP13__va_list_tagS0_S0_S0_
 1894      00
 1895              	.LVL209:
 1896              		.loc 1 490 0
 1897 00a3 488B3D00 		movq	_ZL5input(%rip), %rdi
 1897      000000
 1898              		.loc 1 489 0
 1899 00aa 89C3     		movl	%eax, %ebx
 1900              	.LVL210:
 1901              		.loc 1 490 0
 1902 00ac 488B07   		movq	(%rdi), %rax
 1903              	.LVL211:
 1904 00af FF5030   		call	*48(%rax)
 1905              	.LVL212:
 1906              		.loc 1 491 0
 1907 00b2 488B3D00 		movq	_ZL7message(%rip), %rdi
 1907      000000
 1908              	.LVL213:
 1909              	.LBB320:
 1910              	.LBB321:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1911              		.loc 2 332 0
 1912 00b9 BA190000 		movl	$25, %edx
 1912      00
 1913 00be BE3C0000 		movl	$60, %esi
 1913      00
 1914 00c3 488B07   		movq	(%rdi), %rax
 1915 00c6 8B4F28   		movl	40(%rdi), %ecx
 1916 00c9 448B472C 		movl	44(%rdi), %r8d
 1917 00cd FF5020   		call	*32(%rax)
 1918              	.LVL214:
 1919              	.LBE321:
 1920              	.LBE320:
 1921              		.loc 1 492 0
 1922 00d0 85DB     		testl	%ebx, %ebx
 1923 00d2 741C     		je	.L136
 1924 00d4 488B0500 		movq	_ZL5input(%rip), %rax
 1924      000000
 1925 00db 488B4078 		movq	120(%rax), %rax
 1926              	.LVL215:
 1927              		.loc 1 493 0 discriminator 1
 1928 00df 4883C408 		addq	$8, %rsp
 1929              		.cfi_remember_state
 1930              		.cfi_def_cfa_offset 40
 1931 00e3 5B       		popq	%rbx
 1932              		.cfi_def_cfa_offset 32
 1933              	.LVL216:
 1934 00e4 5D       		popq	%rbp
 1935              		.cfi_def_cfa_offset 24
 1936              	.LVL217:
 1937 00e5 415C     		popq	%r12
 1938              		.cfi_def_cfa_offset 16
 1939              	.LVL218:
 1940 00e7 415D     		popq	%r13
 1941              		.cfi_def_cfa_offset 8
 1942 00e9 C3       		ret
 1943              	.LVL219:
 1944 00ea 660F1F44 		.p2align 4,,10
 1944      0000
 1945              		.p2align 3
 1946              	.L136:
 1947              		.cfi_restore_state
 1948              		.loc 1 493 0 is_stmt 0
 1949 00f0 4883C408 		addq	$8, %rsp
 1950              		.cfi_remember_state
 1951              		.cfi_def_cfa_offset 40
 1952              		.loc 1 492 0 is_stmt 1
 1953 00f4 31C0     		xorl	%eax, %eax
 1954              		.loc 1 493 0
 1955 00f6 5B       		popq	%rbx
 1956              		.cfi_def_cfa_offset 32
 1957              	.LVL220:
 1958 00f7 5D       		popq	%rbp
 1959              		.cfi_def_cfa_offset 24
 1960              	.LVL221:
 1961 00f8 415C     		popq	%r12
 1962              		.cfi_def_cfa_offset 16
 1963              	.LVL222:
 1964 00fa 415D     		popq	%r13
 1965              		.cfi_def_cfa_offset 8
 1966 00fc C3       		ret
 1967              	.LVL223:
 1968 00fd 0F1F00   		.p2align 4,,10
 1969              		.p2align 3
 1970              	.L138:
 1971              		.cfi_restore_state
 1972              	.LBB322:
 1973              	.LBB313:
 1974 0100 E8000000 		call	_ZL8makeformv.part.14
 1974      00
 1975              	.LVL224:
 1976 0105 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 1976      000000
 1977 010c E915FFFF 		jmp	.L134
 1977      FF
 1978              	.LBE313:
 1979              	.LBE322:
 1980              		.cfi_endproc
 1981              	.LFE537:
 1983              		.section	.text.unlikely._ZL13input_innardsPKcP13__va_list_tagS0_h
 1984              	.LCOLDE15:
 1985              		.section	.text._ZL13input_innardsPKcP13__va_list_tagS0_h
 1986              	.LHOTE15:
 1987              		.section	.text.unlikely._Z8fl_inputPKcS0_z,"ax",@progbits
 1988              	.LCOLDB16:
 1989              		.section	.text._Z8fl_inputPKcS0_z,"ax",@progbits
 1990              	.LHOTB16:
 1991              		.p2align 4,,15
 1992              		.globl	_Z8fl_inputPKcS0_z
 1994              	_Z8fl_inputPKcS0_z:
 1995              	.LFB538:
 1996              		.loc 1 505 0
 1997              		.cfi_startproc
 1998              	.LVL225:
 1999 0000 4881ECD8 		subq	$216, %rsp
 1999      000000
 2000              		.cfi_def_cfa_offset 224
 2001 0007 84C0     		testb	%al, %al
 2002 0009 48895424 		movq	%rdx, 48(%rsp)
 2002      30
 2003 000e 48894C24 		movq	%rcx, 56(%rsp)
 2003      38
 2004 0013 4C894424 		movq	%r8, 64(%rsp)
 2004      40
 2005 0018 4C894C24 		movq	%r9, 72(%rsp)
 2005      48
 2006 001d 7437     		je	.L140
 2007 001f 0F294424 		movaps	%xmm0, 80(%rsp)
 2007      50
 2008 0024 0F294C24 		movaps	%xmm1, 96(%rsp)
 2008      60
 2009 0029 0F295424 		movaps	%xmm2, 112(%rsp)
 2009      70
 2010 002e 0F299C24 		movaps	%xmm3, 128(%rsp)
 2010      80000000 
 2011 0036 0F29A424 		movaps	%xmm4, 144(%rsp)
 2011      90000000 
 2012 003e 0F29AC24 		movaps	%xmm5, 160(%rsp)
 2012      A0000000 
 2013 0046 0F29B424 		movaps	%xmm6, 176(%rsp)
 2013      B0000000 
 2014 004e 0F29BC24 		movaps	%xmm7, 192(%rsp)
 2014      C0000000 
 2015              	.L140:
 2016              		.loc 1 505 0
 2017 0056 64488B04 		movq	%fs:40, %rax
 2017      25280000 
 2017      00
 2018 005f 48894424 		movq	%rax, 24(%rsp)
 2018      18
 2019 0064 31C0     		xorl	%eax, %eax
 2020              		.loc 1 507 0
 2021 0066 803D0000 		cmpb	$0, _ZL14avoidRecursion(%rip)
 2021      000000
 2022 006d 7533     		jne	.L141
 2023              		.loc 1 512 0
 2024 006f 488D8424 		leaq	224(%rsp), %rax
 2024      E0000000 
 2025              		.loc 1 513 0
 2026 0077 4889F2   		movq	%rsi, %rdx
 2027 007a 31C9     		xorl	%ecx, %ecx
 2028 007c 4889E6   		movq	%rsp, %rsi
 2029              	.LVL226:
 2030              		.loc 1 512 0
 2031 007f C7042410 		movl	$16, (%rsp)
 2031      000000
 2032 0086 C7442404 		movl	$48, 4(%rsp)
 2032      30000000 
 2033 008e 48894424 		movq	%rax, 8(%rsp)
 2033      08
 2034 0093 488D4424 		leaq	32(%rsp), %rax
 2034      20
 2035 0098 48894424 		movq	%rax, 16(%rsp)
 2035      10
 2036              		.loc 1 513 0
 2037 009d E8000000 		call	_ZL13input_innardsPKcP13__va_list_tagS0_h
 2037      00
 2038              	.LVL227:
 2039              	.L141:
 2040              		.loc 1 516 0
 2041 00a2 488B5424 		movq	24(%rsp), %rdx
 2041      18
 2042 00a7 64483314 		xorq	%fs:40, %rdx
 2042      25280000 
 2042      00
 2043 00b0 7508     		jne	.L145
 2044 00b2 4881C4D8 		addq	$216, %rsp
 2044      000000
 2045              		.cfi_remember_state
 2046              		.cfi_def_cfa_offset 8
 2047 00b9 C3       		ret
 2048              	.L145:
 2049              		.cfi_restore_state
 2050 00ba E8000000 		call	__stack_chk_fail
 2050      00
 2051              	.LVL228:
 2052              		.cfi_endproc
 2053              	.LFE538:
 2055              		.section	.text.unlikely._Z8fl_inputPKcS0_z
 2056              	.LCOLDE16:
 2057              		.section	.text._Z8fl_inputPKcS0_z
 2058              	.LHOTE16:
 2059              		.section	.text.unlikely._Z11fl_passwordPKcS0_z,"ax",@progbits
 2060              	.LCOLDB17:
 2061              		.section	.text._Z11fl_passwordPKcS0_z,"ax",@progbits
 2062              	.LHOTB17:
 2063              		.p2align 4,,15
 2064              		.globl	_Z11fl_passwordPKcS0_z
 2066              	_Z11fl_passwordPKcS0_z:
 2067              	.LFB539:
 2068              		.loc 1 531 0
 2069              		.cfi_startproc
 2070              	.LVL229:
 2071 0000 4881ECD8 		subq	$216, %rsp
 2071      000000
 2072              		.cfi_def_cfa_offset 224
 2073 0007 84C0     		testb	%al, %al
 2074 0009 48895424 		movq	%rdx, 48(%rsp)
 2074      30
 2075 000e 48894C24 		movq	%rcx, 56(%rsp)
 2075      38
 2076 0013 4C894424 		movq	%r8, 64(%rsp)
 2076      40
 2077 0018 4C894C24 		movq	%r9, 72(%rsp)
 2077      48
 2078 001d 7437     		je	.L147
 2079 001f 0F294424 		movaps	%xmm0, 80(%rsp)
 2079      50
 2080 0024 0F294C24 		movaps	%xmm1, 96(%rsp)
 2080      60
 2081 0029 0F295424 		movaps	%xmm2, 112(%rsp)
 2081      70
 2082 002e 0F299C24 		movaps	%xmm3, 128(%rsp)
 2082      80000000 
 2083 0036 0F29A424 		movaps	%xmm4, 144(%rsp)
 2083      90000000 
 2084 003e 0F29AC24 		movaps	%xmm5, 160(%rsp)
 2084      A0000000 
 2085 0046 0F29B424 		movaps	%xmm6, 176(%rsp)
 2085      B0000000 
 2086 004e 0F29BC24 		movaps	%xmm7, 192(%rsp)
 2086      C0000000 
 2087              	.L147:
 2088              		.loc 1 531 0
 2089 0056 64488B04 		movq	%fs:40, %rax
 2089      25280000 
 2089      00
 2090 005f 48894424 		movq	%rax, 24(%rsp)
 2090      18
 2091 0064 31C0     		xorl	%eax, %eax
 2092              		.loc 1 533 0
 2093 0066 803D0000 		cmpb	$0, _ZL14avoidRecursion(%rip)
 2093      000000
 2094 006d 7536     		jne	.L148
 2095              		.loc 1 538 0
 2096 006f 488D8424 		leaq	224(%rsp), %rax
 2096      E0000000 
 2097              		.loc 1 539 0
 2098 0077 4889F2   		movq	%rsi, %rdx
 2099 007a B9050000 		movl	$5, %ecx
 2099      00
 2100 007f 4889E6   		movq	%rsp, %rsi
 2101              	.LVL230:
 2102              		.loc 1 538 0
 2103 0082 C7042410 		movl	$16, (%rsp)
 2103      000000
 2104 0089 C7442404 		movl	$48, 4(%rsp)
 2104      30000000 
 2105 0091 48894424 		movq	%rax, 8(%rsp)
 2105      08
 2106 0096 488D4424 		leaq	32(%rsp), %rax
 2106      20
 2107 009b 48894424 		movq	%rax, 16(%rsp)
 2107      10
 2108              		.loc 1 539 0
 2109 00a0 E8000000 		call	_ZL13input_innardsPKcP13__va_list_tagS0_h
 2109      00
 2110              	.LVL231:
 2111              	.L148:
 2112              		.loc 1 542 0
 2113 00a5 488B5424 		movq	24(%rsp), %rdx
 2113      18
 2114 00aa 64483314 		xorq	%fs:40, %rdx
 2114      25280000 
 2114      00
 2115 00b3 7508     		jne	.L152
 2116 00b5 4881C4D8 		addq	$216, %rsp
 2116      000000
 2117              		.cfi_remember_state
 2118              		.cfi_def_cfa_offset 8
 2119 00bc C3       		ret
 2120              	.L152:
 2121              		.cfi_restore_state
 2122 00bd E8000000 		call	__stack_chk_fail
 2122      00
 2123              	.LVL232:
 2124              		.cfi_endproc
 2125              	.LFE539:
 2127              		.section	.text.unlikely._Z11fl_passwordPKcS0_z
 2128              	.LCOLDE17:
 2129              		.section	.text._Z11fl_passwordPKcS0_z
 2130              	.LHOTE17:
 2131              		.section	.text.unlikely._Z15fl_message_iconv,"ax",@progbits
 2132              	.LCOLDB18:
 2133              		.section	.text._Z15fl_message_iconv,"ax",@progbits
 2134              	.LHOTB18:
 2135              		.p2align 4,,15
 2136              		.globl	_Z15fl_message_iconv
 2138              	_Z15fl_message_iconv:
 2139              	.LFB536:
 2140              		.loc 1 477 0
 2141              		.cfi_startproc
 2142              	.LBB323:
 2143              	.LBB324:
 2144              		.loc 1 75 0
 2145 0000 48833D00 		cmpq	$0, _ZL12message_form(%rip)
 2145      00000000 
 2146 0008 740E     		je	.L157
 2147              	.LBE324:
 2148              	.LBE323:
 2149              		.loc 1 477 0
 2150 000a 488B0500 		movq	_ZL4icon(%rip), %rax
 2150      000000
 2151 0011 C3       		ret
 2152              		.p2align 4,,10
 2153 0012 660F1F44 		.p2align 3
 2153      0000
 2154              	.L157:
 2155 0018 4883EC08 		subq	$8, %rsp
 2156              		.cfi_def_cfa_offset 16
 2157              	.LBB326:
 2158              	.LBB325:
 2159 001c E8000000 		call	_ZL8makeformv.part.14
 2159      00
 2160              	.LVL233:
 2161              	.LBE325:
 2162              	.LBE326:
 2163              		.loc 1 477 0
 2164 0021 488B0500 		movq	_ZL4icon(%rip), %rax
 2164      000000
 2165 0028 4883C408 		addq	$8, %rsp
 2166              		.cfi_def_cfa_offset 8
 2167 002c C3       		ret
 2168              		.cfi_endproc
 2169              	.LFE536:
 2171              		.section	.text.unlikely._Z15fl_message_iconv
 2172              	.LCOLDE18:
 2173              		.section	.text._Z15fl_message_iconv
 2174              	.LHOTE18:
 2175              		.section	.text.unlikely._Z16fl_message_titlePKc,"ax",@progbits
 2176              	.LCOLDB19:
 2177              		.section	.text._Z16fl_message_titlePKc,"ax",@progbits
 2178              	.LHOTB19:
 2179              		.p2align 4,,15
 2180              		.globl	_Z16fl_message_titlePKc
 2182              	_Z16fl_message_titlePKc:
 2183              	.LFB542:
 2184              		.loc 1 586 0
 2185              		.cfi_startproc
 2186              	.LVL234:
 2187 0000 4889FE   		movq	%rdi, %rsi
 2188              	.LBB327:
 2189              	.LBB328:
 2190              		.loc 1 75 0
 2191 0003 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 2191      000000
 2192              	.LVL235:
 2193 000a 4885FF   		testq	%rdi, %rdi
 2194 000d 7409     		je	.L162
 2195              	.LBE328:
 2196              	.LBE327:
 2197              		.loc 1 588 0
 2198 000f E9000000 		jmp	_ZN9Fl_Window10copy_labelEPKc
 2198      00
 2199              	.LVL236:
 2200              		.p2align 4,,10
 2201 0014 0F1F4000 		.p2align 3
 2202              	.L162:
 2203              		.loc 1 586 0
 2204 0018 4883EC18 		subq	$24, %rsp
 2205              		.cfi_def_cfa_offset 32
 2206 001c 48897424 		movq	%rsi, 8(%rsp)
 2206      08
 2207              	.LBB330:
 2208              	.LBB329:
 2209 0021 E8000000 		call	_ZL8makeformv.part.14
 2209      00
 2210              	.LVL237:
 2211 0026 488B3D00 		movq	_ZL12message_form(%rip), %rdi
 2211      000000
 2212 002d 488B7424 		movq	8(%rsp), %rsi
 2212      08
 2213              	.LBE329:
 2214              	.LBE330:
 2215              		.loc 1 589 0
 2216 0032 4883C418 		addq	$24, %rsp
 2217              		.cfi_def_cfa_offset 8
 2218              		.loc 1 588 0
 2219 0036 E9000000 		jmp	_ZN9Fl_Window10copy_labelEPKc
 2219      00
 2220              	.LVL238:
 2221              		.cfi_endproc
 2222              	.LFE542:
 2224              		.section	.text.unlikely._Z16fl_message_titlePKc
 2225              	.LCOLDE19:
 2226              		.section	.text._Z16fl_message_titlePKc
 2227              	.LHOTE19:
 2228              		.globl	fl_close
 2229              		.section	.rodata.str1.1
 2230              	.LC20:
 2231 0009 436C6F73 		.string	"Close"
 2231      6500
 2232              		.section	.data.fl_close,"aw",@progbits
 2233              		.align 8
 2236              	fl_close:
 2237 0000 00000000 		.quad	.LC20
 2237      00000000 
 2238              		.globl	fl_cancel
 2239              		.section	.rodata.str1.1
 2240              	.LC21:
 2241 000f 43616E63 		.string	"Cancel"
 2241      656C00
 2242              		.section	.data.fl_cancel,"aw",@progbits
 2243              		.align 8
 2246              	fl_cancel:
 2247 0000 00000000 		.quad	.LC21
 2247      00000000 
 2248              		.globl	fl_ok
 2249              		.section	.rodata.str1.1
 2250              	.LC22:
 2251 0016 4F4B00   		.string	"OK"
 2252              		.section	.data.fl_ok,"aw",@progbits
 2253              		.align 8
 2256              	fl_ok:
 2257 0000 00000000 		.quad	.LC22
 2257      00000000 
 2258              		.globl	fl_yes
 2259              		.section	.rodata.str1.1
 2260              	.LC23:
 2261 0019 59657300 		.string	"Yes"
 2262              		.section	.data.fl_yes,"aw",@progbits
 2263              		.align 8
 2266              	fl_yes:
 2267 0000 00000000 		.quad	.LC23
 2267      00000000 
 2268              		.globl	fl_no
 2269              		.section	.rodata.str1.1
 2270              	.LC24:
 2271 001d 4E6F00   		.string	"No"
 2272              		.section	.data.fl_no,"aw",@progbits
 2273              		.align 8
 2276              	fl_no:
 2277 0000 00000000 		.quad	.LC24
 2277      00000000 
 2278              		.section	.bss._ZL14avoidRecursion,"aw",@nobits
 2281              	_ZL14avoidRecursion:
 2282 0000 00       		.zero	1
 2283              		.section	.data._ZL13enableHotspot,"aw",@progbits
 2284              		.align 4
 2287              	_ZL13enableHotspot:
 2288 0000 01000000 		.long	1
 2289              		.globl	fl_message_size_
 2290              		.section	.data.fl_message_size_,"aw",@progbits
 2291              		.align 4
 2294              	fl_message_size_:
 2295 0000 FFFFFFFF 		.long	-1
 2296              		.globl	fl_message_font_
 2297              		.section	.bss.fl_message_font_,"aw",@nobits
 2298              		.align 4
 2301              	fl_message_font_:
 2302 0000 00000000 		.zero	4
 2303              		.section	.bss._ZL21message_title_default,"aw",@nobits
 2304              		.align 8
 2307              	_ZL21message_title_default:
 2308 0000 00000000 		.zero	8
 2308      00000000 
 2309              		.section	.data._ZL9iconlabel,"aw",@progbits
 2310              		.align 8
 2313              	_ZL9iconlabel:
 2314 0000 00000000 		.quad	.LC9
 2314      00000000 
 2315              		.section	.bss._ZL7ret_val,"aw",@nobits
 2316              		.align 4
 2319              	_ZL7ret_val:
 2320 0000 00000000 		.zero	4
 2321              		.section	.bss._ZL5input,"aw",@nobits
 2322              		.align 8
 2325              	_ZL5input:
 2326 0000 00000000 		.zero	8
 2326      00000000 
 2327              		.section	.bss._ZL6button,"aw",@nobits
 2328              		.align 16
 2331              	_ZL6button:
 2332 0000 00000000 		.zero	24
 2332      00000000 
 2332      00000000 
 2332      00000000 
 2332      00000000 
 2333              		.section	.bss._ZL4icon,"aw",@nobits
 2334              		.align 8
 2337              	_ZL4icon:
 2338 0000 00000000 		.zero	8
 2338      00000000 
 2339              		.section	.bss._ZL7message,"aw",@nobits
 2340              		.align 8
 2343              	_ZL7message:
 2344 0000 00000000 		.zero	8
 2344      00000000 
 2345              		.section	.bss._ZL12message_form,"aw",@nobits
 2346              		.align 8
 2349              	_ZL12message_form:
 2350 0000 00000000 		.zero	8
 2350      00000000 
 2351              		.text
 2352              	.Letext0:
 2353              		.section	.text.unlikely._ZL9button_cbP9Fl_Widgetl
 2354              	.Letext_cold0:
 2355              		.file 10 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 2356              		.file 11 "/usr/include/x86_64-linux-gnu/bits/types.h"
 2357              		.file 12 "/usr/include/libio.h"
 2358              		.file 13 "<built-in>"
 2359              		.file 14 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h"
 2360              		.file 15 "/usr/include/stdio.h"
 2361              		.file 16 "fltk-1.3.4-1/FL/fl_types.h"
 2362              		.file 17 "fltk-1.3.4-1/FL/Enumerations.H"
 2363              		.file 18 "fltk-1.3.4-1/FL/Fl_Image.H"
 2364              		.file 19 "fltk-1.3.4-1/FL/fl_ask.H"
 2365              		.file 20 "/usr/include/X11/Xlib.h"
 2366              		.file 21 "fltk-1.3.4-1/FL/Fl_Device.H"
 2367              		.file 22 "fltk-1.3.4-1/FL/Fl_Input_.H"
 2368              		.file 23 "fltk-1.3.4-1/FL/x.H"
 2369              		.file 24 "/usr/include/stdlib.h"
 2370              		.file 25 "/usr/include/string.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 fl_ask.cxx
     /tmp/cc33AnpL.s:13     .text._ZL9button_cbP9Fl_Widgetl:0000000000000000 _ZL9button_cbP9Fl_Widgetl
     /tmp/cc33AnpL.s:2349   .bss._ZL12message_form:0000000000000000 _ZL12message_form
     /tmp/cc33AnpL.s:2319   .bss._ZL7ret_val:0000000000000000 _ZL7ret_val
     /tmp/cc33AnpL.s:41     .text._Z7fl_beepi:0000000000000000 _Z7fl_beepi
     /tmp/cc33AnpL.s:118    .text._Z18fl_message_hotspoti:0000000000000000 _Z18fl_message_hotspoti
     /tmp/cc33AnpL.s:2287   .data._ZL13enableHotspot:0000000000000000 _ZL13enableHotspot
     /tmp/cc33AnpL.s:143    .text._Z18fl_message_hotspotv:0000000000000000 _Z18fl_message_hotspotv
     /tmp/cc33AnpL.s:164    .text._Z24fl_message_title_defaultPKc:0000000000000000 _Z24fl_message_title_defaultPKc
     /tmp/cc33AnpL.s:2307   .bss._ZL21message_title_default:0000000000000000 _ZL21message_title_default
     /tmp/cc33AnpL.s:212    .text._ZL8makeformv.part.14:0000000000000000 _ZL8makeformv.part.14
     /tmp/cc33AnpL.s:2331   .bss._ZL6button:0000000000000000 _ZL6button
     /tmp/cc33AnpL.s:2343   .bss._ZL7message:0000000000000000 _ZL7message
     /tmp/cc33AnpL.s:2325   .bss._ZL5input:0000000000000000 _ZL5input
     /tmp/cc33AnpL.s:2337   .bss._ZL4icon:0000000000000000 _ZL4icon
     /tmp/cc33AnpL.s:581    .text._ZL7innardsPKcP13__va_list_tagS0_S0_S0_:0000000000000000 _ZL7innardsPKcP13__va_list_tagS0_S0_S0_
     /tmp/cc33AnpL.s:2281   .bss._ZL14avoidRecursion:0000000000000000 _ZL14avoidRecursion
     /tmp/cc33AnpL.s:2301   .bss.fl_message_font_:0000000000000000 fl_message_font_
     /tmp/cc33AnpL.s:2294   .data.fl_message_size_:0000000000000000 fl_message_size_
     /tmp/cc33AnpL.s:2313   .data._ZL9iconlabel:0000000000000000 _ZL9iconlabel
     /tmp/cc33AnpL.s:1485   .text._Z10fl_messagePKcz:0000000000000000 _Z10fl_messagePKcz
     /tmp/cc33AnpL.s:2236   .data.fl_close:0000000000000000 fl_close
     /tmp/cc33AnpL.s:1573   .text._Z8fl_alertPKcz:0000000000000000 _Z8fl_alertPKcz
     /tmp/cc33AnpL.s:1658   .text._Z6fl_askPKcz:0000000000000000 _Z6fl_askPKcz
     /tmp/cc33AnpL.s:2266   .data.fl_yes:0000000000000000 fl_yes
     /tmp/cc33AnpL.s:2276   .data.fl_no:0000000000000000 fl_no
     /tmp/cc33AnpL.s:1731   .text._Z9fl_choicePKcS0_S0_S0_z:0000000000000000 _Z9fl_choicePKcS0_S0_S0_z
     /tmp/cc33AnpL.s:1803   .text._ZL13input_innardsPKcP13__va_list_tagS0_h:0000000000000000 _ZL13input_innardsPKcP13__va_list_tagS0_h
     /tmp/cc33AnpL.s:2256   .data.fl_ok:0000000000000000 fl_ok
     /tmp/cc33AnpL.s:2246   .data.fl_cancel:0000000000000000 fl_cancel
     /tmp/cc33AnpL.s:1994   .text._Z8fl_inputPKcS0_z:0000000000000000 _Z8fl_inputPKcS0_z
     /tmp/cc33AnpL.s:2066   .text._Z11fl_passwordPKcS0_z:0000000000000000 _Z11fl_passwordPKcS0_z
     /tmp/cc33AnpL.s:2138   .text._Z15fl_message_iconv:0000000000000000 _Z15fl_message_iconv
     /tmp/cc33AnpL.s:2182   .text._Z16fl_message_titlePKc:0000000000000000 _Z16fl_message_titlePKc
                           .group:0000000000000000 wm4.0.734a972fbaf0de4774bf9193973ed39e
                           .group:0000000000000000 wm4.stdcpredef.h.19.bf2bf6c5fb087dfb5ef2d2297c2795de
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
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.Fl_Export.H.20.3dbf3d2c7d9097f306037857cddd06b1
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.string.h.23.8394011d5995a16f15d67d04e84a1d69
                           .group:0000000000000000 wm4.string.h.185.629aca749f254f2bc1fdc00bb73e17c4
                           .group:0000000000000000 wm4.string.h.643.46703e2bd0e6364475ff92bd861c1c9e
                           .group:0000000000000000 wm4.endian.h.19.ff00c9c0f5e9f9a9719c5de76ace57b4
                           .group:0000000000000000 wm4.endian.h.41.24cced64aef71195a51d4daa8e4f4a95
                           .group:0000000000000000 wm4.byteswap.h.38.11ee5fdc0f6cc53a16c505b9233cecef
                           .group:0000000000000000 wm4.endian.h.63.97272d7c64d5db8020003b32e9289502
                           .group:0000000000000000 wm4.ctype.h.43.d895d3ca09b51f800847b104b2ad2e41
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
                           .group:0000000000000000 wm4.stdlib.h.27.59e2586c75bdbcb991b248ad7257b993
                           .group:0000000000000000 wm4.stddef.h.238.95ea4ce844d9fee903b0cacc7c1e4931
                           .group:0000000000000000 wm4.waitflags.h.25.e401b8bcfee800b540b27abd7cc78de9
                           .group:0000000000000000 wm4.waitstatus.h.28.75da223233ea088d05b70fad69e90c9e
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
                           .group:0000000000000000 wm4.fl_ask.H.24.be48b4476a0524cdb7b19216c6f73157
                           .group:0000000000000000 wm4.Fl_Widget.H.23.c6088169683f892233bca1a5e34935ca
                           .group:0000000000000000 wm4.Fl_Button.H.23.dd2f7f39568a498db4235a51d94ff020
                           .group:0000000000000000 wm4.Fl_Window.H.33.21f4160d70070399993c6c2db07f8ad1
                           .group:0000000000000000 wm4.Fl_Input_.H.23.0358bf58b9391621e5f90e01bc1d1bea
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
fl_display
XBell
_Z15fl_open_displayv
free
strdup
_ZN8Fl_Group7currentEv
_ZN8Fl_Group7currentEPS_
_Znwm
_ZN9Fl_WindowC1EiiPKc
_ZN6Fl_BoxC1EiiiiPKc
_ZN8Fl_InputC1EiiiiPKc
_ZN9Fl_Widget4hideEv
_ZN8Fl_Group3endEv
_ZN9Fl_ButtonC1EiiiiPKc
_ZN8Fl_Group3addER9Fl_Widget
_ZN8Fl_Group5beginEv
_ZN16Fl_Return_ButtonC1EiiiiPKc
_ZN2Fl6pushedEP9Fl_Widget
_ZN9Fl_Widget5labelEPKc
fl_graphics_driver
_Z10fl_measurePKcRiS1_i
_ZN9Fl_Window11size_range_Ev
_ZN9Fl_Widget10take_focusEv
_ZN9Fl_Widget14label_shortcutEPKc
_ZN2Fl5grab_E
_ZN2Fl4grabEP9Fl_Window
_ZN2Fl4waitEv
_ZN9Fl_Window5labelEPKc
_ZN9Fl_Window7hotspotEPK9Fl_Widgeti
__vsnprintf_chk
FL_NORMAL_SIZE
__stack_chk_fail
_ZN9Fl_Input_5valueEPKc
_ZN9Fl_Window10copy_labelEPKc
