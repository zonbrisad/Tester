   1              		.file	"Fl_Bitmap.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN9Fl_Bitmap4drawEiiiiii,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN9Fl_Bitmap4drawEiiiiii,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN9Fl_Bitmap4drawEiiiiii
  12              	.Ltext_cold0:
  13              		.section	.text._ZN9Fl_Bitmap4drawEiiiiii
  14              		.globl	_ZN9Fl_Bitmap4drawEiiiiii
  16              	_ZN9Fl_Bitmap4drawEiiiiii:
  17              	.LFB556:
  18              		.file 1 "fltk-1.3.4-1/src/Fl_Bitmap.cxx"
   1:fltk-1.3.4-1/src/Fl_Bitmap.cxx **** ...
  19              		.loc 1 242 0
  20              		.cfi_startproc
  21              	.LVL0:
  22 0000 4883EC08 		subq	$8, %rsp
  23              		.cfi_def_cfa_offset 16
  24              		.loc 1 242 0
  25 0004 4989FA   		movq	%rdi, %r10
  26              		.loc 1 243 0
  27 0007 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
  27      000000
  28              	.LVL1:
  29 000e 448B5C24 		movl	16(%rsp), %r11d
  29      10
  30 0013 488B07   		movq	(%rdi), %rax
  31 0016 4153     		pushq	%r11
  32              		.cfi_def_cfa_offset 24
  33 0018 4151     		pushq	%r9
  34              		.cfi_def_cfa_offset 32
  35 001a 4589C1   		movl	%r8d, %r9d
  36              	.LVL2:
  37 001d 4189C8   		movl	%ecx, %r8d
  38              	.LVL3:
  39 0020 89D1     		movl	%edx, %ecx
  40              	.LVL4:
  41 0022 89F2     		movl	%esi, %edx
  42              	.LVL5:
  43 0024 4C89D6   		movq	%r10, %rsi
  44              	.LVL6:
  45 0027 FF90A801 		call	*424(%rax)
  45      0000
  46              	.LVL7:
  47              		.loc 1 244 0
  48 002d 4883C418 		addq	$24, %rsp
  49              		.cfi_def_cfa_offset 8
  50 0031 C3       		ret
  51              		.cfi_endproc
  52              	.LFE556:
  54              		.section	.text.unlikely._ZN9Fl_Bitmap4drawEiiiiii
  55              	.LCOLDE0:
  56              		.section	.text._ZN9Fl_Bitmap4drawEiiiiii
  57              	.LHOTE0:
  58              		.section	.text.unlikely._ZN9Fl_Bitmap5labelEP9Fl_Widget,"ax",@progbits
  59              		.align 2
  60              	.LCOLDB1:
  61              		.section	.text._ZN9Fl_Bitmap5labelEP9Fl_Widget,"ax",@progbits
  62              	.LHOTB1:
  63              		.align 2
  64              		.p2align 4,,15
  65              		.globl	_ZN9Fl_Bitmap5labelEP9Fl_Widget
  67              	_ZN9Fl_Bitmap5labelEP9Fl_Widget:
  68              	.LFB564:
  69              		.loc 1 385 0
  70              		.cfi_startproc
  71              	.LVL8:
  72              	.LBB74:
  73              	.LBB75:
  74              		.file 2 "fltk-1.3.4-1/FL/Fl_Widget.H"
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
  75              		.loc 2 521 0
  76 0000 48897E38 		movq	%rdi, 56(%rsi)
  77              	.LVL9:
  78 0004 C3       		ret
  79              	.LBE75:
  80              	.LBE74:
  81              		.cfi_endproc
  82              	.LFE564:
  84              		.section	.text.unlikely._ZN9Fl_Bitmap5labelEP9Fl_Widget
  85              	.LCOLDE1:
  86              		.section	.text._ZN9Fl_Bitmap5labelEP9Fl_Widget
  87              	.LHOTE1:
  88              		.section	.text.unlikely._ZN9Fl_Bitmap7uncacheEv,"ax",@progbits
  89              		.align 2
  90              	.LCOLDB2:
  91              		.section	.text._ZN9Fl_Bitmap7uncacheEv,"ax",@progbits
  92              	.LHOTB2:
  93              		.align 2
  94              		.p2align 4,,15
  95              		.globl	_ZN9Fl_Bitmap7uncacheEv
  97              	_ZN9Fl_Bitmap7uncacheEv:
  98              	.LFB563:
  99              		.loc 1 374 0
 100              		.cfi_startproc
 101              	.LVL10:
 102              		.loc 1 375 0
 103 0000 8B7734   		movl	52(%rdi), %esi
 104 0003 85F6     		testl	%esi, %esi
 105 0005 7509     		jne	.L13
 106              		.loc 1 383 0
 107 0007 C3       		ret
 108 0008 0F1F8400 		.p2align 4,,10
 108      00000000 
 109              		.p2align 3
 110              	.L13:
 111              		.loc 1 374 0
 112 0010 53       		pushq	%rbx
 113              		.cfi_def_cfa_offset 16
 114              		.cfi_offset 3, -16
 115 0011 4889FB   		movq	%rdi, %rbx
 116              	.LVL11:
 117              	.LBB76:
 118              	.LBB77:
 119              		.loc 1 162 0
 120 0014 488B3D00 		movq	fl_display(%rip), %rdi
 120      000000
 121              	.LVL12:
 122 001b E8000000 		call	XFreePixmap
 122      00
 123              	.LVL13:
 124              	.LBE77:
 125              	.LBE76:
 126              		.loc 1 381 0
 127 0020 C7433400 		movl	$0, 52(%rbx)
 127      000000
 128              		.loc 1 383 0
 129 0027 5B       		popq	%rbx
 130              		.cfi_restore 3
 131              		.cfi_def_cfa_offset 8
 132              	.LVL14:
 133 0028 C3       		ret
 134              		.cfi_endproc
 135              	.LFE563:
 137              		.section	.text.unlikely._ZN9Fl_Bitmap7uncacheEv
 138              	.LCOLDE2:
 139              		.section	.text._ZN9Fl_Bitmap7uncacheEv
 140              	.LHOTE2:
 141              		.section	.text.unlikely._ZN9Fl_BitmapD2Ev,"ax",@progbits
 142              		.align 2
 143              	.LCOLDB3:
 144              		.section	.text._ZN9Fl_BitmapD2Ev,"ax",@progbits
 145              	.LHOTB3:
 146              		.align 2
 147              		.p2align 4,,15
 148              		.globl	_ZN9Fl_BitmapD2Ev
 150              	_ZN9Fl_BitmapD2Ev:
 151              	.LFB560:
 152              		.loc 1 369 0
 153              		.cfi_startproc
 154              	.LVL15:
 155 0000 53       		pushq	%rbx
 156              		.cfi_def_cfa_offset 16
 157              		.cfi_offset 3, -16
 158              	.LBB78:
 159              	.LBB79:
 160              	.LBB80:
 161              		.loc 1 375 0
 162 0001 8B7734   		movl	52(%rdi), %esi
 163              	.LBE80:
 164              	.LBE79:
 165              	.LBE78:
 166              		.loc 1 369 0
 167 0004 4889FB   		movq	%rdi, %rbx
 168              	.LBB87:
 169 0007 48C70700 		movq	$_ZTV9Fl_Bitmap+16, (%rdi)
 169      000000
 170              	.LVL16:
 171              	.LBB85:
 172              	.LBB83:
 173              		.loc 1 375 0
 174 000e 85F6     		testl	%esi, %esi
 175 0010 751E     		jne	.L24
 176              	.LVL17:
 177              	.L15:
 178              	.LBE83:
 179              	.LBE85:
 180              		.loc 1 371 0
 181 0012 8B4330   		movl	48(%rbx), %eax
 182 0015 85C0     		testl	%eax, %eax
 183 0017 740E     		je	.L16
 184              		.loc 1 371 0 is_stmt 0 discriminator 1
 185 0019 488B7B28 		movq	40(%rbx), %rdi
 186 001d 4885FF   		testq	%rdi, %rdi
 187 0020 7405     		je	.L16
 188              		.loc 1 371 0 discriminator 2
 189 0022 E8000000 		call	_ZdaPv
 189      00
 190              	.LVL18:
 191              	.L16:
 192              		.loc 1 369 0 is_stmt 1
 193 0027 4889DF   		movq	%rbx, %rdi
 194              	.LBE87:
 195              		.loc 1 372 0
 196 002a 5B       		popq	%rbx
 197              		.cfi_remember_state
 198              		.cfi_def_cfa_offset 8
 199              	.LVL19:
 200              	.LBB88:
 201              		.loc 1 369 0
 202 002b E9000000 		jmp	_ZN8Fl_ImageD2Ev
 202      00
 203              	.LVL20:
 204              		.p2align 4,,10
 205              		.p2align 3
 206              	.L24:
 207              		.cfi_restore_state
 208              	.LBB86:
 209              	.LBB84:
 210              	.LBB81:
 211              	.LBB82:
 212              		.loc 1 162 0
 213 0030 488B3D00 		movq	fl_display(%rip), %rdi
 213      000000
 214 0037 E8000000 		call	XFreePixmap
 214      00
 215              	.LVL21:
 216              	.LBE82:
 217              	.LBE81:
 218              		.loc 1 381 0
 219 003c C7433400 		movl	$0, 52(%rbx)
 219      000000
 220 0043 EBCD     		jmp	.L15
 221              	.LBE84:
 222              	.LBE86:
 223              	.LBE88:
 224              		.cfi_endproc
 225              	.LFE560:
 227              		.section	.text.unlikely._ZN9Fl_BitmapD2Ev
 228              	.LCOLDE3:
 229              		.section	.text._ZN9Fl_BitmapD2Ev
 230              	.LHOTE3:
 231              		.globl	_ZN9Fl_BitmapD1Ev
 232              		.set	_ZN9Fl_BitmapD1Ev,_ZN9Fl_BitmapD2Ev
 233              		.section	.text.unlikely._ZN9Fl_BitmapD0Ev,"ax",@progbits
 234              		.align 2
 235              	.LCOLDB4:
 236              		.section	.text._ZN9Fl_BitmapD0Ev,"ax",@progbits
 237              	.LHOTB4:
 238              		.align 2
 239              		.p2align 4,,15
 240              		.globl	_ZN9Fl_BitmapD0Ev
 242              	_ZN9Fl_BitmapD0Ev:
 243              	.LFB562:
 244              		.loc 1 369 0
 245              		.cfi_startproc
 246              	.LVL22:
 247 0000 53       		pushq	%rbx
 248              		.cfi_def_cfa_offset 16
 249              		.cfi_offset 3, -16
 250              		.loc 1 369 0
 251 0001 4889FB   		movq	%rdi, %rbx
 252              		.loc 1 372 0
 253 0004 E8000000 		call	_ZN9Fl_BitmapD1Ev
 253      00
 254              	.LVL23:
 255 0009 4889DF   		movq	%rbx, %rdi
 256 000c 5B       		popq	%rbx
 257              		.cfi_def_cfa_offset 8
 258              	.LVL24:
 259 000d E9000000 		jmp	_ZdlPv
 259      00
 260              	.LVL25:
 261              		.cfi_endproc
 262              	.LFE562:
 264              		.section	.text.unlikely._ZN9Fl_BitmapD0Ev
 265              	.LCOLDE4:
 266              		.section	.text._ZN9Fl_BitmapD0Ev
 267              	.LHOTE4:
 268              		.section	.text.unlikely._ZN9Fl_Bitmap5labelEP12Fl_Menu_Item,"ax",@progbits
 269              		.align 2
 270              	.LCOLDB5:
 271              		.section	.text._ZN9Fl_Bitmap5labelEP12Fl_Menu_Item,"ax",@progbits
 272              	.LHOTB5:
 273              		.align 2
 274              		.p2align 4,,15
 275              		.globl	_ZN9Fl_Bitmap5labelEP12Fl_Menu_Item
 277              	_ZN9Fl_Bitmap5labelEP12Fl_Menu_Item:
 278              	.LFB565:
 279              		.loc 1 389 0
 280              		.cfi_startproc
 281              	.LVL26:
 282 0000 55       		pushq	%rbp
 283              		.cfi_def_cfa_offset 16
 284              		.cfi_offset 6, -16
 285 0001 53       		pushq	%rbx
 286              		.cfi_def_cfa_offset 24
 287              		.cfi_offset 3, -24
 288 0002 4889FD   		movq	%rdi, %rbp
 289 0005 4889F3   		movq	%rsi, %rbx
 290              		.loc 1 390 0
 291 0008 BA000000 		movl	$_ZN8Fl_Image7measureEPK8Fl_LabelRiS3_, %edx
 291      00
 292 000d BE000000 		movl	$_ZN8Fl_Image9labeltypeEPK8Fl_Labeliiiij, %esi
 292      00
 293              	.LVL27:
 294              		.loc 1 389 0
 295 0012 4883EC08 		subq	$8, %rsp
 296              		.cfi_def_cfa_offset 32
 297              		.loc 1 390 0
 298 0016 BF070000 		movl	$7, %edi
 298      00
 299              	.LVL28:
 300 001b E8000000 		call	_ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
 300      00
 301              	.LVL29:
 302              	.LBB89:
 303              	.LBB90:
 304              		.file 3 "fltk-1.3.4-1/FL/Fl_Menu_Item.H"
   1:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
   2:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // "$Id: Fl_Menu_Item.H 11786 2016-06-18 00:32:18Z greg.ercolano $"
   3:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
   4:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // Menu item header file for the Fast Light Tool Kit (FLTK).
   5:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
   6:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // Copyright 1998-2010 by Bill Spitzak and others.
   7:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
   8:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // This library is free software. Distribution and use rights are outlined in
   9:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // the file "COPYING" which should have been included with this file.  If this
  10:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // file is missing or damaged, see the license at:
  11:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
  12:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //     http://www.fltk.org/COPYING.php
  13:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
  14:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // Please report all bugs and problems on the following page:
  15:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
  16:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //     http://www.fltk.org/str.php
  17:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** //
  18:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  19:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #ifndef Fl_Menu_Item_H
  20:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #define Fl_Menu_Item_H
  21:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  22:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #  include "Fl_Widget.H"
  23:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #  include "Fl_Image.H"
  24:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  25:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #  if defined(__APPLE__) && defined(check)
  26:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #    undef check
  27:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** #  endif
  28:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  29:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** // doxygen needs the following line to enable e.g. ::FL_MENU_TOGGLE to link to the enums
  30:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** /// @file
  31:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  32:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** enum { // values for flags:
  33:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_INACTIVE = 1,		///< Deactivate menu item (gray out)
  34:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_TOGGLE= 2,		///< Item is a checkbox toggle (shows checkbox for on/off state)
  35:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_VALUE = 4,		///< The on/off state for checkbox/radio buttons (if set, state is 'on')
  36:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_RADIO = 8,		///< Item is a radio button (one checkbox of many can be on)
  37:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_INVISIBLE = 0x10,	///< Item will not show up (shortcut will work)
  38:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_SUBMENU_POINTER = 0x20,	///< Indicates user_data() is a pointer to another menu array
  39:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_SUBMENU = 0x40,		///< This item is a submenu to other items
  40:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_DIVIDER = 0x80,	///< Creates divider line below this item. Also ends a group of radio but
  41:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   FL_MENU_HORIZONTAL = 0x100	///< ??? -- reserved
  42:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** };
  43:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  44:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** extern FL_EXPORT Fl_Shortcut fl_old_shortcut(const char*);
  45:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  46:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** class Fl_Menu_;
  47:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  48:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** /**
  49:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   The Fl_Menu_Item structure defines a single menu item that
  50:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   is used by the Fl_Menu_ class.  
  51:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \code
  52:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   struct Fl_Menu_Item {
  53:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    const char*   text;     // label()
  54:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    ulong         shortcut_;
  55:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    Fl_Callback*  callback_;
  56:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    void*         user_data_;
  57:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    int           flags;
  58:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    uchar         labeltype_;
  59:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    uchar         labelfont_;
  60:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    uchar         labelsize_;
  61:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    uchar         labelcolor_;
  62:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   };
  63:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   
  64:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   enum { // values for flags:
  65:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_INACTIVE   = 1,      // Deactivate menu item (gray out)
  66:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_TOGGLE     = 2,      // Item is a checkbox toggle (shows checkbox for on/off state)
  67:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_VALUE      = 4,      // The on/off state for checkbox/radio buttons (if set, state is 'o
  68:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_RADIO      = 8,      // Item is a radio button (one checkbox of many can be on)
  69:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_INVISIBLE  = 0x10,   // Item will not show up (shortcut will work)
  70:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_SUBMENU_POINTER = 0x20,   // Indicates user_data() is a pointer to another menu array
  71:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_SUBMENU         = 0x40,   // This item is a submenu to other items
  72:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_DIVIDER    = 0x80,   // Creates divider line below this item. Also ends a group of radio
  73:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    FL_MENU_HORIZONTAL = 0x100   // ??? -- reserved
  74:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   };
  75:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \endcode
  76:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Typically menu items are statically defined; for example:
  77:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \code
  78:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Menu_Item popup[] = {
  79:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&alpha",    FL_ALT+'a', the_cb, (void*)1},
  80:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&beta",     FL_ALT+'b', the_cb, (void*)2},
  81:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"gamma",     FL_ALT+'c', the_cb, (void*)3, FL_MENU_DIVIDER},
  82:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&strange",  0,          strange_cb},
  83:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&charm",    0,          charm_cb},
  84:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"&truth",    0,          truth_cb},
  85:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"b&eauty",   0,          beauty_cb},
  86:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"sub&menu",  0,          0, 0, FL_SUBMENU},
  87:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"one"},
  88:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"two"},
  89:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"three"},
  90:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {0},
  91:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"inactive", FL_ALT+'i', 0, 0, FL_MENU_INACTIVE|FL_MENU_DIVIDER},
  92:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"invisible",FL_ALT+'i', 0, 0, FL_MENU_INVISIBLE},
  93:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"check",    FL_ALT+'i', 0, 0, FL_MENU_TOGGLE|FL_MENU_VALUE},
  94:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {"box",      FL_ALT+'i', 0, 0, FL_MENU_TOGGLE},
  95:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****    {0}};
  96:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \endcode
  97:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   produces:
  98:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
  99:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \image html   menu.png
 100:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   \image latex  menu.png "menu" width=10cm
 101:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 102:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   A submenu title is identified by the bit FL_SUBMENU in the 
 103:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   flags field, and ends with a label() that is NULL.
 104:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   You can nest menus to any depth.  A pointer to the first item in the
 105:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   submenu can be treated as an Fl_Menu array itself.  It is also
 106:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   possible to make separate submenu arrays with FL_SUBMENU_POINTER flags.
 107:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 108:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   You should use the method functions to access structure members and
 109:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   not access them directly to avoid compatibility problems with future
 110:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   releases of FLTK.
 111:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** */
 112:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** struct FL_EXPORT Fl_Menu_Item {
 113:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const char *text;	    ///< menu item text, returned by label()
 114:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int shortcut_;	    ///< menu item shortcut
 115:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Callback *callback_;   ///< menu item callback
 116:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void *user_data_;	    ///< menu item user_data for the menu's callback
 117:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   int flags;		    ///< menu item flags like FL_MENU_TOGGLE, FL_MENU_RADIO
 118:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   uchar labeltype_;	    ///< how the menu item text looks like
 119:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Font labelfont_;	    ///< which font for this menu item text
 120:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Fontsize labelsize_;   ///< size of menu item text
 121:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Color labelcolor_;	    ///< menu item text color
 122:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 123:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   // advance N items, skipping submenus:
 124:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const Fl_Menu_Item *next(int=1) const;
 125:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 126:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 127:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Advances a pointer by n items through a menu array, skipping
 128:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     the contents of submenus and invisible items. There are two calls so
 129:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     that you can advance through const and non-const data.
 130:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 131:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Menu_Item *next(int i=1) {
 132:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     return (Fl_Menu_Item*)(((const Fl_Menu_Item*)this)->next(i));}
 133:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 134:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Returns the first menu item, same as next(0). */
 135:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const Fl_Menu_Item *first() const { return next(0); }
 136:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 137:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /** Returns the first menu item, same as next(0). */
 138:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   Fl_Menu_Item *first() { return next(0); }
 139:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 140:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   // methods on menu items:
 141:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**
 142:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     Returns the title of the item.
 143:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     A NULL here indicates the end of the menu (or of a submenu).
 144:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     A '&' in the item will print an underscore under the next letter,
 145:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     and if the menu is popped up that letter will be a "shortcut" to pick
 146:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****     that item.  To get a real '&' put two in a row.
 147:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   */
 148:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   const char* label() const {return text;}
 149:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 150:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**    See const char* Fl_Menu_Item::label() const   */
 151:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void label(const char* a) {text=a;}
 152:fltk-1.3.4-1/FL/Fl_Menu_Item.H **** 
 153:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   /**    See const char* Fl_Menu_Item::label() const   */
 154:fltk-1.3.4-1/FL/Fl_Menu_Item.H ****   void label(Fl_Labeltype a,const char* b) {labeltype_ = a; text = b;}
 305              		.loc 3 154 0
 306 0020 48892B   		movq	%rbp, (%rbx)
 307              	.LVL30:
 308 0023 C6432407 		movb	$7, 36(%rbx)
 309              	.LBE90:
 310              	.LBE89:
 311              		.loc 1 392 0
 312 0027 4883C408 		addq	$8, %rsp
 313              		.cfi_def_cfa_offset 24
 314 002b 5B       		popq	%rbx
 315              		.cfi_def_cfa_offset 16
 316              	.LVL31:
 317 002c 5D       		popq	%rbp
 318              		.cfi_def_cfa_offset 8
 319              	.LVL32:
 320 002d C3       		ret
 321              		.cfi_endproc
 322              	.LFE565:
 324              		.section	.text.unlikely._ZN9Fl_Bitmap5labelEP12Fl_Menu_Item
 325              	.LCOLDE5:
 326              		.section	.text._ZN9Fl_Bitmap5labelEP12Fl_Menu_Item
 327              	.LHOTE5:
 328              		.section	.text.unlikely._ZN9Fl_Bitmap4copyEii,"ax",@progbits
 329              		.align 2
 330              	.LCOLDB6:
 331              		.section	.text._ZN9Fl_Bitmap4copyEii,"ax",@progbits
 332              	.LHOTB6:
 333              		.align 2
 334              		.p2align 4,,15
 335              		.globl	_ZN9Fl_Bitmap4copyEii
 337              	_ZN9Fl_Bitmap4copyEii:
 338              	.LFB566:
 339              		.loc 1 394 0
 340              		.cfi_startproc
 341              	.LVL33:
 342 0000 4157     		pushq	%r15
 343              		.cfi_def_cfa_offset 16
 344              		.cfi_offset 15, -16
 345 0002 4156     		pushq	%r14
 346              		.cfi_def_cfa_offset 24
 347              		.cfi_offset 14, -24
 348 0004 4989FE   		movq	%rdi, %r14
 349 0007 4155     		pushq	%r13
 350              		.cfi_def_cfa_offset 32
 351              		.cfi_offset 13, -32
 352 0009 4154     		pushq	%r12
 353              		.cfi_def_cfa_offset 40
 354              		.cfi_offset 12, -40
 355 000b 4189F5   		movl	%esi, %r13d
 356 000e 55       		pushq	%rbp
 357              		.cfi_def_cfa_offset 48
 358              		.cfi_offset 6, -48
 359 000f 53       		pushq	%rbx
 360              		.cfi_def_cfa_offset 56
 361              		.cfi_offset 3, -56
 362 0010 4883EC38 		subq	$56, %rsp
 363              		.cfi_def_cfa_offset 112
 364 0014 8B4708   		movl	8(%rdi), %eax
 365              	.LVL34:
 366              		.loc 1 394 0
 367 0017 89542424 		movl	%edx, 36(%rsp)
 368              		.loc 1 399 0
 369 001b 39C6     		cmpl	%eax, %esi
 370 001d 0F84B801 		je	.L54
 370      0000
 371              	.L30:
 372              		.loc 1 408 0
 373 0023 4585ED   		testl	%r13d, %r13d
 374 0026 0F8E4302 		jle	.L42
 374      0000
 375 002c 8B542424 		movl	36(%rsp), %edx
 376              	.LVL35:
 377 0030 85D2     		testl	%edx, %edx
 378 0032 0F8E3702 		jle	.L42
 378      0000
 379              	.LVL36:
 380              		.loc 1 423 0
 381 0038 99       		cltd
 382              		.loc 1 425 0
 383 0039 8B5C2424 		movl	36(%rsp), %ebx
 384              		.loc 1 429 0
 385 003d 458D7D07 		leal	7(%r13), %r15d
 386              		.loc 1 423 0
 387 0041 41F7FD   		idivl	%r13d
 388              		.loc 1 429 0
 389 0044 41C1FF03 		sarl	$3, %r15d
 390              		.loc 1 423 0
 391 0048 89C5     		movl	%eax, %ebp
 392 004a 418B460C 		movl	12(%r14), %eax
 393 004e 4189D4   		movl	%edx, %r12d
 394              	.LVL37:
 395              		.loc 1 429 0
 396 0051 440FAFFB 		imull	%ebx, %r15d
 397              		.loc 1 425 0
 398 0055 99       		cltd
 399              	.LVL38:
 400 0056 F7FB     		idivl	%ebx
 401              		.loc 1 429 0
 402 0058 4D63FF   		movslq	%r15d, %r15
 403 005b 4C89FF   		movq	%r15, %rdi
 404              	.LVL39:
 405              		.loc 1 425 0
 406 005e 89542418 		movl	%edx, 24(%rsp)
 407 0062 8944241C 		movl	%eax, 28(%rsp)
 408              	.LVL40:
 409              		.loc 1 429 0
 410 0066 E8000000 		call	_Znam
 410      00
 411              	.LVL41:
 412              		.loc 1 430 0
 413 006b BF380000 		movl	$56, %edi
 413      00
 414              		.loc 1 429 0
 415 0070 4889C3   		movq	%rax, %rbx
 416              	.LVL42:
 417              		.loc 1 430 0
 418 0073 E8000000 		call	_Znwm
 418      00
 419              	.LVL43:
 420              	.LBB91:
 421              	.LBB92:
 422              		.file 4 "fltk-1.3.4-1/FL/Fl_Bitmap.H"
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
 423              		.loc 4 60 0
 424 0078 8B542424 		movl	36(%rsp), %edx
 425 007c 31C9     		xorl	%ecx, %ecx
 426 007e 4889C7   		movq	%rax, %rdi
 427 0081 4489EE   		movl	%r13d, %esi
 428 0084 48894424 		movq	%rax, 40(%rsp)
 428      28
 429 0089 E8000000 		call	_ZN8Fl_ImageC2Eiii
 429      00
 430              	.LVL44:
 431 008e 488B7C24 		movq	40(%rsp), %rdi
 431      28
 432              	.LBE92:
 433              	.LBE91:
 434              	.LBB96:
 435              	.LBB97:
 436              		.file 5 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 437              		.loc 5 90 0
 438 0093 4C89FA   		movq	%r15, %rdx
 439 0096 31F6     		xorl	%esi, %esi
 440              	.LBE97:
 441              	.LBE96:
 442              	.LBB99:
 443              	.LBB95:
 444              		.loc 4 60 0
 445 0098 4889F8   		movq	%rdi, %rax
 446 009b 48C70700 		movq	$_ZTV9Fl_Bitmap+16, (%rdi)
 446      000000
 447 00a2 48895F28 		movq	%rbx, 40(%rdi)
 448 00a6 4883C028 		addq	$40, %rax
 449 00aa C7473400 		movl	$0, 52(%rdi)
 449      000000
 450              	.LVL45:
 451              	.LBB93:
 452              	.LBB94:
 453              		.file 6 "fltk-1.3.4-1/FL/Fl_Image.H"
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
 454              		.loc 6 100 0
 455 00b1 C7471801 		movl	$1, 24(%rdi)
 455      000000
 456              	.LBE94:
 457              	.LBE93:
 458              		.loc 4 60 0
 459 00b8 48894720 		movq	%rax, 32(%rdi)
 460              	.LVL46:
 461              	.LBE95:
 462              	.LBE99:
 463              		.loc 1 431 0
 464 00bc C7473001 		movl	$1, 48(%rdi)
 464      000000
 465              	.LVL47:
 466              	.LBB100:
 467              	.LBB98:
 468              		.loc 5 90 0
 469 00c3 4889DF   		movq	%rbx, %rdi
 470              	.LVL48:
 471 00c6 E8000000 		call	memset
 471      00
 472              	.LVL49:
 473 00cb 498B4628 		movq	40(%r14), %rax
 474 00cf 448B7C24 		movl	36(%rsp), %r15d
 474      24
 475 00d4 48894424 		movq	%rax, 16(%rsp)
 475      10
 476 00d9 418B4608 		movl	8(%r14), %eax
 477 00dd 4589FE   		movl	%r15d, %r14d
 478              	.LVL50:
 479 00e0 8D500E   		leal	14(%rax), %edx
 480 00e3 83C007   		addl	$7, %eax
 481 00e6 0F48C2   		cmovs	%edx, %eax
 482              	.LBE98:
 483              	.LBE100:
 484              		.loc 1 436 0
 485 00e9 4531DB   		xorl	%r11d, %r11d
 486 00ec C1F803   		sarl	$3, %eax
 487 00ef 89442420 		movl	%eax, 32(%rsp)
 488              		.loc 1 441 0
 489 00f3 B8010000 		movl	$1, %eax
 489      00
 490              	.LVL51:
 491 00f8 0F1F8400 		.p2align 4,,10
 491      00000000 
 492              		.p2align 3
 493              	.L39:
 494              		.loc 1 437 0
 495 0100 8B542420 		movl	32(%rsp), %edx
 496 0104 488B4C24 		movq	16(%rsp), %rcx
 496      10
 497 0109 4489EF   		movl	%r13d, %edi
 498 010c 4589E9   		movl	%r13d, %r9d
 499 010f 31F6     		xorl	%esi, %esi
 500 0111 41B80100 		movl	$1, %r8d
 500      0000
 501 0117 44895C24 		movl	%r11d, 12(%rsp)
 501      0C
 502 011c 410FAFD3 		imull	%r11d, %edx
 503 0120 4863D2   		movslq	%edx, %rdx
 504              	.LVL52:
 505 0123 4C8D1411 		leaq	(%rcx,%rdx), %r10
 506 0127 EB19     		jmp	.L36
 507              	.LVL53:
 508 0129 0F1F8000 		.p2align 4,,10
 508      000000
 509              		.p2align 3
 510              	.L57:
 511              		.loc 1 450 0 discriminator 1
 512 0130 4429E7   		subl	%r12d, %edi
 513              	.LVL54:
 514              		.loc 1 443 0 discriminator 1
 515 0133 4501C0   		addl	%r8d, %r8d
 516              	.LVL55:
 517              		.loc 1 449 0 discriminator 1
 518 0136 01EE     		addl	%ebp, %esi
 519              	.LVL56:
 520              		.loc 1 452 0 discriminator 1
 521 0138 85FF     		testl	%edi, %edi
 522 013a 7E40     		jle	.L55
 523              	.L35:
 524              	.LVL57:
 525              		.loc 1 438 0
 526 013c 4183E901 		subl	$1, %r9d
 527              	.LVL58:
 528 0140 7446     		je	.L56
 529              	.LVL59:
 530              	.L36:
 531              		.loc 1 441 0
 532 0142 8D5607   		leal	7(%rsi), %edx
 533 0145 85F6     		testl	%esi, %esi
 534 0147 89F1     		movl	%esi, %ecx
 535 0149 4189C3   		movl	%eax, %r11d
 536 014c 0F49D6   		cmovns	%esi, %edx
 537 014f 83E107   		andl	$7, %ecx
 538 0152 C1FA03   		sarl	$3, %edx
 539 0155 41D3E3   		sall	%cl, %r11d
 540 0158 4863D2   		movslq	%edx, %rdx
 541 015b 45841C12 		testb	%r11b, (%r10,%rdx)
 542 015f 7403     		je	.L32
 543              		.loc 1 441 0 is_stmt 0 discriminator 1
 544 0161 440803   		orb	%r8b, (%rbx)
 545              	.L32:
 546              		.loc 1 443 0 is_stmt 1
 547 0164 4584C0   		testb	%r8b, %r8b
 548 0167 79C7     		jns	.L57
 549              	.LVL60:
 550              		.loc 1 450 0
 551 0169 4429E7   		subl	%r12d, %edi
 552              	.LVL61:
 553              		.loc 1 446 0
 554 016c 4883C301 		addq	$1, %rbx
 555              	.LVL62:
 556              		.loc 1 449 0
 557 0170 01EE     		addl	%ebp, %esi
 558              	.LVL63:
 559              		.loc 1 452 0
 560 0172 85FF     		testl	%edi, %edi
 561              		.loc 1 445 0
 562 0174 41B80100 		movl	$1, %r8d
 562      0000
 563              	.LVL64:
 564              		.loc 1 452 0
 565 017a 7FC0     		jg	.L35
 566              	.L55:
 567              		.loc 1 453 0
 568 017c 4401EF   		addl	%r13d, %edi
 569              	.LVL65:
 570              		.loc 1 454 0
 571 017f 83C601   		addl	$1, %esi
 572              	.LVL66:
 573              		.loc 1 438 0
 574 0182 4183E901 		subl	$1, %r9d
 575              	.LVL67:
 576 0186 75BA     		jne	.L36
 577              	.L56:
 578              		.loc 1 458 0
 579 0188 31D2     		xorl	%edx, %edx
 580 018a 4180F801 		cmpb	$1, %r8b
 581 018e 448B5C24 		movl	12(%rsp), %r11d
 581      0C
 582 0193 0F95C2   		setne	%dl
 583              		.loc 1 461 0
 584 0196 442B7424 		subl	24(%rsp), %r14d
 584      18
 585              	.LVL68:
 586              		.loc 1 460 0
 587 019b 44035C24 		addl	28(%rsp), %r11d
 587      1C
 588              		.loc 1 458 0
 589 01a0 4801D3   		addq	%rdx, %rbx
 590              	.LVL69:
 591              		.loc 1 462 0
 592 01a3 4585F6   		testl	%r14d, %r14d
 593 01a6 7E28     		jle	.L58
 594              	.L38:
 595              	.LVL70:
 596              		.loc 1 436 0 discriminator 2
 597 01a8 4183EF01 		subl	$1, %r15d
 598              	.LVL71:
 599 01ac 0F854EFF 		jne	.L39
 599      FFFF
 600 01b2 488B4424 		movq	40(%rsp), %rax
 600      28
 601              		.loc 1 469 0
 602 01b7 4883C438 		addq	$56, %rsp
 603              		.cfi_remember_state
 604              		.cfi_def_cfa_offset 56
 605 01bb 5B       		popq	%rbx
 606              		.cfi_def_cfa_offset 48
 607              	.LVL72:
 608 01bc 5D       		popq	%rbp
 609              		.cfi_def_cfa_offset 40
 610              	.LVL73:
 611 01bd 415C     		popq	%r12
 612              		.cfi_def_cfa_offset 32
 613              	.LVL74:
 614 01bf 415D     		popq	%r13
 615              		.cfi_def_cfa_offset 24
 616              	.LVL75:
 617 01c1 415E     		popq	%r14
 618              		.cfi_def_cfa_offset 16
 619              	.LVL76:
 620 01c3 415F     		popq	%r15
 621              		.cfi_def_cfa_offset 8
 622              	.LVL77:
 623 01c5 C3       		ret
 624              	.LVL78:
 625 01c6 662E0F1F 		.p2align 4,,10
 625      84000000 
 625      0000
 626              		.p2align 3
 627              	.L58:
 628              		.cfi_restore_state
 629              		.loc 1 463 0
 630 01d0 44037424 		addl	36(%rsp), %r14d
 630      24
 631              	.LVL79:
 632              		.loc 1 464 0
 633 01d5 4183C301 		addl	$1, %r11d
 634              	.LVL80:
 635 01d9 EBCD     		jmp	.L38
 636              	.LVL81:
 637              	.L54:
 638              		.loc 1 399 0 discriminator 1
 639 01db 3B570C   		cmpl	12(%rdi), %edx
 640 01de 0F853FFE 		jne	.L30
 640      FFFF
 641              		.loc 1 400 0
 642 01e4 8D460E   		leal	14(%rsi), %eax
 643 01e7 89F3     		movl	%esi, %ebx
 644 01e9 448B7C24 		movl	36(%rsp), %r15d
 644      24
 645 01ee 83C307   		addl	$7, %ebx
 646 01f1 0F48D8   		cmovs	%eax, %ebx
 647 01f4 C1FB03   		sarl	$3, %ebx
 648 01f7 410FAFDF 		imull	%r15d, %ebx
 649 01fb 4863DB   		movslq	%ebx, %rbx
 650 01fe 4889DF   		movq	%rbx, %rdi
 651              	.LVL82:
 652 0201 E8000000 		call	_Znam
 652      00
 653              	.LVL83:
 654              	.LBB101:
 655              	.LBB102:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 656              		.loc 5 53 0
 657 0206 498B7628 		movq	40(%r14), %rsi
 658 020a 4889DA   		movq	%rbx, %rdx
 659 020d 4889C7   		movq	%rax, %rdi
 660              	.LBE102:
 661              	.LBE101:
 662              		.loc 1 400 0
 663 0210 4889C5   		movq	%rax, %rbp
 664              	.LVL84:
 665              	.LBB104:
 666              	.LBB103:
  53:/usr/include/x86_64-linux-gnu/bits/string3.h **** }
 667              		.loc 5 53 0
 668 0213 E8000000 		call	memcpy
 668      00
 669              	.LVL85:
 670              	.LBE103:
 671              	.LBE104:
 672              		.loc 1 403 0
 673 0218 BF380000 		movl	$56, %edi
 673      00
 674 021d E8000000 		call	_Znwm
 674      00
 675              	.LVL86:
 676              	.LBB105:
 677              	.LBB106:
 678              		.loc 4 60 0
 679 0222 4489FA   		movl	%r15d, %edx
 680              	.LBE106:
 681              	.LBE105:
 682              		.loc 1 403 0
 683 0225 4889C3   		movq	%rax, %rbx
 684              	.LVL87:
 685              	.LBB110:
 686              	.LBB109:
 687              		.loc 4 60 0
 688 0228 4489EE   		movl	%r13d, %esi
 689 022b 4889C7   		movq	%rax, %rdi
 690 022e 31C9     		xorl	%ecx, %ecx
 691 0230 E8000000 		call	_ZN8Fl_ImageC2Eiii
 691      00
 692              	.LVL88:
 693 0235 488D4328 		leaq	40(%rbx), %rax
 694 0239 48C70300 		movq	$_ZTV9Fl_Bitmap+16, (%rbx)
 694      000000
 695 0240 48896B28 		movq	%rbp, 40(%rbx)
 696 0244 C7433400 		movl	$0, 52(%rbx)
 696      000000
 697              	.LVL89:
 698              	.LBB107:
 699              	.LBB108:
 700              		.loc 6 100 0
 701 024b C7431801 		movl	$1, 24(%rbx)
 701      000000
 702              	.LVL90:
 703              	.LBE108:
 704              	.LBE107:
 705              		.loc 4 60 0
 706 0252 48894320 		movq	%rax, 32(%rbx)
 707              	.LBE109:
 708              	.LBE110:
 709              		.loc 1 404 0
 710 0256 C7433001 		movl	$1, 48(%rbx)
 710      000000
 711              		.loc 1 469 0
 712 025d 4883C438 		addq	$56, %rsp
 713              		.cfi_remember_state
 714              		.cfi_def_cfa_offset 56
 715              		.loc 1 406 0
 716 0261 4889D8   		movq	%rbx, %rax
 717              		.loc 1 469 0
 718 0264 5B       		popq	%rbx
 719              		.cfi_def_cfa_offset 48
 720              	.LVL91:
 721 0265 5D       		popq	%rbp
 722              		.cfi_def_cfa_offset 40
 723              	.LVL92:
 724 0266 415C     		popq	%r12
 725              		.cfi_def_cfa_offset 32
 726 0268 415D     		popq	%r13
 727              		.cfi_def_cfa_offset 24
 728              	.LVL93:
 729 026a 415E     		popq	%r14
 730              		.cfi_def_cfa_offset 16
 731              	.LVL94:
 732 026c 415F     		popq	%r15
 733              		.cfi_def_cfa_offset 8
 734 026e C3       		ret
 735              	.LVL95:
 736              	.L42:
 737              		.cfi_restore_state
 738 026f 4883C438 		addq	$56, %rsp
 739              		.cfi_def_cfa_offset 56
 740              		.loc 1 408 0
 741 0273 31C0     		xorl	%eax, %eax
 742              		.loc 1 469 0
 743 0275 5B       		popq	%rbx
 744              		.cfi_def_cfa_offset 48
 745 0276 5D       		popq	%rbp
 746              		.cfi_def_cfa_offset 40
 747 0277 415C     		popq	%r12
 748              		.cfi_def_cfa_offset 32
 749 0279 415D     		popq	%r13
 750              		.cfi_def_cfa_offset 24
 751 027b 415E     		popq	%r14
 752              		.cfi_def_cfa_offset 16
 753 027d 415F     		popq	%r15
 754              		.cfi_def_cfa_offset 8
 755 027f C3       		ret
 756              		.cfi_endproc
 757              	.LFE566:
 759              		.section	.text.unlikely._ZN9Fl_Bitmap4copyEii
 760              	.LCOLDE6:
 761              		.section	.text._ZN9Fl_Bitmap4copyEii
 762              	.LHOTE6:
 763              		.section	.text.unlikely._Z17fl_create_bitmaskiiPKh,"ax",@progbits
 764              	.LCOLDB7:
 765              		.section	.text._Z17fl_create_bitmaskiiPKh,"ax",@progbits
 766              	.LHOTB7:
 767              		.p2align 4,,15
 768              		.globl	_Z17fl_create_bitmaskiiPKh
 770              	_Z17fl_create_bitmaskiiPKh:
 771              	.LFB553:
 772              		.loc 1 156 0
 773              		.cfi_startproc
 774              	.LVL96:
 775              		.loc 1 158 0
 776 0000 8D4F07   		leal	7(%rdi), %ecx
 777              		.loc 1 156 0
 778 0003 4189F0   		movl	%esi, %r8d
 779              		.loc 1 158 0
 780 0006 488B3D00 		movq	fl_display(%rip), %rdi
 780      000000
 781              	.LVL97:
 782 000d 488B3500 		movq	fl_window(%rip), %rsi
 782      000000
 783              	.LVL98:
 784 0014 83E1F8   		andl	$-8, %ecx
 785              	.LVL99:
 786 0017 E9000000 		jmp	XCreateBitmapFromData
 786      00
 787              	.LVL100:
 788              		.cfi_endproc
 789              	.LFE553:
 791              		.section	.text.unlikely._Z17fl_create_bitmaskiiPKh
 792              	.LCOLDE7:
 793              		.section	.text._Z17fl_create_bitmaskiiPKh
 794              	.LHOTE7:
 795              		.section	.text.unlikely._Z17fl_delete_bitmaskm,"ax",@progbits
 796              	.LCOLDB8:
 797              		.section	.text._Z17fl_delete_bitmaskm,"ax",@progbits
 798              	.LHOTB8:
 799              		.p2align 4,,15
 800              		.globl	_Z17fl_delete_bitmaskm
 802              	_Z17fl_delete_bitmaskm:
 803              	.LFB554:
 804              		.loc 1 161 0
 805              		.cfi_startproc
 806              	.LVL101:
 807              		.loc 1 161 0
 808 0000 4889FE   		movq	%rdi, %rsi
 809              		.loc 1 162 0
 810 0003 488B3D00 		movq	fl_display(%rip), %rdi
 810      000000
 811              	.LVL102:
 812 000a E9000000 		jmp	XFreePixmap
 812      00
 813              	.LVL103:
 814              		.cfi_endproc
 815              	.LFE554:
 817              		.section	.text.unlikely._Z17fl_delete_bitmaskm
 818              	.LCOLDE8:
 819              		.section	.text._Z17fl_delete_bitmaskm
 820              	.LHOTE8:
 821              		.section	.text.unlikely._Z19fl_create_alphamaskiiiiPKh,"ax",@progbits
 822              	.LCOLDB9:
 823              		.section	.text._Z19fl_create_alphamaskiiiiPKh,"ax",@progbits
 824              	.LHOTB9:
 825              		.p2align 4,,15
 826              		.globl	_Z19fl_create_alphamaskiiiiPKh
 828              	_Z19fl_create_alphamaskiiiiPKh:
 829              	.LFB555:
 830              		.loc 1 170 0
 831              		.cfi_startproc
 832              	.LVL104:
 833 0000 4157     		pushq	%r15
 834              		.cfi_def_cfa_offset 16
 835              		.cfi_offset 15, -16
 836 0002 4156     		pushq	%r14
 837              		.cfi_def_cfa_offset 24
 838              		.cfi_offset 14, -24
 839              		.loc 1 172 0
 840 0004 89F8     		movl	%edi, %eax
 841              		.loc 1 170 0
 842 0006 4155     		pushq	%r13
 843              		.cfi_def_cfa_offset 32
 844              		.cfi_offset 13, -32
 845 0008 4154     		pushq	%r12
 846              		.cfi_def_cfa_offset 40
 847              		.cfi_offset 12, -40
 848              		.loc 1 172 0
 849 000a 448D6F0E 		leal	14(%rdi), %r13d
 850              		.loc 1 170 0
 851 000e 55       		pushq	%rbp
 852              		.cfi_def_cfa_offset 48
 853              		.cfi_offset 6, -48
 854 000f 53       		pushq	%rbx
 855              		.cfi_def_cfa_offset 56
 856              		.cfi_offset 3, -56
 857 0010 89FB     		movl	%edi, %ebx
 858 0012 89F5     		movl	%esi, %ebp
 859 0014 4189D4   		movl	%edx, %r12d
 860 0017 4C63F9   		movslq	%ecx, %r15
 861 001a 4883EC28 		subq	$40, %rsp
 862              		.cfi_def_cfa_offset 96
 863              		.loc 1 172 0
 864 001e 83C007   		addl	$7, %eax
 865 0021 440F49E8 		cmovns	%eax, %r13d
 866              		.loc 1 170 0
 867 0025 4C894424 		movq	%r8, 24(%rsp)
 867      18
 868              		.loc 1 172 0
 869 002a 89442414 		movl	%eax, 20(%rsp)
 870 002e 41C1FD03 		sarl	$3, %r13d
 871              	.LVL105:
 872              		.loc 1 173 0
 873 0032 4589EE   		movl	%r13d, %r14d
 874 0035 440FAFF6 		imull	%esi, %r14d
 875 0039 4D63F6   		movslq	%r14d, %r14
 876 003c 4C89F7   		movq	%r14, %rdi
 877              	.LVL106:
 878 003f E8000000 		call	_Znam
 878      00
 879              	.LVL107:
 880              	.LBB111:
 881              	.LBB112:
 882              		.loc 5 90 0
 883 0044 4C89F2   		movq	%r14, %rdx
 884 0047 31F6     		xorl	%esi, %esi
 885 0049 4889C7   		movq	%rax, %rdi
 886              	.LBE112:
 887              	.LBE111:
 888              		.loc 1 173 0
 889 004c 48894424 		movq	%rax, 8(%rsp)
 889      08
 890              	.LVL108:
 891              	.LBB114:
 892              	.LBB113:
 893              		.loc 5 90 0
 894 0051 E8000000 		call	memset
 894      00
 895              	.LVL109:
 896              	.LBE113:
 897              	.LBE114:
 898              		.loc 1 225 0
 899 0056 4C8B4424 		movq	24(%rsp), %r8
 899      18
 900 005b 4963D4   		movslq	%r12d, %rdx
 901 005e 85ED     		testl	%ebp, %ebp
 902 0060 4D8D5410 		leaq	-1(%r8,%rdx), %r10
 902      FF
 903              	.LVL110:
 904 0065 0F8E8C00 		jle	.L68
 904      0000
 905 006b 448D73FF 		leal	-1(%rbx), %r14d
 906 006f 4C8B6424 		movq	8(%rsp), %r12
 906      08
 907              	.LVL111:
 908 0074 4D63ED   		movslq	%r13d, %r13
 909 0077 4531DB   		xorl	%r11d, %r11d
 910 007a 4983C601 		addq	$1, %r14
 911 007e 4C0FAFF2 		imulq	%rdx, %r14
 912              	.LVL112:
 913              		.p2align 4,,10
 914 0082 660F1F44 		.p2align 3
 914      0000
 915              	.L69:
 916              		.loc 1 226 0
 917 0088 85DB     		testl	%ebx, %ebx
 918 008a 4D89E0   		movq	%r12, %r8
 919              	.LVL113:
 920 008d 7E59     		jle	.L63
 921 008f 4589D9   		movl	%r11d, %r9d
 922 0092 4C89D7   		movq	%r10, %rdi
 923 0095 31C0     		xorl	%eax, %eax
 924 0097 BE010000 		movl	$1, %esi
 924      00
 925 009c 4183E10F 		andl	$15, %r9d
 926 00a0 EB12     		jmp	.L67
 927              	.LVL114:
 928              		.p2align 4,,10
 929 00a2 660F1F44 		.p2align 3
 929      0000
 930              	.L74:
 931              		.loc 1 226 0 is_stmt 0 discriminator 1
 932 00a8 83C001   		addl	$1, %eax
 933              	.LVL115:
 934              		.loc 1 229 0 is_stmt 1 discriminator 1
 935 00ab 01F6     		addl	%esi, %esi
 936              	.LVL116:
 937              		.loc 1 226 0 discriminator 1
 938 00ad 4801D7   		addq	%rdx, %rdi
 939              	.LVL117:
 940 00b0 39C3     		cmpl	%eax, %ebx
 941 00b2 7431     		je	.L73
 942              	.LVL118:
 943              	.L67:
 944              		.loc 1 227 0
 945 00b4 89C1     		movl	%eax, %ecx
 946 00b6 83E10F   		andl	$15, %ecx
 947 00b9 48C1E104 		salq	$4, %rcx
 948 00bd 420FB68C 		movzbl	_ZZ19fl_create_alphamaskiiiiPKhE6dither(%rcx,%r9), %ecx
 948      09000000 
 948      00
 949 00c6 380F     		cmpb	%cl, (%rdi)
 950 00c8 7603     		jbe	.L64
 951              		.loc 1 228 0
 952 00ca 410830   		orb	%sil, (%r8)
 953              	.L64:
 954              		.loc 1 229 0
 955 00cd 4084F6   		testb	%sil, %sil
 956 00d0 79D6     		jns	.L74
 957              	.LVL119:
 958              		.loc 1 226 0
 959 00d2 83C001   		addl	$1, %eax
 960              	.LVL120:
 961              		.loc 1 232 0
 962 00d5 4983C001 		addq	$1, %r8
 963              	.LVL121:
 964              		.loc 1 226 0
 965 00d9 4801D7   		addq	%rdx, %rdi
 966              	.LVL122:
 967 00dc 39C3     		cmpl	%eax, %ebx
 968              		.loc 1 231 0
 969 00de BE010000 		movl	$1, %esi
 969      00
 970              	.LVL123:
 971              		.loc 1 226 0
 972 00e3 75CF     		jne	.L67
 973              	.L73:
 974 00e5 4D01F2   		addq	%r14, %r10
 975              	.LVL124:
 976              	.L63:
 977              		.loc 1 225 0 discriminator 2
 978 00e8 4183C301 		addl	$1, %r11d
 979              	.LVL125:
 980 00ec 4D01FA   		addq	%r15, %r10
 981              	.LVL126:
 982 00ef 4D01EC   		addq	%r13, %r12
 983 00f2 4439DD   		cmpl	%r11d, %ebp
 984 00f5 7591     		jne	.L69
 985              	.LVL127:
 986              	.L68:
 987              	.LBB115:
 988              	.LBB116:
 989              		.loc 1 158 0
 990 00f7 4C8B7C24 		movq	8(%rsp), %r15
 990      08
 991              	.LVL128:
 992 00fc 8B4C2414 		movl	20(%rsp), %ecx
 993 0100 4189E8   		movl	%ebp, %r8d
 994 0103 488B3500 		movq	fl_window(%rip), %rsi
 994      000000
 995 010a 488B3D00 		movq	fl_display(%rip), %rdi
 995      000000
 996 0111 4C89FA   		movq	%r15, %rdx
 997              	.LVL129:
 998 0114 83E1F8   		andl	$-8, %ecx
 999 0117 E8000000 		call	XCreateBitmapFromData
 999      00
 1000              	.LVL130:
 1001              	.LBE116:
 1002              	.LBE115:
 1003              		.loc 1 237 0
 1004 011c 4C89FF   		movq	%r15, %rdi
 1005              	.LBB118:
 1006              	.LBB117:
 1007              		.loc 1 158 0
 1008 011f 4889C3   		movq	%rax, %rbx
 1009              	.LVL131:
 1010              	.LBE117:
 1011              	.LBE118:
 1012              		.loc 1 237 0
 1013 0122 E8000000 		call	_ZdaPv
 1013      00
 1014              	.LVL132:
 1015              		.loc 1 240 0
 1016 0127 4883C428 		addq	$40, %rsp
 1017              		.cfi_def_cfa_offset 56
 1018 012b 4889D8   		movq	%rbx, %rax
 1019 012e 5B       		popq	%rbx
 1020              		.cfi_def_cfa_offset 48
 1021 012f 5D       		popq	%rbp
 1022              		.cfi_def_cfa_offset 40
 1023              	.LVL133:
 1024 0130 415C     		popq	%r12
 1025              		.cfi_def_cfa_offset 32
 1026 0132 415D     		popq	%r13
 1027              		.cfi_def_cfa_offset 24
 1028 0134 415E     		popq	%r14
 1029              		.cfi_def_cfa_offset 16
 1030 0136 415F     		popq	%r15
 1031              		.cfi_def_cfa_offset 8
 1032 0138 C3       		ret
 1033              		.cfi_endproc
 1034              	.LFE555:
 1036              		.section	.text.unlikely._Z19fl_create_alphamaskiiiiPKh
 1037              	.LCOLDE9:
 1038              		.section	.text._Z19fl_create_alphamaskiiiiPKh
 1039              	.LHOTE9:
 1040              		.section	.text.unlikely._ZN9Fl_Bitmap5startEiiiiRiS0_S0_S0_S0_S0_,"ax",@progbits
 1041              		.align 2
 1042              	.LCOLDB10:
 1043              		.section	.text._ZN9Fl_Bitmap5startEiiiiRiS0_S0_S0_S0_S0_,"ax",@progbits
 1044              	.LHOTB10:
 1045              		.align 2
 1046              		.p2align 4,,15
 1047              		.globl	_ZN9Fl_Bitmap5startEiiiiRiS0_S0_S0_S0_S0_
 1049              	_ZN9Fl_Bitmap5startEiiiiRiS0_S0_S0_S0_S0_:
 1050              	.LFB557:
 1051              		.loc 1 248 0
 1052              		.cfi_startproc
 1053              	.LVL134:
 1054 0000 4157     		pushq	%r15
 1055              		.cfi_def_cfa_offset 16
 1056              		.cfi_offset 15, -16
 1057 0002 4156     		pushq	%r14
 1058              		.cfi_def_cfa_offset 24
 1059              		.cfi_offset 14, -24
 1060 0004 4155     		pushq	%r13
 1061              		.cfi_def_cfa_offset 32
 1062              		.cfi_offset 13, -32
 1063 0006 4154     		pushq	%r12
 1064              		.cfi_def_cfa_offset 40
 1065              		.cfi_offset 12, -40
 1066 0008 4189D5   		movl	%edx, %r13d
 1067 000b 55       		pushq	%rbp
 1068              		.cfi_def_cfa_offset 48
 1069              		.cfi_offset 6, -48
 1070 000c 53       		pushq	%rbx
 1071              		.cfi_def_cfa_offset 56
 1072              		.cfi_offset 3, -56
 1073 000d 4889FB   		movq	%rdi, %rbx
 1074 0010 4883EC18 		subq	$24, %rsp
 1075              		.cfi_def_cfa_offset 80
 1076              		.loc 1 249 0
 1077 0014 48837F28 		cmpq	$0, 40(%rdi)
 1077      00
 1078              		.loc 1 248 0
 1079 0019 4C8B6424 		movq	80(%rsp), %r12
 1079      50
 1080 001e 4C8B7424 		movq	88(%rsp), %r14
 1080      58
 1081 0023 4C8B7C24 		movq	96(%rsp), %r15
 1081      60
 1082              		.loc 1 249 0
 1083 0028 0F843A01 		je	.L86
 1083      0000
 1084              	.LBB119:
 1085              	.LBB120:
 1086              		.file 7 "fltk-1.3.4-1/FL/fl_draw.H"
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
 1087              		.loc 7 127 0
 1088 002e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1088      000000
 1089              	.LVL135:
 1090 0035 4883EC08 		subq	$8, %rsp
 1091              		.cfi_def_cfa_offset 88
 1092 0039 4C89CD   		movq	%r9, %rbp
 1093              	.LVL136:
 1094 003c 4D89F1   		movq	%r14, %r9
 1095              	.LVL137:
 1096 003f 488B07   		movq	(%rdi), %rax
 1097 0042 FF742478 		pushq	120(%rsp)
 1098              		.cfi_def_cfa_offset 96
 1099 0046 FF742478 		pushq	120(%rsp)
 1100              		.cfi_def_cfa_offset 104
 1101 004a 4157     		pushq	%r15
 1102              		.cfi_def_cfa_offset 112
 1103 004c 8974242C 		movl	%esi, 44(%rsp)
 1104 0050 FF905801 		call	*344(%rax)
 1104      0000
 1105              	.LVL138:
 1106              	.LBE120:
 1107              	.LBE119:
 1108              		.loc 1 255 0
 1109 0056 418B06   		movl	(%r14), %eax
 1110 0059 448B5C24 		movl	44(%rsp), %r11d
 1110      2C
 1111              		.loc 1 257 0
 1112 005e 4883C420 		addq	$32, %rsp
 1113              		.cfi_def_cfa_offset 80
 1114              		.loc 1 255 0
 1115 0062 4429D8   		subl	%r11d, %eax
 1116 0065 014500   		addl	%eax, 0(%rbp)
 1117 0068 418B07   		movl	(%r15), %eax
 1118 006b 4429E8   		subl	%r13d, %eax
 1119 006e 41010424 		addl	%eax, (%r12)
 1120              		.loc 1 257 0
 1121 0072 8B4500   		movl	0(%rbp), %eax
 1122 0075 85C0     		testl	%eax, %eax
 1123 0077 0F88AB00 		js	.L87
 1123      0000
 1124              	.L78:
 1125              		.loc 1 258 0
 1126 007d 488B7C24 		movq	104(%rsp), %rdi
 1126      68
 1127 0082 8B4B08   		movl	8(%rbx), %ecx
 1128 0085 8B17     		movl	(%rdi), %edx
 1129              	.LVL139:
 1130 0087 8D3402   		leal	(%rdx,%rax), %esi
 1131 008a 39CE     		cmpl	%ecx, %esi
 1132 008c 7F42     		jg	.L88
 1133              		.loc 1 259 0
 1134 008e 85D2     		testl	%edx, %edx
 1135 0090 7E4B     		jle	.L83
 1136              	.LVL140:
 1137              	.L80:
 1138              		.loc 1 260 0
 1139 0092 418B0424 		movl	(%r12), %eax
 1140 0096 85C0     		testl	%eax, %eax
 1141 0098 0F88AA00 		js	.L89
 1141      0000
 1142              	.L81:
 1143              		.loc 1 261 0
 1144 009e 488B7424 		movq	112(%rsp), %rsi
 1144      70
 1145 00a3 8B4B0C   		movl	12(%rbx), %ecx
 1146 00a6 8B16     		movl	(%rsi), %edx
 1147              	.LVL141:
 1148 00a8 8D3402   		leal	(%rdx,%rax), %esi
 1149 00ab 39CE     		cmpl	%ecx, %esi
 1150 00ad 7F39     		jg	.L90
 1151              	.LVL142:
 1152              	.L82:
 1153              		.loc 1 262 0
 1154 00af 85D2     		testl	%edx, %edx
 1155 00b1 7E2A     		jle	.L83
 1156              		.loc 1 266 0
 1157 00b3 8B4334   		movl	52(%rbx), %eax
 1158              		.loc 1 268 0
 1159 00b6 31ED     		xorl	%ebp, %ebp
 1160              	.LVL143:
 1161              		.loc 1 266 0
 1162 00b8 85C0     		testl	%eax, %eax
 1163 00ba 743C     		je	.L91
 1164              	.LVL144:
 1165              	.L77:
 1166              		.loc 1 269 0
 1167 00bc 4883C418 		addq	$24, %rsp
 1168              		.cfi_remember_state
 1169              		.cfi_def_cfa_offset 56
 1170 00c0 89E8     		movl	%ebp, %eax
 1171 00c2 5B       		popq	%rbx
 1172              		.cfi_def_cfa_offset 48
 1173              	.LVL145:
 1174 00c3 5D       		popq	%rbp
 1175              		.cfi_def_cfa_offset 40
 1176 00c4 415C     		popq	%r12
 1177              		.cfi_def_cfa_offset 32
 1178 00c6 415D     		popq	%r13
 1179              		.cfi_def_cfa_offset 24
 1180              	.LVL146:
 1181 00c8 415E     		popq	%r14
 1182              		.cfi_def_cfa_offset 16
 1183 00ca 415F     		popq	%r15
 1184              		.cfi_def_cfa_offset 8
 1185 00cc C3       		ret
 1186              	.LVL147:
 1187 00cd 0F1F00   		.p2align 4,,10
 1188              		.p2align 3
 1189              	.L88:
 1190              		.cfi_restore_state
 1191              		.loc 1 258 0 discriminator 1
 1192 00d0 29C1     		subl	%eax, %ecx
 1193 00d2 4889F8   		movq	%rdi, %rax
 1194 00d5 89CA     		movl	%ecx, %edx
 1195 00d7 8908     		movl	%ecx, (%rax)
 1196              		.loc 1 259 0 discriminator 1
 1197 00d9 85D2     		testl	%edx, %edx
 1198 00db 7FB5     		jg	.L80
 1199              	.LVL148:
 1200              	.L83:
 1201              		.loc 1 259 0 is_stmt 0
 1202 00dd BD010000 		movl	$1, %ebp
 1202      00
 1203              	.LVL149:
 1204 00e2 EBD8     		jmp	.L77
 1205              	.LVL150:
 1206              		.p2align 4,,10
 1207 00e4 0F1F4000 		.p2align 3
 1208              	.L90:
 1209              		.loc 1 261 0 is_stmt 1 discriminator 1
 1210 00e8 89CA     		movl	%ecx, %edx
 1211 00ea 29C2     		subl	%eax, %edx
 1212 00ec 488B4424 		movq	112(%rsp), %rax
 1212      70
 1213 00f1 8910     		movl	%edx, (%rax)
 1214 00f3 EBBA     		jmp	.L82
 1215              	.LVL151:
 1216              		.p2align 4,,10
 1217 00f5 0F1F00   		.p2align 3
 1218              	.L91:
 1219              	.LBB121:
 1220              	.LBB122:
 1221              		.loc 1 158 0 discriminator 1
 1222 00f8 8B4308   		movl	8(%rbx), %eax
 1223 00fb 488B5328 		movq	40(%rbx), %rdx
 1224 00ff 448B430C 		movl	12(%rbx), %r8d
 1225 0103 488B3500 		movq	fl_window(%rip), %rsi
 1225      000000
 1226 010a 488B3D00 		movq	fl_display(%rip), %rdi
 1226      000000
 1227 0111 8D4807   		leal	7(%rax), %ecx
 1228 0114 83E1F8   		andl	$-8, %ecx
 1229 0117 E8000000 		call	XCreateBitmapFromData
 1229      00
 1230              	.LVL152:
 1231              	.LBE122:
 1232              	.LBE121:
 1233              		.loc 1 266 0 discriminator 1
 1234 011c 894334   		movl	%eax, 52(%rbx)
 1235 011f EB9B     		jmp	.L77
 1236              	.LVL153:
 1237              		.p2align 4,,10
 1238 0121 0F1F8000 		.p2align 3
 1238      000000
 1239              	.L87:
 1240              		.loc 1 257 0 discriminator 1
 1241 0128 488B7C24 		movq	104(%rsp), %rdi
 1241      68
 1242 012d 0107     		addl	%eax, (%rdi)
 1243 012f 8B4500   		movl	0(%rbp), %eax
 1244 0132 412906   		subl	%eax, (%r14)
 1245 0135 31C0     		xorl	%eax, %eax
 1246 0137 C7450000 		movl	$0, 0(%rbp)
 1246      000000
 1247 013e E93AFFFF 		jmp	.L78
 1247      FF
 1248              		.p2align 4,,10
 1249 0143 0F1F4400 		.p2align 3
 1249      00
 1250              	.L89:
 1251              		.loc 1 260 0 discriminator 1
 1252 0148 488B7424 		movq	112(%rsp), %rsi
 1252      70
 1253 014d 0106     		addl	%eax, (%rsi)
 1254 014f 418B0424 		movl	(%r12), %eax
 1255 0153 412907   		subl	%eax, (%r15)
 1256 0156 31C0     		xorl	%eax, %eax
 1257 0158 41C70424 		movl	$0, (%r12)
 1257      00000000 
 1258 0160 E939FFFF 		jmp	.L81
 1258      FF
 1259              	.LVL154:
 1260              		.p2align 4,,10
 1261 0165 0F1F00   		.p2align 3
 1262              	.L86:
 1263              		.loc 1 250 0
 1264 0168 E8000000 		call	_ZN8Fl_Image10draw_emptyEii
 1264      00
 1265              	.LVL155:
 1266              		.loc 1 251 0
 1267 016d BD010000 		movl	$1, %ebp
 1267      00
 1268 0172 E945FFFF 		jmp	.L77
 1268      FF
 1269              		.cfi_endproc
 1270              	.LFE557:
 1272              		.section	.text.unlikely._ZN9Fl_Bitmap5startEiiiiRiS0_S0_S0_S0_S0_
 1273              	.LCOLDE10:
 1274              		.section	.text._ZN9Fl_Bitmap5startEiiiiRiS0_S0_S0_S0_S0_
 1275              	.LHOTE10:
 1276              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"ax",@progbits
 1277              		.align 2
 1278              	.LCOLDB11:
 1279              		.section	.text._ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Bitmapiiiiii,"ax",@progbits
 1280              	.LHOTB11:
 1281              		.align 2
 1282              		.p2align 4,,15
 1283              		.globl	_ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
 1285              	_ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Bitmapiiiiii:
 1286              	.LFB558:
 1287              		.loc 1 349 0
 1288              		.cfi_startproc
 1289              	.LVL156:
 1290 0000 53       		pushq	%rbx
 1291              		.cfi_def_cfa_offset 16
 1292              		.cfi_offset 3, -16
 1293 0001 4889F3   		movq	%rsi, %rbx
 1294 0004 89D6     		movl	%edx, %esi
 1295              	.LVL157:
 1296 0006 89CA     		movl	%ecx, %edx
 1297              	.LVL158:
 1298 0008 4489C1   		movl	%r8d, %ecx
 1299              	.LVL159:
 1300 000b 4589C8   		movl	%r9d, %r8d
 1301              	.LVL160:
 1302 000e 4883EC28 		subq	$40, %rsp
 1303              		.cfi_def_cfa_offset 56
 1304              		.loc 1 351 0
 1305 0012 4889DF   		movq	%rbx, %rdi
 1306              	.LVL161:
 1307              		.loc 1 349 0
 1308 0015 64488B04 		movq	%fs:40, %rax
 1308      25280000 
 1308      00
 1309 001e 48894424 		movq	%rax, 32(%rsp)
 1309      20
 1310 0023 31C0     		xorl	%eax, %eax
 1311              		.loc 1 351 0
 1312 0025 488D4424 		leaq	28(%rsp), %rax
 1312      1C
 1313 002a 50       		pushq	%rax
 1314              		.cfi_def_cfa_offset 64
 1315 002b 488D4424 		leaq	32(%rsp), %rax
 1315      20
 1316 0030 50       		pushq	%rax
 1317              		.cfi_def_cfa_offset 72
 1318 0031 488D4424 		leaq	36(%rsp), %rax
 1318      24
 1319 0036 50       		pushq	%rax
 1320              		.cfi_def_cfa_offset 80
 1321 0037 488D4424 		leaq	40(%rsp), %rax
 1321      28
 1322 003c 50       		pushq	%rax
 1323              		.cfi_def_cfa_offset 88
 1324 003d 488D4424 		leaq	96(%rsp), %rax
 1324      60
 1325              	.LVL162:
 1326 0042 50       		pushq	%rax
 1327              		.cfi_def_cfa_offset 96
 1328 0043 4C8D4C24 		leaq	96(%rsp), %r9
 1328      60
 1329              	.LVL163:
 1330 0048 E8000000 		call	_ZN9Fl_Bitmap5startEiiiiRiS0_S0_S0_S0_S0_
 1330      00
 1331              	.LVL164:
 1332 004d 4883C430 		addq	$48, %rsp
 1333              		.cfi_def_cfa_offset 48
 1334 0051 85C0     		testl	%eax, %eax
 1335 0053 741B     		je	.L99
 1336              	.L92:
 1337              		.loc 1 362 0
 1338 0055 488B4424 		movq	24(%rsp), %rax
 1338      18
 1339 005a 64483304 		xorq	%fs:40, %rax
 1339      25280000 
 1339      00
 1340 0063 0F85CF00 		jne	.L100
 1340      0000
 1341 0069 4883C420 		addq	$32, %rsp
 1342              		.cfi_remember_state
 1343              		.cfi_def_cfa_offset 16
 1344 006d 5B       		popq	%rbx
 1345              		.cfi_def_cfa_offset 8
 1346              	.LVL165:
 1347 006e C3       		ret
 1348              	.LVL166:
 1349 006f 90       		.p2align 4,,10
 1350              		.p2align 3
 1351              	.L99:
 1352              		.cfi_restore_state
 1353              		.loc 1 355 0
 1354 0070 8B5334   		movl	52(%rbx), %edx
 1355 0073 488B3500 		movq	fl_gc(%rip), %rsi
 1355      000000
 1356 007a 488B3D00 		movq	fl_display(%rip), %rdi
 1356      000000
 1357 0081 E8000000 		call	XSetStipple
 1357      00
 1358              	.LVL167:
 1359              		.loc 1 356 0
 1360 0086 8B542408 		movl	8(%rsp), %edx
 1361              	.LVL168:
 1362 008a 2B542430 		subl	48(%rsp), %edx
 1363              	.LVL169:
 1364 008e 0F889C00 		js	.L101
 1364      0000
 1365              	.LVL170:
 1366              	.L94:
 1367              		.loc 1 357 0
 1368 0094 8B4C240C 		movl	12(%rsp), %ecx
 1369              	.LVL171:
 1370 0098 2B4C2438 		subl	56(%rsp), %ecx
 1371              	.LVL172:
 1372 009c 0F887E00 		js	.L102
 1372      0000
 1373              	.LVL173:
 1374              	.L95:
 1375              		.loc 1 358 0
 1376 00a2 488B3500 		movq	fl_gc(%rip), %rsi
 1376      000000
 1377 00a9 488B3D00 		movq	fl_display(%rip), %rdi
 1377      000000
 1378 00b0 E8000000 		call	XSetTSOrigin
 1378      00
 1379              	.LVL174:
 1380              		.loc 1 359 0
 1381 00b5 488B3500 		movq	fl_gc(%rip), %rsi
 1381      000000
 1382 00bc 488B3D00 		movq	fl_display(%rip), %rdi
 1382      000000
 1383 00c3 BA020000 		movl	$2, %edx
 1383      00
 1384 00c8 E8000000 		call	XSetFillStyle
 1384      00
 1385              	.LVL175:
 1386              		.loc 1 360 0
 1387 00cd 4883EC08 		subq	$8, %rsp
 1388              		.cfi_def_cfa_offset 56
 1389 00d1 488B1500 		movq	fl_gc(%rip), %rdx
 1389      000000
 1390 00d8 488B3500 		movq	fl_window(%rip), %rsi
 1390      000000
 1391 00df 8B44241C 		movl	28(%rsp), %eax
 1392 00e3 488B3D00 		movq	fl_display(%rip), %rdi
 1392      000000
 1393 00ea 50       		pushq	%rax
 1394              		.cfi_def_cfa_offset 64
 1395 00eb 448B4C24 		movl	32(%rsp), %r9d
 1395      20
 1396 00f0 448B4424 		movl	28(%rsp), %r8d
 1396      1C
 1397 00f5 8B4C2418 		movl	24(%rsp), %ecx
 1398 00f9 E8000000 		call	XFillRectangle
 1398      00
 1399              	.LVL176:
 1400              		.loc 1 361 0
 1401 00fe 488B3500 		movq	fl_gc(%rip), %rsi
 1401      000000
 1402 0105 488B3D00 		movq	fl_display(%rip), %rdi
 1402      000000
 1403 010c 31D2     		xorl	%edx, %edx
 1404 010e E8000000 		call	XSetFillStyle
 1404      00
 1405              	.LVL177:
 1406 0113 58       		popq	%rax
 1407              		.cfi_def_cfa_offset 56
 1408 0114 5A       		popq	%rdx
 1409              		.cfi_def_cfa_offset 48
 1410 0115 E93BFFFF 		jmp	.L92
 1410      FF
 1411              	.LVL178:
 1412 011a 660F1F44 		.p2align 4,,10
 1412      0000
 1413              		.p2align 3
 1414              	.L102:
 1415              		.loc 1 357 0 discriminator 1
 1416 0120 034B0C   		addl	12(%rbx), %ecx
 1417              	.LVL179:
 1418 0123 E97AFFFF 		jmp	.L95
 1418      FF
 1419              	.LVL180:
 1420 0128 0F1F8400 		.p2align 4,,10
 1420      00000000 
 1421              		.p2align 3
 1422              	.L101:
 1423              		.loc 1 356 0 discriminator 1
 1424 0130 035308   		addl	8(%rbx), %edx
 1425              	.LVL181:
 1426 0133 E95CFFFF 		jmp	.L94
 1426      FF
 1427              	.LVL182:
 1428              	.L100:
 1429              		.loc 1 362 0
 1430 0138 E8000000 		call	__stack_chk_fail
 1430      00
 1431              	.LVL183:
 1432              		.cfi_endproc
 1433              	.LFE558:
 1435              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
 1436              	.LCOLDE11:
 1437              		.section	.text._ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
 1438              	.LHOTE11:
 1439              		.section	.rodata._ZZ19fl_create_alphamaskiiiiPKhE6dither,"a",@progbits
 1440              		.align 32
 1443              	_ZZ19fl_create_alphamaskiiiiPKhE6dither:
 1444 0000 00       		.byte	0
 1445 0001 80       		.byte	-128
 1446 0002 20       		.byte	32
 1447 0003 A0       		.byte	-96
 1448 0004 08       		.byte	8
 1449 0005 88       		.byte	-120
 1450 0006 28       		.byte	40
 1451 0007 A8       		.byte	-88
 1452 0008 02       		.byte	2
 1453 0009 82       		.byte	-126
 1454 000a 22       		.byte	34
 1455 000b A2       		.byte	-94
 1456 000c 0A       		.byte	10
 1457 000d 8A       		.byte	-118
 1458 000e 2A       		.byte	42
 1459 000f AA       		.byte	-86
 1460 0010 C0       		.byte	-64
 1461 0011 40       		.byte	64
 1462 0012 E0       		.byte	-32
 1463 0013 60       		.byte	96
 1464 0014 C8       		.byte	-56
 1465 0015 48       		.byte	72
 1466 0016 E8       		.byte	-24
 1467 0017 68       		.byte	104
 1468 0018 C2       		.byte	-62
 1469 0019 42       		.byte	66
 1470 001a E2       		.byte	-30
 1471 001b 62       		.byte	98
 1472 001c CA       		.byte	-54
 1473 001d 4A       		.byte	74
 1474 001e EA       		.byte	-22
 1475 001f 6A       		.byte	106
 1476 0020 30       		.byte	48
 1477 0021 B0       		.byte	-80
 1478 0022 10       		.byte	16
 1479 0023 90       		.byte	-112
 1480 0024 38       		.byte	56
 1481 0025 B8       		.byte	-72
 1482 0026 18       		.byte	24
 1483 0027 98       		.byte	-104
 1484 0028 32       		.byte	50
 1485 0029 B2       		.byte	-78
 1486 002a 12       		.byte	18
 1487 002b 92       		.byte	-110
 1488 002c 3A       		.byte	58
 1489 002d BA       		.byte	-70
 1490 002e 1A       		.byte	26
 1491 002f 9A       		.byte	-102
 1492 0030 F0       		.byte	-16
 1493 0031 70       		.byte	112
 1494 0032 D0       		.byte	-48
 1495 0033 50       		.byte	80
 1496 0034 F8       		.byte	-8
 1497 0035 78       		.byte	120
 1498 0036 D8       		.byte	-40
 1499 0037 58       		.byte	88
 1500 0038 F2       		.byte	-14
 1501 0039 72       		.byte	114
 1502 003a D2       		.byte	-46
 1503 003b 52       		.byte	82
 1504 003c FA       		.byte	-6
 1505 003d 7A       		.byte	122
 1506 003e DA       		.byte	-38
 1507 003f 5A       		.byte	90
 1508 0040 0C       		.byte	12
 1509 0041 8C       		.byte	-116
 1510 0042 2C       		.byte	44
 1511 0043 AC       		.byte	-84
 1512 0044 04       		.byte	4
 1513 0045 84       		.byte	-124
 1514 0046 24       		.byte	36
 1515 0047 A4       		.byte	-92
 1516 0048 0E       		.byte	14
 1517 0049 8E       		.byte	-114
 1518 004a 2E       		.byte	46
 1519 004b AE       		.byte	-82
 1520 004c 06       		.byte	6
 1521 004d 86       		.byte	-122
 1522 004e 26       		.byte	38
 1523 004f A6       		.byte	-90
 1524 0050 CC       		.byte	-52
 1525 0051 4C       		.byte	76
 1526 0052 EC       		.byte	-20
 1527 0053 6C       		.byte	108
 1528 0054 C4       		.byte	-60
 1529 0055 44       		.byte	68
 1530 0056 E4       		.byte	-28
 1531 0057 64       		.byte	100
 1532 0058 CE       		.byte	-50
 1533 0059 4E       		.byte	78
 1534 005a EE       		.byte	-18
 1535 005b 6E       		.byte	110
 1536 005c C6       		.byte	-58
 1537 005d 46       		.byte	70
 1538 005e E6       		.byte	-26
 1539 005f 66       		.byte	102
 1540 0060 3C       		.byte	60
 1541 0061 BC       		.byte	-68
 1542 0062 1C       		.byte	28
 1543 0063 9C       		.byte	-100
 1544 0064 34       		.byte	52
 1545 0065 B4       		.byte	-76
 1546 0066 14       		.byte	20
 1547 0067 94       		.byte	-108
 1548 0068 3E       		.byte	62
 1549 0069 BE       		.byte	-66
 1550 006a 1E       		.byte	30
 1551 006b 9E       		.byte	-98
 1552 006c 36       		.byte	54
 1553 006d B6       		.byte	-74
 1554 006e 16       		.byte	22
 1555 006f 96       		.byte	-106
 1556 0070 FC       		.byte	-4
 1557 0071 7C       		.byte	124
 1558 0072 DC       		.byte	-36
 1559 0073 5C       		.byte	92
 1560 0074 F4       		.byte	-12
 1561 0075 74       		.byte	116
 1562 0076 D4       		.byte	-44
 1563 0077 54       		.byte	84
 1564 0078 FE       		.byte	-2
 1565 0079 7E       		.byte	126
 1566 007a DE       		.byte	-34
 1567 007b 5E       		.byte	94
 1568 007c F6       		.byte	-10
 1569 007d 76       		.byte	118
 1570 007e D6       		.byte	-42
 1571 007f 56       		.byte	86
 1572 0080 03       		.byte	3
 1573 0081 83       		.byte	-125
 1574 0082 23       		.byte	35
 1575 0083 A3       		.byte	-93
 1576 0084 0B       		.byte	11
 1577 0085 8B       		.byte	-117
 1578 0086 2B       		.byte	43
 1579 0087 AB       		.byte	-85
 1580 0088 01       		.byte	1
 1581 0089 81       		.byte	-127
 1582 008a 21       		.byte	33
 1583 008b A1       		.byte	-95
 1584 008c 09       		.byte	9
 1585 008d 89       		.byte	-119
 1586 008e 29       		.byte	41
 1587 008f A9       		.byte	-87
 1588 0090 C3       		.byte	-61
 1589 0091 43       		.byte	67
 1590 0092 E3       		.byte	-29
 1591 0093 63       		.byte	99
 1592 0094 CB       		.byte	-53
 1593 0095 4B       		.byte	75
 1594 0096 EB       		.byte	-21
 1595 0097 6B       		.byte	107
 1596 0098 C1       		.byte	-63
 1597 0099 41       		.byte	65
 1598 009a E1       		.byte	-31
 1599 009b 61       		.byte	97
 1600 009c C9       		.byte	-55
 1601 009d 49       		.byte	73
 1602 009e E9       		.byte	-23
 1603 009f 69       		.byte	105
 1604 00a0 33       		.byte	51
 1605 00a1 B3       		.byte	-77
 1606 00a2 13       		.byte	19
 1607 00a3 93       		.byte	-109
 1608 00a4 3B       		.byte	59
 1609 00a5 BB       		.byte	-69
 1610 00a6 1B       		.byte	27
 1611 00a7 9B       		.byte	-101
 1612 00a8 31       		.byte	49
 1613 00a9 B1       		.byte	-79
 1614 00aa 11       		.byte	17
 1615 00ab 91       		.byte	-111
 1616 00ac 39       		.byte	57
 1617 00ad B9       		.byte	-71
 1618 00ae 19       		.byte	25
 1619 00af 99       		.byte	-103
 1620 00b0 F3       		.byte	-13
 1621 00b1 73       		.byte	115
 1622 00b2 D3       		.byte	-45
 1623 00b3 53       		.byte	83
 1624 00b4 FB       		.byte	-5
 1625 00b5 7B       		.byte	123
 1626 00b6 DB       		.byte	-37
 1627 00b7 5B       		.byte	91
 1628 00b8 F1       		.byte	-15
 1629 00b9 71       		.byte	113
 1630 00ba D1       		.byte	-47
 1631 00bb 51       		.byte	81
 1632 00bc F9       		.byte	-7
 1633 00bd 79       		.byte	121
 1634 00be D9       		.byte	-39
 1635 00bf 59       		.byte	89
 1636 00c0 0F       		.byte	15
 1637 00c1 8F       		.byte	-113
 1638 00c2 2F       		.byte	47
 1639 00c3 AF       		.byte	-81
 1640 00c4 07       		.byte	7
 1641 00c5 87       		.byte	-121
 1642 00c6 27       		.byte	39
 1643 00c7 A7       		.byte	-89
 1644 00c8 0D       		.byte	13
 1645 00c9 8D       		.byte	-115
 1646 00ca 2D       		.byte	45
 1647 00cb AD       		.byte	-83
 1648 00cc 05       		.byte	5
 1649 00cd 85       		.byte	-123
 1650 00ce 25       		.byte	37
 1651 00cf A5       		.byte	-91
 1652 00d0 CF       		.byte	-49
 1653 00d1 4F       		.byte	79
 1654 00d2 EF       		.byte	-17
 1655 00d3 6F       		.byte	111
 1656 00d4 C7       		.byte	-57
 1657 00d5 47       		.byte	71
 1658 00d6 E7       		.byte	-25
 1659 00d7 67       		.byte	103
 1660 00d8 CD       		.byte	-51
 1661 00d9 4D       		.byte	77
 1662 00da ED       		.byte	-19
 1663 00db 6D       		.byte	109
 1664 00dc C5       		.byte	-59
 1665 00dd 45       		.byte	69
 1666 00de E5       		.byte	-27
 1667 00df 65       		.byte	101
 1668 00e0 3F       		.byte	63
 1669 00e1 BF       		.byte	-65
 1670 00e2 1F       		.byte	31
 1671 00e3 9F       		.byte	-97
 1672 00e4 37       		.byte	55
 1673 00e5 B7       		.byte	-73
 1674 00e6 17       		.byte	23
 1675 00e7 97       		.byte	-105
 1676 00e8 3D       		.byte	61
 1677 00e9 BD       		.byte	-67
 1678 00ea 1D       		.byte	29
 1679 00eb 9D       		.byte	-99
 1680 00ec 35       		.byte	53
 1681 00ed B5       		.byte	-75
 1682 00ee 15       		.byte	21
 1683 00ef 95       		.byte	-107
 1684 00f0 FE       		.byte	-2
 1685 00f1 7F       		.byte	127
 1686 00f2 DF       		.byte	-33
 1687 00f3 5F       		.byte	95
 1688 00f4 F7       		.byte	-9
 1689 00f5 77       		.byte	119
 1690 00f6 D7       		.byte	-41
 1691 00f7 57       		.byte	87
 1692 00f8 FD       		.byte	-3
 1693 00f9 7D       		.byte	125
 1694 00fa DD       		.byte	-35
 1695 00fb 5D       		.byte	93
 1696 00fc F5       		.byte	-11
 1697 00fd 75       		.byte	117
 1698 00fe D5       		.byte	-43
 1699 00ff 55       		.byte	85
 1700              		.weak	_ZTS9Fl_Bitmap
 1701              		.section	.rodata._ZTS9Fl_Bitmap,"aG",@progbits,_ZTS9Fl_Bitmap,comdat
 1702              		.align 8
 1705              	_ZTS9Fl_Bitmap:
 1706 0000 39466C5F 		.string	"9Fl_Bitmap"
 1706      4269746D 
 1706      617000
 1707              		.weak	_ZTI9Fl_Bitmap
 1708              		.section	.rodata._ZTI9Fl_Bitmap,"aG",@progbits,_ZTI9Fl_Bitmap,comdat
 1709              		.align 8
 1712              	_ZTI9Fl_Bitmap:
 1713 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 1713      00000000 
 1714 0008 00000000 		.quad	_ZTS9Fl_Bitmap
 1714      00000000 
 1715 0010 00000000 		.quad	_ZTI8Fl_Image
 1715      00000000 
 1716              		.weak	_ZTV9Fl_Bitmap
 1717              		.section	.rodata._ZTV9Fl_Bitmap,"aG",@progbits,_ZTV9Fl_Bitmap,comdat
 1718              		.align 8
 1721              	_ZTV9Fl_Bitmap:
 1722 0000 00000000 		.quad	0
 1722      00000000 
 1723 0008 00000000 		.quad	_ZTI9Fl_Bitmap
 1723      00000000 
 1724 0010 00000000 		.quad	_ZN9Fl_BitmapD1Ev
 1724      00000000 
 1725 0018 00000000 		.quad	_ZN9Fl_BitmapD0Ev
 1725      00000000 
 1726 0020 00000000 		.quad	_ZN9Fl_Bitmap4copyEii
 1726      00000000 
 1727 0028 00000000 		.quad	_ZN8Fl_Image13color_averageEjf
 1727      00000000 
 1728 0030 00000000 		.quad	_ZN8Fl_Image10desaturateEv
 1728      00000000 
 1729 0038 00000000 		.quad	_ZN9Fl_Bitmap5labelEP9Fl_Widget
 1729      00000000 
 1730 0040 00000000 		.quad	_ZN9Fl_Bitmap5labelEP12Fl_Menu_Item
 1730      00000000 
 1731 0048 00000000 		.quad	_ZN9Fl_Bitmap4drawEiiiiii
 1731      00000000 
 1732 0050 00000000 		.quad	_ZN9Fl_Bitmap7uncacheEv
 1732      00000000 
 1733              		.text
 1734              	.Letext0:
 1735              		.section	.text.unlikely._ZN9Fl_Bitmap4drawEiiiiii
 1736              	.Letext_cold0:
 1737              		.file 8 "fltk-1.3.4-1/FL/fl_types.h"
 1738              		.file 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 1739              		.file 10 "/usr/include/x86_64-linux-gnu/bits/types.h"
 1740              		.file 11 "/usr/include/libio.h"
 1741              		.file 12 "fltk-1.3.4-1/FL/Enumerations.H"
 1742              		.file 13 "fltk-1.3.4-1/FL/Fl.H"
 1743              		.file 14 "/usr/include/X11/X.h"
 1744              		.file 15 "/usr/include/X11/Xlib.h"
 1745              		.file 16 "fltk-1.3.4-1/FL/x.H"
 1746              		.file 17 "fltk-1.3.4-1/FL/Fl_Device.H"
 1747              		.file 18 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Bitmap.cxx
     /tmp/ccDbK5UZ.s:16     .text._ZN9Fl_Bitmap4drawEiiiiii:0000000000000000 _ZN9Fl_Bitmap4drawEiiiiii
     /tmp/ccDbK5UZ.s:67     .text._ZN9Fl_Bitmap5labelEP9Fl_Widget:0000000000000000 _ZN9Fl_Bitmap5labelEP9Fl_Widget
     /tmp/ccDbK5UZ.s:97     .text._ZN9Fl_Bitmap7uncacheEv:0000000000000000 _ZN9Fl_Bitmap7uncacheEv
     /tmp/ccDbK5UZ.s:150    .text._ZN9Fl_BitmapD2Ev:0000000000000000 _ZN9Fl_BitmapD2Ev
     /tmp/ccDbK5UZ.s:1721   .rodata._ZTV9Fl_Bitmap:0000000000000000 _ZTV9Fl_Bitmap
     /tmp/ccDbK5UZ.s:150    .text._ZN9Fl_BitmapD2Ev:0000000000000000 _ZN9Fl_BitmapD1Ev
     /tmp/ccDbK5UZ.s:242    .text._ZN9Fl_BitmapD0Ev:0000000000000000 _ZN9Fl_BitmapD0Ev
     /tmp/ccDbK5UZ.s:277    .text._ZN9Fl_Bitmap5labelEP12Fl_Menu_Item:0000000000000000 _ZN9Fl_Bitmap5labelEP12Fl_Menu_Item
     /tmp/ccDbK5UZ.s:337    .text._ZN9Fl_Bitmap4copyEii:0000000000000000 _ZN9Fl_Bitmap4copyEii
     /tmp/ccDbK5UZ.s:770    .text._Z17fl_create_bitmaskiiPKh:0000000000000000 _Z17fl_create_bitmaskiiPKh
     /tmp/ccDbK5UZ.s:802    .text._Z17fl_delete_bitmaskm:0000000000000000 _Z17fl_delete_bitmaskm
     /tmp/ccDbK5UZ.s:828    .text._Z19fl_create_alphamaskiiiiPKh:0000000000000000 _Z19fl_create_alphamaskiiiiPKh
     /tmp/ccDbK5UZ.s:1443   .rodata._ZZ19fl_create_alphamaskiiiiPKhE6dither:0000000000000000 _ZZ19fl_create_alphamaskiiiiPKhE6dither
     /tmp/ccDbK5UZ.s:1049   .text._ZN9Fl_Bitmap5startEiiiiRiS0_S0_S0_S0_S0_:0000000000000000 _ZN9Fl_Bitmap5startEiiiiRiS0_S0_S0_S0_S0_
     /tmp/ccDbK5UZ.s:1285   .text._ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Bitmapiiiiii:0000000000000000 _ZN23Fl_Xlib_Graphics_Driver4drawEP9Fl_Bitmapiiiiii
     /tmp/ccDbK5UZ.s:1705   .rodata._ZTS9Fl_Bitmap:0000000000000000 _ZTS9Fl_Bitmap
     /tmp/ccDbK5UZ.s:1712   .rodata._ZTI9Fl_Bitmap:0000000000000000 _ZTI9Fl_Bitmap
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
                           .group:0000000000000000 wm4.Fl_Paged_Device.H.24.17d293ffe430c1a32b384d9c155f7090
                           .group:0000000000000000 wm4.stdarg.h.31.e48e8d41856ab22392ce632954c719ef
                           .group:0000000000000000 wm4.config.h.24.f7f57dd06fbd81a364d1f27e2f49ea0f
                           .group:0000000000000000 wm4.ctype.h.23.e07e90a712cd8c9fef7ce456e52ef793
                           .group:0000000000000000 wm4.flstring.h.79.fb8d8a4ea08e021e559390350538fdcd

UNDEFINED SYMBOLS
fl_graphics_driver
fl_display
XFreePixmap
_ZdaPv
_ZN8Fl_ImageD2Ev
_ZdlPv
_ZN8Fl_Image7measureEPK8Fl_LabelRiS3_
_ZN8Fl_Image9labeltypeEPK8Fl_Labeliiiij
_ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
_Znam
_Znwm
_ZN8Fl_ImageC2Eiii
memset
memcpy
fl_window
XCreateBitmapFromData
_ZN8Fl_Image10draw_emptyEii
fl_gc
XSetStipple
XSetTSOrigin
XSetFillStyle
XFillRectangle
__stack_chk_fail
_ZTVN10__cxxabiv120__si_class_type_infoE
_ZTI8Fl_Image
_ZN8Fl_Image13color_averageEjf
_ZN8Fl_Image10desaturateEv
