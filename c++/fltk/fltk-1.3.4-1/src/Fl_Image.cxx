   1              		.file	"Fl_Image.cxx"
   2              		.text
   3              	.Ltext0:
   4              		.section	.text.unlikely._ZN8Fl_ImageD2Ev,"ax",@progbits
   5              		.align 2
   6              	.LCOLDB0:
   7              		.section	.text._ZN8Fl_ImageD2Ev,"ax",@progbits
   8              	.LHOTB0:
   9              		.align 2
  10              		.p2align 4,,15
  11              		.section	.text.unlikely._ZN8Fl_ImageD2Ev
  12              	.Ltext_cold0:
  13              		.section	.text._ZN8Fl_ImageD2Ev
  14              		.globl	_ZN8Fl_ImageD2Ev
  16              	_ZN8Fl_ImageD2Ev:
  17              	.LFB557:
  18              		.file 1 "fltk-1.3.4-1/src/Fl_Image.cxx"
   1:fltk-1.3.4-1/src/Fl_Image.cxx **** ...
  19              		.loc 1 55 0
  20              		.cfi_startproc
  21              	.LVL0:
  22 0000 F3C3     		rep ret
  23              		.cfi_endproc
  24              	.LFE557:
  26              		.section	.text.unlikely._ZN8Fl_ImageD2Ev
  27              	.LCOLDE0:
  28              		.section	.text._ZN8Fl_ImageD2Ev
  29              	.LHOTE0:
  30              		.globl	_ZN8Fl_ImageD1Ev
  31              		.set	_ZN8Fl_ImageD1Ev,_ZN8Fl_ImageD2Ev
  32              		.section	.text.unlikely._ZN8Fl_Image13color_averageEjf,"ax",@progbits
  33              		.align 2
  34              	.LCOLDB1:
  35              		.section	.text._ZN8Fl_Image13color_averageEjf,"ax",@progbits
  36              	.LHOTB1:
  37              		.align 2
  38              		.p2align 4,,15
  39              		.globl	_ZN8Fl_Image13color_averageEjf
  41              	_ZN8Fl_Image13color_averageEjf:
  42              	.LFB564:
  43              		.loc 1 106 0
  44              		.cfi_startproc
  45              	.LVL1:
  46 0000 F3C3     		rep ret
  47              		.cfi_endproc
  48              	.LFE564:
  50              		.section	.text.unlikely._ZN8Fl_Image13color_averageEjf
  51              	.LCOLDE1:
  52              		.section	.text._ZN8Fl_Image13color_averageEjf
  53              	.LHOTE1:
  54              		.section	.text.unlikely._ZN8Fl_Image10desaturateEv,"ax",@progbits
  55              		.align 2
  56              	.LCOLDB2:
  57              		.section	.text._ZN8Fl_Image10desaturateEv,"ax",@progbits
  58              	.LHOTB2:
  59              		.align 2
  60              		.p2align 4,,15
  61              		.globl	_ZN8Fl_Image10desaturateEv
  63              	_ZN8Fl_Image10desaturateEv:
  64              	.LFB565:
  65              		.loc 1 117 0
  66              		.cfi_startproc
  67              	.LVL2:
  68 0000 F3C3     		rep ret
  69              		.cfi_endproc
  70              	.LFE565:
  72              		.section	.text.unlikely._ZN8Fl_Image10desaturateEv
  73              	.LCOLDE2:
  74              		.section	.text._ZN8Fl_Image10desaturateEv
  75              	.LHOTE2:
  76              		.globl	_ZN8Fl_Image7uncacheEv
  77              		.set	_ZN8Fl_Image7uncacheEv,_ZN8Fl_Image10desaturateEv
  78              		.section	.text.unlikely._ZN8Fl_Image5labelEP9Fl_Widget,"ax",@progbits
  79              		.align 2
  80              	.LCOLDB3:
  81              		.section	.text._ZN8Fl_Image5labelEP9Fl_Widget,"ax",@progbits
  82              	.LHOTB3:
  83              		.align 2
  84              		.p2align 4,,15
  85              		.globl	_ZN8Fl_Image5labelEP9Fl_Widget
  87              	_ZN8Fl_Image5labelEP9Fl_Widget:
  88              	.LFB566:
  89              		.loc 1 127 0
  90              		.cfi_startproc
  91              	.LVL3:
  92              	.LBB626:
  93              	.LBB627:
  94              		.file 2 "fltk-1.3.4-1/FL/Fl_Widget.H"
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
  95              		.loc 2 521 0
  96 0000 48897E38 		movq	%rdi, 56(%rsi)
  97              	.LVL4:
  98 0004 C3       		ret
  99              	.LBE627:
 100              	.LBE626:
 101              		.cfi_endproc
 102              	.LFE566:
 104              		.section	.text.unlikely._ZN8Fl_Image5labelEP9Fl_Widget
 105              	.LCOLDE3:
 106              		.section	.text._ZN8Fl_Image5labelEP9Fl_Widget
 107              	.LHOTE3:
 108              		.section	.text.unlikely._ZN8Fl_Image9labeltypeEPK8Fl_Labeliiiij,"ax",@progbits
 109              		.align 2
 110              	.LCOLDB4:
 111              		.section	.text._ZN8Fl_Image9labeltypeEPK8Fl_Labeliiiij,"ax",@progbits
 112              	.LHOTB4:
 113              		.align 2
 114              		.p2align 4,,15
 115              		.globl	_ZN8Fl_Image9labeltypeEPK8Fl_Labeliiiij
 117              	_ZN8Fl_Image9labeltypeEPK8Fl_Labeliiiij:
 118              	.LFB569:
 119              		.loc 1 187 0
 120              		.cfi_startproc
 121              	.LVL5:
 122 0000 4157     		pushq	%r15
 123              		.cfi_def_cfa_offset 16
 124              		.cfi_offset 15, -16
 125 0002 4156     		pushq	%r14
 126              		.cfi_def_cfa_offset 24
 127              		.cfi_offset 14, -24
 128 0004 4189CF   		movl	%ecx, %r15d
 129 0007 4155     		pushq	%r13
 130              		.cfi_def_cfa_offset 32
 131              		.cfi_offset 13, -32
 132 0009 4154     		pushq	%r12
 133              		.cfi_def_cfa_offset 40
 134              		.cfi_offset 12, -40
 135 000b 4189D5   		movl	%edx, %r13d
 136 000e 55       		pushq	%rbp
 137              		.cfi_def_cfa_offset 48
 138              		.cfi_offset 6, -48
 139 000f 53       		pushq	%rbx
 140              		.cfi_def_cfa_offset 56
 141              		.cfi_offset 3, -56
 142              		.loc 1 193 0
 143 0010 31ED     		xorl	%ebp, %ebp
 144              		.loc 1 187 0
 145 0012 4189F4   		movl	%esi, %r12d
 146 0015 4883EC18 		subq	$24, %rsp
 147              		.cfi_def_cfa_offset 80
 148              		.loc 1 193 0
 149 0019 41F6C104 		testb	$4, %r9b
 150              		.loc 1 191 0
 151 001d 4C8B37   		movq	(%rdi), %r14
 152              	.LVL6:
 153              		.loc 1 193 0
 154 0020 750C     		jne	.L6
 155              		.loc 1 194 0
 156 0022 41F6C108 		testb	$8, %r9b
 157 0026 7470     		je	.L7
 158              	.LVL7:
 159              		.loc 1 194 0 is_stmt 0 discriminator 1
 160 0028 418B6E08 		movl	8(%r14), %ebp
 161 002c 29CD     		subl	%ecx, %ebp
 162              	.LVL8:
 163              	.L6:
 164              		.loc 1 197 0 is_stmt 1
 165 002e 31DB     		xorl	%ebx, %ebx
 166 0030 41F6C101 		testb	$1, %r9b
 167 0034 7516     		jne	.L8
 168              		.loc 1 198 0
 169 0036 4183E102 		andl	$2, %r9d
 170              	.LVL9:
 171 003a 7574     		jne	.L14
 172              	.LVL10:
 173              		.loc 1 199 0
 174 003c 418B460C 		movl	12(%r14), %eax
 175 0040 4429C0   		subl	%r8d, %eax
 176 0043 89C3     		movl	%eax, %ebx
 177 0045 C1EB1F   		shrl	$31, %ebx
 178 0048 01C3     		addl	%eax, %ebx
 179 004a D1FB     		sarl	%ebx
 180              	.LVL11:
 181              	.L8:
 182              	.LBB628:
 183              	.LBB629:
 184              		.file 3 "fltk-1.3.4-1/FL/fl_draw.H"
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
 185              		.loc 3 52 0
 186 004c 488B0500 		movq	fl_graphics_driver(%rip), %rax
 186      000000
 187 0053 44894424 		movl	%r8d, 12(%rsp)
 187      0C
 188              	.LVL12:
 189 0058 8B7720   		movl	32(%rdi), %esi
 190              	.LVL13:
 191 005b 488B10   		movq	(%rax), %rdx
 192              	.LVL14:
 193 005e 4889C7   		movq	%rax, %rdi
 194              	.LVL15:
 195 0061 FF928800 		call	*136(%rdx)
 195      0000
 196              	.LVL16:
 197              	.LBE629:
 198              	.LBE628:
 199              		.loc 1 203 0
 200 0067 4883EC08 		subq	$8, %rsp
 201              		.cfi_def_cfa_offset 88
 202 006b 498B06   		movq	(%r14), %rax
 203 006e 4189E9   		movl	%ebp, %r9d
 204 0071 53       		pushq	%rbx
 205              		.cfi_def_cfa_offset 96
 206 0072 4489F9   		movl	%r15d, %ecx
 207 0075 448B4424 		movl	28(%rsp), %r8d
 207      1C
 208 007a 4489EA   		movl	%r13d, %edx
 209 007d 4489E6   		movl	%r12d, %esi
 210 0080 4C89F7   		movq	%r14, %rdi
 211 0083 FF5038   		call	*56(%rax)
 212              	.LVL17:
 213              		.loc 1 204 0
 214 0086 4883C428 		addq	$40, %rsp
 215              		.cfi_def_cfa_offset 56
 216 008a 5B       		popq	%rbx
 217              		.cfi_def_cfa_offset 48
 218              	.LVL18:
 219 008b 5D       		popq	%rbp
 220              		.cfi_def_cfa_offset 40
 221              	.LVL19:
 222 008c 415C     		popq	%r12
 223              		.cfi_def_cfa_offset 32
 224              	.LVL20:
 225 008e 415D     		popq	%r13
 226              		.cfi_def_cfa_offset 24
 227              	.LVL21:
 228 0090 415E     		popq	%r14
 229              		.cfi_def_cfa_offset 16
 230              	.LVL22:
 231 0092 415F     		popq	%r15
 232              		.cfi_def_cfa_offset 8
 233              	.LVL23:
 234 0094 C3       		ret
 235              	.LVL24:
 236              		.p2align 4,,10
 237 0095 0F1F00   		.p2align 3
 238              	.L7:
 239              		.cfi_def_cfa_offset 80
 240              		.loc 1 195 0
 241 0098 418B4608 		movl	8(%r14), %eax
 242 009c 29C8     		subl	%ecx, %eax
 243 009e 89C5     		movl	%eax, %ebp
 244 00a0 C1ED1F   		shrl	$31, %ebp
 245 00a3 01C5     		addl	%eax, %ebp
 246 00a5 D1FD     		sarl	%ebp
 247              	.LVL25:
 248 00a7 EB85     		jmp	.L6
 249              	.LVL26:
 250 00a9 0F1F8000 		.p2align 4,,10
 250      000000
 251              		.p2align 3
 252              	.L14:
 253              		.loc 1 198 0 discriminator 1
 254 00b0 418B5E0C 		movl	12(%r14), %ebx
 255 00b4 4429C3   		subl	%r8d, %ebx
 256              	.LVL27:
 257 00b7 EB93     		jmp	.L8
 258              		.cfi_endproc
 259              	.LFE569:
 261              		.section	.text.unlikely._ZN8Fl_Image9labeltypeEPK8Fl_Labeliiiij
 262              	.LCOLDE4:
 263              		.section	.text._ZN8Fl_Image9labeltypeEPK8Fl_Labeliiiij
 264              	.LHOTE4:
 265              		.section	.text.unlikely._ZN8Fl_Image7measureEPK8Fl_LabelRiS3_,"ax",@progbits
 266              		.align 2
 267              	.LCOLDB5:
 268              		.section	.text._ZN8Fl_Image7measureEPK8Fl_LabelRiS3_,"ax",@progbits
 269              	.LHOTB5:
 270              		.align 2
 271              		.p2align 4,,15
 272              		.globl	_ZN8Fl_Image7measureEPK8Fl_LabelRiS3_
 274              	_ZN8Fl_Image7measureEPK8Fl_LabelRiS3_:
 275              	.LFB570:
 276              		.loc 1 209 0
 277              		.cfi_startproc
 278              	.LVL28:
 279              		.loc 1 212 0
 280 0000 488B07   		movq	(%rdi), %rax
 281              	.LVL29:
 282 0003 8B4808   		movl	8(%rax), %ecx
 283              	.LVL30:
 284              		.loc 1 214 0
 285 0006 890E     		movl	%ecx, (%rsi)
 286 0008 8B400C   		movl	12(%rax), %eax
 287              	.LVL31:
 288              		.loc 1 215 0
 289 000b 8902     		movl	%eax, (%rdx)
 290 000d C3       		ret
 291              		.cfi_endproc
 292              	.LFE570:
 294              		.section	.text.unlikely._ZN8Fl_Image7measureEPK8Fl_LabelRiS3_
 295              	.LCOLDE5:
 296              		.section	.text._ZN8Fl_Image7measureEPK8Fl_LabelRiS3_
 297              	.LHOTE5:
 298              		.section	.text.unlikely._ZN12Fl_RGB_Image4drawEiiiiii,"ax",@progbits
 299              		.align 2
 300              	.LCOLDB6:
 301              		.section	.text._ZN12Fl_RGB_Image4drawEiiiiii,"ax",@progbits
 302              	.LHOTB6:
 303              		.align 2
 304              		.p2align 4,,15
 305              		.globl	_ZN12Fl_RGB_Image4drawEiiiiii
 307              	_ZN12Fl_RGB_Image4drawEiiiiii:
 308              	.LFB588:
 309              		.loc 1 651 0
 310              		.cfi_startproc
 311              	.LVL32:
 312 0000 4883EC08 		subq	$8, %rsp
 313              		.cfi_def_cfa_offset 16
 314              		.loc 1 651 0
 315 0004 4989FA   		movq	%rdi, %r10
 316              		.loc 1 652 0
 317 0007 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 317      000000
 318              	.LVL33:
 319 000e 448B5C24 		movl	16(%rsp), %r11d
 319      10
 320 0013 488B07   		movq	(%rdi), %rax
 321 0016 4153     		pushq	%r11
 322              		.cfi_def_cfa_offset 24
 323 0018 4151     		pushq	%r9
 324              		.cfi_def_cfa_offset 32
 325 001a 4589C1   		movl	%r8d, %r9d
 326              	.LVL34:
 327 001d 4189C8   		movl	%ecx, %r8d
 328              	.LVL35:
 329 0020 89D1     		movl	%edx, %ecx
 330              	.LVL36:
 331 0022 89F2     		movl	%esi, %edx
 332              	.LVL37:
 333 0024 4C89D6   		movq	%r10, %rsi
 334              	.LVL38:
 335 0027 FF909801 		call	*408(%rax)
 335      0000
 336              	.LVL39:
 337              		.loc 1 653 0
 338 002d 4883C418 		addq	$24, %rsp
 339              		.cfi_def_cfa_offset 8
 340 0031 C3       		ret
 341              		.cfi_endproc
 342              	.LFE588:
 344              		.section	.text.unlikely._ZN12Fl_RGB_Image4drawEiiiiii
 345              	.LCOLDE6:
 346              		.section	.text._ZN12Fl_RGB_Image4drawEiiiiii
 347              	.LHOTE6:
 348              		.section	.text.unlikely._ZN12Fl_RGB_Image5labelEP9Fl_Widget,"ax",@progbits
 349              		.align 2
 350              	.LCOLDB7:
 351              		.section	.text._ZN12Fl_RGB_Image5labelEP9Fl_Widget,"ax",@progbits
 352              	.LHOTB7:
 353              		.align 2
 354              		.p2align 4,,15
 355              		.globl	_ZN12Fl_RGB_Image5labelEP9Fl_Widget
 357              	_ZN12Fl_RGB_Image5labelEP9Fl_Widget:
 358              	.LFB592:
 359              		.loc 1 874 0
 360              		.cfi_startproc
 361              	.LVL40:
 362              	.LBB630:
 363              	.LBB631:
 364              		.loc 2 521 0
 365 0000 48897E38 		movq	%rdi, 56(%rsi)
 366              	.LVL41:
 367 0004 C3       		ret
 368              	.LBE631:
 369              	.LBE630:
 370              		.cfi_endproc
 371              	.LFE592:
 373              		.section	.text.unlikely._ZN12Fl_RGB_Image5labelEP9Fl_Widget
 374              	.LCOLDE7:
 375              		.section	.text._ZN12Fl_RGB_Image5labelEP9Fl_Widget
 376              	.LHOTE7:
 377              		.section	.text.unlikely._ZN8Fl_ImageD0Ev,"ax",@progbits
 378              		.align 2
 379              	.LCOLDB8:
 380              		.section	.text._ZN8Fl_ImageD0Ev,"ax",@progbits
 381              	.LHOTB8:
 382              		.align 2
 383              		.p2align 4,,15
 384              		.globl	_ZN8Fl_ImageD0Ev
 386              	_ZN8Fl_ImageD0Ev:
 387              	.LFB559:
 388              		.loc 1 55 0
 389              		.cfi_startproc
 390              	.LVL42:
 391              		.loc 1 56 0
 392 0000 E9000000 		jmp	_ZdlPv
 392      00
 393              	.LVL43:
 394              		.cfi_endproc
 395              	.LFE559:
 397              		.section	.text.unlikely._ZN8Fl_ImageD0Ev
 398              	.LCOLDE8:
 399              		.section	.text._ZN8Fl_ImageD0Ev
 400              	.LHOTE8:
 401              		.section	.text.unlikely._ZN8Fl_Image4copyEii,"ax",@progbits
 402              		.align 2
 403              	.LCOLDB9:
 404              		.section	.text._ZN8Fl_Image4copyEii,"ax",@progbits
 405              	.LHOTB9:
 406              		.align 2
 407              		.p2align 4,,15
 408              		.globl	_ZN8Fl_Image4copyEii
 410              	_ZN8Fl_Image4copyEii:
 411              	.LFB563:
 412              		.loc 1 91 0
 413              		.cfi_startproc
 414              	.LVL44:
 415 0000 4154     		pushq	%r12
 416              		.cfi_def_cfa_offset 16
 417              		.cfi_offset 12, -16
 418 0002 55       		pushq	%rbp
 419              		.cfi_def_cfa_offset 24
 420              		.cfi_offset 6, -24
 421 0003 4189F4   		movl	%esi, %r12d
 422 0006 53       		pushq	%rbx
 423              		.cfi_def_cfa_offset 32
 424              		.cfi_offset 3, -32
 425 0007 8B5F10   		movl	16(%rdi), %ebx
 426              	.LVL45:
 427              		.loc 1 91 0
 428 000a 89D5     		movl	%edx, %ebp
 429              		.loc 1 92 0
 430 000c BF280000 		movl	$40, %edi
 430      00
 431              	.LVL46:
 432 0011 E8000000 		call	_Znwm
 432      00
 433              	.LVL47:
 434              	.LBB632:
 435              	.LBB633:
 436              		.loc 1 48 0
 437 0016 48C70000 		movq	$_ZTV8Fl_Image+16, (%rax)
 437      000000
 438 001d 44896008 		movl	%r12d, 8(%rax)
 439 0021 89680C   		movl	%ebp, 12(%rax)
 440 0024 895810   		movl	%ebx, 16(%rax)
 441 0027 C7401400 		movl	$0, 20(%rax)
 441      000000
 442 002e C7401800 		movl	$0, 24(%rax)
 442      000000
 443 0035 48C74020 		movq	$0, 32(%rax)
 443      00000000 
 444              	.LVL48:
 445              	.LBE633:
 446              	.LBE632:
 447              		.loc 1 93 0
 448 003d 5B       		popq	%rbx
 449              		.cfi_def_cfa_offset 24
 450 003e 5D       		popq	%rbp
 451              		.cfi_def_cfa_offset 16
 452              	.LVL49:
 453 003f 415C     		popq	%r12
 454              		.cfi_def_cfa_offset 8
 455              	.LVL50:
 456 0041 C3       		ret
 457              		.cfi_endproc
 458              	.LFE563:
 460              		.section	.text.unlikely._ZN8Fl_Image4copyEii
 461              	.LCOLDE9:
 462              		.section	.text._ZN8Fl_Image4copyEii
 463              	.LHOTE9:
 464              		.section	.text.unlikely._ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item,"ax",@progbits
 465              		.align 2
 466              	.LCOLDB10:
 467              		.section	.text._ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item,"ax",@progbits
 468              	.LHOTB10:
 469              		.align 2
 470              		.p2align 4,,15
 471              		.globl	_ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item
 473              	_ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item:
 474              	.LFB593:
 475              		.loc 1 878 0
 476              		.cfi_startproc
 477              	.LVL51:
 478 0000 55       		pushq	%rbp
 479              		.cfi_def_cfa_offset 16
 480              		.cfi_offset 6, -16
 481 0001 53       		pushq	%rbx
 482              		.cfi_def_cfa_offset 24
 483              		.cfi_offset 3, -24
 484 0002 4889FD   		movq	%rdi, %rbp
 485 0005 4889F3   		movq	%rsi, %rbx
 486              		.loc 1 879 0
 487 0008 BA000000 		movl	$_ZN8Fl_Image7measureEPK8Fl_LabelRiS3_, %edx
 487      00
 488 000d BE000000 		movl	$_ZN8Fl_Image9labeltypeEPK8Fl_Labeliiiij, %esi
 488      00
 489              	.LVL52:
 490              		.loc 1 878 0
 491 0012 4883EC08 		subq	$8, %rsp
 492              		.cfi_def_cfa_offset 32
 493              		.loc 1 879 0
 494 0016 BF070000 		movl	$7, %edi
 494      00
 495              	.LVL53:
 496 001b E8000000 		call	_ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
 496      00
 497              	.LVL54:
 498              	.LBB634:
 499              	.LBB635:
 500              		.file 4 "fltk-1.3.4-1/FL/Fl_Menu_Item.H"
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
 501              		.loc 4 154 0
 502 0020 48892B   		movq	%rbp, (%rbx)
 503              	.LVL55:
 504 0023 C6432407 		movb	$7, 36(%rbx)
 505              	.LBE635:
 506              	.LBE634:
 507              		.loc 1 881 0
 508 0027 4883C408 		addq	$8, %rsp
 509              		.cfi_def_cfa_offset 24
 510 002b 5B       		popq	%rbx
 511              		.cfi_def_cfa_offset 16
 512              	.LVL56:
 513 002c 5D       		popq	%rbp
 514              		.cfi_def_cfa_offset 8
 515              	.LVL57:
 516 002d C3       		ret
 517              		.cfi_endproc
 518              	.LFE593:
 520              		.section	.text.unlikely._ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item
 521              	.LCOLDE10:
 522              		.section	.text._ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item
 523              	.LHOTE10:
 524              		.globl	_ZN8Fl_Image5labelEP12Fl_Menu_Item
 525              		.set	_ZN8Fl_Image5labelEP12Fl_Menu_Item,_ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item
 526              		.section	.text.unlikely._ZN12Fl_RGB_Image7uncacheEv,"ax",@progbits
 527              		.align 2
 528              	.LCOLDB11:
 529              		.section	.text._ZN12Fl_RGB_Image7uncacheEv,"ax",@progbits
 530              	.LHOTB11:
 531              		.align 2
 532              		.p2align 4,,15
 533              		.globl	_ZN12Fl_RGB_Image7uncacheEv
 535              	_ZN12Fl_RGB_Image7uncacheEv:
 536              	.LFB583:
 537              		.loc 1 325 0
 538              		.cfi_startproc
 539              	.LVL58:
 540 0000 53       		pushq	%rbx
 541              		.cfi_def_cfa_offset 16
 542              		.cfi_offset 3, -16
 543              		.loc 1 334 0
 544 0001 8B7734   		movl	52(%rdi), %esi
 545              		.loc 1 325 0
 546 0004 4889FB   		movq	%rdi, %rbx
 547              		.loc 1 334 0
 548 0007 85F6     		testl	%esi, %esi
 549 0009 7525     		jne	.L34
 550              	.LVL59:
 551              	.L25:
 552              		.loc 1 339 0
 553 000b 8B7B38   		movl	56(%rbx), %edi
 554 000e 85FF     		testl	%edi, %edi
 555 0010 7506     		jne	.L35
 556              		.loc 1 344 0
 557 0012 5B       		popq	%rbx
 558              		.cfi_remember_state
 559              		.cfi_def_cfa_offset 8
 560              	.LVL60:
 561 0013 C3       		ret
 562              	.LVL61:
 563              		.p2align 4,,10
 564 0014 0F1F4000 		.p2align 3
 565              	.L35:
 566              		.cfi_restore_state
 567              		.loc 1 340 0
 568 0018 E8000000 		call	_Z17fl_delete_bitmaskm
 568      00
 569              	.LVL62:
 570              		.loc 1 341 0
 571 001d C7433800 		movl	$0, 56(%rbx)
 571      000000
 572              		.loc 1 344 0
 573 0024 5B       		popq	%rbx
 574              		.cfi_remember_state
 575              		.cfi_def_cfa_offset 8
 576              	.LVL63:
 577 0025 C3       		ret
 578              	.LVL64:
 579 0026 662E0F1F 		.p2align 4,,10
 579      84000000 
 579      0000
 580              		.p2align 3
 581              	.L34:
 582              		.cfi_restore_state
 583              		.loc 1 335 0
 584 0030 488B3D00 		movq	fl_display(%rip), %rdi
 584      000000
 585 0037 E8000000 		call	XFreePixmap
 585      00
 586              	.LVL65:
 587              		.loc 1 336 0
 588 003c C7433400 		movl	$0, 52(%rbx)
 588      000000
 589 0043 EBC6     		jmp	.L25
 590              		.cfi_endproc
 591              	.LFE583:
 593              		.section	.text.unlikely._ZN12Fl_RGB_Image7uncacheEv
 594              	.LCOLDE11:
 595              		.section	.text._ZN12Fl_RGB_Image7uncacheEv
 596              	.LHOTE11:
 597              		.section	.text.unlikely._ZN12Fl_RGB_ImageD2Ev,"ax",@progbits
 598              		.align 2
 599              	.LCOLDB12:
 600              		.section	.text._ZN12Fl_RGB_ImageD2Ev,"ax",@progbits
 601              	.LHOTB12:
 602              		.align 2
 603              		.p2align 4,,15
 604              		.globl	_ZN12Fl_RGB_ImageD2Ev
 606              	_ZN12Fl_RGB_ImageD2Ev:
 607              	.LFB580:
 608              		.loc 1 315 0
 609              		.cfi_startproc
 610              	.LVL66:
 611 0000 53       		pushq	%rbx
 612              		.cfi_def_cfa_offset 16
 613              		.cfi_offset 3, -16
 614              		.loc 1 315 0
 615 0001 4889FB   		movq	%rdi, %rbx
 616              	.LBB636:
 617 0004 48C70700 		movq	$_ZTV12Fl_RGB_Image+16, (%rdi)
 617      000000
 618              		.loc 1 320 0
 619 000b E8000000 		call	_ZN12Fl_RGB_Image7uncacheEv
 619      00
 620              	.LVL67:
 621              		.loc 1 321 0
 622 0010 8B4330   		movl	48(%rbx), %eax
 623 0013 85C0     		testl	%eax, %eax
 624 0015 7419     		je	.L36
 625              		.loc 1 321 0 is_stmt 0 discriminator 1
 626 0017 488B7B28 		movq	40(%rbx), %rdi
 627 001b 4885FF   		testq	%rdi, %rdi
 628 001e 7410     		je	.L36
 629              	.LBE636:
 630              		.loc 1 323 0 is_stmt 1 discriminator 2
 631 0020 5B       		popq	%rbx
 632              		.cfi_remember_state
 633              		.cfi_def_cfa_offset 8
 634              	.LVL68:
 635              	.LBB637:
 636              		.loc 1 321 0 discriminator 2
 637 0021 E9000000 		jmp	_ZdaPv
 637      00
 638              	.LVL69:
 639 0026 662E0F1F 		.p2align 4,,10
 639      84000000 
 639      0000
 640              		.p2align 3
 641              	.L36:
 642              		.cfi_restore_state
 643              	.LBE637:
 644              		.loc 1 323 0
 645 0030 5B       		popq	%rbx
 646              		.cfi_def_cfa_offset 8
 647              	.LVL70:
 648 0031 C3       		ret
 649              		.cfi_endproc
 650              	.LFE580:
 652              		.section	.text.unlikely._ZN12Fl_RGB_ImageD2Ev
 653              	.LCOLDE12:
 654              		.section	.text._ZN12Fl_RGB_ImageD2Ev
 655              	.LHOTE12:
 656              		.globl	_ZN12Fl_RGB_ImageD1Ev
 657              		.set	_ZN12Fl_RGB_ImageD1Ev,_ZN12Fl_RGB_ImageD2Ev
 658              		.section	.text.unlikely._ZN12Fl_RGB_ImageD0Ev,"ax",@progbits
 659              		.align 2
 660              	.LCOLDB13:
 661              		.section	.text._ZN12Fl_RGB_ImageD0Ev,"ax",@progbits
 662              	.LHOTB13:
 663              		.align 2
 664              		.p2align 4,,15
 665              		.globl	_ZN12Fl_RGB_ImageD0Ev
 667              	_ZN12Fl_RGB_ImageD0Ev:
 668              	.LFB582:
 669              		.loc 1 315 0
 670              		.cfi_startproc
 671              	.LVL71:
 672 0000 53       		pushq	%rbx
 673              		.cfi_def_cfa_offset 16
 674              		.cfi_offset 3, -16
 675              		.loc 1 315 0
 676 0001 4889FB   		movq	%rdi, %rbx
 677              		.loc 1 323 0
 678 0004 E8000000 		call	_ZN12Fl_RGB_ImageD1Ev
 678      00
 679              	.LVL72:
 680 0009 4889DF   		movq	%rbx, %rdi
 681 000c 5B       		popq	%rbx
 682              		.cfi_def_cfa_offset 8
 683              	.LVL73:
 684 000d E9000000 		jmp	_ZdlPv
 684      00
 685              	.LVL74:
 686              		.cfi_endproc
 687              	.LFE582:
 689              		.section	.text.unlikely._ZN12Fl_RGB_ImageD0Ev
 690              	.LCOLDE13:
 691              		.section	.text._ZN12Fl_RGB_ImageD0Ev
 692              	.LHOTE13:
 693              		.section	.text.unlikely._ZN12Fl_RGB_Image4copyEii,"ax",@progbits
 694              		.align 2
 695              	.LCOLDB16:
 696              		.section	.text._ZN12Fl_RGB_Image4copyEii,"ax",@progbits
 697              	.LHOTB16:
 698              		.align 2
 699              		.p2align 4,,15
 700              		.globl	_ZN12Fl_RGB_Image4copyEii
 702              	_ZN12Fl_RGB_Image4copyEii:
 703              	.LFB584:
 704              		.loc 1 346 0
 705              		.cfi_startproc
 706              	.LVL75:
 707 0000 4157     		pushq	%r15
 708              		.cfi_def_cfa_offset 16
 709              		.cfi_offset 15, -16
 710 0002 4156     		pushq	%r14
 711              		.cfi_def_cfa_offset 24
 712              		.cfi_offset 14, -24
 713 0004 4155     		pushq	%r13
 714              		.cfi_def_cfa_offset 32
 715              		.cfi_offset 13, -32
 716 0006 4154     		pushq	%r12
 717              		.cfi_def_cfa_offset 40
 718              		.cfi_offset 12, -40
 719 0008 4989FC   		movq	%rdi, %r12
 720 000b 55       		pushq	%rbp
 721              		.cfi_def_cfa_offset 48
 722              		.cfi_offset 6, -48
 723 000c 53       		pushq	%rbx
 724              		.cfi_def_cfa_offset 56
 725              		.cfi_offset 3, -56
 726 000d 4881ECB8 		subq	$184, %rsp
 726      000000
 727              		.cfi_def_cfa_offset 240
 728 0014 418B6C24 		movl	8(%r12), %ebp
 728      08
 729 0019 458B6C24 		movl	12(%r12), %r13d
 729      0C
 730              		.loc 1 346 0
 731 001e 64488B3C 		movq	%fs:40, %rdi
 731      25280000 
 731      00
 732 0027 4889BC24 		movq	%rdi, 168(%rsp)
 732      A8000000 
 733 002f 31FF     		xorl	%edi, %edi
 734              	.LVL76:
 735 0031 89742430 		movl	%esi, 48(%rsp)
 736 0035 89542458 		movl	%edx, 88(%rsp)
 737              	.LBB638:
 738              		.loc 1 353 0
 739 0039 39EE     		cmpl	%ebp, %esi
 740 003b 0F84D202 		je	.L116
 740      0000
 741              	.L46:
 742              	.LVL77:
 743              		.loc 1 352 0 discriminator 1
 744 0041 85ED     		testl	%ebp, %ebp
 745 0043 0F85E100 		jne	.L117
 745      0000
 746              	.LVL78:
 747              	.L47:
 748 0049 418B5C24 		movl	16(%r12), %ebx
 748      10
 749              	.L49:
 750              	.LBB639:
 751              		.loc 1 354 0
 752 004e 49837C24 		cmpq	$0, 40(%r12)
 752      2800
 753 0054 0F840907 		je	.L51
 753      0000
 754              	.LVL79:
 755              	.LBB640:
 756              		.loc 1 356 0
 757 005a 89EF     		movl	%ebp, %edi
 758 005c 410FAFFD 		imull	%r13d, %edi
 759 0060 0FAFDF   		imull	%edi, %ebx
 760 0063 4863FB   		movslq	%ebx, %rdi
 761 0066 E8000000 		call	_Znam
 761      00
 762              	.LVL80:
 763 006b 4D637C24 		movslq	20(%r12), %r15
 763      14
 764 0070 48894424 		movq	%rax, 8(%rsp)
 764      08
 765              	.LVL81:
 766 0075 418B4424 		movl	16(%r12), %eax
 766      10
 767              	.LVL82:
 768 007a 458B7424 		movl	8(%r12), %r14d
 768      08
 769              	.LVL83:
 770              	.LBB641:
 771              		.loc 1 357 0
 772 007f 4585FF   		testl	%r15d, %r15d
 773 0082 89442410 		movl	%eax, 16(%rsp)
 774 0086 0F853A02 		jne	.L118
 774      0000
 775              	.LVL84:
 776              	.L55:
 777 008c 418B5C24 		movl	12(%r12), %ebx
 777      0C
 778              	.LVL85:
 779              	.LBB642:
 780              	.LBB643:
 781              		.file 5 "/usr/include/x86_64-linux-gnu/bits/string3.h"
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
 782              		.loc 5 53 0
 783 0091 498B7424 		movq	40(%r12), %rsi
 783      28
 784 0096 488B7C24 		movq	8(%rsp), %rdi
 784      08
 785 009b 89DA     		movl	%ebx, %edx
 786 009d 410FAFD6 		imull	%r14d, %edx
 787 00a1 0FAF5424 		imull	16(%rsp), %edx
 787      10
 788 00a6 4863D2   		movslq	%edx, %rdx
 789              	.LVL86:
 790 00a9 E8000000 		call	memcpy
 790      00
 791              	.LVL87:
 792              	.L89:
 793              	.LBE643:
 794              	.LBE642:
 795              	.LBE641:
 796              		.loc 1 369 0
 797 00ae BF400000 		movl	$64, %edi
 797      00
 798 00b3 E8000000 		call	_Znwm
 798      00
 799              	.LVL88:
 800              	.LBB650:
 801              	.LBB651:
 802              	.LBB652:
 803              	.LBB653:
 804              		.loc 1 48 0
 805 00b8 8B7C2410 		movl	16(%rsp), %edi
 806              	.LBE653:
 807              	.LBE652:
 808              		.loc 1 280 0
 809 00bc 488D5028 		leaq	40(%rax), %rdx
 810              	.LBB656:
 811              	.LBB654:
 812              		.loc 1 48 0
 813 00c0 44897008 		movl	%r14d, 8(%rax)
 814 00c4 89580C   		movl	%ebx, 12(%rax)
 815 00c7 C7401400 		movl	$0, 20(%rax)
 815      000000
 816              	.LVL89:
 817              	.LBE654:
 818              	.LBE656:
 819              		.loc 1 278 0
 820 00ce 48C70000 		movq	$_ZTV12Fl_RGB_Image+16, (%rax)
 820      000000
 821 00d5 C7403400 		movl	$0, 52(%rax)
 821      000000
 822              	.LBB657:
 823              	.LBB655:
 824              		.loc 1 48 0
 825 00dc 897810   		movl	%edi, 16(%rax)
 826              	.LBE655:
 827              	.LBE657:
 828              		.loc 1 278 0
 829 00df 488B7C24 		movq	8(%rsp), %rdi
 829      08
 830 00e4 C7403800 		movl	$0, 56(%rax)
 830      000000
 831              	.LVL90:
 832              		.loc 1 280 0
 833 00eb 48895020 		movq	%rdx, 32(%rax)
 834              	.LBB658:
 835              	.LBB659:
 836              		.file 6 "fltk-1.3.4-1/FL/Fl_Image.H"
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
 837              		.loc 6 100 0
 838 00ef C7401801 		movl	$1, 24(%rax)
 838      000000
 839              	.LVL91:
 840              	.LBE659:
 841              	.LBE658:
 842              	.LBE651:
 843              	.LBE650:
 844              		.loc 1 370 0
 845 00f6 C7403001 		movl	$1, 48(%rax)
 845      000000
 846              	.LBB661:
 847              	.LBB660:
 848              		.loc 1 278 0
 849 00fd 48897828 		movq	%rdi, 40(%rax)
 850              	.LVL92:
 851              	.L57:
 852              	.LBE660:
 853              	.LBE661:
 854              	.LBE640:
 855              	.LBE639:
 856              	.LBE638:
 857              		.loc 1 492 0
 858 0101 488BBC24 		movq	168(%rsp), %rdi
 858      A8000000 
 859 0109 6448333C 		xorq	%fs:40, %rdi
 859      25280000 
 859      00
 860 0112 0F85A106 		jne	.L119
 860      0000
 861 0118 4881C4B8 		addq	$184, %rsp
 861      000000
 862              		.cfi_remember_state
 863              		.cfi_def_cfa_offset 56
 864 011f 5B       		popq	%rbx
 865              		.cfi_def_cfa_offset 48
 866 0120 5D       		popq	%rbp
 867              		.cfi_def_cfa_offset 40
 868 0121 415C     		popq	%r12
 869              		.cfi_def_cfa_offset 32
 870 0123 415D     		popq	%r13
 871              		.cfi_def_cfa_offset 24
 872 0125 415E     		popq	%r14
 873              		.cfi_def_cfa_offset 16
 874 0127 415F     		popq	%r15
 875              		.cfi_def_cfa_offset 8
 876 0129 C3       		ret
 877              	.LVL93:
 878              	.L117:
 879              		.cfi_restore_state
 880              	.LBB675:
 881              		.loc 1 353 0
 882 012a 4585ED   		testl	%r13d, %r13d
 883 012d 418B5C24 		movl	16(%r12), %ebx
 883      10
 884 0132 0F8416FF 		je	.L49
 884      FFFF
 885              	.LVL94:
 886              		.loc 1 353 0 is_stmt 0 discriminator 3
 887 0138 85DB     		testl	%ebx, %ebx
 888 013a 0F840EFF 		je	.L49
 888      FFFF
 889              		.loc 1 353 0 discriminator 5
 890 0140 49837C24 		cmpq	$0, 40(%r12)
 890      2800
 891 0146 0F841706 		je	.L51
 891      0000
 892              	.LBE675:
 893              		.loc 1 377 0 is_stmt 1
 894 014c 8B542430 		movl	48(%rsp), %edx
 895              	.LVL95:
 896 0150 85D2     		testl	%edx, %edx
 897 0152 0F8E0406 		jle	.L97
 897      0000
 898 0158 8B442458 		movl	88(%rsp), %eax
 899 015c 85C0     		testl	%eax, %eax
 900 015e 0F8EF805 		jle	.L97
 900      0000
 901              	.LVL96:
 902              		.loc 1 386 0
 903 0164 448B7424 		movl	48(%rsp), %r14d
 903      30
 904 0169 448B7C24 		movl	88(%rsp), %r15d
 904      58
 905 016e 4489F7   		movl	%r14d, %edi
 906 0171 410FAFFF 		imull	%r15d, %edi
 907 0175 0FAFFB   		imull	%ebx, %edi
 908 0178 4863FF   		movslq	%edi, %rdi
 909 017b E8000000 		call	_Znam
 909      00
 910              	.LVL97:
 911 0180 418B6C24 		movl	16(%r12), %ebp
 911      10
 912 0185 4889C3   		movq	%rax, %rbx
 913              	.LVL98:
 914              		.loc 1 387 0
 915 0188 BF400000 		movl	$64, %edi
 915      00
 916 018d E8000000 		call	_Znwm
 916      00
 917              	.LVL99:
 918              	.LBB676:
 919              	.LBB677:
 920              	.LBB678:
 921              	.LBB679:
 922              		.loc 1 48 0
 923 0192 4489780C 		movl	%r15d, 12(%rax)
 924 0196 44897008 		movl	%r14d, 8(%rax)
 925 019a 4889C7   		movq	%rax, %rdi
 926 019d 896810   		movl	%ebp, 16(%rax)
 927 01a0 C7401400 		movl	$0, 20(%rax)
 927      000000
 928              	.LBE679:
 929              	.LBE678:
 930              		.loc 1 278 0
 931 01a7 48C70000 		movq	$_ZTV12Fl_RGB_Image+16, (%rax)
 931      000000
 932 01ae 48895828 		movq	%rbx, 40(%rax)
 933 01b2 C7403400 		movl	$0, 52(%rax)
 933      000000
 934 01b9 C7403800 		movl	$0, 56(%rax)
 934      000000
 935              	.LBE677:
 936              	.LBE676:
 937              		.loc 1 387 0
 938 01c0 48894424 		movq	%rax, 104(%rsp)
 938      68
 939              	.LVL100:
 940              	.LBB683:
 941              	.LBB682:
 942              		.loc 1 280 0
 943 01c5 4883C028 		addq	$40, %rax
 944              	.LVL101:
 945              	.LBB680:
 946              	.LBB681:
 947              		.loc 6 100 0
 948 01c9 C7471801 		movl	$1, 24(%rdi)
 948      000000
 949              	.LBE681:
 950              	.LBE680:
 951              		.loc 1 280 0
 952 01d0 48894720 		movq	%rax, 32(%rdi)
 953              	.LVL102:
 954 01d4 418B4424 		movl	20(%r12), %eax
 954      14
 955              	.LBE682:
 956              	.LBE683:
 957              		.loc 1 388 0
 958 01d9 C7473001 		movl	$1, 48(%rdi)
 958      000000
 959 01e0 458B7C24 		movl	16(%r12), %r15d
 959      10
 960              		.loc 1 390 0
 961 01e5 85C0     		testl	%eax, %eax
 962 01e7 89442444 		movl	%eax, 68(%rsp)
 963              	.LVL103:
 964 01eb 418B4424 		movl	8(%r12), %eax
 964      08
 965 01f0 750A     		jne	.L59
 966              	.LVL104:
 967              		.loc 1 390 0 is_stmt 0 discriminator 2
 968 01f2 89C7     		movl	%eax, %edi
 969              	.LVL105:
 970 01f4 410FAFFF 		imull	%r15d, %edi
 971 01f8 897C2444 		movl	%edi, 68(%rsp)
 972              	.L59:
 973              	.LVL106:
 974              	.LBB684:
 975              		.loc 1 392 0 is_stmt 1 discriminator 4
 976 01fc 8B0D0000 		movl	_ZN8Fl_Image12RGB_scaling_E(%rip), %ecx
 976      0000
 977 0202 85C9     		testl	%ecx, %ecx
 978 0204 0F853601 		jne	.L60
 978      0000
 979              	.LVL107:
 980              	.LBB685:
 981              		.loc 1 401 0
 982 020a 8B742430 		movl	48(%rsp), %esi
 983 020e 99       		cltd
 984              		.loc 1 403 0
 985 020f 448B6C24 		movl	88(%rsp), %r13d
 985      58
 986 0214 4D8B4424 		movq	40(%r12), %r8
 986      28
 987 0219 458D57FF 		leal	-1(%r15), %r10d
 988              		.loc 1 407 0
 989 021d 4531DB   		xorl	%r11d, %r11d
 990              		.loc 1 401 0
 991 0220 F7FE     		idivl	%esi
 992              		.loc 1 416 0
 993 0222 4C894424 		movq	%r8, 24(%rsp)
 993      18
 994              		.loc 1 404 0
 995 0227 4489ED   		movl	%r13d, %ebp
 996 022a 4983C201 		addq	$1, %r10
 997              		.loc 1 416 0
 998 022e 4189F0   		movl	%esi, %r8d
 999              		.loc 1 401 0
 1000 0231 89C1     		movl	%eax, %ecx
 1001 0233 418B4424 		movl	12(%r12), %eax
 1001      0C
 1002 0238 4189D1   		movl	%edx, %r9d
 1003              	.LVL108:
 1004              		.loc 1 416 0
 1005 023b 4D63E7   		movslq	%r15d, %r12
 1006              	.LVL109:
 1007              		.loc 1 403 0
 1008 023e 99       		cltd
 1009              	.LVL110:
 1010 023f 41F7FD   		idivl	%r13d
 1011 0242 89442410 		movl	%eax, 16(%rsp)
 1012 0246 89C8     		movl	%ecx, %eax
 1013 0248 4189D6   		movl	%edx, %r14d
 1014              	.LVL111:
 1015 024b 410FAFC7 		imull	%r15d, %eax
 1016 024f 4863F8   		movslq	%eax, %rdi
 1017              	.LVL112:
 1018              	.L66:
 1019              		.loc 1 408 0
 1020 0252 8B542444 		movl	68(%rsp), %edx
 1021 0256 4489C1   		movl	%r8d, %ecx
 1022 0259 4489C6   		movl	%r8d, %esi
 1023 025c 410FAFD3 		imull	%r11d, %edx
 1024 0260 4863D2   		movslq	%edx, %rdx
 1025 0263 48035424 		addq	24(%rsp), %rdx
 1025      18
 1026              	.LVL113:
 1027 0268 0F1F8400 		.p2align 4,,10
 1027      00000000 
 1028              		.p2align 3
 1029              	.L64:
 1030              		.loc 1 409 0
 1031 0270 4585FF   		testl	%r15d, %r15d
 1032 0273 7E22     		jle	.L61
 1033              		.loc 1 409 0 is_stmt 0 discriminator 2
 1034 0275 31C0     		xorl	%eax, %eax
 1035 0277 894C2408 		movl	%ecx, 8(%rsp)
 1036              	.LVL114:
 1037 027b 0F1F4400 		.p2align 4,,10
 1037      00
 1038              		.p2align 3
 1039              	.L62:
 1040 0280 0FB60C02 		movzbl	(%rdx,%rax), %ecx
 1041 0284 880C03   		movb	%cl, (%rbx,%rax)
 1042              	.LVL115:
 1043 0287 4883C001 		addq	$1, %rax
 1044              	.LVL116:
 1045 028b 4139C7   		cmpl	%eax, %r15d
 1046 028e 7FF0     		jg	.L62
 1047 0290 8B4C2408 		movl	8(%rsp), %ecx
 1048 0294 4C01D3   		addq	%r10, %rbx
 1049              	.LVL117:
 1050              	.L61:
 1051              		.loc 1 412 0 is_stmt 1
 1052 0297 4429C9   		subl	%r9d, %ecx
 1053              		.loc 1 411 0
 1054 029a 4801FA   		addq	%rdi, %rdx
 1055              	.LVL118:
 1056              		.loc 1 414 0
 1057 029d 85C9     		testl	%ecx, %ecx
 1058 029f 0F8E8300 		jle	.L120
 1058      0000
 1059              	.LVL119:
 1060              	.L63:
 1061              		.loc 1 408 0 discriminator 2
 1062 02a5 83EE01   		subl	$1, %esi
 1063              	.LVL120:
 1064 02a8 75C6     		jne	.L64
 1065              		.loc 1 421 0
 1066 02aa 4429F5   		subl	%r14d, %ebp
 1067              	.LVL121:
 1068              		.loc 1 420 0
 1069 02ad 44035C24 		addl	16(%rsp), %r11d
 1069      10
 1070              	.LVL122:
 1071              		.loc 1 422 0
 1072 02b2 85ED     		testl	%ebp, %ebp
 1073 02b4 7E7D     		jle	.L121
 1074              	.L65:
 1075              	.LVL123:
 1076              		.loc 1 407 0 discriminator 2
 1077 02b6 4183ED01 		subl	$1, %r13d
 1078              	.LVL124:
 1079 02ba 7596     		jne	.L66
 1080 02bc 488B4424 		movq	104(%rsp), %rax
 1080      68
 1081 02c1 E93BFEFF 		jmp	.L57
 1081      FF
 1082              	.LVL125:
 1083              	.L118:
 1084              	.LBE685:
 1085              	.LBE684:
 1086              	.LBB713:
 1087              	.LBB673:
 1088              	.LBB664:
 1089              	.LBB662:
 1090              		.loc 1 357 0 discriminator 1
 1091 02c6 410FAFC6 		imull	%r14d, %eax
 1092 02ca 4439F8   		cmpl	%r15d, %eax
 1093 02cd 0F84B9FD 		je	.L55
 1093      FFFF
 1094 02d3 418B5C24 		movl	12(%r12), %ebx
 1094      0C
 1095              	.LBB644:
 1096              		.loc 1 358 0
 1097 02d8 4D8B6C24 		movq	40(%r12), %r13
 1097      28
 1098              	.LVL126:
 1099              		.loc 1 361 0
 1100 02dd 85DB     		testl	%ebx, %ebx
 1101 02df 0F8EC9FD 		jle	.L89
 1101      FFFF
 1102              	.LBE644:
 1103              	.LBE662:
 1104              		.loc 1 356 0
 1105 02e5 4C8B4424 		movq	8(%rsp), %r8
 1105      08
 1106 02ea 4C63E0   		movslq	%eax, %r12
 1107              	.LVL127:
 1108              	.LBB663:
 1109              	.LBB649:
 1110              		.loc 1 361 0
 1111 02ed 31ED     		xorl	%ebp, %ebp
 1112              	.LVL128:
 1113 02ef 90       		.p2align 4,,10
 1114              		.p2align 3
 1115              	.L56:
 1116              	.LBB645:
 1117              	.LBB646:
 1118              		.loc 5 53 0 discriminator 2
 1119 02f0 4C89EE   		movq	%r13, %rsi
 1120 02f3 4C89C7   		movq	%r8, %rdi
 1121 02f6 4C89E2   		movq	%r12, %rdx
 1122 02f9 E8000000 		call	memcpy
 1122      00
 1123              	.LVL129:
 1124              	.LBE646:
 1125              	.LBE645:
 1126              		.loc 1 361 0 discriminator 2
 1127 02fe 83C501   		addl	$1, %ebp
 1128              	.LVL130:
 1129              	.LBB648:
 1130              	.LBB647:
 1131              		.loc 5 53 0 discriminator 2
 1132 0301 4989C0   		movq	%rax, %r8
 1133              	.LVL131:
 1134              	.LBE647:
 1135              	.LBE648:
 1136              		.loc 1 363 0 discriminator 2
 1137 0304 4D01FD   		addq	%r15, %r13
 1138              	.LVL132:
 1139              		.loc 1 364 0 discriminator 2
 1140 0307 4D01E0   		addq	%r12, %r8
 1141              	.LVL133:
 1142              		.loc 1 361 0 discriminator 2
 1143 030a 39DD     		cmpl	%ebx, %ebp
 1144 030c 75E2     		jne	.L56
 1145 030e E99BFDFF 		jmp	.L89
 1145      FF
 1146              	.LVL134:
 1147              	.L116:
 1148              	.LBE649:
 1149              	.LBE663:
 1150              	.LBE664:
 1151              	.LBE673:
 1152              		.loc 1 352 0 discriminator 1
 1153 0313 44396C24 		cmpl	%r13d, 88(%rsp)
 1153      58
 1154 0318 0F8523FD 		jne	.L46
 1154      FFFF
 1155 031e E926FDFF 		jmp	.L47
 1155      FF
 1156              	.LVL135:
 1157              		.p2align 4,,10
 1158 0323 0F1F4400 		.p2align 3
 1158      00
 1159              	.L120:
 1160              	.LBE713:
 1161              	.LBB714:
 1162              	.LBB686:
 1163              		.loc 1 415 0
 1164 0328 4401C1   		addl	%r8d, %ecx
 1165              	.LVL136:
 1166              		.loc 1 416 0
 1167 032b 4C01E2   		addq	%r12, %rdx
 1168              	.LVL137:
 1169 032e E972FFFF 		jmp	.L63
 1169      FF
 1170              	.LVL138:
 1171              	.L121:
 1172              		.loc 1 423 0
 1173 0333 036C2458 		addl	88(%rsp), %ebp
 1174              	.LVL139:
 1175              		.loc 1 424 0
 1176 0337 4183C301 		addl	$1, %r11d
 1177              	.LVL140:
 1178 033b E976FFFF 		jmp	.L65
 1178      FF
 1179              	.LVL141:
 1180              	.L60:
 1181              	.LBE686:
 1182              	.LBB687:
 1183              		.loc 1 429 0
 1184 0340 8B7C2430 		movl	48(%rsp), %edi
 1185 0344 660FEFFF 		pxor	%xmm7, %xmm7
 1186 0348 660FEFC0 		pxor	%xmm0, %xmm0
 1187 034c 8D50FF   		leal	-1(%rax), %edx
 1188 034f 4D8B6C24 		movq	40(%r12), %r13
 1188      28
 1189 0354 4963EF   		movslq	%r15d, %rbp
 1190 0357 48895C24 		movq	%rbx, 72(%rsp)
 1190      48
 1191 035c F30F2AFA 		cvtsi2ss	%edx, %xmm7
 1192 0360 418B5424 		movl	12(%r12), %edx
 1192      0C
 1193              	.LBB688:
 1194              		.loc 1 431 0
 1195 0365 C7442440 		movl	$0, 64(%rsp)
 1195      00000000 
 1196              	.LBE688:
 1197              		.loc 1 429 0
 1198 036d F30F2AC7 		cvtsi2ss	%edi, %xmm0
 1199              		.loc 1 430 0
 1200 0371 8D4AFF   		leal	-1(%rdx), %ecx
 1201 0374 F3440F10 		movss	.LC14(%rip), %xmm8
 1201      05000000 
 1201      00
 1202              		.loc 1 429 0
 1203 037d F30F117C 		movss	%xmm7, 52(%rsp)
 1203      2434
 1204 0383 F30F5EF8 		divss	%xmm0, %xmm7
 1205              		.loc 1 430 0
 1206 0387 660FEFC0 		pxor	%xmm0, %xmm0
 1207              		.loc 1 429 0
 1208 038b F30F117C 		movss	%xmm7, 56(%rsp)
 1208      2438
 1209              	.LVL142:
 1210              		.loc 1 430 0
 1211 0391 660FEFFF 		pxor	%xmm7, %xmm7
 1212              	.LVL143:
 1213 0395 F30F2A44 		cvtsi2ss	88(%rsp), %xmm0
 1213      2458
 1214 039b F30F2AF9 		cvtsi2ss	%ecx, %xmm7
 1215 039f F30F117C 		movss	%xmm7, 92(%rsp)
 1215      245C
 1216 03a5 F30F5EF8 		divss	%xmm0, %xmm7
 1217 03a9 F30F117C 		movss	%xmm7, 96(%rsp)
 1217      2460
 1218              	.LVL144:
 1219 03af 660FEFFF 		pxor	%xmm7, %xmm7
 1220              	.LVL145:
 1221 03b3 F30F2AFA 		cvtsi2ss	%edx, %xmm7
 1222 03b7 F30F117C 		movss	%xmm7, 100(%rsp)
 1222      2464
 1223 03bd 660FEFFF 		pxor	%xmm7, %xmm7
 1224 03c1 F30F2AF8 		cvtsi2ss	%eax, %xmm7
 1225 03c5 89F8     		movl	%edi, %eax
 1226 03c7 410FAFC7 		imull	%r15d, %eax
 1227 03cb 4898     		cltq
 1228 03cd 48894424 		movq	%rax, 80(%rsp)
 1228      50
 1229 03d2 F30F117C 		movss	%xmm7, 60(%rsp)
 1229      243C
 1230 03d8 F30F103D 		movss	.LC15(%rip), %xmm7
 1230      00000000 
 1231              	.LVL146:
 1232              	.L86:
 1233              	.LBB709:
 1234              	.LBB689:
 1235              		.loc 1 432 0
 1236 03e0 660FEFC0 		pxor	%xmm0, %xmm0
 1237              		.loc 1 434 0
 1238 03e4 F30F1074 		movss	100(%rsp), %xmm6
 1238      2464
 1239 03ea 0F28CE   		movaps	%xmm6, %xmm1
 1240 03ed 448B7424 		movl	68(%rsp), %r14d
 1240      44
 1241 03f2 F30F106C 		movss	92(%rsp), %xmm5
 1241      245C
 1242              		.loc 1 432 0
 1243 03f8 F30F2A44 		cvtsi2ss	64(%rsp), %xmm0
 1243      2440
 1244 03fe F30F5944 		mulss	96(%rsp), %xmm0
 1244      2460
 1245              	.LVL147:
 1246              		.loc 1 434 0
 1247 0404 F30FC2C8 		cmpnless	%xmm0, %xmm1
 1247      06
 1248 0409 0F54C1   		andps	%xmm1, %xmm0
 1249              	.LVL148:
 1250 040c 0F55CD   		andnps	%xmm5, %xmm1
 1251 040f 0F56C1   		orps	%xmm1, %xmm0
 1252              	.LVL149:
 1253              		.loc 1 435 0
 1254 0412 660FEFC9 		pxor	%xmm1, %xmm1
 1255 0416 F34C0F2C 		cvttss2siq	%xmm0, %r12
 1255      E0
 1256 041b 0F28E8   		movaps	%xmm0, %xmm5
 1257 041e F3410F58 		addss	%xmm8, %xmm0
 1257      C0
 1258              	.LVL150:
 1259 0423 4489E0   		movl	%r12d, %eax
 1260 0426 F3480F2A 		cvtsi2ssq	%rax, %xmm1
 1260      C8
 1261 042b 450FAFF4 		imull	%r12d, %r14d
 1262              	.LBB690:
 1263              	.LBB691:
 1264              		.loc 1 457 0
 1265 042f 0F2EC6   		ucomiss	%xmm6, %xmm0
 1266              	.LBE691:
 1267              	.LBE690:
 1268              		.loc 1 435 0
 1269 0432 F30F5CE9 		subss	%xmm1, %xmm5
 1270              	.LVL151:
 1271              	.LBB706:
 1272              	.LBB702:
 1273              		.loc 1 457 0
 1274 0436 7305     		jnb	.L71
 1275 0438 F34C0F2C 		cvttss2siq	%xmm0, %r12
 1275      E0
 1276              	.L71:
 1277 043d 4489E0   		movl	%r12d, %eax
 1278 0440 4C8B5424 		movq	72(%rsp), %r10
 1278      48
 1279              	.LBE702:
 1280              		.loc 1 437 0
 1281 0445 4531E4   		xorl	%r12d, %r12d
 1282              	.LBB703:
 1283              		.loc 1 457 0
 1284 0448 0FAF4424 		imull	68(%rsp), %eax
 1284      44
 1285              	.LBE703:
 1286              		.loc 1 437 0
 1287 044d 4C89D3   		movq	%r10, %rbx
 1288              	.LBB704:
 1289              		.loc 1 457 0
 1290 0450 48894424 		movq	%rax, 8(%rsp)
 1290      08
 1291              	.LVL152:
 1292              		.p2align 4,,10
 1293 0455 0F1F00   		.p2align 3
 1294              	.L83:
 1295              		.loc 1 440 0
 1296 0458 660FEFC0 		pxor	%xmm0, %xmm0
 1297              		.loc 1 442 0
 1298 045c F30F1074 		movss	60(%rsp), %xmm6
 1298      243C
 1299 0462 0F28CE   		movaps	%xmm6, %xmm1
 1300 0465 F30F1064 		movss	52(%rsp), %xmm4
 1300      2434
 1301              		.loc 1 440 0
 1302 046b F3410F2A 		cvtsi2ss	%r12d, %xmm0
 1302      C4
 1303 0470 F30F5944 		mulss	56(%rsp), %xmm0
 1303      2438
 1304              	.LVL153:
 1305              		.loc 1 442 0
 1306 0476 F30FC2C8 		cmpnless	%xmm0, %xmm1
 1306      06
 1307 047b 0F54C1   		andps	%xmm1, %xmm0
 1308              	.LVL154:
 1309 047e 0F55CC   		andnps	%xmm4, %xmm1
 1310 0481 0F56C1   		orps	%xmm1, %xmm0
 1311              	.LVL155:
 1312              		.loc 1 443 0
 1313 0484 660FEFC9 		pxor	%xmm1, %xmm1
 1314 0488 F34C0F2C 		cvttss2siq	%xmm0, %r9
 1314      C8
 1315 048d 0F28D8   		movaps	%xmm0, %xmm3
 1316              		.loc 1 447 0
 1317 0490 F3410F58 		addss	%xmm8, %xmm0
 1317      C0
 1318              	.LVL156:
 1319 0495 0F2EC6   		ucomiss	%xmm6, %xmm0
 1320              		.loc 1 443 0
 1321 0498 4489C8   		movl	%r9d, %eax
 1322              		.loc 1 447 0
 1323 049b 4589CB   		movl	%r9d, %r11d
 1324              		.loc 1 443 0
 1325 049e F3480F2A 		cvtsi2ssq	%rax, %xmm1
 1325      C8
 1326 04a3 F30F5CD9 		subss	%xmm1, %xmm3
 1327              	.LVL157:
 1328              		.loc 1 447 0
 1329 04a7 7305     		jnb	.L76
 1330              		.loc 1 447 0 is_stmt 0 discriminator 2
 1331 04a9 F34C0F2C 		cvttss2siq	%xmm0, %r11
 1331      D8
 1332              	.L76:
 1333              		.loc 1 455 0 is_stmt 1 discriminator 4
 1334 04ae 450FAFCF 		imull	%r15d, %r9d
 1335              	.LVL158:
 1336              	.LBB692:
 1337              	.LBB693:
 1338              		.loc 5 53 0 discriminator 4
 1339 04b2 488D7C24 		leaq	112(%rsp), %rdi
 1339      70
 1340 04b7 B9040000 		movl	$4, %ecx
 1340      00
 1341 04bc 4889EA   		movq	%rbp, %rdx
 1342 04bf F30F116C 		movss	%xmm5, 44(%rsp)
 1342      242C
 1343 04c5 44895C24 		movl	%r11d, 16(%rsp)
 1343      10
 1344              	.LVL159:
 1345 04ca F30F117C 		movss	%xmm7, 40(%rsp)
 1345      2428
 1346 04d0 4B8D3431 		leaq	(%r9,%r14), %rsi
 1347 04d4 F3440F11 		movss	%xmm8, 36(%rsp)
 1347      442424
 1348 04db 4C894C24 		movq	%r9, 24(%rsp)
 1348      18
 1349 04e0 F30F115C 		movss	%xmm3, 32(%rsp)
 1349      2420
 1350 04e6 4C01EE   		addq	%r13, %rsi
 1351 04e9 E8000000 		call	__memcpy_chk
 1351      00
 1352              	.LVL160:
 1353              	.LBE693:
 1354              	.LBE692:
 1355              		.loc 1 456 0 discriminator 4
 1356 04ee 448B5C24 		movl	16(%rsp), %r11d
 1356      10
 1357              	.LBB694:
 1358              	.LBB695:
 1359              		.loc 5 53 0 discriminator 4
 1360 04f3 488DBC24 		leaq	128(%rsp), %rdi
 1360      80000000 
 1361 04fb B9040000 		movl	$4, %ecx
 1361      00
 1362 0500 4889EA   		movq	%rbp, %rdx
 1363              	.LBE695:
 1364              	.LBE694:
 1365              		.loc 1 456 0 discriminator 4
 1366 0503 450FAFDF 		imull	%r15d, %r11d
 1367              	.LVL161:
 1368              	.LBB697:
 1369              	.LBB696:
 1370              		.loc 5 53 0 discriminator 4
 1371 0507 4B8D3433 		leaq	(%r11,%r14), %rsi
 1372 050b 4C895C24 		movq	%r11, 16(%rsp)
 1372      10
 1373              	.LVL162:
 1374 0510 4C01EE   		addq	%r13, %rsi
 1375 0513 E8000000 		call	__memcpy_chk
 1375      00
 1376              	.LVL163:
 1377              	.LBE696:
 1378              	.LBE697:
 1379              	.LBB698:
 1380              	.LBB699:
 1381 0518 4C8B4C24 		movq	24(%rsp), %r9
 1381      18
 1382 051d 488B4424 		movq	8(%rsp), %rax
 1382      08
 1383 0522 488DBC24 		leaq	144(%rsp), %rdi
 1383      90000000 
 1384              	.LVL164:
 1385 052a B9040000 		movl	$4, %ecx
 1385      00
 1386 052f 4889EA   		movq	%rbp, %rdx
 1387 0532 498D3401 		leaq	(%r9,%rax), %rsi
 1388 0536 4C01EE   		addq	%r13, %rsi
 1389 0539 E8000000 		call	__memcpy_chk
 1389      00
 1390              	.LVL165:
 1391              	.LBE699:
 1392              	.LBE698:
 1393              	.LBB700:
 1394              	.LBB701:
 1395 053e 488B4424 		movq	8(%rsp), %rax
 1395      08
 1396 0543 4C8B5C24 		movq	16(%rsp), %r11
 1396      10
 1397 0548 488DBC24 		leaq	160(%rsp), %rdi
 1397      A0000000 
 1398              	.LVL166:
 1399 0550 B9040000 		movl	$4, %ecx
 1399      00
 1400 0555 4889EA   		movq	%rbp, %rdx
 1401 0558 498D3403 		leaq	(%r11,%rax), %rsi
 1402 055c 4C01EE   		addq	%r13, %rsi
 1403 055f E8000000 		call	__memcpy_chk
 1403      00
 1404              	.LVL167:
 1405              	.LBE701:
 1406              	.LBE700:
 1407              		.loc 1 461 0 discriminator 4
 1408 0564 4183FF04 		cmpl	$4, %r15d
 1409 0568 F30F105C 		movss	32(%rsp), %xmm3
 1409      2420
 1410 056e F3440F10 		movss	36(%rsp), %xmm8
 1410      442424
 1411 0575 F30F107C 		movss	40(%rsp), %xmm7
 1411      2428
 1412 057b F30F106C 		movss	44(%rsp), %xmm5
 1412      242C
 1413 0581 0F842101 		je	.L122
 1413      0000
 1414              	.LVL168:
 1415              		.loc 1 475 0
 1416 0587 4585FF   		testl	%r15d, %r15d
 1417 058a 0F8E8F00 		jle	.L84
 1417      0000
 1418              	.LVL169:
 1419              	.L91:
 1420              		.loc 1 470 0
 1421 0590 410F28E0 		movaps	%xmm8, %xmm4
 1422              		.loc 1 472 0
 1423 0594 410F28F0 		movaps	%xmm8, %xmm6
 1424 0598 31C0     		xorl	%eax, %eax
 1425              		.loc 1 470 0
 1426 059a F30F5CE3 		subss	%xmm3, %xmm4
 1427              		.loc 1 472 0
 1428 059e F30F5CF5 		subss	%xmm5, %xmm6
 1429              	.LVL170:
 1430              	.L80:
 1431              		.loc 1 479 0 discriminator 2
 1432 05a2 0FB65404 		movzbl	112(%rsp,%rax), %edx
 1432      70
 1433 05a7 660FEFC9 		pxor	%xmm1, %xmm1
 1434 05ab 660FEFC0 		pxor	%xmm0, %xmm0
 1435 05af F30F2ACA 		cvtsi2ss	%edx, %xmm1
 1436 05b3 0FB69404 		movzbl	128(%rsp,%rax), %edx
 1436      80000000 
 1437 05bb F30F2AC2 		cvtsi2ss	%edx, %xmm0
 1438 05bf 0FB69404 		movzbl	144(%rsp,%rax), %edx
 1438      90000000 
 1439 05c7 F30F59CC 		mulss	%xmm4, %xmm1
 1440 05cb F30F59C3 		mulss	%xmm3, %xmm0
 1441 05cf F30F58C1 		addss	%xmm1, %xmm0
 1442 05d3 0F28C8   		movaps	%xmm0, %xmm1
 1443 05d6 660FEFC0 		pxor	%xmm0, %xmm0
 1444 05da F30F59CE 		mulss	%xmm6, %xmm1
 1445 05de F30F2AC2 		cvtsi2ss	%edx, %xmm0
 1446 05e2 0FB69404 		movzbl	160(%rsp,%rax), %edx
 1446      A0000000 
 1447 05ea 0F28D0   		movaps	%xmm0, %xmm2
 1448 05ed 660FEFC0 		pxor	%xmm0, %xmm0
 1449 05f1 F30F59D4 		mulss	%xmm4, %xmm2
 1450 05f5 F30F2AC2 		cvtsi2ss	%edx, %xmm0
 1451 05f9 F30F59C3 		mulss	%xmm3, %xmm0
 1452 05fd F30F58C2 		addss	%xmm2, %xmm0
 1453 0601 F30F59C5 		mulss	%xmm5, %xmm0
 1454 0605 F30F58C1 		addss	%xmm1, %xmm0
 1455 0609 F30F2CD0 		cvttss2si	%xmm0, %edx
 1456 060d 881403   		movb	%dl, (%rbx,%rax)
 1457              	.LVL171:
 1458 0610 4883C001 		addq	$1, %rax
 1459              	.LVL172:
 1460              		.loc 1 475 0 discriminator 2
 1461 0614 4139C7   		cmpl	%eax, %r15d
 1462 0617 7F89     		jg	.L80
 1463              	.LVL173:
 1464              		.loc 1 482 0
 1465 0619 4183FF04 		cmpl	$4, %r15d
 1466 061d 7441     		je	.L81
 1467              	.LVL174:
 1468              	.L84:
 1469              	.LBE704:
 1470              		.loc 1 437 0
 1471 061f 4183C401 		addl	$1, %r12d
 1472              	.LVL175:
 1473 0623 4801EB   		addq	%rbp, %rbx
 1474              	.LVL176:
 1475 0626 44396424 		cmpl	%r12d, 48(%rsp)
 1475      30
 1476 062b 0F8F27FE 		jg	.L83
 1476      FFFF
 1477              	.LBE706:
 1478              	.LBE689:
 1479              		.loc 1 431 0 discriminator 2
 1480 0631 83442440 		addl	$1, 64(%rsp)
 1480      01
 1481              	.LVL177:
 1482 0636 488B7424 		movq	80(%rsp), %rsi
 1482      50
 1483 063b 8B442440 		movl	64(%rsp), %eax
 1484              	.LVL178:
 1485 063f 48017424 		addq	%rsi, 72(%rsp)
 1485      48
 1486 0644 39442458 		cmpl	%eax, 88(%rsp)
 1487 0648 0F8F92FD 		jg	.L86
 1487      FFFF
 1488              	.LBE709:
 1489              	.LBE687:
 1490              	.LBB711:
 1491 064e 488B4424 		movq	104(%rsp), %rax
 1491      68
 1492              	.LVL179:
 1493 0653 E9A9FAFF 		jmp	.L57
 1493      FF
 1494              	.LVL180:
 1495 0658 0F1F8400 		.p2align 4,,10
 1495      00000000 
 1496              		.p2align 3
 1497              	.L81:
 1498              	.LBE711:
 1499              	.LBB712:
 1500              	.LBB710:
 1501              	.LBB708:
 1502              	.LBB707:
 1503              	.LBB705:
 1504              		.loc 1 482 0 discriminator 1
 1505 0660 0FB65303 		movzbl	3(%rbx), %edx
 1506 0664 84D2     		testb	%dl, %dl
 1507 0666 74B7     		je	.L84
 1508 0668 488D7303 		leaq	3(%rbx), %rsi
 1509              		.loc 1 482 0 is_stmt 0 discriminator 2
 1510 066c 4889D8   		movq	%rbx, %rax
 1511 066f 90       		.p2align 4,,10
 1512              		.p2align 3
 1513              	.L85:
 1514              	.LVL181:
 1515              		.loc 1 484 0 is_stmt 1 discriminator 2
 1516 0670 660FEFC0 		pxor	%xmm0, %xmm0
 1517 0674 0FB608   		movzbl	(%rax), %ecx
 1518 0677 4883C001 		addq	$1, %rax
 1519              	.LVL182:
 1520 067b 660FEFC9 		pxor	%xmm1, %xmm1
 1521 067f F30F2AC2 		cvtsi2ss	%edx, %xmm0
 1522 0683 F30F2AC9 		cvtsi2ss	%ecx, %xmm1
 1523 0687 F30F5E05 		divss	.LC15(%rip), %xmm0
 1523      00000000 
 1524 068f F30F5EC8 		divss	%xmm0, %xmm1
 1525 0693 F30F2CD1 		cvttss2si	%xmm1, %edx
 1526 0697 8850FF   		movb	%dl, -1(%rax)
 1527              		.loc 1 483 0 discriminator 2
 1528 069a 4839F0   		cmpq	%rsi, %rax
 1529 069d 7480     		je	.L84
 1530 069f 0FB65303 		movzbl	3(%rbx), %edx
 1531 06a3 EBCB     		jmp	.L85
 1532              	.LVL183:
 1533              		.p2align 4,,10
 1534 06a5 0F1F00   		.p2align 3
 1535              	.L122:
 1536 06a8 31C0     		xorl	%eax, %eax
 1537              	.L79:
 1538              	.LVL184:
 1539              		.loc 1 463 0 discriminator 2
 1540 06aa 0FB64C04 		movzbl	112(%rsp,%rax), %ecx
 1540      70
 1541 06af 0FB65424 		movzbl	115(%rsp), %edx
 1541      73
 1542 06b4 660FEFC0 		pxor	%xmm0, %xmm0
 1543 06b8 0FAFD1   		imull	%ecx, %edx
 1544              		.loc 1 464 0 discriminator 2
 1545 06bb 0FB68C04 		movzbl	128(%rsp,%rax), %ecx
 1545      80000000 
 1546              		.loc 1 463 0 discriminator 2
 1547 06c3 F30F2AC2 		cvtsi2ss	%edx, %xmm0
 1548 06c7 F30F5EC7 		divss	%xmm7, %xmm0
 1549 06cb F30F2CD0 		cvttss2si	%xmm0, %edx
 1550              		.loc 1 464 0 discriminator 2
 1551 06cf 660FEFC0 		pxor	%xmm0, %xmm0
 1552              		.loc 1 463 0 discriminator 2
 1553 06d3 88540470 		movb	%dl, 112(%rsp,%rax)
 1554              		.loc 1 464 0 discriminator 2
 1555 06d7 0FB69424 		movzbl	131(%rsp), %edx
 1555      83000000 
 1556 06df 0FAFD1   		imull	%ecx, %edx
 1557              		.loc 1 465 0 discriminator 2
 1558 06e2 0FB68C04 		movzbl	144(%rsp,%rax), %ecx
 1558      90000000 
 1559              		.loc 1 464 0 discriminator 2
 1560 06ea F30F2AC2 		cvtsi2ss	%edx, %xmm0
 1561 06ee F30F5EC7 		divss	%xmm7, %xmm0
 1562 06f2 F30F2CD0 		cvttss2si	%xmm0, %edx
 1563              		.loc 1 465 0 discriminator 2
 1564 06f6 660FEFC0 		pxor	%xmm0, %xmm0
 1565              		.loc 1 464 0 discriminator 2
 1566 06fa 88940480 		movb	%dl, 128(%rsp,%rax)
 1566      000000
 1567              		.loc 1 465 0 discriminator 2
 1568 0701 0FB69424 		movzbl	147(%rsp), %edx
 1568      93000000 
 1569 0709 0FAFD1   		imull	%ecx, %edx
 1570              		.loc 1 466 0 discriminator 2
 1571 070c 0FB68C04 		movzbl	160(%rsp,%rax), %ecx
 1571      A0000000 
 1572              		.loc 1 465 0 discriminator 2
 1573 0714 F30F2AC2 		cvtsi2ss	%edx, %xmm0
 1574 0718 F30F5EC7 		divss	%xmm7, %xmm0
 1575 071c F30F2CD0 		cvttss2si	%xmm0, %edx
 1576              		.loc 1 466 0 discriminator 2
 1577 0720 660FEFC0 		pxor	%xmm0, %xmm0
 1578              		.loc 1 465 0 discriminator 2
 1579 0724 88940490 		movb	%dl, 144(%rsp,%rax)
 1579      000000
 1580              		.loc 1 466 0 discriminator 2
 1581 072b 0FB69424 		movzbl	163(%rsp), %edx
 1581      A3000000 
 1582 0733 0FAFD1   		imull	%ecx, %edx
 1583 0736 F30F2AC2 		cvtsi2ss	%edx, %xmm0
 1584 073a F30F5EC7 		divss	%xmm7, %xmm0
 1585 073e F30F2CD0 		cvttss2si	%xmm0, %edx
 1586 0742 889404A0 		movb	%dl, 160(%rsp,%rax)
 1586      000000
 1587              	.LVL185:
 1588 0749 4883C001 		addq	$1, %rax
 1589              	.LVL186:
 1590              		.loc 1 462 0 discriminator 2
 1591 074d 4883F803 		cmpq	$3, %rax
 1592 0751 0F8553FF 		jne	.L79
 1592      FFFF
 1593 0757 E934FEFF 		jmp	.L91
 1593      FF
 1594              	.LVL187:
 1595              	.L97:
 1596              	.LBE705:
 1597              	.LBE707:
 1598              	.LBE708:
 1599              	.LBE710:
 1600              	.LBE712:
 1601              	.LBE714:
 1602              		.loc 1 377 0
 1603 075c 31C0     		xorl	%eax, %eax
 1604 075e E99EF9FF 		jmp	.L57
 1604      FF
 1605              	.LVL188:
 1606              	.L51:
 1607              	.LBB715:
 1608              	.LBB674:
 1609              		.loc 1 374 0
 1610 0763 BF400000 		movl	$64, %edi
 1610      00
 1611 0768 458B7424 		movl	20(%r12), %r14d
 1611      14
 1612              	.LVL189:
 1613 076d E8000000 		call	_Znwm
 1613      00
 1614              	.LVL190:
 1615 0772 498B5424 		movq	40(%r12), %rdx
 1615      28
 1616              	.LVL191:
 1617              	.LBB665:
 1618              	.LBB666:
 1619              	.LBB667:
 1620              	.LBB668:
 1621              		.loc 1 48 0
 1622 0777 896808   		movl	%ebp, 8(%rax)
 1623 077a 4489680C 		movl	%r13d, 12(%rax)
 1624 077e 895810   		movl	%ebx, 16(%rax)
 1625              	.LVL192:
 1626              	.LBE668:
 1627              	.LBE667:
 1628              		.loc 1 278 0
 1629 0781 48C70000 		movq	$_ZTV12Fl_RGB_Image+16, (%rax)
 1629      000000
 1630 0788 C7403000 		movl	$0, 48(%rax)
 1630      000000
 1631 078f 48895028 		movq	%rdx, 40(%rax)
 1632              		.loc 1 280 0
 1633 0793 488D5028 		leaq	40(%rax), %rdx
 1634              	.LVL193:
 1635              		.loc 1 278 0
 1636 0797 C7403400 		movl	$0, 52(%rax)
 1636      000000
 1637 079e C7403800 		movl	$0, 56(%rax)
 1637      000000
 1638              	.LVL194:
 1639              	.LBB669:
 1640              	.LBB670:
 1641              		.loc 6 100 0
 1642 07a5 C7401801 		movl	$1, 24(%rax)
 1642      000000
 1643              	.LVL195:
 1644              	.LBE670:
 1645              	.LBE669:
 1646              		.loc 1 280 0
 1647 07ac 48895020 		movq	%rdx, 32(%rax)
 1648              	.LBB671:
 1649              	.LBB672:
  96:fltk-1.3.4-1/FL/Fl_Image.H ****   /** 
 1650              		.loc 6 96 0
 1651 07b0 44897014 		movl	%r14d, 20(%rax)
 1652              	.LVL196:
 1653              	.LBE672:
 1654              	.LBE671:
 1655              	.LBE666:
 1656              	.LBE665:
 1657              		.loc 1 374 0
 1658 07b4 E948F9FF 		jmp	.L57
 1658      FF
 1659              	.LVL197:
 1660              	.L119:
 1661              	.LBE674:
 1662              	.LBE715:
 1663              		.loc 1 492 0
 1664 07b9 E8000000 		call	__stack_chk_fail
 1664      00
 1665              	.LVL198:
 1666              		.cfi_endproc
 1667              	.LFE584:
 1669              		.section	.text.unlikely._ZN12Fl_RGB_Image4copyEii
 1670              	.LCOLDE16:
 1671              		.section	.text._ZN12Fl_RGB_Image4copyEii
 1672              	.LHOTE16:
 1673              		.section	.text.unlikely._ZN8Fl_Image10draw_emptyEii.part.13,"ax",@progbits
 1674              		.align 2
 1675              	.LCOLDB17:
 1676              		.section	.text._ZN8Fl_Image10draw_emptyEii.part.13,"ax",@progbits
 1677              	.LHOTB17:
 1678              		.align 2
 1679              		.p2align 4,,15
 1681              	_ZN8Fl_Image10draw_emptyEii.part.13:
 1682              	.LFB607:
 1683              		.loc 1 75 0
 1684              		.cfi_startproc
 1685              	.LVL199:
 1686 0000 4154     		pushq	%r12
 1687              		.cfi_def_cfa_offset 16
 1688              		.cfi_offset 12, -16
 1689 0002 55       		pushq	%rbp
 1690              		.cfi_def_cfa_offset 24
 1691              		.cfi_offset 6, -24
 1692 0003 4189D4   		movl	%edx, %r12d
 1693 0006 53       		pushq	%rbx
 1694              		.cfi_def_cfa_offset 32
 1695              		.cfi_offset 3, -32
 1696              		.loc 1 75 0
 1697 0007 4889FB   		movq	%rdi, %rbx
 1698              	.LBB716:
 1699              	.LBB717:
 1700              		.loc 3 52 0
 1701 000a 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1701      000000
 1702              	.LVL200:
 1703              	.LBE717:
 1704              	.LBE716:
 1705              		.loc 1 75 0
 1706 0011 89F5     		movl	%esi, %ebp
 1707              	.LBB719:
 1708              	.LBB718:
 1709              		.loc 3 52 0
 1710 0013 31F6     		xorl	%esi, %esi
 1711              	.LVL201:
 1712 0015 488B07   		movq	(%rdi), %rax
 1713 0018 FF908800 		call	*136(%rax)
 1713      0000
 1714              	.LVL202:
 1715              	.LBE718:
 1716              	.LBE719:
 1717              	.LBB720:
 1718              	.LBB721:
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
 1719              		.loc 3 201 0
 1720 001e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1720      000000
 1721 0025 8B4B08   		movl	8(%rbx), %ecx
 1722 0028 4489E2   		movl	%r12d, %edx
 1723 002b 448B430C 		movl	12(%rbx), %r8d
 1724 002f 89EE     		movl	%ebp, %esi
 1725 0031 488B07   		movq	(%rdi), %rax
 1726 0034 FF5018   		call	*24(%rax)
 1727              	.LVL203:
 1728              	.LBE721:
 1729              	.LBE720:
 1730              	.LBB722:
 1731              	.LBB723:
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
 1732              		.loc 3 223 0
 1733 0037 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1733      000000
 1734 003e 8B530C   		movl	12(%rbx), %edx
 1735 0041 89EE     		movl	%ebp, %esi
 1736 0043 8B4B08   		movl	8(%rbx), %ecx
 1737 0046 488B07   		movq	(%rdi), %rax
 1738 0049 4401E2   		addl	%r12d, %edx
 1739 004c 01E9     		addl	%ebp, %ecx
 1740 004e 448D42FF 		leal	-1(%rdx), %r8d
 1741              	.LVL204:
 1742 0052 4489E2   		movl	%r12d, %edx
 1743 0055 83E901   		subl	$1, %ecx
 1744              	.LVL205:
 1745 0058 FF5060   		call	*96(%rax)
 1746              	.LVL206:
 1747              	.LBE723:
 1748              	.LBE722:
 1749              	.LBB724:
 1750              	.LBB725:
 1751 005b 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 1751      000000
 1752 0062 8B4B08   		movl	8(%rbx), %ecx
 1753 0065 4589E0   		movl	%r12d, %r8d
 1754 0068 8B530C   		movl	12(%rbx), %edx
 1755 006b 89EE     		movl	%ebp, %esi
 1756              	.LBE725:
 1757              	.LBE724:
 1758              		.loc 1 82 0
 1759 006d 5B       		popq	%rbx
 1760              		.cfi_def_cfa_offset 24
 1761              	.LVL207:
 1762              	.LBB728:
 1763              	.LBB726:
 1764              		.loc 3 223 0
 1765 006e 488B07   		movq	(%rdi), %rax
 1766 0071 01E9     		addl	%ebp, %ecx
 1767              	.LVL208:
 1768 0073 4401E2   		addl	%r12d, %edx
 1769              	.LVL209:
 1770 0076 83E901   		subl	$1, %ecx
 1771              	.LVL210:
 1772              	.LBE726:
 1773              	.LBE728:
 1774              		.loc 1 82 0
 1775 0079 5D       		popq	%rbp
 1776              		.cfi_def_cfa_offset 16
 1777              	.LVL211:
 1778 007a 415C     		popq	%r12
 1779              		.cfi_def_cfa_offset 8
 1780              	.LVL212:
 1781              	.LBB729:
 1782              	.LBB727:
 1783              		.loc 3 223 0
 1784 007c 83EA01   		subl	$1, %edx
 1785              	.LVL213:
 1786 007f 488B4060 		movq	96(%rax), %rax
 1787 0083 FFE0     		jmp	*%rax
 1788              	.LVL214:
 1789              	.LBE727:
 1790              	.LBE729:
 1791              		.cfi_endproc
 1792              	.LFE607:
 1794              		.section	.text.unlikely._ZN8Fl_Image10draw_emptyEii.part.13
 1795              	.LCOLDE17:
 1796              		.section	.text._ZN8Fl_Image10draw_emptyEii.part.13
 1797              	.LHOTE17:
 1798              		.section	.text.unlikely._ZN8Fl_Image4drawEiiiiii,"ax",@progbits
 1799              		.align 2
 1800              	.LCOLDB18:
 1801              		.section	.text._ZN8Fl_Image4drawEiiiiii,"ax",@progbits
 1802              	.LHOTB18:
 1803              		.align 2
 1804              		.p2align 4,,15
 1805              		.globl	_ZN8Fl_Image4drawEiiiiii
 1807              	_ZN8Fl_Image4drawEiiiiii:
 1808              	.LFB561:
 1809              		.loc 1 66 0
 1810              		.cfi_startproc
 1811              	.LVL215:
 1812              	.LBB730:
 1813              	.LBB731:
 1814              		.loc 1 76 0
 1815 0000 8B4F08   		movl	8(%rdi), %ecx
 1816 0003 85C9     		testl	%ecx, %ecx
 1817 0005 7E11     		jle	.L125
 1818              	.LVL216:
 1819 0007 8B470C   		movl	12(%rdi), %eax
 1820 000a 85C0     		testl	%eax, %eax
 1821 000c 7E0A     		jle	.L125
 1822 000e E9000000 		jmp	_ZN8Fl_Image10draw_emptyEii.part.13
 1822      00
 1823              	.LVL217:
 1824              		.p2align 4,,10
 1825 0013 0F1F4400 		.p2align 3
 1825      00
 1826              	.L125:
 1827 0018 F3C3     		rep ret
 1828              	.LBE731:
 1829              	.LBE730:
 1830              		.cfi_endproc
 1831              	.LFE561:
 1833              		.section	.text.unlikely._ZN8Fl_Image4drawEiiiiii
 1834              	.LCOLDE18:
 1835              		.section	.text._ZN8Fl_Image4drawEiiiiii
 1836              	.LHOTE18:
 1837              		.section	.text.unlikely._ZN12Fl_RGB_Image10desaturateEv,"ax",@progbits
 1838              		.align 2
 1839              	.LCOLDB19:
 1840              		.section	.text._ZN12Fl_RGB_Image10desaturateEv,"ax",@progbits
 1841              	.LHOTB19:
 1842              		.align 2
 1843              		.p2align 4,,15
 1844              		.globl	_ZN12Fl_RGB_Image10desaturateEv
 1846              	_ZN12Fl_RGB_Image10desaturateEv:
 1847              	.LFB586:
 1848              		.loc 1 553 0
 1849              		.cfi_startproc
 1850              	.LVL218:
 1851              		.loc 1 555 0
 1852 0000 8B4F08   		movl	8(%rdi), %ecx
 1853 0003 85C9     		testl	%ecx, %ecx
 1854 0005 7509     		jne	.L158
 1855              	.LVL219:
 1856              	.L157:
 1857              		.loc 1 590 0
 1858 0007 F3C3     		rep ret
 1859              	.LVL220:
 1860 0009 0F1F8000 		.p2align 4,,10
 1860      000000
 1861              		.p2align 3
 1862              	.L158:
 1863              		.loc 1 555 0 discriminator 2
 1864 0010 8B570C   		movl	12(%rdi), %edx
 1865 0013 85D2     		testl	%edx, %edx
 1866 0015 74F0     		je	.L157
 1867 0017 8B4710   		movl	16(%rdi), %eax
 1868              	.LVL221:
 1869              		.loc 1 555 0 is_stmt 0 discriminator 4
 1870 001a 85C0     		testl	%eax, %eax
 1871 001c 74E9     		je	.L157
 1872              		.loc 1 555 0 discriminator 6
 1873 001e 48837F28 		cmpq	$0, 40(%rdi)
 1873      00
 1874 0023 7407     		je	.L159
 1875              	.LVL222:
 1876              		.loc 1 558 0 is_stmt 1
 1877 0025 83F802   		cmpl	$2, %eax
 1878 0028 7F04     		jg	.L154
 1879 002a F3C3     		rep ret
 1880              	.LVL223:
 1881              	.L159:
 1882 002c F3C3     		rep ret
 1883              	.LVL224:
 1884              	.L154:
 1885              		.loc 1 553 0
 1886 002e 4157     		pushq	%r15
 1887              		.cfi_def_cfa_offset 16
 1888              		.cfi_offset 15, -16
 1889 0030 4156     		pushq	%r14
 1890              		.cfi_def_cfa_offset 24
 1891              		.cfi_offset 14, -24
 1892              	.LBB768:
 1893              	.LBB769:
 1894              		.loc 1 574 0
 1895 0032 4531F6   		xorl	%r14d, %r14d
 1896              	.LBE769:
 1897              	.LBE768:
 1898              		.loc 1 553 0
 1899 0035 4155     		pushq	%r13
 1900              		.cfi_def_cfa_offset 32
 1901              		.cfi_offset 13, -32
 1902 0037 4154     		pushq	%r12
 1903              		.cfi_def_cfa_offset 40
 1904              		.cfi_offset 12, -40
 1905 0039 4989FC   		movq	%rdi, %r12
 1906              	.LVL225:
 1907 003c 55       		pushq	%rbp
 1908              		.cfi_def_cfa_offset 48
 1909              		.cfi_offset 6, -48
 1910 003d 53       		pushq	%rbx
 1911              		.cfi_def_cfa_offset 56
 1912              		.cfi_offset 3, -56
 1913 003e 4883EC28 		subq	$40, %rsp
 1914              		.cfi_def_cfa_offset 96
 1915              	.LBB775:
 1916              	.LBB774:
 1917              		.loc 1 561 0
 1918 0042 488B07   		movq	(%rdi), %rax
 1919 0045 FF5040   		call	*64(%rax)
 1920              	.LVL226:
 1921              		.loc 1 569 0
 1922 0048 418B7C24 		movl	12(%r12), %edi
 1922      0C
 1923              		.loc 1 568 0
 1924 004d 418B4424 		movl	16(%r12), %eax
 1924      10
 1925              		.loc 1 569 0
 1926 0052 410FAF7C 		imull	8(%r12), %edi
 1926      2408
 1927              		.loc 1 568 0
 1928 0058 83E802   		subl	$2, %eax
 1929 005b 8944241C 		movl	%eax, 28(%rsp)
 1930              	.LVL227:
 1931              		.loc 1 569 0
 1932 005f 0FAFF8   		imull	%eax, %edi
 1933 0062 4863FF   		movslq	%edi, %rdi
 1934 0065 E8000000 		call	_Znam
 1934      00
 1935              	.LVL228:
 1936 006a 48894424 		movq	%rax, 16(%rsp)
 1936      10
 1937              	.LVL229:
 1938 006f 418B4424 		movl	20(%r12), %eax
 1938      14
 1939              	.LVL230:
 1940              		.loc 1 574 0
 1941 0074 85C0     		testl	%eax, %eax
 1942 0076 7410     		je	.L131
 1943              	.LVL231:
 1944 0078 418B5424 		movl	8(%r12), %edx
 1944      08
 1945 007d 410FAF54 		imull	16(%r12), %edx
 1945      2410
 1946 0083 29D0     		subl	%edx, %eax
 1947 0085 4C63F0   		movslq	%eax, %r14
 1948              	.LVL232:
 1949              	.L131:
 1950 0088 458B7C24 		movl	12(%r12), %r15d
 1950      0C
 1951              		.loc 1 576 0
 1952 008d 498B4424 		movq	40(%r12), %rax
 1952      28
 1953 0092 4585FF   		testl	%r15d, %r15d
 1954 0095 48894424 		movq	%rax, 8(%rsp)
 1954      08
 1955              	.LVL233:
 1956 009a 0F8EAF00 		jle	.L141
 1956      0000
 1957 00a0 418B7C24 		movl	8(%r12), %edi
 1957      08
 1958 00a5 488B6C24 		movq	8(%rsp), %rbp
 1958      08
 1959 00aa 4531ED   		xorl	%r13d, %r13d
 1960 00ad 4C8B4424 		movq	16(%rsp), %r8
 1960      10
 1961              		.loc 1 578 0
 1962 00b2 BB1F85EB 		movl	$1374389535, %ebx
 1962      51
 1963 00b7 8D47FF   		leal	-1(%rdi), %eax
 1964              	.LVL234:
 1965 00ba 4883C001 		addq	$1, %rax
 1966 00be 48890424 		movq	%rax, (%rsp)
 1967              	.LVL235:
 1968              		.p2align 4,,10
 1969 00c2 660F1F44 		.p2align 3
 1969      0000
 1970              	.L140:
 1971              		.loc 1 577 0
 1972 00c8 85FF     		testl	%edi, %edi
 1973 00ca 7E73     		jle	.L136
 1974 00cc 4D635424 		movslq	16(%r12), %r10
 1974      10
 1975 00d1 4889E9   		movq	%rbp, %rcx
 1976 00d4 4531C9   		xorl	%r9d, %r9d
 1977 00d7 4D89D3   		movq	%r10, %r11
 1978 00da EB14     		jmp	.L139
 1979              	.LVL236:
 1980 00dc 0F1F4000 		.p2align 4,,10
 1981              		.p2align 3
 1982              	.L161:
 1983 00e0 4183C101 		addl	$1, %r9d
 1984              	.LVL237:
 1985              		.loc 1 578 0
 1986 00e4 4983C001 		addq	$1, %r8
 1987              	.LVL238:
 1988              		.loc 1 577 0
 1989 00e8 4C01D1   		addq	%r10, %rcx
 1990              	.LVL239:
 1991 00eb 4139F9   		cmpl	%edi, %r9d
 1992 00ee 7447     		je	.L160
 1993              	.LVL240:
 1994              	.L139:
 1995              		.loc 1 578 0
 1996 00f0 0FB611   		movzbl	(%rcx), %edx
 1997 00f3 89D0     		movl	%edx, %eax
 1998 00f5 C1E005   		sall	$5, %eax
 1999 00f8 29D0     		subl	%edx, %eax
 2000 00fa 0FB65101 		movzbl	1(%rcx), %edx
 2001 00fe 6BD23D   		imull	$61, %edx, %edx
 2002 0101 01D0     		addl	%edx, %eax
 2003 0103 0FB65102 		movzbl	2(%rcx), %edx
 2004 0107 8D34D0   		leal	(%rax,%rdx,8), %esi
 2005 010a 89F0     		movl	%esi, %eax
 2006 010c C1FE1F   		sarl	$31, %esi
 2007 010f F7EB     		imull	%ebx
 2008 0111 C1FA05   		sarl	$5, %edx
 2009 0114 29F2     		subl	%esi, %edx
 2010              		.loc 1 579 0
 2011 0116 4183FB03 		cmpl	$3, %r11d
 2012              		.loc 1 578 0
 2013 011a 418810   		movb	%dl, (%r8)
 2014              	.LVL241:
 2015              		.loc 1 579 0
 2016 011d 7EC1     		jle	.L161
 2017              	.LVL242:
 2018 011f 0FB64103 		movzbl	3(%rcx), %eax
 2019              		.loc 1 577 0
 2020 0123 4183C101 		addl	$1, %r9d
 2021              	.LVL243:
 2022              		.loc 1 579 0
 2023 0127 4983C002 		addq	$2, %r8
 2024              	.LVL244:
 2025              		.loc 1 577 0
 2026 012b 4C01D1   		addq	%r10, %rcx
 2027              	.LVL245:
 2028              		.loc 1 579 0
 2029 012e 418840FF 		movb	%al, -1(%r8)
 2030              	.LVL246:
 2031              		.loc 1 577 0
 2032 0132 4139F9   		cmpl	%edi, %r9d
 2033 0135 75B9     		jne	.L139
 2034              	.L160:
 2035 0137 4C0FAF14 		imulq	(%rsp), %r10
 2035      24
 2036 013c 4C01D5   		addq	%r10, %rbp
 2037              	.LVL247:
 2038              	.L136:
 2039              		.loc 1 576 0
 2040 013f 4183C501 		addl	$1, %r13d
 2041              	.LVL248:
 2042 0143 4C01F5   		addq	%r14, %rbp
 2043              	.LVL249:
 2044 0146 4539FD   		cmpl	%r15d, %r13d
 2045 0149 0F8579FF 		jne	.L140
 2045      FFFF
 2046              	.LVL250:
 2047              	.L141:
 2048              		.loc 1 583 0
 2049 014f 418B4424 		movl	48(%r12), %eax
 2049      30
 2050 0154 85C0     		testl	%eax, %eax
 2051 0156 7412     		je	.L135
 2052 0158 48837C24 		cmpq	$0, 8(%rsp)
 2052      0800
 2053 015e 740A     		je	.L135
 2054 0160 488B7C24 		movq	8(%rsp), %rdi
 2054      08
 2055 0165 E8000000 		call	_ZdaPv
 2055      00
 2056              	.LVL251:
 2057              	.L135:
 2058              		.loc 1 585 0
 2059 016a 488B4424 		movq	16(%rsp), %rax
 2059      10
 2060              		.loc 1 586 0
 2061 016f 41C74424 		movl	$1, 48(%r12)
 2061      30010000 
 2061      00
 2062              	.LVL252:
 2063              	.LBB770:
 2064              	.LBB771:
  96:fltk-1.3.4-1/FL/Fl_Image.H ****   /** 
 2065              		.loc 6 96 0
 2066 0178 41C74424 		movl	$0, 20(%r12)
 2066      14000000 
 2066      00
 2067              	.LVL253:
 2068              	.LBE771:
 2069              	.LBE770:
 2070              		.loc 1 585 0
 2071 0181 49894424 		movq	%rax, 40(%r12)
 2071      28
 2072              	.LBB772:
 2073              	.LBB773:
  84:fltk-1.3.4-1/FL/Fl_Image.H ****   /**
 2074              		.loc 6 84 0
 2075 0186 8B44241C 		movl	28(%rsp), %eax
 2076 018a 41894424 		movl	%eax, 16(%r12)
 2076      10
 2077              	.LBE773:
 2078              	.LBE772:
 2079              	.LBE774:
 2080              	.LBE775:
 2081              		.loc 1 590 0
 2082 018f 4883C428 		addq	$40, %rsp
 2083              		.cfi_def_cfa_offset 56
 2084 0193 5B       		popq	%rbx
 2085              		.cfi_restore 3
 2086              		.cfi_def_cfa_offset 48
 2087 0194 5D       		popq	%rbp
 2088              		.cfi_restore 6
 2089              		.cfi_def_cfa_offset 40
 2090 0195 415C     		popq	%r12
 2091              		.cfi_restore 12
 2092              		.cfi_def_cfa_offset 32
 2093              	.LVL254:
 2094 0197 415D     		popq	%r13
 2095              		.cfi_restore 13
 2096              		.cfi_def_cfa_offset 24
 2097 0199 415E     		popq	%r14
 2098              		.cfi_restore 14
 2099              		.cfi_def_cfa_offset 16
 2100              	.LVL255:
 2101 019b 415F     		popq	%r15
 2102              		.cfi_restore 15
 2103              		.cfi_def_cfa_offset 8
 2104 019d E965FEFF 		jmp	.L157
 2104      FF
 2105              		.cfi_endproc
 2106              	.LFE586:
 2108              		.section	.text.unlikely._ZN12Fl_RGB_Image10desaturateEv
 2109              	.LCOLDE19:
 2110              		.section	.text._ZN12Fl_RGB_Image10desaturateEv
 2111              	.LHOTE19:
 2112              		.section	.text.unlikely._ZN12Fl_RGB_Image13color_averageEjf,"ax",@progbits
 2113              		.align 2
 2114              	.LCOLDB22:
 2115              		.section	.text._ZN12Fl_RGB_Image13color_averageEjf,"ax",@progbits
 2116              	.LHOTB22:
 2117              		.align 2
 2118              		.p2align 4,,15
 2119              		.globl	_ZN12Fl_RGB_Image13color_averageEjf
 2121              	_ZN12Fl_RGB_Image13color_averageEjf:
 2122              	.LFB585:
 2123              		.loc 1 494 0
 2124              		.cfi_startproc
 2125              	.LVL256:
 2126 0000 4154     		pushq	%r12
 2127              		.cfi_def_cfa_offset 16
 2128              		.cfi_offset 12, -16
 2129 0002 55       		pushq	%rbp
 2130              		.cfi_def_cfa_offset 24
 2131              		.cfi_offset 6, -24
 2132 0003 53       		pushq	%rbx
 2133              		.cfi_def_cfa_offset 32
 2134              		.cfi_offset 3, -32
 2135 0004 4883EC20 		subq	$32, %rsp
 2136              		.cfi_def_cfa_offset 64
 2137              		.loc 1 494 0
 2138 0008 64488B04 		movq	%fs:40, %rax
 2138      25280000 
 2138      00
 2139 0011 48894424 		movq	%rax, 24(%rsp)
 2139      18
 2140 0016 31C0     		xorl	%eax, %eax
 2141              	.LVL257:
 2142              		.loc 1 496 0
 2143 0018 8B4708   		movl	8(%rdi), %eax
 2144 001b 85C0     		testl	%eax, %eax
 2145 001d 740A     		je	.L162
 2146              		.loc 1 496 0 is_stmt 0 discriminator 2
 2147 001f 8B470C   		movl	12(%rdi), %eax
 2148 0022 4889FB   		movq	%rdi, %rbx
 2149              	.LVL258:
 2150 0025 85C0     		testl	%eax, %eax
 2151 0027 7527     		jne	.L198
 2152              	.LVL259:
 2153              	.L162:
 2154              		.loc 1 551 0 is_stmt 1
 2155 0029 488B4424 		movq	24(%rsp), %rax
 2155      18
 2156 002e 64483304 		xorq	%fs:40, %rax
 2156      25280000 
 2156      00
 2157 0037 0F857902 		jne	.L199
 2157      0000
 2158 003d 4883C420 		addq	$32, %rsp
 2159              		.cfi_remember_state
 2160              		.cfi_def_cfa_offset 32
 2161 0041 5B       		popq	%rbx
 2162              		.cfi_def_cfa_offset 24
 2163 0042 5D       		popq	%rbp
 2164              		.cfi_def_cfa_offset 16
 2165 0043 415C     		popq	%r12
 2166              		.cfi_def_cfa_offset 8
 2167 0045 C3       		ret
 2168              	.LVL260:
 2169 0046 662E0F1F 		.p2align 4,,10
 2169      84000000 
 2169      0000
 2170              		.p2align 3
 2171              	.L198:
 2172              		.cfi_restore_state
 2173              		.loc 1 496 0 discriminator 4
 2174 0050 8B4710   		movl	16(%rdi), %eax
 2175 0053 85C0     		testl	%eax, %eax
 2176 0055 74D2     		je	.L162
 2177              		.loc 1 496 0 is_stmt 0 discriminator 6
 2178 0057 48837F28 		cmpq	$0, 40(%rdi)
 2178      00
 2179 005c 74CB     		je	.L162
 2180              	.LBB814:
 2181              	.LBB815:
 2182              		.loc 1 499 0 is_stmt 1
 2183 005e 488B07   		movq	(%rdi), %rax
 2184 0061 F30F1144 		movss	%xmm0, 12(%rsp)
 2184      240C
 2185              	.LVL261:
 2186 0067 4189F4   		movl	%esi, %r12d
 2187              	.LVL262:
 2188 006a FF5040   		call	*64(%rax)
 2189              	.LVL263:
 2190              		.loc 1 505 0
 2191 006d 8B4330   		movl	48(%rbx), %eax
 2192 0070 F30F1044 		movss	12(%rsp), %xmm0
 2192      240C
 2193 0076 85C0     		testl	%eax, %eax
 2194 0078 0F84E701 		je	.L200
 2194      0000
 2195              		.loc 1 506 0
 2196 007e 488B6B28 		movq	40(%rbx), %rbp
 2197              	.LVL264:
 2198              	.L165:
 2199              		.loc 1 512 0
 2200 0082 488D4C24 		leaq	23(%rsp), %rcx
 2200      17
 2201 0087 488D5424 		leaq	22(%rsp), %rdx
 2201      16
 2202 008c 488D7424 		leaq	21(%rsp), %rsi
 2202      15
 2203 0091 4489E7   		movl	%r12d, %edi
 2204 0094 F30F1144 		movss	%xmm0, 12(%rsp)
 2204      240C
 2205 009a E8000000 		call	_ZN2Fl9get_colorEjRhS0_S0_
 2205      00
 2206              	.LVL265:
 2207              		.loc 1 513 0
 2208 009f 660FEFC9 		pxor	%xmm1, %xmm1
 2209 00a3 F30F1044 		movss	12(%rsp), %xmm0
 2209      240C
 2210 00a9 0F2EC8   		ucomiss	%xmm0, %xmm1
 2211 00ac 0F87DA01 		ja	.L187
 2211      0000
 2212              		.loc 1 514 0
 2213 00b2 4531D2   		xorl	%r10d, %r10d
 2214 00b5 BE000100 		movl	$256, %esi
 2214      00
 2215 00ba 0F2E0500 		ucomiss	.LC14(%rip), %xmm0
 2215      000000
 2216 00c1 0F86D201 		jbe	.L201
 2216      0000
 2217              	.L166:
 2218              	.LVL266:
 2219 00c7 448B4B14 		movl	20(%rbx), %r9d
 2220              		.loc 1 517 0
 2221 00cb 0FB64C24 		movzbl	21(%rsp), %ecx
 2221      15
 2222              	.LVL267:
 2223              		.loc 1 518 0
 2224 00d0 0FB64424 		movzbl	22(%rsp), %eax
 2224      16
 2225              	.LVL268:
 2226              		.loc 1 519 0
 2227 00d5 0FB67C24 		movzbl	23(%rsp), %edi
 2227      17
 2228              	.LVL269:
 2229 00da 8B5310   		movl	16(%rbx), %edx
 2230              		.loc 1 524 0
 2231 00dd 4585C9   		testl	%r9d, %r9d
 2232 00e0 740B     		je	.L168
 2233              	.LVL270:
 2234 00e2 448B4308 		movl	8(%rbx), %r8d
 2235 00e6 440FAFC2 		imull	%edx, %r8d
 2236 00ea 4529C1   		subl	%r8d, %r9d
 2237              	.LVL271:
 2238              	.L168:
 2239              		.loc 1 526 0
 2240 00ed 83FA02   		cmpl	$2, %edx
 2241 00f0 0F8FBE00 		jg	.L169
 2241      0000
 2242              		.loc 1 527 0
 2243 00f6 6BC03D   		imull	$61, %eax, %eax
 2244              	.LVL272:
 2245 00f9 89CA     		movl	%ecx, %edx
 2246              		.loc 1 529 0
 2247 00fb 4531C0   		xorl	%r8d, %r8d
 2248              		.loc 1 527 0
 2249 00fe C1E205   		sall	$5, %edx
 2250 0101 4D63C9   		movslq	%r9d, %r9
 2251 0104 29CA     		subl	%ecx, %edx
 2252 0106 01C2     		addl	%eax, %edx
 2253 0108 400FB6C7 		movzbl	%dil, %eax
 2254 010c 8D0CC2   		leal	(%rdx,%rax,8), %ecx
 2255              	.LVL273:
 2256 010f BA1F85EB 		movl	$1374389535, %edx
 2256      51
 2257 0114 89C8     		movl	%ecx, %eax
 2258 0116 C1F91F   		sarl	$31, %ecx
 2259 0119 F7EA     		imull	%edx
 2260              		.loc 1 529 0
 2261 011b 8B430C   		movl	12(%rbx), %eax
 2262              		.loc 1 527 0
 2263 011e C1FA05   		sarl	$5, %edx
 2264 0121 29CA     		subl	%ecx, %edx
 2265              		.loc 1 529 0
 2266 0123 4889E9   		movq	%rbp, %rcx
 2267              		.loc 1 527 0
 2268 0126 440FAFD2 		imull	%edx, %r10d
 2269              	.LVL274:
 2270              		.loc 1 529 0
 2271 012a 85C0     		testl	%eax, %eax
 2272 012c 488B5328 		movq	40(%rbx), %rdx
 2273              	.LVL275:
 2274 0130 7E5E     		jle	.L178
 2275              	.LVL276:
 2276              		.p2align 4,,10
 2277 0132 660F1F44 		.p2align 3
 2277      0000
 2278              	.L189:
 2279              		.loc 1 530 0
 2280 0138 448B5B08 		movl	8(%rbx), %r11d
 2281 013c 4585DB   		testl	%r11d, %r11d
 2282 013f 7E42     		jle	.L173
 2283 0141 31FF     		xorl	%edi, %edi
 2284 0143 EB1A     		jmp	.L176
 2285              	.LVL277:
 2286              		.p2align 4,,10
 2287 0145 0F1F00   		.p2align 3
 2288              	.L174:
 2289              		.loc 1 532 0
 2290 0148 0FB64201 		movzbl	1(%rdx), %eax
 2291 014c 4883C102 		addq	$2, %rcx
 2292              	.LVL278:
 2293 0150 4883C202 		addq	$2, %rdx
 2294              	.LVL279:
 2295              		.loc 1 530 0
 2296 0154 83C701   		addl	$1, %edi
 2297              	.LVL280:
 2298              		.loc 1 532 0
 2299 0157 8841FF   		movb	%al, -1(%rcx)
 2300              	.LVL281:
 2301              		.loc 1 530 0
 2302 015a 397B08   		cmpl	%edi, 8(%rbx)
 2303 015d 7E24     		jle	.L173
 2304              	.LVL282:
 2305              	.L176:
 2306              		.loc 1 531 0
 2307 015f 0FB602   		movzbl	(%rdx), %eax
 2308 0162 0FAFC6   		imull	%esi, %eax
 2309 0165 4401D0   		addl	%r10d, %eax
 2310 0168 C1E808   		shrl	$8, %eax
 2311 016b 8801     		movb	%al, (%rcx)
 2312              	.LVL283:
 2313              		.loc 1 532 0
 2314 016d 837B1001 		cmpl	$1, 16(%rbx)
 2315 0171 7FD5     		jg	.L174
 2316              		.loc 1 531 0
 2317 0173 4883C101 		addq	$1, %rcx
 2318              	.LVL284:
 2319 0177 4883C201 		addq	$1, %rdx
 2320              	.LVL285:
 2321              		.loc 1 530 0
 2322 017b 83C701   		addl	$1, %edi
 2323              	.LVL286:
 2324 017e 397B08   		cmpl	%edi, 8(%rbx)
 2325 0181 7FDC     		jg	.L176
 2326              	.LVL287:
 2327              	.L173:
 2328              		.loc 1 529 0
 2329 0183 4183C001 		addl	$1, %r8d
 2330              	.LVL288:
 2331 0187 4C01CA   		addq	%r9, %rdx
 2332              	.LVL289:
 2333 018a 4439430C 		cmpl	%r8d, 12(%rbx)
 2334 018e 7FA8     		jg	.L189
 2335              	.LVL290:
 2336              	.L178:
 2337              		.loc 1 545 0
 2338 0190 448B6330 		movl	48(%rbx), %r12d
 2339 0194 4585E4   		testl	%r12d, %r12d
 2340 0197 0F858CFE 		jne	.L162
 2340      FFFF
 2341              		.loc 1 546 0
 2342 019d 48896B28 		movq	%rbp, 40(%rbx)
 2343              		.loc 1 547 0
 2344 01a1 C7433001 		movl	$1, 48(%rbx)
 2344      000000
 2345              	.LVL291:
 2346              	.LBB816:
 2347              	.LBB817:
  96:fltk-1.3.4-1/FL/Fl_Image.H ****   /** 
 2348              		.loc 6 96 0
 2349 01a8 C7431400 		movl	$0, 20(%rbx)
 2349      000000
 2350 01af E975FEFF 		jmp	.L162
 2350      FF
 2351              	.LVL292:
 2352              	.L169:
 2353              	.LBE817:
 2354              	.LBE816:
 2355              		.loc 1 535 0
 2356 01b4 448B430C 		movl	12(%rbx), %r8d
 2357 01b8 488B5328 		movq	40(%rbx), %rdx
 2358              	.LVL293:
 2359 01bc 4585C0   		testl	%r8d, %r8d
 2360 01bf 7ECF     		jle	.L178
 2361              		.loc 1 518 0
 2362 01c1 440FB6C0 		movzbl	%al, %r8d
 2363 01c5 4D63E1   		movslq	%r9d, %r12
 2364              	.LVL294:
 2365              		.loc 1 519 0
 2366 01c8 400FB6C7 		movzbl	%dil, %eax
 2367              	.LVL295:
 2368              		.loc 1 517 0
 2369 01cc 440FB6C9 		movzbl	%cl, %r9d
 2370              	.LVL296:
 2371              		.loc 1 519 0
 2372 01d0 4531DB   		xorl	%r11d, %r11d
 2373 01d3 4889E9   		movq	%rbp, %rcx
 2374              	.LVL297:
 2375              		.loc 1 517 0
 2376 01d6 450FAFCA 		imull	%r10d, %r9d
 2377              	.LVL298:
 2378              		.loc 1 518 0
 2379 01da 450FAFC2 		imull	%r10d, %r8d
 2380              	.LVL299:
 2381              		.loc 1 519 0
 2382 01de 440FAFD0 		imull	%eax, %r10d
 2383              	.LVL300:
 2384              		.p2align 4,,10
 2385 01e2 660F1F44 		.p2align 3
 2385      0000
 2386              	.L183:
 2387              		.loc 1 536 0
 2388 01e8 8B7B08   		movl	8(%rbx), %edi
 2389 01eb 85FF     		testl	%edi, %edi
 2390 01ed 7E64     		jle	.L179
 2391 01ef 31FF     		xorl	%edi, %edi
 2392 01f1 EB15     		jmp	.L182
 2393              	.LVL301:
 2394              		.p2align 4,,10
 2395 01f3 0F1F4400 		.p2align 3
 2395      00
 2396              	.L202:
 2397              		.loc 1 539 0
 2398 01f8 4883C103 		addq	$3, %rcx
 2399              	.LVL302:
 2400 01fc 4883C203 		addq	$3, %rdx
 2401              	.LVL303:
 2402              		.loc 1 536 0
 2403 0200 83C701   		addl	$1, %edi
 2404              	.LVL304:
 2405 0203 397B08   		cmpl	%edi, 8(%rbx)
 2406 0206 7E4B     		jle	.L179
 2407              	.LVL305:
 2408              	.L182:
 2409              		.loc 1 537 0
 2410 0208 0FB602   		movzbl	(%rdx), %eax
 2411 020b 0FAFC6   		imull	%esi, %eax
 2412 020e 4401C8   		addl	%r9d, %eax
 2413 0211 C1E808   		shrl	$8, %eax
 2414 0214 8801     		movb	%al, (%rcx)
 2415              	.LVL306:
 2416              		.loc 1 538 0
 2417 0216 0FB64201 		movzbl	1(%rdx), %eax
 2418 021a 0FAFC6   		imull	%esi, %eax
 2419 021d 4401C0   		addl	%r8d, %eax
 2420 0220 C1E808   		shrl	$8, %eax
 2421 0223 884101   		movb	%al, 1(%rcx)
 2422              	.LVL307:
 2423              		.loc 1 539 0
 2424 0226 0FB64202 		movzbl	2(%rdx), %eax
 2425 022a 0FAFC6   		imull	%esi, %eax
 2426 022d 4401D0   		addl	%r10d, %eax
 2427 0230 C1E808   		shrl	$8, %eax
 2428 0233 884102   		movb	%al, 2(%rcx)
 2429              	.LVL308:
 2430              		.loc 1 540 0
 2431 0236 837B1003 		cmpl	$3, 16(%rbx)
 2432 023a 7EBC     		jle	.L202
 2433              	.LVL309:
 2434 023c 0FB64203 		movzbl	3(%rdx), %eax
 2435 0240 4883C104 		addq	$4, %rcx
 2436              	.LVL310:
 2437 0244 4883C204 		addq	$4, %rdx
 2438              	.LVL311:
 2439              		.loc 1 536 0
 2440 0248 83C701   		addl	$1, %edi
 2441              	.LVL312:
 2442              		.loc 1 540 0
 2443 024b 8841FF   		movb	%al, -1(%rcx)
 2444              	.LVL313:
 2445              		.loc 1 536 0
 2446 024e 397B08   		cmpl	%edi, 8(%rbx)
 2447 0251 7FB5     		jg	.L182
 2448              	.LVL314:
 2449              	.L179:
 2450              		.loc 1 535 0
 2451 0253 4183C301 		addl	$1, %r11d
 2452              	.LVL315:
 2453 0257 4C01E2   		addq	%r12, %rdx
 2454              	.LVL316:
 2455 025a 44395B0C 		cmpl	%r11d, 12(%rbx)
 2456 025e 7F88     		jg	.L183
 2457 0260 E92BFFFF 		jmp	.L178
 2457      FF
 2458              	.LVL317:
 2459              	.L200:
 2460              		.loc 1 505 0
 2461 0265 8B7B0C   		movl	12(%rbx), %edi
 2462 0268 F30F1144 		movss	%xmm0, 12(%rsp)
 2462      240C
 2463              	.LVL318:
 2464 026e 0FAF7B08 		imull	8(%rbx), %edi
 2465 0272 0FAF7B10 		imull	16(%rbx), %edi
 2466 0276 4863FF   		movslq	%edi, %rdi
 2467 0279 E8000000 		call	_Znam
 2467      00
 2468              	.LVL319:
 2469 027e F30F1044 		movss	12(%rsp), %xmm0
 2469      240C
 2470 0284 4889C5   		movq	%rax, %rbp
 2471              	.LVL320:
 2472 0287 E9F6FDFF 		jmp	.L165
 2472      FF
 2473              	.LVL321:
 2474              	.L187:
 2475              		.loc 1 513 0
 2476 028c 41BA0001 		movl	$256, %r10d
 2476      0000
 2477 0292 31F6     		xorl	%esi, %esi
 2478 0294 E92EFEFF 		jmp	.L166
 2478      FF
 2479              	.L201:
 2480 0299 F30F5905 		mulss	.LC21(%rip), %xmm0
 2480      00000000 
 2481 02a1 41BA0001 		movl	$256, %r10d
 2481      0000
 2482 02a7 F3480F2C 		cvttss2siq	%xmm0, %rax
 2482      C0
 2483 02ac 89C6     		movl	%eax, %esi
 2484 02ae 4129C2   		subl	%eax, %r10d
 2485 02b1 E911FEFF 		jmp	.L166
 2485      FF
 2486              	.LVL322:
 2487              	.L199:
 2488              	.LBE815:
 2489              	.LBE814:
 2490              		.loc 1 551 0
 2491 02b6 E8000000 		call	__stack_chk_fail
 2491      00
 2492              	.LVL323:
 2493              		.cfi_endproc
 2494              	.LFE585:
 2496              		.section	.text.unlikely._ZN12Fl_RGB_Image13color_averageEjf
 2497              	.LCOLDE22:
 2498              		.section	.text._ZN12Fl_RGB_Image13color_averageEjf
 2499              	.LHOTE22:
 2500              		.section	.text.unlikely._ZN8Fl_ImageC2Eiii,"ax",@progbits
 2501              		.align 2
 2502              	.LCOLDB23:
 2503              		.section	.text._ZN8Fl_ImageC2Eiii,"ax",@progbits
 2504              	.LHOTB23:
 2505              		.align 2
 2506              		.p2align 4,,15
 2507              		.globl	_ZN8Fl_ImageC2Eiii
 2509              	_ZN8Fl_ImageC2Eiii:
 2510              	.LFB554:
 2511              		.loc 1 47 0
 2512              		.cfi_startproc
 2513              	.LVL324:
 2514              	.LBB818:
 2515              		.loc 1 48 0
 2516 0000 48C70700 		movq	$_ZTV8Fl_Image+16, (%rdi)
 2516      000000
 2517 0007 897708   		movl	%esi, 8(%rdi)
 2518 000a 89570C   		movl	%edx, 12(%rdi)
 2519 000d 894F10   		movl	%ecx, 16(%rdi)
 2520 0010 C7471400 		movl	$0, 20(%rdi)
 2520      000000
 2521 0017 C7471800 		movl	$0, 24(%rdi)
 2521      000000
 2522 001e 48C74720 		movq	$0, 32(%rdi)
 2522      00000000 
 2523 0026 C3       		ret
 2524              	.LBE818:
 2525              		.cfi_endproc
 2526              	.LFE554:
 2528              		.section	.text.unlikely._ZN8Fl_ImageC2Eiii
 2529              	.LCOLDE23:
 2530              		.section	.text._ZN8Fl_ImageC2Eiii
 2531              	.LHOTE23:
 2532              		.globl	_ZN8Fl_ImageC1Eiii
 2533              		.set	_ZN8Fl_ImageC1Eiii,_ZN8Fl_ImageC2Eiii
 2534              		.section	.text.unlikely._ZN8Fl_Image10draw_emptyEii,"ax",@progbits
 2535              		.align 2
 2536              	.LCOLDB24:
 2537              		.section	.text._ZN8Fl_Image10draw_emptyEii,"ax",@progbits
 2538              	.LHOTB24:
 2539              		.align 2
 2540              		.p2align 4,,15
 2541              		.globl	_ZN8Fl_Image10draw_emptyEii
 2543              	_ZN8Fl_Image10draw_emptyEii:
 2544              	.LFB562:
 2545              		.loc 1 75 0
 2546              		.cfi_startproc
 2547              	.LVL325:
 2548              		.loc 1 76 0
 2549 0000 8B4F08   		movl	8(%rdi), %ecx
 2550 0003 85C9     		testl	%ecx, %ecx
 2551 0005 7E11     		jle	.L204
 2552              	.LVL326:
 2553              		.loc 1 76 0 is_stmt 0 discriminator 1
 2554 0007 8B470C   		movl	12(%rdi), %eax
 2555 000a 85C0     		testl	%eax, %eax
 2556 000c 7E0A     		jle	.L204
 2557 000e E9000000 		jmp	_ZN8Fl_Image10draw_emptyEii.part.13
 2557      00
 2558              	.LVL327:
 2559              		.p2align 4,,10
 2560 0013 0F1F4400 		.p2align 3
 2560      00
 2561              	.L204:
 2562 0018 F3C3     		rep ret
 2563              		.cfi_endproc
 2564              	.LFE562:
 2566              		.section	.text.unlikely._ZN8Fl_Image10draw_emptyEii
 2567              	.LCOLDE24:
 2568              		.section	.text._ZN8Fl_Image10draw_emptyEii
 2569              	.LHOTE24:
 2570              		.section	.text.unlikely._ZN8Fl_Image4failEv,"ax",@progbits
 2571              		.align 2
 2572              	.LCOLDB25:
 2573              		.section	.text._ZN8Fl_Image4failEv,"ax",@progbits
 2574              	.LHOTB25:
 2575              		.align 2
 2576              		.p2align 4,,15
 2577              		.globl	_ZN8Fl_Image4failEv
 2579              	_ZN8Fl_Image4failEv:
 2580              	.LFB568:
 2581              		.loc 1 170 0 is_stmt 1
 2582              		.cfi_startproc
 2583              	.LVL328:
 2584              		.loc 1 172 0
 2585 0000 8B7708   		movl	8(%rdi), %esi
 2586 0003 85F6     		testl	%esi, %esi
 2587 0005 7E19     		jle	.L208
 2588              		.loc 1 172 0 is_stmt 0 discriminator 1
 2589 0007 8B4F0C   		movl	12(%rdi), %ecx
 2590 000a 85C9     		testl	%ecx, %ecx
 2591 000c 7E12     		jle	.L208
 2592              		.loc 1 172 0 discriminator 2
 2593 000e 8B5710   		movl	16(%rdi), %edx
 2594              		.loc 1 178 0 is_stmt 1 discriminator 2
 2595 0011 31C0     		xorl	%eax, %eax
 2596              		.loc 1 172 0 discriminator 2
 2597 0013 85D2     		testl	%edx, %edx
 2598 0015 7E09     		jle	.L208
 2599              		.loc 1 179 0
 2600 0017 F3C3     		rep ret
 2601 0019 0F1F8000 		.p2align 4,,10
 2601      000000
 2602              		.p2align 3
 2603              	.L208:
 2604              		.loc 1 173 0
 2605 0020 8B4714   		movl	20(%rdi), %eax
 2606              		.loc 1 174 0
 2607 0023 BAFFFFFF 		movl	$-1, %edx
 2607      FF
 2608 0028 85C0     		testl	%eax, %eax
 2609 002a 0F44C2   		cmove	%edx, %eax
 2610              		.loc 1 179 0
 2611 002d C3       		ret
 2612              		.cfi_endproc
 2613              	.LFE568:
 2615              		.section	.text.unlikely._ZN8Fl_Image4failEv
 2616              	.LCOLDE25:
 2617              		.section	.text._ZN8Fl_Image4failEv
 2618              	.LHOTE25:
 2619              		.section	.text.unlikely._ZN8Fl_Image11RGB_scalingE14Fl_RGB_Scaling,"ax",@progbits
 2620              		.align 2
 2621              	.LCOLDB26:
 2622              		.section	.text._ZN8Fl_Image11RGB_scalingE14Fl_RGB_Scaling,"ax",@progbits
 2623              	.LHOTB26:
 2624              		.align 2
 2625              		.p2align 4,,15
 2626              		.globl	_ZN8Fl_Image11RGB_scalingE14Fl_RGB_Scaling
 2628              	_ZN8Fl_Image11RGB_scalingE14Fl_RGB_Scaling:
 2629              	.LFB571:
 2630              		.loc 1 221 0
 2631              		.cfi_startproc
 2632              	.LVL329:
 2633              		.loc 1 222 0
 2634 0000 893D0000 		movl	%edi, _ZN8Fl_Image12RGB_scaling_E(%rip)
 2634      0000
 2635 0006 C3       		ret
 2636              		.cfi_endproc
 2637              	.LFE571:
 2639              		.section	.text.unlikely._ZN8Fl_Image11RGB_scalingE14Fl_RGB_Scaling
 2640              	.LCOLDE26:
 2641              		.section	.text._ZN8Fl_Image11RGB_scalingE14Fl_RGB_Scaling
 2642              	.LHOTE26:
 2643              		.section	.text.unlikely._ZN8Fl_Image11RGB_scalingEv,"ax",@progbits
 2644              		.align 2
 2645              	.LCOLDB27:
 2646              		.section	.text._ZN8Fl_Image11RGB_scalingEv,"ax",@progbits
 2647              	.LHOTB27:
 2648              		.align 2
 2649              		.p2align 4,,15
 2650              		.globl	_ZN8Fl_Image11RGB_scalingEv
 2652              	_ZN8Fl_Image11RGB_scalingEv:
 2653              	.LFB572:
 2654              		.loc 1 226 0
 2655              		.cfi_startproc
 2656              		.loc 1 228 0
 2657 0000 8B050000 		movl	_ZN8Fl_Image12RGB_scaling_E(%rip), %eax
 2657      0000
 2658 0006 C3       		ret
 2659              		.cfi_endproc
 2660              	.LFE572:
 2662              		.section	.text.unlikely._ZN8Fl_Image11RGB_scalingEv
 2663              	.LCOLDE27:
 2664              		.section	.text._ZN8Fl_Image11RGB_scalingEv
 2665              	.LHOTE27:
 2666              		.section	.text.unlikely._ZN12Fl_RGB_ImageC2EPKhiiii,"ax",@progbits
 2667              		.align 2
 2668              	.LCOLDB28:
 2669              		.section	.text._ZN12Fl_RGB_ImageC2EPKhiiii,"ax",@progbits
 2670              	.LHOTB28:
 2671              		.align 2
 2672              		.p2align 4,,15
 2673              		.globl	_ZN12Fl_RGB_ImageC2EPKhiiii
 2675              	_ZN12Fl_RGB_ImageC2EPKhiiii:
 2676              	.LFB574:
 2677              		.loc 1 273 0
 2678              		.cfi_startproc
 2679              	.LVL330:
 2680              	.LBB819:
 2681              		.loc 1 280 0
 2682 0000 488D4728 		leaq	40(%rdi), %rax
 2683              	.LBB820:
 2684              	.LBB821:
 2685              		.loc 1 48 0
 2686 0004 895708   		movl	%edx, 8(%rdi)
 2687 0007 894F0C   		movl	%ecx, 12(%rdi)
 2688 000a 44894710 		movl	%r8d, 16(%rdi)
 2689              	.LVL331:
 2690              	.LBE821:
 2691              	.LBE820:
 2692              		.loc 1 278 0
 2693 000e 48C70700 		movq	$_ZTV12Fl_RGB_Image+16, (%rdi)
 2693      000000
 2694 0015 48897728 		movq	%rsi, 40(%rdi)
 2695 0019 C7473000 		movl	$0, 48(%rdi)
 2695      000000
 2696 0020 C7473400 		movl	$0, 52(%rdi)
 2696      000000
 2697 0027 C7473800 		movl	$0, 56(%rdi)
 2697      000000
 2698              	.LVL332:
 2699              		.loc 1 280 0
 2700 002e 48894720 		movq	%rax, 32(%rdi)
 2701              	.LBB822:
 2702              	.LBB823:
 2703              		.loc 6 100 0
 2704 0032 C7471801 		movl	$1, 24(%rdi)
 2704      000000
 2705              	.LVL333:
 2706              	.LBE823:
 2707              	.LBE822:
 2708              	.LBB824:
 2709              	.LBB825:
  96:fltk-1.3.4-1/FL/Fl_Image.H ****   /** 
 2710              		.loc 6 96 0
 2711 0039 44894F14 		movl	%r9d, 20(%rdi)
 2712              	.LVL334:
 2713 003d C3       		ret
 2714              	.LBE825:
 2715              	.LBE824:
 2716              	.LBE819:
 2717              		.cfi_endproc
 2718              	.LFE574:
 2720              		.section	.text.unlikely._ZN12Fl_RGB_ImageC2EPKhiiii
 2721              	.LCOLDE28:
 2722              		.section	.text._ZN12Fl_RGB_ImageC2EPKhiiii
 2723              	.LHOTE28:
 2724              		.globl	_ZN12Fl_RGB_ImageC1EPKhiiii
 2725              		.set	_ZN12Fl_RGB_ImageC1EPKhiiii,_ZN12Fl_RGB_ImageC2EPKhiiii
 2726              		.section	.text.unlikely._ZN12Fl_RGB_ImageC2EPK9Fl_Pixmapj,"ax",@progbits
 2727              		.align 2
 2728              	.LCOLDB29:
 2729              		.section	.text._ZN12Fl_RGB_ImageC2EPK9Fl_Pixmapj,"ax",@progbits
 2730              	.LHOTB29:
 2731              		.align 2
 2732              		.p2align 4,,15
 2733              		.globl	_ZN12Fl_RGB_ImageC2EPK9Fl_Pixmapj
 2735              	_ZN12Fl_RGB_ImageC2EPK9Fl_Pixmapj:
 2736              	.LFB577:
 2737              		.loc 1 295 0
 2738              		.cfi_startproc
 2739              	.LVL335:
 2740 0000 55       		pushq	%rbp
 2741              		.cfi_def_cfa_offset 16
 2742              		.cfi_offset 6, -16
 2743 0001 53       		pushq	%rbx
 2744              		.cfi_def_cfa_offset 24
 2745              		.cfi_offset 3, -24
 2746 0002 4889FB   		movq	%rdi, %rbx
 2747 0005 4883EC18 		subq	$24, %rsp
 2748              		.cfi_def_cfa_offset 48
 2749 0009 8B460C   		movl	12(%rsi), %eax
 2750              	.LVL336:
 2751 000c 8B7E08   		movl	8(%rsi), %edi
 2752              	.LVL337:
 2753              	.LBB826:
 2754              	.LBB827:
 2755              	.LBB828:
 2756              		.loc 1 48 0
 2757 000f C7431004 		movl	$4, 16(%rbx)
 2757      000000
 2758 0016 C7431400 		movl	$0, 20(%rbx)
 2758      000000
 2759 001d C7431800 		movl	$0, 24(%rbx)
 2759      000000
 2760 0024 48C74320 		movq	$0, 32(%rbx)
 2760      00000000 
 2761              	.LVL338:
 2762 002c 897B08   		movl	%edi, 8(%rbx)
 2763 002f 89430C   		movl	%eax, 12(%rbx)
 2764              	.LBE828:
 2765              	.LBE827:
 2766              		.loc 1 300 0
 2767 0032 48C70300 		movq	$_ZTV12Fl_RGB_Image+16, (%rbx)
 2767      000000
 2768 0039 48C74328 		movq	$0, 40(%rbx)
 2768      00000000 
 2769 0041 C7433000 		movl	$0, 48(%rbx)
 2769      000000
 2770 0048 C7433400 		movl	$0, 52(%rbx)
 2770      000000
 2771 004f C7433800 		movl	$0, 56(%rbx)
 2771      000000
 2772              	.LVL339:
 2773              		.loc 1 302 0
 2774 0056 448B4608 		movl	8(%rsi), %r8d
 2775 005a 4585C0   		testl	%r8d, %r8d
 2776 005d 7E3B     		jle	.L216
 2777              		.loc 1 302 0 is_stmt 0 discriminator 3
 2778 005f 8B4E0C   		movl	12(%rsi), %ecx
 2779 0062 4889F5   		movq	%rsi, %rbp
 2780              	.LVL340:
 2781 0065 85C9     		testl	%ecx, %ecx
 2782 0067 7E31     		jle	.L216
 2783              		.loc 1 303 0 is_stmt 1
 2784 0069 0FAFC7   		imull	%edi, %eax
 2785 006c 8954240C 		movl	%edx, 12(%rsp)
 2786              	.LVL341:
 2787 0070 8D3C8500 		leal	0(,%rax,4), %edi
 2787      000000
 2788 0077 4863FF   		movslq	%edi, %rdi
 2789 007a E8000000 		call	_Znam
 2789      00
 2790              	.LVL342:
 2791              		.loc 1 304 0
 2792 007f C7433001 		movl	$1, 48(%rbx)
 2792      000000
 2793              	.LVL343:
 2794              		.loc 1 303 0
 2795 0086 48894328 		movq	%rax, 40(%rbx)
 2796              		.loc 1 305 0
 2797 008a 4889C6   		movq	%rax, %rsi
 2798 008d 488B7D20 		movq	32(%rbp), %rdi
 2799 0091 8B54240C 		movl	12(%rsp), %edx
 2800 0095 E8000000 		call	_Z17fl_convert_pixmapPKPKcPhj
 2800      00
 2801              	.LVL344:
 2802              	.L216:
 2803              		.loc 1 307 0
 2804 009a 488D4328 		leaq	40(%rbx), %rax
 2805              	.LVL345:
 2806              	.LBB829:
 2807              	.LBB830:
 2808              		.loc 6 100 0
 2809 009e C7431801 		movl	$1, 24(%rbx)
 2809      000000
 2810              	.LVL346:
 2811              	.LBE830:
 2812              	.LBE829:
 2813              		.loc 1 307 0
 2814 00a5 48894320 		movq	%rax, 32(%rbx)
 2815              	.LBE826:
 2816              		.loc 1 308 0
 2817 00a9 4883C418 		addq	$24, %rsp
 2818              		.cfi_def_cfa_offset 24
 2819 00ad 5B       		popq	%rbx
 2820              		.cfi_def_cfa_offset 16
 2821              	.LVL347:
 2822 00ae 5D       		popq	%rbp
 2823              		.cfi_def_cfa_offset 8
 2824 00af C3       		ret
 2825              		.cfi_endproc
 2826              	.LFE577:
 2828              		.section	.text.unlikely._ZN12Fl_RGB_ImageC2EPK9Fl_Pixmapj
 2829              	.LCOLDE29:
 2830              		.section	.text._ZN12Fl_RGB_ImageC2EPK9Fl_Pixmapj
 2831              	.LHOTE29:
 2832              		.globl	_ZN12Fl_RGB_ImageC1EPK9Fl_Pixmapj
 2833              		.set	_ZN12Fl_RGB_ImageC1EPK9Fl_Pixmapj,_ZN12Fl_RGB_ImageC2EPK9Fl_Pixmapj
 2834              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11draw_scaledEP8Fl_Imageiiii,"ax",@progbits
 2835              		.align 2
 2836              	.LCOLDB30:
 2837              		.section	.text._ZN18Fl_Graphics_Driver11draw_scaledEP8Fl_Imageiiii,"ax",@progbits
 2838              	.LHOTB30:
 2839              		.align 2
 2840              		.p2align 4,,15
 2841              		.globl	_ZN18Fl_Graphics_Driver11draw_scaledEP8Fl_Imageiiii
 2843              	_ZN18Fl_Graphics_Driver11draw_scaledEP8Fl_Imageiiii:
 2844              	.LFB590:
 2845              		.loc 1 674 0
 2846              		.cfi_startproc
 2847              	.LVL348:
 2848              		.loc 1 676 0
 2849 0000 31C0     		xorl	%eax, %eax
 2850 0002 C3       		ret
 2851              		.cfi_endproc
 2852              	.LFE590:
 2854              		.section	.text.unlikely._ZN18Fl_Graphics_Driver11draw_scaledEP8Fl_Imageiiii
 2855              	.LCOLDE30:
 2856              		.section	.text._ZN18Fl_Graphics_Driver11draw_scaledEP8Fl_Imageiiii
 2857              	.LHOTE30:
 2858              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"ax",@progbits
 2859              		.align 2
 2860              	.LCOLDB31:
 2861              		.section	.text._ZN23Fl_Xlib_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii,"ax",@progbits
 2862              	.LHOTB31:
 2863              		.align 2
 2864              		.p2align 4,,15
 2865              		.globl	_ZN23Fl_Xlib_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
 2867              	_ZN23Fl_Xlib_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii:
 2868              	.LFB591:
 2869              		.loc 1 818 0
 2870              		.cfi_startproc
 2871              	.LVL349:
 2872 0000 4157     		pushq	%r15
 2873              		.cfi_def_cfa_offset 16
 2874              		.cfi_offset 15, -16
 2875 0002 4156     		pushq	%r14
 2876              		.cfi_def_cfa_offset 24
 2877              		.cfi_offset 14, -24
 2878 0004 4989F6   		movq	%rsi, %r14
 2879 0007 4155     		pushq	%r13
 2880              		.cfi_def_cfa_offset 32
 2881              		.cfi_offset 13, -32
 2882 0009 4154     		pushq	%r12
 2883              		.cfi_def_cfa_offset 40
 2884              		.cfi_offset 12, -40
 2885 000b 4189CF   		movl	%ecx, %r15d
 2886 000e 55       		pushq	%rbp
 2887              		.cfi_def_cfa_offset 48
 2888              		.cfi_offset 6, -48
 2889 000f 53       		pushq	%rbx
 2890              		.cfi_def_cfa_offset 56
 2891              		.cfi_offset 3, -56
 2892 0010 89D3     		movl	%edx, %ebx
 2893 0012 4883EC48 		subq	$72, %rsp
 2894              		.cfi_def_cfa_offset 128
 2895              		.loc 1 821 0
 2896 0016 8B7610   		movl	16(%rsi), %esi
 2897              	.LVL350:
 2898              		.loc 1 818 0
 2899 0019 64488B04 		movq	%fs:40, %rax
 2899      25280000 
 2899      00
 2900 0022 48894424 		movq	%rax, 56(%rsp)
 2900      38
 2901 0027 31C0     		xorl	%eax, %eax
 2902              	.LVL351:
 2903              		.loc 1 821 0
 2904 0029 85F6     		testl	%esi, %esi
 2905 002b 0F849702 		je	.L222
 2905      0000
 2906              		.loc 1 821 0 is_stmt 0 discriminator 2
 2907 0031 49837E28 		cmpq	$0, 40(%r14)
 2907      00
 2908 0036 0F848C02 		je	.L222
 2908      0000
 2909 003c 418B460C 		movl	12(%r14), %eax
 2910              	.LBB875:
 2911              	.LBB876:
 2912              	.LBB877:
 2913              	.LBB878:
 127:fltk-1.3.4-1/FL/fl_draw.H **** /** Undoes any clobbering of clip done by your program */
 2914              		.loc 3 127 0 is_stmt 1
 2915 0040 4883EC08 		subq	$8, %rsp
 2916              		.cfi_def_cfa_offset 136
 2917 0044 4889FD   		movq	%rdi, %rbp
 2918 0047 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 2918      000000
 2919              	.LVL352:
 2920 004e 4489C1   		movl	%r8d, %ecx
 2921              	.LVL353:
 2922 0051 4589C8   		movl	%r9d, %r8d
 2923              	.LVL354:
 2924 0054 89442414 		movl	%eax, 20(%rsp)
 2925              	.LVL355:
 2926 0058 418B4608 		movl	8(%r14), %eax
 2927 005c 89442408 		movl	%eax, 8(%rsp)
 2928              	.LVL356:
 2929 0060 488D7424 		leaq	52(%rsp), %rsi
 2929      34
 2930 0065 488B07   		movq	(%rdi), %rax
 2931 0068 56       		pushq	%rsi
 2932              		.cfi_def_cfa_offset 144
 2933 0069 89DE     		movl	%ebx, %esi
 2934 006b 4C8D6424 		leaq	56(%rsp), %r12
 2934      38
 2935 0070 4154     		pushq	%r12
 2936              		.cfi_def_cfa_offset 152
 2937 0072 488D5424 		leaq	60(%rsp), %rdx
 2937      3C
 2938              	.LVL357:
 2939 0077 52       		pushq	%rdx
 2940              		.cfi_def_cfa_offset 160
 2941 0078 4489FA   		movl	%r15d, %edx
 2942 007b 4C8D4C24 		leaq	64(%rsp), %r9
 2942      40
 2943              	.LVL358:
 2944 0080 FF905801 		call	*344(%rax)
 2944      0000
 2945              	.LVL359:
 2946              	.LBE878:
 2947              	.LBE877:
 2948              		.loc 1 660 0
 2949 0086 8B442440 		movl	64(%rsp), %eax
 2950 008a 8B542444 		movl	68(%rsp), %edx
 2951              		.loc 1 662 0
 2952 008e 4883C420 		addq	$32, %rsp
 2953              		.cfi_def_cfa_offset 128
 2954              		.loc 1 660 0
 2955 0092 89C7     		movl	%eax, %edi
 2956 0094 29DF     		subl	%ebx, %edi
 2957 0096 89FB     		movl	%edi, %ebx
 2958              	.LVL360:
 2959              		.loc 1 662 0
 2960 0098 039C2480 		addl	128(%rsp), %ebx
 2960      000000
 2961 009f 0F88EB02 		js	.L252
 2961      0000
 2962 00a5 448B6C24 		movl	40(%rsp), %r13d
 2962      28
 2963              	.L253:
 2964              	.LVL361:
 2965              		.loc 1 663 0
 2966 00aa 8B3424   		movl	(%rsp), %esi
 2967 00ad 428D042B 		leal	(%rbx,%r13), %eax
 2968 00b1 39C6     		cmpl	%eax, %esi
 2969 00b3 0F8C3702 		jl	.L283
 2969      0000
 2970              	.L226:
 2971              		.loc 1 664 0
 2972 00b9 4585ED   		testl	%r13d, %r13d
 2973 00bc 0F8EDE01 		jle	.L221
 2973      0000
 2974              		.loc 1 660 0
 2975 00c2 4189D3   		movl	%edx, %r11d
 2976 00c5 4529FB   		subl	%r15d, %r11d
 2977              		.loc 1 665 0
 2978 00c8 44039C24 		addl	136(%rsp), %r11d
 2978      88000000 
 2979 00d0 0F882A02 		js	.L228
 2979      0000
 2980 00d6 8B44242C 		movl	44(%rsp), %eax
 2981              	.L229:
 2982              	.LVL362:
 2983              		.loc 1 666 0
 2984 00da 8B7C240C 		movl	12(%rsp), %edi
 2985 00de 418D1403 		leal	(%r11,%rax), %edx
 2986 00e2 39D7     		cmpl	%edx, %edi
 2987 00e4 7D09     		jge	.L230
 2988 00e6 89F8     		movl	%edi, %eax
 2989 00e8 4429D8   		subl	%r11d, %eax
 2990 00eb 8944242C 		movl	%eax, 44(%rsp)
 2991              	.L230:
 2992              		.loc 1 667 0
 2993 00ef 85C0     		testl	%eax, %eax
 2994 00f1 0F8EA901 		jle	.L221
 2994      0000
 2995              	.LVL363:
 2996              	.LBE876:
 2997              	.LBE875:
 2998              	.LBB881:
 2999              		.loc 1 828 0
 3000 00f7 418B7E34 		movl	52(%r14), %edi
 3001 00fb 85FF     		testl	%edi, %edi
 3002 00fd 0F851D02 		jne	.L257
 3002      0000
 3003 0103 418B5610 		movl	16(%r14), %edx
 3004              	.LVL364:
 3005              	.LBB882:
 3006              		.loc 1 829 0
 3007 0107 89D1     		movl	%edx, %ecx
 3008 0109 83E1FD   		andl	$-3, %ecx
 3009 010c 83F901   		cmpl	$1, %ecx
 3010 010f 0F84CB02 		je	.L284
 3010      0000
 3011              	.LVL365:
 3012              	.LBB883:
 3013              		.loc 1 834 0
 3014 0115 83FA04   		cmpl	$4, %edx
 3015 0118 0F848C02 		je	.L285
 3015      0000
 3016              	.LVL366:
 3017              	.L279:
 3018              	.LBE883:
 3019              	.LBE882:
 3020              	.LBE881:
 3021              	.LBB925:
 3022              		.loc 1 842 0
 3023 011e 8944240C 		movl	%eax, 12(%rsp)
 3024              		.loc 1 868 0
 3025 0122 8B442424 		movl	36(%rsp), %eax
 3026 0126 418B7614 		movl	20(%r14), %esi
 3027 012a 89442410 		movl	%eax, 16(%rsp)
 3028 012e 8B442420 		movl	32(%rsp), %eax
 3029              	.LBB926:
 3030              	.LBB927:
 3031              		.loc 1 597 0
 3032 0132 85F6     		testl	%esi, %esi
 3033              	.LBE927:
 3034              	.LBE926:
 3035              		.loc 1 868 0
 3036 0134 89442414 		movl	%eax, 20(%rsp)
 3037              	.LVL367:
 3038              	.LBB938:
 3039              	.LBB936:
 3040              		.loc 1 597 0
 3041 0138 7507     		jne	.L241
 3042              	.LVL368:
 3043 013a 418B7608 		movl	8(%r14), %esi
 3044 013e 0FAFF2   		imull	%edx, %esi
 3045              	.LVL369:
 3046              	.L241:
 3047              		.loc 1 598 0
 3048 0141 440FAFDE 		imull	%esi, %r11d
 3049              	.LVL370:
 3050              		.loc 1 601 0
 3051 0145 448B7C24 		movl	12(%rsp), %r15d
 3051      0C
 3052              		.loc 1 598 0
 3053 014a 0FAFDA   		imull	%edx, %ebx
 3054              	.LVL371:
 3055 014d 4963CB   		movslq	%r11d, %rcx
 3056              		.loc 1 599 0
 3057 0150 410FAFD5 		imull	%r13d, %edx
 3058              		.loc 1 598 0
 3059 0154 4863C3   		movslq	%ebx, %rax
 3060              	.LVL372:
 3061 0157 488D1C01 		leaq	(%rcx,%rax), %rbx
 3062              		.loc 1 601 0
 3063 015b 4489F8   		movl	%r15d, %eax
 3064              		.loc 1 599 0
 3065 015e 29D6     		subl	%edx, %esi
 3066              	.LVL373:
 3067              		.loc 1 601 0
 3068 0160 410FAFC5 		imull	%r13d, %eax
 3069              		.loc 1 598 0
 3070 0164 49035E28 		addq	40(%r14), %rbx
 3071              	.LVL374:
 3072              		.loc 1 599 0
 3073 0168 89F5     		movl	%esi, %ebp
 3074              	.LVL375:
 3075              		.loc 1 601 0
 3076 016a 8D3C40   		leal	(%rax,%rax,2), %edi
 3077 016d 4863FF   		movslq	%edi, %rdi
 3078 0170 E8000000 		call	_Znam
 3078      00
 3079              	.LVL376:
 3080              		.loc 1 604 0
 3081 0175 8B542410 		movl	16(%rsp), %edx
 3082 0179 8B742414 		movl	20(%rsp), %esi
 3083 017d 4531C9   		xorl	%r9d, %r9d
 3084 0180 4589F8   		movl	%r15d, %r8d
 3085 0183 4489E9   		movl	%r13d, %ecx
 3086 0186 4889C7   		movq	%rax, %rdi
 3087              		.loc 1 601 0
 3088 0189 48894424 		movq	%rax, 24(%rsp)
 3088      18
 3089              	.LVL377:
 3090              		.loc 1 604 0
 3091 018e E8000000 		call	_Z13fl_read_imagePhiiiii
 3091      00
 3092              	.LVL378:
 3093              	.LBB928:
 3094              		.loc 1 609 0
 3095 0193 41837E10 		cmpl	$2, 16(%r14)
 3095      02
 3096 0198 0F84A704 		je	.L242
 3096      0000
 3097              	.LVL379:
 3098              	.LBB929:
 3099              		.loc 1 627 0
 3100 019e 4585FF   		testl	%r15d, %r15d
 3101 01a1 0F8EBB00 		jle	.L244
 3101      0000
 3102 01a7 4863C5   		movslq	%ebp, %rax
 3103 01aa 4C8B6424 		movq	24(%rsp), %r12
 3103      18
 3104 01af 8B6C240C 		movl	12(%rsp), %ebp
 3105              	.LVL380:
 3106 01b3 4889C7   		movq	%rax, %rdi
 3107 01b6 418D45FF 		leal	-1(%r13), %eax
 3108              	.LVL381:
 3109 01ba 4989DB   		movq	%rbx, %r11
 3110 01bd 4889FB   		movq	%rdi, %rbx
 3111              	.LVL382:
 3112 01c0 4883C001 		addq	$1, %rax
 3113 01c4 4C8D3485 		leaq	0(,%rax,4), %r14
 3113      00000000 
 3114              	.LVL383:
 3115 01cc 488D0440 		leaq	(%rax,%rax,2), %rax
 3116 01d0 48890424 		movq	%rax, (%rsp)
 3117              	.LVL384:
 3118              		.p2align 4,,10
 3119 01d4 0F1F4000 		.p2align 3
 3120              	.L250:
 3121              	.LBB930:
 3122              		.loc 1 628 0
 3123 01d8 4585ED   		testl	%r13d, %r13d
 3124 01db 7E79     		jle	.L248
 3125 01dd 4F8D3C33 		leaq	(%r11,%r14), %r15
 3126 01e1 4D89E2   		movq	%r12, %r10
 3127              	.LVL385:
 3128              		.p2align 4,,10
 3129 01e4 0F1F4000 		.p2align 3
 3130              	.L249:
 3131              		.loc 1 629 0
 3132 01e8 450FB603 		movzbl	(%r11), %r8d
 3133              	.LVL386:
 3134              		.loc 1 630 0
 3135 01ec 410FB653 		movzbl	1(%r11), %edx
 3135      01
 3136              	.LVL387:
 3137 01f1 4983C304 		addq	$4, %r11
 3138              	.LVL388:
 3139              		.loc 1 631 0
 3140 01f5 410FB67B 		movzbl	-2(%r11), %edi
 3140      FE
 3141              	.LVL389:
 3142              		.loc 1 639 0
 3143 01fa 450FB60A 		movzbl	(%r10), %r9d
 3144 01fe 4983C203 		addq	$3, %r10
 3145              	.LVL390:
 3146              		.loc 1 632 0
 3147 0202 410FB64B 		movzbl	-1(%r11), %ecx
 3147      FF
 3148              		.loc 1 636 0
 3149 0207 410FB672 		movzbl	-1(%r10), %esi
 3149      FF
 3150              		.loc 1 632 0
 3151 020c 89C8     		movl	%ecx, %eax
 3152              	.LVL391:
 3153              		.loc 1 639 0
 3154 020e F7D0     		notl	%eax
 3155 0210 0FB6C0   		movzbl	%al, %eax
 3156 0213 440FAFC8 		imull	%eax, %r9d
 3157 0217 440FAFC1 		imull	%ecx, %r8d
 3158              	.LVL392:
 3159              		.loc 1 640 0
 3160 021b 0FAFD1   		imull	%ecx, %edx
 3161              	.LVL393:
 3162              		.loc 1 639 0
 3163 021e 4501C8   		addl	%r9d, %r8d
 3164 0221 41C1F808 		sarl	$8, %r8d
 3165 0225 458842FD 		movb	%r8b, -3(%r10)
 3166              	.LVL394:
 3167              		.loc 1 640 0
 3168 0229 4189D0   		movl	%edx, %r8d
 3169 022c 410FB652 		movzbl	-2(%r10), %edx
 3169      FE
 3170              		.loc 1 641 0
 3171 0231 0FAFCF   		imull	%edi, %ecx
 3172              	.LVL395:
 3173              		.loc 1 640 0
 3174 0234 0FAFD0   		imull	%eax, %edx
 3175              		.loc 1 641 0
 3176 0237 0FAFC6   		imull	%esi, %eax
 3177              		.loc 1 640 0
 3178 023a 4401C2   		addl	%r8d, %edx
 3179 023d C1FA08   		sarl	$8, %edx
 3180              		.loc 1 641 0
 3181 0240 01C8     		addl	%ecx, %eax
 3182              		.loc 1 640 0
 3183 0242 418852FE 		movb	%dl, -2(%r10)
 3184              	.LVL396:
 3185              		.loc 1 641 0
 3186 0246 C1F808   		sarl	$8, %eax
 3187              		.loc 1 628 0
 3188 0249 4D39FB   		cmpq	%r15, %r11
 3189              		.loc 1 641 0
 3190 024c 418842FF 		movb	%al, -1(%r10)
 3191              		.loc 1 628 0
 3192 0250 7596     		jne	.L249
 3193 0252 4C032424 		addq	(%rsp), %r12
 3194              	.LVL397:
 3195              	.L248:
 3196              	.LBE930:
 3197              		.loc 1 627 0
 3198 0256 4901DB   		addq	%rbx, %r11
 3199              	.LVL398:
 3200 0259 83ED01   		subl	$1, %ebp
 3201              	.LVL399:
 3202 025c 0F8576FF 		jne	.L250
 3202      FFFF
 3203              	.LVL400:
 3204              	.L244:
 3205              	.LBE929:
 3206              	.LBE928:
 3207              	.LBB933:
 3208              	.LBB934:
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
 510:fltk-1.3.4-1/FL/fl_draw.H **** 
 511:fltk-1.3.4-1/FL/fl_draw.H **** /**
 512:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the \p face set by the most recent call to fl_font().
 513:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used to save/restore the font.
 514:fltk-1.3.4-1/FL/fl_draw.H **** */
 515:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Font fl_font() {return fl_graphics_driver->font();}
 516:fltk-1.3.4-1/FL/fl_draw.H **** /**
 517:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the \p size set by the most recent call to fl_font().
 518:fltk-1.3.4-1/FL/fl_draw.H ****   This can be used to save/restore the font.
 519:fltk-1.3.4-1/FL/fl_draw.H **** */
 520:fltk-1.3.4-1/FL/fl_draw.H **** inline Fl_Fontsize fl_size() {return fl_graphics_driver->size();}
 521:fltk-1.3.4-1/FL/fl_draw.H **** 
 522:fltk-1.3.4-1/FL/fl_draw.H **** // information you can get about the current font:
 523:fltk-1.3.4-1/FL/fl_draw.H **** /**
 524:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the recommended minimum line spacing for the current font.
 525:fltk-1.3.4-1/FL/fl_draw.H ****   You can also use the value of \p size passed to fl_font()
 526:fltk-1.3.4-1/FL/fl_draw.H **** */
 527:fltk-1.3.4-1/FL/fl_draw.H **** inline int fl_height() {return fl_graphics_driver->height();}
 528:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT int fl_height(int font, int size);
 529:fltk-1.3.4-1/FL/fl_draw.H **** /**
 530:fltk-1.3.4-1/FL/fl_draw.H ****   Returns the recommended distance above the bottom of a fl_height() tall box to
 531:fltk-1.3.4-1/FL/fl_draw.H ****   draw the text at so it looks centered vertically in that box.
 532:fltk-1.3.4-1/FL/fl_draw.H **** */
 533:fltk-1.3.4-1/FL/fl_draw.H **** inline int  fl_descent() {return fl_graphics_driver->descent();}
 534:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a nul-terminated string
 535:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size. */
 536:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT double fl_width(const char* txt);
 537:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a sequence of \p n characters
 538:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size. */
 539:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_width(const char* txt, int n) {return fl_graphics_driver->width(txt, n);}
 540:fltk-1.3.4-1/FL/fl_draw.H **** /** Returns the typographical width of a single character
 541:fltk-1.3.4-1/FL/fl_draw.H ****     using the current font face and size.
 542:fltk-1.3.4-1/FL/fl_draw.H ****     \note if a valid fl_gc is NOT found then it uses the first window gc,
 543:fltk-1.3.4-1/FL/fl_draw.H ****     or the screen gc if no fltk window is available when called. */
 544:fltk-1.3.4-1/FL/fl_draw.H **** inline double fl_width(unsigned int c)  {return fl_graphics_driver->width(c);}
 545:fltk-1.3.4-1/FL/fl_draw.H **** /** Determines the minimum pixel dimensions of a nul-terminated string.
 546:fltk-1.3.4-1/FL/fl_draw.H **** 
 547:fltk-1.3.4-1/FL/fl_draw.H ****   Usage: given a string "txt" drawn using fl_draw(txt, x, y) you would determine
 548:fltk-1.3.4-1/FL/fl_draw.H ****   its pixel extents on the display using fl_text_extents(txt, dx, dy, wo, ho)
 549:fltk-1.3.4-1/FL/fl_draw.H ****   such that a bounding box that exactly fits around the text could be drawn with
 550:fltk-1.3.4-1/FL/fl_draw.H ****   fl_rect(x+dx, y+dy, wo, ho). Note the dx, dy values hold the offset of the first
 551:fltk-1.3.4-1/FL/fl_draw.H ****   "colored in" pixel of the string, from the draw origin.
 552:fltk-1.3.4-1/FL/fl_draw.H **** 
 553:fltk-1.3.4-1/FL/fl_draw.H ****   No FLTK symbol expansion will be performed.
 554:fltk-1.3.4-1/FL/fl_draw.H **** */
 555:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_text_extents(const char*, int& dx, int& dy, int& w, int& h); // NO fltk symbol ex
 556:fltk-1.3.4-1/FL/fl_draw.H **** /** Determines the minimum pixel dimensions of a sequence of \p n characters.
 557:fltk-1.3.4-1/FL/fl_draw.H **** \see fl_text_extents(const char*, int& dx, int& dy, int& w, int& h)
 558:fltk-1.3.4-1/FL/fl_draw.H **** */
 559:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_text_extents(const char *t, int n, int& dx, int& dy, int& w, int& h)
 560:fltk-1.3.4-1/FL/fl_draw.H ****   {fl_graphics_driver->text_extents(t, n, dx, dy, w, h);}
 561:fltk-1.3.4-1/FL/fl_draw.H **** 
 562:fltk-1.3.4-1/FL/fl_draw.H **** // font encoding:
 563:fltk-1.3.4-1/FL/fl_draw.H **** // Note: doxygen comments here to avoid duplication for os-sepecific cases
 564:fltk-1.3.4-1/FL/fl_draw.H **** /**
 565:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from Windows/X11 latin1 character set to local encoding.
 566:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (latin1 encoding)
 567:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 568:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 569:fltk-1.3.4-1/FL/fl_draw.H ****   */
 570:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_latin1_to_local(const char *t, int n=-1);
 571:fltk-1.3.4-1/FL/fl_draw.H **** /**
 572:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from local encoding to Windowx/X11 latin1 character set.
 573:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (local encoding)
 574:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 575:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 576:fltk-1.3.4-1/FL/fl_draw.H ****   */
 577:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_local_to_latin1(const char *t, int n=-1);
 578:fltk-1.3.4-1/FL/fl_draw.H **** /**
 579:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from Mac Roman character set to local encoding.
 580:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (Mac Roman encoding)
 581:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 582:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 583:fltk-1.3.4-1/FL/fl_draw.H ****   */
 584:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_mac_roman_to_local(const char *t, int n=-1);
 585:fltk-1.3.4-1/FL/fl_draw.H **** /**
 586:fltk-1.3.4-1/FL/fl_draw.H ****   Converts text from local encoding to Mac Roman character set.
 587:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] t character string (local encoding)
 588:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] n optional number of characters to convert (default is all)
 589:fltk-1.3.4-1/FL/fl_draw.H ****   \returns pointer to internal buffer containing converted characters
 590:fltk-1.3.4-1/FL/fl_draw.H ****   */
 591:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT const char *fl_local_to_mac_roman(const char *t, int n=-1);
 592:fltk-1.3.4-1/FL/fl_draw.H **** /** @} */
 593:fltk-1.3.4-1/FL/fl_draw.H **** 
 594:fltk-1.3.4-1/FL/fl_draw.H **** /** \addtogroup  fl_drawings
 595:fltk-1.3.4-1/FL/fl_draw.H ****     @{ */
 596:fltk-1.3.4-1/FL/fl_draw.H **** /**
 597:fltk-1.3.4-1/FL/fl_draw.H ****   Draws a nul-terminated UTF-8 string starting at the given \p x, \p y location.
 598:fltk-1.3.4-1/FL/fl_draw.H **** 
 599:fltk-1.3.4-1/FL/fl_draw.H ****   Text is aligned to the left and to the baseline of the font.
 600:fltk-1.3.4-1/FL/fl_draw.H ****   To align to the bottom, subtract fl_descent() from \p y.
 601:fltk-1.3.4-1/FL/fl_draw.H ****   To align to the top, subtract fl_descent() and add fl_height().
 602:fltk-1.3.4-1/FL/fl_draw.H ****   This version of fl_draw provides direct access to the text drawing
 603:fltk-1.3.4-1/FL/fl_draw.H ****   function of the underlying OS. It does not apply any special handling
 604:fltk-1.3.4-1/FL/fl_draw.H ****   to control characters.
 605:fltk-1.3.4-1/FL/fl_draw.H **** */
 606:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(const char* str, int x, int y);
 607:fltk-1.3.4-1/FL/fl_draw.H **** /**
 608:fltk-1.3.4-1/FL/fl_draw.H ****   Draws a nul-terminated UTF-8 string starting at the given \p x, \p y
 609:fltk-1.3.4-1/FL/fl_draw.H ****   location and rotating \p angle degrees counter-clockwise.
 610:fltk-1.3.4-1/FL/fl_draw.H ****   This version of fl_draw provides direct access to the text drawing
 611:fltk-1.3.4-1/FL/fl_draw.H ****   function of the underlying OS and is supported by Xft, Win32 and MacOS
 612:fltk-1.3.4-1/FL/fl_draw.H ****   fltk subsets.
 613:fltk-1.3.4-1/FL/fl_draw.H **** */
 614:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(int angle, const char* str, int x, int y);
 615:fltk-1.3.4-1/FL/fl_draw.H **** /**
 616:fltk-1.3.4-1/FL/fl_draw.H ****  Draws starting at the given \p x, \p y location a UTF-8 string of length \p n bytes.
 617:fltk-1.3.4-1/FL/fl_draw.H **** */
 618:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw(const char* str, int n, int x, int y) {fl_graphics_driver->draw(str,n,x,y); }
 619:fltk-1.3.4-1/FL/fl_draw.H **** /**
 620:fltk-1.3.4-1/FL/fl_draw.H ****   Draws at the given \p x, \p y location a UTF-8 string of length \p n bytes
 621:fltk-1.3.4-1/FL/fl_draw.H ****   rotating \p angle degrees counter-clockwise.
 622:fltk-1.3.4-1/FL/fl_draw.H **** 
 623:fltk-1.3.4-1/FL/fl_draw.H ****   \note When using X11 (Unix, Linux, Cygwin et al.) this needs Xft to work.
 624:fltk-1.3.4-1/FL/fl_draw.H **** 	Under plain X11 (w/o Xft) rotated text is not supported by FLTK.
 625:fltk-1.3.4-1/FL/fl_draw.H **** 	A warning will be issued to stderr at runtime (only once) if you
 626:fltk-1.3.4-1/FL/fl_draw.H **** 	use this method with an angle other than 0.
 627:fltk-1.3.4-1/FL/fl_draw.H **** */
 628:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw(int angle, const char* str, int n, int x, int y) {fl_graphics_driver->draw(angl
 629:fltk-1.3.4-1/FL/fl_draw.H **** /**
 630:fltk-1.3.4-1/FL/fl_draw.H ****   Draws a UTF-8 string of length \p n bytes right to left starting at the given \p x, \p y location
 631:fltk-1.3.4-1/FL/fl_draw.H **** */
 632:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_rtl_draw(const char* str, int n, int x, int y) {fl_graphics_driver->rtl_draw(str,n,x
 633:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_measure(const char* str, int& x, int& y,
 634:fltk-1.3.4-1/FL/fl_draw.H ****                           int draw_symbols = 1);
 635:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(const char* str, int x, int y, int w, int h,
 636:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Align align,
 637:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Image* img=0, int draw_symbols = 1);
 638:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw(const char* str, int x, int y, int w, int h,
 639:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Align align,
 640:fltk-1.3.4-1/FL/fl_draw.H ****                        void (*callthis)(const char *,int,int,int),
 641:fltk-1.3.4-1/FL/fl_draw.H ****                        Fl_Image* img=0, int draw_symbols = 1);
 642:fltk-1.3.4-1/FL/fl_draw.H **** 
 643:fltk-1.3.4-1/FL/fl_draw.H **** // boxtypes:
 644:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_frame(const char* s, int x, int y, int w, int h);
 645:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_frame2(const char* s, int x, int y, int w, int h);
 646:fltk-1.3.4-1/FL/fl_draw.H **** FL_EXPORT void fl_draw_box(Fl_Boxtype, int x, int y, int w, int h, Fl_Color);
 647:fltk-1.3.4-1/FL/fl_draw.H **** 
 648:fltk-1.3.4-1/FL/fl_draw.H **** // images:
 649:fltk-1.3.4-1/FL/fl_draw.H **** 
 650:fltk-1.3.4-1/FL/fl_draw.H **** /**
 651:fltk-1.3.4-1/FL/fl_draw.H ****   Draws an 8-bit per color RGB or luminance image.
 652:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] buf points at the "r" data of the top-left pixel.
 653:fltk-1.3.4-1/FL/fl_draw.H ****                  Color data must be in <tt>r,g,b</tt> order.
 654:fltk-1.3.4-1/FL/fl_draw.H **** 		 Luminance data is only one <tt>gray</tt> byte.
 655:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] X,Y position where to put top-left corner of image
 656:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] W,H size of the image
 657:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] D   delta to add to the pointer between pixels. It may be
 658:fltk-1.3.4-1/FL/fl_draw.H ****                  any value greater than or equal to 1, or it can be
 659:fltk-1.3.4-1/FL/fl_draw.H **** 		 negative to flip the image horizontally
 660:fltk-1.3.4-1/FL/fl_draw.H ****   \param[in] L   delta to add to the pointer between lines (if 0 is
 661:fltk-1.3.4-1/FL/fl_draw.H ****                  passed it uses \p W * \p D), and may be larger than
 662:fltk-1.3.4-1/FL/fl_draw.H **** 		 \p W * \p D to crop data, or negative to flip the
 663:fltk-1.3.4-1/FL/fl_draw.H **** 		 image vertically
 664:fltk-1.3.4-1/FL/fl_draw.H **** 
 665:fltk-1.3.4-1/FL/fl_draw.H ****   It is highly recommended that you put the following code before the
 666:fltk-1.3.4-1/FL/fl_draw.H ****   first <tt>show()</tt> of \e any window in your program to get rid of
 667:fltk-1.3.4-1/FL/fl_draw.H ****   the dithering if possible:
 668:fltk-1.3.4-1/FL/fl_draw.H ****   \code
 669:fltk-1.3.4-1/FL/fl_draw.H ****   Fl::visual(FL_RGB);
 670:fltk-1.3.4-1/FL/fl_draw.H ****   \endcode
 671:fltk-1.3.4-1/FL/fl_draw.H **** 
 672:fltk-1.3.4-1/FL/fl_draw.H ****   Gray scale (1-channel) images may be drawn. This is done if
 673:fltk-1.3.4-1/FL/fl_draw.H ****   <tt>abs(D)</tt> is less than 3, or by calling fl_draw_image_mono().
 674:fltk-1.3.4-1/FL/fl_draw.H ****   Only one 8-bit sample is used for each pixel, and on screens with
 675:fltk-1.3.4-1/FL/fl_draw.H ****   different numbers of bits for red, green, and blue only gray colors
 676:fltk-1.3.4-1/FL/fl_draw.H ****   are used. Setting \p D greater than 1 will let you display one channel
 677:fltk-1.3.4-1/FL/fl_draw.H ****   of a color image.
 678:fltk-1.3.4-1/FL/fl_draw.H **** 
 679:fltk-1.3.4-1/FL/fl_draw.H ****   \par Note:
 680:fltk-1.3.4-1/FL/fl_draw.H ****   The X version does not support all possible visuals. If FLTK cannot
 681:fltk-1.3.4-1/FL/fl_draw.H ****   draw the image in the current visual it will abort. FLTK supports
 682:fltk-1.3.4-1/FL/fl_draw.H ****   any visual of 8 bits or less, and all common TrueColor visuals up
 683:fltk-1.3.4-1/FL/fl_draw.H ****   to 32 bits.
 684:fltk-1.3.4-1/FL/fl_draw.H ****   */
 685:fltk-1.3.4-1/FL/fl_draw.H **** inline void fl_draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0)
 686:fltk-1.3.4-1/FL/fl_draw.H ****   { fl_graphics_driver->draw_image(buf, X, Y, W, H, D, L); }
 3209              		.loc 3 686 0
 3210 0262 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3210      000000
 3211 0269 4589E8   		movl	%r13d, %r8d
 3212 026c 488B07   		movq	(%rdi), %rax
 3213 026f 6A00     		pushq	$0
 3214              		.cfi_def_cfa_offset 136
 3215 0271 6A03     		pushq	$3
 3216              		.cfi_def_cfa_offset 144
 3217 0273 488B5C24 		movq	40(%rsp), %rbx
 3217      28
 3218 0278 448B4C24 		movl	28(%rsp), %r9d
 3218      1C
 3219 027d 8B4C2420 		movl	32(%rsp), %ecx
 3220 0281 8B542424 		movl	36(%rsp), %edx
 3221 0285 4889DE   		movq	%rbx, %rsi
 3222 0288 FF907801 		call	*376(%rax)
 3222      0000
 3223              	.LVL401:
 3224              	.LBE934:
 3225              	.LBE933:
 3226              		.loc 1 647 0
 3227 028e 4889DF   		movq	%rbx, %rdi
 3228 0291 E8000000 		call	_ZdaPv
 3228      00
 3229              	.LVL402:
 3230 0296 4159     		popq	%r9
 3231              		.cfi_def_cfa_offset 136
 3232 0298 415A     		popq	%r10
 3233              		.cfi_def_cfa_offset 128
 3234              	.LVL403:
 3235 029a 660F1F44 		.p2align 4,,10
 3235      0000
 3236              		.p2align 3
 3237              	.L221:
 3238              	.LBE936:
 3239              	.LBE938:
 3240              	.LBE925:
 3241              		.loc 1 870 0
 3242 02a0 488B4424 		movq	56(%rsp), %rax
 3242      38
 3243 02a5 64483304 		xorq	%fs:40, %rax
 3243      25280000 
 3243      00
 3244 02ae 0F855204 		jne	.L286
 3244      0000
 3245 02b4 4883C448 		addq	$72, %rsp
 3246              		.cfi_remember_state
 3247              		.cfi_def_cfa_offset 56
 3248 02b8 5B       		popq	%rbx
 3249              		.cfi_def_cfa_offset 48
 3250 02b9 5D       		popq	%rbp
 3251              		.cfi_def_cfa_offset 40
 3252 02ba 415C     		popq	%r12
 3253              		.cfi_def_cfa_offset 32
 3254 02bc 415D     		popq	%r13
 3255              		.cfi_def_cfa_offset 24
 3256 02be 415E     		popq	%r14
 3257              		.cfi_def_cfa_offset 16
 3258 02c0 415F     		popq	%r15
 3259              		.cfi_def_cfa_offset 8
 3260 02c2 C3       		ret
 3261              	.LVL404:
 3262              		.p2align 4,,10
 3263 02c3 0F1F4400 		.p2align 3
 3263      00
 3264              	.L222:
 3265              		.cfi_restore_state
 3266              	.LBB950:
 3267              	.LBB951:
 3268              		.loc 1 76 0
 3269 02c8 458B4608 		movl	8(%r14), %r8d
 3270              	.LVL405:
 3271 02cc 4585C0   		testl	%r8d, %r8d
 3272 02cf 7ECF     		jle	.L221
 3273              	.LVL406:
 3274 02d1 418B4E0C 		movl	12(%r14), %ecx
 3275              	.LVL407:
 3276 02d5 85C9     		testl	%ecx, %ecx
 3277 02d7 7EC7     		jle	.L221
 3278 02d9 4489FA   		movl	%r15d, %edx
 3279              	.LVL408:
 3280 02dc 89DE     		movl	%ebx, %esi
 3281 02de 4C89F7   		movq	%r14, %rdi
 3282              	.LVL409:
 3283 02e1 E8000000 		call	_ZN8Fl_Image10draw_emptyEii.part.13
 3283      00
 3284              	.LVL410:
 3285 02e6 EBB8     		jmp	.L221
 3286              	.LVL411:
 3287 02e8 0F1F8400 		.p2align 4,,10
 3287      00000000 
 3288              		.p2align 3
 3289              	.L283:
 3290              	.LBE951:
 3291              	.LBE950:
 3292              	.LBB952:
 3293              	.LBB879:
 3294              		.loc 1 663 0
 3295 02f0 4189F5   		movl	%esi, %r13d
 3296 02f3 4129DD   		subl	%ebx, %r13d
 3297 02f6 44896C24 		movl	%r13d, 40(%rsp)
 3297      28
 3298 02fb E9B9FDFF 		jmp	.L226
 3298      FF
 3299              		.p2align 4,,10
 3300              		.p2align 3
 3301              	.L228:
 3302              		.loc 1 665 0
 3303 0300 8B44242C 		movl	44(%rsp), %eax
 3304 0304 4429DA   		subl	%r11d, %edx
 3305 0307 89542424 		movl	%edx, 36(%rsp)
 3306              	.LVL412:
 3307 030b 4401D8   		addl	%r11d, %eax
 3308 030e 4531DB   		xorl	%r11d, %r11d
 3309 0311 8944242C 		movl	%eax, 44(%rsp)
 3310 0315 E9C0FDFF 		jmp	.L229
 3310      FF
 3311              	.LVL413:
 3312 031a 660F1F44 		.p2align 4,,10
 3312      0000
 3313              		.p2align 3
 3314              	.L257:
 3315              	.LBE879:
 3316              	.LBE952:
 3317              	.LBB953:
 3318              	.LBB939:
 3319              	.LBB940:
 3320              		.loc 1 843 0
 3321 0320 458B6E38 		movl	56(%r14), %r13d
 3322 0324 4585ED   		testl	%r13d, %r13d
 3323 0327 0F858C01 		jne	.L287
 3323      0000
 3324              	.L237:
 3325              	.LVL414:
 3326              	.LBE940:
 3327              		.loc 1 856 0
 3328 032d 41837E10 		cmpl	$4, 16(%r14)
 3328      04
 3329 0332 0F84D102 		je	.L288
 3329      0000
 3330              	.LVL415:
 3331              	.L238:
 3332              		.loc 1 859 0
 3333 0338 4153     		pushq	%r11
 3334              		.cfi_def_cfa_offset 136
 3335 033a 53       		pushq	%rbx
 3336              		.cfi_def_cfa_offset 144
 3337 033b 4889EF   		movq	%rbp, %rdi
 3338 033e 458B4E34 		movl	52(%r14), %r9d
 3339 0342 448B4424 		movl	60(%rsp), %r8d
 3339      3C
 3340 0347 8B4C2438 		movl	56(%rsp), %ecx
 3341 034b 8B542434 		movl	52(%rsp), %edx
 3342 034f 8B742430 		movl	48(%rsp), %esi
 3343 0353 E8000000 		call	_ZN23Fl_Xlib_Graphics_Driver14copy_offscreenEiiiimii
 3343      00
 3344              	.LVL416:
 3345 0358 58       		popq	%rax
 3346              		.cfi_def_cfa_offset 136
 3347 0359 5A       		popq	%rdx
 3348              		.cfi_def_cfa_offset 128
 3349              	.L264:
 3350              		.loc 1 861 0
 3351 035a 458B5E38 		movl	56(%r14), %r11d
 3352 035e 4585DB   		testl	%r11d, %r11d
 3353 0361 0F8439FF 		je	.L221
 3353      FFFF
 3354              		.loc 1 863 0
 3355 0367 488B3500 		movq	fl_gc(%rip), %rsi
 3355      000000
 3356 036e 488B3D00 		movq	fl_display(%rip), %rdi
 3356      000000
 3357 0375 31C9     		xorl	%ecx, %ecx
 3358 0377 31D2     		xorl	%edx, %edx
 3359 0379 E8000000 		call	XSetClipOrigin
 3359      00
 3360              	.LVL417:
 3361              	.LBB944:
 3362              	.LBB945:
 129:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3363              		.loc 3 129 0
 3364 037e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3364      000000
 3365 0385 E8000000 		call	_ZN18Fl_Graphics_Driver12restore_clipEv
 3365      00
 3366              	.LVL418:
 3367 038a E911FFFF 		jmp	.L221
 3367      FF
 3368              	.LVL419:
 3369 038f 90       		.p2align 4,,10
 3370              		.p2align 3
 3371              	.L252:
 3372              	.LBE945:
 3373              	.LBE944:
 3374              	.LBE939:
 3375              	.LBE953:
 3376              	.LBB954:
 3377              	.LBB880:
 3378              		.loc 1 662 0
 3379 0390 448B6C24 		movl	40(%rsp), %r13d
 3379      28
 3380 0395 29D8     		subl	%ebx, %eax
 3381 0397 89442420 		movl	%eax, 32(%rsp)
 3382              	.LVL420:
 3383 039b 4101DD   		addl	%ebx, %r13d
 3384 039e 31DB     		xorl	%ebx, %ebx
 3385 03a0 44896C24 		movl	%r13d, 40(%rsp)
 3385      28
 3386 03a5 E900FDFF 		jmp	.L253
 3386      FF
 3387              	.LVL421:
 3388              	.L285:
 3389 03aa 44891C24 		movl	%r11d, (%rsp)
 3390              	.LBE880:
 3391              	.LBE954:
 3392              	.LBB955:
 3393              	.LBB921:
 3394              	.LBB903:
 3395              		.loc 1 834 0 discriminator 1
 3396 03ae E8000000 		call	_Z24fl_can_do_alpha_blendingv
 3396      00
 3397              	.LVL422:
 3398 03b3 84C0     		testb	%al, %al
 3399 03b5 448B1C24 		movl	(%rsp), %r11d
 3400 03b9 0F85A901 		jne	.L235
 3400      0000
 3401              	.LVL423:
 3402 03bf 90       		.p2align 4,,10
 3403              		.p2align 3
 3404              	.L234:
 3405              	.LBE903:
 3406              	.LBE921:
 3407              	.LBE955:
 3408              	.LBB956:
 3409              		.loc 1 842 0
 3410 03c0 458B7E34 		movl	52(%r14), %r15d
 3411 03c4 4585FF   		testl	%r15d, %r15d
 3412 03c7 0F8553FF 		jne	.L257
 3412      FFFF
 3413 03cd 448B6C24 		movl	40(%rsp), %r13d
 3413      28
 3414 03d2 418B5610 		movl	16(%r14), %edx
 3415 03d6 8B44242C 		movl	44(%rsp), %eax
 3416 03da E93FFDFF 		jmp	.L279
 3416      FF
 3417              	.LVL424:
 3418 03df 90       		.p2align 4,,10
 3419              		.p2align 3
 3420              	.L284:
 3421              	.LBE956:
 3422              	.LBB957:
 3423              	.LBB922:
 3424              	.LBB904:
 3425              		.loc 1 830 0
 3426 03e0 48630500 		movslq	fl_screen(%rip), %rax
 3426      000000
 3427 03e7 488B3D00 		movq	fl_display(%rip), %rdi
 3427      000000
 3428 03ee 418B4E0C 		movl	12(%r14), %ecx
 3429 03f2 418B5608 		movl	8(%r14), %edx
 3430 03f6 44891C24 		movl	%r11d, (%rsp)
 3431              	.LVL425:
 3432 03fa 48C1E007 		salq	$7, %rax
 3433 03fe 480387E8 		addq	232(%rdi), %rax
 3433      000000
 3434 0405 488B7010 		movq	16(%rax), %rsi
 3435 0409 488B0500 		movq	fl_visual(%rip), %rax
 3435      000000
 3436 0410 448B4014 		movl	20(%rax), %r8d
 3437 0414 E8000000 		call	XCreatePixmap
 3437      00
 3438              	.LVL426:
 3439              	.LBB905:
 3440              	.LBB906:
 3441              		.file 7 "fltk-1.3.4-1/FL/Fl_Device.H"
   1:fltk-1.3.4-1/FL/Fl_Device.H **** //
   2:fltk-1.3.4-1/FL/Fl_Device.H **** // "$Id: Fl_Device.H 12030 2016-10-16 15:00:02Z manolo $"
   3:fltk-1.3.4-1/FL/Fl_Device.H **** //
   4:fltk-1.3.4-1/FL/Fl_Device.H **** // Definition of classes Fl_Device, Fl_Graphics_Driver, Fl_Surface_Device, Fl_Display_Device
   5:fltk-1.3.4-1/FL/Fl_Device.H **** // for the Fast Light Tool Kit (FLTK).
   6:fltk-1.3.4-1/FL/Fl_Device.H **** //
   7:fltk-1.3.4-1/FL/Fl_Device.H **** // Copyright 2010-2014 by Bill Spitzak and others.
   8:fltk-1.3.4-1/FL/Fl_Device.H **** //
   9:fltk-1.3.4-1/FL/Fl_Device.H **** // This library is free software. Distribution and use rights are outlined in
  10:fltk-1.3.4-1/FL/Fl_Device.H **** // the file "COPYING" which should have been included with this file.  If this
  11:fltk-1.3.4-1/FL/Fl_Device.H **** // file is missing or damaged, see the license at:
  12:fltk-1.3.4-1/FL/Fl_Device.H **** //
  13:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/COPYING.php
  14:fltk-1.3.4-1/FL/Fl_Device.H **** //
  15:fltk-1.3.4-1/FL/Fl_Device.H **** // Please report all bugs and problems on the following page:
  16:fltk-1.3.4-1/FL/Fl_Device.H **** //
  17:fltk-1.3.4-1/FL/Fl_Device.H **** //     http://www.fltk.org/str.php
  18:fltk-1.3.4-1/FL/Fl_Device.H **** //
  19:fltk-1.3.4-1/FL/Fl_Device.H **** 
  20:fltk-1.3.4-1/FL/Fl_Device.H **** /** \file Fl_Device.H 
  21:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief declaration of classes Fl_Device, Fl_Graphics_Driver, Fl_Surface_Device, 
  22:fltk-1.3.4-1/FL/Fl_Device.H ****  Fl_Display_Device, Fl_Device_Plugin.
  23:fltk-1.3.4-1/FL/Fl_Device.H **** */
  24:fltk-1.3.4-1/FL/Fl_Device.H **** 
  25:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef Fl_Device_H
  26:fltk-1.3.4-1/FL/Fl_Device.H **** #define Fl_Device_H
  27:fltk-1.3.4-1/FL/Fl_Device.H **** 
  28:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/x.H>
  29:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Plugin.H>
  30:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Image.H>
  31:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Bitmap.H>
  32:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_Pixmap.H>
  33:fltk-1.3.4-1/FL/Fl_Device.H **** #include <FL/Fl_RGB_Image.H>
  34:fltk-1.3.4-1/FL/Fl_Device.H **** #include <stdlib.h>
  35:fltk-1.3.4-1/FL/Fl_Device.H **** 
  36:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Graphics_Driver;
  37:fltk-1.3.4-1/FL/Fl_Device.H **** class Fl_Font_Descriptor;
  38:fltk-1.3.4-1/FL/Fl_Device.H **** /** \brief Points to the driver that currently receives all graphics requests */
  39:fltk-1.3.4-1/FL/Fl_Device.H **** FL_EXPORT extern Fl_Graphics_Driver *fl_graphics_driver;
  40:fltk-1.3.4-1/FL/Fl_Device.H **** 
  41:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  42:fltk-1.3.4-1/FL/Fl_Device.H ****  signature of image generation callback function.
  43:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  data  user data passed to function
  44:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[in]  x,y,w position and width of scan line in image
  45:fltk-1.3.4-1/FL/Fl_Device.H ****  \param[out] buf   buffer for generated image data. You must copy \p w
  46:fltk-1.3.4-1/FL/Fl_Device.H ****  pixels from scanline \p y, starting at pixel \p x
  47:fltk-1.3.4-1/FL/Fl_Device.H ****  to this buffer.
  48:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  49:fltk-1.3.4-1/FL/Fl_Device.H **** typedef void (*Fl_Draw_Image_Cb)(void* data,int x,int y,int w,uchar* buf);
  50:fltk-1.3.4-1/FL/Fl_Device.H **** 
  51:fltk-1.3.4-1/FL/Fl_Device.H **** // typedef what the x,y fields in a point are:
  52:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
  53:fltk-1.3.4-1/FL/Fl_Device.H **** typedef int COORD_T;
  54:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  55:fltk-1.3.4-1/FL/Fl_Device.H **** #elif defined(__APPLE__)
  56:fltk-1.3.4-1/FL/Fl_Device.H **** typedef float COORD_T;
  57:fltk-1.3.4-1/FL/Fl_Device.H **** typedef struct { float x; float y; } QPoint;
  58:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT QPoint
  59:fltk-1.3.4-1/FL/Fl_Device.H **** extern float fl_quartz_line_width_;
  60:fltk-1.3.4-1/FL/Fl_Device.H **** #else
  61:fltk-1.3.4-1/FL/Fl_Device.H **** typedef short COORD_T;
  62:fltk-1.3.4-1/FL/Fl_Device.H **** #  define XPOINT XPoint
  63:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
  64:fltk-1.3.4-1/FL/Fl_Device.H **** 
  65:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  66:fltk-1.3.4-1/FL/Fl_Device.H ****  All graphical output devices and all graphics systems.
  67:fltk-1.3.4-1/FL/Fl_Device.H ****  This class supports a rudimentary system of run-time type information.
  68:fltk-1.3.4-1/FL/Fl_Device.H ****  */
  69:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Device {
  70:fltk-1.3.4-1/FL/Fl_Device.H **** public:
  71:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A string that identifies each subclass of Fl_Device.
  72:fltk-1.3.4-1/FL/Fl_Device.H ****      Function class_name() applied to a device of this class returns this string.
  73:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  74:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
  75:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  76:fltk-1.3.4-1/FL/Fl_Device.H ****    Returns the name of the class of this object. 
  77:fltk-1.3.4-1/FL/Fl_Device.H ****    Use of the class_name() function is discouraged because it will be removed from future FLTK vers
  78:fltk-1.3.4-1/FL/Fl_Device.H ****    
  79:fltk-1.3.4-1/FL/Fl_Device.H ****    The class of an instance of an Fl_Device subclass can be checked with code such as:
  80:fltk-1.3.4-1/FL/Fl_Device.H ****    \code
  81:fltk-1.3.4-1/FL/Fl_Device.H ****    if ( instance->class_name() == Fl_Printer::class_id ) { ... }
  82:fltk-1.3.4-1/FL/Fl_Device.H ****    \endcode
  83:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  84:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
  85:fltk-1.3.4-1/FL/Fl_Device.H ****   /** 
  86:fltk-1.3.4-1/FL/Fl_Device.H ****    Virtual destructor.
  87:fltk-1.3.4-1/FL/Fl_Device.H ****    
  88:fltk-1.3.4-1/FL/Fl_Device.H ****    The destructor of Fl_Device must be virtual to make the destructors of
  89:fltk-1.3.4-1/FL/Fl_Device.H ****    derived classes being called correctly on destruction.
  90:fltk-1.3.4-1/FL/Fl_Device.H ****    */
  91:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Device() {};
  92:fltk-1.3.4-1/FL/Fl_Device.H **** };
  93:fltk-1.3.4-1/FL/Fl_Device.H **** 
  94:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_REGION_STACK_SIZE 10
  95:fltk-1.3.4-1/FL/Fl_Device.H **** #define FL_MATRIX_STACK_SIZE 32
  96:fltk-1.3.4-1/FL/Fl_Device.H **** /**
  97:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief A virtual class subclassed for each graphics driver FLTK uses.
  98:fltk-1.3.4-1/FL/Fl_Device.H ****  Typically, FLTK applications do not use directly objects from this class. Rather, they perform
  99:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations (e.g., fl_rectf()) that operate on the current drawing surface (see Fl_Surface_
 100:fltk-1.3.4-1/FL/Fl_Device.H ****  Drawing operations are functionally presented in \ref drawing and as function lists
 101:fltk-1.3.4-1/FL/Fl_Device.H ****  in the \ref fl_drawings and \ref fl_attributes modules. The \ref fl_graphics_driver global variabl
 102:fltk-1.3.4-1/FL/Fl_Device.H ****  gives at any time the graphics driver used by all drawing operations. Its value changes when
 103:fltk-1.3.4-1/FL/Fl_Device.H ****  drawing operations are directed to another drawing surface by Fl_Surface_Device::set_current().
 104:fltk-1.3.4-1/FL/Fl_Device.H ****  
 105:fltk-1.3.4-1/FL/Fl_Device.H ****  \p The Fl_Graphics_Driver class is of interest if one wants to perform new kinds of drawing operat
 106:fltk-1.3.4-1/FL/Fl_Device.H ****  An example would be to draw to a PDF file. This would involve creating a new Fl_Graphics_Driver de
 107:fltk-1.3.4-1/FL/Fl_Device.H ****  class. This new class should implement all virtual methods of the Fl_Graphics_Driver class
 108:fltk-1.3.4-1/FL/Fl_Device.H ****  to support all FLTK drawing functions.
 109:fltk-1.3.4-1/FL/Fl_Device.H ****   */
 110:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Graphics_Driver : public Fl_Device {
 111:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 112:fltk-1.3.4-1/FL/Fl_Device.H ****   /** A 2D coordinate transformation matrix
 113:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 114:fltk-1.3.4-1/FL/Fl_Device.H ****   struct matrix {double a, b, c, d, x, y;};
 115:fltk-1.3.4-1/FL/Fl_Device.H **** private:
 116:fltk-1.3.4-1/FL/Fl_Device.H ****   static const matrix m0;
 117:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font font_; // current font
 118:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Fontsize size_; // current font size
 119:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Color color_; // current color
 120:fltk-1.3.4-1/FL/Fl_Device.H ****   int sptr;
 121:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int matrix_stack_size = FL_MATRIX_STACK_SIZE;
 122:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix stack[FL_MATRIX_STACK_SIZE];
 123:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix m;
 124:fltk-1.3.4-1/FL/Fl_Device.H ****   int n, p_size, gap_;
 125:fltk-1.3.4-1/FL/Fl_Device.H ****   XPOINT *p;
 126:fltk-1.3.4-1/FL/Fl_Device.H ****   int what;
 127:fltk-1.3.4-1/FL/Fl_Device.H ****   int fl_clip_state_number;
 128:fltk-1.3.4-1/FL/Fl_Device.H ****   int rstackptr;
 129:fltk-1.3.4-1/FL/Fl_Device.H ****   static const int region_stack_max = FL_REGION_STACK_SIZE - 1;
 130:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Region rstack[FL_REGION_STACK_SIZE];
 131:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef WIN32
 132:fltk-1.3.4-1/FL/Fl_Device.H ****   int numcount;
 133:fltk-1.3.4-1/FL/Fl_Device.H ****   int counts[20];
 134:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 135:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font_Descriptor *font_descriptor_;
 136:fltk-1.3.4-1/FL/Fl_Device.H ****   void transformed_vertex0(COORD_T x, COORD_T y);
 137:fltk-1.3.4-1/FL/Fl_Device.H ****   void fixloop();
 138:fltk-1.3.4-1/FL/Fl_Device.H ****   
 139:fltk-1.3.4-1/FL/Fl_Device.H **** protected:
 140:fltk-1.3.4-1/FL/Fl_Device.H **** #ifndef FL_DOXYGEN
 141:fltk-1.3.4-1/FL/Fl_Device.H ****   enum {LINE, LOOP, POLYGON, POINT_};
 142:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_no() { return n; }
 143:fltk-1.3.4-1/FL/Fl_Device.H ****   inline XPOINT *vertices() {return p;}
 144:fltk-1.3.4-1/FL/Fl_Device.H ****   inline int vertex_kind() {return what;}
 145:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 146:fltk-1.3.4-1/FL/Fl_Device.H **** /*  ** \brief red color for background and/or mixing if device does not support masking or alpha *
 147:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_r_; 
 148:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief green color for background and/or mixing if device does not support masking or alpha *
 149:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_g_; 
 150:fltk-1.3.4-1/FL/Fl_Device.H ****   ** \brief blue color for background and/or mixing if device does not support masking or alpha *
 151:fltk-1.3.4-1/FL/Fl_Device.H ****   uchar bg_b_; */
 152:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Pixmap;
 153:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_Bitmap;
 154:fltk-1.3.4-1/FL/Fl_Device.H ****   friend class Fl_RGB_Image;
 155:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rect(int x, int y, int w, int h);
 156:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rectf(int x, int y, int w, int h);
 157:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line_style(int style, int width, char* dashes);
 158:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1);
 159:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2);
 160:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_xyline(int x, int y, int x1, int y2, int x3);
 161:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1);
 162:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2);
 163:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_yxline(int x, int y, int y1, int x2, int y3);
 164:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1);
 165:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_line(int x, int y, int x1, int y1, int x2, int y2);
 166:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, int x, int y);
 167:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 168:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(const char *str, int n, float x, float y);
 169:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 170:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw(int angle, const char *str, int n, int x, int y);
 171:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rtl_draw(const char *str, int n, int x, int y);
 172:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_font(Fl_Font face, Fl_Fontsize size);
 173:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_color(Fl_Color c);
 174:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_color(uchar r, uchar g, uchar b);
 175:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_point(int x, int y);
 176:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_loop(int x0, int y0, int x1, int y1, int x2, int y2);
 177:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_loop(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 178:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2);
 179:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 180:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_points();
 181:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_line();
 182:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_loop();
 183:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_polygon();
 184:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_vertex(double x, double y);
 185:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double X3,
 186:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_circle(double x, double y, double r);
 187:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(double x, double y, double r, double start, double end);
 188:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_arc(int x, int y, int w, int h, double a1, double a2);
 189:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pie(int x, int y, int w, int h, double a1, double a2);
 190:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_points();
 191:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_line();
 192:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_loop();
 193:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_polygon();
 194:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_transformed_vertex(double xf, double yf);
 195:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_clip(int x, int y, int w, int h);
 196:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_clip_box(int x, int y, int w, int h, int &X, int &Y, int &W, int &H);
 197:fltk-1.3.4-1/FL/Fl_Device.H ****   friend int fl_not_clipped(int x, int y, int w, int h);
 198:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_no_clip();
 199:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pop_clip();
 200:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_begin_complex_polygon();
 201:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_gap();
 202:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_end_complex_polygon();
 203:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_push_matrix();
 204:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_pop_matrix();
 205:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_mult_matrix(double a, double b, double c, double d, double x, double y);
 206:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x, double y);
 207:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_scale(double x);
 208:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_translate(double x, double y);
 209:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_rotate(double d);
 210:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_x(double x, double y);
 211:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_y(double x, double y);
 212:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dx(double x, double y);
 213:fltk-1.3.4-1/FL/Fl_Device.H ****   friend double fl_transform_dy(double x, double y);
 214:fltk-1.3.4-1/FL/Fl_Device.H ****   friend Fl_Region fl_clip_region();
 215:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_clip_region(Fl_Region r);
 216:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_restore_clip();
 217:fltk-1.3.4-1/FL/Fl_Device.H ****   
 218:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(const uchar* buf, int X,int Y,int W,int H, int D, int L);
 219:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D, int L);
 220:fltk-1.3.4-1/FL/Fl_Device.H ****   friend void fl_draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D);
 221:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H
 222:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void gl_start();
 223:fltk-1.3.4-1/FL/Fl_Device.H ****   friend FL_EXPORT void fl_copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx
 224:fltk-1.3.4-1/FL/Fl_Device.H ****   matrix *fl_matrix; /**< Points to the current coordinate transformation matrix */
 225:fltk-1.3.4-1/FL/Fl_Device.H **** 
 226:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The constructor. */
 227:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Graphics_Driver();
 228:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rect(int x, int y, int w, int h). */
 229:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rect(int x, int y, int w, int h);
 230:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rectf(int x, int y, int w, int h). */
 231:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rectf(int x, int y, int w, int h);
 232:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line_style(int style, int width, char* dashes). */
 233:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line_style(int style, int width=0, char* dashes=0);
 234:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1). */
 235:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1);
 236:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1, int y2). */
 237:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1, int y2);
 238:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_xyline(int x, int y, int x1, int y2, int x3). */
 239:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void xyline(int x, int y, int x1, int y2, int x3);
 240:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1). */
 241:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1);
 242:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2). */
 243:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2);
 244:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_yxline(int x, int y, int y1, int x2, int y3). */
 245:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void yxline(int x, int y, int y1, int x2, int y3);
 246:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1). */
 247:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1);
 248:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_line(int x, int y, int x1, int y1, int x2, int y2). */
 249:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void line(int x, int y, int x1, int y1, int x2, int y2);
 250:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(const char *str, int n, int x, int y). */
 251:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, int x, int y) {}
 252:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 253:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(const char *str, int n, float x, float y) { draw(str, n, (int)(x+0.5), (int)(y+
 254:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 255:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw(int angle, const char *str, int n, int x, int y). */
 256:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(int angle, const char *str, int n, int x, int y) {}
 257:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rtl_draw(const char *str, int n, int x, int y). */
 258:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void rtl_draw(const char *str, int n, int x, int y) {};
 259:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(Fl_Color c). */
 260:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(Fl_Color c) {color_ = c;}
 261:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(uchar r, uchar g, uchar b). */
 262:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void color(uchar r, uchar g, uchar b) {}
 263:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_point(int x, int y). */
 264:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void point(int x, int y);
 265:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_loop(int x0, int y0, int x1, int y1, int x2, int y2). */
 266:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void loop(int x0, int y0, int x1, int y1, int x2, int y2);
 267:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_loop(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3). */
 268:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void loop(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 269:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2). */
 270:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void polygon(int x0, int y0, int x1, int y1, int x2, int y2);
 271:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_polygon(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3). */
 272:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void polygon(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
 273:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_points(). */
 274:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_points();
 275:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_line(). */
 276:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_line();
 277:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_loop(). */
 278:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_loop();
 279:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_polygon(). */
 280:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_polygon();
 281:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_vertex(double x, double y). */
 282:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void vertex(double x, double y);
 283:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double 
 284:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void curve(double X0, double Y0, double X1, double Y1, double X2, double Y2, double X3, d
 285:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_circle(double x, double y, double r). */
 286:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void circle(double x, double y, double r);
 287:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_arc(double x, double y, double r, double start, double end). */
 288:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void arc(double x, double y, double r, double start, double end);
 289:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_arc(int x, int y, int w, int h, double a1, double a2). */
 290:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void arc(int x, int y, int w, int h, double a1, double a2);
 291:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pie(int x, int y, int w, int h, double a1, double a2). */
 292:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void pie(int x, int y, int w, int h, double a1, double a2);
 293:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_points(). */
 294:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_points();
 295:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_line(). */
 296:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_line();
 297:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_loop(). */
 298:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_loop();
 299:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_polygon(). */
 300:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_polygon();
 301:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_begin_complex_polygon(). */
 302:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void begin_complex_polygon();
 303:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_gap(). */
 304:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void gap();
 305:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_end_complex_polygon(). */
 306:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void end_complex_polygon();
 307:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transformed_vertex(double xf, double yf). */
 308:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void transformed_vertex(double xf, double yf);
 309:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_clip(int x, int y, int w, int h). */
 310:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void push_clip(int x, int y, int w, int h);
 311:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_box(int x, int y, int w, int h, int &X, int &Y, int &W, int &H). */
 312:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int clip_box(int x, int y, int w, int h, int &X, int &Y, int &W, int &H);
 313:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_not_clipped(int x, int y, int w, int h). */
 314:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int not_clipped(int x, int y, int w, int h);
 315:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_no_clip(). */
 316:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void push_no_clip();
 317:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pop_clip(). */
 318:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void pop_clip();
 319:fltk-1.3.4-1/FL/Fl_Device.H ****     
 320:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_push_matrix(). */
 321:fltk-1.3.4-1/FL/Fl_Device.H ****   void push_matrix();
 322:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_pop_matrix(). */
 323:fltk-1.3.4-1/FL/Fl_Device.H ****   void pop_matrix();
 324:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_mult_matrix(double a, double b, double c, double d, double x, double y). */
 325:fltk-1.3.4-1/FL/Fl_Device.H ****   void mult_matrix(double a, double b, double c, double d, double x, double y);
 326:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x, double y). */
 327:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x, double y) { mult_matrix(x,0,0,y,0,0); }
 328:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_scale(double x). */
 329:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void scale(double x) { mult_matrix(x,0,0,x,0,0); }
 330:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_translate(double x, double y). */
 331:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void translate(double x,double y) { mult_matrix(1,0,0,1,x,y); }
 332:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_rotate(double d). */
 333:fltk-1.3.4-1/FL/Fl_Device.H ****   void rotate(double d);
 334:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_x(double x, double y). */
 335:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_x(double x, double y);
 336:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_y(double x, double y). */
 337:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_y(double x, double y);
 338:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_dx(double x, double y). */
 339:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_dx(double x, double y);
 340:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_transform_dy(double x, double y). */
 341:fltk-1.3.4-1/FL/Fl_Device.H ****   double transform_dy(double x, double y);
 342:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_region(). */
 343:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Region clip_region();
 344:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_clip_region(Fl_Region r). */
 345:fltk-1.3.4-1/FL/Fl_Device.H ****   void clip_region(Fl_Region r);
 346:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_restore_clip(). */
 347:fltk-1.3.4-1/FL/Fl_Device.H ****   void restore_clip();
 348:fltk-1.3.4-1/FL/Fl_Device.H ****   
 349:fltk-1.3.4-1/FL/Fl_Device.H ****   // Images
 350:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image(const uchar* buf, int X,int Y,int W,int H, int D, int L). */
 351:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0) {}
 352:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D, int L). */
 353:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0) {}
 354:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D). */
 355:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3) {}
 356:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D
 357:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=1)
 358:fltk-1.3.4-1/FL/Fl_Device.H ****   // Image classes
 359:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_RGB_Image object to the device. 
 360:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 361:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (upper left-hand corner) of 
 362:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 363:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 364:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_RGB_Image * rgb,int XP, int YP, int WP, int HP, int cx, int cy) {}
 365:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_Pixmap object to the device. 
 366:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 367:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (upper left-hand corner) of 
 368:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 369:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 370:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual   void draw(Fl_Pixmap * pxm,int XP, int YP, int WP, int HP, int cx, int cy) {}
 371:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Draws an Fl_Bitmap object to the device. 
 372:fltk-1.3.4-1/FL/Fl_Device.H ****    *
 373:fltk-1.3.4-1/FL/Fl_Device.H ****    Specifies a bounding box for the image, with the origin (upper left-hand corner) of 
 374:fltk-1.3.4-1/FL/Fl_Device.H ****    the image offset by the cx and cy arguments.
 375:fltk-1.3.4-1/FL/Fl_Device.H ****    */
 376:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void draw(Fl_Bitmap *bm, int XP, int YP, int WP, int HP, int cx, int cy) {}
 377:fltk-1.3.4-1/FL/Fl_Device.H **** #if FLTK_ABI_VERSION >= 10301
 378:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual
 379:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 380:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int srcy);
 381:fltk-1.3.4-1/FL/Fl_Device.H ****   
 382:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 383:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 384:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual const char *class_name() {return class_id;};
 385:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_font(Fl_Font face, Fl_Fontsize size). */
 386:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void font(Fl_Font face, Fl_Fontsize fsize) {font_ = face; size_ = fsize;}
 387:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_font(void). */
 388:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Font font() {return font_; }
 389:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_size(). */
 390:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Fontsize size() {return size_; }
 391:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_width(const char *str, int n). */
 392:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual double width(const char *str, int n) {return 0;}
 393:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_width(unsigned int n). */
 394:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual inline double width(unsigned int c) { char ch = (char)c; return width(&ch, 1); }
 395:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_text_extents(const char*, int n, int& dx, int& dy, int& w, int& h). */
 396:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void text_extents(const char*, int n, int& dx, int& dy, int& w, int& h);
 397:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_height(). */
 398:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int height() {return size();}
 399:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_descent(). */
 400:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual int descent() {return 0;}
 401:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief see fl_color(void). */
 402:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Color color() {return color_;}
 403:fltk-1.3.4-1/FL/Fl_Device.H ****   /** Returns a pointer to the current Fl_Font_Descriptor for the graphics driver */
 404:fltk-1.3.4-1/FL/Fl_Device.H ****   inline Fl_Font_Descriptor *font_descriptor() { return font_descriptor_;}
 405:fltk-1.3.4-1/FL/Fl_Device.H ****   /** Sets the current Fl_Font_Descriptor for the graphics driver */
 406:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void font_descriptor(Fl_Font_Descriptor *d) { font_descriptor_ = d;}
 407:fltk-1.3.4-1/FL/Fl_Device.H **** #if FLTK_ABI_VERSION >= 10304 || defined(FL_DOXYGEN)
 408:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual
 409:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 410:fltk-1.3.4-1/FL/Fl_Device.H ****   int draw_scaled(Fl_Image *img, int X, int Y, int W, int H);
 411:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The destructor */
 412:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual ~Fl_Graphics_Driver() { if (p) free(p); }
 413:fltk-1.3.4-1/FL/Fl_Device.H **** };
 414:fltk-1.3.4-1/FL/Fl_Device.H **** 
 415:fltk-1.3.4-1/FL/Fl_Device.H **** #if defined(__APPLE__) || defined(FL_DOXYGEN)
 416:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 417:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief The Mac OS X-specific graphics class.
 418:fltk-1.3.4-1/FL/Fl_Device.H ****  *
 419:fltk-1.3.4-1/FL/Fl_Device.H ****  This class is implemented only on the Mac OS X platform.
 420:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 421:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Quartz_Graphics_Driver : public Fl_Graphics_Driver {
 422:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 423:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 424:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 425:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(Fl_Color c);
 426:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(uchar r, uchar g, uchar b);
 427:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(const char* str, int n, int x, int y);
 428:fltk-1.3.4-1/FL/Fl_Device.H **** #ifdef __APPLE__
 429:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(const char *str, int n, float x, float y);
 430:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 431:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(int angle, const char *str, int n, int x, int y);
 432:fltk-1.3.4-1/FL/Fl_Device.H ****   void rtl_draw(const char* str, int n, int x, int y);
 433:fltk-1.3.4-1/FL/Fl_Device.H ****   void font(Fl_Font face, Fl_Fontsize size);
 434:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Pixmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 435:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Bitmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 436:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_RGB_Image *img, int XP, int YP, int WP, int HP, int cx, int cy);
 437:fltk-1.3.4-1/FL/Fl_Device.H ****   int draw_scaled(Fl_Image *img, int XP, int YP, int WP, int HP);
 438:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0);
 439:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3);
 440:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0);
 441:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=1);
 442:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(const char *str, int n);
 443:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(unsigned int c);
 444:fltk-1.3.4-1/FL/Fl_Device.H ****   void text_extents(const char*, int n, int& dx, int& dy, int& w, int& h);
 445:fltk-1.3.4-1/FL/Fl_Device.H ****   int height();
 446:fltk-1.3.4-1/FL/Fl_Device.H ****   int descent();
 447:fltk-1.3.4-1/FL/Fl_Device.H **** #if ! defined(FL_DOXYGEN)
 448:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Offscreen create_offscreen_with_alpha(int w, int h);
 449:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 450:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int srcy);
 451:fltk-1.3.4-1/FL/Fl_Device.H **** };
 452:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 453:fltk-1.3.4-1/FL/Fl_Device.H **** #if defined(WIN32) || defined(FL_DOXYGEN)
 454:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 455:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief The MSWindows-specific graphics class.
 456:fltk-1.3.4-1/FL/Fl_Device.H ****  *
 457:fltk-1.3.4-1/FL/Fl_Device.H ****  This class is implemented only on the MSWindows platform.
 458:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 459:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_GDI_Graphics_Driver : public Fl_Graphics_Driver {
 460:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 461:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 462:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 463:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(Fl_Color c);
 464:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(uchar r, uchar g, uchar b);
 465:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(const char* str, int n, int x, int y);
 466:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(int angle, const char *str, int n, int x, int y);
 467:fltk-1.3.4-1/FL/Fl_Device.H ****   void rtl_draw(const char* str, int n, int x, int y);
 468:fltk-1.3.4-1/FL/Fl_Device.H ****   void font(Fl_Font face, Fl_Fontsize size);
 469:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Pixmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 470:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Bitmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 471:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_RGB_Image *img, int XP, int YP, int WP, int HP, int cx, int cy);
 472:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0);
 473:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3);
 474:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0);
 475:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=1);
 476:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(const char *str, int n);
 477:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(unsigned int c);
 478:fltk-1.3.4-1/FL/Fl_Device.H ****   void text_extents(const char*, int n, int& dx, int& dy, int& w, int& h);
 479:fltk-1.3.4-1/FL/Fl_Device.H ****   int height();
 480:fltk-1.3.4-1/FL/Fl_Device.H ****   int descent();
 481:fltk-1.3.4-1/FL/Fl_Device.H **** #if ! defined(FL_DOXYGEN)
 482:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen_with_alpha(int x,int y,int w,int h,HBITMAP bitmap,int srcx,int srcy);
 483:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 484:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int srcy);
 485:fltk-1.3.4-1/FL/Fl_Device.H **** };
 486:fltk-1.3.4-1/FL/Fl_Device.H **** 
 487:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 488:fltk-1.3.4-1/FL/Fl_Device.H ****  The graphics driver used when printing on MSWindows.
 489:fltk-1.3.4-1/FL/Fl_Device.H ****  *
 490:fltk-1.3.4-1/FL/Fl_Device.H ****  This class is implemented only on the MSWindows platform. It 's extremely similar to Fl_GDI_Graphi
 491:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 492:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_GDI_Printer_Graphics_Driver : public Fl_GDI_Graphics_Driver {
 493:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 494:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 495:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 496:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Pixmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 497:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Bitmap *bm, int XP, int YP, int WP, int HP, int cx, int cy);
 498:fltk-1.3.4-1/FL/Fl_Device.H ****   int draw_scaled(Fl_Image *img, int XP, int YP, int WP, int HP);
 499:fltk-1.3.4-1/FL/Fl_Device.H **** };
 500:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 501:fltk-1.3.4-1/FL/Fl_Device.H **** #if !(defined(__APPLE__) || defined(WIN32))
 502:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 503:fltk-1.3.4-1/FL/Fl_Device.H ****  \brief The Xlib-specific graphics class.
 504:fltk-1.3.4-1/FL/Fl_Device.H ****  *
 505:fltk-1.3.4-1/FL/Fl_Device.H ****  This class is implemented only on the Xlib platform.
 506:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 507:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Xlib_Graphics_Driver : public Fl_Graphics_Driver {
 508:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 509:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 510:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 511:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(Fl_Color c);
 512:fltk-1.3.4-1/FL/Fl_Device.H ****   void color(uchar r, uchar g, uchar b);
 513:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(const char* str, int n, int x, int y);
 514:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(int angle, const char *str, int n, int x, int y);
 515:fltk-1.3.4-1/FL/Fl_Device.H ****   void rtl_draw(const char* str, int n, int x, int y);
 516:fltk-1.3.4-1/FL/Fl_Device.H ****   void font(Fl_Font face, Fl_Fontsize size);
 517:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Pixmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 518:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_Bitmap *pxm, int XP, int YP, int WP, int HP, int cx, int cy);
 519:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw(Fl_RGB_Image *img, int XP, int YP, int WP, int HP, int cx, int cy);
 520:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(const uchar* buf, int X,int Y,int W,int H, int D=3, int L=0);
 521:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=3);
 522:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(const uchar* buf, int X,int Y,int W,int H, int D=1, int L=0);
 523:fltk-1.3.4-1/FL/Fl_Device.H ****   void draw_image_mono(Fl_Draw_Image_Cb cb, void* data, int X,int Y,int W,int H, int D=1);
 524:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(const char *str, int n);
 525:fltk-1.3.4-1/FL/Fl_Device.H ****   double width(unsigned int c);
 526:fltk-1.3.4-1/FL/Fl_Device.H ****   void text_extents(const char*, int n, int& dx, int& dy, int& w, int& h);
 527:fltk-1.3.4-1/FL/Fl_Device.H ****   int height();
 528:fltk-1.3.4-1/FL/Fl_Device.H ****   int descent();
 529:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int srcy);
 530:fltk-1.3.4-1/FL/Fl_Device.H **** #if ! defined(FL_DOXYGEN)
 531:fltk-1.3.4-1/FL/Fl_Device.H ****   void copy_offscreen_with_alpha(int x, int y, int w, int h, Fl_Offscreen pixmap, int srcx, int src
 532:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 533:fltk-1.3.4-1/FL/Fl_Device.H **** };
 534:fltk-1.3.4-1/FL/Fl_Device.H **** #endif
 535:fltk-1.3.4-1/FL/Fl_Device.H **** 
 536:fltk-1.3.4-1/FL/Fl_Device.H **** /**
 537:fltk-1.3.4-1/FL/Fl_Device.H ****  A drawing surface that's susceptible to receive graphical output.
 538:fltk-1.3.4-1/FL/Fl_Device.H ****  Any FLTK application has at any time a current drawing surface to which all drawing requests are d
 539:fltk-1.3.4-1/FL/Fl_Device.H ****  The current surface is given by Fl_Surface_Device::surface().
 540:fltk-1.3.4-1/FL/Fl_Device.H ****  When main() begins running, the current drawing surface has been set to the computer's display, 
 541:fltk-1.3.4-1/FL/Fl_Device.H ****  an instance of the Fl_Display_Device class.
 542:fltk-1.3.4-1/FL/Fl_Device.H **** 
 543:fltk-1.3.4-1/FL/Fl_Device.H ****  A drawing surface other than the computer's display, is typically used as follows:
 544:fltk-1.3.4-1/FL/Fl_Device.H ****  <ol><li> Create \c surface, an object from a particular Fl_Surface_Device derived class (e.g., Fl_
 545:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> Memorize what is the current drawing surface with <tt> Fl_Surface_Device *old_current = Fl_Su
 546:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> Call \c surface->set_current(); to redirect all graphics requests to \c surface which becomes
 547:fltk-1.3.4-1/FL/Fl_Device.H ****  current drawing surface (not necessary with class Fl_Printer because it is done by Fl_Printer::sta
 548:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> At this point any of the \ref fl_drawings (e.g., fl_rect()) or the \ref fl_attributes or \ref
 549:fltk-1.3.4-1/FL/Fl_Device.H ****  (e.g., fl_draw_image(), Fl_Image::draw()) operates on the new current drawing surface.
 550:fltk-1.3.4-1/FL/Fl_Device.H ****  Certain drawing surfaces allow additional ways to draw to them (e.g., Fl_Printer::print_widget(), 
 551:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> After all drawing requests have been performed, redirect graphics requests back to their prev
 552:fltk-1.3.4-1/FL/Fl_Device.H ****  with \c old_current->set_current();.
 553:fltk-1.3.4-1/FL/Fl_Device.H ****  <li> Delete \c surface.
 554:fltk-1.3.4-1/FL/Fl_Device.H ****  </ol>
 555:fltk-1.3.4-1/FL/Fl_Device.H ****  */
 556:fltk-1.3.4-1/FL/Fl_Device.H **** class FL_EXPORT Fl_Surface_Device : public Fl_Device {
 557:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief The graphics driver in use by this surface. */
 558:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Graphics_Driver *_driver;
 559:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Surface_Device *_surface; // the surface that currently receives graphics output
 560:fltk-1.3.4-1/FL/Fl_Device.H ****   static Fl_Surface_Device *default_surface(); // create surface is none exists yet
 561:fltk-1.3.4-1/FL/Fl_Device.H **** protected:
 562:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Constructor that sets the graphics driver to use for the created surface. */
 563:fltk-1.3.4-1/FL/Fl_Device.H ****   Fl_Surface_Device(Fl_Graphics_Driver *graphics_driver) {_driver = graphics_driver; };
 564:fltk-1.3.4-1/FL/Fl_Device.H **** public:
 565:fltk-1.3.4-1/FL/Fl_Device.H ****   static const char *class_id;
 566:fltk-1.3.4-1/FL/Fl_Device.H ****   const char *class_name() {return class_id;};
 567:fltk-1.3.4-1/FL/Fl_Device.H ****   virtual void set_current(void);
 568:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Sets the graphics driver of this drawing surface. */
 569:fltk-1.3.4-1/FL/Fl_Device.H ****   inline void driver(Fl_Graphics_Driver *graphics_driver) {_driver = graphics_driver;};
 570:fltk-1.3.4-1/FL/Fl_Device.H ****   /** \brief Returns the graphics driver of this drawing surface. */
 571:fltk-1.3.4-1/FL/Fl_Device.H ****   inline Fl_Graphics_Driver *driver() {return _driver; };
 572:fltk-1.3.4-1/FL/Fl_Device.H ****   /** The current drawing surface.
 573:fltk-1.3.4-1/FL/Fl_Device.H ****    In other words, the Fl_Surface_Device object that currently receives all graphics output */
 574:fltk-1.3.4-1/FL/Fl_Device.H ****   static inline Fl_Surface_Device *surface() {
 575:fltk-1.3.4-1/FL/Fl_Device.H ****     return _surface ? _surface : default_surface();
 3442              		.loc 7 575 0
 3443 0419 4C8B3D00 		movq	_ZN17Fl_Surface_Device8_surfaceE(%rip), %r15
 3443      000000
 3444              	.LVL427:
 3445              	.LBE906:
 3446              	.LBE905:
 3447              		.loc 1 830 0
 3448 0420 41894634 		movl	%eax, 52(%r14)
 3449              		.loc 1 831 0
 3450 0424 83E0FF   		andl	$4294967295, %eax
 3451 0427 4C8B2D00 		movq	fl_window(%rip), %r13
 3451      000000
 3452              	.LVL428:
 3453              	.LBB910:
 3454              	.LBB907:
 3455              		.loc 7 575 0
 3456 042e 448B1C24 		movl	(%rsp), %r11d
 3457              	.LBE907:
 3458              	.LBE910:
 3459              		.loc 1 831 0
 3460 0432 48890500 		movq	%rax, fl_window(%rip)
 3460      000000
 3461              	.LBB911:
 3462              	.LBB908:
 3463              		.loc 7 575 0
 3464 0439 4D85FF   		testq	%r15, %r15
 3465 043c 0F849A02 		je	.L289
 3465      0000
 3466              	.LVL429:
 3467              	.L259:
 3468 0442 44891C24 		movl	%r11d, (%rsp)
 3469              	.LBE908:
 3470              	.LBE911:
 3471              		.loc 1 831 0
 3472 0446 E8000000 		call	_ZN17Fl_Display_Device14display_deviceEv
 3472      00
 3473              	.LVL430:
 3474 044b 488B10   		movq	(%rax), %rdx
 3475 044e 4889C7   		movq	%rax, %rdi
 3476 0451 FF5218   		call	*24(%rdx)
 3477              	.LVL431:
 3478              	.LBB912:
 3479              	.LBB913:
  95:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3480              		.loc 3 95 0
 3481 0454 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3481      000000
 3482 045b 488B07   		movq	(%rdi), %rax
 3483 045e FF906801 		call	*360(%rax)
 3483      0000
 3484              	.LVL432:
 3485              	.LBE913:
 3486              	.LBE912:
 3487              	.LBB914:
 3488              	.LBB915:
 3489              		.loc 3 686 0
 3490 0464 418B5614 		movl	20(%r14), %edx
 3491 0468 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3491      000000
 3492 046f 498B7628 		movq	40(%r14), %rsi
 3493 0473 488B07   		movq	(%rdi), %rax
 3494 0476 52       		pushq	%rdx
 3495              		.cfi_def_cfa_offset 136
 3496              	.LVL433:
 3497 0477 418B5610 		movl	16(%r14), %edx
 3498              	.LVL434:
 3499              	.L278:
 3500              	.LBE915:
 3501              	.LBE914:
 3502              	.LBE904:
 3503              	.LBB917:
 3504              	.LBB884:
 3505              	.LBB885:
 3506              	.LBB886:
 3507 047b 52       		pushq	%rdx
 3508              		.cfi_def_cfa_offset 144
 3509 047c 31C9     		xorl	%ecx, %ecx
 3510 047e 31D2     		xorl	%edx, %edx
 3511 0480 458B4E0C 		movl	12(%r14), %r9d
 3512 0484 458B4608 		movl	8(%r14), %r8d
 3513 0488 FF907801 		call	*376(%rax)
 3513      0000
 3514              	.LVL435:
 3515              	.LBE886:
 3516              	.LBE885:
 3517              	.LBB888:
 3518              	.LBB889:
 103:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3519              		.loc 3 103 0
 3520 048e 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3520      000000
 3521 0495 488B07   		movq	(%rdi), %rax
 3522 0498 FF907001 		call	*368(%rax)
 3522      0000
 3523              	.LVL436:
 3524              	.LBE889:
 3525              	.LBE888:
 3526              		.loc 1 839 0
 3527 049e 4C892D00 		movq	%r13, fl_window(%rip)
 3527      000000
 3528 04a5 498B07   		movq	(%r15), %rax
 3529 04a8 4C89FF   		movq	%r15, %rdi
 3530 04ab FF5018   		call	*24(%rax)
 3531              	.LVL437:
 3532              	.LBE884:
 3533 04ae 58       		popq	%rax
 3534              		.cfi_def_cfa_offset 136
 3535 04af 5A       		popq	%rdx
 3536              		.cfi_def_cfa_offset 128
 3537 04b0 448B1C24 		movl	(%rsp), %r11d
 3538 04b4 E907FFFF 		jmp	.L234
 3538      FF
 3539              	.L287:
 3540 04b9 44891C24 		movl	%r11d, (%rsp)
 3541              	.LVL438:
 3542              	.LBE917:
 3543              	.LBE922:
 3544              	.LBE957:
 3545              	.LBB958:
 3546              	.LBB947:
 3547              	.LBB946:
 3548              	.LBB941:
 3549              	.LBB942:
 3550              	.LBB943:
 127:fltk-1.3.4-1/FL/fl_draw.H **** /** Undoes any clobbering of clip done by your program */
 3551              		.loc 3 127 0
 3552 04bd 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3552      000000
 3553 04c4 4883EC08 		subq	$8, %rsp
 3554              		.cfi_def_cfa_offset 136
 3555 04c8 488D7424 		leaq	52(%rsp), %rsi
 3555      34
 3556              	.LVL439:
 3557 04cd 488B07   		movq	(%rdi), %rax
 3558 04d0 56       		pushq	%rsi
 3559              		.cfi_def_cfa_offset 144
 3560 04d1 4154     		pushq	%r12
 3561              		.cfi_def_cfa_offset 152
 3562 04d3 488D5424 		leaq	76(%rsp), %rdx
 3562      4C
 3563              	.LVL440:
 3564 04d8 52       		pushq	%rdx
 3565              		.cfi_def_cfa_offset 160
 3566 04d9 448B4424 		movl	76(%rsp), %r8d
 3566      4C
 3567 04de 8B4C2448 		movl	72(%rsp), %ecx
 3568 04e2 8B542444 		movl	68(%rsp), %edx
 3569              	.LVL441:
 3570 04e6 4C8D4C24 		leaq	80(%rsp), %r9
 3570      50
 3571              	.LVL442:
 3572 04eb 8B742440 		movl	64(%rsp), %esi
 3573              	.LVL443:
 3574 04ef FF905801 		call	*344(%rax)
 3574      0000
 3575              	.LVL444:
 3576              	.LBE943:
 3577              	.LBE942:
 3578              		.loc 1 847 0
 3579 04f5 8B442450 		movl	80(%rsp), %eax
 3580              		.loc 1 848 0
 3581 04f9 448B5C24 		movl	32(%rsp), %r11d
 3581      20
 3582              		.loc 1 850 0
 3583 04fe 488B3500 		movq	fl_gc(%rip), %rsi
 3583      000000
 3584 0505 488B3D00 		movq	fl_display(%rip), %rdi
 3584      000000
 3585              		.loc 1 847 0
 3586 050c 89C2     		movl	%eax, %edx
 3587 050e 2B542440 		subl	64(%rsp), %edx
 3588 0512 89442440 		movl	%eax, 64(%rsp)
 3589              		.loc 1 848 0
 3590 0516 8B442454 		movl	84(%rsp), %eax
 3591              		.loc 1 847 0
 3592 051a 01D3     		addl	%edx, %ebx
 3593              	.LVL445:
 3594              		.loc 1 848 0
 3595 051c 89C2     		movl	%eax, %edx
 3596 051e 2B542444 		subl	68(%rsp), %edx
 3597 0522 89442444 		movl	%eax, 68(%rsp)
 3598 0526 4101D3   		addl	%edx, %r11d
 3599              	.LVL446:
 3600              		.loc 1 850 0
 3601 0529 418B5638 		movl	56(%r14), %edx
 3602              		.loc 1 848 0
 3603 052d 44895C24 		movl	%r11d, 32(%rsp)
 3603      20
 3604              		.loc 1 850 0
 3605 0532 4883C420 		addq	$32, %rsp
 3606              		.cfi_def_cfa_offset 128
 3607 0536 E8000000 		call	XSetClipMask
 3607      00
 3608              	.LVL447:
 3609              		.loc 1 853 0
 3610 053b 448B1C24 		movl	(%rsp), %r11d
 3611 053f 8B4C2424 		movl	36(%rsp), %ecx
 3612 0543 8B542420 		movl	32(%rsp), %edx
 3613 0547 488B3500 		movq	fl_gc(%rip), %rsi
 3613      000000
 3614 054e 488B3D00 		movq	fl_display(%rip), %rdi
 3614      000000
 3615 0555 4429D9   		subl	%r11d, %ecx
 3616 0558 29DA     		subl	%ebx, %edx
 3617              	.LVL448:
 3618 055a E8000000 		call	XSetClipOrigin
 3618      00
 3619              	.LVL449:
 3620 055f 448B1C24 		movl	(%rsp), %r11d
 3621              	.LBE941:
 3622 0563 E9C5FDFF 		jmp	.L237
 3622      FF
 3623              	.LVL450:
 3624              	.L235:
 3625              	.LBE946:
 3626              	.LBE947:
 3627              	.LBE958:
 3628              	.LBB959:
 3629              	.LBB923:
 3630              	.LBB918:
 3631              	.LBB901:
 3632              		.loc 1 835 0
 3633 0568 48630500 		movslq	fl_screen(%rip), %rax
 3633      000000
 3634 056f 488B3D00 		movq	fl_display(%rip), %rdi
 3634      000000
 3635 0576 41B82000 		movl	$32, %r8d
 3635      0000
 3636 057c 418B4E0C 		movl	12(%r14), %ecx
 3637 0580 418B5608 		movl	8(%r14), %edx
 3638 0584 44891C24 		movl	%r11d, (%rsp)
 3639              	.LVL451:
 3640 0588 48C1E007 		salq	$7, %rax
 3641 058c 480387E8 		addq	232(%rdi), %rax
 3641      000000
 3642 0593 488B7010 		movq	16(%rax), %rsi
 3643 0597 E8000000 		call	XCreatePixmap
 3643      00
 3644              	.LVL452:
 3645              	.LBB890:
 3646              	.LBB891:
 3647              		.loc 7 575 0
 3648 059c 4C8B3D00 		movq	_ZN17Fl_Surface_Device8_surfaceE(%rip), %r15
 3648      000000
 3649              	.LVL453:
 3650              	.LBE891:
 3651              	.LBE890:
 3652              		.loc 1 835 0
 3653 05a3 41894634 		movl	%eax, 52(%r14)
 3654              		.loc 1 836 0
 3655 05a7 83E0FF   		andl	$4294967295, %eax
 3656 05aa 4C8B2D00 		movq	fl_window(%rip), %r13
 3656      000000
 3657              	.LVL454:
 3658              	.LBB895:
 3659              	.LBB892:
 3660              		.loc 7 575 0
 3661 05b1 448B1C24 		movl	(%rsp), %r11d
 3662              	.LBE892:
 3663              	.LBE895:
 3664              		.loc 1 836 0
 3665 05b5 48890500 		movq	%rax, fl_window(%rip)
 3665      000000
 3666              	.LBB896:
 3667              	.LBB893:
 3668              		.loc 7 575 0
 3669 05bc 4D85FF   		testq	%r15, %r15
 3670 05bf 0F842C01 		je	.L290
 3670      0000
 3671              	.L263:
 3672 05c5 44891C24 		movl	%r11d, (%rsp)
 3673              	.LBE893:
 3674              	.LBE896:
 3675              		.loc 1 836 0
 3676 05c9 E8000000 		call	_ZN17Fl_Display_Device14display_deviceEv
 3676      00
 3677              	.LVL455:
 3678 05ce 488B10   		movq	(%rax), %rdx
 3679 05d1 4889C7   		movq	%rax, %rdi
 3680 05d4 FF5218   		call	*24(%rdx)
 3681              	.LVL456:
 3682              	.LBB897:
 3683              	.LBB898:
  95:fltk-1.3.4-1/FL/fl_draw.H **** /**
 3684              		.loc 3 95 0
 3685 05d7 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3685      000000
 3686 05de 488B07   		movq	(%rdi), %rax
 3687 05e1 FF906801 		call	*360(%rax)
 3687      0000
 3688              	.LVL457:
 3689              	.LBE898:
 3690              	.LBE897:
 3691              	.LBB899:
 3692              	.LBB887:
 3693              		.loc 3 686 0
 3694 05e7 418B5614 		movl	20(%r14), %edx
 3695 05eb 488B3D00 		movq	fl_graphics_driver(%rip), %rdi
 3695      000000
 3696 05f2 498B7628 		movq	40(%r14), %rsi
 3697 05f6 488B07   		movq	(%rdi), %rax
 3698 05f9 52       		pushq	%rdx
 3699              		.cfi_remember_state
 3700              		.cfi_def_cfa_offset 136
 3701              	.LVL458:
 3702 05fa 418B5610 		movl	16(%r14), %edx
 3703 05fe 81CA0000 		orl	$1073741824, %edx
 3703      0040
 3704 0604 E972FEFF 		jmp	.L278
 3704      FF
 3705              	.LVL459:
 3706              	.L288:
 3707              		.cfi_restore_state
 3708 0609 44891C24 		movl	%r11d, (%rsp)
 3709              	.LBE887:
 3710              	.LBE899:
 3711              	.LBE901:
 3712              	.LBE918:
 3713              	.LBE923:
 3714              	.LBE959:
 3715              	.LBB960:
 3716              	.LBB948:
 3717              		.loc 1 856 0 discriminator 1
 3718 060d E8000000 		call	_Z24fl_can_do_alpha_blendingv
 3718      00
 3719              	.LVL460:
 3720 0612 84C0     		testb	%al, %al
 3721 0614 448B1C24 		movl	(%rsp), %r11d
 3722 0618 0F841AFD 		je	.L238
 3722      FFFF
 3723              		.loc 1 857 0
 3724 061e 4153     		pushq	%r11
 3725              		.cfi_def_cfa_offset 136
 3726              	.LVL461:
 3727 0620 53       		pushq	%rbx
 3728              		.cfi_def_cfa_offset 144
 3729 0621 4889EF   		movq	%rbp, %rdi
 3730 0624 458B4E34 		movl	52(%r14), %r9d
 3731 0628 448B4424 		movl	60(%rsp), %r8d
 3731      3C
 3732 062d 8B4C2438 		movl	56(%rsp), %ecx
 3733 0631 8B542434 		movl	52(%rsp), %edx
 3734 0635 8B742430 		movl	48(%rsp), %esi
 3735 0639 E8000000 		call	_ZN23Fl_Xlib_Graphics_Driver25copy_offscreen_with_alphaEiiiimii
 3735      00
 3736              	.LVL462:
 3737 063e 59       		popq	%rcx
 3738              		.cfi_def_cfa_offset 136
 3739 063f 5E       		popq	%rsi
 3740              		.cfi_def_cfa_offset 128
 3741              	.LVL463:
 3742 0640 E915FDFF 		jmp	.L264
 3742      FF
 3743              	.LVL464:
 3744              	.L242:
 3745              	.LBE948:
 3746              	.LBB949:
 3747              	.LBB937:
 3748              	.LBB935:
 3749              	.LBB931:
 3750              		.loc 1 611 0
 3751 0645 448B5424 		movl	12(%rsp), %r10d
 3751      0C
 3752 064a 4585D2   		testl	%r10d, %r10d
 3753 064d 0F8E0FFC 		jle	.L244
 3753      FFFF
 3754 0653 418D45FF 		leal	-1(%r13), %eax
 3755 0657 4C8B5C24 		movq	24(%rsp), %r11
 3755      18
 3756 065c 4C63CD   		movslq	%ebp, %r9
 3757 065f 4889DF   		movq	%rbx, %rdi
 3758 0662 4C8D6400 		leaq	2(%rax,%rax), %r12
 3758      02
 3759 0667 488D6C40 		leaq	3(%rax,%rax,2), %rbp
 3759      03
 3760              	.LVL465:
 3761 066c 0F1F4000 		.p2align 4,,10
 3762              		.p2align 3
 3763              	.L247:
 3764              	.LBB932:
 3765              		.loc 1 612 0
 3766 0670 4585ED   		testl	%r13d, %r13d
 3767 0673 7E59     		jle	.L245
 3768 0675 4E8D0427 		leaq	(%rdi,%r12), %r8
 3769 0679 4C89DE   		movq	%r11, %rsi
 3770              	.LVL466:
 3771 067c 0F1F4000 		.p2align 4,,10
 3772              		.p2align 3
 3773              	.L246:
 3774              		.loc 1 613 0
 3775 0680 0FB617   		movzbl	(%rdi), %edx
 3776              	.LVL467:
 3777 0683 4883C702 		addq	$2, %rdi
 3778              	.LVL468:
 3779              		.loc 1 618 0
 3780 0687 0FB65E02 		movzbl	2(%rsi), %ebx
 3781              		.loc 1 614 0
 3782 068b 0FB64FFF 		movzbl	-1(%rdi), %ecx
 3783 068f 4883C603 		addq	$3, %rsi
 3784              	.LVL469:
 3785              		.loc 1 621 0
 3786 0693 0FAFD1   		imull	%ecx, %edx
 3787              	.LVL470:
 3788              		.loc 1 614 0
 3789 0696 89C8     		movl	%ecx, %eax
 3790              	.LVL471:
 3791              		.loc 1 621 0
 3792 0698 0FB64EFD 		movzbl	-3(%rsi), %ecx
 3793              	.LVL472:
 3794 069c F7D0     		notl	%eax
 3795              	.LVL473:
 3796 069e 0FB6C0   		movzbl	%al, %eax
 3797              	.LVL474:
 3798 06a1 0FAFC8   		imull	%eax, %ecx
 3799 06a4 01D1     		addl	%edx, %ecx
 3800 06a6 C1F908   		sarl	$8, %ecx
 3801 06a9 884EFD   		movb	%cl, -3(%rsi)
 3802              	.LVL475:
 3803              		.loc 1 622 0
 3804 06ac 0FB64EFE 		movzbl	-2(%rsi), %ecx
 3805 06b0 0FAFC8   		imull	%eax, %ecx
 3806              		.loc 1 623 0
 3807 06b3 0FAFC3   		imull	%ebx, %eax
 3808              		.loc 1 622 0
 3809 06b6 01D1     		addl	%edx, %ecx
 3810 06b8 C1F908   		sarl	$8, %ecx
 3811              		.loc 1 623 0
 3812 06bb 01C2     		addl	%eax, %edx
 3813              		.loc 1 622 0
 3814 06bd 884EFE   		movb	%cl, -2(%rsi)
 3815              	.LVL476:
 3816              		.loc 1 623 0
 3817 06c0 C1FA08   		sarl	$8, %edx
 3818              		.loc 1 612 0
 3819 06c3 4C39C7   		cmpq	%r8, %rdi
 3820              		.loc 1 623 0
 3821 06c6 8856FF   		movb	%dl, -1(%rsi)
 3822              		.loc 1 612 0
 3823 06c9 75B5     		jne	.L246
 3824 06cb 4901EB   		addq	%rbp, %r11
 3825              	.LVL477:
 3826              	.L245:
 3827              	.LBE932:
 3828              		.loc 1 611 0
 3829 06ce 4C01CF   		addq	%r9, %rdi
 3830              	.LVL478:
 3831 06d1 4183EA01 		subl	$1, %r10d
 3832              	.LVL479:
 3833 06d5 7599     		jne	.L247
 3834 06d7 E986FBFF 		jmp	.L244
 3834      FF
 3835              	.LVL480:
 3836              	.L289:
 3837 06dc 44891C24 		movl	%r11d, (%rsp)
 3838              	.LVL481:
 3839              	.LBE931:
 3840              	.LBE935:
 3841              	.LBE937:
 3842              	.LBE949:
 3843              	.LBE960:
 3844              	.LBB961:
 3845              	.LBB924:
 3846              	.LBB919:
 3847              	.LBB916:
 3848              	.LBB909:
 3849              		.loc 7 575 0
 3850 06e0 E8000000 		call	_ZN17Fl_Surface_Device15default_surfaceEv
 3850      00
 3851              	.LVL482:
 3852 06e5 448B1C24 		movl	(%rsp), %r11d
 3853 06e9 4989C7   		movq	%rax, %r15
 3854 06ec E951FDFF 		jmp	.L259
 3854      FF
 3855              	.LVL483:
 3856              	.L290:
 3857 06f1 44891C24 		movl	%r11d, (%rsp)
 3858              	.LBE909:
 3859              	.LBE916:
 3860              	.LBE919:
 3861              	.LBB920:
 3862              	.LBB902:
 3863              	.LBB900:
 3864              	.LBB894:
 3865 06f5 E8000000 		call	_ZN17Fl_Surface_Device15default_surfaceEv
 3865      00
 3866              	.LVL484:
 3867 06fa 448B1C24 		movl	(%rsp), %r11d
 3868 06fe 4989C7   		movq	%rax, %r15
 3869 0701 E9BFFEFF 		jmp	.L263
 3869      FF
 3870              	.LVL485:
 3871              	.L286:
 3872              	.LBE894:
 3873              	.LBE900:
 3874              	.LBE902:
 3875              	.LBE920:
 3876              	.LBE924:
 3877              	.LBE961:
 3878              		.loc 1 870 0
 3879 0706 E8000000 		call	__stack_chk_fail
 3879      00
 3880              	.LVL486:
 3881              		.cfi_endproc
 3882              	.LFE591:
 3884              		.section	.text.unlikely._ZN23Fl_Xlib_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
 3885              	.LCOLDE31:
 3886              		.section	.text._ZN23Fl_Xlib_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
 3887              	.LHOTE31:
 3888              		.weak	_ZTS8Fl_Image
 3889              		.section	.rodata._ZTS8Fl_Image,"aG",@progbits,_ZTS8Fl_Image,comdat
 3890              		.align 8
 3893              	_ZTS8Fl_Image:
 3894 0000 38466C5F 		.string	"8Fl_Image"
 3894      496D6167 
 3894      6500
 3895              		.weak	_ZTI8Fl_Image
 3896              		.section	.rodata._ZTI8Fl_Image,"aG",@progbits,_ZTI8Fl_Image,comdat
 3897              		.align 8
 3900              	_ZTI8Fl_Image:
 3901 0000 00000000 		.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
 3901      00000000 
 3902 0008 00000000 		.quad	_ZTS8Fl_Image
 3902      00000000 
 3903              		.weak	_ZTS12Fl_RGB_Image
 3904              		.section	.rodata._ZTS12Fl_RGB_Image,"aG",@progbits,_ZTS12Fl_RGB_Image,comdat
 3905              		.align 8
 3908              	_ZTS12Fl_RGB_Image:
 3909 0000 3132466C 		.string	"12Fl_RGB_Image"
 3909      5F524742 
 3909      5F496D61 
 3909      676500
 3910              		.weak	_ZTI12Fl_RGB_Image
 3911              		.section	.rodata._ZTI12Fl_RGB_Image,"aG",@progbits,_ZTI12Fl_RGB_Image,comdat
 3912              		.align 8
 3915              	_ZTI12Fl_RGB_Image:
 3916 0000 00000000 		.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
 3916      00000000 
 3917 0008 00000000 		.quad	_ZTS12Fl_RGB_Image
 3917      00000000 
 3918 0010 00000000 		.quad	_ZTI8Fl_Image
 3918      00000000 
 3919              		.weak	_ZTV8Fl_Image
 3920              		.section	.rodata._ZTV8Fl_Image,"aG",@progbits,_ZTV8Fl_Image,comdat
 3921              		.align 8
 3924              	_ZTV8Fl_Image:
 3925 0000 00000000 		.quad	0
 3925      00000000 
 3926 0008 00000000 		.quad	_ZTI8Fl_Image
 3926      00000000 
 3927 0010 00000000 		.quad	_ZN8Fl_ImageD1Ev
 3927      00000000 
 3928 0018 00000000 		.quad	_ZN8Fl_ImageD0Ev
 3928      00000000 
 3929 0020 00000000 		.quad	_ZN8Fl_Image4copyEii
 3929      00000000 
 3930 0028 00000000 		.quad	_ZN8Fl_Image13color_averageEjf
 3930      00000000 
 3931 0030 00000000 		.quad	_ZN8Fl_Image10desaturateEv
 3931      00000000 
 3932 0038 00000000 		.quad	_ZN8Fl_Image5labelEP9Fl_Widget
 3932      00000000 
 3933 0040 00000000 		.quad	_ZN8Fl_Image5labelEP12Fl_Menu_Item
 3933      00000000 
 3934 0048 00000000 		.quad	_ZN8Fl_Image4drawEiiiiii
 3934      00000000 
 3935 0050 00000000 		.quad	_ZN8Fl_Image7uncacheEv
 3935      00000000 
 3936              		.weak	_ZTV12Fl_RGB_Image
 3937              		.section	.rodata._ZTV12Fl_RGB_Image,"aG",@progbits,_ZTV12Fl_RGB_Image,comdat
 3938              		.align 8
 3941              	_ZTV12Fl_RGB_Image:
 3942 0000 00000000 		.quad	0
 3942      00000000 
 3943 0008 00000000 		.quad	_ZTI12Fl_RGB_Image
 3943      00000000 
 3944 0010 00000000 		.quad	_ZN12Fl_RGB_ImageD1Ev
 3944      00000000 
 3945 0018 00000000 		.quad	_ZN12Fl_RGB_ImageD0Ev
 3945      00000000 
 3946 0020 00000000 		.quad	_ZN12Fl_RGB_Image4copyEii
 3946      00000000 
 3947 0028 00000000 		.quad	_ZN12Fl_RGB_Image13color_averageEjf
 3947      00000000 
 3948 0030 00000000 		.quad	_ZN12Fl_RGB_Image10desaturateEv
 3948      00000000 
 3949 0038 00000000 		.quad	_ZN12Fl_RGB_Image5labelEP9Fl_Widget
 3949      00000000 
 3950 0040 00000000 		.quad	_ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item
 3950      00000000 
 3951 0048 00000000 		.quad	_ZN12Fl_RGB_Image4drawEiiiiii
 3951      00000000 
 3952 0050 00000000 		.quad	_ZN12Fl_RGB_Image7uncacheEv
 3952      00000000 
 3953              		.globl	_ZN12Fl_RGB_Image9max_size_E
 3954              		.section	.data._ZN12Fl_RGB_Image9max_size_E,"aw",@progbits
 3955              		.align 8
 3958              	_ZN12Fl_RGB_Image9max_size_E:
 3959 0000 FFFFFFFF 		.quad	-1
 3959      FFFFFFFF 
 3960              		.globl	_ZN8Fl_Image12RGB_scaling_E
 3961              		.section	.bss._ZN8Fl_Image12RGB_scaling_E,"aw",@nobits
 3962              		.align 4
 3965              	_ZN8Fl_Image12RGB_scaling_E:
 3966 0000 00000000 		.zero	4
 3967              		.section	.rodata.cst4,"aM",@progbits,4
 3968              		.align 4
 3969              	.LC14:
 3970 0000 0000803F 		.long	1065353216
 3971              		.align 4
 3972              	.LC15:
 3973 0004 00007F43 		.long	1132396544
 3974              		.align 4
 3975              	.LC21:
 3976 0008 00008043 		.long	1132462080
 3977              		.text
 3978              	.Letext0:
 3979              		.section	.text.unlikely._ZN8Fl_ImageD2Ev
 3980              	.Letext_cold0:
 3981              		.file 8 "fltk-1.3.4-1/FL/fl_types.h"
 3982              		.file 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h"
 3983              		.file 10 "/usr/include/x86_64-linux-gnu/bits/types.h"
 3984              		.file 11 "/usr/include/libio.h"
 3985              		.file 12 "fltk-1.3.4-1/FL/Enumerations.H"
 3986              		.file 13 "fltk-1.3.4-1/FL/Fl.H"
 3987              		.file 14 "/usr/include/X11/X.h"
 3988              		.file 15 "/usr/include/X11/Xlib.h"
 3989              		.file 16 "/usr/include/X11/Xutil.h"
 3990              		.file 17 "fltk-1.3.4-1/FL/x.H"
 3991              		.file 18 "/usr/include/stdio.h"
DEFINED SYMBOLS
                            *ABS*:0000000000000000 Fl_Image.cxx
     /tmp/ccXos8ia.s:16     .text._ZN8Fl_ImageD2Ev:0000000000000000 _ZN8Fl_ImageD2Ev
     /tmp/ccXos8ia.s:16     .text._ZN8Fl_ImageD2Ev:0000000000000000 _ZN8Fl_ImageD1Ev
     /tmp/ccXos8ia.s:41     .text._ZN8Fl_Image13color_averageEjf:0000000000000000 _ZN8Fl_Image13color_averageEjf
     /tmp/ccXos8ia.s:63     .text._ZN8Fl_Image10desaturateEv:0000000000000000 _ZN8Fl_Image10desaturateEv
     /tmp/ccXos8ia.s:63     .text._ZN8Fl_Image10desaturateEv:0000000000000000 _ZN8Fl_Image7uncacheEv
     /tmp/ccXos8ia.s:87     .text._ZN8Fl_Image5labelEP9Fl_Widget:0000000000000000 _ZN8Fl_Image5labelEP9Fl_Widget
     /tmp/ccXos8ia.s:117    .text._ZN8Fl_Image9labeltypeEPK8Fl_Labeliiiij:0000000000000000 _ZN8Fl_Image9labeltypeEPK8Fl_Labeliiiij
     /tmp/ccXos8ia.s:274    .text._ZN8Fl_Image7measureEPK8Fl_LabelRiS3_:0000000000000000 _ZN8Fl_Image7measureEPK8Fl_LabelRiS3_
     /tmp/ccXos8ia.s:307    .text._ZN12Fl_RGB_Image4drawEiiiiii:0000000000000000 _ZN12Fl_RGB_Image4drawEiiiiii
     /tmp/ccXos8ia.s:357    .text._ZN12Fl_RGB_Image5labelEP9Fl_Widget:0000000000000000 _ZN12Fl_RGB_Image5labelEP9Fl_Widget
     /tmp/ccXos8ia.s:386    .text._ZN8Fl_ImageD0Ev:0000000000000000 _ZN8Fl_ImageD0Ev
     /tmp/ccXos8ia.s:410    .text._ZN8Fl_Image4copyEii:0000000000000000 _ZN8Fl_Image4copyEii
     /tmp/ccXos8ia.s:3924   .rodata._ZTV8Fl_Image:0000000000000000 _ZTV8Fl_Image
     /tmp/ccXos8ia.s:473    .text._ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item:0000000000000000 _ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item
     /tmp/ccXos8ia.s:473    .text._ZN12Fl_RGB_Image5labelEP12Fl_Menu_Item:0000000000000000 _ZN8Fl_Image5labelEP12Fl_Menu_Item
     /tmp/ccXos8ia.s:535    .text._ZN12Fl_RGB_Image7uncacheEv:0000000000000000 _ZN12Fl_RGB_Image7uncacheEv
     /tmp/ccXos8ia.s:606    .text._ZN12Fl_RGB_ImageD2Ev:0000000000000000 _ZN12Fl_RGB_ImageD2Ev
     /tmp/ccXos8ia.s:3941   .rodata._ZTV12Fl_RGB_Image:0000000000000000 _ZTV12Fl_RGB_Image
     /tmp/ccXos8ia.s:606    .text._ZN12Fl_RGB_ImageD2Ev:0000000000000000 _ZN12Fl_RGB_ImageD1Ev
     /tmp/ccXos8ia.s:667    .text._ZN12Fl_RGB_ImageD0Ev:0000000000000000 _ZN12Fl_RGB_ImageD0Ev
     /tmp/ccXos8ia.s:702    .text._ZN12Fl_RGB_Image4copyEii:0000000000000000 _ZN12Fl_RGB_Image4copyEii
     /tmp/ccXos8ia.s:3965   .bss._ZN8Fl_Image12RGB_scaling_E:0000000000000000 _ZN8Fl_Image12RGB_scaling_E
     /tmp/ccXos8ia.s:1681   .text._ZN8Fl_Image10draw_emptyEii.part.13:0000000000000000 _ZN8Fl_Image10draw_emptyEii.part.13
     /tmp/ccXos8ia.s:1807   .text._ZN8Fl_Image4drawEiiiiii:0000000000000000 _ZN8Fl_Image4drawEiiiiii
     /tmp/ccXos8ia.s:1846   .text._ZN12Fl_RGB_Image10desaturateEv:0000000000000000 _ZN12Fl_RGB_Image10desaturateEv
     /tmp/ccXos8ia.s:2121   .text._ZN12Fl_RGB_Image13color_averageEjf:0000000000000000 _ZN12Fl_RGB_Image13color_averageEjf
     /tmp/ccXos8ia.s:2509   .text._ZN8Fl_ImageC2Eiii:0000000000000000 _ZN8Fl_ImageC2Eiii
     /tmp/ccXos8ia.s:2509   .text._ZN8Fl_ImageC2Eiii:0000000000000000 _ZN8Fl_ImageC1Eiii
     /tmp/ccXos8ia.s:2543   .text._ZN8Fl_Image10draw_emptyEii:0000000000000000 _ZN8Fl_Image10draw_emptyEii
     /tmp/ccXos8ia.s:2579   .text._ZN8Fl_Image4failEv:0000000000000000 _ZN8Fl_Image4failEv
     /tmp/ccXos8ia.s:2628   .text._ZN8Fl_Image11RGB_scalingE14Fl_RGB_Scaling:0000000000000000 _ZN8Fl_Image11RGB_scalingE14Fl_RGB_Scaling
     /tmp/ccXos8ia.s:2652   .text._ZN8Fl_Image11RGB_scalingEv:0000000000000000 _ZN8Fl_Image11RGB_scalingEv
     /tmp/ccXos8ia.s:2675   .text._ZN12Fl_RGB_ImageC2EPKhiiii:0000000000000000 _ZN12Fl_RGB_ImageC2EPKhiiii
     /tmp/ccXos8ia.s:2675   .text._ZN12Fl_RGB_ImageC2EPKhiiii:0000000000000000 _ZN12Fl_RGB_ImageC1EPKhiiii
     /tmp/ccXos8ia.s:2735   .text._ZN12Fl_RGB_ImageC2EPK9Fl_Pixmapj:0000000000000000 _ZN12Fl_RGB_ImageC2EPK9Fl_Pixmapj
     /tmp/ccXos8ia.s:2735   .text._ZN12Fl_RGB_ImageC2EPK9Fl_Pixmapj:0000000000000000 _ZN12Fl_RGB_ImageC1EPK9Fl_Pixmapj
     /tmp/ccXos8ia.s:2843   .text._ZN18Fl_Graphics_Driver11draw_scaledEP8Fl_Imageiiii:0000000000000000 _ZN18Fl_Graphics_Driver11draw_scaledEP8Fl_Imageiiii
     /tmp/ccXos8ia.s:2867   .text._ZN23Fl_Xlib_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii:0000000000000000 _ZN23Fl_Xlib_Graphics_Driver4drawEP12Fl_RGB_Imageiiiiii
     /tmp/ccXos8ia.s:3893   .rodata._ZTS8Fl_Image:0000000000000000 _ZTS8Fl_Image
     /tmp/ccXos8ia.s:3900   .rodata._ZTI8Fl_Image:0000000000000000 _ZTI8Fl_Image
     /tmp/ccXos8ia.s:3908   .rodata._ZTS12Fl_RGB_Image:0000000000000000 _ZTS12Fl_RGB_Image
     /tmp/ccXos8ia.s:3915   .rodata._ZTI12Fl_RGB_Image:0000000000000000 _ZTI12Fl_RGB_Image
     /tmp/ccXos8ia.s:3958   .data._ZN12Fl_RGB_Image9max_size_E:0000000000000000 _ZN12Fl_RGB_Image9max_size_E
     /tmp/ccXos8ia.s:3969   .rodata.cst4:0000000000000000 .LC14
     /tmp/ccXos8ia.s:3972   .rodata.cst4:0000000000000004 .LC15
     /tmp/ccXos8ia.s:3975   .rodata.cst4:0000000000000008 .LC21
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
_ZdlPv
_Znwm
_ZN2Fl13set_labeltypeE12Fl_LabeltypePFvPK8Fl_LabeliiiijEPFvS3_RiS6_E
_Z17fl_delete_bitmaskm
fl_display
XFreePixmap
_ZdaPv
_Znam
memcpy
__memcpy_chk
__stack_chk_fail
_ZN2Fl9get_colorEjRhS0_S0_
_Z17fl_convert_pixmapPKPKcPhj
_Z13fl_read_imagePhiiiii
_ZN23Fl_Xlib_Graphics_Driver14copy_offscreenEiiiimii
fl_gc
XSetClipOrigin
_ZN18Fl_Graphics_Driver12restore_clipEv
_Z24fl_can_do_alpha_blendingv
fl_screen
fl_visual
XCreatePixmap
_ZN17Fl_Surface_Device8_surfaceE
fl_window
_ZN17Fl_Display_Device14display_deviceEv
XSetClipMask
_ZN23Fl_Xlib_Graphics_Driver25copy_offscreen_with_alphaEiiiimii
_ZN17Fl_Surface_Device15default_surfaceEv
_ZTVN10__cxxabiv117__class_type_infoE
_ZTVN10__cxxabiv120__si_class_type_infoE
