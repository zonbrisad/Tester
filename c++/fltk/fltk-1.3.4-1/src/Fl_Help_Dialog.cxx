   1              		.file	"Fl_Help_Dialog.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN14Fl_Help_Dialog8cb_back_EP9Fl_ButtonPv,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN14Fl_Help_Dialog8cb_back_EP9Fl_ButtonPv,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN14Fl_Help_Dialog8cb_back_EP9Fl_ButtonPv
  12              	.Ltext_cold0:
  13              		.section	.text._ZN14Fl_Help_Dialog8cb_back_EP9Fl_ButtonPv
  14              		.globl	_ZN14Fl_Help_Dialog8cb_back_EP9Fl_ButtonPv
  16              	_ZN14Fl_Help_Dialog8cb_back_EP9Fl_ButtonPv:
  17              	.LFB597:
  18              		.file 1 "fltk-1.3.4-1/src/Fl_Help_Dialog.cxx"
   1:fltk-1.3.4-1/src/Fl_Help_Dialog.cxx **** ...
  19              		.loc 1 48 0
  20              		.cfi_startproc
  21              	.LVL0:
  22 0000 4155     		pushq	%r13
  23              		.cfi_def_cfa_offset 16
  24              		.cfi_offset 13, -16
  25              	.LVL1:
  26 0002 4154     		pushq	%r12
  27              		.cfi_def_cfa_offset 24
  28              		.cfi_offset 12, -24
  29 0004 55       		pushq	%rbp
  30              		.cfi_def_cfa_offset 32
  31              		.cfi_offset 6, -32
  32 0005 53       		pushq	%rbx
  33              		.cfi_def_cfa_offset 40
  34              		.cfi_offset 3, -40
  35 0006 4883EC08 		subq	$8, %rsp
  36              		.cfi_def_cfa_offset 48
  37 000a 488B4708 		movq	8(%rdi), %rax
  38 000e 488B4008 		movq	8(%rax), %rax
  39 0012 488B5818 		movq	24(%rax), %rbx
  40              	.LVL2:
  41              	.LBB213:
  42              	.LBB214:
  43              		.loc 1 33 0
  44 0016 8B03     		movl	(%rbx), %eax
  45 0018 85C0     		testl	%eax, %eax
  46 001a 7E05     		jle	.L2
  47              		.loc 1 34 0
  48 001c 83E801   		subl	$1, %eax
  49 001f 8903     		movl	%eax, (%rbx)
  50              	.L2:
  51              		.loc 1 36 0
  52 0021 85C0     		testl	%eax, %eax
  53 0023 747B     		je	.L12
  54              	.LVL3:
  55              	.L3:
  56              		.loc 1 39 0
  57 0025 488BBBB0 		movq	205232(%rbx), %rdi
  57      210300
  58 002c E8000000 		call	_ZN9Fl_Widget8activateEv
  58      00
  59              	.LVL4:
  60              		.loc 1 41 0
  61 0031 486303   		movslq	(%rbx), %rax
  62              		.loc 1 43 0
  63 0034 488BABD0 		movq	205264(%rbx), %rbp
  63      210300
  64              	.LBB215:
  65              	.LBB216:
  66              		.file 2 "fltk-1.3.4-1/FL/Fl_Help_View.H"
   1:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
   2:fltk-1.3.4-1/FL/Fl_Help_View.H **** // "$Id: Fl_Help_View.H 11761 2016-05-31 09:12:40Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
   4:fltk-1.3.4-1/FL/Fl_Help_View.H **** // Help Viewer widget definitions.
   5:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
   6:fltk-1.3.4-1/FL/Fl_Help_View.H **** // Copyright 1997-2010 by Easy Software Products.
   7:fltk-1.3.4-1/FL/Fl_Help_View.H **** // Image support by Matthias Melcher, Copyright 2000-2009.
   8:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
   9:fltk-1.3.4-1/FL/Fl_Help_View.H **** // This library is free software. Distribution and use rights are outlined in
  10:fltk-1.3.4-1/FL/Fl_Help_View.H **** // the file "COPYING" which should have been included with this file.  If this
  11:fltk-1.3.4-1/FL/Fl_Help_View.H **** // file is missing or damaged, see the license at:
  12:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
  13:fltk-1.3.4-1/FL/Fl_Help_View.H **** //     http://www.fltk.org/COPYING.php
  14:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
  15:fltk-1.3.4-1/FL/Fl_Help_View.H **** // Please report all bugs and problems on the following page:
  16:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
  17:fltk-1.3.4-1/FL/Fl_Help_View.H **** //     http://www.fltk.org/str.php
  18:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
  19:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  20:fltk-1.3.4-1/FL/Fl_Help_View.H **** /* \file
  21:fltk-1.3.4-1/FL/Fl_Help_View.H ****    Fl_Help_View widget . */
  22:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  23:fltk-1.3.4-1/FL/Fl_Help_View.H **** #ifndef Fl_Help_View_H
  24:fltk-1.3.4-1/FL/Fl_Help_View.H **** #  define Fl_Help_View_H
  25:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  26:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
  27:fltk-1.3.4-1/FL/Fl_Help_View.H **** // Include necessary header files...
  28:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
  29:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  30:fltk-1.3.4-1/FL/Fl_Help_View.H **** #  include <stdio.h>
  31:fltk-1.3.4-1/FL/Fl_Help_View.H **** #  include "Fl.H"
  32:fltk-1.3.4-1/FL/Fl_Help_View.H **** #  include "Fl_Group.H"
  33:fltk-1.3.4-1/FL/Fl_Help_View.H **** #  include "Fl_Scrollbar.H"
  34:fltk-1.3.4-1/FL/Fl_Help_View.H **** #  include "fl_draw.H"
  35:fltk-1.3.4-1/FL/Fl_Help_View.H **** #  include "Fl_Shared_Image.H"
  36:fltk-1.3.4-1/FL/Fl_Help_View.H **** #  include "filename.H"
  37:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  38:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  39:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
  40:fltk-1.3.4-1/FL/Fl_Help_View.H **** // Fl_Help_Func type - link callback function for files...
  41:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
  42:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  43:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  44:fltk-1.3.4-1/FL/Fl_Help_View.H **** typedef const char *(Fl_Help_Func)(Fl_Widget *, const char *);
  45:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  46:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  47:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
  48:fltk-1.3.4-1/FL/Fl_Help_View.H **** // Fl_Help_Block structure...
  49:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
  50:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  51:fltk-1.3.4-1/FL/Fl_Help_View.H **** struct Fl_Help_Block {
  52:fltk-1.3.4-1/FL/Fl_Help_View.H ****   const char	*start,		// Start of text
  53:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		*end;		// End of text
  54:fltk-1.3.4-1/FL/Fl_Help_View.H ****   uchar		border;		// Draw border?
  55:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Color	bgcolor;	// Background color
  56:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		x,		// Indentation/starting X coordinate
  57:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		y,		// Starting Y coordinate
  58:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		w,		// Width
  59:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		h;		// Height
  60:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		line[32];	// Left starting position for each line
  61:fltk-1.3.4-1/FL/Fl_Help_View.H **** };
  62:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  63:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
  64:fltk-1.3.4-1/FL/Fl_Help_View.H **** // Fl_Help_Link structure...
  65:fltk-1.3.4-1/FL/Fl_Help_View.H **** //
  66:fltk-1.3.4-1/FL/Fl_Help_View.H **** /** Definition of a link for the html viewer. */
  67:fltk-1.3.4-1/FL/Fl_Help_View.H **** struct Fl_Help_Link {
  68:fltk-1.3.4-1/FL/Fl_Help_View.H ****   char		filename[192],	///< Reference filename
  69:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		name[32];	///< Link target (blank if none)
  70:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		x,		///< X offset of link text
  71:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		y,		///< Y offset of link text
  72:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		w,		///< Width of link text
  73:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		h;		///< Height of link text
  74:fltk-1.3.4-1/FL/Fl_Help_View.H **** };
  75:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  76:fltk-1.3.4-1/FL/Fl_Help_View.H **** /*
  77:fltk-1.3.4-1/FL/Fl_Help_View.H ****  * Fl_Help_View font stack opaque implementation
  78:fltk-1.3.4-1/FL/Fl_Help_View.H ****  */
  79:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  80:fltk-1.3.4-1/FL/Fl_Help_View.H **** /** Fl_Help_View font stack element definition. */
  81:fltk-1.3.4-1/FL/Fl_Help_View.H **** struct FL_EXPORT Fl_Help_Font_Style {
  82:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Font      f;  ///< Font
  83:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Fontsize  s;  ///< Font Size
  84:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Color     c;  ///< Font Color
  85:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void get(Fl_Font &afont, Fl_Fontsize &asize, Fl_Color &acolor) {afont=f; asize=s; acolor=c;} ///<
  86:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void set(Fl_Font afont, Fl_Fontsize asize, Fl_Color acolor) {f=afont; s=asize; c=acolor;} ///< Se
  87:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Help_Font_Style(Fl_Font afont, Fl_Fontsize asize, Fl_Color acolor) {set(afont, asize, acolor);
  88:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Help_Font_Style(){} // For in table use
  89:fltk-1.3.4-1/FL/Fl_Help_View.H **** };
  90:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  91:fltk-1.3.4-1/FL/Fl_Help_View.H **** /** Fl_Help_View font stack definition. */
  92:fltk-1.3.4-1/FL/Fl_Help_View.H **** const size_t MAX_FL_HELP_FS_ELTS = 100;
  93:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
  94:fltk-1.3.4-1/FL/Fl_Help_View.H **** struct FL_EXPORT Fl_Help_Font_Stack {
  95:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** font stack construction, initialize attributes. */
  96:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Help_Font_Stack() {
  97:fltk-1.3.4-1/FL/Fl_Help_View.H ****     nfonts_ = 0;
  98:fltk-1.3.4-1/FL/Fl_Help_View.H ****   }
  99:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 100:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void init(Fl_Font f, Fl_Fontsize s, Fl_Color c) { 
 101:fltk-1.3.4-1/FL/Fl_Help_View.H ****     nfonts_ = 0;
 102:fltk-1.3.4-1/FL/Fl_Help_View.H ****     elts_[nfonts_].set(f, s, c);
 103:fltk-1.3.4-1/FL/Fl_Help_View.H ****     fl_font(f, s); 
 104:fltk-1.3.4-1/FL/Fl_Help_View.H ****     fl_color(c);
 105:fltk-1.3.4-1/FL/Fl_Help_View.H ****   }
 106:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Gets the top (current) element on the stack. */
 107:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void top(Fl_Font &f, Fl_Fontsize &s, Fl_Color &c) { elts_[nfonts_].get(f, s, c); }
 108:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Pushes the font style triplet on the stack, also calls fl_font() & fl_color() adequately */
 109:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void push(Fl_Font f, Fl_Fontsize s, Fl_Color c) { 
 110:fltk-1.3.4-1/FL/Fl_Help_View.H ****     if (nfonts_ <  MAX_FL_HELP_FS_ELTS-1) nfonts_ ++;
 111:fltk-1.3.4-1/FL/Fl_Help_View.H ****     elts_[nfonts_].set(f, s, c);
 112:fltk-1.3.4-1/FL/Fl_Help_View.H ****     fl_font(f, s); fl_color(c); 
 113:fltk-1.3.4-1/FL/Fl_Help_View.H ****   }
 114:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Pops from the stack the font style triplet and calls fl_font() & fl_color() adequately */
 115:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void pop(Fl_Font &f, Fl_Fontsize &s, Fl_Color &c) { 
 116:fltk-1.3.4-1/FL/Fl_Help_View.H ****     if (nfonts_ > 0) nfonts_ --;
 117:fltk-1.3.4-1/FL/Fl_Help_View.H ****     top(f, s, c);
 118:fltk-1.3.4-1/FL/Fl_Help_View.H ****     fl_font(f, s); fl_color(c);
 119:fltk-1.3.4-1/FL/Fl_Help_View.H ****   }
 120:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Gets the current count of font style elements in the stack. */
 121:fltk-1.3.4-1/FL/Fl_Help_View.H ****   size_t count() const {return nfonts_;} // Gets the current number of fonts in the stack
 122:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 123:fltk-1.3.4-1/FL/Fl_Help_View.H **** protected:
 124:fltk-1.3.4-1/FL/Fl_Help_View.H ****   size_t nfonts_;		///< current number of fonts in stack
 125:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Help_Font_Style elts_[100]; ///< font elements
 126:fltk-1.3.4-1/FL/Fl_Help_View.H **** };
 127:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 128:fltk-1.3.4-1/FL/Fl_Help_View.H **** /** Fl_Help_Target structure */
 129:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 130:fltk-1.3.4-1/FL/Fl_Help_View.H **** struct Fl_Help_Target {
 131:fltk-1.3.4-1/FL/Fl_Help_View.H ****   char		name[32];	///< Target name
 132:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		y;		///< Y offset of target
 133:fltk-1.3.4-1/FL/Fl_Help_View.H **** };
 134:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 135:fltk-1.3.4-1/FL/Fl_Help_View.H **** /**
 136:fltk-1.3.4-1/FL/Fl_Help_View.H ****   The Fl_Help_View widget displays HTML text. Most HTML 2.0
 137:fltk-1.3.4-1/FL/Fl_Help_View.H ****   elements are supported, as well as a primitive implementation of tables.
 138:fltk-1.3.4-1/FL/Fl_Help_View.H ****   GIF, JPEG, and PNG images are displayed inline.
 139:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 140:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Supported HTML tags:
 141:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - A: HREF/NAME
 142:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - B
 143:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - BODY: BGCOLOR/TEXT/LINK
 144:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - BR
 145:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - CENTER
 146:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - CODE
 147:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - DD
 148:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - DL
 149:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - DT
 150:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - EM
 151:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - FONT: COLOR/SIZE/FACE=(helvetica/arial/sans/times/serif/symbol/courier)
 152:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - H1/H2/H3/H4/H5/H6
 153:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - HEAD
 154:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - HR
 155:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - I
 156:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - IMG: SRC/WIDTH/HEIGHT/ALT
 157:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - KBD
 158:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - LI
 159:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - OL
 160:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - P
 161:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - PRE
 162:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - STRONG
 163:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - TABLE: TH/TD/TR/BORDER/BGCOLOR/COLSPAN/ALIGN=CENTER|RIGHT|LEFT
 164:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - TITLE
 165:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - TT
 166:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - U
 167:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - UL
 168:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - VAR
 169:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 170:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Supported color names:
 171:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - black,red,green,yellow,blue,magenta,fuchsia,cyan,aqua,white,gray,grey,lime,maroon,navy,olive
 172:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 173:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Supported urls:
 174:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - Internal: file:
 175:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - External: http: ftp: https: ipp: mailto: news:
 176:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 177:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Quoted char names:
 178:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - Aacute aacute Acirc acirc acute AElig aelig Agrave agrave amp Aring aring Atilde atilde Auml
 179:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - brvbar bull
 180:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - Ccedil ccedil cedil cent copy curren
 181:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - deg divide
 182:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - Eacute eacute Ecirc ecirc Egrave egrave ETH eth Euml euml euro
 183:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - frac12 frac14 frac34
 184:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - gt
 185:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - Iacute iacute Icirc icirc iexcl Igrave igrave iquest Iuml iuml
 186:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - laquo lt
 187:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - macr micro middot
 188:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - nbsp not Ntilde ntilde
 189:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - Oacute oacute Ocirc ocirc Ograve ograve ordf ordm Oslash oslash Otilde otilde Ouml ouml
 190:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - para permil plusmn pound
 191:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - quot
 192:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - raquo reg
 193:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - sect shy sup1 sup2 sup3 szlig
 194:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - THORN thorn times trade
 195:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - Uacute uacute Ucirc ucirc Ugrave ugrave uml Uuml uuml
 196:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - Yacute yacute
 197:fltk-1.3.4-1/FL/Fl_Help_View.H ****      - yen Yuml yuml
 198:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 199:fltk-1.3.4-1/FL/Fl_Help_View.H **** */
 200:fltk-1.3.4-1/FL/Fl_Help_View.H **** class FL_EXPORT Fl_Help_View : public Fl_Group {	// Help viewer widget
 201:fltk-1.3.4-1/FL/Fl_Help_View.H ****   
 202:fltk-1.3.4-1/FL/Fl_Help_View.H ****   enum { RIGHT = -1, CENTER, LEFT };	///< Alignments
 203:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 204:fltk-1.3.4-1/FL/Fl_Help_View.H ****   char		title_[1024];		///< Title string
 205:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Color	defcolor_,		///< Default text color
 206:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		bgcolor_,		///< Background color
 207:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		textcolor_,		///< Text color
 208:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		linkcolor_;		///< Link color
 209:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Font       textfont_;		///< Default font for text
 210:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Fontsize  textsize_;		///< Default font size
 211:fltk-1.3.4-1/FL/Fl_Help_View.H ****   const char	*value_;		///< HTML text value
 212:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Help_Font_Stack fstack_;		///< font stack management
 213:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		nblocks_,		///< Number of blocks/paragraphs
 214:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		ablocks_;		///< Allocated blocks
 215:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Help_Block	*blocks_;		///< Blocks
 216:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 217:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Help_Func	*link_;			///< Link transform function
 218:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 219:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		nlinks_,		///< Number of links
 220:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		alinks_;		///< Allocated links
 221:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Help_Link	*links_;		///< Links
 222:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 223:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		ntargets_,		///< Number of targets
 224:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		atargets_;		///< Allocated targets
 225:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Help_Target *targets_;		///< Targets
 226:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 227:fltk-1.3.4-1/FL/Fl_Help_View.H ****   char		directory_[FL_PATH_MAX];///< Directory for current file
 228:fltk-1.3.4-1/FL/Fl_Help_View.H ****   char		filename_[FL_PATH_MAX];	///< Current filename
 229:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		topline_,		///< Top line in document
 230:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		leftline_,		///< Lefthand position
 231:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		size_,			///< Total document length
 232:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		hsize_,			///< Maximum document width
 233:fltk-1.3.4-1/FL/Fl_Help_View.H ****   		scrollbar_size_;	///< Size for both scrollbars
 234:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Scrollbar	scrollbar_,		///< Vertical scrollbar for document
 235:fltk-1.3.4-1/FL/Fl_Help_View.H **** 		hscrollbar_;		///< Horizontal scrollbar
 236:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 237:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static int    selection_first;
 238:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static int    selection_last;
 239:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static int    selection_push_first;
 240:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static int    selection_push_last;
 241:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static int    selection_drag_first;
 242:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static int    selection_drag_last;
 243:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static int    selected;
 244:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static int    draw_mode;
 245:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static int    mouse_x;
 246:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static int    mouse_y;
 247:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static int    current_pos;
 248:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static Fl_Help_View *current_view;
 249:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static Fl_Color hv_selection_color;
 250:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static Fl_Color hv_selection_text_color;
 251:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 252:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 253:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void initfont(Fl_Font &f, Fl_Fontsize &s, Fl_Color &c) { f = textfont_; s = textsize_; c = textco
 254:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void pushfont(Fl_Font f, Fl_Fontsize s) {fstack_.push(f, s, textcolor_);}
 255:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void pushfont(Fl_Font f, Fl_Fontsize s, Fl_Color c) {fstack_.push(f, s, c);}
 256:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void popfont(Fl_Font &f, Fl_Fontsize &s, Fl_Color &c) {fstack_.pop(f, s, c);}
 257:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 258:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Help_Block	*add_block(const char *s, int xx, int yy, int ww, int hh, uchar border = 0);
 259:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void		add_link(const char *n, int xx, int yy, int ww, int hh);
 260:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void		add_target(const char *n, int yy);
 261:fltk-1.3.4-1/FL/Fl_Help_View.H ****   static int	compare_targets(const Fl_Help_Target *t0, const Fl_Help_Target *t1);
 262:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		do_align(Fl_Help_Block *block, int line, int xx, int a, int &l);
 263:fltk-1.3.4-1/FL/Fl_Help_View.H **** #if FLTK_ABI_VERSION >= 10303
 264:fltk-1.3.4-1/FL/Fl_Help_View.H **** protected:
 265:fltk-1.3.4-1/FL/Fl_Help_View.H **** #endif
 266:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void		draw();
 267:fltk-1.3.4-1/FL/Fl_Help_View.H **** #if FLTK_ABI_VERSION >= 10303
 268:fltk-1.3.4-1/FL/Fl_Help_View.H **** private:
 269:fltk-1.3.4-1/FL/Fl_Help_View.H **** #endif
 270:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void		format();
 271:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void		format_table(int *table_width, int *columns, const char *table);
 272:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void		free_data();
 273:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		get_align(const char *p, int a);
 274:fltk-1.3.4-1/FL/Fl_Help_View.H ****   const char	*get_attr(const char *p, const char *n, char *buf, int bufsize);
 275:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Color	get_color(const char *n, Fl_Color c);
 276:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Shared_Image *get_image(const char *name, int W, int H);
 277:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		get_length(const char *l);
 278:fltk-1.3.4-1/FL/Fl_Help_View.H **** #if FLTK_ABI_VERSION >= 10303
 279:fltk-1.3.4-1/FL/Fl_Help_View.H **** public:
 280:fltk-1.3.4-1/FL/Fl_Help_View.H **** #endif
 281:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		handle(int);
 282:fltk-1.3.4-1/FL/Fl_Help_View.H **** #if FLTK_ABI_VERSION >= 10303
 283:fltk-1.3.4-1/FL/Fl_Help_View.H **** private:
 284:fltk-1.3.4-1/FL/Fl_Help_View.H **** #endif
 285:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 286:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void          hv_draw(const char *t, int x, int y, int entity_extra_length = 0);
 287:fltk-1.3.4-1/FL/Fl_Help_View.H ****   char          begin_selection();
 288:fltk-1.3.4-1/FL/Fl_Help_View.H ****   char          extend_selection();
 289:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void          end_selection(int c=0);
 290:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void          clear_global_selection();
 291:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Help_Link  *find_link(int, int);
 292:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void          follow_link(Fl_Help_Link*);
 293:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 294:fltk-1.3.4-1/FL/Fl_Help_View.H **** public:
 295:fltk-1.3.4-1/FL/Fl_Help_View.H **** 
 296:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Help_View(int xx, int yy, int ww, int hh, const char *l = 0);
 297:fltk-1.3.4-1/FL/Fl_Help_View.H ****   ~Fl_Help_View();
 298:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Returns the current directory for the text in the buffer. */
 299:fltk-1.3.4-1/FL/Fl_Help_View.H ****   const char	*directory() const { if (directory_[0]) return (directory_);
 300:fltk-1.3.4-1/FL/Fl_Help_View.H ****   					else return ((const char *)0); }
 301:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Returns the current filename for the text in the buffer. */
 302:fltk-1.3.4-1/FL/Fl_Help_View.H ****   const char	*filename() const { if (filename_[0]) return (filename_);
  67              		.loc 2 302 0
  68 003b BF000000 		movl	$0, %edi
  68      00
  69              	.LBE216:
  70              	.LBE215:
  71              		.loc 1 41 0
  72 0040 448B6483 		movl	8(%rbx,%rax,4), %r12d
  72      08
  73              	.LVL5:
  74              		.loc 1 43 0
  75 0045 48C1E00B 		salq	$11, %rax
  76              	.LBB220:
  77              	.LBB217:
  78              		.loc 2 302 0
  79 0049 80BDB011 		cmpb	$0, 4528(%rbp)
  79      000000
  80              	.LBE217:
  81              	.LBE220:
  82              		.loc 1 43 0
  83 0050 4C8DAC03 		leaq	408(%rbx,%rax), %r13
  83      98010000 
  84              	.LBB221:
  85              	.LBB218:
  86              		.loc 2 302 0
  87 0058 488D85B0 		leaq	4528(%rbp), %rax
  87      110000
  88              	.LBE218:
  89              	.LBE221:
  90              		.loc 1 43 0
  91 005f 4C89EE   		movq	%r13, %rsi
  92              	.LBB222:
  93              	.LBB219:
  94              		.loc 2 302 0
  95 0062 480F45F8 		cmovne	%rax, %rdi
  96              	.LVL6:
  97              	.LBE219:
  98              	.LBE222:
  99              		.loc 1 43 0
 100 0066 E8000000 		call	strcmp
 100      00
 101              	.LVL7:
 102 006b 85C0     		testl	%eax, %eax
 103 006d 7412     		je	.L5
 104              		.loc 1 44 0
 105 006f 4889EF   		movq	%rbp, %rdi
 106 0072 4C89EE   		movq	%r13, %rsi
 107 0075 E8000000 		call	_ZN12Fl_Help_View4loadEPKc
 107      00
 108              	.LVL8:
 109 007a 488BABD0 		movq	205264(%rbx), %rbp
 109      210300
 110              	.L5:
 111              	.LBE214:
 112              	.LBE213:
 113              		.loc 1 50 0
 114 0081 4883C408 		addq	$8, %rsp
 115              		.cfi_remember_state
 116              		.cfi_def_cfa_offset 40
 117              	.LBB225:
 118              	.LBB223:
 119              		.loc 1 46 0
 120 0085 4489E6   		movl	%r12d, %esi
 121 0088 4889EF   		movq	%rbp, %rdi
 122              	.LBE223:
 123              	.LBE225:
 124              		.loc 1 50 0
 125 008b 5B       		popq	%rbx
 126              		.cfi_def_cfa_offset 32
 127              	.LVL9:
 128 008c 5D       		popq	%rbp
 129              		.cfi_def_cfa_offset 24
 130 008d 415C     		popq	%r12
 131              		.cfi_def_cfa_offset 16
 132              	.LVL10:
 133 008f 415D     		popq	%r13
 134              		.cfi_def_cfa_offset 8
 135              	.LBB226:
 136              	.LBB224:
 137              		.loc 1 46 0
 138 0091 E9000000 		jmp	_ZN12Fl_Help_View7toplineEi
 138      00
 139              	.LVL11:
 140 0096 662E0F1F 		.p2align 4,,10
 140      84000000 
 140      0000
 141              		.p2align 3
 142              	.L12:
 143              		.cfi_restore_state
 144              		.loc 1 37 0
 145 00a0 488BBBA8 		movq	205224(%rbx), %rdi
 145      210300
 146              	.LVL12:
 147 00a7 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 147      00
 148              	.LVL13:
 149 00ac E974FFFF 		jmp	.L3
 149      FF
 150              	.LBE224:
 151              	.LBE226:
 152              		.cfi_endproc
 153              	.LFE597:
 155              		.section	.text.unlikely._ZN14Fl_Help_Dialog8cb_back_EP9Fl_ButtonPv
 156              	.LCOLDE0:
 157              		.section	.text._ZN14Fl_Help_Dialog8cb_back_EP9Fl_ButtonPv
 158              	.LHOTE0:
 159              		.section	.text.unlikely._ZN14Fl_Help_Dialog11cb_forward_EP9Fl_ButtonPv,"ax",@progbits
 160              		.align 2
 161              	.LCOLDB1:
 162              		.section	.text._ZN14Fl_Help_Dialog11cb_forward_EP9Fl_ButtonPv,"ax",@progbits
 163              	.LHOTB1:
 164              		.align 2
 165              		.p2align 4,,15
 166              		.globl	_ZN14Fl_Help_Dialog11cb_forward_EP9Fl_ButtonPv
 168              	_ZN14Fl_Help_Dialog11cb_forward_EP9Fl_ButtonPv:
 169              	.LFB599:
 170              		.loc 1 68 0
 171              		.cfi_startproc
 172              	.LVL14:
 173 0000 4155     		pushq	%r13
 174              		.cfi_def_cfa_offset 16
 175              		.cfi_offset 13, -16
 176              	.LVL15:
 177 0002 4154     		pushq	%r12
 178              		.cfi_def_cfa_offset 24
 179              		.cfi_offset 12, -24
 180 0004 55       		pushq	%rbp
 181              		.cfi_def_cfa_offset 32
 182              		.cfi_offset 6, -32
 183 0005 53       		pushq	%rbx
 184              		.cfi_def_cfa_offset 40
 185              		.cfi_offset 3, -40
 186 0006 4883EC08 		subq	$8, %rsp
 187              		.cfi_def_cfa_offset 48
 188 000a 488B4708 		movq	8(%rdi), %rax
 189 000e 488B4008 		movq	8(%rax), %rax
 190 0012 488B5818 		movq	24(%rax), %rbx
 191              	.LVL16:
 192              	.LBB231:
 193              	.LBB232:
 194              		.loc 1 53 0
 195 0016 8B03     		movl	(%rbx), %eax
 196 0018 8B5304   		movl	4(%rbx), %edx
 197 001b 39D0     		cmpl	%edx, %eax
 198 001d 0F8C8500 		jl	.L14
 198      0000
 199              	.L16:
 200              		.loc 1 57 0
 201 0023 488BBBB0 		movq	205232(%rbx), %rdi
 201      210300
 202              	.LVL17:
 203 002a E8000000 		call	_ZN9Fl_Widget10deactivateEv
 203      00
 204              	.LVL18:
 205              	.L15:
 206              		.loc 1 59 0
 207 002f 488BBBA8 		movq	205224(%rbx), %rdi
 207      210300
 208 0036 E8000000 		call	_ZN9Fl_Widget8activateEv
 208      00
 209              	.LVL19:
 210              		.loc 1 63 0
 211 003b 486303   		movslq	(%rbx), %rax
 212              		.loc 1 61 0
 213 003e 488BABD0 		movq	205264(%rbx), %rbp
 213      210300
 214              	.LBB233:
 215              	.LBB234:
 216              		.loc 2 302 0
 217 0045 BF000000 		movl	$0, %edi
 217      00
 218 004a 448BA5B0 		movl	6576(%rbp), %r12d
 218      190000
 219              	.LVL20:
 220              	.LBE234:
 221              	.LBE233:
 222              		.loc 1 63 0
 223 0051 48C1E00B 		salq	$11, %rax
 224              	.LBB238:
 225              	.LBB235:
 226              		.loc 2 302 0
 227 0055 80BDB011 		cmpb	$0, 4528(%rbp)
 227      000000
 228              	.LBE235:
 229              	.LBE238:
 230              		.loc 1 63 0
 231 005c 4C8DAC03 		leaq	408(%rbx,%rax), %r13
 231      98010000 
 232              	.LVL21:
 233              	.LBB239:
 234              	.LBB236:
 235              		.loc 2 302 0
 236 0064 488D85B0 		leaq	4528(%rbp), %rax
 236      110000
 237              	.LBE236:
 238              	.LBE239:
 239              		.loc 1 63 0
 240 006b 4C89EE   		movq	%r13, %rsi
 241              	.LBB240:
 242              	.LBB237:
 243              		.loc 2 302 0
 244 006e 480F45F8 		cmovne	%rax, %rdi
 245              	.LVL22:
 246              	.LBE237:
 247              	.LBE240:
 248              		.loc 1 63 0
 249 0072 E8000000 		call	strcmp
 249      00
 250              	.LVL23:
 251 0077 85C0     		testl	%eax, %eax
 252 0079 7412     		je	.L18
 253              		.loc 1 64 0
 254 007b 4889EF   		movq	%rbp, %rdi
 255 007e 4C89EE   		movq	%r13, %rsi
 256 0081 E8000000 		call	_ZN12Fl_Help_View4loadEPKc
 256      00
 257              	.LVL24:
 258 0086 488BABD0 		movq	205264(%rbx), %rbp
 258      210300
 259              	.LVL25:
 260              	.L18:
 261              	.LBE232:
 262              	.LBE231:
 263              		.loc 1 70 0
 264 008d 4883C408 		addq	$8, %rsp
 265              		.cfi_remember_state
 266              		.cfi_def_cfa_offset 40
 267              	.LBB243:
 268              	.LBB241:
 269              		.loc 1 66 0
 270 0091 4489E6   		movl	%r12d, %esi
 271 0094 4889EF   		movq	%rbp, %rdi
 272              	.LBE241:
 273              	.LBE243:
 274              		.loc 1 70 0
 275 0097 5B       		popq	%rbx
 276              		.cfi_def_cfa_offset 32
 277              	.LVL26:
 278 0098 5D       		popq	%rbp
 279              		.cfi_def_cfa_offset 24
 280 0099 415C     		popq	%r12
 281              		.cfi_def_cfa_offset 16
 282 009b 415D     		popq	%r13
 283              		.cfi_def_cfa_offset 8
 284              	.LBB244:
 285              	.LBB242:
 286              		.loc 1 66 0
 287 009d E9000000 		jmp	_ZN12Fl_Help_View7toplineEi
 287      00
 288              	.LVL27:
 289              		.p2align 4,,10
 290 00a2 660F1F44 		.p2align 3
 290      0000
 291              	.L14:
 292              		.cfi_restore_state
 293              		.loc 1 54 0
 294 00a8 83C001   		addl	$1, %eax
 295              		.loc 1 56 0
 296 00ab 39C2     		cmpl	%eax, %edx
 297              		.loc 1 54 0
 298 00ad 8903     		movl	%eax, (%rbx)
 299              		.loc 1 56 0
 300 00af 0F8F7AFF 		jg	.L15
 300      FFFF
 301 00b5 E969FFFF 		jmp	.L16
 301      FF
 302              	.LBE242:
 303              	.LBE244:
 304              		.cfi_endproc
 305              	.LFE599:
 307              		.section	.text.unlikely._ZN14Fl_Help_Dialog11cb_forward_EP9Fl_ButtonPv
 308              	.LCOLDE1:
 309              		.section	.text._ZN14Fl_Help_Dialog11cb_forward_EP9Fl_ButtonPv
 310              	.LHOTE1:
 311              		.section	.text.unlikely._ZN14Fl_Help_Dialog8cb_find_EP8Fl_InputPv,"ax",@progbits
 312              		.align 2
 313              	.LCOLDB2:
 314              		.section	.text._ZN14Fl_Help_Dialog8cb_find_EP8Fl_InputPv,"ax",@progbits
 315              	.LHOTB2:
 316              		.align 2
 317              		.p2align 4,,15
 318              		.globl	_ZN14Fl_Help_Dialog8cb_find_EP8Fl_InputPv
 320              	_ZN14Fl_Help_Dialog8cb_find_EP8Fl_InputPv:
 321              	.LFB605:
 322              		.loc 1 99 0
 323              		.cfi_startproc
 324              	.LVL28:
 325 0000 53       		pushq	%rbx
 326              		.cfi_def_cfa_offset 16
 327              		.cfi_offset 3, -16
 328              	.LVL29:
 329 0001 488B4708 		movq	8(%rdi), %rax
 330 0005 488B4008 		movq	8(%rax), %rax
 331 0009 488B4008 		movq	8(%rax), %rax
 332 000d 488B5818 		movq	24(%rax), %rbx
 333              	.LVL30:
 334 0011 488B83C8 		movq	205256(%rbx), %rax
 334      210300
 335              	.LBB245:
 336              	.LBB246:
 337              		.loc 1 97 0
 338 0018 8B939821 		movl	205208(%rbx), %edx
 338      0300
 339 001e 488BBBD0 		movq	205264(%rbx), %rdi
 339      210300
 340              	.LVL31:
 341 0025 488B7078 		movq	120(%rax), %rsi
 342              	.LVL32:
 343 0029 E8000000 		call	_ZN12Fl_Help_View4findEPKci
 343      00
 344              	.LVL33:
 345 002e 89839821 		movl	%eax, 205208(%rbx)
 345      0300
 346              	.LBE246:
 347              	.LBE245:
 348              		.loc 1 101 0
 349 0034 5B       		popq	%rbx
 350              		.cfi_def_cfa_offset 8
 351 0035 C3       		ret
 352              		.cfi_endproc
 353              	.LFE605:
 355              		.section	.text.unlikely._ZN14Fl_Help_Dialog8cb_find_EP8Fl_InputPv
 356              	.LCOLDE2:
 357              		.section	.text._ZN14Fl_Help_Dialog8cb_find_EP8Fl_InputPv
 358              	.LHOTE2:
 359              		.section	.text.unlikely._ZN14Fl_Help_Dialog11cb_smaller_EP9Fl_ButtonPv,"ax",@progbits
 360              		.align 2
 361              	.LCOLDB3:
 362              		.section	.text._ZN14Fl_Help_Dialog11cb_smaller_EP9Fl_ButtonPv,"ax",@progbits
 363              	.LHOTB3:
 364              		.align 2
 365              		.p2align 4,,15
 366              		.globl	_ZN14Fl_Help_Dialog11cb_smaller_EP9Fl_ButtonPv
 368              	_ZN14Fl_Help_Dialog11cb_smaller_EP9Fl_ButtonPv:
 369              	.LFB601:
 370              		.loc 1 80 0
 371              		.cfi_startproc
 372              	.LVL34:
 373 0000 53       		pushq	%rbx
 374              		.cfi_def_cfa_offset 16
 375              		.cfi_offset 3, -16
 376              	.LVL35:
 377 0001 488B4708 		movq	8(%rdi), %rax
 378 0005 488B4008 		movq	8(%rax), %rax
 379 0009 488B5818 		movq	24(%rax), %rbx
 380              	.LVL36:
 381              	.LBB251:
 382              	.LBB252:
 383              		.loc 1 73 0
 384 000d 488BBBD0 		movq	205264(%rbx), %rdi
 384      210300
 385              	.LVL37:
 386 0014 8B87B404 		movl	1204(%rdi), %eax
 386      0000
 387              	.LVL38:
 388 001a 83F808   		cmpl	$8, %eax
 389 001d 7F21     		jg	.L27
 390              	.LVL39:
 391              	.L29:
 392              		.loc 1 77 0
 393 001f 488BBBB8 		movq	205240(%rbx), %rdi
 393      210300
 394 0026 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 394      00
 395              	.LVL40:
 396              		.loc 1 78 0
 397 002b 488BBBC0 		movq	205248(%rbx), %rdi
 397      210300
 398              	.LBE252:
 399              	.LBE251:
 400              		.loc 1 82 0
 401 0032 5B       		popq	%rbx
 402              		.cfi_remember_state
 403              		.cfi_def_cfa_offset 8
 404              	.LVL41:
 405              	.LBB257:
 406              	.LBB255:
 407              		.loc 1 78 0
 408 0033 E9000000 		jmp	_ZN9Fl_Widget8activateEv
 408      00
 409              	.LVL42:
 410 0038 0F1F8400 		.p2align 4,,10
 410      00000000 
 411              		.p2align 3
 412              	.L27:
 413              		.cfi_restore_state
 414              	.LBB253:
 415              	.LBB254:
 303:fltk-1.3.4-1/FL/Fl_Help_View.H ****   					else return ((const char *)0); }
 304:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		find(const char *s, int p = 0);
 305:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /**
 306:fltk-1.3.4-1/FL/Fl_Help_View.H ****     This method assigns a callback function to use when a link is
 307:fltk-1.3.4-1/FL/Fl_Help_View.H ****     followed or a file is loaded (via Fl_Help_View::load()) that
 308:fltk-1.3.4-1/FL/Fl_Help_View.H ****     requires a different file or path.
 309:fltk-1.3.4-1/FL/Fl_Help_View.H ****     
 310:fltk-1.3.4-1/FL/Fl_Help_View.H ****     The callback function receives a pointer to the Fl_Help_View
 311:fltk-1.3.4-1/FL/Fl_Help_View.H ****     widget and the URI or full pathname for the file in question.
 312:fltk-1.3.4-1/FL/Fl_Help_View.H ****     It must return a pathname that can be opened as a local file or NULL:
 313:fltk-1.3.4-1/FL/Fl_Help_View.H ****     
 314:fltk-1.3.4-1/FL/Fl_Help_View.H ****     \code
 315:fltk-1.3.4-1/FL/Fl_Help_View.H ****     const char *fn(Fl_Widget *w, const char *uri);
 316:fltk-1.3.4-1/FL/Fl_Help_View.H ****     \endcode
 317:fltk-1.3.4-1/FL/Fl_Help_View.H ****     
 318:fltk-1.3.4-1/FL/Fl_Help_View.H ****     The link function can be used to retrieve remote or virtual
 319:fltk-1.3.4-1/FL/Fl_Help_View.H ****     documents, returning a temporary file that contains the actual
 320:fltk-1.3.4-1/FL/Fl_Help_View.H ****     data. If the link function returns NULL, the value of
 321:fltk-1.3.4-1/FL/Fl_Help_View.H ****     the Fl_Help_View widget will remain unchanged.
 322:fltk-1.3.4-1/FL/Fl_Help_View.H ****     
 323:fltk-1.3.4-1/FL/Fl_Help_View.H ****     If the link callback cannot handle the URI scheme, it should
 324:fltk-1.3.4-1/FL/Fl_Help_View.H ****     return the uri value unchanged or set the value() of the widget
 325:fltk-1.3.4-1/FL/Fl_Help_View.H ****     before returning NULL.
 326:fltk-1.3.4-1/FL/Fl_Help_View.H ****   */
 327:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void		link(Fl_Help_Func *fn) { link_ = fn; }
 328:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		load(const char *f);
 329:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void		resize(int,int,int,int);
 330:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Gets the size of the help view. */
 331:fltk-1.3.4-1/FL/Fl_Help_View.H ****   int		size() const { return (size_); }
 332:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void		size(int W, int H) { Fl_Widget::size(W, H); }
 333:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Sets the default text color. */
 334:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void		textcolor(Fl_Color c) { if (textcolor_ == defcolor_) textcolor_ = c; defcolor_ = c; }
 335:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Returns the current default text color. */
 336:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Color	textcolor() const { return (defcolor_); }
 337:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Sets the default text font. */
 338:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void		textfont(Fl_Font f) { textfont_ = f; format(); }
 339:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Returns the current default text font. */
 340:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Font       textfont() const { return (textfont_); }
 341:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Sets the default text size. */
 342:fltk-1.3.4-1/FL/Fl_Help_View.H ****   void		textsize(Fl_Fontsize s) { textsize_ = s; format(); }
 416              		.loc 2 342 0
 417 0040 83E802   		subl	$2, %eax
 418              	.LVL43:
 419 0043 8987B404 		movl	%eax, 1204(%rdi)
 419      0000
 420 0049 E8000000 		call	_ZN12Fl_Help_View6formatEv
 420      00
 421              	.LVL44:
 422 004e 488B83D0 		movq	205264(%rbx), %rax
 422      210300
 423              	.LBE254:
 424              	.LBE253:
 425              		.loc 1 76 0
 426 0055 83B8B404 		cmpl	$8, 1204(%rax)
 426      000008
 427 005c 7EC1     		jle	.L29
 428              		.loc 1 78 0
 429 005e 488BBBC0 		movq	205248(%rbx), %rdi
 429      210300
 430              	.LBE255:
 431              	.LBE257:
 432              		.loc 1 82 0
 433 0065 5B       		popq	%rbx
 434              		.cfi_def_cfa_offset 8
 435              	.LVL45:
 436              	.LBB258:
 437              	.LBB256:
 438              		.loc 1 78 0
 439 0066 E9000000 		jmp	_ZN9Fl_Widget8activateEv
 439      00
 440              	.LVL46:
 441              	.LBE256:
 442              	.LBE258:
 443              		.cfi_endproc
 444              	.LFE601:
 446              		.section	.text.unlikely._ZN14Fl_Help_Dialog11cb_smaller_EP9Fl_ButtonPv
 447              	.LCOLDE3:
 448              		.section	.text._ZN14Fl_Help_Dialog11cb_smaller_EP9Fl_ButtonPv
 449              	.LHOTE3:
 450              		.section	.text.unlikely._ZN14Fl_Help_Dialog10cb_larger_EP9Fl_ButtonPv,"ax",@progbits
 451              		.align 2
 452              	.LCOLDB4:
 453              		.section	.text._ZN14Fl_Help_Dialog10cb_larger_EP9Fl_ButtonPv,"ax",@progbits
 454              	.LHOTB4:
 455              		.align 2
 456              		.p2align 4,,15
 457              		.globl	_ZN14Fl_Help_Dialog10cb_larger_EP9Fl_ButtonPv
 459              	_ZN14Fl_Help_Dialog10cb_larger_EP9Fl_ButtonPv:
 460              	.LFB603:
 461              		.loc 1 92 0
 462              		.cfi_startproc
 463              	.LVL47:
 464 0000 53       		pushq	%rbx
 465              		.cfi_def_cfa_offset 16
 466              		.cfi_offset 3, -16
 467              	.LVL48:
 468 0001 488B4708 		movq	8(%rdi), %rax
 469 0005 488B4008 		movq	8(%rax), %rax
 470 0009 488B5818 		movq	24(%rax), %rbx
 471              	.LVL49:
 472              	.LBB263:
 473              	.LBB264:
 474              		.loc 1 85 0
 475 000d 488BBBD0 		movq	205264(%rbx), %rdi
 475      210300
 476              	.LVL50:
 477 0014 8B87B404 		movl	1204(%rdi), %eax
 477      0000
 478              	.LVL51:
 479 001a 83F811   		cmpl	$17, %eax
 480 001d 7E21     		jle	.L32
 481              	.LVL52:
 482              	.L34:
 483              		.loc 1 89 0
 484 001f 488BBBC0 		movq	205248(%rbx), %rdi
 484      210300
 485 0026 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 485      00
 486              	.LVL53:
 487              		.loc 1 90 0
 488 002b 488BBBB8 		movq	205240(%rbx), %rdi
 488      210300
 489              	.LBE264:
 490              	.LBE263:
 491              		.loc 1 94 0
 492 0032 5B       		popq	%rbx
 493              		.cfi_remember_state
 494              		.cfi_def_cfa_offset 8
 495              	.LVL54:
 496              	.LBB269:
 497              	.LBB267:
 498              		.loc 1 90 0
 499 0033 E9000000 		jmp	_ZN9Fl_Widget8activateEv
 499      00
 500              	.LVL55:
 501 0038 0F1F8400 		.p2align 4,,10
 501      00000000 
 502              		.p2align 3
 503              	.L32:
 504              		.cfi_restore_state
 505              	.LBB265:
 506              	.LBB266:
 507              		.loc 2 342 0
 508 0040 83C002   		addl	$2, %eax
 509              	.LVL56:
 510 0043 8987B404 		movl	%eax, 1204(%rdi)
 510      0000
 511 0049 E8000000 		call	_ZN12Fl_Help_View6formatEv
 511      00
 512              	.LVL57:
 513 004e 488B83D0 		movq	205264(%rbx), %rax
 513      210300
 514              	.LBE266:
 515              	.LBE265:
 516              		.loc 1 88 0
 517 0055 83B8B404 		cmpl	$17, 1204(%rax)
 517      000011
 518 005c 7FC1     		jg	.L34
 519              		.loc 1 90 0
 520 005e 488BBBB8 		movq	205240(%rbx), %rdi
 520      210300
 521              	.LBE267:
 522              	.LBE269:
 523              		.loc 1 94 0
 524 0065 5B       		popq	%rbx
 525              		.cfi_def_cfa_offset 8
 526              	.LVL58:
 527              	.LBB270:
 528              	.LBB268:
 529              		.loc 1 90 0
 530 0066 E9000000 		jmp	_ZN9Fl_Widget8activateEv
 530      00
 531              	.LVL59:
 532              	.LBE268:
 533              	.LBE270:
 534              		.cfi_endproc
 535              	.LFE603:
 537              		.section	.text.unlikely._ZN14Fl_Help_Dialog10cb_larger_EP9Fl_ButtonPv
 538              	.LCOLDE4:
 539              		.section	.text._ZN14Fl_Help_Dialog10cb_larger_EP9Fl_ButtonPv
 540              	.LHOTE4:
 541              		.section	.text.unlikely._ZN14Fl_Help_Dialog8cb_view_EP12Fl_Help_ViewPv,"ax",@progbits
 542              		.align 2
 543              	.LCOLDB5:
 544              		.section	.text._ZN14Fl_Help_Dialog8cb_view_EP12Fl_Help_ViewPv,"ax",@progbits
 545              	.LHOTB5:
 546              		.align 2
 547              		.p2align 4,,15
 548              		.globl	_ZN14Fl_Help_Dialog8cb_view_EP12Fl_Help_ViewPv
 550              	_ZN14Fl_Help_Dialog8cb_view_EP12Fl_Help_ViewPv:
 551              	.LFB607:
 552              		.loc 1 143 0
 553              		.cfi_startproc
 554              	.LVL60:
 555 0000 4154     		pushq	%r12
 556              		.cfi_def_cfa_offset 16
 557              		.cfi_offset 12, -16
 558 0002 55       		pushq	%rbp
 559              		.cfi_def_cfa_offset 24
 560              		.cfi_offset 6, -24
 561 0003 53       		pushq	%rbx
 562              		.cfi_def_cfa_offset 32
 563              		.cfi_offset 3, -32
 564 0004 488B4708 		movq	8(%rdi), %rax
 565 0008 488B5818 		movq	24(%rax), %rbx
 566              	.LVL61:
 567              	.LBB307:
 568              	.LBB308:
 569              		.loc 1 104 0
 570 000c 488BABD0 		movq	205264(%rbx), %rbp
 570      210300
 571              	.LVL62:
 572              	.LBB309:
 573              	.LBB310:
 302:fltk-1.3.4-1/FL/Fl_Help_View.H ****   					else return ((const char *)0); }
 574              		.loc 2 302 0
 575 0013 80BDB011 		cmpb	$0, 4528(%rbp)
 575      000000
 576 001a 7534     		jne	.L37
 577              	.LVL63:
 578              	.LBE310:
 579              	.LBE309:
 580              		.loc 1 136 0
 581 001c C7030000 		movl	$0, (%rbx)
 581      0000
 582              		.loc 1 137 0
 583 0022 C6839801 		movb	$0, 408(%rbx)
 583      000000
 584 0029 8B85B019 		movl	6576(%rbp), %eax
 584      0000
 585              	.LVL64:
 586              		.loc 1 139 0
 587 002f 488BBBA8 		movq	205224(%rbx), %rdi
 587      210300
 588              	.LVL65:
 589              		.loc 1 138 0
 590 0036 894308   		movl	%eax, 8(%rbx)
 591              		.loc 1 139 0
 592 0039 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 592      00
 593              	.LVL66:
 594              		.loc 1 140 0
 595 003e 488BBBB0 		movq	205232(%rbx), %rdi
 595      210300
 596              	.LBE308:
 597              	.LBE307:
 598              		.loc 1 145 0
 599 0045 5B       		popq	%rbx
 600              		.cfi_remember_state
 601              		.cfi_def_cfa_offset 24
 602              	.LVL67:
 603 0046 5D       		popq	%rbp
 604              		.cfi_def_cfa_offset 16
 605              	.LVL68:
 606 0047 415C     		popq	%r12
 607              		.cfi_def_cfa_offset 8
 608              	.LBB332:
 609              	.LBB329:
 610              		.loc 1 140 0
 611 0049 E9000000 		jmp	_ZN9Fl_Widget10deactivateEv
 611      00
 612              	.LVL69:
 613 004e 6690     		.p2align 4,,10
 614              		.p2align 3
 615              	.L37:
 616              		.cfi_restore_state
 617              		.loc 1 106 0
 618 0050 F6456080 		testb	$-128, 96(%rbp)
 619 0054 0F849E00 		je	.L52
 619      0000
 620              		.loc 1 108 0
 621 005a 448B23   		movl	(%rbx), %r12d
 622 005d 418D4424 		leal	1(%r12), %eax
 622      01
 623              		.loc 1 110 0
 624 0062 83F863   		cmpl	$99, %eax
 625              		.loc 1 108 0
 626 0065 8903     		movl	%eax, (%rbx)
 627              		.loc 1 110 0
 628 0067 0F8FCB00 		jg	.L53
 628      0000
 629              	.LVL70:
 630              	.L39:
 631              		.loc 1 117 0
 632 006d 894304   		movl	%eax, 4(%rbx)
 633              	.LVL71:
 634              	.LBB311:
 635              	.LBB312:
 302:fltk-1.3.4-1/FL/Fl_Help_View.H ****   					else return ((const char *)0); }
 636              		.loc 2 302 0
 637 0070 80BDB011 		cmpb	$0, 4528(%rbp)
 637      000000
 638 0077 488D95B0 		leaq	4528(%rbp), %rdx
 638      110000
 639 007e BE000000 		movl	$0, %esi
 639      00
 640              	.LBE312:
 641              	.LBE311:
 642              		.loc 1 119 0
 643 0083 4898     		cltq
 644              	.LBB314:
 645              	.LBB313:
 302:fltk-1.3.4-1/FL/Fl_Help_View.H ****   					else return ((const char *)0); }
 646              		.loc 2 302 0
 647 0085 480F45F2 		cmovne	%rdx, %rsi
 648              	.LVL72:
 649              	.LBE313:
 650              	.LBE314:
 651              		.loc 1 119 0
 652 0089 48C1E00B 		salq	$11, %rax
 653 008d BA000800 		movl	$2048, %edx
 653      00
 654 0092 488DBC03 		leaq	408(%rbx,%rax), %rdi
 654      98010000 
 655 009a E8000000 		call	fl_strlcpy
 655      00
 656              	.LVL73:
 657 009f 488B93D0 		movq	205264(%rbx), %rdx
 657      210300
 658              		.loc 1 120 0
 659 00a6 8B03     		movl	(%rbx), %eax
 660 00a8 8B8AB019 		movl	6576(%rdx), %ecx
 660      0000
 661              	.LVL74:
 662              		.loc 1 122 0
 663 00ae 85C0     		testl	%eax, %eax
 664              		.loc 1 120 0
 665 00b0 4863D0   		movslq	%eax, %rdx
 666              	.LVL75:
 667 00b3 894C9308 		movl	%ecx, 8(%rbx,%rdx,4)
 668              	.LVL76:
 669              		.loc 1 123 0
 670 00b7 488BBBA8 		movq	205224(%rbx), %rdi
 670      210300
 671              		.loc 1 122 0
 672 00be 0F8EAC00 		jle	.L41
 672      0000
 673              		.loc 1 123 0
 674 00c4 E8000000 		call	_ZN9Fl_Widget8activateEv
 674      00
 675              	.LVL77:
 676              	.L42:
 677              	.LBB315:
 678              	.LBB316:
 679              		.loc 1 127 0
 680 00c9 488BBBB0 		movq	205232(%rbx), %rdi
 680      210300
 681 00d0 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 681      00
 682              	.LVL78:
 683              	.LBB317:
 684              	.LBB318:
 343:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Gets the default text size. */
 344:fltk-1.3.4-1/FL/Fl_Help_View.H ****   Fl_Fontsize  textsize() const { return (textsize_); }
 345:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Returns the current document title, or NULL if there is no title. */
 346:fltk-1.3.4-1/FL/Fl_Help_View.H ****   const char	*title() { return (title_); }
 685              		.loc 2 346 0
 686 00d5 488B83D0 		movq	205264(%rbx), %rax
 686      210300
 687              	.LBE318:
 688              	.LBE317:
 689              		.loc 1 128 0
 690 00dc 488BBBA0 		movq	205216(%rbx), %rdi
 690      210300
 691              	.LBE316:
 692              	.LBE315:
 693              	.LBE329:
 694              	.LBE332:
 695              		.loc 1 145 0
 696 00e3 5B       		popq	%rbx
 697              		.cfi_remember_state
 698              		.cfi_def_cfa_offset 24
 699              	.LVL79:
 700 00e4 5D       		popq	%rbp
 701              		.cfi_def_cfa_offset 16
 702              	.LVL80:
 703 00e5 415C     		popq	%r12
 704              		.cfi_def_cfa_offset 8
 705              	.LBB333:
 706              	.LBB330:
 707              	.LBB322:
 708              	.LBB321:
 709              	.LBB320:
 710              	.LBB319:
 711              		.loc 2 346 0
 712 00e7 488DB0A0 		leaq	160(%rax), %rsi
 712      000000
 713              	.LBE319:
 714              	.LBE320:
 715              		.loc 1 128 0
 716 00ee E9000000 		jmp	_ZN9Fl_Window5labelEPKc
 716      00
 717              	.LVL81:
 718              		.p2align 4,,10
 719 00f3 0F1F4400 		.p2align 3
 719      00
 720              	.L52:
 721              		.cfi_restore_state
 722              	.LBE321:
 723              	.LBE322:
 724              		.loc 1 132 0
 725 00f8 486303   		movslq	(%rbx), %rax
 726              	.LBB323:
 727              	.LBB324:
 302:fltk-1.3.4-1/FL/Fl_Help_View.H ****   					else return ((const char *)0); }
 728              		.loc 2 302 0
 729 00fb 488DB5B0 		leaq	4528(%rbp), %rsi
 729      110000
 730              	.LVL82:
 731              	.LBE324:
 732              	.LBE323:
 733              		.loc 1 132 0
 734 0102 BA000800 		movl	$2048, %edx
 734      00
 735 0107 48C1E00B 		salq	$11, %rax
 736 010b 488DBC03 		leaq	408(%rbx,%rax), %rdi
 736      98010000 
 737              	.LVL83:
 738 0113 E8000000 		call	fl_strlcpy
 738      00
 739              	.LVL84:
 740 0118 488B83D0 		movq	205264(%rbx), %rax
 740      210300
 741 011f 8B90B019 		movl	6576(%rax), %edx
 741      0000
 742              	.LVL85:
 743              		.loc 1 133 0
 744 0125 486303   		movslq	(%rbx), %rax
 745              	.LVL86:
 746 0128 89548308 		movl	%edx, 8(%rbx,%rax,4)
 747              	.LVL87:
 748              	.LBE330:
 749              	.LBE333:
 750              		.loc 1 145 0
 751 012c 5B       		popq	%rbx
 752              		.cfi_remember_state
 753              		.cfi_def_cfa_offset 24
 754 012d 5D       		popq	%rbp
 755              		.cfi_def_cfa_offset 16
 756              	.LVL88:
 757 012e 415C     		popq	%r12
 758              		.cfi_def_cfa_offset 8
 759 0130 C3       		ret
 760              	.LVL89:
 761              		.p2align 4,,10
 762 0131 0F1F8000 		.p2align 3
 762      000000
 763              	.L53:
 764              		.cfi_restore_state
 765              	.LBB334:
 766              	.LBB331:
 767              	.LBB325:
 768              	.LBB326:
 769              		.file 3 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 770              		.loc 3 59 0
 771 0138 488D7330 		leaq	48(%rbx), %rsi
 772              	.LVL90:
 773 013c 488D7B08 		leaq	8(%rbx), %rdi
 774              	.LVL91:
 775 0140 BA680100 		movl	$360, %edx
 775      00
 776 0145 E8000000 		call	memmove
 776      00
 777              	.LVL92:
 778              	.LBE326:
 779              	.LBE325:
 780              	.LBB327:
 781              	.LBB328:
 782 014a 488DB398 		leaq	20888(%rbx), %rsi
 782      510000
 783              	.LVL93:
 784 0151 488DBB98 		leaq	408(%rbx), %rdi
 784      010000
 785              	.LVL94:
 786 0158 BA00D002 		movl	$184320, %edx
 786      00
 787 015d E8000000 		call	memmove
 787      00
 788              	.LVL95:
 789              	.LBE328:
 790              	.LBE327:
 791              		.loc 1 114 0
 792 0162 418D4424 		leal	-9(%r12), %eax
 792      F7
 793 0167 8903     		movl	%eax, (%rbx)
 794 0169 E9FFFEFF 		jmp	.L39
 794      FF
 795 016e 6690     		.p2align 4,,10
 796              		.p2align 3
 797              	.L41:
 798              		.loc 1 125 0
 799 0170 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 799      00
 800              	.LVL96:
 801 0175 E94FFFFF 		jmp	.L42
 801      FF
 802              	.LBE331:
 803              	.LBE334:
 804              		.cfi_endproc
 805              	.LFE607:
 807              		.section	.text.unlikely._ZN14Fl_Help_Dialog8cb_view_EP12Fl_Help_ViewPv
 808              	.LCOLDE5:
 809              		.section	.text._ZN14Fl_Help_Dialog8cb_view_EP12Fl_Help_ViewPv
 810              	.LHOTE5:
 811              		.section	.rodata.str1.1,"aMS",@progbits,1
 812              	.LC6:
 813 0000 48656C70 		.string	"Help Dialog"
 813      20446961 
 813      6C6F6700 
 814              	.LC7:
 815 000c 403C2D00 		.string	"@<-"
 816              	.LC8:
 817 0010 53686F77 		.string	"Show the previous help page."
 817      20746865 
 817      20707265 
 817      76696F75 
 817      73206865 
 818              	.LC9:
 819 002d 402D3E00 		.string	"@->"
 820              	.LC10:
 821 0031 53686F77 		.string	"Show the next help page."
 821      20746865 
 821      206E6578 
 821      74206865 
 821      6C702070 
 822              	.LC11:
 823 004a 4600     		.string	"F"
 824              	.LC12:
 825 004c 4D616B65 		.string	"Make the help text smaller."
 825      20746865 
 825      2068656C 
 825      70207465 
 825      78742073 
 826              	.LC13:
 827 0068 4D616B65 		.string	"Make the help text larger."
 827      20746865 
 827      2068656C 
 827      70207465 
 827      7874206C 
 828              	.LC14:
 829 0083 40736561 		.string	"@search"
 829      72636800 
 830              	.LC15:
 831 008b 66696E64 		.string	"find text in document"
 831      20746578 
 831      7420696E 
 831      20646F63 
 831      756D656E 
 832              		.section	.text.unlikely._ZN14Fl_Help_DialogC2Ev,"ax",@progbits
 833              		.align 2
 834              	.LCOLDB16:
 835              		.section	.text._ZN14Fl_Help_DialogC2Ev,"ax",@progbits
 836              	.LHOTB16:
 837              		.align 2
 838              		.p2align 4,,15
 839              		.globl	_ZN14Fl_Help_DialogC2Ev
 841              	_ZN14Fl_Help_DialogC2Ev:
 842              	.LFB609:
 843              		.loc 1 147 0
 844              		.cfi_startproc
 845              	.LVL97:
 846 0000 4155     		pushq	%r13
 847              		.cfi_def_cfa_offset 16
 848              		.cfi_offset 13, -16
 849 0002 4154     		pushq	%r12
 850              		.cfi_def_cfa_offset 24
 851              		.cfi_offset 12, -24
 852 0004 55       		pushq	%rbp
 853              		.cfi_def_cfa_offset 32
 854              		.cfi_offset 6, -32
 855 0005 53       		pushq	%rbx
 856              		.cfi_def_cfa_offset 40
 857              		.cfi_offset 3, -40
 858 0006 4889FB   		movq	%rdi, %rbx
 859              	.LBB335:
 860              	.LBB336:
 861              		.loc 1 148 0
 862 0009 BFF00000 		movl	$240, %edi
 862      00
 863              	.LVL98:
 864              	.LBE336:
 865              	.LBE335:
 866              		.loc 1 147 0
 867 000e 4883EC08 		subq	$8, %rsp
 868              		.cfi_def_cfa_offset 48
 869              	.LBB393:
 870              	.LBB392:
 871              		.loc 1 148 0
 872 0012 E8000000 		call	_Znwm
 872      00
 873              	.LVL99:
 874 0017 B9000000 		movl	$.LC6, %ecx
 874      00
 875 001c 4889C5   		movq	%rax, %rbp
 876 001f BA810100 		movl	$385, %edx
 876      00
 877 0024 BE120200 		movl	$530, %esi
 877      00
 878 0029 4889C7   		movq	%rax, %rdi
 879 002c E8000000 		call	_ZN16Fl_Double_WindowC1EiiPKc
 879      00
 880              	.LVL100:
 881 0031 4889ABA0 		movq	%rbp, 205216(%rbx)
 881      210300
 882              	.LVL101:
 883              	.LBB337:
 884              	.LBB338:
 885              		.file 4 "fltk-1.3.4-1/FL/Fl_Widget.H"
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
 886              		.loc 4 599 0
 887 0038 48895D18 		movq	%rbx, 24(%rbp)
 888              	.LVL102:
 889              	.LBE338:
 890              	.LBE337:
 891              	.LBB339:
 892              		.loc 1 150 0
 893 003c BFA00000 		movl	$160, %edi
 893      00
 894 0041 E8000000 		call	_Znwm
 894      00
 895              	.LVL103:
 896 0046 4531C9   		xorl	%r9d, %r9d
 897 0049 41B81900 		movl	$25, %r8d
 897      0000
 898 004f B9FF0100 		movl	$511, %ecx
 898      00
 899 0054 BA0A0000 		movl	$10, %edx
 899      00
 900 0059 BE0A0000 		movl	$10, %esi
 900      00
 901 005e 4889C7   		movq	%rax, %rdi
 902 0061 4989C5   		movq	%rax, %r13
 903 0064 E8000000 		call	_ZN8Fl_GroupC1EiiiiPKc
 903      00
 904              	.LVL104:
 905              		.loc 1 151 0
 906 0069 BF800000 		movl	$128, %edi
 906      00
 907 006e E8000000 		call	_Znwm
 907      00
 908              	.LVL105:
 909 0073 41B90000 		movl	$.LC7, %r9d
 909      0000
 910 0079 4889C5   		movq	%rax, %rbp
 911              	.LVL106:
 912 007c 41B81900 		movl	$25, %r8d
 912      0000
 913 0082 B9190000 		movl	$25, %ecx
 913      00
 914 0087 BA0A0000 		movl	$10, %edx
 914      00
 915 008c 4889C7   		movq	%rax, %rdi
 916 008f BE0A0000 		movl	$10, %esi
 916      00
 917 0094 E8000000 		call	_ZN9Fl_ButtonC1EiiiiPKc
 917      00
 918              	.LVL107:
 919 0099 4889ABA8 		movq	%rbp, 205224(%rbx)
 919      210300
 920              		.loc 1 152 0
 921 00a0 BE000000 		movl	$.LC8, %esi
 921      00
 922 00a5 4889EF   		movq	%rbp, %rdi
 923 00a8 E8000000 		call	_ZN9Fl_Widget7tooltipEPKc
 923      00
 924              	.LVL108:
 925              		.loc 1 153 0
 926 00ad 488B83A8 		movq	205224(%rbx), %rax
 926      210300
 927              	.LVL109:
 928              		.loc 1 157 0
 929 00b4 BF800000 		movl	$128, %edi
 929      00
 930              	.LBB340:
 931              	.LBB341:
 932              		.file 5 "fltk-1.3.4-1/FL/Fl_Button.H"
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
 933              		.loc 5 143 0
 934 00b9 C7407851 		movl	$65361, 120(%rax)
 934      FF0000
 935              	.LVL110:
 936              	.LBE341:
 937              	.LBE340:
 938              		.loc 1 154 0
 939 00c0 488B83A8 		movq	205224(%rbx), %rax
 939      210300
 940              	.LVL111:
 941              	.LBB342:
 942              	.LBB343:
 478:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 943              		.loc 4 478 0
 944 00c7 C7405002 		movl	$2, 80(%rax)
 944      000000
 945              	.LVL112:
 946              	.LBE343:
 947              	.LBE342:
 948              		.loc 1 155 0
 949 00ce 488B83A8 		movq	205224(%rbx), %rax
 949      210300
 950              	.LVL113:
 951              	.LBB344:
 952              	.LBB345:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 953              		.loc 4 574 0
 954 00d5 48C74010 		movq	$_ZN14Fl_Help_Dialog8cb_back_EP9Fl_ButtonPv, 16(%rax)
 954      00000000 
 955              	.LVL114:
 956              	.LBE345:
 957              	.LBE344:
 958              		.loc 1 157 0
 959 00dd E8000000 		call	_Znwm
 959      00
 960              	.LVL115:
 961 00e2 41B90000 		movl	$.LC9, %r9d
 961      0000
 962 00e8 4889C5   		movq	%rax, %rbp
 963 00eb 41B81900 		movl	$25, %r8d
 963      0000
 964 00f1 B9190000 		movl	$25, %ecx
 964      00
 965 00f6 BA0A0000 		movl	$10, %edx
 965      00
 966 00fb 4889C7   		movq	%rax, %rdi
 967 00fe BE2D0000 		movl	$45, %esi
 967      00
 968 0103 E8000000 		call	_ZN9Fl_ButtonC1EiiiiPKc
 968      00
 969              	.LVL116:
 970 0108 4889ABB0 		movq	%rbp, 205232(%rbx)
 970      210300
 971              		.loc 1 158 0
 972 010f BE000000 		movl	$.LC10, %esi
 972      00
 973 0114 4889EF   		movq	%rbp, %rdi
 974 0117 E8000000 		call	_ZN9Fl_Widget7tooltipEPKc
 974      00
 975              	.LVL117:
 976              		.loc 1 159 0
 977 011c 488B83B0 		movq	205232(%rbx), %rax
 977      210300
 978              	.LVL118:
 979              		.loc 1 163 0
 980 0123 BF800000 		movl	$128, %edi
 980      00
 981              	.LBB346:
 982              	.LBB347:
 983              		.loc 5 143 0
 984 0128 C7407853 		movl	$65363, 120(%rax)
 984      FF0000
 985              	.LVL119:
 986              	.LBE347:
 987              	.LBE346:
 988              		.loc 1 160 0
 989 012f 488B83B0 		movq	205232(%rbx), %rax
 989      210300
 990              	.LVL120:
 991              	.LBB348:
 992              	.LBB349:
 478:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 993              		.loc 4 478 0
 994 0136 C7405002 		movl	$2, 80(%rax)
 994      000000
 995              	.LVL121:
 996              	.LBE349:
 997              	.LBE348:
 998              		.loc 1 161 0
 999 013d 488B83B0 		movq	205232(%rbx), %rax
 999      210300
 1000              	.LVL122:
 1001              	.LBB350:
 1002              	.LBB351:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1003              		.loc 4 574 0
 1004 0144 48C74010 		movq	$_ZN14Fl_Help_Dialog11cb_forward_EP9Fl_ButtonPv, 16(%rax)
 1004      00000000 
 1005              	.LVL123:
 1006              	.LBE351:
 1007              	.LBE350:
 1008              		.loc 1 163 0
 1009 014c E8000000 		call	_Znwm
 1009      00
 1010              	.LVL124:
 1011 0151 41B90000 		movl	$.LC11, %r9d
 1011      0000
 1012 0157 4889C5   		movq	%rax, %rbp
 1013 015a 41B81900 		movl	$25, %r8d
 1013      0000
 1014 0160 B9190000 		movl	$25, %ecx
 1014      00
 1015 0165 BA0A0000 		movl	$10, %edx
 1015      00
 1016 016a 4889C7   		movq	%rax, %rdi
 1017 016d BE500000 		movl	$80, %esi
 1017      00
 1018 0172 E8000000 		call	_ZN9Fl_ButtonC1EiiiiPKc
 1018      00
 1019              	.LVL125:
 1020 0177 4889ABB8 		movq	%rbp, 205240(%rbx)
 1020      210300
 1021              		.loc 1 164 0
 1022 017e BE000000 		movl	$.LC12, %esi
 1022      00
 1023 0183 4889EF   		movq	%rbp, %rdi
 1024 0186 E8000000 		call	_ZN9Fl_Widget7tooltipEPKc
 1024      00
 1025              	.LVL126:
 1026              		.loc 1 165 0
 1027 018b 488B83B8 		movq	205240(%rbx), %rax
 1027      210300
 1028              	.LVL127:
 1029              		.loc 1 169 0
 1030 0192 BF800000 		movl	$128, %edi
 1030      00
 1031              	.LBB352:
 1032              	.LBB353:
 496:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1033              		.loc 4 496 0
 1034 0197 C7404801 		movl	$1, 72(%rax)
 1034      000000
 1035              	.LVL128:
 1036              	.LBE353:
 1037              	.LBE352:
 1038              		.loc 1 166 0
 1039 019e 488B83B8 		movq	205240(%rbx), %rax
 1039      210300
 1040              	.LVL129:
 1041              	.LBB354:
 1042              	.LBB355:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1043              		.loc 4 508 0
 1044 01a5 C7404C0A 		movl	$10, 76(%rax)
 1044      000000
 1045              	.LVL130:
 1046              	.LBE355:
 1047              	.LBE354:
 1048              		.loc 1 167 0
 1049 01ac 488B83B8 		movq	205240(%rbx), %rax
 1049      210300
 1050              	.LVL131:
 1051              	.LBB356:
 1052              	.LBB357:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1053              		.loc 4 574 0
 1054 01b3 48C74010 		movq	$_ZN14Fl_Help_Dialog11cb_smaller_EP9Fl_ButtonPv, 16(%rax)
 1054      00000000 
 1055              	.LVL132:
 1056              	.LBE357:
 1057              	.LBE356:
 1058              		.loc 1 169 0
 1059 01bb E8000000 		call	_Znwm
 1059      00
 1060              	.LVL133:
 1061 01c0 41B90000 		movl	$.LC11, %r9d
 1061      0000
 1062 01c6 4889C5   		movq	%rax, %rbp
 1063 01c9 41B81900 		movl	$25, %r8d
 1063      0000
 1064 01cf B9190000 		movl	$25, %ecx
 1064      00
 1065 01d4 BA0A0000 		movl	$10, %edx
 1065      00
 1066 01d9 4889C7   		movq	%rax, %rdi
 1067 01dc BE730000 		movl	$115, %esi
 1067      00
 1068 01e1 E8000000 		call	_ZN9Fl_ButtonC1EiiiiPKc
 1068      00
 1069              	.LVL134:
 1070 01e6 4889ABC0 		movq	%rbp, 205248(%rbx)
 1070      210300
 1071              		.loc 1 170 0
 1072 01ed BE000000 		movl	$.LC13, %esi
 1072      00
 1073 01f2 4889EF   		movq	%rbp, %rdi
 1074 01f5 E8000000 		call	_ZN9Fl_Widget7tooltipEPKc
 1074      00
 1075              	.LVL135:
 1076              		.loc 1 171 0
 1077 01fa 488B83C0 		movq	205248(%rbx), %rax
 1077      210300
 1078              	.LVL136:
 1079              	.LBB358:
 1080              		.loc 1 175 0
 1081 0201 BFA00000 		movl	$160, %edi
 1081      00
 1082              	.LBE358:
 1083              	.LBB373:
 1084              	.LBB374:
 496:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1085              		.loc 4 496 0
 1086 0206 C7404801 		movl	$1, 72(%rax)
 1086      000000
 1087              	.LVL137:
 1088              	.LBE374:
 1089              	.LBE373:
 1090              		.loc 1 172 0
 1091 020d 488B83C0 		movq	205248(%rbx), %rax
 1091      210300
 1092              	.LVL138:
 1093              	.LBB375:
 1094              	.LBB376:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1095              		.loc 4 508 0
 1096 0214 C7404C10 		movl	$16, 76(%rax)
 1096      000000
 1097              	.LVL139:
 1098              	.LBE376:
 1099              	.LBE375:
 1100              		.loc 1 173 0
 1101 021b 488B83C0 		movq	205248(%rbx), %rax
 1101      210300
 1102              	.LVL140:
 1103              	.LBB377:
 1104              	.LBB378:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1105              		.loc 4 574 0
 1106 0222 48C74010 		movq	$_ZN14Fl_Help_Dialog10cb_larger_EP9Fl_ButtonPv, 16(%rax)
 1106      00000000 
 1107              	.LVL141:
 1108              	.LBE378:
 1109              	.LBE377:
 1110              	.LBB379:
 1111              		.loc 1 175 0
 1112 022a E8000000 		call	_Znwm
 1112      00
 1113              	.LVL142:
 1114 022f 4531C9   		xorl	%r9d, %r9d
 1115 0232 4889C5   		movq	%rax, %rbp
 1116 0235 41B81900 		movl	$25, %r8d
 1116      0000
 1117 023b B9AB0000 		movl	$171, %ecx
 1117      00
 1118 0240 BA0A0000 		movl	$10, %edx
 1118      00
 1119 0245 BE5E0100 		movl	$350, %esi
 1119      00
 1120 024a 4889C7   		movq	%rax, %rdi
 1121 024d E8000000 		call	_ZN8Fl_GroupC1EiiiiPKc
 1121      00
 1122              	.LVL143:
 1123              	.LBB359:
 1124              	.LBB360:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1125              		.loc 4 372 0
 1126 0252 C6456E03 		movb	$3, 110(%rbp)
 1127              	.LVL144:
 1128              	.LBE360:
 1129              	.LBE359:
 1130              	.LBB361:
 1131              	.LBB362:
 390:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1132              		.loc 4 390 0
 1133 0256 C7456407 		movl	$7, 100(%rbp)
 1133      000000
 1134              	.LVL145:
 1135              	.LBE362:
 1136              	.LBE361:
 1137              		.loc 1 178 0
 1138 025d BFC80000 		movl	$200, %edi
 1138      00
 1139 0262 E8000000 		call	_Znwm
 1139      00
 1140              	.LVL146:
 1141 0267 41B90000 		movl	$.LC14, %r9d
 1141      0000
 1142 026d 4989C4   		movq	%rax, %r12
 1143 0270 41B81500 		movl	$21, %r8d
 1143      0000
 1144 0276 B98F0000 		movl	$143, %ecx
 1144      00
 1145 027b BA0C0000 		movl	$12, %edx
 1145      00
 1146 0280 4889C7   		movq	%rax, %rdi
 1147 0283 BE770100 		movl	$375, %esi
 1147      00
 1148 0288 E8000000 		call	_ZN8Fl_InputC1EiiiiPKc
 1148      00
 1149              	.LVL147:
 1150              		.loc 1 179 0
 1151 028d BE000000 		movl	$.LC15, %esi
 1151      00
 1152              		.loc 1 178 0
 1153 0292 4C89A3C8 		movq	%r12, 205256(%rbx)
 1153      210300
 1154              		.loc 1 179 0
 1155 0299 4C89E7   		movq	%r12, %rdi
 1156 029c E8000000 		call	_ZN9Fl_Widget7tooltipEPKc
 1156      00
 1157              	.LVL148:
 1158              		.loc 1 180 0
 1159 02a1 488B83C8 		movq	205256(%rbx), %rax
 1159      210300
 1160              	.LVL149:
 1161              		.loc 1 186 0
 1162 02a8 4889EF   		movq	%rbp, %rdi
 1163              	.LBB363:
 1164              	.LBB364:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1165              		.loc 4 372 0
 1166 02ab C6406E01 		movb	$1, 110(%rax)
 1167              	.LVL150:
 1168              	.LBE364:
 1169              	.LBE363:
 1170              		.loc 1 181 0
 1171 02af 488B83C8 		movq	205256(%rbx), %rax
 1171      210300
 1172              	.LVL151:
 1173              	.LBB365:
 1174              	.LBB366:
 508:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1175              		.loc 4 508 0
 1176 02b6 C7404C0D 		movl	$13, 76(%rax)
 1176      000000
 1177              	.LVL152:
 1178              	.LBE366:
 1179              	.LBE365:
 1180              		.loc 1 182 0
 1181 02bd 488B83C8 		movq	205256(%rbx), %rax
 1181      210300
 1182              	.LVL153:
 1183              	.LBB367:
 1184              	.LBB368:
 1185              		.file 6 "fltk-1.3.4-1/FL/Fl_Input_.H"
   1:fltk-1.3.4-1/FL/Fl_Input_.H **** //
   2:fltk-1.3.4-1/FL/Fl_Input_.H **** // "$Id: Fl_Input_.H 10807 2015-07-21 13:55:13Z AlbrechtS $"
   3:fltk-1.3.4-1/FL/Fl_Input_.H **** //
   4:fltk-1.3.4-1/FL/Fl_Input_.H **** // Input base class header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Input_.H **** //
   6:fltk-1.3.4-1/FL/Fl_Input_.H **** // Copyright 1998-2015 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Input_.H **** //
   8:fltk-1.3.4-1/FL/Fl_Input_.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Input_.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Input_.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Input_.H **** //
  12:fltk-1.3.4-1/FL/Fl_Input_.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Input_.H **** //
  14:fltk-1.3.4-1/FL/Fl_Input_.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Input_.H **** //
  16:fltk-1.3.4-1/FL/Fl_Input_.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Input_.H **** //
  18:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  19:fltk-1.3.4-1/FL/Fl_Input_.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Input_.H ****    Fl_Input_ widget . */
  21:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  22:fltk-1.3.4-1/FL/Fl_Input_.H **** #ifndef Fl_Input__H
  23:fltk-1.3.4-1/FL/Fl_Input_.H **** #define Fl_Input__H
  24:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  25:fltk-1.3.4-1/FL/Fl_Input_.H **** #ifndef Fl_Widget_H
  26:fltk-1.3.4-1/FL/Fl_Input_.H **** #include "Fl_Widget.H"
  27:fltk-1.3.4-1/FL/Fl_Input_.H **** #endif
  28:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  29:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_NORMAL_INPUT		0
  30:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_FLOAT_INPUT		1
  31:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_INT_INPUT		2
  32:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_HIDDEN_INPUT		3
  33:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_MULTILINE_INPUT	4
  34:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_SECRET_INPUT		5
  35:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_INPUT_TYPE		7
  36:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_INPUT_READONLY	8
  37:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_NORMAL_OUTPUT	(FL_NORMAL_INPUT | FL_INPUT_READONLY)
  38:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_MULTILINE_OUTPUT	(FL_MULTILINE_INPUT | FL_INPUT_READONLY)
  39:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_INPUT_WRAP		16
  40:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_MULTILINE_INPUT_WRAP	(FL_MULTILINE_INPUT | FL_INPUT_WRAP)
  41:fltk-1.3.4-1/FL/Fl_Input_.H **** #define FL_MULTILINE_OUTPUT_WRAP (FL_MULTILINE_INPUT | FL_INPUT_READONLY | FL_INPUT_WRAP)
  42:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  43:fltk-1.3.4-1/FL/Fl_Input_.H **** /**
  44:fltk-1.3.4-1/FL/Fl_Input_.H ****   This class provides a low-overhead text input field.
  45:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  46:fltk-1.3.4-1/FL/Fl_Input_.H ****   This is a virtual base class below Fl_Input. It has all
  47:fltk-1.3.4-1/FL/Fl_Input_.H ****   the same interfaces, but lacks the handle() and
  48:fltk-1.3.4-1/FL/Fl_Input_.H ****   draw() method. You may want to subclass it if you are
  49:fltk-1.3.4-1/FL/Fl_Input_.H ****   one of those people who likes to change how the editing keys
  50:fltk-1.3.4-1/FL/Fl_Input_.H ****   work. It may also be useful for adding scrollbars
  51:fltk-1.3.4-1/FL/Fl_Input_.H ****   to the input field.
  52:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  53:fltk-1.3.4-1/FL/Fl_Input_.H ****   This can act like any of the subclasses of Fl_Input, by
  54:fltk-1.3.4-1/FL/Fl_Input_.H ****   setting type() to one of the following values:
  55:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  56:fltk-1.3.4-1/FL/Fl_Input_.H ****   \code
  57:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_NORMAL_INPUT	   0
  58:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_FLOAT_INPUT	   1
  59:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_INT_INPUT		   2
  60:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_MULTILINE_INPUT	   4
  61:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_SECRET_INPUT	   5
  62:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_INPUT_TYPE		   7
  63:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_INPUT_READONLY	   8
  64:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_NORMAL_OUTPUT	   (FL_NORMAL_INPUT | FL_INPUT_READONLY)
  65:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_MULTILINE_OUTPUT	   (FL_MULTILINE_INPUT | FL_INPUT_READONLY)
  66:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_INPUT_WRAP		   16
  67:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_MULTILINE_INPUT_WRAP  (FL_MULTILINE_INPUT | FL_INPUT_WRAP)
  68:fltk-1.3.4-1/FL/Fl_Input_.H ****   #define FL_MULTILINE_OUTPUT_WRAP (FL_MULTILINE_INPUT | FL_INPUT_READONLY | FL_INPUT_WRAP)
  69:fltk-1.3.4-1/FL/Fl_Input_.H ****   \endcode
  70:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  71:fltk-1.3.4-1/FL/Fl_Input_.H ****   All variables that represent an index into a text buffer are byte-oriented,
  72:fltk-1.3.4-1/FL/Fl_Input_.H ****   not character oriented, counting from 0 (at or before the first character)
  73:fltk-1.3.4-1/FL/Fl_Input_.H ****   to size() (at the end of the buffer, after the last byte). Since UTF-8
  74:fltk-1.3.4-1/FL/Fl_Input_.H ****   characters can be up to six bytes long, simply incrementing such an index
  75:fltk-1.3.4-1/FL/Fl_Input_.H ****   will not reliably advance to the next character in the text buffer.
  76:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  77:fltk-1.3.4-1/FL/Fl_Input_.H ****   Indices and pointers into the text buffer should always point at a 7 bit ASCII
  78:fltk-1.3.4-1/FL/Fl_Input_.H ****   character or the beginning of a UTF-8 character sequence. Behavior for false
  79:fltk-1.3.4-1/FL/Fl_Input_.H ****   UTF-8 sequences and pointers into the middle of a sequence are undefined.
  80:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  81:fltk-1.3.4-1/FL/Fl_Input_.H ****   \see Fl_Text_Display, Fl_Text_Editor for more powerful text handling widgets
  82:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  83:fltk-1.3.4-1/FL/Fl_Input_.H ****   \internal
  84:fltk-1.3.4-1/FL/Fl_Input_.H ****   When porting this widget from ASCII to UTF-8, previously legal pointers into
  85:fltk-1.3.4-1/FL/Fl_Input_.H ****   the text of this widget can become illegal by pointing into the middle of
  86:fltk-1.3.4-1/FL/Fl_Input_.H ****   a UTF-8 sequence. This is not a big problem for Fl_Input_ because all code
  87:fltk-1.3.4-1/FL/Fl_Input_.H ****   in this module is quite tolerant. It could be problematic though when deriving
  88:fltk-1.3.4-1/FL/Fl_Input_.H ****   from this class because no feedback for illegal pointers is given. Additionally,
  89:fltk-1.3.4-1/FL/Fl_Input_.H ****   a careless "copy" call can put partial UTF-8 sequences into the clipboard.
  90:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  91:fltk-1.3.4-1/FL/Fl_Input_.H ****   None of these issues should be disastrous. Nevertheless, we should
  92:fltk-1.3.4-1/FL/Fl_Input_.H ****   discuss how FLTK should handle false UTF-8 sequences and pointers.
  93:fltk-1.3.4-1/FL/Fl_Input_.H **** */
  94:fltk-1.3.4-1/FL/Fl_Input_.H **** class FL_EXPORT Fl_Input_ : public Fl_Widget {
  95:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  96:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Storage for the text field. */
  97:fltk-1.3.4-1/FL/Fl_Input_.H ****   const char* value_;
  98:fltk-1.3.4-1/FL/Fl_Input_.H **** 
  99:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Buffer memory for expanded text. \see expand() */
 100:fltk-1.3.4-1/FL/Fl_Input_.H ****   char* buffer;
 101:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 102:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Size of text in bytes in the \p value_ field. */
 103:fltk-1.3.4-1/FL/Fl_Input_.H ****   int size_;
 104:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 105:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Current size of internal value() buffer in bytes. */
 106:fltk-1.3.4-1/FL/Fl_Input_.H ****   int bufsize;
 107:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 108:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Position of the cursor in the document. */
 109:fltk-1.3.4-1/FL/Fl_Input_.H ****   int position_;
 110:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 111:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Position of the other end of the selected text.
 112:fltk-1.3.4-1/FL/Fl_Input_.H ****       If \p position_ equals \p mark_, no text is selected */
 113:fltk-1.3.4-1/FL/Fl_Input_.H ****   int mark_;
 114:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 115:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Behavior of Tab key in multiline input widget. 
 116:fltk-1.3.4-1/FL/Fl_Input_.H ****       If enabled (default) Tab causes focus nav, otherwise Tab is inserted 
 117:fltk-1.3.4-1/FL/Fl_Input_.H ****       as a character. */
 118:fltk-1.3.4-1/FL/Fl_Input_.H ****   int tab_nav_;
 119:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 120:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Offset to text origin within widget bounds */
 121:fltk-1.3.4-1/FL/Fl_Input_.H ****   int xscroll_, yscroll_;
 122:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 123:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Minimal update pointer. Display requires redraw from here to the end
 124:fltk-1.3.4-1/FL/Fl_Input_.H ****       of the buffer. */
 125:fltk-1.3.4-1/FL/Fl_Input_.H ****   int mu_p;
 126:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 127:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Maximum number of (UTF-8) characters a user can input. */
 128:fltk-1.3.4-1/FL/Fl_Input_.H ****   int maximum_size_;
 129:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 130:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Shortcut key that will fetch focus for this widget. */
 131:fltk-1.3.4-1/FL/Fl_Input_.H ****   int shortcut_;
 132:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 133:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal This is set if no text but only the cursor needs updating. */
 134:fltk-1.3.4-1/FL/Fl_Input_.H ****   uchar erase_cursor_only;
 135:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 136:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal The font used for the entire text. */
 137:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Font textfont_;
 138:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 139:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Height of the font used for the entire text. */
 140:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Fontsize textsize_;
 141:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 142:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal color of the entire text */
 143:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Color textcolor_;
 144:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 145:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal color of the text cursor */
 146:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Color cursor_color_;
 147:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 148:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Horizontal cursor position in pixels while moving up or down. */
 149:fltk-1.3.4-1/FL/Fl_Input_.H ****   static double up_down_pos;
 150:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 151:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Flag to remember last cursor move. */
 152:fltk-1.3.4-1/FL/Fl_Input_.H ****   static int was_up_down;
 153:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 154:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Convert a given text segment into the text that will be rendered on screen. */
 155:fltk-1.3.4-1/FL/Fl_Input_.H ****   const char* expand(const char*, char*) const;
 156:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 157:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Calculates the width in pixels of part of a text buffer. */
 158:fltk-1.3.4-1/FL/Fl_Input_.H ****   double expandpos(const char*, const char*, const char*, int*) const;
 159:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 160:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Mark a range of characters for update. */
 161:fltk-1.3.4-1/FL/Fl_Input_.H ****   void minimal_update(int, int);
 162:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 163:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Mark a range of characters for update. */
 164:fltk-1.3.4-1/FL/Fl_Input_.H ****   void minimal_update(int p);
 165:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 166:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Copy the value from a possibly static entry into the internal buffer. */
 167:fltk-1.3.4-1/FL/Fl_Input_.H ****   void put_in_buffer(int newsize);
 168:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 169:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Set the current font and font size. */
 170:fltk-1.3.4-1/FL/Fl_Input_.H ****   void setfont() const;
 171:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 172:fltk-1.3.4-1/FL/Fl_Input_.H **** protected:
 173:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 174:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Find the start of a word. */
 175:fltk-1.3.4-1/FL/Fl_Input_.H ****   int word_start(int i) const;
 176:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 177:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Find the end of a word. */
 178:fltk-1.3.4-1/FL/Fl_Input_.H ****   int word_end(int i) const;
 179:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 180:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Find the start of a line. */
 181:fltk-1.3.4-1/FL/Fl_Input_.H ****   int line_start(int i) const;
 182:fltk-1.3.4-1/FL/Fl_Input_.H ****   
 183:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Find the end of a line. */
 184:fltk-1.3.4-1/FL/Fl_Input_.H ****   int line_end(int i) const;
 185:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 186:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Draw the text in the passed bounding box. */
 187:fltk-1.3.4-1/FL/Fl_Input_.H ****   void drawtext(int, int, int, int);
 188:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 189:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Move the cursor to the column given by up_down_pos. */
 190:fltk-1.3.4-1/FL/Fl_Input_.H ****   int up_down_position(int, int keepmark=0);
 191:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 192:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Handle mouse clicks and mouse moves. */
 193:fltk-1.3.4-1/FL/Fl_Input_.H ****   void handle_mouse(int, int, int, int, int keepmark=0);
 194:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 195:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Handle all kinds of text field related events. */
 196:fltk-1.3.4-1/FL/Fl_Input_.H ****   int handletext(int e, int, int, int, int);
 197:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 198:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Check the when() field and do a callback if indicated. */
 199:fltk-1.3.4-1/FL/Fl_Input_.H ****   void maybe_do_callback();
 200:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 201:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Horizontal offset of text to left edge of widget. */
 202:fltk-1.3.4-1/FL/Fl_Input_.H ****   int xscroll() const {return xscroll_;}
 203:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 204:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** \internal Vertical offset of text to top edge of widget. */
 205:fltk-1.3.4-1/FL/Fl_Input_.H ****   int yscroll() const {return yscroll_;}
 206:fltk-1.3.4-1/FL/Fl_Input_.H ****   void yscroll(int yOffset) { yscroll_ = yOffset; damage(FL_DAMAGE_EXPOSE);}
 207:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 208:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Return the number of lines displayed on a single page.  */
 209:fltk-1.3.4-1/FL/Fl_Input_.H ****   int linesPerPage();
 210:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 211:fltk-1.3.4-1/FL/Fl_Input_.H **** public:
 212:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 213:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Change the size of the widget. */
 214:fltk-1.3.4-1/FL/Fl_Input_.H ****   void resize(int, int, int, int);
 215:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 216:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Constructor */
 217:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Input_(int, int, int, int, const char* = 0);
 218:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 219:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Destructor */
 220:fltk-1.3.4-1/FL/Fl_Input_.H ****   ~Fl_Input_();
 221:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 222:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Changes the widget text. */
 223:fltk-1.3.4-1/FL/Fl_Input_.H ****   int value(const char*);
 224:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 225:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Changes the widget text. */
 226:fltk-1.3.4-1/FL/Fl_Input_.H ****   int value(const char*, int);
 227:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 228:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Changes the widget text. */
 229:fltk-1.3.4-1/FL/Fl_Input_.H ****   int static_value(const char*);
 230:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 231:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Changes the widget text. */
 232:fltk-1.3.4-1/FL/Fl_Input_.H ****   int static_value(const char*, int);
 233:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 234:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 235:fltk-1.3.4-1/FL/Fl_Input_.H ****       Returns the text displayed in the widget.
 236:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 237:fltk-1.3.4-1/FL/Fl_Input_.H ****       This function returns the current value, which is a pointer
 238:fltk-1.3.4-1/FL/Fl_Input_.H ****       to the internal buffer and is valid only until the next event is
 239:fltk-1.3.4-1/FL/Fl_Input_.H ****       handled.
 240:fltk-1.3.4-1/FL/Fl_Input_.H ****   
 241:fltk-1.3.4-1/FL/Fl_Input_.H ****       \return pointer to an internal buffer - do not free() this    
 242:fltk-1.3.4-1/FL/Fl_Input_.H ****       \see Fl_Input_::value(const char*)
 243:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 244:fltk-1.3.4-1/FL/Fl_Input_.H ****   const char* value() const {return value_;}
 245:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 246:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Returns the character at index \p i. */
 247:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Char index(int i) const;
 248:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 249:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 250:fltk-1.3.4-1/FL/Fl_Input_.H ****     Returns the number of bytes in value(). 
 251:fltk-1.3.4-1/FL/Fl_Input_.H ****   
 252:fltk-1.3.4-1/FL/Fl_Input_.H ****     This may be greater than <tt>strlen(value())</tt> if there are 
 253:fltk-1.3.4-1/FL/Fl_Input_.H ****     \c nul characters in the text.
 254:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 255:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return number of bytes in the text
 256:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 257:fltk-1.3.4-1/FL/Fl_Input_.H ****   int size() const {return size_;}
 258:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 259:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the width and height of this widget.
 260:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] W, H new width and height
 261:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see Fl_Widget::size(int, int) */
 262:fltk-1.3.4-1/FL/Fl_Input_.H ****   void size(int W, int H) { Fl_Widget::size(W, H); }
 263:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 264:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the maximum length of the input field in characters.
 265:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see maximum_size(int). */
 266:fltk-1.3.4-1/FL/Fl_Input_.H ****   int maximum_size() const {return maximum_size_;}
 267:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 268:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the maximum length of the input field in characters.
 269:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 270:fltk-1.3.4-1/FL/Fl_Input_.H ****     This limits the number of <b>characters</b> that can be inserted
 271:fltk-1.3.4-1/FL/Fl_Input_.H ****     in the widget.
 272:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 273:fltk-1.3.4-1/FL/Fl_Input_.H ****     Since FLTK 1.3 this is different than the buffer size, since one
 274:fltk-1.3.4-1/FL/Fl_Input_.H ****     character can be more than one byte in UTF-8 encoding. In FLTK 1.1
 275:fltk-1.3.4-1/FL/Fl_Input_.H ****     this was the same (one byte = one character).
 276:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 277:fltk-1.3.4-1/FL/Fl_Input_.H ****   void maximum_size(int m) {maximum_size_ = m;}
 278:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 279:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the position of the text cursor.
 280:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return the cursor position as an index in the range 0..size()
 281:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see position(int, int)
 282:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 283:fltk-1.3.4-1/FL/Fl_Input_.H ****   int position() const {return position_;}
 284:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 285:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the current selection mark. 
 286:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return index into the text */
 287:fltk-1.3.4-1/FL/Fl_Input_.H ****   int mark() const {return mark_;}
 288:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 289:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Sets the index for the cursor and mark. */
 290:fltk-1.3.4-1/FL/Fl_Input_.H ****   int position(int p, int m);
 291:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 292:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the cursor position and mark.
 293:fltk-1.3.4-1/FL/Fl_Input_.H ****     position(n) is the same as <tt>position(n, n)</tt>.
 294:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param p new index for cursor and mark
 295:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if no positions changed
 296:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see position(int, int), position(), mark(int)
 297:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 298:fltk-1.3.4-1/FL/Fl_Input_.H ****   int position(int p) {return position(p, p);}
 299:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 300:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the current selection mark. 
 301:fltk-1.3.4-1/FL/Fl_Input_.H ****     mark(n) is the same as <tt>position(position(),n)</tt>.
 302:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param m new index of the mark 
 303:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if the mark did not change
 304:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see position(), position(int, int) */
 305:fltk-1.3.4-1/FL/Fl_Input_.H ****   int mark(int m) {return position(position(), m);}
 306:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 307:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Deletes text from \p b to \p e and inserts the new string \p text. */
 308:fltk-1.3.4-1/FL/Fl_Input_.H ****   int replace(int b, int e, const char *text, int ilen=0);
 309:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 310:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 311:fltk-1.3.4-1/FL/Fl_Input_.H ****     Deletes the current selection.
 312:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 313:fltk-1.3.4-1/FL/Fl_Input_.H ****     This function deletes the currently selected text
 314:fltk-1.3.4-1/FL/Fl_Input_.H ****     \e without storing it in the clipboard. To use the clipboard,
 315:fltk-1.3.4-1/FL/Fl_Input_.H ****     you may call copy() first or copy_cuts() after
 316:fltk-1.3.4-1/FL/Fl_Input_.H ****     this call.
 317:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 318:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if no data was copied
 319:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 320:fltk-1.3.4-1/FL/Fl_Input_.H ****   int cut() {return replace(position(), mark(), 0);}
 321:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 322:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 323:fltk-1.3.4-1/FL/Fl_Input_.H ****     Deletes the next \p n bytes rounded to characters before or after the cursor.
 324:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 325:fltk-1.3.4-1/FL/Fl_Input_.H ****     This function deletes the currently selected text
 326:fltk-1.3.4-1/FL/Fl_Input_.H ****     \e without storing it in the clipboard. To use the clipboard,
 327:fltk-1.3.4-1/FL/Fl_Input_.H ****     you may call copy() first or copy_cuts() after
 328:fltk-1.3.4-1/FL/Fl_Input_.H ****     this call.
 329:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 330:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param n number of bytes rounded to full characters and clamped to the buffer.
 331:fltk-1.3.4-1/FL/Fl_Input_.H ****            A negative number will cut characters to the left of the cursor.
 332:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if no data was copied
 333:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 334:fltk-1.3.4-1/FL/Fl_Input_.H ****   int cut(int n) {return replace(position(), position()+n, 0);}
 335:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 336:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 337:fltk-1.3.4-1/FL/Fl_Input_.H ****     Deletes all characters between index \p a and \p b.
 338:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 339:fltk-1.3.4-1/FL/Fl_Input_.H ****     This function deletes the currently selected text
 340:fltk-1.3.4-1/FL/Fl_Input_.H ****     \e without storing it in the clipboard. To use the clipboard,
 341:fltk-1.3.4-1/FL/Fl_Input_.H ****     you may call copy() first or copy_cuts() after
 342:fltk-1.3.4-1/FL/Fl_Input_.H ****     this call.
 343:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 344:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param a, b range of bytes rounded to full characters and clamped to the buffer
 345:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if no data was copied
 346:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 347:fltk-1.3.4-1/FL/Fl_Input_.H ****   int cut(int a, int b) {return replace(a, b, 0);}
 348:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 349:fltk-1.3.4-1/FL/Fl_Input_.H ****   /**
 350:fltk-1.3.4-1/FL/Fl_Input_.H ****     Inserts text at the cursor position.
 351:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 352:fltk-1.3.4-1/FL/Fl_Input_.H ****     This function inserts the string in \p t at the cursor
 353:fltk-1.3.4-1/FL/Fl_Input_.H ****     position() and moves the new position and mark to
 354:fltk-1.3.4-1/FL/Fl_Input_.H ****     the end of the inserted text.
 355:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 356:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] t text that will be inserted
 357:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] l length of text, or 0 if the string is terminated by \c nul.
 358:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return 0 if no text was inserted
 359:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 360:fltk-1.3.4-1/FL/Fl_Input_.H ****   int insert(const char* t, int l=0){return replace(position_, mark_, t, l);}
 361:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 362:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Put the current selection into the clipboard. */
 363:fltk-1.3.4-1/FL/Fl_Input_.H ****   int copy(int clipboard);
 364:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 365:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Undo previous changes to the text buffer. */
 366:fltk-1.3.4-1/FL/Fl_Input_.H ****   int undo();
 367:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 368:fltk-1.3.4-1/FL/Fl_Input_.H ****   /* Copy the yank buffer to the clipboard. */
 369:fltk-1.3.4-1/FL/Fl_Input_.H ****   int copy_cuts();
 370:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 371:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Return the shortcut key associated with this widget.
 372:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return shortcut keystroke
 373:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see Fl_Button::shortcut() */
 374:fltk-1.3.4-1/FL/Fl_Input_.H ****   int shortcut() const {return shortcut_;}
 375:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 376:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** 
 377:fltk-1.3.4-1/FL/Fl_Input_.H ****     Sets the shortcut key associated with this widget.
 378:fltk-1.3.4-1/FL/Fl_Input_.H ****     Pressing the shortcut key gives text editing focus to this widget.
 379:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] s new shortcut keystroke 
 380:fltk-1.3.4-1/FL/Fl_Input_.H ****     \see Fl_Button::shortcut() 
 381:fltk-1.3.4-1/FL/Fl_Input_.H ****   */
 382:fltk-1.3.4-1/FL/Fl_Input_.H ****   void shortcut(int s) {shortcut_ = s;}
 383:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 384:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Gets the font of the text in the input field.
 385:fltk-1.3.4-1/FL/Fl_Input_.H ****     \return the current Fl_Font index */
 386:fltk-1.3.4-1/FL/Fl_Input_.H ****   Fl_Font textfont() const {return textfont_;}
 387:fltk-1.3.4-1/FL/Fl_Input_.H **** 
 388:fltk-1.3.4-1/FL/Fl_Input_.H ****   /** Sets the font of the text in the input field.
 389:fltk-1.3.4-1/FL/Fl_Input_.H ****     The text font defaults to \c FL_HELVETICA.
 390:fltk-1.3.4-1/FL/Fl_Input_.H ****     \param [in] s the new text font */
 391:fltk-1.3.4-1/FL/Fl_Input_.H ****   void textfont(Fl_Font s) {textfont_ = s;}
 1186              		.loc 6 391 0
 1187 02c4 C780B400 		movl	$4, 180(%rax)
 1187      00000400 
 1187      0000
 1188              	.LVL154:
 1189              	.LBE368:
 1190              	.LBE367:
 1191              		.loc 1 183 0
 1192 02ce 488B83C8 		movq	205256(%rbx), %rax
 1192      210300
 1193              	.LVL155:
 1194              	.LBB369:
 1195              	.LBB370:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1196              		.loc 4 574 0
 1197 02d5 48C74010 		movq	$_ZN14Fl_Help_Dialog8cb_find_EP8Fl_InputPv, 16(%rax)
 1197      00000000 
 1198              	.LVL156:
 1199              	.LBE370:
 1200              	.LBE369:
 1201              		.loc 1 184 0
 1202 02dd 488B83C8 		movq	205256(%rbx), %rax
 1202      210300
 1203              	.LVL157:
 1204              	.LBB371:
 1205              	.LBB372:
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
 1206              		.loc 4 654 0
 1207 02e4 C6406F0A 		movb	$10, 111(%rax)
 1208              	.LVL158:
 1209              	.LBE372:
 1210              	.LBE371:
 1211              		.loc 1 186 0
 1212 02e8 E8000000 		call	_ZN8Fl_Group3endEv
 1212      00
 1213              	.LVL159:
 1214              	.LBE379:
 1215              	.LBB380:
 1216              		.loc 1 188 0
 1217 02ed BF780000 		movl	$120, %edi
 1217      00
 1218 02f2 E8000000 		call	_Znwm
 1218      00
 1219              	.LVL160:
 1220 02f7 4531C9   		xorl	%r9d, %r9d
 1221 02fa 41B81900 		movl	$25, %r8d
 1221      0000
 1222 0300 B9BE0000 		movl	$190, %ecx
 1222      00
 1223 0305 BA0A0000 		movl	$10, %edx
 1223      00
 1224 030a BE960000 		movl	$150, %esi
 1224      00
 1225 030f 4889C5   		movq	%rax, %rbp
 1226              	.LVL161:
 1227 0312 4889C7   		movq	%rax, %rdi
 1228 0315 E8000000 		call	_ZN6Fl_BoxC1EiiiiPKc
 1228      00
 1229              	.LVL162:
 1230              		.loc 1 189 0
 1231 031a E8000000 		call	_ZN8Fl_Group7currentEv
 1231      00
 1232              	.LVL163:
 1233              	.LBE380:
 1234              		.loc 1 191 0
 1235 031f 4C89EF   		movq	%r13, %rdi
 1236              	.LBB383:
 1237              	.LBB381:
 1238              	.LBB382:
 1239              		.file 7 "fltk-1.3.4-1/FL/Fl_Group.H"
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
 1240              		.loc 7 148 0
 1241 0322 4889A888 		movq	%rbp, 136(%rax)
 1241      000000
 1242              	.LVL164:
 1243              	.LBE382:
 1244              	.LBE381:
 1245              	.LBE383:
 1246              		.loc 1 191 0
 1247 0329 E8000000 		call	_ZN8Fl_Group3endEv
 1247      00
 1248              	.LVL165:
 1249              	.LBE339:
 1250              		.loc 1 193 0
 1251 032e BF381B00 		movl	$6968, %edi
 1251      00
 1252 0333 E8000000 		call	_Znwm
 1252      00
 1253              	.LVL166:
 1254 0338 4531C9   		xorl	%r9d, %r9d
 1255 033b 4889C5   		movq	%rax, %rbp
 1256              	.LVL167:
 1257 033e 41B84A01 		movl	$330, %r8d
 1257      0000
 1258 0344 B9FE0100 		movl	$510, %ecx
 1258      00
 1259 0349 BA2D0000 		movl	$45, %edx
 1259      00
 1260 034e BE0A0000 		movl	$10, %esi
 1260      00
 1261 0353 4889C7   		movq	%rax, %rdi
 1262 0356 E8000000 		call	_ZN12Fl_Help_ViewC1EiiiiPKc
 1262      00
 1263              	.LVL168:
 1264 035b 4889ABD0 		movq	%rbp, 205264(%rbx)
 1264      210300
 1265              	.LVL169:
 1266              	.LBB384:
 1267              	.LBB385:
 372:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1268              		.loc 4 372 0
 1269 0362 C6456E03 		movb	$3, 110(%rbp)
 1270              	.LVL170:
 1271              	.LBE385:
 1272              	.LBE384:
 1273              	.LBB386:
 1274              	.LBB387:
 574:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1275              		.loc 4 574 0
 1276 0366 48C74510 		movq	$_ZN14Fl_Help_Dialog8cb_view_EP12Fl_Help_ViewPv, 16(%rbp)
 1276      00000000 
 1277              	.LVL171:
 1278              	.LBE387:
 1279              	.LBE386:
 1280              		.loc 1 196 0
 1281 036e E8000000 		call	_ZN8Fl_Group7currentEv
 1281      00
 1282              	.LVL172:
 1283              	.LBB388:
 1284              	.LBB389:
 1285              		.loc 7 148 0
 1286 0373 4889A888 		movq	%rbp, 136(%rax)
 1286      000000
 1287              	.LVL173:
 1288              	.LBE389:
 1289              	.LBE388:
 1290              		.loc 1 198 0
 1291 037a 488BBBA0 		movq	205216(%rbx), %rdi
 1291      210300
 1292              	.LVL174:
 1293              	.LBB390:
 1294              	.LBB391:
 1295              		.file 8 "fltk-1.3.4-1/FL/Fl_Window.H"
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
 1296              		.loc 8 439 0
 1297 0381 C787C000 		movl	$260, 192(%rdi)
 1297      00000401 
 1297      0000
 440:fltk-1.3.4-1/FL/Fl_Window.H ****     this->minh   = minh;
 1298              		.loc 8 440 0
 1299 038b C787C400 		movl	$150, 196(%rdi)
 1299      00009600 
 1299      0000
 441:fltk-1.3.4-1/FL/Fl_Window.H ****     this->maxw   = maxw;
 1300              		.loc 8 441 0
 1301 0395 C787C800 		movl	$0, 200(%rdi)
 1301      00000000 
 1301      0000
 442:fltk-1.3.4-1/FL/Fl_Window.H ****     this->maxh   = maxh;
 1302              		.loc 8 442 0
 1303 039f C787CC00 		movl	$0, 204(%rdi)
 1303      00000000 
 1303      0000
 443:fltk-1.3.4-1/FL/Fl_Window.H ****     this->dw     = dw;
 1304              		.loc 8 443 0
 1305 03a9 C787D000 		movl	$0, 208(%rdi)
 1305      00000000 
 1305      0000
 444:fltk-1.3.4-1/FL/Fl_Window.H ****     this->dh     = dh;
 1306              		.loc 8 444 0
 1307 03b3 C787D400 		movl	$0, 212(%rdi)
 1307      00000000 
 1307      0000
 445:fltk-1.3.4-1/FL/Fl_Window.H ****     this->aspect = aspect;
 1308              		.loc 8 445 0
 1309 03bd C787D800 		movl	$0, 216(%rdi)
 1309      00000000 
 1309      0000
 446:fltk-1.3.4-1/FL/Fl_Window.H ****     size_range_();
 1310              		.loc 8 446 0
 1311 03c7 E8000000 		call	_ZN9Fl_Window11size_range_Ev
 1311      00
 1312              	.LVL175:
 1313              	.LBE391:
 1314              	.LBE390:
 1315              		.loc 1 199 0
 1316 03cc 488BBBA0 		movq	205216(%rbx), %rdi
 1316      210300
 1317 03d3 E8000000 		call	_ZN8Fl_Group3endEv
 1317      00
 1318              	.LVL176:
 1319              	.LBE392:
 1320              		.loc 1 201 0
 1321 03d8 488BBBA8 		movq	205224(%rbx), %rdi
 1321      210300
 1322 03df E8000000 		call	_ZN9Fl_Widget10deactivateEv
 1322      00
 1323              	.LVL177:
 1324              		.loc 1 202 0
 1325 03e4 488BBBB0 		movq	205232(%rbx), %rdi
 1325      210300
 1326 03eb E8000000 		call	_ZN9Fl_Widget10deactivateEv
 1326      00
 1327              	.LVL178:
 1328              		.loc 1 204 0
 1329 03f0 C703FFFF 		movl	$-1, (%rbx)
 1329      FFFF
 1330              		.loc 1 205 0
 1331 03f6 C7430400 		movl	$0, 4(%rbx)
 1331      000000
 1332              		.loc 1 206 0
 1333 03fd C7839821 		movl	$0, 205208(%rbx)
 1333      03000000 
 1333      0000
 1334              	.LBE393:
 1335              		.loc 1 209 0
 1336 0407 4883C408 		addq	$8, %rsp
 1337              		.cfi_def_cfa_offset 40
 1338 040b 5B       		popq	%rbx
 1339              		.cfi_def_cfa_offset 32
 1340              	.LVL179:
 1341 040c 5D       		popq	%rbp
 1342              		.cfi_def_cfa_offset 24
 1343              	.LVL180:
 1344 040d 415C     		popq	%r12
 1345              		.cfi_def_cfa_offset 16
 1346 040f 415D     		popq	%r13
 1347              		.cfi_def_cfa_offset 8
 1348              	.LVL181:
 1349              	.LBB394:
 1350              		.loc 1 208 0
 1351 0411 E9000000 		jmp	_Z18fl_register_imagesv
 1351      00
 1352              	.LVL182:
 1353              	.LBE394:
 1354              		.cfi_endproc
 1355              	.LFE609:
 1357              		.section	.text.unlikely._ZN14Fl_Help_DialogC2Ev
 1358              	.LCOLDE16:
 1359              		.section	.text._ZN14Fl_Help_DialogC2Ev
 1360              	.LHOTE16:
 1361              		.globl	_ZN14Fl_Help_DialogC1Ev
 1362              		.set	_ZN14Fl_Help_DialogC1Ev,_ZN14Fl_Help_DialogC2Ev
 1363              		.section	.text.unlikely._ZN14Fl_Help_DialogD2Ev,"ax",@progbits
 1364              		.align 2
 1365              	.LCOLDB17:
 1366              		.section	.text._ZN14Fl_Help_DialogD2Ev,"ax",@progbits
 1367              	.LHOTB17:
 1368              		.align 2
 1369              		.p2align 4,,15
 1370              		.globl	_ZN14Fl_Help_DialogD2Ev
 1372              	_ZN14Fl_Help_DialogD2Ev:
 1373              	.LFB612:
 1374              		.loc 1 211 0
 1375              		.cfi_startproc
 1376              	.LVL183:
 1377              	.LBB395:
 1378              		.loc 1 212 0
 1379 0000 488BBFA0 		movq	205216(%rdi), %rdi
 1379      210300
 1380              	.LVL184:
 1381 0007 4885FF   		testq	%rdi, %rdi
 1382 000a 740C     		je	.L56
 1383              		.loc 1 212 0 is_stmt 0 discriminator 1
 1384 000c 488B07   		movq	(%rdi), %rax
 1385 000f FF6008   		jmp	*8(%rax)
 1386              	.LVL185:
 1387              		.p2align 4,,10
 1388 0012 660F1F44 		.p2align 3
 1388      0000
 1389              	.L56:
 1390 0018 F3C3     		rep ret
 1391              	.LBE395:
 1392              		.cfi_endproc
 1393              	.LFE612:
 1395              		.section	.text.unlikely._ZN14Fl_Help_DialogD2Ev
 1396              	.LCOLDE17:
 1397              		.section	.text._ZN14Fl_Help_DialogD2Ev
 1398              	.LHOTE17:
 1399              		.globl	_ZN14Fl_Help_DialogD1Ev
 1400              		.set	_ZN14Fl_Help_DialogD1Ev,_ZN14Fl_Help_DialogD2Ev
 1401              		.section	.text.unlikely._ZN14Fl_Help_Dialog1hEv,"ax",@progbits
 1402              		.align 2
 1403              	.LCOLDB18:
 1404              		.section	.text._ZN14Fl_Help_Dialog1hEv,"ax",@progbits
 1405              	.LHOTB18:
 1406              		.align 2
 1407              		.p2align 4,,15
 1408              		.globl	_ZN14Fl_Help_Dialog1hEv
 1410              	_ZN14Fl_Help_Dialog1hEv:
 1411              	.LFB614:
 1412              		.loc 1 215 0 is_stmt 1
 1413              		.cfi_startproc
 1414              	.LVL186:
 1415 0000 488B87A0 		movq	205216(%rdi), %rax
 1415      210300
 1416              		.loc 1 216 0
 1417 0007 8B402C   		movl	44(%rax), %eax
 1418              		.loc 1 217 0
 1419 000a C3       		ret
 1420              		.cfi_endproc
 1421              	.LFE614:
 1423              		.section	.text.unlikely._ZN14Fl_Help_Dialog1hEv
 1424              	.LCOLDE18:
 1425              		.section	.text._ZN14Fl_Help_Dialog1hEv
 1426              	.LHOTE18:
 1427              		.section	.text.unlikely._ZN14Fl_Help_Dialog4hideEv,"ax",@progbits
 1428              		.align 2
 1429              	.LCOLDB19:
 1430              		.section	.text._ZN14Fl_Help_Dialog4hideEv,"ax",@progbits
 1431              	.LHOTB19:
 1432              		.align 2
 1433              		.p2align 4,,15
 1434              		.globl	_ZN14Fl_Help_Dialog4hideEv
 1436              	_ZN14Fl_Help_Dialog4hideEv:
 1437              	.LFB615:
 1438              		.loc 1 219 0
 1439              		.cfi_startproc
 1440              	.LVL187:
 1441              		.loc 1 220 0
 1442 0000 488BBFA0 		movq	205216(%rdi), %rdi
 1442      210300
 1443              	.LVL188:
 1444 0007 488B07   		movq	(%rdi), %rax
 1445 000a FF6030   		jmp	*48(%rax)
 1446              	.LVL189:
 1447              		.cfi_endproc
 1448              	.LFE615:
 1450              		.section	.text.unlikely._ZN14Fl_Help_Dialog4hideEv
 1451              	.LCOLDE19:
 1452              		.section	.text._ZN14Fl_Help_Dialog4hideEv
 1453              	.LHOTE19:
 1454              		.section	.text.unlikely._ZN14Fl_Help_Dialog4loadEPKc,"ax",@progbits
 1455              		.align 2
 1456              	.LCOLDB20:
 1457              		.section	.text._ZN14Fl_Help_Dialog4loadEPKc,"ax",@progbits
 1458              	.LHOTB20:
 1459              		.align 2
 1460              		.p2align 4,,15
 1461              		.globl	_ZN14Fl_Help_Dialog4loadEPKc
 1463              	_ZN14Fl_Help_Dialog4loadEPKc:
 1464              	.LFB616:
 1465              		.loc 1 223 0
 1466              		.cfi_startproc
 1467              	.LVL190:
 1468 0000 53       		pushq	%rbx
 1469              		.cfi_def_cfa_offset 16
 1470              		.cfi_offset 3, -16
 1471              		.loc 1 224 0
 1472 0001 488B87D0 		movq	205264(%rdi), %rax
 1472      210300
 1473              	.LVL191:
 1474              		.loc 1 223 0
 1475 0008 4889FB   		movq	%rdi, %rbx
 1476              	.LBB396:
 1477              	.LBB397:
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
 1478              		.loc 4 786 0
 1479 000b 81486080 		orl	$128, 96(%rax)
 1479      000000
 1480              	.LBE397:
 1481              	.LBE396:
 1482              		.loc 1 225 0
 1483 0012 488BBFD0 		movq	205264(%rdi), %rdi
 1483      210300
 1484              	.LVL192:
 1485 0019 E8000000 		call	_ZN12Fl_Help_View4loadEPKc
 1485      00
 1486              	.LVL193:
 1487              	.LBB398:
 1488              	.LBB399:
 1489              		.loc 2 346 0
 1490 001e 488B83D0 		movq	205264(%rbx), %rax
 1490      210300
 1491              	.LBE399:
 1492              	.LBE398:
 1493              		.loc 1 226 0
 1494 0025 488BBBA0 		movq	205216(%rbx), %rdi
 1494      210300
 1495              		.loc 1 227 0
 1496 002c 5B       		popq	%rbx
 1497              		.cfi_def_cfa_offset 8
 1498              	.LVL194:
 1499              	.LBB401:
 1500              	.LBB400:
 1501              		.loc 2 346 0
 1502 002d 488DB0A0 		leaq	160(%rax), %rsi
 1502      000000
 1503              	.LBE400:
 1504              	.LBE401:
 1505              		.loc 1 226 0
 1506 0034 E9000000 		jmp	_ZN9Fl_Window5labelEPKc
 1506      00
 1507              	.LVL195:
 1508              		.cfi_endproc
 1509              	.LFE616:
 1511              		.section	.text.unlikely._ZN14Fl_Help_Dialog4loadEPKc
 1512              	.LCOLDE20:
 1513              		.section	.text._ZN14Fl_Help_Dialog4loadEPKc
 1514              	.LHOTE20:
 1515              		.section	.text.unlikely._ZN14Fl_Help_Dialog8positionEii,"ax",@progbits
 1516              		.align 2
 1517              	.LCOLDB21:
 1518              		.section	.text._ZN14Fl_Help_Dialog8positionEii,"ax",@progbits
 1519              	.LHOTB21:
 1520              		.align 2
 1521              		.p2align 4,,15
 1522              		.globl	_ZN14Fl_Help_Dialog8positionEii
 1524              	_ZN14Fl_Help_Dialog8positionEii:
 1525              	.LFB617:
 1526              		.loc 1 229 0
 1527              		.cfi_startproc
 1528              	.LVL196:
 1529              		.loc 1 230 0
 1530 0000 488BBFA0 		movq	205216(%rdi), %rdi
 1530      210300
 1531              	.LVL197:
 1532              	.LBB402:
 1533              	.LBB403:
 332:fltk-1.3.4-1/FL/Fl_Widget.H **** 
 1534              		.loc 4 332 0
 1535 0007 488B07   		movq	(%rdi), %rax
 1536 000a 8B4F28   		movl	40(%rdi), %ecx
 1537 000d 448B472C 		movl	44(%rdi), %r8d
 1538 0011 488B4020 		movq	32(%rax), %rax
 1539 0015 FFE0     		jmp	*%rax
 1540              	.LVL198:
 1541              	.LBE403:
 1542              	.LBE402:
 1543              		.cfi_endproc
 1544              	.LFE617:
 1546              		.section	.text.unlikely._ZN14Fl_Help_Dialog8positionEii
 1547              	.LCOLDE21:
 1548              		.section	.text._ZN14Fl_Help_Dialog8positionEii
 1549              	.LHOTE21:
 1550              		.section	.text.unlikely._ZN14Fl_Help_Dialog6resizeEiiii,"ax",@progbits
 1551              		.align 2
 1552              	.LCOLDB22:
 1553              		.section	.text._ZN14Fl_Help_Dialog6resizeEiiii,"ax",@progbits
 1554              	.LHOTB22:
 1555              		.align 2
 1556              		.p2align 4,,15
 1557              		.globl	_ZN14Fl_Help_Dialog6resizeEiiii
 1559              	_ZN14Fl_Help_Dialog6resizeEiiii:
 1560              	.LFB618:
 1561              		.loc 1 233 0
 1562              		.cfi_startproc
 1563              	.LVL199:
 1564              		.loc 1 234 0
 1565 0000 488BBFA0 		movq	205216(%rdi), %rdi
 1565      210300
 1566              	.LVL200:
 1567 0007 488B07   		movq	(%rdi), %rax
 1568 000a FF6020   		jmp	*32(%rax)
 1569              	.LVL201:
 1570              		.cfi_endproc
 1571              	.LFE618:
 1573              		.section	.text.unlikely._ZN14Fl_Help_Dialog6resizeEiiii
 1574              	.LCOLDE22:
 1575              		.section	.text._ZN14Fl_Help_Dialog6resizeEiiii
 1576              	.LHOTE22:
 1577              		.section	.text.unlikely._ZN14Fl_Help_Dialog4showEv,"ax",@progbits
 1578              		.align 2
 1579              	.LCOLDB23:
 1580              		.section	.text._ZN14Fl_Help_Dialog4showEv,"ax",@progbits
 1581              	.LHOTB23:
 1582              		.align 2
 1583              		.p2align 4,,15
 1584              		.globl	_ZN14Fl_Help_Dialog4showEv
 1586              	_ZN14Fl_Help_Dialog4showEv:
 1587              	.LFB619:
 1588              		.loc 1 237 0
 1589              		.cfi_startproc
 1590              	.LVL202:
 1591              		.loc 1 238 0
 1592 0000 488BBFA0 		movq	205216(%rdi), %rdi
 1592      210300
 1593              	.LVL203:
 1594 0007 488B07   		movq	(%rdi), %rax
 1595 000a FF6028   		jmp	*40(%rax)
 1596              	.LVL204:
 1597              		.cfi_endproc
 1598              	.LFE619:
 1600              		.section	.text.unlikely._ZN14Fl_Help_Dialog4showEv
 1601              	.LCOLDE23:
 1602              		.section	.text._ZN14Fl_Help_Dialog4showEv
 1603              	.LHOTE23:
 1604              		.section	.text.unlikely._ZN14Fl_Help_Dialog4showEiPPc,"ax",@progbits
 1605              		.align 2
 1606              	.LCOLDB24:
 1607              		.section	.text._ZN14Fl_Help_Dialog4showEiPPc,"ax",@progbits
 1608              	.LHOTB24:
 1609              		.align 2
 1610              		.p2align 4,,15
 1611              		.globl	_ZN14Fl_Help_Dialog4showEiPPc
 1613              	_ZN14Fl_Help_Dialog4showEiPPc:
 1614              	.LFB620:
 1615              		.loc 1 241 0
 1616              		.cfi_startproc
 1617              	.LVL205:
 1618              	.LBB404:
 1619              	.LBB405:
 1620              		.file 9 "fltk-1.3.4-1/FL/Fl_Double_Window.H"
   1:fltk-1.3.4-1/FL/Fl_Double_Window.H **** //
   2:fltk-1.3.4-1/FL/Fl_Double_Window.H **** // "$Id: Fl_Double_Window.H 9637 2012-07-24 04:37:22Z matt $"
   3:fltk-1.3.4-1/FL/Fl_Double_Window.H **** //
   4:fltk-1.3.4-1/FL/Fl_Double_Window.H **** // Double-buffered window header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Double_Window.H **** //
   6:fltk-1.3.4-1/FL/Fl_Double_Window.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Double_Window.H **** //
   8:fltk-1.3.4-1/FL/Fl_Double_Window.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Double_Window.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Double_Window.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Double_Window.H **** //
  12:fltk-1.3.4-1/FL/Fl_Double_Window.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Double_Window.H **** //
  14:fltk-1.3.4-1/FL/Fl_Double_Window.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Double_Window.H **** //
  16:fltk-1.3.4-1/FL/Fl_Double_Window.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Double_Window.H **** //
  18:fltk-1.3.4-1/FL/Fl_Double_Window.H **** 
  19:fltk-1.3.4-1/FL/Fl_Double_Window.H **** /* \file
  20:fltk-1.3.4-1/FL/Fl_Double_Window.H ****    Fl_Double_Window widget . */
  21:fltk-1.3.4-1/FL/Fl_Double_Window.H **** 
  22:fltk-1.3.4-1/FL/Fl_Double_Window.H **** #ifndef Fl_Double_Window_H
  23:fltk-1.3.4-1/FL/Fl_Double_Window.H **** #define Fl_Double_Window_H
  24:fltk-1.3.4-1/FL/Fl_Double_Window.H **** 
  25:fltk-1.3.4-1/FL/Fl_Double_Window.H **** #include "Fl_Window.H"
  26:fltk-1.3.4-1/FL/Fl_Double_Window.H **** 
  27:fltk-1.3.4-1/FL/Fl_Double_Window.H **** /**
  28:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   The Fl_Double_Window provides a double-buffered window.
  29:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   If possible this will use the X double buffering extension (Xdbe).  If
  30:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   not, it will draw the window data into an off-screen pixmap, and then
  31:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   copy it to the on-screen window.
  32:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   <P>It is highly recommended that you put the following code before the
  33:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   first show() of <I>any</I> window in your program: </P>
  34:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   \code
  35:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   Fl::visual(FL_DOUBLE|FL_INDEX)
  36:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   \endcode
  37:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   This makes sure you can use Xdbe on servers where double buffering
  38:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   does not exist for every visual.
  39:fltk-1.3.4-1/FL/Fl_Double_Window.H **** */
  40:fltk-1.3.4-1/FL/Fl_Double_Window.H **** class FL_EXPORT Fl_Double_Window : public Fl_Window {
  41:fltk-1.3.4-1/FL/Fl_Double_Window.H **** protected:
  42:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   void flush(int eraseoverlay);
  43:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   /**
  44:fltk-1.3.4-1/FL/Fl_Double_Window.H ****     Force double buffering, even if the OS already buffers windows
  45:fltk-1.3.4-1/FL/Fl_Double_Window.H ****     (overlays need that on MacOS and Windows2000)
  46:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   */
  47:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   char force_doublebuffering_;
  48:fltk-1.3.4-1/FL/Fl_Double_Window.H **** public:
  49:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   void show();
  50:fltk-1.3.4-1/FL/Fl_Double_Window.H ****   void show(int a, char **b) {Fl_Window::show(a,b);}
 1621              		.loc 9 50 0
 1622 0000 488BBFA0 		movq	205216(%rdi), %rdi
 1622      210300
 1623              	.LVL206:
 1624 0007 E9000000 		jmp	_ZN9Fl_Window4showEiPPc
 1624      00
 1625              	.LVL207:
 1626              	.LBE405:
 1627              	.LBE404:
 1628              		.cfi_endproc
 1629              	.LFE620:
 1631              		.section	.text.unlikely._ZN14Fl_Help_Dialog4showEiPPc
 1632              	.LCOLDE24:
 1633              		.section	.text._ZN14Fl_Help_Dialog4showEiPPc
 1634              	.LHOTE24:
 1635              		.section	.text.unlikely._ZN14Fl_Help_Dialog8textsizeEi,"ax",@progbits
 1636              		.align 2
 1637              	.LCOLDB25:
 1638              		.section	.text._ZN14Fl_Help_Dialog8textsizeEi,"ax",@progbits
 1639              	.LHOTB25:
 1640              		.align 2
 1641              		.p2align 4,,15
 1642              		.globl	_ZN14Fl_Help_Dialog8textsizeEi
 1644              	_ZN14Fl_Help_Dialog8textsizeEi:
 1645              	.LFB621:
 1646              		.loc 1 245 0
 1647              		.cfi_startproc
 1648              	.LVL208:
 1649 0000 55       		pushq	%rbp
 1650              		.cfi_def_cfa_offset 16
 1651              		.cfi_offset 6, -16
 1652 0001 53       		pushq	%rbx
 1653              		.cfi_def_cfa_offset 24
 1654              		.cfi_offset 3, -24
 1655 0002 4889FB   		movq	%rdi, %rbx
 1656 0005 89F5     		movl	%esi, %ebp
 1657 0007 4883EC08 		subq	$8, %rsp
 1658              		.cfi_def_cfa_offset 32
 1659              		.loc 1 246 0
 1660 000b 488BBFD0 		movq	205264(%rdi), %rdi
 1660      210300
 1661              	.LVL209:
 1662              	.LBB406:
 1663              	.LBB407:
 342:fltk-1.3.4-1/FL/Fl_Help_View.H ****   /** Gets the default text size. */
 1664              		.loc 2 342 0
 1665 0012 89B7B404 		movl	%esi, 1204(%rdi)
 1665      0000
 1666 0018 E8000000 		call	_ZN12Fl_Help_View6formatEv
 1666      00
 1667              	.LVL210:
 1668              	.LBE407:
 1669              	.LBE406:
 1670              		.loc 1 248 0
 1671 001d 83FD08   		cmpl	$8, %ebp
 1672              		.loc 1 249 0
 1673 0020 488BBBB8 		movq	205240(%rbx), %rdi
 1673      210300
 1674              		.loc 1 248 0
 1675 0027 7F17     		jg	.L67
 1676              		.loc 1 249 0
 1677 0029 E8000000 		call	_ZN9Fl_Widget10deactivateEv
 1677      00
 1678              	.LVL211:
 1679              	.L68:
 1680              		.loc 1 256 0
 1681 002e 488BBBC0 		movq	205248(%rbx), %rdi
 1681      210300
 1682              		.loc 1 257 0
 1683 0035 4883C408 		addq	$8, %rsp
 1684              		.cfi_remember_state
 1685              		.cfi_def_cfa_offset 24
 1686 0039 5B       		popq	%rbx
 1687              		.cfi_def_cfa_offset 16
 1688              	.LVL212:
 1689 003a 5D       		popq	%rbp
 1690              		.cfi_def_cfa_offset 8
 1691              	.LVL213:
 1692              		.loc 1 256 0
 1693 003b E9000000 		jmp	_ZN9Fl_Widget8activateEv
 1693      00
 1694              	.LVL214:
 1695              		.p2align 4,,10
 1696              		.p2align 3
 1697              	.L67:
 1698              		.cfi_restore_state
 1699              		.loc 1 251 0
 1700 0040 E8000000 		call	_ZN9Fl_Widget8activateEv
 1700      00
 1701              	.LVL215:
 1702              		.loc 1 253 0
 1703 0045 83FD11   		cmpl	$17, %ebp
 1704 0048 7EE4     		jle	.L68
 1705              		.loc 1 254 0
 1706 004a 488BBBC0 		movq	205248(%rbx), %rdi
 1706      210300
 1707              		.loc 1 257 0
 1708 0051 4883C408 		addq	$8, %rsp
 1709              		.cfi_def_cfa_offset 24
 1710 0055 5B       		popq	%rbx
 1711              		.cfi_def_cfa_offset 16
 1712              	.LVL216:
 1713 0056 5D       		popq	%rbp
 1714              		.cfi_def_cfa_offset 8
 1715              	.LVL217:
 1716              		.loc 1 254 0
 1717 0057 E9000000 		jmp	_ZN9Fl_Widget10deactivateEv
 1717      00
 1718              	.LVL218:
 1719              		.cfi_endproc
 1720              	.LFE621:
 1722              		.section	.text.unlikely._ZN14Fl_Help_Dialog8textsizeEi
 1723              	.LCOLDE25:
 1724              		.section	.text._ZN14Fl_Help_Dialog8textsizeEi
 1725              	.LHOTE25:
 1726              		.section	.text.unlikely._ZN14Fl_Help_Dialog8textsizeEv,"ax",@progbits
 1727              		.align 2
 1728              	.LCOLDB26:
 1729              		.section	.text._ZN14Fl_Help_Dialog8textsizeEv,"ax",@progbits
 1730              	.LHOTB26:
 1731              		.align 2
 1732              		.p2align 4,,15
 1733              		.globl	_ZN14Fl_Help_Dialog8textsizeEv
 1735              	_ZN14Fl_Help_Dialog8textsizeEv:
 1736              	.LFB622:
 1737              		.loc 1 259 0
 1738              		.cfi_startproc
 1739              	.LVL219:
 1740 0000 488B87D0 		movq	205264(%rdi), %rax
 1740      210300
 1741              		.loc 1 260 0
 1742 0007 8B80B404 		movl	1204(%rax), %eax
 1742      0000
 1743              		.loc 1 261 0
 1744 000d C3       		ret
 1745              		.cfi_endproc
 1746              	.LFE622:
 1748              		.section	.text.unlikely._ZN14Fl_Help_Dialog8textsizeEv
 1749              	.LCOLDE26:
 1750              		.section	.text._ZN14Fl_Help_Dialog8textsizeEv
 1751              	.LHOTE26:
 1752              		.section	.text.unlikely._ZN14Fl_Help_Dialog7toplineEPKc,"ax",@progbits
 1753              		.align 2
 1754              	.LCOLDB27:
 1755              		.section	.text._ZN14Fl_Help_Dialog7toplineEPKc,"ax",@progbits
 1756              	.LHOTB27:
 1757              		.align 2
 1758              		.p2align 4,,15
 1759              		.globl	_ZN14Fl_Help_Dialog7toplineEPKc
 1761              	_ZN14Fl_Help_Dialog7toplineEPKc:
 1762              	.LFB623:
 1763              		.loc 1 263 0
 1764              		.cfi_startproc
 1765              	.LVL220:
 1766              		.loc 1 264 0
 1767 0000 488BBFD0 		movq	205264(%rdi), %rdi
 1767      210300
 1768              	.LVL221:
 1769 0007 E9000000 		jmp	_ZN12Fl_Help_View7toplineEPKc
 1769      00
 1770              	.LVL222:
 1771              		.cfi_endproc
 1772              	.LFE623:
 1774              		.section	.text.unlikely._ZN14Fl_Help_Dialog7toplineEPKc
 1775              	.LCOLDE27:
 1776              		.section	.text._ZN14Fl_Help_Dialog7toplineEPKc
 1777              	.LHOTE27:
 1778              		.section	.text.unlikely._ZN14Fl_Help_Dialog7toplineEi,"ax",@progbits
 1779              		.align 2
 1780              	.LCOLDB28:
 1781              		.section	.text._ZN14Fl_Help_Dialog7toplineEi,"ax",@progbits
 1782              	.LHOTB28:
 1783              		.align 2
 1784              		.p2align 4,,15
 1785              		.globl	_ZN14Fl_Help_Dialog7toplineEi
 1787              	_ZN14Fl_Help_Dialog7toplineEi:
 1788              	.LFB624:
 1789              		.loc 1 267 0
 1790              		.cfi_startproc
 1791              	.LVL223:
 1792              		.loc 1 268 0
 1793 0000 488BBFD0 		movq	205264(%rdi), %rdi
 1793      210300
 1794              	.LVL224:
 1795 0007 E9000000 		jmp	_ZN12Fl_Help_View7toplineEi
 1795      00
 1796              	.LVL225:
 1797              		.cfi_endproc
 1798              	.LFE624:
 1800              		.section	.text.unlikely._ZN14Fl_Help_Dialog7toplineEi
 1801              	.LCOLDE28:
 1802              		.section	.text._ZN14Fl_Help_Dialog7toplineEi
 1803              	.LHOTE28:
 1804              		.section	.text.unlikely._ZN14Fl_Help_Dialog5valueEPKc,"ax",@progbits
 1805              		.align 2
 1806              	.LCOLDB29:
 1807              		.section	.text._ZN14Fl_Help_Dialog5valueEPKc,"ax",@progbits
 1808              	.LHOTB29:
 1809              		.align 2
 1810              		.p2align 4,,15
 1811              		.globl	_ZN14Fl_Help_Dialog5valueEPKc
 1813              	_ZN14Fl_Help_Dialog5valueEPKc:
 1814              	.LFB625:
 1815              		.loc 1 271 0
 1816              		.cfi_startproc
 1817              	.LVL226:
 1818 0000 53       		pushq	%rbx
 1819              		.cfi_def_cfa_offset 16
 1820              		.cfi_offset 3, -16
 1821              		.loc 1 272 0
 1822 0001 488B87D0 		movq	205264(%rdi), %rax
 1822      210300
 1823              	.LVL227:
 1824              		.loc 1 271 0
 1825 0008 4889FB   		movq	%rdi, %rbx
 1826              	.LBB408:
 1827              	.LBB409:
 1828              		.loc 4 786 0
 1829 000b 81486080 		orl	$128, 96(%rax)
 1829      000000
 1830              	.LBE409:
 1831              	.LBE408:
 1832              		.loc 1 273 0
 1833 0012 488BBFD0 		movq	205264(%rdi), %rdi
 1833      210300
 1834              	.LVL228:
 1835 0019 E8000000 		call	_ZN12Fl_Help_View5valueEPKc
 1835      00
 1836              	.LVL229:
 1837              	.LBB410:
 1838              	.LBB411:
 1839              		.loc 2 346 0
 1840 001e 488B83D0 		movq	205264(%rbx), %rax
 1840      210300
 1841              	.LBE411:
 1842              	.LBE410:
 1843              		.loc 1 274 0
 1844 0025 488BBBA0 		movq	205216(%rbx), %rdi
 1844      210300
 1845              		.loc 1 275 0
 1846 002c 5B       		popq	%rbx
 1847              		.cfi_def_cfa_offset 8
 1848              	.LVL230:
 1849              	.LBB413:
 1850              	.LBB412:
 1851              		.loc 2 346 0
 1852 002d 488DB0A0 		leaq	160(%rax), %rsi
 1852      000000
 1853              	.LBE412:
 1854              	.LBE413:
 1855              		.loc 1 274 0
 1856 0034 E9000000 		jmp	_ZN9Fl_Window5labelEPKc
 1856      00
 1857              	.LVL231:
 1858              		.cfi_endproc
 1859              	.LFE625:
 1861              		.section	.text.unlikely._ZN14Fl_Help_Dialog5valueEPKc
 1862              	.LCOLDE29:
 1863              		.section	.text._ZN14Fl_Help_Dialog5valueEPKc
 1864              	.LHOTE29:
 1865              		.section	.text.unlikely._ZNK14Fl_Help_Dialog5valueEv,"ax",@progbits
 1866              		.align 2
 1867              	.LCOLDB30:
 1868              		.section	.text._ZNK14Fl_Help_Dialog5valueEv,"ax",@progbits
 1869              	.LHOTB30:
 1870              		.align 2
 1871              		.p2align 4,,15
 1872              		.globl	_ZNK14Fl_Help_Dialog5valueEv
 1874              	_ZNK14Fl_Help_Dialog5valueEv:
 1875              	.LFB626:
 1876              		.loc 1 277 0
 1877              		.cfi_startproc
 1878              	.LVL232:
 1879 0000 488B87D0 		movq	205264(%rdi), %rax
 1879      210300
 1880              		.loc 1 278 0
 1881 0007 488B80B8 		movq	1208(%rax), %rax
 1881      040000
 1882              		.loc 1 279 0
 1883 000e C3       		ret
 1884              		.cfi_endproc
 1885              	.LFE626:
 1887              		.section	.text.unlikely._ZNK14Fl_Help_Dialog5valueEv
 1888              	.LCOLDE30:
 1889              		.section	.text._ZNK14Fl_Help_Dialog5valueEv
 1890              	.LHOTE30:
 1891              		.section	.text.unlikely._ZN14Fl_Help_Dialog7visibleEv,"ax",@progbits
 1892              		.align 2
 1893              	.LCOLDB31:
 1894              		.section	.text._ZN14Fl_Help_Dialog7visibleEv,"ax",@progbits
 1895              	.LHOTB31:
 1896              		.align 2
 1897              		.p2align 4,,15
 1898              		.globl	_ZN14Fl_Help_Dialog7visibleEv
 1900              	_ZN14Fl_Help_Dialog7visibleEv:
 1901              	.LFB627:
 1902              		.loc 1 281 0
 1903              		.cfi_startproc
 1904              	.LVL233:
 1905 0000 488B87A0 		movq	205216(%rdi), %rax
 1905      210300
 1906              		.loc 1 282 0
 1907 0007 8B4060   		movl	96(%rax), %eax
 1908 000a D1E8     		shrl	%eax
 1909 000c 83F001   		xorl	$1, %eax
 1910 000f 83E001   		andl	$1, %eax
 1911              		.loc 1 283 0
 1912 0012 C3       		ret
 1913              		.cfi_endproc
 1914              	.LFE627:
 1916              		.section	.text.unlikely._ZN14Fl_Help_Dialog7visibleEv
 1917              	.LCOLDE31:
 1918              		.section	.text._ZN14Fl_Help_Dialog7visibleEv
 1919              	.LHOTE31:
 1920              		.section	.text.unlikely._ZN14Fl_Help_Dialog1wEv,"ax",@progbits
 1921              		.align 2
 1922              	.LCOLDB32:
 1923              		.section	.text._ZN14Fl_Help_Dialog1wEv,"ax",@progbits
 1924              	.LHOTB32:
 1925              		.align 2
 1926              		.p2align 4,,15
 1927              		.globl	_ZN14Fl_Help_Dialog1wEv
 1929              	_ZN14Fl_Help_Dialog1wEv:
 1930              	.LFB628:
 1931              		.loc 1 285 0
 1932              		.cfi_startproc
 1933              	.LVL234:
 1934 0000 488B87A0 		movq	205216(%rdi), %rax
 1934      210300
 1935              		.loc 1 286 0
 1936 0007 8B4028   		movl	40(%rax), %eax
 1937              		.loc 1 287 0
 1938 000a C3       		ret
 1939              		.cfi_endproc
 1940              	.LFE628:
 1942              		.section	.text.unlikely._ZN14Fl_Help_Dialog1wEv
 1943              	.LCOLDE32:
 1944              		.section	.text._ZN14Fl_Help_Dialog1wEv
 1945              	.LHOTE32:
 1946              		.section	.text.unlikely._ZN14Fl_Help_Dialog1xEv,"ax",@progbits
 1947              		.align 2
 1948              	.LCOLDB33:
 1949              		.section	.text._ZN14Fl_Help_Dialog1xEv,"ax",@progbits
 1950              	.LHOTB33:
 1951              		.align 2
 1952              		.p2align 4,,15
 1953              		.globl	_ZN14Fl_Help_Dialog1xEv
 1955              	_ZN14Fl_Help_Dialog1xEv:
 1956              	.LFB629:
 1957              		.loc 1 289 0
 1958              		.cfi_startproc
 1959              	.LVL235:
 1960 0000 488B87A0 		movq	205216(%rdi), %rax
 1960      210300
 1961              		.loc 1 290 0
 1962 0007 8B4020   		movl	32(%rax), %eax
 1963              		.loc 1 291 0
 1964 000a C3       		ret
 1965              		.cfi_endproc
 1966              	.LFE629:
 1968              		.section	.text.unlikely._ZN14Fl_Help_Dialog1xEv
 1969              	.LCOLDE33:
 1970              		.section	.text._ZN14Fl_Help_Dialog1xEv
 1971              	.LHOTE33:
 1972              		.section	.text.unlikely._ZN14Fl_Help_Dialog1yEv,"ax",@progbits
 1973              		.align 2
 1974              	.LCOLDB34:
 1975              		.section	.text._ZN14Fl_Help_Dialog1yEv,"ax",@progbits
 1976              	.LHOTB34:
 1977              		.align 2
 1978              		.p2align 4,,15
 1979              		.globl	_ZN14Fl_Help_Dialog1yEv
 1981              	_ZN14Fl_Help_Dialog1yEv:
 1982              	.LFB630:
 1983              		.loc 1 293 0
 1984              		.cfi_startproc
 1985              	.LVL236:
 1986 0000 488B87A0 		movq	205216(%rdi), %rax
 1986      210300
 1987              		.loc 1 294 0
 1988 0007 8B4024   		movl	36(%rax), %eax
 1989              		.loc 1 295 0
 1990 000a C3       		ret
 1991              		.cfi_endproc
 1992              	.LFE630:
 1994              		.section	.text.unlikely._ZN14Fl_Help_Dialog1yEv
 1995              	.LCOLDE34:
 1996              		.section	.text._ZN14Fl_Help_Dialog1yEv
 1997              	.LHOTE34:
 1998              		.text
 1999              	.Letext0:
 2000              		.section	.text.unlikely._ZN14Fl_Help_Dialog8cb_back_EP9Fl_ButtonPv
 2001              	.Letext_cold0:
 2002              		.file 10 "fltk-1.3.4-1/FL/fl_types.h"
 2003              		.file 11 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 2004              		.file 12 "/usr/include/x86_64-linux-gnu/bits/types.h"
 2005              		.file 13 "/usr/include/libio.h"
 2006              		.file 14 "fltk-1.3.4-1/FL/Enumerations.H"
 2007              		.file 15 "fltk-1.3.4-1/FL/Fl_Device.H"
 2008              		.file 16 "fltk-1.3.4-1/src/../FL/Fl_Help_Dialog.H"
 2009              		.file 17 "/usr/include/stdio.h"
 2010              		.file 18 "fltk-1.3.4-1/FL/fl_ask.H"
 2011              		.file 19 "/usr/include/string.h"
 2012              		.file 20 "fltk-1.3.4-1/src/flstring.h"
 2013              		.file 21 "fltk-1.3.4-1/FL/Fl_Shared_Image.H"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Help_Dialog.cxx
     /tmp/ccPnZPdd.s:16     .text._ZN14Fl_Help_Dialog8cb_back_EP9Fl_ButtonPv:0000000000000000 _ZN14Fl_Help_Dialog8cb_back_EP9Fl_ButtonPv
     /tmp/ccPnZPdd.s:168    .text._ZN14Fl_Help_Dialog11cb_forward_EP9Fl_ButtonPv:0000000000000000 _ZN14Fl_Help_Dialog11cb_forward_EP9Fl_ButtonPv
     /tmp/ccPnZPdd.s:320    .text._ZN14Fl_Help_Dialog8cb_find_EP8Fl_InputPv:0000000000000000 _ZN14Fl_Help_Dialog8cb_find_EP8Fl_InputPv
     /tmp/ccPnZPdd.s:368    .text._ZN14Fl_Help_Dialog11cb_smaller_EP9Fl_ButtonPv:0000000000000000 _ZN14Fl_Help_Dialog11cb_smaller_EP9Fl_ButtonPv
     /tmp/ccPnZPdd.s:459    .text._ZN14Fl_Help_Dialog10cb_larger_EP9Fl_ButtonPv:0000000000000000 _ZN14Fl_Help_Dialog10cb_larger_EP9Fl_ButtonPv
     /tmp/ccPnZPdd.s:550    .text._ZN14Fl_Help_Dialog8cb_view_EP12Fl_Help_ViewPv:0000000000000000 _ZN14Fl_Help_Dialog8cb_view_EP12Fl_Help_ViewPv
     /tmp/ccPnZPdd.s:841    .text._ZN14Fl_Help_DialogC2Ev:0000000000000000 _ZN14Fl_Help_DialogC2Ev
     /tmp/ccPnZPdd.s:841    .text._ZN14Fl_Help_DialogC2Ev:0000000000000000 _ZN14Fl_Help_DialogC1Ev
     /tmp/ccPnZPdd.s:1372   .text._ZN14Fl_Help_DialogD2Ev:0000000000000000 _ZN14Fl_Help_DialogD2Ev
     /tmp/ccPnZPdd.s:1372   .text._ZN14Fl_Help_DialogD2Ev:0000000000000000 _ZN14Fl_Help_DialogD1Ev
     /tmp/ccPnZPdd.s:1410   .text._ZN14Fl_Help_Dialog1hEv:0000000000000000 _ZN14Fl_Help_Dialog1hEv
     /tmp/ccPnZPdd.s:1436   .text._ZN14Fl_Help_Dialog4hideEv:0000000000000000 _ZN14Fl_Help_Dialog4hideEv
     /tmp/ccPnZPdd.s:1463   .text._ZN14Fl_Help_Dialog4loadEPKc:0000000000000000 _ZN14Fl_Help_Dialog4loadEPKc
     /tmp/ccPnZPdd.s:1524   .text._ZN14Fl_Help_Dialog8positionEii:0000000000000000 _ZN14Fl_Help_Dialog8positionEii
     /tmp/ccPnZPdd.s:1559   .text._ZN14Fl_Help_Dialog6resizeEiiii:0000000000000000 _ZN14Fl_Help_Dialog6resizeEiiii
     /tmp/ccPnZPdd.s:1586   .text._ZN14Fl_Help_Dialog4showEv:0000000000000000 _ZN14Fl_Help_Dialog4showEv
     /tmp/ccPnZPdd.s:1613   .text._ZN14Fl_Help_Dialog4showEiPPc:0000000000000000 _ZN14Fl_Help_Dialog4showEiPPc
     /tmp/ccPnZPdd.s:1644   .text._ZN14Fl_Help_Dialog8textsizeEi:0000000000000000 _ZN14Fl_Help_Dialog8textsizeEi
     /tmp/ccPnZPdd.s:1735   .text._ZN14Fl_Help_Dialog8textsizeEv:0000000000000000 _ZN14Fl_Help_Dialog8textsizeEv
     /tmp/ccPnZPdd.s:1761   .text._ZN14Fl_Help_Dialog7toplineEPKc:0000000000000000 _ZN14Fl_Help_Dialog7toplineEPKc
     /tmp/ccPnZPdd.s:1787   .text._ZN14Fl_Help_Dialog7toplineEi:0000000000000000 _ZN14Fl_Help_Dialog7toplineEi
     /tmp/ccPnZPdd.s:1813   .text._ZN14Fl_Help_Dialog5valueEPKc:0000000000000000 _ZN14Fl_Help_Dialog5valueEPKc
     /tmp/ccPnZPdd.s:1874   .text._ZNK14Fl_Help_Dialog5valueEv:0000000000000000 _ZNK14Fl_Help_Dialog5valueEv
     /tmp/ccPnZPdd.s:1900   .text._ZN14Fl_Help_Dialog7visibleEv:0000000000000000 _ZN14Fl_Help_Dialog7visibleEv
     /tmp/ccPnZPdd.s:1929   .text._ZN14Fl_Help_Dialog1wEv:0000000000000000 _ZN14Fl_Help_Dialog1wEv
     /tmp/ccPnZPdd.s:1955   .text._ZN14Fl_Help_Dialog1xEv:0000000000000000 _ZN14Fl_Help_Dialog1xEv
     /tmp/ccPnZPdd.s:1981   .text._ZN14Fl_Help_Dialog1yEv:0000000000000000 _ZN14Fl_Help_Dialog1yEv
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
                           .group:0000000000000000 wm4.Fl_Input_.H.23.0358bf58b9391621e5f90e01bc1d1bea
                           .group:0000000000000000 wm4.Fl_Valuator.H.23.23b07accce686671a831f611164842d3
                           .group:0000000000000000 wm4.Fl_Slider.H.30.63744dea3b9f91e5e3b5b1297ae0bb9d
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
                           .group:0000000000000000 wm4.filename.H.30.99b1a2d49dfb41118316d590634dc617
                           .group:0000000000000000 wm4.dirent.h.47.161c7c9f25cde890467e06f48d01a72b
                           .group:0000000000000000 wm4.dirent.h.85.0c1ce7006e3db36b221c55829d522c5f
                           .group:0000000000000000 wm4.posix1_lim.h.25.987ae6dec0c7e3b6b8ef0e87cdcaa773
                           .group:0000000000000000 wm4.local_lim.h.25.97ee4129efb08ad296101237bcd3401b
                           .group:0000000000000000 wm4.limits.h.2.9ff59823e8adcf4502d980ef41362326
                           .group:0000000000000000 wm4.local_lim.h.42.9dc3935e0e3b94e23cda247e4e39bd8b
                           .group:0000000000000000 wm4.dirent.h.236.46915e1a412771773f9eef5606c91031
                           .group:0000000000000000 wm4.stddef.h.161.38688f2eb958a8ed58fdb61ffe554c94
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd
                           .group:0000000000000000 wm4.fl_ask.H.24.be48b4476a0524cdb7b19216c6f73157

UNDEFINED SYMBOLS
_ZN9Fl_Widget8activateEv
strcmp
_ZN12Fl_Help_View4loadEPKc
_ZN12Fl_Help_View7toplineEi
_ZN9Fl_Widget10deactivateEv
_ZN12Fl_Help_View4findEPKci
_ZN12Fl_Help_View6formatEv
fl_strlcpy
_ZN9Fl_Window5labelEPKc
memmove
_Znwm
_ZN16Fl_Double_WindowC1EiiPKc
_ZN8Fl_GroupC1EiiiiPKc
_ZN9Fl_ButtonC1EiiiiPKc
_ZN9Fl_Widget7tooltipEPKc
_ZN8Fl_InputC1EiiiiPKc
_ZN8Fl_Group3endEv
_ZN6Fl_BoxC1EiiiiPKc
_ZN8Fl_Group7currentEv
_ZN12Fl_Help_ViewC1EiiiiPKc
_ZN9Fl_Window11size_range_Ev
_Z18fl_register_imagesv
_ZN9Fl_Window4showEiPPc
_ZN12Fl_Help_View7toplineEPKc
_ZN12Fl_Help_View5valueEPKc
